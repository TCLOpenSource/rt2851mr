/**
* @file Merlin5-DesignSpec-VODMA2
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_VODMA2_REG_H_
#define _RBUS_VODMA2_REG_H_

#include "rbus_types.h"



//  VODMA2 Register Address
#define  VODMA2_VODMA2_V1_DCFG                                                  0x18005800
#define  VODMA2_VODMA2_V1_DCFG_reg_addr                                          "0xB8005800"
#define  VODMA2_VODMA2_V1_DCFG_reg                                               0xB8005800
#define  VODMA2_VODMA2_V1_DCFG_inst_addr                                         "0x0000"
#define  set_VODMA2_VODMA2_V1_DCFG_reg(data)                                     (*((volatile unsigned int*)VODMA2_VODMA2_V1_DCFG_reg)=data)
#define  get_VODMA2_VODMA2_V1_DCFG_reg                                           (*((volatile unsigned int*)VODMA2_VODMA2_V1_DCFG_reg))
#define  VODMA2_VODMA2_V1_DCFG_merge_forward_shift                               (31)
#define  VODMA2_VODMA2_V1_DCFG_merge_backward_shift                              (30)
#define  VODMA2_VODMA2_V1_DCFG_film_condition_shift                              (29)
#define  VODMA2_VODMA2_V1_DCFG_inverse_128_en_shift                              (21)
#define  VODMA2_VODMA2_V1_DCFG_field_mode_shift                                  (20)
#define  VODMA2_VODMA2_V1_DCFG_field_fw_shift                                    (19)
#define  VODMA2_VODMA2_V1_DCFG_l_flag_fw_shift                                   (18)
#define  VODMA2_VODMA2_V1_DCFG_force_2d_en_shift                                 (17)
#define  VODMA2_VODMA2_V1_DCFG_force_2d_sel_shift                                (16)
#define  VODMA2_VODMA2_V1_DCFG_dma_auto_mode_shift                               (15)
#define  VODMA2_VODMA2_V1_DCFG_seq_data_pack_type_shift                          (14)
#define  VODMA2_VODMA2_V1_DCFG_seq_data_width_shift                              (13)
#define  VODMA2_VODMA2_V1_DCFG_double_chroma_shift                               (12)
#define  VODMA2_VODMA2_V1_DCFG_uv_off_shift                                      (11)
#define  VODMA2_VODMA2_V1_DCFG_pxl_swap_sel_shift                                (7)
#define  VODMA2_VODMA2_V1_DCFG_keep_go_en_shift                                  (6)
#define  VODMA2_VODMA2_V1_DCFG_dma_state_reset_en_shift                          (5)
#define  VODMA2_VODMA2_V1_DCFG_v_flip_en_shift                                   (4)
#define  VODMA2_VODMA2_V1_DCFG_chroma_swap_en_shift                              (3)
#define  VODMA2_VODMA2_V1_DCFG_double_pixel_mode_shift                           (2)
#define  VODMA2_VODMA2_V1_DCFG_dma_mode_shift                                    (1)
#define  VODMA2_VODMA2_V1_DCFG_vodma_go_shift                                    (0)
#define  VODMA2_VODMA2_V1_DCFG_merge_forward_mask                                (0x80000000)
#define  VODMA2_VODMA2_V1_DCFG_merge_backward_mask                               (0x40000000)
#define  VODMA2_VODMA2_V1_DCFG_film_condition_mask                               (0x20000000)
#define  VODMA2_VODMA2_V1_DCFG_inverse_128_en_mask                               (0x00200000)
#define  VODMA2_VODMA2_V1_DCFG_field_mode_mask                                   (0x00100000)
#define  VODMA2_VODMA2_V1_DCFG_field_fw_mask                                     (0x00080000)
#define  VODMA2_VODMA2_V1_DCFG_l_flag_fw_mask                                    (0x00040000)
#define  VODMA2_VODMA2_V1_DCFG_force_2d_en_mask                                  (0x00020000)
#define  VODMA2_VODMA2_V1_DCFG_force_2d_sel_mask                                 (0x00010000)
#define  VODMA2_VODMA2_V1_DCFG_dma_auto_mode_mask                                (0x00008000)
#define  VODMA2_VODMA2_V1_DCFG_seq_data_pack_type_mask                           (0x00004000)
#define  VODMA2_VODMA2_V1_DCFG_seq_data_width_mask                               (0x00002000)
#define  VODMA2_VODMA2_V1_DCFG_double_chroma_mask                                (0x00001000)
#define  VODMA2_VODMA2_V1_DCFG_uv_off_mask                                       (0x00000800)
#define  VODMA2_VODMA2_V1_DCFG_pxl_swap_sel_mask                                 (0x00000780)
#define  VODMA2_VODMA2_V1_DCFG_keep_go_en_mask                                   (0x00000040)
#define  VODMA2_VODMA2_V1_DCFG_dma_state_reset_en_mask                           (0x00000020)
#define  VODMA2_VODMA2_V1_DCFG_v_flip_en_mask                                    (0x00000010)
#define  VODMA2_VODMA2_V1_DCFG_chroma_swap_en_mask                               (0x00000008)
#define  VODMA2_VODMA2_V1_DCFG_double_pixel_mode_mask                            (0x00000004)
#define  VODMA2_VODMA2_V1_DCFG_dma_mode_mask                                     (0x00000002)
#define  VODMA2_VODMA2_V1_DCFG_vodma_go_mask                                     (0x00000001)
#define  VODMA2_VODMA2_V1_DCFG_merge_forward(data)                               (0x80000000&((data)<<31))
#define  VODMA2_VODMA2_V1_DCFG_merge_backward(data)                              (0x40000000&((data)<<30))
#define  VODMA2_VODMA2_V1_DCFG_film_condition(data)                              (0x20000000&((data)<<29))
#define  VODMA2_VODMA2_V1_DCFG_inverse_128_en(data)                              (0x00200000&((data)<<21))
#define  VODMA2_VODMA2_V1_DCFG_field_mode(data)                                  (0x00100000&((data)<<20))
#define  VODMA2_VODMA2_V1_DCFG_field_fw(data)                                    (0x00080000&((data)<<19))
#define  VODMA2_VODMA2_V1_DCFG_l_flag_fw(data)                                   (0x00040000&((data)<<18))
#define  VODMA2_VODMA2_V1_DCFG_force_2d_en(data)                                 (0x00020000&((data)<<17))
#define  VODMA2_VODMA2_V1_DCFG_force_2d_sel(data)                                (0x00010000&((data)<<16))
#define  VODMA2_VODMA2_V1_DCFG_dma_auto_mode(data)                               (0x00008000&((data)<<15))
#define  VODMA2_VODMA2_V1_DCFG_seq_data_pack_type(data)                          (0x00004000&((data)<<14))
#define  VODMA2_VODMA2_V1_DCFG_seq_data_width(data)                              (0x00002000&((data)<<13))
#define  VODMA2_VODMA2_V1_DCFG_double_chroma(data)                               (0x00001000&((data)<<12))
#define  VODMA2_VODMA2_V1_DCFG_uv_off(data)                                      (0x00000800&((data)<<11))
#define  VODMA2_VODMA2_V1_DCFG_pxl_swap_sel(data)                                (0x00000780&((data)<<7))
#define  VODMA2_VODMA2_V1_DCFG_keep_go_en(data)                                  (0x00000040&((data)<<6))
#define  VODMA2_VODMA2_V1_DCFG_dma_state_reset_en(data)                          (0x00000020&((data)<<5))
#define  VODMA2_VODMA2_V1_DCFG_v_flip_en(data)                                   (0x00000010&((data)<<4))
#define  VODMA2_VODMA2_V1_DCFG_chroma_swap_en(data)                              (0x00000008&((data)<<3))
#define  VODMA2_VODMA2_V1_DCFG_double_pixel_mode(data)                           (0x00000004&((data)<<2))
#define  VODMA2_VODMA2_V1_DCFG_dma_mode(data)                                    (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_V1_DCFG_vodma_go(data)                                    (0x00000001&(data))
#define  VODMA2_VODMA2_V1_DCFG_get_merge_forward(data)                           ((0x80000000&(data))>>31)
#define  VODMA2_VODMA2_V1_DCFG_get_merge_backward(data)                          ((0x40000000&(data))>>30)
#define  VODMA2_VODMA2_V1_DCFG_get_film_condition(data)                          ((0x20000000&(data))>>29)
#define  VODMA2_VODMA2_V1_DCFG_get_inverse_128_en(data)                          ((0x00200000&(data))>>21)
#define  VODMA2_VODMA2_V1_DCFG_get_field_mode(data)                              ((0x00100000&(data))>>20)
#define  VODMA2_VODMA2_V1_DCFG_get_field_fw(data)                                ((0x00080000&(data))>>19)
#define  VODMA2_VODMA2_V1_DCFG_get_l_flag_fw(data)                               ((0x00040000&(data))>>18)
#define  VODMA2_VODMA2_V1_DCFG_get_force_2d_en(data)                             ((0x00020000&(data))>>17)
#define  VODMA2_VODMA2_V1_DCFG_get_force_2d_sel(data)                            ((0x00010000&(data))>>16)
#define  VODMA2_VODMA2_V1_DCFG_get_dma_auto_mode(data)                           ((0x00008000&(data))>>15)
#define  VODMA2_VODMA2_V1_DCFG_get_seq_data_pack_type(data)                      ((0x00004000&(data))>>14)
#define  VODMA2_VODMA2_V1_DCFG_get_seq_data_width(data)                          ((0x00002000&(data))>>13)
#define  VODMA2_VODMA2_V1_DCFG_get_double_chroma(data)                           ((0x00001000&(data))>>12)
#define  VODMA2_VODMA2_V1_DCFG_get_uv_off(data)                                  ((0x00000800&(data))>>11)
#define  VODMA2_VODMA2_V1_DCFG_get_pxl_swap_sel(data)                            ((0x00000780&(data))>>7)
#define  VODMA2_VODMA2_V1_DCFG_get_keep_go_en(data)                              ((0x00000040&(data))>>6)
#define  VODMA2_VODMA2_V1_DCFG_get_dma_state_reset_en(data)                      ((0x00000020&(data))>>5)
#define  VODMA2_VODMA2_V1_DCFG_get_v_flip_en(data)                               ((0x00000010&(data))>>4)
#define  VODMA2_VODMA2_V1_DCFG_get_chroma_swap_en(data)                          ((0x00000008&(data))>>3)
#define  VODMA2_VODMA2_V1_DCFG_get_double_pixel_mode(data)                       ((0x00000004&(data))>>2)
#define  VODMA2_VODMA2_V1_DCFG_get_dma_mode(data)                                ((0x00000002&(data))>>1)
#define  VODMA2_VODMA2_V1_DCFG_get_vodma_go(data)                                (0x00000001&(data))

#define  VODMA2_VODMA2_DMA_OPTION                                               0x18005804
#define  VODMA2_VODMA2_DMA_OPTION_reg_addr                                       "0xB8005804"
#define  VODMA2_VODMA2_DMA_OPTION_reg                                            0xB8005804
#define  VODMA2_VODMA2_DMA_OPTION_inst_addr                                      "0x0001"
#define  set_VODMA2_VODMA2_DMA_OPTION_reg(data)                                  (*((volatile unsigned int*)VODMA2_VODMA2_DMA_OPTION_reg)=data)
#define  get_VODMA2_VODMA2_DMA_OPTION_reg                                        (*((volatile unsigned int*)VODMA2_VODMA2_DMA_OPTION_reg))
#define  VODMA2_VODMA2_DMA_OPTION_max_outstanding_shift                          (29)
#define  VODMA2_VODMA2_DMA_OPTION_burst_len_shift                                (4)
#define  VODMA2_VODMA2_DMA_OPTION_cmd_trans_en_shift                             (0)
#define  VODMA2_VODMA2_DMA_OPTION_max_outstanding_mask                           (0xE0000000)
#define  VODMA2_VODMA2_DMA_OPTION_burst_len_mask                                 (0x000007F0)
#define  VODMA2_VODMA2_DMA_OPTION_cmd_trans_en_mask                              (0x00000001)
#define  VODMA2_VODMA2_DMA_OPTION_max_outstanding(data)                          (0xE0000000&((data)<<29))
#define  VODMA2_VODMA2_DMA_OPTION_burst_len(data)                                (0x000007F0&((data)<<4))
#define  VODMA2_VODMA2_DMA_OPTION_cmd_trans_en(data)                             (0x00000001&(data))
#define  VODMA2_VODMA2_DMA_OPTION_get_max_outstanding(data)                      ((0xE0000000&(data))>>29)
#define  VODMA2_VODMA2_DMA_OPTION_get_burst_len(data)                            ((0x000007F0&(data))>>4)
#define  VODMA2_VODMA2_DMA_OPTION_get_cmd_trans_en(data)                         (0x00000001&(data))

#define  VODMA2_VODMA2_READ_START                                               0x18005944
#define  VODMA2_VODMA2_READ_START_reg_addr                                       "0xB8005944"
#define  VODMA2_VODMA2_READ_START_reg                                            0xB8005944
#define  VODMA2_VODMA2_READ_START_inst_addr                                      "0x0002"
#define  set_VODMA2_VODMA2_READ_START_reg(data)                                  (*((volatile unsigned int*)VODMA2_VODMA2_READ_START_reg)=data)
#define  get_VODMA2_VODMA2_READ_START_reg                                        (*((volatile unsigned int*)VODMA2_VODMA2_READ_START_reg))
#define  VODMA2_VODMA2_READ_START_line_cnt_shift                                 (0)
#define  VODMA2_VODMA2_READ_START_line_cnt_mask                                  (0x00000FFF)
#define  VODMA2_VODMA2_READ_START_line_cnt(data)                                 (0x00000FFF&(data))
#define  VODMA2_VODMA2_READ_START_get_line_cnt(data)                             (0x00000FFF&(data))

#define  VODMA2_VODMA2_V1_LINE_BLK1                                             0x18005808
#define  VODMA2_VODMA2_V1_LINE_BLK1_reg_addr                                     "0xB8005808"
#define  VODMA2_VODMA2_V1_LINE_BLK1_reg                                          0xB8005808
#define  VODMA2_VODMA2_V1_LINE_BLK1_inst_addr                                    "0x0003"
#define  set_VODMA2_VODMA2_V1_LINE_BLK1_reg(data)                                (*((volatile unsigned int*)VODMA2_VODMA2_V1_LINE_BLK1_reg)=data)
#define  get_VODMA2_VODMA2_V1_LINE_BLK1_reg                                      (*((volatile unsigned int*)VODMA2_VODMA2_V1_LINE_BLK1_reg))
#define  VODMA2_VODMA2_V1_LINE_BLK1_y_line_step_shift                            (4)
#define  VODMA2_VODMA2_V1_LINE_BLK1_y_auto_line_step_shift                       (1)
#define  VODMA2_VODMA2_V1_LINE_BLK1_y_line_select_shift                          (0)
#define  VODMA2_VODMA2_V1_LINE_BLK1_y_line_step_mask                             (0xFFFFFFF0)
#define  VODMA2_VODMA2_V1_LINE_BLK1_y_auto_line_step_mask                        (0x00000002)
#define  VODMA2_VODMA2_V1_LINE_BLK1_y_line_select_mask                           (0x00000001)
#define  VODMA2_VODMA2_V1_LINE_BLK1_y_line_step(data)                            (0xFFFFFFF0&((data)<<4))
#define  VODMA2_VODMA2_V1_LINE_BLK1_y_auto_line_step(data)                       (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_V1_LINE_BLK1_y_line_select(data)                          (0x00000001&(data))
#define  VODMA2_VODMA2_V1_LINE_BLK1_get_y_line_step(data)                        ((0xFFFFFFF0&(data))>>4)
#define  VODMA2_VODMA2_V1_LINE_BLK1_get_y_auto_line_step(data)                   ((0x00000002&(data))>>1)
#define  VODMA2_VODMA2_V1_LINE_BLK1_get_y_line_select(data)                      (0x00000001&(data))

#define  VODMA2_VODMA2_V1_LINE_BLK2                                             0x1800580C
#define  VODMA2_VODMA2_V1_LINE_BLK2_reg_addr                                     "0xB800580C"
#define  VODMA2_VODMA2_V1_LINE_BLK2_reg                                          0xB800580C
#define  VODMA2_VODMA2_V1_LINE_BLK2_inst_addr                                    "0x0004"
#define  set_VODMA2_VODMA2_V1_LINE_BLK2_reg(data)                                (*((volatile unsigned int*)VODMA2_VODMA2_V1_LINE_BLK2_reg)=data)
#define  get_VODMA2_VODMA2_V1_LINE_BLK2_reg                                      (*((volatile unsigned int*)VODMA2_VODMA2_V1_LINE_BLK2_reg))
#define  VODMA2_VODMA2_V1_LINE_BLK2_c_line_step_shift                            (4)
#define  VODMA2_VODMA2_V1_LINE_BLK2_c_auto_line_step_shift                       (1)
#define  VODMA2_VODMA2_V1_LINE_BLK2_c_line_select_shift                          (0)
#define  VODMA2_VODMA2_V1_LINE_BLK2_c_line_step_mask                             (0xFFFFFFF0)
#define  VODMA2_VODMA2_V1_LINE_BLK2_c_auto_line_step_mask                        (0x00000002)
#define  VODMA2_VODMA2_V1_LINE_BLK2_c_line_select_mask                           (0x00000001)
#define  VODMA2_VODMA2_V1_LINE_BLK2_c_line_step(data)                            (0xFFFFFFF0&((data)<<4))
#define  VODMA2_VODMA2_V1_LINE_BLK2_c_auto_line_step(data)                       (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_V1_LINE_BLK2_c_line_select(data)                          (0x00000001&(data))
#define  VODMA2_VODMA2_V1_LINE_BLK2_get_c_line_step(data)                        ((0xFFFFFFF0&(data))>>4)
#define  VODMA2_VODMA2_V1_LINE_BLK2_get_c_auto_line_step(data)                   ((0x00000002&(data))>>1)
#define  VODMA2_VODMA2_V1_LINE_BLK2_get_c_line_select(data)                      (0x00000001&(data))

#define  VODMA2_VODMA2_REG_DB_CTRL                                              0x18005810
#define  VODMA2_VODMA2_REG_DB_CTRL_reg_addr                                      "0xB8005810"
#define  VODMA2_VODMA2_REG_DB_CTRL_reg                                           0xB8005810
#define  VODMA2_VODMA2_REG_DB_CTRL_inst_addr                                     "0x0005"
#define  set_VODMA2_VODMA2_REG_DB_CTRL_reg(data)                                 (*((volatile unsigned int*)VODMA2_VODMA2_REG_DB_CTRL_reg)=data)
#define  get_VODMA2_VODMA2_REG_DB_CTRL_reg                                       (*((volatile unsigned int*)VODMA2_VODMA2_REG_DB_CTRL_reg))
#define  VODMA2_VODMA2_REG_DB_CTRL_vodmavsg_dbrdy_keep_shift                     (19)
#define  VODMA2_VODMA2_REG_DB_CTRL_vodmavsg_db_sel_shift                         (18)
#define  VODMA2_VODMA2_REG_DB_CTRL_vodmavsg_db_en_shift                          (17)
#define  VODMA2_VODMA2_REG_DB_CTRL_vodmavsg_db_rdy_shift                         (16)
#define  VODMA2_VODMA2_REG_DB_CTRL_iv_src_db_en_shift                            (9)
#define  VODMA2_VODMA2_REG_DB_CTRL_iv_src_db_rdy_shift                           (8)
#define  VODMA2_VODMA2_REG_DB_CTRL_vodma_db_sel_shift                            (2)
#define  VODMA2_VODMA2_REG_DB_CTRL_vodma_db_en_shift                             (1)
#define  VODMA2_VODMA2_REG_DB_CTRL_vodma_db_rdy_shift                            (0)
#define  VODMA2_VODMA2_REG_DB_CTRL_vodmavsg_dbrdy_keep_mask                      (0x00080000)
#define  VODMA2_VODMA2_REG_DB_CTRL_vodmavsg_db_sel_mask                          (0x00040000)
#define  VODMA2_VODMA2_REG_DB_CTRL_vodmavsg_db_en_mask                           (0x00020000)
#define  VODMA2_VODMA2_REG_DB_CTRL_vodmavsg_db_rdy_mask                          (0x00010000)
#define  VODMA2_VODMA2_REG_DB_CTRL_iv_src_db_en_mask                             (0x00000200)
#define  VODMA2_VODMA2_REG_DB_CTRL_iv_src_db_rdy_mask                            (0x00000100)
#define  VODMA2_VODMA2_REG_DB_CTRL_vodma_db_sel_mask                             (0x00000004)
#define  VODMA2_VODMA2_REG_DB_CTRL_vodma_db_en_mask                              (0x00000002)
#define  VODMA2_VODMA2_REG_DB_CTRL_vodma_db_rdy_mask                             (0x00000001)
#define  VODMA2_VODMA2_REG_DB_CTRL_vodmavsg_dbrdy_keep(data)                     (0x00080000&((data)<<19))
#define  VODMA2_VODMA2_REG_DB_CTRL_vodmavsg_db_sel(data)                         (0x00040000&((data)<<18))
#define  VODMA2_VODMA2_REG_DB_CTRL_vodmavsg_db_en(data)                          (0x00020000&((data)<<17))
#define  VODMA2_VODMA2_REG_DB_CTRL_vodmavsg_db_rdy(data)                         (0x00010000&((data)<<16))
#define  VODMA2_VODMA2_REG_DB_CTRL_iv_src_db_en(data)                            (0x00000200&((data)<<9))
#define  VODMA2_VODMA2_REG_DB_CTRL_iv_src_db_rdy(data)                           (0x00000100&((data)<<8))
#define  VODMA2_VODMA2_REG_DB_CTRL_vodma_db_sel(data)                            (0x00000004&((data)<<2))
#define  VODMA2_VODMA2_REG_DB_CTRL_vodma_db_en(data)                             (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_REG_DB_CTRL_vodma_db_rdy(data)                            (0x00000001&(data))
#define  VODMA2_VODMA2_REG_DB_CTRL_get_vodmavsg_dbrdy_keep(data)                 ((0x00080000&(data))>>19)
#define  VODMA2_VODMA2_REG_DB_CTRL_get_vodmavsg_db_sel(data)                     ((0x00040000&(data))>>18)
#define  VODMA2_VODMA2_REG_DB_CTRL_get_vodmavsg_db_en(data)                      ((0x00020000&(data))>>17)
#define  VODMA2_VODMA2_REG_DB_CTRL_get_vodmavsg_db_rdy(data)                     ((0x00010000&(data))>>16)
#define  VODMA2_VODMA2_REG_DB_CTRL_get_iv_src_db_en(data)                        ((0x00000200&(data))>>9)
#define  VODMA2_VODMA2_REG_DB_CTRL_get_iv_src_db_rdy(data)                       ((0x00000100&(data))>>8)
#define  VODMA2_VODMA2_REG_DB_CTRL_get_vodma_db_sel(data)                        ((0x00000004&(data))>>2)
#define  VODMA2_VODMA2_REG_DB_CTRL_get_vodma_db_en(data)                         ((0x00000002&(data))>>1)
#define  VODMA2_VODMA2_REG_DB_CTRL_get_vodma_db_rdy(data)                        (0x00000001&(data))

#define  VODMA2_VODMA2_REG_DB_CTRL2                                             0x18005814
#define  VODMA2_VODMA2_REG_DB_CTRL2_reg_addr                                     "0xB8005814"
#define  VODMA2_VODMA2_REG_DB_CTRL2_reg                                          0xB8005814
#define  VODMA2_VODMA2_REG_DB_CTRL2_inst_addr                                    "0x0006"
#define  set_VODMA2_VODMA2_REG_DB_CTRL2_reg(data)                                (*((volatile unsigned int*)VODMA2_VODMA2_REG_DB_CTRL2_reg)=data)
#define  get_VODMA2_VODMA2_REG_DB_CTRL2_reg                                      (*((volatile unsigned int*)VODMA2_VODMA2_REG_DB_CTRL2_reg))
#define  VODMA2_VODMA2_REG_DB_CTRL2_i2rnd_db_sel_shift                           (2)
#define  VODMA2_VODMA2_REG_DB_CTRL2_i2rnd_db_en_shift                            (1)
#define  VODMA2_VODMA2_REG_DB_CTRL2_i2rnd_db_rdy_shift                           (0)
#define  VODMA2_VODMA2_REG_DB_CTRL2_i2rnd_db_sel_mask                            (0x00000004)
#define  VODMA2_VODMA2_REG_DB_CTRL2_i2rnd_db_en_mask                             (0x00000002)
#define  VODMA2_VODMA2_REG_DB_CTRL2_i2rnd_db_rdy_mask                            (0x00000001)
#define  VODMA2_VODMA2_REG_DB_CTRL2_i2rnd_db_sel(data)                           (0x00000004&((data)<<2))
#define  VODMA2_VODMA2_REG_DB_CTRL2_i2rnd_db_en(data)                            (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_REG_DB_CTRL2_i2rnd_db_rdy(data)                           (0x00000001&(data))
#define  VODMA2_VODMA2_REG_DB_CTRL2_get_i2rnd_db_sel(data)                       ((0x00000004&(data))>>2)
#define  VODMA2_VODMA2_REG_DB_CTRL2_get_i2rnd_db_en(data)                        ((0x00000002&(data))>>1)
#define  VODMA2_VODMA2_REG_DB_CTRL2_get_i2rnd_db_rdy(data)                       (0x00000001&(data))

#define  VODMA2_VODMA2_CRC_CTRL                                                 0x18005818
#define  VODMA2_VODMA2_CRC_CTRL_reg_addr                                         "0xB8005818"
#define  VODMA2_VODMA2_CRC_CTRL_reg                                              0xB8005818
#define  VODMA2_VODMA2_CRC_CTRL_inst_addr                                        "0x0007"
#define  set_VODMA2_VODMA2_CRC_CTRL_reg(data)                                    (*((volatile unsigned int*)VODMA2_VODMA2_CRC_CTRL_reg)=data)
#define  get_VODMA2_VODMA2_CRC_CTRL_reg                                          (*((volatile unsigned int*)VODMA2_VODMA2_CRC_CTRL_reg))
#define  VODMA2_VODMA2_CRC_CTRL_crc_continuous_shift                             (1)
#define  VODMA2_VODMA2_CRC_CTRL_crc_start_shift                                  (0)
#define  VODMA2_VODMA2_CRC_CTRL_crc_continuous_mask                              (0x00000002)
#define  VODMA2_VODMA2_CRC_CTRL_crc_start_mask                                   (0x00000001)
#define  VODMA2_VODMA2_CRC_CTRL_crc_continuous(data)                             (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_CRC_CTRL_crc_start(data)                                  (0x00000001&(data))
#define  VODMA2_VODMA2_CRC_CTRL_get_crc_continuous(data)                         ((0x00000002&(data))>>1)
#define  VODMA2_VODMA2_CRC_CTRL_get_crc_start(data)                              (0x00000001&(data))

#define  VODMA2_VODMA2_CRC_RESULT                                               0x1800581C
#define  VODMA2_VODMA2_CRC_RESULT_reg_addr                                       "0xB800581C"
#define  VODMA2_VODMA2_CRC_RESULT_reg                                            0xB800581C
#define  VODMA2_VODMA2_CRC_RESULT_inst_addr                                      "0x0008"
#define  set_VODMA2_VODMA2_CRC_RESULT_reg(data)                                  (*((volatile unsigned int*)VODMA2_VODMA2_CRC_RESULT_reg)=data)
#define  get_VODMA2_VODMA2_CRC_RESULT_reg                                        (*((volatile unsigned int*)VODMA2_VODMA2_CRC_RESULT_reg))
#define  VODMA2_VODMA2_CRC_RESULT_crc_result_shift                               (0)
#define  VODMA2_VODMA2_CRC_RESULT_crc_result_mask                                (0xFFFFFFFF)
#define  VODMA2_VODMA2_CRC_RESULT_crc_result(data)                               (0xFFFFFFFF&(data))
#define  VODMA2_VODMA2_CRC_RESULT_get_crc_result(data)                           (0xFFFFFFFF&(data))

#define  VODMA2_VODMA2_V1_DSIZE                                                 0x18005820
#define  VODMA2_VODMA2_V1_DSIZE_reg_addr                                         "0xB8005820"
#define  VODMA2_VODMA2_V1_DSIZE_reg                                              0xB8005820
#define  VODMA2_VODMA2_V1_DSIZE_inst_addr                                        "0x0009"
#define  set_VODMA2_VODMA2_V1_DSIZE_reg(data)                                    (*((volatile unsigned int*)VODMA2_VODMA2_V1_DSIZE_reg)=data)
#define  get_VODMA2_VODMA2_V1_DSIZE_reg                                          (*((volatile unsigned int*)VODMA2_VODMA2_V1_DSIZE_reg))
#define  VODMA2_VODMA2_V1_DSIZE_vs_toggle_reset_shift                            (31)
#define  VODMA2_VODMA2_V1_DSIZE_p_y_len_shift                                    (16)
#define  VODMA2_VODMA2_V1_DSIZE_p_y_nline_shift                                  (0)
#define  VODMA2_VODMA2_V1_DSIZE_vs_toggle_reset_mask                             (0x80000000)
#define  VODMA2_VODMA2_V1_DSIZE_p_y_len_mask                                     (0x1FFF0000)
#define  VODMA2_VODMA2_V1_DSIZE_p_y_nline_mask                                   (0x00000FFF)
#define  VODMA2_VODMA2_V1_DSIZE_vs_toggle_reset(data)                            (0x80000000&((data)<<31))
#define  VODMA2_VODMA2_V1_DSIZE_p_y_len(data)                                    (0x1FFF0000&((data)<<16))
#define  VODMA2_VODMA2_V1_DSIZE_p_y_nline(data)                                  (0x00000FFF&(data))
#define  VODMA2_VODMA2_V1_DSIZE_get_vs_toggle_reset(data)                        ((0x80000000&(data))>>31)
#define  VODMA2_VODMA2_V1_DSIZE_get_p_y_len(data)                                ((0x1FFF0000&(data))>>16)
#define  VODMA2_VODMA2_V1_DSIZE_get_p_y_nline(data)                              (0x00000FFF&(data))

#define  VODMA2_VODMA2_V1_SEQ_3D_L1                                             0x18005824
#define  VODMA2_VODMA2_V1_SEQ_3D_L1_reg_addr                                     "0xB8005824"
#define  VODMA2_VODMA2_V1_SEQ_3D_L1_reg                                          0xB8005824
#define  VODMA2_VODMA2_V1_SEQ_3D_L1_inst_addr                                    "0x000A"
#define  set_VODMA2_VODMA2_V1_SEQ_3D_L1_reg(data)                                (*((volatile unsigned int*)VODMA2_VODMA2_V1_SEQ_3D_L1_reg)=data)
#define  get_VODMA2_VODMA2_V1_SEQ_3D_L1_reg                                      (*((volatile unsigned int*)VODMA2_VODMA2_V1_SEQ_3D_L1_reg))
#define  VODMA2_VODMA2_V1_SEQ_3D_L1_st_adr_shift                                 (4)
#define  VODMA2_VODMA2_V1_SEQ_3D_L1_st_adr_mask                                  (0xFFFFFFF0)
#define  VODMA2_VODMA2_V1_SEQ_3D_L1_st_adr(data)                                 (0xFFFFFFF0&((data)<<4))
#define  VODMA2_VODMA2_V1_SEQ_3D_L1_get_st_adr(data)                             ((0xFFFFFFF0&(data))>>4)

#define  VODMA2_VODMA2_V1_SEQ_3D_R1                                             0x18005828
#define  VODMA2_VODMA2_V1_SEQ_3D_R1_reg_addr                                     "0xB8005828"
#define  VODMA2_VODMA2_V1_SEQ_3D_R1_reg                                          0xB8005828
#define  VODMA2_VODMA2_V1_SEQ_3D_R1_inst_addr                                    "0x000B"
#define  set_VODMA2_VODMA2_V1_SEQ_3D_R1_reg(data)                                (*((volatile unsigned int*)VODMA2_VODMA2_V1_SEQ_3D_R1_reg)=data)
#define  get_VODMA2_VODMA2_V1_SEQ_3D_R1_reg                                      (*((volatile unsigned int*)VODMA2_VODMA2_V1_SEQ_3D_R1_reg))
#define  VODMA2_VODMA2_V1_SEQ_3D_R1_st_adr_shift                                 (4)
#define  VODMA2_VODMA2_V1_SEQ_3D_R1_st_adr_mask                                  (0xFFFFFFF0)
#define  VODMA2_VODMA2_V1_SEQ_3D_R1_st_adr(data)                                 (0xFFFFFFF0&((data)<<4))
#define  VODMA2_VODMA2_V1_SEQ_3D_R1_get_st_adr(data)                             ((0xFFFFFFF0&(data))>>4)

#define  VODMA2_VODMA2_V1_SEQ_3D_L2                                             0x1800582C
#define  VODMA2_VODMA2_V1_SEQ_3D_L2_reg_addr                                     "0xB800582C"
#define  VODMA2_VODMA2_V1_SEQ_3D_L2_reg                                          0xB800582C
#define  VODMA2_VODMA2_V1_SEQ_3D_L2_inst_addr                                    "0x000C"
#define  set_VODMA2_VODMA2_V1_SEQ_3D_L2_reg(data)                                (*((volatile unsigned int*)VODMA2_VODMA2_V1_SEQ_3D_L2_reg)=data)
#define  get_VODMA2_VODMA2_V1_SEQ_3D_L2_reg                                      (*((volatile unsigned int*)VODMA2_VODMA2_V1_SEQ_3D_L2_reg))
#define  VODMA2_VODMA2_V1_SEQ_3D_L2_st_adr_shift                                 (4)
#define  VODMA2_VODMA2_V1_SEQ_3D_L2_st_adr_mask                                  (0xFFFFFFF0)
#define  VODMA2_VODMA2_V1_SEQ_3D_L2_st_adr(data)                                 (0xFFFFFFF0&((data)<<4))
#define  VODMA2_VODMA2_V1_SEQ_3D_L2_get_st_adr(data)                             ((0xFFFFFFF0&(data))>>4)

#define  VODMA2_VODMA2_V1_SEQ_3D_R2                                             0x18005830
#define  VODMA2_VODMA2_V1_SEQ_3D_R2_reg_addr                                     "0xB8005830"
#define  VODMA2_VODMA2_V1_SEQ_3D_R2_reg                                          0xB8005830
#define  VODMA2_VODMA2_V1_SEQ_3D_R2_inst_addr                                    "0x000D"
#define  set_VODMA2_VODMA2_V1_SEQ_3D_R2_reg(data)                                (*((volatile unsigned int*)VODMA2_VODMA2_V1_SEQ_3D_R2_reg)=data)
#define  get_VODMA2_VODMA2_V1_SEQ_3D_R2_reg                                      (*((volatile unsigned int*)VODMA2_VODMA2_V1_SEQ_3D_R2_reg))
#define  VODMA2_VODMA2_V1_SEQ_3D_R2_st_adr_shift                                 (4)
#define  VODMA2_VODMA2_V1_SEQ_3D_R2_st_adr_mask                                  (0xFFFFFFF0)
#define  VODMA2_VODMA2_V1_SEQ_3D_R2_st_adr(data)                                 (0xFFFFFFF0&((data)<<4))
#define  VODMA2_VODMA2_V1_SEQ_3D_R2_get_st_adr(data)                             ((0xFFFFFFF0&(data))>>4)

#define  VODMA2_VODMA2_V1_SEQ_3D_L3                                             0x18005834
#define  VODMA2_VODMA2_V1_SEQ_3D_L3_reg_addr                                     "0xB8005834"
#define  VODMA2_VODMA2_V1_SEQ_3D_L3_reg                                          0xB8005834
#define  VODMA2_VODMA2_V1_SEQ_3D_L3_inst_addr                                    "0x000E"
#define  set_VODMA2_VODMA2_V1_SEQ_3D_L3_reg(data)                                (*((volatile unsigned int*)VODMA2_VODMA2_V1_SEQ_3D_L3_reg)=data)
#define  get_VODMA2_VODMA2_V1_SEQ_3D_L3_reg                                      (*((volatile unsigned int*)VODMA2_VODMA2_V1_SEQ_3D_L3_reg))
#define  VODMA2_VODMA2_V1_SEQ_3D_L3_st_adr_shift                                 (4)
#define  VODMA2_VODMA2_V1_SEQ_3D_L3_st_adr_mask                                  (0xFFFFFFF0)
#define  VODMA2_VODMA2_V1_SEQ_3D_L3_st_adr(data)                                 (0xFFFFFFF0&((data)<<4))
#define  VODMA2_VODMA2_V1_SEQ_3D_L3_get_st_adr(data)                             ((0xFFFFFFF0&(data))>>4)

#define  VODMA2_VODMA2_V1_SEQ_3D_R3                                             0x18005838
#define  VODMA2_VODMA2_V1_SEQ_3D_R3_reg_addr                                     "0xB8005838"
#define  VODMA2_VODMA2_V1_SEQ_3D_R3_reg                                          0xB8005838
#define  VODMA2_VODMA2_V1_SEQ_3D_R3_inst_addr                                    "0x000F"
#define  set_VODMA2_VODMA2_V1_SEQ_3D_R3_reg(data)                                (*((volatile unsigned int*)VODMA2_VODMA2_V1_SEQ_3D_R3_reg)=data)
#define  get_VODMA2_VODMA2_V1_SEQ_3D_R3_reg                                      (*((volatile unsigned int*)VODMA2_VODMA2_V1_SEQ_3D_R3_reg))
#define  VODMA2_VODMA2_V1_SEQ_3D_R3_st_adr_shift                                 (4)
#define  VODMA2_VODMA2_V1_SEQ_3D_R3_st_adr_mask                                  (0xFFFFFFF0)
#define  VODMA2_VODMA2_V1_SEQ_3D_R3_st_adr(data)                                 (0xFFFFFFF0&((data)<<4))
#define  VODMA2_VODMA2_V1_SEQ_3D_R3_get_st_adr(data)                             ((0xFFFFFFF0&(data))>>4)

#define  VODMA2_VODMA2_V1_SEQ_3D_L4                                             0x1800583C
#define  VODMA2_VODMA2_V1_SEQ_3D_L4_reg_addr                                     "0xB800583C"
#define  VODMA2_VODMA2_V1_SEQ_3D_L4_reg                                          0xB800583C
#define  VODMA2_VODMA2_V1_SEQ_3D_L4_inst_addr                                    "0x0010"
#define  set_VODMA2_VODMA2_V1_SEQ_3D_L4_reg(data)                                (*((volatile unsigned int*)VODMA2_VODMA2_V1_SEQ_3D_L4_reg)=data)
#define  get_VODMA2_VODMA2_V1_SEQ_3D_L4_reg                                      (*((volatile unsigned int*)VODMA2_VODMA2_V1_SEQ_3D_L4_reg))
#define  VODMA2_VODMA2_V1_SEQ_3D_L4_st_adr_shift                                 (4)
#define  VODMA2_VODMA2_V1_SEQ_3D_L4_st_adr_mask                                  (0xFFFFFFF0)
#define  VODMA2_VODMA2_V1_SEQ_3D_L4_st_adr(data)                                 (0xFFFFFFF0&((data)<<4))
#define  VODMA2_VODMA2_V1_SEQ_3D_L4_get_st_adr(data)                             ((0xFFFFFFF0&(data))>>4)

#define  VODMA2_VODMA2_V1_SEQ_3D_R4                                             0x18005840
#define  VODMA2_VODMA2_V1_SEQ_3D_R4_reg_addr                                     "0xB8005840"
#define  VODMA2_VODMA2_V1_SEQ_3D_R4_reg                                          0xB8005840
#define  VODMA2_VODMA2_V1_SEQ_3D_R4_inst_addr                                    "0x0011"
#define  set_VODMA2_VODMA2_V1_SEQ_3D_R4_reg(data)                                (*((volatile unsigned int*)VODMA2_VODMA2_V1_SEQ_3D_R4_reg)=data)
#define  get_VODMA2_VODMA2_V1_SEQ_3D_R4_reg                                      (*((volatile unsigned int*)VODMA2_VODMA2_V1_SEQ_3D_R4_reg))
#define  VODMA2_VODMA2_V1_SEQ_3D_R4_st_adr_shift                                 (4)
#define  VODMA2_VODMA2_V1_SEQ_3D_R4_st_adr_mask                                  (0xFFFFFFF0)
#define  VODMA2_VODMA2_V1_SEQ_3D_R4_st_adr(data)                                 (0xFFFFFFF0&((data)<<4))
#define  VODMA2_VODMA2_V1_SEQ_3D_R4_get_st_adr(data)                             ((0xFFFFFFF0&(data))>>4)

#define  VODMA2_VODMA2_V1_BLK1                                                  0x18005844
#define  VODMA2_VODMA2_V1_BLK1_reg_addr                                          "0xB8005844"
#define  VODMA2_VODMA2_V1_BLK1_reg                                               0xB8005844
#define  VODMA2_VODMA2_V1_BLK1_inst_addr                                         "0x0012"
#define  set_VODMA2_VODMA2_V1_BLK1_reg(data)                                     (*((volatile unsigned int*)VODMA2_VODMA2_V1_BLK1_reg)=data)
#define  get_VODMA2_VODMA2_V1_BLK1_reg                                           (*((volatile unsigned int*)VODMA2_VODMA2_V1_BLK1_reg))
#define  VODMA2_VODMA2_V1_BLK1_y_h_offset_shift                                  (16)
#define  VODMA2_VODMA2_V1_BLK1_y_v_offset_shift                                  (0)
#define  VODMA2_VODMA2_V1_BLK1_y_h_offset_mask                                   (0x1FFF0000)
#define  VODMA2_VODMA2_V1_BLK1_y_v_offset_mask                                   (0x00000FFF)
#define  VODMA2_VODMA2_V1_BLK1_y_h_offset(data)                                  (0x1FFF0000&((data)<<16))
#define  VODMA2_VODMA2_V1_BLK1_y_v_offset(data)                                  (0x00000FFF&(data))
#define  VODMA2_VODMA2_V1_BLK1_get_y_h_offset(data)                              ((0x1FFF0000&(data))>>16)
#define  VODMA2_VODMA2_V1_BLK1_get_y_v_offset(data)                              (0x00000FFF&(data))

#define  VODMA2_VODMA2_V1_BLK2                                                  0x18005848
#define  VODMA2_VODMA2_V1_BLK2_reg_addr                                          "0xB8005848"
#define  VODMA2_VODMA2_V1_BLK2_reg                                               0xB8005848
#define  VODMA2_VODMA2_V1_BLK2_inst_addr                                         "0x0013"
#define  set_VODMA2_VODMA2_V1_BLK2_reg(data)                                     (*((volatile unsigned int*)VODMA2_VODMA2_V1_BLK2_reg)=data)
#define  get_VODMA2_VODMA2_V1_BLK2_reg                                           (*((volatile unsigned int*)VODMA2_VODMA2_V1_BLK2_reg))
#define  VODMA2_VODMA2_V1_BLK2_c_h_offset_shift                                  (16)
#define  VODMA2_VODMA2_V1_BLK2_c_v_offset_shift                                  (0)
#define  VODMA2_VODMA2_V1_BLK2_c_h_offset_mask                                   (0x1FFF0000)
#define  VODMA2_VODMA2_V1_BLK2_c_v_offset_mask                                   (0x00000FFF)
#define  VODMA2_VODMA2_V1_BLK2_c_h_offset(data)                                  (0x1FFF0000&((data)<<16))
#define  VODMA2_VODMA2_V1_BLK2_c_v_offset(data)                                  (0x00000FFF&(data))
#define  VODMA2_VODMA2_V1_BLK2_get_c_h_offset(data)                              ((0x1FFF0000&(data))>>16)
#define  VODMA2_VODMA2_V1_BLK2_get_c_v_offset(data)                              (0x00000FFF&(data))

#define  VODMA2_VODMA2_TaBSbS                                                   0x1800584C
#define  VODMA2_VODMA2_TaBSbS_reg_addr                                           "0xB800584C"
#define  VODMA2_VODMA2_TaBSbS_reg                                                0xB800584C
#define  VODMA2_VODMA2_TaBSbS_inst_addr                                          "0x0014"
#define  set_VODMA2_VODMA2_TaBSbS_reg(data)                                      (*((volatile unsigned int*)VODMA2_VODMA2_TaBSbS_reg)=data)
#define  get_VODMA2_VODMA2_TaBSbS_reg                                            (*((volatile unsigned int*)VODMA2_VODMA2_TaBSbS_reg))
#define  VODMA2_VODMA2_TaBSbS_mode_shift                                         (1)
#define  VODMA2_VODMA2_TaBSbS_merge_shift                                        (0)
#define  VODMA2_VODMA2_TaBSbS_mode_mask                                          (0x00000002)
#define  VODMA2_VODMA2_TaBSbS_merge_mask                                         (0x00000001)
#define  VODMA2_VODMA2_TaBSbS_mode(data)                                         (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_TaBSbS_merge(data)                                        (0x00000001&(data))
#define  VODMA2_VODMA2_TaBSbS_get_mode(data)                                     ((0x00000002&(data))>>1)
#define  VODMA2_VODMA2_TaBSbS_get_merge(data)                                    (0x00000001&(data))

#define  VODMA2_VODMA2_TaBSbS_LINE_BLK1                                         0x18005850
#define  VODMA2_VODMA2_TaBSbS_LINE_BLK1_reg_addr                                 "0xB8005850"
#define  VODMA2_VODMA2_TaBSbS_LINE_BLK1_reg                                      0xB8005850
#define  VODMA2_VODMA2_TaBSbS_LINE_BLK1_inst_addr                                "0x0015"
#define  set_VODMA2_VODMA2_TaBSbS_LINE_BLK1_reg(data)                            (*((volatile unsigned int*)VODMA2_VODMA2_TaBSbS_LINE_BLK1_reg)=data)
#define  get_VODMA2_VODMA2_TaBSbS_LINE_BLK1_reg                                  (*((volatile unsigned int*)VODMA2_VODMA2_TaBSbS_LINE_BLK1_reg))
#define  VODMA2_VODMA2_TaBSbS_LINE_BLK1_y_line_step_shift                        (4)
#define  VODMA2_VODMA2_TaBSbS_LINE_BLK1_y_line_step_mask                         (0xFFFFFFF0)
#define  VODMA2_VODMA2_TaBSbS_LINE_BLK1_y_line_step(data)                        (0xFFFFFFF0&((data)<<4))
#define  VODMA2_VODMA2_TaBSbS_LINE_BLK1_get_y_line_step(data)                    ((0xFFFFFFF0&(data))>>4)

#define  VODMA2_VODMA2_TaBSbS_LINE_BLK2                                         0x18005854
#define  VODMA2_VODMA2_TaBSbS_LINE_BLK2_reg_addr                                 "0xB8005854"
#define  VODMA2_VODMA2_TaBSbS_LINE_BLK2_reg                                      0xB8005854
#define  VODMA2_VODMA2_TaBSbS_LINE_BLK2_inst_addr                                "0x0016"
#define  set_VODMA2_VODMA2_TaBSbS_LINE_BLK2_reg(data)                            (*((volatile unsigned int*)VODMA2_VODMA2_TaBSbS_LINE_BLK2_reg)=data)
#define  get_VODMA2_VODMA2_TaBSbS_LINE_BLK2_reg                                  (*((volatile unsigned int*)VODMA2_VODMA2_TaBSbS_LINE_BLK2_reg))
#define  VODMA2_VODMA2_TaBSbS_LINE_BLK2_c_line_step_shift                        (4)
#define  VODMA2_VODMA2_TaBSbS_LINE_BLK2_c_line_step_mask                         (0xFFFFFFF0)
#define  VODMA2_VODMA2_TaBSbS_LINE_BLK2_c_line_step(data)                        (0xFFFFFFF0&((data)<<4))
#define  VODMA2_VODMA2_TaBSbS_LINE_BLK2_get_c_line_step(data)                    ((0xFFFFFFF0&(data))>>4)

#define  VODMA2_VODMA2_TaBSbS_BLK1                                              0x18005858
#define  VODMA2_VODMA2_TaBSbS_BLK1_reg_addr                                      "0xB8005858"
#define  VODMA2_VODMA2_TaBSbS_BLK1_reg                                           0xB8005858
#define  VODMA2_VODMA2_TaBSbS_BLK1_inst_addr                                     "0x0017"
#define  set_VODMA2_VODMA2_TaBSbS_BLK1_reg(data)                                 (*((volatile unsigned int*)VODMA2_VODMA2_TaBSbS_BLK1_reg)=data)
#define  get_VODMA2_VODMA2_TaBSbS_BLK1_reg                                       (*((volatile unsigned int*)VODMA2_VODMA2_TaBSbS_BLK1_reg))
#define  VODMA2_VODMA2_TaBSbS_BLK1_y_h_offset_shift                              (16)
#define  VODMA2_VODMA2_TaBSbS_BLK1_y_v_offset_shift                              (0)
#define  VODMA2_VODMA2_TaBSbS_BLK1_y_h_offset_mask                               (0x1FFF0000)
#define  VODMA2_VODMA2_TaBSbS_BLK1_y_v_offset_mask                               (0x00000FFF)
#define  VODMA2_VODMA2_TaBSbS_BLK1_y_h_offset(data)                              (0x1FFF0000&((data)<<16))
#define  VODMA2_VODMA2_TaBSbS_BLK1_y_v_offset(data)                              (0x00000FFF&(data))
#define  VODMA2_VODMA2_TaBSbS_BLK1_get_y_h_offset(data)                          ((0x1FFF0000&(data))>>16)
#define  VODMA2_VODMA2_TaBSbS_BLK1_get_y_v_offset(data)                          (0x00000FFF&(data))

#define  VODMA2_VODMA2_TaBSbS_BLK2                                              0x1800585C
#define  VODMA2_VODMA2_TaBSbS_BLK2_reg_addr                                      "0xB800585C"
#define  VODMA2_VODMA2_TaBSbS_BLK2_reg                                           0xB800585C
#define  VODMA2_VODMA2_TaBSbS_BLK2_inst_addr                                     "0x0018"
#define  set_VODMA2_VODMA2_TaBSbS_BLK2_reg(data)                                 (*((volatile unsigned int*)VODMA2_VODMA2_TaBSbS_BLK2_reg)=data)
#define  get_VODMA2_VODMA2_TaBSbS_BLK2_reg                                       (*((volatile unsigned int*)VODMA2_VODMA2_TaBSbS_BLK2_reg))
#define  VODMA2_VODMA2_TaBSbS_BLK2_c_h_offset_shift                              (16)
#define  VODMA2_VODMA2_TaBSbS_BLK2_c_v_offset_shift                              (0)
#define  VODMA2_VODMA2_TaBSbS_BLK2_c_h_offset_mask                               (0x1FFF0000)
#define  VODMA2_VODMA2_TaBSbS_BLK2_c_v_offset_mask                               (0x00000FFF)
#define  VODMA2_VODMA2_TaBSbS_BLK2_c_h_offset(data)                              (0x1FFF0000&((data)<<16))
#define  VODMA2_VODMA2_TaBSbS_BLK2_c_v_offset(data)                              (0x00000FFF&(data))
#define  VODMA2_VODMA2_TaBSbS_BLK2_get_c_h_offset(data)                          ((0x1FFF0000&(data))>>16)
#define  VODMA2_VODMA2_TaBSbS_BLK2_get_c_v_offset(data)                          (0x00000FFF&(data))

#define  VODMA2_VODMA2_Status1                                                  0x18005860
#define  VODMA2_VODMA2_Status1_reg_addr                                          "0xB8005860"
#define  VODMA2_VODMA2_Status1_reg                                               0xB8005860
#define  VODMA2_VODMA2_Status1_inst_addr                                         "0x0019"
#define  set_VODMA2_VODMA2_Status1_reg(data)                                     (*((volatile unsigned int*)VODMA2_VODMA2_Status1_reg)=data)
#define  get_VODMA2_VODMA2_Status1_reg                                           (*((volatile unsigned int*)VODMA2_VODMA2_Status1_reg))
#define  VODMA2_VODMA2_Status1_cmd_trans_sel_y_shift                             (11)
#define  VODMA2_VODMA2_Status1_undone_req_cnt_y_shift                            (8)
#define  VODMA2_VODMA2_Status1_cmd_trans_sel_c_shift                             (7)
#define  VODMA2_VODMA2_Status1_undone_req_cnt_c_shift                            (4)
#define  VODMA2_VODMA2_Status1_vodma_actv_shift                                  (3)
#define  VODMA2_VODMA2_Status1_cur_block_sel_shift                               (0)
#define  VODMA2_VODMA2_Status1_cmd_trans_sel_y_mask                              (0x00000800)
#define  VODMA2_VODMA2_Status1_undone_req_cnt_y_mask                             (0x00000700)
#define  VODMA2_VODMA2_Status1_cmd_trans_sel_c_mask                              (0x00000080)
#define  VODMA2_VODMA2_Status1_undone_req_cnt_c_mask                             (0x00000070)
#define  VODMA2_VODMA2_Status1_vodma_actv_mask                                   (0x00000008)
#define  VODMA2_VODMA2_Status1_cur_block_sel_mask                                (0x00000007)
#define  VODMA2_VODMA2_Status1_cmd_trans_sel_y(data)                             (0x00000800&((data)<<11))
#define  VODMA2_VODMA2_Status1_undone_req_cnt_y(data)                            (0x00000700&((data)<<8))
#define  VODMA2_VODMA2_Status1_cmd_trans_sel_c(data)                             (0x00000080&((data)<<7))
#define  VODMA2_VODMA2_Status1_undone_req_cnt_c(data)                            (0x00000070&((data)<<4))
#define  VODMA2_VODMA2_Status1_vodma_actv(data)                                  (0x00000008&((data)<<3))
#define  VODMA2_VODMA2_Status1_cur_block_sel(data)                               (0x00000007&(data))
#define  VODMA2_VODMA2_Status1_get_cmd_trans_sel_y(data)                         ((0x00000800&(data))>>11)
#define  VODMA2_VODMA2_Status1_get_undone_req_cnt_y(data)                        ((0x00000700&(data))>>8)
#define  VODMA2_VODMA2_Status1_get_cmd_trans_sel_c(data)                         ((0x00000080&(data))>>7)
#define  VODMA2_VODMA2_Status1_get_undone_req_cnt_c(data)                        ((0x00000070&(data))>>4)
#define  VODMA2_VODMA2_Status1_get_vodma_actv(data)                              ((0x00000008&(data))>>3)
#define  VODMA2_VODMA2_Status1_get_cur_block_sel(data)                           (0x00000007&(data))

#define  VODMA2_VODMA2_Status2                                                  0x18005864
#define  VODMA2_VODMA2_Status2_reg_addr                                          "0xB8005864"
#define  VODMA2_VODMA2_Status2_reg                                               0xB8005864
#define  VODMA2_VODMA2_Status2_inst_addr                                         "0x001A"
#define  set_VODMA2_VODMA2_Status2_reg(data)                                     (*((volatile unsigned int*)VODMA2_VODMA2_Status2_reg)=data)
#define  get_VODMA2_VODMA2_Status2_reg                                           (*((volatile unsigned int*)VODMA2_VODMA2_Status2_reg))
#define  VODMA2_VODMA2_Status2_cur_st_adr_shift                                  (4)
#define  VODMA2_VODMA2_Status2_debug_set_select_shift                            (2)
#define  VODMA2_VODMA2_Status2_debug_adr_step_select_shift                       (1)
#define  VODMA2_VODMA2_Status2_debug_y_c_select_shift                            (0)
#define  VODMA2_VODMA2_Status2_cur_st_adr_mask                                   (0xFFFFFFF0)
#define  VODMA2_VODMA2_Status2_debug_set_select_mask                             (0x00000004)
#define  VODMA2_VODMA2_Status2_debug_adr_step_select_mask                        (0x00000002)
#define  VODMA2_VODMA2_Status2_debug_y_c_select_mask                             (0x00000001)
#define  VODMA2_VODMA2_Status2_cur_st_adr(data)                                  (0xFFFFFFF0&((data)<<4))
#define  VODMA2_VODMA2_Status2_debug_set_select(data)                            (0x00000004&((data)<<2))
#define  VODMA2_VODMA2_Status2_debug_adr_step_select(data)                       (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_Status2_debug_y_c_select(data)                            (0x00000001&(data))
#define  VODMA2_VODMA2_Status2_get_cur_st_adr(data)                              ((0xFFFFFFF0&(data))>>4)
#define  VODMA2_VODMA2_Status2_get_debug_set_select(data)                        ((0x00000004&(data))>>2)
#define  VODMA2_VODMA2_Status2_get_debug_adr_step_select(data)                   ((0x00000002&(data))>>1)
#define  VODMA2_VODMA2_Status2_get_debug_y_c_select(data)                        (0x00000001&(data))

#define  VODMA2_VODMA2_SMOOTH_TOGGLE                                            0x18005868
#define  VODMA2_VODMA2_SMOOTH_TOGGLE_reg_addr                                    "0xB8005868"
#define  VODMA2_VODMA2_SMOOTH_TOGGLE_reg                                         0xB8005868
#define  VODMA2_VODMA2_SMOOTH_TOGGLE_inst_addr                                   "0x001B"
#define  set_VODMA2_VODMA2_SMOOTH_TOGGLE_reg(data)                               (*((volatile unsigned int*)VODMA2_VODMA2_SMOOTH_TOGGLE_reg)=data)
#define  get_VODMA2_VODMA2_SMOOTH_TOGGLE_reg                                     (*((volatile unsigned int*)VODMA2_VODMA2_SMOOTH_TOGGLE_reg))
#define  VODMA2_VODMA2_SMOOTH_TOGGLE_gate_period_shift                           (29)
#define  VODMA2_VODMA2_SMOOTH_TOGGLE_smooth_en_shift                             (28)
#define  VODMA2_VODMA2_SMOOTH_TOGGLE_vcnt_pre_num_shift                          (0)
#define  VODMA2_VODMA2_SMOOTH_TOGGLE_gate_period_mask                            (0xE0000000)
#define  VODMA2_VODMA2_SMOOTH_TOGGLE_smooth_en_mask                              (0x10000000)
#define  VODMA2_VODMA2_SMOOTH_TOGGLE_vcnt_pre_num_mask                           (0x0FFFFFFF)
#define  VODMA2_VODMA2_SMOOTH_TOGGLE_gate_period(data)                           (0xE0000000&((data)<<29))
#define  VODMA2_VODMA2_SMOOTH_TOGGLE_smooth_en(data)                             (0x10000000&((data)<<28))
#define  VODMA2_VODMA2_SMOOTH_TOGGLE_vcnt_pre_num(data)                          (0x0FFFFFFF&(data))
#define  VODMA2_VODMA2_SMOOTH_TOGGLE_get_gate_period(data)                       ((0xE0000000&(data))>>29)
#define  VODMA2_VODMA2_SMOOTH_TOGGLE_get_smooth_en(data)                         ((0x10000000&(data))>>28)
#define  VODMA2_VODMA2_SMOOTH_TOGGLE_get_vcnt_pre_num(data)                      (0x0FFFFFFF&(data))

#define  VODMA2_VODMA2_V1CHROMA_FMT                                             0x1800586C
#define  VODMA2_VODMA2_V1CHROMA_FMT_reg_addr                                     "0xB800586C"
#define  VODMA2_VODMA2_V1CHROMA_FMT_reg                                          0xB800586C
#define  VODMA2_VODMA2_V1CHROMA_FMT_inst_addr                                    "0x001C"
#define  set_VODMA2_VODMA2_V1CHROMA_FMT_reg(data)                                (*((volatile unsigned int*)VODMA2_VODMA2_V1CHROMA_FMT_reg)=data)
#define  get_VODMA2_VODMA2_V1CHROMA_FMT_reg                                      (*((volatile unsigned int*)VODMA2_VODMA2_V1CHROMA_FMT_reg))
#define  VODMA2_VODMA2_V1CHROMA_FMT_g_position_shift                             (8)
#define  VODMA2_VODMA2_V1CHROMA_FMT_seq_color_swap_shift                         (5)
#define  VODMA2_VODMA2_V1CHROMA_FMT_alpha_position_shift                         (4)
#define  VODMA2_VODMA2_V1CHROMA_FMT_encfmt_shift                                 (0)
#define  VODMA2_VODMA2_V1CHROMA_FMT_g_position_mask                              (0x00000300)
#define  VODMA2_VODMA2_V1CHROMA_FMT_seq_color_swap_mask                          (0x000000E0)
#define  VODMA2_VODMA2_V1CHROMA_FMT_alpha_position_mask                          (0x00000010)
#define  VODMA2_VODMA2_V1CHROMA_FMT_encfmt_mask                                  (0x0000000F)
#define  VODMA2_VODMA2_V1CHROMA_FMT_g_position(data)                             (0x00000300&((data)<<8))
#define  VODMA2_VODMA2_V1CHROMA_FMT_seq_color_swap(data)                         (0x000000E0&((data)<<5))
#define  VODMA2_VODMA2_V1CHROMA_FMT_alpha_position(data)                         (0x00000010&((data)<<4))
#define  VODMA2_VODMA2_V1CHROMA_FMT_encfmt(data)                                 (0x0000000F&(data))
#define  VODMA2_VODMA2_V1CHROMA_FMT_get_g_position(data)                         ((0x00000300&(data))>>8)
#define  VODMA2_VODMA2_V1CHROMA_FMT_get_seq_color_swap(data)                     ((0x000000E0&(data))>>5)
#define  VODMA2_VODMA2_V1CHROMA_FMT_get_alpha_position(data)                     ((0x00000010&(data))>>4)
#define  VODMA2_VODMA2_V1CHROMA_FMT_get_encfmt(data)                             (0x0000000F&(data))

#define  VODMA2_VODMA2_V1_CU                                                    0x18005870
#define  VODMA2_VODMA2_V1_CU_reg_addr                                            "0xB8005870"
#define  VODMA2_VODMA2_V1_CU_reg                                                 0xB8005870
#define  VODMA2_VODMA2_V1_CU_inst_addr                                           "0x001D"
#define  set_VODMA2_VODMA2_V1_CU_reg(data)                                       (*((volatile unsigned int*)VODMA2_VODMA2_V1_CU_reg)=data)
#define  get_VODMA2_VODMA2_V1_CU_reg                                             (*((volatile unsigned int*)VODMA2_VODMA2_V1_CU_reg))
#define  VODMA2_VODMA2_V1_CU_mode_shift                                          (0)
#define  VODMA2_VODMA2_V1_CU_mode_mask                                           (0x00000007)
#define  VODMA2_VODMA2_V1_CU_mode(data)                                          (0x00000007&(data))
#define  VODMA2_VODMA2_V1_CU_get_mode(data)                                      (0x00000007&(data))

#define  VODMA2_VODMA2_V1422_TO_444                                             0x18005874
#define  VODMA2_VODMA2_V1422_TO_444_reg_addr                                     "0xB8005874"
#define  VODMA2_VODMA2_V1422_TO_444_reg                                          0xB8005874
#define  VODMA2_VODMA2_V1422_TO_444_inst_addr                                    "0x001E"
#define  set_VODMA2_VODMA2_V1422_TO_444_reg(data)                                (*((volatile unsigned int*)VODMA2_VODMA2_V1422_TO_444_reg)=data)
#define  get_VODMA2_VODMA2_V1422_TO_444_reg                                      (*((volatile unsigned int*)VODMA2_VODMA2_V1422_TO_444_reg))
#define  VODMA2_VODMA2_V1422_TO_444_fir422_sel_shift                             (0)
#define  VODMA2_VODMA2_V1422_TO_444_fir422_sel_mask                              (0x00000003)
#define  VODMA2_VODMA2_V1422_TO_444_fir422_sel(data)                             (0x00000003&(data))
#define  VODMA2_VODMA2_V1422_TO_444_get_fir422_sel(data)                         (0x00000003&(data))

#define  VODMA2_vodma2_f16_offset                                               0x18005954
#define  VODMA2_vodma2_f16_offset_reg_addr                                       "0xB8005954"
#define  VODMA2_vodma2_f16_offset_reg                                            0xB8005954
#define  VODMA2_vodma2_f16_offset_inst_addr                                      "0x001F"
#define  set_VODMA2_vodma2_f16_offset_reg(data)                                  (*((volatile unsigned int*)VODMA2_vodma2_f16_offset_reg)=data)
#define  get_VODMA2_vodma2_f16_offset_reg                                        (*((volatile unsigned int*)VODMA2_vodma2_f16_offset_reg))
#define  VODMA2_vodma2_f16_offset_reg_exp_offset_shift                           (24)
#define  VODMA2_vodma2_f16_offset_reg_integer_offset_shift                       (0)
#define  VODMA2_vodma2_f16_offset_reg_exp_offset_mask                            (0x3F000000)
#define  VODMA2_vodma2_f16_offset_reg_integer_offset_mask                        (0x0001FFFF)
#define  VODMA2_vodma2_f16_offset_reg_exp_offset(data)                           (0x3F000000&((data)<<24))
#define  VODMA2_vodma2_f16_offset_reg_integer_offset(data)                       (0x0001FFFF&(data))
#define  VODMA2_vodma2_f16_offset_get_reg_exp_offset(data)                       ((0x3F000000&(data))>>24)
#define  VODMA2_vodma2_f16_offset_get_reg_integer_offset(data)                   (0x0001FFFF&(data))

#define  VODMA2_vodma2_f16_integer_clip                                         0x18005958
#define  VODMA2_vodma2_f16_integer_clip_reg_addr                                 "0xB8005958"
#define  VODMA2_vodma2_f16_integer_clip_reg                                      0xB8005958
#define  VODMA2_vodma2_f16_integer_clip_inst_addr                                "0x0020"
#define  set_VODMA2_vodma2_f16_integer_clip_reg(data)                            (*((volatile unsigned int*)VODMA2_vodma2_f16_integer_clip_reg)=data)
#define  get_VODMA2_vodma2_f16_integer_clip_reg                                  (*((volatile unsigned int*)VODMA2_vodma2_f16_integer_clip_reg))
#define  VODMA2_vodma2_f16_integer_clip_reg_integer_clip_max_shift               (16)
#define  VODMA2_vodma2_f16_integer_clip_reg_integer_clip_min_shift               (0)
#define  VODMA2_vodma2_f16_integer_clip_reg_integer_clip_max_mask                (0xFFFF0000)
#define  VODMA2_vodma2_f16_integer_clip_reg_integer_clip_min_mask                (0x0000FFFF)
#define  VODMA2_vodma2_f16_integer_clip_reg_integer_clip_max(data)               (0xFFFF0000&((data)<<16))
#define  VODMA2_vodma2_f16_integer_clip_reg_integer_clip_min(data)               (0x0000FFFF&(data))
#define  VODMA2_vodma2_f16_integer_clip_get_reg_integer_clip_max(data)           ((0xFFFF0000&(data))>>16)
#define  VODMA2_vodma2_f16_integer_clip_get_reg_integer_clip_min(data)           (0x0000FFFF&(data))

#define  VODMA2_vodma2_f16_measure                                              0x1800595C
#define  VODMA2_vodma2_f16_measure_reg_addr                                      "0xB800595C"
#define  VODMA2_vodma2_f16_measure_reg                                           0xB800595C
#define  VODMA2_vodma2_f16_measure_inst_addr                                     "0x0021"
#define  set_VODMA2_vodma2_f16_measure_reg(data)                                 (*((volatile unsigned int*)VODMA2_vodma2_f16_measure_reg)=data)
#define  get_VODMA2_vodma2_f16_measure_reg                                       (*((volatile unsigned int*)VODMA2_vodma2_f16_measure_reg))
#define  VODMA2_vodma2_f16_measure_measure_mode_shift                            (29)
#define  VODMA2_vodma2_f16_measure_measure_y_pos_shift                           (16)
#define  VODMA2_vodma2_f16_measure_measure_x_pos_shift                           (0)
#define  VODMA2_vodma2_f16_measure_measure_mode_mask                             (0xE0000000)
#define  VODMA2_vodma2_f16_measure_measure_y_pos_mask                            (0x1FFF0000)
#define  VODMA2_vodma2_f16_measure_measure_x_pos_mask                            (0x00003FFF)
#define  VODMA2_vodma2_f16_measure_measure_mode(data)                            (0xE0000000&((data)<<29))
#define  VODMA2_vodma2_f16_measure_measure_y_pos(data)                           (0x1FFF0000&((data)<<16))
#define  VODMA2_vodma2_f16_measure_measure_x_pos(data)                           (0x00003FFF&(data))
#define  VODMA2_vodma2_f16_measure_get_measure_mode(data)                        ((0xE0000000&(data))>>29)
#define  VODMA2_vodma2_f16_measure_get_measure_y_pos(data)                       ((0x1FFF0000&(data))>>16)
#define  VODMA2_vodma2_f16_measure_get_measure_x_pos(data)                       (0x00003FFF&(data))

#define  VODMA2_vodma2_f16_positive                                             0x18005960
#define  VODMA2_vodma2_f16_positive_reg_addr                                     "0xB8005960"
#define  VODMA2_vodma2_f16_positive_reg                                          0xB8005960
#define  VODMA2_vodma2_f16_positive_inst_addr                                    "0x0022"
#define  set_VODMA2_vodma2_f16_positive_reg(data)                                (*((volatile unsigned int*)VODMA2_vodma2_f16_positive_reg)=data)
#define  get_VODMA2_vodma2_f16_positive_reg                                      (*((volatile unsigned int*)VODMA2_vodma2_f16_positive_reg))
#define  VODMA2_vodma2_f16_positive_f16_pos_max_shift                            (16)
#define  VODMA2_vodma2_f16_positive_f16_pos_min_shift                            (0)
#define  VODMA2_vodma2_f16_positive_f16_pos_max_mask                             (0xFFFF0000)
#define  VODMA2_vodma2_f16_positive_f16_pos_min_mask                             (0x0000FFFF)
#define  VODMA2_vodma2_f16_positive_f16_pos_max(data)                            (0xFFFF0000&((data)<<16))
#define  VODMA2_vodma2_f16_positive_f16_pos_min(data)                            (0x0000FFFF&(data))
#define  VODMA2_vodma2_f16_positive_get_f16_pos_max(data)                        ((0xFFFF0000&(data))>>16)
#define  VODMA2_vodma2_f16_positive_get_f16_pos_min(data)                        (0x0000FFFF&(data))

#define  VODMA2_vodma2_f16_negative                                             0x18005964
#define  VODMA2_vodma2_f16_negative_reg_addr                                     "0xB8005964"
#define  VODMA2_vodma2_f16_negative_reg                                          0xB8005964
#define  VODMA2_vodma2_f16_negative_inst_addr                                    "0x0023"
#define  set_VODMA2_vodma2_f16_negative_reg(data)                                (*((volatile unsigned int*)VODMA2_vodma2_f16_negative_reg)=data)
#define  get_VODMA2_vodma2_f16_negative_reg                                      (*((volatile unsigned int*)VODMA2_vodma2_f16_negative_reg))
#define  VODMA2_vodma2_f16_negative_f16_neg_max_shift                            (16)
#define  VODMA2_vodma2_f16_negative_f16_neg_min_shift                            (0)
#define  VODMA2_vodma2_f16_negative_f16_neg_max_mask                             (0xFFFF0000)
#define  VODMA2_vodma2_f16_negative_f16_neg_min_mask                             (0x0000FFFF)
#define  VODMA2_vodma2_f16_negative_f16_neg_max(data)                            (0xFFFF0000&((data)<<16))
#define  VODMA2_vodma2_f16_negative_f16_neg_min(data)                            (0x0000FFFF&(data))
#define  VODMA2_vodma2_f16_negative_get_f16_neg_max(data)                        ((0xFFFF0000&(data))>>16)
#define  VODMA2_vodma2_f16_negative_get_f16_neg_min(data)                        (0x0000FFFF&(data))

#define  VODMA2_VODMA2_V1SGEN                                                   0x18005878
#define  VODMA2_VODMA2_V1SGEN_reg_addr                                           "0xB8005878"
#define  VODMA2_VODMA2_V1SGEN_reg                                                0xB8005878
#define  VODMA2_VODMA2_V1SGEN_inst_addr                                          "0x0024"
#define  set_VODMA2_VODMA2_V1SGEN_reg(data)                                      (*((volatile unsigned int*)VODMA2_VODMA2_V1SGEN_reg)=data)
#define  get_VODMA2_VODMA2_V1SGEN_reg                                            (*((volatile unsigned int*)VODMA2_VODMA2_V1SGEN_reg))
#define  VODMA2_VODMA2_V1SGEN_vthr_rst1_shift                                    (30)
#define  VODMA2_VODMA2_V1SGEN_v_thr_shift                                        (16)
#define  VODMA2_VODMA2_V1SGEN_h_thr_shift                                        (0)
#define  VODMA2_VODMA2_V1SGEN_vthr_rst1_mask                                     (0x40000000)
#define  VODMA2_VODMA2_V1SGEN_v_thr_mask                                         (0x0FFF0000)
#define  VODMA2_VODMA2_V1SGEN_h_thr_mask                                         (0x00001FFF)
#define  VODMA2_VODMA2_V1SGEN_vthr_rst1(data)                                    (0x40000000&((data)<<30))
#define  VODMA2_VODMA2_V1SGEN_v_thr(data)                                        (0x0FFF0000&((data)<<16))
#define  VODMA2_VODMA2_V1SGEN_h_thr(data)                                        (0x00001FFF&(data))
#define  VODMA2_VODMA2_V1SGEN_get_vthr_rst1(data)                                ((0x40000000&(data))>>30)
#define  VODMA2_VODMA2_V1SGEN_get_v_thr(data)                                    ((0x0FFF0000&(data))>>16)
#define  VODMA2_VODMA2_V1SGEN_get_h_thr(data)                                    (0x00001FFF&(data))

#define  VODMA2_VODMA2_V1INT                                                    0x1800587C
#define  VODMA2_VODMA2_V1INT_reg_addr                                            "0xB800587C"
#define  VODMA2_VODMA2_V1INT_reg                                                 0xB800587C
#define  VODMA2_VODMA2_V1INT_inst_addr                                           "0x0025"
#define  set_VODMA2_VODMA2_V1INT_reg(data)                                       (*((volatile unsigned int*)VODMA2_VODMA2_V1INT_reg)=data)
#define  get_VODMA2_VODMA2_V1INT_reg                                             (*((volatile unsigned int*)VODMA2_VODMA2_V1INT_reg))
#define  VODMA2_VODMA2_V1INT_den_src_shift                                       (19)
#define  VODMA2_VODMA2_V1INT_vgip_en_shift                                       (18)
#define  VODMA2_VODMA2_V1INT_interlace_shift                                     (17)
#define  VODMA2_VODMA2_V1INT_top_fld_indc_shift                                  (16)
#define  VODMA2_VODMA2_V1INT_v_thr_shift                                         (0)
#define  VODMA2_VODMA2_V1INT_den_src_mask                                        (0x00080000)
#define  VODMA2_VODMA2_V1INT_vgip_en_mask                                        (0x00040000)
#define  VODMA2_VODMA2_V1INT_interlace_mask                                      (0x00020000)
#define  VODMA2_VODMA2_V1INT_top_fld_indc_mask                                   (0x00010000)
#define  VODMA2_VODMA2_V1INT_v_thr_mask                                          (0x00000FFF)
#define  VODMA2_VODMA2_V1INT_den_src(data)                                       (0x00080000&((data)<<19))
#define  VODMA2_VODMA2_V1INT_vgip_en(data)                                       (0x00040000&((data)<<18))
#define  VODMA2_VODMA2_V1INT_interlace(data)                                     (0x00020000&((data)<<17))
#define  VODMA2_VODMA2_V1INT_top_fld_indc(data)                                  (0x00010000&((data)<<16))
#define  VODMA2_VODMA2_V1INT_v_thr(data)                                         (0x00000FFF&(data))
#define  VODMA2_VODMA2_V1INT_get_den_src(data)                                   ((0x00080000&(data))>>19)
#define  VODMA2_VODMA2_V1INT_get_vgip_en(data)                                   ((0x00040000&(data))>>18)
#define  VODMA2_VODMA2_V1INT_get_interlace(data)                                 ((0x00020000&(data))>>17)
#define  VODMA2_VODMA2_V1INT_get_top_fld_indc(data)                              ((0x00010000&(data))>>16)
#define  VODMA2_VODMA2_V1INT_get_v_thr(data)                                     (0x00000FFF&(data))

#define  VODMA2_VODMA2_V1VGIP_IVS1                                              0x18005880
#define  VODMA2_VODMA2_V1VGIP_IVS1_reg_addr                                      "0xB8005880"
#define  VODMA2_VODMA2_V1VGIP_IVS1_reg                                           0xB8005880
#define  VODMA2_VODMA2_V1VGIP_IVS1_inst_addr                                     "0x0026"
#define  set_VODMA2_VODMA2_V1VGIP_IVS1_reg(data)                                 (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_IVS1_reg)=data)
#define  get_VODMA2_VODMA2_V1VGIP_IVS1_reg                                       (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_IVS1_reg))
#define  VODMA2_VODMA2_V1VGIP_IVS1_v_end_shift                                   (16)
#define  VODMA2_VODMA2_V1VGIP_IVS1_v_st_shift                                    (0)
#define  VODMA2_VODMA2_V1VGIP_IVS1_v_end_mask                                    (0x0FFF0000)
#define  VODMA2_VODMA2_V1VGIP_IVS1_v_st_mask                                     (0x00000FFF)
#define  VODMA2_VODMA2_V1VGIP_IVS1_v_end(data)                                   (0x0FFF0000&((data)<<16))
#define  VODMA2_VODMA2_V1VGIP_IVS1_v_st(data)                                    (0x00000FFF&(data))
#define  VODMA2_VODMA2_V1VGIP_IVS1_get_v_end(data)                               ((0x0FFF0000&(data))>>16)
#define  VODMA2_VODMA2_V1VGIP_IVS1_get_v_st(data)                                (0x00000FFF&(data))

#define  VODMA2_VODMA2_V1VGIP_IVS2                                              0x18005884
#define  VODMA2_VODMA2_V1VGIP_IVS2_reg_addr                                      "0xB8005884"
#define  VODMA2_VODMA2_V1VGIP_IVS2_reg                                           0xB8005884
#define  VODMA2_VODMA2_V1VGIP_IVS2_inst_addr                                     "0x0027"
#define  set_VODMA2_VODMA2_V1VGIP_IVS2_reg(data)                                 (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_IVS2_reg)=data)
#define  get_VODMA2_VODMA2_V1VGIP_IVS2_reg                                       (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_IVS2_reg))
#define  VODMA2_VODMA2_V1VGIP_IVS2_v_end_shift                                   (16)
#define  VODMA2_VODMA2_V1VGIP_IVS2_v_st_shift                                    (0)
#define  VODMA2_VODMA2_V1VGIP_IVS2_v_end_mask                                    (0x0FFF0000)
#define  VODMA2_VODMA2_V1VGIP_IVS2_v_st_mask                                     (0x00000FFF)
#define  VODMA2_VODMA2_V1VGIP_IVS2_v_end(data)                                   (0x0FFF0000&((data)<<16))
#define  VODMA2_VODMA2_V1VGIP_IVS2_v_st(data)                                    (0x00000FFF&(data))
#define  VODMA2_VODMA2_V1VGIP_IVS2_get_v_end(data)                               ((0x0FFF0000&(data))>>16)
#define  VODMA2_VODMA2_V1VGIP_IVS2_get_v_st(data)                                (0x00000FFF&(data))

#define  VODMA2_VODMA2_V1VGIP_IHS                                               0x18005888
#define  VODMA2_VODMA2_V1VGIP_IHS_reg_addr                                       "0xB8005888"
#define  VODMA2_VODMA2_V1VGIP_IHS_reg                                            0xB8005888
#define  VODMA2_VODMA2_V1VGIP_IHS_inst_addr                                      "0x0028"
#define  set_VODMA2_VODMA2_V1VGIP_IHS_reg(data)                                  (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_IHS_reg)=data)
#define  get_VODMA2_VODMA2_V1VGIP_IHS_reg                                        (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_IHS_reg))
#define  VODMA2_VODMA2_V1VGIP_IHS_h_st_shift                                     (0)
#define  VODMA2_VODMA2_V1VGIP_IHS_h_st_mask                                      (0x00001FFF)
#define  VODMA2_VODMA2_V1VGIP_IHS_h_st(data)                                     (0x00001FFF&(data))
#define  VODMA2_VODMA2_V1VGIP_IHS_get_h_st(data)                                 (0x00001FFF&(data))

#define  VODMA2_VODMA2_V1VGIP_FD                                                0x1800588C
#define  VODMA2_VODMA2_V1VGIP_FD_reg_addr                                        "0xB800588C"
#define  VODMA2_VODMA2_V1VGIP_FD_reg                                             0xB800588C
#define  VODMA2_VODMA2_V1VGIP_FD_inst_addr                                       "0x0029"
#define  set_VODMA2_VODMA2_V1VGIP_FD_reg(data)                                   (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_FD_reg)=data)
#define  get_VODMA2_VODMA2_V1VGIP_FD_reg                                         (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_FD_reg))
#define  VODMA2_VODMA2_V1VGIP_FD_v_end_shift                                     (16)
#define  VODMA2_VODMA2_V1VGIP_FD_v_st_shift                                      (0)
#define  VODMA2_VODMA2_V1VGIP_FD_v_end_mask                                      (0x0FFF0000)
#define  VODMA2_VODMA2_V1VGIP_FD_v_st_mask                                       (0x00000FFF)
#define  VODMA2_VODMA2_V1VGIP_FD_v_end(data)                                     (0x0FFF0000&((data)<<16))
#define  VODMA2_VODMA2_V1VGIP_FD_v_st(data)                                      (0x00000FFF&(data))
#define  VODMA2_VODMA2_V1VGIP_FD_get_v_end(data)                                 ((0x0FFF0000&(data))>>16)
#define  VODMA2_VODMA2_V1VGIP_FD_get_v_st(data)                                  (0x00000FFF&(data))

#define  VODMA2_VODMA2_V1VGIP_FD2                                               0x18005890
#define  VODMA2_VODMA2_V1VGIP_FD2_reg_addr                                       "0xB8005890"
#define  VODMA2_VODMA2_V1VGIP_FD2_reg                                            0xB8005890
#define  VODMA2_VODMA2_V1VGIP_FD2_inst_addr                                      "0x002A"
#define  set_VODMA2_VODMA2_V1VGIP_FD2_reg(data)                                  (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_FD2_reg)=data)
#define  get_VODMA2_VODMA2_V1VGIP_FD2_reg                                        (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_FD2_reg))
#define  VODMA2_VODMA2_V1VGIP_FD2_v_end_shift                                    (16)
#define  VODMA2_VODMA2_V1VGIP_FD2_v_st_shift                                     (0)
#define  VODMA2_VODMA2_V1VGIP_FD2_v_end_mask                                     (0x0FFF0000)
#define  VODMA2_VODMA2_V1VGIP_FD2_v_st_mask                                      (0x00000FFF)
#define  VODMA2_VODMA2_V1VGIP_FD2_v_end(data)                                    (0x0FFF0000&((data)<<16))
#define  VODMA2_VODMA2_V1VGIP_FD2_v_st(data)                                     (0x00000FFF&(data))
#define  VODMA2_VODMA2_V1VGIP_FD2_get_v_end(data)                                ((0x0FFF0000&(data))>>16)
#define  VODMA2_VODMA2_V1VGIP_FD2_get_v_st(data)                                 (0x00000FFF&(data))

#define  VODMA2_VODMA2_V1VGIP_VACT1                                             0x18005894
#define  VODMA2_VODMA2_V1VGIP_VACT1_reg_addr                                     "0xB8005894"
#define  VODMA2_VODMA2_V1VGIP_VACT1_reg                                          0xB8005894
#define  VODMA2_VODMA2_V1VGIP_VACT1_inst_addr                                    "0x002B"
#define  set_VODMA2_VODMA2_V1VGIP_VACT1_reg(data)                                (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_VACT1_reg)=data)
#define  get_VODMA2_VODMA2_V1VGIP_VACT1_reg                                      (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_VACT1_reg))
#define  VODMA2_VODMA2_V1VGIP_VACT1_v_end_shift                                  (16)
#define  VODMA2_VODMA2_V1VGIP_VACT1_v_st_shift                                   (0)
#define  VODMA2_VODMA2_V1VGIP_VACT1_v_end_mask                                   (0x0FFF0000)
#define  VODMA2_VODMA2_V1VGIP_VACT1_v_st_mask                                    (0x00000FFF)
#define  VODMA2_VODMA2_V1VGIP_VACT1_v_end(data)                                  (0x0FFF0000&((data)<<16))
#define  VODMA2_VODMA2_V1VGIP_VACT1_v_st(data)                                   (0x00000FFF&(data))
#define  VODMA2_VODMA2_V1VGIP_VACT1_get_v_end(data)                              ((0x0FFF0000&(data))>>16)
#define  VODMA2_VODMA2_V1VGIP_VACT1_get_v_st(data)                               (0x00000FFF&(data))

#define  VODMA2_VODMA2_V1VGIP_VACT2                                             0x18005898
#define  VODMA2_VODMA2_V1VGIP_VACT2_reg_addr                                     "0xB8005898"
#define  VODMA2_VODMA2_V1VGIP_VACT2_reg                                          0xB8005898
#define  VODMA2_VODMA2_V1VGIP_VACT2_inst_addr                                    "0x002C"
#define  set_VODMA2_VODMA2_V1VGIP_VACT2_reg(data)                                (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_VACT2_reg)=data)
#define  get_VODMA2_VODMA2_V1VGIP_VACT2_reg                                      (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_VACT2_reg))
#define  VODMA2_VODMA2_V1VGIP_VACT2_v_end_shift                                  (16)
#define  VODMA2_VODMA2_V1VGIP_VACT2_v_st_shift                                   (0)
#define  VODMA2_VODMA2_V1VGIP_VACT2_v_end_mask                                   (0x0FFF0000)
#define  VODMA2_VODMA2_V1VGIP_VACT2_v_st_mask                                    (0x00000FFF)
#define  VODMA2_VODMA2_V1VGIP_VACT2_v_end(data)                                  (0x0FFF0000&((data)<<16))
#define  VODMA2_VODMA2_V1VGIP_VACT2_v_st(data)                                   (0x00000FFF&(data))
#define  VODMA2_VODMA2_V1VGIP_VACT2_get_v_end(data)                              ((0x0FFF0000&(data))>>16)
#define  VODMA2_VODMA2_V1VGIP_VACT2_get_v_st(data)                               (0x00000FFF&(data))

#define  VODMA2_VODMA2_V1VGIP_HACT                                              0x1800589C
#define  VODMA2_VODMA2_V1VGIP_HACT_reg_addr                                      "0xB800589C"
#define  VODMA2_VODMA2_V1VGIP_HACT_reg                                           0xB800589C
#define  VODMA2_VODMA2_V1VGIP_HACT_inst_addr                                     "0x002D"
#define  set_VODMA2_VODMA2_V1VGIP_HACT_reg(data)                                 (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_HACT_reg)=data)
#define  get_VODMA2_VODMA2_V1VGIP_HACT_reg                                       (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_HACT_reg))
#define  VODMA2_VODMA2_V1VGIP_HACT_h_end_shift                                   (16)
#define  VODMA2_VODMA2_V1VGIP_HACT_h_st_shift                                    (0)
#define  VODMA2_VODMA2_V1VGIP_HACT_h_end_mask                                    (0x1FFF0000)
#define  VODMA2_VODMA2_V1VGIP_HACT_h_st_mask                                     (0x00001FFF)
#define  VODMA2_VODMA2_V1VGIP_HACT_h_end(data)                                   (0x1FFF0000&((data)<<16))
#define  VODMA2_VODMA2_V1VGIP_HACT_h_st(data)                                    (0x00001FFF&(data))
#define  VODMA2_VODMA2_V1VGIP_HACT_get_h_end(data)                               ((0x1FFF0000&(data))>>16)
#define  VODMA2_VODMA2_V1VGIP_HACT_get_h_st(data)                                (0x00001FFF&(data))

#define  VODMA2_VODMA2_V1VGIP_VACT1_END                                         0x180058A0
#define  VODMA2_VODMA2_V1VGIP_VACT1_END_reg_addr                                 "0xB80058A0"
#define  VODMA2_VODMA2_V1VGIP_VACT1_END_reg                                      0xB80058A0
#define  VODMA2_VODMA2_V1VGIP_VACT1_END_inst_addr                                "0x002E"
#define  set_VODMA2_VODMA2_V1VGIP_VACT1_END_reg(data)                            (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_VACT1_END_reg)=data)
#define  get_VODMA2_VODMA2_V1VGIP_VACT1_END_reg                                  (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_VACT1_END_reg))
#define  VODMA2_VODMA2_V1VGIP_VACT1_END_v_end_shift                              (16)
#define  VODMA2_VODMA2_V1VGIP_VACT1_END_v_st_shift                               (0)
#define  VODMA2_VODMA2_V1VGIP_VACT1_END_v_end_mask                               (0x0FFF0000)
#define  VODMA2_VODMA2_V1VGIP_VACT1_END_v_st_mask                                (0x00000FFF)
#define  VODMA2_VODMA2_V1VGIP_VACT1_END_v_end(data)                              (0x0FFF0000&((data)<<16))
#define  VODMA2_VODMA2_V1VGIP_VACT1_END_v_st(data)                               (0x00000FFF&(data))
#define  VODMA2_VODMA2_V1VGIP_VACT1_END_get_v_end(data)                          ((0x0FFF0000&(data))>>16)
#define  VODMA2_VODMA2_V1VGIP_VACT1_END_get_v_st(data)                           (0x00000FFF&(data))

#define  VODMA2_VODMA2_V1VGIP_VACT2_END                                         0x180058A4
#define  VODMA2_VODMA2_V1VGIP_VACT2_END_reg_addr                                 "0xB80058A4"
#define  VODMA2_VODMA2_V1VGIP_VACT2_END_reg                                      0xB80058A4
#define  VODMA2_VODMA2_V1VGIP_VACT2_END_inst_addr                                "0x002F"
#define  set_VODMA2_VODMA2_V1VGIP_VACT2_END_reg(data)                            (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_VACT2_END_reg)=data)
#define  get_VODMA2_VODMA2_V1VGIP_VACT2_END_reg                                  (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_VACT2_END_reg))
#define  VODMA2_VODMA2_V1VGIP_VACT2_END_v_end_shift                              (16)
#define  VODMA2_VODMA2_V1VGIP_VACT2_END_v_st_shift                               (0)
#define  VODMA2_VODMA2_V1VGIP_VACT2_END_v_end_mask                               (0x0FFF0000)
#define  VODMA2_VODMA2_V1VGIP_VACT2_END_v_st_mask                                (0x00000FFF)
#define  VODMA2_VODMA2_V1VGIP_VACT2_END_v_end(data)                              (0x0FFF0000&((data)<<16))
#define  VODMA2_VODMA2_V1VGIP_VACT2_END_v_st(data)                               (0x00000FFF&(data))
#define  VODMA2_VODMA2_V1VGIP_VACT2_END_get_v_end(data)                          ((0x0FFF0000&(data))>>16)
#define  VODMA2_VODMA2_V1VGIP_VACT2_END_get_v_st(data)                           (0x00000FFF&(data))

#define  VODMA2_VODMA2_V1VGIP_VBG1                                              0x180058A8
#define  VODMA2_VODMA2_V1VGIP_VBG1_reg_addr                                      "0xB80058A8"
#define  VODMA2_VODMA2_V1VGIP_VBG1_reg                                           0xB80058A8
#define  VODMA2_VODMA2_V1VGIP_VBG1_inst_addr                                     "0x0030"
#define  set_VODMA2_VODMA2_V1VGIP_VBG1_reg(data)                                 (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_VBG1_reg)=data)
#define  get_VODMA2_VODMA2_V1VGIP_VBG1_reg                                       (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_VBG1_reg))
#define  VODMA2_VODMA2_V1VGIP_VBG1_v_end_shift                                   (16)
#define  VODMA2_VODMA2_V1VGIP_VBG1_v_st_shift                                    (0)
#define  VODMA2_VODMA2_V1VGIP_VBG1_v_end_mask                                    (0x0FFF0000)
#define  VODMA2_VODMA2_V1VGIP_VBG1_v_st_mask                                     (0x00000FFF)
#define  VODMA2_VODMA2_V1VGIP_VBG1_v_end(data)                                   (0x0FFF0000&((data)<<16))
#define  VODMA2_VODMA2_V1VGIP_VBG1_v_st(data)                                    (0x00000FFF&(data))
#define  VODMA2_VODMA2_V1VGIP_VBG1_get_v_end(data)                               ((0x0FFF0000&(data))>>16)
#define  VODMA2_VODMA2_V1VGIP_VBG1_get_v_st(data)                                (0x00000FFF&(data))

#define  VODMA2_VODMA2_V1VGIP_VBG2                                              0x180058AC
#define  VODMA2_VODMA2_V1VGIP_VBG2_reg_addr                                      "0xB80058AC"
#define  VODMA2_VODMA2_V1VGIP_VBG2_reg                                           0xB80058AC
#define  VODMA2_VODMA2_V1VGIP_VBG2_inst_addr                                     "0x0031"
#define  set_VODMA2_VODMA2_V1VGIP_VBG2_reg(data)                                 (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_VBG2_reg)=data)
#define  get_VODMA2_VODMA2_V1VGIP_VBG2_reg                                       (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_VBG2_reg))
#define  VODMA2_VODMA2_V1VGIP_VBG2_v_end_shift                                   (16)
#define  VODMA2_VODMA2_V1VGIP_VBG2_v_st_shift                                    (0)
#define  VODMA2_VODMA2_V1VGIP_VBG2_v_end_mask                                    (0x0FFF0000)
#define  VODMA2_VODMA2_V1VGIP_VBG2_v_st_mask                                     (0x00000FFF)
#define  VODMA2_VODMA2_V1VGIP_VBG2_v_end(data)                                   (0x0FFF0000&((data)<<16))
#define  VODMA2_VODMA2_V1VGIP_VBG2_v_st(data)                                    (0x00000FFF&(data))
#define  VODMA2_VODMA2_V1VGIP_VBG2_get_v_end(data)                               ((0x0FFF0000&(data))>>16)
#define  VODMA2_VODMA2_V1VGIP_VBG2_get_v_st(data)                                (0x00000FFF&(data))

#define  VODMA2_VODMA2_V1VGIP_HBG                                               0x180058B0
#define  VODMA2_VODMA2_V1VGIP_HBG_reg_addr                                       "0xB80058B0"
#define  VODMA2_VODMA2_V1VGIP_HBG_reg                                            0xB80058B0
#define  VODMA2_VODMA2_V1VGIP_HBG_inst_addr                                      "0x0032"
#define  set_VODMA2_VODMA2_V1VGIP_HBG_reg(data)                                  (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_HBG_reg)=data)
#define  get_VODMA2_VODMA2_V1VGIP_HBG_reg                                        (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_HBG_reg))
#define  VODMA2_VODMA2_V1VGIP_HBG_h_end_shift                                    (16)
#define  VODMA2_VODMA2_V1VGIP_HBG_h_st_shift                                     (0)
#define  VODMA2_VODMA2_V1VGIP_HBG_h_end_mask                                     (0x1FFF0000)
#define  VODMA2_VODMA2_V1VGIP_HBG_h_st_mask                                      (0x00001FFF)
#define  VODMA2_VODMA2_V1VGIP_HBG_h_end(data)                                    (0x1FFF0000&((data)<<16))
#define  VODMA2_VODMA2_V1VGIP_HBG_h_st(data)                                     (0x00001FFF&(data))
#define  VODMA2_VODMA2_V1VGIP_HBG_get_h_end(data)                                ((0x1FFF0000&(data))>>16)
#define  VODMA2_VODMA2_V1VGIP_HBG_get_h_st(data)                                 (0x00001FFF&(data))

#define  VODMA2_VODMA2_V1VGIP_BG_CLR                                            0x180058B4
#define  VODMA2_VODMA2_V1VGIP_BG_CLR_reg_addr                                    "0xB80058B4"
#define  VODMA2_VODMA2_V1VGIP_BG_CLR_reg                                         0xB80058B4
#define  VODMA2_VODMA2_V1VGIP_BG_CLR_inst_addr                                   "0x0033"
#define  set_VODMA2_VODMA2_V1VGIP_BG_CLR_reg(data)                               (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_BG_CLR_reg)=data)
#define  get_VODMA2_VODMA2_V1VGIP_BG_CLR_reg                                     (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_BG_CLR_reg))
#define  VODMA2_VODMA2_V1VGIP_BG_CLR_bg_v_shift                                  (20)
#define  VODMA2_VODMA2_V1VGIP_BG_CLR_bg_u_shift                                  (10)
#define  VODMA2_VODMA2_V1VGIP_BG_CLR_bg_y_shift                                  (0)
#define  VODMA2_VODMA2_V1VGIP_BG_CLR_bg_v_mask                                   (0x3FF00000)
#define  VODMA2_VODMA2_V1VGIP_BG_CLR_bg_u_mask                                   (0x000FFC00)
#define  VODMA2_VODMA2_V1VGIP_BG_CLR_bg_y_mask                                   (0x000003FF)
#define  VODMA2_VODMA2_V1VGIP_BG_CLR_bg_v(data)                                  (0x3FF00000&((data)<<20))
#define  VODMA2_VODMA2_V1VGIP_BG_CLR_bg_u(data)                                  (0x000FFC00&((data)<<10))
#define  VODMA2_VODMA2_V1VGIP_BG_CLR_bg_y(data)                                  (0x000003FF&(data))
#define  VODMA2_VODMA2_V1VGIP_BG_CLR_get_bg_v(data)                              ((0x3FF00000&(data))>>20)
#define  VODMA2_VODMA2_V1VGIP_BG_CLR_get_bg_u(data)                              ((0x000FFC00&(data))>>10)
#define  VODMA2_VODMA2_V1VGIP_BG_CLR_get_bg_y(data)                              (0x000003FF&(data))

#define  VODMA2_VODMA2_V1VGIP_MASK_CTRL                                         0x180058B8
#define  VODMA2_VODMA2_V1VGIP_MASK_CTRL_reg_addr                                 "0xB80058B8"
#define  VODMA2_VODMA2_V1VGIP_MASK_CTRL_reg                                      0xB80058B8
#define  VODMA2_VODMA2_V1VGIP_MASK_CTRL_inst_addr                                "0x0034"
#define  set_VODMA2_VODMA2_V1VGIP_MASK_CTRL_reg(data)                            (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_MASK_CTRL_reg)=data)
#define  get_VODMA2_VODMA2_V1VGIP_MASK_CTRL_reg                                  (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_MASK_CTRL_reg))
#define  VODMA2_VODMA2_V1VGIP_MASK_CTRL_random_en_shift                          (3)
#define  VODMA2_VODMA2_V1VGIP_MASK_CTRL_mask_den_en_shift                        (2)
#define  VODMA2_VODMA2_V1VGIP_MASK_CTRL_mask_data_en_shift                       (0)
#define  VODMA2_VODMA2_V1VGIP_MASK_CTRL_random_en_mask                           (0x00000008)
#define  VODMA2_VODMA2_V1VGIP_MASK_CTRL_mask_den_en_mask                         (0x00000004)
#define  VODMA2_VODMA2_V1VGIP_MASK_CTRL_mask_data_en_mask                        (0x00000003)
#define  VODMA2_VODMA2_V1VGIP_MASK_CTRL_random_en(data)                          (0x00000008&((data)<<3))
#define  VODMA2_VODMA2_V1VGIP_MASK_CTRL_mask_den_en(data)                        (0x00000004&((data)<<2))
#define  VODMA2_VODMA2_V1VGIP_MASK_CTRL_mask_data_en(data)                       (0x00000003&(data))
#define  VODMA2_VODMA2_V1VGIP_MASK_CTRL_get_random_en(data)                      ((0x00000008&(data))>>3)
#define  VODMA2_VODMA2_V1VGIP_MASK_CTRL_get_mask_den_en(data)                    ((0x00000004&(data))>>2)
#define  VODMA2_VODMA2_V1VGIP_MASK_CTRL_get_mask_data_en(data)                   (0x00000003&(data))

#define  VODMA2_VODMA2_V1VGIP_VMASK                                             0x180058BC
#define  VODMA2_VODMA2_V1VGIP_VMASK_reg_addr                                     "0xB80058BC"
#define  VODMA2_VODMA2_V1VGIP_VMASK_reg                                          0xB80058BC
#define  VODMA2_VODMA2_V1VGIP_VMASK_inst_addr                                    "0x0035"
#define  set_VODMA2_VODMA2_V1VGIP_VMASK_reg(data)                                (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_VMASK_reg)=data)
#define  get_VODMA2_VODMA2_V1VGIP_VMASK_reg                                      (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_VMASK_reg))
#define  VODMA2_VODMA2_V1VGIP_VMASK_v_end_shift                                  (16)
#define  VODMA2_VODMA2_V1VGIP_VMASK_v_st_shift                                   (0)
#define  VODMA2_VODMA2_V1VGIP_VMASK_v_end_mask                                   (0xFFFF0000)
#define  VODMA2_VODMA2_V1VGIP_VMASK_v_st_mask                                    (0x0000FFFF)
#define  VODMA2_VODMA2_V1VGIP_VMASK_v_end(data)                                  (0xFFFF0000&((data)<<16))
#define  VODMA2_VODMA2_V1VGIP_VMASK_v_st(data)                                   (0x0000FFFF&(data))
#define  VODMA2_VODMA2_V1VGIP_VMASK_get_v_end(data)                              ((0xFFFF0000&(data))>>16)
#define  VODMA2_VODMA2_V1VGIP_VMASK_get_v_st(data)                               (0x0000FFFF&(data))

#define  VODMA2_VODMA2_V1VGIP_HMASK                                             0x180058C0
#define  VODMA2_VODMA2_V1VGIP_HMASK_reg_addr                                     "0xB80058C0"
#define  VODMA2_VODMA2_V1VGIP_HMASK_reg                                          0xB80058C0
#define  VODMA2_VODMA2_V1VGIP_HMASK_inst_addr                                    "0x0036"
#define  set_VODMA2_VODMA2_V1VGIP_HMASK_reg(data)                                (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_HMASK_reg)=data)
#define  get_VODMA2_VODMA2_V1VGIP_HMASK_reg                                      (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_HMASK_reg))
#define  VODMA2_VODMA2_V1VGIP_HMASK_h_end_shift                                  (16)
#define  VODMA2_VODMA2_V1VGIP_HMASK_h_st_shift                                   (0)
#define  VODMA2_VODMA2_V1VGIP_HMASK_h_end_mask                                   (0xFFFF0000)
#define  VODMA2_VODMA2_V1VGIP_HMASK_h_st_mask                                    (0x0000FFFF)
#define  VODMA2_VODMA2_V1VGIP_HMASK_h_end(data)                                  (0xFFFF0000&((data)<<16))
#define  VODMA2_VODMA2_V1VGIP_HMASK_h_st(data)                                   (0x0000FFFF&(data))
#define  VODMA2_VODMA2_V1VGIP_HMASK_get_h_end(data)                              ((0xFFFF0000&(data))>>16)
#define  VODMA2_VODMA2_V1VGIP_HMASK_get_h_st(data)                               (0x0000FFFF&(data))

#define  VODMA2_VODMA2_ACCESSDATA_CTRL                                          0x180058C4
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_reg_addr                                  "0xB80058C4"
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_reg                                       0xB80058C4
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_inst_addr                                 "0x0037"
#define  set_VODMA2_VODMA2_ACCESSDATA_CTRL_reg(data)                             (*((volatile unsigned int*)VODMA2_VODMA2_ACCESSDATA_CTRL_reg)=data)
#define  get_VODMA2_VODMA2_ACCESSDATA_CTRL_reg                                   (*((volatile unsigned int*)VODMA2_VODMA2_ACCESSDATA_CTRL_reg))
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_write_en_shift                            (31)
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_read_en_shift                             (30)
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_starty_shift                              (16)
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_block_shape_shift                         (15)
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_cross_bar_en_shift                        (14)
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_startx_shift                              (0)
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_write_en_mask                             (0x80000000)
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_read_en_mask                              (0x40000000)
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_starty_mask                               (0x3FFF0000)
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_block_shape_mask                          (0x00008000)
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_cross_bar_en_mask                         (0x00004000)
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_startx_mask                               (0x00003FFF)
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_write_en(data)                            (0x80000000&((data)<<31))
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_read_en(data)                             (0x40000000&((data)<<30))
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_starty(data)                              (0x3FFF0000&((data)<<16))
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_block_shape(data)                         (0x00008000&((data)<<15))
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_cross_bar_en(data)                        (0x00004000&((data)<<14))
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_startx(data)                              (0x00003FFF&(data))
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_get_write_en(data)                        ((0x80000000&(data))>>31)
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_get_read_en(data)                         ((0x40000000&(data))>>30)
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_get_starty(data)                          ((0x3FFF0000&(data))>>16)
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_get_block_shape(data)                     ((0x00008000&(data))>>15)
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_get_cross_bar_en(data)                    ((0x00004000&(data))>>14)
#define  VODMA2_VODMA2_ACCESSDATA_CTRL_get_startx(data)                          (0x00003FFF&(data))

#define  VODMA2_VODMA2_ACCESSDATA_Y1                                            0x180058C8
#define  VODMA2_VODMA2_ACCESSDATA_Y1_reg_addr                                    "0xB80058C8"
#define  VODMA2_VODMA2_ACCESSDATA_Y1_reg                                         0xB80058C8
#define  VODMA2_VODMA2_ACCESSDATA_Y1_inst_addr                                   "0x0038"
#define  set_VODMA2_VODMA2_ACCESSDATA_Y1_reg(data)                               (*((volatile unsigned int*)VODMA2_VODMA2_ACCESSDATA_Y1_reg)=data)
#define  get_VODMA2_VODMA2_ACCESSDATA_Y1_reg                                     (*((volatile unsigned int*)VODMA2_VODMA2_ACCESSDATA_Y1_reg))
#define  VODMA2_VODMA2_ACCESSDATA_Y1_y10_shift                                   (16)
#define  VODMA2_VODMA2_ACCESSDATA_Y1_y00_shift                                   (0)
#define  VODMA2_VODMA2_ACCESSDATA_Y1_y10_mask                                    (0x03FF0000)
#define  VODMA2_VODMA2_ACCESSDATA_Y1_y00_mask                                    (0x000003FF)
#define  VODMA2_VODMA2_ACCESSDATA_Y1_y10(data)                                   (0x03FF0000&((data)<<16))
#define  VODMA2_VODMA2_ACCESSDATA_Y1_y00(data)                                   (0x000003FF&(data))
#define  VODMA2_VODMA2_ACCESSDATA_Y1_get_y10(data)                               ((0x03FF0000&(data))>>16)
#define  VODMA2_VODMA2_ACCESSDATA_Y1_get_y00(data)                               (0x000003FF&(data))

#define  VODMA2_VODMA2_ACCESSDATA_Y2                                            0x180058CC
#define  VODMA2_VODMA2_ACCESSDATA_Y2_reg_addr                                    "0xB80058CC"
#define  VODMA2_VODMA2_ACCESSDATA_Y2_reg                                         0xB80058CC
#define  VODMA2_VODMA2_ACCESSDATA_Y2_inst_addr                                   "0x0039"
#define  set_VODMA2_VODMA2_ACCESSDATA_Y2_reg(data)                               (*((volatile unsigned int*)VODMA2_VODMA2_ACCESSDATA_Y2_reg)=data)
#define  get_VODMA2_VODMA2_ACCESSDATA_Y2_reg                                     (*((volatile unsigned int*)VODMA2_VODMA2_ACCESSDATA_Y2_reg))
#define  VODMA2_VODMA2_ACCESSDATA_Y2_y11_shift                                   (16)
#define  VODMA2_VODMA2_ACCESSDATA_Y2_y01_shift                                   (0)
#define  VODMA2_VODMA2_ACCESSDATA_Y2_y11_mask                                    (0x03FF0000)
#define  VODMA2_VODMA2_ACCESSDATA_Y2_y01_mask                                    (0x000003FF)
#define  VODMA2_VODMA2_ACCESSDATA_Y2_y11(data)                                   (0x03FF0000&((data)<<16))
#define  VODMA2_VODMA2_ACCESSDATA_Y2_y01(data)                                   (0x000003FF&(data))
#define  VODMA2_VODMA2_ACCESSDATA_Y2_get_y11(data)                               ((0x03FF0000&(data))>>16)
#define  VODMA2_VODMA2_ACCESSDATA_Y2_get_y01(data)                               (0x000003FF&(data))

#define  VODMA2_VODMA2_ACCESSDATA_C1                                            0x180058D0
#define  VODMA2_VODMA2_ACCESSDATA_C1_reg_addr                                    "0xB80058D0"
#define  VODMA2_VODMA2_ACCESSDATA_C1_reg                                         0xB80058D0
#define  VODMA2_VODMA2_ACCESSDATA_C1_inst_addr                                   "0x003A"
#define  set_VODMA2_VODMA2_ACCESSDATA_C1_reg(data)                               (*((volatile unsigned int*)VODMA2_VODMA2_ACCESSDATA_C1_reg)=data)
#define  get_VODMA2_VODMA2_ACCESSDATA_C1_reg                                     (*((volatile unsigned int*)VODMA2_VODMA2_ACCESSDATA_C1_reg))
#define  VODMA2_VODMA2_ACCESSDATA_C1_v00_shift                                   (16)
#define  VODMA2_VODMA2_ACCESSDATA_C1_u00_shift                                   (0)
#define  VODMA2_VODMA2_ACCESSDATA_C1_v00_mask                                    (0x03FF0000)
#define  VODMA2_VODMA2_ACCESSDATA_C1_u00_mask                                    (0x000003FF)
#define  VODMA2_VODMA2_ACCESSDATA_C1_v00(data)                                   (0x03FF0000&((data)<<16))
#define  VODMA2_VODMA2_ACCESSDATA_C1_u00(data)                                   (0x000003FF&(data))
#define  VODMA2_VODMA2_ACCESSDATA_C1_get_v00(data)                               ((0x03FF0000&(data))>>16)
#define  VODMA2_VODMA2_ACCESSDATA_C1_get_u00(data)                               (0x000003FF&(data))

#define  VODMA2_VODMA2_ACCESSDATA_C2                                            0x180058D4
#define  VODMA2_VODMA2_ACCESSDATA_C2_reg_addr                                    "0xB80058D4"
#define  VODMA2_VODMA2_ACCESSDATA_C2_reg                                         0xB80058D4
#define  VODMA2_VODMA2_ACCESSDATA_C2_inst_addr                                   "0x003B"
#define  set_VODMA2_VODMA2_ACCESSDATA_C2_reg(data)                               (*((volatile unsigned int*)VODMA2_VODMA2_ACCESSDATA_C2_reg)=data)
#define  get_VODMA2_VODMA2_ACCESSDATA_C2_reg                                     (*((volatile unsigned int*)VODMA2_VODMA2_ACCESSDATA_C2_reg))
#define  VODMA2_VODMA2_ACCESSDATA_C2_v10_shift                                   (16)
#define  VODMA2_VODMA2_ACCESSDATA_C2_u10_shift                                   (0)
#define  VODMA2_VODMA2_ACCESSDATA_C2_v10_mask                                    (0x03FF0000)
#define  VODMA2_VODMA2_ACCESSDATA_C2_u10_mask                                    (0x000003FF)
#define  VODMA2_VODMA2_ACCESSDATA_C2_v10(data)                                   (0x03FF0000&((data)<<16))
#define  VODMA2_VODMA2_ACCESSDATA_C2_u10(data)                                   (0x000003FF&(data))
#define  VODMA2_VODMA2_ACCESSDATA_C2_get_v10(data)                               ((0x03FF0000&(data))>>16)
#define  VODMA2_VODMA2_ACCESSDATA_C2_get_u10(data)                               (0x000003FF&(data))

#define  VODMA2_VODMA2_ACCESSDATA_C3                                            0x180058D8
#define  VODMA2_VODMA2_ACCESSDATA_C3_reg_addr                                    "0xB80058D8"
#define  VODMA2_VODMA2_ACCESSDATA_C3_reg                                         0xB80058D8
#define  VODMA2_VODMA2_ACCESSDATA_C3_inst_addr                                   "0x003C"
#define  set_VODMA2_VODMA2_ACCESSDATA_C3_reg(data)                               (*((volatile unsigned int*)VODMA2_VODMA2_ACCESSDATA_C3_reg)=data)
#define  get_VODMA2_VODMA2_ACCESSDATA_C3_reg                                     (*((volatile unsigned int*)VODMA2_VODMA2_ACCESSDATA_C3_reg))
#define  VODMA2_VODMA2_ACCESSDATA_C3_v01_shift                                   (16)
#define  VODMA2_VODMA2_ACCESSDATA_C3_u01_shift                                   (0)
#define  VODMA2_VODMA2_ACCESSDATA_C3_v01_mask                                    (0x03FF0000)
#define  VODMA2_VODMA2_ACCESSDATA_C3_u01_mask                                    (0x000003FF)
#define  VODMA2_VODMA2_ACCESSDATA_C3_v01(data)                                   (0x03FF0000&((data)<<16))
#define  VODMA2_VODMA2_ACCESSDATA_C3_u01(data)                                   (0x000003FF&(data))
#define  VODMA2_VODMA2_ACCESSDATA_C3_get_v01(data)                               ((0x03FF0000&(data))>>16)
#define  VODMA2_VODMA2_ACCESSDATA_C3_get_u01(data)                               (0x000003FF&(data))

#define  VODMA2_VODMA2_ACCESSDATA_C4                                            0x180058DC
#define  VODMA2_VODMA2_ACCESSDATA_C4_reg_addr                                    "0xB80058DC"
#define  VODMA2_VODMA2_ACCESSDATA_C4_reg                                         0xB80058DC
#define  VODMA2_VODMA2_ACCESSDATA_C4_inst_addr                                   "0x003D"
#define  set_VODMA2_VODMA2_ACCESSDATA_C4_reg(data)                               (*((volatile unsigned int*)VODMA2_VODMA2_ACCESSDATA_C4_reg)=data)
#define  get_VODMA2_VODMA2_ACCESSDATA_C4_reg                                     (*((volatile unsigned int*)VODMA2_VODMA2_ACCESSDATA_C4_reg))
#define  VODMA2_VODMA2_ACCESSDATA_C4_v11_shift                                   (16)
#define  VODMA2_VODMA2_ACCESSDATA_C4_u11_shift                                   (0)
#define  VODMA2_VODMA2_ACCESSDATA_C4_v11_mask                                    (0x03FF0000)
#define  VODMA2_VODMA2_ACCESSDATA_C4_u11_mask                                    (0x000003FF)
#define  VODMA2_VODMA2_ACCESSDATA_C4_v11(data)                                   (0x03FF0000&((data)<<16))
#define  VODMA2_VODMA2_ACCESSDATA_C4_u11(data)                                   (0x000003FF&(data))
#define  VODMA2_VODMA2_ACCESSDATA_C4_get_v11(data)                               ((0x03FF0000&(data))>>16)
#define  VODMA2_VODMA2_ACCESSDATA_C4_get_u11(data)                               (0x000003FF&(data))

#define  VODMA2_VODMA2_ACCESSDATA_CLR                                           0x180058E0
#define  VODMA2_VODMA2_ACCESSDATA_CLR_reg_addr                                   "0xB80058E0"
#define  VODMA2_VODMA2_ACCESSDATA_CLR_reg                                        0xB80058E0
#define  VODMA2_VODMA2_ACCESSDATA_CLR_inst_addr                                  "0x003E"
#define  set_VODMA2_VODMA2_ACCESSDATA_CLR_reg(data)                              (*((volatile unsigned int*)VODMA2_VODMA2_ACCESSDATA_CLR_reg)=data)
#define  get_VODMA2_VODMA2_ACCESSDATA_CLR_reg                                    (*((volatile unsigned int*)VODMA2_VODMA2_ACCESSDATA_CLR_reg))
#define  VODMA2_VODMA2_ACCESSDATA_CLR_access_v_shift                             (20)
#define  VODMA2_VODMA2_ACCESSDATA_CLR_access_u_shift                             (10)
#define  VODMA2_VODMA2_ACCESSDATA_CLR_access_y_shift                             (0)
#define  VODMA2_VODMA2_ACCESSDATA_CLR_access_v_mask                              (0x3FF00000)
#define  VODMA2_VODMA2_ACCESSDATA_CLR_access_u_mask                              (0x000FFC00)
#define  VODMA2_VODMA2_ACCESSDATA_CLR_access_y_mask                              (0x000003FF)
#define  VODMA2_VODMA2_ACCESSDATA_CLR_access_v(data)                             (0x3FF00000&((data)<<20))
#define  VODMA2_VODMA2_ACCESSDATA_CLR_access_u(data)                             (0x000FFC00&((data)<<10))
#define  VODMA2_VODMA2_ACCESSDATA_CLR_access_y(data)                             (0x000003FF&(data))
#define  VODMA2_VODMA2_ACCESSDATA_CLR_get_access_v(data)                         ((0x3FF00000&(data))>>20)
#define  VODMA2_VODMA2_ACCESSDATA_CLR_get_access_u(data)                         ((0x000FFC00&(data))>>10)
#define  VODMA2_VODMA2_ACCESSDATA_CLR_get_access_y(data)                         (0x000003FF&(data))

#define  VODMA2_VODMA2_V1VGIP_INTPOS                                            0x180058E4
#define  VODMA2_VODMA2_V1VGIP_INTPOS_reg_addr                                    "0xB80058E4"
#define  VODMA2_VODMA2_V1VGIP_INTPOS_reg                                         0xB80058E4
#define  VODMA2_VODMA2_V1VGIP_INTPOS_inst_addr                                   "0x003F"
#define  set_VODMA2_VODMA2_V1VGIP_INTPOS_reg(data)                               (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_INTPOS_reg)=data)
#define  get_VODMA2_VODMA2_V1VGIP_INTPOS_reg                                     (*((volatile unsigned int*)VODMA2_VODMA2_V1VGIP_INTPOS_reg))
#define  VODMA2_VODMA2_V1VGIP_INTPOS_v2_shift                                    (16)
#define  VODMA2_VODMA2_V1VGIP_INTPOS_v1_shift                                    (0)
#define  VODMA2_VODMA2_V1VGIP_INTPOS_v2_mask                                     (0x0FFF0000)
#define  VODMA2_VODMA2_V1VGIP_INTPOS_v1_mask                                     (0x00000FFF)
#define  VODMA2_VODMA2_V1VGIP_INTPOS_v2(data)                                    (0x0FFF0000&((data)<<16))
#define  VODMA2_VODMA2_V1VGIP_INTPOS_v1(data)                                    (0x00000FFF&(data))
#define  VODMA2_VODMA2_V1VGIP_INTPOS_get_v2(data)                                ((0x0FFF0000&(data))>>16)
#define  VODMA2_VODMA2_V1VGIP_INTPOS_get_v1(data)                                (0x00000FFF&(data))

#define  VODMA2_VODMA2_VGIP_INTPOS                                              0x180058E8
#define  VODMA2_VODMA2_VGIP_INTPOS_reg_addr                                      "0xB80058E8"
#define  VODMA2_VODMA2_VGIP_INTPOS_reg                                           0xB80058E8
#define  VODMA2_VODMA2_VGIP_INTPOS_inst_addr                                     "0x0040"
#define  set_VODMA2_VODMA2_VGIP_INTPOS_reg(data)                                 (*((volatile unsigned int*)VODMA2_VODMA2_VGIP_INTPOS_reg)=data)
#define  get_VODMA2_VODMA2_VGIP_INTPOS_reg                                       (*((volatile unsigned int*)VODMA2_VODMA2_VGIP_INTPOS_reg))
#define  VODMA2_VODMA2_VGIP_INTPOS_vodma_irq_ie_shift                            (31)
#define  VODMA2_VODMA2_VGIP_INTPOS_src1_field_error_inte_shift                   (6)
#define  VODMA2_VODMA2_VGIP_INTPOS_src0_field_error_inte_shift                   (5)
#define  VODMA2_VODMA2_VGIP_INTPOS_vsync_hit_den_inte_shift                      (3)
#define  VODMA2_VODMA2_VGIP_INTPOS_vpos_inte1_shift                              (2)
#define  VODMA2_VODMA2_VGIP_INTPOS_finish_inte1_shift                            (1)
#define  VODMA2_VODMA2_VGIP_INTPOS_buf_underflow_inte1_shift                     (0)
#define  VODMA2_VODMA2_VGIP_INTPOS_vodma_irq_ie_mask                             (0x80000000)
#define  VODMA2_VODMA2_VGIP_INTPOS_src1_field_error_inte_mask                    (0x00000040)
#define  VODMA2_VODMA2_VGIP_INTPOS_src0_field_error_inte_mask                    (0x00000020)
#define  VODMA2_VODMA2_VGIP_INTPOS_vsync_hit_den_inte_mask                       (0x00000008)
#define  VODMA2_VODMA2_VGIP_INTPOS_vpos_inte1_mask                               (0x00000004)
#define  VODMA2_VODMA2_VGIP_INTPOS_finish_inte1_mask                             (0x00000002)
#define  VODMA2_VODMA2_VGIP_INTPOS_buf_underflow_inte1_mask                      (0x00000001)
#define  VODMA2_VODMA2_VGIP_INTPOS_vodma_irq_ie(data)                            (0x80000000&((data)<<31))
#define  VODMA2_VODMA2_VGIP_INTPOS_src1_field_error_inte(data)                   (0x00000040&((data)<<6))
#define  VODMA2_VODMA2_VGIP_INTPOS_src0_field_error_inte(data)                   (0x00000020&((data)<<5))
#define  VODMA2_VODMA2_VGIP_INTPOS_vsync_hit_den_inte(data)                      (0x00000008&((data)<<3))
#define  VODMA2_VODMA2_VGIP_INTPOS_vpos_inte1(data)                              (0x00000004&((data)<<2))
#define  VODMA2_VODMA2_VGIP_INTPOS_finish_inte1(data)                            (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_VGIP_INTPOS_buf_underflow_inte1(data)                     (0x00000001&(data))
#define  VODMA2_VODMA2_VGIP_INTPOS_get_vodma_irq_ie(data)                        ((0x80000000&(data))>>31)
#define  VODMA2_VODMA2_VGIP_INTPOS_get_src1_field_error_inte(data)               ((0x00000040&(data))>>6)
#define  VODMA2_VODMA2_VGIP_INTPOS_get_src0_field_error_inte(data)               ((0x00000020&(data))>>5)
#define  VODMA2_VODMA2_VGIP_INTPOS_get_vsync_hit_den_inte(data)                  ((0x00000008&(data))>>3)
#define  VODMA2_VODMA2_VGIP_INTPOS_get_vpos_inte1(data)                          ((0x00000004&(data))>>2)
#define  VODMA2_VODMA2_VGIP_INTPOS_get_finish_inte1(data)                        ((0x00000002&(data))>>1)
#define  VODMA2_VODMA2_VGIP_INTPOS_get_buf_underflow_inte1(data)                 (0x00000001&(data))

#define  VODMA2_VODMA2_VGIP_INTST                                               0x180058EC
#define  VODMA2_VODMA2_VGIP_INTST_reg_addr                                       "0xB80058EC"
#define  VODMA2_VODMA2_VGIP_INTST_reg                                            0xB80058EC
#define  VODMA2_VODMA2_VGIP_INTST_inst_addr                                      "0x0041"
#define  set_VODMA2_VODMA2_VGIP_INTST_reg(data)                                  (*((volatile unsigned int*)VODMA2_VODMA2_VGIP_INTST_reg)=data)
#define  get_VODMA2_VODMA2_VGIP_INTST_reg                                        (*((volatile unsigned int*)VODMA2_VODMA2_VGIP_INTST_reg))
#define  VODMA2_VODMA2_VGIP_INTST_hist_irq_record_ro_shift                       (31)
#define  VODMA2_VODMA2_VGIP_INTST_i2rnd_irq_record_ro_shift                      (30)
#define  VODMA2_VODMA2_VGIP_INTST_decomp_irq_record_ro_shift                     (29)
#define  VODMA2_VODMA2_VGIP_INTST_vodma_irq_record_ro_shift                      (28)
#define  VODMA2_VODMA2_VGIP_INTST_src1_field_error_ints_shift                    (6)
#define  VODMA2_VODMA2_VGIP_INTST_src0_field_error_ints_shift                    (5)
#define  VODMA2_VODMA2_VGIP_INTST_vsync_hit_den_ints_shift                       (3)
#define  VODMA2_VODMA2_VGIP_INTST_vpos_ints1_shift                               (2)
#define  VODMA2_VODMA2_VGIP_INTST_finish_ints1_shift                             (1)
#define  VODMA2_VODMA2_VGIP_INTST_buf_underflow_ints1_shift                      (0)
#define  VODMA2_VODMA2_VGIP_INTST_hist_irq_record_ro_mask                        (0x80000000)
#define  VODMA2_VODMA2_VGIP_INTST_i2rnd_irq_record_ro_mask                       (0x40000000)
#define  VODMA2_VODMA2_VGIP_INTST_decomp_irq_record_ro_mask                      (0x20000000)
#define  VODMA2_VODMA2_VGIP_INTST_vodma_irq_record_ro_mask                       (0x10000000)
#define  VODMA2_VODMA2_VGIP_INTST_src1_field_error_ints_mask                     (0x00000040)
#define  VODMA2_VODMA2_VGIP_INTST_src0_field_error_ints_mask                     (0x00000020)
#define  VODMA2_VODMA2_VGIP_INTST_vsync_hit_den_ints_mask                        (0x00000008)
#define  VODMA2_VODMA2_VGIP_INTST_vpos_ints1_mask                                (0x00000004)
#define  VODMA2_VODMA2_VGIP_INTST_finish_ints1_mask                              (0x00000002)
#define  VODMA2_VODMA2_VGIP_INTST_buf_underflow_ints1_mask                       (0x00000001)
#define  VODMA2_VODMA2_VGIP_INTST_hist_irq_record_ro(data)                       (0x80000000&((data)<<31))
#define  VODMA2_VODMA2_VGIP_INTST_i2rnd_irq_record_ro(data)                      (0x40000000&((data)<<30))
#define  VODMA2_VODMA2_VGIP_INTST_decomp_irq_record_ro(data)                     (0x20000000&((data)<<29))
#define  VODMA2_VODMA2_VGIP_INTST_vodma_irq_record_ro(data)                      (0x10000000&((data)<<28))
#define  VODMA2_VODMA2_VGIP_INTST_src1_field_error_ints(data)                    (0x00000040&((data)<<6))
#define  VODMA2_VODMA2_VGIP_INTST_src0_field_error_ints(data)                    (0x00000020&((data)<<5))
#define  VODMA2_VODMA2_VGIP_INTST_vsync_hit_den_ints(data)                       (0x00000008&((data)<<3))
#define  VODMA2_VODMA2_VGIP_INTST_vpos_ints1(data)                               (0x00000004&((data)<<2))
#define  VODMA2_VODMA2_VGIP_INTST_finish_ints1(data)                             (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_VGIP_INTST_buf_underflow_ints1(data)                      (0x00000001&(data))
#define  VODMA2_VODMA2_VGIP_INTST_get_hist_irq_record_ro(data)                   ((0x80000000&(data))>>31)
#define  VODMA2_VODMA2_VGIP_INTST_get_i2rnd_irq_record_ro(data)                  ((0x40000000&(data))>>30)
#define  VODMA2_VODMA2_VGIP_INTST_get_decomp_irq_record_ro(data)                 ((0x20000000&(data))>>29)
#define  VODMA2_VODMA2_VGIP_INTST_get_vodma_irq_record_ro(data)                  ((0x10000000&(data))>>28)
#define  VODMA2_VODMA2_VGIP_INTST_get_src1_field_error_ints(data)                ((0x00000040&(data))>>6)
#define  VODMA2_VODMA2_VGIP_INTST_get_src0_field_error_ints(data)                ((0x00000020&(data))>>5)
#define  VODMA2_VODMA2_VGIP_INTST_get_vsync_hit_den_ints(data)                   ((0x00000008&(data))>>3)
#define  VODMA2_VODMA2_VGIP_INTST_get_vpos_ints1(data)                           ((0x00000004&(data))>>2)
#define  VODMA2_VODMA2_VGIP_INTST_get_finish_ints1(data)                         ((0x00000002&(data))>>1)
#define  VODMA2_VODMA2_VGIP_INTST_get_buf_underflow_ints1(data)                  (0x00000001&(data))

#define  VODMA2_VODMA2_VGIP_ST                                                  0x180058F0
#define  VODMA2_VODMA2_VGIP_ST_reg_addr                                          "0xB80058F0"
#define  VODMA2_VODMA2_VGIP_ST_reg                                               0xB80058F0
#define  VODMA2_VODMA2_VGIP_ST_inst_addr                                         "0x0042"
#define  set_VODMA2_VODMA2_VGIP_ST_reg(data)                                     (*((volatile unsigned int*)VODMA2_VODMA2_VGIP_ST_reg)=data)
#define  get_VODMA2_VODMA2_VGIP_ST_reg                                           (*((volatile unsigned int*)VODMA2_VODMA2_VGIP_ST_reg))
#define  VODMA2_VODMA2_VGIP_ST_l_flag_status_shift                               (3)
#define  VODMA2_VODMA2_VGIP_ST_vsync_status_shift                                (2)
#define  VODMA2_VODMA2_VGIP_ST_v_active_shift                                    (1)
#define  VODMA2_VODMA2_VGIP_ST_field_status_shift                                (0)
#define  VODMA2_VODMA2_VGIP_ST_l_flag_status_mask                                (0x00000008)
#define  VODMA2_VODMA2_VGIP_ST_vsync_status_mask                                 (0x00000004)
#define  VODMA2_VODMA2_VGIP_ST_v_active_mask                                     (0x00000002)
#define  VODMA2_VODMA2_VGIP_ST_field_status_mask                                 (0x00000001)
#define  VODMA2_VODMA2_VGIP_ST_l_flag_status(data)                               (0x00000008&((data)<<3))
#define  VODMA2_VODMA2_VGIP_ST_vsync_status(data)                                (0x00000004&((data)<<2))
#define  VODMA2_VODMA2_VGIP_ST_v_active(data)                                    (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_VGIP_ST_field_status(data)                                (0x00000001&(data))
#define  VODMA2_VODMA2_VGIP_ST_get_l_flag_status(data)                           ((0x00000008&(data))>>3)
#define  VODMA2_VODMA2_VGIP_ST_get_vsync_status(data)                            ((0x00000004&(data))>>2)
#define  VODMA2_VODMA2_VGIP_ST_get_v_active(data)                                ((0x00000002&(data))>>1)
#define  VODMA2_VODMA2_VGIP_ST_get_field_status(data)                            (0x00000001&(data))

#define  VODMA2_VODMA2_LINE_ST                                                  0x180058F4
#define  VODMA2_VODMA2_LINE_ST_reg_addr                                          "0xB80058F4"
#define  VODMA2_VODMA2_LINE_ST_reg                                               0xB80058F4
#define  VODMA2_VODMA2_LINE_ST_inst_addr                                         "0x0043"
#define  set_VODMA2_VODMA2_LINE_ST_reg(data)                                     (*((volatile unsigned int*)VODMA2_VODMA2_LINE_ST_reg)=data)
#define  get_VODMA2_VODMA2_LINE_ST_reg                                           (*((volatile unsigned int*)VODMA2_VODMA2_LINE_ST_reg))
#define  VODMA2_VODMA2_LINE_ST_line_cnt_shift                                    (0)
#define  VODMA2_VODMA2_LINE_ST_line_cnt_mask                                     (0x00000FFF)
#define  VODMA2_VODMA2_LINE_ST_line_cnt(data)                                    (0x00000FFF&(data))
#define  VODMA2_VODMA2_LINE_ST_get_line_cnt(data)                                (0x00000FFF&(data))

#define  VODMA2_VODMA2_RTL_IMPROVE                                              0x180058F8
#define  VODMA2_VODMA2_RTL_IMPROVE_reg_addr                                      "0xB80058F8"
#define  VODMA2_VODMA2_RTL_IMPROVE_reg                                           0xB80058F8
#define  VODMA2_VODMA2_RTL_IMPROVE_inst_addr                                     "0x0044"
#define  set_VODMA2_VODMA2_RTL_IMPROVE_reg(data)                                 (*((volatile unsigned int*)VODMA2_VODMA2_RTL_IMPROVE_reg)=data)
#define  get_VODMA2_VODMA2_RTL_IMPROVE_reg                                       (*((volatile unsigned int*)VODMA2_VODMA2_RTL_IMPROVE_reg))
#define  VODMA2_VODMA2_RTL_IMPROVE_pqdc_auto_mask_en_shift                       (16)
#define  VODMA2_VODMA2_RTL_IMPROVE_afifo_almost_empty_level_shift                (4)
#define  VODMA2_VODMA2_RTL_IMPROVE_undone_req_cnt_rst_shift                      (3)
#define  VODMA2_VODMA2_RTL_IMPROVE_chroma_lb_underflow_debug_cancel_shift        (2)
#define  VODMA2_VODMA2_RTL_IMPROVE_chroma_lb_early_req_off_shift                 (1)
#define  VODMA2_VODMA2_RTL_IMPROVE_debug_pin_src_shift                           (0)
#define  VODMA2_VODMA2_RTL_IMPROVE_pqdc_auto_mask_en_mask                        (0x00010000)
#define  VODMA2_VODMA2_RTL_IMPROVE_afifo_almost_empty_level_mask                 (0x00003FF0)
#define  VODMA2_VODMA2_RTL_IMPROVE_undone_req_cnt_rst_mask                       (0x00000008)
#define  VODMA2_VODMA2_RTL_IMPROVE_chroma_lb_underflow_debug_cancel_mask         (0x00000004)
#define  VODMA2_VODMA2_RTL_IMPROVE_chroma_lb_early_req_off_mask                  (0x00000002)
#define  VODMA2_VODMA2_RTL_IMPROVE_debug_pin_src_mask                            (0x00000001)
#define  VODMA2_VODMA2_RTL_IMPROVE_pqdc_auto_mask_en(data)                       (0x00010000&((data)<<16))
#define  VODMA2_VODMA2_RTL_IMPROVE_afifo_almost_empty_level(data)                (0x00003FF0&((data)<<4))
#define  VODMA2_VODMA2_RTL_IMPROVE_undone_req_cnt_rst(data)                      (0x00000008&((data)<<3))
#define  VODMA2_VODMA2_RTL_IMPROVE_chroma_lb_underflow_debug_cancel(data)        (0x00000004&((data)<<2))
#define  VODMA2_VODMA2_RTL_IMPROVE_chroma_lb_early_req_off(data)                 (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_RTL_IMPROVE_debug_pin_src(data)                           (0x00000001&(data))
#define  VODMA2_VODMA2_RTL_IMPROVE_get_pqdc_auto_mask_en(data)                   ((0x00010000&(data))>>16)
#define  VODMA2_VODMA2_RTL_IMPROVE_get_afifo_almost_empty_level(data)            ((0x00003FF0&(data))>>4)
#define  VODMA2_VODMA2_RTL_IMPROVE_get_undone_req_cnt_rst(data)                  ((0x00000008&(data))>>3)
#define  VODMA2_VODMA2_RTL_IMPROVE_get_chroma_lb_underflow_debug_cancel(data)    ((0x00000004&(data))>>2)
#define  VODMA2_VODMA2_RTL_IMPROVE_get_chroma_lb_early_req_off(data)             ((0x00000002&(data))>>1)
#define  VODMA2_VODMA2_RTL_IMPROVE_get_debug_pin_src(data)                       (0x00000001&(data))

#define  VODMA2_VODMA2_LD_Rule_check_up_Y                                       0x180058FC
#define  VODMA2_VODMA2_LD_Rule_check_up_Y_reg_addr                               "0xB80058FC"
#define  VODMA2_VODMA2_LD_Rule_check_up_Y_reg                                    0xB80058FC
#define  VODMA2_VODMA2_LD_Rule_check_up_Y_inst_addr                              "0x0045"
#define  set_VODMA2_VODMA2_LD_Rule_check_up_Y_reg(data)                          (*((volatile unsigned int*)VODMA2_VODMA2_LD_Rule_check_up_Y_reg)=data)
#define  get_VODMA2_VODMA2_LD_Rule_check_up_Y_reg                                (*((volatile unsigned int*)VODMA2_VODMA2_LD_Rule_check_up_Y_reg))
#define  VODMA2_VODMA2_LD_Rule_check_up_Y_dma_up_limit_shift                     (4)
#define  VODMA2_VODMA2_LD_Rule_check_up_Y_dma_up_limit_mask                      (0xFFFFFFF0)
#define  VODMA2_VODMA2_LD_Rule_check_up_Y_dma_up_limit(data)                     (0xFFFFFFF0&((data)<<4))
#define  VODMA2_VODMA2_LD_Rule_check_up_Y_get_dma_up_limit(data)                 ((0xFFFFFFF0&(data))>>4)

#define  VODMA2_VODMA2_LD_Rule_check_low_Y                                      0x18005900
#define  VODMA2_VODMA2_LD_Rule_check_low_Y_reg_addr                              "0xB8005900"
#define  VODMA2_VODMA2_LD_Rule_check_low_Y_reg                                   0xB8005900
#define  VODMA2_VODMA2_LD_Rule_check_low_Y_inst_addr                             "0x0046"
#define  set_VODMA2_VODMA2_LD_Rule_check_low_Y_reg(data)                         (*((volatile unsigned int*)VODMA2_VODMA2_LD_Rule_check_low_Y_reg)=data)
#define  get_VODMA2_VODMA2_LD_Rule_check_low_Y_reg                               (*((volatile unsigned int*)VODMA2_VODMA2_LD_Rule_check_low_Y_reg))
#define  VODMA2_VODMA2_LD_Rule_check_low_Y_dma_low_limit_shift                   (4)
#define  VODMA2_VODMA2_LD_Rule_check_low_Y_dma_low_limit_mask                    (0xFFFFFFF0)
#define  VODMA2_VODMA2_LD_Rule_check_low_Y_dma_low_limit(data)                   (0xFFFFFFF0&((data)<<4))
#define  VODMA2_VODMA2_LD_Rule_check_low_Y_get_dma_low_limit(data)               ((0xFFFFFFF0&(data))>>4)

#define  VODMA2_VODMA2_LD_Ctrl_Y                                                0x18005904
#define  VODMA2_VODMA2_LD_Ctrl_Y_reg_addr                                        "0xB8005904"
#define  VODMA2_VODMA2_LD_Ctrl_Y_reg                                             0xB8005904
#define  VODMA2_VODMA2_LD_Ctrl_Y_inst_addr                                       "0x0047"
#define  set_VODMA2_VODMA2_LD_Ctrl_Y_reg(data)                                   (*((volatile unsigned int*)VODMA2_VODMA2_LD_Ctrl_Y_reg)=data)
#define  get_VODMA2_VODMA2_LD_Ctrl_Y_reg                                         (*((volatile unsigned int*)VODMA2_VODMA2_LD_Ctrl_Y_reg))
#define  VODMA2_VODMA2_LD_Ctrl_Y_force_all_rst_shift                             (1)
#define  VODMA2_VODMA2_LD_Ctrl_Y_force_all_rst_mask                              (0x00000002)
#define  VODMA2_VODMA2_LD_Ctrl_Y_force_all_rst(data)                             (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_LD_Ctrl_Y_get_force_all_rst(data)                         ((0x00000002&(data))>>1)

#define  VODMA2_VODMA2_LD_status1_Y                                             0x18005908
#define  VODMA2_VODMA2_LD_status1_Y_reg_addr                                     "0xB8005908"
#define  VODMA2_VODMA2_LD_status1_Y_reg                                          0xB8005908
#define  VODMA2_VODMA2_LD_status1_Y_inst_addr                                    "0x0048"
#define  set_VODMA2_VODMA2_LD_status1_Y_reg(data)                                (*((volatile unsigned int*)VODMA2_VODMA2_LD_status1_Y_reg)=data)
#define  get_VODMA2_VODMA2_LD_status1_Y_reg                                      (*((volatile unsigned int*)VODMA2_VODMA2_LD_status1_Y_reg))
#define  VODMA2_VODMA2_LD_status1_Y_dma_cmd_water_shift                          (28)
#define  VODMA2_VODMA2_LD_status1_Y_dma_data_water_shift                         (16)
#define  VODMA2_VODMA2_LD_status1_Y_cur_outstanding_shift                        (8)
#define  VODMA2_VODMA2_LD_status1_Y_soft_rst_before_cmd_finish_shift             (4)
#define  VODMA2_VODMA2_LD_status1_Y_soft_rst_with_data_left_shift                (3)
#define  VODMA2_VODMA2_LD_status1_Y_data_fifo_overflow_err_shift                 (2)
#define  VODMA2_VODMA2_LD_status1_Y_exceed_range_err_shift                       (1)
#define  VODMA2_VODMA2_LD_status1_Y_zero_length_err_shift                        (0)
#define  VODMA2_VODMA2_LD_status1_Y_dma_cmd_water_mask                           (0xF0000000)
#define  VODMA2_VODMA2_LD_status1_Y_dma_data_water_mask                          (0x03FF0000)
#define  VODMA2_VODMA2_LD_status1_Y_cur_outstanding_mask                         (0x00000F00)
#define  VODMA2_VODMA2_LD_status1_Y_soft_rst_before_cmd_finish_mask              (0x00000010)
#define  VODMA2_VODMA2_LD_status1_Y_soft_rst_with_data_left_mask                 (0x00000008)
#define  VODMA2_VODMA2_LD_status1_Y_data_fifo_overflow_err_mask                  (0x00000004)
#define  VODMA2_VODMA2_LD_status1_Y_exceed_range_err_mask                        (0x00000002)
#define  VODMA2_VODMA2_LD_status1_Y_zero_length_err_mask                         (0x00000001)
#define  VODMA2_VODMA2_LD_status1_Y_dma_cmd_water(data)                          (0xF0000000&((data)<<28))
#define  VODMA2_VODMA2_LD_status1_Y_dma_data_water(data)                         (0x03FF0000&((data)<<16))
#define  VODMA2_VODMA2_LD_status1_Y_cur_outstanding(data)                        (0x00000F00&((data)<<8))
#define  VODMA2_VODMA2_LD_status1_Y_soft_rst_before_cmd_finish(data)             (0x00000010&((data)<<4))
#define  VODMA2_VODMA2_LD_status1_Y_soft_rst_with_data_left(data)                (0x00000008&((data)<<3))
#define  VODMA2_VODMA2_LD_status1_Y_data_fifo_overflow_err(data)                 (0x00000004&((data)<<2))
#define  VODMA2_VODMA2_LD_status1_Y_exceed_range_err(data)                       (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_LD_status1_Y_zero_length_err(data)                        (0x00000001&(data))
#define  VODMA2_VODMA2_LD_status1_Y_get_dma_cmd_water(data)                      ((0xF0000000&(data))>>28)
#define  VODMA2_VODMA2_LD_status1_Y_get_dma_data_water(data)                     ((0x03FF0000&(data))>>16)
#define  VODMA2_VODMA2_LD_status1_Y_get_cur_outstanding(data)                    ((0x00000F00&(data))>>8)
#define  VODMA2_VODMA2_LD_status1_Y_get_soft_rst_before_cmd_finish(data)         ((0x00000010&(data))>>4)
#define  VODMA2_VODMA2_LD_status1_Y_get_soft_rst_with_data_left(data)            ((0x00000008&(data))>>3)
#define  VODMA2_VODMA2_LD_status1_Y_get_data_fifo_overflow_err(data)             ((0x00000004&(data))>>2)
#define  VODMA2_VODMA2_LD_status1_Y_get_exceed_range_err(data)                   ((0x00000002&(data))>>1)
#define  VODMA2_VODMA2_LD_status1_Y_get_zero_length_err(data)                    (0x00000001&(data))

#define  VODMA2_VODMA2_LD_status2_Y                                             0x1800590C
#define  VODMA2_VODMA2_LD_status2_Y_reg_addr                                     "0xB800590C"
#define  VODMA2_VODMA2_LD_status2_Y_reg                                          0xB800590C
#define  VODMA2_VODMA2_LD_status2_Y_inst_addr                                    "0x0049"
#define  set_VODMA2_VODMA2_LD_status2_Y_reg(data)                                (*((volatile unsigned int*)VODMA2_VODMA2_LD_status2_Y_reg)=data)
#define  get_VODMA2_VODMA2_LD_status2_Y_reg                                      (*((volatile unsigned int*)VODMA2_VODMA2_LD_status2_Y_reg))
#define  VODMA2_VODMA2_LD_status2_Y_ack_num_error_shift                          (31)
#define  VODMA2_VODMA2_LD_status2_Y_last_no_ack_error_shift                      (30)
#define  VODMA2_VODMA2_LD_status2_Y_target_ack_num_shift                         (16)
#define  VODMA2_VODMA2_LD_status2_Y_last_ack_num_shift                           (8)
#define  VODMA2_VODMA2_LD_status2_Y_selected_bl_shift                            (0)
#define  VODMA2_VODMA2_LD_status2_Y_ack_num_error_mask                           (0x80000000)
#define  VODMA2_VODMA2_LD_status2_Y_last_no_ack_error_mask                       (0x40000000)
#define  VODMA2_VODMA2_LD_status2_Y_target_ack_num_mask                          (0x007F0000)
#define  VODMA2_VODMA2_LD_status2_Y_last_ack_num_mask                            (0x00007F00)
#define  VODMA2_VODMA2_LD_status2_Y_selected_bl_mask                             (0x0000007F)
#define  VODMA2_VODMA2_LD_status2_Y_ack_num_error(data)                          (0x80000000&((data)<<31))
#define  VODMA2_VODMA2_LD_status2_Y_last_no_ack_error(data)                      (0x40000000&((data)<<30))
#define  VODMA2_VODMA2_LD_status2_Y_target_ack_num(data)                         (0x007F0000&((data)<<16))
#define  VODMA2_VODMA2_LD_status2_Y_last_ack_num(data)                           (0x00007F00&((data)<<8))
#define  VODMA2_VODMA2_LD_status2_Y_selected_bl(data)                            (0x0000007F&(data))
#define  VODMA2_VODMA2_LD_status2_Y_get_ack_num_error(data)                      ((0x80000000&(data))>>31)
#define  VODMA2_VODMA2_LD_status2_Y_get_last_no_ack_error(data)                  ((0x40000000&(data))>>30)
#define  VODMA2_VODMA2_LD_status2_Y_get_target_ack_num(data)                     ((0x007F0000&(data))>>16)
#define  VODMA2_VODMA2_LD_status2_Y_get_last_ack_num(data)                       ((0x00007F00&(data))>>8)
#define  VODMA2_VODMA2_LD_status2_Y_get_selected_bl(data)                        (0x0000007F&(data))

#define  VODMA2_VODMA2_LD_status3_Y                                             0x18005910
#define  VODMA2_VODMA2_LD_status3_Y_reg_addr                                     "0xB8005910"
#define  VODMA2_VODMA2_LD_status3_Y_reg                                          0xB8005910
#define  VODMA2_VODMA2_LD_status3_Y_inst_addr                                    "0x004A"
#define  set_VODMA2_VODMA2_LD_status3_Y_reg(data)                                (*((volatile unsigned int*)VODMA2_VODMA2_LD_status3_Y_reg)=data)
#define  get_VODMA2_VODMA2_LD_status3_Y_reg                                      (*((volatile unsigned int*)VODMA2_VODMA2_LD_status3_Y_reg))
#define  VODMA2_VODMA2_LD_status3_Y_selected_addr_shift                          (4)
#define  VODMA2_VODMA2_LD_status3_Y_addr_bl_sel_shift                            (0)
#define  VODMA2_VODMA2_LD_status3_Y_selected_addr_mask                           (0xFFFFFFF0)
#define  VODMA2_VODMA2_LD_status3_Y_addr_bl_sel_mask                             (0x00000003)
#define  VODMA2_VODMA2_LD_status3_Y_selected_addr(data)                          (0xFFFFFFF0&((data)<<4))
#define  VODMA2_VODMA2_LD_status3_Y_addr_bl_sel(data)                            (0x00000003&(data))
#define  VODMA2_VODMA2_LD_status3_Y_get_selected_addr(data)                      ((0xFFFFFFF0&(data))>>4)
#define  VODMA2_VODMA2_LD_status3_Y_get_addr_bl_sel(data)                        (0x00000003&(data))

#define  VODMA2_VODMA2_LD_Water_Monitor_Y                                       0x18005914
#define  VODMA2_VODMA2_LD_Water_Monitor_Y_reg_addr                               "0xB8005914"
#define  VODMA2_VODMA2_LD_Water_Monitor_Y_reg                                    0xB8005914
#define  VODMA2_VODMA2_LD_Water_Monitor_Y_inst_addr                              "0x004B"
#define  set_VODMA2_VODMA2_LD_Water_Monitor_Y_reg(data)                          (*((volatile unsigned int*)VODMA2_VODMA2_LD_Water_Monitor_Y_reg)=data)
#define  get_VODMA2_VODMA2_LD_Water_Monitor_Y_reg                                (*((volatile unsigned int*)VODMA2_VODMA2_LD_Water_Monitor_Y_reg))
#define  VODMA2_VODMA2_LD_Water_Monitor_Y_monitor_en_shift                       (31)
#define  VODMA2_VODMA2_LD_Water_Monitor_Y_monitor_conti_shift                    (30)
#define  VODMA2_VODMA2_LD_Water_Monitor_Y_reach_thd_shift                        (29)
#define  VODMA2_VODMA2_LD_Water_Monitor_Y_monitor_thd_shift                      (16)
#define  VODMA2_VODMA2_LD_Water_Monitor_Y_lowest_water_level_shift               (0)
#define  VODMA2_VODMA2_LD_Water_Monitor_Y_monitor_en_mask                        (0x80000000)
#define  VODMA2_VODMA2_LD_Water_Monitor_Y_monitor_conti_mask                     (0x40000000)
#define  VODMA2_VODMA2_LD_Water_Monitor_Y_reach_thd_mask                         (0x20000000)
#define  VODMA2_VODMA2_LD_Water_Monitor_Y_monitor_thd_mask                       (0x03FF0000)
#define  VODMA2_VODMA2_LD_Water_Monitor_Y_lowest_water_level_mask                (0x000003FF)
#define  VODMA2_VODMA2_LD_Water_Monitor_Y_monitor_en(data)                       (0x80000000&((data)<<31))
#define  VODMA2_VODMA2_LD_Water_Monitor_Y_monitor_conti(data)                    (0x40000000&((data)<<30))
#define  VODMA2_VODMA2_LD_Water_Monitor_Y_reach_thd(data)                        (0x20000000&((data)<<29))
#define  VODMA2_VODMA2_LD_Water_Monitor_Y_monitor_thd(data)                      (0x03FF0000&((data)<<16))
#define  VODMA2_VODMA2_LD_Water_Monitor_Y_lowest_water_level(data)               (0x000003FF&(data))
#define  VODMA2_VODMA2_LD_Water_Monitor_Y_get_monitor_en(data)                   ((0x80000000&(data))>>31)
#define  VODMA2_VODMA2_LD_Water_Monitor_Y_get_monitor_conti(data)                ((0x40000000&(data))>>30)
#define  VODMA2_VODMA2_LD_Water_Monitor_Y_get_reach_thd(data)                    ((0x20000000&(data))>>29)
#define  VODMA2_VODMA2_LD_Water_Monitor_Y_get_monitor_thd(data)                  ((0x03FF0000&(data))>>16)
#define  VODMA2_VODMA2_LD_Water_Monitor_Y_get_lowest_water_level(data)           (0x000003FF&(data))

#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_Y                                 0x18005918
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_Y_reg_addr                         "0xB8005918"
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_Y_reg                              0xB8005918
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_Y_inst_addr                        "0x004C"
#define  set_VODMA2_VODMA2_LD_addcmd_wrap_status1_Y_reg(data)                    (*((volatile unsigned int*)VODMA2_VODMA2_LD_addcmd_wrap_status1_Y_reg)=data)
#define  get_VODMA2_VODMA2_LD_addcmd_wrap_status1_Y_reg                          (*((volatile unsigned int*)VODMA2_VODMA2_LD_addcmd_wrap_status1_Y_reg))
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_Y_remain_setting_shift             (31)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_Y_remain_128_num_shift             (4)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_Y_finish_status_shift              (0)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_Y_remain_setting_mask              (0x80000000)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_Y_remain_128_num_mask              (0x07FFFFF0)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_Y_finish_status_mask               (0x00000003)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_Y_remain_setting(data)             (0x80000000&((data)<<31))
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_Y_remain_128_num(data)             (0x07FFFFF0&((data)<<4))
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_Y_finish_status(data)              (0x00000003&(data))
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_Y_get_remain_setting(data)         ((0x80000000&(data))>>31)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_Y_get_remain_128_num(data)         ((0x07FFFFF0&(data))>>4)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_Y_get_finish_status(data)          (0x00000003&(data))

#define  VODMA2_VODMA2_LD_addcmd_wrap_status2_Y                                 0x1800591C
#define  VODMA2_VODMA2_LD_addcmd_wrap_status2_Y_reg_addr                         "0xB800591C"
#define  VODMA2_VODMA2_LD_addcmd_wrap_status2_Y_reg                              0xB800591C
#define  VODMA2_VODMA2_LD_addcmd_wrap_status2_Y_inst_addr                        "0x004D"
#define  set_VODMA2_VODMA2_LD_addcmd_wrap_status2_Y_reg(data)                    (*((volatile unsigned int*)VODMA2_VODMA2_LD_addcmd_wrap_status2_Y_reg)=data)
#define  get_VODMA2_VODMA2_LD_addcmd_wrap_status2_Y_reg                          (*((volatile unsigned int*)VODMA2_VODMA2_LD_addcmd_wrap_status2_Y_reg))
#define  VODMA2_VODMA2_LD_addcmd_wrap_status2_Y_soft_rst_before_finish_shift     (31)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status2_Y_remain_line_num_shift            (16)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status2_Y_soft_rst_before_finish_mask      (0x80000000)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status2_Y_remain_line_num_mask             (0x0FFF0000)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status2_Y_soft_rst_before_finish(data)     (0x80000000&((data)<<31))
#define  VODMA2_VODMA2_LD_addcmd_wrap_status2_Y_remain_line_num(data)            (0x0FFF0000&((data)<<16))
#define  VODMA2_VODMA2_LD_addcmd_wrap_status2_Y_get_soft_rst_before_finish(data) ((0x80000000&(data))>>31)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status2_Y_get_remain_line_num(data)        ((0x0FFF0000&(data))>>16)

#define  VODMA2_VODMA2_LD_Rule_check_up_C                                       0x18005920
#define  VODMA2_VODMA2_LD_Rule_check_up_C_reg_addr                               "0xB8005920"
#define  VODMA2_VODMA2_LD_Rule_check_up_C_reg                                    0xB8005920
#define  VODMA2_VODMA2_LD_Rule_check_up_C_inst_addr                              "0x004E"
#define  set_VODMA2_VODMA2_LD_Rule_check_up_C_reg(data)                          (*((volatile unsigned int*)VODMA2_VODMA2_LD_Rule_check_up_C_reg)=data)
#define  get_VODMA2_VODMA2_LD_Rule_check_up_C_reg                                (*((volatile unsigned int*)VODMA2_VODMA2_LD_Rule_check_up_C_reg))
#define  VODMA2_VODMA2_LD_Rule_check_up_C_dma_up_limit_shift                     (4)
#define  VODMA2_VODMA2_LD_Rule_check_up_C_dma_up_limit_mask                      (0xFFFFFFF0)
#define  VODMA2_VODMA2_LD_Rule_check_up_C_dma_up_limit(data)                     (0xFFFFFFF0&((data)<<4))
#define  VODMA2_VODMA2_LD_Rule_check_up_C_get_dma_up_limit(data)                 ((0xFFFFFFF0&(data))>>4)

#define  VODMA2_VODMA2_LD_Rule_check_low_C                                      0x18005924
#define  VODMA2_VODMA2_LD_Rule_check_low_C_reg_addr                              "0xB8005924"
#define  VODMA2_VODMA2_LD_Rule_check_low_C_reg                                   0xB8005924
#define  VODMA2_VODMA2_LD_Rule_check_low_C_inst_addr                             "0x004F"
#define  set_VODMA2_VODMA2_LD_Rule_check_low_C_reg(data)                         (*((volatile unsigned int*)VODMA2_VODMA2_LD_Rule_check_low_C_reg)=data)
#define  get_VODMA2_VODMA2_LD_Rule_check_low_C_reg                               (*((volatile unsigned int*)VODMA2_VODMA2_LD_Rule_check_low_C_reg))
#define  VODMA2_VODMA2_LD_Rule_check_low_C_dma_low_limit_shift                   (4)
#define  VODMA2_VODMA2_LD_Rule_check_low_C_dma_low_limit_mask                    (0xFFFFFFF0)
#define  VODMA2_VODMA2_LD_Rule_check_low_C_dma_low_limit(data)                   (0xFFFFFFF0&((data)<<4))
#define  VODMA2_VODMA2_LD_Rule_check_low_C_get_dma_low_limit(data)               ((0xFFFFFFF0&(data))>>4)

#define  VODMA2_VODMA2_LD_Ctrl_C                                                0x18005928
#define  VODMA2_VODMA2_LD_Ctrl_C_reg_addr                                        "0xB8005928"
#define  VODMA2_VODMA2_LD_Ctrl_C_reg                                             0xB8005928
#define  VODMA2_VODMA2_LD_Ctrl_C_inst_addr                                       "0x0050"
#define  set_VODMA2_VODMA2_LD_Ctrl_C_reg(data)                                   (*((volatile unsigned int*)VODMA2_VODMA2_LD_Ctrl_C_reg)=data)
#define  get_VODMA2_VODMA2_LD_Ctrl_C_reg                                         (*((volatile unsigned int*)VODMA2_VODMA2_LD_Ctrl_C_reg))
#define  VODMA2_VODMA2_LD_Ctrl_C_force_all_rst_shift                             (1)
#define  VODMA2_VODMA2_LD_Ctrl_C_force_all_rst_mask                              (0x00000002)
#define  VODMA2_VODMA2_LD_Ctrl_C_force_all_rst(data)                             (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_LD_Ctrl_C_get_force_all_rst(data)                         ((0x00000002&(data))>>1)

#define  VODMA2_VODMA2_LD_status1_C                                             0x1800592C
#define  VODMA2_VODMA2_LD_status1_C_reg_addr                                     "0xB800592C"
#define  VODMA2_VODMA2_LD_status1_C_reg                                          0xB800592C
#define  VODMA2_VODMA2_LD_status1_C_inst_addr                                    "0x0051"
#define  set_VODMA2_VODMA2_LD_status1_C_reg(data)                                (*((volatile unsigned int*)VODMA2_VODMA2_LD_status1_C_reg)=data)
#define  get_VODMA2_VODMA2_LD_status1_C_reg                                      (*((volatile unsigned int*)VODMA2_VODMA2_LD_status1_C_reg))
#define  VODMA2_VODMA2_LD_status1_C_dma_cmd_water_shift                          (28)
#define  VODMA2_VODMA2_LD_status1_C_dma_data_water_shift                         (16)
#define  VODMA2_VODMA2_LD_status1_C_cur_outstanding_shift                        (8)
#define  VODMA2_VODMA2_LD_status1_C_soft_rst_before_cmd_finish_shift             (4)
#define  VODMA2_VODMA2_LD_status1_C_soft_rst_with_data_left_shift                (3)
#define  VODMA2_VODMA2_LD_status1_C_data_fifo_overflow_err_shift                 (2)
#define  VODMA2_VODMA2_LD_status1_C_exceed_range_err_shift                       (1)
#define  VODMA2_VODMA2_LD_status1_C_zero_length_err_shift                        (0)
#define  VODMA2_VODMA2_LD_status1_C_dma_cmd_water_mask                           (0xF0000000)
#define  VODMA2_VODMA2_LD_status1_C_dma_data_water_mask                          (0x01FF0000)
#define  VODMA2_VODMA2_LD_status1_C_cur_outstanding_mask                         (0x00000F00)
#define  VODMA2_VODMA2_LD_status1_C_soft_rst_before_cmd_finish_mask              (0x00000010)
#define  VODMA2_VODMA2_LD_status1_C_soft_rst_with_data_left_mask                 (0x00000008)
#define  VODMA2_VODMA2_LD_status1_C_data_fifo_overflow_err_mask                  (0x00000004)
#define  VODMA2_VODMA2_LD_status1_C_exceed_range_err_mask                        (0x00000002)
#define  VODMA2_VODMA2_LD_status1_C_zero_length_err_mask                         (0x00000001)
#define  VODMA2_VODMA2_LD_status1_C_dma_cmd_water(data)                          (0xF0000000&((data)<<28))
#define  VODMA2_VODMA2_LD_status1_C_dma_data_water(data)                         (0x01FF0000&((data)<<16))
#define  VODMA2_VODMA2_LD_status1_C_cur_outstanding(data)                        (0x00000F00&((data)<<8))
#define  VODMA2_VODMA2_LD_status1_C_soft_rst_before_cmd_finish(data)             (0x00000010&((data)<<4))
#define  VODMA2_VODMA2_LD_status1_C_soft_rst_with_data_left(data)                (0x00000008&((data)<<3))
#define  VODMA2_VODMA2_LD_status1_C_data_fifo_overflow_err(data)                 (0x00000004&((data)<<2))
#define  VODMA2_VODMA2_LD_status1_C_exceed_range_err(data)                       (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_LD_status1_C_zero_length_err(data)                        (0x00000001&(data))
#define  VODMA2_VODMA2_LD_status1_C_get_dma_cmd_water(data)                      ((0xF0000000&(data))>>28)
#define  VODMA2_VODMA2_LD_status1_C_get_dma_data_water(data)                     ((0x01FF0000&(data))>>16)
#define  VODMA2_VODMA2_LD_status1_C_get_cur_outstanding(data)                    ((0x00000F00&(data))>>8)
#define  VODMA2_VODMA2_LD_status1_C_get_soft_rst_before_cmd_finish(data)         ((0x00000010&(data))>>4)
#define  VODMA2_VODMA2_LD_status1_C_get_soft_rst_with_data_left(data)            ((0x00000008&(data))>>3)
#define  VODMA2_VODMA2_LD_status1_C_get_data_fifo_overflow_err(data)             ((0x00000004&(data))>>2)
#define  VODMA2_VODMA2_LD_status1_C_get_exceed_range_err(data)                   ((0x00000002&(data))>>1)
#define  VODMA2_VODMA2_LD_status1_C_get_zero_length_err(data)                    (0x00000001&(data))

#define  VODMA2_VODMA2_LD_status2_C                                             0x18005930
#define  VODMA2_VODMA2_LD_status2_C_reg_addr                                     "0xB8005930"
#define  VODMA2_VODMA2_LD_status2_C_reg                                          0xB8005930
#define  VODMA2_VODMA2_LD_status2_C_inst_addr                                    "0x0052"
#define  set_VODMA2_VODMA2_LD_status2_C_reg(data)                                (*((volatile unsigned int*)VODMA2_VODMA2_LD_status2_C_reg)=data)
#define  get_VODMA2_VODMA2_LD_status2_C_reg                                      (*((volatile unsigned int*)VODMA2_VODMA2_LD_status2_C_reg))
#define  VODMA2_VODMA2_LD_status2_C_ack_num_error_shift                          (31)
#define  VODMA2_VODMA2_LD_status2_C_last_no_ack_error_shift                      (30)
#define  VODMA2_VODMA2_LD_status2_C_target_ack_num_shift                         (16)
#define  VODMA2_VODMA2_LD_status2_C_last_ack_num_shift                           (8)
#define  VODMA2_VODMA2_LD_status2_C_selected_bl_shift                            (0)
#define  VODMA2_VODMA2_LD_status2_C_ack_num_error_mask                           (0x80000000)
#define  VODMA2_VODMA2_LD_status2_C_last_no_ack_error_mask                       (0x40000000)
#define  VODMA2_VODMA2_LD_status2_C_target_ack_num_mask                          (0x007F0000)
#define  VODMA2_VODMA2_LD_status2_C_last_ack_num_mask                            (0x00007F00)
#define  VODMA2_VODMA2_LD_status2_C_selected_bl_mask                             (0x0000007F)
#define  VODMA2_VODMA2_LD_status2_C_ack_num_error(data)                          (0x80000000&((data)<<31))
#define  VODMA2_VODMA2_LD_status2_C_last_no_ack_error(data)                      (0x40000000&((data)<<30))
#define  VODMA2_VODMA2_LD_status2_C_target_ack_num(data)                         (0x007F0000&((data)<<16))
#define  VODMA2_VODMA2_LD_status2_C_last_ack_num(data)                           (0x00007F00&((data)<<8))
#define  VODMA2_VODMA2_LD_status2_C_selected_bl(data)                            (0x0000007F&(data))
#define  VODMA2_VODMA2_LD_status2_C_get_ack_num_error(data)                      ((0x80000000&(data))>>31)
#define  VODMA2_VODMA2_LD_status2_C_get_last_no_ack_error(data)                  ((0x40000000&(data))>>30)
#define  VODMA2_VODMA2_LD_status2_C_get_target_ack_num(data)                     ((0x007F0000&(data))>>16)
#define  VODMA2_VODMA2_LD_status2_C_get_last_ack_num(data)                       ((0x00007F00&(data))>>8)
#define  VODMA2_VODMA2_LD_status2_C_get_selected_bl(data)                        (0x0000007F&(data))

#define  VODMA2_VODMA2_LD_status3_C                                             0x18005934
#define  VODMA2_VODMA2_LD_status3_C_reg_addr                                     "0xB8005934"
#define  VODMA2_VODMA2_LD_status3_C_reg                                          0xB8005934
#define  VODMA2_VODMA2_LD_status3_C_inst_addr                                    "0x0053"
#define  set_VODMA2_VODMA2_LD_status3_C_reg(data)                                (*((volatile unsigned int*)VODMA2_VODMA2_LD_status3_C_reg)=data)
#define  get_VODMA2_VODMA2_LD_status3_C_reg                                      (*((volatile unsigned int*)VODMA2_VODMA2_LD_status3_C_reg))
#define  VODMA2_VODMA2_LD_status3_C_selected_addr_shift                          (4)
#define  VODMA2_VODMA2_LD_status3_C_addr_bl_sel_shift                            (0)
#define  VODMA2_VODMA2_LD_status3_C_selected_addr_mask                           (0xFFFFFFF0)
#define  VODMA2_VODMA2_LD_status3_C_addr_bl_sel_mask                             (0x00000003)
#define  VODMA2_VODMA2_LD_status3_C_selected_addr(data)                          (0xFFFFFFF0&((data)<<4))
#define  VODMA2_VODMA2_LD_status3_C_addr_bl_sel(data)                            (0x00000003&(data))
#define  VODMA2_VODMA2_LD_status3_C_get_selected_addr(data)                      ((0xFFFFFFF0&(data))>>4)
#define  VODMA2_VODMA2_LD_status3_C_get_addr_bl_sel(data)                        (0x00000003&(data))

#define  VODMA2_VODMA2_LD_Water_Monitor_C                                       0x18005938
#define  VODMA2_VODMA2_LD_Water_Monitor_C_reg_addr                               "0xB8005938"
#define  VODMA2_VODMA2_LD_Water_Monitor_C_reg                                    0xB8005938
#define  VODMA2_VODMA2_LD_Water_Monitor_C_inst_addr                              "0x0054"
#define  set_VODMA2_VODMA2_LD_Water_Monitor_C_reg(data)                          (*((volatile unsigned int*)VODMA2_VODMA2_LD_Water_Monitor_C_reg)=data)
#define  get_VODMA2_VODMA2_LD_Water_Monitor_C_reg                                (*((volatile unsigned int*)VODMA2_VODMA2_LD_Water_Monitor_C_reg))
#define  VODMA2_VODMA2_LD_Water_Monitor_C_monitor_en_shift                       (31)
#define  VODMA2_VODMA2_LD_Water_Monitor_C_monitor_conti_shift                    (30)
#define  VODMA2_VODMA2_LD_Water_Monitor_C_reach_thd_shift                        (29)
#define  VODMA2_VODMA2_LD_Water_Monitor_C_monitor_thd_shift                      (16)
#define  VODMA2_VODMA2_LD_Water_Monitor_C_lowest_water_level_shift               (0)
#define  VODMA2_VODMA2_LD_Water_Monitor_C_monitor_en_mask                        (0x80000000)
#define  VODMA2_VODMA2_LD_Water_Monitor_C_monitor_conti_mask                     (0x40000000)
#define  VODMA2_VODMA2_LD_Water_Monitor_C_reach_thd_mask                         (0x20000000)
#define  VODMA2_VODMA2_LD_Water_Monitor_C_monitor_thd_mask                       (0x01FF0000)
#define  VODMA2_VODMA2_LD_Water_Monitor_C_lowest_water_level_mask                (0x000001FF)
#define  VODMA2_VODMA2_LD_Water_Monitor_C_monitor_en(data)                       (0x80000000&((data)<<31))
#define  VODMA2_VODMA2_LD_Water_Monitor_C_monitor_conti(data)                    (0x40000000&((data)<<30))
#define  VODMA2_VODMA2_LD_Water_Monitor_C_reach_thd(data)                        (0x20000000&((data)<<29))
#define  VODMA2_VODMA2_LD_Water_Monitor_C_monitor_thd(data)                      (0x01FF0000&((data)<<16))
#define  VODMA2_VODMA2_LD_Water_Monitor_C_lowest_water_level(data)               (0x000001FF&(data))
#define  VODMA2_VODMA2_LD_Water_Monitor_C_get_monitor_en(data)                   ((0x80000000&(data))>>31)
#define  VODMA2_VODMA2_LD_Water_Monitor_C_get_monitor_conti(data)                ((0x40000000&(data))>>30)
#define  VODMA2_VODMA2_LD_Water_Monitor_C_get_reach_thd(data)                    ((0x20000000&(data))>>29)
#define  VODMA2_VODMA2_LD_Water_Monitor_C_get_monitor_thd(data)                  ((0x01FF0000&(data))>>16)
#define  VODMA2_VODMA2_LD_Water_Monitor_C_get_lowest_water_level(data)           (0x000001FF&(data))

#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_C                                 0x1800593C
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_C_reg_addr                         "0xB800593C"
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_C_reg                              0xB800593C
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_C_inst_addr                        "0x0055"
#define  set_VODMA2_VODMA2_LD_addcmd_wrap_status1_C_reg(data)                    (*((volatile unsigned int*)VODMA2_VODMA2_LD_addcmd_wrap_status1_C_reg)=data)
#define  get_VODMA2_VODMA2_LD_addcmd_wrap_status1_C_reg                          (*((volatile unsigned int*)VODMA2_VODMA2_LD_addcmd_wrap_status1_C_reg))
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_C_remain_setting_shift             (31)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_C_remain_128_num_shift             (4)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_C_finish_status_shift              (0)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_C_remain_setting_mask              (0x80000000)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_C_remain_128_num_mask              (0x07FFFFF0)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_C_finish_status_mask               (0x00000003)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_C_remain_setting(data)             (0x80000000&((data)<<31))
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_C_remain_128_num(data)             (0x07FFFFF0&((data)<<4))
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_C_finish_status(data)              (0x00000003&(data))
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_C_get_remain_setting(data)         ((0x80000000&(data))>>31)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_C_get_remain_128_num(data)         ((0x07FFFFF0&(data))>>4)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status1_C_get_finish_status(data)          (0x00000003&(data))

#define  VODMA2_VODMA2_LD_addcmd_wrap_status2_C                                 0x18005940
#define  VODMA2_VODMA2_LD_addcmd_wrap_status2_C_reg_addr                         "0xB8005940"
#define  VODMA2_VODMA2_LD_addcmd_wrap_status2_C_reg                              0xB8005940
#define  VODMA2_VODMA2_LD_addcmd_wrap_status2_C_inst_addr                        "0x0056"
#define  set_VODMA2_VODMA2_LD_addcmd_wrap_status2_C_reg(data)                    (*((volatile unsigned int*)VODMA2_VODMA2_LD_addcmd_wrap_status2_C_reg)=data)
#define  get_VODMA2_VODMA2_LD_addcmd_wrap_status2_C_reg                          (*((volatile unsigned int*)VODMA2_VODMA2_LD_addcmd_wrap_status2_C_reg))
#define  VODMA2_VODMA2_LD_addcmd_wrap_status2_C_soft_rst_before_finish_shift     (31)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status2_C_remain_line_num_shift            (16)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status2_C_soft_rst_before_finish_mask      (0x80000000)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status2_C_remain_line_num_mask             (0x0FFF0000)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status2_C_soft_rst_before_finish(data)     (0x80000000&((data)<<31))
#define  VODMA2_VODMA2_LD_addcmd_wrap_status2_C_remain_line_num(data)            (0x0FFF0000&((data)<<16))
#define  VODMA2_VODMA2_LD_addcmd_wrap_status2_C_get_soft_rst_before_finish(data) ((0x80000000&(data))>>31)
#define  VODMA2_VODMA2_LD_addcmd_wrap_status2_C_get_remain_line_num(data)        ((0x0FFF0000&(data))>>16)

#define  VODMA2_VODMA2_Dummy                                                    0x18005FFC
#define  VODMA2_VODMA2_Dummy_reg_addr                                            "0xB8005FFC"
#define  VODMA2_VODMA2_Dummy_reg                                                 0xB8005FFC
#define  VODMA2_VODMA2_Dummy_inst_addr                                           "0x0057"
#define  set_VODMA2_VODMA2_Dummy_reg(data)                                       (*((volatile unsigned int*)VODMA2_VODMA2_Dummy_reg)=data)
#define  get_VODMA2_VODMA2_Dummy_reg                                             (*((volatile unsigned int*)VODMA2_VODMA2_Dummy_reg))
#define  VODMA2_VODMA2_Dummy_dummy_31_0_shift                                    (0)
#define  VODMA2_VODMA2_Dummy_dummy_31_0_mask                                     (0xFFFFFFFF)
#define  VODMA2_VODMA2_Dummy_dummy_31_0(data)                                    (0xFFFFFFFF&(data))
#define  VODMA2_VODMA2_Dummy_get_dummy_31_0(data)                                (0xFFFFFFFF&(data))

#define  VODMA2_DECOMP2_CTRL0                                                   0x18005A00
#define  VODMA2_DECOMP2_CTRL0_reg_addr                                           "0xB8005A00"
#define  VODMA2_DECOMP2_CTRL0_reg                                                0xB8005A00
#define  VODMA2_DECOMP2_CTRL0_inst_addr                                          "0x0058"
#define  set_VODMA2_DECOMP2_CTRL0_reg(data)                                      (*((volatile unsigned int*)VODMA2_DECOMP2_CTRL0_reg)=data)
#define  get_VODMA2_DECOMP2_CTRL0_reg                                            (*((volatile unsigned int*)VODMA2_DECOMP2_CTRL0_reg))
#define  VODMA2_DECOMP2_CTRL0_wrap_line_num_sys_shift                            (20)
#define  VODMA2_DECOMP2_CTRL0_dma_multi_req_mode_shift                           (17)
#define  VODMA2_DECOMP2_CTRL0_wrap_v_flip_en_shift                               (16)
#define  VODMA2_DECOMP2_CTRL0_decomp_bpp_sys_shift                               (12)
#define  VODMA2_DECOMP2_CTRL0_header_num_4line_sys_shift                         (4)
#define  VODMA2_DECOMP2_CTRL0_decomp_bypass_en_shift                             (2)
#define  VODMA2_DECOMP2_CTRL0_lossy_en_shift                                     (1)
#define  VODMA2_DECOMP2_CTRL0_decomp_wrap_en_shift                               (0)
#define  VODMA2_DECOMP2_CTRL0_wrap_line_num_sys_mask                             (0xFFF00000)
#define  VODMA2_DECOMP2_CTRL0_dma_multi_req_mode_mask                            (0x00060000)
#define  VODMA2_DECOMP2_CTRL0_wrap_v_flip_en_mask                                (0x00010000)
#define  VODMA2_DECOMP2_CTRL0_decomp_bpp_sys_mask                                (0x0000F000)
#define  VODMA2_DECOMP2_CTRL0_header_num_4line_sys_mask                          (0x00000FF0)
#define  VODMA2_DECOMP2_CTRL0_decomp_bypass_en_mask                              (0x00000004)
#define  VODMA2_DECOMP2_CTRL0_lossy_en_mask                                      (0x00000002)
#define  VODMA2_DECOMP2_CTRL0_decomp_wrap_en_mask                                (0x00000001)
#define  VODMA2_DECOMP2_CTRL0_wrap_line_num_sys(data)                            (0xFFF00000&((data)<<20))
#define  VODMA2_DECOMP2_CTRL0_dma_multi_req_mode(data)                           (0x00060000&((data)<<17))
#define  VODMA2_DECOMP2_CTRL0_wrap_v_flip_en(data)                               (0x00010000&((data)<<16))
#define  VODMA2_DECOMP2_CTRL0_decomp_bpp_sys(data)                               (0x0000F000&((data)<<12))
#define  VODMA2_DECOMP2_CTRL0_header_num_4line_sys(data)                         (0x00000FF0&((data)<<4))
#define  VODMA2_DECOMP2_CTRL0_decomp_bypass_en(data)                             (0x00000004&((data)<<2))
#define  VODMA2_DECOMP2_CTRL0_lossy_en(data)                                     (0x00000002&((data)<<1))
#define  VODMA2_DECOMP2_CTRL0_decomp_wrap_en(data)                               (0x00000001&(data))
#define  VODMA2_DECOMP2_CTRL0_get_wrap_line_num_sys(data)                        ((0xFFF00000&(data))>>20)
#define  VODMA2_DECOMP2_CTRL0_get_dma_multi_req_mode(data)                       ((0x00060000&(data))>>17)
#define  VODMA2_DECOMP2_CTRL0_get_wrap_v_flip_en(data)                           ((0x00010000&(data))>>16)
#define  VODMA2_DECOMP2_CTRL0_get_decomp_bpp_sys(data)                           ((0x0000F000&(data))>>12)
#define  VODMA2_DECOMP2_CTRL0_get_header_num_4line_sys(data)                     ((0x00000FF0&(data))>>4)
#define  VODMA2_DECOMP2_CTRL0_get_decomp_bypass_en(data)                         ((0x00000004&(data))>>2)
#define  VODMA2_DECOMP2_CTRL0_get_lossy_en(data)                                 ((0x00000002&(data))>>1)
#define  VODMA2_DECOMP2_CTRL0_get_decomp_wrap_en(data)                           (0x00000001&(data))

#define  VODMA2_DECOMP2_CTRL1                                                   0x18005A04
#define  VODMA2_DECOMP2_CTRL1_reg_addr                                           "0xB8005A04"
#define  VODMA2_DECOMP2_CTRL1_reg                                                0xB8005A04
#define  VODMA2_DECOMP2_CTRL1_inst_addr                                          "0x0059"
#define  set_VODMA2_DECOMP2_CTRL1_reg(data)                                      (*((volatile unsigned int*)VODMA2_DECOMP2_CTRL1_reg)=data)
#define  get_VODMA2_DECOMP2_CTRL1_reg                                            (*((volatile unsigned int*)VODMA2_DECOMP2_CTRL1_reg))
#define  VODMA2_DECOMP2_CTRL1_wrap_line_num_vodma_shift                          (20)
#define  VODMA2_DECOMP2_CTRL1_crepeat_en_shift                                   (16)
#define  VODMA2_DECOMP2_CTRL1_decomp_bpp_vodma_shift                             (12)
#define  VODMA2_DECOMP2_CTRL1_header_num_4line_vodma_shift                       (4)
#define  VODMA2_DECOMP2_CTRL1_wrap_line_num_vodma_mask                           (0xFFF00000)
#define  VODMA2_DECOMP2_CTRL1_crepeat_en_mask                                    (0x00010000)
#define  VODMA2_DECOMP2_CTRL1_decomp_bpp_vodma_mask                              (0x0000F000)
#define  VODMA2_DECOMP2_CTRL1_header_num_4line_vodma_mask                        (0x00000FF0)
#define  VODMA2_DECOMP2_CTRL1_wrap_line_num_vodma(data)                          (0xFFF00000&((data)<<20))
#define  VODMA2_DECOMP2_CTRL1_crepeat_en(data)                                   (0x00010000&((data)<<16))
#define  VODMA2_DECOMP2_CTRL1_decomp_bpp_vodma(data)                             (0x0000F000&((data)<<12))
#define  VODMA2_DECOMP2_CTRL1_header_num_4line_vodma(data)                       (0x00000FF0&((data)<<4))
#define  VODMA2_DECOMP2_CTRL1_get_wrap_line_num_vodma(data)                      ((0xFFF00000&(data))>>20)
#define  VODMA2_DECOMP2_CTRL1_get_crepeat_en(data)                               ((0x00010000&(data))>>16)
#define  VODMA2_DECOMP2_CTRL1_get_decomp_bpp_vodma(data)                         ((0x0000F000&(data))>>12)
#define  VODMA2_DECOMP2_CTRL1_get_header_num_4line_vodma(data)                   ((0x00000FF0&(data))>>4)

#define  VODMA2_DECOMP2_YDMA                                                    0x18005A08
#define  VODMA2_DECOMP2_YDMA_reg_addr                                            "0xB8005A08"
#define  VODMA2_DECOMP2_YDMA_reg                                                 0xB8005A08
#define  VODMA2_DECOMP2_YDMA_inst_addr                                           "0x005A"
#define  set_VODMA2_DECOMP2_YDMA_reg(data)                                       (*((volatile unsigned int*)VODMA2_DECOMP2_YDMA_reg)=data)
#define  get_VODMA2_DECOMP2_YDMA_reg                                             (*((volatile unsigned int*)VODMA2_DECOMP2_YDMA_reg))
#define  VODMA2_DECOMP2_YDMA_wrap_y_data_wtlvl_shift                             (16)
#define  VODMA2_DECOMP2_YDMA_wrap_y_data_read_len_shift                          (0)
#define  VODMA2_DECOMP2_YDMA_wrap_y_data_wtlvl_mask                              (0x01FF0000)
#define  VODMA2_DECOMP2_YDMA_wrap_y_data_read_len_mask                           (0x000000FF)
#define  VODMA2_DECOMP2_YDMA_wrap_y_data_wtlvl(data)                             (0x01FF0000&((data)<<16))
#define  VODMA2_DECOMP2_YDMA_wrap_y_data_read_len(data)                          (0x000000FF&(data))
#define  VODMA2_DECOMP2_YDMA_get_wrap_y_data_wtlvl(data)                         ((0x01FF0000&(data))>>16)
#define  VODMA2_DECOMP2_YDMA_get_wrap_y_data_read_len(data)                      (0x000000FF&(data))

#define  VODMA2_DECOMP2_CDMA                                                    0x18005A0C
#define  VODMA2_DECOMP2_CDMA_reg_addr                                            "0xB8005A0C"
#define  VODMA2_DECOMP2_CDMA_reg                                                 0xB8005A0C
#define  VODMA2_DECOMP2_CDMA_inst_addr                                           "0x005B"
#define  set_VODMA2_DECOMP2_CDMA_reg(data)                                       (*((volatile unsigned int*)VODMA2_DECOMP2_CDMA_reg)=data)
#define  get_VODMA2_DECOMP2_CDMA_reg                                             (*((volatile unsigned int*)VODMA2_DECOMP2_CDMA_reg))
#define  VODMA2_DECOMP2_CDMA_wrap_c_data_wtlvl_shift                             (16)
#define  VODMA2_DECOMP2_CDMA_wrap_c_data_read_len_shift                          (0)
#define  VODMA2_DECOMP2_CDMA_wrap_c_data_wtlvl_mask                              (0x01FF0000)
#define  VODMA2_DECOMP2_CDMA_wrap_c_data_read_len_mask                           (0x000000FF)
#define  VODMA2_DECOMP2_CDMA_wrap_c_data_wtlvl(data)                             (0x01FF0000&((data)<<16))
#define  VODMA2_DECOMP2_CDMA_wrap_c_data_read_len(data)                          (0x000000FF&(data))
#define  VODMA2_DECOMP2_CDMA_get_wrap_c_data_wtlvl(data)                         ((0x01FF0000&(data))>>16)
#define  VODMA2_DECOMP2_CDMA_get_wrap_c_data_read_len(data)                      (0x000000FF&(data))

#define  VODMA2_DECOMP2_READ_Y                                                  0x18005A14
#define  VODMA2_DECOMP2_READ_Y_reg_addr                                          "0xB8005A14"
#define  VODMA2_DECOMP2_READ_Y_reg                                               0xB8005A14
#define  VODMA2_DECOMP2_READ_Y_inst_addr                                         "0x005C"
#define  set_VODMA2_DECOMP2_READ_Y_reg(data)                                     (*((volatile unsigned int*)VODMA2_DECOMP2_READ_Y_reg)=data)
#define  get_VODMA2_DECOMP2_READ_Y_reg                                           (*((volatile unsigned int*)VODMA2_DECOMP2_READ_Y_reg))
#define  VODMA2_DECOMP2_READ_Y_wrap_y_header_read_addr_shift                     (3)
#define  VODMA2_DECOMP2_READ_Y_wrap_y_header_read_addr_mask                      (0xFFFFFFF8)
#define  VODMA2_DECOMP2_READ_Y_wrap_y_header_read_addr(data)                     (0xFFFFFFF8&((data)<<3))
#define  VODMA2_DECOMP2_READ_Y_get_wrap_y_header_read_addr(data)                 ((0xFFFFFFF8&(data))>>3)

#define  VODMA2_DECOMP2_READ_C                                                  0x18005A18
#define  VODMA2_DECOMP2_READ_C_reg_addr                                          "0xB8005A18"
#define  VODMA2_DECOMP2_READ_C_reg                                               0xB8005A18
#define  VODMA2_DECOMP2_READ_C_inst_addr                                         "0x005D"
#define  set_VODMA2_DECOMP2_READ_C_reg(data)                                     (*((volatile unsigned int*)VODMA2_DECOMP2_READ_C_reg)=data)
#define  get_VODMA2_DECOMP2_READ_C_reg                                           (*((volatile unsigned int*)VODMA2_DECOMP2_READ_C_reg))
#define  VODMA2_DECOMP2_READ_C_wrap_c_header_read_addr_shift                     (3)
#define  VODMA2_DECOMP2_READ_C_wrap_c_header_read_addr_mask                      (0xFFFFFFF8)
#define  VODMA2_DECOMP2_READ_C_wrap_c_header_read_addr(data)                     (0xFFFFFFF8&((data)<<3))
#define  VODMA2_DECOMP2_READ_C_get_wrap_c_header_read_addr(data)                 ((0xFFFFFFF8&(data))>>3)

#define  VODMA2_DECOMP2_X_WID_Y                                                 0x18005A1C
#define  VODMA2_DECOMP2_X_WID_Y_reg_addr                                         "0xB8005A1C"
#define  VODMA2_DECOMP2_X_WID_Y_reg                                              0xB8005A1C
#define  VODMA2_DECOMP2_X_WID_Y_inst_addr                                        "0x005E"
#define  set_VODMA2_DECOMP2_X_WID_Y_reg(data)                                    (*((volatile unsigned int*)VODMA2_DECOMP2_X_WID_Y_reg)=data)
#define  get_VODMA2_DECOMP2_X_WID_Y_reg                                          (*((volatile unsigned int*)VODMA2_DECOMP2_X_WID_Y_reg))
#define  VODMA2_DECOMP2_X_WID_Y_wrap_data_wid_y_shift                            (0)
#define  VODMA2_DECOMP2_X_WID_Y_wrap_data_wid_y_mask                             (0x000003FF)
#define  VODMA2_DECOMP2_X_WID_Y_wrap_data_wid_y(data)                            (0x000003FF&(data))
#define  VODMA2_DECOMP2_X_WID_Y_get_wrap_data_wid_y(data)                        (0x000003FF&(data))

#define  VODMA2_DECOMP2_X_WID_C                                                 0x18005A20
#define  VODMA2_DECOMP2_X_WID_C_reg_addr                                         "0xB8005A20"
#define  VODMA2_DECOMP2_X_WID_C_reg                                              0xB8005A20
#define  VODMA2_DECOMP2_X_WID_C_inst_addr                                        "0x005F"
#define  set_VODMA2_DECOMP2_X_WID_C_reg(data)                                    (*((volatile unsigned int*)VODMA2_DECOMP2_X_WID_C_reg)=data)
#define  get_VODMA2_DECOMP2_X_WID_C_reg                                          (*((volatile unsigned int*)VODMA2_DECOMP2_X_WID_C_reg))
#define  VODMA2_DECOMP2_X_WID_C_wrap_data_wid_c_shift                            (0)
#define  VODMA2_DECOMP2_X_WID_C_wrap_data_wid_c_mask                             (0x000003FF)
#define  VODMA2_DECOMP2_X_WID_C_wrap_data_wid_c(data)                            (0x000003FF&(data))
#define  VODMA2_DECOMP2_X_WID_C_get_wrap_data_wid_c(data)                        (0x000003FF&(data))

#define  VODMA2_DECOMP2_DMA_READ_HD_Y                                           0x18005A24
#define  VODMA2_DECOMP2_DMA_READ_HD_Y_reg_addr                                   "0xB8005A24"
#define  VODMA2_DECOMP2_DMA_READ_HD_Y_reg                                        0xB8005A24
#define  VODMA2_DECOMP2_DMA_READ_HD_Y_inst_addr                                  "0x0060"
#define  set_VODMA2_DECOMP2_DMA_READ_HD_Y_reg(data)                              (*((volatile unsigned int*)VODMA2_DECOMP2_DMA_READ_HD_Y_reg)=data)
#define  get_VODMA2_DECOMP2_DMA_READ_HD_Y_reg                                    (*((volatile unsigned int*)VODMA2_DECOMP2_DMA_READ_HD_Y_reg))
#define  VODMA2_DECOMP2_DMA_READ_HD_Y_dma_y_hd_4line_step_shift                  (3)
#define  VODMA2_DECOMP2_DMA_READ_HD_Y_dma_y_hd_4line_step_mask                   (0xFFFFFFF8)
#define  VODMA2_DECOMP2_DMA_READ_HD_Y_dma_y_hd_4line_step(data)                  (0xFFFFFFF8&((data)<<3))
#define  VODMA2_DECOMP2_DMA_READ_HD_Y_get_dma_y_hd_4line_step(data)              ((0xFFFFFFF8&(data))>>3)

#define  VODMA2_DECOMP2_DMA_READ_HD_C                                           0x18005A28
#define  VODMA2_DECOMP2_DMA_READ_HD_C_reg_addr                                   "0xB8005A28"
#define  VODMA2_DECOMP2_DMA_READ_HD_C_reg                                        0xB8005A28
#define  VODMA2_DECOMP2_DMA_READ_HD_C_inst_addr                                  "0x0061"
#define  set_VODMA2_DECOMP2_DMA_READ_HD_C_reg(data)                              (*((volatile unsigned int*)VODMA2_DECOMP2_DMA_READ_HD_C_reg)=data)
#define  get_VODMA2_DECOMP2_DMA_READ_HD_C_reg                                    (*((volatile unsigned int*)VODMA2_DECOMP2_DMA_READ_HD_C_reg))
#define  VODMA2_DECOMP2_DMA_READ_HD_C_dma_c_hd_4line_step_shift                  (3)
#define  VODMA2_DECOMP2_DMA_READ_HD_C_dma_c_hd_4line_step_mask                   (0xFFFFFFF8)
#define  VODMA2_DECOMP2_DMA_READ_HD_C_dma_c_hd_4line_step(data)                  (0xFFFFFFF8&((data)<<3))
#define  VODMA2_DECOMP2_DMA_READ_HD_C_get_dma_c_hd_4line_step(data)              ((0xFFFFFFF8&(data))>>3)

#define  VODMA2_DECOMP2_HD_CTRL1                                                0x18005A2C
#define  VODMA2_DECOMP2_HD_CTRL1_reg_addr                                        "0xB8005A2C"
#define  VODMA2_DECOMP2_HD_CTRL1_reg                                             0xB8005A2C
#define  VODMA2_DECOMP2_HD_CTRL1_inst_addr                                       "0x0062"
#define  set_VODMA2_DECOMP2_HD_CTRL1_reg(data)                                   (*((volatile unsigned int*)VODMA2_DECOMP2_HD_CTRL1_reg)=data)
#define  get_VODMA2_DECOMP2_HD_CTRL1_reg                                         (*((volatile unsigned int*)VODMA2_DECOMP2_HD_CTRL1_reg))
#define  VODMA2_DECOMP2_HD_CTRL1_dma_c_hd_mode_shift                             (31)
#define  VODMA2_DECOMP2_HD_CTRL1_dma_y_hd_mode_shift                             (30)
#define  VODMA2_DECOMP2_HD_CTRL1_dma_c_hd_blk_len_shift                          (8)
#define  VODMA2_DECOMP2_HD_CTRL1_dma_y_hd_blk_len_shift                          (0)
#define  VODMA2_DECOMP2_HD_CTRL1_dma_c_hd_mode_mask                              (0x80000000)
#define  VODMA2_DECOMP2_HD_CTRL1_dma_y_hd_mode_mask                              (0x40000000)
#define  VODMA2_DECOMP2_HD_CTRL1_dma_c_hd_blk_len_mask                           (0x0000FF00)
#define  VODMA2_DECOMP2_HD_CTRL1_dma_y_hd_blk_len_mask                           (0x000000FF)
#define  VODMA2_DECOMP2_HD_CTRL1_dma_c_hd_mode(data)                             (0x80000000&((data)<<31))
#define  VODMA2_DECOMP2_HD_CTRL1_dma_y_hd_mode(data)                             (0x40000000&((data)<<30))
#define  VODMA2_DECOMP2_HD_CTRL1_dma_c_hd_blk_len(data)                          (0x0000FF00&((data)<<8))
#define  VODMA2_DECOMP2_HD_CTRL1_dma_y_hd_blk_len(data)                          (0x000000FF&(data))
#define  VODMA2_DECOMP2_HD_CTRL1_get_dma_c_hd_mode(data)                         ((0x80000000&(data))>>31)
#define  VODMA2_DECOMP2_HD_CTRL1_get_dma_y_hd_mode(data)                         ((0x40000000&(data))>>30)
#define  VODMA2_DECOMP2_HD_CTRL1_get_dma_c_hd_blk_len(data)                      ((0x0000FF00&(data))>>8)
#define  VODMA2_DECOMP2_HD_CTRL1_get_dma_y_hd_blk_len(data)                      (0x000000FF&(data))

#define  VODMA2_DECOMP2_DMA_STSTUS                                              0x18005A30
#define  VODMA2_DECOMP2_DMA_STSTUS_reg_addr                                      "0xB8005A30"
#define  VODMA2_DECOMP2_DMA_STSTUS_reg                                           0xB8005A30
#define  VODMA2_DECOMP2_DMA_STSTUS_inst_addr                                     "0x0063"
#define  set_VODMA2_DECOMP2_DMA_STSTUS_reg(data)                                 (*((volatile unsigned int*)VODMA2_DECOMP2_DMA_STSTUS_reg)=data)
#define  get_VODMA2_DECOMP2_DMA_STSTUS_reg                                       (*((volatile unsigned int*)VODMA2_DECOMP2_DMA_STSTUS_reg))
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_err_hd_format_shift                      (28)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_data_fifoof_shift                      (27)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_data_fifouf_shift                      (26)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_data_fifofull_shift                    (25)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_data_fifoempty_shift                   (24)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_head_fifoof_shift                      (23)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_head_fifofull_shift                    (21)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_head_fifoempty_shift                   (20)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_dma_fifoof_shift                       (19)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_dma_req_error_shift                    (18)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_dma_fifofull_shift                     (17)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_dma_fifoempty_shift                    (16)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_data_fifoof_shift                      (11)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_data_fifouf_shift                      (10)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_data_fifofull_shift                    (9)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_data_fifoempty_shift                   (8)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_head_fifoof_shift                      (7)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_head_fifofull_shift                    (5)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_head_fifoempty_shift                   (4)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_dma_fifoof_shift                       (3)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_dma_req_error_shift                    (2)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_dma_fifofull_shift                     (1)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_dma_fifoempty_shift                    (0)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_err_hd_format_mask                       (0x10000000)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_data_fifoof_mask                       (0x08000000)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_data_fifouf_mask                       (0x04000000)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_data_fifofull_mask                     (0x02000000)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_data_fifoempty_mask                    (0x01000000)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_head_fifoof_mask                       (0x00800000)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_head_fifofull_mask                     (0x00200000)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_head_fifoempty_mask                    (0x00100000)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_dma_fifoof_mask                        (0x00080000)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_dma_req_error_mask                     (0x00040000)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_dma_fifofull_mask                      (0x00020000)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_dma_fifoempty_mask                     (0x00010000)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_data_fifoof_mask                       (0x00000800)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_data_fifouf_mask                       (0x00000400)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_data_fifofull_mask                     (0x00000200)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_data_fifoempty_mask                    (0x00000100)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_head_fifoof_mask                       (0x00000080)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_head_fifofull_mask                     (0x00000020)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_head_fifoempty_mask                    (0x00000010)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_dma_fifoof_mask                        (0x00000008)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_dma_req_error_mask                     (0x00000004)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_dma_fifofull_mask                      (0x00000002)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_dma_fifoempty_mask                     (0x00000001)
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_err_hd_format(data)                      (0x10000000&((data)<<28))
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_data_fifoof(data)                      (0x08000000&((data)<<27))
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_data_fifouf(data)                      (0x04000000&((data)<<26))
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_data_fifofull(data)                    (0x02000000&((data)<<25))
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_data_fifoempty(data)                   (0x01000000&((data)<<24))
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_head_fifoof(data)                      (0x00800000&((data)<<23))
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_head_fifofull(data)                    (0x00200000&((data)<<21))
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_head_fifoempty(data)                   (0x00100000&((data)<<20))
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_dma_fifoof(data)                       (0x00080000&((data)<<19))
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_dma_req_error(data)                    (0x00040000&((data)<<18))
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_dma_fifofull(data)                     (0x00020000&((data)<<17))
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_c_dma_fifoempty(data)                    (0x00010000&((data)<<16))
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_data_fifoof(data)                      (0x00000800&((data)<<11))
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_data_fifouf(data)                      (0x00000400&((data)<<10))
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_data_fifofull(data)                    (0x00000200&((data)<<9))
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_data_fifoempty(data)                   (0x00000100&((data)<<8))
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_head_fifoof(data)                      (0x00000080&((data)<<7))
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_head_fifofull(data)                    (0x00000020&((data)<<5))
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_head_fifoempty(data)                   (0x00000010&((data)<<4))
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_dma_fifoof(data)                       (0x00000008&((data)<<3))
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_dma_req_error(data)                    (0x00000004&((data)<<2))
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_dma_fifofull(data)                     (0x00000002&((data)<<1))
#define  VODMA2_DECOMP2_DMA_STSTUS_wrap_y_dma_fifoempty(data)                    (0x00000001&(data))
#define  VODMA2_DECOMP2_DMA_STSTUS_get_wrap_err_hd_format(data)                  ((0x10000000&(data))>>28)
#define  VODMA2_DECOMP2_DMA_STSTUS_get_wrap_c_data_fifoof(data)                  ((0x08000000&(data))>>27)
#define  VODMA2_DECOMP2_DMA_STSTUS_get_wrap_c_data_fifouf(data)                  ((0x04000000&(data))>>26)
#define  VODMA2_DECOMP2_DMA_STSTUS_get_wrap_c_data_fifofull(data)                ((0x02000000&(data))>>25)
#define  VODMA2_DECOMP2_DMA_STSTUS_get_wrap_c_data_fifoempty(data)               ((0x01000000&(data))>>24)
#define  VODMA2_DECOMP2_DMA_STSTUS_get_wrap_c_head_fifoof(data)                  ((0x00800000&(data))>>23)
#define  VODMA2_DECOMP2_DMA_STSTUS_get_wrap_c_head_fifofull(data)                ((0x00200000&(data))>>21)
#define  VODMA2_DECOMP2_DMA_STSTUS_get_wrap_c_head_fifoempty(data)               ((0x00100000&(data))>>20)
#define  VODMA2_DECOMP2_DMA_STSTUS_get_wrap_c_dma_fifoof(data)                   ((0x00080000&(data))>>19)
#define  VODMA2_DECOMP2_DMA_STSTUS_get_wrap_c_dma_req_error(data)                ((0x00040000&(data))>>18)
#define  VODMA2_DECOMP2_DMA_STSTUS_get_wrap_c_dma_fifofull(data)                 ((0x00020000&(data))>>17)
#define  VODMA2_DECOMP2_DMA_STSTUS_get_wrap_c_dma_fifoempty(data)                ((0x00010000&(data))>>16)
#define  VODMA2_DECOMP2_DMA_STSTUS_get_wrap_y_data_fifoof(data)                  ((0x00000800&(data))>>11)
#define  VODMA2_DECOMP2_DMA_STSTUS_get_wrap_y_data_fifouf(data)                  ((0x00000400&(data))>>10)
#define  VODMA2_DECOMP2_DMA_STSTUS_get_wrap_y_data_fifofull(data)                ((0x00000200&(data))>>9)
#define  VODMA2_DECOMP2_DMA_STSTUS_get_wrap_y_data_fifoempty(data)               ((0x00000100&(data))>>8)
#define  VODMA2_DECOMP2_DMA_STSTUS_get_wrap_y_head_fifoof(data)                  ((0x00000080&(data))>>7)
#define  VODMA2_DECOMP2_DMA_STSTUS_get_wrap_y_head_fifofull(data)                ((0x00000020&(data))>>5)
#define  VODMA2_DECOMP2_DMA_STSTUS_get_wrap_y_head_fifoempty(data)               ((0x00000010&(data))>>4)
#define  VODMA2_DECOMP2_DMA_STSTUS_get_wrap_y_dma_fifoof(data)                   ((0x00000008&(data))>>3)
#define  VODMA2_DECOMP2_DMA_STSTUS_get_wrap_y_dma_req_error(data)                ((0x00000004&(data))>>2)
#define  VODMA2_DECOMP2_DMA_STSTUS_get_wrap_y_dma_fifofull(data)                 ((0x00000002&(data))>>1)
#define  VODMA2_DECOMP2_DMA_STSTUS_get_wrap_y_dma_fifoempty(data)                (0x00000001&(data))

#define  VODMA2_DECOMP2_DMA_IE                                                  0x18005A34
#define  VODMA2_DECOMP2_DMA_IE_reg_addr                                          "0xB8005A34"
#define  VODMA2_DECOMP2_DMA_IE_reg                                               0xB8005A34
#define  VODMA2_DECOMP2_DMA_IE_inst_addr                                         "0x0064"
#define  set_VODMA2_DECOMP2_DMA_IE_reg(data)                                     (*((volatile unsigned int*)VODMA2_DECOMP2_DMA_IE_reg)=data)
#define  get_VODMA2_DECOMP2_DMA_IE_reg                                           (*((volatile unsigned int*)VODMA2_DECOMP2_DMA_IE_reg))
#define  VODMA2_DECOMP2_DMA_IE_wrap_c_data_fifoof_ie_shift                       (27)
#define  VODMA2_DECOMP2_DMA_IE_wrap_c_data_fifouf_ie_shift                       (26)
#define  VODMA2_DECOMP2_DMA_IE_wrap_c_head_fifoof_ie_shift                       (23)
#define  VODMA2_DECOMP2_DMA_IE_wrap_c_dma_fifoof_ie_shift                        (19)
#define  VODMA2_DECOMP2_DMA_IE_wrap_y_data_fifoof_ie_shift                       (11)
#define  VODMA2_DECOMP2_DMA_IE_wrap_y_data_fifouf_ie_shift                       (10)
#define  VODMA2_DECOMP2_DMA_IE_wrap_y_head_fifoof_ie_shift                       (7)
#define  VODMA2_DECOMP2_DMA_IE_wrap_y_dma_fifoof_ie_shift                        (3)
#define  VODMA2_DECOMP2_DMA_IE_wrap_c_data_fifoof_ie_mask                        (0x08000000)
#define  VODMA2_DECOMP2_DMA_IE_wrap_c_data_fifouf_ie_mask                        (0x04000000)
#define  VODMA2_DECOMP2_DMA_IE_wrap_c_head_fifoof_ie_mask                        (0x00800000)
#define  VODMA2_DECOMP2_DMA_IE_wrap_c_dma_fifoof_ie_mask                         (0x00080000)
#define  VODMA2_DECOMP2_DMA_IE_wrap_y_data_fifoof_ie_mask                        (0x00000800)
#define  VODMA2_DECOMP2_DMA_IE_wrap_y_data_fifouf_ie_mask                        (0x00000400)
#define  VODMA2_DECOMP2_DMA_IE_wrap_y_head_fifoof_ie_mask                        (0x00000080)
#define  VODMA2_DECOMP2_DMA_IE_wrap_y_dma_fifoof_ie_mask                         (0x00000008)
#define  VODMA2_DECOMP2_DMA_IE_wrap_c_data_fifoof_ie(data)                       (0x08000000&((data)<<27))
#define  VODMA2_DECOMP2_DMA_IE_wrap_c_data_fifouf_ie(data)                       (0x04000000&((data)<<26))
#define  VODMA2_DECOMP2_DMA_IE_wrap_c_head_fifoof_ie(data)                       (0x00800000&((data)<<23))
#define  VODMA2_DECOMP2_DMA_IE_wrap_c_dma_fifoof_ie(data)                        (0x00080000&((data)<<19))
#define  VODMA2_DECOMP2_DMA_IE_wrap_y_data_fifoof_ie(data)                       (0x00000800&((data)<<11))
#define  VODMA2_DECOMP2_DMA_IE_wrap_y_data_fifouf_ie(data)                       (0x00000400&((data)<<10))
#define  VODMA2_DECOMP2_DMA_IE_wrap_y_head_fifoof_ie(data)                       (0x00000080&((data)<<7))
#define  VODMA2_DECOMP2_DMA_IE_wrap_y_dma_fifoof_ie(data)                        (0x00000008&((data)<<3))
#define  VODMA2_DECOMP2_DMA_IE_get_wrap_c_data_fifoof_ie(data)                   ((0x08000000&(data))>>27)
#define  VODMA2_DECOMP2_DMA_IE_get_wrap_c_data_fifouf_ie(data)                   ((0x04000000&(data))>>26)
#define  VODMA2_DECOMP2_DMA_IE_get_wrap_c_head_fifoof_ie(data)                   ((0x00800000&(data))>>23)
#define  VODMA2_DECOMP2_DMA_IE_get_wrap_c_dma_fifoof_ie(data)                    ((0x00080000&(data))>>19)
#define  VODMA2_DECOMP2_DMA_IE_get_wrap_y_data_fifoof_ie(data)                   ((0x00000800&(data))>>11)
#define  VODMA2_DECOMP2_DMA_IE_get_wrap_y_data_fifouf_ie(data)                   ((0x00000400&(data))>>10)
#define  VODMA2_DECOMP2_DMA_IE_get_wrap_y_head_fifoof_ie(data)                   ((0x00000080&(data))>>7)
#define  VODMA2_DECOMP2_DMA_IE_get_wrap_y_dma_fifoof_ie(data)                    ((0x00000008&(data))>>3)

#define  VODMA2_decomp2_core_status_0                                           0x18005A38
#define  VODMA2_decomp2_core_status_0_reg_addr                                   "0xB8005A38"
#define  VODMA2_decomp2_core_status_0_reg                                        0xB8005A38
#define  VODMA2_decomp2_core_status_0_inst_addr                                  "0x0065"
#define  set_VODMA2_decomp2_core_status_0_reg(data)                              (*((volatile unsigned int*)VODMA2_decomp2_core_status_0_reg)=data)
#define  get_VODMA2_decomp2_core_status_0_reg                                    (*((volatile unsigned int*)VODMA2_decomp2_core_status_0_reg))
#define  VODMA2_decomp2_core_status_0_decomp_core_irq_shift                      (31)
#define  VODMA2_decomp2_core_status_0_decomp_core2_irq_shift                     (15)
#define  VODMA2_decomp2_core_status_0_decomp_core_irq_mask                       (0x80000000)
#define  VODMA2_decomp2_core_status_0_decomp_core2_irq_mask                      (0x00008000)
#define  VODMA2_decomp2_core_status_0_decomp_core_irq(data)                      (0x80000000&((data)<<31))
#define  VODMA2_decomp2_core_status_0_decomp_core2_irq(data)                     (0x00008000&((data)<<15))
#define  VODMA2_decomp2_core_status_0_get_decomp_core_irq(data)                  ((0x80000000&(data))>>31)
#define  VODMA2_decomp2_core_status_0_get_decomp_core2_irq(data)                 ((0x00008000&(data))>>15)

#define  VODMA2_decomp2_core_status_1                                           0x18005A3C
#define  VODMA2_decomp2_core_status_1_reg_addr                                   "0xB8005A3C"
#define  VODMA2_decomp2_core_status_1_reg                                        0xB8005A3C
#define  VODMA2_decomp2_core_status_1_inst_addr                                  "0x0066"
#define  set_VODMA2_decomp2_core_status_1_reg(data)                              (*((volatile unsigned int*)VODMA2_decomp2_core_status_1_reg)=data)
#define  get_VODMA2_decomp2_core_status_1_reg                                    (*((volatile unsigned int*)VODMA2_decomp2_core_status_1_reg))
#define  VODMA2_decomp2_core_status_1_decomp_core2_errflag_shift                 (16)
#define  VODMA2_decomp2_core_status_1_decomp_core_errflag_shift                  (0)
#define  VODMA2_decomp2_core_status_1_decomp_core2_errflag_mask                  (0x00FF0000)
#define  VODMA2_decomp2_core_status_1_decomp_core_errflag_mask                   (0x000000FF)
#define  VODMA2_decomp2_core_status_1_decomp_core2_errflag(data)                 (0x00FF0000&((data)<<16))
#define  VODMA2_decomp2_core_status_1_decomp_core_errflag(data)                  (0x000000FF&(data))
#define  VODMA2_decomp2_core_status_1_get_decomp_core2_errflag(data)             ((0x00FF0000&(data))>>16)
#define  VODMA2_decomp2_core_status_1_get_decomp_core_errflag(data)              (0x000000FF&(data))

#define  VODMA2_decomp2_core_status_2                                           0x18005A40
#define  VODMA2_decomp2_core_status_2_reg_addr                                   "0xB8005A40"
#define  VODMA2_decomp2_core_status_2_reg                                        0xB8005A40
#define  VODMA2_decomp2_core_status_2_inst_addr                                  "0x0067"
#define  set_VODMA2_decomp2_core_status_2_reg(data)                              (*((volatile unsigned int*)VODMA2_decomp2_core_status_2_reg)=data)
#define  get_VODMA2_decomp2_core_status_2_reg                                    (*((volatile unsigned int*)VODMA2_decomp2_core_status_2_reg))
#define  VODMA2_decomp2_core_status_2_decomp_time_out_sel_shift                  (31)
#define  VODMA2_decomp2_core_status_2_decomp_core2_errflag_clr_shift             (16)
#define  VODMA2_decomp2_core_status_2_decomp_core_errflag_clr_shift              (0)
#define  VODMA2_decomp2_core_status_2_decomp_time_out_sel_mask                   (0x80000000)
#define  VODMA2_decomp2_core_status_2_decomp_core2_errflag_clr_mask              (0x00FF0000)
#define  VODMA2_decomp2_core_status_2_decomp_core_errflag_clr_mask               (0x000000FF)
#define  VODMA2_decomp2_core_status_2_decomp_time_out_sel(data)                  (0x80000000&((data)<<31))
#define  VODMA2_decomp2_core_status_2_decomp_core2_errflag_clr(data)             (0x00FF0000&((data)<<16))
#define  VODMA2_decomp2_core_status_2_decomp_core_errflag_clr(data)              (0x000000FF&(data))
#define  VODMA2_decomp2_core_status_2_get_decomp_time_out_sel(data)              ((0x80000000&(data))>>31)
#define  VODMA2_decomp2_core_status_2_get_decomp_core2_errflag_clr(data)         ((0x00FF0000&(data))>>16)
#define  VODMA2_decomp2_core_status_2_get_decomp_core_errflag_clr(data)          (0x000000FF&(data))

#define  VODMA2_decomp2_core_status_3                                           0x18005A44
#define  VODMA2_decomp2_core_status_3_reg_addr                                   "0xB8005A44"
#define  VODMA2_decomp2_core_status_3_reg                                        0xB8005A44
#define  VODMA2_decomp2_core_status_3_inst_addr                                  "0x0068"
#define  set_VODMA2_decomp2_core_status_3_reg(data)                              (*((volatile unsigned int*)VODMA2_decomp2_core_status_3_reg)=data)
#define  get_VODMA2_decomp2_core_status_3_reg                                    (*((volatile unsigned int*)VODMA2_decomp2_core_status_3_reg))
#define  VODMA2_decomp2_core_status_3_decomp_core2_flag2irq_en_shift             (16)
#define  VODMA2_decomp2_core_status_3_decomp_core_flag2irq_en_shift              (0)
#define  VODMA2_decomp2_core_status_3_decomp_core2_flag2irq_en_mask              (0x00FF0000)
#define  VODMA2_decomp2_core_status_3_decomp_core_flag2irq_en_mask               (0x000000FF)
#define  VODMA2_decomp2_core_status_3_decomp_core2_flag2irq_en(data)             (0x00FF0000&((data)<<16))
#define  VODMA2_decomp2_core_status_3_decomp_core_flag2irq_en(data)              (0x000000FF&(data))
#define  VODMA2_decomp2_core_status_3_get_decomp_core2_flag2irq_en(data)         ((0x00FF0000&(data))>>16)
#define  VODMA2_decomp2_core_status_3_get_decomp_core_flag2irq_en(data)          (0x000000FF&(data))

#define  VODMA2_DECOMP2_DATA_READ_Y                                             0x18005A48
#define  VODMA2_DECOMP2_DATA_READ_Y_reg_addr                                     "0xB8005A48"
#define  VODMA2_DECOMP2_DATA_READ_Y_reg                                          0xB8005A48
#define  VODMA2_DECOMP2_DATA_READ_Y_inst_addr                                    "0x0069"
#define  set_VODMA2_DECOMP2_DATA_READ_Y_reg(data)                                (*((volatile unsigned int*)VODMA2_DECOMP2_DATA_READ_Y_reg)=data)
#define  get_VODMA2_DECOMP2_DATA_READ_Y_reg                                      (*((volatile unsigned int*)VODMA2_DECOMP2_DATA_READ_Y_reg))
#define  VODMA2_DECOMP2_DATA_READ_Y_wrap_y_data_read_addr_shift                  (3)
#define  VODMA2_DECOMP2_DATA_READ_Y_wrap_y_data_read_addr_mask                   (0xFFFFFFF8)
#define  VODMA2_DECOMP2_DATA_READ_Y_wrap_y_data_read_addr(data)                  (0xFFFFFFF8&((data)<<3))
#define  VODMA2_DECOMP2_DATA_READ_Y_get_wrap_y_data_read_addr(data)              ((0xFFFFFFF8&(data))>>3)

#define  VODMA2_DECOMP2_DATA_READ_C                                             0x18005A4C
#define  VODMA2_DECOMP2_DATA_READ_C_reg_addr                                     "0xB8005A4C"
#define  VODMA2_DECOMP2_DATA_READ_C_reg                                          0xB8005A4C
#define  VODMA2_DECOMP2_DATA_READ_C_inst_addr                                    "0x006A"
#define  set_VODMA2_DECOMP2_DATA_READ_C_reg(data)                                (*((volatile unsigned int*)VODMA2_DECOMP2_DATA_READ_C_reg)=data)
#define  get_VODMA2_DECOMP2_DATA_READ_C_reg                                      (*((volatile unsigned int*)VODMA2_DECOMP2_DATA_READ_C_reg))
#define  VODMA2_DECOMP2_DATA_READ_C_wrap_c_data_read_addr_shift                  (3)
#define  VODMA2_DECOMP2_DATA_READ_C_wrap_c_data_read_addr_mask                   (0xFFFFFFF8)
#define  VODMA2_DECOMP2_DATA_READ_C_wrap_c_data_read_addr(data)                  (0xFFFFFFF8&((data)<<3))
#define  VODMA2_DECOMP2_DATA_READ_C_get_wrap_c_data_read_addr(data)              ((0xFFFFFFF8&(data))>>3)

#define  VODMA2_DECOMP2_DATA_Y_LINE_STEP                                        0x18005A50
#define  VODMA2_DECOMP2_DATA_Y_LINE_STEP_reg_addr                                "0xB8005A50"
#define  VODMA2_DECOMP2_DATA_Y_LINE_STEP_reg                                     0xB8005A50
#define  VODMA2_DECOMP2_DATA_Y_LINE_STEP_inst_addr                               "0x006B"
#define  set_VODMA2_DECOMP2_DATA_Y_LINE_STEP_reg(data)                           (*((volatile unsigned int*)VODMA2_DECOMP2_DATA_Y_LINE_STEP_reg)=data)
#define  get_VODMA2_DECOMP2_DATA_Y_LINE_STEP_reg                                 (*((volatile unsigned int*)VODMA2_DECOMP2_DATA_Y_LINE_STEP_reg))
#define  VODMA2_DECOMP2_DATA_Y_LINE_STEP_wrap_y_data_line_step_shift             (3)
#define  VODMA2_DECOMP2_DATA_Y_LINE_STEP_wrap_y_data_line_step_mask              (0xFFFFFFF8)
#define  VODMA2_DECOMP2_DATA_Y_LINE_STEP_wrap_y_data_line_step(data)             (0xFFFFFFF8&((data)<<3))
#define  VODMA2_DECOMP2_DATA_Y_LINE_STEP_get_wrap_y_data_line_step(data)         ((0xFFFFFFF8&(data))>>3)

#define  VODMA2_DECOMP2_DATA_C_LINE_STEP                                        0x18005A54
#define  VODMA2_DECOMP2_DATA_C_LINE_STEP_reg_addr                                "0xB8005A54"
#define  VODMA2_DECOMP2_DATA_C_LINE_STEP_reg                                     0xB8005A54
#define  VODMA2_DECOMP2_DATA_C_LINE_STEP_inst_addr                               "0x006C"
#define  set_VODMA2_DECOMP2_DATA_C_LINE_STEP_reg(data)                           (*((volatile unsigned int*)VODMA2_DECOMP2_DATA_C_LINE_STEP_reg)=data)
#define  get_VODMA2_DECOMP2_DATA_C_LINE_STEP_reg                                 (*((volatile unsigned int*)VODMA2_DECOMP2_DATA_C_LINE_STEP_reg))
#define  VODMA2_DECOMP2_DATA_C_LINE_STEP_wrap_c_data_line_step_shift             (3)
#define  VODMA2_DECOMP2_DATA_C_LINE_STEP_wrap_c_data_line_step_mask              (0xFFFFFFF8)
#define  VODMA2_DECOMP2_DATA_C_LINE_STEP_wrap_c_data_line_step(data)             (0xFFFFFFF8&((data)<<3))
#define  VODMA2_DECOMP2_DATA_C_LINE_STEP_get_wrap_c_data_line_step(data)         ((0xFFFFFFF8&(data))>>3)

#define  VODMA2_decomp2_core_ctrl_0                                             0x18005A58
#define  VODMA2_decomp2_core_ctrl_0_reg_addr                                     "0xB8005A58"
#define  VODMA2_decomp2_core_ctrl_0_reg                                          0xB8005A58
#define  VODMA2_decomp2_core_ctrl_0_inst_addr                                    "0x006D"
#define  set_VODMA2_decomp2_core_ctrl_0_reg(data)                                (*((volatile unsigned int*)VODMA2_decomp2_core_ctrl_0_reg)=data)
#define  get_VODMA2_decomp2_core_ctrl_0_reg                                      (*((volatile unsigned int*)VODMA2_decomp2_core_ctrl_0_reg))
#define  VODMA2_decomp2_core_ctrl_0_qlevel_queue_sel_c_shift                     (16)
#define  VODMA2_decomp2_core_ctrl_0_qlevel_queue_sel_y_shift                     (0)
#define  VODMA2_decomp2_core_ctrl_0_qlevel_queue_sel_c_mask                      (0x00010000)
#define  VODMA2_decomp2_core_ctrl_0_qlevel_queue_sel_y_mask                      (0x00000003)
#define  VODMA2_decomp2_core_ctrl_0_qlevel_queue_sel_c(data)                     (0x00010000&((data)<<16))
#define  VODMA2_decomp2_core_ctrl_0_qlevel_queue_sel_y(data)                     (0x00000003&(data))
#define  VODMA2_decomp2_core_ctrl_0_get_qlevel_queue_sel_c(data)                 ((0x00010000&(data))>>16)
#define  VODMA2_decomp2_core_ctrl_0_get_qlevel_queue_sel_y(data)                 (0x00000003&(data))

#define  VODMA2_DECOMP2_DATA_REORDER_CTRL                                       0x18005A60
#define  VODMA2_DECOMP2_DATA_REORDER_CTRL_reg_addr                               "0xB8005A60"
#define  VODMA2_DECOMP2_DATA_REORDER_CTRL_reg                                    0xB8005A60
#define  VODMA2_DECOMP2_DATA_REORDER_CTRL_inst_addr                              "0x006E"
#define  set_VODMA2_DECOMP2_DATA_REORDER_CTRL_reg(data)                          (*((volatile unsigned int*)VODMA2_DECOMP2_DATA_REORDER_CTRL_reg)=data)
#define  get_VODMA2_DECOMP2_DATA_REORDER_CTRL_reg                                (*((volatile unsigned int*)VODMA2_DECOMP2_DATA_REORDER_CTRL_reg))
#define  VODMA2_DECOMP2_DATA_REORDER_CTRL_real_decomp_10bit_shift                (30)
#define  VODMA2_DECOMP2_DATA_REORDER_CTRL_real_decomp_vend_shift                 (16)
#define  VODMA2_DECOMP2_DATA_REORDER_CTRL_real_decomp_vstart_shift               (0)
#define  VODMA2_DECOMP2_DATA_REORDER_CTRL_real_decomp_10bit_mask                 (0xC0000000)
#define  VODMA2_DECOMP2_DATA_REORDER_CTRL_real_decomp_vend_mask                  (0x0FFF0000)
#define  VODMA2_DECOMP2_DATA_REORDER_CTRL_real_decomp_vstart_mask                (0x00000FFF)
#define  VODMA2_DECOMP2_DATA_REORDER_CTRL_real_decomp_10bit(data)                (0xC0000000&((data)<<30))
#define  VODMA2_DECOMP2_DATA_REORDER_CTRL_real_decomp_vend(data)                 (0x0FFF0000&((data)<<16))
#define  VODMA2_DECOMP2_DATA_REORDER_CTRL_real_decomp_vstart(data)               (0x00000FFF&(data))
#define  VODMA2_DECOMP2_DATA_REORDER_CTRL_get_real_decomp_10bit(data)            ((0xC0000000&(data))>>30)
#define  VODMA2_DECOMP2_DATA_REORDER_CTRL_get_real_decomp_vend(data)             ((0x0FFF0000&(data))>>16)
#define  VODMA2_DECOMP2_DATA_REORDER_CTRL_get_real_decomp_vstart(data)           (0x00000FFF&(data))

#define  VODMA2_DECOMP2_HD_4LINE_STEP                                           0x18005A64
#define  VODMA2_DECOMP2_HD_4LINE_STEP_reg_addr                                   "0xB8005A64"
#define  VODMA2_DECOMP2_HD_4LINE_STEP_reg                                        0xB8005A64
#define  VODMA2_DECOMP2_HD_4LINE_STEP_inst_addr                                  "0x006F"
#define  set_VODMA2_DECOMP2_HD_4LINE_STEP_reg(data)                              (*((volatile unsigned int*)VODMA2_DECOMP2_HD_4LINE_STEP_reg)=data)
#define  get_VODMA2_DECOMP2_HD_4LINE_STEP_reg                                    (*((volatile unsigned int*)VODMA2_DECOMP2_HD_4LINE_STEP_reg))
#define  VODMA2_DECOMP2_HD_4LINE_STEP_oldmode_hd_4line_step_shift                (0)
#define  VODMA2_DECOMP2_HD_4LINE_STEP_oldmode_hd_4line_step_mask                 (0x000000FF)
#define  VODMA2_DECOMP2_HD_4LINE_STEP_oldmode_hd_4line_step(data)                (0x000000FF&(data))
#define  VODMA2_DECOMP2_HD_4LINE_STEP_get_oldmode_hd_4line_step(data)            (0x000000FF&(data))

#define  VODMA2_DECOMP2_BIST_MODE                                               0x18005A70
#define  VODMA2_DECOMP2_BIST_MODE_reg_addr                                       "0xB8005A70"
#define  VODMA2_DECOMP2_BIST_MODE_reg                                            0xB8005A70
#define  VODMA2_DECOMP2_BIST_MODE_inst_addr                                      "0x0070"
#define  set_VODMA2_DECOMP2_BIST_MODE_reg(data)                                  (*((volatile unsigned int*)VODMA2_DECOMP2_BIST_MODE_reg)=data)
#define  get_VODMA2_DECOMP2_BIST_MODE_reg                                        (*((volatile unsigned int*)VODMA2_DECOMP2_BIST_MODE_reg))
#define  VODMA2_DECOMP2_BIST_MODE_decomp_bist_1_mode_shift                       (1)
#define  VODMA2_DECOMP2_BIST_MODE_decomp_bist_0_mode_shift                       (0)
#define  VODMA2_DECOMP2_BIST_MODE_decomp_bist_1_mode_mask                        (0x00000002)
#define  VODMA2_DECOMP2_BIST_MODE_decomp_bist_0_mode_mask                        (0x00000001)
#define  VODMA2_DECOMP2_BIST_MODE_decomp_bist_1_mode(data)                       (0x00000002&((data)<<1))
#define  VODMA2_DECOMP2_BIST_MODE_decomp_bist_0_mode(data)                       (0x00000001&(data))
#define  VODMA2_DECOMP2_BIST_MODE_get_decomp_bist_1_mode(data)                   ((0x00000002&(data))>>1)
#define  VODMA2_DECOMP2_BIST_MODE_get_decomp_bist_0_mode(data)                   (0x00000001&(data))

#define  VODMA2_DECOMP2_BIST_DONE                                               0x18005A74
#define  VODMA2_DECOMP2_BIST_DONE_reg_addr                                       "0xB8005A74"
#define  VODMA2_DECOMP2_BIST_DONE_reg                                            0xB8005A74
#define  VODMA2_DECOMP2_BIST_DONE_inst_addr                                      "0x0071"
#define  set_VODMA2_DECOMP2_BIST_DONE_reg(data)                                  (*((volatile unsigned int*)VODMA2_DECOMP2_BIST_DONE_reg)=data)
#define  get_VODMA2_DECOMP2_BIST_DONE_reg                                        (*((volatile unsigned int*)VODMA2_DECOMP2_BIST_DONE_reg))
#define  VODMA2_DECOMP2_BIST_DONE_decomp_bist_1_done_shift                       (1)
#define  VODMA2_DECOMP2_BIST_DONE_decomp_bist_0_done_shift                       (0)
#define  VODMA2_DECOMP2_BIST_DONE_decomp_bist_1_done_mask                        (0x00000002)
#define  VODMA2_DECOMP2_BIST_DONE_decomp_bist_0_done_mask                        (0x00000001)
#define  VODMA2_DECOMP2_BIST_DONE_decomp_bist_1_done(data)                       (0x00000002&((data)<<1))
#define  VODMA2_DECOMP2_BIST_DONE_decomp_bist_0_done(data)                       (0x00000001&(data))
#define  VODMA2_DECOMP2_BIST_DONE_get_decomp_bist_1_done(data)                   ((0x00000002&(data))>>1)
#define  VODMA2_DECOMP2_BIST_DONE_get_decomp_bist_0_done(data)                   (0x00000001&(data))

#define  VODMA2_DECOMP2_BIST_FAIL_GROUP                                         0x18005A78
#define  VODMA2_DECOMP2_BIST_FAIL_GROUP_reg_addr                                 "0xB8005A78"
#define  VODMA2_DECOMP2_BIST_FAIL_GROUP_reg                                      0xB8005A78
#define  VODMA2_DECOMP2_BIST_FAIL_GROUP_inst_addr                                "0x0072"
#define  set_VODMA2_DECOMP2_BIST_FAIL_GROUP_reg(data)                            (*((volatile unsigned int*)VODMA2_DECOMP2_BIST_FAIL_GROUP_reg)=data)
#define  get_VODMA2_DECOMP2_BIST_FAIL_GROUP_reg                                  (*((volatile unsigned int*)VODMA2_DECOMP2_BIST_FAIL_GROUP_reg))
#define  VODMA2_DECOMP2_BIST_FAIL_GROUP_decomp_bist_fail_1_group_shift           (1)
#define  VODMA2_DECOMP2_BIST_FAIL_GROUP_decomp_bist_fail_0_group_shift           (0)
#define  VODMA2_DECOMP2_BIST_FAIL_GROUP_decomp_bist_fail_1_group_mask            (0x00000002)
#define  VODMA2_DECOMP2_BIST_FAIL_GROUP_decomp_bist_fail_0_group_mask            (0x00000001)
#define  VODMA2_DECOMP2_BIST_FAIL_GROUP_decomp_bist_fail_1_group(data)           (0x00000002&((data)<<1))
#define  VODMA2_DECOMP2_BIST_FAIL_GROUP_decomp_bist_fail_0_group(data)           (0x00000001&(data))
#define  VODMA2_DECOMP2_BIST_FAIL_GROUP_get_decomp_bist_fail_1_group(data)       ((0x00000002&(data))>>1)
#define  VODMA2_DECOMP2_BIST_FAIL_GROUP_get_decomp_bist_fail_0_group(data)       (0x00000001&(data))

#define  VODMA2_DECOMP2_DRF_MODE                                                0x18005A7C
#define  VODMA2_DECOMP2_DRF_MODE_reg_addr                                        "0xB8005A7C"
#define  VODMA2_DECOMP2_DRF_MODE_reg                                             0xB8005A7C
#define  VODMA2_DECOMP2_DRF_MODE_inst_addr                                       "0x0073"
#define  set_VODMA2_DECOMP2_DRF_MODE_reg(data)                                   (*((volatile unsigned int*)VODMA2_DECOMP2_DRF_MODE_reg)=data)
#define  get_VODMA2_DECOMP2_DRF_MODE_reg                                         (*((volatile unsigned int*)VODMA2_DECOMP2_DRF_MODE_reg))
#define  VODMA2_DECOMP2_DRF_MODE_decomp_drf_1_mode_shift                         (1)
#define  VODMA2_DECOMP2_DRF_MODE_decomp_drf_0_mode_shift                         (0)
#define  VODMA2_DECOMP2_DRF_MODE_decomp_drf_1_mode_mask                          (0x00000002)
#define  VODMA2_DECOMP2_DRF_MODE_decomp_drf_0_mode_mask                          (0x00000001)
#define  VODMA2_DECOMP2_DRF_MODE_decomp_drf_1_mode(data)                         (0x00000002&((data)<<1))
#define  VODMA2_DECOMP2_DRF_MODE_decomp_drf_0_mode(data)                         (0x00000001&(data))
#define  VODMA2_DECOMP2_DRF_MODE_get_decomp_drf_1_mode(data)                     ((0x00000002&(data))>>1)
#define  VODMA2_DECOMP2_DRF_MODE_get_decomp_drf_0_mode(data)                     (0x00000001&(data))

#define  VODMA2_DECOMP2_DRF_RESUME                                              0x18005A80
#define  VODMA2_DECOMP2_DRF_RESUME_reg_addr                                      "0xB8005A80"
#define  VODMA2_DECOMP2_DRF_RESUME_reg                                           0xB8005A80
#define  VODMA2_DECOMP2_DRF_RESUME_inst_addr                                     "0x0074"
#define  set_VODMA2_DECOMP2_DRF_RESUME_reg(data)                                 (*((volatile unsigned int*)VODMA2_DECOMP2_DRF_RESUME_reg)=data)
#define  get_VODMA2_DECOMP2_DRF_RESUME_reg                                       (*((volatile unsigned int*)VODMA2_DECOMP2_DRF_RESUME_reg))
#define  VODMA2_DECOMP2_DRF_RESUME_decomp_drf_1_resume_shift                     (1)
#define  VODMA2_DECOMP2_DRF_RESUME_decomp_drf_0_resume_shift                     (0)
#define  VODMA2_DECOMP2_DRF_RESUME_decomp_drf_1_resume_mask                      (0x00000002)
#define  VODMA2_DECOMP2_DRF_RESUME_decomp_drf_0_resume_mask                      (0x00000001)
#define  VODMA2_DECOMP2_DRF_RESUME_decomp_drf_1_resume(data)                     (0x00000002&((data)<<1))
#define  VODMA2_DECOMP2_DRF_RESUME_decomp_drf_0_resume(data)                     (0x00000001&(data))
#define  VODMA2_DECOMP2_DRF_RESUME_get_decomp_drf_1_resume(data)                 ((0x00000002&(data))>>1)
#define  VODMA2_DECOMP2_DRF_RESUME_get_decomp_drf_0_resume(data)                 (0x00000001&(data))

#define  VODMA2_DECOMP2_DRF_DONE                                                0x18005A84
#define  VODMA2_DECOMP2_DRF_DONE_reg_addr                                        "0xB8005A84"
#define  VODMA2_DECOMP2_DRF_DONE_reg                                             0xB8005A84
#define  VODMA2_DECOMP2_DRF_DONE_inst_addr                                       "0x0075"
#define  set_VODMA2_DECOMP2_DRF_DONE_reg(data)                                   (*((volatile unsigned int*)VODMA2_DECOMP2_DRF_DONE_reg)=data)
#define  get_VODMA2_DECOMP2_DRF_DONE_reg                                         (*((volatile unsigned int*)VODMA2_DECOMP2_DRF_DONE_reg))
#define  VODMA2_DECOMP2_DRF_DONE_decomp_drf_1_done_shift                         (1)
#define  VODMA2_DECOMP2_DRF_DONE_decomp_drf_0_done_shift                         (0)
#define  VODMA2_DECOMP2_DRF_DONE_decomp_drf_1_done_mask                          (0x00000002)
#define  VODMA2_DECOMP2_DRF_DONE_decomp_drf_0_done_mask                          (0x00000001)
#define  VODMA2_DECOMP2_DRF_DONE_decomp_drf_1_done(data)                         (0x00000002&((data)<<1))
#define  VODMA2_DECOMP2_DRF_DONE_decomp_drf_0_done(data)                         (0x00000001&(data))
#define  VODMA2_DECOMP2_DRF_DONE_get_decomp_drf_1_done(data)                     ((0x00000002&(data))>>1)
#define  VODMA2_DECOMP2_DRF_DONE_get_decomp_drf_0_done(data)                     (0x00000001&(data))

#define  VODMA2_DECOMP2_DRF_PAUSE                                               0x18005A88
#define  VODMA2_DECOMP2_DRF_PAUSE_reg_addr                                       "0xB8005A88"
#define  VODMA2_DECOMP2_DRF_PAUSE_reg                                            0xB8005A88
#define  VODMA2_DECOMP2_DRF_PAUSE_inst_addr                                      "0x0076"
#define  set_VODMA2_DECOMP2_DRF_PAUSE_reg(data)                                  (*((volatile unsigned int*)VODMA2_DECOMP2_DRF_PAUSE_reg)=data)
#define  get_VODMA2_DECOMP2_DRF_PAUSE_reg                                        (*((volatile unsigned int*)VODMA2_DECOMP2_DRF_PAUSE_reg))
#define  VODMA2_DECOMP2_DRF_PAUSE_decomp_drf_1_pause_shift                       (1)
#define  VODMA2_DECOMP2_DRF_PAUSE_decomp_drf_0_pause_shift                       (0)
#define  VODMA2_DECOMP2_DRF_PAUSE_decomp_drf_1_pause_mask                        (0x00000002)
#define  VODMA2_DECOMP2_DRF_PAUSE_decomp_drf_0_pause_mask                        (0x00000001)
#define  VODMA2_DECOMP2_DRF_PAUSE_decomp_drf_1_pause(data)                       (0x00000002&((data)<<1))
#define  VODMA2_DECOMP2_DRF_PAUSE_decomp_drf_0_pause(data)                       (0x00000001&(data))
#define  VODMA2_DECOMP2_DRF_PAUSE_get_decomp_drf_1_pause(data)                   ((0x00000002&(data))>>1)
#define  VODMA2_DECOMP2_DRF_PAUSE_get_decomp_drf_0_pause(data)                   (0x00000001&(data))

#define  VODMA2_DECOMP2_DRF_FAIL_GROUP                                          0x18005A8C
#define  VODMA2_DECOMP2_DRF_FAIL_GROUP_reg_addr                                  "0xB8005A8C"
#define  VODMA2_DECOMP2_DRF_FAIL_GROUP_reg                                       0xB8005A8C
#define  VODMA2_DECOMP2_DRF_FAIL_GROUP_inst_addr                                 "0x0077"
#define  set_VODMA2_DECOMP2_DRF_FAIL_GROUP_reg(data)                             (*((volatile unsigned int*)VODMA2_DECOMP2_DRF_FAIL_GROUP_reg)=data)
#define  get_VODMA2_DECOMP2_DRF_FAIL_GROUP_reg                                   (*((volatile unsigned int*)VODMA2_DECOMP2_DRF_FAIL_GROUP_reg))
#define  VODMA2_DECOMP2_DRF_FAIL_GROUP_decomp_drf_fail_1_group_shift             (1)
#define  VODMA2_DECOMP2_DRF_FAIL_GROUP_decomp_drf_fail_0_group_shift             (0)
#define  VODMA2_DECOMP2_DRF_FAIL_GROUP_decomp_drf_fail_1_group_mask              (0x00000002)
#define  VODMA2_DECOMP2_DRF_FAIL_GROUP_decomp_drf_fail_0_group_mask              (0x00000001)
#define  VODMA2_DECOMP2_DRF_FAIL_GROUP_decomp_drf_fail_1_group(data)             (0x00000002&((data)<<1))
#define  VODMA2_DECOMP2_DRF_FAIL_GROUP_decomp_drf_fail_0_group(data)             (0x00000001&(data))
#define  VODMA2_DECOMP2_DRF_FAIL_GROUP_get_decomp_drf_fail_1_group(data)         ((0x00000002&(data))>>1)
#define  VODMA2_DECOMP2_DRF_FAIL_GROUP_get_decomp_drf_fail_0_group(data)         (0x00000001&(data))

#define  VODMA2_decomp2_MBIST_FAIL                                              0x18005A90
#define  VODMA2_decomp2_MBIST_FAIL_reg_addr                                      "0xB8005A90"
#define  VODMA2_decomp2_MBIST_FAIL_reg                                           0xB8005A90
#define  VODMA2_decomp2_MBIST_FAIL_inst_addr                                     "0x0078"
#define  set_VODMA2_decomp2_MBIST_FAIL_reg(data)                                 (*((volatile unsigned int*)VODMA2_decomp2_MBIST_FAIL_reg)=data)
#define  get_VODMA2_decomp2_MBIST_FAIL_reg                                       (*((volatile unsigned int*)VODMA2_decomp2_MBIST_FAIL_reg))
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_1_4_shift                           (9)
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_1_3_shift                           (8)
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_1_2_shift                           (7)
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_1_1_shift                           (6)
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_1_0_shift                           (5)
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_0_4_shift                           (4)
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_0_3_shift                           (3)
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_0_2_shift                           (2)
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_0_1_shift                           (1)
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_0_0_shift                           (0)
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_1_4_mask                            (0x00000200)
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_1_3_mask                            (0x00000100)
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_1_2_mask                            (0x00000080)
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_1_1_mask                            (0x00000040)
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_1_0_mask                            (0x00000020)
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_0_4_mask                            (0x00000010)
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_0_3_mask                            (0x00000008)
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_0_2_mask                            (0x00000004)
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_0_1_mask                            (0x00000002)
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_0_0_mask                            (0x00000001)
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_1_4(data)                           (0x00000200&((data)<<9))
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_1_3(data)                           (0x00000100&((data)<<8))
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_1_2(data)                           (0x00000080&((data)<<7))
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_1_1(data)                           (0x00000040&((data)<<6))
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_1_0(data)                           (0x00000020&((data)<<5))
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_0_4(data)                           (0x00000010&((data)<<4))
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_0_3(data)                           (0x00000008&((data)<<3))
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_0_2(data)                           (0x00000004&((data)<<2))
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_0_1(data)                           (0x00000002&((data)<<1))
#define  VODMA2_decomp2_MBIST_FAIL_bist_fail_0_0(data)                           (0x00000001&(data))
#define  VODMA2_decomp2_MBIST_FAIL_get_bist_fail_1_4(data)                       ((0x00000200&(data))>>9)
#define  VODMA2_decomp2_MBIST_FAIL_get_bist_fail_1_3(data)                       ((0x00000100&(data))>>8)
#define  VODMA2_decomp2_MBIST_FAIL_get_bist_fail_1_2(data)                       ((0x00000080&(data))>>7)
#define  VODMA2_decomp2_MBIST_FAIL_get_bist_fail_1_1(data)                       ((0x00000040&(data))>>6)
#define  VODMA2_decomp2_MBIST_FAIL_get_bist_fail_1_0(data)                       ((0x00000020&(data))>>5)
#define  VODMA2_decomp2_MBIST_FAIL_get_bist_fail_0_4(data)                       ((0x00000010&(data))>>4)
#define  VODMA2_decomp2_MBIST_FAIL_get_bist_fail_0_3(data)                       ((0x00000008&(data))>>3)
#define  VODMA2_decomp2_MBIST_FAIL_get_bist_fail_0_2(data)                       ((0x00000004&(data))>>2)
#define  VODMA2_decomp2_MBIST_FAIL_get_bist_fail_0_1(data)                       ((0x00000002&(data))>>1)
#define  VODMA2_decomp2_MBIST_FAIL_get_bist_fail_0_0(data)                       (0x00000001&(data))

#define  VODMA2_decomp2_MBIST_DRF_FAIL                                          0x18005A94
#define  VODMA2_decomp2_MBIST_DRF_FAIL_reg_addr                                  "0xB8005A94"
#define  VODMA2_decomp2_MBIST_DRF_FAIL_reg                                       0xB8005A94
#define  VODMA2_decomp2_MBIST_DRF_FAIL_inst_addr                                 "0x0079"
#define  set_VODMA2_decomp2_MBIST_DRF_FAIL_reg(data)                             (*((volatile unsigned int*)VODMA2_decomp2_MBIST_DRF_FAIL_reg)=data)
#define  get_VODMA2_decomp2_MBIST_DRF_FAIL_reg                                   (*((volatile unsigned int*)VODMA2_decomp2_MBIST_DRF_FAIL_reg))
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_1_4_shift                   (9)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_1_3_shift                   (8)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_1_2_shift                   (7)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_1_1_shift                   (6)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_1_0_shift                   (5)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_0_4_shift                   (4)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_0_3_shift                   (3)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_0_2_shift                   (2)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_0_1_shift                   (1)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_0_0_shift                   (0)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_1_4_mask                    (0x00000200)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_1_3_mask                    (0x00000100)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_1_2_mask                    (0x00000080)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_1_1_mask                    (0x00000040)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_1_0_mask                    (0x00000020)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_0_4_mask                    (0x00000010)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_0_3_mask                    (0x00000008)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_0_2_mask                    (0x00000004)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_0_1_mask                    (0x00000002)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_0_0_mask                    (0x00000001)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_1_4(data)                   (0x00000200&((data)<<9))
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_1_3(data)                   (0x00000100&((data)<<8))
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_1_2(data)                   (0x00000080&((data)<<7))
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_1_1(data)                   (0x00000040&((data)<<6))
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_1_0(data)                   (0x00000020&((data)<<5))
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_0_4(data)                   (0x00000010&((data)<<4))
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_0_3(data)                   (0x00000008&((data)<<3))
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_0_2(data)                   (0x00000004&((data)<<2))
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_0_1(data)                   (0x00000002&((data)<<1))
#define  VODMA2_decomp2_MBIST_DRF_FAIL_drf_bist_fail_0_0(data)                   (0x00000001&(data))
#define  VODMA2_decomp2_MBIST_DRF_FAIL_get_drf_bist_fail_1_4(data)               ((0x00000200&(data))>>9)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_get_drf_bist_fail_1_3(data)               ((0x00000100&(data))>>8)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_get_drf_bist_fail_1_2(data)               ((0x00000080&(data))>>7)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_get_drf_bist_fail_1_1(data)               ((0x00000040&(data))>>6)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_get_drf_bist_fail_1_0(data)               ((0x00000020&(data))>>5)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_get_drf_bist_fail_0_4(data)               ((0x00000010&(data))>>4)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_get_drf_bist_fail_0_3(data)               ((0x00000008&(data))>>3)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_get_drf_bist_fail_0_2(data)               ((0x00000004&(data))>>2)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_get_drf_bist_fail_0_1(data)               ((0x00000002&(data))>>1)
#define  VODMA2_decomp2_MBIST_DRF_FAIL_get_drf_bist_fail_0_0(data)               (0x00000001&(data))

#define  VODMA2_decomp2_MBIST_LS                                                0x18005A98
#define  VODMA2_decomp2_MBIST_LS_reg_addr                                        "0xB8005A98"
#define  VODMA2_decomp2_MBIST_LS_reg                                             0xB8005A98
#define  VODMA2_decomp2_MBIST_LS_inst_addr                                       "0x007A"
#define  set_VODMA2_decomp2_MBIST_LS_reg(data)                                   (*((volatile unsigned int*)VODMA2_decomp2_MBIST_LS_reg)=data)
#define  get_VODMA2_decomp2_MBIST_LS_reg                                         (*((volatile unsigned int*)VODMA2_decomp2_MBIST_LS_reg))
#define  VODMA2_decomp2_MBIST_LS_ls_1_4_shift                                    (9)
#define  VODMA2_decomp2_MBIST_LS_ls_1_3_shift                                    (8)
#define  VODMA2_decomp2_MBIST_LS_ls_1_2_shift                                    (7)
#define  VODMA2_decomp2_MBIST_LS_ls_1_1_shift                                    (6)
#define  VODMA2_decomp2_MBIST_LS_ls_1_0_shift                                    (5)
#define  VODMA2_decomp2_MBIST_LS_ls_0_4_shift                                    (4)
#define  VODMA2_decomp2_MBIST_LS_ls_0_3_shift                                    (3)
#define  VODMA2_decomp2_MBIST_LS_ls_0_2_shift                                    (2)
#define  VODMA2_decomp2_MBIST_LS_ls_0_1_shift                                    (1)
#define  VODMA2_decomp2_MBIST_LS_ls_0_0_shift                                    (0)
#define  VODMA2_decomp2_MBIST_LS_ls_1_4_mask                                     (0x00000200)
#define  VODMA2_decomp2_MBIST_LS_ls_1_3_mask                                     (0x00000100)
#define  VODMA2_decomp2_MBIST_LS_ls_1_2_mask                                     (0x00000080)
#define  VODMA2_decomp2_MBIST_LS_ls_1_1_mask                                     (0x00000040)
#define  VODMA2_decomp2_MBIST_LS_ls_1_0_mask                                     (0x00000020)
#define  VODMA2_decomp2_MBIST_LS_ls_0_4_mask                                     (0x00000010)
#define  VODMA2_decomp2_MBIST_LS_ls_0_3_mask                                     (0x00000008)
#define  VODMA2_decomp2_MBIST_LS_ls_0_2_mask                                     (0x00000004)
#define  VODMA2_decomp2_MBIST_LS_ls_0_1_mask                                     (0x00000002)
#define  VODMA2_decomp2_MBIST_LS_ls_0_0_mask                                     (0x00000001)
#define  VODMA2_decomp2_MBIST_LS_ls_1_4(data)                                    (0x00000200&((data)<<9))
#define  VODMA2_decomp2_MBIST_LS_ls_1_3(data)                                    (0x00000100&((data)<<8))
#define  VODMA2_decomp2_MBIST_LS_ls_1_2(data)                                    (0x00000080&((data)<<7))
#define  VODMA2_decomp2_MBIST_LS_ls_1_1(data)                                    (0x00000040&((data)<<6))
#define  VODMA2_decomp2_MBIST_LS_ls_1_0(data)                                    (0x00000020&((data)<<5))
#define  VODMA2_decomp2_MBIST_LS_ls_0_4(data)                                    (0x00000010&((data)<<4))
#define  VODMA2_decomp2_MBIST_LS_ls_0_3(data)                                    (0x00000008&((data)<<3))
#define  VODMA2_decomp2_MBIST_LS_ls_0_2(data)                                    (0x00000004&((data)<<2))
#define  VODMA2_decomp2_MBIST_LS_ls_0_1(data)                                    (0x00000002&((data)<<1))
#define  VODMA2_decomp2_MBIST_LS_ls_0_0(data)                                    (0x00000001&(data))
#define  VODMA2_decomp2_MBIST_LS_get_ls_1_4(data)                                ((0x00000200&(data))>>9)
#define  VODMA2_decomp2_MBIST_LS_get_ls_1_3(data)                                ((0x00000100&(data))>>8)
#define  VODMA2_decomp2_MBIST_LS_get_ls_1_2(data)                                ((0x00000080&(data))>>7)
#define  VODMA2_decomp2_MBIST_LS_get_ls_1_1(data)                                ((0x00000040&(data))>>6)
#define  VODMA2_decomp2_MBIST_LS_get_ls_1_0(data)                                ((0x00000020&(data))>>5)
#define  VODMA2_decomp2_MBIST_LS_get_ls_0_4(data)                                ((0x00000010&(data))>>4)
#define  VODMA2_decomp2_MBIST_LS_get_ls_0_3(data)                                ((0x00000008&(data))>>3)
#define  VODMA2_decomp2_MBIST_LS_get_ls_0_2(data)                                ((0x00000004&(data))>>2)
#define  VODMA2_decomp2_MBIST_LS_get_ls_0_1(data)                                ((0x00000002&(data))>>1)
#define  VODMA2_decomp2_MBIST_LS_get_ls_0_0(data)                                (0x00000001&(data))

#define  VODMA2_decomp2_MBIST_RM_0                                              0x18005A9C
#define  VODMA2_decomp2_MBIST_RM_0_reg_addr                                      "0xB8005A9C"
#define  VODMA2_decomp2_MBIST_RM_0_reg                                           0xB8005A9C
#define  VODMA2_decomp2_MBIST_RM_0_inst_addr                                     "0x007B"
#define  set_VODMA2_decomp2_MBIST_RM_0_reg(data)                                 (*((volatile unsigned int*)VODMA2_decomp2_MBIST_RM_0_reg)=data)
#define  get_VODMA2_decomp2_MBIST_RM_0_reg                                       (*((volatile unsigned int*)VODMA2_decomp2_MBIST_RM_0_reg))
#define  VODMA2_decomp2_MBIST_RM_0_rm_0_4_shift                                  (16)
#define  VODMA2_decomp2_MBIST_RM_0_rm_0_3_shift                                  (12)
#define  VODMA2_decomp2_MBIST_RM_0_rm_0_2_shift                                  (8)
#define  VODMA2_decomp2_MBIST_RM_0_rm_0_1_shift                                  (4)
#define  VODMA2_decomp2_MBIST_RM_0_rm_0_0_shift                                  (0)
#define  VODMA2_decomp2_MBIST_RM_0_rm_0_4_mask                                   (0x000F0000)
#define  VODMA2_decomp2_MBIST_RM_0_rm_0_3_mask                                   (0x0000F000)
#define  VODMA2_decomp2_MBIST_RM_0_rm_0_2_mask                                   (0x00000F00)
#define  VODMA2_decomp2_MBIST_RM_0_rm_0_1_mask                                   (0x000000F0)
#define  VODMA2_decomp2_MBIST_RM_0_rm_0_0_mask                                   (0x0000000F)
#define  VODMA2_decomp2_MBIST_RM_0_rm_0_4(data)                                  (0x000F0000&((data)<<16))
#define  VODMA2_decomp2_MBIST_RM_0_rm_0_3(data)                                  (0x0000F000&((data)<<12))
#define  VODMA2_decomp2_MBIST_RM_0_rm_0_2(data)                                  (0x00000F00&((data)<<8))
#define  VODMA2_decomp2_MBIST_RM_0_rm_0_1(data)                                  (0x000000F0&((data)<<4))
#define  VODMA2_decomp2_MBIST_RM_0_rm_0_0(data)                                  (0x0000000F&(data))
#define  VODMA2_decomp2_MBIST_RM_0_get_rm_0_4(data)                              ((0x000F0000&(data))>>16)
#define  VODMA2_decomp2_MBIST_RM_0_get_rm_0_3(data)                              ((0x0000F000&(data))>>12)
#define  VODMA2_decomp2_MBIST_RM_0_get_rm_0_2(data)                              ((0x00000F00&(data))>>8)
#define  VODMA2_decomp2_MBIST_RM_0_get_rm_0_1(data)                              ((0x000000F0&(data))>>4)
#define  VODMA2_decomp2_MBIST_RM_0_get_rm_0_0(data)                              (0x0000000F&(data))

#define  VODMA2_decomp2_MBIST_RM_1                                              0x18005AA0
#define  VODMA2_decomp2_MBIST_RM_1_reg_addr                                      "0xB8005AA0"
#define  VODMA2_decomp2_MBIST_RM_1_reg                                           0xB8005AA0
#define  VODMA2_decomp2_MBIST_RM_1_inst_addr                                     "0x007C"
#define  set_VODMA2_decomp2_MBIST_RM_1_reg(data)                                 (*((volatile unsigned int*)VODMA2_decomp2_MBIST_RM_1_reg)=data)
#define  get_VODMA2_decomp2_MBIST_RM_1_reg                                       (*((volatile unsigned int*)VODMA2_decomp2_MBIST_RM_1_reg))
#define  VODMA2_decomp2_MBIST_RM_1_rm_1_4_shift                                  (16)
#define  VODMA2_decomp2_MBIST_RM_1_rm_1_3_shift                                  (12)
#define  VODMA2_decomp2_MBIST_RM_1_rm_1_2_shift                                  (8)
#define  VODMA2_decomp2_MBIST_RM_1_rm_1_1_shift                                  (4)
#define  VODMA2_decomp2_MBIST_RM_1_rm_1_0_shift                                  (0)
#define  VODMA2_decomp2_MBIST_RM_1_rm_1_4_mask                                   (0x000F0000)
#define  VODMA2_decomp2_MBIST_RM_1_rm_1_3_mask                                   (0x0000F000)
#define  VODMA2_decomp2_MBIST_RM_1_rm_1_2_mask                                   (0x00000F00)
#define  VODMA2_decomp2_MBIST_RM_1_rm_1_1_mask                                   (0x000000F0)
#define  VODMA2_decomp2_MBIST_RM_1_rm_1_0_mask                                   (0x0000000F)
#define  VODMA2_decomp2_MBIST_RM_1_rm_1_4(data)                                  (0x000F0000&((data)<<16))
#define  VODMA2_decomp2_MBIST_RM_1_rm_1_3(data)                                  (0x0000F000&((data)<<12))
#define  VODMA2_decomp2_MBIST_RM_1_rm_1_2(data)                                  (0x00000F00&((data)<<8))
#define  VODMA2_decomp2_MBIST_RM_1_rm_1_1(data)                                  (0x000000F0&((data)<<4))
#define  VODMA2_decomp2_MBIST_RM_1_rm_1_0(data)                                  (0x0000000F&(data))
#define  VODMA2_decomp2_MBIST_RM_1_get_rm_1_4(data)                              ((0x000F0000&(data))>>16)
#define  VODMA2_decomp2_MBIST_RM_1_get_rm_1_3(data)                              ((0x0000F000&(data))>>12)
#define  VODMA2_decomp2_MBIST_RM_1_get_rm_1_2(data)                              ((0x00000F00&(data))>>8)
#define  VODMA2_decomp2_MBIST_RM_1_get_rm_1_1(data)                              ((0x000000F0&(data))>>4)
#define  VODMA2_decomp2_MBIST_RM_1_get_rm_1_0(data)                              (0x0000000F&(data))

#define  VODMA2_decomp2_MBIST_RME                                               0x18005AA4
#define  VODMA2_decomp2_MBIST_RME_reg_addr                                       "0xB8005AA4"
#define  VODMA2_decomp2_MBIST_RME_reg                                            0xB8005AA4
#define  VODMA2_decomp2_MBIST_RME_inst_addr                                      "0x007D"
#define  set_VODMA2_decomp2_MBIST_RME_reg(data)                                  (*((volatile unsigned int*)VODMA2_decomp2_MBIST_RME_reg)=data)
#define  get_VODMA2_decomp2_MBIST_RME_reg                                        (*((volatile unsigned int*)VODMA2_decomp2_MBIST_RME_reg))
#define  VODMA2_decomp2_MBIST_RME_rme_1_4_shift                                  (9)
#define  VODMA2_decomp2_MBIST_RME_rme_1_3_shift                                  (8)
#define  VODMA2_decomp2_MBIST_RME_rme_1_2_shift                                  (7)
#define  VODMA2_decomp2_MBIST_RME_rme_1_1_shift                                  (6)
#define  VODMA2_decomp2_MBIST_RME_rme_1_0_shift                                  (5)
#define  VODMA2_decomp2_MBIST_RME_rme_0_4_shift                                  (4)
#define  VODMA2_decomp2_MBIST_RME_rme_0_3_shift                                  (3)
#define  VODMA2_decomp2_MBIST_RME_rme_0_2_shift                                  (2)
#define  VODMA2_decomp2_MBIST_RME_rme_0_1_shift                                  (1)
#define  VODMA2_decomp2_MBIST_RME_rme_0_0_shift                                  (0)
#define  VODMA2_decomp2_MBIST_RME_rme_1_4_mask                                   (0x00000200)
#define  VODMA2_decomp2_MBIST_RME_rme_1_3_mask                                   (0x00000100)
#define  VODMA2_decomp2_MBIST_RME_rme_1_2_mask                                   (0x00000080)
#define  VODMA2_decomp2_MBIST_RME_rme_1_1_mask                                   (0x00000040)
#define  VODMA2_decomp2_MBIST_RME_rme_1_0_mask                                   (0x00000020)
#define  VODMA2_decomp2_MBIST_RME_rme_0_4_mask                                   (0x00000010)
#define  VODMA2_decomp2_MBIST_RME_rme_0_3_mask                                   (0x00000008)
#define  VODMA2_decomp2_MBIST_RME_rme_0_2_mask                                   (0x00000004)
#define  VODMA2_decomp2_MBIST_RME_rme_0_1_mask                                   (0x00000002)
#define  VODMA2_decomp2_MBIST_RME_rme_0_0_mask                                   (0x00000001)
#define  VODMA2_decomp2_MBIST_RME_rme_1_4(data)                                  (0x00000200&((data)<<9))
#define  VODMA2_decomp2_MBIST_RME_rme_1_3(data)                                  (0x00000100&((data)<<8))
#define  VODMA2_decomp2_MBIST_RME_rme_1_2(data)                                  (0x00000080&((data)<<7))
#define  VODMA2_decomp2_MBIST_RME_rme_1_1(data)                                  (0x00000040&((data)<<6))
#define  VODMA2_decomp2_MBIST_RME_rme_1_0(data)                                  (0x00000020&((data)<<5))
#define  VODMA2_decomp2_MBIST_RME_rme_0_4(data)                                  (0x00000010&((data)<<4))
#define  VODMA2_decomp2_MBIST_RME_rme_0_3(data)                                  (0x00000008&((data)<<3))
#define  VODMA2_decomp2_MBIST_RME_rme_0_2(data)                                  (0x00000004&((data)<<2))
#define  VODMA2_decomp2_MBIST_RME_rme_0_1(data)                                  (0x00000002&((data)<<1))
#define  VODMA2_decomp2_MBIST_RME_rme_0_0(data)                                  (0x00000001&(data))
#define  VODMA2_decomp2_MBIST_RME_get_rme_1_4(data)                              ((0x00000200&(data))>>9)
#define  VODMA2_decomp2_MBIST_RME_get_rme_1_3(data)                              ((0x00000100&(data))>>8)
#define  VODMA2_decomp2_MBIST_RME_get_rme_1_2(data)                              ((0x00000080&(data))>>7)
#define  VODMA2_decomp2_MBIST_RME_get_rme_1_1(data)                              ((0x00000040&(data))>>6)
#define  VODMA2_decomp2_MBIST_RME_get_rme_1_0(data)                              ((0x00000020&(data))>>5)
#define  VODMA2_decomp2_MBIST_RME_get_rme_0_4(data)                              ((0x00000010&(data))>>4)
#define  VODMA2_decomp2_MBIST_RME_get_rme_0_3(data)                              ((0x00000008&(data))>>3)
#define  VODMA2_decomp2_MBIST_RME_get_rme_0_2(data)                              ((0x00000004&(data))>>2)
#define  VODMA2_decomp2_MBIST_RME_get_rme_0_1(data)                              ((0x00000002&(data))>>1)
#define  VODMA2_decomp2_MBIST_RME_get_rme_0_0(data)                              (0x00000001&(data))

#define  VODMA2_VODMA2_PQ_DECMP                                                 0x18005B00
#define  VODMA2_VODMA2_PQ_DECMP_reg_addr                                         "0xB8005B00"
#define  VODMA2_VODMA2_PQ_DECMP_reg                                              0xB8005B00
#define  VODMA2_VODMA2_PQ_DECMP_inst_addr                                        "0x007E"
#define  set_VODMA2_VODMA2_PQ_DECMP_reg(data)                                    (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_reg)=data)
#define  get_VODMA2_VODMA2_PQ_DECMP_reg                                          (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_reg))
#define  VODMA2_VODMA2_PQ_DECMP_decmp_en_shift                                   (31)
#define  VODMA2_VODMA2_PQ_DECMP_decmp_width_div32_shift                          (16)
#define  VODMA2_VODMA2_PQ_DECMP_decmp_height_shift                               (0)
#define  VODMA2_VODMA2_PQ_DECMP_decmp_en_mask                                    (0x80000000)
#define  VODMA2_VODMA2_PQ_DECMP_decmp_width_div32_mask                           (0x01FF0000)
#define  VODMA2_VODMA2_PQ_DECMP_decmp_height_mask                                (0x00003FFF)
#define  VODMA2_VODMA2_PQ_DECMP_decmp_en(data)                                   (0x80000000&((data)<<31))
#define  VODMA2_VODMA2_PQ_DECMP_decmp_width_div32(data)                          (0x01FF0000&((data)<<16))
#define  VODMA2_VODMA2_PQ_DECMP_decmp_height(data)                               (0x00003FFF&(data))
#define  VODMA2_VODMA2_PQ_DECMP_get_decmp_en(data)                               ((0x80000000&(data))>>31)
#define  VODMA2_VODMA2_PQ_DECMP_get_decmp_width_div32(data)                      ((0x01FF0000&(data))>>16)
#define  VODMA2_VODMA2_PQ_DECMP_get_decmp_height(data)                           (0x00003FFF&(data))

#define  VODMA2_VODMA2_PQ_DECMP_PAIR                                            0x18005B04
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_reg_addr                                    "0xB8005B04"
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_reg                                         0xB8005B04
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_inst_addr                                   "0x007F"
#define  set_VODMA2_VODMA2_PQ_DECMP_PAIR_reg(data)                               (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_PAIR_reg)=data)
#define  get_VODMA2_VODMA2_PQ_DECMP_PAIR_reg                                     (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_PAIR_reg))
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_line_sum_bit_shift                    (16)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_400_old_mode_en_shift                 (15)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_dummy_14_10_shift                           (10)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_qp_mode_shift                         (8)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_dic_mode_en_shift                     (7)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_two_line_prediction_en_shift          (6)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_line_mode_shift                       (5)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_data_color_shift                      (4)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_data_bit_width_shift                  (2)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_data_format_shift                     (0)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_line_sum_bit_mask                     (0xFFFF0000)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_400_old_mode_en_mask                  (0x00008000)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_dummy_14_10_mask                            (0x00007C00)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_qp_mode_mask                          (0x00000300)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_dic_mode_en_mask                      (0x00000080)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_two_line_prediction_en_mask           (0x00000040)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_line_mode_mask                        (0x00000020)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_data_color_mask                       (0x00000010)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_data_bit_width_mask                   (0x0000000C)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_data_format_mask                      (0x00000003)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_line_sum_bit(data)                    (0xFFFF0000&((data)<<16))
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_400_old_mode_en(data)                 (0x00008000&((data)<<15))
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_dummy_14_10(data)                           (0x00007C00&((data)<<10))
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_qp_mode(data)                         (0x00000300&((data)<<8))
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_dic_mode_en(data)                     (0x00000080&((data)<<7))
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_two_line_prediction_en(data)          (0x00000040&((data)<<6))
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_line_mode(data)                       (0x00000020&((data)<<5))
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_data_color(data)                      (0x00000010&((data)<<4))
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_data_bit_width(data)                  (0x0000000C&((data)<<2))
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_decmp_data_format(data)                     (0x00000003&(data))
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_get_decmp_line_sum_bit(data)                ((0xFFFF0000&(data))>>16)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_get_decmp_400_old_mode_en(data)             ((0x00008000&(data))>>15)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_get_dummy_14_10(data)                       ((0x00007C00&(data))>>10)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_get_decmp_qp_mode(data)                     ((0x00000300&(data))>>8)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_get_decmp_dic_mode_en(data)                 ((0x00000080&(data))>>7)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_get_decmp_two_line_prediction_en(data)      ((0x00000040&(data))>>6)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_get_decmp_line_mode(data)                   ((0x00000020&(data))>>5)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_get_decmp_data_color(data)                  ((0x00000010&(data))>>4)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_get_decmp_data_bit_width(data)              ((0x0000000C&(data))>>2)
#define  VODMA2_VODMA2_PQ_DECMP_PAIR_get_decmp_data_format(data)                 (0x00000003&(data))

#define  VODMA2_VODMA2_PQ_DECMP_SAT_EN                                          0x18005B08
#define  VODMA2_VODMA2_PQ_DECMP_SAT_EN_reg_addr                                  "0xB8005B08"
#define  VODMA2_VODMA2_PQ_DECMP_SAT_EN_reg                                       0xB8005B08
#define  VODMA2_VODMA2_PQ_DECMP_SAT_EN_inst_addr                                 "0x0080"
#define  set_VODMA2_VODMA2_PQ_DECMP_SAT_EN_reg(data)                             (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_SAT_EN_reg)=data)
#define  get_VODMA2_VODMA2_PQ_DECMP_SAT_EN_reg                                   (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_SAT_EN_reg))
#define  VODMA2_VODMA2_PQ_DECMP_SAT_EN_decmp_crc_ro_line_sel_shift               (16)
#define  VODMA2_VODMA2_PQ_DECMP_SAT_EN_saturation_type_shift                     (1)
#define  VODMA2_VODMA2_PQ_DECMP_SAT_EN_saturation_en_shift                       (0)
#define  VODMA2_VODMA2_PQ_DECMP_SAT_EN_decmp_crc_ro_line_sel_mask                (0x3FFF0000)
#define  VODMA2_VODMA2_PQ_DECMP_SAT_EN_saturation_type_mask                      (0x00000002)
#define  VODMA2_VODMA2_PQ_DECMP_SAT_EN_saturation_en_mask                        (0x00000001)
#define  VODMA2_VODMA2_PQ_DECMP_SAT_EN_decmp_crc_ro_line_sel(data)               (0x3FFF0000&((data)<<16))
#define  VODMA2_VODMA2_PQ_DECMP_SAT_EN_saturation_type(data)                     (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_PQ_DECMP_SAT_EN_saturation_en(data)                       (0x00000001&(data))
#define  VODMA2_VODMA2_PQ_DECMP_SAT_EN_get_decmp_crc_ro_line_sel(data)           ((0x3FFF0000&(data))>>16)
#define  VODMA2_VODMA2_PQ_DECMP_SAT_EN_get_saturation_type(data)                 ((0x00000002&(data))>>1)
#define  VODMA2_VODMA2_PQ_DECMP_SAT_EN_get_saturation_en(data)                   (0x00000001&(data))

#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN                                          0x18005B0C
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_reg_addr                                  "0xB8005B0C"
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_reg                                       0xB8005B0C
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_inst_addr                                 "0x0081"
#define  set_VODMA2_VODMA2_PQ_DECMP_IRQ_EN_reg(data)                             (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_IRQ_EN_reg)=data)
#define  get_VODMA2_VODMA2_PQ_DECMP_IRQ_EN_reg                                   (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_IRQ_EN_reg))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_not_finish_irq_even_en_shift              (21)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_underflow_irq_even_en_shift               (20)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_dic_error_even_en_shift                   (19)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_crc_r_error_even_en_shift                 (18)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_crc_g_error_even_en_shift                 (17)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_crc_b_error_even_en_shift                 (16)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_not_finish_irq_odd_en_shift               (5)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_underflow_irq_odd_en_shift                (4)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_crc_r_error_odd_en_shift                  (2)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_crc_g_error_odd_en_shift                  (1)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_crc_b_error_odd_en_shift                  (0)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_not_finish_irq_even_en_mask               (0x00200000)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_underflow_irq_even_en_mask                (0x00100000)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_dic_error_even_en_mask                    (0x00080000)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_crc_r_error_even_en_mask                  (0x00040000)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_crc_g_error_even_en_mask                  (0x00020000)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_crc_b_error_even_en_mask                  (0x00010000)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_not_finish_irq_odd_en_mask                (0x00000020)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_underflow_irq_odd_en_mask                 (0x00000010)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_crc_r_error_odd_en_mask                   (0x00000004)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_crc_g_error_odd_en_mask                   (0x00000002)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_crc_b_error_odd_en_mask                   (0x00000001)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_not_finish_irq_even_en(data)              (0x00200000&((data)<<21))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_underflow_irq_even_en(data)               (0x00100000&((data)<<20))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_dic_error_even_en(data)                   (0x00080000&((data)<<19))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_crc_r_error_even_en(data)                 (0x00040000&((data)<<18))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_crc_g_error_even_en(data)                 (0x00020000&((data)<<17))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_crc_b_error_even_en(data)                 (0x00010000&((data)<<16))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_not_finish_irq_odd_en(data)               (0x00000020&((data)<<5))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_underflow_irq_odd_en(data)                (0x00000010&((data)<<4))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_crc_r_error_odd_en(data)                  (0x00000004&((data)<<2))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_crc_g_error_odd_en(data)                  (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_crc_b_error_odd_en(data)                  (0x00000001&(data))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_get_not_finish_irq_even_en(data)          ((0x00200000&(data))>>21)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_get_underflow_irq_even_en(data)           ((0x00100000&(data))>>20)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_get_dic_error_even_en(data)               ((0x00080000&(data))>>19)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_get_crc_r_error_even_en(data)             ((0x00040000&(data))>>18)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_get_crc_g_error_even_en(data)             ((0x00020000&(data))>>17)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_get_crc_b_error_even_en(data)             ((0x00010000&(data))>>16)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_get_not_finish_irq_odd_en(data)           ((0x00000020&(data))>>5)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_get_underflow_irq_odd_en(data)            ((0x00000010&(data))>>4)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_get_crc_r_error_odd_en(data)              ((0x00000004&(data))>>2)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_get_crc_g_error_odd_en(data)              ((0x00000002&(data))>>1)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_EN_get_crc_b_error_odd_en(data)              (0x00000001&(data))

#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st                                          0x18005B10
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_reg_addr                                  "0xB8005B10"
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_reg                                       0xB8005B10
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_inst_addr                                 "0x0082"
#define  set_VODMA2_VODMA2_PQ_DECMP_IRQ_st_reg(data)                             (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_IRQ_st_reg)=data)
#define  get_VODMA2_VODMA2_PQ_DECMP_IRQ_st_reg                                   (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_IRQ_st_reg))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_pqdc_irq_shift                            (31)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_in_fifo_overflow_even_st_shift            (27)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_ring_r_overflow_even_st_shift             (26)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_ring_g_overflow_even_st_shift             (25)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_ring_b_overflow_even_st_shift             (24)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_not_finish_irq_even_st_shift              (21)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_underflow_irq_even_st_shift               (20)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_dic_error_even_st_shift                   (19)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_crc_r_error_even_st_shift                 (18)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_crc_g_error_even_st_shift                 (17)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_crc_b_error_even_st_shift                 (16)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_in_fifo_overflow_odd_st_shift             (11)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_ring_r_overflow_odd_st_shift              (10)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_ring_g_overflow_odd_st_shift              (9)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_ring_b_overflow_odd_st_shift              (8)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_not_finish_irq_odd_st_shift               (5)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_underflow_irq_odd_st_shift                (4)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_crc_r_error_odd_st_shift                  (2)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_crc_g_error_odd_st_shift                  (1)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_crc_b_error_odd_st_shift                  (0)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_pqdc_irq_mask                             (0x80000000)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_in_fifo_overflow_even_st_mask             (0x08000000)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_ring_r_overflow_even_st_mask              (0x04000000)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_ring_g_overflow_even_st_mask              (0x02000000)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_ring_b_overflow_even_st_mask              (0x01000000)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_not_finish_irq_even_st_mask               (0x00200000)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_underflow_irq_even_st_mask                (0x00100000)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_dic_error_even_st_mask                    (0x00080000)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_crc_r_error_even_st_mask                  (0x00040000)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_crc_g_error_even_st_mask                  (0x00020000)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_crc_b_error_even_st_mask                  (0x00010000)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_in_fifo_overflow_odd_st_mask              (0x00000800)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_ring_r_overflow_odd_st_mask               (0x00000400)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_ring_g_overflow_odd_st_mask               (0x00000200)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_ring_b_overflow_odd_st_mask               (0x00000100)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_not_finish_irq_odd_st_mask                (0x00000020)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_underflow_irq_odd_st_mask                 (0x00000010)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_crc_r_error_odd_st_mask                   (0x00000004)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_crc_g_error_odd_st_mask                   (0x00000002)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_crc_b_error_odd_st_mask                   (0x00000001)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_pqdc_irq(data)                            (0x80000000&((data)<<31))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_in_fifo_overflow_even_st(data)            (0x08000000&((data)<<27))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_ring_r_overflow_even_st(data)             (0x04000000&((data)<<26))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_ring_g_overflow_even_st(data)             (0x02000000&((data)<<25))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_ring_b_overflow_even_st(data)             (0x01000000&((data)<<24))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_not_finish_irq_even_st(data)              (0x00200000&((data)<<21))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_underflow_irq_even_st(data)               (0x00100000&((data)<<20))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_dic_error_even_st(data)                   (0x00080000&((data)<<19))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_crc_r_error_even_st(data)                 (0x00040000&((data)<<18))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_crc_g_error_even_st(data)                 (0x00020000&((data)<<17))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_crc_b_error_even_st(data)                 (0x00010000&((data)<<16))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_in_fifo_overflow_odd_st(data)             (0x00000800&((data)<<11))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_ring_r_overflow_odd_st(data)              (0x00000400&((data)<<10))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_ring_g_overflow_odd_st(data)              (0x00000200&((data)<<9))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_ring_b_overflow_odd_st(data)              (0x00000100&((data)<<8))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_not_finish_irq_odd_st(data)               (0x00000020&((data)<<5))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_underflow_irq_odd_st(data)                (0x00000010&((data)<<4))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_crc_r_error_odd_st(data)                  (0x00000004&((data)<<2))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_crc_g_error_odd_st(data)                  (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_crc_b_error_odd_st(data)                  (0x00000001&(data))
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_get_pqdc_irq(data)                        ((0x80000000&(data))>>31)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_get_in_fifo_overflow_even_st(data)        ((0x08000000&(data))>>27)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_get_ring_r_overflow_even_st(data)         ((0x04000000&(data))>>26)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_get_ring_g_overflow_even_st(data)         ((0x02000000&(data))>>25)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_get_ring_b_overflow_even_st(data)         ((0x01000000&(data))>>24)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_get_not_finish_irq_even_st(data)          ((0x00200000&(data))>>21)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_get_underflow_irq_even_st(data)           ((0x00100000&(data))>>20)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_get_dic_error_even_st(data)               ((0x00080000&(data))>>19)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_get_crc_r_error_even_st(data)             ((0x00040000&(data))>>18)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_get_crc_g_error_even_st(data)             ((0x00020000&(data))>>17)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_get_crc_b_error_even_st(data)             ((0x00010000&(data))>>16)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_get_in_fifo_overflow_odd_st(data)         ((0x00000800&(data))>>11)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_get_ring_r_overflow_odd_st(data)          ((0x00000400&(data))>>10)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_get_ring_g_overflow_odd_st(data)          ((0x00000200&(data))>>9)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_get_ring_b_overflow_odd_st(data)          ((0x00000100&(data))>>8)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_get_not_finish_irq_odd_st(data)           ((0x00000020&(data))>>5)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_get_underflow_irq_odd_st(data)            ((0x00000010&(data))>>4)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_get_crc_r_error_odd_st(data)              ((0x00000004&(data))>>2)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_get_crc_g_error_odd_st(data)              ((0x00000002&(data))>>1)
#define  VODMA2_VODMA2_PQ_DECMP_IRQ_st_get_crc_b_error_odd_st(data)              (0x00000001&(data))

#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN                                         0x18005B14
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_reg_addr                                 "0xB8005B14"
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_reg                                      0xB8005B14
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_inst_addr                                "0x0083"
#define  set_VODMA2_VODMA2_PQ_DECMP_MARK_EN_reg(data)                            (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_MARK_EN_reg)=data)
#define  get_VODMA2_VODMA2_PQ_DECMP_MARK_EN_reg                                  (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_MARK_EN_reg))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_do_422_shift                     (31)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_dic_shift                        (17)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp_sel_shift                     (16)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp7_shift                        (7)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp6_shift                        (6)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp5_shift                        (5)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp4_shift                        (4)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp3_shift                        (3)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp2_shift                        (2)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp1_shift                        (1)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp0_shift                        (0)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_do_422_mask                      (0x80000000)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_dic_mask                         (0x00020000)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp_sel_mask                      (0x00010000)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp7_mask                         (0x00000080)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp6_mask                         (0x00000040)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp5_mask                         (0x00000020)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp4_mask                         (0x00000010)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp3_mask                         (0x00000008)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp2_mask                         (0x00000004)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp1_mask                         (0x00000002)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp0_mask                         (0x00000001)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_do_422(data)                     (0x80000000&((data)<<31))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_dic(data)                        (0x00020000&((data)<<17))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp_sel(data)                     (0x00010000&((data)<<16))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp7(data)                        (0x00000080&((data)<<7))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp6(data)                        (0x00000040&((data)<<6))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp5(data)                        (0x00000020&((data)<<5))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp4(data)                        (0x00000010&((data)<<4))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp3(data)                        (0x00000008&((data)<<3))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp2(data)                        (0x00000004&((data)<<2))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp1(data)                        (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_mark_en_qp0(data)                        (0x00000001&(data))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_get_mark_en_do_422(data)                 ((0x80000000&(data))>>31)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_get_mark_en_dic(data)                    ((0x00020000&(data))>>17)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_get_mark_en_qp_sel(data)                 ((0x00010000&(data))>>16)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_get_mark_en_qp7(data)                    ((0x00000080&(data))>>7)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_get_mark_en_qp6(data)                    ((0x00000040&(data))>>6)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_get_mark_en_qp5(data)                    ((0x00000020&(data))>>5)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_get_mark_en_qp4(data)                    ((0x00000010&(data))>>4)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_get_mark_en_qp3(data)                    ((0x00000008&(data))>>3)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_get_mark_en_qp2(data)                    ((0x00000004&(data))>>2)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_get_mark_en_qp1(data)                    ((0x00000002&(data))>>1)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_EN_get_mark_en_qp0(data)                    (0x00000001&(data))

#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_01                                   0x18005B18
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_01_reg_addr                           "0xB8005B18"
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_01_reg                                0xB8005B18
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_01_inst_addr                          "0x0084"
#define  set_VODMA2_VODMA2_PQ_DECMP_MARK_color_01_reg(data)                      (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_MARK_color_01_reg)=data)
#define  get_VODMA2_VODMA2_PQ_DECMP_MARK_color_01_reg                            (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_MARK_color_01_reg))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_01_mark_color_0_shift                 (16)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_01_mark_color_1_shift                 (0)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_01_mark_color_0_mask                  (0xFFFF0000)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_01_mark_color_1_mask                  (0x0000FFFF)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_01_mark_color_0(data)                 (0xFFFF0000&((data)<<16))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_01_mark_color_1(data)                 (0x0000FFFF&(data))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_01_get_mark_color_0(data)             ((0xFFFF0000&(data))>>16)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_01_get_mark_color_1(data)             (0x0000FFFF&(data))

#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_23                                   0x18005B1C
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_23_reg_addr                           "0xB8005B1C"
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_23_reg                                0xB8005B1C
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_23_inst_addr                          "0x0085"
#define  set_VODMA2_VODMA2_PQ_DECMP_MARK_color_23_reg(data)                      (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_MARK_color_23_reg)=data)
#define  get_VODMA2_VODMA2_PQ_DECMP_MARK_color_23_reg                            (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_MARK_color_23_reg))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_23_mark_color_2_shift                 (16)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_23_mark_color_3_shift                 (0)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_23_mark_color_2_mask                  (0xFFFF0000)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_23_mark_color_3_mask                  (0x0000FFFF)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_23_mark_color_2(data)                 (0xFFFF0000&((data)<<16))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_23_mark_color_3(data)                 (0x0000FFFF&(data))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_23_get_mark_color_2(data)             ((0xFFFF0000&(data))>>16)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_23_get_mark_color_3(data)             (0x0000FFFF&(data))

#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_45                                   0x18005B20
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_45_reg_addr                           "0xB8005B20"
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_45_reg                                0xB8005B20
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_45_inst_addr                          "0x0086"
#define  set_VODMA2_VODMA2_PQ_DECMP_MARK_color_45_reg(data)                      (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_MARK_color_45_reg)=data)
#define  get_VODMA2_VODMA2_PQ_DECMP_MARK_color_45_reg                            (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_MARK_color_45_reg))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_45_mark_color_4_shift                 (16)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_45_mark_color_5_shift                 (0)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_45_mark_color_4_mask                  (0xFFFF0000)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_45_mark_color_5_mask                  (0x0000FFFF)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_45_mark_color_4(data)                 (0xFFFF0000&((data)<<16))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_45_mark_color_5(data)                 (0x0000FFFF&(data))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_45_get_mark_color_4(data)             ((0xFFFF0000&(data))>>16)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_45_get_mark_color_5(data)             (0x0000FFFF&(data))

#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_67                                   0x18005B24
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_67_reg_addr                           "0xB8005B24"
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_67_reg                                0xB8005B24
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_67_inst_addr                          "0x0087"
#define  set_VODMA2_VODMA2_PQ_DECMP_MARK_color_67_reg(data)                      (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_MARK_color_67_reg)=data)
#define  get_VODMA2_VODMA2_PQ_DECMP_MARK_color_67_reg                            (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_MARK_color_67_reg))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_67_mark_color_6_shift                 (16)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_67_mark_color_7_shift                 (0)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_67_mark_color_6_mask                  (0xFFFF0000)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_67_mark_color_7_mask                  (0x0000FFFF)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_67_mark_color_6(data)                 (0xFFFF0000&((data)<<16))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_67_mark_color_7(data)                 (0x0000FFFF&(data))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_67_get_mark_color_6(data)             ((0xFFFF0000&(data))>>16)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_67_get_mark_color_7(data)             (0x0000FFFF&(data))

#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_422                                  0x18005B28
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_422_reg_addr                          "0xB8005B28"
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_422_reg                               0xB8005B28
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_422_inst_addr                         "0x0088"
#define  set_VODMA2_VODMA2_PQ_DECMP_MARK_color_422_reg(data)                     (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_MARK_color_422_reg)=data)
#define  get_VODMA2_VODMA2_PQ_DECMP_MARK_color_422_reg                           (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_MARK_color_422_reg))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_422_mark_color_dic_shift              (16)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_422_mark_color_422_shift              (0)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_422_mark_color_dic_mask               (0xFFFF0000)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_422_mark_color_422_mask               (0x0000FFFF)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_422_mark_color_dic(data)              (0xFFFF0000&((data)<<16))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_422_mark_color_422(data)              (0x0000FFFF&(data))
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_422_get_mark_color_dic(data)          ((0xFFFF0000&(data))>>16)
#define  VODMA2_VODMA2_PQ_DECMP_MARK_color_422_get_mark_color_422(data)          (0x0000FFFF&(data))

#define  VODMA2_VODMA2_PQ_DECMP_ST                                              0x18005B2C
#define  VODMA2_VODMA2_PQ_DECMP_ST_reg_addr                                      "0xB8005B2C"
#define  VODMA2_VODMA2_PQ_DECMP_ST_reg                                           0xB8005B2C
#define  VODMA2_VODMA2_PQ_DECMP_ST_inst_addr                                     "0x0089"
#define  set_VODMA2_VODMA2_PQ_DECMP_ST_reg(data)                                 (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_ST_reg)=data)
#define  get_VODMA2_VODMA2_PQ_DECMP_ST_reg                                       (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_ST_reg))
#define  VODMA2_VODMA2_PQ_DECMP_ST_decmp_two_pixel_mode_shift                    (31)
#define  VODMA2_VODMA2_PQ_DECMP_ST_decmp_crc_error_line_shift                    (16)
#define  VODMA2_VODMA2_PQ_DECMP_ST_decmp_package_height_cnt_shift                (0)
#define  VODMA2_VODMA2_PQ_DECMP_ST_decmp_two_pixel_mode_mask                     (0x80000000)
#define  VODMA2_VODMA2_PQ_DECMP_ST_decmp_crc_error_line_mask                     (0x3FFF0000)
#define  VODMA2_VODMA2_PQ_DECMP_ST_decmp_package_height_cnt_mask                 (0x00003FFF)
#define  VODMA2_VODMA2_PQ_DECMP_ST_decmp_two_pixel_mode(data)                    (0x80000000&((data)<<31))
#define  VODMA2_VODMA2_PQ_DECMP_ST_decmp_crc_error_line(data)                    (0x3FFF0000&((data)<<16))
#define  VODMA2_VODMA2_PQ_DECMP_ST_decmp_package_height_cnt(data)                (0x00003FFF&(data))
#define  VODMA2_VODMA2_PQ_DECMP_ST_get_decmp_two_pixel_mode(data)                ((0x80000000&(data))>>31)
#define  VODMA2_VODMA2_PQ_DECMP_ST_get_decmp_crc_error_line(data)                ((0x3FFF0000&(data))>>16)
#define  VODMA2_VODMA2_PQ_DECMP_ST_get_decmp_package_height_cnt(data)            (0x00003FFF&(data))

#define  VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_G                                      0x18005B30
#define  VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_G_reg_addr                              "0xB8005B30"
#define  VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_G_reg                                   0xB8005B30
#define  VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_G_inst_addr                             "0x008A"
#define  set_VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_G_reg(data)                         (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_G_reg)=data)
#define  get_VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_G_reg                               (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_G_reg))
#define  VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_G_decmp_crc_even_g_shift                (0)
#define  VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_G_decmp_crc_even_g_mask                 (0xFFFFFFFF)
#define  VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_G_decmp_crc_even_g(data)                (0xFFFFFFFF&(data))
#define  VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_G_get_decmp_crc_even_g(data)            (0xFFFFFFFF&(data))

#define  VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_R                                      0x18005B34
#define  VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_R_reg_addr                              "0xB8005B34"
#define  VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_R_reg                                   0xB8005B34
#define  VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_R_inst_addr                             "0x008B"
#define  set_VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_R_reg(data)                         (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_R_reg)=data)
#define  get_VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_R_reg                               (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_R_reg))
#define  VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_R_decmp_crc_even_r_shift                (0)
#define  VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_R_decmp_crc_even_r_mask                 (0xFFFFFFFF)
#define  VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_R_decmp_crc_even_r(data)                (0xFFFFFFFF&(data))
#define  VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_R_get_decmp_crc_even_r(data)            (0xFFFFFFFF&(data))

#define  VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_B                                      0x18005B38
#define  VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_B_reg_addr                              "0xB8005B38"
#define  VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_B_reg                                   0xB8005B38
#define  VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_B_inst_addr                             "0x008C"
#define  set_VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_B_reg(data)                         (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_B_reg)=data)
#define  get_VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_B_reg                               (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_B_reg))
#define  VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_B_decmp_crc_even_b_shift                (0)
#define  VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_B_decmp_crc_even_b_mask                 (0xFFFFFFFF)
#define  VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_B_decmp_crc_even_b(data)                (0xFFFFFFFF&(data))
#define  VODMA2_VODMA2_PQ_DECMP_CRC_EVEN_B_get_decmp_crc_even_b(data)            (0xFFFFFFFF&(data))

#define  VODMA2_VODMA2_PQ_DECMP_CRC_ODD_G                                       0x18005B3C
#define  VODMA2_VODMA2_PQ_DECMP_CRC_ODD_G_reg_addr                               "0xB8005B3C"
#define  VODMA2_VODMA2_PQ_DECMP_CRC_ODD_G_reg                                    0xB8005B3C
#define  VODMA2_VODMA2_PQ_DECMP_CRC_ODD_G_inst_addr                              "0x008D"
#define  set_VODMA2_VODMA2_PQ_DECMP_CRC_ODD_G_reg(data)                          (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_CRC_ODD_G_reg)=data)
#define  get_VODMA2_VODMA2_PQ_DECMP_CRC_ODD_G_reg                                (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_CRC_ODD_G_reg))
#define  VODMA2_VODMA2_PQ_DECMP_CRC_ODD_G_decmp_crc_odd_g_shift                  (0)
#define  VODMA2_VODMA2_PQ_DECMP_CRC_ODD_G_decmp_crc_odd_g_mask                   (0xFFFFFFFF)
#define  VODMA2_VODMA2_PQ_DECMP_CRC_ODD_G_decmp_crc_odd_g(data)                  (0xFFFFFFFF&(data))
#define  VODMA2_VODMA2_PQ_DECMP_CRC_ODD_G_get_decmp_crc_odd_g(data)              (0xFFFFFFFF&(data))

#define  VODMA2_VODMA2_PQ_DECMP_CRC_ODD_R                                       0x18005B40
#define  VODMA2_VODMA2_PQ_DECMP_CRC_ODD_R_reg_addr                               "0xB8005B40"
#define  VODMA2_VODMA2_PQ_DECMP_CRC_ODD_R_reg                                    0xB8005B40
#define  VODMA2_VODMA2_PQ_DECMP_CRC_ODD_R_inst_addr                              "0x008E"
#define  set_VODMA2_VODMA2_PQ_DECMP_CRC_ODD_R_reg(data)                          (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_CRC_ODD_R_reg)=data)
#define  get_VODMA2_VODMA2_PQ_DECMP_CRC_ODD_R_reg                                (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_CRC_ODD_R_reg))
#define  VODMA2_VODMA2_PQ_DECMP_CRC_ODD_R_decmp_crc_odd_r_shift                  (0)
#define  VODMA2_VODMA2_PQ_DECMP_CRC_ODD_R_decmp_crc_odd_r_mask                   (0xFFFFFFFF)
#define  VODMA2_VODMA2_PQ_DECMP_CRC_ODD_R_decmp_crc_odd_r(data)                  (0xFFFFFFFF&(data))
#define  VODMA2_VODMA2_PQ_DECMP_CRC_ODD_R_get_decmp_crc_odd_r(data)              (0xFFFFFFFF&(data))

#define  VODMA2_VODMA2_PQ_DECMP_CRC_ODD_B                                       0x18005B44
#define  VODMA2_VODMA2_PQ_DECMP_CRC_ODD_B_reg_addr                               "0xB8005B44"
#define  VODMA2_VODMA2_PQ_DECMP_CRC_ODD_B_reg                                    0xB8005B44
#define  VODMA2_VODMA2_PQ_DECMP_CRC_ODD_B_inst_addr                              "0x008F"
#define  set_VODMA2_VODMA2_PQ_DECMP_CRC_ODD_B_reg(data)                          (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_CRC_ODD_B_reg)=data)
#define  get_VODMA2_VODMA2_PQ_DECMP_CRC_ODD_B_reg                                (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_CRC_ODD_B_reg))
#define  VODMA2_VODMA2_PQ_DECMP_CRC_ODD_B_decmp_crc_odd_b_shift                  (0)
#define  VODMA2_VODMA2_PQ_DECMP_CRC_ODD_B_decmp_crc_odd_b_mask                   (0xFFFFFFFF)
#define  VODMA2_VODMA2_PQ_DECMP_CRC_ODD_B_decmp_crc_odd_b(data)                  (0xFFFFFFFF&(data))
#define  VODMA2_VODMA2_PQ_DECMP_CRC_ODD_B_get_decmp_crc_odd_b(data)              (0xFFFFFFFF&(data))

#define  VODMA2_VODMA2_PQ_DECMP_PAUSE_CYCLE                                     0x18005B48
#define  VODMA2_VODMA2_PQ_DECMP_PAUSE_CYCLE_reg_addr                             "0xB8005B48"
#define  VODMA2_VODMA2_PQ_DECMP_PAUSE_CYCLE_reg                                  0xB8005B48
#define  VODMA2_VODMA2_PQ_DECMP_PAUSE_CYCLE_inst_addr                            "0x0090"
#define  set_VODMA2_VODMA2_PQ_DECMP_PAUSE_CYCLE_reg(data)                        (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_PAUSE_CYCLE_reg)=data)
#define  get_VODMA2_VODMA2_PQ_DECMP_PAUSE_CYCLE_reg                              (*((volatile unsigned int*)VODMA2_VODMA2_PQ_DECMP_PAUSE_CYCLE_reg))
#define  VODMA2_VODMA2_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_measure_en_shift   (31)
#define  VODMA2_VODMA2_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_long_term_shift    (30)
#define  VODMA2_VODMA2_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_shift              (0)
#define  VODMA2_VODMA2_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_measure_en_mask    (0x80000000)
#define  VODMA2_VODMA2_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_long_term_mask     (0x40000000)
#define  VODMA2_VODMA2_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_mask               (0x000000FF)
#define  VODMA2_VODMA2_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_measure_en(data)   (0x80000000&((data)<<31))
#define  VODMA2_VODMA2_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_long_term(data)    (0x40000000&((data)<<30))
#define  VODMA2_VODMA2_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle(data)              (0x000000FF&(data))
#define  VODMA2_VODMA2_PQ_DECMP_PAUSE_CYCLE_get_decmp_pause_cycle_measure_en(data) ((0x80000000&(data))>>31)
#define  VODMA2_VODMA2_PQ_DECMP_PAUSE_CYCLE_get_decmp_pause_cycle_long_term(data) ((0x40000000&(data))>>30)
#define  VODMA2_VODMA2_PQ_DECMP_PAUSE_CYCLE_get_decmp_pause_cycle(data)          (0x000000FF&(data))

#define  VODMA2_VODMA2_PVS0_Gen                                                 0x18005E00
#define  VODMA2_VODMA2_PVS0_Gen_reg_addr                                         "0xB8005E00"
#define  VODMA2_VODMA2_PVS0_Gen_reg                                              0xB8005E00
#define  VODMA2_VODMA2_PVS0_Gen_inst_addr                                        "0x0091"
#define  set_VODMA2_VODMA2_PVS0_Gen_reg(data)                                    (*((volatile unsigned int*)VODMA2_VODMA2_PVS0_Gen_reg)=data)
#define  get_VODMA2_VODMA2_PVS0_Gen_reg                                          (*((volatile unsigned int*)VODMA2_VODMA2_PVS0_Gen_reg))
#define  VODMA2_VODMA2_PVS0_Gen_en_pvgen_shift                                   (31)
#define  VODMA2_VODMA2_PVS0_Gen_en_pfgen_shift                                   (30)
#define  VODMA2_VODMA2_PVS0_Gen_pfgen_inv_shift                                  (29)
#define  VODMA2_VODMA2_PVS0_Gen_iv_inv_en_shift                                  (27)
#define  VODMA2_VODMA2_PVS0_Gen_iv_src_sel_shift                                 (24)
#define  VODMA2_VODMA2_PVS0_Gen_iv2pv_dly_shift                                  (0)
#define  VODMA2_VODMA2_PVS0_Gen_en_pvgen_mask                                    (0x80000000)
#define  VODMA2_VODMA2_PVS0_Gen_en_pfgen_mask                                    (0x40000000)
#define  VODMA2_VODMA2_PVS0_Gen_pfgen_inv_mask                                   (0x20000000)
#define  VODMA2_VODMA2_PVS0_Gen_iv_inv_en_mask                                   (0x08000000)
#define  VODMA2_VODMA2_PVS0_Gen_iv_src_sel_mask                                  (0x07000000)
#define  VODMA2_VODMA2_PVS0_Gen_iv2pv_dly_mask                                   (0x00FFFFFF)
#define  VODMA2_VODMA2_PVS0_Gen_en_pvgen(data)                                   (0x80000000&((data)<<31))
#define  VODMA2_VODMA2_PVS0_Gen_en_pfgen(data)                                   (0x40000000&((data)<<30))
#define  VODMA2_VODMA2_PVS0_Gen_pfgen_inv(data)                                  (0x20000000&((data)<<29))
#define  VODMA2_VODMA2_PVS0_Gen_iv_inv_en(data)                                  (0x08000000&((data)<<27))
#define  VODMA2_VODMA2_PVS0_Gen_iv_src_sel(data)                                 (0x07000000&((data)<<24))
#define  VODMA2_VODMA2_PVS0_Gen_iv2pv_dly(data)                                  (0x00FFFFFF&(data))
#define  VODMA2_VODMA2_PVS0_Gen_get_en_pvgen(data)                               ((0x80000000&(data))>>31)
#define  VODMA2_VODMA2_PVS0_Gen_get_en_pfgen(data)                               ((0x40000000&(data))>>30)
#define  VODMA2_VODMA2_PVS0_Gen_get_pfgen_inv(data)                              ((0x20000000&(data))>>29)
#define  VODMA2_VODMA2_PVS0_Gen_get_iv_inv_en(data)                              ((0x08000000&(data))>>27)
#define  VODMA2_VODMA2_PVS0_Gen_get_iv_src_sel(data)                             ((0x07000000&(data))>>24)
#define  VODMA2_VODMA2_PVS0_Gen_get_iv2pv_dly(data)                              (0x00FFFFFF&(data))

#define  VODMA2_VODMA2_PVS_Free                                                 0x18005E04
#define  VODMA2_VODMA2_PVS_Free_reg_addr                                         "0xB8005E04"
#define  VODMA2_VODMA2_PVS_Free_reg                                              0xB8005E04
#define  VODMA2_VODMA2_PVS_Free_inst_addr                                        "0x0092"
#define  set_VODMA2_VODMA2_PVS_Free_reg(data)                                    (*((volatile unsigned int*)VODMA2_VODMA2_PVS_Free_reg)=data)
#define  get_VODMA2_VODMA2_PVS_Free_reg                                          (*((volatile unsigned int*)VODMA2_VODMA2_PVS_Free_reg))
#define  VODMA2_VODMA2_PVS_Free_pvs0_free_en_shift                               (31)
#define  VODMA2_VODMA2_PVS_Free_pvs0_free_vs_reset_en_shift                      (29)
#define  VODMA2_VODMA2_PVS_Free_pvs0_free_period_update_shift                    (28)
#define  VODMA2_VODMA2_PVS_Free_pvs0_free_period_shift                           (0)
#define  VODMA2_VODMA2_PVS_Free_pvs0_free_en_mask                                (0x80000000)
#define  VODMA2_VODMA2_PVS_Free_pvs0_free_vs_reset_en_mask                       (0x20000000)
#define  VODMA2_VODMA2_PVS_Free_pvs0_free_period_update_mask                     (0x10000000)
#define  VODMA2_VODMA2_PVS_Free_pvs0_free_period_mask                            (0x0FFFFFFF)
#define  VODMA2_VODMA2_PVS_Free_pvs0_free_en(data)                               (0x80000000&((data)<<31))
#define  VODMA2_VODMA2_PVS_Free_pvs0_free_vs_reset_en(data)                      (0x20000000&((data)<<29))
#define  VODMA2_VODMA2_PVS_Free_pvs0_free_period_update(data)                    (0x10000000&((data)<<28))
#define  VODMA2_VODMA2_PVS_Free_pvs0_free_period(data)                           (0x0FFFFFFF&(data))
#define  VODMA2_VODMA2_PVS_Free_get_pvs0_free_en(data)                           ((0x80000000&(data))>>31)
#define  VODMA2_VODMA2_PVS_Free_get_pvs0_free_vs_reset_en(data)                  ((0x20000000&(data))>>29)
#define  VODMA2_VODMA2_PVS_Free_get_pvs0_free_period_update(data)                ((0x10000000&(data))>>28)
#define  VODMA2_VODMA2_PVS_Free_get_pvs0_free_period(data)                       (0x0FFFFFFF&(data))

#define  VODMA2_VODMA2_PVS_CTRL                                                 0x18005E08
#define  VODMA2_VODMA2_PVS_CTRL_reg_addr                                         "0xB8005E08"
#define  VODMA2_VODMA2_PVS_CTRL_reg                                              0xB8005E08
#define  VODMA2_VODMA2_PVS_CTRL_inst_addr                                        "0x0093"
#define  set_VODMA2_VODMA2_PVS_CTRL_reg(data)                                    (*((volatile unsigned int*)VODMA2_VODMA2_PVS_CTRL_reg)=data)
#define  get_VODMA2_VODMA2_PVS_CTRL_reg                                          (*((volatile unsigned int*)VODMA2_VODMA2_PVS_CTRL_reg))
#define  VODMA2_VODMA2_PVS_CTRL_pvs0_free_clk_sel_shift                          (30)
#define  VODMA2_VODMA2_PVS_CTRL_dummy_29_11_shift                                (11)
#define  VODMA2_VODMA2_PVS_CTRL_pvs0_free_vs_sel_shift                           (8)
#define  VODMA2_VODMA2_PVS_CTRL_pvs0_free_l_flag_en_shift                        (4)
#define  VODMA2_VODMA2_PVS_CTRL_pvs0_free_vs_inv_en_shift                        (3)
#define  VODMA2_VODMA2_PVS_CTRL_mask_one_vs_shift                                (0)
#define  VODMA2_VODMA2_PVS_CTRL_pvs0_free_clk_sel_mask                           (0xC0000000)
#define  VODMA2_VODMA2_PVS_CTRL_dummy_29_11_mask                                 (0x3FFFF800)
#define  VODMA2_VODMA2_PVS_CTRL_pvs0_free_vs_sel_mask                            (0x00000700)
#define  VODMA2_VODMA2_PVS_CTRL_pvs0_free_l_flag_en_mask                         (0x00000010)
#define  VODMA2_VODMA2_PVS_CTRL_pvs0_free_vs_inv_en_mask                         (0x00000008)
#define  VODMA2_VODMA2_PVS_CTRL_mask_one_vs_mask                                 (0x00000001)
#define  VODMA2_VODMA2_PVS_CTRL_pvs0_free_clk_sel(data)                          (0xC0000000&((data)<<30))
#define  VODMA2_VODMA2_PVS_CTRL_dummy_29_11(data)                                (0x3FFFF800&((data)<<11))
#define  VODMA2_VODMA2_PVS_CTRL_pvs0_free_vs_sel(data)                           (0x00000700&((data)<<8))
#define  VODMA2_VODMA2_PVS_CTRL_pvs0_free_l_flag_en(data)                        (0x00000010&((data)<<4))
#define  VODMA2_VODMA2_PVS_CTRL_pvs0_free_vs_inv_en(data)                        (0x00000008&((data)<<3))
#define  VODMA2_VODMA2_PVS_CTRL_mask_one_vs(data)                                (0x00000001&(data))
#define  VODMA2_VODMA2_PVS_CTRL_get_pvs0_free_clk_sel(data)                      ((0xC0000000&(data))>>30)
#define  VODMA2_VODMA2_PVS_CTRL_get_dummy_29_11(data)                            ((0x3FFFF800&(data))>>11)
#define  VODMA2_VODMA2_PVS_CTRL_get_pvs0_free_vs_sel(data)                       ((0x00000700&(data))>>8)
#define  VODMA2_VODMA2_PVS_CTRL_get_pvs0_free_l_flag_en(data)                    ((0x00000010&(data))>>4)
#define  VODMA2_VODMA2_PVS_CTRL_get_pvs0_free_vs_inv_en(data)                    ((0x00000008&(data))>>3)
#define  VODMA2_VODMA2_PVS_CTRL_get_mask_one_vs(data)                            (0x00000001&(data))

#define  VODMA2_VODMA2_CLKGEN                                                   0x18005E0C
#define  VODMA2_VODMA2_CLKGEN_reg_addr                                           "0xB8005E0C"
#define  VODMA2_VODMA2_CLKGEN_reg                                                0xB8005E0C
#define  VODMA2_VODMA2_CLKGEN_inst_addr                                          "0x0094"
#define  set_VODMA2_VODMA2_CLKGEN_reg(data)                                      (*((volatile unsigned int*)VODMA2_VODMA2_CLKGEN_reg)=data)
#define  get_VODMA2_VODMA2_CLKGEN_reg                                            (*((volatile unsigned int*)VODMA2_VODMA2_CLKGEN_reg))
#define  VODMA2_VODMA2_CLKGEN_vodma_enclk_shift                                  (31)
#define  VODMA2_VODMA2_CLKGEN_vodma_clk_div2_en_src_sel_shift                    (29)
#define  VODMA2_VODMA2_CLKGEN_vodma_clk_div2_en_shift                            (28)
#define  VODMA2_VODMA2_CLKGEN_vodma_clk_div_n_shift                              (23)
#define  VODMA2_VODMA2_CLKGEN_vodma_clk_ratio_n_off_shift                        (16)
#define  VODMA2_VODMA2_CLKGEN_dummy_15_7_shift                                   (7)
#define  VODMA2_VODMA2_CLKGEN_vodma_clk_sel_shift                                (4)
#define  VODMA2_VODMA2_CLKGEN_en_fifo_empty_gate_shift                           (3)
#define  VODMA2_VODMA2_CLKGEN_gating_src_sel_shift                               (1)
#define  VODMA2_VODMA2_CLKGEN_en_fifo_full_gate_shift                            (0)
#define  VODMA2_VODMA2_CLKGEN_vodma_enclk_mask                                   (0x80000000)
#define  VODMA2_VODMA2_CLKGEN_vodma_clk_div2_en_src_sel_mask                     (0x20000000)
#define  VODMA2_VODMA2_CLKGEN_vodma_clk_div2_en_mask                             (0x10000000)
#define  VODMA2_VODMA2_CLKGEN_vodma_clk_div_n_mask                               (0x0F800000)
#define  VODMA2_VODMA2_CLKGEN_vodma_clk_ratio_n_off_mask                         (0x003F0000)
#define  VODMA2_VODMA2_CLKGEN_dummy_15_7_mask                                    (0x0000FF80)
#define  VODMA2_VODMA2_CLKGEN_vodma_clk_sel_mask                                 (0x00000070)
#define  VODMA2_VODMA2_CLKGEN_en_fifo_empty_gate_mask                            (0x00000008)
#define  VODMA2_VODMA2_CLKGEN_gating_src_sel_mask                                (0x00000006)
#define  VODMA2_VODMA2_CLKGEN_en_fifo_full_gate_mask                             (0x00000001)
#define  VODMA2_VODMA2_CLKGEN_vodma_enclk(data)                                  (0x80000000&((data)<<31))
#define  VODMA2_VODMA2_CLKGEN_vodma_clk_div2_en_src_sel(data)                    (0x20000000&((data)<<29))
#define  VODMA2_VODMA2_CLKGEN_vodma_clk_div2_en(data)                            (0x10000000&((data)<<28))
#define  VODMA2_VODMA2_CLKGEN_vodma_clk_div_n(data)                              (0x0F800000&((data)<<23))
#define  VODMA2_VODMA2_CLKGEN_vodma_clk_ratio_n_off(data)                        (0x003F0000&((data)<<16))
#define  VODMA2_VODMA2_CLKGEN_dummy_15_7(data)                                   (0x0000FF80&((data)<<7))
#define  VODMA2_VODMA2_CLKGEN_vodma_clk_sel(data)                                (0x00000070&((data)<<4))
#define  VODMA2_VODMA2_CLKGEN_en_fifo_empty_gate(data)                           (0x00000008&((data)<<3))
#define  VODMA2_VODMA2_CLKGEN_gating_src_sel(data)                               (0x00000006&((data)<<1))
#define  VODMA2_VODMA2_CLKGEN_en_fifo_full_gate(data)                            (0x00000001&(data))
#define  VODMA2_VODMA2_CLKGEN_get_vodma_enclk(data)                              ((0x80000000&(data))>>31)
#define  VODMA2_VODMA2_CLKGEN_get_vodma_clk_div2_en_src_sel(data)                ((0x20000000&(data))>>29)
#define  VODMA2_VODMA2_CLKGEN_get_vodma_clk_div2_en(data)                        ((0x10000000&(data))>>28)
#define  VODMA2_VODMA2_CLKGEN_get_vodma_clk_div_n(data)                          ((0x0F800000&(data))>>23)
#define  VODMA2_VODMA2_CLKGEN_get_vodma_clk_ratio_n_off(data)                    ((0x003F0000&(data))>>16)
#define  VODMA2_VODMA2_CLKGEN_get_dummy_15_7(data)                               ((0x0000FF80&(data))>>7)
#define  VODMA2_VODMA2_CLKGEN_get_vodma_clk_sel(data)                            ((0x00000070&(data))>>4)
#define  VODMA2_VODMA2_CLKGEN_get_en_fifo_empty_gate(data)                       ((0x00000008&(data))>>3)
#define  VODMA2_VODMA2_CLKGEN_get_gating_src_sel(data)                           ((0x00000006&(data))>>1)
#define  VODMA2_VODMA2_CLKGEN_get_en_fifo_full_gate(data)                        (0x00000001&(data))

#define  VODMA2_VODMA2_PVS_WIDTH_CTRL                                           0x18005E10
#define  VODMA2_VODMA2_PVS_WIDTH_CTRL_reg_addr                                   "0xB8005E10"
#define  VODMA2_VODMA2_PVS_WIDTH_CTRL_reg                                        0xB8005E10
#define  VODMA2_VODMA2_PVS_WIDTH_CTRL_inst_addr                                  "0x0095"
#define  set_VODMA2_VODMA2_PVS_WIDTH_CTRL_reg(data)                              (*((volatile unsigned int*)VODMA2_VODMA2_PVS_WIDTH_CTRL_reg)=data)
#define  get_VODMA2_VODMA2_PVS_WIDTH_CTRL_reg                                    (*((volatile unsigned int*)VODMA2_VODMA2_PVS_WIDTH_CTRL_reg))
#define  VODMA2_VODMA2_PVS_WIDTH_CTRL_dummy_31_28_shift                          (28)
#define  VODMA2_VODMA2_PVS_WIDTH_CTRL_pvs0_vs_width_shift                        (0)
#define  VODMA2_VODMA2_PVS_WIDTH_CTRL_dummy_31_28_mask                           (0xF0000000)
#define  VODMA2_VODMA2_PVS_WIDTH_CTRL_pvs0_vs_width_mask                         (0x0FFFFFFF)
#define  VODMA2_VODMA2_PVS_WIDTH_CTRL_dummy_31_28(data)                          (0xF0000000&((data)<<28))
#define  VODMA2_VODMA2_PVS_WIDTH_CTRL_pvs0_vs_width(data)                        (0x0FFFFFFF&(data))
#define  VODMA2_VODMA2_PVS_WIDTH_CTRL_get_dummy_31_28(data)                      ((0xF0000000&(data))>>28)
#define  VODMA2_VODMA2_PVS_WIDTH_CTRL_get_pvs0_vs_width(data)                    (0x0FFFFFFF&(data))

#define  VODMA2_VODMA2_Phase_error_for_2vs                                      0x18005E14
#define  VODMA2_VODMA2_Phase_error_for_2vs_reg_addr                              "0xB8005E14"
#define  VODMA2_VODMA2_Phase_error_for_2vs_reg                                   0xB8005E14
#define  VODMA2_VODMA2_Phase_error_for_2vs_inst_addr                             "0x0096"
#define  set_VODMA2_VODMA2_Phase_error_for_2vs_reg(data)                         (*((volatile unsigned int*)VODMA2_VODMA2_Phase_error_for_2vs_reg)=data)
#define  get_VODMA2_VODMA2_Phase_error_for_2vs_reg                               (*((volatile unsigned int*)VODMA2_VODMA2_Phase_error_for_2vs_reg))
#define  VODMA2_VODMA2_Phase_error_for_2vs_phase_err_measure_start_shift         (31)
#define  VODMA2_VODMA2_Phase_error_for_2vs_pe_number_shift                       (0)
#define  VODMA2_VODMA2_Phase_error_for_2vs_phase_err_measure_start_mask          (0x80000000)
#define  VODMA2_VODMA2_Phase_error_for_2vs_pe_number_mask                        (0x0FFFFFFF)
#define  VODMA2_VODMA2_Phase_error_for_2vs_phase_err_measure_start(data)         (0x80000000&((data)<<31))
#define  VODMA2_VODMA2_Phase_error_for_2vs_pe_number(data)                       (0x0FFFFFFF&(data))
#define  VODMA2_VODMA2_Phase_error_for_2vs_get_phase_err_measure_start(data)     ((0x80000000&(data))>>31)
#define  VODMA2_VODMA2_Phase_error_for_2vs_get_pe_number(data)                   (0x0FFFFFFF&(data))

#define  VODMA2_VODMA2_manual_vs                                                0x18005E18
#define  VODMA2_VODMA2_manual_vs_reg_addr                                        "0xB8005E18"
#define  VODMA2_VODMA2_manual_vs_reg                                             0xB8005E18
#define  VODMA2_VODMA2_manual_vs_inst_addr                                       "0x0097"
#define  set_VODMA2_VODMA2_manual_vs_reg(data)                                   (*((volatile unsigned int*)VODMA2_VODMA2_manual_vs_reg)=data)
#define  get_VODMA2_VODMA2_manual_vs_reg                                         (*((volatile unsigned int*)VODMA2_VODMA2_manual_vs_reg))
#define  VODMA2_VODMA2_manual_vs_manual_vs_shift                                 (31)
#define  VODMA2_VODMA2_manual_vs_manual_vs_mask                                  (0x80000000)
#define  VODMA2_VODMA2_manual_vs_manual_vs(data)                                 (0x80000000&((data)<<31))
#define  VODMA2_VODMA2_manual_vs_get_manual_vs(data)                             ((0x80000000&(data))>>31)

#define  VODMA2_VODMA2_REG_DB_VSYNC_CTRL                                        0x18005E1C
#define  VODMA2_VODMA2_REG_DB_VSYNC_CTRL_reg_addr                                "0xB8005E1C"
#define  VODMA2_VODMA2_REG_DB_VSYNC_CTRL_reg                                     0xB8005E1C
#define  VODMA2_VODMA2_REG_DB_VSYNC_CTRL_inst_addr                               "0x0098"
#define  set_VODMA2_VODMA2_REG_DB_VSYNC_CTRL_reg(data)                           (*((volatile unsigned int*)VODMA2_VODMA2_REG_DB_VSYNC_CTRL_reg)=data)
#define  get_VODMA2_VODMA2_REG_DB_VSYNC_CTRL_reg                                 (*((volatile unsigned int*)VODMA2_VODMA2_REG_DB_VSYNC_CTRL_reg))
#define  VODMA2_VODMA2_REG_DB_VSYNC_CTRL_db_vs_sel_rwd1_shift                    (30)
#define  VODMA2_VODMA2_REG_DB_VSYNC_CTRL_pv_guardband_shift                      (3)
#define  VODMA2_VODMA2_REG_DB_VSYNC_CTRL_iv_src_shift                            (0)
#define  VODMA2_VODMA2_REG_DB_VSYNC_CTRL_db_vs_sel_rwd1_mask                     (0xC0000000)
#define  VODMA2_VODMA2_REG_DB_VSYNC_CTRL_pv_guardband_mask                       (0x00000008)
#define  VODMA2_VODMA2_REG_DB_VSYNC_CTRL_iv_src_mask                             (0x00000007)
#define  VODMA2_VODMA2_REG_DB_VSYNC_CTRL_db_vs_sel_rwd1(data)                    (0xC0000000&((data)<<30))
#define  VODMA2_VODMA2_REG_DB_VSYNC_CTRL_pv_guardband(data)                      (0x00000008&((data)<<3))
#define  VODMA2_VODMA2_REG_DB_VSYNC_CTRL_iv_src(data)                            (0x00000007&(data))
#define  VODMA2_VODMA2_REG_DB_VSYNC_CTRL_get_db_vs_sel_rwd1(data)                ((0xC0000000&(data))>>30)
#define  VODMA2_VODMA2_REG_DB_VSYNC_CTRL_get_pv_guardband(data)                  ((0x00000008&(data))>>3)
#define  VODMA2_VODMA2_REG_DB_VSYNC_CTRL_get_iv_src(data)                        (0x00000007&(data))

#define  VODMA2_VODMA2_ivs_framerate                                            0x18005EAC
#define  VODMA2_VODMA2_ivs_framerate_reg_addr                                    "0xB8005EAC"
#define  VODMA2_VODMA2_ivs_framerate_reg                                         0xB8005EAC
#define  VODMA2_VODMA2_ivs_framerate_inst_addr                                   "0x0099"
#define  set_VODMA2_VODMA2_ivs_framerate_reg(data)                               (*((volatile unsigned int*)VODMA2_VODMA2_ivs_framerate_reg)=data)
#define  get_VODMA2_VODMA2_ivs_framerate_reg                                     (*((volatile unsigned int*)VODMA2_VODMA2_ivs_framerate_reg))
#define  VODMA2_VODMA2_ivs_framerate_ivs_cnt_reset_shift                         (31)
#define  VODMA2_VODMA2_ivs_framerate_vsync_divider_shift                         (16)
#define  VODMA2_VODMA2_ivs_framerate_vsync_multipiler_shift                      (0)
#define  VODMA2_VODMA2_ivs_framerate_ivs_cnt_reset_mask                          (0x80000000)
#define  VODMA2_VODMA2_ivs_framerate_vsync_divider_mask                          (0x001F0000)
#define  VODMA2_VODMA2_ivs_framerate_vsync_multipiler_mask                       (0x0000001F)
#define  VODMA2_VODMA2_ivs_framerate_ivs_cnt_reset(data)                         (0x80000000&((data)<<31))
#define  VODMA2_VODMA2_ivs_framerate_vsync_divider(data)                         (0x001F0000&((data)<<16))
#define  VODMA2_VODMA2_ivs_framerate_vsync_multipiler(data)                      (0x0000001F&(data))
#define  VODMA2_VODMA2_ivs_framerate_get_ivs_cnt_reset(data)                     ((0x80000000&(data))>>31)
#define  VODMA2_VODMA2_ivs_framerate_get_vsync_divider(data)                     ((0x001F0000&(data))>>16)
#define  VODMA2_VODMA2_ivs_framerate_get_vsync_multipiler(data)                  (0x0000001F&(data))

#define  VODMA2_VODMA2_ivs_framerate_st                                         0x18005EB0
#define  VODMA2_VODMA2_ivs_framerate_st_reg_addr                                 "0xB8005EB0"
#define  VODMA2_VODMA2_ivs_framerate_st_reg                                      0xB8005EB0
#define  VODMA2_VODMA2_ivs_framerate_st_inst_addr                                "0x009A"
#define  set_VODMA2_VODMA2_ivs_framerate_st_reg(data)                            (*((volatile unsigned int*)VODMA2_VODMA2_ivs_framerate_st_reg)=data)
#define  get_VODMA2_VODMA2_ivs_framerate_st_reg                                  (*((volatile unsigned int*)VODMA2_VODMA2_ivs_framerate_st_reg))
#define  VODMA2_VODMA2_ivs_framerate_st_measure_vs_cnt_src_sel_shift             (27)
#define  VODMA2_VODMA2_ivs_framerate_st_vs_cnt_shift                             (0)
#define  VODMA2_VODMA2_ivs_framerate_st_measure_vs_cnt_src_sel_mask              (0x18000000)
#define  VODMA2_VODMA2_ivs_framerate_st_vs_cnt_mask                              (0x01FFFFFF)
#define  VODMA2_VODMA2_ivs_framerate_st_measure_vs_cnt_src_sel(data)             (0x18000000&((data)<<27))
#define  VODMA2_VODMA2_ivs_framerate_st_vs_cnt(data)                             (0x01FFFFFF&(data))
#define  VODMA2_VODMA2_ivs_framerate_st_get_measure_vs_cnt_src_sel(data)         ((0x18000000&(data))>>27)
#define  VODMA2_VODMA2_ivs_framerate_st_get_vs_cnt(data)                         (0x01FFFFFF&(data))

#define  VODMA2_vodma2_ivs_framerate_period                                     0x18005EB8
#define  VODMA2_vodma2_ivs_framerate_period_reg_addr                             "0xB8005EB8"
#define  VODMA2_vodma2_ivs_framerate_period_reg                                  0xB8005EB8
#define  VODMA2_vodma2_ivs_framerate_period_inst_addr                            "0x009B"
#define  set_VODMA2_vodma2_ivs_framerate_period_reg(data)                        (*((volatile unsigned int*)VODMA2_vodma2_ivs_framerate_period_reg)=data)
#define  get_VODMA2_vodma2_ivs_framerate_period_reg                              (*((volatile unsigned int*)VODMA2_vodma2_ivs_framerate_period_reg))
#define  VODMA2_vodma2_ivs_framerate_period_vsync_period_shift                   (0)
#define  VODMA2_vodma2_ivs_framerate_period_vsync_period_mask                    (0x0FFFFFFF)
#define  VODMA2_vodma2_ivs_framerate_period_vsync_period(data)                   (0x0FFFFFFF&(data))
#define  VODMA2_vodma2_ivs_framerate_period_get_vsync_period(data)               (0x0FFFFFFF&(data))

#define  VODMA2_vodma2_i2rnd                                                    0x18005E20
#define  VODMA2_vodma2_i2rnd_reg_addr                                            "0xB8005E20"
#define  VODMA2_vodma2_i2rnd_reg                                                 0xB8005E20
#define  VODMA2_vodma2_i2rnd_inst_addr                                           "0x009C"
#define  set_VODMA2_vodma2_i2rnd_reg(data)                                       (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_reg)=data)
#define  get_VODMA2_vodma2_i2rnd_reg                                             (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_reg))
#define  VODMA2_vodma2_i2rnd_i2rnd_flag_fifo_mode_shift                          (10)
#define  VODMA2_vodma2_i2rnd_i2rnd_flag_fifo_en_shift                            (9)
#define  VODMA2_vodma2_i2rnd_debug_mask_main_shift                               (8)
#define  VODMA2_vodma2_i2rnd_debug_mask_sub1_shift                               (7)
#define  VODMA2_vodma2_i2rnd_debug_mask_sub2_shift                               (6)
#define  VODMA2_vodma2_i2rnd_debug_mask_sub3_shift                               (5)
#define  VODMA2_vodma2_i2rnd_debug_mask_repeat_sub_old_en_shift                  (4)
#define  VODMA2_vodma2_i2rnd_i2rnd_src_flag_inv_shift                            (3)
#define  VODMA2_vodma2_i2rnd_i2rnd_timing_mode_shift                             (1)
#define  VODMA2_vodma2_i2rnd_i2rnd_timing_en_shift                               (0)
#define  VODMA2_vodma2_i2rnd_i2rnd_flag_fifo_mode_mask                           (0x00000400)
#define  VODMA2_vodma2_i2rnd_i2rnd_flag_fifo_en_mask                             (0x00000200)
#define  VODMA2_vodma2_i2rnd_debug_mask_main_mask                                (0x00000100)
#define  VODMA2_vodma2_i2rnd_debug_mask_sub1_mask                                (0x00000080)
#define  VODMA2_vodma2_i2rnd_debug_mask_sub2_mask                                (0x00000040)
#define  VODMA2_vodma2_i2rnd_debug_mask_sub3_mask                                (0x00000020)
#define  VODMA2_vodma2_i2rnd_debug_mask_repeat_sub_old_en_mask                   (0x00000010)
#define  VODMA2_vodma2_i2rnd_i2rnd_src_flag_inv_mask                             (0x00000008)
#define  VODMA2_vodma2_i2rnd_i2rnd_timing_mode_mask                              (0x00000006)
#define  VODMA2_vodma2_i2rnd_i2rnd_timing_en_mask                                (0x00000001)
#define  VODMA2_vodma2_i2rnd_i2rnd_flag_fifo_mode(data)                          (0x00000400&((data)<<10))
#define  VODMA2_vodma2_i2rnd_i2rnd_flag_fifo_en(data)                            (0x00000200&((data)<<9))
#define  VODMA2_vodma2_i2rnd_debug_mask_main(data)                               (0x00000100&((data)<<8))
#define  VODMA2_vodma2_i2rnd_debug_mask_sub1(data)                               (0x00000080&((data)<<7))
#define  VODMA2_vodma2_i2rnd_debug_mask_sub2(data)                               (0x00000040&((data)<<6))
#define  VODMA2_vodma2_i2rnd_debug_mask_sub3(data)                               (0x00000020&((data)<<5))
#define  VODMA2_vodma2_i2rnd_debug_mask_repeat_sub_old_en(data)                  (0x00000010&((data)<<4))
#define  VODMA2_vodma2_i2rnd_i2rnd_src_flag_inv(data)                            (0x00000008&((data)<<3))
#define  VODMA2_vodma2_i2rnd_i2rnd_timing_mode(data)                             (0x00000006&((data)<<1))
#define  VODMA2_vodma2_i2rnd_i2rnd_timing_en(data)                               (0x00000001&(data))
#define  VODMA2_vodma2_i2rnd_get_i2rnd_flag_fifo_mode(data)                      ((0x00000400&(data))>>10)
#define  VODMA2_vodma2_i2rnd_get_i2rnd_flag_fifo_en(data)                        ((0x00000200&(data))>>9)
#define  VODMA2_vodma2_i2rnd_get_debug_mask_main(data)                           ((0x00000100&(data))>>8)
#define  VODMA2_vodma2_i2rnd_get_debug_mask_sub1(data)                           ((0x00000080&(data))>>7)
#define  VODMA2_vodma2_i2rnd_get_debug_mask_sub2(data)                           ((0x00000040&(data))>>6)
#define  VODMA2_vodma2_i2rnd_get_debug_mask_sub3(data)                           ((0x00000020&(data))>>5)
#define  VODMA2_vodma2_i2rnd_get_debug_mask_repeat_sub_old_en(data)              ((0x00000010&(data))>>4)
#define  VODMA2_vodma2_i2rnd_get_i2rnd_src_flag_inv(data)                        ((0x00000008&(data))>>3)
#define  VODMA2_vodma2_i2rnd_get_i2rnd_timing_mode(data)                         ((0x00000006&(data))>>1)
#define  VODMA2_vodma2_i2rnd_get_i2rnd_timing_en(data)                           (0x00000001&(data))

#define  VODMA2_vodma2_i2rnd_m_flag                                             0x18005E24
#define  VODMA2_vodma2_i2rnd_m_flag_reg_addr                                     "0xB8005E24"
#define  VODMA2_vodma2_i2rnd_m_flag_reg                                          0xB8005E24
#define  VODMA2_vodma2_i2rnd_m_flag_inst_addr                                    "0x009D"
#define  set_VODMA2_vodma2_i2rnd_m_flag_reg(data)                                (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_m_flag_reg)=data)
#define  get_VODMA2_vodma2_i2rnd_m_flag_reg                                      (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_m_flag_reg))
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_hw_mask_repeat_frame_m_en_shift        (31)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_hw_nxt_rpt_flag_m_en_shift             (30)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_quincunx_sel_shift                   (28)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_quincunx_fw_shift                    (24)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_nxt_rpt_flag_fw_shift                (23)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_nxt_rpt_flag_sel_shift               (22)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_block_fw_shift                       (20)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_block_free_run_shift                 (19)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_block_sel_shift                      (16)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_field_fw_shift                       (12)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_field_free_run_shift                 (11)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_field_sel_shift                      (8)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_lflag_fw_shift                       (4)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_lflag_free_run_shift                 (3)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_lflag_sel_shift                      (0)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_hw_mask_repeat_frame_m_en_mask         (0x80000000)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_hw_nxt_rpt_flag_m_en_mask              (0x40000000)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_quincunx_sel_mask                    (0x10000000)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_quincunx_fw_mask                     (0x0F000000)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_nxt_rpt_flag_fw_mask                 (0x00800000)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_nxt_rpt_flag_sel_mask                (0x00400000)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_block_fw_mask                        (0x00300000)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_block_free_run_mask                  (0x00080000)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_block_sel_mask                       (0x00070000)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_field_fw_mask                        (0x00001000)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_field_free_run_mask                  (0x00000800)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_field_sel_mask                       (0x00000700)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_lflag_fw_mask                        (0x00000010)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_lflag_free_run_mask                  (0x00000008)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_lflag_sel_mask                       (0x00000007)
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_hw_mask_repeat_frame_m_en(data)        (0x80000000&((data)<<31))
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_hw_nxt_rpt_flag_m_en(data)             (0x40000000&((data)<<30))
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_quincunx_sel(data)                   (0x10000000&((data)<<28))
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_quincunx_fw(data)                    (0x0F000000&((data)<<24))
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_nxt_rpt_flag_fw(data)                (0x00800000&((data)<<23))
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_nxt_rpt_flag_sel(data)               (0x00400000&((data)<<22))
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_block_fw(data)                       (0x00300000&((data)<<20))
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_block_free_run(data)                 (0x00080000&((data)<<19))
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_block_sel(data)                      (0x00070000&((data)<<16))
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_field_fw(data)                       (0x00001000&((data)<<12))
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_field_free_run(data)                 (0x00000800&((data)<<11))
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_field_sel(data)                      (0x00000700&((data)<<8))
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_lflag_fw(data)                       (0x00000010&((data)<<4))
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_lflag_free_run(data)                 (0x00000008&((data)<<3))
#define  VODMA2_vodma2_i2rnd_m_flag_i2rnd_m_lflag_sel(data)                      (0x00000007&(data))
#define  VODMA2_vodma2_i2rnd_m_flag_get_i2rnd_hw_mask_repeat_frame_m_en(data)    ((0x80000000&(data))>>31)
#define  VODMA2_vodma2_i2rnd_m_flag_get_i2rnd_hw_nxt_rpt_flag_m_en(data)         ((0x40000000&(data))>>30)
#define  VODMA2_vodma2_i2rnd_m_flag_get_i2rnd_m_quincunx_sel(data)               ((0x10000000&(data))>>28)
#define  VODMA2_vodma2_i2rnd_m_flag_get_i2rnd_m_quincunx_fw(data)                ((0x0F000000&(data))>>24)
#define  VODMA2_vodma2_i2rnd_m_flag_get_i2rnd_m_nxt_rpt_flag_fw(data)            ((0x00800000&(data))>>23)
#define  VODMA2_vodma2_i2rnd_m_flag_get_i2rnd_m_nxt_rpt_flag_sel(data)           ((0x00400000&(data))>>22)
#define  VODMA2_vodma2_i2rnd_m_flag_get_i2rnd_m_block_fw(data)                   ((0x00300000&(data))>>20)
#define  VODMA2_vodma2_i2rnd_m_flag_get_i2rnd_m_block_free_run(data)             ((0x00080000&(data))>>19)
#define  VODMA2_vodma2_i2rnd_m_flag_get_i2rnd_m_block_sel(data)                  ((0x00070000&(data))>>16)
#define  VODMA2_vodma2_i2rnd_m_flag_get_i2rnd_m_field_fw(data)                   ((0x00001000&(data))>>12)
#define  VODMA2_vodma2_i2rnd_m_flag_get_i2rnd_m_field_free_run(data)             ((0x00000800&(data))>>11)
#define  VODMA2_vodma2_i2rnd_m_flag_get_i2rnd_m_field_sel(data)                  ((0x00000700&(data))>>8)
#define  VODMA2_vodma2_i2rnd_m_flag_get_i2rnd_m_lflag_fw(data)                   ((0x00000010&(data))>>4)
#define  VODMA2_vodma2_i2rnd_m_flag_get_i2rnd_m_lflag_free_run(data)             ((0x00000008&(data))>>3)
#define  VODMA2_vodma2_i2rnd_m_flag_get_i2rnd_m_lflag_sel(data)                  (0x00000007&(data))

#define  VODMA2_vodma2_i2rnd_s_flag                                             0x18005E28
#define  VODMA2_vodma2_i2rnd_s_flag_reg_addr                                     "0xB8005E28"
#define  VODMA2_vodma2_i2rnd_s_flag_reg                                          0xB8005E28
#define  VODMA2_vodma2_i2rnd_s_flag_inst_addr                                    "0x009E"
#define  set_VODMA2_vodma2_i2rnd_s_flag_reg(data)                                (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_s_flag_reg)=data)
#define  get_VODMA2_vodma2_i2rnd_s_flag_reg                                      (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_s_flag_reg))
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_hw_mask_repeat_frame_s_en_shift        (31)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_hw_nxt_rpt_flag_s_en_shift             (30)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_quincunx_sel_shift                   (28)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_quincunx_fw_shift                    (24)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_nxt_rpt_flag_fw_shift                (23)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_nxt_rpt_flag_sel_shift               (22)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_block_fw_shift                       (20)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_block_free_run_shift                 (19)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_block_sel_shift                      (16)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_field_fw_shift                       (12)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_field_free_run_shift                 (11)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_field_sel_shift                      (8)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_lflag_fw_shift                       (4)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_lflag_free_run_shift                 (3)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_lflag_sel_shift                      (0)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_hw_mask_repeat_frame_s_en_mask         (0x80000000)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_hw_nxt_rpt_flag_s_en_mask              (0x40000000)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_quincunx_sel_mask                    (0x10000000)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_quincunx_fw_mask                     (0x0F000000)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_nxt_rpt_flag_fw_mask                 (0x00800000)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_nxt_rpt_flag_sel_mask                (0x00400000)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_block_fw_mask                        (0x00300000)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_block_free_run_mask                  (0x00080000)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_block_sel_mask                       (0x00070000)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_field_fw_mask                        (0x00001000)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_field_free_run_mask                  (0x00000800)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_field_sel_mask                       (0x00000700)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_lflag_fw_mask                        (0x00000010)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_lflag_free_run_mask                  (0x00000008)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_lflag_sel_mask                       (0x00000007)
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_hw_mask_repeat_frame_s_en(data)        (0x80000000&((data)<<31))
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_hw_nxt_rpt_flag_s_en(data)             (0x40000000&((data)<<30))
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_quincunx_sel(data)                   (0x10000000&((data)<<28))
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_quincunx_fw(data)                    (0x0F000000&((data)<<24))
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_nxt_rpt_flag_fw(data)                (0x00800000&((data)<<23))
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_nxt_rpt_flag_sel(data)               (0x00400000&((data)<<22))
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_block_fw(data)                       (0x00300000&((data)<<20))
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_block_free_run(data)                 (0x00080000&((data)<<19))
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_block_sel(data)                      (0x00070000&((data)<<16))
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_field_fw(data)                       (0x00001000&((data)<<12))
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_field_free_run(data)                 (0x00000800&((data)<<11))
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_field_sel(data)                      (0x00000700&((data)<<8))
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_lflag_fw(data)                       (0x00000010&((data)<<4))
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_lflag_free_run(data)                 (0x00000008&((data)<<3))
#define  VODMA2_vodma2_i2rnd_s_flag_i2rnd_s_lflag_sel(data)                      (0x00000007&(data))
#define  VODMA2_vodma2_i2rnd_s_flag_get_i2rnd_hw_mask_repeat_frame_s_en(data)    ((0x80000000&(data))>>31)
#define  VODMA2_vodma2_i2rnd_s_flag_get_i2rnd_hw_nxt_rpt_flag_s_en(data)         ((0x40000000&(data))>>30)
#define  VODMA2_vodma2_i2rnd_s_flag_get_i2rnd_s_quincunx_sel(data)               ((0x10000000&(data))>>28)
#define  VODMA2_vodma2_i2rnd_s_flag_get_i2rnd_s_quincunx_fw(data)                ((0x0F000000&(data))>>24)
#define  VODMA2_vodma2_i2rnd_s_flag_get_i2rnd_s_nxt_rpt_flag_fw(data)            ((0x00800000&(data))>>23)
#define  VODMA2_vodma2_i2rnd_s_flag_get_i2rnd_s_nxt_rpt_flag_sel(data)           ((0x00400000&(data))>>22)
#define  VODMA2_vodma2_i2rnd_s_flag_get_i2rnd_s_block_fw(data)                   ((0x00300000&(data))>>20)
#define  VODMA2_vodma2_i2rnd_s_flag_get_i2rnd_s_block_free_run(data)             ((0x00080000&(data))>>19)
#define  VODMA2_vodma2_i2rnd_s_flag_get_i2rnd_s_block_sel(data)                  ((0x00070000&(data))>>16)
#define  VODMA2_vodma2_i2rnd_s_flag_get_i2rnd_s_field_fw(data)                   ((0x00001000&(data))>>12)
#define  VODMA2_vodma2_i2rnd_s_flag_get_i2rnd_s_field_free_run(data)             ((0x00000800&(data))>>11)
#define  VODMA2_vodma2_i2rnd_s_flag_get_i2rnd_s_field_sel(data)                  ((0x00000700&(data))>>8)
#define  VODMA2_vodma2_i2rnd_s_flag_get_i2rnd_s_lflag_fw(data)                   ((0x00000010&(data))>>4)
#define  VODMA2_vodma2_i2rnd_s_flag_get_i2rnd_s_lflag_free_run(data)             ((0x00000008&(data))>>3)
#define  VODMA2_vodma2_i2rnd_s_flag_get_i2rnd_s_lflag_sel(data)                  (0x00000007&(data))

#define  VODMA2_vodma2_i2rnd_irq_en                                             0x18005E2C
#define  VODMA2_vodma2_i2rnd_irq_en_reg_addr                                     "0xB8005E2C"
#define  VODMA2_vodma2_i2rnd_irq_en_reg                                          0xB8005E2C
#define  VODMA2_vodma2_i2rnd_irq_en_inst_addr                                    "0x009F"
#define  set_VODMA2_vodma2_i2rnd_irq_en_reg(data)                                (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_irq_en_reg)=data)
#define  get_VODMA2_vodma2_i2rnd_irq_en_reg                                      (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_irq_en_reg))
#define  VODMA2_vodma2_i2rnd_irq_en_i2rnd_s_in_field_error_irq_en_shift          (5)
#define  VODMA2_vodma2_i2rnd_irq_en_i2rnd_m_in_field_error_irq_en_shift          (4)
#define  VODMA2_vodma2_i2rnd_irq_en_i2rnd_load_hit_den_irq_en_shift              (3)
#define  VODMA2_vodma2_i2rnd_irq_en_i2rnd_s_load_over_max_irq_en_shift           (2)
#define  VODMA2_vodma2_i2rnd_irq_en_i2rnd_m_load_over_max_irq_en_shift           (1)
#define  VODMA2_vodma2_i2rnd_irq_en_i2rnd_not_finish_irq_en_shift                (0)
#define  VODMA2_vodma2_i2rnd_irq_en_i2rnd_s_in_field_error_irq_en_mask           (0x00000020)
#define  VODMA2_vodma2_i2rnd_irq_en_i2rnd_m_in_field_error_irq_en_mask           (0x00000010)
#define  VODMA2_vodma2_i2rnd_irq_en_i2rnd_load_hit_den_irq_en_mask               (0x00000008)
#define  VODMA2_vodma2_i2rnd_irq_en_i2rnd_s_load_over_max_irq_en_mask            (0x00000004)
#define  VODMA2_vodma2_i2rnd_irq_en_i2rnd_m_load_over_max_irq_en_mask            (0x00000002)
#define  VODMA2_vodma2_i2rnd_irq_en_i2rnd_not_finish_irq_en_mask                 (0x00000001)
#define  VODMA2_vodma2_i2rnd_irq_en_i2rnd_s_in_field_error_irq_en(data)          (0x00000020&((data)<<5))
#define  VODMA2_vodma2_i2rnd_irq_en_i2rnd_m_in_field_error_irq_en(data)          (0x00000010&((data)<<4))
#define  VODMA2_vodma2_i2rnd_irq_en_i2rnd_load_hit_den_irq_en(data)              (0x00000008&((data)<<3))
#define  VODMA2_vodma2_i2rnd_irq_en_i2rnd_s_load_over_max_irq_en(data)           (0x00000004&((data)<<2))
#define  VODMA2_vodma2_i2rnd_irq_en_i2rnd_m_load_over_max_irq_en(data)           (0x00000002&((data)<<1))
#define  VODMA2_vodma2_i2rnd_irq_en_i2rnd_not_finish_irq_en(data)                (0x00000001&(data))
#define  VODMA2_vodma2_i2rnd_irq_en_get_i2rnd_s_in_field_error_irq_en(data)      ((0x00000020&(data))>>5)
#define  VODMA2_vodma2_i2rnd_irq_en_get_i2rnd_m_in_field_error_irq_en(data)      ((0x00000010&(data))>>4)
#define  VODMA2_vodma2_i2rnd_irq_en_get_i2rnd_load_hit_den_irq_en(data)          ((0x00000008&(data))>>3)
#define  VODMA2_vodma2_i2rnd_irq_en_get_i2rnd_s_load_over_max_irq_en(data)       ((0x00000004&(data))>>2)
#define  VODMA2_vodma2_i2rnd_irq_en_get_i2rnd_m_load_over_max_irq_en(data)       ((0x00000002&(data))>>1)
#define  VODMA2_vodma2_i2rnd_irq_en_get_i2rnd_not_finish_irq_en(data)            (0x00000001&(data))

#define  VODMA2_vodma2_i2rnd_irq_st                                             0x18005E30
#define  VODMA2_vodma2_i2rnd_irq_st_reg_addr                                     "0xB8005E30"
#define  VODMA2_vodma2_i2rnd_irq_st_reg                                          0xB8005E30
#define  VODMA2_vodma2_i2rnd_irq_st_inst_addr                                    "0x00A0"
#define  set_VODMA2_vodma2_i2rnd_irq_st_reg(data)                                (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_irq_st_reg)=data)
#define  get_VODMA2_vodma2_i2rnd_irq_st_reg                                      (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_irq_st_reg))
#define  VODMA2_vodma2_i2rnd_irq_st_i2rnd_s_in_field_error_irq_st_shift          (5)
#define  VODMA2_vodma2_i2rnd_irq_st_i2rnd_m_in_field_error_irq_st_shift          (4)
#define  VODMA2_vodma2_i2rnd_irq_st_i2rnd_load_hit_den_irq_st_shift              (3)
#define  VODMA2_vodma2_i2rnd_irq_st_i2rnd_s_load_over_max_irq_st_shift           (2)
#define  VODMA2_vodma2_i2rnd_irq_st_i2rnd_m_load_over_max_irq_st_shift           (1)
#define  VODMA2_vodma2_i2rnd_irq_st_i2rnd_not_finish_irq_st_shift                (0)
#define  VODMA2_vodma2_i2rnd_irq_st_i2rnd_s_in_field_error_irq_st_mask           (0x00000020)
#define  VODMA2_vodma2_i2rnd_irq_st_i2rnd_m_in_field_error_irq_st_mask           (0x00000010)
#define  VODMA2_vodma2_i2rnd_irq_st_i2rnd_load_hit_den_irq_st_mask               (0x00000008)
#define  VODMA2_vodma2_i2rnd_irq_st_i2rnd_s_load_over_max_irq_st_mask            (0x00000004)
#define  VODMA2_vodma2_i2rnd_irq_st_i2rnd_m_load_over_max_irq_st_mask            (0x00000002)
#define  VODMA2_vodma2_i2rnd_irq_st_i2rnd_not_finish_irq_st_mask                 (0x00000001)
#define  VODMA2_vodma2_i2rnd_irq_st_i2rnd_s_in_field_error_irq_st(data)          (0x00000020&((data)<<5))
#define  VODMA2_vodma2_i2rnd_irq_st_i2rnd_m_in_field_error_irq_st(data)          (0x00000010&((data)<<4))
#define  VODMA2_vodma2_i2rnd_irq_st_i2rnd_load_hit_den_irq_st(data)              (0x00000008&((data)<<3))
#define  VODMA2_vodma2_i2rnd_irq_st_i2rnd_s_load_over_max_irq_st(data)           (0x00000004&((data)<<2))
#define  VODMA2_vodma2_i2rnd_irq_st_i2rnd_m_load_over_max_irq_st(data)           (0x00000002&((data)<<1))
#define  VODMA2_vodma2_i2rnd_irq_st_i2rnd_not_finish_irq_st(data)                (0x00000001&(data))
#define  VODMA2_vodma2_i2rnd_irq_st_get_i2rnd_s_in_field_error_irq_st(data)      ((0x00000020&(data))>>5)
#define  VODMA2_vodma2_i2rnd_irq_st_get_i2rnd_m_in_field_error_irq_st(data)      ((0x00000010&(data))>>4)
#define  VODMA2_vodma2_i2rnd_irq_st_get_i2rnd_load_hit_den_irq_st(data)          ((0x00000008&(data))>>3)
#define  VODMA2_vodma2_i2rnd_irq_st_get_i2rnd_s_load_over_max_irq_st(data)       ((0x00000004&(data))>>2)
#define  VODMA2_vodma2_i2rnd_irq_st_get_i2rnd_m_load_over_max_irq_st(data)       ((0x00000002&(data))>>1)
#define  VODMA2_vodma2_i2rnd_irq_st_get_i2rnd_not_finish_irq_st(data)            (0x00000001&(data))

#define  VODMA2_vodma2_i2rnd_measure_frame                                      0x18005E34
#define  VODMA2_vodma2_i2rnd_measure_frame_reg_addr                              "0xB8005E34"
#define  VODMA2_vodma2_i2rnd_measure_frame_reg                                   0xB8005E34
#define  VODMA2_vodma2_i2rnd_measure_frame_inst_addr                             "0x00A1"
#define  set_VODMA2_vodma2_i2rnd_measure_frame_reg(data)                         (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_measure_frame_reg)=data)
#define  get_VODMA2_vodma2_i2rnd_measure_frame_reg                               (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_measure_frame_reg))
#define  VODMA2_vodma2_i2rnd_measure_frame_i2rnd_frame_measure_shift             (31)
#define  VODMA2_vodma2_i2rnd_measure_frame_i2rnd_ori_frame_cnt_shift             (16)
#define  VODMA2_vodma2_i2rnd_measure_frame_i2rnd_s_mask_frame_cnt_shift          (8)
#define  VODMA2_vodma2_i2rnd_measure_frame_i2rnd_m_mask_frame_cnt_shift          (0)
#define  VODMA2_vodma2_i2rnd_measure_frame_i2rnd_frame_measure_mask              (0x80000000)
#define  VODMA2_vodma2_i2rnd_measure_frame_i2rnd_ori_frame_cnt_mask              (0x0FFF0000)
#define  VODMA2_vodma2_i2rnd_measure_frame_i2rnd_s_mask_frame_cnt_mask           (0x0000FF00)
#define  VODMA2_vodma2_i2rnd_measure_frame_i2rnd_m_mask_frame_cnt_mask           (0x000000FF)
#define  VODMA2_vodma2_i2rnd_measure_frame_i2rnd_frame_measure(data)             (0x80000000&((data)<<31))
#define  VODMA2_vodma2_i2rnd_measure_frame_i2rnd_ori_frame_cnt(data)             (0x0FFF0000&((data)<<16))
#define  VODMA2_vodma2_i2rnd_measure_frame_i2rnd_s_mask_frame_cnt(data)          (0x0000FF00&((data)<<8))
#define  VODMA2_vodma2_i2rnd_measure_frame_i2rnd_m_mask_frame_cnt(data)          (0x000000FF&(data))
#define  VODMA2_vodma2_i2rnd_measure_frame_get_i2rnd_frame_measure(data)         ((0x80000000&(data))>>31)
#define  VODMA2_vodma2_i2rnd_measure_frame_get_i2rnd_ori_frame_cnt(data)         ((0x0FFF0000&(data))>>16)
#define  VODMA2_vodma2_i2rnd_measure_frame_get_i2rnd_s_mask_frame_cnt(data)      ((0x0000FF00&(data))>>8)
#define  VODMA2_vodma2_i2rnd_measure_frame_get_i2rnd_m_mask_frame_cnt(data)      (0x000000FF&(data))

#define  VODMA2_vodma2_i2rnd_fifo_st                                            0x18005E38
#define  VODMA2_vodma2_i2rnd_fifo_st_reg_addr                                    "0xB8005E38"
#define  VODMA2_vodma2_i2rnd_fifo_st_reg                                         0xB8005E38
#define  VODMA2_vodma2_i2rnd_fifo_st_inst_addr                                   "0x00A2"
#define  set_VODMA2_vodma2_i2rnd_fifo_st_reg(data)                               (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_fifo_st_reg)=data)
#define  get_VODMA2_vodma2_i2rnd_fifo_st_reg                                     (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_fifo_st_reg))
#define  VODMA2_vodma2_i2rnd_fifo_st_info_i3ddma_overflow_shift                  (31)
#define  VODMA2_vodma2_i2rnd_fifo_st_info_dispm_overflow_shift                   (30)
#define  VODMA2_vodma2_i2rnd_fifo_st_dma_info_water_i3ddma_shift                 (20)
#define  VODMA2_vodma2_i2rnd_fifo_st_dma_info_water_dispm_shift                  (16)
#define  VODMA2_vodma2_i2rnd_fifo_st_dma_info_wptr_i3ddma_shift                  (12)
#define  VODMA2_vodma2_i2rnd_fifo_st_dma_info_rptr_i3ddma_shift                  (8)
#define  VODMA2_vodma2_i2rnd_fifo_st_dma_info_wptr_dispm_shift                   (4)
#define  VODMA2_vodma2_i2rnd_fifo_st_dma_info_rptr_dispm_shift                   (0)
#define  VODMA2_vodma2_i2rnd_fifo_st_info_i3ddma_overflow_mask                   (0x80000000)
#define  VODMA2_vodma2_i2rnd_fifo_st_info_dispm_overflow_mask                    (0x40000000)
#define  VODMA2_vodma2_i2rnd_fifo_st_dma_info_water_i3ddma_mask                  (0x00F00000)
#define  VODMA2_vodma2_i2rnd_fifo_st_dma_info_water_dispm_mask                   (0x000F0000)
#define  VODMA2_vodma2_i2rnd_fifo_st_dma_info_wptr_i3ddma_mask                   (0x0000F000)
#define  VODMA2_vodma2_i2rnd_fifo_st_dma_info_rptr_i3ddma_mask                   (0x00000F00)
#define  VODMA2_vodma2_i2rnd_fifo_st_dma_info_wptr_dispm_mask                    (0x000000F0)
#define  VODMA2_vodma2_i2rnd_fifo_st_dma_info_rptr_dispm_mask                    (0x0000000F)
#define  VODMA2_vodma2_i2rnd_fifo_st_info_i3ddma_overflow(data)                  (0x80000000&((data)<<31))
#define  VODMA2_vodma2_i2rnd_fifo_st_info_dispm_overflow(data)                   (0x40000000&((data)<<30))
#define  VODMA2_vodma2_i2rnd_fifo_st_dma_info_water_i3ddma(data)                 (0x00F00000&((data)<<20))
#define  VODMA2_vodma2_i2rnd_fifo_st_dma_info_water_dispm(data)                  (0x000F0000&((data)<<16))
#define  VODMA2_vodma2_i2rnd_fifo_st_dma_info_wptr_i3ddma(data)                  (0x0000F000&((data)<<12))
#define  VODMA2_vodma2_i2rnd_fifo_st_dma_info_rptr_i3ddma(data)                  (0x00000F00&((data)<<8))
#define  VODMA2_vodma2_i2rnd_fifo_st_dma_info_wptr_dispm(data)                   (0x000000F0&((data)<<4))
#define  VODMA2_vodma2_i2rnd_fifo_st_dma_info_rptr_dispm(data)                   (0x0000000F&(data))
#define  VODMA2_vodma2_i2rnd_fifo_st_get_info_i3ddma_overflow(data)              ((0x80000000&(data))>>31)
#define  VODMA2_vodma2_i2rnd_fifo_st_get_info_dispm_overflow(data)               ((0x40000000&(data))>>30)
#define  VODMA2_vodma2_i2rnd_fifo_st_get_dma_info_water_i3ddma(data)             ((0x00F00000&(data))>>20)
#define  VODMA2_vodma2_i2rnd_fifo_st_get_dma_info_water_dispm(data)              ((0x000F0000&(data))>>16)
#define  VODMA2_vodma2_i2rnd_fifo_st_get_dma_info_wptr_i3ddma(data)              ((0x0000F000&(data))>>12)
#define  VODMA2_vodma2_i2rnd_fifo_st_get_dma_info_rptr_i3ddma(data)              ((0x00000F00&(data))>>8)
#define  VODMA2_vodma2_i2rnd_fifo_st_get_dma_info_wptr_dispm(data)               ((0x000000F0&(data))>>4)
#define  VODMA2_vodma2_i2rnd_fifo_st_get_dma_info_rptr_dispm(data)               (0x0000000F&(data))

#define  VODMA2_vodma2_i2rnd_st                                                 0x18005E3C
#define  VODMA2_vodma2_i2rnd_st_reg_addr                                         "0xB8005E3C"
#define  VODMA2_vodma2_i2rnd_st_reg                                              0xB8005E3C
#define  VODMA2_vodma2_i2rnd_st_inst_addr                                        "0x00A3"
#define  set_VODMA2_vodma2_i2rnd_st_reg(data)                                    (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_st_reg)=data)
#define  get_VODMA2_vodma2_i2rnd_st_reg                                          (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_st_reg))
#define  VODMA2_vodma2_i2rnd_st_i2rnd_s_nxt_rpt_flag_shift                       (31)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_m_nxt_rpt_flag_shift                       (30)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_nxt_rpt_flag_shift                         (29)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_s_quincunx_shift                           (25)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_m_quincunx_shift                           (21)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_quincunx_shift                             (17)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_s_block_shift                              (15)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_s_field_shift                              (14)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_s_lflag_shift                              (13)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_m_block_shift                              (11)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_m_field_shift                              (10)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_m_lflag_shift                              (9)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_block_shift                                (7)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_field_shift                                (6)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_lflag_shift                                (5)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_src_flag_shift                             (4)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_st_shift                                   (0)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_s_nxt_rpt_flag_mask                        (0x80000000)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_m_nxt_rpt_flag_mask                        (0x40000000)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_nxt_rpt_flag_mask                          (0x20000000)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_s_quincunx_mask                            (0x1E000000)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_m_quincunx_mask                            (0x01E00000)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_quincunx_mask                              (0x001E0000)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_s_block_mask                               (0x00018000)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_s_field_mask                               (0x00004000)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_s_lflag_mask                               (0x00002000)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_m_block_mask                               (0x00001800)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_m_field_mask                               (0x00000400)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_m_lflag_mask                               (0x00000200)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_block_mask                                 (0x00000180)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_field_mask                                 (0x00000040)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_lflag_mask                                 (0x00000020)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_src_flag_mask                              (0x00000010)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_st_mask                                    (0x0000000F)
#define  VODMA2_vodma2_i2rnd_st_i2rnd_s_nxt_rpt_flag(data)                       (0x80000000&((data)<<31))
#define  VODMA2_vodma2_i2rnd_st_i2rnd_m_nxt_rpt_flag(data)                       (0x40000000&((data)<<30))
#define  VODMA2_vodma2_i2rnd_st_i2rnd_nxt_rpt_flag(data)                         (0x20000000&((data)<<29))
#define  VODMA2_vodma2_i2rnd_st_i2rnd_s_quincunx(data)                           (0x1E000000&((data)<<25))
#define  VODMA2_vodma2_i2rnd_st_i2rnd_m_quincunx(data)                           (0x01E00000&((data)<<21))
#define  VODMA2_vodma2_i2rnd_st_i2rnd_quincunx(data)                             (0x001E0000&((data)<<17))
#define  VODMA2_vodma2_i2rnd_st_i2rnd_s_block(data)                              (0x00018000&((data)<<15))
#define  VODMA2_vodma2_i2rnd_st_i2rnd_s_field(data)                              (0x00004000&((data)<<14))
#define  VODMA2_vodma2_i2rnd_st_i2rnd_s_lflag(data)                              (0x00002000&((data)<<13))
#define  VODMA2_vodma2_i2rnd_st_i2rnd_m_block(data)                              (0x00001800&((data)<<11))
#define  VODMA2_vodma2_i2rnd_st_i2rnd_m_field(data)                              (0x00000400&((data)<<10))
#define  VODMA2_vodma2_i2rnd_st_i2rnd_m_lflag(data)                              (0x00000200&((data)<<9))
#define  VODMA2_vodma2_i2rnd_st_i2rnd_block(data)                                (0x00000180&((data)<<7))
#define  VODMA2_vodma2_i2rnd_st_i2rnd_field(data)                                (0x00000040&((data)<<6))
#define  VODMA2_vodma2_i2rnd_st_i2rnd_lflag(data)                                (0x00000020&((data)<<5))
#define  VODMA2_vodma2_i2rnd_st_i2rnd_src_flag(data)                             (0x00000010&((data)<<4))
#define  VODMA2_vodma2_i2rnd_st_i2rnd_st(data)                                   (0x0000000F&(data))
#define  VODMA2_vodma2_i2rnd_st_get_i2rnd_s_nxt_rpt_flag(data)                   ((0x80000000&(data))>>31)
#define  VODMA2_vodma2_i2rnd_st_get_i2rnd_m_nxt_rpt_flag(data)                   ((0x40000000&(data))>>30)
#define  VODMA2_vodma2_i2rnd_st_get_i2rnd_nxt_rpt_flag(data)                     ((0x20000000&(data))>>29)
#define  VODMA2_vodma2_i2rnd_st_get_i2rnd_s_quincunx(data)                       ((0x1E000000&(data))>>25)
#define  VODMA2_vodma2_i2rnd_st_get_i2rnd_m_quincunx(data)                       ((0x01E00000&(data))>>21)
#define  VODMA2_vodma2_i2rnd_st_get_i2rnd_quincunx(data)                         ((0x001E0000&(data))>>17)
#define  VODMA2_vodma2_i2rnd_st_get_i2rnd_s_block(data)                          ((0x00018000&(data))>>15)
#define  VODMA2_vodma2_i2rnd_st_get_i2rnd_s_field(data)                          ((0x00004000&(data))>>14)
#define  VODMA2_vodma2_i2rnd_st_get_i2rnd_s_lflag(data)                          ((0x00002000&(data))>>13)
#define  VODMA2_vodma2_i2rnd_st_get_i2rnd_m_block(data)                          ((0x00001800&(data))>>11)
#define  VODMA2_vodma2_i2rnd_st_get_i2rnd_m_field(data)                          ((0x00000400&(data))>>10)
#define  VODMA2_vodma2_i2rnd_st_get_i2rnd_m_lflag(data)                          ((0x00000200&(data))>>9)
#define  VODMA2_vodma2_i2rnd_st_get_i2rnd_block(data)                            ((0x00000180&(data))>>7)
#define  VODMA2_vodma2_i2rnd_st_get_i2rnd_field(data)                            ((0x00000040&(data))>>6)
#define  VODMA2_vodma2_i2rnd_st_get_i2rnd_lflag(data)                            ((0x00000020&(data))>>5)
#define  VODMA2_vodma2_i2rnd_st_get_i2rnd_src_flag(data)                         ((0x00000010&(data))>>4)
#define  VODMA2_vodma2_i2rnd_st_get_i2rnd_st(data)                               (0x0000000F&(data))

#define  VODMA2_vodma2_i2rnd_fifo_th                                            0x18005E40
#define  VODMA2_vodma2_i2rnd_fifo_th_reg_addr                                    "0xB8005E40"
#define  VODMA2_vodma2_i2rnd_fifo_th_reg                                         0xB8005E40
#define  VODMA2_vodma2_i2rnd_fifo_th_inst_addr                                   "0x00A4"
#define  set_VODMA2_vodma2_i2rnd_fifo_th_reg(data)                               (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_fifo_th_reg)=data)
#define  get_VODMA2_vodma2_i2rnd_fifo_th_reg                                     (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_fifo_th_reg))
#define  VODMA2_vodma2_i2rnd_fifo_th_flag_fifo_style_i3ddma_shift                (31)
#define  VODMA2_vodma2_i2rnd_fifo_th_flag_fifo_style_dispm_shift                 (30)
#define  VODMA2_vodma2_i2rnd_fifo_th_flag_fifo_fast_int_i3ddma_shift             (29)
#define  VODMA2_vodma2_i2rnd_fifo_th_flag_fifo_fast_int_dispm_shift              (28)
#define  VODMA2_vodma2_i2rnd_fifo_th_dram_buf_num_i3ddma_shift                   (12)
#define  VODMA2_vodma2_i2rnd_fifo_th_dram_buf_num_dispm_shift                    (8)
#define  VODMA2_vodma2_i2rnd_fifo_th_dma_info_th_i3ddma_shift                    (4)
#define  VODMA2_vodma2_i2rnd_fifo_th_dma_info_th_dispm_shift                     (0)
#define  VODMA2_vodma2_i2rnd_fifo_th_flag_fifo_style_i3ddma_mask                 (0x80000000)
#define  VODMA2_vodma2_i2rnd_fifo_th_flag_fifo_style_dispm_mask                  (0x40000000)
#define  VODMA2_vodma2_i2rnd_fifo_th_flag_fifo_fast_int_i3ddma_mask              (0x20000000)
#define  VODMA2_vodma2_i2rnd_fifo_th_flag_fifo_fast_int_dispm_mask               (0x10000000)
#define  VODMA2_vodma2_i2rnd_fifo_th_dram_buf_num_i3ddma_mask                    (0x0000F000)
#define  VODMA2_vodma2_i2rnd_fifo_th_dram_buf_num_dispm_mask                     (0x00000F00)
#define  VODMA2_vodma2_i2rnd_fifo_th_dma_info_th_i3ddma_mask                     (0x000000F0)
#define  VODMA2_vodma2_i2rnd_fifo_th_dma_info_th_dispm_mask                      (0x0000000F)
#define  VODMA2_vodma2_i2rnd_fifo_th_flag_fifo_style_i3ddma(data)                (0x80000000&((data)<<31))
#define  VODMA2_vodma2_i2rnd_fifo_th_flag_fifo_style_dispm(data)                 (0x40000000&((data)<<30))
#define  VODMA2_vodma2_i2rnd_fifo_th_flag_fifo_fast_int_i3ddma(data)             (0x20000000&((data)<<29))
#define  VODMA2_vodma2_i2rnd_fifo_th_flag_fifo_fast_int_dispm(data)              (0x10000000&((data)<<28))
#define  VODMA2_vodma2_i2rnd_fifo_th_dram_buf_num_i3ddma(data)                   (0x0000F000&((data)<<12))
#define  VODMA2_vodma2_i2rnd_fifo_th_dram_buf_num_dispm(data)                    (0x00000F00&((data)<<8))
#define  VODMA2_vodma2_i2rnd_fifo_th_dma_info_th_i3ddma(data)                    (0x000000F0&((data)<<4))
#define  VODMA2_vodma2_i2rnd_fifo_th_dma_info_th_dispm(data)                     (0x0000000F&(data))
#define  VODMA2_vodma2_i2rnd_fifo_th_get_flag_fifo_style_i3ddma(data)            ((0x80000000&(data))>>31)
#define  VODMA2_vodma2_i2rnd_fifo_th_get_flag_fifo_style_dispm(data)             ((0x40000000&(data))>>30)
#define  VODMA2_vodma2_i2rnd_fifo_th_get_flag_fifo_fast_int_i3ddma(data)         ((0x20000000&(data))>>29)
#define  VODMA2_vodma2_i2rnd_fifo_th_get_flag_fifo_fast_int_dispm(data)          ((0x10000000&(data))>>28)
#define  VODMA2_vodma2_i2rnd_fifo_th_get_dram_buf_num_i3ddma(data)               ((0x0000F000&(data))>>12)
#define  VODMA2_vodma2_i2rnd_fifo_th_get_dram_buf_num_dispm(data)                ((0x00000F00&(data))>>8)
#define  VODMA2_vodma2_i2rnd_fifo_th_get_dma_info_th_i3ddma(data)                ((0x000000F0&(data))>>4)
#define  VODMA2_vodma2_i2rnd_fifo_th_get_dma_info_th_dispm(data)                 (0x0000000F&(data))

#define  VODMA2_vodma2_i2rnd_dma_info                                           0x18005E44
#define  VODMA2_vodma2_i2rnd_dma_info_reg_addr                                   "0xB8005E44"
#define  VODMA2_vodma2_i2rnd_dma_info_reg                                        0xB8005E44
#define  VODMA2_vodma2_i2rnd_dma_info_inst_addr                                  "0x00A5"
#define  set_VODMA2_vodma2_i2rnd_dma_info_reg(data)                              (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_dma_info_reg)=data)
#define  get_VODMA2_vodma2_i2rnd_dma_info_reg                                    (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_dma_info_reg))
#define  VODMA2_vodma2_i2rnd_dma_info_dma_info_wptr_fw_set_dispm_shift           (28)
#define  VODMA2_vodma2_i2rnd_dma_info_dma_info_wptr_fw_dispm_shift               (24)
#define  VODMA2_vodma2_i2rnd_dma_info_dma_info_wptr_fw_set_i3ddma_shift          (20)
#define  VODMA2_vodma2_i2rnd_dma_info_dma_info_wptr_fw_i3ddma_shift              (16)
#define  VODMA2_vodma2_i2rnd_dma_info_dma_info_rptr_fw_set_dispm_shift           (12)
#define  VODMA2_vodma2_i2rnd_dma_info_dma_info_rptr_fw_dispm_shift               (8)
#define  VODMA2_vodma2_i2rnd_dma_info_dma_info_rptr_fw_set_i3ddma_shift          (4)
#define  VODMA2_vodma2_i2rnd_dma_info_dma_info_rptr_fw_i3ddma_shift              (0)
#define  VODMA2_vodma2_i2rnd_dma_info_dma_info_wptr_fw_set_dispm_mask            (0x10000000)
#define  VODMA2_vodma2_i2rnd_dma_info_dma_info_wptr_fw_dispm_mask                (0x0F000000)
#define  VODMA2_vodma2_i2rnd_dma_info_dma_info_wptr_fw_set_i3ddma_mask           (0x00100000)
#define  VODMA2_vodma2_i2rnd_dma_info_dma_info_wptr_fw_i3ddma_mask               (0x000F0000)
#define  VODMA2_vodma2_i2rnd_dma_info_dma_info_rptr_fw_set_dispm_mask            (0x00001000)
#define  VODMA2_vodma2_i2rnd_dma_info_dma_info_rptr_fw_dispm_mask                (0x00000F00)
#define  VODMA2_vodma2_i2rnd_dma_info_dma_info_rptr_fw_set_i3ddma_mask           (0x00000010)
#define  VODMA2_vodma2_i2rnd_dma_info_dma_info_rptr_fw_i3ddma_mask               (0x0000000F)
#define  VODMA2_vodma2_i2rnd_dma_info_dma_info_wptr_fw_set_dispm(data)           (0x10000000&((data)<<28))
#define  VODMA2_vodma2_i2rnd_dma_info_dma_info_wptr_fw_dispm(data)               (0x0F000000&((data)<<24))
#define  VODMA2_vodma2_i2rnd_dma_info_dma_info_wptr_fw_set_i3ddma(data)          (0x00100000&((data)<<20))
#define  VODMA2_vodma2_i2rnd_dma_info_dma_info_wptr_fw_i3ddma(data)              (0x000F0000&((data)<<16))
#define  VODMA2_vodma2_i2rnd_dma_info_dma_info_rptr_fw_set_dispm(data)           (0x00001000&((data)<<12))
#define  VODMA2_vodma2_i2rnd_dma_info_dma_info_rptr_fw_dispm(data)               (0x00000F00&((data)<<8))
#define  VODMA2_vodma2_i2rnd_dma_info_dma_info_rptr_fw_set_i3ddma(data)          (0x00000010&((data)<<4))
#define  VODMA2_vodma2_i2rnd_dma_info_dma_info_rptr_fw_i3ddma(data)              (0x0000000F&(data))
#define  VODMA2_vodma2_i2rnd_dma_info_get_dma_info_wptr_fw_set_dispm(data)       ((0x10000000&(data))>>28)
#define  VODMA2_vodma2_i2rnd_dma_info_get_dma_info_wptr_fw_dispm(data)           ((0x0F000000&(data))>>24)
#define  VODMA2_vodma2_i2rnd_dma_info_get_dma_info_wptr_fw_set_i3ddma(data)      ((0x00100000&(data))>>20)
#define  VODMA2_vodma2_i2rnd_dma_info_get_dma_info_wptr_fw_i3ddma(data)          ((0x000F0000&(data))>>16)
#define  VODMA2_vodma2_i2rnd_dma_info_get_dma_info_rptr_fw_set_dispm(data)       ((0x00001000&(data))>>12)
#define  VODMA2_vodma2_i2rnd_dma_info_get_dma_info_rptr_fw_dispm(data)           ((0x00000F00&(data))>>8)
#define  VODMA2_vodma2_i2rnd_dma_info_get_dma_info_rptr_fw_set_i3ddma(data)      ((0x00000010&(data))>>4)
#define  VODMA2_vodma2_i2rnd_dma_info_get_dma_info_rptr_fw_i3ddma(data)          (0x0000000F&(data))

#define  VODMA2_vodma2_i2rnd_m_period_load                                      0x18005E48
#define  VODMA2_vodma2_i2rnd_m_period_load_reg_addr                              "0xB8005E48"
#define  VODMA2_vodma2_i2rnd_m_period_load_reg                                   0xB8005E48
#define  VODMA2_vodma2_i2rnd_m_period_load_inst_addr                             "0x00A6"
#define  set_VODMA2_vodma2_i2rnd_m_period_load_reg(data)                         (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_m_period_load_reg)=data)
#define  get_VODMA2_vodma2_i2rnd_m_period_load_reg                               (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_m_period_load_reg))
#define  VODMA2_vodma2_i2rnd_m_period_load_i2rnd_period_clk_src_shift            (31)
#define  VODMA2_vodma2_i2rnd_m_period_load_i2rnd_m_period_load_shift             (0)
#define  VODMA2_vodma2_i2rnd_m_period_load_i2rnd_period_clk_src_mask             (0x80000000)
#define  VODMA2_vodma2_i2rnd_m_period_load_i2rnd_m_period_load_mask              (0x0FFFFFFF)
#define  VODMA2_vodma2_i2rnd_m_period_load_i2rnd_period_clk_src(data)            (0x80000000&((data)<<31))
#define  VODMA2_vodma2_i2rnd_m_period_load_i2rnd_m_period_load(data)             (0x0FFFFFFF&(data))
#define  VODMA2_vodma2_i2rnd_m_period_load_get_i2rnd_period_clk_src(data)        ((0x80000000&(data))>>31)
#define  VODMA2_vodma2_i2rnd_m_period_load_get_i2rnd_m_period_load(data)         (0x0FFFFFFF&(data))

#define  VODMA2_vodma2_i2rnd_m_period                                           0x18005E4C
#define  VODMA2_vodma2_i2rnd_m_period_reg_addr                                   "0xB8005E4C"
#define  VODMA2_vodma2_i2rnd_m_period_reg                                        0xB8005E4C
#define  VODMA2_vodma2_i2rnd_m_period_inst_addr                                  "0x00A7"
#define  set_VODMA2_vodma2_i2rnd_m_period_reg(data)                              (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_m_period_reg)=data)
#define  get_VODMA2_vodma2_i2rnd_m_period_reg                                    (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_m_period_reg))
#define  VODMA2_vodma2_i2rnd_m_period_i2rnd_m_period_shift                       (0)
#define  VODMA2_vodma2_i2rnd_m_period_i2rnd_m_period_mask                        (0x0FFFFFFF)
#define  VODMA2_vodma2_i2rnd_m_period_i2rnd_m_period(data)                       (0x0FFFFFFF&(data))
#define  VODMA2_vodma2_i2rnd_m_period_get_i2rnd_m_period(data)                   (0x0FFFFFFF&(data))

#define  VODMA2_vodma2_i2rnd_s_period_load                                      0x18005E50
#define  VODMA2_vodma2_i2rnd_s_period_load_reg_addr                              "0xB8005E50"
#define  VODMA2_vodma2_i2rnd_s_period_load_reg                                   0xB8005E50
#define  VODMA2_vodma2_i2rnd_s_period_load_inst_addr                             "0x00A8"
#define  set_VODMA2_vodma2_i2rnd_s_period_load_reg(data)                         (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_s_period_load_reg)=data)
#define  get_VODMA2_vodma2_i2rnd_s_period_load_reg                               (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_s_period_load_reg))
#define  VODMA2_vodma2_i2rnd_s_period_load_i2rnd_s_period_load_shift             (0)
#define  VODMA2_vodma2_i2rnd_s_period_load_i2rnd_s_period_load_mask              (0x0FFFFFFF)
#define  VODMA2_vodma2_i2rnd_s_period_load_i2rnd_s_period_load(data)             (0x0FFFFFFF&(data))
#define  VODMA2_vodma2_i2rnd_s_period_load_get_i2rnd_s_period_load(data)         (0x0FFFFFFF&(data))

#define  VODMA2_vodma2_i2rnd_s_period                                           0x18005E54
#define  VODMA2_vodma2_i2rnd_s_period_reg_addr                                   "0xB8005E54"
#define  VODMA2_vodma2_i2rnd_s_period_reg                                        0xB8005E54
#define  VODMA2_vodma2_i2rnd_s_period_inst_addr                                  "0x00A9"
#define  set_VODMA2_vodma2_i2rnd_s_period_reg(data)                              (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_s_period_reg)=data)
#define  get_VODMA2_vodma2_i2rnd_s_period_reg                                    (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_s_period_reg))
#define  VODMA2_vodma2_i2rnd_s_period_i2rnd_s_period_shift                       (0)
#define  VODMA2_vodma2_i2rnd_s_period_i2rnd_s_period_mask                        (0x0FFFFFFF)
#define  VODMA2_vodma2_i2rnd_s_period_i2rnd_s_period(data)                       (0x0FFFFFFF&(data))
#define  VODMA2_vodma2_i2rnd_s_period_get_i2rnd_s_period(data)                   (0x0FFFFFFF&(data))

#define  VODMA2_vodma2_i2rnd_m_measure                                          0x18005E58
#define  VODMA2_vodma2_i2rnd_m_measure_reg_addr                                  "0xB8005E58"
#define  VODMA2_vodma2_i2rnd_m_measure_reg                                       0xB8005E58
#define  VODMA2_vodma2_i2rnd_m_measure_inst_addr                                 "0x00AA"
#define  set_VODMA2_vodma2_i2rnd_m_measure_reg(data)                             (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_m_measure_reg)=data)
#define  get_VODMA2_vodma2_i2rnd_m_measure_reg                                   (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_m_measure_reg))
#define  VODMA2_vodma2_i2rnd_m_measure_i2rnd_load_time_measure_shift             (31)
#define  VODMA2_vodma2_i2rnd_m_measure_i2rnd_load_time_measure_long_term_shift   (30)
#define  VODMA2_vodma2_i2rnd_m_measure_i2rnd_m_load_time_shift                   (0)
#define  VODMA2_vodma2_i2rnd_m_measure_i2rnd_load_time_measure_mask              (0x80000000)
#define  VODMA2_vodma2_i2rnd_m_measure_i2rnd_load_time_measure_long_term_mask    (0x40000000)
#define  VODMA2_vodma2_i2rnd_m_measure_i2rnd_m_load_time_mask                    (0x0FFFFFFF)
#define  VODMA2_vodma2_i2rnd_m_measure_i2rnd_load_time_measure(data)             (0x80000000&((data)<<31))
#define  VODMA2_vodma2_i2rnd_m_measure_i2rnd_load_time_measure_long_term(data)   (0x40000000&((data)<<30))
#define  VODMA2_vodma2_i2rnd_m_measure_i2rnd_m_load_time(data)                   (0x0FFFFFFF&(data))
#define  VODMA2_vodma2_i2rnd_m_measure_get_i2rnd_load_time_measure(data)         ((0x80000000&(data))>>31)
#define  VODMA2_vodma2_i2rnd_m_measure_get_i2rnd_load_time_measure_long_term(data) ((0x40000000&(data))>>30)
#define  VODMA2_vodma2_i2rnd_m_measure_get_i2rnd_m_load_time(data)               (0x0FFFFFFF&(data))

#define  VODMA2_vodma2_i2rnd_s_measure                                          0x18005E5C
#define  VODMA2_vodma2_i2rnd_s_measure_reg_addr                                  "0xB8005E5C"
#define  VODMA2_vodma2_i2rnd_s_measure_reg                                       0xB8005E5C
#define  VODMA2_vodma2_i2rnd_s_measure_inst_addr                                 "0x00AB"
#define  set_VODMA2_vodma2_i2rnd_s_measure_reg(data)                             (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_s_measure_reg)=data)
#define  get_VODMA2_vodma2_i2rnd_s_measure_reg                                   (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_s_measure_reg))
#define  VODMA2_vodma2_i2rnd_s_measure_i2rnd_s_load_time_shift                   (0)
#define  VODMA2_vodma2_i2rnd_s_measure_i2rnd_s_load_time_mask                    (0x0FFFFFFF)
#define  VODMA2_vodma2_i2rnd_s_measure_i2rnd_s_load_time(data)                   (0x0FFFFFFF&(data))
#define  VODMA2_vodma2_i2rnd_s_measure_get_i2rnd_s_load_time(data)               (0x0FFFFFFF&(data))

#define  VODMA2_vodma2_i2rnd_m_period_load_dbg                                  0x18005E60
#define  VODMA2_vodma2_i2rnd_m_period_load_dbg_reg_addr                          "0xB8005E60"
#define  VODMA2_vodma2_i2rnd_m_period_load_dbg_reg                               0xB8005E60
#define  VODMA2_vodma2_i2rnd_m_period_load_dbg_inst_addr                         "0x00AC"
#define  set_VODMA2_vodma2_i2rnd_m_period_load_dbg_reg(data)                     (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_m_period_load_dbg_reg)=data)
#define  get_VODMA2_vodma2_i2rnd_m_period_load_dbg_reg                           (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_m_period_load_dbg_reg))
#define  VODMA2_vodma2_i2rnd_m_period_load_dbg_i2rnd_period_load_max_measure_en_shift (31)
#define  VODMA2_vodma2_i2rnd_m_period_load_dbg_i2rnd_period_load_max_dbg_en_shift (30)
#define  VODMA2_vodma2_i2rnd_m_period_load_dbg_i2rnd_m_period_load_max_shift     (0)
#define  VODMA2_vodma2_i2rnd_m_period_load_dbg_i2rnd_period_load_max_measure_en_mask (0x80000000)
#define  VODMA2_vodma2_i2rnd_m_period_load_dbg_i2rnd_period_load_max_dbg_en_mask (0x40000000)
#define  VODMA2_vodma2_i2rnd_m_period_load_dbg_i2rnd_m_period_load_max_mask      (0x0FFFFFFF)
#define  VODMA2_vodma2_i2rnd_m_period_load_dbg_i2rnd_period_load_max_measure_en(data) (0x80000000&((data)<<31))
#define  VODMA2_vodma2_i2rnd_m_period_load_dbg_i2rnd_period_load_max_dbg_en(data) (0x40000000&((data)<<30))
#define  VODMA2_vodma2_i2rnd_m_period_load_dbg_i2rnd_m_period_load_max(data)     (0x0FFFFFFF&(data))
#define  VODMA2_vodma2_i2rnd_m_period_load_dbg_get_i2rnd_period_load_max_measure_en(data) ((0x80000000&(data))>>31)
#define  VODMA2_vodma2_i2rnd_m_period_load_dbg_get_i2rnd_period_load_max_dbg_en(data) ((0x40000000&(data))>>30)
#define  VODMA2_vodma2_i2rnd_m_period_load_dbg_get_i2rnd_m_period_load_max(data) (0x0FFFFFFF&(data))

#define  VODMA2_vodma2_i2rnd_s_period_load_dbg                                  0x18005E64
#define  VODMA2_vodma2_i2rnd_s_period_load_dbg_reg_addr                          "0xB8005E64"
#define  VODMA2_vodma2_i2rnd_s_period_load_dbg_reg                               0xB8005E64
#define  VODMA2_vodma2_i2rnd_s_period_load_dbg_inst_addr                         "0x00AD"
#define  set_VODMA2_vodma2_i2rnd_s_period_load_dbg_reg(data)                     (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_s_period_load_dbg_reg)=data)
#define  get_VODMA2_vodma2_i2rnd_s_period_load_dbg_reg                           (*((volatile unsigned int*)VODMA2_vodma2_i2rnd_s_period_load_dbg_reg))
#define  VODMA2_vodma2_i2rnd_s_period_load_dbg_i2rnd_s_period_load_max_shift     (0)
#define  VODMA2_vodma2_i2rnd_s_period_load_dbg_i2rnd_s_period_load_max_mask      (0x0FFFFFFF)
#define  VODMA2_vodma2_i2rnd_s_period_load_dbg_i2rnd_s_period_load_max(data)     (0x0FFFFFFF&(data))
#define  VODMA2_vodma2_i2rnd_s_period_load_dbg_get_i2rnd_s_period_load_max(data) (0x0FFFFFFF&(data))

#define  VODMA2_vodma2_timing_monitor_ctrl                                      0x18005E80
#define  VODMA2_vodma2_timing_monitor_ctrl_reg_addr                              "0xB8005E80"
#define  VODMA2_vodma2_timing_monitor_ctrl_reg                                   0xB8005E80
#define  VODMA2_vodma2_timing_monitor_ctrl_inst_addr                             "0x00AE"
#define  set_VODMA2_vodma2_timing_monitor_ctrl_reg(data)                         (*((volatile unsigned int*)VODMA2_vodma2_timing_monitor_ctrl_reg)=data)
#define  get_VODMA2_vodma2_timing_monitor_ctrl_reg                               (*((volatile unsigned int*)VODMA2_vodma2_timing_monitor_ctrl_reg))
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_en_shift               (31)
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_i2rnd_mode_shift       (29)
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_src_shift              (28)
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_unit_shift             (27)
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_multi_mode_shift       (26)
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_compare_shift          (24)
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_sta0_shift             (12)
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_end0_shift             (8)
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_sta1_shift             (4)
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_end1_shift             (0)
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_en_mask                (0x80000000)
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_i2rnd_mode_mask        (0x60000000)
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_src_mask               (0x10000000)
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_unit_mask              (0x08000000)
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_multi_mode_mask        (0x04000000)
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_compare_mask           (0x03000000)
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_sta0_mask              (0x0000F000)
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_end0_mask              (0x00000F00)
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_sta1_mask              (0x000000F0)
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_end1_mask              (0x0000000F)
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_en(data)               (0x80000000&((data)<<31))
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_i2rnd_mode(data)       (0x60000000&((data)<<29))
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_src(data)              (0x10000000&((data)<<28))
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_unit(data)             (0x08000000&((data)<<27))
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_multi_mode(data)       (0x04000000&((data)<<26))
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_compare(data)          (0x03000000&((data)<<24))
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_sta0(data)             (0x0000F000&((data)<<12))
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_end0(data)             (0x00000F00&((data)<<8))
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_sta1(data)             (0x000000F0&((data)<<4))
#define  VODMA2_vodma2_timing_monitor_ctrl_timing_monitor_end1(data)             (0x0000000F&(data))
#define  VODMA2_vodma2_timing_monitor_ctrl_get_timing_monitor_en(data)           ((0x80000000&(data))>>31)
#define  VODMA2_vodma2_timing_monitor_ctrl_get_timing_monitor_i2rnd_mode(data)   ((0x60000000&(data))>>29)
#define  VODMA2_vodma2_timing_monitor_ctrl_get_timing_monitor_src(data)          ((0x10000000&(data))>>28)
#define  VODMA2_vodma2_timing_monitor_ctrl_get_timing_monitor_unit(data)         ((0x08000000&(data))>>27)
#define  VODMA2_vodma2_timing_monitor_ctrl_get_timing_monitor_multi_mode(data)   ((0x04000000&(data))>>26)
#define  VODMA2_vodma2_timing_monitor_ctrl_get_timing_monitor_compare(data)      ((0x03000000&(data))>>24)
#define  VODMA2_vodma2_timing_monitor_ctrl_get_timing_monitor_sta0(data)         ((0x0000F000&(data))>>12)
#define  VODMA2_vodma2_timing_monitor_ctrl_get_timing_monitor_end0(data)         ((0x00000F00&(data))>>8)
#define  VODMA2_vodma2_timing_monitor_ctrl_get_timing_monitor_sta1(data)         ((0x000000F0&(data))>>4)
#define  VODMA2_vodma2_timing_monitor_ctrl_get_timing_monitor_end1(data)         (0x0000000F&(data))

#define  VODMA2_vodma2_timing_monitor_multi                                     0x18005E84
#define  VODMA2_vodma2_timing_monitor_multi_reg_addr                             "0xB8005E84"
#define  VODMA2_vodma2_timing_monitor_multi_reg                                  0xB8005E84
#define  VODMA2_vodma2_timing_monitor_multi_inst_addr                            "0x00AF"
#define  set_VODMA2_vodma2_timing_monitor_multi_reg(data)                        (*((volatile unsigned int*)VODMA2_vodma2_timing_monitor_multi_reg)=data)
#define  get_VODMA2_vodma2_timing_monitor_multi_reg                              (*((volatile unsigned int*)VODMA2_vodma2_timing_monitor_multi_reg))
#define  VODMA2_vodma2_timing_monitor_multi_timing_monitor_sta2_shift            (28)
#define  VODMA2_vodma2_timing_monitor_multi_timing_monitor_end2_shift            (24)
#define  VODMA2_vodma2_timing_monitor_multi_timing_monitor_sta3_shift            (20)
#define  VODMA2_vodma2_timing_monitor_multi_timing_monitor_end3_shift            (16)
#define  VODMA2_vodma2_timing_monitor_multi_timing_monitor_sta4_shift            (12)
#define  VODMA2_vodma2_timing_monitor_multi_timing_monitor_end4_shift            (8)
#define  VODMA2_vodma2_timing_monitor_multi_timing_monitor_sta5_shift            (4)
#define  VODMA2_vodma2_timing_monitor_multi_timing_monitor_end5_shift            (0)
#define  VODMA2_vodma2_timing_monitor_multi_timing_monitor_sta2_mask             (0xF0000000)
#define  VODMA2_vodma2_timing_monitor_multi_timing_monitor_end2_mask             (0x0F000000)
#define  VODMA2_vodma2_timing_monitor_multi_timing_monitor_sta3_mask             (0x00F00000)
#define  VODMA2_vodma2_timing_monitor_multi_timing_monitor_end3_mask             (0x000F0000)
#define  VODMA2_vodma2_timing_monitor_multi_timing_monitor_sta4_mask             (0x0000F000)
#define  VODMA2_vodma2_timing_monitor_multi_timing_monitor_end4_mask             (0x00000F00)
#define  VODMA2_vodma2_timing_monitor_multi_timing_monitor_sta5_mask             (0x000000F0)
#define  VODMA2_vodma2_timing_monitor_multi_timing_monitor_end5_mask             (0x0000000F)
#define  VODMA2_vodma2_timing_monitor_multi_timing_monitor_sta2(data)            (0xF0000000&((data)<<28))
#define  VODMA2_vodma2_timing_monitor_multi_timing_monitor_end2(data)            (0x0F000000&((data)<<24))
#define  VODMA2_vodma2_timing_monitor_multi_timing_monitor_sta3(data)            (0x00F00000&((data)<<20))
#define  VODMA2_vodma2_timing_monitor_multi_timing_monitor_end3(data)            (0x000F0000&((data)<<16))
#define  VODMA2_vodma2_timing_monitor_multi_timing_monitor_sta4(data)            (0x0000F000&((data)<<12))
#define  VODMA2_vodma2_timing_monitor_multi_timing_monitor_end4(data)            (0x00000F00&((data)<<8))
#define  VODMA2_vodma2_timing_monitor_multi_timing_monitor_sta5(data)            (0x000000F0&((data)<<4))
#define  VODMA2_vodma2_timing_monitor_multi_timing_monitor_end5(data)            (0x0000000F&(data))
#define  VODMA2_vodma2_timing_monitor_multi_get_timing_monitor_sta2(data)        ((0xF0000000&(data))>>28)
#define  VODMA2_vodma2_timing_monitor_multi_get_timing_monitor_end2(data)        ((0x0F000000&(data))>>24)
#define  VODMA2_vodma2_timing_monitor_multi_get_timing_monitor_sta3(data)        ((0x00F00000&(data))>>20)
#define  VODMA2_vodma2_timing_monitor_multi_get_timing_monitor_end3(data)        ((0x000F0000&(data))>>16)
#define  VODMA2_vodma2_timing_monitor_multi_get_timing_monitor_sta4(data)        ((0x0000F000&(data))>>12)
#define  VODMA2_vodma2_timing_monitor_multi_get_timing_monitor_end4(data)        ((0x00000F00&(data))>>8)
#define  VODMA2_vodma2_timing_monitor_multi_get_timing_monitor_sta5(data)        ((0x000000F0&(data))>>4)
#define  VODMA2_vodma2_timing_monitor_multi_get_timing_monitor_end5(data)        (0x0000000F&(data))

#define  VODMA2_vodma2_timing_monitor_compare_th                                0x18005E88
#define  VODMA2_vodma2_timing_monitor_compare_th_reg_addr                        "0xB8005E88"
#define  VODMA2_vodma2_timing_monitor_compare_th_reg                             0xB8005E88
#define  VODMA2_vodma2_timing_monitor_compare_th_inst_addr                       "0x00B0"
#define  set_VODMA2_vodma2_timing_monitor_compare_th_reg(data)                   (*((volatile unsigned int*)VODMA2_vodma2_timing_monitor_compare_th_reg)=data)
#define  get_VODMA2_vodma2_timing_monitor_compare_th_reg                         (*((volatile unsigned int*)VODMA2_vodma2_timing_monitor_compare_th_reg))
#define  VODMA2_vodma2_timing_monitor_compare_th_t_m_compare_th_shift            (0)
#define  VODMA2_vodma2_timing_monitor_compare_th_t_m_compare_th_mask             (0x0FFFFFFF)
#define  VODMA2_vodma2_timing_monitor_compare_th_t_m_compare_th(data)            (0x0FFFFFFF&(data))
#define  VODMA2_vodma2_timing_monitor_compare_th_get_t_m_compare_th(data)        (0x0FFFFFFF&(data))

#define  VODMA2_vodma2_timing_monitor_golden                                    0x18005E8C
#define  VODMA2_vodma2_timing_monitor_golden_reg_addr                            "0xB8005E8C"
#define  VODMA2_vodma2_timing_monitor_golden_reg                                 0xB8005E8C
#define  VODMA2_vodma2_timing_monitor_golden_inst_addr                           "0x00B1"
#define  set_VODMA2_vodma2_timing_monitor_golden_reg(data)                       (*((volatile unsigned int*)VODMA2_vodma2_timing_monitor_golden_reg)=data)
#define  get_VODMA2_vodma2_timing_monitor_golden_reg                             (*((volatile unsigned int*)VODMA2_vodma2_timing_monitor_golden_reg))
#define  VODMA2_vodma2_timing_monitor_golden_t_m_golden_shift                    (0)
#define  VODMA2_vodma2_timing_monitor_golden_t_m_golden_mask                     (0x0FFFFFFF)
#define  VODMA2_vodma2_timing_monitor_golden_t_m_golden(data)                    (0x0FFFFFFF&(data))
#define  VODMA2_vodma2_timing_monitor_golden_get_t_m_golden(data)                (0x0FFFFFFF&(data))

#define  VODMA2_vodma2_timing_monitor_result1                                   0x18005E90
#define  VODMA2_vodma2_timing_monitor_result1_reg_addr                           "0xB8005E90"
#define  VODMA2_vodma2_timing_monitor_result1_reg                                0xB8005E90
#define  VODMA2_vodma2_timing_monitor_result1_inst_addr                          "0x00B2"
#define  set_VODMA2_vodma2_timing_monitor_result1_reg(data)                      (*((volatile unsigned int*)VODMA2_vodma2_timing_monitor_result1_reg)=data)
#define  get_VODMA2_vodma2_timing_monitor_result1_reg                            (*((volatile unsigned int*)VODMA2_vodma2_timing_monitor_result1_reg))
#define  VODMA2_vodma2_timing_monitor_result1_t_m_result_previous1_shift         (0)
#define  VODMA2_vodma2_timing_monitor_result1_t_m_result_previous1_mask          (0x0FFFFFFF)
#define  VODMA2_vodma2_timing_monitor_result1_t_m_result_previous1(data)         (0x0FFFFFFF&(data))
#define  VODMA2_vodma2_timing_monitor_result1_get_t_m_result_previous1(data)     (0x0FFFFFFF&(data))

#define  VODMA2_vodma2_timing_monitor_result2                                   0x18005E94
#define  VODMA2_vodma2_timing_monitor_result2_reg_addr                           "0xB8005E94"
#define  VODMA2_vodma2_timing_monitor_result2_reg                                0xB8005E94
#define  VODMA2_vodma2_timing_monitor_result2_inst_addr                          "0x00B3"
#define  set_VODMA2_vodma2_timing_monitor_result2_reg(data)                      (*((volatile unsigned int*)VODMA2_vodma2_timing_monitor_result2_reg)=data)
#define  get_VODMA2_vodma2_timing_monitor_result2_reg                            (*((volatile unsigned int*)VODMA2_vodma2_timing_monitor_result2_reg))
#define  VODMA2_vodma2_timing_monitor_result2_t_m_result_previous2_shift         (0)
#define  VODMA2_vodma2_timing_monitor_result2_t_m_result_previous2_mask          (0x0FFFFFFF)
#define  VODMA2_vodma2_timing_monitor_result2_t_m_result_previous2(data)         (0x0FFFFFFF&(data))
#define  VODMA2_vodma2_timing_monitor_result2_get_t_m_result_previous2(data)     (0x0FFFFFFF&(data))

#define  VODMA2_vodma2_timing_monitor_result3                                   0x18005E98
#define  VODMA2_vodma2_timing_monitor_result3_reg_addr                           "0xB8005E98"
#define  VODMA2_vodma2_timing_monitor_result3_reg                                0xB8005E98
#define  VODMA2_vodma2_timing_monitor_result3_inst_addr                          "0x00B4"
#define  set_VODMA2_vodma2_timing_monitor_result3_reg(data)                      (*((volatile unsigned int*)VODMA2_vodma2_timing_monitor_result3_reg)=data)
#define  get_VODMA2_vodma2_timing_monitor_result3_reg                            (*((volatile unsigned int*)VODMA2_vodma2_timing_monitor_result3_reg))
#define  VODMA2_vodma2_timing_monitor_result3_t_m_result_previous3_shift         (0)
#define  VODMA2_vodma2_timing_monitor_result3_t_m_result_previous3_mask          (0x0FFFFFFF)
#define  VODMA2_vodma2_timing_monitor_result3_t_m_result_previous3(data)         (0x0FFFFFFF&(data))
#define  VODMA2_vodma2_timing_monitor_result3_get_t_m_result_previous3(data)     (0x0FFFFFFF&(data))

#define  VODMA2_vodma2_timing_monitor_result4                                   0x18005E9C
#define  VODMA2_vodma2_timing_monitor_result4_reg_addr                           "0xB8005E9C"
#define  VODMA2_vodma2_timing_monitor_result4_reg                                0xB8005E9C
#define  VODMA2_vodma2_timing_monitor_result4_inst_addr                          "0x00B5"
#define  set_VODMA2_vodma2_timing_monitor_result4_reg(data)                      (*((volatile unsigned int*)VODMA2_vodma2_timing_monitor_result4_reg)=data)
#define  get_VODMA2_vodma2_timing_monitor_result4_reg                            (*((volatile unsigned int*)VODMA2_vodma2_timing_monitor_result4_reg))
#define  VODMA2_vodma2_timing_monitor_result4_t_m_result_previous4_shift         (0)
#define  VODMA2_vodma2_timing_monitor_result4_t_m_result_previous4_mask          (0x0FFFFFFF)
#define  VODMA2_vodma2_timing_monitor_result4_t_m_result_previous4(data)         (0x0FFFFFFF&(data))
#define  VODMA2_vodma2_timing_monitor_result4_get_t_m_result_previous4(data)     (0x0FFFFFFF&(data))

#define  VODMA2_vodma2_timing_monitor_max                                       0x18005EA0
#define  VODMA2_vodma2_timing_monitor_max_reg_addr                               "0xB8005EA0"
#define  VODMA2_vodma2_timing_monitor_max_reg                                    0xB8005EA0
#define  VODMA2_vodma2_timing_monitor_max_inst_addr                              "0x00B6"
#define  set_VODMA2_vodma2_timing_monitor_max_reg(data)                          (*((volatile unsigned int*)VODMA2_vodma2_timing_monitor_max_reg)=data)
#define  get_VODMA2_vodma2_timing_monitor_max_reg                                (*((volatile unsigned int*)VODMA2_vodma2_timing_monitor_max_reg))
#define  VODMA2_vodma2_timing_monitor_max_t_m_result_max_shift                   (0)
#define  VODMA2_vodma2_timing_monitor_max_t_m_result_max_mask                    (0x0FFFFFFF)
#define  VODMA2_vodma2_timing_monitor_max_t_m_result_max(data)                   (0x0FFFFFFF&(data))
#define  VODMA2_vodma2_timing_monitor_max_get_t_m_result_max(data)               (0x0FFFFFFF&(data))

#define  VODMA2_vodma2_timing_monitor_min                                       0x18005EA4
#define  VODMA2_vodma2_timing_monitor_min_reg_addr                               "0xB8005EA4"
#define  VODMA2_vodma2_timing_monitor_min_reg                                    0xB8005EA4
#define  VODMA2_vodma2_timing_monitor_min_inst_addr                              "0x00B7"
#define  set_VODMA2_vodma2_timing_monitor_min_reg(data)                          (*((volatile unsigned int*)VODMA2_vodma2_timing_monitor_min_reg)=data)
#define  get_VODMA2_vodma2_timing_monitor_min_reg                                (*((volatile unsigned int*)VODMA2_vodma2_timing_monitor_min_reg))
#define  VODMA2_vodma2_timing_monitor_min_t_m_result_min_shift                   (0)
#define  VODMA2_vodma2_timing_monitor_min_t_m_result_min_mask                    (0x0FFFFFFF)
#define  VODMA2_vodma2_timing_monitor_min_t_m_result_min(data)                   (0x0FFFFFFF&(data))
#define  VODMA2_vodma2_timing_monitor_min_get_t_m_result_min(data)               (0x0FFFFFFF&(data))

#define  VODMA2_vodma2_timing_monitor_st                                        0x18005EA8
#define  VODMA2_vodma2_timing_monitor_st_reg_addr                                "0xB8005EA8"
#define  VODMA2_vodma2_timing_monitor_st_reg                                     0xB8005EA8
#define  VODMA2_vodma2_timing_monitor_st_inst_addr                               "0x00B8"
#define  set_VODMA2_vodma2_timing_monitor_st_reg(data)                           (*((volatile unsigned int*)VODMA2_vodma2_timing_monitor_st_reg)=data)
#define  get_VODMA2_vodma2_timing_monitor_st_reg                                 (*((volatile unsigned int*)VODMA2_vodma2_timing_monitor_st_reg))
#define  VODMA2_vodma2_timing_monitor_st_compare_hit_shift                       (2)
#define  VODMA2_vodma2_timing_monitor_st_hsync_hit_den_error_shift               (1)
#define  VODMA2_vodma2_timing_monitor_st_vsync_hit_den_error_shift               (0)
#define  VODMA2_vodma2_timing_monitor_st_compare_hit_mask                        (0x00000004)
#define  VODMA2_vodma2_timing_monitor_st_hsync_hit_den_error_mask                (0x00000002)
#define  VODMA2_vodma2_timing_monitor_st_vsync_hit_den_error_mask                (0x00000001)
#define  VODMA2_vodma2_timing_monitor_st_compare_hit(data)                       (0x00000004&((data)<<2))
#define  VODMA2_vodma2_timing_monitor_st_hsync_hit_den_error(data)               (0x00000002&((data)<<1))
#define  VODMA2_vodma2_timing_monitor_st_vsync_hit_den_error(data)               (0x00000001&(data))
#define  VODMA2_vodma2_timing_monitor_st_get_compare_hit(data)                   ((0x00000004&(data))>>2)
#define  VODMA2_vodma2_timing_monitor_st_get_hsync_hit_den_error(data)           ((0x00000002&(data))>>1)
#define  VODMA2_vodma2_timing_monitor_st_get_vsync_hit_den_error(data)           (0x00000001&(data))

#define  VODMA2_VODMA2_BIST_MODE                                                0x18005F00
#define  VODMA2_VODMA2_BIST_MODE_reg_addr                                        "0xB8005F00"
#define  VODMA2_VODMA2_BIST_MODE_reg                                             0xB8005F00
#define  VODMA2_VODMA2_BIST_MODE_inst_addr                                       "0x00B9"
#define  set_VODMA2_VODMA2_BIST_MODE_reg(data)                                   (*((volatile unsigned int*)VODMA2_VODMA2_BIST_MODE_reg)=data)
#define  get_VODMA2_VODMA2_BIST_MODE_reg                                         (*((volatile unsigned int*)VODMA2_VODMA2_BIST_MODE_reg))
#define  VODMA2_VODMA2_BIST_MODE_vodma_bist_mode_3_shift                         (3)
#define  VODMA2_VODMA2_BIST_MODE_vodma_bist_mode_2_shift                         (2)
#define  VODMA2_VODMA2_BIST_MODE_vodma_bist_mode_1_shift                         (1)
#define  VODMA2_VODMA2_BIST_MODE_vodma_bist_mode_3_mask                          (0x00000008)
#define  VODMA2_VODMA2_BIST_MODE_vodma_bist_mode_2_mask                          (0x00000004)
#define  VODMA2_VODMA2_BIST_MODE_vodma_bist_mode_1_mask                          (0x00000002)
#define  VODMA2_VODMA2_BIST_MODE_vodma_bist_mode_3(data)                         (0x00000008&((data)<<3))
#define  VODMA2_VODMA2_BIST_MODE_vodma_bist_mode_2(data)                         (0x00000004&((data)<<2))
#define  VODMA2_VODMA2_BIST_MODE_vodma_bist_mode_1(data)                         (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_BIST_MODE_get_vodma_bist_mode_3(data)                     ((0x00000008&(data))>>3)
#define  VODMA2_VODMA2_BIST_MODE_get_vodma_bist_mode_2(data)                     ((0x00000004&(data))>>2)
#define  VODMA2_VODMA2_BIST_MODE_get_vodma_bist_mode_1(data)                     ((0x00000002&(data))>>1)

#define  VODMA2_VODMA2_BIST_DONE                                                0x18005F04
#define  VODMA2_VODMA2_BIST_DONE_reg_addr                                        "0xB8005F04"
#define  VODMA2_VODMA2_BIST_DONE_reg                                             0xB8005F04
#define  VODMA2_VODMA2_BIST_DONE_inst_addr                                       "0x00BA"
#define  set_VODMA2_VODMA2_BIST_DONE_reg(data)                                   (*((volatile unsigned int*)VODMA2_VODMA2_BIST_DONE_reg)=data)
#define  get_VODMA2_VODMA2_BIST_DONE_reg                                         (*((volatile unsigned int*)VODMA2_VODMA2_BIST_DONE_reg))
#define  VODMA2_VODMA2_BIST_DONE_vodma_bist_done_3_shift                         (3)
#define  VODMA2_VODMA2_BIST_DONE_vodma_bist_done_2_shift                         (2)
#define  VODMA2_VODMA2_BIST_DONE_vodma_bist_done_1_shift                         (1)
#define  VODMA2_VODMA2_BIST_DONE_vodma_bist_done_3_mask                          (0x00000008)
#define  VODMA2_VODMA2_BIST_DONE_vodma_bist_done_2_mask                          (0x00000004)
#define  VODMA2_VODMA2_BIST_DONE_vodma_bist_done_1_mask                          (0x00000002)
#define  VODMA2_VODMA2_BIST_DONE_vodma_bist_done_3(data)                         (0x00000008&((data)<<3))
#define  VODMA2_VODMA2_BIST_DONE_vodma_bist_done_2(data)                         (0x00000004&((data)<<2))
#define  VODMA2_VODMA2_BIST_DONE_vodma_bist_done_1(data)                         (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_BIST_DONE_get_vodma_bist_done_3(data)                     ((0x00000008&(data))>>3)
#define  VODMA2_VODMA2_BIST_DONE_get_vodma_bist_done_2(data)                     ((0x00000004&(data))>>2)
#define  VODMA2_VODMA2_BIST_DONE_get_vodma_bist_done_1(data)                     ((0x00000002&(data))>>1)

#define  VODMA2_VODMA2_BIST_FAIL_GROUP                                          0x18005F08
#define  VODMA2_VODMA2_BIST_FAIL_GROUP_reg_addr                                  "0xB8005F08"
#define  VODMA2_VODMA2_BIST_FAIL_GROUP_reg                                       0xB8005F08
#define  VODMA2_VODMA2_BIST_FAIL_GROUP_inst_addr                                 "0x00BB"
#define  set_VODMA2_VODMA2_BIST_FAIL_GROUP_reg(data)                             (*((volatile unsigned int*)VODMA2_VODMA2_BIST_FAIL_GROUP_reg)=data)
#define  get_VODMA2_VODMA2_BIST_FAIL_GROUP_reg                                   (*((volatile unsigned int*)VODMA2_VODMA2_BIST_FAIL_GROUP_reg))
#define  VODMA2_VODMA2_BIST_FAIL_GROUP_vodma_bist_fail_group_1_shift             (1)
#define  VODMA2_VODMA2_BIST_FAIL_GROUP_vodma_bist_fail_group_0_shift             (0)
#define  VODMA2_VODMA2_BIST_FAIL_GROUP_vodma_bist_fail_group_1_mask              (0x00000002)
#define  VODMA2_VODMA2_BIST_FAIL_GROUP_vodma_bist_fail_group_0_mask              (0x00000001)
#define  VODMA2_VODMA2_BIST_FAIL_GROUP_vodma_bist_fail_group_1(data)             (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_BIST_FAIL_GROUP_vodma_bist_fail_group_0(data)             (0x00000001&(data))
#define  VODMA2_VODMA2_BIST_FAIL_GROUP_get_vodma_bist_fail_group_1(data)         ((0x00000002&(data))>>1)
#define  VODMA2_VODMA2_BIST_FAIL_GROUP_get_vodma_bist_fail_group_0(data)         (0x00000001&(data))

#define  VODMA2_VODMA2_BIST_FAIL                                                0x18005F0C
#define  VODMA2_VODMA2_BIST_FAIL_reg_addr                                        "0xB8005F0C"
#define  VODMA2_VODMA2_BIST_FAIL_reg                                             0xB8005F0C
#define  VODMA2_VODMA2_BIST_FAIL_inst_addr                                       "0x00BC"
#define  set_VODMA2_VODMA2_BIST_FAIL_reg(data)                                   (*((volatile unsigned int*)VODMA2_VODMA2_BIST_FAIL_reg)=data)
#define  get_VODMA2_VODMA2_BIST_FAIL_reg                                         (*((volatile unsigned int*)VODMA2_VODMA2_BIST_FAIL_reg))
#define  VODMA2_VODMA2_BIST_FAIL_vodma_bist_fail_8_shift                         (8)
#define  VODMA2_VODMA2_BIST_FAIL_vodma_bist_fail_7_shift                         (7)
#define  VODMA2_VODMA2_BIST_FAIL_vodma_bist_fail_6_shift                         (6)
#define  VODMA2_VODMA2_BIST_FAIL_vodma_bist_fail_5_shift                         (5)
#define  VODMA2_VODMA2_BIST_FAIL_vodma_bist_fail_4_shift                         (4)
#define  VODMA2_VODMA2_BIST_FAIL_vodma_bist_fail_8_mask                          (0x00000100)
#define  VODMA2_VODMA2_BIST_FAIL_vodma_bist_fail_7_mask                          (0x00000080)
#define  VODMA2_VODMA2_BIST_FAIL_vodma_bist_fail_6_mask                          (0x00000040)
#define  VODMA2_VODMA2_BIST_FAIL_vodma_bist_fail_5_mask                          (0x00000020)
#define  VODMA2_VODMA2_BIST_FAIL_vodma_bist_fail_4_mask                          (0x00000010)
#define  VODMA2_VODMA2_BIST_FAIL_vodma_bist_fail_8(data)                         (0x00000100&((data)<<8))
#define  VODMA2_VODMA2_BIST_FAIL_vodma_bist_fail_7(data)                         (0x00000080&((data)<<7))
#define  VODMA2_VODMA2_BIST_FAIL_vodma_bist_fail_6(data)                         (0x00000040&((data)<<6))
#define  VODMA2_VODMA2_BIST_FAIL_vodma_bist_fail_5(data)                         (0x00000020&((data)<<5))
#define  VODMA2_VODMA2_BIST_FAIL_vodma_bist_fail_4(data)                         (0x00000010&((data)<<4))
#define  VODMA2_VODMA2_BIST_FAIL_get_vodma_bist_fail_8(data)                     ((0x00000100&(data))>>8)
#define  VODMA2_VODMA2_BIST_FAIL_get_vodma_bist_fail_7(data)                     ((0x00000080&(data))>>7)
#define  VODMA2_VODMA2_BIST_FAIL_get_vodma_bist_fail_6(data)                     ((0x00000040&(data))>>6)
#define  VODMA2_VODMA2_BIST_FAIL_get_vodma_bist_fail_5(data)                     ((0x00000020&(data))>>5)
#define  VODMA2_VODMA2_BIST_FAIL_get_vodma_bist_fail_4(data)                     ((0x00000010&(data))>>4)

#define  VODMA2_VODMA2_DRF_MODE                                                 0x18005F10
#define  VODMA2_VODMA2_DRF_MODE_reg_addr                                         "0xB8005F10"
#define  VODMA2_VODMA2_DRF_MODE_reg                                              0xB8005F10
#define  VODMA2_VODMA2_DRF_MODE_inst_addr                                        "0x00BD"
#define  set_VODMA2_VODMA2_DRF_MODE_reg(data)                                    (*((volatile unsigned int*)VODMA2_VODMA2_DRF_MODE_reg)=data)
#define  get_VODMA2_VODMA2_DRF_MODE_reg                                          (*((volatile unsigned int*)VODMA2_VODMA2_DRF_MODE_reg))
#define  VODMA2_VODMA2_DRF_MODE_vodma_drf_mode_3_shift                           (3)
#define  VODMA2_VODMA2_DRF_MODE_vodma_drf_mode_2_shift                           (2)
#define  VODMA2_VODMA2_DRF_MODE_vodma_drf_mode_1_shift                           (1)
#define  VODMA2_VODMA2_DRF_MODE_vodma_drf_mode_3_mask                            (0x00000008)
#define  VODMA2_VODMA2_DRF_MODE_vodma_drf_mode_2_mask                            (0x00000004)
#define  VODMA2_VODMA2_DRF_MODE_vodma_drf_mode_1_mask                            (0x00000002)
#define  VODMA2_VODMA2_DRF_MODE_vodma_drf_mode_3(data)                           (0x00000008&((data)<<3))
#define  VODMA2_VODMA2_DRF_MODE_vodma_drf_mode_2(data)                           (0x00000004&((data)<<2))
#define  VODMA2_VODMA2_DRF_MODE_vodma_drf_mode_1(data)                           (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_DRF_MODE_get_vodma_drf_mode_3(data)                       ((0x00000008&(data))>>3)
#define  VODMA2_VODMA2_DRF_MODE_get_vodma_drf_mode_2(data)                       ((0x00000004&(data))>>2)
#define  VODMA2_VODMA2_DRF_MODE_get_vodma_drf_mode_1(data)                       ((0x00000002&(data))>>1)

#define  VODMA2_VODMA2_DRF_RESUME                                               0x18005F14
#define  VODMA2_VODMA2_DRF_RESUME_reg_addr                                       "0xB8005F14"
#define  VODMA2_VODMA2_DRF_RESUME_reg                                            0xB8005F14
#define  VODMA2_VODMA2_DRF_RESUME_inst_addr                                      "0x00BE"
#define  set_VODMA2_VODMA2_DRF_RESUME_reg(data)                                  (*((volatile unsigned int*)VODMA2_VODMA2_DRF_RESUME_reg)=data)
#define  get_VODMA2_VODMA2_DRF_RESUME_reg                                        (*((volatile unsigned int*)VODMA2_VODMA2_DRF_RESUME_reg))
#define  VODMA2_VODMA2_DRF_RESUME_vodma_drf_resume_3_shift                       (3)
#define  VODMA2_VODMA2_DRF_RESUME_vodma_drf_resume_2_shift                       (2)
#define  VODMA2_VODMA2_DRF_RESUME_vodma_drf_resume_1_shift                       (1)
#define  VODMA2_VODMA2_DRF_RESUME_vodma_drf_resume_3_mask                        (0x00000008)
#define  VODMA2_VODMA2_DRF_RESUME_vodma_drf_resume_2_mask                        (0x00000004)
#define  VODMA2_VODMA2_DRF_RESUME_vodma_drf_resume_1_mask                        (0x00000002)
#define  VODMA2_VODMA2_DRF_RESUME_vodma_drf_resume_3(data)                       (0x00000008&((data)<<3))
#define  VODMA2_VODMA2_DRF_RESUME_vodma_drf_resume_2(data)                       (0x00000004&((data)<<2))
#define  VODMA2_VODMA2_DRF_RESUME_vodma_drf_resume_1(data)                       (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_DRF_RESUME_get_vodma_drf_resume_3(data)                   ((0x00000008&(data))>>3)
#define  VODMA2_VODMA2_DRF_RESUME_get_vodma_drf_resume_2(data)                   ((0x00000004&(data))>>2)
#define  VODMA2_VODMA2_DRF_RESUME_get_vodma_drf_resume_1(data)                   ((0x00000002&(data))>>1)

#define  VODMA2_VODMA2_DRF_DONE                                                 0x18005F18
#define  VODMA2_VODMA2_DRF_DONE_reg_addr                                         "0xB8005F18"
#define  VODMA2_VODMA2_DRF_DONE_reg                                              0xB8005F18
#define  VODMA2_VODMA2_DRF_DONE_inst_addr                                        "0x00BF"
#define  set_VODMA2_VODMA2_DRF_DONE_reg(data)                                    (*((volatile unsigned int*)VODMA2_VODMA2_DRF_DONE_reg)=data)
#define  get_VODMA2_VODMA2_DRF_DONE_reg                                          (*((volatile unsigned int*)VODMA2_VODMA2_DRF_DONE_reg))
#define  VODMA2_VODMA2_DRF_DONE_vodma_drf_done_3_shift                           (3)
#define  VODMA2_VODMA2_DRF_DONE_vodma_drf_done_2_shift                           (2)
#define  VODMA2_VODMA2_DRF_DONE_vodma_drf_done_1_shift                           (1)
#define  VODMA2_VODMA2_DRF_DONE_vodma_drf_done_3_mask                            (0x00000008)
#define  VODMA2_VODMA2_DRF_DONE_vodma_drf_done_2_mask                            (0x00000004)
#define  VODMA2_VODMA2_DRF_DONE_vodma_drf_done_1_mask                            (0x00000002)
#define  VODMA2_VODMA2_DRF_DONE_vodma_drf_done_3(data)                           (0x00000008&((data)<<3))
#define  VODMA2_VODMA2_DRF_DONE_vodma_drf_done_2(data)                           (0x00000004&((data)<<2))
#define  VODMA2_VODMA2_DRF_DONE_vodma_drf_done_1(data)                           (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_DRF_DONE_get_vodma_drf_done_3(data)                       ((0x00000008&(data))>>3)
#define  VODMA2_VODMA2_DRF_DONE_get_vodma_drf_done_2(data)                       ((0x00000004&(data))>>2)
#define  VODMA2_VODMA2_DRF_DONE_get_vodma_drf_done_1(data)                       ((0x00000002&(data))>>1)

#define  VODMA2_VODMA2_DRF_PAUSE                                                0x18005F1C
#define  VODMA2_VODMA2_DRF_PAUSE_reg_addr                                        "0xB8005F1C"
#define  VODMA2_VODMA2_DRF_PAUSE_reg                                             0xB8005F1C
#define  VODMA2_VODMA2_DRF_PAUSE_inst_addr                                       "0x00C0"
#define  set_VODMA2_VODMA2_DRF_PAUSE_reg(data)                                   (*((volatile unsigned int*)VODMA2_VODMA2_DRF_PAUSE_reg)=data)
#define  get_VODMA2_VODMA2_DRF_PAUSE_reg                                         (*((volatile unsigned int*)VODMA2_VODMA2_DRF_PAUSE_reg))
#define  VODMA2_VODMA2_DRF_PAUSE_vodma_drf_pause_3_shift                         (3)
#define  VODMA2_VODMA2_DRF_PAUSE_vodma_drf_pause_2_shift                         (2)
#define  VODMA2_VODMA2_DRF_PAUSE_vodma_drf_pause_1_shift                         (1)
#define  VODMA2_VODMA2_DRF_PAUSE_vodma_drf_pause_3_mask                          (0x00000008)
#define  VODMA2_VODMA2_DRF_PAUSE_vodma_drf_pause_2_mask                          (0x00000004)
#define  VODMA2_VODMA2_DRF_PAUSE_vodma_drf_pause_1_mask                          (0x00000002)
#define  VODMA2_VODMA2_DRF_PAUSE_vodma_drf_pause_3(data)                         (0x00000008&((data)<<3))
#define  VODMA2_VODMA2_DRF_PAUSE_vodma_drf_pause_2(data)                         (0x00000004&((data)<<2))
#define  VODMA2_VODMA2_DRF_PAUSE_vodma_drf_pause_1(data)                         (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_DRF_PAUSE_get_vodma_drf_pause_3(data)                     ((0x00000008&(data))>>3)
#define  VODMA2_VODMA2_DRF_PAUSE_get_vodma_drf_pause_2(data)                     ((0x00000004&(data))>>2)
#define  VODMA2_VODMA2_DRF_PAUSE_get_vodma_drf_pause_1(data)                     ((0x00000002&(data))>>1)

#define  VODMA2_VODMA2_DRF_FAIL_GROUP                                           0x18005F20
#define  VODMA2_VODMA2_DRF_FAIL_GROUP_reg_addr                                   "0xB8005F20"
#define  VODMA2_VODMA2_DRF_FAIL_GROUP_reg                                        0xB8005F20
#define  VODMA2_VODMA2_DRF_FAIL_GROUP_inst_addr                                  "0x00C1"
#define  set_VODMA2_VODMA2_DRF_FAIL_GROUP_reg(data)                              (*((volatile unsigned int*)VODMA2_VODMA2_DRF_FAIL_GROUP_reg)=data)
#define  get_VODMA2_VODMA2_DRF_FAIL_GROUP_reg                                    (*((volatile unsigned int*)VODMA2_VODMA2_DRF_FAIL_GROUP_reg))
#define  VODMA2_VODMA2_DRF_FAIL_GROUP_vodma_drf_fail_group_1_shift               (1)
#define  VODMA2_VODMA2_DRF_FAIL_GROUP_vodma_drf_fail_group_0_shift               (0)
#define  VODMA2_VODMA2_DRF_FAIL_GROUP_vodma_drf_fail_group_1_mask                (0x00000002)
#define  VODMA2_VODMA2_DRF_FAIL_GROUP_vodma_drf_fail_group_0_mask                (0x00000001)
#define  VODMA2_VODMA2_DRF_FAIL_GROUP_vodma_drf_fail_group_1(data)               (0x00000002&((data)<<1))
#define  VODMA2_VODMA2_DRF_FAIL_GROUP_vodma_drf_fail_group_0(data)               (0x00000001&(data))
#define  VODMA2_VODMA2_DRF_FAIL_GROUP_get_vodma_drf_fail_group_1(data)           ((0x00000002&(data))>>1)
#define  VODMA2_VODMA2_DRF_FAIL_GROUP_get_vodma_drf_fail_group_0(data)           (0x00000001&(data))

#define  VODMA2_VODMA2_DRF_FAIL                                                 0x18005F24
#define  VODMA2_VODMA2_DRF_FAIL_reg_addr                                         "0xB8005F24"
#define  VODMA2_VODMA2_DRF_FAIL_reg                                              0xB8005F24
#define  VODMA2_VODMA2_DRF_FAIL_inst_addr                                        "0x00C2"
#define  set_VODMA2_VODMA2_DRF_FAIL_reg(data)                                    (*((volatile unsigned int*)VODMA2_VODMA2_DRF_FAIL_reg)=data)
#define  get_VODMA2_VODMA2_DRF_FAIL_reg                                          (*((volatile unsigned int*)VODMA2_VODMA2_DRF_FAIL_reg))
#define  VODMA2_VODMA2_DRF_FAIL_vodma_drf_fail_8_shift                           (8)
#define  VODMA2_VODMA2_DRF_FAIL_vodma_drf_fail_7_shift                           (7)
#define  VODMA2_VODMA2_DRF_FAIL_vodma_drf_fail_6_shift                           (6)
#define  VODMA2_VODMA2_DRF_FAIL_vodma_drf_fail_5_shift                           (5)
#define  VODMA2_VODMA2_DRF_FAIL_vodma_drf_fail_4_shift                           (4)
#define  VODMA2_VODMA2_DRF_FAIL_vodma_drf_fail_8_mask                            (0x00000100)
#define  VODMA2_VODMA2_DRF_FAIL_vodma_drf_fail_7_mask                            (0x00000080)
#define  VODMA2_VODMA2_DRF_FAIL_vodma_drf_fail_6_mask                            (0x00000040)
#define  VODMA2_VODMA2_DRF_FAIL_vodma_drf_fail_5_mask                            (0x00000020)
#define  VODMA2_VODMA2_DRF_FAIL_vodma_drf_fail_4_mask                            (0x00000010)
#define  VODMA2_VODMA2_DRF_FAIL_vodma_drf_fail_8(data)                           (0x00000100&((data)<<8))
#define  VODMA2_VODMA2_DRF_FAIL_vodma_drf_fail_7(data)                           (0x00000080&((data)<<7))
#define  VODMA2_VODMA2_DRF_FAIL_vodma_drf_fail_6(data)                           (0x00000040&((data)<<6))
#define  VODMA2_VODMA2_DRF_FAIL_vodma_drf_fail_5(data)                           (0x00000020&((data)<<5))
#define  VODMA2_VODMA2_DRF_FAIL_vodma_drf_fail_4(data)                           (0x00000010&((data)<<4))
#define  VODMA2_VODMA2_DRF_FAIL_get_vodma_drf_fail_8(data)                       ((0x00000100&(data))>>8)
#define  VODMA2_VODMA2_DRF_FAIL_get_vodma_drf_fail_7(data)                       ((0x00000080&(data))>>7)
#define  VODMA2_VODMA2_DRF_FAIL_get_vodma_drf_fail_6(data)                       ((0x00000040&(data))>>6)
#define  VODMA2_VODMA2_DRF_FAIL_get_vodma_drf_fail_5(data)                       ((0x00000020&(data))>>5)
#define  VODMA2_VODMA2_DRF_FAIL_get_vodma_drf_fail_4(data)                       ((0x00000010&(data))>>4)

#define  VODMA2_VODMA2_BIST_OTHER                                               0x18005F28
#define  VODMA2_VODMA2_BIST_OTHER_reg_addr                                       "0xB8005F28"
#define  VODMA2_VODMA2_BIST_OTHER_reg                                            0xB8005F28
#define  VODMA2_VODMA2_BIST_OTHER_inst_addr                                      "0x00C3"
#define  set_VODMA2_VODMA2_BIST_OTHER_reg(data)                                  (*((volatile unsigned int*)VODMA2_VODMA2_BIST_OTHER_reg)=data)
#define  get_VODMA2_VODMA2_BIST_OTHER_reg                                        (*((volatile unsigned int*)VODMA2_VODMA2_BIST_OTHER_reg))
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_rwm_3_shift                         (30)
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_ls_3_shift                          (29)
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_rm_3_shift                          (25)
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_rme_3_shift                         (24)
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_rwm_2_shift                         (22)
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_ls_2_shift                          (21)
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_rm_2_shift                          (17)
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_rme_2_shift                         (16)
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_ls_1_shift                          (13)
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_rm_1_shift                          (9)
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_rme_1_shift                         (8)
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_rwm_3_mask                          (0x40000000)
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_ls_3_mask                           (0x20000000)
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_rm_3_mask                           (0x1E000000)
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_rme_3_mask                          (0x01000000)
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_rwm_2_mask                          (0x00400000)
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_ls_2_mask                           (0x00200000)
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_rm_2_mask                           (0x001E0000)
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_rme_2_mask                          (0x00010000)
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_ls_1_mask                           (0x00002000)
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_rm_1_mask                           (0x00001E00)
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_rme_1_mask                          (0x00000100)
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_rwm_3(data)                         (0x40000000&((data)<<30))
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_ls_3(data)                          (0x20000000&((data)<<29))
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_rm_3(data)                          (0x1E000000&((data)<<25))
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_rme_3(data)                         (0x01000000&((data)<<24))
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_rwm_2(data)                         (0x00400000&((data)<<22))
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_ls_2(data)                          (0x00200000&((data)<<21))
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_rm_2(data)                          (0x001E0000&((data)<<17))
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_rme_2(data)                         (0x00010000&((data)<<16))
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_ls_1(data)                          (0x00002000&((data)<<13))
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_rm_1(data)                          (0x00001E00&((data)<<9))
#define  VODMA2_VODMA2_BIST_OTHER_vodma_bist_rme_1(data)                         (0x00000100&((data)<<8))
#define  VODMA2_VODMA2_BIST_OTHER_get_vodma_bist_rwm_3(data)                     ((0x40000000&(data))>>30)
#define  VODMA2_VODMA2_BIST_OTHER_get_vodma_bist_ls_3(data)                      ((0x20000000&(data))>>29)
#define  VODMA2_VODMA2_BIST_OTHER_get_vodma_bist_rm_3(data)                      ((0x1E000000&(data))>>25)
#define  VODMA2_VODMA2_BIST_OTHER_get_vodma_bist_rme_3(data)                     ((0x01000000&(data))>>24)
#define  VODMA2_VODMA2_BIST_OTHER_get_vodma_bist_rwm_2(data)                     ((0x00400000&(data))>>22)
#define  VODMA2_VODMA2_BIST_OTHER_get_vodma_bist_ls_2(data)                      ((0x00200000&(data))>>21)
#define  VODMA2_VODMA2_BIST_OTHER_get_vodma_bist_rm_2(data)                      ((0x001E0000&(data))>>17)
#define  VODMA2_VODMA2_BIST_OTHER_get_vodma_bist_rme_2(data)                     ((0x00010000&(data))>>16)
#define  VODMA2_VODMA2_BIST_OTHER_get_vodma_bist_ls_1(data)                      ((0x00002000&(data))>>13)
#define  VODMA2_VODMA2_BIST_OTHER_get_vodma_bist_rm_1(data)                      ((0x00001E00&(data))>>9)
#define  VODMA2_VODMA2_BIST_OTHER_get_vodma_bist_rme_1(data)                     ((0x00000100&(data))>>8)

#define  VODMA2_VODMA2_DBG                                                      0x18005F2C
#define  VODMA2_VODMA2_DBG_reg_addr                                              "0xB8005F2C"
#define  VODMA2_VODMA2_DBG_reg                                                   0xB8005F2C
#define  VODMA2_VODMA2_DBG_inst_addr                                             "0x00C4"
#define  set_VODMA2_VODMA2_DBG_reg(data)                                         (*((volatile unsigned int*)VODMA2_VODMA2_DBG_reg)=data)
#define  get_VODMA2_VODMA2_DBG_reg                                               (*((volatile unsigned int*)VODMA2_VODMA2_DBG_reg))
#define  VODMA2_VODMA2_DBG_sel_shift                                             (0)
#define  VODMA2_VODMA2_DBG_sel_mask                                              (0x0000001F)
#define  VODMA2_VODMA2_DBG_sel(data)                                             (0x0000001F&(data))
#define  VODMA2_VODMA2_DBG_get_sel(data)                                         (0x0000001F&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======VODMA2 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  merge_forward:1;
        RBus_UInt32  merge_backward:1;
        RBus_UInt32  film_condition:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  inverse_128_en:1;
        RBus_UInt32  field_mode:1;
        RBus_UInt32  field_fw:1;
        RBus_UInt32  l_flag_fw:1;
        RBus_UInt32  force_2d_en:1;
        RBus_UInt32  force_2d_sel:1;
        RBus_UInt32  dma_auto_mode:1;
        RBus_UInt32  seq_data_pack_type:1;
        RBus_UInt32  seq_data_width:1;
        RBus_UInt32  double_chroma:1;
        RBus_UInt32  uv_off:1;
        RBus_UInt32  pxl_swap_sel:4;
        RBus_UInt32  keep_go_en:1;
        RBus_UInt32  dma_state_reset_en:1;
        RBus_UInt32  v_flip_en:1;
        RBus_UInt32  chroma_swap_en:1;
        RBus_UInt32  double_pixel_mode:1;
        RBus_UInt32  dma_mode:1;
        RBus_UInt32  vodma_go:1;
    };
}vodma2_vodma2_v1_dcfg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_outstanding:3;
        RBus_UInt32  res1:18;
        RBus_UInt32  burst_len:7;
        RBus_UInt32  res2:3;
        RBus_UInt32  cmd_trans_en:1;
    };
}vodma2_vodma2_dma_option_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  line_cnt:12;
    };
}vodma2_vodma2_read_start_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_line_step:28;
        RBus_UInt32  res1:2;
        RBus_UInt32  y_auto_line_step:1;
        RBus_UInt32  y_line_select:1;
    };
}vodma2_vodma2_v1_line_blk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_line_step:28;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_auto_line_step:1;
        RBus_UInt32  c_line_select:1;
    };
}vodma2_vodma2_v1_line_blk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  vodmavsg_dbrdy_keep:1;
        RBus_UInt32  vodmavsg_db_sel:1;
        RBus_UInt32  vodmavsg_db_en:1;
        RBus_UInt32  vodmavsg_db_rdy:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  iv_src_db_en:1;
        RBus_UInt32  iv_src_db_rdy:1;
        RBus_UInt32  res3:5;
        RBus_UInt32  vodma_db_sel:1;
        RBus_UInt32  vodma_db_en:1;
        RBus_UInt32  vodma_db_rdy:1;
    };
}vodma2_vodma2_reg_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  i2rnd_db_sel:1;
        RBus_UInt32  i2rnd_db_en:1;
        RBus_UInt32  i2rnd_db_rdy:1;
    };
}vodma2_vodma2_reg_db_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  crc_continuous:1;
        RBus_UInt32  crc_start:1;
    };
}vodma2_vodma2_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_result:32;
    };
}vodma2_vodma2_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vs_toggle_reset:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  p_y_len:13;
        RBus_UInt32  res2:4;
        RBus_UInt32  p_y_nline:12;
    };
}vodma2_vodma2_v1_dsize_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_adr:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_v1_seq_3d_l1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_adr:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_v1_seq_3d_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_adr:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_v1_seq_3d_l2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_adr:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_v1_seq_3d_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_adr:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_v1_seq_3d_l3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_adr:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_v1_seq_3d_r3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_adr:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_v1_seq_3d_l4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_adr:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_v1_seq_3d_r4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  y_h_offset:13;
        RBus_UInt32  res2:4;
        RBus_UInt32  y_v_offset:12;
    };
}vodma2_vodma2_v1_blk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  c_h_offset:13;
        RBus_UInt32  res2:4;
        RBus_UInt32  c_v_offset:12;
    };
}vodma2_vodma2_v1_blk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  mode:1;
        RBus_UInt32  merge:1;
    };
}vodma2_vodma2_tabsbs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_line_step:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_tabsbs_line_blk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_line_step:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_tabsbs_line_blk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  y_h_offset:13;
        RBus_UInt32  res2:4;
        RBus_UInt32  y_v_offset:12;
    };
}vodma2_vodma2_tabsbs_blk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  c_h_offset:13;
        RBus_UInt32  res2:4;
        RBus_UInt32  c_v_offset:12;
    };
}vodma2_vodma2_tabsbs_blk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  cmd_trans_sel_y:1;
        RBus_UInt32  undone_req_cnt_y:3;
        RBus_UInt32  cmd_trans_sel_c:1;
        RBus_UInt32  undone_req_cnt_c:3;
        RBus_UInt32  vodma_actv:1;
        RBus_UInt32  cur_block_sel:3;
    };
}vodma2_vodma2_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cur_st_adr:28;
        RBus_UInt32  res1:1;
        RBus_UInt32  debug_set_select:1;
        RBus_UInt32  debug_adr_step_select:1;
        RBus_UInt32  debug_y_c_select:1;
    };
}vodma2_vodma2_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gate_period:3;
        RBus_UInt32  smooth_en:1;
        RBus_UInt32  vcnt_pre_num:28;
    };
}vodma2_vodma2_smooth_toggle_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  g_position:2;
        RBus_UInt32  seq_color_swap:3;
        RBus_UInt32  alpha_position:1;
        RBus_UInt32  encfmt:4;
    };
}vodma2_vodma2_v1chroma_fmt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  mode:3;
    };
}vodma2_vodma2_v1_cu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  fir422_sel:2;
    };
}vodma2_vodma2_v1422_to_444_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_exp_offset:6;
        RBus_UInt32  res2:7;
        RBus_UInt32  reg_integer_offset:17;
    };
}vodma2_vodma2_f16_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_integer_clip_max:16;
        RBus_UInt32  reg_integer_clip_min:16;
    };
}vodma2_vodma2_f16_integer_clip_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  measure_mode:3;
        RBus_UInt32  measure_y_pos:13;
        RBus_UInt32  res1:2;
        RBus_UInt32  measure_x_pos:14;
    };
}vodma2_vodma2_f16_measure_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  f16_pos_max:16;
        RBus_UInt32  f16_pos_min:16;
    };
}vodma2_vodma2_f16_positive_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  f16_neg_max:16;
        RBus_UInt32  f16_neg_min:16;
    };
}vodma2_vodma2_f16_negative_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  vthr_rst1:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  v_thr:12;
        RBus_UInt32  res3:3;
        RBus_UInt32  h_thr:13;
    };
}vodma2_vodma2_v1sgen_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  den_src:1;
        RBus_UInt32  vgip_en:1;
        RBus_UInt32  interlace:1;
        RBus_UInt32  top_fld_indc:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  v_thr:12;
    };
}vodma2_vodma2_v1int_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  v_end:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  v_st:12;
    };
}vodma2_vodma2_v1vgip_ivs1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  v_end:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  v_st:12;
    };
}vodma2_vodma2_v1vgip_ivs2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  h_st:13;
    };
}vodma2_vodma2_v1vgip_ihs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  v_end:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  v_st:12;
    };
}vodma2_vodma2_v1vgip_fd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  v_end:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  v_st:12;
    };
}vodma2_vodma2_v1vgip_fd2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  v_end:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  v_st:12;
    };
}vodma2_vodma2_v1vgip_vact1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  v_end:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  v_st:12;
    };
}vodma2_vodma2_v1vgip_vact2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  h_end:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  h_st:13;
    };
}vodma2_vodma2_v1vgip_hact_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  v_end:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  v_st:12;
    };
}vodma2_vodma2_v1vgip_vact1_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  v_end:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  v_st:12;
    };
}vodma2_vodma2_v1vgip_vact2_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  v_end:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  v_st:12;
    };
}vodma2_vodma2_v1vgip_vbg1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  v_end:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  v_st:12;
    };
}vodma2_vodma2_v1vgip_vbg2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  h_end:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  h_st:13;
    };
}vodma2_vodma2_v1vgip_hbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  bg_v:10;
        RBus_UInt32  bg_u:10;
        RBus_UInt32  bg_y:10;
    };
}vodma2_vodma2_v1vgip_bg_clr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  random_en:1;
        RBus_UInt32  mask_den_en:1;
        RBus_UInt32  mask_data_en:2;
    };
}vodma2_vodma2_v1vgip_mask_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_end:16;
        RBus_UInt32  v_st:16;
    };
}vodma2_vodma2_v1vgip_vmask_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h_end:16;
        RBus_UInt32  h_st:16;
    };
}vodma2_vodma2_v1vgip_hmask_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_en:1;
        RBus_UInt32  read_en:1;
        RBus_UInt32  starty:14;
        RBus_UInt32  block_shape:1;
        RBus_UInt32  cross_bar_en:1;
        RBus_UInt32  startx:14;
    };
}vodma2_vodma2_accessdata_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  y10:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  y00:10;
    };
}vodma2_vodma2_accessdata_y1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  y11:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  y01:10;
    };
}vodma2_vodma2_accessdata_y2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  v00:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  u00:10;
    };
}vodma2_vodma2_accessdata_c1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  v10:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  u10:10;
    };
}vodma2_vodma2_accessdata_c2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  v01:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  u01:10;
    };
}vodma2_vodma2_accessdata_c3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  v11:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  u11:10;
    };
}vodma2_vodma2_accessdata_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  access_v:10;
        RBus_UInt32  access_u:10;
        RBus_UInt32  access_y:10;
    };
}vodma2_vodma2_accessdata_clr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  v2:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  v1:12;
    };
}vodma2_vodma2_v1vgip_intpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vodma_irq_ie:1;
        RBus_UInt32  res1:24;
        RBus_UInt32  src1_field_error_inte:1;
        RBus_UInt32  src0_field_error_inte:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  vsync_hit_den_inte:1;
        RBus_UInt32  vpos_inte1:1;
        RBus_UInt32  finish_inte1:1;
        RBus_UInt32  buf_underflow_inte1:1;
    };
}vodma2_vodma2_vgip_intpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hist_irq_record_ro:1;
        RBus_UInt32  i2rnd_irq_record_ro:1;
        RBus_UInt32  decomp_irq_record_ro:1;
        RBus_UInt32  vodma_irq_record_ro:1;
        RBus_UInt32  res1:21;
        RBus_UInt32  src1_field_error_ints:1;
        RBus_UInt32  src0_field_error_ints:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  vsync_hit_den_ints:1;
        RBus_UInt32  vpos_ints1:1;
        RBus_UInt32  finish_ints1:1;
        RBus_UInt32  buf_underflow_ints1:1;
    };
}vodma2_vodma2_vgip_intst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  l_flag_status:1;
        RBus_UInt32  vsync_status:1;
        RBus_UInt32  v_active:1;
        RBus_UInt32  field_status:1;
    };
}vodma2_vodma2_vgip_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  line_cnt:12;
    };
}vodma2_vodma2_line_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  pqdc_auto_mask_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  afifo_almost_empty_level:10;
        RBus_UInt32  undone_req_cnt_rst:1;
        RBus_UInt32  chroma_lb_underflow_debug_cancel:1;
        RBus_UInt32  chroma_lb_early_req_off:1;
        RBus_UInt32  debug_pin_src:1;
    };
}vodma2_vodma2_rtl_improve_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_up_limit:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_ld_rule_check_up_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_low_limit:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_ld_rule_check_low_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  force_all_rst:1;
        RBus_UInt32  res2:1;
    };
}vodma2_vodma2_ld_ctrl_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_cmd_water:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  dma_data_water:10;
        RBus_UInt32  res2:4;
        RBus_UInt32  cur_outstanding:4;
        RBus_UInt32  res3:3;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  data_fifo_overflow_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  zero_length_err:1;
    };
}vodma2_vodma2_ld_status1_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ack_num_error:1;
        RBus_UInt32  last_no_ack_error:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  target_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  last_ack_num:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  selected_bl:7;
    };
}vodma2_vodma2_ld_status2_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  selected_addr:28;
        RBus_UInt32  res1:2;
        RBus_UInt32  addr_bl_sel:2;
    };
}vodma2_vodma2_ld_status3_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  monitor_en:1;
        RBus_UInt32  monitor_conti:1;
        RBus_UInt32  reach_thd:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  monitor_thd:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  lowest_water_level:10;
    };
}vodma2_vodma2_ld_water_monitor_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  remain_setting:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  remain_128_num:23;
        RBus_UInt32  res2:2;
        RBus_UInt32  finish_status:2;
    };
}vodma2_vodma2_ld_addcmd_wrap_status1_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  soft_rst_before_finish:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  remain_line_num:12;
        RBus_UInt32  res2:16;
    };
}vodma2_vodma2_ld_addcmd_wrap_status2_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_up_limit:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_ld_rule_check_up_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_low_limit:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_ld_rule_check_low_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  force_all_rst:1;
        RBus_UInt32  res2:1;
    };
}vodma2_vodma2_ld_ctrl_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_cmd_water:4;
        RBus_UInt32  res1:3;
        RBus_UInt32  dma_data_water:9;
        RBus_UInt32  res2:4;
        RBus_UInt32  cur_outstanding:4;
        RBus_UInt32  res3:3;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  data_fifo_overflow_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  zero_length_err:1;
    };
}vodma2_vodma2_ld_status1_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ack_num_error:1;
        RBus_UInt32  last_no_ack_error:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  target_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  last_ack_num:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  selected_bl:7;
    };
}vodma2_vodma2_ld_status2_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  selected_addr:28;
        RBus_UInt32  res1:2;
        RBus_UInt32  addr_bl_sel:2;
    };
}vodma2_vodma2_ld_status3_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  monitor_en:1;
        RBus_UInt32  monitor_conti:1;
        RBus_UInt32  reach_thd:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  monitor_thd:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  lowest_water_level:9;
    };
}vodma2_vodma2_ld_water_monitor_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  remain_setting:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  remain_128_num:23;
        RBus_UInt32  res2:2;
        RBus_UInt32  finish_status:2;
    };
}vodma2_vodma2_ld_addcmd_wrap_status1_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  soft_rst_before_finish:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  remain_line_num:12;
        RBus_UInt32  res2:16;
    };
}vodma2_vodma2_ld_addcmd_wrap_status2_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy18005ffc_31_0:32;
    };
}vodma2_vodma2_dummy_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wrap_line_num_sys:12;
        RBus_UInt32  res1:1;
        RBus_UInt32  dma_multi_req_mode:2;
        RBus_UInt32  wrap_v_flip_en:1;
        RBus_UInt32  decomp_bpp_sys:4;
        RBus_UInt32  header_num_4line_sys:8;
        RBus_UInt32  res2:1;
        RBus_UInt32  decomp_bypass_en:1;
        RBus_UInt32  lossy_en:1;
        RBus_UInt32  decomp_wrap_en:1;
    };
}vodma2_decomp2_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wrap_line_num_vodma:12;
        RBus_UInt32  res1:3;
        RBus_UInt32  crepeat_en:1;
        RBus_UInt32  decomp_bpp_vodma:4;
        RBus_UInt32  header_num_4line_vodma:8;
        RBus_UInt32  res2:4;
    };
}vodma2_decomp2_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  wrap_y_data_wtlvl:9;
        RBus_UInt32  res2:8;
        RBus_UInt32  wrap_y_data_read_len:8;
    };
}vodma2_decomp2_ydma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  wrap_c_data_wtlvl:9;
        RBus_UInt32  res2:8;
        RBus_UInt32  wrap_c_data_read_len:8;
    };
}vodma2_decomp2_cdma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wrap_y_header_read_addr:29;
        RBus_UInt32  res1:3;
    };
}vodma2_decomp2_read_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wrap_c_header_read_addr:29;
        RBus_UInt32  res1:3;
    };
}vodma2_decomp2_read_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  wrap_data_wid_y:10;
    };
}vodma2_decomp2_x_wid_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  wrap_data_wid_c:10;
    };
}vodma2_decomp2_x_wid_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_y_hd_4line_step:29;
        RBus_UInt32  res1:3;
    };
}vodma2_decomp2_dma_read_hd_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_c_hd_4line_step:29;
        RBus_UInt32  res1:3;
    };
}vodma2_decomp2_dma_read_hd_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_c_hd_mode:1;
        RBus_UInt32  dma_y_hd_mode:1;
        RBus_UInt32  res1:14;
        RBus_UInt32  dma_c_hd_blk_len:8;
        RBus_UInt32  dma_y_hd_blk_len:8;
    };
}vodma2_decomp2_hd_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  wrap_err_hd_format:1;
        RBus_UInt32  wrap_c_data_fifoof:1;
        RBus_UInt32  wrap_c_data_fifouf:1;
        RBus_UInt32  wrap_c_data_fifofull:1;
        RBus_UInt32  wrap_c_data_fifoempty:1;
        RBus_UInt32  wrap_c_head_fifoof:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  wrap_c_head_fifofull:1;
        RBus_UInt32  wrap_c_head_fifoempty:1;
        RBus_UInt32  wrap_c_dma_fifoof:1;
        RBus_UInt32  wrap_c_dma_req_error:1;
        RBus_UInt32  wrap_c_dma_fifofull:1;
        RBus_UInt32  wrap_c_dma_fifoempty:1;
        RBus_UInt32  res3:4;
        RBus_UInt32  wrap_y_data_fifoof:1;
        RBus_UInt32  wrap_y_data_fifouf:1;
        RBus_UInt32  wrap_y_data_fifofull:1;
        RBus_UInt32  wrap_y_data_fifoempty:1;
        RBus_UInt32  wrap_y_head_fifoof:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  wrap_y_head_fifofull:1;
        RBus_UInt32  wrap_y_head_fifoempty:1;
        RBus_UInt32  wrap_y_dma_fifoof:1;
        RBus_UInt32  wrap_y_dma_req_error:1;
        RBus_UInt32  wrap_y_dma_fifofull:1;
        RBus_UInt32  wrap_y_dma_fifoempty:1;
    };
}vodma2_decomp2_dma_ststus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  wrap_c_data_fifoof_ie:1;
        RBus_UInt32  wrap_c_data_fifouf_ie:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  wrap_c_head_fifoof_ie:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  wrap_c_dma_fifoof_ie:1;
        RBus_UInt32  res4:7;
        RBus_UInt32  wrap_y_data_fifoof_ie:1;
        RBus_UInt32  wrap_y_data_fifouf_ie:1;
        RBus_UInt32  res5:2;
        RBus_UInt32  wrap_y_head_fifoof_ie:1;
        RBus_UInt32  res6:3;
        RBus_UInt32  wrap_y_dma_fifoof_ie:1;
        RBus_UInt32  res7:3;
    };
}vodma2_decomp2_dma_ie_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decomp_core_irq:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  decomp_core2_irq:1;
        RBus_UInt32  res2:15;
    };
}vodma2_decomp2_core_status_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  decomp_core2_errflag:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  decomp_core_errflag:8;
    };
}vodma2_decomp2_core_status_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decomp_time_out_sel:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  decomp_core2_errflag_clr:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  decomp_core_errflag_clr:8;
    };
}vodma2_decomp2_core_status_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  decomp_core2_flag2irq_en:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  decomp_core_flag2irq_en:8;
    };
}vodma2_decomp2_core_status_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wrap_y_data_read_addr:29;
        RBus_UInt32  res1:3;
    };
}vodma2_decomp2_data_read_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wrap_c_data_read_addr:29;
        RBus_UInt32  res1:3;
    };
}vodma2_decomp2_data_read_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wrap_y_data_line_step:29;
        RBus_UInt32  res1:3;
    };
}vodma2_decomp2_data_y_line_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wrap_c_data_line_step:29;
        RBus_UInt32  res1:3;
    };
}vodma2_decomp2_data_c_line_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  qlevel_queue_sel_c:1;
        RBus_UInt32  res2:14;
        RBus_UInt32  qlevel_queue_sel_y:2;
    };
}vodma2_decomp2_core_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  real_decomp_10bit:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  real_decomp_vend:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  real_decomp_vstart:12;
    };
}vodma2_decomp2_data_reorder_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  oldmode_hd_4line_step:8;
    };
}vodma2_decomp2_hd_4line_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  decomp_bist_1_mode:1;
        RBus_UInt32  decomp_bist_0_mode:1;
    };
}vodma2_decomp2_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  decomp_bist_1_done:1;
        RBus_UInt32  decomp_bist_0_done:1;
    };
}vodma2_decomp2_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  decomp_bist_fail_1_group:1;
        RBus_UInt32  decomp_bist_fail_0_group:1;
    };
}vodma2_decomp2_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  decomp_drf_1_mode:1;
        RBus_UInt32  decomp_drf_0_mode:1;
    };
}vodma2_decomp2_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  decomp_drf_1_resume:1;
        RBus_UInt32  decomp_drf_0_resume:1;
    };
}vodma2_decomp2_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  decomp_drf_1_done:1;
        RBus_UInt32  decomp_drf_0_done:1;
    };
}vodma2_decomp2_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  decomp_drf_1_pause:1;
        RBus_UInt32  decomp_drf_0_pause:1;
    };
}vodma2_decomp2_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  decomp_drf_fail_1_group:1;
        RBus_UInt32  decomp_drf_fail_0_group:1;
    };
}vodma2_decomp2_drf_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  bist_fail_1_4:1;
        RBus_UInt32  bist_fail_1_3:1;
        RBus_UInt32  bist_fail_1_2:1;
        RBus_UInt32  bist_fail_1_1:1;
        RBus_UInt32  bist_fail_1_0:1;
        RBus_UInt32  bist_fail_0_4:1;
        RBus_UInt32  bist_fail_0_3:1;
        RBus_UInt32  bist_fail_0_2:1;
        RBus_UInt32  bist_fail_0_1:1;
        RBus_UInt32  bist_fail_0_0:1;
    };
}vodma2_decomp2_mbist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  drf_bist_fail_1_4:1;
        RBus_UInt32  drf_bist_fail_1_3:1;
        RBus_UInt32  drf_bist_fail_1_2:1;
        RBus_UInt32  drf_bist_fail_1_1:1;
        RBus_UInt32  drf_bist_fail_1_0:1;
        RBus_UInt32  drf_bist_fail_0_4:1;
        RBus_UInt32  drf_bist_fail_0_3:1;
        RBus_UInt32  drf_bist_fail_0_2:1;
        RBus_UInt32  drf_bist_fail_0_1:1;
        RBus_UInt32  drf_bist_fail_0_0:1;
    };
}vodma2_decomp2_mbist_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  ls_1_4:1;
        RBus_UInt32  ls_1_3:1;
        RBus_UInt32  ls_1_2:1;
        RBus_UInt32  ls_1_1:1;
        RBus_UInt32  ls_1_0:1;
        RBus_UInt32  ls_0_4:1;
        RBus_UInt32  ls_0_3:1;
        RBus_UInt32  ls_0_2:1;
        RBus_UInt32  ls_0_1:1;
        RBus_UInt32  ls_0_0:1;
    };
}vodma2_decomp2_mbist_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  rm_0_4:4;
        RBus_UInt32  rm_0_3:4;
        RBus_UInt32  rm_0_2:4;
        RBus_UInt32  rm_0_1:4;
        RBus_UInt32  rm_0_0:4;
    };
}vodma2_decomp2_mbist_rm_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  rm_1_4:4;
        RBus_UInt32  rm_1_3:4;
        RBus_UInt32  rm_1_2:4;
        RBus_UInt32  rm_1_1:4;
        RBus_UInt32  rm_1_0:4;
    };
}vodma2_decomp2_mbist_rm_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  rme_1_4:1;
        RBus_UInt32  rme_1_3:1;
        RBus_UInt32  rme_1_2:1;
        RBus_UInt32  rme_1_1:1;
        RBus_UInt32  rme_1_0:1;
        RBus_UInt32  rme_0_4:1;
        RBus_UInt32  rme_0_3:1;
        RBus_UInt32  rme_0_2:1;
        RBus_UInt32  rme_0_1:1;
        RBus_UInt32  rme_0_0:1;
    };
}vodma2_decomp2_mbist_rme_RBUS;

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
}vodma2_vodma2_pq_decmp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_line_sum_bit:16;
        RBus_UInt32  decmp_400_old_mode_en:1;
        RBus_UInt32  dummy18005b04_14_10:5;
        RBus_UInt32  decmp_qp_mode:2;
        RBus_UInt32  decmp_dic_mode_en:1;
        RBus_UInt32  decmp_two_line_prediction_en:1;
        RBus_UInt32  decmp_line_mode:1;
        RBus_UInt32  decmp_data_color:1;
        RBus_UInt32  decmp_data_bit_width:2;
        RBus_UInt32  decmp_data_format:2;
    };
}vodma2_vodma2_pq_decmp_pair_RBUS;

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
}vodma2_vodma2_pq_decmp_sat_en_RBUS;

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
        RBus_UInt32  not_finish_irq_odd_en:1;
        RBus_UInt32  underflow_irq_odd_en:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  crc_r_error_odd_en:1;
        RBus_UInt32  crc_g_error_odd_en:1;
        RBus_UInt32  crc_b_error_odd_en:1;
    };
}vodma2_vodma2_pq_decmp_irq_en_RBUS;

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
        RBus_UInt32  in_fifo_overflow_odd_st:1;
        RBus_UInt32  ring_r_overflow_odd_st:1;
        RBus_UInt32  ring_g_overflow_odd_st:1;
        RBus_UInt32  ring_b_overflow_odd_st:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  not_finish_irq_odd_st:1;
        RBus_UInt32  underflow_irq_odd_st:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  crc_r_error_odd_st:1;
        RBus_UInt32  crc_g_error_odd_st:1;
        RBus_UInt32  crc_b_error_odd_st:1;
    };
}vodma2_vodma2_pq_decmp_irq_st_RBUS;

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
}vodma2_vodma2_pq_decmp_mark_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_0:16;
        RBus_UInt32  mark_color_1:16;
    };
}vodma2_vodma2_pq_decmp_mark_color_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_2:16;
        RBus_UInt32  mark_color_3:16;
    };
}vodma2_vodma2_pq_decmp_mark_color_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_4:16;
        RBus_UInt32  mark_color_5:16;
    };
}vodma2_vodma2_pq_decmp_mark_color_45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_6:16;
        RBus_UInt32  mark_color_7:16;
    };
}vodma2_vodma2_pq_decmp_mark_color_67_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_dic:16;
        RBus_UInt32  mark_color_422:16;
    };
}vodma2_vodma2_pq_decmp_mark_color_422_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_two_pixel_mode:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  decmp_crc_error_line:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  decmp_package_height_cnt:14;
    };
}vodma2_vodma2_pq_decmp_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_g:32;
    };
}vodma2_vodma2_pq_decmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_r:32;
    };
}vodma2_vodma2_pq_decmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_b:32;
    };
}vodma2_vodma2_pq_decmp_crc_even_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_odd_g:32;
    };
}vodma2_vodma2_pq_decmp_crc_odd_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_odd_r:32;
    };
}vodma2_vodma2_pq_decmp_crc_odd_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_odd_b:32;
    };
}vodma2_vodma2_pq_decmp_crc_odd_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_pause_cycle_measure_en:1;
        RBus_UInt32  decmp_pause_cycle_long_term:1;
        RBus_UInt32  res1:22;
        RBus_UInt32  decmp_pause_cycle:8;
    };
}vodma2_vodma2_pq_decmp_pause_cycle_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en_pvgen:1;
        RBus_UInt32  en_pfgen:1;
        RBus_UInt32  pfgen_inv:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  iv_inv_en:1;
        RBus_UInt32  iv_src_sel:3;
        RBus_UInt32  iv2pv_dly:24;
    };
}vodma2_vodma2_pvs0_gen_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pvs0_free_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pvs0_free_vs_reset_en:1;
        RBus_UInt32  pvs0_free_period_update:1;
        RBus_UInt32  pvs0_free_period:28;
    };
}vodma2_vodma2_pvs_free_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pvs0_free_clk_sel:2;
        RBus_UInt32  dummy18005e08_29_11:19;
        RBus_UInt32  pvs0_free_vs_sel:3;
        RBus_UInt32  res1:3;
        RBus_UInt32  pvs0_free_l_flag_en:1;
        RBus_UInt32  pvs0_free_vs_inv_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  mask_one_vs:1;
    };
}vodma2_vodma2_pvs_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vodma_enclk:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  vodma_clk_div2_en_src_sel:1;
        RBus_UInt32  vodma_clk_div2_en:1;
        RBus_UInt32  vodma_clk_div_n:5;
        RBus_UInt32  res2:1;
        RBus_UInt32  vodma_clk_ratio_n_off:6;
        RBus_UInt32  dummy18005e0c_15_7:9;
        RBus_UInt32  vodma_clk_sel:3;
        RBus_UInt32  en_fifo_empty_gate:1;
        RBus_UInt32  gating_src_sel:2;
        RBus_UInt32  en_fifo_full_gate:1;
    };
}vodma2_vodma2_clkgen_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy18005e10_31_28:4;
        RBus_UInt32  pvs0_vs_width:28;
    };
}vodma2_vodma2_pvs_width_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  phase_err_measure_start:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  pe_number:28;
    };
}vodma2_vodma2_phase_error_for_2vs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  manual_vs:1;
        RBus_UInt32  res1:31;
    };
}vodma2_vodma2_manual_vs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  db_vs_sel_rwd1:2;
        RBus_UInt32  res1:26;
        RBus_UInt32  pv_guardband:1;
        RBus_UInt32  iv_src:3;
    };
}vodma2_vodma2_reg_db_vsync_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ivs_cnt_reset:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  vsync_divider:5;
        RBus_UInt32  res2:11;
        RBus_UInt32  vsync_multipiler:5;
    };
}vodma2_vodma2_ivs_framerate_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  measure_vs_cnt_src_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  vs_cnt:25;
    };
}vodma2_vodma2_ivs_framerate_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  vsync_period:28;
    };
}vodma2_vodma2_ivs_framerate_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  i2rnd_flag_fifo_mode:1;
        RBus_UInt32  i2rnd_flag_fifo_en:1;
        RBus_UInt32  debug_mask_main:1;
        RBus_UInt32  debug_mask_sub1:1;
        RBus_UInt32  debug_mask_sub2:1;
        RBus_UInt32  debug_mask_sub3:1;
        RBus_UInt32  debug_mask_repeat_sub_old_en:1;
        RBus_UInt32  i2rnd_src_flag_inv:1;
        RBus_UInt32  i2rnd_timing_mode:2;
        RBus_UInt32  i2rnd_timing_en:1;
    };
}vodma2_vodma2_i2rnd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_hw_mask_repeat_frame_m_en:1;
        RBus_UInt32  i2rnd_hw_nxt_rpt_flag_m_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  i2rnd_m_quincunx_sel:1;
        RBus_UInt32  i2rnd_m_quincunx_fw:4;
        RBus_UInt32  i2rnd_m_nxt_rpt_flag_fw:1;
        RBus_UInt32  i2rnd_m_nxt_rpt_flag_sel:1;
        RBus_UInt32  i2rnd_m_block_fw:2;
        RBus_UInt32  i2rnd_m_block_free_run:1;
        RBus_UInt32  i2rnd_m_block_sel:3;
        RBus_UInt32  res2:3;
        RBus_UInt32  i2rnd_m_field_fw:1;
        RBus_UInt32  i2rnd_m_field_free_run:1;
        RBus_UInt32  i2rnd_m_field_sel:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  i2rnd_m_lflag_fw:1;
        RBus_UInt32  i2rnd_m_lflag_free_run:1;
        RBus_UInt32  i2rnd_m_lflag_sel:3;
    };
}vodma2_vodma2_i2rnd_m_flag_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_hw_mask_repeat_frame_s_en:1;
        RBus_UInt32  i2rnd_hw_nxt_rpt_flag_s_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  i2rnd_s_quincunx_sel:1;
        RBus_UInt32  i2rnd_s_quincunx_fw:4;
        RBus_UInt32  i2rnd_s_nxt_rpt_flag_fw:1;
        RBus_UInt32  i2rnd_s_nxt_rpt_flag_sel:1;
        RBus_UInt32  i2rnd_s_block_fw:2;
        RBus_UInt32  i2rnd_s_block_free_run:1;
        RBus_UInt32  i2rnd_s_block_sel:3;
        RBus_UInt32  res2:3;
        RBus_UInt32  i2rnd_s_field_fw:1;
        RBus_UInt32  i2rnd_s_field_free_run:1;
        RBus_UInt32  i2rnd_s_field_sel:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  i2rnd_s_lflag_fw:1;
        RBus_UInt32  i2rnd_s_lflag_free_run:1;
        RBus_UInt32  i2rnd_s_lflag_sel:3;
    };
}vodma2_vodma2_i2rnd_s_flag_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  i2rnd_s_in_field_error_irq_en:1;
        RBus_UInt32  i2rnd_m_in_field_error_irq_en:1;
        RBus_UInt32  i2rnd_load_hit_den_irq_en:1;
        RBus_UInt32  i2rnd_s_load_over_max_irq_en:1;
        RBus_UInt32  i2rnd_m_load_over_max_irq_en:1;
        RBus_UInt32  i2rnd_not_finish_irq_en:1;
    };
}vodma2_vodma2_i2rnd_irq_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  i2rnd_s_in_field_error_irq_st:1;
        RBus_UInt32  i2rnd_m_in_field_error_irq_st:1;
        RBus_UInt32  i2rnd_load_hit_den_irq_st:1;
        RBus_UInt32  i2rnd_s_load_over_max_irq_st:1;
        RBus_UInt32  i2rnd_m_load_over_max_irq_st:1;
        RBus_UInt32  i2rnd_not_finish_irq_st:1;
    };
}vodma2_vodma2_i2rnd_irq_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_frame_measure:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  i2rnd_ori_frame_cnt:12;
        RBus_UInt32  i2rnd_s_mask_frame_cnt:8;
        RBus_UInt32  i2rnd_m_mask_frame_cnt:8;
    };
}vodma2_vodma2_i2rnd_measure_frame_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  info_i3ddma_overflow:1;
        RBus_UInt32  info_dispm_overflow:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  dma_info_water_i3ddma:4;
        RBus_UInt32  dma_info_water_dispm:4;
        RBus_UInt32  dma_info_wptr_i3ddma:4;
        RBus_UInt32  dma_info_rptr_i3ddma:4;
        RBus_UInt32  dma_info_wptr_dispm:4;
        RBus_UInt32  dma_info_rptr_dispm:4;
    };
}vodma2_vodma2_i2rnd_fifo_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_s_nxt_rpt_flag:1;
        RBus_UInt32  i2rnd_m_nxt_rpt_flag:1;
        RBus_UInt32  i2rnd_nxt_rpt_flag:1;
        RBus_UInt32  i2rnd_s_quincunx:4;
        RBus_UInt32  i2rnd_m_quincunx:4;
        RBus_UInt32  i2rnd_quincunx:4;
        RBus_UInt32  i2rnd_s_block:2;
        RBus_UInt32  i2rnd_s_field:1;
        RBus_UInt32  i2rnd_s_lflag:1;
        RBus_UInt32  i2rnd_m_block:2;
        RBus_UInt32  i2rnd_m_field:1;
        RBus_UInt32  i2rnd_m_lflag:1;
        RBus_UInt32  i2rnd_block:2;
        RBus_UInt32  i2rnd_field:1;
        RBus_UInt32  i2rnd_lflag:1;
        RBus_UInt32  i2rnd_src_flag:1;
        RBus_UInt32  i2rnd_st:4;
    };
}vodma2_vodma2_i2rnd_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  flag_fifo_style_i3ddma:1;
        RBus_UInt32  flag_fifo_style_dispm:1;
        RBus_UInt32  flag_fifo_fast_int_i3ddma:1;
        RBus_UInt32  flag_fifo_fast_int_dispm:1;
        RBus_UInt32  res1:12;
        RBus_UInt32  dram_buf_num_i3ddma:4;
        RBus_UInt32  dram_buf_num_dispm:4;
        RBus_UInt32  dma_info_th_i3ddma:4;
        RBus_UInt32  dma_info_th_dispm:4;
    };
}vodma2_vodma2_i2rnd_fifo_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  dma_info_wptr_fw_set_dispm:1;
        RBus_UInt32  dma_info_wptr_fw_dispm:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  dma_info_wptr_fw_set_i3ddma:1;
        RBus_UInt32  dma_info_wptr_fw_i3ddma:4;
        RBus_UInt32  res3:3;
        RBus_UInt32  dma_info_rptr_fw_set_dispm:1;
        RBus_UInt32  dma_info_rptr_fw_dispm:4;
        RBus_UInt32  res4:3;
        RBus_UInt32  dma_info_rptr_fw_set_i3ddma:1;
        RBus_UInt32  dma_info_rptr_fw_i3ddma:4;
    };
}vodma2_vodma2_i2rnd_dma_info_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_period_clk_src:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  i2rnd_m_period_load:28;
    };
}vodma2_vodma2_i2rnd_m_period_load_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  i2rnd_m_period:28;
    };
}vodma2_vodma2_i2rnd_m_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  i2rnd_s_period_load:28;
    };
}vodma2_vodma2_i2rnd_s_period_load_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  i2rnd_s_period:28;
    };
}vodma2_vodma2_i2rnd_s_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_load_time_measure:1;
        RBus_UInt32  i2rnd_load_time_measure_long_term:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  i2rnd_m_load_time:28;
    };
}vodma2_vodma2_i2rnd_m_measure_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  i2rnd_s_load_time:28;
    };
}vodma2_vodma2_i2rnd_s_measure_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_period_load_max_measure_en:1;
        RBus_UInt32  i2rnd_period_load_max_dbg_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  i2rnd_m_period_load_max:28;
    };
}vodma2_vodma2_i2rnd_m_period_load_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  i2rnd_s_period_load_max:28;
    };
}vodma2_vodma2_i2rnd_s_period_load_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  timing_monitor_en:1;
        RBus_UInt32  timing_monitor_i2rnd_mode:2;
        RBus_UInt32  timing_monitor_src:1;
        RBus_UInt32  timing_monitor_unit:1;
        RBus_UInt32  timing_monitor_multi_mode:1;
        RBus_UInt32  timing_monitor_compare:2;
        RBus_UInt32  res1:8;
        RBus_UInt32  timing_monitor_sta0:4;
        RBus_UInt32  timing_monitor_end0:4;
        RBus_UInt32  timing_monitor_sta1:4;
        RBus_UInt32  timing_monitor_end1:4;
    };
}vodma2_vodma2_timing_monitor_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  timing_monitor_sta2:4;
        RBus_UInt32  timing_monitor_end2:4;
        RBus_UInt32  timing_monitor_sta3:4;
        RBus_UInt32  timing_monitor_end3:4;
        RBus_UInt32  timing_monitor_sta4:4;
        RBus_UInt32  timing_monitor_end4:4;
        RBus_UInt32  timing_monitor_sta5:4;
        RBus_UInt32  timing_monitor_end5:4;
    };
}vodma2_vodma2_timing_monitor_multi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_compare_th:28;
    };
}vodma2_vodma2_timing_monitor_compare_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_golden:28;
    };
}vodma2_vodma2_timing_monitor_golden_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_result_previous1:28;
    };
}vodma2_vodma2_timing_monitor_result1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_result_previous2:28;
    };
}vodma2_vodma2_timing_monitor_result2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_result_previous3:28;
    };
}vodma2_vodma2_timing_monitor_result3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_result_previous4:28;
    };
}vodma2_vodma2_timing_monitor_result4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_result_max:28;
    };
}vodma2_vodma2_timing_monitor_max_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_result_min:28;
    };
}vodma2_vodma2_timing_monitor_min_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  compare_hit:1;
        RBus_UInt32  hsync_hit_den_error:1;
        RBus_UInt32  vsync_hit_den_error:1;
    };
}vodma2_vodma2_timing_monitor_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  vodma_bist_mode_3:1;
        RBus_UInt32  vodma_bist_mode_2:1;
        RBus_UInt32  vodma_bist_mode_1:1;
        RBus_UInt32  res2:1;
    };
}vodma2_vodma2_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  vodma_bist_done_3:1;
        RBus_UInt32  vodma_bist_done_2:1;
        RBus_UInt32  vodma_bist_done_1:1;
        RBus_UInt32  res2:1;
    };
}vodma2_vodma2_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  vodma_bist_fail_group_1:1;
        RBus_UInt32  vodma_bist_fail_group_0:1;
    };
}vodma2_vodma2_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  vodma_bist_fail_8:1;
        RBus_UInt32  vodma_bist_fail_7:1;
        RBus_UInt32  vodma_bist_fail_6:1;
        RBus_UInt32  vodma_bist_fail_5:1;
        RBus_UInt32  vodma_bist_fail_4:1;
        RBus_UInt32  res2:4;
    };
}vodma2_vodma2_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  vodma_drf_mode_3:1;
        RBus_UInt32  vodma_drf_mode_2:1;
        RBus_UInt32  vodma_drf_mode_1:1;
        RBus_UInt32  res2:1;
    };
}vodma2_vodma2_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  vodma_drf_resume_3:1;
        RBus_UInt32  vodma_drf_resume_2:1;
        RBus_UInt32  vodma_drf_resume_1:1;
        RBus_UInt32  res2:1;
    };
}vodma2_vodma2_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  vodma_drf_done_3:1;
        RBus_UInt32  vodma_drf_done_2:1;
        RBus_UInt32  vodma_drf_done_1:1;
        RBus_UInt32  res2:1;
    };
}vodma2_vodma2_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  vodma_drf_pause_3:1;
        RBus_UInt32  vodma_drf_pause_2:1;
        RBus_UInt32  vodma_drf_pause_1:1;
        RBus_UInt32  res2:1;
    };
}vodma2_vodma2_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  vodma_drf_fail_group_1:1;
        RBus_UInt32  vodma_drf_fail_group_0:1;
    };
}vodma2_vodma2_drf_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  vodma_drf_fail_8:1;
        RBus_UInt32  vodma_drf_fail_7:1;
        RBus_UInt32  vodma_drf_fail_6:1;
        RBus_UInt32  vodma_drf_fail_5:1;
        RBus_UInt32  vodma_drf_fail_4:1;
        RBus_UInt32  res2:4;
    };
}vodma2_vodma2_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  vodma_bist_rwm_3:1;
        RBus_UInt32  vodma_bist_ls_3:1;
        RBus_UInt32  vodma_bist_rm_3:4;
        RBus_UInt32  vodma_bist_rme_3:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  vodma_bist_rwm_2:1;
        RBus_UInt32  vodma_bist_ls_2:1;
        RBus_UInt32  vodma_bist_rm_2:4;
        RBus_UInt32  vodma_bist_rme_2:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  vodma_bist_ls_1:1;
        RBus_UInt32  vodma_bist_rm_1:4;
        RBus_UInt32  vodma_bist_rme_1:1;
        RBus_UInt32  res4:8;
    };
}vodma2_vodma2_bist_other_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  sel:5;
    };
}vodma2_vodma2_dbg_RBUS;

#else //apply LITTLE_ENDIAN

//======VODMA2 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vodma_go:1;
        RBus_UInt32  dma_mode:1;
        RBus_UInt32  double_pixel_mode:1;
        RBus_UInt32  chroma_swap_en:1;
        RBus_UInt32  v_flip_en:1;
        RBus_UInt32  dma_state_reset_en:1;
        RBus_UInt32  keep_go_en:1;
        RBus_UInt32  pxl_swap_sel:4;
        RBus_UInt32  uv_off:1;
        RBus_UInt32  double_chroma:1;
        RBus_UInt32  seq_data_width:1;
        RBus_UInt32  seq_data_pack_type:1;
        RBus_UInt32  dma_auto_mode:1;
        RBus_UInt32  force_2d_sel:1;
        RBus_UInt32  force_2d_en:1;
        RBus_UInt32  l_flag_fw:1;
        RBus_UInt32  field_fw:1;
        RBus_UInt32  field_mode:1;
        RBus_UInt32  inverse_128_en:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  film_condition:1;
        RBus_UInt32  merge_backward:1;
        RBus_UInt32  merge_forward:1;
    };
}vodma2_vodma2_v1_dcfg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmd_trans_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  burst_len:7;
        RBus_UInt32  res2:18;
        RBus_UInt32  max_outstanding:3;
    };
}vodma2_vodma2_dma_option_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line_cnt:12;
        RBus_UInt32  res1:20;
    };
}vodma2_vodma2_read_start_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_line_select:1;
        RBus_UInt32  y_auto_line_step:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  y_line_step:28;
    };
}vodma2_vodma2_v1_line_blk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_line_select:1;
        RBus_UInt32  c_auto_line_step:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_line_step:28;
    };
}vodma2_vodma2_v1_line_blk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vodma_db_rdy:1;
        RBus_UInt32  vodma_db_en:1;
        RBus_UInt32  vodma_db_sel:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  iv_src_db_rdy:1;
        RBus_UInt32  iv_src_db_en:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  vodmavsg_db_rdy:1;
        RBus_UInt32  vodmavsg_db_en:1;
        RBus_UInt32  vodmavsg_db_sel:1;
        RBus_UInt32  vodmavsg_dbrdy_keep:1;
        RBus_UInt32  res3:12;
    };
}vodma2_vodma2_reg_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_db_rdy:1;
        RBus_UInt32  i2rnd_db_en:1;
        RBus_UInt32  i2rnd_db_sel:1;
        RBus_UInt32  res1:29;
    };
}vodma2_vodma2_reg_db_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_start:1;
        RBus_UInt32  crc_continuous:1;
        RBus_UInt32  res1:30;
    };
}vodma2_vodma2_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_result:32;
    };
}vodma2_vodma2_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p_y_nline:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  p_y_len:13;
        RBus_UInt32  res2:2;
        RBus_UInt32  vs_toggle_reset:1;
    };
}vodma2_vodma2_v1_dsize_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  st_adr:28;
    };
}vodma2_vodma2_v1_seq_3d_l1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  st_adr:28;
    };
}vodma2_vodma2_v1_seq_3d_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  st_adr:28;
    };
}vodma2_vodma2_v1_seq_3d_l2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  st_adr:28;
    };
}vodma2_vodma2_v1_seq_3d_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  st_adr:28;
    };
}vodma2_vodma2_v1_seq_3d_l3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  st_adr:28;
    };
}vodma2_vodma2_v1_seq_3d_r3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  st_adr:28;
    };
}vodma2_vodma2_v1_seq_3d_l4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  st_adr:28;
    };
}vodma2_vodma2_v1_seq_3d_r4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_v_offset:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  y_h_offset:13;
        RBus_UInt32  res2:3;
    };
}vodma2_vodma2_v1_blk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_v_offset:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  c_h_offset:13;
        RBus_UInt32  res2:3;
    };
}vodma2_vodma2_v1_blk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  merge:1;
        RBus_UInt32  mode:1;
        RBus_UInt32  res1:30;
    };
}vodma2_vodma2_tabsbs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  y_line_step:28;
    };
}vodma2_vodma2_tabsbs_line_blk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  c_line_step:28;
    };
}vodma2_vodma2_tabsbs_line_blk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_v_offset:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  y_h_offset:13;
        RBus_UInt32  res2:3;
    };
}vodma2_vodma2_tabsbs_blk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_v_offset:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  c_h_offset:13;
        RBus_UInt32  res2:3;
    };
}vodma2_vodma2_tabsbs_blk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cur_block_sel:3;
        RBus_UInt32  vodma_actv:1;
        RBus_UInt32  undone_req_cnt_c:3;
        RBus_UInt32  cmd_trans_sel_c:1;
        RBus_UInt32  undone_req_cnt_y:3;
        RBus_UInt32  cmd_trans_sel_y:1;
        RBus_UInt32  res1:20;
    };
}vodma2_vodma2_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  debug_y_c_select:1;
        RBus_UInt32  debug_adr_step_select:1;
        RBus_UInt32  debug_set_select:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  cur_st_adr:28;
    };
}vodma2_vodma2_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcnt_pre_num:28;
        RBus_UInt32  smooth_en:1;
        RBus_UInt32  gate_period:3;
    };
}vodma2_vodma2_smooth_toggle_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  encfmt:4;
        RBus_UInt32  alpha_position:1;
        RBus_UInt32  seq_color_swap:3;
        RBus_UInt32  g_position:2;
        RBus_UInt32  res1:22;
    };
}vodma2_vodma2_v1chroma_fmt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mode:3;
        RBus_UInt32  res1:29;
    };
}vodma2_vodma2_v1_cu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fir422_sel:2;
        RBus_UInt32  res1:30;
    };
}vodma2_vodma2_v1422_to_444_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_integer_offset:17;
        RBus_UInt32  res1:7;
        RBus_UInt32  reg_exp_offset:6;
        RBus_UInt32  res2:2;
    };
}vodma2_vodma2_f16_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_integer_clip_min:16;
        RBus_UInt32  reg_integer_clip_max:16;
    };
}vodma2_vodma2_f16_integer_clip_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  measure_x_pos:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  measure_y_pos:13;
        RBus_UInt32  measure_mode:3;
    };
}vodma2_vodma2_f16_measure_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  f16_pos_min:16;
        RBus_UInt32  f16_pos_max:16;
    };
}vodma2_vodma2_f16_positive_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  f16_neg_min:16;
        RBus_UInt32  f16_neg_max:16;
    };
}vodma2_vodma2_f16_negative_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h_thr:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  v_thr:12;
        RBus_UInt32  res2:2;
        RBus_UInt32  vthr_rst1:1;
        RBus_UInt32  res3:1;
    };
}vodma2_vodma2_v1sgen_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_thr:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  top_fld_indc:1;
        RBus_UInt32  interlace:1;
        RBus_UInt32  vgip_en:1;
        RBus_UInt32  den_src:1;
        RBus_UInt32  res2:12;
    };
}vodma2_vodma2_v1int_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_st:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  v_end:12;
        RBus_UInt32  res2:4;
    };
}vodma2_vodma2_v1vgip_ivs1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_st:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  v_end:12;
        RBus_UInt32  res2:4;
    };
}vodma2_vodma2_v1vgip_ivs2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h_st:13;
        RBus_UInt32  res1:19;
    };
}vodma2_vodma2_v1vgip_ihs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_st:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  v_end:12;
        RBus_UInt32  res2:4;
    };
}vodma2_vodma2_v1vgip_fd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_st:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  v_end:12;
        RBus_UInt32  res2:4;
    };
}vodma2_vodma2_v1vgip_fd2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_st:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  v_end:12;
        RBus_UInt32  res2:4;
    };
}vodma2_vodma2_v1vgip_vact1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_st:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  v_end:12;
        RBus_UInt32  res2:4;
    };
}vodma2_vodma2_v1vgip_vact2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h_st:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  h_end:13;
        RBus_UInt32  res2:3;
    };
}vodma2_vodma2_v1vgip_hact_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_st:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  v_end:12;
        RBus_UInt32  res2:4;
    };
}vodma2_vodma2_v1vgip_vact1_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_st:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  v_end:12;
        RBus_UInt32  res2:4;
    };
}vodma2_vodma2_v1vgip_vact2_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_st:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  v_end:12;
        RBus_UInt32  res2:4;
    };
}vodma2_vodma2_v1vgip_vbg1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_st:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  v_end:12;
        RBus_UInt32  res2:4;
    };
}vodma2_vodma2_v1vgip_vbg2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h_st:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  h_end:13;
        RBus_UInt32  res2:3;
    };
}vodma2_vodma2_v1vgip_hbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bg_y:10;
        RBus_UInt32  bg_u:10;
        RBus_UInt32  bg_v:10;
        RBus_UInt32  res1:2;
    };
}vodma2_vodma2_v1vgip_bg_clr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mask_data_en:2;
        RBus_UInt32  mask_den_en:1;
        RBus_UInt32  random_en:1;
        RBus_UInt32  res1:28;
    };
}vodma2_vodma2_v1vgip_mask_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_st:16;
        RBus_UInt32  v_end:16;
    };
}vodma2_vodma2_v1vgip_vmask_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h_st:16;
        RBus_UInt32  h_end:16;
    };
}vodma2_vodma2_v1vgip_hmask_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  startx:14;
        RBus_UInt32  cross_bar_en:1;
        RBus_UInt32  block_shape:1;
        RBus_UInt32  starty:14;
        RBus_UInt32  read_en:1;
        RBus_UInt32  write_en:1;
    };
}vodma2_vodma2_accessdata_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y00:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  y10:10;
        RBus_UInt32  res2:6;
    };
}vodma2_vodma2_accessdata_y1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y01:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  y11:10;
        RBus_UInt32  res2:6;
    };
}vodma2_vodma2_accessdata_y2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  u00:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  v00:10;
        RBus_UInt32  res2:6;
    };
}vodma2_vodma2_accessdata_c1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  u10:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  v10:10;
        RBus_UInt32  res2:6;
    };
}vodma2_vodma2_accessdata_c2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  u01:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  v01:10;
        RBus_UInt32  res2:6;
    };
}vodma2_vodma2_accessdata_c3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  u11:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  v11:10;
        RBus_UInt32  res2:6;
    };
}vodma2_vodma2_accessdata_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_y:10;
        RBus_UInt32  access_u:10;
        RBus_UInt32  access_v:10;
        RBus_UInt32  res1:2;
    };
}vodma2_vodma2_accessdata_clr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v1:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  v2:12;
        RBus_UInt32  res2:4;
    };
}vodma2_vodma2_v1vgip_intpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  buf_underflow_inte1:1;
        RBus_UInt32  finish_inte1:1;
        RBus_UInt32  vpos_inte1:1;
        RBus_UInt32  vsync_hit_den_inte:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  src0_field_error_inte:1;
        RBus_UInt32  src1_field_error_inte:1;
        RBus_UInt32  res2:24;
        RBus_UInt32  vodma_irq_ie:1;
    };
}vodma2_vodma2_vgip_intpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  buf_underflow_ints1:1;
        RBus_UInt32  finish_ints1:1;
        RBus_UInt32  vpos_ints1:1;
        RBus_UInt32  vsync_hit_den_ints:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  src0_field_error_ints:1;
        RBus_UInt32  src1_field_error_ints:1;
        RBus_UInt32  res2:21;
        RBus_UInt32  vodma_irq_record_ro:1;
        RBus_UInt32  decomp_irq_record_ro:1;
        RBus_UInt32  i2rnd_irq_record_ro:1;
        RBus_UInt32  hist_irq_record_ro:1;
    };
}vodma2_vodma2_vgip_intst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  field_status:1;
        RBus_UInt32  v_active:1;
        RBus_UInt32  vsync_status:1;
        RBus_UInt32  l_flag_status:1;
        RBus_UInt32  res1:28;
    };
}vodma2_vodma2_vgip_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line_cnt:12;
        RBus_UInt32  res1:20;
    };
}vodma2_vodma2_line_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  debug_pin_src:1;
        RBus_UInt32  chroma_lb_early_req_off:1;
        RBus_UInt32  chroma_lb_underflow_debug_cancel:1;
        RBus_UInt32  undone_req_cnt_rst:1;
        RBus_UInt32  afifo_almost_empty_level:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  pqdc_auto_mask_en:1;
        RBus_UInt32  res2:15;
    };
}vodma2_vodma2_rtl_improve_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_up_limit:28;
    };
}vodma2_vodma2_ld_rule_check_up_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_low_limit:28;
    };
}vodma2_vodma2_ld_rule_check_low_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  force_all_rst:1;
        RBus_UInt32  res2:30;
    };
}vodma2_vodma2_ld_ctrl_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  zero_length_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  data_fifo_overflow_err:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cur_outstanding:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  dma_data_water:10;
        RBus_UInt32  res3:2;
        RBus_UInt32  dma_cmd_water:4;
    };
}vodma2_vodma2_ld_status1_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  selected_bl:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  last_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  target_ack_num:7;
        RBus_UInt32  res3:7;
        RBus_UInt32  last_no_ack_error:1;
        RBus_UInt32  ack_num_error:1;
    };
}vodma2_vodma2_ld_status2_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr_bl_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  selected_addr:28;
    };
}vodma2_vodma2_ld_status3_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lowest_water_level:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  monitor_thd:10;
        RBus_UInt32  res2:3;
        RBus_UInt32  reach_thd:1;
        RBus_UInt32  monitor_conti:1;
        RBus_UInt32  monitor_en:1;
    };
}vodma2_vodma2_ld_water_monitor_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  finish_status:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  remain_128_num:23;
        RBus_UInt32  res2:4;
        RBus_UInt32  remain_setting:1;
    };
}vodma2_vodma2_ld_addcmd_wrap_status1_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  remain_line_num:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  soft_rst_before_finish:1;
    };
}vodma2_vodma2_ld_addcmd_wrap_status2_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_up_limit:28;
    };
}vodma2_vodma2_ld_rule_check_up_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_low_limit:28;
    };
}vodma2_vodma2_ld_rule_check_low_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  force_all_rst:1;
        RBus_UInt32  res2:30;
    };
}vodma2_vodma2_ld_ctrl_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  zero_length_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  data_fifo_overflow_err:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cur_outstanding:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  dma_data_water:9;
        RBus_UInt32  res3:3;
        RBus_UInt32  dma_cmd_water:4;
    };
}vodma2_vodma2_ld_status1_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  selected_bl:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  last_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  target_ack_num:7;
        RBus_UInt32  res3:7;
        RBus_UInt32  last_no_ack_error:1;
        RBus_UInt32  ack_num_error:1;
    };
}vodma2_vodma2_ld_status2_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr_bl_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  selected_addr:28;
    };
}vodma2_vodma2_ld_status3_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lowest_water_level:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  monitor_thd:9;
        RBus_UInt32  res2:4;
        RBus_UInt32  reach_thd:1;
        RBus_UInt32  monitor_conti:1;
        RBus_UInt32  monitor_en:1;
    };
}vodma2_vodma2_ld_water_monitor_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  finish_status:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  remain_128_num:23;
        RBus_UInt32  res2:4;
        RBus_UInt32  remain_setting:1;
    };
}vodma2_vodma2_ld_addcmd_wrap_status1_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  remain_line_num:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  soft_rst_before_finish:1;
    };
}vodma2_vodma2_ld_addcmd_wrap_status2_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy18005ffc_31_0:32;
    };
}vodma2_vodma2_dummy_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decomp_wrap_en:1;
        RBus_UInt32  lossy_en:1;
        RBus_UInt32  decomp_bypass_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  header_num_4line_sys:8;
        RBus_UInt32  decomp_bpp_sys:4;
        RBus_UInt32  wrap_v_flip_en:1;
        RBus_UInt32  dma_multi_req_mode:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  wrap_line_num_sys:12;
    };
}vodma2_decomp2_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  header_num_4line_vodma:8;
        RBus_UInt32  decomp_bpp_vodma:4;
        RBus_UInt32  crepeat_en:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  wrap_line_num_vodma:12;
    };
}vodma2_decomp2_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wrap_y_data_read_len:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  wrap_y_data_wtlvl:9;
        RBus_UInt32  res2:7;
    };
}vodma2_decomp2_ydma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wrap_c_data_read_len:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  wrap_c_data_wtlvl:9;
        RBus_UInt32  res2:7;
    };
}vodma2_decomp2_cdma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  wrap_y_header_read_addr:29;
    };
}vodma2_decomp2_read_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  wrap_c_header_read_addr:29;
    };
}vodma2_decomp2_read_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wrap_data_wid_y:10;
        RBus_UInt32  res1:22;
    };
}vodma2_decomp2_x_wid_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wrap_data_wid_c:10;
        RBus_UInt32  res1:22;
    };
}vodma2_decomp2_x_wid_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  dma_y_hd_4line_step:29;
    };
}vodma2_decomp2_dma_read_hd_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  dma_c_hd_4line_step:29;
    };
}vodma2_decomp2_dma_read_hd_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_y_hd_blk_len:8;
        RBus_UInt32  dma_c_hd_blk_len:8;
        RBus_UInt32  res1:14;
        RBus_UInt32  dma_y_hd_mode:1;
        RBus_UInt32  dma_c_hd_mode:1;
    };
}vodma2_decomp2_hd_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wrap_y_dma_fifoempty:1;
        RBus_UInt32  wrap_y_dma_fifofull:1;
        RBus_UInt32  wrap_y_dma_req_error:1;
        RBus_UInt32  wrap_y_dma_fifoof:1;
        RBus_UInt32  wrap_y_head_fifoempty:1;
        RBus_UInt32  wrap_y_head_fifofull:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  wrap_y_head_fifoof:1;
        RBus_UInt32  wrap_y_data_fifoempty:1;
        RBus_UInt32  wrap_y_data_fifofull:1;
        RBus_UInt32  wrap_y_data_fifouf:1;
        RBus_UInt32  wrap_y_data_fifoof:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  wrap_c_dma_fifoempty:1;
        RBus_UInt32  wrap_c_dma_fifofull:1;
        RBus_UInt32  wrap_c_dma_req_error:1;
        RBus_UInt32  wrap_c_dma_fifoof:1;
        RBus_UInt32  wrap_c_head_fifoempty:1;
        RBus_UInt32  wrap_c_head_fifofull:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  wrap_c_head_fifoof:1;
        RBus_UInt32  wrap_c_data_fifoempty:1;
        RBus_UInt32  wrap_c_data_fifofull:1;
        RBus_UInt32  wrap_c_data_fifouf:1;
        RBus_UInt32  wrap_c_data_fifoof:1;
        RBus_UInt32  wrap_err_hd_format:1;
        RBus_UInt32  res4:3;
    };
}vodma2_decomp2_dma_ststus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  wrap_y_dma_fifoof_ie:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  wrap_y_head_fifoof_ie:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  wrap_y_data_fifouf_ie:1;
        RBus_UInt32  wrap_y_data_fifoof_ie:1;
        RBus_UInt32  res4:7;
        RBus_UInt32  wrap_c_dma_fifoof_ie:1;
        RBus_UInt32  res5:3;
        RBus_UInt32  wrap_c_head_fifoof_ie:1;
        RBus_UInt32  res6:2;
        RBus_UInt32  wrap_c_data_fifouf_ie:1;
        RBus_UInt32  wrap_c_data_fifoof_ie:1;
        RBus_UInt32  res7:4;
    };
}vodma2_decomp2_dma_ie_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  decomp_core2_irq:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  decomp_core_irq:1;
    };
}vodma2_decomp2_core_status_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decomp_core_errflag:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  decomp_core2_errflag:8;
        RBus_UInt32  res2:8;
    };
}vodma2_decomp2_core_status_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decomp_core_errflag_clr:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  decomp_core2_errflag_clr:8;
        RBus_UInt32  res2:7;
        RBus_UInt32  decomp_time_out_sel:1;
    };
}vodma2_decomp2_core_status_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decomp_core_flag2irq_en:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  decomp_core2_flag2irq_en:8;
        RBus_UInt32  res2:8;
    };
}vodma2_decomp2_core_status_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  wrap_y_data_read_addr:29;
    };
}vodma2_decomp2_data_read_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  wrap_c_data_read_addr:29;
    };
}vodma2_decomp2_data_read_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  wrap_y_data_line_step:29;
    };
}vodma2_decomp2_data_y_line_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  wrap_c_data_line_step:29;
    };
}vodma2_decomp2_data_c_line_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  qlevel_queue_sel_y:2;
        RBus_UInt32  res1:14;
        RBus_UInt32  qlevel_queue_sel_c:1;
        RBus_UInt32  res2:15;
    };
}vodma2_decomp2_core_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  real_decomp_vstart:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  real_decomp_vend:12;
        RBus_UInt32  res2:2;
        RBus_UInt32  real_decomp_10bit:2;
    };
}vodma2_decomp2_data_reorder_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  oldmode_hd_4line_step:8;
        RBus_UInt32  res1:24;
    };
}vodma2_decomp2_hd_4line_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decomp_bist_0_mode:1;
        RBus_UInt32  decomp_bist_1_mode:1;
        RBus_UInt32  res1:30;
    };
}vodma2_decomp2_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decomp_bist_0_done:1;
        RBus_UInt32  decomp_bist_1_done:1;
        RBus_UInt32  res1:30;
    };
}vodma2_decomp2_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decomp_bist_fail_0_group:1;
        RBus_UInt32  decomp_bist_fail_1_group:1;
        RBus_UInt32  res1:30;
    };
}vodma2_decomp2_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decomp_drf_0_mode:1;
        RBus_UInt32  decomp_drf_1_mode:1;
        RBus_UInt32  res1:30;
    };
}vodma2_decomp2_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decomp_drf_0_resume:1;
        RBus_UInt32  decomp_drf_1_resume:1;
        RBus_UInt32  res1:30;
    };
}vodma2_decomp2_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decomp_drf_0_done:1;
        RBus_UInt32  decomp_drf_1_done:1;
        RBus_UInt32  res1:30;
    };
}vodma2_decomp2_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decomp_drf_0_pause:1;
        RBus_UInt32  decomp_drf_1_pause:1;
        RBus_UInt32  res1:30;
    };
}vodma2_decomp2_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decomp_drf_fail_0_group:1;
        RBus_UInt32  decomp_drf_fail_1_group:1;
        RBus_UInt32  res1:30;
    };
}vodma2_decomp2_drf_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_fail_0_0:1;
        RBus_UInt32  bist_fail_0_1:1;
        RBus_UInt32  bist_fail_0_2:1;
        RBus_UInt32  bist_fail_0_3:1;
        RBus_UInt32  bist_fail_0_4:1;
        RBus_UInt32  bist_fail_1_0:1;
        RBus_UInt32  bist_fail_1_1:1;
        RBus_UInt32  bist_fail_1_2:1;
        RBus_UInt32  bist_fail_1_3:1;
        RBus_UInt32  bist_fail_1_4:1;
        RBus_UInt32  res1:22;
    };
}vodma2_decomp2_mbist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_bist_fail_0_0:1;
        RBus_UInt32  drf_bist_fail_0_1:1;
        RBus_UInt32  drf_bist_fail_0_2:1;
        RBus_UInt32  drf_bist_fail_0_3:1;
        RBus_UInt32  drf_bist_fail_0_4:1;
        RBus_UInt32  drf_bist_fail_1_0:1;
        RBus_UInt32  drf_bist_fail_1_1:1;
        RBus_UInt32  drf_bist_fail_1_2:1;
        RBus_UInt32  drf_bist_fail_1_3:1;
        RBus_UInt32  drf_bist_fail_1_4:1;
        RBus_UInt32  res1:22;
    };
}vodma2_decomp2_mbist_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ls_0_0:1;
        RBus_UInt32  ls_0_1:1;
        RBus_UInt32  ls_0_2:1;
        RBus_UInt32  ls_0_3:1;
        RBus_UInt32  ls_0_4:1;
        RBus_UInt32  ls_1_0:1;
        RBus_UInt32  ls_1_1:1;
        RBus_UInt32  ls_1_2:1;
        RBus_UInt32  ls_1_3:1;
        RBus_UInt32  ls_1_4:1;
        RBus_UInt32  res1:22;
    };
}vodma2_decomp2_mbist_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rm_0_0:4;
        RBus_UInt32  rm_0_1:4;
        RBus_UInt32  rm_0_2:4;
        RBus_UInt32  rm_0_3:4;
        RBus_UInt32  rm_0_4:4;
        RBus_UInt32  res1:12;
    };
}vodma2_decomp2_mbist_rm_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rm_1_0:4;
        RBus_UInt32  rm_1_1:4;
        RBus_UInt32  rm_1_2:4;
        RBus_UInt32  rm_1_3:4;
        RBus_UInt32  rm_1_4:4;
        RBus_UInt32  res1:12;
    };
}vodma2_decomp2_mbist_rm_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rme_0_0:1;
        RBus_UInt32  rme_0_1:1;
        RBus_UInt32  rme_0_2:1;
        RBus_UInt32  rme_0_3:1;
        RBus_UInt32  rme_0_4:1;
        RBus_UInt32  rme_1_0:1;
        RBus_UInt32  rme_1_1:1;
        RBus_UInt32  rme_1_2:1;
        RBus_UInt32  rme_1_3:1;
        RBus_UInt32  rme_1_4:1;
        RBus_UInt32  res1:22;
    };
}vodma2_decomp2_mbist_rme_RBUS;

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
}vodma2_vodma2_pq_decmp_RBUS;

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
        RBus_UInt32  dummy18005b04_14_10:5;
        RBus_UInt32  decmp_400_old_mode_en:1;
        RBus_UInt32  decmp_line_sum_bit:16;
    };
}vodma2_vodma2_pq_decmp_pair_RBUS;

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
}vodma2_vodma2_pq_decmp_sat_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_b_error_odd_en:1;
        RBus_UInt32  crc_g_error_odd_en:1;
        RBus_UInt32  crc_r_error_odd_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  underflow_irq_odd_en:1;
        RBus_UInt32  not_finish_irq_odd_en:1;
        RBus_UInt32  res2:10;
        RBus_UInt32  crc_b_error_even_en:1;
        RBus_UInt32  crc_g_error_even_en:1;
        RBus_UInt32  crc_r_error_even_en:1;
        RBus_UInt32  dic_error_even_en:1;
        RBus_UInt32  underflow_irq_even_en:1;
        RBus_UInt32  not_finish_irq_even_en:1;
        RBus_UInt32  res3:10;
    };
}vodma2_vodma2_pq_decmp_irq_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_b_error_odd_st:1;
        RBus_UInt32  crc_g_error_odd_st:1;
        RBus_UInt32  crc_r_error_odd_st:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  underflow_irq_odd_st:1;
        RBus_UInt32  not_finish_irq_odd_st:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  ring_b_overflow_odd_st:1;
        RBus_UInt32  ring_g_overflow_odd_st:1;
        RBus_UInt32  ring_r_overflow_odd_st:1;
        RBus_UInt32  in_fifo_overflow_odd_st:1;
        RBus_UInt32  res3:4;
        RBus_UInt32  crc_b_error_even_st:1;
        RBus_UInt32  crc_g_error_even_st:1;
        RBus_UInt32  crc_r_error_even_st:1;
        RBus_UInt32  dic_error_even_st:1;
        RBus_UInt32  underflow_irq_even_st:1;
        RBus_UInt32  not_finish_irq_even_st:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  ring_b_overflow_even_st:1;
        RBus_UInt32  ring_g_overflow_even_st:1;
        RBus_UInt32  ring_r_overflow_even_st:1;
        RBus_UInt32  in_fifo_overflow_even_st:1;
        RBus_UInt32  res5:3;
        RBus_UInt32  pqdc_irq:1;
    };
}vodma2_vodma2_pq_decmp_irq_st_RBUS;

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
}vodma2_vodma2_pq_decmp_mark_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_1:16;
        RBus_UInt32  mark_color_0:16;
    };
}vodma2_vodma2_pq_decmp_mark_color_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_3:16;
        RBus_UInt32  mark_color_2:16;
    };
}vodma2_vodma2_pq_decmp_mark_color_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_5:16;
        RBus_UInt32  mark_color_4:16;
    };
}vodma2_vodma2_pq_decmp_mark_color_45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_7:16;
        RBus_UInt32  mark_color_6:16;
    };
}vodma2_vodma2_pq_decmp_mark_color_67_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_422:16;
        RBus_UInt32  mark_color_dic:16;
    };
}vodma2_vodma2_pq_decmp_mark_color_422_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_package_height_cnt:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  decmp_crc_error_line:14;
        RBus_UInt32  res2:1;
        RBus_UInt32  decmp_two_pixel_mode:1;
    };
}vodma2_vodma2_pq_decmp_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_g:32;
    };
}vodma2_vodma2_pq_decmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_r:32;
    };
}vodma2_vodma2_pq_decmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_b:32;
    };
}vodma2_vodma2_pq_decmp_crc_even_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_odd_g:32;
    };
}vodma2_vodma2_pq_decmp_crc_odd_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_odd_r:32;
    };
}vodma2_vodma2_pq_decmp_crc_odd_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_odd_b:32;
    };
}vodma2_vodma2_pq_decmp_crc_odd_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_pause_cycle:8;
        RBus_UInt32  res1:22;
        RBus_UInt32  decmp_pause_cycle_long_term:1;
        RBus_UInt32  decmp_pause_cycle_measure_en:1;
    };
}vodma2_vodma2_pq_decmp_pause_cycle_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iv2pv_dly:24;
        RBus_UInt32  iv_src_sel:3;
        RBus_UInt32  iv_inv_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pfgen_inv:1;
        RBus_UInt32  en_pfgen:1;
        RBus_UInt32  en_pvgen:1;
    };
}vodma2_vodma2_pvs0_gen_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pvs0_free_period:28;
        RBus_UInt32  pvs0_free_period_update:1;
        RBus_UInt32  pvs0_free_vs_reset_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pvs0_free_en:1;
    };
}vodma2_vodma2_pvs_free_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mask_one_vs:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  pvs0_free_vs_inv_en:1;
        RBus_UInt32  pvs0_free_l_flag_en:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  pvs0_free_vs_sel:3;
        RBus_UInt32  dummy18005e08_29_11:19;
        RBus_UInt32  pvs0_free_clk_sel:2;
    };
}vodma2_vodma2_pvs_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en_fifo_full_gate:1;
        RBus_UInt32  gating_src_sel:2;
        RBus_UInt32  en_fifo_empty_gate:1;
        RBus_UInt32  vodma_clk_sel:3;
        RBus_UInt32  dummy18005e0c_15_7:9;
        RBus_UInt32  vodma_clk_ratio_n_off:6;
        RBus_UInt32  res1:1;
        RBus_UInt32  vodma_clk_div_n:5;
        RBus_UInt32  vodma_clk_div2_en:1;
        RBus_UInt32  vodma_clk_div2_en_src_sel:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  vodma_enclk:1;
    };
}vodma2_vodma2_clkgen_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pvs0_vs_width:28;
        RBus_UInt32  dummy18005e10_31_28:4;
    };
}vodma2_vodma2_pvs_width_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pe_number:28;
        RBus_UInt32  res1:3;
        RBus_UInt32  phase_err_measure_start:1;
    };
}vodma2_vodma2_phase_error_for_2vs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  manual_vs:1;
    };
}vodma2_vodma2_manual_vs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iv_src:3;
        RBus_UInt32  pv_guardband:1;
        RBus_UInt32  res1:26;
        RBus_UInt32  db_vs_sel_rwd1:2;
    };
}vodma2_vodma2_reg_db_vsync_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vsync_multipiler:5;
        RBus_UInt32  res1:11;
        RBus_UInt32  vsync_divider:5;
        RBus_UInt32  res2:10;
        RBus_UInt32  ivs_cnt_reset:1;
    };
}vodma2_vodma2_ivs_framerate_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vs_cnt:25;
        RBus_UInt32  res1:2;
        RBus_UInt32  measure_vs_cnt_src_sel:2;
        RBus_UInt32  res2:3;
    };
}vodma2_vodma2_ivs_framerate_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vsync_period:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_ivs_framerate_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_timing_en:1;
        RBus_UInt32  i2rnd_timing_mode:2;
        RBus_UInt32  i2rnd_src_flag_inv:1;
        RBus_UInt32  debug_mask_repeat_sub_old_en:1;
        RBus_UInt32  debug_mask_sub3:1;
        RBus_UInt32  debug_mask_sub2:1;
        RBus_UInt32  debug_mask_sub1:1;
        RBus_UInt32  debug_mask_main:1;
        RBus_UInt32  i2rnd_flag_fifo_en:1;
        RBus_UInt32  i2rnd_flag_fifo_mode:1;
        RBus_UInt32  res1:21;
    };
}vodma2_vodma2_i2rnd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_m_lflag_sel:3;
        RBus_UInt32  i2rnd_m_lflag_free_run:1;
        RBus_UInt32  i2rnd_m_lflag_fw:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  i2rnd_m_field_sel:3;
        RBus_UInt32  i2rnd_m_field_free_run:1;
        RBus_UInt32  i2rnd_m_field_fw:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  i2rnd_m_block_sel:3;
        RBus_UInt32  i2rnd_m_block_free_run:1;
        RBus_UInt32  i2rnd_m_block_fw:2;
        RBus_UInt32  i2rnd_m_nxt_rpt_flag_sel:1;
        RBus_UInt32  i2rnd_m_nxt_rpt_flag_fw:1;
        RBus_UInt32  i2rnd_m_quincunx_fw:4;
        RBus_UInt32  i2rnd_m_quincunx_sel:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  i2rnd_hw_nxt_rpt_flag_m_en:1;
        RBus_UInt32  i2rnd_hw_mask_repeat_frame_m_en:1;
    };
}vodma2_vodma2_i2rnd_m_flag_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_s_lflag_sel:3;
        RBus_UInt32  i2rnd_s_lflag_free_run:1;
        RBus_UInt32  i2rnd_s_lflag_fw:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  i2rnd_s_field_sel:3;
        RBus_UInt32  i2rnd_s_field_free_run:1;
        RBus_UInt32  i2rnd_s_field_fw:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  i2rnd_s_block_sel:3;
        RBus_UInt32  i2rnd_s_block_free_run:1;
        RBus_UInt32  i2rnd_s_block_fw:2;
        RBus_UInt32  i2rnd_s_nxt_rpt_flag_sel:1;
        RBus_UInt32  i2rnd_s_nxt_rpt_flag_fw:1;
        RBus_UInt32  i2rnd_s_quincunx_fw:4;
        RBus_UInt32  i2rnd_s_quincunx_sel:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  i2rnd_hw_nxt_rpt_flag_s_en:1;
        RBus_UInt32  i2rnd_hw_mask_repeat_frame_s_en:1;
    };
}vodma2_vodma2_i2rnd_s_flag_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_not_finish_irq_en:1;
        RBus_UInt32  i2rnd_m_load_over_max_irq_en:1;
        RBus_UInt32  i2rnd_s_load_over_max_irq_en:1;
        RBus_UInt32  i2rnd_load_hit_den_irq_en:1;
        RBus_UInt32  i2rnd_m_in_field_error_irq_en:1;
        RBus_UInt32  i2rnd_s_in_field_error_irq_en:1;
        RBus_UInt32  res1:26;
    };
}vodma2_vodma2_i2rnd_irq_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_not_finish_irq_st:1;
        RBus_UInt32  i2rnd_m_load_over_max_irq_st:1;
        RBus_UInt32  i2rnd_s_load_over_max_irq_st:1;
        RBus_UInt32  i2rnd_load_hit_den_irq_st:1;
        RBus_UInt32  i2rnd_m_in_field_error_irq_st:1;
        RBus_UInt32  i2rnd_s_in_field_error_irq_st:1;
        RBus_UInt32  res1:26;
    };
}vodma2_vodma2_i2rnd_irq_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_m_mask_frame_cnt:8;
        RBus_UInt32  i2rnd_s_mask_frame_cnt:8;
        RBus_UInt32  i2rnd_ori_frame_cnt:12;
        RBus_UInt32  res1:3;
        RBus_UInt32  i2rnd_frame_measure:1;
    };
}vodma2_vodma2_i2rnd_measure_frame_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_info_rptr_dispm:4;
        RBus_UInt32  dma_info_wptr_dispm:4;
        RBus_UInt32  dma_info_rptr_i3ddma:4;
        RBus_UInt32  dma_info_wptr_i3ddma:4;
        RBus_UInt32  dma_info_water_dispm:4;
        RBus_UInt32  dma_info_water_i3ddma:4;
        RBus_UInt32  res1:6;
        RBus_UInt32  info_dispm_overflow:1;
        RBus_UInt32  info_i3ddma_overflow:1;
    };
}vodma2_vodma2_i2rnd_fifo_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_st:4;
        RBus_UInt32  i2rnd_src_flag:1;
        RBus_UInt32  i2rnd_lflag:1;
        RBus_UInt32  i2rnd_field:1;
        RBus_UInt32  i2rnd_block:2;
        RBus_UInt32  i2rnd_m_lflag:1;
        RBus_UInt32  i2rnd_m_field:1;
        RBus_UInt32  i2rnd_m_block:2;
        RBus_UInt32  i2rnd_s_lflag:1;
        RBus_UInt32  i2rnd_s_field:1;
        RBus_UInt32  i2rnd_s_block:2;
        RBus_UInt32  i2rnd_quincunx:4;
        RBus_UInt32  i2rnd_m_quincunx:4;
        RBus_UInt32  i2rnd_s_quincunx:4;
        RBus_UInt32  i2rnd_nxt_rpt_flag:1;
        RBus_UInt32  i2rnd_m_nxt_rpt_flag:1;
        RBus_UInt32  i2rnd_s_nxt_rpt_flag:1;
    };
}vodma2_vodma2_i2rnd_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_info_th_dispm:4;
        RBus_UInt32  dma_info_th_i3ddma:4;
        RBus_UInt32  dram_buf_num_dispm:4;
        RBus_UInt32  dram_buf_num_i3ddma:4;
        RBus_UInt32  res1:12;
        RBus_UInt32  flag_fifo_fast_int_dispm:1;
        RBus_UInt32  flag_fifo_fast_int_i3ddma:1;
        RBus_UInt32  flag_fifo_style_dispm:1;
        RBus_UInt32  flag_fifo_style_i3ddma:1;
    };
}vodma2_vodma2_i2rnd_fifo_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_info_rptr_fw_i3ddma:4;
        RBus_UInt32  dma_info_rptr_fw_set_i3ddma:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  dma_info_rptr_fw_dispm:4;
        RBus_UInt32  dma_info_rptr_fw_set_dispm:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  dma_info_wptr_fw_i3ddma:4;
        RBus_UInt32  dma_info_wptr_fw_set_i3ddma:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  dma_info_wptr_fw_dispm:4;
        RBus_UInt32  dma_info_wptr_fw_set_dispm:1;
        RBus_UInt32  res4:3;
    };
}vodma2_vodma2_i2rnd_dma_info_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_m_period_load:28;
        RBus_UInt32  res1:3;
        RBus_UInt32  i2rnd_period_clk_src:1;
    };
}vodma2_vodma2_i2rnd_m_period_load_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_m_period:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_i2rnd_m_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_s_period_load:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_i2rnd_s_period_load_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_s_period:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_i2rnd_s_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_m_load_time:28;
        RBus_UInt32  res1:2;
        RBus_UInt32  i2rnd_load_time_measure_long_term:1;
        RBus_UInt32  i2rnd_load_time_measure:1;
    };
}vodma2_vodma2_i2rnd_m_measure_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_s_load_time:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_i2rnd_s_measure_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_m_period_load_max:28;
        RBus_UInt32  res1:2;
        RBus_UInt32  i2rnd_period_load_max_dbg_en:1;
        RBus_UInt32  i2rnd_period_load_max_measure_en:1;
    };
}vodma2_vodma2_i2rnd_m_period_load_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_s_period_load_max:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_i2rnd_s_period_load_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  timing_monitor_end1:4;
        RBus_UInt32  timing_monitor_sta1:4;
        RBus_UInt32  timing_monitor_end0:4;
        RBus_UInt32  timing_monitor_sta0:4;
        RBus_UInt32  res1:8;
        RBus_UInt32  timing_monitor_compare:2;
        RBus_UInt32  timing_monitor_multi_mode:1;
        RBus_UInt32  timing_monitor_unit:1;
        RBus_UInt32  timing_monitor_src:1;
        RBus_UInt32  timing_monitor_i2rnd_mode:2;
        RBus_UInt32  timing_monitor_en:1;
    };
}vodma2_vodma2_timing_monitor_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  timing_monitor_end5:4;
        RBus_UInt32  timing_monitor_sta5:4;
        RBus_UInt32  timing_monitor_end4:4;
        RBus_UInt32  timing_monitor_sta4:4;
        RBus_UInt32  timing_monitor_end3:4;
        RBus_UInt32  timing_monitor_sta3:4;
        RBus_UInt32  timing_monitor_end2:4;
        RBus_UInt32  timing_monitor_sta2:4;
    };
}vodma2_vodma2_timing_monitor_multi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_compare_th:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_timing_monitor_compare_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_golden:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_timing_monitor_golden_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_result_previous1:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_timing_monitor_result1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_result_previous2:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_timing_monitor_result2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_result_previous3:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_timing_monitor_result3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_result_previous4:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_timing_monitor_result4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_result_max:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_timing_monitor_max_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_result_min:28;
        RBus_UInt32  res1:4;
    };
}vodma2_vodma2_timing_monitor_min_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vsync_hit_den_error:1;
        RBus_UInt32  hsync_hit_den_error:1;
        RBus_UInt32  compare_hit:1;
        RBus_UInt32  res1:29;
    };
}vodma2_vodma2_timing_monitor_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  vodma_bist_mode_1:1;
        RBus_UInt32  vodma_bist_mode_2:1;
        RBus_UInt32  vodma_bist_mode_3:1;
        RBus_UInt32  res2:28;
    };
}vodma2_vodma2_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  vodma_bist_done_1:1;
        RBus_UInt32  vodma_bist_done_2:1;
        RBus_UInt32  vodma_bist_done_3:1;
        RBus_UInt32  res2:28;
    };
}vodma2_vodma2_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vodma_bist_fail_group_0:1;
        RBus_UInt32  vodma_bist_fail_group_1:1;
        RBus_UInt32  res1:30;
    };
}vodma2_vodma2_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  vodma_bist_fail_4:1;
        RBus_UInt32  vodma_bist_fail_5:1;
        RBus_UInt32  vodma_bist_fail_6:1;
        RBus_UInt32  vodma_bist_fail_7:1;
        RBus_UInt32  vodma_bist_fail_8:1;
        RBus_UInt32  res2:23;
    };
}vodma2_vodma2_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  vodma_drf_mode_1:1;
        RBus_UInt32  vodma_drf_mode_2:1;
        RBus_UInt32  vodma_drf_mode_3:1;
        RBus_UInt32  res2:28;
    };
}vodma2_vodma2_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  vodma_drf_resume_1:1;
        RBus_UInt32  vodma_drf_resume_2:1;
        RBus_UInt32  vodma_drf_resume_3:1;
        RBus_UInt32  res2:28;
    };
}vodma2_vodma2_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  vodma_drf_done_1:1;
        RBus_UInt32  vodma_drf_done_2:1;
        RBus_UInt32  vodma_drf_done_3:1;
        RBus_UInt32  res2:28;
    };
}vodma2_vodma2_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  vodma_drf_pause_1:1;
        RBus_UInt32  vodma_drf_pause_2:1;
        RBus_UInt32  vodma_drf_pause_3:1;
        RBus_UInt32  res2:28;
    };
}vodma2_vodma2_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vodma_drf_fail_group_0:1;
        RBus_UInt32  vodma_drf_fail_group_1:1;
        RBus_UInt32  res1:30;
    };
}vodma2_vodma2_drf_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  vodma_drf_fail_4:1;
        RBus_UInt32  vodma_drf_fail_5:1;
        RBus_UInt32  vodma_drf_fail_6:1;
        RBus_UInt32  vodma_drf_fail_7:1;
        RBus_UInt32  vodma_drf_fail_8:1;
        RBus_UInt32  res2:23;
    };
}vodma2_vodma2_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  vodma_bist_rme_1:1;
        RBus_UInt32  vodma_bist_rm_1:4;
        RBus_UInt32  vodma_bist_ls_1:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  vodma_bist_rme_2:1;
        RBus_UInt32  vodma_bist_rm_2:4;
        RBus_UInt32  vodma_bist_ls_2:1;
        RBus_UInt32  vodma_bist_rwm_2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  vodma_bist_rme_3:1;
        RBus_UInt32  vodma_bist_rm_3:4;
        RBus_UInt32  vodma_bist_ls_3:1;
        RBus_UInt32  vodma_bist_rwm_3:1;
        RBus_UInt32  res4:1;
    };
}vodma2_vodma2_bist_other_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sel:5;
        RBus_UInt32  res1:27;
    };
}vodma2_vodma2_dbg_RBUS;




#endif 


#endif 
