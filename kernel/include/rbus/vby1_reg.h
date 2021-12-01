/**
* @file Merlin5_DesignSpec_Vby1
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_VBY1_REG_H_
#define _RBUS_VBY1_REG_H_

#include "rbus_types.h"



//  VBY1 Register Address
#define  VBY1_VIDEO_FORMAT                                                      0x1802D700
#define  VBY1_VIDEO_FORMAT_reg_addr                                              "0xB802D700"
#define  VBY1_VIDEO_FORMAT_reg                                                   0xB802D700
#define  VBY1_VIDEO_FORMAT_inst_addr                                             "0x0000"
#define  set_VBY1_VIDEO_FORMAT_reg(data)                                         (*((volatile unsigned int*)VBY1_VIDEO_FORMAT_reg)=data)
#define  get_VBY1_VIDEO_FORMAT_reg                                               (*((volatile unsigned int*)VBY1_VIDEO_FORMAT_reg))
#define  VBY1_VIDEO_FORMAT_vby1_aphy0_7_in_sel_shift                             (28)
#define  VBY1_VIDEO_FORMAT_vby1_aphy8_15_in_sel_shift                            (26)
#define  VBY1_VIDEO_FORMAT_lclk_inv_sel_shift                                    (23)
#define  VBY1_VIDEO_FORMAT_vby1_dclk_div_sel_shift                               (20)
#define  VBY1_VIDEO_FORMAT_color_format_shift                                    (16)
#define  VBY1_VIDEO_FORMAT_win_shift                                             (0)
#define  VBY1_VIDEO_FORMAT_vby1_aphy0_7_in_sel_mask                              (0x30000000)
#define  VBY1_VIDEO_FORMAT_vby1_aphy8_15_in_sel_mask                             (0x0C000000)
#define  VBY1_VIDEO_FORMAT_lclk_inv_sel_mask                                     (0x00800000)
#define  VBY1_VIDEO_FORMAT_vby1_dclk_div_sel_mask                                (0x00700000)
#define  VBY1_VIDEO_FORMAT_color_format_mask                                     (0x000F0000)
#define  VBY1_VIDEO_FORMAT_win_mask                                              (0x000003FF)
#define  VBY1_VIDEO_FORMAT_vby1_aphy0_7_in_sel(data)                             (0x30000000&((data)<<28))
#define  VBY1_VIDEO_FORMAT_vby1_aphy8_15_in_sel(data)                            (0x0C000000&((data)<<26))
#define  VBY1_VIDEO_FORMAT_lclk_inv_sel(data)                                    (0x00800000&((data)<<23))
#define  VBY1_VIDEO_FORMAT_vby1_dclk_div_sel(data)                               (0x00700000&((data)<<20))
#define  VBY1_VIDEO_FORMAT_color_format(data)                                    (0x000F0000&((data)<<16))
#define  VBY1_VIDEO_FORMAT_win(data)                                             (0x000003FF&(data))
#define  VBY1_VIDEO_FORMAT_get_vby1_aphy0_7_in_sel(data)                         ((0x30000000&(data))>>28)
#define  VBY1_VIDEO_FORMAT_get_vby1_aphy8_15_in_sel(data)                        ((0x0C000000&(data))>>26)
#define  VBY1_VIDEO_FORMAT_get_lclk_inv_sel(data)                                ((0x00800000&(data))>>23)
#define  VBY1_VIDEO_FORMAT_get_vby1_dclk_div_sel(data)                           ((0x00700000&(data))>>20)
#define  VBY1_VIDEO_FORMAT_get_color_format(data)                                ((0x000F0000&(data))>>16)
#define  VBY1_VIDEO_FORMAT_get_win(data)                                         (0x000003FF&(data))

#define  VBY1_LANE_STATUS                                                       0x1802D704
#define  VBY1_LANE_STATUS_reg_addr                                               "0xB802D704"
#define  VBY1_LANE_STATUS_reg                                                    0xB802D704
#define  VBY1_LANE_STATUS_inst_addr                                              "0x0001"
#define  set_VBY1_LANE_STATUS_reg(data)                                          (*((volatile unsigned int*)VBY1_LANE_STATUS_reg)=data)
#define  get_VBY1_LANE_STATUS_reg                                                (*((volatile unsigned int*)VBY1_LANE_STATUS_reg))
#define  VBY1_LANE_STATUS_lane_count_shift                                       (16)
#define  VBY1_LANE_STATUS_byte_mode_shift                                        (0)
#define  VBY1_LANE_STATUS_lane_count_mask                                        (0x001F0000)
#define  VBY1_LANE_STATUS_byte_mode_mask                                         (0x00000007)
#define  VBY1_LANE_STATUS_lane_count(data)                                       (0x001F0000&((data)<<16))
#define  VBY1_LANE_STATUS_byte_mode(data)                                        (0x00000007&(data))
#define  VBY1_LANE_STATUS_get_lane_count(data)                                   ((0x001F0000&(data))>>16)
#define  VBY1_LANE_STATUS_get_byte_mode(data)                                    (0x00000007&(data))

#define  VBY1_CTL                                                               0x1802D708
#define  VBY1_CTL_reg_addr                                                       "0xB802D708"
#define  VBY1_CTL_reg                                                            0xB802D708
#define  VBY1_CTL_inst_addr                                                      "0x0002"
#define  set_VBY1_CTL_reg(data)                                                  (*((volatile unsigned int*)VBY1_CTL_reg)=data)
#define  get_VBY1_CTL_reg                                                        (*((volatile unsigned int*)VBY1_CTL_reg))
#define  VBY1_CTL_ctl_shift                                                      (0)
#define  VBY1_CTL_ctl_mask                                                       (0x0000FFFF)
#define  VBY1_CTL_ctl(data)                                                      (0x0000FFFF&(data))
#define  VBY1_CTL_get_ctl(data)                                                  (0x0000FFFF&(data))

#define  VBY1_TRANSMIT_CONTROL                                                  0x1802D70C
#define  VBY1_TRANSMIT_CONTROL_reg_addr                                          "0xB802D70C"
#define  VBY1_TRANSMIT_CONTROL_reg                                               0xB802D70C
#define  VBY1_TRANSMIT_CONTROL_inst_addr                                         "0x0003"
#define  set_VBY1_TRANSMIT_CONTROL_reg(data)                                     (*((volatile unsigned int*)VBY1_TRANSMIT_CONTROL_reg)=data)
#define  get_VBY1_TRANSMIT_CONTROL_reg                                           (*((volatile unsigned int*)VBY1_TRANSMIT_CONTROL_reg))
#define  VBY1_TRANSMIT_CONTROL_reg_en_shift                                      (31)
#define  VBY1_TRANSMIT_CONTROL_pll_stable_shift                                  (30)
#define  VBY1_TRANSMIT_CONTROL_transfer_en_shift                                 (29)
#define  VBY1_TRANSMIT_CONTROL_video_trans_mode_shift                            (28)
#define  VBY1_TRANSMIT_CONTROL_debounce_cnt_shift                                (24)
#define  VBY1_TRANSMIT_CONTROL_bs_after_aln_shift                                (23)
#define  VBY1_TRANSMIT_CONTROL_be_before_aln_shift                               (22)
#define  VBY1_TRANSMIT_CONTROL_reg_delay_shift                                   (0)
#define  VBY1_TRANSMIT_CONTROL_reg_en_mask                                       (0x80000000)
#define  VBY1_TRANSMIT_CONTROL_pll_stable_mask                                   (0x40000000)
#define  VBY1_TRANSMIT_CONTROL_transfer_en_mask                                  (0x20000000)
#define  VBY1_TRANSMIT_CONTROL_video_trans_mode_mask                             (0x10000000)
#define  VBY1_TRANSMIT_CONTROL_debounce_cnt_mask                                 (0x0F000000)
#define  VBY1_TRANSMIT_CONTROL_bs_after_aln_mask                                 (0x00800000)
#define  VBY1_TRANSMIT_CONTROL_be_before_aln_mask                                (0x00400000)
#define  VBY1_TRANSMIT_CONTROL_reg_delay_mask                                    (0x003FFFFF)
#define  VBY1_TRANSMIT_CONTROL_reg_en(data)                                      (0x80000000&((data)<<31))
#define  VBY1_TRANSMIT_CONTROL_pll_stable(data)                                  (0x40000000&((data)<<30))
#define  VBY1_TRANSMIT_CONTROL_transfer_en(data)                                 (0x20000000&((data)<<29))
#define  VBY1_TRANSMIT_CONTROL_video_trans_mode(data)                            (0x10000000&((data)<<28))
#define  VBY1_TRANSMIT_CONTROL_debounce_cnt(data)                                (0x0F000000&((data)<<24))
#define  VBY1_TRANSMIT_CONTROL_bs_after_aln(data)                                (0x00800000&((data)<<23))
#define  VBY1_TRANSMIT_CONTROL_be_before_aln(data)                               (0x00400000&((data)<<22))
#define  VBY1_TRANSMIT_CONTROL_reg_delay(data)                                   (0x003FFFFF&(data))
#define  VBY1_TRANSMIT_CONTROL_get_reg_en(data)                                  ((0x80000000&(data))>>31)
#define  VBY1_TRANSMIT_CONTROL_get_pll_stable(data)                              ((0x40000000&(data))>>30)
#define  VBY1_TRANSMIT_CONTROL_get_transfer_en(data)                             ((0x20000000&(data))>>29)
#define  VBY1_TRANSMIT_CONTROL_get_video_trans_mode(data)                        ((0x10000000&(data))>>28)
#define  VBY1_TRANSMIT_CONTROL_get_debounce_cnt(data)                            ((0x0F000000&(data))>>24)
#define  VBY1_TRANSMIT_CONTROL_get_bs_after_aln(data)                            ((0x00800000&(data))>>23)
#define  VBY1_TRANSMIT_CONTROL_get_be_before_aln(data)                           ((0x00400000&(data))>>22)
#define  VBY1_TRANSMIT_CONTROL_get_reg_delay(data)                               (0x003FFFFF&(data))

#define  VBY1_TRANSMIT_STATUS                                                   0x1802D710
#define  VBY1_TRANSMIT_STATUS_reg_addr                                           "0xB802D710"
#define  VBY1_TRANSMIT_STATUS_reg                                                0xB802D710
#define  VBY1_TRANSMIT_STATUS_inst_addr                                          "0x0004"
#define  set_VBY1_TRANSMIT_STATUS_reg(data)                                      (*((volatile unsigned int*)VBY1_TRANSMIT_STATUS_reg)=data)
#define  get_VBY1_TRANSMIT_STATUS_reg                                            (*((volatile unsigned int*)VBY1_TRANSMIT_STATUS_reg))
#define  VBY1_TRANSMIT_STATUS_dummy_31_8_shift                                   (8)
#define  VBY1_TRANSMIT_STATUS_aln_finish_shift                                   (5)
#define  VBY1_TRANSMIT_STATUS_video_en_shift                                     (2)
#define  VBY1_TRANSMIT_STATUS_aln_en_shift                                       (1)
#define  VBY1_TRANSMIT_STATUS_cdr_en_shift                                       (0)
#define  VBY1_TRANSMIT_STATUS_dummy_31_8_mask                                    (0xFFFFFF00)
#define  VBY1_TRANSMIT_STATUS_aln_finish_mask                                    (0x00000020)
#define  VBY1_TRANSMIT_STATUS_video_en_mask                                      (0x00000004)
#define  VBY1_TRANSMIT_STATUS_aln_en_mask                                        (0x00000002)
#define  VBY1_TRANSMIT_STATUS_cdr_en_mask                                        (0x00000001)
#define  VBY1_TRANSMIT_STATUS_dummy_31_8(data)                                   (0xFFFFFF00&((data)<<8))
#define  VBY1_TRANSMIT_STATUS_aln_finish(data)                                   (0x00000020&((data)<<5))
#define  VBY1_TRANSMIT_STATUS_video_en(data)                                     (0x00000004&((data)<<2))
#define  VBY1_TRANSMIT_STATUS_aln_en(data)                                       (0x00000002&((data)<<1))
#define  VBY1_TRANSMIT_STATUS_cdr_en(data)                                       (0x00000001&(data))
#define  VBY1_TRANSMIT_STATUS_get_dummy_31_8(data)                               ((0xFFFFFF00&(data))>>8)
#define  VBY1_TRANSMIT_STATUS_get_aln_finish(data)                               ((0x00000020&(data))>>5)
#define  VBY1_TRANSMIT_STATUS_get_video_en(data)                                 ((0x00000004&(data))>>2)
#define  VBY1_TRANSMIT_STATUS_get_aln_en(data)                                   ((0x00000002&(data))>>1)
#define  VBY1_TRANSMIT_STATUS_get_cdr_en(data)                                   (0x00000001&(data))

#define  VBY1_THREE_FLAG                                                        0x1802D714
#define  VBY1_THREE_FLAG_reg_addr                                                "0xB802D714"
#define  VBY1_THREE_FLAG_reg                                                     0xB802D714
#define  VBY1_THREE_FLAG_inst_addr                                               "0x0005"
#define  set_VBY1_THREE_FLAG_reg(data)                                           (*((volatile unsigned int*)VBY1_THREE_FLAG_reg)=data)
#define  get_VBY1_THREE_FLAG_reg                                                 (*((volatile unsigned int*)VBY1_THREE_FLAG_reg))
#define  VBY1_THREE_FLAG_three_mode_shift                                        (1)
#define  VBY1_THREE_FLAG_three_en_shift                                          (0)
#define  VBY1_THREE_FLAG_three_mode_mask                                         (0x00000006)
#define  VBY1_THREE_FLAG_three_en_mask                                           (0x00000001)
#define  VBY1_THREE_FLAG_three_mode(data)                                        (0x00000006&((data)<<1))
#define  VBY1_THREE_FLAG_three_en(data)                                          (0x00000001&(data))
#define  VBY1_THREE_FLAG_get_three_mode(data)                                    ((0x00000006&(data))>>1)
#define  VBY1_THREE_FLAG_get_three_en(data)                                      (0x00000001&(data))

#define  VBY1_CRC_CONTROL                                                       0x1802D718
#define  VBY1_CRC_CONTROL_reg_addr                                               "0xB802D718"
#define  VBY1_CRC_CONTROL_reg                                                    0xB802D718
#define  VBY1_CRC_CONTROL_inst_addr                                              "0x0006"
#define  set_VBY1_CRC_CONTROL_reg(data)                                          (*((volatile unsigned int*)VBY1_CRC_CONTROL_reg)=data)
#define  get_VBY1_CRC_CONTROL_reg                                                (*((volatile unsigned int*)VBY1_CRC_CONTROL_reg))
#define  VBY1_CRC_CONTROL_lane_crc_en_shift                                      (16)
#define  VBY1_CRC_CONTROL_reg_crc_auto_cmp_en_shift                              (2)
#define  VBY1_CRC_CONTROL_reg_crc_conti_shift                                    (1)
#define  VBY1_CRC_CONTROL_reg_crc_start_shift                                    (0)
#define  VBY1_CRC_CONTROL_lane_crc_en_mask                                       (0xFFFF0000)
#define  VBY1_CRC_CONTROL_reg_crc_auto_cmp_en_mask                               (0x00000004)
#define  VBY1_CRC_CONTROL_reg_crc_conti_mask                                     (0x00000002)
#define  VBY1_CRC_CONTROL_reg_crc_start_mask                                     (0x00000001)
#define  VBY1_CRC_CONTROL_lane_crc_en(data)                                      (0xFFFF0000&((data)<<16))
#define  VBY1_CRC_CONTROL_reg_crc_auto_cmp_en(data)                              (0x00000004&((data)<<2))
#define  VBY1_CRC_CONTROL_reg_crc_conti(data)                                    (0x00000002&((data)<<1))
#define  VBY1_CRC_CONTROL_reg_crc_start(data)                                    (0x00000001&(data))
#define  VBY1_CRC_CONTROL_get_lane_crc_en(data)                                  ((0xFFFF0000&(data))>>16)
#define  VBY1_CRC_CONTROL_get_reg_crc_auto_cmp_en(data)                          ((0x00000004&(data))>>2)
#define  VBY1_CRC_CONTROL_get_reg_crc_conti(data)                                ((0x00000002&(data))>>1)
#define  VBY1_CRC_CONTROL_get_reg_crc_start(data)                                (0x00000001&(data))

#define  VBY1_CRC_RESULT                                                        0x1802D71C
#define  VBY1_CRC_RESULT_reg_addr                                                "0xB802D71C"
#define  VBY1_CRC_RESULT_reg                                                     0xB802D71C
#define  VBY1_CRC_RESULT_inst_addr                                               "0x0007"
#define  set_VBY1_CRC_RESULT_reg(data)                                           (*((volatile unsigned int*)VBY1_CRC_RESULT_reg)=data)
#define  get_VBY1_CRC_RESULT_reg                                                 (*((volatile unsigned int*)VBY1_CRC_RESULT_reg))
#define  VBY1_CRC_RESULT_crc_result_shift                                        (0)
#define  VBY1_CRC_RESULT_crc_result_mask                                         (0xFFFFFFFF)
#define  VBY1_CRC_RESULT_crc_result(data)                                        (0xFFFFFFFF&(data))
#define  VBY1_CRC_RESULT_get_crc_result(data)                                    (0xFFFFFFFF&(data))

#define  VBY1_CRC_DES                                                           0x1802D720
#define  VBY1_CRC_DES_reg_addr                                                   "0xB802D720"
#define  VBY1_CRC_DES_reg                                                        0xB802D720
#define  VBY1_CRC_DES_inst_addr                                                  "0x0008"
#define  set_VBY1_CRC_DES_reg(data)                                              (*((volatile unsigned int*)VBY1_CRC_DES_reg)=data)
#define  get_VBY1_CRC_DES_reg                                                    (*((volatile unsigned int*)VBY1_CRC_DES_reg))
#define  VBY1_CRC_DES_reg_crc_des_shift                                          (0)
#define  VBY1_CRC_DES_reg_crc_des_mask                                           (0xFFFFFFFF)
#define  VBY1_CRC_DES_reg_crc_des(data)                                          (0xFFFFFFFF&(data))
#define  VBY1_CRC_DES_get_reg_crc_des(data)                                      (0xFFFFFFFF&(data))

#define  VBY1_CRC_ERROR_CNT                                                     0x1802D724
#define  VBY1_CRC_ERROR_CNT_reg_addr                                             "0xB802D724"
#define  VBY1_CRC_ERROR_CNT_reg                                                  0xB802D724
#define  VBY1_CRC_ERROR_CNT_inst_addr                                            "0x0009"
#define  set_VBY1_CRC_ERROR_CNT_reg(data)                                        (*((volatile unsigned int*)VBY1_CRC_ERROR_CNT_reg)=data)
#define  get_VBY1_CRC_ERROR_CNT_reg                                              (*((volatile unsigned int*)VBY1_CRC_ERROR_CNT_reg))
#define  VBY1_CRC_ERROR_CNT_crc_err_cnt_shift                                    (0)
#define  VBY1_CRC_ERROR_CNT_crc_err_cnt_mask                                     (0x0000FFFF)
#define  VBY1_CRC_ERROR_CNT_crc_err_cnt(data)                                    (0x0000FFFF&(data))
#define  VBY1_CRC_ERROR_CNT_get_crc_err_cnt(data)                                (0x0000FFFF&(data))

#define  VBY1_ASYNC_FIFO_RST                                                    0x1802D728
#define  VBY1_ASYNC_FIFO_RST_reg_addr                                            "0xB802D728"
#define  VBY1_ASYNC_FIFO_RST_reg                                                 0xB802D728
#define  VBY1_ASYNC_FIFO_RST_inst_addr                                           "0x000A"
#define  set_VBY1_ASYNC_FIFO_RST_reg(data)                                       (*((volatile unsigned int*)VBY1_ASYNC_FIFO_RST_reg)=data)
#define  get_VBY1_ASYNC_FIFO_RST_reg                                             (*((volatile unsigned int*)VBY1_ASYNC_FIFO_RST_reg))
#define  VBY1_ASYNC_FIFO_RST_fifo_vs_rst_en_shift                                (16)
#define  VBY1_ASYNC_FIFO_RST_fifo_vs_rst_delay_shift                             (0)
#define  VBY1_ASYNC_FIFO_RST_fifo_vs_rst_en_mask                                 (0x00030000)
#define  VBY1_ASYNC_FIFO_RST_fifo_vs_rst_delay_mask                              (0x0000FFFF)
#define  VBY1_ASYNC_FIFO_RST_fifo_vs_rst_en(data)                                (0x00030000&((data)<<16))
#define  VBY1_ASYNC_FIFO_RST_fifo_vs_rst_delay(data)                             (0x0000FFFF&(data))
#define  VBY1_ASYNC_FIFO_RST_get_fifo_vs_rst_en(data)                            ((0x00030000&(data))>>16)
#define  VBY1_ASYNC_FIFO_RST_get_fifo_vs_rst_delay(data)                         (0x0000FFFF&(data))

#define  VBY1_VBY1_DEBUG                                                        0x1802D72C
#define  VBY1_VBY1_DEBUG_reg_addr                                                "0xB802D72C"
#define  VBY1_VBY1_DEBUG_reg                                                     0xB802D72C
#define  VBY1_VBY1_DEBUG_inst_addr                                               "0x000B"
#define  set_VBY1_VBY1_DEBUG_reg(data)                                           (*((volatile unsigned int*)VBY1_VBY1_DEBUG_reg)=data)
#define  get_VBY1_VBY1_DEBUG_reg                                                 (*((volatile unsigned int*)VBY1_VBY1_DEBUG_reg))
#define  VBY1_VBY1_DEBUG_dummy_3_0_shift                                         (0)
#define  VBY1_VBY1_DEBUG_dummy_3_0_mask                                          (0x0000000F)
#define  VBY1_VBY1_DEBUG_dummy_3_0(data)                                         (0x0000000F&(data))
#define  VBY1_VBY1_DEBUG_get_dummy_3_0(data)                                     (0x0000000F&(data))

#define  VBY1_VBY1_STATUS_FW_CTRL                                               0x1802D730
#define  VBY1_VBY1_STATUS_FW_CTRL_reg_addr                                       "0xB802D730"
#define  VBY1_VBY1_STATUS_FW_CTRL_reg                                            0xB802D730
#define  VBY1_VBY1_STATUS_FW_CTRL_inst_addr                                      "0x000C"
#define  set_VBY1_VBY1_STATUS_FW_CTRL_reg(data)                                  (*((volatile unsigned int*)VBY1_VBY1_STATUS_FW_CTRL_reg)=data)
#define  get_VBY1_VBY1_STATUS_FW_CTRL_reg                                        (*((volatile unsigned int*)VBY1_VBY1_STATUS_FW_CTRL_reg))
#define  VBY1_VBY1_STATUS_FW_CTRL_htpdn_mode_ctrl_shift                          (31)
#define  VBY1_VBY1_STATUS_FW_CTRL_lockn_mode_ctrl_shift                          (30)
#define  VBY1_VBY1_STATUS_FW_CTRL_fw_htpdn_set_shift                             (29)
#define  VBY1_VBY1_STATUS_FW_CTRL_fw_lockn_set_shift                             (28)
#define  VBY1_VBY1_STATUS_FW_CTRL_htpdn_ie_shift                                 (27)
#define  VBY1_VBY1_STATUS_FW_CTRL_lockn_ie_shift                                 (26)
#define  VBY1_VBY1_STATUS_FW_CTRL_htpdn_int_status_shift                         (25)
#define  VBY1_VBY1_STATUS_FW_CTRL_lockn_int_status_shift                         (24)
#define  VBY1_VBY1_STATUS_FW_CTRL_vs_inv_shift                                   (21)
#define  VBY1_VBY1_STATUS_FW_CTRL_hs_inv_shift                                   (20)
#define  VBY1_VBY1_STATUS_FW_CTRL_de_only_mode_vs_set_shift                      (18)
#define  VBY1_VBY1_STATUS_FW_CTRL_de_only_mode_hs_set_shift                      (17)
#define  VBY1_VBY1_STATUS_FW_CTRL_de_only_mode_shift                             (16)
#define  VBY1_VBY1_STATUS_FW_CTRL_metadata_end_shift                             (6)
#define  VBY1_VBY1_STATUS_FW_CTRL_metadata_end_ie_shift                          (5)
#define  VBY1_VBY1_STATUS_FW_CTRL_metadata_end_int_status_shift                  (4)
#define  VBY1_VBY1_STATUS_FW_CTRL_htpdn_shift                                    (3)
#define  VBY1_VBY1_STATUS_FW_CTRL_lockn_shift                                    (2)
#define  VBY1_VBY1_STATUS_FW_CTRL_hw_htpdn_shift                                 (1)
#define  VBY1_VBY1_STATUS_FW_CTRL_hw_lockn_shift                                 (0)
#define  VBY1_VBY1_STATUS_FW_CTRL_htpdn_mode_ctrl_mask                           (0x80000000)
#define  VBY1_VBY1_STATUS_FW_CTRL_lockn_mode_ctrl_mask                           (0x40000000)
#define  VBY1_VBY1_STATUS_FW_CTRL_fw_htpdn_set_mask                              (0x20000000)
#define  VBY1_VBY1_STATUS_FW_CTRL_fw_lockn_set_mask                              (0x10000000)
#define  VBY1_VBY1_STATUS_FW_CTRL_htpdn_ie_mask                                  (0x08000000)
#define  VBY1_VBY1_STATUS_FW_CTRL_lockn_ie_mask                                  (0x04000000)
#define  VBY1_VBY1_STATUS_FW_CTRL_htpdn_int_status_mask                          (0x02000000)
#define  VBY1_VBY1_STATUS_FW_CTRL_lockn_int_status_mask                          (0x01000000)
#define  VBY1_VBY1_STATUS_FW_CTRL_vs_inv_mask                                    (0x00200000)
#define  VBY1_VBY1_STATUS_FW_CTRL_hs_inv_mask                                    (0x00100000)
#define  VBY1_VBY1_STATUS_FW_CTRL_de_only_mode_vs_set_mask                       (0x00040000)
#define  VBY1_VBY1_STATUS_FW_CTRL_de_only_mode_hs_set_mask                       (0x00020000)
#define  VBY1_VBY1_STATUS_FW_CTRL_de_only_mode_mask                              (0x00010000)
#define  VBY1_VBY1_STATUS_FW_CTRL_metadata_end_mask                              (0x00000040)
#define  VBY1_VBY1_STATUS_FW_CTRL_metadata_end_ie_mask                           (0x00000020)
#define  VBY1_VBY1_STATUS_FW_CTRL_metadata_end_int_status_mask                   (0x00000010)
#define  VBY1_VBY1_STATUS_FW_CTRL_htpdn_mask                                     (0x00000008)
#define  VBY1_VBY1_STATUS_FW_CTRL_lockn_mask                                     (0x00000004)
#define  VBY1_VBY1_STATUS_FW_CTRL_hw_htpdn_mask                                  (0x00000002)
#define  VBY1_VBY1_STATUS_FW_CTRL_hw_lockn_mask                                  (0x00000001)
#define  VBY1_VBY1_STATUS_FW_CTRL_htpdn_mode_ctrl(data)                          (0x80000000&((data)<<31))
#define  VBY1_VBY1_STATUS_FW_CTRL_lockn_mode_ctrl(data)                          (0x40000000&((data)<<30))
#define  VBY1_VBY1_STATUS_FW_CTRL_fw_htpdn_set(data)                             (0x20000000&((data)<<29))
#define  VBY1_VBY1_STATUS_FW_CTRL_fw_lockn_set(data)                             (0x10000000&((data)<<28))
#define  VBY1_VBY1_STATUS_FW_CTRL_htpdn_ie(data)                                 (0x08000000&((data)<<27))
#define  VBY1_VBY1_STATUS_FW_CTRL_lockn_ie(data)                                 (0x04000000&((data)<<26))
#define  VBY1_VBY1_STATUS_FW_CTRL_htpdn_int_status(data)                         (0x02000000&((data)<<25))
#define  VBY1_VBY1_STATUS_FW_CTRL_lockn_int_status(data)                         (0x01000000&((data)<<24))
#define  VBY1_VBY1_STATUS_FW_CTRL_vs_inv(data)                                   (0x00200000&((data)<<21))
#define  VBY1_VBY1_STATUS_FW_CTRL_hs_inv(data)                                   (0x00100000&((data)<<20))
#define  VBY1_VBY1_STATUS_FW_CTRL_de_only_mode_vs_set(data)                      (0x00040000&((data)<<18))
#define  VBY1_VBY1_STATUS_FW_CTRL_de_only_mode_hs_set(data)                      (0x00020000&((data)<<17))
#define  VBY1_VBY1_STATUS_FW_CTRL_de_only_mode(data)                             (0x00010000&((data)<<16))
#define  VBY1_VBY1_STATUS_FW_CTRL_metadata_end(data)                             (0x00000040&((data)<<6))
#define  VBY1_VBY1_STATUS_FW_CTRL_metadata_end_ie(data)                          (0x00000020&((data)<<5))
#define  VBY1_VBY1_STATUS_FW_CTRL_metadata_end_int_status(data)                  (0x00000010&((data)<<4))
#define  VBY1_VBY1_STATUS_FW_CTRL_htpdn(data)                                    (0x00000008&((data)<<3))
#define  VBY1_VBY1_STATUS_FW_CTRL_lockn(data)                                    (0x00000004&((data)<<2))
#define  VBY1_VBY1_STATUS_FW_CTRL_hw_htpdn(data)                                 (0x00000002&((data)<<1))
#define  VBY1_VBY1_STATUS_FW_CTRL_hw_lockn(data)                                 (0x00000001&(data))
#define  VBY1_VBY1_STATUS_FW_CTRL_get_htpdn_mode_ctrl(data)                      ((0x80000000&(data))>>31)
#define  VBY1_VBY1_STATUS_FW_CTRL_get_lockn_mode_ctrl(data)                      ((0x40000000&(data))>>30)
#define  VBY1_VBY1_STATUS_FW_CTRL_get_fw_htpdn_set(data)                         ((0x20000000&(data))>>29)
#define  VBY1_VBY1_STATUS_FW_CTRL_get_fw_lockn_set(data)                         ((0x10000000&(data))>>28)
#define  VBY1_VBY1_STATUS_FW_CTRL_get_htpdn_ie(data)                             ((0x08000000&(data))>>27)
#define  VBY1_VBY1_STATUS_FW_CTRL_get_lockn_ie(data)                             ((0x04000000&(data))>>26)
#define  VBY1_VBY1_STATUS_FW_CTRL_get_htpdn_int_status(data)                     ((0x02000000&(data))>>25)
#define  VBY1_VBY1_STATUS_FW_CTRL_get_lockn_int_status(data)                     ((0x01000000&(data))>>24)
#define  VBY1_VBY1_STATUS_FW_CTRL_get_vs_inv(data)                               ((0x00200000&(data))>>21)
#define  VBY1_VBY1_STATUS_FW_CTRL_get_hs_inv(data)                               ((0x00100000&(data))>>20)
#define  VBY1_VBY1_STATUS_FW_CTRL_get_de_only_mode_vs_set(data)                  ((0x00040000&(data))>>18)
#define  VBY1_VBY1_STATUS_FW_CTRL_get_de_only_mode_hs_set(data)                  ((0x00020000&(data))>>17)
#define  VBY1_VBY1_STATUS_FW_CTRL_get_de_only_mode(data)                         ((0x00010000&(data))>>16)
#define  VBY1_VBY1_STATUS_FW_CTRL_get_metadata_end(data)                         ((0x00000040&(data))>>6)
#define  VBY1_VBY1_STATUS_FW_CTRL_get_metadata_end_ie(data)                      ((0x00000020&(data))>>5)
#define  VBY1_VBY1_STATUS_FW_CTRL_get_metadata_end_int_status(data)              ((0x00000010&(data))>>4)
#define  VBY1_VBY1_STATUS_FW_CTRL_get_htpdn(data)                                ((0x00000008&(data))>>3)
#define  VBY1_VBY1_STATUS_FW_CTRL_get_lockn(data)                                ((0x00000004&(data))>>2)
#define  VBY1_VBY1_STATUS_FW_CTRL_get_hw_htpdn(data)                             ((0x00000002&(data))>>1)
#define  VBY1_VBY1_STATUS_FW_CTRL_get_hw_lockn(data)                             (0x00000001&(data))

#define  VBY1_DATA_CAPTURE                                                      0x1802D734
#define  VBY1_DATA_CAPTURE_reg_addr                                              "0xB802D734"
#define  VBY1_DATA_CAPTURE_reg                                                   0xB802D734
#define  VBY1_DATA_CAPTURE_inst_addr                                             "0x000D"
#define  set_VBY1_DATA_CAPTURE_reg(data)                                         (*((volatile unsigned int*)VBY1_DATA_CAPTURE_reg)=data)
#define  get_VBY1_DATA_CAPTURE_reg                                               (*((volatile unsigned int*)VBY1_DATA_CAPTURE_reg))
#define  VBY1_DATA_CAPTURE_capture_lane_sel_shift                                (28)
#define  VBY1_DATA_CAPTURE_capture_active_only_shift                             (27)
#define  VBY1_DATA_CAPTURE_capture_v_shift                                       (16)
#define  VBY1_DATA_CAPTURE_capture_en_shift                                      (15)
#define  VBY1_DATA_CAPTURE_capture_h_shift                                       (0)
#define  VBY1_DATA_CAPTURE_capture_lane_sel_mask                                 (0xF0000000)
#define  VBY1_DATA_CAPTURE_capture_active_only_mask                              (0x08000000)
#define  VBY1_DATA_CAPTURE_capture_v_mask                                        (0x07FF0000)
#define  VBY1_DATA_CAPTURE_capture_en_mask                                       (0x00008000)
#define  VBY1_DATA_CAPTURE_capture_h_mask                                        (0x00001FFF)
#define  VBY1_DATA_CAPTURE_capture_lane_sel(data)                                (0xF0000000&((data)<<28))
#define  VBY1_DATA_CAPTURE_capture_active_only(data)                             (0x08000000&((data)<<27))
#define  VBY1_DATA_CAPTURE_capture_v(data)                                       (0x07FF0000&((data)<<16))
#define  VBY1_DATA_CAPTURE_capture_en(data)                                      (0x00008000&((data)<<15))
#define  VBY1_DATA_CAPTURE_capture_h(data)                                       (0x00001FFF&(data))
#define  VBY1_DATA_CAPTURE_get_capture_lane_sel(data)                            ((0xF0000000&(data))>>28)
#define  VBY1_DATA_CAPTURE_get_capture_active_only(data)                         ((0x08000000&(data))>>27)
#define  VBY1_DATA_CAPTURE_get_capture_v(data)                                   ((0x07FF0000&(data))>>16)
#define  VBY1_DATA_CAPTURE_get_capture_en(data)                                  ((0x00008000&(data))>>15)
#define  VBY1_DATA_CAPTURE_get_capture_h(data)                                   (0x00001FFF&(data))

#define  VBY1_DATA_CAPTURE_1                                                    0x1802D738
#define  VBY1_DATA_CAPTURE_1_reg_addr                                            "0xB802D738"
#define  VBY1_DATA_CAPTURE_1_reg                                                 0xB802D738
#define  VBY1_DATA_CAPTURE_1_inst_addr                                           "0x000E"
#define  set_VBY1_DATA_CAPTURE_1_reg(data)                                       (*((volatile unsigned int*)VBY1_DATA_CAPTURE_1_reg)=data)
#define  get_VBY1_DATA_CAPTURE_1_reg                                             (*((volatile unsigned int*)VBY1_DATA_CAPTURE_1_reg))
#define  VBY1_DATA_CAPTURE_1_dummy_7_0_shift                                     (0)
#define  VBY1_DATA_CAPTURE_1_dummy_7_0_mask                                      (0x000000FF)
#define  VBY1_DATA_CAPTURE_1_dummy_7_0(data)                                     (0x000000FF&(data))
#define  VBY1_DATA_CAPTURE_1_get_dummy_7_0(data)                                 (0x000000FF&(data))

#define  VBY1_DATA_CAPTURE_2                                                    0x1802D73C
#define  VBY1_DATA_CAPTURE_2_reg_addr                                            "0xB802D73C"
#define  VBY1_DATA_CAPTURE_2_reg                                                 0xB802D73C
#define  VBY1_DATA_CAPTURE_2_inst_addr                                           "0x000F"
#define  set_VBY1_DATA_CAPTURE_2_reg(data)                                       (*((volatile unsigned int*)VBY1_DATA_CAPTURE_2_reg)=data)
#define  get_VBY1_DATA_CAPTURE_2_reg                                             (*((volatile unsigned int*)VBY1_DATA_CAPTURE_2_reg))
#define  VBY1_DATA_CAPTURE_2_capture_data_l_shift                                (0)
#define  VBY1_DATA_CAPTURE_2_capture_data_l_mask                                 (0xFFFFFFFF)
#define  VBY1_DATA_CAPTURE_2_capture_data_l(data)                                (0xFFFFFFFF&(data))
#define  VBY1_DATA_CAPTURE_2_get_capture_data_l(data)                            (0xFFFFFFFF&(data))

#define  VBY1_DBG_EN                                                            0x1802D750
#define  VBY1_DBG_EN_reg_addr                                                    "0xB802D750"
#define  VBY1_DBG_EN_reg                                                         0xB802D750
#define  VBY1_DBG_EN_inst_addr                                                   "0x0010"
#define  set_VBY1_DBG_EN_reg(data)                                               (*((volatile unsigned int*)VBY1_DBG_EN_reg)=data)
#define  get_VBY1_DBG_EN_reg                                                     (*((volatile unsigned int*)VBY1_DBG_EN_reg))
#define  VBY1_DBG_EN_dbg_en_shift                                                (0)
#define  VBY1_DBG_EN_dbg_en_mask                                                 (0x00000001)
#define  VBY1_DBG_EN_dbg_en(data)                                                (0x00000001&(data))
#define  VBY1_DBG_EN_get_dbg_en(data)                                            (0x00000001&(data))

#define  VBY1_DBG_DATA                                                          0x1802D754
#define  VBY1_DBG_DATA_reg_addr                                                  "0xB802D754"
#define  VBY1_DBG_DATA_reg                                                       0xB802D754
#define  VBY1_DBG_DATA_inst_addr                                                 "0x0011"
#define  set_VBY1_DBG_DATA_reg(data)                                             (*((volatile unsigned int*)VBY1_DBG_DATA_reg)=data)
#define  get_VBY1_DBG_DATA_reg                                                   (*((volatile unsigned int*)VBY1_DBG_DATA_reg))
#define  VBY1_DBG_DATA_dbg_data_shift                                            (0)
#define  VBY1_DBG_DATA_dbg_data_mask                                             (0xFFFFFFFF)
#define  VBY1_DBG_DATA_dbg_data(data)                                            (0xFFFFFFFF&(data))
#define  VBY1_DBG_DATA_get_dbg_data(data)                                        (0xFFFFFFFF&(data))

#define  VBY1_DPHY_CTL                                                          0x1802D758
#define  VBY1_DPHY_CTL_reg_addr                                                  "0xB802D758"
#define  VBY1_DPHY_CTL_reg                                                       0xB802D758
#define  VBY1_DPHY_CTL_inst_addr                                                 "0x0012"
#define  set_VBY1_DPHY_CTL_reg(data)                                             (*((volatile unsigned int*)VBY1_DPHY_CTL_reg)=data)
#define  get_VBY1_DPHY_CTL_reg                                                   (*((volatile unsigned int*)VBY1_DPHY_CTL_reg))
#define  VBY1_DPHY_CTL_e8b10b_en_shift                                           (31)
#define  VBY1_DPHY_CTL_e8b10b_initial_running_disparity_shift                    (30)
#define  VBY1_DPHY_CTL_e8b10b_dis_i_shift                                        (29)
#define  VBY1_DPHY_CTL_e8b10b_dis_j_shift                                        (28)
#define  VBY1_DPHY_CTL_scr_sel_shift                                             (20)
#define  VBY1_DPHY_CTL_scramble_en_shift                                         (16)
#define  VBY1_DPHY_CTL_scramble_initial_value_shift                              (0)
#define  VBY1_DPHY_CTL_e8b10b_en_mask                                            (0x80000000)
#define  VBY1_DPHY_CTL_e8b10b_initial_running_disparity_mask                     (0x40000000)
#define  VBY1_DPHY_CTL_e8b10b_dis_i_mask                                         (0x20000000)
#define  VBY1_DPHY_CTL_e8b10b_dis_j_mask                                         (0x10000000)
#define  VBY1_DPHY_CTL_scr_sel_mask                                              (0x00100000)
#define  VBY1_DPHY_CTL_scramble_en_mask                                          (0x00010000)
#define  VBY1_DPHY_CTL_scramble_initial_value_mask                               (0x0000FFFF)
#define  VBY1_DPHY_CTL_e8b10b_en(data)                                           (0x80000000&((data)<<31))
#define  VBY1_DPHY_CTL_e8b10b_initial_running_disparity(data)                    (0x40000000&((data)<<30))
#define  VBY1_DPHY_CTL_e8b10b_dis_i(data)                                        (0x20000000&((data)<<29))
#define  VBY1_DPHY_CTL_e8b10b_dis_j(data)                                        (0x10000000&((data)<<28))
#define  VBY1_DPHY_CTL_scr_sel(data)                                             (0x00100000&((data)<<20))
#define  VBY1_DPHY_CTL_scramble_en(data)                                         (0x00010000&((data)<<16))
#define  VBY1_DPHY_CTL_scramble_initial_value(data)                              (0x0000FFFF&(data))
#define  VBY1_DPHY_CTL_get_e8b10b_en(data)                                       ((0x80000000&(data))>>31)
#define  VBY1_DPHY_CTL_get_e8b10b_initial_running_disparity(data)                ((0x40000000&(data))>>30)
#define  VBY1_DPHY_CTL_get_e8b10b_dis_i(data)                                    ((0x20000000&(data))>>29)
#define  VBY1_DPHY_CTL_get_e8b10b_dis_j(data)                                    ((0x10000000&(data))>>28)
#define  VBY1_DPHY_CTL_get_scr_sel(data)                                         ((0x00100000&(data))>>20)
#define  VBY1_DPHY_CTL_get_scramble_en(data)                                     ((0x00010000&(data))>>16)
#define  VBY1_DPHY_CTL_get_scramble_initial_value(data)                          (0x0000FFFF&(data))

#define  VBY1_DPHY_RD                                                           0x1802D75C
#define  VBY1_DPHY_RD_reg_addr                                                   "0xB802D75C"
#define  VBY1_DPHY_RD_reg                                                        0xB802D75C
#define  VBY1_DPHY_RD_inst_addr                                                  "0x0013"
#define  set_VBY1_DPHY_RD_reg(data)                                              (*((volatile unsigned int*)VBY1_DPHY_RD_reg)=data)
#define  get_VBY1_DPHY_RD_reg                                                    (*((volatile unsigned int*)VBY1_DPHY_RD_reg))
#define  VBY1_DPHY_RD_e8b10b_running_disparity_shift                             (0)
#define  VBY1_DPHY_RD_e8b10b_running_disparity_mask                              (0x0000FFFF)
#define  VBY1_DPHY_RD_e8b10b_running_disparity(data)                             (0x0000FFFF&(data))
#define  VBY1_DPHY_RD_get_e8b10b_running_disparity(data)                         (0x0000FFFF&(data))

#define  VBY1_META_CTL                                                          0x1802D774
#define  VBY1_META_CTL_reg_addr                                                  "0xB802D774"
#define  VBY1_META_CTL_reg                                                       0xB802D774
#define  VBY1_META_CTL_inst_addr                                                 "0x0014"
#define  set_VBY1_META_CTL_reg(data)                                             (*((volatile unsigned int*)VBY1_META_CTL_reg)=data)
#define  get_VBY1_META_CTL_reg                                                   (*((volatile unsigned int*)VBY1_META_CTL_reg))
#define  VBY1_META_CTL_meta_en_shift                                             (28)
#define  VBY1_META_CTL_meta_start_shift                                          (0)
#define  VBY1_META_CTL_meta_en_mask                                              (0x10000000)
#define  VBY1_META_CTL_meta_start_mask                                           (0x000FFFFF)
#define  VBY1_META_CTL_meta_en(data)                                             (0x10000000&((data)<<28))
#define  VBY1_META_CTL_meta_start(data)                                          (0x000FFFFF&(data))
#define  VBY1_META_CTL_get_meta_en(data)                                         ((0x10000000&(data))>>28)
#define  VBY1_META_CTL_get_meta_start(data)                                      (0x000FFFFF&(data))

#define  VBY1_META_CTL_1                                                        0x1802D778
#define  VBY1_META_CTL_1_reg_addr                                                "0xB802D778"
#define  VBY1_META_CTL_1_reg                                                     0xB802D778
#define  VBY1_META_CTL_1_inst_addr                                               "0x0015"
#define  set_VBY1_META_CTL_1_reg(data)                                           (*((volatile unsigned int*)VBY1_META_CTL_1_reg)=data)
#define  get_VBY1_META_CTL_1_reg                                                 (*((volatile unsigned int*)VBY1_META_CTL_1_reg))
#define  VBY1_META_CTL_1_meta_sel_shift                                          (28)
#define  VBY1_META_CTL_1_meta_end_shift                                          (0)
#define  VBY1_META_CTL_1_meta_sel_mask                                           (0x10000000)
#define  VBY1_META_CTL_1_meta_end_mask                                           (0x000FFFFF)
#define  VBY1_META_CTL_1_meta_sel(data)                                          (0x10000000&((data)<<28))
#define  VBY1_META_CTL_1_meta_end(data)                                          (0x000FFFFF&(data))
#define  VBY1_META_CTL_1_get_meta_sel(data)                                      ((0x10000000&(data))>>28)
#define  VBY1_META_CTL_1_get_meta_end(data)                                      (0x000FFFFF&(data))

#define  VBY1_META_DATA_0                                                       0x1802D788
#define  VBY1_META_DATA_0_reg_addr                                               "0xB802D788"
#define  VBY1_META_DATA_0_reg                                                    0xB802D788
#define  VBY1_META_DATA_0_inst_addr                                              "0x0016"
#define  set_VBY1_META_DATA_0_reg(data)                                          (*((volatile unsigned int*)VBY1_META_DATA_0_reg)=data)
#define  get_VBY1_META_DATA_0_reg                                                (*((volatile unsigned int*)VBY1_META_DATA_0_reg))
#define  VBY1_META_DATA_0_meta_data0_shift                                       (0)
#define  VBY1_META_DATA_0_meta_data0_mask                                        (0x0000FFFF)
#define  VBY1_META_DATA_0_meta_data0(data)                                       (0x0000FFFF&(data))
#define  VBY1_META_DATA_0_get_meta_data0(data)                                   (0x0000FFFF&(data))

#define  VBY1_META_DATA_1                                                       0x1802D78C
#define  VBY1_META_DATA_1_reg_addr                                               "0xB802D78C"
#define  VBY1_META_DATA_1_reg                                                    0xB802D78C
#define  VBY1_META_DATA_1_inst_addr                                              "0x0017"
#define  set_VBY1_META_DATA_1_reg(data)                                          (*((volatile unsigned int*)VBY1_META_DATA_1_reg)=data)
#define  get_VBY1_META_DATA_1_reg                                                (*((volatile unsigned int*)VBY1_META_DATA_1_reg))
#define  VBY1_META_DATA_1_meta_data1_shift                                       (0)
#define  VBY1_META_DATA_1_meta_data1_mask                                        (0x0000FFFF)
#define  VBY1_META_DATA_1_meta_data1(data)                                       (0x0000FFFF&(data))
#define  VBY1_META_DATA_1_get_meta_data1(data)                                   (0x0000FFFF&(data))

#define  VBY1_META_DATA_2                                                       0x1802D790
#define  VBY1_META_DATA_2_reg_addr                                               "0xB802D790"
#define  VBY1_META_DATA_2_reg                                                    0xB802D790
#define  VBY1_META_DATA_2_inst_addr                                              "0x0018"
#define  set_VBY1_META_DATA_2_reg(data)                                          (*((volatile unsigned int*)VBY1_META_DATA_2_reg)=data)
#define  get_VBY1_META_DATA_2_reg                                                (*((volatile unsigned int*)VBY1_META_DATA_2_reg))
#define  VBY1_META_DATA_2_meta_data2_shift                                       (0)
#define  VBY1_META_DATA_2_meta_data2_mask                                        (0x0000FFFF)
#define  VBY1_META_DATA_2_meta_data2(data)                                       (0x0000FFFF&(data))
#define  VBY1_META_DATA_2_get_meta_data2(data)                                   (0x0000FFFF&(data))

#define  VBY1_META_DATA_3                                                       0x1802D794
#define  VBY1_META_DATA_3_reg_addr                                               "0xB802D794"
#define  VBY1_META_DATA_3_reg                                                    0xB802D794
#define  VBY1_META_DATA_3_inst_addr                                              "0x0019"
#define  set_VBY1_META_DATA_3_reg(data)                                          (*((volatile unsigned int*)VBY1_META_DATA_3_reg)=data)
#define  get_VBY1_META_DATA_3_reg                                                (*((volatile unsigned int*)VBY1_META_DATA_3_reg))
#define  VBY1_META_DATA_3_meta_data3_shift                                       (0)
#define  VBY1_META_DATA_3_meta_data3_mask                                        (0x0000FFFF)
#define  VBY1_META_DATA_3_meta_data3(data)                                       (0x0000FFFF&(data))
#define  VBY1_META_DATA_3_get_meta_data3(data)                                   (0x0000FFFF&(data))

#define  VBY1_META_DATA_4                                                       0x1802D798
#define  VBY1_META_DATA_4_reg_addr                                               "0xB802D798"
#define  VBY1_META_DATA_4_reg                                                    0xB802D798
#define  VBY1_META_DATA_4_inst_addr                                              "0x001A"
#define  set_VBY1_META_DATA_4_reg(data)                                          (*((volatile unsigned int*)VBY1_META_DATA_4_reg)=data)
#define  get_VBY1_META_DATA_4_reg                                                (*((volatile unsigned int*)VBY1_META_DATA_4_reg))
#define  VBY1_META_DATA_4_meta_data4_shift                                       (0)
#define  VBY1_META_DATA_4_meta_data4_mask                                        (0x0000FFFF)
#define  VBY1_META_DATA_4_meta_data4(data)                                       (0x0000FFFF&(data))
#define  VBY1_META_DATA_4_get_meta_data4(data)                                   (0x0000FFFF&(data))

#define  VBY1_META_DATA_5                                                       0x1802D79C
#define  VBY1_META_DATA_5_reg_addr                                               "0xB802D79C"
#define  VBY1_META_DATA_5_reg                                                    0xB802D79C
#define  VBY1_META_DATA_5_inst_addr                                              "0x001B"
#define  set_VBY1_META_DATA_5_reg(data)                                          (*((volatile unsigned int*)VBY1_META_DATA_5_reg)=data)
#define  get_VBY1_META_DATA_5_reg                                                (*((volatile unsigned int*)VBY1_META_DATA_5_reg))
#define  VBY1_META_DATA_5_meta_data5_shift                                       (0)
#define  VBY1_META_DATA_5_meta_data5_mask                                        (0x0000FFFF)
#define  VBY1_META_DATA_5_meta_data5(data)                                       (0x0000FFFF&(data))
#define  VBY1_META_DATA_5_get_meta_data5(data)                                   (0x0000FFFF&(data))

#define  VBY1_META_DATA_6                                                       0x1802D7A0
#define  VBY1_META_DATA_6_reg_addr                                               "0xB802D7A0"
#define  VBY1_META_DATA_6_reg                                                    0xB802D7A0
#define  VBY1_META_DATA_6_inst_addr                                              "0x001C"
#define  set_VBY1_META_DATA_6_reg(data)                                          (*((volatile unsigned int*)VBY1_META_DATA_6_reg)=data)
#define  get_VBY1_META_DATA_6_reg                                                (*((volatile unsigned int*)VBY1_META_DATA_6_reg))
#define  VBY1_META_DATA_6_meta_data6_shift                                       (0)
#define  VBY1_META_DATA_6_meta_data6_mask                                        (0x0000FFFF)
#define  VBY1_META_DATA_6_meta_data6(data)                                       (0x0000FFFF&(data))
#define  VBY1_META_DATA_6_get_meta_data6(data)                                   (0x0000FFFF&(data))

#define  VBY1_META_DATA_7                                                       0x1802D7A4
#define  VBY1_META_DATA_7_reg_addr                                               "0xB802D7A4"
#define  VBY1_META_DATA_7_reg                                                    0xB802D7A4
#define  VBY1_META_DATA_7_inst_addr                                              "0x001D"
#define  set_VBY1_META_DATA_7_reg(data)                                          (*((volatile unsigned int*)VBY1_META_DATA_7_reg)=data)
#define  get_VBY1_META_DATA_7_reg                                                (*((volatile unsigned int*)VBY1_META_DATA_7_reg))
#define  VBY1_META_DATA_7_meta_data7_shift                                       (0)
#define  VBY1_META_DATA_7_meta_data7_mask                                        (0x0000FFFF)
#define  VBY1_META_DATA_7_meta_data7(data)                                       (0x0000FFFF&(data))
#define  VBY1_META_DATA_7_get_meta_data7(data)                                   (0x0000FFFF&(data))

#define  VBY1_META_DATA_8                                                       0x1802D7A8
#define  VBY1_META_DATA_8_reg_addr                                               "0xB802D7A8"
#define  VBY1_META_DATA_8_reg                                                    0xB802D7A8
#define  VBY1_META_DATA_8_inst_addr                                              "0x001E"
#define  set_VBY1_META_DATA_8_reg(data)                                          (*((volatile unsigned int*)VBY1_META_DATA_8_reg)=data)
#define  get_VBY1_META_DATA_8_reg                                                (*((volatile unsigned int*)VBY1_META_DATA_8_reg))
#define  VBY1_META_DATA_8_meta_data8_shift                                       (0)
#define  VBY1_META_DATA_8_meta_data8_mask                                        (0x0000FFFF)
#define  VBY1_META_DATA_8_meta_data8(data)                                       (0x0000FFFF&(data))
#define  VBY1_META_DATA_8_get_meta_data8(data)                                   (0x0000FFFF&(data))

#define  VBY1_META_DATA_9                                                       0x1802D7AC
#define  VBY1_META_DATA_9_reg_addr                                               "0xB802D7AC"
#define  VBY1_META_DATA_9_reg                                                    0xB802D7AC
#define  VBY1_META_DATA_9_inst_addr                                              "0x001F"
#define  set_VBY1_META_DATA_9_reg(data)                                          (*((volatile unsigned int*)VBY1_META_DATA_9_reg)=data)
#define  get_VBY1_META_DATA_9_reg                                                (*((volatile unsigned int*)VBY1_META_DATA_9_reg))
#define  VBY1_META_DATA_9_meta_data9_shift                                       (0)
#define  VBY1_META_DATA_9_meta_data9_mask                                        (0x0000FFFF)
#define  VBY1_META_DATA_9_meta_data9(data)                                       (0x0000FFFF&(data))
#define  VBY1_META_DATA_9_get_meta_data9(data)                                   (0x0000FFFF&(data))

#define  VBY1_META_DATA_10                                                      0x1802D7B0
#define  VBY1_META_DATA_10_reg_addr                                              "0xB802D7B0"
#define  VBY1_META_DATA_10_reg                                                   0xB802D7B0
#define  VBY1_META_DATA_10_inst_addr                                             "0x0020"
#define  set_VBY1_META_DATA_10_reg(data)                                         (*((volatile unsigned int*)VBY1_META_DATA_10_reg)=data)
#define  get_VBY1_META_DATA_10_reg                                               (*((volatile unsigned int*)VBY1_META_DATA_10_reg))
#define  VBY1_META_DATA_10_meta_data10_shift                                     (0)
#define  VBY1_META_DATA_10_meta_data10_mask                                      (0x0000FFFF)
#define  VBY1_META_DATA_10_meta_data10(data)                                     (0x0000FFFF&(data))
#define  VBY1_META_DATA_10_get_meta_data10(data)                                 (0x0000FFFF&(data))

#define  VBY1_META_DATA_11                                                      0x1802D7B4
#define  VBY1_META_DATA_11_reg_addr                                              "0xB802D7B4"
#define  VBY1_META_DATA_11_reg                                                   0xB802D7B4
#define  VBY1_META_DATA_11_inst_addr                                             "0x0021"
#define  set_VBY1_META_DATA_11_reg(data)                                         (*((volatile unsigned int*)VBY1_META_DATA_11_reg)=data)
#define  get_VBY1_META_DATA_11_reg                                               (*((volatile unsigned int*)VBY1_META_DATA_11_reg))
#define  VBY1_META_DATA_11_meta_data11_shift                                     (0)
#define  VBY1_META_DATA_11_meta_data11_mask                                      (0x0000FFFF)
#define  VBY1_META_DATA_11_meta_data11(data)                                     (0x0000FFFF&(data))
#define  VBY1_META_DATA_11_get_meta_data11(data)                                 (0x0000FFFF&(data))

#define  VBY1_META_DATA_12                                                      0x1802D7B8
#define  VBY1_META_DATA_12_reg_addr                                              "0xB802D7B8"
#define  VBY1_META_DATA_12_reg                                                   0xB802D7B8
#define  VBY1_META_DATA_12_inst_addr                                             "0x0022"
#define  set_VBY1_META_DATA_12_reg(data)                                         (*((volatile unsigned int*)VBY1_META_DATA_12_reg)=data)
#define  get_VBY1_META_DATA_12_reg                                               (*((volatile unsigned int*)VBY1_META_DATA_12_reg))
#define  VBY1_META_DATA_12_meta_data12_shift                                     (0)
#define  VBY1_META_DATA_12_meta_data12_mask                                      (0x0000FFFF)
#define  VBY1_META_DATA_12_meta_data12(data)                                     (0x0000FFFF&(data))
#define  VBY1_META_DATA_12_get_meta_data12(data)                                 (0x0000FFFF&(data))

#define  VBY1_META_DATA_13                                                      0x1802D7BC
#define  VBY1_META_DATA_13_reg_addr                                              "0xB802D7BC"
#define  VBY1_META_DATA_13_reg                                                   0xB802D7BC
#define  VBY1_META_DATA_13_inst_addr                                             "0x0023"
#define  set_VBY1_META_DATA_13_reg(data)                                         (*((volatile unsigned int*)VBY1_META_DATA_13_reg)=data)
#define  get_VBY1_META_DATA_13_reg                                               (*((volatile unsigned int*)VBY1_META_DATA_13_reg))
#define  VBY1_META_DATA_13_meta_data13_shift                                     (0)
#define  VBY1_META_DATA_13_meta_data13_mask                                      (0x0000FFFF)
#define  VBY1_META_DATA_13_meta_data13(data)                                     (0x0000FFFF&(data))
#define  VBY1_META_DATA_13_get_meta_data13(data)                                 (0x0000FFFF&(data))

#define  VBY1_META_DATA_14                                                      0x1802D7C0
#define  VBY1_META_DATA_14_reg_addr                                              "0xB802D7C0"
#define  VBY1_META_DATA_14_reg                                                   0xB802D7C0
#define  VBY1_META_DATA_14_inst_addr                                             "0x0024"
#define  set_VBY1_META_DATA_14_reg(data)                                         (*((volatile unsigned int*)VBY1_META_DATA_14_reg)=data)
#define  get_VBY1_META_DATA_14_reg                                               (*((volatile unsigned int*)VBY1_META_DATA_14_reg))
#define  VBY1_META_DATA_14_meta_data14_shift                                     (0)
#define  VBY1_META_DATA_14_meta_data14_mask                                      (0x0000FFFF)
#define  VBY1_META_DATA_14_meta_data14(data)                                     (0x0000FFFF&(data))
#define  VBY1_META_DATA_14_get_meta_data14(data)                                 (0x0000FFFF&(data))

#define  VBY1_META_DATA_15                                                      0x1802D7C4
#define  VBY1_META_DATA_15_reg_addr                                              "0xB802D7C4"
#define  VBY1_META_DATA_15_reg                                                   0xB802D7C4
#define  VBY1_META_DATA_15_inst_addr                                             "0x0025"
#define  set_VBY1_META_DATA_15_reg(data)                                         (*((volatile unsigned int*)VBY1_META_DATA_15_reg)=data)
#define  get_VBY1_META_DATA_15_reg                                               (*((volatile unsigned int*)VBY1_META_DATA_15_reg))
#define  VBY1_META_DATA_15_meta_data15_shift                                     (0)
#define  VBY1_META_DATA_15_meta_data15_mask                                      (0x0000FFFF)
#define  VBY1_META_DATA_15_meta_data15(data)                                     (0x0000FFFF&(data))
#define  VBY1_META_DATA_15_get_meta_data15(data)                                 (0x0000FFFF&(data))

#define  VBY1_META_DATA_16                                                      0x1802D7C8
#define  VBY1_META_DATA_16_reg_addr                                              "0xB802D7C8"
#define  VBY1_META_DATA_16_reg                                                   0xB802D7C8
#define  VBY1_META_DATA_16_inst_addr                                             "0x0026"
#define  set_VBY1_META_DATA_16_reg(data)                                         (*((volatile unsigned int*)VBY1_META_DATA_16_reg)=data)
#define  get_VBY1_META_DATA_16_reg                                               (*((volatile unsigned int*)VBY1_META_DATA_16_reg))
#define  VBY1_META_DATA_16_meta_data16_shift                                     (0)
#define  VBY1_META_DATA_16_meta_data16_mask                                      (0x0000FFFF)
#define  VBY1_META_DATA_16_meta_data16(data)                                     (0x0000FFFF&(data))
#define  VBY1_META_DATA_16_get_meta_data16(data)                                 (0x0000FFFF&(data))

#define  VBY1_META_DATA_17                                                      0x1802D7CC
#define  VBY1_META_DATA_17_reg_addr                                              "0xB802D7CC"
#define  VBY1_META_DATA_17_reg                                                   0xB802D7CC
#define  VBY1_META_DATA_17_inst_addr                                             "0x0027"
#define  set_VBY1_META_DATA_17_reg(data)                                         (*((volatile unsigned int*)VBY1_META_DATA_17_reg)=data)
#define  get_VBY1_META_DATA_17_reg                                               (*((volatile unsigned int*)VBY1_META_DATA_17_reg))
#define  VBY1_META_DATA_17_meta_data17_shift                                     (0)
#define  VBY1_META_DATA_17_meta_data17_mask                                      (0x0000FFFF)
#define  VBY1_META_DATA_17_meta_data17(data)                                     (0x0000FFFF&(data))
#define  VBY1_META_DATA_17_get_meta_data17(data)                                 (0x0000FFFF&(data))

#define  VBY1_META_DATA_18                                                      0x1802D7D0
#define  VBY1_META_DATA_18_reg_addr                                              "0xB802D7D0"
#define  VBY1_META_DATA_18_reg                                                   0xB802D7D0
#define  VBY1_META_DATA_18_inst_addr                                             "0x0028"
#define  set_VBY1_META_DATA_18_reg(data)                                         (*((volatile unsigned int*)VBY1_META_DATA_18_reg)=data)
#define  get_VBY1_META_DATA_18_reg                                               (*((volatile unsigned int*)VBY1_META_DATA_18_reg))
#define  VBY1_META_DATA_18_meta_data18_shift                                     (0)
#define  VBY1_META_DATA_18_meta_data18_mask                                      (0x0000FFFF)
#define  VBY1_META_DATA_18_meta_data18(data)                                     (0x0000FFFF&(data))
#define  VBY1_META_DATA_18_get_meta_data18(data)                                 (0x0000FFFF&(data))

#define  VBY1_META_DATA_19                                                      0x1802D7D4
#define  VBY1_META_DATA_19_reg_addr                                              "0xB802D7D4"
#define  VBY1_META_DATA_19_reg                                                   0xB802D7D4
#define  VBY1_META_DATA_19_inst_addr                                             "0x0029"
#define  set_VBY1_META_DATA_19_reg(data)                                         (*((volatile unsigned int*)VBY1_META_DATA_19_reg)=data)
#define  get_VBY1_META_DATA_19_reg                                               (*((volatile unsigned int*)VBY1_META_DATA_19_reg))
#define  VBY1_META_DATA_19_meta_data19_shift                                     (0)
#define  VBY1_META_DATA_19_meta_data19_mask                                      (0x0000FFFF)
#define  VBY1_META_DATA_19_meta_data19(data)                                     (0x0000FFFF&(data))
#define  VBY1_META_DATA_19_get_meta_data19(data)                                 (0x0000FFFF&(data))

#define  VBY1_META_DATA_20                                                      0x1802D7D8
#define  VBY1_META_DATA_20_reg_addr                                              "0xB802D7D8"
#define  VBY1_META_DATA_20_reg                                                   0xB802D7D8
#define  VBY1_META_DATA_20_inst_addr                                             "0x002A"
#define  set_VBY1_META_DATA_20_reg(data)                                         (*((volatile unsigned int*)VBY1_META_DATA_20_reg)=data)
#define  get_VBY1_META_DATA_20_reg                                               (*((volatile unsigned int*)VBY1_META_DATA_20_reg))
#define  VBY1_META_DATA_20_meta_data20_shift                                     (0)
#define  VBY1_META_DATA_20_meta_data20_mask                                      (0x0000FFFF)
#define  VBY1_META_DATA_20_meta_data20(data)                                     (0x0000FFFF&(data))
#define  VBY1_META_DATA_20_get_meta_data20(data)                                 (0x0000FFFF&(data))

#define  VBY1_META_DATA_21                                                      0x1802D7DC
#define  VBY1_META_DATA_21_reg_addr                                              "0xB802D7DC"
#define  VBY1_META_DATA_21_reg                                                   0xB802D7DC
#define  VBY1_META_DATA_21_inst_addr                                             "0x002B"
#define  set_VBY1_META_DATA_21_reg(data)                                         (*((volatile unsigned int*)VBY1_META_DATA_21_reg)=data)
#define  get_VBY1_META_DATA_21_reg                                               (*((volatile unsigned int*)VBY1_META_DATA_21_reg))
#define  VBY1_META_DATA_21_meta_data21_shift                                     (0)
#define  VBY1_META_DATA_21_meta_data21_mask                                      (0x0000FFFF)
#define  VBY1_META_DATA_21_meta_data21(data)                                     (0x0000FFFF&(data))
#define  VBY1_META_DATA_21_get_meta_data21(data)                                 (0x0000FFFF&(data))

#define  VBY1_META_DATA_22                                                      0x1802D7E0
#define  VBY1_META_DATA_22_reg_addr                                              "0xB802D7E0"
#define  VBY1_META_DATA_22_reg                                                   0xB802D7E0
#define  VBY1_META_DATA_22_inst_addr                                             "0x002C"
#define  set_VBY1_META_DATA_22_reg(data)                                         (*((volatile unsigned int*)VBY1_META_DATA_22_reg)=data)
#define  get_VBY1_META_DATA_22_reg                                               (*((volatile unsigned int*)VBY1_META_DATA_22_reg))
#define  VBY1_META_DATA_22_meta_data22_shift                                     (0)
#define  VBY1_META_DATA_22_meta_data22_mask                                      (0x0000FFFF)
#define  VBY1_META_DATA_22_meta_data22(data)                                     (0x0000FFFF&(data))
#define  VBY1_META_DATA_22_get_meta_data22(data)                                 (0x0000FFFF&(data))

#define  VBY1_META_DATA_23                                                      0x1802D7E4
#define  VBY1_META_DATA_23_reg_addr                                              "0xB802D7E4"
#define  VBY1_META_DATA_23_reg                                                   0xB802D7E4
#define  VBY1_META_DATA_23_inst_addr                                             "0x002D"
#define  set_VBY1_META_DATA_23_reg(data)                                         (*((volatile unsigned int*)VBY1_META_DATA_23_reg)=data)
#define  get_VBY1_META_DATA_23_reg                                               (*((volatile unsigned int*)VBY1_META_DATA_23_reg))
#define  VBY1_META_DATA_23_meta_data23_shift                                     (0)
#define  VBY1_META_DATA_23_meta_data23_mask                                      (0x0000FFFF)
#define  VBY1_META_DATA_23_meta_data23(data)                                     (0x0000FFFF&(data))
#define  VBY1_META_DATA_23_get_meta_data23(data)                                 (0x0000FFFF&(data))

#define  VBY1_META_DATA_24                                                      0x1802D7E8
#define  VBY1_META_DATA_24_reg_addr                                              "0xB802D7E8"
#define  VBY1_META_DATA_24_reg                                                   0xB802D7E8
#define  VBY1_META_DATA_24_inst_addr                                             "0x002E"
#define  set_VBY1_META_DATA_24_reg(data)                                         (*((volatile unsigned int*)VBY1_META_DATA_24_reg)=data)
#define  get_VBY1_META_DATA_24_reg                                               (*((volatile unsigned int*)VBY1_META_DATA_24_reg))
#define  VBY1_META_DATA_24_meta_data24_shift                                     (0)
#define  VBY1_META_DATA_24_meta_data24_mask                                      (0x0000FFFF)
#define  VBY1_META_DATA_24_meta_data24(data)                                     (0x0000FFFF&(data))
#define  VBY1_META_DATA_24_get_meta_data24(data)                                 (0x0000FFFF&(data))

#define  VBY1_META_DATA_25                                                      0x1802D7EC
#define  VBY1_META_DATA_25_reg_addr                                              "0xB802D7EC"
#define  VBY1_META_DATA_25_reg                                                   0xB802D7EC
#define  VBY1_META_DATA_25_inst_addr                                             "0x002F"
#define  set_VBY1_META_DATA_25_reg(data)                                         (*((volatile unsigned int*)VBY1_META_DATA_25_reg)=data)
#define  get_VBY1_META_DATA_25_reg                                               (*((volatile unsigned int*)VBY1_META_DATA_25_reg))
#define  VBY1_META_DATA_25_meta_data25_shift                                     (0)
#define  VBY1_META_DATA_25_meta_data25_mask                                      (0x0000FFFF)
#define  VBY1_META_DATA_25_meta_data25(data)                                     (0x0000FFFF&(data))
#define  VBY1_META_DATA_25_get_meta_data25(data)                                 (0x0000FFFF&(data))

#define  VBY1_META_DATA_26                                                      0x1802D7F0
#define  VBY1_META_DATA_26_reg_addr                                              "0xB802D7F0"
#define  VBY1_META_DATA_26_reg                                                   0xB802D7F0
#define  VBY1_META_DATA_26_inst_addr                                             "0x0030"
#define  set_VBY1_META_DATA_26_reg(data)                                         (*((volatile unsigned int*)VBY1_META_DATA_26_reg)=data)
#define  get_VBY1_META_DATA_26_reg                                               (*((volatile unsigned int*)VBY1_META_DATA_26_reg))
#define  VBY1_META_DATA_26_meta_data26_shift                                     (0)
#define  VBY1_META_DATA_26_meta_data26_mask                                      (0x0000FFFF)
#define  VBY1_META_DATA_26_meta_data26(data)                                     (0x0000FFFF&(data))
#define  VBY1_META_DATA_26_get_meta_data26(data)                                 (0x0000FFFF&(data))

#define  VBY1_META_DATA_27                                                      0x1802D7F4
#define  VBY1_META_DATA_27_reg_addr                                              "0xB802D7F4"
#define  VBY1_META_DATA_27_reg                                                   0xB802D7F4
#define  VBY1_META_DATA_27_inst_addr                                             "0x0031"
#define  set_VBY1_META_DATA_27_reg(data)                                         (*((volatile unsigned int*)VBY1_META_DATA_27_reg)=data)
#define  get_VBY1_META_DATA_27_reg                                               (*((volatile unsigned int*)VBY1_META_DATA_27_reg))
#define  VBY1_META_DATA_27_meta_data27_shift                                     (0)
#define  VBY1_META_DATA_27_meta_data27_mask                                      (0x0000FFFF)
#define  VBY1_META_DATA_27_meta_data27(data)                                     (0x0000FFFF&(data))
#define  VBY1_META_DATA_27_get_meta_data27(data)                                 (0x0000FFFF&(data))

#define  VBY1_META_DATA_28                                                      0x1802D7F8
#define  VBY1_META_DATA_28_reg_addr                                              "0xB802D7F8"
#define  VBY1_META_DATA_28_reg                                                   0xB802D7F8
#define  VBY1_META_DATA_28_inst_addr                                             "0x0032"
#define  set_VBY1_META_DATA_28_reg(data)                                         (*((volatile unsigned int*)VBY1_META_DATA_28_reg)=data)
#define  get_VBY1_META_DATA_28_reg                                               (*((volatile unsigned int*)VBY1_META_DATA_28_reg))
#define  VBY1_META_DATA_28_meta_data28_shift                                     (0)
#define  VBY1_META_DATA_28_meta_data28_mask                                      (0x0000FFFF)
#define  VBY1_META_DATA_28_meta_data28(data)                                     (0x0000FFFF&(data))
#define  VBY1_META_DATA_28_get_meta_data28(data)                                 (0x0000FFFF&(data))

#define  VBY1_META_DATA_29                                                      0x1802D7FC
#define  VBY1_META_DATA_29_reg_addr                                              "0xB802D7FC"
#define  VBY1_META_DATA_29_reg                                                   0xB802D7FC
#define  VBY1_META_DATA_29_inst_addr                                             "0x0033"
#define  set_VBY1_META_DATA_29_reg(data)                                         (*((volatile unsigned int*)VBY1_META_DATA_29_reg)=data)
#define  get_VBY1_META_DATA_29_reg                                               (*((volatile unsigned int*)VBY1_META_DATA_29_reg))
#define  VBY1_META_DATA_29_meta_data29_shift                                     (0)
#define  VBY1_META_DATA_29_meta_data29_mask                                      (0x0000FFFF)
#define  VBY1_META_DATA_29_meta_data29(data)                                     (0x0000FFFF&(data))
#define  VBY1_META_DATA_29_get_meta_data29(data)                                 (0x0000FFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======VBY1 register structure define==========

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
}vby1_video_format_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  lane_count:5;
        RBus_UInt32  res2:13;
        RBus_UInt32  byte_mode:3;
    };
}vby1_lane_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ctl:16;
    };
}vby1_ctl_RBUS;

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
}vby1_transmit_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d710_31_8:24;
        RBus_UInt32  res1:2;
        RBus_UInt32  aln_finish:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  video_en:1;
        RBus_UInt32  aln_en:1;
        RBus_UInt32  cdr_en:1;
    };
}vby1_transmit_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  three_mode:2;
        RBus_UInt32  three_en:1;
    };
}vby1_three_flag_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_crc_en:16;
        RBus_UInt32  res1:13;
        RBus_UInt32  reg_crc_auto_cmp_en:1;
        RBus_UInt32  reg_crc_conti:1;
        RBus_UInt32  reg_crc_start:1;
    };
}vby1_crc_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_result:32;
    };
}vby1_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_crc_des:32;
    };
}vby1_crc_des_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  crc_err_cnt:16;
    };
}vby1_crc_error_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  fifo_vs_rst_en:2;
        RBus_UInt32  fifo_vs_rst_delay:16;
    };
}vby1_async_fifo_rst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  dummy1802d72c_3_0:4;
    };
}vby1_vby1_debug_RBUS;

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
        RBus_UInt32  res3:9;
        RBus_UInt32  metadata_end:1;
        RBus_UInt32  metadata_end_ie:1;
        RBus_UInt32  metadata_end_int_status:1;
        RBus_UInt32  htpdn:1;
        RBus_UInt32  lockn:1;
        RBus_UInt32  hw_htpdn:1;
        RBus_UInt32  hw_lockn:1;
    };
}vby1_vby1_status_fw_ctrl_RBUS;

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
}vby1_data_capture_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dummy1802d738_7_0:8;
    };
}vby1_data_capture_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  capture_data_l:32;
    };
}vby1_data_capture_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  dbg_en:1;
    };
}vby1_dbg_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_data:32;
    };
}vby1_dbg_data_RBUS;

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
}vby1_dphy_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  e8b10b_running_disparity:16;
    };
}vby1_dphy_rd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  meta_en:1;
        RBus_UInt32  res2:8;
        RBus_UInt32  meta_start:20;
    };
}vby1_meta_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  meta_sel:1;
        RBus_UInt32  res2:8;
        RBus_UInt32  meta_end:20;
    };
}vby1_meta_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data0:16;
    };
}vby1_meta_data_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data1:16;
    };
}vby1_meta_data_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data2:16;
    };
}vby1_meta_data_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data3:16;
    };
}vby1_meta_data_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data4:16;
    };
}vby1_meta_data_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data5:16;
    };
}vby1_meta_data_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data6:16;
    };
}vby1_meta_data_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data7:16;
    };
}vby1_meta_data_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data8:16;
    };
}vby1_meta_data_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data9:16;
    };
}vby1_meta_data_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data10:16;
    };
}vby1_meta_data_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data11:16;
    };
}vby1_meta_data_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data12:16;
    };
}vby1_meta_data_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data13:16;
    };
}vby1_meta_data_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data14:16;
    };
}vby1_meta_data_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data15:16;
    };
}vby1_meta_data_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data16:16;
    };
}vby1_meta_data_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data17:16;
    };
}vby1_meta_data_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data18:16;
    };
}vby1_meta_data_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data19:16;
    };
}vby1_meta_data_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data20:16;
    };
}vby1_meta_data_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data21:16;
    };
}vby1_meta_data_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data22:16;
    };
}vby1_meta_data_22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data23:16;
    };
}vby1_meta_data_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data24:16;
    };
}vby1_meta_data_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data25:16;
    };
}vby1_meta_data_25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data26:16;
    };
}vby1_meta_data_26_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data27:16;
    };
}vby1_meta_data_27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data28:16;
    };
}vby1_meta_data_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  meta_data29:16;
    };
}vby1_meta_data_29_RBUS;

#else //apply LITTLE_ENDIAN

//======VBY1 register structure define==========

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
}vby1_video_format_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  byte_mode:3;
        RBus_UInt32  res1:13;
        RBus_UInt32  lane_count:5;
        RBus_UInt32  res2:11;
    };
}vby1_lane_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctl:16;
        RBus_UInt32  res1:16;
    };
}vby1_ctl_RBUS;

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
}vby1_transmit_control_RBUS;

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
        RBus_UInt32  dummy1802d710_31_8:24;
    };
}vby1_transmit_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  three_en:1;
        RBus_UInt32  three_mode:2;
        RBus_UInt32  res1:29;
    };
}vby1_three_flag_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_crc_start:1;
        RBus_UInt32  reg_crc_conti:1;
        RBus_UInt32  reg_crc_auto_cmp_en:1;
        RBus_UInt32  res1:13;
        RBus_UInt32  lane_crc_en:16;
    };
}vby1_crc_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_result:32;
    };
}vby1_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_crc_des:32;
    };
}vby1_crc_des_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_err_cnt:16;
        RBus_UInt32  res1:16;
    };
}vby1_crc_error_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fifo_vs_rst_delay:16;
        RBus_UInt32  fifo_vs_rst_en:2;
        RBus_UInt32  res1:14;
    };
}vby1_async_fifo_rst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d72c_3_0:4;
        RBus_UInt32  res1:28;
    };
}vby1_vby1_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hw_lockn:1;
        RBus_UInt32  hw_htpdn:1;
        RBus_UInt32  lockn:1;
        RBus_UInt32  htpdn:1;
        RBus_UInt32  metadata_end_int_status:1;
        RBus_UInt32  metadata_end_ie:1;
        RBus_UInt32  metadata_end:1;
        RBus_UInt32  res1:9;
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
}vby1_vby1_status_fw_ctrl_RBUS;

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
}vby1_data_capture_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d738_7_0:8;
        RBus_UInt32  res1:24;
    };
}vby1_data_capture_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  capture_data_l:32;
    };
}vby1_data_capture_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_en:1;
        RBus_UInt32  res1:31;
    };
}vby1_dbg_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_data:32;
    };
}vby1_dbg_data_RBUS;

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
}vby1_dphy_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  e8b10b_running_disparity:16;
        RBus_UInt32  res1:16;
    };
}vby1_dphy_rd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_start:20;
        RBus_UInt32  res1:8;
        RBus_UInt32  meta_en:1;
        RBus_UInt32  res2:3;
    };
}vby1_meta_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_end:20;
        RBus_UInt32  res1:8;
        RBus_UInt32  meta_sel:1;
        RBus_UInt32  res2:3;
    };
}vby1_meta_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data0:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data1:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data2:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data3:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data4:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data5:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data6:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data7:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data8:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data9:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data10:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data11:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data12:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data13:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data14:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data15:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data16:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data17:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data18:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data19:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data20:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data21:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data22:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data23:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data24:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data25:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data26:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_26_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data27:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data28:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meta_data29:16;
        RBus_UInt32  res1:16;
    };
}vby1_meta_data_29_RBUS;




#endif 


#endif 
