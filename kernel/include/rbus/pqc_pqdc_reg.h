/**
* @file Merlin5_MEMC_pqc_pqdc
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_PQC_PQDC_REG_H_
#define _RBUS_PQC_PQDC_REG_H_

#include "rbus_types.h"



//  PQC_PQDC Register Address
#define  PQC_PQDC_MC_PQ_CMP                                                     0x18099200
#define  PQC_PQDC_MC_PQ_CMP_reg_addr                                             "0xB8099200"
#define  PQC_PQDC_MC_PQ_CMP_reg                                                  0xB8099200
#define  PQC_PQDC_MC_PQ_CMP_inst_addr                                            "0x0000"
#define  set_PQC_PQDC_MC_PQ_CMP_reg(data)                                        (*((volatile unsigned int*)PQC_PQDC_MC_PQ_CMP_reg)=data)
#define  get_PQC_PQDC_MC_PQ_CMP_reg                                              (*((volatile unsigned int*)PQC_PQDC_MC_PQ_CMP_reg))
#define  PQC_PQDC_MC_PQ_CMP_cmp_en_shift                                         (31)
#define  PQC_PQDC_MC_PQ_CMP_cmp_width_div32_shift                                (16)
#define  PQC_PQDC_MC_PQ_CMP_cmp_height_shift                                     (0)
#define  PQC_PQDC_MC_PQ_CMP_cmp_en_mask                                          (0x80000000)
#define  PQC_PQDC_MC_PQ_CMP_cmp_width_div32_mask                                 (0x01FF0000)
#define  PQC_PQDC_MC_PQ_CMP_cmp_height_mask                                      (0x00003FFF)
#define  PQC_PQDC_MC_PQ_CMP_cmp_en(data)                                         (0x80000000&((data)<<31))
#define  PQC_PQDC_MC_PQ_CMP_cmp_width_div32(data)                                (0x01FF0000&((data)<<16))
#define  PQC_PQDC_MC_PQ_CMP_cmp_height(data)                                     (0x00003FFF&(data))
#define  PQC_PQDC_MC_PQ_CMP_get_cmp_en(data)                                     ((0x80000000&(data))>>31)
#define  PQC_PQDC_MC_PQ_CMP_get_cmp_width_div32(data)                            ((0x01FF0000&(data))>>16)
#define  PQC_PQDC_MC_PQ_CMP_get_cmp_height(data)                                 (0x00003FFF&(data))

#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR                                             0x18099204
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_reg_addr                                     "0xB8099204"
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_reg                                          0xB8099204
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_inst_addr                                    "0x0001"
#define  set_PQC_PQDC_MC_LF_PQ_CMP_PAIR_reg(data)                                (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_PAIR_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_CMP_PAIR_reg                                      (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_PAIR_reg))
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_line_sum_bit_shift                       (16)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_400_old_mode_en_shift                    (15)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_dummy_14_11_shift                            (11)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_jump4_en_shift                           (10)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_qp_mode_shift                            (8)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_dic_mode_en_shift                        (7)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_two_line_prediction_en_shift                 (6)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_line_mode_shift                          (5)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_data_color_shift                         (4)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_data_bit_width_shift                     (2)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_data_format_shift                        (0)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_line_sum_bit_mask                        (0xFFFF0000)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_400_old_mode_en_mask                     (0x00008000)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_dummy_14_11_mask                             (0x00007800)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_jump4_en_mask                            (0x00000400)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_qp_mode_mask                             (0x00000300)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_dic_mode_en_mask                         (0x00000080)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_two_line_prediction_en_mask                  (0x00000040)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_line_mode_mask                           (0x00000020)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_data_color_mask                          (0x00000010)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_data_bit_width_mask                      (0x0000000C)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_data_format_mask                         (0x00000003)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_line_sum_bit(data)                       (0xFFFF0000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_400_old_mode_en(data)                    (0x00008000&((data)<<15))
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_dummy_14_11(data)                            (0x00007800&((data)<<11))
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_jump4_en(data)                           (0x00000400&((data)<<10))
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_qp_mode(data)                            (0x00000300&((data)<<8))
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_dic_mode_en(data)                        (0x00000080&((data)<<7))
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_two_line_prediction_en(data)                 (0x00000040&((data)<<6))
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_line_mode(data)                          (0x00000020&((data)<<5))
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_data_color(data)                         (0x00000010&((data)<<4))
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_data_bit_width(data)                     (0x0000000C&((data)<<2))
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_cmp_data_format(data)                        (0x00000003&(data))
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_get_cmp_line_sum_bit(data)                   ((0xFFFF0000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_get_cmp_400_old_mode_en(data)                ((0x00008000&(data))>>15)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_get_dummy_14_11(data)                        ((0x00007800&(data))>>11)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_get_cmp_jump4_en(data)                       ((0x00000400&(data))>>10)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_get_cmp_qp_mode(data)                        ((0x00000300&(data))>>8)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_get_cmp_dic_mode_en(data)                    ((0x00000080&(data))>>7)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_get_two_line_prediction_en(data)             ((0x00000040&(data))>>6)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_get_cmp_line_mode(data)                      ((0x00000020&(data))>>5)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_get_cmp_data_color(data)                     ((0x00000010&(data))>>4)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_get_cmp_data_bit_width(data)                 ((0x0000000C&(data))>>2)
#define  PQC_PQDC_MC_LF_PQ_CMP_PAIR_get_cmp_data_format(data)                    (0x00000003&(data))

#define  PQC_PQDC_MC_LF_PQ_CMP_BIT                                              0x18099208
#define  PQC_PQDC_MC_LF_PQ_CMP_BIT_reg_addr                                      "0xB8099208"
#define  PQC_PQDC_MC_LF_PQ_CMP_BIT_reg                                           0xB8099208
#define  PQC_PQDC_MC_LF_PQ_CMP_BIT_inst_addr                                     "0x0002"
#define  set_PQC_PQDC_MC_LF_PQ_CMP_BIT_reg(data)                                 (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_BIT_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_CMP_BIT_reg                                       (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_BIT_reg))
#define  PQC_PQDC_MC_LF_PQ_CMP_BIT_first_line_more_bit_shift                     (24)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIT_block_limit_bit_shift                         (16)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIT_line_limit_bit_shift                          (8)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIT_frame_limit_bit_shift                         (0)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIT_first_line_more_bit_mask                      (0x3F000000)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIT_block_limit_bit_mask                          (0x003F0000)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIT_line_limit_bit_mask                           (0x00003F00)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIT_frame_limit_bit_mask                          (0x0000003F)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIT_first_line_more_bit(data)                     (0x3F000000&((data)<<24))
#define  PQC_PQDC_MC_LF_PQ_CMP_BIT_block_limit_bit(data)                         (0x003F0000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_CMP_BIT_line_limit_bit(data)                          (0x00003F00&((data)<<8))
#define  PQC_PQDC_MC_LF_PQ_CMP_BIT_frame_limit_bit(data)                         (0x0000003F&(data))
#define  PQC_PQDC_MC_LF_PQ_CMP_BIT_get_first_line_more_bit(data)                 ((0x3F000000&(data))>>24)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIT_get_block_limit_bit(data)                     ((0x003F0000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIT_get_line_limit_bit(data)                      ((0x00003F00&(data))>>8)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIT_get_frame_limit_bit(data)                     (0x0000003F&(data))

#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE                                           0x1809920C
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_reg_addr                                   "0xB809920C"
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_reg                                        0xB809920C
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_inst_addr                                  "0x0003"
#define  set_PQC_PQDC_MC_LF_PQ_CMP_ENABLE_reg(data)                              (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_ENABLE_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_CMP_ENABLE_reg                                    (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_ENABLE_reg))
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_input_fifo_pause_cycle_shift               (28)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_tail_dummy_throughput_shift                (27)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_first_predict_nc_mode_shift                (26)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_g_ratio_shift                              (16)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_add_last2blk_over_curve_bit_shift          (15)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_variation_maxmin_en_shift                  (14)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_dynamic_sum_line_rst_shift                 (13)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_blk0_add_en_shift                          (12)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_guarantee_max_qp_en_shift                  (11)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_dynamic_allocate_ratio_en_shift            (10)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_poor_limit_min_qp_en_shift                 (9)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_balance_en_shift                           (8)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_fisrt_line_more_en_shift                   (7)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_blk0_add_half_en_shift                     (6)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_do_422_mode_shift                          (4)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_first_predict_nc_en_shift                  (3)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_not_enough_bit_do_422_en_shift             (2)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_not_rich_do_422_en_shift                   (1)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_rb_lossy_do_422_en_shift                   (0)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_input_fifo_pause_cycle_mask                (0xF0000000)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_tail_dummy_throughput_mask                 (0x08000000)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_first_predict_nc_mode_mask                 (0x04000000)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_g_ratio_mask                               (0x001F0000)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_add_last2blk_over_curve_bit_mask           (0x00008000)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_variation_maxmin_en_mask                   (0x00004000)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_dynamic_sum_line_rst_mask                  (0x00002000)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_blk0_add_en_mask                           (0x00001000)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_guarantee_max_qp_en_mask                   (0x00000800)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_dynamic_allocate_ratio_en_mask             (0x00000400)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_poor_limit_min_qp_en_mask                  (0x00000200)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_balance_en_mask                            (0x00000100)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_fisrt_line_more_en_mask                    (0x00000080)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_blk0_add_half_en_mask                      (0x00000040)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_do_422_mode_mask                           (0x00000030)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_first_predict_nc_en_mask                   (0x00000008)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_not_enough_bit_do_422_en_mask              (0x00000004)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_not_rich_do_422_en_mask                    (0x00000002)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_rb_lossy_do_422_en_mask                    (0x00000001)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_input_fifo_pause_cycle(data)               (0xF0000000&((data)<<28))
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_tail_dummy_throughput(data)                (0x08000000&((data)<<27))
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_first_predict_nc_mode(data)                (0x04000000&((data)<<26))
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_g_ratio(data)                              (0x001F0000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_add_last2blk_over_curve_bit(data)          (0x00008000&((data)<<15))
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_variation_maxmin_en(data)                  (0x00004000&((data)<<14))
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_dynamic_sum_line_rst(data)                 (0x00002000&((data)<<13))
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_blk0_add_en(data)                          (0x00001000&((data)<<12))
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_guarantee_max_qp_en(data)                  (0x00000800&((data)<<11))
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_dynamic_allocate_ratio_en(data)            (0x00000400&((data)<<10))
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_poor_limit_min_qp_en(data)                 (0x00000200&((data)<<9))
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_balance_en(data)                           (0x00000100&((data)<<8))
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_fisrt_line_more_en(data)                   (0x00000080&((data)<<7))
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_blk0_add_half_en(data)                     (0x00000040&((data)<<6))
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_do_422_mode(data)                          (0x00000030&((data)<<4))
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_first_predict_nc_en(data)                  (0x00000008&((data)<<3))
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_not_enough_bit_do_422_en(data)             (0x00000004&((data)<<2))
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_not_rich_do_422_en(data)                   (0x00000002&((data)<<1))
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_rb_lossy_do_422_en(data)                   (0x00000001&(data))
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_get_input_fifo_pause_cycle(data)           ((0xF0000000&(data))>>28)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_get_tail_dummy_throughput(data)            ((0x08000000&(data))>>27)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_get_first_predict_nc_mode(data)            ((0x04000000&(data))>>26)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_get_g_ratio(data)                          ((0x001F0000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_get_add_last2blk_over_curve_bit(data)      ((0x00008000&(data))>>15)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_get_variation_maxmin_en(data)              ((0x00004000&(data))>>14)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_get_dynamic_sum_line_rst(data)             ((0x00002000&(data))>>13)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_get_blk0_add_en(data)                      ((0x00001000&(data))>>12)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_get_guarantee_max_qp_en(data)              ((0x00000800&(data))>>11)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_get_dynamic_allocate_ratio_en(data)        ((0x00000400&(data))>>10)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_get_poor_limit_min_qp_en(data)             ((0x00000200&(data))>>9)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_get_balance_en(data)                       ((0x00000100&(data))>>8)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_get_fisrt_line_more_en(data)               ((0x00000080&(data))>>7)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_get_blk0_add_half_en(data)                 ((0x00000040&(data))>>6)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_get_do_422_mode(data)                      ((0x00000030&(data))>>4)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_get_first_predict_nc_en(data)              ((0x00000008&(data))>>3)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_get_not_enough_bit_do_422_en(data)         ((0x00000004&(data))>>2)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_get_not_rich_do_422_en(data)               ((0x00000002&(data))>>1)
#define  PQC_PQDC_MC_LF_PQ_CMP_ENABLE_get_rb_lossy_do_422_en(data)               (0x00000001&(data))

#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH                                           0x18099210
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_reg_addr                                   "0xB8099210"
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_reg                                        0xB8099210
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_inst_addr                                  "0x0004"
#define  set_PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_reg(data)                              (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_reg                                    (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_reg))
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_dic_mode_option_shift                      (28)
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_not_enough_bit_do_422_qp_shift             (24)
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_not_rich_do_422_th_shift                   (20)
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_rb_lossy_do_422_qp_level_shift             (16)
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_dic_mode_entry_th_shift                    (12)
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_variation_value_th_shift                   (8)
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_variation_num_th_shift                     (4)
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_variation_near_num_th_shift                (0)
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_dic_mode_option_mask                       (0xF0000000)
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_not_enough_bit_do_422_qp_mask              (0x07000000)
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_not_rich_do_422_th_mask                    (0x00F00000)
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_rb_lossy_do_422_qp_level_mask              (0x00070000)
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_dic_mode_entry_th_mask                     (0x0000F000)
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_variation_value_th_mask                    (0x00000F00)
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_variation_num_th_mask                      (0x00000070)
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_variation_near_num_th_mask                 (0x00000007)
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_dic_mode_option(data)                      (0xF0000000&((data)<<28))
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_not_enough_bit_do_422_qp(data)             (0x07000000&((data)<<24))
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_not_rich_do_422_th(data)                   (0x00F00000&((data)<<20))
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_rb_lossy_do_422_qp_level(data)             (0x00070000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_dic_mode_entry_th(data)                    (0x0000F000&((data)<<12))
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_variation_value_th(data)                   (0x00000F00&((data)<<8))
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_variation_num_th(data)                     (0x00000070&((data)<<4))
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_variation_near_num_th(data)                (0x00000007&(data))
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_get_dic_mode_option(data)                  ((0xF0000000&(data))>>28)
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_get_not_enough_bit_do_422_qp(data)         ((0x07000000&(data))>>24)
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_get_not_rich_do_422_th(data)               ((0x00F00000&(data))>>20)
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_get_rb_lossy_do_422_qp_level(data)         ((0x00070000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_get_dic_mode_entry_th(data)                ((0x0000F000&(data))>>12)
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_get_variation_value_th(data)               ((0x00000F00&(data))>>8)
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_get_variation_num_th(data)                 ((0x00000070&(data))>>4)
#define  PQC_PQDC_MC_LF_PQ_CMP_SMOOTH_get_variation_near_num_th(data)            (0x00000007&(data))

#define  PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE                                         0x18099214
#define  PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_reg_addr                                 "0xB8099214"
#define  PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_reg                                      0xB8099214
#define  PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_inst_addr                                "0x0005"
#define  set_PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_reg(data)                            (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_reg                                  (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_reg))
#define  PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_max_shift         (24)
#define  PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_min_shift         (16)
#define  PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_dynamic_allocate_line_shift              (8)
#define  PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_dynamic_allocate_more_shift              (4)
#define  PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_dynamic_allocate_less_shift              (0)
#define  PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_max_mask          (0x1F000000)
#define  PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_min_mask          (0x001F0000)
#define  PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_dynamic_allocate_line_mask               (0x00000700)
#define  PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_dynamic_allocate_more_mask               (0x000000F0)
#define  PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_dynamic_allocate_less_mask               (0x0000000F)
#define  PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_max(data)         (0x1F000000&((data)<<24))
#define  PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_min(data)         (0x001F0000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_dynamic_allocate_line(data)              (0x00000700&((data)<<8))
#define  PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_dynamic_allocate_more(data)              (0x000000F0&((data)<<4))
#define  PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_dynamic_allocate_less(data)              (0x0000000F&(data))
#define  PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_get_dynamic_allocate_ratio_max(data)     ((0x1F000000&(data))>>24)
#define  PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_get_dynamic_allocate_ratio_min(data)     ((0x001F0000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_get_dynamic_allocate_line(data)          ((0x00000700&(data))>>8)
#define  PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_get_dynamic_allocate_more(data)          ((0x000000F0&(data))>>4)
#define  PQC_PQDC_MC_LF_PQ_CMP_ALLOCATE_get_dynamic_allocate_less(data)          (0x0000000F&(data))

#define  PQC_PQDC_MC_LF_PQ_CMP_POOR                                             0x18099218
#define  PQC_PQDC_MC_LF_PQ_CMP_POOR_reg_addr                                     "0xB8099218"
#define  PQC_PQDC_MC_LF_PQ_CMP_POOR_reg                                          0xB8099218
#define  PQC_PQDC_MC_LF_PQ_CMP_POOR_inst_addr                                    "0x0006"
#define  set_PQC_PQDC_MC_LF_PQ_CMP_POOR_reg(data)                                (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_POOR_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_CMP_POOR_reg                                      (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_POOR_reg))
#define  PQC_PQDC_MC_LF_PQ_CMP_POOR_poor_limit_th_qp4_shift                      (24)
#define  PQC_PQDC_MC_LF_PQ_CMP_POOR_poor_limit_th_qp3_shift                      (16)
#define  PQC_PQDC_MC_LF_PQ_CMP_POOR_poor_limit_th_qp2_shift                      (8)
#define  PQC_PQDC_MC_LF_PQ_CMP_POOR_poor_limit_th_qp1_shift                      (0)
#define  PQC_PQDC_MC_LF_PQ_CMP_POOR_poor_limit_th_qp4_mask                       (0x1F000000)
#define  PQC_PQDC_MC_LF_PQ_CMP_POOR_poor_limit_th_qp3_mask                       (0x001F0000)
#define  PQC_PQDC_MC_LF_PQ_CMP_POOR_poor_limit_th_qp2_mask                       (0x00001F00)
#define  PQC_PQDC_MC_LF_PQ_CMP_POOR_poor_limit_th_qp1_mask                       (0x0000001F)
#define  PQC_PQDC_MC_LF_PQ_CMP_POOR_poor_limit_th_qp4(data)                      (0x1F000000&((data)<<24))
#define  PQC_PQDC_MC_LF_PQ_CMP_POOR_poor_limit_th_qp3(data)                      (0x001F0000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_CMP_POOR_poor_limit_th_qp2(data)                      (0x00001F00&((data)<<8))
#define  PQC_PQDC_MC_LF_PQ_CMP_POOR_poor_limit_th_qp1(data)                      (0x0000001F&(data))
#define  PQC_PQDC_MC_LF_PQ_CMP_POOR_get_poor_limit_th_qp4(data)                  ((0x1F000000&(data))>>24)
#define  PQC_PQDC_MC_LF_PQ_CMP_POOR_get_poor_limit_th_qp3(data)                  ((0x001F0000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_CMP_POOR_get_poor_limit_th_qp2(data)                  ((0x00001F00&(data))>>8)
#define  PQC_PQDC_MC_LF_PQ_CMP_POOR_get_poor_limit_th_qp1(data)                  (0x0000001F&(data))

#define  PQC_PQDC_MC_LF_PQ_CMP_Guarantee                                        0x1809921C
#define  PQC_PQDC_MC_LF_PQ_CMP_Guarantee_reg_addr                                "0xB809921C"
#define  PQC_PQDC_MC_LF_PQ_CMP_Guarantee_reg                                     0xB809921C
#define  PQC_PQDC_MC_LF_PQ_CMP_Guarantee_inst_addr                               "0x0007"
#define  set_PQC_PQDC_MC_LF_PQ_CMP_Guarantee_reg(data)                           (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_Guarantee_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_CMP_Guarantee_reg                                 (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_Guarantee_reg))
#define  PQC_PQDC_MC_LF_PQ_CMP_Guarantee_cmp_crc_ro_line_sel_shift               (16)
#define  PQC_PQDC_MC_LF_PQ_CMP_Guarantee_dic_mode_qp_th_rb_shift                 (12)
#define  PQC_PQDC_MC_LF_PQ_CMP_Guarantee_dic_mode_qp_th_g_shift                  (8)
#define  PQC_PQDC_MC_LF_PQ_CMP_Guarantee_guarantee_max_rb_qp_shift               (4)
#define  PQC_PQDC_MC_LF_PQ_CMP_Guarantee_guarantee_max_g_qp_shift                (0)
#define  PQC_PQDC_MC_LF_PQ_CMP_Guarantee_cmp_crc_ro_line_sel_mask                (0x3FFF0000)
#define  PQC_PQDC_MC_LF_PQ_CMP_Guarantee_dic_mode_qp_th_rb_mask                  (0x0000F000)
#define  PQC_PQDC_MC_LF_PQ_CMP_Guarantee_dic_mode_qp_th_g_mask                   (0x00000F00)
#define  PQC_PQDC_MC_LF_PQ_CMP_Guarantee_guarantee_max_rb_qp_mask                (0x000000F0)
#define  PQC_PQDC_MC_LF_PQ_CMP_Guarantee_guarantee_max_g_qp_mask                 (0x0000000F)
#define  PQC_PQDC_MC_LF_PQ_CMP_Guarantee_cmp_crc_ro_line_sel(data)               (0x3FFF0000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_CMP_Guarantee_dic_mode_qp_th_rb(data)                 (0x0000F000&((data)<<12))
#define  PQC_PQDC_MC_LF_PQ_CMP_Guarantee_dic_mode_qp_th_g(data)                  (0x00000F00&((data)<<8))
#define  PQC_PQDC_MC_LF_PQ_CMP_Guarantee_guarantee_max_rb_qp(data)               (0x000000F0&((data)<<4))
#define  PQC_PQDC_MC_LF_PQ_CMP_Guarantee_guarantee_max_g_qp(data)                (0x0000000F&(data))
#define  PQC_PQDC_MC_LF_PQ_CMP_Guarantee_get_cmp_crc_ro_line_sel(data)           ((0x3FFF0000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_CMP_Guarantee_get_dic_mode_qp_th_rb(data)             ((0x0000F000&(data))>>12)
#define  PQC_PQDC_MC_LF_PQ_CMP_Guarantee_get_dic_mode_qp_th_g(data)              ((0x00000F00&(data))>>8)
#define  PQC_PQDC_MC_LF_PQ_CMP_Guarantee_get_guarantee_max_rb_qp(data)           ((0x000000F0&(data))>>4)
#define  PQC_PQDC_MC_LF_PQ_CMP_Guarantee_get_guarantee_max_g_qp(data)            (0x0000000F&(data))

#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE                                          0x18099220
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_reg_addr                                  "0xB8099220"
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_reg                                       0xB8099220
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_inst_addr                                 "0x0008"
#define  set_PQC_PQDC_MC_LF_PQ_CMP_BALANCE_reg(data)                             (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_BALANCE_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_CMP_BALANCE_reg                                   (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_BALANCE_reg))
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_variation_maxmin_th2_shift                (24)
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_variation_maxmin_th_shift                 (16)
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_balance_rb_ov_th_shift                    (12)
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_balance_rb_ud_th_shift                    (10)
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_balance_rb_give_shift                     (8)
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_balance_g_ov_th_shift                     (4)
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_balance_g_ud_th_shift                     (2)
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_balance_g_give_shift                      (0)
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_variation_maxmin_th2_mask                 (0xFF000000)
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_variation_maxmin_th_mask                  (0x00FF0000)
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_balance_rb_ov_th_mask                     (0x00003000)
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_balance_rb_ud_th_mask                     (0x00000C00)
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_balance_rb_give_mask                      (0x00000300)
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_balance_g_ov_th_mask                      (0x00000030)
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_balance_g_ud_th_mask                      (0x0000000C)
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_balance_g_give_mask                       (0x00000003)
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_variation_maxmin_th2(data)                (0xFF000000&((data)<<24))
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_variation_maxmin_th(data)                 (0x00FF0000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_balance_rb_ov_th(data)                    (0x00003000&((data)<<12))
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_balance_rb_ud_th(data)                    (0x00000C00&((data)<<10))
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_balance_rb_give(data)                     (0x00000300&((data)<<8))
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_balance_g_ov_th(data)                     (0x00000030&((data)<<4))
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_balance_g_ud_th(data)                     (0x0000000C&((data)<<2))
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_balance_g_give(data)                      (0x00000003&(data))
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_get_variation_maxmin_th2(data)            ((0xFF000000&(data))>>24)
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_get_variation_maxmin_th(data)             ((0x00FF0000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_get_balance_rb_ov_th(data)                ((0x00003000&(data))>>12)
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_get_balance_rb_ud_th(data)                ((0x00000C00&(data))>>10)
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_get_balance_rb_give(data)                 ((0x00000300&(data))>>8)
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_get_balance_g_ov_th(data)                 ((0x00000030&(data))>>4)
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_get_balance_g_ud_th(data)                 ((0x0000000C&(data))>>2)
#define  PQC_PQDC_MC_LF_PQ_CMP_BALANCE_get_balance_g_give(data)                  (0x00000003&(data))

#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN                                           0x18099224
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_reg_addr                                   "0xB8099224"
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_reg                                        0xB8099224
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_inst_addr                                  "0x0009"
#define  set_PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_reg(data)                              (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_reg                                    (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_reg))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_prs_over_line_sum_bit_irq_en_shift         (18)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_tail_fifo_overflow_irq_en_shift            (17)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_input_fifo_overflow_irq_en_shift           (16)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_block_fifo_overflow_irq_en_shift           (15)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_input_size_more_irq_en_shift               (14)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_input_size_less_irq_en_shift               (13)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_over_flb_irq_en_shift                      (12)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_request_fifo_even_overflow_irq_en_shift    (9)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_g_fifo_even_overflow_irq_en_shift          (6)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_r_fifo_even_overflow_irq_en_shift          (5)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_b_fifo_even_overflow_irq_en_shift          (4)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_prs_over_line_sum_bit_irq_en_mask          (0x00040000)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_tail_fifo_overflow_irq_en_mask             (0x00020000)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_input_fifo_overflow_irq_en_mask            (0x00010000)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_block_fifo_overflow_irq_en_mask            (0x00008000)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_input_size_more_irq_en_mask                (0x00004000)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_input_size_less_irq_en_mask                (0x00002000)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_over_flb_irq_en_mask                       (0x00001000)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_request_fifo_even_overflow_irq_en_mask     (0x00000200)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_g_fifo_even_overflow_irq_en_mask           (0x00000040)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_r_fifo_even_overflow_irq_en_mask           (0x00000020)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_b_fifo_even_overflow_irq_en_mask           (0x00000010)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_prs_over_line_sum_bit_irq_en(data)         (0x00040000&((data)<<18))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_tail_fifo_overflow_irq_en(data)            (0x00020000&((data)<<17))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_input_fifo_overflow_irq_en(data)           (0x00010000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_block_fifo_overflow_irq_en(data)           (0x00008000&((data)<<15))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_input_size_more_irq_en(data)               (0x00004000&((data)<<14))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_input_size_less_irq_en(data)               (0x00002000&((data)<<13))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_over_flb_irq_en(data)                      (0x00001000&((data)<<12))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_request_fifo_even_overflow_irq_en(data)    (0x00000200&((data)<<9))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_g_fifo_even_overflow_irq_en(data)          (0x00000040&((data)<<6))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_r_fifo_even_overflow_irq_en(data)          (0x00000020&((data)<<5))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_b_fifo_even_overflow_irq_en(data)          (0x00000010&((data)<<4))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_get_prs_over_line_sum_bit_irq_en(data)     ((0x00040000&(data))>>18)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_get_tail_fifo_overflow_irq_en(data)        ((0x00020000&(data))>>17)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_get_input_fifo_overflow_irq_en(data)       ((0x00010000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_get_block_fifo_overflow_irq_en(data)       ((0x00008000&(data))>>15)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_get_input_size_more_irq_en(data)           ((0x00004000&(data))>>14)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_get_input_size_less_irq_en(data)           ((0x00002000&(data))>>13)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_get_over_flb_irq_en(data)                  ((0x00001000&(data))>>12)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_get_request_fifo_even_overflow_irq_en(data) ((0x00000200&(data))>>9)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_get_g_fifo_even_overflow_irq_en(data)      ((0x00000040&(data))>>6)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_get_r_fifo_even_overflow_irq_en(data)      ((0x00000020&(data))>>5)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_EN_get_b_fifo_even_overflow_irq_en(data)      ((0x00000010&(data))>>4)

#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST                                           0x18099228
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_reg_addr                                   "0xB8099228"
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_reg                                        0xB8099228
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_inst_addr                                  "0x000A"
#define  set_PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_reg(data)                              (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_reg                                    (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_reg))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_pqc_irq_shift                              (31)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_prs_over_line_sum_bit_st_shift             (18)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_tail_fifo_overflow_st_shift                (17)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_input_fifo_overflow_st_shift               (16)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_block_fifo_overflow_st_shift               (15)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_input_size_more_st_shift                   (14)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_input_size_less_st_shift                   (13)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_over_flb_st_shift                          (12)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_request_fifo_even_overflow_st_shift        (9)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_g_fifo_even_overflow_st_shift              (6)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_r_fifo_even_overflow_st_shift              (5)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_b_fifo_even_overflow_st_shift              (4)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_pqc_irq_mask                               (0x80000000)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_prs_over_line_sum_bit_st_mask              (0x00040000)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_tail_fifo_overflow_st_mask                 (0x00020000)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_input_fifo_overflow_st_mask                (0x00010000)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_block_fifo_overflow_st_mask                (0x00008000)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_input_size_more_st_mask                    (0x00004000)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_input_size_less_st_mask                    (0x00002000)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_over_flb_st_mask                           (0x00001000)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_request_fifo_even_overflow_st_mask         (0x00000200)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_g_fifo_even_overflow_st_mask               (0x00000040)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_r_fifo_even_overflow_st_mask               (0x00000020)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_b_fifo_even_overflow_st_mask               (0x00000010)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_pqc_irq(data)                              (0x80000000&((data)<<31))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_prs_over_line_sum_bit_st(data)             (0x00040000&((data)<<18))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_tail_fifo_overflow_st(data)                (0x00020000&((data)<<17))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_input_fifo_overflow_st(data)               (0x00010000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_block_fifo_overflow_st(data)               (0x00008000&((data)<<15))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_input_size_more_st(data)                   (0x00004000&((data)<<14))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_input_size_less_st(data)                   (0x00002000&((data)<<13))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_over_flb_st(data)                          (0x00001000&((data)<<12))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_request_fifo_even_overflow_st(data)        (0x00000200&((data)<<9))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_g_fifo_even_overflow_st(data)              (0x00000040&((data)<<6))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_r_fifo_even_overflow_st(data)              (0x00000020&((data)<<5))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_b_fifo_even_overflow_st(data)              (0x00000010&((data)<<4))
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_get_pqc_irq(data)                          ((0x80000000&(data))>>31)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_get_prs_over_line_sum_bit_st(data)         ((0x00040000&(data))>>18)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_get_tail_fifo_overflow_st(data)            ((0x00020000&(data))>>17)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_get_input_fifo_overflow_st(data)           ((0x00010000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_get_block_fifo_overflow_st(data)           ((0x00008000&(data))>>15)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_get_input_size_more_st(data)               ((0x00004000&(data))>>14)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_get_input_size_less_st(data)               ((0x00002000&(data))>>13)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_get_over_flb_st(data)                      ((0x00001000&(data))>>12)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_get_request_fifo_even_overflow_st(data)    ((0x00000200&(data))>>9)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_get_g_fifo_even_overflow_st(data)          ((0x00000040&(data))>>6)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_get_r_fifo_even_overflow_st(data)          ((0x00000020&(data))>>5)
#define  PQC_PQDC_MC_LF_PQ_CMP_IRQ_ST_get_b_fifo_even_overflow_st(data)          ((0x00000010&(data))>>4)

#define  PQC_PQDC_MC_LF_PQ_CMP_ST                                               0x1809922C
#define  PQC_PQDC_MC_LF_PQ_CMP_ST_reg_addr                                       "0xB809922C"
#define  PQC_PQDC_MC_LF_PQ_CMP_ST_reg                                            0xB809922C
#define  PQC_PQDC_MC_LF_PQ_CMP_ST_inst_addr                                      "0x000B"
#define  set_PQC_PQDC_MC_LF_PQ_CMP_ST_reg(data)                                  (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_ST_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_CMP_ST_reg                                        (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_ST_reg))
#define  PQC_PQDC_MC_LF_PQ_CMP_ST_g_ratio_max_shift                              (24)
#define  PQC_PQDC_MC_LF_PQ_CMP_ST_g_ratio_min_shift                              (16)
#define  PQC_PQDC_MC_LF_PQ_CMP_ST_cmp_package_height_cnt_shift                   (0)
#define  PQC_PQDC_MC_LF_PQ_CMP_ST_g_ratio_max_mask                               (0x1F000000)
#define  PQC_PQDC_MC_LF_PQ_CMP_ST_g_ratio_min_mask                               (0x001F0000)
#define  PQC_PQDC_MC_LF_PQ_CMP_ST_cmp_package_height_cnt_mask                    (0x00003FFF)
#define  PQC_PQDC_MC_LF_PQ_CMP_ST_g_ratio_max(data)                              (0x1F000000&((data)<<24))
#define  PQC_PQDC_MC_LF_PQ_CMP_ST_g_ratio_min(data)                              (0x001F0000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_CMP_ST_cmp_package_height_cnt(data)                   (0x00003FFF&(data))
#define  PQC_PQDC_MC_LF_PQ_CMP_ST_get_g_ratio_max(data)                          ((0x1F000000&(data))>>24)
#define  PQC_PQDC_MC_LF_PQ_CMP_ST_get_g_ratio_min(data)                          ((0x001F0000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_CMP_ST_get_cmp_package_height_cnt(data)               (0x00003FFF&(data))

#define  PQC_PQDC_MC_LF_PQ_CMP_QP_ST                                            0x18099230
#define  PQC_PQDC_MC_LF_PQ_CMP_QP_ST_reg_addr                                    "0xB8099230"
#define  PQC_PQDC_MC_LF_PQ_CMP_QP_ST_reg                                         0xB8099230
#define  PQC_PQDC_MC_LF_PQ_CMP_QP_ST_inst_addr                                   "0x000C"
#define  set_PQC_PQDC_MC_LF_PQ_CMP_QP_ST_reg(data)                               (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_QP_ST_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_CMP_QP_ST_reg                                     (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_QP_ST_reg))
#define  PQC_PQDC_MC_LF_PQ_CMP_QP_ST_long_term_qp_measure_en_shift               (31)
#define  PQC_PQDC_MC_LF_PQ_CMP_QP_ST_long_term_g_qp_max_shift                    (20)
#define  PQC_PQDC_MC_LF_PQ_CMP_QP_ST_long_term_rb_qp_max_shift                   (16)
#define  PQC_PQDC_MC_LF_PQ_CMP_QP_ST_short_term_g_qp_max_shift                   (4)
#define  PQC_PQDC_MC_LF_PQ_CMP_QP_ST_short_term_rb_qp_max_shift                  (0)
#define  PQC_PQDC_MC_LF_PQ_CMP_QP_ST_long_term_qp_measure_en_mask                (0x80000000)
#define  PQC_PQDC_MC_LF_PQ_CMP_QP_ST_long_term_g_qp_max_mask                     (0x00F00000)
#define  PQC_PQDC_MC_LF_PQ_CMP_QP_ST_long_term_rb_qp_max_mask                    (0x000F0000)
#define  PQC_PQDC_MC_LF_PQ_CMP_QP_ST_short_term_g_qp_max_mask                    (0x000000F0)
#define  PQC_PQDC_MC_LF_PQ_CMP_QP_ST_short_term_rb_qp_max_mask                   (0x0000000F)
#define  PQC_PQDC_MC_LF_PQ_CMP_QP_ST_long_term_qp_measure_en(data)               (0x80000000&((data)<<31))
#define  PQC_PQDC_MC_LF_PQ_CMP_QP_ST_long_term_g_qp_max(data)                    (0x00F00000&((data)<<20))
#define  PQC_PQDC_MC_LF_PQ_CMP_QP_ST_long_term_rb_qp_max(data)                   (0x000F0000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_CMP_QP_ST_short_term_g_qp_max(data)                   (0x000000F0&((data)<<4))
#define  PQC_PQDC_MC_LF_PQ_CMP_QP_ST_short_term_rb_qp_max(data)                  (0x0000000F&(data))
#define  PQC_PQDC_MC_LF_PQ_CMP_QP_ST_get_long_term_qp_measure_en(data)           ((0x80000000&(data))>>31)
#define  PQC_PQDC_MC_LF_PQ_CMP_QP_ST_get_long_term_g_qp_max(data)                ((0x00F00000&(data))>>20)
#define  PQC_PQDC_MC_LF_PQ_CMP_QP_ST_get_long_term_rb_qp_max(data)               ((0x000F0000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_CMP_QP_ST_get_short_term_g_qp_max(data)               ((0x000000F0&(data))>>4)
#define  PQC_PQDC_MC_LF_PQ_CMP_QP_ST_get_short_term_rb_qp_max(data)              (0x0000000F&(data))

#define  PQC_PQDC_MC_LF_PQ_CMP_FIFO_ST1                                         0x18099234
#define  PQC_PQDC_MC_LF_PQ_CMP_FIFO_ST1_reg_addr                                 "0xB8099234"
#define  PQC_PQDC_MC_LF_PQ_CMP_FIFO_ST1_reg                                      0xB8099234
#define  PQC_PQDC_MC_LF_PQ_CMP_FIFO_ST1_inst_addr                                "0x000D"
#define  set_PQC_PQDC_MC_LF_PQ_CMP_FIFO_ST1_reg(data)                            (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_FIFO_ST1_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_CMP_FIFO_ST1_reg                                  (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_FIFO_ST1_reg))
#define  PQC_PQDC_MC_LF_PQ_CMP_FIFO_ST1_fifo_water_measure_en_shift              (31)
#define  PQC_PQDC_MC_LF_PQ_CMP_FIFO_ST1_fifo_water_even_g_shift                  (16)
#define  PQC_PQDC_MC_LF_PQ_CMP_FIFO_ST1_fifo_water_even_r_shift                  (8)
#define  PQC_PQDC_MC_LF_PQ_CMP_FIFO_ST1_fifo_water_even_b_shift                  (0)
#define  PQC_PQDC_MC_LF_PQ_CMP_FIFO_ST1_fifo_water_measure_en_mask               (0x80000000)
#define  PQC_PQDC_MC_LF_PQ_CMP_FIFO_ST1_fifo_water_even_g_mask                   (0x00FF0000)
#define  PQC_PQDC_MC_LF_PQ_CMP_FIFO_ST1_fifo_water_even_r_mask                   (0x0000FF00)
#define  PQC_PQDC_MC_LF_PQ_CMP_FIFO_ST1_fifo_water_even_b_mask                   (0x000000FF)
#define  PQC_PQDC_MC_LF_PQ_CMP_FIFO_ST1_fifo_water_measure_en(data)              (0x80000000&((data)<<31))
#define  PQC_PQDC_MC_LF_PQ_CMP_FIFO_ST1_fifo_water_even_g(data)                  (0x00FF0000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_CMP_FIFO_ST1_fifo_water_even_r(data)                  (0x0000FF00&((data)<<8))
#define  PQC_PQDC_MC_LF_PQ_CMP_FIFO_ST1_fifo_water_even_b(data)                  (0x000000FF&(data))
#define  PQC_PQDC_MC_LF_PQ_CMP_FIFO_ST1_get_fifo_water_measure_en(data)          ((0x80000000&(data))>>31)
#define  PQC_PQDC_MC_LF_PQ_CMP_FIFO_ST1_get_fifo_water_even_g(data)              ((0x00FF0000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_CMP_FIFO_ST1_get_fifo_water_even_r(data)              ((0x0000FF00&(data))>>8)
#define  PQC_PQDC_MC_LF_PQ_CMP_FIFO_ST1_get_fifo_water_even_b(data)              (0x000000FF&(data))

#define  PQC_PQDC_MC_LF_PQ_CMP_LEFT_ST                                          0x1809923C
#define  PQC_PQDC_MC_LF_PQ_CMP_LEFT_ST_reg_addr                                  "0xB809923C"
#define  PQC_PQDC_MC_LF_PQ_CMP_LEFT_ST_reg                                       0xB809923C
#define  PQC_PQDC_MC_LF_PQ_CMP_LEFT_ST_inst_addr                                 "0x000E"
#define  set_PQC_PQDC_MC_LF_PQ_CMP_LEFT_ST_reg(data)                             (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_LEFT_ST_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_CMP_LEFT_ST_reg                                   (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_LEFT_ST_reg))
#define  PQC_PQDC_MC_LF_PQ_CMP_LEFT_ST_g_frame_left_shift                        (16)
#define  PQC_PQDC_MC_LF_PQ_CMP_LEFT_ST_rb_frame_left_shift                       (0)
#define  PQC_PQDC_MC_LF_PQ_CMP_LEFT_ST_g_frame_left_mask                         (0xFFFF0000)
#define  PQC_PQDC_MC_LF_PQ_CMP_LEFT_ST_rb_frame_left_mask                        (0x0000FFFF)
#define  PQC_PQDC_MC_LF_PQ_CMP_LEFT_ST_g_frame_left(data)                        (0xFFFF0000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_CMP_LEFT_ST_rb_frame_left(data)                       (0x0000FFFF&(data))
#define  PQC_PQDC_MC_LF_PQ_CMP_LEFT_ST_get_g_frame_left(data)                    ((0xFFFF0000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_CMP_LEFT_ST_get_rb_frame_left(data)                   (0x0000FFFF&(data))

#define  PQC_PQDC_MC_LF_PQ_CMP_PACKAGE_ST                                       0x18099240
#define  PQC_PQDC_MC_LF_PQ_CMP_PACKAGE_ST_reg_addr                               "0xB8099240"
#define  PQC_PQDC_MC_LF_PQ_CMP_PACKAGE_ST_reg                                    0xB8099240
#define  PQC_PQDC_MC_LF_PQ_CMP_PACKAGE_ST_inst_addr                              "0x000F"
#define  set_PQC_PQDC_MC_LF_PQ_CMP_PACKAGE_ST_reg(data)                          (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_PACKAGE_ST_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_CMP_PACKAGE_ST_reg                                (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_PACKAGE_ST_reg))
#define  PQC_PQDC_MC_LF_PQ_CMP_PACKAGE_ST_total_package_long_term_shift          (31)
#define  PQC_PQDC_MC_LF_PQ_CMP_PACKAGE_ST_total_package_even_shift               (0)
#define  PQC_PQDC_MC_LF_PQ_CMP_PACKAGE_ST_total_package_long_term_mask           (0x80000000)
#define  PQC_PQDC_MC_LF_PQ_CMP_PACKAGE_ST_total_package_even_mask                (0x00FFFFFF)
#define  PQC_PQDC_MC_LF_PQ_CMP_PACKAGE_ST_total_package_long_term(data)          (0x80000000&((data)<<31))
#define  PQC_PQDC_MC_LF_PQ_CMP_PACKAGE_ST_total_package_even(data)               (0x00FFFFFF&(data))
#define  PQC_PQDC_MC_LF_PQ_CMP_PACKAGE_ST_get_total_package_long_term(data)      ((0x80000000&(data))>>31)
#define  PQC_PQDC_MC_LF_PQ_CMP_PACKAGE_ST_get_total_package_even(data)           (0x00FFFFFF&(data))

#define  PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_G                                       0x18099244
#define  PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_G_reg_addr                               "0xB8099244"
#define  PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_G_reg                                    0xB8099244
#define  PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_G_inst_addr                              "0x0010"
#define  set_PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_G_reg(data)                          (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_G_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_G_reg                                (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_G_reg))
#define  PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_G_cmp_crc_even_g_shift                   (0)
#define  PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_G_cmp_crc_even_g_mask                    (0xFFFFFFFF)
#define  PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_G_cmp_crc_even_g(data)                   (0xFFFFFFFF&(data))
#define  PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_G_get_cmp_crc_even_g(data)               (0xFFFFFFFF&(data))

#define  PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_R                                       0x18099248
#define  PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_R_reg_addr                               "0xB8099248"
#define  PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_R_reg                                    0xB8099248
#define  PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_R_inst_addr                              "0x0011"
#define  set_PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_R_reg(data)                          (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_R_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_R_reg                                (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_R_reg))
#define  PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_R_cmp_crc_even_r_shift                   (0)
#define  PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_R_cmp_crc_even_r_mask                    (0xFFFFFFFF)
#define  PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_R_cmp_crc_even_r(data)                   (0xFFFFFFFF&(data))
#define  PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_R_get_cmp_crc_even_r(data)               (0xFFFFFFFF&(data))

#define  PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_B                                       0x1809924C
#define  PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_B_reg_addr                               "0xB809924C"
#define  PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_B_reg                                    0xB809924C
#define  PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_B_inst_addr                              "0x0012"
#define  set_PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_B_reg(data)                          (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_B_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_B_reg                                (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_B_reg))
#define  PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_B_cmp_crc_even_b_shift                   (0)
#define  PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_B_cmp_crc_even_b_mask                    (0xFFFFFFFF)
#define  PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_B_cmp_crc_even_b(data)                   (0xFFFFFFFF&(data))
#define  PQC_PQDC_MC_LF_PQ_CMP_CRC_EVEN_B_get_cmp_crc_even_b(data)               (0xFFFFFFFF&(data))

#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD0                                        0x18099260
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD0_reg_addr                                "0xB8099260"
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD0_reg                                     0xB8099260
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD0_inst_addr                               "0x0013"
#define  set_PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD0_reg(data)                           (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD0_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD0_reg                                 (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD0_reg))
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD0_blk0_add_value0_shift                   (24)
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD0_dic_mode_tolerance_shift                (16)
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD0_blk0_add_value32_shift                  (8)
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD0_blk0_add_value16_shift                  (0)
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD0_blk0_add_value0_mask                    (0x3F000000)
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD0_dic_mode_tolerance_mask                 (0x00FF0000)
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD0_blk0_add_value32_mask                   (0x00003F00)
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD0_blk0_add_value16_mask                   (0x0000003F)
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD0_blk0_add_value0(data)                   (0x3F000000&((data)<<24))
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD0_dic_mode_tolerance(data)                (0x00FF0000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD0_blk0_add_value32(data)                  (0x00003F00&((data)<<8))
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD0_blk0_add_value16(data)                  (0x0000003F&(data))
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD0_get_blk0_add_value0(data)               ((0x3F000000&(data))>>24)
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD0_get_dic_mode_tolerance(data)            ((0x00FF0000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD0_get_blk0_add_value32(data)              ((0x00003F00&(data))>>8)
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD0_get_blk0_add_value16(data)              (0x0000003F&(data))

#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD1                                        0x18099264
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD1_reg_addr                                "0xB8099264"
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD1_reg                                     0xB8099264
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD1_inst_addr                               "0x0014"
#define  set_PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD1_reg(data)                           (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD1_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD1_reg                                 (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD1_reg))
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD1_blk0_add_value8_shift                   (24)
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD1_blk0_add_value4_shift                   (16)
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD1_blk0_add_value2_shift                   (8)
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD1_blk0_add_value1_shift                   (0)
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD1_blk0_add_value8_mask                    (0x3F000000)
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD1_blk0_add_value4_mask                    (0x003F0000)
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD1_blk0_add_value2_mask                    (0x00003F00)
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD1_blk0_add_value1_mask                    (0x0000003F)
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD1_blk0_add_value8(data)                   (0x3F000000&((data)<<24))
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD1_blk0_add_value4(data)                   (0x003F0000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD1_blk0_add_value2(data)                   (0x00003F00&((data)<<8))
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD1_blk0_add_value1(data)                   (0x0000003F&(data))
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD1_get_blk0_add_value8(data)               ((0x3F000000&(data))>>24)
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD1_get_blk0_add_value4(data)               ((0x003F0000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD1_get_blk0_add_value2(data)               ((0x00003F00&(data))>>8)
#define  PQC_PQDC_MC_LF_PQ_CMP_BLK0_ADD1_get_blk0_add_value1(data)               (0x0000003F&(data))

#define  PQC_PQDC_MC_PQ_CMP_DB_CTRL                                             0x18099268
#define  PQC_PQDC_MC_PQ_CMP_DB_CTRL_reg_addr                                     "0xB8099268"
#define  PQC_PQDC_MC_PQ_CMP_DB_CTRL_reg                                          0xB8099268
#define  PQC_PQDC_MC_PQ_CMP_DB_CTRL_inst_addr                                    "0x0015"
#define  set_PQC_PQDC_MC_PQ_CMP_DB_CTRL_reg(data)                                (*((volatile unsigned int*)PQC_PQDC_MC_PQ_CMP_DB_CTRL_reg)=data)
#define  get_PQC_PQDC_MC_PQ_CMP_DB_CTRL_reg                                      (*((volatile unsigned int*)PQC_PQDC_MC_PQ_CMP_DB_CTRL_reg))
#define  PQC_PQDC_MC_PQ_CMP_DB_CTRL_cmp_db_apply_shift                           (2)
#define  PQC_PQDC_MC_PQ_CMP_DB_CTRL_cmp_db_rd_sel_shift                          (1)
#define  PQC_PQDC_MC_PQ_CMP_DB_CTRL_cmp_db_en_shift                              (0)
#define  PQC_PQDC_MC_PQ_CMP_DB_CTRL_cmp_db_apply_mask                            (0x00000004)
#define  PQC_PQDC_MC_PQ_CMP_DB_CTRL_cmp_db_rd_sel_mask                           (0x00000002)
#define  PQC_PQDC_MC_PQ_CMP_DB_CTRL_cmp_db_en_mask                               (0x00000001)
#define  PQC_PQDC_MC_PQ_CMP_DB_CTRL_cmp_db_apply(data)                           (0x00000004&((data)<<2))
#define  PQC_PQDC_MC_PQ_CMP_DB_CTRL_cmp_db_rd_sel(data)                          (0x00000002&((data)<<1))
#define  PQC_PQDC_MC_PQ_CMP_DB_CTRL_cmp_db_en(data)                              (0x00000001&(data))
#define  PQC_PQDC_MC_PQ_CMP_DB_CTRL_get_cmp_db_apply(data)                       ((0x00000004&(data))>>2)
#define  PQC_PQDC_MC_PQ_CMP_DB_CTRL_get_cmp_db_rd_sel(data)                      ((0x00000002&(data))>>1)
#define  PQC_PQDC_MC_PQ_CMP_DB_CTRL_get_cmp_db_en(data)                          (0x00000001&(data))

#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR                                             0x18099284
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_reg_addr                                     "0xB8099284"
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_reg                                          0xB8099284
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_inst_addr                                    "0x0016"
#define  set_PQC_PQDC_MC_HF_PQ_CMP_PAIR_reg(data)                                (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_PAIR_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_CMP_PAIR_reg                                      (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_PAIR_reg))
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_line_sum_bit_shift                       (16)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_400_old_mode_en_shift                    (15)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_c_ch_data_tie0_shift                     (14)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_dummy_13_11_shift                            (11)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_jump4_en_shift                           (10)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_qp_mode_shift                            (8)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_dic_mode_en_shift                        (7)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_line_mode_shift                          (5)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_data_color_shift                         (4)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_data_bit_width_shift                     (2)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_data_format_shift                        (0)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_line_sum_bit_mask                        (0xFFFF0000)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_400_old_mode_en_mask                     (0x00008000)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_c_ch_data_tie0_mask                      (0x00004000)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_dummy_13_11_mask                             (0x00003800)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_jump4_en_mask                            (0x00000400)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_qp_mode_mask                             (0x00000300)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_dic_mode_en_mask                         (0x00000080)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_line_mode_mask                           (0x00000020)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_data_color_mask                          (0x00000010)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_data_bit_width_mask                      (0x0000000C)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_data_format_mask                         (0x00000003)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_line_sum_bit(data)                       (0xFFFF0000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_400_old_mode_en(data)                    (0x00008000&((data)<<15))
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_c_ch_data_tie0(data)                     (0x00004000&((data)<<14))
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_dummy_13_11(data)                            (0x00003800&((data)<<11))
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_jump4_en(data)                           (0x00000400&((data)<<10))
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_qp_mode(data)                            (0x00000300&((data)<<8))
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_dic_mode_en(data)                        (0x00000080&((data)<<7))
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_line_mode(data)                          (0x00000020&((data)<<5))
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_data_color(data)                         (0x00000010&((data)<<4))
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_data_bit_width(data)                     (0x0000000C&((data)<<2))
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_cmp_data_format(data)                        (0x00000003&(data))
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_get_cmp_line_sum_bit(data)                   ((0xFFFF0000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_get_cmp_400_old_mode_en(data)                ((0x00008000&(data))>>15)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_get_cmp_c_ch_data_tie0(data)                 ((0x00004000&(data))>>14)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_get_dummy_13_11(data)                        ((0x00003800&(data))>>11)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_get_cmp_jump4_en(data)                       ((0x00000400&(data))>>10)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_get_cmp_qp_mode(data)                        ((0x00000300&(data))>>8)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_get_cmp_dic_mode_en(data)                    ((0x00000080&(data))>>7)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_get_cmp_line_mode(data)                      ((0x00000020&(data))>>5)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_get_cmp_data_color(data)                     ((0x00000010&(data))>>4)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_get_cmp_data_bit_width(data)                 ((0x0000000C&(data))>>2)
#define  PQC_PQDC_MC_HF_PQ_CMP_PAIR_get_cmp_data_format(data)                    (0x00000003&(data))

#define  PQC_PQDC_MC_HF_PQ_CMP_BIT                                              0x18099288
#define  PQC_PQDC_MC_HF_PQ_CMP_BIT_reg_addr                                      "0xB8099288"
#define  PQC_PQDC_MC_HF_PQ_CMP_BIT_reg                                           0xB8099288
#define  PQC_PQDC_MC_HF_PQ_CMP_BIT_inst_addr                                     "0x0017"
#define  set_PQC_PQDC_MC_HF_PQ_CMP_BIT_reg(data)                                 (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_BIT_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_CMP_BIT_reg                                       (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_BIT_reg))
#define  PQC_PQDC_MC_HF_PQ_CMP_BIT_first_line_more_bit_shift                     (24)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIT_block_limit_bit_shift                         (16)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIT_line_limit_bit_shift                          (8)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIT_frame_limit_bit_shift                         (0)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIT_first_line_more_bit_mask                      (0x3F000000)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIT_block_limit_bit_mask                          (0x003F0000)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIT_line_limit_bit_mask                           (0x00003F00)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIT_frame_limit_bit_mask                          (0x0000003F)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIT_first_line_more_bit(data)                     (0x3F000000&((data)<<24))
#define  PQC_PQDC_MC_HF_PQ_CMP_BIT_block_limit_bit(data)                         (0x003F0000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_CMP_BIT_line_limit_bit(data)                          (0x00003F00&((data)<<8))
#define  PQC_PQDC_MC_HF_PQ_CMP_BIT_frame_limit_bit(data)                         (0x0000003F&(data))
#define  PQC_PQDC_MC_HF_PQ_CMP_BIT_get_first_line_more_bit(data)                 ((0x3F000000&(data))>>24)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIT_get_block_limit_bit(data)                     ((0x003F0000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIT_get_line_limit_bit(data)                      ((0x00003F00&(data))>>8)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIT_get_frame_limit_bit(data)                     (0x0000003F&(data))

#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE                                           0x1809928C
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_reg_addr                                   "0xB809928C"
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_reg                                        0xB809928C
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_inst_addr                                  "0x0018"
#define  set_PQC_PQDC_MC_HF_PQ_CMP_ENABLE_reg(data)                              (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_ENABLE_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_CMP_ENABLE_reg                                    (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_ENABLE_reg))
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_input_fifo_pause_cycle_shift               (28)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_tail_dummy_throughput_shift                (27)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_first_predict_nc_mode_shift                (26)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_g_ratio_shift                              (16)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_add_last2blk_over_curve_bit_shift          (15)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_variation_maxmin_en_shift                  (14)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_dynamic_sum_line_rst_shift                 (13)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_blk0_add_en_shift                          (12)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_guarantee_max_qp_en_shift                  (11)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_dynamic_allocate_ratio_en_shift            (10)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_poor_limit_min_qp_en_shift                 (9)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_balance_en_shift                           (8)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_fisrt_line_more_en_shift                   (7)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_blk0_add_half_en_shift                     (6)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_do_422_mode_shift                          (4)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_first_predict_nc_en_shift                  (3)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_not_enough_bit_do_422_en_shift             (2)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_not_rich_do_422_en_shift                   (1)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_rb_lossy_do_422_en_shift                   (0)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_input_fifo_pause_cycle_mask                (0xF0000000)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_tail_dummy_throughput_mask                 (0x08000000)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_first_predict_nc_mode_mask                 (0x04000000)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_g_ratio_mask                               (0x001F0000)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_add_last2blk_over_curve_bit_mask           (0x00008000)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_variation_maxmin_en_mask                   (0x00004000)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_dynamic_sum_line_rst_mask                  (0x00002000)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_blk0_add_en_mask                           (0x00001000)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_guarantee_max_qp_en_mask                   (0x00000800)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_dynamic_allocate_ratio_en_mask             (0x00000400)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_poor_limit_min_qp_en_mask                  (0x00000200)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_balance_en_mask                            (0x00000100)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_fisrt_line_more_en_mask                    (0x00000080)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_blk0_add_half_en_mask                      (0x00000040)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_do_422_mode_mask                           (0x00000030)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_first_predict_nc_en_mask                   (0x00000008)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_not_enough_bit_do_422_en_mask              (0x00000004)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_not_rich_do_422_en_mask                    (0x00000002)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_rb_lossy_do_422_en_mask                    (0x00000001)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_input_fifo_pause_cycle(data)               (0xF0000000&((data)<<28))
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_tail_dummy_throughput(data)                (0x08000000&((data)<<27))
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_first_predict_nc_mode(data)                (0x04000000&((data)<<26))
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_g_ratio(data)                              (0x001F0000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_add_last2blk_over_curve_bit(data)          (0x00008000&((data)<<15))
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_variation_maxmin_en(data)                  (0x00004000&((data)<<14))
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_dynamic_sum_line_rst(data)                 (0x00002000&((data)<<13))
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_blk0_add_en(data)                          (0x00001000&((data)<<12))
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_guarantee_max_qp_en(data)                  (0x00000800&((data)<<11))
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_dynamic_allocate_ratio_en(data)            (0x00000400&((data)<<10))
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_poor_limit_min_qp_en(data)                 (0x00000200&((data)<<9))
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_balance_en(data)                           (0x00000100&((data)<<8))
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_fisrt_line_more_en(data)                   (0x00000080&((data)<<7))
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_blk0_add_half_en(data)                     (0x00000040&((data)<<6))
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_do_422_mode(data)                          (0x00000030&((data)<<4))
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_first_predict_nc_en(data)                  (0x00000008&((data)<<3))
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_not_enough_bit_do_422_en(data)             (0x00000004&((data)<<2))
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_not_rich_do_422_en(data)                   (0x00000002&((data)<<1))
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_rb_lossy_do_422_en(data)                   (0x00000001&(data))
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_get_input_fifo_pause_cycle(data)           ((0xF0000000&(data))>>28)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_get_tail_dummy_throughput(data)            ((0x08000000&(data))>>27)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_get_first_predict_nc_mode(data)            ((0x04000000&(data))>>26)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_get_g_ratio(data)                          ((0x001F0000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_get_add_last2blk_over_curve_bit(data)      ((0x00008000&(data))>>15)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_get_variation_maxmin_en(data)              ((0x00004000&(data))>>14)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_get_dynamic_sum_line_rst(data)             ((0x00002000&(data))>>13)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_get_blk0_add_en(data)                      ((0x00001000&(data))>>12)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_get_guarantee_max_qp_en(data)              ((0x00000800&(data))>>11)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_get_dynamic_allocate_ratio_en(data)        ((0x00000400&(data))>>10)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_get_poor_limit_min_qp_en(data)             ((0x00000200&(data))>>9)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_get_balance_en(data)                       ((0x00000100&(data))>>8)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_get_fisrt_line_more_en(data)               ((0x00000080&(data))>>7)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_get_blk0_add_half_en(data)                 ((0x00000040&(data))>>6)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_get_do_422_mode(data)                      ((0x00000030&(data))>>4)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_get_first_predict_nc_en(data)              ((0x00000008&(data))>>3)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_get_not_enough_bit_do_422_en(data)         ((0x00000004&(data))>>2)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_get_not_rich_do_422_en(data)               ((0x00000002&(data))>>1)
#define  PQC_PQDC_MC_HF_PQ_CMP_ENABLE_get_rb_lossy_do_422_en(data)               (0x00000001&(data))

#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH                                           0x18099290
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_reg_addr                                   "0xB8099290"
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_reg                                        0xB8099290
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_inst_addr                                  "0x0019"
#define  set_PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_reg(data)                              (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_reg                                    (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_reg))
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_dic_mode_option_shift                      (28)
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_not_enough_bit_do_422_qp_shift             (24)
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_not_rich_do_422_th_shift                   (20)
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_rb_lossy_do_422_qp_level_shift             (16)
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_dic_mode_entry_th_shift                    (12)
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_variation_value_th_shift                   (8)
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_variation_num_th_shift                     (4)
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_variation_near_num_th_shift                (0)
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_dic_mode_option_mask                       (0xF0000000)
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_not_enough_bit_do_422_qp_mask              (0x07000000)
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_not_rich_do_422_th_mask                    (0x00F00000)
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_rb_lossy_do_422_qp_level_mask              (0x00070000)
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_dic_mode_entry_th_mask                     (0x0000F000)
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_variation_value_th_mask                    (0x00000F00)
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_variation_num_th_mask                      (0x00000070)
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_variation_near_num_th_mask                 (0x00000007)
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_dic_mode_option(data)                      (0xF0000000&((data)<<28))
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_not_enough_bit_do_422_qp(data)             (0x07000000&((data)<<24))
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_not_rich_do_422_th(data)                   (0x00F00000&((data)<<20))
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_rb_lossy_do_422_qp_level(data)             (0x00070000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_dic_mode_entry_th(data)                    (0x0000F000&((data)<<12))
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_variation_value_th(data)                   (0x00000F00&((data)<<8))
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_variation_num_th(data)                     (0x00000070&((data)<<4))
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_variation_near_num_th(data)                (0x00000007&(data))
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_get_dic_mode_option(data)                  ((0xF0000000&(data))>>28)
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_get_not_enough_bit_do_422_qp(data)         ((0x07000000&(data))>>24)
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_get_not_rich_do_422_th(data)               ((0x00F00000&(data))>>20)
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_get_rb_lossy_do_422_qp_level(data)         ((0x00070000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_get_dic_mode_entry_th(data)                ((0x0000F000&(data))>>12)
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_get_variation_value_th(data)               ((0x00000F00&(data))>>8)
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_get_variation_num_th(data)                 ((0x00000070&(data))>>4)
#define  PQC_PQDC_MC_HF_PQ_CMP_SMOOTH_get_variation_near_num_th(data)            (0x00000007&(data))

#define  PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE                                         0x18099294
#define  PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_reg_addr                                 "0xB8099294"
#define  PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_reg                                      0xB8099294
#define  PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_inst_addr                                "0x001A"
#define  set_PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_reg(data)                            (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_reg                                  (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_reg))
#define  PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_max_shift         (24)
#define  PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_min_shift         (16)
#define  PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_dynamic_allocate_line_shift              (8)
#define  PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_dynamic_allocate_more_shift              (4)
#define  PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_dynamic_allocate_less_shift              (0)
#define  PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_max_mask          (0x1F000000)
#define  PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_min_mask          (0x001F0000)
#define  PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_dynamic_allocate_line_mask               (0x00000700)
#define  PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_dynamic_allocate_more_mask               (0x000000F0)
#define  PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_dynamic_allocate_less_mask               (0x0000000F)
#define  PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_max(data)         (0x1F000000&((data)<<24))
#define  PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_min(data)         (0x001F0000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_dynamic_allocate_line(data)              (0x00000700&((data)<<8))
#define  PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_dynamic_allocate_more(data)              (0x000000F0&((data)<<4))
#define  PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_dynamic_allocate_less(data)              (0x0000000F&(data))
#define  PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_get_dynamic_allocate_ratio_max(data)     ((0x1F000000&(data))>>24)
#define  PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_get_dynamic_allocate_ratio_min(data)     ((0x001F0000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_get_dynamic_allocate_line(data)          ((0x00000700&(data))>>8)
#define  PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_get_dynamic_allocate_more(data)          ((0x000000F0&(data))>>4)
#define  PQC_PQDC_MC_HF_PQ_CMP_ALLOCATE_get_dynamic_allocate_less(data)          (0x0000000F&(data))

#define  PQC_PQDC_MC_HF_PQ_CMP_POOR                                             0x18099298
#define  PQC_PQDC_MC_HF_PQ_CMP_POOR_reg_addr                                     "0xB8099298"
#define  PQC_PQDC_MC_HF_PQ_CMP_POOR_reg                                          0xB8099298
#define  PQC_PQDC_MC_HF_PQ_CMP_POOR_inst_addr                                    "0x001B"
#define  set_PQC_PQDC_MC_HF_PQ_CMP_POOR_reg(data)                                (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_POOR_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_CMP_POOR_reg                                      (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_POOR_reg))
#define  PQC_PQDC_MC_HF_PQ_CMP_POOR_poor_limit_th_qp4_shift                      (24)
#define  PQC_PQDC_MC_HF_PQ_CMP_POOR_poor_limit_th_qp3_shift                      (16)
#define  PQC_PQDC_MC_HF_PQ_CMP_POOR_poor_limit_th_qp2_shift                      (8)
#define  PQC_PQDC_MC_HF_PQ_CMP_POOR_poor_limit_th_qp1_shift                      (0)
#define  PQC_PQDC_MC_HF_PQ_CMP_POOR_poor_limit_th_qp4_mask                       (0x1F000000)
#define  PQC_PQDC_MC_HF_PQ_CMP_POOR_poor_limit_th_qp3_mask                       (0x001F0000)
#define  PQC_PQDC_MC_HF_PQ_CMP_POOR_poor_limit_th_qp2_mask                       (0x00001F00)
#define  PQC_PQDC_MC_HF_PQ_CMP_POOR_poor_limit_th_qp1_mask                       (0x0000001F)
#define  PQC_PQDC_MC_HF_PQ_CMP_POOR_poor_limit_th_qp4(data)                      (0x1F000000&((data)<<24))
#define  PQC_PQDC_MC_HF_PQ_CMP_POOR_poor_limit_th_qp3(data)                      (0x001F0000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_CMP_POOR_poor_limit_th_qp2(data)                      (0x00001F00&((data)<<8))
#define  PQC_PQDC_MC_HF_PQ_CMP_POOR_poor_limit_th_qp1(data)                      (0x0000001F&(data))
#define  PQC_PQDC_MC_HF_PQ_CMP_POOR_get_poor_limit_th_qp4(data)                  ((0x1F000000&(data))>>24)
#define  PQC_PQDC_MC_HF_PQ_CMP_POOR_get_poor_limit_th_qp3(data)                  ((0x001F0000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_CMP_POOR_get_poor_limit_th_qp2(data)                  ((0x00001F00&(data))>>8)
#define  PQC_PQDC_MC_HF_PQ_CMP_POOR_get_poor_limit_th_qp1(data)                  (0x0000001F&(data))

#define  PQC_PQDC_MC_HF_PQ_CMP_Guarantee                                        0x1809929C
#define  PQC_PQDC_MC_HF_PQ_CMP_Guarantee_reg_addr                                "0xB809929C"
#define  PQC_PQDC_MC_HF_PQ_CMP_Guarantee_reg                                     0xB809929C
#define  PQC_PQDC_MC_HF_PQ_CMP_Guarantee_inst_addr                               "0x001C"
#define  set_PQC_PQDC_MC_HF_PQ_CMP_Guarantee_reg(data)                           (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_Guarantee_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_CMP_Guarantee_reg                                 (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_Guarantee_reg))
#define  PQC_PQDC_MC_HF_PQ_CMP_Guarantee_cmp_crc_ro_line_sel_shift               (16)
#define  PQC_PQDC_MC_HF_PQ_CMP_Guarantee_dic_mode_qp_th_rb_shift                 (12)
#define  PQC_PQDC_MC_HF_PQ_CMP_Guarantee_dic_mode_qp_th_g_shift                  (8)
#define  PQC_PQDC_MC_HF_PQ_CMP_Guarantee_guarantee_max_rb_qp_shift               (4)
#define  PQC_PQDC_MC_HF_PQ_CMP_Guarantee_guarantee_max_g_qp_shift                (0)
#define  PQC_PQDC_MC_HF_PQ_CMP_Guarantee_cmp_crc_ro_line_sel_mask                (0x3FFF0000)
#define  PQC_PQDC_MC_HF_PQ_CMP_Guarantee_dic_mode_qp_th_rb_mask                  (0x0000F000)
#define  PQC_PQDC_MC_HF_PQ_CMP_Guarantee_dic_mode_qp_th_g_mask                   (0x00000F00)
#define  PQC_PQDC_MC_HF_PQ_CMP_Guarantee_guarantee_max_rb_qp_mask                (0x000000F0)
#define  PQC_PQDC_MC_HF_PQ_CMP_Guarantee_guarantee_max_g_qp_mask                 (0x0000000F)
#define  PQC_PQDC_MC_HF_PQ_CMP_Guarantee_cmp_crc_ro_line_sel(data)               (0x3FFF0000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_CMP_Guarantee_dic_mode_qp_th_rb(data)                 (0x0000F000&((data)<<12))
#define  PQC_PQDC_MC_HF_PQ_CMP_Guarantee_dic_mode_qp_th_g(data)                  (0x00000F00&((data)<<8))
#define  PQC_PQDC_MC_HF_PQ_CMP_Guarantee_guarantee_max_rb_qp(data)               (0x000000F0&((data)<<4))
#define  PQC_PQDC_MC_HF_PQ_CMP_Guarantee_guarantee_max_g_qp(data)                (0x0000000F&(data))
#define  PQC_PQDC_MC_HF_PQ_CMP_Guarantee_get_cmp_crc_ro_line_sel(data)           ((0x3FFF0000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_CMP_Guarantee_get_dic_mode_qp_th_rb(data)             ((0x0000F000&(data))>>12)
#define  PQC_PQDC_MC_HF_PQ_CMP_Guarantee_get_dic_mode_qp_th_g(data)              ((0x00000F00&(data))>>8)
#define  PQC_PQDC_MC_HF_PQ_CMP_Guarantee_get_guarantee_max_rb_qp(data)           ((0x000000F0&(data))>>4)
#define  PQC_PQDC_MC_HF_PQ_CMP_Guarantee_get_guarantee_max_g_qp(data)            (0x0000000F&(data))

#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE                                          0x180992A0
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_reg_addr                                  "0xB80992A0"
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_reg                                       0xB80992A0
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_inst_addr                                 "0x001D"
#define  set_PQC_PQDC_MC_HF_PQ_CMP_BALANCE_reg(data)                             (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_BALANCE_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_CMP_BALANCE_reg                                   (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_BALANCE_reg))
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_variation_maxmin_th2_shift                (24)
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_variation_maxmin_th_shift                 (16)
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_balance_rb_ov_th_shift                    (12)
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_balance_rb_ud_th_shift                    (10)
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_balance_rb_give_shift                     (8)
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_balance_g_ov_th_shift                     (4)
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_balance_g_ud_th_shift                     (2)
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_balance_g_give_shift                      (0)
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_variation_maxmin_th2_mask                 (0xFF000000)
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_variation_maxmin_th_mask                  (0x00FF0000)
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_balance_rb_ov_th_mask                     (0x00003000)
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_balance_rb_ud_th_mask                     (0x00000C00)
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_balance_rb_give_mask                      (0x00000300)
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_balance_g_ov_th_mask                      (0x00000030)
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_balance_g_ud_th_mask                      (0x0000000C)
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_balance_g_give_mask                       (0x00000003)
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_variation_maxmin_th2(data)                (0xFF000000&((data)<<24))
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_variation_maxmin_th(data)                 (0x00FF0000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_balance_rb_ov_th(data)                    (0x00003000&((data)<<12))
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_balance_rb_ud_th(data)                    (0x00000C00&((data)<<10))
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_balance_rb_give(data)                     (0x00000300&((data)<<8))
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_balance_g_ov_th(data)                     (0x00000030&((data)<<4))
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_balance_g_ud_th(data)                     (0x0000000C&((data)<<2))
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_balance_g_give(data)                      (0x00000003&(data))
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_get_variation_maxmin_th2(data)            ((0xFF000000&(data))>>24)
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_get_variation_maxmin_th(data)             ((0x00FF0000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_get_balance_rb_ov_th(data)                ((0x00003000&(data))>>12)
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_get_balance_rb_ud_th(data)                ((0x00000C00&(data))>>10)
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_get_balance_rb_give(data)                 ((0x00000300&(data))>>8)
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_get_balance_g_ov_th(data)                 ((0x00000030&(data))>>4)
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_get_balance_g_ud_th(data)                 ((0x0000000C&(data))>>2)
#define  PQC_PQDC_MC_HF_PQ_CMP_BALANCE_get_balance_g_give(data)                  (0x00000003&(data))

#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN                                           0x180992A4
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_reg_addr                                   "0xB80992A4"
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_reg                                        0xB80992A4
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_inst_addr                                  "0x001E"
#define  set_PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_reg(data)                              (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_reg                                    (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_reg))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_prs_over_line_sum_bit_irq_en_shift         (18)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_tail_fifo_overflow_irq_en_shift            (17)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_input_fifo_overflow_irq_en_shift           (16)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_block_fifo_overflow_irq_en_shift           (15)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_input_size_more_irq_en_shift               (14)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_input_size_less_irq_en_shift               (13)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_over_flb_irq_en_shift                      (12)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_request_fifo_even_overflow_irq_en_shift    (9)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_g_fifo_even_overflow_irq_en_shift          (6)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_r_fifo_even_overflow_irq_en_shift          (5)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_b_fifo_even_overflow_irq_en_shift          (4)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_prs_over_line_sum_bit_irq_en_mask          (0x00040000)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_tail_fifo_overflow_irq_en_mask             (0x00020000)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_input_fifo_overflow_irq_en_mask            (0x00010000)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_block_fifo_overflow_irq_en_mask            (0x00008000)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_input_size_more_irq_en_mask                (0x00004000)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_input_size_less_irq_en_mask                (0x00002000)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_over_flb_irq_en_mask                       (0x00001000)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_request_fifo_even_overflow_irq_en_mask     (0x00000200)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_g_fifo_even_overflow_irq_en_mask           (0x00000040)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_r_fifo_even_overflow_irq_en_mask           (0x00000020)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_b_fifo_even_overflow_irq_en_mask           (0x00000010)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_prs_over_line_sum_bit_irq_en(data)         (0x00040000&((data)<<18))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_tail_fifo_overflow_irq_en(data)            (0x00020000&((data)<<17))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_input_fifo_overflow_irq_en(data)           (0x00010000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_block_fifo_overflow_irq_en(data)           (0x00008000&((data)<<15))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_input_size_more_irq_en(data)               (0x00004000&((data)<<14))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_input_size_less_irq_en(data)               (0x00002000&((data)<<13))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_over_flb_irq_en(data)                      (0x00001000&((data)<<12))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_request_fifo_even_overflow_irq_en(data)    (0x00000200&((data)<<9))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_g_fifo_even_overflow_irq_en(data)          (0x00000040&((data)<<6))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_r_fifo_even_overflow_irq_en(data)          (0x00000020&((data)<<5))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_b_fifo_even_overflow_irq_en(data)          (0x00000010&((data)<<4))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_get_prs_over_line_sum_bit_irq_en(data)     ((0x00040000&(data))>>18)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_get_tail_fifo_overflow_irq_en(data)        ((0x00020000&(data))>>17)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_get_input_fifo_overflow_irq_en(data)       ((0x00010000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_get_block_fifo_overflow_irq_en(data)       ((0x00008000&(data))>>15)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_get_input_size_more_irq_en(data)           ((0x00004000&(data))>>14)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_get_input_size_less_irq_en(data)           ((0x00002000&(data))>>13)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_get_over_flb_irq_en(data)                  ((0x00001000&(data))>>12)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_get_request_fifo_even_overflow_irq_en(data) ((0x00000200&(data))>>9)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_get_g_fifo_even_overflow_irq_en(data)      ((0x00000040&(data))>>6)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_get_r_fifo_even_overflow_irq_en(data)      ((0x00000020&(data))>>5)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_EN_get_b_fifo_even_overflow_irq_en(data)      ((0x00000010&(data))>>4)

#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST                                           0x180992A8
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_reg_addr                                   "0xB80992A8"
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_reg                                        0xB80992A8
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_inst_addr                                  "0x001F"
#define  set_PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_reg(data)                              (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_reg                                    (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_reg))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_pqc_irq_shift                              (31)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_prs_over_line_sum_bit_st_shift             (18)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_tail_fifo_overflow_st_shift                (17)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_input_fifo_overflow_st_shift               (16)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_block_fifo_overflow_st_shift               (15)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_input_size_more_st_shift                   (14)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_input_size_less_st_shift                   (13)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_over_flb_st_shift                          (12)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_request_fifo_even_overflow_st_shift        (9)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_g_fifo_even_overflow_st_shift              (6)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_r_fifo_even_overflow_st_shift              (5)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_b_fifo_even_overflow_st_shift              (4)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_pqc_irq_mask                               (0x80000000)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_prs_over_line_sum_bit_st_mask              (0x00040000)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_tail_fifo_overflow_st_mask                 (0x00020000)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_input_fifo_overflow_st_mask                (0x00010000)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_block_fifo_overflow_st_mask                (0x00008000)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_input_size_more_st_mask                    (0x00004000)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_input_size_less_st_mask                    (0x00002000)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_over_flb_st_mask                           (0x00001000)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_request_fifo_even_overflow_st_mask         (0x00000200)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_g_fifo_even_overflow_st_mask               (0x00000040)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_r_fifo_even_overflow_st_mask               (0x00000020)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_b_fifo_even_overflow_st_mask               (0x00000010)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_pqc_irq(data)                              (0x80000000&((data)<<31))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_prs_over_line_sum_bit_st(data)             (0x00040000&((data)<<18))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_tail_fifo_overflow_st(data)                (0x00020000&((data)<<17))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_input_fifo_overflow_st(data)               (0x00010000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_block_fifo_overflow_st(data)               (0x00008000&((data)<<15))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_input_size_more_st(data)                   (0x00004000&((data)<<14))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_input_size_less_st(data)                   (0x00002000&((data)<<13))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_over_flb_st(data)                          (0x00001000&((data)<<12))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_request_fifo_even_overflow_st(data)        (0x00000200&((data)<<9))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_g_fifo_even_overflow_st(data)              (0x00000040&((data)<<6))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_r_fifo_even_overflow_st(data)              (0x00000020&((data)<<5))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_b_fifo_even_overflow_st(data)              (0x00000010&((data)<<4))
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_get_pqc_irq(data)                          ((0x80000000&(data))>>31)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_get_prs_over_line_sum_bit_st(data)         ((0x00040000&(data))>>18)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_get_tail_fifo_overflow_st(data)            ((0x00020000&(data))>>17)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_get_input_fifo_overflow_st(data)           ((0x00010000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_get_block_fifo_overflow_st(data)           ((0x00008000&(data))>>15)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_get_input_size_more_st(data)               ((0x00004000&(data))>>14)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_get_input_size_less_st(data)               ((0x00002000&(data))>>13)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_get_over_flb_st(data)                      ((0x00001000&(data))>>12)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_get_request_fifo_even_overflow_st(data)    ((0x00000200&(data))>>9)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_get_g_fifo_even_overflow_st(data)          ((0x00000040&(data))>>6)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_get_r_fifo_even_overflow_st(data)          ((0x00000020&(data))>>5)
#define  PQC_PQDC_MC_HF_PQ_CMP_IRQ_ST_get_b_fifo_even_overflow_st(data)          ((0x00000010&(data))>>4)

#define  PQC_PQDC_MC_HF_PQ_CMP_ST                                               0x180992AC
#define  PQC_PQDC_MC_HF_PQ_CMP_ST_reg_addr                                       "0xB80992AC"
#define  PQC_PQDC_MC_HF_PQ_CMP_ST_reg                                            0xB80992AC
#define  PQC_PQDC_MC_HF_PQ_CMP_ST_inst_addr                                      "0x0020"
#define  set_PQC_PQDC_MC_HF_PQ_CMP_ST_reg(data)                                  (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_ST_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_CMP_ST_reg                                        (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_ST_reg))
#define  PQC_PQDC_MC_HF_PQ_CMP_ST_g_ratio_max_shift                              (24)
#define  PQC_PQDC_MC_HF_PQ_CMP_ST_g_ratio_min_shift                              (16)
#define  PQC_PQDC_MC_HF_PQ_CMP_ST_cmp_package_height_cnt_shift                   (0)
#define  PQC_PQDC_MC_HF_PQ_CMP_ST_g_ratio_max_mask                               (0x1F000000)
#define  PQC_PQDC_MC_HF_PQ_CMP_ST_g_ratio_min_mask                               (0x001F0000)
#define  PQC_PQDC_MC_HF_PQ_CMP_ST_cmp_package_height_cnt_mask                    (0x00003FFF)
#define  PQC_PQDC_MC_HF_PQ_CMP_ST_g_ratio_max(data)                              (0x1F000000&((data)<<24))
#define  PQC_PQDC_MC_HF_PQ_CMP_ST_g_ratio_min(data)                              (0x001F0000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_CMP_ST_cmp_package_height_cnt(data)                   (0x00003FFF&(data))
#define  PQC_PQDC_MC_HF_PQ_CMP_ST_get_g_ratio_max(data)                          ((0x1F000000&(data))>>24)
#define  PQC_PQDC_MC_HF_PQ_CMP_ST_get_g_ratio_min(data)                          ((0x001F0000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_CMP_ST_get_cmp_package_height_cnt(data)               (0x00003FFF&(data))

#define  PQC_PQDC_MC_HF_PQ_CMP_QP_ST                                            0x180992B0
#define  PQC_PQDC_MC_HF_PQ_CMP_QP_ST_reg_addr                                    "0xB80992B0"
#define  PQC_PQDC_MC_HF_PQ_CMP_QP_ST_reg                                         0xB80992B0
#define  PQC_PQDC_MC_HF_PQ_CMP_QP_ST_inst_addr                                   "0x0021"
#define  set_PQC_PQDC_MC_HF_PQ_CMP_QP_ST_reg(data)                               (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_QP_ST_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_CMP_QP_ST_reg                                     (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_QP_ST_reg))
#define  PQC_PQDC_MC_HF_PQ_CMP_QP_ST_long_term_qp_measure_en_shift               (31)
#define  PQC_PQDC_MC_HF_PQ_CMP_QP_ST_long_term_g_qp_max_shift                    (20)
#define  PQC_PQDC_MC_HF_PQ_CMP_QP_ST_long_term_rb_qp_max_shift                   (16)
#define  PQC_PQDC_MC_HF_PQ_CMP_QP_ST_short_term_g_qp_max_shift                   (4)
#define  PQC_PQDC_MC_HF_PQ_CMP_QP_ST_short_term_rb_qp_max_shift                  (0)
#define  PQC_PQDC_MC_HF_PQ_CMP_QP_ST_long_term_qp_measure_en_mask                (0x80000000)
#define  PQC_PQDC_MC_HF_PQ_CMP_QP_ST_long_term_g_qp_max_mask                     (0x00F00000)
#define  PQC_PQDC_MC_HF_PQ_CMP_QP_ST_long_term_rb_qp_max_mask                    (0x000F0000)
#define  PQC_PQDC_MC_HF_PQ_CMP_QP_ST_short_term_g_qp_max_mask                    (0x000000F0)
#define  PQC_PQDC_MC_HF_PQ_CMP_QP_ST_short_term_rb_qp_max_mask                   (0x0000000F)
#define  PQC_PQDC_MC_HF_PQ_CMP_QP_ST_long_term_qp_measure_en(data)               (0x80000000&((data)<<31))
#define  PQC_PQDC_MC_HF_PQ_CMP_QP_ST_long_term_g_qp_max(data)                    (0x00F00000&((data)<<20))
#define  PQC_PQDC_MC_HF_PQ_CMP_QP_ST_long_term_rb_qp_max(data)                   (0x000F0000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_CMP_QP_ST_short_term_g_qp_max(data)                   (0x000000F0&((data)<<4))
#define  PQC_PQDC_MC_HF_PQ_CMP_QP_ST_short_term_rb_qp_max(data)                  (0x0000000F&(data))
#define  PQC_PQDC_MC_HF_PQ_CMP_QP_ST_get_long_term_qp_measure_en(data)           ((0x80000000&(data))>>31)
#define  PQC_PQDC_MC_HF_PQ_CMP_QP_ST_get_long_term_g_qp_max(data)                ((0x00F00000&(data))>>20)
#define  PQC_PQDC_MC_HF_PQ_CMP_QP_ST_get_long_term_rb_qp_max(data)               ((0x000F0000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_CMP_QP_ST_get_short_term_g_qp_max(data)               ((0x000000F0&(data))>>4)
#define  PQC_PQDC_MC_HF_PQ_CMP_QP_ST_get_short_term_rb_qp_max(data)              (0x0000000F&(data))

#define  PQC_PQDC_MC_HF_PQ_CMP_FIFO_ST1                                         0x180992B4
#define  PQC_PQDC_MC_HF_PQ_CMP_FIFO_ST1_reg_addr                                 "0xB80992B4"
#define  PQC_PQDC_MC_HF_PQ_CMP_FIFO_ST1_reg                                      0xB80992B4
#define  PQC_PQDC_MC_HF_PQ_CMP_FIFO_ST1_inst_addr                                "0x0022"
#define  set_PQC_PQDC_MC_HF_PQ_CMP_FIFO_ST1_reg(data)                            (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_FIFO_ST1_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_CMP_FIFO_ST1_reg                                  (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_FIFO_ST1_reg))
#define  PQC_PQDC_MC_HF_PQ_CMP_FIFO_ST1_fifo_water_measure_en_shift              (31)
#define  PQC_PQDC_MC_HF_PQ_CMP_FIFO_ST1_fifo_water_even_g_shift                  (16)
#define  PQC_PQDC_MC_HF_PQ_CMP_FIFO_ST1_fifo_water_even_r_shift                  (8)
#define  PQC_PQDC_MC_HF_PQ_CMP_FIFO_ST1_fifo_water_even_b_shift                  (0)
#define  PQC_PQDC_MC_HF_PQ_CMP_FIFO_ST1_fifo_water_measure_en_mask               (0x80000000)
#define  PQC_PQDC_MC_HF_PQ_CMP_FIFO_ST1_fifo_water_even_g_mask                   (0x00FF0000)
#define  PQC_PQDC_MC_HF_PQ_CMP_FIFO_ST1_fifo_water_even_r_mask                   (0x0000FF00)
#define  PQC_PQDC_MC_HF_PQ_CMP_FIFO_ST1_fifo_water_even_b_mask                   (0x000000FF)
#define  PQC_PQDC_MC_HF_PQ_CMP_FIFO_ST1_fifo_water_measure_en(data)              (0x80000000&((data)<<31))
#define  PQC_PQDC_MC_HF_PQ_CMP_FIFO_ST1_fifo_water_even_g(data)                  (0x00FF0000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_CMP_FIFO_ST1_fifo_water_even_r(data)                  (0x0000FF00&((data)<<8))
#define  PQC_PQDC_MC_HF_PQ_CMP_FIFO_ST1_fifo_water_even_b(data)                  (0x000000FF&(data))
#define  PQC_PQDC_MC_HF_PQ_CMP_FIFO_ST1_get_fifo_water_measure_en(data)          ((0x80000000&(data))>>31)
#define  PQC_PQDC_MC_HF_PQ_CMP_FIFO_ST1_get_fifo_water_even_g(data)              ((0x00FF0000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_CMP_FIFO_ST1_get_fifo_water_even_r(data)              ((0x0000FF00&(data))>>8)
#define  PQC_PQDC_MC_HF_PQ_CMP_FIFO_ST1_get_fifo_water_even_b(data)              (0x000000FF&(data))

#define  PQC_PQDC_MC_HF_PQ_CMP_LEFT_ST                                          0x180992BC
#define  PQC_PQDC_MC_HF_PQ_CMP_LEFT_ST_reg_addr                                  "0xB80992BC"
#define  PQC_PQDC_MC_HF_PQ_CMP_LEFT_ST_reg                                       0xB80992BC
#define  PQC_PQDC_MC_HF_PQ_CMP_LEFT_ST_inst_addr                                 "0x0023"
#define  set_PQC_PQDC_MC_HF_PQ_CMP_LEFT_ST_reg(data)                             (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_LEFT_ST_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_CMP_LEFT_ST_reg                                   (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_LEFT_ST_reg))
#define  PQC_PQDC_MC_HF_PQ_CMP_LEFT_ST_g_frame_left_shift                        (16)
#define  PQC_PQDC_MC_HF_PQ_CMP_LEFT_ST_rb_frame_left_shift                       (0)
#define  PQC_PQDC_MC_HF_PQ_CMP_LEFT_ST_g_frame_left_mask                         (0xFFFF0000)
#define  PQC_PQDC_MC_HF_PQ_CMP_LEFT_ST_rb_frame_left_mask                        (0x0000FFFF)
#define  PQC_PQDC_MC_HF_PQ_CMP_LEFT_ST_g_frame_left(data)                        (0xFFFF0000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_CMP_LEFT_ST_rb_frame_left(data)                       (0x0000FFFF&(data))
#define  PQC_PQDC_MC_HF_PQ_CMP_LEFT_ST_get_g_frame_left(data)                    ((0xFFFF0000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_CMP_LEFT_ST_get_rb_frame_left(data)                   (0x0000FFFF&(data))

#define  PQC_PQDC_MC_HF_PQ_CMP_PACKAGE_ST                                       0x180992C0
#define  PQC_PQDC_MC_HF_PQ_CMP_PACKAGE_ST_reg_addr                               "0xB80992C0"
#define  PQC_PQDC_MC_HF_PQ_CMP_PACKAGE_ST_reg                                    0xB80992C0
#define  PQC_PQDC_MC_HF_PQ_CMP_PACKAGE_ST_inst_addr                              "0x0024"
#define  set_PQC_PQDC_MC_HF_PQ_CMP_PACKAGE_ST_reg(data)                          (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_PACKAGE_ST_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_CMP_PACKAGE_ST_reg                                (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_PACKAGE_ST_reg))
#define  PQC_PQDC_MC_HF_PQ_CMP_PACKAGE_ST_total_package_long_term_shift          (31)
#define  PQC_PQDC_MC_HF_PQ_CMP_PACKAGE_ST_total_package_even_shift               (0)
#define  PQC_PQDC_MC_HF_PQ_CMP_PACKAGE_ST_total_package_long_term_mask           (0x80000000)
#define  PQC_PQDC_MC_HF_PQ_CMP_PACKAGE_ST_total_package_even_mask                (0x00FFFFFF)
#define  PQC_PQDC_MC_HF_PQ_CMP_PACKAGE_ST_total_package_long_term(data)          (0x80000000&((data)<<31))
#define  PQC_PQDC_MC_HF_PQ_CMP_PACKAGE_ST_total_package_even(data)               (0x00FFFFFF&(data))
#define  PQC_PQDC_MC_HF_PQ_CMP_PACKAGE_ST_get_total_package_long_term(data)      ((0x80000000&(data))>>31)
#define  PQC_PQDC_MC_HF_PQ_CMP_PACKAGE_ST_get_total_package_even(data)           (0x00FFFFFF&(data))

#define  PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_G                                       0x180992C4
#define  PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_G_reg_addr                               "0xB80992C4"
#define  PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_G_reg                                    0xB80992C4
#define  PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_G_inst_addr                              "0x0025"
#define  set_PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_G_reg(data)                          (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_G_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_G_reg                                (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_G_reg))
#define  PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_G_cmp_crc_even_g_shift                   (0)
#define  PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_G_cmp_crc_even_g_mask                    (0xFFFFFFFF)
#define  PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_G_cmp_crc_even_g(data)                   (0xFFFFFFFF&(data))
#define  PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_G_get_cmp_crc_even_g(data)               (0xFFFFFFFF&(data))

#define  PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_R                                       0x180992C8
#define  PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_R_reg_addr                               "0xB80992C8"
#define  PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_R_reg                                    0xB80992C8
#define  PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_R_inst_addr                              "0x0026"
#define  set_PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_R_reg(data)                          (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_R_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_R_reg                                (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_R_reg))
#define  PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_R_cmp_crc_even_r_shift                   (0)
#define  PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_R_cmp_crc_even_r_mask                    (0xFFFFFFFF)
#define  PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_R_cmp_crc_even_r(data)                   (0xFFFFFFFF&(data))
#define  PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_R_get_cmp_crc_even_r(data)               (0xFFFFFFFF&(data))

#define  PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_B                                       0x180992CC
#define  PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_B_reg_addr                               "0xB80992CC"
#define  PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_B_reg                                    0xB80992CC
#define  PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_B_inst_addr                              "0x0027"
#define  set_PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_B_reg(data)                          (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_B_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_B_reg                                (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_B_reg))
#define  PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_B_cmp_crc_even_b_shift                   (0)
#define  PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_B_cmp_crc_even_b_mask                    (0xFFFFFFFF)
#define  PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_B_cmp_crc_even_b(data)                   (0xFFFFFFFF&(data))
#define  PQC_PQDC_MC_HF_PQ_CMP_CRC_EVEN_B_get_cmp_crc_even_b(data)               (0xFFFFFFFF&(data))

#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD0                                        0x180992D0
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD0_reg_addr                                "0xB80992D0"
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD0_reg                                     0xB80992D0
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD0_inst_addr                               "0x0028"
#define  set_PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD0_reg(data)                           (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD0_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD0_reg                                 (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD0_reg))
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD0_blk0_add_value0_shift                   (24)
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD0_dic_mode_tolerance_shift                (16)
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD0_blk0_add_value32_shift                  (8)
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD0_blk0_add_value16_shift                  (0)
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD0_blk0_add_value0_mask                    (0x3F000000)
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD0_dic_mode_tolerance_mask                 (0x00FF0000)
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD0_blk0_add_value32_mask                   (0x00003F00)
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD0_blk0_add_value16_mask                   (0x0000003F)
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD0_blk0_add_value0(data)                   (0x3F000000&((data)<<24))
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD0_dic_mode_tolerance(data)                (0x00FF0000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD0_blk0_add_value32(data)                  (0x00003F00&((data)<<8))
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD0_blk0_add_value16(data)                  (0x0000003F&(data))
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD0_get_blk0_add_value0(data)               ((0x3F000000&(data))>>24)
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD0_get_dic_mode_tolerance(data)            ((0x00FF0000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD0_get_blk0_add_value32(data)              ((0x00003F00&(data))>>8)
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD0_get_blk0_add_value16(data)              (0x0000003F&(data))

#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD1                                        0x180992D4
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD1_reg_addr                                "0xB80992D4"
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD1_reg                                     0xB80992D4
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD1_inst_addr                               "0x0029"
#define  set_PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD1_reg(data)                           (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD1_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD1_reg                                 (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD1_reg))
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD1_blk0_add_value8_shift                   (24)
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD1_blk0_add_value4_shift                   (16)
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD1_blk0_add_value2_shift                   (8)
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD1_blk0_add_value1_shift                   (0)
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD1_blk0_add_value8_mask                    (0x3F000000)
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD1_blk0_add_value4_mask                    (0x003F0000)
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD1_blk0_add_value2_mask                    (0x00003F00)
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD1_blk0_add_value1_mask                    (0x0000003F)
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD1_blk0_add_value8(data)                   (0x3F000000&((data)<<24))
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD1_blk0_add_value4(data)                   (0x003F0000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD1_blk0_add_value2(data)                   (0x00003F00&((data)<<8))
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD1_blk0_add_value1(data)                   (0x0000003F&(data))
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD1_get_blk0_add_value8(data)               ((0x3F000000&(data))>>24)
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD1_get_blk0_add_value4(data)               ((0x003F0000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD1_get_blk0_add_value2(data)               ((0x00003F00&(data))>>8)
#define  PQC_PQDC_MC_HF_PQ_CMP_BLK0_ADD1_get_blk0_add_value1(data)               (0x0000003F&(data))

#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS                                      0x18099270
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_reg_addr                              "0xB8099270"
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_reg                                   0xB8099270
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_inst_addr                             "0x002A"
#define  set_PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_reg(data)                         (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_reg                               (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_reg))
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_pqc1_bist_fail_0_shift                (23)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_0_shift                (22)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_1_shift                (21)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_2_shift                (20)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_3_shift                (19)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_4_shift                (18)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_5_shift                (17)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_6_shift                (16)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_pqc1_bist_fail_0_mask                 (0x00800000)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_0_mask                 (0x00400000)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_1_mask                 (0x00200000)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_2_mask                 (0x00100000)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_3_mask                 (0x00080000)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_4_mask                 (0x00040000)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_5_mask                 (0x00020000)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_6_mask                 (0x00010000)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_pqc1_bist_fail_0(data)                (0x00800000&((data)<<23))
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_0(data)                (0x00400000&((data)<<22))
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_1(data)                (0x00200000&((data)<<21))
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_2(data)                (0x00100000&((data)<<20))
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_3(data)                (0x00080000&((data)<<19))
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_4(data)                (0x00040000&((data)<<18))
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_5(data)                (0x00020000&((data)<<17))
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_6(data)                (0x00010000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_get_pqc1_bist_fail_0(data)            ((0x00800000&(data))>>23)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_get_pqc2_bist_fail_0(data)            ((0x00400000&(data))>>22)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_get_pqc2_bist_fail_1(data)            ((0x00200000&(data))>>21)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_get_pqc2_bist_fail_2(data)            ((0x00100000&(data))>>20)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_get_pqc2_bist_fail_3(data)            ((0x00080000&(data))>>19)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_get_pqc2_bist_fail_4(data)            ((0x00040000&(data))>>18)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_get_pqc2_bist_fail_5(data)            ((0x00020000&(data))>>17)
#define  PQC_PQDC_MC_LF_PQ_CMP_BIST_STATUS_get_pqc2_bist_fail_6(data)            ((0x00010000&(data))>>16)

#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS                                          0x18099278
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_reg_addr                                  "0xB8099278"
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_reg                                       0xB8099278
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_inst_addr                                 "0x002B"
#define  set_PQC_PQDC_MC_LF_CMP_DRF_STATUS_reg(data)                             (*((volatile unsigned int*)PQC_PQDC_MC_LF_CMP_DRF_STATUS_reg)=data)
#define  get_PQC_PQDC_MC_LF_CMP_DRF_STATUS_reg                                   (*((volatile unsigned int*)PQC_PQDC_MC_LF_CMP_DRF_STATUS_reg))
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_pqc1_drf_fail_0_shift                     (23)
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_pqc2_drf_fail_0_shift                     (22)
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_pqc2_drf_fail_1_shift                     (21)
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_pqc2_drf_fail_2_shift                     (20)
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_pqc2_drf_fail_3_shift                     (19)
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_pqc2_drf_fail_4_shift                     (18)
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_pqc2_drf_fail_5_shift                     (17)
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_pqc2_drf_fail_6_shift                     (16)
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_pqc1_drf_fail_0_mask                      (0x00800000)
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_pqc2_drf_fail_0_mask                      (0x00400000)
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_pqc2_drf_fail_1_mask                      (0x00200000)
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_pqc2_drf_fail_2_mask                      (0x00100000)
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_pqc2_drf_fail_3_mask                      (0x00080000)
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_pqc2_drf_fail_4_mask                      (0x00040000)
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_pqc2_drf_fail_5_mask                      (0x00020000)
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_pqc2_drf_fail_6_mask                      (0x00010000)
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_pqc1_drf_fail_0(data)                     (0x00800000&((data)<<23))
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_pqc2_drf_fail_0(data)                     (0x00400000&((data)<<22))
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_pqc2_drf_fail_1(data)                     (0x00200000&((data)<<21))
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_pqc2_drf_fail_2(data)                     (0x00100000&((data)<<20))
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_pqc2_drf_fail_3(data)                     (0x00080000&((data)<<19))
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_pqc2_drf_fail_4(data)                     (0x00040000&((data)<<18))
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_pqc2_drf_fail_5(data)                     (0x00020000&((data)<<17))
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_pqc2_drf_fail_6(data)                     (0x00010000&((data)<<16))
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_get_pqc1_drf_fail_0(data)                 ((0x00800000&(data))>>23)
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_get_pqc2_drf_fail_0(data)                 ((0x00400000&(data))>>22)
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_get_pqc2_drf_fail_1(data)                 ((0x00200000&(data))>>21)
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_get_pqc2_drf_fail_2(data)                 ((0x00100000&(data))>>20)
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_get_pqc2_drf_fail_3(data)                 ((0x00080000&(data))>>19)
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_get_pqc2_drf_fail_4(data)                 ((0x00040000&(data))>>18)
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_get_pqc2_drf_fail_5(data)                 ((0x00020000&(data))>>17)
#define  PQC_PQDC_MC_LF_CMP_DRF_STATUS_get_pqc2_drf_fail_6(data)                 ((0x00010000&(data))>>16)

#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM                                          0x1809927C
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_reg_addr                                  "0xB809927C"
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_reg                                       0xB809927C
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_inst_addr                                 "0x002C"
#define  set_PQC_PQDC_MC_LF_CMP_BIST_LS_RM_reg(data)                             (*((volatile unsigned int*)PQC_PQDC_MC_LF_CMP_BIST_LS_RM_reg)=data)
#define  get_PQC_PQDC_MC_LF_CMP_BIST_LS_RM_reg                                   (*((volatile unsigned int*)PQC_PQDC_MC_LF_CMP_BIST_LS_RM_reg))
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc2_test_rwm_shift                       (23)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc1_ls_0_shift                           (22)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc2_ls_1_shift                           (21)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc2_ls_0_shift                           (20)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc1_rme_0_shift                          (18)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc2_rme_0_shift                          (17)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc2_rme_1_shift                          (16)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc1_rm_0_shift                           (8)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc2_rm_0_shift                           (4)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc2_rm_1_shift                           (0)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc2_test_rwm_mask                        (0x00800000)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc1_ls_0_mask                            (0x00400000)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc2_ls_1_mask                            (0x00200000)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc2_ls_0_mask                            (0x00100000)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc1_rme_0_mask                           (0x00040000)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc2_rme_0_mask                           (0x00020000)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc2_rme_1_mask                           (0x00010000)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc1_rm_0_mask                            (0x00000F00)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc2_rm_0_mask                            (0x000000F0)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc2_rm_1_mask                            (0x0000000F)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc2_test_rwm(data)                       (0x00800000&((data)<<23))
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc1_ls_0(data)                           (0x00400000&((data)<<22))
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc2_ls_1(data)                           (0x00200000&((data)<<21))
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc2_ls_0(data)                           (0x00100000&((data)<<20))
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc1_rme_0(data)                          (0x00040000&((data)<<18))
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc2_rme_0(data)                          (0x00020000&((data)<<17))
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc2_rme_1(data)                          (0x00010000&((data)<<16))
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc1_rm_0(data)                           (0x00000F00&((data)<<8))
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc2_rm_0(data)                           (0x000000F0&((data)<<4))
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_pqc2_rm_1(data)                           (0x0000000F&(data))
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_get_pqc2_test_rwm(data)                   ((0x00800000&(data))>>23)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_get_pqc1_ls_0(data)                       ((0x00400000&(data))>>22)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_get_pqc2_ls_1(data)                       ((0x00200000&(data))>>21)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_get_pqc2_ls_0(data)                       ((0x00100000&(data))>>20)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_get_pqc1_rme_0(data)                      ((0x00040000&(data))>>18)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_get_pqc2_rme_0(data)                      ((0x00020000&(data))>>17)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_get_pqc2_rme_1(data)                      ((0x00010000&(data))>>16)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_get_pqc1_rm_0(data)                       ((0x00000F00&(data))>>8)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_get_pqc2_rm_0(data)                       ((0x000000F0&(data))>>4)
#define  PQC_PQDC_MC_LF_CMP_BIST_LS_RM_get_pqc2_rm_1(data)                       (0x0000000F&(data))

#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS                                      0x180992E4
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_reg_addr                              "0xB80992E4"
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_reg                                   0xB80992E4
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_inst_addr                             "0x002D"
#define  set_PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_reg(data)                         (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_reg                               (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_reg))
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_0_shift                (22)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_1_shift                (21)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_2_shift                (20)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_3_shift                (19)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_4_shift                (18)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_5_shift                (17)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_6_shift                (16)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_0_mask                 (0x00400000)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_1_mask                 (0x00200000)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_2_mask                 (0x00100000)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_3_mask                 (0x00080000)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_4_mask                 (0x00040000)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_5_mask                 (0x00020000)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_6_mask                 (0x00010000)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_0(data)                (0x00400000&((data)<<22))
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_1(data)                (0x00200000&((data)<<21))
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_2(data)                (0x00100000&((data)<<20))
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_3(data)                (0x00080000&((data)<<19))
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_4(data)                (0x00040000&((data)<<18))
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_5(data)                (0x00020000&((data)<<17))
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_pqc2_bist_fail_6(data)                (0x00010000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_get_pqc2_bist_fail_0(data)            ((0x00400000&(data))>>22)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_get_pqc2_bist_fail_1(data)            ((0x00200000&(data))>>21)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_get_pqc2_bist_fail_2(data)            ((0x00100000&(data))>>20)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_get_pqc2_bist_fail_3(data)            ((0x00080000&(data))>>19)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_get_pqc2_bist_fail_4(data)            ((0x00040000&(data))>>18)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_get_pqc2_bist_fail_5(data)            ((0x00020000&(data))>>17)
#define  PQC_PQDC_MC_HF_PQ_CMP_BIST_STATUS_get_pqc2_bist_fail_6(data)            ((0x00010000&(data))>>16)

#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS                                          0x180992EC
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_reg_addr                                  "0xB80992EC"
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_reg                                       0xB80992EC
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_inst_addr                                 "0x002E"
#define  set_PQC_PQDC_MC_HF_CMP_DRF_STATUS_reg(data)                             (*((volatile unsigned int*)PQC_PQDC_MC_HF_CMP_DRF_STATUS_reg)=data)
#define  get_PQC_PQDC_MC_HF_CMP_DRF_STATUS_reg                                   (*((volatile unsigned int*)PQC_PQDC_MC_HF_CMP_DRF_STATUS_reg))
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_pqc2_drf_fail_0_shift                     (22)
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_pqc2_drf_fail_1_shift                     (21)
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_pqc2_drf_fail_2_shift                     (20)
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_pqc2_drf_fail_3_shift                     (19)
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_pqc2_drf_fail_4_shift                     (18)
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_pqc2_drf_fail_5_shift                     (17)
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_pqc2_drf_fail_6_shift                     (16)
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_pqc2_drf_fail_0_mask                      (0x00400000)
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_pqc2_drf_fail_1_mask                      (0x00200000)
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_pqc2_drf_fail_2_mask                      (0x00100000)
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_pqc2_drf_fail_3_mask                      (0x00080000)
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_pqc2_drf_fail_4_mask                      (0x00040000)
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_pqc2_drf_fail_5_mask                      (0x00020000)
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_pqc2_drf_fail_6_mask                      (0x00010000)
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_pqc2_drf_fail_0(data)                     (0x00400000&((data)<<22))
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_pqc2_drf_fail_1(data)                     (0x00200000&((data)<<21))
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_pqc2_drf_fail_2(data)                     (0x00100000&((data)<<20))
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_pqc2_drf_fail_3(data)                     (0x00080000&((data)<<19))
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_pqc2_drf_fail_4(data)                     (0x00040000&((data)<<18))
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_pqc2_drf_fail_5(data)                     (0x00020000&((data)<<17))
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_pqc2_drf_fail_6(data)                     (0x00010000&((data)<<16))
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_get_pqc2_drf_fail_0(data)                 ((0x00400000&(data))>>22)
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_get_pqc2_drf_fail_1(data)                 ((0x00200000&(data))>>21)
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_get_pqc2_drf_fail_2(data)                 ((0x00100000&(data))>>20)
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_get_pqc2_drf_fail_3(data)                 ((0x00080000&(data))>>19)
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_get_pqc2_drf_fail_4(data)                 ((0x00040000&(data))>>18)
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_get_pqc2_drf_fail_5(data)                 ((0x00020000&(data))>>17)
#define  PQC_PQDC_MC_HF_CMP_DRF_STATUS_get_pqc2_drf_fail_6(data)                 ((0x00010000&(data))>>16)

#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM                                          0x180992F0
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_reg_addr                                  "0xB80992F0"
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_reg                                       0xB80992F0
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_inst_addr                                 "0x002F"
#define  set_PQC_PQDC_MC_HF_CMP_BIST_LS_RM_reg(data)                             (*((volatile unsigned int*)PQC_PQDC_MC_HF_CMP_BIST_LS_RM_reg)=data)
#define  get_PQC_PQDC_MC_HF_CMP_BIST_LS_RM_reg                                   (*((volatile unsigned int*)PQC_PQDC_MC_HF_CMP_BIST_LS_RM_reg))
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_pqc2_test_rwm_shift                       (22)
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_pqc2_ls_1_shift                           (21)
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_pqc2_ls_0_shift                           (20)
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_pqc2_rme_0_shift                          (17)
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_pqc2_rme_1_shift                          (16)
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_pqc2_rm_0_shift                           (4)
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_pqc2_rm_1_shift                           (0)
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_pqc2_test_rwm_mask                        (0x00400000)
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_pqc2_ls_1_mask                            (0x00200000)
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_pqc2_ls_0_mask                            (0x00100000)
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_pqc2_rme_0_mask                           (0x00020000)
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_pqc2_rme_1_mask                           (0x00010000)
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_pqc2_rm_0_mask                            (0x000000F0)
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_pqc2_rm_1_mask                            (0x0000000F)
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_pqc2_test_rwm(data)                       (0x00400000&((data)<<22))
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_pqc2_ls_1(data)                           (0x00200000&((data)<<21))
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_pqc2_ls_0(data)                           (0x00100000&((data)<<20))
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_pqc2_rme_0(data)                          (0x00020000&((data)<<17))
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_pqc2_rme_1(data)                          (0x00010000&((data)<<16))
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_pqc2_rm_0(data)                           (0x000000F0&((data)<<4))
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_pqc2_rm_1(data)                           (0x0000000F&(data))
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_get_pqc2_test_rwm(data)                   ((0x00400000&(data))>>22)
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_get_pqc2_ls_1(data)                       ((0x00200000&(data))>>21)
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_get_pqc2_ls_0(data)                       ((0x00100000&(data))>>20)
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_get_pqc2_rme_0(data)                      ((0x00020000&(data))>>17)
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_get_pqc2_rme_1(data)                      ((0x00010000&(data))>>16)
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_get_pqc2_rm_0(data)                       ((0x000000F0&(data))>>4)
#define  PQC_PQDC_MC_HF_CMP_BIST_LS_RM_get_pqc2_rm_1(data)                       (0x0000000F&(data))

#define  PQC_PQDC_MC_PQ_DECMP                                                   0x18099800
#define  PQC_PQDC_MC_PQ_DECMP_reg_addr                                           "0xB8099800"
#define  PQC_PQDC_MC_PQ_DECMP_reg                                                0xB8099800
#define  PQC_PQDC_MC_PQ_DECMP_inst_addr                                          "0x0030"
#define  set_PQC_PQDC_MC_PQ_DECMP_reg(data)                                      (*((volatile unsigned int*)PQC_PQDC_MC_PQ_DECMP_reg)=data)
#define  get_PQC_PQDC_MC_PQ_DECMP_reg                                            (*((volatile unsigned int*)PQC_PQDC_MC_PQ_DECMP_reg))
#define  PQC_PQDC_MC_PQ_DECMP_decmp_en_shift                                     (31)
#define  PQC_PQDC_MC_PQ_DECMP_decmp_width_div32_shift                            (16)
#define  PQC_PQDC_MC_PQ_DECMP_decmp_height_shift                                 (0)
#define  PQC_PQDC_MC_PQ_DECMP_decmp_en_mask                                      (0x80000000)
#define  PQC_PQDC_MC_PQ_DECMP_decmp_width_div32_mask                             (0x01FF0000)
#define  PQC_PQDC_MC_PQ_DECMP_decmp_height_mask                                  (0x00003FFF)
#define  PQC_PQDC_MC_PQ_DECMP_decmp_en(data)                                     (0x80000000&((data)<<31))
#define  PQC_PQDC_MC_PQ_DECMP_decmp_width_div32(data)                            (0x01FF0000&((data)<<16))
#define  PQC_PQDC_MC_PQ_DECMP_decmp_height(data)                                 (0x00003FFF&(data))
#define  PQC_PQDC_MC_PQ_DECMP_get_decmp_en(data)                                 ((0x80000000&(data))>>31)
#define  PQC_PQDC_MC_PQ_DECMP_get_decmp_width_div32(data)                        ((0x01FF0000&(data))>>16)
#define  PQC_PQDC_MC_PQ_DECMP_get_decmp_height(data)                             (0x00003FFF&(data))

#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR                                           0x18099804
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_reg_addr                                   "0xB8099804"
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_reg                                        0xB8099804
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_inst_addr                                  "0x0031"
#define  set_PQC_PQDC_MC_LF_PQ_DECMP_PAIR_reg(data)                              (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_PAIR_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_DECMP_PAIR_reg                                    (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_PAIR_reg))
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_line_sum_bit_shift                   (16)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_400_old_mode_en_shift                (15)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_dummy_14_13_shift                          (13)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_qp_mode_sel_shift                    (12)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_data_bit_width_sel_shift             (11)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_jump4_en_shift                       (10)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_qp_mode_shift                        (8)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_dic_mode_en_shift                    (7)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_two_line_prediction_en_shift         (6)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_line_mode_shift                      (5)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_data_color_shift                     (4)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_data_bit_width_shift                 (2)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_data_format_shift                    (0)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_line_sum_bit_mask                    (0xFFFF0000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_400_old_mode_en_mask                 (0x00008000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_dummy_14_13_mask                           (0x00006000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_qp_mode_sel_mask                     (0x00001000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_data_bit_width_sel_mask              (0x00000800)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_jump4_en_mask                        (0x00000400)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_qp_mode_mask                         (0x00000300)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_dic_mode_en_mask                     (0x00000080)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_two_line_prediction_en_mask          (0x00000040)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_line_mode_mask                       (0x00000020)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_data_color_mask                      (0x00000010)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_data_bit_width_mask                  (0x0000000C)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_data_format_mask                     (0x00000003)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_line_sum_bit(data)                   (0xFFFF0000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_400_old_mode_en(data)                (0x00008000&((data)<<15))
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_dummy_14_13(data)                          (0x00006000&((data)<<13))
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_qp_mode_sel(data)                    (0x00001000&((data)<<12))
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_data_bit_width_sel(data)             (0x00000800&((data)<<11))
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_jump4_en(data)                       (0x00000400&((data)<<10))
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_qp_mode(data)                        (0x00000300&((data)<<8))
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_dic_mode_en(data)                    (0x00000080&((data)<<7))
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_two_line_prediction_en(data)         (0x00000040&((data)<<6))
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_line_mode(data)                      (0x00000020&((data)<<5))
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_data_color(data)                     (0x00000010&((data)<<4))
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_data_bit_width(data)                 (0x0000000C&((data)<<2))
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_decmp_data_format(data)                    (0x00000003&(data))
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_get_decmp_line_sum_bit(data)               ((0xFFFF0000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_get_decmp_400_old_mode_en(data)            ((0x00008000&(data))>>15)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_get_dummy_14_13(data)                      ((0x00006000&(data))>>13)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_get_decmp_qp_mode_sel(data)                ((0x00001000&(data))>>12)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_get_decmp_data_bit_width_sel(data)         ((0x00000800&(data))>>11)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_get_decmp_jump4_en(data)                   ((0x00000400&(data))>>10)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_get_decmp_qp_mode(data)                    ((0x00000300&(data))>>8)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_get_decmp_dic_mode_en(data)                ((0x00000080&(data))>>7)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_get_decmp_two_line_prediction_en(data)     ((0x00000040&(data))>>6)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_get_decmp_line_mode(data)                  ((0x00000020&(data))>>5)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_get_decmp_data_color(data)                 ((0x00000010&(data))>>4)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_get_decmp_data_bit_width(data)             ((0x0000000C&(data))>>2)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAIR_get_decmp_data_format(data)                (0x00000003&(data))

#define  PQC_PQDC_MC_LF_PQ_DECMP_SAT_EN                                         0x18099808
#define  PQC_PQDC_MC_LF_PQ_DECMP_SAT_EN_reg_addr                                 "0xB8099808"
#define  PQC_PQDC_MC_LF_PQ_DECMP_SAT_EN_reg                                      0xB8099808
#define  PQC_PQDC_MC_LF_PQ_DECMP_SAT_EN_inst_addr                                "0x0032"
#define  set_PQC_PQDC_MC_LF_PQ_DECMP_SAT_EN_reg(data)                            (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_SAT_EN_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_DECMP_SAT_EN_reg                                  (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_SAT_EN_reg))
#define  PQC_PQDC_MC_LF_PQ_DECMP_SAT_EN_decmp_crc_ro_line_sel_shift              (16)
#define  PQC_PQDC_MC_LF_PQ_DECMP_SAT_EN_saturation_type_delta_shift              (2)
#define  PQC_PQDC_MC_LF_PQ_DECMP_SAT_EN_saturation_type_shift                    (1)
#define  PQC_PQDC_MC_LF_PQ_DECMP_SAT_EN_saturation_en_shift                      (0)
#define  PQC_PQDC_MC_LF_PQ_DECMP_SAT_EN_decmp_crc_ro_line_sel_mask               (0x3FFF0000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_SAT_EN_saturation_type_delta_mask               (0x00000004)
#define  PQC_PQDC_MC_LF_PQ_DECMP_SAT_EN_saturation_type_mask                     (0x00000002)
#define  PQC_PQDC_MC_LF_PQ_DECMP_SAT_EN_saturation_en_mask                       (0x00000001)
#define  PQC_PQDC_MC_LF_PQ_DECMP_SAT_EN_decmp_crc_ro_line_sel(data)              (0x3FFF0000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_DECMP_SAT_EN_saturation_type_delta(data)              (0x00000004&((data)<<2))
#define  PQC_PQDC_MC_LF_PQ_DECMP_SAT_EN_saturation_type(data)                    (0x00000002&((data)<<1))
#define  PQC_PQDC_MC_LF_PQ_DECMP_SAT_EN_saturation_en(data)                      (0x00000001&(data))
#define  PQC_PQDC_MC_LF_PQ_DECMP_SAT_EN_get_decmp_crc_ro_line_sel(data)          ((0x3FFF0000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_DECMP_SAT_EN_get_saturation_type_delta(data)          ((0x00000004&(data))>>2)
#define  PQC_PQDC_MC_LF_PQ_DECMP_SAT_EN_get_saturation_type(data)                ((0x00000002&(data))>>1)
#define  PQC_PQDC_MC_LF_PQ_DECMP_SAT_EN_get_saturation_en(data)                  (0x00000001&(data))

#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN                                         0x1809980C
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_reg_addr                                 "0xB809980C"
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_reg                                      0xB809980C
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_inst_addr                                "0x0033"
#define  set_PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_reg(data)                            (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_reg                                  (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_reg))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_not_finish_irq_even_en_shift             (21)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_underflow_irq_even_en_shift              (20)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_dic_error_even_en_shift                  (19)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_crc_r_error_even_en_shift                (18)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_crc_g_error_even_en_shift                (17)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_crc_b_error_even_en_shift                (16)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_p_not_finish_irq_even_en_shift           (5)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_p_underflow_irq_even_en_shift            (4)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_p_dic_error_even_en_shift                (3)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_p_crc_r_error_even_en_shift              (2)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_p_crc_g_error_even_en_shift              (1)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_p_crc_b_error_even_en_shift              (0)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_not_finish_irq_even_en_mask              (0x00200000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_underflow_irq_even_en_mask               (0x00100000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_dic_error_even_en_mask                   (0x00080000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_crc_r_error_even_en_mask                 (0x00040000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_crc_g_error_even_en_mask                 (0x00020000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_crc_b_error_even_en_mask                 (0x00010000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_p_not_finish_irq_even_en_mask            (0x00000020)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_p_underflow_irq_even_en_mask             (0x00000010)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_p_dic_error_even_en_mask                 (0x00000008)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_p_crc_r_error_even_en_mask               (0x00000004)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_p_crc_g_error_even_en_mask               (0x00000002)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_p_crc_b_error_even_en_mask               (0x00000001)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_not_finish_irq_even_en(data)             (0x00200000&((data)<<21))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_underflow_irq_even_en(data)              (0x00100000&((data)<<20))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_dic_error_even_en(data)                  (0x00080000&((data)<<19))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_crc_r_error_even_en(data)                (0x00040000&((data)<<18))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_crc_g_error_even_en(data)                (0x00020000&((data)<<17))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_crc_b_error_even_en(data)                (0x00010000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_p_not_finish_irq_even_en(data)           (0x00000020&((data)<<5))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_p_underflow_irq_even_en(data)            (0x00000010&((data)<<4))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_p_dic_error_even_en(data)                (0x00000008&((data)<<3))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_p_crc_r_error_even_en(data)              (0x00000004&((data)<<2))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_p_crc_g_error_even_en(data)              (0x00000002&((data)<<1))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_p_crc_b_error_even_en(data)              (0x00000001&(data))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_get_not_finish_irq_even_en(data)         ((0x00200000&(data))>>21)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_get_underflow_irq_even_en(data)          ((0x00100000&(data))>>20)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_get_dic_error_even_en(data)              ((0x00080000&(data))>>19)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_get_crc_r_error_even_en(data)            ((0x00040000&(data))>>18)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_get_crc_g_error_even_en(data)            ((0x00020000&(data))>>17)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_get_crc_b_error_even_en(data)            ((0x00010000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_get_p_not_finish_irq_even_en(data)       ((0x00000020&(data))>>5)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_get_p_underflow_irq_even_en(data)        ((0x00000010&(data))>>4)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_get_p_dic_error_even_en(data)            ((0x00000008&(data))>>3)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_get_p_crc_r_error_even_en(data)          ((0x00000004&(data))>>2)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_get_p_crc_g_error_even_en(data)          ((0x00000002&(data))>>1)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_EN_get_p_crc_b_error_even_en(data)          (0x00000001&(data))

#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st                                         0x18099810
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_reg_addr                                 "0xB8099810"
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_reg                                      0xB8099810
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_inst_addr                                "0x0034"
#define  set_PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_reg(data)                            (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_reg                                  (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_reg))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_pqdc_irq_shift                           (31)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_in_fifo_overflow_even_st_shift           (27)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_ring_r_overflow_even_st_shift            (26)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_ring_g_overflow_even_st_shift            (25)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_ring_b_overflow_even_st_shift            (24)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_not_finish_irq_even_st_shift             (21)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_underflow_irq_even_st_shift              (20)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_dic_error_even_st_shift                  (19)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_crc_r_error_even_st_shift                (18)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_crc_g_error_even_st_shift                (17)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_crc_b_error_even_st_shift                (16)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_pqdc_irq_shift                         (15)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_in_fifo_overflow_even_st_shift         (11)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_ring_r_overflow_even_st_shift          (10)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_ring_g_overflow_even_st_shift          (9)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_ring_b_overflow_even_st_shift          (8)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_not_finish_irq_even_st_shift           (5)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_underflow_irq_even_st_shift            (4)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_dic_error_even_st_shift                (3)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_crc_r_error_even_st_shift              (2)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_crc_g_error_even_st_shift              (1)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_crc_b_error_even_st_shift              (0)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_pqdc_irq_mask                            (0x80000000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_in_fifo_overflow_even_st_mask            (0x08000000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_ring_r_overflow_even_st_mask             (0x04000000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_ring_g_overflow_even_st_mask             (0x02000000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_ring_b_overflow_even_st_mask             (0x01000000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_not_finish_irq_even_st_mask              (0x00200000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_underflow_irq_even_st_mask               (0x00100000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_dic_error_even_st_mask                   (0x00080000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_crc_r_error_even_st_mask                 (0x00040000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_crc_g_error_even_st_mask                 (0x00020000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_crc_b_error_even_st_mask                 (0x00010000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_pqdc_irq_mask                          (0x00008000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_in_fifo_overflow_even_st_mask          (0x00000800)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_ring_r_overflow_even_st_mask           (0x00000400)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_ring_g_overflow_even_st_mask           (0x00000200)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_ring_b_overflow_even_st_mask           (0x00000100)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_not_finish_irq_even_st_mask            (0x00000020)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_underflow_irq_even_st_mask             (0x00000010)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_dic_error_even_st_mask                 (0x00000008)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_crc_r_error_even_st_mask               (0x00000004)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_crc_g_error_even_st_mask               (0x00000002)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_crc_b_error_even_st_mask               (0x00000001)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_pqdc_irq(data)                           (0x80000000&((data)<<31))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_in_fifo_overflow_even_st(data)           (0x08000000&((data)<<27))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_ring_r_overflow_even_st(data)            (0x04000000&((data)<<26))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_ring_g_overflow_even_st(data)            (0x02000000&((data)<<25))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_ring_b_overflow_even_st(data)            (0x01000000&((data)<<24))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_not_finish_irq_even_st(data)             (0x00200000&((data)<<21))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_underflow_irq_even_st(data)              (0x00100000&((data)<<20))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_dic_error_even_st(data)                  (0x00080000&((data)<<19))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_crc_r_error_even_st(data)                (0x00040000&((data)<<18))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_crc_g_error_even_st(data)                (0x00020000&((data)<<17))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_crc_b_error_even_st(data)                (0x00010000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_pqdc_irq(data)                         (0x00008000&((data)<<15))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_in_fifo_overflow_even_st(data)         (0x00000800&((data)<<11))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_ring_r_overflow_even_st(data)          (0x00000400&((data)<<10))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_ring_g_overflow_even_st(data)          (0x00000200&((data)<<9))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_ring_b_overflow_even_st(data)          (0x00000100&((data)<<8))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_not_finish_irq_even_st(data)           (0x00000020&((data)<<5))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_underflow_irq_even_st(data)            (0x00000010&((data)<<4))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_dic_error_even_st(data)                (0x00000008&((data)<<3))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_crc_r_error_even_st(data)              (0x00000004&((data)<<2))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_crc_g_error_even_st(data)              (0x00000002&((data)<<1))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_p_crc_b_error_even_st(data)              (0x00000001&(data))
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_get_pqdc_irq(data)                       ((0x80000000&(data))>>31)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_get_in_fifo_overflow_even_st(data)       ((0x08000000&(data))>>27)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_get_ring_r_overflow_even_st(data)        ((0x04000000&(data))>>26)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_get_ring_g_overflow_even_st(data)        ((0x02000000&(data))>>25)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_get_ring_b_overflow_even_st(data)        ((0x01000000&(data))>>24)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_get_not_finish_irq_even_st(data)         ((0x00200000&(data))>>21)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_get_underflow_irq_even_st(data)          ((0x00100000&(data))>>20)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_get_dic_error_even_st(data)              ((0x00080000&(data))>>19)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_get_crc_r_error_even_st(data)            ((0x00040000&(data))>>18)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_get_crc_g_error_even_st(data)            ((0x00020000&(data))>>17)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_get_crc_b_error_even_st(data)            ((0x00010000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_get_p_pqdc_irq(data)                     ((0x00008000&(data))>>15)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_get_p_in_fifo_overflow_even_st(data)     ((0x00000800&(data))>>11)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_get_p_ring_r_overflow_even_st(data)      ((0x00000400&(data))>>10)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_get_p_ring_g_overflow_even_st(data)      ((0x00000200&(data))>>9)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_get_p_ring_b_overflow_even_st(data)      ((0x00000100&(data))>>8)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_get_p_not_finish_irq_even_st(data)       ((0x00000020&(data))>>5)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_get_p_underflow_irq_even_st(data)        ((0x00000010&(data))>>4)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_get_p_dic_error_even_st(data)            ((0x00000008&(data))>>3)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_get_p_crc_r_error_even_st(data)          ((0x00000004&(data))>>2)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_get_p_crc_g_error_even_st(data)          ((0x00000002&(data))>>1)
#define  PQC_PQDC_MC_LF_PQ_DECMP_IRQ_st_get_p_crc_b_error_even_st(data)          (0x00000001&(data))

#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN                                        0x18099814
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_reg_addr                                "0xB8099814"
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_reg                                     0xB8099814
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_inst_addr                               "0x0035"
#define  set_PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_reg(data)                           (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_reg                                 (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_reg))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_do_422_shift                    (31)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_dic_shift                       (17)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp_sel_shift                    (16)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp7_shift                       (7)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp6_shift                       (6)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp5_shift                       (5)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp4_shift                       (4)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp3_shift                       (3)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp2_shift                       (2)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp1_shift                       (1)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp0_shift                       (0)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_do_422_mask                     (0x80000000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_dic_mask                        (0x00020000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp_sel_mask                     (0x00010000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp7_mask                        (0x00000080)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp6_mask                        (0x00000040)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp5_mask                        (0x00000020)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp4_mask                        (0x00000010)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp3_mask                        (0x00000008)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp2_mask                        (0x00000004)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp1_mask                        (0x00000002)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp0_mask                        (0x00000001)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_do_422(data)                    (0x80000000&((data)<<31))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_dic(data)                       (0x00020000&((data)<<17))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp_sel(data)                    (0x00010000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp7(data)                       (0x00000080&((data)<<7))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp6(data)                       (0x00000040&((data)<<6))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp5(data)                       (0x00000020&((data)<<5))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp4(data)                       (0x00000010&((data)<<4))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp3(data)                       (0x00000008&((data)<<3))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp2(data)                       (0x00000004&((data)<<2))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp1(data)                       (0x00000002&((data)<<1))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_mark_en_qp0(data)                       (0x00000001&(data))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_get_mark_en_do_422(data)                ((0x80000000&(data))>>31)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_get_mark_en_dic(data)                   ((0x00020000&(data))>>17)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_get_mark_en_qp_sel(data)                ((0x00010000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_get_mark_en_qp7(data)                   ((0x00000080&(data))>>7)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_get_mark_en_qp6(data)                   ((0x00000040&(data))>>6)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_get_mark_en_qp5(data)                   ((0x00000020&(data))>>5)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_get_mark_en_qp4(data)                   ((0x00000010&(data))>>4)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_get_mark_en_qp3(data)                   ((0x00000008&(data))>>3)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_get_mark_en_qp2(data)                   ((0x00000004&(data))>>2)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_get_mark_en_qp1(data)                   ((0x00000002&(data))>>1)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_EN_get_mark_en_qp0(data)                   (0x00000001&(data))

#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_01                                  0x18099818
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_01_reg_addr                          "0xB8099818"
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_01_reg                               0xB8099818
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_01_inst_addr                         "0x0036"
#define  set_PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_01_reg(data)                     (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_01_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_01_reg                           (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_01_reg))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_01_mark_color_0_shift                (16)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_01_mark_color_1_shift                (0)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_01_mark_color_0_mask                 (0xFFFF0000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_01_mark_color_1_mask                 (0x0000FFFF)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_01_mark_color_0(data)                (0xFFFF0000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_01_mark_color_1(data)                (0x0000FFFF&(data))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_01_get_mark_color_0(data)            ((0xFFFF0000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_01_get_mark_color_1(data)            (0x0000FFFF&(data))

#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_23                                  0x1809981C
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_23_reg_addr                          "0xB809981C"
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_23_reg                               0xB809981C
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_23_inst_addr                         "0x0037"
#define  set_PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_23_reg(data)                     (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_23_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_23_reg                           (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_23_reg))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_23_mark_color_2_shift                (16)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_23_mark_color_3_shift                (0)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_23_mark_color_2_mask                 (0xFFFF0000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_23_mark_color_3_mask                 (0x0000FFFF)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_23_mark_color_2(data)                (0xFFFF0000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_23_mark_color_3(data)                (0x0000FFFF&(data))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_23_get_mark_color_2(data)            ((0xFFFF0000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_23_get_mark_color_3(data)            (0x0000FFFF&(data))

#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_45                                  0x18099820
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_45_reg_addr                          "0xB8099820"
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_45_reg                               0xB8099820
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_45_inst_addr                         "0x0038"
#define  set_PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_45_reg(data)                     (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_45_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_45_reg                           (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_45_reg))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_45_mark_color_4_shift                (16)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_45_mark_color_5_shift                (0)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_45_mark_color_4_mask                 (0xFFFF0000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_45_mark_color_5_mask                 (0x0000FFFF)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_45_mark_color_4(data)                (0xFFFF0000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_45_mark_color_5(data)                (0x0000FFFF&(data))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_45_get_mark_color_4(data)            ((0xFFFF0000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_45_get_mark_color_5(data)            (0x0000FFFF&(data))

#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_67                                  0x18099824
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_67_reg_addr                          "0xB8099824"
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_67_reg                               0xB8099824
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_67_inst_addr                         "0x0039"
#define  set_PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_67_reg(data)                     (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_67_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_67_reg                           (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_67_reg))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_67_mark_color_6_shift                (16)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_67_mark_color_7_shift                (0)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_67_mark_color_6_mask                 (0xFFFF0000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_67_mark_color_7_mask                 (0x0000FFFF)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_67_mark_color_6(data)                (0xFFFF0000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_67_mark_color_7(data)                (0x0000FFFF&(data))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_67_get_mark_color_6(data)            ((0xFFFF0000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_67_get_mark_color_7(data)            (0x0000FFFF&(data))

#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_422                                 0x18099828
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_422_reg_addr                         "0xB8099828"
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_422_reg                              0xB8099828
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_422_inst_addr                        "0x003A"
#define  set_PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_422_reg(data)                    (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_422_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_422_reg                          (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_422_reg))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_422_mark_color_dic_shift             (16)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_422_mark_color_422_shift             (0)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_422_mark_color_dic_mask              (0xFFFF0000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_422_mark_color_422_mask              (0x0000FFFF)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_422_mark_color_dic(data)             (0xFFFF0000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_422_mark_color_422(data)             (0x0000FFFF&(data))
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_422_get_mark_color_dic(data)         ((0xFFFF0000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_DECMP_MARK_color_422_get_mark_color_422(data)         (0x0000FFFF&(data))

#define  PQC_PQDC_MC_LF_PQ_DECMP_ST                                             0x1809982C
#define  PQC_PQDC_MC_LF_PQ_DECMP_ST_reg_addr                                     "0xB809982C"
#define  PQC_PQDC_MC_LF_PQ_DECMP_ST_reg                                          0xB809982C
#define  PQC_PQDC_MC_LF_PQ_DECMP_ST_inst_addr                                    "0x003B"
#define  set_PQC_PQDC_MC_LF_PQ_DECMP_ST_reg(data)                                (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_ST_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_DECMP_ST_reg                                      (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_ST_reg))
#define  PQC_PQDC_MC_LF_PQ_DECMP_ST_decmp_crc_error_line_shift                   (16)
#define  PQC_PQDC_MC_LF_PQ_DECMP_ST_decmp_package_height_cnt_shift               (0)
#define  PQC_PQDC_MC_LF_PQ_DECMP_ST_decmp_crc_error_line_mask                    (0x3FFF0000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_ST_decmp_package_height_cnt_mask                (0x00003FFF)
#define  PQC_PQDC_MC_LF_PQ_DECMP_ST_decmp_crc_error_line(data)                   (0x3FFF0000&((data)<<16))
#define  PQC_PQDC_MC_LF_PQ_DECMP_ST_decmp_package_height_cnt(data)               (0x00003FFF&(data))
#define  PQC_PQDC_MC_LF_PQ_DECMP_ST_get_decmp_crc_error_line(data)               ((0x3FFF0000&(data))>>16)
#define  PQC_PQDC_MC_LF_PQ_DECMP_ST_get_decmp_package_height_cnt(data)           (0x00003FFF&(data))

#define  PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_G                                     0x18099830
#define  PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_G_reg_addr                             "0xB8099830"
#define  PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_G_reg                                  0xB8099830
#define  PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_G_inst_addr                            "0x003C"
#define  set_PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_G_reg(data)                        (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_G_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_G_reg                              (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_G_reg))
#define  PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_G_decmp_crc_even_g_shift               (0)
#define  PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_G_decmp_crc_even_g_mask                (0xFFFFFFFF)
#define  PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_G_decmp_crc_even_g(data)               (0xFFFFFFFF&(data))
#define  PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_G_get_decmp_crc_even_g(data)           (0xFFFFFFFF&(data))

#define  PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_R                                     0x18099834
#define  PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_R_reg_addr                             "0xB8099834"
#define  PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_R_reg                                  0xB8099834
#define  PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_R_inst_addr                            "0x003D"
#define  set_PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_R_reg(data)                        (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_R_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_R_reg                              (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_R_reg))
#define  PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_R_decmp_crc_even_r_shift               (0)
#define  PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_R_decmp_crc_even_r_mask                (0xFFFFFFFF)
#define  PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_R_decmp_crc_even_r(data)               (0xFFFFFFFF&(data))
#define  PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_R_get_decmp_crc_even_r(data)           (0xFFFFFFFF&(data))

#define  PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_B                                     0x18099838
#define  PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_B_reg_addr                             "0xB8099838"
#define  PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_B_reg                                  0xB8099838
#define  PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_B_inst_addr                            "0x003E"
#define  set_PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_B_reg(data)                        (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_B_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_B_reg                              (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_B_reg))
#define  PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_B_decmp_crc_even_b_shift               (0)
#define  PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_B_decmp_crc_even_b_mask                (0xFFFFFFFF)
#define  PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_B_decmp_crc_even_b(data)               (0xFFFFFFFF&(data))
#define  PQC_PQDC_MC_LF_PQ_DECMP_CRC_EVEN_B_get_decmp_crc_even_b(data)           (0xFFFFFFFF&(data))

#define  PQC_PQDC_MC_LF_P_PQ_DECMP_ST                                           0x1809983C
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_ST_reg_addr                                   "0xB809983C"
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_ST_reg                                        0xB809983C
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_ST_inst_addr                                  "0x003F"
#define  set_PQC_PQDC_MC_LF_P_PQ_DECMP_ST_reg(data)                              (*((volatile unsigned int*)PQC_PQDC_MC_LF_P_PQ_DECMP_ST_reg)=data)
#define  get_PQC_PQDC_MC_LF_P_PQ_DECMP_ST_reg                                    (*((volatile unsigned int*)PQC_PQDC_MC_LF_P_PQ_DECMP_ST_reg))
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_ST_decmp_crc_error_line_shift                 (16)
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_ST_decmp_package_height_cnt_shift             (0)
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_ST_decmp_crc_error_line_mask                  (0x3FFF0000)
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_ST_decmp_package_height_cnt_mask              (0x00003FFF)
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_ST_decmp_crc_error_line(data)                 (0x3FFF0000&((data)<<16))
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_ST_decmp_package_height_cnt(data)             (0x00003FFF&(data))
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_ST_get_decmp_crc_error_line(data)             ((0x3FFF0000&(data))>>16)
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_ST_get_decmp_package_height_cnt(data)         (0x00003FFF&(data))

#define  PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_G                                   0x18099840
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_G_reg_addr                           "0xB8099840"
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_G_reg                                0xB8099840
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_G_inst_addr                          "0x0040"
#define  set_PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_G_reg(data)                      (*((volatile unsigned int*)PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_G_reg)=data)
#define  get_PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_G_reg                            (*((volatile unsigned int*)PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_G_reg))
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_G_decmp_crc_even_g_shift             (0)
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_G_decmp_crc_even_g_mask              (0xFFFFFFFF)
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_G_decmp_crc_even_g(data)             (0xFFFFFFFF&(data))
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_G_get_decmp_crc_even_g(data)         (0xFFFFFFFF&(data))

#define  PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_R                                   0x18099844
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_R_reg_addr                           "0xB8099844"
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_R_reg                                0xB8099844
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_R_inst_addr                          "0x0041"
#define  set_PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_R_reg(data)                      (*((volatile unsigned int*)PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_R_reg)=data)
#define  get_PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_R_reg                            (*((volatile unsigned int*)PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_R_reg))
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_R_decmp_crc_even_r_shift             (0)
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_R_decmp_crc_even_r_mask              (0xFFFFFFFF)
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_R_decmp_crc_even_r(data)             (0xFFFFFFFF&(data))
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_R_get_decmp_crc_even_r(data)         (0xFFFFFFFF&(data))

#define  PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_B                                   0x18099848
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_B_reg_addr                           "0xB8099848"
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_B_reg                                0xB8099848
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_B_inst_addr                          "0x0042"
#define  set_PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_B_reg(data)                      (*((volatile unsigned int*)PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_B_reg)=data)
#define  get_PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_B_reg                            (*((volatile unsigned int*)PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_B_reg))
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_B_decmp_crc_even_b_shift             (0)
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_B_decmp_crc_even_b_mask              (0xFFFFFFFF)
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_B_decmp_crc_even_b(data)             (0xFFFFFFFF&(data))
#define  PQC_PQDC_MC_LF_P_PQ_DECMP_CRC_EVEN_B_get_decmp_crc_even_b(data)         (0xFFFFFFFF&(data))

#define  PQC_PQDC_MC_LF_PQ_DECMP_PAUSE_CYCLE                                    0x1809984C
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAUSE_CYCLE_reg_addr                            "0xB809984C"
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAUSE_CYCLE_reg                                 0xB809984C
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAUSE_CYCLE_inst_addr                           "0x0043"
#define  set_PQC_PQDC_MC_LF_PQ_DECMP_PAUSE_CYCLE_reg(data)                       (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_PAUSE_CYCLE_reg)=data)
#define  get_PQC_PQDC_MC_LF_PQ_DECMP_PAUSE_CYCLE_reg                             (*((volatile unsigned int*)PQC_PQDC_MC_LF_PQ_DECMP_PAUSE_CYCLE_reg))
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_measure_en_shift  (31)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_long_term_shift   (30)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAUSE_CYCLE_p_decmp_pause_cycle_shift           (8)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_shift             (0)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_measure_en_mask   (0x80000000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_long_term_mask    (0x40000000)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAUSE_CYCLE_p_decmp_pause_cycle_mask            (0x0000FF00)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_mask              (0x000000FF)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_measure_en(data)  (0x80000000&((data)<<31))
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_long_term(data)   (0x40000000&((data)<<30))
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAUSE_CYCLE_p_decmp_pause_cycle(data)           (0x0000FF00&((data)<<8))
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle(data)             (0x000000FF&(data))
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAUSE_CYCLE_get_decmp_pause_cycle_measure_en(data) ((0x80000000&(data))>>31)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAUSE_CYCLE_get_decmp_pause_cycle_long_term(data) ((0x40000000&(data))>>30)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAUSE_CYCLE_get_p_decmp_pause_cycle(data)       ((0x0000FF00&(data))>>8)
#define  PQC_PQDC_MC_LF_PQ_DECMP_PAUSE_CYCLE_get_decmp_pause_cycle(data)         (0x000000FF&(data))

#define  PQC_PQDC_MC_PQ_DECMP_DB_CTRL                                           0x18099850
#define  PQC_PQDC_MC_PQ_DECMP_DB_CTRL_reg_addr                                   "0xB8099850"
#define  PQC_PQDC_MC_PQ_DECMP_DB_CTRL_reg                                        0xB8099850
#define  PQC_PQDC_MC_PQ_DECMP_DB_CTRL_inst_addr                                  "0x0044"
#define  set_PQC_PQDC_MC_PQ_DECMP_DB_CTRL_reg(data)                              (*((volatile unsigned int*)PQC_PQDC_MC_PQ_DECMP_DB_CTRL_reg)=data)
#define  get_PQC_PQDC_MC_PQ_DECMP_DB_CTRL_reg                                    (*((volatile unsigned int*)PQC_PQDC_MC_PQ_DECMP_DB_CTRL_reg))
#define  PQC_PQDC_MC_PQ_DECMP_DB_CTRL_decmp_db_apply_shift                       (2)
#define  PQC_PQDC_MC_PQ_DECMP_DB_CTRL_decmp_db_rd_sel_shift                      (1)
#define  PQC_PQDC_MC_PQ_DECMP_DB_CTRL_decmp_db_en_shift                          (0)
#define  PQC_PQDC_MC_PQ_DECMP_DB_CTRL_decmp_db_apply_mask                        (0x00000004)
#define  PQC_PQDC_MC_PQ_DECMP_DB_CTRL_decmp_db_rd_sel_mask                       (0x00000002)
#define  PQC_PQDC_MC_PQ_DECMP_DB_CTRL_decmp_db_en_mask                           (0x00000001)
#define  PQC_PQDC_MC_PQ_DECMP_DB_CTRL_decmp_db_apply(data)                       (0x00000004&((data)<<2))
#define  PQC_PQDC_MC_PQ_DECMP_DB_CTRL_decmp_db_rd_sel(data)                      (0x00000002&((data)<<1))
#define  PQC_PQDC_MC_PQ_DECMP_DB_CTRL_decmp_db_en(data)                          (0x00000001&(data))
#define  PQC_PQDC_MC_PQ_DECMP_DB_CTRL_get_decmp_db_apply(data)                   ((0x00000004&(data))>>2)
#define  PQC_PQDC_MC_PQ_DECMP_DB_CTRL_get_decmp_db_rd_sel(data)                  ((0x00000002&(data))>>1)
#define  PQC_PQDC_MC_PQ_DECMP_DB_CTRL_get_decmp_db_en(data)                      (0x00000001&(data))

#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR                                           0x18099884
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_reg_addr                                   "0xB8099884"
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_reg                                        0xB8099884
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_inst_addr                                  "0x0045"
#define  set_PQC_PQDC_MC_HF_PQ_DECMP_PAIR_reg(data)                              (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_PAIR_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_DECMP_PAIR_reg                                    (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_PAIR_reg))
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_line_sum_bit_shift                   (16)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_400_old_mode_en_shift                (15)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_dummy_14_shift                             (14)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_data_format_sel_shift                (13)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_qp_mode_sel_shift                    (12)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_data_bit_width_sel_shift             (11)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_jump4_en_shift                       (10)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_qp_mode_shift                        (8)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_dic_mode_en_shift                    (7)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_line_mode_shift                      (5)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_data_color_shift                     (4)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_data_bit_width_shift                 (2)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_data_format_shift                    (0)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_line_sum_bit_mask                    (0xFFFF0000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_400_old_mode_en_mask                 (0x00008000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_dummy_14_mask                              (0x00004000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_data_format_sel_mask                 (0x00002000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_qp_mode_sel_mask                     (0x00001000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_data_bit_width_sel_mask              (0x00000800)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_jump4_en_mask                        (0x00000400)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_qp_mode_mask                         (0x00000300)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_dic_mode_en_mask                     (0x00000080)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_line_mode_mask                       (0x00000020)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_data_color_mask                      (0x00000010)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_data_bit_width_mask                  (0x0000000C)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_data_format_mask                     (0x00000003)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_line_sum_bit(data)                   (0xFFFF0000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_400_old_mode_en(data)                (0x00008000&((data)<<15))
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_dummy_14(data)                             (0x00004000&((data)<<14))
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_data_format_sel(data)                (0x00002000&((data)<<13))
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_qp_mode_sel(data)                    (0x00001000&((data)<<12))
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_data_bit_width_sel(data)             (0x00000800&((data)<<11))
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_jump4_en(data)                       (0x00000400&((data)<<10))
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_qp_mode(data)                        (0x00000300&((data)<<8))
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_dic_mode_en(data)                    (0x00000080&((data)<<7))
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_line_mode(data)                      (0x00000020&((data)<<5))
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_data_color(data)                     (0x00000010&((data)<<4))
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_data_bit_width(data)                 (0x0000000C&((data)<<2))
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_decmp_data_format(data)                    (0x00000003&(data))
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_get_decmp_line_sum_bit(data)               ((0xFFFF0000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_get_decmp_400_old_mode_en(data)            ((0x00008000&(data))>>15)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_get_dummy_14(data)                         ((0x00004000&(data))>>14)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_get_decmp_data_format_sel(data)            ((0x00002000&(data))>>13)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_get_decmp_qp_mode_sel(data)                ((0x00001000&(data))>>12)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_get_decmp_data_bit_width_sel(data)         ((0x00000800&(data))>>11)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_get_decmp_jump4_en(data)                   ((0x00000400&(data))>>10)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_get_decmp_qp_mode(data)                    ((0x00000300&(data))>>8)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_get_decmp_dic_mode_en(data)                ((0x00000080&(data))>>7)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_get_decmp_line_mode(data)                  ((0x00000020&(data))>>5)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_get_decmp_data_color(data)                 ((0x00000010&(data))>>4)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_get_decmp_data_bit_width(data)             ((0x0000000C&(data))>>2)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAIR_get_decmp_data_format(data)                (0x00000003&(data))

#define  PQC_PQDC_MC_HF_PQ_DECMP_SAT_EN                                         0x18099888
#define  PQC_PQDC_MC_HF_PQ_DECMP_SAT_EN_reg_addr                                 "0xB8099888"
#define  PQC_PQDC_MC_HF_PQ_DECMP_SAT_EN_reg                                      0xB8099888
#define  PQC_PQDC_MC_HF_PQ_DECMP_SAT_EN_inst_addr                                "0x0046"
#define  set_PQC_PQDC_MC_HF_PQ_DECMP_SAT_EN_reg(data)                            (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_SAT_EN_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_DECMP_SAT_EN_reg                                  (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_SAT_EN_reg))
#define  PQC_PQDC_MC_HF_PQ_DECMP_SAT_EN_decmp_crc_ro_line_sel_shift              (16)
#define  PQC_PQDC_MC_HF_PQ_DECMP_SAT_EN_saturation_type_delta_shift              (2)
#define  PQC_PQDC_MC_HF_PQ_DECMP_SAT_EN_saturation_type_shift                    (1)
#define  PQC_PQDC_MC_HF_PQ_DECMP_SAT_EN_saturation_en_shift                      (0)
#define  PQC_PQDC_MC_HF_PQ_DECMP_SAT_EN_decmp_crc_ro_line_sel_mask               (0x3FFF0000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_SAT_EN_saturation_type_delta_mask               (0x00000004)
#define  PQC_PQDC_MC_HF_PQ_DECMP_SAT_EN_saturation_type_mask                     (0x00000002)
#define  PQC_PQDC_MC_HF_PQ_DECMP_SAT_EN_saturation_en_mask                       (0x00000001)
#define  PQC_PQDC_MC_HF_PQ_DECMP_SAT_EN_decmp_crc_ro_line_sel(data)              (0x3FFF0000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_DECMP_SAT_EN_saturation_type_delta(data)              (0x00000004&((data)<<2))
#define  PQC_PQDC_MC_HF_PQ_DECMP_SAT_EN_saturation_type(data)                    (0x00000002&((data)<<1))
#define  PQC_PQDC_MC_HF_PQ_DECMP_SAT_EN_saturation_en(data)                      (0x00000001&(data))
#define  PQC_PQDC_MC_HF_PQ_DECMP_SAT_EN_get_decmp_crc_ro_line_sel(data)          ((0x3FFF0000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_DECMP_SAT_EN_get_saturation_type_delta(data)          ((0x00000004&(data))>>2)
#define  PQC_PQDC_MC_HF_PQ_DECMP_SAT_EN_get_saturation_type(data)                ((0x00000002&(data))>>1)
#define  PQC_PQDC_MC_HF_PQ_DECMP_SAT_EN_get_saturation_en(data)                  (0x00000001&(data))

#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN                                         0x1809988C
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_reg_addr                                 "0xB809988C"
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_reg                                      0xB809988C
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_inst_addr                                "0x0047"
#define  set_PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_reg(data)                            (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_reg                                  (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_reg))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_not_finish_irq_even_en_shift             (21)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_underflow_irq_even_en_shift              (20)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_dic_error_even_en_shift                  (19)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_crc_r_error_even_en_shift                (18)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_crc_g_error_even_en_shift                (17)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_crc_b_error_even_en_shift                (16)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_p_not_finish_irq_even_en_shift           (5)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_p_underflow_irq_even_en_shift            (4)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_p_dic_error_even_en_shift                (3)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_p_crc_r_error_even_en_shift              (2)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_p_crc_g_error_even_en_shift              (1)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_p_crc_b_error_even_en_shift              (0)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_not_finish_irq_even_en_mask              (0x00200000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_underflow_irq_even_en_mask               (0x00100000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_dic_error_even_en_mask                   (0x00080000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_crc_r_error_even_en_mask                 (0x00040000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_crc_g_error_even_en_mask                 (0x00020000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_crc_b_error_even_en_mask                 (0x00010000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_p_not_finish_irq_even_en_mask            (0x00000020)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_p_underflow_irq_even_en_mask             (0x00000010)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_p_dic_error_even_en_mask                 (0x00000008)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_p_crc_r_error_even_en_mask               (0x00000004)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_p_crc_g_error_even_en_mask               (0x00000002)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_p_crc_b_error_even_en_mask               (0x00000001)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_not_finish_irq_even_en(data)             (0x00200000&((data)<<21))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_underflow_irq_even_en(data)              (0x00100000&((data)<<20))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_dic_error_even_en(data)                  (0x00080000&((data)<<19))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_crc_r_error_even_en(data)                (0x00040000&((data)<<18))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_crc_g_error_even_en(data)                (0x00020000&((data)<<17))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_crc_b_error_even_en(data)                (0x00010000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_p_not_finish_irq_even_en(data)           (0x00000020&((data)<<5))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_p_underflow_irq_even_en(data)            (0x00000010&((data)<<4))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_p_dic_error_even_en(data)                (0x00000008&((data)<<3))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_p_crc_r_error_even_en(data)              (0x00000004&((data)<<2))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_p_crc_g_error_even_en(data)              (0x00000002&((data)<<1))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_p_crc_b_error_even_en(data)              (0x00000001&(data))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_get_not_finish_irq_even_en(data)         ((0x00200000&(data))>>21)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_get_underflow_irq_even_en(data)          ((0x00100000&(data))>>20)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_get_dic_error_even_en(data)              ((0x00080000&(data))>>19)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_get_crc_r_error_even_en(data)            ((0x00040000&(data))>>18)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_get_crc_g_error_even_en(data)            ((0x00020000&(data))>>17)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_get_crc_b_error_even_en(data)            ((0x00010000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_get_p_not_finish_irq_even_en(data)       ((0x00000020&(data))>>5)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_get_p_underflow_irq_even_en(data)        ((0x00000010&(data))>>4)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_get_p_dic_error_even_en(data)            ((0x00000008&(data))>>3)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_get_p_crc_r_error_even_en(data)          ((0x00000004&(data))>>2)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_get_p_crc_g_error_even_en(data)          ((0x00000002&(data))>>1)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_EN_get_p_crc_b_error_even_en(data)          (0x00000001&(data))

#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st                                         0x18099890
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_reg_addr                                 "0xB8099890"
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_reg                                      0xB8099890
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_inst_addr                                "0x0048"
#define  set_PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_reg(data)                            (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_reg                                  (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_reg))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_pqdc_irq_shift                           (31)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_in_fifo_overflow_even_st_shift           (27)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_ring_r_overflow_even_st_shift            (26)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_ring_g_overflow_even_st_shift            (25)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_ring_b_overflow_even_st_shift            (24)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_not_finish_irq_even_st_shift             (21)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_underflow_irq_even_st_shift              (20)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_dic_error_even_st_shift                  (19)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_crc_r_error_even_st_shift                (18)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_crc_g_error_even_st_shift                (17)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_crc_b_error_even_st_shift                (16)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_pqdc_irq_shift                         (15)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_in_fifo_overflow_even_st_shift         (11)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_ring_r_overflow_even_st_shift          (10)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_ring_g_overflow_even_st_shift          (9)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_ring_b_overflow_even_st_shift          (8)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_not_finish_irq_even_st_shift           (5)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_underflow_irq_even_st_shift            (4)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_dic_error_even_st_shift                (3)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_crc_r_error_even_st_shift              (2)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_crc_g_error_even_st_shift              (1)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_crc_b_error_even_st_shift              (0)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_pqdc_irq_mask                            (0x80000000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_in_fifo_overflow_even_st_mask            (0x08000000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_ring_r_overflow_even_st_mask             (0x04000000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_ring_g_overflow_even_st_mask             (0x02000000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_ring_b_overflow_even_st_mask             (0x01000000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_not_finish_irq_even_st_mask              (0x00200000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_underflow_irq_even_st_mask               (0x00100000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_dic_error_even_st_mask                   (0x00080000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_crc_r_error_even_st_mask                 (0x00040000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_crc_g_error_even_st_mask                 (0x00020000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_crc_b_error_even_st_mask                 (0x00010000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_pqdc_irq_mask                          (0x00008000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_in_fifo_overflow_even_st_mask          (0x00000800)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_ring_r_overflow_even_st_mask           (0x00000400)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_ring_g_overflow_even_st_mask           (0x00000200)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_ring_b_overflow_even_st_mask           (0x00000100)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_not_finish_irq_even_st_mask            (0x00000020)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_underflow_irq_even_st_mask             (0x00000010)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_dic_error_even_st_mask                 (0x00000008)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_crc_r_error_even_st_mask               (0x00000004)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_crc_g_error_even_st_mask               (0x00000002)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_crc_b_error_even_st_mask               (0x00000001)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_pqdc_irq(data)                           (0x80000000&((data)<<31))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_in_fifo_overflow_even_st(data)           (0x08000000&((data)<<27))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_ring_r_overflow_even_st(data)            (0x04000000&((data)<<26))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_ring_g_overflow_even_st(data)            (0x02000000&((data)<<25))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_ring_b_overflow_even_st(data)            (0x01000000&((data)<<24))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_not_finish_irq_even_st(data)             (0x00200000&((data)<<21))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_underflow_irq_even_st(data)              (0x00100000&((data)<<20))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_dic_error_even_st(data)                  (0x00080000&((data)<<19))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_crc_r_error_even_st(data)                (0x00040000&((data)<<18))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_crc_g_error_even_st(data)                (0x00020000&((data)<<17))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_crc_b_error_even_st(data)                (0x00010000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_pqdc_irq(data)                         (0x00008000&((data)<<15))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_in_fifo_overflow_even_st(data)         (0x00000800&((data)<<11))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_ring_r_overflow_even_st(data)          (0x00000400&((data)<<10))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_ring_g_overflow_even_st(data)          (0x00000200&((data)<<9))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_ring_b_overflow_even_st(data)          (0x00000100&((data)<<8))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_not_finish_irq_even_st(data)           (0x00000020&((data)<<5))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_underflow_irq_even_st(data)            (0x00000010&((data)<<4))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_dic_error_even_st(data)                (0x00000008&((data)<<3))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_crc_r_error_even_st(data)              (0x00000004&((data)<<2))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_crc_g_error_even_st(data)              (0x00000002&((data)<<1))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_p_crc_b_error_even_st(data)              (0x00000001&(data))
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_get_pqdc_irq(data)                       ((0x80000000&(data))>>31)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_get_in_fifo_overflow_even_st(data)       ((0x08000000&(data))>>27)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_get_ring_r_overflow_even_st(data)        ((0x04000000&(data))>>26)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_get_ring_g_overflow_even_st(data)        ((0x02000000&(data))>>25)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_get_ring_b_overflow_even_st(data)        ((0x01000000&(data))>>24)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_get_not_finish_irq_even_st(data)         ((0x00200000&(data))>>21)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_get_underflow_irq_even_st(data)          ((0x00100000&(data))>>20)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_get_dic_error_even_st(data)              ((0x00080000&(data))>>19)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_get_crc_r_error_even_st(data)            ((0x00040000&(data))>>18)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_get_crc_g_error_even_st(data)            ((0x00020000&(data))>>17)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_get_crc_b_error_even_st(data)            ((0x00010000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_get_p_pqdc_irq(data)                     ((0x00008000&(data))>>15)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_get_p_in_fifo_overflow_even_st(data)     ((0x00000800&(data))>>11)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_get_p_ring_r_overflow_even_st(data)      ((0x00000400&(data))>>10)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_get_p_ring_g_overflow_even_st(data)      ((0x00000200&(data))>>9)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_get_p_ring_b_overflow_even_st(data)      ((0x00000100&(data))>>8)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_get_p_not_finish_irq_even_st(data)       ((0x00000020&(data))>>5)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_get_p_underflow_irq_even_st(data)        ((0x00000010&(data))>>4)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_get_p_dic_error_even_st(data)            ((0x00000008&(data))>>3)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_get_p_crc_r_error_even_st(data)          ((0x00000004&(data))>>2)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_get_p_crc_g_error_even_st(data)          ((0x00000002&(data))>>1)
#define  PQC_PQDC_MC_HF_PQ_DECMP_IRQ_st_get_p_crc_b_error_even_st(data)          (0x00000001&(data))

#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN                                        0x18099894
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_reg_addr                                "0xB8099894"
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_reg                                     0xB8099894
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_inst_addr                               "0x0049"
#define  set_PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_reg(data)                           (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_reg                                 (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_reg))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_do_422_shift                    (31)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_dic_shift                       (17)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp_sel_shift                    (16)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp7_shift                       (7)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp6_shift                       (6)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp5_shift                       (5)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp4_shift                       (4)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp3_shift                       (3)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp2_shift                       (2)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp1_shift                       (1)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp0_shift                       (0)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_do_422_mask                     (0x80000000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_dic_mask                        (0x00020000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp_sel_mask                     (0x00010000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp7_mask                        (0x00000080)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp6_mask                        (0x00000040)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp5_mask                        (0x00000020)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp4_mask                        (0x00000010)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp3_mask                        (0x00000008)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp2_mask                        (0x00000004)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp1_mask                        (0x00000002)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp0_mask                        (0x00000001)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_do_422(data)                    (0x80000000&((data)<<31))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_dic(data)                       (0x00020000&((data)<<17))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp_sel(data)                    (0x00010000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp7(data)                       (0x00000080&((data)<<7))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp6(data)                       (0x00000040&((data)<<6))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp5(data)                       (0x00000020&((data)<<5))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp4(data)                       (0x00000010&((data)<<4))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp3(data)                       (0x00000008&((data)<<3))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp2(data)                       (0x00000004&((data)<<2))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp1(data)                       (0x00000002&((data)<<1))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_mark_en_qp0(data)                       (0x00000001&(data))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_get_mark_en_do_422(data)                ((0x80000000&(data))>>31)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_get_mark_en_dic(data)                   ((0x00020000&(data))>>17)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_get_mark_en_qp_sel(data)                ((0x00010000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_get_mark_en_qp7(data)                   ((0x00000080&(data))>>7)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_get_mark_en_qp6(data)                   ((0x00000040&(data))>>6)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_get_mark_en_qp5(data)                   ((0x00000020&(data))>>5)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_get_mark_en_qp4(data)                   ((0x00000010&(data))>>4)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_get_mark_en_qp3(data)                   ((0x00000008&(data))>>3)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_get_mark_en_qp2(data)                   ((0x00000004&(data))>>2)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_get_mark_en_qp1(data)                   ((0x00000002&(data))>>1)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_EN_get_mark_en_qp0(data)                   (0x00000001&(data))

#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_01                                  0x18099898
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_01_reg_addr                          "0xB8099898"
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_01_reg                               0xB8099898
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_01_inst_addr                         "0x004A"
#define  set_PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_01_reg(data)                     (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_01_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_01_reg                           (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_01_reg))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_01_mark_color_0_shift                (16)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_01_mark_color_1_shift                (0)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_01_mark_color_0_mask                 (0xFFFF0000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_01_mark_color_1_mask                 (0x0000FFFF)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_01_mark_color_0(data)                (0xFFFF0000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_01_mark_color_1(data)                (0x0000FFFF&(data))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_01_get_mark_color_0(data)            ((0xFFFF0000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_01_get_mark_color_1(data)            (0x0000FFFF&(data))

#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_23                                  0x1809989C
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_23_reg_addr                          "0xB809989C"
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_23_reg                               0xB809989C
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_23_inst_addr                         "0x004B"
#define  set_PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_23_reg(data)                     (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_23_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_23_reg                           (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_23_reg))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_23_mark_color_2_shift                (16)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_23_mark_color_3_shift                (0)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_23_mark_color_2_mask                 (0xFFFF0000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_23_mark_color_3_mask                 (0x0000FFFF)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_23_mark_color_2(data)                (0xFFFF0000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_23_mark_color_3(data)                (0x0000FFFF&(data))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_23_get_mark_color_2(data)            ((0xFFFF0000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_23_get_mark_color_3(data)            (0x0000FFFF&(data))

#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_45                                  0x180998A0
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_45_reg_addr                          "0xB80998A0"
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_45_reg                               0xB80998A0
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_45_inst_addr                         "0x004C"
#define  set_PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_45_reg(data)                     (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_45_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_45_reg                           (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_45_reg))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_45_mark_color_4_shift                (16)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_45_mark_color_5_shift                (0)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_45_mark_color_4_mask                 (0xFFFF0000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_45_mark_color_5_mask                 (0x0000FFFF)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_45_mark_color_4(data)                (0xFFFF0000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_45_mark_color_5(data)                (0x0000FFFF&(data))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_45_get_mark_color_4(data)            ((0xFFFF0000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_45_get_mark_color_5(data)            (0x0000FFFF&(data))

#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_67                                  0x180998A4
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_67_reg_addr                          "0xB80998A4"
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_67_reg                               0xB80998A4
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_67_inst_addr                         "0x004D"
#define  set_PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_67_reg(data)                     (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_67_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_67_reg                           (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_67_reg))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_67_mark_color_6_shift                (16)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_67_mark_color_7_shift                (0)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_67_mark_color_6_mask                 (0xFFFF0000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_67_mark_color_7_mask                 (0x0000FFFF)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_67_mark_color_6(data)                (0xFFFF0000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_67_mark_color_7(data)                (0x0000FFFF&(data))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_67_get_mark_color_6(data)            ((0xFFFF0000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_67_get_mark_color_7(data)            (0x0000FFFF&(data))

#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_422                                 0x180998A8
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_422_reg_addr                         "0xB80998A8"
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_422_reg                              0xB80998A8
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_422_inst_addr                        "0x004E"
#define  set_PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_422_reg(data)                    (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_422_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_422_reg                          (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_422_reg))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_422_mark_color_dic_shift             (16)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_422_mark_color_422_shift             (0)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_422_mark_color_dic_mask              (0xFFFF0000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_422_mark_color_422_mask              (0x0000FFFF)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_422_mark_color_dic(data)             (0xFFFF0000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_422_mark_color_422(data)             (0x0000FFFF&(data))
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_422_get_mark_color_dic(data)         ((0xFFFF0000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_DECMP_MARK_color_422_get_mark_color_422(data)         (0x0000FFFF&(data))

#define  PQC_PQDC_MC_HF_PQ_DECMP_ST                                             0x180998AC
#define  PQC_PQDC_MC_HF_PQ_DECMP_ST_reg_addr                                     "0xB80998AC"
#define  PQC_PQDC_MC_HF_PQ_DECMP_ST_reg                                          0xB80998AC
#define  PQC_PQDC_MC_HF_PQ_DECMP_ST_inst_addr                                    "0x004F"
#define  set_PQC_PQDC_MC_HF_PQ_DECMP_ST_reg(data)                                (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_ST_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_DECMP_ST_reg                                      (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_ST_reg))
#define  PQC_PQDC_MC_HF_PQ_DECMP_ST_decmp_crc_error_line_shift                   (16)
#define  PQC_PQDC_MC_HF_PQ_DECMP_ST_decmp_package_height_cnt_shift               (0)
#define  PQC_PQDC_MC_HF_PQ_DECMP_ST_decmp_crc_error_line_mask                    (0x3FFF0000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_ST_decmp_package_height_cnt_mask                (0x00003FFF)
#define  PQC_PQDC_MC_HF_PQ_DECMP_ST_decmp_crc_error_line(data)                   (0x3FFF0000&((data)<<16))
#define  PQC_PQDC_MC_HF_PQ_DECMP_ST_decmp_package_height_cnt(data)               (0x00003FFF&(data))
#define  PQC_PQDC_MC_HF_PQ_DECMP_ST_get_decmp_crc_error_line(data)               ((0x3FFF0000&(data))>>16)
#define  PQC_PQDC_MC_HF_PQ_DECMP_ST_get_decmp_package_height_cnt(data)           (0x00003FFF&(data))

#define  PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_G                                     0x180998B0
#define  PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_G_reg_addr                             "0xB80998B0"
#define  PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_G_reg                                  0xB80998B0
#define  PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_G_inst_addr                            "0x0050"
#define  set_PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_G_reg(data)                        (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_G_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_G_reg                              (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_G_reg))
#define  PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_G_decmp_crc_even_g_shift               (0)
#define  PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_G_decmp_crc_even_g_mask                (0xFFFFFFFF)
#define  PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_G_decmp_crc_even_g(data)               (0xFFFFFFFF&(data))
#define  PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_G_get_decmp_crc_even_g(data)           (0xFFFFFFFF&(data))

#define  PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_R                                     0x180998B4
#define  PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_R_reg_addr                             "0xB80998B4"
#define  PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_R_reg                                  0xB80998B4
#define  PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_R_inst_addr                            "0x0051"
#define  set_PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_R_reg(data)                        (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_R_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_R_reg                              (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_R_reg))
#define  PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_R_decmp_crc_even_r_shift               (0)
#define  PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_R_decmp_crc_even_r_mask                (0xFFFFFFFF)
#define  PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_R_decmp_crc_even_r(data)               (0xFFFFFFFF&(data))
#define  PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_R_get_decmp_crc_even_r(data)           (0xFFFFFFFF&(data))

#define  PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_B                                     0x180998B8
#define  PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_B_reg_addr                             "0xB80998B8"
#define  PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_B_reg                                  0xB80998B8
#define  PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_B_inst_addr                            "0x0052"
#define  set_PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_B_reg(data)                        (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_B_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_B_reg                              (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_B_reg))
#define  PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_B_decmp_crc_even_b_shift               (0)
#define  PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_B_decmp_crc_even_b_mask                (0xFFFFFFFF)
#define  PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_B_decmp_crc_even_b(data)               (0xFFFFFFFF&(data))
#define  PQC_PQDC_MC_HF_PQ_DECMP_CRC_EVEN_B_get_decmp_crc_even_b(data)           (0xFFFFFFFF&(data))

#define  PQC_PQDC_MC_HF_P_PQ_DECMP_ST                                           0x180998BC
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_ST_reg_addr                                   "0xB80998BC"
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_ST_reg                                        0xB80998BC
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_ST_inst_addr                                  "0x0053"
#define  set_PQC_PQDC_MC_HF_P_PQ_DECMP_ST_reg(data)                              (*((volatile unsigned int*)PQC_PQDC_MC_HF_P_PQ_DECMP_ST_reg)=data)
#define  get_PQC_PQDC_MC_HF_P_PQ_DECMP_ST_reg                                    (*((volatile unsigned int*)PQC_PQDC_MC_HF_P_PQ_DECMP_ST_reg))
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_ST_decmp_crc_error_line_shift                 (16)
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_ST_decmp_package_height_cnt_shift             (0)
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_ST_decmp_crc_error_line_mask                  (0x3FFF0000)
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_ST_decmp_package_height_cnt_mask              (0x00003FFF)
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_ST_decmp_crc_error_line(data)                 (0x3FFF0000&((data)<<16))
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_ST_decmp_package_height_cnt(data)             (0x00003FFF&(data))
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_ST_get_decmp_crc_error_line(data)             ((0x3FFF0000&(data))>>16)
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_ST_get_decmp_package_height_cnt(data)         (0x00003FFF&(data))

#define  PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_G                                   0x180998D0
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_G_reg_addr                           "0xB80998D0"
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_G_reg                                0xB80998D0
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_G_inst_addr                          "0x0054"
#define  set_PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_G_reg(data)                      (*((volatile unsigned int*)PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_G_reg)=data)
#define  get_PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_G_reg                            (*((volatile unsigned int*)PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_G_reg))
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_G_decmp_crc_even_g_shift             (0)
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_G_decmp_crc_even_g_mask              (0xFFFFFFFF)
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_G_decmp_crc_even_g(data)             (0xFFFFFFFF&(data))
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_G_get_decmp_crc_even_g(data)         (0xFFFFFFFF&(data))

#define  PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_R                                   0x180998D4
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_R_reg_addr                           "0xB80998D4"
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_R_reg                                0xB80998D4
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_R_inst_addr                          "0x0055"
#define  set_PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_R_reg(data)                      (*((volatile unsigned int*)PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_R_reg)=data)
#define  get_PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_R_reg                            (*((volatile unsigned int*)PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_R_reg))
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_R_decmp_crc_even_r_shift             (0)
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_R_decmp_crc_even_r_mask              (0xFFFFFFFF)
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_R_decmp_crc_even_r(data)             (0xFFFFFFFF&(data))
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_R_get_decmp_crc_even_r(data)         (0xFFFFFFFF&(data))

#define  PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_B                                   0x180998D8
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_B_reg_addr                           "0xB80998D8"
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_B_reg                                0xB80998D8
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_B_inst_addr                          "0x0056"
#define  set_PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_B_reg(data)                      (*((volatile unsigned int*)PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_B_reg)=data)
#define  get_PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_B_reg                            (*((volatile unsigned int*)PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_B_reg))
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_B_decmp_crc_even_b_shift             (0)
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_B_decmp_crc_even_b_mask              (0xFFFFFFFF)
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_B_decmp_crc_even_b(data)             (0xFFFFFFFF&(data))
#define  PQC_PQDC_MC_HF_P_PQ_DECMP_CRC_EVEN_B_get_decmp_crc_even_b(data)         (0xFFFFFFFF&(data))

#define  PQC_PQDC_MC_HF_PQ_DECMP_PAUSE_CYCLE                                    0x180998DC
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAUSE_CYCLE_reg_addr                            "0xB80998DC"
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAUSE_CYCLE_reg                                 0xB80998DC
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAUSE_CYCLE_inst_addr                           "0x0057"
#define  set_PQC_PQDC_MC_HF_PQ_DECMP_PAUSE_CYCLE_reg(data)                       (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_PAUSE_CYCLE_reg)=data)
#define  get_PQC_PQDC_MC_HF_PQ_DECMP_PAUSE_CYCLE_reg                             (*((volatile unsigned int*)PQC_PQDC_MC_HF_PQ_DECMP_PAUSE_CYCLE_reg))
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_measure_en_shift  (31)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_long_term_shift   (30)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAUSE_CYCLE_p_decmp_pause_cycle_shift           (8)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_shift             (0)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_measure_en_mask   (0x80000000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_long_term_mask    (0x40000000)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAUSE_CYCLE_p_decmp_pause_cycle_mask            (0x0000FF00)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_mask              (0x000000FF)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_measure_en(data)  (0x80000000&((data)<<31))
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_long_term(data)   (0x40000000&((data)<<30))
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAUSE_CYCLE_p_decmp_pause_cycle(data)           (0x0000FF00&((data)<<8))
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle(data)             (0x000000FF&(data))
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAUSE_CYCLE_get_decmp_pause_cycle_measure_en(data) ((0x80000000&(data))>>31)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAUSE_CYCLE_get_decmp_pause_cycle_long_term(data) ((0x40000000&(data))>>30)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAUSE_CYCLE_get_p_decmp_pause_cycle(data)       ((0x0000FF00&(data))>>8)
#define  PQC_PQDC_MC_HF_PQ_DECMP_PAUSE_CYCLE_get_decmp_pause_cycle(data)         (0x000000FF&(data))

#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS                                       0x180998E4
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_reg_addr                               "0xB80998E4"
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_reg                                    0xB80998E4
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_inst_addr                              "0x0058"
#define  set_PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_reg(data)                          (*((volatile unsigned int*)PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_reg)=data)
#define  get_PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_reg                                (*((volatile unsigned int*)PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_reg))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_hf_p_pqdc2_bist_fail_0_shift           (25)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_lf_p_pqdc1_bist_fail_0_shift           (23)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_lf_p_pqdc2_bist_fail_0_shift           (22)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_hf_i_pqdc2_bist_fail_0_shift           (20)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_lf_i_pqdc1_bist_fail_0_shift           (18)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_lf_i_pqdc2_bist_fail_0_shift           (17)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_hf_p_pqdc2_bist_fail_0_mask            (0x02000000)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_lf_p_pqdc1_bist_fail_0_mask            (0x00800000)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_lf_p_pqdc2_bist_fail_0_mask            (0x00400000)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_hf_i_pqdc2_bist_fail_0_mask            (0x00100000)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_lf_i_pqdc1_bist_fail_0_mask            (0x00040000)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_lf_i_pqdc2_bist_fail_0_mask            (0x00020000)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_hf_p_pqdc2_bist_fail_0(data)           (0x02000000&((data)<<25))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_lf_p_pqdc1_bist_fail_0(data)           (0x00800000&((data)<<23))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_lf_p_pqdc2_bist_fail_0(data)           (0x00400000&((data)<<22))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_hf_i_pqdc2_bist_fail_0(data)           (0x00100000&((data)<<20))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_lf_i_pqdc1_bist_fail_0(data)           (0x00040000&((data)<<18))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_lf_i_pqdc2_bist_fail_0(data)           (0x00020000&((data)<<17))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_get_hf_p_pqdc2_bist_fail_0(data)       ((0x02000000&(data))>>25)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_get_lf_p_pqdc1_bist_fail_0(data)       ((0x00800000&(data))>>23)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_get_lf_p_pqdc2_bist_fail_0(data)       ((0x00400000&(data))>>22)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_get_hf_i_pqdc2_bist_fail_0(data)       ((0x00100000&(data))>>20)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_get_lf_i_pqdc1_bist_fail_0(data)       ((0x00040000&(data))>>18)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_STATUS_get_lf_i_pqdc2_bist_fail_0(data)       ((0x00020000&(data))>>17)

#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS                                        0x180998EC
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_reg_addr                                "0xB80998EC"
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_reg                                     0xB80998EC
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_inst_addr                               "0x0059"
#define  set_PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_reg(data)                           (*((volatile unsigned int*)PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_reg)=data)
#define  get_PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_reg                                 (*((volatile unsigned int*)PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_reg))
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_hf_p_pqdc2_drf_fail_0_shift             (31)
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_lf_p_pqdc1_drf_fail_0_shift             (29)
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_lf_p_pqdc2_drf_fail_0_shift             (28)
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_hf_i_pqdc2_drf_fail_0_shift             (26)
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_lf_i_pqdc1_drf_fail_0_shift             (24)
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_lf_i_pqdc2_drf_fail_0_shift             (23)
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_hf_p_pqdc2_drf_fail_0_mask              (0x80000000)
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_lf_p_pqdc1_drf_fail_0_mask              (0x20000000)
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_lf_p_pqdc2_drf_fail_0_mask              (0x10000000)
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_hf_i_pqdc2_drf_fail_0_mask              (0x04000000)
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_lf_i_pqdc1_drf_fail_0_mask              (0x01000000)
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_lf_i_pqdc2_drf_fail_0_mask              (0x00800000)
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_hf_p_pqdc2_drf_fail_0(data)             (0x80000000&((data)<<31))
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_lf_p_pqdc1_drf_fail_0(data)             (0x20000000&((data)<<29))
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_lf_p_pqdc2_drf_fail_0(data)             (0x10000000&((data)<<28))
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_hf_i_pqdc2_drf_fail_0(data)             (0x04000000&((data)<<26))
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_lf_i_pqdc1_drf_fail_0(data)             (0x01000000&((data)<<24))
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_lf_i_pqdc2_drf_fail_0(data)             (0x00800000&((data)<<23))
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_get_hf_p_pqdc2_drf_fail_0(data)         ((0x80000000&(data))>>31)
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_get_lf_p_pqdc1_drf_fail_0(data)         ((0x20000000&(data))>>29)
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_get_lf_p_pqdc2_drf_fail_0(data)         ((0x10000000&(data))>>28)
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_get_hf_i_pqdc2_drf_fail_0(data)         ((0x04000000&(data))>>26)
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_get_lf_i_pqdc1_drf_fail_0(data)         ((0x01000000&(data))>>24)
#define  PQC_PQDC_MC_PQ_DECMP_DRF_STATUS_get_lf_i_pqdc2_drf_fail_0(data)         ((0x00800000&(data))>>23)

#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS                                           0x180998F0
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_reg_addr                                   "0xB80998F0"
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_reg                                        0xB80998F0
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_inst_addr                                  "0x005A"
#define  set_PQC_PQDC_MC_PQ_DECMP_BIST_LS_reg(data)                              (*((volatile unsigned int*)PQC_PQDC_MC_PQ_DECMP_BIST_LS_reg)=data)
#define  get_PQC_PQDC_MC_PQ_DECMP_BIST_LS_reg                                    (*((volatile unsigned int*)PQC_PQDC_MC_PQ_DECMP_BIST_LS_reg))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_hf_p_pqdc2_test_rwm_shift                  (9)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_lf_p_pqdc2_test_rwm_shift                  (8)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_hf_i_pqdc2_test_rwm_shift                  (7)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_lf_i_pqdc2_test_rwm_shift                  (6)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_hf_p_pqdc2_ls_0_shift                      (5)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_lf_p_pqdc1_ls_0_shift                      (4)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_lf_p_pqdc2_ls_0_shift                      (3)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_hf_i_pqdc2_ls_0_shift                      (2)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_lf_i_pqdc1_ls_0_shift                      (1)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_lf_i_pqdc2_ls_0_shift                      (0)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_hf_p_pqdc2_test_rwm_mask                   (0x00000200)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_lf_p_pqdc2_test_rwm_mask                   (0x00000100)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_hf_i_pqdc2_test_rwm_mask                   (0x00000080)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_lf_i_pqdc2_test_rwm_mask                   (0x00000040)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_hf_p_pqdc2_ls_0_mask                       (0x00000020)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_lf_p_pqdc1_ls_0_mask                       (0x00000010)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_lf_p_pqdc2_ls_0_mask                       (0x00000008)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_hf_i_pqdc2_ls_0_mask                       (0x00000004)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_lf_i_pqdc1_ls_0_mask                       (0x00000002)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_lf_i_pqdc2_ls_0_mask                       (0x00000001)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_hf_p_pqdc2_test_rwm(data)                  (0x00000200&((data)<<9))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_lf_p_pqdc2_test_rwm(data)                  (0x00000100&((data)<<8))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_hf_i_pqdc2_test_rwm(data)                  (0x00000080&((data)<<7))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_lf_i_pqdc2_test_rwm(data)                  (0x00000040&((data)<<6))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_hf_p_pqdc2_ls_0(data)                      (0x00000020&((data)<<5))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_lf_p_pqdc1_ls_0(data)                      (0x00000010&((data)<<4))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_lf_p_pqdc2_ls_0(data)                      (0x00000008&((data)<<3))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_hf_i_pqdc2_ls_0(data)                      (0x00000004&((data)<<2))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_lf_i_pqdc1_ls_0(data)                      (0x00000002&((data)<<1))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_lf_i_pqdc2_ls_0(data)                      (0x00000001&(data))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_get_hf_p_pqdc2_test_rwm(data)              ((0x00000200&(data))>>9)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_get_lf_p_pqdc2_test_rwm(data)              ((0x00000100&(data))>>8)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_get_hf_i_pqdc2_test_rwm(data)              ((0x00000080&(data))>>7)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_get_lf_i_pqdc2_test_rwm(data)              ((0x00000040&(data))>>6)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_get_hf_p_pqdc2_ls_0(data)                  ((0x00000020&(data))>>5)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_get_lf_p_pqdc1_ls_0(data)                  ((0x00000010&(data))>>4)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_get_lf_p_pqdc2_ls_0(data)                  ((0x00000008&(data))>>3)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_get_hf_i_pqdc2_ls_0(data)                  ((0x00000004&(data))>>2)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_get_lf_i_pqdc1_ls_0(data)                  ((0x00000002&(data))>>1)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_LS_get_lf_i_pqdc2_ls_0(data)                  (0x00000001&(data))

#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM                                       0x180998F4
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_reg_addr                               "0xB80998F4"
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_reg                                    0xB80998F4
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_inst_addr                              "0x005B"
#define  set_PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_reg(data)                          (*((volatile unsigned int*)PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_reg)=data)
#define  get_PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_reg                                (*((volatile unsigned int*)PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_reg))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_hf_p_pqdc2_rme_0_shift                 (29)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_lf_p_pqdc1_rme_0_shift                 (28)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_lf_p_pqdc2_rme_0_shift                 (27)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_hf_i_pqdc2_rme_0_shift                 (26)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_lf_i_pqdc1_rme_0_shift                 (25)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_lf_i_pqdc2_rme_0_shift                 (24)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_hf_p_pqdc2_rm_0_shift                  (20)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_lf_p_pqdc1_rm_0_shift                  (16)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_lf_p_pqdc2_rm_0_shift                  (12)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_hf_i_pqdc2_rm_0_shift                  (8)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_lf_i_pqdc1_rm_0_shift                  (4)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_lf_i_pqdc2_rm_0_shift                  (0)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_hf_p_pqdc2_rme_0_mask                  (0x20000000)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_lf_p_pqdc1_rme_0_mask                  (0x10000000)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_lf_p_pqdc2_rme_0_mask                  (0x08000000)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_hf_i_pqdc2_rme_0_mask                  (0x04000000)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_lf_i_pqdc1_rme_0_mask                  (0x02000000)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_lf_i_pqdc2_rme_0_mask                  (0x01000000)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_hf_p_pqdc2_rm_0_mask                   (0x00F00000)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_lf_p_pqdc1_rm_0_mask                   (0x000F0000)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_lf_p_pqdc2_rm_0_mask                   (0x0000F000)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_hf_i_pqdc2_rm_0_mask                   (0x00000F00)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_lf_i_pqdc1_rm_0_mask                   (0x000000F0)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_lf_i_pqdc2_rm_0_mask                   (0x0000000F)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_hf_p_pqdc2_rme_0(data)                 (0x20000000&((data)<<29))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_lf_p_pqdc1_rme_0(data)                 (0x10000000&((data)<<28))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_lf_p_pqdc2_rme_0(data)                 (0x08000000&((data)<<27))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_hf_i_pqdc2_rme_0(data)                 (0x04000000&((data)<<26))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_lf_i_pqdc1_rme_0(data)                 (0x02000000&((data)<<25))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_lf_i_pqdc2_rme_0(data)                 (0x01000000&((data)<<24))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_hf_p_pqdc2_rm_0(data)                  (0x00F00000&((data)<<20))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_lf_p_pqdc1_rm_0(data)                  (0x000F0000&((data)<<16))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_lf_p_pqdc2_rm_0(data)                  (0x0000F000&((data)<<12))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_hf_i_pqdc2_rm_0(data)                  (0x00000F00&((data)<<8))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_lf_i_pqdc1_rm_0(data)                  (0x000000F0&((data)<<4))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_lf_i_pqdc2_rm_0(data)                  (0x0000000F&(data))
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_get_hf_p_pqdc2_rme_0(data)             ((0x20000000&(data))>>29)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_get_lf_p_pqdc1_rme_0(data)             ((0x10000000&(data))>>28)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_get_lf_p_pqdc2_rme_0(data)             ((0x08000000&(data))>>27)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_get_hf_i_pqdc2_rme_0(data)             ((0x04000000&(data))>>26)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_get_lf_i_pqdc1_rme_0(data)             ((0x02000000&(data))>>25)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_get_lf_i_pqdc2_rme_0(data)             ((0x01000000&(data))>>24)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_get_hf_p_pqdc2_rm_0(data)              ((0x00F00000&(data))>>20)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_get_lf_p_pqdc1_rm_0(data)              ((0x000F0000&(data))>>16)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_get_lf_p_pqdc2_rm_0(data)              ((0x0000F000&(data))>>12)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_get_hf_i_pqdc2_rm_0(data)              ((0x00000F00&(data))>>8)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_get_lf_i_pqdc1_rm_0(data)              ((0x000000F0&(data))>>4)
#define  PQC_PQDC_MC_PQ_DECMP_BIST_RME_RM_get_lf_i_pqdc2_rm_0(data)              (0x0000000F&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======PQC_PQDC register structure define==========

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
}pqc_pqdc_mc_pq_cmp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_line_sum_bit:16;
        RBus_UInt32  cmp_400_old_mode_en:1;
        RBus_UInt32  dummy18099204_14_11:4;
        RBus_UInt32  cmp_jump4_en:1;
        RBus_UInt32  cmp_qp_mode:2;
        RBus_UInt32  cmp_dic_mode_en:1;
        RBus_UInt32  two_line_prediction_en:1;
        RBus_UInt32  cmp_line_mode:1;
        RBus_UInt32  cmp_data_color:1;
        RBus_UInt32  cmp_data_bit_width:2;
        RBus_UInt32  cmp_data_format:2;
    };
}pqc_pqdc_mc_lf_pq_cmp_pair_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_bit_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_enable_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_smooth_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_allocate_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_poor_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_guarantee_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_balance_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_irq_en_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_irq_st_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_st_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_qp_st_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_fifo_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  g_frame_left:16;
        RBus_UInt32  rb_frame_left:16;
    };
}pqc_pqdc_mc_lf_pq_cmp_left_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_package_long_term:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  total_package_even:24;
    };
}pqc_pqdc_mc_lf_pq_cmp_package_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_g:32;
    };
}pqc_pqdc_mc_lf_pq_cmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_r:32;
    };
}pqc_pqdc_mc_lf_pq_cmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_b:32;
    };
}pqc_pqdc_mc_lf_pq_cmp_crc_even_b_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_blk0_add0_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_blk0_add1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  cmp_db_apply:1;
        RBus_UInt32  cmp_db_rd_sel:1;
        RBus_UInt32  cmp_db_en:1;
    };
}pqc_pqdc_mc_pq_cmp_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_line_sum_bit:16;
        RBus_UInt32  cmp_400_old_mode_en:1;
        RBus_UInt32  cmp_c_ch_data_tie0:1;
        RBus_UInt32  dummy18099284_13_11:3;
        RBus_UInt32  cmp_jump4_en:1;
        RBus_UInt32  cmp_qp_mode:2;
        RBus_UInt32  cmp_dic_mode_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  cmp_line_mode:1;
        RBus_UInt32  cmp_data_color:1;
        RBus_UInt32  cmp_data_bit_width:2;
        RBus_UInt32  cmp_data_format:2;
    };
}pqc_pqdc_mc_hf_pq_cmp_pair_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_bit_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_enable_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_smooth_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_allocate_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_poor_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_guarantee_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_balance_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_irq_en_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_irq_st_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_st_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_qp_st_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_fifo_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  g_frame_left:16;
        RBus_UInt32  rb_frame_left:16;
    };
}pqc_pqdc_mc_hf_pq_cmp_left_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_package_long_term:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  total_package_even:24;
    };
}pqc_pqdc_mc_hf_pq_cmp_package_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_g:32;
    };
}pqc_pqdc_mc_hf_pq_cmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_r:32;
    };
}pqc_pqdc_mc_hf_pq_cmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_b:32;
    };
}pqc_pqdc_mc_hf_pq_cmp_crc_even_b_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_blk0_add0_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_blk0_add1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}pqc_pqdc_mc_lf_pq_cmp_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  pqc1_bist_fail_0:1;
        RBus_UInt32  pqc2_bist_fail_0:1;
        RBus_UInt32  pqc2_bist_fail_1:1;
        RBus_UInt32  pqc2_bist_fail_2:1;
        RBus_UInt32  pqc2_bist_fail_3:1;
        RBus_UInt32  pqc2_bist_fail_4:1;
        RBus_UInt32  pqc2_bist_fail_5:1;
        RBus_UInt32  pqc2_bist_fail_6:1;
        RBus_UInt32  res2:16;
    };
}pqc_pqdc_mc_lf_pq_cmp_bist_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}pqc_pqdc_mc_lf_pq_cmp_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  pqc1_drf_fail_0:1;
        RBus_UInt32  pqc2_drf_fail_0:1;
        RBus_UInt32  pqc2_drf_fail_1:1;
        RBus_UInt32  pqc2_drf_fail_2:1;
        RBus_UInt32  pqc2_drf_fail_3:1;
        RBus_UInt32  pqc2_drf_fail_4:1;
        RBus_UInt32  pqc2_drf_fail_5:1;
        RBus_UInt32  pqc2_drf_fail_6:1;
        RBus_UInt32  res2:16;
    };
}pqc_pqdc_mc_lf_cmp_drf_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  pqc2_test_rwm:1;
        RBus_UInt32  pqc1_ls_0:1;
        RBus_UInt32  pqc2_ls_1:1;
        RBus_UInt32  pqc2_ls_0:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pqc1_rme_0:1;
        RBus_UInt32  pqc2_rme_0:1;
        RBus_UInt32  pqc2_rme_1:1;
        RBus_UInt32  res3:4;
        RBus_UInt32  pqc1_rm_0:4;
        RBus_UInt32  pqc2_rm_0:4;
        RBus_UInt32  pqc2_rm_1:4;
    };
}pqc_pqdc_mc_lf_cmp_bist_ls_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}pqc_pqdc_mc_hf_pq_cmp_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  pqc2_bist_fail_0:1;
        RBus_UInt32  pqc2_bist_fail_1:1;
        RBus_UInt32  pqc2_bist_fail_2:1;
        RBus_UInt32  pqc2_bist_fail_3:1;
        RBus_UInt32  pqc2_bist_fail_4:1;
        RBus_UInt32  pqc2_bist_fail_5:1;
        RBus_UInt32  pqc2_bist_fail_6:1;
        RBus_UInt32  res2:16;
    };
}pqc_pqdc_mc_hf_pq_cmp_bist_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}pqc_pqdc_mc_hf_pq_cmp_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  pqc2_drf_fail_0:1;
        RBus_UInt32  pqc2_drf_fail_1:1;
        RBus_UInt32  pqc2_drf_fail_2:1;
        RBus_UInt32  pqc2_drf_fail_3:1;
        RBus_UInt32  pqc2_drf_fail_4:1;
        RBus_UInt32  pqc2_drf_fail_5:1;
        RBus_UInt32  pqc2_drf_fail_6:1;
        RBus_UInt32  res2:16;
    };
}pqc_pqdc_mc_hf_cmp_drf_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  pqc2_test_rwm:1;
        RBus_UInt32  pqc2_ls_1:1;
        RBus_UInt32  pqc2_ls_0:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  pqc2_rme_0:1;
        RBus_UInt32  pqc2_rme_1:1;
        RBus_UInt32  res3:8;
        RBus_UInt32  pqc2_rm_0:4;
        RBus_UInt32  pqc2_rm_1:4;
    };
}pqc_pqdc_mc_hf_cmp_bist_ls_rm_RBUS;

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
}pqc_pqdc_mc_pq_decmp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_line_sum_bit:16;
        RBus_UInt32  decmp_400_old_mode_en:1;
        RBus_UInt32  dummy18099804_14_13:2;
        RBus_UInt32  decmp_qp_mode_sel:1;
        RBus_UInt32  decmp_data_bit_width_sel:1;
        RBus_UInt32  decmp_jump4_en:1;
        RBus_UInt32  decmp_qp_mode:2;
        RBus_UInt32  decmp_dic_mode_en:1;
        RBus_UInt32  decmp_two_line_prediction_en:1;
        RBus_UInt32  decmp_line_mode:1;
        RBus_UInt32  decmp_data_color:1;
        RBus_UInt32  decmp_data_bit_width:2;
        RBus_UInt32  decmp_data_format:2;
    };
}pqc_pqdc_mc_lf_pq_decmp_pair_RBUS;

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
}pqc_pqdc_mc_lf_pq_decmp_sat_en_RBUS;

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
        RBus_UInt32  p_not_finish_irq_even_en:1;
        RBus_UInt32  p_underflow_irq_even_en:1;
        RBus_UInt32  p_dic_error_even_en:1;
        RBus_UInt32  p_crc_r_error_even_en:1;
        RBus_UInt32  p_crc_g_error_even_en:1;
        RBus_UInt32  p_crc_b_error_even_en:1;
    };
}pqc_pqdc_mc_lf_pq_decmp_irq_en_RBUS;

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
        RBus_UInt32  p_pqdc_irq:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  p_in_fifo_overflow_even_st:1;
        RBus_UInt32  p_ring_r_overflow_even_st:1;
        RBus_UInt32  p_ring_g_overflow_even_st:1;
        RBus_UInt32  p_ring_b_overflow_even_st:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  p_not_finish_irq_even_st:1;
        RBus_UInt32  p_underflow_irq_even_st:1;
        RBus_UInt32  p_dic_error_even_st:1;
        RBus_UInt32  p_crc_r_error_even_st:1;
        RBus_UInt32  p_crc_g_error_even_st:1;
        RBus_UInt32  p_crc_b_error_even_st:1;
    };
}pqc_pqdc_mc_lf_pq_decmp_irq_st_RBUS;

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
}pqc_pqdc_mc_lf_pq_decmp_mark_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_0:16;
        RBus_UInt32  mark_color_1:16;
    };
}pqc_pqdc_mc_lf_pq_decmp_mark_color_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_2:16;
        RBus_UInt32  mark_color_3:16;
    };
}pqc_pqdc_mc_lf_pq_decmp_mark_color_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_4:16;
        RBus_UInt32  mark_color_5:16;
    };
}pqc_pqdc_mc_lf_pq_decmp_mark_color_45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_6:16;
        RBus_UInt32  mark_color_7:16;
    };
}pqc_pqdc_mc_lf_pq_decmp_mark_color_67_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_dic:16;
        RBus_UInt32  mark_color_422:16;
    };
}pqc_pqdc_mc_lf_pq_decmp_mark_color_422_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  decmp_crc_error_line:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  decmp_package_height_cnt:14;
    };
}pqc_pqdc_mc_lf_pq_decmp_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_g:32;
    };
}pqc_pqdc_mc_lf_pq_decmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_r:32;
    };
}pqc_pqdc_mc_lf_pq_decmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_b:32;
    };
}pqc_pqdc_mc_lf_pq_decmp_crc_even_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  decmp_crc_error_line:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  decmp_package_height_cnt:14;
    };
}pqc_pqdc_mc_lf_p_pq_decmp_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_g:32;
    };
}pqc_pqdc_mc_lf_p_pq_decmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_r:32;
    };
}pqc_pqdc_mc_lf_p_pq_decmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_b:32;
    };
}pqc_pqdc_mc_lf_p_pq_decmp_crc_even_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_pause_cycle_measure_en:1;
        RBus_UInt32  decmp_pause_cycle_long_term:1;
        RBus_UInt32  res1:14;
        RBus_UInt32  p_decmp_pause_cycle:8;
        RBus_UInt32  decmp_pause_cycle:8;
    };
}pqc_pqdc_mc_lf_pq_decmp_pause_cycle_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  decmp_db_apply:1;
        RBus_UInt32  decmp_db_rd_sel:1;
        RBus_UInt32  decmp_db_en:1;
    };
}pqc_pqdc_mc_pq_decmp_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_line_sum_bit:16;
        RBus_UInt32  decmp_400_old_mode_en:1;
        RBus_UInt32  dummy18099884_14:1;
        RBus_UInt32  decmp_data_format_sel:1;
        RBus_UInt32  decmp_qp_mode_sel:1;
        RBus_UInt32  decmp_data_bit_width_sel:1;
        RBus_UInt32  decmp_jump4_en:1;
        RBus_UInt32  decmp_qp_mode:2;
        RBus_UInt32  decmp_dic_mode_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  decmp_line_mode:1;
        RBus_UInt32  decmp_data_color:1;
        RBus_UInt32  decmp_data_bit_width:2;
        RBus_UInt32  decmp_data_format:2;
    };
}pqc_pqdc_mc_hf_pq_decmp_pair_RBUS;

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
}pqc_pqdc_mc_hf_pq_decmp_sat_en_RBUS;

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
        RBus_UInt32  p_not_finish_irq_even_en:1;
        RBus_UInt32  p_underflow_irq_even_en:1;
        RBus_UInt32  p_dic_error_even_en:1;
        RBus_UInt32  p_crc_r_error_even_en:1;
        RBus_UInt32  p_crc_g_error_even_en:1;
        RBus_UInt32  p_crc_b_error_even_en:1;
    };
}pqc_pqdc_mc_hf_pq_decmp_irq_en_RBUS;

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
        RBus_UInt32  p_pqdc_irq:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  p_in_fifo_overflow_even_st:1;
        RBus_UInt32  p_ring_r_overflow_even_st:1;
        RBus_UInt32  p_ring_g_overflow_even_st:1;
        RBus_UInt32  p_ring_b_overflow_even_st:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  p_not_finish_irq_even_st:1;
        RBus_UInt32  p_underflow_irq_even_st:1;
        RBus_UInt32  p_dic_error_even_st:1;
        RBus_UInt32  p_crc_r_error_even_st:1;
        RBus_UInt32  p_crc_g_error_even_st:1;
        RBus_UInt32  p_crc_b_error_even_st:1;
    };
}pqc_pqdc_mc_hf_pq_decmp_irq_st_RBUS;

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
}pqc_pqdc_mc_hf_pq_decmp_mark_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_0:16;
        RBus_UInt32  mark_color_1:16;
    };
}pqc_pqdc_mc_hf_pq_decmp_mark_color_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_2:16;
        RBus_UInt32  mark_color_3:16;
    };
}pqc_pqdc_mc_hf_pq_decmp_mark_color_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_4:16;
        RBus_UInt32  mark_color_5:16;
    };
}pqc_pqdc_mc_hf_pq_decmp_mark_color_45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_6:16;
        RBus_UInt32  mark_color_7:16;
    };
}pqc_pqdc_mc_hf_pq_decmp_mark_color_67_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_dic:16;
        RBus_UInt32  mark_color_422:16;
    };
}pqc_pqdc_mc_hf_pq_decmp_mark_color_422_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  decmp_crc_error_line:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  decmp_package_height_cnt:14;
    };
}pqc_pqdc_mc_hf_pq_decmp_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_g:32;
    };
}pqc_pqdc_mc_hf_pq_decmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_r:32;
    };
}pqc_pqdc_mc_hf_pq_decmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_b:32;
    };
}pqc_pqdc_mc_hf_pq_decmp_crc_even_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  decmp_crc_error_line:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  decmp_package_height_cnt:14;
    };
}pqc_pqdc_mc_hf_p_pq_decmp_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_g:32;
    };
}pqc_pqdc_mc_hf_p_pq_decmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_r:32;
    };
}pqc_pqdc_mc_hf_p_pq_decmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_b:32;
    };
}pqc_pqdc_mc_hf_p_pq_decmp_crc_even_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_pause_cycle_measure_en:1;
        RBus_UInt32  decmp_pause_cycle_long_term:1;
        RBus_UInt32  res1:14;
        RBus_UInt32  p_decmp_pause_cycle:8;
        RBus_UInt32  decmp_pause_cycle:8;
    };
}pqc_pqdc_mc_hf_pq_decmp_pause_cycle_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}pqc_pqdc_mc_pq_decmp_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  hf_p_pqdc2_bist_fail_0:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  lf_p_pqdc1_bist_fail_0:1;
        RBus_UInt32  lf_p_pqdc2_bist_fail_0:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  hf_i_pqdc2_bist_fail_0:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  lf_i_pqdc1_bist_fail_0:1;
        RBus_UInt32  lf_i_pqdc2_bist_fail_0:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:16;
    };
}pqc_pqdc_mc_pq_decmp_bist_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}pqc_pqdc_mc_pq_decmp_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hf_p_pqdc2_drf_fail_0:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  lf_p_pqdc1_drf_fail_0:1;
        RBus_UInt32  lf_p_pqdc2_drf_fail_0:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  hf_i_pqdc2_drf_fail_0:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  lf_i_pqdc1_drf_fail_0:1;
        RBus_UInt32  lf_i_pqdc2_drf_fail_0:1;
        RBus_UInt32  res4:23;
    };
}pqc_pqdc_mc_pq_decmp_drf_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  hf_p_pqdc2_test_rwm:1;
        RBus_UInt32  lf_p_pqdc2_test_rwm:1;
        RBus_UInt32  hf_i_pqdc2_test_rwm:1;
        RBus_UInt32  lf_i_pqdc2_test_rwm:1;
        RBus_UInt32  hf_p_pqdc2_ls_0:1;
        RBus_UInt32  lf_p_pqdc1_ls_0:1;
        RBus_UInt32  lf_p_pqdc2_ls_0:1;
        RBus_UInt32  hf_i_pqdc2_ls_0:1;
        RBus_UInt32  lf_i_pqdc1_ls_0:1;
        RBus_UInt32  lf_i_pqdc2_ls_0:1;
    };
}pqc_pqdc_mc_pq_decmp_bist_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  hf_p_pqdc2_rme_0:1;
        RBus_UInt32  lf_p_pqdc1_rme_0:1;
        RBus_UInt32  lf_p_pqdc2_rme_0:1;
        RBus_UInt32  hf_i_pqdc2_rme_0:1;
        RBus_UInt32  lf_i_pqdc1_rme_0:1;
        RBus_UInt32  lf_i_pqdc2_rme_0:1;
        RBus_UInt32  hf_p_pqdc2_rm_0:4;
        RBus_UInt32  lf_p_pqdc1_rm_0:4;
        RBus_UInt32  lf_p_pqdc2_rm_0:4;
        RBus_UInt32  hf_i_pqdc2_rm_0:4;
        RBus_UInt32  lf_i_pqdc1_rm_0:4;
        RBus_UInt32  lf_i_pqdc2_rm_0:4;
    };
}pqc_pqdc_mc_pq_decmp_bist_rme_rm_RBUS;

#else //apply LITTLE_ENDIAN

//======PQC_PQDC register structure define==========

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
}pqc_pqdc_mc_pq_cmp_RBUS;

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
        RBus_UInt32  dummy18099204_14_11:4;
        RBus_UInt32  cmp_400_old_mode_en:1;
        RBus_UInt32  cmp_line_sum_bit:16;
    };
}pqc_pqdc_mc_lf_pq_cmp_pair_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_bit_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_enable_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_smooth_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_allocate_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_poor_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_guarantee_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_balance_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_irq_en_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_irq_st_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_st_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_qp_st_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_fifo_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rb_frame_left:16;
        RBus_UInt32  g_frame_left:16;
    };
}pqc_pqdc_mc_lf_pq_cmp_left_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_package_even:24;
        RBus_UInt32  res1:7;
        RBus_UInt32  total_package_long_term:1;
    };
}pqc_pqdc_mc_lf_pq_cmp_package_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_g:32;
    };
}pqc_pqdc_mc_lf_pq_cmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_r:32;
    };
}pqc_pqdc_mc_lf_pq_cmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_b:32;
    };
}pqc_pqdc_mc_lf_pq_cmp_crc_even_b_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_blk0_add0_RBUS;

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
}pqc_pqdc_mc_lf_pq_cmp_blk0_add1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_db_en:1;
        RBus_UInt32  cmp_db_rd_sel:1;
        RBus_UInt32  cmp_db_apply:1;
        RBus_UInt32  res1:29;
    };
}pqc_pqdc_mc_pq_cmp_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_data_format:2;
        RBus_UInt32  cmp_data_bit_width:2;
        RBus_UInt32  cmp_data_color:1;
        RBus_UInt32  cmp_line_mode:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  cmp_dic_mode_en:1;
        RBus_UInt32  cmp_qp_mode:2;
        RBus_UInt32  cmp_jump4_en:1;
        RBus_UInt32  dummy18099284_13_11:3;
        RBus_UInt32  cmp_c_ch_data_tie0:1;
        RBus_UInt32  cmp_400_old_mode_en:1;
        RBus_UInt32  cmp_line_sum_bit:16;
    };
}pqc_pqdc_mc_hf_pq_cmp_pair_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_bit_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_enable_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_smooth_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_allocate_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_poor_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_guarantee_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_balance_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_irq_en_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_irq_st_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_st_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_qp_st_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_fifo_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rb_frame_left:16;
        RBus_UInt32  g_frame_left:16;
    };
}pqc_pqdc_mc_hf_pq_cmp_left_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_package_even:24;
        RBus_UInt32  res1:7;
        RBus_UInt32  total_package_long_term:1;
    };
}pqc_pqdc_mc_hf_pq_cmp_package_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_g:32;
    };
}pqc_pqdc_mc_hf_pq_cmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_r:32;
    };
}pqc_pqdc_mc_hf_pq_cmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_b:32;
    };
}pqc_pqdc_mc_hf_pq_cmp_crc_even_b_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_blk0_add0_RBUS;

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
}pqc_pqdc_mc_hf_pq_cmp_blk0_add1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}pqc_pqdc_mc_lf_pq_cmp_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  pqc2_bist_fail_6:1;
        RBus_UInt32  pqc2_bist_fail_5:1;
        RBus_UInt32  pqc2_bist_fail_4:1;
        RBus_UInt32  pqc2_bist_fail_3:1;
        RBus_UInt32  pqc2_bist_fail_2:1;
        RBus_UInt32  pqc2_bist_fail_1:1;
        RBus_UInt32  pqc2_bist_fail_0:1;
        RBus_UInt32  pqc1_bist_fail_0:1;
        RBus_UInt32  res2:8;
    };
}pqc_pqdc_mc_lf_pq_cmp_bist_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}pqc_pqdc_mc_lf_pq_cmp_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  pqc2_drf_fail_6:1;
        RBus_UInt32  pqc2_drf_fail_5:1;
        RBus_UInt32  pqc2_drf_fail_4:1;
        RBus_UInt32  pqc2_drf_fail_3:1;
        RBus_UInt32  pqc2_drf_fail_2:1;
        RBus_UInt32  pqc2_drf_fail_1:1;
        RBus_UInt32  pqc2_drf_fail_0:1;
        RBus_UInt32  pqc1_drf_fail_0:1;
        RBus_UInt32  res2:8;
    };
}pqc_pqdc_mc_lf_cmp_drf_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pqc2_rm_1:4;
        RBus_UInt32  pqc2_rm_0:4;
        RBus_UInt32  pqc1_rm_0:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  pqc2_rme_1:1;
        RBus_UInt32  pqc2_rme_0:1;
        RBus_UInt32  pqc1_rme_0:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pqc2_ls_0:1;
        RBus_UInt32  pqc2_ls_1:1;
        RBus_UInt32  pqc1_ls_0:1;
        RBus_UInt32  pqc2_test_rwm:1;
        RBus_UInt32  res3:8;
    };
}pqc_pqdc_mc_lf_cmp_bist_ls_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}pqc_pqdc_mc_hf_pq_cmp_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  pqc2_bist_fail_6:1;
        RBus_UInt32  pqc2_bist_fail_5:1;
        RBus_UInt32  pqc2_bist_fail_4:1;
        RBus_UInt32  pqc2_bist_fail_3:1;
        RBus_UInt32  pqc2_bist_fail_2:1;
        RBus_UInt32  pqc2_bist_fail_1:1;
        RBus_UInt32  pqc2_bist_fail_0:1;
        RBus_UInt32  res2:9;
    };
}pqc_pqdc_mc_hf_pq_cmp_bist_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}pqc_pqdc_mc_hf_pq_cmp_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  pqc2_drf_fail_6:1;
        RBus_UInt32  pqc2_drf_fail_5:1;
        RBus_UInt32  pqc2_drf_fail_4:1;
        RBus_UInt32  pqc2_drf_fail_3:1;
        RBus_UInt32  pqc2_drf_fail_2:1;
        RBus_UInt32  pqc2_drf_fail_1:1;
        RBus_UInt32  pqc2_drf_fail_0:1;
        RBus_UInt32  res2:9;
    };
}pqc_pqdc_mc_hf_cmp_drf_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pqc2_rm_1:4;
        RBus_UInt32  pqc2_rm_0:4;
        RBus_UInt32  res1:8;
        RBus_UInt32  pqc2_rme_1:1;
        RBus_UInt32  pqc2_rme_0:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  pqc2_ls_0:1;
        RBus_UInt32  pqc2_ls_1:1;
        RBus_UInt32  pqc2_test_rwm:1;
        RBus_UInt32  res3:9;
    };
}pqc_pqdc_mc_hf_cmp_bist_ls_rm_RBUS;

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
}pqc_pqdc_mc_pq_decmp_RBUS;

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
        RBus_UInt32  decmp_data_bit_width_sel:1;
        RBus_UInt32  decmp_qp_mode_sel:1;
        RBus_UInt32  dummy18099804_14_13:2;
        RBus_UInt32  decmp_400_old_mode_en:1;
        RBus_UInt32  decmp_line_sum_bit:16;
    };
}pqc_pqdc_mc_lf_pq_decmp_pair_RBUS;

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
}pqc_pqdc_mc_lf_pq_decmp_sat_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p_crc_b_error_even_en:1;
        RBus_UInt32  p_crc_g_error_even_en:1;
        RBus_UInt32  p_crc_r_error_even_en:1;
        RBus_UInt32  p_dic_error_even_en:1;
        RBus_UInt32  p_underflow_irq_even_en:1;
        RBus_UInt32  p_not_finish_irq_even_en:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  crc_b_error_even_en:1;
        RBus_UInt32  crc_g_error_even_en:1;
        RBus_UInt32  crc_r_error_even_en:1;
        RBus_UInt32  dic_error_even_en:1;
        RBus_UInt32  underflow_irq_even_en:1;
        RBus_UInt32  not_finish_irq_even_en:1;
        RBus_UInt32  res2:10;
    };
}pqc_pqdc_mc_lf_pq_decmp_irq_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p_crc_b_error_even_st:1;
        RBus_UInt32  p_crc_g_error_even_st:1;
        RBus_UInt32  p_crc_r_error_even_st:1;
        RBus_UInt32  p_dic_error_even_st:1;
        RBus_UInt32  p_underflow_irq_even_st:1;
        RBus_UInt32  p_not_finish_irq_even_st:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  p_ring_b_overflow_even_st:1;
        RBus_UInt32  p_ring_g_overflow_even_st:1;
        RBus_UInt32  p_ring_r_overflow_even_st:1;
        RBus_UInt32  p_in_fifo_overflow_even_st:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  p_pqdc_irq:1;
        RBus_UInt32  crc_b_error_even_st:1;
        RBus_UInt32  crc_g_error_even_st:1;
        RBus_UInt32  crc_r_error_even_st:1;
        RBus_UInt32  dic_error_even_st:1;
        RBus_UInt32  underflow_irq_even_st:1;
        RBus_UInt32  not_finish_irq_even_st:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  ring_b_overflow_even_st:1;
        RBus_UInt32  ring_g_overflow_even_st:1;
        RBus_UInt32  ring_r_overflow_even_st:1;
        RBus_UInt32  in_fifo_overflow_even_st:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  pqdc_irq:1;
    };
}pqc_pqdc_mc_lf_pq_decmp_irq_st_RBUS;

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
}pqc_pqdc_mc_lf_pq_decmp_mark_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_1:16;
        RBus_UInt32  mark_color_0:16;
    };
}pqc_pqdc_mc_lf_pq_decmp_mark_color_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_3:16;
        RBus_UInt32  mark_color_2:16;
    };
}pqc_pqdc_mc_lf_pq_decmp_mark_color_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_5:16;
        RBus_UInt32  mark_color_4:16;
    };
}pqc_pqdc_mc_lf_pq_decmp_mark_color_45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_7:16;
        RBus_UInt32  mark_color_6:16;
    };
}pqc_pqdc_mc_lf_pq_decmp_mark_color_67_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_422:16;
        RBus_UInt32  mark_color_dic:16;
    };
}pqc_pqdc_mc_lf_pq_decmp_mark_color_422_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_package_height_cnt:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  decmp_crc_error_line:14;
        RBus_UInt32  res2:2;
    };
}pqc_pqdc_mc_lf_pq_decmp_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_g:32;
    };
}pqc_pqdc_mc_lf_pq_decmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_r:32;
    };
}pqc_pqdc_mc_lf_pq_decmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_b:32;
    };
}pqc_pqdc_mc_lf_pq_decmp_crc_even_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_package_height_cnt:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  decmp_crc_error_line:14;
        RBus_UInt32  res2:2;
    };
}pqc_pqdc_mc_lf_p_pq_decmp_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_g:32;
    };
}pqc_pqdc_mc_lf_p_pq_decmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_r:32;
    };
}pqc_pqdc_mc_lf_p_pq_decmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_b:32;
    };
}pqc_pqdc_mc_lf_p_pq_decmp_crc_even_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_pause_cycle:8;
        RBus_UInt32  p_decmp_pause_cycle:8;
        RBus_UInt32  res1:14;
        RBus_UInt32  decmp_pause_cycle_long_term:1;
        RBus_UInt32  decmp_pause_cycle_measure_en:1;
    };
}pqc_pqdc_mc_lf_pq_decmp_pause_cycle_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_db_en:1;
        RBus_UInt32  decmp_db_rd_sel:1;
        RBus_UInt32  decmp_db_apply:1;
        RBus_UInt32  res1:29;
    };
}pqc_pqdc_mc_pq_decmp_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_data_format:2;
        RBus_UInt32  decmp_data_bit_width:2;
        RBus_UInt32  decmp_data_color:1;
        RBus_UInt32  decmp_line_mode:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  decmp_dic_mode_en:1;
        RBus_UInt32  decmp_qp_mode:2;
        RBus_UInt32  decmp_jump4_en:1;
        RBus_UInt32  decmp_data_bit_width_sel:1;
        RBus_UInt32  decmp_qp_mode_sel:1;
        RBus_UInt32  decmp_data_format_sel:1;
        RBus_UInt32  dummy18099884_14:1;
        RBus_UInt32  decmp_400_old_mode_en:1;
        RBus_UInt32  decmp_line_sum_bit:16;
    };
}pqc_pqdc_mc_hf_pq_decmp_pair_RBUS;

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
}pqc_pqdc_mc_hf_pq_decmp_sat_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p_crc_b_error_even_en:1;
        RBus_UInt32  p_crc_g_error_even_en:1;
        RBus_UInt32  p_crc_r_error_even_en:1;
        RBus_UInt32  p_dic_error_even_en:1;
        RBus_UInt32  p_underflow_irq_even_en:1;
        RBus_UInt32  p_not_finish_irq_even_en:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  crc_b_error_even_en:1;
        RBus_UInt32  crc_g_error_even_en:1;
        RBus_UInt32  crc_r_error_even_en:1;
        RBus_UInt32  dic_error_even_en:1;
        RBus_UInt32  underflow_irq_even_en:1;
        RBus_UInt32  not_finish_irq_even_en:1;
        RBus_UInt32  res2:10;
    };
}pqc_pqdc_mc_hf_pq_decmp_irq_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p_crc_b_error_even_st:1;
        RBus_UInt32  p_crc_g_error_even_st:1;
        RBus_UInt32  p_crc_r_error_even_st:1;
        RBus_UInt32  p_dic_error_even_st:1;
        RBus_UInt32  p_underflow_irq_even_st:1;
        RBus_UInt32  p_not_finish_irq_even_st:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  p_ring_b_overflow_even_st:1;
        RBus_UInt32  p_ring_g_overflow_even_st:1;
        RBus_UInt32  p_ring_r_overflow_even_st:1;
        RBus_UInt32  p_in_fifo_overflow_even_st:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  p_pqdc_irq:1;
        RBus_UInt32  crc_b_error_even_st:1;
        RBus_UInt32  crc_g_error_even_st:1;
        RBus_UInt32  crc_r_error_even_st:1;
        RBus_UInt32  dic_error_even_st:1;
        RBus_UInt32  underflow_irq_even_st:1;
        RBus_UInt32  not_finish_irq_even_st:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  ring_b_overflow_even_st:1;
        RBus_UInt32  ring_g_overflow_even_st:1;
        RBus_UInt32  ring_r_overflow_even_st:1;
        RBus_UInt32  in_fifo_overflow_even_st:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  pqdc_irq:1;
    };
}pqc_pqdc_mc_hf_pq_decmp_irq_st_RBUS;

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
}pqc_pqdc_mc_hf_pq_decmp_mark_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_1:16;
        RBus_UInt32  mark_color_0:16;
    };
}pqc_pqdc_mc_hf_pq_decmp_mark_color_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_3:16;
        RBus_UInt32  mark_color_2:16;
    };
}pqc_pqdc_mc_hf_pq_decmp_mark_color_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_5:16;
        RBus_UInt32  mark_color_4:16;
    };
}pqc_pqdc_mc_hf_pq_decmp_mark_color_45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_7:16;
        RBus_UInt32  mark_color_6:16;
    };
}pqc_pqdc_mc_hf_pq_decmp_mark_color_67_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_422:16;
        RBus_UInt32  mark_color_dic:16;
    };
}pqc_pqdc_mc_hf_pq_decmp_mark_color_422_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_package_height_cnt:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  decmp_crc_error_line:14;
        RBus_UInt32  res2:2;
    };
}pqc_pqdc_mc_hf_pq_decmp_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_g:32;
    };
}pqc_pqdc_mc_hf_pq_decmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_r:32;
    };
}pqc_pqdc_mc_hf_pq_decmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_b:32;
    };
}pqc_pqdc_mc_hf_pq_decmp_crc_even_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_package_height_cnt:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  decmp_crc_error_line:14;
        RBus_UInt32  res2:2;
    };
}pqc_pqdc_mc_hf_p_pq_decmp_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_g:32;
    };
}pqc_pqdc_mc_hf_p_pq_decmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_r:32;
    };
}pqc_pqdc_mc_hf_p_pq_decmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_b:32;
    };
}pqc_pqdc_mc_hf_p_pq_decmp_crc_even_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_pause_cycle:8;
        RBus_UInt32  p_decmp_pause_cycle:8;
        RBus_UInt32  res1:14;
        RBus_UInt32  decmp_pause_cycle_long_term:1;
        RBus_UInt32  decmp_pause_cycle_measure_en:1;
    };
}pqc_pqdc_mc_hf_pq_decmp_pause_cycle_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}pqc_pqdc_mc_pq_decmp_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  res2:1;
        RBus_UInt32  lf_i_pqdc2_bist_fail_0:1;
        RBus_UInt32  lf_i_pqdc1_bist_fail_0:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  hf_i_pqdc2_bist_fail_0:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  lf_p_pqdc2_bist_fail_0:1;
        RBus_UInt32  lf_p_pqdc1_bist_fail_0:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  hf_p_pqdc2_bist_fail_0:1;
        RBus_UInt32  res6:6;
    };
}pqc_pqdc_mc_pq_decmp_bist_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}pqc_pqdc_mc_pq_decmp_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  lf_i_pqdc2_drf_fail_0:1;
        RBus_UInt32  lf_i_pqdc1_drf_fail_0:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  hf_i_pqdc2_drf_fail_0:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  lf_p_pqdc2_drf_fail_0:1;
        RBus_UInt32  lf_p_pqdc1_drf_fail_0:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  hf_p_pqdc2_drf_fail_0:1;
    };
}pqc_pqdc_mc_pq_decmp_drf_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lf_i_pqdc2_ls_0:1;
        RBus_UInt32  lf_i_pqdc1_ls_0:1;
        RBus_UInt32  hf_i_pqdc2_ls_0:1;
        RBus_UInt32  lf_p_pqdc2_ls_0:1;
        RBus_UInt32  lf_p_pqdc1_ls_0:1;
        RBus_UInt32  hf_p_pqdc2_ls_0:1;
        RBus_UInt32  lf_i_pqdc2_test_rwm:1;
        RBus_UInt32  hf_i_pqdc2_test_rwm:1;
        RBus_UInt32  lf_p_pqdc2_test_rwm:1;
        RBus_UInt32  hf_p_pqdc2_test_rwm:1;
        RBus_UInt32  res1:22;
    };
}pqc_pqdc_mc_pq_decmp_bist_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lf_i_pqdc2_rm_0:4;
        RBus_UInt32  lf_i_pqdc1_rm_0:4;
        RBus_UInt32  hf_i_pqdc2_rm_0:4;
        RBus_UInt32  lf_p_pqdc2_rm_0:4;
        RBus_UInt32  lf_p_pqdc1_rm_0:4;
        RBus_UInt32  hf_p_pqdc2_rm_0:4;
        RBus_UInt32  lf_i_pqdc2_rme_0:1;
        RBus_UInt32  lf_i_pqdc1_rme_0:1;
        RBus_UInt32  hf_i_pqdc2_rme_0:1;
        RBus_UInt32  lf_p_pqdc2_rme_0:1;
        RBus_UInt32  lf_p_pqdc1_rme_0:1;
        RBus_UInt32  hf_p_pqdc2_rme_0:1;
        RBus_UInt32  res1:2;
    };
}pqc_pqdc_mc_pq_decmp_bist_rme_rm_RBUS;




#endif 


#endif 
