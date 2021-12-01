/**
* @file Merlin5-DesignSpec-D-Domain_DCC
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_COLOR_DCC_REG_H_
#define _RBUS_COLOR_DCC_REG_H_

#include "rbus_types.h"



//  COLOR_DCC Register Address
#define  COLOR_DCC_D_DCC_CTRL                                                   0x1802E400
#define  COLOR_DCC_D_DCC_CTRL_reg_addr                                           "0xB802E400"
#define  COLOR_DCC_D_DCC_CTRL_reg                                                0xB802E400
#define  COLOR_DCC_D_DCC_CTRL_inst_addr                                          "0x0000"
#define  set_COLOR_DCC_D_DCC_CTRL_reg(data)                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_CTRL_reg)=data)
#define  get_COLOR_DCC_D_DCC_CTRL_reg                                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_CTRL_reg))
#define  COLOR_DCC_D_DCC_CTRL_dcc_overlay_shift                                  (31)
#define  COLOR_DCC_D_DCC_CTRL_y_mapping_mode_shift                               (30)
#define  COLOR_DCC_D_DCC_CTRL_y_mapping_blending_wt_shift                        (25)
#define  COLOR_DCC_D_DCC_CTRL_dcc_user_curve_main_en_shift                       (24)
#define  COLOR_DCC_D_DCC_CTRL_dcc_user_curve_sub_en_shift                        (23)
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_2_inside_ratio_msb_shift               (22)
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_1_inside_ratio_msb_shift               (21)
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_0_inside_ratio_msb_shift               (20)
#define  COLOR_DCC_D_DCC_CTRL_main_table_segment_shift                           (19)
#define  COLOR_DCC_D_DCC_CTRL_main_table_sel_shift                               (18)
#define  COLOR_DCC_D_DCC_CTRL_dcc_main_mode_sel_shift                            (16)
#define  COLOR_DCC_D_DCC_CTRL_dummy_15_4_shift                                   (4)
#define  COLOR_DCC_D_DCC_CTRL_sub_table_segment_shift                            (3)
#define  COLOR_DCC_D_DCC_CTRL_sub_table_sel_shift                                (2)
#define  COLOR_DCC_D_DCC_CTRL_dcc_sub_mode_sel_shift                             (0)
#define  COLOR_DCC_D_DCC_CTRL_dcc_overlay_mask                                   (0x80000000)
#define  COLOR_DCC_D_DCC_CTRL_y_mapping_mode_mask                                (0x40000000)
#define  COLOR_DCC_D_DCC_CTRL_y_mapping_blending_wt_mask                         (0x3E000000)
#define  COLOR_DCC_D_DCC_CTRL_dcc_user_curve_main_en_mask                        (0x01000000)
#define  COLOR_DCC_D_DCC_CTRL_dcc_user_curve_sub_en_mask                         (0x00800000)
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_2_inside_ratio_msb_mask                (0x00400000)
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_1_inside_ratio_msb_mask                (0x00200000)
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_0_inside_ratio_msb_mask                (0x00100000)
#define  COLOR_DCC_D_DCC_CTRL_main_table_segment_mask                            (0x00080000)
#define  COLOR_DCC_D_DCC_CTRL_main_table_sel_mask                                (0x00040000)
#define  COLOR_DCC_D_DCC_CTRL_dcc_main_mode_sel_mask                             (0x00030000)
#define  COLOR_DCC_D_DCC_CTRL_dummy_15_4_mask                                    (0x0000FFF0)
#define  COLOR_DCC_D_DCC_CTRL_sub_table_segment_mask                             (0x00000008)
#define  COLOR_DCC_D_DCC_CTRL_sub_table_sel_mask                                 (0x00000004)
#define  COLOR_DCC_D_DCC_CTRL_dcc_sub_mode_sel_mask                              (0x00000003)
#define  COLOR_DCC_D_DCC_CTRL_dcc_overlay(data)                                  (0x80000000&((data)<<31))
#define  COLOR_DCC_D_DCC_CTRL_y_mapping_mode(data)                               (0x40000000&((data)<<30))
#define  COLOR_DCC_D_DCC_CTRL_y_mapping_blending_wt(data)                        (0x3E000000&((data)<<25))
#define  COLOR_DCC_D_DCC_CTRL_dcc_user_curve_main_en(data)                       (0x01000000&((data)<<24))
#define  COLOR_DCC_D_DCC_CTRL_dcc_user_curve_sub_en(data)                        (0x00800000&((data)<<23))
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_2_inside_ratio_msb(data)               (0x00400000&((data)<<22))
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_1_inside_ratio_msb(data)               (0x00200000&((data)<<21))
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_0_inside_ratio_msb(data)               (0x00100000&((data)<<20))
#define  COLOR_DCC_D_DCC_CTRL_main_table_segment(data)                           (0x00080000&((data)<<19))
#define  COLOR_DCC_D_DCC_CTRL_main_table_sel(data)                               (0x00040000&((data)<<18))
#define  COLOR_DCC_D_DCC_CTRL_dcc_main_mode_sel(data)                            (0x00030000&((data)<<16))
#define  COLOR_DCC_D_DCC_CTRL_dummy_15_4(data)                                   (0x0000FFF0&((data)<<4))
#define  COLOR_DCC_D_DCC_CTRL_sub_table_segment(data)                            (0x00000008&((data)<<3))
#define  COLOR_DCC_D_DCC_CTRL_sub_table_sel(data)                                (0x00000004&((data)<<2))
#define  COLOR_DCC_D_DCC_CTRL_dcc_sub_mode_sel(data)                             (0x00000003&(data))
#define  COLOR_DCC_D_DCC_CTRL_get_dcc_overlay(data)                              ((0x80000000&(data))>>31)
#define  COLOR_DCC_D_DCC_CTRL_get_y_mapping_mode(data)                           ((0x40000000&(data))>>30)
#define  COLOR_DCC_D_DCC_CTRL_get_y_mapping_blending_wt(data)                    ((0x3E000000&(data))>>25)
#define  COLOR_DCC_D_DCC_CTRL_get_dcc_user_curve_main_en(data)                   ((0x01000000&(data))>>24)
#define  COLOR_DCC_D_DCC_CTRL_get_dcc_user_curve_sub_en(data)                    ((0x00800000&(data))>>23)
#define  COLOR_DCC_D_DCC_CTRL_get_ai_blending_2_inside_ratio_msb(data)           ((0x00400000&(data))>>22)
#define  COLOR_DCC_D_DCC_CTRL_get_ai_blending_1_inside_ratio_msb(data)           ((0x00200000&(data))>>21)
#define  COLOR_DCC_D_DCC_CTRL_get_ai_blending_0_inside_ratio_msb(data)           ((0x00100000&(data))>>20)
#define  COLOR_DCC_D_DCC_CTRL_get_main_table_segment(data)                       ((0x00080000&(data))>>19)
#define  COLOR_DCC_D_DCC_CTRL_get_main_table_sel(data)                           ((0x00040000&(data))>>18)
#define  COLOR_DCC_D_DCC_CTRL_get_dcc_main_mode_sel(data)                        ((0x00030000&(data))>>16)
#define  COLOR_DCC_D_DCC_CTRL_get_dummy_15_4(data)                               ((0x0000FFF0&(data))>>4)
#define  COLOR_DCC_D_DCC_CTRL_get_sub_table_segment(data)                        ((0x00000008&(data))>>3)
#define  COLOR_DCC_D_DCC_CTRL_get_sub_table_sel(data)                            ((0x00000004&(data))>>2)
#define  COLOR_DCC_D_DCC_CTRL_get_dcc_sub_mode_sel(data)                         (0x00000003&(data))

#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL                                           0x1802E404
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_reg_addr                                   "0xB802E404"
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_reg                                        0xB802E404
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_inst_addr                                  "0x0001"
#define  set_COLOR_DCC_DCC_Y_SRAM_TAB_CTL_reg(data)                              (*((volatile unsigned int*)COLOR_DCC_DCC_Y_SRAM_TAB_CTL_reg)=data)
#define  get_COLOR_DCC_DCC_Y_SRAM_TAB_CTL_reg                                    (*((volatile unsigned int*)COLOR_DCC_DCC_Y_SRAM_TAB_CTL_reg))
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_dcc_y_sram_tab_read_sel_shift              (17)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_dcc_y_sram_tab_acc_index_cur_shift         (11)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_dcc_y_sram_tab_acc_index_shift             (5)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_dcc_y_sram_tab_rw_sel_shift                (3)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_dcc_y_sram_tab_acc_sel_shift               (1)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_dcc_y_sram_tab_acc_ready_shift             (0)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_dcc_y_sram_tab_read_sel_mask               (0x00020000)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_dcc_y_sram_tab_acc_index_cur_mask          (0x0001F800)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_dcc_y_sram_tab_acc_index_mask              (0x000007E0)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_dcc_y_sram_tab_rw_sel_mask                 (0x00000018)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_dcc_y_sram_tab_acc_sel_mask                (0x00000006)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_dcc_y_sram_tab_acc_ready_mask              (0x00000001)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_dcc_y_sram_tab_read_sel(data)              (0x00020000&((data)<<17))
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_dcc_y_sram_tab_acc_index_cur(data)         (0x0001F800&((data)<<11))
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_dcc_y_sram_tab_acc_index(data)             (0x000007E0&((data)<<5))
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_dcc_y_sram_tab_rw_sel(data)                (0x00000018&((data)<<3))
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_dcc_y_sram_tab_acc_sel(data)               (0x00000006&((data)<<1))
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_dcc_y_sram_tab_acc_ready(data)             (0x00000001&(data))
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_get_dcc_y_sram_tab_read_sel(data)          ((0x00020000&(data))>>17)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_get_dcc_y_sram_tab_acc_index_cur(data)     ((0x0001F800&(data))>>11)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_get_dcc_y_sram_tab_acc_index(data)         ((0x000007E0&(data))>>5)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_get_dcc_y_sram_tab_rw_sel(data)            ((0x00000018&(data))>>3)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_get_dcc_y_sram_tab_acc_sel(data)           ((0x00000006&(data))>>1)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_CTL_get_dcc_y_sram_tab_acc_ready(data)         (0x00000001&(data))

#define  COLOR_DCC_DCC_Y_SRAM_TAB_PORT                                          0x1802E408
#define  COLOR_DCC_DCC_Y_SRAM_TAB_PORT_reg_addr                                  "0xB802E408"
#define  COLOR_DCC_DCC_Y_SRAM_TAB_PORT_reg                                       0xB802E408
#define  COLOR_DCC_DCC_Y_SRAM_TAB_PORT_inst_addr                                 "0x0002"
#define  set_COLOR_DCC_DCC_Y_SRAM_TAB_PORT_reg(data)                             (*((volatile unsigned int*)COLOR_DCC_DCC_Y_SRAM_TAB_PORT_reg)=data)
#define  get_COLOR_DCC_DCC_Y_SRAM_TAB_PORT_reg                                   (*((volatile unsigned int*)COLOR_DCC_DCC_Y_SRAM_TAB_PORT_reg))
#define  COLOR_DCC_DCC_Y_SRAM_TAB_PORT_dcc_y_sram_tab_base_shift                 (20)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_PORT_dcc_y_sram_tab_g0_shift                   (10)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_PORT_dcc_y_sram_tab_g1_shift                   (0)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_PORT_dcc_y_sram_tab_base_mask                  (0xFFF00000)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_PORT_dcc_y_sram_tab_g0_mask                    (0x000FFC00)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_PORT_dcc_y_sram_tab_g1_mask                    (0x000003FF)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_PORT_dcc_y_sram_tab_base(data)                 (0xFFF00000&((data)<<20))
#define  COLOR_DCC_DCC_Y_SRAM_TAB_PORT_dcc_y_sram_tab_g0(data)                   (0x000FFC00&((data)<<10))
#define  COLOR_DCC_DCC_Y_SRAM_TAB_PORT_dcc_y_sram_tab_g1(data)                   (0x000003FF&(data))
#define  COLOR_DCC_DCC_Y_SRAM_TAB_PORT_get_dcc_y_sram_tab_base(data)             ((0xFFF00000&(data))>>20)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_PORT_get_dcc_y_sram_tab_g0(data)               ((0x000FFC00&(data))>>10)
#define  COLOR_DCC_DCC_Y_SRAM_TAB_PORT_get_dcc_y_sram_tab_g1(data)               (0x000003FF&(data))

#define  COLOR_DCC_SRAM_USER_TAB_CTL_0                                          0x1802E40C
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_reg_addr                                  "0xB802E40C"
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_reg                                       0xB802E40C
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_inst_addr                                 "0x0003"
#define  set_COLOR_DCC_SRAM_USER_TAB_CTL_0_reg(data)                             (*((volatile unsigned int*)COLOR_DCC_SRAM_USER_TAB_CTL_0_reg)=data)
#define  get_COLOR_DCC_SRAM_USER_TAB_CTL_0_reg                                   (*((volatile unsigned int*)COLOR_DCC_SRAM_USER_TAB_CTL_0_reg))
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_read_sel_shift              (17)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_acc_index_cur_shift         (11)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_acc_index_shift             (5)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_rw_sel_shift                (3)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_acc_sel_shift               (1)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_acc_ready_shift             (0)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_read_sel_mask               (0x00020000)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_acc_index_cur_mask          (0x0001F800)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_acc_index_mask              (0x000007E0)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_rw_sel_mask                 (0x00000018)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_acc_sel_mask                (0x00000006)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_acc_ready_mask              (0x00000001)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_read_sel(data)              (0x00020000&((data)<<17))
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_acc_index_cur(data)         (0x0001F800&((data)<<11))
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_acc_index(data)             (0x000007E0&((data)<<5))
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_rw_sel(data)                (0x00000018&((data)<<3))
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_acc_sel(data)               (0x00000006&((data)<<1))
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_acc_ready(data)             (0x00000001&(data))
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_get_sram_user_tab_read_sel(data)          ((0x00020000&(data))>>17)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_get_sram_user_tab_acc_index_cur(data)     ((0x0001F800&(data))>>11)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_get_sram_user_tab_acc_index(data)         ((0x000007E0&(data))>>5)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_get_sram_user_tab_rw_sel(data)            ((0x00000018&(data))>>3)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_get_sram_user_tab_acc_sel(data)           ((0x00000006&(data))>>1)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_get_sram_user_tab_acc_ready(data)         (0x00000001&(data))

#define  COLOR_DCC_SRAM_USER_TAB_PORT                                           0x1802E410
#define  COLOR_DCC_SRAM_USER_TAB_PORT_reg_addr                                   "0xB802E410"
#define  COLOR_DCC_SRAM_USER_TAB_PORT_reg                                        0xB802E410
#define  COLOR_DCC_SRAM_USER_TAB_PORT_inst_addr                                  "0x0004"
#define  set_COLOR_DCC_SRAM_USER_TAB_PORT_reg(data)                              (*((volatile unsigned int*)COLOR_DCC_SRAM_USER_TAB_PORT_reg)=data)
#define  get_COLOR_DCC_SRAM_USER_TAB_PORT_reg                                    (*((volatile unsigned int*)COLOR_DCC_SRAM_USER_TAB_PORT_reg))
#define  COLOR_DCC_SRAM_USER_TAB_PORT_sram_user_tab_base_shift                   (20)
#define  COLOR_DCC_SRAM_USER_TAB_PORT_sram_user_tab_g0_shift                     (10)
#define  COLOR_DCC_SRAM_USER_TAB_PORT_sram_user_tab_g1_shift                     (0)
#define  COLOR_DCC_SRAM_USER_TAB_PORT_sram_user_tab_base_mask                    (0xFFF00000)
#define  COLOR_DCC_SRAM_USER_TAB_PORT_sram_user_tab_g0_mask                      (0x000FFC00)
#define  COLOR_DCC_SRAM_USER_TAB_PORT_sram_user_tab_g1_mask                      (0x000003FF)
#define  COLOR_DCC_SRAM_USER_TAB_PORT_sram_user_tab_base(data)                   (0xFFF00000&((data)<<20))
#define  COLOR_DCC_SRAM_USER_TAB_PORT_sram_user_tab_g0(data)                     (0x000FFC00&((data)<<10))
#define  COLOR_DCC_SRAM_USER_TAB_PORT_sram_user_tab_g1(data)                     (0x000003FF&(data))
#define  COLOR_DCC_SRAM_USER_TAB_PORT_get_sram_user_tab_base(data)               ((0xFFF00000&(data))>>20)
#define  COLOR_DCC_SRAM_USER_TAB_PORT_get_sram_user_tab_g0(data)                 ((0x000FFC00&(data))>>10)
#define  COLOR_DCC_SRAM_USER_TAB_PORT_get_sram_user_tab_g1(data)                 (0x000003FF&(data))

#define  COLOR_DCC_DCC_CTRL_LUMA                                                0x1802E414
#define  COLOR_DCC_DCC_CTRL_LUMA_reg_addr                                        "0xB802E414"
#define  COLOR_DCC_DCC_CTRL_LUMA_reg                                             0xB802E414
#define  COLOR_DCC_DCC_CTRL_LUMA_inst_addr                                       "0x0005"
#define  set_COLOR_DCC_DCC_CTRL_LUMA_reg(data)                                   (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_LUMA_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_LUMA_reg                                         (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_LUMA_reg))
#define  COLOR_DCC_DCC_CTRL_LUMA_chroma_gain_limit_en_main_shift                 (31)
#define  COLOR_DCC_DCC_CTRL_LUMA_chroma_gain_limit_en_sub_shift                  (30)
#define  COLOR_DCC_DCC_CTRL_LUMA_luma_offset_main_shift                          (16)
#define  COLOR_DCC_DCC_CTRL_LUMA_luma_offset_sub_shift                           (0)
#define  COLOR_DCC_DCC_CTRL_LUMA_chroma_gain_limit_en_main_mask                  (0x80000000)
#define  COLOR_DCC_DCC_CTRL_LUMA_chroma_gain_limit_en_sub_mask                   (0x40000000)
#define  COLOR_DCC_DCC_CTRL_LUMA_luma_offset_main_mask                           (0x03FF0000)
#define  COLOR_DCC_DCC_CTRL_LUMA_luma_offset_sub_mask                            (0x000003FF)
#define  COLOR_DCC_DCC_CTRL_LUMA_chroma_gain_limit_en_main(data)                 (0x80000000&((data)<<31))
#define  COLOR_DCC_DCC_CTRL_LUMA_chroma_gain_limit_en_sub(data)                  (0x40000000&((data)<<30))
#define  COLOR_DCC_DCC_CTRL_LUMA_luma_offset_main(data)                          (0x03FF0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_LUMA_luma_offset_sub(data)                           (0x000003FF&(data))
#define  COLOR_DCC_DCC_CTRL_LUMA_get_chroma_gain_limit_en_main(data)             ((0x80000000&(data))>>31)
#define  COLOR_DCC_DCC_CTRL_LUMA_get_chroma_gain_limit_en_sub(data)              ((0x40000000&(data))>>30)
#define  COLOR_DCC_DCC_CTRL_LUMA_get_luma_offset_main(data)                      ((0x03FF0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_LUMA_get_luma_offset_sub(data)                       (0x000003FF&(data))

#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0                                 0x1802E418
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_reg_addr                         "0xB802E418"
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_reg                              0xB802E418
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_inst_addr                        "0x0006"
#define  set_COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_reg)=data)
#define  get_COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_reg                          (*((volatile unsigned int*)COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_reg))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_chroma_gain_limit_seg4_main_shift (24)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_chroma_gain_limit_seg3_main_shift (18)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_chroma_gain_limit_seg2_main_shift (12)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_chroma_gain_limit_seg1_main_shift (6)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_chroma_gain_limit_seg0_main_shift (0)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_chroma_gain_limit_seg4_main_mask (0x3F000000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_chroma_gain_limit_seg3_main_mask (0x00FC0000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_chroma_gain_limit_seg2_main_mask (0x0003F000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_chroma_gain_limit_seg1_main_mask (0x00000FC0)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_chroma_gain_limit_seg0_main_mask (0x0000003F)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_chroma_gain_limit_seg4_main(data) (0x3F000000&((data)<<24))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_chroma_gain_limit_seg3_main(data) (0x00FC0000&((data)<<18))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_chroma_gain_limit_seg2_main(data) (0x0003F000&((data)<<12))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_chroma_gain_limit_seg1_main(data) (0x00000FC0&((data)<<6))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_chroma_gain_limit_seg0_main(data) (0x0000003F&(data))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_get_chroma_gain_limit_seg4_main(data) ((0x3F000000&(data))>>24)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_get_chroma_gain_limit_seg3_main(data) ((0x00FC0000&(data))>>18)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_get_chroma_gain_limit_seg2_main(data) ((0x0003F000&(data))>>12)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_get_chroma_gain_limit_seg1_main(data) ((0x00000FC0&(data))>>6)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_0_get_chroma_gain_limit_seg0_main(data) (0x0000003F&(data))

#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1                                 0x1802E41C
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_reg_addr                         "0xB802E41C"
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_reg                              0xB802E41C
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_inst_addr                        "0x0007"
#define  set_COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_reg)=data)
#define  get_COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_reg                          (*((volatile unsigned int*)COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_reg))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_chroma_gain_limit_seg9_main_shift (24)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_chroma_gain_limit_seg8_main_shift (18)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_chroma_gain_limit_seg7_main_shift (12)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_chroma_gain_limit_seg6_main_shift (6)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_chroma_gain_limit_seg5_main_shift (0)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_chroma_gain_limit_seg9_main_mask (0x3F000000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_chroma_gain_limit_seg8_main_mask (0x00FC0000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_chroma_gain_limit_seg7_main_mask (0x0003F000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_chroma_gain_limit_seg6_main_mask (0x00000FC0)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_chroma_gain_limit_seg5_main_mask (0x0000003F)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_chroma_gain_limit_seg9_main(data) (0x3F000000&((data)<<24))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_chroma_gain_limit_seg8_main(data) (0x00FC0000&((data)<<18))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_chroma_gain_limit_seg7_main(data) (0x0003F000&((data)<<12))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_chroma_gain_limit_seg6_main(data) (0x00000FC0&((data)<<6))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_chroma_gain_limit_seg5_main(data) (0x0000003F&(data))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_get_chroma_gain_limit_seg9_main(data) ((0x3F000000&(data))>>24)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_get_chroma_gain_limit_seg8_main(data) ((0x00FC0000&(data))>>18)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_get_chroma_gain_limit_seg7_main(data) ((0x0003F000&(data))>>12)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_get_chroma_gain_limit_seg6_main(data) ((0x00000FC0&(data))>>6)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_1_get_chroma_gain_limit_seg5_main(data) (0x0000003F&(data))

#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2                                 0x1802E420
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_reg_addr                         "0xB802E420"
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_reg                              0xB802E420
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_inst_addr                        "0x0008"
#define  set_COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_reg)=data)
#define  get_COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_reg                          (*((volatile unsigned int*)COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_reg))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_chroma_gain_limit_seg14_main_shift (24)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_chroma_gain_limit_seg13_main_shift (18)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_chroma_gain_limit_seg12_main_shift (12)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_chroma_gain_limit_seg11_main_shift (6)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_chroma_gain_limit_seg10_main_shift (0)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_chroma_gain_limit_seg14_main_mask (0x3F000000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_chroma_gain_limit_seg13_main_mask (0x00FC0000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_chroma_gain_limit_seg12_main_mask (0x0003F000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_chroma_gain_limit_seg11_main_mask (0x00000FC0)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_chroma_gain_limit_seg10_main_mask (0x0000003F)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_chroma_gain_limit_seg14_main(data) (0x3F000000&((data)<<24))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_chroma_gain_limit_seg13_main(data) (0x00FC0000&((data)<<18))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_chroma_gain_limit_seg12_main(data) (0x0003F000&((data)<<12))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_chroma_gain_limit_seg11_main(data) (0x00000FC0&((data)<<6))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_chroma_gain_limit_seg10_main(data) (0x0000003F&(data))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_get_chroma_gain_limit_seg14_main(data) ((0x3F000000&(data))>>24)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_get_chroma_gain_limit_seg13_main(data) ((0x00FC0000&(data))>>18)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_get_chroma_gain_limit_seg12_main(data) ((0x0003F000&(data))>>12)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_get_chroma_gain_limit_seg11_main(data) ((0x00000FC0&(data))>>6)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_2_get_chroma_gain_limit_seg10_main(data) (0x0000003F&(data))

#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3                                 0x1802E424
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_reg_addr                         "0xB802E424"
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_reg                              0xB802E424
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_inst_addr                        "0x0009"
#define  set_COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_reg)=data)
#define  get_COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_reg                          (*((volatile unsigned int*)COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_reg))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_chroma_gain_limit_seg19_main_shift (24)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_chroma_gain_limit_seg18_main_shift (18)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_chroma_gain_limit_seg17_main_shift (12)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_chroma_gain_limit_seg16_main_shift (6)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_chroma_gain_limit_seg15_main_shift (0)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_chroma_gain_limit_seg19_main_mask (0x3F000000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_chroma_gain_limit_seg18_main_mask (0x00FC0000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_chroma_gain_limit_seg17_main_mask (0x0003F000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_chroma_gain_limit_seg16_main_mask (0x00000FC0)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_chroma_gain_limit_seg15_main_mask (0x0000003F)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_chroma_gain_limit_seg19_main(data) (0x3F000000&((data)<<24))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_chroma_gain_limit_seg18_main(data) (0x00FC0000&((data)<<18))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_chroma_gain_limit_seg17_main(data) (0x0003F000&((data)<<12))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_chroma_gain_limit_seg16_main(data) (0x00000FC0&((data)<<6))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_chroma_gain_limit_seg15_main(data) (0x0000003F&(data))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_get_chroma_gain_limit_seg19_main(data) ((0x3F000000&(data))>>24)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_get_chroma_gain_limit_seg18_main(data) ((0x00FC0000&(data))>>18)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_get_chroma_gain_limit_seg17_main(data) ((0x0003F000&(data))>>12)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_get_chroma_gain_limit_seg16_main(data) ((0x00000FC0&(data))>>6)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_3_get_chroma_gain_limit_seg15_main(data) (0x0000003F&(data))

#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_4                                 0x1802E428
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_4_reg_addr                         "0xB802E428"
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_4_reg                              0xB802E428
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_4_inst_addr                        "0x000A"
#define  set_COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_4_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_4_reg)=data)
#define  get_COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_4_reg                          (*((volatile unsigned int*)COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_4_reg))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_4_chroma_gain_limit_seg20_main_shift (0)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_4_chroma_gain_limit_seg20_main_mask (0x0000003F)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_4_chroma_gain_limit_seg20_main(data) (0x0000003F&(data))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_MAIN_4_get_chroma_gain_limit_seg20_main(data) (0x0000003F&(data))

#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0                                  0x1802E42C
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_reg_addr                          "0xB802E42C"
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_reg                               0xB802E42C
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_inst_addr                         "0x000B"
#define  set_COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_reg)=data)
#define  get_COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_reg))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_chroma_gain_limit_seg4_sub_shift  (24)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_chroma_gain_limit_seg3_sub_shift  (18)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_chroma_gain_limit_seg2_sub_shift  (12)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_chroma_gain_limit_seg1_sub_shift  (6)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_chroma_gain_limit_seg0_sub_shift  (0)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_chroma_gain_limit_seg4_sub_mask   (0x3F000000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_chroma_gain_limit_seg3_sub_mask   (0x00FC0000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_chroma_gain_limit_seg2_sub_mask   (0x0003F000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_chroma_gain_limit_seg1_sub_mask   (0x00000FC0)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_chroma_gain_limit_seg0_sub_mask   (0x0000003F)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_chroma_gain_limit_seg4_sub(data)  (0x3F000000&((data)<<24))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_chroma_gain_limit_seg3_sub(data)  (0x00FC0000&((data)<<18))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_chroma_gain_limit_seg2_sub(data)  (0x0003F000&((data)<<12))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_chroma_gain_limit_seg1_sub(data)  (0x00000FC0&((data)<<6))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_chroma_gain_limit_seg0_sub(data)  (0x0000003F&(data))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_get_chroma_gain_limit_seg4_sub(data) ((0x3F000000&(data))>>24)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_get_chroma_gain_limit_seg3_sub(data) ((0x00FC0000&(data))>>18)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_get_chroma_gain_limit_seg2_sub(data) ((0x0003F000&(data))>>12)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_get_chroma_gain_limit_seg1_sub(data) ((0x00000FC0&(data))>>6)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_0_get_chroma_gain_limit_seg0_sub(data) (0x0000003F&(data))

#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1                                  0x1802E430
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_reg_addr                          "0xB802E430"
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_reg                               0xB802E430
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_inst_addr                         "0x000C"
#define  set_COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_reg)=data)
#define  get_COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_reg))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_chroma_gain_limit_seg9_sub_shift  (24)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_chroma_gain_limit_seg8_sub_shift  (18)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_chroma_gain_limit_seg7_sub_shift  (12)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_chroma_gain_limit_seg6_sub_shift  (6)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_chroma_gain_limit_seg5_sub_shift  (0)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_chroma_gain_limit_seg9_sub_mask   (0x3F000000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_chroma_gain_limit_seg8_sub_mask   (0x00FC0000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_chroma_gain_limit_seg7_sub_mask   (0x0003F000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_chroma_gain_limit_seg6_sub_mask   (0x00000FC0)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_chroma_gain_limit_seg5_sub_mask   (0x0000003F)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_chroma_gain_limit_seg9_sub(data)  (0x3F000000&((data)<<24))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_chroma_gain_limit_seg8_sub(data)  (0x00FC0000&((data)<<18))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_chroma_gain_limit_seg7_sub(data)  (0x0003F000&((data)<<12))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_chroma_gain_limit_seg6_sub(data)  (0x00000FC0&((data)<<6))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_chroma_gain_limit_seg5_sub(data)  (0x0000003F&(data))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_get_chroma_gain_limit_seg9_sub(data) ((0x3F000000&(data))>>24)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_get_chroma_gain_limit_seg8_sub(data) ((0x00FC0000&(data))>>18)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_get_chroma_gain_limit_seg7_sub(data) ((0x0003F000&(data))>>12)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_get_chroma_gain_limit_seg6_sub(data) ((0x00000FC0&(data))>>6)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_1_get_chroma_gain_limit_seg5_sub(data) (0x0000003F&(data))

#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2                                  0x1802E434
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_reg_addr                          "0xB802E434"
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_reg                               0xB802E434
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_inst_addr                         "0x000D"
#define  set_COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_reg)=data)
#define  get_COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_reg))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_chroma_gain_limit_seg14_sub_shift (24)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_chroma_gain_limit_seg13_sub_shift (18)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_chroma_gain_limit_seg12_sub_shift (12)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_chroma_gain_limit_seg11_sub_shift (6)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_chroma_gain_limit_seg10_sub_shift (0)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_chroma_gain_limit_seg14_sub_mask  (0x3F000000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_chroma_gain_limit_seg13_sub_mask  (0x00FC0000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_chroma_gain_limit_seg12_sub_mask  (0x0003F000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_chroma_gain_limit_seg11_sub_mask  (0x00000FC0)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_chroma_gain_limit_seg10_sub_mask  (0x0000003F)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_chroma_gain_limit_seg14_sub(data) (0x3F000000&((data)<<24))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_chroma_gain_limit_seg13_sub(data) (0x00FC0000&((data)<<18))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_chroma_gain_limit_seg12_sub(data) (0x0003F000&((data)<<12))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_chroma_gain_limit_seg11_sub(data) (0x00000FC0&((data)<<6))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_chroma_gain_limit_seg10_sub(data) (0x0000003F&(data))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_get_chroma_gain_limit_seg14_sub(data) ((0x3F000000&(data))>>24)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_get_chroma_gain_limit_seg13_sub(data) ((0x00FC0000&(data))>>18)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_get_chroma_gain_limit_seg12_sub(data) ((0x0003F000&(data))>>12)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_get_chroma_gain_limit_seg11_sub(data) ((0x00000FC0&(data))>>6)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_2_get_chroma_gain_limit_seg10_sub(data) (0x0000003F&(data))

#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3                                  0x1802E438
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_reg_addr                          "0xB802E438"
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_reg                               0xB802E438
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_inst_addr                         "0x000E"
#define  set_COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_reg)=data)
#define  get_COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_reg))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_chroma_gain_limit_seg19_sub_shift (24)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_chroma_gain_limit_seg18_sub_shift (18)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_chroma_gain_limit_seg17_sub_shift (12)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_chroma_gain_limit_seg16_sub_shift (6)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_chroma_gain_limit_seg15_sub_shift (0)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_chroma_gain_limit_seg19_sub_mask  (0x3F000000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_chroma_gain_limit_seg18_sub_mask  (0x00FC0000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_chroma_gain_limit_seg17_sub_mask  (0x0003F000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_chroma_gain_limit_seg16_sub_mask  (0x00000FC0)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_chroma_gain_limit_seg15_sub_mask  (0x0000003F)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_chroma_gain_limit_seg19_sub(data) (0x3F000000&((data)<<24))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_chroma_gain_limit_seg18_sub(data) (0x00FC0000&((data)<<18))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_chroma_gain_limit_seg17_sub(data) (0x0003F000&((data)<<12))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_chroma_gain_limit_seg16_sub(data) (0x00000FC0&((data)<<6))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_chroma_gain_limit_seg15_sub(data) (0x0000003F&(data))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_get_chroma_gain_limit_seg19_sub(data) ((0x3F000000&(data))>>24)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_get_chroma_gain_limit_seg18_sub(data) ((0x00FC0000&(data))>>18)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_get_chroma_gain_limit_seg17_sub(data) ((0x0003F000&(data))>>12)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_get_chroma_gain_limit_seg16_sub(data) ((0x00000FC0&(data))>>6)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_3_get_chroma_gain_limit_seg15_sub(data) (0x0000003F&(data))

#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_4                                  0x1802E43C
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_4_reg_addr                          "0xB802E43C"
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_4_reg                               0xB802E43C
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_4_inst_addr                         "0x000F"
#define  set_COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_4_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_4_reg)=data)
#define  get_COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_4_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_4_reg))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_4_chroma_gain_limit_seg20_sub_shift (0)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_4_chroma_gain_limit_seg20_sub_mask  (0x0000003F)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_4_chroma_gain_limit_seg20_sub(data) (0x0000003F&(data))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_SUB_4_get_chroma_gain_limit_seg20_sub(data) (0x0000003F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN                                         0x1802E440
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_reg_addr                                 "0xB802E440"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_reg                                      0xB802E440
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_inst_addr                                "0x0010"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_reg(data)                            (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_reg                                  (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_dummy_31_30_shift                        (30)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_saturation_byy_v_tab_select_main_shift   (28)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_saturation_byy_u_tab_select_main_shift   (26)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_enhance_below_tab_select_main_shift (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_enhance_above_tab_select_main_shift (22)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_base_main_shift              (19)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_lookup_mode_main_shift       (18)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_mode_main_shift              (17)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_en_main_shift                (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_dummy_15_14_shift                        (14)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_saturation_byy_v_tab_select_sub_shift    (12)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_saturation_byy_u_tab_select_sub_shift    (10)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_enhance_below_tab_select_sub_shift (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_enhance_above_tab_select_sub_shift (6)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_base_sub_shift               (3)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_lookup_mode_sub_shift        (2)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_mode_sub_shift               (1)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_en_sub_shift                 (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_dummy_31_30_mask                         (0xC0000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_saturation_byy_v_tab_select_main_mask    (0x30000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_saturation_byy_u_tab_select_main_mask    (0x0C000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_enhance_below_tab_select_main_mask (0x03000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_enhance_above_tab_select_main_mask (0x00C00000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_base_main_mask               (0x00380000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_lookup_mode_main_mask        (0x00040000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_mode_main_mask               (0x00020000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_en_main_mask                 (0x00010000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_dummy_15_14_mask                         (0x0000C000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_saturation_byy_v_tab_select_sub_mask     (0x00003000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_saturation_byy_u_tab_select_sub_mask     (0x00000C00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_enhance_below_tab_select_sub_mask (0x00000300)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_enhance_above_tab_select_sub_mask (0x000000C0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_base_sub_mask                (0x00000038)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_lookup_mode_sub_mask         (0x00000004)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_mode_sub_mask                (0x00000002)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_en_sub_mask                  (0x00000001)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_dummy_31_30(data)                        (0xC0000000&((data)<<30))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_saturation_byy_v_tab_select_main(data)   (0x30000000&((data)<<28))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_saturation_byy_u_tab_select_main(data)   (0x0C000000&((data)<<26))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_enhance_below_tab_select_main(data) (0x03000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_enhance_above_tab_select_main(data) (0x00C00000&((data)<<22))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_base_main(data)              (0x00380000&((data)<<19))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_lookup_mode_main(data)       (0x00040000&((data)<<18))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_mode_main(data)              (0x00020000&((data)<<17))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_en_main(data)                (0x00010000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_dummy_15_14(data)                        (0x0000C000&((data)<<14))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_saturation_byy_v_tab_select_sub(data)    (0x00003000&((data)<<12))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_saturation_byy_u_tab_select_sub(data)    (0x00000C00&((data)<<10))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_enhance_below_tab_select_sub(data) (0x00000300&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_enhance_above_tab_select_sub(data) (0x000000C0&((data)<<6))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_base_sub(data)               (0x00000038&((data)<<3))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_lookup_mode_sub(data)        (0x00000004&((data)<<2))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_mode_sub(data)               (0x00000002&((data)<<1))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_en_sub(data)                 (0x00000001&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_dummy_31_30(data)                    ((0xC0000000&(data))>>30)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_saturation_byy_v_tab_select_main(data) ((0x30000000&(data))>>28)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_saturation_byy_u_tab_select_main(data) ((0x0C000000&(data))>>26)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_chroma_enhance_below_tab_select_main(data) ((0x03000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_chroma_enhance_above_tab_select_main(data) ((0x00C00000&(data))>>22)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_chroma_gain_base_main(data)          ((0x00380000&(data))>>19)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_chroma_gain_lookup_mode_main(data)   ((0x00040000&(data))>>18)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_chroma_gain_mode_main(data)          ((0x00020000&(data))>>17)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_chroma_gain_en_main(data)            ((0x00010000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_dummy_15_14(data)                    ((0x0000C000&(data))>>14)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_saturation_byy_v_tab_select_sub(data) ((0x00003000&(data))>>12)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_saturation_byy_u_tab_select_sub(data) ((0x00000C00&(data))>>10)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_chroma_enhance_below_tab_select_sub(data) ((0x00000300&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_chroma_enhance_above_tab_select_sub(data) ((0x000000C0&(data))>>6)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_chroma_gain_base_sub(data)           ((0x00000038&(data))>>3)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_chroma_gain_lookup_mode_sub(data)    ((0x00000004&(data))>>2)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_chroma_gain_mode_sub(data)           ((0x00000002&(data))>>1)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_chroma_gain_en_sub(data)             (0x00000001&(data))

#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL                                           0x1802E444
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_reg_addr                                   "0xB802E444"
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_reg                                        0xB802E444
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_inst_addr                                  "0x0011"
#define  set_COLOR_DCC_DCC_C_SRAM_TAB_CTL_reg(data)                              (*((volatile unsigned int*)COLOR_DCC_DCC_C_SRAM_TAB_CTL_reg)=data)
#define  get_COLOR_DCC_DCC_C_SRAM_TAB_CTL_reg                                    (*((volatile unsigned int*)COLOR_DCC_DCC_C_SRAM_TAB_CTL_reg))
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_dcc_c_sram_tab_read_sel_shift              (16)
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_dcc_c_sram_tab_acc_index_cur_shift         (11)
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_dcc_c_sram_tab_acc_index_shift             (6)
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_dcc_c_sram_tab_rw_sel_shift                (4)
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_dcc_c_sram_tab_acc_sel_shift               (1)
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_dcc_c_sram_tab_acc_ready_shift             (0)
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_dcc_c_sram_tab_read_sel_mask               (0x00010000)
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_dcc_c_sram_tab_acc_index_cur_mask          (0x0000F800)
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_dcc_c_sram_tab_acc_index_mask              (0x000007C0)
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_dcc_c_sram_tab_rw_sel_mask                 (0x00000030)
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_dcc_c_sram_tab_acc_sel_mask                (0x0000000E)
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_dcc_c_sram_tab_acc_ready_mask              (0x00000001)
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_dcc_c_sram_tab_read_sel(data)              (0x00010000&((data)<<16))
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_dcc_c_sram_tab_acc_index_cur(data)         (0x0000F800&((data)<<11))
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_dcc_c_sram_tab_acc_index(data)             (0x000007C0&((data)<<6))
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_dcc_c_sram_tab_rw_sel(data)                (0x00000030&((data)<<4))
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_dcc_c_sram_tab_acc_sel(data)               (0x0000000E&((data)<<1))
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_dcc_c_sram_tab_acc_ready(data)             (0x00000001&(data))
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_get_dcc_c_sram_tab_read_sel(data)          ((0x00010000&(data))>>16)
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_get_dcc_c_sram_tab_acc_index_cur(data)     ((0x0000F800&(data))>>11)
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_get_dcc_c_sram_tab_acc_index(data)         ((0x000007C0&(data))>>6)
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_get_dcc_c_sram_tab_rw_sel(data)            ((0x00000030&(data))>>4)
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_get_dcc_c_sram_tab_acc_sel(data)           ((0x0000000E&(data))>>1)
#define  COLOR_DCC_DCC_C_SRAM_TAB_CTL_get_dcc_c_sram_tab_acc_ready(data)         (0x00000001&(data))

#define  COLOR_DCC_DCC_C_SRAM_TAB_PORT                                          0x1802E448
#define  COLOR_DCC_DCC_C_SRAM_TAB_PORT_reg_addr                                  "0xB802E448"
#define  COLOR_DCC_DCC_C_SRAM_TAB_PORT_reg                                       0xB802E448
#define  COLOR_DCC_DCC_C_SRAM_TAB_PORT_inst_addr                                 "0x0012"
#define  set_COLOR_DCC_DCC_C_SRAM_TAB_PORT_reg(data)                             (*((volatile unsigned int*)COLOR_DCC_DCC_C_SRAM_TAB_PORT_reg)=data)
#define  get_COLOR_DCC_DCC_C_SRAM_TAB_PORT_reg                                   (*((volatile unsigned int*)COLOR_DCC_DCC_C_SRAM_TAB_PORT_reg))
#define  COLOR_DCC_DCC_C_SRAM_TAB_PORT_dcc_c_sram_tab_base_shift                 (14)
#define  COLOR_DCC_DCC_C_SRAM_TAB_PORT_dcc_c_sram_tab_g0_shift                   (7)
#define  COLOR_DCC_DCC_C_SRAM_TAB_PORT_dcc_c_sram_tab_g1_shift                   (0)
#define  COLOR_DCC_DCC_C_SRAM_TAB_PORT_dcc_c_sram_tab_base_mask                  (0x001FC000)
#define  COLOR_DCC_DCC_C_SRAM_TAB_PORT_dcc_c_sram_tab_g0_mask                    (0x00003F80)
#define  COLOR_DCC_DCC_C_SRAM_TAB_PORT_dcc_c_sram_tab_g1_mask                    (0x0000007F)
#define  COLOR_DCC_DCC_C_SRAM_TAB_PORT_dcc_c_sram_tab_base(data)                 (0x001FC000&((data)<<14))
#define  COLOR_DCC_DCC_C_SRAM_TAB_PORT_dcc_c_sram_tab_g0(data)                   (0x00003F80&((data)<<7))
#define  COLOR_DCC_DCC_C_SRAM_TAB_PORT_dcc_c_sram_tab_g1(data)                   (0x0000007F&(data))
#define  COLOR_DCC_DCC_C_SRAM_TAB_PORT_get_dcc_c_sram_tab_base(data)             ((0x001FC000&(data))>>14)
#define  COLOR_DCC_DCC_C_SRAM_TAB_PORT_get_dcc_c_sram_tab_g0(data)               ((0x00003F80&(data))>>7)
#define  COLOR_DCC_DCC_C_SRAM_TAB_PORT_get_dcc_c_sram_tab_g1(data)               (0x0000007F&(data))

#define  COLOR_DCC_D_DCC_DB_CTRL                                                0x1802E44C
#define  COLOR_DCC_D_DCC_DB_CTRL_reg_addr                                        "0xB802E44C"
#define  COLOR_DCC_D_DCC_DB_CTRL_reg                                             0xB802E44C
#define  COLOR_DCC_D_DCC_DB_CTRL_inst_addr                                       "0x0013"
#define  set_COLOR_DCC_D_DCC_DB_CTRL_reg(data)                                   (*((volatile unsigned int*)COLOR_DCC_D_DCC_DB_CTRL_reg)=data)
#define  get_COLOR_DCC_D_DCC_DB_CTRL_reg                                         (*((volatile unsigned int*)COLOR_DCC_D_DCC_DB_CTRL_reg))
#define  COLOR_DCC_D_DCC_DB_CTRL_db_en_shift                                     (2)
#define  COLOR_DCC_D_DCC_DB_CTRL_db_read_level_shift                             (1)
#define  COLOR_DCC_D_DCC_DB_CTRL_db_apply_shift                                  (0)
#define  COLOR_DCC_D_DCC_DB_CTRL_db_en_mask                                      (0x00000004)
#define  COLOR_DCC_D_DCC_DB_CTRL_db_read_level_mask                              (0x00000002)
#define  COLOR_DCC_D_DCC_DB_CTRL_db_apply_mask                                   (0x00000001)
#define  COLOR_DCC_D_DCC_DB_CTRL_db_en(data)                                     (0x00000004&((data)<<2))
#define  COLOR_DCC_D_DCC_DB_CTRL_db_read_level(data)                             (0x00000002&((data)<<1))
#define  COLOR_DCC_D_DCC_DB_CTRL_db_apply(data)                                  (0x00000001&(data))
#define  COLOR_DCC_D_DCC_DB_CTRL_get_db_en(data)                                 ((0x00000004&(data))>>2)
#define  COLOR_DCC_D_DCC_DB_CTRL_get_db_read_level(data)                         ((0x00000002&(data))>>1)
#define  COLOR_DCC_D_DCC_DB_CTRL_get_db_apply(data)                              (0x00000001&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_EN                                           0x1802E450
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_reg_addr                                   "0xB802E450"
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_reg                                        0xB802E450
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_inst_addr                                  "0x0014"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_EN_reg(data)                              (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_EN_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_EN_reg                                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_EN_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_region_ratio_blending_en_shift             (22)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_colorspace_sel_shift                       (21)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_data_format_sel_shift                      (20)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_data_range_sel_shift                       (19)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_debug_mode_en_shift             (18)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_debug_mode_sel_shift            (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_mode_shift                      (12)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_ratio_lpf_en_shift                         (11)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_5_enhance_en_shift              (10)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_4_enhance_en_shift              (9)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_0_enhance_en_shift              (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_1_enhance_en_shift              (7)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_2_enhance_en_shift              (6)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_3_enhance_en_shift              (5)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_reg0_en_shift                   (4)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_reg1_en_shift                   (3)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_reg2_en_shift                   (2)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_reg3_en_shift                   (1)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_en_shift                        (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_region_ratio_blending_en_mask              (0x00400000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_colorspace_sel_mask                        (0x00200000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_data_format_sel_mask                       (0x00100000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_data_range_sel_mask                        (0x00080000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_debug_mode_en_mask              (0x00040000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_debug_mode_sel_mask             (0x00030000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_mode_mask                       (0x00001000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_ratio_lpf_en_mask                          (0x00000800)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_5_enhance_en_mask               (0x00000400)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_4_enhance_en_mask               (0x00000200)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_0_enhance_en_mask               (0x00000100)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_1_enhance_en_mask               (0x00000080)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_2_enhance_en_mask               (0x00000040)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_3_enhance_en_mask               (0x00000020)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_reg0_en_mask                    (0x00000010)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_reg1_en_mask                    (0x00000008)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_reg2_en_mask                    (0x00000004)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_reg3_en_mask                    (0x00000002)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_en_mask                         (0x00000001)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_region_ratio_blending_en(data)             (0x00400000&((data)<<22))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_colorspace_sel(data)                       (0x00200000&((data)<<21))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_data_format_sel(data)                      (0x00100000&((data)<<20))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_data_range_sel(data)                       (0x00080000&((data)<<19))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_debug_mode_en(data)             (0x00040000&((data)<<18))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_debug_mode_sel(data)            (0x00030000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_mode(data)                      (0x00001000&((data)<<12))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_ratio_lpf_en(data)                         (0x00000800&((data)<<11))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_5_enhance_en(data)              (0x00000400&((data)<<10))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_4_enhance_en(data)              (0x00000200&((data)<<9))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_0_enhance_en(data)              (0x00000100&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_1_enhance_en(data)              (0x00000080&((data)<<7))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_2_enhance_en(data)              (0x00000040&((data)<<6))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_3_enhance_en(data)              (0x00000020&((data)<<5))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_reg0_en(data)                   (0x00000010&((data)<<4))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_reg1_en(data)                   (0x00000008&((data)<<3))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_reg2_en(data)                   (0x00000004&((data)<<2))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_reg3_en(data)                   (0x00000002&((data)<<1))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_en(data)                        (0x00000001&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_region_ratio_blending_en(data)         ((0x00400000&(data))>>22)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_colorspace_sel(data)                   ((0x00200000&(data))>>21)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_data_format_sel(data)                  ((0x00100000&(data))>>20)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_data_range_sel(data)                   ((0x00080000&(data))>>19)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_debug_mode_en(data)         ((0x00040000&(data))>>18)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_debug_mode_sel(data)        ((0x00030000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_mode(data)                  ((0x00001000&(data))>>12)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_ratio_lpf_en(data)                     ((0x00000800&(data))>>11)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_5_enhance_en(data)          ((0x00000400&(data))>>10)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_4_enhance_en(data)          ((0x00000200&(data))>>9)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_0_enhance_en(data)          ((0x00000100&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_1_enhance_en(data)          ((0x00000080&(data))>>7)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_2_enhance_en(data)          ((0x00000040&(data))>>6)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_3_enhance_en(data)          ((0x00000020&(data))>>5)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_reg0_en(data)               ((0x00000010&(data))>>4)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_reg1_en(data)               ((0x00000008&(data))>>3)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_reg2_en(data)               ((0x00000004&(data))>>2)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_reg3_en(data)               ((0x00000002&(data))>>1)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_en(data)                    (0x00000001&(data))

#define  COLOR_DCC_D_DCC_MAIN_OFFSET                                            0x1802E454
#define  COLOR_DCC_D_DCC_MAIN_OFFSET_reg_addr                                    "0xB802E454"
#define  COLOR_DCC_D_DCC_MAIN_OFFSET_reg                                         0xB802E454
#define  COLOR_DCC_D_DCC_MAIN_OFFSET_inst_addr                                   "0x0015"
#define  set_COLOR_DCC_D_DCC_MAIN_OFFSET_reg(data)                               (*((volatile unsigned int*)COLOR_DCC_D_DCC_MAIN_OFFSET_reg)=data)
#define  get_COLOR_DCC_D_DCC_MAIN_OFFSET_reg                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_MAIN_OFFSET_reg))
#define  COLOR_DCC_D_DCC_MAIN_OFFSET_main_offset_en_shift                        (24)
#define  COLOR_DCC_D_DCC_MAIN_OFFSET_main_offset_range_shift                     (16)
#define  COLOR_DCC_D_DCC_MAIN_OFFSET_main_offset_shift                           (0)
#define  COLOR_DCC_D_DCC_MAIN_OFFSET_main_offset_en_mask                         (0x01000000)
#define  COLOR_DCC_D_DCC_MAIN_OFFSET_main_offset_range_mask                      (0x00070000)
#define  COLOR_DCC_D_DCC_MAIN_OFFSET_main_offset_mask                            (0x000007FF)
#define  COLOR_DCC_D_DCC_MAIN_OFFSET_main_offset_en(data)                        (0x01000000&((data)<<24))
#define  COLOR_DCC_D_DCC_MAIN_OFFSET_main_offset_range(data)                     (0x00070000&((data)<<16))
#define  COLOR_DCC_D_DCC_MAIN_OFFSET_main_offset(data)                           (0x000007FF&(data))
#define  COLOR_DCC_D_DCC_MAIN_OFFSET_get_main_offset_en(data)                    ((0x01000000&(data))>>24)
#define  COLOR_DCC_D_DCC_MAIN_OFFSET_get_main_offset_range(data)                 ((0x00070000&(data))>>16)
#define  COLOR_DCC_D_DCC_MAIN_OFFSET_get_main_offset(data)                       (0x000007FF&(data))

#define  COLOR_DCC_D_DCC_SUB_OFFSET                                             0x1802E458
#define  COLOR_DCC_D_DCC_SUB_OFFSET_reg_addr                                     "0xB802E458"
#define  COLOR_DCC_D_DCC_SUB_OFFSET_reg                                          0xB802E458
#define  COLOR_DCC_D_DCC_SUB_OFFSET_inst_addr                                    "0x0016"
#define  set_COLOR_DCC_D_DCC_SUB_OFFSET_reg(data)                                (*((volatile unsigned int*)COLOR_DCC_D_DCC_SUB_OFFSET_reg)=data)
#define  get_COLOR_DCC_D_DCC_SUB_OFFSET_reg                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_SUB_OFFSET_reg))
#define  COLOR_DCC_D_DCC_SUB_OFFSET_sub_offset_en_shift                          (24)
#define  COLOR_DCC_D_DCC_SUB_OFFSET_sub_offset_range_shift                       (16)
#define  COLOR_DCC_D_DCC_SUB_OFFSET_sub_offset_shift                             (0)
#define  COLOR_DCC_D_DCC_SUB_OFFSET_sub_offset_en_mask                           (0x01000000)
#define  COLOR_DCC_D_DCC_SUB_OFFSET_sub_offset_range_mask                        (0x00070000)
#define  COLOR_DCC_D_DCC_SUB_OFFSET_sub_offset_mask                              (0x000007FF)
#define  COLOR_DCC_D_DCC_SUB_OFFSET_sub_offset_en(data)                          (0x01000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SUB_OFFSET_sub_offset_range(data)                       (0x00070000&((data)<<16))
#define  COLOR_DCC_D_DCC_SUB_OFFSET_sub_offset(data)                             (0x000007FF&(data))
#define  COLOR_DCC_D_DCC_SUB_OFFSET_get_sub_offset_en(data)                      ((0x01000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SUB_OFFSET_get_sub_offset_range(data)                   ((0x00070000&(data))>>16)
#define  COLOR_DCC_D_DCC_SUB_OFFSET_get_sub_offset(data)                         (0x000007FF&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_0                         0x1802E45C
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_0_reg_addr                 "0xB802E45C"
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_0_reg                      0xB802E45C
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_0_inst_addr                "0x0017"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_0_reg(data)            (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_0_reg                  (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_0_y_blending_0_h_center_width_shift (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_0_y_blending_0_h_center_width_mask (0x00000FFF)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_0_y_blending_0_h_center_width(data) (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_0_get_y_blending_0_h_center_width(data) (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_1                         0x1802E460
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_1_reg_addr                 "0xB802E460"
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_1_reg                      0xB802E460
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_1_inst_addr                "0x0018"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_1_reg(data)            (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_1_reg                  (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_1_y_blending_0_i_center_width_shift (12)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_1_y_blending_0_s_center_width_shift (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_1_y_blending_0_i_center_width_mask (0x00FFF000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_1_y_blending_0_s_center_width_mask (0x00000FFF)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_1_y_blending_0_i_center_width(data) (0x00FFF000&((data)<<12))
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_1_y_blending_0_s_center_width(data) (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_1_get_y_blending_0_i_center_width(data) ((0x00FFF000&(data))>>12)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_0_CENTER_WIDTH_1_get_y_blending_0_s_center_width(data) (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_0                         0x1802E464
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_0_reg_addr                 "0xB802E464"
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_0_reg                      0xB802E464
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_0_inst_addr                "0x0019"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_0_reg(data)            (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_0_reg                  (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_0_y_blending_1_h_center_width_shift (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_0_y_blending_1_h_center_width_mask (0x00000FFF)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_0_y_blending_1_h_center_width(data) (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_0_get_y_blending_1_h_center_width(data) (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_1                         0x1802E468
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_1_reg_addr                 "0xB802E468"
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_1_reg                      0xB802E468
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_1_inst_addr                "0x001A"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_1_reg(data)            (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_1_reg                  (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_1_y_blending_1_i_center_width_shift (12)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_1_y_blending_1_s_center_width_shift (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_1_y_blending_1_i_center_width_mask (0x00FFF000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_1_y_blending_1_s_center_width_mask (0x00000FFF)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_1_y_blending_1_i_center_width(data) (0x00FFF000&((data)<<12))
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_1_y_blending_1_s_center_width(data) (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_1_get_y_blending_1_i_center_width(data) ((0x00FFF000&(data))>>12)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_1_CENTER_WIDTH_1_get_y_blending_1_s_center_width(data) (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_0                         0x1802E46C
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_0_reg_addr                 "0xB802E46C"
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_0_reg                      0xB802E46C
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_0_inst_addr                "0x001B"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_0_reg(data)            (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_0_reg                  (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_0_y_blending_2_h_center_width_shift (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_0_y_blending_2_h_center_width_mask (0x00000FFF)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_0_y_blending_2_h_center_width(data) (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_0_get_y_blending_2_h_center_width(data) (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_1                         0x1802E470
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_1_reg_addr                 "0xB802E470"
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_1_reg                      0xB802E470
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_1_inst_addr                "0x001C"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_1_reg(data)            (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_1_reg                  (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_1_y_blending_2_i_center_width_shift (12)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_1_y_blending_2_s_center_width_shift (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_1_y_blending_2_i_center_width_mask (0x00FFF000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_1_y_blending_2_s_center_width_mask (0x00000FFF)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_1_y_blending_2_i_center_width(data) (0x00FFF000&((data)<<12))
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_1_y_blending_2_s_center_width(data) (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_1_get_y_blending_2_i_center_width(data) ((0x00FFF000&(data))>>12)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_2_CENTER_WIDTH_1_get_y_blending_2_s_center_width(data) (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_0                         0x1802E474
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_0_reg_addr                 "0xB802E474"
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_0_reg                      0xB802E474
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_0_inst_addr                "0x001D"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_0_reg(data)            (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_0_reg                  (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_0_y_blending_3_h_center_width_shift (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_0_y_blending_3_h_center_width_mask (0x00000FFF)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_0_y_blending_3_h_center_width(data) (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_0_get_y_blending_3_h_center_width(data) (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_1                         0x1802E478
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_1_reg_addr                 "0xB802E478"
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_1_reg                      0xB802E478
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_1_inst_addr                "0x001E"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_1_reg(data)            (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_1_reg                  (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_1_y_blending_3_i_center_width_shift (12)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_1_y_blending_3_s_center_width_shift (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_1_y_blending_3_i_center_width_mask (0x00FFF000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_1_y_blending_3_s_center_width_mask (0x00000FFF)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_1_y_blending_3_i_center_width(data) (0x00FFF000&((data)<<12))
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_1_y_blending_3_s_center_width(data) (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_1_get_y_blending_3_i_center_width(data) ((0x00FFF000&(data))>>12)
#define  COLOR_DCC_D_DCC_SKIN_TONE_HSI_3_CENTER_WIDTH_1_get_y_blending_3_s_center_width(data) (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0                                 0x1802E47C
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_reg_addr                         "0xB802E47C"
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_reg                              0xB802E47C
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_inst_addr                        "0x001F"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_y_blending_0_u_center_shift      (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_y_blending_0_v_center_shift      (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_y_blending_0_u_center_mask       (0x1FFF0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_y_blending_0_v_center_mask       (0x00001FFF)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_y_blending_0_u_center(data)      (0x1FFF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_y_blending_0_v_center(data)      (0x00001FFF&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_get_y_blending_0_u_center(data)  ((0x1FFF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_get_y_blending_0_v_center(data)  (0x00001FFF&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0                                  0x1802E480
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_reg_addr                          "0xB802E480"
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_reg                               0xB802E480
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_inst_addr                         "0x0020"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_reg                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_y_blending_0_y_center_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_y_blending_0_y_range_shift        (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_y_blending_0_u_range_shift        (4)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_y_blending_0_v_range_shift        (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_y_blending_0_y_center_mask        (0x1FFF0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_y_blending_0_y_range_mask         (0x00000F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_y_blending_0_u_range_mask         (0x000000F0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_y_blending_0_v_range_mask         (0x0000000F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_y_blending_0_y_center(data)       (0x1FFF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_y_blending_0_y_range(data)        (0x00000F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_y_blending_0_u_range(data)        (0x000000F0&((data)<<4))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_y_blending_0_v_range(data)        (0x0000000F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_get_y_blending_0_y_center(data)   ((0x1FFF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_get_y_blending_0_y_range(data)    ((0x00000F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_get_y_blending_0_u_range(data)    ((0x000000F0&(data))>>4)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_get_y_blending_0_v_range(data)    (0x0000000F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1                                 0x1802E484
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_reg_addr                         "0xB802E484"
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_reg                              0xB802E484
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_inst_addr                        "0x0021"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_y_blending_1_u_center_shift      (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_y_blending_1_v_center_shift      (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_y_blending_1_u_center_mask       (0x1FFF0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_y_blending_1_v_center_mask       (0x00001FFF)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_y_blending_1_u_center(data)      (0x1FFF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_y_blending_1_v_center(data)      (0x00001FFF&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_get_y_blending_1_u_center(data)  ((0x1FFF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_get_y_blending_1_v_center(data)  (0x00001FFF&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1                                  0x1802E488
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_reg_addr                          "0xB802E488"
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_reg                               0xB802E488
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_inst_addr                         "0x0022"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_reg                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_y_blending_1_y_center_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_y_blending_1_y_range_shift        (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_y_blending_1_u_range_shift        (4)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_y_blending_1_v_range_shift        (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_y_blending_1_y_center_mask        (0x1FFF0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_y_blending_1_y_range_mask         (0x00000F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_y_blending_1_u_range_mask         (0x000000F0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_y_blending_1_v_range_mask         (0x0000000F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_y_blending_1_y_center(data)       (0x1FFF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_y_blending_1_y_range(data)        (0x00000F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_y_blending_1_u_range(data)        (0x000000F0&((data)<<4))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_y_blending_1_v_range(data)        (0x0000000F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_get_y_blending_1_y_center(data)   ((0x1FFF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_get_y_blending_1_y_range(data)    ((0x00000F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_get_y_blending_1_u_range(data)    ((0x000000F0&(data))>>4)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_get_y_blending_1_v_range(data)    (0x0000000F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2                                 0x1802E48C
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_reg_addr                         "0xB802E48C"
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_reg                              0xB802E48C
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_inst_addr                        "0x0023"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_y_blending_2_u_center_shift      (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_y_blending_2_v_center_shift      (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_y_blending_2_u_center_mask       (0x1FFF0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_y_blending_2_v_center_mask       (0x00001FFF)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_y_blending_2_u_center(data)      (0x1FFF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_y_blending_2_v_center(data)      (0x00001FFF&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_get_y_blending_2_u_center(data)  ((0x1FFF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_get_y_blending_2_v_center(data)  (0x00001FFF&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2                                  0x1802E490
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_reg_addr                          "0xB802E490"
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_reg                               0xB802E490
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_inst_addr                         "0x0024"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_reg                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_y_blending_2_y_center_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_y_blending_2_y_range_shift        (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_y_blending_2_u_range_shift        (4)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_y_blending_2_v_range_shift        (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_y_blending_2_y_center_mask        (0x1FFF0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_y_blending_2_y_range_mask         (0x00000F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_y_blending_2_u_range_mask         (0x000000F0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_y_blending_2_v_range_mask         (0x0000000F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_y_blending_2_y_center(data)       (0x1FFF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_y_blending_2_y_range(data)        (0x00000F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_y_blending_2_u_range(data)        (0x000000F0&((data)<<4))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_y_blending_2_v_range(data)        (0x0000000F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_get_y_blending_2_y_center(data)   ((0x1FFF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_get_y_blending_2_y_range(data)    ((0x00000F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_get_y_blending_2_u_range(data)    ((0x000000F0&(data))>>4)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_get_y_blending_2_v_range(data)    (0x0000000F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3                                 0x1802E494
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_reg_addr                         "0xB802E494"
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_reg                              0xB802E494
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_inst_addr                        "0x0025"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_y_blending_3_u_center_shift      (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_y_blending_3_v_center_shift      (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_y_blending_3_u_center_mask       (0x1FFF0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_y_blending_3_v_center_mask       (0x00001FFF)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_y_blending_3_u_center(data)      (0x1FFF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_y_blending_3_v_center(data)      (0x00001FFF&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_get_y_blending_3_u_center(data)  ((0x1FFF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_get_y_blending_3_v_center(data)  (0x00001FFF&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3                                  0x1802E498
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_reg_addr                          "0xB802E498"
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_reg                               0xB802E498
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_inst_addr                         "0x0026"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_reg                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_y_blending_3_y_center_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_y_blending_3_y_range_shift        (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_y_blending_3_u_range_shift        (4)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_y_blending_3_v_range_shift        (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_y_blending_3_y_center_mask        (0x1FFF0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_y_blending_3_y_range_mask         (0x00000F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_y_blending_3_u_range_mask         (0x000000F0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_y_blending_3_v_range_mask         (0x0000000F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_y_blending_3_y_center(data)       (0x1FFF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_y_blending_3_y_range(data)        (0x00000F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_y_blending_3_u_range(data)        (0x000000F0&((data)<<4))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_y_blending_3_v_range(data)        (0x0000000F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_get_y_blending_3_y_center(data)   ((0x1FFF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_get_y_blending_3_y_range(data)    ((0x00000F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_get_y_blending_3_u_range(data)    ((0x000000F0&(data))>>4)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_get_y_blending_3_v_range(data)    (0x0000000F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0                                   0x1802E49C
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_reg_addr                           "0xB802E49C"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_reg                                0xB802E49C
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_inst_addr                          "0x0027"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_reg(data)                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_reg                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_y_blending_0_ratio_0_shift         (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_y_blending_0_ratio_1_shift         (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_y_blending_0_ratio_2_shift         (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_y_blending_0_ratio_3_shift         (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_y_blending_0_ratio_0_mask          (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_y_blending_0_ratio_1_mask          (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_y_blending_0_ratio_2_mask          (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_y_blending_0_ratio_3_mask          (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_y_blending_0_ratio_0(data)         (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_y_blending_0_ratio_1(data)         (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_y_blending_0_ratio_2(data)         (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_y_blending_0_ratio_3(data)         (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_get_y_blending_0_ratio_0(data)     ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_get_y_blending_0_ratio_1(data)     ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_get_y_blending_0_ratio_2(data)     ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_get_y_blending_0_ratio_3(data)     (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1                                   0x1802E4A0
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_reg_addr                           "0xB802E4A0"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_reg                                0xB802E4A0
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_inst_addr                          "0x0028"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_reg(data)                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_reg                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_y_blending_0_ratio_4_shift         (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_y_blending_0_ratio_5_shift         (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_y_blending_0_ratio_6_shift         (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_y_blending_0_ratio_7_shift         (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_y_blending_0_ratio_4_mask          (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_y_blending_0_ratio_5_mask          (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_y_blending_0_ratio_6_mask          (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_y_blending_0_ratio_7_mask          (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_y_blending_0_ratio_4(data)         (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_y_blending_0_ratio_5(data)         (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_y_blending_0_ratio_6(data)         (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_y_blending_0_ratio_7(data)         (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_get_y_blending_0_ratio_4(data)     ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_get_y_blending_0_ratio_5(data)     ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_get_y_blending_0_ratio_6(data)     ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_get_y_blending_0_ratio_7(data)     (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0                                   0x1802E4A4
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_reg_addr                           "0xB802E4A4"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_reg                                0xB802E4A4
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_inst_addr                          "0x0029"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_reg(data)                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_reg                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_y_blending_1_ratio_0_shift         (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_y_blending_1_ratio_1_shift         (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_y_blending_1_ratio_2_shift         (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_y_blending_1_ratio_3_shift         (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_y_blending_1_ratio_0_mask          (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_y_blending_1_ratio_1_mask          (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_y_blending_1_ratio_2_mask          (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_y_blending_1_ratio_3_mask          (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_y_blending_1_ratio_0(data)         (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_y_blending_1_ratio_1(data)         (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_y_blending_1_ratio_2(data)         (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_y_blending_1_ratio_3(data)         (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_get_y_blending_1_ratio_0(data)     ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_get_y_blending_1_ratio_1(data)     ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_get_y_blending_1_ratio_2(data)     ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_get_y_blending_1_ratio_3(data)     (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1                                   0x1802E4A8
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_reg_addr                           "0xB802E4A8"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_reg                                0xB802E4A8
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_inst_addr                          "0x002A"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_reg(data)                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_reg                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_y_blending_1_ratio_4_shift         (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_y_blending_1_ratio_5_shift         (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_y_blending_1_ratio_6_shift         (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_y_blending_1_ratio_7_shift         (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_y_blending_1_ratio_4_mask          (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_y_blending_1_ratio_5_mask          (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_y_blending_1_ratio_6_mask          (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_y_blending_1_ratio_7_mask          (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_y_blending_1_ratio_4(data)         (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_y_blending_1_ratio_5(data)         (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_y_blending_1_ratio_6(data)         (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_y_blending_1_ratio_7(data)         (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_get_y_blending_1_ratio_4(data)     ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_get_y_blending_1_ratio_5(data)     ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_get_y_blending_1_ratio_6(data)     ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_get_y_blending_1_ratio_7(data)     (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0                                   0x1802E4AC
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_reg_addr                           "0xB802E4AC"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_reg                                0xB802E4AC
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_inst_addr                          "0x002B"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_reg(data)                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_reg                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_y_blending_2_ratio_0_shift         (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_y_blending_2_ratio_1_shift         (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_y_blending_2_ratio_2_shift         (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_y_blending_2_ratio_3_shift         (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_y_blending_2_ratio_0_mask          (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_y_blending_2_ratio_1_mask          (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_y_blending_2_ratio_2_mask          (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_y_blending_2_ratio_3_mask          (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_y_blending_2_ratio_0(data)         (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_y_blending_2_ratio_1(data)         (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_y_blending_2_ratio_2(data)         (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_y_blending_2_ratio_3(data)         (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_get_y_blending_2_ratio_0(data)     ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_get_y_blending_2_ratio_1(data)     ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_get_y_blending_2_ratio_2(data)     ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_get_y_blending_2_ratio_3(data)     (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1                                   0x1802E4B0
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_reg_addr                           "0xB802E4B0"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_reg                                0xB802E4B0
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_inst_addr                          "0x002C"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_reg(data)                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_reg                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_y_blending_2_ratio_4_shift         (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_y_blending_2_ratio_5_shift         (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_y_blending_2_ratio_6_shift         (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_y_blending_2_ratio_7_shift         (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_y_blending_2_ratio_4_mask          (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_y_blending_2_ratio_5_mask          (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_y_blending_2_ratio_6_mask          (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_y_blending_2_ratio_7_mask          (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_y_blending_2_ratio_4(data)         (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_y_blending_2_ratio_5(data)         (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_y_blending_2_ratio_6(data)         (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_y_blending_2_ratio_7(data)         (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_get_y_blending_2_ratio_4(data)     ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_get_y_blending_2_ratio_5(data)     ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_get_y_blending_2_ratio_6(data)     ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_get_y_blending_2_ratio_7(data)     (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0                                   0x1802E4B4
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_reg_addr                           "0xB802E4B4"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_reg                                0xB802E4B4
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_inst_addr                          "0x002D"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_reg(data)                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_reg                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_y_blending_3_ratio_0_shift         (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_y_blending_3_ratio_1_shift         (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_y_blending_3_ratio_2_shift         (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_y_blending_3_ratio_3_shift         (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_y_blending_3_ratio_0_mask          (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_y_blending_3_ratio_1_mask          (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_y_blending_3_ratio_2_mask          (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_y_blending_3_ratio_3_mask          (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_y_blending_3_ratio_0(data)         (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_y_blending_3_ratio_1(data)         (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_y_blending_3_ratio_2(data)         (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_y_blending_3_ratio_3(data)         (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_get_y_blending_3_ratio_0(data)     ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_get_y_blending_3_ratio_1(data)     ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_get_y_blending_3_ratio_2(data)     ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_get_y_blending_3_ratio_3(data)     (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1                                   0x1802E4B8
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_reg_addr                           "0xB802E4B8"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_reg                                0xB802E4B8
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_inst_addr                          "0x002E"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_reg(data)                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_reg                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_y_blending_3_ratio_4_shift         (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_y_blending_3_ratio_5_shift         (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_y_blending_3_ratio_6_shift         (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_y_blending_3_ratio_7_shift         (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_y_blending_3_ratio_4_mask          (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_y_blending_3_ratio_5_mask          (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_y_blending_3_ratio_6_mask          (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_y_blending_3_ratio_7_mask          (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_y_blending_3_ratio_4(data)         (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_y_blending_3_ratio_5(data)         (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_y_blending_3_ratio_6(data)         (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_y_blending_3_ratio_7(data)         (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_get_y_blending_3_ratio_4(data)     ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_get_y_blending_3_ratio_5(data)     ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_get_y_blending_3_ratio_6(data)     ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_get_y_blending_3_ratio_7(data)     (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0                                 0x1802E4BC
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_reg_addr                         "0xB802E4BC"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_reg                              0xB802E4BC
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_inst_addr                        "0x002F"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_c_blending_0_ratio_0_shift       (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_c_blending_0_ratio_1_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_c_blending_0_ratio_2_shift       (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_c_blending_0_ratio_3_shift       (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_c_blending_0_ratio_0_mask        (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_c_blending_0_ratio_1_mask        (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_c_blending_0_ratio_2_mask        (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_c_blending_0_ratio_3_mask        (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_c_blending_0_ratio_0(data)       (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_c_blending_0_ratio_1(data)       (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_c_blending_0_ratio_2(data)       (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_c_blending_0_ratio_3(data)       (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_get_c_blending_0_ratio_0(data)   ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_get_c_blending_0_ratio_1(data)   ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_get_c_blending_0_ratio_2(data)   ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_get_c_blending_0_ratio_3(data)   (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1                                 0x1802E4C0
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_reg_addr                         "0xB802E4C0"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_reg                              0xB802E4C0
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_inst_addr                        "0x0030"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_c_blending_0_ratio_4_shift       (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_c_blending_0_ratio_5_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_c_blending_0_ratio_6_shift       (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_c_blending_0_ratio_7_shift       (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_c_blending_0_ratio_4_mask        (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_c_blending_0_ratio_5_mask        (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_c_blending_0_ratio_6_mask        (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_c_blending_0_ratio_7_mask        (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_c_blending_0_ratio_4(data)       (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_c_blending_0_ratio_5(data)       (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_c_blending_0_ratio_6(data)       (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_c_blending_0_ratio_7(data)       (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_get_c_blending_0_ratio_4(data)   ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_get_c_blending_0_ratio_5(data)   ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_get_c_blending_0_ratio_6(data)   ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_get_c_blending_0_ratio_7(data)   (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0                                 0x1802E4C4
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_reg_addr                         "0xB802E4C4"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_reg                              0xB802E4C4
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_inst_addr                        "0x0031"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_c_blending_1_ratio_0_shift       (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_c_blending_1_ratio_1_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_c_blending_1_ratio_2_shift       (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_c_blending_1_ratio_3_shift       (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_c_blending_1_ratio_0_mask        (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_c_blending_1_ratio_1_mask        (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_c_blending_1_ratio_2_mask        (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_c_blending_1_ratio_3_mask        (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_c_blending_1_ratio_0(data)       (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_c_blending_1_ratio_1(data)       (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_c_blending_1_ratio_2(data)       (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_c_blending_1_ratio_3(data)       (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_get_c_blending_1_ratio_0(data)   ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_get_c_blending_1_ratio_1(data)   ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_get_c_blending_1_ratio_2(data)   ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_get_c_blending_1_ratio_3(data)   (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1                                 0x1802E4C8
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_reg_addr                         "0xB802E4C8"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_reg                              0xB802E4C8
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_inst_addr                        "0x0032"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_c_blending_1_ratio_4_shift       (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_c_blending_1_ratio_5_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_c_blending_1_ratio_6_shift       (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_c_blending_1_ratio_7_shift       (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_c_blending_1_ratio_4_mask        (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_c_blending_1_ratio_5_mask        (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_c_blending_1_ratio_6_mask        (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_c_blending_1_ratio_7_mask        (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_c_blending_1_ratio_4(data)       (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_c_blending_1_ratio_5(data)       (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_c_blending_1_ratio_6(data)       (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_c_blending_1_ratio_7(data)       (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_get_c_blending_1_ratio_4(data)   ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_get_c_blending_1_ratio_5(data)   ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_get_c_blending_1_ratio_6(data)   ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_get_c_blending_1_ratio_7(data)   (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0                                 0x1802E4CC
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_reg_addr                         "0xB802E4CC"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_reg                              0xB802E4CC
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_inst_addr                        "0x0033"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_c_blending_2_ratio_0_shift       (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_c_blending_2_ratio_1_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_c_blending_2_ratio_2_shift       (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_c_blending_2_ratio_3_shift       (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_c_blending_2_ratio_0_mask        (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_c_blending_2_ratio_1_mask        (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_c_blending_2_ratio_2_mask        (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_c_blending_2_ratio_3_mask        (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_c_blending_2_ratio_0(data)       (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_c_blending_2_ratio_1(data)       (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_c_blending_2_ratio_2(data)       (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_c_blending_2_ratio_3(data)       (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_get_c_blending_2_ratio_0(data)   ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_get_c_blending_2_ratio_1(data)   ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_get_c_blending_2_ratio_2(data)   ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_get_c_blending_2_ratio_3(data)   (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1                                 0x1802E4D0
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_reg_addr                         "0xB802E4D0"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_reg                              0xB802E4D0
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_inst_addr                        "0x0034"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_c_blending_2_ratio_4_shift       (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_c_blending_2_ratio_5_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_c_blending_2_ratio_6_shift       (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_c_blending_2_ratio_7_shift       (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_c_blending_2_ratio_4_mask        (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_c_blending_2_ratio_5_mask        (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_c_blending_2_ratio_6_mask        (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_c_blending_2_ratio_7_mask        (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_c_blending_2_ratio_4(data)       (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_c_blending_2_ratio_5(data)       (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_c_blending_2_ratio_6(data)       (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_c_blending_2_ratio_7(data)       (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_get_c_blending_2_ratio_4(data)   ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_get_c_blending_2_ratio_5(data)   ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_get_c_blending_2_ratio_6(data)   ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_get_c_blending_2_ratio_7(data)   (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0                                 0x1802E4D4
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_reg_addr                         "0xB802E4D4"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_reg                              0xB802E4D4
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_inst_addr                        "0x0035"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_c_blending_3_ratio_0_shift       (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_c_blending_3_ratio_1_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_c_blending_3_ratio_2_shift       (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_c_blending_3_ratio_3_shift       (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_c_blending_3_ratio_0_mask        (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_c_blending_3_ratio_1_mask        (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_c_blending_3_ratio_2_mask        (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_c_blending_3_ratio_3_mask        (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_c_blending_3_ratio_0(data)       (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_c_blending_3_ratio_1(data)       (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_c_blending_3_ratio_2(data)       (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_c_blending_3_ratio_3(data)       (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_get_c_blending_3_ratio_0(data)   ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_get_c_blending_3_ratio_1(data)   ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_get_c_blending_3_ratio_2(data)   ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_get_c_blending_3_ratio_3(data)   (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1                                 0x1802E4D8
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_reg_addr                         "0xB802E4D8"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_reg                              0xB802E4D8
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_inst_addr                        "0x0036"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_c_blending_3_ratio_4_shift       (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_c_blending_3_ratio_5_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_c_blending_3_ratio_6_shift       (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_c_blending_3_ratio_7_shift       (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_c_blending_3_ratio_4_mask        (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_c_blending_3_ratio_5_mask        (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_c_blending_3_ratio_6_mask        (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_c_blending_3_ratio_7_mask        (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_c_blending_3_ratio_4(data)       (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_c_blending_3_ratio_5(data)       (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_c_blending_3_ratio_6(data)       (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_c_blending_3_ratio_7(data)       (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_get_c_blending_3_ratio_4(data)   ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_get_c_blending_3_ratio_5(data)   ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_get_c_blending_3_ratio_6(data)   ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_get_c_blending_3_ratio_7(data)   (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_CDS_SKIN_0                                             0x1802E500
#define  COLOR_DCC_D_DCC_CDS_SKIN_0_reg_addr                                     "0xB802E500"
#define  COLOR_DCC_D_DCC_CDS_SKIN_0_reg                                          0xB802E500
#define  COLOR_DCC_D_DCC_CDS_SKIN_0_inst_addr                                    "0x0037"
#define  set_COLOR_DCC_D_DCC_CDS_SKIN_0_reg(data)                                (*((volatile unsigned int*)COLOR_DCC_D_DCC_CDS_SKIN_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_CDS_SKIN_0_reg                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_CDS_SKIN_0_reg))
#define  COLOR_DCC_D_DCC_CDS_SKIN_0_cds_skin_en_shift                            (0)
#define  COLOR_DCC_D_DCC_CDS_SKIN_0_cds_skin_en_mask                             (0x00000001)
#define  COLOR_DCC_D_DCC_CDS_SKIN_0_cds_skin_en(data)                            (0x00000001&(data))
#define  COLOR_DCC_D_DCC_CDS_SKIN_0_get_cds_skin_en(data)                        (0x00000001&(data))

#define  COLOR_DCC_D_DCC_CDS_SKIN_1                                             0x1802E504
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_reg_addr                                     "0xB802E504"
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_reg                                          0xB802E504
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_inst_addr                                    "0x0038"
#define  set_COLOR_DCC_D_DCC_CDS_SKIN_1_reg(data)                                (*((volatile unsigned int*)COLOR_DCC_D_DCC_CDS_SKIN_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_CDS_SKIN_1_reg                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_CDS_SKIN_1_reg))
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_cds_uv_range_1_shift                         (12)
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_cds_uv_range_0_shift                         (0)
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_cds_uv_range_1_mask                          (0x00FFF000)
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_cds_uv_range_0_mask                          (0x00000FFF)
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_cds_uv_range_1(data)                         (0x00FFF000&((data)<<12))
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_cds_uv_range_0(data)                         (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_get_cds_uv_range_1(data)                     ((0x00FFF000&(data))>>12)
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_get_cds_uv_range_0(data)                     (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_CDS_SKIN_2                                             0x1802E578
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_reg_addr                                     "0xB802E578"
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_reg                                          0xB802E578
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_inst_addr                                    "0x0039"
#define  set_COLOR_DCC_D_DCC_CDS_SKIN_2_reg(data)                                (*((volatile unsigned int*)COLOR_DCC_D_DCC_CDS_SKIN_2_reg)=data)
#define  get_COLOR_DCC_D_DCC_CDS_SKIN_2_reg                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_CDS_SKIN_2_reg))
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_cds_uv_range_3_shift                         (12)
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_cds_uv_range_2_shift                         (0)
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_cds_uv_range_3_mask                          (0x00FFF000)
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_cds_uv_range_2_mask                          (0x00000FFF)
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_cds_uv_range_3(data)                         (0x00FFF000&((data)<<12))
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_cds_uv_range_2(data)                         (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_get_cds_uv_range_3(data)                     ((0x00FFF000&(data))>>12)
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_get_cds_uv_range_2(data)                     (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_CDS_SKIN_3                                             0x1802E57C
#define  COLOR_DCC_D_DCC_CDS_SKIN_3_reg_addr                                     "0xB802E57C"
#define  COLOR_DCC_D_DCC_CDS_SKIN_3_reg                                          0xB802E57C
#define  COLOR_DCC_D_DCC_CDS_SKIN_3_inst_addr                                    "0x003A"
#define  set_COLOR_DCC_D_DCC_CDS_SKIN_3_reg(data)                                (*((volatile unsigned int*)COLOR_DCC_D_DCC_CDS_SKIN_3_reg)=data)
#define  get_COLOR_DCC_D_DCC_CDS_SKIN_3_reg                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_CDS_SKIN_3_reg))
#define  COLOR_DCC_D_DCC_CDS_SKIN_3_cds_uv_range_5_shift                         (12)
#define  COLOR_DCC_D_DCC_CDS_SKIN_3_cds_uv_range_4_shift                         (0)
#define  COLOR_DCC_D_DCC_CDS_SKIN_3_cds_uv_range_5_mask                          (0x00FFF000)
#define  COLOR_DCC_D_DCC_CDS_SKIN_3_cds_uv_range_4_mask                          (0x00000FFF)
#define  COLOR_DCC_D_DCC_CDS_SKIN_3_cds_uv_range_5(data)                         (0x00FFF000&((data)<<12))
#define  COLOR_DCC_D_DCC_CDS_SKIN_3_cds_uv_range_4(data)                         (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_CDS_SKIN_3_get_cds_uv_range_5(data)                     ((0x00FFF000&(data))>>12)
#define  COLOR_DCC_D_DCC_CDS_SKIN_3_get_cds_uv_range_4(data)                     (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0                                 0x1802E508
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_reg_addr                         "0xB802E508"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_reg                              0xB802E508
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_inst_addr                        "0x003B"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_c_blending_4_ratio_0_shift       (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_c_blending_4_ratio_1_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_c_blending_4_ratio_2_shift       (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_c_blending_4_ratio_3_shift       (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_c_blending_4_ratio_0_mask        (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_c_blending_4_ratio_1_mask        (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_c_blending_4_ratio_2_mask        (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_c_blending_4_ratio_3_mask        (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_c_blending_4_ratio_0(data)       (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_c_blending_4_ratio_1(data)       (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_c_blending_4_ratio_2(data)       (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_c_blending_4_ratio_3(data)       (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_get_c_blending_4_ratio_0(data)   ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_get_c_blending_4_ratio_1(data)   ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_get_c_blending_4_ratio_2(data)   ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_get_c_blending_4_ratio_3(data)   (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1                                 0x1802E50C
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_reg_addr                         "0xB802E50C"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_reg                              0xB802E50C
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_inst_addr                        "0x003C"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_c_blending_4_ratio_4_shift       (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_c_blending_4_ratio_5_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_c_blending_4_ratio_6_shift       (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_c_blending_4_ratio_7_shift       (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_c_blending_4_ratio_4_mask        (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_c_blending_4_ratio_5_mask        (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_c_blending_4_ratio_6_mask        (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_c_blending_4_ratio_7_mask        (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_c_blending_4_ratio_4(data)       (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_c_blending_4_ratio_5(data)       (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_c_blending_4_ratio_6(data)       (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_c_blending_4_ratio_7(data)       (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_get_c_blending_4_ratio_4(data)   ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_get_c_blending_4_ratio_5(data)   ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_get_c_blending_4_ratio_6(data)   ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_get_c_blending_4_ratio_7(data)   (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0                                 0x1802E510
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_reg_addr                         "0xB802E510"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_reg                              0xB802E510
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_inst_addr                        "0x003D"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_c_blending_5_ratio_0_shift       (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_c_blending_5_ratio_1_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_c_blending_5_ratio_2_shift       (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_c_blending_5_ratio_3_shift       (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_c_blending_5_ratio_0_mask        (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_c_blending_5_ratio_1_mask        (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_c_blending_5_ratio_2_mask        (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_c_blending_5_ratio_3_mask        (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_c_blending_5_ratio_0(data)       (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_c_blending_5_ratio_1(data)       (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_c_blending_5_ratio_2(data)       (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_c_blending_5_ratio_3(data)       (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_get_c_blending_5_ratio_0(data)   ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_get_c_blending_5_ratio_1(data)   ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_get_c_blending_5_ratio_2(data)   ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_get_c_blending_5_ratio_3(data)   (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1                                 0x1802E514
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_reg_addr                         "0xB802E514"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_reg                              0xB802E514
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_inst_addr                        "0x003E"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_c_blending_5_ratio_4_shift       (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_c_blending_5_ratio_5_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_c_blending_5_ratio_6_shift       (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_c_blending_5_ratio_7_shift       (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_c_blending_5_ratio_4_mask        (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_c_blending_5_ratio_5_mask        (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_c_blending_5_ratio_6_mask        (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_c_blending_5_ratio_7_mask        (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_c_blending_5_ratio_4(data)       (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_c_blending_5_ratio_5(data)       (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_c_blending_5_ratio_6(data)       (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_c_blending_5_ratio_7(data)       (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_get_c_blending_5_ratio_4(data)   ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_get_c_blending_5_ratio_5(data)   ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_get_c_blending_5_ratio_6(data)   ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_get_c_blending_5_ratio_7(data)   (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_AI_0                                                   0x1802E518
#define  COLOR_DCC_D_DCC_AI_0_reg_addr                                           "0xB802E518"
#define  COLOR_DCC_D_DCC_AI_0_reg                                                0xB802E518
#define  COLOR_DCC_D_DCC_AI_0_inst_addr                                          "0x003F"
#define  set_COLOR_DCC_D_DCC_AI_0_reg(data)                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_0_reg                                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_0_reg))
#define  COLOR_DCC_D_DCC_AI_0_ai_ros_en_shift                                    (29)
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_0_ratio_3_shift                        (23)
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_0_ratio_2_shift                        (17)
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_0_ratio_1_shift                        (11)
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_0_ratio_0_shift                        (5)
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_0_inside_ratio_shift                   (0)
#define  COLOR_DCC_D_DCC_AI_0_ai_ros_en_mask                                     (0x20000000)
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_0_ratio_3_mask                         (0x1F800000)
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_0_ratio_2_mask                         (0x007E0000)
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_0_ratio_1_mask                         (0x0001F800)
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_0_ratio_0_mask                         (0x000007E0)
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_0_inside_ratio_mask                    (0x0000001F)
#define  COLOR_DCC_D_DCC_AI_0_ai_ros_en(data)                                    (0x20000000&((data)<<29))
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_0_ratio_3(data)                        (0x1F800000&((data)<<23))
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_0_ratio_2(data)                        (0x007E0000&((data)<<17))
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_0_ratio_1(data)                        (0x0001F800&((data)<<11))
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_0_ratio_0(data)                        (0x000007E0&((data)<<5))
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_0_inside_ratio(data)                   (0x0000001F&(data))
#define  COLOR_DCC_D_DCC_AI_0_get_ai_ros_en(data)                                ((0x20000000&(data))>>29)
#define  COLOR_DCC_D_DCC_AI_0_get_ai_blending_0_ratio_3(data)                    ((0x1F800000&(data))>>23)
#define  COLOR_DCC_D_DCC_AI_0_get_ai_blending_0_ratio_2(data)                    ((0x007E0000&(data))>>17)
#define  COLOR_DCC_D_DCC_AI_0_get_ai_blending_0_ratio_1(data)                    ((0x0001F800&(data))>>11)
#define  COLOR_DCC_D_DCC_AI_0_get_ai_blending_0_ratio_0(data)                    ((0x000007E0&(data))>>5)
#define  COLOR_DCC_D_DCC_AI_0_get_ai_blending_0_inside_ratio(data)               (0x0000001F&(data))

#define  COLOR_DCC_D_DCC_AI_1                                                   0x1802E51C
#define  COLOR_DCC_D_DCC_AI_1_reg_addr                                           "0xB802E51C"
#define  COLOR_DCC_D_DCC_AI_1_reg                                                0xB802E51C
#define  COLOR_DCC_D_DCC_AI_1_inst_addr                                          "0x0040"
#define  set_COLOR_DCC_D_DCC_AI_1_reg(data)                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_1_reg                                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_1_reg))
#define  COLOR_DCC_D_DCC_AI_1_ai_blending_1_ratio_3_shift                        (23)
#define  COLOR_DCC_D_DCC_AI_1_ai_blending_1_ratio_2_shift                        (17)
#define  COLOR_DCC_D_DCC_AI_1_ai_blending_1_ratio_1_shift                        (11)
#define  COLOR_DCC_D_DCC_AI_1_ai_blending_1_ratio_0_shift                        (5)
#define  COLOR_DCC_D_DCC_AI_1_ai_blending_1_inside_ratio_shift                   (0)
#define  COLOR_DCC_D_DCC_AI_1_ai_blending_1_ratio_3_mask                         (0x1F800000)
#define  COLOR_DCC_D_DCC_AI_1_ai_blending_1_ratio_2_mask                         (0x007E0000)
#define  COLOR_DCC_D_DCC_AI_1_ai_blending_1_ratio_1_mask                         (0x0001F800)
#define  COLOR_DCC_D_DCC_AI_1_ai_blending_1_ratio_0_mask                         (0x000007E0)
#define  COLOR_DCC_D_DCC_AI_1_ai_blending_1_inside_ratio_mask                    (0x0000001F)
#define  COLOR_DCC_D_DCC_AI_1_ai_blending_1_ratio_3(data)                        (0x1F800000&((data)<<23))
#define  COLOR_DCC_D_DCC_AI_1_ai_blending_1_ratio_2(data)                        (0x007E0000&((data)<<17))
#define  COLOR_DCC_D_DCC_AI_1_ai_blending_1_ratio_1(data)                        (0x0001F800&((data)<<11))
#define  COLOR_DCC_D_DCC_AI_1_ai_blending_1_ratio_0(data)                        (0x000007E0&((data)<<5))
#define  COLOR_DCC_D_DCC_AI_1_ai_blending_1_inside_ratio(data)                   (0x0000001F&(data))
#define  COLOR_DCC_D_DCC_AI_1_get_ai_blending_1_ratio_3(data)                    ((0x1F800000&(data))>>23)
#define  COLOR_DCC_D_DCC_AI_1_get_ai_blending_1_ratio_2(data)                    ((0x007E0000&(data))>>17)
#define  COLOR_DCC_D_DCC_AI_1_get_ai_blending_1_ratio_1(data)                    ((0x0001F800&(data))>>11)
#define  COLOR_DCC_D_DCC_AI_1_get_ai_blending_1_ratio_0(data)                    ((0x000007E0&(data))>>5)
#define  COLOR_DCC_D_DCC_AI_1_get_ai_blending_1_inside_ratio(data)               (0x0000001F&(data))

#define  COLOR_DCC_D_DCC_AI_2                                                   0x1802E520
#define  COLOR_DCC_D_DCC_AI_2_reg_addr                                           "0xB802E520"
#define  COLOR_DCC_D_DCC_AI_2_reg                                                0xB802E520
#define  COLOR_DCC_D_DCC_AI_2_inst_addr                                          "0x0041"
#define  set_COLOR_DCC_D_DCC_AI_2_reg(data)                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_2_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_2_reg                                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_2_reg))
#define  COLOR_DCC_D_DCC_AI_2_ai_blending_2_ratio_3_shift                        (23)
#define  COLOR_DCC_D_DCC_AI_2_ai_blending_2_ratio_2_shift                        (17)
#define  COLOR_DCC_D_DCC_AI_2_ai_blending_2_ratio_1_shift                        (11)
#define  COLOR_DCC_D_DCC_AI_2_ai_blending_2_ratio_0_shift                        (5)
#define  COLOR_DCC_D_DCC_AI_2_ai_blending_2_inside_ratio_shift                   (0)
#define  COLOR_DCC_D_DCC_AI_2_ai_blending_2_ratio_3_mask                         (0x1F800000)
#define  COLOR_DCC_D_DCC_AI_2_ai_blending_2_ratio_2_mask                         (0x007E0000)
#define  COLOR_DCC_D_DCC_AI_2_ai_blending_2_ratio_1_mask                         (0x0001F800)
#define  COLOR_DCC_D_DCC_AI_2_ai_blending_2_ratio_0_mask                         (0x000007E0)
#define  COLOR_DCC_D_DCC_AI_2_ai_blending_2_inside_ratio_mask                    (0x0000001F)
#define  COLOR_DCC_D_DCC_AI_2_ai_blending_2_ratio_3(data)                        (0x1F800000&((data)<<23))
#define  COLOR_DCC_D_DCC_AI_2_ai_blending_2_ratio_2(data)                        (0x007E0000&((data)<<17))
#define  COLOR_DCC_D_DCC_AI_2_ai_blending_2_ratio_1(data)                        (0x0001F800&((data)<<11))
#define  COLOR_DCC_D_DCC_AI_2_ai_blending_2_ratio_0(data)                        (0x000007E0&((data)<<5))
#define  COLOR_DCC_D_DCC_AI_2_ai_blending_2_inside_ratio(data)                   (0x0000001F&(data))
#define  COLOR_DCC_D_DCC_AI_2_get_ai_blending_2_ratio_3(data)                    ((0x1F800000&(data))>>23)
#define  COLOR_DCC_D_DCC_AI_2_get_ai_blending_2_ratio_2(data)                    ((0x007E0000&(data))>>17)
#define  COLOR_DCC_D_DCC_AI_2_get_ai_blending_2_ratio_1(data)                    ((0x0001F800&(data))>>11)
#define  COLOR_DCC_D_DCC_AI_2_get_ai_blending_2_ratio_0(data)                    ((0x000007E0&(data))>>5)
#define  COLOR_DCC_D_DCC_AI_2_get_ai_blending_2_inside_ratio(data)               (0x0000001F&(data))

#define  COLOR_DCC_D_DCC_AI_3                                                   0x1802E524
#define  COLOR_DCC_D_DCC_AI_3_reg_addr                                           "0xB802E524"
#define  COLOR_DCC_D_DCC_AI_3_reg                                                0xB802E524
#define  COLOR_DCC_D_DCC_AI_3_inst_addr                                          "0x0042"
#define  set_COLOR_DCC_D_DCC_AI_3_reg(data)                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_3_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_3_reg                                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_3_reg))
#define  COLOR_DCC_D_DCC_AI_3_ai_blending_3_ratio_3_shift                        (23)
#define  COLOR_DCC_D_DCC_AI_3_ai_blending_3_ratio_2_shift                        (17)
#define  COLOR_DCC_D_DCC_AI_3_ai_blending_3_ratio_1_shift                        (11)
#define  COLOR_DCC_D_DCC_AI_3_ai_blending_3_ratio_0_shift                        (5)
#define  COLOR_DCC_D_DCC_AI_3_ai_blending_3_inside_ratio_shift                   (0)
#define  COLOR_DCC_D_DCC_AI_3_ai_blending_3_ratio_3_mask                         (0x1F800000)
#define  COLOR_DCC_D_DCC_AI_3_ai_blending_3_ratio_2_mask                         (0x007E0000)
#define  COLOR_DCC_D_DCC_AI_3_ai_blending_3_ratio_1_mask                         (0x0001F800)
#define  COLOR_DCC_D_DCC_AI_3_ai_blending_3_ratio_0_mask                         (0x000007E0)
#define  COLOR_DCC_D_DCC_AI_3_ai_blending_3_inside_ratio_mask                    (0x0000001F)
#define  COLOR_DCC_D_DCC_AI_3_ai_blending_3_ratio_3(data)                        (0x1F800000&((data)<<23))
#define  COLOR_DCC_D_DCC_AI_3_ai_blending_3_ratio_2(data)                        (0x007E0000&((data)<<17))
#define  COLOR_DCC_D_DCC_AI_3_ai_blending_3_ratio_1(data)                        (0x0001F800&((data)<<11))
#define  COLOR_DCC_D_DCC_AI_3_ai_blending_3_ratio_0(data)                        (0x000007E0&((data)<<5))
#define  COLOR_DCC_D_DCC_AI_3_ai_blending_3_inside_ratio(data)                   (0x0000001F&(data))
#define  COLOR_DCC_D_DCC_AI_3_get_ai_blending_3_ratio_3(data)                    ((0x1F800000&(data))>>23)
#define  COLOR_DCC_D_DCC_AI_3_get_ai_blending_3_ratio_2(data)                    ((0x007E0000&(data))>>17)
#define  COLOR_DCC_D_DCC_AI_3_get_ai_blending_3_ratio_1(data)                    ((0x0001F800&(data))>>11)
#define  COLOR_DCC_D_DCC_AI_3_get_ai_blending_3_ratio_0(data)                    ((0x000007E0&(data))>>5)
#define  COLOR_DCC_D_DCC_AI_3_get_ai_blending_3_inside_ratio(data)               (0x0000001F&(data))

#define  COLOR_DCC_D_DCC_AI_4                                                   0x1802E528
#define  COLOR_DCC_D_DCC_AI_4_reg_addr                                           "0xB802E528"
#define  COLOR_DCC_D_DCC_AI_4_reg                                                0xB802E528
#define  COLOR_DCC_D_DCC_AI_4_inst_addr                                          "0x0043"
#define  set_COLOR_DCC_D_DCC_AI_4_reg(data)                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_4_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_4_reg                                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_4_reg))
#define  COLOR_DCC_D_DCC_AI_4_ai_blending_4_ratio_3_shift                        (23)
#define  COLOR_DCC_D_DCC_AI_4_ai_blending_4_ratio_2_shift                        (17)
#define  COLOR_DCC_D_DCC_AI_4_ai_blending_4_ratio_1_shift                        (11)
#define  COLOR_DCC_D_DCC_AI_4_ai_blending_4_ratio_0_shift                        (5)
#define  COLOR_DCC_D_DCC_AI_4_ai_blending_4_inside_ratio_shift                   (0)
#define  COLOR_DCC_D_DCC_AI_4_ai_blending_4_ratio_3_mask                         (0x1F800000)
#define  COLOR_DCC_D_DCC_AI_4_ai_blending_4_ratio_2_mask                         (0x007E0000)
#define  COLOR_DCC_D_DCC_AI_4_ai_blending_4_ratio_1_mask                         (0x0001F800)
#define  COLOR_DCC_D_DCC_AI_4_ai_blending_4_ratio_0_mask                         (0x000007E0)
#define  COLOR_DCC_D_DCC_AI_4_ai_blending_4_inside_ratio_mask                    (0x0000001F)
#define  COLOR_DCC_D_DCC_AI_4_ai_blending_4_ratio_3(data)                        (0x1F800000&((data)<<23))
#define  COLOR_DCC_D_DCC_AI_4_ai_blending_4_ratio_2(data)                        (0x007E0000&((data)<<17))
#define  COLOR_DCC_D_DCC_AI_4_ai_blending_4_ratio_1(data)                        (0x0001F800&((data)<<11))
#define  COLOR_DCC_D_DCC_AI_4_ai_blending_4_ratio_0(data)                        (0x000007E0&((data)<<5))
#define  COLOR_DCC_D_DCC_AI_4_ai_blending_4_inside_ratio(data)                   (0x0000001F&(data))
#define  COLOR_DCC_D_DCC_AI_4_get_ai_blending_4_ratio_3(data)                    ((0x1F800000&(data))>>23)
#define  COLOR_DCC_D_DCC_AI_4_get_ai_blending_4_ratio_2(data)                    ((0x007E0000&(data))>>17)
#define  COLOR_DCC_D_DCC_AI_4_get_ai_blending_4_ratio_1(data)                    ((0x0001F800&(data))>>11)
#define  COLOR_DCC_D_DCC_AI_4_get_ai_blending_4_ratio_0(data)                    ((0x000007E0&(data))>>5)
#define  COLOR_DCC_D_DCC_AI_4_get_ai_blending_4_inside_ratio(data)               (0x0000001F&(data))

#define  COLOR_DCC_D_DCC_AI_5                                                   0x1802E52C
#define  COLOR_DCC_D_DCC_AI_5_reg_addr                                           "0xB802E52C"
#define  COLOR_DCC_D_DCC_AI_5_reg                                                0xB802E52C
#define  COLOR_DCC_D_DCC_AI_5_inst_addr                                          "0x0044"
#define  set_COLOR_DCC_D_DCC_AI_5_reg(data)                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_5_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_5_reg                                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_5_reg))
#define  COLOR_DCC_D_DCC_AI_5_ai_blending_5_ratio_3_shift                        (23)
#define  COLOR_DCC_D_DCC_AI_5_ai_blending_5_ratio_2_shift                        (17)
#define  COLOR_DCC_D_DCC_AI_5_ai_blending_5_ratio_1_shift                        (11)
#define  COLOR_DCC_D_DCC_AI_5_ai_blending_5_ratio_0_shift                        (5)
#define  COLOR_DCC_D_DCC_AI_5_ai_blending_5_inside_ratio_shift                   (0)
#define  COLOR_DCC_D_DCC_AI_5_ai_blending_5_ratio_3_mask                         (0x1F800000)
#define  COLOR_DCC_D_DCC_AI_5_ai_blending_5_ratio_2_mask                         (0x007E0000)
#define  COLOR_DCC_D_DCC_AI_5_ai_blending_5_ratio_1_mask                         (0x0001F800)
#define  COLOR_DCC_D_DCC_AI_5_ai_blending_5_ratio_0_mask                         (0x000007E0)
#define  COLOR_DCC_D_DCC_AI_5_ai_blending_5_inside_ratio_mask                    (0x0000001F)
#define  COLOR_DCC_D_DCC_AI_5_ai_blending_5_ratio_3(data)                        (0x1F800000&((data)<<23))
#define  COLOR_DCC_D_DCC_AI_5_ai_blending_5_ratio_2(data)                        (0x007E0000&((data)<<17))
#define  COLOR_DCC_D_DCC_AI_5_ai_blending_5_ratio_1(data)                        (0x0001F800&((data)<<11))
#define  COLOR_DCC_D_DCC_AI_5_ai_blending_5_ratio_0(data)                        (0x000007E0&((data)<<5))
#define  COLOR_DCC_D_DCC_AI_5_ai_blending_5_inside_ratio(data)                   (0x0000001F&(data))
#define  COLOR_DCC_D_DCC_AI_5_get_ai_blending_5_ratio_3(data)                    ((0x1F800000&(data))>>23)
#define  COLOR_DCC_D_DCC_AI_5_get_ai_blending_5_ratio_2(data)                    ((0x007E0000&(data))>>17)
#define  COLOR_DCC_D_DCC_AI_5_get_ai_blending_5_ratio_1(data)                    ((0x0001F800&(data))>>11)
#define  COLOR_DCC_D_DCC_AI_5_get_ai_blending_5_ratio_0(data)                    ((0x000007E0&(data))>>5)
#define  COLOR_DCC_D_DCC_AI_5_get_ai_blending_5_inside_ratio(data)               (0x0000001F&(data))

#define  COLOR_DCC_D_DCC_AI_6                                                   0x1802E530
#define  COLOR_DCC_D_DCC_AI_6_reg_addr                                           "0xB802E530"
#define  COLOR_DCC_D_DCC_AI_6_reg                                                0xB802E530
#define  COLOR_DCC_D_DCC_AI_6_inst_addr                                          "0x0045"
#define  set_COLOR_DCC_D_DCC_AI_6_reg(data)                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_6_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_6_reg                                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_6_reg))
#define  COLOR_DCC_D_DCC_AI_6_ai_octa_tang_mode4_shift                           (29)
#define  COLOR_DCC_D_DCC_AI_6_ai_octa_tang_mode3_shift                           (26)
#define  COLOR_DCC_D_DCC_AI_6_ai_octa_tang_mode2_shift                           (23)
#define  COLOR_DCC_D_DCC_AI_6_ai_octa_tang_mode1_shift                           (20)
#define  COLOR_DCC_D_DCC_AI_6_ai_octa_tang_mode0_shift                           (17)
#define  COLOR_DCC_D_DCC_AI_6_ai_detect_value_shift                              (9)
#define  COLOR_DCC_D_DCC_AI_6_ai_control_value_shift                             (1)
#define  COLOR_DCC_D_DCC_AI_6_ai_adjust_en_shift                                 (0)
#define  COLOR_DCC_D_DCC_AI_6_ai_octa_tang_mode4_mask                            (0xE0000000)
#define  COLOR_DCC_D_DCC_AI_6_ai_octa_tang_mode3_mask                            (0x1C000000)
#define  COLOR_DCC_D_DCC_AI_6_ai_octa_tang_mode2_mask                            (0x03800000)
#define  COLOR_DCC_D_DCC_AI_6_ai_octa_tang_mode1_mask                            (0x00700000)
#define  COLOR_DCC_D_DCC_AI_6_ai_octa_tang_mode0_mask                            (0x000E0000)
#define  COLOR_DCC_D_DCC_AI_6_ai_detect_value_mask                               (0x0001FE00)
#define  COLOR_DCC_D_DCC_AI_6_ai_control_value_mask                              (0x000001FE)
#define  COLOR_DCC_D_DCC_AI_6_ai_adjust_en_mask                                  (0x00000001)
#define  COLOR_DCC_D_DCC_AI_6_ai_octa_tang_mode4(data)                           (0xE0000000&((data)<<29))
#define  COLOR_DCC_D_DCC_AI_6_ai_octa_tang_mode3(data)                           (0x1C000000&((data)<<26))
#define  COLOR_DCC_D_DCC_AI_6_ai_octa_tang_mode2(data)                           (0x03800000&((data)<<23))
#define  COLOR_DCC_D_DCC_AI_6_ai_octa_tang_mode1(data)                           (0x00700000&((data)<<20))
#define  COLOR_DCC_D_DCC_AI_6_ai_octa_tang_mode0(data)                           (0x000E0000&((data)<<17))
#define  COLOR_DCC_D_DCC_AI_6_ai_detect_value(data)                              (0x0001FE00&((data)<<9))
#define  COLOR_DCC_D_DCC_AI_6_ai_control_value(data)                             (0x000001FE&((data)<<1))
#define  COLOR_DCC_D_DCC_AI_6_ai_adjust_en(data)                                 (0x00000001&(data))
#define  COLOR_DCC_D_DCC_AI_6_get_ai_octa_tang_mode4(data)                       ((0xE0000000&(data))>>29)
#define  COLOR_DCC_D_DCC_AI_6_get_ai_octa_tang_mode3(data)                       ((0x1C000000&(data))>>26)
#define  COLOR_DCC_D_DCC_AI_6_get_ai_octa_tang_mode2(data)                       ((0x03800000&(data))>>23)
#define  COLOR_DCC_D_DCC_AI_6_get_ai_octa_tang_mode1(data)                       ((0x00700000&(data))>>20)
#define  COLOR_DCC_D_DCC_AI_6_get_ai_octa_tang_mode0(data)                       ((0x000E0000&(data))>>17)
#define  COLOR_DCC_D_DCC_AI_6_get_ai_detect_value(data)                          ((0x0001FE00&(data))>>9)
#define  COLOR_DCC_D_DCC_AI_6_get_ai_control_value(data)                         ((0x000001FE&(data))>>1)
#define  COLOR_DCC_D_DCC_AI_6_get_ai_adjust_en(data)                             (0x00000001&(data))

#define  COLOR_DCC_D_DCC_AI_7                                                   0x1802E53C
#define  COLOR_DCC_D_DCC_AI_7_reg_addr                                           "0xB802E53C"
#define  COLOR_DCC_D_DCC_AI_7_reg                                                0xB802E53C
#define  COLOR_DCC_D_DCC_AI_7_inst_addr                                          "0x0046"
#define  set_COLOR_DCC_D_DCC_AI_7_reg(data)                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_7_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_7_reg                                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_7_reg))
#define  COLOR_DCC_D_DCC_AI_7_ai_octa_tang_mode5_shift                           (24)
#define  COLOR_DCC_D_DCC_AI_7_ai_range_1_shift                                   (12)
#define  COLOR_DCC_D_DCC_AI_7_ai_range_0_shift                                   (0)
#define  COLOR_DCC_D_DCC_AI_7_ai_octa_tang_mode5_mask                            (0x07000000)
#define  COLOR_DCC_D_DCC_AI_7_ai_range_1_mask                                    (0x00FFF000)
#define  COLOR_DCC_D_DCC_AI_7_ai_range_0_mask                                    (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_7_ai_octa_tang_mode5(data)                           (0x07000000&((data)<<24))
#define  COLOR_DCC_D_DCC_AI_7_ai_range_1(data)                                   (0x00FFF000&((data)<<12))
#define  COLOR_DCC_D_DCC_AI_7_ai_range_0(data)                                   (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_7_get_ai_octa_tang_mode5(data)                       ((0x07000000&(data))>>24)
#define  COLOR_DCC_D_DCC_AI_7_get_ai_range_1(data)                               ((0x00FFF000&(data))>>12)
#define  COLOR_DCC_D_DCC_AI_7_get_ai_range_0(data)                               (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_8                                                   0x1802E540
#define  COLOR_DCC_D_DCC_AI_8_reg_addr                                           "0xB802E540"
#define  COLOR_DCC_D_DCC_AI_8_reg                                                0xB802E540
#define  COLOR_DCC_D_DCC_AI_8_inst_addr                                          "0x0047"
#define  set_COLOR_DCC_D_DCC_AI_8_reg(data)                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_8_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_8_reg                                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_8_reg))
#define  COLOR_DCC_D_DCC_AI_8_ai_octa_tang_dir5_shift                            (29)
#define  COLOR_DCC_D_DCC_AI_8_ai_octa_tang_dir4_shift                            (28)
#define  COLOR_DCC_D_DCC_AI_8_ai_octa_tang_dir3_shift                            (27)
#define  COLOR_DCC_D_DCC_AI_8_ai_octa_tang_dir2_shift                            (26)
#define  COLOR_DCC_D_DCC_AI_8_ai_octa_tang_dir1_shift                            (25)
#define  COLOR_DCC_D_DCC_AI_8_ai_octa_tang_dir0_shift                            (24)
#define  COLOR_DCC_D_DCC_AI_8_ai_range_3_shift                                   (12)
#define  COLOR_DCC_D_DCC_AI_8_ai_range_2_shift                                   (0)
#define  COLOR_DCC_D_DCC_AI_8_ai_octa_tang_dir5_mask                             (0x20000000)
#define  COLOR_DCC_D_DCC_AI_8_ai_octa_tang_dir4_mask                             (0x10000000)
#define  COLOR_DCC_D_DCC_AI_8_ai_octa_tang_dir3_mask                             (0x08000000)
#define  COLOR_DCC_D_DCC_AI_8_ai_octa_tang_dir2_mask                             (0x04000000)
#define  COLOR_DCC_D_DCC_AI_8_ai_octa_tang_dir1_mask                             (0x02000000)
#define  COLOR_DCC_D_DCC_AI_8_ai_octa_tang_dir0_mask                             (0x01000000)
#define  COLOR_DCC_D_DCC_AI_8_ai_range_3_mask                                    (0x00FFF000)
#define  COLOR_DCC_D_DCC_AI_8_ai_range_2_mask                                    (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_8_ai_octa_tang_dir5(data)                            (0x20000000&((data)<<29))
#define  COLOR_DCC_D_DCC_AI_8_ai_octa_tang_dir4(data)                            (0x10000000&((data)<<28))
#define  COLOR_DCC_D_DCC_AI_8_ai_octa_tang_dir3(data)                            (0x08000000&((data)<<27))
#define  COLOR_DCC_D_DCC_AI_8_ai_octa_tang_dir2(data)                            (0x04000000&((data)<<26))
#define  COLOR_DCC_D_DCC_AI_8_ai_octa_tang_dir1(data)                            (0x02000000&((data)<<25))
#define  COLOR_DCC_D_DCC_AI_8_ai_octa_tang_dir0(data)                            (0x01000000&((data)<<24))
#define  COLOR_DCC_D_DCC_AI_8_ai_range_3(data)                                   (0x00FFF000&((data)<<12))
#define  COLOR_DCC_D_DCC_AI_8_ai_range_2(data)                                   (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_8_get_ai_octa_tang_dir5(data)                        ((0x20000000&(data))>>29)
#define  COLOR_DCC_D_DCC_AI_8_get_ai_octa_tang_dir4(data)                        ((0x10000000&(data))>>28)
#define  COLOR_DCC_D_DCC_AI_8_get_ai_octa_tang_dir3(data)                        ((0x08000000&(data))>>27)
#define  COLOR_DCC_D_DCC_AI_8_get_ai_octa_tang_dir2(data)                        ((0x04000000&(data))>>26)
#define  COLOR_DCC_D_DCC_AI_8_get_ai_octa_tang_dir1(data)                        ((0x02000000&(data))>>25)
#define  COLOR_DCC_D_DCC_AI_8_get_ai_octa_tang_dir0(data)                        ((0x01000000&(data))>>24)
#define  COLOR_DCC_D_DCC_AI_8_get_ai_range_3(data)                               ((0x00FFF000&(data))>>12)
#define  COLOR_DCC_D_DCC_AI_8_get_ai_range_2(data)                               (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_9                                                   0x1802E544
#define  COLOR_DCC_D_DCC_AI_9_reg_addr                                           "0xB802E544"
#define  COLOR_DCC_D_DCC_AI_9_reg                                                0xB802E544
#define  COLOR_DCC_D_DCC_AI_9_inst_addr                                          "0x0048"
#define  set_COLOR_DCC_D_DCC_AI_9_reg(data)                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_9_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_9_reg                                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_9_reg))
#define  COLOR_DCC_D_DCC_AI_9_ai_range_5_shift                                   (12)
#define  COLOR_DCC_D_DCC_AI_9_ai_range_4_shift                                   (0)
#define  COLOR_DCC_D_DCC_AI_9_ai_range_5_mask                                    (0x00FFF000)
#define  COLOR_DCC_D_DCC_AI_9_ai_range_4_mask                                    (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_9_ai_range_5(data)                                   (0x00FFF000&((data)<<12))
#define  COLOR_DCC_D_DCC_AI_9_ai_range_4(data)                                   (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_9_get_ai_range_5(data)                               ((0x00FFF000&(data))>>12)
#define  COLOR_DCC_D_DCC_AI_9_get_ai_range_4(data)                               (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_10                                                  0x1802E548
#define  COLOR_DCC_D_DCC_AI_10_reg_addr                                          "0xB802E548"
#define  COLOR_DCC_D_DCC_AI_10_reg                                               0xB802E548
#define  COLOR_DCC_D_DCC_AI_10_inst_addr                                         "0x0049"
#define  set_COLOR_DCC_D_DCC_AI_10_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_10_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_10_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_10_reg))
#define  COLOR_DCC_D_DCC_AI_10_ai_center_y_0_shift                               (12)
#define  COLOR_DCC_D_DCC_AI_10_ai_center_x_0_shift                               (0)
#define  COLOR_DCC_D_DCC_AI_10_ai_center_y_0_mask                                (0x00FFF000)
#define  COLOR_DCC_D_DCC_AI_10_ai_center_x_0_mask                                (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_10_ai_center_y_0(data)                               (0x00FFF000&((data)<<12))
#define  COLOR_DCC_D_DCC_AI_10_ai_center_x_0(data)                               (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_10_get_ai_center_y_0(data)                           ((0x00FFF000&(data))>>12)
#define  COLOR_DCC_D_DCC_AI_10_get_ai_center_x_0(data)                           (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_11                                                  0x1802E54C
#define  COLOR_DCC_D_DCC_AI_11_reg_addr                                          "0xB802E54C"
#define  COLOR_DCC_D_DCC_AI_11_reg                                               0xB802E54C
#define  COLOR_DCC_D_DCC_AI_11_inst_addr                                         "0x004A"
#define  set_COLOR_DCC_D_DCC_AI_11_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_11_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_11_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_11_reg))
#define  COLOR_DCC_D_DCC_AI_11_ai_center_y_1_shift                               (12)
#define  COLOR_DCC_D_DCC_AI_11_ai_center_x_1_shift                               (0)
#define  COLOR_DCC_D_DCC_AI_11_ai_center_y_1_mask                                (0x00FFF000)
#define  COLOR_DCC_D_DCC_AI_11_ai_center_x_1_mask                                (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_11_ai_center_y_1(data)                               (0x00FFF000&((data)<<12))
#define  COLOR_DCC_D_DCC_AI_11_ai_center_x_1(data)                               (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_11_get_ai_center_y_1(data)                           ((0x00FFF000&(data))>>12)
#define  COLOR_DCC_D_DCC_AI_11_get_ai_center_x_1(data)                           (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_12                                                  0x1802E550
#define  COLOR_DCC_D_DCC_AI_12_reg_addr                                          "0xB802E550"
#define  COLOR_DCC_D_DCC_AI_12_reg                                               0xB802E550
#define  COLOR_DCC_D_DCC_AI_12_inst_addr                                         "0x004B"
#define  set_COLOR_DCC_D_DCC_AI_12_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_12_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_12_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_12_reg))
#define  COLOR_DCC_D_DCC_AI_12_ai_center_y_2_shift                               (12)
#define  COLOR_DCC_D_DCC_AI_12_ai_center_x_2_shift                               (0)
#define  COLOR_DCC_D_DCC_AI_12_ai_center_y_2_mask                                (0x00FFF000)
#define  COLOR_DCC_D_DCC_AI_12_ai_center_x_2_mask                                (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_12_ai_center_y_2(data)                               (0x00FFF000&((data)<<12))
#define  COLOR_DCC_D_DCC_AI_12_ai_center_x_2(data)                               (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_12_get_ai_center_y_2(data)                           ((0x00FFF000&(data))>>12)
#define  COLOR_DCC_D_DCC_AI_12_get_ai_center_x_2(data)                           (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_13                                                  0x1802E554
#define  COLOR_DCC_D_DCC_AI_13_reg_addr                                          "0xB802E554"
#define  COLOR_DCC_D_DCC_AI_13_reg                                               0xB802E554
#define  COLOR_DCC_D_DCC_AI_13_inst_addr                                         "0x004C"
#define  set_COLOR_DCC_D_DCC_AI_13_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_13_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_13_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_13_reg))
#define  COLOR_DCC_D_DCC_AI_13_ai_center_y_3_shift                               (12)
#define  COLOR_DCC_D_DCC_AI_13_ai_center_x_3_shift                               (0)
#define  COLOR_DCC_D_DCC_AI_13_ai_center_y_3_mask                                (0x00FFF000)
#define  COLOR_DCC_D_DCC_AI_13_ai_center_x_3_mask                                (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_13_ai_center_y_3(data)                               (0x00FFF000&((data)<<12))
#define  COLOR_DCC_D_DCC_AI_13_ai_center_x_3(data)                               (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_13_get_ai_center_y_3(data)                           ((0x00FFF000&(data))>>12)
#define  COLOR_DCC_D_DCC_AI_13_get_ai_center_x_3(data)                           (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_14                                                  0x1802E558
#define  COLOR_DCC_D_DCC_AI_14_reg_addr                                          "0xB802E558"
#define  COLOR_DCC_D_DCC_AI_14_reg                                               0xB802E558
#define  COLOR_DCC_D_DCC_AI_14_inst_addr                                         "0x004D"
#define  set_COLOR_DCC_D_DCC_AI_14_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_14_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_14_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_14_reg))
#define  COLOR_DCC_D_DCC_AI_14_ai_center_y_4_shift                               (12)
#define  COLOR_DCC_D_DCC_AI_14_ai_center_x_4_shift                               (0)
#define  COLOR_DCC_D_DCC_AI_14_ai_center_y_4_mask                                (0x00FFF000)
#define  COLOR_DCC_D_DCC_AI_14_ai_center_x_4_mask                                (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_14_ai_center_y_4(data)                               (0x00FFF000&((data)<<12))
#define  COLOR_DCC_D_DCC_AI_14_ai_center_x_4(data)                               (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_14_get_ai_center_y_4(data)                           ((0x00FFF000&(data))>>12)
#define  COLOR_DCC_D_DCC_AI_14_get_ai_center_x_4(data)                           (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_15                                                  0x1802E55C
#define  COLOR_DCC_D_DCC_AI_15_reg_addr                                          "0xB802E55C"
#define  COLOR_DCC_D_DCC_AI_15_reg                                               0xB802E55C
#define  COLOR_DCC_D_DCC_AI_15_inst_addr                                         "0x004E"
#define  set_COLOR_DCC_D_DCC_AI_15_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_15_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_15_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_15_reg))
#define  COLOR_DCC_D_DCC_AI_15_ai_center_y_5_shift                               (12)
#define  COLOR_DCC_D_DCC_AI_15_ai_center_x_5_shift                               (0)
#define  COLOR_DCC_D_DCC_AI_15_ai_center_y_5_mask                                (0x00FFF000)
#define  COLOR_DCC_D_DCC_AI_15_ai_center_x_5_mask                                (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_15_ai_center_y_5(data)                               (0x00FFF000&((data)<<12))
#define  COLOR_DCC_D_DCC_AI_15_ai_center_x_5(data)                               (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_15_get_ai_center_y_5(data)                           ((0x00FFF000&(data))>>12)
#define  COLOR_DCC_D_DCC_AI_15_get_ai_center_x_5(data)                           (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_16                                                  0x1802E560
#define  COLOR_DCC_D_DCC_AI_16_reg_addr                                          "0xB802E560"
#define  COLOR_DCC_D_DCC_AI_16_reg                                               0xB802E560
#define  COLOR_DCC_D_DCC_AI_16_inst_addr                                         "0x004F"
#define  set_COLOR_DCC_D_DCC_AI_16_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_16_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_16_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_16_reg))
#define  COLOR_DCC_D_DCC_AI_16_ai_center_v_0_shift                               (12)
#define  COLOR_DCC_D_DCC_AI_16_ai_center_u_0_shift                               (0)
#define  COLOR_DCC_D_DCC_AI_16_ai_center_v_0_mask                                (0x00FFF000)
#define  COLOR_DCC_D_DCC_AI_16_ai_center_u_0_mask                                (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_16_ai_center_v_0(data)                               (0x00FFF000&((data)<<12))
#define  COLOR_DCC_D_DCC_AI_16_ai_center_u_0(data)                               (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_16_get_ai_center_v_0(data)                           ((0x00FFF000&(data))>>12)
#define  COLOR_DCC_D_DCC_AI_16_get_ai_center_u_0(data)                           (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_17                                                  0x1802E564
#define  COLOR_DCC_D_DCC_AI_17_reg_addr                                          "0xB802E564"
#define  COLOR_DCC_D_DCC_AI_17_reg                                               0xB802E564
#define  COLOR_DCC_D_DCC_AI_17_inst_addr                                         "0x0050"
#define  set_COLOR_DCC_D_DCC_AI_17_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_17_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_17_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_17_reg))
#define  COLOR_DCC_D_DCC_AI_17_ai_center_v_1_shift                               (12)
#define  COLOR_DCC_D_DCC_AI_17_ai_center_u_1_shift                               (0)
#define  COLOR_DCC_D_DCC_AI_17_ai_center_v_1_mask                                (0x00FFF000)
#define  COLOR_DCC_D_DCC_AI_17_ai_center_u_1_mask                                (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_17_ai_center_v_1(data)                               (0x00FFF000&((data)<<12))
#define  COLOR_DCC_D_DCC_AI_17_ai_center_u_1(data)                               (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_17_get_ai_center_v_1(data)                           ((0x00FFF000&(data))>>12)
#define  COLOR_DCC_D_DCC_AI_17_get_ai_center_u_1(data)                           (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_18                                                  0x1802E568
#define  COLOR_DCC_D_DCC_AI_18_reg_addr                                          "0xB802E568"
#define  COLOR_DCC_D_DCC_AI_18_reg                                               0xB802E568
#define  COLOR_DCC_D_DCC_AI_18_inst_addr                                         "0x0051"
#define  set_COLOR_DCC_D_DCC_AI_18_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_18_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_18_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_18_reg))
#define  COLOR_DCC_D_DCC_AI_18_ai_center_v_2_shift                               (12)
#define  COLOR_DCC_D_DCC_AI_18_ai_center_u_2_shift                               (0)
#define  COLOR_DCC_D_DCC_AI_18_ai_center_v_2_mask                                (0x00FFF000)
#define  COLOR_DCC_D_DCC_AI_18_ai_center_u_2_mask                                (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_18_ai_center_v_2(data)                               (0x00FFF000&((data)<<12))
#define  COLOR_DCC_D_DCC_AI_18_ai_center_u_2(data)                               (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_18_get_ai_center_v_2(data)                           ((0x00FFF000&(data))>>12)
#define  COLOR_DCC_D_DCC_AI_18_get_ai_center_u_2(data)                           (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_19                                                  0x1802E56C
#define  COLOR_DCC_D_DCC_AI_19_reg_addr                                          "0xB802E56C"
#define  COLOR_DCC_D_DCC_AI_19_reg                                               0xB802E56C
#define  COLOR_DCC_D_DCC_AI_19_inst_addr                                         "0x0052"
#define  set_COLOR_DCC_D_DCC_AI_19_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_19_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_19_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_19_reg))
#define  COLOR_DCC_D_DCC_AI_19_ai_center_v_3_shift                               (12)
#define  COLOR_DCC_D_DCC_AI_19_ai_center_u_3_shift                               (0)
#define  COLOR_DCC_D_DCC_AI_19_ai_center_v_3_mask                                (0x00FFF000)
#define  COLOR_DCC_D_DCC_AI_19_ai_center_u_3_mask                                (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_19_ai_center_v_3(data)                               (0x00FFF000&((data)<<12))
#define  COLOR_DCC_D_DCC_AI_19_ai_center_u_3(data)                               (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_19_get_ai_center_v_3(data)                           ((0x00FFF000&(data))>>12)
#define  COLOR_DCC_D_DCC_AI_19_get_ai_center_u_3(data)                           (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_20                                                  0x1802E570
#define  COLOR_DCC_D_DCC_AI_20_reg_addr                                          "0xB802E570"
#define  COLOR_DCC_D_DCC_AI_20_reg                                               0xB802E570
#define  COLOR_DCC_D_DCC_AI_20_inst_addr                                         "0x0053"
#define  set_COLOR_DCC_D_DCC_AI_20_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_20_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_20_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_20_reg))
#define  COLOR_DCC_D_DCC_AI_20_ai_center_v_4_shift                               (12)
#define  COLOR_DCC_D_DCC_AI_20_ai_center_u_4_shift                               (0)
#define  COLOR_DCC_D_DCC_AI_20_ai_center_v_4_mask                                (0x00FFF000)
#define  COLOR_DCC_D_DCC_AI_20_ai_center_u_4_mask                                (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_20_ai_center_v_4(data)                               (0x00FFF000&((data)<<12))
#define  COLOR_DCC_D_DCC_AI_20_ai_center_u_4(data)                               (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_20_get_ai_center_v_4(data)                           ((0x00FFF000&(data))>>12)
#define  COLOR_DCC_D_DCC_AI_20_get_ai_center_u_4(data)                           (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_21                                                  0x1802E574
#define  COLOR_DCC_D_DCC_AI_21_reg_addr                                          "0xB802E574"
#define  COLOR_DCC_D_DCC_AI_21_reg                                               0xB802E574
#define  COLOR_DCC_D_DCC_AI_21_inst_addr                                         "0x0054"
#define  set_COLOR_DCC_D_DCC_AI_21_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_21_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_21_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_21_reg))
#define  COLOR_DCC_D_DCC_AI_21_ai_center_v_5_shift                               (12)
#define  COLOR_DCC_D_DCC_AI_21_ai_center_u_5_shift                               (0)
#define  COLOR_DCC_D_DCC_AI_21_ai_center_v_5_mask                                (0x00FFF000)
#define  COLOR_DCC_D_DCC_AI_21_ai_center_u_5_mask                                (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_21_ai_center_v_5(data)                               (0x00FFF000&((data)<<12))
#define  COLOR_DCC_D_DCC_AI_21_ai_center_u_5(data)                               (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_21_get_ai_center_v_5(data)                           ((0x00FFF000&(data))>>12)
#define  COLOR_DCC_D_DCC_AI_21_get_ai_center_u_5(data)                           (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_FWUSED_0                                               0x1802E4DC
#define  COLOR_DCC_D_DCC_FWUSED_0_reg_addr                                       "0xB802E4DC"
#define  COLOR_DCC_D_DCC_FWUSED_0_reg                                            0xB802E4DC
#define  COLOR_DCC_D_DCC_FWUSED_0_inst_addr                                      "0x0055"
#define  set_COLOR_DCC_D_DCC_FWUSED_0_reg(data)                                  (*((volatile unsigned int*)COLOR_DCC_D_DCC_FWUSED_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_FWUSED_0_reg                                        (*((volatile unsigned int*)COLOR_DCC_D_DCC_FWUSED_0_reg))
#define  COLOR_DCC_D_DCC_FWUSED_0_fw_0_shift                                     (0)
#define  COLOR_DCC_D_DCC_FWUSED_0_fw_0_mask                                      (0xFFFFFFFF)
#define  COLOR_DCC_D_DCC_FWUSED_0_fw_0(data)                                     (0xFFFFFFFF&(data))
#define  COLOR_DCC_D_DCC_FWUSED_0_get_fw_0(data)                                 (0xFFFFFFFF&(data))

#define  COLOR_DCC_D_DCC_FWUSED_1                                               0x1802E4E0
#define  COLOR_DCC_D_DCC_FWUSED_1_reg_addr                                       "0xB802E4E0"
#define  COLOR_DCC_D_DCC_FWUSED_1_reg                                            0xB802E4E0
#define  COLOR_DCC_D_DCC_FWUSED_1_inst_addr                                      "0x0056"
#define  set_COLOR_DCC_D_DCC_FWUSED_1_reg(data)                                  (*((volatile unsigned int*)COLOR_DCC_D_DCC_FWUSED_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_FWUSED_1_reg                                        (*((volatile unsigned int*)COLOR_DCC_D_DCC_FWUSED_1_reg))
#define  COLOR_DCC_D_DCC_FWUSED_1_fw_1_shift                                     (0)
#define  COLOR_DCC_D_DCC_FWUSED_1_fw_1_mask                                      (0xFFFFFFFF)
#define  COLOR_DCC_D_DCC_FWUSED_1_fw_1(data)                                     (0xFFFFFFFF&(data))
#define  COLOR_DCC_D_DCC_FWUSED_1_get_fw_1(data)                                 (0xFFFFFFFF&(data))

#define  COLOR_DCC_D_DCC_FWUSED_2                                               0x1802E4E4
#define  COLOR_DCC_D_DCC_FWUSED_2_reg_addr                                       "0xB802E4E4"
#define  COLOR_DCC_D_DCC_FWUSED_2_reg                                            0xB802E4E4
#define  COLOR_DCC_D_DCC_FWUSED_2_inst_addr                                      "0x0057"
#define  set_COLOR_DCC_D_DCC_FWUSED_2_reg(data)                                  (*((volatile unsigned int*)COLOR_DCC_D_DCC_FWUSED_2_reg)=data)
#define  get_COLOR_DCC_D_DCC_FWUSED_2_reg                                        (*((volatile unsigned int*)COLOR_DCC_D_DCC_FWUSED_2_reg))
#define  COLOR_DCC_D_DCC_FWUSED_2_fw_2_shift                                     (0)
#define  COLOR_DCC_D_DCC_FWUSED_2_fw_2_mask                                      (0xFFFFFFFF)
#define  COLOR_DCC_D_DCC_FWUSED_2_fw_2(data)                                     (0xFFFFFFFF&(data))
#define  COLOR_DCC_D_DCC_FWUSED_2_get_fw_2(data)                                 (0xFFFFFFFF&(data))

#define  COLOR_DCC_D_DCC_FWUSED_3                                               0x1802E4E8
#define  COLOR_DCC_D_DCC_FWUSED_3_reg_addr                                       "0xB802E4E8"
#define  COLOR_DCC_D_DCC_FWUSED_3_reg                                            0xB802E4E8
#define  COLOR_DCC_D_DCC_FWUSED_3_inst_addr                                      "0x0058"
#define  set_COLOR_DCC_D_DCC_FWUSED_3_reg(data)                                  (*((volatile unsigned int*)COLOR_DCC_D_DCC_FWUSED_3_reg)=data)
#define  get_COLOR_DCC_D_DCC_FWUSED_3_reg                                        (*((volatile unsigned int*)COLOR_DCC_D_DCC_FWUSED_3_reg))
#define  COLOR_DCC_D_DCC_FWUSED_3_fw_3_shift                                     (0)
#define  COLOR_DCC_D_DCC_FWUSED_3_fw_3_mask                                      (0xFFFFFFFF)
#define  COLOR_DCC_D_DCC_FWUSED_3_fw_3(data)                                     (0xFFFFFFFF&(data))
#define  COLOR_DCC_D_DCC_FWUSED_3_get_fw_3(data)                                 (0xFFFFFFFF&(data))

#define  COLOR_DCC_D_DCC_Bist_0                                                 0x1802E4EC
#define  COLOR_DCC_D_DCC_Bist_0_reg_addr                                         "0xB802E4EC"
#define  COLOR_DCC_D_DCC_Bist_0_reg                                              0xB802E4EC
#define  COLOR_DCC_D_DCC_Bist_0_inst_addr                                        "0x0059"
#define  set_COLOR_DCC_D_DCC_Bist_0_reg(data)                                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_Bist_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_Bist_0_reg                                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_Bist_0_reg))
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_15_shift                               (31)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_14_shift                               (30)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_13_shift                               (29)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_12_shift                               (28)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_11_shift                               (27)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_10_shift                               (26)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_9_shift                                (25)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_8_shift                                (24)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_7_shift                                (23)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_6_shift                                (22)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_5_shift                                (21)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_4_shift                                (20)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_3_shift                                (19)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_2_shift                                (18)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_1_shift                                (17)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_0_shift                                (16)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_15_shift                           (15)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_14_shift                           (14)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_13_shift                           (13)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_12_shift                           (12)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_11_shift                           (11)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_10_shift                           (10)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_9_shift                            (9)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_8_shift                            (8)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_7_shift                            (7)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_6_shift                            (6)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_5_shift                            (5)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_4_shift                            (4)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_3_shift                            (3)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_2_shift                            (2)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_1_shift                            (1)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_0_shift                            (0)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_15_mask                                (0x80000000)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_14_mask                                (0x40000000)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_13_mask                                (0x20000000)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_12_mask                                (0x10000000)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_11_mask                                (0x08000000)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_10_mask                                (0x04000000)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_9_mask                                 (0x02000000)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_8_mask                                 (0x01000000)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_7_mask                                 (0x00800000)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_6_mask                                 (0x00400000)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_5_mask                                 (0x00200000)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_4_mask                                 (0x00100000)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_3_mask                                 (0x00080000)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_2_mask                                 (0x00040000)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_1_mask                                 (0x00020000)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_0_mask                                 (0x00010000)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_15_mask                            (0x00008000)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_14_mask                            (0x00004000)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_13_mask                            (0x00002000)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_12_mask                            (0x00001000)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_11_mask                            (0x00000800)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_10_mask                            (0x00000400)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_9_mask                             (0x00000200)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_8_mask                             (0x00000100)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_7_mask                             (0x00000080)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_6_mask                             (0x00000040)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_5_mask                             (0x00000020)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_4_mask                             (0x00000010)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_3_mask                             (0x00000008)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_2_mask                             (0x00000004)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_1_mask                             (0x00000002)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_0_mask                             (0x00000001)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_15(data)                               (0x80000000&((data)<<31))
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_14(data)                               (0x40000000&((data)<<30))
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_13(data)                               (0x20000000&((data)<<29))
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_12(data)                               (0x10000000&((data)<<28))
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_11(data)                               (0x08000000&((data)<<27))
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_10(data)                               (0x04000000&((data)<<26))
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_9(data)                                (0x02000000&((data)<<25))
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_8(data)                                (0x01000000&((data)<<24))
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_7(data)                                (0x00800000&((data)<<23))
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_6(data)                                (0x00400000&((data)<<22))
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_5(data)                                (0x00200000&((data)<<21))
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_4(data)                                (0x00100000&((data)<<20))
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_3(data)                                (0x00080000&((data)<<19))
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_2(data)                                (0x00040000&((data)<<18))
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_1(data)                                (0x00020000&((data)<<17))
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_0(data)                                (0x00010000&((data)<<16))
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_15(data)                           (0x00008000&((data)<<15))
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_14(data)                           (0x00004000&((data)<<14))
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_13(data)                           (0x00002000&((data)<<13))
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_12(data)                           (0x00001000&((data)<<12))
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_11(data)                           (0x00000800&((data)<<11))
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_10(data)                           (0x00000400&((data)<<10))
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_9(data)                            (0x00000200&((data)<<9))
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_8(data)                            (0x00000100&((data)<<8))
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_7(data)                            (0x00000080&((data)<<7))
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_6(data)                            (0x00000040&((data)<<6))
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_5(data)                            (0x00000020&((data)<<5))
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_4(data)                            (0x00000010&((data)<<4))
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_3(data)                            (0x00000008&((data)<<3))
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_2(data)                            (0x00000004&((data)<<2))
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_1(data)                            (0x00000002&((data)<<1))
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_0(data)                            (0x00000001&(data))
#define  COLOR_DCC_D_DCC_Bist_0_get_bist_fail_15(data)                           ((0x80000000&(data))>>31)
#define  COLOR_DCC_D_DCC_Bist_0_get_bist_fail_14(data)                           ((0x40000000&(data))>>30)
#define  COLOR_DCC_D_DCC_Bist_0_get_bist_fail_13(data)                           ((0x20000000&(data))>>29)
#define  COLOR_DCC_D_DCC_Bist_0_get_bist_fail_12(data)                           ((0x10000000&(data))>>28)
#define  COLOR_DCC_D_DCC_Bist_0_get_bist_fail_11(data)                           ((0x08000000&(data))>>27)
#define  COLOR_DCC_D_DCC_Bist_0_get_bist_fail_10(data)                           ((0x04000000&(data))>>26)
#define  COLOR_DCC_D_DCC_Bist_0_get_bist_fail_9(data)                            ((0x02000000&(data))>>25)
#define  COLOR_DCC_D_DCC_Bist_0_get_bist_fail_8(data)                            ((0x01000000&(data))>>24)
#define  COLOR_DCC_D_DCC_Bist_0_get_bist_fail_7(data)                            ((0x00800000&(data))>>23)
#define  COLOR_DCC_D_DCC_Bist_0_get_bist_fail_6(data)                            ((0x00400000&(data))>>22)
#define  COLOR_DCC_D_DCC_Bist_0_get_bist_fail_5(data)                            ((0x00200000&(data))>>21)
#define  COLOR_DCC_D_DCC_Bist_0_get_bist_fail_4(data)                            ((0x00100000&(data))>>20)
#define  COLOR_DCC_D_DCC_Bist_0_get_bist_fail_3(data)                            ((0x00080000&(data))>>19)
#define  COLOR_DCC_D_DCC_Bist_0_get_bist_fail_2(data)                            ((0x00040000&(data))>>18)
#define  COLOR_DCC_D_DCC_Bist_0_get_bist_fail_1(data)                            ((0x00020000&(data))>>17)
#define  COLOR_DCC_D_DCC_Bist_0_get_bist_fail_0(data)                            ((0x00010000&(data))>>16)
#define  COLOR_DCC_D_DCC_Bist_0_get_drf_bist_fail_15(data)                       ((0x00008000&(data))>>15)
#define  COLOR_DCC_D_DCC_Bist_0_get_drf_bist_fail_14(data)                       ((0x00004000&(data))>>14)
#define  COLOR_DCC_D_DCC_Bist_0_get_drf_bist_fail_13(data)                       ((0x00002000&(data))>>13)
#define  COLOR_DCC_D_DCC_Bist_0_get_drf_bist_fail_12(data)                       ((0x00001000&(data))>>12)
#define  COLOR_DCC_D_DCC_Bist_0_get_drf_bist_fail_11(data)                       ((0x00000800&(data))>>11)
#define  COLOR_DCC_D_DCC_Bist_0_get_drf_bist_fail_10(data)                       ((0x00000400&(data))>>10)
#define  COLOR_DCC_D_DCC_Bist_0_get_drf_bist_fail_9(data)                        ((0x00000200&(data))>>9)
#define  COLOR_DCC_D_DCC_Bist_0_get_drf_bist_fail_8(data)                        ((0x00000100&(data))>>8)
#define  COLOR_DCC_D_DCC_Bist_0_get_drf_bist_fail_7(data)                        ((0x00000080&(data))>>7)
#define  COLOR_DCC_D_DCC_Bist_0_get_drf_bist_fail_6(data)                        ((0x00000040&(data))>>6)
#define  COLOR_DCC_D_DCC_Bist_0_get_drf_bist_fail_5(data)                        ((0x00000020&(data))>>5)
#define  COLOR_DCC_D_DCC_Bist_0_get_drf_bist_fail_4(data)                        ((0x00000010&(data))>>4)
#define  COLOR_DCC_D_DCC_Bist_0_get_drf_bist_fail_3(data)                        ((0x00000008&(data))>>3)
#define  COLOR_DCC_D_DCC_Bist_0_get_drf_bist_fail_2(data)                        ((0x00000004&(data))>>2)
#define  COLOR_DCC_D_DCC_Bist_0_get_drf_bist_fail_1(data)                        ((0x00000002&(data))>>1)
#define  COLOR_DCC_D_DCC_Bist_0_get_drf_bist_fail_0(data)                        (0x00000001&(data))

#define  COLOR_DCC_D_DCC_Bist_1                                                 0x1802E4F0
#define  COLOR_DCC_D_DCC_Bist_1_reg_addr                                         "0xB802E4F0"
#define  COLOR_DCC_D_DCC_Bist_1_reg                                              0xB802E4F0
#define  COLOR_DCC_D_DCC_Bist_1_inst_addr                                        "0x005A"
#define  set_COLOR_DCC_D_DCC_Bist_1_reg(data)                                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_Bist_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_Bist_1_reg                                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_Bist_1_reg))
#define  COLOR_DCC_D_DCC_Bist_1_rm_7_shift                                       (28)
#define  COLOR_DCC_D_DCC_Bist_1_rm_6_shift                                       (24)
#define  COLOR_DCC_D_DCC_Bist_1_rm_5_shift                                       (20)
#define  COLOR_DCC_D_DCC_Bist_1_rm_4_shift                                       (16)
#define  COLOR_DCC_D_DCC_Bist_1_rm_3_shift                                       (12)
#define  COLOR_DCC_D_DCC_Bist_1_rm_2_shift                                       (8)
#define  COLOR_DCC_D_DCC_Bist_1_rm_1_shift                                       (4)
#define  COLOR_DCC_D_DCC_Bist_1_rm_0_shift                                       (0)
#define  COLOR_DCC_D_DCC_Bist_1_rm_7_mask                                        (0xF0000000)
#define  COLOR_DCC_D_DCC_Bist_1_rm_6_mask                                        (0x0F000000)
#define  COLOR_DCC_D_DCC_Bist_1_rm_5_mask                                        (0x00F00000)
#define  COLOR_DCC_D_DCC_Bist_1_rm_4_mask                                        (0x000F0000)
#define  COLOR_DCC_D_DCC_Bist_1_rm_3_mask                                        (0x0000F000)
#define  COLOR_DCC_D_DCC_Bist_1_rm_2_mask                                        (0x00000F00)
#define  COLOR_DCC_D_DCC_Bist_1_rm_1_mask                                        (0x000000F0)
#define  COLOR_DCC_D_DCC_Bist_1_rm_0_mask                                        (0x0000000F)
#define  COLOR_DCC_D_DCC_Bist_1_rm_7(data)                                       (0xF0000000&((data)<<28))
#define  COLOR_DCC_D_DCC_Bist_1_rm_6(data)                                       (0x0F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_Bist_1_rm_5(data)                                       (0x00F00000&((data)<<20))
#define  COLOR_DCC_D_DCC_Bist_1_rm_4(data)                                       (0x000F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_Bist_1_rm_3(data)                                       (0x0000F000&((data)<<12))
#define  COLOR_DCC_D_DCC_Bist_1_rm_2(data)                                       (0x00000F00&((data)<<8))
#define  COLOR_DCC_D_DCC_Bist_1_rm_1(data)                                       (0x000000F0&((data)<<4))
#define  COLOR_DCC_D_DCC_Bist_1_rm_0(data)                                       (0x0000000F&(data))
#define  COLOR_DCC_D_DCC_Bist_1_get_rm_7(data)                                   ((0xF0000000&(data))>>28)
#define  COLOR_DCC_D_DCC_Bist_1_get_rm_6(data)                                   ((0x0F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_Bist_1_get_rm_5(data)                                   ((0x00F00000&(data))>>20)
#define  COLOR_DCC_D_DCC_Bist_1_get_rm_4(data)                                   ((0x000F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_Bist_1_get_rm_3(data)                                   ((0x0000F000&(data))>>12)
#define  COLOR_DCC_D_DCC_Bist_1_get_rm_2(data)                                   ((0x00000F00&(data))>>8)
#define  COLOR_DCC_D_DCC_Bist_1_get_rm_1(data)                                   ((0x000000F0&(data))>>4)
#define  COLOR_DCC_D_DCC_Bist_1_get_rm_0(data)                                   (0x0000000F&(data))

#define  COLOR_DCC_D_DCC_Bist_3                                                 0x1802E534
#define  COLOR_DCC_D_DCC_Bist_3_reg_addr                                         "0xB802E534"
#define  COLOR_DCC_D_DCC_Bist_3_reg                                              0xB802E534
#define  COLOR_DCC_D_DCC_Bist_3_inst_addr                                        "0x005B"
#define  set_COLOR_DCC_D_DCC_Bist_3_reg(data)                                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_Bist_3_reg)=data)
#define  get_COLOR_DCC_D_DCC_Bist_3_reg                                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_Bist_3_reg))
#define  COLOR_DCC_D_DCC_Bist_3_rm_15_shift                                      (28)
#define  COLOR_DCC_D_DCC_Bist_3_rm_14_shift                                      (24)
#define  COLOR_DCC_D_DCC_Bist_3_rm_13_shift                                      (20)
#define  COLOR_DCC_D_DCC_Bist_3_rm_12_shift                                      (16)
#define  COLOR_DCC_D_DCC_Bist_3_rm_11_shift                                      (12)
#define  COLOR_DCC_D_DCC_Bist_3_rm_10_shift                                      (8)
#define  COLOR_DCC_D_DCC_Bist_3_rm_9_shift                                       (4)
#define  COLOR_DCC_D_DCC_Bist_3_rm_8_shift                                       (0)
#define  COLOR_DCC_D_DCC_Bist_3_rm_15_mask                                       (0xF0000000)
#define  COLOR_DCC_D_DCC_Bist_3_rm_14_mask                                       (0x0F000000)
#define  COLOR_DCC_D_DCC_Bist_3_rm_13_mask                                       (0x00F00000)
#define  COLOR_DCC_D_DCC_Bist_3_rm_12_mask                                       (0x000F0000)
#define  COLOR_DCC_D_DCC_Bist_3_rm_11_mask                                       (0x0000F000)
#define  COLOR_DCC_D_DCC_Bist_3_rm_10_mask                                       (0x00000F00)
#define  COLOR_DCC_D_DCC_Bist_3_rm_9_mask                                        (0x000000F0)
#define  COLOR_DCC_D_DCC_Bist_3_rm_8_mask                                        (0x0000000F)
#define  COLOR_DCC_D_DCC_Bist_3_rm_15(data)                                      (0xF0000000&((data)<<28))
#define  COLOR_DCC_D_DCC_Bist_3_rm_14(data)                                      (0x0F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_Bist_3_rm_13(data)                                      (0x00F00000&((data)<<20))
#define  COLOR_DCC_D_DCC_Bist_3_rm_12(data)                                      (0x000F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_Bist_3_rm_11(data)                                      (0x0000F000&((data)<<12))
#define  COLOR_DCC_D_DCC_Bist_3_rm_10(data)                                      (0x00000F00&((data)<<8))
#define  COLOR_DCC_D_DCC_Bist_3_rm_9(data)                                       (0x000000F0&((data)<<4))
#define  COLOR_DCC_D_DCC_Bist_3_rm_8(data)                                       (0x0000000F&(data))
#define  COLOR_DCC_D_DCC_Bist_3_get_rm_15(data)                                  ((0xF0000000&(data))>>28)
#define  COLOR_DCC_D_DCC_Bist_3_get_rm_14(data)                                  ((0x0F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_Bist_3_get_rm_13(data)                                  ((0x00F00000&(data))>>20)
#define  COLOR_DCC_D_DCC_Bist_3_get_rm_12(data)                                  ((0x000F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_Bist_3_get_rm_11(data)                                  ((0x0000F000&(data))>>12)
#define  COLOR_DCC_D_DCC_Bist_3_get_rm_10(data)                                  ((0x00000F00&(data))>>8)
#define  COLOR_DCC_D_DCC_Bist_3_get_rm_9(data)                                   ((0x000000F0&(data))>>4)
#define  COLOR_DCC_D_DCC_Bist_3_get_rm_8(data)                                   (0x0000000F&(data))

#define  COLOR_DCC_D_DCC_Bist_4                                                 0x1802E538
#define  COLOR_DCC_D_DCC_Bist_4_reg_addr                                         "0xB802E538"
#define  COLOR_DCC_D_DCC_Bist_4_reg                                              0xB802E538
#define  COLOR_DCC_D_DCC_Bist_4_inst_addr                                        "0x005C"
#define  set_COLOR_DCC_D_DCC_Bist_4_reg(data)                                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_Bist_4_reg)=data)
#define  get_COLOR_DCC_D_DCC_Bist_4_reg                                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_Bist_4_reg))
#define  COLOR_DCC_D_DCC_Bist_4_test_15_shift                                    (15)
#define  COLOR_DCC_D_DCC_Bist_4_test_14_shift                                    (14)
#define  COLOR_DCC_D_DCC_Bist_4_test_13_shift                                    (13)
#define  COLOR_DCC_D_DCC_Bist_4_test_12_shift                                    (12)
#define  COLOR_DCC_D_DCC_Bist_4_test_11_shift                                    (11)
#define  COLOR_DCC_D_DCC_Bist_4_test_10_shift                                    (10)
#define  COLOR_DCC_D_DCC_Bist_4_test_9_shift                                     (9)
#define  COLOR_DCC_D_DCC_Bist_4_test_8_shift                                     (8)
#define  COLOR_DCC_D_DCC_Bist_4_test_7_shift                                     (7)
#define  COLOR_DCC_D_DCC_Bist_4_test_6_shift                                     (6)
#define  COLOR_DCC_D_DCC_Bist_4_test_5_shift                                     (5)
#define  COLOR_DCC_D_DCC_Bist_4_test_4_shift                                     (4)
#define  COLOR_DCC_D_DCC_Bist_4_test_3_shift                                     (3)
#define  COLOR_DCC_D_DCC_Bist_4_test_2_shift                                     (2)
#define  COLOR_DCC_D_DCC_Bist_4_test_1_shift                                     (1)
#define  COLOR_DCC_D_DCC_Bist_4_test_0_shift                                     (0)
#define  COLOR_DCC_D_DCC_Bist_4_test_15_mask                                     (0x00008000)
#define  COLOR_DCC_D_DCC_Bist_4_test_14_mask                                     (0x00004000)
#define  COLOR_DCC_D_DCC_Bist_4_test_13_mask                                     (0x00002000)
#define  COLOR_DCC_D_DCC_Bist_4_test_12_mask                                     (0x00001000)
#define  COLOR_DCC_D_DCC_Bist_4_test_11_mask                                     (0x00000800)
#define  COLOR_DCC_D_DCC_Bist_4_test_10_mask                                     (0x00000400)
#define  COLOR_DCC_D_DCC_Bist_4_test_9_mask                                      (0x00000200)
#define  COLOR_DCC_D_DCC_Bist_4_test_8_mask                                      (0x00000100)
#define  COLOR_DCC_D_DCC_Bist_4_test_7_mask                                      (0x00000080)
#define  COLOR_DCC_D_DCC_Bist_4_test_6_mask                                      (0x00000040)
#define  COLOR_DCC_D_DCC_Bist_4_test_5_mask                                      (0x00000020)
#define  COLOR_DCC_D_DCC_Bist_4_test_4_mask                                      (0x00000010)
#define  COLOR_DCC_D_DCC_Bist_4_test_3_mask                                      (0x00000008)
#define  COLOR_DCC_D_DCC_Bist_4_test_2_mask                                      (0x00000004)
#define  COLOR_DCC_D_DCC_Bist_4_test_1_mask                                      (0x00000002)
#define  COLOR_DCC_D_DCC_Bist_4_test_0_mask                                      (0x00000001)
#define  COLOR_DCC_D_DCC_Bist_4_test_15(data)                                    (0x00008000&((data)<<15))
#define  COLOR_DCC_D_DCC_Bist_4_test_14(data)                                    (0x00004000&((data)<<14))
#define  COLOR_DCC_D_DCC_Bist_4_test_13(data)                                    (0x00002000&((data)<<13))
#define  COLOR_DCC_D_DCC_Bist_4_test_12(data)                                    (0x00001000&((data)<<12))
#define  COLOR_DCC_D_DCC_Bist_4_test_11(data)                                    (0x00000800&((data)<<11))
#define  COLOR_DCC_D_DCC_Bist_4_test_10(data)                                    (0x00000400&((data)<<10))
#define  COLOR_DCC_D_DCC_Bist_4_test_9(data)                                     (0x00000200&((data)<<9))
#define  COLOR_DCC_D_DCC_Bist_4_test_8(data)                                     (0x00000100&((data)<<8))
#define  COLOR_DCC_D_DCC_Bist_4_test_7(data)                                     (0x00000080&((data)<<7))
#define  COLOR_DCC_D_DCC_Bist_4_test_6(data)                                     (0x00000040&((data)<<6))
#define  COLOR_DCC_D_DCC_Bist_4_test_5(data)                                     (0x00000020&((data)<<5))
#define  COLOR_DCC_D_DCC_Bist_4_test_4(data)                                     (0x00000010&((data)<<4))
#define  COLOR_DCC_D_DCC_Bist_4_test_3(data)                                     (0x00000008&((data)<<3))
#define  COLOR_DCC_D_DCC_Bist_4_test_2(data)                                     (0x00000004&((data)<<2))
#define  COLOR_DCC_D_DCC_Bist_4_test_1(data)                                     (0x00000002&((data)<<1))
#define  COLOR_DCC_D_DCC_Bist_4_test_0(data)                                     (0x00000001&(data))
#define  COLOR_DCC_D_DCC_Bist_4_get_test_15(data)                                ((0x00008000&(data))>>15)
#define  COLOR_DCC_D_DCC_Bist_4_get_test_14(data)                                ((0x00004000&(data))>>14)
#define  COLOR_DCC_D_DCC_Bist_4_get_test_13(data)                                ((0x00002000&(data))>>13)
#define  COLOR_DCC_D_DCC_Bist_4_get_test_12(data)                                ((0x00001000&(data))>>12)
#define  COLOR_DCC_D_DCC_Bist_4_get_test_11(data)                                ((0x00000800&(data))>>11)
#define  COLOR_DCC_D_DCC_Bist_4_get_test_10(data)                                ((0x00000400&(data))>>10)
#define  COLOR_DCC_D_DCC_Bist_4_get_test_9(data)                                 ((0x00000200&(data))>>9)
#define  COLOR_DCC_D_DCC_Bist_4_get_test_8(data)                                 ((0x00000100&(data))>>8)
#define  COLOR_DCC_D_DCC_Bist_4_get_test_7(data)                                 ((0x00000080&(data))>>7)
#define  COLOR_DCC_D_DCC_Bist_4_get_test_6(data)                                 ((0x00000040&(data))>>6)
#define  COLOR_DCC_D_DCC_Bist_4_get_test_5(data)                                 ((0x00000020&(data))>>5)
#define  COLOR_DCC_D_DCC_Bist_4_get_test_4(data)                                 ((0x00000010&(data))>>4)
#define  COLOR_DCC_D_DCC_Bist_4_get_test_3(data)                                 ((0x00000008&(data))>>3)
#define  COLOR_DCC_D_DCC_Bist_4_get_test_2(data)                                 ((0x00000004&(data))>>2)
#define  COLOR_DCC_D_DCC_Bist_4_get_test_1(data)                                 ((0x00000002&(data))>>1)
#define  COLOR_DCC_D_DCC_Bist_4_get_test_0(data)                                 (0x00000001&(data))

#define  COLOR_DCC_D_DCC_Bist_2                                                 0x1802E4F4
#define  COLOR_DCC_D_DCC_Bist_2_reg_addr                                         "0xB802E4F4"
#define  COLOR_DCC_D_DCC_Bist_2_reg                                              0xB802E4F4
#define  COLOR_DCC_D_DCC_Bist_2_inst_addr                                        "0x005D"
#define  set_COLOR_DCC_D_DCC_Bist_2_reg(data)                                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_Bist_2_reg)=data)
#define  get_COLOR_DCC_D_DCC_Bist_2_reg                                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_Bist_2_reg))
#define  COLOR_DCC_D_DCC_Bist_2_rme_15_shift                                     (31)
#define  COLOR_DCC_D_DCC_Bist_2_rme_14_shift                                     (30)
#define  COLOR_DCC_D_DCC_Bist_2_rme_13_shift                                     (29)
#define  COLOR_DCC_D_DCC_Bist_2_rme_12_shift                                     (28)
#define  COLOR_DCC_D_DCC_Bist_2_rme_11_shift                                     (27)
#define  COLOR_DCC_D_DCC_Bist_2_rme_10_shift                                     (26)
#define  COLOR_DCC_D_DCC_Bist_2_rme_9_shift                                      (25)
#define  COLOR_DCC_D_DCC_Bist_2_rme_8_shift                                      (24)
#define  COLOR_DCC_D_DCC_Bist_2_rme_7_shift                                      (23)
#define  COLOR_DCC_D_DCC_Bist_2_rme_6_shift                                      (22)
#define  COLOR_DCC_D_DCC_Bist_2_rme_5_shift                                      (21)
#define  COLOR_DCC_D_DCC_Bist_2_rme_4_shift                                      (20)
#define  COLOR_DCC_D_DCC_Bist_2_rme_3_shift                                      (19)
#define  COLOR_DCC_D_DCC_Bist_2_rme_2_shift                                      (18)
#define  COLOR_DCC_D_DCC_Bist_2_rme_1_shift                                      (17)
#define  COLOR_DCC_D_DCC_Bist_2_rme_0_shift                                      (16)
#define  COLOR_DCC_D_DCC_Bist_2_ls_15_shift                                      (15)
#define  COLOR_DCC_D_DCC_Bist_2_ls_14_shift                                      (14)
#define  COLOR_DCC_D_DCC_Bist_2_ls_13_shift                                      (13)
#define  COLOR_DCC_D_DCC_Bist_2_ls_12_shift                                      (12)
#define  COLOR_DCC_D_DCC_Bist_2_ls_11_shift                                      (11)
#define  COLOR_DCC_D_DCC_Bist_2_ls_10_shift                                      (10)
#define  COLOR_DCC_D_DCC_Bist_2_ls_9_shift                                       (9)
#define  COLOR_DCC_D_DCC_Bist_2_ls_8_shift                                       (8)
#define  COLOR_DCC_D_DCC_Bist_2_ls_7_shift                                       (7)
#define  COLOR_DCC_D_DCC_Bist_2_ls_6_shift                                       (6)
#define  COLOR_DCC_D_DCC_Bist_2_ls_5_shift                                       (5)
#define  COLOR_DCC_D_DCC_Bist_2_ls_4_shift                                       (4)
#define  COLOR_DCC_D_DCC_Bist_2_ls_3_shift                                       (3)
#define  COLOR_DCC_D_DCC_Bist_2_ls_2_shift                                       (2)
#define  COLOR_DCC_D_DCC_Bist_2_ls_1_shift                                       (1)
#define  COLOR_DCC_D_DCC_Bist_2_ls_0_shift                                       (0)
#define  COLOR_DCC_D_DCC_Bist_2_rme_15_mask                                      (0x80000000)
#define  COLOR_DCC_D_DCC_Bist_2_rme_14_mask                                      (0x40000000)
#define  COLOR_DCC_D_DCC_Bist_2_rme_13_mask                                      (0x20000000)
#define  COLOR_DCC_D_DCC_Bist_2_rme_12_mask                                      (0x10000000)
#define  COLOR_DCC_D_DCC_Bist_2_rme_11_mask                                      (0x08000000)
#define  COLOR_DCC_D_DCC_Bist_2_rme_10_mask                                      (0x04000000)
#define  COLOR_DCC_D_DCC_Bist_2_rme_9_mask                                       (0x02000000)
#define  COLOR_DCC_D_DCC_Bist_2_rme_8_mask                                       (0x01000000)
#define  COLOR_DCC_D_DCC_Bist_2_rme_7_mask                                       (0x00800000)
#define  COLOR_DCC_D_DCC_Bist_2_rme_6_mask                                       (0x00400000)
#define  COLOR_DCC_D_DCC_Bist_2_rme_5_mask                                       (0x00200000)
#define  COLOR_DCC_D_DCC_Bist_2_rme_4_mask                                       (0x00100000)
#define  COLOR_DCC_D_DCC_Bist_2_rme_3_mask                                       (0x00080000)
#define  COLOR_DCC_D_DCC_Bist_2_rme_2_mask                                       (0x00040000)
#define  COLOR_DCC_D_DCC_Bist_2_rme_1_mask                                       (0x00020000)
#define  COLOR_DCC_D_DCC_Bist_2_rme_0_mask                                       (0x00010000)
#define  COLOR_DCC_D_DCC_Bist_2_ls_15_mask                                       (0x00008000)
#define  COLOR_DCC_D_DCC_Bist_2_ls_14_mask                                       (0x00004000)
#define  COLOR_DCC_D_DCC_Bist_2_ls_13_mask                                       (0x00002000)
#define  COLOR_DCC_D_DCC_Bist_2_ls_12_mask                                       (0x00001000)
#define  COLOR_DCC_D_DCC_Bist_2_ls_11_mask                                       (0x00000800)
#define  COLOR_DCC_D_DCC_Bist_2_ls_10_mask                                       (0x00000400)
#define  COLOR_DCC_D_DCC_Bist_2_ls_9_mask                                        (0x00000200)
#define  COLOR_DCC_D_DCC_Bist_2_ls_8_mask                                        (0x00000100)
#define  COLOR_DCC_D_DCC_Bist_2_ls_7_mask                                        (0x00000080)
#define  COLOR_DCC_D_DCC_Bist_2_ls_6_mask                                        (0x00000040)
#define  COLOR_DCC_D_DCC_Bist_2_ls_5_mask                                        (0x00000020)
#define  COLOR_DCC_D_DCC_Bist_2_ls_4_mask                                        (0x00000010)
#define  COLOR_DCC_D_DCC_Bist_2_ls_3_mask                                        (0x00000008)
#define  COLOR_DCC_D_DCC_Bist_2_ls_2_mask                                        (0x00000004)
#define  COLOR_DCC_D_DCC_Bist_2_ls_1_mask                                        (0x00000002)
#define  COLOR_DCC_D_DCC_Bist_2_ls_0_mask                                        (0x00000001)
#define  COLOR_DCC_D_DCC_Bist_2_rme_15(data)                                     (0x80000000&((data)<<31))
#define  COLOR_DCC_D_DCC_Bist_2_rme_14(data)                                     (0x40000000&((data)<<30))
#define  COLOR_DCC_D_DCC_Bist_2_rme_13(data)                                     (0x20000000&((data)<<29))
#define  COLOR_DCC_D_DCC_Bist_2_rme_12(data)                                     (0x10000000&((data)<<28))
#define  COLOR_DCC_D_DCC_Bist_2_rme_11(data)                                     (0x08000000&((data)<<27))
#define  COLOR_DCC_D_DCC_Bist_2_rme_10(data)                                     (0x04000000&((data)<<26))
#define  COLOR_DCC_D_DCC_Bist_2_rme_9(data)                                      (0x02000000&((data)<<25))
#define  COLOR_DCC_D_DCC_Bist_2_rme_8(data)                                      (0x01000000&((data)<<24))
#define  COLOR_DCC_D_DCC_Bist_2_rme_7(data)                                      (0x00800000&((data)<<23))
#define  COLOR_DCC_D_DCC_Bist_2_rme_6(data)                                      (0x00400000&((data)<<22))
#define  COLOR_DCC_D_DCC_Bist_2_rme_5(data)                                      (0x00200000&((data)<<21))
#define  COLOR_DCC_D_DCC_Bist_2_rme_4(data)                                      (0x00100000&((data)<<20))
#define  COLOR_DCC_D_DCC_Bist_2_rme_3(data)                                      (0x00080000&((data)<<19))
#define  COLOR_DCC_D_DCC_Bist_2_rme_2(data)                                      (0x00040000&((data)<<18))
#define  COLOR_DCC_D_DCC_Bist_2_rme_1(data)                                      (0x00020000&((data)<<17))
#define  COLOR_DCC_D_DCC_Bist_2_rme_0(data)                                      (0x00010000&((data)<<16))
#define  COLOR_DCC_D_DCC_Bist_2_ls_15(data)                                      (0x00008000&((data)<<15))
#define  COLOR_DCC_D_DCC_Bist_2_ls_14(data)                                      (0x00004000&((data)<<14))
#define  COLOR_DCC_D_DCC_Bist_2_ls_13(data)                                      (0x00002000&((data)<<13))
#define  COLOR_DCC_D_DCC_Bist_2_ls_12(data)                                      (0x00001000&((data)<<12))
#define  COLOR_DCC_D_DCC_Bist_2_ls_11(data)                                      (0x00000800&((data)<<11))
#define  COLOR_DCC_D_DCC_Bist_2_ls_10(data)                                      (0x00000400&((data)<<10))
#define  COLOR_DCC_D_DCC_Bist_2_ls_9(data)                                       (0x00000200&((data)<<9))
#define  COLOR_DCC_D_DCC_Bist_2_ls_8(data)                                       (0x00000100&((data)<<8))
#define  COLOR_DCC_D_DCC_Bist_2_ls_7(data)                                       (0x00000080&((data)<<7))
#define  COLOR_DCC_D_DCC_Bist_2_ls_6(data)                                       (0x00000040&((data)<<6))
#define  COLOR_DCC_D_DCC_Bist_2_ls_5(data)                                       (0x00000020&((data)<<5))
#define  COLOR_DCC_D_DCC_Bist_2_ls_4(data)                                       (0x00000010&((data)<<4))
#define  COLOR_DCC_D_DCC_Bist_2_ls_3(data)                                       (0x00000008&((data)<<3))
#define  COLOR_DCC_D_DCC_Bist_2_ls_2(data)                                       (0x00000004&((data)<<2))
#define  COLOR_DCC_D_DCC_Bist_2_ls_1(data)                                       (0x00000002&((data)<<1))
#define  COLOR_DCC_D_DCC_Bist_2_ls_0(data)                                       (0x00000001&(data))
#define  COLOR_DCC_D_DCC_Bist_2_get_rme_15(data)                                 ((0x80000000&(data))>>31)
#define  COLOR_DCC_D_DCC_Bist_2_get_rme_14(data)                                 ((0x40000000&(data))>>30)
#define  COLOR_DCC_D_DCC_Bist_2_get_rme_13(data)                                 ((0x20000000&(data))>>29)
#define  COLOR_DCC_D_DCC_Bist_2_get_rme_12(data)                                 ((0x10000000&(data))>>28)
#define  COLOR_DCC_D_DCC_Bist_2_get_rme_11(data)                                 ((0x08000000&(data))>>27)
#define  COLOR_DCC_D_DCC_Bist_2_get_rme_10(data)                                 ((0x04000000&(data))>>26)
#define  COLOR_DCC_D_DCC_Bist_2_get_rme_9(data)                                  ((0x02000000&(data))>>25)
#define  COLOR_DCC_D_DCC_Bist_2_get_rme_8(data)                                  ((0x01000000&(data))>>24)
#define  COLOR_DCC_D_DCC_Bist_2_get_rme_7(data)                                  ((0x00800000&(data))>>23)
#define  COLOR_DCC_D_DCC_Bist_2_get_rme_6(data)                                  ((0x00400000&(data))>>22)
#define  COLOR_DCC_D_DCC_Bist_2_get_rme_5(data)                                  ((0x00200000&(data))>>21)
#define  COLOR_DCC_D_DCC_Bist_2_get_rme_4(data)                                  ((0x00100000&(data))>>20)
#define  COLOR_DCC_D_DCC_Bist_2_get_rme_3(data)                                  ((0x00080000&(data))>>19)
#define  COLOR_DCC_D_DCC_Bist_2_get_rme_2(data)                                  ((0x00040000&(data))>>18)
#define  COLOR_DCC_D_DCC_Bist_2_get_rme_1(data)                                  ((0x00020000&(data))>>17)
#define  COLOR_DCC_D_DCC_Bist_2_get_rme_0(data)                                  ((0x00010000&(data))>>16)
#define  COLOR_DCC_D_DCC_Bist_2_get_ls_15(data)                                  ((0x00008000&(data))>>15)
#define  COLOR_DCC_D_DCC_Bist_2_get_ls_14(data)                                  ((0x00004000&(data))>>14)
#define  COLOR_DCC_D_DCC_Bist_2_get_ls_13(data)                                  ((0x00002000&(data))>>13)
#define  COLOR_DCC_D_DCC_Bist_2_get_ls_12(data)                                  ((0x00001000&(data))>>12)
#define  COLOR_DCC_D_DCC_Bist_2_get_ls_11(data)                                  ((0x00000800&(data))>>11)
#define  COLOR_DCC_D_DCC_Bist_2_get_ls_10(data)                                  ((0x00000400&(data))>>10)
#define  COLOR_DCC_D_DCC_Bist_2_get_ls_9(data)                                   ((0x00000200&(data))>>9)
#define  COLOR_DCC_D_DCC_Bist_2_get_ls_8(data)                                   ((0x00000100&(data))>>8)
#define  COLOR_DCC_D_DCC_Bist_2_get_ls_7(data)                                   ((0x00000080&(data))>>7)
#define  COLOR_DCC_D_DCC_Bist_2_get_ls_6(data)                                   ((0x00000040&(data))>>6)
#define  COLOR_DCC_D_DCC_Bist_2_get_ls_5(data)                                   ((0x00000020&(data))>>5)
#define  COLOR_DCC_D_DCC_Bist_2_get_ls_4(data)                                   ((0x00000010&(data))>>4)
#define  COLOR_DCC_D_DCC_Bist_2_get_ls_3(data)                                   ((0x00000008&(data))>>3)
#define  COLOR_DCC_D_DCC_Bist_2_get_ls_2(data)                                   ((0x00000004&(data))>>2)
#define  COLOR_DCC_D_DCC_Bist_2_get_ls_1(data)                                   ((0x00000002&(data))>>1)
#define  COLOR_DCC_D_DCC_Bist_2_get_ls_0(data)                                   (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======COLOR_DCC register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dcc_overlay:1;
        RBus_UInt32  y_mapping_mode:1;
        RBus_UInt32  y_mapping_blending_wt:5;
        RBus_UInt32  dcc_user_curve_main_en:1;
        RBus_UInt32  dcc_user_curve_sub_en:1;
        RBus_UInt32  ai_blending_2_inside_ratio_msb:1;
        RBus_UInt32  ai_blending_1_inside_ratio_msb:1;
        RBus_UInt32  ai_blending_0_inside_ratio_msb:1;
        RBus_UInt32  main_table_segment:1;
        RBus_UInt32  main_table_sel:1;
        RBus_UInt32  dcc_main_mode_sel:2;
        RBus_UInt32  dummy1802e400_15_4:12;
        RBus_UInt32  sub_table_segment:1;
        RBus_UInt32  sub_table_sel:1;
        RBus_UInt32  dcc_sub_mode_sel:2;
    };
}color_dcc_d_dcc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  dcc_y_sram_tab_read_sel:1;
        RBus_UInt32  dcc_y_sram_tab_acc_index_cur:6;
        RBus_UInt32  dcc_y_sram_tab_acc_index:6;
        RBus_UInt32  dcc_y_sram_tab_rw_sel:2;
        RBus_UInt32  dcc_y_sram_tab_acc_sel:2;
        RBus_UInt32  dcc_y_sram_tab_acc_ready:1;
    };
}color_dcc_dcc_y_sram_tab_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dcc_y_sram_tab_base:12;
        RBus_UInt32  dcc_y_sram_tab_g0:10;
        RBus_UInt32  dcc_y_sram_tab_g1:10;
    };
}color_dcc_dcc_y_sram_tab_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  sram_user_tab_read_sel:1;
        RBus_UInt32  sram_user_tab_acc_index_cur:6;
        RBus_UInt32  sram_user_tab_acc_index:6;
        RBus_UInt32  sram_user_tab_rw_sel:2;
        RBus_UInt32  sram_user_tab_acc_sel:2;
        RBus_UInt32  sram_user_tab_acc_ready:1;
    };
}color_dcc_sram_user_tab_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sram_user_tab_base:12;
        RBus_UInt32  sram_user_tab_g0:10;
        RBus_UInt32  sram_user_tab_g1:10;
    };
}color_dcc_sram_user_tab_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_limit_en_main:1;
        RBus_UInt32  chroma_gain_limit_en_sub:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  luma_offset_main:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  luma_offset_sub:10;
    };
}color_dcc_dcc_ctrl_luma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  chroma_gain_limit_seg4_main:6;
        RBus_UInt32  chroma_gain_limit_seg3_main:6;
        RBus_UInt32  chroma_gain_limit_seg2_main:6;
        RBus_UInt32  chroma_gain_limit_seg1_main:6;
        RBus_UInt32  chroma_gain_limit_seg0_main:6;
    };
}color_dcc_dcc_chroma_gain_limit_main_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  chroma_gain_limit_seg9_main:6;
        RBus_UInt32  chroma_gain_limit_seg8_main:6;
        RBus_UInt32  chroma_gain_limit_seg7_main:6;
        RBus_UInt32  chroma_gain_limit_seg6_main:6;
        RBus_UInt32  chroma_gain_limit_seg5_main:6;
    };
}color_dcc_dcc_chroma_gain_limit_main_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  chroma_gain_limit_seg14_main:6;
        RBus_UInt32  chroma_gain_limit_seg13_main:6;
        RBus_UInt32  chroma_gain_limit_seg12_main:6;
        RBus_UInt32  chroma_gain_limit_seg11_main:6;
        RBus_UInt32  chroma_gain_limit_seg10_main:6;
    };
}color_dcc_dcc_chroma_gain_limit_main_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  chroma_gain_limit_seg19_main:6;
        RBus_UInt32  chroma_gain_limit_seg18_main:6;
        RBus_UInt32  chroma_gain_limit_seg17_main:6;
        RBus_UInt32  chroma_gain_limit_seg16_main:6;
        RBus_UInt32  chroma_gain_limit_seg15_main:6;
    };
}color_dcc_dcc_chroma_gain_limit_main_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  chroma_gain_limit_seg20_main:6;
    };
}color_dcc_dcc_chroma_gain_limit_main_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  chroma_gain_limit_seg4_sub:6;
        RBus_UInt32  chroma_gain_limit_seg3_sub:6;
        RBus_UInt32  chroma_gain_limit_seg2_sub:6;
        RBus_UInt32  chroma_gain_limit_seg1_sub:6;
        RBus_UInt32  chroma_gain_limit_seg0_sub:6;
    };
}color_dcc_dcc_chroma_gain_limit_sub_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  chroma_gain_limit_seg9_sub:6;
        RBus_UInt32  chroma_gain_limit_seg8_sub:6;
        RBus_UInt32  chroma_gain_limit_seg7_sub:6;
        RBus_UInt32  chroma_gain_limit_seg6_sub:6;
        RBus_UInt32  chroma_gain_limit_seg5_sub:6;
    };
}color_dcc_dcc_chroma_gain_limit_sub_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  chroma_gain_limit_seg14_sub:6;
        RBus_UInt32  chroma_gain_limit_seg13_sub:6;
        RBus_UInt32  chroma_gain_limit_seg12_sub:6;
        RBus_UInt32  chroma_gain_limit_seg11_sub:6;
        RBus_UInt32  chroma_gain_limit_seg10_sub:6;
    };
}color_dcc_dcc_chroma_gain_limit_sub_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  chroma_gain_limit_seg19_sub:6;
        RBus_UInt32  chroma_gain_limit_seg18_sub:6;
        RBus_UInt32  chroma_gain_limit_seg17_sub:6;
        RBus_UInt32  chroma_gain_limit_seg16_sub:6;
        RBus_UInt32  chroma_gain_limit_seg15_sub:6;
    };
}color_dcc_dcc_chroma_gain_limit_sub_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  chroma_gain_limit_seg20_sub:6;
    };
}color_dcc_dcc_chroma_gain_limit_sub_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802e440_31_30:2;
        RBus_UInt32  saturation_byy_v_tab_select_main:2;
        RBus_UInt32  saturation_byy_u_tab_select_main:2;
        RBus_UInt32  chroma_enhance_below_tab_select_main:2;
        RBus_UInt32  chroma_enhance_above_tab_select_main:2;
        RBus_UInt32  chroma_gain_base_main:3;
        RBus_UInt32  chroma_gain_lookup_mode_main:1;
        RBus_UInt32  chroma_gain_mode_main:1;
        RBus_UInt32  chroma_gain_en_main:1;
        RBus_UInt32  dummy1802e440_15_14:2;
        RBus_UInt32  saturation_byy_v_tab_select_sub:2;
        RBus_UInt32  saturation_byy_u_tab_select_sub:2;
        RBus_UInt32  chroma_enhance_below_tab_select_sub:2;
        RBus_UInt32  chroma_enhance_above_tab_select_sub:2;
        RBus_UInt32  chroma_gain_base_sub:3;
        RBus_UInt32  chroma_gain_lookup_mode_sub:1;
        RBus_UInt32  chroma_gain_mode_sub:1;
        RBus_UInt32  chroma_gain_en_sub:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  dcc_c_sram_tab_read_sel:1;
        RBus_UInt32  dcc_c_sram_tab_acc_index_cur:5;
        RBus_UInt32  dcc_c_sram_tab_acc_index:5;
        RBus_UInt32  dcc_c_sram_tab_rw_sel:2;
        RBus_UInt32  dcc_c_sram_tab_acc_sel:3;
        RBus_UInt32  dcc_c_sram_tab_acc_ready:1;
    };
}color_dcc_dcc_c_sram_tab_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  dcc_c_sram_tab_base:7;
        RBus_UInt32  dcc_c_sram_tab_g0:7;
        RBus_UInt32  dcc_c_sram_tab_g1:7;
    };
}color_dcc_dcc_c_sram_tab_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  db_en:1;
        RBus_UInt32  db_read_level:1;
        RBus_UInt32  db_apply:1;
    };
}color_dcc_d_dcc_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  region_ratio_blending_en:1;
        RBus_UInt32  colorspace_sel:1;
        RBus_UInt32  data_format_sel:1;
        RBus_UInt32  data_range_sel:1;
        RBus_UInt32  y_blending_debug_mode_en:1;
        RBus_UInt32  y_blending_debug_mode_sel:2;
        RBus_UInt32  res2:3;
        RBus_UInt32  y_blending_mode:1;
        RBus_UInt32  ratio_lpf_en:1;
        RBus_UInt32  y_blending_5_enhance_en:1;
        RBus_UInt32  y_blending_4_enhance_en:1;
        RBus_UInt32  y_blending_0_enhance_en:1;
        RBus_UInt32  y_blending_1_enhance_en:1;
        RBus_UInt32  y_blending_2_enhance_en:1;
        RBus_UInt32  y_blending_3_enhance_en:1;
        RBus_UInt32  y_blending_reg0_en:1;
        RBus_UInt32  y_blending_reg1_en:1;
        RBus_UInt32  y_blending_reg2_en:1;
        RBus_UInt32  y_blending_reg3_en:1;
        RBus_UInt32  y_blending_en:1;
    };
}color_dcc_d_dcc_skin_tone_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  main_offset_en:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  main_offset_range:3;
        RBus_UInt32  res3:5;
        RBus_UInt32  main_offset:11;
    };
}color_dcc_d_dcc_main_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  sub_offset_en:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  sub_offset_range:3;
        RBus_UInt32  res3:5;
        RBus_UInt32  sub_offset:11;
    };
}color_dcc_d_dcc_sub_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  y_blending_0_h_center_width:12;
    };
}color_dcc_d_dcc_skin_tone_hsi_0_center_width_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  y_blending_0_i_center_width:12;
        RBus_UInt32  y_blending_0_s_center_width:12;
    };
}color_dcc_d_dcc_skin_tone_hsi_0_center_width_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  y_blending_1_h_center_width:12;
    };
}color_dcc_d_dcc_skin_tone_hsi_1_center_width_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  y_blending_1_i_center_width:12;
        RBus_UInt32  y_blending_1_s_center_width:12;
    };
}color_dcc_d_dcc_skin_tone_hsi_1_center_width_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  y_blending_2_h_center_width:12;
    };
}color_dcc_d_dcc_skin_tone_hsi_2_center_width_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  y_blending_2_i_center_width:12;
        RBus_UInt32  y_blending_2_s_center_width:12;
    };
}color_dcc_d_dcc_skin_tone_hsi_2_center_width_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  y_blending_3_h_center_width:12;
    };
}color_dcc_d_dcc_skin_tone_hsi_3_center_width_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  y_blending_3_i_center_width:12;
        RBus_UInt32  y_blending_3_s_center_width:12;
    };
}color_dcc_d_dcc_skin_tone_hsi_3_center_width_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  y_blending_0_u_center:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  y_blending_0_v_center:13;
    };
}color_dcc_d_dcc_skin_tone_yuv_center_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  y_blending_0_y_center:13;
        RBus_UInt32  res2:4;
        RBus_UInt32  y_blending_0_y_range:4;
        RBus_UInt32  y_blending_0_u_range:4;
        RBus_UInt32  y_blending_0_v_range:4;
    };
}color_dcc_d_dcc_skin_tone_yuv_range_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  y_blending_1_u_center:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  y_blending_1_v_center:13;
    };
}color_dcc_d_dcc_skin_tone_yuv_center_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  y_blending_1_y_center:13;
        RBus_UInt32  res2:4;
        RBus_UInt32  y_blending_1_y_range:4;
        RBus_UInt32  y_blending_1_u_range:4;
        RBus_UInt32  y_blending_1_v_range:4;
    };
}color_dcc_d_dcc_skin_tone_yuv_range_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  y_blending_2_u_center:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  y_blending_2_v_center:13;
    };
}color_dcc_d_dcc_skin_tone_yuv_center_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  y_blending_2_y_center:13;
        RBus_UInt32  res2:4;
        RBus_UInt32  y_blending_2_y_range:4;
        RBus_UInt32  y_blending_2_u_range:4;
        RBus_UInt32  y_blending_2_v_range:4;
    };
}color_dcc_d_dcc_skin_tone_yuv_range_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  y_blending_3_u_center:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  y_blending_3_v_center:13;
    };
}color_dcc_d_dcc_skin_tone_yuv_center_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  y_blending_3_y_center:13;
        RBus_UInt32  res2:4;
        RBus_UInt32  y_blending_3_y_range:4;
        RBus_UInt32  y_blending_3_u_range:4;
        RBus_UInt32  y_blending_3_v_range:4;
    };
}color_dcc_d_dcc_skin_tone_yuv_range_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_0_ratio_0:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_0_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_0_ratio_2:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  y_blending_0_ratio_3:6;
    };
}color_dcc_d_dcc_skin_tone_segment0_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_0_ratio_4:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_0_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_0_ratio_6:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  y_blending_0_ratio_7:6;
    };
}color_dcc_d_dcc_skin_tone_segment0_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_1_ratio_0:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_1_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_1_ratio_2:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  y_blending_1_ratio_3:6;
    };
}color_dcc_d_dcc_skin_tone_segment1_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_1_ratio_4:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_1_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_1_ratio_6:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  y_blending_1_ratio_7:6;
    };
}color_dcc_d_dcc_skin_tone_segment1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_2_ratio_0:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_2_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_2_ratio_2:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  y_blending_2_ratio_3:6;
    };
}color_dcc_d_dcc_skin_tone_segment2_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_2_ratio_4:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_2_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_2_ratio_6:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  y_blending_2_ratio_7:6;
    };
}color_dcc_d_dcc_skin_tone_segment2_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_3_ratio_0:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_3_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_3_ratio_2:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  y_blending_3_ratio_3:6;
    };
}color_dcc_d_dcc_skin_tone_segment3_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_3_ratio_4:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_3_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_3_ratio_6:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  y_blending_3_ratio_7:6;
    };
}color_dcc_d_dcc_skin_tone_segment3_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_0_ratio_0:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_0_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_0_ratio_2:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  c_blending_0_ratio_3:6;
    };
}color_dcc_d_dcc_skin_tone_segment_c0_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_0_ratio_4:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_0_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_0_ratio_6:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  c_blending_0_ratio_7:6;
    };
}color_dcc_d_dcc_skin_tone_segment_c0_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_1_ratio_0:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_1_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_1_ratio_2:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  c_blending_1_ratio_3:6;
    };
}color_dcc_d_dcc_skin_tone_segment_c1_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_1_ratio_4:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_1_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_1_ratio_6:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  c_blending_1_ratio_7:6;
    };
}color_dcc_d_dcc_skin_tone_segment_c1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_2_ratio_0:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_2_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_2_ratio_2:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  c_blending_2_ratio_3:6;
    };
}color_dcc_d_dcc_skin_tone_segment_c2_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_2_ratio_4:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_2_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_2_ratio_6:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  c_blending_2_ratio_7:6;
    };
}color_dcc_d_dcc_skin_tone_segment_c2_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_3_ratio_0:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_3_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_3_ratio_2:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  c_blending_3_ratio_3:6;
    };
}color_dcc_d_dcc_skin_tone_segment_c3_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_3_ratio_4:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_3_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_3_ratio_6:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  c_blending_3_ratio_7:6;
    };
}color_dcc_d_dcc_skin_tone_segment_c3_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  cds_skin_en:1;
    };
}color_dcc_d_dcc_cds_skin_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cds_uv_range_1:12;
        RBus_UInt32  cds_uv_range_0:12;
    };
}color_dcc_d_dcc_cds_skin_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cds_uv_range_3:12;
        RBus_UInt32  cds_uv_range_2:12;
    };
}color_dcc_d_dcc_cds_skin_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cds_uv_range_5:12;
        RBus_UInt32  cds_uv_range_4:12;
    };
}color_dcc_d_dcc_cds_skin_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_4_ratio_0:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_4_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_4_ratio_2:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  c_blending_4_ratio_3:6;
    };
}color_dcc_d_dcc_skin_tone_segment_c4_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_4_ratio_4:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_4_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_4_ratio_6:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  c_blending_4_ratio_7:6;
    };
}color_dcc_d_dcc_skin_tone_segment_c4_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_5_ratio_0:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_5_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_5_ratio_2:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  c_blending_5_ratio_3:6;
    };
}color_dcc_d_dcc_skin_tone_segment_c5_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_5_ratio_4:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_5_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_5_ratio_6:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  c_blending_5_ratio_7:6;
    };
}color_dcc_d_dcc_skin_tone_segment_c5_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ai_ros_en:1;
        RBus_UInt32  ai_blending_0_ratio_3:6;
        RBus_UInt32  ai_blending_0_ratio_2:6;
        RBus_UInt32  ai_blending_0_ratio_1:6;
        RBus_UInt32  ai_blending_0_ratio_0:6;
        RBus_UInt32  ai_blending_0_inside_ratio:5;
    };
}color_dcc_d_dcc_ai_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  ai_blending_1_ratio_3:6;
        RBus_UInt32  ai_blending_1_ratio_2:6;
        RBus_UInt32  ai_blending_1_ratio_1:6;
        RBus_UInt32  ai_blending_1_ratio_0:6;
        RBus_UInt32  ai_blending_1_inside_ratio:5;
    };
}color_dcc_d_dcc_ai_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  ai_blending_2_ratio_3:6;
        RBus_UInt32  ai_blending_2_ratio_2:6;
        RBus_UInt32  ai_blending_2_ratio_1:6;
        RBus_UInt32  ai_blending_2_ratio_0:6;
        RBus_UInt32  ai_blending_2_inside_ratio:5;
    };
}color_dcc_d_dcc_ai_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  ai_blending_3_ratio_3:6;
        RBus_UInt32  ai_blending_3_ratio_2:6;
        RBus_UInt32  ai_blending_3_ratio_1:6;
        RBus_UInt32  ai_blending_3_ratio_0:6;
        RBus_UInt32  ai_blending_3_inside_ratio:5;
    };
}color_dcc_d_dcc_ai_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  ai_blending_4_ratio_3:6;
        RBus_UInt32  ai_blending_4_ratio_2:6;
        RBus_UInt32  ai_blending_4_ratio_1:6;
        RBus_UInt32  ai_blending_4_ratio_0:6;
        RBus_UInt32  ai_blending_4_inside_ratio:5;
    };
}color_dcc_d_dcc_ai_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  ai_blending_5_ratio_3:6;
        RBus_UInt32  ai_blending_5_ratio_2:6;
        RBus_UInt32  ai_blending_5_ratio_1:6;
        RBus_UInt32  ai_blending_5_ratio_0:6;
        RBus_UInt32  ai_blending_5_inside_ratio:5;
    };
}color_dcc_d_dcc_ai_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_octa_tang_mode4:3;
        RBus_UInt32  ai_octa_tang_mode3:3;
        RBus_UInt32  ai_octa_tang_mode2:3;
        RBus_UInt32  ai_octa_tang_mode1:3;
        RBus_UInt32  ai_octa_tang_mode0:3;
        RBus_UInt32  ai_detect_value:8;
        RBus_UInt32  ai_control_value:8;
        RBus_UInt32  ai_adjust_en:1;
    };
}color_dcc_d_dcc_ai_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ai_octa_tang_mode5:3;
        RBus_UInt32  ai_range_1:12;
        RBus_UInt32  ai_range_0:12;
    };
}color_dcc_d_dcc_ai_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ai_octa_tang_dir5:1;
        RBus_UInt32  ai_octa_tang_dir4:1;
        RBus_UInt32  ai_octa_tang_dir3:1;
        RBus_UInt32  ai_octa_tang_dir2:1;
        RBus_UInt32  ai_octa_tang_dir1:1;
        RBus_UInt32  ai_octa_tang_dir0:1;
        RBus_UInt32  ai_range_3:12;
        RBus_UInt32  ai_range_2:12;
    };
}color_dcc_d_dcc_ai_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ai_range_5:12;
        RBus_UInt32  ai_range_4:12;
    };
}color_dcc_d_dcc_ai_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ai_center_y_0:12;
        RBus_UInt32  ai_center_x_0:12;
    };
}color_dcc_d_dcc_ai_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ai_center_y_1:12;
        RBus_UInt32  ai_center_x_1:12;
    };
}color_dcc_d_dcc_ai_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ai_center_y_2:12;
        RBus_UInt32  ai_center_x_2:12;
    };
}color_dcc_d_dcc_ai_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ai_center_y_3:12;
        RBus_UInt32  ai_center_x_3:12;
    };
}color_dcc_d_dcc_ai_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ai_center_y_4:12;
        RBus_UInt32  ai_center_x_4:12;
    };
}color_dcc_d_dcc_ai_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ai_center_y_5:12;
        RBus_UInt32  ai_center_x_5:12;
    };
}color_dcc_d_dcc_ai_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ai_center_v_0:12;
        RBus_UInt32  ai_center_u_0:12;
    };
}color_dcc_d_dcc_ai_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ai_center_v_1:12;
        RBus_UInt32  ai_center_u_1:12;
    };
}color_dcc_d_dcc_ai_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ai_center_v_2:12;
        RBus_UInt32  ai_center_u_2:12;
    };
}color_dcc_d_dcc_ai_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ai_center_v_3:12;
        RBus_UInt32  ai_center_u_3:12;
    };
}color_dcc_d_dcc_ai_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ai_center_v_4:12;
        RBus_UInt32  ai_center_u_4:12;
    };
}color_dcc_d_dcc_ai_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ai_center_v_5:12;
        RBus_UInt32  ai_center_u_5:12;
    };
}color_dcc_d_dcc_ai_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_0:32;
    };
}color_dcc_d_dcc_fwused_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_1:32;
    };
}color_dcc_d_dcc_fwused_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_2:32;
    };
}color_dcc_d_dcc_fwused_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_3:32;
    };
}color_dcc_d_dcc_fwused_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_fail_15:1;
        RBus_UInt32  bist_fail_14:1;
        RBus_UInt32  bist_fail_13:1;
        RBus_UInt32  bist_fail_12:1;
        RBus_UInt32  bist_fail_11:1;
        RBus_UInt32  bist_fail_10:1;
        RBus_UInt32  bist_fail_9:1;
        RBus_UInt32  bist_fail_8:1;
        RBus_UInt32  bist_fail_7:1;
        RBus_UInt32  bist_fail_6:1;
        RBus_UInt32  bist_fail_5:1;
        RBus_UInt32  bist_fail_4:1;
        RBus_UInt32  bist_fail_3:1;
        RBus_UInt32  bist_fail_2:1;
        RBus_UInt32  bist_fail_1:1;
        RBus_UInt32  bist_fail_0:1;
        RBus_UInt32  drf_bist_fail_15:1;
        RBus_UInt32  drf_bist_fail_14:1;
        RBus_UInt32  drf_bist_fail_13:1;
        RBus_UInt32  drf_bist_fail_12:1;
        RBus_UInt32  drf_bist_fail_11:1;
        RBus_UInt32  drf_bist_fail_10:1;
        RBus_UInt32  drf_bist_fail_9:1;
        RBus_UInt32  drf_bist_fail_8:1;
        RBus_UInt32  drf_bist_fail_7:1;
        RBus_UInt32  drf_bist_fail_6:1;
        RBus_UInt32  drf_bist_fail_5:1;
        RBus_UInt32  drf_bist_fail_4:1;
        RBus_UInt32  drf_bist_fail_3:1;
        RBus_UInt32  drf_bist_fail_2:1;
        RBus_UInt32  drf_bist_fail_1:1;
        RBus_UInt32  drf_bist_fail_0:1;
    };
}color_dcc_d_dcc_bist_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rm_7:4;
        RBus_UInt32  rm_6:4;
        RBus_UInt32  rm_5:4;
        RBus_UInt32  rm_4:4;
        RBus_UInt32  rm_3:4;
        RBus_UInt32  rm_2:4;
        RBus_UInt32  rm_1:4;
        RBus_UInt32  rm_0:4;
    };
}color_dcc_d_dcc_bist_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rm_15:4;
        RBus_UInt32  rm_14:4;
        RBus_UInt32  rm_13:4;
        RBus_UInt32  rm_12:4;
        RBus_UInt32  rm_11:4;
        RBus_UInt32  rm_10:4;
        RBus_UInt32  rm_9:4;
        RBus_UInt32  rm_8:4;
    };
}color_dcc_d_dcc_bist_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  test_15:1;
        RBus_UInt32  test_14:1;
        RBus_UInt32  test_13:1;
        RBus_UInt32  test_12:1;
        RBus_UInt32  test_11:1;
        RBus_UInt32  test_10:1;
        RBus_UInt32  test_9:1;
        RBus_UInt32  test_8:1;
        RBus_UInt32  test_7:1;
        RBus_UInt32  test_6:1;
        RBus_UInt32  test_5:1;
        RBus_UInt32  test_4:1;
        RBus_UInt32  test_3:1;
        RBus_UInt32  test_2:1;
        RBus_UInt32  test_1:1;
        RBus_UInt32  test_0:1;
    };
}color_dcc_d_dcc_bist_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rme_15:1;
        RBus_UInt32  rme_14:1;
        RBus_UInt32  rme_13:1;
        RBus_UInt32  rme_12:1;
        RBus_UInt32  rme_11:1;
        RBus_UInt32  rme_10:1;
        RBus_UInt32  rme_9:1;
        RBus_UInt32  rme_8:1;
        RBus_UInt32  rme_7:1;
        RBus_UInt32  rme_6:1;
        RBus_UInt32  rme_5:1;
        RBus_UInt32  rme_4:1;
        RBus_UInt32  rme_3:1;
        RBus_UInt32  rme_2:1;
        RBus_UInt32  rme_1:1;
        RBus_UInt32  rme_0:1;
        RBus_UInt32  ls_15:1;
        RBus_UInt32  ls_14:1;
        RBus_UInt32  ls_13:1;
        RBus_UInt32  ls_12:1;
        RBus_UInt32  ls_11:1;
        RBus_UInt32  ls_10:1;
        RBus_UInt32  ls_9:1;
        RBus_UInt32  ls_8:1;
        RBus_UInt32  ls_7:1;
        RBus_UInt32  ls_6:1;
        RBus_UInt32  ls_5:1;
        RBus_UInt32  ls_4:1;
        RBus_UInt32  ls_3:1;
        RBus_UInt32  ls_2:1;
        RBus_UInt32  ls_1:1;
        RBus_UInt32  ls_0:1;
    };
}color_dcc_d_dcc_bist_2_RBUS;

#else //apply LITTLE_ENDIAN

//======COLOR_DCC register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dcc_sub_mode_sel:2;
        RBus_UInt32  sub_table_sel:1;
        RBus_UInt32  sub_table_segment:1;
        RBus_UInt32  dummy1802e400_15_4:12;
        RBus_UInt32  dcc_main_mode_sel:2;
        RBus_UInt32  main_table_sel:1;
        RBus_UInt32  main_table_segment:1;
        RBus_UInt32  ai_blending_0_inside_ratio_msb:1;
        RBus_UInt32  ai_blending_1_inside_ratio_msb:1;
        RBus_UInt32  ai_blending_2_inside_ratio_msb:1;
        RBus_UInt32  dcc_user_curve_sub_en:1;
        RBus_UInt32  dcc_user_curve_main_en:1;
        RBus_UInt32  y_mapping_blending_wt:5;
        RBus_UInt32  y_mapping_mode:1;
        RBus_UInt32  dcc_overlay:1;
    };
}color_dcc_d_dcc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dcc_y_sram_tab_acc_ready:1;
        RBus_UInt32  dcc_y_sram_tab_acc_sel:2;
        RBus_UInt32  dcc_y_sram_tab_rw_sel:2;
        RBus_UInt32  dcc_y_sram_tab_acc_index:6;
        RBus_UInt32  dcc_y_sram_tab_acc_index_cur:6;
        RBus_UInt32  dcc_y_sram_tab_read_sel:1;
        RBus_UInt32  res1:14;
    };
}color_dcc_dcc_y_sram_tab_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dcc_y_sram_tab_g1:10;
        RBus_UInt32  dcc_y_sram_tab_g0:10;
        RBus_UInt32  dcc_y_sram_tab_base:12;
    };
}color_dcc_dcc_y_sram_tab_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sram_user_tab_acc_ready:1;
        RBus_UInt32  sram_user_tab_acc_sel:2;
        RBus_UInt32  sram_user_tab_rw_sel:2;
        RBus_UInt32  sram_user_tab_acc_index:6;
        RBus_UInt32  sram_user_tab_acc_index_cur:6;
        RBus_UInt32  sram_user_tab_read_sel:1;
        RBus_UInt32  res1:14;
    };
}color_dcc_sram_user_tab_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sram_user_tab_g1:10;
        RBus_UInt32  sram_user_tab_g0:10;
        RBus_UInt32  sram_user_tab_base:12;
    };
}color_dcc_sram_user_tab_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  luma_offset_sub:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  luma_offset_main:10;
        RBus_UInt32  res2:4;
        RBus_UInt32  chroma_gain_limit_en_sub:1;
        RBus_UInt32  chroma_gain_limit_en_main:1;
    };
}color_dcc_dcc_ctrl_luma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_limit_seg0_main:6;
        RBus_UInt32  chroma_gain_limit_seg1_main:6;
        RBus_UInt32  chroma_gain_limit_seg2_main:6;
        RBus_UInt32  chroma_gain_limit_seg3_main:6;
        RBus_UInt32  chroma_gain_limit_seg4_main:6;
        RBus_UInt32  res1:2;
    };
}color_dcc_dcc_chroma_gain_limit_main_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_limit_seg5_main:6;
        RBus_UInt32  chroma_gain_limit_seg6_main:6;
        RBus_UInt32  chroma_gain_limit_seg7_main:6;
        RBus_UInt32  chroma_gain_limit_seg8_main:6;
        RBus_UInt32  chroma_gain_limit_seg9_main:6;
        RBus_UInt32  res1:2;
    };
}color_dcc_dcc_chroma_gain_limit_main_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_limit_seg10_main:6;
        RBus_UInt32  chroma_gain_limit_seg11_main:6;
        RBus_UInt32  chroma_gain_limit_seg12_main:6;
        RBus_UInt32  chroma_gain_limit_seg13_main:6;
        RBus_UInt32  chroma_gain_limit_seg14_main:6;
        RBus_UInt32  res1:2;
    };
}color_dcc_dcc_chroma_gain_limit_main_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_limit_seg15_main:6;
        RBus_UInt32  chroma_gain_limit_seg16_main:6;
        RBus_UInt32  chroma_gain_limit_seg17_main:6;
        RBus_UInt32  chroma_gain_limit_seg18_main:6;
        RBus_UInt32  chroma_gain_limit_seg19_main:6;
        RBus_UInt32  res1:2;
    };
}color_dcc_dcc_chroma_gain_limit_main_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_limit_seg20_main:6;
        RBus_UInt32  res1:26;
    };
}color_dcc_dcc_chroma_gain_limit_main_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_limit_seg0_sub:6;
        RBus_UInt32  chroma_gain_limit_seg1_sub:6;
        RBus_UInt32  chroma_gain_limit_seg2_sub:6;
        RBus_UInt32  chroma_gain_limit_seg3_sub:6;
        RBus_UInt32  chroma_gain_limit_seg4_sub:6;
        RBus_UInt32  res1:2;
    };
}color_dcc_dcc_chroma_gain_limit_sub_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_limit_seg5_sub:6;
        RBus_UInt32  chroma_gain_limit_seg6_sub:6;
        RBus_UInt32  chroma_gain_limit_seg7_sub:6;
        RBus_UInt32  chroma_gain_limit_seg8_sub:6;
        RBus_UInt32  chroma_gain_limit_seg9_sub:6;
        RBus_UInt32  res1:2;
    };
}color_dcc_dcc_chroma_gain_limit_sub_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_limit_seg10_sub:6;
        RBus_UInt32  chroma_gain_limit_seg11_sub:6;
        RBus_UInt32  chroma_gain_limit_seg12_sub:6;
        RBus_UInt32  chroma_gain_limit_seg13_sub:6;
        RBus_UInt32  chroma_gain_limit_seg14_sub:6;
        RBus_UInt32  res1:2;
    };
}color_dcc_dcc_chroma_gain_limit_sub_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_limit_seg15_sub:6;
        RBus_UInt32  chroma_gain_limit_seg16_sub:6;
        RBus_UInt32  chroma_gain_limit_seg17_sub:6;
        RBus_UInt32  chroma_gain_limit_seg18_sub:6;
        RBus_UInt32  chroma_gain_limit_seg19_sub:6;
        RBus_UInt32  res1:2;
    };
}color_dcc_dcc_chroma_gain_limit_sub_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_limit_seg20_sub:6;
        RBus_UInt32  res1:26;
    };
}color_dcc_dcc_chroma_gain_limit_sub_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_en_sub:1;
        RBus_UInt32  chroma_gain_mode_sub:1;
        RBus_UInt32  chroma_gain_lookup_mode_sub:1;
        RBus_UInt32  chroma_gain_base_sub:3;
        RBus_UInt32  chroma_enhance_above_tab_select_sub:2;
        RBus_UInt32  chroma_enhance_below_tab_select_sub:2;
        RBus_UInt32  saturation_byy_u_tab_select_sub:2;
        RBus_UInt32  saturation_byy_v_tab_select_sub:2;
        RBus_UInt32  dummy1802e440_15_14:2;
        RBus_UInt32  chroma_gain_en_main:1;
        RBus_UInt32  chroma_gain_mode_main:1;
        RBus_UInt32  chroma_gain_lookup_mode_main:1;
        RBus_UInt32  chroma_gain_base_main:3;
        RBus_UInt32  chroma_enhance_above_tab_select_main:2;
        RBus_UInt32  chroma_enhance_below_tab_select_main:2;
        RBus_UInt32  saturation_byy_u_tab_select_main:2;
        RBus_UInt32  saturation_byy_v_tab_select_main:2;
        RBus_UInt32  dummy1802e440_31_30:2;
    };
}color_dcc_dcc_ctrl_chroma_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dcc_c_sram_tab_acc_ready:1;
        RBus_UInt32  dcc_c_sram_tab_acc_sel:3;
        RBus_UInt32  dcc_c_sram_tab_rw_sel:2;
        RBus_UInt32  dcc_c_sram_tab_acc_index:5;
        RBus_UInt32  dcc_c_sram_tab_acc_index_cur:5;
        RBus_UInt32  dcc_c_sram_tab_read_sel:1;
        RBus_UInt32  res1:15;
    };
}color_dcc_dcc_c_sram_tab_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dcc_c_sram_tab_g1:7;
        RBus_UInt32  dcc_c_sram_tab_g0:7;
        RBus_UInt32  dcc_c_sram_tab_base:7;
        RBus_UInt32  res1:11;
    };
}color_dcc_dcc_c_sram_tab_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  db_apply:1;
        RBus_UInt32  db_read_level:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  res1:29;
    };
}color_dcc_d_dcc_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_en:1;
        RBus_UInt32  y_blending_reg3_en:1;
        RBus_UInt32  y_blending_reg2_en:1;
        RBus_UInt32  y_blending_reg1_en:1;
        RBus_UInt32  y_blending_reg0_en:1;
        RBus_UInt32  y_blending_3_enhance_en:1;
        RBus_UInt32  y_blending_2_enhance_en:1;
        RBus_UInt32  y_blending_1_enhance_en:1;
        RBus_UInt32  y_blending_0_enhance_en:1;
        RBus_UInt32  y_blending_4_enhance_en:1;
        RBus_UInt32  y_blending_5_enhance_en:1;
        RBus_UInt32  ratio_lpf_en:1;
        RBus_UInt32  y_blending_mode:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  y_blending_debug_mode_sel:2;
        RBus_UInt32  y_blending_debug_mode_en:1;
        RBus_UInt32  data_range_sel:1;
        RBus_UInt32  data_format_sel:1;
        RBus_UInt32  colorspace_sel:1;
        RBus_UInt32  region_ratio_blending_en:1;
        RBus_UInt32  res2:9;
    };
}color_dcc_d_dcc_skin_tone_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_offset:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  main_offset_range:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  main_offset_en:1;
        RBus_UInt32  res3:7;
    };
}color_dcc_d_dcc_main_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_offset:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  sub_offset_range:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  sub_offset_en:1;
        RBus_UInt32  res3:7;
    };
}color_dcc_d_dcc_sub_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_0_h_center_width:12;
        RBus_UInt32  res1:20;
    };
}color_dcc_d_dcc_skin_tone_hsi_0_center_width_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_0_s_center_width:12;
        RBus_UInt32  y_blending_0_i_center_width:12;
        RBus_UInt32  res1:8;
    };
}color_dcc_d_dcc_skin_tone_hsi_0_center_width_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_1_h_center_width:12;
        RBus_UInt32  res1:20;
    };
}color_dcc_d_dcc_skin_tone_hsi_1_center_width_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_1_s_center_width:12;
        RBus_UInt32  y_blending_1_i_center_width:12;
        RBus_UInt32  res1:8;
    };
}color_dcc_d_dcc_skin_tone_hsi_1_center_width_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_2_h_center_width:12;
        RBus_UInt32  res1:20;
    };
}color_dcc_d_dcc_skin_tone_hsi_2_center_width_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_2_s_center_width:12;
        RBus_UInt32  y_blending_2_i_center_width:12;
        RBus_UInt32  res1:8;
    };
}color_dcc_d_dcc_skin_tone_hsi_2_center_width_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_3_h_center_width:12;
        RBus_UInt32  res1:20;
    };
}color_dcc_d_dcc_skin_tone_hsi_3_center_width_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_3_s_center_width:12;
        RBus_UInt32  y_blending_3_i_center_width:12;
        RBus_UInt32  res1:8;
    };
}color_dcc_d_dcc_skin_tone_hsi_3_center_width_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_0_v_center:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  y_blending_0_u_center:13;
        RBus_UInt32  res2:3;
    };
}color_dcc_d_dcc_skin_tone_yuv_center_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_0_v_range:4;
        RBus_UInt32  y_blending_0_u_range:4;
        RBus_UInt32  y_blending_0_y_range:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  y_blending_0_y_center:13;
        RBus_UInt32  res2:3;
    };
}color_dcc_d_dcc_skin_tone_yuv_range_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_1_v_center:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  y_blending_1_u_center:13;
        RBus_UInt32  res2:3;
    };
}color_dcc_d_dcc_skin_tone_yuv_center_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_1_v_range:4;
        RBus_UInt32  y_blending_1_u_range:4;
        RBus_UInt32  y_blending_1_y_range:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  y_blending_1_y_center:13;
        RBus_UInt32  res2:3;
    };
}color_dcc_d_dcc_skin_tone_yuv_range_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_2_v_center:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  y_blending_2_u_center:13;
        RBus_UInt32  res2:3;
    };
}color_dcc_d_dcc_skin_tone_yuv_center_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_2_v_range:4;
        RBus_UInt32  y_blending_2_u_range:4;
        RBus_UInt32  y_blending_2_y_range:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  y_blending_2_y_center:13;
        RBus_UInt32  res2:3;
    };
}color_dcc_d_dcc_skin_tone_yuv_range_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_3_v_center:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  y_blending_3_u_center:13;
        RBus_UInt32  res2:3;
    };
}color_dcc_d_dcc_skin_tone_yuv_center_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_3_v_range:4;
        RBus_UInt32  y_blending_3_u_range:4;
        RBus_UInt32  y_blending_3_y_range:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  y_blending_3_y_center:13;
        RBus_UInt32  res2:3;
    };
}color_dcc_d_dcc_skin_tone_yuv_range_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_0_ratio_3:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_0_ratio_2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_0_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_0_ratio_0:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment0_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_0_ratio_7:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_0_ratio_6:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_0_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_0_ratio_4:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment0_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_1_ratio_3:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_1_ratio_2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_1_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_1_ratio_0:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment1_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_1_ratio_7:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_1_ratio_6:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_1_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_1_ratio_4:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_2_ratio_3:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_2_ratio_2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_2_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_2_ratio_0:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment2_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_2_ratio_7:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_2_ratio_6:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_2_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_2_ratio_4:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment2_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_3_ratio_3:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_3_ratio_2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_3_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_3_ratio_0:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment3_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_3_ratio_7:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_3_ratio_6:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_3_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_3_ratio_4:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment3_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_blending_0_ratio_3:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_0_ratio_2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_0_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_0_ratio_0:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment_c0_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_blending_0_ratio_7:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_0_ratio_6:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_0_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_0_ratio_4:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment_c0_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_blending_1_ratio_3:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_1_ratio_2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_1_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_1_ratio_0:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment_c1_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_blending_1_ratio_7:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_1_ratio_6:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_1_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_1_ratio_4:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment_c1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_blending_2_ratio_3:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_2_ratio_2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_2_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_2_ratio_0:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment_c2_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_blending_2_ratio_7:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_2_ratio_6:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_2_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_2_ratio_4:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment_c2_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_blending_3_ratio_3:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_3_ratio_2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_3_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_3_ratio_0:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment_c3_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_blending_3_ratio_7:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_3_ratio_6:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_3_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_3_ratio_4:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment_c3_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_skin_en:1;
        RBus_UInt32  res1:31;
    };
}color_dcc_d_dcc_cds_skin_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_uv_range_0:12;
        RBus_UInt32  cds_uv_range_1:12;
        RBus_UInt32  res1:8;
    };
}color_dcc_d_dcc_cds_skin_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_uv_range_2:12;
        RBus_UInt32  cds_uv_range_3:12;
        RBus_UInt32  res1:8;
    };
}color_dcc_d_dcc_cds_skin_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_uv_range_4:12;
        RBus_UInt32  cds_uv_range_5:12;
        RBus_UInt32  res1:8;
    };
}color_dcc_d_dcc_cds_skin_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_blending_4_ratio_3:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_4_ratio_2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_4_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_4_ratio_0:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment_c4_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_blending_4_ratio_7:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_4_ratio_6:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_4_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_4_ratio_4:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment_c4_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_blending_5_ratio_3:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_5_ratio_2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_5_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_5_ratio_0:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment_c5_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_blending_5_ratio_7:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_5_ratio_6:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_5_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_5_ratio_4:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment_c5_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_blending_0_inside_ratio:5;
        RBus_UInt32  ai_blending_0_ratio_0:6;
        RBus_UInt32  ai_blending_0_ratio_1:6;
        RBus_UInt32  ai_blending_0_ratio_2:6;
        RBus_UInt32  ai_blending_0_ratio_3:6;
        RBus_UInt32  ai_ros_en:1;
        RBus_UInt32  res1:2;
    };
}color_dcc_d_dcc_ai_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_blending_1_inside_ratio:5;
        RBus_UInt32  ai_blending_1_ratio_0:6;
        RBus_UInt32  ai_blending_1_ratio_1:6;
        RBus_UInt32  ai_blending_1_ratio_2:6;
        RBus_UInt32  ai_blending_1_ratio_3:6;
        RBus_UInt32  res1:3;
    };
}color_dcc_d_dcc_ai_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_blending_2_inside_ratio:5;
        RBus_UInt32  ai_blending_2_ratio_0:6;
        RBus_UInt32  ai_blending_2_ratio_1:6;
        RBus_UInt32  ai_blending_2_ratio_2:6;
        RBus_UInt32  ai_blending_2_ratio_3:6;
        RBus_UInt32  res1:3;
    };
}color_dcc_d_dcc_ai_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_blending_3_inside_ratio:5;
        RBus_UInt32  ai_blending_3_ratio_0:6;
        RBus_UInt32  ai_blending_3_ratio_1:6;
        RBus_UInt32  ai_blending_3_ratio_2:6;
        RBus_UInt32  ai_blending_3_ratio_3:6;
        RBus_UInt32  res1:3;
    };
}color_dcc_d_dcc_ai_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_blending_4_inside_ratio:5;
        RBus_UInt32  ai_blending_4_ratio_0:6;
        RBus_UInt32  ai_blending_4_ratio_1:6;
        RBus_UInt32  ai_blending_4_ratio_2:6;
        RBus_UInt32  ai_blending_4_ratio_3:6;
        RBus_UInt32  res1:3;
    };
}color_dcc_d_dcc_ai_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_blending_5_inside_ratio:5;
        RBus_UInt32  ai_blending_5_ratio_0:6;
        RBus_UInt32  ai_blending_5_ratio_1:6;
        RBus_UInt32  ai_blending_5_ratio_2:6;
        RBus_UInt32  ai_blending_5_ratio_3:6;
        RBus_UInt32  res1:3;
    };
}color_dcc_d_dcc_ai_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_adjust_en:1;
        RBus_UInt32  ai_control_value:8;
        RBus_UInt32  ai_detect_value:8;
        RBus_UInt32  ai_octa_tang_mode0:3;
        RBus_UInt32  ai_octa_tang_mode1:3;
        RBus_UInt32  ai_octa_tang_mode2:3;
        RBus_UInt32  ai_octa_tang_mode3:3;
        RBus_UInt32  ai_octa_tang_mode4:3;
    };
}color_dcc_d_dcc_ai_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_range_0:12;
        RBus_UInt32  ai_range_1:12;
        RBus_UInt32  ai_octa_tang_mode5:3;
        RBus_UInt32  res1:5;
    };
}color_dcc_d_dcc_ai_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_range_2:12;
        RBus_UInt32  ai_range_3:12;
        RBus_UInt32  ai_octa_tang_dir0:1;
        RBus_UInt32  ai_octa_tang_dir1:1;
        RBus_UInt32  ai_octa_tang_dir2:1;
        RBus_UInt32  ai_octa_tang_dir3:1;
        RBus_UInt32  ai_octa_tang_dir4:1;
        RBus_UInt32  ai_octa_tang_dir5:1;
        RBus_UInt32  res1:2;
    };
}color_dcc_d_dcc_ai_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_range_4:12;
        RBus_UInt32  ai_range_5:12;
        RBus_UInt32  res1:8;
    };
}color_dcc_d_dcc_ai_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_center_x_0:12;
        RBus_UInt32  ai_center_y_0:12;
        RBus_UInt32  res1:8;
    };
}color_dcc_d_dcc_ai_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_center_x_1:12;
        RBus_UInt32  ai_center_y_1:12;
        RBus_UInt32  res1:8;
    };
}color_dcc_d_dcc_ai_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_center_x_2:12;
        RBus_UInt32  ai_center_y_2:12;
        RBus_UInt32  res1:8;
    };
}color_dcc_d_dcc_ai_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_center_x_3:12;
        RBus_UInt32  ai_center_y_3:12;
        RBus_UInt32  res1:8;
    };
}color_dcc_d_dcc_ai_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_center_x_4:12;
        RBus_UInt32  ai_center_y_4:12;
        RBus_UInt32  res1:8;
    };
}color_dcc_d_dcc_ai_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_center_x_5:12;
        RBus_UInt32  ai_center_y_5:12;
        RBus_UInt32  res1:8;
    };
}color_dcc_d_dcc_ai_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_center_u_0:12;
        RBus_UInt32  ai_center_v_0:12;
        RBus_UInt32  res1:8;
    };
}color_dcc_d_dcc_ai_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_center_u_1:12;
        RBus_UInt32  ai_center_v_1:12;
        RBus_UInt32  res1:8;
    };
}color_dcc_d_dcc_ai_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_center_u_2:12;
        RBus_UInt32  ai_center_v_2:12;
        RBus_UInt32  res1:8;
    };
}color_dcc_d_dcc_ai_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_center_u_3:12;
        RBus_UInt32  ai_center_v_3:12;
        RBus_UInt32  res1:8;
    };
}color_dcc_d_dcc_ai_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_center_u_4:12;
        RBus_UInt32  ai_center_v_4:12;
        RBus_UInt32  res1:8;
    };
}color_dcc_d_dcc_ai_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_center_u_5:12;
        RBus_UInt32  ai_center_v_5:12;
        RBus_UInt32  res1:8;
    };
}color_dcc_d_dcc_ai_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_0:32;
    };
}color_dcc_d_dcc_fwused_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_1:32;
    };
}color_dcc_d_dcc_fwused_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_2:32;
    };
}color_dcc_d_dcc_fwused_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_3:32;
    };
}color_dcc_d_dcc_fwused_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_bist_fail_0:1;
        RBus_UInt32  drf_bist_fail_1:1;
        RBus_UInt32  drf_bist_fail_2:1;
        RBus_UInt32  drf_bist_fail_3:1;
        RBus_UInt32  drf_bist_fail_4:1;
        RBus_UInt32  drf_bist_fail_5:1;
        RBus_UInt32  drf_bist_fail_6:1;
        RBus_UInt32  drf_bist_fail_7:1;
        RBus_UInt32  drf_bist_fail_8:1;
        RBus_UInt32  drf_bist_fail_9:1;
        RBus_UInt32  drf_bist_fail_10:1;
        RBus_UInt32  drf_bist_fail_11:1;
        RBus_UInt32  drf_bist_fail_12:1;
        RBus_UInt32  drf_bist_fail_13:1;
        RBus_UInt32  drf_bist_fail_14:1;
        RBus_UInt32  drf_bist_fail_15:1;
        RBus_UInt32  bist_fail_0:1;
        RBus_UInt32  bist_fail_1:1;
        RBus_UInt32  bist_fail_2:1;
        RBus_UInt32  bist_fail_3:1;
        RBus_UInt32  bist_fail_4:1;
        RBus_UInt32  bist_fail_5:1;
        RBus_UInt32  bist_fail_6:1;
        RBus_UInt32  bist_fail_7:1;
        RBus_UInt32  bist_fail_8:1;
        RBus_UInt32  bist_fail_9:1;
        RBus_UInt32  bist_fail_10:1;
        RBus_UInt32  bist_fail_11:1;
        RBus_UInt32  bist_fail_12:1;
        RBus_UInt32  bist_fail_13:1;
        RBus_UInt32  bist_fail_14:1;
        RBus_UInt32  bist_fail_15:1;
    };
}color_dcc_d_dcc_bist_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rm_0:4;
        RBus_UInt32  rm_1:4;
        RBus_UInt32  rm_2:4;
        RBus_UInt32  rm_3:4;
        RBus_UInt32  rm_4:4;
        RBus_UInt32  rm_5:4;
        RBus_UInt32  rm_6:4;
        RBus_UInt32  rm_7:4;
    };
}color_dcc_d_dcc_bist_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rm_8:4;
        RBus_UInt32  rm_9:4;
        RBus_UInt32  rm_10:4;
        RBus_UInt32  rm_11:4;
        RBus_UInt32  rm_12:4;
        RBus_UInt32  rm_13:4;
        RBus_UInt32  rm_14:4;
        RBus_UInt32  rm_15:4;
    };
}color_dcc_d_dcc_bist_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  test_0:1;
        RBus_UInt32  test_1:1;
        RBus_UInt32  test_2:1;
        RBus_UInt32  test_3:1;
        RBus_UInt32  test_4:1;
        RBus_UInt32  test_5:1;
        RBus_UInt32  test_6:1;
        RBus_UInt32  test_7:1;
        RBus_UInt32  test_8:1;
        RBus_UInt32  test_9:1;
        RBus_UInt32  test_10:1;
        RBus_UInt32  test_11:1;
        RBus_UInt32  test_12:1;
        RBus_UInt32  test_13:1;
        RBus_UInt32  test_14:1;
        RBus_UInt32  test_15:1;
        RBus_UInt32  res1:16;
    };
}color_dcc_d_dcc_bist_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ls_0:1;
        RBus_UInt32  ls_1:1;
        RBus_UInt32  ls_2:1;
        RBus_UInt32  ls_3:1;
        RBus_UInt32  ls_4:1;
        RBus_UInt32  ls_5:1;
        RBus_UInt32  ls_6:1;
        RBus_UInt32  ls_7:1;
        RBus_UInt32  ls_8:1;
        RBus_UInt32  ls_9:1;
        RBus_UInt32  ls_10:1;
        RBus_UInt32  ls_11:1;
        RBus_UInt32  ls_12:1;
        RBus_UInt32  ls_13:1;
        RBus_UInt32  ls_14:1;
        RBus_UInt32  ls_15:1;
        RBus_UInt32  rme_0:1;
        RBus_UInt32  rme_1:1;
        RBus_UInt32  rme_2:1;
        RBus_UInt32  rme_3:1;
        RBus_UInt32  rme_4:1;
        RBus_UInt32  rme_5:1;
        RBus_UInt32  rme_6:1;
        RBus_UInt32  rme_7:1;
        RBus_UInt32  rme_8:1;
        RBus_UInt32  rme_9:1;
        RBus_UInt32  rme_10:1;
        RBus_UInt32  rme_11:1;
        RBus_UInt32  rme_12:1;
        RBus_UInt32  rme_13:1;
        RBus_UInt32  rme_14:1;
        RBus_UInt32  rme_15:1;
    };
}color_dcc_d_dcc_bist_2_RBUS;




#endif 


#endif 
