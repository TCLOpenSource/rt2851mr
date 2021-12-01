/**
* @file Merlin5_MEMC_IPPRE
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_IPPRE_REG_H_
#define _RBUS_IPPRE_REG_H_

#include "rbus_types.h"



//  IPPRE Register Address
#define  IPPRE_IPPRE_00                                                         0x18099100
#define  IPPRE_IPPRE_00_reg_addr                                                 "0xB8099100"
#define  IPPRE_IPPRE_00_reg                                                      0xB8099100
#define  IPPRE_IPPRE_00_inst_addr                                                "0x0000"
#define  set_IPPRE_IPPRE_00_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_00_reg)=data)
#define  get_IPPRE_IPPRE_00_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_00_reg))
#define  IPPRE_IPPRE_00_inp_cursor_color_shift                                   (29)
#define  IPPRE_IPPRE_00_inp_cursor_v_shift                                       (16)
#define  IPPRE_IPPRE_00_inp_cursor_en_shift                                      (15)
#define  IPPRE_IPPRE_00_inp_cursor_3d_flag_shift                                 (14)
#define  IPPRE_IPPRE_00_inp_cursor_show_shift                                    (13)
#define  IPPRE_IPPRE_00_inp_cursor_h_shift                                       (0)
#define  IPPRE_IPPRE_00_inp_cursor_color_mask                                    (0xE0000000)
#define  IPPRE_IPPRE_00_inp_cursor_v_mask                                        (0x1FFF0000)
#define  IPPRE_IPPRE_00_inp_cursor_en_mask                                       (0x00008000)
#define  IPPRE_IPPRE_00_inp_cursor_3d_flag_mask                                  (0x00004000)
#define  IPPRE_IPPRE_00_inp_cursor_show_mask                                     (0x00002000)
#define  IPPRE_IPPRE_00_inp_cursor_h_mask                                        (0x00001FFF)
#define  IPPRE_IPPRE_00_inp_cursor_color(data)                                   (0xE0000000&((data)<<29))
#define  IPPRE_IPPRE_00_inp_cursor_v(data)                                       (0x1FFF0000&((data)<<16))
#define  IPPRE_IPPRE_00_inp_cursor_en(data)                                      (0x00008000&((data)<<15))
#define  IPPRE_IPPRE_00_inp_cursor_3d_flag(data)                                 (0x00004000&((data)<<14))
#define  IPPRE_IPPRE_00_inp_cursor_show(data)                                    (0x00002000&((data)<<13))
#define  IPPRE_IPPRE_00_inp_cursor_h(data)                                       (0x00001FFF&(data))
#define  IPPRE_IPPRE_00_get_inp_cursor_color(data)                               ((0xE0000000&(data))>>29)
#define  IPPRE_IPPRE_00_get_inp_cursor_v(data)                                   ((0x1FFF0000&(data))>>16)
#define  IPPRE_IPPRE_00_get_inp_cursor_en(data)                                  ((0x00008000&(data))>>15)
#define  IPPRE_IPPRE_00_get_inp_cursor_3d_flag(data)                             ((0x00004000&(data))>>14)
#define  IPPRE_IPPRE_00_get_inp_cursor_show(data)                                ((0x00002000&(data))>>13)
#define  IPPRE_IPPRE_00_get_inp_cursor_h(data)                                   (0x00001FFF&(data))

#define  IPPRE_IPPRE_04                                                         0x18099104
#define  IPPRE_IPPRE_04_reg_addr                                                 "0xB8099104"
#define  IPPRE_IPPRE_04_reg                                                      0xB8099104
#define  IPPRE_IPPRE_04_inst_addr                                                "0x0001"
#define  set_IPPRE_IPPRE_04_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_04_reg)=data)
#define  get_IPPRE_IPPRE_04_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_04_reg))
#define  IPPRE_IPPRE_04_dummy04_shift                                            (27)
#define  IPPRE_IPPRE_04_inp_cursor_src_3d_en_shift                               (26)
#define  IPPRE_IPPRE_04_kmc_blend_uv_mode_shift                                  (24)
#define  IPPRE_IPPRE_04_kmc_blend_uv_alpha_shift                                 (16)
#define  IPPRE_IPPRE_04_ippre_444to422_mode_shift                                (14)
#define  IPPRE_IPPRE_04_bbd_data_sel_shift                                       (13)
#define  IPPRE_IPPRE_04_kmc_blend_y_bypass_shift                                 (12)
#define  IPPRE_IPPRE_04_kmc_blend_y_alpha_shift                                  (4)
#define  IPPRE_IPPRE_04_uv_odd_shift                                             (3)
#define  IPPRE_IPPRE_04_ippre_444to422_en_shift                                  (2)
#define  IPPRE_IPPRE_04_csc_cursor_sel_shift                                     (1)
#define  IPPRE_IPPRE_04_patt_cursor_sel_shift                                    (0)
#define  IPPRE_IPPRE_04_dummy04_mask                                             (0xF8000000)
#define  IPPRE_IPPRE_04_inp_cursor_src_3d_en_mask                                (0x04000000)
#define  IPPRE_IPPRE_04_kmc_blend_uv_mode_mask                                   (0x03000000)
#define  IPPRE_IPPRE_04_kmc_blend_uv_alpha_mask                                  (0x00FF0000)
#define  IPPRE_IPPRE_04_ippre_444to422_mode_mask                                 (0x0000C000)
#define  IPPRE_IPPRE_04_bbd_data_sel_mask                                        (0x00002000)
#define  IPPRE_IPPRE_04_kmc_blend_y_bypass_mask                                  (0x00001000)
#define  IPPRE_IPPRE_04_kmc_blend_y_alpha_mask                                   (0x00000FF0)
#define  IPPRE_IPPRE_04_uv_odd_mask                                              (0x00000008)
#define  IPPRE_IPPRE_04_ippre_444to422_en_mask                                   (0x00000004)
#define  IPPRE_IPPRE_04_csc_cursor_sel_mask                                      (0x00000002)
#define  IPPRE_IPPRE_04_patt_cursor_sel_mask                                     (0x00000001)
#define  IPPRE_IPPRE_04_dummy04(data)                                            (0xF8000000&((data)<<27))
#define  IPPRE_IPPRE_04_inp_cursor_src_3d_en(data)                               (0x04000000&((data)<<26))
#define  IPPRE_IPPRE_04_kmc_blend_uv_mode(data)                                  (0x03000000&((data)<<24))
#define  IPPRE_IPPRE_04_kmc_blend_uv_alpha(data)                                 (0x00FF0000&((data)<<16))
#define  IPPRE_IPPRE_04_ippre_444to422_mode(data)                                (0x0000C000&((data)<<14))
#define  IPPRE_IPPRE_04_bbd_data_sel(data)                                       (0x00002000&((data)<<13))
#define  IPPRE_IPPRE_04_kmc_blend_y_bypass(data)                                 (0x00001000&((data)<<12))
#define  IPPRE_IPPRE_04_kmc_blend_y_alpha(data)                                  (0x00000FF0&((data)<<4))
#define  IPPRE_IPPRE_04_uv_odd(data)                                             (0x00000008&((data)<<3))
#define  IPPRE_IPPRE_04_ippre_444to422_en(data)                                  (0x00000004&((data)<<2))
#define  IPPRE_IPPRE_04_csc_cursor_sel(data)                                     (0x00000002&((data)<<1))
#define  IPPRE_IPPRE_04_patt_cursor_sel(data)                                    (0x00000001&(data))
#define  IPPRE_IPPRE_04_get_dummy04(data)                                        ((0xF8000000&(data))>>27)
#define  IPPRE_IPPRE_04_get_inp_cursor_src_3d_en(data)                           ((0x04000000&(data))>>26)
#define  IPPRE_IPPRE_04_get_kmc_blend_uv_mode(data)                              ((0x03000000&(data))>>24)
#define  IPPRE_IPPRE_04_get_kmc_blend_uv_alpha(data)                             ((0x00FF0000&(data))>>16)
#define  IPPRE_IPPRE_04_get_ippre_444to422_mode(data)                            ((0x0000C000&(data))>>14)
#define  IPPRE_IPPRE_04_get_bbd_data_sel(data)                                   ((0x00002000&(data))>>13)
#define  IPPRE_IPPRE_04_get_kmc_blend_y_bypass(data)                             ((0x00001000&(data))>>12)
#define  IPPRE_IPPRE_04_get_kmc_blend_y_alpha(data)                              ((0x00000FF0&(data))>>4)
#define  IPPRE_IPPRE_04_get_uv_odd(data)                                         ((0x00000008&(data))>>3)
#define  IPPRE_IPPRE_04_get_ippre_444to422_en(data)                              ((0x00000004&(data))>>2)
#define  IPPRE_IPPRE_04_get_csc_cursor_sel(data)                                 ((0x00000002&(data))>>1)
#define  IPPRE_IPPRE_04_get_patt_cursor_sel(data)                                (0x00000001&(data))

#define  IPPRE_IPPRE_08                                                         0x18099108
#define  IPPRE_IPPRE_08_reg_addr                                                 "0xB8099108"
#define  IPPRE_IPPRE_08_reg                                                      0xB8099108
#define  IPPRE_IPPRE_08_inst_addr                                                "0x0002"
#define  set_IPPRE_IPPRE_08_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_08_reg)=data)
#define  get_IPPRE_IPPRE_08_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_08_reg))
#define  IPPRE_IPPRE_08_dummy08_shift                                            (28)
#define  IPPRE_IPPRE_08_ippre_retiming_dummy_num_shift                           (24)
#define  IPPRE_IPPRE_08_ippre_retiming_hact_shift                                (12)
#define  IPPRE_IPPRE_08_ippre_retiming_vact_shift                                (0)
#define  IPPRE_IPPRE_08_dummy08_mask                                             (0xF0000000)
#define  IPPRE_IPPRE_08_ippre_retiming_dummy_num_mask                            (0x0F000000)
#define  IPPRE_IPPRE_08_ippre_retiming_hact_mask                                 (0x00FFF000)
#define  IPPRE_IPPRE_08_ippre_retiming_vact_mask                                 (0x00000FFF)
#define  IPPRE_IPPRE_08_dummy08(data)                                            (0xF0000000&((data)<<28))
#define  IPPRE_IPPRE_08_ippre_retiming_dummy_num(data)                           (0x0F000000&((data)<<24))
#define  IPPRE_IPPRE_08_ippre_retiming_hact(data)                                (0x00FFF000&((data)<<12))
#define  IPPRE_IPPRE_08_ippre_retiming_vact(data)                                (0x00000FFF&(data))
#define  IPPRE_IPPRE_08_get_dummy08(data)                                        ((0xF0000000&(data))>>28)
#define  IPPRE_IPPRE_08_get_ippre_retiming_dummy_num(data)                       ((0x0F000000&(data))>>24)
#define  IPPRE_IPPRE_08_get_ippre_retiming_hact(data)                            ((0x00FFF000&(data))>>12)
#define  IPPRE_IPPRE_08_get_ippre_retiming_vact(data)                            (0x00000FFF&(data))

#define  IPPRE_IPPRE_0C                                                         0x1809910C
#define  IPPRE_IPPRE_0C_reg_addr                                                 "0xB809910C"
#define  IPPRE_IPPRE_0C_reg                                                      0xB809910C
#define  IPPRE_IPPRE_0C_inst_addr                                                "0x0003"
#define  set_IPPRE_IPPRE_0C_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_0C_reg)=data)
#define  get_IPPRE_IPPRE_0C_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_0C_reg))
#define  IPPRE_IPPRE_0C_dummy0c_shift                                            (19)
#define  IPPRE_IPPRE_0C_kmc_blend_logo_uv_mode_shift                             (17)
#define  IPPRE_IPPRE_0C_kmc_blend_logo_uv_alpha_shift                            (9)
#define  IPPRE_IPPRE_0C_kmc_blend_logo_y_bypass_shift                            (8)
#define  IPPRE_IPPRE_0C_kmc_blend_logo_y_alpha_shift                             (0)
#define  IPPRE_IPPRE_0C_dummy0c_mask                                             (0xFFF80000)
#define  IPPRE_IPPRE_0C_kmc_blend_logo_uv_mode_mask                              (0x00060000)
#define  IPPRE_IPPRE_0C_kmc_blend_logo_uv_alpha_mask                             (0x0001FE00)
#define  IPPRE_IPPRE_0C_kmc_blend_logo_y_bypass_mask                             (0x00000100)
#define  IPPRE_IPPRE_0C_kmc_blend_logo_y_alpha_mask                              (0x000000FF)
#define  IPPRE_IPPRE_0C_dummy0c(data)                                            (0xFFF80000&((data)<<19))
#define  IPPRE_IPPRE_0C_kmc_blend_logo_uv_mode(data)                             (0x00060000&((data)<<17))
#define  IPPRE_IPPRE_0C_kmc_blend_logo_uv_alpha(data)                            (0x0001FE00&((data)<<9))
#define  IPPRE_IPPRE_0C_kmc_blend_logo_y_bypass(data)                            (0x00000100&((data)<<8))
#define  IPPRE_IPPRE_0C_kmc_blend_logo_y_alpha(data)                             (0x000000FF&(data))
#define  IPPRE_IPPRE_0C_get_dummy0c(data)                                        ((0xFFF80000&(data))>>19)
#define  IPPRE_IPPRE_0C_get_kmc_blend_logo_uv_mode(data)                         ((0x00060000&(data))>>17)
#define  IPPRE_IPPRE_0C_get_kmc_blend_logo_uv_alpha(data)                        ((0x0001FE00&(data))>>9)
#define  IPPRE_IPPRE_0C_get_kmc_blend_logo_y_bypass(data)                        ((0x00000100&(data))>>8)
#define  IPPRE_IPPRE_0C_get_kmc_blend_logo_y_alpha(data)                         (0x000000FF&(data))

#define  IPPRE_IPPRE_10                                                         0x18099110
#define  IPPRE_IPPRE_10_reg_addr                                                 "0xB8099110"
#define  IPPRE_IPPRE_10_reg                                                      0xB8099110
#define  IPPRE_IPPRE_10_inst_addr                                                "0x0004"
#define  set_IPPRE_IPPRE_10_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_10_reg)=data)
#define  get_IPPRE_IPPRE_10_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_10_reg))
#define  IPPRE_IPPRE_10_dummy10_2_shift                                          (29)
#define  IPPRE_IPPRE_10_patt_vact_shift                                          (16)
#define  IPPRE_IPPRE_10_dummy10_shift                                            (12)
#define  IPPRE_IPPRE_10_patt_hact_shift                                          (0)
#define  IPPRE_IPPRE_10_dummy10_2_mask                                           (0xE0000000)
#define  IPPRE_IPPRE_10_patt_vact_mask                                           (0x1FFF0000)
#define  IPPRE_IPPRE_10_dummy10_mask                                             (0x0000F000)
#define  IPPRE_IPPRE_10_patt_hact_mask                                           (0x00000FFF)
#define  IPPRE_IPPRE_10_dummy10_2(data)                                          (0xE0000000&((data)<<29))
#define  IPPRE_IPPRE_10_patt_vact(data)                                          (0x1FFF0000&((data)<<16))
#define  IPPRE_IPPRE_10_dummy10(data)                                            (0x0000F000&((data)<<12))
#define  IPPRE_IPPRE_10_patt_hact(data)                                          (0x00000FFF&(data))
#define  IPPRE_IPPRE_10_get_dummy10_2(data)                                      ((0xE0000000&(data))>>29)
#define  IPPRE_IPPRE_10_get_patt_vact(data)                                      ((0x1FFF0000&(data))>>16)
#define  IPPRE_IPPRE_10_get_dummy10(data)                                        ((0x0000F000&(data))>>12)
#define  IPPRE_IPPRE_10_get_patt_hact(data)                                      (0x00000FFF&(data))

#define  IPPRE_IPPRE_14                                                         0x18099114
#define  IPPRE_IPPRE_14_reg_addr                                                 "0xB8099114"
#define  IPPRE_IPPRE_14_reg                                                      0xB8099114
#define  IPPRE_IPPRE_14_inst_addr                                                "0x0005"
#define  set_IPPRE_IPPRE_14_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_14_reg)=data)
#define  get_IPPRE_IPPRE_14_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_14_reg))
#define  IPPRE_IPPRE_14_dummy14_2_shift                                          (29)
#define  IPPRE_IPPRE_14_patt_vtotal_shift                                        (16)
#define  IPPRE_IPPRE_14_dummy14_shift                                            (12)
#define  IPPRE_IPPRE_14_patt_htotal_shift                                        (0)
#define  IPPRE_IPPRE_14_dummy14_2_mask                                           (0xE0000000)
#define  IPPRE_IPPRE_14_patt_vtotal_mask                                         (0x1FFF0000)
#define  IPPRE_IPPRE_14_dummy14_mask                                             (0x0000F000)
#define  IPPRE_IPPRE_14_patt_htotal_mask                                         (0x00000FFF)
#define  IPPRE_IPPRE_14_dummy14_2(data)                                          (0xE0000000&((data)<<29))
#define  IPPRE_IPPRE_14_patt_vtotal(data)                                        (0x1FFF0000&((data)<<16))
#define  IPPRE_IPPRE_14_dummy14(data)                                            (0x0000F000&((data)<<12))
#define  IPPRE_IPPRE_14_patt_htotal(data)                                        (0x00000FFF&(data))
#define  IPPRE_IPPRE_14_get_dummy14_2(data)                                      ((0xE0000000&(data))>>29)
#define  IPPRE_IPPRE_14_get_patt_vtotal(data)                                    ((0x1FFF0000&(data))>>16)
#define  IPPRE_IPPRE_14_get_dummy14(data)                                        ((0x0000F000&(data))>>12)
#define  IPPRE_IPPRE_14_get_patt_htotal(data)                                    (0x00000FFF&(data))

#define  IPPRE_IPPRE_18                                                         0x18099118
#define  IPPRE_IPPRE_18_reg_addr                                                 "0xB8099118"
#define  IPPRE_IPPRE_18_reg                                                      0xB8099118
#define  IPPRE_IPPRE_18_inst_addr                                                "0x0006"
#define  set_IPPRE_IPPRE_18_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_18_reg)=data)
#define  get_IPPRE_IPPRE_18_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_18_reg))
#define  IPPRE_IPPRE_18_ippre_444to422_coef_shift                                (0)
#define  IPPRE_IPPRE_18_ippre_444to422_coef_mask                                 (0xFFFFFFFF)
#define  IPPRE_IPPRE_18_ippre_444to422_coef(data)                                (0xFFFFFFFF&(data))
#define  IPPRE_IPPRE_18_get_ippre_444to422_coef(data)                            (0xFFFFFFFF&(data))

#define  IPPRE_IPPRE_1C                                                         0x1809911C
#define  IPPRE_IPPRE_1C_reg_addr                                                 "0xB809911C"
#define  IPPRE_IPPRE_1C_reg                                                      0xB809911C
#define  IPPRE_IPPRE_1C_inst_addr                                                "0x0007"
#define  set_IPPRE_IPPRE_1C_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_1C_reg)=data)
#define  get_IPPRE_IPPRE_1C_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_1C_reg))
#define  IPPRE_IPPRE_1C_dummy1c_shift                                            (24)
#define  IPPRE_IPPRE_1C_ippre_444to422_coef1_shift                               (0)
#define  IPPRE_IPPRE_1C_dummy1c_mask                                             (0xFF000000)
#define  IPPRE_IPPRE_1C_ippre_444to422_coef1_mask                                (0x00FFFFFF)
#define  IPPRE_IPPRE_1C_dummy1c(data)                                            (0xFF000000&((data)<<24))
#define  IPPRE_IPPRE_1C_ippre_444to422_coef1(data)                               (0x00FFFFFF&(data))
#define  IPPRE_IPPRE_1C_get_dummy1c(data)                                        ((0xFF000000&(data))>>24)
#define  IPPRE_IPPRE_1C_get_ippre_444to422_coef1(data)                           (0x00FFFFFF&(data))

#define  IPPRE_IPPRE_20                                                         0x18099120
#define  IPPRE_IPPRE_20_reg_addr                                                 "0xB8099120"
#define  IPPRE_IPPRE_20_reg                                                      0xB8099120
#define  IPPRE_IPPRE_20_inst_addr                                                "0x0008"
#define  set_IPPRE_IPPRE_20_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_20_reg)=data)
#define  get_IPPRE_IPPRE_20_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_20_reg))
#define  IPPRE_IPPRE_20_patt_hold_time_shift                                     (16)
#define  IPPRE_IPPRE_20_patt_type_1_shift                                        (12)
#define  IPPRE_IPPRE_20_patt_type_0_shift                                        (8)
#define  IPPRE_IPPRE_20_patt_enable_shift                                        (7)
#define  IPPRE_IPPRE_20_patt_mode_shift                                          (5)
#define  IPPRE_IPPRE_20_patt_move_en_shift                                       (4)
#define  IPPRE_IPPRE_20_patt_move_en_1_shift                                     (3)
#define  IPPRE_IPPRE_20_patt_3d_fs_lr_inv_shift                                  (2)
#define  IPPRE_IPPRE_20_freerun_ctrl_enable_shift                                (0)
#define  IPPRE_IPPRE_20_patt_hold_time_mask                                      (0xFFFF0000)
#define  IPPRE_IPPRE_20_patt_type_1_mask                                         (0x0000F000)
#define  IPPRE_IPPRE_20_patt_type_0_mask                                         (0x00000F00)
#define  IPPRE_IPPRE_20_patt_enable_mask                                         (0x00000080)
#define  IPPRE_IPPRE_20_patt_mode_mask                                           (0x00000060)
#define  IPPRE_IPPRE_20_patt_move_en_mask                                        (0x00000010)
#define  IPPRE_IPPRE_20_patt_move_en_1_mask                                      (0x00000008)
#define  IPPRE_IPPRE_20_patt_3d_fs_lr_inv_mask                                   (0x00000004)
#define  IPPRE_IPPRE_20_freerun_ctrl_enable_mask                                 (0x00000001)
#define  IPPRE_IPPRE_20_patt_hold_time(data)                                     (0xFFFF0000&((data)<<16))
#define  IPPRE_IPPRE_20_patt_type_1(data)                                        (0x0000F000&((data)<<12))
#define  IPPRE_IPPRE_20_patt_type_0(data)                                        (0x00000F00&((data)<<8))
#define  IPPRE_IPPRE_20_patt_enable(data)                                        (0x00000080&((data)<<7))
#define  IPPRE_IPPRE_20_patt_mode(data)                                          (0x00000060&((data)<<5))
#define  IPPRE_IPPRE_20_patt_move_en(data)                                       (0x00000010&((data)<<4))
#define  IPPRE_IPPRE_20_patt_move_en_1(data)                                     (0x00000008&((data)<<3))
#define  IPPRE_IPPRE_20_patt_3d_fs_lr_inv(data)                                  (0x00000004&((data)<<2))
#define  IPPRE_IPPRE_20_freerun_ctrl_enable(data)                                (0x00000001&(data))
#define  IPPRE_IPPRE_20_get_patt_hold_time(data)                                 ((0xFFFF0000&(data))>>16)
#define  IPPRE_IPPRE_20_get_patt_type_1(data)                                    ((0x0000F000&(data))>>12)
#define  IPPRE_IPPRE_20_get_patt_type_0(data)                                    ((0x00000F00&(data))>>8)
#define  IPPRE_IPPRE_20_get_patt_enable(data)                                    ((0x00000080&(data))>>7)
#define  IPPRE_IPPRE_20_get_patt_mode(data)                                      ((0x00000060&(data))>>5)
#define  IPPRE_IPPRE_20_get_patt_move_en(data)                                   ((0x00000010&(data))>>4)
#define  IPPRE_IPPRE_20_get_patt_move_en_1(data)                                 ((0x00000008&(data))>>3)
#define  IPPRE_IPPRE_20_get_patt_3d_fs_lr_inv(data)                              ((0x00000004&(data))>>2)
#define  IPPRE_IPPRE_20_get_freerun_ctrl_enable(data)                            (0x00000001&(data))

#define  IPPRE_IPPRE_24                                                         0x18099124
#define  IPPRE_IPPRE_24_reg_addr                                                 "0xB8099124"
#define  IPPRE_IPPRE_24_reg                                                      0xB8099124
#define  IPPRE_IPPRE_24_inst_addr                                                "0x0009"
#define  set_IPPRE_IPPRE_24_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_24_reg)=data)
#define  get_IPPRE_IPPRE_24_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_24_reg))
#define  IPPRE_IPPRE_24_loop_patt_sequency_shift                                 (0)
#define  IPPRE_IPPRE_24_loop_patt_sequency_mask                                  (0xFFFFFFFF)
#define  IPPRE_IPPRE_24_loop_patt_sequency(data)                                 (0xFFFFFFFF&(data))
#define  IPPRE_IPPRE_24_get_loop_patt_sequency(data)                             (0xFFFFFFFF&(data))

#define  IPPRE_IPPRE_28                                                         0x18099128
#define  IPPRE_IPPRE_28_reg_addr                                                 "0xB8099128"
#define  IPPRE_IPPRE_28_reg                                                      0xB8099128
#define  IPPRE_IPPRE_28_inst_addr                                                "0x000A"
#define  set_IPPRE_IPPRE_28_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_28_reg)=data)
#define  get_IPPRE_IPPRE_28_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_28_reg))
#define  IPPRE_IPPRE_28_patt_para_0_shift                                        (0)
#define  IPPRE_IPPRE_28_patt_para_0_mask                                         (0xFFFFFFFF)
#define  IPPRE_IPPRE_28_patt_para_0(data)                                        (0xFFFFFFFF&(data))
#define  IPPRE_IPPRE_28_get_patt_para_0(data)                                    (0xFFFFFFFF&(data))

#define  IPPRE_IPPRE_2C                                                         0x1809912C
#define  IPPRE_IPPRE_2C_reg_addr                                                 "0xB809912C"
#define  IPPRE_IPPRE_2C_reg                                                      0xB809912C
#define  IPPRE_IPPRE_2C_inst_addr                                                "0x000B"
#define  set_IPPRE_IPPRE_2C_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_2C_reg)=data)
#define  get_IPPRE_IPPRE_2C_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_2C_reg))
#define  IPPRE_IPPRE_2C_patt_para_1_shift                                        (0)
#define  IPPRE_IPPRE_2C_patt_para_1_mask                                         (0xFFFFFFFF)
#define  IPPRE_IPPRE_2C_patt_para_1(data)                                        (0xFFFFFFFF&(data))
#define  IPPRE_IPPRE_2C_get_patt_para_1(data)                                    (0xFFFFFFFF&(data))

#define  IPPRE_IPPRE_30                                                         0x18099130
#define  IPPRE_IPPRE_30_reg_addr                                                 "0xB8099130"
#define  IPPRE_IPPRE_30_reg                                                      0xB8099130
#define  IPPRE_IPPRE_30_inst_addr                                                "0x000C"
#define  set_IPPRE_IPPRE_30_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_30_reg)=data)
#define  get_IPPRE_IPPRE_30_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_30_reg))
#define  IPPRE_IPPRE_30_loop_patt_para0_shift                                    (0)
#define  IPPRE_IPPRE_30_loop_patt_para0_mask                                     (0xFFFFFFFF)
#define  IPPRE_IPPRE_30_loop_patt_para0(data)                                    (0xFFFFFFFF&(data))
#define  IPPRE_IPPRE_30_get_loop_patt_para0(data)                                (0xFFFFFFFF&(data))

#define  IPPRE_IPPRE_34                                                         0x18099134
#define  IPPRE_IPPRE_34_reg_addr                                                 "0xB8099134"
#define  IPPRE_IPPRE_34_reg                                                      0xB8099134
#define  IPPRE_IPPRE_34_inst_addr                                                "0x000D"
#define  set_IPPRE_IPPRE_34_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_34_reg)=data)
#define  get_IPPRE_IPPRE_34_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_34_reg))
#define  IPPRE_IPPRE_34_loop_patt_para1_shift                                    (0)
#define  IPPRE_IPPRE_34_loop_patt_para1_mask                                     (0xFFFFFFFF)
#define  IPPRE_IPPRE_34_loop_patt_para1(data)                                    (0xFFFFFFFF&(data))
#define  IPPRE_IPPRE_34_get_loop_patt_para1(data)                                (0xFFFFFFFF&(data))

#define  IPPRE_IPPRE_38                                                         0x18099138
#define  IPPRE_IPPRE_38_reg_addr                                                 "0xB8099138"
#define  IPPRE_IPPRE_38_reg                                                      0xB8099138
#define  IPPRE_IPPRE_38_inst_addr                                                "0x000E"
#define  set_IPPRE_IPPRE_38_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_38_reg)=data)
#define  get_IPPRE_IPPRE_38_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_38_reg))
#define  IPPRE_IPPRE_38_loop_patt_para2_shift                                    (0)
#define  IPPRE_IPPRE_38_loop_patt_para2_mask                                     (0xFFFFFFFF)
#define  IPPRE_IPPRE_38_loop_patt_para2(data)                                    (0xFFFFFFFF&(data))
#define  IPPRE_IPPRE_38_get_loop_patt_para2(data)                                (0xFFFFFFFF&(data))

#define  IPPRE_IPPRE_3C                                                         0x1809913C
#define  IPPRE_IPPRE_3C_reg_addr                                                 "0xB809913C"
#define  IPPRE_IPPRE_3C_reg                                                      0xB809913C
#define  IPPRE_IPPRE_3C_inst_addr                                                "0x000F"
#define  set_IPPRE_IPPRE_3C_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_3C_reg)=data)
#define  get_IPPRE_IPPRE_3C_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_3C_reg))
#define  IPPRE_IPPRE_3C_loop_patt_para3_shift                                    (0)
#define  IPPRE_IPPRE_3C_loop_patt_para3_mask                                     (0xFFFFFFFF)
#define  IPPRE_IPPRE_3C_loop_patt_para3(data)                                    (0xFFFFFFFF&(data))
#define  IPPRE_IPPRE_3C_get_loop_patt_para3(data)                                (0xFFFFFFFF&(data))

#define  IPPRE_IPPRE_40                                                         0x18099140
#define  IPPRE_IPPRE_40_reg_addr                                                 "0xB8099140"
#define  IPPRE_IPPRE_40_reg                                                      0xB8099140
#define  IPPRE_IPPRE_40_inst_addr                                                "0x0010"
#define  set_IPPRE_IPPRE_40_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_40_reg)=data)
#define  get_IPPRE_IPPRE_40_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_40_reg))
#define  IPPRE_IPPRE_40_loop_patt_para4_shift                                    (0)
#define  IPPRE_IPPRE_40_loop_patt_para4_mask                                     (0xFFFFFFFF)
#define  IPPRE_IPPRE_40_loop_patt_para4(data)                                    (0xFFFFFFFF&(data))
#define  IPPRE_IPPRE_40_get_loop_patt_para4(data)                                (0xFFFFFFFF&(data))

#define  IPPRE_IPPRE_44                                                         0x18099144
#define  IPPRE_IPPRE_44_reg_addr                                                 "0xB8099144"
#define  IPPRE_IPPRE_44_reg                                                      0xB8099144
#define  IPPRE_IPPRE_44_inst_addr                                                "0x0011"
#define  set_IPPRE_IPPRE_44_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_44_reg)=data)
#define  get_IPPRE_IPPRE_44_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_44_reg))
#define  IPPRE_IPPRE_44_loop_patt_para5_shift                                    (0)
#define  IPPRE_IPPRE_44_loop_patt_para5_mask                                     (0xFFFFFFFF)
#define  IPPRE_IPPRE_44_loop_patt_para5(data)                                    (0xFFFFFFFF&(data))
#define  IPPRE_IPPRE_44_get_loop_patt_para5(data)                                (0xFFFFFFFF&(data))

#define  IPPRE_IPPRE_48                                                         0x18099148
#define  IPPRE_IPPRE_48_reg_addr                                                 "0xB8099148"
#define  IPPRE_IPPRE_48_reg                                                      0xB8099148
#define  IPPRE_IPPRE_48_inst_addr                                                "0x0012"
#define  set_IPPRE_IPPRE_48_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_48_reg)=data)
#define  get_IPPRE_IPPRE_48_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_48_reg))
#define  IPPRE_IPPRE_48_loop_patt_para6_shift                                    (0)
#define  IPPRE_IPPRE_48_loop_patt_para6_mask                                     (0xFFFFFFFF)
#define  IPPRE_IPPRE_48_loop_patt_para6(data)                                    (0xFFFFFFFF&(data))
#define  IPPRE_IPPRE_48_get_loop_patt_para6(data)                                (0xFFFFFFFF&(data))

#define  IPPRE_IPPRE_4C                                                         0x1809914C
#define  IPPRE_IPPRE_4C_reg_addr                                                 "0xB809914C"
#define  IPPRE_IPPRE_4C_reg                                                      0xB809914C
#define  IPPRE_IPPRE_4C_inst_addr                                                "0x0013"
#define  set_IPPRE_IPPRE_4C_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_4C_reg)=data)
#define  get_IPPRE_IPPRE_4C_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_4C_reg))
#define  IPPRE_IPPRE_4C_loop_patt_para7_shift                                    (0)
#define  IPPRE_IPPRE_4C_loop_patt_para7_mask                                     (0xFFFFFFFF)
#define  IPPRE_IPPRE_4C_loop_patt_para7(data)                                    (0xFFFFFFFF&(data))
#define  IPPRE_IPPRE_4C_get_loop_patt_para7(data)                                (0xFFFFFFFF&(data))

#define  IPPRE_IPPRE_50                                                         0x18099150
#define  IPPRE_IPPRE_50_reg_addr                                                 "0xB8099150"
#define  IPPRE_IPPRE_50_reg                                                      0xB8099150
#define  IPPRE_IPPRE_50_inst_addr                                                "0x0014"
#define  set_IPPRE_IPPRE_50_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_50_reg)=data)
#define  get_IPPRE_IPPRE_50_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_50_reg))
#define  IPPRE_IPPRE_50_speed_h_cadence_shift                                    (24)
#define  IPPRE_IPPRE_50_speed_v_shift                                            (16)
#define  IPPRE_IPPRE_50_speed_h_shift                                            (8)
#define  IPPRE_IPPRE_50_scroll_bar_mode_shift                                    (7)
#define  IPPRE_IPPRE_50_scroll_bar_en_shift                                      (6)
#define  IPPRE_IPPRE_50_loop_restart_mode_shift                                  (5)
#define  IPPRE_IPPRE_50_loop_stop_shift                                          (4)
#define  IPPRE_IPPRE_50_loop_number_shift                                        (0)
#define  IPPRE_IPPRE_50_speed_h_cadence_mask                                     (0xFF000000)
#define  IPPRE_IPPRE_50_speed_v_mask                                             (0x00FF0000)
#define  IPPRE_IPPRE_50_speed_h_mask                                             (0x0000FF00)
#define  IPPRE_IPPRE_50_scroll_bar_mode_mask                                     (0x00000080)
#define  IPPRE_IPPRE_50_scroll_bar_en_mask                                       (0x00000040)
#define  IPPRE_IPPRE_50_loop_restart_mode_mask                                   (0x00000020)
#define  IPPRE_IPPRE_50_loop_stop_mask                                           (0x00000010)
#define  IPPRE_IPPRE_50_loop_number_mask                                         (0x0000000F)
#define  IPPRE_IPPRE_50_speed_h_cadence(data)                                    (0xFF000000&((data)<<24))
#define  IPPRE_IPPRE_50_speed_v(data)                                            (0x00FF0000&((data)<<16))
#define  IPPRE_IPPRE_50_speed_h(data)                                            (0x0000FF00&((data)<<8))
#define  IPPRE_IPPRE_50_scroll_bar_mode(data)                                    (0x00000080&((data)<<7))
#define  IPPRE_IPPRE_50_scroll_bar_en(data)                                      (0x00000040&((data)<<6))
#define  IPPRE_IPPRE_50_loop_restart_mode(data)                                  (0x00000020&((data)<<5))
#define  IPPRE_IPPRE_50_loop_stop(data)                                          (0x00000010&((data)<<4))
#define  IPPRE_IPPRE_50_loop_number(data)                                        (0x0000000F&(data))
#define  IPPRE_IPPRE_50_get_speed_h_cadence(data)                                ((0xFF000000&(data))>>24)
#define  IPPRE_IPPRE_50_get_speed_v(data)                                        ((0x00FF0000&(data))>>16)
#define  IPPRE_IPPRE_50_get_speed_h(data)                                        ((0x0000FF00&(data))>>8)
#define  IPPRE_IPPRE_50_get_scroll_bar_mode(data)                                ((0x00000080&(data))>>7)
#define  IPPRE_IPPRE_50_get_scroll_bar_en(data)                                  ((0x00000040&(data))>>6)
#define  IPPRE_IPPRE_50_get_loop_restart_mode(data)                              ((0x00000020&(data))>>5)
#define  IPPRE_IPPRE_50_get_loop_stop(data)                                      ((0x00000010&(data))>>4)
#define  IPPRE_IPPRE_50_get_loop_number(data)                                    (0x0000000F&(data))

#define  IPPRE_IPPRE_54                                                         0x18099154
#define  IPPRE_IPPRE_54_reg_addr                                                 "0xB8099154"
#define  IPPRE_IPPRE_54_reg                                                      0xB8099154
#define  IPPRE_IPPRE_54_inst_addr                                                "0x0015"
#define  set_IPPRE_IPPRE_54_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_54_reg)=data)
#define  get_IPPRE_IPPRE_54_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_54_reg))
#define  IPPRE_IPPRE_54_speed_v_cadence_shift                                    (24)
#define  IPPRE_IPPRE_54_bar_hight_shift                                          (12)
#define  IPPRE_IPPRE_54_bar_width_shift                                          (0)
#define  IPPRE_IPPRE_54_speed_v_cadence_mask                                     (0xFF000000)
#define  IPPRE_IPPRE_54_bar_hight_mask                                           (0x00FFF000)
#define  IPPRE_IPPRE_54_bar_width_mask                                           (0x00000FFF)
#define  IPPRE_IPPRE_54_speed_v_cadence(data)                                    (0xFF000000&((data)<<24))
#define  IPPRE_IPPRE_54_bar_hight(data)                                          (0x00FFF000&((data)<<12))
#define  IPPRE_IPPRE_54_bar_width(data)                                          (0x00000FFF&(data))
#define  IPPRE_IPPRE_54_get_speed_v_cadence(data)                                ((0xFF000000&(data))>>24)
#define  IPPRE_IPPRE_54_get_bar_hight(data)                                      ((0x00FFF000&(data))>>12)
#define  IPPRE_IPPRE_54_get_bar_width(data)                                      (0x00000FFF&(data))

#define  IPPRE_IPPRE_58                                                         0x18099158
#define  IPPRE_IPPRE_58_reg_addr                                                 "0xB8099158"
#define  IPPRE_IPPRE_58_reg                                                      0xB8099158
#define  IPPRE_IPPRE_58_inst_addr                                                "0x0016"
#define  set_IPPRE_IPPRE_58_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_58_reg)=data)
#define  get_IPPRE_IPPRE_58_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_58_reg))
#define  IPPRE_IPPRE_58_dummy58_shift                                            (30)
#define  IPPRE_IPPRE_58_bar_b_shift                                              (20)
#define  IPPRE_IPPRE_58_bar_g_shift                                              (10)
#define  IPPRE_IPPRE_58_bar_r_shift                                              (0)
#define  IPPRE_IPPRE_58_dummy58_mask                                             (0xC0000000)
#define  IPPRE_IPPRE_58_bar_b_mask                                               (0x3FF00000)
#define  IPPRE_IPPRE_58_bar_g_mask                                               (0x000FFC00)
#define  IPPRE_IPPRE_58_bar_r_mask                                               (0x000003FF)
#define  IPPRE_IPPRE_58_dummy58(data)                                            (0xC0000000&((data)<<30))
#define  IPPRE_IPPRE_58_bar_b(data)                                              (0x3FF00000&((data)<<20))
#define  IPPRE_IPPRE_58_bar_g(data)                                              (0x000FFC00&((data)<<10))
#define  IPPRE_IPPRE_58_bar_r(data)                                              (0x000003FF&(data))
#define  IPPRE_IPPRE_58_get_dummy58(data)                                        ((0xC0000000&(data))>>30)
#define  IPPRE_IPPRE_58_get_bar_b(data)                                          ((0x3FF00000&(data))>>20)
#define  IPPRE_IPPRE_58_get_bar_g(data)                                          ((0x000FFC00&(data))>>10)
#define  IPPRE_IPPRE_58_get_bar_r(data)                                          (0x000003FF&(data))

#define  IPPRE_IPPRE_5C                                                         0x1809915C
#define  IPPRE_IPPRE_5C_reg_addr                                                 "0xB809915C"
#define  IPPRE_IPPRE_5C_reg                                                      0xB809915C
#define  IPPRE_IPPRE_5C_inst_addr                                                "0x0017"
#define  set_IPPRE_IPPRE_5C_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_5C_reg)=data)
#define  get_IPPRE_IPPRE_5C_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_5C_reg))
#define  IPPRE_IPPRE_5C_dummy5c_shift                                            (16)
#define  IPPRE_IPPRE_5C_speed_v_1_shift                                          (8)
#define  IPPRE_IPPRE_5C_speed_h_1_shift                                          (0)
#define  IPPRE_IPPRE_5C_dummy5c_mask                                             (0xFFFF0000)
#define  IPPRE_IPPRE_5C_speed_v_1_mask                                           (0x0000FF00)
#define  IPPRE_IPPRE_5C_speed_h_1_mask                                           (0x000000FF)
#define  IPPRE_IPPRE_5C_dummy5c(data)                                            (0xFFFF0000&((data)<<16))
#define  IPPRE_IPPRE_5C_speed_v_1(data)                                          (0x0000FF00&((data)<<8))
#define  IPPRE_IPPRE_5C_speed_h_1(data)                                          (0x000000FF&(data))
#define  IPPRE_IPPRE_5C_get_dummy5c(data)                                        ((0xFFFF0000&(data))>>16)
#define  IPPRE_IPPRE_5C_get_speed_v_1(data)                                      ((0x0000FF00&(data))>>8)
#define  IPPRE_IPPRE_5C_get_speed_h_1(data)                                      (0x000000FF&(data))

#define  IPPRE_IPPRE_60                                                         0x18099160
#define  IPPRE_IPPRE_60_reg_addr                                                 "0xB8099160"
#define  IPPRE_IPPRE_60_reg                                                      0xB8099160
#define  IPPRE_IPPRE_60_inst_addr                                                "0x0018"
#define  set_IPPRE_IPPRE_60_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_60_reg)=data)
#define  get_IPPRE_IPPRE_60_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_60_reg))
#define  IPPRE_IPPRE_60_dummy60_shift                                            (30)
#define  IPPRE_IPPRE_60_patt_move_en_cadence_shift                               (29)
#define  IPPRE_IPPRE_60_cadence_frm_length_shift                                 (24)
#define  IPPRE_IPPRE_60_circle_r2_shift                                          (0)
#define  IPPRE_IPPRE_60_dummy60_mask                                             (0xC0000000)
#define  IPPRE_IPPRE_60_patt_move_en_cadence_mask                                (0x20000000)
#define  IPPRE_IPPRE_60_cadence_frm_length_mask                                  (0x1F000000)
#define  IPPRE_IPPRE_60_circle_r2_mask                                           (0x00FFFFFF)
#define  IPPRE_IPPRE_60_dummy60(data)                                            (0xC0000000&((data)<<30))
#define  IPPRE_IPPRE_60_patt_move_en_cadence(data)                               (0x20000000&((data)<<29))
#define  IPPRE_IPPRE_60_cadence_frm_length(data)                                 (0x1F000000&((data)<<24))
#define  IPPRE_IPPRE_60_circle_r2(data)                                          (0x00FFFFFF&(data))
#define  IPPRE_IPPRE_60_get_dummy60(data)                                        ((0xC0000000&(data))>>30)
#define  IPPRE_IPPRE_60_get_patt_move_en_cadence(data)                           ((0x20000000&(data))>>29)
#define  IPPRE_IPPRE_60_get_cadence_frm_length(data)                             ((0x1F000000&(data))>>24)
#define  IPPRE_IPPRE_60_get_circle_r2(data)                                      (0x00FFFFFF&(data))

#define  IPPRE_IPPRE_64                                                         0x18099164
#define  IPPRE_IPPRE_64_reg_addr                                                 "0xB8099164"
#define  IPPRE_IPPRE_64_reg                                                      0xB8099164
#define  IPPRE_IPPRE_64_inst_addr                                                "0x0019"
#define  set_IPPRE_IPPRE_64_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_64_reg)=data)
#define  get_IPPRE_IPPRE_64_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_64_reg))
#define  IPPRE_IPPRE_64_dummy64_shift                                            (24)
#define  IPPRE_IPPRE_64_circle_center_v_shift                                    (12)
#define  IPPRE_IPPRE_64_circle_center_h_shift                                    (0)
#define  IPPRE_IPPRE_64_dummy64_mask                                             (0xFF000000)
#define  IPPRE_IPPRE_64_circle_center_v_mask                                     (0x00FFF000)
#define  IPPRE_IPPRE_64_circle_center_h_mask                                     (0x00000FFF)
#define  IPPRE_IPPRE_64_dummy64(data)                                            (0xFF000000&((data)<<24))
#define  IPPRE_IPPRE_64_circle_center_v(data)                                    (0x00FFF000&((data)<<12))
#define  IPPRE_IPPRE_64_circle_center_h(data)                                    (0x00000FFF&(data))
#define  IPPRE_IPPRE_64_get_dummy64(data)                                        ((0xFF000000&(data))>>24)
#define  IPPRE_IPPRE_64_get_circle_center_v(data)                                ((0x00FFF000&(data))>>12)
#define  IPPRE_IPPRE_64_get_circle_center_h(data)                                (0x00000FFF&(data))

#define  IPPRE_IPPRE_68                                                         0x18099168
#define  IPPRE_IPPRE_68_reg_addr                                                 "0xB8099168"
#define  IPPRE_IPPRE_68_reg                                                      0xB8099168
#define  IPPRE_IPPRE_68_inst_addr                                                "0x001A"
#define  set_IPPRE_IPPRE_68_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_68_reg)=data)
#define  get_IPPRE_IPPRE_68_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_68_reg))
#define  IPPRE_IPPRE_68_random_seed_shift                                        (0)
#define  IPPRE_IPPRE_68_random_seed_mask                                         (0xFFFFFFFF)
#define  IPPRE_IPPRE_68_random_seed(data)                                        (0xFFFFFFFF&(data))
#define  IPPRE_IPPRE_68_get_random_seed(data)                                    (0xFFFFFFFF&(data))

#define  IPPRE_IPPRE_6C                                                         0x1809916C
#define  IPPRE_IPPRE_6C_reg_addr                                                 "0xB809916C"
#define  IPPRE_IPPRE_6C_reg                                                      0xB809916C
#define  IPPRE_IPPRE_6C_inst_addr                                                "0x001B"
#define  set_IPPRE_IPPRE_6C_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_6C_reg)=data)
#define  get_IPPRE_IPPRE_6C_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_6C_reg))
#define  IPPRE_IPPRE_6C_dummy6c_shift                                            (10)
#define  IPPRE_IPPRE_6C_random_rgb_shift                                         (4)
#define  IPPRE_IPPRE_6C_random_width_shift                                       (1)
#define  IPPRE_IPPRE_6C_random_en_shift                                          (0)
#define  IPPRE_IPPRE_6C_dummy6c_mask                                             (0xFFFFFC00)
#define  IPPRE_IPPRE_6C_random_rgb_mask                                          (0x000003F0)
#define  IPPRE_IPPRE_6C_random_width_mask                                        (0x0000000E)
#define  IPPRE_IPPRE_6C_random_en_mask                                           (0x00000001)
#define  IPPRE_IPPRE_6C_dummy6c(data)                                            (0xFFFFFC00&((data)<<10))
#define  IPPRE_IPPRE_6C_random_rgb(data)                                         (0x000003F0&((data)<<4))
#define  IPPRE_IPPRE_6C_random_width(data)                                       (0x0000000E&((data)<<1))
#define  IPPRE_IPPRE_6C_random_en(data)                                          (0x00000001&(data))
#define  IPPRE_IPPRE_6C_get_dummy6c(data)                                        ((0xFFFFFC00&(data))>>10)
#define  IPPRE_IPPRE_6C_get_random_rgb(data)                                     ((0x000003F0&(data))>>4)
#define  IPPRE_IPPRE_6C_get_random_width(data)                                   ((0x0000000E&(data))>>1)
#define  IPPRE_IPPRE_6C_get_random_en(data)                                      (0x00000001&(data))

#define  IPPRE_IPPRE_70                                                         0x18099170
#define  IPPRE_IPPRE_70_reg_addr                                                 "0xB8099170"
#define  IPPRE_IPPRE_70_reg                                                      0xB8099170
#define  IPPRE_IPPRE_70_inst_addr                                                "0x001C"
#define  set_IPPRE_IPPRE_70_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_70_reg)=data)
#define  get_IPPRE_IPPRE_70_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_70_reg))
#define  IPPRE_IPPRE_70_cadence_frm_shift                                        (0)
#define  IPPRE_IPPRE_70_cadence_frm_mask                                         (0xFFFFFFFF)
#define  IPPRE_IPPRE_70_cadence_frm(data)                                        (0xFFFFFFFF&(data))
#define  IPPRE_IPPRE_70_get_cadence_frm(data)                                    (0xFFFFFFFF&(data))

#define  IPPRE_IPPRE_74                                                         0x18099174
#define  IPPRE_IPPRE_74_reg_addr                                                 "0xB8099174"
#define  IPPRE_IPPRE_74_reg                                                      0xB8099174
#define  IPPRE_IPPRE_74_inst_addr                                                "0x001D"
#define  set_IPPRE_IPPRE_74_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_74_reg)=data)
#define  get_IPPRE_IPPRE_74_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_74_reg))
#define  IPPRE_IPPRE_74_ippre_center_color0_v_shift                              (20)
#define  IPPRE_IPPRE_74_ippre_center_color0_u_shift                              (10)
#define  IPPRE_IPPRE_74_ippre_center_color0_y_shift                              (0)
#define  IPPRE_IPPRE_74_ippre_center_color0_v_mask                               (0x3FF00000)
#define  IPPRE_IPPRE_74_ippre_center_color0_u_mask                               (0x000FFC00)
#define  IPPRE_IPPRE_74_ippre_center_color0_y_mask                               (0x000003FF)
#define  IPPRE_IPPRE_74_ippre_center_color0_v(data)                              (0x3FF00000&((data)<<20))
#define  IPPRE_IPPRE_74_ippre_center_color0_u(data)                              (0x000FFC00&((data)<<10))
#define  IPPRE_IPPRE_74_ippre_center_color0_y(data)                              (0x000003FF&(data))
#define  IPPRE_IPPRE_74_get_ippre_center_color0_v(data)                          ((0x3FF00000&(data))>>20)
#define  IPPRE_IPPRE_74_get_ippre_center_color0_u(data)                          ((0x000FFC00&(data))>>10)
#define  IPPRE_IPPRE_74_get_ippre_center_color0_y(data)                          (0x000003FF&(data))

#define  IPPRE_IPPRE_78                                                         0x18099178
#define  IPPRE_IPPRE_78_reg_addr                                                 "0xB8099178"
#define  IPPRE_IPPRE_78_reg                                                      0xB8099178
#define  IPPRE_IPPRE_78_inst_addr                                                "0x001E"
#define  set_IPPRE_IPPRE_78_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_78_reg)=data)
#define  get_IPPRE_IPPRE_78_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_78_reg))
#define  IPPRE_IPPRE_78_ippre_color_range0_u_shift                               (20)
#define  IPPRE_IPPRE_78_ippre_color_range1_y_shift                               (10)
#define  IPPRE_IPPRE_78_ippre_color_range0_y_shift                               (0)
#define  IPPRE_IPPRE_78_ippre_color_range0_u_mask                                (0x3FF00000)
#define  IPPRE_IPPRE_78_ippre_color_range1_y_mask                                (0x000FFC00)
#define  IPPRE_IPPRE_78_ippre_color_range0_y_mask                                (0x000003FF)
#define  IPPRE_IPPRE_78_ippre_color_range0_u(data)                               (0x3FF00000&((data)<<20))
#define  IPPRE_IPPRE_78_ippre_color_range1_y(data)                               (0x000FFC00&((data)<<10))
#define  IPPRE_IPPRE_78_ippre_color_range0_y(data)                               (0x000003FF&(data))
#define  IPPRE_IPPRE_78_get_ippre_color_range0_u(data)                           ((0x3FF00000&(data))>>20)
#define  IPPRE_IPPRE_78_get_ippre_color_range1_y(data)                           ((0x000FFC00&(data))>>10)
#define  IPPRE_IPPRE_78_get_ippre_color_range0_y(data)                           (0x000003FF&(data))

#define  IPPRE_IPPRE_7C                                                         0x1809917C
#define  IPPRE_IPPRE_7C_reg_addr                                                 "0xB809917C"
#define  IPPRE_IPPRE_7C_reg                                                      0xB809917C
#define  IPPRE_IPPRE_7C_inst_addr                                                "0x001F"
#define  set_IPPRE_IPPRE_7C_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_7C_reg)=data)
#define  get_IPPRE_IPPRE_7C_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_7C_reg))
#define  IPPRE_IPPRE_7C_ippre_center_color1_v_shift                              (20)
#define  IPPRE_IPPRE_7C_ippre_center_color1_u_shift                              (10)
#define  IPPRE_IPPRE_7C_ippre_center_color1_y_shift                              (0)
#define  IPPRE_IPPRE_7C_ippre_center_color1_v_mask                               (0x3FF00000)
#define  IPPRE_IPPRE_7C_ippre_center_color1_u_mask                               (0x000FFC00)
#define  IPPRE_IPPRE_7C_ippre_center_color1_y_mask                               (0x000003FF)
#define  IPPRE_IPPRE_7C_ippre_center_color1_v(data)                              (0x3FF00000&((data)<<20))
#define  IPPRE_IPPRE_7C_ippre_center_color1_u(data)                              (0x000FFC00&((data)<<10))
#define  IPPRE_IPPRE_7C_ippre_center_color1_y(data)                              (0x000003FF&(data))
#define  IPPRE_IPPRE_7C_get_ippre_center_color1_v(data)                          ((0x3FF00000&(data))>>20)
#define  IPPRE_IPPRE_7C_get_ippre_center_color1_u(data)                          ((0x000FFC00&(data))>>10)
#define  IPPRE_IPPRE_7C_get_ippre_center_color1_y(data)                          (0x000003FF&(data))

#define  IPPRE_IPPRE_80                                                         0x18099180
#define  IPPRE_IPPRE_80_reg_addr                                                 "0xB8099180"
#define  IPPRE_IPPRE_80_reg                                                      0xB8099180
#define  IPPRE_IPPRE_80_inst_addr                                                "0x0020"
#define  set_IPPRE_IPPRE_80_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_80_reg)=data)
#define  get_IPPRE_IPPRE_80_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_80_reg))
#define  IPPRE_IPPRE_80_usr_coef01_h_shift                                       (15)
#define  IPPRE_IPPRE_80_usr_coef00_h_shift                                       (0)
#define  IPPRE_IPPRE_80_usr_coef01_h_mask                                        (0x3FFF8000)
#define  IPPRE_IPPRE_80_usr_coef00_h_mask                                        (0x00007FFF)
#define  IPPRE_IPPRE_80_usr_coef01_h(data)                                       (0x3FFF8000&((data)<<15))
#define  IPPRE_IPPRE_80_usr_coef00_h(data)                                       (0x00007FFF&(data))
#define  IPPRE_IPPRE_80_get_usr_coef01_h(data)                                   ((0x3FFF8000&(data))>>15)
#define  IPPRE_IPPRE_80_get_usr_coef00_h(data)                                   (0x00007FFF&(data))

#define  IPPRE_IPPRE_84                                                         0x18099184
#define  IPPRE_IPPRE_84_reg_addr                                                 "0xB8099184"
#define  IPPRE_IPPRE_84_reg                                                      0xB8099184
#define  IPPRE_IPPRE_84_inst_addr                                                "0x0021"
#define  set_IPPRE_IPPRE_84_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_84_reg)=data)
#define  get_IPPRE_IPPRE_84_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_84_reg))
#define  IPPRE_IPPRE_84_usr_coef10_h_shift                                       (15)
#define  IPPRE_IPPRE_84_usr_coef02_h_shift                                       (0)
#define  IPPRE_IPPRE_84_usr_coef10_h_mask                                        (0x3FFF8000)
#define  IPPRE_IPPRE_84_usr_coef02_h_mask                                        (0x00007FFF)
#define  IPPRE_IPPRE_84_usr_coef10_h(data)                                       (0x3FFF8000&((data)<<15))
#define  IPPRE_IPPRE_84_usr_coef02_h(data)                                       (0x00007FFF&(data))
#define  IPPRE_IPPRE_84_get_usr_coef10_h(data)                                   ((0x3FFF8000&(data))>>15)
#define  IPPRE_IPPRE_84_get_usr_coef02_h(data)                                   (0x00007FFF&(data))

#define  IPPRE_IPPRE_88                                                         0x18099188
#define  IPPRE_IPPRE_88_reg_addr                                                 "0xB8099188"
#define  IPPRE_IPPRE_88_reg                                                      0xB8099188
#define  IPPRE_IPPRE_88_inst_addr                                                "0x0022"
#define  set_IPPRE_IPPRE_88_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_88_reg)=data)
#define  get_IPPRE_IPPRE_88_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_88_reg))
#define  IPPRE_IPPRE_88_usr_coef12_h_shift                                       (15)
#define  IPPRE_IPPRE_88_usr_coef11_h_shift                                       (0)
#define  IPPRE_IPPRE_88_usr_coef12_h_mask                                        (0x3FFF8000)
#define  IPPRE_IPPRE_88_usr_coef11_h_mask                                        (0x00007FFF)
#define  IPPRE_IPPRE_88_usr_coef12_h(data)                                       (0x3FFF8000&((data)<<15))
#define  IPPRE_IPPRE_88_usr_coef11_h(data)                                       (0x00007FFF&(data))
#define  IPPRE_IPPRE_88_get_usr_coef12_h(data)                                   ((0x3FFF8000&(data))>>15)
#define  IPPRE_IPPRE_88_get_usr_coef11_h(data)                                   (0x00007FFF&(data))

#define  IPPRE_IPPRE_8C                                                         0x1809918C
#define  IPPRE_IPPRE_8C_reg_addr                                                 "0xB809918C"
#define  IPPRE_IPPRE_8C_reg                                                      0xB809918C
#define  IPPRE_IPPRE_8C_inst_addr                                                "0x0023"
#define  set_IPPRE_IPPRE_8C_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_8C_reg)=data)
#define  get_IPPRE_IPPRE_8C_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_8C_reg))
#define  IPPRE_IPPRE_8C_usr_coef21_h_shift                                       (15)
#define  IPPRE_IPPRE_8C_usr_coef20_h_shift                                       (0)
#define  IPPRE_IPPRE_8C_usr_coef21_h_mask                                        (0x3FFF8000)
#define  IPPRE_IPPRE_8C_usr_coef20_h_mask                                        (0x00007FFF)
#define  IPPRE_IPPRE_8C_usr_coef21_h(data)                                       (0x3FFF8000&((data)<<15))
#define  IPPRE_IPPRE_8C_usr_coef20_h(data)                                       (0x00007FFF&(data))
#define  IPPRE_IPPRE_8C_get_usr_coef21_h(data)                                   ((0x3FFF8000&(data))>>15)
#define  IPPRE_IPPRE_8C_get_usr_coef20_h(data)                                   (0x00007FFF&(data))

#define  IPPRE_IPPRE_90                                                         0x18099190
#define  IPPRE_IPPRE_90_reg_addr                                                 "0xB8099190"
#define  IPPRE_IPPRE_90_reg                                                      0xB8099190
#define  IPPRE_IPPRE_90_inst_addr                                                "0x0024"
#define  set_IPPRE_IPPRE_90_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_90_reg)=data)
#define  get_IPPRE_IPPRE_90_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_90_reg))
#define  IPPRE_IPPRE_90_usr_const0_h_shift                                       (15)
#define  IPPRE_IPPRE_90_usr_coef22_h_shift                                       (0)
#define  IPPRE_IPPRE_90_usr_const0_h_mask                                        (0x07FF8000)
#define  IPPRE_IPPRE_90_usr_coef22_h_mask                                        (0x00007FFF)
#define  IPPRE_IPPRE_90_usr_const0_h(data)                                       (0x07FF8000&((data)<<15))
#define  IPPRE_IPPRE_90_usr_coef22_h(data)                                       (0x00007FFF&(data))
#define  IPPRE_IPPRE_90_get_usr_const0_h(data)                                   ((0x07FF8000&(data))>>15)
#define  IPPRE_IPPRE_90_get_usr_coef22_h(data)                                   (0x00007FFF&(data))

#define  IPPRE_IPPRE_94                                                         0x18099194
#define  IPPRE_IPPRE_94_reg_addr                                                 "0xB8099194"
#define  IPPRE_IPPRE_94_reg                                                      0xB8099194
#define  IPPRE_IPPRE_94_inst_addr                                                "0x0025"
#define  set_IPPRE_IPPRE_94_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_94_reg)=data)
#define  get_IPPRE_IPPRE_94_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_94_reg))
#define  IPPRE_IPPRE_94_convert_map_h_shift                                      (29)
#define  IPPRE_IPPRE_94_convert_mode_h_shift                                     (25)
#define  IPPRE_IPPRE_94_convert_on_h_shift                                       (24)
#define  IPPRE_IPPRE_94_usr_const2_h_shift                                       (12)
#define  IPPRE_IPPRE_94_usr_const1_h_shift                                       (0)
#define  IPPRE_IPPRE_94_convert_map_h_mask                                       (0xE0000000)
#define  IPPRE_IPPRE_94_convert_mode_h_mask                                      (0x1E000000)
#define  IPPRE_IPPRE_94_convert_on_h_mask                                        (0x01000000)
#define  IPPRE_IPPRE_94_usr_const2_h_mask                                        (0x00FFF000)
#define  IPPRE_IPPRE_94_usr_const1_h_mask                                        (0x00000FFF)
#define  IPPRE_IPPRE_94_convert_map_h(data)                                      (0xE0000000&((data)<<29))
#define  IPPRE_IPPRE_94_convert_mode_h(data)                                     (0x1E000000&((data)<<25))
#define  IPPRE_IPPRE_94_convert_on_h(data)                                       (0x01000000&((data)<<24))
#define  IPPRE_IPPRE_94_usr_const2_h(data)                                       (0x00FFF000&((data)<<12))
#define  IPPRE_IPPRE_94_usr_const1_h(data)                                       (0x00000FFF&(data))
#define  IPPRE_IPPRE_94_get_convert_map_h(data)                                  ((0xE0000000&(data))>>29)
#define  IPPRE_IPPRE_94_get_convert_mode_h(data)                                 ((0x1E000000&(data))>>25)
#define  IPPRE_IPPRE_94_get_convert_on_h(data)                                   ((0x01000000&(data))>>24)
#define  IPPRE_IPPRE_94_get_usr_const2_h(data)                                   ((0x00FFF000&(data))>>12)
#define  IPPRE_IPPRE_94_get_usr_const1_h(data)                                   (0x00000FFF&(data))

#define  IPPRE_IPPRE_98                                                         0x18099198
#define  IPPRE_IPPRE_98_reg_addr                                                 "0xB8099198"
#define  IPPRE_IPPRE_98_reg                                                      0xB8099198
#define  IPPRE_IPPRE_98_inst_addr                                                "0x0026"
#define  set_IPPRE_IPPRE_98_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_98_reg)=data)
#define  get_IPPRE_IPPRE_98_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_98_reg))
#define  IPPRE_IPPRE_98_ippre_color_range1_u_shift                               (20)
#define  IPPRE_IPPRE_98_ippre_color_range1_v_shift                               (10)
#define  IPPRE_IPPRE_98_ippre_color_range0_v_shift                               (0)
#define  IPPRE_IPPRE_98_ippre_color_range1_u_mask                                (0x3FF00000)
#define  IPPRE_IPPRE_98_ippre_color_range1_v_mask                                (0x000FFC00)
#define  IPPRE_IPPRE_98_ippre_color_range0_v_mask                                (0x000003FF)
#define  IPPRE_IPPRE_98_ippre_color_range1_u(data)                               (0x3FF00000&((data)<<20))
#define  IPPRE_IPPRE_98_ippre_color_range1_v(data)                               (0x000FFC00&((data)<<10))
#define  IPPRE_IPPRE_98_ippre_color_range0_v(data)                               (0x000003FF&(data))
#define  IPPRE_IPPRE_98_get_ippre_color_range1_u(data)                           ((0x3FF00000&(data))>>20)
#define  IPPRE_IPPRE_98_get_ippre_color_range1_v(data)                           ((0x000FFC00&(data))>>10)
#define  IPPRE_IPPRE_98_get_ippre_color_range0_v(data)                           (0x000003FF&(data))

#define  IPPRE_IPPRE_9C                                                         0x1809919C
#define  IPPRE_IPPRE_9C_reg_addr                                                 "0xB809919C"
#define  IPPRE_IPPRE_9C_reg                                                      0xB809919C
#define  IPPRE_IPPRE_9C_inst_addr                                                "0x0027"
#define  set_IPPRE_IPPRE_9C_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_9C_reg)=data)
#define  get_IPPRE_IPPRE_9C_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_9C_reg))
#define  IPPRE_IPPRE_9C_usr_coef01_l_shift                                       (15)
#define  IPPRE_IPPRE_9C_usr_coef00_l_shift                                       (0)
#define  IPPRE_IPPRE_9C_usr_coef01_l_mask                                        (0x3FFF8000)
#define  IPPRE_IPPRE_9C_usr_coef00_l_mask                                        (0x00007FFF)
#define  IPPRE_IPPRE_9C_usr_coef01_l(data)                                       (0x3FFF8000&((data)<<15))
#define  IPPRE_IPPRE_9C_usr_coef00_l(data)                                       (0x00007FFF&(data))
#define  IPPRE_IPPRE_9C_get_usr_coef01_l(data)                                   ((0x3FFF8000&(data))>>15)
#define  IPPRE_IPPRE_9C_get_usr_coef00_l(data)                                   (0x00007FFF&(data))

#define  IPPRE_IPPRE_A0                                                         0x180991A0
#define  IPPRE_IPPRE_A0_reg_addr                                                 "0xB80991A0"
#define  IPPRE_IPPRE_A0_reg                                                      0xB80991A0
#define  IPPRE_IPPRE_A0_inst_addr                                                "0x0028"
#define  set_IPPRE_IPPRE_A0_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_A0_reg)=data)
#define  get_IPPRE_IPPRE_A0_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_A0_reg))
#define  IPPRE_IPPRE_A0_usr_coef10_l_shift                                       (15)
#define  IPPRE_IPPRE_A0_usr_coef02_l_shift                                       (0)
#define  IPPRE_IPPRE_A0_usr_coef10_l_mask                                        (0x3FFF8000)
#define  IPPRE_IPPRE_A0_usr_coef02_l_mask                                        (0x00007FFF)
#define  IPPRE_IPPRE_A0_usr_coef10_l(data)                                       (0x3FFF8000&((data)<<15))
#define  IPPRE_IPPRE_A0_usr_coef02_l(data)                                       (0x00007FFF&(data))
#define  IPPRE_IPPRE_A0_get_usr_coef10_l(data)                                   ((0x3FFF8000&(data))>>15)
#define  IPPRE_IPPRE_A0_get_usr_coef02_l(data)                                   (0x00007FFF&(data))

#define  IPPRE_IPPRE_A4                                                         0x180991A4
#define  IPPRE_IPPRE_A4_reg_addr                                                 "0xB80991A4"
#define  IPPRE_IPPRE_A4_reg                                                      0xB80991A4
#define  IPPRE_IPPRE_A4_inst_addr                                                "0x0029"
#define  set_IPPRE_IPPRE_A4_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_A4_reg)=data)
#define  get_IPPRE_IPPRE_A4_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_A4_reg))
#define  IPPRE_IPPRE_A4_usr_coef12_l_shift                                       (15)
#define  IPPRE_IPPRE_A4_usr_coef11_l_shift                                       (0)
#define  IPPRE_IPPRE_A4_usr_coef12_l_mask                                        (0x3FFF8000)
#define  IPPRE_IPPRE_A4_usr_coef11_l_mask                                        (0x00007FFF)
#define  IPPRE_IPPRE_A4_usr_coef12_l(data)                                       (0x3FFF8000&((data)<<15))
#define  IPPRE_IPPRE_A4_usr_coef11_l(data)                                       (0x00007FFF&(data))
#define  IPPRE_IPPRE_A4_get_usr_coef12_l(data)                                   ((0x3FFF8000&(data))>>15)
#define  IPPRE_IPPRE_A4_get_usr_coef11_l(data)                                   (0x00007FFF&(data))

#define  IPPRE_IPPRE_A8                                                         0x180991A8
#define  IPPRE_IPPRE_A8_reg_addr                                                 "0xB80991A8"
#define  IPPRE_IPPRE_A8_reg                                                      0xB80991A8
#define  IPPRE_IPPRE_A8_inst_addr                                                "0x002A"
#define  set_IPPRE_IPPRE_A8_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_A8_reg)=data)
#define  get_IPPRE_IPPRE_A8_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_A8_reg))
#define  IPPRE_IPPRE_A8_usr_coef21_l_shift                                       (15)
#define  IPPRE_IPPRE_A8_usr_coef20_l_shift                                       (0)
#define  IPPRE_IPPRE_A8_usr_coef21_l_mask                                        (0x3FFF8000)
#define  IPPRE_IPPRE_A8_usr_coef20_l_mask                                        (0x00007FFF)
#define  IPPRE_IPPRE_A8_usr_coef21_l(data)                                       (0x3FFF8000&((data)<<15))
#define  IPPRE_IPPRE_A8_usr_coef20_l(data)                                       (0x00007FFF&(data))
#define  IPPRE_IPPRE_A8_get_usr_coef21_l(data)                                   ((0x3FFF8000&(data))>>15)
#define  IPPRE_IPPRE_A8_get_usr_coef20_l(data)                                   (0x00007FFF&(data))

#define  IPPRE_IPPRE_AC                                                         0x180991AC
#define  IPPRE_IPPRE_AC_reg_addr                                                 "0xB80991AC"
#define  IPPRE_IPPRE_AC_reg                                                      0xB80991AC
#define  IPPRE_IPPRE_AC_inst_addr                                                "0x002B"
#define  set_IPPRE_IPPRE_AC_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_AC_reg)=data)
#define  get_IPPRE_IPPRE_AC_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_AC_reg))
#define  IPPRE_IPPRE_AC_usr_const0_l_shift                                       (15)
#define  IPPRE_IPPRE_AC_usr_coef22_l_shift                                       (0)
#define  IPPRE_IPPRE_AC_usr_const0_l_mask                                        (0x07FF8000)
#define  IPPRE_IPPRE_AC_usr_coef22_l_mask                                        (0x00007FFF)
#define  IPPRE_IPPRE_AC_usr_const0_l(data)                                       (0x07FF8000&((data)<<15))
#define  IPPRE_IPPRE_AC_usr_coef22_l(data)                                       (0x00007FFF&(data))
#define  IPPRE_IPPRE_AC_get_usr_const0_l(data)                                   ((0x07FF8000&(data))>>15)
#define  IPPRE_IPPRE_AC_get_usr_coef22_l(data)                                   (0x00007FFF&(data))

#define  IPPRE_IPPRE_B0                                                         0x180991B0
#define  IPPRE_IPPRE_B0_reg_addr                                                 "0xB80991B0"
#define  IPPRE_IPPRE_B0_reg                                                      0xB80991B0
#define  IPPRE_IPPRE_B0_inst_addr                                                "0x002C"
#define  set_IPPRE_IPPRE_B0_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_B0_reg)=data)
#define  get_IPPRE_IPPRE_B0_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_B0_reg))
#define  IPPRE_IPPRE_B0_convert_map_l_shift                                      (29)
#define  IPPRE_IPPRE_B0_convert_mode_l_shift                                     (25)
#define  IPPRE_IPPRE_B0_convert_on_l_shift                                       (24)
#define  IPPRE_IPPRE_B0_usr_const2_l_shift                                       (12)
#define  IPPRE_IPPRE_B0_usr_const1_l_shift                                       (0)
#define  IPPRE_IPPRE_B0_convert_map_l_mask                                       (0xE0000000)
#define  IPPRE_IPPRE_B0_convert_mode_l_mask                                      (0x1E000000)
#define  IPPRE_IPPRE_B0_convert_on_l_mask                                        (0x01000000)
#define  IPPRE_IPPRE_B0_usr_const2_l_mask                                        (0x00FFF000)
#define  IPPRE_IPPRE_B0_usr_const1_l_mask                                        (0x00000FFF)
#define  IPPRE_IPPRE_B0_convert_map_l(data)                                      (0xE0000000&((data)<<29))
#define  IPPRE_IPPRE_B0_convert_mode_l(data)                                     (0x1E000000&((data)<<25))
#define  IPPRE_IPPRE_B0_convert_on_l(data)                                       (0x01000000&((data)<<24))
#define  IPPRE_IPPRE_B0_usr_const2_l(data)                                       (0x00FFF000&((data)<<12))
#define  IPPRE_IPPRE_B0_usr_const1_l(data)                                       (0x00000FFF&(data))
#define  IPPRE_IPPRE_B0_get_convert_map_l(data)                                  ((0xE0000000&(data))>>29)
#define  IPPRE_IPPRE_B0_get_convert_mode_l(data)                                 ((0x1E000000&(data))>>25)
#define  IPPRE_IPPRE_B0_get_convert_on_l(data)                                   ((0x01000000&(data))>>24)
#define  IPPRE_IPPRE_B0_get_usr_const2_l(data)                                   ((0x00FFF000&(data))>>12)
#define  IPPRE_IPPRE_B0_get_usr_const1_l(data)                                   (0x00000FFF&(data))

#define  IPPRE_IPPRE_B4                                                         0x180991B4
#define  IPPRE_IPPRE_B4_reg_addr                                                 "0xB80991B4"
#define  IPPRE_IPPRE_B4_reg                                                      0xB80991B4
#define  IPPRE_IPPRE_B4_inst_addr                                                "0x002D"
#define  set_IPPRE_IPPRE_B4_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_B4_reg)=data)
#define  get_IPPRE_IPPRE_B4_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_B4_reg))
#define  IPPRE_IPPRE_B4_ippre_use_mute_hs_shift                                  (28)
#define  IPPRE_IPPRE_B4_ippre_use_mute_vs_shift                                  (27)
#define  IPPRE_IPPRE_B4_ippre_mute_regen_vs_pos_shift                            (20)
#define  IPPRE_IPPRE_B4_ippre_mute_regen_hs_pos_shift                            (12)
#define  IPPRE_IPPRE_B4_ippre_mute_frm_trig_pos_shift                            (0)
#define  IPPRE_IPPRE_B4_ippre_use_mute_hs_mask                                   (0x10000000)
#define  IPPRE_IPPRE_B4_ippre_use_mute_vs_mask                                   (0x08000000)
#define  IPPRE_IPPRE_B4_ippre_mute_regen_vs_pos_mask                             (0x07F00000)
#define  IPPRE_IPPRE_B4_ippre_mute_regen_hs_pos_mask                             (0x000FF000)
#define  IPPRE_IPPRE_B4_ippre_mute_frm_trig_pos_mask                             (0x00000FFF)
#define  IPPRE_IPPRE_B4_ippre_use_mute_hs(data)                                  (0x10000000&((data)<<28))
#define  IPPRE_IPPRE_B4_ippre_use_mute_vs(data)                                  (0x08000000&((data)<<27))
#define  IPPRE_IPPRE_B4_ippre_mute_regen_vs_pos(data)                            (0x07F00000&((data)<<20))
#define  IPPRE_IPPRE_B4_ippre_mute_regen_hs_pos(data)                            (0x000FF000&((data)<<12))
#define  IPPRE_IPPRE_B4_ippre_mute_frm_trig_pos(data)                            (0x00000FFF&(data))
#define  IPPRE_IPPRE_B4_get_ippre_use_mute_hs(data)                              ((0x10000000&(data))>>28)
#define  IPPRE_IPPRE_B4_get_ippre_use_mute_vs(data)                              ((0x08000000&(data))>>27)
#define  IPPRE_IPPRE_B4_get_ippre_mute_regen_vs_pos(data)                        ((0x07F00000&(data))>>20)
#define  IPPRE_IPPRE_B4_get_ippre_mute_regen_hs_pos(data)                        ((0x000FF000&(data))>>12)
#define  IPPRE_IPPRE_B4_get_ippre_mute_frm_trig_pos(data)                        (0x00000FFF&(data))

#define  IPPRE_IPPRE_B8                                                         0x180991B8
#define  IPPRE_IPPRE_B8_reg_addr                                                 "0xB80991B8"
#define  IPPRE_IPPRE_B8_reg                                                      0xB80991B8
#define  IPPRE_IPPRE_B8_inst_addr                                                "0x002E"
#define  set_IPPRE_IPPRE_B8_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_B8_reg)=data)
#define  get_IPPRE_IPPRE_B8_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_B8_reg))
#define  IPPRE_IPPRE_B8_ippre_mute_vblank_max_shift                              (24)
#define  IPPRE_IPPRE_B8_ippre_mute_vact_max_shift                                (12)
#define  IPPRE_IPPRE_B8_ippre_mute_vact_min_shift                                (0)
#define  IPPRE_IPPRE_B8_ippre_mute_vblank_max_mask                               (0xFF000000)
#define  IPPRE_IPPRE_B8_ippre_mute_vact_max_mask                                 (0x00FFF000)
#define  IPPRE_IPPRE_B8_ippre_mute_vact_min_mask                                 (0x00000FFF)
#define  IPPRE_IPPRE_B8_ippre_mute_vblank_max(data)                              (0xFF000000&((data)<<24))
#define  IPPRE_IPPRE_B8_ippre_mute_vact_max(data)                                (0x00FFF000&((data)<<12))
#define  IPPRE_IPPRE_B8_ippre_mute_vact_min(data)                                (0x00000FFF&(data))
#define  IPPRE_IPPRE_B8_get_ippre_mute_vblank_max(data)                          ((0xFF000000&(data))>>24)
#define  IPPRE_IPPRE_B8_get_ippre_mute_vact_max(data)                            ((0x00FFF000&(data))>>12)
#define  IPPRE_IPPRE_B8_get_ippre_mute_vact_min(data)                            (0x00000FFF&(data))

#define  IPPRE_IPPRE_BC                                                         0x180991BC
#define  IPPRE_IPPRE_BC_reg_addr                                                 "0xB80991BC"
#define  IPPRE_IPPRE_BC_reg                                                      0xB80991BC
#define  IPPRE_IPPRE_BC_inst_addr                                                "0x002F"
#define  set_IPPRE_IPPRE_BC_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_BC_reg)=data)
#define  get_IPPRE_IPPRE_BC_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_BC_reg))
#define  IPPRE_IPPRE_BC_ippre_mute_freq_high_th_shift                            (22)
#define  IPPRE_IPPRE_BC_ippre_mute_freq_low_th_shift                             (12)
#define  IPPRE_IPPRE_BC_ippre_mute_htotal_max_shift                              (0)
#define  IPPRE_IPPRE_BC_ippre_mute_freq_high_th_mask                             (0xFFC00000)
#define  IPPRE_IPPRE_BC_ippre_mute_freq_low_th_mask                              (0x003FF000)
#define  IPPRE_IPPRE_BC_ippre_mute_htotal_max_mask                               (0x00000FFF)
#define  IPPRE_IPPRE_BC_ippre_mute_freq_high_th(data)                            (0xFFC00000&((data)<<22))
#define  IPPRE_IPPRE_BC_ippre_mute_freq_low_th(data)                             (0x003FF000&((data)<<12))
#define  IPPRE_IPPRE_BC_ippre_mute_htotal_max(data)                              (0x00000FFF&(data))
#define  IPPRE_IPPRE_BC_get_ippre_mute_freq_high_th(data)                        ((0xFFC00000&(data))>>22)
#define  IPPRE_IPPRE_BC_get_ippre_mute_freq_low_th(data)                         ((0x003FF000&(data))>>12)
#define  IPPRE_IPPRE_BC_get_ippre_mute_htotal_max(data)                          (0x00000FFF&(data))

#define  IPPRE_IPPRE_C0                                                         0x180991C0
#define  IPPRE_IPPRE_C0_reg_addr                                                 "0xB80991C0"
#define  IPPRE_IPPRE_C0_reg                                                      0xB80991C0
#define  IPPRE_IPPRE_C0_inst_addr                                                "0x0030"
#define  set_IPPRE_IPPRE_C0_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_C0_reg)=data)
#define  get_IPPRE_IPPRE_C0_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_C0_reg))
#define  IPPRE_IPPRE_C0_hpattern_shift                                           (0)
#define  IPPRE_IPPRE_C0_hpattern_mask                                            (0xFFFFFFFF)
#define  IPPRE_IPPRE_C0_hpattern(data)                                           (0xFFFFFFFF&(data))
#define  IPPRE_IPPRE_C0_get_hpattern(data)                                       (0xFFFFFFFF&(data))

#define  IPPRE_IPPRE_C4                                                         0x180991C4
#define  IPPRE_IPPRE_C4_reg_addr                                                 "0xB80991C4"
#define  IPPRE_IPPRE_C4_reg                                                      0xB80991C4
#define  IPPRE_IPPRE_C4_inst_addr                                                "0x0031"
#define  set_IPPRE_IPPRE_C4_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_C4_reg)=data)
#define  get_IPPRE_IPPRE_C4_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_C4_reg))
#define  IPPRE_IPPRE_C4_hpattern1_shift                                          (0)
#define  IPPRE_IPPRE_C4_hpattern1_mask                                           (0xFFFFFFFF)
#define  IPPRE_IPPRE_C4_hpattern1(data)                                          (0xFFFFFFFF&(data))
#define  IPPRE_IPPRE_C4_get_hpattern1(data)                                      (0xFFFFFFFF&(data))

#define  IPPRE_IPPRE_C8                                                         0x180991C8
#define  IPPRE_IPPRE_C8_reg_addr                                                 "0xB80991C8"
#define  IPPRE_IPPRE_C8_reg                                                      0xB80991C8
#define  IPPRE_IPPRE_C8_inst_addr                                                "0x0032"
#define  set_IPPRE_IPPRE_C8_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_C8_reg)=data)
#define  get_IPPRE_IPPRE_C8_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_C8_reg))
#define  IPPRE_IPPRE_C8_hpattern2_shift                                          (0)
#define  IPPRE_IPPRE_C8_hpattern2_mask                                           (0xFFFFFFFF)
#define  IPPRE_IPPRE_C8_hpattern2(data)                                          (0xFFFFFFFF&(data))
#define  IPPRE_IPPRE_C8_get_hpattern2(data)                                      (0xFFFFFFFF&(data))

#define  IPPRE_IPPRE_CC                                                         0x180991CC
#define  IPPRE_IPPRE_CC_reg_addr                                                 "0xB80991CC"
#define  IPPRE_IPPRE_CC_reg                                                      0xB80991CC
#define  IPPRE_IPPRE_CC_inst_addr                                                "0x0033"
#define  set_IPPRE_IPPRE_CC_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_CC_reg)=data)
#define  get_IPPRE_IPPRE_CC_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_CC_reg))
#define  IPPRE_IPPRE_CC_hpattern3_shift                                          (0)
#define  IPPRE_IPPRE_CC_hpattern3_mask                                           (0xFFFFFFFF)
#define  IPPRE_IPPRE_CC_hpattern3(data)                                          (0xFFFFFFFF&(data))
#define  IPPRE_IPPRE_CC_get_hpattern3(data)                                      (0xFFFFFFFF&(data))

#define  IPPRE_IPPRE_D0                                                         0x180991D0
#define  IPPRE_IPPRE_D0_reg_addr                                                 "0xB80991D0"
#define  IPPRE_IPPRE_D0_reg                                                      0xB80991D0
#define  IPPRE_IPPRE_D0_inst_addr                                                "0x0034"
#define  set_IPPRE_IPPRE_D0_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_D0_reg)=data)
#define  get_IPPRE_IPPRE_D0_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_D0_reg))
#define  IPPRE_IPPRE_D0_hpattern4_shift                                          (0)
#define  IPPRE_IPPRE_D0_hpattern4_mask                                           (0xFFFFFFFF)
#define  IPPRE_IPPRE_D0_hpattern4(data)                                          (0xFFFFFFFF&(data))
#define  IPPRE_IPPRE_D0_get_hpattern4(data)                                      (0xFFFFFFFF&(data))

#define  IPPRE_IPPRE_D4                                                         0x180991D4
#define  IPPRE_IPPRE_D4_reg_addr                                                 "0xB80991D4"
#define  IPPRE_IPPRE_D4_reg                                                      0xB80991D4
#define  IPPRE_IPPRE_D4_inst_addr                                                "0x0035"
#define  set_IPPRE_IPPRE_D4_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_D4_reg)=data)
#define  get_IPPRE_IPPRE_D4_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_D4_reg))
#define  IPPRE_IPPRE_D4_hpattern5_shift                                          (0)
#define  IPPRE_IPPRE_D4_hpattern5_mask                                           (0xFFFFFFFF)
#define  IPPRE_IPPRE_D4_hpattern5(data)                                          (0xFFFFFFFF&(data))
#define  IPPRE_IPPRE_D4_get_hpattern5(data)                                      (0xFFFFFFFF&(data))

#define  IPPRE_IPPRE_D8                                                         0x180991D8
#define  IPPRE_IPPRE_D8_reg_addr                                                 "0xB80991D8"
#define  IPPRE_IPPRE_D8_reg                                                      0xB80991D8
#define  IPPRE_IPPRE_D8_inst_addr                                                "0x0036"
#define  set_IPPRE_IPPRE_D8_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_D8_reg)=data)
#define  get_IPPRE_IPPRE_D8_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_D8_reg))
#define  IPPRE_IPPRE_D8_hpattern6_shift                                          (0)
#define  IPPRE_IPPRE_D8_hpattern6_mask                                           (0xFFFFFFFF)
#define  IPPRE_IPPRE_D8_hpattern6(data)                                          (0xFFFFFFFF&(data))
#define  IPPRE_IPPRE_D8_get_hpattern6(data)                                      (0xFFFFFFFF&(data))

#define  IPPRE_IPPRE_DC                                                         0x180991DC
#define  IPPRE_IPPRE_DC_reg_addr                                                 "0xB80991DC"
#define  IPPRE_IPPRE_DC_reg                                                      0xB80991DC
#define  IPPRE_IPPRE_DC_inst_addr                                                "0x0037"
#define  set_IPPRE_IPPRE_DC_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_DC_reg)=data)
#define  get_IPPRE_IPPRE_DC_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_DC_reg))
#define  IPPRE_IPPRE_DC_hpattern7_shift                                          (0)
#define  IPPRE_IPPRE_DC_hpattern7_mask                                           (0xFFFFFFFF)
#define  IPPRE_IPPRE_DC_hpattern7(data)                                          (0xFFFFFFFF&(data))
#define  IPPRE_IPPRE_DC_get_hpattern7(data)                                      (0xFFFFFFFF&(data))

#define  IPPRE_IPPRE_E0                                                         0x180991E0
#define  IPPRE_IPPRE_E0_reg_addr                                                 "0xB80991E0"
#define  IPPRE_IPPRE_E0_reg                                                      0xB80991E0
#define  IPPRE_IPPRE_E0_inst_addr                                                "0x0038"
#define  set_IPPRE_IPPRE_E0_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_E0_reg)=data)
#define  get_IPPRE_IPPRE_E0_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_E0_reg))
#define  IPPRE_IPPRE_E0_ippre_mute_vact_max_det_en_shift                         (31)
#define  IPPRE_IPPRE_E0_ippre_mute_vact_min_det_en_shift                         (30)
#define  IPPRE_IPPRE_E0_ippre_mute_vblank_det_en_shift                           (29)
#define  IPPRE_IPPRE_E0_ippre_mute_htotal_max_det_en_shift                       (28)
#define  IPPRE_IPPRE_E0_ippre_mute_hact_max_det_en_shift                         (27)
#define  IPPRE_IPPRE_E0_ippre_mute_hact_min_det_en_shift                         (26)
#define  IPPRE_IPPRE_E0_ippre_mute_clk_det_en_shift                              (25)
#define  IPPRE_IPPRE_E0_ippre_mute_det_function_en_shift                         (24)
#define  IPPRE_IPPRE_E0_ippre_mute_vact_shift                                    (12)
#define  IPPRE_IPPRE_E0_ippre_mute_hact_shift                                    (0)
#define  IPPRE_IPPRE_E0_ippre_mute_vact_max_det_en_mask                          (0x80000000)
#define  IPPRE_IPPRE_E0_ippre_mute_vact_min_det_en_mask                          (0x40000000)
#define  IPPRE_IPPRE_E0_ippre_mute_vblank_det_en_mask                            (0x20000000)
#define  IPPRE_IPPRE_E0_ippre_mute_htotal_max_det_en_mask                        (0x10000000)
#define  IPPRE_IPPRE_E0_ippre_mute_hact_max_det_en_mask                          (0x08000000)
#define  IPPRE_IPPRE_E0_ippre_mute_hact_min_det_en_mask                          (0x04000000)
#define  IPPRE_IPPRE_E0_ippre_mute_clk_det_en_mask                               (0x02000000)
#define  IPPRE_IPPRE_E0_ippre_mute_det_function_en_mask                          (0x01000000)
#define  IPPRE_IPPRE_E0_ippre_mute_vact_mask                                     (0x00FFF000)
#define  IPPRE_IPPRE_E0_ippre_mute_hact_mask                                     (0x00000FFF)
#define  IPPRE_IPPRE_E0_ippre_mute_vact_max_det_en(data)                         (0x80000000&((data)<<31))
#define  IPPRE_IPPRE_E0_ippre_mute_vact_min_det_en(data)                         (0x40000000&((data)<<30))
#define  IPPRE_IPPRE_E0_ippre_mute_vblank_det_en(data)                           (0x20000000&((data)<<29))
#define  IPPRE_IPPRE_E0_ippre_mute_htotal_max_det_en(data)                       (0x10000000&((data)<<28))
#define  IPPRE_IPPRE_E0_ippre_mute_hact_max_det_en(data)                         (0x08000000&((data)<<27))
#define  IPPRE_IPPRE_E0_ippre_mute_hact_min_det_en(data)                         (0x04000000&((data)<<26))
#define  IPPRE_IPPRE_E0_ippre_mute_clk_det_en(data)                              (0x02000000&((data)<<25))
#define  IPPRE_IPPRE_E0_ippre_mute_det_function_en(data)                         (0x01000000&((data)<<24))
#define  IPPRE_IPPRE_E0_ippre_mute_vact(data)                                    (0x00FFF000&((data)<<12))
#define  IPPRE_IPPRE_E0_ippre_mute_hact(data)                                    (0x00000FFF&(data))
#define  IPPRE_IPPRE_E0_get_ippre_mute_vact_max_det_en(data)                     ((0x80000000&(data))>>31)
#define  IPPRE_IPPRE_E0_get_ippre_mute_vact_min_det_en(data)                     ((0x40000000&(data))>>30)
#define  IPPRE_IPPRE_E0_get_ippre_mute_vblank_det_en(data)                       ((0x20000000&(data))>>29)
#define  IPPRE_IPPRE_E0_get_ippre_mute_htotal_max_det_en(data)                   ((0x10000000&(data))>>28)
#define  IPPRE_IPPRE_E0_get_ippre_mute_hact_max_det_en(data)                     ((0x08000000&(data))>>27)
#define  IPPRE_IPPRE_E0_get_ippre_mute_hact_min_det_en(data)                     ((0x04000000&(data))>>26)
#define  IPPRE_IPPRE_E0_get_ippre_mute_clk_det_en(data)                          ((0x02000000&(data))>>25)
#define  IPPRE_IPPRE_E0_get_ippre_mute_det_function_en(data)                     ((0x01000000&(data))>>24)
#define  IPPRE_IPPRE_E0_get_ippre_mute_vact(data)                                ((0x00FFF000&(data))>>12)
#define  IPPRE_IPPRE_E0_get_ippre_mute_hact(data)                                (0x00000FFF&(data))

#define  IPPRE_IPPRE_E4                                                         0x180991E4
#define  IPPRE_IPPRE_E4_reg_addr                                                 "0xB80991E4"
#define  IPPRE_IPPRE_E4_reg                                                      0xB80991E4
#define  IPPRE_IPPRE_E4_inst_addr                                                "0x0039"
#define  set_IPPRE_IPPRE_E4_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_E4_reg)=data)
#define  get_IPPRE_IPPRE_E4_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_E4_reg))
#define  IPPRE_IPPRE_E4_ippre_mute_regen_vs_width_shift                          (28)
#define  IPPRE_IPPRE_E4_ippre_mute_regen_hs_width_shift                          (24)
#define  IPPRE_IPPRE_E4_ippre_mute_hact_max_shift                                (12)
#define  IPPRE_IPPRE_E4_ippre_mute_hact_min_shift                                (0)
#define  IPPRE_IPPRE_E4_ippre_mute_regen_vs_width_mask                           (0xF0000000)
#define  IPPRE_IPPRE_E4_ippre_mute_regen_hs_width_mask                           (0x0F000000)
#define  IPPRE_IPPRE_E4_ippre_mute_hact_max_mask                                 (0x00FFF000)
#define  IPPRE_IPPRE_E4_ippre_mute_hact_min_mask                                 (0x00000FFF)
#define  IPPRE_IPPRE_E4_ippre_mute_regen_vs_width(data)                          (0xF0000000&((data)<<28))
#define  IPPRE_IPPRE_E4_ippre_mute_regen_hs_width(data)                          (0x0F000000&((data)<<24))
#define  IPPRE_IPPRE_E4_ippre_mute_hact_max(data)                                (0x00FFF000&((data)<<12))
#define  IPPRE_IPPRE_E4_ippre_mute_hact_min(data)                                (0x00000FFF&(data))
#define  IPPRE_IPPRE_E4_get_ippre_mute_regen_vs_width(data)                      ((0xF0000000&(data))>>28)
#define  IPPRE_IPPRE_E4_get_ippre_mute_regen_hs_width(data)                      ((0x0F000000&(data))>>24)
#define  IPPRE_IPPRE_E4_get_ippre_mute_hact_max(data)                            ((0x00FFF000&(data))>>12)
#define  IPPRE_IPPRE_E4_get_ippre_mute_hact_min(data)                            (0x00000FFF&(data))

#define  IPPRE_IPPRE_E8                                                         0x180991E8
#define  IPPRE_IPPRE_E8_reg_addr                                                 "0xB80991E8"
#define  IPPRE_IPPRE_E8_reg                                                      0xB80991E8
#define  IPPRE_IPPRE_E8_inst_addr                                                "0x003A"
#define  set_IPPRE_IPPRE_E8_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_E8_reg)=data)
#define  get_IPPRE_IPPRE_E8_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_E8_reg))
#define  IPPRE_IPPRE_E8_regr_color0_cnt_shift                                    (0)
#define  IPPRE_IPPRE_E8_regr_color0_cnt_mask                                     (0x00FFFFFF)
#define  IPPRE_IPPRE_E8_regr_color0_cnt(data)                                    (0x00FFFFFF&(data))
#define  IPPRE_IPPRE_E8_get_regr_color0_cnt(data)                                (0x00FFFFFF&(data))

#define  IPPRE_IPPRE_EC                                                         0x180991EC
#define  IPPRE_IPPRE_EC_reg_addr                                                 "0xB80991EC"
#define  IPPRE_IPPRE_EC_reg                                                      0xB80991EC
#define  IPPRE_IPPRE_EC_inst_addr                                                "0x003B"
#define  set_IPPRE_IPPRE_EC_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_EC_reg)=data)
#define  get_IPPRE_IPPRE_EC_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_EC_reg))
#define  IPPRE_IPPRE_EC_regr_color1_cnt_shift                                    (0)
#define  IPPRE_IPPRE_EC_regr_color1_cnt_mask                                     (0x00FFFFFF)
#define  IPPRE_IPPRE_EC_regr_color1_cnt(data)                                    (0x00FFFFFF&(data))
#define  IPPRE_IPPRE_EC_get_regr_color1_cnt(data)                                (0x00FFFFFF&(data))

#define  IPPRE_IPPRE_F0                                                         0x180991F0
#define  IPPRE_IPPRE_F0_reg_addr                                                 "0xB80991F0"
#define  IPPRE_IPPRE_F0_reg                                                      0xB80991F0
#define  IPPRE_IPPRE_F0_inst_addr                                                "0x003C"
#define  set_IPPRE_IPPRE_F0_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_F0_reg)=data)
#define  get_IPPRE_IPPRE_F0_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_F0_reg))
#define  IPPRE_IPPRE_F0_regr_ippre_mute_vact_shift                               (20)
#define  IPPRE_IPPRE_F0_regr_ippre_mute_hact_shift                               (8)
#define  IPPRE_IPPRE_F0_regr_ippre_mute_clk_status_shift                         (5)
#define  IPPRE_IPPRE_F0_regr_patt_enable_latch_shift                             (4)
#define  IPPRE_IPPRE_F0_regr_patt_loopcnt_shift                                  (0)
#define  IPPRE_IPPRE_F0_regr_ippre_mute_vact_mask                                (0xFFF00000)
#define  IPPRE_IPPRE_F0_regr_ippre_mute_hact_mask                                (0x000FFF00)
#define  IPPRE_IPPRE_F0_regr_ippre_mute_clk_status_mask                          (0x000000E0)
#define  IPPRE_IPPRE_F0_regr_patt_enable_latch_mask                              (0x00000010)
#define  IPPRE_IPPRE_F0_regr_patt_loopcnt_mask                                   (0x0000000F)
#define  IPPRE_IPPRE_F0_regr_ippre_mute_vact(data)                               (0xFFF00000&((data)<<20))
#define  IPPRE_IPPRE_F0_regr_ippre_mute_hact(data)                               (0x000FFF00&((data)<<8))
#define  IPPRE_IPPRE_F0_regr_ippre_mute_clk_status(data)                         (0x000000E0&((data)<<5))
#define  IPPRE_IPPRE_F0_regr_patt_enable_latch(data)                             (0x00000010&((data)<<4))
#define  IPPRE_IPPRE_F0_regr_patt_loopcnt(data)                                  (0x0000000F&(data))
#define  IPPRE_IPPRE_F0_get_regr_ippre_mute_vact(data)                           ((0xFFF00000&(data))>>20)
#define  IPPRE_IPPRE_F0_get_regr_ippre_mute_hact(data)                           ((0x000FFF00&(data))>>8)
#define  IPPRE_IPPRE_F0_get_regr_ippre_mute_clk_status(data)                     ((0x000000E0&(data))>>5)
#define  IPPRE_IPPRE_F0_get_regr_patt_enable_latch(data)                         ((0x00000010&(data))>>4)
#define  IPPRE_IPPRE_F0_get_regr_patt_loopcnt(data)                              (0x0000000F&(data))

#define  IPPRE_IPPRE_F4                                                         0x180991F4
#define  IPPRE_IPPRE_F4_reg_addr                                                 "0xB80991F4"
#define  IPPRE_IPPRE_F4_reg                                                      0xB80991F4
#define  IPPRE_IPPRE_F4_inst_addr                                                "0x003D"
#define  set_IPPRE_IPPRE_F4_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_F4_reg)=data)
#define  get_IPPRE_IPPRE_F4_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_F4_reg))
#define  IPPRE_IPPRE_F4_regr_dummy_0_shift                                       (20)
#define  IPPRE_IPPRE_F4_regr_ippre_mute_abnormal_shift                           (19)
#define  IPPRE_IPPRE_F4_regr_ippre_mute_vblk_abn_shift                           (18)
#define  IPPRE_IPPRE_F4_regr_ippre_mute_vde_max_abn_shift                        (17)
#define  IPPRE_IPPRE_F4_regr_ippre_mute_vde_min_abn_shift                        (16)
#define  IPPRE_IPPRE_F4_regr_ippre_mute_htotal_abn_shift                         (15)
#define  IPPRE_IPPRE_F4_regr_ippre_mute_hde_max_abn_shift                        (14)
#define  IPPRE_IPPRE_F4_regr_ippre_mute_hde_min_abn_shift                        (13)
#define  IPPRE_IPPRE_F4_regr_ippre_mute_clk_abn_shift                            (12)
#define  IPPRE_IPPRE_F4_regr_ippre_mute_htotal_shift                             (0)
#define  IPPRE_IPPRE_F4_regr_dummy_0_mask                                        (0xFFF00000)
#define  IPPRE_IPPRE_F4_regr_ippre_mute_abnormal_mask                            (0x00080000)
#define  IPPRE_IPPRE_F4_regr_ippre_mute_vblk_abn_mask                            (0x00040000)
#define  IPPRE_IPPRE_F4_regr_ippre_mute_vde_max_abn_mask                         (0x00020000)
#define  IPPRE_IPPRE_F4_regr_ippre_mute_vde_min_abn_mask                         (0x00010000)
#define  IPPRE_IPPRE_F4_regr_ippre_mute_htotal_abn_mask                          (0x00008000)
#define  IPPRE_IPPRE_F4_regr_ippre_mute_hde_max_abn_mask                         (0x00004000)
#define  IPPRE_IPPRE_F4_regr_ippre_mute_hde_min_abn_mask                         (0x00002000)
#define  IPPRE_IPPRE_F4_regr_ippre_mute_clk_abn_mask                             (0x00001000)
#define  IPPRE_IPPRE_F4_regr_ippre_mute_htotal_mask                              (0x00000FFF)
#define  IPPRE_IPPRE_F4_regr_dummy_0(data)                                       (0xFFF00000&((data)<<20))
#define  IPPRE_IPPRE_F4_regr_ippre_mute_abnormal(data)                           (0x00080000&((data)<<19))
#define  IPPRE_IPPRE_F4_regr_ippre_mute_vblk_abn(data)                           (0x00040000&((data)<<18))
#define  IPPRE_IPPRE_F4_regr_ippre_mute_vde_max_abn(data)                        (0x00020000&((data)<<17))
#define  IPPRE_IPPRE_F4_regr_ippre_mute_vde_min_abn(data)                        (0x00010000&((data)<<16))
#define  IPPRE_IPPRE_F4_regr_ippre_mute_htotal_abn(data)                         (0x00008000&((data)<<15))
#define  IPPRE_IPPRE_F4_regr_ippre_mute_hde_max_abn(data)                        (0x00004000&((data)<<14))
#define  IPPRE_IPPRE_F4_regr_ippre_mute_hde_min_abn(data)                        (0x00002000&((data)<<13))
#define  IPPRE_IPPRE_F4_regr_ippre_mute_clk_abn(data)                            (0x00001000&((data)<<12))
#define  IPPRE_IPPRE_F4_regr_ippre_mute_htotal(data)                             (0x00000FFF&(data))
#define  IPPRE_IPPRE_F4_get_regr_dummy_0(data)                                   ((0xFFF00000&(data))>>20)
#define  IPPRE_IPPRE_F4_get_regr_ippre_mute_abnormal(data)                       ((0x00080000&(data))>>19)
#define  IPPRE_IPPRE_F4_get_regr_ippre_mute_vblk_abn(data)                       ((0x00040000&(data))>>18)
#define  IPPRE_IPPRE_F4_get_regr_ippre_mute_vde_max_abn(data)                    ((0x00020000&(data))>>17)
#define  IPPRE_IPPRE_F4_get_regr_ippre_mute_vde_min_abn(data)                    ((0x00010000&(data))>>16)
#define  IPPRE_IPPRE_F4_get_regr_ippre_mute_htotal_abn(data)                     ((0x00008000&(data))>>15)
#define  IPPRE_IPPRE_F4_get_regr_ippre_mute_hde_max_abn(data)                    ((0x00004000&(data))>>14)
#define  IPPRE_IPPRE_F4_get_regr_ippre_mute_hde_min_abn(data)                    ((0x00002000&(data))>>13)
#define  IPPRE_IPPRE_F4_get_regr_ippre_mute_clk_abn(data)                        ((0x00001000&(data))>>12)
#define  IPPRE_IPPRE_F4_get_regr_ippre_mute_htotal(data)                         (0x00000FFF&(data))

#define  IPPRE_IPPRE_F8                                                         0x180991F8
#define  IPPRE_IPPRE_F8_reg_addr                                                 "0xB80991F8"
#define  IPPRE_IPPRE_F8_reg                                                      0xB80991F8
#define  IPPRE_IPPRE_F8_inst_addr                                                "0x003E"
#define  set_IPPRE_IPPRE_F8_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_F8_reg)=data)
#define  get_IPPRE_IPPRE_F8_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_F8_reg))
#define  IPPRE_IPPRE_F8_regr_inp_cursor_fd_b_shift                               (20)
#define  IPPRE_IPPRE_F8_regr_inp_cursor_fd_g_shift                               (10)
#define  IPPRE_IPPRE_F8_regr_inp_cursor_fd_r_shift                               (0)
#define  IPPRE_IPPRE_F8_regr_inp_cursor_fd_b_mask                                (0x3FF00000)
#define  IPPRE_IPPRE_F8_regr_inp_cursor_fd_g_mask                                (0x000FFC00)
#define  IPPRE_IPPRE_F8_regr_inp_cursor_fd_r_mask                                (0x000003FF)
#define  IPPRE_IPPRE_F8_regr_inp_cursor_fd_b(data)                               (0x3FF00000&((data)<<20))
#define  IPPRE_IPPRE_F8_regr_inp_cursor_fd_g(data)                               (0x000FFC00&((data)<<10))
#define  IPPRE_IPPRE_F8_regr_inp_cursor_fd_r(data)                               (0x000003FF&(data))
#define  IPPRE_IPPRE_F8_get_regr_inp_cursor_fd_b(data)                           ((0x3FF00000&(data))>>20)
#define  IPPRE_IPPRE_F8_get_regr_inp_cursor_fd_g(data)                           ((0x000FFC00&(data))>>10)
#define  IPPRE_IPPRE_F8_get_regr_inp_cursor_fd_r(data)                           (0x000003FF&(data))

#define  IPPRE_IPPRE_FC                                                         0x180991FC
#define  IPPRE_IPPRE_FC_reg_addr                                                 "0xB80991FC"
#define  IPPRE_IPPRE_FC_reg                                                      0xB80991FC
#define  IPPRE_IPPRE_FC_inst_addr                                                "0x003F"
#define  set_IPPRE_IPPRE_FC_reg(data)                                            (*((volatile unsigned int*)IPPRE_IPPRE_FC_reg)=data)
#define  get_IPPRE_IPPRE_FC_reg                                                  (*((volatile unsigned int*)IPPRE_IPPRE_FC_reg))
#define  IPPRE_IPPRE_FC_regr_inp_cursor_bd_b_shift                               (20)
#define  IPPRE_IPPRE_FC_regr_inp_cursor_bd_g_shift                               (10)
#define  IPPRE_IPPRE_FC_regr_inp_cursor_bd_r_shift                               (0)
#define  IPPRE_IPPRE_FC_regr_inp_cursor_bd_b_mask                                (0x3FF00000)
#define  IPPRE_IPPRE_FC_regr_inp_cursor_bd_g_mask                                (0x000FFC00)
#define  IPPRE_IPPRE_FC_regr_inp_cursor_bd_r_mask                                (0x000003FF)
#define  IPPRE_IPPRE_FC_regr_inp_cursor_bd_b(data)                               (0x3FF00000&((data)<<20))
#define  IPPRE_IPPRE_FC_regr_inp_cursor_bd_g(data)                               (0x000FFC00&((data)<<10))
#define  IPPRE_IPPRE_FC_regr_inp_cursor_bd_r(data)                               (0x000003FF&(data))
#define  IPPRE_IPPRE_FC_get_regr_inp_cursor_bd_b(data)                           ((0x3FF00000&(data))>>20)
#define  IPPRE_IPPRE_FC_get_regr_inp_cursor_bd_g(data)                           ((0x000FFC00&(data))>>10)
#define  IPPRE_IPPRE_FC_get_regr_inp_cursor_bd_r(data)                           (0x000003FF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======IPPRE register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  inp_cursor_color:3;
        RBus_UInt32  inp_cursor_v:13;
        RBus_UInt32  inp_cursor_en:1;
        RBus_UInt32  inp_cursor_3d_flag:1;
        RBus_UInt32  inp_cursor_show:1;
        RBus_UInt32  inp_cursor_h:13;
    };
}ippre_ippre_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy04:5;
        RBus_UInt32  inp_cursor_src_3d_en:1;
        RBus_UInt32  kmc_blend_uv_mode:2;
        RBus_UInt32  kmc_blend_uv_alpha:8;
        RBus_UInt32  ippre_444to422_mode:2;
        RBus_UInt32  bbd_data_sel:1;
        RBus_UInt32  kmc_blend_y_bypass:1;
        RBus_UInt32  kmc_blend_y_alpha:8;
        RBus_UInt32  uv_odd:1;
        RBus_UInt32  ippre_444to422_en:1;
        RBus_UInt32  csc_cursor_sel:1;
        RBus_UInt32  patt_cursor_sel:1;
    };
}ippre_ippre_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy08:4;
        RBus_UInt32  ippre_retiming_dummy_num:4;
        RBus_UInt32  ippre_retiming_hact:12;
        RBus_UInt32  ippre_retiming_vact:12;
    };
}ippre_ippre_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy0c:13;
        RBus_UInt32  kmc_blend_logo_uv_mode:2;
        RBus_UInt32  kmc_blend_logo_uv_alpha:8;
        RBus_UInt32  kmc_blend_logo_y_bypass:1;
        RBus_UInt32  kmc_blend_logo_y_alpha:8;
    };
}ippre_ippre_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy10_2:3;
        RBus_UInt32  patt_vact:13;
        RBus_UInt32  dummy10:4;
        RBus_UInt32  patt_hact:12;
    };
}ippre_ippre_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy14_2:3;
        RBus_UInt32  patt_vtotal:13;
        RBus_UInt32  dummy14:4;
        RBus_UInt32  patt_htotal:12;
    };
}ippre_ippre_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_444to422_coef:32;
    };
}ippre_ippre_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1c:8;
        RBus_UInt32  ippre_444to422_coef1:24;
    };
}ippre_ippre_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_hold_time:16;
        RBus_UInt32  patt_type_1:4;
        RBus_UInt32  patt_type_0:4;
        RBus_UInt32  patt_enable:1;
        RBus_UInt32  patt_mode:2;
        RBus_UInt32  patt_move_en:1;
        RBus_UInt32  patt_move_en_1:1;
        RBus_UInt32  patt_3d_fs_lr_inv:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  freerun_ctrl_enable:1;
    };
}ippre_ippre_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loop_patt_sequency:32;
    };
}ippre_ippre_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_para_0:32;
    };
}ippre_ippre_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_para_1:32;
    };
}ippre_ippre_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loop_patt_para0:32;
    };
}ippre_ippre_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loop_patt_para1:32;
    };
}ippre_ippre_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loop_patt_para2:32;
    };
}ippre_ippre_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loop_patt_para3:32;
    };
}ippre_ippre_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loop_patt_para4:32;
    };
}ippre_ippre_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loop_patt_para5:32;
    };
}ippre_ippre_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loop_patt_para6:32;
    };
}ippre_ippre_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loop_patt_para7:32;
    };
}ippre_ippre_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  speed_h_cadence:8;
        RBus_UInt32  speed_v:8;
        RBus_UInt32  speed_h:8;
        RBus_UInt32  scroll_bar_mode:1;
        RBus_UInt32  scroll_bar_en:1;
        RBus_UInt32  loop_restart_mode:1;
        RBus_UInt32  loop_stop:1;
        RBus_UInt32  loop_number:4;
    };
}ippre_ippre_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  speed_v_cadence:8;
        RBus_UInt32  bar_hight:12;
        RBus_UInt32  bar_width:12;
    };
}ippre_ippre_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy58:2;
        RBus_UInt32  bar_b:10;
        RBus_UInt32  bar_g:10;
        RBus_UInt32  bar_r:10;
    };
}ippre_ippre_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy5c:16;
        RBus_UInt32  speed_v_1:8;
        RBus_UInt32  speed_h_1:8;
    };
}ippre_ippre_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy60:2;
        RBus_UInt32  patt_move_en_cadence:1;
        RBus_UInt32  cadence_frm_length:5;
        RBus_UInt32  circle_r2:24;
    };
}ippre_ippre_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy64:8;
        RBus_UInt32  circle_center_v:12;
        RBus_UInt32  circle_center_h:12;
    };
}ippre_ippre_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  random_seed:32;
    };
}ippre_ippre_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy6c:22;
        RBus_UInt32  random_rgb:6;
        RBus_UInt32  random_width:3;
        RBus_UInt32  random_en:1;
    };
}ippre_ippre_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cadence_frm:32;
    };
}ippre_ippre_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ippre_center_color0_v:10;
        RBus_UInt32  ippre_center_color0_u:10;
        RBus_UInt32  ippre_center_color0_y:10;
    };
}ippre_ippre_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ippre_color_range0_u:10;
        RBus_UInt32  ippre_color_range1_y:10;
        RBus_UInt32  ippre_color_range0_y:10;
    };
}ippre_ippre_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ippre_center_color1_v:10;
        RBus_UInt32  ippre_center_color1_u:10;
        RBus_UInt32  ippre_center_color1_y:10;
    };
}ippre_ippre_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  usr_coef01_h:15;
        RBus_UInt32  usr_coef00_h:15;
    };
}ippre_ippre_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  usr_coef10_h:15;
        RBus_UInt32  usr_coef02_h:15;
    };
}ippre_ippre_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  usr_coef12_h:15;
        RBus_UInt32  usr_coef11_h:15;
    };
}ippre_ippre_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  usr_coef21_h:15;
        RBus_UInt32  usr_coef20_h:15;
    };
}ippre_ippre_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  usr_const0_h:12;
        RBus_UInt32  usr_coef22_h:15;
    };
}ippre_ippre_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  convert_map_h:3;
        RBus_UInt32  convert_mode_h:4;
        RBus_UInt32  convert_on_h:1;
        RBus_UInt32  usr_const2_h:12;
        RBus_UInt32  usr_const1_h:12;
    };
}ippre_ippre_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ippre_color_range1_u:10;
        RBus_UInt32  ippre_color_range1_v:10;
        RBus_UInt32  ippre_color_range0_v:10;
    };
}ippre_ippre_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  usr_coef01_l:15;
        RBus_UInt32  usr_coef00_l:15;
    };
}ippre_ippre_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  usr_coef10_l:15;
        RBus_UInt32  usr_coef02_l:15;
    };
}ippre_ippre_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  usr_coef12_l:15;
        RBus_UInt32  usr_coef11_l:15;
    };
}ippre_ippre_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  usr_coef21_l:15;
        RBus_UInt32  usr_coef20_l:15;
    };
}ippre_ippre_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  usr_const0_l:12;
        RBus_UInt32  usr_coef22_l:15;
    };
}ippre_ippre_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  convert_map_l:3;
        RBus_UInt32  convert_mode_l:4;
        RBus_UInt32  convert_on_l:1;
        RBus_UInt32  usr_const2_l:12;
        RBus_UInt32  usr_const1_l:12;
    };
}ippre_ippre_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  ippre_use_mute_hs:1;
        RBus_UInt32  ippre_use_mute_vs:1;
        RBus_UInt32  ippre_mute_regen_vs_pos:7;
        RBus_UInt32  ippre_mute_regen_hs_pos:8;
        RBus_UInt32  ippre_mute_frm_trig_pos:12;
    };
}ippre_ippre_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_mute_vblank_max:8;
        RBus_UInt32  ippre_mute_vact_max:12;
        RBus_UInt32  ippre_mute_vact_min:12;
    };
}ippre_ippre_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_mute_freq_high_th:10;
        RBus_UInt32  ippre_mute_freq_low_th:10;
        RBus_UInt32  ippre_mute_htotal_max:12;
    };
}ippre_ippre_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hpattern:32;
    };
}ippre_ippre_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hpattern1:32;
    };
}ippre_ippre_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hpattern2:32;
    };
}ippre_ippre_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hpattern3:32;
    };
}ippre_ippre_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hpattern4:32;
    };
}ippre_ippre_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hpattern5:32;
    };
}ippre_ippre_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hpattern6:32;
    };
}ippre_ippre_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hpattern7:32;
    };
}ippre_ippre_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_mute_vact_max_det_en:1;
        RBus_UInt32  ippre_mute_vact_min_det_en:1;
        RBus_UInt32  ippre_mute_vblank_det_en:1;
        RBus_UInt32  ippre_mute_htotal_max_det_en:1;
        RBus_UInt32  ippre_mute_hact_max_det_en:1;
        RBus_UInt32  ippre_mute_hact_min_det_en:1;
        RBus_UInt32  ippre_mute_clk_det_en:1;
        RBus_UInt32  ippre_mute_det_function_en:1;
        RBus_UInt32  ippre_mute_vact:12;
        RBus_UInt32  ippre_mute_hact:12;
    };
}ippre_ippre_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_mute_regen_vs_width:4;
        RBus_UInt32  ippre_mute_regen_hs_width:4;
        RBus_UInt32  ippre_mute_hact_max:12;
        RBus_UInt32  ippre_mute_hact_min:12;
    };
}ippre_ippre_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_color0_cnt:24;
    };
}ippre_ippre_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_color1_cnt:24;
    };
}ippre_ippre_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ippre_mute_vact:12;
        RBus_UInt32  regr_ippre_mute_hact:12;
        RBus_UInt32  regr_ippre_mute_clk_status:3;
        RBus_UInt32  regr_patt_enable_latch:1;
        RBus_UInt32  regr_patt_loopcnt:4;
    };
}ippre_ippre_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dummy_0:12;
        RBus_UInt32  regr_ippre_mute_abnormal:1;
        RBus_UInt32  regr_ippre_mute_vblk_abn:1;
        RBus_UInt32  regr_ippre_mute_vde_max_abn:1;
        RBus_UInt32  regr_ippre_mute_vde_min_abn:1;
        RBus_UInt32  regr_ippre_mute_htotal_abn:1;
        RBus_UInt32  regr_ippre_mute_hde_max_abn:1;
        RBus_UInt32  regr_ippre_mute_hde_min_abn:1;
        RBus_UInt32  regr_ippre_mute_clk_abn:1;
        RBus_UInt32  regr_ippre_mute_htotal:12;
    };
}ippre_ippre_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_inp_cursor_fd_b:10;
        RBus_UInt32  regr_inp_cursor_fd_g:10;
        RBus_UInt32  regr_inp_cursor_fd_r:10;
    };
}ippre_ippre_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_inp_cursor_bd_b:10;
        RBus_UInt32  regr_inp_cursor_bd_g:10;
        RBus_UInt32  regr_inp_cursor_bd_r:10;
    };
}ippre_ippre_fc_RBUS;

#else //apply LITTLE_ENDIAN

//======IPPRE register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  inp_cursor_h:13;
        RBus_UInt32  inp_cursor_show:1;
        RBus_UInt32  inp_cursor_3d_flag:1;
        RBus_UInt32  inp_cursor_en:1;
        RBus_UInt32  inp_cursor_v:13;
        RBus_UInt32  inp_cursor_color:3;
    };
}ippre_ippre_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_cursor_sel:1;
        RBus_UInt32  csc_cursor_sel:1;
        RBus_UInt32  ippre_444to422_en:1;
        RBus_UInt32  uv_odd:1;
        RBus_UInt32  kmc_blend_y_alpha:8;
        RBus_UInt32  kmc_blend_y_bypass:1;
        RBus_UInt32  bbd_data_sel:1;
        RBus_UInt32  ippre_444to422_mode:2;
        RBus_UInt32  kmc_blend_uv_alpha:8;
        RBus_UInt32  kmc_blend_uv_mode:2;
        RBus_UInt32  inp_cursor_src_3d_en:1;
        RBus_UInt32  dummy04:5;
    };
}ippre_ippre_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_retiming_vact:12;
        RBus_UInt32  ippre_retiming_hact:12;
        RBus_UInt32  ippre_retiming_dummy_num:4;
        RBus_UInt32  dummy08:4;
    };
}ippre_ippre_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_blend_logo_y_alpha:8;
        RBus_UInt32  kmc_blend_logo_y_bypass:1;
        RBus_UInt32  kmc_blend_logo_uv_alpha:8;
        RBus_UInt32  kmc_blend_logo_uv_mode:2;
        RBus_UInt32  dummy0c:13;
    };
}ippre_ippre_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_hact:12;
        RBus_UInt32  dummy10:4;
        RBus_UInt32  patt_vact:13;
        RBus_UInt32  dummy10_2:3;
    };
}ippre_ippre_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_htotal:12;
        RBus_UInt32  dummy14:4;
        RBus_UInt32  patt_vtotal:13;
        RBus_UInt32  dummy14_2:3;
    };
}ippre_ippre_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_444to422_coef:32;
    };
}ippre_ippre_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_444to422_coef1:24;
        RBus_UInt32  dummy1c:8;
    };
}ippre_ippre_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  freerun_ctrl_enable:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  patt_3d_fs_lr_inv:1;
        RBus_UInt32  patt_move_en_1:1;
        RBus_UInt32  patt_move_en:1;
        RBus_UInt32  patt_mode:2;
        RBus_UInt32  patt_enable:1;
        RBus_UInt32  patt_type_0:4;
        RBus_UInt32  patt_type_1:4;
        RBus_UInt32  patt_hold_time:16;
    };
}ippre_ippre_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loop_patt_sequency:32;
    };
}ippre_ippre_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_para_0:32;
    };
}ippre_ippre_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_para_1:32;
    };
}ippre_ippre_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loop_patt_para0:32;
    };
}ippre_ippre_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loop_patt_para1:32;
    };
}ippre_ippre_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loop_patt_para2:32;
    };
}ippre_ippre_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loop_patt_para3:32;
    };
}ippre_ippre_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loop_patt_para4:32;
    };
}ippre_ippre_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loop_patt_para5:32;
    };
}ippre_ippre_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loop_patt_para6:32;
    };
}ippre_ippre_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loop_patt_para7:32;
    };
}ippre_ippre_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loop_number:4;
        RBus_UInt32  loop_stop:1;
        RBus_UInt32  loop_restart_mode:1;
        RBus_UInt32  scroll_bar_en:1;
        RBus_UInt32  scroll_bar_mode:1;
        RBus_UInt32  speed_h:8;
        RBus_UInt32  speed_v:8;
        RBus_UInt32  speed_h_cadence:8;
    };
}ippre_ippre_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bar_width:12;
        RBus_UInt32  bar_hight:12;
        RBus_UInt32  speed_v_cadence:8;
    };
}ippre_ippre_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bar_r:10;
        RBus_UInt32  bar_g:10;
        RBus_UInt32  bar_b:10;
        RBus_UInt32  dummy58:2;
    };
}ippre_ippre_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  speed_h_1:8;
        RBus_UInt32  speed_v_1:8;
        RBus_UInt32  dummy5c:16;
    };
}ippre_ippre_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  circle_r2:24;
        RBus_UInt32  cadence_frm_length:5;
        RBus_UInt32  patt_move_en_cadence:1;
        RBus_UInt32  dummy60:2;
    };
}ippre_ippre_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  circle_center_h:12;
        RBus_UInt32  circle_center_v:12;
        RBus_UInt32  dummy64:8;
    };
}ippre_ippre_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  random_seed:32;
    };
}ippre_ippre_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  random_en:1;
        RBus_UInt32  random_width:3;
        RBus_UInt32  random_rgb:6;
        RBus_UInt32  dummy6c:22;
    };
}ippre_ippre_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cadence_frm:32;
    };
}ippre_ippre_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_center_color0_y:10;
        RBus_UInt32  ippre_center_color0_u:10;
        RBus_UInt32  ippre_center_color0_v:10;
        RBus_UInt32  res1:2;
    };
}ippre_ippre_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_color_range0_y:10;
        RBus_UInt32  ippre_color_range1_y:10;
        RBus_UInt32  ippre_color_range0_u:10;
        RBus_UInt32  res1:2;
    };
}ippre_ippre_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_center_color1_y:10;
        RBus_UInt32  ippre_center_color1_u:10;
        RBus_UInt32  ippre_center_color1_v:10;
        RBus_UInt32  res1:2;
    };
}ippre_ippre_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usr_coef00_h:15;
        RBus_UInt32  usr_coef01_h:15;
        RBus_UInt32  res1:2;
    };
}ippre_ippre_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usr_coef02_h:15;
        RBus_UInt32  usr_coef10_h:15;
        RBus_UInt32  res1:2;
    };
}ippre_ippre_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usr_coef11_h:15;
        RBus_UInt32  usr_coef12_h:15;
        RBus_UInt32  res1:2;
    };
}ippre_ippre_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usr_coef20_h:15;
        RBus_UInt32  usr_coef21_h:15;
        RBus_UInt32  res1:2;
    };
}ippre_ippre_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usr_coef22_h:15;
        RBus_UInt32  usr_const0_h:12;
        RBus_UInt32  res1:5;
    };
}ippre_ippre_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usr_const1_h:12;
        RBus_UInt32  usr_const2_h:12;
        RBus_UInt32  convert_on_h:1;
        RBus_UInt32  convert_mode_h:4;
        RBus_UInt32  convert_map_h:3;
    };
}ippre_ippre_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_color_range0_v:10;
        RBus_UInt32  ippre_color_range1_v:10;
        RBus_UInt32  ippre_color_range1_u:10;
        RBus_UInt32  res1:2;
    };
}ippre_ippre_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usr_coef00_l:15;
        RBus_UInt32  usr_coef01_l:15;
        RBus_UInt32  res1:2;
    };
}ippre_ippre_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usr_coef02_l:15;
        RBus_UInt32  usr_coef10_l:15;
        RBus_UInt32  res1:2;
    };
}ippre_ippre_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usr_coef11_l:15;
        RBus_UInt32  usr_coef12_l:15;
        RBus_UInt32  res1:2;
    };
}ippre_ippre_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usr_coef20_l:15;
        RBus_UInt32  usr_coef21_l:15;
        RBus_UInt32  res1:2;
    };
}ippre_ippre_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usr_coef22_l:15;
        RBus_UInt32  usr_const0_l:12;
        RBus_UInt32  res1:5;
    };
}ippre_ippre_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usr_const1_l:12;
        RBus_UInt32  usr_const2_l:12;
        RBus_UInt32  convert_on_l:1;
        RBus_UInt32  convert_mode_l:4;
        RBus_UInt32  convert_map_l:3;
    };
}ippre_ippre_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_mute_frm_trig_pos:12;
        RBus_UInt32  ippre_mute_regen_hs_pos:8;
        RBus_UInt32  ippre_mute_regen_vs_pos:7;
        RBus_UInt32  ippre_use_mute_vs:1;
        RBus_UInt32  ippre_use_mute_hs:1;
        RBus_UInt32  res1:3;
    };
}ippre_ippre_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_mute_vact_min:12;
        RBus_UInt32  ippre_mute_vact_max:12;
        RBus_UInt32  ippre_mute_vblank_max:8;
    };
}ippre_ippre_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_mute_htotal_max:12;
        RBus_UInt32  ippre_mute_freq_low_th:10;
        RBus_UInt32  ippre_mute_freq_high_th:10;
    };
}ippre_ippre_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hpattern:32;
    };
}ippre_ippre_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hpattern1:32;
    };
}ippre_ippre_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hpattern2:32;
    };
}ippre_ippre_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hpattern3:32;
    };
}ippre_ippre_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hpattern4:32;
    };
}ippre_ippre_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hpattern5:32;
    };
}ippre_ippre_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hpattern6:32;
    };
}ippre_ippre_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hpattern7:32;
    };
}ippre_ippre_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_mute_hact:12;
        RBus_UInt32  ippre_mute_vact:12;
        RBus_UInt32  ippre_mute_det_function_en:1;
        RBus_UInt32  ippre_mute_clk_det_en:1;
        RBus_UInt32  ippre_mute_hact_min_det_en:1;
        RBus_UInt32  ippre_mute_hact_max_det_en:1;
        RBus_UInt32  ippre_mute_htotal_max_det_en:1;
        RBus_UInt32  ippre_mute_vblank_det_en:1;
        RBus_UInt32  ippre_mute_vact_min_det_en:1;
        RBus_UInt32  ippre_mute_vact_max_det_en:1;
    };
}ippre_ippre_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_mute_hact_min:12;
        RBus_UInt32  ippre_mute_hact_max:12;
        RBus_UInt32  ippre_mute_regen_hs_width:4;
        RBus_UInt32  ippre_mute_regen_vs_width:4;
    };
}ippre_ippre_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_color0_cnt:24;
        RBus_UInt32  res1:8;
    };
}ippre_ippre_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_color1_cnt:24;
        RBus_UInt32  res1:8;
    };
}ippre_ippre_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_patt_loopcnt:4;
        RBus_UInt32  regr_patt_enable_latch:1;
        RBus_UInt32  regr_ippre_mute_clk_status:3;
        RBus_UInt32  regr_ippre_mute_hact:12;
        RBus_UInt32  regr_ippre_mute_vact:12;
    };
}ippre_ippre_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ippre_mute_htotal:12;
        RBus_UInt32  regr_ippre_mute_clk_abn:1;
        RBus_UInt32  regr_ippre_mute_hde_min_abn:1;
        RBus_UInt32  regr_ippre_mute_hde_max_abn:1;
        RBus_UInt32  regr_ippre_mute_htotal_abn:1;
        RBus_UInt32  regr_ippre_mute_vde_min_abn:1;
        RBus_UInt32  regr_ippre_mute_vde_max_abn:1;
        RBus_UInt32  regr_ippre_mute_vblk_abn:1;
        RBus_UInt32  regr_ippre_mute_abnormal:1;
        RBus_UInt32  regr_dummy_0:12;
    };
}ippre_ippre_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_inp_cursor_fd_r:10;
        RBus_UInt32  regr_inp_cursor_fd_g:10;
        RBus_UInt32  regr_inp_cursor_fd_b:10;
        RBus_UInt32  res1:2;
    };
}ippre_ippre_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_inp_cursor_bd_r:10;
        RBus_UInt32  regr_inp_cursor_bd_g:10;
        RBus_UInt32  regr_inp_cursor_bd_b:10;
        RBus_UInt32  res1:2;
    };
}ippre_ippre_fc_RBUS;




#endif 


#endif 
