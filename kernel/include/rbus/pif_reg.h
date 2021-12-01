/**
* @file Merlin5-DesignSpec-D_Domain_DISP_IF
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_PIF_REG_H_
#define _RBUS_PIF_REG_H_

#include "rbus_types.h"



//  PIF Register Address
#define  PIF_LVDS_CTRL1                                                         0x1802D000
#define  PIF_LVDS_CTRL1_reg_addr                                                 "0xB802D000"
#define  PIF_LVDS_CTRL1_reg                                                      0xB802D000
#define  PIF_LVDS_CTRL1_inst_addr                                                "0x0000"
#define  set_PIF_LVDS_CTRL1_reg(data)                                            (*((volatile unsigned int*)PIF_LVDS_CTRL1_reg)=data)
#define  get_PIF_LVDS_CTRL1_reg                                                  (*((volatile unsigned int*)PIF_LVDS_CTRL1_reg))
#define  PIF_LVDS_CTRL1_lvds_arsv1_sel_shift                                     (29)
#define  PIF_LVDS_CTRL1_lvds_arsv0_sel_shift                                     (26)
#define  PIF_LVDS_CTRL1_lvds_aden_sel_shift                                      (23)
#define  PIF_LVDS_CTRL1_lvds_avs_sel_shift                                       (20)
#define  PIF_LVDS_CTRL1_lvds_ahs_sel_shift                                       (17)
#define  PIF_LVDS_CTRL1_lvds_brsv1_sel_shift                                     (13)
#define  PIF_LVDS_CTRL1_lvds_brsv0_sel_shift                                     (10)
#define  PIF_LVDS_CTRL1_lvds_bden_sel_shift                                      (7)
#define  PIF_LVDS_CTRL1_lvds_bvs_sel_shift                                       (4)
#define  PIF_LVDS_CTRL1_lvds_bhs_sel_shift                                       (1)
#define  PIF_LVDS_CTRL1_lvds_arsv1_sel_mask                                      (0xE0000000)
#define  PIF_LVDS_CTRL1_lvds_arsv0_sel_mask                                      (0x1C000000)
#define  PIF_LVDS_CTRL1_lvds_aden_sel_mask                                       (0x03800000)
#define  PIF_LVDS_CTRL1_lvds_avs_sel_mask                                        (0x00700000)
#define  PIF_LVDS_CTRL1_lvds_ahs_sel_mask                                        (0x000E0000)
#define  PIF_LVDS_CTRL1_lvds_brsv1_sel_mask                                      (0x0000E000)
#define  PIF_LVDS_CTRL1_lvds_brsv0_sel_mask                                      (0x00001C00)
#define  PIF_LVDS_CTRL1_lvds_bden_sel_mask                                       (0x00000380)
#define  PIF_LVDS_CTRL1_lvds_bvs_sel_mask                                        (0x00000070)
#define  PIF_LVDS_CTRL1_lvds_bhs_sel_mask                                        (0x0000000E)
#define  PIF_LVDS_CTRL1_lvds_arsv1_sel(data)                                     (0xE0000000&((data)<<29))
#define  PIF_LVDS_CTRL1_lvds_arsv0_sel(data)                                     (0x1C000000&((data)<<26))
#define  PIF_LVDS_CTRL1_lvds_aden_sel(data)                                      (0x03800000&((data)<<23))
#define  PIF_LVDS_CTRL1_lvds_avs_sel(data)                                       (0x00700000&((data)<<20))
#define  PIF_LVDS_CTRL1_lvds_ahs_sel(data)                                       (0x000E0000&((data)<<17))
#define  PIF_LVDS_CTRL1_lvds_brsv1_sel(data)                                     (0x0000E000&((data)<<13))
#define  PIF_LVDS_CTRL1_lvds_brsv0_sel(data)                                     (0x00001C00&((data)<<10))
#define  PIF_LVDS_CTRL1_lvds_bden_sel(data)                                      (0x00000380&((data)<<7))
#define  PIF_LVDS_CTRL1_lvds_bvs_sel(data)                                       (0x00000070&((data)<<4))
#define  PIF_LVDS_CTRL1_lvds_bhs_sel(data)                                       (0x0000000E&((data)<<1))
#define  PIF_LVDS_CTRL1_get_lvds_arsv1_sel(data)                                 ((0xE0000000&(data))>>29)
#define  PIF_LVDS_CTRL1_get_lvds_arsv0_sel(data)                                 ((0x1C000000&(data))>>26)
#define  PIF_LVDS_CTRL1_get_lvds_aden_sel(data)                                  ((0x03800000&(data))>>23)
#define  PIF_LVDS_CTRL1_get_lvds_avs_sel(data)                                   ((0x00700000&(data))>>20)
#define  PIF_LVDS_CTRL1_get_lvds_ahs_sel(data)                                   ((0x000E0000&(data))>>17)
#define  PIF_LVDS_CTRL1_get_lvds_brsv1_sel(data)                                 ((0x0000E000&(data))>>13)
#define  PIF_LVDS_CTRL1_get_lvds_brsv0_sel(data)                                 ((0x00001C00&(data))>>10)
#define  PIF_LVDS_CTRL1_get_lvds_bden_sel(data)                                  ((0x00000380&(data))>>7)
#define  PIF_LVDS_CTRL1_get_lvds_bvs_sel(data)                                   ((0x00000070&(data))>>4)
#define  PIF_LVDS_CTRL1_get_lvds_bhs_sel(data)                                   ((0x0000000E&(data))>>1)

#define  PIF_LVDS_CTRL2                                                         0x1802D004
#define  PIF_LVDS_CTRL2_reg_addr                                                 "0xB802D004"
#define  PIF_LVDS_CTRL2_reg                                                      0xB802D004
#define  PIF_LVDS_CTRL2_inst_addr                                                "0x0001"
#define  set_PIF_LVDS_CTRL2_reg(data)                                            (*((volatile unsigned int*)PIF_LVDS_CTRL2_reg)=data)
#define  get_PIF_LVDS_CTRL2_reg                                                  (*((volatile unsigned int*)PIF_LVDS_CTRL2_reg))
#define  PIF_LVDS_CTRL2_dummy_31_0_shift                                         (0)
#define  PIF_LVDS_CTRL2_dummy_31_0_mask                                          (0xFFFFFFFF)
#define  PIF_LVDS_CTRL2_dummy_31_0(data)                                         (0xFFFFFFFF&(data))
#define  PIF_LVDS_CTRL2_get_dummy_31_0(data)                                     (0xFFFFFFFF&(data))

#define  PIF_LVDS_CTRL3                                                         0x1802D008
#define  PIF_LVDS_CTRL3_reg_addr                                                 "0xB802D008"
#define  PIF_LVDS_CTRL3_reg                                                      0xB802D008
#define  PIF_LVDS_CTRL3_inst_addr                                                "0x0002"
#define  set_PIF_LVDS_CTRL3_reg(data)                                            (*((volatile unsigned int*)PIF_LVDS_CTRL3_reg)=data)
#define  get_PIF_LVDS_CTRL3_reg                                                  (*((volatile unsigned int*)PIF_LVDS_CTRL3_reg))
#define  PIF_LVDS_CTRL3_lvds_hsync_inv_shift                                     (17)
#define  PIF_LVDS_CTRL3_lvds_vsync_inv_shift                                     (16)
#define  PIF_LVDS_CTRL3_lvds_map_inv_shift                                       (14)
#define  PIF_LVDS_CTRL3_lvds_map_shift                                           (12)
#define  PIF_LVDS_CTRL3_lvds_aport_en_shift                                      (7)
#define  PIF_LVDS_CTRL3_lvds_bport_en_shift                                      (6)
#define  PIF_LVDS_CTRL3_lvds_hsync_inv_mask                                      (0x00020000)
#define  PIF_LVDS_CTRL3_lvds_vsync_inv_mask                                      (0x00010000)
#define  PIF_LVDS_CTRL3_lvds_map_inv_mask                                        (0x00004000)
#define  PIF_LVDS_CTRL3_lvds_map_mask                                            (0x00003000)
#define  PIF_LVDS_CTRL3_lvds_aport_en_mask                                       (0x00000080)
#define  PIF_LVDS_CTRL3_lvds_bport_en_mask                                       (0x00000040)
#define  PIF_LVDS_CTRL3_lvds_hsync_inv(data)                                     (0x00020000&((data)<<17))
#define  PIF_LVDS_CTRL3_lvds_vsync_inv(data)                                     (0x00010000&((data)<<16))
#define  PIF_LVDS_CTRL3_lvds_map_inv(data)                                       (0x00004000&((data)<<14))
#define  PIF_LVDS_CTRL3_lvds_map(data)                                           (0x00003000&((data)<<12))
#define  PIF_LVDS_CTRL3_lvds_aport_en(data)                                      (0x00000080&((data)<<7))
#define  PIF_LVDS_CTRL3_lvds_bport_en(data)                                      (0x00000040&((data)<<6))
#define  PIF_LVDS_CTRL3_get_lvds_hsync_inv(data)                                 ((0x00020000&(data))>>17)
#define  PIF_LVDS_CTRL3_get_lvds_vsync_inv(data)                                 ((0x00010000&(data))>>16)
#define  PIF_LVDS_CTRL3_get_lvds_map_inv(data)                                   ((0x00004000&(data))>>14)
#define  PIF_LVDS_CTRL3_get_lvds_map(data)                                       ((0x00003000&(data))>>12)
#define  PIF_LVDS_CTRL3_get_lvds_aport_en(data)                                  ((0x00000080&(data))>>7)
#define  PIF_LVDS_CTRL3_get_lvds_bport_en(data)                                  ((0x00000040&(data))>>6)

#define  PIF_LVDS_CTRL4                                                         0x1802D00C
#define  PIF_LVDS_CTRL4_reg_addr                                                 "0xB802D00C"
#define  PIF_LVDS_CTRL4_reg                                                      0xB802D00C
#define  PIF_LVDS_CTRL4_inst_addr                                                "0x0003"
#define  set_PIF_LVDS_CTRL4_reg(data)                                            (*((volatile unsigned int*)PIF_LVDS_CTRL4_reg)=data)
#define  get_PIF_LVDS_CTRL4_reg                                                  (*((volatile unsigned int*)PIF_LVDS_CTRL4_reg))
#define  PIF_LVDS_CTRL4_dummy_31_0_shift                                         (0)
#define  PIF_LVDS_CTRL4_dummy_31_0_mask                                          (0xFFFFFFFF)
#define  PIF_LVDS_CTRL4_dummy_31_0(data)                                         (0xFFFFFFFF&(data))
#define  PIF_LVDS_CTRL4_get_dummy_31_0(data)                                     (0xFFFFFFFF&(data))

#define  PIF_LVDS_CTRL5                                                         0x1802D010
#define  PIF_LVDS_CTRL5_reg_addr                                                 "0xB802D010"
#define  PIF_LVDS_CTRL5_reg                                                      0xB802D010
#define  PIF_LVDS_CTRL5_inst_addr                                                "0x0004"
#define  set_PIF_LVDS_CTRL5_reg(data)                                            (*((volatile unsigned int*)PIF_LVDS_CTRL5_reg)=data)
#define  get_PIF_LVDS_CTRL5_reg                                                  (*((volatile unsigned int*)PIF_LVDS_CTRL5_reg))
#define  PIF_LVDS_CTRL5_dummy_31_0_shift                                         (0)
#define  PIF_LVDS_CTRL5_dummy_31_0_mask                                          (0xFFFFFFFF)
#define  PIF_LVDS_CTRL5_dummy_31_0(data)                                         (0xFFFFFFFF&(data))
#define  PIF_LVDS_CTRL5_get_dummy_31_0(data)                                     (0xFFFFFFFF&(data))

#define  PIF_MLVDS_CTRL0                                                        0x1802D014
#define  PIF_MLVDS_CTRL0_reg_addr                                                "0xB802D014"
#define  PIF_MLVDS_CTRL0_reg                                                     0xB802D014
#define  PIF_MLVDS_CTRL0_inst_addr                                               "0x0005"
#define  set_PIF_MLVDS_CTRL0_reg(data)                                           (*((volatile unsigned int*)PIF_MLVDS_CTRL0_reg)=data)
#define  get_PIF_MLVDS_CTRL0_reg                                                 (*((volatile unsigned int*)PIF_MLVDS_CTRL0_reg))
#define  PIF_MLVDS_CTRL0_dummy_31_11_shift                                       (11)
#define  PIF_MLVDS_CTRL0_mlvds_map_type_sel_shift                                (8)
#define  PIF_MLVDS_CTRL0_mlvds_en_shift                                          (7)
#define  PIF_MLVDS_CTRL0_mlvds_map_inv_shift                                     (6)
#define  PIF_MLVDS_CTRL0_dummy_5_2_shift                                         (2)
#define  PIF_MLVDS_CTRL0_mlvds_mode_shift                                        (0)
#define  PIF_MLVDS_CTRL0_dummy_31_11_mask                                        (0xFFFFF800)
#define  PIF_MLVDS_CTRL0_mlvds_map_type_sel_mask                                 (0x00000700)
#define  PIF_MLVDS_CTRL0_mlvds_en_mask                                           (0x00000080)
#define  PIF_MLVDS_CTRL0_mlvds_map_inv_mask                                      (0x00000040)
#define  PIF_MLVDS_CTRL0_dummy_5_2_mask                                          (0x0000003C)
#define  PIF_MLVDS_CTRL0_mlvds_mode_mask                                         (0x00000003)
#define  PIF_MLVDS_CTRL0_dummy_31_11(data)                                       (0xFFFFF800&((data)<<11))
#define  PIF_MLVDS_CTRL0_mlvds_map_type_sel(data)                                (0x00000700&((data)<<8))
#define  PIF_MLVDS_CTRL0_mlvds_en(data)                                          (0x00000080&((data)<<7))
#define  PIF_MLVDS_CTRL0_mlvds_map_inv(data)                                     (0x00000040&((data)<<6))
#define  PIF_MLVDS_CTRL0_dummy_5_2(data)                                         (0x0000003C&((data)<<2))
#define  PIF_MLVDS_CTRL0_mlvds_mode(data)                                        (0x00000003&(data))
#define  PIF_MLVDS_CTRL0_get_dummy_31_11(data)                                   ((0xFFFFF800&(data))>>11)
#define  PIF_MLVDS_CTRL0_get_mlvds_map_type_sel(data)                            ((0x00000700&(data))>>8)
#define  PIF_MLVDS_CTRL0_get_mlvds_en(data)                                      ((0x00000080&(data))>>7)
#define  PIF_MLVDS_CTRL0_get_mlvds_map_inv(data)                                 ((0x00000040&(data))>>6)
#define  PIF_MLVDS_CTRL0_get_dummy_5_2(data)                                     ((0x0000003C&(data))>>2)
#define  PIF_MLVDS_CTRL0_get_mlvds_mode(data)                                    (0x00000003&(data))

#define  PIF_MLVDS_Reset_Pul_CTRL                                               0x1802D018
#define  PIF_MLVDS_Reset_Pul_CTRL_reg_addr                                       "0xB802D018"
#define  PIF_MLVDS_Reset_Pul_CTRL_reg                                            0xB802D018
#define  PIF_MLVDS_Reset_Pul_CTRL_inst_addr                                      "0x0006"
#define  set_PIF_MLVDS_Reset_Pul_CTRL_reg(data)                                  (*((volatile unsigned int*)PIF_MLVDS_Reset_Pul_CTRL_reg)=data)
#define  get_PIF_MLVDS_Reset_Pul_CTRL_reg                                        (*((volatile unsigned int*)PIF_MLVDS_Reset_Pul_CTRL_reg))
#define  PIF_MLVDS_Reset_Pul_CTRL_dummy_31_12_shift                              (12)
#define  PIF_MLVDS_Reset_Pul_CTRL_mlvds_reset_pul_sel_shift                      (0)
#define  PIF_MLVDS_Reset_Pul_CTRL_dummy_31_12_mask                               (0xFFFFF000)
#define  PIF_MLVDS_Reset_Pul_CTRL_mlvds_reset_pul_sel_mask                       (0x00000FFF)
#define  PIF_MLVDS_Reset_Pul_CTRL_dummy_31_12(data)                              (0xFFFFF000&((data)<<12))
#define  PIF_MLVDS_Reset_Pul_CTRL_mlvds_reset_pul_sel(data)                      (0x00000FFF&(data))
#define  PIF_MLVDS_Reset_Pul_CTRL_get_dummy_31_12(data)                          ((0xFFFFF000&(data))>>12)
#define  PIF_MLVDS_Reset_Pul_CTRL_get_mlvds_reset_pul_sel(data)                  (0x00000FFF&(data))

#define  PIF_MLVDS_CTRL1                                                        0x1802D01C
#define  PIF_MLVDS_CTRL1_reg_addr                                                "0xB802D01C"
#define  PIF_MLVDS_CTRL1_reg                                                     0xB802D01C
#define  PIF_MLVDS_CTRL1_inst_addr                                               "0x0007"
#define  set_PIF_MLVDS_CTRL1_reg(data)                                           (*((volatile unsigned int*)PIF_MLVDS_CTRL1_reg)=data)
#define  get_PIF_MLVDS_CTRL1_reg                                                 (*((volatile unsigned int*)PIF_MLVDS_CTRL1_reg))
#define  PIF_MLVDS_CTRL1_tcon_sel_shift                                          (24)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_7_shift                                  (22)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_6_shift                                  (20)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_5_shift                                  (18)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_4_shift                                  (16)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_3_shift                                  (14)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_2_shift                                  (12)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_1_shift                                  (10)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_0_shift                                  (8)
#define  PIF_MLVDS_CTRL1_mlvds_rst_tcon_en_shift                                 (7)
#define  PIF_MLVDS_CTRL1_mlvds_rst_high_shift                                    (0)
#define  PIF_MLVDS_CTRL1_tcon_sel_mask                                           (0xFF000000)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_7_mask                                   (0x00C00000)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_6_mask                                   (0x00300000)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_5_mask                                   (0x000C0000)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_4_mask                                   (0x00030000)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_3_mask                                   (0x0000C000)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_2_mask                                   (0x00003000)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_1_mask                                   (0x00000C00)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_0_mask                                   (0x00000300)
#define  PIF_MLVDS_CTRL1_mlvds_rst_tcon_en_mask                                  (0x00000080)
#define  PIF_MLVDS_CTRL1_mlvds_rst_high_mask                                     (0x0000003F)
#define  PIF_MLVDS_CTRL1_tcon_sel(data)                                          (0xFF000000&((data)<<24))
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_7(data)                                  (0x00C00000&((data)<<22))
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_6(data)                                  (0x00300000&((data)<<20))
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_5(data)                                  (0x000C0000&((data)<<18))
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_4(data)                                  (0x00030000&((data)<<16))
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_3(data)                                  (0x0000C000&((data)<<14))
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_2(data)                                  (0x00003000&((data)<<12))
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_1(data)                                  (0x00000C00&((data)<<10))
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_0(data)                                  (0x00000300&((data)<<8))
#define  PIF_MLVDS_CTRL1_mlvds_rst_tcon_en(data)                                 (0x00000080&((data)<<7))
#define  PIF_MLVDS_CTRL1_mlvds_rst_high(data)                                    (0x0000003F&(data))
#define  PIF_MLVDS_CTRL1_get_tcon_sel(data)                                      ((0xFF000000&(data))>>24)
#define  PIF_MLVDS_CTRL1_get_tcon_delay_sel_7(data)                              ((0x00C00000&(data))>>22)
#define  PIF_MLVDS_CTRL1_get_tcon_delay_sel_6(data)                              ((0x00300000&(data))>>20)
#define  PIF_MLVDS_CTRL1_get_tcon_delay_sel_5(data)                              ((0x000C0000&(data))>>18)
#define  PIF_MLVDS_CTRL1_get_tcon_delay_sel_4(data)                              ((0x00030000&(data))>>16)
#define  PIF_MLVDS_CTRL1_get_tcon_delay_sel_3(data)                              ((0x0000C000&(data))>>14)
#define  PIF_MLVDS_CTRL1_get_tcon_delay_sel_2(data)                              ((0x00003000&(data))>>12)
#define  PIF_MLVDS_CTRL1_get_tcon_delay_sel_1(data)                              ((0x00000C00&(data))>>10)
#define  PIF_MLVDS_CTRL1_get_tcon_delay_sel_0(data)                              ((0x00000300&(data))>>8)
#define  PIF_MLVDS_CTRL1_get_mlvds_rst_tcon_en(data)                             ((0x00000080&(data))>>7)
#define  PIF_MLVDS_CTRL1_get_mlvds_rst_high(data)                                (0x0000003F&(data))

#define  PIF_MLVDS_CTRL2                                                        0x1802D020
#define  PIF_MLVDS_CTRL2_reg_addr                                                "0xB802D020"
#define  PIF_MLVDS_CTRL2_reg                                                     0xB802D020
#define  PIF_MLVDS_CTRL2_inst_addr                                               "0x0008"
#define  set_PIF_MLVDS_CTRL2_reg(data)                                           (*((volatile unsigned int*)PIF_MLVDS_CTRL2_reg)=data)
#define  get_PIF_MLVDS_CTRL2_reg                                                 (*((volatile unsigned int*)PIF_MLVDS_CTRL2_reg))
#define  PIF_MLVDS_CTRL2_mlvds_rst_low_region_shift                              (31)
#define  PIF_MLVDS_CTRL2_mlvds_2ck_inv_shift                                     (27)
#define  PIF_MLVDS_CTRL2_mlvds_1ck_inv_shift                                     (26)
#define  PIF_MLVDS_CTRL2_fw_merge_tcon_en_shift                                  (24)
#define  PIF_MLVDS_CTRL2_p3_tcon_en_shift                                        (23)
#define  PIF_MLVDS_CTRL2_p3_tcon_sel_shift                                       (16)
#define  PIF_MLVDS_CTRL2_p2_tcon_en_shift                                        (15)
#define  PIF_MLVDS_CTRL2_p2_tcon_sel_shift                                       (8)
#define  PIF_MLVDS_CTRL2_p1_tcon_en_shift                                        (7)
#define  PIF_MLVDS_CTRL2_p1_tcon_sel_shift                                       (0)
#define  PIF_MLVDS_CTRL2_mlvds_rst_low_region_mask                               (0x80000000)
#define  PIF_MLVDS_CTRL2_mlvds_2ck_inv_mask                                      (0x08000000)
#define  PIF_MLVDS_CTRL2_mlvds_1ck_inv_mask                                      (0x04000000)
#define  PIF_MLVDS_CTRL2_fw_merge_tcon_en_mask                                   (0x01000000)
#define  PIF_MLVDS_CTRL2_p3_tcon_en_mask                                         (0x00800000)
#define  PIF_MLVDS_CTRL2_p3_tcon_sel_mask                                        (0x003F0000)
#define  PIF_MLVDS_CTRL2_p2_tcon_en_mask                                         (0x00008000)
#define  PIF_MLVDS_CTRL2_p2_tcon_sel_mask                                        (0x00003F00)
#define  PIF_MLVDS_CTRL2_p1_tcon_en_mask                                         (0x00000080)
#define  PIF_MLVDS_CTRL2_p1_tcon_sel_mask                                        (0x0000003F)
#define  PIF_MLVDS_CTRL2_mlvds_rst_low_region(data)                              (0x80000000&((data)<<31))
#define  PIF_MLVDS_CTRL2_mlvds_2ck_inv(data)                                     (0x08000000&((data)<<27))
#define  PIF_MLVDS_CTRL2_mlvds_1ck_inv(data)                                     (0x04000000&((data)<<26))
#define  PIF_MLVDS_CTRL2_fw_merge_tcon_en(data)                                  (0x01000000&((data)<<24))
#define  PIF_MLVDS_CTRL2_p3_tcon_en(data)                                        (0x00800000&((data)<<23))
#define  PIF_MLVDS_CTRL2_p3_tcon_sel(data)                                       (0x003F0000&((data)<<16))
#define  PIF_MLVDS_CTRL2_p2_tcon_en(data)                                        (0x00008000&((data)<<15))
#define  PIF_MLVDS_CTRL2_p2_tcon_sel(data)                                       (0x00003F00&((data)<<8))
#define  PIF_MLVDS_CTRL2_p1_tcon_en(data)                                        (0x00000080&((data)<<7))
#define  PIF_MLVDS_CTRL2_p1_tcon_sel(data)                                       (0x0000003F&(data))
#define  PIF_MLVDS_CTRL2_get_mlvds_rst_low_region(data)                          ((0x80000000&(data))>>31)
#define  PIF_MLVDS_CTRL2_get_mlvds_2ck_inv(data)                                 ((0x08000000&(data))>>27)
#define  PIF_MLVDS_CTRL2_get_mlvds_1ck_inv(data)                                 ((0x04000000&(data))>>26)
#define  PIF_MLVDS_CTRL2_get_fw_merge_tcon_en(data)                              ((0x01000000&(data))>>24)
#define  PIF_MLVDS_CTRL2_get_p3_tcon_en(data)                                    ((0x00800000&(data))>>23)
#define  PIF_MLVDS_CTRL2_get_p3_tcon_sel(data)                                   ((0x003F0000&(data))>>16)
#define  PIF_MLVDS_CTRL2_get_p2_tcon_en(data)                                    ((0x00008000&(data))>>15)
#define  PIF_MLVDS_CTRL2_get_p2_tcon_sel(data)                                   ((0x00003F00&(data))>>8)
#define  PIF_MLVDS_CTRL2_get_p1_tcon_en(data)                                    ((0x00000080&(data))>>7)
#define  PIF_MLVDS_CTRL2_get_p1_tcon_sel(data)                                   (0x0000003F&(data))

#define  PIF_MLVDS_CTRL3                                                        0x1802D024
#define  PIF_MLVDS_CTRL3_reg_addr                                                "0xB802D024"
#define  PIF_MLVDS_CTRL3_reg                                                     0xB802D024
#define  PIF_MLVDS_CTRL3_inst_addr                                               "0x0009"
#define  set_PIF_MLVDS_CTRL3_reg(data)                                           (*((volatile unsigned int*)PIF_MLVDS_CTRL3_reg)=data)
#define  get_PIF_MLVDS_CTRL3_reg                                                 (*((volatile unsigned int*)PIF_MLVDS_CTRL3_reg))
#define  PIF_MLVDS_CTRL3_mlvds_rst_low_0_shift                                   (0)
#define  PIF_MLVDS_CTRL3_mlvds_rst_low_0_mask                                    (0xFFFFFFFF)
#define  PIF_MLVDS_CTRL3_mlvds_rst_low_0(data)                                   (0xFFFFFFFF&(data))
#define  PIF_MLVDS_CTRL3_get_mlvds_rst_low_0(data)                               (0xFFFFFFFF&(data))

#define  PIF_MLVDS_CTRL4                                                        0x1802D028
#define  PIF_MLVDS_CTRL4_reg_addr                                                "0xB802D028"
#define  PIF_MLVDS_CTRL4_reg                                                     0xB802D028
#define  PIF_MLVDS_CTRL4_inst_addr                                               "0x000A"
#define  set_PIF_MLVDS_CTRL4_reg(data)                                           (*((volatile unsigned int*)PIF_MLVDS_CTRL4_reg)=data)
#define  get_PIF_MLVDS_CTRL4_reg                                                 (*((volatile unsigned int*)PIF_MLVDS_CTRL4_reg))
#define  PIF_MLVDS_CTRL4_mlvds_rst_low_1_shift                                   (0)
#define  PIF_MLVDS_CTRL4_mlvds_rst_low_1_mask                                    (0xFFFFFFFF)
#define  PIF_MLVDS_CTRL4_mlvds_rst_low_1(data)                                   (0xFFFFFFFF&(data))
#define  PIF_MLVDS_CTRL4_get_mlvds_rst_low_1(data)                               (0xFFFFFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======PIF register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lvds_arsv1_sel:3;
        RBus_UInt32  lvds_arsv0_sel:3;
        RBus_UInt32  lvds_aden_sel:3;
        RBus_UInt32  lvds_avs_sel:3;
        RBus_UInt32  lvds_ahs_sel:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  lvds_brsv1_sel:3;
        RBus_UInt32  lvds_brsv0_sel:3;
        RBus_UInt32  lvds_bden_sel:3;
        RBus_UInt32  lvds_bvs_sel:3;
        RBus_UInt32  lvds_bhs_sel:3;
        RBus_UInt32  res2:1;
    };
}pif_lvds_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d004_31_0:32;
    };
}pif_lvds_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  lvds_hsync_inv:1;
        RBus_UInt32  lvds_vsync_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  lvds_map_inv:1;
        RBus_UInt32  lvds_map:2;
        RBus_UInt32  res3:4;
        RBus_UInt32  lvds_aport_en:1;
        RBus_UInt32  lvds_bport_en:1;
        RBus_UInt32  res4:6;
    };
}pif_lvds_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d00c_31_0:32;
    };
}pif_lvds_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d010_31_0:32;
    };
}pif_lvds_ctrl5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d014_31_11:21;
        RBus_UInt32  mlvds_map_type_sel:3;
        RBus_UInt32  mlvds_en:1;
        RBus_UInt32  mlvds_map_inv:1;
        RBus_UInt32  dummy1802d014_5_2:4;
        RBus_UInt32  mlvds_mode:2;
    };
}pif_mlvds_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d018_31_12:20;
        RBus_UInt32  mlvds_reset_pul_sel:12;
    };
}pif_mlvds_reset_pul_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon_sel:8;
        RBus_UInt32  tcon_delay_sel_7:2;
        RBus_UInt32  tcon_delay_sel_6:2;
        RBus_UInt32  tcon_delay_sel_5:2;
        RBus_UInt32  tcon_delay_sel_4:2;
        RBus_UInt32  tcon_delay_sel_3:2;
        RBus_UInt32  tcon_delay_sel_2:2;
        RBus_UInt32  tcon_delay_sel_1:2;
        RBus_UInt32  tcon_delay_sel_0:2;
        RBus_UInt32  mlvds_rst_tcon_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  mlvds_rst_high:6;
    };
}pif_mlvds_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mlvds_rst_low_region:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  mlvds_2ck_inv:1;
        RBus_UInt32  mlvds_1ck_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  fw_merge_tcon_en:1;
        RBus_UInt32  p3_tcon_en:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  p3_tcon_sel:6;
        RBus_UInt32  p2_tcon_en:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  p2_tcon_sel:6;
        RBus_UInt32  p1_tcon_en:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  p1_tcon_sel:6;
    };
}pif_mlvds_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mlvds_rst_low_0:32;
    };
}pif_mlvds_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mlvds_rst_low_1:32;
    };
}pif_mlvds_ctrl4_RBUS;

#else //apply LITTLE_ENDIAN

//======PIF register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  lvds_bhs_sel:3;
        RBus_UInt32  lvds_bvs_sel:3;
        RBus_UInt32  lvds_bden_sel:3;
        RBus_UInt32  lvds_brsv0_sel:3;
        RBus_UInt32  lvds_brsv1_sel:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  lvds_ahs_sel:3;
        RBus_UInt32  lvds_avs_sel:3;
        RBus_UInt32  lvds_aden_sel:3;
        RBus_UInt32  lvds_arsv0_sel:3;
        RBus_UInt32  lvds_arsv1_sel:3;
    };
}pif_lvds_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d004_31_0:32;
    };
}pif_lvds_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  lvds_bport_en:1;
        RBus_UInt32  lvds_aport_en:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  lvds_map:2;
        RBus_UInt32  lvds_map_inv:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  lvds_vsync_inv:1;
        RBus_UInt32  lvds_hsync_inv:1;
        RBus_UInt32  res4:14;
    };
}pif_lvds_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d00c_31_0:32;
    };
}pif_lvds_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d010_31_0:32;
    };
}pif_lvds_ctrl5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mlvds_mode:2;
        RBus_UInt32  dummy1802d014_5_2:4;
        RBus_UInt32  mlvds_map_inv:1;
        RBus_UInt32  mlvds_en:1;
        RBus_UInt32  mlvds_map_type_sel:3;
        RBus_UInt32  dummy1802d014_31_11:21;
    };
}pif_mlvds_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mlvds_reset_pul_sel:12;
        RBus_UInt32  dummy1802d018_31_12:20;
    };
}pif_mlvds_reset_pul_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mlvds_rst_high:6;
        RBus_UInt32  res1:1;
        RBus_UInt32  mlvds_rst_tcon_en:1;
        RBus_UInt32  tcon_delay_sel_0:2;
        RBus_UInt32  tcon_delay_sel_1:2;
        RBus_UInt32  tcon_delay_sel_2:2;
        RBus_UInt32  tcon_delay_sel_3:2;
        RBus_UInt32  tcon_delay_sel_4:2;
        RBus_UInt32  tcon_delay_sel_5:2;
        RBus_UInt32  tcon_delay_sel_6:2;
        RBus_UInt32  tcon_delay_sel_7:2;
        RBus_UInt32  tcon_sel:8;
    };
}pif_mlvds_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_tcon_sel:6;
        RBus_UInt32  res1:1;
        RBus_UInt32  p1_tcon_en:1;
        RBus_UInt32  p2_tcon_sel:6;
        RBus_UInt32  res2:1;
        RBus_UInt32  p2_tcon_en:1;
        RBus_UInt32  p3_tcon_sel:6;
        RBus_UInt32  res3:1;
        RBus_UInt32  p3_tcon_en:1;
        RBus_UInt32  fw_merge_tcon_en:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  mlvds_1ck_inv:1;
        RBus_UInt32  mlvds_2ck_inv:1;
        RBus_UInt32  res5:3;
        RBus_UInt32  mlvds_rst_low_region:1;
    };
}pif_mlvds_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mlvds_rst_low_0:32;
    };
}pif_mlvds_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mlvds_rst_low_1:32;
    };
}pif_mlvds_ctrl4_RBUS;




#endif 


#endif 
