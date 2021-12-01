/**
* @file Merlin5_MEMC_KME_LBME2_TOP
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KME_LBME2_TOP_REG_H_
#define _RBUS_KME_LBME2_TOP_REG_H_

#include "rbus_types.h"



//  KME_LBME2_TOP Register Address
#define  KME_LBME2_TOP_KME_LBME2_TOP_00                                         0x1809C600
#define  KME_LBME2_TOP_KME_LBME2_TOP_00_reg_addr                                 "0xB809C600"
#define  KME_LBME2_TOP_KME_LBME2_TOP_00_reg                                      0xB809C600
#define  KME_LBME2_TOP_KME_LBME2_TOP_00_inst_addr                                "0x0000"
#define  set_KME_LBME2_TOP_KME_LBME2_TOP_00_reg(data)                            (*((volatile unsigned int*)KME_LBME2_TOP_KME_LBME2_TOP_00_reg)=data)
#define  get_KME_LBME2_TOP_KME_LBME2_TOP_00_reg                                  (*((volatile unsigned int*)KME_LBME2_TOP_KME_LBME2_TOP_00_reg))
#define  KME_LBME2_TOP_KME_LBME2_TOP_00_lbme2_rim_x_end_shift                    (11)
#define  KME_LBME2_TOP_KME_LBME2_TOP_00_lbme2_rim_x_start_shift                  (0)
#define  KME_LBME2_TOP_KME_LBME2_TOP_00_lbme2_rim_x_end_mask                     (0x003FF800)
#define  KME_LBME2_TOP_KME_LBME2_TOP_00_lbme2_rim_x_start_mask                   (0x000007FF)
#define  KME_LBME2_TOP_KME_LBME2_TOP_00_lbme2_rim_x_end(data)                    (0x003FF800&((data)<<11))
#define  KME_LBME2_TOP_KME_LBME2_TOP_00_lbme2_rim_x_start(data)                  (0x000007FF&(data))
#define  KME_LBME2_TOP_KME_LBME2_TOP_00_get_lbme2_rim_x_end(data)                ((0x003FF800&(data))>>11)
#define  KME_LBME2_TOP_KME_LBME2_TOP_00_get_lbme2_rim_x_start(data)              (0x000007FF&(data))

#define  KME_LBME2_TOP_KME_LBME2_TOP_04                                         0x1809C604
#define  KME_LBME2_TOP_KME_LBME2_TOP_04_reg_addr                                 "0xB809C604"
#define  KME_LBME2_TOP_KME_LBME2_TOP_04_reg                                      0xB809C604
#define  KME_LBME2_TOP_KME_LBME2_TOP_04_inst_addr                                "0x0001"
#define  set_KME_LBME2_TOP_KME_LBME2_TOP_04_reg(data)                            (*((volatile unsigned int*)KME_LBME2_TOP_KME_LBME2_TOP_04_reg)=data)
#define  get_KME_LBME2_TOP_KME_LBME2_TOP_04_reg                                  (*((volatile unsigned int*)KME_LBME2_TOP_KME_LBME2_TOP_04_reg))
#define  KME_LBME2_TOP_KME_LBME2_TOP_04_kme_lbme2_regional_apl_en_shift          (24)
#define  KME_LBME2_TOP_KME_LBME2_TOP_04_kme_lbme2_sram_ls_value_shift            (23)
#define  KME_LBME2_TOP_KME_LBME2_TOP_04_kme_lbme2_sram_ls_en_shift               (22)
#define  KME_LBME2_TOP_KME_LBME2_TOP_04_lbme2_rim_y_end_shift                    (11)
#define  KME_LBME2_TOP_KME_LBME2_TOP_04_lbme2_rim_y_start_shift                  (0)
#define  KME_LBME2_TOP_KME_LBME2_TOP_04_kme_lbme2_regional_apl_en_mask           (0x01000000)
#define  KME_LBME2_TOP_KME_LBME2_TOP_04_kme_lbme2_sram_ls_value_mask             (0x00800000)
#define  KME_LBME2_TOP_KME_LBME2_TOP_04_kme_lbme2_sram_ls_en_mask                (0x00400000)
#define  KME_LBME2_TOP_KME_LBME2_TOP_04_lbme2_rim_y_end_mask                     (0x003FF800)
#define  KME_LBME2_TOP_KME_LBME2_TOP_04_lbme2_rim_y_start_mask                   (0x000007FF)
#define  KME_LBME2_TOP_KME_LBME2_TOP_04_kme_lbme2_regional_apl_en(data)          (0x01000000&((data)<<24))
#define  KME_LBME2_TOP_KME_LBME2_TOP_04_kme_lbme2_sram_ls_value(data)            (0x00800000&((data)<<23))
#define  KME_LBME2_TOP_KME_LBME2_TOP_04_kme_lbme2_sram_ls_en(data)               (0x00400000&((data)<<22))
#define  KME_LBME2_TOP_KME_LBME2_TOP_04_lbme2_rim_y_end(data)                    (0x003FF800&((data)<<11))
#define  KME_LBME2_TOP_KME_LBME2_TOP_04_lbme2_rim_y_start(data)                  (0x000007FF&(data))
#define  KME_LBME2_TOP_KME_LBME2_TOP_04_get_kme_lbme2_regional_apl_en(data)      ((0x01000000&(data))>>24)
#define  KME_LBME2_TOP_KME_LBME2_TOP_04_get_kme_lbme2_sram_ls_value(data)        ((0x00800000&(data))>>23)
#define  KME_LBME2_TOP_KME_LBME2_TOP_04_get_kme_lbme2_sram_ls_en(data)           ((0x00400000&(data))>>22)
#define  KME_LBME2_TOP_KME_LBME2_TOP_04_get_lbme2_rim_y_end(data)                ((0x003FF800&(data))>>11)
#define  KME_LBME2_TOP_KME_LBME2_TOP_04_get_lbme2_rim_y_start(data)              (0x000007FF&(data))

#define  KME_LBME2_TOP_KME_LBME2_TOP_08                                         0x1809C608
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_reg_addr                                 "0xB809C608"
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_reg                                      0xB809C608
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_inst_addr                                "0x0002"
#define  set_KME_LBME2_TOP_KME_LBME2_TOP_08_reg(data)                            (*((volatile unsigned int*)KME_LBME2_TOP_KME_LBME2_TOP_08_reg)=data)
#define  get_KME_LBME2_TOP_KME_LBME2_TOP_08_reg                                  (*((volatile unsigned int*)KME_LBME2_TOP_KME_LBME2_TOP_08_reg))
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_lbme2_debug_boundary_color_shift         (14)
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_lbme2_force_linebuf_addr_zero_shift      (13)
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_lbme2_debug_rdbk_posxy_en_shift          (12)
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_lbme2_debug_boundary_en_shift            (11)
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_lbme2_debug_patt_data_shift              (3)
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_lbme2_debug_patt_mode_shift              (1)
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_lbme2_debug_patt_en_shift                (0)
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_lbme2_debug_boundary_color_mask          (0x003FC000)
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_lbme2_force_linebuf_addr_zero_mask       (0x00002000)
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_lbme2_debug_rdbk_posxy_en_mask           (0x00001000)
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_lbme2_debug_boundary_en_mask             (0x00000800)
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_lbme2_debug_patt_data_mask               (0x000007F8)
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_lbme2_debug_patt_mode_mask               (0x00000006)
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_lbme2_debug_patt_en_mask                 (0x00000001)
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_lbme2_debug_boundary_color(data)         (0x003FC000&((data)<<14))
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_lbme2_force_linebuf_addr_zero(data)      (0x00002000&((data)<<13))
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_lbme2_debug_rdbk_posxy_en(data)          (0x00001000&((data)<<12))
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_lbme2_debug_boundary_en(data)            (0x00000800&((data)<<11))
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_lbme2_debug_patt_data(data)              (0x000007F8&((data)<<3))
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_lbme2_debug_patt_mode(data)              (0x00000006&((data)<<1))
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_lbme2_debug_patt_en(data)                (0x00000001&(data))
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_get_lbme2_debug_boundary_color(data)     ((0x003FC000&(data))>>14)
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_get_lbme2_force_linebuf_addr_zero(data)  ((0x00002000&(data))>>13)
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_get_lbme2_debug_rdbk_posxy_en(data)      ((0x00001000&(data))>>12)
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_get_lbme2_debug_boundary_en(data)        ((0x00000800&(data))>>11)
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_get_lbme2_debug_patt_data(data)          ((0x000007F8&(data))>>3)
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_get_lbme2_debug_patt_mode(data)          ((0x00000006&(data))>>1)
#define  KME_LBME2_TOP_KME_LBME2_TOP_08_get_lbme2_debug_patt_en(data)            (0x00000001&(data))

#define  KME_LBME2_TOP_KME_LBME2_TOP_0C                                         0x1809C60C
#define  KME_LBME2_TOP_KME_LBME2_TOP_0C_reg_addr                                 "0xB809C60C"
#define  KME_LBME2_TOP_KME_LBME2_TOP_0C_reg                                      0xB809C60C
#define  KME_LBME2_TOP_KME_LBME2_TOP_0C_inst_addr                                "0x0003"
#define  set_KME_LBME2_TOP_KME_LBME2_TOP_0C_reg(data)                            (*((volatile unsigned int*)KME_LBME2_TOP_KME_LBME2_TOP_0C_reg)=data)
#define  get_KME_LBME2_TOP_KME_LBME2_TOP_0C_reg                                  (*((volatile unsigned int*)KME_LBME2_TOP_KME_LBME2_TOP_0C_reg))
#define  KME_LBME2_TOP_KME_LBME2_TOP_0C_lbme2_p_y_offset_shift                   (24)
#define  KME_LBME2_TOP_KME_LBME2_TOP_0C_lbme2_p_x_offset_shift                   (16)
#define  KME_LBME2_TOP_KME_LBME2_TOP_0C_lbme2_i_y_offset_shift                   (8)
#define  KME_LBME2_TOP_KME_LBME2_TOP_0C_lbme2_i_x_offset_shift                   (0)
#define  KME_LBME2_TOP_KME_LBME2_TOP_0C_lbme2_p_y_offset_mask                    (0xFF000000)
#define  KME_LBME2_TOP_KME_LBME2_TOP_0C_lbme2_p_x_offset_mask                    (0x00FF0000)
#define  KME_LBME2_TOP_KME_LBME2_TOP_0C_lbme2_i_y_offset_mask                    (0x0000FF00)
#define  KME_LBME2_TOP_KME_LBME2_TOP_0C_lbme2_i_x_offset_mask                    (0x000000FF)
#define  KME_LBME2_TOP_KME_LBME2_TOP_0C_lbme2_p_y_offset(data)                   (0xFF000000&((data)<<24))
#define  KME_LBME2_TOP_KME_LBME2_TOP_0C_lbme2_p_x_offset(data)                   (0x00FF0000&((data)<<16))
#define  KME_LBME2_TOP_KME_LBME2_TOP_0C_lbme2_i_y_offset(data)                   (0x0000FF00&((data)<<8))
#define  KME_LBME2_TOP_KME_LBME2_TOP_0C_lbme2_i_x_offset(data)                   (0x000000FF&(data))
#define  KME_LBME2_TOP_KME_LBME2_TOP_0C_get_lbme2_p_y_offset(data)               ((0xFF000000&(data))>>24)
#define  KME_LBME2_TOP_KME_LBME2_TOP_0C_get_lbme2_p_x_offset(data)               ((0x00FF0000&(data))>>16)
#define  KME_LBME2_TOP_KME_LBME2_TOP_0C_get_lbme2_i_y_offset(data)               ((0x0000FF00&(data))>>8)
#define  KME_LBME2_TOP_KME_LBME2_TOP_0C_get_lbme2_i_x_offset(data)               (0x000000FF&(data))

#define  KME_LBME2_TOP_KME_LBME2_TOP_10                                         0x1809C610
#define  KME_LBME2_TOP_KME_LBME2_TOP_10_reg_addr                                 "0xB809C610"
#define  KME_LBME2_TOP_KME_LBME2_TOP_10_reg                                      0xB809C610
#define  KME_LBME2_TOP_KME_LBME2_TOP_10_inst_addr                                "0x0004"
#define  set_KME_LBME2_TOP_KME_LBME2_TOP_10_reg(data)                            (*((volatile unsigned int*)KME_LBME2_TOP_KME_LBME2_TOP_10_reg)=data)
#define  get_KME_LBME2_TOP_KME_LBME2_TOP_10_reg                                  (*((volatile unsigned int*)KME_LBME2_TOP_KME_LBME2_TOP_10_reg))
#define  KME_LBME2_TOP_KME_LBME2_TOP_10_lbme2_debug_y_pos_shift                  (10)
#define  KME_LBME2_TOP_KME_LBME2_TOP_10_lbme2_debug_x_pos_shift                  (0)
#define  KME_LBME2_TOP_KME_LBME2_TOP_10_lbme2_debug_y_pos_mask                   (0x000FFC00)
#define  KME_LBME2_TOP_KME_LBME2_TOP_10_lbme2_debug_x_pos_mask                   (0x000003FF)
#define  KME_LBME2_TOP_KME_LBME2_TOP_10_lbme2_debug_y_pos(data)                  (0x000FFC00&((data)<<10))
#define  KME_LBME2_TOP_KME_LBME2_TOP_10_lbme2_debug_x_pos(data)                  (0x000003FF&(data))
#define  KME_LBME2_TOP_KME_LBME2_TOP_10_get_lbme2_debug_y_pos(data)              ((0x000FFC00&(data))>>10)
#define  KME_LBME2_TOP_KME_LBME2_TOP_10_get_lbme2_debug_x_pos(data)              (0x000003FF&(data))

#define  KME_LBME2_TOP_KME_LBME2_TOP_14                                         0x1809C614
#define  KME_LBME2_TOP_KME_LBME2_TOP_14_reg_addr                                 "0xB809C614"
#define  KME_LBME2_TOP_KME_LBME2_TOP_14_reg                                      0xB809C614
#define  KME_LBME2_TOP_KME_LBME2_TOP_14_inst_addr                                "0x0005"
#define  set_KME_LBME2_TOP_KME_LBME2_TOP_14_reg(data)                            (*((volatile unsigned int*)KME_LBME2_TOP_KME_LBME2_TOP_14_reg)=data)
#define  get_KME_LBME2_TOP_KME_LBME2_TOP_14_reg                                  (*((volatile unsigned int*)KME_LBME2_TOP_KME_LBME2_TOP_14_reg))
#define  KME_LBME2_TOP_KME_LBME2_TOP_14_lbme2_total_pixel_num_shift              (10)
#define  KME_LBME2_TOP_KME_LBME2_TOP_14_lbme2_total_line_num_shift               (0)
#define  KME_LBME2_TOP_KME_LBME2_TOP_14_lbme2_total_pixel_num_mask               (0x000FFC00)
#define  KME_LBME2_TOP_KME_LBME2_TOP_14_lbme2_total_line_num_mask                (0x000003FF)
#define  KME_LBME2_TOP_KME_LBME2_TOP_14_lbme2_total_pixel_num(data)              (0x000FFC00&((data)<<10))
#define  KME_LBME2_TOP_KME_LBME2_TOP_14_lbme2_total_line_num(data)               (0x000003FF&(data))
#define  KME_LBME2_TOP_KME_LBME2_TOP_14_get_lbme2_total_pixel_num(data)          ((0x000FFC00&(data))>>10)
#define  KME_LBME2_TOP_KME_LBME2_TOP_14_get_lbme2_total_line_num(data)           (0x000003FF&(data))

#define  KME_LBME2_TOP_KME_LBME2_TOP_18                                         0x1809C618
#define  KME_LBME2_TOP_KME_LBME2_TOP_18_reg_addr                                 "0xB809C618"
#define  KME_LBME2_TOP_KME_LBME2_TOP_18_reg                                      0xB809C618
#define  KME_LBME2_TOP_KME_LBME2_TOP_18_inst_addr                                "0x0006"
#define  set_KME_LBME2_TOP_KME_LBME2_TOP_18_reg(data)                            (*((volatile unsigned int*)KME_LBME2_TOP_KME_LBME2_TOP_18_reg)=data)
#define  get_KME_LBME2_TOP_KME_LBME2_TOP_18_reg                                  (*((volatile unsigned int*)KME_LBME2_TOP_KME_LBME2_TOP_18_reg))
#define  KME_LBME2_TOP_KME_LBME2_TOP_18_lbme2_line_num_perlinebuf_shift          (24)
#define  KME_LBME2_TOP_KME_LBME2_TOP_18_lbme2_blk_num_perline_shift              (16)
#define  KME_LBME2_TOP_KME_LBME2_TOP_18_lbme2_prefetch_linebuf_num_shift         (8)
#define  KME_LBME2_TOP_KME_LBME2_TOP_18_lbme2_total_linebuf_num_shift            (0)
#define  KME_LBME2_TOP_KME_LBME2_TOP_18_lbme2_line_num_perlinebuf_mask           (0xFF000000)
#define  KME_LBME2_TOP_KME_LBME2_TOP_18_lbme2_blk_num_perline_mask               (0x00FF0000)
#define  KME_LBME2_TOP_KME_LBME2_TOP_18_lbme2_prefetch_linebuf_num_mask          (0x0000FF00)
#define  KME_LBME2_TOP_KME_LBME2_TOP_18_lbme2_total_linebuf_num_mask             (0x000000FF)
#define  KME_LBME2_TOP_KME_LBME2_TOP_18_lbme2_line_num_perlinebuf(data)          (0xFF000000&((data)<<24))
#define  KME_LBME2_TOP_KME_LBME2_TOP_18_lbme2_blk_num_perline(data)              (0x00FF0000&((data)<<16))
#define  KME_LBME2_TOP_KME_LBME2_TOP_18_lbme2_prefetch_linebuf_num(data)         (0x0000FF00&((data)<<8))
#define  KME_LBME2_TOP_KME_LBME2_TOP_18_lbme2_total_linebuf_num(data)            (0x000000FF&(data))
#define  KME_LBME2_TOP_KME_LBME2_TOP_18_get_lbme2_line_num_perlinebuf(data)      ((0xFF000000&(data))>>24)
#define  KME_LBME2_TOP_KME_LBME2_TOP_18_get_lbme2_blk_num_perline(data)          ((0x00FF0000&(data))>>16)
#define  KME_LBME2_TOP_KME_LBME2_TOP_18_get_lbme2_prefetch_linebuf_num(data)     ((0x0000FF00&(data))>>8)
#define  KME_LBME2_TOP_KME_LBME2_TOP_18_get_lbme2_total_linebuf_num(data)        (0x000000FF&(data))

#define  KME_LBME2_TOP_KME_LBME2_TOP_20                                         0x1809C620
#define  KME_LBME2_TOP_KME_LBME2_TOP_20_reg_addr                                 "0xB809C620"
#define  KME_LBME2_TOP_KME_LBME2_TOP_20_reg                                      0xB809C620
#define  KME_LBME2_TOP_KME_LBME2_TOP_20_inst_addr                                "0x0007"
#define  set_KME_LBME2_TOP_KME_LBME2_TOP_20_reg(data)                            (*((volatile unsigned int*)KME_LBME2_TOP_KME_LBME2_TOP_20_reg)=data)
#define  get_KME_LBME2_TOP_KME_LBME2_TOP_20_reg                                  (*((volatile unsigned int*)KME_LBME2_TOP_KME_LBME2_TOP_20_reg))
#define  KME_LBME2_TOP_KME_LBME2_TOP_20_lbme2_hd_total_pixel_num_shift           (8)
#define  KME_LBME2_TOP_KME_LBME2_TOP_20_lbme2_hd_total_line_num_shift            (0)
#define  KME_LBME2_TOP_KME_LBME2_TOP_20_lbme2_hd_total_pixel_num_mask            (0x0000FF00)
#define  KME_LBME2_TOP_KME_LBME2_TOP_20_lbme2_hd_total_line_num_mask             (0x000000FF)
#define  KME_LBME2_TOP_KME_LBME2_TOP_20_lbme2_hd_total_pixel_num(data)           (0x0000FF00&((data)<<8))
#define  KME_LBME2_TOP_KME_LBME2_TOP_20_lbme2_hd_total_line_num(data)            (0x000000FF&(data))
#define  KME_LBME2_TOP_KME_LBME2_TOP_20_get_lbme2_hd_total_pixel_num(data)       ((0x0000FF00&(data))>>8)
#define  KME_LBME2_TOP_KME_LBME2_TOP_20_get_lbme2_hd_total_line_num(data)        (0x000000FF&(data))

#define  KME_LBME2_TOP_KME_LBME2_TOP_24                                         0x1809C624
#define  KME_LBME2_TOP_KME_LBME2_TOP_24_reg_addr                                 "0xB809C624"
#define  KME_LBME2_TOP_KME_LBME2_TOP_24_reg                                      0xB809C624
#define  KME_LBME2_TOP_KME_LBME2_TOP_24_inst_addr                                "0x0008"
#define  set_KME_LBME2_TOP_KME_LBME2_TOP_24_reg(data)                            (*((volatile unsigned int*)KME_LBME2_TOP_KME_LBME2_TOP_24_reg)=data)
#define  get_KME_LBME2_TOP_KME_LBME2_TOP_24_reg                                  (*((volatile unsigned int*)KME_LBME2_TOP_KME_LBME2_TOP_24_reg))
#define  KME_LBME2_TOP_KME_LBME2_TOP_24_lbme2_hd_line_num_perlinebuf_shift       (16)
#define  KME_LBME2_TOP_KME_LBME2_TOP_24_lbme2_hd_blk_num_perline_shift           (8)
#define  KME_LBME2_TOP_KME_LBME2_TOP_24_lbme2_hd_prefetch_linebuf_num_shift      (0)
#define  KME_LBME2_TOP_KME_LBME2_TOP_24_lbme2_hd_line_num_perlinebuf_mask        (0x00FF0000)
#define  KME_LBME2_TOP_KME_LBME2_TOP_24_lbme2_hd_blk_num_perline_mask            (0x0000FF00)
#define  KME_LBME2_TOP_KME_LBME2_TOP_24_lbme2_hd_prefetch_linebuf_num_mask       (0x000000FF)
#define  KME_LBME2_TOP_KME_LBME2_TOP_24_lbme2_hd_line_num_perlinebuf(data)       (0x00FF0000&((data)<<16))
#define  KME_LBME2_TOP_KME_LBME2_TOP_24_lbme2_hd_blk_num_perline(data)           (0x0000FF00&((data)<<8))
#define  KME_LBME2_TOP_KME_LBME2_TOP_24_lbme2_hd_prefetch_linebuf_num(data)      (0x000000FF&(data))
#define  KME_LBME2_TOP_KME_LBME2_TOP_24_get_lbme2_hd_line_num_perlinebuf(data)   ((0x00FF0000&(data))>>16)
#define  KME_LBME2_TOP_KME_LBME2_TOP_24_get_lbme2_hd_blk_num_perline(data)       ((0x0000FF00&(data))>>8)
#define  KME_LBME2_TOP_KME_LBME2_TOP_24_get_lbme2_hd_prefetch_linebuf_num(data)  (0x000000FF&(data))

#define  KME_LBME2_TOP_KME_LBME2_TOP_68                                         0x1809C668
#define  KME_LBME2_TOP_KME_LBME2_TOP_68_reg_addr                                 "0xB809C668"
#define  KME_LBME2_TOP_KME_LBME2_TOP_68_reg                                      0xB809C668
#define  KME_LBME2_TOP_KME_LBME2_TOP_68_inst_addr                                "0x0009"
#define  set_KME_LBME2_TOP_KME_LBME2_TOP_68_reg(data)                            (*((volatile unsigned int*)KME_LBME2_TOP_KME_LBME2_TOP_68_reg)=data)
#define  get_KME_LBME2_TOP_KME_LBME2_TOP_68_reg                                  (*((volatile unsigned int*)KME_LBME2_TOP_KME_LBME2_TOP_68_reg))
#define  KME_LBME2_TOP_KME_LBME2_TOP_68_regr_lbme2_rdbk_i_pos_y_cnt_shift        (16)
#define  KME_LBME2_TOP_KME_LBME2_TOP_68_regr_lbme2_rdbk_i_pos_x_cnt_shift        (0)
#define  KME_LBME2_TOP_KME_LBME2_TOP_68_regr_lbme2_rdbk_i_pos_y_cnt_mask         (0xFFFF0000)
#define  KME_LBME2_TOP_KME_LBME2_TOP_68_regr_lbme2_rdbk_i_pos_x_cnt_mask         (0x0000FFFF)
#define  KME_LBME2_TOP_KME_LBME2_TOP_68_regr_lbme2_rdbk_i_pos_y_cnt(data)        (0xFFFF0000&((data)<<16))
#define  KME_LBME2_TOP_KME_LBME2_TOP_68_regr_lbme2_rdbk_i_pos_x_cnt(data)        (0x0000FFFF&(data))
#define  KME_LBME2_TOP_KME_LBME2_TOP_68_get_regr_lbme2_rdbk_i_pos_y_cnt(data)    ((0xFFFF0000&(data))>>16)
#define  KME_LBME2_TOP_KME_LBME2_TOP_68_get_regr_lbme2_rdbk_i_pos_x_cnt(data)    (0x0000FFFF&(data))

#define  KME_LBME2_TOP_KME_LBME2_TOP_6C                                         0x1809C66C
#define  KME_LBME2_TOP_KME_LBME2_TOP_6C_reg_addr                                 "0xB809C66C"
#define  KME_LBME2_TOP_KME_LBME2_TOP_6C_reg                                      0xB809C66C
#define  KME_LBME2_TOP_KME_LBME2_TOP_6C_inst_addr                                "0x000A"
#define  set_KME_LBME2_TOP_KME_LBME2_TOP_6C_reg(data)                            (*((volatile unsigned int*)KME_LBME2_TOP_KME_LBME2_TOP_6C_reg)=data)
#define  get_KME_LBME2_TOP_KME_LBME2_TOP_6C_reg                                  (*((volatile unsigned int*)KME_LBME2_TOP_KME_LBME2_TOP_6C_reg))
#define  KME_LBME2_TOP_KME_LBME2_TOP_6C_regr_lbme2_rdbk_p_pos_y_cnt_shift        (16)
#define  KME_LBME2_TOP_KME_LBME2_TOP_6C_regr_lbme2_rdbk_p_pos_x_cnt_shift        (0)
#define  KME_LBME2_TOP_KME_LBME2_TOP_6C_regr_lbme2_rdbk_p_pos_y_cnt_mask         (0xFFFF0000)
#define  KME_LBME2_TOP_KME_LBME2_TOP_6C_regr_lbme2_rdbk_p_pos_x_cnt_mask         (0x0000FFFF)
#define  KME_LBME2_TOP_KME_LBME2_TOP_6C_regr_lbme2_rdbk_p_pos_y_cnt(data)        (0xFFFF0000&((data)<<16))
#define  KME_LBME2_TOP_KME_LBME2_TOP_6C_regr_lbme2_rdbk_p_pos_x_cnt(data)        (0x0000FFFF&(data))
#define  KME_LBME2_TOP_KME_LBME2_TOP_6C_get_regr_lbme2_rdbk_p_pos_y_cnt(data)    ((0xFFFF0000&(data))>>16)
#define  KME_LBME2_TOP_KME_LBME2_TOP_6C_get_regr_lbme2_rdbk_p_pos_x_cnt(data)    (0x0000FFFF&(data))

#define  KME_LBME2_TOP_KME_LBME2_TOP_70                                         0x1809C670
#define  KME_LBME2_TOP_KME_LBME2_TOP_70_reg_addr                                 "0xB809C670"
#define  KME_LBME2_TOP_KME_LBME2_TOP_70_reg                                      0xB809C670
#define  KME_LBME2_TOP_KME_LBME2_TOP_70_inst_addr                                "0x000B"
#define  set_KME_LBME2_TOP_KME_LBME2_TOP_70_reg(data)                            (*((volatile unsigned int*)KME_LBME2_TOP_KME_LBME2_TOP_70_reg)=data)
#define  get_KME_LBME2_TOP_KME_LBME2_TOP_70_reg                                  (*((volatile unsigned int*)KME_LBME2_TOP_KME_LBME2_TOP_70_reg))
#define  KME_LBME2_TOP_KME_LBME2_TOP_70_regr_lbme2_frame_req_error_shift         (16)
#define  KME_LBME2_TOP_KME_LBME2_TOP_70_regr_lbme2_if_req_cnt_latch_shift        (0)
#define  KME_LBME2_TOP_KME_LBME2_TOP_70_regr_lbme2_frame_req_error_mask          (0x00FF0000)
#define  KME_LBME2_TOP_KME_LBME2_TOP_70_regr_lbme2_if_req_cnt_latch_mask         (0x0000FFFF)
#define  KME_LBME2_TOP_KME_LBME2_TOP_70_regr_lbme2_frame_req_error(data)         (0x00FF0000&((data)<<16))
#define  KME_LBME2_TOP_KME_LBME2_TOP_70_regr_lbme2_if_req_cnt_latch(data)        (0x0000FFFF&(data))
#define  KME_LBME2_TOP_KME_LBME2_TOP_70_get_regr_lbme2_frame_req_error(data)     ((0x00FF0000&(data))>>16)
#define  KME_LBME2_TOP_KME_LBME2_TOP_70_get_regr_lbme2_if_req_cnt_latch(data)    (0x0000FFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KME_LBME2_TOP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  lbme2_rim_x_end:11;
        RBus_UInt32  lbme2_rim_x_start:11;
    };
}kme_lbme2_top_kme_lbme2_top_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  kme_lbme2_regional_apl_en:1;
        RBus_UInt32  kme_lbme2_sram_ls_value:1;
        RBus_UInt32  kme_lbme2_sram_ls_en:1;
        RBus_UInt32  lbme2_rim_y_end:11;
        RBus_UInt32  lbme2_rim_y_start:11;
    };
}kme_lbme2_top_kme_lbme2_top_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  lbme2_debug_boundary_color:8;
        RBus_UInt32  lbme2_force_linebuf_addr_zero:1;
        RBus_UInt32  lbme2_debug_rdbk_posxy_en:1;
        RBus_UInt32  lbme2_debug_boundary_en:1;
        RBus_UInt32  lbme2_debug_patt_data:8;
        RBus_UInt32  lbme2_debug_patt_mode:2;
        RBus_UInt32  lbme2_debug_patt_en:1;
    };
}kme_lbme2_top_kme_lbme2_top_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbme2_p_y_offset:8;
        RBus_UInt32  lbme2_p_x_offset:8;
        RBus_UInt32  lbme2_i_y_offset:8;
        RBus_UInt32  lbme2_i_x_offset:8;
    };
}kme_lbme2_top_kme_lbme2_top_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lbme2_debug_y_pos:10;
        RBus_UInt32  lbme2_debug_x_pos:10;
    };
}kme_lbme2_top_kme_lbme2_top_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lbme2_total_pixel_num:10;
        RBus_UInt32  lbme2_total_line_num:10;
    };
}kme_lbme2_top_kme_lbme2_top_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbme2_line_num_perlinebuf:8;
        RBus_UInt32  lbme2_blk_num_perline:8;
        RBus_UInt32  lbme2_prefetch_linebuf_num:8;
        RBus_UInt32  lbme2_total_linebuf_num:8;
    };
}kme_lbme2_top_kme_lbme2_top_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  lbme2_hd_total_pixel_num:8;
        RBus_UInt32  lbme2_hd_total_line_num:8;
    };
}kme_lbme2_top_kme_lbme2_top_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  lbme2_hd_line_num_perlinebuf:8;
        RBus_UInt32  lbme2_hd_blk_num_perline:8;
        RBus_UInt32  lbme2_hd_prefetch_linebuf_num:8;
    };
}kme_lbme2_top_kme_lbme2_top_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme2_rdbk_i_pos_y_cnt:16;
        RBus_UInt32  regr_lbme2_rdbk_i_pos_x_cnt:16;
    };
}kme_lbme2_top_kme_lbme2_top_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme2_rdbk_p_pos_y_cnt:16;
        RBus_UInt32  regr_lbme2_rdbk_p_pos_x_cnt:16;
    };
}kme_lbme2_top_kme_lbme2_top_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_lbme2_frame_req_error:8;
        RBus_UInt32  regr_lbme2_if_req_cnt_latch:16;
    };
}kme_lbme2_top_kme_lbme2_top_70_RBUS;

#else //apply LITTLE_ENDIAN

//======KME_LBME2_TOP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbme2_rim_x_start:11;
        RBus_UInt32  lbme2_rim_x_end:11;
        RBus_UInt32  res1:10;
    };
}kme_lbme2_top_kme_lbme2_top_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbme2_rim_y_start:11;
        RBus_UInt32  lbme2_rim_y_end:11;
        RBus_UInt32  kme_lbme2_sram_ls_en:1;
        RBus_UInt32  kme_lbme2_sram_ls_value:1;
        RBus_UInt32  kme_lbme2_regional_apl_en:1;
        RBus_UInt32  res1:7;
    };
}kme_lbme2_top_kme_lbme2_top_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbme2_debug_patt_en:1;
        RBus_UInt32  lbme2_debug_patt_mode:2;
        RBus_UInt32  lbme2_debug_patt_data:8;
        RBus_UInt32  lbme2_debug_boundary_en:1;
        RBus_UInt32  lbme2_debug_rdbk_posxy_en:1;
        RBus_UInt32  lbme2_force_linebuf_addr_zero:1;
        RBus_UInt32  lbme2_debug_boundary_color:8;
        RBus_UInt32  res1:10;
    };
}kme_lbme2_top_kme_lbme2_top_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbme2_i_x_offset:8;
        RBus_UInt32  lbme2_i_y_offset:8;
        RBus_UInt32  lbme2_p_x_offset:8;
        RBus_UInt32  lbme2_p_y_offset:8;
    };
}kme_lbme2_top_kme_lbme2_top_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbme2_debug_x_pos:10;
        RBus_UInt32  lbme2_debug_y_pos:10;
        RBus_UInt32  res1:12;
    };
}kme_lbme2_top_kme_lbme2_top_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbme2_total_line_num:10;
        RBus_UInt32  lbme2_total_pixel_num:10;
        RBus_UInt32  res1:12;
    };
}kme_lbme2_top_kme_lbme2_top_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbme2_total_linebuf_num:8;
        RBus_UInt32  lbme2_prefetch_linebuf_num:8;
        RBus_UInt32  lbme2_blk_num_perline:8;
        RBus_UInt32  lbme2_line_num_perlinebuf:8;
    };
}kme_lbme2_top_kme_lbme2_top_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbme2_hd_total_line_num:8;
        RBus_UInt32  lbme2_hd_total_pixel_num:8;
        RBus_UInt32  res1:16;
    };
}kme_lbme2_top_kme_lbme2_top_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbme2_hd_prefetch_linebuf_num:8;
        RBus_UInt32  lbme2_hd_blk_num_perline:8;
        RBus_UInt32  lbme2_hd_line_num_perlinebuf:8;
        RBus_UInt32  res1:8;
    };
}kme_lbme2_top_kme_lbme2_top_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme2_rdbk_i_pos_x_cnt:16;
        RBus_UInt32  regr_lbme2_rdbk_i_pos_y_cnt:16;
    };
}kme_lbme2_top_kme_lbme2_top_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme2_rdbk_p_pos_x_cnt:16;
        RBus_UInt32  regr_lbme2_rdbk_p_pos_y_cnt:16;
    };
}kme_lbme2_top_kme_lbme2_top_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbme2_if_req_cnt_latch:16;
        RBus_UInt32  regr_lbme2_frame_req_error:8;
        RBus_UInt32  res1:8;
    };
}kme_lbme2_top_kme_lbme2_top_70_RBUS;




#endif 


#endif 
