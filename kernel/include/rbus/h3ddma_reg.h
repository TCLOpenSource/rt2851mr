/**
* @file Merlin5-DesignSpec-I-Domain_HDMI_3D_DMA_CAP
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_H3DDMA_REG_H_
#define _RBUS_H3DDMA_REG_H_

#include "rbus_types.h"



//  H3DDMA Register Address
#define  H3DDMA_LR_Separate_CTRL1                                               0x18025800
#define  H3DDMA_LR_Separate_CTRL1_reg_addr                                       "0xB8025800"
#define  H3DDMA_LR_Separate_CTRL1_reg                                            0xB8025800
#define  H3DDMA_LR_Separate_CTRL1_inst_addr                                      "0x0000"
#define  set_H3DDMA_LR_Separate_CTRL1_reg(data)                                  (*((volatile unsigned int*)H3DDMA_LR_Separate_CTRL1_reg)=data)
#define  get_H3DDMA_LR_Separate_CTRL1_reg                                        (*((volatile unsigned int*)H3DDMA_LR_Separate_CTRL1_reg))
#define  H3DDMA_LR_Separate_CTRL1_dummy_lr_ctrl1_shift                           (27)
#define  H3DDMA_LR_Separate_CTRL1_hdmi420_en_shift                               (26)
#define  H3DDMA_LR_Separate_CTRL1_vs_inv_shift                                   (23)
#define  H3DDMA_LR_Separate_CTRL1_hs_inv_shift                                   (22)
#define  H3DDMA_LR_Separate_CTRL1_progressive_shift                              (20)
#define  H3DDMA_LR_Separate_CTRL1_hdmi_3d_structure_shift                        (16)
#define  H3DDMA_LR_Separate_CTRL1_fp_vact_space1_shift                           (8)
#define  H3DDMA_LR_Separate_CTRL1_fp_vact_space2_shift                           (0)
#define  H3DDMA_LR_Separate_CTRL1_dummy_lr_ctrl1_mask                            (0xF8000000)
#define  H3DDMA_LR_Separate_CTRL1_hdmi420_en_mask                                (0x04000000)
#define  H3DDMA_LR_Separate_CTRL1_vs_inv_mask                                    (0x00800000)
#define  H3DDMA_LR_Separate_CTRL1_hs_inv_mask                                    (0x00400000)
#define  H3DDMA_LR_Separate_CTRL1_progressive_mask                               (0x00100000)
#define  H3DDMA_LR_Separate_CTRL1_hdmi_3d_structure_mask                         (0x000F0000)
#define  H3DDMA_LR_Separate_CTRL1_fp_vact_space1_mask                            (0x0000FF00)
#define  H3DDMA_LR_Separate_CTRL1_fp_vact_space2_mask                            (0x000000FF)
#define  H3DDMA_LR_Separate_CTRL1_dummy_lr_ctrl1(data)                           (0xF8000000&((data)<<27))
#define  H3DDMA_LR_Separate_CTRL1_hdmi420_en(data)                               (0x04000000&((data)<<26))
#define  H3DDMA_LR_Separate_CTRL1_vs_inv(data)                                   (0x00800000&((data)<<23))
#define  H3DDMA_LR_Separate_CTRL1_hs_inv(data)                                   (0x00400000&((data)<<22))
#define  H3DDMA_LR_Separate_CTRL1_progressive(data)                              (0x00100000&((data)<<20))
#define  H3DDMA_LR_Separate_CTRL1_hdmi_3d_structure(data)                        (0x000F0000&((data)<<16))
#define  H3DDMA_LR_Separate_CTRL1_fp_vact_space1(data)                           (0x0000FF00&((data)<<8))
#define  H3DDMA_LR_Separate_CTRL1_fp_vact_space2(data)                           (0x000000FF&(data))
#define  H3DDMA_LR_Separate_CTRL1_get_dummy_lr_ctrl1(data)                       ((0xF8000000&(data))>>27)
#define  H3DDMA_LR_Separate_CTRL1_get_hdmi420_en(data)                           ((0x04000000&(data))>>26)
#define  H3DDMA_LR_Separate_CTRL1_get_vs_inv(data)                               ((0x00800000&(data))>>23)
#define  H3DDMA_LR_Separate_CTRL1_get_hs_inv(data)                               ((0x00400000&(data))>>22)
#define  H3DDMA_LR_Separate_CTRL1_get_progressive(data)                          ((0x00100000&(data))>>20)
#define  H3DDMA_LR_Separate_CTRL1_get_hdmi_3d_structure(data)                    ((0x000F0000&(data))>>16)
#define  H3DDMA_LR_Separate_CTRL1_get_fp_vact_space1(data)                       ((0x0000FF00&(data))>>8)
#define  H3DDMA_LR_Separate_CTRL1_get_fp_vact_space2(data)                       (0x000000FF&(data))

#define  H3DDMA_LR_Separate_CTRL2                                               0x18025804
#define  H3DDMA_LR_Separate_CTRL2_reg_addr                                       "0xB8025804"
#define  H3DDMA_LR_Separate_CTRL2_reg                                            0xB8025804
#define  H3DDMA_LR_Separate_CTRL2_inst_addr                                      "0x0001"
#define  set_H3DDMA_LR_Separate_CTRL2_reg(data)                                  (*((volatile unsigned int*)H3DDMA_LR_Separate_CTRL2_reg)=data)
#define  get_H3DDMA_LR_Separate_CTRL2_reg                                        (*((volatile unsigned int*)H3DDMA_LR_Separate_CTRL2_reg))
#define  H3DDMA_LR_Separate_CTRL2_vact_shift                                     (16)
#define  H3DDMA_LR_Separate_CTRL2_hact_shift                                     (0)
#define  H3DDMA_LR_Separate_CTRL2_vact_mask                                      (0xFFFF0000)
#define  H3DDMA_LR_Separate_CTRL2_hact_mask                                      (0x00007FFF)
#define  H3DDMA_LR_Separate_CTRL2_vact(data)                                     (0xFFFF0000&((data)<<16))
#define  H3DDMA_LR_Separate_CTRL2_hact(data)                                     (0x00007FFF&(data))
#define  H3DDMA_LR_Separate_CTRL2_get_vact(data)                                 ((0xFFFF0000&(data))>>16)
#define  H3DDMA_LR_Separate_CTRL2_get_hact(data)                                 (0x00007FFF&(data))

#define  H3DDMA_LR_Separate_insert_vs_start                                     0x18025808
#define  H3DDMA_LR_Separate_insert_vs_start_reg_addr                             "0xB8025808"
#define  H3DDMA_LR_Separate_insert_vs_start_reg                                  0xB8025808
#define  H3DDMA_LR_Separate_insert_vs_start_inst_addr                            "0x0002"
#define  set_H3DDMA_LR_Separate_insert_vs_start_reg(data)                        (*((volatile unsigned int*)H3DDMA_LR_Separate_insert_vs_start_reg)=data)
#define  get_H3DDMA_LR_Separate_insert_vs_start_reg                              (*((volatile unsigned int*)H3DDMA_LR_Separate_insert_vs_start_reg))
#define  H3DDMA_LR_Separate_insert_vs_start_hstart_shift                         (8)
#define  H3DDMA_LR_Separate_insert_vs_start_vstart_shift                         (0)
#define  H3DDMA_LR_Separate_insert_vs_start_hstart_mask                          (0x001FFF00)
#define  H3DDMA_LR_Separate_insert_vs_start_vstart_mask                          (0x000000FF)
#define  H3DDMA_LR_Separate_insert_vs_start_hstart(data)                         (0x001FFF00&((data)<<8))
#define  H3DDMA_LR_Separate_insert_vs_start_vstart(data)                         (0x000000FF&(data))
#define  H3DDMA_LR_Separate_insert_vs_start_get_hstart(data)                     ((0x001FFF00&(data))>>8)
#define  H3DDMA_LR_Separate_insert_vs_start_get_vstart(data)                     (0x000000FF&(data))

#define  H3DDMA_LR_Separate_insert_vs_end                                       0x1802580C
#define  H3DDMA_LR_Separate_insert_vs_end_reg_addr                               "0xB802580C"
#define  H3DDMA_LR_Separate_insert_vs_end_reg                                    0xB802580C
#define  H3DDMA_LR_Separate_insert_vs_end_inst_addr                              "0x0003"
#define  set_H3DDMA_LR_Separate_insert_vs_end_reg(data)                          (*((volatile unsigned int*)H3DDMA_LR_Separate_insert_vs_end_reg)=data)
#define  get_H3DDMA_LR_Separate_insert_vs_end_reg                                (*((volatile unsigned int*)H3DDMA_LR_Separate_insert_vs_end_reg))
#define  H3DDMA_LR_Separate_insert_vs_end_hend_shift                             (8)
#define  H3DDMA_LR_Separate_insert_vs_end_vend_shift                             (0)
#define  H3DDMA_LR_Separate_insert_vs_end_hend_mask                              (0x001FFF00)
#define  H3DDMA_LR_Separate_insert_vs_end_vend_mask                              (0x000000FF)
#define  H3DDMA_LR_Separate_insert_vs_end_hend(data)                             (0x001FFF00&((data)<<8))
#define  H3DDMA_LR_Separate_insert_vs_end_vend(data)                             (0x000000FF&(data))
#define  H3DDMA_LR_Separate_insert_vs_end_get_hend(data)                         ((0x001FFF00&(data))>>8)
#define  H3DDMA_LR_Separate_insert_vs_end_get_vend(data)                         (0x000000FF&(data))

#define  H3DDMA_I3DDMA_enable                                                   0x18025810
#define  H3DDMA_I3DDMA_enable_reg_addr                                           "0xB8025810"
#define  H3DDMA_I3DDMA_enable_reg                                                0xB8025810
#define  H3DDMA_I3DDMA_enable_inst_addr                                          "0x0004"
#define  set_H3DDMA_I3DDMA_enable_reg(data)                                      (*((volatile unsigned int*)H3DDMA_I3DDMA_enable_reg)=data)
#define  get_H3DDMA_I3DDMA_enable_reg                                            (*((volatile unsigned int*)H3DDMA_I3DDMA_enable_reg))
#define  H3DDMA_I3DDMA_enable_cap3_seq_blk_sel_shift                             (11)
#define  H3DDMA_I3DDMA_enable_cap2_seq_blk_sel_shift                             (10)
#define  H3DDMA_I3DDMA_enable_cap1_seq_blk_sel_shift                             (9)
#define  H3DDMA_I3DDMA_enable_cap0_seq_blk_sel_shift                             (8)
#define  H3DDMA_I3DDMA_enable_reorder_shift                                      (7)
#define  H3DDMA_I3DDMA_enable_uzd_mux_sel_shift                                  (6)
#define  H3DDMA_I3DDMA_enable_block_sel_to_flag_fifo_option_shift                (5)
#define  H3DDMA_I3DDMA_enable_frc_style_shift                                    (4)
#define  H3DDMA_I3DDMA_enable_frc_en_shift                                       (3)
#define  H3DDMA_I3DDMA_enable_tg_en_shift                                        (2)
#define  H3DDMA_I3DDMA_enable_lr_separate_en_shift                               (1)
#define  H3DDMA_I3DDMA_enable_cap3_seq_blk_sel_mask                              (0x00000800)
#define  H3DDMA_I3DDMA_enable_cap2_seq_blk_sel_mask                              (0x00000400)
#define  H3DDMA_I3DDMA_enable_cap1_seq_blk_sel_mask                              (0x00000200)
#define  H3DDMA_I3DDMA_enable_cap0_seq_blk_sel_mask                              (0x00000100)
#define  H3DDMA_I3DDMA_enable_reorder_mask                                       (0x00000080)
#define  H3DDMA_I3DDMA_enable_uzd_mux_sel_mask                                   (0x00000040)
#define  H3DDMA_I3DDMA_enable_block_sel_to_flag_fifo_option_mask                 (0x00000020)
#define  H3DDMA_I3DDMA_enable_frc_style_mask                                     (0x00000010)
#define  H3DDMA_I3DDMA_enable_frc_en_mask                                        (0x00000008)
#define  H3DDMA_I3DDMA_enable_tg_en_mask                                         (0x00000004)
#define  H3DDMA_I3DDMA_enable_lr_separate_en_mask                                (0x00000002)
#define  H3DDMA_I3DDMA_enable_cap3_seq_blk_sel(data)                             (0x00000800&((data)<<11))
#define  H3DDMA_I3DDMA_enable_cap2_seq_blk_sel(data)                             (0x00000400&((data)<<10))
#define  H3DDMA_I3DDMA_enable_cap1_seq_blk_sel(data)                             (0x00000200&((data)<<9))
#define  H3DDMA_I3DDMA_enable_cap0_seq_blk_sel(data)                             (0x00000100&((data)<<8))
#define  H3DDMA_I3DDMA_enable_reorder(data)                                      (0x00000080&((data)<<7))
#define  H3DDMA_I3DDMA_enable_uzd_mux_sel(data)                                  (0x00000040&((data)<<6))
#define  H3DDMA_I3DDMA_enable_block_sel_to_flag_fifo_option(data)                (0x00000020&((data)<<5))
#define  H3DDMA_I3DDMA_enable_frc_style(data)                                    (0x00000010&((data)<<4))
#define  H3DDMA_I3DDMA_enable_frc_en(data)                                       (0x00000008&((data)<<3))
#define  H3DDMA_I3DDMA_enable_tg_en(data)                                        (0x00000004&((data)<<2))
#define  H3DDMA_I3DDMA_enable_lr_separate_en(data)                               (0x00000002&((data)<<1))
#define  H3DDMA_I3DDMA_enable_get_cap3_seq_blk_sel(data)                         ((0x00000800&(data))>>11)
#define  H3DDMA_I3DDMA_enable_get_cap2_seq_blk_sel(data)                         ((0x00000400&(data))>>10)
#define  H3DDMA_I3DDMA_enable_get_cap1_seq_blk_sel(data)                         ((0x00000200&(data))>>9)
#define  H3DDMA_I3DDMA_enable_get_cap0_seq_blk_sel(data)                         ((0x00000100&(data))>>8)
#define  H3DDMA_I3DDMA_enable_get_reorder(data)                                  ((0x00000080&(data))>>7)
#define  H3DDMA_I3DDMA_enable_get_uzd_mux_sel(data)                              ((0x00000040&(data))>>6)
#define  H3DDMA_I3DDMA_enable_get_block_sel_to_flag_fifo_option(data)            ((0x00000020&(data))>>5)
#define  H3DDMA_I3DDMA_enable_get_frc_style(data)                                ((0x00000010&(data))>>4)
#define  H3DDMA_I3DDMA_enable_get_frc_en(data)                                   ((0x00000008&(data))>>3)
#define  H3DDMA_I3DDMA_enable_get_tg_en(data)                                    ((0x00000004&(data))>>2)
#define  H3DDMA_I3DDMA_enable_get_lr_separate_en(data)                           ((0x00000002&(data))>>1)

#define  H3DDMA_I3DDMA_ctrl_0                                                   0x18025814
#define  H3DDMA_I3DDMA_ctrl_0_reg_addr                                           "0xB8025814"
#define  H3DDMA_I3DDMA_ctrl_0_reg                                                0xB8025814
#define  H3DDMA_I3DDMA_ctrl_0_inst_addr                                          "0x0005"
#define  set_H3DDMA_I3DDMA_ctrl_0_reg(data)                                      (*((volatile unsigned int*)H3DDMA_I3DDMA_ctrl_0_reg)=data)
#define  get_H3DDMA_I3DDMA_ctrl_0_reg                                            (*((volatile unsigned int*)H3DDMA_I3DDMA_ctrl_0_reg))
#define  H3DDMA_I3DDMA_ctrl_0_cap3_channel_swap_shift                            (9)
#define  H3DDMA_I3DDMA_ctrl_0_cap2_channel_swap_shift                            (6)
#define  H3DDMA_I3DDMA_ctrl_0_cap1_channel_swap_shift                            (3)
#define  H3DDMA_I3DDMA_ctrl_0_cap0_channel_swap_shift                            (0)
#define  H3DDMA_I3DDMA_ctrl_0_cap3_channel_swap_mask                             (0x00000E00)
#define  H3DDMA_I3DDMA_ctrl_0_cap2_channel_swap_mask                             (0x000001C0)
#define  H3DDMA_I3DDMA_ctrl_0_cap1_channel_swap_mask                             (0x00000038)
#define  H3DDMA_I3DDMA_ctrl_0_cap0_channel_swap_mask                             (0x00000007)
#define  H3DDMA_I3DDMA_ctrl_0_cap3_channel_swap(data)                            (0x00000E00&((data)<<9))
#define  H3DDMA_I3DDMA_ctrl_0_cap2_channel_swap(data)                            (0x000001C0&((data)<<6))
#define  H3DDMA_I3DDMA_ctrl_0_cap1_channel_swap(data)                            (0x00000038&((data)<<3))
#define  H3DDMA_I3DDMA_ctrl_0_cap0_channel_swap(data)                            (0x00000007&(data))
#define  H3DDMA_I3DDMA_ctrl_0_get_cap3_channel_swap(data)                        ((0x00000E00&(data))>>9)
#define  H3DDMA_I3DDMA_ctrl_0_get_cap2_channel_swap(data)                        ((0x000001C0&(data))>>6)
#define  H3DDMA_I3DDMA_ctrl_0_get_cap1_channel_swap(data)                        ((0x00000038&(data))>>3)
#define  H3DDMA_I3DDMA_ctrl_0_get_cap0_channel_swap(data)                        (0x00000007&(data))

#define  H3DDMA_LR_Separate_CTRL3                                               0x18025818
#define  H3DDMA_LR_Separate_CTRL3_reg_addr                                       "0xB8025818"
#define  H3DDMA_LR_Separate_CTRL3_reg                                            0xB8025818
#define  H3DDMA_LR_Separate_CTRL3_inst_addr                                      "0x0006"
#define  set_H3DDMA_LR_Separate_CTRL3_reg(data)                                  (*((volatile unsigned int*)H3DDMA_LR_Separate_CTRL3_reg)=data)
#define  get_H3DDMA_LR_Separate_CTRL3_reg                                        (*((volatile unsigned int*)H3DDMA_LR_Separate_CTRL3_reg))
#define  H3DDMA_LR_Separate_CTRL3_vact2_shift                                    (16)
#define  H3DDMA_LR_Separate_CTRL3_hact2_shift                                    (0)
#define  H3DDMA_LR_Separate_CTRL3_vact2_mask                                     (0xFFFF0000)
#define  H3DDMA_LR_Separate_CTRL3_hact2_mask                                     (0x00007FFF)
#define  H3DDMA_LR_Separate_CTRL3_vact2(data)                                    (0xFFFF0000&((data)<<16))
#define  H3DDMA_LR_Separate_CTRL3_hact2(data)                                    (0x00007FFF&(data))
#define  H3DDMA_LR_Separate_CTRL3_get_vact2(data)                                ((0xFFFF0000&(data))>>16)
#define  H3DDMA_LR_Separate_CTRL3_get_hact2(data)                                (0x00007FFF&(data))

#define  H3DDMA_TG_v1_end                                                       0x18025820
#define  H3DDMA_TG_v1_end_reg_addr                                               "0xB8025820"
#define  H3DDMA_TG_v1_end_reg                                                    0xB8025820
#define  H3DDMA_TG_v1_end_inst_addr                                              "0x0007"
#define  set_H3DDMA_TG_v1_end_reg(data)                                          (*((volatile unsigned int*)H3DDMA_TG_v1_end_reg)=data)
#define  get_H3DDMA_TG_v1_end_reg                                                (*((volatile unsigned int*)H3DDMA_TG_v1_end_reg))
#define  H3DDMA_TG_v1_end_pullup_en_shift                                        (25)
#define  H3DDMA_TG_v1_end_tg_hend1_shift                                         (8)
#define  H3DDMA_TG_v1_end_tg_vend1_shift                                         (0)
#define  H3DDMA_TG_v1_end_pullup_en_mask                                         (0x02000000)
#define  H3DDMA_TG_v1_end_tg_hend1_mask                                          (0x001FFF00)
#define  H3DDMA_TG_v1_end_tg_vend1_mask                                          (0x000000FF)
#define  H3DDMA_TG_v1_end_pullup_en(data)                                        (0x02000000&((data)<<25))
#define  H3DDMA_TG_v1_end_tg_hend1(data)                                         (0x001FFF00&((data)<<8))
#define  H3DDMA_TG_v1_end_tg_vend1(data)                                         (0x000000FF&(data))
#define  H3DDMA_TG_v1_end_get_pullup_en(data)                                    ((0x02000000&(data))>>25)
#define  H3DDMA_TG_v1_end_get_tg_hend1(data)                                     ((0x001FFF00&(data))>>8)
#define  H3DDMA_TG_v1_end_get_tg_vend1(data)                                     (0x000000FF&(data))

#define  H3DDMA_TG_SF_HTOTAL                                                    0x18025824
#define  H3DDMA_TG_SF_HTOTAL_reg_addr                                            "0xB8025824"
#define  H3DDMA_TG_SF_HTOTAL_reg                                                 0xB8025824
#define  H3DDMA_TG_SF_HTOTAL_inst_addr                                           "0x0008"
#define  set_H3DDMA_TG_SF_HTOTAL_reg(data)                                       (*((volatile unsigned int*)H3DDMA_TG_SF_HTOTAL_reg)=data)
#define  get_H3DDMA_TG_SF_HTOTAL_reg                                             (*((volatile unsigned int*)H3DDMA_TG_SF_HTOTAL_reg))
#define  H3DDMA_TG_SF_HTOTAL_tg_slf_htotal_en_shift                              (15)
#define  H3DDMA_TG_SF_HTOTAL_tg_slf_htotal_shift                                 (0)
#define  H3DDMA_TG_SF_HTOTAL_tg_slf_htotal_en_mask                               (0x00008000)
#define  H3DDMA_TG_SF_HTOTAL_tg_slf_htotal_mask                                  (0x00003FFF)
#define  H3DDMA_TG_SF_HTOTAL_tg_slf_htotal_en(data)                              (0x00008000&((data)<<15))
#define  H3DDMA_TG_SF_HTOTAL_tg_slf_htotal(data)                                 (0x00003FFF&(data))
#define  H3DDMA_TG_SF_HTOTAL_get_tg_slf_htotal_en(data)                          ((0x00008000&(data))>>15)
#define  H3DDMA_TG_SF_HTOTAL_get_tg_slf_htotal(data)                             (0x00003FFF&(data))

#define  H3DDMA_TG_Status                                                       0x18025828
#define  H3DDMA_TG_Status_reg_addr                                               "0xB8025828"
#define  H3DDMA_TG_Status_reg                                                    0xB8025828
#define  H3DDMA_TG_Status_inst_addr                                              "0x0009"
#define  set_H3DDMA_TG_Status_reg(data)                                          (*((volatile unsigned int*)H3DDMA_TG_Status_reg)=data)
#define  get_H3DDMA_TG_Status_reg                                                (*((volatile unsigned int*)H3DDMA_TG_Status_reg))
#define  H3DDMA_TG_Status_vs_rising_occur_shift                                  (8)
#define  H3DDMA_TG_Status_tg_l_flag_shift                                        (1)
#define  H3DDMA_TG_Status_tg_field_shift                                         (0)
#define  H3DDMA_TG_Status_vs_rising_occur_mask                                   (0x00000100)
#define  H3DDMA_TG_Status_tg_l_flag_mask                                         (0x00000002)
#define  H3DDMA_TG_Status_tg_field_mask                                          (0x00000001)
#define  H3DDMA_TG_Status_vs_rising_occur(data)                                  (0x00000100&((data)<<8))
#define  H3DDMA_TG_Status_tg_l_flag(data)                                        (0x00000002&((data)<<1))
#define  H3DDMA_TG_Status_tg_field(data)                                         (0x00000001&(data))
#define  H3DDMA_TG_Status_get_vs_rising_occur(data)                              ((0x00000100&(data))>>8)
#define  H3DDMA_TG_Status_get_tg_l_flag(data)                                    ((0x00000002&(data))>>1)
#define  H3DDMA_TG_Status_get_tg_field(data)                                     (0x00000001&(data))

#define  H3DDMA_I3DDMA_BIST_FAIL                                                0x1802582C
#define  H3DDMA_I3DDMA_BIST_FAIL_reg_addr                                        "0xB802582C"
#define  H3DDMA_I3DDMA_BIST_FAIL_reg                                             0xB802582C
#define  H3DDMA_I3DDMA_BIST_FAIL_inst_addr                                       "0x000A"
#define  set_H3DDMA_I3DDMA_BIST_FAIL_reg(data)                                   (*((volatile unsigned int*)H3DDMA_I3DDMA_BIST_FAIL_reg)=data)
#define  get_H3DDMA_I3DDMA_BIST_FAIL_reg                                         (*((volatile unsigned int*)H3DDMA_I3DDMA_BIST_FAIL_reg))
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_bist_cap3_fail_shift                     (16)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_bist_cap1_fail_shift                     (15)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_12_shift                  (14)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_11_shift                  (13)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_10_shift                  (12)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_9_shift                   (11)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_8_shift                   (10)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_7_shift                   (9)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_6_shift                   (8)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_5_shift                   (7)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_4_shift                   (6)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_3_shift                   (5)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_2_shift                   (4)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_1_shift                   (3)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_0_shift                   (2)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_bist_cap2_fail_shift                     (1)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_bist_cap0_fail_shift                     (0)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_bist_cap3_fail_mask                      (0x00010000)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_bist_cap1_fail_mask                      (0x00008000)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_12_mask                   (0x00004000)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_11_mask                   (0x00002000)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_10_mask                   (0x00001000)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_9_mask                    (0x00000800)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_8_mask                    (0x00000400)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_7_mask                    (0x00000200)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_6_mask                    (0x00000100)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_5_mask                    (0x00000080)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_4_mask                    (0x00000040)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_3_mask                    (0x00000020)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_2_mask                    (0x00000010)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_1_mask                    (0x00000008)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_0_mask                    (0x00000004)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_bist_cap2_fail_mask                      (0x00000002)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_bist_cap0_fail_mask                      (0x00000001)
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_bist_cap3_fail(data)                     (0x00010000&((data)<<16))
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_bist_cap1_fail(data)                     (0x00008000&((data)<<15))
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_12(data)                  (0x00004000&((data)<<14))
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_11(data)                  (0x00002000&((data)<<13))
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_10(data)                  (0x00001000&((data)<<12))
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_9(data)                   (0x00000800&((data)<<11))
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_8(data)                   (0x00000400&((data)<<10))
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_7(data)                   (0x00000200&((data)<<9))
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_6(data)                   (0x00000100&((data)<<8))
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_5(data)                   (0x00000080&((data)<<7))
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_4(data)                   (0x00000040&((data)<<6))
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_3(data)                   (0x00000020&((data)<<5))
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_2(data)                   (0x00000010&((data)<<4))
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_1(data)                   (0x00000008&((data)<<3))
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_pqc2_bist_fail_0(data)                   (0x00000004&((data)<<2))
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_bist_cap2_fail(data)                     (0x00000002&((data)<<1))
#define  H3DDMA_I3DDMA_BIST_FAIL_i3ddma_bist_cap0_fail(data)                     (0x00000001&(data))
#define  H3DDMA_I3DDMA_BIST_FAIL_get_i3ddma_bist_cap3_fail(data)                 ((0x00010000&(data))>>16)
#define  H3DDMA_I3DDMA_BIST_FAIL_get_i3ddma_bist_cap1_fail(data)                 ((0x00008000&(data))>>15)
#define  H3DDMA_I3DDMA_BIST_FAIL_get_i3ddma_pqc2_bist_fail_12(data)              ((0x00004000&(data))>>14)
#define  H3DDMA_I3DDMA_BIST_FAIL_get_i3ddma_pqc2_bist_fail_11(data)              ((0x00002000&(data))>>13)
#define  H3DDMA_I3DDMA_BIST_FAIL_get_i3ddma_pqc2_bist_fail_10(data)              ((0x00001000&(data))>>12)
#define  H3DDMA_I3DDMA_BIST_FAIL_get_i3ddma_pqc2_bist_fail_9(data)               ((0x00000800&(data))>>11)
#define  H3DDMA_I3DDMA_BIST_FAIL_get_i3ddma_pqc2_bist_fail_8(data)               ((0x00000400&(data))>>10)
#define  H3DDMA_I3DDMA_BIST_FAIL_get_i3ddma_pqc2_bist_fail_7(data)               ((0x00000200&(data))>>9)
#define  H3DDMA_I3DDMA_BIST_FAIL_get_i3ddma_pqc2_bist_fail_6(data)               ((0x00000100&(data))>>8)
#define  H3DDMA_I3DDMA_BIST_FAIL_get_i3ddma_pqc2_bist_fail_5(data)               ((0x00000080&(data))>>7)
#define  H3DDMA_I3DDMA_BIST_FAIL_get_i3ddma_pqc2_bist_fail_4(data)               ((0x00000040&(data))>>6)
#define  H3DDMA_I3DDMA_BIST_FAIL_get_i3ddma_pqc2_bist_fail_3(data)               ((0x00000020&(data))>>5)
#define  H3DDMA_I3DDMA_BIST_FAIL_get_i3ddma_pqc2_bist_fail_2(data)               ((0x00000010&(data))>>4)
#define  H3DDMA_I3DDMA_BIST_FAIL_get_i3ddma_pqc2_bist_fail_1(data)               ((0x00000008&(data))>>3)
#define  H3DDMA_I3DDMA_BIST_FAIL_get_i3ddma_pqc2_bist_fail_0(data)               ((0x00000004&(data))>>2)
#define  H3DDMA_I3DDMA_BIST_FAIL_get_i3ddma_bist_cap2_fail(data)                 ((0x00000002&(data))>>1)
#define  H3DDMA_I3DDMA_BIST_FAIL_get_i3ddma_bist_cap0_fail(data)                 (0x00000001&(data))

#define  H3DDMA_I3DDMA_BIST_DRF_FAIL                                            0x18025830
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_reg_addr                                    "0xB8025830"
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_reg                                         0xB8025830
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_inst_addr                                   "0x000B"
#define  set_H3DDMA_I3DDMA_BIST_DRF_FAIL_reg(data)                               (*((volatile unsigned int*)H3DDMA_I3DDMA_BIST_DRF_FAIL_reg)=data)
#define  get_H3DDMA_I3DDMA_BIST_DRF_FAIL_reg                                     (*((volatile unsigned int*)H3DDMA_I3DDMA_BIST_DRF_FAIL_reg))
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_cap3_drf_fail_shift                  (16)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_cap1_drf_fail_shift                  (15)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_12_shift               (14)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_11_shift               (13)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_10_shift               (12)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_9_shift                (11)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_8_shift                (10)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_7_shift                (9)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_6_shift                (8)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_5_shift                (7)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_4_shift                (6)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_3_shift                (5)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_2_shift                (4)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_1_shift                (3)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_0_shift                (2)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_cap2_drf_fail_shift                  (1)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_cap0_drf_fail_shift                  (0)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_cap3_drf_fail_mask                   (0x00010000)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_cap1_drf_fail_mask                   (0x00008000)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_12_mask                (0x00004000)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_11_mask                (0x00002000)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_10_mask                (0x00001000)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_9_mask                 (0x00000800)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_8_mask                 (0x00000400)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_7_mask                 (0x00000200)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_6_mask                 (0x00000100)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_5_mask                 (0x00000080)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_4_mask                 (0x00000040)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_3_mask                 (0x00000020)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_2_mask                 (0x00000010)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_1_mask                 (0x00000008)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_0_mask                 (0x00000004)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_cap2_drf_fail_mask                   (0x00000002)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_cap0_drf_fail_mask                   (0x00000001)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_cap3_drf_fail(data)                  (0x00010000&((data)<<16))
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_cap1_drf_fail(data)                  (0x00008000&((data)<<15))
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_12(data)               (0x00004000&((data)<<14))
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_11(data)               (0x00002000&((data)<<13))
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_10(data)               (0x00001000&((data)<<12))
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_9(data)                (0x00000800&((data)<<11))
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_8(data)                (0x00000400&((data)<<10))
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_7(data)                (0x00000200&((data)<<9))
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_6(data)                (0x00000100&((data)<<8))
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_5(data)                (0x00000080&((data)<<7))
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_4(data)                (0x00000040&((data)<<6))
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_3(data)                (0x00000020&((data)<<5))
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_2(data)                (0x00000010&((data)<<4))
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_1(data)                (0x00000008&((data)<<3))
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_pqc2_drf_fail_0(data)                (0x00000004&((data)<<2))
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_cap2_drf_fail(data)                  (0x00000002&((data)<<1))
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_i3ddma_cap0_drf_fail(data)                  (0x00000001&(data))
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_get_i3ddma_cap3_drf_fail(data)              ((0x00010000&(data))>>16)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_get_i3ddma_cap1_drf_fail(data)              ((0x00008000&(data))>>15)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_get_i3ddma_pqc2_drf_fail_12(data)           ((0x00004000&(data))>>14)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_get_i3ddma_pqc2_drf_fail_11(data)           ((0x00002000&(data))>>13)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_get_i3ddma_pqc2_drf_fail_10(data)           ((0x00001000&(data))>>12)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_get_i3ddma_pqc2_drf_fail_9(data)            ((0x00000800&(data))>>11)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_get_i3ddma_pqc2_drf_fail_8(data)            ((0x00000400&(data))>>10)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_get_i3ddma_pqc2_drf_fail_7(data)            ((0x00000200&(data))>>9)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_get_i3ddma_pqc2_drf_fail_6(data)            ((0x00000100&(data))>>8)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_get_i3ddma_pqc2_drf_fail_5(data)            ((0x00000080&(data))>>7)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_get_i3ddma_pqc2_drf_fail_4(data)            ((0x00000040&(data))>>6)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_get_i3ddma_pqc2_drf_fail_3(data)            ((0x00000020&(data))>>5)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_get_i3ddma_pqc2_drf_fail_2(data)            ((0x00000010&(data))>>4)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_get_i3ddma_pqc2_drf_fail_1(data)            ((0x00000008&(data))>>3)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_get_i3ddma_pqc2_drf_fail_0(data)            ((0x00000004&(data))>>2)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_get_i3ddma_cap2_drf_fail(data)              ((0x00000002&(data))>>1)
#define  H3DDMA_I3DDMA_BIST_DRF_FAIL_get_i3ddma_cap0_drf_fail(data)              (0x00000001&(data))

#define  H3DDMA_I3DDMA_BIST_RM_0                                                0x18025834
#define  H3DDMA_I3DDMA_BIST_RM_0_reg_addr                                        "0xB8025834"
#define  H3DDMA_I3DDMA_BIST_RM_0_reg                                             0xB8025834
#define  H3DDMA_I3DDMA_BIST_RM_0_inst_addr                                       "0x000C"
#define  set_H3DDMA_I3DDMA_BIST_RM_0_reg(data)                                   (*((volatile unsigned int*)H3DDMA_I3DDMA_BIST_RM_0_reg)=data)
#define  get_H3DDMA_I3DDMA_BIST_RM_0_reg                                         (*((volatile unsigned int*)H3DDMA_I3DDMA_BIST_RM_0_reg))
#define  H3DDMA_I3DDMA_BIST_RM_0_cap1_rmb_shift                                  (28)
#define  H3DDMA_I3DDMA_BIST_RM_0_cap1_rma_shift                                  (24)
#define  H3DDMA_I3DDMA_BIST_RM_0_i3ddma_pqc2_rm_1_shift                          (20)
#define  H3DDMA_I3DDMA_BIST_RM_0_i3ddma_pqc2_rm_0_shift                          (16)
#define  H3DDMA_I3DDMA_BIST_RM_0_cap2_rmb_shift                                  (12)
#define  H3DDMA_I3DDMA_BIST_RM_0_cap2_rma_shift                                  (8)
#define  H3DDMA_I3DDMA_BIST_RM_0_cap0_rmb_shift                                  (4)
#define  H3DDMA_I3DDMA_BIST_RM_0_cap0_rma_shift                                  (0)
#define  H3DDMA_I3DDMA_BIST_RM_0_cap1_rmb_mask                                   (0xF0000000)
#define  H3DDMA_I3DDMA_BIST_RM_0_cap1_rma_mask                                   (0x0F000000)
#define  H3DDMA_I3DDMA_BIST_RM_0_i3ddma_pqc2_rm_1_mask                           (0x00F00000)
#define  H3DDMA_I3DDMA_BIST_RM_0_i3ddma_pqc2_rm_0_mask                           (0x000F0000)
#define  H3DDMA_I3DDMA_BIST_RM_0_cap2_rmb_mask                                   (0x0000F000)
#define  H3DDMA_I3DDMA_BIST_RM_0_cap2_rma_mask                                   (0x00000F00)
#define  H3DDMA_I3DDMA_BIST_RM_0_cap0_rmb_mask                                   (0x000000F0)
#define  H3DDMA_I3DDMA_BIST_RM_0_cap0_rma_mask                                   (0x0000000F)
#define  H3DDMA_I3DDMA_BIST_RM_0_cap1_rmb(data)                                  (0xF0000000&((data)<<28))
#define  H3DDMA_I3DDMA_BIST_RM_0_cap1_rma(data)                                  (0x0F000000&((data)<<24))
#define  H3DDMA_I3DDMA_BIST_RM_0_i3ddma_pqc2_rm_1(data)                          (0x00F00000&((data)<<20))
#define  H3DDMA_I3DDMA_BIST_RM_0_i3ddma_pqc2_rm_0(data)                          (0x000F0000&((data)<<16))
#define  H3DDMA_I3DDMA_BIST_RM_0_cap2_rmb(data)                                  (0x0000F000&((data)<<12))
#define  H3DDMA_I3DDMA_BIST_RM_0_cap2_rma(data)                                  (0x00000F00&((data)<<8))
#define  H3DDMA_I3DDMA_BIST_RM_0_cap0_rmb(data)                                  (0x000000F0&((data)<<4))
#define  H3DDMA_I3DDMA_BIST_RM_0_cap0_rma(data)                                  (0x0000000F&(data))
#define  H3DDMA_I3DDMA_BIST_RM_0_get_cap1_rmb(data)                              ((0xF0000000&(data))>>28)
#define  H3DDMA_I3DDMA_BIST_RM_0_get_cap1_rma(data)                              ((0x0F000000&(data))>>24)
#define  H3DDMA_I3DDMA_BIST_RM_0_get_i3ddma_pqc2_rm_1(data)                      ((0x00F00000&(data))>>20)
#define  H3DDMA_I3DDMA_BIST_RM_0_get_i3ddma_pqc2_rm_0(data)                      ((0x000F0000&(data))>>16)
#define  H3DDMA_I3DDMA_BIST_RM_0_get_cap2_rmb(data)                              ((0x0000F000&(data))>>12)
#define  H3DDMA_I3DDMA_BIST_RM_0_get_cap2_rma(data)                              ((0x00000F00&(data))>>8)
#define  H3DDMA_I3DDMA_BIST_RM_0_get_cap0_rmb(data)                              ((0x000000F0&(data))>>4)
#define  H3DDMA_I3DDMA_BIST_RM_0_get_cap0_rma(data)                              (0x0000000F&(data))

#define  H3DDMA_I3DDMA_BIST_RM_1                                                0x18025838
#define  H3DDMA_I3DDMA_BIST_RM_1_reg_addr                                        "0xB8025838"
#define  H3DDMA_I3DDMA_BIST_RM_1_reg                                             0xB8025838
#define  H3DDMA_I3DDMA_BIST_RM_1_inst_addr                                       "0x000D"
#define  set_H3DDMA_I3DDMA_BIST_RM_1_reg(data)                                   (*((volatile unsigned int*)H3DDMA_I3DDMA_BIST_RM_1_reg)=data)
#define  get_H3DDMA_I3DDMA_BIST_RM_1_reg                                         (*((volatile unsigned int*)H3DDMA_I3DDMA_BIST_RM_1_reg))
#define  H3DDMA_I3DDMA_BIST_RM_1_cap3_rmb_shift                                  (4)
#define  H3DDMA_I3DDMA_BIST_RM_1_cap3_rma_shift                                  (0)
#define  H3DDMA_I3DDMA_BIST_RM_1_cap3_rmb_mask                                   (0x000000F0)
#define  H3DDMA_I3DDMA_BIST_RM_1_cap3_rma_mask                                   (0x0000000F)
#define  H3DDMA_I3DDMA_BIST_RM_1_cap3_rmb(data)                                  (0x000000F0&((data)<<4))
#define  H3DDMA_I3DDMA_BIST_RM_1_cap3_rma(data)                                  (0x0000000F&(data))
#define  H3DDMA_I3DDMA_BIST_RM_1_get_cap3_rmb(data)                              ((0x000000F0&(data))>>4)
#define  H3DDMA_I3DDMA_BIST_RM_1_get_cap3_rma(data)                              (0x0000000F&(data))

#define  H3DDMA_I3DDMA_LS_RME                                                   0x1802583C
#define  H3DDMA_I3DDMA_LS_RME_reg_addr                                           "0xB802583C"
#define  H3DDMA_I3DDMA_LS_RME_reg                                                0xB802583C
#define  H3DDMA_I3DDMA_LS_RME_inst_addr                                          "0x000E"
#define  set_H3DDMA_I3DDMA_LS_RME_reg(data)                                      (*((volatile unsigned int*)H3DDMA_I3DDMA_LS_RME_reg)=data)
#define  get_H3DDMA_I3DDMA_LS_RME_reg                                            (*((volatile unsigned int*)H3DDMA_I3DDMA_LS_RME_reg))
#define  H3DDMA_I3DDMA_LS_RME_cap3_rmeb_shift                                    (25)
#define  H3DDMA_I3DDMA_LS_RME_cap3_rmea_shift                                    (24)
#define  H3DDMA_I3DDMA_LS_RME_cap1_rmeb_shift                                    (23)
#define  H3DDMA_I3DDMA_LS_RME_cap1_rmea_shift                                    (22)
#define  H3DDMA_I3DDMA_LS_RME_i3ddma_pqc2_rme_1_shift                            (21)
#define  H3DDMA_I3DDMA_LS_RME_i3ddma_pqc2_rme_0_shift                            (20)
#define  H3DDMA_I3DDMA_LS_RME_cap2_rmeb_shift                                    (19)
#define  H3DDMA_I3DDMA_LS_RME_cap2_rmea_shift                                    (18)
#define  H3DDMA_I3DDMA_LS_RME_cap0_rmeb_shift                                    (17)
#define  H3DDMA_I3DDMA_LS_RME_cap0_rmea_shift                                    (16)
#define  H3DDMA_I3DDMA_LS_RME_cap3_ls_shift                                      (5)
#define  H3DDMA_I3DDMA_LS_RME_cap1_ls_shift                                      (4)
#define  H3DDMA_I3DDMA_LS_RME_i3ddma_pqc2_ls_1_shift                             (3)
#define  H3DDMA_I3DDMA_LS_RME_i3ddma_pqc2_ls_0_shift                             (2)
#define  H3DDMA_I3DDMA_LS_RME_cap2_ls_shift                                      (1)
#define  H3DDMA_I3DDMA_LS_RME_cap0_ls_shift                                      (0)
#define  H3DDMA_I3DDMA_LS_RME_cap3_rmeb_mask                                     (0x02000000)
#define  H3DDMA_I3DDMA_LS_RME_cap3_rmea_mask                                     (0x01000000)
#define  H3DDMA_I3DDMA_LS_RME_cap1_rmeb_mask                                     (0x00800000)
#define  H3DDMA_I3DDMA_LS_RME_cap1_rmea_mask                                     (0x00400000)
#define  H3DDMA_I3DDMA_LS_RME_i3ddma_pqc2_rme_1_mask                             (0x00200000)
#define  H3DDMA_I3DDMA_LS_RME_i3ddma_pqc2_rme_0_mask                             (0x00100000)
#define  H3DDMA_I3DDMA_LS_RME_cap2_rmeb_mask                                     (0x00080000)
#define  H3DDMA_I3DDMA_LS_RME_cap2_rmea_mask                                     (0x00040000)
#define  H3DDMA_I3DDMA_LS_RME_cap0_rmeb_mask                                     (0x00020000)
#define  H3DDMA_I3DDMA_LS_RME_cap0_rmea_mask                                     (0x00010000)
#define  H3DDMA_I3DDMA_LS_RME_cap3_ls_mask                                       (0x00000020)
#define  H3DDMA_I3DDMA_LS_RME_cap1_ls_mask                                       (0x00000010)
#define  H3DDMA_I3DDMA_LS_RME_i3ddma_pqc2_ls_1_mask                              (0x00000008)
#define  H3DDMA_I3DDMA_LS_RME_i3ddma_pqc2_ls_0_mask                              (0x00000004)
#define  H3DDMA_I3DDMA_LS_RME_cap2_ls_mask                                       (0x00000002)
#define  H3DDMA_I3DDMA_LS_RME_cap0_ls_mask                                       (0x00000001)
#define  H3DDMA_I3DDMA_LS_RME_cap3_rmeb(data)                                    (0x02000000&((data)<<25))
#define  H3DDMA_I3DDMA_LS_RME_cap3_rmea(data)                                    (0x01000000&((data)<<24))
#define  H3DDMA_I3DDMA_LS_RME_cap1_rmeb(data)                                    (0x00800000&((data)<<23))
#define  H3DDMA_I3DDMA_LS_RME_cap1_rmea(data)                                    (0x00400000&((data)<<22))
#define  H3DDMA_I3DDMA_LS_RME_i3ddma_pqc2_rme_1(data)                            (0x00200000&((data)<<21))
#define  H3DDMA_I3DDMA_LS_RME_i3ddma_pqc2_rme_0(data)                            (0x00100000&((data)<<20))
#define  H3DDMA_I3DDMA_LS_RME_cap2_rmeb(data)                                    (0x00080000&((data)<<19))
#define  H3DDMA_I3DDMA_LS_RME_cap2_rmea(data)                                    (0x00040000&((data)<<18))
#define  H3DDMA_I3DDMA_LS_RME_cap0_rmeb(data)                                    (0x00020000&((data)<<17))
#define  H3DDMA_I3DDMA_LS_RME_cap0_rmea(data)                                    (0x00010000&((data)<<16))
#define  H3DDMA_I3DDMA_LS_RME_cap3_ls(data)                                      (0x00000020&((data)<<5))
#define  H3DDMA_I3DDMA_LS_RME_cap1_ls(data)                                      (0x00000010&((data)<<4))
#define  H3DDMA_I3DDMA_LS_RME_i3ddma_pqc2_ls_1(data)                             (0x00000008&((data)<<3))
#define  H3DDMA_I3DDMA_LS_RME_i3ddma_pqc2_ls_0(data)                             (0x00000004&((data)<<2))
#define  H3DDMA_I3DDMA_LS_RME_cap2_ls(data)                                      (0x00000002&((data)<<1))
#define  H3DDMA_I3DDMA_LS_RME_cap0_ls(data)                                      (0x00000001&(data))
#define  H3DDMA_I3DDMA_LS_RME_get_cap3_rmeb(data)                                ((0x02000000&(data))>>25)
#define  H3DDMA_I3DDMA_LS_RME_get_cap3_rmea(data)                                ((0x01000000&(data))>>24)
#define  H3DDMA_I3DDMA_LS_RME_get_cap1_rmeb(data)                                ((0x00800000&(data))>>23)
#define  H3DDMA_I3DDMA_LS_RME_get_cap1_rmea(data)                                ((0x00400000&(data))>>22)
#define  H3DDMA_I3DDMA_LS_RME_get_i3ddma_pqc2_rme_1(data)                        ((0x00200000&(data))>>21)
#define  H3DDMA_I3DDMA_LS_RME_get_i3ddma_pqc2_rme_0(data)                        ((0x00100000&(data))>>20)
#define  H3DDMA_I3DDMA_LS_RME_get_cap2_rmeb(data)                                ((0x00080000&(data))>>19)
#define  H3DDMA_I3DDMA_LS_RME_get_cap2_rmea(data)                                ((0x00040000&(data))>>18)
#define  H3DDMA_I3DDMA_LS_RME_get_cap0_rmeb(data)                                ((0x00020000&(data))>>17)
#define  H3DDMA_I3DDMA_LS_RME_get_cap0_rmea(data)                                ((0x00010000&(data))>>16)
#define  H3DDMA_I3DDMA_LS_RME_get_cap3_ls(data)                                  ((0x00000020&(data))>>5)
#define  H3DDMA_I3DDMA_LS_RME_get_cap1_ls(data)                                  ((0x00000010&(data))>>4)
#define  H3DDMA_I3DDMA_LS_RME_get_i3ddma_pqc2_ls_1(data)                         ((0x00000008&(data))>>3)
#define  H3DDMA_I3DDMA_LS_RME_get_i3ddma_pqc2_ls_0(data)                         ((0x00000004&(data))>>2)
#define  H3DDMA_I3DDMA_LS_RME_get_cap2_ls(data)                                  ((0x00000002&(data))>>1)
#define  H3DDMA_I3DDMA_LS_RME_get_cap0_ls(data)                                  (0x00000001&(data))

#define  H3DDMA_I3DDMA_MDP_CR                                                   0x18025840
#define  H3DDMA_I3DDMA_MDP_CR_reg_addr                                           "0xB8025840"
#define  H3DDMA_I3DDMA_MDP_CR_reg                                                0xB8025840
#define  H3DDMA_I3DDMA_MDP_CR_inst_addr                                          "0x000F"
#define  set_H3DDMA_I3DDMA_MDP_CR_reg(data)                                      (*((volatile unsigned int*)H3DDMA_I3DDMA_MDP_CR_reg)=data)
#define  get_H3DDMA_I3DDMA_MDP_CR_reg                                            (*((volatile unsigned int*)H3DDMA_I3DDMA_MDP_CR_reg))
#define  H3DDMA_I3DDMA_MDP_CR_mdp_max_packet_num_shift                           (16)
#define  H3DDMA_I3DDMA_MDP_CR_mdp_mode_shift                                     (1)
#define  H3DDMA_I3DDMA_MDP_CR_mdp_en_shift                                       (0)
#define  H3DDMA_I3DDMA_MDP_CR_mdp_max_packet_num_mask                            (0x01FF0000)
#define  H3DDMA_I3DDMA_MDP_CR_mdp_mode_mask                                      (0x00000006)
#define  H3DDMA_I3DDMA_MDP_CR_mdp_en_mask                                        (0x00000001)
#define  H3DDMA_I3DDMA_MDP_CR_mdp_max_packet_num(data)                           (0x01FF0000&((data)<<16))
#define  H3DDMA_I3DDMA_MDP_CR_mdp_mode(data)                                     (0x00000006&((data)<<1))
#define  H3DDMA_I3DDMA_MDP_CR_mdp_en(data)                                       (0x00000001&(data))
#define  H3DDMA_I3DDMA_MDP_CR_get_mdp_max_packet_num(data)                       ((0x01FF0000&(data))>>16)
#define  H3DDMA_I3DDMA_MDP_CR_get_mdp_mode(data)                                 ((0x00000006&(data))>>1)
#define  H3DDMA_I3DDMA_MDP_CR_get_mdp_en(data)                                   (0x00000001&(data))

#define  H3DDMA_LR_CRC_CTRL                                                     0x18025844
#define  H3DDMA_LR_CRC_CTRL_reg_addr                                             "0xB8025844"
#define  H3DDMA_LR_CRC_CTRL_reg                                                  0xB8025844
#define  H3DDMA_LR_CRC_CTRL_inst_addr                                            "0x0010"
#define  set_H3DDMA_LR_CRC_CTRL_reg(data)                                        (*((volatile unsigned int*)H3DDMA_LR_CRC_CTRL_reg)=data)
#define  get_H3DDMA_LR_CRC_CTRL_reg                                              (*((volatile unsigned int*)H3DDMA_LR_CRC_CTRL_reg))
#define  H3DDMA_LR_CRC_CTRL_r_crc_res_sel_shift                                  (12)
#define  H3DDMA_LR_CRC_CTRL_r_crc_conti_shift                                    (9)
#define  H3DDMA_LR_CRC_CTRL_r_crc_start_shift                                    (8)
#define  H3DDMA_LR_CRC_CTRL_l_crc_res_sel_shift                                  (4)
#define  H3DDMA_LR_CRC_CTRL_l_crc_conti_shift                                    (1)
#define  H3DDMA_LR_CRC_CTRL_l_crc_start_shift                                    (0)
#define  H3DDMA_LR_CRC_CTRL_r_crc_res_sel_mask                                   (0x0000F000)
#define  H3DDMA_LR_CRC_CTRL_r_crc_conti_mask                                     (0x00000200)
#define  H3DDMA_LR_CRC_CTRL_r_crc_start_mask                                     (0x00000100)
#define  H3DDMA_LR_CRC_CTRL_l_crc_res_sel_mask                                   (0x000000F0)
#define  H3DDMA_LR_CRC_CTRL_l_crc_conti_mask                                     (0x00000002)
#define  H3DDMA_LR_CRC_CTRL_l_crc_start_mask                                     (0x00000001)
#define  H3DDMA_LR_CRC_CTRL_r_crc_res_sel(data)                                  (0x0000F000&((data)<<12))
#define  H3DDMA_LR_CRC_CTRL_r_crc_conti(data)                                    (0x00000200&((data)<<9))
#define  H3DDMA_LR_CRC_CTRL_r_crc_start(data)                                    (0x00000100&((data)<<8))
#define  H3DDMA_LR_CRC_CTRL_l_crc_res_sel(data)                                  (0x000000F0&((data)<<4))
#define  H3DDMA_LR_CRC_CTRL_l_crc_conti(data)                                    (0x00000002&((data)<<1))
#define  H3DDMA_LR_CRC_CTRL_l_crc_start(data)                                    (0x00000001&(data))
#define  H3DDMA_LR_CRC_CTRL_get_r_crc_res_sel(data)                              ((0x0000F000&(data))>>12)
#define  H3DDMA_LR_CRC_CTRL_get_r_crc_conti(data)                                ((0x00000200&(data))>>9)
#define  H3DDMA_LR_CRC_CTRL_get_r_crc_start(data)                                ((0x00000100&(data))>>8)
#define  H3DDMA_LR_CRC_CTRL_get_l_crc_res_sel(data)                              ((0x000000F0&(data))>>4)
#define  H3DDMA_LR_CRC_CTRL_get_l_crc_conti(data)                                ((0x00000002&(data))>>1)
#define  H3DDMA_LR_CRC_CTRL_get_l_crc_start(data)                                (0x00000001&(data))

#define  H3DDMA_CRC_L_Result                                                    0x18025848
#define  H3DDMA_CRC_L_Result_reg_addr                                            "0xB8025848"
#define  H3DDMA_CRC_L_Result_reg                                                 0xB8025848
#define  H3DDMA_CRC_L_Result_inst_addr                                           "0x0011"
#define  set_H3DDMA_CRC_L_Result_reg(data)                                       (*((volatile unsigned int*)H3DDMA_CRC_L_Result_reg)=data)
#define  get_H3DDMA_CRC_L_Result_reg                                             (*((volatile unsigned int*)H3DDMA_CRC_L_Result_reg))
#define  H3DDMA_CRC_L_Result_crc_l_result_shift                                  (0)
#define  H3DDMA_CRC_L_Result_crc_l_result_mask                                   (0xFFFFFFFF)
#define  H3DDMA_CRC_L_Result_crc_l_result(data)                                  (0xFFFFFFFF&(data))
#define  H3DDMA_CRC_L_Result_get_crc_l_result(data)                              (0xFFFFFFFF&(data))

#define  H3DDMA_CRC_R_Result                                                    0x1802584C
#define  H3DDMA_CRC_R_Result_reg_addr                                            "0xB802584C"
#define  H3DDMA_CRC_R_Result_reg                                                 0xB802584C
#define  H3DDMA_CRC_R_Result_inst_addr                                           "0x0012"
#define  set_H3DDMA_CRC_R_Result_reg(data)                                       (*((volatile unsigned int*)H3DDMA_CRC_R_Result_reg)=data)
#define  get_H3DDMA_CRC_R_Result_reg                                             (*((volatile unsigned int*)H3DDMA_CRC_R_Result_reg))
#define  H3DDMA_CRC_R_Result_crc_r_result_shift                                  (0)
#define  H3DDMA_CRC_R_Result_crc_r_result_mask                                   (0xFFFFFFFF)
#define  H3DDMA_CRC_R_Result_crc_r_result(data)                                  (0xFFFFFFFF&(data))
#define  H3DDMA_CRC_R_Result_get_crc_r_result(data)                              (0xFFFFFFFF&(data))

#define  H3DDMA_Interrupt_Enable                                                0x18025850
#define  H3DDMA_Interrupt_Enable_reg_addr                                        "0xB8025850"
#define  H3DDMA_Interrupt_Enable_reg                                             0xB8025850
#define  H3DDMA_Interrupt_Enable_inst_addr                                       "0x0013"
#define  set_H3DDMA_Interrupt_Enable_reg(data)                                   (*((volatile unsigned int*)H3DDMA_Interrupt_Enable_reg)=data)
#define  get_H3DDMA_Interrupt_Enable_reg                                         (*((volatile unsigned int*)H3DDMA_Interrupt_Enable_reg))
#define  H3DDMA_Interrupt_Enable_cap3_last_wr_ie_shift                           (7)
#define  H3DDMA_Interrupt_Enable_cap2_last_wr_ie_shift                           (6)
#define  H3DDMA_Interrupt_Enable_cap1_last_wr_ie_shift                           (5)
#define  H3DDMA_Interrupt_Enable_cap0_last_wr_ie_shift                           (4)
#define  H3DDMA_Interrupt_Enable_mem_err_ie_shift                                (2)
#define  H3DDMA_Interrupt_Enable_fifo_err_ie_shift                               (1)
#define  H3DDMA_Interrupt_Enable_vs_rising_ie_shift                              (0)
#define  H3DDMA_Interrupt_Enable_cap3_last_wr_ie_mask                            (0x00000080)
#define  H3DDMA_Interrupt_Enable_cap2_last_wr_ie_mask                            (0x00000040)
#define  H3DDMA_Interrupt_Enable_cap1_last_wr_ie_mask                            (0x00000020)
#define  H3DDMA_Interrupt_Enable_cap0_last_wr_ie_mask                            (0x00000010)
#define  H3DDMA_Interrupt_Enable_mem_err_ie_mask                                 (0x00000004)
#define  H3DDMA_Interrupt_Enable_fifo_err_ie_mask                                (0x00000002)
#define  H3DDMA_Interrupt_Enable_vs_rising_ie_mask                               (0x00000001)
#define  H3DDMA_Interrupt_Enable_cap3_last_wr_ie(data)                           (0x00000080&((data)<<7))
#define  H3DDMA_Interrupt_Enable_cap2_last_wr_ie(data)                           (0x00000040&((data)<<6))
#define  H3DDMA_Interrupt_Enable_cap1_last_wr_ie(data)                           (0x00000020&((data)<<5))
#define  H3DDMA_Interrupt_Enable_cap0_last_wr_ie(data)                           (0x00000010&((data)<<4))
#define  H3DDMA_Interrupt_Enable_mem_err_ie(data)                                (0x00000004&((data)<<2))
#define  H3DDMA_Interrupt_Enable_fifo_err_ie(data)                               (0x00000002&((data)<<1))
#define  H3DDMA_Interrupt_Enable_vs_rising_ie(data)                              (0x00000001&(data))
#define  H3DDMA_Interrupt_Enable_get_cap3_last_wr_ie(data)                       ((0x00000080&(data))>>7)
#define  H3DDMA_Interrupt_Enable_get_cap2_last_wr_ie(data)                       ((0x00000040&(data))>>6)
#define  H3DDMA_Interrupt_Enable_get_cap1_last_wr_ie(data)                       ((0x00000020&(data))>>5)
#define  H3DDMA_Interrupt_Enable_get_cap0_last_wr_ie(data)                       ((0x00000010&(data))>>4)
#define  H3DDMA_Interrupt_Enable_get_mem_err_ie(data)                            ((0x00000004&(data))>>2)
#define  H3DDMA_Interrupt_Enable_get_fifo_err_ie(data)                           ((0x00000002&(data))>>1)
#define  H3DDMA_Interrupt_Enable_get_vs_rising_ie(data)                          (0x00000001&(data))

#define  H3DDMA_H3DDMA_PQ_CMP                                                   0x18025860
#define  H3DDMA_H3DDMA_PQ_CMP_reg_addr                                           "0xB8025860"
#define  H3DDMA_H3DDMA_PQ_CMP_reg                                                0xB8025860
#define  H3DDMA_H3DDMA_PQ_CMP_inst_addr                                          "0x0014"
#define  set_H3DDMA_H3DDMA_PQ_CMP_reg(data)                                      (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_reg)=data)
#define  get_H3DDMA_H3DDMA_PQ_CMP_reg                                            (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_reg))
#define  H3DDMA_H3DDMA_PQ_CMP_cmp_en_shift                                       (31)
#define  H3DDMA_H3DDMA_PQ_CMP_cmp_width_div32_shift                              (16)
#define  H3DDMA_H3DDMA_PQ_CMP_cmp_height_shift                                   (0)
#define  H3DDMA_H3DDMA_PQ_CMP_cmp_en_mask                                        (0x80000000)
#define  H3DDMA_H3DDMA_PQ_CMP_cmp_width_div32_mask                               (0x01FF0000)
#define  H3DDMA_H3DDMA_PQ_CMP_cmp_height_mask                                    (0x00003FFF)
#define  H3DDMA_H3DDMA_PQ_CMP_cmp_en(data)                                       (0x80000000&((data)<<31))
#define  H3DDMA_H3DDMA_PQ_CMP_cmp_width_div32(data)                              (0x01FF0000&((data)<<16))
#define  H3DDMA_H3DDMA_PQ_CMP_cmp_height(data)                                   (0x00003FFF&(data))
#define  H3DDMA_H3DDMA_PQ_CMP_get_cmp_en(data)                                   ((0x80000000&(data))>>31)
#define  H3DDMA_H3DDMA_PQ_CMP_get_cmp_width_div32(data)                          ((0x01FF0000&(data))>>16)
#define  H3DDMA_H3DDMA_PQ_CMP_get_cmp_height(data)                               (0x00003FFF&(data))

#define  H3DDMA_H3DDMA_PQ_CMP_PAIR                                              0x18025864
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_reg_addr                                      "0xB8025864"
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_reg                                           0xB8025864
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_inst_addr                                     "0x0015"
#define  set_H3DDMA_H3DDMA_PQ_CMP_PAIR_reg(data)                                 (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_PAIR_reg)=data)
#define  get_H3DDMA_H3DDMA_PQ_CMP_PAIR_reg                                       (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_PAIR_reg))
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_line_sum_bit_shift                        (16)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_400_old_mode_en_shift                     (15)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_dummy_14_11_shift                             (11)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_jump4_en_shift                            (10)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_qp_mode_shift                             (8)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_dic_mode_en_shift                         (7)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_two_line_prediction_en_shift                  (6)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_line_mode_shift                           (5)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_data_color_shift                          (4)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_data_bit_width_shift                      (2)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_data_format_shift                         (0)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_line_sum_bit_mask                         (0xFFFF0000)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_400_old_mode_en_mask                      (0x00008000)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_dummy_14_11_mask                              (0x00007800)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_jump4_en_mask                             (0x00000400)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_qp_mode_mask                              (0x00000300)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_dic_mode_en_mask                          (0x00000080)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_two_line_prediction_en_mask                   (0x00000040)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_line_mode_mask                            (0x00000020)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_data_color_mask                           (0x00000010)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_data_bit_width_mask                       (0x0000000C)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_data_format_mask                          (0x00000003)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_line_sum_bit(data)                        (0xFFFF0000&((data)<<16))
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_400_old_mode_en(data)                     (0x00008000&((data)<<15))
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_dummy_14_11(data)                             (0x00007800&((data)<<11))
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_jump4_en(data)                            (0x00000400&((data)<<10))
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_qp_mode(data)                             (0x00000300&((data)<<8))
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_dic_mode_en(data)                         (0x00000080&((data)<<7))
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_two_line_prediction_en(data)                  (0x00000040&((data)<<6))
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_line_mode(data)                           (0x00000020&((data)<<5))
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_data_color(data)                          (0x00000010&((data)<<4))
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_data_bit_width(data)                      (0x0000000C&((data)<<2))
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_cmp_data_format(data)                         (0x00000003&(data))
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_get_cmp_line_sum_bit(data)                    ((0xFFFF0000&(data))>>16)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_get_cmp_400_old_mode_en(data)                 ((0x00008000&(data))>>15)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_get_dummy_14_11(data)                         ((0x00007800&(data))>>11)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_get_cmp_jump4_en(data)                        ((0x00000400&(data))>>10)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_get_cmp_qp_mode(data)                         ((0x00000300&(data))>>8)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_get_cmp_dic_mode_en(data)                     ((0x00000080&(data))>>7)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_get_two_line_prediction_en(data)              ((0x00000040&(data))>>6)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_get_cmp_line_mode(data)                       ((0x00000020&(data))>>5)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_get_cmp_data_color(data)                      ((0x00000010&(data))>>4)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_get_cmp_data_bit_width(data)                  ((0x0000000C&(data))>>2)
#define  H3DDMA_H3DDMA_PQ_CMP_PAIR_get_cmp_data_format(data)                     (0x00000003&(data))

#define  H3DDMA_H3DDMA_PQ_CMP_BIT                                               0x18025868
#define  H3DDMA_H3DDMA_PQ_CMP_BIT_reg_addr                                       "0xB8025868"
#define  H3DDMA_H3DDMA_PQ_CMP_BIT_reg                                            0xB8025868
#define  H3DDMA_H3DDMA_PQ_CMP_BIT_inst_addr                                      "0x0016"
#define  set_H3DDMA_H3DDMA_PQ_CMP_BIT_reg(data)                                  (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_BIT_reg)=data)
#define  get_H3DDMA_H3DDMA_PQ_CMP_BIT_reg                                        (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_BIT_reg))
#define  H3DDMA_H3DDMA_PQ_CMP_BIT_first_line_more_bit_shift                      (24)
#define  H3DDMA_H3DDMA_PQ_CMP_BIT_block_limit_bit_shift                          (16)
#define  H3DDMA_H3DDMA_PQ_CMP_BIT_line_limit_bit_shift                           (8)
#define  H3DDMA_H3DDMA_PQ_CMP_BIT_frame_limit_bit_shift                          (0)
#define  H3DDMA_H3DDMA_PQ_CMP_BIT_first_line_more_bit_mask                       (0x3F000000)
#define  H3DDMA_H3DDMA_PQ_CMP_BIT_block_limit_bit_mask                           (0x003F0000)
#define  H3DDMA_H3DDMA_PQ_CMP_BIT_line_limit_bit_mask                            (0x00003F00)
#define  H3DDMA_H3DDMA_PQ_CMP_BIT_frame_limit_bit_mask                           (0x0000003F)
#define  H3DDMA_H3DDMA_PQ_CMP_BIT_first_line_more_bit(data)                      (0x3F000000&((data)<<24))
#define  H3DDMA_H3DDMA_PQ_CMP_BIT_block_limit_bit(data)                          (0x003F0000&((data)<<16))
#define  H3DDMA_H3DDMA_PQ_CMP_BIT_line_limit_bit(data)                           (0x00003F00&((data)<<8))
#define  H3DDMA_H3DDMA_PQ_CMP_BIT_frame_limit_bit(data)                          (0x0000003F&(data))
#define  H3DDMA_H3DDMA_PQ_CMP_BIT_get_first_line_more_bit(data)                  ((0x3F000000&(data))>>24)
#define  H3DDMA_H3DDMA_PQ_CMP_BIT_get_block_limit_bit(data)                      ((0x003F0000&(data))>>16)
#define  H3DDMA_H3DDMA_PQ_CMP_BIT_get_line_limit_bit(data)                       ((0x00003F00&(data))>>8)
#define  H3DDMA_H3DDMA_PQ_CMP_BIT_get_frame_limit_bit(data)                      (0x0000003F&(data))

#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE                                            0x1802586C
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_reg_addr                                    "0xB802586C"
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_reg                                         0xB802586C
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_inst_addr                                   "0x0017"
#define  set_H3DDMA_H3DDMA_PQ_CMP_ENABLE_reg(data)                               (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_ENABLE_reg)=data)
#define  get_H3DDMA_H3DDMA_PQ_CMP_ENABLE_reg                                     (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_ENABLE_reg))
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_input_fifo_pause_cycle_shift                (28)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_tail_dummy_throughput_shift                 (27)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_first_predict_nc_mode_shift                 (26)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_g_ratio_shift                               (16)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_add_last2blk_over_curve_bit_shift           (15)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_variation_maxmin_en_shift                   (14)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_dynamic_sum_line_rst_shift                  (13)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_blk0_add_en_shift                           (12)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_guarantee_max_qp_en_shift                   (11)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_dynamic_allocate_ratio_en_shift             (10)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_poor_limit_min_qp_en_shift                  (9)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_balance_en_shift                            (8)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_fisrt_line_more_en_shift                    (7)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_blk0_add_half_en_shift                      (6)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_do_422_mode_shift                           (4)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_first_predict_nc_en_shift                   (3)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_not_enough_bit_do_422_en_shift              (2)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_not_rich_do_422_en_shift                    (1)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_rb_lossy_do_422_en_shift                    (0)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_input_fifo_pause_cycle_mask                 (0xF0000000)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_tail_dummy_throughput_mask                  (0x08000000)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_first_predict_nc_mode_mask                  (0x04000000)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_g_ratio_mask                                (0x001F0000)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_add_last2blk_over_curve_bit_mask            (0x00008000)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_variation_maxmin_en_mask                    (0x00004000)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_dynamic_sum_line_rst_mask                   (0x00002000)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_blk0_add_en_mask                            (0x00001000)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_guarantee_max_qp_en_mask                    (0x00000800)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_dynamic_allocate_ratio_en_mask              (0x00000400)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_poor_limit_min_qp_en_mask                   (0x00000200)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_balance_en_mask                             (0x00000100)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_fisrt_line_more_en_mask                     (0x00000080)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_blk0_add_half_en_mask                       (0x00000040)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_do_422_mode_mask                            (0x00000030)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_first_predict_nc_en_mask                    (0x00000008)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_not_enough_bit_do_422_en_mask               (0x00000004)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_not_rich_do_422_en_mask                     (0x00000002)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_rb_lossy_do_422_en_mask                     (0x00000001)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_input_fifo_pause_cycle(data)                (0xF0000000&((data)<<28))
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_tail_dummy_throughput(data)                 (0x08000000&((data)<<27))
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_first_predict_nc_mode(data)                 (0x04000000&((data)<<26))
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_g_ratio(data)                               (0x001F0000&((data)<<16))
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_add_last2blk_over_curve_bit(data)           (0x00008000&((data)<<15))
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_variation_maxmin_en(data)                   (0x00004000&((data)<<14))
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_dynamic_sum_line_rst(data)                  (0x00002000&((data)<<13))
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_blk0_add_en(data)                           (0x00001000&((data)<<12))
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_guarantee_max_qp_en(data)                   (0x00000800&((data)<<11))
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_dynamic_allocate_ratio_en(data)             (0x00000400&((data)<<10))
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_poor_limit_min_qp_en(data)                  (0x00000200&((data)<<9))
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_balance_en(data)                            (0x00000100&((data)<<8))
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_fisrt_line_more_en(data)                    (0x00000080&((data)<<7))
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_blk0_add_half_en(data)                      (0x00000040&((data)<<6))
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_do_422_mode(data)                           (0x00000030&((data)<<4))
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_first_predict_nc_en(data)                   (0x00000008&((data)<<3))
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_not_enough_bit_do_422_en(data)              (0x00000004&((data)<<2))
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_not_rich_do_422_en(data)                    (0x00000002&((data)<<1))
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_rb_lossy_do_422_en(data)                    (0x00000001&(data))
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_get_input_fifo_pause_cycle(data)            ((0xF0000000&(data))>>28)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_get_tail_dummy_throughput(data)             ((0x08000000&(data))>>27)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_get_first_predict_nc_mode(data)             ((0x04000000&(data))>>26)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_get_g_ratio(data)                           ((0x001F0000&(data))>>16)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_get_add_last2blk_over_curve_bit(data)       ((0x00008000&(data))>>15)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_get_variation_maxmin_en(data)               ((0x00004000&(data))>>14)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_get_dynamic_sum_line_rst(data)              ((0x00002000&(data))>>13)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_get_blk0_add_en(data)                       ((0x00001000&(data))>>12)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_get_guarantee_max_qp_en(data)               ((0x00000800&(data))>>11)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_get_dynamic_allocate_ratio_en(data)         ((0x00000400&(data))>>10)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_get_poor_limit_min_qp_en(data)              ((0x00000200&(data))>>9)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_get_balance_en(data)                        ((0x00000100&(data))>>8)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_get_fisrt_line_more_en(data)                ((0x00000080&(data))>>7)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_get_blk0_add_half_en(data)                  ((0x00000040&(data))>>6)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_get_do_422_mode(data)                       ((0x00000030&(data))>>4)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_get_first_predict_nc_en(data)               ((0x00000008&(data))>>3)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_get_not_enough_bit_do_422_en(data)          ((0x00000004&(data))>>2)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_get_not_rich_do_422_en(data)                ((0x00000002&(data))>>1)
#define  H3DDMA_H3DDMA_PQ_CMP_ENABLE_get_rb_lossy_do_422_en(data)                (0x00000001&(data))

#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH                                            0x18025870
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_reg_addr                                    "0xB8025870"
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_reg                                         0xB8025870
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_inst_addr                                   "0x0018"
#define  set_H3DDMA_H3DDMA_PQ_CMP_SMOOTH_reg(data)                               (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_SMOOTH_reg)=data)
#define  get_H3DDMA_H3DDMA_PQ_CMP_SMOOTH_reg                                     (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_SMOOTH_reg))
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_dic_mode_option_shift                       (28)
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_not_enough_bit_do_422_qp_shift              (24)
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_not_rich_do_422_th_shift                    (20)
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_rb_lossy_do_422_qp_level_shift              (16)
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_dic_mode_entry_th_shift                     (12)
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_variation_value_th_shift                    (8)
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_variation_num_th_shift                      (4)
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_variation_near_num_th_shift                 (0)
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_dic_mode_option_mask                        (0xF0000000)
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_not_enough_bit_do_422_qp_mask               (0x07000000)
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_not_rich_do_422_th_mask                     (0x00F00000)
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_rb_lossy_do_422_qp_level_mask               (0x00070000)
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_dic_mode_entry_th_mask                      (0x0000F000)
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_variation_value_th_mask                     (0x00000F00)
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_variation_num_th_mask                       (0x00000070)
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_variation_near_num_th_mask                  (0x00000007)
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_dic_mode_option(data)                       (0xF0000000&((data)<<28))
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_not_enough_bit_do_422_qp(data)              (0x07000000&((data)<<24))
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_not_rich_do_422_th(data)                    (0x00F00000&((data)<<20))
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_rb_lossy_do_422_qp_level(data)              (0x00070000&((data)<<16))
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_dic_mode_entry_th(data)                     (0x0000F000&((data)<<12))
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_variation_value_th(data)                    (0x00000F00&((data)<<8))
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_variation_num_th(data)                      (0x00000070&((data)<<4))
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_variation_near_num_th(data)                 (0x00000007&(data))
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_get_dic_mode_option(data)                   ((0xF0000000&(data))>>28)
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_get_not_enough_bit_do_422_qp(data)          ((0x07000000&(data))>>24)
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_get_not_rich_do_422_th(data)                ((0x00F00000&(data))>>20)
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_get_rb_lossy_do_422_qp_level(data)          ((0x00070000&(data))>>16)
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_get_dic_mode_entry_th(data)                 ((0x0000F000&(data))>>12)
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_get_variation_value_th(data)                ((0x00000F00&(data))>>8)
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_get_variation_num_th(data)                  ((0x00000070&(data))>>4)
#define  H3DDMA_H3DDMA_PQ_CMP_SMOOTH_get_variation_near_num_th(data)             (0x00000007&(data))

#define  H3DDMA_H3DDMA_PQ_CMP_ALLOCATE                                          0x18025874
#define  H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_reg_addr                                  "0xB8025874"
#define  H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_reg                                       0xB8025874
#define  H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_inst_addr                                 "0x0019"
#define  set_H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_reg(data)                             (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_reg)=data)
#define  get_H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_reg                                   (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_reg))
#define  H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_max_shift          (24)
#define  H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_min_shift          (16)
#define  H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_dynamic_allocate_line_shift               (8)
#define  H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_dynamic_allocate_more_shift               (4)
#define  H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_dynamic_allocate_less_shift               (0)
#define  H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_max_mask           (0x1F000000)
#define  H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_min_mask           (0x001F0000)
#define  H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_dynamic_allocate_line_mask                (0x00000700)
#define  H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_dynamic_allocate_more_mask                (0x000000F0)
#define  H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_dynamic_allocate_less_mask                (0x0000000F)
#define  H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_max(data)          (0x1F000000&((data)<<24))
#define  H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_min(data)          (0x001F0000&((data)<<16))
#define  H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_dynamic_allocate_line(data)               (0x00000700&((data)<<8))
#define  H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_dynamic_allocate_more(data)               (0x000000F0&((data)<<4))
#define  H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_dynamic_allocate_less(data)               (0x0000000F&(data))
#define  H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_get_dynamic_allocate_ratio_max(data)      ((0x1F000000&(data))>>24)
#define  H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_get_dynamic_allocate_ratio_min(data)      ((0x001F0000&(data))>>16)
#define  H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_get_dynamic_allocate_line(data)           ((0x00000700&(data))>>8)
#define  H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_get_dynamic_allocate_more(data)           ((0x000000F0&(data))>>4)
#define  H3DDMA_H3DDMA_PQ_CMP_ALLOCATE_get_dynamic_allocate_less(data)           (0x0000000F&(data))

#define  H3DDMA_H3DDMA_PQ_CMP_POOR                                              0x18025878
#define  H3DDMA_H3DDMA_PQ_CMP_POOR_reg_addr                                      "0xB8025878"
#define  H3DDMA_H3DDMA_PQ_CMP_POOR_reg                                           0xB8025878
#define  H3DDMA_H3DDMA_PQ_CMP_POOR_inst_addr                                     "0x001A"
#define  set_H3DDMA_H3DDMA_PQ_CMP_POOR_reg(data)                                 (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_POOR_reg)=data)
#define  get_H3DDMA_H3DDMA_PQ_CMP_POOR_reg                                       (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_POOR_reg))
#define  H3DDMA_H3DDMA_PQ_CMP_POOR_poor_limit_th_qp4_shift                       (24)
#define  H3DDMA_H3DDMA_PQ_CMP_POOR_poor_limit_th_qp3_shift                       (16)
#define  H3DDMA_H3DDMA_PQ_CMP_POOR_poor_limit_th_qp2_shift                       (8)
#define  H3DDMA_H3DDMA_PQ_CMP_POOR_poor_limit_th_qp1_shift                       (0)
#define  H3DDMA_H3DDMA_PQ_CMP_POOR_poor_limit_th_qp4_mask                        (0x1F000000)
#define  H3DDMA_H3DDMA_PQ_CMP_POOR_poor_limit_th_qp3_mask                        (0x001F0000)
#define  H3DDMA_H3DDMA_PQ_CMP_POOR_poor_limit_th_qp2_mask                        (0x00001F00)
#define  H3DDMA_H3DDMA_PQ_CMP_POOR_poor_limit_th_qp1_mask                        (0x0000001F)
#define  H3DDMA_H3DDMA_PQ_CMP_POOR_poor_limit_th_qp4(data)                       (0x1F000000&((data)<<24))
#define  H3DDMA_H3DDMA_PQ_CMP_POOR_poor_limit_th_qp3(data)                       (0x001F0000&((data)<<16))
#define  H3DDMA_H3DDMA_PQ_CMP_POOR_poor_limit_th_qp2(data)                       (0x00001F00&((data)<<8))
#define  H3DDMA_H3DDMA_PQ_CMP_POOR_poor_limit_th_qp1(data)                       (0x0000001F&(data))
#define  H3DDMA_H3DDMA_PQ_CMP_POOR_get_poor_limit_th_qp4(data)                   ((0x1F000000&(data))>>24)
#define  H3DDMA_H3DDMA_PQ_CMP_POOR_get_poor_limit_th_qp3(data)                   ((0x001F0000&(data))>>16)
#define  H3DDMA_H3DDMA_PQ_CMP_POOR_get_poor_limit_th_qp2(data)                   ((0x00001F00&(data))>>8)
#define  H3DDMA_H3DDMA_PQ_CMP_POOR_get_poor_limit_th_qp1(data)                   (0x0000001F&(data))

#define  H3DDMA_H3DDMA_PQ_CMP_Guarantee                                         0x1802587C
#define  H3DDMA_H3DDMA_PQ_CMP_Guarantee_reg_addr                                 "0xB802587C"
#define  H3DDMA_H3DDMA_PQ_CMP_Guarantee_reg                                      0xB802587C
#define  H3DDMA_H3DDMA_PQ_CMP_Guarantee_inst_addr                                "0x001B"
#define  set_H3DDMA_H3DDMA_PQ_CMP_Guarantee_reg(data)                            (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_Guarantee_reg)=data)
#define  get_H3DDMA_H3DDMA_PQ_CMP_Guarantee_reg                                  (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_Guarantee_reg))
#define  H3DDMA_H3DDMA_PQ_CMP_Guarantee_cmp_crc_ro_line_sel_shift                (16)
#define  H3DDMA_H3DDMA_PQ_CMP_Guarantee_dic_mode_qp_th_rb_shift                  (12)
#define  H3DDMA_H3DDMA_PQ_CMP_Guarantee_dic_mode_qp_th_g_shift                   (8)
#define  H3DDMA_H3DDMA_PQ_CMP_Guarantee_guarantee_max_rb_qp_shift                (4)
#define  H3DDMA_H3DDMA_PQ_CMP_Guarantee_guarantee_max_g_qp_shift                 (0)
#define  H3DDMA_H3DDMA_PQ_CMP_Guarantee_cmp_crc_ro_line_sel_mask                 (0x3FFF0000)
#define  H3DDMA_H3DDMA_PQ_CMP_Guarantee_dic_mode_qp_th_rb_mask                   (0x0000F000)
#define  H3DDMA_H3DDMA_PQ_CMP_Guarantee_dic_mode_qp_th_g_mask                    (0x00000F00)
#define  H3DDMA_H3DDMA_PQ_CMP_Guarantee_guarantee_max_rb_qp_mask                 (0x000000F0)
#define  H3DDMA_H3DDMA_PQ_CMP_Guarantee_guarantee_max_g_qp_mask                  (0x0000000F)
#define  H3DDMA_H3DDMA_PQ_CMP_Guarantee_cmp_crc_ro_line_sel(data)                (0x3FFF0000&((data)<<16))
#define  H3DDMA_H3DDMA_PQ_CMP_Guarantee_dic_mode_qp_th_rb(data)                  (0x0000F000&((data)<<12))
#define  H3DDMA_H3DDMA_PQ_CMP_Guarantee_dic_mode_qp_th_g(data)                   (0x00000F00&((data)<<8))
#define  H3DDMA_H3DDMA_PQ_CMP_Guarantee_guarantee_max_rb_qp(data)                (0x000000F0&((data)<<4))
#define  H3DDMA_H3DDMA_PQ_CMP_Guarantee_guarantee_max_g_qp(data)                 (0x0000000F&(data))
#define  H3DDMA_H3DDMA_PQ_CMP_Guarantee_get_cmp_crc_ro_line_sel(data)            ((0x3FFF0000&(data))>>16)
#define  H3DDMA_H3DDMA_PQ_CMP_Guarantee_get_dic_mode_qp_th_rb(data)              ((0x0000F000&(data))>>12)
#define  H3DDMA_H3DDMA_PQ_CMP_Guarantee_get_dic_mode_qp_th_g(data)               ((0x00000F00&(data))>>8)
#define  H3DDMA_H3DDMA_PQ_CMP_Guarantee_get_guarantee_max_rb_qp(data)            ((0x000000F0&(data))>>4)
#define  H3DDMA_H3DDMA_PQ_CMP_Guarantee_get_guarantee_max_g_qp(data)             (0x0000000F&(data))

#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE                                           0x18025880
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_reg_addr                                   "0xB8025880"
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_reg                                        0xB8025880
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_inst_addr                                  "0x001C"
#define  set_H3DDMA_H3DDMA_PQ_CMP_BALANCE_reg(data)                              (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_BALANCE_reg)=data)
#define  get_H3DDMA_H3DDMA_PQ_CMP_BALANCE_reg                                    (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_BALANCE_reg))
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_variation_maxmin_th2_shift                 (24)
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_variation_maxmin_th_shift                  (16)
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_balance_rb_ov_th_shift                     (12)
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_balance_rb_ud_th_shift                     (10)
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_balance_rb_give_shift                      (8)
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_balance_g_ov_th_shift                      (4)
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_balance_g_ud_th_shift                      (2)
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_balance_g_give_shift                       (0)
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_variation_maxmin_th2_mask                  (0xFF000000)
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_variation_maxmin_th_mask                   (0x00FF0000)
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_balance_rb_ov_th_mask                      (0x00003000)
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_balance_rb_ud_th_mask                      (0x00000C00)
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_balance_rb_give_mask                       (0x00000300)
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_balance_g_ov_th_mask                       (0x00000030)
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_balance_g_ud_th_mask                       (0x0000000C)
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_balance_g_give_mask                        (0x00000003)
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_variation_maxmin_th2(data)                 (0xFF000000&((data)<<24))
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_variation_maxmin_th(data)                  (0x00FF0000&((data)<<16))
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_balance_rb_ov_th(data)                     (0x00003000&((data)<<12))
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_balance_rb_ud_th(data)                     (0x00000C00&((data)<<10))
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_balance_rb_give(data)                      (0x00000300&((data)<<8))
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_balance_g_ov_th(data)                      (0x00000030&((data)<<4))
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_balance_g_ud_th(data)                      (0x0000000C&((data)<<2))
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_balance_g_give(data)                       (0x00000003&(data))
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_get_variation_maxmin_th2(data)             ((0xFF000000&(data))>>24)
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_get_variation_maxmin_th(data)              ((0x00FF0000&(data))>>16)
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_get_balance_rb_ov_th(data)                 ((0x00003000&(data))>>12)
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_get_balance_rb_ud_th(data)                 ((0x00000C00&(data))>>10)
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_get_balance_rb_give(data)                  ((0x00000300&(data))>>8)
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_get_balance_g_ov_th(data)                  ((0x00000030&(data))>>4)
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_get_balance_g_ud_th(data)                  ((0x0000000C&(data))>>2)
#define  H3DDMA_H3DDMA_PQ_CMP_BALANCE_get_balance_g_give(data)                   (0x00000003&(data))

#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN                                            0x18025884
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_reg_addr                                    "0xB8025884"
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_reg                                         0xB8025884
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_inst_addr                                   "0x001D"
#define  set_H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_reg(data)                               (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_reg)=data)
#define  get_H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_reg                                     (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_reg))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_prs_over_line_sum_bit_irq_en_shift          (18)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_tail_fifo_overflow_irq_en_shift             (17)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_input_fifo_overflow_irq_en_shift            (16)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_block_fifo_overflow_irq_en_shift            (15)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_input_size_more_irq_en_shift                (14)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_input_size_less_irq_en_shift                (13)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_over_flb_irq_en_shift                       (12)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_request_fifo_even_overflow_irq_en_shift     (9)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_g_fifo_even_overflow_irq_en_shift           (6)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_r_fifo_even_overflow_irq_en_shift           (5)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_b_fifo_even_overflow_irq_en_shift           (4)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_prs_over_line_sum_bit_irq_en_mask           (0x00040000)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_tail_fifo_overflow_irq_en_mask              (0x00020000)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_input_fifo_overflow_irq_en_mask             (0x00010000)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_block_fifo_overflow_irq_en_mask             (0x00008000)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_input_size_more_irq_en_mask                 (0x00004000)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_input_size_less_irq_en_mask                 (0x00002000)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_over_flb_irq_en_mask                        (0x00001000)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_request_fifo_even_overflow_irq_en_mask      (0x00000200)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_g_fifo_even_overflow_irq_en_mask            (0x00000040)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_r_fifo_even_overflow_irq_en_mask            (0x00000020)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_b_fifo_even_overflow_irq_en_mask            (0x00000010)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_prs_over_line_sum_bit_irq_en(data)          (0x00040000&((data)<<18))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_tail_fifo_overflow_irq_en(data)             (0x00020000&((data)<<17))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_input_fifo_overflow_irq_en(data)            (0x00010000&((data)<<16))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_block_fifo_overflow_irq_en(data)            (0x00008000&((data)<<15))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_input_size_more_irq_en(data)                (0x00004000&((data)<<14))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_input_size_less_irq_en(data)                (0x00002000&((data)<<13))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_over_flb_irq_en(data)                       (0x00001000&((data)<<12))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_request_fifo_even_overflow_irq_en(data)     (0x00000200&((data)<<9))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_g_fifo_even_overflow_irq_en(data)           (0x00000040&((data)<<6))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_r_fifo_even_overflow_irq_en(data)           (0x00000020&((data)<<5))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_b_fifo_even_overflow_irq_en(data)           (0x00000010&((data)<<4))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_get_prs_over_line_sum_bit_irq_en(data)      ((0x00040000&(data))>>18)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_get_tail_fifo_overflow_irq_en(data)         ((0x00020000&(data))>>17)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_get_input_fifo_overflow_irq_en(data)        ((0x00010000&(data))>>16)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_get_block_fifo_overflow_irq_en(data)        ((0x00008000&(data))>>15)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_get_input_size_more_irq_en(data)            ((0x00004000&(data))>>14)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_get_input_size_less_irq_en(data)            ((0x00002000&(data))>>13)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_get_over_flb_irq_en(data)                   ((0x00001000&(data))>>12)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_get_request_fifo_even_overflow_irq_en(data) ((0x00000200&(data))>>9)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_get_g_fifo_even_overflow_irq_en(data)       ((0x00000040&(data))>>6)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_get_r_fifo_even_overflow_irq_en(data)       ((0x00000020&(data))>>5)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_EN_get_b_fifo_even_overflow_irq_en(data)       ((0x00000010&(data))>>4)

#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST                                            0x18025888
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_reg_addr                                    "0xB8025888"
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_reg                                         0xB8025888
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_inst_addr                                   "0x001E"
#define  set_H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_reg(data)                               (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_reg)=data)
#define  get_H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_reg                                     (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_reg))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_pqc_irq_shift                               (31)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_prs_over_line_sum_bit_st_shift              (18)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_tail_fifo_overflow_st_shift                 (17)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_input_fifo_overflow_st_shift                (16)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_block_fifo_overflow_st_shift                (15)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_input_size_more_st_shift                    (14)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_input_size_less_st_shift                    (13)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_over_flb_st_shift                           (12)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_request_fifo_even_overflow_st_shift         (9)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_g_fifo_even_overflow_st_shift               (6)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_r_fifo_even_overflow_st_shift               (5)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_b_fifo_even_overflow_st_shift               (4)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_pqc_irq_mask                                (0x80000000)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_prs_over_line_sum_bit_st_mask               (0x00040000)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_tail_fifo_overflow_st_mask                  (0x00020000)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_input_fifo_overflow_st_mask                 (0x00010000)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_block_fifo_overflow_st_mask                 (0x00008000)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_input_size_more_st_mask                     (0x00004000)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_input_size_less_st_mask                     (0x00002000)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_over_flb_st_mask                            (0x00001000)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_request_fifo_even_overflow_st_mask          (0x00000200)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_g_fifo_even_overflow_st_mask                (0x00000040)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_r_fifo_even_overflow_st_mask                (0x00000020)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_b_fifo_even_overflow_st_mask                (0x00000010)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_pqc_irq(data)                               (0x80000000&((data)<<31))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_prs_over_line_sum_bit_st(data)              (0x00040000&((data)<<18))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_tail_fifo_overflow_st(data)                 (0x00020000&((data)<<17))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_input_fifo_overflow_st(data)                (0x00010000&((data)<<16))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_block_fifo_overflow_st(data)                (0x00008000&((data)<<15))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_input_size_more_st(data)                    (0x00004000&((data)<<14))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_input_size_less_st(data)                    (0x00002000&((data)<<13))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_over_flb_st(data)                           (0x00001000&((data)<<12))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_request_fifo_even_overflow_st(data)         (0x00000200&((data)<<9))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_g_fifo_even_overflow_st(data)               (0x00000040&((data)<<6))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_r_fifo_even_overflow_st(data)               (0x00000020&((data)<<5))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_b_fifo_even_overflow_st(data)               (0x00000010&((data)<<4))
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_get_pqc_irq(data)                           ((0x80000000&(data))>>31)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_get_prs_over_line_sum_bit_st(data)          ((0x00040000&(data))>>18)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_get_tail_fifo_overflow_st(data)             ((0x00020000&(data))>>17)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_get_input_fifo_overflow_st(data)            ((0x00010000&(data))>>16)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_get_block_fifo_overflow_st(data)            ((0x00008000&(data))>>15)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_get_input_size_more_st(data)                ((0x00004000&(data))>>14)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_get_input_size_less_st(data)                ((0x00002000&(data))>>13)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_get_over_flb_st(data)                       ((0x00001000&(data))>>12)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_get_request_fifo_even_overflow_st(data)     ((0x00000200&(data))>>9)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_get_g_fifo_even_overflow_st(data)           ((0x00000040&(data))>>6)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_get_r_fifo_even_overflow_st(data)           ((0x00000020&(data))>>5)
#define  H3DDMA_H3DDMA_PQ_CMP_IRQ_ST_get_b_fifo_even_overflow_st(data)           ((0x00000010&(data))>>4)

#define  H3DDMA_H3DDMA_PQ_CMP_ST                                                0x1802588C
#define  H3DDMA_H3DDMA_PQ_CMP_ST_reg_addr                                        "0xB802588C"
#define  H3DDMA_H3DDMA_PQ_CMP_ST_reg                                             0xB802588C
#define  H3DDMA_H3DDMA_PQ_CMP_ST_inst_addr                                       "0x001F"
#define  set_H3DDMA_H3DDMA_PQ_CMP_ST_reg(data)                                   (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_ST_reg)=data)
#define  get_H3DDMA_H3DDMA_PQ_CMP_ST_reg                                         (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_ST_reg))
#define  H3DDMA_H3DDMA_PQ_CMP_ST_g_ratio_max_shift                               (24)
#define  H3DDMA_H3DDMA_PQ_CMP_ST_g_ratio_min_shift                               (16)
#define  H3DDMA_H3DDMA_PQ_CMP_ST_cmp_package_height_cnt_shift                    (0)
#define  H3DDMA_H3DDMA_PQ_CMP_ST_g_ratio_max_mask                                (0x1F000000)
#define  H3DDMA_H3DDMA_PQ_CMP_ST_g_ratio_min_mask                                (0x001F0000)
#define  H3DDMA_H3DDMA_PQ_CMP_ST_cmp_package_height_cnt_mask                     (0x00003FFF)
#define  H3DDMA_H3DDMA_PQ_CMP_ST_g_ratio_max(data)                               (0x1F000000&((data)<<24))
#define  H3DDMA_H3DDMA_PQ_CMP_ST_g_ratio_min(data)                               (0x001F0000&((data)<<16))
#define  H3DDMA_H3DDMA_PQ_CMP_ST_cmp_package_height_cnt(data)                    (0x00003FFF&(data))
#define  H3DDMA_H3DDMA_PQ_CMP_ST_get_g_ratio_max(data)                           ((0x1F000000&(data))>>24)
#define  H3DDMA_H3DDMA_PQ_CMP_ST_get_g_ratio_min(data)                           ((0x001F0000&(data))>>16)
#define  H3DDMA_H3DDMA_PQ_CMP_ST_get_cmp_package_height_cnt(data)                (0x00003FFF&(data))

#define  H3DDMA_H3DDMA_PQ_CMP_QP_ST                                             0x18025890
#define  H3DDMA_H3DDMA_PQ_CMP_QP_ST_reg_addr                                     "0xB8025890"
#define  H3DDMA_H3DDMA_PQ_CMP_QP_ST_reg                                          0xB8025890
#define  H3DDMA_H3DDMA_PQ_CMP_QP_ST_inst_addr                                    "0x0020"
#define  set_H3DDMA_H3DDMA_PQ_CMP_QP_ST_reg(data)                                (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_QP_ST_reg)=data)
#define  get_H3DDMA_H3DDMA_PQ_CMP_QP_ST_reg                                      (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_QP_ST_reg))
#define  H3DDMA_H3DDMA_PQ_CMP_QP_ST_long_term_qp_measure_en_shift                (31)
#define  H3DDMA_H3DDMA_PQ_CMP_QP_ST_long_term_g_qp_max_shift                     (20)
#define  H3DDMA_H3DDMA_PQ_CMP_QP_ST_long_term_rb_qp_max_shift                    (16)
#define  H3DDMA_H3DDMA_PQ_CMP_QP_ST_short_term_g_qp_max_shift                    (4)
#define  H3DDMA_H3DDMA_PQ_CMP_QP_ST_short_term_rb_qp_max_shift                   (0)
#define  H3DDMA_H3DDMA_PQ_CMP_QP_ST_long_term_qp_measure_en_mask                 (0x80000000)
#define  H3DDMA_H3DDMA_PQ_CMP_QP_ST_long_term_g_qp_max_mask                      (0x00F00000)
#define  H3DDMA_H3DDMA_PQ_CMP_QP_ST_long_term_rb_qp_max_mask                     (0x000F0000)
#define  H3DDMA_H3DDMA_PQ_CMP_QP_ST_short_term_g_qp_max_mask                     (0x000000F0)
#define  H3DDMA_H3DDMA_PQ_CMP_QP_ST_short_term_rb_qp_max_mask                    (0x0000000F)
#define  H3DDMA_H3DDMA_PQ_CMP_QP_ST_long_term_qp_measure_en(data)                (0x80000000&((data)<<31))
#define  H3DDMA_H3DDMA_PQ_CMP_QP_ST_long_term_g_qp_max(data)                     (0x00F00000&((data)<<20))
#define  H3DDMA_H3DDMA_PQ_CMP_QP_ST_long_term_rb_qp_max(data)                    (0x000F0000&((data)<<16))
#define  H3DDMA_H3DDMA_PQ_CMP_QP_ST_short_term_g_qp_max(data)                    (0x000000F0&((data)<<4))
#define  H3DDMA_H3DDMA_PQ_CMP_QP_ST_short_term_rb_qp_max(data)                   (0x0000000F&(data))
#define  H3DDMA_H3DDMA_PQ_CMP_QP_ST_get_long_term_qp_measure_en(data)            ((0x80000000&(data))>>31)
#define  H3DDMA_H3DDMA_PQ_CMP_QP_ST_get_long_term_g_qp_max(data)                 ((0x00F00000&(data))>>20)
#define  H3DDMA_H3DDMA_PQ_CMP_QP_ST_get_long_term_rb_qp_max(data)                ((0x000F0000&(data))>>16)
#define  H3DDMA_H3DDMA_PQ_CMP_QP_ST_get_short_term_g_qp_max(data)                ((0x000000F0&(data))>>4)
#define  H3DDMA_H3DDMA_PQ_CMP_QP_ST_get_short_term_rb_qp_max(data)               (0x0000000F&(data))

#define  H3DDMA_H3DDMA_PQ_CMP_FIFO_ST1                                          0x18025894
#define  H3DDMA_H3DDMA_PQ_CMP_FIFO_ST1_reg_addr                                  "0xB8025894"
#define  H3DDMA_H3DDMA_PQ_CMP_FIFO_ST1_reg                                       0xB8025894
#define  H3DDMA_H3DDMA_PQ_CMP_FIFO_ST1_inst_addr                                 "0x0021"
#define  set_H3DDMA_H3DDMA_PQ_CMP_FIFO_ST1_reg(data)                             (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_FIFO_ST1_reg)=data)
#define  get_H3DDMA_H3DDMA_PQ_CMP_FIFO_ST1_reg                                   (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_FIFO_ST1_reg))
#define  H3DDMA_H3DDMA_PQ_CMP_FIFO_ST1_fifo_water_measure_en_shift               (31)
#define  H3DDMA_H3DDMA_PQ_CMP_FIFO_ST1_fifo_water_even_g_shift                   (16)
#define  H3DDMA_H3DDMA_PQ_CMP_FIFO_ST1_fifo_water_even_r_shift                   (8)
#define  H3DDMA_H3DDMA_PQ_CMP_FIFO_ST1_fifo_water_even_b_shift                   (0)
#define  H3DDMA_H3DDMA_PQ_CMP_FIFO_ST1_fifo_water_measure_en_mask                (0x80000000)
#define  H3DDMA_H3DDMA_PQ_CMP_FIFO_ST1_fifo_water_even_g_mask                    (0x00FF0000)
#define  H3DDMA_H3DDMA_PQ_CMP_FIFO_ST1_fifo_water_even_r_mask                    (0x0000FF00)
#define  H3DDMA_H3DDMA_PQ_CMP_FIFO_ST1_fifo_water_even_b_mask                    (0x000000FF)
#define  H3DDMA_H3DDMA_PQ_CMP_FIFO_ST1_fifo_water_measure_en(data)               (0x80000000&((data)<<31))
#define  H3DDMA_H3DDMA_PQ_CMP_FIFO_ST1_fifo_water_even_g(data)                   (0x00FF0000&((data)<<16))
#define  H3DDMA_H3DDMA_PQ_CMP_FIFO_ST1_fifo_water_even_r(data)                   (0x0000FF00&((data)<<8))
#define  H3DDMA_H3DDMA_PQ_CMP_FIFO_ST1_fifo_water_even_b(data)                   (0x000000FF&(data))
#define  H3DDMA_H3DDMA_PQ_CMP_FIFO_ST1_get_fifo_water_measure_en(data)           ((0x80000000&(data))>>31)
#define  H3DDMA_H3DDMA_PQ_CMP_FIFO_ST1_get_fifo_water_even_g(data)               ((0x00FF0000&(data))>>16)
#define  H3DDMA_H3DDMA_PQ_CMP_FIFO_ST1_get_fifo_water_even_r(data)               ((0x0000FF00&(data))>>8)
#define  H3DDMA_H3DDMA_PQ_CMP_FIFO_ST1_get_fifo_water_even_b(data)               (0x000000FF&(data))

#define  H3DDMA_H3DDMA_PQ_CMP_LEFT_ST                                           0x1802589C
#define  H3DDMA_H3DDMA_PQ_CMP_LEFT_ST_reg_addr                                   "0xB802589C"
#define  H3DDMA_H3DDMA_PQ_CMP_LEFT_ST_reg                                        0xB802589C
#define  H3DDMA_H3DDMA_PQ_CMP_LEFT_ST_inst_addr                                  "0x0022"
#define  set_H3DDMA_H3DDMA_PQ_CMP_LEFT_ST_reg(data)                              (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_LEFT_ST_reg)=data)
#define  get_H3DDMA_H3DDMA_PQ_CMP_LEFT_ST_reg                                    (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_LEFT_ST_reg))
#define  H3DDMA_H3DDMA_PQ_CMP_LEFT_ST_g_frame_left_shift                         (16)
#define  H3DDMA_H3DDMA_PQ_CMP_LEFT_ST_rb_frame_left_shift                        (0)
#define  H3DDMA_H3DDMA_PQ_CMP_LEFT_ST_g_frame_left_mask                          (0xFFFF0000)
#define  H3DDMA_H3DDMA_PQ_CMP_LEFT_ST_rb_frame_left_mask                         (0x0000FFFF)
#define  H3DDMA_H3DDMA_PQ_CMP_LEFT_ST_g_frame_left(data)                         (0xFFFF0000&((data)<<16))
#define  H3DDMA_H3DDMA_PQ_CMP_LEFT_ST_rb_frame_left(data)                        (0x0000FFFF&(data))
#define  H3DDMA_H3DDMA_PQ_CMP_LEFT_ST_get_g_frame_left(data)                     ((0xFFFF0000&(data))>>16)
#define  H3DDMA_H3DDMA_PQ_CMP_LEFT_ST_get_rb_frame_left(data)                    (0x0000FFFF&(data))

#define  H3DDMA_H3DDMA_PQ_CMP_PACKAGE_ST                                        0x180258A0
#define  H3DDMA_H3DDMA_PQ_CMP_PACKAGE_ST_reg_addr                                "0xB80258A0"
#define  H3DDMA_H3DDMA_PQ_CMP_PACKAGE_ST_reg                                     0xB80258A0
#define  H3DDMA_H3DDMA_PQ_CMP_PACKAGE_ST_inst_addr                               "0x0023"
#define  set_H3DDMA_H3DDMA_PQ_CMP_PACKAGE_ST_reg(data)                           (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_PACKAGE_ST_reg)=data)
#define  get_H3DDMA_H3DDMA_PQ_CMP_PACKAGE_ST_reg                                 (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_PACKAGE_ST_reg))
#define  H3DDMA_H3DDMA_PQ_CMP_PACKAGE_ST_total_package_long_term_shift           (31)
#define  H3DDMA_H3DDMA_PQ_CMP_PACKAGE_ST_total_package_even_shift                (0)
#define  H3DDMA_H3DDMA_PQ_CMP_PACKAGE_ST_total_package_long_term_mask            (0x80000000)
#define  H3DDMA_H3DDMA_PQ_CMP_PACKAGE_ST_total_package_even_mask                 (0x00FFFFFF)
#define  H3DDMA_H3DDMA_PQ_CMP_PACKAGE_ST_total_package_long_term(data)           (0x80000000&((data)<<31))
#define  H3DDMA_H3DDMA_PQ_CMP_PACKAGE_ST_total_package_even(data)                (0x00FFFFFF&(data))
#define  H3DDMA_H3DDMA_PQ_CMP_PACKAGE_ST_get_total_package_long_term(data)       ((0x80000000&(data))>>31)
#define  H3DDMA_H3DDMA_PQ_CMP_PACKAGE_ST_get_total_package_even(data)            (0x00FFFFFF&(data))

#define  H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_G                                        0x180258A4
#define  H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_G_reg_addr                                "0xB80258A4"
#define  H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_G_reg                                     0xB80258A4
#define  H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_G_inst_addr                               "0x0024"
#define  set_H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_G_reg(data)                           (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_G_reg)=data)
#define  get_H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_G_reg                                 (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_G_reg))
#define  H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_G_cmp_crc_even_g_shift                    (0)
#define  H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_G_cmp_crc_even_g_mask                     (0xFFFFFFFF)
#define  H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_G_cmp_crc_even_g(data)                    (0xFFFFFFFF&(data))
#define  H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_G_get_cmp_crc_even_g(data)                (0xFFFFFFFF&(data))

#define  H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_R                                        0x180258A8
#define  H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_R_reg_addr                                "0xB80258A8"
#define  H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_R_reg                                     0xB80258A8
#define  H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_R_inst_addr                               "0x0025"
#define  set_H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_R_reg(data)                           (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_R_reg)=data)
#define  get_H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_R_reg                                 (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_R_reg))
#define  H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_R_cmp_crc_even_r_shift                    (0)
#define  H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_R_cmp_crc_even_r_mask                     (0xFFFFFFFF)
#define  H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_R_cmp_crc_even_r(data)                    (0xFFFFFFFF&(data))
#define  H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_R_get_cmp_crc_even_r(data)                (0xFFFFFFFF&(data))

#define  H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_B                                        0x180258AC
#define  H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_B_reg_addr                                "0xB80258AC"
#define  H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_B_reg                                     0xB80258AC
#define  H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_B_inst_addr                               "0x0026"
#define  set_H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_B_reg(data)                           (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_B_reg)=data)
#define  get_H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_B_reg                                 (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_B_reg))
#define  H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_B_cmp_crc_even_b_shift                    (0)
#define  H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_B_cmp_crc_even_b_mask                     (0xFFFFFFFF)
#define  H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_B_cmp_crc_even_b(data)                    (0xFFFFFFFF&(data))
#define  H3DDMA_H3DDMA_PQ_CMP_CRC_EVEN_B_get_cmp_crc_even_b(data)                (0xFFFFFFFF&(data))

#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD0                                         0x180258B0
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD0_reg_addr                                 "0xB80258B0"
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD0_reg                                      0xB80258B0
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD0_inst_addr                                "0x0027"
#define  set_H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD0_reg(data)                            (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD0_reg)=data)
#define  get_H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD0_reg                                  (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD0_reg))
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD0_blk0_add_value0_shift                    (24)
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD0_dic_mode_tolerance_shift                 (16)
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD0_blk0_add_value32_shift                   (8)
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD0_blk0_add_value16_shift                   (0)
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD0_blk0_add_value0_mask                     (0x3F000000)
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD0_dic_mode_tolerance_mask                  (0x00FF0000)
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD0_blk0_add_value32_mask                    (0x00003F00)
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD0_blk0_add_value16_mask                    (0x0000003F)
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD0_blk0_add_value0(data)                    (0x3F000000&((data)<<24))
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD0_dic_mode_tolerance(data)                 (0x00FF0000&((data)<<16))
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD0_blk0_add_value32(data)                   (0x00003F00&((data)<<8))
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD0_blk0_add_value16(data)                   (0x0000003F&(data))
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD0_get_blk0_add_value0(data)                ((0x3F000000&(data))>>24)
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD0_get_dic_mode_tolerance(data)             ((0x00FF0000&(data))>>16)
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD0_get_blk0_add_value32(data)               ((0x00003F00&(data))>>8)
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD0_get_blk0_add_value16(data)               (0x0000003F&(data))

#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD1                                         0x180258B4
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD1_reg_addr                                 "0xB80258B4"
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD1_reg                                      0xB80258B4
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD1_inst_addr                                "0x0028"
#define  set_H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD1_reg(data)                            (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD1_reg)=data)
#define  get_H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD1_reg                                  (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD1_reg))
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD1_blk0_add_value8_shift                    (24)
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD1_blk0_add_value4_shift                    (16)
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD1_blk0_add_value2_shift                    (8)
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD1_blk0_add_value1_shift                    (0)
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD1_blk0_add_value8_mask                     (0x3F000000)
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD1_blk0_add_value4_mask                     (0x003F0000)
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD1_blk0_add_value2_mask                     (0x00003F00)
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD1_blk0_add_value1_mask                     (0x0000003F)
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD1_blk0_add_value8(data)                    (0x3F000000&((data)<<24))
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD1_blk0_add_value4(data)                    (0x003F0000&((data)<<16))
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD1_blk0_add_value2(data)                    (0x00003F00&((data)<<8))
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD1_blk0_add_value1(data)                    (0x0000003F&(data))
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD1_get_blk0_add_value8(data)                ((0x3F000000&(data))>>24)
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD1_get_blk0_add_value4(data)                ((0x003F0000&(data))>>16)
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD1_get_blk0_add_value2(data)                ((0x00003F00&(data))>>8)
#define  H3DDMA_H3DDMA_PQ_CMP_BLK0_ADD1_get_blk0_add_value1(data)                (0x0000003F&(data))

#define  H3DDMA_H3DDMA_PQ_CMP_DOUBLE_BUFFER_CTRL                                0x180258B8
#define  H3DDMA_H3DDMA_PQ_CMP_DOUBLE_BUFFER_CTRL_reg_addr                        "0xB80258B8"
#define  H3DDMA_H3DDMA_PQ_CMP_DOUBLE_BUFFER_CTRL_reg                             0xB80258B8
#define  H3DDMA_H3DDMA_PQ_CMP_DOUBLE_BUFFER_CTRL_inst_addr                       "0x0029"
#define  set_H3DDMA_H3DDMA_PQ_CMP_DOUBLE_BUFFER_CTRL_reg(data)                   (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_DOUBLE_BUFFER_CTRL_reg)=data)
#define  get_H3DDMA_H3DDMA_PQ_CMP_DOUBLE_BUFFER_CTRL_reg                         (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_DOUBLE_BUFFER_CTRL_reg))
#define  H3DDMA_H3DDMA_PQ_CMP_DOUBLE_BUFFER_CTRL_db_read_sel_shift               (2)
#define  H3DDMA_H3DDMA_PQ_CMP_DOUBLE_BUFFER_CTRL_db_apply_shift                  (1)
#define  H3DDMA_H3DDMA_PQ_CMP_DOUBLE_BUFFER_CTRL_db_en_shift                     (0)
#define  H3DDMA_H3DDMA_PQ_CMP_DOUBLE_BUFFER_CTRL_db_read_sel_mask                (0x00000004)
#define  H3DDMA_H3DDMA_PQ_CMP_DOUBLE_BUFFER_CTRL_db_apply_mask                   (0x00000002)
#define  H3DDMA_H3DDMA_PQ_CMP_DOUBLE_BUFFER_CTRL_db_en_mask                      (0x00000001)
#define  H3DDMA_H3DDMA_PQ_CMP_DOUBLE_BUFFER_CTRL_db_read_sel(data)               (0x00000004&((data)<<2))
#define  H3DDMA_H3DDMA_PQ_CMP_DOUBLE_BUFFER_CTRL_db_apply(data)                  (0x00000002&((data)<<1))
#define  H3DDMA_H3DDMA_PQ_CMP_DOUBLE_BUFFER_CTRL_db_en(data)                     (0x00000001&(data))
#define  H3DDMA_H3DDMA_PQ_CMP_DOUBLE_BUFFER_CTRL_get_db_read_sel(data)           ((0x00000004&(data))>>2)
#define  H3DDMA_H3DDMA_PQ_CMP_DOUBLE_BUFFER_CTRL_get_db_apply(data)              ((0x00000002&(data))>>1)
#define  H3DDMA_H3DDMA_PQ_CMP_DOUBLE_BUFFER_CTRL_get_db_en(data)                 (0x00000001&(data))

#define  H3DDMA_H3DDMA_PQ_CMP_DEN_EXTEND_RATE                                   0x180258BC
#define  H3DDMA_H3DDMA_PQ_CMP_DEN_EXTEND_RATE_reg_addr                           "0xB80258BC"
#define  H3DDMA_H3DDMA_PQ_CMP_DEN_EXTEND_RATE_reg                                0xB80258BC
#define  H3DDMA_H3DDMA_PQ_CMP_DEN_EXTEND_RATE_inst_addr                          "0x002A"
#define  set_H3DDMA_H3DDMA_PQ_CMP_DEN_EXTEND_RATE_reg(data)                      (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_DEN_EXTEND_RATE_reg)=data)
#define  get_H3DDMA_H3DDMA_PQ_CMP_DEN_EXTEND_RATE_reg                            (*((volatile unsigned int*)H3DDMA_H3DDMA_PQ_CMP_DEN_EXTEND_RATE_reg))
#define  H3DDMA_H3DDMA_PQ_CMP_DEN_EXTEND_RATE_pqc_den_extend_rate_shift          (0)
#define  H3DDMA_H3DDMA_PQ_CMP_DEN_EXTEND_RATE_pqc_den_extend_rate_mask           (0x0000000F)
#define  H3DDMA_H3DDMA_PQ_CMP_DEN_EXTEND_RATE_pqc_den_extend_rate(data)          (0x0000000F&(data))
#define  H3DDMA_H3DDMA_PQ_CMP_DEN_EXTEND_RATE_get_pqc_den_extend_rate(data)      (0x0000000F&(data))

#define  H3DDMA_CAP0_Cap_CTL0                                                   0x18025B00
#define  H3DDMA_CAP0_Cap_CTL0_reg_addr                                           "0xB8025B00"
#define  H3DDMA_CAP0_Cap_CTL0_reg                                                0xB8025B00
#define  H3DDMA_CAP0_Cap_CTL0_inst_addr                                          "0x002B"
#define  set_H3DDMA_CAP0_Cap_CTL0_reg(data)                                      (*((volatile unsigned int*)H3DDMA_CAP0_Cap_CTL0_reg)=data)
#define  get_H3DDMA_CAP0_Cap_CTL0_reg                                            (*((volatile unsigned int*)H3DDMA_CAP0_Cap_CTL0_reg))
#define  H3DDMA_CAP0_Cap_CTL0_cap0_triple_buf_en_shift                           (31)
#define  H3DDMA_CAP0_Cap_CTL0_cap0_cap_block_fw_shift                            (29)
#define  H3DDMA_CAP0_Cap_CTL0_cap0_set_block_sel_shift                           (28)
#define  H3DDMA_CAP0_Cap_CTL0_cap0_quad_buf_en_shift                             (27)
#define  H3DDMA_CAP0_Cap_CTL0_cap0_freeze_en_shift                               (24)
#define  H3DDMA_CAP0_Cap_CTL0_cap0_auto_block_sel_en_shift                       (22)
#define  H3DDMA_CAP0_Cap_CTL0_cap0_half_wr_en_shift                              (21)
#define  H3DDMA_CAP0_Cap_CTL0_cap0_half_wr_sel_shift                             (20)
#define  H3DDMA_CAP0_Cap_CTL0_cap0_frame_access_mode_shift                       (0)
#define  H3DDMA_CAP0_Cap_CTL0_cap0_triple_buf_en_mask                            (0x80000000)
#define  H3DDMA_CAP0_Cap_CTL0_cap0_cap_block_fw_mask                             (0x60000000)
#define  H3DDMA_CAP0_Cap_CTL0_cap0_set_block_sel_mask                            (0x10000000)
#define  H3DDMA_CAP0_Cap_CTL0_cap0_quad_buf_en_mask                              (0x08000000)
#define  H3DDMA_CAP0_Cap_CTL0_cap0_freeze_en_mask                                (0x01000000)
#define  H3DDMA_CAP0_Cap_CTL0_cap0_auto_block_sel_en_mask                        (0x00400000)
#define  H3DDMA_CAP0_Cap_CTL0_cap0_half_wr_en_mask                               (0x00200000)
#define  H3DDMA_CAP0_Cap_CTL0_cap0_half_wr_sel_mask                              (0x00100000)
#define  H3DDMA_CAP0_Cap_CTL0_cap0_frame_access_mode_mask                        (0x00000001)
#define  H3DDMA_CAP0_Cap_CTL0_cap0_triple_buf_en(data)                           (0x80000000&((data)<<31))
#define  H3DDMA_CAP0_Cap_CTL0_cap0_cap_block_fw(data)                            (0x60000000&((data)<<29))
#define  H3DDMA_CAP0_Cap_CTL0_cap0_set_block_sel(data)                           (0x10000000&((data)<<28))
#define  H3DDMA_CAP0_Cap_CTL0_cap0_quad_buf_en(data)                             (0x08000000&((data)<<27))
#define  H3DDMA_CAP0_Cap_CTL0_cap0_freeze_en(data)                               (0x01000000&((data)<<24))
#define  H3DDMA_CAP0_Cap_CTL0_cap0_auto_block_sel_en(data)                       (0x00400000&((data)<<22))
#define  H3DDMA_CAP0_Cap_CTL0_cap0_half_wr_en(data)                              (0x00200000&((data)<<21))
#define  H3DDMA_CAP0_Cap_CTL0_cap0_half_wr_sel(data)                             (0x00100000&((data)<<20))
#define  H3DDMA_CAP0_Cap_CTL0_cap0_frame_access_mode(data)                       (0x00000001&(data))
#define  H3DDMA_CAP0_Cap_CTL0_get_cap0_triple_buf_en(data)                       ((0x80000000&(data))>>31)
#define  H3DDMA_CAP0_Cap_CTL0_get_cap0_cap_block_fw(data)                        ((0x60000000&(data))>>29)
#define  H3DDMA_CAP0_Cap_CTL0_get_cap0_set_block_sel(data)                       ((0x10000000&(data))>>28)
#define  H3DDMA_CAP0_Cap_CTL0_get_cap0_quad_buf_en(data)                         ((0x08000000&(data))>>27)
#define  H3DDMA_CAP0_Cap_CTL0_get_cap0_freeze_en(data)                           ((0x01000000&(data))>>24)
#define  H3DDMA_CAP0_Cap_CTL0_get_cap0_auto_block_sel_en(data)                   ((0x00400000&(data))>>22)
#define  H3DDMA_CAP0_Cap_CTL0_get_cap0_half_wr_en(data)                          ((0x00200000&(data))>>21)
#define  H3DDMA_CAP0_Cap_CTL0_get_cap0_half_wr_sel(data)                         ((0x00100000&(data))>>20)
#define  H3DDMA_CAP0_Cap_CTL0_get_cap0_frame_access_mode(data)                   (0x00000001&(data))

#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up                                   0x18025B04
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_reg_addr                           "0xB8025B04"
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_reg                                0xB8025B04
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_inst_addr                          "0x002C"
#define  set_H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_reg(data)                      (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_reg)=data)
#define  get_H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_reg                            (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_reg))
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_cap0_dma_up_limit_shift            (4)
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_cap0_dma_up_limit_mask             (0xFFFFFFF0)
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_cap0_dma_up_limit(data)            (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_get_cap0_dma_up_limit(data)        ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low                                  0x18025B08
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_reg_addr                          "0xB8025B08"
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_reg                               0xB8025B08
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_inst_addr                         "0x002D"
#define  set_H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_reg(data)                     (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_reg)=data)
#define  get_H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_reg                           (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_reg))
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_cap0_dma_low_limit_shift          (4)
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_cap0_dma_low_limit_mask           (0xFFFFFFF0)
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_cap0_dma_low_limit(data)          (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_get_cap0_dma_low_limit(data)      ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_1                                 0x180258D0
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_1_reg_addr                         "0xB80258D0"
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_1_reg                              0xB80258D0
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_1_inst_addr                        "0x002E"
#define  set_H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_1_reg(data)                    (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_1_reg)=data)
#define  get_H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_1_reg                          (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_1_reg))
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_1_cap0_dma_up_limit_1_shift        (4)
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_1_cap0_dma_up_limit_1_mask         (0xFFFFFFF0)
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_1_cap0_dma_up_limit_1(data)        (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_1_get_cap0_dma_up_limit_1(data)    ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_1                                0x180258D4
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_1_reg_addr                        "0xB80258D4"
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_1_reg                             0xB80258D4
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_1_inst_addr                       "0x002F"
#define  set_H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_1_reg(data)                   (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_1_reg)=data)
#define  get_H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_1_reg                         (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_1_reg))
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_1_cap0_dma_low_limit_1_shift      (4)
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_1_cap0_dma_low_limit_1_mask       (0xFFFFFFF0)
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_1_cap0_dma_low_limit_1(data)      (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_1_get_cap0_dma_low_limit_1(data)  ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_2                                 0x180258D8
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_2_reg_addr                         "0xB80258D8"
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_2_reg                              0xB80258D8
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_2_inst_addr                        "0x0030"
#define  set_H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_2_reg(data)                    (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_2_reg)=data)
#define  get_H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_2_reg                          (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_2_reg))
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_2_cap0_dma_up_limit_2_shift        (4)
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_2_cap0_dma_up_limit_2_mask         (0xFFFFFFF0)
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_2_cap0_dma_up_limit_2(data)        (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_2_get_cap0_dma_up_limit_2(data)    ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_2                                0x180258DC
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_2_reg_addr                        "0xB80258DC"
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_2_reg                             0xB80258DC
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_2_inst_addr                       "0x0031"
#define  set_H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_2_reg(data)                   (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_2_reg)=data)
#define  get_H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_2_reg                         (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_2_reg))
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_2_cap0_dma_low_limit_2_shift      (4)
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_2_cap0_dma_low_limit_2_mask       (0xFFFFFFF0)
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_2_cap0_dma_low_limit_2(data)      (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_2_get_cap0_dma_low_limit_2(data)  ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_3                                 0x180258E0
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_3_reg_addr                         "0xB80258E0"
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_3_reg                              0xB80258E0
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_3_inst_addr                        "0x0032"
#define  set_H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_3_reg(data)                    (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_3_reg)=data)
#define  get_H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_3_reg                          (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_3_reg))
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_3_cap0_dma_up_limit_3_shift        (4)
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_3_cap0_dma_up_limit_3_mask         (0xFFFFFFF0)
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_3_cap0_dma_up_limit_3(data)        (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_up_3_get_cap0_dma_up_limit_3(data)    ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_3                                0x180258E4
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_3_reg_addr                        "0xB80258E4"
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_3_reg                             0xB80258E4
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_3_inst_addr                       "0x0033"
#define  set_H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_3_reg(data)                   (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_3_reg)=data)
#define  get_H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_3_reg                         (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_3_reg))
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_3_cap0_dma_low_limit_3_shift      (4)
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_3_cap0_dma_low_limit_3_mask       (0xFFFFFFF0)
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_3_cap0_dma_low_limit_3(data)      (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP0_CTI_DMA_WR_Rule_check_low_3_get_cap0_dma_low_limit_3(data)  ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl                                            0x18025B0C
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_reg_addr                                    "0xB8025B0C"
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_reg                                         0xB8025B0C
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_inst_addr                                   "0x0034"
#define  set_H3DDMA_CAP0_CTI_DMA_WR_Ctrl_reg(data)                               (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_Ctrl_reg)=data)
#define  get_H3DDMA_CAP0_CTI_DMA_WR_Ctrl_reg                                     (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_Ctrl_reg))
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_cap0_dma_8byte_swap_shift                   (13)
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_cap0_dma_4byte_swap_shift                   (12)
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_cap0_dma_2byte_swap_shift                   (11)
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_cap0_dma_1byte_swap_shift                   (10)
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_cap0_max_outstanding_shift                  (8)
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_cap0_force_all_rst_shift                    (1)
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_cap0_dma_enable_shift                       (0)
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_cap0_dma_8byte_swap_mask                    (0x00002000)
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_cap0_dma_4byte_swap_mask                    (0x00001000)
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_cap0_dma_2byte_swap_mask                    (0x00000800)
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_cap0_dma_1byte_swap_mask                    (0x00000400)
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_cap0_max_outstanding_mask                   (0x00000300)
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_cap0_force_all_rst_mask                     (0x00000002)
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_cap0_dma_enable_mask                        (0x00000001)
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_cap0_dma_8byte_swap(data)                   (0x00002000&((data)<<13))
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_cap0_dma_4byte_swap(data)                   (0x00001000&((data)<<12))
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_cap0_dma_2byte_swap(data)                   (0x00000800&((data)<<11))
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_cap0_dma_1byte_swap(data)                   (0x00000400&((data)<<10))
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_cap0_max_outstanding(data)                  (0x00000300&((data)<<8))
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_cap0_force_all_rst(data)                    (0x00000002&((data)<<1))
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_cap0_dma_enable(data)                       (0x00000001&(data))
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_get_cap0_dma_8byte_swap(data)               ((0x00002000&(data))>>13)
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_get_cap0_dma_4byte_swap(data)               ((0x00001000&(data))>>12)
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_get_cap0_dma_2byte_swap(data)               ((0x00000800&(data))>>11)
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_get_cap0_dma_1byte_swap(data)               ((0x00000400&(data))>>10)
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_get_cap0_max_outstanding(data)              ((0x00000300&(data))>>8)
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_get_cap0_force_all_rst(data)                ((0x00000002&(data))>>1)
#define  H3DDMA_CAP0_CTI_DMA_WR_Ctrl_get_cap0_dma_enable(data)                   (0x00000001&(data))

#define  H3DDMA_CAP0_CTI_DMA_WR_status                                          0x18025B10
#define  H3DDMA_CAP0_CTI_DMA_WR_status_reg_addr                                  "0xB8025B10"
#define  H3DDMA_CAP0_CTI_DMA_WR_status_reg                                       0xB8025B10
#define  H3DDMA_CAP0_CTI_DMA_WR_status_inst_addr                                 "0x0035"
#define  set_H3DDMA_CAP0_CTI_DMA_WR_status_reg(data)                             (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_status_reg)=data)
#define  get_H3DDMA_CAP0_CTI_DMA_WR_status_reg                                   (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_status_reg))
#define  H3DDMA_CAP0_CTI_DMA_WR_status_cap0_dma_cmd_water_shift                  (28)
#define  H3DDMA_CAP0_CTI_DMA_WR_status_cap0_dma_data_water_shift                 (16)
#define  H3DDMA_CAP0_CTI_DMA_WR_status_cap0_cur_outstanding_shift                (8)
#define  H3DDMA_CAP0_CTI_DMA_WR_status_cap0_soft_rst_before_cmd_finish_shift     (4)
#define  H3DDMA_CAP0_CTI_DMA_WR_status_cap0_soft_rst_with_data_left_shift        (3)
#define  H3DDMA_CAP0_CTI_DMA_WR_status_cap0_data_fifo_underflow_err_shift        (2)
#define  H3DDMA_CAP0_CTI_DMA_WR_status_cap0_exceed_range_err_shift               (1)
#define  H3DDMA_CAP0_CTI_DMA_WR_status_cap0_zero_length_err_shift                (0)
#define  H3DDMA_CAP0_CTI_DMA_WR_status_cap0_dma_cmd_water_mask                   (0x70000000)
#define  H3DDMA_CAP0_CTI_DMA_WR_status_cap0_dma_data_water_mask                  (0x03FF0000)
#define  H3DDMA_CAP0_CTI_DMA_WR_status_cap0_cur_outstanding_mask                 (0x00000700)
#define  H3DDMA_CAP0_CTI_DMA_WR_status_cap0_soft_rst_before_cmd_finish_mask      (0x00000010)
#define  H3DDMA_CAP0_CTI_DMA_WR_status_cap0_soft_rst_with_data_left_mask         (0x00000008)
#define  H3DDMA_CAP0_CTI_DMA_WR_status_cap0_data_fifo_underflow_err_mask         (0x00000004)
#define  H3DDMA_CAP0_CTI_DMA_WR_status_cap0_exceed_range_err_mask                (0x00000002)
#define  H3DDMA_CAP0_CTI_DMA_WR_status_cap0_zero_length_err_mask                 (0x00000001)
#define  H3DDMA_CAP0_CTI_DMA_WR_status_cap0_dma_cmd_water(data)                  (0x70000000&((data)<<28))
#define  H3DDMA_CAP0_CTI_DMA_WR_status_cap0_dma_data_water(data)                 (0x03FF0000&((data)<<16))
#define  H3DDMA_CAP0_CTI_DMA_WR_status_cap0_cur_outstanding(data)                (0x00000700&((data)<<8))
#define  H3DDMA_CAP0_CTI_DMA_WR_status_cap0_soft_rst_before_cmd_finish(data)     (0x00000010&((data)<<4))
#define  H3DDMA_CAP0_CTI_DMA_WR_status_cap0_soft_rst_with_data_left(data)        (0x00000008&((data)<<3))
#define  H3DDMA_CAP0_CTI_DMA_WR_status_cap0_data_fifo_underflow_err(data)        (0x00000004&((data)<<2))
#define  H3DDMA_CAP0_CTI_DMA_WR_status_cap0_exceed_range_err(data)               (0x00000002&((data)<<1))
#define  H3DDMA_CAP0_CTI_DMA_WR_status_cap0_zero_length_err(data)                (0x00000001&(data))
#define  H3DDMA_CAP0_CTI_DMA_WR_status_get_cap0_dma_cmd_water(data)              ((0x70000000&(data))>>28)
#define  H3DDMA_CAP0_CTI_DMA_WR_status_get_cap0_dma_data_water(data)             ((0x03FF0000&(data))>>16)
#define  H3DDMA_CAP0_CTI_DMA_WR_status_get_cap0_cur_outstanding(data)            ((0x00000700&(data))>>8)
#define  H3DDMA_CAP0_CTI_DMA_WR_status_get_cap0_soft_rst_before_cmd_finish(data) ((0x00000010&(data))>>4)
#define  H3DDMA_CAP0_CTI_DMA_WR_status_get_cap0_soft_rst_with_data_left(data)    ((0x00000008&(data))>>3)
#define  H3DDMA_CAP0_CTI_DMA_WR_status_get_cap0_data_fifo_underflow_err(data)    ((0x00000004&(data))>>2)
#define  H3DDMA_CAP0_CTI_DMA_WR_status_get_cap0_exceed_range_err(data)           ((0x00000002&(data))>>1)
#define  H3DDMA_CAP0_CTI_DMA_WR_status_get_cap0_zero_length_err(data)            (0x00000001&(data))

#define  H3DDMA_CAP0_CTI_DMA_WR_status1                                         0x18025B14
#define  H3DDMA_CAP0_CTI_DMA_WR_status1_reg_addr                                 "0xB8025B14"
#define  H3DDMA_CAP0_CTI_DMA_WR_status1_reg                                      0xB8025B14
#define  H3DDMA_CAP0_CTI_DMA_WR_status1_inst_addr                                "0x0036"
#define  set_H3DDMA_CAP0_CTI_DMA_WR_status1_reg(data)                            (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_status1_reg)=data)
#define  get_H3DDMA_CAP0_CTI_DMA_WR_status1_reg                                  (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_status1_reg))
#define  H3DDMA_CAP0_CTI_DMA_WR_status1_cap0_ack_num_error_shift                 (31)
#define  H3DDMA_CAP0_CTI_DMA_WR_status1_cap0_last_no_ack_error_shift             (30)
#define  H3DDMA_CAP0_CTI_DMA_WR_status1_cap0_target_ack_num_shift                (16)
#define  H3DDMA_CAP0_CTI_DMA_WR_status1_cap0_last_ack_num_shift                  (8)
#define  H3DDMA_CAP0_CTI_DMA_WR_status1_cap0_selected_bl_shift                   (0)
#define  H3DDMA_CAP0_CTI_DMA_WR_status1_cap0_ack_num_error_mask                  (0x80000000)
#define  H3DDMA_CAP0_CTI_DMA_WR_status1_cap0_last_no_ack_error_mask              (0x40000000)
#define  H3DDMA_CAP0_CTI_DMA_WR_status1_cap0_target_ack_num_mask                 (0x007F0000)
#define  H3DDMA_CAP0_CTI_DMA_WR_status1_cap0_last_ack_num_mask                   (0x00007F00)
#define  H3DDMA_CAP0_CTI_DMA_WR_status1_cap0_selected_bl_mask                    (0x0000003F)
#define  H3DDMA_CAP0_CTI_DMA_WR_status1_cap0_ack_num_error(data)                 (0x80000000&((data)<<31))
#define  H3DDMA_CAP0_CTI_DMA_WR_status1_cap0_last_no_ack_error(data)             (0x40000000&((data)<<30))
#define  H3DDMA_CAP0_CTI_DMA_WR_status1_cap0_target_ack_num(data)                (0x007F0000&((data)<<16))
#define  H3DDMA_CAP0_CTI_DMA_WR_status1_cap0_last_ack_num(data)                  (0x00007F00&((data)<<8))
#define  H3DDMA_CAP0_CTI_DMA_WR_status1_cap0_selected_bl(data)                   (0x0000003F&(data))
#define  H3DDMA_CAP0_CTI_DMA_WR_status1_get_cap0_ack_num_error(data)             ((0x80000000&(data))>>31)
#define  H3DDMA_CAP0_CTI_DMA_WR_status1_get_cap0_last_no_ack_error(data)         ((0x40000000&(data))>>30)
#define  H3DDMA_CAP0_CTI_DMA_WR_status1_get_cap0_target_ack_num(data)            ((0x007F0000&(data))>>16)
#define  H3DDMA_CAP0_CTI_DMA_WR_status1_get_cap0_last_ack_num(data)              ((0x00007F00&(data))>>8)
#define  H3DDMA_CAP0_CTI_DMA_WR_status1_get_cap0_selected_bl(data)               (0x0000003F&(data))

#define  H3DDMA_CAP0_CTI_DMA_WR_status2                                         0x18025B18
#define  H3DDMA_CAP0_CTI_DMA_WR_status2_reg_addr                                 "0xB8025B18"
#define  H3DDMA_CAP0_CTI_DMA_WR_status2_reg                                      0xB8025B18
#define  H3DDMA_CAP0_CTI_DMA_WR_status2_inst_addr                                "0x0037"
#define  set_H3DDMA_CAP0_CTI_DMA_WR_status2_reg(data)                            (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_status2_reg)=data)
#define  get_H3DDMA_CAP0_CTI_DMA_WR_status2_reg                                  (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_status2_reg))
#define  H3DDMA_CAP0_CTI_DMA_WR_status2_cap0_selected_addr_shift                 (5)
#define  H3DDMA_CAP0_CTI_DMA_WR_status2_cap0_addr_bl_sel_shift                   (0)
#define  H3DDMA_CAP0_CTI_DMA_WR_status2_cap0_selected_addr_mask                  (0xFFFFFFE0)
#define  H3DDMA_CAP0_CTI_DMA_WR_status2_cap0_addr_bl_sel_mask                    (0x00000003)
#define  H3DDMA_CAP0_CTI_DMA_WR_status2_cap0_selected_addr(data)                 (0xFFFFFFE0&((data)<<5))
#define  H3DDMA_CAP0_CTI_DMA_WR_status2_cap0_addr_bl_sel(data)                   (0x00000003&(data))
#define  H3DDMA_CAP0_CTI_DMA_WR_status2_get_cap0_selected_addr(data)             ((0xFFFFFFE0&(data))>>5)
#define  H3DDMA_CAP0_CTI_DMA_WR_status2_get_cap0_addr_bl_sel(data)               (0x00000003&(data))

#define  H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor                                   0x18025B1C
#define  H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_reg_addr                           "0xB8025B1C"
#define  H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_reg                                0xB8025B1C
#define  H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_inst_addr                          "0x0038"
#define  set_H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_reg(data)                      (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_reg)=data)
#define  get_H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_reg                            (*((volatile unsigned int*)H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_reg))
#define  H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_cap0_monitor_en_shift              (31)
#define  H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_cap0_monitor_conti_shift           (30)
#define  H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_cap0_reach_thd_shift               (24)
#define  H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_cap0_monitor_thd_shift             (14)
#define  H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_cap0_highest_water_level_shift     (0)
#define  H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_cap0_monitor_en_mask               (0x80000000)
#define  H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_cap0_monitor_conti_mask            (0x40000000)
#define  H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_cap0_reach_thd_mask                (0x01000000)
#define  H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_cap0_monitor_thd_mask              (0x00FFC000)
#define  H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_cap0_highest_water_level_mask      (0x000003FF)
#define  H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_cap0_monitor_en(data)              (0x80000000&((data)<<31))
#define  H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_cap0_monitor_conti(data)           (0x40000000&((data)<<30))
#define  H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_cap0_reach_thd(data)               (0x01000000&((data)<<24))
#define  H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_cap0_monitor_thd(data)             (0x00FFC000&((data)<<14))
#define  H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_cap0_highest_water_level(data)     (0x000003FF&(data))
#define  H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_get_cap0_monitor_en(data)          ((0x80000000&(data))>>31)
#define  H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_get_cap0_monitor_conti(data)       ((0x40000000&(data))>>30)
#define  H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_get_cap0_reach_thd(data)           ((0x01000000&(data))>>24)
#define  H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_get_cap0_monitor_thd(data)         ((0x00FFC000&(data))>>14)
#define  H3DDMA_CAP0_CTI_DMA_WR_Water_Monitor_get_cap0_highest_water_level(data) (0x000003FF&(data))

#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_0                                  0x18025B20
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_0_reg_addr                          "0xB8025B20"
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_0_reg                               0xB8025B20
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_0_inst_addr                         "0x0039"
#define  set_H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_0_reg(data)                     (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_0_reg)=data)
#define  get_H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_0_reg                           (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_0_reg))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_0_cap0_sta_addr_0_shift             (4)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_0_cap0_sta_addr_0_mask              (0xFFFFFFF0)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_0_cap0_sta_addr_0(data)             (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_0_get_cap0_sta_addr_0(data)         ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_1                                  0x18025B24
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_1_reg_addr                          "0xB8025B24"
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_1_reg                               0xB8025B24
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_1_inst_addr                         "0x003A"
#define  set_H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_1_reg(data)                     (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_1_reg)=data)
#define  get_H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_1_reg                           (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_1_reg))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_1_cap0_sta_addr_1_shift             (4)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_1_cap0_sta_addr_1_mask              (0xFFFFFFF0)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_1_cap0_sta_addr_1(data)             (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_1_get_cap0_sta_addr_1(data)         ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_2                                  0x18025B28
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_2_reg_addr                          "0xB8025B28"
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_2_reg                               0xB8025B28
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_2_inst_addr                         "0x003B"
#define  set_H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_2_reg(data)                     (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_2_reg)=data)
#define  get_H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_2_reg                           (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_2_reg))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_2_cap0_sta_addr_2_shift             (4)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_2_cap0_sta_addr_2_mask              (0xFFFFFFF0)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_2_cap0_sta_addr_2(data)             (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_2_get_cap0_sta_addr_2(data)         ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_3                                  0x18025B2C
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_3_reg_addr                          "0xB8025B2C"
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_3_reg                               0xB8025B2C
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_3_inst_addr                         "0x003C"
#define  set_H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_3_reg(data)                     (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_3_reg)=data)
#define  get_H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_3_reg                           (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_3_reg))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_3_cap0_sta_addr_3_shift             (4)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_3_cap0_sta_addr_3_mask              (0xFFFFFFF0)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_3_cap0_sta_addr_3(data)             (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_3_get_cap0_sta_addr_3(data)         ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r0                                 0x18025B30
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r0_reg_addr                         "0xB8025B30"
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r0_reg                              0xB8025B30
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r0_inst_addr                        "0x003D"
#define  set_H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r0_reg(data)                    (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r0_reg)=data)
#define  get_H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r0_reg                          (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r0_reg))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r0_cap0_sta_addr_r0_shift           (4)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r0_cap0_sta_addr_r0_mask            (0xFFFFFFF0)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r0_cap0_sta_addr_r0(data)           (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r0_get_cap0_sta_addr_r0(data)       ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r1                                 0x18025B34
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r1_reg_addr                         "0xB8025B34"
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r1_reg                              0xB8025B34
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r1_inst_addr                        "0x003E"
#define  set_H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r1_reg(data)                    (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r1_reg)=data)
#define  get_H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r1_reg                          (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r1_reg))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r1_cap0_sta_addr_r1_shift           (4)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r1_cap0_sta_addr_r1_mask            (0xFFFFFFF0)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r1_cap0_sta_addr_r1(data)           (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r1_get_cap0_sta_addr_r1(data)       ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r2                                 0x18025B38
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r2_reg_addr                         "0xB8025B38"
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r2_reg                              0xB8025B38
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r2_inst_addr                        "0x003F"
#define  set_H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r2_reg(data)                    (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r2_reg)=data)
#define  get_H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r2_reg                          (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r2_reg))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r2_cap0_sta_addr_r2_shift           (4)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r2_cap0_sta_addr_r2_mask            (0xFFFFFFF0)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r2_cap0_sta_addr_r2(data)           (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r2_get_cap0_sta_addr_r2(data)       ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r3                                 0x18025B3C
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r3_reg_addr                         "0xB8025B3C"
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r3_reg                              0xB8025B3C
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r3_inst_addr                        "0x0040"
#define  set_H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r3_reg(data)                    (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r3_reg)=data)
#define  get_H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r3_reg                          (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r3_reg))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r3_cap0_sta_addr_r3_shift           (4)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r3_cap0_sta_addr_r3_mask            (0xFFFFFFF0)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r3_cap0_sta_addr_r3(data)           (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_addr_r3_get_cap0_sta_addr_r3(data)       ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_line_step                               0x18025B40
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_line_step_reg_addr                       "0xB8025B40"
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_line_step_reg                            0xB8025B40
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_line_step_inst_addr                      "0x0041"
#define  set_H3DDMA_CAP0_WR_DMA_num_bl_wrap_line_step_reg(data)                  (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_line_step_reg)=data)
#define  get_H3DDMA_CAP0_WR_DMA_num_bl_wrap_line_step_reg                        (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_line_step_reg))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_line_step_cap0_line_step_shift           (4)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_line_step_cap0_line_step_mask            (0xFFFFFFF0)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_line_step_cap0_line_step(data)           (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_line_step_get_cap0_line_step(data)       ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_ctl                                     0x18025B44
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_ctl_reg_addr                             "0xB8025B44"
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_ctl_reg                                  0xB8025B44
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_ctl_inst_addr                            "0x0042"
#define  set_H3DDMA_CAP0_WR_DMA_num_bl_wrap_ctl_reg(data)                        (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_ctl_reg)=data)
#define  get_H3DDMA_CAP0_WR_DMA_num_bl_wrap_ctl_reg                              (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_ctl_reg))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_ctl_cap0_line_num_shift                  (16)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_ctl_cap0_burst_len_shift                 (4)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_ctl_cap0_line_num_mask                   (0x0FFF0000)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_ctl_cap0_burst_len_mask                  (0x000007F0)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_ctl_cap0_line_num(data)                  (0x0FFF0000&((data)<<16))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_ctl_cap0_burst_len(data)                 (0x000007F0&((data)<<4))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_ctl_get_cap0_line_num(data)              ((0x0FFF0000&(data))>>16)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_ctl_get_cap0_burst_len(data)             ((0x000007F0&(data))>>4)

#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_rolling                                 0x18025B48
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_rolling_reg_addr                         "0xB8025B48"
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_rolling_reg                              0xB8025B48
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_rolling_inst_addr                        "0x0043"
#define  set_H3DDMA_CAP0_WR_DMA_num_bl_wrap_rolling_reg(data)                    (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_rolling_reg)=data)
#define  get_H3DDMA_CAP0_WR_DMA_num_bl_wrap_rolling_reg                          (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_rolling_reg))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_rolling_cap0_rolling_enable_shift        (31)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_rolling_cap0_rolling_space_shift         (16)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_rolling_cap0_rolling_num_shift           (0)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_rolling_cap0_rolling_enable_mask         (0x80000000)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_rolling_cap0_rolling_space_mask          (0x0FFF0000)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_rolling_cap0_rolling_num_mask            (0x00000FFF)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_rolling_cap0_rolling_enable(data)        (0x80000000&((data)<<31))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_rolling_cap0_rolling_space(data)         (0x0FFF0000&((data)<<16))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_rolling_cap0_rolling_num(data)           (0x00000FFF&(data))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_rolling_get_cap0_rolling_enable(data)    ((0x80000000&(data))>>31)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_rolling_get_cap0_rolling_space(data)     ((0x0FFF0000&(data))>>16)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_rolling_get_cap0_rolling_num(data)       (0x00000FFF&(data))

#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_word                                    0x18025B4C
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_word_reg_addr                            "0xB8025B4C"
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_word_reg                                 0xB8025B4C
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_word_inst_addr                           "0x0044"
#define  set_H3DDMA_CAP0_WR_DMA_num_bl_wrap_word_reg(data)                       (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_word_reg)=data)
#define  get_H3DDMA_CAP0_WR_DMA_num_bl_wrap_word_reg                             (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_word_reg))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_word_cap0_addr_toggle_mode_shift         (28)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_word_cap0_line_burst_num_shift           (0)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_word_cap0_addr_toggle_mode_mask          (0x30000000)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_word_cap0_line_burst_num_mask            (0x007FFFFF)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_word_cap0_addr_toggle_mode(data)         (0x30000000&((data)<<28))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_word_cap0_line_burst_num(data)           (0x007FFFFF&(data))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_word_get_cap0_addr_toggle_mode(data)     ((0x30000000&(data))>>28)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_word_get_cap0_line_burst_num(data)       (0x007FFFFF&(data))

#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st1                                     0x18025B50
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st1_reg_addr                             "0xB8025B50"
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st1_reg                                  0xB8025B50
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st1_inst_addr                            "0x0045"
#define  set_H3DDMA_CAP0_WR_DMA_num_bl_wrap_st1_reg(data)                        (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_st1_reg)=data)
#define  get_H3DDMA_CAP0_WR_DMA_num_bl_wrap_st1_reg                              (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_st1_reg))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st1_cap0_remain_setting_shift            (31)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st1_cap0_finish_status_shift             (28)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st1_cap0_remain_burst_num_shift          (0)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st1_cap0_remain_setting_mask             (0x80000000)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st1_cap0_finish_status_mask              (0x30000000)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st1_cap0_remain_burst_num_mask           (0x007FFFFF)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st1_cap0_remain_setting(data)            (0x80000000&((data)<<31))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st1_cap0_finish_status(data)             (0x30000000&((data)<<28))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st1_cap0_remain_burst_num(data)          (0x007FFFFF&(data))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st1_get_cap0_remain_setting(data)        ((0x80000000&(data))>>31)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st1_get_cap0_finish_status(data)         ((0x30000000&(data))>>28)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st1_get_cap0_remain_burst_num(data)      (0x007FFFFF&(data))

#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st2                                     0x18025B54
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st2_reg_addr                             "0xB8025B54"
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st2_reg                                  0xB8025B54
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st2_inst_addr                            "0x0046"
#define  set_H3DDMA_CAP0_WR_DMA_num_bl_wrap_st2_reg(data)                        (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_st2_reg)=data)
#define  get_H3DDMA_CAP0_WR_DMA_num_bl_wrap_st2_reg                              (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_num_bl_wrap_st2_reg))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st2_cap0_soft_rst_before_finish_shift    (31)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st2_cap0_remain_line_num_shift           (16)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st2_cap0_soft_rst_before_finish_mask     (0x80000000)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st2_cap0_remain_line_num_mask            (0x0FFF0000)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st2_cap0_soft_rst_before_finish(data)    (0x80000000&((data)<<31))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st2_cap0_remain_line_num(data)           (0x0FFF0000&((data)<<16))
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st2_get_cap0_soft_rst_before_finish(data) ((0x80000000&(data))>>31)
#define  H3DDMA_CAP0_WR_DMA_num_bl_wrap_st2_get_cap0_remain_line_num(data)       ((0x0FFF0000&(data))>>16)

#define  H3DDMA_CAP0_WR_DMA_pxltobus                                            0x18025B58
#define  H3DDMA_CAP0_WR_DMA_pxltobus_reg_addr                                    "0xB8025B58"
#define  H3DDMA_CAP0_WR_DMA_pxltobus_reg                                         0xB8025B58
#define  H3DDMA_CAP0_WR_DMA_pxltobus_inst_addr                                   "0x0047"
#define  set_H3DDMA_CAP0_WR_DMA_pxltobus_reg(data)                               (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_pxltobus_reg)=data)
#define  get_H3DDMA_CAP0_WR_DMA_pxltobus_reg                                     (*((volatile unsigned int*)H3DDMA_CAP0_WR_DMA_pxltobus_reg))
#define  H3DDMA_CAP0_WR_DMA_pxltobus_cap0_bit_sel_shift                          (2)
#define  H3DDMA_CAP0_WR_DMA_pxltobus_cap0_pixel_encoding_shift                   (0)
#define  H3DDMA_CAP0_WR_DMA_pxltobus_cap0_bit_sel_mask                           (0x0000000C)
#define  H3DDMA_CAP0_WR_DMA_pxltobus_cap0_pixel_encoding_mask                    (0x00000003)
#define  H3DDMA_CAP0_WR_DMA_pxltobus_cap0_bit_sel(data)                          (0x0000000C&((data)<<2))
#define  H3DDMA_CAP0_WR_DMA_pxltobus_cap0_pixel_encoding(data)                   (0x00000003&(data))
#define  H3DDMA_CAP0_WR_DMA_pxltobus_get_cap0_bit_sel(data)                      ((0x0000000C&(data))>>2)
#define  H3DDMA_CAP0_WR_DMA_pxltobus_get_cap0_pixel_encoding(data)               (0x00000003&(data))

#define  H3DDMA_CAP0_Cap_L_Start_db                                             0x18025B60
#define  H3DDMA_CAP0_Cap_L_Start_db_reg_addr                                     "0xB8025B60"
#define  H3DDMA_CAP0_Cap_L_Start_db_reg                                          0xB8025B60
#define  H3DDMA_CAP0_Cap_L_Start_db_inst_addr                                    "0x0048"
#define  set_H3DDMA_CAP0_Cap_L_Start_db_reg(data)                                (*((volatile unsigned int*)H3DDMA_CAP0_Cap_L_Start_db_reg)=data)
#define  get_H3DDMA_CAP0_Cap_L_Start_db_reg                                      (*((volatile unsigned int*)H3DDMA_CAP0_Cap_L_Start_db_reg))
#define  H3DDMA_CAP0_Cap_L_Start_db_cap0_sta_addr_db_shift                       (3)
#define  H3DDMA_CAP0_Cap_L_Start_db_cap0_sta_addr_db_mask                        (0xFFFFFFF8)
#define  H3DDMA_CAP0_Cap_L_Start_db_cap0_sta_addr_db(data)                       (0xFFFFFFF8&((data)<<3))
#define  H3DDMA_CAP0_Cap_L_Start_db_get_cap0_sta_addr_db(data)                   ((0xFFFFFFF8&(data))>>3)

#define  H3DDMA_CAP0_Cap_R_Start_db                                             0x18025B64
#define  H3DDMA_CAP0_Cap_R_Start_db_reg_addr                                     "0xB8025B64"
#define  H3DDMA_CAP0_Cap_R_Start_db_reg                                          0xB8025B64
#define  H3DDMA_CAP0_Cap_R_Start_db_inst_addr                                    "0x0049"
#define  set_H3DDMA_CAP0_Cap_R_Start_db_reg(data)                                (*((volatile unsigned int*)H3DDMA_CAP0_Cap_R_Start_db_reg)=data)
#define  get_H3DDMA_CAP0_Cap_R_Start_db_reg                                      (*((volatile unsigned int*)H3DDMA_CAP0_Cap_R_Start_db_reg))
#define  H3DDMA_CAP0_Cap_R_Start_db_cap0_sta_addr_r_db_shift                     (3)
#define  H3DDMA_CAP0_Cap_R_Start_db_cap0_sta_addr_r_db_mask                      (0xFFFFFFF8)
#define  H3DDMA_CAP0_Cap_R_Start_db_cap0_sta_addr_r_db(data)                     (0xFFFFFFF8&((data)<<3))
#define  H3DDMA_CAP0_Cap_R_Start_db_get_cap0_sta_addr_r_db(data)                 ((0xFFFFFFF8&(data))>>3)

#define  H3DDMA_CAP0_Cap_Status                                                 0x18025B68
#define  H3DDMA_CAP0_Cap_Status_reg_addr                                         "0xB8025B68"
#define  H3DDMA_CAP0_Cap_Status_reg                                              0xB8025B68
#define  H3DDMA_CAP0_Cap_Status_inst_addr                                        "0x004A"
#define  set_H3DDMA_CAP0_Cap_Status_reg(data)                                    (*((volatile unsigned int*)H3DDMA_CAP0_Cap_Status_reg)=data)
#define  get_H3DDMA_CAP0_Cap_Status_reg                                          (*((volatile unsigned int*)H3DDMA_CAP0_Cap_Status_reg))
#define  H3DDMA_CAP0_Cap_Status_cap0_freeze_ok_shift                             (8)
#define  H3DDMA_CAP0_Cap_Status_cap0_cap_block_sel_shift                         (4)
#define  H3DDMA_CAP0_Cap_Status_cap0_cap_last_wr_flag_shift                      (3)
#define  H3DDMA_CAP0_Cap_Status_cap0_cap_over_size_shift                         (2)
#define  H3DDMA_CAP0_Cap_Status_cap0_cap_under_size_shift                        (1)
#define  H3DDMA_CAP0_Cap_Status_cap0_cap_fifo_overflow_shift                     (0)
#define  H3DDMA_CAP0_Cap_Status_cap0_freeze_ok_mask                              (0x00000100)
#define  H3DDMA_CAP0_Cap_Status_cap0_cap_block_sel_mask                          (0x00000030)
#define  H3DDMA_CAP0_Cap_Status_cap0_cap_last_wr_flag_mask                       (0x00000008)
#define  H3DDMA_CAP0_Cap_Status_cap0_cap_over_size_mask                          (0x00000004)
#define  H3DDMA_CAP0_Cap_Status_cap0_cap_under_size_mask                         (0x00000002)
#define  H3DDMA_CAP0_Cap_Status_cap0_cap_fifo_overflow_mask                      (0x00000001)
#define  H3DDMA_CAP0_Cap_Status_cap0_freeze_ok(data)                             (0x00000100&((data)<<8))
#define  H3DDMA_CAP0_Cap_Status_cap0_cap_block_sel(data)                         (0x00000030&((data)<<4))
#define  H3DDMA_CAP0_Cap_Status_cap0_cap_last_wr_flag(data)                      (0x00000008&((data)<<3))
#define  H3DDMA_CAP0_Cap_Status_cap0_cap_over_size(data)                         (0x00000004&((data)<<2))
#define  H3DDMA_CAP0_Cap_Status_cap0_cap_under_size(data)                        (0x00000002&((data)<<1))
#define  H3DDMA_CAP0_Cap_Status_cap0_cap_fifo_overflow(data)                     (0x00000001&(data))
#define  H3DDMA_CAP0_Cap_Status_get_cap0_freeze_ok(data)                         ((0x00000100&(data))>>8)
#define  H3DDMA_CAP0_Cap_Status_get_cap0_cap_block_sel(data)                     ((0x00000030&(data))>>4)
#define  H3DDMA_CAP0_Cap_Status_get_cap0_cap_last_wr_flag(data)                  ((0x00000008&(data))>>3)
#define  H3DDMA_CAP0_Cap_Status_get_cap0_cap_over_size(data)                     ((0x00000004&(data))>>2)
#define  H3DDMA_CAP0_Cap_Status_get_cap0_cap_under_size(data)                    ((0x00000002&(data))>>1)
#define  H3DDMA_CAP0_Cap_Status_get_cap0_cap_fifo_overflow(data)                 (0x00000001&(data))

#define  H3DDMA_CAP1_Cap_CTL0                                                   0x18025B80
#define  H3DDMA_CAP1_Cap_CTL0_reg_addr                                           "0xB8025B80"
#define  H3DDMA_CAP1_Cap_CTL0_reg                                                0xB8025B80
#define  H3DDMA_CAP1_Cap_CTL0_inst_addr                                          "0x004B"
#define  set_H3DDMA_CAP1_Cap_CTL0_reg(data)                                      (*((volatile unsigned int*)H3DDMA_CAP1_Cap_CTL0_reg)=data)
#define  get_H3DDMA_CAP1_Cap_CTL0_reg                                            (*((volatile unsigned int*)H3DDMA_CAP1_Cap_CTL0_reg))
#define  H3DDMA_CAP1_Cap_CTL0_cap1_triple_buf_en_shift                           (31)
#define  H3DDMA_CAP1_Cap_CTL0_cap1_cap_block_fw_shift                            (29)
#define  H3DDMA_CAP1_Cap_CTL0_cap1_set_block_sel_shift                           (28)
#define  H3DDMA_CAP1_Cap_CTL0_cap1_quad_buf_en_shift                             (27)
#define  H3DDMA_CAP1_Cap_CTL0_cap1_freeze_en_shift                               (24)
#define  H3DDMA_CAP1_Cap_CTL0_cap1_auto_block_sel_en_shift                       (22)
#define  H3DDMA_CAP1_Cap_CTL0_cap1_frame_access_mode_shift                       (0)
#define  H3DDMA_CAP1_Cap_CTL0_cap1_triple_buf_en_mask                            (0x80000000)
#define  H3DDMA_CAP1_Cap_CTL0_cap1_cap_block_fw_mask                             (0x60000000)
#define  H3DDMA_CAP1_Cap_CTL0_cap1_set_block_sel_mask                            (0x10000000)
#define  H3DDMA_CAP1_Cap_CTL0_cap1_quad_buf_en_mask                              (0x08000000)
#define  H3DDMA_CAP1_Cap_CTL0_cap1_freeze_en_mask                                (0x01000000)
#define  H3DDMA_CAP1_Cap_CTL0_cap1_auto_block_sel_en_mask                        (0x00400000)
#define  H3DDMA_CAP1_Cap_CTL0_cap1_frame_access_mode_mask                        (0x00000001)
#define  H3DDMA_CAP1_Cap_CTL0_cap1_triple_buf_en(data)                           (0x80000000&((data)<<31))
#define  H3DDMA_CAP1_Cap_CTL0_cap1_cap_block_fw(data)                            (0x60000000&((data)<<29))
#define  H3DDMA_CAP1_Cap_CTL0_cap1_set_block_sel(data)                           (0x10000000&((data)<<28))
#define  H3DDMA_CAP1_Cap_CTL0_cap1_quad_buf_en(data)                             (0x08000000&((data)<<27))
#define  H3DDMA_CAP1_Cap_CTL0_cap1_freeze_en(data)                               (0x01000000&((data)<<24))
#define  H3DDMA_CAP1_Cap_CTL0_cap1_auto_block_sel_en(data)                       (0x00400000&((data)<<22))
#define  H3DDMA_CAP1_Cap_CTL0_cap1_frame_access_mode(data)                       (0x00000001&(data))
#define  H3DDMA_CAP1_Cap_CTL0_get_cap1_triple_buf_en(data)                       ((0x80000000&(data))>>31)
#define  H3DDMA_CAP1_Cap_CTL0_get_cap1_cap_block_fw(data)                        ((0x60000000&(data))>>29)
#define  H3DDMA_CAP1_Cap_CTL0_get_cap1_set_block_sel(data)                       ((0x10000000&(data))>>28)
#define  H3DDMA_CAP1_Cap_CTL0_get_cap1_quad_buf_en(data)                         ((0x08000000&(data))>>27)
#define  H3DDMA_CAP1_Cap_CTL0_get_cap1_freeze_en(data)                           ((0x01000000&(data))>>24)
#define  H3DDMA_CAP1_Cap_CTL0_get_cap1_auto_block_sel_en(data)                   ((0x00400000&(data))>>22)
#define  H3DDMA_CAP1_Cap_CTL0_get_cap1_frame_access_mode(data)                   (0x00000001&(data))

#define  H3DDMA_CAP1_CTI_DMA_WR_Rule_check_up                                   0x18025B84
#define  H3DDMA_CAP1_CTI_DMA_WR_Rule_check_up_reg_addr                           "0xB8025B84"
#define  H3DDMA_CAP1_CTI_DMA_WR_Rule_check_up_reg                                0xB8025B84
#define  H3DDMA_CAP1_CTI_DMA_WR_Rule_check_up_inst_addr                          "0x004C"
#define  set_H3DDMA_CAP1_CTI_DMA_WR_Rule_check_up_reg(data)                      (*((volatile unsigned int*)H3DDMA_CAP1_CTI_DMA_WR_Rule_check_up_reg)=data)
#define  get_H3DDMA_CAP1_CTI_DMA_WR_Rule_check_up_reg                            (*((volatile unsigned int*)H3DDMA_CAP1_CTI_DMA_WR_Rule_check_up_reg))
#define  H3DDMA_CAP1_CTI_DMA_WR_Rule_check_up_cap1_dma_up_limit_shift            (4)
#define  H3DDMA_CAP1_CTI_DMA_WR_Rule_check_up_cap1_dma_up_limit_mask             (0xFFFFFFF0)
#define  H3DDMA_CAP1_CTI_DMA_WR_Rule_check_up_cap1_dma_up_limit(data)            (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP1_CTI_DMA_WR_Rule_check_up_get_cap1_dma_up_limit(data)        ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP1_CTI_DMA_WR_Rule_check_low                                  0x18025B88
#define  H3DDMA_CAP1_CTI_DMA_WR_Rule_check_low_reg_addr                          "0xB8025B88"
#define  H3DDMA_CAP1_CTI_DMA_WR_Rule_check_low_reg                               0xB8025B88
#define  H3DDMA_CAP1_CTI_DMA_WR_Rule_check_low_inst_addr                         "0x004D"
#define  set_H3DDMA_CAP1_CTI_DMA_WR_Rule_check_low_reg(data)                     (*((volatile unsigned int*)H3DDMA_CAP1_CTI_DMA_WR_Rule_check_low_reg)=data)
#define  get_H3DDMA_CAP1_CTI_DMA_WR_Rule_check_low_reg                           (*((volatile unsigned int*)H3DDMA_CAP1_CTI_DMA_WR_Rule_check_low_reg))
#define  H3DDMA_CAP1_CTI_DMA_WR_Rule_check_low_cap1_dma_low_limit_shift          (4)
#define  H3DDMA_CAP1_CTI_DMA_WR_Rule_check_low_cap1_dma_low_limit_mask           (0xFFFFFFF0)
#define  H3DDMA_CAP1_CTI_DMA_WR_Rule_check_low_cap1_dma_low_limit(data)          (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP1_CTI_DMA_WR_Rule_check_low_get_cap1_dma_low_limit(data)      ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl                                            0x18025B8C
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_reg_addr                                    "0xB8025B8C"
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_reg                                         0xB8025B8C
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_inst_addr                                   "0x004E"
#define  set_H3DDMA_CAP1_CTI_DMA_WR_Ctrl_reg(data)                               (*((volatile unsigned int*)H3DDMA_CAP1_CTI_DMA_WR_Ctrl_reg)=data)
#define  get_H3DDMA_CAP1_CTI_DMA_WR_Ctrl_reg                                     (*((volatile unsigned int*)H3DDMA_CAP1_CTI_DMA_WR_Ctrl_reg))
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_cap1_dma_8byte_swap_shift                   (13)
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_cap1_dma_4byte_swap_shift                   (12)
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_cap1_dma_2byte_swap_shift                   (11)
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_cap1_dma_1byte_swap_shift                   (10)
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_cap1_max_outstanding_shift                  (8)
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_cap1_force_all_rst_shift                    (1)
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_cap1_dma_enable_shift                       (0)
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_cap1_dma_8byte_swap_mask                    (0x00002000)
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_cap1_dma_4byte_swap_mask                    (0x00001000)
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_cap1_dma_2byte_swap_mask                    (0x00000800)
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_cap1_dma_1byte_swap_mask                    (0x00000400)
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_cap1_max_outstanding_mask                   (0x00000300)
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_cap1_force_all_rst_mask                     (0x00000002)
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_cap1_dma_enable_mask                        (0x00000001)
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_cap1_dma_8byte_swap(data)                   (0x00002000&((data)<<13))
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_cap1_dma_4byte_swap(data)                   (0x00001000&((data)<<12))
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_cap1_dma_2byte_swap(data)                   (0x00000800&((data)<<11))
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_cap1_dma_1byte_swap(data)                   (0x00000400&((data)<<10))
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_cap1_max_outstanding(data)                  (0x00000300&((data)<<8))
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_cap1_force_all_rst(data)                    (0x00000002&((data)<<1))
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_cap1_dma_enable(data)                       (0x00000001&(data))
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_get_cap1_dma_8byte_swap(data)               ((0x00002000&(data))>>13)
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_get_cap1_dma_4byte_swap(data)               ((0x00001000&(data))>>12)
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_get_cap1_dma_2byte_swap(data)               ((0x00000800&(data))>>11)
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_get_cap1_dma_1byte_swap(data)               ((0x00000400&(data))>>10)
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_get_cap1_max_outstanding(data)              ((0x00000300&(data))>>8)
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_get_cap1_force_all_rst(data)                ((0x00000002&(data))>>1)
#define  H3DDMA_CAP1_CTI_DMA_WR_Ctrl_get_cap1_dma_enable(data)                   (0x00000001&(data))

#define  H3DDMA_CAP1_CTI_DMA_WR_status                                          0x18025B90
#define  H3DDMA_CAP1_CTI_DMA_WR_status_reg_addr                                  "0xB8025B90"
#define  H3DDMA_CAP1_CTI_DMA_WR_status_reg                                       0xB8025B90
#define  H3DDMA_CAP1_CTI_DMA_WR_status_inst_addr                                 "0x004F"
#define  set_H3DDMA_CAP1_CTI_DMA_WR_status_reg(data)                             (*((volatile unsigned int*)H3DDMA_CAP1_CTI_DMA_WR_status_reg)=data)
#define  get_H3DDMA_CAP1_CTI_DMA_WR_status_reg                                   (*((volatile unsigned int*)H3DDMA_CAP1_CTI_DMA_WR_status_reg))
#define  H3DDMA_CAP1_CTI_DMA_WR_status_cap1_dma_cmd_water_shift                  (28)
#define  H3DDMA_CAP1_CTI_DMA_WR_status_cap1_dma_data_water_shift                 (16)
#define  H3DDMA_CAP1_CTI_DMA_WR_status_cap1_cur_outstanding_shift                (8)
#define  H3DDMA_CAP1_CTI_DMA_WR_status_cap1_soft_rst_before_cmd_finish_shift     (4)
#define  H3DDMA_CAP1_CTI_DMA_WR_status_cap1_soft_rst_with_data_left_shift        (3)
#define  H3DDMA_CAP1_CTI_DMA_WR_status_cap1_data_fifo_underflow_err_shift        (2)
#define  H3DDMA_CAP1_CTI_DMA_WR_status_cap1_exceed_range_err_shift               (1)
#define  H3DDMA_CAP1_CTI_DMA_WR_status_cap1_zero_length_err_shift                (0)
#define  H3DDMA_CAP1_CTI_DMA_WR_status_cap1_dma_cmd_water_mask                   (0x70000000)
#define  H3DDMA_CAP1_CTI_DMA_WR_status_cap1_dma_data_water_mask                  (0x00FF0000)
#define  H3DDMA_CAP1_CTI_DMA_WR_status_cap1_cur_outstanding_mask                 (0x00000700)
#define  H3DDMA_CAP1_CTI_DMA_WR_status_cap1_soft_rst_before_cmd_finish_mask      (0x00000010)
#define  H3DDMA_CAP1_CTI_DMA_WR_status_cap1_soft_rst_with_data_left_mask         (0x00000008)
#define  H3DDMA_CAP1_CTI_DMA_WR_status_cap1_data_fifo_underflow_err_mask         (0x00000004)
#define  H3DDMA_CAP1_CTI_DMA_WR_status_cap1_exceed_range_err_mask                (0x00000002)
#define  H3DDMA_CAP1_CTI_DMA_WR_status_cap1_zero_length_err_mask                 (0x00000001)
#define  H3DDMA_CAP1_CTI_DMA_WR_status_cap1_dma_cmd_water(data)                  (0x70000000&((data)<<28))
#define  H3DDMA_CAP1_CTI_DMA_WR_status_cap1_dma_data_water(data)                 (0x00FF0000&((data)<<16))
#define  H3DDMA_CAP1_CTI_DMA_WR_status_cap1_cur_outstanding(data)                (0x00000700&((data)<<8))
#define  H3DDMA_CAP1_CTI_DMA_WR_status_cap1_soft_rst_before_cmd_finish(data)     (0x00000010&((data)<<4))
#define  H3DDMA_CAP1_CTI_DMA_WR_status_cap1_soft_rst_with_data_left(data)        (0x00000008&((data)<<3))
#define  H3DDMA_CAP1_CTI_DMA_WR_status_cap1_data_fifo_underflow_err(data)        (0x00000004&((data)<<2))
#define  H3DDMA_CAP1_CTI_DMA_WR_status_cap1_exceed_range_err(data)               (0x00000002&((data)<<1))
#define  H3DDMA_CAP1_CTI_DMA_WR_status_cap1_zero_length_err(data)                (0x00000001&(data))
#define  H3DDMA_CAP1_CTI_DMA_WR_status_get_cap1_dma_cmd_water(data)              ((0x70000000&(data))>>28)
#define  H3DDMA_CAP1_CTI_DMA_WR_status_get_cap1_dma_data_water(data)             ((0x00FF0000&(data))>>16)
#define  H3DDMA_CAP1_CTI_DMA_WR_status_get_cap1_cur_outstanding(data)            ((0x00000700&(data))>>8)
#define  H3DDMA_CAP1_CTI_DMA_WR_status_get_cap1_soft_rst_before_cmd_finish(data) ((0x00000010&(data))>>4)
#define  H3DDMA_CAP1_CTI_DMA_WR_status_get_cap1_soft_rst_with_data_left(data)    ((0x00000008&(data))>>3)
#define  H3DDMA_CAP1_CTI_DMA_WR_status_get_cap1_data_fifo_underflow_err(data)    ((0x00000004&(data))>>2)
#define  H3DDMA_CAP1_CTI_DMA_WR_status_get_cap1_exceed_range_err(data)           ((0x00000002&(data))>>1)
#define  H3DDMA_CAP1_CTI_DMA_WR_status_get_cap1_zero_length_err(data)            (0x00000001&(data))

#define  H3DDMA_CAP1_CTI_DMA_WR_status1                                         0x18025B94
#define  H3DDMA_CAP1_CTI_DMA_WR_status1_reg_addr                                 "0xB8025B94"
#define  H3DDMA_CAP1_CTI_DMA_WR_status1_reg                                      0xB8025B94
#define  H3DDMA_CAP1_CTI_DMA_WR_status1_inst_addr                                "0x0050"
#define  set_H3DDMA_CAP1_CTI_DMA_WR_status1_reg(data)                            (*((volatile unsigned int*)H3DDMA_CAP1_CTI_DMA_WR_status1_reg)=data)
#define  get_H3DDMA_CAP1_CTI_DMA_WR_status1_reg                                  (*((volatile unsigned int*)H3DDMA_CAP1_CTI_DMA_WR_status1_reg))
#define  H3DDMA_CAP1_CTI_DMA_WR_status1_cap1_ack_num_error_shift                 (31)
#define  H3DDMA_CAP1_CTI_DMA_WR_status1_cap1_last_no_ack_error_shift             (30)
#define  H3DDMA_CAP1_CTI_DMA_WR_status1_cap1_target_ack_num_shift                (16)
#define  H3DDMA_CAP1_CTI_DMA_WR_status1_cap1_last_ack_num_shift                  (8)
#define  H3DDMA_CAP1_CTI_DMA_WR_status1_cap1_selected_bl_shift                   (0)
#define  H3DDMA_CAP1_CTI_DMA_WR_status1_cap1_ack_num_error_mask                  (0x80000000)
#define  H3DDMA_CAP1_CTI_DMA_WR_status1_cap1_last_no_ack_error_mask              (0x40000000)
#define  H3DDMA_CAP1_CTI_DMA_WR_status1_cap1_target_ack_num_mask                 (0x007F0000)
#define  H3DDMA_CAP1_CTI_DMA_WR_status1_cap1_last_ack_num_mask                   (0x00007F00)
#define  H3DDMA_CAP1_CTI_DMA_WR_status1_cap1_selected_bl_mask                    (0x0000003F)
#define  H3DDMA_CAP1_CTI_DMA_WR_status1_cap1_ack_num_error(data)                 (0x80000000&((data)<<31))
#define  H3DDMA_CAP1_CTI_DMA_WR_status1_cap1_last_no_ack_error(data)             (0x40000000&((data)<<30))
#define  H3DDMA_CAP1_CTI_DMA_WR_status1_cap1_target_ack_num(data)                (0x007F0000&((data)<<16))
#define  H3DDMA_CAP1_CTI_DMA_WR_status1_cap1_last_ack_num(data)                  (0x00007F00&((data)<<8))
#define  H3DDMA_CAP1_CTI_DMA_WR_status1_cap1_selected_bl(data)                   (0x0000003F&(data))
#define  H3DDMA_CAP1_CTI_DMA_WR_status1_get_cap1_ack_num_error(data)             ((0x80000000&(data))>>31)
#define  H3DDMA_CAP1_CTI_DMA_WR_status1_get_cap1_last_no_ack_error(data)         ((0x40000000&(data))>>30)
#define  H3DDMA_CAP1_CTI_DMA_WR_status1_get_cap1_target_ack_num(data)            ((0x007F0000&(data))>>16)
#define  H3DDMA_CAP1_CTI_DMA_WR_status1_get_cap1_last_ack_num(data)              ((0x00007F00&(data))>>8)
#define  H3DDMA_CAP1_CTI_DMA_WR_status1_get_cap1_selected_bl(data)               (0x0000003F&(data))

#define  H3DDMA_CAP1_CTI_DMA_WR_status2                                         0x18025B98
#define  H3DDMA_CAP1_CTI_DMA_WR_status2_reg_addr                                 "0xB8025B98"
#define  H3DDMA_CAP1_CTI_DMA_WR_status2_reg                                      0xB8025B98
#define  H3DDMA_CAP1_CTI_DMA_WR_status2_inst_addr                                "0x0051"
#define  set_H3DDMA_CAP1_CTI_DMA_WR_status2_reg(data)                            (*((volatile unsigned int*)H3DDMA_CAP1_CTI_DMA_WR_status2_reg)=data)
#define  get_H3DDMA_CAP1_CTI_DMA_WR_status2_reg                                  (*((volatile unsigned int*)H3DDMA_CAP1_CTI_DMA_WR_status2_reg))
#define  H3DDMA_CAP1_CTI_DMA_WR_status2_cap1_selected_addr_shift                 (5)
#define  H3DDMA_CAP1_CTI_DMA_WR_status2_cap1_addr_bl_sel_shift                   (0)
#define  H3DDMA_CAP1_CTI_DMA_WR_status2_cap1_selected_addr_mask                  (0xFFFFFFE0)
#define  H3DDMA_CAP1_CTI_DMA_WR_status2_cap1_addr_bl_sel_mask                    (0x00000003)
#define  H3DDMA_CAP1_CTI_DMA_WR_status2_cap1_selected_addr(data)                 (0xFFFFFFE0&((data)<<5))
#define  H3DDMA_CAP1_CTI_DMA_WR_status2_cap1_addr_bl_sel(data)                   (0x00000003&(data))
#define  H3DDMA_CAP1_CTI_DMA_WR_status2_get_cap1_selected_addr(data)             ((0xFFFFFFE0&(data))>>5)
#define  H3DDMA_CAP1_CTI_DMA_WR_status2_get_cap1_addr_bl_sel(data)               (0x00000003&(data))

#define  H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor                                   0x18025B9C
#define  H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_reg_addr                           "0xB8025B9C"
#define  H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_reg                                0xB8025B9C
#define  H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_inst_addr                          "0x0052"
#define  set_H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_reg(data)                      (*((volatile unsigned int*)H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_reg)=data)
#define  get_H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_reg                            (*((volatile unsigned int*)H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_reg))
#define  H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_cap1_monitor_en_shift              (31)
#define  H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_cap1_monitor_conti_shift           (30)
#define  H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_cap1_reach_thd_shift               (24)
#define  H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_cap1_monitor_thd_shift             (16)
#define  H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_cap1_highest_water_level_shift     (0)
#define  H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_cap1_monitor_en_mask               (0x80000000)
#define  H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_cap1_monitor_conti_mask            (0x40000000)
#define  H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_cap1_reach_thd_mask                (0x01000000)
#define  H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_cap1_monitor_thd_mask              (0x00FF0000)
#define  H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_cap1_highest_water_level_mask      (0x000000FF)
#define  H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_cap1_monitor_en(data)              (0x80000000&((data)<<31))
#define  H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_cap1_monitor_conti(data)           (0x40000000&((data)<<30))
#define  H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_cap1_reach_thd(data)               (0x01000000&((data)<<24))
#define  H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_cap1_monitor_thd(data)             (0x00FF0000&((data)<<16))
#define  H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_cap1_highest_water_level(data)     (0x000000FF&(data))
#define  H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_get_cap1_monitor_en(data)          ((0x80000000&(data))>>31)
#define  H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_get_cap1_monitor_conti(data)       ((0x40000000&(data))>>30)
#define  H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_get_cap1_reach_thd(data)           ((0x01000000&(data))>>24)
#define  H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_get_cap1_monitor_thd(data)         ((0x00FF0000&(data))>>16)
#define  H3DDMA_CAP1_CTI_DMA_WR_Water_Monitor_get_cap1_highest_water_level(data) (0x000000FF&(data))

#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_0                                  0x18025BA0
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_0_reg_addr                          "0xB8025BA0"
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_0_reg                               0xB8025BA0
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_0_inst_addr                         "0x0053"
#define  set_H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_0_reg(data)                     (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_0_reg)=data)
#define  get_H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_0_reg                           (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_0_reg))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_0_cap1_sta_addr_0_shift             (4)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_0_cap1_sta_addr_0_mask              (0xFFFFFFF0)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_0_cap1_sta_addr_0(data)             (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_0_get_cap1_sta_addr_0(data)         ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_1                                  0x18025BA4
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_1_reg_addr                          "0xB8025BA4"
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_1_reg                               0xB8025BA4
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_1_inst_addr                         "0x0054"
#define  set_H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_1_reg(data)                     (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_1_reg)=data)
#define  get_H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_1_reg                           (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_1_reg))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_1_cap1_sta_addr_1_shift             (4)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_1_cap1_sta_addr_1_mask              (0xFFFFFFF0)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_1_cap1_sta_addr_1(data)             (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_1_get_cap1_sta_addr_1(data)         ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_2                                  0x18025BA8
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_2_reg_addr                          "0xB8025BA8"
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_2_reg                               0xB8025BA8
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_2_inst_addr                         "0x0055"
#define  set_H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_2_reg(data)                     (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_2_reg)=data)
#define  get_H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_2_reg                           (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_2_reg))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_2_cap1_sta_addr_2_shift             (4)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_2_cap1_sta_addr_2_mask              (0xFFFFFFF0)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_2_cap1_sta_addr_2(data)             (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_2_get_cap1_sta_addr_2(data)         ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_3                                  0x18025BAC
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_3_reg_addr                          "0xB8025BAC"
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_3_reg                               0xB8025BAC
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_3_inst_addr                         "0x0056"
#define  set_H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_3_reg(data)                     (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_3_reg)=data)
#define  get_H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_3_reg                           (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_3_reg))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_3_cap1_sta_addr_3_shift             (4)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_3_cap1_sta_addr_3_mask              (0xFFFFFFF0)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_3_cap1_sta_addr_3(data)             (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_3_get_cap1_sta_addr_3(data)         ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r0                                 0x18025BB0
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r0_reg_addr                         "0xB8025BB0"
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r0_reg                              0xB8025BB0
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r0_inst_addr                        "0x0057"
#define  set_H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r0_reg(data)                    (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r0_reg)=data)
#define  get_H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r0_reg                          (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r0_reg))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r0_cap1_sta_addr_r0_shift           (4)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r0_cap1_sta_addr_r0_mask            (0xFFFFFFF0)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r0_cap1_sta_addr_r0(data)           (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r0_get_cap1_sta_addr_r0(data)       ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r1                                 0x18025BB4
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r1_reg_addr                         "0xB8025BB4"
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r1_reg                              0xB8025BB4
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r1_inst_addr                        "0x0058"
#define  set_H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r1_reg(data)                    (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r1_reg)=data)
#define  get_H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r1_reg                          (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r1_reg))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r1_cap1_sta_addr_r1_shift           (4)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r1_cap1_sta_addr_r1_mask            (0xFFFFFFF0)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r1_cap1_sta_addr_r1(data)           (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r1_get_cap1_sta_addr_r1(data)       ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r2                                 0x18025BB8
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r2_reg_addr                         "0xB8025BB8"
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r2_reg                              0xB8025BB8
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r2_inst_addr                        "0x0059"
#define  set_H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r2_reg(data)                    (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r2_reg)=data)
#define  get_H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r2_reg                          (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r2_reg))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r2_cap1_sta_addr_r2_shift           (4)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r2_cap1_sta_addr_r2_mask            (0xFFFFFFF0)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r2_cap1_sta_addr_r2(data)           (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r2_get_cap1_sta_addr_r2(data)       ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r3                                 0x18025BBC
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r3_reg_addr                         "0xB8025BBC"
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r3_reg                              0xB8025BBC
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r3_inst_addr                        "0x005A"
#define  set_H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r3_reg(data)                    (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r3_reg)=data)
#define  get_H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r3_reg                          (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r3_reg))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r3_cap1_sta_addr_r3_shift           (4)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r3_cap1_sta_addr_r3_mask            (0xFFFFFFF0)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r3_cap1_sta_addr_r3(data)           (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_addr_r3_get_cap1_sta_addr_r3(data)       ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_line_step                               0x18025BC0
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_line_step_reg_addr                       "0xB8025BC0"
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_line_step_reg                            0xB8025BC0
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_line_step_inst_addr                      "0x005B"
#define  set_H3DDMA_CAP1_WR_DMA_num_bl_wrap_line_step_reg(data)                  (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_line_step_reg)=data)
#define  get_H3DDMA_CAP1_WR_DMA_num_bl_wrap_line_step_reg                        (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_line_step_reg))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_line_step_cap1_line_step_shift           (4)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_line_step_cap1_line_step_mask            (0xFFFFFFF0)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_line_step_cap1_line_step(data)           (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_line_step_get_cap1_line_step(data)       ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_ctl                                     0x18025BC4
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_ctl_reg_addr                             "0xB8025BC4"
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_ctl_reg                                  0xB8025BC4
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_ctl_inst_addr                            "0x005C"
#define  set_H3DDMA_CAP1_WR_DMA_num_bl_wrap_ctl_reg(data)                        (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_ctl_reg)=data)
#define  get_H3DDMA_CAP1_WR_DMA_num_bl_wrap_ctl_reg                              (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_ctl_reg))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_ctl_cap1_line_num_shift                  (16)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_ctl_cap1_burst_len_shift                 (4)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_ctl_cap1_line_num_mask                   (0x0FFF0000)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_ctl_cap1_burst_len_mask                  (0x000007F0)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_ctl_cap1_line_num(data)                  (0x0FFF0000&((data)<<16))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_ctl_cap1_burst_len(data)                 (0x000007F0&((data)<<4))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_ctl_get_cap1_line_num(data)              ((0x0FFF0000&(data))>>16)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_ctl_get_cap1_burst_len(data)             ((0x000007F0&(data))>>4)

#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_rolling                                 0x18025BC8
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_rolling_reg_addr                         "0xB8025BC8"
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_rolling_reg                              0xB8025BC8
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_rolling_inst_addr                        "0x005D"
#define  set_H3DDMA_CAP1_WR_DMA_num_bl_wrap_rolling_reg(data)                    (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_rolling_reg)=data)
#define  get_H3DDMA_CAP1_WR_DMA_num_bl_wrap_rolling_reg                          (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_rolling_reg))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_rolling_cap1_rolling_enable_shift        (31)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_rolling_cap1_rolling_space_shift         (16)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_rolling_cap1_rolling_num_shift           (0)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_rolling_cap1_rolling_enable_mask         (0x80000000)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_rolling_cap1_rolling_space_mask          (0x0FFF0000)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_rolling_cap1_rolling_num_mask            (0x00000FFF)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_rolling_cap1_rolling_enable(data)        (0x80000000&((data)<<31))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_rolling_cap1_rolling_space(data)         (0x0FFF0000&((data)<<16))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_rolling_cap1_rolling_num(data)           (0x00000FFF&(data))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_rolling_get_cap1_rolling_enable(data)    ((0x80000000&(data))>>31)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_rolling_get_cap1_rolling_space(data)     ((0x0FFF0000&(data))>>16)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_rolling_get_cap1_rolling_num(data)       (0x00000FFF&(data))

#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_word                                    0x18025BCC
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_word_reg_addr                            "0xB8025BCC"
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_word_reg                                 0xB8025BCC
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_word_inst_addr                           "0x005E"
#define  set_H3DDMA_CAP1_WR_DMA_num_bl_wrap_word_reg(data)                       (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_word_reg)=data)
#define  get_H3DDMA_CAP1_WR_DMA_num_bl_wrap_word_reg                             (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_word_reg))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_word_cap1_addr_toggle_mode_shift         (28)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_word_cap1_line_burst_num_shift           (0)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_word_cap1_addr_toggle_mode_mask          (0x30000000)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_word_cap1_line_burst_num_mask            (0x007FFFFF)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_word_cap1_addr_toggle_mode(data)         (0x30000000&((data)<<28))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_word_cap1_line_burst_num(data)           (0x007FFFFF&(data))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_word_get_cap1_addr_toggle_mode(data)     ((0x30000000&(data))>>28)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_word_get_cap1_line_burst_num(data)       (0x007FFFFF&(data))

#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st1                                     0x18025BD0
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st1_reg_addr                             "0xB8025BD0"
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st1_reg                                  0xB8025BD0
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st1_inst_addr                            "0x005F"
#define  set_H3DDMA_CAP1_WR_DMA_num_bl_wrap_st1_reg(data)                        (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_st1_reg)=data)
#define  get_H3DDMA_CAP1_WR_DMA_num_bl_wrap_st1_reg                              (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_st1_reg))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st1_cap1_remain_setting_shift            (31)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st1_cap1_finish_status_shift             (28)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st1_cap1_remain_burst_num_shift          (0)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st1_cap1_remain_setting_mask             (0x80000000)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st1_cap1_finish_status_mask              (0x30000000)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st1_cap1_remain_burst_num_mask           (0x007FFFFF)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st1_cap1_remain_setting(data)            (0x80000000&((data)<<31))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st1_cap1_finish_status(data)             (0x30000000&((data)<<28))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st1_cap1_remain_burst_num(data)          (0x007FFFFF&(data))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st1_get_cap1_remain_setting(data)        ((0x80000000&(data))>>31)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st1_get_cap1_finish_status(data)         ((0x30000000&(data))>>28)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st1_get_cap1_remain_burst_num(data)      (0x007FFFFF&(data))

#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st2                                     0x18025BD4
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st2_reg_addr                             "0xB8025BD4"
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st2_reg                                  0xB8025BD4
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st2_inst_addr                            "0x0060"
#define  set_H3DDMA_CAP1_WR_DMA_num_bl_wrap_st2_reg(data)                        (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_st2_reg)=data)
#define  get_H3DDMA_CAP1_WR_DMA_num_bl_wrap_st2_reg                              (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_num_bl_wrap_st2_reg))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st2_cap1_soft_rst_before_finish_shift    (31)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st2_cap1_remain_line_num_shift           (16)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st2_cap1_soft_rst_before_finish_mask     (0x80000000)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st2_cap1_remain_line_num_mask            (0x0FFF0000)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st2_cap1_soft_rst_before_finish(data)    (0x80000000&((data)<<31))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st2_cap1_remain_line_num(data)           (0x0FFF0000&((data)<<16))
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st2_get_cap1_soft_rst_before_finish(data) ((0x80000000&(data))>>31)
#define  H3DDMA_CAP1_WR_DMA_num_bl_wrap_st2_get_cap1_remain_line_num(data)       ((0x0FFF0000&(data))>>16)

#define  H3DDMA_CAP1_WR_DMA_pxltobus                                            0x18025BD8
#define  H3DDMA_CAP1_WR_DMA_pxltobus_reg_addr                                    "0xB8025BD8"
#define  H3DDMA_CAP1_WR_DMA_pxltobus_reg                                         0xB8025BD8
#define  H3DDMA_CAP1_WR_DMA_pxltobus_inst_addr                                   "0x0061"
#define  set_H3DDMA_CAP1_WR_DMA_pxltobus_reg(data)                               (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_pxltobus_reg)=data)
#define  get_H3DDMA_CAP1_WR_DMA_pxltobus_reg                                     (*((volatile unsigned int*)H3DDMA_CAP1_WR_DMA_pxltobus_reg))
#define  H3DDMA_CAP1_WR_DMA_pxltobus_cap1_bit_sel_shift                          (2)
#define  H3DDMA_CAP1_WR_DMA_pxltobus_cap1_pixel_encoding_shift                   (0)
#define  H3DDMA_CAP1_WR_DMA_pxltobus_cap1_bit_sel_mask                           (0x0000000C)
#define  H3DDMA_CAP1_WR_DMA_pxltobus_cap1_pixel_encoding_mask                    (0x00000003)
#define  H3DDMA_CAP1_WR_DMA_pxltobus_cap1_bit_sel(data)                          (0x0000000C&((data)<<2))
#define  H3DDMA_CAP1_WR_DMA_pxltobus_cap1_pixel_encoding(data)                   (0x00000003&(data))
#define  H3DDMA_CAP1_WR_DMA_pxltobus_get_cap1_bit_sel(data)                      ((0x0000000C&(data))>>2)
#define  H3DDMA_CAP1_WR_DMA_pxltobus_get_cap1_pixel_encoding(data)               (0x00000003&(data))

#define  H3DDMA_CAP1_Cap_L_Start_db                                             0x18025BE0
#define  H3DDMA_CAP1_Cap_L_Start_db_reg_addr                                     "0xB8025BE0"
#define  H3DDMA_CAP1_Cap_L_Start_db_reg                                          0xB8025BE0
#define  H3DDMA_CAP1_Cap_L_Start_db_inst_addr                                    "0x0062"
#define  set_H3DDMA_CAP1_Cap_L_Start_db_reg(data)                                (*((volatile unsigned int*)H3DDMA_CAP1_Cap_L_Start_db_reg)=data)
#define  get_H3DDMA_CAP1_Cap_L_Start_db_reg                                      (*((volatile unsigned int*)H3DDMA_CAP1_Cap_L_Start_db_reg))
#define  H3DDMA_CAP1_Cap_L_Start_db_cap1_sta_addr_db_shift                       (3)
#define  H3DDMA_CAP1_Cap_L_Start_db_cap1_sta_addr_db_mask                        (0xFFFFFFF8)
#define  H3DDMA_CAP1_Cap_L_Start_db_cap1_sta_addr_db(data)                       (0xFFFFFFF8&((data)<<3))
#define  H3DDMA_CAP1_Cap_L_Start_db_get_cap1_sta_addr_db(data)                   ((0xFFFFFFF8&(data))>>3)

#define  H3DDMA_CAP1_Cap_R_Start_db                                             0x18025BE4
#define  H3DDMA_CAP1_Cap_R_Start_db_reg_addr                                     "0xB8025BE4"
#define  H3DDMA_CAP1_Cap_R_Start_db_reg                                          0xB8025BE4
#define  H3DDMA_CAP1_Cap_R_Start_db_inst_addr                                    "0x0063"
#define  set_H3DDMA_CAP1_Cap_R_Start_db_reg(data)                                (*((volatile unsigned int*)H3DDMA_CAP1_Cap_R_Start_db_reg)=data)
#define  get_H3DDMA_CAP1_Cap_R_Start_db_reg                                      (*((volatile unsigned int*)H3DDMA_CAP1_Cap_R_Start_db_reg))
#define  H3DDMA_CAP1_Cap_R_Start_db_cap1_sta_addr_r_db_shift                     (3)
#define  H3DDMA_CAP1_Cap_R_Start_db_cap1_sta_addr_r_db_mask                      (0xFFFFFFF8)
#define  H3DDMA_CAP1_Cap_R_Start_db_cap1_sta_addr_r_db(data)                     (0xFFFFFFF8&((data)<<3))
#define  H3DDMA_CAP1_Cap_R_Start_db_get_cap1_sta_addr_r_db(data)                 ((0xFFFFFFF8&(data))>>3)

#define  H3DDMA_CAP1_Cap_Status                                                 0x18025BE8
#define  H3DDMA_CAP1_Cap_Status_reg_addr                                         "0xB8025BE8"
#define  H3DDMA_CAP1_Cap_Status_reg                                              0xB8025BE8
#define  H3DDMA_CAP1_Cap_Status_inst_addr                                        "0x0064"
#define  set_H3DDMA_CAP1_Cap_Status_reg(data)                                    (*((volatile unsigned int*)H3DDMA_CAP1_Cap_Status_reg)=data)
#define  get_H3DDMA_CAP1_Cap_Status_reg                                          (*((volatile unsigned int*)H3DDMA_CAP1_Cap_Status_reg))
#define  H3DDMA_CAP1_Cap_Status_cap1_freeze_ok_shift                             (8)
#define  H3DDMA_CAP1_Cap_Status_cap1_cap_block_sel_shift                         (4)
#define  H3DDMA_CAP1_Cap_Status_cap1_cap_last_wr_flag_shift                      (3)
#define  H3DDMA_CAP1_Cap_Status_cap1_cap_over_size_shift                         (2)
#define  H3DDMA_CAP1_Cap_Status_cap1_cap_under_size_shift                        (1)
#define  H3DDMA_CAP1_Cap_Status_cap1_cap_fifo_overflow_shift                     (0)
#define  H3DDMA_CAP1_Cap_Status_cap1_freeze_ok_mask                              (0x00000100)
#define  H3DDMA_CAP1_Cap_Status_cap1_cap_block_sel_mask                          (0x00000030)
#define  H3DDMA_CAP1_Cap_Status_cap1_cap_last_wr_flag_mask                       (0x00000008)
#define  H3DDMA_CAP1_Cap_Status_cap1_cap_over_size_mask                          (0x00000004)
#define  H3DDMA_CAP1_Cap_Status_cap1_cap_under_size_mask                         (0x00000002)
#define  H3DDMA_CAP1_Cap_Status_cap1_cap_fifo_overflow_mask                      (0x00000001)
#define  H3DDMA_CAP1_Cap_Status_cap1_freeze_ok(data)                             (0x00000100&((data)<<8))
#define  H3DDMA_CAP1_Cap_Status_cap1_cap_block_sel(data)                         (0x00000030&((data)<<4))
#define  H3DDMA_CAP1_Cap_Status_cap1_cap_last_wr_flag(data)                      (0x00000008&((data)<<3))
#define  H3DDMA_CAP1_Cap_Status_cap1_cap_over_size(data)                         (0x00000004&((data)<<2))
#define  H3DDMA_CAP1_Cap_Status_cap1_cap_under_size(data)                        (0x00000002&((data)<<1))
#define  H3DDMA_CAP1_Cap_Status_cap1_cap_fifo_overflow(data)                     (0x00000001&(data))
#define  H3DDMA_CAP1_Cap_Status_get_cap1_freeze_ok(data)                         ((0x00000100&(data))>>8)
#define  H3DDMA_CAP1_Cap_Status_get_cap1_cap_block_sel(data)                     ((0x00000030&(data))>>4)
#define  H3DDMA_CAP1_Cap_Status_get_cap1_cap_last_wr_flag(data)                  ((0x00000008&(data))>>3)
#define  H3DDMA_CAP1_Cap_Status_get_cap1_cap_over_size(data)                     ((0x00000004&(data))>>2)
#define  H3DDMA_CAP1_Cap_Status_get_cap1_cap_under_size(data)                    ((0x00000002&(data))>>1)
#define  H3DDMA_CAP1_Cap_Status_get_cap1_cap_fifo_overflow(data)                 (0x00000001&(data))

#define  H3DDMA_CAP2_Cap_CTL0                                                   0x18025D00
#define  H3DDMA_CAP2_Cap_CTL0_reg_addr                                           "0xB8025D00"
#define  H3DDMA_CAP2_Cap_CTL0_reg                                                0xB8025D00
#define  H3DDMA_CAP2_Cap_CTL0_inst_addr                                          "0x0065"
#define  set_H3DDMA_CAP2_Cap_CTL0_reg(data)                                      (*((volatile unsigned int*)H3DDMA_CAP2_Cap_CTL0_reg)=data)
#define  get_H3DDMA_CAP2_Cap_CTL0_reg                                            (*((volatile unsigned int*)H3DDMA_CAP2_Cap_CTL0_reg))
#define  H3DDMA_CAP2_Cap_CTL0_cap2_triple_buf_en_shift                           (31)
#define  H3DDMA_CAP2_Cap_CTL0_cap2_cap_block_fw_shift                            (29)
#define  H3DDMA_CAP2_Cap_CTL0_cap2_set_block_sel_shift                           (28)
#define  H3DDMA_CAP2_Cap_CTL0_cap2_quad_buf_en_shift                             (27)
#define  H3DDMA_CAP2_Cap_CTL0_cap2_freeze_en_shift                               (24)
#define  H3DDMA_CAP2_Cap_CTL0_cap2_auto_block_sel_en_shift                       (22)
#define  H3DDMA_CAP2_Cap_CTL0_cap2_frame_access_mode_shift                       (0)
#define  H3DDMA_CAP2_Cap_CTL0_cap2_triple_buf_en_mask                            (0x80000000)
#define  H3DDMA_CAP2_Cap_CTL0_cap2_cap_block_fw_mask                             (0x60000000)
#define  H3DDMA_CAP2_Cap_CTL0_cap2_set_block_sel_mask                            (0x10000000)
#define  H3DDMA_CAP2_Cap_CTL0_cap2_quad_buf_en_mask                              (0x08000000)
#define  H3DDMA_CAP2_Cap_CTL0_cap2_freeze_en_mask                                (0x01000000)
#define  H3DDMA_CAP2_Cap_CTL0_cap2_auto_block_sel_en_mask                        (0x00400000)
#define  H3DDMA_CAP2_Cap_CTL0_cap2_frame_access_mode_mask                        (0x00000001)
#define  H3DDMA_CAP2_Cap_CTL0_cap2_triple_buf_en(data)                           (0x80000000&((data)<<31))
#define  H3DDMA_CAP2_Cap_CTL0_cap2_cap_block_fw(data)                            (0x60000000&((data)<<29))
#define  H3DDMA_CAP2_Cap_CTL0_cap2_set_block_sel(data)                           (0x10000000&((data)<<28))
#define  H3DDMA_CAP2_Cap_CTL0_cap2_quad_buf_en(data)                             (0x08000000&((data)<<27))
#define  H3DDMA_CAP2_Cap_CTL0_cap2_freeze_en(data)                               (0x01000000&((data)<<24))
#define  H3DDMA_CAP2_Cap_CTL0_cap2_auto_block_sel_en(data)                       (0x00400000&((data)<<22))
#define  H3DDMA_CAP2_Cap_CTL0_cap2_frame_access_mode(data)                       (0x00000001&(data))
#define  H3DDMA_CAP2_Cap_CTL0_get_cap2_triple_buf_en(data)                       ((0x80000000&(data))>>31)
#define  H3DDMA_CAP2_Cap_CTL0_get_cap2_cap_block_fw(data)                        ((0x60000000&(data))>>29)
#define  H3DDMA_CAP2_Cap_CTL0_get_cap2_set_block_sel(data)                       ((0x10000000&(data))>>28)
#define  H3DDMA_CAP2_Cap_CTL0_get_cap2_quad_buf_en(data)                         ((0x08000000&(data))>>27)
#define  H3DDMA_CAP2_Cap_CTL0_get_cap2_freeze_en(data)                           ((0x01000000&(data))>>24)
#define  H3DDMA_CAP2_Cap_CTL0_get_cap2_auto_block_sel_en(data)                   ((0x00400000&(data))>>22)
#define  H3DDMA_CAP2_Cap_CTL0_get_cap2_frame_access_mode(data)                   (0x00000001&(data))

#define  H3DDMA_CAP2_CTI_DMA_WR_Rule_check_up                                   0x18025D04
#define  H3DDMA_CAP2_CTI_DMA_WR_Rule_check_up_reg_addr                           "0xB8025D04"
#define  H3DDMA_CAP2_CTI_DMA_WR_Rule_check_up_reg                                0xB8025D04
#define  H3DDMA_CAP2_CTI_DMA_WR_Rule_check_up_inst_addr                          "0x0066"
#define  set_H3DDMA_CAP2_CTI_DMA_WR_Rule_check_up_reg(data)                      (*((volatile unsigned int*)H3DDMA_CAP2_CTI_DMA_WR_Rule_check_up_reg)=data)
#define  get_H3DDMA_CAP2_CTI_DMA_WR_Rule_check_up_reg                            (*((volatile unsigned int*)H3DDMA_CAP2_CTI_DMA_WR_Rule_check_up_reg))
#define  H3DDMA_CAP2_CTI_DMA_WR_Rule_check_up_cap2_dma_up_limit_shift            (4)
#define  H3DDMA_CAP2_CTI_DMA_WR_Rule_check_up_cap2_dma_up_limit_mask             (0xFFFFFFF0)
#define  H3DDMA_CAP2_CTI_DMA_WR_Rule_check_up_cap2_dma_up_limit(data)            (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP2_CTI_DMA_WR_Rule_check_up_get_cap2_dma_up_limit(data)        ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP2_CTI_DMA_WR_Rule_check_low                                  0x18025D08
#define  H3DDMA_CAP2_CTI_DMA_WR_Rule_check_low_reg_addr                          "0xB8025D08"
#define  H3DDMA_CAP2_CTI_DMA_WR_Rule_check_low_reg                               0xB8025D08
#define  H3DDMA_CAP2_CTI_DMA_WR_Rule_check_low_inst_addr                         "0x0067"
#define  set_H3DDMA_CAP2_CTI_DMA_WR_Rule_check_low_reg(data)                     (*((volatile unsigned int*)H3DDMA_CAP2_CTI_DMA_WR_Rule_check_low_reg)=data)
#define  get_H3DDMA_CAP2_CTI_DMA_WR_Rule_check_low_reg                           (*((volatile unsigned int*)H3DDMA_CAP2_CTI_DMA_WR_Rule_check_low_reg))
#define  H3DDMA_CAP2_CTI_DMA_WR_Rule_check_low_cap2_dma_low_limit_shift          (4)
#define  H3DDMA_CAP2_CTI_DMA_WR_Rule_check_low_cap2_dma_low_limit_mask           (0xFFFFFFF0)
#define  H3DDMA_CAP2_CTI_DMA_WR_Rule_check_low_cap2_dma_low_limit(data)          (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP2_CTI_DMA_WR_Rule_check_low_get_cap2_dma_low_limit(data)      ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl                                            0x18025D0C
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_reg_addr                                    "0xB8025D0C"
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_reg                                         0xB8025D0C
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_inst_addr                                   "0x0068"
#define  set_H3DDMA_CAP2_CTI_DMA_WR_Ctrl_reg(data)                               (*((volatile unsigned int*)H3DDMA_CAP2_CTI_DMA_WR_Ctrl_reg)=data)
#define  get_H3DDMA_CAP2_CTI_DMA_WR_Ctrl_reg                                     (*((volatile unsigned int*)H3DDMA_CAP2_CTI_DMA_WR_Ctrl_reg))
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_cap2_dma_8byte_swap_shift                   (13)
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_cap2_dma_4byte_swap_shift                   (12)
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_cap2_dma_2byte_swap_shift                   (11)
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_cap2_dma_1byte_swap_shift                   (10)
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_cap2_max_outstanding_shift                  (8)
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_cap2_force_all_rst_shift                    (1)
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_cap2_dma_enable_shift                       (0)
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_cap2_dma_8byte_swap_mask                    (0x00002000)
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_cap2_dma_4byte_swap_mask                    (0x00001000)
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_cap2_dma_2byte_swap_mask                    (0x00000800)
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_cap2_dma_1byte_swap_mask                    (0x00000400)
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_cap2_max_outstanding_mask                   (0x00000300)
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_cap2_force_all_rst_mask                     (0x00000002)
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_cap2_dma_enable_mask                        (0x00000001)
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_cap2_dma_8byte_swap(data)                   (0x00002000&((data)<<13))
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_cap2_dma_4byte_swap(data)                   (0x00001000&((data)<<12))
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_cap2_dma_2byte_swap(data)                   (0x00000800&((data)<<11))
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_cap2_dma_1byte_swap(data)                   (0x00000400&((data)<<10))
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_cap2_max_outstanding(data)                  (0x00000300&((data)<<8))
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_cap2_force_all_rst(data)                    (0x00000002&((data)<<1))
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_cap2_dma_enable(data)                       (0x00000001&(data))
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_get_cap2_dma_8byte_swap(data)               ((0x00002000&(data))>>13)
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_get_cap2_dma_4byte_swap(data)               ((0x00001000&(data))>>12)
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_get_cap2_dma_2byte_swap(data)               ((0x00000800&(data))>>11)
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_get_cap2_dma_1byte_swap(data)               ((0x00000400&(data))>>10)
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_get_cap2_max_outstanding(data)              ((0x00000300&(data))>>8)
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_get_cap2_force_all_rst(data)                ((0x00000002&(data))>>1)
#define  H3DDMA_CAP2_CTI_DMA_WR_Ctrl_get_cap2_dma_enable(data)                   (0x00000001&(data))

#define  H3DDMA_CAP2_CTI_DMA_WR_status                                          0x18025D10
#define  H3DDMA_CAP2_CTI_DMA_WR_status_reg_addr                                  "0xB8025D10"
#define  H3DDMA_CAP2_CTI_DMA_WR_status_reg                                       0xB8025D10
#define  H3DDMA_CAP2_CTI_DMA_WR_status_inst_addr                                 "0x0069"
#define  set_H3DDMA_CAP2_CTI_DMA_WR_status_reg(data)                             (*((volatile unsigned int*)H3DDMA_CAP2_CTI_DMA_WR_status_reg)=data)
#define  get_H3DDMA_CAP2_CTI_DMA_WR_status_reg                                   (*((volatile unsigned int*)H3DDMA_CAP2_CTI_DMA_WR_status_reg))
#define  H3DDMA_CAP2_CTI_DMA_WR_status_cap2_dma_cmd_water_shift                  (28)
#define  H3DDMA_CAP2_CTI_DMA_WR_status_cap2_dma_data_water_shift                 (16)
#define  H3DDMA_CAP2_CTI_DMA_WR_status_cap2_cur_outstanding_shift                (8)
#define  H3DDMA_CAP2_CTI_DMA_WR_status_cap2_soft_rst_before_cmd_finish_shift     (4)
#define  H3DDMA_CAP2_CTI_DMA_WR_status_cap2_soft_rst_with_data_left_shift        (3)
#define  H3DDMA_CAP2_CTI_DMA_WR_status_cap2_data_fifo_underflow_err_shift        (2)
#define  H3DDMA_CAP2_CTI_DMA_WR_status_cap2_exceed_range_err_shift               (1)
#define  H3DDMA_CAP2_CTI_DMA_WR_status_cap2_zero_length_err_shift                (0)
#define  H3DDMA_CAP2_CTI_DMA_WR_status_cap2_dma_cmd_water_mask                   (0x70000000)
#define  H3DDMA_CAP2_CTI_DMA_WR_status_cap2_dma_data_water_mask                  (0x01FF0000)
#define  H3DDMA_CAP2_CTI_DMA_WR_status_cap2_cur_outstanding_mask                 (0x00000700)
#define  H3DDMA_CAP2_CTI_DMA_WR_status_cap2_soft_rst_before_cmd_finish_mask      (0x00000010)
#define  H3DDMA_CAP2_CTI_DMA_WR_status_cap2_soft_rst_with_data_left_mask         (0x00000008)
#define  H3DDMA_CAP2_CTI_DMA_WR_status_cap2_data_fifo_underflow_err_mask         (0x00000004)
#define  H3DDMA_CAP2_CTI_DMA_WR_status_cap2_exceed_range_err_mask                (0x00000002)
#define  H3DDMA_CAP2_CTI_DMA_WR_status_cap2_zero_length_err_mask                 (0x00000001)
#define  H3DDMA_CAP2_CTI_DMA_WR_status_cap2_dma_cmd_water(data)                  (0x70000000&((data)<<28))
#define  H3DDMA_CAP2_CTI_DMA_WR_status_cap2_dma_data_water(data)                 (0x01FF0000&((data)<<16))
#define  H3DDMA_CAP2_CTI_DMA_WR_status_cap2_cur_outstanding(data)                (0x00000700&((data)<<8))
#define  H3DDMA_CAP2_CTI_DMA_WR_status_cap2_soft_rst_before_cmd_finish(data)     (0x00000010&((data)<<4))
#define  H3DDMA_CAP2_CTI_DMA_WR_status_cap2_soft_rst_with_data_left(data)        (0x00000008&((data)<<3))
#define  H3DDMA_CAP2_CTI_DMA_WR_status_cap2_data_fifo_underflow_err(data)        (0x00000004&((data)<<2))
#define  H3DDMA_CAP2_CTI_DMA_WR_status_cap2_exceed_range_err(data)               (0x00000002&((data)<<1))
#define  H3DDMA_CAP2_CTI_DMA_WR_status_cap2_zero_length_err(data)                (0x00000001&(data))
#define  H3DDMA_CAP2_CTI_DMA_WR_status_get_cap2_dma_cmd_water(data)              ((0x70000000&(data))>>28)
#define  H3DDMA_CAP2_CTI_DMA_WR_status_get_cap2_dma_data_water(data)             ((0x01FF0000&(data))>>16)
#define  H3DDMA_CAP2_CTI_DMA_WR_status_get_cap2_cur_outstanding(data)            ((0x00000700&(data))>>8)
#define  H3DDMA_CAP2_CTI_DMA_WR_status_get_cap2_soft_rst_before_cmd_finish(data) ((0x00000010&(data))>>4)
#define  H3DDMA_CAP2_CTI_DMA_WR_status_get_cap2_soft_rst_with_data_left(data)    ((0x00000008&(data))>>3)
#define  H3DDMA_CAP2_CTI_DMA_WR_status_get_cap2_data_fifo_underflow_err(data)    ((0x00000004&(data))>>2)
#define  H3DDMA_CAP2_CTI_DMA_WR_status_get_cap2_exceed_range_err(data)           ((0x00000002&(data))>>1)
#define  H3DDMA_CAP2_CTI_DMA_WR_status_get_cap2_zero_length_err(data)            (0x00000001&(data))

#define  H3DDMA_CAP2_CTI_DMA_WR_status1                                         0x18025D14
#define  H3DDMA_CAP2_CTI_DMA_WR_status1_reg_addr                                 "0xB8025D14"
#define  H3DDMA_CAP2_CTI_DMA_WR_status1_reg                                      0xB8025D14
#define  H3DDMA_CAP2_CTI_DMA_WR_status1_inst_addr                                "0x006A"
#define  set_H3DDMA_CAP2_CTI_DMA_WR_status1_reg(data)                            (*((volatile unsigned int*)H3DDMA_CAP2_CTI_DMA_WR_status1_reg)=data)
#define  get_H3DDMA_CAP2_CTI_DMA_WR_status1_reg                                  (*((volatile unsigned int*)H3DDMA_CAP2_CTI_DMA_WR_status1_reg))
#define  H3DDMA_CAP2_CTI_DMA_WR_status1_cap2_ack_num_error_shift                 (31)
#define  H3DDMA_CAP2_CTI_DMA_WR_status1_cap2_last_no_ack_error_shift             (30)
#define  H3DDMA_CAP2_CTI_DMA_WR_status1_cap2_target_ack_num_shift                (16)
#define  H3DDMA_CAP2_CTI_DMA_WR_status1_cap2_last_ack_num_shift                  (8)
#define  H3DDMA_CAP2_CTI_DMA_WR_status1_cap2_selected_bl_shift                   (0)
#define  H3DDMA_CAP2_CTI_DMA_WR_status1_cap2_ack_num_error_mask                  (0x80000000)
#define  H3DDMA_CAP2_CTI_DMA_WR_status1_cap2_last_no_ack_error_mask              (0x40000000)
#define  H3DDMA_CAP2_CTI_DMA_WR_status1_cap2_target_ack_num_mask                 (0x007F0000)
#define  H3DDMA_CAP2_CTI_DMA_WR_status1_cap2_last_ack_num_mask                   (0x00007F00)
#define  H3DDMA_CAP2_CTI_DMA_WR_status1_cap2_selected_bl_mask                    (0x0000003F)
#define  H3DDMA_CAP2_CTI_DMA_WR_status1_cap2_ack_num_error(data)                 (0x80000000&((data)<<31))
#define  H3DDMA_CAP2_CTI_DMA_WR_status1_cap2_last_no_ack_error(data)             (0x40000000&((data)<<30))
#define  H3DDMA_CAP2_CTI_DMA_WR_status1_cap2_target_ack_num(data)                (0x007F0000&((data)<<16))
#define  H3DDMA_CAP2_CTI_DMA_WR_status1_cap2_last_ack_num(data)                  (0x00007F00&((data)<<8))
#define  H3DDMA_CAP2_CTI_DMA_WR_status1_cap2_selected_bl(data)                   (0x0000003F&(data))
#define  H3DDMA_CAP2_CTI_DMA_WR_status1_get_cap2_ack_num_error(data)             ((0x80000000&(data))>>31)
#define  H3DDMA_CAP2_CTI_DMA_WR_status1_get_cap2_last_no_ack_error(data)         ((0x40000000&(data))>>30)
#define  H3DDMA_CAP2_CTI_DMA_WR_status1_get_cap2_target_ack_num(data)            ((0x007F0000&(data))>>16)
#define  H3DDMA_CAP2_CTI_DMA_WR_status1_get_cap2_last_ack_num(data)              ((0x00007F00&(data))>>8)
#define  H3DDMA_CAP2_CTI_DMA_WR_status1_get_cap2_selected_bl(data)               (0x0000003F&(data))

#define  H3DDMA_CAP2_CTI_DMA_WR_status2                                         0x18025D18
#define  H3DDMA_CAP2_CTI_DMA_WR_status2_reg_addr                                 "0xB8025D18"
#define  H3DDMA_CAP2_CTI_DMA_WR_status2_reg                                      0xB8025D18
#define  H3DDMA_CAP2_CTI_DMA_WR_status2_inst_addr                                "0x006B"
#define  set_H3DDMA_CAP2_CTI_DMA_WR_status2_reg(data)                            (*((volatile unsigned int*)H3DDMA_CAP2_CTI_DMA_WR_status2_reg)=data)
#define  get_H3DDMA_CAP2_CTI_DMA_WR_status2_reg                                  (*((volatile unsigned int*)H3DDMA_CAP2_CTI_DMA_WR_status2_reg))
#define  H3DDMA_CAP2_CTI_DMA_WR_status2_cap2_selected_addr_shift                 (5)
#define  H3DDMA_CAP2_CTI_DMA_WR_status2_cap2_addr_bl_sel_shift                   (0)
#define  H3DDMA_CAP2_CTI_DMA_WR_status2_cap2_selected_addr_mask                  (0xFFFFFFE0)
#define  H3DDMA_CAP2_CTI_DMA_WR_status2_cap2_addr_bl_sel_mask                    (0x00000003)
#define  H3DDMA_CAP2_CTI_DMA_WR_status2_cap2_selected_addr(data)                 (0xFFFFFFE0&((data)<<5))
#define  H3DDMA_CAP2_CTI_DMA_WR_status2_cap2_addr_bl_sel(data)                   (0x00000003&(data))
#define  H3DDMA_CAP2_CTI_DMA_WR_status2_get_cap2_selected_addr(data)             ((0xFFFFFFE0&(data))>>5)
#define  H3DDMA_CAP2_CTI_DMA_WR_status2_get_cap2_addr_bl_sel(data)               (0x00000003&(data))

#define  H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor                                   0x18025D1C
#define  H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_reg_addr                           "0xB8025D1C"
#define  H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_reg                                0xB8025D1C
#define  H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_inst_addr                          "0x006C"
#define  set_H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_reg(data)                      (*((volatile unsigned int*)H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_reg)=data)
#define  get_H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_reg                            (*((volatile unsigned int*)H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_reg))
#define  H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_cap2_monitor_en_shift              (31)
#define  H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_cap2_monitor_conti_shift           (30)
#define  H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_cap2_reach_thd_shift               (24)
#define  H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_cap2_monitor_thd_shift             (15)
#define  H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_cap2_highest_water_level_shift     (0)
#define  H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_cap2_monitor_en_mask               (0x80000000)
#define  H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_cap2_monitor_conti_mask            (0x40000000)
#define  H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_cap2_reach_thd_mask                (0x01000000)
#define  H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_cap2_monitor_thd_mask              (0x00FF8000)
#define  H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_cap2_highest_water_level_mask      (0x000001FF)
#define  H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_cap2_monitor_en(data)              (0x80000000&((data)<<31))
#define  H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_cap2_monitor_conti(data)           (0x40000000&((data)<<30))
#define  H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_cap2_reach_thd(data)               (0x01000000&((data)<<24))
#define  H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_cap2_monitor_thd(data)             (0x00FF8000&((data)<<15))
#define  H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_cap2_highest_water_level(data)     (0x000001FF&(data))
#define  H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_get_cap2_monitor_en(data)          ((0x80000000&(data))>>31)
#define  H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_get_cap2_monitor_conti(data)       ((0x40000000&(data))>>30)
#define  H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_get_cap2_reach_thd(data)           ((0x01000000&(data))>>24)
#define  H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_get_cap2_monitor_thd(data)         ((0x00FF8000&(data))>>15)
#define  H3DDMA_CAP2_CTI_DMA_WR_Water_Monitor_get_cap2_highest_water_level(data) (0x000001FF&(data))

#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_0                                  0x18025D20
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_0_reg_addr                          "0xB8025D20"
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_0_reg                               0xB8025D20
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_0_inst_addr                         "0x006D"
#define  set_H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_0_reg(data)                     (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_0_reg)=data)
#define  get_H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_0_reg                           (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_0_reg))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_0_cap2_sta_addr_0_shift             (4)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_0_cap2_sta_addr_0_mask              (0xFFFFFFF0)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_0_cap2_sta_addr_0(data)             (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_0_get_cap2_sta_addr_0(data)         ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_1                                  0x18025D24
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_1_reg_addr                          "0xB8025D24"
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_1_reg                               0xB8025D24
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_1_inst_addr                         "0x006E"
#define  set_H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_1_reg(data)                     (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_1_reg)=data)
#define  get_H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_1_reg                           (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_1_reg))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_1_cap2_sta_addr_1_shift             (4)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_1_cap2_sta_addr_1_mask              (0xFFFFFFF0)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_1_cap2_sta_addr_1(data)             (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_1_get_cap2_sta_addr_1(data)         ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_2                                  0x18025D28
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_2_reg_addr                          "0xB8025D28"
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_2_reg                               0xB8025D28
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_2_inst_addr                         "0x006F"
#define  set_H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_2_reg(data)                     (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_2_reg)=data)
#define  get_H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_2_reg                           (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_2_reg))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_2_cap2_sta_addr_2_shift             (4)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_2_cap2_sta_addr_2_mask              (0xFFFFFFF0)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_2_cap2_sta_addr_2(data)             (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_2_get_cap2_sta_addr_2(data)         ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_3                                  0x18025D2C
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_3_reg_addr                          "0xB8025D2C"
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_3_reg                               0xB8025D2C
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_3_inst_addr                         "0x0070"
#define  set_H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_3_reg(data)                     (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_3_reg)=data)
#define  get_H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_3_reg                           (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_3_reg))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_3_cap2_sta_addr_3_shift             (4)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_3_cap2_sta_addr_3_mask              (0xFFFFFFF0)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_3_cap2_sta_addr_3(data)             (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_3_get_cap2_sta_addr_3(data)         ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r0                                 0x18025D30
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r0_reg_addr                         "0xB8025D30"
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r0_reg                              0xB8025D30
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r0_inst_addr                        "0x0071"
#define  set_H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r0_reg(data)                    (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r0_reg)=data)
#define  get_H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r0_reg                          (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r0_reg))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r0_cap2_sta_addr_r0_shift           (4)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r0_cap2_sta_addr_r0_mask            (0xFFFFFFF0)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r0_cap2_sta_addr_r0(data)           (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r0_get_cap2_sta_addr_r0(data)       ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r1                                 0x18025D34
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r1_reg_addr                         "0xB8025D34"
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r1_reg                              0xB8025D34
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r1_inst_addr                        "0x0072"
#define  set_H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r1_reg(data)                    (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r1_reg)=data)
#define  get_H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r1_reg                          (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r1_reg))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r1_cap2_sta_addr_r1_shift           (4)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r1_cap2_sta_addr_r1_mask            (0xFFFFFFF0)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r1_cap2_sta_addr_r1(data)           (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r1_get_cap2_sta_addr_r1(data)       ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r2                                 0x18025D38
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r2_reg_addr                         "0xB8025D38"
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r2_reg                              0xB8025D38
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r2_inst_addr                        "0x0073"
#define  set_H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r2_reg(data)                    (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r2_reg)=data)
#define  get_H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r2_reg                          (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r2_reg))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r2_cap2_sta_addr_r2_shift           (4)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r2_cap2_sta_addr_r2_mask            (0xFFFFFFF0)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r2_cap2_sta_addr_r2(data)           (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r2_get_cap2_sta_addr_r2(data)       ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r3                                 0x18025D3C
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r3_reg_addr                         "0xB8025D3C"
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r3_reg                              0xB8025D3C
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r3_inst_addr                        "0x0074"
#define  set_H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r3_reg(data)                    (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r3_reg)=data)
#define  get_H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r3_reg                          (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r3_reg))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r3_cap2_sta_addr_r3_shift           (4)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r3_cap2_sta_addr_r3_mask            (0xFFFFFFF0)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r3_cap2_sta_addr_r3(data)           (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_addr_r3_get_cap2_sta_addr_r3(data)       ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_line_step                               0x18025D40
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_line_step_reg_addr                       "0xB8025D40"
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_line_step_reg                            0xB8025D40
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_line_step_inst_addr                      "0x0075"
#define  set_H3DDMA_CAP2_WR_DMA_num_bl_wrap_line_step_reg(data)                  (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_line_step_reg)=data)
#define  get_H3DDMA_CAP2_WR_DMA_num_bl_wrap_line_step_reg                        (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_line_step_reg))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_line_step_cap2_line_step_shift           (4)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_line_step_cap2_line_step_mask            (0xFFFFFFF0)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_line_step_cap2_line_step(data)           (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_line_step_get_cap2_line_step(data)       ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_ctl                                     0x18025D44
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_ctl_reg_addr                             "0xB8025D44"
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_ctl_reg                                  0xB8025D44
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_ctl_inst_addr                            "0x0076"
#define  set_H3DDMA_CAP2_WR_DMA_num_bl_wrap_ctl_reg(data)                        (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_ctl_reg)=data)
#define  get_H3DDMA_CAP2_WR_DMA_num_bl_wrap_ctl_reg                              (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_ctl_reg))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_ctl_cap2_line_num_shift                  (16)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_ctl_cap2_burst_len_shift                 (4)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_ctl_cap2_line_num_mask                   (0x0FFF0000)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_ctl_cap2_burst_len_mask                  (0x000007F0)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_ctl_cap2_line_num(data)                  (0x0FFF0000&((data)<<16))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_ctl_cap2_burst_len(data)                 (0x000007F0&((data)<<4))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_ctl_get_cap2_line_num(data)              ((0x0FFF0000&(data))>>16)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_ctl_get_cap2_burst_len(data)             ((0x000007F0&(data))>>4)

#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_rolling                                 0x18025D48
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_rolling_reg_addr                         "0xB8025D48"
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_rolling_reg                              0xB8025D48
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_rolling_inst_addr                        "0x0077"
#define  set_H3DDMA_CAP2_WR_DMA_num_bl_wrap_rolling_reg(data)                    (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_rolling_reg)=data)
#define  get_H3DDMA_CAP2_WR_DMA_num_bl_wrap_rolling_reg                          (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_rolling_reg))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_rolling_cap2_rolling_enable_shift        (31)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_rolling_cap2_rolling_space_shift         (16)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_rolling_cap2_rolling_num_shift           (0)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_rolling_cap2_rolling_enable_mask         (0x80000000)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_rolling_cap2_rolling_space_mask          (0x0FFF0000)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_rolling_cap2_rolling_num_mask            (0x00000FFF)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_rolling_cap2_rolling_enable(data)        (0x80000000&((data)<<31))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_rolling_cap2_rolling_space(data)         (0x0FFF0000&((data)<<16))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_rolling_cap2_rolling_num(data)           (0x00000FFF&(data))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_rolling_get_cap2_rolling_enable(data)    ((0x80000000&(data))>>31)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_rolling_get_cap2_rolling_space(data)     ((0x0FFF0000&(data))>>16)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_rolling_get_cap2_rolling_num(data)       (0x00000FFF&(data))

#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_word                                    0x18025D4C
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_word_reg_addr                            "0xB8025D4C"
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_word_reg                                 0xB8025D4C
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_word_inst_addr                           "0x0078"
#define  set_H3DDMA_CAP2_WR_DMA_num_bl_wrap_word_reg(data)                       (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_word_reg)=data)
#define  get_H3DDMA_CAP2_WR_DMA_num_bl_wrap_word_reg                             (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_word_reg))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_word_cap2_addr_toggle_mode_shift         (28)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_word_cap2_line_burst_num_shift           (0)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_word_cap2_addr_toggle_mode_mask          (0x30000000)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_word_cap2_line_burst_num_mask            (0x007FFFFF)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_word_cap2_addr_toggle_mode(data)         (0x30000000&((data)<<28))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_word_cap2_line_burst_num(data)           (0x007FFFFF&(data))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_word_get_cap2_addr_toggle_mode(data)     ((0x30000000&(data))>>28)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_word_get_cap2_line_burst_num(data)       (0x007FFFFF&(data))

#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st1                                     0x18025D50
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st1_reg_addr                             "0xB8025D50"
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st1_reg                                  0xB8025D50
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st1_inst_addr                            "0x0079"
#define  set_H3DDMA_CAP2_WR_DMA_num_bl_wrap_st1_reg(data)                        (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_st1_reg)=data)
#define  get_H3DDMA_CAP2_WR_DMA_num_bl_wrap_st1_reg                              (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_st1_reg))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st1_cap2_remain_setting_shift            (31)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st1_cap2_finish_status_shift             (28)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st1_cap2_remain_burst_num_shift          (0)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st1_cap2_remain_setting_mask             (0x80000000)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st1_cap2_finish_status_mask              (0x30000000)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st1_cap2_remain_burst_num_mask           (0x007FFFFF)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st1_cap2_remain_setting(data)            (0x80000000&((data)<<31))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st1_cap2_finish_status(data)             (0x30000000&((data)<<28))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st1_cap2_remain_burst_num(data)          (0x007FFFFF&(data))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st1_get_cap2_remain_setting(data)        ((0x80000000&(data))>>31)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st1_get_cap2_finish_status(data)         ((0x30000000&(data))>>28)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st1_get_cap2_remain_burst_num(data)      (0x007FFFFF&(data))

#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st2                                     0x18025D54
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st2_reg_addr                             "0xB8025D54"
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st2_reg                                  0xB8025D54
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st2_inst_addr                            "0x007A"
#define  set_H3DDMA_CAP2_WR_DMA_num_bl_wrap_st2_reg(data)                        (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_st2_reg)=data)
#define  get_H3DDMA_CAP2_WR_DMA_num_bl_wrap_st2_reg                              (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_num_bl_wrap_st2_reg))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st2_cap2_soft_rst_before_finish_shift    (31)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st2_cap2_remain_line_num_shift           (16)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st2_cap2_soft_rst_before_finish_mask     (0x80000000)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st2_cap2_remain_line_num_mask            (0x0FFF0000)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st2_cap2_soft_rst_before_finish(data)    (0x80000000&((data)<<31))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st2_cap2_remain_line_num(data)           (0x0FFF0000&((data)<<16))
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st2_get_cap2_soft_rst_before_finish(data) ((0x80000000&(data))>>31)
#define  H3DDMA_CAP2_WR_DMA_num_bl_wrap_st2_get_cap2_remain_line_num(data)       ((0x0FFF0000&(data))>>16)

#define  H3DDMA_CAP2_WR_DMA_pxltobus                                            0x18025D58
#define  H3DDMA_CAP2_WR_DMA_pxltobus_reg_addr                                    "0xB8025D58"
#define  H3DDMA_CAP2_WR_DMA_pxltobus_reg                                         0xB8025D58
#define  H3DDMA_CAP2_WR_DMA_pxltobus_inst_addr                                   "0x007B"
#define  set_H3DDMA_CAP2_WR_DMA_pxltobus_reg(data)                               (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_pxltobus_reg)=data)
#define  get_H3DDMA_CAP2_WR_DMA_pxltobus_reg                                     (*((volatile unsigned int*)H3DDMA_CAP2_WR_DMA_pxltobus_reg))
#define  H3DDMA_CAP2_WR_DMA_pxltobus_cap2_bit_sel_shift                          (2)
#define  H3DDMA_CAP2_WR_DMA_pxltobus_cap2_pixel_encoding_shift                   (0)
#define  H3DDMA_CAP2_WR_DMA_pxltobus_cap2_bit_sel_mask                           (0x0000000C)
#define  H3DDMA_CAP2_WR_DMA_pxltobus_cap2_pixel_encoding_mask                    (0x00000003)
#define  H3DDMA_CAP2_WR_DMA_pxltobus_cap2_bit_sel(data)                          (0x0000000C&((data)<<2))
#define  H3DDMA_CAP2_WR_DMA_pxltobus_cap2_pixel_encoding(data)                   (0x00000003&(data))
#define  H3DDMA_CAP2_WR_DMA_pxltobus_get_cap2_bit_sel(data)                      ((0x0000000C&(data))>>2)
#define  H3DDMA_CAP2_WR_DMA_pxltobus_get_cap2_pixel_encoding(data)               (0x00000003&(data))

#define  H3DDMA_CAP2_Cap_L_Start_db                                             0x18025D60
#define  H3DDMA_CAP2_Cap_L_Start_db_reg_addr                                     "0xB8025D60"
#define  H3DDMA_CAP2_Cap_L_Start_db_reg                                          0xB8025D60
#define  H3DDMA_CAP2_Cap_L_Start_db_inst_addr                                    "0x007C"
#define  set_H3DDMA_CAP2_Cap_L_Start_db_reg(data)                                (*((volatile unsigned int*)H3DDMA_CAP2_Cap_L_Start_db_reg)=data)
#define  get_H3DDMA_CAP2_Cap_L_Start_db_reg                                      (*((volatile unsigned int*)H3DDMA_CAP2_Cap_L_Start_db_reg))
#define  H3DDMA_CAP2_Cap_L_Start_db_cap2_sta_addr_db_shift                       (3)
#define  H3DDMA_CAP2_Cap_L_Start_db_cap2_sta_addr_db_mask                        (0xFFFFFFF8)
#define  H3DDMA_CAP2_Cap_L_Start_db_cap2_sta_addr_db(data)                       (0xFFFFFFF8&((data)<<3))
#define  H3DDMA_CAP2_Cap_L_Start_db_get_cap2_sta_addr_db(data)                   ((0xFFFFFFF8&(data))>>3)

#define  H3DDMA_CAP2_Cap_R_Start_db                                             0x18025D64
#define  H3DDMA_CAP2_Cap_R_Start_db_reg_addr                                     "0xB8025D64"
#define  H3DDMA_CAP2_Cap_R_Start_db_reg                                          0xB8025D64
#define  H3DDMA_CAP2_Cap_R_Start_db_inst_addr                                    "0x007D"
#define  set_H3DDMA_CAP2_Cap_R_Start_db_reg(data)                                (*((volatile unsigned int*)H3DDMA_CAP2_Cap_R_Start_db_reg)=data)
#define  get_H3DDMA_CAP2_Cap_R_Start_db_reg                                      (*((volatile unsigned int*)H3DDMA_CAP2_Cap_R_Start_db_reg))
#define  H3DDMA_CAP2_Cap_R_Start_db_cap2_sta_addr_r_db_shift                     (3)
#define  H3DDMA_CAP2_Cap_R_Start_db_cap2_sta_addr_r_db_mask                      (0xFFFFFFF8)
#define  H3DDMA_CAP2_Cap_R_Start_db_cap2_sta_addr_r_db(data)                     (0xFFFFFFF8&((data)<<3))
#define  H3DDMA_CAP2_Cap_R_Start_db_get_cap2_sta_addr_r_db(data)                 ((0xFFFFFFF8&(data))>>3)

#define  H3DDMA_CAP2_Cap_Status                                                 0x18025D68
#define  H3DDMA_CAP2_Cap_Status_reg_addr                                         "0xB8025D68"
#define  H3DDMA_CAP2_Cap_Status_reg                                              0xB8025D68
#define  H3DDMA_CAP2_Cap_Status_inst_addr                                        "0x007E"
#define  set_H3DDMA_CAP2_Cap_Status_reg(data)                                    (*((volatile unsigned int*)H3DDMA_CAP2_Cap_Status_reg)=data)
#define  get_H3DDMA_CAP2_Cap_Status_reg                                          (*((volatile unsigned int*)H3DDMA_CAP2_Cap_Status_reg))
#define  H3DDMA_CAP2_Cap_Status_cap2_freeze_ok_shift                             (8)
#define  H3DDMA_CAP2_Cap_Status_cap2_cap_block_sel_shift                         (4)
#define  H3DDMA_CAP2_Cap_Status_cap2_cap_last_wr_flag_shift                      (3)
#define  H3DDMA_CAP2_Cap_Status_cap2_cap_over_size_shift                         (2)
#define  H3DDMA_CAP2_Cap_Status_cap2_cap_under_size_shift                        (1)
#define  H3DDMA_CAP2_Cap_Status_cap2_cap_fifo_overflow_shift                     (0)
#define  H3DDMA_CAP2_Cap_Status_cap2_freeze_ok_mask                              (0x00000100)
#define  H3DDMA_CAP2_Cap_Status_cap2_cap_block_sel_mask                          (0x00000030)
#define  H3DDMA_CAP2_Cap_Status_cap2_cap_last_wr_flag_mask                       (0x00000008)
#define  H3DDMA_CAP2_Cap_Status_cap2_cap_over_size_mask                          (0x00000004)
#define  H3DDMA_CAP2_Cap_Status_cap2_cap_under_size_mask                         (0x00000002)
#define  H3DDMA_CAP2_Cap_Status_cap2_cap_fifo_overflow_mask                      (0x00000001)
#define  H3DDMA_CAP2_Cap_Status_cap2_freeze_ok(data)                             (0x00000100&((data)<<8))
#define  H3DDMA_CAP2_Cap_Status_cap2_cap_block_sel(data)                         (0x00000030&((data)<<4))
#define  H3DDMA_CAP2_Cap_Status_cap2_cap_last_wr_flag(data)                      (0x00000008&((data)<<3))
#define  H3DDMA_CAP2_Cap_Status_cap2_cap_over_size(data)                         (0x00000004&((data)<<2))
#define  H3DDMA_CAP2_Cap_Status_cap2_cap_under_size(data)                        (0x00000002&((data)<<1))
#define  H3DDMA_CAP2_Cap_Status_cap2_cap_fifo_overflow(data)                     (0x00000001&(data))
#define  H3DDMA_CAP2_Cap_Status_get_cap2_freeze_ok(data)                         ((0x00000100&(data))>>8)
#define  H3DDMA_CAP2_Cap_Status_get_cap2_cap_block_sel(data)                     ((0x00000030&(data))>>4)
#define  H3DDMA_CAP2_Cap_Status_get_cap2_cap_last_wr_flag(data)                  ((0x00000008&(data))>>3)
#define  H3DDMA_CAP2_Cap_Status_get_cap2_cap_over_size(data)                     ((0x00000004&(data))>>2)
#define  H3DDMA_CAP2_Cap_Status_get_cap2_cap_under_size(data)                    ((0x00000002&(data))>>1)
#define  H3DDMA_CAP2_Cap_Status_get_cap2_cap_fifo_overflow(data)                 (0x00000001&(data))

#define  H3DDMA_CAP3_Cap_CTL0                                                   0x18025D80
#define  H3DDMA_CAP3_Cap_CTL0_reg_addr                                           "0xB8025D80"
#define  H3DDMA_CAP3_Cap_CTL0_reg                                                0xB8025D80
#define  H3DDMA_CAP3_Cap_CTL0_inst_addr                                          "0x007F"
#define  set_H3DDMA_CAP3_Cap_CTL0_reg(data)                                      (*((volatile unsigned int*)H3DDMA_CAP3_Cap_CTL0_reg)=data)
#define  get_H3DDMA_CAP3_Cap_CTL0_reg                                            (*((volatile unsigned int*)H3DDMA_CAP3_Cap_CTL0_reg))
#define  H3DDMA_CAP3_Cap_CTL0_cap3_triple_buf_en_shift                           (31)
#define  H3DDMA_CAP3_Cap_CTL0_cap3_cap_block_fw_shift                            (29)
#define  H3DDMA_CAP3_Cap_CTL0_cap3_set_block_sel_shift                           (28)
#define  H3DDMA_CAP3_Cap_CTL0_cap3_quad_buf_en_shift                             (27)
#define  H3DDMA_CAP3_Cap_CTL0_cap3_freeze_en_shift                               (24)
#define  H3DDMA_CAP3_Cap_CTL0_cap3_auto_block_sel_en_shift                       (22)
#define  H3DDMA_CAP3_Cap_CTL0_cap3_frame_access_mode_shift                       (0)
#define  H3DDMA_CAP3_Cap_CTL0_cap3_triple_buf_en_mask                            (0x80000000)
#define  H3DDMA_CAP3_Cap_CTL0_cap3_cap_block_fw_mask                             (0x60000000)
#define  H3DDMA_CAP3_Cap_CTL0_cap3_set_block_sel_mask                            (0x10000000)
#define  H3DDMA_CAP3_Cap_CTL0_cap3_quad_buf_en_mask                              (0x08000000)
#define  H3DDMA_CAP3_Cap_CTL0_cap3_freeze_en_mask                                (0x01000000)
#define  H3DDMA_CAP3_Cap_CTL0_cap3_auto_block_sel_en_mask                        (0x00400000)
#define  H3DDMA_CAP3_Cap_CTL0_cap3_frame_access_mode_mask                        (0x00000001)
#define  H3DDMA_CAP3_Cap_CTL0_cap3_triple_buf_en(data)                           (0x80000000&((data)<<31))
#define  H3DDMA_CAP3_Cap_CTL0_cap3_cap_block_fw(data)                            (0x60000000&((data)<<29))
#define  H3DDMA_CAP3_Cap_CTL0_cap3_set_block_sel(data)                           (0x10000000&((data)<<28))
#define  H3DDMA_CAP3_Cap_CTL0_cap3_quad_buf_en(data)                             (0x08000000&((data)<<27))
#define  H3DDMA_CAP3_Cap_CTL0_cap3_freeze_en(data)                               (0x01000000&((data)<<24))
#define  H3DDMA_CAP3_Cap_CTL0_cap3_auto_block_sel_en(data)                       (0x00400000&((data)<<22))
#define  H3DDMA_CAP3_Cap_CTL0_cap3_frame_access_mode(data)                       (0x00000001&(data))
#define  H3DDMA_CAP3_Cap_CTL0_get_cap3_triple_buf_en(data)                       ((0x80000000&(data))>>31)
#define  H3DDMA_CAP3_Cap_CTL0_get_cap3_cap_block_fw(data)                        ((0x60000000&(data))>>29)
#define  H3DDMA_CAP3_Cap_CTL0_get_cap3_set_block_sel(data)                       ((0x10000000&(data))>>28)
#define  H3DDMA_CAP3_Cap_CTL0_get_cap3_quad_buf_en(data)                         ((0x08000000&(data))>>27)
#define  H3DDMA_CAP3_Cap_CTL0_get_cap3_freeze_en(data)                           ((0x01000000&(data))>>24)
#define  H3DDMA_CAP3_Cap_CTL0_get_cap3_auto_block_sel_en(data)                   ((0x00400000&(data))>>22)
#define  H3DDMA_CAP3_Cap_CTL0_get_cap3_frame_access_mode(data)                   (0x00000001&(data))

#define  H3DDMA_CAP3_CTI_DMA_WR_Rule_check_up                                   0x18025D84
#define  H3DDMA_CAP3_CTI_DMA_WR_Rule_check_up_reg_addr                           "0xB8025D84"
#define  H3DDMA_CAP3_CTI_DMA_WR_Rule_check_up_reg                                0xB8025D84
#define  H3DDMA_CAP3_CTI_DMA_WR_Rule_check_up_inst_addr                          "0x0080"
#define  set_H3DDMA_CAP3_CTI_DMA_WR_Rule_check_up_reg(data)                      (*((volatile unsigned int*)H3DDMA_CAP3_CTI_DMA_WR_Rule_check_up_reg)=data)
#define  get_H3DDMA_CAP3_CTI_DMA_WR_Rule_check_up_reg                            (*((volatile unsigned int*)H3DDMA_CAP3_CTI_DMA_WR_Rule_check_up_reg))
#define  H3DDMA_CAP3_CTI_DMA_WR_Rule_check_up_cap3_dma_up_limit_shift            (4)
#define  H3DDMA_CAP3_CTI_DMA_WR_Rule_check_up_cap3_dma_up_limit_mask             (0xFFFFFFF0)
#define  H3DDMA_CAP3_CTI_DMA_WR_Rule_check_up_cap3_dma_up_limit(data)            (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP3_CTI_DMA_WR_Rule_check_up_get_cap3_dma_up_limit(data)        ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP3_CTI_DMA_WR_Rule_check_low                                  0x18025D88
#define  H3DDMA_CAP3_CTI_DMA_WR_Rule_check_low_reg_addr                          "0xB8025D88"
#define  H3DDMA_CAP3_CTI_DMA_WR_Rule_check_low_reg                               0xB8025D88
#define  H3DDMA_CAP3_CTI_DMA_WR_Rule_check_low_inst_addr                         "0x0081"
#define  set_H3DDMA_CAP3_CTI_DMA_WR_Rule_check_low_reg(data)                     (*((volatile unsigned int*)H3DDMA_CAP3_CTI_DMA_WR_Rule_check_low_reg)=data)
#define  get_H3DDMA_CAP3_CTI_DMA_WR_Rule_check_low_reg                           (*((volatile unsigned int*)H3DDMA_CAP3_CTI_DMA_WR_Rule_check_low_reg))
#define  H3DDMA_CAP3_CTI_DMA_WR_Rule_check_low_cap3_dma_low_limit_shift          (4)
#define  H3DDMA_CAP3_CTI_DMA_WR_Rule_check_low_cap3_dma_low_limit_mask           (0xFFFFFFF0)
#define  H3DDMA_CAP3_CTI_DMA_WR_Rule_check_low_cap3_dma_low_limit(data)          (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP3_CTI_DMA_WR_Rule_check_low_get_cap3_dma_low_limit(data)      ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl                                            0x18025D8C
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_reg_addr                                    "0xB8025D8C"
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_reg                                         0xB8025D8C
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_inst_addr                                   "0x0082"
#define  set_H3DDMA_CAP3_CTI_DMA_WR_Ctrl_reg(data)                               (*((volatile unsigned int*)H3DDMA_CAP3_CTI_DMA_WR_Ctrl_reg)=data)
#define  get_H3DDMA_CAP3_CTI_DMA_WR_Ctrl_reg                                     (*((volatile unsigned int*)H3DDMA_CAP3_CTI_DMA_WR_Ctrl_reg))
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_cap3_dma_8byte_swap_shift                   (13)
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_cap3_dma_4byte_swap_shift                   (12)
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_cap3_dma_2byte_swap_shift                   (11)
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_cap3_dma_1byte_swap_shift                   (10)
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_cap3_max_outstanding_shift                  (8)
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_cap3_force_all_rst_shift                    (1)
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_cap3_dma_enable_shift                       (0)
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_cap3_dma_8byte_swap_mask                    (0x00002000)
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_cap3_dma_4byte_swap_mask                    (0x00001000)
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_cap3_dma_2byte_swap_mask                    (0x00000800)
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_cap3_dma_1byte_swap_mask                    (0x00000400)
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_cap3_max_outstanding_mask                   (0x00000300)
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_cap3_force_all_rst_mask                     (0x00000002)
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_cap3_dma_enable_mask                        (0x00000001)
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_cap3_dma_8byte_swap(data)                   (0x00002000&((data)<<13))
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_cap3_dma_4byte_swap(data)                   (0x00001000&((data)<<12))
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_cap3_dma_2byte_swap(data)                   (0x00000800&((data)<<11))
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_cap3_dma_1byte_swap(data)                   (0x00000400&((data)<<10))
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_cap3_max_outstanding(data)                  (0x00000300&((data)<<8))
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_cap3_force_all_rst(data)                    (0x00000002&((data)<<1))
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_cap3_dma_enable(data)                       (0x00000001&(data))
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_get_cap3_dma_8byte_swap(data)               ((0x00002000&(data))>>13)
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_get_cap3_dma_4byte_swap(data)               ((0x00001000&(data))>>12)
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_get_cap3_dma_2byte_swap(data)               ((0x00000800&(data))>>11)
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_get_cap3_dma_1byte_swap(data)               ((0x00000400&(data))>>10)
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_get_cap3_max_outstanding(data)              ((0x00000300&(data))>>8)
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_get_cap3_force_all_rst(data)                ((0x00000002&(data))>>1)
#define  H3DDMA_CAP3_CTI_DMA_WR_Ctrl_get_cap3_dma_enable(data)                   (0x00000001&(data))

#define  H3DDMA_CAP3_CTI_DMA_WR_status                                          0x18025D90
#define  H3DDMA_CAP3_CTI_DMA_WR_status_reg_addr                                  "0xB8025D90"
#define  H3DDMA_CAP3_CTI_DMA_WR_status_reg                                       0xB8025D90
#define  H3DDMA_CAP3_CTI_DMA_WR_status_inst_addr                                 "0x0083"
#define  set_H3DDMA_CAP3_CTI_DMA_WR_status_reg(data)                             (*((volatile unsigned int*)H3DDMA_CAP3_CTI_DMA_WR_status_reg)=data)
#define  get_H3DDMA_CAP3_CTI_DMA_WR_status_reg                                   (*((volatile unsigned int*)H3DDMA_CAP3_CTI_DMA_WR_status_reg))
#define  H3DDMA_CAP3_CTI_DMA_WR_status_cap3_dma_cmd_water_shift                  (28)
#define  H3DDMA_CAP3_CTI_DMA_WR_status_cap3_dma_data_water_shift                 (16)
#define  H3DDMA_CAP3_CTI_DMA_WR_status_cap3_cur_outstanding_shift                (8)
#define  H3DDMA_CAP3_CTI_DMA_WR_status_cap3_soft_rst_before_cmd_finish_shift     (4)
#define  H3DDMA_CAP3_CTI_DMA_WR_status_cap3_soft_rst_with_data_left_shift        (3)
#define  H3DDMA_CAP3_CTI_DMA_WR_status_cap3_data_fifo_underflow_err_shift        (2)
#define  H3DDMA_CAP3_CTI_DMA_WR_status_cap3_exceed_range_err_shift               (1)
#define  H3DDMA_CAP3_CTI_DMA_WR_status_cap3_zero_length_err_shift                (0)
#define  H3DDMA_CAP3_CTI_DMA_WR_status_cap3_dma_cmd_water_mask                   (0x70000000)
#define  H3DDMA_CAP3_CTI_DMA_WR_status_cap3_dma_data_water_mask                  (0x003F0000)
#define  H3DDMA_CAP3_CTI_DMA_WR_status_cap3_cur_outstanding_mask                 (0x00000700)
#define  H3DDMA_CAP3_CTI_DMA_WR_status_cap3_soft_rst_before_cmd_finish_mask      (0x00000010)
#define  H3DDMA_CAP3_CTI_DMA_WR_status_cap3_soft_rst_with_data_left_mask         (0x00000008)
#define  H3DDMA_CAP3_CTI_DMA_WR_status_cap3_data_fifo_underflow_err_mask         (0x00000004)
#define  H3DDMA_CAP3_CTI_DMA_WR_status_cap3_exceed_range_err_mask                (0x00000002)
#define  H3DDMA_CAP3_CTI_DMA_WR_status_cap3_zero_length_err_mask                 (0x00000001)
#define  H3DDMA_CAP3_CTI_DMA_WR_status_cap3_dma_cmd_water(data)                  (0x70000000&((data)<<28))
#define  H3DDMA_CAP3_CTI_DMA_WR_status_cap3_dma_data_water(data)                 (0x003F0000&((data)<<16))
#define  H3DDMA_CAP3_CTI_DMA_WR_status_cap3_cur_outstanding(data)                (0x00000700&((data)<<8))
#define  H3DDMA_CAP3_CTI_DMA_WR_status_cap3_soft_rst_before_cmd_finish(data)     (0x00000010&((data)<<4))
#define  H3DDMA_CAP3_CTI_DMA_WR_status_cap3_soft_rst_with_data_left(data)        (0x00000008&((data)<<3))
#define  H3DDMA_CAP3_CTI_DMA_WR_status_cap3_data_fifo_underflow_err(data)        (0x00000004&((data)<<2))
#define  H3DDMA_CAP3_CTI_DMA_WR_status_cap3_exceed_range_err(data)               (0x00000002&((data)<<1))
#define  H3DDMA_CAP3_CTI_DMA_WR_status_cap3_zero_length_err(data)                (0x00000001&(data))
#define  H3DDMA_CAP3_CTI_DMA_WR_status_get_cap3_dma_cmd_water(data)              ((0x70000000&(data))>>28)
#define  H3DDMA_CAP3_CTI_DMA_WR_status_get_cap3_dma_data_water(data)             ((0x003F0000&(data))>>16)
#define  H3DDMA_CAP3_CTI_DMA_WR_status_get_cap3_cur_outstanding(data)            ((0x00000700&(data))>>8)
#define  H3DDMA_CAP3_CTI_DMA_WR_status_get_cap3_soft_rst_before_cmd_finish(data) ((0x00000010&(data))>>4)
#define  H3DDMA_CAP3_CTI_DMA_WR_status_get_cap3_soft_rst_with_data_left(data)    ((0x00000008&(data))>>3)
#define  H3DDMA_CAP3_CTI_DMA_WR_status_get_cap3_data_fifo_underflow_err(data)    ((0x00000004&(data))>>2)
#define  H3DDMA_CAP3_CTI_DMA_WR_status_get_cap3_exceed_range_err(data)           ((0x00000002&(data))>>1)
#define  H3DDMA_CAP3_CTI_DMA_WR_status_get_cap3_zero_length_err(data)            (0x00000001&(data))

#define  H3DDMA_CAP3_CTI_DMA_WR_status1                                         0x18025D94
#define  H3DDMA_CAP3_CTI_DMA_WR_status1_reg_addr                                 "0xB8025D94"
#define  H3DDMA_CAP3_CTI_DMA_WR_status1_reg                                      0xB8025D94
#define  H3DDMA_CAP3_CTI_DMA_WR_status1_inst_addr                                "0x0084"
#define  set_H3DDMA_CAP3_CTI_DMA_WR_status1_reg(data)                            (*((volatile unsigned int*)H3DDMA_CAP3_CTI_DMA_WR_status1_reg)=data)
#define  get_H3DDMA_CAP3_CTI_DMA_WR_status1_reg                                  (*((volatile unsigned int*)H3DDMA_CAP3_CTI_DMA_WR_status1_reg))
#define  H3DDMA_CAP3_CTI_DMA_WR_status1_cap3_ack_num_error_shift                 (31)
#define  H3DDMA_CAP3_CTI_DMA_WR_status1_cap3_last_no_ack_error_shift             (30)
#define  H3DDMA_CAP3_CTI_DMA_WR_status1_cap3_target_ack_num_shift                (16)
#define  H3DDMA_CAP3_CTI_DMA_WR_status1_cap3_last_ack_num_shift                  (8)
#define  H3DDMA_CAP3_CTI_DMA_WR_status1_cap3_selected_bl_shift                   (0)
#define  H3DDMA_CAP3_CTI_DMA_WR_status1_cap3_ack_num_error_mask                  (0x80000000)
#define  H3DDMA_CAP3_CTI_DMA_WR_status1_cap3_last_no_ack_error_mask              (0x40000000)
#define  H3DDMA_CAP3_CTI_DMA_WR_status1_cap3_target_ack_num_mask                 (0x007F0000)
#define  H3DDMA_CAP3_CTI_DMA_WR_status1_cap3_last_ack_num_mask                   (0x00007F00)
#define  H3DDMA_CAP3_CTI_DMA_WR_status1_cap3_selected_bl_mask                    (0x0000003F)
#define  H3DDMA_CAP3_CTI_DMA_WR_status1_cap3_ack_num_error(data)                 (0x80000000&((data)<<31))
#define  H3DDMA_CAP3_CTI_DMA_WR_status1_cap3_last_no_ack_error(data)             (0x40000000&((data)<<30))
#define  H3DDMA_CAP3_CTI_DMA_WR_status1_cap3_target_ack_num(data)                (0x007F0000&((data)<<16))
#define  H3DDMA_CAP3_CTI_DMA_WR_status1_cap3_last_ack_num(data)                  (0x00007F00&((data)<<8))
#define  H3DDMA_CAP3_CTI_DMA_WR_status1_cap3_selected_bl(data)                   (0x0000003F&(data))
#define  H3DDMA_CAP3_CTI_DMA_WR_status1_get_cap3_ack_num_error(data)             ((0x80000000&(data))>>31)
#define  H3DDMA_CAP3_CTI_DMA_WR_status1_get_cap3_last_no_ack_error(data)         ((0x40000000&(data))>>30)
#define  H3DDMA_CAP3_CTI_DMA_WR_status1_get_cap3_target_ack_num(data)            ((0x007F0000&(data))>>16)
#define  H3DDMA_CAP3_CTI_DMA_WR_status1_get_cap3_last_ack_num(data)              ((0x00007F00&(data))>>8)
#define  H3DDMA_CAP3_CTI_DMA_WR_status1_get_cap3_selected_bl(data)               (0x0000003F&(data))

#define  H3DDMA_CAP3_CTI_DMA_WR_status2                                         0x18025D98
#define  H3DDMA_CAP3_CTI_DMA_WR_status2_reg_addr                                 "0xB8025D98"
#define  H3DDMA_CAP3_CTI_DMA_WR_status2_reg                                      0xB8025D98
#define  H3DDMA_CAP3_CTI_DMA_WR_status2_inst_addr                                "0x0085"
#define  set_H3DDMA_CAP3_CTI_DMA_WR_status2_reg(data)                            (*((volatile unsigned int*)H3DDMA_CAP3_CTI_DMA_WR_status2_reg)=data)
#define  get_H3DDMA_CAP3_CTI_DMA_WR_status2_reg                                  (*((volatile unsigned int*)H3DDMA_CAP3_CTI_DMA_WR_status2_reg))
#define  H3DDMA_CAP3_CTI_DMA_WR_status2_cap3_selected_addr_shift                 (5)
#define  H3DDMA_CAP3_CTI_DMA_WR_status2_cap3_addr_bl_sel_shift                   (0)
#define  H3DDMA_CAP3_CTI_DMA_WR_status2_cap3_selected_addr_mask                  (0xFFFFFFE0)
#define  H3DDMA_CAP3_CTI_DMA_WR_status2_cap3_addr_bl_sel_mask                    (0x00000003)
#define  H3DDMA_CAP3_CTI_DMA_WR_status2_cap3_selected_addr(data)                 (0xFFFFFFE0&((data)<<5))
#define  H3DDMA_CAP3_CTI_DMA_WR_status2_cap3_addr_bl_sel(data)                   (0x00000003&(data))
#define  H3DDMA_CAP3_CTI_DMA_WR_status2_get_cap3_selected_addr(data)             ((0xFFFFFFE0&(data))>>5)
#define  H3DDMA_CAP3_CTI_DMA_WR_status2_get_cap3_addr_bl_sel(data)               (0x00000003&(data))

#define  H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor                                   0x18025D9C
#define  H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_reg_addr                           "0xB8025D9C"
#define  H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_reg                                0xB8025D9C
#define  H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_inst_addr                          "0x0086"
#define  set_H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_reg(data)                      (*((volatile unsigned int*)H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_reg)=data)
#define  get_H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_reg                            (*((volatile unsigned int*)H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_reg))
#define  H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_cap3_monitor_en_shift              (31)
#define  H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_cap3_monitor_conti_shift           (30)
#define  H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_cap3_reach_thd_shift               (24)
#define  H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_cap3_monitor_thd_shift             (18)
#define  H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_cap3_highest_water_level_shift     (0)
#define  H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_cap3_monitor_en_mask               (0x80000000)
#define  H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_cap3_monitor_conti_mask            (0x40000000)
#define  H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_cap3_reach_thd_mask                (0x01000000)
#define  H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_cap3_monitor_thd_mask              (0x00FC0000)
#define  H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_cap3_highest_water_level_mask      (0x0000003F)
#define  H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_cap3_monitor_en(data)              (0x80000000&((data)<<31))
#define  H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_cap3_monitor_conti(data)           (0x40000000&((data)<<30))
#define  H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_cap3_reach_thd(data)               (0x01000000&((data)<<24))
#define  H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_cap3_monitor_thd(data)             (0x00FC0000&((data)<<18))
#define  H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_cap3_highest_water_level(data)     (0x0000003F&(data))
#define  H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_get_cap3_monitor_en(data)          ((0x80000000&(data))>>31)
#define  H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_get_cap3_monitor_conti(data)       ((0x40000000&(data))>>30)
#define  H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_get_cap3_reach_thd(data)           ((0x01000000&(data))>>24)
#define  H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_get_cap3_monitor_thd(data)         ((0x00FC0000&(data))>>18)
#define  H3DDMA_CAP3_CTI_DMA_WR_Water_Monitor_get_cap3_highest_water_level(data) (0x0000003F&(data))

#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_0                                  0x18025DA0
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_0_reg_addr                          "0xB8025DA0"
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_0_reg                               0xB8025DA0
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_0_inst_addr                         "0x0087"
#define  set_H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_0_reg(data)                     (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_0_reg)=data)
#define  get_H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_0_reg                           (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_0_reg))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_0_cap3_sta_addr_0_shift             (4)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_0_cap3_sta_addr_0_mask              (0xFFFFFFF0)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_0_cap3_sta_addr_0(data)             (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_0_get_cap3_sta_addr_0(data)         ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_1                                  0x18025DA4
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_1_reg_addr                          "0xB8025DA4"
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_1_reg                               0xB8025DA4
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_1_inst_addr                         "0x0088"
#define  set_H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_1_reg(data)                     (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_1_reg)=data)
#define  get_H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_1_reg                           (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_1_reg))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_1_cap3_sta_addr_1_shift             (4)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_1_cap3_sta_addr_1_mask              (0xFFFFFFF0)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_1_cap3_sta_addr_1(data)             (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_1_get_cap3_sta_addr_1(data)         ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_2                                  0x18025DA8
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_2_reg_addr                          "0xB8025DA8"
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_2_reg                               0xB8025DA8
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_2_inst_addr                         "0x0089"
#define  set_H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_2_reg(data)                     (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_2_reg)=data)
#define  get_H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_2_reg                           (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_2_reg))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_2_cap3_sta_addr_2_shift             (4)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_2_cap3_sta_addr_2_mask              (0xFFFFFFF0)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_2_cap3_sta_addr_2(data)             (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_2_get_cap3_sta_addr_2(data)         ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_3                                  0x18025DAC
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_3_reg_addr                          "0xB8025DAC"
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_3_reg                               0xB8025DAC
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_3_inst_addr                         "0x008A"
#define  set_H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_3_reg(data)                     (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_3_reg)=data)
#define  get_H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_3_reg                           (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_3_reg))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_3_cap3_sta_addr_3_shift             (4)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_3_cap3_sta_addr_3_mask              (0xFFFFFFF0)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_3_cap3_sta_addr_3(data)             (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_3_get_cap3_sta_addr_3(data)         ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r0                                 0x18025DB0
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r0_reg_addr                         "0xB8025DB0"
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r0_reg                              0xB8025DB0
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r0_inst_addr                        "0x008B"
#define  set_H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r0_reg(data)                    (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r0_reg)=data)
#define  get_H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r0_reg                          (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r0_reg))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r0_cap3_sta_addr_r0_shift           (4)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r0_cap3_sta_addr_r0_mask            (0xFFFFFFF0)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r0_cap3_sta_addr_r0(data)           (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r0_get_cap3_sta_addr_r0(data)       ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r1                                 0x18025DB4
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r1_reg_addr                         "0xB8025DB4"
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r1_reg                              0xB8025DB4
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r1_inst_addr                        "0x008C"
#define  set_H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r1_reg(data)                    (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r1_reg)=data)
#define  get_H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r1_reg                          (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r1_reg))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r1_cap3_sta_addr_r1_shift           (4)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r1_cap3_sta_addr_r1_mask            (0xFFFFFFF0)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r1_cap3_sta_addr_r1(data)           (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r1_get_cap3_sta_addr_r1(data)       ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r2                                 0x18025DB8
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r2_reg_addr                         "0xB8025DB8"
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r2_reg                              0xB8025DB8
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r2_inst_addr                        "0x008D"
#define  set_H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r2_reg(data)                    (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r2_reg)=data)
#define  get_H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r2_reg                          (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r2_reg))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r2_cap3_sta_addr_r2_shift           (4)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r2_cap3_sta_addr_r2_mask            (0xFFFFFFF0)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r2_cap3_sta_addr_r2(data)           (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r2_get_cap3_sta_addr_r2(data)       ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r3                                 0x18025DBC
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r3_reg_addr                         "0xB8025DBC"
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r3_reg                              0xB8025DBC
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r3_inst_addr                        "0x008E"
#define  set_H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r3_reg(data)                    (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r3_reg)=data)
#define  get_H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r3_reg                          (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r3_reg))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r3_cap3_sta_addr_r3_shift           (4)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r3_cap3_sta_addr_r3_mask            (0xFFFFFFF0)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r3_cap3_sta_addr_r3(data)           (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_addr_r3_get_cap3_sta_addr_r3(data)       ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_line_step                               0x18025DC0
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_line_step_reg_addr                       "0xB8025DC0"
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_line_step_reg                            0xB8025DC0
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_line_step_inst_addr                      "0x008F"
#define  set_H3DDMA_CAP3_WR_DMA_num_bl_wrap_line_step_reg(data)                  (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_line_step_reg)=data)
#define  get_H3DDMA_CAP3_WR_DMA_num_bl_wrap_line_step_reg                        (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_line_step_reg))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_line_step_cap3_line_step_shift           (4)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_line_step_cap3_line_step_mask            (0xFFFFFFF0)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_line_step_cap3_line_step(data)           (0xFFFFFFF0&((data)<<4))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_line_step_get_cap3_line_step(data)       ((0xFFFFFFF0&(data))>>4)

#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_ctl                                     0x18025DC4
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_ctl_reg_addr                             "0xB8025DC4"
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_ctl_reg                                  0xB8025DC4
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_ctl_inst_addr                            "0x0090"
#define  set_H3DDMA_CAP3_WR_DMA_num_bl_wrap_ctl_reg(data)                        (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_ctl_reg)=data)
#define  get_H3DDMA_CAP3_WR_DMA_num_bl_wrap_ctl_reg                              (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_ctl_reg))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_ctl_cap3_line_num_shift                  (16)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_ctl_cap3_burst_len_shift                 (4)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_ctl_cap3_line_num_mask                   (0x0FFF0000)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_ctl_cap3_burst_len_mask                  (0x000007F0)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_ctl_cap3_line_num(data)                  (0x0FFF0000&((data)<<16))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_ctl_cap3_burst_len(data)                 (0x000007F0&((data)<<4))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_ctl_get_cap3_line_num(data)              ((0x0FFF0000&(data))>>16)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_ctl_get_cap3_burst_len(data)             ((0x000007F0&(data))>>4)

#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_rolling                                 0x18025DC8
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_rolling_reg_addr                         "0xB8025DC8"
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_rolling_reg                              0xB8025DC8
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_rolling_inst_addr                        "0x0091"
#define  set_H3DDMA_CAP3_WR_DMA_num_bl_wrap_rolling_reg(data)                    (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_rolling_reg)=data)
#define  get_H3DDMA_CAP3_WR_DMA_num_bl_wrap_rolling_reg                          (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_rolling_reg))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_rolling_cap3_rolling_enable_shift        (31)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_rolling_cap3_rolling_space_shift         (16)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_rolling_cap3_rolling_num_shift           (0)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_rolling_cap3_rolling_enable_mask         (0x80000000)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_rolling_cap3_rolling_space_mask          (0x0FFF0000)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_rolling_cap3_rolling_num_mask            (0x00000FFF)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_rolling_cap3_rolling_enable(data)        (0x80000000&((data)<<31))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_rolling_cap3_rolling_space(data)         (0x0FFF0000&((data)<<16))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_rolling_cap3_rolling_num(data)           (0x00000FFF&(data))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_rolling_get_cap3_rolling_enable(data)    ((0x80000000&(data))>>31)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_rolling_get_cap3_rolling_space(data)     ((0x0FFF0000&(data))>>16)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_rolling_get_cap3_rolling_num(data)       (0x00000FFF&(data))

#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_word                                    0x18025DCC
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_word_reg_addr                            "0xB8025DCC"
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_word_reg                                 0xB8025DCC
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_word_inst_addr                           "0x0092"
#define  set_H3DDMA_CAP3_WR_DMA_num_bl_wrap_word_reg(data)                       (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_word_reg)=data)
#define  get_H3DDMA_CAP3_WR_DMA_num_bl_wrap_word_reg                             (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_word_reg))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_word_cap3_addr_toggle_mode_shift         (28)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_word_cap3_line_burst_num_shift           (0)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_word_cap3_addr_toggle_mode_mask          (0x30000000)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_word_cap3_line_burst_num_mask            (0x007FFFFF)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_word_cap3_addr_toggle_mode(data)         (0x30000000&((data)<<28))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_word_cap3_line_burst_num(data)           (0x007FFFFF&(data))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_word_get_cap3_addr_toggle_mode(data)     ((0x30000000&(data))>>28)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_word_get_cap3_line_burst_num(data)       (0x007FFFFF&(data))

#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st1                                     0x18025DD0
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st1_reg_addr                             "0xB8025DD0"
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st1_reg                                  0xB8025DD0
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st1_inst_addr                            "0x0093"
#define  set_H3DDMA_CAP3_WR_DMA_num_bl_wrap_st1_reg(data)                        (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_st1_reg)=data)
#define  get_H3DDMA_CAP3_WR_DMA_num_bl_wrap_st1_reg                              (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_st1_reg))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st1_cap3_remain_setting_shift            (31)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st1_cap3_finish_status_shift             (28)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st1_cap3_remain_burst_num_shift          (0)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st1_cap3_remain_setting_mask             (0x80000000)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st1_cap3_finish_status_mask              (0x30000000)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st1_cap3_remain_burst_num_mask           (0x007FFFFF)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st1_cap3_remain_setting(data)            (0x80000000&((data)<<31))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st1_cap3_finish_status(data)             (0x30000000&((data)<<28))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st1_cap3_remain_burst_num(data)          (0x007FFFFF&(data))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st1_get_cap3_remain_setting(data)        ((0x80000000&(data))>>31)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st1_get_cap3_finish_status(data)         ((0x30000000&(data))>>28)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st1_get_cap3_remain_burst_num(data)      (0x007FFFFF&(data))

#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st2                                     0x18025DD4
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st2_reg_addr                             "0xB8025DD4"
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st2_reg                                  0xB8025DD4
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st2_inst_addr                            "0x0094"
#define  set_H3DDMA_CAP3_WR_DMA_num_bl_wrap_st2_reg(data)                        (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_st2_reg)=data)
#define  get_H3DDMA_CAP3_WR_DMA_num_bl_wrap_st2_reg                              (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_num_bl_wrap_st2_reg))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st2_cap3_soft_rst_before_finish_shift    (31)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st2_cap3_remain_line_num_shift           (16)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st2_cap3_soft_rst_before_finish_mask     (0x80000000)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st2_cap3_remain_line_num_mask            (0x0FFF0000)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st2_cap3_soft_rst_before_finish(data)    (0x80000000&((data)<<31))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st2_cap3_remain_line_num(data)           (0x0FFF0000&((data)<<16))
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st2_get_cap3_soft_rst_before_finish(data) ((0x80000000&(data))>>31)
#define  H3DDMA_CAP3_WR_DMA_num_bl_wrap_st2_get_cap3_remain_line_num(data)       ((0x0FFF0000&(data))>>16)

#define  H3DDMA_CAP3_WR_DMA_pxltobus                                            0x18025DD8
#define  H3DDMA_CAP3_WR_DMA_pxltobus_reg_addr                                    "0xB8025DD8"
#define  H3DDMA_CAP3_WR_DMA_pxltobus_reg                                         0xB8025DD8
#define  H3DDMA_CAP3_WR_DMA_pxltobus_inst_addr                                   "0x0095"
#define  set_H3DDMA_CAP3_WR_DMA_pxltobus_reg(data)                               (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_pxltobus_reg)=data)
#define  get_H3DDMA_CAP3_WR_DMA_pxltobus_reg                                     (*((volatile unsigned int*)H3DDMA_CAP3_WR_DMA_pxltobus_reg))
#define  H3DDMA_CAP3_WR_DMA_pxltobus_cap3_bit_sel_shift                          (2)
#define  H3DDMA_CAP3_WR_DMA_pxltobus_cap3_pixel_encoding_shift                   (0)
#define  H3DDMA_CAP3_WR_DMA_pxltobus_cap3_bit_sel_mask                           (0x0000000C)
#define  H3DDMA_CAP3_WR_DMA_pxltobus_cap3_pixel_encoding_mask                    (0x00000003)
#define  H3DDMA_CAP3_WR_DMA_pxltobus_cap3_bit_sel(data)                          (0x0000000C&((data)<<2))
#define  H3DDMA_CAP3_WR_DMA_pxltobus_cap3_pixel_encoding(data)                   (0x00000003&(data))
#define  H3DDMA_CAP3_WR_DMA_pxltobus_get_cap3_bit_sel(data)                      ((0x0000000C&(data))>>2)
#define  H3DDMA_CAP3_WR_DMA_pxltobus_get_cap3_pixel_encoding(data)               (0x00000003&(data))

#define  H3DDMA_CAP3_Cap_L_Start_db                                             0x18025DE0
#define  H3DDMA_CAP3_Cap_L_Start_db_reg_addr                                     "0xB8025DE0"
#define  H3DDMA_CAP3_Cap_L_Start_db_reg                                          0xB8025DE0
#define  H3DDMA_CAP3_Cap_L_Start_db_inst_addr                                    "0x0096"
#define  set_H3DDMA_CAP3_Cap_L_Start_db_reg(data)                                (*((volatile unsigned int*)H3DDMA_CAP3_Cap_L_Start_db_reg)=data)
#define  get_H3DDMA_CAP3_Cap_L_Start_db_reg                                      (*((volatile unsigned int*)H3DDMA_CAP3_Cap_L_Start_db_reg))
#define  H3DDMA_CAP3_Cap_L_Start_db_cap3_sta_addr_db_shift                       (3)
#define  H3DDMA_CAP3_Cap_L_Start_db_cap3_sta_addr_db_mask                        (0xFFFFFFF8)
#define  H3DDMA_CAP3_Cap_L_Start_db_cap3_sta_addr_db(data)                       (0xFFFFFFF8&((data)<<3))
#define  H3DDMA_CAP3_Cap_L_Start_db_get_cap3_sta_addr_db(data)                   ((0xFFFFFFF8&(data))>>3)

#define  H3DDMA_CAP3_Cap_R_Start_db                                             0x18025DE4
#define  H3DDMA_CAP3_Cap_R_Start_db_reg_addr                                     "0xB8025DE4"
#define  H3DDMA_CAP3_Cap_R_Start_db_reg                                          0xB8025DE4
#define  H3DDMA_CAP3_Cap_R_Start_db_inst_addr                                    "0x0097"
#define  set_H3DDMA_CAP3_Cap_R_Start_db_reg(data)                                (*((volatile unsigned int*)H3DDMA_CAP3_Cap_R_Start_db_reg)=data)
#define  get_H3DDMA_CAP3_Cap_R_Start_db_reg                                      (*((volatile unsigned int*)H3DDMA_CAP3_Cap_R_Start_db_reg))
#define  H3DDMA_CAP3_Cap_R_Start_db_cap3_sta_addr_r_db_shift                     (3)
#define  H3DDMA_CAP3_Cap_R_Start_db_cap3_sta_addr_r_db_mask                      (0xFFFFFFF8)
#define  H3DDMA_CAP3_Cap_R_Start_db_cap3_sta_addr_r_db(data)                     (0xFFFFFFF8&((data)<<3))
#define  H3DDMA_CAP3_Cap_R_Start_db_get_cap3_sta_addr_r_db(data)                 ((0xFFFFFFF8&(data))>>3)

#define  H3DDMA_CAP3_Cap_Status                                                 0x18025DE8
#define  H3DDMA_CAP3_Cap_Status_reg_addr                                         "0xB8025DE8"
#define  H3DDMA_CAP3_Cap_Status_reg                                              0xB8025DE8
#define  H3DDMA_CAP3_Cap_Status_inst_addr                                        "0x0098"
#define  set_H3DDMA_CAP3_Cap_Status_reg(data)                                    (*((volatile unsigned int*)H3DDMA_CAP3_Cap_Status_reg)=data)
#define  get_H3DDMA_CAP3_Cap_Status_reg                                          (*((volatile unsigned int*)H3DDMA_CAP3_Cap_Status_reg))
#define  H3DDMA_CAP3_Cap_Status_cap3_freeze_ok_shift                             (8)
#define  H3DDMA_CAP3_Cap_Status_cap3_cap_block_sel_shift                         (4)
#define  H3DDMA_CAP3_Cap_Status_cap3_cap_last_wr_flag_shift                      (3)
#define  H3DDMA_CAP3_Cap_Status_cap3_cap_over_size_shift                         (2)
#define  H3DDMA_CAP3_Cap_Status_cap3_cap_under_size_shift                        (1)
#define  H3DDMA_CAP3_Cap_Status_cap3_cap_fifo_overflow_shift                     (0)
#define  H3DDMA_CAP3_Cap_Status_cap3_freeze_ok_mask                              (0x00000100)
#define  H3DDMA_CAP3_Cap_Status_cap3_cap_block_sel_mask                          (0x00000030)
#define  H3DDMA_CAP3_Cap_Status_cap3_cap_last_wr_flag_mask                       (0x00000008)
#define  H3DDMA_CAP3_Cap_Status_cap3_cap_over_size_mask                          (0x00000004)
#define  H3DDMA_CAP3_Cap_Status_cap3_cap_under_size_mask                         (0x00000002)
#define  H3DDMA_CAP3_Cap_Status_cap3_cap_fifo_overflow_mask                      (0x00000001)
#define  H3DDMA_CAP3_Cap_Status_cap3_freeze_ok(data)                             (0x00000100&((data)<<8))
#define  H3DDMA_CAP3_Cap_Status_cap3_cap_block_sel(data)                         (0x00000030&((data)<<4))
#define  H3DDMA_CAP3_Cap_Status_cap3_cap_last_wr_flag(data)                      (0x00000008&((data)<<3))
#define  H3DDMA_CAP3_Cap_Status_cap3_cap_over_size(data)                         (0x00000004&((data)<<2))
#define  H3DDMA_CAP3_Cap_Status_cap3_cap_under_size(data)                        (0x00000002&((data)<<1))
#define  H3DDMA_CAP3_Cap_Status_cap3_cap_fifo_overflow(data)                     (0x00000001&(data))
#define  H3DDMA_CAP3_Cap_Status_get_cap3_freeze_ok(data)                         ((0x00000100&(data))>>8)
#define  H3DDMA_CAP3_Cap_Status_get_cap3_cap_block_sel(data)                     ((0x00000030&(data))>>4)
#define  H3DDMA_CAP3_Cap_Status_get_cap3_cap_last_wr_flag(data)                  ((0x00000008&(data))>>3)
#define  H3DDMA_CAP3_Cap_Status_get_cap3_cap_over_size(data)                     ((0x00000004&(data))>>2)
#define  H3DDMA_CAP3_Cap_Status_get_cap3_cap_under_size(data)                    ((0x00000002&(data))>>1)
#define  H3DDMA_CAP3_Cap_Status_get_cap3_cap_fifo_overflow(data)                 (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======H3DDMA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_lr_ctrl1:5;
        RBus_UInt32  hdmi420_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  vs_inv:1;
        RBus_UInt32  hs_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  progressive:1;
        RBus_UInt32  hdmi_3d_structure:4;
        RBus_UInt32  fp_vact_space1:8;
        RBus_UInt32  fp_vact_space2:8;
    };
}h3ddma_lr_separate_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vact:16;
        RBus_UInt32  res1:1;
        RBus_UInt32  hact:15;
    };
}h3ddma_lr_separate_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  hstart:13;
        RBus_UInt32  vstart:8;
    };
}h3ddma_lr_separate_insert_vs_start_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  hend:13;
        RBus_UInt32  vend:8;
    };
}h3ddma_lr_separate_insert_vs_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  cap3_seq_blk_sel:1;
        RBus_UInt32  cap2_seq_blk_sel:1;
        RBus_UInt32  cap1_seq_blk_sel:1;
        RBus_UInt32  cap0_seq_blk_sel:1;
        RBus_UInt32  reorder:1;
        RBus_UInt32  uzd_mux_sel:1;
        RBus_UInt32  block_sel_to_flag_fifo_option:1;
        RBus_UInt32  frc_style:1;
        RBus_UInt32  frc_en:1;
        RBus_UInt32  tg_en:1;
        RBus_UInt32  lr_separate_en:1;
        RBus_UInt32  res2:1;
    };
}h3ddma_i3ddma_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  cap3_channel_swap:3;
        RBus_UInt32  cap2_channel_swap:3;
        RBus_UInt32  cap1_channel_swap:3;
        RBus_UInt32  cap0_channel_swap:3;
    };
}h3ddma_i3ddma_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vact2:16;
        RBus_UInt32  res1:1;
        RBus_UInt32  hact2:15;
    };
}h3ddma_lr_separate_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  pullup_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  tg_hend1:13;
        RBus_UInt32  tg_vend1:8;
    };
}h3ddma_tg_v1_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  tg_slf_htotal_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tg_slf_htotal:14;
    };
}h3ddma_tg_sf_htotal_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  vs_rising_occur:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  tg_l_flag:1;
        RBus_UInt32  tg_field:1;
    };
}h3ddma_tg_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  i3ddma_bist_cap3_fail:1;
        RBus_UInt32  i3ddma_bist_cap1_fail:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_12:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_11:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_10:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_9:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_8:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_7:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_6:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_5:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_4:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_3:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_2:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_1:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_0:1;
        RBus_UInt32  i3ddma_bist_cap2_fail:1;
        RBus_UInt32  i3ddma_bist_cap0_fail:1;
    };
}h3ddma_i3ddma_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  i3ddma_cap3_drf_fail:1;
        RBus_UInt32  i3ddma_cap1_drf_fail:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_12:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_11:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_10:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_9:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_8:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_7:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_6:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_5:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_4:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_3:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_2:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_1:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_0:1;
        RBus_UInt32  i3ddma_cap2_drf_fail:1;
        RBus_UInt32  i3ddma_cap0_drf_fail:1;
    };
}h3ddma_i3ddma_bist_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_rmb:4;
        RBus_UInt32  cap1_rma:4;
        RBus_UInt32  i3ddma_pqc2_rm_1:4;
        RBus_UInt32  i3ddma_pqc2_rm_0:4;
        RBus_UInt32  cap2_rmb:4;
        RBus_UInt32  cap2_rma:4;
        RBus_UInt32  cap0_rmb:4;
        RBus_UInt32  cap0_rma:4;
    };
}h3ddma_i3ddma_bist_rm_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  cap3_rmb:4;
        RBus_UInt32  cap3_rma:4;
    };
}h3ddma_i3ddma_bist_rm_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  cap3_rmeb:1;
        RBus_UInt32  cap3_rmea:1;
        RBus_UInt32  cap1_rmeb:1;
        RBus_UInt32  cap1_rmea:1;
        RBus_UInt32  i3ddma_pqc2_rme_1:1;
        RBus_UInt32  i3ddma_pqc2_rme_0:1;
        RBus_UInt32  cap2_rmeb:1;
        RBus_UInt32  cap2_rmea:1;
        RBus_UInt32  cap0_rmeb:1;
        RBus_UInt32  cap0_rmea:1;
        RBus_UInt32  res2:10;
        RBus_UInt32  cap3_ls:1;
        RBus_UInt32  cap1_ls:1;
        RBus_UInt32  i3ddma_pqc2_ls_1:1;
        RBus_UInt32  i3ddma_pqc2_ls_0:1;
        RBus_UInt32  cap2_ls:1;
        RBus_UInt32  cap0_ls:1;
    };
}h3ddma_i3ddma_ls_rme_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  mdp_max_packet_num:9;
        RBus_UInt32  res2:13;
        RBus_UInt32  mdp_mode:2;
        RBus_UInt32  mdp_en:1;
    };
}h3ddma_i3ddma_mdp_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  r_crc_res_sel:4;
        RBus_UInt32  res2:2;
        RBus_UInt32  r_crc_conti:1;
        RBus_UInt32  r_crc_start:1;
        RBus_UInt32  l_crc_res_sel:4;
        RBus_UInt32  res3:2;
        RBus_UInt32  l_crc_conti:1;
        RBus_UInt32  l_crc_start:1;
    };
}h3ddma_lr_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_l_result:32;
    };
}h3ddma_crc_l_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_r_result:32;
    };
}h3ddma_crc_r_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  cap3_last_wr_ie:1;
        RBus_UInt32  cap2_last_wr_ie:1;
        RBus_UInt32  cap1_last_wr_ie:1;
        RBus_UInt32  cap0_last_wr_ie:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  mem_err_ie:1;
        RBus_UInt32  fifo_err_ie:1;
        RBus_UInt32  vs_rising_ie:1;
    };
}h3ddma_interrupt_enable_RBUS;

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
}h3ddma_h3ddma_pq_cmp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_line_sum_bit:16;
        RBus_UInt32  cmp_400_old_mode_en:1;
        RBus_UInt32  dummy18025864_14_11:4;
        RBus_UInt32  cmp_jump4_en:1;
        RBus_UInt32  cmp_qp_mode:2;
        RBus_UInt32  cmp_dic_mode_en:1;
        RBus_UInt32  two_line_prediction_en:1;
        RBus_UInt32  cmp_line_mode:1;
        RBus_UInt32  cmp_data_color:1;
        RBus_UInt32  cmp_data_bit_width:2;
        RBus_UInt32  cmp_data_format:2;
    };
}h3ddma_h3ddma_pq_cmp_pair_RBUS;

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
}h3ddma_h3ddma_pq_cmp_bit_RBUS;

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
}h3ddma_h3ddma_pq_cmp_enable_RBUS;

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
}h3ddma_h3ddma_pq_cmp_smooth_RBUS;

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
}h3ddma_h3ddma_pq_cmp_allocate_RBUS;

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
}h3ddma_h3ddma_pq_cmp_poor_RBUS;

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
}h3ddma_h3ddma_pq_cmp_guarantee_RBUS;

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
}h3ddma_h3ddma_pq_cmp_balance_RBUS;

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
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  g_fifo_even_overflow_irq_en:1;
        RBus_UInt32  r_fifo_even_overflow_irq_en:1;
        RBus_UInt32  b_fifo_even_overflow_irq_en:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:1;
    };
}h3ddma_h3ddma_pq_cmp_irq_en_RBUS;

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
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  g_fifo_even_overflow_st:1;
        RBus_UInt32  r_fifo_even_overflow_st:1;
        RBus_UInt32  b_fifo_even_overflow_st:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:1;
    };
}h3ddma_h3ddma_pq_cmp_irq_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  g_ratio_max:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  g_ratio_min:5;
        RBus_UInt32  res4:2;
        RBus_UInt32  cmp_package_height_cnt:14;
    };
}h3ddma_h3ddma_pq_cmp_st_RBUS;

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
}h3ddma_h3ddma_pq_cmp_qp_st_RBUS;

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
}h3ddma_h3ddma_pq_cmp_fifo_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  g_frame_left:16;
        RBus_UInt32  rb_frame_left:16;
    };
}h3ddma_h3ddma_pq_cmp_left_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_package_long_term:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  total_package_even:24;
    };
}h3ddma_h3ddma_pq_cmp_package_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_g:32;
    };
}h3ddma_h3ddma_pq_cmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_r:32;
    };
}h3ddma_h3ddma_pq_cmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_b:32;
    };
}h3ddma_h3ddma_pq_cmp_crc_even_b_RBUS;

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
}h3ddma_h3ddma_pq_cmp_blk0_add0_RBUS;

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
}h3ddma_h3ddma_pq_cmp_blk0_add1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  db_read_sel:1;
        RBus_UInt32  db_apply:1;
        RBus_UInt32  db_en:1;
    };
}h3ddma_h3ddma_pq_cmp_double_buffer_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pqc_den_extend_rate:4;
    };
}h3ddma_h3ddma_pq_cmp_den_extend_rate_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_triple_buf_en:1;
        RBus_UInt32  cap0_cap_block_fw:2;
        RBus_UInt32  cap0_set_block_sel:1;
        RBus_UInt32  cap0_quad_buf_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  cap0_freeze_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap0_auto_block_sel_en:1;
        RBus_UInt32  cap0_half_wr_en:1;
        RBus_UInt32  cap0_half_wr_sel:1;
        RBus_UInt32  res3:19;
        RBus_UInt32  cap0_frame_access_mode:1;
    };
}h3ddma_cap0_cap_ctl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_dma_up_limit:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap0_cti_dma_wr_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_dma_low_limit:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap0_cti_dma_wr_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_dma_up_limit_1:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap0_cti_dma_wr_rule_check_up_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_dma_low_limit_1:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap0_cti_dma_wr_rule_check_low_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_dma_up_limit_2:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap0_cti_dma_wr_rule_check_up_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_dma_low_limit_2:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap0_cti_dma_wr_rule_check_low_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_dma_up_limit_3:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap0_cti_dma_wr_rule_check_up_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_dma_low_limit_3:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap0_cti_dma_wr_rule_check_low_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  cap0_dma_8byte_swap:1;
        RBus_UInt32  cap0_dma_4byte_swap:1;
        RBus_UInt32  cap0_dma_2byte_swap:1;
        RBus_UInt32  cap0_dma_1byte_swap:1;
        RBus_UInt32  cap0_max_outstanding:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  cap0_force_all_rst:1;
        RBus_UInt32  cap0_dma_enable:1;
    };
}h3ddma_cap0_cti_dma_wr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  cap0_dma_cmd_water:3;
        RBus_UInt32  res2:2;
        RBus_UInt32  cap0_dma_data_water:10;
        RBus_UInt32  res3:5;
        RBus_UInt32  cap0_cur_outstanding:3;
        RBus_UInt32  res4:3;
        RBus_UInt32  cap0_soft_rst_before_cmd_finish:1;
        RBus_UInt32  cap0_soft_rst_with_data_left:1;
        RBus_UInt32  cap0_data_fifo_underflow_err:1;
        RBus_UInt32  cap0_exceed_range_err:1;
        RBus_UInt32  cap0_zero_length_err:1;
    };
}h3ddma_cap0_cti_dma_wr_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_ack_num_error:1;
        RBus_UInt32  cap0_last_no_ack_error:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  cap0_target_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap0_last_ack_num:7;
        RBus_UInt32  res3:2;
        RBus_UInt32  cap0_selected_bl:6;
    };
}h3ddma_cap0_cti_dma_wr_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_selected_addr:27;
        RBus_UInt32  res1:3;
        RBus_UInt32  cap0_addr_bl_sel:2;
    };
}h3ddma_cap0_cti_dma_wr_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_monitor_en:1;
        RBus_UInt32  cap0_monitor_conti:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  cap0_reach_thd:1;
        RBus_UInt32  cap0_monitor_thd:10;
        RBus_UInt32  res2:4;
        RBus_UInt32  cap0_highest_water_level:10;
    };
}h3ddma_cap0_cti_dma_wr_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_sta_addr_0:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_addr_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_sta_addr_1:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_addr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_sta_addr_2:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_addr_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_sta_addr_3:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_addr_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_sta_addr_r0:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_addr_r0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_sta_addr_r1:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_addr_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_sta_addr_r2:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_addr_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_sta_addr_r3:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_addr_r3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_line_step:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_line_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap0_line_num:12;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap0_burst_len:7;
        RBus_UInt32  res3:4;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_rolling_enable:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cap0_rolling_space:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  cap0_rolling_num:12;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_rolling_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  cap0_addr_toggle_mode:2;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap0_line_burst_num:23;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_word_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_remain_setting:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  cap0_finish_status:2;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap0_remain_burst_num:23;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_soft_rst_before_finish:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cap0_remain_line_num:12;
        RBus_UInt32  res2:16;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_st2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  cap0_bit_sel:2;
        RBus_UInt32  cap0_pixel_encoding:2;
    };
}h3ddma_cap0_wr_dma_pxltobus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_sta_addr_db:29;
        RBus_UInt32  res1:3;
    };
}h3ddma_cap0_cap_l_start_db_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_sta_addr_r_db:29;
        RBus_UInt32  res1:3;
    };
}h3ddma_cap0_cap_r_start_db_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  cap0_freeze_ok:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  cap0_cap_block_sel:2;
        RBus_UInt32  cap0_cap_last_wr_flag:1;
        RBus_UInt32  cap0_cap_over_size:1;
        RBus_UInt32  cap0_cap_under_size:1;
        RBus_UInt32  cap0_cap_fifo_overflow:1;
    };
}h3ddma_cap0_cap_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_triple_buf_en:1;
        RBus_UInt32  cap1_cap_block_fw:2;
        RBus_UInt32  cap1_set_block_sel:1;
        RBus_UInt32  cap1_quad_buf_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  cap1_freeze_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap1_auto_block_sel_en:1;
        RBus_UInt32  res3:21;
        RBus_UInt32  cap1_frame_access_mode:1;
    };
}h3ddma_cap1_cap_ctl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_dma_up_limit:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap1_cti_dma_wr_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_dma_low_limit:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap1_cti_dma_wr_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  cap1_dma_8byte_swap:1;
        RBus_UInt32  cap1_dma_4byte_swap:1;
        RBus_UInt32  cap1_dma_2byte_swap:1;
        RBus_UInt32  cap1_dma_1byte_swap:1;
        RBus_UInt32  cap1_max_outstanding:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  cap1_force_all_rst:1;
        RBus_UInt32  cap1_dma_enable:1;
    };
}h3ddma_cap1_cti_dma_wr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  cap1_dma_cmd_water:3;
        RBus_UInt32  res2:4;
        RBus_UInt32  cap1_dma_data_water:8;
        RBus_UInt32  res3:5;
        RBus_UInt32  cap1_cur_outstanding:3;
        RBus_UInt32  res4:3;
        RBus_UInt32  cap1_soft_rst_before_cmd_finish:1;
        RBus_UInt32  cap1_soft_rst_with_data_left:1;
        RBus_UInt32  cap1_data_fifo_underflow_err:1;
        RBus_UInt32  cap1_exceed_range_err:1;
        RBus_UInt32  cap1_zero_length_err:1;
    };
}h3ddma_cap1_cti_dma_wr_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_ack_num_error:1;
        RBus_UInt32  cap1_last_no_ack_error:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  cap1_target_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap1_last_ack_num:7;
        RBus_UInt32  res3:2;
        RBus_UInt32  cap1_selected_bl:6;
    };
}h3ddma_cap1_cti_dma_wr_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_selected_addr:27;
        RBus_UInt32  res1:3;
        RBus_UInt32  cap1_addr_bl_sel:2;
    };
}h3ddma_cap1_cti_dma_wr_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_monitor_en:1;
        RBus_UInt32  cap1_monitor_conti:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  cap1_reach_thd:1;
        RBus_UInt32  cap1_monitor_thd:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  cap1_highest_water_level:8;
    };
}h3ddma_cap1_cti_dma_wr_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_sta_addr_0:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_addr_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_sta_addr_1:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_addr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_sta_addr_2:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_addr_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_sta_addr_3:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_addr_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_sta_addr_r0:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_addr_r0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_sta_addr_r1:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_addr_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_sta_addr_r2:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_addr_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_sta_addr_r3:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_addr_r3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_line_step:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_line_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap1_line_num:12;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap1_burst_len:7;
        RBus_UInt32  res3:4;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_rolling_enable:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cap1_rolling_space:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  cap1_rolling_num:12;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_rolling_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  cap1_addr_toggle_mode:2;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap1_line_burst_num:23;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_word_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_remain_setting:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  cap1_finish_status:2;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap1_remain_burst_num:23;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_soft_rst_before_finish:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cap1_remain_line_num:12;
        RBus_UInt32  res2:16;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_st2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  cap1_bit_sel:2;
        RBus_UInt32  cap1_pixel_encoding:2;
    };
}h3ddma_cap1_wr_dma_pxltobus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_sta_addr_db:29;
        RBus_UInt32  res1:3;
    };
}h3ddma_cap1_cap_l_start_db_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_sta_addr_r_db:29;
        RBus_UInt32  res1:3;
    };
}h3ddma_cap1_cap_r_start_db_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  cap1_freeze_ok:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  cap1_cap_block_sel:2;
        RBus_UInt32  cap1_cap_last_wr_flag:1;
        RBus_UInt32  cap1_cap_over_size:1;
        RBus_UInt32  cap1_cap_under_size:1;
        RBus_UInt32  cap1_cap_fifo_overflow:1;
    };
}h3ddma_cap1_cap_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_triple_buf_en:1;
        RBus_UInt32  cap2_cap_block_fw:2;
        RBus_UInt32  cap2_set_block_sel:1;
        RBus_UInt32  cap2_quad_buf_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  cap2_freeze_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap2_auto_block_sel_en:1;
        RBus_UInt32  res3:21;
        RBus_UInt32  cap2_frame_access_mode:1;
    };
}h3ddma_cap2_cap_ctl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_dma_up_limit:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap2_cti_dma_wr_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_dma_low_limit:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap2_cti_dma_wr_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  cap2_dma_8byte_swap:1;
        RBus_UInt32  cap2_dma_4byte_swap:1;
        RBus_UInt32  cap2_dma_2byte_swap:1;
        RBus_UInt32  cap2_dma_1byte_swap:1;
        RBus_UInt32  cap2_max_outstanding:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  cap2_force_all_rst:1;
        RBus_UInt32  cap2_dma_enable:1;
    };
}h3ddma_cap2_cti_dma_wr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  cap2_dma_cmd_water:3;
        RBus_UInt32  res2:3;
        RBus_UInt32  cap2_dma_data_water:9;
        RBus_UInt32  res3:5;
        RBus_UInt32  cap2_cur_outstanding:3;
        RBus_UInt32  res4:3;
        RBus_UInt32  cap2_soft_rst_before_cmd_finish:1;
        RBus_UInt32  cap2_soft_rst_with_data_left:1;
        RBus_UInt32  cap2_data_fifo_underflow_err:1;
        RBus_UInt32  cap2_exceed_range_err:1;
        RBus_UInt32  cap2_zero_length_err:1;
    };
}h3ddma_cap2_cti_dma_wr_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_ack_num_error:1;
        RBus_UInt32  cap2_last_no_ack_error:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  cap2_target_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap2_last_ack_num:7;
        RBus_UInt32  res3:2;
        RBus_UInt32  cap2_selected_bl:6;
    };
}h3ddma_cap2_cti_dma_wr_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_selected_addr:27;
        RBus_UInt32  res1:3;
        RBus_UInt32  cap2_addr_bl_sel:2;
    };
}h3ddma_cap2_cti_dma_wr_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_monitor_en:1;
        RBus_UInt32  cap2_monitor_conti:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  cap2_reach_thd:1;
        RBus_UInt32  cap2_monitor_thd:9;
        RBus_UInt32  res2:6;
        RBus_UInt32  cap2_highest_water_level:9;
    };
}h3ddma_cap2_cti_dma_wr_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_sta_addr_0:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_addr_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_sta_addr_1:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_addr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_sta_addr_2:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_addr_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_sta_addr_3:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_addr_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_sta_addr_r0:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_addr_r0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_sta_addr_r1:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_addr_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_sta_addr_r2:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_addr_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_sta_addr_r3:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_addr_r3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_line_step:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_line_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap2_line_num:12;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap2_burst_len:7;
        RBus_UInt32  res3:4;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_rolling_enable:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cap2_rolling_space:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  cap2_rolling_num:12;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_rolling_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  cap2_addr_toggle_mode:2;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap2_line_burst_num:23;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_word_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_remain_setting:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  cap2_finish_status:2;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap2_remain_burst_num:23;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_soft_rst_before_finish:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cap2_remain_line_num:12;
        RBus_UInt32  res2:16;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_st2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  cap2_bit_sel:2;
        RBus_UInt32  cap2_pixel_encoding:2;
    };
}h3ddma_cap2_wr_dma_pxltobus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_sta_addr_db:29;
        RBus_UInt32  res1:3;
    };
}h3ddma_cap2_cap_l_start_db_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_sta_addr_r_db:29;
        RBus_UInt32  res1:3;
    };
}h3ddma_cap2_cap_r_start_db_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  cap2_freeze_ok:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  cap2_cap_block_sel:2;
        RBus_UInt32  cap2_cap_last_wr_flag:1;
        RBus_UInt32  cap2_cap_over_size:1;
        RBus_UInt32  cap2_cap_under_size:1;
        RBus_UInt32  cap2_cap_fifo_overflow:1;
    };
}h3ddma_cap2_cap_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_triple_buf_en:1;
        RBus_UInt32  cap3_cap_block_fw:2;
        RBus_UInt32  cap3_set_block_sel:1;
        RBus_UInt32  cap3_quad_buf_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  cap3_freeze_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap3_auto_block_sel_en:1;
        RBus_UInt32  res3:21;
        RBus_UInt32  cap3_frame_access_mode:1;
    };
}h3ddma_cap3_cap_ctl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_dma_up_limit:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap3_cti_dma_wr_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_dma_low_limit:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap3_cti_dma_wr_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  cap3_dma_8byte_swap:1;
        RBus_UInt32  cap3_dma_4byte_swap:1;
        RBus_UInt32  cap3_dma_2byte_swap:1;
        RBus_UInt32  cap3_dma_1byte_swap:1;
        RBus_UInt32  cap3_max_outstanding:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  cap3_force_all_rst:1;
        RBus_UInt32  cap3_dma_enable:1;
    };
}h3ddma_cap3_cti_dma_wr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  cap3_dma_cmd_water:3;
        RBus_UInt32  res2:6;
        RBus_UInt32  cap3_dma_data_water:6;
        RBus_UInt32  res3:5;
        RBus_UInt32  cap3_cur_outstanding:3;
        RBus_UInt32  res4:3;
        RBus_UInt32  cap3_soft_rst_before_cmd_finish:1;
        RBus_UInt32  cap3_soft_rst_with_data_left:1;
        RBus_UInt32  cap3_data_fifo_underflow_err:1;
        RBus_UInt32  cap3_exceed_range_err:1;
        RBus_UInt32  cap3_zero_length_err:1;
    };
}h3ddma_cap3_cti_dma_wr_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_ack_num_error:1;
        RBus_UInt32  cap3_last_no_ack_error:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  cap3_target_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap3_last_ack_num:7;
        RBus_UInt32  res3:2;
        RBus_UInt32  cap3_selected_bl:6;
    };
}h3ddma_cap3_cti_dma_wr_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_selected_addr:27;
        RBus_UInt32  res1:3;
        RBus_UInt32  cap3_addr_bl_sel:2;
    };
}h3ddma_cap3_cti_dma_wr_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_monitor_en:1;
        RBus_UInt32  cap3_monitor_conti:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  cap3_reach_thd:1;
        RBus_UInt32  cap3_monitor_thd:6;
        RBus_UInt32  res2:12;
        RBus_UInt32  cap3_highest_water_level:6;
    };
}h3ddma_cap3_cti_dma_wr_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_sta_addr_0:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_addr_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_sta_addr_1:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_addr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_sta_addr_2:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_addr_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_sta_addr_3:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_addr_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_sta_addr_r0:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_addr_r0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_sta_addr_r1:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_addr_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_sta_addr_r2:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_addr_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_sta_addr_r3:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_addr_r3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_line_step:28;
        RBus_UInt32  res1:4;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_line_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap3_line_num:12;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap3_burst_len:7;
        RBus_UInt32  res3:4;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_rolling_enable:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cap3_rolling_space:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  cap3_rolling_num:12;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_rolling_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  cap3_addr_toggle_mode:2;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap3_line_burst_num:23;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_word_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_remain_setting:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  cap3_finish_status:2;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap3_remain_burst_num:23;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_soft_rst_before_finish:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cap3_remain_line_num:12;
        RBus_UInt32  res2:16;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_st2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  cap3_bit_sel:2;
        RBus_UInt32  cap3_pixel_encoding:2;
    };
}h3ddma_cap3_wr_dma_pxltobus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_sta_addr_db:29;
        RBus_UInt32  res1:3;
    };
}h3ddma_cap3_cap_l_start_db_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_sta_addr_r_db:29;
        RBus_UInt32  res1:3;
    };
}h3ddma_cap3_cap_r_start_db_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  cap3_freeze_ok:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  cap3_cap_block_sel:2;
        RBus_UInt32  cap3_cap_last_wr_flag:1;
        RBus_UInt32  cap3_cap_over_size:1;
        RBus_UInt32  cap3_cap_under_size:1;
        RBus_UInt32  cap3_cap_fifo_overflow:1;
    };
}h3ddma_cap3_cap_status_RBUS;

#else //apply LITTLE_ENDIAN

//======H3DDMA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fp_vact_space2:8;
        RBus_UInt32  fp_vact_space1:8;
        RBus_UInt32  hdmi_3d_structure:4;
        RBus_UInt32  progressive:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  hs_inv:1;
        RBus_UInt32  vs_inv:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  hdmi420_en:1;
        RBus_UInt32  dummy_lr_ctrl1:5;
    };
}h3ddma_lr_separate_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hact:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  vact:16;
    };
}h3ddma_lr_separate_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vstart:8;
        RBus_UInt32  hstart:13;
        RBus_UInt32  res1:11;
    };
}h3ddma_lr_separate_insert_vs_start_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vend:8;
        RBus_UInt32  hend:13;
        RBus_UInt32  res1:11;
    };
}h3ddma_lr_separate_insert_vs_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  lr_separate_en:1;
        RBus_UInt32  tg_en:1;
        RBus_UInt32  frc_en:1;
        RBus_UInt32  frc_style:1;
        RBus_UInt32  block_sel_to_flag_fifo_option:1;
        RBus_UInt32  uzd_mux_sel:1;
        RBus_UInt32  reorder:1;
        RBus_UInt32  cap0_seq_blk_sel:1;
        RBus_UInt32  cap1_seq_blk_sel:1;
        RBus_UInt32  cap2_seq_blk_sel:1;
        RBus_UInt32  cap3_seq_blk_sel:1;
        RBus_UInt32  res2:20;
    };
}h3ddma_i3ddma_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_channel_swap:3;
        RBus_UInt32  cap1_channel_swap:3;
        RBus_UInt32  cap2_channel_swap:3;
        RBus_UInt32  cap3_channel_swap:3;
        RBus_UInt32  res1:20;
    };
}h3ddma_i3ddma_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hact2:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  vact2:16;
    };
}h3ddma_lr_separate_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tg_vend1:8;
        RBus_UInt32  tg_hend1:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pullup_en:1;
        RBus_UInt32  res3:6;
    };
}h3ddma_tg_v1_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tg_slf_htotal:14;
        RBus_UInt32  res1:1;
        RBus_UInt32  tg_slf_htotal_en:1;
        RBus_UInt32  res2:16;
    };
}h3ddma_tg_sf_htotal_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tg_field:1;
        RBus_UInt32  tg_l_flag:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  vs_rising_occur:1;
        RBus_UInt32  res2:23;
    };
}h3ddma_tg_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i3ddma_bist_cap0_fail:1;
        RBus_UInt32  i3ddma_bist_cap2_fail:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_0:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_1:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_2:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_3:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_4:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_5:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_6:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_7:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_8:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_9:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_10:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_11:1;
        RBus_UInt32  i3ddma_pqc2_bist_fail_12:1;
        RBus_UInt32  i3ddma_bist_cap1_fail:1;
        RBus_UInt32  i3ddma_bist_cap3_fail:1;
        RBus_UInt32  res1:15;
    };
}h3ddma_i3ddma_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i3ddma_cap0_drf_fail:1;
        RBus_UInt32  i3ddma_cap2_drf_fail:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_0:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_1:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_2:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_3:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_4:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_5:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_6:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_7:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_8:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_9:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_10:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_11:1;
        RBus_UInt32  i3ddma_pqc2_drf_fail_12:1;
        RBus_UInt32  i3ddma_cap1_drf_fail:1;
        RBus_UInt32  i3ddma_cap3_drf_fail:1;
        RBus_UInt32  res1:15;
    };
}h3ddma_i3ddma_bist_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_rma:4;
        RBus_UInt32  cap0_rmb:4;
        RBus_UInt32  cap2_rma:4;
        RBus_UInt32  cap2_rmb:4;
        RBus_UInt32  i3ddma_pqc2_rm_0:4;
        RBus_UInt32  i3ddma_pqc2_rm_1:4;
        RBus_UInt32  cap1_rma:4;
        RBus_UInt32  cap1_rmb:4;
    };
}h3ddma_i3ddma_bist_rm_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_rma:4;
        RBus_UInt32  cap3_rmb:4;
        RBus_UInt32  res1:24;
    };
}h3ddma_i3ddma_bist_rm_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_ls:1;
        RBus_UInt32  cap2_ls:1;
        RBus_UInt32  i3ddma_pqc2_ls_0:1;
        RBus_UInt32  i3ddma_pqc2_ls_1:1;
        RBus_UInt32  cap1_ls:1;
        RBus_UInt32  cap3_ls:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  cap0_rmea:1;
        RBus_UInt32  cap0_rmeb:1;
        RBus_UInt32  cap2_rmea:1;
        RBus_UInt32  cap2_rmeb:1;
        RBus_UInt32  i3ddma_pqc2_rme_0:1;
        RBus_UInt32  i3ddma_pqc2_rme_1:1;
        RBus_UInt32  cap1_rmea:1;
        RBus_UInt32  cap1_rmeb:1;
        RBus_UInt32  cap3_rmea:1;
        RBus_UInt32  cap3_rmeb:1;
        RBus_UInt32  res2:6;
    };
}h3ddma_i3ddma_ls_rme_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mdp_en:1;
        RBus_UInt32  mdp_mode:2;
        RBus_UInt32  res1:13;
        RBus_UInt32  mdp_max_packet_num:9;
        RBus_UInt32  res2:7;
    };
}h3ddma_i3ddma_mdp_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  l_crc_start:1;
        RBus_UInt32  l_crc_conti:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  l_crc_res_sel:4;
        RBus_UInt32  r_crc_start:1;
        RBus_UInt32  r_crc_conti:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  r_crc_res_sel:4;
        RBus_UInt32  res3:16;
    };
}h3ddma_lr_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_l_result:32;
    };
}h3ddma_crc_l_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_r_result:32;
    };
}h3ddma_crc_r_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vs_rising_ie:1;
        RBus_UInt32  fifo_err_ie:1;
        RBus_UInt32  mem_err_ie:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  cap0_last_wr_ie:1;
        RBus_UInt32  cap1_last_wr_ie:1;
        RBus_UInt32  cap2_last_wr_ie:1;
        RBus_UInt32  cap3_last_wr_ie:1;
        RBus_UInt32  res2:24;
    };
}h3ddma_interrupt_enable_RBUS;

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
}h3ddma_h3ddma_pq_cmp_RBUS;

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
        RBus_UInt32  dummy18025864_14_11:4;
        RBus_UInt32  cmp_400_old_mode_en:1;
        RBus_UInt32  cmp_line_sum_bit:16;
    };
}h3ddma_h3ddma_pq_cmp_pair_RBUS;

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
}h3ddma_h3ddma_pq_cmp_bit_RBUS;

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
}h3ddma_h3ddma_pq_cmp_enable_RBUS;

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
}h3ddma_h3ddma_pq_cmp_smooth_RBUS;

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
}h3ddma_h3ddma_pq_cmp_allocate_RBUS;

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
}h3ddma_h3ddma_pq_cmp_poor_RBUS;

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
}h3ddma_h3ddma_pq_cmp_guarantee_RBUS;

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
}h3ddma_h3ddma_pq_cmp_balance_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  b_fifo_even_overflow_irq_en:1;
        RBus_UInt32  r_fifo_even_overflow_irq_en:1;
        RBus_UInt32  g_fifo_even_overflow_irq_en:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  request_fifo_even_overflow_irq_en:1;
        RBus_UInt32  res7:2;
        RBus_UInt32  over_flb_irq_en:1;
        RBus_UInt32  input_size_less_irq_en:1;
        RBus_UInt32  input_size_more_irq_en:1;
        RBus_UInt32  block_fifo_overflow_irq_en:1;
        RBus_UInt32  input_fifo_overflow_irq_en:1;
        RBus_UInt32  tail_fifo_overflow_irq_en:1;
        RBus_UInt32  prs_over_line_sum_bit_irq_en:1;
        RBus_UInt32  res8:13;
    };
}h3ddma_h3ddma_pq_cmp_irq_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  b_fifo_even_overflow_st:1;
        RBus_UInt32  r_fifo_even_overflow_st:1;
        RBus_UInt32  g_fifo_even_overflow_st:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  request_fifo_even_overflow_st:1;
        RBus_UInt32  res7:2;
        RBus_UInt32  over_flb_st:1;
        RBus_UInt32  input_size_less_st:1;
        RBus_UInt32  input_size_more_st:1;
        RBus_UInt32  block_fifo_overflow_st:1;
        RBus_UInt32  input_fifo_overflow_st:1;
        RBus_UInt32  tail_fifo_overflow_st:1;
        RBus_UInt32  prs_over_line_sum_bit_st:1;
        RBus_UInt32  res8:12;
        RBus_UInt32  pqc_irq:1;
    };
}h3ddma_h3ddma_pq_cmp_irq_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_package_height_cnt:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  g_ratio_min:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  g_ratio_max:5;
        RBus_UInt32  res3:2;
        RBus_UInt32  res4:1;
    };
}h3ddma_h3ddma_pq_cmp_st_RBUS;

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
}h3ddma_h3ddma_pq_cmp_qp_st_RBUS;

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
}h3ddma_h3ddma_pq_cmp_fifo_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rb_frame_left:16;
        RBus_UInt32  g_frame_left:16;
    };
}h3ddma_h3ddma_pq_cmp_left_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_package_even:24;
        RBus_UInt32  res1:7;
        RBus_UInt32  total_package_long_term:1;
    };
}h3ddma_h3ddma_pq_cmp_package_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_g:32;
    };
}h3ddma_h3ddma_pq_cmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_r:32;
    };
}h3ddma_h3ddma_pq_cmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_b:32;
    };
}h3ddma_h3ddma_pq_cmp_crc_even_b_RBUS;

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
}h3ddma_h3ddma_pq_cmp_blk0_add0_RBUS;

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
}h3ddma_h3ddma_pq_cmp_blk0_add1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  db_en:1;
        RBus_UInt32  db_apply:1;
        RBus_UInt32  db_read_sel:1;
        RBus_UInt32  res1:29;
    };
}h3ddma_h3ddma_pq_cmp_double_buffer_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pqc_den_extend_rate:4;
        RBus_UInt32  res1:28;
    };
}h3ddma_h3ddma_pq_cmp_den_extend_rate_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_frame_access_mode:1;
        RBus_UInt32  res1:19;
        RBus_UInt32  cap0_half_wr_sel:1;
        RBus_UInt32  cap0_half_wr_en:1;
        RBus_UInt32  cap0_auto_block_sel_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap0_freeze_en:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  cap0_quad_buf_en:1;
        RBus_UInt32  cap0_set_block_sel:1;
        RBus_UInt32  cap0_cap_block_fw:2;
        RBus_UInt32  cap0_triple_buf_en:1;
    };
}h3ddma_cap0_cap_ctl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap0_dma_up_limit:28;
    };
}h3ddma_cap0_cti_dma_wr_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap0_dma_low_limit:28;
    };
}h3ddma_cap0_cti_dma_wr_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap0_dma_up_limit_1:28;
    };
}h3ddma_cap0_cti_dma_wr_rule_check_up_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap0_dma_low_limit_1:28;
    };
}h3ddma_cap0_cti_dma_wr_rule_check_low_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap0_dma_up_limit_2:28;
    };
}h3ddma_cap0_cti_dma_wr_rule_check_up_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap0_dma_low_limit_2:28;
    };
}h3ddma_cap0_cti_dma_wr_rule_check_low_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap0_dma_up_limit_3:28;
    };
}h3ddma_cap0_cti_dma_wr_rule_check_up_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap0_dma_low_limit_3:28;
    };
}h3ddma_cap0_cti_dma_wr_rule_check_low_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_dma_enable:1;
        RBus_UInt32  cap0_force_all_rst:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  cap0_max_outstanding:2;
        RBus_UInt32  cap0_dma_1byte_swap:1;
        RBus_UInt32  cap0_dma_2byte_swap:1;
        RBus_UInt32  cap0_dma_4byte_swap:1;
        RBus_UInt32  cap0_dma_8byte_swap:1;
        RBus_UInt32  res2:18;
    };
}h3ddma_cap0_cti_dma_wr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_zero_length_err:1;
        RBus_UInt32  cap0_exceed_range_err:1;
        RBus_UInt32  cap0_data_fifo_underflow_err:1;
        RBus_UInt32  cap0_soft_rst_with_data_left:1;
        RBus_UInt32  cap0_soft_rst_before_cmd_finish:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cap0_cur_outstanding:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap0_dma_data_water:10;
        RBus_UInt32  res3:2;
        RBus_UInt32  cap0_dma_cmd_water:3;
        RBus_UInt32  res4:1;
    };
}h3ddma_cap0_cti_dma_wr_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_selected_bl:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  cap0_last_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap0_target_ack_num:7;
        RBus_UInt32  res3:7;
        RBus_UInt32  cap0_last_no_ack_error:1;
        RBus_UInt32  cap0_ack_num_error:1;
    };
}h3ddma_cap0_cti_dma_wr_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_addr_bl_sel:2;
        RBus_UInt32  res1:3;
        RBus_UInt32  cap0_selected_addr:27;
    };
}h3ddma_cap0_cti_dma_wr_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_highest_water_level:10;
        RBus_UInt32  res1:4;
        RBus_UInt32  cap0_monitor_thd:10;
        RBus_UInt32  cap0_reach_thd:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap0_monitor_conti:1;
        RBus_UInt32  cap0_monitor_en:1;
    };
}h3ddma_cap0_cti_dma_wr_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap0_sta_addr_0:28;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_addr_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap0_sta_addr_1:28;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_addr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap0_sta_addr_2:28;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_addr_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap0_sta_addr_3:28;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_addr_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap0_sta_addr_r0:28;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_addr_r0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap0_sta_addr_r1:28;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_addr_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap0_sta_addr_r2:28;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_addr_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap0_sta_addr_r3:28;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_addr_r3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap0_line_step:28;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_line_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap0_burst_len:7;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap0_line_num:12;
        RBus_UInt32  res3:4;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_rolling_num:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  cap0_rolling_space:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  cap0_rolling_enable:1;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_rolling_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_line_burst_num:23;
        RBus_UInt32  res1:5;
        RBus_UInt32  cap0_addr_toggle_mode:2;
        RBus_UInt32  res2:2;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_word_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_remain_burst_num:23;
        RBus_UInt32  res1:5;
        RBus_UInt32  cap0_finish_status:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap0_remain_setting:1;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  cap0_remain_line_num:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  cap0_soft_rst_before_finish:1;
    };
}h3ddma_cap0_wr_dma_num_bl_wrap_st2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_pixel_encoding:2;
        RBus_UInt32  cap0_bit_sel:2;
        RBus_UInt32  res1:28;
    };
}h3ddma_cap0_wr_dma_pxltobus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  cap0_sta_addr_db:29;
    };
}h3ddma_cap0_cap_l_start_db_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  cap0_sta_addr_r_db:29;
    };
}h3ddma_cap0_cap_r_start_db_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap0_cap_fifo_overflow:1;
        RBus_UInt32  cap0_cap_under_size:1;
        RBus_UInt32  cap0_cap_over_size:1;
        RBus_UInt32  cap0_cap_last_wr_flag:1;
        RBus_UInt32  cap0_cap_block_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  cap0_freeze_ok:1;
        RBus_UInt32  res2:23;
    };
}h3ddma_cap0_cap_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_frame_access_mode:1;
        RBus_UInt32  res1:21;
        RBus_UInt32  cap1_auto_block_sel_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap1_freeze_en:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  cap1_quad_buf_en:1;
        RBus_UInt32  cap1_set_block_sel:1;
        RBus_UInt32  cap1_cap_block_fw:2;
        RBus_UInt32  cap1_triple_buf_en:1;
    };
}h3ddma_cap1_cap_ctl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap1_dma_up_limit:28;
    };
}h3ddma_cap1_cti_dma_wr_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap1_dma_low_limit:28;
    };
}h3ddma_cap1_cti_dma_wr_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_dma_enable:1;
        RBus_UInt32  cap1_force_all_rst:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  cap1_max_outstanding:2;
        RBus_UInt32  cap1_dma_1byte_swap:1;
        RBus_UInt32  cap1_dma_2byte_swap:1;
        RBus_UInt32  cap1_dma_4byte_swap:1;
        RBus_UInt32  cap1_dma_8byte_swap:1;
        RBus_UInt32  res2:18;
    };
}h3ddma_cap1_cti_dma_wr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_zero_length_err:1;
        RBus_UInt32  cap1_exceed_range_err:1;
        RBus_UInt32  cap1_data_fifo_underflow_err:1;
        RBus_UInt32  cap1_soft_rst_with_data_left:1;
        RBus_UInt32  cap1_soft_rst_before_cmd_finish:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cap1_cur_outstanding:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap1_dma_data_water:8;
        RBus_UInt32  res3:4;
        RBus_UInt32  cap1_dma_cmd_water:3;
        RBus_UInt32  res4:1;
    };
}h3ddma_cap1_cti_dma_wr_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_selected_bl:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  cap1_last_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap1_target_ack_num:7;
        RBus_UInt32  res3:7;
        RBus_UInt32  cap1_last_no_ack_error:1;
        RBus_UInt32  cap1_ack_num_error:1;
    };
}h3ddma_cap1_cti_dma_wr_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_addr_bl_sel:2;
        RBus_UInt32  res1:3;
        RBus_UInt32  cap1_selected_addr:27;
    };
}h3ddma_cap1_cti_dma_wr_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_highest_water_level:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  cap1_monitor_thd:8;
        RBus_UInt32  cap1_reach_thd:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap1_monitor_conti:1;
        RBus_UInt32  cap1_monitor_en:1;
    };
}h3ddma_cap1_cti_dma_wr_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap1_sta_addr_0:28;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_addr_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap1_sta_addr_1:28;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_addr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap1_sta_addr_2:28;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_addr_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap1_sta_addr_3:28;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_addr_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap1_sta_addr_r0:28;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_addr_r0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap1_sta_addr_r1:28;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_addr_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap1_sta_addr_r2:28;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_addr_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap1_sta_addr_r3:28;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_addr_r3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap1_line_step:28;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_line_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap1_burst_len:7;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap1_line_num:12;
        RBus_UInt32  res3:4;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_rolling_num:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  cap1_rolling_space:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  cap1_rolling_enable:1;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_rolling_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_line_burst_num:23;
        RBus_UInt32  res1:5;
        RBus_UInt32  cap1_addr_toggle_mode:2;
        RBus_UInt32  res2:2;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_word_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_remain_burst_num:23;
        RBus_UInt32  res1:5;
        RBus_UInt32  cap1_finish_status:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap1_remain_setting:1;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  cap1_remain_line_num:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  cap1_soft_rst_before_finish:1;
    };
}h3ddma_cap1_wr_dma_num_bl_wrap_st2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_pixel_encoding:2;
        RBus_UInt32  cap1_bit_sel:2;
        RBus_UInt32  res1:28;
    };
}h3ddma_cap1_wr_dma_pxltobus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  cap1_sta_addr_db:29;
    };
}h3ddma_cap1_cap_l_start_db_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  cap1_sta_addr_r_db:29;
    };
}h3ddma_cap1_cap_r_start_db_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_cap_fifo_overflow:1;
        RBus_UInt32  cap1_cap_under_size:1;
        RBus_UInt32  cap1_cap_over_size:1;
        RBus_UInt32  cap1_cap_last_wr_flag:1;
        RBus_UInt32  cap1_cap_block_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  cap1_freeze_ok:1;
        RBus_UInt32  res2:23;
    };
}h3ddma_cap1_cap_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_frame_access_mode:1;
        RBus_UInt32  res1:21;
        RBus_UInt32  cap2_auto_block_sel_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap2_freeze_en:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  cap2_quad_buf_en:1;
        RBus_UInt32  cap2_set_block_sel:1;
        RBus_UInt32  cap2_cap_block_fw:2;
        RBus_UInt32  cap2_triple_buf_en:1;
    };
}h3ddma_cap2_cap_ctl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap2_dma_up_limit:28;
    };
}h3ddma_cap2_cti_dma_wr_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap2_dma_low_limit:28;
    };
}h3ddma_cap2_cti_dma_wr_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_dma_enable:1;
        RBus_UInt32  cap2_force_all_rst:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  cap2_max_outstanding:2;
        RBus_UInt32  cap2_dma_1byte_swap:1;
        RBus_UInt32  cap2_dma_2byte_swap:1;
        RBus_UInt32  cap2_dma_4byte_swap:1;
        RBus_UInt32  cap2_dma_8byte_swap:1;
        RBus_UInt32  res2:18;
    };
}h3ddma_cap2_cti_dma_wr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_zero_length_err:1;
        RBus_UInt32  cap2_exceed_range_err:1;
        RBus_UInt32  cap2_data_fifo_underflow_err:1;
        RBus_UInt32  cap2_soft_rst_with_data_left:1;
        RBus_UInt32  cap2_soft_rst_before_cmd_finish:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cap2_cur_outstanding:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap2_dma_data_water:9;
        RBus_UInt32  res3:3;
        RBus_UInt32  cap2_dma_cmd_water:3;
        RBus_UInt32  res4:1;
    };
}h3ddma_cap2_cti_dma_wr_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_selected_bl:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  cap2_last_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap2_target_ack_num:7;
        RBus_UInt32  res3:7;
        RBus_UInt32  cap2_last_no_ack_error:1;
        RBus_UInt32  cap2_ack_num_error:1;
    };
}h3ddma_cap2_cti_dma_wr_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_addr_bl_sel:2;
        RBus_UInt32  res1:3;
        RBus_UInt32  cap2_selected_addr:27;
    };
}h3ddma_cap2_cti_dma_wr_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_highest_water_level:9;
        RBus_UInt32  res1:6;
        RBus_UInt32  cap2_monitor_thd:9;
        RBus_UInt32  cap2_reach_thd:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap2_monitor_conti:1;
        RBus_UInt32  cap2_monitor_en:1;
    };
}h3ddma_cap2_cti_dma_wr_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap2_sta_addr_0:28;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_addr_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap2_sta_addr_1:28;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_addr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap2_sta_addr_2:28;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_addr_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap2_sta_addr_3:28;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_addr_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap2_sta_addr_r0:28;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_addr_r0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap2_sta_addr_r1:28;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_addr_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap2_sta_addr_r2:28;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_addr_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap2_sta_addr_r3:28;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_addr_r3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap2_line_step:28;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_line_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap2_burst_len:7;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap2_line_num:12;
        RBus_UInt32  res3:4;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_rolling_num:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  cap2_rolling_space:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  cap2_rolling_enable:1;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_rolling_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_line_burst_num:23;
        RBus_UInt32  res1:5;
        RBus_UInt32  cap2_addr_toggle_mode:2;
        RBus_UInt32  res2:2;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_word_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_remain_burst_num:23;
        RBus_UInt32  res1:5;
        RBus_UInt32  cap2_finish_status:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap2_remain_setting:1;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  cap2_remain_line_num:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  cap2_soft_rst_before_finish:1;
    };
}h3ddma_cap2_wr_dma_num_bl_wrap_st2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_pixel_encoding:2;
        RBus_UInt32  cap2_bit_sel:2;
        RBus_UInt32  res1:28;
    };
}h3ddma_cap2_wr_dma_pxltobus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  cap2_sta_addr_db:29;
    };
}h3ddma_cap2_cap_l_start_db_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  cap2_sta_addr_r_db:29;
    };
}h3ddma_cap2_cap_r_start_db_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap2_cap_fifo_overflow:1;
        RBus_UInt32  cap2_cap_under_size:1;
        RBus_UInt32  cap2_cap_over_size:1;
        RBus_UInt32  cap2_cap_last_wr_flag:1;
        RBus_UInt32  cap2_cap_block_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  cap2_freeze_ok:1;
        RBus_UInt32  res2:23;
    };
}h3ddma_cap2_cap_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_frame_access_mode:1;
        RBus_UInt32  res1:21;
        RBus_UInt32  cap3_auto_block_sel_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap3_freeze_en:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  cap3_quad_buf_en:1;
        RBus_UInt32  cap3_set_block_sel:1;
        RBus_UInt32  cap3_cap_block_fw:2;
        RBus_UInt32  cap3_triple_buf_en:1;
    };
}h3ddma_cap3_cap_ctl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap3_dma_up_limit:28;
    };
}h3ddma_cap3_cti_dma_wr_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap3_dma_low_limit:28;
    };
}h3ddma_cap3_cti_dma_wr_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_dma_enable:1;
        RBus_UInt32  cap3_force_all_rst:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  cap3_max_outstanding:2;
        RBus_UInt32  cap3_dma_1byte_swap:1;
        RBus_UInt32  cap3_dma_2byte_swap:1;
        RBus_UInt32  cap3_dma_4byte_swap:1;
        RBus_UInt32  cap3_dma_8byte_swap:1;
        RBus_UInt32  res2:18;
    };
}h3ddma_cap3_cti_dma_wr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_zero_length_err:1;
        RBus_UInt32  cap3_exceed_range_err:1;
        RBus_UInt32  cap3_data_fifo_underflow_err:1;
        RBus_UInt32  cap3_soft_rst_with_data_left:1;
        RBus_UInt32  cap3_soft_rst_before_cmd_finish:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cap3_cur_outstanding:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap3_dma_data_water:6;
        RBus_UInt32  res3:6;
        RBus_UInt32  cap3_dma_cmd_water:3;
        RBus_UInt32  res4:1;
    };
}h3ddma_cap3_cti_dma_wr_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_selected_bl:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  cap3_last_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap3_target_ack_num:7;
        RBus_UInt32  res3:7;
        RBus_UInt32  cap3_last_no_ack_error:1;
        RBus_UInt32  cap3_ack_num_error:1;
    };
}h3ddma_cap3_cti_dma_wr_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_addr_bl_sel:2;
        RBus_UInt32  res1:3;
        RBus_UInt32  cap3_selected_addr:27;
    };
}h3ddma_cap3_cti_dma_wr_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_highest_water_level:6;
        RBus_UInt32  res1:12;
        RBus_UInt32  cap3_monitor_thd:6;
        RBus_UInt32  cap3_reach_thd:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap3_monitor_conti:1;
        RBus_UInt32  cap3_monitor_en:1;
    };
}h3ddma_cap3_cti_dma_wr_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap3_sta_addr_0:28;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_addr_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap3_sta_addr_1:28;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_addr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap3_sta_addr_2:28;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_addr_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap3_sta_addr_3:28;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_addr_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap3_sta_addr_r0:28;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_addr_r0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap3_sta_addr_r1:28;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_addr_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap3_sta_addr_r2:28;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_addr_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap3_sta_addr_r3:28;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_addr_r3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap3_line_step:28;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_line_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cap3_burst_len:7;
        RBus_UInt32  res2:5;
        RBus_UInt32  cap3_line_num:12;
        RBus_UInt32  res3:4;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_rolling_num:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  cap3_rolling_space:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  cap3_rolling_enable:1;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_rolling_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_line_burst_num:23;
        RBus_UInt32  res1:5;
        RBus_UInt32  cap3_addr_toggle_mode:2;
        RBus_UInt32  res2:2;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_word_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_remain_burst_num:23;
        RBus_UInt32  res1:5;
        RBus_UInt32  cap3_finish_status:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  cap3_remain_setting:1;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  cap3_remain_line_num:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  cap3_soft_rst_before_finish:1;
    };
}h3ddma_cap3_wr_dma_num_bl_wrap_st2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_pixel_encoding:2;
        RBus_UInt32  cap3_bit_sel:2;
        RBus_UInt32  res1:28;
    };
}h3ddma_cap3_wr_dma_pxltobus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  cap3_sta_addr_db:29;
    };
}h3ddma_cap3_cap_l_start_db_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  cap3_sta_addr_r_db:29;
    };
}h3ddma_cap3_cap_r_start_db_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap3_cap_fifo_overflow:1;
        RBus_UInt32  cap3_cap_under_size:1;
        RBus_UInt32  cap3_cap_over_size:1;
        RBus_UInt32  cap3_cap_last_wr_flag:1;
        RBus_UInt32  cap3_cap_block_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  cap3_freeze_ok:1;
        RBus_UInt32  res2:23;
    };
}h3ddma_cap3_cap_status_RBUS;




#endif 


#endif 
