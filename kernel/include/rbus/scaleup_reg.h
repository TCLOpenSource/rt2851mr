/**
* @file Merlin5-DesignSpec-D-Domain_UZU
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_SCALEUP_REG_H_
#define _RBUS_SCALEUP_REG_H_

#include "rbus_types.h"



//  SCALEUP Register Address
#define  SCALEUP_D_UZU_Globle_Ctrl                                              0x18029000
#define  SCALEUP_D_UZU_Globle_Ctrl_reg_addr                                      "0xB8029000"
#define  SCALEUP_D_UZU_Globle_Ctrl_reg                                           0xB8029000
#define  SCALEUP_D_UZU_Globle_Ctrl_inst_addr                                     "0x0000"
#define  set_SCALEUP_D_UZU_Globle_Ctrl_reg(data)                                 (*((volatile unsigned int*)SCALEUP_D_UZU_Globle_Ctrl_reg)=data)
#define  get_SCALEUP_D_UZU_Globle_Ctrl_reg                                       (*((volatile unsigned int*)SCALEUP_D_UZU_Globle_Ctrl_reg))
#define  SCALEUP_D_UZU_Globle_Ctrl_dummy_31_16_shift                             (16)
#define  SCALEUP_D_UZU_Globle_Ctrl_uzu_bypass_no_pwrsave_shift                   (15)
#define  SCALEUP_D_UZU_Globle_Ctrl_uzu_bypass_force_shift                        (14)
#define  SCALEUP_D_UZU_Globle_Ctrl_lr_black_en_shift                             (13)
#define  SCALEUP_D_UZU_Globle_Ctrl_lr_black_sel_shift                            (12)
#define  SCALEUP_D_UZU_Globle_Ctrl_in_black_en_shift                             (11)
#define  SCALEUP_D_UZU_Globle_Ctrl_in_even_black_shift                           (10)
#define  SCALEUP_D_UZU_Globle_Ctrl_out_black_en_shift                            (9)
#define  SCALEUP_D_UZU_Globle_Ctrl_out_even_black_shift                          (8)
#define  SCALEUP_D_UZU_Globle_Ctrl_patgen_sync_shift                             (7)
#define  SCALEUP_D_UZU_Globle_Ctrl_patgen_mode_shift                             (4)
#define  SCALEUP_D_UZU_Globle_Ctrl_patgen_lflag_en_shift                         (3)
#define  SCALEUP_D_UZU_Globle_Ctrl_patgen_field_shift                            (2)
#define  SCALEUP_D_UZU_Globle_Ctrl_patgen_sel_shift                              (0)
#define  SCALEUP_D_UZU_Globle_Ctrl_dummy_31_16_mask                              (0xFFFF0000)
#define  SCALEUP_D_UZU_Globle_Ctrl_uzu_bypass_no_pwrsave_mask                    (0x00008000)
#define  SCALEUP_D_UZU_Globle_Ctrl_uzu_bypass_force_mask                         (0x00004000)
#define  SCALEUP_D_UZU_Globle_Ctrl_lr_black_en_mask                              (0x00002000)
#define  SCALEUP_D_UZU_Globle_Ctrl_lr_black_sel_mask                             (0x00001000)
#define  SCALEUP_D_UZU_Globle_Ctrl_in_black_en_mask                              (0x00000800)
#define  SCALEUP_D_UZU_Globle_Ctrl_in_even_black_mask                            (0x00000400)
#define  SCALEUP_D_UZU_Globle_Ctrl_out_black_en_mask                             (0x00000200)
#define  SCALEUP_D_UZU_Globle_Ctrl_out_even_black_mask                           (0x00000100)
#define  SCALEUP_D_UZU_Globle_Ctrl_patgen_sync_mask                              (0x00000080)
#define  SCALEUP_D_UZU_Globle_Ctrl_patgen_mode_mask                              (0x00000070)
#define  SCALEUP_D_UZU_Globle_Ctrl_patgen_lflag_en_mask                          (0x00000008)
#define  SCALEUP_D_UZU_Globle_Ctrl_patgen_field_mask                             (0x00000004)
#define  SCALEUP_D_UZU_Globle_Ctrl_patgen_sel_mask                               (0x00000003)
#define  SCALEUP_D_UZU_Globle_Ctrl_dummy_31_16(data)                             (0xFFFF0000&((data)<<16))
#define  SCALEUP_D_UZU_Globle_Ctrl_uzu_bypass_no_pwrsave(data)                   (0x00008000&((data)<<15))
#define  SCALEUP_D_UZU_Globle_Ctrl_uzu_bypass_force(data)                        (0x00004000&((data)<<14))
#define  SCALEUP_D_UZU_Globle_Ctrl_lr_black_en(data)                             (0x00002000&((data)<<13))
#define  SCALEUP_D_UZU_Globle_Ctrl_lr_black_sel(data)                            (0x00001000&((data)<<12))
#define  SCALEUP_D_UZU_Globle_Ctrl_in_black_en(data)                             (0x00000800&((data)<<11))
#define  SCALEUP_D_UZU_Globle_Ctrl_in_even_black(data)                           (0x00000400&((data)<<10))
#define  SCALEUP_D_UZU_Globle_Ctrl_out_black_en(data)                            (0x00000200&((data)<<9))
#define  SCALEUP_D_UZU_Globle_Ctrl_out_even_black(data)                          (0x00000100&((data)<<8))
#define  SCALEUP_D_UZU_Globle_Ctrl_patgen_sync(data)                             (0x00000080&((data)<<7))
#define  SCALEUP_D_UZU_Globle_Ctrl_patgen_mode(data)                             (0x00000070&((data)<<4))
#define  SCALEUP_D_UZU_Globle_Ctrl_patgen_lflag_en(data)                         (0x00000008&((data)<<3))
#define  SCALEUP_D_UZU_Globle_Ctrl_patgen_field(data)                            (0x00000004&((data)<<2))
#define  SCALEUP_D_UZU_Globle_Ctrl_patgen_sel(data)                              (0x00000003&(data))
#define  SCALEUP_D_UZU_Globle_Ctrl_get_dummy_31_16(data)                         ((0xFFFF0000&(data))>>16)
#define  SCALEUP_D_UZU_Globle_Ctrl_get_uzu_bypass_no_pwrsave(data)               ((0x00008000&(data))>>15)
#define  SCALEUP_D_UZU_Globle_Ctrl_get_uzu_bypass_force(data)                    ((0x00004000&(data))>>14)
#define  SCALEUP_D_UZU_Globle_Ctrl_get_lr_black_en(data)                         ((0x00002000&(data))>>13)
#define  SCALEUP_D_UZU_Globle_Ctrl_get_lr_black_sel(data)                        ((0x00001000&(data))>>12)
#define  SCALEUP_D_UZU_Globle_Ctrl_get_in_black_en(data)                         ((0x00000800&(data))>>11)
#define  SCALEUP_D_UZU_Globle_Ctrl_get_in_even_black(data)                       ((0x00000400&(data))>>10)
#define  SCALEUP_D_UZU_Globle_Ctrl_get_out_black_en(data)                        ((0x00000200&(data))>>9)
#define  SCALEUP_D_UZU_Globle_Ctrl_get_out_even_black(data)                      ((0x00000100&(data))>>8)
#define  SCALEUP_D_UZU_Globle_Ctrl_get_patgen_sync(data)                         ((0x00000080&(data))>>7)
#define  SCALEUP_D_UZU_Globle_Ctrl_get_patgen_mode(data)                         ((0x00000070&(data))>>4)
#define  SCALEUP_D_UZU_Globle_Ctrl_get_patgen_lflag_en(data)                     ((0x00000008&(data))>>3)
#define  SCALEUP_D_UZU_Globle_Ctrl_get_patgen_field(data)                        ((0x00000004&(data))>>2)
#define  SCALEUP_D_UZU_Globle_Ctrl_get_patgen_sel(data)                          (0x00000003&(data))

#define  SCALEUP_DM_UZU_Ctrl                                                    0x18029004
#define  SCALEUP_DM_UZU_Ctrl_reg_addr                                            "0xB8029004"
#define  SCALEUP_DM_UZU_Ctrl_reg                                                 0xB8029004
#define  SCALEUP_DM_UZU_Ctrl_inst_addr                                           "0x0001"
#define  set_SCALEUP_DM_UZU_Ctrl_reg(data)                                       (*((volatile unsigned int*)SCALEUP_DM_UZU_Ctrl_reg)=data)
#define  get_SCALEUP_DM_UZU_Ctrl_reg                                             (*((volatile unsigned int*)SCALEUP_DM_UZU_Ctrl_reg))
#define  SCALEUP_DM_UZU_Ctrl_hor_mode_sel_shift                                  (30)
#define  SCALEUP_DM_UZU_Ctrl_ver_pr_mode_shift                                   (26)
#define  SCALEUP_DM_UZU_Ctrl_wd_main_buf_udf_en_shift                            (25)
#define  SCALEUP_DM_UZU_Ctrl_irq_main_buf_udf_en_shift                           (24)
#define  SCALEUP_DM_UZU_Ctrl_bypassfornr_shift                                   (23)
#define  SCALEUP_DM_UZU_Ctrl_v_y_consttab_sel_shift                              (21)
#define  SCALEUP_DM_UZU_Ctrl_v_c_consttab_sel_shift                              (19)
#define  SCALEUP_DM_UZU_Ctrl_h_y_consttab_sel_shift                              (17)
#define  SCALEUP_DM_UZU_Ctrl_h_c_consttab_sel_shift                              (15)
#define  SCALEUP_DM_UZU_Ctrl_hor12_table_sel_shift                               (13)
#define  SCALEUP_DM_UZU_Ctrl_d_3d_sel_en_shift                                   (12)
#define  SCALEUP_DM_UZU_Ctrl_video_comp_en_shift                                 (11)
#define  SCALEUP_DM_UZU_Ctrl_odd_inv_shift                                       (10)
#define  SCALEUP_DM_UZU_Ctrl_in_fmt_conv_shift                                   (9)
#define  SCALEUP_DM_UZU_Ctrl_conv_type_shift                                     (8)
#define  SCALEUP_DM_UZU_Ctrl_v_y_table_sel_shift                                 (7)
#define  SCALEUP_DM_UZU_Ctrl_v_c_table_sel_shift                                 (6)
#define  SCALEUP_DM_UZU_Ctrl_h_y_table_sel_shift                                 (5)
#define  SCALEUP_DM_UZU_Ctrl_h_c_table_sel_shift                                 (4)
#define  SCALEUP_DM_UZU_Ctrl_in_fmt_dup_shift                                    (3)
#define  SCALEUP_DM_UZU_Ctrl_v_zoom_en_shift                                     (1)
#define  SCALEUP_DM_UZU_Ctrl_h_zoom_en_shift                                     (0)
#define  SCALEUP_DM_UZU_Ctrl_hor_mode_sel_mask                                   (0xC0000000)
#define  SCALEUP_DM_UZU_Ctrl_ver_pr_mode_mask                                    (0x0C000000)
#define  SCALEUP_DM_UZU_Ctrl_wd_main_buf_udf_en_mask                             (0x02000000)
#define  SCALEUP_DM_UZU_Ctrl_irq_main_buf_udf_en_mask                            (0x01000000)
#define  SCALEUP_DM_UZU_Ctrl_bypassfornr_mask                                    (0x00800000)
#define  SCALEUP_DM_UZU_Ctrl_v_y_consttab_sel_mask                               (0x00600000)
#define  SCALEUP_DM_UZU_Ctrl_v_c_consttab_sel_mask                               (0x00180000)
#define  SCALEUP_DM_UZU_Ctrl_h_y_consttab_sel_mask                               (0x00060000)
#define  SCALEUP_DM_UZU_Ctrl_h_c_consttab_sel_mask                               (0x00018000)
#define  SCALEUP_DM_UZU_Ctrl_hor12_table_sel_mask                                (0x00006000)
#define  SCALEUP_DM_UZU_Ctrl_d_3d_sel_en_mask                                    (0x00001000)
#define  SCALEUP_DM_UZU_Ctrl_video_comp_en_mask                                  (0x00000800)
#define  SCALEUP_DM_UZU_Ctrl_odd_inv_mask                                        (0x00000400)
#define  SCALEUP_DM_UZU_Ctrl_in_fmt_conv_mask                                    (0x00000200)
#define  SCALEUP_DM_UZU_Ctrl_conv_type_mask                                      (0x00000100)
#define  SCALEUP_DM_UZU_Ctrl_v_y_table_sel_mask                                  (0x00000080)
#define  SCALEUP_DM_UZU_Ctrl_v_c_table_sel_mask                                  (0x00000040)
#define  SCALEUP_DM_UZU_Ctrl_h_y_table_sel_mask                                  (0x00000020)
#define  SCALEUP_DM_UZU_Ctrl_h_c_table_sel_mask                                  (0x00000010)
#define  SCALEUP_DM_UZU_Ctrl_in_fmt_dup_mask                                     (0x00000008)
#define  SCALEUP_DM_UZU_Ctrl_v_zoom_en_mask                                      (0x00000002)
#define  SCALEUP_DM_UZU_Ctrl_h_zoom_en_mask                                      (0x00000001)
#define  SCALEUP_DM_UZU_Ctrl_hor_mode_sel(data)                                  (0xC0000000&((data)<<30))
#define  SCALEUP_DM_UZU_Ctrl_ver_pr_mode(data)                                   (0x0C000000&((data)<<26))
#define  SCALEUP_DM_UZU_Ctrl_wd_main_buf_udf_en(data)                            (0x02000000&((data)<<25))
#define  SCALEUP_DM_UZU_Ctrl_irq_main_buf_udf_en(data)                           (0x01000000&((data)<<24))
#define  SCALEUP_DM_UZU_Ctrl_bypassfornr(data)                                   (0x00800000&((data)<<23))
#define  SCALEUP_DM_UZU_Ctrl_v_y_consttab_sel(data)                              (0x00600000&((data)<<21))
#define  SCALEUP_DM_UZU_Ctrl_v_c_consttab_sel(data)                              (0x00180000&((data)<<19))
#define  SCALEUP_DM_UZU_Ctrl_h_y_consttab_sel(data)                              (0x00060000&((data)<<17))
#define  SCALEUP_DM_UZU_Ctrl_h_c_consttab_sel(data)                              (0x00018000&((data)<<15))
#define  SCALEUP_DM_UZU_Ctrl_hor12_table_sel(data)                               (0x00006000&((data)<<13))
#define  SCALEUP_DM_UZU_Ctrl_d_3d_sel_en(data)                                   (0x00001000&((data)<<12))
#define  SCALEUP_DM_UZU_Ctrl_video_comp_en(data)                                 (0x00000800&((data)<<11))
#define  SCALEUP_DM_UZU_Ctrl_odd_inv(data)                                       (0x00000400&((data)<<10))
#define  SCALEUP_DM_UZU_Ctrl_in_fmt_conv(data)                                   (0x00000200&((data)<<9))
#define  SCALEUP_DM_UZU_Ctrl_conv_type(data)                                     (0x00000100&((data)<<8))
#define  SCALEUP_DM_UZU_Ctrl_v_y_table_sel(data)                                 (0x00000080&((data)<<7))
#define  SCALEUP_DM_UZU_Ctrl_v_c_table_sel(data)                                 (0x00000040&((data)<<6))
#define  SCALEUP_DM_UZU_Ctrl_h_y_table_sel(data)                                 (0x00000020&((data)<<5))
#define  SCALEUP_DM_UZU_Ctrl_h_c_table_sel(data)                                 (0x00000010&((data)<<4))
#define  SCALEUP_DM_UZU_Ctrl_in_fmt_dup(data)                                    (0x00000008&((data)<<3))
#define  SCALEUP_DM_UZU_Ctrl_v_zoom_en(data)                                     (0x00000002&((data)<<1))
#define  SCALEUP_DM_UZU_Ctrl_h_zoom_en(data)                                     (0x00000001&(data))
#define  SCALEUP_DM_UZU_Ctrl_get_hor_mode_sel(data)                              ((0xC0000000&(data))>>30)
#define  SCALEUP_DM_UZU_Ctrl_get_ver_pr_mode(data)                               ((0x0C000000&(data))>>26)
#define  SCALEUP_DM_UZU_Ctrl_get_wd_main_buf_udf_en(data)                        ((0x02000000&(data))>>25)
#define  SCALEUP_DM_UZU_Ctrl_get_irq_main_buf_udf_en(data)                       ((0x01000000&(data))>>24)
#define  SCALEUP_DM_UZU_Ctrl_get_bypassfornr(data)                               ((0x00800000&(data))>>23)
#define  SCALEUP_DM_UZU_Ctrl_get_v_y_consttab_sel(data)                          ((0x00600000&(data))>>21)
#define  SCALEUP_DM_UZU_Ctrl_get_v_c_consttab_sel(data)                          ((0x00180000&(data))>>19)
#define  SCALEUP_DM_UZU_Ctrl_get_h_y_consttab_sel(data)                          ((0x00060000&(data))>>17)
#define  SCALEUP_DM_UZU_Ctrl_get_h_c_consttab_sel(data)                          ((0x00018000&(data))>>15)
#define  SCALEUP_DM_UZU_Ctrl_get_hor12_table_sel(data)                           ((0x00006000&(data))>>13)
#define  SCALEUP_DM_UZU_Ctrl_get_d_3d_sel_en(data)                               ((0x00001000&(data))>>12)
#define  SCALEUP_DM_UZU_Ctrl_get_video_comp_en(data)                             ((0x00000800&(data))>>11)
#define  SCALEUP_DM_UZU_Ctrl_get_odd_inv(data)                                   ((0x00000400&(data))>>10)
#define  SCALEUP_DM_UZU_Ctrl_get_in_fmt_conv(data)                               ((0x00000200&(data))>>9)
#define  SCALEUP_DM_UZU_Ctrl_get_conv_type(data)                                 ((0x00000100&(data))>>8)
#define  SCALEUP_DM_UZU_Ctrl_get_v_y_table_sel(data)                             ((0x00000080&(data))>>7)
#define  SCALEUP_DM_UZU_Ctrl_get_v_c_table_sel(data)                             ((0x00000040&(data))>>6)
#define  SCALEUP_DM_UZU_Ctrl_get_h_y_table_sel(data)                             ((0x00000020&(data))>>5)
#define  SCALEUP_DM_UZU_Ctrl_get_h_c_table_sel(data)                             ((0x00000010&(data))>>4)
#define  SCALEUP_DM_UZU_Ctrl_get_in_fmt_dup(data)                                ((0x00000008&(data))>>3)
#define  SCALEUP_DM_UZU_Ctrl_get_v_zoom_en(data)                                 ((0x00000002&(data))>>1)
#define  SCALEUP_DM_UZU_Ctrl_get_h_zoom_en(data)                                 (0x00000001&(data))

#define  SCALEUP_DM_UZU_Scale_Hor_Factor                                        0x18029008
#define  SCALEUP_DM_UZU_Scale_Hor_Factor_reg_addr                                "0xB8029008"
#define  SCALEUP_DM_UZU_Scale_Hor_Factor_reg                                     0xB8029008
#define  SCALEUP_DM_UZU_Scale_Hor_Factor_inst_addr                               "0x0002"
#define  set_SCALEUP_DM_UZU_Scale_Hor_Factor_reg(data)                           (*((volatile unsigned int*)SCALEUP_DM_UZU_Scale_Hor_Factor_reg)=data)
#define  get_SCALEUP_DM_UZU_Scale_Hor_Factor_reg                                 (*((volatile unsigned int*)SCALEUP_DM_UZU_Scale_Hor_Factor_reg))
#define  SCALEUP_DM_UZU_Scale_Hor_Factor_hor_factor_shift                        (0)
#define  SCALEUP_DM_UZU_Scale_Hor_Factor_hor_factor_mask                         (0x000FFFFF)
#define  SCALEUP_DM_UZU_Scale_Hor_Factor_hor_factor(data)                        (0x000FFFFF&(data))
#define  SCALEUP_DM_UZU_Scale_Hor_Factor_get_hor_factor(data)                    (0x000FFFFF&(data))

#define  SCALEUP_DM_UZU_Scale_Ver_Factor                                        0x1802900C
#define  SCALEUP_DM_UZU_Scale_Ver_Factor_reg_addr                                "0xB802900C"
#define  SCALEUP_DM_UZU_Scale_Ver_Factor_reg                                     0xB802900C
#define  SCALEUP_DM_UZU_Scale_Ver_Factor_inst_addr                               "0x0003"
#define  set_SCALEUP_DM_UZU_Scale_Ver_Factor_reg(data)                           (*((volatile unsigned int*)SCALEUP_DM_UZU_Scale_Ver_Factor_reg)=data)
#define  get_SCALEUP_DM_UZU_Scale_Ver_Factor_reg                                 (*((volatile unsigned int*)SCALEUP_DM_UZU_Scale_Ver_Factor_reg))
#define  SCALEUP_DM_UZU_Scale_Ver_Factor_ver_factor_shift                        (0)
#define  SCALEUP_DM_UZU_Scale_Ver_Factor_ver_factor_mask                         (0x000FFFFF)
#define  SCALEUP_DM_UZU_Scale_Ver_Factor_ver_factor(data)                        (0x000FFFFF&(data))
#define  SCALEUP_DM_UZU_Scale_Ver_Factor_get_ver_factor(data)                    (0x000FFFFF&(data))

#define  SCALEUP_DM_UZU_Hor_Delta1                                              0x18029010
#define  SCALEUP_DM_UZU_Hor_Delta1_reg_addr                                      "0xB8029010"
#define  SCALEUP_DM_UZU_Hor_Delta1_reg                                           0xB8029010
#define  SCALEUP_DM_UZU_Hor_Delta1_inst_addr                                     "0x0004"
#define  set_SCALEUP_DM_UZU_Hor_Delta1_reg(data)                                 (*((volatile unsigned int*)SCALEUP_DM_UZU_Hor_Delta1_reg)=data)
#define  get_SCALEUP_DM_UZU_Hor_Delta1_reg                                       (*((volatile unsigned int*)SCALEUP_DM_UZU_Hor_Delta1_reg))
#define  SCALEUP_DM_UZU_Hor_Delta1_hor_delta1_shift                              (0)
#define  SCALEUP_DM_UZU_Hor_Delta1_hor_delta1_mask                               (0x00001FFF)
#define  SCALEUP_DM_UZU_Hor_Delta1_hor_delta1(data)                              (0x00001FFF&(data))
#define  SCALEUP_DM_UZU_Hor_Delta1_get_hor_delta1(data)                          (0x00001FFF&(data))

#define  SCALEUP_DM_UZU_Hor_Delta2                                              0x18029014
#define  SCALEUP_DM_UZU_Hor_Delta2_reg_addr                                      "0xB8029014"
#define  SCALEUP_DM_UZU_Hor_Delta2_reg                                           0xB8029014
#define  SCALEUP_DM_UZU_Hor_Delta2_inst_addr                                     "0x0005"
#define  set_SCALEUP_DM_UZU_Hor_Delta2_reg(data)                                 (*((volatile unsigned int*)SCALEUP_DM_UZU_Hor_Delta2_reg)=data)
#define  get_SCALEUP_DM_UZU_Hor_Delta2_reg                                       (*((volatile unsigned int*)SCALEUP_DM_UZU_Hor_Delta2_reg))
#define  SCALEUP_DM_UZU_Hor_Delta2_hor_delta2_shift                              (0)
#define  SCALEUP_DM_UZU_Hor_Delta2_hor_delta2_mask                               (0x00001FFF)
#define  SCALEUP_DM_UZU_Hor_Delta2_hor_delta2(data)                              (0x00001FFF&(data))
#define  SCALEUP_DM_UZU_Hor_Delta2_get_hor_delta2(data)                          (0x00001FFF&(data))

#define  SCALEUP_DM_UZU_Hor_Segment1                                            0x18029018
#define  SCALEUP_DM_UZU_Hor_Segment1_reg_addr                                    "0xB8029018"
#define  SCALEUP_DM_UZU_Hor_Segment1_reg                                         0xB8029018
#define  SCALEUP_DM_UZU_Hor_Segment1_inst_addr                                   "0x0006"
#define  set_SCALEUP_DM_UZU_Hor_Segment1_reg(data)                               (*((volatile unsigned int*)SCALEUP_DM_UZU_Hor_Segment1_reg)=data)
#define  get_SCALEUP_DM_UZU_Hor_Segment1_reg                                     (*((volatile unsigned int*)SCALEUP_DM_UZU_Hor_Segment1_reg))
#define  SCALEUP_DM_UZU_Hor_Segment1_hor_segment1_shift                          (0)
#define  SCALEUP_DM_UZU_Hor_Segment1_hor_segment1_mask                           (0x000007FF)
#define  SCALEUP_DM_UZU_Hor_Segment1_hor_segment1(data)                          (0x000007FF&(data))
#define  SCALEUP_DM_UZU_Hor_Segment1_get_hor_segment1(data)                      (0x000007FF&(data))

#define  SCALEUP_DM_UZU_Hor_Segment2                                            0x1802901C
#define  SCALEUP_DM_UZU_Hor_Segment2_reg_addr                                    "0xB802901C"
#define  SCALEUP_DM_UZU_Hor_Segment2_reg                                         0xB802901C
#define  SCALEUP_DM_UZU_Hor_Segment2_inst_addr                                   "0x0007"
#define  set_SCALEUP_DM_UZU_Hor_Segment2_reg(data)                               (*((volatile unsigned int*)SCALEUP_DM_UZU_Hor_Segment2_reg)=data)
#define  get_SCALEUP_DM_UZU_Hor_Segment2_reg                                     (*((volatile unsigned int*)SCALEUP_DM_UZU_Hor_Segment2_reg))
#define  SCALEUP_DM_UZU_Hor_Segment2_hor_segment2_shift                          (0)
#define  SCALEUP_DM_UZU_Hor_Segment2_hor_segment2_mask                           (0x000007FF)
#define  SCALEUP_DM_UZU_Hor_Segment2_hor_segment2(data)                          (0x000007FF&(data))
#define  SCALEUP_DM_UZU_Hor_Segment2_get_hor_segment2(data)                      (0x000007FF&(data))

#define  SCALEUP_DM_UZU_Hor_Segment3                                            0x18029020
#define  SCALEUP_DM_UZU_Hor_Segment3_reg_addr                                    "0xB8029020"
#define  SCALEUP_DM_UZU_Hor_Segment3_reg                                         0xB8029020
#define  SCALEUP_DM_UZU_Hor_Segment3_inst_addr                                   "0x0008"
#define  set_SCALEUP_DM_UZU_Hor_Segment3_reg(data)                               (*((volatile unsigned int*)SCALEUP_DM_UZU_Hor_Segment3_reg)=data)
#define  get_SCALEUP_DM_UZU_Hor_Segment3_reg                                     (*((volatile unsigned int*)SCALEUP_DM_UZU_Hor_Segment3_reg))
#define  SCALEUP_DM_UZU_Hor_Segment3_hor_segment3_shift                          (0)
#define  SCALEUP_DM_UZU_Hor_Segment3_hor_segment3_mask                           (0x00000FFF)
#define  SCALEUP_DM_UZU_Hor_Segment3_hor_segment3(data)                          (0x00000FFF&(data))
#define  SCALEUP_DM_UZU_Hor_Segment3_get_hor_segment3(data)                      (0x00000FFF&(data))

#define  SCALEUP_DM_UZU_Initial_Value                                           0x18029024
#define  SCALEUP_DM_UZU_Initial_Value_reg_addr                                   "0xB8029024"
#define  SCALEUP_DM_UZU_Initial_Value_reg                                        0xB8029024
#define  SCALEUP_DM_UZU_Initial_Value_inst_addr                                  "0x0009"
#define  set_SCALEUP_DM_UZU_Initial_Value_reg(data)                              (*((volatile unsigned int*)SCALEUP_DM_UZU_Initial_Value_reg)=data)
#define  get_SCALEUP_DM_UZU_Initial_Value_reg                                    (*((volatile unsigned int*)SCALEUP_DM_UZU_Initial_Value_reg))
#define  SCALEUP_DM_UZU_Initial_Value_hor_ini_shift                              (8)
#define  SCALEUP_DM_UZU_Initial_Value_ver_ini_shift                              (0)
#define  SCALEUP_DM_UZU_Initial_Value_hor_ini_mask                               (0x0000FF00)
#define  SCALEUP_DM_UZU_Initial_Value_ver_ini_mask                               (0x000000FF)
#define  SCALEUP_DM_UZU_Initial_Value_hor_ini(data)                              (0x0000FF00&((data)<<8))
#define  SCALEUP_DM_UZU_Initial_Value_ver_ini(data)                              (0x000000FF&(data))
#define  SCALEUP_DM_UZU_Initial_Value_get_hor_ini(data)                          ((0x0000FF00&(data))>>8)
#define  SCALEUP_DM_UZU_Initial_Value_get_ver_ini(data)                          (0x000000FF&(data))

#define  SCALEUP_DM_UZU_Initial_Value_left                                      0x180290E8
#define  SCALEUP_DM_UZU_Initial_Value_left_reg_addr                              "0xB80290E8"
#define  SCALEUP_DM_UZU_Initial_Value_left_reg                                   0xB80290E8
#define  SCALEUP_DM_UZU_Initial_Value_left_inst_addr                             "0x000A"
#define  set_SCALEUP_DM_UZU_Initial_Value_left_reg(data)                         (*((volatile unsigned int*)SCALEUP_DM_UZU_Initial_Value_left_reg)=data)
#define  get_SCALEUP_DM_UZU_Initial_Value_left_reg                               (*((volatile unsigned int*)SCALEUP_DM_UZU_Initial_Value_left_reg))
#define  SCALEUP_DM_UZU_Initial_Value_left_hor_ini_l_shift                       (8)
#define  SCALEUP_DM_UZU_Initial_Value_left_ver_ini_l_shift                       (0)
#define  SCALEUP_DM_UZU_Initial_Value_left_hor_ini_l_mask                        (0x0000FF00)
#define  SCALEUP_DM_UZU_Initial_Value_left_ver_ini_l_mask                        (0x000000FF)
#define  SCALEUP_DM_UZU_Initial_Value_left_hor_ini_l(data)                       (0x0000FF00&((data)<<8))
#define  SCALEUP_DM_UZU_Initial_Value_left_ver_ini_l(data)                       (0x000000FF&(data))
#define  SCALEUP_DM_UZU_Initial_Value_left_get_hor_ini_l(data)                   ((0x0000FF00&(data))>>8)
#define  SCALEUP_DM_UZU_Initial_Value_left_get_ver_ini_l(data)                   (0x000000FF&(data))

#define  SCALEUP_DM_UZU_Input_Size                                              0x18029028
#define  SCALEUP_DM_UZU_Input_Size_reg_addr                                      "0xB8029028"
#define  SCALEUP_DM_UZU_Input_Size_reg                                           0xB8029028
#define  SCALEUP_DM_UZU_Input_Size_inst_addr                                     "0x000B"
#define  set_SCALEUP_DM_UZU_Input_Size_reg(data)                                 (*((volatile unsigned int*)SCALEUP_DM_UZU_Input_Size_reg)=data)
#define  get_SCALEUP_DM_UZU_Input_Size_reg                                       (*((volatile unsigned int*)SCALEUP_DM_UZU_Input_Size_reg))
#define  SCALEUP_DM_UZU_Input_Size_hor_input_size_shift                          (16)
#define  SCALEUP_DM_UZU_Input_Size_ver_input_size_shift                          (0)
#define  SCALEUP_DM_UZU_Input_Size_hor_input_size_mask                           (0x1FFF0000)
#define  SCALEUP_DM_UZU_Input_Size_ver_input_size_mask                           (0x00000FFF)
#define  SCALEUP_DM_UZU_Input_Size_hor_input_size(data)                          (0x1FFF0000&((data)<<16))
#define  SCALEUP_DM_UZU_Input_Size_ver_input_size(data)                          (0x00000FFF&(data))
#define  SCALEUP_DM_UZU_Input_Size_get_hor_input_size(data)                      ((0x1FFF0000&(data))>>16)
#define  SCALEUP_DM_UZU_Input_Size_get_ver_input_size(data)                      (0x00000FFF&(data))

#define  SCALEUP_DM_UZU_V8CTRL                                                  0x180290E0
#define  SCALEUP_DM_UZU_V8CTRL_reg_addr                                          "0xB80290E0"
#define  SCALEUP_DM_UZU_V8CTRL_reg                                               0xB80290E0
#define  SCALEUP_DM_UZU_V8CTRL_inst_addr                                         "0x000C"
#define  set_SCALEUP_DM_UZU_V8CTRL_reg(data)                                     (*((volatile unsigned int*)SCALEUP_DM_UZU_V8CTRL_reg)=data)
#define  get_SCALEUP_DM_UZU_V8CTRL_reg                                           (*((volatile unsigned int*)SCALEUP_DM_UZU_V8CTRL_reg))
#define  SCALEUP_DM_UZU_V8CTRL_dummy_31_4_shift                                  (4)
#define  SCALEUP_DM_UZU_V8CTRL_v8tap_table_sel_shift                             (2)
#define  SCALEUP_DM_UZU_V8CTRL_ver_mode_sel_shift                                (0)
#define  SCALEUP_DM_UZU_V8CTRL_dummy_31_4_mask                                   (0xFFFFFFF0)
#define  SCALEUP_DM_UZU_V8CTRL_v8tap_table_sel_mask                              (0x0000000C)
#define  SCALEUP_DM_UZU_V8CTRL_ver_mode_sel_mask                                 (0x00000003)
#define  SCALEUP_DM_UZU_V8CTRL_dummy_31_4(data)                                  (0xFFFFFFF0&((data)<<4))
#define  SCALEUP_DM_UZU_V8CTRL_v8tap_table_sel(data)                             (0x0000000C&((data)<<2))
#define  SCALEUP_DM_UZU_V8CTRL_ver_mode_sel(data)                                (0x00000003&(data))
#define  SCALEUP_DM_UZU_V8CTRL_get_dummy_31_4(data)                              ((0xFFFFFFF0&(data))>>4)
#define  SCALEUP_DM_UZU_V8CTRL_get_v8tap_table_sel(data)                         ((0x0000000C&(data))>>2)
#define  SCALEUP_DM_UZU_V8CTRL_get_ver_mode_sel(data)                            (0x00000003&(data))

#define  SCALEUP_DM_UZU_12tap_dering                                            0x1802902C
#define  SCALEUP_DM_UZU_12tap_dering_reg_addr                                    "0xB802902C"
#define  SCALEUP_DM_UZU_12tap_dering_reg                                         0xB802902C
#define  SCALEUP_DM_UZU_12tap_dering_inst_addr                                   "0x000D"
#define  set_SCALEUP_DM_UZU_12tap_dering_reg(data)                               (*((volatile unsigned int*)SCALEUP_DM_UZU_12tap_dering_reg)=data)
#define  get_SCALEUP_DM_UZU_12tap_dering_reg                                     (*((volatile unsigned int*)SCALEUP_DM_UZU_12tap_dering_reg))
#define  SCALEUP_DM_UZU_12tap_dering_level_flatness_coeff_shift                  (29)
#define  SCALEUP_DM_UZU_12tap_dering_dering_dbg_mode_shift                       (26)
#define  SCALEUP_DM_UZU_12tap_dering_h4h12_blend_range_shift                     (24)
#define  SCALEUP_DM_UZU_12tap_dering_h4h12_blend_lowbound_shift                  (16)
#define  SCALEUP_DM_UZU_12tap_dering_lpf_blend_mask_sel_shift                    (15)
#define  SCALEUP_DM_UZU_12tap_dering_level_maxmin_coeff_shift                    (12)
#define  SCALEUP_DM_UZU_12tap_dering_h4h12_blend_en_shift                        (11)
#define  SCALEUP_DM_UZU_12tap_dering_lpf_blend_en_shift                          (10)
#define  SCALEUP_DM_UZU_12tap_dering_lpf_blend_range_shift                       (8)
#define  SCALEUP_DM_UZU_12tap_dering_lpf_blend_lowbound_shift                    (0)
#define  SCALEUP_DM_UZU_12tap_dering_level_flatness_coeff_mask                   (0xE0000000)
#define  SCALEUP_DM_UZU_12tap_dering_dering_dbg_mode_mask                        (0x1C000000)
#define  SCALEUP_DM_UZU_12tap_dering_h4h12_blend_range_mask                      (0x03000000)
#define  SCALEUP_DM_UZU_12tap_dering_h4h12_blend_lowbound_mask                   (0x00FF0000)
#define  SCALEUP_DM_UZU_12tap_dering_lpf_blend_mask_sel_mask                     (0x00008000)
#define  SCALEUP_DM_UZU_12tap_dering_level_maxmin_coeff_mask                     (0x00007000)
#define  SCALEUP_DM_UZU_12tap_dering_h4h12_blend_en_mask                         (0x00000800)
#define  SCALEUP_DM_UZU_12tap_dering_lpf_blend_en_mask                           (0x00000400)
#define  SCALEUP_DM_UZU_12tap_dering_lpf_blend_range_mask                        (0x00000300)
#define  SCALEUP_DM_UZU_12tap_dering_lpf_blend_lowbound_mask                     (0x000000FF)
#define  SCALEUP_DM_UZU_12tap_dering_level_flatness_coeff(data)                  (0xE0000000&((data)<<29))
#define  SCALEUP_DM_UZU_12tap_dering_dering_dbg_mode(data)                       (0x1C000000&((data)<<26))
#define  SCALEUP_DM_UZU_12tap_dering_h4h12_blend_range(data)                     (0x03000000&((data)<<24))
#define  SCALEUP_DM_UZU_12tap_dering_h4h12_blend_lowbound(data)                  (0x00FF0000&((data)<<16))
#define  SCALEUP_DM_UZU_12tap_dering_lpf_blend_mask_sel(data)                    (0x00008000&((data)<<15))
#define  SCALEUP_DM_UZU_12tap_dering_level_maxmin_coeff(data)                    (0x00007000&((data)<<12))
#define  SCALEUP_DM_UZU_12tap_dering_h4h12_blend_en(data)                        (0x00000800&((data)<<11))
#define  SCALEUP_DM_UZU_12tap_dering_lpf_blend_en(data)                          (0x00000400&((data)<<10))
#define  SCALEUP_DM_UZU_12tap_dering_lpf_blend_range(data)                       (0x00000300&((data)<<8))
#define  SCALEUP_DM_UZU_12tap_dering_lpf_blend_lowbound(data)                    (0x000000FF&(data))
#define  SCALEUP_DM_UZU_12tap_dering_get_level_flatness_coeff(data)              ((0xE0000000&(data))>>29)
#define  SCALEUP_DM_UZU_12tap_dering_get_dering_dbg_mode(data)                   ((0x1C000000&(data))>>26)
#define  SCALEUP_DM_UZU_12tap_dering_get_h4h12_blend_range(data)                 ((0x03000000&(data))>>24)
#define  SCALEUP_DM_UZU_12tap_dering_get_h4h12_blend_lowbound(data)              ((0x00FF0000&(data))>>16)
#define  SCALEUP_DM_UZU_12tap_dering_get_lpf_blend_mask_sel(data)                ((0x00008000&(data))>>15)
#define  SCALEUP_DM_UZU_12tap_dering_get_level_maxmin_coeff(data)                ((0x00007000&(data))>>12)
#define  SCALEUP_DM_UZU_12tap_dering_get_h4h12_blend_en(data)                    ((0x00000800&(data))>>11)
#define  SCALEUP_DM_UZU_12tap_dering_get_lpf_blend_en(data)                      ((0x00000400&(data))>>10)
#define  SCALEUP_DM_UZU_12tap_dering_get_lpf_blend_range(data)                   ((0x00000300&(data))>>8)
#define  SCALEUP_DM_UZU_12tap_dering_get_lpf_blend_lowbound(data)                (0x000000FF&(data))

#define  SCALEUP_DM_UZU_12tap_dering_cross                                      0x18029034
#define  SCALEUP_DM_UZU_12tap_dering_cross_reg_addr                              "0xB8029034"
#define  SCALEUP_DM_UZU_12tap_dering_cross_reg                                   0xB8029034
#define  SCALEUP_DM_UZU_12tap_dering_cross_inst_addr                             "0x000E"
#define  set_SCALEUP_DM_UZU_12tap_dering_cross_reg(data)                         (*((volatile unsigned int*)SCALEUP_DM_UZU_12tap_dering_cross_reg)=data)
#define  get_SCALEUP_DM_UZU_12tap_dering_cross_reg                               (*((volatile unsigned int*)SCALEUP_DM_UZU_12tap_dering_cross_reg))
#define  SCALEUP_DM_UZU_12tap_dering_cross_dering_cross_lowbd_shift              (8)
#define  SCALEUP_DM_UZU_12tap_dering_cross_dering_cross_en_shift                 (7)
#define  SCALEUP_DM_UZU_12tap_dering_cross_dering_cross_slope_shift              (4)
#define  SCALEUP_DM_UZU_12tap_dering_cross_dering_edgelevel_gain_shift           (0)
#define  SCALEUP_DM_UZU_12tap_dering_cross_dering_cross_lowbd_mask               (0x00001F00)
#define  SCALEUP_DM_UZU_12tap_dering_cross_dering_cross_en_mask                  (0x00000080)
#define  SCALEUP_DM_UZU_12tap_dering_cross_dering_cross_slope_mask               (0x00000070)
#define  SCALEUP_DM_UZU_12tap_dering_cross_dering_edgelevel_gain_mask            (0x0000000F)
#define  SCALEUP_DM_UZU_12tap_dering_cross_dering_cross_lowbd(data)              (0x00001F00&((data)<<8))
#define  SCALEUP_DM_UZU_12tap_dering_cross_dering_cross_en(data)                 (0x00000080&((data)<<7))
#define  SCALEUP_DM_UZU_12tap_dering_cross_dering_cross_slope(data)              (0x00000070&((data)<<4))
#define  SCALEUP_DM_UZU_12tap_dering_cross_dering_edgelevel_gain(data)           (0x0000000F&(data))
#define  SCALEUP_DM_UZU_12tap_dering_cross_get_dering_cross_lowbd(data)          ((0x00001F00&(data))>>8)
#define  SCALEUP_DM_UZU_12tap_dering_cross_get_dering_cross_en(data)             ((0x00000080&(data))>>7)
#define  SCALEUP_DM_UZU_12tap_dering_cross_get_dering_cross_slope(data)          ((0x00000070&(data))>>4)
#define  SCALEUP_DM_UZU_12tap_dering_cross_get_dering_edgelevel_gain(data)       (0x0000000F&(data))

#define  SCALEUP_DM_UZU_gap_dering                                              0x18029170
#define  SCALEUP_DM_UZU_gap_dering_reg_addr                                      "0xB8029170"
#define  SCALEUP_DM_UZU_gap_dering_reg                                           0xB8029170
#define  SCALEUP_DM_UZU_gap_dering_inst_addr                                     "0x000F"
#define  set_SCALEUP_DM_UZU_gap_dering_reg(data)                                 (*((volatile unsigned int*)SCALEUP_DM_UZU_gap_dering_reg)=data)
#define  get_SCALEUP_DM_UZU_gap_dering_reg                                       (*((volatile unsigned int*)SCALEUP_DM_UZU_gap_dering_reg))
#define  SCALEUP_DM_UZU_gap_dering_dering_gap_side_gain_shift                    (28)
#define  SCALEUP_DM_UZU_gap_dering_dering_gap_center_gain_shift                  (25)
#define  SCALEUP_DM_UZU_gap_dering_dering_gap_offset_shift                       (21)
#define  SCALEUP_DM_UZU_gap_dering_dering_gap_sidemode_shift                     (20)
#define  SCALEUP_DM_UZU_gap_dering_dering_h4h12_blend_type_shift                 (18)
#define  SCALEUP_DM_UZU_gap_dering_dering_gap_side_gain_mask                     (0xF0000000)
#define  SCALEUP_DM_UZU_gap_dering_dering_gap_center_gain_mask                   (0x0E000000)
#define  SCALEUP_DM_UZU_gap_dering_dering_gap_offset_mask                        (0x01E00000)
#define  SCALEUP_DM_UZU_gap_dering_dering_gap_sidemode_mask                      (0x00100000)
#define  SCALEUP_DM_UZU_gap_dering_dering_h4h12_blend_type_mask                  (0x000C0000)
#define  SCALEUP_DM_UZU_gap_dering_dering_gap_side_gain(data)                    (0xF0000000&((data)<<28))
#define  SCALEUP_DM_UZU_gap_dering_dering_gap_center_gain(data)                  (0x0E000000&((data)<<25))
#define  SCALEUP_DM_UZU_gap_dering_dering_gap_offset(data)                       (0x01E00000&((data)<<21))
#define  SCALEUP_DM_UZU_gap_dering_dering_gap_sidemode(data)                     (0x00100000&((data)<<20))
#define  SCALEUP_DM_UZU_gap_dering_dering_h4h12_blend_type(data)                 (0x000C0000&((data)<<18))
#define  SCALEUP_DM_UZU_gap_dering_get_dering_gap_side_gain(data)                ((0xF0000000&(data))>>28)
#define  SCALEUP_DM_UZU_gap_dering_get_dering_gap_center_gain(data)              ((0x0E000000&(data))>>25)
#define  SCALEUP_DM_UZU_gap_dering_get_dering_gap_offset(data)                   ((0x01E00000&(data))>>21)
#define  SCALEUP_DM_UZU_gap_dering_get_dering_gap_sidemode(data)                 ((0x00100000&(data))>>20)
#define  SCALEUP_DM_UZU_gap_dering_get_dering_h4h12_blend_type(data)             ((0x000C0000&(data))>>18)

#define  SCALEUP_DM_UZU_gap_deringv                                             0x18029174
#define  SCALEUP_DM_UZU_gap_deringv_reg_addr                                     "0xB8029174"
#define  SCALEUP_DM_UZU_gap_deringv_reg                                          0xB8029174
#define  SCALEUP_DM_UZU_gap_deringv_inst_addr                                    "0x0010"
#define  set_SCALEUP_DM_UZU_gap_deringv_reg(data)                                (*((volatile unsigned int*)SCALEUP_DM_UZU_gap_deringv_reg)=data)
#define  get_SCALEUP_DM_UZU_gap_deringv_reg                                      (*((volatile unsigned int*)SCALEUP_DM_UZU_gap_deringv_reg))
#define  SCALEUP_DM_UZU_gap_deringv_deringv_gap_side_gain_shift                  (28)
#define  SCALEUP_DM_UZU_gap_deringv_deringv_gap_center_gain_shift                (25)
#define  SCALEUP_DM_UZU_gap_deringv_deringv_gap_offset_shift                     (21)
#define  SCALEUP_DM_UZU_gap_deringv_deringv_gap_sidemode_shift                   (20)
#define  SCALEUP_DM_UZU_gap_deringv_deringv_v4v8_blend_type_shift                (18)
#define  SCALEUP_DM_UZU_gap_deringv_deringv_gap_side_gain_mask                   (0xF0000000)
#define  SCALEUP_DM_UZU_gap_deringv_deringv_gap_center_gain_mask                 (0x0E000000)
#define  SCALEUP_DM_UZU_gap_deringv_deringv_gap_offset_mask                      (0x01E00000)
#define  SCALEUP_DM_UZU_gap_deringv_deringv_gap_sidemode_mask                    (0x00100000)
#define  SCALEUP_DM_UZU_gap_deringv_deringv_v4v8_blend_type_mask                 (0x000C0000)
#define  SCALEUP_DM_UZU_gap_deringv_deringv_gap_side_gain(data)                  (0xF0000000&((data)<<28))
#define  SCALEUP_DM_UZU_gap_deringv_deringv_gap_center_gain(data)                (0x0E000000&((data)<<25))
#define  SCALEUP_DM_UZU_gap_deringv_deringv_gap_offset(data)                     (0x01E00000&((data)<<21))
#define  SCALEUP_DM_UZU_gap_deringv_deringv_gap_sidemode(data)                   (0x00100000&((data)<<20))
#define  SCALEUP_DM_UZU_gap_deringv_deringv_v4v8_blend_type(data)                (0x000C0000&((data)<<18))
#define  SCALEUP_DM_UZU_gap_deringv_get_deringv_gap_side_gain(data)              ((0xF0000000&(data))>>28)
#define  SCALEUP_DM_UZU_gap_deringv_get_deringv_gap_center_gain(data)            ((0x0E000000&(data))>>25)
#define  SCALEUP_DM_UZU_gap_deringv_get_deringv_gap_offset(data)                 ((0x01E00000&(data))>>21)
#define  SCALEUP_DM_UZU_gap_deringv_get_deringv_gap_sidemode(data)               ((0x00100000&(data))>>20)
#define  SCALEUP_DM_UZU_gap_deringv_get_deringv_v4v8_blend_type(data)            ((0x000C0000&(data))>>18)

#define  SCALEUP_DM_UZU_8tap_deringv                                            0x18029030
#define  SCALEUP_DM_UZU_8tap_deringv_reg_addr                                    "0xB8029030"
#define  SCALEUP_DM_UZU_8tap_deringv_reg                                         0xB8029030
#define  SCALEUP_DM_UZU_8tap_deringv_inst_addr                                   "0x0011"
#define  set_SCALEUP_DM_UZU_8tap_deringv_reg(data)                               (*((volatile unsigned int*)SCALEUP_DM_UZU_8tap_deringv_reg)=data)
#define  get_SCALEUP_DM_UZU_8tap_deringv_reg                                     (*((volatile unsigned int*)SCALEUP_DM_UZU_8tap_deringv_reg))
#define  SCALEUP_DM_UZU_8tap_deringv_level_flatness_coeff_shift                  (28)
#define  SCALEUP_DM_UZU_8tap_deringv_level_maxmin_coeff_shift                    (24)
#define  SCALEUP_DM_UZU_8tap_deringv_dering_dbg_mode_shift                       (22)
#define  SCALEUP_DM_UZU_8tap_deringv_v4v8_blend_range_shift                      (20)
#define  SCALEUP_DM_UZU_8tap_deringv_v4v8_blend_lowbound_shift                   (8)
#define  SCALEUP_DM_UZU_8tap_deringv_range_center_shift                          (1)
#define  SCALEUP_DM_UZU_8tap_deringv_range_side_shift                            (0)
#define  SCALEUP_DM_UZU_8tap_deringv_level_flatness_coeff_mask                   (0x70000000)
#define  SCALEUP_DM_UZU_8tap_deringv_level_maxmin_coeff_mask                     (0x07000000)
#define  SCALEUP_DM_UZU_8tap_deringv_dering_dbg_mode_mask                        (0x00C00000)
#define  SCALEUP_DM_UZU_8tap_deringv_v4v8_blend_range_mask                       (0x00300000)
#define  SCALEUP_DM_UZU_8tap_deringv_v4v8_blend_lowbound_mask                    (0x0000FF00)
#define  SCALEUP_DM_UZU_8tap_deringv_range_center_mask                           (0x00000002)
#define  SCALEUP_DM_UZU_8tap_deringv_range_side_mask                             (0x00000001)
#define  SCALEUP_DM_UZU_8tap_deringv_level_flatness_coeff(data)                  (0x70000000&((data)<<28))
#define  SCALEUP_DM_UZU_8tap_deringv_level_maxmin_coeff(data)                    (0x07000000&((data)<<24))
#define  SCALEUP_DM_UZU_8tap_deringv_dering_dbg_mode(data)                       (0x00C00000&((data)<<22))
#define  SCALEUP_DM_UZU_8tap_deringv_v4v8_blend_range(data)                      (0x00300000&((data)<<20))
#define  SCALEUP_DM_UZU_8tap_deringv_v4v8_blend_lowbound(data)                   (0x0000FF00&((data)<<8))
#define  SCALEUP_DM_UZU_8tap_deringv_range_center(data)                          (0x00000002&((data)<<1))
#define  SCALEUP_DM_UZU_8tap_deringv_range_side(data)                            (0x00000001&(data))
#define  SCALEUP_DM_UZU_8tap_deringv_get_level_flatness_coeff(data)              ((0x70000000&(data))>>28)
#define  SCALEUP_DM_UZU_8tap_deringv_get_level_maxmin_coeff(data)                ((0x07000000&(data))>>24)
#define  SCALEUP_DM_UZU_8tap_deringv_get_dering_dbg_mode(data)                   ((0x00C00000&(data))>>22)
#define  SCALEUP_DM_UZU_8tap_deringv_get_v4v8_blend_range(data)                  ((0x00300000&(data))>>20)
#define  SCALEUP_DM_UZU_8tap_deringv_get_v4v8_blend_lowbound(data)               ((0x0000FF00&(data))>>8)
#define  SCALEUP_DM_UZU_8tap_deringv_get_range_center(data)                      ((0x00000002&(data))>>1)
#define  SCALEUP_DM_UZU_8tap_deringv_get_range_side(data)                        (0x00000001&(data))

#define  SCALEUP_DM_UZU_chroma_8tap                                             0x18029178
#define  SCALEUP_DM_UZU_chroma_8tap_reg_addr                                     "0xB8029178"
#define  SCALEUP_DM_UZU_chroma_8tap_reg                                          0xB8029178
#define  SCALEUP_DM_UZU_chroma_8tap_inst_addr                                    "0x0012"
#define  set_SCALEUP_DM_UZU_chroma_8tap_reg(data)                                (*((volatile unsigned int*)SCALEUP_DM_UZU_chroma_8tap_reg)=data)
#define  get_SCALEUP_DM_UZU_chroma_8tap_reg                                      (*((volatile unsigned int*)SCALEUP_DM_UZU_chroma_8tap_reg))
#define  SCALEUP_DM_UZU_chroma_8tap_v8_c_sel_shift                               (16)
#define  SCALEUP_DM_UZU_chroma_8tap_h8_c_sel_shift                               (0)
#define  SCALEUP_DM_UZU_chroma_8tap_v8_c_sel_mask                                (0x03FF0000)
#define  SCALEUP_DM_UZU_chroma_8tap_h8_c_sel_mask                                (0x000003FF)
#define  SCALEUP_DM_UZU_chroma_8tap_v8_c_sel(data)                               (0x03FF0000&((data)<<16))
#define  SCALEUP_DM_UZU_chroma_8tap_h8_c_sel(data)                               (0x000003FF&(data))
#define  SCALEUP_DM_UZU_chroma_8tap_get_v8_c_sel(data)                           ((0x03FF0000&(data))>>16)
#define  SCALEUP_DM_UZU_chroma_8tap_get_h8_c_sel(data)                           (0x000003FF&(data))

#define  SCALEUP_DM_UZU_de_distortion                                           0x18029150
#define  SCALEUP_DM_UZU_de_distortion_reg_addr                                   "0xB8029150"
#define  SCALEUP_DM_UZU_de_distortion_reg                                        0xB8029150
#define  SCALEUP_DM_UZU_de_distortion_inst_addr                                  "0x0013"
#define  set_SCALEUP_DM_UZU_de_distortion_reg(data)                              (*((volatile unsigned int*)SCALEUP_DM_UZU_de_distortion_reg)=data)
#define  get_SCALEUP_DM_UZU_de_distortion_reg                                    (*((volatile unsigned int*)SCALEUP_DM_UZU_de_distortion_reg))
#define  SCALEUP_DM_UZU_de_distortion_dedistortion_en_shift                      (31)
#define  SCALEUP_DM_UZU_de_distortion_dedistortion_lowbd_shift                   (24)
#define  SCALEUP_DM_UZU_de_distortion_dedistortion_slope_shift                   (20)
#define  SCALEUP_DM_UZU_de_distortion_dedistortion_dbg_mode_shift                (18)
#define  SCALEUP_DM_UZU_de_distortion_dedistortion_en_mask                       (0x80000000)
#define  SCALEUP_DM_UZU_de_distortion_dedistortion_lowbd_mask                    (0x3F000000)
#define  SCALEUP_DM_UZU_de_distortion_dedistortion_slope_mask                    (0x00F00000)
#define  SCALEUP_DM_UZU_de_distortion_dedistortion_dbg_mode_mask                 (0x000C0000)
#define  SCALEUP_DM_UZU_de_distortion_dedistortion_en(data)                      (0x80000000&((data)<<31))
#define  SCALEUP_DM_UZU_de_distortion_dedistortion_lowbd(data)                   (0x3F000000&((data)<<24))
#define  SCALEUP_DM_UZU_de_distortion_dedistortion_slope(data)                   (0x00F00000&((data)<<20))
#define  SCALEUP_DM_UZU_de_distortion_dedistortion_dbg_mode(data)                (0x000C0000&((data)<<18))
#define  SCALEUP_DM_UZU_de_distortion_get_dedistortion_en(data)                  ((0x80000000&(data))>>31)
#define  SCALEUP_DM_UZU_de_distortion_get_dedistortion_lowbd(data)               ((0x3F000000&(data))>>24)
#define  SCALEUP_DM_UZU_de_distortion_get_dedistortion_slope(data)               ((0x00F00000&(data))>>20)
#define  SCALEUP_DM_UZU_de_distortion_get_dedistortion_dbg_mode(data)            ((0x000C0000&(data))>>18)

#define  SCALEUP_DM_MEM_CRC_CTRL                                                0x18029040
#define  SCALEUP_DM_MEM_CRC_CTRL_reg_addr                                        "0xB8029040"
#define  SCALEUP_DM_MEM_CRC_CTRL_reg                                             0xB8029040
#define  SCALEUP_DM_MEM_CRC_CTRL_inst_addr                                       "0x0014"
#define  set_SCALEUP_DM_MEM_CRC_CTRL_reg(data)                                   (*((volatile unsigned int*)SCALEUP_DM_MEM_CRC_CTRL_reg)=data)
#define  get_SCALEUP_DM_MEM_CRC_CTRL_reg                                         (*((volatile unsigned int*)SCALEUP_DM_MEM_CRC_CTRL_reg))
#define  SCALEUP_DM_MEM_CRC_CTRL_vcti_type3_thd_shift                            (16)
#define  SCALEUP_DM_MEM_CRC_CTRL_vcti_gain_shift                                 (8)
#define  SCALEUP_DM_MEM_CRC_CTRL_vcti_select_shift                               (5)
#define  SCALEUP_DM_MEM_CRC_CTRL_vcti_en_shift                                   (4)
#define  SCALEUP_DM_MEM_CRC_CTRL_conti_shift                                     (1)
#define  SCALEUP_DM_MEM_CRC_CTRL_start_shift                                     (0)
#define  SCALEUP_DM_MEM_CRC_CTRL_vcti_type3_thd_mask                             (0x003F0000)
#define  SCALEUP_DM_MEM_CRC_CTRL_vcti_gain_mask                                  (0x00007F00)
#define  SCALEUP_DM_MEM_CRC_CTRL_vcti_select_mask                                (0x00000060)
#define  SCALEUP_DM_MEM_CRC_CTRL_vcti_en_mask                                    (0x00000010)
#define  SCALEUP_DM_MEM_CRC_CTRL_conti_mask                                      (0x00000002)
#define  SCALEUP_DM_MEM_CRC_CTRL_start_mask                                      (0x00000001)
#define  SCALEUP_DM_MEM_CRC_CTRL_vcti_type3_thd(data)                            (0x003F0000&((data)<<16))
#define  SCALEUP_DM_MEM_CRC_CTRL_vcti_gain(data)                                 (0x00007F00&((data)<<8))
#define  SCALEUP_DM_MEM_CRC_CTRL_vcti_select(data)                               (0x00000060&((data)<<5))
#define  SCALEUP_DM_MEM_CRC_CTRL_vcti_en(data)                                   (0x00000010&((data)<<4))
#define  SCALEUP_DM_MEM_CRC_CTRL_conti(data)                                     (0x00000002&((data)<<1))
#define  SCALEUP_DM_MEM_CRC_CTRL_start(data)                                     (0x00000001&(data))
#define  SCALEUP_DM_MEM_CRC_CTRL_get_vcti_type3_thd(data)                        ((0x003F0000&(data))>>16)
#define  SCALEUP_DM_MEM_CRC_CTRL_get_vcti_gain(data)                             ((0x00007F00&(data))>>8)
#define  SCALEUP_DM_MEM_CRC_CTRL_get_vcti_select(data)                           ((0x00000060&(data))>>5)
#define  SCALEUP_DM_MEM_CRC_CTRL_get_vcti_en(data)                               ((0x00000010&(data))>>4)
#define  SCALEUP_DM_MEM_CRC_CTRL_get_conti(data)                                 ((0x00000002&(data))>>1)
#define  SCALEUP_DM_MEM_CRC_CTRL_get_start(data)                                 (0x00000001&(data))

#define  SCALEUP_DM_MEM_CRC_Result                                              0x18029044
#define  SCALEUP_DM_MEM_CRC_Result_reg_addr                                      "0xB8029044"
#define  SCALEUP_DM_MEM_CRC_Result_reg                                           0xB8029044
#define  SCALEUP_DM_MEM_CRC_Result_inst_addr                                     "0x0015"
#define  set_SCALEUP_DM_MEM_CRC_Result_reg(data)                                 (*((volatile unsigned int*)SCALEUP_DM_MEM_CRC_Result_reg)=data)
#define  get_SCALEUP_DM_MEM_CRC_Result_reg                                       (*((volatile unsigned int*)SCALEUP_DM_MEM_CRC_Result_reg))
#define  SCALEUP_DM_MEM_CRC_Result_mem_crc_shift                                 (0)
#define  SCALEUP_DM_MEM_CRC_Result_mem_crc_mask                                  (0xFFFFFFFF)
#define  SCALEUP_DM_MEM_CRC_Result_mem_crc(data)                                 (0xFFFFFFFF&(data))
#define  SCALEUP_DM_MEM_CRC_Result_get_mem_crc(data)                             (0xFFFFFFFF&(data))

#define  SCALEUP_MEM_CRC_Ctr2                                                   0x18029048
#define  SCALEUP_MEM_CRC_Ctr2_reg_addr                                           "0xB8029048"
#define  SCALEUP_MEM_CRC_Ctr2_reg                                                0xB8029048
#define  SCALEUP_MEM_CRC_Ctr2_inst_addr                                          "0x0016"
#define  set_SCALEUP_MEM_CRC_Ctr2_reg(data)                                      (*((volatile unsigned int*)SCALEUP_MEM_CRC_Ctr2_reg)=data)
#define  get_SCALEUP_MEM_CRC_Ctr2_reg                                            (*((volatile unsigned int*)SCALEUP_MEM_CRC_Ctr2_reg))
#define  SCALEUP_MEM_CRC_Ctr2_r_auto_cmp_en_shift                                (2)
#define  SCALEUP_MEM_CRC_Ctr2_l_auto_cmp_en_shift                                (1)
#define  SCALEUP_MEM_CRC_Ctr2_crc_3d_en_shift                                    (0)
#define  SCALEUP_MEM_CRC_Ctr2_r_auto_cmp_en_mask                                 (0x00000004)
#define  SCALEUP_MEM_CRC_Ctr2_l_auto_cmp_en_mask                                 (0x00000002)
#define  SCALEUP_MEM_CRC_Ctr2_crc_3d_en_mask                                     (0x00000001)
#define  SCALEUP_MEM_CRC_Ctr2_r_auto_cmp_en(data)                                (0x00000004&((data)<<2))
#define  SCALEUP_MEM_CRC_Ctr2_l_auto_cmp_en(data)                                (0x00000002&((data)<<1))
#define  SCALEUP_MEM_CRC_Ctr2_crc_3d_en(data)                                    (0x00000001&(data))
#define  SCALEUP_MEM_CRC_Ctr2_get_r_auto_cmp_en(data)                            ((0x00000004&(data))>>2)
#define  SCALEUP_MEM_CRC_Ctr2_get_l_auto_cmp_en(data)                            ((0x00000002&(data))>>1)
#define  SCALEUP_MEM_CRC_Ctr2_get_crc_3d_en(data)                                (0x00000001&(data))

#define  SCALEUP_MEM_CRC_R_Result                                               0x1802904C
#define  SCALEUP_MEM_CRC_R_Result_reg_addr                                       "0xB802904C"
#define  SCALEUP_MEM_CRC_R_Result_reg                                            0xB802904C
#define  SCALEUP_MEM_CRC_R_Result_inst_addr                                      "0x0017"
#define  set_SCALEUP_MEM_CRC_R_Result_reg(data)                                  (*((volatile unsigned int*)SCALEUP_MEM_CRC_R_Result_reg)=data)
#define  get_SCALEUP_MEM_CRC_R_Result_reg                                        (*((volatile unsigned int*)SCALEUP_MEM_CRC_R_Result_reg))
#define  SCALEUP_MEM_CRC_R_Result_crc_r_result_shift                             (0)
#define  SCALEUP_MEM_CRC_R_Result_crc_r_result_mask                              (0xFFFFFFFF)
#define  SCALEUP_MEM_CRC_R_Result_crc_r_result(data)                             (0xFFFFFFFF&(data))
#define  SCALEUP_MEM_CRC_R_Result_get_crc_r_result(data)                         (0xFFFFFFFF&(data))

#define  SCALEUP_MEM_L_DES_CRC                                                  0x18029050
#define  SCALEUP_MEM_L_DES_CRC_reg_addr                                          "0xB8029050"
#define  SCALEUP_MEM_L_DES_CRC_reg                                               0xB8029050
#define  SCALEUP_MEM_L_DES_CRC_inst_addr                                         "0x0018"
#define  set_SCALEUP_MEM_L_DES_CRC_reg(data)                                     (*((volatile unsigned int*)SCALEUP_MEM_L_DES_CRC_reg)=data)
#define  get_SCALEUP_MEM_L_DES_CRC_reg                                           (*((volatile unsigned int*)SCALEUP_MEM_L_DES_CRC_reg))
#define  SCALEUP_MEM_L_DES_CRC_l_des_crc_shift                                   (0)
#define  SCALEUP_MEM_L_DES_CRC_l_des_crc_mask                                    (0xFFFFFFFF)
#define  SCALEUP_MEM_L_DES_CRC_l_des_crc(data)                                   (0xFFFFFFFF&(data))
#define  SCALEUP_MEM_L_DES_CRC_get_l_des_crc(data)                               (0xFFFFFFFF&(data))

#define  SCALEUP_MEM_R_DES_CRC                                                  0x18029054
#define  SCALEUP_MEM_R_DES_CRC_reg_addr                                          "0xB8029054"
#define  SCALEUP_MEM_R_DES_CRC_reg                                               0xB8029054
#define  SCALEUP_MEM_R_DES_CRC_inst_addr                                         "0x0019"
#define  set_SCALEUP_MEM_R_DES_CRC_reg(data)                                     (*((volatile unsigned int*)SCALEUP_MEM_R_DES_CRC_reg)=data)
#define  get_SCALEUP_MEM_R_DES_CRC_reg                                           (*((volatile unsigned int*)SCALEUP_MEM_R_DES_CRC_reg))
#define  SCALEUP_MEM_R_DES_CRC_r_des_crc_shift                                   (0)
#define  SCALEUP_MEM_R_DES_CRC_r_des_crc_mask                                    (0xFFFFFFFF)
#define  SCALEUP_MEM_R_DES_CRC_r_des_crc(data)                                   (0xFFFFFFFF&(data))
#define  SCALEUP_MEM_R_DES_CRC_get_r_des_crc(data)                               (0xFFFFFFFF&(data))

#define  SCALEUP_MEM_CRC_ERR_CNT                                                0x18029058
#define  SCALEUP_MEM_CRC_ERR_CNT_reg_addr                                        "0xB8029058"
#define  SCALEUP_MEM_CRC_ERR_CNT_reg                                             0xB8029058
#define  SCALEUP_MEM_CRC_ERR_CNT_inst_addr                                       "0x001A"
#define  set_SCALEUP_MEM_CRC_ERR_CNT_reg(data)                                   (*((volatile unsigned int*)SCALEUP_MEM_CRC_ERR_CNT_reg)=data)
#define  get_SCALEUP_MEM_CRC_ERR_CNT_reg                                         (*((volatile unsigned int*)SCALEUP_MEM_CRC_ERR_CNT_reg))
#define  SCALEUP_MEM_CRC_ERR_CNT_r_crc_err_cnt_shift                             (16)
#define  SCALEUP_MEM_CRC_ERR_CNT_l_crc_err_cnt_shift                             (0)
#define  SCALEUP_MEM_CRC_ERR_CNT_r_crc_err_cnt_mask                              (0xFFFF0000)
#define  SCALEUP_MEM_CRC_ERR_CNT_l_crc_err_cnt_mask                              (0x0000FFFF)
#define  SCALEUP_MEM_CRC_ERR_CNT_r_crc_err_cnt(data)                             (0xFFFF0000&((data)<<16))
#define  SCALEUP_MEM_CRC_ERR_CNT_l_crc_err_cnt(data)                             (0x0000FFFF&(data))
#define  SCALEUP_MEM_CRC_ERR_CNT_get_r_crc_err_cnt(data)                         ((0xFFFF0000&(data))>>16)
#define  SCALEUP_MEM_CRC_ERR_CNT_get_l_crc_err_cnt(data)                         (0x0000FFFF&(data))

#define  SCALEUP_D_UZU_CRC_CTRL                                                 0x1802905C
#define  SCALEUP_D_UZU_CRC_CTRL_reg_addr                                         "0xB802905C"
#define  SCALEUP_D_UZU_CRC_CTRL_reg                                              0xB802905C
#define  SCALEUP_D_UZU_CRC_CTRL_inst_addr                                        "0x001B"
#define  set_SCALEUP_D_UZU_CRC_CTRL_reg(data)                                    (*((volatile unsigned int*)SCALEUP_D_UZU_CRC_CTRL_reg)=data)
#define  get_SCALEUP_D_UZU_CRC_CTRL_reg                                          (*((volatile unsigned int*)SCALEUP_D_UZU_CRC_CTRL_reg))
#define  SCALEUP_D_UZU_CRC_CTRL_ch_sel_shift                                     (2)
#define  SCALEUP_D_UZU_CRC_CTRL_conti_shift                                      (1)
#define  SCALEUP_D_UZU_CRC_CTRL_start_shift                                      (0)
#define  SCALEUP_D_UZU_CRC_CTRL_ch_sel_mask                                      (0x00000004)
#define  SCALEUP_D_UZU_CRC_CTRL_conti_mask                                       (0x00000002)
#define  SCALEUP_D_UZU_CRC_CTRL_start_mask                                       (0x00000001)
#define  SCALEUP_D_UZU_CRC_CTRL_ch_sel(data)                                     (0x00000004&((data)<<2))
#define  SCALEUP_D_UZU_CRC_CTRL_conti(data)                                      (0x00000002&((data)<<1))
#define  SCALEUP_D_UZU_CRC_CTRL_start(data)                                      (0x00000001&(data))
#define  SCALEUP_D_UZU_CRC_CTRL_get_ch_sel(data)                                 ((0x00000004&(data))>>2)
#define  SCALEUP_D_UZU_CRC_CTRL_get_conti(data)                                  ((0x00000002&(data))>>1)
#define  SCALEUP_D_UZU_CRC_CTRL_get_start(data)                                  (0x00000001&(data))

#define  SCALEUP_D_UZU_CRC_Result                                               0x18029060
#define  SCALEUP_D_UZU_CRC_Result_reg_addr                                       "0xB8029060"
#define  SCALEUP_D_UZU_CRC_Result_reg                                            0xB8029060
#define  SCALEUP_D_UZU_CRC_Result_inst_addr                                      "0x001C"
#define  set_SCALEUP_D_UZU_CRC_Result_reg(data)                                  (*((volatile unsigned int*)SCALEUP_D_UZU_CRC_Result_reg)=data)
#define  get_SCALEUP_D_UZU_CRC_Result_reg                                        (*((volatile unsigned int*)SCALEUP_D_UZU_CRC_Result_reg))
#define  SCALEUP_D_UZU_CRC_Result_uzu_crc_shift                                  (0)
#define  SCALEUP_D_UZU_CRC_Result_uzu_crc_mask                                   (0xFFFFFFFF)
#define  SCALEUP_D_UZU_CRC_Result_uzu_crc(data)                                  (0xFFFFFFFF&(data))
#define  SCALEUP_D_UZU_CRC_Result_get_uzu_crc(data)                              (0xFFFFFFFF&(data))

#define  SCALEUP_DM_UZUMAIN_VCTI_LPF                                            0x18029084
#define  SCALEUP_DM_UZUMAIN_VCTI_LPF_reg_addr                                    "0xB8029084"
#define  SCALEUP_DM_UZUMAIN_VCTI_LPF_reg                                         0xB8029084
#define  SCALEUP_DM_UZUMAIN_VCTI_LPF_inst_addr                                   "0x001D"
#define  set_SCALEUP_DM_UZUMAIN_VCTI_LPF_reg(data)                               (*((volatile unsigned int*)SCALEUP_DM_UZUMAIN_VCTI_LPF_reg)=data)
#define  get_SCALEUP_DM_UZUMAIN_VCTI_LPF_reg                                     (*((volatile unsigned int*)SCALEUP_DM_UZUMAIN_VCTI_LPF_reg))
#define  SCALEUP_DM_UZUMAIN_VCTI_LPF_vcti_lpf_lbound1_shift                      (12)
#define  SCALEUP_DM_UZUMAIN_VCTI_LPF_vcti_lpf_hbound1_shift                      (2)
#define  SCALEUP_DM_UZUMAIN_VCTI_LPF_vcti_low_pass_filter_en_shift               (1)
#define  SCALEUP_DM_UZUMAIN_VCTI_LPF_vcti_lpf_mode_shift                         (0)
#define  SCALEUP_DM_UZUMAIN_VCTI_LPF_vcti_lpf_lbound1_mask                       (0x003FF000)
#define  SCALEUP_DM_UZUMAIN_VCTI_LPF_vcti_lpf_hbound1_mask                       (0x00000FFC)
#define  SCALEUP_DM_UZUMAIN_VCTI_LPF_vcti_low_pass_filter_en_mask                (0x00000002)
#define  SCALEUP_DM_UZUMAIN_VCTI_LPF_vcti_lpf_mode_mask                          (0x00000001)
#define  SCALEUP_DM_UZUMAIN_VCTI_LPF_vcti_lpf_lbound1(data)                      (0x003FF000&((data)<<12))
#define  SCALEUP_DM_UZUMAIN_VCTI_LPF_vcti_lpf_hbound1(data)                      (0x00000FFC&((data)<<2))
#define  SCALEUP_DM_UZUMAIN_VCTI_LPF_vcti_low_pass_filter_en(data)               (0x00000002&((data)<<1))
#define  SCALEUP_DM_UZUMAIN_VCTI_LPF_vcti_lpf_mode(data)                         (0x00000001&(data))
#define  SCALEUP_DM_UZUMAIN_VCTI_LPF_get_vcti_lpf_lbound1(data)                  ((0x003FF000&(data))>>12)
#define  SCALEUP_DM_UZUMAIN_VCTI_LPF_get_vcti_lpf_hbound1(data)                  ((0x00000FFC&(data))>>2)
#define  SCALEUP_DM_UZUMAIN_VCTI_LPF_get_vcti_low_pass_filter_en(data)           ((0x00000002&(data))>>1)
#define  SCALEUP_DM_UZUMAIN_VCTI_LPF_get_vcti_lpf_mode(data)                     (0x00000001&(data))

#define  SCALEUP_D_UZU_PATGEN_COLOR0                                            0x18029064
#define  SCALEUP_D_UZU_PATGEN_COLOR0_reg_addr                                    "0xB8029064"
#define  SCALEUP_D_UZU_PATGEN_COLOR0_reg                                         0xB8029064
#define  SCALEUP_D_UZU_PATGEN_COLOR0_inst_addr                                   "0x001E"
#define  set_SCALEUP_D_UZU_PATGEN_COLOR0_reg(data)                               (*((volatile unsigned int*)SCALEUP_D_UZU_PATGEN_COLOR0_reg)=data)
#define  get_SCALEUP_D_UZU_PATGEN_COLOR0_reg                                     (*((volatile unsigned int*)SCALEUP_D_UZU_PATGEN_COLOR0_reg))
#define  SCALEUP_D_UZU_PATGEN_COLOR0_patgen_c0_y_shift                           (16)
#define  SCALEUP_D_UZU_PATGEN_COLOR0_patgen_c0_cr_shift                          (8)
#define  SCALEUP_D_UZU_PATGEN_COLOR0_patgen_c0_cb_shift                          (0)
#define  SCALEUP_D_UZU_PATGEN_COLOR0_patgen_c0_y_mask                            (0x00FF0000)
#define  SCALEUP_D_UZU_PATGEN_COLOR0_patgen_c0_cr_mask                           (0x0000FF00)
#define  SCALEUP_D_UZU_PATGEN_COLOR0_patgen_c0_cb_mask                           (0x000000FF)
#define  SCALEUP_D_UZU_PATGEN_COLOR0_patgen_c0_y(data)                           (0x00FF0000&((data)<<16))
#define  SCALEUP_D_UZU_PATGEN_COLOR0_patgen_c0_cr(data)                          (0x0000FF00&((data)<<8))
#define  SCALEUP_D_UZU_PATGEN_COLOR0_patgen_c0_cb(data)                          (0x000000FF&(data))
#define  SCALEUP_D_UZU_PATGEN_COLOR0_get_patgen_c0_y(data)                       ((0x00FF0000&(data))>>16)
#define  SCALEUP_D_UZU_PATGEN_COLOR0_get_patgen_c0_cr(data)                      ((0x0000FF00&(data))>>8)
#define  SCALEUP_D_UZU_PATGEN_COLOR0_get_patgen_c0_cb(data)                      (0x000000FF&(data))

#define  SCALEUP_D_UZU_PATGEN_COLOR1                                            0x18029068
#define  SCALEUP_D_UZU_PATGEN_COLOR1_reg_addr                                    "0xB8029068"
#define  SCALEUP_D_UZU_PATGEN_COLOR1_reg                                         0xB8029068
#define  SCALEUP_D_UZU_PATGEN_COLOR1_inst_addr                                   "0x001F"
#define  set_SCALEUP_D_UZU_PATGEN_COLOR1_reg(data)                               (*((volatile unsigned int*)SCALEUP_D_UZU_PATGEN_COLOR1_reg)=data)
#define  get_SCALEUP_D_UZU_PATGEN_COLOR1_reg                                     (*((volatile unsigned int*)SCALEUP_D_UZU_PATGEN_COLOR1_reg))
#define  SCALEUP_D_UZU_PATGEN_COLOR1_patgen_c1_y_shift                           (16)
#define  SCALEUP_D_UZU_PATGEN_COLOR1_patgen_c1_cr_shift                          (8)
#define  SCALEUP_D_UZU_PATGEN_COLOR1_patgen_c1_cb_shift                          (0)
#define  SCALEUP_D_UZU_PATGEN_COLOR1_patgen_c1_y_mask                            (0x00FF0000)
#define  SCALEUP_D_UZU_PATGEN_COLOR1_patgen_c1_cr_mask                           (0x0000FF00)
#define  SCALEUP_D_UZU_PATGEN_COLOR1_patgen_c1_cb_mask                           (0x000000FF)
#define  SCALEUP_D_UZU_PATGEN_COLOR1_patgen_c1_y(data)                           (0x00FF0000&((data)<<16))
#define  SCALEUP_D_UZU_PATGEN_COLOR1_patgen_c1_cr(data)                          (0x0000FF00&((data)<<8))
#define  SCALEUP_D_UZU_PATGEN_COLOR1_patgen_c1_cb(data)                          (0x000000FF&(data))
#define  SCALEUP_D_UZU_PATGEN_COLOR1_get_patgen_c1_y(data)                       ((0x00FF0000&(data))>>16)
#define  SCALEUP_D_UZU_PATGEN_COLOR1_get_patgen_c1_cr(data)                      ((0x0000FF00&(data))>>8)
#define  SCALEUP_D_UZU_PATGEN_COLOR1_get_patgen_c1_cb(data)                      (0x000000FF&(data))

#define  SCALEUP_D_UZU_PATGEN_COLOR2                                            0x1802906C
#define  SCALEUP_D_UZU_PATGEN_COLOR2_reg_addr                                    "0xB802906C"
#define  SCALEUP_D_UZU_PATGEN_COLOR2_reg                                         0xB802906C
#define  SCALEUP_D_UZU_PATGEN_COLOR2_inst_addr                                   "0x0020"
#define  set_SCALEUP_D_UZU_PATGEN_COLOR2_reg(data)                               (*((volatile unsigned int*)SCALEUP_D_UZU_PATGEN_COLOR2_reg)=data)
#define  get_SCALEUP_D_UZU_PATGEN_COLOR2_reg                                     (*((volatile unsigned int*)SCALEUP_D_UZU_PATGEN_COLOR2_reg))
#define  SCALEUP_D_UZU_PATGEN_COLOR2_patgen_c2_y_shift                           (16)
#define  SCALEUP_D_UZU_PATGEN_COLOR2_patgen_c2_cr_shift                          (8)
#define  SCALEUP_D_UZU_PATGEN_COLOR2_patgen_c2_cb_shift                          (0)
#define  SCALEUP_D_UZU_PATGEN_COLOR2_patgen_c2_y_mask                            (0x00FF0000)
#define  SCALEUP_D_UZU_PATGEN_COLOR2_patgen_c2_cr_mask                           (0x0000FF00)
#define  SCALEUP_D_UZU_PATGEN_COLOR2_patgen_c2_cb_mask                           (0x000000FF)
#define  SCALEUP_D_UZU_PATGEN_COLOR2_patgen_c2_y(data)                           (0x00FF0000&((data)<<16))
#define  SCALEUP_D_UZU_PATGEN_COLOR2_patgen_c2_cr(data)                          (0x0000FF00&((data)<<8))
#define  SCALEUP_D_UZU_PATGEN_COLOR2_patgen_c2_cb(data)                          (0x000000FF&(data))
#define  SCALEUP_D_UZU_PATGEN_COLOR2_get_patgen_c2_y(data)                       ((0x00FF0000&(data))>>16)
#define  SCALEUP_D_UZU_PATGEN_COLOR2_get_patgen_c2_cr(data)                      ((0x0000FF00&(data))>>8)
#define  SCALEUP_D_UZU_PATGEN_COLOR2_get_patgen_c2_cb(data)                      (0x000000FF&(data))

#define  SCALEUP_D_UZU_PATGEN_COLOR3                                            0x18029070
#define  SCALEUP_D_UZU_PATGEN_COLOR3_reg_addr                                    "0xB8029070"
#define  SCALEUP_D_UZU_PATGEN_COLOR3_reg                                         0xB8029070
#define  SCALEUP_D_UZU_PATGEN_COLOR3_inst_addr                                   "0x0021"
#define  set_SCALEUP_D_UZU_PATGEN_COLOR3_reg(data)                               (*((volatile unsigned int*)SCALEUP_D_UZU_PATGEN_COLOR3_reg)=data)
#define  get_SCALEUP_D_UZU_PATGEN_COLOR3_reg                                     (*((volatile unsigned int*)SCALEUP_D_UZU_PATGEN_COLOR3_reg))
#define  SCALEUP_D_UZU_PATGEN_COLOR3_patgen_c3_y_shift                           (16)
#define  SCALEUP_D_UZU_PATGEN_COLOR3_patgen_c3_cr_shift                          (8)
#define  SCALEUP_D_UZU_PATGEN_COLOR3_patgen_c3_cb_shift                          (0)
#define  SCALEUP_D_UZU_PATGEN_COLOR3_patgen_c3_y_mask                            (0x00FF0000)
#define  SCALEUP_D_UZU_PATGEN_COLOR3_patgen_c3_cr_mask                           (0x0000FF00)
#define  SCALEUP_D_UZU_PATGEN_COLOR3_patgen_c3_cb_mask                           (0x000000FF)
#define  SCALEUP_D_UZU_PATGEN_COLOR3_patgen_c3_y(data)                           (0x00FF0000&((data)<<16))
#define  SCALEUP_D_UZU_PATGEN_COLOR3_patgen_c3_cr(data)                          (0x0000FF00&((data)<<8))
#define  SCALEUP_D_UZU_PATGEN_COLOR3_patgen_c3_cb(data)                          (0x000000FF&(data))
#define  SCALEUP_D_UZU_PATGEN_COLOR3_get_patgen_c3_y(data)                       ((0x00FF0000&(data))>>16)
#define  SCALEUP_D_UZU_PATGEN_COLOR3_get_patgen_c3_cr(data)                      ((0x0000FF00&(data))>>8)
#define  SCALEUP_D_UZU_PATGEN_COLOR3_get_patgen_c3_cb(data)                      (0x000000FF&(data))

#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE                                      0x18029074
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_reg_addr                              "0xB8029074"
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_reg                                   0xB8029074
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_inst_addr                             "0x0022"
#define  set_SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_reg(data)                         (*((volatile unsigned int*)SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_reg)=data)
#define  get_SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_reg                               (*((volatile unsigned int*)SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_reg))
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_patgen_tog_num_shift                  (27)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_patgen_tog_sel_shift                  (25)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_patgen_lflag_shift                    (24)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_patgen_width_shift                    (0)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_patgen_tog_num_mask                   (0xF8000000)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_patgen_tog_sel_mask                   (0x06000000)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_patgen_lflag_mask                     (0x01000000)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_patgen_width_mask                     (0x003FFFFF)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_patgen_tog_num(data)                  (0xF8000000&((data)<<27))
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_patgen_tog_sel(data)                  (0x06000000&((data)<<25))
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_patgen_lflag(data)                    (0x01000000&((data)<<24))
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_patgen_width(data)                    (0x003FFFFF&(data))
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_get_patgen_tog_num(data)              ((0xF8000000&(data))>>27)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_get_patgen_tog_sel(data)              ((0x06000000&(data))>>25)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_get_patgen_lflag(data)                ((0x01000000&(data))>>24)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_get_patgen_width(data)                (0x003FFFFF&(data))

#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE1                                     0x18029078
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE1_reg_addr                             "0xB8029078"
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE1_reg                                  0xB8029078
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE1_inst_addr                            "0x0023"
#define  set_SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE1_reg(data)                        (*((volatile unsigned int*)SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE1_reg)=data)
#define  get_SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE1_reg                              (*((volatile unsigned int*)SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE1_reg))
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE1_patgen_lflag_1_shift                 (24)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE1_patgen_width_1_shift                 (0)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE1_patgen_lflag_1_mask                  (0x01000000)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE1_patgen_width_1_mask                  (0x003FFFFF)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE1_patgen_lflag_1(data)                 (0x01000000&((data)<<24))
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE1_patgen_width_1(data)                 (0x003FFFFF&(data))
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE1_get_patgen_lflag_1(data)             ((0x01000000&(data))>>24)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE1_get_patgen_width_1(data)             (0x003FFFFF&(data))

#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE2                                     0x1802907C
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE2_reg_addr                             "0xB802907C"
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE2_reg                                  0xB802907C
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE2_inst_addr                            "0x0024"
#define  set_SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE2_reg(data)                        (*((volatile unsigned int*)SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE2_reg)=data)
#define  get_SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE2_reg                              (*((volatile unsigned int*)SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE2_reg))
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE2_patgen_lflag_2_shift                 (24)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE2_patgen_width_2_shift                 (0)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE2_patgen_lflag_2_mask                  (0x01000000)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE2_patgen_width_2_mask                  (0x003FFFFF)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE2_patgen_lflag_2(data)                 (0x01000000&((data)<<24))
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE2_patgen_width_2(data)                 (0x003FFFFF&(data))
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE2_get_patgen_lflag_2(data)             ((0x01000000&(data))>>24)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE2_get_patgen_width_2(data)             (0x003FFFFF&(data))

#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE3                                     0x18029080
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE3_reg_addr                             "0xB8029080"
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE3_reg                                  0xB8029080
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE3_inst_addr                            "0x0025"
#define  set_SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE3_reg(data)                        (*((volatile unsigned int*)SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE3_reg)=data)
#define  get_SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE3_reg                              (*((volatile unsigned int*)SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE3_reg))
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE3_patgen_lflag_3_shift                 (24)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE3_patgen_width_3_shift                 (0)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE3_patgen_lflag_3_mask                  (0x01000000)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE3_patgen_width_3_mask                  (0x003FFFFF)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE3_patgen_lflag_3(data)                 (0x01000000&((data)<<24))
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE3_patgen_width_3(data)                 (0x003FFFFF&(data))
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE3_get_patgen_lflag_3(data)             ((0x01000000&(data))>>24)
#define  SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE3_get_patgen_width_3(data)             (0x003FFFFF&(data))

#define  SCALEUP_LEFT_3D_PTG_Ctrl3                                              0x18029100
#define  SCALEUP_LEFT_3D_PTG_Ctrl3_reg_addr                                      "0xB8029100"
#define  SCALEUP_LEFT_3D_PTG_Ctrl3_reg                                           0xB8029100
#define  SCALEUP_LEFT_3D_PTG_Ctrl3_inst_addr                                     "0x0026"
#define  set_SCALEUP_LEFT_3D_PTG_Ctrl3_reg(data)                                 (*((volatile unsigned int*)SCALEUP_LEFT_3D_PTG_Ctrl3_reg)=data)
#define  get_SCALEUP_LEFT_3D_PTG_Ctrl3_reg                                       (*((volatile unsigned int*)SCALEUP_LEFT_3D_PTG_Ctrl3_reg))
#define  SCALEUP_LEFT_3D_PTG_Ctrl3_left_ydi_shift                                (16)
#define  SCALEUP_LEFT_3D_PTG_Ctrl3_left_udi_shift                                (8)
#define  SCALEUP_LEFT_3D_PTG_Ctrl3_left_vdi_shift                                (0)
#define  SCALEUP_LEFT_3D_PTG_Ctrl3_left_ydi_mask                                 (0x00FF0000)
#define  SCALEUP_LEFT_3D_PTG_Ctrl3_left_udi_mask                                 (0x0000FF00)
#define  SCALEUP_LEFT_3D_PTG_Ctrl3_left_vdi_mask                                 (0x000000FF)
#define  SCALEUP_LEFT_3D_PTG_Ctrl3_left_ydi(data)                                (0x00FF0000&((data)<<16))
#define  SCALEUP_LEFT_3D_PTG_Ctrl3_left_udi(data)                                (0x0000FF00&((data)<<8))
#define  SCALEUP_LEFT_3D_PTG_Ctrl3_left_vdi(data)                                (0x000000FF&(data))
#define  SCALEUP_LEFT_3D_PTG_Ctrl3_get_left_ydi(data)                            ((0x00FF0000&(data))>>16)
#define  SCALEUP_LEFT_3D_PTG_Ctrl3_get_left_udi(data)                            ((0x0000FF00&(data))>>8)
#define  SCALEUP_LEFT_3D_PTG_Ctrl3_get_left_vdi(data)                            (0x000000FF&(data))

#define  SCALEUP_LEFT_3D_PTG_Ctrl4                                              0x18029104
#define  SCALEUP_LEFT_3D_PTG_Ctrl4_reg_addr                                      "0xB8029104"
#define  SCALEUP_LEFT_3D_PTG_Ctrl4_reg                                           0xB8029104
#define  SCALEUP_LEFT_3D_PTG_Ctrl4_inst_addr                                     "0x0027"
#define  set_SCALEUP_LEFT_3D_PTG_Ctrl4_reg(data)                                 (*((volatile unsigned int*)SCALEUP_LEFT_3D_PTG_Ctrl4_reg)=data)
#define  get_SCALEUP_LEFT_3D_PTG_Ctrl4_reg                                       (*((volatile unsigned int*)SCALEUP_LEFT_3D_PTG_Ctrl4_reg))
#define  SCALEUP_LEFT_3D_PTG_Ctrl4_left_h_saddr_shift                            (24)
#define  SCALEUP_LEFT_3D_PTG_Ctrl4_left_v_saddr_shift                            (16)
#define  SCALEUP_LEFT_3D_PTG_Ctrl4_left_h_limit_shift                            (8)
#define  SCALEUP_LEFT_3D_PTG_Ctrl4_left_v_limit_shift                            (0)
#define  SCALEUP_LEFT_3D_PTG_Ctrl4_left_h_saddr_mask                             (0xFF000000)
#define  SCALEUP_LEFT_3D_PTG_Ctrl4_left_v_saddr_mask                             (0x00FF0000)
#define  SCALEUP_LEFT_3D_PTG_Ctrl4_left_h_limit_mask                             (0x0000FF00)
#define  SCALEUP_LEFT_3D_PTG_Ctrl4_left_v_limit_mask                             (0x000000FF)
#define  SCALEUP_LEFT_3D_PTG_Ctrl4_left_h_saddr(data)                            (0xFF000000&((data)<<24))
#define  SCALEUP_LEFT_3D_PTG_Ctrl4_left_v_saddr(data)                            (0x00FF0000&((data)<<16))
#define  SCALEUP_LEFT_3D_PTG_Ctrl4_left_h_limit(data)                            (0x0000FF00&((data)<<8))
#define  SCALEUP_LEFT_3D_PTG_Ctrl4_left_v_limit(data)                            (0x000000FF&(data))
#define  SCALEUP_LEFT_3D_PTG_Ctrl4_get_left_h_saddr(data)                        ((0xFF000000&(data))>>24)
#define  SCALEUP_LEFT_3D_PTG_Ctrl4_get_left_v_saddr(data)                        ((0x00FF0000&(data))>>16)
#define  SCALEUP_LEFT_3D_PTG_Ctrl4_get_left_h_limit(data)                        ((0x0000FF00&(data))>>8)
#define  SCALEUP_LEFT_3D_PTG_Ctrl4_get_left_v_limit(data)                        (0x000000FF&(data))

#define  SCALEUP_LEFT_3D_PTG_Ctrl5                                              0x18029108
#define  SCALEUP_LEFT_3D_PTG_Ctrl5_reg_addr                                      "0xB8029108"
#define  SCALEUP_LEFT_3D_PTG_Ctrl5_reg                                           0xB8029108
#define  SCALEUP_LEFT_3D_PTG_Ctrl5_inst_addr                                     "0x0028"
#define  set_SCALEUP_LEFT_3D_PTG_Ctrl5_reg(data)                                 (*((volatile unsigned int*)SCALEUP_LEFT_3D_PTG_Ctrl5_reg)=data)
#define  get_SCALEUP_LEFT_3D_PTG_Ctrl5_reg                                       (*((volatile unsigned int*)SCALEUP_LEFT_3D_PTG_Ctrl5_reg))
#define  SCALEUP_LEFT_3D_PTG_Ctrl5_left_hsize_shift                              (24)
#define  SCALEUP_LEFT_3D_PTG_Ctrl5_left_vsize_shift                              (16)
#define  SCALEUP_LEFT_3D_PTG_Ctrl5_see_sadr_only_l_shift                         (15)
#define  SCALEUP_LEFT_3D_PTG_Ctrl5_left_hstep_shift                              (8)
#define  SCALEUP_LEFT_3D_PTG_Ctrl5_left_vstep_shift                              (0)
#define  SCALEUP_LEFT_3D_PTG_Ctrl5_left_hsize_mask                               (0xFF000000)
#define  SCALEUP_LEFT_3D_PTG_Ctrl5_left_vsize_mask                               (0x00FF0000)
#define  SCALEUP_LEFT_3D_PTG_Ctrl5_see_sadr_only_l_mask                          (0x00008000)
#define  SCALEUP_LEFT_3D_PTG_Ctrl5_left_hstep_mask                               (0x00003F00)
#define  SCALEUP_LEFT_3D_PTG_Ctrl5_left_vstep_mask                               (0x0000003F)
#define  SCALEUP_LEFT_3D_PTG_Ctrl5_left_hsize(data)                              (0xFF000000&((data)<<24))
#define  SCALEUP_LEFT_3D_PTG_Ctrl5_left_vsize(data)                              (0x00FF0000&((data)<<16))
#define  SCALEUP_LEFT_3D_PTG_Ctrl5_see_sadr_only_l(data)                         (0x00008000&((data)<<15))
#define  SCALEUP_LEFT_3D_PTG_Ctrl5_left_hstep(data)                              (0x00003F00&((data)<<8))
#define  SCALEUP_LEFT_3D_PTG_Ctrl5_left_vstep(data)                              (0x0000003F&(data))
#define  SCALEUP_LEFT_3D_PTG_Ctrl5_get_left_hsize(data)                          ((0xFF000000&(data))>>24)
#define  SCALEUP_LEFT_3D_PTG_Ctrl5_get_left_vsize(data)                          ((0x00FF0000&(data))>>16)
#define  SCALEUP_LEFT_3D_PTG_Ctrl5_get_see_sadr_only_l(data)                     ((0x00008000&(data))>>15)
#define  SCALEUP_LEFT_3D_PTG_Ctrl5_get_left_hstep(data)                          ((0x00003F00&(data))>>8)
#define  SCALEUP_LEFT_3D_PTG_Ctrl5_get_left_vstep(data)                          (0x0000003F&(data))

#define  SCALEUP_RIGHT_3D_PTG_Ctrl1                                             0x1802910C
#define  SCALEUP_RIGHT_3D_PTG_Ctrl1_reg_addr                                     "0xB802910C"
#define  SCALEUP_RIGHT_3D_PTG_Ctrl1_reg                                          0xB802910C
#define  SCALEUP_RIGHT_3D_PTG_Ctrl1_inst_addr                                    "0x0029"
#define  set_SCALEUP_RIGHT_3D_PTG_Ctrl1_reg(data)                                (*((volatile unsigned int*)SCALEUP_RIGHT_3D_PTG_Ctrl1_reg)=data)
#define  get_SCALEUP_RIGHT_3D_PTG_Ctrl1_reg                                      (*((volatile unsigned int*)SCALEUP_RIGHT_3D_PTG_Ctrl1_reg))
#define  SCALEUP_RIGHT_3D_PTG_Ctrl1_right_ydi_shift                              (16)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl1_right_udi_shift                              (8)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl1_right_vdi_shift                              (0)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl1_right_ydi_mask                               (0x00FF0000)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl1_right_udi_mask                               (0x0000FF00)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl1_right_vdi_mask                               (0x000000FF)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl1_right_ydi(data)                              (0x00FF0000&((data)<<16))
#define  SCALEUP_RIGHT_3D_PTG_Ctrl1_right_udi(data)                              (0x0000FF00&((data)<<8))
#define  SCALEUP_RIGHT_3D_PTG_Ctrl1_right_vdi(data)                              (0x000000FF&(data))
#define  SCALEUP_RIGHT_3D_PTG_Ctrl1_get_right_ydi(data)                          ((0x00FF0000&(data))>>16)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl1_get_right_udi(data)                          ((0x0000FF00&(data))>>8)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl1_get_right_vdi(data)                          (0x000000FF&(data))

#define  SCALEUP_RIGHT_3D_PTG_Ctrl2                                             0x18029110
#define  SCALEUP_RIGHT_3D_PTG_Ctrl2_reg_addr                                     "0xB8029110"
#define  SCALEUP_RIGHT_3D_PTG_Ctrl2_reg                                          0xB8029110
#define  SCALEUP_RIGHT_3D_PTG_Ctrl2_inst_addr                                    "0x002A"
#define  set_SCALEUP_RIGHT_3D_PTG_Ctrl2_reg(data)                                (*((volatile unsigned int*)SCALEUP_RIGHT_3D_PTG_Ctrl2_reg)=data)
#define  get_SCALEUP_RIGHT_3D_PTG_Ctrl2_reg                                      (*((volatile unsigned int*)SCALEUP_RIGHT_3D_PTG_Ctrl2_reg))
#define  SCALEUP_RIGHT_3D_PTG_Ctrl2_right_h_saddr_shift                          (24)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl2_right_v_saddr_shift                          (16)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl2_right_h_limit_shift                          (8)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl2_right_v_limit_shift                          (0)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl2_right_h_saddr_mask                           (0xFF000000)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl2_right_v_saddr_mask                           (0x00FF0000)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl2_right_h_limit_mask                           (0x0000FF00)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl2_right_v_limit_mask                           (0x000000FF)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl2_right_h_saddr(data)                          (0xFF000000&((data)<<24))
#define  SCALEUP_RIGHT_3D_PTG_Ctrl2_right_v_saddr(data)                          (0x00FF0000&((data)<<16))
#define  SCALEUP_RIGHT_3D_PTG_Ctrl2_right_h_limit(data)                          (0x0000FF00&((data)<<8))
#define  SCALEUP_RIGHT_3D_PTG_Ctrl2_right_v_limit(data)                          (0x000000FF&(data))
#define  SCALEUP_RIGHT_3D_PTG_Ctrl2_get_right_h_saddr(data)                      ((0xFF000000&(data))>>24)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl2_get_right_v_saddr(data)                      ((0x00FF0000&(data))>>16)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl2_get_right_h_limit(data)                      ((0x0000FF00&(data))>>8)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl2_get_right_v_limit(data)                      (0x000000FF&(data))

#define  SCALEUP_RIGHT_3D_PTG_Ctrl3                                             0x18029114
#define  SCALEUP_RIGHT_3D_PTG_Ctrl3_reg_addr                                     "0xB8029114"
#define  SCALEUP_RIGHT_3D_PTG_Ctrl3_reg                                          0xB8029114
#define  SCALEUP_RIGHT_3D_PTG_Ctrl3_inst_addr                                    "0x002B"
#define  set_SCALEUP_RIGHT_3D_PTG_Ctrl3_reg(data)                                (*((volatile unsigned int*)SCALEUP_RIGHT_3D_PTG_Ctrl3_reg)=data)
#define  get_SCALEUP_RIGHT_3D_PTG_Ctrl3_reg                                      (*((volatile unsigned int*)SCALEUP_RIGHT_3D_PTG_Ctrl3_reg))
#define  SCALEUP_RIGHT_3D_PTG_Ctrl3_right_hsize_shift                            (24)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl3_right_vsize_shift                            (16)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl3_see_sadr_only_r_shift                        (15)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl3_right_hstep_shift                            (8)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl3_right_vstep_shift                            (0)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl3_right_hsize_mask                             (0xFF000000)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl3_right_vsize_mask                             (0x00FF0000)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl3_see_sadr_only_r_mask                         (0x00008000)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl3_right_hstep_mask                             (0x00003F00)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl3_right_vstep_mask                             (0x0000003F)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl3_right_hsize(data)                            (0xFF000000&((data)<<24))
#define  SCALEUP_RIGHT_3D_PTG_Ctrl3_right_vsize(data)                            (0x00FF0000&((data)<<16))
#define  SCALEUP_RIGHT_3D_PTG_Ctrl3_see_sadr_only_r(data)                        (0x00008000&((data)<<15))
#define  SCALEUP_RIGHT_3D_PTG_Ctrl3_right_hstep(data)                            (0x00003F00&((data)<<8))
#define  SCALEUP_RIGHT_3D_PTG_Ctrl3_right_vstep(data)                            (0x0000003F&(data))
#define  SCALEUP_RIGHT_3D_PTG_Ctrl3_get_right_hsize(data)                        ((0xFF000000&(data))>>24)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl3_get_right_vsize(data)                        ((0x00FF0000&(data))>>16)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl3_get_see_sadr_only_r(data)                    ((0x00008000&(data))>>15)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl3_get_right_hstep(data)                        ((0x00003F00&(data))>>8)
#define  SCALEUP_RIGHT_3D_PTG_Ctrl3_get_right_vstep(data)                        (0x0000003F&(data))

#define  SCALEUP_PTG_3D_Ctr1                                                    0x18029118
#define  SCALEUP_PTG_3D_Ctr1_reg_addr                                            "0xB8029118"
#define  SCALEUP_PTG_3D_Ctr1_reg                                                 0xB8029118
#define  SCALEUP_PTG_3D_Ctr1_inst_addr                                           "0x002C"
#define  set_SCALEUP_PTG_3D_Ctr1_reg(data)                                       (*((volatile unsigned int*)SCALEUP_PTG_3D_Ctr1_reg)=data)
#define  get_SCALEUP_PTG_3D_Ctr1_reg                                             (*((volatile unsigned int*)SCALEUP_PTG_3D_Ctr1_reg))
#define  SCALEUP_PTG_3D_Ctr1_ptg_bg_ydi_shift                                    (16)
#define  SCALEUP_PTG_3D_Ctr1_ptg_bg_udi_shift                                    (8)
#define  SCALEUP_PTG_3D_Ctr1_ptg_bg_vdi_shift                                    (0)
#define  SCALEUP_PTG_3D_Ctr1_ptg_bg_ydi_mask                                     (0x00FF0000)
#define  SCALEUP_PTG_3D_Ctr1_ptg_bg_udi_mask                                     (0x0000FF00)
#define  SCALEUP_PTG_3D_Ctr1_ptg_bg_vdi_mask                                     (0x000000FF)
#define  SCALEUP_PTG_3D_Ctr1_ptg_bg_ydi(data)                                    (0x00FF0000&((data)<<16))
#define  SCALEUP_PTG_3D_Ctr1_ptg_bg_udi(data)                                    (0x0000FF00&((data)<<8))
#define  SCALEUP_PTG_3D_Ctr1_ptg_bg_vdi(data)                                    (0x000000FF&(data))
#define  SCALEUP_PTG_3D_Ctr1_get_ptg_bg_ydi(data)                                ((0x00FF0000&(data))>>16)
#define  SCALEUP_PTG_3D_Ctr1_get_ptg_bg_udi(data)                                ((0x0000FF00&(data))>>8)
#define  SCALEUP_PTG_3D_Ctr1_get_ptg_bg_vdi(data)                                (0x000000FF&(data))

#define  SCALEUP_AccessData_CTRL_UZU                                            0x18029090
#define  SCALEUP_AccessData_CTRL_UZU_reg_addr                                    "0xB8029090"
#define  SCALEUP_AccessData_CTRL_UZU_reg                                         0xB8029090
#define  SCALEUP_AccessData_CTRL_UZU_inst_addr                                   "0x002D"
#define  set_SCALEUP_AccessData_CTRL_UZU_reg(data)                               (*((volatile unsigned int*)SCALEUP_AccessData_CTRL_UZU_reg)=data)
#define  get_SCALEUP_AccessData_CTRL_UZU_reg                                     (*((volatile unsigned int*)SCALEUP_AccessData_CTRL_UZU_reg))
#define  SCALEUP_AccessData_CTRL_UZU_cross_bar_en_shift                          (3)
#define  SCALEUP_AccessData_CTRL_UZU_ch_sel_shift                                (2)
#define  SCALEUP_AccessData_CTRL_UZU_write_en_shift                              (1)
#define  SCALEUP_AccessData_CTRL_UZU_read_en_shift                               (0)
#define  SCALEUP_AccessData_CTRL_UZU_cross_bar_en_mask                           (0x00000008)
#define  SCALEUP_AccessData_CTRL_UZU_ch_sel_mask                                 (0x00000004)
#define  SCALEUP_AccessData_CTRL_UZU_write_en_mask                               (0x00000002)
#define  SCALEUP_AccessData_CTRL_UZU_read_en_mask                                (0x00000001)
#define  SCALEUP_AccessData_CTRL_UZU_cross_bar_en(data)                          (0x00000008&((data)<<3))
#define  SCALEUP_AccessData_CTRL_UZU_ch_sel(data)                                (0x00000004&((data)<<2))
#define  SCALEUP_AccessData_CTRL_UZU_write_en(data)                              (0x00000002&((data)<<1))
#define  SCALEUP_AccessData_CTRL_UZU_read_en(data)                               (0x00000001&(data))
#define  SCALEUP_AccessData_CTRL_UZU_get_cross_bar_en(data)                      ((0x00000008&(data))>>3)
#define  SCALEUP_AccessData_CTRL_UZU_get_ch_sel(data)                            ((0x00000004&(data))>>2)
#define  SCALEUP_AccessData_CTRL_UZU_get_write_en(data)                          ((0x00000002&(data))>>1)
#define  SCALEUP_AccessData_CTRL_UZU_get_read_en(data)                           (0x00000001&(data))

#define  SCALEUP_AccessData_PosCtrl_UZU                                         0x18029094
#define  SCALEUP_AccessData_PosCtrl_UZU_reg_addr                                 "0xB8029094"
#define  SCALEUP_AccessData_PosCtrl_UZU_reg                                      0xB8029094
#define  SCALEUP_AccessData_PosCtrl_UZU_inst_addr                                "0x002E"
#define  set_SCALEUP_AccessData_PosCtrl_UZU_reg(data)                            (*((volatile unsigned int*)SCALEUP_AccessData_PosCtrl_UZU_reg)=data)
#define  get_SCALEUP_AccessData_PosCtrl_UZU_reg                                  (*((volatile unsigned int*)SCALEUP_AccessData_PosCtrl_UZU_reg))
#define  SCALEUP_AccessData_PosCtrl_UZU_starty_shift                             (16)
#define  SCALEUP_AccessData_PosCtrl_UZU_startx_shift                             (0)
#define  SCALEUP_AccessData_PosCtrl_UZU_starty_mask                              (0x0FFF0000)
#define  SCALEUP_AccessData_PosCtrl_UZU_startx_mask                              (0x00001FFF)
#define  SCALEUP_AccessData_PosCtrl_UZU_starty(data)                             (0x0FFF0000&((data)<<16))
#define  SCALEUP_AccessData_PosCtrl_UZU_startx(data)                             (0x00001FFF&(data))
#define  SCALEUP_AccessData_PosCtrl_UZU_get_starty(data)                         ((0x0FFF0000&(data))>>16)
#define  SCALEUP_AccessData_PosCtrl_UZU_get_startx(data)                         (0x00001FFF&(data))

#define  SCALEUP_ReadData_DATA_Y1_UZU                                           0x18029098
#define  SCALEUP_ReadData_DATA_Y1_UZU_reg_addr                                   "0xB8029098"
#define  SCALEUP_ReadData_DATA_Y1_UZU_reg                                        0xB8029098
#define  SCALEUP_ReadData_DATA_Y1_UZU_inst_addr                                  "0x002F"
#define  set_SCALEUP_ReadData_DATA_Y1_UZU_reg(data)                              (*((volatile unsigned int*)SCALEUP_ReadData_DATA_Y1_UZU_reg)=data)
#define  get_SCALEUP_ReadData_DATA_Y1_UZU_reg                                    (*((volatile unsigned int*)SCALEUP_ReadData_DATA_Y1_UZU_reg))
#define  SCALEUP_ReadData_DATA_Y1_UZU_y01_shift                                  (16)
#define  SCALEUP_ReadData_DATA_Y1_UZU_y00_shift                                  (0)
#define  SCALEUP_ReadData_DATA_Y1_UZU_y01_mask                                   (0x03FF0000)
#define  SCALEUP_ReadData_DATA_Y1_UZU_y00_mask                                   (0x000003FF)
#define  SCALEUP_ReadData_DATA_Y1_UZU_y01(data)                                  (0x03FF0000&((data)<<16))
#define  SCALEUP_ReadData_DATA_Y1_UZU_y00(data)                                  (0x000003FF&(data))
#define  SCALEUP_ReadData_DATA_Y1_UZU_get_y01(data)                              ((0x03FF0000&(data))>>16)
#define  SCALEUP_ReadData_DATA_Y1_UZU_get_y00(data)                              (0x000003FF&(data))

#define  SCALEUP_ReadData_DATA_Y2_UZU                                           0x1802909C
#define  SCALEUP_ReadData_DATA_Y2_UZU_reg_addr                                   "0xB802909C"
#define  SCALEUP_ReadData_DATA_Y2_UZU_reg                                        0xB802909C
#define  SCALEUP_ReadData_DATA_Y2_UZU_inst_addr                                  "0x0030"
#define  set_SCALEUP_ReadData_DATA_Y2_UZU_reg(data)                              (*((volatile unsigned int*)SCALEUP_ReadData_DATA_Y2_UZU_reg)=data)
#define  get_SCALEUP_ReadData_DATA_Y2_UZU_reg                                    (*((volatile unsigned int*)SCALEUP_ReadData_DATA_Y2_UZU_reg))
#define  SCALEUP_ReadData_DATA_Y2_UZU_y11_shift                                  (16)
#define  SCALEUP_ReadData_DATA_Y2_UZU_y10_shift                                  (0)
#define  SCALEUP_ReadData_DATA_Y2_UZU_y11_mask                                   (0x03FF0000)
#define  SCALEUP_ReadData_DATA_Y2_UZU_y10_mask                                   (0x000003FF)
#define  SCALEUP_ReadData_DATA_Y2_UZU_y11(data)                                  (0x03FF0000&((data)<<16))
#define  SCALEUP_ReadData_DATA_Y2_UZU_y10(data)                                  (0x000003FF&(data))
#define  SCALEUP_ReadData_DATA_Y2_UZU_get_y11(data)                              ((0x03FF0000&(data))>>16)
#define  SCALEUP_ReadData_DATA_Y2_UZU_get_y10(data)                              (0x000003FF&(data))

#define  SCALEUP_ReadData_DATA_C1_UZU                                           0x180290A0
#define  SCALEUP_ReadData_DATA_C1_UZU_reg_addr                                   "0xB80290A0"
#define  SCALEUP_ReadData_DATA_C1_UZU_reg                                        0xB80290A0
#define  SCALEUP_ReadData_DATA_C1_UZU_inst_addr                                  "0x0031"
#define  set_SCALEUP_ReadData_DATA_C1_UZU_reg(data)                              (*((volatile unsigned int*)SCALEUP_ReadData_DATA_C1_UZU_reg)=data)
#define  get_SCALEUP_ReadData_DATA_C1_UZU_reg                                    (*((volatile unsigned int*)SCALEUP_ReadData_DATA_C1_UZU_reg))
#define  SCALEUP_ReadData_DATA_C1_UZU_v00_shift                                  (16)
#define  SCALEUP_ReadData_DATA_C1_UZU_u00_shift                                  (0)
#define  SCALEUP_ReadData_DATA_C1_UZU_v00_mask                                   (0x03FF0000)
#define  SCALEUP_ReadData_DATA_C1_UZU_u00_mask                                   (0x000003FF)
#define  SCALEUP_ReadData_DATA_C1_UZU_v00(data)                                  (0x03FF0000&((data)<<16))
#define  SCALEUP_ReadData_DATA_C1_UZU_u00(data)                                  (0x000003FF&(data))
#define  SCALEUP_ReadData_DATA_C1_UZU_get_v00(data)                              ((0x03FF0000&(data))>>16)
#define  SCALEUP_ReadData_DATA_C1_UZU_get_u00(data)                              (0x000003FF&(data))

#define  SCALEUP_ReadData_DATA_C2_UZU                                           0x180290A4
#define  SCALEUP_ReadData_DATA_C2_UZU_reg_addr                                   "0xB80290A4"
#define  SCALEUP_ReadData_DATA_C2_UZU_reg                                        0xB80290A4
#define  SCALEUP_ReadData_DATA_C2_UZU_inst_addr                                  "0x0032"
#define  set_SCALEUP_ReadData_DATA_C2_UZU_reg(data)                              (*((volatile unsigned int*)SCALEUP_ReadData_DATA_C2_UZU_reg)=data)
#define  get_SCALEUP_ReadData_DATA_C2_UZU_reg                                    (*((volatile unsigned int*)SCALEUP_ReadData_DATA_C2_UZU_reg))
#define  SCALEUP_ReadData_DATA_C2_UZU_v01_shift                                  (16)
#define  SCALEUP_ReadData_DATA_C2_UZU_u01_shift                                  (0)
#define  SCALEUP_ReadData_DATA_C2_UZU_v01_mask                                   (0x03FF0000)
#define  SCALEUP_ReadData_DATA_C2_UZU_u01_mask                                   (0x000003FF)
#define  SCALEUP_ReadData_DATA_C2_UZU_v01(data)                                  (0x03FF0000&((data)<<16))
#define  SCALEUP_ReadData_DATA_C2_UZU_u01(data)                                  (0x000003FF&(data))
#define  SCALEUP_ReadData_DATA_C2_UZU_get_v01(data)                              ((0x03FF0000&(data))>>16)
#define  SCALEUP_ReadData_DATA_C2_UZU_get_u01(data)                              (0x000003FF&(data))

#define  SCALEUP_ReadData_DATA_C3_UZU                                           0x180290A8
#define  SCALEUP_ReadData_DATA_C3_UZU_reg_addr                                   "0xB80290A8"
#define  SCALEUP_ReadData_DATA_C3_UZU_reg                                        0xB80290A8
#define  SCALEUP_ReadData_DATA_C3_UZU_inst_addr                                  "0x0033"
#define  set_SCALEUP_ReadData_DATA_C3_UZU_reg(data)                              (*((volatile unsigned int*)SCALEUP_ReadData_DATA_C3_UZU_reg)=data)
#define  get_SCALEUP_ReadData_DATA_C3_UZU_reg                                    (*((volatile unsigned int*)SCALEUP_ReadData_DATA_C3_UZU_reg))
#define  SCALEUP_ReadData_DATA_C3_UZU_v10_shift                                  (16)
#define  SCALEUP_ReadData_DATA_C3_UZU_u10_shift                                  (0)
#define  SCALEUP_ReadData_DATA_C3_UZU_v10_mask                                   (0x03FF0000)
#define  SCALEUP_ReadData_DATA_C3_UZU_u10_mask                                   (0x000003FF)
#define  SCALEUP_ReadData_DATA_C3_UZU_v10(data)                                  (0x03FF0000&((data)<<16))
#define  SCALEUP_ReadData_DATA_C3_UZU_u10(data)                                  (0x000003FF&(data))
#define  SCALEUP_ReadData_DATA_C3_UZU_get_v10(data)                              ((0x03FF0000&(data))>>16)
#define  SCALEUP_ReadData_DATA_C3_UZU_get_u10(data)                              (0x000003FF&(data))

#define  SCALEUP_ReadData_DATA_C4_UZU                                           0x180290AC
#define  SCALEUP_ReadData_DATA_C4_UZU_reg_addr                                   "0xB80290AC"
#define  SCALEUP_ReadData_DATA_C4_UZU_reg                                        0xB80290AC
#define  SCALEUP_ReadData_DATA_C4_UZU_inst_addr                                  "0x0034"
#define  set_SCALEUP_ReadData_DATA_C4_UZU_reg(data)                              (*((volatile unsigned int*)SCALEUP_ReadData_DATA_C4_UZU_reg)=data)
#define  get_SCALEUP_ReadData_DATA_C4_UZU_reg                                    (*((volatile unsigned int*)SCALEUP_ReadData_DATA_C4_UZU_reg))
#define  SCALEUP_ReadData_DATA_C4_UZU_v11_shift                                  (16)
#define  SCALEUP_ReadData_DATA_C4_UZU_u11_shift                                  (0)
#define  SCALEUP_ReadData_DATA_C4_UZU_v11_mask                                   (0x03FF0000)
#define  SCALEUP_ReadData_DATA_C4_UZU_u11_mask                                   (0x000003FF)
#define  SCALEUP_ReadData_DATA_C4_UZU_v11(data)                                  (0x03FF0000&((data)<<16))
#define  SCALEUP_ReadData_DATA_C4_UZU_u11(data)                                  (0x000003FF&(data))
#define  SCALEUP_ReadData_DATA_C4_UZU_get_v11(data)                              ((0x03FF0000&(data))>>16)
#define  SCALEUP_ReadData_DATA_C4_UZU_get_u11(data)                              (0x000003FF&(data))

#define  SCALEUP_WriteData_DATA_UZU                                             0x180290B0
#define  SCALEUP_WriteData_DATA_UZU_reg_addr                                     "0xB80290B0"
#define  SCALEUP_WriteData_DATA_UZU_reg                                          0xB80290B0
#define  SCALEUP_WriteData_DATA_UZU_inst_addr                                    "0x0035"
#define  set_SCALEUP_WriteData_DATA_UZU_reg(data)                                (*((volatile unsigned int*)SCALEUP_WriteData_DATA_UZU_reg)=data)
#define  get_SCALEUP_WriteData_DATA_UZU_reg                                      (*((volatile unsigned int*)SCALEUP_WriteData_DATA_UZU_reg))
#define  SCALEUP_WriteData_DATA_UZU_vcti_lpf_lbound2_shift                       (22)
#define  SCALEUP_WriteData_DATA_UZU_vcti_lpf_hbound2_shift                       (12)
#define  SCALEUP_WriteData_DATA_UZU_v_shift                                      (8)
#define  SCALEUP_WriteData_DATA_UZU_u_shift                                      (4)
#define  SCALEUP_WriteData_DATA_UZU_y_shift                                      (0)
#define  SCALEUP_WriteData_DATA_UZU_vcti_lpf_lbound2_mask                        (0xFFC00000)
#define  SCALEUP_WriteData_DATA_UZU_vcti_lpf_hbound2_mask                        (0x003FF000)
#define  SCALEUP_WriteData_DATA_UZU_v_mask                                       (0x00000F00)
#define  SCALEUP_WriteData_DATA_UZU_u_mask                                       (0x000000F0)
#define  SCALEUP_WriteData_DATA_UZU_y_mask                                       (0x0000000F)
#define  SCALEUP_WriteData_DATA_UZU_vcti_lpf_lbound2(data)                       (0xFFC00000&((data)<<22))
#define  SCALEUP_WriteData_DATA_UZU_vcti_lpf_hbound2(data)                       (0x003FF000&((data)<<12))
#define  SCALEUP_WriteData_DATA_UZU_v(data)                                      (0x00000F00&((data)<<8))
#define  SCALEUP_WriteData_DATA_UZU_u(data)                                      (0x000000F0&((data)<<4))
#define  SCALEUP_WriteData_DATA_UZU_y(data)                                      (0x0000000F&(data))
#define  SCALEUP_WriteData_DATA_UZU_get_vcti_lpf_lbound2(data)                   ((0xFFC00000&(data))>>22)
#define  SCALEUP_WriteData_DATA_UZU_get_vcti_lpf_hbound2(data)                   ((0x003FF000&(data))>>12)
#define  SCALEUP_WriteData_DATA_UZU_get_v(data)                                  ((0x00000F00&(data))>>8)
#define  SCALEUP_WriteData_DATA_UZU_get_u(data)                                  ((0x000000F0&(data))>>4)
#define  SCALEUP_WriteData_DATA_UZU_get_y(data)                                  (0x0000000F&(data))

#define  SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP                                      0x180290B4
#define  SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_reg_addr                              "0xB80290B4"
#define  SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_reg                                   0xB80290B4
#define  SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_inst_addr                             "0x0036"
#define  set_SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_reg(data)                         (*((volatile unsigned int*)SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_reg)=data)
#define  get_SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_reg                               (*((volatile unsigned int*)SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_reg))
#define  SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_hor_m_front_drop_shift                (16)
#define  SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_hor_m_back_drop_shift                 (0)
#define  SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_hor_m_front_drop_mask                 (0x0FFF0000)
#define  SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_hor_m_back_drop_mask                  (0x00000FFF)
#define  SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_hor_m_front_drop(data)                (0x0FFF0000&((data)<<16))
#define  SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_hor_m_back_drop(data)                 (0x00000FFF&(data))
#define  SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_get_hor_m_front_drop(data)            ((0x0FFF0000&(data))>>16)
#define  SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_get_hor_m_back_drop(data)             (0x00000FFF&(data))

#define  SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP                                      0x180290B8
#define  SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_reg_addr                              "0xB80290B8"
#define  SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_reg                                   0xB80290B8
#define  SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_inst_addr                             "0x0037"
#define  set_SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_reg(data)                         (*((volatile unsigned int*)SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_reg)=data)
#define  get_SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_reg                               (*((volatile unsigned int*)SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_reg))
#define  SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_ver_m_front_drop_shift                (16)
#define  SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_ver_m_back_drop_shift                 (0)
#define  SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_ver_m_front_drop_mask                 (0x07FF0000)
#define  SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_ver_m_back_drop_mask                  (0x000007FF)
#define  SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_ver_m_front_drop(data)                (0x07FF0000&((data)<<16))
#define  SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_ver_m_back_drop(data)                 (0x000007FF&(data))
#define  SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_get_ver_m_front_drop(data)            ((0x07FF0000&(data))>>16)
#define  SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_get_ver_m_back_drop(data)             (0x000007FF&(data))

#define  SCALEUP_DM_UZU_PARTIAL_DROP_CTRL                                       0x180290BC
#define  SCALEUP_DM_UZU_PARTIAL_DROP_CTRL_reg_addr                               "0xB80290BC"
#define  SCALEUP_DM_UZU_PARTIAL_DROP_CTRL_reg                                    0xB80290BC
#define  SCALEUP_DM_UZU_PARTIAL_DROP_CTRL_inst_addr                              "0x0038"
#define  set_SCALEUP_DM_UZU_PARTIAL_DROP_CTRL_reg(data)                          (*((volatile unsigned int*)SCALEUP_DM_UZU_PARTIAL_DROP_CTRL_reg)=data)
#define  get_SCALEUP_DM_UZU_PARTIAL_DROP_CTRL_reg                                (*((volatile unsigned int*)SCALEUP_DM_UZU_PARTIAL_DROP_CTRL_reg))
#define  SCALEUP_DM_UZU_PARTIAL_DROP_CTRL_hor_m_front_drop_odd_shift             (16)
#define  SCALEUP_DM_UZU_PARTIAL_DROP_CTRL_hor_m_back_drop_odd_shift              (4)
#define  SCALEUP_DM_UZU_PARTIAL_DROP_CTRL_pixel_drop_mode_shift                  (2)
#define  SCALEUP_DM_UZU_PARTIAL_DROP_CTRL_hor_m_front_drop_odd_mask              (0x0FFF0000)
#define  SCALEUP_DM_UZU_PARTIAL_DROP_CTRL_hor_m_back_drop_odd_mask               (0x0000FFF0)
#define  SCALEUP_DM_UZU_PARTIAL_DROP_CTRL_pixel_drop_mode_mask                   (0x00000004)
#define  SCALEUP_DM_UZU_PARTIAL_DROP_CTRL_hor_m_front_drop_odd(data)             (0x0FFF0000&((data)<<16))
#define  SCALEUP_DM_UZU_PARTIAL_DROP_CTRL_hor_m_back_drop_odd(data)              (0x0000FFF0&((data)<<4))
#define  SCALEUP_DM_UZU_PARTIAL_DROP_CTRL_pixel_drop_mode(data)                  (0x00000004&((data)<<2))
#define  SCALEUP_DM_UZU_PARTIAL_DROP_CTRL_get_hor_m_front_drop_odd(data)         ((0x0FFF0000&(data))>>16)
#define  SCALEUP_DM_UZU_PARTIAL_DROP_CTRL_get_hor_m_back_drop_odd(data)          ((0x0000FFF0&(data))>>4)
#define  SCALEUP_DM_UZU_PARTIAL_DROP_CTRL_get_pixel_drop_mode(data)              ((0x00000004&(data))>>2)

#define  SCALEUP_DM_UZU_DB_CTRL                                                 0x180290F0
#define  SCALEUP_DM_UZU_DB_CTRL_reg_addr                                         "0xB80290F0"
#define  SCALEUP_DM_UZU_DB_CTRL_reg                                              0xB80290F0
#define  SCALEUP_DM_UZU_DB_CTRL_inst_addr                                        "0x0039"
#define  set_SCALEUP_DM_UZU_DB_CTRL_reg(data)                                    (*((volatile unsigned int*)SCALEUP_DM_UZU_DB_CTRL_reg)=data)
#define  get_SCALEUP_DM_UZU_DB_CTRL_reg                                          (*((volatile unsigned int*)SCALEUP_DM_UZU_DB_CTRL_reg))
#define  SCALEUP_DM_UZU_DB_CTRL_db_write_hold_cnt_shift                          (4)
#define  SCALEUP_DM_UZU_DB_CTRL_db_en_shift                                      (2)
#define  SCALEUP_DM_UZU_DB_CTRL_db_read_level_shift                              (1)
#define  SCALEUP_DM_UZU_DB_CTRL_db_apply_shift                                   (0)
#define  SCALEUP_DM_UZU_DB_CTRL_db_write_hold_cnt_mask                           (0x000000F0)
#define  SCALEUP_DM_UZU_DB_CTRL_db_en_mask                                       (0x00000004)
#define  SCALEUP_DM_UZU_DB_CTRL_db_read_level_mask                               (0x00000002)
#define  SCALEUP_DM_UZU_DB_CTRL_db_apply_mask                                    (0x00000001)
#define  SCALEUP_DM_UZU_DB_CTRL_db_write_hold_cnt(data)                          (0x000000F0&((data)<<4))
#define  SCALEUP_DM_UZU_DB_CTRL_db_en(data)                                      (0x00000004&((data)<<2))
#define  SCALEUP_DM_UZU_DB_CTRL_db_read_level(data)                              (0x00000002&((data)<<1))
#define  SCALEUP_DM_UZU_DB_CTRL_db_apply(data)                                   (0x00000001&(data))
#define  SCALEUP_DM_UZU_DB_CTRL_get_db_write_hold_cnt(data)                      ((0x000000F0&(data))>>4)
#define  SCALEUP_DM_UZU_DB_CTRL_get_db_en(data)                                  ((0x00000004&(data))>>2)
#define  SCALEUP_DM_UZU_DB_CTRL_get_db_read_level(data)                          ((0x00000002&(data))>>1)
#define  SCALEUP_DM_UZU_DB_CTRL_get_db_apply(data)                               (0x00000001&(data))

#define  SCALEUP_DM_UZU_WCLR                                                    0x180290F4
#define  SCALEUP_DM_UZU_WCLR_reg_addr                                            "0xB80290F4"
#define  SCALEUP_DM_UZU_WCLR_reg                                                 0xB80290F4
#define  SCALEUP_DM_UZU_WCLR_inst_addr                                           "0x003A"
#define  set_SCALEUP_DM_UZU_WCLR_reg(data)                                       (*((volatile unsigned int*)SCALEUP_DM_UZU_WCLR_reg)=data)
#define  get_SCALEUP_DM_UZU_WCLR_reg                                             (*((volatile unsigned int*)SCALEUP_DM_UZU_WCLR_reg))
#define  SCALEUP_DM_UZU_WCLR_buff_unf_shift                                      (0)
#define  SCALEUP_DM_UZU_WCLR_buff_unf_mask                                       (0x00000001)
#define  SCALEUP_DM_UZU_WCLR_buff_unf(data)                                      (0x00000001&(data))
#define  SCALEUP_DM_UZU_WCLR_get_buff_unf(data)                                  (0x00000001&(data))

#define  SCALEUP_DM_DIR_UZU_Ctrl                                                0x18029130
#define  SCALEUP_DM_DIR_UZU_Ctrl_reg_addr                                        "0xB8029130"
#define  SCALEUP_DM_DIR_UZU_Ctrl_reg                                             0xB8029130
#define  SCALEUP_DM_DIR_UZU_Ctrl_inst_addr                                       "0x003B"
#define  set_SCALEUP_DM_DIR_UZU_Ctrl_reg(data)                                   (*((volatile unsigned int*)SCALEUP_DM_DIR_UZU_Ctrl_reg)=data)
#define  get_SCALEUP_DM_DIR_UZU_Ctrl_reg                                         (*((volatile unsigned int*)SCALEUP_DM_DIR_UZU_Ctrl_reg))
#define  SCALEUP_DM_DIR_UZU_Ctrl_directionalscale_en_shift                       (31)
#define  SCALEUP_DM_DIR_UZU_Ctrl_ds_method_shift                                 (30)
#define  SCALEUP_DM_DIR_UZU_Ctrl_ds_phase_en_shift                               (29)
#define  SCALEUP_DM_DIR_UZU_Ctrl_ds_vlpf_en_shift                                (28)
#define  SCALEUP_DM_DIR_UZU_Ctrl_ds_hlpf_en_shift                                (27)
#define  SCALEUP_DM_DIR_UZU_Ctrl_ds_transang_nearhv_shift                        (26)
#define  SCALEUP_DM_DIR_UZU_Ctrl_db_mode_shift                                   (20)
#define  SCALEUP_DM_DIR_UZU_Ctrl_db_magfilter_shift                              (16)
#define  SCALEUP_DM_DIR_UZU_Ctrl_mag_ang_lpf_ratio_shift                         (12)
#define  SCALEUP_DM_DIR_UZU_Ctrl_dummy_11_5_shift                                (5)
#define  SCALEUP_DM_DIR_UZU_Ctrl_ds_conf_limit_shift                             (0)
#define  SCALEUP_DM_DIR_UZU_Ctrl_directionalscale_en_mask                        (0x80000000)
#define  SCALEUP_DM_DIR_UZU_Ctrl_ds_method_mask                                  (0x40000000)
#define  SCALEUP_DM_DIR_UZU_Ctrl_ds_phase_en_mask                                (0x20000000)
#define  SCALEUP_DM_DIR_UZU_Ctrl_ds_vlpf_en_mask                                 (0x10000000)
#define  SCALEUP_DM_DIR_UZU_Ctrl_ds_hlpf_en_mask                                 (0x08000000)
#define  SCALEUP_DM_DIR_UZU_Ctrl_ds_transang_nearhv_mask                         (0x04000000)
#define  SCALEUP_DM_DIR_UZU_Ctrl_db_mode_mask                                    (0x00F00000)
#define  SCALEUP_DM_DIR_UZU_Ctrl_db_magfilter_mask                               (0x000F0000)
#define  SCALEUP_DM_DIR_UZU_Ctrl_mag_ang_lpf_ratio_mask                          (0x0000F000)
#define  SCALEUP_DM_DIR_UZU_Ctrl_dummy_11_5_mask                                 (0x00000FE0)
#define  SCALEUP_DM_DIR_UZU_Ctrl_ds_conf_limit_mask                              (0x0000001F)
#define  SCALEUP_DM_DIR_UZU_Ctrl_directionalscale_en(data)                       (0x80000000&((data)<<31))
#define  SCALEUP_DM_DIR_UZU_Ctrl_ds_method(data)                                 (0x40000000&((data)<<30))
#define  SCALEUP_DM_DIR_UZU_Ctrl_ds_phase_en(data)                               (0x20000000&((data)<<29))
#define  SCALEUP_DM_DIR_UZU_Ctrl_ds_vlpf_en(data)                                (0x10000000&((data)<<28))
#define  SCALEUP_DM_DIR_UZU_Ctrl_ds_hlpf_en(data)                                (0x08000000&((data)<<27))
#define  SCALEUP_DM_DIR_UZU_Ctrl_ds_transang_nearhv(data)                        (0x04000000&((data)<<26))
#define  SCALEUP_DM_DIR_UZU_Ctrl_db_mode(data)                                   (0x00F00000&((data)<<20))
#define  SCALEUP_DM_DIR_UZU_Ctrl_db_magfilter(data)                              (0x000F0000&((data)<<16))
#define  SCALEUP_DM_DIR_UZU_Ctrl_mag_ang_lpf_ratio(data)                         (0x0000F000&((data)<<12))
#define  SCALEUP_DM_DIR_UZU_Ctrl_dummy_11_5(data)                                (0x00000FE0&((data)<<5))
#define  SCALEUP_DM_DIR_UZU_Ctrl_ds_conf_limit(data)                             (0x0000001F&(data))
#define  SCALEUP_DM_DIR_UZU_Ctrl_get_directionalscale_en(data)                   ((0x80000000&(data))>>31)
#define  SCALEUP_DM_DIR_UZU_Ctrl_get_ds_method(data)                             ((0x40000000&(data))>>30)
#define  SCALEUP_DM_DIR_UZU_Ctrl_get_ds_phase_en(data)                           ((0x20000000&(data))>>29)
#define  SCALEUP_DM_DIR_UZU_Ctrl_get_ds_vlpf_en(data)                            ((0x10000000&(data))>>28)
#define  SCALEUP_DM_DIR_UZU_Ctrl_get_ds_hlpf_en(data)                            ((0x08000000&(data))>>27)
#define  SCALEUP_DM_DIR_UZU_Ctrl_get_ds_transang_nearhv(data)                    ((0x04000000&(data))>>26)
#define  SCALEUP_DM_DIR_UZU_Ctrl_get_db_mode(data)                               ((0x00F00000&(data))>>20)
#define  SCALEUP_DM_DIR_UZU_Ctrl_get_db_magfilter(data)                          ((0x000F0000&(data))>>16)
#define  SCALEUP_DM_DIR_UZU_Ctrl_get_mag_ang_lpf_ratio(data)                     ((0x0000F000&(data))>>12)
#define  SCALEUP_DM_DIR_UZU_Ctrl_get_dummy_11_5(data)                            ((0x00000FE0&(data))>>5)
#define  SCALEUP_DM_DIR_UZU_Ctrl_get_ds_conf_limit(data)                         (0x0000001F&(data))

#define  SCALEUP_DM_DIR_UZU_TransAng1                                           0x18029134
#define  SCALEUP_DM_DIR_UZU_TransAng1_reg_addr                                   "0xB8029134"
#define  SCALEUP_DM_DIR_UZU_TransAng1_reg                                        0xB8029134
#define  SCALEUP_DM_DIR_UZU_TransAng1_inst_addr                                  "0x003C"
#define  set_SCALEUP_DM_DIR_UZU_TransAng1_reg(data)                              (*((volatile unsigned int*)SCALEUP_DM_DIR_UZU_TransAng1_reg)=data)
#define  get_SCALEUP_DM_DIR_UZU_TransAng1_reg                                    (*((volatile unsigned int*)SCALEUP_DM_DIR_UZU_TransAng1_reg))
#define  SCALEUP_DM_DIR_UZU_TransAng1_transang_sec3_shift                        (24)
#define  SCALEUP_DM_DIR_UZU_TransAng1_transang_sec2_shift                        (16)
#define  SCALEUP_DM_DIR_UZU_TransAng1_transang_sec1_shift                        (8)
#define  SCALEUP_DM_DIR_UZU_TransAng1_transang_sec0_shift                        (0)
#define  SCALEUP_DM_DIR_UZU_TransAng1_transang_sec3_mask                         (0x7F000000)
#define  SCALEUP_DM_DIR_UZU_TransAng1_transang_sec2_mask                         (0x003F0000)
#define  SCALEUP_DM_DIR_UZU_TransAng1_transang_sec1_mask                         (0x00003F00)
#define  SCALEUP_DM_DIR_UZU_TransAng1_transang_sec0_mask                         (0x0000003F)
#define  SCALEUP_DM_DIR_UZU_TransAng1_transang_sec3(data)                        (0x7F000000&((data)<<24))
#define  SCALEUP_DM_DIR_UZU_TransAng1_transang_sec2(data)                        (0x003F0000&((data)<<16))
#define  SCALEUP_DM_DIR_UZU_TransAng1_transang_sec1(data)                        (0x00003F00&((data)<<8))
#define  SCALEUP_DM_DIR_UZU_TransAng1_transang_sec0(data)                        (0x0000003F&(data))
#define  SCALEUP_DM_DIR_UZU_TransAng1_get_transang_sec3(data)                    ((0x7F000000&(data))>>24)
#define  SCALEUP_DM_DIR_UZU_TransAng1_get_transang_sec2(data)                    ((0x003F0000&(data))>>16)
#define  SCALEUP_DM_DIR_UZU_TransAng1_get_transang_sec1(data)                    ((0x00003F00&(data))>>8)
#define  SCALEUP_DM_DIR_UZU_TransAng1_get_transang_sec0(data)                    (0x0000003F&(data))

#define  SCALEUP_DM_DIR_UZU_TransAng2                                           0x18029138
#define  SCALEUP_DM_DIR_UZU_TransAng2_reg_addr                                   "0xB8029138"
#define  SCALEUP_DM_DIR_UZU_TransAng2_reg                                        0xB8029138
#define  SCALEUP_DM_DIR_UZU_TransAng2_inst_addr                                  "0x003D"
#define  set_SCALEUP_DM_DIR_UZU_TransAng2_reg(data)                              (*((volatile unsigned int*)SCALEUP_DM_DIR_UZU_TransAng2_reg)=data)
#define  get_SCALEUP_DM_DIR_UZU_TransAng2_reg                                    (*((volatile unsigned int*)SCALEUP_DM_DIR_UZU_TransAng2_reg))
#define  SCALEUP_DM_DIR_UZU_TransAng2_transang_sec4_shift                        (24)
#define  SCALEUP_DM_DIR_UZU_TransAng2_transang_step4_shift                       (16)
#define  SCALEUP_DM_DIR_UZU_TransAng2_transang_step3_shift                       (12)
#define  SCALEUP_DM_DIR_UZU_TransAng2_transang_step2_shift                       (8)
#define  SCALEUP_DM_DIR_UZU_TransAng2_transang_step1_shift                       (4)
#define  SCALEUP_DM_DIR_UZU_TransAng2_transang_step0_shift                       (0)
#define  SCALEUP_DM_DIR_UZU_TransAng2_transang_sec4_mask                         (0x7F000000)
#define  SCALEUP_DM_DIR_UZU_TransAng2_transang_step4_mask                        (0x000F0000)
#define  SCALEUP_DM_DIR_UZU_TransAng2_transang_step3_mask                        (0x0000F000)
#define  SCALEUP_DM_DIR_UZU_TransAng2_transang_step2_mask                        (0x00000F00)
#define  SCALEUP_DM_DIR_UZU_TransAng2_transang_step1_mask                        (0x000000F0)
#define  SCALEUP_DM_DIR_UZU_TransAng2_transang_step0_mask                        (0x0000000F)
#define  SCALEUP_DM_DIR_UZU_TransAng2_transang_sec4(data)                        (0x7F000000&((data)<<24))
#define  SCALEUP_DM_DIR_UZU_TransAng2_transang_step4(data)                       (0x000F0000&((data)<<16))
#define  SCALEUP_DM_DIR_UZU_TransAng2_transang_step3(data)                       (0x0000F000&((data)<<12))
#define  SCALEUP_DM_DIR_UZU_TransAng2_transang_step2(data)                       (0x00000F00&((data)<<8))
#define  SCALEUP_DM_DIR_UZU_TransAng2_transang_step1(data)                       (0x000000F0&((data)<<4))
#define  SCALEUP_DM_DIR_UZU_TransAng2_transang_step0(data)                       (0x0000000F&(data))
#define  SCALEUP_DM_DIR_UZU_TransAng2_get_transang_sec4(data)                    ((0x7F000000&(data))>>24)
#define  SCALEUP_DM_DIR_UZU_TransAng2_get_transang_step4(data)                   ((0x000F0000&(data))>>16)
#define  SCALEUP_DM_DIR_UZU_TransAng2_get_transang_step3(data)                   ((0x0000F000&(data))>>12)
#define  SCALEUP_DM_DIR_UZU_TransAng2_get_transang_step2(data)                   ((0x00000F00&(data))>>8)
#define  SCALEUP_DM_DIR_UZU_TransAng2_get_transang_step1(data)                   ((0x000000F0&(data))>>4)
#define  SCALEUP_DM_DIR_UZU_TransAng2_get_transang_step0(data)                   (0x0000000F&(data))

#define  SCALEUP_DM_DIR_UZU_OnePixelDetect                                      0x18029144
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_reg_addr                              "0xB8029144"
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_reg                                   0xB8029144
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_inst_addr                             "0x003E"
#define  set_SCALEUP_DM_DIR_UZU_OnePixelDetect_reg(data)                         (*((volatile unsigned int*)SCALEUP_DM_DIR_UZU_OnePixelDetect_reg)=data)
#define  get_SCALEUP_DM_DIR_UZU_OnePixelDetect_reg                               (*((volatile unsigned int*)SCALEUP_DM_DIR_UZU_OnePixelDetect_reg))
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_onepx_en_shift                        (28)
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_onepx_centerdiffthd_shift             (24)
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_onepx_sidediffthd_shift               (20)
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_onepx_diffstep_shift                  (16)
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_onepx_lowbnd_shift                    (8)
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_onepx_step_shift                      (4)
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_onepx_en_mask                         (0x10000000)
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_onepx_centerdiffthd_mask              (0x0F000000)
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_onepx_sidediffthd_mask                (0x00F00000)
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_onepx_diffstep_mask                   (0x00070000)
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_onepx_lowbnd_mask                     (0x0000FF00)
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_onepx_step_mask                       (0x00000070)
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_onepx_en(data)                        (0x10000000&((data)<<28))
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_onepx_centerdiffthd(data)             (0x0F000000&((data)<<24))
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_onepx_sidediffthd(data)               (0x00F00000&((data)<<20))
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_onepx_diffstep(data)                  (0x00070000&((data)<<16))
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_onepx_lowbnd(data)                    (0x0000FF00&((data)<<8))
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_onepx_step(data)                      (0x00000070&((data)<<4))
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_get_onepx_en(data)                    ((0x10000000&(data))>>28)
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_get_onepx_centerdiffthd(data)         ((0x0F000000&(data))>>24)
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_get_onepx_sidediffthd(data)           ((0x00F00000&(data))>>20)
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_get_onepx_diffstep(data)              ((0x00070000&(data))>>16)
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_get_onepx_lowbnd(data)                ((0x0000FF00&(data))>>8)
#define  SCALEUP_DM_DIR_UZU_OnePixelDetect_get_onepx_step(data)                  ((0x00000070&(data))>>4)

#define  SCALEUP_DM_DIR_UZU_AngMagScore                                         0x18029140
#define  SCALEUP_DM_DIR_UZU_AngMagScore_reg_addr                                 "0xB8029140"
#define  SCALEUP_DM_DIR_UZU_AngMagScore_reg                                      0xB8029140
#define  SCALEUP_DM_DIR_UZU_AngMagScore_inst_addr                                "0x003F"
#define  set_SCALEUP_DM_DIR_UZU_AngMagScore_reg(data)                            (*((volatile unsigned int*)SCALEUP_DM_DIR_UZU_AngMagScore_reg)=data)
#define  get_SCALEUP_DM_DIR_UZU_AngMagScore_reg                                  (*((volatile unsigned int*)SCALEUP_DM_DIR_UZU_AngMagScore_reg))
#define  SCALEUP_DM_DIR_UZU_AngMagScore_angdiff_lowbnd_shift                     (24)
#define  SCALEUP_DM_DIR_UZU_AngMagScore_angdiff_step_shift                       (16)
#define  SCALEUP_DM_DIR_UZU_AngMagScore_mag_lowbnd_shift                         (8)
#define  SCALEUP_DM_DIR_UZU_AngMagScore_mag_step_shift                           (0)
#define  SCALEUP_DM_DIR_UZU_AngMagScore_angdiff_lowbnd_mask                      (0x3F000000)
#define  SCALEUP_DM_DIR_UZU_AngMagScore_angdiff_step_mask                        (0x00070000)
#define  SCALEUP_DM_DIR_UZU_AngMagScore_mag_lowbnd_mask                          (0x0000FF00)
#define  SCALEUP_DM_DIR_UZU_AngMagScore_mag_step_mask                            (0x00000007)
#define  SCALEUP_DM_DIR_UZU_AngMagScore_angdiff_lowbnd(data)                     (0x3F000000&((data)<<24))
#define  SCALEUP_DM_DIR_UZU_AngMagScore_angdiff_step(data)                       (0x00070000&((data)<<16))
#define  SCALEUP_DM_DIR_UZU_AngMagScore_mag_lowbnd(data)                         (0x0000FF00&((data)<<8))
#define  SCALEUP_DM_DIR_UZU_AngMagScore_mag_step(data)                           (0x00000007&(data))
#define  SCALEUP_DM_DIR_UZU_AngMagScore_get_angdiff_lowbnd(data)                 ((0x3F000000&(data))>>24)
#define  SCALEUP_DM_DIR_UZU_AngMagScore_get_angdiff_step(data)                   ((0x00070000&(data))>>16)
#define  SCALEUP_DM_DIR_UZU_AngMagScore_get_mag_lowbnd(data)                     ((0x0000FF00&(data))>>8)
#define  SCALEUP_DM_DIR_UZU_AngMagScore_get_mag_step(data)                       (0x00000007&(data))

#define  SCALEUP_DM_DIR_UZU_Conf                                                0x18029148
#define  SCALEUP_DM_DIR_UZU_Conf_reg_addr                                        "0xB8029148"
#define  SCALEUP_DM_DIR_UZU_Conf_reg                                             0xB8029148
#define  SCALEUP_DM_DIR_UZU_Conf_inst_addr                                       "0x0040"
#define  set_SCALEUP_DM_DIR_UZU_Conf_reg(data)                                   (*((volatile unsigned int*)SCALEUP_DM_DIR_UZU_Conf_reg)=data)
#define  get_SCALEUP_DM_DIR_UZU_Conf_reg                                         (*((volatile unsigned int*)SCALEUP_DM_DIR_UZU_Conf_reg))
#define  SCALEUP_DM_DIR_UZU_Conf_angdiff_lowbnd2_shift                           (24)
#define  SCALEUP_DM_DIR_UZU_Conf_angdiff_step2_shift                             (20)
#define  SCALEUP_DM_DIR_UZU_Conf_conf_step_shift                                 (13)
#define  SCALEUP_DM_DIR_UZU_Conf_conf_offset_shift                               (8)
#define  SCALEUP_DM_DIR_UZU_Conf_conf_lowbnd_shift                               (0)
#define  SCALEUP_DM_DIR_UZU_Conf_angdiff_lowbnd2_mask                            (0x3F000000)
#define  SCALEUP_DM_DIR_UZU_Conf_angdiff_step2_mask                              (0x00700000)
#define  SCALEUP_DM_DIR_UZU_Conf_conf_step_mask                                  (0x0000E000)
#define  SCALEUP_DM_DIR_UZU_Conf_conf_offset_mask                                (0x00001F00)
#define  SCALEUP_DM_DIR_UZU_Conf_conf_lowbnd_mask                                (0x000000FF)
#define  SCALEUP_DM_DIR_UZU_Conf_angdiff_lowbnd2(data)                           (0x3F000000&((data)<<24))
#define  SCALEUP_DM_DIR_UZU_Conf_angdiff_step2(data)                             (0x00700000&((data)<<20))
#define  SCALEUP_DM_DIR_UZU_Conf_conf_step(data)                                 (0x0000E000&((data)<<13))
#define  SCALEUP_DM_DIR_UZU_Conf_conf_offset(data)                               (0x00001F00&((data)<<8))
#define  SCALEUP_DM_DIR_UZU_Conf_conf_lowbnd(data)                               (0x000000FF&(data))
#define  SCALEUP_DM_DIR_UZU_Conf_get_angdiff_lowbnd2(data)                       ((0x3F000000&(data))>>24)
#define  SCALEUP_DM_DIR_UZU_Conf_get_angdiff_step2(data)                         ((0x00700000&(data))>>20)
#define  SCALEUP_DM_DIR_UZU_Conf_get_conf_step(data)                             ((0x0000E000&(data))>>13)
#define  SCALEUP_DM_DIR_UZU_Conf_get_conf_offset(data)                           ((0x00001F00&(data))>>8)
#define  SCALEUP_DM_DIR_UZU_Conf_get_conf_lowbnd(data)                           (0x000000FF&(data))

#define  SCALEUP_DM_DIR_UZU_AngleCheck                                          0x1802914C
#define  SCALEUP_DM_DIR_UZU_AngleCheck_reg_addr                                  "0xB802914C"
#define  SCALEUP_DM_DIR_UZU_AngleCheck_reg                                       0xB802914C
#define  SCALEUP_DM_DIR_UZU_AngleCheck_inst_addr                                 "0x0041"
#define  set_SCALEUP_DM_DIR_UZU_AngleCheck_reg(data)                             (*((volatile unsigned int*)SCALEUP_DM_DIR_UZU_AngleCheck_reg)=data)
#define  get_SCALEUP_DM_DIR_UZU_AngleCheck_reg                                   (*((volatile unsigned int*)SCALEUP_DM_DIR_UZU_AngleCheck_reg))
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkhv_angrange_shift                    (28)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkhv_en_shift                          (27)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkhv_angstep_shift                     (24)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkhv_diffstep_shift                    (21)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkhv_diffrange_shift                   (16)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkpn_angrange_shift                    (12)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkpn_en_shift                          (11)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkpn_angstep_shift                     (8)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkpn_diffstep_shift                    (5)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkpn_diffrange_shift                   (0)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkhv_angrange_mask                     (0xF0000000)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkhv_en_mask                           (0x08000000)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkhv_angstep_mask                      (0x07000000)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkhv_diffstep_mask                     (0x00E00000)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkhv_diffrange_mask                    (0x001F0000)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkpn_angrange_mask                     (0x0000F000)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkpn_en_mask                           (0x00000800)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkpn_angstep_mask                      (0x00000700)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkpn_diffstep_mask                     (0x000000E0)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkpn_diffrange_mask                    (0x0000001F)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkhv_angrange(data)                    (0xF0000000&((data)<<28))
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkhv_en(data)                          (0x08000000&((data)<<27))
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkhv_angstep(data)                     (0x07000000&((data)<<24))
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkhv_diffstep(data)                    (0x00E00000&((data)<<21))
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkhv_diffrange(data)                   (0x001F0000&((data)<<16))
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkpn_angrange(data)                    (0x0000F000&((data)<<12))
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkpn_en(data)                          (0x00000800&((data)<<11))
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkpn_angstep(data)                     (0x00000700&((data)<<8))
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkpn_diffstep(data)                    (0x000000E0&((data)<<5))
#define  SCALEUP_DM_DIR_UZU_AngleCheck_checkpn_diffrange(data)                   (0x0000001F&(data))
#define  SCALEUP_DM_DIR_UZU_AngleCheck_get_checkhv_angrange(data)                ((0xF0000000&(data))>>28)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_get_checkhv_en(data)                      ((0x08000000&(data))>>27)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_get_checkhv_angstep(data)                 ((0x07000000&(data))>>24)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_get_checkhv_diffstep(data)                ((0x00E00000&(data))>>21)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_get_checkhv_diffrange(data)               ((0x001F0000&(data))>>16)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_get_checkpn_angrange(data)                ((0x0000F000&(data))>>12)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_get_checkpn_en(data)                      ((0x00000800&(data))>>11)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_get_checkpn_angstep(data)                 ((0x00000700&(data))>>8)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_get_checkpn_diffstep(data)                ((0x000000E0&(data))>>5)
#define  SCALEUP_DM_DIR_UZU_AngleCheck_get_checkpn_diffrange(data)               (0x0000001F&(data))

#define  SCALEUP_DM_DIR_UZU_Diaglpf                                             0x18029160
#define  SCALEUP_DM_DIR_UZU_Diaglpf_reg_addr                                     "0xB8029160"
#define  SCALEUP_DM_DIR_UZU_Diaglpf_reg                                          0xB8029160
#define  SCALEUP_DM_DIR_UZU_Diaglpf_inst_addr                                    "0x0042"
#define  set_SCALEUP_DM_DIR_UZU_Diaglpf_reg(data)                                (*((volatile unsigned int*)SCALEUP_DM_DIR_UZU_Diaglpf_reg)=data)
#define  get_SCALEUP_DM_DIR_UZU_Diaglpf_reg                                      (*((volatile unsigned int*)SCALEUP_DM_DIR_UZU_Diaglpf_reg))
#define  SCALEUP_DM_DIR_UZU_Diaglpf_diaglpf_hmn_penalty2_shift                   (12)
#define  SCALEUP_DM_DIR_UZU_Diaglpf_diaglpf_hmn_penalty1_shift                   (4)
#define  SCALEUP_DM_DIR_UZU_Diaglpf_diaglpf_en_shift                             (0)
#define  SCALEUP_DM_DIR_UZU_Diaglpf_diaglpf_hmn_penalty2_mask                    (0x0003F000)
#define  SCALEUP_DM_DIR_UZU_Diaglpf_diaglpf_hmn_penalty1_mask                    (0x000003F0)
#define  SCALEUP_DM_DIR_UZU_Diaglpf_diaglpf_en_mask                              (0x00000001)
#define  SCALEUP_DM_DIR_UZU_Diaglpf_diaglpf_hmn_penalty2(data)                   (0x0003F000&((data)<<12))
#define  SCALEUP_DM_DIR_UZU_Diaglpf_diaglpf_hmn_penalty1(data)                   (0x000003F0&((data)<<4))
#define  SCALEUP_DM_DIR_UZU_Diaglpf_diaglpf_en(data)                             (0x00000001&(data))
#define  SCALEUP_DM_DIR_UZU_Diaglpf_get_diaglpf_hmn_penalty2(data)               ((0x0003F000&(data))>>12)
#define  SCALEUP_DM_DIR_UZU_Diaglpf_get_diaglpf_hmn_penalty1(data)               ((0x000003F0&(data))>>4)
#define  SCALEUP_DM_DIR_UZU_Diaglpf_get_diaglpf_en(data)                         (0x00000001&(data))

#define  SCALEUP_DM_DIR_UZU_Diaglpf_gain                                        0x18029164
#define  SCALEUP_DM_DIR_UZU_Diaglpf_gain_reg_addr                                "0xB8029164"
#define  SCALEUP_DM_DIR_UZU_Diaglpf_gain_reg                                     0xB8029164
#define  SCALEUP_DM_DIR_UZU_Diaglpf_gain_inst_addr                               "0x0043"
#define  set_SCALEUP_DM_DIR_UZU_Diaglpf_gain_reg(data)                           (*((volatile unsigned int*)SCALEUP_DM_DIR_UZU_Diaglpf_gain_reg)=data)
#define  get_SCALEUP_DM_DIR_UZU_Diaglpf_gain_reg                                 (*((volatile unsigned int*)SCALEUP_DM_DIR_UZU_Diaglpf_gain_reg))
#define  SCALEUP_DM_DIR_UZU_Diaglpf_gain_diaglpf_hmn_slope_shift                 (20)
#define  SCALEUP_DM_DIR_UZU_Diaglpf_gain_diaglpf_hmn_lowbd_shift                 (12)
#define  SCALEUP_DM_DIR_UZU_Diaglpf_gain_diaglpf_ang_slope_shift                 (8)
#define  SCALEUP_DM_DIR_UZU_Diaglpf_gain_diaglpf_ang_lowbd_shift                 (0)
#define  SCALEUP_DM_DIR_UZU_Diaglpf_gain_diaglpf_hmn_slope_mask                  (0x00F00000)
#define  SCALEUP_DM_DIR_UZU_Diaglpf_gain_diaglpf_hmn_lowbd_mask                  (0x0007F000)
#define  SCALEUP_DM_DIR_UZU_Diaglpf_gain_diaglpf_ang_slope_mask                  (0x00000F00)
#define  SCALEUP_DM_DIR_UZU_Diaglpf_gain_diaglpf_ang_lowbd_mask                  (0x0000007F)
#define  SCALEUP_DM_DIR_UZU_Diaglpf_gain_diaglpf_hmn_slope(data)                 (0x00F00000&((data)<<20))
#define  SCALEUP_DM_DIR_UZU_Diaglpf_gain_diaglpf_hmn_lowbd(data)                 (0x0007F000&((data)<<12))
#define  SCALEUP_DM_DIR_UZU_Diaglpf_gain_diaglpf_ang_slope(data)                 (0x00000F00&((data)<<8))
#define  SCALEUP_DM_DIR_UZU_Diaglpf_gain_diaglpf_ang_lowbd(data)                 (0x0000007F&(data))
#define  SCALEUP_DM_DIR_UZU_Diaglpf_gain_get_diaglpf_hmn_slope(data)             ((0x00F00000&(data))>>20)
#define  SCALEUP_DM_DIR_UZU_Diaglpf_gain_get_diaglpf_hmn_lowbd(data)             ((0x0007F000&(data))>>12)
#define  SCALEUP_DM_DIR_UZU_Diaglpf_gain_get_diaglpf_ang_slope(data)             ((0x00000F00&(data))>>8)
#define  SCALEUP_DM_DIR_UZU_Diaglpf_gain_get_diaglpf_ang_lowbd(data)             (0x0000007F&(data))

#define  SCALEUP_COEF_TABLE_RW_CTL                                              0x18029390
#define  SCALEUP_COEF_TABLE_RW_CTL_reg_addr                                      "0xB8029390"
#define  SCALEUP_COEF_TABLE_RW_CTL_reg                                           0xB8029390
#define  SCALEUP_COEF_TABLE_RW_CTL_inst_addr                                     "0x0044"
#define  set_SCALEUP_COEF_TABLE_RW_CTL_reg(data)                                 (*((volatile unsigned int*)SCALEUP_COEF_TABLE_RW_CTL_reg)=data)
#define  get_SCALEUP_COEF_TABLE_RW_CTL_reg                                       (*((volatile unsigned int*)SCALEUP_COEF_TABLE_RW_CTL_reg))
#define  SCALEUP_COEF_TABLE_RW_CTL_coef_read_tab_sel_shift                       (6)
#define  SCALEUP_COEF_TABLE_RW_CTL_coef_rw_en_shift                              (5)
#define  SCALEUP_COEF_TABLE_RW_CTL_coef_rw_sel_shift                             (4)
#define  SCALEUP_COEF_TABLE_RW_CTL_coef_tab_sel_shift                            (0)
#define  SCALEUP_COEF_TABLE_RW_CTL_coef_read_tab_sel_mask                        (0x00000040)
#define  SCALEUP_COEF_TABLE_RW_CTL_coef_rw_en_mask                               (0x00000020)
#define  SCALEUP_COEF_TABLE_RW_CTL_coef_rw_sel_mask                              (0x00000010)
#define  SCALEUP_COEF_TABLE_RW_CTL_coef_tab_sel_mask                             (0x0000000F)
#define  SCALEUP_COEF_TABLE_RW_CTL_coef_read_tab_sel(data)                       (0x00000040&((data)<<6))
#define  SCALEUP_COEF_TABLE_RW_CTL_coef_rw_en(data)                              (0x00000020&((data)<<5))
#define  SCALEUP_COEF_TABLE_RW_CTL_coef_rw_sel(data)                             (0x00000010&((data)<<4))
#define  SCALEUP_COEF_TABLE_RW_CTL_coef_tab_sel(data)                            (0x0000000F&(data))
#define  SCALEUP_COEF_TABLE_RW_CTL_get_coef_read_tab_sel(data)                   ((0x00000040&(data))>>6)
#define  SCALEUP_COEF_TABLE_RW_CTL_get_coef_rw_en(data)                          ((0x00000020&(data))>>5)
#define  SCALEUP_COEF_TABLE_RW_CTL_get_coef_rw_sel(data)                         ((0x00000010&(data))>>4)
#define  SCALEUP_COEF_TABLE_RW_CTL_get_coef_tab_sel(data)                        (0x0000000F&(data))

#define  SCALEUP_COEF_TABLE_CTL                                                 0x18029394
#define  SCALEUP_COEF_TABLE_CTL_reg_addr                                         "0xB8029394"
#define  SCALEUP_COEF_TABLE_CTL_reg                                              0xB8029394
#define  SCALEUP_COEF_TABLE_CTL_inst_addr                                        "0x0045"
#define  set_SCALEUP_COEF_TABLE_CTL_reg(data)                                    (*((volatile unsigned int*)SCALEUP_COEF_TABLE_CTL_reg)=data)
#define  get_SCALEUP_COEF_TABLE_CTL_reg                                          (*((volatile unsigned int*)SCALEUP_COEF_TABLE_CTL_reg))
#define  SCALEUP_COEF_TABLE_CTL_coef_addr_shift                                  (8)
#define  SCALEUP_COEF_TABLE_CTL_coef_write_shift                                 (4)
#define  SCALEUP_COEF_TABLE_CTL_coef_addr_mask                                   (0x0000FF00)
#define  SCALEUP_COEF_TABLE_CTL_coef_write_mask                                  (0x00000010)
#define  SCALEUP_COEF_TABLE_CTL_coef_addr(data)                                  (0x0000FF00&((data)<<8))
#define  SCALEUP_COEF_TABLE_CTL_coef_write(data)                                 (0x00000010&((data)<<4))
#define  SCALEUP_COEF_TABLE_CTL_get_coef_addr(data)                              ((0x0000FF00&(data))>>8)
#define  SCALEUP_COEF_TABLE_CTL_get_coef_write(data)                             ((0x00000010&(data))>>4)

#define  SCALEUP_COEF_TABLE_CTL_0                                               0x18029398
#define  SCALEUP_COEF_TABLE_CTL_0_reg_addr                                       "0xB8029398"
#define  SCALEUP_COEF_TABLE_CTL_0_reg                                            0xB8029398
#define  SCALEUP_COEF_TABLE_CTL_0_inst_addr                                      "0x0046"
#define  set_SCALEUP_COEF_TABLE_CTL_0_reg(data)                                  (*((volatile unsigned int*)SCALEUP_COEF_TABLE_CTL_0_reg)=data)
#define  get_SCALEUP_COEF_TABLE_CTL_0_reg                                        (*((volatile unsigned int*)SCALEUP_COEF_TABLE_CTL_0_reg))
#define  SCALEUP_COEF_TABLE_CTL_0_coef0_shift                                    (16)
#define  SCALEUP_COEF_TABLE_CTL_0_coef1_shift                                    (0)
#define  SCALEUP_COEF_TABLE_CTL_0_coef0_mask                                     (0x0FFF0000)
#define  SCALEUP_COEF_TABLE_CTL_0_coef1_mask                                     (0x00000FFF)
#define  SCALEUP_COEF_TABLE_CTL_0_coef0(data)                                    (0x0FFF0000&((data)<<16))
#define  SCALEUP_COEF_TABLE_CTL_0_coef1(data)                                    (0x00000FFF&(data))
#define  SCALEUP_COEF_TABLE_CTL_0_get_coef0(data)                                ((0x0FFF0000&(data))>>16)
#define  SCALEUP_COEF_TABLE_CTL_0_get_coef1(data)                                (0x00000FFF&(data))

#define  SCALEUP_COEF_TABLE_CTL_1                                               0x1802939C
#define  SCALEUP_COEF_TABLE_CTL_1_reg_addr                                       "0xB802939C"
#define  SCALEUP_COEF_TABLE_CTL_1_reg                                            0xB802939C
#define  SCALEUP_COEF_TABLE_CTL_1_inst_addr                                      "0x0047"
#define  set_SCALEUP_COEF_TABLE_CTL_1_reg(data)                                  (*((volatile unsigned int*)SCALEUP_COEF_TABLE_CTL_1_reg)=data)
#define  get_SCALEUP_COEF_TABLE_CTL_1_reg                                        (*((volatile unsigned int*)SCALEUP_COEF_TABLE_CTL_1_reg))
#define  SCALEUP_COEF_TABLE_CTL_1_coef2_shift                                    (16)
#define  SCALEUP_COEF_TABLE_CTL_1_coef3_shift                                    (0)
#define  SCALEUP_COEF_TABLE_CTL_1_coef2_mask                                     (0x0FFF0000)
#define  SCALEUP_COEF_TABLE_CTL_1_coef3_mask                                     (0x00000FFF)
#define  SCALEUP_COEF_TABLE_CTL_1_coef2(data)                                    (0x0FFF0000&((data)<<16))
#define  SCALEUP_COEF_TABLE_CTL_1_coef3(data)                                    (0x00000FFF&(data))
#define  SCALEUP_COEF_TABLE_CTL_1_get_coef2(data)                                ((0x0FFF0000&(data))>>16)
#define  SCALEUP_COEF_TABLE_CTL_1_get_coef3(data)                                (0x00000FFF&(data))

#define  SCALEUP_COEF_TABLE_CTL_2                                               0x180293A0
#define  SCALEUP_COEF_TABLE_CTL_2_reg_addr                                       "0xB80293A0"
#define  SCALEUP_COEF_TABLE_CTL_2_reg                                            0xB80293A0
#define  SCALEUP_COEF_TABLE_CTL_2_inst_addr                                      "0x0048"
#define  set_SCALEUP_COEF_TABLE_CTL_2_reg(data)                                  (*((volatile unsigned int*)SCALEUP_COEF_TABLE_CTL_2_reg)=data)
#define  get_SCALEUP_COEF_TABLE_CTL_2_reg                                        (*((volatile unsigned int*)SCALEUP_COEF_TABLE_CTL_2_reg))
#define  SCALEUP_COEF_TABLE_CTL_2_coef4_shift                                    (16)
#define  SCALEUP_COEF_TABLE_CTL_2_coef5_shift                                    (0)
#define  SCALEUP_COEF_TABLE_CTL_2_coef4_mask                                     (0x0FFF0000)
#define  SCALEUP_COEF_TABLE_CTL_2_coef5_mask                                     (0x00000FFF)
#define  SCALEUP_COEF_TABLE_CTL_2_coef4(data)                                    (0x0FFF0000&((data)<<16))
#define  SCALEUP_COEF_TABLE_CTL_2_coef5(data)                                    (0x00000FFF&(data))
#define  SCALEUP_COEF_TABLE_CTL_2_get_coef4(data)                                ((0x0FFF0000&(data))>>16)
#define  SCALEUP_COEF_TABLE_CTL_2_get_coef5(data)                                (0x00000FFF&(data))

#define  SCALEUP_COEF_TABLE_CTL_3                                               0x180293A4
#define  SCALEUP_COEF_TABLE_CTL_3_reg_addr                                       "0xB80293A4"
#define  SCALEUP_COEF_TABLE_CTL_3_reg                                            0xB80293A4
#define  SCALEUP_COEF_TABLE_CTL_3_inst_addr                                      "0x0049"
#define  set_SCALEUP_COEF_TABLE_CTL_3_reg(data)                                  (*((volatile unsigned int*)SCALEUP_COEF_TABLE_CTL_3_reg)=data)
#define  get_SCALEUP_COEF_TABLE_CTL_3_reg                                        (*((volatile unsigned int*)SCALEUP_COEF_TABLE_CTL_3_reg))
#define  SCALEUP_COEF_TABLE_CTL_3_coef6_shift                                    (16)
#define  SCALEUP_COEF_TABLE_CTL_3_coef7_shift                                    (0)
#define  SCALEUP_COEF_TABLE_CTL_3_coef6_mask                                     (0x0FFF0000)
#define  SCALEUP_COEF_TABLE_CTL_3_coef7_mask                                     (0x00000FFF)
#define  SCALEUP_COEF_TABLE_CTL_3_coef6(data)                                    (0x0FFF0000&((data)<<16))
#define  SCALEUP_COEF_TABLE_CTL_3_coef7(data)                                    (0x00000FFF&(data))
#define  SCALEUP_COEF_TABLE_CTL_3_get_coef6(data)                                ((0x0FFF0000&(data))>>16)
#define  SCALEUP_COEF_TABLE_CTL_3_get_coef7(data)                                (0x00000FFF&(data))

#define  SCALEUP_COEF_TABLE_CTL_4                                               0x180293A8
#define  SCALEUP_COEF_TABLE_CTL_4_reg_addr                                       "0xB80293A8"
#define  SCALEUP_COEF_TABLE_CTL_4_reg                                            0xB80293A8
#define  SCALEUP_COEF_TABLE_CTL_4_inst_addr                                      "0x004A"
#define  set_SCALEUP_COEF_TABLE_CTL_4_reg(data)                                  (*((volatile unsigned int*)SCALEUP_COEF_TABLE_CTL_4_reg)=data)
#define  get_SCALEUP_COEF_TABLE_CTL_4_reg                                        (*((volatile unsigned int*)SCALEUP_COEF_TABLE_CTL_4_reg))
#define  SCALEUP_COEF_TABLE_CTL_4_coef8_shift                                    (16)
#define  SCALEUP_COEF_TABLE_CTL_4_coef9_shift                                    (0)
#define  SCALEUP_COEF_TABLE_CTL_4_coef8_mask                                     (0x0FFF0000)
#define  SCALEUP_COEF_TABLE_CTL_4_coef9_mask                                     (0x00000FFF)
#define  SCALEUP_COEF_TABLE_CTL_4_coef8(data)                                    (0x0FFF0000&((data)<<16))
#define  SCALEUP_COEF_TABLE_CTL_4_coef9(data)                                    (0x00000FFF&(data))
#define  SCALEUP_COEF_TABLE_CTL_4_get_coef8(data)                                ((0x0FFF0000&(data))>>16)
#define  SCALEUP_COEF_TABLE_CTL_4_get_coef9(data)                                (0x00000FFF&(data))

#define  SCALEUP_COEF_TABLE_CTL_5                                               0x180293AC
#define  SCALEUP_COEF_TABLE_CTL_5_reg_addr                                       "0xB80293AC"
#define  SCALEUP_COEF_TABLE_CTL_5_reg                                            0xB80293AC
#define  SCALEUP_COEF_TABLE_CTL_5_inst_addr                                      "0x004B"
#define  set_SCALEUP_COEF_TABLE_CTL_5_reg(data)                                  (*((volatile unsigned int*)SCALEUP_COEF_TABLE_CTL_5_reg)=data)
#define  get_SCALEUP_COEF_TABLE_CTL_5_reg                                        (*((volatile unsigned int*)SCALEUP_COEF_TABLE_CTL_5_reg))
#define  SCALEUP_COEF_TABLE_CTL_5_coef10_shift                                   (16)
#define  SCALEUP_COEF_TABLE_CTL_5_coef11_shift                                   (0)
#define  SCALEUP_COEF_TABLE_CTL_5_coef10_mask                                    (0x0FFF0000)
#define  SCALEUP_COEF_TABLE_CTL_5_coef11_mask                                    (0x00000FFF)
#define  SCALEUP_COEF_TABLE_CTL_5_coef10(data)                                   (0x0FFF0000&((data)<<16))
#define  SCALEUP_COEF_TABLE_CTL_5_coef11(data)                                   (0x00000FFF&(data))
#define  SCALEUP_COEF_TABLE_CTL_5_get_coef10(data)                               ((0x0FFF0000&(data))>>16)
#define  SCALEUP_COEF_TABLE_CTL_5_get_coef11(data)                               (0x00000FFF&(data))

#define  SCALEUP_COEF_TABLE_ERR                                                 0x180293B0
#define  SCALEUP_COEF_TABLE_ERR_reg_addr                                         "0xB80293B0"
#define  SCALEUP_COEF_TABLE_ERR_reg                                              0xB80293B0
#define  SCALEUP_COEF_TABLE_ERR_inst_addr                                        "0x004C"
#define  set_SCALEUP_COEF_TABLE_ERR_reg(data)                                    (*((volatile unsigned int*)SCALEUP_COEF_TABLE_ERR_reg)=data)
#define  get_SCALEUP_COEF_TABLE_ERR_reg                                          (*((volatile unsigned int*)SCALEUP_COEF_TABLE_ERR_reg))
#define  SCALEUP_COEF_TABLE_ERR_coef_acc_error_shift                             (0)
#define  SCALEUP_COEF_TABLE_ERR_coef_acc_error_mask                              (0x00000001)
#define  SCALEUP_COEF_TABLE_ERR_coef_acc_error(data)                             (0x00000001&(data))
#define  SCALEUP_COEF_TABLE_ERR_get_coef_acc_error(data)                         (0x00000001&(data))

#define  SCALEUP_DM_UZU_Bist_0                                                  0x18029180
#define  SCALEUP_DM_UZU_Bist_0_reg_addr                                          "0xB8029180"
#define  SCALEUP_DM_UZU_Bist_0_reg                                               0xB8029180
#define  SCALEUP_DM_UZU_Bist_0_inst_addr                                         "0x004D"
#define  set_SCALEUP_DM_UZU_Bist_0_reg(data)                                     (*((volatile unsigned int*)SCALEUP_DM_UZU_Bist_0_reg)=data)
#define  get_SCALEUP_DM_UZU_Bist_0_reg                                           (*((volatile unsigned int*)SCALEUP_DM_UZU_Bist_0_reg))
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_13_shift                                (13)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_12_shift                                (12)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_11_shift                                (11)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_10_shift                                (10)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_9_shift                                 (9)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_8_shift                                 (8)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_7_shift                                 (7)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_6_shift                                 (6)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_5_shift                                 (5)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_4_shift                                 (4)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_3_shift                                 (3)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_2_shift                                 (2)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_1_shift                                 (1)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_0_shift                                 (0)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_13_mask                                 (0x00002000)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_12_mask                                 (0x00001000)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_11_mask                                 (0x00000800)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_10_mask                                 (0x00000400)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_9_mask                                  (0x00000200)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_8_mask                                  (0x00000100)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_7_mask                                  (0x00000080)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_6_mask                                  (0x00000040)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_5_mask                                  (0x00000020)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_4_mask                                  (0x00000010)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_3_mask                                  (0x00000008)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_2_mask                                  (0x00000004)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_1_mask                                  (0x00000002)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_0_mask                                  (0x00000001)
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_13(data)                                (0x00002000&((data)<<13))
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_12(data)                                (0x00001000&((data)<<12))
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_11(data)                                (0x00000800&((data)<<11))
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_10(data)                                (0x00000400&((data)<<10))
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_9(data)                                 (0x00000200&((data)<<9))
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_8(data)                                 (0x00000100&((data)<<8))
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_7(data)                                 (0x00000080&((data)<<7))
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_6(data)                                 (0x00000040&((data)<<6))
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_5(data)                                 (0x00000020&((data)<<5))
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_4(data)                                 (0x00000010&((data)<<4))
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_3(data)                                 (0x00000008&((data)<<3))
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_2(data)                                 (0x00000004&((data)<<2))
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_1(data)                                 (0x00000002&((data)<<1))
#define  SCALEUP_DM_UZU_Bist_0_bist_fail_0(data)                                 (0x00000001&(data))
#define  SCALEUP_DM_UZU_Bist_0_get_bist_fail_13(data)                            ((0x00002000&(data))>>13)
#define  SCALEUP_DM_UZU_Bist_0_get_bist_fail_12(data)                            ((0x00001000&(data))>>12)
#define  SCALEUP_DM_UZU_Bist_0_get_bist_fail_11(data)                            ((0x00000800&(data))>>11)
#define  SCALEUP_DM_UZU_Bist_0_get_bist_fail_10(data)                            ((0x00000400&(data))>>10)
#define  SCALEUP_DM_UZU_Bist_0_get_bist_fail_9(data)                             ((0x00000200&(data))>>9)
#define  SCALEUP_DM_UZU_Bist_0_get_bist_fail_8(data)                             ((0x00000100&(data))>>8)
#define  SCALEUP_DM_UZU_Bist_0_get_bist_fail_7(data)                             ((0x00000080&(data))>>7)
#define  SCALEUP_DM_UZU_Bist_0_get_bist_fail_6(data)                             ((0x00000040&(data))>>6)
#define  SCALEUP_DM_UZU_Bist_0_get_bist_fail_5(data)                             ((0x00000020&(data))>>5)
#define  SCALEUP_DM_UZU_Bist_0_get_bist_fail_4(data)                             ((0x00000010&(data))>>4)
#define  SCALEUP_DM_UZU_Bist_0_get_bist_fail_3(data)                             ((0x00000008&(data))>>3)
#define  SCALEUP_DM_UZU_Bist_0_get_bist_fail_2(data)                             ((0x00000004&(data))>>2)
#define  SCALEUP_DM_UZU_Bist_0_get_bist_fail_1(data)                             ((0x00000002&(data))>>1)
#define  SCALEUP_DM_UZU_Bist_0_get_bist_fail_0(data)                             (0x00000001&(data))

#define  SCALEUP_DM_UZU_Bist_1                                                  0x18029184
#define  SCALEUP_DM_UZU_Bist_1_reg_addr                                          "0xB8029184"
#define  SCALEUP_DM_UZU_Bist_1_reg                                               0xB8029184
#define  SCALEUP_DM_UZU_Bist_1_inst_addr                                         "0x004E"
#define  set_SCALEUP_DM_UZU_Bist_1_reg(data)                                     (*((volatile unsigned int*)SCALEUP_DM_UZU_Bist_1_reg)=data)
#define  get_SCALEUP_DM_UZU_Bist_1_reg                                           (*((volatile unsigned int*)SCALEUP_DM_UZU_Bist_1_reg))
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_13_shift                            (13)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_12_shift                            (12)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_11_shift                            (11)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_10_shift                            (10)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_9_shift                             (9)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_8_shift                             (8)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_7_shift                             (7)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_6_shift                             (6)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_5_shift                             (5)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_4_shift                             (4)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_3_shift                             (3)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_2_shift                             (2)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_1_shift                             (1)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_0_shift                             (0)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_13_mask                             (0x00002000)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_12_mask                             (0x00001000)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_11_mask                             (0x00000800)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_10_mask                             (0x00000400)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_9_mask                              (0x00000200)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_8_mask                              (0x00000100)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_7_mask                              (0x00000080)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_6_mask                              (0x00000040)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_5_mask                              (0x00000020)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_4_mask                              (0x00000010)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_3_mask                              (0x00000008)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_2_mask                              (0x00000004)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_1_mask                              (0x00000002)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_0_mask                              (0x00000001)
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_13(data)                            (0x00002000&((data)<<13))
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_12(data)                            (0x00001000&((data)<<12))
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_11(data)                            (0x00000800&((data)<<11))
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_10(data)                            (0x00000400&((data)<<10))
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_9(data)                             (0x00000200&((data)<<9))
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_8(data)                             (0x00000100&((data)<<8))
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_7(data)                             (0x00000080&((data)<<7))
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_6(data)                             (0x00000040&((data)<<6))
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_5(data)                             (0x00000020&((data)<<5))
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_4(data)                             (0x00000010&((data)<<4))
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_3(data)                             (0x00000008&((data)<<3))
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_2(data)                             (0x00000004&((data)<<2))
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_1(data)                             (0x00000002&((data)<<1))
#define  SCALEUP_DM_UZU_Bist_1_drf_bist_fail_0(data)                             (0x00000001&(data))
#define  SCALEUP_DM_UZU_Bist_1_get_drf_bist_fail_13(data)                        ((0x00002000&(data))>>13)
#define  SCALEUP_DM_UZU_Bist_1_get_drf_bist_fail_12(data)                        ((0x00001000&(data))>>12)
#define  SCALEUP_DM_UZU_Bist_1_get_drf_bist_fail_11(data)                        ((0x00000800&(data))>>11)
#define  SCALEUP_DM_UZU_Bist_1_get_drf_bist_fail_10(data)                        ((0x00000400&(data))>>10)
#define  SCALEUP_DM_UZU_Bist_1_get_drf_bist_fail_9(data)                         ((0x00000200&(data))>>9)
#define  SCALEUP_DM_UZU_Bist_1_get_drf_bist_fail_8(data)                         ((0x00000100&(data))>>8)
#define  SCALEUP_DM_UZU_Bist_1_get_drf_bist_fail_7(data)                         ((0x00000080&(data))>>7)
#define  SCALEUP_DM_UZU_Bist_1_get_drf_bist_fail_6(data)                         ((0x00000040&(data))>>6)
#define  SCALEUP_DM_UZU_Bist_1_get_drf_bist_fail_5(data)                         ((0x00000020&(data))>>5)
#define  SCALEUP_DM_UZU_Bist_1_get_drf_bist_fail_4(data)                         ((0x00000010&(data))>>4)
#define  SCALEUP_DM_UZU_Bist_1_get_drf_bist_fail_3(data)                         ((0x00000008&(data))>>3)
#define  SCALEUP_DM_UZU_Bist_1_get_drf_bist_fail_2(data)                         ((0x00000004&(data))>>2)
#define  SCALEUP_DM_UZU_Bist_1_get_drf_bist_fail_1(data)                         ((0x00000002&(data))>>1)
#define  SCALEUP_DM_UZU_Bist_1_get_drf_bist_fail_0(data)                         (0x00000001&(data))

#define  SCALEUP_DM_UZU_Bist_3                                                  0x1802918C
#define  SCALEUP_DM_UZU_Bist_3_reg_addr                                          "0xB802918C"
#define  SCALEUP_DM_UZU_Bist_3_reg                                               0xB802918C
#define  SCALEUP_DM_UZU_Bist_3_inst_addr                                         "0x004F"
#define  set_SCALEUP_DM_UZU_Bist_3_reg(data)                                     (*((volatile unsigned int*)SCALEUP_DM_UZU_Bist_3_reg)=data)
#define  get_SCALEUP_DM_UZU_Bist_3_reg                                           (*((volatile unsigned int*)SCALEUP_DM_UZU_Bist_3_reg))
#define  SCALEUP_DM_UZU_Bist_3_rme_13_shift                                      (13)
#define  SCALEUP_DM_UZU_Bist_3_rme_12_shift                                      (12)
#define  SCALEUP_DM_UZU_Bist_3_rme_11_shift                                      (11)
#define  SCALEUP_DM_UZU_Bist_3_rme_10_shift                                      (10)
#define  SCALEUP_DM_UZU_Bist_3_rme_9_shift                                       (9)
#define  SCALEUP_DM_UZU_Bist_3_rme_8_shift                                       (8)
#define  SCALEUP_DM_UZU_Bist_3_rme_7_shift                                       (7)
#define  SCALEUP_DM_UZU_Bist_3_rme_6_shift                                       (6)
#define  SCALEUP_DM_UZU_Bist_3_rme_5_shift                                       (5)
#define  SCALEUP_DM_UZU_Bist_3_rme_4_shift                                       (4)
#define  SCALEUP_DM_UZU_Bist_3_rme_3_shift                                       (3)
#define  SCALEUP_DM_UZU_Bist_3_rme_2_shift                                       (2)
#define  SCALEUP_DM_UZU_Bist_3_rme_1_shift                                       (1)
#define  SCALEUP_DM_UZU_Bist_3_rme_0_shift                                       (0)
#define  SCALEUP_DM_UZU_Bist_3_rme_13_mask                                       (0x00002000)
#define  SCALEUP_DM_UZU_Bist_3_rme_12_mask                                       (0x00001000)
#define  SCALEUP_DM_UZU_Bist_3_rme_11_mask                                       (0x00000800)
#define  SCALEUP_DM_UZU_Bist_3_rme_10_mask                                       (0x00000400)
#define  SCALEUP_DM_UZU_Bist_3_rme_9_mask                                        (0x00000200)
#define  SCALEUP_DM_UZU_Bist_3_rme_8_mask                                        (0x00000100)
#define  SCALEUP_DM_UZU_Bist_3_rme_7_mask                                        (0x00000080)
#define  SCALEUP_DM_UZU_Bist_3_rme_6_mask                                        (0x00000040)
#define  SCALEUP_DM_UZU_Bist_3_rme_5_mask                                        (0x00000020)
#define  SCALEUP_DM_UZU_Bist_3_rme_4_mask                                        (0x00000010)
#define  SCALEUP_DM_UZU_Bist_3_rme_3_mask                                        (0x00000008)
#define  SCALEUP_DM_UZU_Bist_3_rme_2_mask                                        (0x00000004)
#define  SCALEUP_DM_UZU_Bist_3_rme_1_mask                                        (0x00000002)
#define  SCALEUP_DM_UZU_Bist_3_rme_0_mask                                        (0x00000001)
#define  SCALEUP_DM_UZU_Bist_3_rme_13(data)                                      (0x00002000&((data)<<13))
#define  SCALEUP_DM_UZU_Bist_3_rme_12(data)                                      (0x00001000&((data)<<12))
#define  SCALEUP_DM_UZU_Bist_3_rme_11(data)                                      (0x00000800&((data)<<11))
#define  SCALEUP_DM_UZU_Bist_3_rme_10(data)                                      (0x00000400&((data)<<10))
#define  SCALEUP_DM_UZU_Bist_3_rme_9(data)                                       (0x00000200&((data)<<9))
#define  SCALEUP_DM_UZU_Bist_3_rme_8(data)                                       (0x00000100&((data)<<8))
#define  SCALEUP_DM_UZU_Bist_3_rme_7(data)                                       (0x00000080&((data)<<7))
#define  SCALEUP_DM_UZU_Bist_3_rme_6(data)                                       (0x00000040&((data)<<6))
#define  SCALEUP_DM_UZU_Bist_3_rme_5(data)                                       (0x00000020&((data)<<5))
#define  SCALEUP_DM_UZU_Bist_3_rme_4(data)                                       (0x00000010&((data)<<4))
#define  SCALEUP_DM_UZU_Bist_3_rme_3(data)                                       (0x00000008&((data)<<3))
#define  SCALEUP_DM_UZU_Bist_3_rme_2(data)                                       (0x00000004&((data)<<2))
#define  SCALEUP_DM_UZU_Bist_3_rme_1(data)                                       (0x00000002&((data)<<1))
#define  SCALEUP_DM_UZU_Bist_3_rme_0(data)                                       (0x00000001&(data))
#define  SCALEUP_DM_UZU_Bist_3_get_rme_13(data)                                  ((0x00002000&(data))>>13)
#define  SCALEUP_DM_UZU_Bist_3_get_rme_12(data)                                  ((0x00001000&(data))>>12)
#define  SCALEUP_DM_UZU_Bist_3_get_rme_11(data)                                  ((0x00000800&(data))>>11)
#define  SCALEUP_DM_UZU_Bist_3_get_rme_10(data)                                  ((0x00000400&(data))>>10)
#define  SCALEUP_DM_UZU_Bist_3_get_rme_9(data)                                   ((0x00000200&(data))>>9)
#define  SCALEUP_DM_UZU_Bist_3_get_rme_8(data)                                   ((0x00000100&(data))>>8)
#define  SCALEUP_DM_UZU_Bist_3_get_rme_7(data)                                   ((0x00000080&(data))>>7)
#define  SCALEUP_DM_UZU_Bist_3_get_rme_6(data)                                   ((0x00000040&(data))>>6)
#define  SCALEUP_DM_UZU_Bist_3_get_rme_5(data)                                   ((0x00000020&(data))>>5)
#define  SCALEUP_DM_UZU_Bist_3_get_rme_4(data)                                   ((0x00000010&(data))>>4)
#define  SCALEUP_DM_UZU_Bist_3_get_rme_3(data)                                   ((0x00000008&(data))>>3)
#define  SCALEUP_DM_UZU_Bist_3_get_rme_2(data)                                   ((0x00000004&(data))>>2)
#define  SCALEUP_DM_UZU_Bist_3_get_rme_1(data)                                   ((0x00000002&(data))>>1)
#define  SCALEUP_DM_UZU_Bist_3_get_rme_0(data)                                   (0x00000001&(data))

#define  SCALEUP_DM_UZU_Bist_4                                                  0x18029190
#define  SCALEUP_DM_UZU_Bist_4_reg_addr                                          "0xB8029190"
#define  SCALEUP_DM_UZU_Bist_4_reg                                               0xB8029190
#define  SCALEUP_DM_UZU_Bist_4_inst_addr                                         "0x0050"
#define  set_SCALEUP_DM_UZU_Bist_4_reg(data)                                     (*((volatile unsigned int*)SCALEUP_DM_UZU_Bist_4_reg)=data)
#define  get_SCALEUP_DM_UZU_Bist_4_reg                                           (*((volatile unsigned int*)SCALEUP_DM_UZU_Bist_4_reg))
#define  SCALEUP_DM_UZU_Bist_4_rm_7_shift                                        (28)
#define  SCALEUP_DM_UZU_Bist_4_rm_6_shift                                        (24)
#define  SCALEUP_DM_UZU_Bist_4_rm_5_shift                                        (20)
#define  SCALEUP_DM_UZU_Bist_4_rm_4_shift                                        (16)
#define  SCALEUP_DM_UZU_Bist_4_rm_3_shift                                        (12)
#define  SCALEUP_DM_UZU_Bist_4_rm_2_shift                                        (8)
#define  SCALEUP_DM_UZU_Bist_4_rm_1_shift                                        (4)
#define  SCALEUP_DM_UZU_Bist_4_rm_0_shift                                        (0)
#define  SCALEUP_DM_UZU_Bist_4_rm_7_mask                                         (0xF0000000)
#define  SCALEUP_DM_UZU_Bist_4_rm_6_mask                                         (0x0F000000)
#define  SCALEUP_DM_UZU_Bist_4_rm_5_mask                                         (0x00F00000)
#define  SCALEUP_DM_UZU_Bist_4_rm_4_mask                                         (0x000F0000)
#define  SCALEUP_DM_UZU_Bist_4_rm_3_mask                                         (0x0000F000)
#define  SCALEUP_DM_UZU_Bist_4_rm_2_mask                                         (0x00000F00)
#define  SCALEUP_DM_UZU_Bist_4_rm_1_mask                                         (0x000000F0)
#define  SCALEUP_DM_UZU_Bist_4_rm_0_mask                                         (0x0000000F)
#define  SCALEUP_DM_UZU_Bist_4_rm_7(data)                                        (0xF0000000&((data)<<28))
#define  SCALEUP_DM_UZU_Bist_4_rm_6(data)                                        (0x0F000000&((data)<<24))
#define  SCALEUP_DM_UZU_Bist_4_rm_5(data)                                        (0x00F00000&((data)<<20))
#define  SCALEUP_DM_UZU_Bist_4_rm_4(data)                                        (0x000F0000&((data)<<16))
#define  SCALEUP_DM_UZU_Bist_4_rm_3(data)                                        (0x0000F000&((data)<<12))
#define  SCALEUP_DM_UZU_Bist_4_rm_2(data)                                        (0x00000F00&((data)<<8))
#define  SCALEUP_DM_UZU_Bist_4_rm_1(data)                                        (0x000000F0&((data)<<4))
#define  SCALEUP_DM_UZU_Bist_4_rm_0(data)                                        (0x0000000F&(data))
#define  SCALEUP_DM_UZU_Bist_4_get_rm_7(data)                                    ((0xF0000000&(data))>>28)
#define  SCALEUP_DM_UZU_Bist_4_get_rm_6(data)                                    ((0x0F000000&(data))>>24)
#define  SCALEUP_DM_UZU_Bist_4_get_rm_5(data)                                    ((0x00F00000&(data))>>20)
#define  SCALEUP_DM_UZU_Bist_4_get_rm_4(data)                                    ((0x000F0000&(data))>>16)
#define  SCALEUP_DM_UZU_Bist_4_get_rm_3(data)                                    ((0x0000F000&(data))>>12)
#define  SCALEUP_DM_UZU_Bist_4_get_rm_2(data)                                    ((0x00000F00&(data))>>8)
#define  SCALEUP_DM_UZU_Bist_4_get_rm_1(data)                                    ((0x000000F0&(data))>>4)
#define  SCALEUP_DM_UZU_Bist_4_get_rm_0(data)                                    (0x0000000F&(data))

#define  SCALEUP_DM_UZU_Bist_5                                                  0x18029194
#define  SCALEUP_DM_UZU_Bist_5_reg_addr                                          "0xB8029194"
#define  SCALEUP_DM_UZU_Bist_5_reg                                               0xB8029194
#define  SCALEUP_DM_UZU_Bist_5_inst_addr                                         "0x0051"
#define  set_SCALEUP_DM_UZU_Bist_5_reg(data)                                     (*((volatile unsigned int*)SCALEUP_DM_UZU_Bist_5_reg)=data)
#define  get_SCALEUP_DM_UZU_Bist_5_reg                                           (*((volatile unsigned int*)SCALEUP_DM_UZU_Bist_5_reg))
#define  SCALEUP_DM_UZU_Bist_5_ls_0_shift                                        (31)
#define  SCALEUP_DM_UZU_Bist_5_rm_13_shift                                       (20)
#define  SCALEUP_DM_UZU_Bist_5_rm_12_shift                                       (16)
#define  SCALEUP_DM_UZU_Bist_5_rm_11_shift                                       (12)
#define  SCALEUP_DM_UZU_Bist_5_rm_10_shift                                       (8)
#define  SCALEUP_DM_UZU_Bist_5_rm_9_shift                                        (4)
#define  SCALEUP_DM_UZU_Bist_5_rm_8_shift                                        (0)
#define  SCALEUP_DM_UZU_Bist_5_ls_0_mask                                         (0x80000000)
#define  SCALEUP_DM_UZU_Bist_5_rm_13_mask                                        (0x00F00000)
#define  SCALEUP_DM_UZU_Bist_5_rm_12_mask                                        (0x000F0000)
#define  SCALEUP_DM_UZU_Bist_5_rm_11_mask                                        (0x0000F000)
#define  SCALEUP_DM_UZU_Bist_5_rm_10_mask                                        (0x00000F00)
#define  SCALEUP_DM_UZU_Bist_5_rm_9_mask                                         (0x000000F0)
#define  SCALEUP_DM_UZU_Bist_5_rm_8_mask                                         (0x0000000F)
#define  SCALEUP_DM_UZU_Bist_5_ls_0(data)                                        (0x80000000&((data)<<31))
#define  SCALEUP_DM_UZU_Bist_5_rm_13(data)                                       (0x00F00000&((data)<<20))
#define  SCALEUP_DM_UZU_Bist_5_rm_12(data)                                       (0x000F0000&((data)<<16))
#define  SCALEUP_DM_UZU_Bist_5_rm_11(data)                                       (0x0000F000&((data)<<12))
#define  SCALEUP_DM_UZU_Bist_5_rm_10(data)                                       (0x00000F00&((data)<<8))
#define  SCALEUP_DM_UZU_Bist_5_rm_9(data)                                        (0x000000F0&((data)<<4))
#define  SCALEUP_DM_UZU_Bist_5_rm_8(data)                                        (0x0000000F&(data))
#define  SCALEUP_DM_UZU_Bist_5_get_ls_0(data)                                    ((0x80000000&(data))>>31)
#define  SCALEUP_DM_UZU_Bist_5_get_rm_13(data)                                   ((0x00F00000&(data))>>20)
#define  SCALEUP_DM_UZU_Bist_5_get_rm_12(data)                                   ((0x000F0000&(data))>>16)
#define  SCALEUP_DM_UZU_Bist_5_get_rm_11(data)                                   ((0x0000F000&(data))>>12)
#define  SCALEUP_DM_UZU_Bist_5_get_rm_10(data)                                   ((0x00000F00&(data))>>8)
#define  SCALEUP_DM_UZU_Bist_5_get_rm_9(data)                                    ((0x000000F0&(data))>>4)
#define  SCALEUP_DM_UZU_Bist_5_get_rm_8(data)                                    (0x0000000F&(data))

#define  SCALEUP_DM_UZU_Bist_11                                                 0x180291AC
#define  SCALEUP_DM_UZU_Bist_11_reg_addr                                         "0xB80291AC"
#define  SCALEUP_DM_UZU_Bist_11_reg                                              0xB80291AC
#define  SCALEUP_DM_UZU_Bist_11_inst_addr                                        "0x0052"
#define  set_SCALEUP_DM_UZU_Bist_11_reg(data)                                    (*((volatile unsigned int*)SCALEUP_DM_UZU_Bist_11_reg)=data)
#define  get_SCALEUP_DM_UZU_Bist_11_reg                                          (*((volatile unsigned int*)SCALEUP_DM_UZU_Bist_11_reg))
#define  SCALEUP_DM_UZU_Bist_11_testrwm_6_shift                                  (6)
#define  SCALEUP_DM_UZU_Bist_11_testrwm_5_shift                                  (5)
#define  SCALEUP_DM_UZU_Bist_11_testrwm_4_shift                                  (4)
#define  SCALEUP_DM_UZU_Bist_11_testrwm_3_shift                                  (3)
#define  SCALEUP_DM_UZU_Bist_11_testrwm_2_shift                                  (2)
#define  SCALEUP_DM_UZU_Bist_11_testrwm_1_shift                                  (1)
#define  SCALEUP_DM_UZU_Bist_11_testrwm_0_shift                                  (0)
#define  SCALEUP_DM_UZU_Bist_11_testrwm_6_mask                                   (0x00000040)
#define  SCALEUP_DM_UZU_Bist_11_testrwm_5_mask                                   (0x00000020)
#define  SCALEUP_DM_UZU_Bist_11_testrwm_4_mask                                   (0x00000010)
#define  SCALEUP_DM_UZU_Bist_11_testrwm_3_mask                                   (0x00000008)
#define  SCALEUP_DM_UZU_Bist_11_testrwm_2_mask                                   (0x00000004)
#define  SCALEUP_DM_UZU_Bist_11_testrwm_1_mask                                   (0x00000002)
#define  SCALEUP_DM_UZU_Bist_11_testrwm_0_mask                                   (0x00000001)
#define  SCALEUP_DM_UZU_Bist_11_testrwm_6(data)                                  (0x00000040&((data)<<6))
#define  SCALEUP_DM_UZU_Bist_11_testrwm_5(data)                                  (0x00000020&((data)<<5))
#define  SCALEUP_DM_UZU_Bist_11_testrwm_4(data)                                  (0x00000010&((data)<<4))
#define  SCALEUP_DM_UZU_Bist_11_testrwm_3(data)                                  (0x00000008&((data)<<3))
#define  SCALEUP_DM_UZU_Bist_11_testrwm_2(data)                                  (0x00000004&((data)<<2))
#define  SCALEUP_DM_UZU_Bist_11_testrwm_1(data)                                  (0x00000002&((data)<<1))
#define  SCALEUP_DM_UZU_Bist_11_testrwm_0(data)                                  (0x00000001&(data))
#define  SCALEUP_DM_UZU_Bist_11_get_testrwm_6(data)                              ((0x00000040&(data))>>6)
#define  SCALEUP_DM_UZU_Bist_11_get_testrwm_5(data)                              ((0x00000020&(data))>>5)
#define  SCALEUP_DM_UZU_Bist_11_get_testrwm_4(data)                              ((0x00000010&(data))>>4)
#define  SCALEUP_DM_UZU_Bist_11_get_testrwm_3(data)                              ((0x00000008&(data))>>3)
#define  SCALEUP_DM_UZU_Bist_11_get_testrwm_2(data)                              ((0x00000004&(data))>>2)
#define  SCALEUP_DM_UZU_Bist_11_get_testrwm_1(data)                              ((0x00000002&(data))>>1)
#define  SCALEUP_DM_UZU_Bist_11_get_testrwm_0(data)                              (0x00000001&(data))

#define  SCALEUP_DM_UZU_Bist_13                                                 0x180291B4
#define  SCALEUP_DM_UZU_Bist_13_reg_addr                                         "0xB80291B4"
#define  SCALEUP_DM_UZU_Bist_13_reg                                              0xB80291B4
#define  SCALEUP_DM_UZU_Bist_13_inst_addr                                        "0x0053"
#define  set_SCALEUP_DM_UZU_Bist_13_reg(data)                                    (*((volatile unsigned int*)SCALEUP_DM_UZU_Bist_13_reg)=data)
#define  get_SCALEUP_DM_UZU_Bist_13_reg                                          (*((volatile unsigned int*)SCALEUP_DM_UZU_Bist_13_reg))
#define  SCALEUP_DM_UZU_Bist_13_test1_13_shift                                   (13)
#define  SCALEUP_DM_UZU_Bist_13_test1_12_shift                                   (12)
#define  SCALEUP_DM_UZU_Bist_13_test1_11_shift                                   (11)
#define  SCALEUP_DM_UZU_Bist_13_test1_10_shift                                   (10)
#define  SCALEUP_DM_UZU_Bist_13_test1_9_shift                                    (9)
#define  SCALEUP_DM_UZU_Bist_13_test1_8_shift                                    (8)
#define  SCALEUP_DM_UZU_Bist_13_test1_7_shift                                    (7)
#define  SCALEUP_DM_UZU_Bist_13_test1_6_shift                                    (6)
#define  SCALEUP_DM_UZU_Bist_13_test1_5_shift                                    (5)
#define  SCALEUP_DM_UZU_Bist_13_test1_4_shift                                    (4)
#define  SCALEUP_DM_UZU_Bist_13_test1_3_shift                                    (3)
#define  SCALEUP_DM_UZU_Bist_13_test1_2_shift                                    (2)
#define  SCALEUP_DM_UZU_Bist_13_test1_1_shift                                    (1)
#define  SCALEUP_DM_UZU_Bist_13_test1_0_shift                                    (0)
#define  SCALEUP_DM_UZU_Bist_13_test1_13_mask                                    (0x00002000)
#define  SCALEUP_DM_UZU_Bist_13_test1_12_mask                                    (0x00001000)
#define  SCALEUP_DM_UZU_Bist_13_test1_11_mask                                    (0x00000800)
#define  SCALEUP_DM_UZU_Bist_13_test1_10_mask                                    (0x00000400)
#define  SCALEUP_DM_UZU_Bist_13_test1_9_mask                                     (0x00000200)
#define  SCALEUP_DM_UZU_Bist_13_test1_8_mask                                     (0x00000100)
#define  SCALEUP_DM_UZU_Bist_13_test1_7_mask                                     (0x00000080)
#define  SCALEUP_DM_UZU_Bist_13_test1_6_mask                                     (0x00000040)
#define  SCALEUP_DM_UZU_Bist_13_test1_5_mask                                     (0x00000020)
#define  SCALEUP_DM_UZU_Bist_13_test1_4_mask                                     (0x00000010)
#define  SCALEUP_DM_UZU_Bist_13_test1_3_mask                                     (0x00000008)
#define  SCALEUP_DM_UZU_Bist_13_test1_2_mask                                     (0x00000004)
#define  SCALEUP_DM_UZU_Bist_13_test1_1_mask                                     (0x00000002)
#define  SCALEUP_DM_UZU_Bist_13_test1_0_mask                                     (0x00000001)
#define  SCALEUP_DM_UZU_Bist_13_test1_13(data)                                   (0x00002000&((data)<<13))
#define  SCALEUP_DM_UZU_Bist_13_test1_12(data)                                   (0x00001000&((data)<<12))
#define  SCALEUP_DM_UZU_Bist_13_test1_11(data)                                   (0x00000800&((data)<<11))
#define  SCALEUP_DM_UZU_Bist_13_test1_10(data)                                   (0x00000400&((data)<<10))
#define  SCALEUP_DM_UZU_Bist_13_test1_9(data)                                    (0x00000200&((data)<<9))
#define  SCALEUP_DM_UZU_Bist_13_test1_8(data)                                    (0x00000100&((data)<<8))
#define  SCALEUP_DM_UZU_Bist_13_test1_7(data)                                    (0x00000080&((data)<<7))
#define  SCALEUP_DM_UZU_Bist_13_test1_6(data)                                    (0x00000040&((data)<<6))
#define  SCALEUP_DM_UZU_Bist_13_test1_5(data)                                    (0x00000020&((data)<<5))
#define  SCALEUP_DM_UZU_Bist_13_test1_4(data)                                    (0x00000010&((data)<<4))
#define  SCALEUP_DM_UZU_Bist_13_test1_3(data)                                    (0x00000008&((data)<<3))
#define  SCALEUP_DM_UZU_Bist_13_test1_2(data)                                    (0x00000004&((data)<<2))
#define  SCALEUP_DM_UZU_Bist_13_test1_1(data)                                    (0x00000002&((data)<<1))
#define  SCALEUP_DM_UZU_Bist_13_test1_0(data)                                    (0x00000001&(data))
#define  SCALEUP_DM_UZU_Bist_13_get_test1_13(data)                               ((0x00002000&(data))>>13)
#define  SCALEUP_DM_UZU_Bist_13_get_test1_12(data)                               ((0x00001000&(data))>>12)
#define  SCALEUP_DM_UZU_Bist_13_get_test1_11(data)                               ((0x00000800&(data))>>11)
#define  SCALEUP_DM_UZU_Bist_13_get_test1_10(data)                               ((0x00000400&(data))>>10)
#define  SCALEUP_DM_UZU_Bist_13_get_test1_9(data)                                ((0x00000200&(data))>>9)
#define  SCALEUP_DM_UZU_Bist_13_get_test1_8(data)                                ((0x00000100&(data))>>8)
#define  SCALEUP_DM_UZU_Bist_13_get_test1_7(data)                                ((0x00000080&(data))>>7)
#define  SCALEUP_DM_UZU_Bist_13_get_test1_6(data)                                ((0x00000040&(data))>>6)
#define  SCALEUP_DM_UZU_Bist_13_get_test1_5(data)                                ((0x00000020&(data))>>5)
#define  SCALEUP_DM_UZU_Bist_13_get_test1_4(data)                                ((0x00000010&(data))>>4)
#define  SCALEUP_DM_UZU_Bist_13_get_test1_3(data)                                ((0x00000008&(data))>>3)
#define  SCALEUP_DM_UZU_Bist_13_get_test1_2(data)                                ((0x00000004&(data))>>2)
#define  SCALEUP_DM_UZU_Bist_13_get_test1_1(data)                                ((0x00000002&(data))>>1)
#define  SCALEUP_DM_UZU_Bist_13_get_test1_0(data)                                (0x00000001&(data))

#define  SCALEUP_DS_UZU_Ctrl                                                    0x18029200
#define  SCALEUP_DS_UZU_Ctrl_reg_addr                                            "0xB8029200"
#define  SCALEUP_DS_UZU_Ctrl_reg                                                 0xB8029200
#define  SCALEUP_DS_UZU_Ctrl_inst_addr                                           "0x0054"
#define  set_SCALEUP_DS_UZU_Ctrl_reg(data)                                       (*((volatile unsigned int*)SCALEUP_DS_UZU_Ctrl_reg)=data)
#define  get_SCALEUP_DS_UZU_Ctrl_reg                                             (*((volatile unsigned int*)SCALEUP_DS_UZU_Ctrl_reg))
#define  SCALEUP_DS_UZU_Ctrl_wd_sub_buf_udf_en_shift                             (24)
#define  SCALEUP_DS_UZU_Ctrl_irq_sub_buf_udf_en_shift                            (23)
#define  SCALEUP_DS_UZU_Ctrl_v_table_sel_shift                                   (9)
#define  SCALEUP_DS_UZU_Ctrl_h_table_sel_shift                                   (8)
#define  SCALEUP_DS_UZU_Ctrl_ver_mode_sel_shift                                  (7)
#define  SCALEUP_DS_UZU_Ctrl_in_fmt_dup_shift                                    (6)
#define  SCALEUP_DS_UZU_Ctrl_video_comp_en_shift                                 (5)
#define  SCALEUP_DS_UZU_Ctrl_odd_inv_shift                                       (4)
#define  SCALEUP_DS_UZU_Ctrl_in_fmt_conv_shift                                   (3)
#define  SCALEUP_DS_UZU_Ctrl_conv_type_shift                                     (2)
#define  SCALEUP_DS_UZU_Ctrl_v_zoom_en_shift                                     (1)
#define  SCALEUP_DS_UZU_Ctrl_h_zoom_en_shift                                     (0)
#define  SCALEUP_DS_UZU_Ctrl_wd_sub_buf_udf_en_mask                              (0x01000000)
#define  SCALEUP_DS_UZU_Ctrl_irq_sub_buf_udf_en_mask                             (0x00800000)
#define  SCALEUP_DS_UZU_Ctrl_v_table_sel_mask                                    (0x00000200)
#define  SCALEUP_DS_UZU_Ctrl_h_table_sel_mask                                    (0x00000100)
#define  SCALEUP_DS_UZU_Ctrl_ver_mode_sel_mask                                   (0x00000080)
#define  SCALEUP_DS_UZU_Ctrl_in_fmt_dup_mask                                     (0x00000040)
#define  SCALEUP_DS_UZU_Ctrl_video_comp_en_mask                                  (0x00000020)
#define  SCALEUP_DS_UZU_Ctrl_odd_inv_mask                                        (0x00000010)
#define  SCALEUP_DS_UZU_Ctrl_in_fmt_conv_mask                                    (0x00000008)
#define  SCALEUP_DS_UZU_Ctrl_conv_type_mask                                      (0x00000004)
#define  SCALEUP_DS_UZU_Ctrl_v_zoom_en_mask                                      (0x00000002)
#define  SCALEUP_DS_UZU_Ctrl_h_zoom_en_mask                                      (0x00000001)
#define  SCALEUP_DS_UZU_Ctrl_wd_sub_buf_udf_en(data)                             (0x01000000&((data)<<24))
#define  SCALEUP_DS_UZU_Ctrl_irq_sub_buf_udf_en(data)                            (0x00800000&((data)<<23))
#define  SCALEUP_DS_UZU_Ctrl_v_table_sel(data)                                   (0x00000200&((data)<<9))
#define  SCALEUP_DS_UZU_Ctrl_h_table_sel(data)                                   (0x00000100&((data)<<8))
#define  SCALEUP_DS_UZU_Ctrl_ver_mode_sel(data)                                  (0x00000080&((data)<<7))
#define  SCALEUP_DS_UZU_Ctrl_in_fmt_dup(data)                                    (0x00000040&((data)<<6))
#define  SCALEUP_DS_UZU_Ctrl_video_comp_en(data)                                 (0x00000020&((data)<<5))
#define  SCALEUP_DS_UZU_Ctrl_odd_inv(data)                                       (0x00000010&((data)<<4))
#define  SCALEUP_DS_UZU_Ctrl_in_fmt_conv(data)                                   (0x00000008&((data)<<3))
#define  SCALEUP_DS_UZU_Ctrl_conv_type(data)                                     (0x00000004&((data)<<2))
#define  SCALEUP_DS_UZU_Ctrl_v_zoom_en(data)                                     (0x00000002&((data)<<1))
#define  SCALEUP_DS_UZU_Ctrl_h_zoom_en(data)                                     (0x00000001&(data))
#define  SCALEUP_DS_UZU_Ctrl_get_wd_sub_buf_udf_en(data)                         ((0x01000000&(data))>>24)
#define  SCALEUP_DS_UZU_Ctrl_get_irq_sub_buf_udf_en(data)                        ((0x00800000&(data))>>23)
#define  SCALEUP_DS_UZU_Ctrl_get_v_table_sel(data)                               ((0x00000200&(data))>>9)
#define  SCALEUP_DS_UZU_Ctrl_get_h_table_sel(data)                               ((0x00000100&(data))>>8)
#define  SCALEUP_DS_UZU_Ctrl_get_ver_mode_sel(data)                              ((0x00000080&(data))>>7)
#define  SCALEUP_DS_UZU_Ctrl_get_in_fmt_dup(data)                                ((0x00000040&(data))>>6)
#define  SCALEUP_DS_UZU_Ctrl_get_video_comp_en(data)                             ((0x00000020&(data))>>5)
#define  SCALEUP_DS_UZU_Ctrl_get_odd_inv(data)                                   ((0x00000010&(data))>>4)
#define  SCALEUP_DS_UZU_Ctrl_get_in_fmt_conv(data)                               ((0x00000008&(data))>>3)
#define  SCALEUP_DS_UZU_Ctrl_get_conv_type(data)                                 ((0x00000004&(data))>>2)
#define  SCALEUP_DS_UZU_Ctrl_get_v_zoom_en(data)                                 ((0x00000002&(data))>>1)
#define  SCALEUP_DS_UZU_Ctrl_get_h_zoom_en(data)                                 (0x00000001&(data))

#define  SCALEUP_DS_UZU_Scale_Hor_Factor                                        0x18029204
#define  SCALEUP_DS_UZU_Scale_Hor_Factor_reg_addr                                "0xB8029204"
#define  SCALEUP_DS_UZU_Scale_Hor_Factor_reg                                     0xB8029204
#define  SCALEUP_DS_UZU_Scale_Hor_Factor_inst_addr                               "0x0055"
#define  set_SCALEUP_DS_UZU_Scale_Hor_Factor_reg(data)                           (*((volatile unsigned int*)SCALEUP_DS_UZU_Scale_Hor_Factor_reg)=data)
#define  get_SCALEUP_DS_UZU_Scale_Hor_Factor_reg                                 (*((volatile unsigned int*)SCALEUP_DS_UZU_Scale_Hor_Factor_reg))
#define  SCALEUP_DS_UZU_Scale_Hor_Factor_hor_factor_shift                        (0)
#define  SCALEUP_DS_UZU_Scale_Hor_Factor_hor_factor_mask                         (0x000FFFFF)
#define  SCALEUP_DS_UZU_Scale_Hor_Factor_hor_factor(data)                        (0x000FFFFF&(data))
#define  SCALEUP_DS_UZU_Scale_Hor_Factor_get_hor_factor(data)                    (0x000FFFFF&(data))

#define  SCALEUP_DS_UZU_Scale_Ver_Factor                                        0x18029208
#define  SCALEUP_DS_UZU_Scale_Ver_Factor_reg_addr                                "0xB8029208"
#define  SCALEUP_DS_UZU_Scale_Ver_Factor_reg                                     0xB8029208
#define  SCALEUP_DS_UZU_Scale_Ver_Factor_inst_addr                               "0x0056"
#define  set_SCALEUP_DS_UZU_Scale_Ver_Factor_reg(data)                           (*((volatile unsigned int*)SCALEUP_DS_UZU_Scale_Ver_Factor_reg)=data)
#define  get_SCALEUP_DS_UZU_Scale_Ver_Factor_reg                                 (*((volatile unsigned int*)SCALEUP_DS_UZU_Scale_Ver_Factor_reg))
#define  SCALEUP_DS_UZU_Scale_Ver_Factor_ver_factor_shift                        (0)
#define  SCALEUP_DS_UZU_Scale_Ver_Factor_ver_factor_mask                         (0x000FFFFF)
#define  SCALEUP_DS_UZU_Scale_Ver_Factor_ver_factor(data)                        (0x000FFFFF&(data))
#define  SCALEUP_DS_UZU_Scale_Ver_Factor_get_ver_factor(data)                    (0x000FFFFF&(data))

#define  SCALEUP_DS_UZU_Initial_Value                                           0x1802920C
#define  SCALEUP_DS_UZU_Initial_Value_reg_addr                                   "0xB802920C"
#define  SCALEUP_DS_UZU_Initial_Value_reg                                        0xB802920C
#define  SCALEUP_DS_UZU_Initial_Value_inst_addr                                  "0x0057"
#define  set_SCALEUP_DS_UZU_Initial_Value_reg(data)                              (*((volatile unsigned int*)SCALEUP_DS_UZU_Initial_Value_reg)=data)
#define  get_SCALEUP_DS_UZU_Initial_Value_reg                                    (*((volatile unsigned int*)SCALEUP_DS_UZU_Initial_Value_reg))
#define  SCALEUP_DS_UZU_Initial_Value_hor_ini_shift                              (8)
#define  SCALEUP_DS_UZU_Initial_Value_ver_ini_shift                              (0)
#define  SCALEUP_DS_UZU_Initial_Value_hor_ini_mask                               (0x0000FF00)
#define  SCALEUP_DS_UZU_Initial_Value_ver_ini_mask                               (0x000000FF)
#define  SCALEUP_DS_UZU_Initial_Value_hor_ini(data)                              (0x0000FF00&((data)<<8))
#define  SCALEUP_DS_UZU_Initial_Value_ver_ini(data)                              (0x000000FF&(data))
#define  SCALEUP_DS_UZU_Initial_Value_get_hor_ini(data)                          ((0x0000FF00&(data))>>8)
#define  SCALEUP_DS_UZU_Initial_Value_get_ver_ini(data)                          (0x000000FF&(data))

#define  SCALEUP_DS_UZU_Input_Size                                              0x18029210
#define  SCALEUP_DS_UZU_Input_Size_reg_addr                                      "0xB8029210"
#define  SCALEUP_DS_UZU_Input_Size_reg                                           0xB8029210
#define  SCALEUP_DS_UZU_Input_Size_inst_addr                                     "0x0058"
#define  set_SCALEUP_DS_UZU_Input_Size_reg(data)                                 (*((volatile unsigned int*)SCALEUP_DS_UZU_Input_Size_reg)=data)
#define  get_SCALEUP_DS_UZU_Input_Size_reg                                       (*((volatile unsigned int*)SCALEUP_DS_UZU_Input_Size_reg))
#define  SCALEUP_DS_UZU_Input_Size_hor_input_size_shift                          (16)
#define  SCALEUP_DS_UZU_Input_Size_ver_input_size_shift                          (0)
#define  SCALEUP_DS_UZU_Input_Size_hor_input_size_mask                           (0x1FFF0000)
#define  SCALEUP_DS_UZU_Input_Size_ver_input_size_mask                           (0x00000FFF)
#define  SCALEUP_DS_UZU_Input_Size_hor_input_size(data)                          (0x1FFF0000&((data)<<16))
#define  SCALEUP_DS_UZU_Input_Size_ver_input_size(data)                          (0x00000FFF&(data))
#define  SCALEUP_DS_UZU_Input_Size_get_hor_input_size(data)                      ((0x1FFF0000&(data))>>16)
#define  SCALEUP_DS_UZU_Input_Size_get_ver_input_size(data)                      (0x00000FFF&(data))

#define  SCALEUP_DS_MEM_CRC_CTRL                                                0x18029214
#define  SCALEUP_DS_MEM_CRC_CTRL_reg_addr                                        "0xB8029214"
#define  SCALEUP_DS_MEM_CRC_CTRL_reg                                             0xB8029214
#define  SCALEUP_DS_MEM_CRC_CTRL_inst_addr                                       "0x0059"
#define  set_SCALEUP_DS_MEM_CRC_CTRL_reg(data)                                   (*((volatile unsigned int*)SCALEUP_DS_MEM_CRC_CTRL_reg)=data)
#define  get_SCALEUP_DS_MEM_CRC_CTRL_reg                                         (*((volatile unsigned int*)SCALEUP_DS_MEM_CRC_CTRL_reg))
#define  SCALEUP_DS_MEM_CRC_CTRL_conti_shift                                     (1)
#define  SCALEUP_DS_MEM_CRC_CTRL_start_shift                                     (0)
#define  SCALEUP_DS_MEM_CRC_CTRL_conti_mask                                      (0x00000002)
#define  SCALEUP_DS_MEM_CRC_CTRL_start_mask                                      (0x00000001)
#define  SCALEUP_DS_MEM_CRC_CTRL_conti(data)                                     (0x00000002&((data)<<1))
#define  SCALEUP_DS_MEM_CRC_CTRL_start(data)                                     (0x00000001&(data))
#define  SCALEUP_DS_MEM_CRC_CTRL_get_conti(data)                                 ((0x00000002&(data))>>1)
#define  SCALEUP_DS_MEM_CRC_CTRL_get_start(data)                                 (0x00000001&(data))

#define  SCALEUP_DS_MEM_CRC_Result                                              0x18029218
#define  SCALEUP_DS_MEM_CRC_Result_reg_addr                                      "0xB8029218"
#define  SCALEUP_DS_MEM_CRC_Result_reg                                           0xB8029218
#define  SCALEUP_DS_MEM_CRC_Result_inst_addr                                     "0x005A"
#define  set_SCALEUP_DS_MEM_CRC_Result_reg(data)                                 (*((volatile unsigned int*)SCALEUP_DS_MEM_CRC_Result_reg)=data)
#define  get_SCALEUP_DS_MEM_CRC_Result_reg                                       (*((volatile unsigned int*)SCALEUP_DS_MEM_CRC_Result_reg))
#define  SCALEUP_DS_MEM_CRC_Result_mem_crc_shift                                 (0)
#define  SCALEUP_DS_MEM_CRC_Result_mem_crc_mask                                  (0xFFFFFFFF)
#define  SCALEUP_DS_MEM_CRC_Result_mem_crc(data)                                 (0xFFFFFFFF&(data))
#define  SCALEUP_DS_MEM_CRC_Result_get_mem_crc(data)                             (0xFFFFFFFF&(data))

#define  SCALEUP_DS_UZUSUB_H_PARTIAL_DROP                                       0x1802921C
#define  SCALEUP_DS_UZUSUB_H_PARTIAL_DROP_reg_addr                               "0xB802921C"
#define  SCALEUP_DS_UZUSUB_H_PARTIAL_DROP_reg                                    0xB802921C
#define  SCALEUP_DS_UZUSUB_H_PARTIAL_DROP_inst_addr                              "0x005B"
#define  set_SCALEUP_DS_UZUSUB_H_PARTIAL_DROP_reg(data)                          (*((volatile unsigned int*)SCALEUP_DS_UZUSUB_H_PARTIAL_DROP_reg)=data)
#define  get_SCALEUP_DS_UZUSUB_H_PARTIAL_DROP_reg                                (*((volatile unsigned int*)SCALEUP_DS_UZUSUB_H_PARTIAL_DROP_reg))
#define  SCALEUP_DS_UZUSUB_H_PARTIAL_DROP_hor_s_front_drop_shift                 (12)
#define  SCALEUP_DS_UZUSUB_H_PARTIAL_DROP_hor_s_back_drop_shift                  (0)
#define  SCALEUP_DS_UZUSUB_H_PARTIAL_DROP_hor_s_front_drop_mask                  (0x00FFF000)
#define  SCALEUP_DS_UZUSUB_H_PARTIAL_DROP_hor_s_back_drop_mask                   (0x00000FFF)
#define  SCALEUP_DS_UZUSUB_H_PARTIAL_DROP_hor_s_front_drop(data)                 (0x00FFF000&((data)<<12))
#define  SCALEUP_DS_UZUSUB_H_PARTIAL_DROP_hor_s_back_drop(data)                  (0x00000FFF&(data))
#define  SCALEUP_DS_UZUSUB_H_PARTIAL_DROP_get_hor_s_front_drop(data)             ((0x00FFF000&(data))>>12)
#define  SCALEUP_DS_UZUSUB_H_PARTIAL_DROP_get_hor_s_back_drop(data)              (0x00000FFF&(data))

#define  SCALEUP_DS_UZUSUB_V_PARTIAL_DROP                                       0x18029220
#define  SCALEUP_DS_UZUSUB_V_PARTIAL_DROP_reg_addr                               "0xB8029220"
#define  SCALEUP_DS_UZUSUB_V_PARTIAL_DROP_reg                                    0xB8029220
#define  SCALEUP_DS_UZUSUB_V_PARTIAL_DROP_inst_addr                              "0x005C"
#define  set_SCALEUP_DS_UZUSUB_V_PARTIAL_DROP_reg(data)                          (*((volatile unsigned int*)SCALEUP_DS_UZUSUB_V_PARTIAL_DROP_reg)=data)
#define  get_SCALEUP_DS_UZUSUB_V_PARTIAL_DROP_reg                                (*((volatile unsigned int*)SCALEUP_DS_UZUSUB_V_PARTIAL_DROP_reg))
#define  SCALEUP_DS_UZUSUB_V_PARTIAL_DROP_ver_s_front_drop_shift                 (16)
#define  SCALEUP_DS_UZUSUB_V_PARTIAL_DROP_ver_s_back_drop_shift                  (0)
#define  SCALEUP_DS_UZUSUB_V_PARTIAL_DROP_ver_s_front_drop_mask                  (0x07FF0000)
#define  SCALEUP_DS_UZUSUB_V_PARTIAL_DROP_ver_s_back_drop_mask                   (0x000007FF)
#define  SCALEUP_DS_UZUSUB_V_PARTIAL_DROP_ver_s_front_drop(data)                 (0x07FF0000&((data)<<16))
#define  SCALEUP_DS_UZUSUB_V_PARTIAL_DROP_ver_s_back_drop(data)                  (0x000007FF&(data))
#define  SCALEUP_DS_UZUSUB_V_PARTIAL_DROP_get_ver_s_front_drop(data)             ((0x07FF0000&(data))>>16)
#define  SCALEUP_DS_UZUSUB_V_PARTIAL_DROP_get_ver_s_back_drop(data)              (0x000007FF&(data))

#define  SCALEUP_DS_UZU_DB_CTRL                                                 0x18029224
#define  SCALEUP_DS_UZU_DB_CTRL_reg_addr                                         "0xB8029224"
#define  SCALEUP_DS_UZU_DB_CTRL_reg                                              0xB8029224
#define  SCALEUP_DS_UZU_DB_CTRL_inst_addr                                        "0x005D"
#define  set_SCALEUP_DS_UZU_DB_CTRL_reg(data)                                    (*((volatile unsigned int*)SCALEUP_DS_UZU_DB_CTRL_reg)=data)
#define  get_SCALEUP_DS_UZU_DB_CTRL_reg                                          (*((volatile unsigned int*)SCALEUP_DS_UZU_DB_CTRL_reg))
#define  SCALEUP_DS_UZU_DB_CTRL_db_en_shift                                      (2)
#define  SCALEUP_DS_UZU_DB_CTRL_db_read_level_shift                              (1)
#define  SCALEUP_DS_UZU_DB_CTRL_db_apply_shift                                   (0)
#define  SCALEUP_DS_UZU_DB_CTRL_db_en_mask                                       (0x00000004)
#define  SCALEUP_DS_UZU_DB_CTRL_db_read_level_mask                               (0x00000002)
#define  SCALEUP_DS_UZU_DB_CTRL_db_apply_mask                                    (0x00000001)
#define  SCALEUP_DS_UZU_DB_CTRL_db_en(data)                                      (0x00000004&((data)<<2))
#define  SCALEUP_DS_UZU_DB_CTRL_db_read_level(data)                              (0x00000002&((data)<<1))
#define  SCALEUP_DS_UZU_DB_CTRL_db_apply(data)                                   (0x00000001&(data))
#define  SCALEUP_DS_UZU_DB_CTRL_get_db_en(data)                                  ((0x00000004&(data))>>2)
#define  SCALEUP_DS_UZU_DB_CTRL_get_db_read_level(data)                          ((0x00000002&(data))>>1)
#define  SCALEUP_DS_UZU_DB_CTRL_get_db_apply(data)                               (0x00000001&(data))

#define  SCALEUP_DS_MEM_CRC_Ctr2                                                0x18029228
#define  SCALEUP_DS_MEM_CRC_Ctr2_reg_addr                                        "0xB8029228"
#define  SCALEUP_DS_MEM_CRC_Ctr2_reg                                             0xB8029228
#define  SCALEUP_DS_MEM_CRC_Ctr2_inst_addr                                       "0x005E"
#define  set_SCALEUP_DS_MEM_CRC_Ctr2_reg(data)                                   (*((volatile unsigned int*)SCALEUP_DS_MEM_CRC_Ctr2_reg)=data)
#define  get_SCALEUP_DS_MEM_CRC_Ctr2_reg                                         (*((volatile unsigned int*)SCALEUP_DS_MEM_CRC_Ctr2_reg))
#define  SCALEUP_DS_MEM_CRC_Ctr2_auto_cmp_en_shift                               (0)
#define  SCALEUP_DS_MEM_CRC_Ctr2_auto_cmp_en_mask                                (0x00000001)
#define  SCALEUP_DS_MEM_CRC_Ctr2_auto_cmp_en(data)                               (0x00000001&(data))
#define  SCALEUP_DS_MEM_CRC_Ctr2_get_auto_cmp_en(data)                           (0x00000001&(data))

#define  SCALEUP_DS_MEM_L_DES_CRC                                               0x1802922C
#define  SCALEUP_DS_MEM_L_DES_CRC_reg_addr                                       "0xB802922C"
#define  SCALEUP_DS_MEM_L_DES_CRC_reg                                            0xB802922C
#define  SCALEUP_DS_MEM_L_DES_CRC_inst_addr                                      "0x005F"
#define  set_SCALEUP_DS_MEM_L_DES_CRC_reg(data)                                  (*((volatile unsigned int*)SCALEUP_DS_MEM_L_DES_CRC_reg)=data)
#define  get_SCALEUP_DS_MEM_L_DES_CRC_reg                                        (*((volatile unsigned int*)SCALEUP_DS_MEM_L_DES_CRC_reg))
#define  SCALEUP_DS_MEM_L_DES_CRC_des_crc_shift                                  (0)
#define  SCALEUP_DS_MEM_L_DES_CRC_des_crc_mask                                   (0xFFFFFFFF)
#define  SCALEUP_DS_MEM_L_DES_CRC_des_crc(data)                                  (0xFFFFFFFF&(data))
#define  SCALEUP_DS_MEM_L_DES_CRC_get_des_crc(data)                              (0xFFFFFFFF&(data))

#define  SCALEUP_DS_MEM_CRC_ERR_CNT                                             0x18029230
#define  SCALEUP_DS_MEM_CRC_ERR_CNT_reg_addr                                     "0xB8029230"
#define  SCALEUP_DS_MEM_CRC_ERR_CNT_reg                                          0xB8029230
#define  SCALEUP_DS_MEM_CRC_ERR_CNT_inst_addr                                    "0x0060"
#define  set_SCALEUP_DS_MEM_CRC_ERR_CNT_reg(data)                                (*((volatile unsigned int*)SCALEUP_DS_MEM_CRC_ERR_CNT_reg)=data)
#define  get_SCALEUP_DS_MEM_CRC_ERR_CNT_reg                                      (*((volatile unsigned int*)SCALEUP_DS_MEM_CRC_ERR_CNT_reg))
#define  SCALEUP_DS_MEM_CRC_ERR_CNT_crc_err_cnt_shift                            (0)
#define  SCALEUP_DS_MEM_CRC_ERR_CNT_crc_err_cnt_mask                             (0x0000FFFF)
#define  SCALEUP_DS_MEM_CRC_ERR_CNT_crc_err_cnt(data)                            (0x0000FFFF&(data))
#define  SCALEUP_DS_MEM_CRC_ERR_CNT_get_crc_err_cnt(data)                        (0x0000FFFF&(data))

#define  SCALEUP_DS_UZU_WCLR                                                    0x18029234
#define  SCALEUP_DS_UZU_WCLR_reg_addr                                            "0xB8029234"
#define  SCALEUP_DS_UZU_WCLR_reg                                                 0xB8029234
#define  SCALEUP_DS_UZU_WCLR_inst_addr                                           "0x0061"
#define  set_SCALEUP_DS_UZU_WCLR_reg(data)                                       (*((volatile unsigned int*)SCALEUP_DS_UZU_WCLR_reg)=data)
#define  get_SCALEUP_DS_UZU_WCLR_reg                                             (*((volatile unsigned int*)SCALEUP_DS_UZU_WCLR_reg))
#define  SCALEUP_DS_UZU_WCLR_buff_unf_shift                                      (0)
#define  SCALEUP_DS_UZU_WCLR_buff_unf_mask                                       (0x00000001)
#define  SCALEUP_DS_UZU_WCLR_buff_unf(data)                                      (0x00000001&(data))
#define  SCALEUP_DS_UZU_WCLR_get_buff_unf(data)                                  (0x00000001&(data))

#define  SCALEUP_DS_UZU_Globle_Ctrl                                             0x18029290
#define  SCALEUP_DS_UZU_Globle_Ctrl_reg_addr                                     "0xB8029290"
#define  SCALEUP_DS_UZU_Globle_Ctrl_reg                                          0xB8029290
#define  SCALEUP_DS_UZU_Globle_Ctrl_inst_addr                                    "0x0062"
#define  set_SCALEUP_DS_UZU_Globle_Ctrl_reg(data)                                (*((volatile unsigned int*)SCALEUP_DS_UZU_Globle_Ctrl_reg)=data)
#define  get_SCALEUP_DS_UZU_Globle_Ctrl_reg                                      (*((volatile unsigned int*)SCALEUP_DS_UZU_Globle_Ctrl_reg))
#define  SCALEUP_DS_UZU_Globle_Ctrl_patgen_sync_shift                            (7)
#define  SCALEUP_DS_UZU_Globle_Ctrl_patgen_mode_shift                            (4)
#define  SCALEUP_DS_UZU_Globle_Ctrl_patgen_field_shift                           (1)
#define  SCALEUP_DS_UZU_Globle_Ctrl_patgen_sel_shift                             (0)
#define  SCALEUP_DS_UZU_Globle_Ctrl_patgen_sync_mask                             (0x00000080)
#define  SCALEUP_DS_UZU_Globle_Ctrl_patgen_mode_mask                             (0x00000070)
#define  SCALEUP_DS_UZU_Globle_Ctrl_patgen_field_mask                            (0x00000002)
#define  SCALEUP_DS_UZU_Globle_Ctrl_patgen_sel_mask                              (0x00000001)
#define  SCALEUP_DS_UZU_Globle_Ctrl_patgen_sync(data)                            (0x00000080&((data)<<7))
#define  SCALEUP_DS_UZU_Globle_Ctrl_patgen_mode(data)                            (0x00000070&((data)<<4))
#define  SCALEUP_DS_UZU_Globle_Ctrl_patgen_field(data)                           (0x00000002&((data)<<1))
#define  SCALEUP_DS_UZU_Globle_Ctrl_patgen_sel(data)                             (0x00000001&(data))
#define  SCALEUP_DS_UZU_Globle_Ctrl_get_patgen_sync(data)                        ((0x00000080&(data))>>7)
#define  SCALEUP_DS_UZU_Globle_Ctrl_get_patgen_mode(data)                        ((0x00000070&(data))>>4)
#define  SCALEUP_DS_UZU_Globle_Ctrl_get_patgen_field(data)                       ((0x00000002&(data))>>1)
#define  SCALEUP_DS_UZU_Globle_Ctrl_get_patgen_sel(data)                         (0x00000001&(data))

#define  SCALEUP_DS_UZU_PATGEN_COLOR0                                           0x18029294
#define  SCALEUP_DS_UZU_PATGEN_COLOR0_reg_addr                                   "0xB8029294"
#define  SCALEUP_DS_UZU_PATGEN_COLOR0_reg                                        0xB8029294
#define  SCALEUP_DS_UZU_PATGEN_COLOR0_inst_addr                                  "0x0063"
#define  set_SCALEUP_DS_UZU_PATGEN_COLOR0_reg(data)                              (*((volatile unsigned int*)SCALEUP_DS_UZU_PATGEN_COLOR0_reg)=data)
#define  get_SCALEUP_DS_UZU_PATGEN_COLOR0_reg                                    (*((volatile unsigned int*)SCALEUP_DS_UZU_PATGEN_COLOR0_reg))
#define  SCALEUP_DS_UZU_PATGEN_COLOR0_patgen_c0_y_shift                          (16)
#define  SCALEUP_DS_UZU_PATGEN_COLOR0_patgen_c0_cr_shift                         (8)
#define  SCALEUP_DS_UZU_PATGEN_COLOR0_patgen_c0_cb_shift                         (0)
#define  SCALEUP_DS_UZU_PATGEN_COLOR0_patgen_c0_y_mask                           (0x00FF0000)
#define  SCALEUP_DS_UZU_PATGEN_COLOR0_patgen_c0_cr_mask                          (0x0000FF00)
#define  SCALEUP_DS_UZU_PATGEN_COLOR0_patgen_c0_cb_mask                          (0x000000FF)
#define  SCALEUP_DS_UZU_PATGEN_COLOR0_patgen_c0_y(data)                          (0x00FF0000&((data)<<16))
#define  SCALEUP_DS_UZU_PATGEN_COLOR0_patgen_c0_cr(data)                         (0x0000FF00&((data)<<8))
#define  SCALEUP_DS_UZU_PATGEN_COLOR0_patgen_c0_cb(data)                         (0x000000FF&(data))
#define  SCALEUP_DS_UZU_PATGEN_COLOR0_get_patgen_c0_y(data)                      ((0x00FF0000&(data))>>16)
#define  SCALEUP_DS_UZU_PATGEN_COLOR0_get_patgen_c0_cr(data)                     ((0x0000FF00&(data))>>8)
#define  SCALEUP_DS_UZU_PATGEN_COLOR0_get_patgen_c0_cb(data)                     (0x000000FF&(data))

#define  SCALEUP_DS_UZU_PATGEN_COLOR1                                           0x18029298
#define  SCALEUP_DS_UZU_PATGEN_COLOR1_reg_addr                                   "0xB8029298"
#define  SCALEUP_DS_UZU_PATGEN_COLOR1_reg                                        0xB8029298
#define  SCALEUP_DS_UZU_PATGEN_COLOR1_inst_addr                                  "0x0064"
#define  set_SCALEUP_DS_UZU_PATGEN_COLOR1_reg(data)                              (*((volatile unsigned int*)SCALEUP_DS_UZU_PATGEN_COLOR1_reg)=data)
#define  get_SCALEUP_DS_UZU_PATGEN_COLOR1_reg                                    (*((volatile unsigned int*)SCALEUP_DS_UZU_PATGEN_COLOR1_reg))
#define  SCALEUP_DS_UZU_PATGEN_COLOR1_patgen_c1_y_shift                          (16)
#define  SCALEUP_DS_UZU_PATGEN_COLOR1_patgen_c1_cr_shift                         (8)
#define  SCALEUP_DS_UZU_PATGEN_COLOR1_patgen_c1_cb_shift                         (0)
#define  SCALEUP_DS_UZU_PATGEN_COLOR1_patgen_c1_y_mask                           (0x00FF0000)
#define  SCALEUP_DS_UZU_PATGEN_COLOR1_patgen_c1_cr_mask                          (0x0000FF00)
#define  SCALEUP_DS_UZU_PATGEN_COLOR1_patgen_c1_cb_mask                          (0x000000FF)
#define  SCALEUP_DS_UZU_PATGEN_COLOR1_patgen_c1_y(data)                          (0x00FF0000&((data)<<16))
#define  SCALEUP_DS_UZU_PATGEN_COLOR1_patgen_c1_cr(data)                         (0x0000FF00&((data)<<8))
#define  SCALEUP_DS_UZU_PATGEN_COLOR1_patgen_c1_cb(data)                         (0x000000FF&(data))
#define  SCALEUP_DS_UZU_PATGEN_COLOR1_get_patgen_c1_y(data)                      ((0x00FF0000&(data))>>16)
#define  SCALEUP_DS_UZU_PATGEN_COLOR1_get_patgen_c1_cr(data)                     ((0x0000FF00&(data))>>8)
#define  SCALEUP_DS_UZU_PATGEN_COLOR1_get_patgen_c1_cb(data)                     (0x000000FF&(data))

#define  SCALEUP_DS_UZU_PATGEN_COLOR2                                           0x1802929C
#define  SCALEUP_DS_UZU_PATGEN_COLOR2_reg_addr                                   "0xB802929C"
#define  SCALEUP_DS_UZU_PATGEN_COLOR2_reg                                        0xB802929C
#define  SCALEUP_DS_UZU_PATGEN_COLOR2_inst_addr                                  "0x0065"
#define  set_SCALEUP_DS_UZU_PATGEN_COLOR2_reg(data)                              (*((volatile unsigned int*)SCALEUP_DS_UZU_PATGEN_COLOR2_reg)=data)
#define  get_SCALEUP_DS_UZU_PATGEN_COLOR2_reg                                    (*((volatile unsigned int*)SCALEUP_DS_UZU_PATGEN_COLOR2_reg))
#define  SCALEUP_DS_UZU_PATGEN_COLOR2_patgen_c2_y_shift                          (16)
#define  SCALEUP_DS_UZU_PATGEN_COLOR2_patgen_c2_cr_shift                         (8)
#define  SCALEUP_DS_UZU_PATGEN_COLOR2_patgen_c2_cb_shift                         (0)
#define  SCALEUP_DS_UZU_PATGEN_COLOR2_patgen_c2_y_mask                           (0x00FF0000)
#define  SCALEUP_DS_UZU_PATGEN_COLOR2_patgen_c2_cr_mask                          (0x0000FF00)
#define  SCALEUP_DS_UZU_PATGEN_COLOR2_patgen_c2_cb_mask                          (0x000000FF)
#define  SCALEUP_DS_UZU_PATGEN_COLOR2_patgen_c2_y(data)                          (0x00FF0000&((data)<<16))
#define  SCALEUP_DS_UZU_PATGEN_COLOR2_patgen_c2_cr(data)                         (0x0000FF00&((data)<<8))
#define  SCALEUP_DS_UZU_PATGEN_COLOR2_patgen_c2_cb(data)                         (0x000000FF&(data))
#define  SCALEUP_DS_UZU_PATGEN_COLOR2_get_patgen_c2_y(data)                      ((0x00FF0000&(data))>>16)
#define  SCALEUP_DS_UZU_PATGEN_COLOR2_get_patgen_c2_cr(data)                     ((0x0000FF00&(data))>>8)
#define  SCALEUP_DS_UZU_PATGEN_COLOR2_get_patgen_c2_cb(data)                     (0x000000FF&(data))

#define  SCALEUP_DS_UZU_PATGEN_COLOR3                                           0x180292A0
#define  SCALEUP_DS_UZU_PATGEN_COLOR3_reg_addr                                   "0xB80292A0"
#define  SCALEUP_DS_UZU_PATGEN_COLOR3_reg                                        0xB80292A0
#define  SCALEUP_DS_UZU_PATGEN_COLOR3_inst_addr                                  "0x0066"
#define  set_SCALEUP_DS_UZU_PATGEN_COLOR3_reg(data)                              (*((volatile unsigned int*)SCALEUP_DS_UZU_PATGEN_COLOR3_reg)=data)
#define  get_SCALEUP_DS_UZU_PATGEN_COLOR3_reg                                    (*((volatile unsigned int*)SCALEUP_DS_UZU_PATGEN_COLOR3_reg))
#define  SCALEUP_DS_UZU_PATGEN_COLOR3_patgen_c3_y_shift                          (16)
#define  SCALEUP_DS_UZU_PATGEN_COLOR3_patgen_c3_cr_shift                         (8)
#define  SCALEUP_DS_UZU_PATGEN_COLOR3_patgen_c3_cb_shift                         (0)
#define  SCALEUP_DS_UZU_PATGEN_COLOR3_patgen_c3_y_mask                           (0x00FF0000)
#define  SCALEUP_DS_UZU_PATGEN_COLOR3_patgen_c3_cr_mask                          (0x0000FF00)
#define  SCALEUP_DS_UZU_PATGEN_COLOR3_patgen_c3_cb_mask                          (0x000000FF)
#define  SCALEUP_DS_UZU_PATGEN_COLOR3_patgen_c3_y(data)                          (0x00FF0000&((data)<<16))
#define  SCALEUP_DS_UZU_PATGEN_COLOR3_patgen_c3_cr(data)                         (0x0000FF00&((data)<<8))
#define  SCALEUP_DS_UZU_PATGEN_COLOR3_patgen_c3_cb(data)                         (0x000000FF&(data))
#define  SCALEUP_DS_UZU_PATGEN_COLOR3_get_patgen_c3_y(data)                      ((0x00FF0000&(data))>>16)
#define  SCALEUP_DS_UZU_PATGEN_COLOR3_get_patgen_c3_cr(data)                     ((0x0000FF00&(data))>>8)
#define  SCALEUP_DS_UZU_PATGEN_COLOR3_get_patgen_c3_cb(data)                     (0x000000FF&(data))

#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE                                     0x180292A4
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE_reg_addr                             "0xB80292A4"
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE_reg                                  0xB80292A4
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE_inst_addr                            "0x0067"
#define  set_SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE_reg(data)                        (*((volatile unsigned int*)SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE_reg)=data)
#define  get_SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE_reg                              (*((volatile unsigned int*)SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE_reg))
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE_patgen_tog_num_shift                 (27)
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE_patgen_tog_sel_shift                 (25)
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE_patgen_width_shift                   (0)
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE_patgen_tog_num_mask                  (0xF8000000)
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE_patgen_tog_sel_mask                  (0x06000000)
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE_patgen_width_mask                    (0x003FFFFF)
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE_patgen_tog_num(data)                 (0xF8000000&((data)<<27))
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE_patgen_tog_sel(data)                 (0x06000000&((data)<<25))
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE_patgen_width(data)                   (0x003FFFFF&(data))
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE_get_patgen_tog_num(data)             ((0xF8000000&(data))>>27)
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE_get_patgen_tog_sel(data)             ((0x06000000&(data))>>25)
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE_get_patgen_width(data)               (0x003FFFFF&(data))

#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE1                                    0x180292A8
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE1_reg_addr                            "0xB80292A8"
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE1_reg                                 0xB80292A8
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE1_inst_addr                           "0x0068"
#define  set_SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE1_reg(data)                       (*((volatile unsigned int*)SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE1_reg)=data)
#define  get_SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE1_reg                             (*((volatile unsigned int*)SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE1_reg))
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE1_patgen_width_1_shift                (0)
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE1_patgen_width_1_mask                 (0x003FFFFF)
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE1_patgen_width_1(data)                (0x003FFFFF&(data))
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE1_get_patgen_width_1(data)            (0x003FFFFF&(data))

#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE2                                    0x180292AC
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE2_reg_addr                            "0xB80292AC"
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE2_reg                                 0xB80292AC
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE2_inst_addr                           "0x0069"
#define  set_SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE2_reg(data)                       (*((volatile unsigned int*)SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE2_reg)=data)
#define  get_SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE2_reg                             (*((volatile unsigned int*)SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE2_reg))
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE2_patgen_width_2_shift                (0)
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE2_patgen_width_2_mask                 (0x003FFFFF)
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE2_patgen_width_2(data)                (0x003FFFFF&(data))
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE2_get_patgen_width_2(data)            (0x003FFFFF&(data))

#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE3                                    0x180292B0
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE3_reg_addr                            "0xB80292B0"
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE3_reg                                 0xB80292B0
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE3_inst_addr                           "0x006A"
#define  set_SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE3_reg(data)                       (*((volatile unsigned int*)SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE3_reg)=data)
#define  get_SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE3_reg                             (*((volatile unsigned int*)SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE3_reg))
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE3_patgen_width_3_shift                (0)
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE3_patgen_width_3_mask                 (0x003FFFFF)
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE3_patgen_width_3(data)                (0x003FFFFF&(data))
#define  SCALEUP_DS_UZU_PATGEN_FRAME_TOGGLE3_get_patgen_width_3(data)            (0x003FFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======SCALEUP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy18029000_31_16:16;
        RBus_UInt32  uzu_bypass_no_pwrsave:1;
        RBus_UInt32  uzu_bypass_force:1;
        RBus_UInt32  lr_black_en:1;
        RBus_UInt32  lr_black_sel:1;
        RBus_UInt32  in_black_en:1;
        RBus_UInt32  in_even_black:1;
        RBus_UInt32  out_black_en:1;
        RBus_UInt32  out_even_black:1;
        RBus_UInt32  patgen_sync:1;
        RBus_UInt32  patgen_mode:3;
        RBus_UInt32  patgen_lflag_en:1;
        RBus_UInt32  patgen_field:1;
        RBus_UInt32  patgen_sel:2;
    };
}scaleup_d_uzu_globle_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hor_mode_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  ver_pr_mode:2;
        RBus_UInt32  wd_main_buf_udf_en:1;
        RBus_UInt32  irq_main_buf_udf_en:1;
        RBus_UInt32  bypassfornr:1;
        RBus_UInt32  v_y_consttab_sel:2;
        RBus_UInt32  v_c_consttab_sel:2;
        RBus_UInt32  h_y_consttab_sel:2;
        RBus_UInt32  h_c_consttab_sel:2;
        RBus_UInt32  hor12_table_sel:2;
        RBus_UInt32  d_3d_sel_en:1;
        RBus_UInt32  video_comp_en:1;
        RBus_UInt32  odd_inv:1;
        RBus_UInt32  in_fmt_conv:1;
        RBus_UInt32  conv_type:1;
        RBus_UInt32  v_y_table_sel:1;
        RBus_UInt32  v_c_table_sel:1;
        RBus_UInt32  h_y_table_sel:1;
        RBus_UInt32  h_c_table_sel:1;
        RBus_UInt32  in_fmt_dup:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  v_zoom_en:1;
        RBus_UInt32  h_zoom_en:1;
    };
}scaleup_dm_uzu_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  hor_factor:20;
    };
}scaleup_dm_uzu_scale_hor_factor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ver_factor:20;
    };
}scaleup_dm_uzu_scale_ver_factor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  hor_delta1:13;
    };
}scaleup_dm_uzu_hor_delta1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  hor_delta2:13;
    };
}scaleup_dm_uzu_hor_delta2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  hor_segment1:11;
    };
}scaleup_dm_uzu_hor_segment1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  hor_segment2:11;
    };
}scaleup_dm_uzu_hor_segment2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  hor_segment3:12;
    };
}scaleup_dm_uzu_hor_segment3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  hor_ini:8;
        RBus_UInt32  ver_ini:8;
    };
}scaleup_dm_uzu_initial_value_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  hor_ini_l:8;
        RBus_UInt32  ver_ini_l:8;
    };
}scaleup_dm_uzu_initial_value_left_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  hor_input_size:13;
        RBus_UInt32  res2:4;
        RBus_UInt32  ver_input_size:12;
    };
}scaleup_dm_uzu_input_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180290e0_31_4:28;
        RBus_UInt32  v8tap_table_sel:2;
        RBus_UInt32  ver_mode_sel:2;
    };
}scaleup_dm_uzu_v8ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  level_flatness_coeff:3;
        RBus_UInt32  dering_dbg_mode:3;
        RBus_UInt32  h4h12_blend_range:2;
        RBus_UInt32  h4h12_blend_lowbound:8;
        RBus_UInt32  lpf_blend_mask_sel:1;
        RBus_UInt32  level_maxmin_coeff:3;
        RBus_UInt32  h4h12_blend_en:1;
        RBus_UInt32  lpf_blend_en:1;
        RBus_UInt32  lpf_blend_range:2;
        RBus_UInt32  lpf_blend_lowbound:8;
    };
}scaleup_dm_uzu_12tap_dering_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  dering_cross_lowbd:5;
        RBus_UInt32  dering_cross_en:1;
        RBus_UInt32  dering_cross_slope:3;
        RBus_UInt32  dering_edgelevel_gain:4;
    };
}scaleup_dm_uzu_12tap_dering_cross_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dering_gap_side_gain:4;
        RBus_UInt32  dering_gap_center_gain:3;
        RBus_UInt32  dering_gap_offset:4;
        RBus_UInt32  dering_gap_sidemode:1;
        RBus_UInt32  dering_h4h12_blend_type:2;
        RBus_UInt32  res1:18;
    };
}scaleup_dm_uzu_gap_dering_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  deringv_gap_side_gain:4;
        RBus_UInt32  deringv_gap_center_gain:3;
        RBus_UInt32  deringv_gap_offset:4;
        RBus_UInt32  deringv_gap_sidemode:1;
        RBus_UInt32  deringv_v4v8_blend_type:2;
        RBus_UInt32  res1:18;
    };
}scaleup_dm_uzu_gap_deringv_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  level_flatness_coeff:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  level_maxmin_coeff:3;
        RBus_UInt32  dering_dbg_mode:2;
        RBus_UInt32  v4v8_blend_range:2;
        RBus_UInt32  res3:4;
        RBus_UInt32  v4v8_blend_lowbound:8;
        RBus_UInt32  res4:6;
        RBus_UInt32  range_center:1;
        RBus_UInt32  range_side:1;
    };
}scaleup_dm_uzu_8tap_deringv_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  v8_c_sel:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  h8_c_sel:10;
    };
}scaleup_dm_uzu_chroma_8tap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dedistortion_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dedistortion_lowbd:6;
        RBus_UInt32  dedistortion_slope:4;
        RBus_UInt32  dedistortion_dbg_mode:2;
        RBus_UInt32  res2:18;
    };
}scaleup_dm_uzu_de_distortion_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  vcti_type3_thd:6;
        RBus_UInt32  res2:1;
        RBus_UInt32  vcti_gain:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  vcti_select:2;
        RBus_UInt32  vcti_en:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  conti:1;
        RBus_UInt32  start:1;
    };
}scaleup_dm_mem_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mem_crc:32;
    };
}scaleup_dm_mem_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  r_auto_cmp_en:1;
        RBus_UInt32  l_auto_cmp_en:1;
        RBus_UInt32  crc_3d_en:1;
    };
}scaleup_mem_crc_ctr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_r_result:32;
    };
}scaleup_mem_crc_r_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  l_des_crc:32;
    };
}scaleup_mem_l_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  r_des_crc:32;
    };
}scaleup_mem_r_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  r_crc_err_cnt:16;
        RBus_UInt32  l_crc_err_cnt:16;
    };
}scaleup_mem_crc_err_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  ch_sel:1;
        RBus_UInt32  conti:1;
        RBus_UInt32  start:1;
    };
}scaleup_d_uzu_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  uzu_crc:32;
    };
}scaleup_d_uzu_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  vcti_lpf_lbound1:10;
        RBus_UInt32  vcti_lpf_hbound1:10;
        RBus_UInt32  vcti_low_pass_filter_en:1;
        RBus_UInt32  vcti_lpf_mode:1;
    };
}scaleup_dm_uzumain_vcti_lpf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  patgen_c0_y:8;
        RBus_UInt32  patgen_c0_cr:8;
        RBus_UInt32  patgen_c0_cb:8;
    };
}scaleup_d_uzu_patgen_color0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  patgen_c1_y:8;
        RBus_UInt32  patgen_c1_cr:8;
        RBus_UInt32  patgen_c1_cb:8;
    };
}scaleup_d_uzu_patgen_color1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  patgen_c2_y:8;
        RBus_UInt32  patgen_c2_cr:8;
        RBus_UInt32  patgen_c2_cb:8;
    };
}scaleup_d_uzu_patgen_color2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  patgen_c3_y:8;
        RBus_UInt32  patgen_c3_cr:8;
        RBus_UInt32  patgen_c3_cb:8;
    };
}scaleup_d_uzu_patgen_color3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_tog_num:5;
        RBus_UInt32  patgen_tog_sel:2;
        RBus_UInt32  patgen_lflag:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  patgen_width:22;
    };
}scaleup_d_uzu_patgen_frame_toggle_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  patgen_lflag_1:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  patgen_width_1:22;
    };
}scaleup_d_uzu_patgen_frame_toggle1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  patgen_lflag_2:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  patgen_width_2:22;
    };
}scaleup_d_uzu_patgen_frame_toggle2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  patgen_lflag_3:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  patgen_width_3:22;
    };
}scaleup_d_uzu_patgen_frame_toggle3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  left_ydi:8;
        RBus_UInt32  left_udi:8;
        RBus_UInt32  left_vdi:8;
    };
}scaleup_left_3d_ptg_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  left_h_saddr:8;
        RBus_UInt32  left_v_saddr:8;
        RBus_UInt32  left_h_limit:8;
        RBus_UInt32  left_v_limit:8;
    };
}scaleup_left_3d_ptg_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  left_hsize:8;
        RBus_UInt32  left_vsize:8;
        RBus_UInt32  see_sadr_only_l:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  left_hstep:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  left_vstep:6;
    };
}scaleup_left_3d_ptg_ctrl5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  right_ydi:8;
        RBus_UInt32  right_udi:8;
        RBus_UInt32  right_vdi:8;
    };
}scaleup_right_3d_ptg_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  right_h_saddr:8;
        RBus_UInt32  right_v_saddr:8;
        RBus_UInt32  right_h_limit:8;
        RBus_UInt32  right_v_limit:8;
    };
}scaleup_right_3d_ptg_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  right_hsize:8;
        RBus_UInt32  right_vsize:8;
        RBus_UInt32  see_sadr_only_r:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  right_hstep:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  right_vstep:6;
    };
}scaleup_right_3d_ptg_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ptg_bg_ydi:8;
        RBus_UInt32  ptg_bg_udi:8;
        RBus_UInt32  ptg_bg_vdi:8;
    };
}scaleup_ptg_3d_ctr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  cross_bar_en:1;
        RBus_UInt32  ch_sel:1;
        RBus_UInt32  write_en:1;
        RBus_UInt32  read_en:1;
    };
}scaleup_accessdata_ctrl_uzu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  starty:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  startx:13;
    };
}scaleup_accessdata_posctrl_uzu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  y01:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  y00:10;
    };
}scaleup_readdata_data_y1_uzu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  y11:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  y10:10;
    };
}scaleup_readdata_data_y2_uzu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  v00:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  u00:10;
    };
}scaleup_readdata_data_c1_uzu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  v01:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  u01:10;
    };
}scaleup_readdata_data_c2_uzu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  v10:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  u10:10;
    };
}scaleup_readdata_data_c3_uzu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  v11:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  u11:10;
    };
}scaleup_readdata_data_c4_uzu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcti_lpf_lbound2:10;
        RBus_UInt32  vcti_lpf_hbound2:10;
        RBus_UInt32  v:4;
        RBus_UInt32  u:4;
        RBus_UInt32  y:4;
    };
}scaleup_writedata_data_uzu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  hor_m_front_drop:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  hor_m_back_drop:12;
    };
}scaleup_dm_uzumain_h_partial_drop_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ver_m_front_drop:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  ver_m_back_drop:11;
    };
}scaleup_dm_uzumain_v_partial_drop_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  hor_m_front_drop_odd:12;
        RBus_UInt32  hor_m_back_drop_odd:12;
        RBus_UInt32  res2:1;
        RBus_UInt32  pixel_drop_mode:1;
        RBus_UInt32  res3:2;
    };
}scaleup_dm_uzu_partial_drop_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  db_write_hold_cnt:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  db_read_level:1;
        RBus_UInt32  db_apply:1;
    };
}scaleup_dm_uzu_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  buff_unf:1;
    };
}scaleup_dm_uzu_wclr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  directionalscale_en:1;
        RBus_UInt32  ds_method:1;
        RBus_UInt32  ds_phase_en:1;
        RBus_UInt32  ds_vlpf_en:1;
        RBus_UInt32  ds_hlpf_en:1;
        RBus_UInt32  ds_transang_nearhv:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  db_mode:4;
        RBus_UInt32  db_magfilter:4;
        RBus_UInt32  mag_ang_lpf_ratio:4;
        RBus_UInt32  dummy18029130_11_5:7;
        RBus_UInt32  ds_conf_limit:5;
    };
}scaleup_dm_dir_uzu_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  transang_sec3:7;
        RBus_UInt32  res2:2;
        RBus_UInt32  transang_sec2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  transang_sec1:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  transang_sec0:6;
    };
}scaleup_dm_dir_uzu_transang1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  transang_sec4:7;
        RBus_UInt32  res2:4;
        RBus_UInt32  transang_step4:4;
        RBus_UInt32  transang_step3:4;
        RBus_UInt32  transang_step2:4;
        RBus_UInt32  transang_step1:4;
        RBus_UInt32  transang_step0:4;
    };
}scaleup_dm_dir_uzu_transang2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  onepx_en:1;
        RBus_UInt32  onepx_centerdiffthd:4;
        RBus_UInt32  onepx_sidediffthd:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  onepx_diffstep:3;
        RBus_UInt32  onepx_lowbnd:8;
        RBus_UInt32  res3:1;
        RBus_UInt32  onepx_step:3;
        RBus_UInt32  res4:4;
    };
}scaleup_dm_dir_uzu_onepixeldetect_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  angdiff_lowbnd:6;
        RBus_UInt32  res2:5;
        RBus_UInt32  angdiff_step:3;
        RBus_UInt32  mag_lowbnd:8;
        RBus_UInt32  res3:5;
        RBus_UInt32  mag_step:3;
    };
}scaleup_dm_dir_uzu_angmagscore_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  angdiff_lowbnd2:6;
        RBus_UInt32  res2:1;
        RBus_UInt32  angdiff_step2:3;
        RBus_UInt32  res3:4;
        RBus_UInt32  conf_step:3;
        RBus_UInt32  conf_offset:5;
        RBus_UInt32  conf_lowbnd:8;
    };
}scaleup_dm_dir_uzu_conf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  checkhv_angrange:4;
        RBus_UInt32  checkhv_en:1;
        RBus_UInt32  checkhv_angstep:3;
        RBus_UInt32  checkhv_diffstep:3;
        RBus_UInt32  checkhv_diffrange:5;
        RBus_UInt32  checkpn_angrange:4;
        RBus_UInt32  checkpn_en:1;
        RBus_UInt32  checkpn_angstep:3;
        RBus_UInt32  checkpn_diffstep:3;
        RBus_UInt32  checkpn_diffrange:5;
    };
}scaleup_dm_dir_uzu_anglecheck_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  diaglpf_hmn_penalty2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  diaglpf_hmn_penalty1:6;
        RBus_UInt32  res3:3;
        RBus_UInt32  diaglpf_en:1;
    };
}scaleup_dm_dir_uzu_diaglpf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  diaglpf_hmn_slope:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  diaglpf_hmn_lowbd:7;
        RBus_UInt32  diaglpf_ang_slope:4;
        RBus_UInt32  res3:1;
        RBus_UInt32  diaglpf_ang_lowbd:7;
    };
}scaleup_dm_dir_uzu_diaglpf_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  coef_read_tab_sel:1;
        RBus_UInt32  coef_rw_en:1;
        RBus_UInt32  coef_rw_sel:1;
        RBus_UInt32  coef_tab_sel:4;
    };
}scaleup_coef_table_rw_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  coef_addr:8;
        RBus_UInt32  res2:3;
        RBus_UInt32  coef_write:1;
        RBus_UInt32  res3:4;
    };
}scaleup_coef_table_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  coef0:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  coef1:12;
    };
}scaleup_coef_table_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  coef2:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  coef3:12;
    };
}scaleup_coef_table_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  coef4:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  coef5:12;
    };
}scaleup_coef_table_ctl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  coef6:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  coef7:12;
    };
}scaleup_coef_table_ctl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  coef8:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  coef9:12;
    };
}scaleup_coef_table_ctl_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  coef10:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  coef11:12;
    };
}scaleup_coef_table_ctl_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  coef_acc_error:1;
    };
}scaleup_coef_table_err_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
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
    };
}scaleup_dm_uzu_bist_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
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
}scaleup_dm_uzu_bist_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
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
    };
}scaleup_dm_uzu_bist_3_RBUS;

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
}scaleup_dm_uzu_bist_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ls_0:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  rm_13:4;
        RBus_UInt32  rm_12:4;
        RBus_UInt32  rm_11:4;
        RBus_UInt32  rm_10:4;
        RBus_UInt32  rm_9:4;
        RBus_UInt32  rm_8:4;
    };
}scaleup_dm_uzu_bist_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  testrwm_6:1;
        RBus_UInt32  testrwm_5:1;
        RBus_UInt32  testrwm_4:1;
        RBus_UInt32  testrwm_3:1;
        RBus_UInt32  testrwm_2:1;
        RBus_UInt32  testrwm_1:1;
        RBus_UInt32  testrwm_0:1;
    };
}scaleup_dm_uzu_bist_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  test1_13:1;
        RBus_UInt32  test1_12:1;
        RBus_UInt32  test1_11:1;
        RBus_UInt32  test1_10:1;
        RBus_UInt32  test1_9:1;
        RBus_UInt32  test1_8:1;
        RBus_UInt32  test1_7:1;
        RBus_UInt32  test1_6:1;
        RBus_UInt32  test1_5:1;
        RBus_UInt32  test1_4:1;
        RBus_UInt32  test1_3:1;
        RBus_UInt32  test1_2:1;
        RBus_UInt32  test1_1:1;
        RBus_UInt32  test1_0:1;
    };
}scaleup_dm_uzu_bist_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  wd_sub_buf_udf_en:1;
        RBus_UInt32  irq_sub_buf_udf_en:1;
        RBus_UInt32  res2:13;
        RBus_UInt32  v_table_sel:1;
        RBus_UInt32  h_table_sel:1;
        RBus_UInt32  ver_mode_sel:1;
        RBus_UInt32  in_fmt_dup:1;
        RBus_UInt32  video_comp_en:1;
        RBus_UInt32  odd_inv:1;
        RBus_UInt32  in_fmt_conv:1;
        RBus_UInt32  conv_type:1;
        RBus_UInt32  v_zoom_en:1;
        RBus_UInt32  h_zoom_en:1;
    };
}scaleup_ds_uzu_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  hor_factor:20;
    };
}scaleup_ds_uzu_scale_hor_factor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ver_factor:20;
    };
}scaleup_ds_uzu_scale_ver_factor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  hor_ini:8;
        RBus_UInt32  ver_ini:8;
    };
}scaleup_ds_uzu_initial_value_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  hor_input_size:13;
        RBus_UInt32  res2:4;
        RBus_UInt32  ver_input_size:12;
    };
}scaleup_ds_uzu_input_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  conti:1;
        RBus_UInt32  start:1;
    };
}scaleup_ds_mem_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mem_crc:32;
    };
}scaleup_ds_mem_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  hor_s_front_drop:12;
        RBus_UInt32  hor_s_back_drop:12;
    };
}scaleup_ds_uzusub_h_partial_drop_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ver_s_front_drop:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  ver_s_back_drop:11;
    };
}scaleup_ds_uzusub_v_partial_drop_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  db_en:1;
        RBus_UInt32  db_read_level:1;
        RBus_UInt32  db_apply:1;
    };
}scaleup_ds_uzu_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  auto_cmp_en:1;
    };
}scaleup_ds_mem_crc_ctr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  des_crc:32;
    };
}scaleup_ds_mem_l_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  crc_err_cnt:16;
    };
}scaleup_ds_mem_crc_err_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  buff_unf:1;
    };
}scaleup_ds_uzu_wclr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  patgen_sync:1;
        RBus_UInt32  patgen_mode:3;
        RBus_UInt32  res2:2;
        RBus_UInt32  patgen_field:1;
        RBus_UInt32  patgen_sel:1;
    };
}scaleup_ds_uzu_globle_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  patgen_c0_y:8;
        RBus_UInt32  patgen_c0_cr:8;
        RBus_UInt32  patgen_c0_cb:8;
    };
}scaleup_ds_uzu_patgen_color0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  patgen_c1_y:8;
        RBus_UInt32  patgen_c1_cr:8;
        RBus_UInt32  patgen_c1_cb:8;
    };
}scaleup_ds_uzu_patgen_color1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  patgen_c2_y:8;
        RBus_UInt32  patgen_c2_cr:8;
        RBus_UInt32  patgen_c2_cb:8;
    };
}scaleup_ds_uzu_patgen_color2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  patgen_c3_y:8;
        RBus_UInt32  patgen_c3_cr:8;
        RBus_UInt32  patgen_c3_cb:8;
    };
}scaleup_ds_uzu_patgen_color3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_tog_num:5;
        RBus_UInt32  patgen_tog_sel:2;
        RBus_UInt32  res1:3;
        RBus_UInt32  patgen_width:22;
    };
}scaleup_ds_uzu_patgen_frame_toggle_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  patgen_width_1:22;
    };
}scaleup_ds_uzu_patgen_frame_toggle1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  patgen_width_2:22;
    };
}scaleup_ds_uzu_patgen_frame_toggle2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  patgen_width_3:22;
    };
}scaleup_ds_uzu_patgen_frame_toggle3_RBUS;

#else //apply LITTLE_ENDIAN

//======SCALEUP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_sel:2;
        RBus_UInt32  patgen_field:1;
        RBus_UInt32  patgen_lflag_en:1;
        RBus_UInt32  patgen_mode:3;
        RBus_UInt32  patgen_sync:1;
        RBus_UInt32  out_even_black:1;
        RBus_UInt32  out_black_en:1;
        RBus_UInt32  in_even_black:1;
        RBus_UInt32  in_black_en:1;
        RBus_UInt32  lr_black_sel:1;
        RBus_UInt32  lr_black_en:1;
        RBus_UInt32  uzu_bypass_force:1;
        RBus_UInt32  uzu_bypass_no_pwrsave:1;
        RBus_UInt32  dummy18029000_31_16:16;
    };
}scaleup_d_uzu_globle_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h_zoom_en:1;
        RBus_UInt32  v_zoom_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  in_fmt_dup:1;
        RBus_UInt32  h_c_table_sel:1;
        RBus_UInt32  h_y_table_sel:1;
        RBus_UInt32  v_c_table_sel:1;
        RBus_UInt32  v_y_table_sel:1;
        RBus_UInt32  conv_type:1;
        RBus_UInt32  in_fmt_conv:1;
        RBus_UInt32  odd_inv:1;
        RBus_UInt32  video_comp_en:1;
        RBus_UInt32  d_3d_sel_en:1;
        RBus_UInt32  hor12_table_sel:2;
        RBus_UInt32  h_c_consttab_sel:2;
        RBus_UInt32  h_y_consttab_sel:2;
        RBus_UInt32  v_c_consttab_sel:2;
        RBus_UInt32  v_y_consttab_sel:2;
        RBus_UInt32  bypassfornr:1;
        RBus_UInt32  irq_main_buf_udf_en:1;
        RBus_UInt32  wd_main_buf_udf_en:1;
        RBus_UInt32  ver_pr_mode:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  hor_mode_sel:2;
    };
}scaleup_dm_uzu_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hor_factor:20;
        RBus_UInt32  res1:12;
    };
}scaleup_dm_uzu_scale_hor_factor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ver_factor:20;
        RBus_UInt32  res1:12;
    };
}scaleup_dm_uzu_scale_ver_factor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hor_delta1:13;
        RBus_UInt32  res1:19;
    };
}scaleup_dm_uzu_hor_delta1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hor_delta2:13;
        RBus_UInt32  res1:19;
    };
}scaleup_dm_uzu_hor_delta2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hor_segment1:11;
        RBus_UInt32  res1:21;
    };
}scaleup_dm_uzu_hor_segment1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hor_segment2:11;
        RBus_UInt32  res1:21;
    };
}scaleup_dm_uzu_hor_segment2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hor_segment3:12;
        RBus_UInt32  res1:20;
    };
}scaleup_dm_uzu_hor_segment3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ver_ini:8;
        RBus_UInt32  hor_ini:8;
        RBus_UInt32  res1:16;
    };
}scaleup_dm_uzu_initial_value_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ver_ini_l:8;
        RBus_UInt32  hor_ini_l:8;
        RBus_UInt32  res1:16;
    };
}scaleup_dm_uzu_initial_value_left_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ver_input_size:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  hor_input_size:13;
        RBus_UInt32  res2:3;
    };
}scaleup_dm_uzu_input_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ver_mode_sel:2;
        RBus_UInt32  v8tap_table_sel:2;
        RBus_UInt32  dummy180290e0_31_4:28;
    };
}scaleup_dm_uzu_v8ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lpf_blend_lowbound:8;
        RBus_UInt32  lpf_blend_range:2;
        RBus_UInt32  lpf_blend_en:1;
        RBus_UInt32  h4h12_blend_en:1;
        RBus_UInt32  level_maxmin_coeff:3;
        RBus_UInt32  lpf_blend_mask_sel:1;
        RBus_UInt32  h4h12_blend_lowbound:8;
        RBus_UInt32  h4h12_blend_range:2;
        RBus_UInt32  dering_dbg_mode:3;
        RBus_UInt32  level_flatness_coeff:3;
    };
}scaleup_dm_uzu_12tap_dering_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dering_edgelevel_gain:4;
        RBus_UInt32  dering_cross_slope:3;
        RBus_UInt32  dering_cross_en:1;
        RBus_UInt32  dering_cross_lowbd:5;
        RBus_UInt32  res1:19;
    };
}scaleup_dm_uzu_12tap_dering_cross_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  dering_h4h12_blend_type:2;
        RBus_UInt32  dering_gap_sidemode:1;
        RBus_UInt32  dering_gap_offset:4;
        RBus_UInt32  dering_gap_center_gain:3;
        RBus_UInt32  dering_gap_side_gain:4;
    };
}scaleup_dm_uzu_gap_dering_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  deringv_v4v8_blend_type:2;
        RBus_UInt32  deringv_gap_sidemode:1;
        RBus_UInt32  deringv_gap_offset:4;
        RBus_UInt32  deringv_gap_center_gain:3;
        RBus_UInt32  deringv_gap_side_gain:4;
    };
}scaleup_dm_uzu_gap_deringv_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  range_side:1;
        RBus_UInt32  range_center:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  v4v8_blend_lowbound:8;
        RBus_UInt32  res2:4;
        RBus_UInt32  v4v8_blend_range:2;
        RBus_UInt32  dering_dbg_mode:2;
        RBus_UInt32  level_maxmin_coeff:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  level_flatness_coeff:3;
        RBus_UInt32  res4:1;
    };
}scaleup_dm_uzu_8tap_deringv_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h8_c_sel:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  v8_c_sel:10;
        RBus_UInt32  res2:6;
    };
}scaleup_dm_uzu_chroma_8tap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  dedistortion_dbg_mode:2;
        RBus_UInt32  dedistortion_slope:4;
        RBus_UInt32  dedistortion_lowbd:6;
        RBus_UInt32  res2:1;
        RBus_UInt32  dedistortion_en:1;
    };
}scaleup_dm_uzu_de_distortion_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start:1;
        RBus_UInt32  conti:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  vcti_en:1;
        RBus_UInt32  vcti_select:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  vcti_gain:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  vcti_type3_thd:6;
        RBus_UInt32  res4:10;
    };
}scaleup_dm_mem_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mem_crc:32;
    };
}scaleup_dm_mem_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_3d_en:1;
        RBus_UInt32  l_auto_cmp_en:1;
        RBus_UInt32  r_auto_cmp_en:1;
        RBus_UInt32  res1:29;
    };
}scaleup_mem_crc_ctr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_r_result:32;
    };
}scaleup_mem_crc_r_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  l_des_crc:32;
    };
}scaleup_mem_l_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  r_des_crc:32;
    };
}scaleup_mem_r_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  l_crc_err_cnt:16;
        RBus_UInt32  r_crc_err_cnt:16;
    };
}scaleup_mem_crc_err_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start:1;
        RBus_UInt32  conti:1;
        RBus_UInt32  ch_sel:1;
        RBus_UInt32  res1:29;
    };
}scaleup_d_uzu_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  uzu_crc:32;
    };
}scaleup_d_uzu_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcti_lpf_mode:1;
        RBus_UInt32  vcti_low_pass_filter_en:1;
        RBus_UInt32  vcti_lpf_hbound1:10;
        RBus_UInt32  vcti_lpf_lbound1:10;
        RBus_UInt32  res1:10;
    };
}scaleup_dm_uzumain_vcti_lpf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c0_cb:8;
        RBus_UInt32  patgen_c0_cr:8;
        RBus_UInt32  patgen_c0_y:8;
        RBus_UInt32  res1:8;
    };
}scaleup_d_uzu_patgen_color0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c1_cb:8;
        RBus_UInt32  patgen_c1_cr:8;
        RBus_UInt32  patgen_c1_y:8;
        RBus_UInt32  res1:8;
    };
}scaleup_d_uzu_patgen_color1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c2_cb:8;
        RBus_UInt32  patgen_c2_cr:8;
        RBus_UInt32  patgen_c2_y:8;
        RBus_UInt32  res1:8;
    };
}scaleup_d_uzu_patgen_color2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c3_cb:8;
        RBus_UInt32  patgen_c3_cr:8;
        RBus_UInt32  patgen_c3_y:8;
        RBus_UInt32  res1:8;
    };
}scaleup_d_uzu_patgen_color3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_width:22;
        RBus_UInt32  res1:2;
        RBus_UInt32  patgen_lflag:1;
        RBus_UInt32  patgen_tog_sel:2;
        RBus_UInt32  patgen_tog_num:5;
    };
}scaleup_d_uzu_patgen_frame_toggle_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_width_1:22;
        RBus_UInt32  res1:2;
        RBus_UInt32  patgen_lflag_1:1;
        RBus_UInt32  res2:7;
    };
}scaleup_d_uzu_patgen_frame_toggle1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_width_2:22;
        RBus_UInt32  res1:2;
        RBus_UInt32  patgen_lflag_2:1;
        RBus_UInt32  res2:7;
    };
}scaleup_d_uzu_patgen_frame_toggle2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_width_3:22;
        RBus_UInt32  res1:2;
        RBus_UInt32  patgen_lflag_3:1;
        RBus_UInt32  res2:7;
    };
}scaleup_d_uzu_patgen_frame_toggle3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  left_vdi:8;
        RBus_UInt32  left_udi:8;
        RBus_UInt32  left_ydi:8;
        RBus_UInt32  res1:8;
    };
}scaleup_left_3d_ptg_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  left_v_limit:8;
        RBus_UInt32  left_h_limit:8;
        RBus_UInt32  left_v_saddr:8;
        RBus_UInt32  left_h_saddr:8;
    };
}scaleup_left_3d_ptg_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  left_vstep:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  left_hstep:6;
        RBus_UInt32  res2:1;
        RBus_UInt32  see_sadr_only_l:1;
        RBus_UInt32  left_vsize:8;
        RBus_UInt32  left_hsize:8;
    };
}scaleup_left_3d_ptg_ctrl5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  right_vdi:8;
        RBus_UInt32  right_udi:8;
        RBus_UInt32  right_ydi:8;
        RBus_UInt32  res1:8;
    };
}scaleup_right_3d_ptg_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  right_v_limit:8;
        RBus_UInt32  right_h_limit:8;
        RBus_UInt32  right_v_saddr:8;
        RBus_UInt32  right_h_saddr:8;
    };
}scaleup_right_3d_ptg_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  right_vstep:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  right_hstep:6;
        RBus_UInt32  res2:1;
        RBus_UInt32  see_sadr_only_r:1;
        RBus_UInt32  right_vsize:8;
        RBus_UInt32  right_hsize:8;
    };
}scaleup_right_3d_ptg_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_bg_vdi:8;
        RBus_UInt32  ptg_bg_udi:8;
        RBus_UInt32  ptg_bg_ydi:8;
        RBus_UInt32  res1:8;
    };
}scaleup_ptg_3d_ctr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  read_en:1;
        RBus_UInt32  write_en:1;
        RBus_UInt32  ch_sel:1;
        RBus_UInt32  cross_bar_en:1;
        RBus_UInt32  res1:28;
    };
}scaleup_accessdata_ctrl_uzu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  startx:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  starty:12;
        RBus_UInt32  res2:4;
    };
}scaleup_accessdata_posctrl_uzu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y00:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  y01:10;
        RBus_UInt32  res2:6;
    };
}scaleup_readdata_data_y1_uzu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y10:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  y11:10;
        RBus_UInt32  res2:6;
    };
}scaleup_readdata_data_y2_uzu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  u00:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  v00:10;
        RBus_UInt32  res2:6;
    };
}scaleup_readdata_data_c1_uzu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  u01:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  v01:10;
        RBus_UInt32  res2:6;
    };
}scaleup_readdata_data_c2_uzu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  u10:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  v10:10;
        RBus_UInt32  res2:6;
    };
}scaleup_readdata_data_c3_uzu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  u11:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  v11:10;
        RBus_UInt32  res2:6;
    };
}scaleup_readdata_data_c4_uzu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y:4;
        RBus_UInt32  u:4;
        RBus_UInt32  v:4;
        RBus_UInt32  vcti_lpf_hbound2:10;
        RBus_UInt32  vcti_lpf_lbound2:10;
    };
}scaleup_writedata_data_uzu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hor_m_back_drop:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  hor_m_front_drop:12;
        RBus_UInt32  res2:4;
    };
}scaleup_dm_uzumain_h_partial_drop_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ver_m_back_drop:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  ver_m_front_drop:11;
        RBus_UInt32  res2:5;
    };
}scaleup_dm_uzumain_v_partial_drop_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  pixel_drop_mode:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  hor_m_back_drop_odd:12;
        RBus_UInt32  hor_m_front_drop_odd:12;
        RBus_UInt32  res3:4;
    };
}scaleup_dm_uzu_partial_drop_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  db_apply:1;
        RBus_UInt32  db_read_level:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  db_write_hold_cnt:4;
        RBus_UInt32  res2:24;
    };
}scaleup_dm_uzu_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  buff_unf:1;
        RBus_UInt32  res1:31;
    };
}scaleup_dm_uzu_wclr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ds_conf_limit:5;
        RBus_UInt32  dummy18029130_11_5:7;
        RBus_UInt32  mag_ang_lpf_ratio:4;
        RBus_UInt32  db_magfilter:4;
        RBus_UInt32  db_mode:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  ds_transang_nearhv:1;
        RBus_UInt32  ds_hlpf_en:1;
        RBus_UInt32  ds_vlpf_en:1;
        RBus_UInt32  ds_phase_en:1;
        RBus_UInt32  ds_method:1;
        RBus_UInt32  directionalscale_en:1;
    };
}scaleup_dm_dir_uzu_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  transang_sec0:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  transang_sec1:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  transang_sec2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  transang_sec3:7;
        RBus_UInt32  res4:1;
    };
}scaleup_dm_dir_uzu_transang1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  transang_step0:4;
        RBus_UInt32  transang_step1:4;
        RBus_UInt32  transang_step2:4;
        RBus_UInt32  transang_step3:4;
        RBus_UInt32  transang_step4:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  transang_sec4:7;
        RBus_UInt32  res2:1;
    };
}scaleup_dm_dir_uzu_transang2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  onepx_step:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  onepx_lowbnd:8;
        RBus_UInt32  onepx_diffstep:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  onepx_sidediffthd:4;
        RBus_UInt32  onepx_centerdiffthd:4;
        RBus_UInt32  onepx_en:1;
        RBus_UInt32  res4:3;
    };
}scaleup_dm_dir_uzu_onepixeldetect_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mag_step:3;
        RBus_UInt32  res1:5;
        RBus_UInt32  mag_lowbnd:8;
        RBus_UInt32  angdiff_step:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  angdiff_lowbnd:6;
        RBus_UInt32  res3:2;
    };
}scaleup_dm_dir_uzu_angmagscore_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  conf_lowbnd:8;
        RBus_UInt32  conf_offset:5;
        RBus_UInt32  conf_step:3;
        RBus_UInt32  res1:4;
        RBus_UInt32  angdiff_step2:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  angdiff_lowbnd2:6;
        RBus_UInt32  res3:2;
    };
}scaleup_dm_dir_uzu_conf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  checkpn_diffrange:5;
        RBus_UInt32  checkpn_diffstep:3;
        RBus_UInt32  checkpn_angstep:3;
        RBus_UInt32  checkpn_en:1;
        RBus_UInt32  checkpn_angrange:4;
        RBus_UInt32  checkhv_diffrange:5;
        RBus_UInt32  checkhv_diffstep:3;
        RBus_UInt32  checkhv_angstep:3;
        RBus_UInt32  checkhv_en:1;
        RBus_UInt32  checkhv_angrange:4;
    };
}scaleup_dm_dir_uzu_anglecheck_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  diaglpf_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  diaglpf_hmn_penalty1:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  diaglpf_hmn_penalty2:6;
        RBus_UInt32  res3:14;
    };
}scaleup_dm_dir_uzu_diaglpf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  diaglpf_ang_lowbd:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  diaglpf_ang_slope:4;
        RBus_UInt32  diaglpf_hmn_lowbd:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  diaglpf_hmn_slope:4;
        RBus_UInt32  res3:8;
    };
}scaleup_dm_dir_uzu_diaglpf_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_tab_sel:4;
        RBus_UInt32  coef_rw_sel:1;
        RBus_UInt32  coef_rw_en:1;
        RBus_UInt32  coef_read_tab_sel:1;
        RBus_UInt32  res1:25;
    };
}scaleup_coef_table_rw_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  coef_write:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  coef_addr:8;
        RBus_UInt32  res3:16;
    };
}scaleup_coef_table_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef1:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  coef0:12;
        RBus_UInt32  res2:4;
    };
}scaleup_coef_table_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef3:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  coef2:12;
        RBus_UInt32  res2:4;
    };
}scaleup_coef_table_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef5:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  coef4:12;
        RBus_UInt32  res2:4;
    };
}scaleup_coef_table_ctl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef7:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  coef6:12;
        RBus_UInt32  res2:4;
    };
}scaleup_coef_table_ctl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef9:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  coef8:12;
        RBus_UInt32  res2:4;
    };
}scaleup_coef_table_ctl_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef11:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  coef10:12;
        RBus_UInt32  res2:4;
    };
}scaleup_coef_table_ctl_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_acc_error:1;
        RBus_UInt32  res1:31;
    };
}scaleup_coef_table_err_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
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
        RBus_UInt32  res1:18;
    };
}scaleup_dm_uzu_bist_0_RBUS;

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
        RBus_UInt32  res1:18;
    };
}scaleup_dm_uzu_bist_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
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
        RBus_UInt32  res1:18;
    };
}scaleup_dm_uzu_bist_3_RBUS;

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
}scaleup_dm_uzu_bist_4_RBUS;

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
        RBus_UInt32  res1:7;
        RBus_UInt32  ls_0:1;
    };
}scaleup_dm_uzu_bist_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  testrwm_0:1;
        RBus_UInt32  testrwm_1:1;
        RBus_UInt32  testrwm_2:1;
        RBus_UInt32  testrwm_3:1;
        RBus_UInt32  testrwm_4:1;
        RBus_UInt32  testrwm_5:1;
        RBus_UInt32  testrwm_6:1;
        RBus_UInt32  res1:25;
    };
}scaleup_dm_uzu_bist_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  test1_0:1;
        RBus_UInt32  test1_1:1;
        RBus_UInt32  test1_2:1;
        RBus_UInt32  test1_3:1;
        RBus_UInt32  test1_4:1;
        RBus_UInt32  test1_5:1;
        RBus_UInt32  test1_6:1;
        RBus_UInt32  test1_7:1;
        RBus_UInt32  test1_8:1;
        RBus_UInt32  test1_9:1;
        RBus_UInt32  test1_10:1;
        RBus_UInt32  test1_11:1;
        RBus_UInt32  test1_12:1;
        RBus_UInt32  test1_13:1;
        RBus_UInt32  res1:18;
    };
}scaleup_dm_uzu_bist_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h_zoom_en:1;
        RBus_UInt32  v_zoom_en:1;
        RBus_UInt32  conv_type:1;
        RBus_UInt32  in_fmt_conv:1;
        RBus_UInt32  odd_inv:1;
        RBus_UInt32  video_comp_en:1;
        RBus_UInt32  in_fmt_dup:1;
        RBus_UInt32  ver_mode_sel:1;
        RBus_UInt32  h_table_sel:1;
        RBus_UInt32  v_table_sel:1;
        RBus_UInt32  res1:13;
        RBus_UInt32  irq_sub_buf_udf_en:1;
        RBus_UInt32  wd_sub_buf_udf_en:1;
        RBus_UInt32  res2:7;
    };
}scaleup_ds_uzu_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hor_factor:20;
        RBus_UInt32  res1:12;
    };
}scaleup_ds_uzu_scale_hor_factor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ver_factor:20;
        RBus_UInt32  res1:12;
    };
}scaleup_ds_uzu_scale_ver_factor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ver_ini:8;
        RBus_UInt32  hor_ini:8;
        RBus_UInt32  res1:16;
    };
}scaleup_ds_uzu_initial_value_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ver_input_size:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  hor_input_size:13;
        RBus_UInt32  res2:3;
    };
}scaleup_ds_uzu_input_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start:1;
        RBus_UInt32  conti:1;
        RBus_UInt32  res1:30;
    };
}scaleup_ds_mem_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mem_crc:32;
    };
}scaleup_ds_mem_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hor_s_back_drop:12;
        RBus_UInt32  hor_s_front_drop:12;
        RBus_UInt32  res1:8;
    };
}scaleup_ds_uzusub_h_partial_drop_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ver_s_back_drop:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  ver_s_front_drop:11;
        RBus_UInt32  res2:5;
    };
}scaleup_ds_uzusub_v_partial_drop_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  db_apply:1;
        RBus_UInt32  db_read_level:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  res1:29;
    };
}scaleup_ds_uzu_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  auto_cmp_en:1;
        RBus_UInt32  res1:31;
    };
}scaleup_ds_mem_crc_ctr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  des_crc:32;
    };
}scaleup_ds_mem_l_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_err_cnt:16;
        RBus_UInt32  res1:16;
    };
}scaleup_ds_mem_crc_err_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  buff_unf:1;
        RBus_UInt32  res1:31;
    };
}scaleup_ds_uzu_wclr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_sel:1;
        RBus_UInt32  patgen_field:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  patgen_mode:3;
        RBus_UInt32  patgen_sync:1;
        RBus_UInt32  res2:24;
    };
}scaleup_ds_uzu_globle_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c0_cb:8;
        RBus_UInt32  patgen_c0_cr:8;
        RBus_UInt32  patgen_c0_y:8;
        RBus_UInt32  res1:8;
    };
}scaleup_ds_uzu_patgen_color0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c1_cb:8;
        RBus_UInt32  patgen_c1_cr:8;
        RBus_UInt32  patgen_c1_y:8;
        RBus_UInt32  res1:8;
    };
}scaleup_ds_uzu_patgen_color1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c2_cb:8;
        RBus_UInt32  patgen_c2_cr:8;
        RBus_UInt32  patgen_c2_y:8;
        RBus_UInt32  res1:8;
    };
}scaleup_ds_uzu_patgen_color2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c3_cb:8;
        RBus_UInt32  patgen_c3_cr:8;
        RBus_UInt32  patgen_c3_y:8;
        RBus_UInt32  res1:8;
    };
}scaleup_ds_uzu_patgen_color3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_width:22;
        RBus_UInt32  res1:3;
        RBus_UInt32  patgen_tog_sel:2;
        RBus_UInt32  patgen_tog_num:5;
    };
}scaleup_ds_uzu_patgen_frame_toggle_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_width_1:22;
        RBus_UInt32  res1:10;
    };
}scaleup_ds_uzu_patgen_frame_toggle1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_width_2:22;
        RBus_UInt32  res1:10;
    };
}scaleup_ds_uzu_patgen_frame_toggle2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_width_3:22;
        RBus_UInt32  res1:10;
    };
}scaleup_ds_uzu_patgen_frame_toggle3_RBUS;




#endif 


#endif 
