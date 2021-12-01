/**
* @file Merlin5-DesignSpec-D-Domain_Still_Logo_Detection
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_COLOR_SLD_REG_H_
#define _RBUS_COLOR_SLD_REG_H_

#include "rbus_types.h"



//  COLOR_SLD Register Address
#define  COLOR_SLD_SLD_CONTROL                                                  0x1802C700
#define  COLOR_SLD_SLD_CONTROL_reg_addr                                          "0xB802C700"
#define  COLOR_SLD_SLD_CONTROL_reg                                               0xB802C700
#define  COLOR_SLD_SLD_CONTROL_inst_addr                                         "0x0000"
#define  set_COLOR_SLD_SLD_CONTROL_reg(data)                                     (*((volatile unsigned int*)COLOR_SLD_SLD_CONTROL_reg)=data)
#define  get_COLOR_SLD_SLD_CONTROL_reg                                           (*((volatile unsigned int*)COLOR_SLD_SLD_CONTROL_reg))
#define  COLOR_SLD_SLD_CONTROL_dummy_31_21_shift                                 (21)
#define  COLOR_SLD_SLD_CONTROL_sld_scale_mode_shift                              (20)
#define  COLOR_SLD_SLD_CONTROL_sld_hpf_thl_shift                                 (8)
#define  COLOR_SLD_SLD_CONTROL_sld_hpf_type_shift                                (4)
#define  COLOR_SLD_SLD_CONTROL_sld_global_drop_shift                             (3)
#define  COLOR_SLD_SLD_CONTROL_sld_blend_en_shift                                (2)
#define  COLOR_SLD_SLD_CONTROL_sld_debug_mode_shift                              (1)
#define  COLOR_SLD_SLD_CONTROL_sld_en_shift                                      (0)
#define  COLOR_SLD_SLD_CONTROL_dummy_31_21_mask                                  (0xFFE00000)
#define  COLOR_SLD_SLD_CONTROL_sld_scale_mode_mask                               (0x00100000)
#define  COLOR_SLD_SLD_CONTROL_sld_hpf_thl_mask                                  (0x0000FF00)
#define  COLOR_SLD_SLD_CONTROL_sld_hpf_type_mask                                 (0x00000030)
#define  COLOR_SLD_SLD_CONTROL_sld_global_drop_mask                              (0x00000008)
#define  COLOR_SLD_SLD_CONTROL_sld_blend_en_mask                                 (0x00000004)
#define  COLOR_SLD_SLD_CONTROL_sld_debug_mode_mask                               (0x00000002)
#define  COLOR_SLD_SLD_CONTROL_sld_en_mask                                       (0x00000001)
#define  COLOR_SLD_SLD_CONTROL_dummy_31_21(data)                                 (0xFFE00000&((data)<<21))
#define  COLOR_SLD_SLD_CONTROL_sld_scale_mode(data)                              (0x00100000&((data)<<20))
#define  COLOR_SLD_SLD_CONTROL_sld_hpf_thl(data)                                 (0x0000FF00&((data)<<8))
#define  COLOR_SLD_SLD_CONTROL_sld_hpf_type(data)                                (0x00000030&((data)<<4))
#define  COLOR_SLD_SLD_CONTROL_sld_global_drop(data)                             (0x00000008&((data)<<3))
#define  COLOR_SLD_SLD_CONTROL_sld_blend_en(data)                                (0x00000004&((data)<<2))
#define  COLOR_SLD_SLD_CONTROL_sld_debug_mode(data)                              (0x00000002&((data)<<1))
#define  COLOR_SLD_SLD_CONTROL_sld_en(data)                                      (0x00000001&(data))
#define  COLOR_SLD_SLD_CONTROL_get_dummy_31_21(data)                             ((0xFFE00000&(data))>>21)
#define  COLOR_SLD_SLD_CONTROL_get_sld_scale_mode(data)                          ((0x00100000&(data))>>20)
#define  COLOR_SLD_SLD_CONTROL_get_sld_hpf_thl(data)                             ((0x0000FF00&(data))>>8)
#define  COLOR_SLD_SLD_CONTROL_get_sld_hpf_type(data)                            ((0x00000030&(data))>>4)
#define  COLOR_SLD_SLD_CONTROL_get_sld_global_drop(data)                         ((0x00000008&(data))>>3)
#define  COLOR_SLD_SLD_CONTROL_get_sld_blend_en(data)                            ((0x00000004&(data))>>2)
#define  COLOR_SLD_SLD_CONTROL_get_sld_debug_mode(data)                          ((0x00000002&(data))>>1)
#define  COLOR_SLD_SLD_CONTROL_get_sld_en(data)                                  (0x00000001&(data))

#define  COLOR_SLD_SLD_SIZE                                                     0x1802C704
#define  COLOR_SLD_SLD_SIZE_reg_addr                                             "0xB802C704"
#define  COLOR_SLD_SLD_SIZE_reg                                                  0xB802C704
#define  COLOR_SLD_SLD_SIZE_inst_addr                                            "0x0001"
#define  set_COLOR_SLD_SLD_SIZE_reg(data)                                        (*((volatile unsigned int*)COLOR_SLD_SLD_SIZE_reg)=data)
#define  get_COLOR_SLD_SLD_SIZE_reg                                              (*((volatile unsigned int*)COLOR_SLD_SLD_SIZE_reg))
#define  COLOR_SLD_SLD_SIZE_sld_width_shift                                      (16)
#define  COLOR_SLD_SLD_SIZE_sld_height_shift                                     (0)
#define  COLOR_SLD_SLD_SIZE_sld_width_mask                                       (0x0FFF0000)
#define  COLOR_SLD_SLD_SIZE_sld_height_mask                                      (0x00000FFF)
#define  COLOR_SLD_SLD_SIZE_sld_width(data)                                      (0x0FFF0000&((data)<<16))
#define  COLOR_SLD_SLD_SIZE_sld_height(data)                                     (0x00000FFF&(data))
#define  COLOR_SLD_SLD_SIZE_get_sld_width(data)                                  ((0x0FFF0000&(data))>>16)
#define  COLOR_SLD_SLD_SIZE_get_sld_height(data)                                 (0x00000FFF&(data))

#define  COLOR_SLD_SLD_CURVE_MAP_SEG                                            0x1802C708
#define  COLOR_SLD_SLD_CURVE_MAP_SEG_reg_addr                                    "0xB802C708"
#define  COLOR_SLD_SLD_CURVE_MAP_SEG_reg                                         0xB802C708
#define  COLOR_SLD_SLD_CURVE_MAP_SEG_inst_addr                                   "0x0002"
#define  set_COLOR_SLD_SLD_CURVE_MAP_SEG_reg(data)                               (*((volatile unsigned int*)COLOR_SLD_SLD_CURVE_MAP_SEG_reg)=data)
#define  get_COLOR_SLD_SLD_CURVE_MAP_SEG_reg                                     (*((volatile unsigned int*)COLOR_SLD_SLD_CURVE_MAP_SEG_reg))
#define  COLOR_SLD_SLD_CURVE_MAP_SEG_sld_curve_seg_1_shift                       (16)
#define  COLOR_SLD_SLD_CURVE_MAP_SEG_sld_curve_seg_0_shift                       (0)
#define  COLOR_SLD_SLD_CURVE_MAP_SEG_sld_curve_seg_1_mask                        (0x03FF0000)
#define  COLOR_SLD_SLD_CURVE_MAP_SEG_sld_curve_seg_0_mask                        (0x000003FF)
#define  COLOR_SLD_SLD_CURVE_MAP_SEG_sld_curve_seg_1(data)                       (0x03FF0000&((data)<<16))
#define  COLOR_SLD_SLD_CURVE_MAP_SEG_sld_curve_seg_0(data)                       (0x000003FF&(data))
#define  COLOR_SLD_SLD_CURVE_MAP_SEG_get_sld_curve_seg_1(data)                   ((0x03FF0000&(data))>>16)
#define  COLOR_SLD_SLD_CURVE_MAP_SEG_get_sld_curve_seg_0(data)                   (0x000003FF&(data))

#define  COLOR_SLD_SLD_CURVE_MAP_GAIN                                           0x1802C70C
#define  COLOR_SLD_SLD_CURVE_MAP_GAIN_reg_addr                                   "0xB802C70C"
#define  COLOR_SLD_SLD_CURVE_MAP_GAIN_reg                                        0xB802C70C
#define  COLOR_SLD_SLD_CURVE_MAP_GAIN_inst_addr                                  "0x0003"
#define  set_COLOR_SLD_SLD_CURVE_MAP_GAIN_reg(data)                              (*((volatile unsigned int*)COLOR_SLD_SLD_CURVE_MAP_GAIN_reg)=data)
#define  get_COLOR_SLD_SLD_CURVE_MAP_GAIN_reg                                    (*((volatile unsigned int*)COLOR_SLD_SLD_CURVE_MAP_GAIN_reg))
#define  COLOR_SLD_SLD_CURVE_MAP_GAIN_sld_curve_gain_2_shift                     (24)
#define  COLOR_SLD_SLD_CURVE_MAP_GAIN_sld_curve_gain_1_shift                     (12)
#define  COLOR_SLD_SLD_CURVE_MAP_GAIN_sld_curve_gain_0_shift                     (0)
#define  COLOR_SLD_SLD_CURVE_MAP_GAIN_sld_curve_gain_2_mask                      (0xFF000000)
#define  COLOR_SLD_SLD_CURVE_MAP_GAIN_sld_curve_gain_1_mask                      (0x000FF000)
#define  COLOR_SLD_SLD_CURVE_MAP_GAIN_sld_curve_gain_0_mask                      (0x000000FF)
#define  COLOR_SLD_SLD_CURVE_MAP_GAIN_sld_curve_gain_2(data)                     (0xFF000000&((data)<<24))
#define  COLOR_SLD_SLD_CURVE_MAP_GAIN_sld_curve_gain_1(data)                     (0x000FF000&((data)<<12))
#define  COLOR_SLD_SLD_CURVE_MAP_GAIN_sld_curve_gain_0(data)                     (0x000000FF&(data))
#define  COLOR_SLD_SLD_CURVE_MAP_GAIN_get_sld_curve_gain_2(data)                 ((0xFF000000&(data))>>24)
#define  COLOR_SLD_SLD_CURVE_MAP_GAIN_get_sld_curve_gain_1(data)                 ((0x000FF000&(data))>>12)
#define  COLOR_SLD_SLD_CURVE_MAP_GAIN_get_sld_curve_gain_0(data)                 (0x000000FF&(data))

#define  COLOR_SLD_SLD_CURVE_MAP_OFFSET_0                                       0x1802C710
#define  COLOR_SLD_SLD_CURVE_MAP_OFFSET_0_reg_addr                               "0xB802C710"
#define  COLOR_SLD_SLD_CURVE_MAP_OFFSET_0_reg                                    0xB802C710
#define  COLOR_SLD_SLD_CURVE_MAP_OFFSET_0_inst_addr                              "0x0004"
#define  set_COLOR_SLD_SLD_CURVE_MAP_OFFSET_0_reg(data)                          (*((volatile unsigned int*)COLOR_SLD_SLD_CURVE_MAP_OFFSET_0_reg)=data)
#define  get_COLOR_SLD_SLD_CURVE_MAP_OFFSET_0_reg                                (*((volatile unsigned int*)COLOR_SLD_SLD_CURVE_MAP_OFFSET_0_reg))
#define  COLOR_SLD_SLD_CURVE_MAP_OFFSET_0_sld_curve_offset_1_shift               (16)
#define  COLOR_SLD_SLD_CURVE_MAP_OFFSET_0_sld_curve_offset_0_shift               (0)
#define  COLOR_SLD_SLD_CURVE_MAP_OFFSET_0_sld_curve_offset_1_mask                (0x07FF0000)
#define  COLOR_SLD_SLD_CURVE_MAP_OFFSET_0_sld_curve_offset_0_mask                (0x000007FF)
#define  COLOR_SLD_SLD_CURVE_MAP_OFFSET_0_sld_curve_offset_1(data)               (0x07FF0000&((data)<<16))
#define  COLOR_SLD_SLD_CURVE_MAP_OFFSET_0_sld_curve_offset_0(data)               (0x000007FF&(data))
#define  COLOR_SLD_SLD_CURVE_MAP_OFFSET_0_get_sld_curve_offset_1(data)           ((0x07FF0000&(data))>>16)
#define  COLOR_SLD_SLD_CURVE_MAP_OFFSET_0_get_sld_curve_offset_0(data)           (0x000007FF&(data))

#define  COLOR_SLD_SLD_CURVE_MAP_OFFSET_1                                       0x1802C714
#define  COLOR_SLD_SLD_CURVE_MAP_OFFSET_1_reg_addr                               "0xB802C714"
#define  COLOR_SLD_SLD_CURVE_MAP_OFFSET_1_reg                                    0xB802C714
#define  COLOR_SLD_SLD_CURVE_MAP_OFFSET_1_inst_addr                              "0x0005"
#define  set_COLOR_SLD_SLD_CURVE_MAP_OFFSET_1_reg(data)                          (*((volatile unsigned int*)COLOR_SLD_SLD_CURVE_MAP_OFFSET_1_reg)=data)
#define  get_COLOR_SLD_SLD_CURVE_MAP_OFFSET_1_reg                                (*((volatile unsigned int*)COLOR_SLD_SLD_CURVE_MAP_OFFSET_1_reg))
#define  COLOR_SLD_SLD_CURVE_MAP_OFFSET_1_sld_curve_offset_2_shift               (0)
#define  COLOR_SLD_SLD_CURVE_MAP_OFFSET_1_sld_curve_offset_2_mask                (0x000007FF)
#define  COLOR_SLD_SLD_CURVE_MAP_OFFSET_1_sld_curve_offset_2(data)               (0x000007FF&(data))
#define  COLOR_SLD_SLD_CURVE_MAP_OFFSET_1_get_sld_curve_offset_2(data)           (0x000007FF&(data))

#define  COLOR_SLD_SLD_DROP                                                     0x1802C718
#define  COLOR_SLD_SLD_DROP_reg_addr                                             "0xB802C718"
#define  COLOR_SLD_SLD_DROP_reg                                                  0xB802C718
#define  COLOR_SLD_SLD_DROP_inst_addr                                            "0x0006"
#define  set_COLOR_SLD_SLD_DROP_reg(data)                                        (*((volatile unsigned int*)COLOR_SLD_SLD_DROP_reg)=data)
#define  get_COLOR_SLD_SLD_DROP_reg                                              (*((volatile unsigned int*)COLOR_SLD_SLD_DROP_reg))
#define  COLOR_SLD_SLD_DROP_sld_pixel_diff_thl_shift                             (22)
#define  COLOR_SLD_SLD_DROP_sld_hpf_diff_thl_shift                               (11)
#define  COLOR_SLD_SLD_DROP_sld_cnt_thl_shift                                    (0)
#define  COLOR_SLD_SLD_DROP_sld_pixel_diff_thl_mask                              (0xFFC00000)
#define  COLOR_SLD_SLD_DROP_sld_hpf_diff_thl_mask                                (0x001FF800)
#define  COLOR_SLD_SLD_DROP_sld_cnt_thl_mask                                     (0x000003FF)
#define  COLOR_SLD_SLD_DROP_sld_pixel_diff_thl(data)                             (0xFFC00000&((data)<<22))
#define  COLOR_SLD_SLD_DROP_sld_hpf_diff_thl(data)                               (0x001FF800&((data)<<11))
#define  COLOR_SLD_SLD_DROP_sld_cnt_thl(data)                                    (0x000003FF&(data))
#define  COLOR_SLD_SLD_DROP_get_sld_pixel_diff_thl(data)                         ((0xFFC00000&(data))>>22)
#define  COLOR_SLD_SLD_DROP_get_sld_hpf_diff_thl(data)                           ((0x001FF800&(data))>>11)
#define  COLOR_SLD_SLD_DROP_get_sld_cnt_thl(data)                                (0x000003FF&(data))

#define  COLOR_SLD_SLD_CNT_0                                                    0x1802C71C
#define  COLOR_SLD_SLD_CNT_0_reg_addr                                            "0xB802C71C"
#define  COLOR_SLD_SLD_CNT_0_reg                                                 0xB802C71C
#define  COLOR_SLD_SLD_CNT_0_inst_addr                                           "0x0007"
#define  set_COLOR_SLD_SLD_CNT_0_reg(data)                                       (*((volatile unsigned int*)COLOR_SLD_SLD_CNT_0_reg)=data)
#define  get_COLOR_SLD_SLD_CNT_0_reg                                             (*((volatile unsigned int*)COLOR_SLD_SLD_CNT_0_reg))
#define  COLOR_SLD_SLD_CNT_0_dummy_31_17_shift                                   (17)
#define  COLOR_SLD_SLD_CNT_0_sld_logo_cnt_shift                                  (0)
#define  COLOR_SLD_SLD_CNT_0_dummy_31_17_mask                                    (0xFFFE0000)
#define  COLOR_SLD_SLD_CNT_0_sld_logo_cnt_mask                                   (0x0001FFFF)
#define  COLOR_SLD_SLD_CNT_0_dummy_31_17(data)                                   (0xFFFE0000&((data)<<17))
#define  COLOR_SLD_SLD_CNT_0_sld_logo_cnt(data)                                  (0x0001FFFF&(data))
#define  COLOR_SLD_SLD_CNT_0_get_dummy_31_17(data)                               ((0xFFFE0000&(data))>>17)
#define  COLOR_SLD_SLD_CNT_0_get_sld_logo_cnt(data)                              (0x0001FFFF&(data))

#define  COLOR_SLD_SLD_CNT_1                                                    0x1802C720
#define  COLOR_SLD_SLD_CNT_1_reg_addr                                            "0xB802C720"
#define  COLOR_SLD_SLD_CNT_1_reg                                                 0xB802C720
#define  COLOR_SLD_SLD_CNT_1_inst_addr                                           "0x0008"
#define  set_COLOR_SLD_SLD_CNT_1_reg(data)                                       (*((volatile unsigned int*)COLOR_SLD_SLD_CNT_1_reg)=data)
#define  get_COLOR_SLD_SLD_CNT_1_reg                                             (*((volatile unsigned int*)COLOR_SLD_SLD_CNT_1_reg))
#define  COLOR_SLD_SLD_CNT_1_dummy_31_17_shift                                   (17)
#define  COLOR_SLD_SLD_CNT_1_sld_drop_cnt_shift                                  (0)
#define  COLOR_SLD_SLD_CNT_1_dummy_31_17_mask                                    (0xFFFE0000)
#define  COLOR_SLD_SLD_CNT_1_sld_drop_cnt_mask                                   (0x0001FFFF)
#define  COLOR_SLD_SLD_CNT_1_dummy_31_17(data)                                   (0xFFFE0000&((data)<<17))
#define  COLOR_SLD_SLD_CNT_1_sld_drop_cnt(data)                                  (0x0001FFFF&(data))
#define  COLOR_SLD_SLD_CNT_1_get_dummy_31_17(data)                               ((0xFFFE0000&(data))>>17)
#define  COLOR_SLD_SLD_CNT_1_get_sld_drop_cnt(data)                              (0x0001FFFF&(data))

#define  COLOR_SLD_SLD_BIST_CTRL                                                0x1802C7FC
#define  COLOR_SLD_SLD_BIST_CTRL_reg_addr                                        "0xB802C7FC"
#define  COLOR_SLD_SLD_BIST_CTRL_reg                                             0xB802C7FC
#define  COLOR_SLD_SLD_BIST_CTRL_inst_addr                                       "0x0009"
#define  set_COLOR_SLD_SLD_BIST_CTRL_reg(data)                                   (*((volatile unsigned int*)COLOR_SLD_SLD_BIST_CTRL_reg)=data)
#define  get_COLOR_SLD_SLD_BIST_CTRL_reg                                         (*((volatile unsigned int*)COLOR_SLD_SLD_BIST_CTRL_reg))
#define  COLOR_SLD_SLD_BIST_CTRL_dma_buf_test1_shift                             (25)
#define  COLOR_SLD_SLD_BIST_CTRL_lb_test1_shift                                  (24)
#define  COLOR_SLD_SLD_BIST_CTRL_dma_buf_ls_shift                                (21)
#define  COLOR_SLD_SLD_BIST_CTRL_lb_ls_shift                                     (20)
#define  COLOR_SLD_SLD_BIST_CTRL_dma_buf_rme_shift                               (17)
#define  COLOR_SLD_SLD_BIST_CTRL_lb_rme_shift                                    (16)
#define  COLOR_SLD_SLD_BIST_CTRL_dma_buf_rm_shift                                (4)
#define  COLOR_SLD_SLD_BIST_CTRL_lb_rm_shift                                     (0)
#define  COLOR_SLD_SLD_BIST_CTRL_dma_buf_test1_mask                              (0x02000000)
#define  COLOR_SLD_SLD_BIST_CTRL_lb_test1_mask                                   (0x01000000)
#define  COLOR_SLD_SLD_BIST_CTRL_dma_buf_ls_mask                                 (0x00200000)
#define  COLOR_SLD_SLD_BIST_CTRL_lb_ls_mask                                      (0x00100000)
#define  COLOR_SLD_SLD_BIST_CTRL_dma_buf_rme_mask                                (0x00020000)
#define  COLOR_SLD_SLD_BIST_CTRL_lb_rme_mask                                     (0x00010000)
#define  COLOR_SLD_SLD_BIST_CTRL_dma_buf_rm_mask                                 (0x000000F0)
#define  COLOR_SLD_SLD_BIST_CTRL_lb_rm_mask                                      (0x0000000F)
#define  COLOR_SLD_SLD_BIST_CTRL_dma_buf_test1(data)                             (0x02000000&((data)<<25))
#define  COLOR_SLD_SLD_BIST_CTRL_lb_test1(data)                                  (0x01000000&((data)<<24))
#define  COLOR_SLD_SLD_BIST_CTRL_dma_buf_ls(data)                                (0x00200000&((data)<<21))
#define  COLOR_SLD_SLD_BIST_CTRL_lb_ls(data)                                     (0x00100000&((data)<<20))
#define  COLOR_SLD_SLD_BIST_CTRL_dma_buf_rme(data)                               (0x00020000&((data)<<17))
#define  COLOR_SLD_SLD_BIST_CTRL_lb_rme(data)                                    (0x00010000&((data)<<16))
#define  COLOR_SLD_SLD_BIST_CTRL_dma_buf_rm(data)                                (0x000000F0&((data)<<4))
#define  COLOR_SLD_SLD_BIST_CTRL_lb_rm(data)                                     (0x0000000F&(data))
#define  COLOR_SLD_SLD_BIST_CTRL_get_dma_buf_test1(data)                         ((0x02000000&(data))>>25)
#define  COLOR_SLD_SLD_BIST_CTRL_get_lb_test1(data)                              ((0x01000000&(data))>>24)
#define  COLOR_SLD_SLD_BIST_CTRL_get_dma_buf_ls(data)                            ((0x00200000&(data))>>21)
#define  COLOR_SLD_SLD_BIST_CTRL_get_lb_ls(data)                                 ((0x00100000&(data))>>20)
#define  COLOR_SLD_SLD_BIST_CTRL_get_dma_buf_rme(data)                           ((0x00020000&(data))>>17)
#define  COLOR_SLD_SLD_BIST_CTRL_get_lb_rme(data)                                ((0x00010000&(data))>>16)
#define  COLOR_SLD_SLD_BIST_CTRL_get_dma_buf_rm(data)                            ((0x000000F0&(data))>>4)
#define  COLOR_SLD_SLD_BIST_CTRL_get_lb_rm(data)                                 (0x0000000F&(data))

#define  COLOR_SLD_SLD_BIST_STATUS                                              0x1802C7F8
#define  COLOR_SLD_SLD_BIST_STATUS_reg_addr                                      "0xB802C7F8"
#define  COLOR_SLD_SLD_BIST_STATUS_reg                                           0xB802C7F8
#define  COLOR_SLD_SLD_BIST_STATUS_inst_addr                                     "0x000A"
#define  set_COLOR_SLD_SLD_BIST_STATUS_reg(data)                                 (*((volatile unsigned int*)COLOR_SLD_SLD_BIST_STATUS_reg)=data)
#define  get_COLOR_SLD_SLD_BIST_STATUS_reg                                       (*((volatile unsigned int*)COLOR_SLD_SLD_BIST_STATUS_reg))
#define  COLOR_SLD_SLD_BIST_STATUS_dma_buf_drf_start_pause_shift                 (17)
#define  COLOR_SLD_SLD_BIST_STATUS_lb_drf_start_pause_shift                      (16)
#define  COLOR_SLD_SLD_BIST_STATUS_dma_buf_drf_bist_fail_grp_shift               (13)
#define  COLOR_SLD_SLD_BIST_STATUS_lb_drf_bist_fail_grp_shift                    (12)
#define  COLOR_SLD_SLD_BIST_STATUS_dma_buf_bist_fail_grp_shift                   (9)
#define  COLOR_SLD_SLD_BIST_STATUS_lb_bist_fail_grp_shift                        (8)
#define  COLOR_SLD_SLD_BIST_STATUS_dma_buf_drf_bist_done_shift                   (5)
#define  COLOR_SLD_SLD_BIST_STATUS_lb_drf_bist_done_shift                        (4)
#define  COLOR_SLD_SLD_BIST_STATUS_dma_buf_bist_done_shift                       (1)
#define  COLOR_SLD_SLD_BIST_STATUS_lb_bist_done_shift                            (0)
#define  COLOR_SLD_SLD_BIST_STATUS_dma_buf_drf_start_pause_mask                  (0x00020000)
#define  COLOR_SLD_SLD_BIST_STATUS_lb_drf_start_pause_mask                       (0x00010000)
#define  COLOR_SLD_SLD_BIST_STATUS_dma_buf_drf_bist_fail_grp_mask                (0x00002000)
#define  COLOR_SLD_SLD_BIST_STATUS_lb_drf_bist_fail_grp_mask                     (0x00001000)
#define  COLOR_SLD_SLD_BIST_STATUS_dma_buf_bist_fail_grp_mask                    (0x00000200)
#define  COLOR_SLD_SLD_BIST_STATUS_lb_bist_fail_grp_mask                         (0x00000100)
#define  COLOR_SLD_SLD_BIST_STATUS_dma_buf_drf_bist_done_mask                    (0x00000020)
#define  COLOR_SLD_SLD_BIST_STATUS_lb_drf_bist_done_mask                         (0x00000010)
#define  COLOR_SLD_SLD_BIST_STATUS_dma_buf_bist_done_mask                        (0x00000002)
#define  COLOR_SLD_SLD_BIST_STATUS_lb_bist_done_mask                             (0x00000001)
#define  COLOR_SLD_SLD_BIST_STATUS_dma_buf_drf_start_pause(data)                 (0x00020000&((data)<<17))
#define  COLOR_SLD_SLD_BIST_STATUS_lb_drf_start_pause(data)                      (0x00010000&((data)<<16))
#define  COLOR_SLD_SLD_BIST_STATUS_dma_buf_drf_bist_fail_grp(data)               (0x00002000&((data)<<13))
#define  COLOR_SLD_SLD_BIST_STATUS_lb_drf_bist_fail_grp(data)                    (0x00001000&((data)<<12))
#define  COLOR_SLD_SLD_BIST_STATUS_dma_buf_bist_fail_grp(data)                   (0x00000200&((data)<<9))
#define  COLOR_SLD_SLD_BIST_STATUS_lb_bist_fail_grp(data)                        (0x00000100&((data)<<8))
#define  COLOR_SLD_SLD_BIST_STATUS_dma_buf_drf_bist_done(data)                   (0x00000020&((data)<<5))
#define  COLOR_SLD_SLD_BIST_STATUS_lb_drf_bist_done(data)                        (0x00000010&((data)<<4))
#define  COLOR_SLD_SLD_BIST_STATUS_dma_buf_bist_done(data)                       (0x00000002&((data)<<1))
#define  COLOR_SLD_SLD_BIST_STATUS_lb_bist_done(data)                            (0x00000001&(data))
#define  COLOR_SLD_SLD_BIST_STATUS_get_dma_buf_drf_start_pause(data)             ((0x00020000&(data))>>17)
#define  COLOR_SLD_SLD_BIST_STATUS_get_lb_drf_start_pause(data)                  ((0x00010000&(data))>>16)
#define  COLOR_SLD_SLD_BIST_STATUS_get_dma_buf_drf_bist_fail_grp(data)           ((0x00002000&(data))>>13)
#define  COLOR_SLD_SLD_BIST_STATUS_get_lb_drf_bist_fail_grp(data)                ((0x00001000&(data))>>12)
#define  COLOR_SLD_SLD_BIST_STATUS_get_dma_buf_bist_fail_grp(data)               ((0x00000200&(data))>>9)
#define  COLOR_SLD_SLD_BIST_STATUS_get_lb_bist_fail_grp(data)                    ((0x00000100&(data))>>8)
#define  COLOR_SLD_SLD_BIST_STATUS_get_dma_buf_drf_bist_done(data)               ((0x00000020&(data))>>5)
#define  COLOR_SLD_SLD_BIST_STATUS_get_lb_drf_bist_done(data)                    ((0x00000010&(data))>>4)
#define  COLOR_SLD_SLD_BIST_STATUS_get_dma_buf_bist_done(data)                   ((0x00000002&(data))>>1)
#define  COLOR_SLD_SLD_BIST_STATUS_get_lb_bist_done(data)                        (0x00000001&(data))

#define  COLOR_SLD_SLD_BIST_FAIL                                                0x1802C7F4
#define  COLOR_SLD_SLD_BIST_FAIL_reg_addr                                        "0xB802C7F4"
#define  COLOR_SLD_SLD_BIST_FAIL_reg                                             0xB802C7F4
#define  COLOR_SLD_SLD_BIST_FAIL_inst_addr                                       "0x000B"
#define  set_COLOR_SLD_SLD_BIST_FAIL_reg(data)                                   (*((volatile unsigned int*)COLOR_SLD_SLD_BIST_FAIL_reg)=data)
#define  get_COLOR_SLD_SLD_BIST_FAIL_reg                                         (*((volatile unsigned int*)COLOR_SLD_SLD_BIST_FAIL_reg))
#define  COLOR_SLD_SLD_BIST_FAIL_dma_buf_bist_fail_1_shift                       (9)
#define  COLOR_SLD_SLD_BIST_FAIL_dma_buf_bist_fail_0_shift                       (8)
#define  COLOR_SLD_SLD_BIST_FAIL_lb_bist_fail_7_shift                            (7)
#define  COLOR_SLD_SLD_BIST_FAIL_lb_bist_fail_6_shift                            (6)
#define  COLOR_SLD_SLD_BIST_FAIL_lb_bist_fail_5_shift                            (5)
#define  COLOR_SLD_SLD_BIST_FAIL_lb_bist_fail_4_shift                            (4)
#define  COLOR_SLD_SLD_BIST_FAIL_lb_bist_fail_3_shift                            (3)
#define  COLOR_SLD_SLD_BIST_FAIL_lb_bist_fail_2_shift                            (2)
#define  COLOR_SLD_SLD_BIST_FAIL_lb_bist_fail_1_shift                            (1)
#define  COLOR_SLD_SLD_BIST_FAIL_lb_bist_fail_0_shift                            (0)
#define  COLOR_SLD_SLD_BIST_FAIL_dma_buf_bist_fail_1_mask                        (0x00000200)
#define  COLOR_SLD_SLD_BIST_FAIL_dma_buf_bist_fail_0_mask                        (0x00000100)
#define  COLOR_SLD_SLD_BIST_FAIL_lb_bist_fail_7_mask                             (0x00000080)
#define  COLOR_SLD_SLD_BIST_FAIL_lb_bist_fail_6_mask                             (0x00000040)
#define  COLOR_SLD_SLD_BIST_FAIL_lb_bist_fail_5_mask                             (0x00000020)
#define  COLOR_SLD_SLD_BIST_FAIL_lb_bist_fail_4_mask                             (0x00000010)
#define  COLOR_SLD_SLD_BIST_FAIL_lb_bist_fail_3_mask                             (0x00000008)
#define  COLOR_SLD_SLD_BIST_FAIL_lb_bist_fail_2_mask                             (0x00000004)
#define  COLOR_SLD_SLD_BIST_FAIL_lb_bist_fail_1_mask                             (0x00000002)
#define  COLOR_SLD_SLD_BIST_FAIL_lb_bist_fail_0_mask                             (0x00000001)
#define  COLOR_SLD_SLD_BIST_FAIL_dma_buf_bist_fail_1(data)                       (0x00000200&((data)<<9))
#define  COLOR_SLD_SLD_BIST_FAIL_dma_buf_bist_fail_0(data)                       (0x00000100&((data)<<8))
#define  COLOR_SLD_SLD_BIST_FAIL_lb_bist_fail_7(data)                            (0x00000080&((data)<<7))
#define  COLOR_SLD_SLD_BIST_FAIL_lb_bist_fail_6(data)                            (0x00000040&((data)<<6))
#define  COLOR_SLD_SLD_BIST_FAIL_lb_bist_fail_5(data)                            (0x00000020&((data)<<5))
#define  COLOR_SLD_SLD_BIST_FAIL_lb_bist_fail_4(data)                            (0x00000010&((data)<<4))
#define  COLOR_SLD_SLD_BIST_FAIL_lb_bist_fail_3(data)                            (0x00000008&((data)<<3))
#define  COLOR_SLD_SLD_BIST_FAIL_lb_bist_fail_2(data)                            (0x00000004&((data)<<2))
#define  COLOR_SLD_SLD_BIST_FAIL_lb_bist_fail_1(data)                            (0x00000002&((data)<<1))
#define  COLOR_SLD_SLD_BIST_FAIL_lb_bist_fail_0(data)                            (0x00000001&(data))
#define  COLOR_SLD_SLD_BIST_FAIL_get_dma_buf_bist_fail_1(data)                   ((0x00000200&(data))>>9)
#define  COLOR_SLD_SLD_BIST_FAIL_get_dma_buf_bist_fail_0(data)                   ((0x00000100&(data))>>8)
#define  COLOR_SLD_SLD_BIST_FAIL_get_lb_bist_fail_7(data)                        ((0x00000080&(data))>>7)
#define  COLOR_SLD_SLD_BIST_FAIL_get_lb_bist_fail_6(data)                        ((0x00000040&(data))>>6)
#define  COLOR_SLD_SLD_BIST_FAIL_get_lb_bist_fail_5(data)                        ((0x00000020&(data))>>5)
#define  COLOR_SLD_SLD_BIST_FAIL_get_lb_bist_fail_4(data)                        ((0x00000010&(data))>>4)
#define  COLOR_SLD_SLD_BIST_FAIL_get_lb_bist_fail_3(data)                        ((0x00000008&(data))>>3)
#define  COLOR_SLD_SLD_BIST_FAIL_get_lb_bist_fail_2(data)                        ((0x00000004&(data))>>2)
#define  COLOR_SLD_SLD_BIST_FAIL_get_lb_bist_fail_1(data)                        ((0x00000002&(data))>>1)
#define  COLOR_SLD_SLD_BIST_FAIL_get_lb_bist_fail_0(data)                        (0x00000001&(data))

#define  COLOR_SLD_SLD_BIST_DRF_FAIL                                            0x1802C7F0
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_reg_addr                                    "0xB802C7F0"
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_reg                                         0xB802C7F0
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_inst_addr                                   "0x000C"
#define  set_COLOR_SLD_SLD_BIST_DRF_FAIL_reg(data)                               (*((volatile unsigned int*)COLOR_SLD_SLD_BIST_DRF_FAIL_reg)=data)
#define  get_COLOR_SLD_SLD_BIST_DRF_FAIL_reg                                     (*((volatile unsigned int*)COLOR_SLD_SLD_BIST_DRF_FAIL_reg))
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_dma_buf_drf_bist_fail_1_shift               (9)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_dma_buf_drf_bist_fail_0_shift               (8)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_lb_drf_bist_fail_7_shift                    (7)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_lb_drf_bist_fail_6_shift                    (6)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_lb_drf_bist_fail_5_shift                    (5)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_lb_drf_bist_fail_4_shift                    (4)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_lb_drf_bist_fail_3_shift                    (3)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_lb_drf_bist_fail_2_shift                    (2)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_lb_drf_bist_fail_1_shift                    (1)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_lb_drf_bist_fail_0_shift                    (0)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_dma_buf_drf_bist_fail_1_mask                (0x00000200)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_dma_buf_drf_bist_fail_0_mask                (0x00000100)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_lb_drf_bist_fail_7_mask                     (0x00000080)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_lb_drf_bist_fail_6_mask                     (0x00000040)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_lb_drf_bist_fail_5_mask                     (0x00000020)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_lb_drf_bist_fail_4_mask                     (0x00000010)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_lb_drf_bist_fail_3_mask                     (0x00000008)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_lb_drf_bist_fail_2_mask                     (0x00000004)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_lb_drf_bist_fail_1_mask                     (0x00000002)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_lb_drf_bist_fail_0_mask                     (0x00000001)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_dma_buf_drf_bist_fail_1(data)               (0x00000200&((data)<<9))
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_dma_buf_drf_bist_fail_0(data)               (0x00000100&((data)<<8))
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_lb_drf_bist_fail_7(data)                    (0x00000080&((data)<<7))
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_lb_drf_bist_fail_6(data)                    (0x00000040&((data)<<6))
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_lb_drf_bist_fail_5(data)                    (0x00000020&((data)<<5))
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_lb_drf_bist_fail_4(data)                    (0x00000010&((data)<<4))
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_lb_drf_bist_fail_3(data)                    (0x00000008&((data)<<3))
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_lb_drf_bist_fail_2(data)                    (0x00000004&((data)<<2))
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_lb_drf_bist_fail_1(data)                    (0x00000002&((data)<<1))
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_lb_drf_bist_fail_0(data)                    (0x00000001&(data))
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_get_dma_buf_drf_bist_fail_1(data)           ((0x00000200&(data))>>9)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_get_dma_buf_drf_bist_fail_0(data)           ((0x00000100&(data))>>8)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_get_lb_drf_bist_fail_7(data)                ((0x00000080&(data))>>7)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_get_lb_drf_bist_fail_6(data)                ((0x00000040&(data))>>6)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_get_lb_drf_bist_fail_5(data)                ((0x00000020&(data))>>5)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_get_lb_drf_bist_fail_4(data)                ((0x00000010&(data))>>4)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_get_lb_drf_bist_fail_3(data)                ((0x00000008&(data))>>3)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_get_lb_drf_bist_fail_2(data)                ((0x00000004&(data))>>2)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_get_lb_drf_bist_fail_1(data)                ((0x00000002&(data))>>1)
#define  COLOR_SLD_SLD_BIST_DRF_FAIL_get_lb_drf_bist_fail_0(data)                (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======COLOR_SLD register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802c700_31_21:11;
        RBus_UInt32  sld_scale_mode:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  sld_hpf_thl:8;
        RBus_UInt32  res2:2;
        RBus_UInt32  sld_hpf_type:2;
        RBus_UInt32  sld_global_drop:1;
        RBus_UInt32  sld_blend_en:1;
        RBus_UInt32  sld_debug_mode:1;
        RBus_UInt32  sld_en:1;
    };
}color_sld_sld_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  sld_width:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  sld_height:12;
    };
}color_sld_sld_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  sld_curve_seg_1:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  sld_curve_seg_0:10;
    };
}color_sld_sld_curve_map_seg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sld_curve_gain_2:8;
        RBus_UInt32  res1:4;
        RBus_UInt32  sld_curve_gain_1:8;
        RBus_UInt32  res2:4;
        RBus_UInt32  sld_curve_gain_0:8;
    };
}color_sld_sld_curve_map_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  sld_curve_offset_1:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  sld_curve_offset_0:11;
    };
}color_sld_sld_curve_map_offset_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  sld_curve_offset_2:11;
    };
}color_sld_sld_curve_map_offset_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sld_pixel_diff_thl:10;
        RBus_UInt32  res1:1;
        RBus_UInt32  sld_hpf_diff_thl:10;
        RBus_UInt32  res2:1;
        RBus_UInt32  sld_cnt_thl:10;
    };
}color_sld_sld_drop_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802c71c_31_17:15;
        RBus_UInt32  sld_logo_cnt:17;
    };
}color_sld_sld_cnt_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802c720_31_17:15;
        RBus_UInt32  sld_drop_cnt:17;
    };
}color_sld_sld_cnt_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  dma_buf_test1:1;
        RBus_UInt32  lb_test1:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  dma_buf_ls:1;
        RBus_UInt32  lb_ls:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  dma_buf_rme:1;
        RBus_UInt32  lb_rme:1;
        RBus_UInt32  res4:8;
        RBus_UInt32  dma_buf_rm:4;
        RBus_UInt32  lb_rm:4;
    };
}color_sld_sld_bist_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  dma_buf_drf_start_pause:1;
        RBus_UInt32  lb_drf_start_pause:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  dma_buf_drf_bist_fail_grp:1;
        RBus_UInt32  lb_drf_bist_fail_grp:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  dma_buf_bist_fail_grp:1;
        RBus_UInt32  lb_bist_fail_grp:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  dma_buf_drf_bist_done:1;
        RBus_UInt32  lb_drf_bist_done:1;
        RBus_UInt32  res5:2;
        RBus_UInt32  dma_buf_bist_done:1;
        RBus_UInt32  lb_bist_done:1;
    };
}color_sld_sld_bist_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  dma_buf_bist_fail_1:1;
        RBus_UInt32  dma_buf_bist_fail_0:1;
        RBus_UInt32  lb_bist_fail_7:1;
        RBus_UInt32  lb_bist_fail_6:1;
        RBus_UInt32  lb_bist_fail_5:1;
        RBus_UInt32  lb_bist_fail_4:1;
        RBus_UInt32  lb_bist_fail_3:1;
        RBus_UInt32  lb_bist_fail_2:1;
        RBus_UInt32  lb_bist_fail_1:1;
        RBus_UInt32  lb_bist_fail_0:1;
    };
}color_sld_sld_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  dma_buf_drf_bist_fail_1:1;
        RBus_UInt32  dma_buf_drf_bist_fail_0:1;
        RBus_UInt32  lb_drf_bist_fail_7:1;
        RBus_UInt32  lb_drf_bist_fail_6:1;
        RBus_UInt32  lb_drf_bist_fail_5:1;
        RBus_UInt32  lb_drf_bist_fail_4:1;
        RBus_UInt32  lb_drf_bist_fail_3:1;
        RBus_UInt32  lb_drf_bist_fail_2:1;
        RBus_UInt32  lb_drf_bist_fail_1:1;
        RBus_UInt32  lb_drf_bist_fail_0:1;
    };
}color_sld_sld_bist_drf_fail_RBUS;

#else //apply LITTLE_ENDIAN

//======COLOR_SLD register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sld_en:1;
        RBus_UInt32  sld_debug_mode:1;
        RBus_UInt32  sld_blend_en:1;
        RBus_UInt32  sld_global_drop:1;
        RBus_UInt32  sld_hpf_type:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  sld_hpf_thl:8;
        RBus_UInt32  res2:4;
        RBus_UInt32  sld_scale_mode:1;
        RBus_UInt32  dummy1802c700_31_21:11;
    };
}color_sld_sld_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sld_height:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  sld_width:12;
        RBus_UInt32  res2:4;
    };
}color_sld_sld_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sld_curve_seg_0:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  sld_curve_seg_1:10;
        RBus_UInt32  res2:6;
    };
}color_sld_sld_curve_map_seg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sld_curve_gain_0:8;
        RBus_UInt32  res1:4;
        RBus_UInt32  sld_curve_gain_1:8;
        RBus_UInt32  res2:4;
        RBus_UInt32  sld_curve_gain_2:8;
    };
}color_sld_sld_curve_map_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sld_curve_offset_0:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  sld_curve_offset_1:11;
        RBus_UInt32  res2:5;
    };
}color_sld_sld_curve_map_offset_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sld_curve_offset_2:11;
        RBus_UInt32  res1:21;
    };
}color_sld_sld_curve_map_offset_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sld_cnt_thl:10;
        RBus_UInt32  res1:1;
        RBus_UInt32  sld_hpf_diff_thl:10;
        RBus_UInt32  res2:1;
        RBus_UInt32  sld_pixel_diff_thl:10;
    };
}color_sld_sld_drop_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sld_logo_cnt:17;
        RBus_UInt32  dummy1802c71c_31_17:15;
    };
}color_sld_sld_cnt_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sld_drop_cnt:17;
        RBus_UInt32  dummy1802c720_31_17:15;
    };
}color_sld_sld_cnt_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lb_rm:4;
        RBus_UInt32  dma_buf_rm:4;
        RBus_UInt32  res1:8;
        RBus_UInt32  lb_rme:1;
        RBus_UInt32  dma_buf_rme:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  lb_ls:1;
        RBus_UInt32  dma_buf_ls:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  lb_test1:1;
        RBus_UInt32  dma_buf_test1:1;
        RBus_UInt32  res4:6;
    };
}color_sld_sld_bist_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lb_bist_done:1;
        RBus_UInt32  dma_buf_bist_done:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  lb_drf_bist_done:1;
        RBus_UInt32  dma_buf_drf_bist_done:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  lb_bist_fail_grp:1;
        RBus_UInt32  dma_buf_bist_fail_grp:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  lb_drf_bist_fail_grp:1;
        RBus_UInt32  dma_buf_drf_bist_fail_grp:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  lb_drf_start_pause:1;
        RBus_UInt32  dma_buf_drf_start_pause:1;
        RBus_UInt32  res5:14;
    };
}color_sld_sld_bist_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lb_bist_fail_0:1;
        RBus_UInt32  lb_bist_fail_1:1;
        RBus_UInt32  lb_bist_fail_2:1;
        RBus_UInt32  lb_bist_fail_3:1;
        RBus_UInt32  lb_bist_fail_4:1;
        RBus_UInt32  lb_bist_fail_5:1;
        RBus_UInt32  lb_bist_fail_6:1;
        RBus_UInt32  lb_bist_fail_7:1;
        RBus_UInt32  dma_buf_bist_fail_0:1;
        RBus_UInt32  dma_buf_bist_fail_1:1;
        RBus_UInt32  res1:22;
    };
}color_sld_sld_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lb_drf_bist_fail_0:1;
        RBus_UInt32  lb_drf_bist_fail_1:1;
        RBus_UInt32  lb_drf_bist_fail_2:1;
        RBus_UInt32  lb_drf_bist_fail_3:1;
        RBus_UInt32  lb_drf_bist_fail_4:1;
        RBus_UInt32  lb_drf_bist_fail_5:1;
        RBus_UInt32  lb_drf_bist_fail_6:1;
        RBus_UInt32  lb_drf_bist_fail_7:1;
        RBus_UInt32  dma_buf_drf_bist_fail_0:1;
        RBus_UInt32  dma_buf_drf_bist_fail_1:1;
        RBus_UInt32  res1:22;
    };
}color_sld_sld_bist_drf_fail_RBUS;




#endif 


#endif 
