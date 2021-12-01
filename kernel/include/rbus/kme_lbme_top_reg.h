/**
* @file Merlin5_MEMC_KME_LBME_TOP
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KME_LBME_TOP_REG_H_
#define _RBUS_KME_LBME_TOP_REG_H_

#include "rbus_types.h"



//  KME_LBME_TOP Register Address
#define  KME_LBME_TOP_KME_LBME_TOP_00                                           0x1809B900
#define  KME_LBME_TOP_KME_LBME_TOP_00_reg_addr                                   "0xB809B900"
#define  KME_LBME_TOP_KME_LBME_TOP_00_reg                                        0xB809B900
#define  KME_LBME_TOP_KME_LBME_TOP_00_inst_addr                                  "0x0000"
#define  set_KME_LBME_TOP_KME_LBME_TOP_00_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_00_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_00_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_00_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_00_lbme_rim_x_end_shift                       (11)
#define  KME_LBME_TOP_KME_LBME_TOP_00_lbme_rim_x_start_shift                     (0)
#define  KME_LBME_TOP_KME_LBME_TOP_00_lbme_rim_x_end_mask                        (0x003FF800)
#define  KME_LBME_TOP_KME_LBME_TOP_00_lbme_rim_x_start_mask                      (0x000007FF)
#define  KME_LBME_TOP_KME_LBME_TOP_00_lbme_rim_x_end(data)                       (0x003FF800&((data)<<11))
#define  KME_LBME_TOP_KME_LBME_TOP_00_lbme_rim_x_start(data)                     (0x000007FF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_00_get_lbme_rim_x_end(data)                   ((0x003FF800&(data))>>11)
#define  KME_LBME_TOP_KME_LBME_TOP_00_get_lbme_rim_x_start(data)                 (0x000007FF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_04                                           0x1809B904
#define  KME_LBME_TOP_KME_LBME_TOP_04_reg_addr                                   "0xB809B904"
#define  KME_LBME_TOP_KME_LBME_TOP_04_reg                                        0xB809B904
#define  KME_LBME_TOP_KME_LBME_TOP_04_inst_addr                                  "0x0001"
#define  set_KME_LBME_TOP_KME_LBME_TOP_04_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_04_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_04_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_04_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_04_kme_lbme_sram_ls_value_shift               (23)
#define  KME_LBME_TOP_KME_LBME_TOP_04_kme_lbme_sram_ls_en_shift                  (22)
#define  KME_LBME_TOP_KME_LBME_TOP_04_lbme_rim_y_end_shift                       (11)
#define  KME_LBME_TOP_KME_LBME_TOP_04_lbme_rim_y_start_shift                     (0)
#define  KME_LBME_TOP_KME_LBME_TOP_04_kme_lbme_sram_ls_value_mask                (0x00800000)
#define  KME_LBME_TOP_KME_LBME_TOP_04_kme_lbme_sram_ls_en_mask                   (0x00400000)
#define  KME_LBME_TOP_KME_LBME_TOP_04_lbme_rim_y_end_mask                        (0x003FF800)
#define  KME_LBME_TOP_KME_LBME_TOP_04_lbme_rim_y_start_mask                      (0x000007FF)
#define  KME_LBME_TOP_KME_LBME_TOP_04_kme_lbme_sram_ls_value(data)               (0x00800000&((data)<<23))
#define  KME_LBME_TOP_KME_LBME_TOP_04_kme_lbme_sram_ls_en(data)                  (0x00400000&((data)<<22))
#define  KME_LBME_TOP_KME_LBME_TOP_04_lbme_rim_y_end(data)                       (0x003FF800&((data)<<11))
#define  KME_LBME_TOP_KME_LBME_TOP_04_lbme_rim_y_start(data)                     (0x000007FF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_04_get_kme_lbme_sram_ls_value(data)           ((0x00800000&(data))>>23)
#define  KME_LBME_TOP_KME_LBME_TOP_04_get_kme_lbme_sram_ls_en(data)              ((0x00400000&(data))>>22)
#define  KME_LBME_TOP_KME_LBME_TOP_04_get_lbme_rim_y_end(data)                   ((0x003FF800&(data))>>11)
#define  KME_LBME_TOP_KME_LBME_TOP_04_get_lbme_rim_y_start(data)                 (0x000007FF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_08                                           0x1809B908
#define  KME_LBME_TOP_KME_LBME_TOP_08_reg_addr                                   "0xB809B908"
#define  KME_LBME_TOP_KME_LBME_TOP_08_reg                                        0xB809B908
#define  KME_LBME_TOP_KME_LBME_TOP_08_inst_addr                                  "0x0002"
#define  set_KME_LBME_TOP_KME_LBME_TOP_08_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_08_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_08_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_08_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_boundary_color_shift            (24)
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_force_linebuf_addr_zero_shift         (23)
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_rdbk_posxy_en_shift             (22)
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_boundary_en_shift               (21)
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_patt_data_shift                 (13)
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_patt_mode_shift                 (11)
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_patt_en_shift                   (10)
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_de_cnt_shift                    (8)
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_ip_sel_shift                    (7)
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_blk_y_shift                     (4)
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_blk_x_shift                     (0)
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_boundary_color_mask             (0xFF000000)
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_force_linebuf_addr_zero_mask          (0x00800000)
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_rdbk_posxy_en_mask              (0x00400000)
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_boundary_en_mask                (0x00200000)
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_patt_data_mask                  (0x001FE000)
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_patt_mode_mask                  (0x00001800)
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_patt_en_mask                    (0x00000400)
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_de_cnt_mask                     (0x00000300)
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_ip_sel_mask                     (0x00000080)
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_blk_y_mask                      (0x00000070)
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_blk_x_mask                      (0x0000000F)
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_boundary_color(data)            (0xFF000000&((data)<<24))
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_force_linebuf_addr_zero(data)         (0x00800000&((data)<<23))
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_rdbk_posxy_en(data)             (0x00400000&((data)<<22))
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_boundary_en(data)               (0x00200000&((data)<<21))
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_patt_data(data)                 (0x001FE000&((data)<<13))
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_patt_mode(data)                 (0x00001800&((data)<<11))
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_patt_en(data)                   (0x00000400&((data)<<10))
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_de_cnt(data)                    (0x00000300&((data)<<8))
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_ip_sel(data)                    (0x00000080&((data)<<7))
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_blk_y(data)                     (0x00000070&((data)<<4))
#define  KME_LBME_TOP_KME_LBME_TOP_08_lbme_debug_blk_x(data)                     (0x0000000F&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_08_get_lbme_debug_boundary_color(data)        ((0xFF000000&(data))>>24)
#define  KME_LBME_TOP_KME_LBME_TOP_08_get_lbme_force_linebuf_addr_zero(data)     ((0x00800000&(data))>>23)
#define  KME_LBME_TOP_KME_LBME_TOP_08_get_lbme_debug_rdbk_posxy_en(data)         ((0x00400000&(data))>>22)
#define  KME_LBME_TOP_KME_LBME_TOP_08_get_lbme_debug_boundary_en(data)           ((0x00200000&(data))>>21)
#define  KME_LBME_TOP_KME_LBME_TOP_08_get_lbme_debug_patt_data(data)             ((0x001FE000&(data))>>13)
#define  KME_LBME_TOP_KME_LBME_TOP_08_get_lbme_debug_patt_mode(data)             ((0x00001800&(data))>>11)
#define  KME_LBME_TOP_KME_LBME_TOP_08_get_lbme_debug_patt_en(data)               ((0x00000400&(data))>>10)
#define  KME_LBME_TOP_KME_LBME_TOP_08_get_lbme_debug_de_cnt(data)                ((0x00000300&(data))>>8)
#define  KME_LBME_TOP_KME_LBME_TOP_08_get_lbme_debug_ip_sel(data)                ((0x00000080&(data))>>7)
#define  KME_LBME_TOP_KME_LBME_TOP_08_get_lbme_debug_blk_y(data)                 ((0x00000070&(data))>>4)
#define  KME_LBME_TOP_KME_LBME_TOP_08_get_lbme_debug_blk_x(data)                 (0x0000000F&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_0C                                           0x1809B90C
#define  KME_LBME_TOP_KME_LBME_TOP_0C_reg_addr                                   "0xB809B90C"
#define  KME_LBME_TOP_KME_LBME_TOP_0C_reg                                        0xB809B90C
#define  KME_LBME_TOP_KME_LBME_TOP_0C_inst_addr                                  "0x0003"
#define  set_KME_LBME_TOP_KME_LBME_TOP_0C_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_0C_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_0C_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_0C_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_0C_lbme_p_y_offset_shift                      (24)
#define  KME_LBME_TOP_KME_LBME_TOP_0C_lbme_p_x_offset_shift                      (16)
#define  KME_LBME_TOP_KME_LBME_TOP_0C_lbme_i_y_offset_shift                      (8)
#define  KME_LBME_TOP_KME_LBME_TOP_0C_lbme_i_x_offset_shift                      (0)
#define  KME_LBME_TOP_KME_LBME_TOP_0C_lbme_p_y_offset_mask                       (0xFF000000)
#define  KME_LBME_TOP_KME_LBME_TOP_0C_lbme_p_x_offset_mask                       (0x00FF0000)
#define  KME_LBME_TOP_KME_LBME_TOP_0C_lbme_i_y_offset_mask                       (0x0000FF00)
#define  KME_LBME_TOP_KME_LBME_TOP_0C_lbme_i_x_offset_mask                       (0x000000FF)
#define  KME_LBME_TOP_KME_LBME_TOP_0C_lbme_p_y_offset(data)                      (0xFF000000&((data)<<24))
#define  KME_LBME_TOP_KME_LBME_TOP_0C_lbme_p_x_offset(data)                      (0x00FF0000&((data)<<16))
#define  KME_LBME_TOP_KME_LBME_TOP_0C_lbme_i_y_offset(data)                      (0x0000FF00&((data)<<8))
#define  KME_LBME_TOP_KME_LBME_TOP_0C_lbme_i_x_offset(data)                      (0x000000FF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_0C_get_lbme_p_y_offset(data)                  ((0xFF000000&(data))>>24)
#define  KME_LBME_TOP_KME_LBME_TOP_0C_get_lbme_p_x_offset(data)                  ((0x00FF0000&(data))>>16)
#define  KME_LBME_TOP_KME_LBME_TOP_0C_get_lbme_i_y_offset(data)                  ((0x0000FF00&(data))>>8)
#define  KME_LBME_TOP_KME_LBME_TOP_0C_get_lbme_i_x_offset(data)                  (0x000000FF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_10                                           0x1809B910
#define  KME_LBME_TOP_KME_LBME_TOP_10_reg_addr                                   "0xB809B910"
#define  KME_LBME_TOP_KME_LBME_TOP_10_reg                                        0xB809B910
#define  KME_LBME_TOP_KME_LBME_TOP_10_inst_addr                                  "0x0004"
#define  set_KME_LBME_TOP_KME_LBME_TOP_10_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_10_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_10_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_10_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_10_lbme_debug_option_shift                    (28)
#define  KME_LBME_TOP_KME_LBME_TOP_10_lbme_debug_hact_shift                      (20)
#define  KME_LBME_TOP_KME_LBME_TOP_10_lbme_debug_y_pos_shift                     (10)
#define  KME_LBME_TOP_KME_LBME_TOP_10_lbme_debug_x_pos_shift                     (0)
#define  KME_LBME_TOP_KME_LBME_TOP_10_lbme_debug_option_mask                     (0x10000000)
#define  KME_LBME_TOP_KME_LBME_TOP_10_lbme_debug_hact_mask                       (0x0FF00000)
#define  KME_LBME_TOP_KME_LBME_TOP_10_lbme_debug_y_pos_mask                      (0x000FFC00)
#define  KME_LBME_TOP_KME_LBME_TOP_10_lbme_debug_x_pos_mask                      (0x000003FF)
#define  KME_LBME_TOP_KME_LBME_TOP_10_lbme_debug_option(data)                    (0x10000000&((data)<<28))
#define  KME_LBME_TOP_KME_LBME_TOP_10_lbme_debug_hact(data)                      (0x0FF00000&((data)<<20))
#define  KME_LBME_TOP_KME_LBME_TOP_10_lbme_debug_y_pos(data)                     (0x000FFC00&((data)<<10))
#define  KME_LBME_TOP_KME_LBME_TOP_10_lbme_debug_x_pos(data)                     (0x000003FF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_10_get_lbme_debug_option(data)                ((0x10000000&(data))>>28)
#define  KME_LBME_TOP_KME_LBME_TOP_10_get_lbme_debug_hact(data)                  ((0x0FF00000&(data))>>20)
#define  KME_LBME_TOP_KME_LBME_TOP_10_get_lbme_debug_y_pos(data)                 ((0x000FFC00&(data))>>10)
#define  KME_LBME_TOP_KME_LBME_TOP_10_get_lbme_debug_x_pos(data)                 (0x000003FF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_14                                           0x1809B914
#define  KME_LBME_TOP_KME_LBME_TOP_14_reg_addr                                   "0xB809B914"
#define  KME_LBME_TOP_KME_LBME_TOP_14_reg                                        0xB809B914
#define  KME_LBME_TOP_KME_LBME_TOP_14_inst_addr                                  "0x0005"
#define  set_KME_LBME_TOP_KME_LBME_TOP_14_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_14_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_14_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_14_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_14_lbme_total_pixel_num_shift                 (10)
#define  KME_LBME_TOP_KME_LBME_TOP_14_lbme_total_line_num_shift                  (0)
#define  KME_LBME_TOP_KME_LBME_TOP_14_lbme_total_pixel_num_mask                  (0x000FFC00)
#define  KME_LBME_TOP_KME_LBME_TOP_14_lbme_total_line_num_mask                   (0x000003FF)
#define  KME_LBME_TOP_KME_LBME_TOP_14_lbme_total_pixel_num(data)                 (0x000FFC00&((data)<<10))
#define  KME_LBME_TOP_KME_LBME_TOP_14_lbme_total_line_num(data)                  (0x000003FF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_14_get_lbme_total_pixel_num(data)             ((0x000FFC00&(data))>>10)
#define  KME_LBME_TOP_KME_LBME_TOP_14_get_lbme_total_line_num(data)              (0x000003FF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_18                                           0x1809B918
#define  KME_LBME_TOP_KME_LBME_TOP_18_reg_addr                                   "0xB809B918"
#define  KME_LBME_TOP_KME_LBME_TOP_18_reg                                        0xB809B918
#define  KME_LBME_TOP_KME_LBME_TOP_18_inst_addr                                  "0x0006"
#define  set_KME_LBME_TOP_KME_LBME_TOP_18_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_18_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_18_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_18_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_18_lbme_line_num_perlinebuf_shift             (24)
#define  KME_LBME_TOP_KME_LBME_TOP_18_lbme_blk_num_perline_shift                 (16)
#define  KME_LBME_TOP_KME_LBME_TOP_18_lbme_prefetch_linebuf_num_shift            (8)
#define  KME_LBME_TOP_KME_LBME_TOP_18_lbme_total_linebuf_num_shift               (0)
#define  KME_LBME_TOP_KME_LBME_TOP_18_lbme_line_num_perlinebuf_mask              (0xFF000000)
#define  KME_LBME_TOP_KME_LBME_TOP_18_lbme_blk_num_perline_mask                  (0x00FF0000)
#define  KME_LBME_TOP_KME_LBME_TOP_18_lbme_prefetch_linebuf_num_mask             (0x0000FF00)
#define  KME_LBME_TOP_KME_LBME_TOP_18_lbme_total_linebuf_num_mask                (0x000000FF)
#define  KME_LBME_TOP_KME_LBME_TOP_18_lbme_line_num_perlinebuf(data)             (0xFF000000&((data)<<24))
#define  KME_LBME_TOP_KME_LBME_TOP_18_lbme_blk_num_perline(data)                 (0x00FF0000&((data)<<16))
#define  KME_LBME_TOP_KME_LBME_TOP_18_lbme_prefetch_linebuf_num(data)            (0x0000FF00&((data)<<8))
#define  KME_LBME_TOP_KME_LBME_TOP_18_lbme_total_linebuf_num(data)               (0x000000FF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_18_get_lbme_line_num_perlinebuf(data)         ((0xFF000000&(data))>>24)
#define  KME_LBME_TOP_KME_LBME_TOP_18_get_lbme_blk_num_perline(data)             ((0x00FF0000&(data))>>16)
#define  KME_LBME_TOP_KME_LBME_TOP_18_get_lbme_prefetch_linebuf_num(data)        ((0x0000FF00&(data))>>8)
#define  KME_LBME_TOP_KME_LBME_TOP_18_get_lbme_total_linebuf_num(data)           (0x000000FF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_1C                                           0x1809B91C
#define  KME_LBME_TOP_KME_LBME_TOP_1C_reg_addr                                   "0xB809B91C"
#define  KME_LBME_TOP_KME_LBME_TOP_1C_reg                                        0xB809B91C
#define  KME_LBME_TOP_KME_LBME_TOP_1C_inst_addr                                  "0x0007"
#define  set_KME_LBME_TOP_KME_LBME_TOP_1C_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_1C_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_1C_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_1C_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_1C_lbme_meander_rim_x_end_shift               (11)
#define  KME_LBME_TOP_KME_LBME_TOP_1C_lbme_meander_rim_x_start_shift             (0)
#define  KME_LBME_TOP_KME_LBME_TOP_1C_lbme_meander_rim_x_end_mask                (0x003FF800)
#define  KME_LBME_TOP_KME_LBME_TOP_1C_lbme_meander_rim_x_start_mask              (0x000007FF)
#define  KME_LBME_TOP_KME_LBME_TOP_1C_lbme_meander_rim_x_end(data)               (0x003FF800&((data)<<11))
#define  KME_LBME_TOP_KME_LBME_TOP_1C_lbme_meander_rim_x_start(data)             (0x000007FF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_1C_get_lbme_meander_rim_x_end(data)           ((0x003FF800&(data))>>11)
#define  KME_LBME_TOP_KME_LBME_TOP_1C_get_lbme_meander_rim_x_start(data)         (0x000007FF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_20                                           0x1809B920
#define  KME_LBME_TOP_KME_LBME_TOP_20_reg_addr                                   "0xB809B920"
#define  KME_LBME_TOP_KME_LBME_TOP_20_reg                                        0xB809B920
#define  KME_LBME_TOP_KME_LBME_TOP_20_inst_addr                                  "0x0008"
#define  set_KME_LBME_TOP_KME_LBME_TOP_20_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_20_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_20_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_20_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_20_lbme_meander_rim_y_end_shift               (11)
#define  KME_LBME_TOP_KME_LBME_TOP_20_lbme_meander_rim_y_start_shift             (0)
#define  KME_LBME_TOP_KME_LBME_TOP_20_lbme_meander_rim_y_end_mask                (0x003FF800)
#define  KME_LBME_TOP_KME_LBME_TOP_20_lbme_meander_rim_y_start_mask              (0x000007FF)
#define  KME_LBME_TOP_KME_LBME_TOP_20_lbme_meander_rim_y_end(data)               (0x003FF800&((data)<<11))
#define  KME_LBME_TOP_KME_LBME_TOP_20_lbme_meander_rim_y_start(data)             (0x000007FF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_20_get_lbme_meander_rim_y_end(data)           ((0x003FF800&(data))>>11)
#define  KME_LBME_TOP_KME_LBME_TOP_20_get_lbme_meander_rim_y_start(data)         (0x000007FF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_24                                           0x1809B924
#define  KME_LBME_TOP_KME_LBME_TOP_24_reg_addr                                   "0xB809B924"
#define  KME_LBME_TOP_KME_LBME_TOP_24_reg                                        0xB809B924
#define  KME_LBME_TOP_KME_LBME_TOP_24_inst_addr                                  "0x0009"
#define  set_KME_LBME_TOP_KME_LBME_TOP_24_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_24_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_24_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_24_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_24_lbme_regional_apl_en_shift                 (0)
#define  KME_LBME_TOP_KME_LBME_TOP_24_lbme_regional_apl_en_mask                  (0x00000001)
#define  KME_LBME_TOP_KME_LBME_TOP_24_lbme_regional_apl_en(data)                 (0x00000001&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_24_get_lbme_regional_apl_en(data)             (0x00000001&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_28                                           0x1809B928
#define  KME_LBME_TOP_KME_LBME_TOP_28_reg_addr                                   "0xB809B928"
#define  KME_LBME_TOP_KME_LBME_TOP_28_reg                                        0xB809B928
#define  KME_LBME_TOP_KME_LBME_TOP_28_inst_addr                                  "0x000A"
#define  set_KME_LBME_TOP_KME_LBME_TOP_28_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_28_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_28_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_28_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_28_regr_lbme_regional_apl_i_03_shift          (24)
#define  KME_LBME_TOP_KME_LBME_TOP_28_regr_lbme_regional_apl_i_02_shift          (16)
#define  KME_LBME_TOP_KME_LBME_TOP_28_regr_lbme_regional_apl_i_01_shift          (8)
#define  KME_LBME_TOP_KME_LBME_TOP_28_regr_lbme_regional_apl_i_00_shift          (0)
#define  KME_LBME_TOP_KME_LBME_TOP_28_regr_lbme_regional_apl_i_03_mask           (0xFF000000)
#define  KME_LBME_TOP_KME_LBME_TOP_28_regr_lbme_regional_apl_i_02_mask           (0x00FF0000)
#define  KME_LBME_TOP_KME_LBME_TOP_28_regr_lbme_regional_apl_i_01_mask           (0x0000FF00)
#define  KME_LBME_TOP_KME_LBME_TOP_28_regr_lbme_regional_apl_i_00_mask           (0x000000FF)
#define  KME_LBME_TOP_KME_LBME_TOP_28_regr_lbme_regional_apl_i_03(data)          (0xFF000000&((data)<<24))
#define  KME_LBME_TOP_KME_LBME_TOP_28_regr_lbme_regional_apl_i_02(data)          (0x00FF0000&((data)<<16))
#define  KME_LBME_TOP_KME_LBME_TOP_28_regr_lbme_regional_apl_i_01(data)          (0x0000FF00&((data)<<8))
#define  KME_LBME_TOP_KME_LBME_TOP_28_regr_lbme_regional_apl_i_00(data)          (0x000000FF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_28_get_regr_lbme_regional_apl_i_03(data)      ((0xFF000000&(data))>>24)
#define  KME_LBME_TOP_KME_LBME_TOP_28_get_regr_lbme_regional_apl_i_02(data)      ((0x00FF0000&(data))>>16)
#define  KME_LBME_TOP_KME_LBME_TOP_28_get_regr_lbme_regional_apl_i_01(data)      ((0x0000FF00&(data))>>8)
#define  KME_LBME_TOP_KME_LBME_TOP_28_get_regr_lbme_regional_apl_i_00(data)      (0x000000FF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_2C                                           0x1809B92C
#define  KME_LBME_TOP_KME_LBME_TOP_2C_reg_addr                                   "0xB809B92C"
#define  KME_LBME_TOP_KME_LBME_TOP_2C_reg                                        0xB809B92C
#define  KME_LBME_TOP_KME_LBME_TOP_2C_inst_addr                                  "0x000B"
#define  set_KME_LBME_TOP_KME_LBME_TOP_2C_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_2C_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_2C_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_2C_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_2C_regr_lbme_regional_apl_i_07_shift          (24)
#define  KME_LBME_TOP_KME_LBME_TOP_2C_regr_lbme_regional_apl_i_06_shift          (16)
#define  KME_LBME_TOP_KME_LBME_TOP_2C_regr_lbme_regional_apl_i_05_shift          (8)
#define  KME_LBME_TOP_KME_LBME_TOP_2C_regr_lbme_regional_apl_i_04_shift          (0)
#define  KME_LBME_TOP_KME_LBME_TOP_2C_regr_lbme_regional_apl_i_07_mask           (0xFF000000)
#define  KME_LBME_TOP_KME_LBME_TOP_2C_regr_lbme_regional_apl_i_06_mask           (0x00FF0000)
#define  KME_LBME_TOP_KME_LBME_TOP_2C_regr_lbme_regional_apl_i_05_mask           (0x0000FF00)
#define  KME_LBME_TOP_KME_LBME_TOP_2C_regr_lbme_regional_apl_i_04_mask           (0x000000FF)
#define  KME_LBME_TOP_KME_LBME_TOP_2C_regr_lbme_regional_apl_i_07(data)          (0xFF000000&((data)<<24))
#define  KME_LBME_TOP_KME_LBME_TOP_2C_regr_lbme_regional_apl_i_06(data)          (0x00FF0000&((data)<<16))
#define  KME_LBME_TOP_KME_LBME_TOP_2C_regr_lbme_regional_apl_i_05(data)          (0x0000FF00&((data)<<8))
#define  KME_LBME_TOP_KME_LBME_TOP_2C_regr_lbme_regional_apl_i_04(data)          (0x000000FF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_2C_get_regr_lbme_regional_apl_i_07(data)      ((0xFF000000&(data))>>24)
#define  KME_LBME_TOP_KME_LBME_TOP_2C_get_regr_lbme_regional_apl_i_06(data)      ((0x00FF0000&(data))>>16)
#define  KME_LBME_TOP_KME_LBME_TOP_2C_get_regr_lbme_regional_apl_i_05(data)      ((0x0000FF00&(data))>>8)
#define  KME_LBME_TOP_KME_LBME_TOP_2C_get_regr_lbme_regional_apl_i_04(data)      (0x000000FF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_30                                           0x1809B930
#define  KME_LBME_TOP_KME_LBME_TOP_30_reg_addr                                   "0xB809B930"
#define  KME_LBME_TOP_KME_LBME_TOP_30_reg                                        0xB809B930
#define  KME_LBME_TOP_KME_LBME_TOP_30_inst_addr                                  "0x000C"
#define  set_KME_LBME_TOP_KME_LBME_TOP_30_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_30_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_30_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_30_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_30_regr_lbme_regional_apl_i_13_shift          (24)
#define  KME_LBME_TOP_KME_LBME_TOP_30_regr_lbme_regional_apl_i_12_shift          (16)
#define  KME_LBME_TOP_KME_LBME_TOP_30_regr_lbme_regional_apl_i_11_shift          (8)
#define  KME_LBME_TOP_KME_LBME_TOP_30_regr_lbme_regional_apl_i_10_shift          (0)
#define  KME_LBME_TOP_KME_LBME_TOP_30_regr_lbme_regional_apl_i_13_mask           (0xFF000000)
#define  KME_LBME_TOP_KME_LBME_TOP_30_regr_lbme_regional_apl_i_12_mask           (0x00FF0000)
#define  KME_LBME_TOP_KME_LBME_TOP_30_regr_lbme_regional_apl_i_11_mask           (0x0000FF00)
#define  KME_LBME_TOP_KME_LBME_TOP_30_regr_lbme_regional_apl_i_10_mask           (0x000000FF)
#define  KME_LBME_TOP_KME_LBME_TOP_30_regr_lbme_regional_apl_i_13(data)          (0xFF000000&((data)<<24))
#define  KME_LBME_TOP_KME_LBME_TOP_30_regr_lbme_regional_apl_i_12(data)          (0x00FF0000&((data)<<16))
#define  KME_LBME_TOP_KME_LBME_TOP_30_regr_lbme_regional_apl_i_11(data)          (0x0000FF00&((data)<<8))
#define  KME_LBME_TOP_KME_LBME_TOP_30_regr_lbme_regional_apl_i_10(data)          (0x000000FF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_30_get_regr_lbme_regional_apl_i_13(data)      ((0xFF000000&(data))>>24)
#define  KME_LBME_TOP_KME_LBME_TOP_30_get_regr_lbme_regional_apl_i_12(data)      ((0x00FF0000&(data))>>16)
#define  KME_LBME_TOP_KME_LBME_TOP_30_get_regr_lbme_regional_apl_i_11(data)      ((0x0000FF00&(data))>>8)
#define  KME_LBME_TOP_KME_LBME_TOP_30_get_regr_lbme_regional_apl_i_10(data)      (0x000000FF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_34                                           0x1809B934
#define  KME_LBME_TOP_KME_LBME_TOP_34_reg_addr                                   "0xB809B934"
#define  KME_LBME_TOP_KME_LBME_TOP_34_reg                                        0xB809B934
#define  KME_LBME_TOP_KME_LBME_TOP_34_inst_addr                                  "0x000D"
#define  set_KME_LBME_TOP_KME_LBME_TOP_34_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_34_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_34_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_34_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_34_regr_lbme_regional_apl_i_17_shift          (24)
#define  KME_LBME_TOP_KME_LBME_TOP_34_regr_lbme_regional_apl_i_16_shift          (16)
#define  KME_LBME_TOP_KME_LBME_TOP_34_regr_lbme_regional_apl_i_15_shift          (8)
#define  KME_LBME_TOP_KME_LBME_TOP_34_regr_lbme_regional_apl_i_14_shift          (0)
#define  KME_LBME_TOP_KME_LBME_TOP_34_regr_lbme_regional_apl_i_17_mask           (0xFF000000)
#define  KME_LBME_TOP_KME_LBME_TOP_34_regr_lbme_regional_apl_i_16_mask           (0x00FF0000)
#define  KME_LBME_TOP_KME_LBME_TOP_34_regr_lbme_regional_apl_i_15_mask           (0x0000FF00)
#define  KME_LBME_TOP_KME_LBME_TOP_34_regr_lbme_regional_apl_i_14_mask           (0x000000FF)
#define  KME_LBME_TOP_KME_LBME_TOP_34_regr_lbme_regional_apl_i_17(data)          (0xFF000000&((data)<<24))
#define  KME_LBME_TOP_KME_LBME_TOP_34_regr_lbme_regional_apl_i_16(data)          (0x00FF0000&((data)<<16))
#define  KME_LBME_TOP_KME_LBME_TOP_34_regr_lbme_regional_apl_i_15(data)          (0x0000FF00&((data)<<8))
#define  KME_LBME_TOP_KME_LBME_TOP_34_regr_lbme_regional_apl_i_14(data)          (0x000000FF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_34_get_regr_lbme_regional_apl_i_17(data)      ((0xFF000000&(data))>>24)
#define  KME_LBME_TOP_KME_LBME_TOP_34_get_regr_lbme_regional_apl_i_16(data)      ((0x00FF0000&(data))>>16)
#define  KME_LBME_TOP_KME_LBME_TOP_34_get_regr_lbme_regional_apl_i_15(data)      ((0x0000FF00&(data))>>8)
#define  KME_LBME_TOP_KME_LBME_TOP_34_get_regr_lbme_regional_apl_i_14(data)      (0x000000FF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_38                                           0x1809B938
#define  KME_LBME_TOP_KME_LBME_TOP_38_reg_addr                                   "0xB809B938"
#define  KME_LBME_TOP_KME_LBME_TOP_38_reg                                        0xB809B938
#define  KME_LBME_TOP_KME_LBME_TOP_38_inst_addr                                  "0x000E"
#define  set_KME_LBME_TOP_KME_LBME_TOP_38_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_38_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_38_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_38_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_38_regr_lbme_regional_apl_i_23_shift          (24)
#define  KME_LBME_TOP_KME_LBME_TOP_38_regr_lbme_regional_apl_i_22_shift          (16)
#define  KME_LBME_TOP_KME_LBME_TOP_38_regr_lbme_regional_apl_i_21_shift          (8)
#define  KME_LBME_TOP_KME_LBME_TOP_38_regr_lbme_regional_apl_i_20_shift          (0)
#define  KME_LBME_TOP_KME_LBME_TOP_38_regr_lbme_regional_apl_i_23_mask           (0xFF000000)
#define  KME_LBME_TOP_KME_LBME_TOP_38_regr_lbme_regional_apl_i_22_mask           (0x00FF0000)
#define  KME_LBME_TOP_KME_LBME_TOP_38_regr_lbme_regional_apl_i_21_mask           (0x0000FF00)
#define  KME_LBME_TOP_KME_LBME_TOP_38_regr_lbme_regional_apl_i_20_mask           (0x000000FF)
#define  KME_LBME_TOP_KME_LBME_TOP_38_regr_lbme_regional_apl_i_23(data)          (0xFF000000&((data)<<24))
#define  KME_LBME_TOP_KME_LBME_TOP_38_regr_lbme_regional_apl_i_22(data)          (0x00FF0000&((data)<<16))
#define  KME_LBME_TOP_KME_LBME_TOP_38_regr_lbme_regional_apl_i_21(data)          (0x0000FF00&((data)<<8))
#define  KME_LBME_TOP_KME_LBME_TOP_38_regr_lbme_regional_apl_i_20(data)          (0x000000FF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_38_get_regr_lbme_regional_apl_i_23(data)      ((0xFF000000&(data))>>24)
#define  KME_LBME_TOP_KME_LBME_TOP_38_get_regr_lbme_regional_apl_i_22(data)      ((0x00FF0000&(data))>>16)
#define  KME_LBME_TOP_KME_LBME_TOP_38_get_regr_lbme_regional_apl_i_21(data)      ((0x0000FF00&(data))>>8)
#define  KME_LBME_TOP_KME_LBME_TOP_38_get_regr_lbme_regional_apl_i_20(data)      (0x000000FF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_3C                                           0x1809B93C
#define  KME_LBME_TOP_KME_LBME_TOP_3C_reg_addr                                   "0xB809B93C"
#define  KME_LBME_TOP_KME_LBME_TOP_3C_reg                                        0xB809B93C
#define  KME_LBME_TOP_KME_LBME_TOP_3C_inst_addr                                  "0x000F"
#define  set_KME_LBME_TOP_KME_LBME_TOP_3C_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_3C_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_3C_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_3C_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_3C_regr_lbme_regional_apl_i_27_shift          (24)
#define  KME_LBME_TOP_KME_LBME_TOP_3C_regr_lbme_regional_apl_i_26_shift          (16)
#define  KME_LBME_TOP_KME_LBME_TOP_3C_regr_lbme_regional_apl_i_25_shift          (8)
#define  KME_LBME_TOP_KME_LBME_TOP_3C_regr_lbme_regional_apl_i_24_shift          (0)
#define  KME_LBME_TOP_KME_LBME_TOP_3C_regr_lbme_regional_apl_i_27_mask           (0xFF000000)
#define  KME_LBME_TOP_KME_LBME_TOP_3C_regr_lbme_regional_apl_i_26_mask           (0x00FF0000)
#define  KME_LBME_TOP_KME_LBME_TOP_3C_regr_lbme_regional_apl_i_25_mask           (0x0000FF00)
#define  KME_LBME_TOP_KME_LBME_TOP_3C_regr_lbme_regional_apl_i_24_mask           (0x000000FF)
#define  KME_LBME_TOP_KME_LBME_TOP_3C_regr_lbme_regional_apl_i_27(data)          (0xFF000000&((data)<<24))
#define  KME_LBME_TOP_KME_LBME_TOP_3C_regr_lbme_regional_apl_i_26(data)          (0x00FF0000&((data)<<16))
#define  KME_LBME_TOP_KME_LBME_TOP_3C_regr_lbme_regional_apl_i_25(data)          (0x0000FF00&((data)<<8))
#define  KME_LBME_TOP_KME_LBME_TOP_3C_regr_lbme_regional_apl_i_24(data)          (0x000000FF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_3C_get_regr_lbme_regional_apl_i_27(data)      ((0xFF000000&(data))>>24)
#define  KME_LBME_TOP_KME_LBME_TOP_3C_get_regr_lbme_regional_apl_i_26(data)      ((0x00FF0000&(data))>>16)
#define  KME_LBME_TOP_KME_LBME_TOP_3C_get_regr_lbme_regional_apl_i_25(data)      ((0x0000FF00&(data))>>8)
#define  KME_LBME_TOP_KME_LBME_TOP_3C_get_regr_lbme_regional_apl_i_24(data)      (0x000000FF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_40                                           0x1809B940
#define  KME_LBME_TOP_KME_LBME_TOP_40_reg_addr                                   "0xB809B940"
#define  KME_LBME_TOP_KME_LBME_TOP_40_reg                                        0xB809B940
#define  KME_LBME_TOP_KME_LBME_TOP_40_inst_addr                                  "0x0010"
#define  set_KME_LBME_TOP_KME_LBME_TOP_40_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_40_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_40_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_40_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_40_regr_lbme_regional_apl_i_33_shift          (24)
#define  KME_LBME_TOP_KME_LBME_TOP_40_regr_lbme_regional_apl_i_32_shift          (16)
#define  KME_LBME_TOP_KME_LBME_TOP_40_regr_lbme_regional_apl_i_31_shift          (8)
#define  KME_LBME_TOP_KME_LBME_TOP_40_regr_lbme_regional_apl_i_30_shift          (0)
#define  KME_LBME_TOP_KME_LBME_TOP_40_regr_lbme_regional_apl_i_33_mask           (0xFF000000)
#define  KME_LBME_TOP_KME_LBME_TOP_40_regr_lbme_regional_apl_i_32_mask           (0x00FF0000)
#define  KME_LBME_TOP_KME_LBME_TOP_40_regr_lbme_regional_apl_i_31_mask           (0x0000FF00)
#define  KME_LBME_TOP_KME_LBME_TOP_40_regr_lbme_regional_apl_i_30_mask           (0x000000FF)
#define  KME_LBME_TOP_KME_LBME_TOP_40_regr_lbme_regional_apl_i_33(data)          (0xFF000000&((data)<<24))
#define  KME_LBME_TOP_KME_LBME_TOP_40_regr_lbme_regional_apl_i_32(data)          (0x00FF0000&((data)<<16))
#define  KME_LBME_TOP_KME_LBME_TOP_40_regr_lbme_regional_apl_i_31(data)          (0x0000FF00&((data)<<8))
#define  KME_LBME_TOP_KME_LBME_TOP_40_regr_lbme_regional_apl_i_30(data)          (0x000000FF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_40_get_regr_lbme_regional_apl_i_33(data)      ((0xFF000000&(data))>>24)
#define  KME_LBME_TOP_KME_LBME_TOP_40_get_regr_lbme_regional_apl_i_32(data)      ((0x00FF0000&(data))>>16)
#define  KME_LBME_TOP_KME_LBME_TOP_40_get_regr_lbme_regional_apl_i_31(data)      ((0x0000FF00&(data))>>8)
#define  KME_LBME_TOP_KME_LBME_TOP_40_get_regr_lbme_regional_apl_i_30(data)      (0x000000FF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_44                                           0x1809B944
#define  KME_LBME_TOP_KME_LBME_TOP_44_reg_addr                                   "0xB809B944"
#define  KME_LBME_TOP_KME_LBME_TOP_44_reg                                        0xB809B944
#define  KME_LBME_TOP_KME_LBME_TOP_44_inst_addr                                  "0x0011"
#define  set_KME_LBME_TOP_KME_LBME_TOP_44_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_44_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_44_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_44_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_44_regr_lbme_regional_apl_i_37_shift          (24)
#define  KME_LBME_TOP_KME_LBME_TOP_44_regr_lbme_regional_apl_i_36_shift          (16)
#define  KME_LBME_TOP_KME_LBME_TOP_44_regr_lbme_regional_apl_i_35_shift          (8)
#define  KME_LBME_TOP_KME_LBME_TOP_44_regr_lbme_regional_apl_i_34_shift          (0)
#define  KME_LBME_TOP_KME_LBME_TOP_44_regr_lbme_regional_apl_i_37_mask           (0xFF000000)
#define  KME_LBME_TOP_KME_LBME_TOP_44_regr_lbme_regional_apl_i_36_mask           (0x00FF0000)
#define  KME_LBME_TOP_KME_LBME_TOP_44_regr_lbme_regional_apl_i_35_mask           (0x0000FF00)
#define  KME_LBME_TOP_KME_LBME_TOP_44_regr_lbme_regional_apl_i_34_mask           (0x000000FF)
#define  KME_LBME_TOP_KME_LBME_TOP_44_regr_lbme_regional_apl_i_37(data)          (0xFF000000&((data)<<24))
#define  KME_LBME_TOP_KME_LBME_TOP_44_regr_lbme_regional_apl_i_36(data)          (0x00FF0000&((data)<<16))
#define  KME_LBME_TOP_KME_LBME_TOP_44_regr_lbme_regional_apl_i_35(data)          (0x0000FF00&((data)<<8))
#define  KME_LBME_TOP_KME_LBME_TOP_44_regr_lbme_regional_apl_i_34(data)          (0x000000FF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_44_get_regr_lbme_regional_apl_i_37(data)      ((0xFF000000&(data))>>24)
#define  KME_LBME_TOP_KME_LBME_TOP_44_get_regr_lbme_regional_apl_i_36(data)      ((0x00FF0000&(data))>>16)
#define  KME_LBME_TOP_KME_LBME_TOP_44_get_regr_lbme_regional_apl_i_35(data)      ((0x0000FF00&(data))>>8)
#define  KME_LBME_TOP_KME_LBME_TOP_44_get_regr_lbme_regional_apl_i_34(data)      (0x000000FF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_48                                           0x1809B948
#define  KME_LBME_TOP_KME_LBME_TOP_48_reg_addr                                   "0xB809B948"
#define  KME_LBME_TOP_KME_LBME_TOP_48_reg                                        0xB809B948
#define  KME_LBME_TOP_KME_LBME_TOP_48_inst_addr                                  "0x0012"
#define  set_KME_LBME_TOP_KME_LBME_TOP_48_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_48_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_48_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_48_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_48_regr_lbme_regional_apl_p_03_shift          (24)
#define  KME_LBME_TOP_KME_LBME_TOP_48_regr_lbme_regional_apl_p_02_shift          (16)
#define  KME_LBME_TOP_KME_LBME_TOP_48_regr_lbme_regional_apl_p_01_shift          (8)
#define  KME_LBME_TOP_KME_LBME_TOP_48_regr_lbme_regional_apl_p_00_shift          (0)
#define  KME_LBME_TOP_KME_LBME_TOP_48_regr_lbme_regional_apl_p_03_mask           (0xFF000000)
#define  KME_LBME_TOP_KME_LBME_TOP_48_regr_lbme_regional_apl_p_02_mask           (0x00FF0000)
#define  KME_LBME_TOP_KME_LBME_TOP_48_regr_lbme_regional_apl_p_01_mask           (0x0000FF00)
#define  KME_LBME_TOP_KME_LBME_TOP_48_regr_lbme_regional_apl_p_00_mask           (0x000000FF)
#define  KME_LBME_TOP_KME_LBME_TOP_48_regr_lbme_regional_apl_p_03(data)          (0xFF000000&((data)<<24))
#define  KME_LBME_TOP_KME_LBME_TOP_48_regr_lbme_regional_apl_p_02(data)          (0x00FF0000&((data)<<16))
#define  KME_LBME_TOP_KME_LBME_TOP_48_regr_lbme_regional_apl_p_01(data)          (0x0000FF00&((data)<<8))
#define  KME_LBME_TOP_KME_LBME_TOP_48_regr_lbme_regional_apl_p_00(data)          (0x000000FF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_48_get_regr_lbme_regional_apl_p_03(data)      ((0xFF000000&(data))>>24)
#define  KME_LBME_TOP_KME_LBME_TOP_48_get_regr_lbme_regional_apl_p_02(data)      ((0x00FF0000&(data))>>16)
#define  KME_LBME_TOP_KME_LBME_TOP_48_get_regr_lbme_regional_apl_p_01(data)      ((0x0000FF00&(data))>>8)
#define  KME_LBME_TOP_KME_LBME_TOP_48_get_regr_lbme_regional_apl_p_00(data)      (0x000000FF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_4C                                           0x1809B94C
#define  KME_LBME_TOP_KME_LBME_TOP_4C_reg_addr                                   "0xB809B94C"
#define  KME_LBME_TOP_KME_LBME_TOP_4C_reg                                        0xB809B94C
#define  KME_LBME_TOP_KME_LBME_TOP_4C_inst_addr                                  "0x0013"
#define  set_KME_LBME_TOP_KME_LBME_TOP_4C_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_4C_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_4C_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_4C_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_4C_regr_lbme_regional_apl_p_07_shift          (24)
#define  KME_LBME_TOP_KME_LBME_TOP_4C_regr_lbme_regional_apl_p_06_shift          (16)
#define  KME_LBME_TOP_KME_LBME_TOP_4C_regr_lbme_regional_apl_p_05_shift          (8)
#define  KME_LBME_TOP_KME_LBME_TOP_4C_regr_lbme_regional_apl_p_04_shift          (0)
#define  KME_LBME_TOP_KME_LBME_TOP_4C_regr_lbme_regional_apl_p_07_mask           (0xFF000000)
#define  KME_LBME_TOP_KME_LBME_TOP_4C_regr_lbme_regional_apl_p_06_mask           (0x00FF0000)
#define  KME_LBME_TOP_KME_LBME_TOP_4C_regr_lbme_regional_apl_p_05_mask           (0x0000FF00)
#define  KME_LBME_TOP_KME_LBME_TOP_4C_regr_lbme_regional_apl_p_04_mask           (0x000000FF)
#define  KME_LBME_TOP_KME_LBME_TOP_4C_regr_lbme_regional_apl_p_07(data)          (0xFF000000&((data)<<24))
#define  KME_LBME_TOP_KME_LBME_TOP_4C_regr_lbme_regional_apl_p_06(data)          (0x00FF0000&((data)<<16))
#define  KME_LBME_TOP_KME_LBME_TOP_4C_regr_lbme_regional_apl_p_05(data)          (0x0000FF00&((data)<<8))
#define  KME_LBME_TOP_KME_LBME_TOP_4C_regr_lbme_regional_apl_p_04(data)          (0x000000FF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_4C_get_regr_lbme_regional_apl_p_07(data)      ((0xFF000000&(data))>>24)
#define  KME_LBME_TOP_KME_LBME_TOP_4C_get_regr_lbme_regional_apl_p_06(data)      ((0x00FF0000&(data))>>16)
#define  KME_LBME_TOP_KME_LBME_TOP_4C_get_regr_lbme_regional_apl_p_05(data)      ((0x0000FF00&(data))>>8)
#define  KME_LBME_TOP_KME_LBME_TOP_4C_get_regr_lbme_regional_apl_p_04(data)      (0x000000FF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_50                                           0x1809B950
#define  KME_LBME_TOP_KME_LBME_TOP_50_reg_addr                                   "0xB809B950"
#define  KME_LBME_TOP_KME_LBME_TOP_50_reg                                        0xB809B950
#define  KME_LBME_TOP_KME_LBME_TOP_50_inst_addr                                  "0x0014"
#define  set_KME_LBME_TOP_KME_LBME_TOP_50_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_50_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_50_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_50_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_50_regr_lbme_regional_apl_p_13_shift          (24)
#define  KME_LBME_TOP_KME_LBME_TOP_50_regr_lbme_regional_apl_p_12_shift          (16)
#define  KME_LBME_TOP_KME_LBME_TOP_50_regr_lbme_regional_apl_p_11_shift          (8)
#define  KME_LBME_TOP_KME_LBME_TOP_50_regr_lbme_regional_apl_p_10_shift          (0)
#define  KME_LBME_TOP_KME_LBME_TOP_50_regr_lbme_regional_apl_p_13_mask           (0xFF000000)
#define  KME_LBME_TOP_KME_LBME_TOP_50_regr_lbme_regional_apl_p_12_mask           (0x00FF0000)
#define  KME_LBME_TOP_KME_LBME_TOP_50_regr_lbme_regional_apl_p_11_mask           (0x0000FF00)
#define  KME_LBME_TOP_KME_LBME_TOP_50_regr_lbme_regional_apl_p_10_mask           (0x000000FF)
#define  KME_LBME_TOP_KME_LBME_TOP_50_regr_lbme_regional_apl_p_13(data)          (0xFF000000&((data)<<24))
#define  KME_LBME_TOP_KME_LBME_TOP_50_regr_lbme_regional_apl_p_12(data)          (0x00FF0000&((data)<<16))
#define  KME_LBME_TOP_KME_LBME_TOP_50_regr_lbme_regional_apl_p_11(data)          (0x0000FF00&((data)<<8))
#define  KME_LBME_TOP_KME_LBME_TOP_50_regr_lbme_regional_apl_p_10(data)          (0x000000FF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_50_get_regr_lbme_regional_apl_p_13(data)      ((0xFF000000&(data))>>24)
#define  KME_LBME_TOP_KME_LBME_TOP_50_get_regr_lbme_regional_apl_p_12(data)      ((0x00FF0000&(data))>>16)
#define  KME_LBME_TOP_KME_LBME_TOP_50_get_regr_lbme_regional_apl_p_11(data)      ((0x0000FF00&(data))>>8)
#define  KME_LBME_TOP_KME_LBME_TOP_50_get_regr_lbme_regional_apl_p_10(data)      (0x000000FF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_54                                           0x1809B954
#define  KME_LBME_TOP_KME_LBME_TOP_54_reg_addr                                   "0xB809B954"
#define  KME_LBME_TOP_KME_LBME_TOP_54_reg                                        0xB809B954
#define  KME_LBME_TOP_KME_LBME_TOP_54_inst_addr                                  "0x0015"
#define  set_KME_LBME_TOP_KME_LBME_TOP_54_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_54_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_54_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_54_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_54_regr_lbme_regional_apl_p_17_shift          (24)
#define  KME_LBME_TOP_KME_LBME_TOP_54_regr_lbme_regional_apl_p_16_shift          (16)
#define  KME_LBME_TOP_KME_LBME_TOP_54_regr_lbme_regional_apl_p_15_shift          (8)
#define  KME_LBME_TOP_KME_LBME_TOP_54_regr_lbme_regional_apl_p_14_shift          (0)
#define  KME_LBME_TOP_KME_LBME_TOP_54_regr_lbme_regional_apl_p_17_mask           (0xFF000000)
#define  KME_LBME_TOP_KME_LBME_TOP_54_regr_lbme_regional_apl_p_16_mask           (0x00FF0000)
#define  KME_LBME_TOP_KME_LBME_TOP_54_regr_lbme_regional_apl_p_15_mask           (0x0000FF00)
#define  KME_LBME_TOP_KME_LBME_TOP_54_regr_lbme_regional_apl_p_14_mask           (0x000000FF)
#define  KME_LBME_TOP_KME_LBME_TOP_54_regr_lbme_regional_apl_p_17(data)          (0xFF000000&((data)<<24))
#define  KME_LBME_TOP_KME_LBME_TOP_54_regr_lbme_regional_apl_p_16(data)          (0x00FF0000&((data)<<16))
#define  KME_LBME_TOP_KME_LBME_TOP_54_regr_lbme_regional_apl_p_15(data)          (0x0000FF00&((data)<<8))
#define  KME_LBME_TOP_KME_LBME_TOP_54_regr_lbme_regional_apl_p_14(data)          (0x000000FF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_54_get_regr_lbme_regional_apl_p_17(data)      ((0xFF000000&(data))>>24)
#define  KME_LBME_TOP_KME_LBME_TOP_54_get_regr_lbme_regional_apl_p_16(data)      ((0x00FF0000&(data))>>16)
#define  KME_LBME_TOP_KME_LBME_TOP_54_get_regr_lbme_regional_apl_p_15(data)      ((0x0000FF00&(data))>>8)
#define  KME_LBME_TOP_KME_LBME_TOP_54_get_regr_lbme_regional_apl_p_14(data)      (0x000000FF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_58                                           0x1809B958
#define  KME_LBME_TOP_KME_LBME_TOP_58_reg_addr                                   "0xB809B958"
#define  KME_LBME_TOP_KME_LBME_TOP_58_reg                                        0xB809B958
#define  KME_LBME_TOP_KME_LBME_TOP_58_inst_addr                                  "0x0016"
#define  set_KME_LBME_TOP_KME_LBME_TOP_58_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_58_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_58_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_58_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_58_regr_lbme_regional_apl_p_23_shift          (24)
#define  KME_LBME_TOP_KME_LBME_TOP_58_regr_lbme_regional_apl_p_22_shift          (16)
#define  KME_LBME_TOP_KME_LBME_TOP_58_regr_lbme_regional_apl_p_21_shift          (8)
#define  KME_LBME_TOP_KME_LBME_TOP_58_regr_lbme_regional_apl_p_20_shift          (0)
#define  KME_LBME_TOP_KME_LBME_TOP_58_regr_lbme_regional_apl_p_23_mask           (0xFF000000)
#define  KME_LBME_TOP_KME_LBME_TOP_58_regr_lbme_regional_apl_p_22_mask           (0x00FF0000)
#define  KME_LBME_TOP_KME_LBME_TOP_58_regr_lbme_regional_apl_p_21_mask           (0x0000FF00)
#define  KME_LBME_TOP_KME_LBME_TOP_58_regr_lbme_regional_apl_p_20_mask           (0x000000FF)
#define  KME_LBME_TOP_KME_LBME_TOP_58_regr_lbme_regional_apl_p_23(data)          (0xFF000000&((data)<<24))
#define  KME_LBME_TOP_KME_LBME_TOP_58_regr_lbme_regional_apl_p_22(data)          (0x00FF0000&((data)<<16))
#define  KME_LBME_TOP_KME_LBME_TOP_58_regr_lbme_regional_apl_p_21(data)          (0x0000FF00&((data)<<8))
#define  KME_LBME_TOP_KME_LBME_TOP_58_regr_lbme_regional_apl_p_20(data)          (0x000000FF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_58_get_regr_lbme_regional_apl_p_23(data)      ((0xFF000000&(data))>>24)
#define  KME_LBME_TOP_KME_LBME_TOP_58_get_regr_lbme_regional_apl_p_22(data)      ((0x00FF0000&(data))>>16)
#define  KME_LBME_TOP_KME_LBME_TOP_58_get_regr_lbme_regional_apl_p_21(data)      ((0x0000FF00&(data))>>8)
#define  KME_LBME_TOP_KME_LBME_TOP_58_get_regr_lbme_regional_apl_p_20(data)      (0x000000FF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_5C                                           0x1809B95C
#define  KME_LBME_TOP_KME_LBME_TOP_5C_reg_addr                                   "0xB809B95C"
#define  KME_LBME_TOP_KME_LBME_TOP_5C_reg                                        0xB809B95C
#define  KME_LBME_TOP_KME_LBME_TOP_5C_inst_addr                                  "0x0017"
#define  set_KME_LBME_TOP_KME_LBME_TOP_5C_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_5C_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_5C_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_5C_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_5C_regr_lbme_regional_apl_p_27_shift          (24)
#define  KME_LBME_TOP_KME_LBME_TOP_5C_regr_lbme_regional_apl_p_26_shift          (16)
#define  KME_LBME_TOP_KME_LBME_TOP_5C_regr_lbme_regional_apl_p_25_shift          (8)
#define  KME_LBME_TOP_KME_LBME_TOP_5C_regr_lbme_regional_apl_p_24_shift          (0)
#define  KME_LBME_TOP_KME_LBME_TOP_5C_regr_lbme_regional_apl_p_27_mask           (0xFF000000)
#define  KME_LBME_TOP_KME_LBME_TOP_5C_regr_lbme_regional_apl_p_26_mask           (0x00FF0000)
#define  KME_LBME_TOP_KME_LBME_TOP_5C_regr_lbme_regional_apl_p_25_mask           (0x0000FF00)
#define  KME_LBME_TOP_KME_LBME_TOP_5C_regr_lbme_regional_apl_p_24_mask           (0x000000FF)
#define  KME_LBME_TOP_KME_LBME_TOP_5C_regr_lbme_regional_apl_p_27(data)          (0xFF000000&((data)<<24))
#define  KME_LBME_TOP_KME_LBME_TOP_5C_regr_lbme_regional_apl_p_26(data)          (0x00FF0000&((data)<<16))
#define  KME_LBME_TOP_KME_LBME_TOP_5C_regr_lbme_regional_apl_p_25(data)          (0x0000FF00&((data)<<8))
#define  KME_LBME_TOP_KME_LBME_TOP_5C_regr_lbme_regional_apl_p_24(data)          (0x000000FF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_5C_get_regr_lbme_regional_apl_p_27(data)      ((0xFF000000&(data))>>24)
#define  KME_LBME_TOP_KME_LBME_TOP_5C_get_regr_lbme_regional_apl_p_26(data)      ((0x00FF0000&(data))>>16)
#define  KME_LBME_TOP_KME_LBME_TOP_5C_get_regr_lbme_regional_apl_p_25(data)      ((0x0000FF00&(data))>>8)
#define  KME_LBME_TOP_KME_LBME_TOP_5C_get_regr_lbme_regional_apl_p_24(data)      (0x000000FF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_60                                           0x1809B960
#define  KME_LBME_TOP_KME_LBME_TOP_60_reg_addr                                   "0xB809B960"
#define  KME_LBME_TOP_KME_LBME_TOP_60_reg                                        0xB809B960
#define  KME_LBME_TOP_KME_LBME_TOP_60_inst_addr                                  "0x0018"
#define  set_KME_LBME_TOP_KME_LBME_TOP_60_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_60_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_60_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_60_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_60_regr_lbme_regional_apl_p_33_shift          (24)
#define  KME_LBME_TOP_KME_LBME_TOP_60_regr_lbme_regional_apl_p_32_shift          (16)
#define  KME_LBME_TOP_KME_LBME_TOP_60_regr_lbme_regional_apl_p_31_shift          (8)
#define  KME_LBME_TOP_KME_LBME_TOP_60_regr_lbme_regional_apl_p_30_shift          (0)
#define  KME_LBME_TOP_KME_LBME_TOP_60_regr_lbme_regional_apl_p_33_mask           (0xFF000000)
#define  KME_LBME_TOP_KME_LBME_TOP_60_regr_lbme_regional_apl_p_32_mask           (0x00FF0000)
#define  KME_LBME_TOP_KME_LBME_TOP_60_regr_lbme_regional_apl_p_31_mask           (0x0000FF00)
#define  KME_LBME_TOP_KME_LBME_TOP_60_regr_lbme_regional_apl_p_30_mask           (0x000000FF)
#define  KME_LBME_TOP_KME_LBME_TOP_60_regr_lbme_regional_apl_p_33(data)          (0xFF000000&((data)<<24))
#define  KME_LBME_TOP_KME_LBME_TOP_60_regr_lbme_regional_apl_p_32(data)          (0x00FF0000&((data)<<16))
#define  KME_LBME_TOP_KME_LBME_TOP_60_regr_lbme_regional_apl_p_31(data)          (0x0000FF00&((data)<<8))
#define  KME_LBME_TOP_KME_LBME_TOP_60_regr_lbme_regional_apl_p_30(data)          (0x000000FF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_60_get_regr_lbme_regional_apl_p_33(data)      ((0xFF000000&(data))>>24)
#define  KME_LBME_TOP_KME_LBME_TOP_60_get_regr_lbme_regional_apl_p_32(data)      ((0x00FF0000&(data))>>16)
#define  KME_LBME_TOP_KME_LBME_TOP_60_get_regr_lbme_regional_apl_p_31(data)      ((0x0000FF00&(data))>>8)
#define  KME_LBME_TOP_KME_LBME_TOP_60_get_regr_lbme_regional_apl_p_30(data)      (0x000000FF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_64                                           0x1809B964
#define  KME_LBME_TOP_KME_LBME_TOP_64_reg_addr                                   "0xB809B964"
#define  KME_LBME_TOP_KME_LBME_TOP_64_reg                                        0xB809B964
#define  KME_LBME_TOP_KME_LBME_TOP_64_inst_addr                                  "0x0019"
#define  set_KME_LBME_TOP_KME_LBME_TOP_64_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_64_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_64_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_64_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_64_regr_lbme_regional_apl_p_37_shift          (24)
#define  KME_LBME_TOP_KME_LBME_TOP_64_regr_lbme_regional_apl_p_36_shift          (16)
#define  KME_LBME_TOP_KME_LBME_TOP_64_regr_lbme_regional_apl_p_35_shift          (8)
#define  KME_LBME_TOP_KME_LBME_TOP_64_regr_lbme_regional_apl_p_34_shift          (0)
#define  KME_LBME_TOP_KME_LBME_TOP_64_regr_lbme_regional_apl_p_37_mask           (0xFF000000)
#define  KME_LBME_TOP_KME_LBME_TOP_64_regr_lbme_regional_apl_p_36_mask           (0x00FF0000)
#define  KME_LBME_TOP_KME_LBME_TOP_64_regr_lbme_regional_apl_p_35_mask           (0x0000FF00)
#define  KME_LBME_TOP_KME_LBME_TOP_64_regr_lbme_regional_apl_p_34_mask           (0x000000FF)
#define  KME_LBME_TOP_KME_LBME_TOP_64_regr_lbme_regional_apl_p_37(data)          (0xFF000000&((data)<<24))
#define  KME_LBME_TOP_KME_LBME_TOP_64_regr_lbme_regional_apl_p_36(data)          (0x00FF0000&((data)<<16))
#define  KME_LBME_TOP_KME_LBME_TOP_64_regr_lbme_regional_apl_p_35(data)          (0x0000FF00&((data)<<8))
#define  KME_LBME_TOP_KME_LBME_TOP_64_regr_lbme_regional_apl_p_34(data)          (0x000000FF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_64_get_regr_lbme_regional_apl_p_37(data)      ((0xFF000000&(data))>>24)
#define  KME_LBME_TOP_KME_LBME_TOP_64_get_regr_lbme_regional_apl_p_36(data)      ((0x00FF0000&(data))>>16)
#define  KME_LBME_TOP_KME_LBME_TOP_64_get_regr_lbme_regional_apl_p_35(data)      ((0x0000FF00&(data))>>8)
#define  KME_LBME_TOP_KME_LBME_TOP_64_get_regr_lbme_regional_apl_p_34(data)      (0x000000FF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_68                                           0x1809B968
#define  KME_LBME_TOP_KME_LBME_TOP_68_reg_addr                                   "0xB809B968"
#define  KME_LBME_TOP_KME_LBME_TOP_68_reg                                        0xB809B968
#define  KME_LBME_TOP_KME_LBME_TOP_68_inst_addr                                  "0x001A"
#define  set_KME_LBME_TOP_KME_LBME_TOP_68_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_68_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_68_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_68_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_68_regr_lbme_rdbk_i_pos_y_cnt_shift           (16)
#define  KME_LBME_TOP_KME_LBME_TOP_68_regr_lbme_rdbk_i_pos_x_cnt_shift           (0)
#define  KME_LBME_TOP_KME_LBME_TOP_68_regr_lbme_rdbk_i_pos_y_cnt_mask            (0xFFFF0000)
#define  KME_LBME_TOP_KME_LBME_TOP_68_regr_lbme_rdbk_i_pos_x_cnt_mask            (0x0000FFFF)
#define  KME_LBME_TOP_KME_LBME_TOP_68_regr_lbme_rdbk_i_pos_y_cnt(data)           (0xFFFF0000&((data)<<16))
#define  KME_LBME_TOP_KME_LBME_TOP_68_regr_lbme_rdbk_i_pos_x_cnt(data)           (0x0000FFFF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_68_get_regr_lbme_rdbk_i_pos_y_cnt(data)       ((0xFFFF0000&(data))>>16)
#define  KME_LBME_TOP_KME_LBME_TOP_68_get_regr_lbme_rdbk_i_pos_x_cnt(data)       (0x0000FFFF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_6C                                           0x1809B96C
#define  KME_LBME_TOP_KME_LBME_TOP_6C_reg_addr                                   "0xB809B96C"
#define  KME_LBME_TOP_KME_LBME_TOP_6C_reg                                        0xB809B96C
#define  KME_LBME_TOP_KME_LBME_TOP_6C_inst_addr                                  "0x001B"
#define  set_KME_LBME_TOP_KME_LBME_TOP_6C_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_6C_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_6C_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_6C_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_6C_regr_lbme_rdbk_p_pos_y_cnt_shift           (16)
#define  KME_LBME_TOP_KME_LBME_TOP_6C_regr_lbme_rdbk_p_pos_x_cnt_shift           (0)
#define  KME_LBME_TOP_KME_LBME_TOP_6C_regr_lbme_rdbk_p_pos_y_cnt_mask            (0xFFFF0000)
#define  KME_LBME_TOP_KME_LBME_TOP_6C_regr_lbme_rdbk_p_pos_x_cnt_mask            (0x0000FFFF)
#define  KME_LBME_TOP_KME_LBME_TOP_6C_regr_lbme_rdbk_p_pos_y_cnt(data)           (0xFFFF0000&((data)<<16))
#define  KME_LBME_TOP_KME_LBME_TOP_6C_regr_lbme_rdbk_p_pos_x_cnt(data)           (0x0000FFFF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_6C_get_regr_lbme_rdbk_p_pos_y_cnt(data)       ((0xFFFF0000&(data))>>16)
#define  KME_LBME_TOP_KME_LBME_TOP_6C_get_regr_lbme_rdbk_p_pos_x_cnt(data)       (0x0000FFFF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_70                                           0x1809B970
#define  KME_LBME_TOP_KME_LBME_TOP_70_reg_addr                                   "0xB809B970"
#define  KME_LBME_TOP_KME_LBME_TOP_70_reg                                        0xB809B970
#define  KME_LBME_TOP_KME_LBME_TOP_70_inst_addr                                  "0x001C"
#define  set_KME_LBME_TOP_KME_LBME_TOP_70_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_70_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_70_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_70_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_70_regr_lbme_frame_req_error_shift            (16)
#define  KME_LBME_TOP_KME_LBME_TOP_70_regr_lbme_if_req_cnt_latch_shift           (0)
#define  KME_LBME_TOP_KME_LBME_TOP_70_regr_lbme_frame_req_error_mask             (0x00FF0000)
#define  KME_LBME_TOP_KME_LBME_TOP_70_regr_lbme_if_req_cnt_latch_mask            (0x0000FFFF)
#define  KME_LBME_TOP_KME_LBME_TOP_70_regr_lbme_frame_req_error(data)            (0x00FF0000&((data)<<16))
#define  KME_LBME_TOP_KME_LBME_TOP_70_regr_lbme_if_req_cnt_latch(data)           (0x0000FFFF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_70_get_regr_lbme_frame_req_error(data)        ((0x00FF0000&(data))>>16)
#define  KME_LBME_TOP_KME_LBME_TOP_70_get_regr_lbme_if_req_cnt_latch(data)       (0x0000FFFF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_C0                                           0x1809B9C0
#define  KME_LBME_TOP_KME_LBME_TOP_C0_reg_addr                                   "0xB809B9C0"
#define  KME_LBME_TOP_KME_LBME_TOP_C0_reg                                        0xB809B9C0
#define  KME_LBME_TOP_KME_LBME_TOP_C0_inst_addr                                  "0x001D"
#define  set_KME_LBME_TOP_KME_LBME_TOP_C0_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_C0_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_C0_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_C0_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_C0_ipme_fdet_mot_9region0_shift               (0)
#define  KME_LBME_TOP_KME_LBME_TOP_C0_ipme_fdet_mot_9region0_mask                (0x07FFFFFF)
#define  KME_LBME_TOP_KME_LBME_TOP_C0_ipme_fdet_mot_9region0(data)               (0x07FFFFFF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_C0_get_ipme_fdet_mot_9region0(data)           (0x07FFFFFF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_C4                                           0x1809B9C4
#define  KME_LBME_TOP_KME_LBME_TOP_C4_reg_addr                                   "0xB809B9C4"
#define  KME_LBME_TOP_KME_LBME_TOP_C4_reg                                        0xB809B9C4
#define  KME_LBME_TOP_KME_LBME_TOP_C4_inst_addr                                  "0x001E"
#define  set_KME_LBME_TOP_KME_LBME_TOP_C4_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_C4_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_C4_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_C4_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_C4_ipme_fdet_mot_9region1_shift               (0)
#define  KME_LBME_TOP_KME_LBME_TOP_C4_ipme_fdet_mot_9region1_mask                (0x07FFFFFF)
#define  KME_LBME_TOP_KME_LBME_TOP_C4_ipme_fdet_mot_9region1(data)               (0x07FFFFFF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_C4_get_ipme_fdet_mot_9region1(data)           (0x07FFFFFF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_C8                                           0x1809B9C8
#define  KME_LBME_TOP_KME_LBME_TOP_C8_reg_addr                                   "0xB809B9C8"
#define  KME_LBME_TOP_KME_LBME_TOP_C8_reg                                        0xB809B9C8
#define  KME_LBME_TOP_KME_LBME_TOP_C8_inst_addr                                  "0x001F"
#define  set_KME_LBME_TOP_KME_LBME_TOP_C8_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_C8_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_C8_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_C8_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_C8_ipme_fdet_mot_9region2_shift               (0)
#define  KME_LBME_TOP_KME_LBME_TOP_C8_ipme_fdet_mot_9region2_mask                (0x07FFFFFF)
#define  KME_LBME_TOP_KME_LBME_TOP_C8_ipme_fdet_mot_9region2(data)               (0x07FFFFFF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_C8_get_ipme_fdet_mot_9region2(data)           (0x07FFFFFF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_CC                                           0x1809B9CC
#define  KME_LBME_TOP_KME_LBME_TOP_CC_reg_addr                                   "0xB809B9CC"
#define  KME_LBME_TOP_KME_LBME_TOP_CC_reg                                        0xB809B9CC
#define  KME_LBME_TOP_KME_LBME_TOP_CC_inst_addr                                  "0x0020"
#define  set_KME_LBME_TOP_KME_LBME_TOP_CC_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_CC_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_CC_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_CC_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_CC_ipme_fdet_mot_9region3_shift               (0)
#define  KME_LBME_TOP_KME_LBME_TOP_CC_ipme_fdet_mot_9region3_mask                (0x07FFFFFF)
#define  KME_LBME_TOP_KME_LBME_TOP_CC_ipme_fdet_mot_9region3(data)               (0x07FFFFFF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_CC_get_ipme_fdet_mot_9region3(data)           (0x07FFFFFF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_D0                                           0x1809B9D0
#define  KME_LBME_TOP_KME_LBME_TOP_D0_reg_addr                                   "0xB809B9D0"
#define  KME_LBME_TOP_KME_LBME_TOP_D0_reg                                        0xB809B9D0
#define  KME_LBME_TOP_KME_LBME_TOP_D0_inst_addr                                  "0x0021"
#define  set_KME_LBME_TOP_KME_LBME_TOP_D0_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_D0_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_D0_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_D0_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_D0_ipme_fdet_mot_9region4_shift               (0)
#define  KME_LBME_TOP_KME_LBME_TOP_D0_ipme_fdet_mot_9region4_mask                (0x07FFFFFF)
#define  KME_LBME_TOP_KME_LBME_TOP_D0_ipme_fdet_mot_9region4(data)               (0x07FFFFFF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_D0_get_ipme_fdet_mot_9region4(data)           (0x07FFFFFF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_D4                                           0x1809B9D4
#define  KME_LBME_TOP_KME_LBME_TOP_D4_reg_addr                                   "0xB809B9D4"
#define  KME_LBME_TOP_KME_LBME_TOP_D4_reg                                        0xB809B9D4
#define  KME_LBME_TOP_KME_LBME_TOP_D4_inst_addr                                  "0x0022"
#define  set_KME_LBME_TOP_KME_LBME_TOP_D4_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_D4_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_D4_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_D4_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_D4_ipme_fdet_mot_9region5_shift               (0)
#define  KME_LBME_TOP_KME_LBME_TOP_D4_ipme_fdet_mot_9region5_mask                (0x07FFFFFF)
#define  KME_LBME_TOP_KME_LBME_TOP_D4_ipme_fdet_mot_9region5(data)               (0x07FFFFFF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_D4_get_ipme_fdet_mot_9region5(data)           (0x07FFFFFF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_D8                                           0x1809B9D8
#define  KME_LBME_TOP_KME_LBME_TOP_D8_reg_addr                                   "0xB809B9D8"
#define  KME_LBME_TOP_KME_LBME_TOP_D8_reg                                        0xB809B9D8
#define  KME_LBME_TOP_KME_LBME_TOP_D8_inst_addr                                  "0x0023"
#define  set_KME_LBME_TOP_KME_LBME_TOP_D8_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_D8_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_D8_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_D8_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_D8_ipme_fdet_mot_9region6_shift               (0)
#define  KME_LBME_TOP_KME_LBME_TOP_D8_ipme_fdet_mot_9region6_mask                (0x07FFFFFF)
#define  KME_LBME_TOP_KME_LBME_TOP_D8_ipme_fdet_mot_9region6(data)               (0x07FFFFFF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_D8_get_ipme_fdet_mot_9region6(data)           (0x07FFFFFF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_DC                                           0x1809B9DC
#define  KME_LBME_TOP_KME_LBME_TOP_DC_reg_addr                                   "0xB809B9DC"
#define  KME_LBME_TOP_KME_LBME_TOP_DC_reg                                        0xB809B9DC
#define  KME_LBME_TOP_KME_LBME_TOP_DC_inst_addr                                  "0x0024"
#define  set_KME_LBME_TOP_KME_LBME_TOP_DC_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_DC_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_DC_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_DC_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_DC_ipme_fdet_mot_9region7_shift               (0)
#define  KME_LBME_TOP_KME_LBME_TOP_DC_ipme_fdet_mot_9region7_mask                (0x07FFFFFF)
#define  KME_LBME_TOP_KME_LBME_TOP_DC_ipme_fdet_mot_9region7(data)               (0x07FFFFFF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_DC_get_ipme_fdet_mot_9region7(data)           (0x07FFFFFF&(data))

#define  KME_LBME_TOP_KME_LBME_TOP_E0                                           0x1809B9E0
#define  KME_LBME_TOP_KME_LBME_TOP_E0_reg_addr                                   "0xB809B9E0"
#define  KME_LBME_TOP_KME_LBME_TOP_E0_reg                                        0xB809B9E0
#define  KME_LBME_TOP_KME_LBME_TOP_E0_inst_addr                                  "0x0025"
#define  set_KME_LBME_TOP_KME_LBME_TOP_E0_reg(data)                              (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_E0_reg)=data)
#define  get_KME_LBME_TOP_KME_LBME_TOP_E0_reg                                    (*((volatile unsigned int*)KME_LBME_TOP_KME_LBME_TOP_E0_reg))
#define  KME_LBME_TOP_KME_LBME_TOP_E0_ipme_fdet_mot_9region8_shift               (0)
#define  KME_LBME_TOP_KME_LBME_TOP_E0_ipme_fdet_mot_9region8_mask                (0x07FFFFFF)
#define  KME_LBME_TOP_KME_LBME_TOP_E0_ipme_fdet_mot_9region8(data)               (0x07FFFFFF&(data))
#define  KME_LBME_TOP_KME_LBME_TOP_E0_get_ipme_fdet_mot_9region8(data)           (0x07FFFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KME_LBME_TOP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  lbme_rim_x_end:11;
        RBus_UInt32  lbme_rim_x_start:11;
    };
}kme_lbme_top_kme_lbme_top_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kme_lbme_sram_ls_value:1;
        RBus_UInt32  kme_lbme_sram_ls_en:1;
        RBus_UInt32  lbme_rim_y_end:11;
        RBus_UInt32  lbme_rim_y_start:11;
    };
}kme_lbme_top_kme_lbme_top_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbme_debug_boundary_color:8;
        RBus_UInt32  lbme_force_linebuf_addr_zero:1;
        RBus_UInt32  lbme_debug_rdbk_posxy_en:1;
        RBus_UInt32  lbme_debug_boundary_en:1;
        RBus_UInt32  lbme_debug_patt_data:8;
        RBus_UInt32  lbme_debug_patt_mode:2;
        RBus_UInt32  lbme_debug_patt_en:1;
        RBus_UInt32  lbme_debug_de_cnt:2;
        RBus_UInt32  lbme_debug_ip_sel:1;
        RBus_UInt32  lbme_debug_blk_y:3;
        RBus_UInt32  lbme_debug_blk_x:4;
    };
}kme_lbme_top_kme_lbme_top_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbme_p_y_offset:8;
        RBus_UInt32  lbme_p_x_offset:8;
        RBus_UInt32  lbme_i_y_offset:8;
        RBus_UInt32  lbme_i_x_offset:8;
    };
}kme_lbme_top_kme_lbme_top_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  lbme_debug_option:1;
        RBus_UInt32  lbme_debug_hact:8;
        RBus_UInt32  lbme_debug_y_pos:10;
        RBus_UInt32  lbme_debug_x_pos:10;
    };
}kme_lbme_top_kme_lbme_top_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lbme_total_pixel_num:10;
        RBus_UInt32  lbme_total_line_num:10;
    };
}kme_lbme_top_kme_lbme_top_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbme_line_num_perlinebuf:8;
        RBus_UInt32  lbme_blk_num_perline:8;
        RBus_UInt32  lbme_prefetch_linebuf_num:8;
        RBus_UInt32  lbme_total_linebuf_num:8;
    };
}kme_lbme_top_kme_lbme_top_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  lbme_meander_rim_x_end:11;
        RBus_UInt32  lbme_meander_rim_x_start:11;
    };
}kme_lbme_top_kme_lbme_top_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  lbme_meander_rim_y_end:11;
        RBus_UInt32  lbme_meander_rim_y_start:11;
    };
}kme_lbme_top_kme_lbme_top_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  lbme_regional_apl_en:1;
    };
}kme_lbme_top_kme_lbme_top_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_i_03:8;
        RBus_UInt32  regr_lbme_regional_apl_i_02:8;
        RBus_UInt32  regr_lbme_regional_apl_i_01:8;
        RBus_UInt32  regr_lbme_regional_apl_i_00:8;
    };
}kme_lbme_top_kme_lbme_top_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_i_07:8;
        RBus_UInt32  regr_lbme_regional_apl_i_06:8;
        RBus_UInt32  regr_lbme_regional_apl_i_05:8;
        RBus_UInt32  regr_lbme_regional_apl_i_04:8;
    };
}kme_lbme_top_kme_lbme_top_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_i_13:8;
        RBus_UInt32  regr_lbme_regional_apl_i_12:8;
        RBus_UInt32  regr_lbme_regional_apl_i_11:8;
        RBus_UInt32  regr_lbme_regional_apl_i_10:8;
    };
}kme_lbme_top_kme_lbme_top_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_i_17:8;
        RBus_UInt32  regr_lbme_regional_apl_i_16:8;
        RBus_UInt32  regr_lbme_regional_apl_i_15:8;
        RBus_UInt32  regr_lbme_regional_apl_i_14:8;
    };
}kme_lbme_top_kme_lbme_top_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_i_23:8;
        RBus_UInt32  regr_lbme_regional_apl_i_22:8;
        RBus_UInt32  regr_lbme_regional_apl_i_21:8;
        RBus_UInt32  regr_lbme_regional_apl_i_20:8;
    };
}kme_lbme_top_kme_lbme_top_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_i_27:8;
        RBus_UInt32  regr_lbme_regional_apl_i_26:8;
        RBus_UInt32  regr_lbme_regional_apl_i_25:8;
        RBus_UInt32  regr_lbme_regional_apl_i_24:8;
    };
}kme_lbme_top_kme_lbme_top_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_i_33:8;
        RBus_UInt32  regr_lbme_regional_apl_i_32:8;
        RBus_UInt32  regr_lbme_regional_apl_i_31:8;
        RBus_UInt32  regr_lbme_regional_apl_i_30:8;
    };
}kme_lbme_top_kme_lbme_top_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_i_37:8;
        RBus_UInt32  regr_lbme_regional_apl_i_36:8;
        RBus_UInt32  regr_lbme_regional_apl_i_35:8;
        RBus_UInt32  regr_lbme_regional_apl_i_34:8;
    };
}kme_lbme_top_kme_lbme_top_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_p_03:8;
        RBus_UInt32  regr_lbme_regional_apl_p_02:8;
        RBus_UInt32  regr_lbme_regional_apl_p_01:8;
        RBus_UInt32  regr_lbme_regional_apl_p_00:8;
    };
}kme_lbme_top_kme_lbme_top_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_p_07:8;
        RBus_UInt32  regr_lbme_regional_apl_p_06:8;
        RBus_UInt32  regr_lbme_regional_apl_p_05:8;
        RBus_UInt32  regr_lbme_regional_apl_p_04:8;
    };
}kme_lbme_top_kme_lbme_top_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_p_13:8;
        RBus_UInt32  regr_lbme_regional_apl_p_12:8;
        RBus_UInt32  regr_lbme_regional_apl_p_11:8;
        RBus_UInt32  regr_lbme_regional_apl_p_10:8;
    };
}kme_lbme_top_kme_lbme_top_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_p_17:8;
        RBus_UInt32  regr_lbme_regional_apl_p_16:8;
        RBus_UInt32  regr_lbme_regional_apl_p_15:8;
        RBus_UInt32  regr_lbme_regional_apl_p_14:8;
    };
}kme_lbme_top_kme_lbme_top_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_p_23:8;
        RBus_UInt32  regr_lbme_regional_apl_p_22:8;
        RBus_UInt32  regr_lbme_regional_apl_p_21:8;
        RBus_UInt32  regr_lbme_regional_apl_p_20:8;
    };
}kme_lbme_top_kme_lbme_top_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_p_27:8;
        RBus_UInt32  regr_lbme_regional_apl_p_26:8;
        RBus_UInt32  regr_lbme_regional_apl_p_25:8;
        RBus_UInt32  regr_lbme_regional_apl_p_24:8;
    };
}kme_lbme_top_kme_lbme_top_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_p_33:8;
        RBus_UInt32  regr_lbme_regional_apl_p_32:8;
        RBus_UInt32  regr_lbme_regional_apl_p_31:8;
        RBus_UInt32  regr_lbme_regional_apl_p_30:8;
    };
}kme_lbme_top_kme_lbme_top_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_p_37:8;
        RBus_UInt32  regr_lbme_regional_apl_p_36:8;
        RBus_UInt32  regr_lbme_regional_apl_p_35:8;
        RBus_UInt32  regr_lbme_regional_apl_p_34:8;
    };
}kme_lbme_top_kme_lbme_top_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_rdbk_i_pos_y_cnt:16;
        RBus_UInt32  regr_lbme_rdbk_i_pos_x_cnt:16;
    };
}kme_lbme_top_kme_lbme_top_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_rdbk_p_pos_y_cnt:16;
        RBus_UInt32  regr_lbme_rdbk_p_pos_x_cnt:16;
    };
}kme_lbme_top_kme_lbme_top_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_lbme_frame_req_error:8;
        RBus_UInt32  regr_lbme_if_req_cnt_latch:16;
    };
}kme_lbme_top_kme_lbme_top_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ipme_fdet_mot_9region0:27;
    };
}kme_lbme_top_kme_lbme_top_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ipme_fdet_mot_9region1:27;
    };
}kme_lbme_top_kme_lbme_top_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ipme_fdet_mot_9region2:27;
    };
}kme_lbme_top_kme_lbme_top_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ipme_fdet_mot_9region3:27;
    };
}kme_lbme_top_kme_lbme_top_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ipme_fdet_mot_9region4:27;
    };
}kme_lbme_top_kme_lbme_top_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ipme_fdet_mot_9region5:27;
    };
}kme_lbme_top_kme_lbme_top_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ipme_fdet_mot_9region6:27;
    };
}kme_lbme_top_kme_lbme_top_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ipme_fdet_mot_9region7:27;
    };
}kme_lbme_top_kme_lbme_top_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ipme_fdet_mot_9region8:27;
    };
}kme_lbme_top_kme_lbme_top_e0_RBUS;

#else //apply LITTLE_ENDIAN

//======KME_LBME_TOP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbme_rim_x_start:11;
        RBus_UInt32  lbme_rim_x_end:11;
        RBus_UInt32  res1:10;
    };
}kme_lbme_top_kme_lbme_top_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbme_rim_y_start:11;
        RBus_UInt32  lbme_rim_y_end:11;
        RBus_UInt32  kme_lbme_sram_ls_en:1;
        RBus_UInt32  kme_lbme_sram_ls_value:1;
        RBus_UInt32  res1:8;
    };
}kme_lbme_top_kme_lbme_top_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbme_debug_blk_x:4;
        RBus_UInt32  lbme_debug_blk_y:3;
        RBus_UInt32  lbme_debug_ip_sel:1;
        RBus_UInt32  lbme_debug_de_cnt:2;
        RBus_UInt32  lbme_debug_patt_en:1;
        RBus_UInt32  lbme_debug_patt_mode:2;
        RBus_UInt32  lbme_debug_patt_data:8;
        RBus_UInt32  lbme_debug_boundary_en:1;
        RBus_UInt32  lbme_debug_rdbk_posxy_en:1;
        RBus_UInt32  lbme_force_linebuf_addr_zero:1;
        RBus_UInt32  lbme_debug_boundary_color:8;
    };
}kme_lbme_top_kme_lbme_top_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbme_i_x_offset:8;
        RBus_UInt32  lbme_i_y_offset:8;
        RBus_UInt32  lbme_p_x_offset:8;
        RBus_UInt32  lbme_p_y_offset:8;
    };
}kme_lbme_top_kme_lbme_top_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbme_debug_x_pos:10;
        RBus_UInt32  lbme_debug_y_pos:10;
        RBus_UInt32  lbme_debug_hact:8;
        RBus_UInt32  lbme_debug_option:1;
        RBus_UInt32  res1:3;
    };
}kme_lbme_top_kme_lbme_top_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbme_total_line_num:10;
        RBus_UInt32  lbme_total_pixel_num:10;
        RBus_UInt32  res1:12;
    };
}kme_lbme_top_kme_lbme_top_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbme_total_linebuf_num:8;
        RBus_UInt32  lbme_prefetch_linebuf_num:8;
        RBus_UInt32  lbme_blk_num_perline:8;
        RBus_UInt32  lbme_line_num_perlinebuf:8;
    };
}kme_lbme_top_kme_lbme_top_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbme_meander_rim_x_start:11;
        RBus_UInt32  lbme_meander_rim_x_end:11;
        RBus_UInt32  res1:10;
    };
}kme_lbme_top_kme_lbme_top_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbme_meander_rim_y_start:11;
        RBus_UInt32  lbme_meander_rim_y_end:11;
        RBus_UInt32  res1:10;
    };
}kme_lbme_top_kme_lbme_top_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbme_regional_apl_en:1;
        RBus_UInt32  res1:31;
    };
}kme_lbme_top_kme_lbme_top_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_i_00:8;
        RBus_UInt32  regr_lbme_regional_apl_i_01:8;
        RBus_UInt32  regr_lbme_regional_apl_i_02:8;
        RBus_UInt32  regr_lbme_regional_apl_i_03:8;
    };
}kme_lbme_top_kme_lbme_top_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_i_04:8;
        RBus_UInt32  regr_lbme_regional_apl_i_05:8;
        RBus_UInt32  regr_lbme_regional_apl_i_06:8;
        RBus_UInt32  regr_lbme_regional_apl_i_07:8;
    };
}kme_lbme_top_kme_lbme_top_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_i_10:8;
        RBus_UInt32  regr_lbme_regional_apl_i_11:8;
        RBus_UInt32  regr_lbme_regional_apl_i_12:8;
        RBus_UInt32  regr_lbme_regional_apl_i_13:8;
    };
}kme_lbme_top_kme_lbme_top_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_i_14:8;
        RBus_UInt32  regr_lbme_regional_apl_i_15:8;
        RBus_UInt32  regr_lbme_regional_apl_i_16:8;
        RBus_UInt32  regr_lbme_regional_apl_i_17:8;
    };
}kme_lbme_top_kme_lbme_top_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_i_20:8;
        RBus_UInt32  regr_lbme_regional_apl_i_21:8;
        RBus_UInt32  regr_lbme_regional_apl_i_22:8;
        RBus_UInt32  regr_lbme_regional_apl_i_23:8;
    };
}kme_lbme_top_kme_lbme_top_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_i_24:8;
        RBus_UInt32  regr_lbme_regional_apl_i_25:8;
        RBus_UInt32  regr_lbme_regional_apl_i_26:8;
        RBus_UInt32  regr_lbme_regional_apl_i_27:8;
    };
}kme_lbme_top_kme_lbme_top_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_i_30:8;
        RBus_UInt32  regr_lbme_regional_apl_i_31:8;
        RBus_UInt32  regr_lbme_regional_apl_i_32:8;
        RBus_UInt32  regr_lbme_regional_apl_i_33:8;
    };
}kme_lbme_top_kme_lbme_top_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_i_34:8;
        RBus_UInt32  regr_lbme_regional_apl_i_35:8;
        RBus_UInt32  regr_lbme_regional_apl_i_36:8;
        RBus_UInt32  regr_lbme_regional_apl_i_37:8;
    };
}kme_lbme_top_kme_lbme_top_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_p_00:8;
        RBus_UInt32  regr_lbme_regional_apl_p_01:8;
        RBus_UInt32  regr_lbme_regional_apl_p_02:8;
        RBus_UInt32  regr_lbme_regional_apl_p_03:8;
    };
}kme_lbme_top_kme_lbme_top_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_p_04:8;
        RBus_UInt32  regr_lbme_regional_apl_p_05:8;
        RBus_UInt32  regr_lbme_regional_apl_p_06:8;
        RBus_UInt32  regr_lbme_regional_apl_p_07:8;
    };
}kme_lbme_top_kme_lbme_top_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_p_10:8;
        RBus_UInt32  regr_lbme_regional_apl_p_11:8;
        RBus_UInt32  regr_lbme_regional_apl_p_12:8;
        RBus_UInt32  regr_lbme_regional_apl_p_13:8;
    };
}kme_lbme_top_kme_lbme_top_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_p_14:8;
        RBus_UInt32  regr_lbme_regional_apl_p_15:8;
        RBus_UInt32  regr_lbme_regional_apl_p_16:8;
        RBus_UInt32  regr_lbme_regional_apl_p_17:8;
    };
}kme_lbme_top_kme_lbme_top_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_p_20:8;
        RBus_UInt32  regr_lbme_regional_apl_p_21:8;
        RBus_UInt32  regr_lbme_regional_apl_p_22:8;
        RBus_UInt32  regr_lbme_regional_apl_p_23:8;
    };
}kme_lbme_top_kme_lbme_top_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_p_24:8;
        RBus_UInt32  regr_lbme_regional_apl_p_25:8;
        RBus_UInt32  regr_lbme_regional_apl_p_26:8;
        RBus_UInt32  regr_lbme_regional_apl_p_27:8;
    };
}kme_lbme_top_kme_lbme_top_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_p_30:8;
        RBus_UInt32  regr_lbme_regional_apl_p_31:8;
        RBus_UInt32  regr_lbme_regional_apl_p_32:8;
        RBus_UInt32  regr_lbme_regional_apl_p_33:8;
    };
}kme_lbme_top_kme_lbme_top_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_regional_apl_p_34:8;
        RBus_UInt32  regr_lbme_regional_apl_p_35:8;
        RBus_UInt32  regr_lbme_regional_apl_p_36:8;
        RBus_UInt32  regr_lbme_regional_apl_p_37:8;
    };
}kme_lbme_top_kme_lbme_top_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_rdbk_i_pos_x_cnt:16;
        RBus_UInt32  regr_lbme_rdbk_i_pos_y_cnt:16;
    };
}kme_lbme_top_kme_lbme_top_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_rdbk_p_pos_x_cnt:16;
        RBus_UInt32  regr_lbme_rdbk_p_pos_y_cnt:16;
    };
}kme_lbme_top_kme_lbme_top_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme_if_req_cnt_latch:16;
        RBus_UInt32  regr_lbme_frame_req_error:8;
        RBus_UInt32  res1:8;
    };
}kme_lbme_top_kme_lbme_top_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fdet_mot_9region0:27;
        RBus_UInt32  res1:5;
    };
}kme_lbme_top_kme_lbme_top_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fdet_mot_9region1:27;
        RBus_UInt32  res1:5;
    };
}kme_lbme_top_kme_lbme_top_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fdet_mot_9region2:27;
        RBus_UInt32  res1:5;
    };
}kme_lbme_top_kme_lbme_top_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fdet_mot_9region3:27;
        RBus_UInt32  res1:5;
    };
}kme_lbme_top_kme_lbme_top_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fdet_mot_9region4:27;
        RBus_UInt32  res1:5;
    };
}kme_lbme_top_kme_lbme_top_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fdet_mot_9region5:27;
        RBus_UInt32  res1:5;
    };
}kme_lbme_top_kme_lbme_top_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fdet_mot_9region6:27;
        RBus_UInt32  res1:5;
    };
}kme_lbme_top_kme_lbme_top_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fdet_mot_9region7:27;
        RBus_UInt32  res1:5;
    };
}kme_lbme_top_kme_lbme_top_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fdet_mot_9region8:27;
        RBus_UInt32  res1:5;
    };
}kme_lbme_top_kme_lbme_top_e0_RBUS;




#endif 


#endif 
