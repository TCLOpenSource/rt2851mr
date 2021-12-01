/**
* @file Merlin5-DesignSpec-D-Domain_Panel_Compensation_OverDrive
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_OD_DMA_REG_H_
#define _RBUS_OD_DMA_REG_H_

#include "rbus_types.h"



//  OD_DMA Register Address
#define  OD_DMA_ODDMA_PQ_CMP                                                    0x1802CD00
#define  OD_DMA_ODDMA_PQ_CMP_reg_addr                                            "0xB802CD00"
#define  OD_DMA_ODDMA_PQ_CMP_reg                                                 0xB802CD00
#define  OD_DMA_ODDMA_PQ_CMP_inst_addr                                           "0x0000"
#define  set_OD_DMA_ODDMA_PQ_CMP_reg(data)                                       (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_CMP_reg                                             (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_reg))
#define  OD_DMA_ODDMA_PQ_CMP_cmp_en_shift                                        (31)
#define  OD_DMA_ODDMA_PQ_CMP_cmp_width_div32_shift                               (16)
#define  OD_DMA_ODDMA_PQ_CMP_cmp_height_shift                                    (0)
#define  OD_DMA_ODDMA_PQ_CMP_cmp_en_mask                                         (0x80000000)
#define  OD_DMA_ODDMA_PQ_CMP_cmp_width_div32_mask                                (0x01FF0000)
#define  OD_DMA_ODDMA_PQ_CMP_cmp_height_mask                                     (0x00003FFF)
#define  OD_DMA_ODDMA_PQ_CMP_cmp_en(data)                                        (0x80000000&((data)<<31))
#define  OD_DMA_ODDMA_PQ_CMP_cmp_width_div32(data)                               (0x01FF0000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_CMP_cmp_height(data)                                    (0x00003FFF&(data))
#define  OD_DMA_ODDMA_PQ_CMP_get_cmp_en(data)                                    ((0x80000000&(data))>>31)
#define  OD_DMA_ODDMA_PQ_CMP_get_cmp_width_div32(data)                           ((0x01FF0000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_CMP_get_cmp_height(data)                                (0x00003FFF&(data))

#define  OD_DMA_ODDMA_PQ_CMP_PAIR                                               0x1802CD04
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_reg_addr                                       "0xB802CD04"
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_reg                                            0xB802CD04
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_inst_addr                                      "0x0001"
#define  set_OD_DMA_ODDMA_PQ_CMP_PAIR_reg(data)                                  (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_PAIR_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_CMP_PAIR_reg                                        (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_PAIR_reg))
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_line_sum_bit_shift                         (16)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_400_old_mode_en_shift                      (15)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_dummy_14_11_shift                              (11)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_jump4_en_shift                             (10)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_qp_mode_shift                              (8)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_dic_mode_en_shift                          (7)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_two_line_prediction_en_shift                   (6)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_line_mode_shift                            (5)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_data_color_shift                           (4)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_data_bit_width_shift                       (2)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_data_format_shift                          (0)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_line_sum_bit_mask                          (0xFFFF0000)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_400_old_mode_en_mask                       (0x00008000)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_dummy_14_11_mask                               (0x00007800)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_jump4_en_mask                              (0x00000400)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_qp_mode_mask                               (0x00000300)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_dic_mode_en_mask                           (0x00000080)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_two_line_prediction_en_mask                    (0x00000040)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_line_mode_mask                             (0x00000020)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_data_color_mask                            (0x00000010)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_data_bit_width_mask                        (0x0000000C)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_data_format_mask                           (0x00000003)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_line_sum_bit(data)                         (0xFFFF0000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_400_old_mode_en(data)                      (0x00008000&((data)<<15))
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_dummy_14_11(data)                              (0x00007800&((data)<<11))
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_jump4_en(data)                             (0x00000400&((data)<<10))
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_qp_mode(data)                              (0x00000300&((data)<<8))
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_dic_mode_en(data)                          (0x00000080&((data)<<7))
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_two_line_prediction_en(data)                   (0x00000040&((data)<<6))
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_line_mode(data)                            (0x00000020&((data)<<5))
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_data_color(data)                           (0x00000010&((data)<<4))
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_data_bit_width(data)                       (0x0000000C&((data)<<2))
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_cmp_data_format(data)                          (0x00000003&(data))
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_get_cmp_line_sum_bit(data)                     ((0xFFFF0000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_get_cmp_400_old_mode_en(data)                  ((0x00008000&(data))>>15)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_get_dummy_14_11(data)                          ((0x00007800&(data))>>11)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_get_cmp_jump4_en(data)                         ((0x00000400&(data))>>10)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_get_cmp_qp_mode(data)                          ((0x00000300&(data))>>8)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_get_cmp_dic_mode_en(data)                      ((0x00000080&(data))>>7)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_get_two_line_prediction_en(data)               ((0x00000040&(data))>>6)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_get_cmp_line_mode(data)                        ((0x00000020&(data))>>5)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_get_cmp_data_color(data)                       ((0x00000010&(data))>>4)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_get_cmp_data_bit_width(data)                   ((0x0000000C&(data))>>2)
#define  OD_DMA_ODDMA_PQ_CMP_PAIR_get_cmp_data_format(data)                      (0x00000003&(data))

#define  OD_DMA_ODDMA_PQ_CMP_BIT                                                0x1802CD08
#define  OD_DMA_ODDMA_PQ_CMP_BIT_reg_addr                                        "0xB802CD08"
#define  OD_DMA_ODDMA_PQ_CMP_BIT_reg                                             0xB802CD08
#define  OD_DMA_ODDMA_PQ_CMP_BIT_inst_addr                                       "0x0002"
#define  set_OD_DMA_ODDMA_PQ_CMP_BIT_reg(data)                                   (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_BIT_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_CMP_BIT_reg                                         (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_BIT_reg))
#define  OD_DMA_ODDMA_PQ_CMP_BIT_first_line_more_bit_shift                       (24)
#define  OD_DMA_ODDMA_PQ_CMP_BIT_block_limit_bit_shift                           (16)
#define  OD_DMA_ODDMA_PQ_CMP_BIT_line_limit_bit_shift                            (8)
#define  OD_DMA_ODDMA_PQ_CMP_BIT_frame_limit_bit_shift                           (0)
#define  OD_DMA_ODDMA_PQ_CMP_BIT_first_line_more_bit_mask                        (0x3F000000)
#define  OD_DMA_ODDMA_PQ_CMP_BIT_block_limit_bit_mask                            (0x003F0000)
#define  OD_DMA_ODDMA_PQ_CMP_BIT_line_limit_bit_mask                             (0x00003F00)
#define  OD_DMA_ODDMA_PQ_CMP_BIT_frame_limit_bit_mask                            (0x0000003F)
#define  OD_DMA_ODDMA_PQ_CMP_BIT_first_line_more_bit(data)                       (0x3F000000&((data)<<24))
#define  OD_DMA_ODDMA_PQ_CMP_BIT_block_limit_bit(data)                           (0x003F0000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_CMP_BIT_line_limit_bit(data)                            (0x00003F00&((data)<<8))
#define  OD_DMA_ODDMA_PQ_CMP_BIT_frame_limit_bit(data)                           (0x0000003F&(data))
#define  OD_DMA_ODDMA_PQ_CMP_BIT_get_first_line_more_bit(data)                   ((0x3F000000&(data))>>24)
#define  OD_DMA_ODDMA_PQ_CMP_BIT_get_block_limit_bit(data)                       ((0x003F0000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_CMP_BIT_get_line_limit_bit(data)                        ((0x00003F00&(data))>>8)
#define  OD_DMA_ODDMA_PQ_CMP_BIT_get_frame_limit_bit(data)                       (0x0000003F&(data))

#define  OD_DMA_ODDMA_PQ_CMP_ENABLE                                             0x1802CD0C
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_reg_addr                                     "0xB802CD0C"
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_reg                                          0xB802CD0C
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_inst_addr                                    "0x0003"
#define  set_OD_DMA_ODDMA_PQ_CMP_ENABLE_reg(data)                                (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_ENABLE_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_CMP_ENABLE_reg                                      (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_ENABLE_reg))
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_input_fifo_pause_cycle_shift                 (28)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_tail_dummy_throughput_shift                  (27)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_first_predict_nc_mode_shift                  (26)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_g_ratio_shift                                (16)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_add_last2blk_over_curve_bit_shift            (15)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_variation_maxmin_en_shift                    (14)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_dynamic_sum_line_rst_shift                   (13)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_blk0_add_en_shift                            (12)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_guarantee_max_qp_en_shift                    (11)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_dynamic_allocate_ratio_en_shift              (10)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_poor_limit_min_qp_en_shift                   (9)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_balance_en_shift                             (8)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_fisrt_line_more_en_shift                     (7)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_blk0_add_half_en_shift                       (6)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_do_422_mode_shift                            (4)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_first_predict_nc_en_shift                    (3)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_not_enough_bit_do_422_en_shift               (2)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_not_rich_do_422_en_shift                     (1)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_rb_lossy_do_422_en_shift                     (0)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_input_fifo_pause_cycle_mask                  (0xF0000000)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_tail_dummy_throughput_mask                   (0x08000000)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_first_predict_nc_mode_mask                   (0x04000000)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_g_ratio_mask                                 (0x001F0000)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_add_last2blk_over_curve_bit_mask             (0x00008000)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_variation_maxmin_en_mask                     (0x00004000)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_dynamic_sum_line_rst_mask                    (0x00002000)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_blk0_add_en_mask                             (0x00001000)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_guarantee_max_qp_en_mask                     (0x00000800)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_dynamic_allocate_ratio_en_mask               (0x00000400)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_poor_limit_min_qp_en_mask                    (0x00000200)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_balance_en_mask                              (0x00000100)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_fisrt_line_more_en_mask                      (0x00000080)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_blk0_add_half_en_mask                        (0x00000040)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_do_422_mode_mask                             (0x00000030)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_first_predict_nc_en_mask                     (0x00000008)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_not_enough_bit_do_422_en_mask                (0x00000004)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_not_rich_do_422_en_mask                      (0x00000002)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_rb_lossy_do_422_en_mask                      (0x00000001)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_input_fifo_pause_cycle(data)                 (0xF0000000&((data)<<28))
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_tail_dummy_throughput(data)                  (0x08000000&((data)<<27))
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_first_predict_nc_mode(data)                  (0x04000000&((data)<<26))
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_g_ratio(data)                                (0x001F0000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_add_last2blk_over_curve_bit(data)            (0x00008000&((data)<<15))
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_variation_maxmin_en(data)                    (0x00004000&((data)<<14))
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_dynamic_sum_line_rst(data)                   (0x00002000&((data)<<13))
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_blk0_add_en(data)                            (0x00001000&((data)<<12))
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_guarantee_max_qp_en(data)                    (0x00000800&((data)<<11))
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_dynamic_allocate_ratio_en(data)              (0x00000400&((data)<<10))
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_poor_limit_min_qp_en(data)                   (0x00000200&((data)<<9))
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_balance_en(data)                             (0x00000100&((data)<<8))
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_fisrt_line_more_en(data)                     (0x00000080&((data)<<7))
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_blk0_add_half_en(data)                       (0x00000040&((data)<<6))
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_do_422_mode(data)                            (0x00000030&((data)<<4))
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_first_predict_nc_en(data)                    (0x00000008&((data)<<3))
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_not_enough_bit_do_422_en(data)               (0x00000004&((data)<<2))
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_not_rich_do_422_en(data)                     (0x00000002&((data)<<1))
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_rb_lossy_do_422_en(data)                     (0x00000001&(data))
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_get_input_fifo_pause_cycle(data)             ((0xF0000000&(data))>>28)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_get_tail_dummy_throughput(data)              ((0x08000000&(data))>>27)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_get_first_predict_nc_mode(data)              ((0x04000000&(data))>>26)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_get_g_ratio(data)                            ((0x001F0000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_get_add_last2blk_over_curve_bit(data)        ((0x00008000&(data))>>15)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_get_variation_maxmin_en(data)                ((0x00004000&(data))>>14)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_get_dynamic_sum_line_rst(data)               ((0x00002000&(data))>>13)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_get_blk0_add_en(data)                        ((0x00001000&(data))>>12)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_get_guarantee_max_qp_en(data)                ((0x00000800&(data))>>11)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_get_dynamic_allocate_ratio_en(data)          ((0x00000400&(data))>>10)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_get_poor_limit_min_qp_en(data)               ((0x00000200&(data))>>9)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_get_balance_en(data)                         ((0x00000100&(data))>>8)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_get_fisrt_line_more_en(data)                 ((0x00000080&(data))>>7)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_get_blk0_add_half_en(data)                   ((0x00000040&(data))>>6)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_get_do_422_mode(data)                        ((0x00000030&(data))>>4)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_get_first_predict_nc_en(data)                ((0x00000008&(data))>>3)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_get_not_enough_bit_do_422_en(data)           ((0x00000004&(data))>>2)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_get_not_rich_do_422_en(data)                 ((0x00000002&(data))>>1)
#define  OD_DMA_ODDMA_PQ_CMP_ENABLE_get_rb_lossy_do_422_en(data)                 (0x00000001&(data))

#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH                                             0x1802CD10
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_reg_addr                                     "0xB802CD10"
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_reg                                          0xB802CD10
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_inst_addr                                    "0x0004"
#define  set_OD_DMA_ODDMA_PQ_CMP_SMOOTH_reg(data)                                (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_SMOOTH_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_CMP_SMOOTH_reg                                      (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_SMOOTH_reg))
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_dic_mode_option_shift                        (28)
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_not_enough_bit_do_422_qp_shift               (24)
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_not_rich_do_422_th_shift                     (20)
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_rb_lossy_do_422_qp_level_shift               (16)
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_dic_mode_entry_th_shift                      (12)
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_variation_value_th_shift                     (8)
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_variation_num_th_shift                       (4)
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_variation_near_num_th_shift                  (0)
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_dic_mode_option_mask                         (0xF0000000)
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_not_enough_bit_do_422_qp_mask                (0x07000000)
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_not_rich_do_422_th_mask                      (0x00F00000)
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_rb_lossy_do_422_qp_level_mask                (0x00070000)
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_dic_mode_entry_th_mask                       (0x0000F000)
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_variation_value_th_mask                      (0x00000F00)
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_variation_num_th_mask                        (0x00000070)
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_variation_near_num_th_mask                   (0x00000007)
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_dic_mode_option(data)                        (0xF0000000&((data)<<28))
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_not_enough_bit_do_422_qp(data)               (0x07000000&((data)<<24))
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_not_rich_do_422_th(data)                     (0x00F00000&((data)<<20))
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_rb_lossy_do_422_qp_level(data)               (0x00070000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_dic_mode_entry_th(data)                      (0x0000F000&((data)<<12))
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_variation_value_th(data)                     (0x00000F00&((data)<<8))
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_variation_num_th(data)                       (0x00000070&((data)<<4))
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_variation_near_num_th(data)                  (0x00000007&(data))
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_get_dic_mode_option(data)                    ((0xF0000000&(data))>>28)
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_get_not_enough_bit_do_422_qp(data)           ((0x07000000&(data))>>24)
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_get_not_rich_do_422_th(data)                 ((0x00F00000&(data))>>20)
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_get_rb_lossy_do_422_qp_level(data)           ((0x00070000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_get_dic_mode_entry_th(data)                  ((0x0000F000&(data))>>12)
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_get_variation_value_th(data)                 ((0x00000F00&(data))>>8)
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_get_variation_num_th(data)                   ((0x00000070&(data))>>4)
#define  OD_DMA_ODDMA_PQ_CMP_SMOOTH_get_variation_near_num_th(data)              (0x00000007&(data))

#define  OD_DMA_ODDMA_PQ_CMP_ALLOCATE                                           0x1802CD14
#define  OD_DMA_ODDMA_PQ_CMP_ALLOCATE_reg_addr                                   "0xB802CD14"
#define  OD_DMA_ODDMA_PQ_CMP_ALLOCATE_reg                                        0xB802CD14
#define  OD_DMA_ODDMA_PQ_CMP_ALLOCATE_inst_addr                                  "0x0005"
#define  set_OD_DMA_ODDMA_PQ_CMP_ALLOCATE_reg(data)                              (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_ALLOCATE_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_CMP_ALLOCATE_reg                                    (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_ALLOCATE_reg))
#define  OD_DMA_ODDMA_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_max_shift           (24)
#define  OD_DMA_ODDMA_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_min_shift           (16)
#define  OD_DMA_ODDMA_PQ_CMP_ALLOCATE_dynamic_allocate_line_shift                (8)
#define  OD_DMA_ODDMA_PQ_CMP_ALLOCATE_dynamic_allocate_more_shift                (4)
#define  OD_DMA_ODDMA_PQ_CMP_ALLOCATE_dynamic_allocate_less_shift                (0)
#define  OD_DMA_ODDMA_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_max_mask            (0x1F000000)
#define  OD_DMA_ODDMA_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_min_mask            (0x001F0000)
#define  OD_DMA_ODDMA_PQ_CMP_ALLOCATE_dynamic_allocate_line_mask                 (0x00000700)
#define  OD_DMA_ODDMA_PQ_CMP_ALLOCATE_dynamic_allocate_more_mask                 (0x000000F0)
#define  OD_DMA_ODDMA_PQ_CMP_ALLOCATE_dynamic_allocate_less_mask                 (0x0000000F)
#define  OD_DMA_ODDMA_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_max(data)           (0x1F000000&((data)<<24))
#define  OD_DMA_ODDMA_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_min(data)           (0x001F0000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_CMP_ALLOCATE_dynamic_allocate_line(data)                (0x00000700&((data)<<8))
#define  OD_DMA_ODDMA_PQ_CMP_ALLOCATE_dynamic_allocate_more(data)                (0x000000F0&((data)<<4))
#define  OD_DMA_ODDMA_PQ_CMP_ALLOCATE_dynamic_allocate_less(data)                (0x0000000F&(data))
#define  OD_DMA_ODDMA_PQ_CMP_ALLOCATE_get_dynamic_allocate_ratio_max(data)       ((0x1F000000&(data))>>24)
#define  OD_DMA_ODDMA_PQ_CMP_ALLOCATE_get_dynamic_allocate_ratio_min(data)       ((0x001F0000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_CMP_ALLOCATE_get_dynamic_allocate_line(data)            ((0x00000700&(data))>>8)
#define  OD_DMA_ODDMA_PQ_CMP_ALLOCATE_get_dynamic_allocate_more(data)            ((0x000000F0&(data))>>4)
#define  OD_DMA_ODDMA_PQ_CMP_ALLOCATE_get_dynamic_allocate_less(data)            (0x0000000F&(data))

#define  OD_DMA_ODDMA_PQ_CMP_POOR                                               0x1802CD18
#define  OD_DMA_ODDMA_PQ_CMP_POOR_reg_addr                                       "0xB802CD18"
#define  OD_DMA_ODDMA_PQ_CMP_POOR_reg                                            0xB802CD18
#define  OD_DMA_ODDMA_PQ_CMP_POOR_inst_addr                                      "0x0006"
#define  set_OD_DMA_ODDMA_PQ_CMP_POOR_reg(data)                                  (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_POOR_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_CMP_POOR_reg                                        (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_POOR_reg))
#define  OD_DMA_ODDMA_PQ_CMP_POOR_poor_limit_th_qp4_shift                        (24)
#define  OD_DMA_ODDMA_PQ_CMP_POOR_poor_limit_th_qp3_shift                        (16)
#define  OD_DMA_ODDMA_PQ_CMP_POOR_poor_limit_th_qp2_shift                        (8)
#define  OD_DMA_ODDMA_PQ_CMP_POOR_poor_limit_th_qp1_shift                        (0)
#define  OD_DMA_ODDMA_PQ_CMP_POOR_poor_limit_th_qp4_mask                         (0x1F000000)
#define  OD_DMA_ODDMA_PQ_CMP_POOR_poor_limit_th_qp3_mask                         (0x001F0000)
#define  OD_DMA_ODDMA_PQ_CMP_POOR_poor_limit_th_qp2_mask                         (0x00001F00)
#define  OD_DMA_ODDMA_PQ_CMP_POOR_poor_limit_th_qp1_mask                         (0x0000001F)
#define  OD_DMA_ODDMA_PQ_CMP_POOR_poor_limit_th_qp4(data)                        (0x1F000000&((data)<<24))
#define  OD_DMA_ODDMA_PQ_CMP_POOR_poor_limit_th_qp3(data)                        (0x001F0000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_CMP_POOR_poor_limit_th_qp2(data)                        (0x00001F00&((data)<<8))
#define  OD_DMA_ODDMA_PQ_CMP_POOR_poor_limit_th_qp1(data)                        (0x0000001F&(data))
#define  OD_DMA_ODDMA_PQ_CMP_POOR_get_poor_limit_th_qp4(data)                    ((0x1F000000&(data))>>24)
#define  OD_DMA_ODDMA_PQ_CMP_POOR_get_poor_limit_th_qp3(data)                    ((0x001F0000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_CMP_POOR_get_poor_limit_th_qp2(data)                    ((0x00001F00&(data))>>8)
#define  OD_DMA_ODDMA_PQ_CMP_POOR_get_poor_limit_th_qp1(data)                    (0x0000001F&(data))

#define  OD_DMA_ODDMA_PQ_CMP_Guarantee                                          0x1802CD1C
#define  OD_DMA_ODDMA_PQ_CMP_Guarantee_reg_addr                                  "0xB802CD1C"
#define  OD_DMA_ODDMA_PQ_CMP_Guarantee_reg                                       0xB802CD1C
#define  OD_DMA_ODDMA_PQ_CMP_Guarantee_inst_addr                                 "0x0007"
#define  set_OD_DMA_ODDMA_PQ_CMP_Guarantee_reg(data)                             (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_Guarantee_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_CMP_Guarantee_reg                                   (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_Guarantee_reg))
#define  OD_DMA_ODDMA_PQ_CMP_Guarantee_cmp_crc_ro_line_sel_shift                 (16)
#define  OD_DMA_ODDMA_PQ_CMP_Guarantee_dic_mode_qp_th_rb_shift                   (12)
#define  OD_DMA_ODDMA_PQ_CMP_Guarantee_dic_mode_qp_th_g_shift                    (8)
#define  OD_DMA_ODDMA_PQ_CMP_Guarantee_guarantee_max_rb_qp_shift                 (4)
#define  OD_DMA_ODDMA_PQ_CMP_Guarantee_guarantee_max_g_qp_shift                  (0)
#define  OD_DMA_ODDMA_PQ_CMP_Guarantee_cmp_crc_ro_line_sel_mask                  (0x3FFF0000)
#define  OD_DMA_ODDMA_PQ_CMP_Guarantee_dic_mode_qp_th_rb_mask                    (0x0000F000)
#define  OD_DMA_ODDMA_PQ_CMP_Guarantee_dic_mode_qp_th_g_mask                     (0x00000F00)
#define  OD_DMA_ODDMA_PQ_CMP_Guarantee_guarantee_max_rb_qp_mask                  (0x000000F0)
#define  OD_DMA_ODDMA_PQ_CMP_Guarantee_guarantee_max_g_qp_mask                   (0x0000000F)
#define  OD_DMA_ODDMA_PQ_CMP_Guarantee_cmp_crc_ro_line_sel(data)                 (0x3FFF0000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_CMP_Guarantee_dic_mode_qp_th_rb(data)                   (0x0000F000&((data)<<12))
#define  OD_DMA_ODDMA_PQ_CMP_Guarantee_dic_mode_qp_th_g(data)                    (0x00000F00&((data)<<8))
#define  OD_DMA_ODDMA_PQ_CMP_Guarantee_guarantee_max_rb_qp(data)                 (0x000000F0&((data)<<4))
#define  OD_DMA_ODDMA_PQ_CMP_Guarantee_guarantee_max_g_qp(data)                  (0x0000000F&(data))
#define  OD_DMA_ODDMA_PQ_CMP_Guarantee_get_cmp_crc_ro_line_sel(data)             ((0x3FFF0000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_CMP_Guarantee_get_dic_mode_qp_th_rb(data)               ((0x0000F000&(data))>>12)
#define  OD_DMA_ODDMA_PQ_CMP_Guarantee_get_dic_mode_qp_th_g(data)                ((0x00000F00&(data))>>8)
#define  OD_DMA_ODDMA_PQ_CMP_Guarantee_get_guarantee_max_rb_qp(data)             ((0x000000F0&(data))>>4)
#define  OD_DMA_ODDMA_PQ_CMP_Guarantee_get_guarantee_max_g_qp(data)              (0x0000000F&(data))

#define  OD_DMA_ODDMA_PQ_CMP_BALANCE                                            0x1802CD20
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_reg_addr                                    "0xB802CD20"
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_reg                                         0xB802CD20
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_inst_addr                                   "0x0008"
#define  set_OD_DMA_ODDMA_PQ_CMP_BALANCE_reg(data)                               (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_BALANCE_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_CMP_BALANCE_reg                                     (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_BALANCE_reg))
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_variation_maxmin_th2_shift                  (24)
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_variation_maxmin_th_shift                   (16)
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_balance_rb_ov_th_shift                      (12)
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_balance_rb_ud_th_shift                      (10)
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_balance_rb_give_shift                       (8)
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_balance_g_ov_th_shift                       (4)
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_balance_g_ud_th_shift                       (2)
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_balance_g_give_shift                        (0)
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_variation_maxmin_th2_mask                   (0xFF000000)
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_variation_maxmin_th_mask                    (0x00FF0000)
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_balance_rb_ov_th_mask                       (0x00003000)
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_balance_rb_ud_th_mask                       (0x00000C00)
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_balance_rb_give_mask                        (0x00000300)
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_balance_g_ov_th_mask                        (0x00000030)
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_balance_g_ud_th_mask                        (0x0000000C)
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_balance_g_give_mask                         (0x00000003)
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_variation_maxmin_th2(data)                  (0xFF000000&((data)<<24))
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_variation_maxmin_th(data)                   (0x00FF0000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_balance_rb_ov_th(data)                      (0x00003000&((data)<<12))
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_balance_rb_ud_th(data)                      (0x00000C00&((data)<<10))
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_balance_rb_give(data)                       (0x00000300&((data)<<8))
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_balance_g_ov_th(data)                       (0x00000030&((data)<<4))
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_balance_g_ud_th(data)                       (0x0000000C&((data)<<2))
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_balance_g_give(data)                        (0x00000003&(data))
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_get_variation_maxmin_th2(data)              ((0xFF000000&(data))>>24)
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_get_variation_maxmin_th(data)               ((0x00FF0000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_get_balance_rb_ov_th(data)                  ((0x00003000&(data))>>12)
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_get_balance_rb_ud_th(data)                  ((0x00000C00&(data))>>10)
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_get_balance_rb_give(data)                   ((0x00000300&(data))>>8)
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_get_balance_g_ov_th(data)                   ((0x00000030&(data))>>4)
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_get_balance_g_ud_th(data)                   ((0x0000000C&(data))>>2)
#define  OD_DMA_ODDMA_PQ_CMP_BALANCE_get_balance_g_give(data)                    (0x00000003&(data))

#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN                                             0x1802CD24
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_reg_addr                                     "0xB802CD24"
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_reg                                          0xB802CD24
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_inst_addr                                    "0x0009"
#define  set_OD_DMA_ODDMA_PQ_CMP_IRQ_EN_reg(data)                                (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_IRQ_EN_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_CMP_IRQ_EN_reg                                      (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_IRQ_EN_reg))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_prs_over_line_sum_bit_irq_en_shift           (18)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_tail_fifo_overflow_irq_en_shift              (17)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_input_fifo_overflow_irq_en_shift             (16)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_block_fifo_overflow_irq_en_shift             (15)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_input_size_more_irq_en_shift                 (14)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_input_size_less_irq_en_shift                 (13)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_over_flb_irq_en_shift                        (12)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_request_fifo_even_overflow_irq_en_shift      (9)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_g_fifo_even_overflow_irq_en_shift            (6)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_r_fifo_even_overflow_irq_en_shift            (5)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_b_fifo_even_overflow_irq_en_shift            (4)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_prs_over_line_sum_bit_irq_en_mask            (0x00040000)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_tail_fifo_overflow_irq_en_mask               (0x00020000)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_input_fifo_overflow_irq_en_mask              (0x00010000)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_block_fifo_overflow_irq_en_mask              (0x00008000)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_input_size_more_irq_en_mask                  (0x00004000)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_input_size_less_irq_en_mask                  (0x00002000)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_over_flb_irq_en_mask                         (0x00001000)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_request_fifo_even_overflow_irq_en_mask       (0x00000200)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_g_fifo_even_overflow_irq_en_mask             (0x00000040)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_r_fifo_even_overflow_irq_en_mask             (0x00000020)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_b_fifo_even_overflow_irq_en_mask             (0x00000010)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_prs_over_line_sum_bit_irq_en(data)           (0x00040000&((data)<<18))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_tail_fifo_overflow_irq_en(data)              (0x00020000&((data)<<17))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_input_fifo_overflow_irq_en(data)             (0x00010000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_block_fifo_overflow_irq_en(data)             (0x00008000&((data)<<15))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_input_size_more_irq_en(data)                 (0x00004000&((data)<<14))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_input_size_less_irq_en(data)                 (0x00002000&((data)<<13))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_over_flb_irq_en(data)                        (0x00001000&((data)<<12))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_request_fifo_even_overflow_irq_en(data)      (0x00000200&((data)<<9))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_g_fifo_even_overflow_irq_en(data)            (0x00000040&((data)<<6))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_r_fifo_even_overflow_irq_en(data)            (0x00000020&((data)<<5))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_b_fifo_even_overflow_irq_en(data)            (0x00000010&((data)<<4))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_get_prs_over_line_sum_bit_irq_en(data)       ((0x00040000&(data))>>18)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_get_tail_fifo_overflow_irq_en(data)          ((0x00020000&(data))>>17)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_get_input_fifo_overflow_irq_en(data)         ((0x00010000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_get_block_fifo_overflow_irq_en(data)         ((0x00008000&(data))>>15)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_get_input_size_more_irq_en(data)             ((0x00004000&(data))>>14)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_get_input_size_less_irq_en(data)             ((0x00002000&(data))>>13)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_get_over_flb_irq_en(data)                    ((0x00001000&(data))>>12)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_get_request_fifo_even_overflow_irq_en(data)  ((0x00000200&(data))>>9)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_get_g_fifo_even_overflow_irq_en(data)        ((0x00000040&(data))>>6)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_get_r_fifo_even_overflow_irq_en(data)        ((0x00000020&(data))>>5)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_EN_get_b_fifo_even_overflow_irq_en(data)        ((0x00000010&(data))>>4)

#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST                                             0x1802CD28
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_reg_addr                                     "0xB802CD28"
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_reg                                          0xB802CD28
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_inst_addr                                    "0x000A"
#define  set_OD_DMA_ODDMA_PQ_CMP_IRQ_ST_reg(data)                                (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_IRQ_ST_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_CMP_IRQ_ST_reg                                      (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_IRQ_ST_reg))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_pqc_irq_shift                                (31)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_prs_over_line_sum_bit_st_shift               (18)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_tail_fifo_overflow_st_shift                  (17)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_input_fifo_overflow_st_shift                 (16)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_block_fifo_overflow_st_shift                 (15)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_input_size_more_st_shift                     (14)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_input_size_less_st_shift                     (13)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_over_flb_st_shift                            (12)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_request_fifo_even_overflow_st_shift          (9)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_g_fifo_even_overflow_st_shift                (6)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_r_fifo_even_overflow_st_shift                (5)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_b_fifo_even_overflow_st_shift                (4)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_pqc_irq_mask                                 (0x80000000)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_prs_over_line_sum_bit_st_mask                (0x00040000)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_tail_fifo_overflow_st_mask                   (0x00020000)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_input_fifo_overflow_st_mask                  (0x00010000)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_block_fifo_overflow_st_mask                  (0x00008000)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_input_size_more_st_mask                      (0x00004000)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_input_size_less_st_mask                      (0x00002000)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_over_flb_st_mask                             (0x00001000)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_request_fifo_even_overflow_st_mask           (0x00000200)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_g_fifo_even_overflow_st_mask                 (0x00000040)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_r_fifo_even_overflow_st_mask                 (0x00000020)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_b_fifo_even_overflow_st_mask                 (0x00000010)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_pqc_irq(data)                                (0x80000000&((data)<<31))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_prs_over_line_sum_bit_st(data)               (0x00040000&((data)<<18))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_tail_fifo_overflow_st(data)                  (0x00020000&((data)<<17))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_input_fifo_overflow_st(data)                 (0x00010000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_block_fifo_overflow_st(data)                 (0x00008000&((data)<<15))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_input_size_more_st(data)                     (0x00004000&((data)<<14))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_input_size_less_st(data)                     (0x00002000&((data)<<13))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_over_flb_st(data)                            (0x00001000&((data)<<12))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_request_fifo_even_overflow_st(data)          (0x00000200&((data)<<9))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_g_fifo_even_overflow_st(data)                (0x00000040&((data)<<6))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_r_fifo_even_overflow_st(data)                (0x00000020&((data)<<5))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_b_fifo_even_overflow_st(data)                (0x00000010&((data)<<4))
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_get_pqc_irq(data)                            ((0x80000000&(data))>>31)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_get_prs_over_line_sum_bit_st(data)           ((0x00040000&(data))>>18)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_get_tail_fifo_overflow_st(data)              ((0x00020000&(data))>>17)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_get_input_fifo_overflow_st(data)             ((0x00010000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_get_block_fifo_overflow_st(data)             ((0x00008000&(data))>>15)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_get_input_size_more_st(data)                 ((0x00004000&(data))>>14)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_get_input_size_less_st(data)                 ((0x00002000&(data))>>13)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_get_over_flb_st(data)                        ((0x00001000&(data))>>12)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_get_request_fifo_even_overflow_st(data)      ((0x00000200&(data))>>9)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_get_g_fifo_even_overflow_st(data)            ((0x00000040&(data))>>6)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_get_r_fifo_even_overflow_st(data)            ((0x00000020&(data))>>5)
#define  OD_DMA_ODDMA_PQ_CMP_IRQ_ST_get_b_fifo_even_overflow_st(data)            ((0x00000010&(data))>>4)

#define  OD_DMA_ODDMA_PQ_CMP_ST                                                 0x1802CD2C
#define  OD_DMA_ODDMA_PQ_CMP_ST_reg_addr                                         "0xB802CD2C"
#define  OD_DMA_ODDMA_PQ_CMP_ST_reg                                              0xB802CD2C
#define  OD_DMA_ODDMA_PQ_CMP_ST_inst_addr                                        "0x000B"
#define  set_OD_DMA_ODDMA_PQ_CMP_ST_reg(data)                                    (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_ST_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_CMP_ST_reg                                          (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_ST_reg))
#define  OD_DMA_ODDMA_PQ_CMP_ST_g_ratio_max_shift                                (24)
#define  OD_DMA_ODDMA_PQ_CMP_ST_g_ratio_min_shift                                (16)
#define  OD_DMA_ODDMA_PQ_CMP_ST_cmp_package_height_cnt_shift                     (0)
#define  OD_DMA_ODDMA_PQ_CMP_ST_g_ratio_max_mask                                 (0x1F000000)
#define  OD_DMA_ODDMA_PQ_CMP_ST_g_ratio_min_mask                                 (0x001F0000)
#define  OD_DMA_ODDMA_PQ_CMP_ST_cmp_package_height_cnt_mask                      (0x00003FFF)
#define  OD_DMA_ODDMA_PQ_CMP_ST_g_ratio_max(data)                                (0x1F000000&((data)<<24))
#define  OD_DMA_ODDMA_PQ_CMP_ST_g_ratio_min(data)                                (0x001F0000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_CMP_ST_cmp_package_height_cnt(data)                     (0x00003FFF&(data))
#define  OD_DMA_ODDMA_PQ_CMP_ST_get_g_ratio_max(data)                            ((0x1F000000&(data))>>24)
#define  OD_DMA_ODDMA_PQ_CMP_ST_get_g_ratio_min(data)                            ((0x001F0000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_CMP_ST_get_cmp_package_height_cnt(data)                 (0x00003FFF&(data))

#define  OD_DMA_ODDMA_PQ_CMP_QP_ST                                              0x1802CD30
#define  OD_DMA_ODDMA_PQ_CMP_QP_ST_reg_addr                                      "0xB802CD30"
#define  OD_DMA_ODDMA_PQ_CMP_QP_ST_reg                                           0xB802CD30
#define  OD_DMA_ODDMA_PQ_CMP_QP_ST_inst_addr                                     "0x000C"
#define  set_OD_DMA_ODDMA_PQ_CMP_QP_ST_reg(data)                                 (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_QP_ST_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_CMP_QP_ST_reg                                       (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_QP_ST_reg))
#define  OD_DMA_ODDMA_PQ_CMP_QP_ST_long_term_qp_measure_en_shift                 (31)
#define  OD_DMA_ODDMA_PQ_CMP_QP_ST_long_term_g_qp_max_shift                      (20)
#define  OD_DMA_ODDMA_PQ_CMP_QP_ST_long_term_rb_qp_max_shift                     (16)
#define  OD_DMA_ODDMA_PQ_CMP_QP_ST_short_term_g_qp_max_shift                     (4)
#define  OD_DMA_ODDMA_PQ_CMP_QP_ST_short_term_rb_qp_max_shift                    (0)
#define  OD_DMA_ODDMA_PQ_CMP_QP_ST_long_term_qp_measure_en_mask                  (0x80000000)
#define  OD_DMA_ODDMA_PQ_CMP_QP_ST_long_term_g_qp_max_mask                       (0x00F00000)
#define  OD_DMA_ODDMA_PQ_CMP_QP_ST_long_term_rb_qp_max_mask                      (0x000F0000)
#define  OD_DMA_ODDMA_PQ_CMP_QP_ST_short_term_g_qp_max_mask                      (0x000000F0)
#define  OD_DMA_ODDMA_PQ_CMP_QP_ST_short_term_rb_qp_max_mask                     (0x0000000F)
#define  OD_DMA_ODDMA_PQ_CMP_QP_ST_long_term_qp_measure_en(data)                 (0x80000000&((data)<<31))
#define  OD_DMA_ODDMA_PQ_CMP_QP_ST_long_term_g_qp_max(data)                      (0x00F00000&((data)<<20))
#define  OD_DMA_ODDMA_PQ_CMP_QP_ST_long_term_rb_qp_max(data)                     (0x000F0000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_CMP_QP_ST_short_term_g_qp_max(data)                     (0x000000F0&((data)<<4))
#define  OD_DMA_ODDMA_PQ_CMP_QP_ST_short_term_rb_qp_max(data)                    (0x0000000F&(data))
#define  OD_DMA_ODDMA_PQ_CMP_QP_ST_get_long_term_qp_measure_en(data)             ((0x80000000&(data))>>31)
#define  OD_DMA_ODDMA_PQ_CMP_QP_ST_get_long_term_g_qp_max(data)                  ((0x00F00000&(data))>>20)
#define  OD_DMA_ODDMA_PQ_CMP_QP_ST_get_long_term_rb_qp_max(data)                 ((0x000F0000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_CMP_QP_ST_get_short_term_g_qp_max(data)                 ((0x000000F0&(data))>>4)
#define  OD_DMA_ODDMA_PQ_CMP_QP_ST_get_short_term_rb_qp_max(data)                (0x0000000F&(data))

#define  OD_DMA_ODDMA_PQ_CMP_FIFO_ST1                                           0x1802CD34
#define  OD_DMA_ODDMA_PQ_CMP_FIFO_ST1_reg_addr                                   "0xB802CD34"
#define  OD_DMA_ODDMA_PQ_CMP_FIFO_ST1_reg                                        0xB802CD34
#define  OD_DMA_ODDMA_PQ_CMP_FIFO_ST1_inst_addr                                  "0x000D"
#define  set_OD_DMA_ODDMA_PQ_CMP_FIFO_ST1_reg(data)                              (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_FIFO_ST1_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_CMP_FIFO_ST1_reg                                    (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_FIFO_ST1_reg))
#define  OD_DMA_ODDMA_PQ_CMP_FIFO_ST1_fifo_water_measure_en_shift                (31)
#define  OD_DMA_ODDMA_PQ_CMP_FIFO_ST1_fifo_water_even_g_shift                    (16)
#define  OD_DMA_ODDMA_PQ_CMP_FIFO_ST1_fifo_water_even_r_shift                    (8)
#define  OD_DMA_ODDMA_PQ_CMP_FIFO_ST1_fifo_water_even_b_shift                    (0)
#define  OD_DMA_ODDMA_PQ_CMP_FIFO_ST1_fifo_water_measure_en_mask                 (0x80000000)
#define  OD_DMA_ODDMA_PQ_CMP_FIFO_ST1_fifo_water_even_g_mask                     (0x00FF0000)
#define  OD_DMA_ODDMA_PQ_CMP_FIFO_ST1_fifo_water_even_r_mask                     (0x0000FF00)
#define  OD_DMA_ODDMA_PQ_CMP_FIFO_ST1_fifo_water_even_b_mask                     (0x000000FF)
#define  OD_DMA_ODDMA_PQ_CMP_FIFO_ST1_fifo_water_measure_en(data)                (0x80000000&((data)<<31))
#define  OD_DMA_ODDMA_PQ_CMP_FIFO_ST1_fifo_water_even_g(data)                    (0x00FF0000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_CMP_FIFO_ST1_fifo_water_even_r(data)                    (0x0000FF00&((data)<<8))
#define  OD_DMA_ODDMA_PQ_CMP_FIFO_ST1_fifo_water_even_b(data)                    (0x000000FF&(data))
#define  OD_DMA_ODDMA_PQ_CMP_FIFO_ST1_get_fifo_water_measure_en(data)            ((0x80000000&(data))>>31)
#define  OD_DMA_ODDMA_PQ_CMP_FIFO_ST1_get_fifo_water_even_g(data)                ((0x00FF0000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_CMP_FIFO_ST1_get_fifo_water_even_r(data)                ((0x0000FF00&(data))>>8)
#define  OD_DMA_ODDMA_PQ_CMP_FIFO_ST1_get_fifo_water_even_b(data)                (0x000000FF&(data))

#define  OD_DMA_ODDMA_PQ_CMP_LEFT_ST                                            0x1802CD3C
#define  OD_DMA_ODDMA_PQ_CMP_LEFT_ST_reg_addr                                    "0xB802CD3C"
#define  OD_DMA_ODDMA_PQ_CMP_LEFT_ST_reg                                         0xB802CD3C
#define  OD_DMA_ODDMA_PQ_CMP_LEFT_ST_inst_addr                                   "0x000E"
#define  set_OD_DMA_ODDMA_PQ_CMP_LEFT_ST_reg(data)                               (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_LEFT_ST_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_CMP_LEFT_ST_reg                                     (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_LEFT_ST_reg))
#define  OD_DMA_ODDMA_PQ_CMP_LEFT_ST_g_frame_left_shift                          (16)
#define  OD_DMA_ODDMA_PQ_CMP_LEFT_ST_rb_frame_left_shift                         (0)
#define  OD_DMA_ODDMA_PQ_CMP_LEFT_ST_g_frame_left_mask                           (0xFFFF0000)
#define  OD_DMA_ODDMA_PQ_CMP_LEFT_ST_rb_frame_left_mask                          (0x0000FFFF)
#define  OD_DMA_ODDMA_PQ_CMP_LEFT_ST_g_frame_left(data)                          (0xFFFF0000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_CMP_LEFT_ST_rb_frame_left(data)                         (0x0000FFFF&(data))
#define  OD_DMA_ODDMA_PQ_CMP_LEFT_ST_get_g_frame_left(data)                      ((0xFFFF0000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_CMP_LEFT_ST_get_rb_frame_left(data)                     (0x0000FFFF&(data))

#define  OD_DMA_ODDMA_PQ_CMP_PACKAGE_ST                                         0x1802CD40
#define  OD_DMA_ODDMA_PQ_CMP_PACKAGE_ST_reg_addr                                 "0xB802CD40"
#define  OD_DMA_ODDMA_PQ_CMP_PACKAGE_ST_reg                                      0xB802CD40
#define  OD_DMA_ODDMA_PQ_CMP_PACKAGE_ST_inst_addr                                "0x000F"
#define  set_OD_DMA_ODDMA_PQ_CMP_PACKAGE_ST_reg(data)                            (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_PACKAGE_ST_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_CMP_PACKAGE_ST_reg                                  (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_PACKAGE_ST_reg))
#define  OD_DMA_ODDMA_PQ_CMP_PACKAGE_ST_total_package_long_term_shift            (31)
#define  OD_DMA_ODDMA_PQ_CMP_PACKAGE_ST_total_package_even_shift                 (0)
#define  OD_DMA_ODDMA_PQ_CMP_PACKAGE_ST_total_package_long_term_mask             (0x80000000)
#define  OD_DMA_ODDMA_PQ_CMP_PACKAGE_ST_total_package_even_mask                  (0x00FFFFFF)
#define  OD_DMA_ODDMA_PQ_CMP_PACKAGE_ST_total_package_long_term(data)            (0x80000000&((data)<<31))
#define  OD_DMA_ODDMA_PQ_CMP_PACKAGE_ST_total_package_even(data)                 (0x00FFFFFF&(data))
#define  OD_DMA_ODDMA_PQ_CMP_PACKAGE_ST_get_total_package_long_term(data)        ((0x80000000&(data))>>31)
#define  OD_DMA_ODDMA_PQ_CMP_PACKAGE_ST_get_total_package_even(data)             (0x00FFFFFF&(data))

#define  OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_G                                         0x1802CD44
#define  OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_G_reg_addr                                 "0xB802CD44"
#define  OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_G_reg                                      0xB802CD44
#define  OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_G_inst_addr                                "0x0010"
#define  set_OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_G_reg(data)                            (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_G_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_G_reg                                  (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_G_reg))
#define  OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_G_cmp_crc_even_g_shift                     (0)
#define  OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_G_cmp_crc_even_g_mask                      (0xFFFFFFFF)
#define  OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_G_cmp_crc_even_g(data)                     (0xFFFFFFFF&(data))
#define  OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_G_get_cmp_crc_even_g(data)                 (0xFFFFFFFF&(data))

#define  OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_R                                         0x1802CD48
#define  OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_R_reg_addr                                 "0xB802CD48"
#define  OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_R_reg                                      0xB802CD48
#define  OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_R_inst_addr                                "0x0011"
#define  set_OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_R_reg(data)                            (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_R_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_R_reg                                  (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_R_reg))
#define  OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_R_cmp_crc_even_r_shift                     (0)
#define  OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_R_cmp_crc_even_r_mask                      (0xFFFFFFFF)
#define  OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_R_cmp_crc_even_r(data)                     (0xFFFFFFFF&(data))
#define  OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_R_get_cmp_crc_even_r(data)                 (0xFFFFFFFF&(data))

#define  OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_B                                         0x1802CD4C
#define  OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_B_reg_addr                                 "0xB802CD4C"
#define  OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_B_reg                                      0xB802CD4C
#define  OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_B_inst_addr                                "0x0012"
#define  set_OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_B_reg(data)                            (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_B_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_B_reg                                  (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_B_reg))
#define  OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_B_cmp_crc_even_b_shift                     (0)
#define  OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_B_cmp_crc_even_b_mask                      (0xFFFFFFFF)
#define  OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_B_cmp_crc_even_b(data)                     (0xFFFFFFFF&(data))
#define  OD_DMA_ODDMA_PQ_CMP_CRC_EVEN_B_get_cmp_crc_even_b(data)                 (0xFFFFFFFF&(data))

#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD0                                          0x1802CD60
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD0_reg_addr                                  "0xB802CD60"
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD0_reg                                       0xB802CD60
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD0_inst_addr                                 "0x0013"
#define  set_OD_DMA_ODDMA_PQ_CMP_BLK0_ADD0_reg(data)                             (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_BLK0_ADD0_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_CMP_BLK0_ADD0_reg                                   (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_BLK0_ADD0_reg))
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD0_blk0_add_value0_shift                     (24)
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD0_dic_mode_tolerance_shift                  (16)
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD0_blk0_add_value32_shift                    (8)
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD0_blk0_add_value16_shift                    (0)
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD0_blk0_add_value0_mask                      (0x3F000000)
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD0_dic_mode_tolerance_mask                   (0x00FF0000)
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD0_blk0_add_value32_mask                     (0x00003F00)
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD0_blk0_add_value16_mask                     (0x0000003F)
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD0_blk0_add_value0(data)                     (0x3F000000&((data)<<24))
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD0_dic_mode_tolerance(data)                  (0x00FF0000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD0_blk0_add_value32(data)                    (0x00003F00&((data)<<8))
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD0_blk0_add_value16(data)                    (0x0000003F&(data))
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD0_get_blk0_add_value0(data)                 ((0x3F000000&(data))>>24)
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD0_get_dic_mode_tolerance(data)              ((0x00FF0000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD0_get_blk0_add_value32(data)                ((0x00003F00&(data))>>8)
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD0_get_blk0_add_value16(data)                (0x0000003F&(data))

#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD1                                          0x1802CD64
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD1_reg_addr                                  "0xB802CD64"
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD1_reg                                       0xB802CD64
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD1_inst_addr                                 "0x0014"
#define  set_OD_DMA_ODDMA_PQ_CMP_BLK0_ADD1_reg(data)                             (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_BLK0_ADD1_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_CMP_BLK0_ADD1_reg                                   (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_CMP_BLK0_ADD1_reg))
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD1_blk0_add_value8_shift                     (24)
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD1_blk0_add_value4_shift                     (16)
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD1_blk0_add_value2_shift                     (8)
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD1_blk0_add_value1_shift                     (0)
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD1_blk0_add_value8_mask                      (0x3F000000)
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD1_blk0_add_value4_mask                      (0x003F0000)
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD1_blk0_add_value2_mask                      (0x00003F00)
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD1_blk0_add_value1_mask                      (0x0000003F)
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD1_blk0_add_value8(data)                     (0x3F000000&((data)<<24))
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD1_blk0_add_value4(data)                     (0x003F0000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD1_blk0_add_value2(data)                     (0x00003F00&((data)<<8))
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD1_blk0_add_value1(data)                     (0x0000003F&(data))
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD1_get_blk0_add_value8(data)                 ((0x3F000000&(data))>>24)
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD1_get_blk0_add_value4(data)                 ((0x003F0000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD1_get_blk0_add_value2(data)                 ((0x00003F00&(data))>>8)
#define  OD_DMA_ODDMA_PQ_CMP_BLK0_ADD1_get_blk0_add_value1(data)                 (0x0000003F&(data))

#define  OD_DMA_ODDMA_PQ_DECMP                                                  0x1802CD80
#define  OD_DMA_ODDMA_PQ_DECMP_reg_addr                                          "0xB802CD80"
#define  OD_DMA_ODDMA_PQ_DECMP_reg                                               0xB802CD80
#define  OD_DMA_ODDMA_PQ_DECMP_inst_addr                                         "0x0015"
#define  set_OD_DMA_ODDMA_PQ_DECMP_reg(data)                                     (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_DECMP_reg                                           (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_reg))
#define  OD_DMA_ODDMA_PQ_DECMP_decmp_en_shift                                    (31)
#define  OD_DMA_ODDMA_PQ_DECMP_decmp_width_div32_shift                           (16)
#define  OD_DMA_ODDMA_PQ_DECMP_decmp_height_shift                                (0)
#define  OD_DMA_ODDMA_PQ_DECMP_decmp_en_mask                                     (0x80000000)
#define  OD_DMA_ODDMA_PQ_DECMP_decmp_width_div32_mask                            (0x01FF0000)
#define  OD_DMA_ODDMA_PQ_DECMP_decmp_height_mask                                 (0x00003FFF)
#define  OD_DMA_ODDMA_PQ_DECMP_decmp_en(data)                                    (0x80000000&((data)<<31))
#define  OD_DMA_ODDMA_PQ_DECMP_decmp_width_div32(data)                           (0x01FF0000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_DECMP_decmp_height(data)                                (0x00003FFF&(data))
#define  OD_DMA_ODDMA_PQ_DECMP_get_decmp_en(data)                                ((0x80000000&(data))>>31)
#define  OD_DMA_ODDMA_PQ_DECMP_get_decmp_width_div32(data)                       ((0x01FF0000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_DECMP_get_decmp_height(data)                            (0x00003FFF&(data))

#define  OD_DMA_ODDMA_PQ_DECMP_PAIR                                             0x1802CD84
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_reg_addr                                     "0xB802CD84"
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_reg                                          0xB802CD84
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_inst_addr                                    "0x0016"
#define  set_OD_DMA_ODDMA_PQ_DECMP_PAIR_reg(data)                                (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_PAIR_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_DECMP_PAIR_reg                                      (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_PAIR_reg))
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_line_sum_bit_shift                     (16)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_400_old_mode_en_shift                  (15)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_dummy_14_11_shift                            (11)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_jump4_en_shift                         (10)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_qp_mode_shift                          (8)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_dic_mode_en_shift                      (7)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_two_line_prediction_en_shift           (6)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_line_mode_shift                        (5)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_data_color_shift                       (4)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_data_bit_width_shift                   (2)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_data_format_shift                      (0)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_line_sum_bit_mask                      (0xFFFF0000)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_400_old_mode_en_mask                   (0x00008000)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_dummy_14_11_mask                             (0x00007800)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_jump4_en_mask                          (0x00000400)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_qp_mode_mask                           (0x00000300)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_dic_mode_en_mask                       (0x00000080)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_two_line_prediction_en_mask            (0x00000040)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_line_mode_mask                         (0x00000020)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_data_color_mask                        (0x00000010)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_data_bit_width_mask                    (0x0000000C)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_data_format_mask                       (0x00000003)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_line_sum_bit(data)                     (0xFFFF0000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_400_old_mode_en(data)                  (0x00008000&((data)<<15))
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_dummy_14_11(data)                            (0x00007800&((data)<<11))
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_jump4_en(data)                         (0x00000400&((data)<<10))
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_qp_mode(data)                          (0x00000300&((data)<<8))
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_dic_mode_en(data)                      (0x00000080&((data)<<7))
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_two_line_prediction_en(data)           (0x00000040&((data)<<6))
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_line_mode(data)                        (0x00000020&((data)<<5))
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_data_color(data)                       (0x00000010&((data)<<4))
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_data_bit_width(data)                   (0x0000000C&((data)<<2))
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_decmp_data_format(data)                      (0x00000003&(data))
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_get_decmp_line_sum_bit(data)                 ((0xFFFF0000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_get_decmp_400_old_mode_en(data)              ((0x00008000&(data))>>15)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_get_dummy_14_11(data)                        ((0x00007800&(data))>>11)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_get_decmp_jump4_en(data)                     ((0x00000400&(data))>>10)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_get_decmp_qp_mode(data)                      ((0x00000300&(data))>>8)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_get_decmp_dic_mode_en(data)                  ((0x00000080&(data))>>7)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_get_decmp_two_line_prediction_en(data)       ((0x00000040&(data))>>6)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_get_decmp_line_mode(data)                    ((0x00000020&(data))>>5)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_get_decmp_data_color(data)                   ((0x00000010&(data))>>4)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_get_decmp_data_bit_width(data)               ((0x0000000C&(data))>>2)
#define  OD_DMA_ODDMA_PQ_DECMP_PAIR_get_decmp_data_format(data)                  (0x00000003&(data))

#define  OD_DMA_ODDMA_PQ_DECMP_SAT_EN                                           0x1802CD88
#define  OD_DMA_ODDMA_PQ_DECMP_SAT_EN_reg_addr                                   "0xB802CD88"
#define  OD_DMA_ODDMA_PQ_DECMP_SAT_EN_reg                                        0xB802CD88
#define  OD_DMA_ODDMA_PQ_DECMP_SAT_EN_inst_addr                                  "0x0017"
#define  set_OD_DMA_ODDMA_PQ_DECMP_SAT_EN_reg(data)                              (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_SAT_EN_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_DECMP_SAT_EN_reg                                    (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_SAT_EN_reg))
#define  OD_DMA_ODDMA_PQ_DECMP_SAT_EN_decmp_crc_ro_line_sel_shift                (16)
#define  OD_DMA_ODDMA_PQ_DECMP_SAT_EN_saturation_type_delta_shift                (2)
#define  OD_DMA_ODDMA_PQ_DECMP_SAT_EN_saturation_type_shift                      (1)
#define  OD_DMA_ODDMA_PQ_DECMP_SAT_EN_saturation_en_shift                        (0)
#define  OD_DMA_ODDMA_PQ_DECMP_SAT_EN_decmp_crc_ro_line_sel_mask                 (0x3FFF0000)
#define  OD_DMA_ODDMA_PQ_DECMP_SAT_EN_saturation_type_delta_mask                 (0x00000004)
#define  OD_DMA_ODDMA_PQ_DECMP_SAT_EN_saturation_type_mask                       (0x00000002)
#define  OD_DMA_ODDMA_PQ_DECMP_SAT_EN_saturation_en_mask                         (0x00000001)
#define  OD_DMA_ODDMA_PQ_DECMP_SAT_EN_decmp_crc_ro_line_sel(data)                (0x3FFF0000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_DECMP_SAT_EN_saturation_type_delta(data)                (0x00000004&((data)<<2))
#define  OD_DMA_ODDMA_PQ_DECMP_SAT_EN_saturation_type(data)                      (0x00000002&((data)<<1))
#define  OD_DMA_ODDMA_PQ_DECMP_SAT_EN_saturation_en(data)                        (0x00000001&(data))
#define  OD_DMA_ODDMA_PQ_DECMP_SAT_EN_get_decmp_crc_ro_line_sel(data)            ((0x3FFF0000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_DECMP_SAT_EN_get_saturation_type_delta(data)            ((0x00000004&(data))>>2)
#define  OD_DMA_ODDMA_PQ_DECMP_SAT_EN_get_saturation_type(data)                  ((0x00000002&(data))>>1)
#define  OD_DMA_ODDMA_PQ_DECMP_SAT_EN_get_saturation_en(data)                    (0x00000001&(data))

#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN                                           0x1802CD8C
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_reg_addr                                   "0xB802CD8C"
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_reg                                        0xB802CD8C
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_inst_addr                                  "0x0018"
#define  set_OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_reg(data)                              (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_reg                                    (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_reg))
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_not_finish_irq_even_en_shift               (21)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_underflow_irq_even_en_shift                (20)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_dic_error_even_en_shift                    (19)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_crc_r_error_even_en_shift                  (18)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_crc_g_error_even_en_shift                  (17)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_crc_b_error_even_en_shift                  (16)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_not_finish_irq_even_en_mask                (0x00200000)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_underflow_irq_even_en_mask                 (0x00100000)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_dic_error_even_en_mask                     (0x00080000)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_crc_r_error_even_en_mask                   (0x00040000)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_crc_g_error_even_en_mask                   (0x00020000)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_crc_b_error_even_en_mask                   (0x00010000)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_not_finish_irq_even_en(data)               (0x00200000&((data)<<21))
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_underflow_irq_even_en(data)                (0x00100000&((data)<<20))
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_dic_error_even_en(data)                    (0x00080000&((data)<<19))
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_crc_r_error_even_en(data)                  (0x00040000&((data)<<18))
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_crc_g_error_even_en(data)                  (0x00020000&((data)<<17))
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_crc_b_error_even_en(data)                  (0x00010000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_get_not_finish_irq_even_en(data)           ((0x00200000&(data))>>21)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_get_underflow_irq_even_en(data)            ((0x00100000&(data))>>20)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_get_dic_error_even_en(data)                ((0x00080000&(data))>>19)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_get_crc_r_error_even_en(data)              ((0x00040000&(data))>>18)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_get_crc_g_error_even_en(data)              ((0x00020000&(data))>>17)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_EN_get_crc_b_error_even_en(data)              ((0x00010000&(data))>>16)

#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st                                           0x1802CD90
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_reg_addr                                   "0xB802CD90"
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_reg                                        0xB802CD90
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_inst_addr                                  "0x0019"
#define  set_OD_DMA_ODDMA_PQ_DECMP_IRQ_st_reg(data)                              (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_IRQ_st_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_DECMP_IRQ_st_reg                                    (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_IRQ_st_reg))
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_pqdc_irq_shift                             (31)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_in_fifo_overflow_even_st_shift             (27)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_ring_r_overflow_even_st_shift              (26)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_ring_g_overflow_even_st_shift              (25)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_ring_b_overflow_even_st_shift              (24)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_not_finish_irq_even_st_shift               (21)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_underflow_irq_even_st_shift                (20)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_dic_error_even_st_shift                    (19)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_crc_r_error_even_st_shift                  (18)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_crc_g_error_even_st_shift                  (17)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_crc_b_error_even_st_shift                  (16)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_pqdc_irq_mask                              (0x80000000)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_in_fifo_overflow_even_st_mask              (0x08000000)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_ring_r_overflow_even_st_mask               (0x04000000)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_ring_g_overflow_even_st_mask               (0x02000000)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_ring_b_overflow_even_st_mask               (0x01000000)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_not_finish_irq_even_st_mask                (0x00200000)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_underflow_irq_even_st_mask                 (0x00100000)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_dic_error_even_st_mask                     (0x00080000)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_crc_r_error_even_st_mask                   (0x00040000)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_crc_g_error_even_st_mask                   (0x00020000)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_crc_b_error_even_st_mask                   (0x00010000)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_pqdc_irq(data)                             (0x80000000&((data)<<31))
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_in_fifo_overflow_even_st(data)             (0x08000000&((data)<<27))
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_ring_r_overflow_even_st(data)              (0x04000000&((data)<<26))
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_ring_g_overflow_even_st(data)              (0x02000000&((data)<<25))
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_ring_b_overflow_even_st(data)              (0x01000000&((data)<<24))
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_not_finish_irq_even_st(data)               (0x00200000&((data)<<21))
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_underflow_irq_even_st(data)                (0x00100000&((data)<<20))
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_dic_error_even_st(data)                    (0x00080000&((data)<<19))
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_crc_r_error_even_st(data)                  (0x00040000&((data)<<18))
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_crc_g_error_even_st(data)                  (0x00020000&((data)<<17))
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_crc_b_error_even_st(data)                  (0x00010000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_get_pqdc_irq(data)                         ((0x80000000&(data))>>31)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_get_in_fifo_overflow_even_st(data)         ((0x08000000&(data))>>27)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_get_ring_r_overflow_even_st(data)          ((0x04000000&(data))>>26)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_get_ring_g_overflow_even_st(data)          ((0x02000000&(data))>>25)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_get_ring_b_overflow_even_st(data)          ((0x01000000&(data))>>24)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_get_not_finish_irq_even_st(data)           ((0x00200000&(data))>>21)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_get_underflow_irq_even_st(data)            ((0x00100000&(data))>>20)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_get_dic_error_even_st(data)                ((0x00080000&(data))>>19)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_get_crc_r_error_even_st(data)              ((0x00040000&(data))>>18)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_get_crc_g_error_even_st(data)              ((0x00020000&(data))>>17)
#define  OD_DMA_ODDMA_PQ_DECMP_IRQ_st_get_crc_b_error_even_st(data)              ((0x00010000&(data))>>16)

#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN                                          0x1802CD94
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_reg_addr                                  "0xB802CD94"
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_reg                                       0xB802CD94
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_inst_addr                                 "0x001A"
#define  set_OD_DMA_ODDMA_PQ_DECMP_MARK_EN_reg(data)                             (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_MARK_EN_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_DECMP_MARK_EN_reg                                   (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_MARK_EN_reg))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_do_422_shift                      (31)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_dic_shift                         (17)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp_sel_shift                      (16)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp7_shift                         (7)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp6_shift                         (6)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp5_shift                         (5)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp4_shift                         (4)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp3_shift                         (3)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp2_shift                         (2)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp1_shift                         (1)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp0_shift                         (0)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_do_422_mask                       (0x80000000)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_dic_mask                          (0x00020000)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp_sel_mask                       (0x00010000)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp7_mask                          (0x00000080)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp6_mask                          (0x00000040)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp5_mask                          (0x00000020)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp4_mask                          (0x00000010)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp3_mask                          (0x00000008)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp2_mask                          (0x00000004)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp1_mask                          (0x00000002)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp0_mask                          (0x00000001)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_do_422(data)                      (0x80000000&((data)<<31))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_dic(data)                         (0x00020000&((data)<<17))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp_sel(data)                      (0x00010000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp7(data)                         (0x00000080&((data)<<7))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp6(data)                         (0x00000040&((data)<<6))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp5(data)                         (0x00000020&((data)<<5))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp4(data)                         (0x00000010&((data)<<4))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp3(data)                         (0x00000008&((data)<<3))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp2(data)                         (0x00000004&((data)<<2))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp1(data)                         (0x00000002&((data)<<1))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_mark_en_qp0(data)                         (0x00000001&(data))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_get_mark_en_do_422(data)                  ((0x80000000&(data))>>31)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_get_mark_en_dic(data)                     ((0x00020000&(data))>>17)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_get_mark_en_qp_sel(data)                  ((0x00010000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_get_mark_en_qp7(data)                     ((0x00000080&(data))>>7)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_get_mark_en_qp6(data)                     ((0x00000040&(data))>>6)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_get_mark_en_qp5(data)                     ((0x00000020&(data))>>5)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_get_mark_en_qp4(data)                     ((0x00000010&(data))>>4)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_get_mark_en_qp3(data)                     ((0x00000008&(data))>>3)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_get_mark_en_qp2(data)                     ((0x00000004&(data))>>2)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_get_mark_en_qp1(data)                     ((0x00000002&(data))>>1)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_EN_get_mark_en_qp0(data)                     (0x00000001&(data))

#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_01                                    0x1802CD98
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_01_reg_addr                            "0xB802CD98"
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_01_reg                                 0xB802CD98
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_01_inst_addr                           "0x001B"
#define  set_OD_DMA_ODDMA_PQ_DECMP_MARK_color_01_reg(data)                       (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_MARK_color_01_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_DECMP_MARK_color_01_reg                             (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_MARK_color_01_reg))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_01_mark_color_0_shift                  (16)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_01_mark_color_1_shift                  (0)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_01_mark_color_0_mask                   (0xFFFF0000)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_01_mark_color_1_mask                   (0x0000FFFF)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_01_mark_color_0(data)                  (0xFFFF0000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_01_mark_color_1(data)                  (0x0000FFFF&(data))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_01_get_mark_color_0(data)              ((0xFFFF0000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_01_get_mark_color_1(data)              (0x0000FFFF&(data))

#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_23                                    0x1802CD9C
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_23_reg_addr                            "0xB802CD9C"
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_23_reg                                 0xB802CD9C
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_23_inst_addr                           "0x001C"
#define  set_OD_DMA_ODDMA_PQ_DECMP_MARK_color_23_reg(data)                       (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_MARK_color_23_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_DECMP_MARK_color_23_reg                             (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_MARK_color_23_reg))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_23_mark_color_2_shift                  (16)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_23_mark_color_3_shift                  (0)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_23_mark_color_2_mask                   (0xFFFF0000)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_23_mark_color_3_mask                   (0x0000FFFF)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_23_mark_color_2(data)                  (0xFFFF0000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_23_mark_color_3(data)                  (0x0000FFFF&(data))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_23_get_mark_color_2(data)              ((0xFFFF0000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_23_get_mark_color_3(data)              (0x0000FFFF&(data))

#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_45                                    0x1802CDA0
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_45_reg_addr                            "0xB802CDA0"
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_45_reg                                 0xB802CDA0
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_45_inst_addr                           "0x001D"
#define  set_OD_DMA_ODDMA_PQ_DECMP_MARK_color_45_reg(data)                       (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_MARK_color_45_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_DECMP_MARK_color_45_reg                             (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_MARK_color_45_reg))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_45_mark_color_4_shift                  (16)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_45_mark_color_5_shift                  (0)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_45_mark_color_4_mask                   (0xFFFF0000)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_45_mark_color_5_mask                   (0x0000FFFF)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_45_mark_color_4(data)                  (0xFFFF0000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_45_mark_color_5(data)                  (0x0000FFFF&(data))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_45_get_mark_color_4(data)              ((0xFFFF0000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_45_get_mark_color_5(data)              (0x0000FFFF&(data))

#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_67                                    0x1802CDA4
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_67_reg_addr                            "0xB802CDA4"
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_67_reg                                 0xB802CDA4
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_67_inst_addr                           "0x001E"
#define  set_OD_DMA_ODDMA_PQ_DECMP_MARK_color_67_reg(data)                       (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_MARK_color_67_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_DECMP_MARK_color_67_reg                             (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_MARK_color_67_reg))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_67_mark_color_6_shift                  (16)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_67_mark_color_7_shift                  (0)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_67_mark_color_6_mask                   (0xFFFF0000)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_67_mark_color_7_mask                   (0x0000FFFF)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_67_mark_color_6(data)                  (0xFFFF0000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_67_mark_color_7(data)                  (0x0000FFFF&(data))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_67_get_mark_color_6(data)              ((0xFFFF0000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_67_get_mark_color_7(data)              (0x0000FFFF&(data))

#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_422                                   0x1802CDA8
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_422_reg_addr                           "0xB802CDA8"
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_422_reg                                0xB802CDA8
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_422_inst_addr                          "0x001F"
#define  set_OD_DMA_ODDMA_PQ_DECMP_MARK_color_422_reg(data)                      (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_MARK_color_422_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_DECMP_MARK_color_422_reg                            (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_MARK_color_422_reg))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_422_mark_color_dic_shift               (16)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_422_mark_color_422_shift               (0)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_422_mark_color_dic_mask                (0xFFFF0000)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_422_mark_color_422_mask                (0x0000FFFF)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_422_mark_color_dic(data)               (0xFFFF0000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_422_mark_color_422(data)               (0x0000FFFF&(data))
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_422_get_mark_color_dic(data)           ((0xFFFF0000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_DECMP_MARK_color_422_get_mark_color_422(data)           (0x0000FFFF&(data))

#define  OD_DMA_ODDMA_PQ_DECMP_ST                                               0x1802CDAC
#define  OD_DMA_ODDMA_PQ_DECMP_ST_reg_addr                                       "0xB802CDAC"
#define  OD_DMA_ODDMA_PQ_DECMP_ST_reg                                            0xB802CDAC
#define  OD_DMA_ODDMA_PQ_DECMP_ST_inst_addr                                      "0x0020"
#define  set_OD_DMA_ODDMA_PQ_DECMP_ST_reg(data)                                  (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_ST_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_DECMP_ST_reg                                        (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_ST_reg))
#define  OD_DMA_ODDMA_PQ_DECMP_ST_decmp_crc_error_line_shift                     (16)
#define  OD_DMA_ODDMA_PQ_DECMP_ST_decmp_package_height_cnt_shift                 (0)
#define  OD_DMA_ODDMA_PQ_DECMP_ST_decmp_crc_error_line_mask                      (0x3FFF0000)
#define  OD_DMA_ODDMA_PQ_DECMP_ST_decmp_package_height_cnt_mask                  (0x00003FFF)
#define  OD_DMA_ODDMA_PQ_DECMP_ST_decmp_crc_error_line(data)                     (0x3FFF0000&((data)<<16))
#define  OD_DMA_ODDMA_PQ_DECMP_ST_decmp_package_height_cnt(data)                 (0x00003FFF&(data))
#define  OD_DMA_ODDMA_PQ_DECMP_ST_get_decmp_crc_error_line(data)                 ((0x3FFF0000&(data))>>16)
#define  OD_DMA_ODDMA_PQ_DECMP_ST_get_decmp_package_height_cnt(data)             (0x00003FFF&(data))

#define  OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_G                                       0x1802CDB0
#define  OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_G_reg_addr                               "0xB802CDB0"
#define  OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_G_reg                                    0xB802CDB0
#define  OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_G_inst_addr                              "0x0021"
#define  set_OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_G_reg(data)                          (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_G_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_G_reg                                (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_G_reg))
#define  OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_G_decmp_crc_even_g_shift                 (0)
#define  OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_G_decmp_crc_even_g_mask                  (0xFFFFFFFF)
#define  OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_G_decmp_crc_even_g(data)                 (0xFFFFFFFF&(data))
#define  OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_G_get_decmp_crc_even_g(data)             (0xFFFFFFFF&(data))

#define  OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_R                                       0x1802CDB4
#define  OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_R_reg_addr                               "0xB802CDB4"
#define  OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_R_reg                                    0xB802CDB4
#define  OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_R_inst_addr                              "0x0022"
#define  set_OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_R_reg(data)                          (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_R_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_R_reg                                (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_R_reg))
#define  OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_R_decmp_crc_even_r_shift                 (0)
#define  OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_R_decmp_crc_even_r_mask                  (0xFFFFFFFF)
#define  OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_R_decmp_crc_even_r(data)                 (0xFFFFFFFF&(data))
#define  OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_R_get_decmp_crc_even_r(data)             (0xFFFFFFFF&(data))

#define  OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_B                                       0x1802CDB8
#define  OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_B_reg_addr                               "0xB802CDB8"
#define  OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_B_reg                                    0xB802CDB8
#define  OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_B_inst_addr                              "0x0023"
#define  set_OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_B_reg(data)                          (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_B_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_B_reg                                (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_B_reg))
#define  OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_B_decmp_crc_even_b_shift                 (0)
#define  OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_B_decmp_crc_even_b_mask                  (0xFFFFFFFF)
#define  OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_B_decmp_crc_even_b(data)                 (0xFFFFFFFF&(data))
#define  OD_DMA_ODDMA_PQ_DECMP_CRC_EVEN_B_get_decmp_crc_even_b(data)             (0xFFFFFFFF&(data))

#define  OD_DMA_ODDMA_PQ_DECMP_PAUSE_CYCLE                                      0x1802CDD0
#define  OD_DMA_ODDMA_PQ_DECMP_PAUSE_CYCLE_reg_addr                              "0xB802CDD0"
#define  OD_DMA_ODDMA_PQ_DECMP_PAUSE_CYCLE_reg                                   0xB802CDD0
#define  OD_DMA_ODDMA_PQ_DECMP_PAUSE_CYCLE_inst_addr                             "0x0024"
#define  set_OD_DMA_ODDMA_PQ_DECMP_PAUSE_CYCLE_reg(data)                         (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_PAUSE_CYCLE_reg)=data)
#define  get_OD_DMA_ODDMA_PQ_DECMP_PAUSE_CYCLE_reg                               (*((volatile unsigned int*)OD_DMA_ODDMA_PQ_DECMP_PAUSE_CYCLE_reg))
#define  OD_DMA_ODDMA_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_measure_en_shift    (31)
#define  OD_DMA_ODDMA_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_long_term_shift     (30)
#define  OD_DMA_ODDMA_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_shift               (0)
#define  OD_DMA_ODDMA_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_measure_en_mask     (0x80000000)
#define  OD_DMA_ODDMA_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_long_term_mask      (0x40000000)
#define  OD_DMA_ODDMA_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_mask                (0x000000FF)
#define  OD_DMA_ODDMA_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_measure_en(data)    (0x80000000&((data)<<31))
#define  OD_DMA_ODDMA_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_long_term(data)     (0x40000000&((data)<<30))
#define  OD_DMA_ODDMA_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle(data)               (0x000000FF&(data))
#define  OD_DMA_ODDMA_PQ_DECMP_PAUSE_CYCLE_get_decmp_pause_cycle_measure_en(data) ((0x80000000&(data))>>31)
#define  OD_DMA_ODDMA_PQ_DECMP_PAUSE_CYCLE_get_decmp_pause_cycle_long_term(data) ((0x40000000&(data))>>30)
#define  OD_DMA_ODDMA_PQ_DECMP_PAUSE_CYCLE_get_decmp_pause_cycle(data)           (0x000000FF&(data))

#define  OD_DMA_ODDMA_PQC_PQDC_COMPENSATION                                     0x1802CDD4
#define  OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_reg_addr                             "0xB802CDD4"
#define  OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_reg                                  0xB802CDD4
#define  OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_inst_addr                            "0x0025"
#define  set_OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_reg(data)                        (*((volatile unsigned int*)OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_reg)=data)
#define  get_OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_reg                              (*((volatile unsigned int*)OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_reg))
#define  OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_dummy_31_2_shift                     (2)
#define  OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_tr_en_shift                          (1)
#define  OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_comp_de_comp_bypass_shift            (0)
#define  OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_dummy_31_2_mask                      (0xFFFFFFFC)
#define  OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_tr_en_mask                           (0x00000002)
#define  OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_comp_de_comp_bypass_mask             (0x00000001)
#define  OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_dummy_31_2(data)                     (0xFFFFFFFC&((data)<<2))
#define  OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_tr_en(data)                          (0x00000002&((data)<<1))
#define  OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_comp_de_comp_bypass(data)            (0x00000001&(data))
#define  OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_get_dummy_31_2(data)                 ((0xFFFFFFFC&(data))>>2)
#define  OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_get_tr_en(data)                      ((0x00000002&(data))>>1)
#define  OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_get_comp_de_comp_bypass(data)        (0x00000001&(data))

#define  OD_DMA_OD_DMA_DB_EN                                                    0x1802CDE0
#define  OD_DMA_OD_DMA_DB_EN_reg_addr                                            "0xB802CDE0"
#define  OD_DMA_OD_DMA_DB_EN_reg                                                 0xB802CDE0
#define  OD_DMA_OD_DMA_DB_EN_inst_addr                                           "0x0026"
#define  set_OD_DMA_OD_DMA_DB_EN_reg(data)                                       (*((volatile unsigned int*)OD_DMA_OD_DMA_DB_EN_reg)=data)
#define  get_OD_DMA_OD_DMA_DB_EN_reg                                             (*((volatile unsigned int*)OD_DMA_OD_DMA_DB_EN_reg))
#define  OD_DMA_OD_DMA_DB_EN_smooth_tog_en_shift                                 (8)
#define  OD_DMA_OD_DMA_DB_EN_disp_db_apply_shift                                 (6)
#define  OD_DMA_OD_DMA_DB_EN_disp_db_rd_sel_shift                                (5)
#define  OD_DMA_OD_DMA_DB_EN_disp_db_en_shift                                    (4)
#define  OD_DMA_OD_DMA_DB_EN_cap_db_apply_shift                                  (2)
#define  OD_DMA_OD_DMA_DB_EN_cap_db_rd_sel_shift                                 (1)
#define  OD_DMA_OD_DMA_DB_EN_cap_db_en_shift                                     (0)
#define  OD_DMA_OD_DMA_DB_EN_smooth_tog_en_mask                                  (0x00000100)
#define  OD_DMA_OD_DMA_DB_EN_disp_db_apply_mask                                  (0x00000040)
#define  OD_DMA_OD_DMA_DB_EN_disp_db_rd_sel_mask                                 (0x00000020)
#define  OD_DMA_OD_DMA_DB_EN_disp_db_en_mask                                     (0x00000010)
#define  OD_DMA_OD_DMA_DB_EN_cap_db_apply_mask                                   (0x00000004)
#define  OD_DMA_OD_DMA_DB_EN_cap_db_rd_sel_mask                                  (0x00000002)
#define  OD_DMA_OD_DMA_DB_EN_cap_db_en_mask                                      (0x00000001)
#define  OD_DMA_OD_DMA_DB_EN_smooth_tog_en(data)                                 (0x00000100&((data)<<8))
#define  OD_DMA_OD_DMA_DB_EN_disp_db_apply(data)                                 (0x00000040&((data)<<6))
#define  OD_DMA_OD_DMA_DB_EN_disp_db_rd_sel(data)                                (0x00000020&((data)<<5))
#define  OD_DMA_OD_DMA_DB_EN_disp_db_en(data)                                    (0x00000010&((data)<<4))
#define  OD_DMA_OD_DMA_DB_EN_cap_db_apply(data)                                  (0x00000004&((data)<<2))
#define  OD_DMA_OD_DMA_DB_EN_cap_db_rd_sel(data)                                 (0x00000002&((data)<<1))
#define  OD_DMA_OD_DMA_DB_EN_cap_db_en(data)                                     (0x00000001&(data))
#define  OD_DMA_OD_DMA_DB_EN_get_smooth_tog_en(data)                             ((0x00000100&(data))>>8)
#define  OD_DMA_OD_DMA_DB_EN_get_disp_db_apply(data)                             ((0x00000040&(data))>>6)
#define  OD_DMA_OD_DMA_DB_EN_get_disp_db_rd_sel(data)                            ((0x00000020&(data))>>5)
#define  OD_DMA_OD_DMA_DB_EN_get_disp_db_en(data)                                ((0x00000010&(data))>>4)
#define  OD_DMA_OD_DMA_DB_EN_get_cap_db_apply(data)                              ((0x00000004&(data))>>2)
#define  OD_DMA_OD_DMA_DB_EN_get_cap_db_rd_sel(data)                             ((0x00000002&(data))>>1)
#define  OD_DMA_OD_DMA_DB_EN_get_cap_db_en(data)                                 (0x00000001&(data))

#define  OD_DMA_OD_DMA_CTRL                                                     0x1802CDE4
#define  OD_DMA_OD_DMA_CTRL_reg_addr                                             "0xB802CDE4"
#define  OD_DMA_OD_DMA_CTRL_reg                                                  0xB802CDE4
#define  OD_DMA_OD_DMA_CTRL_inst_addr                                            "0x0027"
#define  set_OD_DMA_OD_DMA_CTRL_reg(data)                                        (*((volatile unsigned int*)OD_DMA_OD_DMA_CTRL_reg)=data)
#define  get_OD_DMA_OD_DMA_CTRL_reg                                              (*((volatile unsigned int*)OD_DMA_OD_DMA_CTRL_reg))
#define  OD_DMA_OD_DMA_CTRL_bit_sel_shift                                        (21)
#define  OD_DMA_OD_DMA_CTRL_pixel_encoding_shift                                 (20)
#define  OD_DMA_OD_DMA_CTRL_cap_block_fw_shift                                   (19)
#define  OD_DMA_OD_DMA_CTRL_set_block_sel_shift                                  (18)
#define  OD_DMA_OD_DMA_CTRL_auto_block_sel_en_shift                              (17)
#define  OD_DMA_OD_DMA_CTRL_oddma_mode_sel_shift                                 (16)
#define  OD_DMA_OD_DMA_CTRL_bit_sel_mask                                         (0x00600000)
#define  OD_DMA_OD_DMA_CTRL_pixel_encoding_mask                                  (0x00100000)
#define  OD_DMA_OD_DMA_CTRL_cap_block_fw_mask                                    (0x00080000)
#define  OD_DMA_OD_DMA_CTRL_set_block_sel_mask                                   (0x00040000)
#define  OD_DMA_OD_DMA_CTRL_auto_block_sel_en_mask                               (0x00020000)
#define  OD_DMA_OD_DMA_CTRL_oddma_mode_sel_mask                                  (0x00010000)
#define  OD_DMA_OD_DMA_CTRL_bit_sel(data)                                        (0x00600000&((data)<<21))
#define  OD_DMA_OD_DMA_CTRL_pixel_encoding(data)                                 (0x00100000&((data)<<20))
#define  OD_DMA_OD_DMA_CTRL_cap_block_fw(data)                                   (0x00080000&((data)<<19))
#define  OD_DMA_OD_DMA_CTRL_set_block_sel(data)                                  (0x00040000&((data)<<18))
#define  OD_DMA_OD_DMA_CTRL_auto_block_sel_en(data)                              (0x00020000&((data)<<17))
#define  OD_DMA_OD_DMA_CTRL_oddma_mode_sel(data)                                 (0x00010000&((data)<<16))
#define  OD_DMA_OD_DMA_CTRL_get_bit_sel(data)                                    ((0x00600000&(data))>>21)
#define  OD_DMA_OD_DMA_CTRL_get_pixel_encoding(data)                             ((0x00100000&(data))>>20)
#define  OD_DMA_OD_DMA_CTRL_get_cap_block_fw(data)                               ((0x00080000&(data))>>19)
#define  OD_DMA_OD_DMA_CTRL_get_set_block_sel(data)                              ((0x00040000&(data))>>18)
#define  OD_DMA_OD_DMA_CTRL_get_auto_block_sel_en(data)                          ((0x00020000&(data))>>17)
#define  OD_DMA_OD_DMA_CTRL_get_oddma_mode_sel(data)                             ((0x00010000&(data))>>16)

#define  OD_DMA_OD_DMA_CTRL_2                                                   0x1802CDE8
#define  OD_DMA_OD_DMA_CTRL_2_reg_addr                                           "0xB802CDE8"
#define  OD_DMA_OD_DMA_CTRL_2_reg                                                0xB802CDE8
#define  OD_DMA_OD_DMA_CTRL_2_inst_addr                                          "0x0028"
#define  set_OD_DMA_OD_DMA_CTRL_2_reg(data)                                      (*((volatile unsigned int*)OD_DMA_OD_DMA_CTRL_2_reg)=data)
#define  get_OD_DMA_OD_DMA_CTRL_2_reg                                            (*((volatile unsigned int*)OD_DMA_OD_DMA_CTRL_2_reg))
#define  OD_DMA_OD_DMA_CTRL_2_vact_shift                                         (16)
#define  OD_DMA_OD_DMA_CTRL_2_hact_shift                                         (0)
#define  OD_DMA_OD_DMA_CTRL_2_vact_mask                                          (0xFFFF0000)
#define  OD_DMA_OD_DMA_CTRL_2_hact_mask                                          (0x00007FFF)
#define  OD_DMA_OD_DMA_CTRL_2_vact(data)                                         (0xFFFF0000&((data)<<16))
#define  OD_DMA_OD_DMA_CTRL_2_hact(data)                                         (0x00007FFF&(data))
#define  OD_DMA_OD_DMA_CTRL_2_get_vact(data)                                     ((0xFFFF0000&(data))>>16)
#define  OD_DMA_OD_DMA_CTRL_2_get_hact(data)                                     (0x00007FFF&(data))

#define  OD_DMA_OD_DMA_Status                                                   0x1802CDEC
#define  OD_DMA_OD_DMA_Status_reg_addr                                           "0xB802CDEC"
#define  OD_DMA_OD_DMA_Status_reg                                                0xB802CDEC
#define  OD_DMA_OD_DMA_Status_inst_addr                                          "0x0029"
#define  set_OD_DMA_OD_DMA_Status_reg(data)                                      (*((volatile unsigned int*)OD_DMA_OD_DMA_Status_reg)=data)
#define  get_OD_DMA_OD_DMA_Status_reg                                            (*((volatile unsigned int*)OD_DMA_OD_DMA_Status_reg))
#define  OD_DMA_OD_DMA_Status_dummy_31_14_shift                                  (14)
#define  OD_DMA_OD_DMA_Status_disp_underflow_shift                               (13)
#define  OD_DMA_OD_DMA_Status_cap_overflow_shift                                 (12)
#define  OD_DMA_OD_DMA_Status_cap_over_size_shift                                (11)
#define  OD_DMA_OD_DMA_Status_cap_under_size_shift                               (10)
#define  OD_DMA_OD_DMA_Status_vs_rising_occur_shift                              (8)
#define  OD_DMA_OD_DMA_Status_cap_block_shift                                    (7)
#define  OD_DMA_OD_DMA_Status_disp_fifo_err_ie_shift                             (2)
#define  OD_DMA_OD_DMA_Status_cap_fifo_err_ie_shift                              (1)
#define  OD_DMA_OD_DMA_Status_vs_rising_ie_shift                                 (0)
#define  OD_DMA_OD_DMA_Status_dummy_31_14_mask                                   (0xFFFFC000)
#define  OD_DMA_OD_DMA_Status_disp_underflow_mask                                (0x00002000)
#define  OD_DMA_OD_DMA_Status_cap_overflow_mask                                  (0x00001000)
#define  OD_DMA_OD_DMA_Status_cap_over_size_mask                                 (0x00000800)
#define  OD_DMA_OD_DMA_Status_cap_under_size_mask                                (0x00000400)
#define  OD_DMA_OD_DMA_Status_vs_rising_occur_mask                               (0x00000100)
#define  OD_DMA_OD_DMA_Status_cap_block_mask                                     (0x00000080)
#define  OD_DMA_OD_DMA_Status_disp_fifo_err_ie_mask                              (0x00000004)
#define  OD_DMA_OD_DMA_Status_cap_fifo_err_ie_mask                               (0x00000002)
#define  OD_DMA_OD_DMA_Status_vs_rising_ie_mask                                  (0x00000001)
#define  OD_DMA_OD_DMA_Status_dummy_31_14(data)                                  (0xFFFFC000&((data)<<14))
#define  OD_DMA_OD_DMA_Status_disp_underflow(data)                               (0x00002000&((data)<<13))
#define  OD_DMA_OD_DMA_Status_cap_overflow(data)                                 (0x00001000&((data)<<12))
#define  OD_DMA_OD_DMA_Status_cap_over_size(data)                                (0x00000800&((data)<<11))
#define  OD_DMA_OD_DMA_Status_cap_under_size(data)                               (0x00000400&((data)<<10))
#define  OD_DMA_OD_DMA_Status_vs_rising_occur(data)                              (0x00000100&((data)<<8))
#define  OD_DMA_OD_DMA_Status_cap_block(data)                                    (0x00000080&((data)<<7))
#define  OD_DMA_OD_DMA_Status_disp_fifo_err_ie(data)                             (0x00000004&((data)<<2))
#define  OD_DMA_OD_DMA_Status_cap_fifo_err_ie(data)                              (0x00000002&((data)<<1))
#define  OD_DMA_OD_DMA_Status_vs_rising_ie(data)                                 (0x00000001&(data))
#define  OD_DMA_OD_DMA_Status_get_dummy_31_14(data)                              ((0xFFFFC000&(data))>>14)
#define  OD_DMA_OD_DMA_Status_get_disp_underflow(data)                           ((0x00002000&(data))>>13)
#define  OD_DMA_OD_DMA_Status_get_cap_overflow(data)                             ((0x00001000&(data))>>12)
#define  OD_DMA_OD_DMA_Status_get_cap_over_size(data)                            ((0x00000800&(data))>>11)
#define  OD_DMA_OD_DMA_Status_get_cap_under_size(data)                           ((0x00000400&(data))>>10)
#define  OD_DMA_OD_DMA_Status_get_vs_rising_occur(data)                          ((0x00000100&(data))>>8)
#define  OD_DMA_OD_DMA_Status_get_cap_block(data)                                ((0x00000080&(data))>>7)
#define  OD_DMA_OD_DMA_Status_get_disp_fifo_err_ie(data)                         ((0x00000004&(data))>>2)
#define  OD_DMA_OD_DMA_Status_get_cap_fifo_err_ie(data)                          ((0x00000002&(data))>>1)
#define  OD_DMA_OD_DMA_Status_get_vs_rising_ie(data)                             (0x00000001&(data))

#define  OD_DMA_ODDMA_WR_Rule_check_up                                          0x1802CE00
#define  OD_DMA_ODDMA_WR_Rule_check_up_reg_addr                                  "0xB802CE00"
#define  OD_DMA_ODDMA_WR_Rule_check_up_reg                                       0xB802CE00
#define  OD_DMA_ODDMA_WR_Rule_check_up_inst_addr                                 "0x002A"
#define  set_OD_DMA_ODDMA_WR_Rule_check_up_reg(data)                             (*((volatile unsigned int*)OD_DMA_ODDMA_WR_Rule_check_up_reg)=data)
#define  get_OD_DMA_ODDMA_WR_Rule_check_up_reg                                   (*((volatile unsigned int*)OD_DMA_ODDMA_WR_Rule_check_up_reg))
#define  OD_DMA_ODDMA_WR_Rule_check_up_cap_up_limit_shift                        (4)
#define  OD_DMA_ODDMA_WR_Rule_check_up_cap_up_limit_mask                         (0xFFFFFFF0)
#define  OD_DMA_ODDMA_WR_Rule_check_up_cap_up_limit(data)                        (0xFFFFFFF0&((data)<<4))
#define  OD_DMA_ODDMA_WR_Rule_check_up_get_cap_up_limit(data)                    ((0xFFFFFFF0&(data))>>4)

#define  OD_DMA_ODDMA_WR_Rule_check_low                                         0x1802CE04
#define  OD_DMA_ODDMA_WR_Rule_check_low_reg_addr                                 "0xB802CE04"
#define  OD_DMA_ODDMA_WR_Rule_check_low_reg                                      0xB802CE04
#define  OD_DMA_ODDMA_WR_Rule_check_low_inst_addr                                "0x002B"
#define  set_OD_DMA_ODDMA_WR_Rule_check_low_reg(data)                            (*((volatile unsigned int*)OD_DMA_ODDMA_WR_Rule_check_low_reg)=data)
#define  get_OD_DMA_ODDMA_WR_Rule_check_low_reg                                  (*((volatile unsigned int*)OD_DMA_ODDMA_WR_Rule_check_low_reg))
#define  OD_DMA_ODDMA_WR_Rule_check_low_cap_low_limit_shift                      (4)
#define  OD_DMA_ODDMA_WR_Rule_check_low_cap_low_limit_mask                       (0xFFFFFFF0)
#define  OD_DMA_ODDMA_WR_Rule_check_low_cap_low_limit(data)                      (0xFFFFFFF0&((data)<<4))
#define  OD_DMA_ODDMA_WR_Rule_check_low_get_cap_low_limit(data)                  ((0xFFFFFFF0&(data))>>4)

#define  OD_DMA_ODDMA_WR_Ctrl                                                   0x1802CE08
#define  OD_DMA_ODDMA_WR_Ctrl_reg_addr                                           "0xB802CE08"
#define  OD_DMA_ODDMA_WR_Ctrl_reg                                                0xB802CE08
#define  OD_DMA_ODDMA_WR_Ctrl_inst_addr                                          "0x002C"
#define  set_OD_DMA_ODDMA_WR_Ctrl_reg(data)                                      (*((volatile unsigned int*)OD_DMA_ODDMA_WR_Ctrl_reg)=data)
#define  get_OD_DMA_ODDMA_WR_Ctrl_reg                                            (*((volatile unsigned int*)OD_DMA_ODDMA_WR_Ctrl_reg))
#define  OD_DMA_ODDMA_WR_Ctrl_cap_max_outstanding_shift                          (8)
#define  OD_DMA_ODDMA_WR_Ctrl_cap_force_all_rst_shift                            (1)
#define  OD_DMA_ODDMA_WR_Ctrl_cap_en_shift                                       (0)
#define  OD_DMA_ODDMA_WR_Ctrl_cap_max_outstanding_mask                           (0x00000300)
#define  OD_DMA_ODDMA_WR_Ctrl_cap_force_all_rst_mask                             (0x00000002)
#define  OD_DMA_ODDMA_WR_Ctrl_cap_en_mask                                        (0x00000001)
#define  OD_DMA_ODDMA_WR_Ctrl_cap_max_outstanding(data)                          (0x00000300&((data)<<8))
#define  OD_DMA_ODDMA_WR_Ctrl_cap_force_all_rst(data)                            (0x00000002&((data)<<1))
#define  OD_DMA_ODDMA_WR_Ctrl_cap_en(data)                                       (0x00000001&(data))
#define  OD_DMA_ODDMA_WR_Ctrl_get_cap_max_outstanding(data)                      ((0x00000300&(data))>>8)
#define  OD_DMA_ODDMA_WR_Ctrl_get_cap_force_all_rst(data)                        ((0x00000002&(data))>>1)
#define  OD_DMA_ODDMA_WR_Ctrl_get_cap_en(data)                                   (0x00000001&(data))

#define  OD_DMA_ODDMA_WR_status                                                 0x1802CE0C
#define  OD_DMA_ODDMA_WR_status_reg_addr                                         "0xB802CE0C"
#define  OD_DMA_ODDMA_WR_status_reg                                              0xB802CE0C
#define  OD_DMA_ODDMA_WR_status_inst_addr                                        "0x002D"
#define  set_OD_DMA_ODDMA_WR_status_reg(data)                                    (*((volatile unsigned int*)OD_DMA_ODDMA_WR_status_reg)=data)
#define  get_OD_DMA_ODDMA_WR_status_reg                                          (*((volatile unsigned int*)OD_DMA_ODDMA_WR_status_reg))
#define  OD_DMA_ODDMA_WR_status_cap_cmd_water_shift                              (28)
#define  OD_DMA_ODDMA_WR_status_cap_data_water_shift                             (16)
#define  OD_DMA_ODDMA_WR_status_cap_cur_outstanding_shift                        (8)
#define  OD_DMA_ODDMA_WR_status_cap_soft_rst_before_cmd_finish_shift             (4)
#define  OD_DMA_ODDMA_WR_status_cap_soft_rst_with_data_left_shift                (3)
#define  OD_DMA_ODDMA_WR_status_cap_data_fifo_underflow_err_shift                (2)
#define  OD_DMA_ODDMA_WR_status_cap_exceed_range_err_shift                       (1)
#define  OD_DMA_ODDMA_WR_status_cap_zero_length_err_shift                        (0)
#define  OD_DMA_ODDMA_WR_status_cap_cmd_water_mask                               (0x70000000)
#define  OD_DMA_ODDMA_WR_status_cap_data_water_mask                              (0x01FF0000)
#define  OD_DMA_ODDMA_WR_status_cap_cur_outstanding_mask                         (0x00000700)
#define  OD_DMA_ODDMA_WR_status_cap_soft_rst_before_cmd_finish_mask              (0x00000010)
#define  OD_DMA_ODDMA_WR_status_cap_soft_rst_with_data_left_mask                 (0x00000008)
#define  OD_DMA_ODDMA_WR_status_cap_data_fifo_underflow_err_mask                 (0x00000004)
#define  OD_DMA_ODDMA_WR_status_cap_exceed_range_err_mask                        (0x00000002)
#define  OD_DMA_ODDMA_WR_status_cap_zero_length_err_mask                         (0x00000001)
#define  OD_DMA_ODDMA_WR_status_cap_cmd_water(data)                              (0x70000000&((data)<<28))
#define  OD_DMA_ODDMA_WR_status_cap_data_water(data)                             (0x01FF0000&((data)<<16))
#define  OD_DMA_ODDMA_WR_status_cap_cur_outstanding(data)                        (0x00000700&((data)<<8))
#define  OD_DMA_ODDMA_WR_status_cap_soft_rst_before_cmd_finish(data)             (0x00000010&((data)<<4))
#define  OD_DMA_ODDMA_WR_status_cap_soft_rst_with_data_left(data)                (0x00000008&((data)<<3))
#define  OD_DMA_ODDMA_WR_status_cap_data_fifo_underflow_err(data)                (0x00000004&((data)<<2))
#define  OD_DMA_ODDMA_WR_status_cap_exceed_range_err(data)                       (0x00000002&((data)<<1))
#define  OD_DMA_ODDMA_WR_status_cap_zero_length_err(data)                        (0x00000001&(data))
#define  OD_DMA_ODDMA_WR_status_get_cap_cmd_water(data)                          ((0x70000000&(data))>>28)
#define  OD_DMA_ODDMA_WR_status_get_cap_data_water(data)                         ((0x01FF0000&(data))>>16)
#define  OD_DMA_ODDMA_WR_status_get_cap_cur_outstanding(data)                    ((0x00000700&(data))>>8)
#define  OD_DMA_ODDMA_WR_status_get_cap_soft_rst_before_cmd_finish(data)         ((0x00000010&(data))>>4)
#define  OD_DMA_ODDMA_WR_status_get_cap_soft_rst_with_data_left(data)            ((0x00000008&(data))>>3)
#define  OD_DMA_ODDMA_WR_status_get_cap_data_fifo_underflow_err(data)            ((0x00000004&(data))>>2)
#define  OD_DMA_ODDMA_WR_status_get_cap_exceed_range_err(data)                   ((0x00000002&(data))>>1)
#define  OD_DMA_ODDMA_WR_status_get_cap_zero_length_err(data)                    (0x00000001&(data))

#define  OD_DMA_ODDMA_WR_status1                                                0x1802CE10
#define  OD_DMA_ODDMA_WR_status1_reg_addr                                        "0xB802CE10"
#define  OD_DMA_ODDMA_WR_status1_reg                                             0xB802CE10
#define  OD_DMA_ODDMA_WR_status1_inst_addr                                       "0x002E"
#define  set_OD_DMA_ODDMA_WR_status1_reg(data)                                   (*((volatile unsigned int*)OD_DMA_ODDMA_WR_status1_reg)=data)
#define  get_OD_DMA_ODDMA_WR_status1_reg                                         (*((volatile unsigned int*)OD_DMA_ODDMA_WR_status1_reg))
#define  OD_DMA_ODDMA_WR_status1_cap_ack_num_error_shift                         (31)
#define  OD_DMA_ODDMA_WR_status1_cap_last_no_ack_error_shift                     (30)
#define  OD_DMA_ODDMA_WR_status1_cap_target_ack_num_shift                        (16)
#define  OD_DMA_ODDMA_WR_status1_cap_last_ack_num_shift                          (8)
#define  OD_DMA_ODDMA_WR_status1_cap_selected_bl_shift                           (0)
#define  OD_DMA_ODDMA_WR_status1_cap_ack_num_error_mask                          (0x80000000)
#define  OD_DMA_ODDMA_WR_status1_cap_last_no_ack_error_mask                      (0x40000000)
#define  OD_DMA_ODDMA_WR_status1_cap_target_ack_num_mask                         (0x007F0000)
#define  OD_DMA_ODDMA_WR_status1_cap_last_ack_num_mask                           (0x00007F00)
#define  OD_DMA_ODDMA_WR_status1_cap_selected_bl_mask                            (0x0000007F)
#define  OD_DMA_ODDMA_WR_status1_cap_ack_num_error(data)                         (0x80000000&((data)<<31))
#define  OD_DMA_ODDMA_WR_status1_cap_last_no_ack_error(data)                     (0x40000000&((data)<<30))
#define  OD_DMA_ODDMA_WR_status1_cap_target_ack_num(data)                        (0x007F0000&((data)<<16))
#define  OD_DMA_ODDMA_WR_status1_cap_last_ack_num(data)                          (0x00007F00&((data)<<8))
#define  OD_DMA_ODDMA_WR_status1_cap_selected_bl(data)                           (0x0000007F&(data))
#define  OD_DMA_ODDMA_WR_status1_get_cap_ack_num_error(data)                     ((0x80000000&(data))>>31)
#define  OD_DMA_ODDMA_WR_status1_get_cap_last_no_ack_error(data)                 ((0x40000000&(data))>>30)
#define  OD_DMA_ODDMA_WR_status1_get_cap_target_ack_num(data)                    ((0x007F0000&(data))>>16)
#define  OD_DMA_ODDMA_WR_status1_get_cap_last_ack_num(data)                      ((0x00007F00&(data))>>8)
#define  OD_DMA_ODDMA_WR_status1_get_cap_selected_bl(data)                       (0x0000007F&(data))

#define  OD_DMA_ODDMA_WR_status2                                                0x1802CE14
#define  OD_DMA_ODDMA_WR_status2_reg_addr                                        "0xB802CE14"
#define  OD_DMA_ODDMA_WR_status2_reg                                             0xB802CE14
#define  OD_DMA_ODDMA_WR_status2_inst_addr                                       "0x002F"
#define  set_OD_DMA_ODDMA_WR_status2_reg(data)                                   (*((volatile unsigned int*)OD_DMA_ODDMA_WR_status2_reg)=data)
#define  get_OD_DMA_ODDMA_WR_status2_reg                                         (*((volatile unsigned int*)OD_DMA_ODDMA_WR_status2_reg))
#define  OD_DMA_ODDMA_WR_status2_cap_selected_addr_shift                         (4)
#define  OD_DMA_ODDMA_WR_status2_cap_addr_bl_sel_shift                           (0)
#define  OD_DMA_ODDMA_WR_status2_cap_selected_addr_mask                          (0xFFFFFFF0)
#define  OD_DMA_ODDMA_WR_status2_cap_addr_bl_sel_mask                            (0x00000003)
#define  OD_DMA_ODDMA_WR_status2_cap_selected_addr(data)                         (0xFFFFFFF0&((data)<<4))
#define  OD_DMA_ODDMA_WR_status2_cap_addr_bl_sel(data)                           (0x00000003&(data))
#define  OD_DMA_ODDMA_WR_status2_get_cap_selected_addr(data)                     ((0xFFFFFFF0&(data))>>4)
#define  OD_DMA_ODDMA_WR_status2_get_cap_addr_bl_sel(data)                       (0x00000003&(data))

#define  OD_DMA_ODDMA_WR_Water_Monitor                                          0x1802CE18
#define  OD_DMA_ODDMA_WR_Water_Monitor_reg_addr                                  "0xB802CE18"
#define  OD_DMA_ODDMA_WR_Water_Monitor_reg                                       0xB802CE18
#define  OD_DMA_ODDMA_WR_Water_Monitor_inst_addr                                 "0x0030"
#define  set_OD_DMA_ODDMA_WR_Water_Monitor_reg(data)                             (*((volatile unsigned int*)OD_DMA_ODDMA_WR_Water_Monitor_reg)=data)
#define  get_OD_DMA_ODDMA_WR_Water_Monitor_reg                                   (*((volatile unsigned int*)OD_DMA_ODDMA_WR_Water_Monitor_reg))
#define  OD_DMA_ODDMA_WR_Water_Monitor_cap_monitor_en_shift                      (31)
#define  OD_DMA_ODDMA_WR_Water_Monitor_cap_monitor_conti_shift                   (30)
#define  OD_DMA_ODDMA_WR_Water_Monitor_cap_reach_thd_shift                       (25)
#define  OD_DMA_ODDMA_WR_Water_Monitor_cap_monitor_thd_shift                     (16)
#define  OD_DMA_ODDMA_WR_Water_Monitor_cap_highest_water_level_shift             (0)
#define  OD_DMA_ODDMA_WR_Water_Monitor_cap_monitor_en_mask                       (0x80000000)
#define  OD_DMA_ODDMA_WR_Water_Monitor_cap_monitor_conti_mask                    (0x40000000)
#define  OD_DMA_ODDMA_WR_Water_Monitor_cap_reach_thd_mask                        (0x02000000)
#define  OD_DMA_ODDMA_WR_Water_Monitor_cap_monitor_thd_mask                      (0x01FF0000)
#define  OD_DMA_ODDMA_WR_Water_Monitor_cap_highest_water_level_mask              (0x000001FF)
#define  OD_DMA_ODDMA_WR_Water_Monitor_cap_monitor_en(data)                      (0x80000000&((data)<<31))
#define  OD_DMA_ODDMA_WR_Water_Monitor_cap_monitor_conti(data)                   (0x40000000&((data)<<30))
#define  OD_DMA_ODDMA_WR_Water_Monitor_cap_reach_thd(data)                       (0x02000000&((data)<<25))
#define  OD_DMA_ODDMA_WR_Water_Monitor_cap_monitor_thd(data)                     (0x01FF0000&((data)<<16))
#define  OD_DMA_ODDMA_WR_Water_Monitor_cap_highest_water_level(data)             (0x000001FF&(data))
#define  OD_DMA_ODDMA_WR_Water_Monitor_get_cap_monitor_en(data)                  ((0x80000000&(data))>>31)
#define  OD_DMA_ODDMA_WR_Water_Monitor_get_cap_monitor_conti(data)               ((0x40000000&(data))>>30)
#define  OD_DMA_ODDMA_WR_Water_Monitor_get_cap_reach_thd(data)                   ((0x02000000&(data))>>25)
#define  OD_DMA_ODDMA_WR_Water_Monitor_get_cap_monitor_thd(data)                 ((0x01FF0000&(data))>>16)
#define  OD_DMA_ODDMA_WR_Water_Monitor_get_cap_highest_water_level(data)         (0x000001FF&(data))

#define  OD_DMA_ODDMA_WR_num_bl_wrap_addr_0                                     0x1802CE30
#define  OD_DMA_ODDMA_WR_num_bl_wrap_addr_0_reg_addr                             "0xB802CE30"
#define  OD_DMA_ODDMA_WR_num_bl_wrap_addr_0_reg                                  0xB802CE30
#define  OD_DMA_ODDMA_WR_num_bl_wrap_addr_0_inst_addr                            "0x0031"
#define  set_OD_DMA_ODDMA_WR_num_bl_wrap_addr_0_reg(data)                        (*((volatile unsigned int*)OD_DMA_ODDMA_WR_num_bl_wrap_addr_0_reg)=data)
#define  get_OD_DMA_ODDMA_WR_num_bl_wrap_addr_0_reg                              (*((volatile unsigned int*)OD_DMA_ODDMA_WR_num_bl_wrap_addr_0_reg))
#define  OD_DMA_ODDMA_WR_num_bl_wrap_addr_0_cap_sta_addr_0_shift                 (4)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_addr_0_cap_sta_addr_0_mask                  (0xFFFFFFF0)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_addr_0_cap_sta_addr_0(data)                 (0xFFFFFFF0&((data)<<4))
#define  OD_DMA_ODDMA_WR_num_bl_wrap_addr_0_get_cap_sta_addr_0(data)             ((0xFFFFFFF0&(data))>>4)

#define  OD_DMA_ODDMA_WR_num_bl_wrap_addr_1                                     0x1802CE34
#define  OD_DMA_ODDMA_WR_num_bl_wrap_addr_1_reg_addr                             "0xB802CE34"
#define  OD_DMA_ODDMA_WR_num_bl_wrap_addr_1_reg                                  0xB802CE34
#define  OD_DMA_ODDMA_WR_num_bl_wrap_addr_1_inst_addr                            "0x0032"
#define  set_OD_DMA_ODDMA_WR_num_bl_wrap_addr_1_reg(data)                        (*((volatile unsigned int*)OD_DMA_ODDMA_WR_num_bl_wrap_addr_1_reg)=data)
#define  get_OD_DMA_ODDMA_WR_num_bl_wrap_addr_1_reg                              (*((volatile unsigned int*)OD_DMA_ODDMA_WR_num_bl_wrap_addr_1_reg))
#define  OD_DMA_ODDMA_WR_num_bl_wrap_addr_1_cap_sta_addr_1_shift                 (4)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_addr_1_cap_sta_addr_1_mask                  (0xFFFFFFF0)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_addr_1_cap_sta_addr_1(data)                 (0xFFFFFFF0&((data)<<4))
#define  OD_DMA_ODDMA_WR_num_bl_wrap_addr_1_get_cap_sta_addr_1(data)             ((0xFFFFFFF0&(data))>>4)

#define  OD_DMA_ODDMA_WR_num_bl_wrap_line_step                                  0x1802CE38
#define  OD_DMA_ODDMA_WR_num_bl_wrap_line_step_reg_addr                          "0xB802CE38"
#define  OD_DMA_ODDMA_WR_num_bl_wrap_line_step_reg                               0xB802CE38
#define  OD_DMA_ODDMA_WR_num_bl_wrap_line_step_inst_addr                         "0x0033"
#define  set_OD_DMA_ODDMA_WR_num_bl_wrap_line_step_reg(data)                     (*((volatile unsigned int*)OD_DMA_ODDMA_WR_num_bl_wrap_line_step_reg)=data)
#define  get_OD_DMA_ODDMA_WR_num_bl_wrap_line_step_reg                           (*((volatile unsigned int*)OD_DMA_ODDMA_WR_num_bl_wrap_line_step_reg))
#define  OD_DMA_ODDMA_WR_num_bl_wrap_line_step_cap_line_step_shift               (4)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_line_step_cap_line_step_mask                (0xFFFFFFF0)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_line_step_cap_line_step(data)               (0xFFFFFFF0&((data)<<4))
#define  OD_DMA_ODDMA_WR_num_bl_wrap_line_step_get_cap_line_step(data)           ((0xFFFFFFF0&(data))>>4)

#define  OD_DMA_ODDMA_WR_num_bl_wrap_ctl                                        0x1802CE3C
#define  OD_DMA_ODDMA_WR_num_bl_wrap_ctl_reg_addr                                "0xB802CE3C"
#define  OD_DMA_ODDMA_WR_num_bl_wrap_ctl_reg                                     0xB802CE3C
#define  OD_DMA_ODDMA_WR_num_bl_wrap_ctl_inst_addr                               "0x0034"
#define  set_OD_DMA_ODDMA_WR_num_bl_wrap_ctl_reg(data)                           (*((volatile unsigned int*)OD_DMA_ODDMA_WR_num_bl_wrap_ctl_reg)=data)
#define  get_OD_DMA_ODDMA_WR_num_bl_wrap_ctl_reg                                 (*((volatile unsigned int*)OD_DMA_ODDMA_WR_num_bl_wrap_ctl_reg))
#define  OD_DMA_ODDMA_WR_num_bl_wrap_ctl_cap_line_toggle_offset_shift            (29)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_ctl_cap_line_num_shift                      (16)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_ctl_cap_burst_len_shift                     (4)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_ctl_cap_line_toggle_offset_mask             (0xE0000000)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_ctl_cap_line_num_mask                       (0x0FFF0000)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_ctl_cap_burst_len_mask                      (0x000007F0)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_ctl_cap_line_toggle_offset(data)            (0xE0000000&((data)<<29))
#define  OD_DMA_ODDMA_WR_num_bl_wrap_ctl_cap_line_num(data)                      (0x0FFF0000&((data)<<16))
#define  OD_DMA_ODDMA_WR_num_bl_wrap_ctl_cap_burst_len(data)                     (0x000007F0&((data)<<4))
#define  OD_DMA_ODDMA_WR_num_bl_wrap_ctl_get_cap_line_toggle_offset(data)        ((0xE0000000&(data))>>29)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_ctl_get_cap_line_num(data)                  ((0x0FFF0000&(data))>>16)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_ctl_get_cap_burst_len(data)                 ((0x000007F0&(data))>>4)

#define  OD_DMA_ODDMA_WR_num_bl_wrap_rolling                                    0x1802CE40
#define  OD_DMA_ODDMA_WR_num_bl_wrap_rolling_reg_addr                            "0xB802CE40"
#define  OD_DMA_ODDMA_WR_num_bl_wrap_rolling_reg                                 0xB802CE40
#define  OD_DMA_ODDMA_WR_num_bl_wrap_rolling_inst_addr                           "0x0035"
#define  set_OD_DMA_ODDMA_WR_num_bl_wrap_rolling_reg(data)                       (*((volatile unsigned int*)OD_DMA_ODDMA_WR_num_bl_wrap_rolling_reg)=data)
#define  get_OD_DMA_ODDMA_WR_num_bl_wrap_rolling_reg                             (*((volatile unsigned int*)OD_DMA_ODDMA_WR_num_bl_wrap_rolling_reg))
#define  OD_DMA_ODDMA_WR_num_bl_wrap_rolling_cap_rolling_enable_shift            (31)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_rolling_cap_rolling_space_shift             (16)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_rolling_cap_rolling_enable_mask             (0x80000000)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_rolling_cap_rolling_space_mask              (0x0FFF0000)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_rolling_cap_rolling_enable(data)            (0x80000000&((data)<<31))
#define  OD_DMA_ODDMA_WR_num_bl_wrap_rolling_cap_rolling_space(data)             (0x0FFF0000&((data)<<16))
#define  OD_DMA_ODDMA_WR_num_bl_wrap_rolling_get_cap_rolling_enable(data)        ((0x80000000&(data))>>31)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_rolling_get_cap_rolling_space(data)         ((0x0FFF0000&(data))>>16)

#define  OD_DMA_ODDMA_WR_num_bl_wrap_word                                       0x1802CE44
#define  OD_DMA_ODDMA_WR_num_bl_wrap_word_reg_addr                               "0xB802CE44"
#define  OD_DMA_ODDMA_WR_num_bl_wrap_word_reg                                    0xB802CE44
#define  OD_DMA_ODDMA_WR_num_bl_wrap_word_inst_addr                              "0x0036"
#define  set_OD_DMA_ODDMA_WR_num_bl_wrap_word_reg(data)                          (*((volatile unsigned int*)OD_DMA_ODDMA_WR_num_bl_wrap_word_reg)=data)
#define  get_OD_DMA_ODDMA_WR_num_bl_wrap_word_reg                                (*((volatile unsigned int*)OD_DMA_ODDMA_WR_num_bl_wrap_word_reg))
#define  OD_DMA_ODDMA_WR_num_bl_wrap_word_cap_addr_toggle_mode_shift             (28)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_word_cap_line_128_num_shift                 (4)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_word_cap_addr_toggle_mode_mask              (0x10000000)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_word_cap_line_128_num_mask                  (0x07FFFFF0)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_word_cap_addr_toggle_mode(data)             (0x10000000&((data)<<28))
#define  OD_DMA_ODDMA_WR_num_bl_wrap_word_cap_line_128_num(data)                 (0x07FFFFF0&((data)<<4))
#define  OD_DMA_ODDMA_WR_num_bl_wrap_word_get_cap_addr_toggle_mode(data)         ((0x10000000&(data))>>28)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_word_get_cap_line_128_num(data)             ((0x07FFFFF0&(data))>>4)

#define  OD_DMA_ODDMA_WR_num_bl_wrap_st1                                        0x1802CE48
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st1_reg_addr                                "0xB802CE48"
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st1_reg                                     0xB802CE48
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st1_inst_addr                               "0x0037"
#define  set_OD_DMA_ODDMA_WR_num_bl_wrap_st1_reg(data)                           (*((volatile unsigned int*)OD_DMA_ODDMA_WR_num_bl_wrap_st1_reg)=data)
#define  get_OD_DMA_ODDMA_WR_num_bl_wrap_st1_reg                                 (*((volatile unsigned int*)OD_DMA_ODDMA_WR_num_bl_wrap_st1_reg))
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st1_cap_remain_setting_shift                (31)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st1_cap_remain_128_num_shift                (4)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st1_cap_finish_status_shift                 (0)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st1_cap_remain_setting_mask                 (0x80000000)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st1_cap_remain_128_num_mask                 (0x07FFFFF0)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st1_cap_finish_status_mask                  (0x00000003)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st1_cap_remain_setting(data)                (0x80000000&((data)<<31))
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st1_cap_remain_128_num(data)                (0x07FFFFF0&((data)<<4))
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st1_cap_finish_status(data)                 (0x00000003&(data))
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st1_get_cap_remain_setting(data)            ((0x80000000&(data))>>31)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st1_get_cap_remain_128_num(data)            ((0x07FFFFF0&(data))>>4)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st1_get_cap_finish_status(data)             (0x00000003&(data))

#define  OD_DMA_ODDMA_WR_num_bl_wrap_st2                                        0x1802CE4C
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st2_reg_addr                                "0xB802CE4C"
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st2_reg                                     0xB802CE4C
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st2_inst_addr                               "0x0038"
#define  set_OD_DMA_ODDMA_WR_num_bl_wrap_st2_reg(data)                           (*((volatile unsigned int*)OD_DMA_ODDMA_WR_num_bl_wrap_st2_reg)=data)
#define  get_OD_DMA_ODDMA_WR_num_bl_wrap_st2_reg                                 (*((volatile unsigned int*)OD_DMA_ODDMA_WR_num_bl_wrap_st2_reg))
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st2_cap_soft_rst_before_finish_shift        (31)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st2_cap_remain_line_num_shift               (16)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st2_cap_soft_rst_before_finish_mask         (0x80000000)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st2_cap_remain_line_num_mask                (0x0FFF0000)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st2_cap_soft_rst_before_finish(data)        (0x80000000&((data)<<31))
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st2_cap_remain_line_num(data)               (0x0FFF0000&((data)<<16))
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st2_get_cap_soft_rst_before_finish(data)    ((0x80000000&(data))>>31)
#define  OD_DMA_ODDMA_WR_num_bl_wrap_st2_get_cap_remain_line_num(data)           ((0x0FFF0000&(data))>>16)

#define  OD_DMA_ODDMA_RD_Rule_check_up                                          0x1802CE80
#define  OD_DMA_ODDMA_RD_Rule_check_up_reg_addr                                  "0xB802CE80"
#define  OD_DMA_ODDMA_RD_Rule_check_up_reg                                       0xB802CE80
#define  OD_DMA_ODDMA_RD_Rule_check_up_inst_addr                                 "0x0039"
#define  set_OD_DMA_ODDMA_RD_Rule_check_up_reg(data)                             (*((volatile unsigned int*)OD_DMA_ODDMA_RD_Rule_check_up_reg)=data)
#define  get_OD_DMA_ODDMA_RD_Rule_check_up_reg                                   (*((volatile unsigned int*)OD_DMA_ODDMA_RD_Rule_check_up_reg))
#define  OD_DMA_ODDMA_RD_Rule_check_up_disp_up_limit_shift                       (4)
#define  OD_DMA_ODDMA_RD_Rule_check_up_disp_up_limit_mask                        (0xFFFFFFF0)
#define  OD_DMA_ODDMA_RD_Rule_check_up_disp_up_limit(data)                       (0xFFFFFFF0&((data)<<4))
#define  OD_DMA_ODDMA_RD_Rule_check_up_get_disp_up_limit(data)                   ((0xFFFFFFF0&(data))>>4)

#define  OD_DMA_ODDMA_RD_Rule_check_low                                         0x1802CE84
#define  OD_DMA_ODDMA_RD_Rule_check_low_reg_addr                                 "0xB802CE84"
#define  OD_DMA_ODDMA_RD_Rule_check_low_reg                                      0xB802CE84
#define  OD_DMA_ODDMA_RD_Rule_check_low_inst_addr                                "0x003A"
#define  set_OD_DMA_ODDMA_RD_Rule_check_low_reg(data)                            (*((volatile unsigned int*)OD_DMA_ODDMA_RD_Rule_check_low_reg)=data)
#define  get_OD_DMA_ODDMA_RD_Rule_check_low_reg                                  (*((volatile unsigned int*)OD_DMA_ODDMA_RD_Rule_check_low_reg))
#define  OD_DMA_ODDMA_RD_Rule_check_low_disp_low_limit_shift                     (4)
#define  OD_DMA_ODDMA_RD_Rule_check_low_disp_low_limit_mask                      (0xFFFFFFF0)
#define  OD_DMA_ODDMA_RD_Rule_check_low_disp_low_limit(data)                     (0xFFFFFFF0&((data)<<4))
#define  OD_DMA_ODDMA_RD_Rule_check_low_get_disp_low_limit(data)                 ((0xFFFFFFF0&(data))>>4)

#define  OD_DMA_ODDMA_RD_Ctrl                                                   0x1802CE88
#define  OD_DMA_ODDMA_RD_Ctrl_reg_addr                                           "0xB802CE88"
#define  OD_DMA_ODDMA_RD_Ctrl_reg                                                0xB802CE88
#define  OD_DMA_ODDMA_RD_Ctrl_inst_addr                                          "0x003B"
#define  set_OD_DMA_ODDMA_RD_Ctrl_reg(data)                                      (*((volatile unsigned int*)OD_DMA_ODDMA_RD_Ctrl_reg)=data)
#define  get_OD_DMA_ODDMA_RD_Ctrl_reg                                            (*((volatile unsigned int*)OD_DMA_ODDMA_RD_Ctrl_reg))
#define  OD_DMA_ODDMA_RD_Ctrl_disp_max_outstanding_shift                         (8)
#define  OD_DMA_ODDMA_RD_Ctrl_disp_force_all_rst_shift                           (1)
#define  OD_DMA_ODDMA_RD_Ctrl_disp_en_shift                                      (0)
#define  OD_DMA_ODDMA_RD_Ctrl_disp_max_outstanding_mask                          (0x00000300)
#define  OD_DMA_ODDMA_RD_Ctrl_disp_force_all_rst_mask                            (0x00000002)
#define  OD_DMA_ODDMA_RD_Ctrl_disp_en_mask                                       (0x00000001)
#define  OD_DMA_ODDMA_RD_Ctrl_disp_max_outstanding(data)                         (0x00000300&((data)<<8))
#define  OD_DMA_ODDMA_RD_Ctrl_disp_force_all_rst(data)                           (0x00000002&((data)<<1))
#define  OD_DMA_ODDMA_RD_Ctrl_disp_en(data)                                      (0x00000001&(data))
#define  OD_DMA_ODDMA_RD_Ctrl_get_disp_max_outstanding(data)                     ((0x00000300&(data))>>8)
#define  OD_DMA_ODDMA_RD_Ctrl_get_disp_force_all_rst(data)                       ((0x00000002&(data))>>1)
#define  OD_DMA_ODDMA_RD_Ctrl_get_disp_en(data)                                  (0x00000001&(data))

#define  OD_DMA_ODDMA_RD_status                                                 0x1802CE8C
#define  OD_DMA_ODDMA_RD_status_reg_addr                                         "0xB802CE8C"
#define  OD_DMA_ODDMA_RD_status_reg                                              0xB802CE8C
#define  OD_DMA_ODDMA_RD_status_inst_addr                                        "0x003C"
#define  set_OD_DMA_ODDMA_RD_status_reg(data)                                    (*((volatile unsigned int*)OD_DMA_ODDMA_RD_status_reg)=data)
#define  get_OD_DMA_ODDMA_RD_status_reg                                          (*((volatile unsigned int*)OD_DMA_ODDMA_RD_status_reg))
#define  OD_DMA_ODDMA_RD_status_disp_cmd_water_shift                             (28)
#define  OD_DMA_ODDMA_RD_status_disp_data_water_shift                            (16)
#define  OD_DMA_ODDMA_RD_status_disp_cur_outstanding_shift                       (8)
#define  OD_DMA_ODDMA_RD_status_disp_soft_rst_before_cmd_finish_shift            (4)
#define  OD_DMA_ODDMA_RD_status_disp_soft_rst_with_data_left_shift               (3)
#define  OD_DMA_ODDMA_RD_status_disp_data_fifo_overflow_err_shift                (2)
#define  OD_DMA_ODDMA_RD_status_disp_exceed_range_err_shift                      (1)
#define  OD_DMA_ODDMA_RD_status_disp_zero_length_err_shift                       (0)
#define  OD_DMA_ODDMA_RD_status_disp_cmd_water_mask                              (0x70000000)
#define  OD_DMA_ODDMA_RD_status_disp_data_water_mask                             (0x01FF0000)
#define  OD_DMA_ODDMA_RD_status_disp_cur_outstanding_mask                        (0x00000700)
#define  OD_DMA_ODDMA_RD_status_disp_soft_rst_before_cmd_finish_mask             (0x00000010)
#define  OD_DMA_ODDMA_RD_status_disp_soft_rst_with_data_left_mask                (0x00000008)
#define  OD_DMA_ODDMA_RD_status_disp_data_fifo_overflow_err_mask                 (0x00000004)
#define  OD_DMA_ODDMA_RD_status_disp_exceed_range_err_mask                       (0x00000002)
#define  OD_DMA_ODDMA_RD_status_disp_zero_length_err_mask                        (0x00000001)
#define  OD_DMA_ODDMA_RD_status_disp_cmd_water(data)                             (0x70000000&((data)<<28))
#define  OD_DMA_ODDMA_RD_status_disp_data_water(data)                            (0x01FF0000&((data)<<16))
#define  OD_DMA_ODDMA_RD_status_disp_cur_outstanding(data)                       (0x00000700&((data)<<8))
#define  OD_DMA_ODDMA_RD_status_disp_soft_rst_before_cmd_finish(data)            (0x00000010&((data)<<4))
#define  OD_DMA_ODDMA_RD_status_disp_soft_rst_with_data_left(data)               (0x00000008&((data)<<3))
#define  OD_DMA_ODDMA_RD_status_disp_data_fifo_overflow_err(data)                (0x00000004&((data)<<2))
#define  OD_DMA_ODDMA_RD_status_disp_exceed_range_err(data)                      (0x00000002&((data)<<1))
#define  OD_DMA_ODDMA_RD_status_disp_zero_length_err(data)                       (0x00000001&(data))
#define  OD_DMA_ODDMA_RD_status_get_disp_cmd_water(data)                         ((0x70000000&(data))>>28)
#define  OD_DMA_ODDMA_RD_status_get_disp_data_water(data)                        ((0x01FF0000&(data))>>16)
#define  OD_DMA_ODDMA_RD_status_get_disp_cur_outstanding(data)                   ((0x00000700&(data))>>8)
#define  OD_DMA_ODDMA_RD_status_get_disp_soft_rst_before_cmd_finish(data)        ((0x00000010&(data))>>4)
#define  OD_DMA_ODDMA_RD_status_get_disp_soft_rst_with_data_left(data)           ((0x00000008&(data))>>3)
#define  OD_DMA_ODDMA_RD_status_get_disp_data_fifo_overflow_err(data)            ((0x00000004&(data))>>2)
#define  OD_DMA_ODDMA_RD_status_get_disp_exceed_range_err(data)                  ((0x00000002&(data))>>1)
#define  OD_DMA_ODDMA_RD_status_get_disp_zero_length_err(data)                   (0x00000001&(data))

#define  OD_DMA_ODDMA_RD_status1                                                0x1802CE90
#define  OD_DMA_ODDMA_RD_status1_reg_addr                                        "0xB802CE90"
#define  OD_DMA_ODDMA_RD_status1_reg                                             0xB802CE90
#define  OD_DMA_ODDMA_RD_status1_inst_addr                                       "0x003D"
#define  set_OD_DMA_ODDMA_RD_status1_reg(data)                                   (*((volatile unsigned int*)OD_DMA_ODDMA_RD_status1_reg)=data)
#define  get_OD_DMA_ODDMA_RD_status1_reg                                         (*((volatile unsigned int*)OD_DMA_ODDMA_RD_status1_reg))
#define  OD_DMA_ODDMA_RD_status1_disp_ack_num_error_shift                        (31)
#define  OD_DMA_ODDMA_RD_status1_disp_last_no_ack_error_shift                    (30)
#define  OD_DMA_ODDMA_RD_status1_disp_target_ack_num_shift                       (16)
#define  OD_DMA_ODDMA_RD_status1_disp_last_ack_num_shift                         (8)
#define  OD_DMA_ODDMA_RD_status1_disp_selected_bl_shift                          (0)
#define  OD_DMA_ODDMA_RD_status1_disp_ack_num_error_mask                         (0x80000000)
#define  OD_DMA_ODDMA_RD_status1_disp_last_no_ack_error_mask                     (0x40000000)
#define  OD_DMA_ODDMA_RD_status1_disp_target_ack_num_mask                        (0x007F0000)
#define  OD_DMA_ODDMA_RD_status1_disp_last_ack_num_mask                          (0x00007F00)
#define  OD_DMA_ODDMA_RD_status1_disp_selected_bl_mask                           (0x0000007F)
#define  OD_DMA_ODDMA_RD_status1_disp_ack_num_error(data)                        (0x80000000&((data)<<31))
#define  OD_DMA_ODDMA_RD_status1_disp_last_no_ack_error(data)                    (0x40000000&((data)<<30))
#define  OD_DMA_ODDMA_RD_status1_disp_target_ack_num(data)                       (0x007F0000&((data)<<16))
#define  OD_DMA_ODDMA_RD_status1_disp_last_ack_num(data)                         (0x00007F00&((data)<<8))
#define  OD_DMA_ODDMA_RD_status1_disp_selected_bl(data)                          (0x0000007F&(data))
#define  OD_DMA_ODDMA_RD_status1_get_disp_ack_num_error(data)                    ((0x80000000&(data))>>31)
#define  OD_DMA_ODDMA_RD_status1_get_disp_last_no_ack_error(data)                ((0x40000000&(data))>>30)
#define  OD_DMA_ODDMA_RD_status1_get_disp_target_ack_num(data)                   ((0x007F0000&(data))>>16)
#define  OD_DMA_ODDMA_RD_status1_get_disp_last_ack_num(data)                     ((0x00007F00&(data))>>8)
#define  OD_DMA_ODDMA_RD_status1_get_disp_selected_bl(data)                      (0x0000007F&(data))

#define  OD_DMA_ODDMA_RD_status2                                                0x1802CE94
#define  OD_DMA_ODDMA_RD_status2_reg_addr                                        "0xB802CE94"
#define  OD_DMA_ODDMA_RD_status2_reg                                             0xB802CE94
#define  OD_DMA_ODDMA_RD_status2_inst_addr                                       "0x003E"
#define  set_OD_DMA_ODDMA_RD_status2_reg(data)                                   (*((volatile unsigned int*)OD_DMA_ODDMA_RD_status2_reg)=data)
#define  get_OD_DMA_ODDMA_RD_status2_reg                                         (*((volatile unsigned int*)OD_DMA_ODDMA_RD_status2_reg))
#define  OD_DMA_ODDMA_RD_status2_disp_selected_addr_shift                        (4)
#define  OD_DMA_ODDMA_RD_status2_disp_addr_bl_sel_shift                          (0)
#define  OD_DMA_ODDMA_RD_status2_disp_selected_addr_mask                         (0xFFFFFFF0)
#define  OD_DMA_ODDMA_RD_status2_disp_addr_bl_sel_mask                           (0x00000003)
#define  OD_DMA_ODDMA_RD_status2_disp_selected_addr(data)                        (0xFFFFFFF0&((data)<<4))
#define  OD_DMA_ODDMA_RD_status2_disp_addr_bl_sel(data)                          (0x00000003&(data))
#define  OD_DMA_ODDMA_RD_status2_get_disp_selected_addr(data)                    ((0xFFFFFFF0&(data))>>4)
#define  OD_DMA_ODDMA_RD_status2_get_disp_addr_bl_sel(data)                      (0x00000003&(data))

#define  OD_DMA_ODDMA_RD_Water_Monitor                                          0x1802CE98
#define  OD_DMA_ODDMA_RD_Water_Monitor_reg_addr                                  "0xB802CE98"
#define  OD_DMA_ODDMA_RD_Water_Monitor_reg                                       0xB802CE98
#define  OD_DMA_ODDMA_RD_Water_Monitor_inst_addr                                 "0x003F"
#define  set_OD_DMA_ODDMA_RD_Water_Monitor_reg(data)                             (*((volatile unsigned int*)OD_DMA_ODDMA_RD_Water_Monitor_reg)=data)
#define  get_OD_DMA_ODDMA_RD_Water_Monitor_reg                                   (*((volatile unsigned int*)OD_DMA_ODDMA_RD_Water_Monitor_reg))
#define  OD_DMA_ODDMA_RD_Water_Monitor_disp_monitor_en_shift                     (31)
#define  OD_DMA_ODDMA_RD_Water_Monitor_disp_monitor_conti_shift                  (30)
#define  OD_DMA_ODDMA_RD_Water_Monitor_disp_reach_thd_shift                      (25)
#define  OD_DMA_ODDMA_RD_Water_Monitor_disp_monitor_thd_shift                    (16)
#define  OD_DMA_ODDMA_RD_Water_Monitor_disp_lowest_water_level_shift             (0)
#define  OD_DMA_ODDMA_RD_Water_Monitor_disp_monitor_en_mask                      (0x80000000)
#define  OD_DMA_ODDMA_RD_Water_Monitor_disp_monitor_conti_mask                   (0x40000000)
#define  OD_DMA_ODDMA_RD_Water_Monitor_disp_reach_thd_mask                       (0x02000000)
#define  OD_DMA_ODDMA_RD_Water_Monitor_disp_monitor_thd_mask                     (0x01FF0000)
#define  OD_DMA_ODDMA_RD_Water_Monitor_disp_lowest_water_level_mask              (0x000001FF)
#define  OD_DMA_ODDMA_RD_Water_Monitor_disp_monitor_en(data)                     (0x80000000&((data)<<31))
#define  OD_DMA_ODDMA_RD_Water_Monitor_disp_monitor_conti(data)                  (0x40000000&((data)<<30))
#define  OD_DMA_ODDMA_RD_Water_Monitor_disp_reach_thd(data)                      (0x02000000&((data)<<25))
#define  OD_DMA_ODDMA_RD_Water_Monitor_disp_monitor_thd(data)                    (0x01FF0000&((data)<<16))
#define  OD_DMA_ODDMA_RD_Water_Monitor_disp_lowest_water_level(data)             (0x000001FF&(data))
#define  OD_DMA_ODDMA_RD_Water_Monitor_get_disp_monitor_en(data)                 ((0x80000000&(data))>>31)
#define  OD_DMA_ODDMA_RD_Water_Monitor_get_disp_monitor_conti(data)              ((0x40000000&(data))>>30)
#define  OD_DMA_ODDMA_RD_Water_Monitor_get_disp_reach_thd(data)                  ((0x02000000&(data))>>25)
#define  OD_DMA_ODDMA_RD_Water_Monitor_get_disp_monitor_thd(data)                ((0x01FF0000&(data))>>16)
#define  OD_DMA_ODDMA_RD_Water_Monitor_get_disp_lowest_water_level(data)         (0x000001FF&(data))

#define  OD_DMA_ODDMA_RD_num_bl_wrap_addr_0                                     0x1802CEB0
#define  OD_DMA_ODDMA_RD_num_bl_wrap_addr_0_reg_addr                             "0xB802CEB0"
#define  OD_DMA_ODDMA_RD_num_bl_wrap_addr_0_reg                                  0xB802CEB0
#define  OD_DMA_ODDMA_RD_num_bl_wrap_addr_0_inst_addr                            "0x0040"
#define  set_OD_DMA_ODDMA_RD_num_bl_wrap_addr_0_reg(data)                        (*((volatile unsigned int*)OD_DMA_ODDMA_RD_num_bl_wrap_addr_0_reg)=data)
#define  get_OD_DMA_ODDMA_RD_num_bl_wrap_addr_0_reg                              (*((volatile unsigned int*)OD_DMA_ODDMA_RD_num_bl_wrap_addr_0_reg))
#define  OD_DMA_ODDMA_RD_num_bl_wrap_addr_0_disp_sta_addr_0_shift                (4)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_addr_0_disp_sta_addr_0_mask                 (0xFFFFFFF0)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_addr_0_disp_sta_addr_0(data)                (0xFFFFFFF0&((data)<<4))
#define  OD_DMA_ODDMA_RD_num_bl_wrap_addr_0_get_disp_sta_addr_0(data)            ((0xFFFFFFF0&(data))>>4)

#define  OD_DMA_ODDMA_RD_num_bl_wrap_addr_1                                     0x1802CEB4
#define  OD_DMA_ODDMA_RD_num_bl_wrap_addr_1_reg_addr                             "0xB802CEB4"
#define  OD_DMA_ODDMA_RD_num_bl_wrap_addr_1_reg                                  0xB802CEB4
#define  OD_DMA_ODDMA_RD_num_bl_wrap_addr_1_inst_addr                            "0x0041"
#define  set_OD_DMA_ODDMA_RD_num_bl_wrap_addr_1_reg(data)                        (*((volatile unsigned int*)OD_DMA_ODDMA_RD_num_bl_wrap_addr_1_reg)=data)
#define  get_OD_DMA_ODDMA_RD_num_bl_wrap_addr_1_reg                              (*((volatile unsigned int*)OD_DMA_ODDMA_RD_num_bl_wrap_addr_1_reg))
#define  OD_DMA_ODDMA_RD_num_bl_wrap_addr_1_disp_sta_addr_1_shift                (4)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_addr_1_disp_sta_addr_1_mask                 (0xFFFFFFF0)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_addr_1_disp_sta_addr_1(data)                (0xFFFFFFF0&((data)<<4))
#define  OD_DMA_ODDMA_RD_num_bl_wrap_addr_1_get_disp_sta_addr_1(data)            ((0xFFFFFFF0&(data))>>4)

#define  OD_DMA_ODDMA_RD_num_bl_wrap_line_step                                  0x1802CEB8
#define  OD_DMA_ODDMA_RD_num_bl_wrap_line_step_reg_addr                          "0xB802CEB8"
#define  OD_DMA_ODDMA_RD_num_bl_wrap_line_step_reg                               0xB802CEB8
#define  OD_DMA_ODDMA_RD_num_bl_wrap_line_step_inst_addr                         "0x0042"
#define  set_OD_DMA_ODDMA_RD_num_bl_wrap_line_step_reg(data)                     (*((volatile unsigned int*)OD_DMA_ODDMA_RD_num_bl_wrap_line_step_reg)=data)
#define  get_OD_DMA_ODDMA_RD_num_bl_wrap_line_step_reg                           (*((volatile unsigned int*)OD_DMA_ODDMA_RD_num_bl_wrap_line_step_reg))
#define  OD_DMA_ODDMA_RD_num_bl_wrap_line_step_disp_line_step_shift              (4)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_line_step_disp_line_step_mask               (0xFFFFFFF0)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_line_step_disp_line_step(data)              (0xFFFFFFF0&((data)<<4))
#define  OD_DMA_ODDMA_RD_num_bl_wrap_line_step_get_disp_line_step(data)          ((0xFFFFFFF0&(data))>>4)

#define  OD_DMA_ODDMA_RD_num_bl_wrap_ctl                                        0x1802CEBC
#define  OD_DMA_ODDMA_RD_num_bl_wrap_ctl_reg_addr                                "0xB802CEBC"
#define  OD_DMA_ODDMA_RD_num_bl_wrap_ctl_reg                                     0xB802CEBC
#define  OD_DMA_ODDMA_RD_num_bl_wrap_ctl_inst_addr                               "0x0043"
#define  set_OD_DMA_ODDMA_RD_num_bl_wrap_ctl_reg(data)                           (*((volatile unsigned int*)OD_DMA_ODDMA_RD_num_bl_wrap_ctl_reg)=data)
#define  get_OD_DMA_ODDMA_RD_num_bl_wrap_ctl_reg                                 (*((volatile unsigned int*)OD_DMA_ODDMA_RD_num_bl_wrap_ctl_reg))
#define  OD_DMA_ODDMA_RD_num_bl_wrap_ctl_disp_line_toggle_offset_shift           (29)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_ctl_disp_line_num_shift                     (16)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_ctl_disp_burst_len_shift                    (4)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_ctl_disp_line_toggle_offset_mask            (0xE0000000)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_ctl_disp_line_num_mask                      (0x0FFF0000)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_ctl_disp_burst_len_mask                     (0x000007F0)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_ctl_disp_line_toggle_offset(data)           (0xE0000000&((data)<<29))
#define  OD_DMA_ODDMA_RD_num_bl_wrap_ctl_disp_line_num(data)                     (0x0FFF0000&((data)<<16))
#define  OD_DMA_ODDMA_RD_num_bl_wrap_ctl_disp_burst_len(data)                    (0x000007F0&((data)<<4))
#define  OD_DMA_ODDMA_RD_num_bl_wrap_ctl_get_disp_line_toggle_offset(data)       ((0xE0000000&(data))>>29)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_ctl_get_disp_line_num(data)                 ((0x0FFF0000&(data))>>16)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_ctl_get_disp_burst_len(data)                ((0x000007F0&(data))>>4)

#define  OD_DMA_ODDMA_RD_num_bl_wrap_rolling                                    0x1802CEC0
#define  OD_DMA_ODDMA_RD_num_bl_wrap_rolling_reg_addr                            "0xB802CEC0"
#define  OD_DMA_ODDMA_RD_num_bl_wrap_rolling_reg                                 0xB802CEC0
#define  OD_DMA_ODDMA_RD_num_bl_wrap_rolling_inst_addr                           "0x0044"
#define  set_OD_DMA_ODDMA_RD_num_bl_wrap_rolling_reg(data)                       (*((volatile unsigned int*)OD_DMA_ODDMA_RD_num_bl_wrap_rolling_reg)=data)
#define  get_OD_DMA_ODDMA_RD_num_bl_wrap_rolling_reg                             (*((volatile unsigned int*)OD_DMA_ODDMA_RD_num_bl_wrap_rolling_reg))
#define  OD_DMA_ODDMA_RD_num_bl_wrap_rolling_disp_rolling_enable_shift           (31)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_rolling_disp_rolling_space_shift            (16)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_rolling_disp_rolling_enable_mask            (0x80000000)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_rolling_disp_rolling_space_mask             (0x0FFF0000)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_rolling_disp_rolling_enable(data)           (0x80000000&((data)<<31))
#define  OD_DMA_ODDMA_RD_num_bl_wrap_rolling_disp_rolling_space(data)            (0x0FFF0000&((data)<<16))
#define  OD_DMA_ODDMA_RD_num_bl_wrap_rolling_get_disp_rolling_enable(data)       ((0x80000000&(data))>>31)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_rolling_get_disp_rolling_space(data)        ((0x0FFF0000&(data))>>16)

#define  OD_DMA_ODDMA_RD_num_bl_wrap_word                                       0x1802CEC4
#define  OD_DMA_ODDMA_RD_num_bl_wrap_word_reg_addr                               "0xB802CEC4"
#define  OD_DMA_ODDMA_RD_num_bl_wrap_word_reg                                    0xB802CEC4
#define  OD_DMA_ODDMA_RD_num_bl_wrap_word_inst_addr                              "0x0045"
#define  set_OD_DMA_ODDMA_RD_num_bl_wrap_word_reg(data)                          (*((volatile unsigned int*)OD_DMA_ODDMA_RD_num_bl_wrap_word_reg)=data)
#define  get_OD_DMA_ODDMA_RD_num_bl_wrap_word_reg                                (*((volatile unsigned int*)OD_DMA_ODDMA_RD_num_bl_wrap_word_reg))
#define  OD_DMA_ODDMA_RD_num_bl_wrap_word_disp_addr_toggle_mode_shift            (28)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_word_disp_line_128_num_shift                (4)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_word_disp_addr_toggle_mode_mask             (0x10000000)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_word_disp_line_128_num_mask                 (0x07FFFFF0)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_word_disp_addr_toggle_mode(data)            (0x10000000&((data)<<28))
#define  OD_DMA_ODDMA_RD_num_bl_wrap_word_disp_line_128_num(data)                (0x07FFFFF0&((data)<<4))
#define  OD_DMA_ODDMA_RD_num_bl_wrap_word_get_disp_addr_toggle_mode(data)        ((0x10000000&(data))>>28)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_word_get_disp_line_128_num(data)            ((0x07FFFFF0&(data))>>4)

#define  OD_DMA_ODDMA_RD_num_bl_wrap_st1                                        0x1802CEC8
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st1_reg_addr                                "0xB802CEC8"
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st1_reg                                     0xB802CEC8
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st1_inst_addr                               "0x0046"
#define  set_OD_DMA_ODDMA_RD_num_bl_wrap_st1_reg(data)                           (*((volatile unsigned int*)OD_DMA_ODDMA_RD_num_bl_wrap_st1_reg)=data)
#define  get_OD_DMA_ODDMA_RD_num_bl_wrap_st1_reg                                 (*((volatile unsigned int*)OD_DMA_ODDMA_RD_num_bl_wrap_st1_reg))
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st1_disp_remain_setting_shift               (31)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st1_disp_remain_128_num_shift               (4)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st1_disp_finish_status_shift                (0)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st1_disp_remain_setting_mask                (0x80000000)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st1_disp_remain_128_num_mask                (0x07FFFFF0)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st1_disp_finish_status_mask                 (0x00000003)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st1_disp_remain_setting(data)               (0x80000000&((data)<<31))
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st1_disp_remain_128_num(data)               (0x07FFFFF0&((data)<<4))
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st1_disp_finish_status(data)                (0x00000003&(data))
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st1_get_disp_remain_setting(data)           ((0x80000000&(data))>>31)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st1_get_disp_remain_128_num(data)           ((0x07FFFFF0&(data))>>4)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st1_get_disp_finish_status(data)            (0x00000003&(data))

#define  OD_DMA_ODDMA_RD_num_bl_wrap_st2                                        0x1802CECC
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st2_reg_addr                                "0xB802CECC"
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st2_reg                                     0xB802CECC
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st2_inst_addr                               "0x0047"
#define  set_OD_DMA_ODDMA_RD_num_bl_wrap_st2_reg(data)                           (*((volatile unsigned int*)OD_DMA_ODDMA_RD_num_bl_wrap_st2_reg)=data)
#define  get_OD_DMA_ODDMA_RD_num_bl_wrap_st2_reg                                 (*((volatile unsigned int*)OD_DMA_ODDMA_RD_num_bl_wrap_st2_reg))
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st2_disp_soft_rst_before_finish_shift       (31)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st2_disp_remain_line_num_shift              (16)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st2_disp_soft_rst_before_finish_mask        (0x80000000)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st2_disp_remain_line_num_mask               (0x0FFF0000)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st2_disp_soft_rst_before_finish(data)       (0x80000000&((data)<<31))
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st2_disp_remain_line_num(data)              (0x0FFF0000&((data)<<16))
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st2_get_disp_soft_rst_before_finish(data)   ((0x80000000&(data))>>31)
#define  OD_DMA_ODDMA_RD_num_bl_wrap_st2_get_disp_remain_line_num(data)          ((0x0FFF0000&(data))>>16)

#define  OD_DMA_ODDMA_CAP_RM                                                    0x1802CF20
#define  OD_DMA_ODDMA_CAP_RM_reg_addr                                            "0xB802CF20"
#define  OD_DMA_ODDMA_CAP_RM_reg                                                 0xB802CF20
#define  OD_DMA_ODDMA_CAP_RM_inst_addr                                           "0x0048"
#define  set_OD_DMA_ODDMA_CAP_RM_reg(data)                                       (*((volatile unsigned int*)OD_DMA_ODDMA_CAP_RM_reg)=data)
#define  get_OD_DMA_ODDMA_CAP_RM_reg                                             (*((volatile unsigned int*)OD_DMA_ODDMA_CAP_RM_reg))
#define  OD_DMA_ODDMA_CAP_RM_pqc2_rm_1_shift                                     (24)
#define  OD_DMA_ODDMA_CAP_RM_pqc2_rm_0_shift                                     (20)
#define  OD_DMA_ODDMA_CAP_RM_pqc1_rm_0_shift                                     (16)
#define  OD_DMA_ODDMA_CAP_RM_cap_rm_shift                                        (0)
#define  OD_DMA_ODDMA_CAP_RM_pqc2_rm_1_mask                                      (0x0F000000)
#define  OD_DMA_ODDMA_CAP_RM_pqc2_rm_0_mask                                      (0x00F00000)
#define  OD_DMA_ODDMA_CAP_RM_pqc1_rm_0_mask                                      (0x000F0000)
#define  OD_DMA_ODDMA_CAP_RM_cap_rm_mask                                         (0x0000000F)
#define  OD_DMA_ODDMA_CAP_RM_pqc2_rm_1(data)                                     (0x0F000000&((data)<<24))
#define  OD_DMA_ODDMA_CAP_RM_pqc2_rm_0(data)                                     (0x00F00000&((data)<<20))
#define  OD_DMA_ODDMA_CAP_RM_pqc1_rm_0(data)                                     (0x000F0000&((data)<<16))
#define  OD_DMA_ODDMA_CAP_RM_cap_rm(data)                                        (0x0000000F&(data))
#define  OD_DMA_ODDMA_CAP_RM_get_pqc2_rm_1(data)                                 ((0x0F000000&(data))>>24)
#define  OD_DMA_ODDMA_CAP_RM_get_pqc2_rm_0(data)                                 ((0x00F00000&(data))>>20)
#define  OD_DMA_ODDMA_CAP_RM_get_pqc1_rm_0(data)                                 ((0x000F0000&(data))>>16)
#define  OD_DMA_ODDMA_CAP_RM_get_cap_rm(data)                                    (0x0000000F&(data))

#define  OD_DMA_ODDMA_CAP_RME                                                   0x1802CF24
#define  OD_DMA_ODDMA_CAP_RME_reg_addr                                           "0xB802CF24"
#define  OD_DMA_ODDMA_CAP_RME_reg                                                0xB802CF24
#define  OD_DMA_ODDMA_CAP_RME_inst_addr                                          "0x0049"
#define  set_OD_DMA_ODDMA_CAP_RME_reg(data)                                      (*((volatile unsigned int*)OD_DMA_ODDMA_CAP_RME_reg)=data)
#define  get_OD_DMA_ODDMA_CAP_RME_reg                                            (*((volatile unsigned int*)OD_DMA_ODDMA_CAP_RME_reg))
#define  OD_DMA_ODDMA_CAP_RME_pqc_test_rwm_shift                                 (31)
#define  OD_DMA_ODDMA_CAP_RME_pqc2_test1_1_shift                                 (21)
#define  OD_DMA_ODDMA_CAP_RME_pqc2_test1_0_shift                                 (20)
#define  OD_DMA_ODDMA_CAP_RME_pqc1_test1_0_shift                                 (19)
#define  OD_DMA_ODDMA_CAP_RME_pqc2_rme_1_shift                                   (18)
#define  OD_DMA_ODDMA_CAP_RME_pqc2_rme_0_shift                                   (17)
#define  OD_DMA_ODDMA_CAP_RME_pqc1_rme_0_shift                                   (16)
#define  OD_DMA_ODDMA_CAP_RME_cap_test1_shift                                    (1)
#define  OD_DMA_ODDMA_CAP_RME_cap_rme_shift                                      (0)
#define  OD_DMA_ODDMA_CAP_RME_pqc_test_rwm_mask                                  (0x80000000)
#define  OD_DMA_ODDMA_CAP_RME_pqc2_test1_1_mask                                  (0x00200000)
#define  OD_DMA_ODDMA_CAP_RME_pqc2_test1_0_mask                                  (0x00100000)
#define  OD_DMA_ODDMA_CAP_RME_pqc1_test1_0_mask                                  (0x00080000)
#define  OD_DMA_ODDMA_CAP_RME_pqc2_rme_1_mask                                    (0x00040000)
#define  OD_DMA_ODDMA_CAP_RME_pqc2_rme_0_mask                                    (0x00020000)
#define  OD_DMA_ODDMA_CAP_RME_pqc1_rme_0_mask                                    (0x00010000)
#define  OD_DMA_ODDMA_CAP_RME_cap_test1_mask                                     (0x00000002)
#define  OD_DMA_ODDMA_CAP_RME_cap_rme_mask                                       (0x00000001)
#define  OD_DMA_ODDMA_CAP_RME_pqc_test_rwm(data)                                 (0x80000000&((data)<<31))
#define  OD_DMA_ODDMA_CAP_RME_pqc2_test1_1(data)                                 (0x00200000&((data)<<21))
#define  OD_DMA_ODDMA_CAP_RME_pqc2_test1_0(data)                                 (0x00100000&((data)<<20))
#define  OD_DMA_ODDMA_CAP_RME_pqc1_test1_0(data)                                 (0x00080000&((data)<<19))
#define  OD_DMA_ODDMA_CAP_RME_pqc2_rme_1(data)                                   (0x00040000&((data)<<18))
#define  OD_DMA_ODDMA_CAP_RME_pqc2_rme_0(data)                                   (0x00020000&((data)<<17))
#define  OD_DMA_ODDMA_CAP_RME_pqc1_rme_0(data)                                   (0x00010000&((data)<<16))
#define  OD_DMA_ODDMA_CAP_RME_cap_test1(data)                                    (0x00000002&((data)<<1))
#define  OD_DMA_ODDMA_CAP_RME_cap_rme(data)                                      (0x00000001&(data))
#define  OD_DMA_ODDMA_CAP_RME_get_pqc_test_rwm(data)                             ((0x80000000&(data))>>31)
#define  OD_DMA_ODDMA_CAP_RME_get_pqc2_test1_1(data)                             ((0x00200000&(data))>>21)
#define  OD_DMA_ODDMA_CAP_RME_get_pqc2_test1_0(data)                             ((0x00100000&(data))>>20)
#define  OD_DMA_ODDMA_CAP_RME_get_pqc1_test1_0(data)                             ((0x00080000&(data))>>19)
#define  OD_DMA_ODDMA_CAP_RME_get_pqc2_rme_1(data)                               ((0x00040000&(data))>>18)
#define  OD_DMA_ODDMA_CAP_RME_get_pqc2_rme_0(data)                               ((0x00020000&(data))>>17)
#define  OD_DMA_ODDMA_CAP_RME_get_pqc1_rme_0(data)                               ((0x00010000&(data))>>16)
#define  OD_DMA_ODDMA_CAP_RME_get_cap_test1(data)                                ((0x00000002&(data))>>1)
#define  OD_DMA_ODDMA_CAP_RME_get_cap_rme(data)                                  (0x00000001&(data))

#define  OD_DMA_ODDMA_CAP_LS                                                    0x1802CF28
#define  OD_DMA_ODDMA_CAP_LS_reg_addr                                            "0xB802CF28"
#define  OD_DMA_ODDMA_CAP_LS_reg                                                 0xB802CF28
#define  OD_DMA_ODDMA_CAP_LS_inst_addr                                           "0x004A"
#define  set_OD_DMA_ODDMA_CAP_LS_reg(data)                                       (*((volatile unsigned int*)OD_DMA_ODDMA_CAP_LS_reg)=data)
#define  get_OD_DMA_ODDMA_CAP_LS_reg                                             (*((volatile unsigned int*)OD_DMA_ODDMA_CAP_LS_reg))
#define  OD_DMA_ODDMA_CAP_LS_pqc2_ls_1_shift                                     (18)
#define  OD_DMA_ODDMA_CAP_LS_pqc2_ls_0_shift                                     (17)
#define  OD_DMA_ODDMA_CAP_LS_pqc1_ls_0_shift                                     (16)
#define  OD_DMA_ODDMA_CAP_LS_cap_ls_shift                                        (0)
#define  OD_DMA_ODDMA_CAP_LS_pqc2_ls_1_mask                                      (0x00040000)
#define  OD_DMA_ODDMA_CAP_LS_pqc2_ls_0_mask                                      (0x00020000)
#define  OD_DMA_ODDMA_CAP_LS_pqc1_ls_0_mask                                      (0x00010000)
#define  OD_DMA_ODDMA_CAP_LS_cap_ls_mask                                         (0x00000001)
#define  OD_DMA_ODDMA_CAP_LS_pqc2_ls_1(data)                                     (0x00040000&((data)<<18))
#define  OD_DMA_ODDMA_CAP_LS_pqc2_ls_0(data)                                     (0x00020000&((data)<<17))
#define  OD_DMA_ODDMA_CAP_LS_pqc1_ls_0(data)                                     (0x00010000&((data)<<16))
#define  OD_DMA_ODDMA_CAP_LS_cap_ls(data)                                        (0x00000001&(data))
#define  OD_DMA_ODDMA_CAP_LS_get_pqc2_ls_1(data)                                 ((0x00040000&(data))>>18)
#define  OD_DMA_ODDMA_CAP_LS_get_pqc2_ls_0(data)                                 ((0x00020000&(data))>>17)
#define  OD_DMA_ODDMA_CAP_LS_get_pqc1_ls_0(data)                                 ((0x00010000&(data))>>16)
#define  OD_DMA_ODDMA_CAP_LS_get_cap_ls(data)                                    (0x00000001&(data))

#define  OD_DMA_ODDMA_CAP_FAIL                                                  0x1802CF2C
#define  OD_DMA_ODDMA_CAP_FAIL_reg_addr                                          "0xB802CF2C"
#define  OD_DMA_ODDMA_CAP_FAIL_reg                                               0xB802CF2C
#define  OD_DMA_ODDMA_CAP_FAIL_inst_addr                                         "0x004B"
#define  set_OD_DMA_ODDMA_CAP_FAIL_reg(data)                                     (*((volatile unsigned int*)OD_DMA_ODDMA_CAP_FAIL_reg)=data)
#define  get_OD_DMA_ODDMA_CAP_FAIL_reg                                           (*((volatile unsigned int*)OD_DMA_ODDMA_CAP_FAIL_reg))
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_12_shift                           (29)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_11_shift                           (28)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_10_shift                           (27)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_9_shift                            (26)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_8_shift                            (25)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_7_shift                            (24)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_6_shift                            (23)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_5_shift                            (22)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_4_shift                            (21)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_3_shift                            (20)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_2_shift                            (19)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_1_shift                            (18)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_0_shift                            (17)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc1_bist_fail_0_shift                            (16)
#define  OD_DMA_ODDMA_CAP_FAIL_cap_bist_fail_shift                               (0)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_12_mask                            (0x20000000)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_11_mask                            (0x10000000)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_10_mask                            (0x08000000)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_9_mask                             (0x04000000)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_8_mask                             (0x02000000)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_7_mask                             (0x01000000)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_6_mask                             (0x00800000)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_5_mask                             (0x00400000)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_4_mask                             (0x00200000)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_3_mask                             (0x00100000)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_2_mask                             (0x00080000)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_1_mask                             (0x00040000)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_0_mask                             (0x00020000)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc1_bist_fail_0_mask                             (0x00010000)
#define  OD_DMA_ODDMA_CAP_FAIL_cap_bist_fail_mask                                (0x00000001)
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_12(data)                           (0x20000000&((data)<<29))
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_11(data)                           (0x10000000&((data)<<28))
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_10(data)                           (0x08000000&((data)<<27))
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_9(data)                            (0x04000000&((data)<<26))
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_8(data)                            (0x02000000&((data)<<25))
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_7(data)                            (0x01000000&((data)<<24))
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_6(data)                            (0x00800000&((data)<<23))
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_5(data)                            (0x00400000&((data)<<22))
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_4(data)                            (0x00200000&((data)<<21))
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_3(data)                            (0x00100000&((data)<<20))
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_2(data)                            (0x00080000&((data)<<19))
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_1(data)                            (0x00040000&((data)<<18))
#define  OD_DMA_ODDMA_CAP_FAIL_pqc2_bist_fail_0(data)                            (0x00020000&((data)<<17))
#define  OD_DMA_ODDMA_CAP_FAIL_pqc1_bist_fail_0(data)                            (0x00010000&((data)<<16))
#define  OD_DMA_ODDMA_CAP_FAIL_cap_bist_fail(data)                               (0x00000001&(data))
#define  OD_DMA_ODDMA_CAP_FAIL_get_pqc2_bist_fail_12(data)                       ((0x20000000&(data))>>29)
#define  OD_DMA_ODDMA_CAP_FAIL_get_pqc2_bist_fail_11(data)                       ((0x10000000&(data))>>28)
#define  OD_DMA_ODDMA_CAP_FAIL_get_pqc2_bist_fail_10(data)                       ((0x08000000&(data))>>27)
#define  OD_DMA_ODDMA_CAP_FAIL_get_pqc2_bist_fail_9(data)                        ((0x04000000&(data))>>26)
#define  OD_DMA_ODDMA_CAP_FAIL_get_pqc2_bist_fail_8(data)                        ((0x02000000&(data))>>25)
#define  OD_DMA_ODDMA_CAP_FAIL_get_pqc2_bist_fail_7(data)                        ((0x01000000&(data))>>24)
#define  OD_DMA_ODDMA_CAP_FAIL_get_pqc2_bist_fail_6(data)                        ((0x00800000&(data))>>23)
#define  OD_DMA_ODDMA_CAP_FAIL_get_pqc2_bist_fail_5(data)                        ((0x00400000&(data))>>22)
#define  OD_DMA_ODDMA_CAP_FAIL_get_pqc2_bist_fail_4(data)                        ((0x00200000&(data))>>21)
#define  OD_DMA_ODDMA_CAP_FAIL_get_pqc2_bist_fail_3(data)                        ((0x00100000&(data))>>20)
#define  OD_DMA_ODDMA_CAP_FAIL_get_pqc2_bist_fail_2(data)                        ((0x00080000&(data))>>19)
#define  OD_DMA_ODDMA_CAP_FAIL_get_pqc2_bist_fail_1(data)                        ((0x00040000&(data))>>18)
#define  OD_DMA_ODDMA_CAP_FAIL_get_pqc2_bist_fail_0(data)                        ((0x00020000&(data))>>17)
#define  OD_DMA_ODDMA_CAP_FAIL_get_pqc1_bist_fail_0(data)                        ((0x00010000&(data))>>16)
#define  OD_DMA_ODDMA_CAP_FAIL_get_cap_bist_fail(data)                           (0x00000001&(data))

#define  OD_DMA_ODDMA_CAP_DRF_FAIL                                              0x1802CF30
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_reg_addr                                      "0xB802CF30"
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_reg                                           0xB802CF30
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_inst_addr                                     "0x004C"
#define  set_OD_DMA_ODDMA_CAP_DRF_FAIL_reg(data)                                 (*((volatile unsigned int*)OD_DMA_ODDMA_CAP_DRF_FAIL_reg)=data)
#define  get_OD_DMA_ODDMA_CAP_DRF_FAIL_reg                                       (*((volatile unsigned int*)OD_DMA_ODDMA_CAP_DRF_FAIL_reg))
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_12_shift                        (29)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_11_shift                        (28)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_10_shift                        (27)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_9_shift                         (26)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_8_shift                         (25)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_7_shift                         (24)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_6_shift                         (23)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_5_shift                         (22)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_4_shift                         (21)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_3_shift                         (20)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_2_shift                         (19)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_1_shift                         (18)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_0_shift                         (17)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc1_drf_fail_0_shift                         (16)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_cap_drf_fail_shift                            (0)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_12_mask                         (0x20000000)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_11_mask                         (0x10000000)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_10_mask                         (0x08000000)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_9_mask                          (0x04000000)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_8_mask                          (0x02000000)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_7_mask                          (0x01000000)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_6_mask                          (0x00800000)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_5_mask                          (0x00400000)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_4_mask                          (0x00200000)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_3_mask                          (0x00100000)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_2_mask                          (0x00080000)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_1_mask                          (0x00040000)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_0_mask                          (0x00020000)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc1_drf_fail_0_mask                          (0x00010000)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_cap_drf_fail_mask                             (0x00000001)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_12(data)                        (0x20000000&((data)<<29))
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_11(data)                        (0x10000000&((data)<<28))
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_10(data)                        (0x08000000&((data)<<27))
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_9(data)                         (0x04000000&((data)<<26))
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_8(data)                         (0x02000000&((data)<<25))
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_7(data)                         (0x01000000&((data)<<24))
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_6(data)                         (0x00800000&((data)<<23))
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_5(data)                         (0x00400000&((data)<<22))
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_4(data)                         (0x00200000&((data)<<21))
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_3(data)                         (0x00100000&((data)<<20))
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_2(data)                         (0x00080000&((data)<<19))
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_1(data)                         (0x00040000&((data)<<18))
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc2_drf_fail_0(data)                         (0x00020000&((data)<<17))
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_pqc1_drf_fail_0(data)                         (0x00010000&((data)<<16))
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_cap_drf_fail(data)                            (0x00000001&(data))
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_get_pqc2_drf_fail_12(data)                    ((0x20000000&(data))>>29)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_get_pqc2_drf_fail_11(data)                    ((0x10000000&(data))>>28)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_get_pqc2_drf_fail_10(data)                    ((0x08000000&(data))>>27)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_get_pqc2_drf_fail_9(data)                     ((0x04000000&(data))>>26)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_get_pqc2_drf_fail_8(data)                     ((0x02000000&(data))>>25)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_get_pqc2_drf_fail_7(data)                     ((0x01000000&(data))>>24)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_get_pqc2_drf_fail_6(data)                     ((0x00800000&(data))>>23)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_get_pqc2_drf_fail_5(data)                     ((0x00400000&(data))>>22)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_get_pqc2_drf_fail_4(data)                     ((0x00200000&(data))>>21)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_get_pqc2_drf_fail_3(data)                     ((0x00100000&(data))>>20)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_get_pqc2_drf_fail_2(data)                     ((0x00080000&(data))>>19)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_get_pqc2_drf_fail_1(data)                     ((0x00040000&(data))>>18)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_get_pqc2_drf_fail_0(data)                     ((0x00020000&(data))>>17)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_get_pqc1_drf_fail_0(data)                     ((0x00010000&(data))>>16)
#define  OD_DMA_ODDMA_CAP_DRF_FAIL_get_cap_drf_fail(data)                        (0x00000001&(data))

#define  OD_DMA_ODDMA_DISP_RM                                                   0x1802CF40
#define  OD_DMA_ODDMA_DISP_RM_reg_addr                                           "0xB802CF40"
#define  OD_DMA_ODDMA_DISP_RM_reg                                                0xB802CF40
#define  OD_DMA_ODDMA_DISP_RM_inst_addr                                          "0x004D"
#define  set_OD_DMA_ODDMA_DISP_RM_reg(data)                                      (*((volatile unsigned int*)OD_DMA_ODDMA_DISP_RM_reg)=data)
#define  get_OD_DMA_ODDMA_DISP_RM_reg                                            (*((volatile unsigned int*)OD_DMA_ODDMA_DISP_RM_reg))
#define  OD_DMA_ODDMA_DISP_RM_pqdc2_rm_0_shift                                   (20)
#define  OD_DMA_ODDMA_DISP_RM_pqdc1_rm_0_shift                                   (16)
#define  OD_DMA_ODDMA_DISP_RM_disp_rm_shift                                      (0)
#define  OD_DMA_ODDMA_DISP_RM_pqdc2_rm_0_mask                                    (0x00F00000)
#define  OD_DMA_ODDMA_DISP_RM_pqdc1_rm_0_mask                                    (0x000F0000)
#define  OD_DMA_ODDMA_DISP_RM_disp_rm_mask                                       (0x0000000F)
#define  OD_DMA_ODDMA_DISP_RM_pqdc2_rm_0(data)                                   (0x00F00000&((data)<<20))
#define  OD_DMA_ODDMA_DISP_RM_pqdc1_rm_0(data)                                   (0x000F0000&((data)<<16))
#define  OD_DMA_ODDMA_DISP_RM_disp_rm(data)                                      (0x0000000F&(data))
#define  OD_DMA_ODDMA_DISP_RM_get_pqdc2_rm_0(data)                               ((0x00F00000&(data))>>20)
#define  OD_DMA_ODDMA_DISP_RM_get_pqdc1_rm_0(data)                               ((0x000F0000&(data))>>16)
#define  OD_DMA_ODDMA_DISP_RM_get_disp_rm(data)                                  (0x0000000F&(data))

#define  OD_DMA_ODDMA_DISP_RME                                                  0x1802CF44
#define  OD_DMA_ODDMA_DISP_RME_reg_addr                                          "0xB802CF44"
#define  OD_DMA_ODDMA_DISP_RME_reg                                               0xB802CF44
#define  OD_DMA_ODDMA_DISP_RME_inst_addr                                         "0x004E"
#define  set_OD_DMA_ODDMA_DISP_RME_reg(data)                                     (*((volatile unsigned int*)OD_DMA_ODDMA_DISP_RME_reg)=data)
#define  get_OD_DMA_ODDMA_DISP_RME_reg                                           (*((volatile unsigned int*)OD_DMA_ODDMA_DISP_RME_reg))
#define  OD_DMA_ODDMA_DISP_RME_pqdc_test_rwm_shift                               (31)
#define  OD_DMA_ODDMA_DISP_RME_pqdc2_test1_0_shift                               (19)
#define  OD_DMA_ODDMA_DISP_RME_pqdc1_test1_0_shift                               (18)
#define  OD_DMA_ODDMA_DISP_RME_pqdc2_rme_0_shift                                 (17)
#define  OD_DMA_ODDMA_DISP_RME_pqdc1_rme_0_shift                                 (16)
#define  OD_DMA_ODDMA_DISP_RME_disp_test1_shift                                  (1)
#define  OD_DMA_ODDMA_DISP_RME_disp_rme_shift                                    (0)
#define  OD_DMA_ODDMA_DISP_RME_pqdc_test_rwm_mask                                (0x80000000)
#define  OD_DMA_ODDMA_DISP_RME_pqdc2_test1_0_mask                                (0x00080000)
#define  OD_DMA_ODDMA_DISP_RME_pqdc1_test1_0_mask                                (0x00040000)
#define  OD_DMA_ODDMA_DISP_RME_pqdc2_rme_0_mask                                  (0x00020000)
#define  OD_DMA_ODDMA_DISP_RME_pqdc1_rme_0_mask                                  (0x00010000)
#define  OD_DMA_ODDMA_DISP_RME_disp_test1_mask                                   (0x00000002)
#define  OD_DMA_ODDMA_DISP_RME_disp_rme_mask                                     (0x00000001)
#define  OD_DMA_ODDMA_DISP_RME_pqdc_test_rwm(data)                               (0x80000000&((data)<<31))
#define  OD_DMA_ODDMA_DISP_RME_pqdc2_test1_0(data)                               (0x00080000&((data)<<19))
#define  OD_DMA_ODDMA_DISP_RME_pqdc1_test1_0(data)                               (0x00040000&((data)<<18))
#define  OD_DMA_ODDMA_DISP_RME_pqdc2_rme_0(data)                                 (0x00020000&((data)<<17))
#define  OD_DMA_ODDMA_DISP_RME_pqdc1_rme_0(data)                                 (0x00010000&((data)<<16))
#define  OD_DMA_ODDMA_DISP_RME_disp_test1(data)                                  (0x00000002&((data)<<1))
#define  OD_DMA_ODDMA_DISP_RME_disp_rme(data)                                    (0x00000001&(data))
#define  OD_DMA_ODDMA_DISP_RME_get_pqdc_test_rwm(data)                           ((0x80000000&(data))>>31)
#define  OD_DMA_ODDMA_DISP_RME_get_pqdc2_test1_0(data)                           ((0x00080000&(data))>>19)
#define  OD_DMA_ODDMA_DISP_RME_get_pqdc1_test1_0(data)                           ((0x00040000&(data))>>18)
#define  OD_DMA_ODDMA_DISP_RME_get_pqdc2_rme_0(data)                             ((0x00020000&(data))>>17)
#define  OD_DMA_ODDMA_DISP_RME_get_pqdc1_rme_0(data)                             ((0x00010000&(data))>>16)
#define  OD_DMA_ODDMA_DISP_RME_get_disp_test1(data)                              ((0x00000002&(data))>>1)
#define  OD_DMA_ODDMA_DISP_RME_get_disp_rme(data)                                (0x00000001&(data))

#define  OD_DMA_ODDMA_DISP_LS                                                   0x1802CF48
#define  OD_DMA_ODDMA_DISP_LS_reg_addr                                           "0xB802CF48"
#define  OD_DMA_ODDMA_DISP_LS_reg                                                0xB802CF48
#define  OD_DMA_ODDMA_DISP_LS_inst_addr                                          "0x004F"
#define  set_OD_DMA_ODDMA_DISP_LS_reg(data)                                      (*((volatile unsigned int*)OD_DMA_ODDMA_DISP_LS_reg)=data)
#define  get_OD_DMA_ODDMA_DISP_LS_reg                                            (*((volatile unsigned int*)OD_DMA_ODDMA_DISP_LS_reg))
#define  OD_DMA_ODDMA_DISP_LS_pqdc2_ls_0_shift                                   (17)
#define  OD_DMA_ODDMA_DISP_LS_pqdc1_ls_0_shift                                   (16)
#define  OD_DMA_ODDMA_DISP_LS_disp_ls_shift                                      (0)
#define  OD_DMA_ODDMA_DISP_LS_pqdc2_ls_0_mask                                    (0x00020000)
#define  OD_DMA_ODDMA_DISP_LS_pqdc1_ls_0_mask                                    (0x00010000)
#define  OD_DMA_ODDMA_DISP_LS_disp_ls_mask                                       (0x00000001)
#define  OD_DMA_ODDMA_DISP_LS_pqdc2_ls_0(data)                                   (0x00020000&((data)<<17))
#define  OD_DMA_ODDMA_DISP_LS_pqdc1_ls_0(data)                                   (0x00010000&((data)<<16))
#define  OD_DMA_ODDMA_DISP_LS_disp_ls(data)                                      (0x00000001&(data))
#define  OD_DMA_ODDMA_DISP_LS_get_pqdc2_ls_0(data)                               ((0x00020000&(data))>>17)
#define  OD_DMA_ODDMA_DISP_LS_get_pqdc1_ls_0(data)                               ((0x00010000&(data))>>16)
#define  OD_DMA_ODDMA_DISP_LS_get_disp_ls(data)                                  (0x00000001&(data))

#define  OD_DMA_ODDMA_DISP_BIST_FAIL                                            0x1802CF4C
#define  OD_DMA_ODDMA_DISP_BIST_FAIL_reg_addr                                    "0xB802CF4C"
#define  OD_DMA_ODDMA_DISP_BIST_FAIL_reg                                         0xB802CF4C
#define  OD_DMA_ODDMA_DISP_BIST_FAIL_inst_addr                                   "0x0050"
#define  set_OD_DMA_ODDMA_DISP_BIST_FAIL_reg(data)                               (*((volatile unsigned int*)OD_DMA_ODDMA_DISP_BIST_FAIL_reg)=data)
#define  get_OD_DMA_ODDMA_DISP_BIST_FAIL_reg                                     (*((volatile unsigned int*)OD_DMA_ODDMA_DISP_BIST_FAIL_reg))
#define  OD_DMA_ODDMA_DISP_BIST_FAIL_pqdc2_bist_fail_1_shift                     (18)
#define  OD_DMA_ODDMA_DISP_BIST_FAIL_pqdc2_bist_fail_0_shift                     (17)
#define  OD_DMA_ODDMA_DISP_BIST_FAIL_pqdc1_bist_fail_0_shift                     (16)
#define  OD_DMA_ODDMA_DISP_BIST_FAIL_disp_bist_fail_shift                        (0)
#define  OD_DMA_ODDMA_DISP_BIST_FAIL_pqdc2_bist_fail_1_mask                      (0x00040000)
#define  OD_DMA_ODDMA_DISP_BIST_FAIL_pqdc2_bist_fail_0_mask                      (0x00020000)
#define  OD_DMA_ODDMA_DISP_BIST_FAIL_pqdc1_bist_fail_0_mask                      (0x00010000)
#define  OD_DMA_ODDMA_DISP_BIST_FAIL_disp_bist_fail_mask                         (0x00000001)
#define  OD_DMA_ODDMA_DISP_BIST_FAIL_pqdc2_bist_fail_1(data)                     (0x00040000&((data)<<18))
#define  OD_DMA_ODDMA_DISP_BIST_FAIL_pqdc2_bist_fail_0(data)                     (0x00020000&((data)<<17))
#define  OD_DMA_ODDMA_DISP_BIST_FAIL_pqdc1_bist_fail_0(data)                     (0x00010000&((data)<<16))
#define  OD_DMA_ODDMA_DISP_BIST_FAIL_disp_bist_fail(data)                        (0x00000001&(data))
#define  OD_DMA_ODDMA_DISP_BIST_FAIL_get_pqdc2_bist_fail_1(data)                 ((0x00040000&(data))>>18)
#define  OD_DMA_ODDMA_DISP_BIST_FAIL_get_pqdc2_bist_fail_0(data)                 ((0x00020000&(data))>>17)
#define  OD_DMA_ODDMA_DISP_BIST_FAIL_get_pqdc1_bist_fail_0(data)                 ((0x00010000&(data))>>16)
#define  OD_DMA_ODDMA_DISP_BIST_FAIL_get_disp_bist_fail(data)                    (0x00000001&(data))

#define  OD_DMA_ODDMA_DISP_DRF_FAIL                                             0x1802CF50
#define  OD_DMA_ODDMA_DISP_DRF_FAIL_reg_addr                                     "0xB802CF50"
#define  OD_DMA_ODDMA_DISP_DRF_FAIL_reg                                          0xB802CF50
#define  OD_DMA_ODDMA_DISP_DRF_FAIL_inst_addr                                    "0x0051"
#define  set_OD_DMA_ODDMA_DISP_DRF_FAIL_reg(data)                                (*((volatile unsigned int*)OD_DMA_ODDMA_DISP_DRF_FAIL_reg)=data)
#define  get_OD_DMA_ODDMA_DISP_DRF_FAIL_reg                                      (*((volatile unsigned int*)OD_DMA_ODDMA_DISP_DRF_FAIL_reg))
#define  OD_DMA_ODDMA_DISP_DRF_FAIL_pqdc2_drf_fail_1_shift                       (18)
#define  OD_DMA_ODDMA_DISP_DRF_FAIL_pqdc2_drf_fail_0_shift                       (17)
#define  OD_DMA_ODDMA_DISP_DRF_FAIL_pqdc1_drf_fail_0_shift                       (16)
#define  OD_DMA_ODDMA_DISP_DRF_FAIL_disp_drf_fail_shift                          (0)
#define  OD_DMA_ODDMA_DISP_DRF_FAIL_pqdc2_drf_fail_1_mask                        (0x00040000)
#define  OD_DMA_ODDMA_DISP_DRF_FAIL_pqdc2_drf_fail_0_mask                        (0x00020000)
#define  OD_DMA_ODDMA_DISP_DRF_FAIL_pqdc1_drf_fail_0_mask                        (0x00010000)
#define  OD_DMA_ODDMA_DISP_DRF_FAIL_disp_drf_fail_mask                           (0x00000001)
#define  OD_DMA_ODDMA_DISP_DRF_FAIL_pqdc2_drf_fail_1(data)                       (0x00040000&((data)<<18))
#define  OD_DMA_ODDMA_DISP_DRF_FAIL_pqdc2_drf_fail_0(data)                       (0x00020000&((data)<<17))
#define  OD_DMA_ODDMA_DISP_DRF_FAIL_pqdc1_drf_fail_0(data)                       (0x00010000&((data)<<16))
#define  OD_DMA_ODDMA_DISP_DRF_FAIL_disp_drf_fail(data)                          (0x00000001&(data))
#define  OD_DMA_ODDMA_DISP_DRF_FAIL_get_pqdc2_drf_fail_1(data)                   ((0x00040000&(data))>>18)
#define  OD_DMA_ODDMA_DISP_DRF_FAIL_get_pqdc2_drf_fail_0(data)                   ((0x00020000&(data))>>17)
#define  OD_DMA_ODDMA_DISP_DRF_FAIL_get_pqdc1_drf_fail_0(data)                   ((0x00010000&(data))>>16)
#define  OD_DMA_ODDMA_DISP_DRF_FAIL_get_disp_drf_fail(data)                      (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======OD_DMA register structure define==========

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
}od_dma_oddma_pq_cmp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_line_sum_bit:16;
        RBus_UInt32  cmp_400_old_mode_en:1;
        RBus_UInt32  dummy1802cd04_14_11:4;
        RBus_UInt32  cmp_jump4_en:1;
        RBus_UInt32  cmp_qp_mode:2;
        RBus_UInt32  cmp_dic_mode_en:1;
        RBus_UInt32  two_line_prediction_en:1;
        RBus_UInt32  cmp_line_mode:1;
        RBus_UInt32  cmp_data_color:1;
        RBus_UInt32  cmp_data_bit_width:2;
        RBus_UInt32  cmp_data_format:2;
    };
}od_dma_oddma_pq_cmp_pair_RBUS;

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
}od_dma_oddma_pq_cmp_bit_RBUS;

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
}od_dma_oddma_pq_cmp_enable_RBUS;

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
}od_dma_oddma_pq_cmp_smooth_RBUS;

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
}od_dma_oddma_pq_cmp_allocate_RBUS;

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
}od_dma_oddma_pq_cmp_poor_RBUS;

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
}od_dma_oddma_pq_cmp_guarantee_RBUS;

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
}od_dma_oddma_pq_cmp_balance_RBUS;

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
        RBus_UInt32  res3:2;
        RBus_UInt32  g_fifo_even_overflow_irq_en:1;
        RBus_UInt32  r_fifo_even_overflow_irq_en:1;
        RBus_UInt32  b_fifo_even_overflow_irq_en:1;
        RBus_UInt32  res4:4;
    };
}od_dma_oddma_pq_cmp_irq_en_RBUS;

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
        RBus_UInt32  res3:2;
        RBus_UInt32  g_fifo_even_overflow_st:1;
        RBus_UInt32  r_fifo_even_overflow_st:1;
        RBus_UInt32  b_fifo_even_overflow_st:1;
        RBus_UInt32  res4:4;
    };
}od_dma_oddma_pq_cmp_irq_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  g_ratio_max:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  g_ratio_min:5;
        RBus_UInt32  res3:2;
        RBus_UInt32  cmp_package_height_cnt:14;
    };
}od_dma_oddma_pq_cmp_st_RBUS;

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
}od_dma_oddma_pq_cmp_qp_st_RBUS;

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
}od_dma_oddma_pq_cmp_fifo_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  g_frame_left:16;
        RBus_UInt32  rb_frame_left:16;
    };
}od_dma_oddma_pq_cmp_left_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_package_long_term:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  total_package_even:24;
    };
}od_dma_oddma_pq_cmp_package_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_g:32;
    };
}od_dma_oddma_pq_cmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_r:32;
    };
}od_dma_oddma_pq_cmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_b:32;
    };
}od_dma_oddma_pq_cmp_crc_even_b_RBUS;

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
}od_dma_oddma_pq_cmp_blk0_add0_RBUS;

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
}od_dma_oddma_pq_cmp_blk0_add1_RBUS;

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
}od_dma_oddma_pq_decmp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_line_sum_bit:16;
        RBus_UInt32  decmp_400_old_mode_en:1;
        RBus_UInt32  dummy1802cd84_14_11:4;
        RBus_UInt32  decmp_jump4_en:1;
        RBus_UInt32  decmp_qp_mode:2;
        RBus_UInt32  decmp_dic_mode_en:1;
        RBus_UInt32  decmp_two_line_prediction_en:1;
        RBus_UInt32  decmp_line_mode:1;
        RBus_UInt32  decmp_data_color:1;
        RBus_UInt32  decmp_data_bit_width:2;
        RBus_UInt32  decmp_data_format:2;
    };
}od_dma_oddma_pq_decmp_pair_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  decmp_crc_ro_line_sel:14;
        RBus_UInt32  res2:13;
        RBus_UInt32  saturation_type_delta:1;
        RBus_UInt32  saturation_type:1;
        RBus_UInt32  saturation_en:1;
    };
}od_dma_oddma_pq_decmp_sat_en_RBUS;

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
        RBus_UInt32  res2:16;
    };
}od_dma_oddma_pq_decmp_irq_en_RBUS;

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
        RBus_UInt32  res3:16;
    };
}od_dma_oddma_pq_decmp_irq_st_RBUS;

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
}od_dma_oddma_pq_decmp_mark_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_0:16;
        RBus_UInt32  mark_color_1:16;
    };
}od_dma_oddma_pq_decmp_mark_color_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_2:16;
        RBus_UInt32  mark_color_3:16;
    };
}od_dma_oddma_pq_decmp_mark_color_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_4:16;
        RBus_UInt32  mark_color_5:16;
    };
}od_dma_oddma_pq_decmp_mark_color_45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_6:16;
        RBus_UInt32  mark_color_7:16;
    };
}od_dma_oddma_pq_decmp_mark_color_67_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_dic:16;
        RBus_UInt32  mark_color_422:16;
    };
}od_dma_oddma_pq_decmp_mark_color_422_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  decmp_crc_error_line:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  decmp_package_height_cnt:14;
    };
}od_dma_oddma_pq_decmp_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_g:32;
    };
}od_dma_oddma_pq_decmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_r:32;
    };
}od_dma_oddma_pq_decmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_b:32;
    };
}od_dma_oddma_pq_decmp_crc_even_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_pause_cycle_measure_en:1;
        RBus_UInt32  decmp_pause_cycle_long_term:1;
        RBus_UInt32  res1:22;
        RBus_UInt32  decmp_pause_cycle:8;
    };
}od_dma_oddma_pq_decmp_pause_cycle_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802cdd4_31_2:30;
        RBus_UInt32  tr_en:1;
        RBus_UInt32  comp_de_comp_bypass:1;
    };
}od_dma_oddma_pqc_pqdc_compensation_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  smooth_tog_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  disp_db_apply:1;
        RBus_UInt32  disp_db_rd_sel:1;
        RBus_UInt32  disp_db_en:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  cap_db_apply:1;
        RBus_UInt32  cap_db_rd_sel:1;
        RBus_UInt32  cap_db_en:1;
    };
}od_dma_od_dma_db_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  bit_sel:2;
        RBus_UInt32  pixel_encoding:1;
        RBus_UInt32  cap_block_fw:1;
        RBus_UInt32  set_block_sel:1;
        RBus_UInt32  auto_block_sel_en:1;
        RBus_UInt32  oddma_mode_sel:1;
        RBus_UInt32  res2:16;
    };
}od_dma_od_dma_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vact:16;
        RBus_UInt32  res1:1;
        RBus_UInt32  hact:15;
    };
}od_dma_od_dma_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802cdec_31_14:18;
        RBus_UInt32  disp_underflow:1;
        RBus_UInt32  cap_overflow:1;
        RBus_UInt32  cap_over_size:1;
        RBus_UInt32  cap_under_size:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  vs_rising_occur:1;
        RBus_UInt32  cap_block:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  disp_fifo_err_ie:1;
        RBus_UInt32  cap_fifo_err_ie:1;
        RBus_UInt32  vs_rising_ie:1;
    };
}od_dma_od_dma_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_up_limit:28;
        RBus_UInt32  res1:4;
    };
}od_dma_oddma_wr_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_low_limit:28;
        RBus_UInt32  res1:4;
    };
}od_dma_oddma_wr_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  cap_max_outstanding:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  cap_force_all_rst:1;
        RBus_UInt32  cap_en:1;
    };
}od_dma_oddma_wr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  cap_cmd_water:3;
        RBus_UInt32  res2:3;
        RBus_UInt32  cap_data_water:9;
        RBus_UInt32  res3:5;
        RBus_UInt32  cap_cur_outstanding:3;
        RBus_UInt32  res4:3;
        RBus_UInt32  cap_soft_rst_before_cmd_finish:1;
        RBus_UInt32  cap_soft_rst_with_data_left:1;
        RBus_UInt32  cap_data_fifo_underflow_err:1;
        RBus_UInt32  cap_exceed_range_err:1;
        RBus_UInt32  cap_zero_length_err:1;
    };
}od_dma_oddma_wr_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_ack_num_error:1;
        RBus_UInt32  cap_last_no_ack_error:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  cap_target_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap_last_ack_num:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  cap_selected_bl:7;
    };
}od_dma_oddma_wr_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_selected_addr:28;
        RBus_UInt32  res1:2;
        RBus_UInt32  cap_addr_bl_sel:2;
    };
}od_dma_oddma_wr_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_monitor_en:1;
        RBus_UInt32  cap_monitor_conti:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  cap_reach_thd:1;
        RBus_UInt32  cap_monitor_thd:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  cap_highest_water_level:9;
    };
}od_dma_oddma_wr_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_sta_addr_0:28;
        RBus_UInt32  res1:4;
    };
}od_dma_oddma_wr_num_bl_wrap_addr_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_sta_addr_1:28;
        RBus_UInt32  res1:4;
    };
}od_dma_oddma_wr_num_bl_wrap_addr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_line_step:28;
        RBus_UInt32  res1:4;
    };
}od_dma_oddma_wr_num_bl_wrap_line_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_line_toggle_offset:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  cap_line_num:12;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap_burst_len:7;
        RBus_UInt32  res3:4;
    };
}od_dma_oddma_wr_num_bl_wrap_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_rolling_enable:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cap_rolling_space:12;
        RBus_UInt32  res2:16;
    };
}od_dma_oddma_wr_num_bl_wrap_rolling_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  cap_addr_toggle_mode:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap_line_128_num:23;
        RBus_UInt32  res3:4;
    };
}od_dma_oddma_wr_num_bl_wrap_word_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_remain_setting:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  cap_remain_128_num:23;
        RBus_UInt32  res2:2;
        RBus_UInt32  cap_finish_status:2;
    };
}od_dma_oddma_wr_num_bl_wrap_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_soft_rst_before_finish:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cap_remain_line_num:12;
        RBus_UInt32  res2:16;
    };
}od_dma_oddma_wr_num_bl_wrap_st2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_up_limit:28;
        RBus_UInt32  res1:4;
    };
}od_dma_oddma_rd_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_low_limit:28;
        RBus_UInt32  res1:4;
    };
}od_dma_oddma_rd_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  disp_max_outstanding:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  disp_force_all_rst:1;
        RBus_UInt32  disp_en:1;
    };
}od_dma_oddma_rd_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  disp_cmd_water:3;
        RBus_UInt32  res2:3;
        RBus_UInt32  disp_data_water:9;
        RBus_UInt32  res3:5;
        RBus_UInt32  disp_cur_outstanding:3;
        RBus_UInt32  res4:3;
        RBus_UInt32  disp_soft_rst_before_cmd_finish:1;
        RBus_UInt32  disp_soft_rst_with_data_left:1;
        RBus_UInt32  disp_data_fifo_overflow_err:1;
        RBus_UInt32  disp_exceed_range_err:1;
        RBus_UInt32  disp_zero_length_err:1;
    };
}od_dma_oddma_rd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_ack_num_error:1;
        RBus_UInt32  disp_last_no_ack_error:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  disp_target_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  disp_last_ack_num:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  disp_selected_bl:7;
    };
}od_dma_oddma_rd_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_selected_addr:28;
        RBus_UInt32  res1:2;
        RBus_UInt32  disp_addr_bl_sel:2;
    };
}od_dma_oddma_rd_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_monitor_en:1;
        RBus_UInt32  disp_monitor_conti:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  disp_reach_thd:1;
        RBus_UInt32  disp_monitor_thd:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  disp_lowest_water_level:9;
    };
}od_dma_oddma_rd_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_sta_addr_0:28;
        RBus_UInt32  res1:4;
    };
}od_dma_oddma_rd_num_bl_wrap_addr_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_sta_addr_1:28;
        RBus_UInt32  res1:4;
    };
}od_dma_oddma_rd_num_bl_wrap_addr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_line_step:28;
        RBus_UInt32  res1:4;
    };
}od_dma_oddma_rd_num_bl_wrap_line_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_line_toggle_offset:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  disp_line_num:12;
        RBus_UInt32  res2:5;
        RBus_UInt32  disp_burst_len:7;
        RBus_UInt32  res3:4;
    };
}od_dma_oddma_rd_num_bl_wrap_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_rolling_enable:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  disp_rolling_space:12;
        RBus_UInt32  res2:16;
    };
}od_dma_oddma_rd_num_bl_wrap_rolling_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  disp_addr_toggle_mode:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  disp_line_128_num:23;
        RBus_UInt32  res3:4;
    };
}od_dma_oddma_rd_num_bl_wrap_word_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_remain_setting:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  disp_remain_128_num:23;
        RBus_UInt32  res2:2;
        RBus_UInt32  disp_finish_status:2;
    };
}od_dma_oddma_rd_num_bl_wrap_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_soft_rst_before_finish:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  disp_remain_line_num:12;
        RBus_UInt32  res2:16;
    };
}od_dma_oddma_rd_num_bl_wrap_st2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  pqc2_rm_1:4;
        RBus_UInt32  pqc2_rm_0:4;
        RBus_UInt32  pqc1_rm_0:4;
        RBus_UInt32  res2:12;
        RBus_UInt32  cap_rm:4;
    };
}od_dma_oddma_cap_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pqc_test_rwm:1;
        RBus_UInt32  res1:9;
        RBus_UInt32  pqc2_test1_1:1;
        RBus_UInt32  pqc2_test1_0:1;
        RBus_UInt32  pqc1_test1_0:1;
        RBus_UInt32  pqc2_rme_1:1;
        RBus_UInt32  pqc2_rme_0:1;
        RBus_UInt32  pqc1_rme_0:1;
        RBus_UInt32  res2:14;
        RBus_UInt32  cap_test1:1;
        RBus_UInt32  cap_rme:1;
    };
}od_dma_oddma_cap_rme_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  pqc2_ls_1:1;
        RBus_UInt32  pqc2_ls_0:1;
        RBus_UInt32  pqc1_ls_0:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  cap_ls:1;
    };
}od_dma_oddma_cap_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  pqc2_bist_fail_12:1;
        RBus_UInt32  pqc2_bist_fail_11:1;
        RBus_UInt32  pqc2_bist_fail_10:1;
        RBus_UInt32  pqc2_bist_fail_9:1;
        RBus_UInt32  pqc2_bist_fail_8:1;
        RBus_UInt32  pqc2_bist_fail_7:1;
        RBus_UInt32  pqc2_bist_fail_6:1;
        RBus_UInt32  pqc2_bist_fail_5:1;
        RBus_UInt32  pqc2_bist_fail_4:1;
        RBus_UInt32  pqc2_bist_fail_3:1;
        RBus_UInt32  pqc2_bist_fail_2:1;
        RBus_UInt32  pqc2_bist_fail_1:1;
        RBus_UInt32  pqc2_bist_fail_0:1;
        RBus_UInt32  pqc1_bist_fail_0:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  cap_bist_fail:1;
    };
}od_dma_oddma_cap_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  pqc2_drf_fail_12:1;
        RBus_UInt32  pqc2_drf_fail_11:1;
        RBus_UInt32  pqc2_drf_fail_10:1;
        RBus_UInt32  pqc2_drf_fail_9:1;
        RBus_UInt32  pqc2_drf_fail_8:1;
        RBus_UInt32  pqc2_drf_fail_7:1;
        RBus_UInt32  pqc2_drf_fail_6:1;
        RBus_UInt32  pqc2_drf_fail_5:1;
        RBus_UInt32  pqc2_drf_fail_4:1;
        RBus_UInt32  pqc2_drf_fail_3:1;
        RBus_UInt32  pqc2_drf_fail_2:1;
        RBus_UInt32  pqc2_drf_fail_1:1;
        RBus_UInt32  pqc2_drf_fail_0:1;
        RBus_UInt32  pqc1_drf_fail_0:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  cap_drf_fail:1;
    };
}od_dma_oddma_cap_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  pqdc2_rm_0:4;
        RBus_UInt32  pqdc1_rm_0:4;
        RBus_UInt32  res2:12;
        RBus_UInt32  disp_rm:4;
    };
}od_dma_oddma_disp_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pqdc_test_rwm:1;
        RBus_UInt32  res1:11;
        RBus_UInt32  pqdc2_test1_0:1;
        RBus_UInt32  pqdc1_test1_0:1;
        RBus_UInt32  pqdc2_rme_0:1;
        RBus_UInt32  pqdc1_rme_0:1;
        RBus_UInt32  res2:14;
        RBus_UInt32  disp_test1:1;
        RBus_UInt32  disp_rme:1;
    };
}od_dma_oddma_disp_rme_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  pqdc2_ls_0:1;
        RBus_UInt32  pqdc1_ls_0:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  disp_ls:1;
    };
}od_dma_oddma_disp_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  pqdc2_bist_fail_1:1;
        RBus_UInt32  pqdc2_bist_fail_0:1;
        RBus_UInt32  pqdc1_bist_fail_0:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  disp_bist_fail:1;
    };
}od_dma_oddma_disp_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  pqdc2_drf_fail_1:1;
        RBus_UInt32  pqdc2_drf_fail_0:1;
        RBus_UInt32  pqdc1_drf_fail_0:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  disp_drf_fail:1;
    };
}od_dma_oddma_disp_drf_fail_RBUS;

#else //apply LITTLE_ENDIAN

//======OD_DMA register structure define==========

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
}od_dma_oddma_pq_cmp_RBUS;

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
        RBus_UInt32  dummy1802cd04_14_11:4;
        RBus_UInt32  cmp_400_old_mode_en:1;
        RBus_UInt32  cmp_line_sum_bit:16;
    };
}od_dma_oddma_pq_cmp_pair_RBUS;

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
}od_dma_oddma_pq_cmp_bit_RBUS;

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
}od_dma_oddma_pq_cmp_enable_RBUS;

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
}od_dma_oddma_pq_cmp_smooth_RBUS;

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
}od_dma_oddma_pq_cmp_allocate_RBUS;

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
}od_dma_oddma_pq_cmp_poor_RBUS;

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
}od_dma_oddma_pq_cmp_guarantee_RBUS;

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
}od_dma_oddma_pq_cmp_balance_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  b_fifo_even_overflow_irq_en:1;
        RBus_UInt32  r_fifo_even_overflow_irq_en:1;
        RBus_UInt32  g_fifo_even_overflow_irq_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  request_fifo_even_overflow_irq_en:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  over_flb_irq_en:1;
        RBus_UInt32  input_size_less_irq_en:1;
        RBus_UInt32  input_size_more_irq_en:1;
        RBus_UInt32  block_fifo_overflow_irq_en:1;
        RBus_UInt32  input_fifo_overflow_irq_en:1;
        RBus_UInt32  tail_fifo_overflow_irq_en:1;
        RBus_UInt32  prs_over_line_sum_bit_irq_en:1;
        RBus_UInt32  res4:13;
    };
}od_dma_oddma_pq_cmp_irq_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  b_fifo_even_overflow_st:1;
        RBus_UInt32  r_fifo_even_overflow_st:1;
        RBus_UInt32  g_fifo_even_overflow_st:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  request_fifo_even_overflow_st:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  over_flb_st:1;
        RBus_UInt32  input_size_less_st:1;
        RBus_UInt32  input_size_more_st:1;
        RBus_UInt32  block_fifo_overflow_st:1;
        RBus_UInt32  input_fifo_overflow_st:1;
        RBus_UInt32  tail_fifo_overflow_st:1;
        RBus_UInt32  prs_over_line_sum_bit_st:1;
        RBus_UInt32  res4:12;
        RBus_UInt32  pqc_irq:1;
    };
}od_dma_oddma_pq_cmp_irq_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_package_height_cnt:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  g_ratio_min:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  g_ratio_max:5;
        RBus_UInt32  res3:3;
    };
}od_dma_oddma_pq_cmp_st_RBUS;

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
}od_dma_oddma_pq_cmp_qp_st_RBUS;

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
}od_dma_oddma_pq_cmp_fifo_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rb_frame_left:16;
        RBus_UInt32  g_frame_left:16;
    };
}od_dma_oddma_pq_cmp_left_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_package_even:24;
        RBus_UInt32  res1:7;
        RBus_UInt32  total_package_long_term:1;
    };
}od_dma_oddma_pq_cmp_package_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_g:32;
    };
}od_dma_oddma_pq_cmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_r:32;
    };
}od_dma_oddma_pq_cmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_b:32;
    };
}od_dma_oddma_pq_cmp_crc_even_b_RBUS;

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
}od_dma_oddma_pq_cmp_blk0_add0_RBUS;

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
}od_dma_oddma_pq_cmp_blk0_add1_RBUS;

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
}od_dma_oddma_pq_decmp_RBUS;

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
        RBus_UInt32  dummy1802cd84_14_11:4;
        RBus_UInt32  decmp_400_old_mode_en:1;
        RBus_UInt32  decmp_line_sum_bit:16;
    };
}od_dma_oddma_pq_decmp_pair_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  saturation_en:1;
        RBus_UInt32  saturation_type:1;
        RBus_UInt32  saturation_type_delta:1;
        RBus_UInt32  res1:13;
        RBus_UInt32  decmp_crc_ro_line_sel:14;
        RBus_UInt32  res2:2;
    };
}od_dma_oddma_pq_decmp_sat_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  crc_b_error_even_en:1;
        RBus_UInt32  crc_g_error_even_en:1;
        RBus_UInt32  crc_r_error_even_en:1;
        RBus_UInt32  dic_error_even_en:1;
        RBus_UInt32  underflow_irq_even_en:1;
        RBus_UInt32  not_finish_irq_even_en:1;
        RBus_UInt32  res2:10;
    };
}od_dma_oddma_pq_decmp_irq_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  crc_b_error_even_st:1;
        RBus_UInt32  crc_g_error_even_st:1;
        RBus_UInt32  crc_r_error_even_st:1;
        RBus_UInt32  dic_error_even_st:1;
        RBus_UInt32  underflow_irq_even_st:1;
        RBus_UInt32  not_finish_irq_even_st:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  ring_b_overflow_even_st:1;
        RBus_UInt32  ring_g_overflow_even_st:1;
        RBus_UInt32  ring_r_overflow_even_st:1;
        RBus_UInt32  in_fifo_overflow_even_st:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pqdc_irq:1;
    };
}od_dma_oddma_pq_decmp_irq_st_RBUS;

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
}od_dma_oddma_pq_decmp_mark_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_1:16;
        RBus_UInt32  mark_color_0:16;
    };
}od_dma_oddma_pq_decmp_mark_color_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_3:16;
        RBus_UInt32  mark_color_2:16;
    };
}od_dma_oddma_pq_decmp_mark_color_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_5:16;
        RBus_UInt32  mark_color_4:16;
    };
}od_dma_oddma_pq_decmp_mark_color_45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_7:16;
        RBus_UInt32  mark_color_6:16;
    };
}od_dma_oddma_pq_decmp_mark_color_67_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_422:16;
        RBus_UInt32  mark_color_dic:16;
    };
}od_dma_oddma_pq_decmp_mark_color_422_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_package_height_cnt:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  decmp_crc_error_line:14;
        RBus_UInt32  res2:2;
    };
}od_dma_oddma_pq_decmp_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_g:32;
    };
}od_dma_oddma_pq_decmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_r:32;
    };
}od_dma_oddma_pq_decmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_b:32;
    };
}od_dma_oddma_pq_decmp_crc_even_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_pause_cycle:8;
        RBus_UInt32  res1:22;
        RBus_UInt32  decmp_pause_cycle_long_term:1;
        RBus_UInt32  decmp_pause_cycle_measure_en:1;
    };
}od_dma_oddma_pq_decmp_pause_cycle_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  comp_de_comp_bypass:1;
        RBus_UInt32  tr_en:1;
        RBus_UInt32  dummy1802cdd4_31_2:30;
    };
}od_dma_oddma_pqc_pqdc_compensation_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_db_en:1;
        RBus_UInt32  cap_db_rd_sel:1;
        RBus_UInt32  cap_db_apply:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  disp_db_en:1;
        RBus_UInt32  disp_db_rd_sel:1;
        RBus_UInt32  disp_db_apply:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  smooth_tog_en:1;
        RBus_UInt32  res3:23;
    };
}od_dma_od_dma_db_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  oddma_mode_sel:1;
        RBus_UInt32  auto_block_sel_en:1;
        RBus_UInt32  set_block_sel:1;
        RBus_UInt32  cap_block_fw:1;
        RBus_UInt32  pixel_encoding:1;
        RBus_UInt32  bit_sel:2;
        RBus_UInt32  res2:9;
    };
}od_dma_od_dma_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hact:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  vact:16;
    };
}od_dma_od_dma_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vs_rising_ie:1;
        RBus_UInt32  cap_fifo_err_ie:1;
        RBus_UInt32  disp_fifo_err_ie:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  cap_block:1;
        RBus_UInt32  vs_rising_occur:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap_under_size:1;
        RBus_UInt32  cap_over_size:1;
        RBus_UInt32  cap_overflow:1;
        RBus_UInt32  disp_underflow:1;
        RBus_UInt32  dummy1802cdec_31_14:18;
    };
}od_dma_od_dma_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap_up_limit:28;
    };
}od_dma_oddma_wr_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap_low_limit:28;
    };
}od_dma_oddma_wr_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_en:1;
        RBus_UInt32  cap_force_all_rst:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  cap_max_outstanding:2;
        RBus_UInt32  res2:22;
    };
}od_dma_oddma_wr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_zero_length_err:1;
        RBus_UInt32  cap_exceed_range_err:1;
        RBus_UInt32  cap_data_fifo_underflow_err:1;
        RBus_UInt32  cap_soft_rst_with_data_left:1;
        RBus_UInt32  cap_soft_rst_before_cmd_finish:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cap_cur_outstanding:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap_data_water:9;
        RBus_UInt32  res3:3;
        RBus_UInt32  cap_cmd_water:3;
        RBus_UInt32  res4:1;
    };
}od_dma_oddma_wr_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_selected_bl:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  cap_last_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap_target_ack_num:7;
        RBus_UInt32  res3:7;
        RBus_UInt32  cap_last_no_ack_error:1;
        RBus_UInt32  cap_ack_num_error:1;
    };
}od_dma_oddma_wr_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_addr_bl_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  cap_selected_addr:28;
    };
}od_dma_oddma_wr_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_highest_water_level:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  cap_monitor_thd:9;
        RBus_UInt32  cap_reach_thd:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  cap_monitor_conti:1;
        RBus_UInt32  cap_monitor_en:1;
    };
}od_dma_oddma_wr_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap_sta_addr_0:28;
    };
}od_dma_oddma_wr_num_bl_wrap_addr_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap_sta_addr_1:28;
    };
}od_dma_oddma_wr_num_bl_wrap_addr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap_line_step:28;
    };
}od_dma_oddma_wr_num_bl_wrap_line_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap_burst_len:7;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap_line_num:12;
        RBus_UInt32  res3:1;
        RBus_UInt32  cap_line_toggle_offset:3;
    };
}od_dma_oddma_wr_num_bl_wrap_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  cap_rolling_space:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  cap_rolling_enable:1;
    };
}od_dma_oddma_wr_num_bl_wrap_rolling_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap_line_128_num:23;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap_addr_toggle_mode:1;
        RBus_UInt32  res3:3;
    };
}od_dma_oddma_wr_num_bl_wrap_word_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_finish_status:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  cap_remain_128_num:23;
        RBus_UInt32  res2:4;
        RBus_UInt32  cap_remain_setting:1;
    };
}od_dma_oddma_wr_num_bl_wrap_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  cap_remain_line_num:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  cap_soft_rst_before_finish:1;
    };
}od_dma_oddma_wr_num_bl_wrap_st2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  disp_up_limit:28;
    };
}od_dma_oddma_rd_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  disp_low_limit:28;
    };
}od_dma_oddma_rd_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_en:1;
        RBus_UInt32  disp_force_all_rst:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  disp_max_outstanding:2;
        RBus_UInt32  res2:22;
    };
}od_dma_oddma_rd_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_zero_length_err:1;
        RBus_UInt32  disp_exceed_range_err:1;
        RBus_UInt32  disp_data_fifo_overflow_err:1;
        RBus_UInt32  disp_soft_rst_with_data_left:1;
        RBus_UInt32  disp_soft_rst_before_cmd_finish:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  disp_cur_outstanding:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  disp_data_water:9;
        RBus_UInt32  res3:3;
        RBus_UInt32  disp_cmd_water:3;
        RBus_UInt32  res4:1;
    };
}od_dma_oddma_rd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_selected_bl:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  disp_last_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  disp_target_ack_num:7;
        RBus_UInt32  res3:7;
        RBus_UInt32  disp_last_no_ack_error:1;
        RBus_UInt32  disp_ack_num_error:1;
    };
}od_dma_oddma_rd_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_addr_bl_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  disp_selected_addr:28;
    };
}od_dma_oddma_rd_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_lowest_water_level:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  disp_monitor_thd:9;
        RBus_UInt32  disp_reach_thd:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  disp_monitor_conti:1;
        RBus_UInt32  disp_monitor_en:1;
    };
}od_dma_oddma_rd_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  disp_sta_addr_0:28;
    };
}od_dma_oddma_rd_num_bl_wrap_addr_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  disp_sta_addr_1:28;
    };
}od_dma_oddma_rd_num_bl_wrap_addr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  disp_line_step:28;
    };
}od_dma_oddma_rd_num_bl_wrap_line_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  disp_burst_len:7;
        RBus_UInt32  res2:5;
        RBus_UInt32  disp_line_num:12;
        RBus_UInt32  res3:1;
        RBus_UInt32  disp_line_toggle_offset:3;
    };
}od_dma_oddma_rd_num_bl_wrap_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  disp_rolling_space:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  disp_rolling_enable:1;
    };
}od_dma_oddma_rd_num_bl_wrap_rolling_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  disp_line_128_num:23;
        RBus_UInt32  res2:1;
        RBus_UInt32  disp_addr_toggle_mode:1;
        RBus_UInt32  res3:3;
    };
}od_dma_oddma_rd_num_bl_wrap_word_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_finish_status:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  disp_remain_128_num:23;
        RBus_UInt32  res2:4;
        RBus_UInt32  disp_remain_setting:1;
    };
}od_dma_oddma_rd_num_bl_wrap_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  disp_remain_line_num:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  disp_soft_rst_before_finish:1;
    };
}od_dma_oddma_rd_num_bl_wrap_st2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_rm:4;
        RBus_UInt32  res1:12;
        RBus_UInt32  pqc1_rm_0:4;
        RBus_UInt32  pqc2_rm_0:4;
        RBus_UInt32  pqc2_rm_1:4;
        RBus_UInt32  res2:4;
    };
}od_dma_oddma_cap_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_rme:1;
        RBus_UInt32  cap_test1:1;
        RBus_UInt32  res1:14;
        RBus_UInt32  pqc1_rme_0:1;
        RBus_UInt32  pqc2_rme_0:1;
        RBus_UInt32  pqc2_rme_1:1;
        RBus_UInt32  pqc1_test1_0:1;
        RBus_UInt32  pqc2_test1_0:1;
        RBus_UInt32  pqc2_test1_1:1;
        RBus_UInt32  res2:9;
        RBus_UInt32  pqc_test_rwm:1;
    };
}od_dma_oddma_cap_rme_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_ls:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  pqc1_ls_0:1;
        RBus_UInt32  pqc2_ls_0:1;
        RBus_UInt32  pqc2_ls_1:1;
        RBus_UInt32  res2:13;
    };
}od_dma_oddma_cap_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_bist_fail:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  pqc1_bist_fail_0:1;
        RBus_UInt32  pqc2_bist_fail_0:1;
        RBus_UInt32  pqc2_bist_fail_1:1;
        RBus_UInt32  pqc2_bist_fail_2:1;
        RBus_UInt32  pqc2_bist_fail_3:1;
        RBus_UInt32  pqc2_bist_fail_4:1;
        RBus_UInt32  pqc2_bist_fail_5:1;
        RBus_UInt32  pqc2_bist_fail_6:1;
        RBus_UInt32  pqc2_bist_fail_7:1;
        RBus_UInt32  pqc2_bist_fail_8:1;
        RBus_UInt32  pqc2_bist_fail_9:1;
        RBus_UInt32  pqc2_bist_fail_10:1;
        RBus_UInt32  pqc2_bist_fail_11:1;
        RBus_UInt32  pqc2_bist_fail_12:1;
        RBus_UInt32  res2:2;
    };
}od_dma_oddma_cap_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_drf_fail:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  pqc1_drf_fail_0:1;
        RBus_UInt32  pqc2_drf_fail_0:1;
        RBus_UInt32  pqc2_drf_fail_1:1;
        RBus_UInt32  pqc2_drf_fail_2:1;
        RBus_UInt32  pqc2_drf_fail_3:1;
        RBus_UInt32  pqc2_drf_fail_4:1;
        RBus_UInt32  pqc2_drf_fail_5:1;
        RBus_UInt32  pqc2_drf_fail_6:1;
        RBus_UInt32  pqc2_drf_fail_7:1;
        RBus_UInt32  pqc2_drf_fail_8:1;
        RBus_UInt32  pqc2_drf_fail_9:1;
        RBus_UInt32  pqc2_drf_fail_10:1;
        RBus_UInt32  pqc2_drf_fail_11:1;
        RBus_UInt32  pqc2_drf_fail_12:1;
        RBus_UInt32  res2:2;
    };
}od_dma_oddma_cap_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_rm:4;
        RBus_UInt32  res1:12;
        RBus_UInt32  pqdc1_rm_0:4;
        RBus_UInt32  pqdc2_rm_0:4;
        RBus_UInt32  res2:8;
    };
}od_dma_oddma_disp_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_rme:1;
        RBus_UInt32  disp_test1:1;
        RBus_UInt32  res1:14;
        RBus_UInt32  pqdc1_rme_0:1;
        RBus_UInt32  pqdc2_rme_0:1;
        RBus_UInt32  pqdc1_test1_0:1;
        RBus_UInt32  pqdc2_test1_0:1;
        RBus_UInt32  res2:11;
        RBus_UInt32  pqdc_test_rwm:1;
    };
}od_dma_oddma_disp_rme_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_ls:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  pqdc1_ls_0:1;
        RBus_UInt32  pqdc2_ls_0:1;
        RBus_UInt32  res2:14;
    };
}od_dma_oddma_disp_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_bist_fail:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  pqdc1_bist_fail_0:1;
        RBus_UInt32  pqdc2_bist_fail_0:1;
        RBus_UInt32  pqdc2_bist_fail_1:1;
        RBus_UInt32  res2:13;
    };
}od_dma_oddma_disp_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_drf_fail:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  pqdc1_drf_fail_0:1;
        RBus_UInt32  pqdc2_drf_fail_0:1;
        RBus_UInt32  pqdc2_drf_fail_1:1;
        RBus_UInt32  res2:13;
    };
}od_dma_oddma_disp_drf_fail_RBUS;




#endif 


#endif 
