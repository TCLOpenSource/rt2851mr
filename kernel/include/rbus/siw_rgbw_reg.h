/**
* @file Merlin5-DesignSpec-D-Domain_SiW_rgbw
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_SIW_RGBW_REG_H_
#define _RBUS_SIW_RGBW_REG_H_

#include "rbus_types.h"



//  SIW_RGBW Register Address
#define  SIW_RGBW_SiW_rgbw_timing_ctl                                           0x1802AF00
#define  SIW_RGBW_SiW_rgbw_timing_ctl_reg_addr                                   "0xB802AF00"
#define  SIW_RGBW_SiW_rgbw_timing_ctl_reg                                        0xB802AF00
#define  SIW_RGBW_SiW_rgbw_timing_ctl_inst_addr                                  "0x0000"
#define  set_SIW_RGBW_SiW_rgbw_timing_ctl_reg(data)                              (*((volatile unsigned int*)SIW_RGBW_SiW_rgbw_timing_ctl_reg)=data)
#define  get_SIW_RGBW_SiW_rgbw_timing_ctl_reg                                    (*((volatile unsigned int*)SIW_RGBW_SiW_rgbw_timing_ctl_reg))
#define  SIW_RGBW_SiW_rgbw_timing_ctl_dummy_31_8_shift                           (8)
#define  SIW_RGBW_SiW_rgbw_timing_ctl_hsync_cntr_shift                           (3)
#define  SIW_RGBW_SiW_rgbw_timing_ctl_dummy_31_8_mask                            (0xFFFFFF00)
#define  SIW_RGBW_SiW_rgbw_timing_ctl_hsync_cntr_mask                            (0x000000F8)
#define  SIW_RGBW_SiW_rgbw_timing_ctl_dummy_31_8(data)                           (0xFFFFFF00&((data)<<8))
#define  SIW_RGBW_SiW_rgbw_timing_ctl_hsync_cntr(data)                           (0x000000F8&((data)<<3))
#define  SIW_RGBW_SiW_rgbw_timing_ctl_get_dummy_31_8(data)                       ((0xFFFFFF00&(data))>>8)
#define  SIW_RGBW_SiW_rgbw_timing_ctl_get_hsync_cntr(data)                       ((0x000000F8&(data))>>3)

#define  SIW_RGBW_SiW_rgbw_ctl                                                  0x1802AF04
#define  SIW_RGBW_SiW_rgbw_ctl_reg_addr                                          "0xB802AF04"
#define  SIW_RGBW_SiW_rgbw_ctl_reg                                               0xB802AF04
#define  SIW_RGBW_SiW_rgbw_ctl_inst_addr                                         "0x0001"
#define  set_SIW_RGBW_SiW_rgbw_ctl_reg(data)                                     (*((volatile unsigned int*)SIW_RGBW_SiW_rgbw_ctl_reg)=data)
#define  get_SIW_RGBW_SiW_rgbw_ctl_reg                                           (*((volatile unsigned int*)SIW_RGBW_SiW_rgbw_ctl_reg))
#define  SIW_RGBW_SiW_rgbw_ctl_wpr_on_shift                                      (8)
#define  SIW_RGBW_SiW_rgbw_ctl_dga_picture_mode_sel_shift                        (6)
#define  SIW_RGBW_SiW_rgbw_ctl_picture_mode_sel_shift                            (4)
#define  SIW_RGBW_SiW_rgbw_ctl_wpr_on_mask                                       (0x00000100)
#define  SIW_RGBW_SiW_rgbw_ctl_dga_picture_mode_sel_mask                         (0x000000C0)
#define  SIW_RGBW_SiW_rgbw_ctl_picture_mode_sel_mask                             (0x00000030)
#define  SIW_RGBW_SiW_rgbw_ctl_wpr_on(data)                                      (0x00000100&((data)<<8))
#define  SIW_RGBW_SiW_rgbw_ctl_dga_picture_mode_sel(data)                        (0x000000C0&((data)<<6))
#define  SIW_RGBW_SiW_rgbw_ctl_picture_mode_sel(data)                            (0x00000030&((data)<<4))
#define  SIW_RGBW_SiW_rgbw_ctl_get_wpr_on(data)                                  ((0x00000100&(data))>>8)
#define  SIW_RGBW_SiW_rgbw_ctl_get_dga_picture_mode_sel(data)                    ((0x000000C0&(data))>>6)
#define  SIW_RGBW_SiW_rgbw_ctl_get_picture_mode_sel(data)                        ((0x00000030&(data))>>4)

#define  SIW_RGBW_SiW_rgbw_rom_bist0                                            0x1802AF20
#define  SIW_RGBW_SiW_rgbw_rom_bist0_reg_addr                                    "0xB802AF20"
#define  SIW_RGBW_SiW_rgbw_rom_bist0_reg                                         0xB802AF20
#define  SIW_RGBW_SiW_rgbw_rom_bist0_inst_addr                                   "0x0002"
#define  set_SIW_RGBW_SiW_rgbw_rom_bist0_reg(data)                               (*((volatile unsigned int*)SIW_RGBW_SiW_rgbw_rom_bist0_reg)=data)
#define  get_SIW_RGBW_SiW_rgbw_rom_bist0_reg                                     (*((volatile unsigned int*)SIW_RGBW_SiW_rgbw_rom_bist0_reg))
#define  SIW_RGBW_SiW_rgbw_rom_bist0_ls_0_shift                                  (11)
#define  SIW_RGBW_SiW_rgbw_rom_bist0_ls_1_shift                                  (10)
#define  SIW_RGBW_SiW_rgbw_rom_bist0_rme_0_shift                                 (9)
#define  SIW_RGBW_SiW_rgbw_rom_bist0_rme_1_shift                                 (8)
#define  SIW_RGBW_SiW_rgbw_rom_bist0_rm_0_shift                                  (4)
#define  SIW_RGBW_SiW_rgbw_rom_bist0_rm_1_shift                                  (0)
#define  SIW_RGBW_SiW_rgbw_rom_bist0_ls_0_mask                                   (0x00000800)
#define  SIW_RGBW_SiW_rgbw_rom_bist0_ls_1_mask                                   (0x00000400)
#define  SIW_RGBW_SiW_rgbw_rom_bist0_rme_0_mask                                  (0x00000200)
#define  SIW_RGBW_SiW_rgbw_rom_bist0_rme_1_mask                                  (0x00000100)
#define  SIW_RGBW_SiW_rgbw_rom_bist0_rm_0_mask                                   (0x000000F0)
#define  SIW_RGBW_SiW_rgbw_rom_bist0_rm_1_mask                                   (0x0000000F)
#define  SIW_RGBW_SiW_rgbw_rom_bist0_ls_0(data)                                  (0x00000800&((data)<<11))
#define  SIW_RGBW_SiW_rgbw_rom_bist0_ls_1(data)                                  (0x00000400&((data)<<10))
#define  SIW_RGBW_SiW_rgbw_rom_bist0_rme_0(data)                                 (0x00000200&((data)<<9))
#define  SIW_RGBW_SiW_rgbw_rom_bist0_rme_1(data)                                 (0x00000100&((data)<<8))
#define  SIW_RGBW_SiW_rgbw_rom_bist0_rm_0(data)                                  (0x000000F0&((data)<<4))
#define  SIW_RGBW_SiW_rgbw_rom_bist0_rm_1(data)                                  (0x0000000F&(data))
#define  SIW_RGBW_SiW_rgbw_rom_bist0_get_ls_0(data)                              ((0x00000800&(data))>>11)
#define  SIW_RGBW_SiW_rgbw_rom_bist0_get_ls_1(data)                              ((0x00000400&(data))>>10)
#define  SIW_RGBW_SiW_rgbw_rom_bist0_get_rme_0(data)                             ((0x00000200&(data))>>9)
#define  SIW_RGBW_SiW_rgbw_rom_bist0_get_rme_1(data)                             ((0x00000100&(data))>>8)
#define  SIW_RGBW_SiW_rgbw_rom_bist0_get_rm_0(data)                              ((0x000000F0&(data))>>4)
#define  SIW_RGBW_SiW_rgbw_rom_bist0_get_rm_1(data)                              (0x0000000F&(data))

#define  SIW_RGBW_SiW_rgbw_sram_bist0                                           0x1802AF24
#define  SIW_RGBW_SiW_rgbw_sram_bist0_reg_addr                                   "0xB802AF24"
#define  SIW_RGBW_SiW_rgbw_sram_bist0_reg                                        0xB802AF24
#define  SIW_RGBW_SiW_rgbw_sram_bist0_inst_addr                                  "0x0003"
#define  set_SIW_RGBW_SiW_rgbw_sram_bist0_reg(data)                              (*((volatile unsigned int*)SIW_RGBW_SiW_rgbw_sram_bist0_reg)=data)
#define  get_SIW_RGBW_SiW_rgbw_sram_bist0_reg                                    (*((volatile unsigned int*)SIW_RGBW_SiW_rgbw_sram_bist0_reg))
#define  SIW_RGBW_SiW_rgbw_sram_bist0_bist_fail_0_shift                          (9)
#define  SIW_RGBW_SiW_rgbw_sram_bist0_drf_bist_fail_0_shift                      (8)
#define  SIW_RGBW_SiW_rgbw_sram_bist0_rme_2_shift                                (7)
#define  SIW_RGBW_SiW_rgbw_sram_bist0_rm_2_shift                                 (3)
#define  SIW_RGBW_SiW_rgbw_sram_bist0_ls_2_shift                                 (2)
#define  SIW_RGBW_SiW_rgbw_sram_bist0_test1_0_shift                              (1)
#define  SIW_RGBW_SiW_rgbw_sram_bist0_testrwm_0_shift                            (0)
#define  SIW_RGBW_SiW_rgbw_sram_bist0_bist_fail_0_mask                           (0x00000200)
#define  SIW_RGBW_SiW_rgbw_sram_bist0_drf_bist_fail_0_mask                       (0x00000100)
#define  SIW_RGBW_SiW_rgbw_sram_bist0_rme_2_mask                                 (0x00000080)
#define  SIW_RGBW_SiW_rgbw_sram_bist0_rm_2_mask                                  (0x00000078)
#define  SIW_RGBW_SiW_rgbw_sram_bist0_ls_2_mask                                  (0x00000004)
#define  SIW_RGBW_SiW_rgbw_sram_bist0_test1_0_mask                               (0x00000002)
#define  SIW_RGBW_SiW_rgbw_sram_bist0_testrwm_0_mask                             (0x00000001)
#define  SIW_RGBW_SiW_rgbw_sram_bist0_bist_fail_0(data)                          (0x00000200&((data)<<9))
#define  SIW_RGBW_SiW_rgbw_sram_bist0_drf_bist_fail_0(data)                      (0x00000100&((data)<<8))
#define  SIW_RGBW_SiW_rgbw_sram_bist0_rme_2(data)                                (0x00000080&((data)<<7))
#define  SIW_RGBW_SiW_rgbw_sram_bist0_rm_2(data)                                 (0x00000078&((data)<<3))
#define  SIW_RGBW_SiW_rgbw_sram_bist0_ls_2(data)                                 (0x00000004&((data)<<2))
#define  SIW_RGBW_SiW_rgbw_sram_bist0_test1_0(data)                              (0x00000002&((data)<<1))
#define  SIW_RGBW_SiW_rgbw_sram_bist0_testrwm_0(data)                            (0x00000001&(data))
#define  SIW_RGBW_SiW_rgbw_sram_bist0_get_bist_fail_0(data)                      ((0x00000200&(data))>>9)
#define  SIW_RGBW_SiW_rgbw_sram_bist0_get_drf_bist_fail_0(data)                  ((0x00000100&(data))>>8)
#define  SIW_RGBW_SiW_rgbw_sram_bist0_get_rme_2(data)                            ((0x00000080&(data))>>7)
#define  SIW_RGBW_SiW_rgbw_sram_bist0_get_rm_2(data)                             ((0x00000078&(data))>>3)
#define  SIW_RGBW_SiW_rgbw_sram_bist0_get_ls_2(data)                             ((0x00000004&(data))>>2)
#define  SIW_RGBW_SiW_rgbw_sram_bist0_get_test1_0(data)                          ((0x00000002&(data))>>1)
#define  SIW_RGBW_SiW_rgbw_sram_bist0_get_testrwm_0(data)                        (0x00000001&(data))

#define  SIW_RGBW_Rd_reg000                                                     0x1802BD00
#define  SIW_RGBW_Rd_reg000_reg_addr                                             "0xB802BD00"
#define  SIW_RGBW_Rd_reg000_reg                                                  0xB802BD00
#define  SIW_RGBW_Rd_reg000_inst_addr                                            "0x0004"
#define  set_SIW_RGBW_Rd_reg000_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg000_reg)=data)
#define  get_SIW_RGBW_Rd_reg000_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg000_reg))
#define  SIW_RGBW_Rd_reg000_rd_reg000_shift                                      (16)
#define  SIW_RGBW_Rd_reg000_rd_reg001_shift                                      (0)
#define  SIW_RGBW_Rd_reg000_rd_reg000_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg000_rd_reg001_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg000_rd_reg000(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg000_rd_reg001(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg000_get_rd_reg000(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg000_get_rd_reg001(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg002                                                     0x1802BD04
#define  SIW_RGBW_Rd_reg002_reg_addr                                             "0xB802BD04"
#define  SIW_RGBW_Rd_reg002_reg                                                  0xB802BD04
#define  SIW_RGBW_Rd_reg002_inst_addr                                            "0x0005"
#define  set_SIW_RGBW_Rd_reg002_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg002_reg)=data)
#define  get_SIW_RGBW_Rd_reg002_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg002_reg))
#define  SIW_RGBW_Rd_reg002_rd_reg002_shift                                      (16)
#define  SIW_RGBW_Rd_reg002_rd_reg003_shift                                      (0)
#define  SIW_RGBW_Rd_reg002_rd_reg002_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg002_rd_reg003_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg002_rd_reg002(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg002_rd_reg003(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg002_get_rd_reg002(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg002_get_rd_reg003(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg004                                                     0x1802BD08
#define  SIW_RGBW_Rd_reg004_reg_addr                                             "0xB802BD08"
#define  SIW_RGBW_Rd_reg004_reg                                                  0xB802BD08
#define  SIW_RGBW_Rd_reg004_inst_addr                                            "0x0006"
#define  set_SIW_RGBW_Rd_reg004_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg004_reg)=data)
#define  get_SIW_RGBW_Rd_reg004_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg004_reg))
#define  SIW_RGBW_Rd_reg004_rd_reg004_shift                                      (16)
#define  SIW_RGBW_Rd_reg004_rd_reg005_shift                                      (0)
#define  SIW_RGBW_Rd_reg004_rd_reg004_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg004_rd_reg005_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg004_rd_reg004(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg004_rd_reg005(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg004_get_rd_reg004(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg004_get_rd_reg005(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg006                                                     0x1802BD0C
#define  SIW_RGBW_Rd_reg006_reg_addr                                             "0xB802BD0C"
#define  SIW_RGBW_Rd_reg006_reg                                                  0xB802BD0C
#define  SIW_RGBW_Rd_reg006_inst_addr                                            "0x0007"
#define  set_SIW_RGBW_Rd_reg006_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg006_reg)=data)
#define  get_SIW_RGBW_Rd_reg006_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg006_reg))
#define  SIW_RGBW_Rd_reg006_rd_reg006_shift                                      (16)
#define  SIW_RGBW_Rd_reg006_rd_reg007_shift                                      (0)
#define  SIW_RGBW_Rd_reg006_rd_reg006_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg006_rd_reg007_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg006_rd_reg006(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg006_rd_reg007(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg006_get_rd_reg006(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg006_get_rd_reg007(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg008                                                     0x1802BD10
#define  SIW_RGBW_Rd_reg008_reg_addr                                             "0xB802BD10"
#define  SIW_RGBW_Rd_reg008_reg                                                  0xB802BD10
#define  SIW_RGBW_Rd_reg008_inst_addr                                            "0x0008"
#define  set_SIW_RGBW_Rd_reg008_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg008_reg)=data)
#define  get_SIW_RGBW_Rd_reg008_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg008_reg))
#define  SIW_RGBW_Rd_reg008_rd_reg008_shift                                      (16)
#define  SIW_RGBW_Rd_reg008_rd_reg009_shift                                      (0)
#define  SIW_RGBW_Rd_reg008_rd_reg008_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg008_rd_reg009_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg008_rd_reg008(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg008_rd_reg009(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg008_get_rd_reg008(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg008_get_rd_reg009(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg00A                                                     0x1802BD14
#define  SIW_RGBW_Rd_reg00A_reg_addr                                             "0xB802BD14"
#define  SIW_RGBW_Rd_reg00A_reg                                                  0xB802BD14
#define  SIW_RGBW_Rd_reg00A_inst_addr                                            "0x0009"
#define  set_SIW_RGBW_Rd_reg00A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg00A_reg)=data)
#define  get_SIW_RGBW_Rd_reg00A_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg00A_reg))
#define  SIW_RGBW_Rd_reg00A_rd_reg010_shift                                      (16)
#define  SIW_RGBW_Rd_reg00A_rd_reg011_shift                                      (0)
#define  SIW_RGBW_Rd_reg00A_rd_reg010_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg00A_rd_reg011_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg00A_rd_reg010(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg00A_rd_reg011(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg00A_get_rd_reg010(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg00A_get_rd_reg011(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg00C                                                     0x1802BD18
#define  SIW_RGBW_Rd_reg00C_reg_addr                                             "0xB802BD18"
#define  SIW_RGBW_Rd_reg00C_reg                                                  0xB802BD18
#define  SIW_RGBW_Rd_reg00C_inst_addr                                            "0x000A"
#define  set_SIW_RGBW_Rd_reg00C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg00C_reg)=data)
#define  get_SIW_RGBW_Rd_reg00C_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg00C_reg))
#define  SIW_RGBW_Rd_reg00C_rd_reg012_shift                                      (16)
#define  SIW_RGBW_Rd_reg00C_rd_reg013_shift                                      (0)
#define  SIW_RGBW_Rd_reg00C_rd_reg012_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg00C_rd_reg013_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg00C_rd_reg012(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg00C_rd_reg013(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg00C_get_rd_reg012(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg00C_get_rd_reg013(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg00E                                                     0x1802BD1C
#define  SIW_RGBW_Rd_reg00E_reg_addr                                             "0xB802BD1C"
#define  SIW_RGBW_Rd_reg00E_reg                                                  0xB802BD1C
#define  SIW_RGBW_Rd_reg00E_inst_addr                                            "0x000B"
#define  set_SIW_RGBW_Rd_reg00E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg00E_reg)=data)
#define  get_SIW_RGBW_Rd_reg00E_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg00E_reg))
#define  SIW_RGBW_Rd_reg00E_rd_reg014_shift                                      (16)
#define  SIW_RGBW_Rd_reg00E_rd_reg015_shift                                      (0)
#define  SIW_RGBW_Rd_reg00E_rd_reg014_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg00E_rd_reg015_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg00E_rd_reg014(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg00E_rd_reg015(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg00E_get_rd_reg014(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg00E_get_rd_reg015(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg010                                                     0x1802BD20
#define  SIW_RGBW_Rd_reg010_reg_addr                                             "0xB802BD20"
#define  SIW_RGBW_Rd_reg010_reg                                                  0xB802BD20
#define  SIW_RGBW_Rd_reg010_inst_addr                                            "0x000C"
#define  set_SIW_RGBW_Rd_reg010_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg010_reg)=data)
#define  get_SIW_RGBW_Rd_reg010_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg010_reg))
#define  SIW_RGBW_Rd_reg010_rd_reg016_shift                                      (16)
#define  SIW_RGBW_Rd_reg010_rd_reg017_shift                                      (0)
#define  SIW_RGBW_Rd_reg010_rd_reg016_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg010_rd_reg017_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg010_rd_reg016(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg010_rd_reg017(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg010_get_rd_reg016(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg010_get_rd_reg017(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg012                                                     0x1802BD24
#define  SIW_RGBW_Rd_reg012_reg_addr                                             "0xB802BD24"
#define  SIW_RGBW_Rd_reg012_reg                                                  0xB802BD24
#define  SIW_RGBW_Rd_reg012_inst_addr                                            "0x000D"
#define  set_SIW_RGBW_Rd_reg012_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg012_reg)=data)
#define  get_SIW_RGBW_Rd_reg012_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg012_reg))
#define  SIW_RGBW_Rd_reg012_rd_reg018_shift                                      (16)
#define  SIW_RGBW_Rd_reg012_rd_reg019_shift                                      (0)
#define  SIW_RGBW_Rd_reg012_rd_reg018_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg012_rd_reg019_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg012_rd_reg018(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg012_rd_reg019(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg012_get_rd_reg018(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg012_get_rd_reg019(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg014                                                     0x1802BD28
#define  SIW_RGBW_Rd_reg014_reg_addr                                             "0xB802BD28"
#define  SIW_RGBW_Rd_reg014_reg                                                  0xB802BD28
#define  SIW_RGBW_Rd_reg014_inst_addr                                            "0x000E"
#define  set_SIW_RGBW_Rd_reg014_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg014_reg)=data)
#define  get_SIW_RGBW_Rd_reg014_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg014_reg))
#define  SIW_RGBW_Rd_reg014_rd_reg020_shift                                      (16)
#define  SIW_RGBW_Rd_reg014_rd_reg021_shift                                      (0)
#define  SIW_RGBW_Rd_reg014_rd_reg020_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg014_rd_reg021_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg014_rd_reg020(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg014_rd_reg021(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg014_get_rd_reg020(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg014_get_rd_reg021(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg016                                                     0x1802BD2C
#define  SIW_RGBW_Rd_reg016_reg_addr                                             "0xB802BD2C"
#define  SIW_RGBW_Rd_reg016_reg                                                  0xB802BD2C
#define  SIW_RGBW_Rd_reg016_inst_addr                                            "0x000F"
#define  set_SIW_RGBW_Rd_reg016_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg016_reg)=data)
#define  get_SIW_RGBW_Rd_reg016_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg016_reg))
#define  SIW_RGBW_Rd_reg016_rd_reg022_shift                                      (16)
#define  SIW_RGBW_Rd_reg016_rd_reg023_shift                                      (0)
#define  SIW_RGBW_Rd_reg016_rd_reg022_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg016_rd_reg023_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg016_rd_reg022(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg016_rd_reg023(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg016_get_rd_reg022(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg016_get_rd_reg023(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg018                                                     0x1802BD30
#define  SIW_RGBW_Rd_reg018_reg_addr                                             "0xB802BD30"
#define  SIW_RGBW_Rd_reg018_reg                                                  0xB802BD30
#define  SIW_RGBW_Rd_reg018_inst_addr                                            "0x0010"
#define  set_SIW_RGBW_Rd_reg018_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg018_reg)=data)
#define  get_SIW_RGBW_Rd_reg018_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg018_reg))
#define  SIW_RGBW_Rd_reg018_rd_reg024_shift                                      (16)
#define  SIW_RGBW_Rd_reg018_rd_reg025_shift                                      (0)
#define  SIW_RGBW_Rd_reg018_rd_reg024_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg018_rd_reg025_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg018_rd_reg024(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg018_rd_reg025(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg018_get_rd_reg024(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg018_get_rd_reg025(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg01A                                                     0x1802BD34
#define  SIW_RGBW_Rd_reg01A_reg_addr                                             "0xB802BD34"
#define  SIW_RGBW_Rd_reg01A_reg                                                  0xB802BD34
#define  SIW_RGBW_Rd_reg01A_inst_addr                                            "0x0011"
#define  set_SIW_RGBW_Rd_reg01A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg01A_reg)=data)
#define  get_SIW_RGBW_Rd_reg01A_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg01A_reg))
#define  SIW_RGBW_Rd_reg01A_rd_reg026_shift                                      (16)
#define  SIW_RGBW_Rd_reg01A_rd_reg027_shift                                      (0)
#define  SIW_RGBW_Rd_reg01A_rd_reg026_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg01A_rd_reg027_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg01A_rd_reg026(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg01A_rd_reg027(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg01A_get_rd_reg026(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg01A_get_rd_reg027(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg01C                                                     0x1802BD38
#define  SIW_RGBW_Rd_reg01C_reg_addr                                             "0xB802BD38"
#define  SIW_RGBW_Rd_reg01C_reg                                                  0xB802BD38
#define  SIW_RGBW_Rd_reg01C_inst_addr                                            "0x0012"
#define  set_SIW_RGBW_Rd_reg01C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg01C_reg)=data)
#define  get_SIW_RGBW_Rd_reg01C_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg01C_reg))
#define  SIW_RGBW_Rd_reg01C_rd_reg028_shift                                      (16)
#define  SIW_RGBW_Rd_reg01C_rd_reg029_shift                                      (0)
#define  SIW_RGBW_Rd_reg01C_rd_reg028_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg01C_rd_reg029_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg01C_rd_reg028(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg01C_rd_reg029(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg01C_get_rd_reg028(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg01C_get_rd_reg029(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg01E                                                     0x1802BD3C
#define  SIW_RGBW_Rd_reg01E_reg_addr                                             "0xB802BD3C"
#define  SIW_RGBW_Rd_reg01E_reg                                                  0xB802BD3C
#define  SIW_RGBW_Rd_reg01E_inst_addr                                            "0x0013"
#define  set_SIW_RGBW_Rd_reg01E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg01E_reg)=data)
#define  get_SIW_RGBW_Rd_reg01E_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg01E_reg))
#define  SIW_RGBW_Rd_reg01E_rd_reg030_shift                                      (16)
#define  SIW_RGBW_Rd_reg01E_rd_reg031_shift                                      (0)
#define  SIW_RGBW_Rd_reg01E_rd_reg030_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg01E_rd_reg031_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg01E_rd_reg030(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg01E_rd_reg031(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg01E_get_rd_reg030(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg01E_get_rd_reg031(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg020                                                     0x1802BD40
#define  SIW_RGBW_Rd_reg020_reg_addr                                             "0xB802BD40"
#define  SIW_RGBW_Rd_reg020_reg                                                  0xB802BD40
#define  SIW_RGBW_Rd_reg020_inst_addr                                            "0x0014"
#define  set_SIW_RGBW_Rd_reg020_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg020_reg)=data)
#define  get_SIW_RGBW_Rd_reg020_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg020_reg))
#define  SIW_RGBW_Rd_reg020_rd_reg032_shift                                      (16)
#define  SIW_RGBW_Rd_reg020_rd_reg033_shift                                      (0)
#define  SIW_RGBW_Rd_reg020_rd_reg032_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg020_rd_reg033_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg020_rd_reg032(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg020_rd_reg033(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg020_get_rd_reg032(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg020_get_rd_reg033(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg022                                                     0x1802BD44
#define  SIW_RGBW_Rd_reg022_reg_addr                                             "0xB802BD44"
#define  SIW_RGBW_Rd_reg022_reg                                                  0xB802BD44
#define  SIW_RGBW_Rd_reg022_inst_addr                                            "0x0015"
#define  set_SIW_RGBW_Rd_reg022_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg022_reg)=data)
#define  get_SIW_RGBW_Rd_reg022_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg022_reg))
#define  SIW_RGBW_Rd_reg022_rd_reg034_shift                                      (16)
#define  SIW_RGBW_Rd_reg022_rd_reg035_shift                                      (0)
#define  SIW_RGBW_Rd_reg022_rd_reg034_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg022_rd_reg035_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg022_rd_reg034(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg022_rd_reg035(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg022_get_rd_reg034(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg022_get_rd_reg035(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg024                                                     0x1802BD48
#define  SIW_RGBW_Rd_reg024_reg_addr                                             "0xB802BD48"
#define  SIW_RGBW_Rd_reg024_reg                                                  0xB802BD48
#define  SIW_RGBW_Rd_reg024_inst_addr                                            "0x0016"
#define  set_SIW_RGBW_Rd_reg024_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg024_reg)=data)
#define  get_SIW_RGBW_Rd_reg024_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg024_reg))
#define  SIW_RGBW_Rd_reg024_rd_reg036_shift                                      (16)
#define  SIW_RGBW_Rd_reg024_rd_reg037_shift                                      (0)
#define  SIW_RGBW_Rd_reg024_rd_reg036_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg024_rd_reg037_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg024_rd_reg036(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg024_rd_reg037(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg024_get_rd_reg036(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg024_get_rd_reg037(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg026                                                     0x1802BD4C
#define  SIW_RGBW_Rd_reg026_reg_addr                                             "0xB802BD4C"
#define  SIW_RGBW_Rd_reg026_reg                                                  0xB802BD4C
#define  SIW_RGBW_Rd_reg026_inst_addr                                            "0x0017"
#define  set_SIW_RGBW_Rd_reg026_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg026_reg)=data)
#define  get_SIW_RGBW_Rd_reg026_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg026_reg))
#define  SIW_RGBW_Rd_reg026_rd_reg038_shift                                      (16)
#define  SIW_RGBW_Rd_reg026_rd_reg039_shift                                      (0)
#define  SIW_RGBW_Rd_reg026_rd_reg038_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg026_rd_reg039_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg026_rd_reg038(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg026_rd_reg039(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg026_get_rd_reg038(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg026_get_rd_reg039(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg028                                                     0x1802BD50
#define  SIW_RGBW_Rd_reg028_reg_addr                                             "0xB802BD50"
#define  SIW_RGBW_Rd_reg028_reg                                                  0xB802BD50
#define  SIW_RGBW_Rd_reg028_inst_addr                                            "0x0018"
#define  set_SIW_RGBW_Rd_reg028_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg028_reg)=data)
#define  get_SIW_RGBW_Rd_reg028_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg028_reg))
#define  SIW_RGBW_Rd_reg028_rd_reg040_shift                                      (16)
#define  SIW_RGBW_Rd_reg028_rd_reg041_shift                                      (0)
#define  SIW_RGBW_Rd_reg028_rd_reg040_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg028_rd_reg041_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg028_rd_reg040(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg028_rd_reg041(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg028_get_rd_reg040(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg028_get_rd_reg041(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg02A                                                     0x1802BD54
#define  SIW_RGBW_Rd_reg02A_reg_addr                                             "0xB802BD54"
#define  SIW_RGBW_Rd_reg02A_reg                                                  0xB802BD54
#define  SIW_RGBW_Rd_reg02A_inst_addr                                            "0x0019"
#define  set_SIW_RGBW_Rd_reg02A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg02A_reg)=data)
#define  get_SIW_RGBW_Rd_reg02A_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg02A_reg))
#define  SIW_RGBW_Rd_reg02A_rd_reg042_shift                                      (16)
#define  SIW_RGBW_Rd_reg02A_rd_reg043_shift                                      (0)
#define  SIW_RGBW_Rd_reg02A_rd_reg042_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg02A_rd_reg043_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg02A_rd_reg042(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg02A_rd_reg043(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg02A_get_rd_reg042(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg02A_get_rd_reg043(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg02C                                                     0x1802BD58
#define  SIW_RGBW_Rd_reg02C_reg_addr                                             "0xB802BD58"
#define  SIW_RGBW_Rd_reg02C_reg                                                  0xB802BD58
#define  SIW_RGBW_Rd_reg02C_inst_addr                                            "0x001A"
#define  set_SIW_RGBW_Rd_reg02C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg02C_reg)=data)
#define  get_SIW_RGBW_Rd_reg02C_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg02C_reg))
#define  SIW_RGBW_Rd_reg02C_rd_reg044_shift                                      (16)
#define  SIW_RGBW_Rd_reg02C_rd_reg045_shift                                      (0)
#define  SIW_RGBW_Rd_reg02C_rd_reg044_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg02C_rd_reg045_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg02C_rd_reg044(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg02C_rd_reg045(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg02C_get_rd_reg044(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg02C_get_rd_reg045(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg02E                                                     0x1802BD5C
#define  SIW_RGBW_Rd_reg02E_reg_addr                                             "0xB802BD5C"
#define  SIW_RGBW_Rd_reg02E_reg                                                  0xB802BD5C
#define  SIW_RGBW_Rd_reg02E_inst_addr                                            "0x001B"
#define  set_SIW_RGBW_Rd_reg02E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg02E_reg)=data)
#define  get_SIW_RGBW_Rd_reg02E_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg02E_reg))
#define  SIW_RGBW_Rd_reg02E_rd_reg046_shift                                      (16)
#define  SIW_RGBW_Rd_reg02E_rd_reg047_shift                                      (0)
#define  SIW_RGBW_Rd_reg02E_rd_reg046_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg02E_rd_reg047_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg02E_rd_reg046(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg02E_rd_reg047(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg02E_get_rd_reg046(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg02E_get_rd_reg047(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg030                                                     0x1802BD60
#define  SIW_RGBW_Rd_reg030_reg_addr                                             "0xB802BD60"
#define  SIW_RGBW_Rd_reg030_reg                                                  0xB802BD60
#define  SIW_RGBW_Rd_reg030_inst_addr                                            "0x001C"
#define  set_SIW_RGBW_Rd_reg030_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg030_reg)=data)
#define  get_SIW_RGBW_Rd_reg030_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg030_reg))
#define  SIW_RGBW_Rd_reg030_rd_reg048_shift                                      (16)
#define  SIW_RGBW_Rd_reg030_rd_reg049_shift                                      (0)
#define  SIW_RGBW_Rd_reg030_rd_reg048_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg030_rd_reg049_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg030_rd_reg048(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg030_rd_reg049(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg030_get_rd_reg048(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg030_get_rd_reg049(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg032                                                     0x1802BD64
#define  SIW_RGBW_Rd_reg032_reg_addr                                             "0xB802BD64"
#define  SIW_RGBW_Rd_reg032_reg                                                  0xB802BD64
#define  SIW_RGBW_Rd_reg032_inst_addr                                            "0x001D"
#define  set_SIW_RGBW_Rd_reg032_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg032_reg)=data)
#define  get_SIW_RGBW_Rd_reg032_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg032_reg))
#define  SIW_RGBW_Rd_reg032_rd_reg050_shift                                      (16)
#define  SIW_RGBW_Rd_reg032_rd_reg051_shift                                      (0)
#define  SIW_RGBW_Rd_reg032_rd_reg050_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg032_rd_reg051_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg032_rd_reg050(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg032_rd_reg051(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg032_get_rd_reg050(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg032_get_rd_reg051(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg034                                                     0x1802BD68
#define  SIW_RGBW_Rd_reg034_reg_addr                                             "0xB802BD68"
#define  SIW_RGBW_Rd_reg034_reg                                                  0xB802BD68
#define  SIW_RGBW_Rd_reg034_inst_addr                                            "0x001E"
#define  set_SIW_RGBW_Rd_reg034_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg034_reg)=data)
#define  get_SIW_RGBW_Rd_reg034_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg034_reg))
#define  SIW_RGBW_Rd_reg034_rd_reg052_shift                                      (16)
#define  SIW_RGBW_Rd_reg034_rd_reg053_shift                                      (0)
#define  SIW_RGBW_Rd_reg034_rd_reg052_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg034_rd_reg053_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg034_rd_reg052(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg034_rd_reg053(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg034_get_rd_reg052(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg034_get_rd_reg053(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg036                                                     0x1802BD6C
#define  SIW_RGBW_Rd_reg036_reg_addr                                             "0xB802BD6C"
#define  SIW_RGBW_Rd_reg036_reg                                                  0xB802BD6C
#define  SIW_RGBW_Rd_reg036_inst_addr                                            "0x001F"
#define  set_SIW_RGBW_Rd_reg036_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg036_reg)=data)
#define  get_SIW_RGBW_Rd_reg036_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg036_reg))
#define  SIW_RGBW_Rd_reg036_rd_reg054_shift                                      (16)
#define  SIW_RGBW_Rd_reg036_rd_reg055_shift                                      (0)
#define  SIW_RGBW_Rd_reg036_rd_reg054_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg036_rd_reg055_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg036_rd_reg054(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg036_rd_reg055(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg036_get_rd_reg054(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg036_get_rd_reg055(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg038                                                     0x1802BD70
#define  SIW_RGBW_Rd_reg038_reg_addr                                             "0xB802BD70"
#define  SIW_RGBW_Rd_reg038_reg                                                  0xB802BD70
#define  SIW_RGBW_Rd_reg038_inst_addr                                            "0x0020"
#define  set_SIW_RGBW_Rd_reg038_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg038_reg)=data)
#define  get_SIW_RGBW_Rd_reg038_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg038_reg))
#define  SIW_RGBW_Rd_reg038_rd_reg056_shift                                      (16)
#define  SIW_RGBW_Rd_reg038_rd_reg057_shift                                      (0)
#define  SIW_RGBW_Rd_reg038_rd_reg056_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg038_rd_reg057_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg038_rd_reg056(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg038_rd_reg057(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg038_get_rd_reg056(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg038_get_rd_reg057(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg03A                                                     0x1802BD74
#define  SIW_RGBW_Rd_reg03A_reg_addr                                             "0xB802BD74"
#define  SIW_RGBW_Rd_reg03A_reg                                                  0xB802BD74
#define  SIW_RGBW_Rd_reg03A_inst_addr                                            "0x0021"
#define  set_SIW_RGBW_Rd_reg03A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg03A_reg)=data)
#define  get_SIW_RGBW_Rd_reg03A_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg03A_reg))
#define  SIW_RGBW_Rd_reg03A_rd_reg058_shift                                      (16)
#define  SIW_RGBW_Rd_reg03A_rd_reg059_shift                                      (0)
#define  SIW_RGBW_Rd_reg03A_rd_reg058_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg03A_rd_reg059_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg03A_rd_reg058(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg03A_rd_reg059(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg03A_get_rd_reg058(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg03A_get_rd_reg059(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg03C                                                     0x1802BD78
#define  SIW_RGBW_Rd_reg03C_reg_addr                                             "0xB802BD78"
#define  SIW_RGBW_Rd_reg03C_reg                                                  0xB802BD78
#define  SIW_RGBW_Rd_reg03C_inst_addr                                            "0x0022"
#define  set_SIW_RGBW_Rd_reg03C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg03C_reg)=data)
#define  get_SIW_RGBW_Rd_reg03C_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg03C_reg))
#define  SIW_RGBW_Rd_reg03C_rd_reg060_shift                                      (16)
#define  SIW_RGBW_Rd_reg03C_rd_reg061_shift                                      (0)
#define  SIW_RGBW_Rd_reg03C_rd_reg060_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg03C_rd_reg061_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg03C_rd_reg060(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg03C_rd_reg061(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg03C_get_rd_reg060(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg03C_get_rd_reg061(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg03E                                                     0x1802BD7C
#define  SIW_RGBW_Rd_reg03E_reg_addr                                             "0xB802BD7C"
#define  SIW_RGBW_Rd_reg03E_reg                                                  0xB802BD7C
#define  SIW_RGBW_Rd_reg03E_inst_addr                                            "0x0023"
#define  set_SIW_RGBW_Rd_reg03E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg03E_reg)=data)
#define  get_SIW_RGBW_Rd_reg03E_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg03E_reg))
#define  SIW_RGBW_Rd_reg03E_rd_reg062_shift                                      (16)
#define  SIW_RGBW_Rd_reg03E_rd_reg063_shift                                      (0)
#define  SIW_RGBW_Rd_reg03E_rd_reg062_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg03E_rd_reg063_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg03E_rd_reg062(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg03E_rd_reg063(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg03E_get_rd_reg062(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg03E_get_rd_reg063(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg040                                                     0x1802BD80
#define  SIW_RGBW_Rd_reg040_reg_addr                                             "0xB802BD80"
#define  SIW_RGBW_Rd_reg040_reg                                                  0xB802BD80
#define  SIW_RGBW_Rd_reg040_inst_addr                                            "0x0024"
#define  set_SIW_RGBW_Rd_reg040_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg040_reg)=data)
#define  get_SIW_RGBW_Rd_reg040_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg040_reg))
#define  SIW_RGBW_Rd_reg040_rd_reg064_shift                                      (16)
#define  SIW_RGBW_Rd_reg040_rd_reg065_shift                                      (0)
#define  SIW_RGBW_Rd_reg040_rd_reg064_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg040_rd_reg065_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg040_rd_reg064(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg040_rd_reg065(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg040_get_rd_reg064(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg040_get_rd_reg065(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg042                                                     0x1802BD84
#define  SIW_RGBW_Rd_reg042_reg_addr                                             "0xB802BD84"
#define  SIW_RGBW_Rd_reg042_reg                                                  0xB802BD84
#define  SIW_RGBW_Rd_reg042_inst_addr                                            "0x0025"
#define  set_SIW_RGBW_Rd_reg042_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg042_reg)=data)
#define  get_SIW_RGBW_Rd_reg042_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg042_reg))
#define  SIW_RGBW_Rd_reg042_rd_reg066_shift                                      (16)
#define  SIW_RGBW_Rd_reg042_rd_reg067_shift                                      (0)
#define  SIW_RGBW_Rd_reg042_rd_reg066_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg042_rd_reg067_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg042_rd_reg066(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg042_rd_reg067(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg042_get_rd_reg066(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg042_get_rd_reg067(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg044                                                     0x1802BD88
#define  SIW_RGBW_Rd_reg044_reg_addr                                             "0xB802BD88"
#define  SIW_RGBW_Rd_reg044_reg                                                  0xB802BD88
#define  SIW_RGBW_Rd_reg044_inst_addr                                            "0x0026"
#define  set_SIW_RGBW_Rd_reg044_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg044_reg)=data)
#define  get_SIW_RGBW_Rd_reg044_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg044_reg))
#define  SIW_RGBW_Rd_reg044_rd_reg068_shift                                      (16)
#define  SIW_RGBW_Rd_reg044_rd_reg069_shift                                      (0)
#define  SIW_RGBW_Rd_reg044_rd_reg068_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg044_rd_reg069_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg044_rd_reg068(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg044_rd_reg069(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg044_get_rd_reg068(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg044_get_rd_reg069(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg046                                                     0x1802BD8C
#define  SIW_RGBW_Rd_reg046_reg_addr                                             "0xB802BD8C"
#define  SIW_RGBW_Rd_reg046_reg                                                  0xB802BD8C
#define  SIW_RGBW_Rd_reg046_inst_addr                                            "0x0027"
#define  set_SIW_RGBW_Rd_reg046_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg046_reg)=data)
#define  get_SIW_RGBW_Rd_reg046_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg046_reg))
#define  SIW_RGBW_Rd_reg046_rd_reg070_shift                                      (16)
#define  SIW_RGBW_Rd_reg046_rd_reg071_shift                                      (0)
#define  SIW_RGBW_Rd_reg046_rd_reg070_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg046_rd_reg071_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg046_rd_reg070(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg046_rd_reg071(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg046_get_rd_reg070(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg046_get_rd_reg071(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg048                                                     0x1802BD90
#define  SIW_RGBW_Rd_reg048_reg_addr                                             "0xB802BD90"
#define  SIW_RGBW_Rd_reg048_reg                                                  0xB802BD90
#define  SIW_RGBW_Rd_reg048_inst_addr                                            "0x0028"
#define  set_SIW_RGBW_Rd_reg048_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg048_reg)=data)
#define  get_SIW_RGBW_Rd_reg048_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg048_reg))
#define  SIW_RGBW_Rd_reg048_rd_reg072_shift                                      (16)
#define  SIW_RGBW_Rd_reg048_rd_reg073_shift                                      (0)
#define  SIW_RGBW_Rd_reg048_rd_reg072_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg048_rd_reg073_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg048_rd_reg072(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg048_rd_reg073(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg048_get_rd_reg072(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg048_get_rd_reg073(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg04A                                                     0x1802BD94
#define  SIW_RGBW_Rd_reg04A_reg_addr                                             "0xB802BD94"
#define  SIW_RGBW_Rd_reg04A_reg                                                  0xB802BD94
#define  SIW_RGBW_Rd_reg04A_inst_addr                                            "0x0029"
#define  set_SIW_RGBW_Rd_reg04A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg04A_reg)=data)
#define  get_SIW_RGBW_Rd_reg04A_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg04A_reg))
#define  SIW_RGBW_Rd_reg04A_rd_reg074_shift                                      (16)
#define  SIW_RGBW_Rd_reg04A_rd_reg075_shift                                      (0)
#define  SIW_RGBW_Rd_reg04A_rd_reg074_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg04A_rd_reg075_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg04A_rd_reg074(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg04A_rd_reg075(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg04A_get_rd_reg074(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg04A_get_rd_reg075(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg04C                                                     0x1802BD98
#define  SIW_RGBW_Rd_reg04C_reg_addr                                             "0xB802BD98"
#define  SIW_RGBW_Rd_reg04C_reg                                                  0xB802BD98
#define  SIW_RGBW_Rd_reg04C_inst_addr                                            "0x002A"
#define  set_SIW_RGBW_Rd_reg04C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg04C_reg)=data)
#define  get_SIW_RGBW_Rd_reg04C_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg04C_reg))
#define  SIW_RGBW_Rd_reg04C_rd_reg076_shift                                      (16)
#define  SIW_RGBW_Rd_reg04C_rd_reg077_shift                                      (0)
#define  SIW_RGBW_Rd_reg04C_rd_reg076_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg04C_rd_reg077_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg04C_rd_reg076(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg04C_rd_reg077(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg04C_get_rd_reg076(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg04C_get_rd_reg077(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg04E                                                     0x1802BD9C
#define  SIW_RGBW_Rd_reg04E_reg_addr                                             "0xB802BD9C"
#define  SIW_RGBW_Rd_reg04E_reg                                                  0xB802BD9C
#define  SIW_RGBW_Rd_reg04E_inst_addr                                            "0x002B"
#define  set_SIW_RGBW_Rd_reg04E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg04E_reg)=data)
#define  get_SIW_RGBW_Rd_reg04E_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg04E_reg))
#define  SIW_RGBW_Rd_reg04E_rd_reg078_shift                                      (16)
#define  SIW_RGBW_Rd_reg04E_rd_reg079_shift                                      (0)
#define  SIW_RGBW_Rd_reg04E_rd_reg078_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg04E_rd_reg079_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg04E_rd_reg078(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg04E_rd_reg079(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg04E_get_rd_reg078(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg04E_get_rd_reg079(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg050                                                     0x1802BDA0
#define  SIW_RGBW_Rd_reg050_reg_addr                                             "0xB802BDA0"
#define  SIW_RGBW_Rd_reg050_reg                                                  0xB802BDA0
#define  SIW_RGBW_Rd_reg050_inst_addr                                            "0x002C"
#define  set_SIW_RGBW_Rd_reg050_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg050_reg)=data)
#define  get_SIW_RGBW_Rd_reg050_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg050_reg))
#define  SIW_RGBW_Rd_reg050_rd_reg080_shift                                      (16)
#define  SIW_RGBW_Rd_reg050_rd_reg081_shift                                      (0)
#define  SIW_RGBW_Rd_reg050_rd_reg080_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg050_rd_reg081_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg050_rd_reg080(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg050_rd_reg081(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg050_get_rd_reg080(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg050_get_rd_reg081(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg052                                                     0x1802BDA4
#define  SIW_RGBW_Rd_reg052_reg_addr                                             "0xB802BDA4"
#define  SIW_RGBW_Rd_reg052_reg                                                  0xB802BDA4
#define  SIW_RGBW_Rd_reg052_inst_addr                                            "0x002D"
#define  set_SIW_RGBW_Rd_reg052_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg052_reg)=data)
#define  get_SIW_RGBW_Rd_reg052_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg052_reg))
#define  SIW_RGBW_Rd_reg052_rd_reg082_shift                                      (16)
#define  SIW_RGBW_Rd_reg052_rd_reg083_shift                                      (0)
#define  SIW_RGBW_Rd_reg052_rd_reg082_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg052_rd_reg083_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg052_rd_reg082(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg052_rd_reg083(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg052_get_rd_reg082(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg052_get_rd_reg083(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg054                                                     0x1802BDA8
#define  SIW_RGBW_Rd_reg054_reg_addr                                             "0xB802BDA8"
#define  SIW_RGBW_Rd_reg054_reg                                                  0xB802BDA8
#define  SIW_RGBW_Rd_reg054_inst_addr                                            "0x002E"
#define  set_SIW_RGBW_Rd_reg054_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg054_reg)=data)
#define  get_SIW_RGBW_Rd_reg054_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg054_reg))
#define  SIW_RGBW_Rd_reg054_rd_reg084_shift                                      (16)
#define  SIW_RGBW_Rd_reg054_rd_reg085_shift                                      (0)
#define  SIW_RGBW_Rd_reg054_rd_reg084_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg054_rd_reg085_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg054_rd_reg084(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg054_rd_reg085(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg054_get_rd_reg084(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg054_get_rd_reg085(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg056                                                     0x1802BDAC
#define  SIW_RGBW_Rd_reg056_reg_addr                                             "0xB802BDAC"
#define  SIW_RGBW_Rd_reg056_reg                                                  0xB802BDAC
#define  SIW_RGBW_Rd_reg056_inst_addr                                            "0x002F"
#define  set_SIW_RGBW_Rd_reg056_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg056_reg)=data)
#define  get_SIW_RGBW_Rd_reg056_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg056_reg))
#define  SIW_RGBW_Rd_reg056_rd_reg086_shift                                      (16)
#define  SIW_RGBW_Rd_reg056_rd_reg087_shift                                      (0)
#define  SIW_RGBW_Rd_reg056_rd_reg086_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg056_rd_reg087_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg056_rd_reg086(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg056_rd_reg087(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg056_get_rd_reg086(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg056_get_rd_reg087(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg058                                                     0x1802BDB0
#define  SIW_RGBW_Rd_reg058_reg_addr                                             "0xB802BDB0"
#define  SIW_RGBW_Rd_reg058_reg                                                  0xB802BDB0
#define  SIW_RGBW_Rd_reg058_inst_addr                                            "0x0030"
#define  set_SIW_RGBW_Rd_reg058_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg058_reg)=data)
#define  get_SIW_RGBW_Rd_reg058_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg058_reg))
#define  SIW_RGBW_Rd_reg058_rd_reg088_shift                                      (16)
#define  SIW_RGBW_Rd_reg058_rd_reg089_shift                                      (0)
#define  SIW_RGBW_Rd_reg058_rd_reg088_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg058_rd_reg089_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg058_rd_reg088(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg058_rd_reg089(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg058_get_rd_reg088(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg058_get_rd_reg089(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg05A                                                     0x1802BDB4
#define  SIW_RGBW_Rd_reg05A_reg_addr                                             "0xB802BDB4"
#define  SIW_RGBW_Rd_reg05A_reg                                                  0xB802BDB4
#define  SIW_RGBW_Rd_reg05A_inst_addr                                            "0x0031"
#define  set_SIW_RGBW_Rd_reg05A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg05A_reg)=data)
#define  get_SIW_RGBW_Rd_reg05A_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg05A_reg))
#define  SIW_RGBW_Rd_reg05A_rd_reg090_shift                                      (16)
#define  SIW_RGBW_Rd_reg05A_rd_reg091_shift                                      (0)
#define  SIW_RGBW_Rd_reg05A_rd_reg090_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg05A_rd_reg091_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg05A_rd_reg090(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg05A_rd_reg091(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg05A_get_rd_reg090(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg05A_get_rd_reg091(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg05C                                                     0x1802BDB8
#define  SIW_RGBW_Rd_reg05C_reg_addr                                             "0xB802BDB8"
#define  SIW_RGBW_Rd_reg05C_reg                                                  0xB802BDB8
#define  SIW_RGBW_Rd_reg05C_inst_addr                                            "0x0032"
#define  set_SIW_RGBW_Rd_reg05C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg05C_reg)=data)
#define  get_SIW_RGBW_Rd_reg05C_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg05C_reg))
#define  SIW_RGBW_Rd_reg05C_rd_reg092_shift                                      (16)
#define  SIW_RGBW_Rd_reg05C_rd_reg093_shift                                      (0)
#define  SIW_RGBW_Rd_reg05C_rd_reg092_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg05C_rd_reg093_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg05C_rd_reg092(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg05C_rd_reg093(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg05C_get_rd_reg092(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg05C_get_rd_reg093(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg05E                                                     0x1802BDBC
#define  SIW_RGBW_Rd_reg05E_reg_addr                                             "0xB802BDBC"
#define  SIW_RGBW_Rd_reg05E_reg                                                  0xB802BDBC
#define  SIW_RGBW_Rd_reg05E_inst_addr                                            "0x0033"
#define  set_SIW_RGBW_Rd_reg05E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg05E_reg)=data)
#define  get_SIW_RGBW_Rd_reg05E_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg05E_reg))
#define  SIW_RGBW_Rd_reg05E_rd_reg094_shift                                      (16)
#define  SIW_RGBW_Rd_reg05E_rd_reg095_shift                                      (0)
#define  SIW_RGBW_Rd_reg05E_rd_reg094_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg05E_rd_reg095_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg05E_rd_reg094(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg05E_rd_reg095(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg05E_get_rd_reg094(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg05E_get_rd_reg095(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg060                                                     0x1802BDC0
#define  SIW_RGBW_Rd_reg060_reg_addr                                             "0xB802BDC0"
#define  SIW_RGBW_Rd_reg060_reg                                                  0xB802BDC0
#define  SIW_RGBW_Rd_reg060_inst_addr                                            "0x0034"
#define  set_SIW_RGBW_Rd_reg060_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg060_reg)=data)
#define  get_SIW_RGBW_Rd_reg060_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg060_reg))
#define  SIW_RGBW_Rd_reg060_rd_reg096_shift                                      (16)
#define  SIW_RGBW_Rd_reg060_rd_reg097_shift                                      (0)
#define  SIW_RGBW_Rd_reg060_rd_reg096_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg060_rd_reg097_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg060_rd_reg096(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg060_rd_reg097(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg060_get_rd_reg096(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg060_get_rd_reg097(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg062                                                     0x1802BDC4
#define  SIW_RGBW_Rd_reg062_reg_addr                                             "0xB802BDC4"
#define  SIW_RGBW_Rd_reg062_reg                                                  0xB802BDC4
#define  SIW_RGBW_Rd_reg062_inst_addr                                            "0x0035"
#define  set_SIW_RGBW_Rd_reg062_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg062_reg)=data)
#define  get_SIW_RGBW_Rd_reg062_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg062_reg))
#define  SIW_RGBW_Rd_reg062_rd_reg098_shift                                      (16)
#define  SIW_RGBW_Rd_reg062_rd_reg099_shift                                      (0)
#define  SIW_RGBW_Rd_reg062_rd_reg098_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg062_rd_reg099_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg062_rd_reg098(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg062_rd_reg099(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg062_get_rd_reg098(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg062_get_rd_reg099(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg064                                                     0x1802BDC8
#define  SIW_RGBW_Rd_reg064_reg_addr                                             "0xB802BDC8"
#define  SIW_RGBW_Rd_reg064_reg                                                  0xB802BDC8
#define  SIW_RGBW_Rd_reg064_inst_addr                                            "0x0036"
#define  set_SIW_RGBW_Rd_reg064_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg064_reg)=data)
#define  get_SIW_RGBW_Rd_reg064_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg064_reg))
#define  SIW_RGBW_Rd_reg064_rd_reg100_shift                                      (16)
#define  SIW_RGBW_Rd_reg064_rd_reg101_shift                                      (0)
#define  SIW_RGBW_Rd_reg064_rd_reg100_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg064_rd_reg101_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg064_rd_reg100(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg064_rd_reg101(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg064_get_rd_reg100(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg064_get_rd_reg101(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg066                                                     0x1802BDCC
#define  SIW_RGBW_Rd_reg066_reg_addr                                             "0xB802BDCC"
#define  SIW_RGBW_Rd_reg066_reg                                                  0xB802BDCC
#define  SIW_RGBW_Rd_reg066_inst_addr                                            "0x0037"
#define  set_SIW_RGBW_Rd_reg066_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg066_reg)=data)
#define  get_SIW_RGBW_Rd_reg066_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg066_reg))
#define  SIW_RGBW_Rd_reg066_rd_reg102_shift                                      (16)
#define  SIW_RGBW_Rd_reg066_rd_reg103_shift                                      (0)
#define  SIW_RGBW_Rd_reg066_rd_reg102_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg066_rd_reg103_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg066_rd_reg102(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg066_rd_reg103(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg066_get_rd_reg102(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg066_get_rd_reg103(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg068                                                     0x1802BDD0
#define  SIW_RGBW_Rd_reg068_reg_addr                                             "0xB802BDD0"
#define  SIW_RGBW_Rd_reg068_reg                                                  0xB802BDD0
#define  SIW_RGBW_Rd_reg068_inst_addr                                            "0x0038"
#define  set_SIW_RGBW_Rd_reg068_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg068_reg)=data)
#define  get_SIW_RGBW_Rd_reg068_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg068_reg))
#define  SIW_RGBW_Rd_reg068_rd_reg104_shift                                      (16)
#define  SIW_RGBW_Rd_reg068_rd_reg105_shift                                      (0)
#define  SIW_RGBW_Rd_reg068_rd_reg104_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg068_rd_reg105_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg068_rd_reg104(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg068_rd_reg105(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg068_get_rd_reg104(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg068_get_rd_reg105(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg06A                                                     0x1802BDD4
#define  SIW_RGBW_Rd_reg06A_reg_addr                                             "0xB802BDD4"
#define  SIW_RGBW_Rd_reg06A_reg                                                  0xB802BDD4
#define  SIW_RGBW_Rd_reg06A_inst_addr                                            "0x0039"
#define  set_SIW_RGBW_Rd_reg06A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg06A_reg)=data)
#define  get_SIW_RGBW_Rd_reg06A_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg06A_reg))
#define  SIW_RGBW_Rd_reg06A_rd_reg106_shift                                      (16)
#define  SIW_RGBW_Rd_reg06A_rd_reg107_shift                                      (0)
#define  SIW_RGBW_Rd_reg06A_rd_reg106_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg06A_rd_reg107_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg06A_rd_reg106(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg06A_rd_reg107(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg06A_get_rd_reg106(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg06A_get_rd_reg107(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg06C                                                     0x1802BDD8
#define  SIW_RGBW_Rd_reg06C_reg_addr                                             "0xB802BDD8"
#define  SIW_RGBW_Rd_reg06C_reg                                                  0xB802BDD8
#define  SIW_RGBW_Rd_reg06C_inst_addr                                            "0x003A"
#define  set_SIW_RGBW_Rd_reg06C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg06C_reg)=data)
#define  get_SIW_RGBW_Rd_reg06C_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg06C_reg))
#define  SIW_RGBW_Rd_reg06C_rd_reg108_shift                                      (16)
#define  SIW_RGBW_Rd_reg06C_rd_reg109_shift                                      (0)
#define  SIW_RGBW_Rd_reg06C_rd_reg108_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg06C_rd_reg109_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg06C_rd_reg108(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg06C_rd_reg109(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg06C_get_rd_reg108(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg06C_get_rd_reg109(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg06E                                                     0x1802BDDC
#define  SIW_RGBW_Rd_reg06E_reg_addr                                             "0xB802BDDC"
#define  SIW_RGBW_Rd_reg06E_reg                                                  0xB802BDDC
#define  SIW_RGBW_Rd_reg06E_inst_addr                                            "0x003B"
#define  set_SIW_RGBW_Rd_reg06E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg06E_reg)=data)
#define  get_SIW_RGBW_Rd_reg06E_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg06E_reg))
#define  SIW_RGBW_Rd_reg06E_rd_reg110_shift                                      (16)
#define  SIW_RGBW_Rd_reg06E_rd_reg111_shift                                      (0)
#define  SIW_RGBW_Rd_reg06E_rd_reg110_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg06E_rd_reg111_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg06E_rd_reg110(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg06E_rd_reg111(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg06E_get_rd_reg110(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg06E_get_rd_reg111(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg070                                                     0x1802BDE0
#define  SIW_RGBW_Rd_reg070_reg_addr                                             "0xB802BDE0"
#define  SIW_RGBW_Rd_reg070_reg                                                  0xB802BDE0
#define  SIW_RGBW_Rd_reg070_inst_addr                                            "0x003C"
#define  set_SIW_RGBW_Rd_reg070_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg070_reg)=data)
#define  get_SIW_RGBW_Rd_reg070_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg070_reg))
#define  SIW_RGBW_Rd_reg070_rd_reg112_shift                                      (16)
#define  SIW_RGBW_Rd_reg070_rd_reg113_shift                                      (0)
#define  SIW_RGBW_Rd_reg070_rd_reg112_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg070_rd_reg113_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg070_rd_reg112(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg070_rd_reg113(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg070_get_rd_reg112(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg070_get_rd_reg113(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg072                                                     0x1802BDE4
#define  SIW_RGBW_Rd_reg072_reg_addr                                             "0xB802BDE4"
#define  SIW_RGBW_Rd_reg072_reg                                                  0xB802BDE4
#define  SIW_RGBW_Rd_reg072_inst_addr                                            "0x003D"
#define  set_SIW_RGBW_Rd_reg072_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg072_reg)=data)
#define  get_SIW_RGBW_Rd_reg072_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg072_reg))
#define  SIW_RGBW_Rd_reg072_rd_reg114_shift                                      (16)
#define  SIW_RGBW_Rd_reg072_rd_reg115_shift                                      (0)
#define  SIW_RGBW_Rd_reg072_rd_reg114_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg072_rd_reg115_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg072_rd_reg114(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg072_rd_reg115(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg072_get_rd_reg114(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg072_get_rd_reg115(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg074                                                     0x1802BDE8
#define  SIW_RGBW_Rd_reg074_reg_addr                                             "0xB802BDE8"
#define  SIW_RGBW_Rd_reg074_reg                                                  0xB802BDE8
#define  SIW_RGBW_Rd_reg074_inst_addr                                            "0x003E"
#define  set_SIW_RGBW_Rd_reg074_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg074_reg)=data)
#define  get_SIW_RGBW_Rd_reg074_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg074_reg))
#define  SIW_RGBW_Rd_reg074_rd_reg116_shift                                      (16)
#define  SIW_RGBW_Rd_reg074_rd_reg117_shift                                      (0)
#define  SIW_RGBW_Rd_reg074_rd_reg116_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg074_rd_reg117_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg074_rd_reg116(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg074_rd_reg117(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg074_get_rd_reg116(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg074_get_rd_reg117(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg076                                                     0x1802BDEC
#define  SIW_RGBW_Rd_reg076_reg_addr                                             "0xB802BDEC"
#define  SIW_RGBW_Rd_reg076_reg                                                  0xB802BDEC
#define  SIW_RGBW_Rd_reg076_inst_addr                                            "0x003F"
#define  set_SIW_RGBW_Rd_reg076_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg076_reg)=data)
#define  get_SIW_RGBW_Rd_reg076_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg076_reg))
#define  SIW_RGBW_Rd_reg076_rd_reg118_shift                                      (16)
#define  SIW_RGBW_Rd_reg076_rd_reg119_shift                                      (0)
#define  SIW_RGBW_Rd_reg076_rd_reg118_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg076_rd_reg119_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg076_rd_reg118(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg076_rd_reg119(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg076_get_rd_reg118(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg076_get_rd_reg119(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg078                                                     0x1802BDF0
#define  SIW_RGBW_Rd_reg078_reg_addr                                             "0xB802BDF0"
#define  SIW_RGBW_Rd_reg078_reg                                                  0xB802BDF0
#define  SIW_RGBW_Rd_reg078_inst_addr                                            "0x0040"
#define  set_SIW_RGBW_Rd_reg078_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg078_reg)=data)
#define  get_SIW_RGBW_Rd_reg078_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg078_reg))
#define  SIW_RGBW_Rd_reg078_rd_reg120_shift                                      (16)
#define  SIW_RGBW_Rd_reg078_rd_reg121_shift                                      (0)
#define  SIW_RGBW_Rd_reg078_rd_reg120_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg078_rd_reg121_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg078_rd_reg120(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg078_rd_reg121(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg078_get_rd_reg120(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg078_get_rd_reg121(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg07A                                                     0x1802BDF4
#define  SIW_RGBW_Rd_reg07A_reg_addr                                             "0xB802BDF4"
#define  SIW_RGBW_Rd_reg07A_reg                                                  0xB802BDF4
#define  SIW_RGBW_Rd_reg07A_inst_addr                                            "0x0041"
#define  set_SIW_RGBW_Rd_reg07A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg07A_reg)=data)
#define  get_SIW_RGBW_Rd_reg07A_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg07A_reg))
#define  SIW_RGBW_Rd_reg07A_rd_reg122_shift                                      (16)
#define  SIW_RGBW_Rd_reg07A_rd_reg123_shift                                      (0)
#define  SIW_RGBW_Rd_reg07A_rd_reg122_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg07A_rd_reg123_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg07A_rd_reg122(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg07A_rd_reg123(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg07A_get_rd_reg122(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg07A_get_rd_reg123(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg07C                                                     0x1802BDF8
#define  SIW_RGBW_Rd_reg07C_reg_addr                                             "0xB802BDF8"
#define  SIW_RGBW_Rd_reg07C_reg                                                  0xB802BDF8
#define  SIW_RGBW_Rd_reg07C_inst_addr                                            "0x0042"
#define  set_SIW_RGBW_Rd_reg07C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg07C_reg)=data)
#define  get_SIW_RGBW_Rd_reg07C_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg07C_reg))
#define  SIW_RGBW_Rd_reg07C_rd_reg124_shift                                      (16)
#define  SIW_RGBW_Rd_reg07C_rd_reg125_shift                                      (0)
#define  SIW_RGBW_Rd_reg07C_rd_reg124_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg07C_rd_reg125_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg07C_rd_reg124(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg07C_rd_reg125(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg07C_get_rd_reg124(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg07C_get_rd_reg125(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg07E                                                     0x1802BDFC
#define  SIW_RGBW_Rd_reg07E_reg_addr                                             "0xB802BDFC"
#define  SIW_RGBW_Rd_reg07E_reg                                                  0xB802BDFC
#define  SIW_RGBW_Rd_reg07E_inst_addr                                            "0x0043"
#define  set_SIW_RGBW_Rd_reg07E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg07E_reg)=data)
#define  get_SIW_RGBW_Rd_reg07E_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg07E_reg))
#define  SIW_RGBW_Rd_reg07E_rd_reg126_shift                                      (16)
#define  SIW_RGBW_Rd_reg07E_rd_reg127_shift                                      (0)
#define  SIW_RGBW_Rd_reg07E_rd_reg126_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg07E_rd_reg127_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg07E_rd_reg126(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg07E_rd_reg127(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg07E_get_rd_reg126(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg07E_get_rd_reg127(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg080                                                     0x1802BE00
#define  SIW_RGBW_Rd_reg080_reg_addr                                             "0xB802BE00"
#define  SIW_RGBW_Rd_reg080_reg                                                  0xB802BE00
#define  SIW_RGBW_Rd_reg080_inst_addr                                            "0x0044"
#define  set_SIW_RGBW_Rd_reg080_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg080_reg)=data)
#define  get_SIW_RGBW_Rd_reg080_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg080_reg))
#define  SIW_RGBW_Rd_reg080_rd_reg128_shift                                      (16)
#define  SIW_RGBW_Rd_reg080_rd_reg129_shift                                      (0)
#define  SIW_RGBW_Rd_reg080_rd_reg128_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg080_rd_reg129_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg080_rd_reg128(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg080_rd_reg129(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg080_get_rd_reg128(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg080_get_rd_reg129(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg082                                                     0x1802BE04
#define  SIW_RGBW_Rd_reg082_reg_addr                                             "0xB802BE04"
#define  SIW_RGBW_Rd_reg082_reg                                                  0xB802BE04
#define  SIW_RGBW_Rd_reg082_inst_addr                                            "0x0045"
#define  set_SIW_RGBW_Rd_reg082_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg082_reg)=data)
#define  get_SIW_RGBW_Rd_reg082_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg082_reg))
#define  SIW_RGBW_Rd_reg082_rd_reg130_shift                                      (16)
#define  SIW_RGBW_Rd_reg082_rd_reg131_shift                                      (0)
#define  SIW_RGBW_Rd_reg082_rd_reg130_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg082_rd_reg131_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg082_rd_reg130(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg082_rd_reg131(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg082_get_rd_reg130(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg082_get_rd_reg131(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg084                                                     0x1802BE08
#define  SIW_RGBW_Rd_reg084_reg_addr                                             "0xB802BE08"
#define  SIW_RGBW_Rd_reg084_reg                                                  0xB802BE08
#define  SIW_RGBW_Rd_reg084_inst_addr                                            "0x0046"
#define  set_SIW_RGBW_Rd_reg084_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg084_reg)=data)
#define  get_SIW_RGBW_Rd_reg084_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg084_reg))
#define  SIW_RGBW_Rd_reg084_rd_reg132_shift                                      (16)
#define  SIW_RGBW_Rd_reg084_rd_reg133_shift                                      (0)
#define  SIW_RGBW_Rd_reg084_rd_reg132_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg084_rd_reg133_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg084_rd_reg132(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg084_rd_reg133(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg084_get_rd_reg132(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg084_get_rd_reg133(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg086                                                     0x1802BE0C
#define  SIW_RGBW_Rd_reg086_reg_addr                                             "0xB802BE0C"
#define  SIW_RGBW_Rd_reg086_reg                                                  0xB802BE0C
#define  SIW_RGBW_Rd_reg086_inst_addr                                            "0x0047"
#define  set_SIW_RGBW_Rd_reg086_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg086_reg)=data)
#define  get_SIW_RGBW_Rd_reg086_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg086_reg))
#define  SIW_RGBW_Rd_reg086_rd_reg134_shift                                      (16)
#define  SIW_RGBW_Rd_reg086_rd_reg135_shift                                      (0)
#define  SIW_RGBW_Rd_reg086_rd_reg134_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg086_rd_reg135_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg086_rd_reg134(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg086_rd_reg135(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg086_get_rd_reg134(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg086_get_rd_reg135(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg088                                                     0x1802BE10
#define  SIW_RGBW_Rd_reg088_reg_addr                                             "0xB802BE10"
#define  SIW_RGBW_Rd_reg088_reg                                                  0xB802BE10
#define  SIW_RGBW_Rd_reg088_inst_addr                                            "0x0048"
#define  set_SIW_RGBW_Rd_reg088_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg088_reg)=data)
#define  get_SIW_RGBW_Rd_reg088_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg088_reg))
#define  SIW_RGBW_Rd_reg088_rd_reg136_shift                                      (16)
#define  SIW_RGBW_Rd_reg088_rd_reg137_shift                                      (0)
#define  SIW_RGBW_Rd_reg088_rd_reg136_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg088_rd_reg137_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg088_rd_reg136(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg088_rd_reg137(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg088_get_rd_reg136(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg088_get_rd_reg137(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg08A                                                     0x1802BE14
#define  SIW_RGBW_Rd_reg08A_reg_addr                                             "0xB802BE14"
#define  SIW_RGBW_Rd_reg08A_reg                                                  0xB802BE14
#define  SIW_RGBW_Rd_reg08A_inst_addr                                            "0x0049"
#define  set_SIW_RGBW_Rd_reg08A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg08A_reg)=data)
#define  get_SIW_RGBW_Rd_reg08A_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg08A_reg))
#define  SIW_RGBW_Rd_reg08A_rd_reg138_shift                                      (16)
#define  SIW_RGBW_Rd_reg08A_rd_reg139_shift                                      (0)
#define  SIW_RGBW_Rd_reg08A_rd_reg138_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg08A_rd_reg139_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg08A_rd_reg138(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg08A_rd_reg139(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg08A_get_rd_reg138(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg08A_get_rd_reg139(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg08C                                                     0x1802BE18
#define  SIW_RGBW_Rd_reg08C_reg_addr                                             "0xB802BE18"
#define  SIW_RGBW_Rd_reg08C_reg                                                  0xB802BE18
#define  SIW_RGBW_Rd_reg08C_inst_addr                                            "0x004A"
#define  set_SIW_RGBW_Rd_reg08C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg08C_reg)=data)
#define  get_SIW_RGBW_Rd_reg08C_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg08C_reg))
#define  SIW_RGBW_Rd_reg08C_rd_reg140_shift                                      (16)
#define  SIW_RGBW_Rd_reg08C_rd_reg141_shift                                      (0)
#define  SIW_RGBW_Rd_reg08C_rd_reg140_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg08C_rd_reg141_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg08C_rd_reg140(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg08C_rd_reg141(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg08C_get_rd_reg140(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg08C_get_rd_reg141(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg08E                                                     0x1802BE1C
#define  SIW_RGBW_Rd_reg08E_reg_addr                                             "0xB802BE1C"
#define  SIW_RGBW_Rd_reg08E_reg                                                  0xB802BE1C
#define  SIW_RGBW_Rd_reg08E_inst_addr                                            "0x004B"
#define  set_SIW_RGBW_Rd_reg08E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg08E_reg)=data)
#define  get_SIW_RGBW_Rd_reg08E_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg08E_reg))
#define  SIW_RGBW_Rd_reg08E_rd_reg142_shift                                      (16)
#define  SIW_RGBW_Rd_reg08E_rd_reg143_shift                                      (0)
#define  SIW_RGBW_Rd_reg08E_rd_reg142_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg08E_rd_reg143_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg08E_rd_reg142(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg08E_rd_reg143(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg08E_get_rd_reg142(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg08E_get_rd_reg143(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg090                                                     0x1802BE20
#define  SIW_RGBW_Rd_reg090_reg_addr                                             "0xB802BE20"
#define  SIW_RGBW_Rd_reg090_reg                                                  0xB802BE20
#define  SIW_RGBW_Rd_reg090_inst_addr                                            "0x004C"
#define  set_SIW_RGBW_Rd_reg090_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg090_reg)=data)
#define  get_SIW_RGBW_Rd_reg090_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg090_reg))
#define  SIW_RGBW_Rd_reg090_rd_reg144_shift                                      (16)
#define  SIW_RGBW_Rd_reg090_rd_reg145_shift                                      (0)
#define  SIW_RGBW_Rd_reg090_rd_reg144_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg090_rd_reg145_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg090_rd_reg144(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg090_rd_reg145(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg090_get_rd_reg144(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg090_get_rd_reg145(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg092                                                     0x1802BE24
#define  SIW_RGBW_Rd_reg092_reg_addr                                             "0xB802BE24"
#define  SIW_RGBW_Rd_reg092_reg                                                  0xB802BE24
#define  SIW_RGBW_Rd_reg092_inst_addr                                            "0x004D"
#define  set_SIW_RGBW_Rd_reg092_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg092_reg)=data)
#define  get_SIW_RGBW_Rd_reg092_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg092_reg))
#define  SIW_RGBW_Rd_reg092_rd_reg146_shift                                      (16)
#define  SIW_RGBW_Rd_reg092_rd_reg147_shift                                      (0)
#define  SIW_RGBW_Rd_reg092_rd_reg146_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg092_rd_reg147_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg092_rd_reg146(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg092_rd_reg147(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg092_get_rd_reg146(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg092_get_rd_reg147(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg094                                                     0x1802BE28
#define  SIW_RGBW_Rd_reg094_reg_addr                                             "0xB802BE28"
#define  SIW_RGBW_Rd_reg094_reg                                                  0xB802BE28
#define  SIW_RGBW_Rd_reg094_inst_addr                                            "0x004E"
#define  set_SIW_RGBW_Rd_reg094_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg094_reg)=data)
#define  get_SIW_RGBW_Rd_reg094_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg094_reg))
#define  SIW_RGBW_Rd_reg094_rd_reg148_shift                                      (16)
#define  SIW_RGBW_Rd_reg094_rd_reg149_shift                                      (0)
#define  SIW_RGBW_Rd_reg094_rd_reg148_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg094_rd_reg149_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg094_rd_reg148(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg094_rd_reg149(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg094_get_rd_reg148(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg094_get_rd_reg149(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg096                                                     0x1802BE2C
#define  SIW_RGBW_Rd_reg096_reg_addr                                             "0xB802BE2C"
#define  SIW_RGBW_Rd_reg096_reg                                                  0xB802BE2C
#define  SIW_RGBW_Rd_reg096_inst_addr                                            "0x004F"
#define  set_SIW_RGBW_Rd_reg096_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg096_reg)=data)
#define  get_SIW_RGBW_Rd_reg096_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg096_reg))
#define  SIW_RGBW_Rd_reg096_rd_reg150_shift                                      (16)
#define  SIW_RGBW_Rd_reg096_rd_reg151_shift                                      (0)
#define  SIW_RGBW_Rd_reg096_rd_reg150_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg096_rd_reg151_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg096_rd_reg150(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg096_rd_reg151(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg096_get_rd_reg150(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg096_get_rd_reg151(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg098                                                     0x1802BE30
#define  SIW_RGBW_Rd_reg098_reg_addr                                             "0xB802BE30"
#define  SIW_RGBW_Rd_reg098_reg                                                  0xB802BE30
#define  SIW_RGBW_Rd_reg098_inst_addr                                            "0x0050"
#define  set_SIW_RGBW_Rd_reg098_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg098_reg)=data)
#define  get_SIW_RGBW_Rd_reg098_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg098_reg))
#define  SIW_RGBW_Rd_reg098_rd_reg152_shift                                      (16)
#define  SIW_RGBW_Rd_reg098_rd_reg153_shift                                      (0)
#define  SIW_RGBW_Rd_reg098_rd_reg152_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg098_rd_reg153_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg098_rd_reg152(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg098_rd_reg153(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg098_get_rd_reg152(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg098_get_rd_reg153(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg09A                                                     0x1802BE34
#define  SIW_RGBW_Rd_reg09A_reg_addr                                             "0xB802BE34"
#define  SIW_RGBW_Rd_reg09A_reg                                                  0xB802BE34
#define  SIW_RGBW_Rd_reg09A_inst_addr                                            "0x0051"
#define  set_SIW_RGBW_Rd_reg09A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg09A_reg)=data)
#define  get_SIW_RGBW_Rd_reg09A_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg09A_reg))
#define  SIW_RGBW_Rd_reg09A_rd_reg154_shift                                      (16)
#define  SIW_RGBW_Rd_reg09A_rd_reg155_shift                                      (0)
#define  SIW_RGBW_Rd_reg09A_rd_reg154_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg09A_rd_reg155_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg09A_rd_reg154(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg09A_rd_reg155(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg09A_get_rd_reg154(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg09A_get_rd_reg155(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg09C                                                     0x1802BE38
#define  SIW_RGBW_Rd_reg09C_reg_addr                                             "0xB802BE38"
#define  SIW_RGBW_Rd_reg09C_reg                                                  0xB802BE38
#define  SIW_RGBW_Rd_reg09C_inst_addr                                            "0x0052"
#define  set_SIW_RGBW_Rd_reg09C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg09C_reg)=data)
#define  get_SIW_RGBW_Rd_reg09C_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg09C_reg))
#define  SIW_RGBW_Rd_reg09C_rd_reg156_shift                                      (16)
#define  SIW_RGBW_Rd_reg09C_rd_reg157_shift                                      (0)
#define  SIW_RGBW_Rd_reg09C_rd_reg156_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg09C_rd_reg157_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg09C_rd_reg156(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg09C_rd_reg157(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg09C_get_rd_reg156(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg09C_get_rd_reg157(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg09E                                                     0x1802BE3C
#define  SIW_RGBW_Rd_reg09E_reg_addr                                             "0xB802BE3C"
#define  SIW_RGBW_Rd_reg09E_reg                                                  0xB802BE3C
#define  SIW_RGBW_Rd_reg09E_inst_addr                                            "0x0053"
#define  set_SIW_RGBW_Rd_reg09E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg09E_reg)=data)
#define  get_SIW_RGBW_Rd_reg09E_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg09E_reg))
#define  SIW_RGBW_Rd_reg09E_rd_reg158_shift                                      (16)
#define  SIW_RGBW_Rd_reg09E_rd_reg159_shift                                      (0)
#define  SIW_RGBW_Rd_reg09E_rd_reg158_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg09E_rd_reg159_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg09E_rd_reg158(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg09E_rd_reg159(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg09E_get_rd_reg158(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg09E_get_rd_reg159(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0A0                                                     0x1802BE40
#define  SIW_RGBW_Rd_reg0A0_reg_addr                                             "0xB802BE40"
#define  SIW_RGBW_Rd_reg0A0_reg                                                  0xB802BE40
#define  SIW_RGBW_Rd_reg0A0_inst_addr                                            "0x0054"
#define  set_SIW_RGBW_Rd_reg0A0_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0A0_reg)=data)
#define  get_SIW_RGBW_Rd_reg0A0_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0A0_reg))
#define  SIW_RGBW_Rd_reg0A0_rd_reg160_shift                                      (16)
#define  SIW_RGBW_Rd_reg0A0_rd_reg161_shift                                      (0)
#define  SIW_RGBW_Rd_reg0A0_rd_reg160_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0A0_rd_reg161_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0A0_rd_reg160(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0A0_rd_reg161(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0A0_get_rd_reg160(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0A0_get_rd_reg161(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0A2                                                     0x1802BE44
#define  SIW_RGBW_Rd_reg0A2_reg_addr                                             "0xB802BE44"
#define  SIW_RGBW_Rd_reg0A2_reg                                                  0xB802BE44
#define  SIW_RGBW_Rd_reg0A2_inst_addr                                            "0x0055"
#define  set_SIW_RGBW_Rd_reg0A2_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0A2_reg)=data)
#define  get_SIW_RGBW_Rd_reg0A2_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0A2_reg))
#define  SIW_RGBW_Rd_reg0A2_rd_reg162_shift                                      (16)
#define  SIW_RGBW_Rd_reg0A2_rd_reg163_shift                                      (0)
#define  SIW_RGBW_Rd_reg0A2_rd_reg162_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0A2_rd_reg163_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0A2_rd_reg162(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0A2_rd_reg163(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0A2_get_rd_reg162(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0A2_get_rd_reg163(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0A4                                                     0x1802BE48
#define  SIW_RGBW_Rd_reg0A4_reg_addr                                             "0xB802BE48"
#define  SIW_RGBW_Rd_reg0A4_reg                                                  0xB802BE48
#define  SIW_RGBW_Rd_reg0A4_inst_addr                                            "0x0056"
#define  set_SIW_RGBW_Rd_reg0A4_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0A4_reg)=data)
#define  get_SIW_RGBW_Rd_reg0A4_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0A4_reg))
#define  SIW_RGBW_Rd_reg0A4_rd_reg164_shift                                      (16)
#define  SIW_RGBW_Rd_reg0A4_rd_reg165_shift                                      (0)
#define  SIW_RGBW_Rd_reg0A4_rd_reg164_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0A4_rd_reg165_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0A4_rd_reg164(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0A4_rd_reg165(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0A4_get_rd_reg164(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0A4_get_rd_reg165(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0A6                                                     0x1802BE4C
#define  SIW_RGBW_Rd_reg0A6_reg_addr                                             "0xB802BE4C"
#define  SIW_RGBW_Rd_reg0A6_reg                                                  0xB802BE4C
#define  SIW_RGBW_Rd_reg0A6_inst_addr                                            "0x0057"
#define  set_SIW_RGBW_Rd_reg0A6_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0A6_reg)=data)
#define  get_SIW_RGBW_Rd_reg0A6_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0A6_reg))
#define  SIW_RGBW_Rd_reg0A6_rd_reg166_shift                                      (16)
#define  SIW_RGBW_Rd_reg0A6_rd_reg167_shift                                      (0)
#define  SIW_RGBW_Rd_reg0A6_rd_reg166_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0A6_rd_reg167_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0A6_rd_reg166(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0A6_rd_reg167(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0A6_get_rd_reg166(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0A6_get_rd_reg167(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0A8                                                     0x1802BE50
#define  SIW_RGBW_Rd_reg0A8_reg_addr                                             "0xB802BE50"
#define  SIW_RGBW_Rd_reg0A8_reg                                                  0xB802BE50
#define  SIW_RGBW_Rd_reg0A8_inst_addr                                            "0x0058"
#define  set_SIW_RGBW_Rd_reg0A8_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0A8_reg)=data)
#define  get_SIW_RGBW_Rd_reg0A8_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0A8_reg))
#define  SIW_RGBW_Rd_reg0A8_rd_reg168_shift                                      (16)
#define  SIW_RGBW_Rd_reg0A8_rd_reg169_shift                                      (0)
#define  SIW_RGBW_Rd_reg0A8_rd_reg168_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0A8_rd_reg169_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0A8_rd_reg168(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0A8_rd_reg169(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0A8_get_rd_reg168(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0A8_get_rd_reg169(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0AA                                                     0x1802BE54
#define  SIW_RGBW_Rd_reg0AA_reg_addr                                             "0xB802BE54"
#define  SIW_RGBW_Rd_reg0AA_reg                                                  0xB802BE54
#define  SIW_RGBW_Rd_reg0AA_inst_addr                                            "0x0059"
#define  set_SIW_RGBW_Rd_reg0AA_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0AA_reg)=data)
#define  get_SIW_RGBW_Rd_reg0AA_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0AA_reg))
#define  SIW_RGBW_Rd_reg0AA_rd_reg170_shift                                      (16)
#define  SIW_RGBW_Rd_reg0AA_rd_reg171_shift                                      (0)
#define  SIW_RGBW_Rd_reg0AA_rd_reg170_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0AA_rd_reg171_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0AA_rd_reg170(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0AA_rd_reg171(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0AA_get_rd_reg170(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0AA_get_rd_reg171(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0AC                                                     0x1802BE58
#define  SIW_RGBW_Rd_reg0AC_reg_addr                                             "0xB802BE58"
#define  SIW_RGBW_Rd_reg0AC_reg                                                  0xB802BE58
#define  SIW_RGBW_Rd_reg0AC_inst_addr                                            "0x005A"
#define  set_SIW_RGBW_Rd_reg0AC_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0AC_reg)=data)
#define  get_SIW_RGBW_Rd_reg0AC_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0AC_reg))
#define  SIW_RGBW_Rd_reg0AC_rd_reg172_shift                                      (16)
#define  SIW_RGBW_Rd_reg0AC_rd_reg173_shift                                      (0)
#define  SIW_RGBW_Rd_reg0AC_rd_reg172_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0AC_rd_reg173_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0AC_rd_reg172(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0AC_rd_reg173(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0AC_get_rd_reg172(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0AC_get_rd_reg173(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0AE                                                     0x1802BE5C
#define  SIW_RGBW_Rd_reg0AE_reg_addr                                             "0xB802BE5C"
#define  SIW_RGBW_Rd_reg0AE_reg                                                  0xB802BE5C
#define  SIW_RGBW_Rd_reg0AE_inst_addr                                            "0x005B"
#define  set_SIW_RGBW_Rd_reg0AE_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0AE_reg)=data)
#define  get_SIW_RGBW_Rd_reg0AE_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0AE_reg))
#define  SIW_RGBW_Rd_reg0AE_rd_reg174_shift                                      (16)
#define  SIW_RGBW_Rd_reg0AE_rd_reg175_shift                                      (0)
#define  SIW_RGBW_Rd_reg0AE_rd_reg174_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0AE_rd_reg175_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0AE_rd_reg174(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0AE_rd_reg175(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0AE_get_rd_reg174(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0AE_get_rd_reg175(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0B0                                                     0x1802BE60
#define  SIW_RGBW_Rd_reg0B0_reg_addr                                             "0xB802BE60"
#define  SIW_RGBW_Rd_reg0B0_reg                                                  0xB802BE60
#define  SIW_RGBW_Rd_reg0B0_inst_addr                                            "0x005C"
#define  set_SIW_RGBW_Rd_reg0B0_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0B0_reg)=data)
#define  get_SIW_RGBW_Rd_reg0B0_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0B0_reg))
#define  SIW_RGBW_Rd_reg0B0_rd_reg176_shift                                      (16)
#define  SIW_RGBW_Rd_reg0B0_rd_reg177_shift                                      (0)
#define  SIW_RGBW_Rd_reg0B0_rd_reg176_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0B0_rd_reg177_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0B0_rd_reg176(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0B0_rd_reg177(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0B0_get_rd_reg176(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0B0_get_rd_reg177(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0B2                                                     0x1802BE64
#define  SIW_RGBW_Rd_reg0B2_reg_addr                                             "0xB802BE64"
#define  SIW_RGBW_Rd_reg0B2_reg                                                  0xB802BE64
#define  SIW_RGBW_Rd_reg0B2_inst_addr                                            "0x005D"
#define  set_SIW_RGBW_Rd_reg0B2_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0B2_reg)=data)
#define  get_SIW_RGBW_Rd_reg0B2_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0B2_reg))
#define  SIW_RGBW_Rd_reg0B2_rd_reg178_shift                                      (16)
#define  SIW_RGBW_Rd_reg0B2_rd_reg179_shift                                      (0)
#define  SIW_RGBW_Rd_reg0B2_rd_reg178_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0B2_rd_reg179_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0B2_rd_reg178(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0B2_rd_reg179(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0B2_get_rd_reg178(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0B2_get_rd_reg179(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0B4                                                     0x1802BE68
#define  SIW_RGBW_Rd_reg0B4_reg_addr                                             "0xB802BE68"
#define  SIW_RGBW_Rd_reg0B4_reg                                                  0xB802BE68
#define  SIW_RGBW_Rd_reg0B4_inst_addr                                            "0x005E"
#define  set_SIW_RGBW_Rd_reg0B4_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0B4_reg)=data)
#define  get_SIW_RGBW_Rd_reg0B4_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0B4_reg))
#define  SIW_RGBW_Rd_reg0B4_rd_reg180_shift                                      (16)
#define  SIW_RGBW_Rd_reg0B4_rd_reg181_shift                                      (0)
#define  SIW_RGBW_Rd_reg0B4_rd_reg180_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0B4_rd_reg181_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0B4_rd_reg180(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0B4_rd_reg181(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0B4_get_rd_reg180(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0B4_get_rd_reg181(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0B6                                                     0x1802BE6C
#define  SIW_RGBW_Rd_reg0B6_reg_addr                                             "0xB802BE6C"
#define  SIW_RGBW_Rd_reg0B6_reg                                                  0xB802BE6C
#define  SIW_RGBW_Rd_reg0B6_inst_addr                                            "0x005F"
#define  set_SIW_RGBW_Rd_reg0B6_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0B6_reg)=data)
#define  get_SIW_RGBW_Rd_reg0B6_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0B6_reg))
#define  SIW_RGBW_Rd_reg0B6_rd_reg182_shift                                      (16)
#define  SIW_RGBW_Rd_reg0B6_rd_reg183_shift                                      (0)
#define  SIW_RGBW_Rd_reg0B6_rd_reg182_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0B6_rd_reg183_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0B6_rd_reg182(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0B6_rd_reg183(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0B6_get_rd_reg182(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0B6_get_rd_reg183(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0B8                                                     0x1802BE70
#define  SIW_RGBW_Rd_reg0B8_reg_addr                                             "0xB802BE70"
#define  SIW_RGBW_Rd_reg0B8_reg                                                  0xB802BE70
#define  SIW_RGBW_Rd_reg0B8_inst_addr                                            "0x0060"
#define  set_SIW_RGBW_Rd_reg0B8_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0B8_reg)=data)
#define  get_SIW_RGBW_Rd_reg0B8_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0B8_reg))
#define  SIW_RGBW_Rd_reg0B8_rd_reg184_shift                                      (16)
#define  SIW_RGBW_Rd_reg0B8_rd_reg185_shift                                      (0)
#define  SIW_RGBW_Rd_reg0B8_rd_reg184_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0B8_rd_reg185_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0B8_rd_reg184(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0B8_rd_reg185(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0B8_get_rd_reg184(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0B8_get_rd_reg185(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0BA                                                     0x1802BE74
#define  SIW_RGBW_Rd_reg0BA_reg_addr                                             "0xB802BE74"
#define  SIW_RGBW_Rd_reg0BA_reg                                                  0xB802BE74
#define  SIW_RGBW_Rd_reg0BA_inst_addr                                            "0x0061"
#define  set_SIW_RGBW_Rd_reg0BA_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0BA_reg)=data)
#define  get_SIW_RGBW_Rd_reg0BA_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0BA_reg))
#define  SIW_RGBW_Rd_reg0BA_rd_reg186_shift                                      (16)
#define  SIW_RGBW_Rd_reg0BA_rd_reg187_shift                                      (0)
#define  SIW_RGBW_Rd_reg0BA_rd_reg186_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0BA_rd_reg187_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0BA_rd_reg186(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0BA_rd_reg187(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0BA_get_rd_reg186(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0BA_get_rd_reg187(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0BC                                                     0x1802BE78
#define  SIW_RGBW_Rd_reg0BC_reg_addr                                             "0xB802BE78"
#define  SIW_RGBW_Rd_reg0BC_reg                                                  0xB802BE78
#define  SIW_RGBW_Rd_reg0BC_inst_addr                                            "0x0062"
#define  set_SIW_RGBW_Rd_reg0BC_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0BC_reg)=data)
#define  get_SIW_RGBW_Rd_reg0BC_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0BC_reg))
#define  SIW_RGBW_Rd_reg0BC_rd_reg188_shift                                      (16)
#define  SIW_RGBW_Rd_reg0BC_rd_reg189_shift                                      (0)
#define  SIW_RGBW_Rd_reg0BC_rd_reg188_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0BC_rd_reg189_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0BC_rd_reg188(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0BC_rd_reg189(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0BC_get_rd_reg188(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0BC_get_rd_reg189(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0BE                                                     0x1802BE7C
#define  SIW_RGBW_Rd_reg0BE_reg_addr                                             "0xB802BE7C"
#define  SIW_RGBW_Rd_reg0BE_reg                                                  0xB802BE7C
#define  SIW_RGBW_Rd_reg0BE_inst_addr                                            "0x0063"
#define  set_SIW_RGBW_Rd_reg0BE_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0BE_reg)=data)
#define  get_SIW_RGBW_Rd_reg0BE_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0BE_reg))
#define  SIW_RGBW_Rd_reg0BE_rd_reg190_shift                                      (16)
#define  SIW_RGBW_Rd_reg0BE_rd_reg191_shift                                      (0)
#define  SIW_RGBW_Rd_reg0BE_rd_reg190_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0BE_rd_reg191_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0BE_rd_reg190(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0BE_rd_reg191(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0BE_get_rd_reg190(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0BE_get_rd_reg191(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0C0                                                     0x1802BE80
#define  SIW_RGBW_Rd_reg0C0_reg_addr                                             "0xB802BE80"
#define  SIW_RGBW_Rd_reg0C0_reg                                                  0xB802BE80
#define  SIW_RGBW_Rd_reg0C0_inst_addr                                            "0x0064"
#define  set_SIW_RGBW_Rd_reg0C0_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0C0_reg)=data)
#define  get_SIW_RGBW_Rd_reg0C0_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0C0_reg))
#define  SIW_RGBW_Rd_reg0C0_rd_reg192_shift                                      (16)
#define  SIW_RGBW_Rd_reg0C0_rd_reg193_shift                                      (0)
#define  SIW_RGBW_Rd_reg0C0_rd_reg192_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0C0_rd_reg193_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0C0_rd_reg192(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0C0_rd_reg193(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0C0_get_rd_reg192(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0C0_get_rd_reg193(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0C2                                                     0x1802BE84
#define  SIW_RGBW_Rd_reg0C2_reg_addr                                             "0xB802BE84"
#define  SIW_RGBW_Rd_reg0C2_reg                                                  0xB802BE84
#define  SIW_RGBW_Rd_reg0C2_inst_addr                                            "0x0065"
#define  set_SIW_RGBW_Rd_reg0C2_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0C2_reg)=data)
#define  get_SIW_RGBW_Rd_reg0C2_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0C2_reg))
#define  SIW_RGBW_Rd_reg0C2_rd_reg194_shift                                      (16)
#define  SIW_RGBW_Rd_reg0C2_rd_reg195_shift                                      (0)
#define  SIW_RGBW_Rd_reg0C2_rd_reg194_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0C2_rd_reg195_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0C2_rd_reg194(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0C2_rd_reg195(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0C2_get_rd_reg194(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0C2_get_rd_reg195(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0C4                                                     0x1802BE88
#define  SIW_RGBW_Rd_reg0C4_reg_addr                                             "0xB802BE88"
#define  SIW_RGBW_Rd_reg0C4_reg                                                  0xB802BE88
#define  SIW_RGBW_Rd_reg0C4_inst_addr                                            "0x0066"
#define  set_SIW_RGBW_Rd_reg0C4_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0C4_reg)=data)
#define  get_SIW_RGBW_Rd_reg0C4_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0C4_reg))
#define  SIW_RGBW_Rd_reg0C4_rd_reg196_shift                                      (16)
#define  SIW_RGBW_Rd_reg0C4_rd_reg197_shift                                      (0)
#define  SIW_RGBW_Rd_reg0C4_rd_reg196_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0C4_rd_reg197_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0C4_rd_reg196(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0C4_rd_reg197(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0C4_get_rd_reg196(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0C4_get_rd_reg197(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0C6                                                     0x1802BE8C
#define  SIW_RGBW_Rd_reg0C6_reg_addr                                             "0xB802BE8C"
#define  SIW_RGBW_Rd_reg0C6_reg                                                  0xB802BE8C
#define  SIW_RGBW_Rd_reg0C6_inst_addr                                            "0x0067"
#define  set_SIW_RGBW_Rd_reg0C6_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0C6_reg)=data)
#define  get_SIW_RGBW_Rd_reg0C6_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0C6_reg))
#define  SIW_RGBW_Rd_reg0C6_rd_reg198_shift                                      (16)
#define  SIW_RGBW_Rd_reg0C6_rd_reg199_shift                                      (0)
#define  SIW_RGBW_Rd_reg0C6_rd_reg198_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0C6_rd_reg199_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0C6_rd_reg198(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0C6_rd_reg199(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0C6_get_rd_reg198(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0C6_get_rd_reg199(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0C8                                                     0x1802BE90
#define  SIW_RGBW_Rd_reg0C8_reg_addr                                             "0xB802BE90"
#define  SIW_RGBW_Rd_reg0C8_reg                                                  0xB802BE90
#define  SIW_RGBW_Rd_reg0C8_inst_addr                                            "0x0068"
#define  set_SIW_RGBW_Rd_reg0C8_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0C8_reg)=data)
#define  get_SIW_RGBW_Rd_reg0C8_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0C8_reg))
#define  SIW_RGBW_Rd_reg0C8_rd_reg200_shift                                      (16)
#define  SIW_RGBW_Rd_reg0C8_rd_reg201_shift                                      (0)
#define  SIW_RGBW_Rd_reg0C8_rd_reg200_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0C8_rd_reg201_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0C8_rd_reg200(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0C8_rd_reg201(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0C8_get_rd_reg200(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0C8_get_rd_reg201(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0CA                                                     0x1802BE94
#define  SIW_RGBW_Rd_reg0CA_reg_addr                                             "0xB802BE94"
#define  SIW_RGBW_Rd_reg0CA_reg                                                  0xB802BE94
#define  SIW_RGBW_Rd_reg0CA_inst_addr                                            "0x0069"
#define  set_SIW_RGBW_Rd_reg0CA_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0CA_reg)=data)
#define  get_SIW_RGBW_Rd_reg0CA_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0CA_reg))
#define  SIW_RGBW_Rd_reg0CA_rd_reg202_shift                                      (16)
#define  SIW_RGBW_Rd_reg0CA_rd_reg203_shift                                      (0)
#define  SIW_RGBW_Rd_reg0CA_rd_reg202_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0CA_rd_reg203_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0CA_rd_reg202(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0CA_rd_reg203(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0CA_get_rd_reg202(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0CA_get_rd_reg203(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0CC                                                     0x1802BE98
#define  SIW_RGBW_Rd_reg0CC_reg_addr                                             "0xB802BE98"
#define  SIW_RGBW_Rd_reg0CC_reg                                                  0xB802BE98
#define  SIW_RGBW_Rd_reg0CC_inst_addr                                            "0x006A"
#define  set_SIW_RGBW_Rd_reg0CC_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0CC_reg)=data)
#define  get_SIW_RGBW_Rd_reg0CC_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0CC_reg))
#define  SIW_RGBW_Rd_reg0CC_rd_reg204_shift                                      (16)
#define  SIW_RGBW_Rd_reg0CC_rd_reg205_shift                                      (0)
#define  SIW_RGBW_Rd_reg0CC_rd_reg204_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0CC_rd_reg205_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0CC_rd_reg204(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0CC_rd_reg205(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0CC_get_rd_reg204(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0CC_get_rd_reg205(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0CE                                                     0x1802BE9C
#define  SIW_RGBW_Rd_reg0CE_reg_addr                                             "0xB802BE9C"
#define  SIW_RGBW_Rd_reg0CE_reg                                                  0xB802BE9C
#define  SIW_RGBW_Rd_reg0CE_inst_addr                                            "0x006B"
#define  set_SIW_RGBW_Rd_reg0CE_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0CE_reg)=data)
#define  get_SIW_RGBW_Rd_reg0CE_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0CE_reg))
#define  SIW_RGBW_Rd_reg0CE_rd_reg206_shift                                      (16)
#define  SIW_RGBW_Rd_reg0CE_rd_reg207_shift                                      (0)
#define  SIW_RGBW_Rd_reg0CE_rd_reg206_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0CE_rd_reg207_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0CE_rd_reg206(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0CE_rd_reg207(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0CE_get_rd_reg206(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0CE_get_rd_reg207(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0D0                                                     0x1802BEA0
#define  SIW_RGBW_Rd_reg0D0_reg_addr                                             "0xB802BEA0"
#define  SIW_RGBW_Rd_reg0D0_reg                                                  0xB802BEA0
#define  SIW_RGBW_Rd_reg0D0_inst_addr                                            "0x006C"
#define  set_SIW_RGBW_Rd_reg0D0_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0D0_reg)=data)
#define  get_SIW_RGBW_Rd_reg0D0_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0D0_reg))
#define  SIW_RGBW_Rd_reg0D0_rd_reg208_shift                                      (16)
#define  SIW_RGBW_Rd_reg0D0_rd_reg209_shift                                      (0)
#define  SIW_RGBW_Rd_reg0D0_rd_reg208_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0D0_rd_reg209_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0D0_rd_reg208(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0D0_rd_reg209(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0D0_get_rd_reg208(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0D0_get_rd_reg209(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0D2                                                     0x1802BEA4
#define  SIW_RGBW_Rd_reg0D2_reg_addr                                             "0xB802BEA4"
#define  SIW_RGBW_Rd_reg0D2_reg                                                  0xB802BEA4
#define  SIW_RGBW_Rd_reg0D2_inst_addr                                            "0x006D"
#define  set_SIW_RGBW_Rd_reg0D2_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0D2_reg)=data)
#define  get_SIW_RGBW_Rd_reg0D2_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0D2_reg))
#define  SIW_RGBW_Rd_reg0D2_rd_reg210_shift                                      (16)
#define  SIW_RGBW_Rd_reg0D2_rd_reg211_shift                                      (0)
#define  SIW_RGBW_Rd_reg0D2_rd_reg210_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0D2_rd_reg211_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0D2_rd_reg210(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0D2_rd_reg211(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0D2_get_rd_reg210(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0D2_get_rd_reg211(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0D4                                                     0x1802BEA8
#define  SIW_RGBW_Rd_reg0D4_reg_addr                                             "0xB802BEA8"
#define  SIW_RGBW_Rd_reg0D4_reg                                                  0xB802BEA8
#define  SIW_RGBW_Rd_reg0D4_inst_addr                                            "0x006E"
#define  set_SIW_RGBW_Rd_reg0D4_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0D4_reg)=data)
#define  get_SIW_RGBW_Rd_reg0D4_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0D4_reg))
#define  SIW_RGBW_Rd_reg0D4_rd_reg212_shift                                      (16)
#define  SIW_RGBW_Rd_reg0D4_rd_reg213_shift                                      (0)
#define  SIW_RGBW_Rd_reg0D4_rd_reg212_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0D4_rd_reg213_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0D4_rd_reg212(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0D4_rd_reg213(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0D4_get_rd_reg212(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0D4_get_rd_reg213(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0D6                                                     0x1802BEAC
#define  SIW_RGBW_Rd_reg0D6_reg_addr                                             "0xB802BEAC"
#define  SIW_RGBW_Rd_reg0D6_reg                                                  0xB802BEAC
#define  SIW_RGBW_Rd_reg0D6_inst_addr                                            "0x006F"
#define  set_SIW_RGBW_Rd_reg0D6_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0D6_reg)=data)
#define  get_SIW_RGBW_Rd_reg0D6_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0D6_reg))
#define  SIW_RGBW_Rd_reg0D6_rd_reg214_shift                                      (16)
#define  SIW_RGBW_Rd_reg0D6_rd_reg215_shift                                      (0)
#define  SIW_RGBW_Rd_reg0D6_rd_reg214_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0D6_rd_reg215_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0D6_rd_reg214(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0D6_rd_reg215(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0D6_get_rd_reg214(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0D6_get_rd_reg215(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0D8                                                     0x1802BEB0
#define  SIW_RGBW_Rd_reg0D8_reg_addr                                             "0xB802BEB0"
#define  SIW_RGBW_Rd_reg0D8_reg                                                  0xB802BEB0
#define  SIW_RGBW_Rd_reg0D8_inst_addr                                            "0x0070"
#define  set_SIW_RGBW_Rd_reg0D8_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0D8_reg)=data)
#define  get_SIW_RGBW_Rd_reg0D8_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0D8_reg))
#define  SIW_RGBW_Rd_reg0D8_rd_reg216_shift                                      (16)
#define  SIW_RGBW_Rd_reg0D8_rd_reg217_shift                                      (0)
#define  SIW_RGBW_Rd_reg0D8_rd_reg216_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0D8_rd_reg217_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0D8_rd_reg216(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0D8_rd_reg217(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0D8_get_rd_reg216(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0D8_get_rd_reg217(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0DA                                                     0x1802BEB4
#define  SIW_RGBW_Rd_reg0DA_reg_addr                                             "0xB802BEB4"
#define  SIW_RGBW_Rd_reg0DA_reg                                                  0xB802BEB4
#define  SIW_RGBW_Rd_reg0DA_inst_addr                                            "0x0071"
#define  set_SIW_RGBW_Rd_reg0DA_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0DA_reg)=data)
#define  get_SIW_RGBW_Rd_reg0DA_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0DA_reg))
#define  SIW_RGBW_Rd_reg0DA_rd_reg218_shift                                      (16)
#define  SIW_RGBW_Rd_reg0DA_rd_reg219_shift                                      (0)
#define  SIW_RGBW_Rd_reg0DA_rd_reg218_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0DA_rd_reg219_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0DA_rd_reg218(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0DA_rd_reg219(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0DA_get_rd_reg218(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0DA_get_rd_reg219(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0DC                                                     0x1802BEB8
#define  SIW_RGBW_Rd_reg0DC_reg_addr                                             "0xB802BEB8"
#define  SIW_RGBW_Rd_reg0DC_reg                                                  0xB802BEB8
#define  SIW_RGBW_Rd_reg0DC_inst_addr                                            "0x0072"
#define  set_SIW_RGBW_Rd_reg0DC_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0DC_reg)=data)
#define  get_SIW_RGBW_Rd_reg0DC_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0DC_reg))
#define  SIW_RGBW_Rd_reg0DC_rd_reg220_shift                                      (16)
#define  SIW_RGBW_Rd_reg0DC_rd_reg221_shift                                      (0)
#define  SIW_RGBW_Rd_reg0DC_rd_reg220_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0DC_rd_reg221_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0DC_rd_reg220(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0DC_rd_reg221(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0DC_get_rd_reg220(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0DC_get_rd_reg221(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0DE                                                     0x1802BEBC
#define  SIW_RGBW_Rd_reg0DE_reg_addr                                             "0xB802BEBC"
#define  SIW_RGBW_Rd_reg0DE_reg                                                  0xB802BEBC
#define  SIW_RGBW_Rd_reg0DE_inst_addr                                            "0x0073"
#define  set_SIW_RGBW_Rd_reg0DE_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0DE_reg)=data)
#define  get_SIW_RGBW_Rd_reg0DE_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0DE_reg))
#define  SIW_RGBW_Rd_reg0DE_rd_reg222_shift                                      (16)
#define  SIW_RGBW_Rd_reg0DE_rd_reg223_shift                                      (0)
#define  SIW_RGBW_Rd_reg0DE_rd_reg222_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0DE_rd_reg223_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0DE_rd_reg222(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0DE_rd_reg223(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0DE_get_rd_reg222(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0DE_get_rd_reg223(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0E0                                                     0x1802BEC0
#define  SIW_RGBW_Rd_reg0E0_reg_addr                                             "0xB802BEC0"
#define  SIW_RGBW_Rd_reg0E0_reg                                                  0xB802BEC0
#define  SIW_RGBW_Rd_reg0E0_inst_addr                                            "0x0074"
#define  set_SIW_RGBW_Rd_reg0E0_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0E0_reg)=data)
#define  get_SIW_RGBW_Rd_reg0E0_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0E0_reg))
#define  SIW_RGBW_Rd_reg0E0_rd_reg224_shift                                      (16)
#define  SIW_RGBW_Rd_reg0E0_rd_reg225_shift                                      (0)
#define  SIW_RGBW_Rd_reg0E0_rd_reg224_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0E0_rd_reg225_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0E0_rd_reg224(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0E0_rd_reg225(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0E0_get_rd_reg224(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0E0_get_rd_reg225(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0E2                                                     0x1802BEC4
#define  SIW_RGBW_Rd_reg0E2_reg_addr                                             "0xB802BEC4"
#define  SIW_RGBW_Rd_reg0E2_reg                                                  0xB802BEC4
#define  SIW_RGBW_Rd_reg0E2_inst_addr                                            "0x0075"
#define  set_SIW_RGBW_Rd_reg0E2_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0E2_reg)=data)
#define  get_SIW_RGBW_Rd_reg0E2_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0E2_reg))
#define  SIW_RGBW_Rd_reg0E2_rd_reg226_shift                                      (16)
#define  SIW_RGBW_Rd_reg0E2_rd_reg227_shift                                      (0)
#define  SIW_RGBW_Rd_reg0E2_rd_reg226_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0E2_rd_reg227_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0E2_rd_reg226(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0E2_rd_reg227(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0E2_get_rd_reg226(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0E2_get_rd_reg227(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0E4                                                     0x1802BEC8
#define  SIW_RGBW_Rd_reg0E4_reg_addr                                             "0xB802BEC8"
#define  SIW_RGBW_Rd_reg0E4_reg                                                  0xB802BEC8
#define  SIW_RGBW_Rd_reg0E4_inst_addr                                            "0x0076"
#define  set_SIW_RGBW_Rd_reg0E4_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0E4_reg)=data)
#define  get_SIW_RGBW_Rd_reg0E4_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0E4_reg))
#define  SIW_RGBW_Rd_reg0E4_rd_reg228_shift                                      (16)
#define  SIW_RGBW_Rd_reg0E4_rd_reg229_shift                                      (0)
#define  SIW_RGBW_Rd_reg0E4_rd_reg228_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0E4_rd_reg229_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0E4_rd_reg228(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0E4_rd_reg229(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0E4_get_rd_reg228(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0E4_get_rd_reg229(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0E6                                                     0x1802BECC
#define  SIW_RGBW_Rd_reg0E6_reg_addr                                             "0xB802BECC"
#define  SIW_RGBW_Rd_reg0E6_reg                                                  0xB802BECC
#define  SIW_RGBW_Rd_reg0E6_inst_addr                                            "0x0077"
#define  set_SIW_RGBW_Rd_reg0E6_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0E6_reg)=data)
#define  get_SIW_RGBW_Rd_reg0E6_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0E6_reg))
#define  SIW_RGBW_Rd_reg0E6_rd_reg230_shift                                      (16)
#define  SIW_RGBW_Rd_reg0E6_rd_reg231_shift                                      (0)
#define  SIW_RGBW_Rd_reg0E6_rd_reg230_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0E6_rd_reg231_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0E6_rd_reg230(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0E6_rd_reg231(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0E6_get_rd_reg230(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0E6_get_rd_reg231(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0E8                                                     0x1802BED0
#define  SIW_RGBW_Rd_reg0E8_reg_addr                                             "0xB802BED0"
#define  SIW_RGBW_Rd_reg0E8_reg                                                  0xB802BED0
#define  SIW_RGBW_Rd_reg0E8_inst_addr                                            "0x0078"
#define  set_SIW_RGBW_Rd_reg0E8_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0E8_reg)=data)
#define  get_SIW_RGBW_Rd_reg0E8_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0E8_reg))
#define  SIW_RGBW_Rd_reg0E8_rd_reg232_shift                                      (16)
#define  SIW_RGBW_Rd_reg0E8_rd_reg233_shift                                      (0)
#define  SIW_RGBW_Rd_reg0E8_rd_reg232_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0E8_rd_reg233_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0E8_rd_reg232(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0E8_rd_reg233(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0E8_get_rd_reg232(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0E8_get_rd_reg233(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0EA                                                     0x1802BED4
#define  SIW_RGBW_Rd_reg0EA_reg_addr                                             "0xB802BED4"
#define  SIW_RGBW_Rd_reg0EA_reg                                                  0xB802BED4
#define  SIW_RGBW_Rd_reg0EA_inst_addr                                            "0x0079"
#define  set_SIW_RGBW_Rd_reg0EA_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0EA_reg)=data)
#define  get_SIW_RGBW_Rd_reg0EA_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0EA_reg))
#define  SIW_RGBW_Rd_reg0EA_rd_reg234_shift                                      (16)
#define  SIW_RGBW_Rd_reg0EA_rd_reg235_shift                                      (0)
#define  SIW_RGBW_Rd_reg0EA_rd_reg234_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0EA_rd_reg235_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0EA_rd_reg234(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0EA_rd_reg235(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0EA_get_rd_reg234(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0EA_get_rd_reg235(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0EC                                                     0x1802BED8
#define  SIW_RGBW_Rd_reg0EC_reg_addr                                             "0xB802BED8"
#define  SIW_RGBW_Rd_reg0EC_reg                                                  0xB802BED8
#define  SIW_RGBW_Rd_reg0EC_inst_addr                                            "0x007A"
#define  set_SIW_RGBW_Rd_reg0EC_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0EC_reg)=data)
#define  get_SIW_RGBW_Rd_reg0EC_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0EC_reg))
#define  SIW_RGBW_Rd_reg0EC_rd_reg236_shift                                      (16)
#define  SIW_RGBW_Rd_reg0EC_rd_reg237_shift                                      (0)
#define  SIW_RGBW_Rd_reg0EC_rd_reg236_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0EC_rd_reg237_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0EC_rd_reg236(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0EC_rd_reg237(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0EC_get_rd_reg236(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0EC_get_rd_reg237(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0EE                                                     0x1802BEDC
#define  SIW_RGBW_Rd_reg0EE_reg_addr                                             "0xB802BEDC"
#define  SIW_RGBW_Rd_reg0EE_reg                                                  0xB802BEDC
#define  SIW_RGBW_Rd_reg0EE_inst_addr                                            "0x007B"
#define  set_SIW_RGBW_Rd_reg0EE_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0EE_reg)=data)
#define  get_SIW_RGBW_Rd_reg0EE_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0EE_reg))
#define  SIW_RGBW_Rd_reg0EE_rd_reg238_shift                                      (16)
#define  SIW_RGBW_Rd_reg0EE_rd_reg239_shift                                      (0)
#define  SIW_RGBW_Rd_reg0EE_rd_reg238_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0EE_rd_reg239_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0EE_rd_reg238(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0EE_rd_reg239(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0EE_get_rd_reg238(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0EE_get_rd_reg239(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0F0                                                     0x1802BEE0
#define  SIW_RGBW_Rd_reg0F0_reg_addr                                             "0xB802BEE0"
#define  SIW_RGBW_Rd_reg0F0_reg                                                  0xB802BEE0
#define  SIW_RGBW_Rd_reg0F0_inst_addr                                            "0x007C"
#define  set_SIW_RGBW_Rd_reg0F0_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0F0_reg)=data)
#define  get_SIW_RGBW_Rd_reg0F0_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0F0_reg))
#define  SIW_RGBW_Rd_reg0F0_rd_reg240_shift                                      (16)
#define  SIW_RGBW_Rd_reg0F0_rd_reg241_shift                                      (0)
#define  SIW_RGBW_Rd_reg0F0_rd_reg240_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0F0_rd_reg241_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0F0_rd_reg240(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0F0_rd_reg241(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0F0_get_rd_reg240(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0F0_get_rd_reg241(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0F2                                                     0x1802BEE4
#define  SIW_RGBW_Rd_reg0F2_reg_addr                                             "0xB802BEE4"
#define  SIW_RGBW_Rd_reg0F2_reg                                                  0xB802BEE4
#define  SIW_RGBW_Rd_reg0F2_inst_addr                                            "0x007D"
#define  set_SIW_RGBW_Rd_reg0F2_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0F2_reg)=data)
#define  get_SIW_RGBW_Rd_reg0F2_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0F2_reg))
#define  SIW_RGBW_Rd_reg0F2_rd_reg242_shift                                      (16)
#define  SIW_RGBW_Rd_reg0F2_rd_reg243_shift                                      (0)
#define  SIW_RGBW_Rd_reg0F2_rd_reg242_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0F2_rd_reg243_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0F2_rd_reg242(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0F2_rd_reg243(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0F2_get_rd_reg242(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0F2_get_rd_reg243(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0F4                                                     0x1802BEE8
#define  SIW_RGBW_Rd_reg0F4_reg_addr                                             "0xB802BEE8"
#define  SIW_RGBW_Rd_reg0F4_reg                                                  0xB802BEE8
#define  SIW_RGBW_Rd_reg0F4_inst_addr                                            "0x007E"
#define  set_SIW_RGBW_Rd_reg0F4_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0F4_reg)=data)
#define  get_SIW_RGBW_Rd_reg0F4_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0F4_reg))
#define  SIW_RGBW_Rd_reg0F4_rd_reg244_shift                                      (16)
#define  SIW_RGBW_Rd_reg0F4_rd_reg245_shift                                      (0)
#define  SIW_RGBW_Rd_reg0F4_rd_reg244_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0F4_rd_reg245_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0F4_rd_reg244(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0F4_rd_reg245(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0F4_get_rd_reg244(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0F4_get_rd_reg245(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0F6                                                     0x1802BEEC
#define  SIW_RGBW_Rd_reg0F6_reg_addr                                             "0xB802BEEC"
#define  SIW_RGBW_Rd_reg0F6_reg                                                  0xB802BEEC
#define  SIW_RGBW_Rd_reg0F6_inst_addr                                            "0x007F"
#define  set_SIW_RGBW_Rd_reg0F6_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0F6_reg)=data)
#define  get_SIW_RGBW_Rd_reg0F6_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0F6_reg))
#define  SIW_RGBW_Rd_reg0F6_rd_reg246_shift                                      (16)
#define  SIW_RGBW_Rd_reg0F6_rd_reg247_shift                                      (0)
#define  SIW_RGBW_Rd_reg0F6_rd_reg246_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0F6_rd_reg247_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0F6_rd_reg246(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0F6_rd_reg247(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0F6_get_rd_reg246(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0F6_get_rd_reg247(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0F8                                                     0x1802BEF0
#define  SIW_RGBW_Rd_reg0F8_reg_addr                                             "0xB802BEF0"
#define  SIW_RGBW_Rd_reg0F8_reg                                                  0xB802BEF0
#define  SIW_RGBW_Rd_reg0F8_inst_addr                                            "0x0080"
#define  set_SIW_RGBW_Rd_reg0F8_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0F8_reg)=data)
#define  get_SIW_RGBW_Rd_reg0F8_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0F8_reg))
#define  SIW_RGBW_Rd_reg0F8_rd_reg248_shift                                      (16)
#define  SIW_RGBW_Rd_reg0F8_rd_reg249_shift                                      (0)
#define  SIW_RGBW_Rd_reg0F8_rd_reg248_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0F8_rd_reg249_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0F8_rd_reg248(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0F8_rd_reg249(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0F8_get_rd_reg248(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0F8_get_rd_reg249(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0FA                                                     0x1802BEF4
#define  SIW_RGBW_Rd_reg0FA_reg_addr                                             "0xB802BEF4"
#define  SIW_RGBW_Rd_reg0FA_reg                                                  0xB802BEF4
#define  SIW_RGBW_Rd_reg0FA_inst_addr                                            "0x0081"
#define  set_SIW_RGBW_Rd_reg0FA_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0FA_reg)=data)
#define  get_SIW_RGBW_Rd_reg0FA_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0FA_reg))
#define  SIW_RGBW_Rd_reg0FA_rd_reg250_shift                                      (16)
#define  SIW_RGBW_Rd_reg0FA_rd_reg251_shift                                      (0)
#define  SIW_RGBW_Rd_reg0FA_rd_reg250_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0FA_rd_reg251_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0FA_rd_reg250(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0FA_rd_reg251(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0FA_get_rd_reg250(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0FA_get_rd_reg251(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0FC                                                     0x1802BEF8
#define  SIW_RGBW_Rd_reg0FC_reg_addr                                             "0xB802BEF8"
#define  SIW_RGBW_Rd_reg0FC_reg                                                  0xB802BEF8
#define  SIW_RGBW_Rd_reg0FC_inst_addr                                            "0x0082"
#define  set_SIW_RGBW_Rd_reg0FC_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0FC_reg)=data)
#define  get_SIW_RGBW_Rd_reg0FC_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0FC_reg))
#define  SIW_RGBW_Rd_reg0FC_rd_reg252_shift                                      (16)
#define  SIW_RGBW_Rd_reg0FC_rd_reg253_shift                                      (0)
#define  SIW_RGBW_Rd_reg0FC_rd_reg252_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0FC_rd_reg253_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0FC_rd_reg252(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0FC_rd_reg253(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0FC_get_rd_reg252(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0FC_get_rd_reg253(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg0FE                                                     0x1802BEFC
#define  SIW_RGBW_Rd_reg0FE_reg_addr                                             "0xB802BEFC"
#define  SIW_RGBW_Rd_reg0FE_reg                                                  0xB802BEFC
#define  SIW_RGBW_Rd_reg0FE_inst_addr                                            "0x0083"
#define  set_SIW_RGBW_Rd_reg0FE_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg0FE_reg)=data)
#define  get_SIW_RGBW_Rd_reg0FE_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg0FE_reg))
#define  SIW_RGBW_Rd_reg0FE_rd_reg254_shift                                      (16)
#define  SIW_RGBW_Rd_reg0FE_rd_reg255_shift                                      (0)
#define  SIW_RGBW_Rd_reg0FE_rd_reg254_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg0FE_rd_reg255_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg0FE_rd_reg254(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg0FE_rd_reg255(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg0FE_get_rd_reg254(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg0FE_get_rd_reg255(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg100                                                     0x1802B100
#define  SIW_RGBW_Rd_reg100_reg_addr                                             "0xB802B100"
#define  SIW_RGBW_Rd_reg100_reg                                                  0xB802B100
#define  SIW_RGBW_Rd_reg100_inst_addr                                            "0x0084"
#define  set_SIW_RGBW_Rd_reg100_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg100_reg)=data)
#define  get_SIW_RGBW_Rd_reg100_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg100_reg))
#define  SIW_RGBW_Rd_reg100_rd_reg256_shift                                      (16)
#define  SIW_RGBW_Rd_reg100_rd_reg257_shift                                      (0)
#define  SIW_RGBW_Rd_reg100_rd_reg256_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg100_rd_reg257_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg100_rd_reg256(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg100_rd_reg257(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg100_get_rd_reg256(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg100_get_rd_reg257(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg102                                                     0x1802B104
#define  SIW_RGBW_Rd_reg102_reg_addr                                             "0xB802B104"
#define  SIW_RGBW_Rd_reg102_reg                                                  0xB802B104
#define  SIW_RGBW_Rd_reg102_inst_addr                                            "0x0085"
#define  set_SIW_RGBW_Rd_reg102_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg102_reg)=data)
#define  get_SIW_RGBW_Rd_reg102_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg102_reg))
#define  SIW_RGBW_Rd_reg102_rd_reg258_shift                                      (16)
#define  SIW_RGBW_Rd_reg102_rd_reg259_shift                                      (0)
#define  SIW_RGBW_Rd_reg102_rd_reg258_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg102_rd_reg259_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg102_rd_reg258(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg102_rd_reg259(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg102_get_rd_reg258(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg102_get_rd_reg259(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg104                                                     0x1802B108
#define  SIW_RGBW_Rd_reg104_reg_addr                                             "0xB802B108"
#define  SIW_RGBW_Rd_reg104_reg                                                  0xB802B108
#define  SIW_RGBW_Rd_reg104_inst_addr                                            "0x0086"
#define  set_SIW_RGBW_Rd_reg104_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg104_reg)=data)
#define  get_SIW_RGBW_Rd_reg104_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg104_reg))
#define  SIW_RGBW_Rd_reg104_rd_reg260_shift                                      (16)
#define  SIW_RGBW_Rd_reg104_rd_reg261_shift                                      (0)
#define  SIW_RGBW_Rd_reg104_rd_reg260_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg104_rd_reg261_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg104_rd_reg260(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg104_rd_reg261(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg104_get_rd_reg260(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg104_get_rd_reg261(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg106                                                     0x1802B10C
#define  SIW_RGBW_Rd_reg106_reg_addr                                             "0xB802B10C"
#define  SIW_RGBW_Rd_reg106_reg                                                  0xB802B10C
#define  SIW_RGBW_Rd_reg106_inst_addr                                            "0x0087"
#define  set_SIW_RGBW_Rd_reg106_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg106_reg)=data)
#define  get_SIW_RGBW_Rd_reg106_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg106_reg))
#define  SIW_RGBW_Rd_reg106_rd_reg262_shift                                      (16)
#define  SIW_RGBW_Rd_reg106_rd_reg263_shift                                      (0)
#define  SIW_RGBW_Rd_reg106_rd_reg262_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg106_rd_reg263_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg106_rd_reg262(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg106_rd_reg263(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg106_get_rd_reg262(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg106_get_rd_reg263(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg108                                                     0x1802B110
#define  SIW_RGBW_Rd_reg108_reg_addr                                             "0xB802B110"
#define  SIW_RGBW_Rd_reg108_reg                                                  0xB802B110
#define  SIW_RGBW_Rd_reg108_inst_addr                                            "0x0088"
#define  set_SIW_RGBW_Rd_reg108_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg108_reg)=data)
#define  get_SIW_RGBW_Rd_reg108_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg108_reg))
#define  SIW_RGBW_Rd_reg108_rd_reg264_shift                                      (16)
#define  SIW_RGBW_Rd_reg108_rd_reg265_shift                                      (0)
#define  SIW_RGBW_Rd_reg108_rd_reg264_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg108_rd_reg265_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg108_rd_reg264(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg108_rd_reg265(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg108_get_rd_reg264(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg108_get_rd_reg265(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg10A                                                     0x1802B114
#define  SIW_RGBW_Rd_reg10A_reg_addr                                             "0xB802B114"
#define  SIW_RGBW_Rd_reg10A_reg                                                  0xB802B114
#define  SIW_RGBW_Rd_reg10A_inst_addr                                            "0x0089"
#define  set_SIW_RGBW_Rd_reg10A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg10A_reg)=data)
#define  get_SIW_RGBW_Rd_reg10A_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg10A_reg))
#define  SIW_RGBW_Rd_reg10A_rd_reg266_shift                                      (16)
#define  SIW_RGBW_Rd_reg10A_rd_reg267_shift                                      (0)
#define  SIW_RGBW_Rd_reg10A_rd_reg266_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg10A_rd_reg267_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg10A_rd_reg266(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg10A_rd_reg267(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg10A_get_rd_reg266(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg10A_get_rd_reg267(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg10C                                                     0x1802B118
#define  SIW_RGBW_Rd_reg10C_reg_addr                                             "0xB802B118"
#define  SIW_RGBW_Rd_reg10C_reg                                                  0xB802B118
#define  SIW_RGBW_Rd_reg10C_inst_addr                                            "0x008A"
#define  set_SIW_RGBW_Rd_reg10C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg10C_reg)=data)
#define  get_SIW_RGBW_Rd_reg10C_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg10C_reg))
#define  SIW_RGBW_Rd_reg10C_rd_reg268_shift                                      (16)
#define  SIW_RGBW_Rd_reg10C_rd_reg269_shift                                      (0)
#define  SIW_RGBW_Rd_reg10C_rd_reg268_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg10C_rd_reg269_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg10C_rd_reg268(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg10C_rd_reg269(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg10C_get_rd_reg268(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg10C_get_rd_reg269(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg10E                                                     0x1802B11C
#define  SIW_RGBW_Rd_reg10E_reg_addr                                             "0xB802B11C"
#define  SIW_RGBW_Rd_reg10E_reg                                                  0xB802B11C
#define  SIW_RGBW_Rd_reg10E_inst_addr                                            "0x008B"
#define  set_SIW_RGBW_Rd_reg10E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg10E_reg)=data)
#define  get_SIW_RGBW_Rd_reg10E_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg10E_reg))
#define  SIW_RGBW_Rd_reg10E_rd_reg270_shift                                      (16)
#define  SIW_RGBW_Rd_reg10E_rd_reg271_shift                                      (0)
#define  SIW_RGBW_Rd_reg10E_rd_reg270_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg10E_rd_reg271_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg10E_rd_reg270(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg10E_rd_reg271(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg10E_get_rd_reg270(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg10E_get_rd_reg271(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg110                                                     0x1802B120
#define  SIW_RGBW_Rd_reg110_reg_addr                                             "0xB802B120"
#define  SIW_RGBW_Rd_reg110_reg                                                  0xB802B120
#define  SIW_RGBW_Rd_reg110_inst_addr                                            "0x008C"
#define  set_SIW_RGBW_Rd_reg110_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg110_reg)=data)
#define  get_SIW_RGBW_Rd_reg110_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg110_reg))
#define  SIW_RGBW_Rd_reg110_rd_reg272_shift                                      (16)
#define  SIW_RGBW_Rd_reg110_rd_reg273_shift                                      (0)
#define  SIW_RGBW_Rd_reg110_rd_reg272_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg110_rd_reg273_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg110_rd_reg272(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg110_rd_reg273(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg110_get_rd_reg272(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg110_get_rd_reg273(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg112                                                     0x1802B124
#define  SIW_RGBW_Rd_reg112_reg_addr                                             "0xB802B124"
#define  SIW_RGBW_Rd_reg112_reg                                                  0xB802B124
#define  SIW_RGBW_Rd_reg112_inst_addr                                            "0x008D"
#define  set_SIW_RGBW_Rd_reg112_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg112_reg)=data)
#define  get_SIW_RGBW_Rd_reg112_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg112_reg))
#define  SIW_RGBW_Rd_reg112_rd_reg274_shift                                      (16)
#define  SIW_RGBW_Rd_reg112_rd_reg275_shift                                      (0)
#define  SIW_RGBW_Rd_reg112_rd_reg274_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg112_rd_reg275_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg112_rd_reg274(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg112_rd_reg275(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg112_get_rd_reg274(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg112_get_rd_reg275(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg114                                                     0x1802B128
#define  SIW_RGBW_Rd_reg114_reg_addr                                             "0xB802B128"
#define  SIW_RGBW_Rd_reg114_reg                                                  0xB802B128
#define  SIW_RGBW_Rd_reg114_inst_addr                                            "0x008E"
#define  set_SIW_RGBW_Rd_reg114_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg114_reg)=data)
#define  get_SIW_RGBW_Rd_reg114_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg114_reg))
#define  SIW_RGBW_Rd_reg114_rd_reg276_shift                                      (16)
#define  SIW_RGBW_Rd_reg114_rd_reg277_shift                                      (0)
#define  SIW_RGBW_Rd_reg114_rd_reg276_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg114_rd_reg277_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg114_rd_reg276(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg114_rd_reg277(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg114_get_rd_reg276(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg114_get_rd_reg277(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg116                                                     0x1802B12C
#define  SIW_RGBW_Rd_reg116_reg_addr                                             "0xB802B12C"
#define  SIW_RGBW_Rd_reg116_reg                                                  0xB802B12C
#define  SIW_RGBW_Rd_reg116_inst_addr                                            "0x008F"
#define  set_SIW_RGBW_Rd_reg116_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg116_reg)=data)
#define  get_SIW_RGBW_Rd_reg116_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg116_reg))
#define  SIW_RGBW_Rd_reg116_rd_reg278_shift                                      (16)
#define  SIW_RGBW_Rd_reg116_rd_reg279_shift                                      (0)
#define  SIW_RGBW_Rd_reg116_rd_reg278_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg116_rd_reg279_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg116_rd_reg278(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg116_rd_reg279(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg116_get_rd_reg278(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg116_get_rd_reg279(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg118                                                     0x1802B130
#define  SIW_RGBW_Rd_reg118_reg_addr                                             "0xB802B130"
#define  SIW_RGBW_Rd_reg118_reg                                                  0xB802B130
#define  SIW_RGBW_Rd_reg118_inst_addr                                            "0x0090"
#define  set_SIW_RGBW_Rd_reg118_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg118_reg)=data)
#define  get_SIW_RGBW_Rd_reg118_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg118_reg))
#define  SIW_RGBW_Rd_reg118_rd_reg280_shift                                      (16)
#define  SIW_RGBW_Rd_reg118_rd_reg281_shift                                      (0)
#define  SIW_RGBW_Rd_reg118_rd_reg280_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg118_rd_reg281_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg118_rd_reg280(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg118_rd_reg281(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg118_get_rd_reg280(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg118_get_rd_reg281(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg11A                                                     0x1802B134
#define  SIW_RGBW_Rd_reg11A_reg_addr                                             "0xB802B134"
#define  SIW_RGBW_Rd_reg11A_reg                                                  0xB802B134
#define  SIW_RGBW_Rd_reg11A_inst_addr                                            "0x0091"
#define  set_SIW_RGBW_Rd_reg11A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg11A_reg)=data)
#define  get_SIW_RGBW_Rd_reg11A_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg11A_reg))
#define  SIW_RGBW_Rd_reg11A_rd_reg282_shift                                      (16)
#define  SIW_RGBW_Rd_reg11A_rd_reg283_shift                                      (0)
#define  SIW_RGBW_Rd_reg11A_rd_reg282_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg11A_rd_reg283_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg11A_rd_reg282(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg11A_rd_reg283(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg11A_get_rd_reg282(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg11A_get_rd_reg283(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg11C                                                     0x1802B138
#define  SIW_RGBW_Rd_reg11C_reg_addr                                             "0xB802B138"
#define  SIW_RGBW_Rd_reg11C_reg                                                  0xB802B138
#define  SIW_RGBW_Rd_reg11C_inst_addr                                            "0x0092"
#define  set_SIW_RGBW_Rd_reg11C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg11C_reg)=data)
#define  get_SIW_RGBW_Rd_reg11C_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg11C_reg))
#define  SIW_RGBW_Rd_reg11C_rd_reg284_shift                                      (16)
#define  SIW_RGBW_Rd_reg11C_rd_reg285_shift                                      (0)
#define  SIW_RGBW_Rd_reg11C_rd_reg284_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg11C_rd_reg285_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg11C_rd_reg284(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg11C_rd_reg285(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg11C_get_rd_reg284(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg11C_get_rd_reg285(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg11E                                                     0x1802B13C
#define  SIW_RGBW_Rd_reg11E_reg_addr                                             "0xB802B13C"
#define  SIW_RGBW_Rd_reg11E_reg                                                  0xB802B13C
#define  SIW_RGBW_Rd_reg11E_inst_addr                                            "0x0093"
#define  set_SIW_RGBW_Rd_reg11E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg11E_reg)=data)
#define  get_SIW_RGBW_Rd_reg11E_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg11E_reg))
#define  SIW_RGBW_Rd_reg11E_rd_reg286_shift                                      (16)
#define  SIW_RGBW_Rd_reg11E_rd_reg287_shift                                      (0)
#define  SIW_RGBW_Rd_reg11E_rd_reg286_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg11E_rd_reg287_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg11E_rd_reg286(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg11E_rd_reg287(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg11E_get_rd_reg286(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg11E_get_rd_reg287(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg120                                                     0x1802B140
#define  SIW_RGBW_Rd_reg120_reg_addr                                             "0xB802B140"
#define  SIW_RGBW_Rd_reg120_reg                                                  0xB802B140
#define  SIW_RGBW_Rd_reg120_inst_addr                                            "0x0094"
#define  set_SIW_RGBW_Rd_reg120_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg120_reg)=data)
#define  get_SIW_RGBW_Rd_reg120_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg120_reg))
#define  SIW_RGBW_Rd_reg120_rd_reg288_shift                                      (16)
#define  SIW_RGBW_Rd_reg120_rd_reg289_shift                                      (0)
#define  SIW_RGBW_Rd_reg120_rd_reg288_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg120_rd_reg289_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg120_rd_reg288(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg120_rd_reg289(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg120_get_rd_reg288(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg120_get_rd_reg289(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg122                                                     0x1802B144
#define  SIW_RGBW_Rd_reg122_reg_addr                                             "0xB802B144"
#define  SIW_RGBW_Rd_reg122_reg                                                  0xB802B144
#define  SIW_RGBW_Rd_reg122_inst_addr                                            "0x0095"
#define  set_SIW_RGBW_Rd_reg122_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg122_reg)=data)
#define  get_SIW_RGBW_Rd_reg122_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg122_reg))
#define  SIW_RGBW_Rd_reg122_rd_reg290_shift                                      (16)
#define  SIW_RGBW_Rd_reg122_rd_reg291_shift                                      (0)
#define  SIW_RGBW_Rd_reg122_rd_reg290_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg122_rd_reg291_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg122_rd_reg290(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg122_rd_reg291(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg122_get_rd_reg290(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg122_get_rd_reg291(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg124                                                     0x1802B148
#define  SIW_RGBW_Rd_reg124_reg_addr                                             "0xB802B148"
#define  SIW_RGBW_Rd_reg124_reg                                                  0xB802B148
#define  SIW_RGBW_Rd_reg124_inst_addr                                            "0x0096"
#define  set_SIW_RGBW_Rd_reg124_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg124_reg)=data)
#define  get_SIW_RGBW_Rd_reg124_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg124_reg))
#define  SIW_RGBW_Rd_reg124_rd_reg292_shift                                      (16)
#define  SIW_RGBW_Rd_reg124_rd_reg293_shift                                      (0)
#define  SIW_RGBW_Rd_reg124_rd_reg292_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg124_rd_reg293_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg124_rd_reg292(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg124_rd_reg293(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg124_get_rd_reg292(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg124_get_rd_reg293(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg126                                                     0x1802B14C
#define  SIW_RGBW_Rd_reg126_reg_addr                                             "0xB802B14C"
#define  SIW_RGBW_Rd_reg126_reg                                                  0xB802B14C
#define  SIW_RGBW_Rd_reg126_inst_addr                                            "0x0097"
#define  set_SIW_RGBW_Rd_reg126_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg126_reg)=data)
#define  get_SIW_RGBW_Rd_reg126_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg126_reg))
#define  SIW_RGBW_Rd_reg126_rd_reg294_shift                                      (16)
#define  SIW_RGBW_Rd_reg126_rd_reg295_shift                                      (0)
#define  SIW_RGBW_Rd_reg126_rd_reg294_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg126_rd_reg295_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg126_rd_reg294(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg126_rd_reg295(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg126_get_rd_reg294(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg126_get_rd_reg295(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg128                                                     0x1802B150
#define  SIW_RGBW_Rd_reg128_reg_addr                                             "0xB802B150"
#define  SIW_RGBW_Rd_reg128_reg                                                  0xB802B150
#define  SIW_RGBW_Rd_reg128_inst_addr                                            "0x0098"
#define  set_SIW_RGBW_Rd_reg128_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg128_reg)=data)
#define  get_SIW_RGBW_Rd_reg128_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg128_reg))
#define  SIW_RGBW_Rd_reg128_rd_reg296_shift                                      (16)
#define  SIW_RGBW_Rd_reg128_rd_reg297_shift                                      (0)
#define  SIW_RGBW_Rd_reg128_rd_reg296_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg128_rd_reg297_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg128_rd_reg296(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg128_rd_reg297(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg128_get_rd_reg296(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg128_get_rd_reg297(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg12A                                                     0x1802B154
#define  SIW_RGBW_Rd_reg12A_reg_addr                                             "0xB802B154"
#define  SIW_RGBW_Rd_reg12A_reg                                                  0xB802B154
#define  SIW_RGBW_Rd_reg12A_inst_addr                                            "0x0099"
#define  set_SIW_RGBW_Rd_reg12A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg12A_reg)=data)
#define  get_SIW_RGBW_Rd_reg12A_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg12A_reg))
#define  SIW_RGBW_Rd_reg12A_rd_reg298_shift                                      (16)
#define  SIW_RGBW_Rd_reg12A_rd_reg299_shift                                      (0)
#define  SIW_RGBW_Rd_reg12A_rd_reg298_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg12A_rd_reg299_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg12A_rd_reg298(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg12A_rd_reg299(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg12A_get_rd_reg298(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg12A_get_rd_reg299(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg12C                                                     0x1802B158
#define  SIW_RGBW_Rd_reg12C_reg_addr                                             "0xB802B158"
#define  SIW_RGBW_Rd_reg12C_reg                                                  0xB802B158
#define  SIW_RGBW_Rd_reg12C_inst_addr                                            "0x009A"
#define  set_SIW_RGBW_Rd_reg12C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg12C_reg)=data)
#define  get_SIW_RGBW_Rd_reg12C_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg12C_reg))
#define  SIW_RGBW_Rd_reg12C_rd_reg300_shift                                      (16)
#define  SIW_RGBW_Rd_reg12C_rd_reg301_shift                                      (0)
#define  SIW_RGBW_Rd_reg12C_rd_reg300_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg12C_rd_reg301_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg12C_rd_reg300(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg12C_rd_reg301(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg12C_get_rd_reg300(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg12C_get_rd_reg301(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg12E                                                     0x1802B15C
#define  SIW_RGBW_Rd_reg12E_reg_addr                                             "0xB802B15C"
#define  SIW_RGBW_Rd_reg12E_reg                                                  0xB802B15C
#define  SIW_RGBW_Rd_reg12E_inst_addr                                            "0x009B"
#define  set_SIW_RGBW_Rd_reg12E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg12E_reg)=data)
#define  get_SIW_RGBW_Rd_reg12E_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg12E_reg))
#define  SIW_RGBW_Rd_reg12E_rd_reg302_shift                                      (16)
#define  SIW_RGBW_Rd_reg12E_rd_reg303_shift                                      (0)
#define  SIW_RGBW_Rd_reg12E_rd_reg302_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg12E_rd_reg303_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg12E_rd_reg302(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg12E_rd_reg303(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg12E_get_rd_reg302(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg12E_get_rd_reg303(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg130                                                     0x1802B160
#define  SIW_RGBW_Rd_reg130_reg_addr                                             "0xB802B160"
#define  SIW_RGBW_Rd_reg130_reg                                                  0xB802B160
#define  SIW_RGBW_Rd_reg130_inst_addr                                            "0x009C"
#define  set_SIW_RGBW_Rd_reg130_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg130_reg)=data)
#define  get_SIW_RGBW_Rd_reg130_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg130_reg))
#define  SIW_RGBW_Rd_reg130_rd_reg304_shift                                      (16)
#define  SIW_RGBW_Rd_reg130_rd_reg305_shift                                      (0)
#define  SIW_RGBW_Rd_reg130_rd_reg304_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg130_rd_reg305_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg130_rd_reg304(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg130_rd_reg305(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg130_get_rd_reg304(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg130_get_rd_reg305(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg132                                                     0x1802B164
#define  SIW_RGBW_Rd_reg132_reg_addr                                             "0xB802B164"
#define  SIW_RGBW_Rd_reg132_reg                                                  0xB802B164
#define  SIW_RGBW_Rd_reg132_inst_addr                                            "0x009D"
#define  set_SIW_RGBW_Rd_reg132_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg132_reg)=data)
#define  get_SIW_RGBW_Rd_reg132_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg132_reg))
#define  SIW_RGBW_Rd_reg132_rd_reg306_shift                                      (16)
#define  SIW_RGBW_Rd_reg132_rd_reg307_shift                                      (0)
#define  SIW_RGBW_Rd_reg132_rd_reg306_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg132_rd_reg307_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg132_rd_reg306(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg132_rd_reg307(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg132_get_rd_reg306(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg132_get_rd_reg307(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg134                                                     0x1802B168
#define  SIW_RGBW_Rd_reg134_reg_addr                                             "0xB802B168"
#define  SIW_RGBW_Rd_reg134_reg                                                  0xB802B168
#define  SIW_RGBW_Rd_reg134_inst_addr                                            "0x009E"
#define  set_SIW_RGBW_Rd_reg134_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg134_reg)=data)
#define  get_SIW_RGBW_Rd_reg134_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg134_reg))
#define  SIW_RGBW_Rd_reg134_rd_reg308_shift                                      (16)
#define  SIW_RGBW_Rd_reg134_rd_reg309_shift                                      (0)
#define  SIW_RGBW_Rd_reg134_rd_reg308_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg134_rd_reg309_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg134_rd_reg308(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg134_rd_reg309(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg134_get_rd_reg308(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg134_get_rd_reg309(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg136                                                     0x1802B16C
#define  SIW_RGBW_Rd_reg136_reg_addr                                             "0xB802B16C"
#define  SIW_RGBW_Rd_reg136_reg                                                  0xB802B16C
#define  SIW_RGBW_Rd_reg136_inst_addr                                            "0x009F"
#define  set_SIW_RGBW_Rd_reg136_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg136_reg)=data)
#define  get_SIW_RGBW_Rd_reg136_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg136_reg))
#define  SIW_RGBW_Rd_reg136_rd_reg310_shift                                      (16)
#define  SIW_RGBW_Rd_reg136_rd_reg311_shift                                      (0)
#define  SIW_RGBW_Rd_reg136_rd_reg310_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg136_rd_reg311_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg136_rd_reg310(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg136_rd_reg311(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg136_get_rd_reg310(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg136_get_rd_reg311(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg138                                                     0x1802B170
#define  SIW_RGBW_Rd_reg138_reg_addr                                             "0xB802B170"
#define  SIW_RGBW_Rd_reg138_reg                                                  0xB802B170
#define  SIW_RGBW_Rd_reg138_inst_addr                                            "0x00A0"
#define  set_SIW_RGBW_Rd_reg138_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg138_reg)=data)
#define  get_SIW_RGBW_Rd_reg138_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg138_reg))
#define  SIW_RGBW_Rd_reg138_rd_reg312_shift                                      (16)
#define  SIW_RGBW_Rd_reg138_rd_reg313_shift                                      (0)
#define  SIW_RGBW_Rd_reg138_rd_reg312_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg138_rd_reg313_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg138_rd_reg312(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg138_rd_reg313(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg138_get_rd_reg312(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg138_get_rd_reg313(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg13A                                                     0x1802B174
#define  SIW_RGBW_Rd_reg13A_reg_addr                                             "0xB802B174"
#define  SIW_RGBW_Rd_reg13A_reg                                                  0xB802B174
#define  SIW_RGBW_Rd_reg13A_inst_addr                                            "0x00A1"
#define  set_SIW_RGBW_Rd_reg13A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg13A_reg)=data)
#define  get_SIW_RGBW_Rd_reg13A_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg13A_reg))
#define  SIW_RGBW_Rd_reg13A_rd_reg314_shift                                      (16)
#define  SIW_RGBW_Rd_reg13A_rd_reg315_shift                                      (0)
#define  SIW_RGBW_Rd_reg13A_rd_reg314_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg13A_rd_reg315_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg13A_rd_reg314(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg13A_rd_reg315(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg13A_get_rd_reg314(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg13A_get_rd_reg315(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg13C                                                     0x1802B178
#define  SIW_RGBW_Rd_reg13C_reg_addr                                             "0xB802B178"
#define  SIW_RGBW_Rd_reg13C_reg                                                  0xB802B178
#define  SIW_RGBW_Rd_reg13C_inst_addr                                            "0x00A2"
#define  set_SIW_RGBW_Rd_reg13C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg13C_reg)=data)
#define  get_SIW_RGBW_Rd_reg13C_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg13C_reg))
#define  SIW_RGBW_Rd_reg13C_rd_reg316_shift                                      (16)
#define  SIW_RGBW_Rd_reg13C_rd_reg317_shift                                      (0)
#define  SIW_RGBW_Rd_reg13C_rd_reg316_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg13C_rd_reg317_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg13C_rd_reg316(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg13C_rd_reg317(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg13C_get_rd_reg316(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg13C_get_rd_reg317(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg13E                                                     0x1802B17C
#define  SIW_RGBW_Rd_reg13E_reg_addr                                             "0xB802B17C"
#define  SIW_RGBW_Rd_reg13E_reg                                                  0xB802B17C
#define  SIW_RGBW_Rd_reg13E_inst_addr                                            "0x00A3"
#define  set_SIW_RGBW_Rd_reg13E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg13E_reg)=data)
#define  get_SIW_RGBW_Rd_reg13E_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg13E_reg))
#define  SIW_RGBW_Rd_reg13E_rd_reg318_shift                                      (16)
#define  SIW_RGBW_Rd_reg13E_rd_reg319_shift                                      (0)
#define  SIW_RGBW_Rd_reg13E_rd_reg318_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg13E_rd_reg319_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg13E_rd_reg318(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg13E_rd_reg319(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg13E_get_rd_reg318(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg13E_get_rd_reg319(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg140                                                     0x1802B180
#define  SIW_RGBW_Rd_reg140_reg_addr                                             "0xB802B180"
#define  SIW_RGBW_Rd_reg140_reg                                                  0xB802B180
#define  SIW_RGBW_Rd_reg140_inst_addr                                            "0x00A4"
#define  set_SIW_RGBW_Rd_reg140_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg140_reg)=data)
#define  get_SIW_RGBW_Rd_reg140_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg140_reg))
#define  SIW_RGBW_Rd_reg140_rd_reg320_shift                                      (16)
#define  SIW_RGBW_Rd_reg140_rd_reg321_shift                                      (0)
#define  SIW_RGBW_Rd_reg140_rd_reg320_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg140_rd_reg321_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg140_rd_reg320(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg140_rd_reg321(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg140_get_rd_reg320(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg140_get_rd_reg321(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg142                                                     0x1802B184
#define  SIW_RGBW_Rd_reg142_reg_addr                                             "0xB802B184"
#define  SIW_RGBW_Rd_reg142_reg                                                  0xB802B184
#define  SIW_RGBW_Rd_reg142_inst_addr                                            "0x00A5"
#define  set_SIW_RGBW_Rd_reg142_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg142_reg)=data)
#define  get_SIW_RGBW_Rd_reg142_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg142_reg))
#define  SIW_RGBW_Rd_reg142_rd_reg322_shift                                      (16)
#define  SIW_RGBW_Rd_reg142_rd_reg323_shift                                      (0)
#define  SIW_RGBW_Rd_reg142_rd_reg322_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg142_rd_reg323_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg142_rd_reg322(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg142_rd_reg323(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg142_get_rd_reg322(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg142_get_rd_reg323(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg144                                                     0x1802B188
#define  SIW_RGBW_Rd_reg144_reg_addr                                             "0xB802B188"
#define  SIW_RGBW_Rd_reg144_reg                                                  0xB802B188
#define  SIW_RGBW_Rd_reg144_inst_addr                                            "0x00A6"
#define  set_SIW_RGBW_Rd_reg144_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg144_reg)=data)
#define  get_SIW_RGBW_Rd_reg144_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg144_reg))
#define  SIW_RGBW_Rd_reg144_rd_reg324_shift                                      (16)
#define  SIW_RGBW_Rd_reg144_rd_reg325_shift                                      (0)
#define  SIW_RGBW_Rd_reg144_rd_reg324_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg144_rd_reg325_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg144_rd_reg324(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg144_rd_reg325(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg144_get_rd_reg324(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg144_get_rd_reg325(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg146                                                     0x1802B18C
#define  SIW_RGBW_Rd_reg146_reg_addr                                             "0xB802B18C"
#define  SIW_RGBW_Rd_reg146_reg                                                  0xB802B18C
#define  SIW_RGBW_Rd_reg146_inst_addr                                            "0x00A7"
#define  set_SIW_RGBW_Rd_reg146_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg146_reg)=data)
#define  get_SIW_RGBW_Rd_reg146_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg146_reg))
#define  SIW_RGBW_Rd_reg146_rd_reg326_shift                                      (16)
#define  SIW_RGBW_Rd_reg146_rd_reg327_shift                                      (0)
#define  SIW_RGBW_Rd_reg146_rd_reg326_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg146_rd_reg327_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg146_rd_reg326(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg146_rd_reg327(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg146_get_rd_reg326(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg146_get_rd_reg327(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg148                                                     0x1802B190
#define  SIW_RGBW_Rd_reg148_reg_addr                                             "0xB802B190"
#define  SIW_RGBW_Rd_reg148_reg                                                  0xB802B190
#define  SIW_RGBW_Rd_reg148_inst_addr                                            "0x00A8"
#define  set_SIW_RGBW_Rd_reg148_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg148_reg)=data)
#define  get_SIW_RGBW_Rd_reg148_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg148_reg))
#define  SIW_RGBW_Rd_reg148_rd_reg328_shift                                      (16)
#define  SIW_RGBW_Rd_reg148_rd_reg329_shift                                      (0)
#define  SIW_RGBW_Rd_reg148_rd_reg328_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg148_rd_reg329_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg148_rd_reg328(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg148_rd_reg329(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg148_get_rd_reg328(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg148_get_rd_reg329(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg14A                                                     0x1802B194
#define  SIW_RGBW_Rd_reg14A_reg_addr                                             "0xB802B194"
#define  SIW_RGBW_Rd_reg14A_reg                                                  0xB802B194
#define  SIW_RGBW_Rd_reg14A_inst_addr                                            "0x00A9"
#define  set_SIW_RGBW_Rd_reg14A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg14A_reg)=data)
#define  get_SIW_RGBW_Rd_reg14A_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg14A_reg))
#define  SIW_RGBW_Rd_reg14A_rd_reg330_shift                                      (16)
#define  SIW_RGBW_Rd_reg14A_rd_reg331_shift                                      (0)
#define  SIW_RGBW_Rd_reg14A_rd_reg330_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg14A_rd_reg331_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg14A_rd_reg330(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg14A_rd_reg331(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg14A_get_rd_reg330(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg14A_get_rd_reg331(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg14C                                                     0x1802B198
#define  SIW_RGBW_Rd_reg14C_reg_addr                                             "0xB802B198"
#define  SIW_RGBW_Rd_reg14C_reg                                                  0xB802B198
#define  SIW_RGBW_Rd_reg14C_inst_addr                                            "0x00AA"
#define  set_SIW_RGBW_Rd_reg14C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg14C_reg)=data)
#define  get_SIW_RGBW_Rd_reg14C_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg14C_reg))
#define  SIW_RGBW_Rd_reg14C_rd_reg332_shift                                      (16)
#define  SIW_RGBW_Rd_reg14C_rd_reg333_shift                                      (0)
#define  SIW_RGBW_Rd_reg14C_rd_reg332_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg14C_rd_reg333_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg14C_rd_reg332(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg14C_rd_reg333(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg14C_get_rd_reg332(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg14C_get_rd_reg333(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg14E                                                     0x1802B19C
#define  SIW_RGBW_Rd_reg14E_reg_addr                                             "0xB802B19C"
#define  SIW_RGBW_Rd_reg14E_reg                                                  0xB802B19C
#define  SIW_RGBW_Rd_reg14E_inst_addr                                            "0x00AB"
#define  set_SIW_RGBW_Rd_reg14E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg14E_reg)=data)
#define  get_SIW_RGBW_Rd_reg14E_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg14E_reg))
#define  SIW_RGBW_Rd_reg14E_rd_reg334_shift                                      (16)
#define  SIW_RGBW_Rd_reg14E_rd_reg335_shift                                      (0)
#define  SIW_RGBW_Rd_reg14E_rd_reg334_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg14E_rd_reg335_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg14E_rd_reg334(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg14E_rd_reg335(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg14E_get_rd_reg334(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg14E_get_rd_reg335(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg150                                                     0x1802B1A0
#define  SIW_RGBW_Rd_reg150_reg_addr                                             "0xB802B1A0"
#define  SIW_RGBW_Rd_reg150_reg                                                  0xB802B1A0
#define  SIW_RGBW_Rd_reg150_inst_addr                                            "0x00AC"
#define  set_SIW_RGBW_Rd_reg150_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg150_reg)=data)
#define  get_SIW_RGBW_Rd_reg150_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg150_reg))
#define  SIW_RGBW_Rd_reg150_rd_reg336_shift                                      (16)
#define  SIW_RGBW_Rd_reg150_rd_reg337_shift                                      (0)
#define  SIW_RGBW_Rd_reg150_rd_reg336_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg150_rd_reg337_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg150_rd_reg336(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg150_rd_reg337(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg150_get_rd_reg336(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg150_get_rd_reg337(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg152                                                     0x1802B1A4
#define  SIW_RGBW_Rd_reg152_reg_addr                                             "0xB802B1A4"
#define  SIW_RGBW_Rd_reg152_reg                                                  0xB802B1A4
#define  SIW_RGBW_Rd_reg152_inst_addr                                            "0x00AD"
#define  set_SIW_RGBW_Rd_reg152_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg152_reg)=data)
#define  get_SIW_RGBW_Rd_reg152_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg152_reg))
#define  SIW_RGBW_Rd_reg152_rd_reg338_shift                                      (16)
#define  SIW_RGBW_Rd_reg152_rd_reg339_shift                                      (0)
#define  SIW_RGBW_Rd_reg152_rd_reg338_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg152_rd_reg339_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg152_rd_reg338(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg152_rd_reg339(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg152_get_rd_reg338(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg152_get_rd_reg339(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg154                                                     0x1802B1A8
#define  SIW_RGBW_Rd_reg154_reg_addr                                             "0xB802B1A8"
#define  SIW_RGBW_Rd_reg154_reg                                                  0xB802B1A8
#define  SIW_RGBW_Rd_reg154_inst_addr                                            "0x00AE"
#define  set_SIW_RGBW_Rd_reg154_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg154_reg)=data)
#define  get_SIW_RGBW_Rd_reg154_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg154_reg))
#define  SIW_RGBW_Rd_reg154_rd_reg340_shift                                      (16)
#define  SIW_RGBW_Rd_reg154_rd_reg341_shift                                      (0)
#define  SIW_RGBW_Rd_reg154_rd_reg340_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg154_rd_reg341_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg154_rd_reg340(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg154_rd_reg341(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg154_get_rd_reg340(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg154_get_rd_reg341(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg156                                                     0x1802B1AC
#define  SIW_RGBW_Rd_reg156_reg_addr                                             "0xB802B1AC"
#define  SIW_RGBW_Rd_reg156_reg                                                  0xB802B1AC
#define  SIW_RGBW_Rd_reg156_inst_addr                                            "0x00AF"
#define  set_SIW_RGBW_Rd_reg156_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg156_reg)=data)
#define  get_SIW_RGBW_Rd_reg156_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg156_reg))
#define  SIW_RGBW_Rd_reg156_rd_reg342_shift                                      (16)
#define  SIW_RGBW_Rd_reg156_rd_reg343_shift                                      (0)
#define  SIW_RGBW_Rd_reg156_rd_reg342_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg156_rd_reg343_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg156_rd_reg342(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg156_rd_reg343(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg156_get_rd_reg342(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg156_get_rd_reg343(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg158                                                     0x1802B1B0
#define  SIW_RGBW_Rd_reg158_reg_addr                                             "0xB802B1B0"
#define  SIW_RGBW_Rd_reg158_reg                                                  0xB802B1B0
#define  SIW_RGBW_Rd_reg158_inst_addr                                            "0x00B0"
#define  set_SIW_RGBW_Rd_reg158_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg158_reg)=data)
#define  get_SIW_RGBW_Rd_reg158_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg158_reg))
#define  SIW_RGBW_Rd_reg158_rd_reg344_shift                                      (16)
#define  SIW_RGBW_Rd_reg158_rd_reg345_shift                                      (0)
#define  SIW_RGBW_Rd_reg158_rd_reg344_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg158_rd_reg345_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg158_rd_reg344(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg158_rd_reg345(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg158_get_rd_reg344(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg158_get_rd_reg345(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg15A                                                     0x1802B1B4
#define  SIW_RGBW_Rd_reg15A_reg_addr                                             "0xB802B1B4"
#define  SIW_RGBW_Rd_reg15A_reg                                                  0xB802B1B4
#define  SIW_RGBW_Rd_reg15A_inst_addr                                            "0x00B1"
#define  set_SIW_RGBW_Rd_reg15A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg15A_reg)=data)
#define  get_SIW_RGBW_Rd_reg15A_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg15A_reg))
#define  SIW_RGBW_Rd_reg15A_rd_reg346_shift                                      (16)
#define  SIW_RGBW_Rd_reg15A_rd_reg347_shift                                      (0)
#define  SIW_RGBW_Rd_reg15A_rd_reg346_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg15A_rd_reg347_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg15A_rd_reg346(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg15A_rd_reg347(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg15A_get_rd_reg346(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg15A_get_rd_reg347(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg15C                                                     0x1802B1B8
#define  SIW_RGBW_Rd_reg15C_reg_addr                                             "0xB802B1B8"
#define  SIW_RGBW_Rd_reg15C_reg                                                  0xB802B1B8
#define  SIW_RGBW_Rd_reg15C_inst_addr                                            "0x00B2"
#define  set_SIW_RGBW_Rd_reg15C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg15C_reg)=data)
#define  get_SIW_RGBW_Rd_reg15C_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg15C_reg))
#define  SIW_RGBW_Rd_reg15C_rd_reg348_shift                                      (16)
#define  SIW_RGBW_Rd_reg15C_rd_reg349_shift                                      (0)
#define  SIW_RGBW_Rd_reg15C_rd_reg348_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg15C_rd_reg349_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg15C_rd_reg348(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg15C_rd_reg349(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg15C_get_rd_reg348(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg15C_get_rd_reg349(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg15E                                                     0x1802B1BC
#define  SIW_RGBW_Rd_reg15E_reg_addr                                             "0xB802B1BC"
#define  SIW_RGBW_Rd_reg15E_reg                                                  0xB802B1BC
#define  SIW_RGBW_Rd_reg15E_inst_addr                                            "0x00B3"
#define  set_SIW_RGBW_Rd_reg15E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg15E_reg)=data)
#define  get_SIW_RGBW_Rd_reg15E_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg15E_reg))
#define  SIW_RGBW_Rd_reg15E_rd_reg350_shift                                      (16)
#define  SIW_RGBW_Rd_reg15E_rd_reg351_shift                                      (0)
#define  SIW_RGBW_Rd_reg15E_rd_reg350_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg15E_rd_reg351_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg15E_rd_reg350(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg15E_rd_reg351(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg15E_get_rd_reg350(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg15E_get_rd_reg351(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg160                                                     0x1802B1C0
#define  SIW_RGBW_Rd_reg160_reg_addr                                             "0xB802B1C0"
#define  SIW_RGBW_Rd_reg160_reg                                                  0xB802B1C0
#define  SIW_RGBW_Rd_reg160_inst_addr                                            "0x00B4"
#define  set_SIW_RGBW_Rd_reg160_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg160_reg)=data)
#define  get_SIW_RGBW_Rd_reg160_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg160_reg))
#define  SIW_RGBW_Rd_reg160_rd_reg352_shift                                      (16)
#define  SIW_RGBW_Rd_reg160_rd_reg353_shift                                      (0)
#define  SIW_RGBW_Rd_reg160_rd_reg352_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg160_rd_reg353_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg160_rd_reg352(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg160_rd_reg353(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg160_get_rd_reg352(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg160_get_rd_reg353(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg162                                                     0x1802B1C4
#define  SIW_RGBW_Rd_reg162_reg_addr                                             "0xB802B1C4"
#define  SIW_RGBW_Rd_reg162_reg                                                  0xB802B1C4
#define  SIW_RGBW_Rd_reg162_inst_addr                                            "0x00B5"
#define  set_SIW_RGBW_Rd_reg162_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg162_reg)=data)
#define  get_SIW_RGBW_Rd_reg162_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg162_reg))
#define  SIW_RGBW_Rd_reg162_rd_reg354_shift                                      (16)
#define  SIW_RGBW_Rd_reg162_rd_reg355_shift                                      (0)
#define  SIW_RGBW_Rd_reg162_rd_reg354_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg162_rd_reg355_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg162_rd_reg354(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg162_rd_reg355(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg162_get_rd_reg354(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg162_get_rd_reg355(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg164                                                     0x1802B1C8
#define  SIW_RGBW_Rd_reg164_reg_addr                                             "0xB802B1C8"
#define  SIW_RGBW_Rd_reg164_reg                                                  0xB802B1C8
#define  SIW_RGBW_Rd_reg164_inst_addr                                            "0x00B6"
#define  set_SIW_RGBW_Rd_reg164_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg164_reg)=data)
#define  get_SIW_RGBW_Rd_reg164_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg164_reg))
#define  SIW_RGBW_Rd_reg164_rd_reg356_shift                                      (16)
#define  SIW_RGBW_Rd_reg164_rd_reg357_shift                                      (0)
#define  SIW_RGBW_Rd_reg164_rd_reg356_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg164_rd_reg357_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg164_rd_reg356(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg164_rd_reg357(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg164_get_rd_reg356(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg164_get_rd_reg357(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg166                                                     0x1802B1CC
#define  SIW_RGBW_Rd_reg166_reg_addr                                             "0xB802B1CC"
#define  SIW_RGBW_Rd_reg166_reg                                                  0xB802B1CC
#define  SIW_RGBW_Rd_reg166_inst_addr                                            "0x00B7"
#define  set_SIW_RGBW_Rd_reg166_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg166_reg)=data)
#define  get_SIW_RGBW_Rd_reg166_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg166_reg))
#define  SIW_RGBW_Rd_reg166_rd_reg358_shift                                      (16)
#define  SIW_RGBW_Rd_reg166_rd_reg359_shift                                      (0)
#define  SIW_RGBW_Rd_reg166_rd_reg358_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg166_rd_reg359_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg166_rd_reg358(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg166_rd_reg359(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg166_get_rd_reg358(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg166_get_rd_reg359(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg168                                                     0x1802B1D0
#define  SIW_RGBW_Rd_reg168_reg_addr                                             "0xB802B1D0"
#define  SIW_RGBW_Rd_reg168_reg                                                  0xB802B1D0
#define  SIW_RGBW_Rd_reg168_inst_addr                                            "0x00B8"
#define  set_SIW_RGBW_Rd_reg168_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg168_reg)=data)
#define  get_SIW_RGBW_Rd_reg168_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg168_reg))
#define  SIW_RGBW_Rd_reg168_rd_reg360_shift                                      (16)
#define  SIW_RGBW_Rd_reg168_rd_reg361_shift                                      (0)
#define  SIW_RGBW_Rd_reg168_rd_reg360_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg168_rd_reg361_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg168_rd_reg360(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg168_rd_reg361(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg168_get_rd_reg360(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg168_get_rd_reg361(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg16A                                                     0x1802B1D4
#define  SIW_RGBW_Rd_reg16A_reg_addr                                             "0xB802B1D4"
#define  SIW_RGBW_Rd_reg16A_reg                                                  0xB802B1D4
#define  SIW_RGBW_Rd_reg16A_inst_addr                                            "0x00B9"
#define  set_SIW_RGBW_Rd_reg16A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg16A_reg)=data)
#define  get_SIW_RGBW_Rd_reg16A_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg16A_reg))
#define  SIW_RGBW_Rd_reg16A_rd_reg362_shift                                      (16)
#define  SIW_RGBW_Rd_reg16A_rd_reg363_shift                                      (0)
#define  SIW_RGBW_Rd_reg16A_rd_reg362_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg16A_rd_reg363_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg16A_rd_reg362(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg16A_rd_reg363(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg16A_get_rd_reg362(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg16A_get_rd_reg363(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg16C                                                     0x1802B1D8
#define  SIW_RGBW_Rd_reg16C_reg_addr                                             "0xB802B1D8"
#define  SIW_RGBW_Rd_reg16C_reg                                                  0xB802B1D8
#define  SIW_RGBW_Rd_reg16C_inst_addr                                            "0x00BA"
#define  set_SIW_RGBW_Rd_reg16C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg16C_reg)=data)
#define  get_SIW_RGBW_Rd_reg16C_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg16C_reg))
#define  SIW_RGBW_Rd_reg16C_rd_reg364_shift                                      (16)
#define  SIW_RGBW_Rd_reg16C_rd_reg365_shift                                      (0)
#define  SIW_RGBW_Rd_reg16C_rd_reg364_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg16C_rd_reg365_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg16C_rd_reg364(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg16C_rd_reg365(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg16C_get_rd_reg364(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg16C_get_rd_reg365(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg16E                                                     0x1802B1DC
#define  SIW_RGBW_Rd_reg16E_reg_addr                                             "0xB802B1DC"
#define  SIW_RGBW_Rd_reg16E_reg                                                  0xB802B1DC
#define  SIW_RGBW_Rd_reg16E_inst_addr                                            "0x00BB"
#define  set_SIW_RGBW_Rd_reg16E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg16E_reg)=data)
#define  get_SIW_RGBW_Rd_reg16E_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg16E_reg))
#define  SIW_RGBW_Rd_reg16E_rd_reg366_shift                                      (16)
#define  SIW_RGBW_Rd_reg16E_rd_reg367_shift                                      (0)
#define  SIW_RGBW_Rd_reg16E_rd_reg366_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg16E_rd_reg367_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg16E_rd_reg366(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg16E_rd_reg367(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg16E_get_rd_reg366(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg16E_get_rd_reg367(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg170                                                     0x1802B1E0
#define  SIW_RGBW_Rd_reg170_reg_addr                                             "0xB802B1E0"
#define  SIW_RGBW_Rd_reg170_reg                                                  0xB802B1E0
#define  SIW_RGBW_Rd_reg170_inst_addr                                            "0x00BC"
#define  set_SIW_RGBW_Rd_reg170_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg170_reg)=data)
#define  get_SIW_RGBW_Rd_reg170_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg170_reg))
#define  SIW_RGBW_Rd_reg170_rd_reg368_shift                                      (16)
#define  SIW_RGBW_Rd_reg170_rd_reg369_shift                                      (0)
#define  SIW_RGBW_Rd_reg170_rd_reg368_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg170_rd_reg369_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg170_rd_reg368(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg170_rd_reg369(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg170_get_rd_reg368(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg170_get_rd_reg369(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg172                                                     0x1802B1E4
#define  SIW_RGBW_Rd_reg172_reg_addr                                             "0xB802B1E4"
#define  SIW_RGBW_Rd_reg172_reg                                                  0xB802B1E4
#define  SIW_RGBW_Rd_reg172_inst_addr                                            "0x00BD"
#define  set_SIW_RGBW_Rd_reg172_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg172_reg)=data)
#define  get_SIW_RGBW_Rd_reg172_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg172_reg))
#define  SIW_RGBW_Rd_reg172_rd_reg370_shift                                      (16)
#define  SIW_RGBW_Rd_reg172_rd_reg371_shift                                      (0)
#define  SIW_RGBW_Rd_reg172_rd_reg370_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg172_rd_reg371_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg172_rd_reg370(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg172_rd_reg371(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg172_get_rd_reg370(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg172_get_rd_reg371(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg174                                                     0x1802B1E8
#define  SIW_RGBW_Rd_reg174_reg_addr                                             "0xB802B1E8"
#define  SIW_RGBW_Rd_reg174_reg                                                  0xB802B1E8
#define  SIW_RGBW_Rd_reg174_inst_addr                                            "0x00BE"
#define  set_SIW_RGBW_Rd_reg174_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg174_reg)=data)
#define  get_SIW_RGBW_Rd_reg174_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg174_reg))
#define  SIW_RGBW_Rd_reg174_rd_reg372_shift                                      (16)
#define  SIW_RGBW_Rd_reg174_rd_reg373_shift                                      (0)
#define  SIW_RGBW_Rd_reg174_rd_reg372_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg174_rd_reg373_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg174_rd_reg372(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg174_rd_reg373(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg174_get_rd_reg372(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg174_get_rd_reg373(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg176                                                     0x1802B1EC
#define  SIW_RGBW_Rd_reg176_reg_addr                                             "0xB802B1EC"
#define  SIW_RGBW_Rd_reg176_reg                                                  0xB802B1EC
#define  SIW_RGBW_Rd_reg176_inst_addr                                            "0x00BF"
#define  set_SIW_RGBW_Rd_reg176_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg176_reg)=data)
#define  get_SIW_RGBW_Rd_reg176_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg176_reg))
#define  SIW_RGBW_Rd_reg176_rd_reg374_shift                                      (16)
#define  SIW_RGBW_Rd_reg176_rd_reg375_shift                                      (0)
#define  SIW_RGBW_Rd_reg176_rd_reg374_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg176_rd_reg375_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg176_rd_reg374(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg176_rd_reg375(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg176_get_rd_reg374(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg176_get_rd_reg375(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg178                                                     0x1802B1F0
#define  SIW_RGBW_Rd_reg178_reg_addr                                             "0xB802B1F0"
#define  SIW_RGBW_Rd_reg178_reg                                                  0xB802B1F0
#define  SIW_RGBW_Rd_reg178_inst_addr                                            "0x00C0"
#define  set_SIW_RGBW_Rd_reg178_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg178_reg)=data)
#define  get_SIW_RGBW_Rd_reg178_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg178_reg))
#define  SIW_RGBW_Rd_reg178_rd_reg376_shift                                      (16)
#define  SIW_RGBW_Rd_reg178_rd_reg377_shift                                      (0)
#define  SIW_RGBW_Rd_reg178_rd_reg376_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg178_rd_reg377_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg178_rd_reg376(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg178_rd_reg377(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg178_get_rd_reg376(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg178_get_rd_reg377(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg17A                                                     0x1802B1F4
#define  SIW_RGBW_Rd_reg17A_reg_addr                                             "0xB802B1F4"
#define  SIW_RGBW_Rd_reg17A_reg                                                  0xB802B1F4
#define  SIW_RGBW_Rd_reg17A_inst_addr                                            "0x00C1"
#define  set_SIW_RGBW_Rd_reg17A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg17A_reg)=data)
#define  get_SIW_RGBW_Rd_reg17A_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg17A_reg))
#define  SIW_RGBW_Rd_reg17A_rd_reg378_shift                                      (16)
#define  SIW_RGBW_Rd_reg17A_rd_reg379_shift                                      (0)
#define  SIW_RGBW_Rd_reg17A_rd_reg378_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg17A_rd_reg379_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg17A_rd_reg378(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg17A_rd_reg379(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg17A_get_rd_reg378(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg17A_get_rd_reg379(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg17C                                                     0x1802B1F8
#define  SIW_RGBW_Rd_reg17C_reg_addr                                             "0xB802B1F8"
#define  SIW_RGBW_Rd_reg17C_reg                                                  0xB802B1F8
#define  SIW_RGBW_Rd_reg17C_inst_addr                                            "0x00C2"
#define  set_SIW_RGBW_Rd_reg17C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg17C_reg)=data)
#define  get_SIW_RGBW_Rd_reg17C_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg17C_reg))
#define  SIW_RGBW_Rd_reg17C_rd_reg380_shift                                      (16)
#define  SIW_RGBW_Rd_reg17C_rd_reg381_shift                                      (0)
#define  SIW_RGBW_Rd_reg17C_rd_reg380_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg17C_rd_reg381_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg17C_rd_reg380(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg17C_rd_reg381(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg17C_get_rd_reg380(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg17C_get_rd_reg381(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg17E                                                     0x1802B1FC
#define  SIW_RGBW_Rd_reg17E_reg_addr                                             "0xB802B1FC"
#define  SIW_RGBW_Rd_reg17E_reg                                                  0xB802B1FC
#define  SIW_RGBW_Rd_reg17E_inst_addr                                            "0x00C3"
#define  set_SIW_RGBW_Rd_reg17E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg17E_reg)=data)
#define  get_SIW_RGBW_Rd_reg17E_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg17E_reg))
#define  SIW_RGBW_Rd_reg17E_rd_reg382_shift                                      (16)
#define  SIW_RGBW_Rd_reg17E_rd_reg383_shift                                      (0)
#define  SIW_RGBW_Rd_reg17E_rd_reg382_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg17E_rd_reg383_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg17E_rd_reg382(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg17E_rd_reg383(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg17E_get_rd_reg382(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg17E_get_rd_reg383(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg180                                                     0x1802B200
#define  SIW_RGBW_Rd_reg180_reg_addr                                             "0xB802B200"
#define  SIW_RGBW_Rd_reg180_reg                                                  0xB802B200
#define  SIW_RGBW_Rd_reg180_inst_addr                                            "0x00C4"
#define  set_SIW_RGBW_Rd_reg180_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg180_reg)=data)
#define  get_SIW_RGBW_Rd_reg180_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg180_reg))
#define  SIW_RGBW_Rd_reg180_rd_reg384_shift                                      (16)
#define  SIW_RGBW_Rd_reg180_rd_reg385_shift                                      (0)
#define  SIW_RGBW_Rd_reg180_rd_reg384_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg180_rd_reg385_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg180_rd_reg384(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg180_rd_reg385(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg180_get_rd_reg384(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg180_get_rd_reg385(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg182                                                     0x1802B204
#define  SIW_RGBW_Rd_reg182_reg_addr                                             "0xB802B204"
#define  SIW_RGBW_Rd_reg182_reg                                                  0xB802B204
#define  SIW_RGBW_Rd_reg182_inst_addr                                            "0x00C5"
#define  set_SIW_RGBW_Rd_reg182_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg182_reg)=data)
#define  get_SIW_RGBW_Rd_reg182_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg182_reg))
#define  SIW_RGBW_Rd_reg182_rd_reg386_shift                                      (16)
#define  SIW_RGBW_Rd_reg182_rd_reg387_shift                                      (0)
#define  SIW_RGBW_Rd_reg182_rd_reg386_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg182_rd_reg387_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg182_rd_reg386(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg182_rd_reg387(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg182_get_rd_reg386(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg182_get_rd_reg387(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg184                                                     0x1802B208
#define  SIW_RGBW_Rd_reg184_reg_addr                                             "0xB802B208"
#define  SIW_RGBW_Rd_reg184_reg                                                  0xB802B208
#define  SIW_RGBW_Rd_reg184_inst_addr                                            "0x00C6"
#define  set_SIW_RGBW_Rd_reg184_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg184_reg)=data)
#define  get_SIW_RGBW_Rd_reg184_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg184_reg))
#define  SIW_RGBW_Rd_reg184_rd_reg388_shift                                      (16)
#define  SIW_RGBW_Rd_reg184_rd_reg389_shift                                      (0)
#define  SIW_RGBW_Rd_reg184_rd_reg388_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg184_rd_reg389_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg184_rd_reg388(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg184_rd_reg389(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg184_get_rd_reg388(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg184_get_rd_reg389(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg186                                                     0x1802B20C
#define  SIW_RGBW_Rd_reg186_reg_addr                                             "0xB802B20C"
#define  SIW_RGBW_Rd_reg186_reg                                                  0xB802B20C
#define  SIW_RGBW_Rd_reg186_inst_addr                                            "0x00C7"
#define  set_SIW_RGBW_Rd_reg186_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg186_reg)=data)
#define  get_SIW_RGBW_Rd_reg186_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg186_reg))
#define  SIW_RGBW_Rd_reg186_rd_reg390_shift                                      (16)
#define  SIW_RGBW_Rd_reg186_rd_reg391_shift                                      (0)
#define  SIW_RGBW_Rd_reg186_rd_reg390_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg186_rd_reg391_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg186_rd_reg390(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg186_rd_reg391(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg186_get_rd_reg390(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg186_get_rd_reg391(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg188                                                     0x1802B210
#define  SIW_RGBW_Rd_reg188_reg_addr                                             "0xB802B210"
#define  SIW_RGBW_Rd_reg188_reg                                                  0xB802B210
#define  SIW_RGBW_Rd_reg188_inst_addr                                            "0x00C8"
#define  set_SIW_RGBW_Rd_reg188_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg188_reg)=data)
#define  get_SIW_RGBW_Rd_reg188_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg188_reg))
#define  SIW_RGBW_Rd_reg188_rd_reg392_shift                                      (16)
#define  SIW_RGBW_Rd_reg188_rd_reg393_shift                                      (0)
#define  SIW_RGBW_Rd_reg188_rd_reg392_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg188_rd_reg393_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg188_rd_reg392(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg188_rd_reg393(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg188_get_rd_reg392(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg188_get_rd_reg393(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg18A                                                     0x1802B214
#define  SIW_RGBW_Rd_reg18A_reg_addr                                             "0xB802B214"
#define  SIW_RGBW_Rd_reg18A_reg                                                  0xB802B214
#define  SIW_RGBW_Rd_reg18A_inst_addr                                            "0x00C9"
#define  set_SIW_RGBW_Rd_reg18A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg18A_reg)=data)
#define  get_SIW_RGBW_Rd_reg18A_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg18A_reg))
#define  SIW_RGBW_Rd_reg18A_rd_reg394_shift                                      (16)
#define  SIW_RGBW_Rd_reg18A_rd_reg395_shift                                      (0)
#define  SIW_RGBW_Rd_reg18A_rd_reg394_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg18A_rd_reg395_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg18A_rd_reg394(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg18A_rd_reg395(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg18A_get_rd_reg394(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg18A_get_rd_reg395(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg18C                                                     0x1802B218
#define  SIW_RGBW_Rd_reg18C_reg_addr                                             "0xB802B218"
#define  SIW_RGBW_Rd_reg18C_reg                                                  0xB802B218
#define  SIW_RGBW_Rd_reg18C_inst_addr                                            "0x00CA"
#define  set_SIW_RGBW_Rd_reg18C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg18C_reg)=data)
#define  get_SIW_RGBW_Rd_reg18C_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg18C_reg))
#define  SIW_RGBW_Rd_reg18C_rd_reg396_shift                                      (16)
#define  SIW_RGBW_Rd_reg18C_rd_reg397_shift                                      (0)
#define  SIW_RGBW_Rd_reg18C_rd_reg396_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg18C_rd_reg397_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg18C_rd_reg396(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg18C_rd_reg397(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg18C_get_rd_reg396(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg18C_get_rd_reg397(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg18E                                                     0x1802B21C
#define  SIW_RGBW_Rd_reg18E_reg_addr                                             "0xB802B21C"
#define  SIW_RGBW_Rd_reg18E_reg                                                  0xB802B21C
#define  SIW_RGBW_Rd_reg18E_inst_addr                                            "0x00CB"
#define  set_SIW_RGBW_Rd_reg18E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg18E_reg)=data)
#define  get_SIW_RGBW_Rd_reg18E_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg18E_reg))
#define  SIW_RGBW_Rd_reg18E_rd_reg398_shift                                      (16)
#define  SIW_RGBW_Rd_reg18E_rd_reg399_shift                                      (0)
#define  SIW_RGBW_Rd_reg18E_rd_reg398_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg18E_rd_reg399_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg18E_rd_reg398(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg18E_rd_reg399(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg18E_get_rd_reg398(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg18E_get_rd_reg399(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg190                                                     0x1802B220
#define  SIW_RGBW_Rd_reg190_reg_addr                                             "0xB802B220"
#define  SIW_RGBW_Rd_reg190_reg                                                  0xB802B220
#define  SIW_RGBW_Rd_reg190_inst_addr                                            "0x00CC"
#define  set_SIW_RGBW_Rd_reg190_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg190_reg)=data)
#define  get_SIW_RGBW_Rd_reg190_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg190_reg))
#define  SIW_RGBW_Rd_reg190_rd_reg400_shift                                      (16)
#define  SIW_RGBW_Rd_reg190_rd_reg401_shift                                      (0)
#define  SIW_RGBW_Rd_reg190_rd_reg400_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg190_rd_reg401_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg190_rd_reg400(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg190_rd_reg401(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg190_get_rd_reg400(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg190_get_rd_reg401(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg192                                                     0x1802B224
#define  SIW_RGBW_Rd_reg192_reg_addr                                             "0xB802B224"
#define  SIW_RGBW_Rd_reg192_reg                                                  0xB802B224
#define  SIW_RGBW_Rd_reg192_inst_addr                                            "0x00CD"
#define  set_SIW_RGBW_Rd_reg192_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg192_reg)=data)
#define  get_SIW_RGBW_Rd_reg192_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg192_reg))
#define  SIW_RGBW_Rd_reg192_rd_reg402_shift                                      (16)
#define  SIW_RGBW_Rd_reg192_rd_reg403_shift                                      (0)
#define  SIW_RGBW_Rd_reg192_rd_reg402_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg192_rd_reg403_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg192_rd_reg402(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg192_rd_reg403(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg192_get_rd_reg402(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg192_get_rd_reg403(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg194                                                     0x1802B228
#define  SIW_RGBW_Rd_reg194_reg_addr                                             "0xB802B228"
#define  SIW_RGBW_Rd_reg194_reg                                                  0xB802B228
#define  SIW_RGBW_Rd_reg194_inst_addr                                            "0x00CE"
#define  set_SIW_RGBW_Rd_reg194_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg194_reg)=data)
#define  get_SIW_RGBW_Rd_reg194_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg194_reg))
#define  SIW_RGBW_Rd_reg194_rd_reg404_shift                                      (16)
#define  SIW_RGBW_Rd_reg194_rd_reg405_shift                                      (0)
#define  SIW_RGBW_Rd_reg194_rd_reg404_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg194_rd_reg405_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg194_rd_reg404(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg194_rd_reg405(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg194_get_rd_reg404(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg194_get_rd_reg405(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg196                                                     0x1802B22C
#define  SIW_RGBW_Rd_reg196_reg_addr                                             "0xB802B22C"
#define  SIW_RGBW_Rd_reg196_reg                                                  0xB802B22C
#define  SIW_RGBW_Rd_reg196_inst_addr                                            "0x00CF"
#define  set_SIW_RGBW_Rd_reg196_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg196_reg)=data)
#define  get_SIW_RGBW_Rd_reg196_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg196_reg))
#define  SIW_RGBW_Rd_reg196_rd_reg406_shift                                      (16)
#define  SIW_RGBW_Rd_reg196_rd_reg407_shift                                      (0)
#define  SIW_RGBW_Rd_reg196_rd_reg406_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg196_rd_reg407_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg196_rd_reg406(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg196_rd_reg407(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg196_get_rd_reg406(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg196_get_rd_reg407(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg198                                                     0x1802B230
#define  SIW_RGBW_Rd_reg198_reg_addr                                             "0xB802B230"
#define  SIW_RGBW_Rd_reg198_reg                                                  0xB802B230
#define  SIW_RGBW_Rd_reg198_inst_addr                                            "0x00D0"
#define  set_SIW_RGBW_Rd_reg198_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg198_reg)=data)
#define  get_SIW_RGBW_Rd_reg198_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg198_reg))
#define  SIW_RGBW_Rd_reg198_rd_reg408_shift                                      (16)
#define  SIW_RGBW_Rd_reg198_rd_reg409_shift                                      (0)
#define  SIW_RGBW_Rd_reg198_rd_reg408_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg198_rd_reg409_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg198_rd_reg408(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg198_rd_reg409(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg198_get_rd_reg408(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg198_get_rd_reg409(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg19A                                                     0x1802B234
#define  SIW_RGBW_Rd_reg19A_reg_addr                                             "0xB802B234"
#define  SIW_RGBW_Rd_reg19A_reg                                                  0xB802B234
#define  SIW_RGBW_Rd_reg19A_inst_addr                                            "0x00D1"
#define  set_SIW_RGBW_Rd_reg19A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg19A_reg)=data)
#define  get_SIW_RGBW_Rd_reg19A_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg19A_reg))
#define  SIW_RGBW_Rd_reg19A_rd_reg410_shift                                      (16)
#define  SIW_RGBW_Rd_reg19A_rd_reg411_shift                                      (0)
#define  SIW_RGBW_Rd_reg19A_rd_reg410_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg19A_rd_reg411_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg19A_rd_reg410(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg19A_rd_reg411(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg19A_get_rd_reg410(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg19A_get_rd_reg411(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg19C                                                     0x1802B238
#define  SIW_RGBW_Rd_reg19C_reg_addr                                             "0xB802B238"
#define  SIW_RGBW_Rd_reg19C_reg                                                  0xB802B238
#define  SIW_RGBW_Rd_reg19C_inst_addr                                            "0x00D2"
#define  set_SIW_RGBW_Rd_reg19C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg19C_reg)=data)
#define  get_SIW_RGBW_Rd_reg19C_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg19C_reg))
#define  SIW_RGBW_Rd_reg19C_rd_reg412_shift                                      (16)
#define  SIW_RGBW_Rd_reg19C_rd_reg413_shift                                      (0)
#define  SIW_RGBW_Rd_reg19C_rd_reg412_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg19C_rd_reg413_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg19C_rd_reg412(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg19C_rd_reg413(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg19C_get_rd_reg412(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg19C_get_rd_reg413(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg19E                                                     0x1802B23C
#define  SIW_RGBW_Rd_reg19E_reg_addr                                             "0xB802B23C"
#define  SIW_RGBW_Rd_reg19E_reg                                                  0xB802B23C
#define  SIW_RGBW_Rd_reg19E_inst_addr                                            "0x00D3"
#define  set_SIW_RGBW_Rd_reg19E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg19E_reg)=data)
#define  get_SIW_RGBW_Rd_reg19E_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg19E_reg))
#define  SIW_RGBW_Rd_reg19E_rd_reg414_shift                                      (16)
#define  SIW_RGBW_Rd_reg19E_rd_reg415_shift                                      (0)
#define  SIW_RGBW_Rd_reg19E_rd_reg414_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg19E_rd_reg415_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg19E_rd_reg414(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg19E_rd_reg415(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg19E_get_rd_reg414(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg19E_get_rd_reg415(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1A0                                                     0x1802B240
#define  SIW_RGBW_Rd_reg1A0_reg_addr                                             "0xB802B240"
#define  SIW_RGBW_Rd_reg1A0_reg                                                  0xB802B240
#define  SIW_RGBW_Rd_reg1A0_inst_addr                                            "0x00D4"
#define  set_SIW_RGBW_Rd_reg1A0_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1A0_reg)=data)
#define  get_SIW_RGBW_Rd_reg1A0_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1A0_reg))
#define  SIW_RGBW_Rd_reg1A0_rd_reg416_shift                                      (16)
#define  SIW_RGBW_Rd_reg1A0_rd_reg417_shift                                      (0)
#define  SIW_RGBW_Rd_reg1A0_rd_reg416_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1A0_rd_reg417_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1A0_rd_reg416(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1A0_rd_reg417(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1A0_get_rd_reg416(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1A0_get_rd_reg417(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1A2                                                     0x1802B244
#define  SIW_RGBW_Rd_reg1A2_reg_addr                                             "0xB802B244"
#define  SIW_RGBW_Rd_reg1A2_reg                                                  0xB802B244
#define  SIW_RGBW_Rd_reg1A2_inst_addr                                            "0x00D5"
#define  set_SIW_RGBW_Rd_reg1A2_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1A2_reg)=data)
#define  get_SIW_RGBW_Rd_reg1A2_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1A2_reg))
#define  SIW_RGBW_Rd_reg1A2_rd_reg418_shift                                      (16)
#define  SIW_RGBW_Rd_reg1A2_rd_reg419_shift                                      (0)
#define  SIW_RGBW_Rd_reg1A2_rd_reg418_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1A2_rd_reg419_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1A2_rd_reg418(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1A2_rd_reg419(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1A2_get_rd_reg418(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1A2_get_rd_reg419(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1A4                                                     0x1802B248
#define  SIW_RGBW_Rd_reg1A4_reg_addr                                             "0xB802B248"
#define  SIW_RGBW_Rd_reg1A4_reg                                                  0xB802B248
#define  SIW_RGBW_Rd_reg1A4_inst_addr                                            "0x00D6"
#define  set_SIW_RGBW_Rd_reg1A4_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1A4_reg)=data)
#define  get_SIW_RGBW_Rd_reg1A4_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1A4_reg))
#define  SIW_RGBW_Rd_reg1A4_rd_reg420_shift                                      (16)
#define  SIW_RGBW_Rd_reg1A4_rd_reg421_shift                                      (0)
#define  SIW_RGBW_Rd_reg1A4_rd_reg420_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1A4_rd_reg421_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1A4_rd_reg420(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1A4_rd_reg421(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1A4_get_rd_reg420(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1A4_get_rd_reg421(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1A6                                                     0x1802B24C
#define  SIW_RGBW_Rd_reg1A6_reg_addr                                             "0xB802B24C"
#define  SIW_RGBW_Rd_reg1A6_reg                                                  0xB802B24C
#define  SIW_RGBW_Rd_reg1A6_inst_addr                                            "0x00D7"
#define  set_SIW_RGBW_Rd_reg1A6_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1A6_reg)=data)
#define  get_SIW_RGBW_Rd_reg1A6_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1A6_reg))
#define  SIW_RGBW_Rd_reg1A6_rd_reg422_shift                                      (16)
#define  SIW_RGBW_Rd_reg1A6_rd_reg423_shift                                      (0)
#define  SIW_RGBW_Rd_reg1A6_rd_reg422_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1A6_rd_reg423_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1A6_rd_reg422(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1A6_rd_reg423(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1A6_get_rd_reg422(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1A6_get_rd_reg423(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1A8                                                     0x1802B250
#define  SIW_RGBW_Rd_reg1A8_reg_addr                                             "0xB802B250"
#define  SIW_RGBW_Rd_reg1A8_reg                                                  0xB802B250
#define  SIW_RGBW_Rd_reg1A8_inst_addr                                            "0x00D8"
#define  set_SIW_RGBW_Rd_reg1A8_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1A8_reg)=data)
#define  get_SIW_RGBW_Rd_reg1A8_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1A8_reg))
#define  SIW_RGBW_Rd_reg1A8_rd_reg424_shift                                      (16)
#define  SIW_RGBW_Rd_reg1A8_rd_reg425_shift                                      (0)
#define  SIW_RGBW_Rd_reg1A8_rd_reg424_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1A8_rd_reg425_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1A8_rd_reg424(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1A8_rd_reg425(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1A8_get_rd_reg424(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1A8_get_rd_reg425(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1AA                                                     0x1802B254
#define  SIW_RGBW_Rd_reg1AA_reg_addr                                             "0xB802B254"
#define  SIW_RGBW_Rd_reg1AA_reg                                                  0xB802B254
#define  SIW_RGBW_Rd_reg1AA_inst_addr                                            "0x00D9"
#define  set_SIW_RGBW_Rd_reg1AA_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1AA_reg)=data)
#define  get_SIW_RGBW_Rd_reg1AA_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1AA_reg))
#define  SIW_RGBW_Rd_reg1AA_rd_reg426_shift                                      (16)
#define  SIW_RGBW_Rd_reg1AA_rd_reg427_shift                                      (0)
#define  SIW_RGBW_Rd_reg1AA_rd_reg426_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1AA_rd_reg427_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1AA_rd_reg426(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1AA_rd_reg427(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1AA_get_rd_reg426(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1AA_get_rd_reg427(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1AC                                                     0x1802B258
#define  SIW_RGBW_Rd_reg1AC_reg_addr                                             "0xB802B258"
#define  SIW_RGBW_Rd_reg1AC_reg                                                  0xB802B258
#define  SIW_RGBW_Rd_reg1AC_inst_addr                                            "0x00DA"
#define  set_SIW_RGBW_Rd_reg1AC_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1AC_reg)=data)
#define  get_SIW_RGBW_Rd_reg1AC_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1AC_reg))
#define  SIW_RGBW_Rd_reg1AC_rd_reg428_shift                                      (16)
#define  SIW_RGBW_Rd_reg1AC_rd_reg429_shift                                      (0)
#define  SIW_RGBW_Rd_reg1AC_rd_reg428_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1AC_rd_reg429_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1AC_rd_reg428(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1AC_rd_reg429(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1AC_get_rd_reg428(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1AC_get_rd_reg429(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1AE                                                     0x1802B25C
#define  SIW_RGBW_Rd_reg1AE_reg_addr                                             "0xB802B25C"
#define  SIW_RGBW_Rd_reg1AE_reg                                                  0xB802B25C
#define  SIW_RGBW_Rd_reg1AE_inst_addr                                            "0x00DB"
#define  set_SIW_RGBW_Rd_reg1AE_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1AE_reg)=data)
#define  get_SIW_RGBW_Rd_reg1AE_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1AE_reg))
#define  SIW_RGBW_Rd_reg1AE_rd_reg430_shift                                      (16)
#define  SIW_RGBW_Rd_reg1AE_rd_reg431_shift                                      (0)
#define  SIW_RGBW_Rd_reg1AE_rd_reg430_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1AE_rd_reg431_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1AE_rd_reg430(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1AE_rd_reg431(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1AE_get_rd_reg430(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1AE_get_rd_reg431(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1B0                                                     0x1802B260
#define  SIW_RGBW_Rd_reg1B0_reg_addr                                             "0xB802B260"
#define  SIW_RGBW_Rd_reg1B0_reg                                                  0xB802B260
#define  SIW_RGBW_Rd_reg1B0_inst_addr                                            "0x00DC"
#define  set_SIW_RGBW_Rd_reg1B0_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1B0_reg)=data)
#define  get_SIW_RGBW_Rd_reg1B0_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1B0_reg))
#define  SIW_RGBW_Rd_reg1B0_rd_reg432_shift                                      (16)
#define  SIW_RGBW_Rd_reg1B0_rd_reg433_shift                                      (0)
#define  SIW_RGBW_Rd_reg1B0_rd_reg432_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1B0_rd_reg433_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1B0_rd_reg432(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1B0_rd_reg433(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1B0_get_rd_reg432(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1B0_get_rd_reg433(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1B2                                                     0x1802B264
#define  SIW_RGBW_Rd_reg1B2_reg_addr                                             "0xB802B264"
#define  SIW_RGBW_Rd_reg1B2_reg                                                  0xB802B264
#define  SIW_RGBW_Rd_reg1B2_inst_addr                                            "0x00DD"
#define  set_SIW_RGBW_Rd_reg1B2_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1B2_reg)=data)
#define  get_SIW_RGBW_Rd_reg1B2_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1B2_reg))
#define  SIW_RGBW_Rd_reg1B2_rd_reg434_shift                                      (16)
#define  SIW_RGBW_Rd_reg1B2_rd_reg435_shift                                      (0)
#define  SIW_RGBW_Rd_reg1B2_rd_reg434_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1B2_rd_reg435_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1B2_rd_reg434(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1B2_rd_reg435(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1B2_get_rd_reg434(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1B2_get_rd_reg435(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1B4                                                     0x1802B268
#define  SIW_RGBW_Rd_reg1B4_reg_addr                                             "0xB802B268"
#define  SIW_RGBW_Rd_reg1B4_reg                                                  0xB802B268
#define  SIW_RGBW_Rd_reg1B4_inst_addr                                            "0x00DE"
#define  set_SIW_RGBW_Rd_reg1B4_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1B4_reg)=data)
#define  get_SIW_RGBW_Rd_reg1B4_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1B4_reg))
#define  SIW_RGBW_Rd_reg1B4_rd_reg436_shift                                      (16)
#define  SIW_RGBW_Rd_reg1B4_rd_reg437_shift                                      (0)
#define  SIW_RGBW_Rd_reg1B4_rd_reg436_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1B4_rd_reg437_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1B4_rd_reg436(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1B4_rd_reg437(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1B4_get_rd_reg436(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1B4_get_rd_reg437(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1B6                                                     0x1802B26C
#define  SIW_RGBW_Rd_reg1B6_reg_addr                                             "0xB802B26C"
#define  SIW_RGBW_Rd_reg1B6_reg                                                  0xB802B26C
#define  SIW_RGBW_Rd_reg1B6_inst_addr                                            "0x00DF"
#define  set_SIW_RGBW_Rd_reg1B6_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1B6_reg)=data)
#define  get_SIW_RGBW_Rd_reg1B6_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1B6_reg))
#define  SIW_RGBW_Rd_reg1B6_rd_reg438_shift                                      (16)
#define  SIW_RGBW_Rd_reg1B6_rd_reg439_shift                                      (0)
#define  SIW_RGBW_Rd_reg1B6_rd_reg438_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1B6_rd_reg439_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1B6_rd_reg438(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1B6_rd_reg439(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1B6_get_rd_reg438(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1B6_get_rd_reg439(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1B8                                                     0x1802B270
#define  SIW_RGBW_Rd_reg1B8_reg_addr                                             "0xB802B270"
#define  SIW_RGBW_Rd_reg1B8_reg                                                  0xB802B270
#define  SIW_RGBW_Rd_reg1B8_inst_addr                                            "0x00E0"
#define  set_SIW_RGBW_Rd_reg1B8_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1B8_reg)=data)
#define  get_SIW_RGBW_Rd_reg1B8_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1B8_reg))
#define  SIW_RGBW_Rd_reg1B8_rd_reg440_shift                                      (16)
#define  SIW_RGBW_Rd_reg1B8_rd_reg441_shift                                      (0)
#define  SIW_RGBW_Rd_reg1B8_rd_reg440_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1B8_rd_reg441_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1B8_rd_reg440(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1B8_rd_reg441(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1B8_get_rd_reg440(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1B8_get_rd_reg441(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1BA                                                     0x1802B274
#define  SIW_RGBW_Rd_reg1BA_reg_addr                                             "0xB802B274"
#define  SIW_RGBW_Rd_reg1BA_reg                                                  0xB802B274
#define  SIW_RGBW_Rd_reg1BA_inst_addr                                            "0x00E1"
#define  set_SIW_RGBW_Rd_reg1BA_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1BA_reg)=data)
#define  get_SIW_RGBW_Rd_reg1BA_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1BA_reg))
#define  SIW_RGBW_Rd_reg1BA_rd_reg442_shift                                      (16)
#define  SIW_RGBW_Rd_reg1BA_rd_reg443_shift                                      (0)
#define  SIW_RGBW_Rd_reg1BA_rd_reg442_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1BA_rd_reg443_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1BA_rd_reg442(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1BA_rd_reg443(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1BA_get_rd_reg442(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1BA_get_rd_reg443(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1BC                                                     0x1802B278
#define  SIW_RGBW_Rd_reg1BC_reg_addr                                             "0xB802B278"
#define  SIW_RGBW_Rd_reg1BC_reg                                                  0xB802B278
#define  SIW_RGBW_Rd_reg1BC_inst_addr                                            "0x00E2"
#define  set_SIW_RGBW_Rd_reg1BC_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1BC_reg)=data)
#define  get_SIW_RGBW_Rd_reg1BC_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1BC_reg))
#define  SIW_RGBW_Rd_reg1BC_rd_reg444_shift                                      (16)
#define  SIW_RGBW_Rd_reg1BC_rd_reg445_shift                                      (0)
#define  SIW_RGBW_Rd_reg1BC_rd_reg444_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1BC_rd_reg445_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1BC_rd_reg444(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1BC_rd_reg445(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1BC_get_rd_reg444(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1BC_get_rd_reg445(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1BE                                                     0x1802B27C
#define  SIW_RGBW_Rd_reg1BE_reg_addr                                             "0xB802B27C"
#define  SIW_RGBW_Rd_reg1BE_reg                                                  0xB802B27C
#define  SIW_RGBW_Rd_reg1BE_inst_addr                                            "0x00E3"
#define  set_SIW_RGBW_Rd_reg1BE_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1BE_reg)=data)
#define  get_SIW_RGBW_Rd_reg1BE_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1BE_reg))
#define  SIW_RGBW_Rd_reg1BE_rd_reg446_shift                                      (16)
#define  SIW_RGBW_Rd_reg1BE_rd_reg447_shift                                      (0)
#define  SIW_RGBW_Rd_reg1BE_rd_reg446_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1BE_rd_reg447_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1BE_rd_reg446(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1BE_rd_reg447(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1BE_get_rd_reg446(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1BE_get_rd_reg447(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1C0                                                     0x1802B280
#define  SIW_RGBW_Rd_reg1C0_reg_addr                                             "0xB802B280"
#define  SIW_RGBW_Rd_reg1C0_reg                                                  0xB802B280
#define  SIW_RGBW_Rd_reg1C0_inst_addr                                            "0x00E4"
#define  set_SIW_RGBW_Rd_reg1C0_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1C0_reg)=data)
#define  get_SIW_RGBW_Rd_reg1C0_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1C0_reg))
#define  SIW_RGBW_Rd_reg1C0_rd_reg448_shift                                      (16)
#define  SIW_RGBW_Rd_reg1C0_rd_reg449_shift                                      (0)
#define  SIW_RGBW_Rd_reg1C0_rd_reg448_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1C0_rd_reg449_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1C0_rd_reg448(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1C0_rd_reg449(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1C0_get_rd_reg448(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1C0_get_rd_reg449(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1C2                                                     0x1802B284
#define  SIW_RGBW_Rd_reg1C2_reg_addr                                             "0xB802B284"
#define  SIW_RGBW_Rd_reg1C2_reg                                                  0xB802B284
#define  SIW_RGBW_Rd_reg1C2_inst_addr                                            "0x00E5"
#define  set_SIW_RGBW_Rd_reg1C2_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1C2_reg)=data)
#define  get_SIW_RGBW_Rd_reg1C2_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1C2_reg))
#define  SIW_RGBW_Rd_reg1C2_rd_reg450_shift                                      (16)
#define  SIW_RGBW_Rd_reg1C2_rd_reg451_shift                                      (0)
#define  SIW_RGBW_Rd_reg1C2_rd_reg450_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1C2_rd_reg451_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1C2_rd_reg450(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1C2_rd_reg451(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1C2_get_rd_reg450(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1C2_get_rd_reg451(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1C4                                                     0x1802B288
#define  SIW_RGBW_Rd_reg1C4_reg_addr                                             "0xB802B288"
#define  SIW_RGBW_Rd_reg1C4_reg                                                  0xB802B288
#define  SIW_RGBW_Rd_reg1C4_inst_addr                                            "0x00E6"
#define  set_SIW_RGBW_Rd_reg1C4_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1C4_reg)=data)
#define  get_SIW_RGBW_Rd_reg1C4_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1C4_reg))
#define  SIW_RGBW_Rd_reg1C4_rd_reg452_shift                                      (16)
#define  SIW_RGBW_Rd_reg1C4_rd_reg453_shift                                      (0)
#define  SIW_RGBW_Rd_reg1C4_rd_reg452_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1C4_rd_reg453_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1C4_rd_reg452(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1C4_rd_reg453(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1C4_get_rd_reg452(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1C4_get_rd_reg453(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1C6                                                     0x1802B28C
#define  SIW_RGBW_Rd_reg1C6_reg_addr                                             "0xB802B28C"
#define  SIW_RGBW_Rd_reg1C6_reg                                                  0xB802B28C
#define  SIW_RGBW_Rd_reg1C6_inst_addr                                            "0x00E7"
#define  set_SIW_RGBW_Rd_reg1C6_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1C6_reg)=data)
#define  get_SIW_RGBW_Rd_reg1C6_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1C6_reg))
#define  SIW_RGBW_Rd_reg1C6_rd_reg454_shift                                      (16)
#define  SIW_RGBW_Rd_reg1C6_rd_reg455_shift                                      (0)
#define  SIW_RGBW_Rd_reg1C6_rd_reg454_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1C6_rd_reg455_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1C6_rd_reg454(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1C6_rd_reg455(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1C6_get_rd_reg454(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1C6_get_rd_reg455(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1C8                                                     0x1802B290
#define  SIW_RGBW_Rd_reg1C8_reg_addr                                             "0xB802B290"
#define  SIW_RGBW_Rd_reg1C8_reg                                                  0xB802B290
#define  SIW_RGBW_Rd_reg1C8_inst_addr                                            "0x00E8"
#define  set_SIW_RGBW_Rd_reg1C8_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1C8_reg)=data)
#define  get_SIW_RGBW_Rd_reg1C8_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1C8_reg))
#define  SIW_RGBW_Rd_reg1C8_rd_reg456_shift                                      (16)
#define  SIW_RGBW_Rd_reg1C8_rd_reg457_shift                                      (0)
#define  SIW_RGBW_Rd_reg1C8_rd_reg456_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1C8_rd_reg457_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1C8_rd_reg456(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1C8_rd_reg457(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1C8_get_rd_reg456(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1C8_get_rd_reg457(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1CA                                                     0x1802B294
#define  SIW_RGBW_Rd_reg1CA_reg_addr                                             "0xB802B294"
#define  SIW_RGBW_Rd_reg1CA_reg                                                  0xB802B294
#define  SIW_RGBW_Rd_reg1CA_inst_addr                                            "0x00E9"
#define  set_SIW_RGBW_Rd_reg1CA_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1CA_reg)=data)
#define  get_SIW_RGBW_Rd_reg1CA_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1CA_reg))
#define  SIW_RGBW_Rd_reg1CA_rd_reg458_shift                                      (16)
#define  SIW_RGBW_Rd_reg1CA_rd_reg459_shift                                      (0)
#define  SIW_RGBW_Rd_reg1CA_rd_reg458_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1CA_rd_reg459_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1CA_rd_reg458(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1CA_rd_reg459(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1CA_get_rd_reg458(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1CA_get_rd_reg459(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1CC                                                     0x1802B298
#define  SIW_RGBW_Rd_reg1CC_reg_addr                                             "0xB802B298"
#define  SIW_RGBW_Rd_reg1CC_reg                                                  0xB802B298
#define  SIW_RGBW_Rd_reg1CC_inst_addr                                            "0x00EA"
#define  set_SIW_RGBW_Rd_reg1CC_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1CC_reg)=data)
#define  get_SIW_RGBW_Rd_reg1CC_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1CC_reg))
#define  SIW_RGBW_Rd_reg1CC_rd_reg460_shift                                      (16)
#define  SIW_RGBW_Rd_reg1CC_rd_reg461_shift                                      (0)
#define  SIW_RGBW_Rd_reg1CC_rd_reg460_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1CC_rd_reg461_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1CC_rd_reg460(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1CC_rd_reg461(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1CC_get_rd_reg460(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1CC_get_rd_reg461(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1CE                                                     0x1802B29C
#define  SIW_RGBW_Rd_reg1CE_reg_addr                                             "0xB802B29C"
#define  SIW_RGBW_Rd_reg1CE_reg                                                  0xB802B29C
#define  SIW_RGBW_Rd_reg1CE_inst_addr                                            "0x00EB"
#define  set_SIW_RGBW_Rd_reg1CE_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1CE_reg)=data)
#define  get_SIW_RGBW_Rd_reg1CE_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1CE_reg))
#define  SIW_RGBW_Rd_reg1CE_rd_reg462_shift                                      (16)
#define  SIW_RGBW_Rd_reg1CE_rd_reg463_shift                                      (0)
#define  SIW_RGBW_Rd_reg1CE_rd_reg462_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1CE_rd_reg463_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1CE_rd_reg462(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1CE_rd_reg463(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1CE_get_rd_reg462(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1CE_get_rd_reg463(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1D0                                                     0x1802B2A0
#define  SIW_RGBW_Rd_reg1D0_reg_addr                                             "0xB802B2A0"
#define  SIW_RGBW_Rd_reg1D0_reg                                                  0xB802B2A0
#define  SIW_RGBW_Rd_reg1D0_inst_addr                                            "0x00EC"
#define  set_SIW_RGBW_Rd_reg1D0_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1D0_reg)=data)
#define  get_SIW_RGBW_Rd_reg1D0_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1D0_reg))
#define  SIW_RGBW_Rd_reg1D0_rd_reg464_shift                                      (16)
#define  SIW_RGBW_Rd_reg1D0_rd_reg465_shift                                      (0)
#define  SIW_RGBW_Rd_reg1D0_rd_reg464_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1D0_rd_reg465_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1D0_rd_reg464(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1D0_rd_reg465(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1D0_get_rd_reg464(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1D0_get_rd_reg465(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1D2                                                     0x1802B2A4
#define  SIW_RGBW_Rd_reg1D2_reg_addr                                             "0xB802B2A4"
#define  SIW_RGBW_Rd_reg1D2_reg                                                  0xB802B2A4
#define  SIW_RGBW_Rd_reg1D2_inst_addr                                            "0x00ED"
#define  set_SIW_RGBW_Rd_reg1D2_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1D2_reg)=data)
#define  get_SIW_RGBW_Rd_reg1D2_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1D2_reg))
#define  SIW_RGBW_Rd_reg1D2_rd_reg466_shift                                      (16)
#define  SIW_RGBW_Rd_reg1D2_rd_reg467_shift                                      (0)
#define  SIW_RGBW_Rd_reg1D2_rd_reg466_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1D2_rd_reg467_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1D2_rd_reg466(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1D2_rd_reg467(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1D2_get_rd_reg466(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1D2_get_rd_reg467(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1D4                                                     0x1802B2A8
#define  SIW_RGBW_Rd_reg1D4_reg_addr                                             "0xB802B2A8"
#define  SIW_RGBW_Rd_reg1D4_reg                                                  0xB802B2A8
#define  SIW_RGBW_Rd_reg1D4_inst_addr                                            "0x00EE"
#define  set_SIW_RGBW_Rd_reg1D4_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1D4_reg)=data)
#define  get_SIW_RGBW_Rd_reg1D4_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1D4_reg))
#define  SIW_RGBW_Rd_reg1D4_rd_reg468_shift                                      (16)
#define  SIW_RGBW_Rd_reg1D4_rd_reg469_shift                                      (0)
#define  SIW_RGBW_Rd_reg1D4_rd_reg468_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1D4_rd_reg469_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1D4_rd_reg468(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1D4_rd_reg469(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1D4_get_rd_reg468(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1D4_get_rd_reg469(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1D6                                                     0x1802B2AC
#define  SIW_RGBW_Rd_reg1D6_reg_addr                                             "0xB802B2AC"
#define  SIW_RGBW_Rd_reg1D6_reg                                                  0xB802B2AC
#define  SIW_RGBW_Rd_reg1D6_inst_addr                                            "0x00EF"
#define  set_SIW_RGBW_Rd_reg1D6_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1D6_reg)=data)
#define  get_SIW_RGBW_Rd_reg1D6_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1D6_reg))
#define  SIW_RGBW_Rd_reg1D6_rd_reg470_shift                                      (16)
#define  SIW_RGBW_Rd_reg1D6_rd_reg471_shift                                      (0)
#define  SIW_RGBW_Rd_reg1D6_rd_reg470_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1D6_rd_reg471_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1D6_rd_reg470(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1D6_rd_reg471(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1D6_get_rd_reg470(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1D6_get_rd_reg471(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1D8                                                     0x1802B2B0
#define  SIW_RGBW_Rd_reg1D8_reg_addr                                             "0xB802B2B0"
#define  SIW_RGBW_Rd_reg1D8_reg                                                  0xB802B2B0
#define  SIW_RGBW_Rd_reg1D8_inst_addr                                            "0x00F0"
#define  set_SIW_RGBW_Rd_reg1D8_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1D8_reg)=data)
#define  get_SIW_RGBW_Rd_reg1D8_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1D8_reg))
#define  SIW_RGBW_Rd_reg1D8_rd_reg472_shift                                      (16)
#define  SIW_RGBW_Rd_reg1D8_rd_reg473_shift                                      (0)
#define  SIW_RGBW_Rd_reg1D8_rd_reg472_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1D8_rd_reg473_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1D8_rd_reg472(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1D8_rd_reg473(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1D8_get_rd_reg472(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1D8_get_rd_reg473(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1DA                                                     0x1802B2B4
#define  SIW_RGBW_Rd_reg1DA_reg_addr                                             "0xB802B2B4"
#define  SIW_RGBW_Rd_reg1DA_reg                                                  0xB802B2B4
#define  SIW_RGBW_Rd_reg1DA_inst_addr                                            "0x00F1"
#define  set_SIW_RGBW_Rd_reg1DA_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1DA_reg)=data)
#define  get_SIW_RGBW_Rd_reg1DA_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1DA_reg))
#define  SIW_RGBW_Rd_reg1DA_rd_reg474_shift                                      (16)
#define  SIW_RGBW_Rd_reg1DA_rd_reg475_shift                                      (0)
#define  SIW_RGBW_Rd_reg1DA_rd_reg474_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1DA_rd_reg475_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1DA_rd_reg474(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1DA_rd_reg475(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1DA_get_rd_reg474(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1DA_get_rd_reg475(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1DC                                                     0x1802B2B8
#define  SIW_RGBW_Rd_reg1DC_reg_addr                                             "0xB802B2B8"
#define  SIW_RGBW_Rd_reg1DC_reg                                                  0xB802B2B8
#define  SIW_RGBW_Rd_reg1DC_inst_addr                                            "0x00F2"
#define  set_SIW_RGBW_Rd_reg1DC_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1DC_reg)=data)
#define  get_SIW_RGBW_Rd_reg1DC_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1DC_reg))
#define  SIW_RGBW_Rd_reg1DC_rd_reg476_shift                                      (16)
#define  SIW_RGBW_Rd_reg1DC_rd_reg477_shift                                      (0)
#define  SIW_RGBW_Rd_reg1DC_rd_reg476_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1DC_rd_reg477_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1DC_rd_reg476(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1DC_rd_reg477(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1DC_get_rd_reg476(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1DC_get_rd_reg477(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1DE                                                     0x1802B2BC
#define  SIW_RGBW_Rd_reg1DE_reg_addr                                             "0xB802B2BC"
#define  SIW_RGBW_Rd_reg1DE_reg                                                  0xB802B2BC
#define  SIW_RGBW_Rd_reg1DE_inst_addr                                            "0x00F3"
#define  set_SIW_RGBW_Rd_reg1DE_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1DE_reg)=data)
#define  get_SIW_RGBW_Rd_reg1DE_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1DE_reg))
#define  SIW_RGBW_Rd_reg1DE_rd_reg478_shift                                      (16)
#define  SIW_RGBW_Rd_reg1DE_rd_reg479_shift                                      (0)
#define  SIW_RGBW_Rd_reg1DE_rd_reg478_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1DE_rd_reg479_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1DE_rd_reg478(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1DE_rd_reg479(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1DE_get_rd_reg478(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1DE_get_rd_reg479(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1E0                                                     0x1802B2C0
#define  SIW_RGBW_Rd_reg1E0_reg_addr                                             "0xB802B2C0"
#define  SIW_RGBW_Rd_reg1E0_reg                                                  0xB802B2C0
#define  SIW_RGBW_Rd_reg1E0_inst_addr                                            "0x00F4"
#define  set_SIW_RGBW_Rd_reg1E0_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1E0_reg)=data)
#define  get_SIW_RGBW_Rd_reg1E0_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1E0_reg))
#define  SIW_RGBW_Rd_reg1E0_rd_reg480_shift                                      (16)
#define  SIW_RGBW_Rd_reg1E0_rd_reg481_shift                                      (0)
#define  SIW_RGBW_Rd_reg1E0_rd_reg480_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1E0_rd_reg481_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1E0_rd_reg480(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1E0_rd_reg481(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1E0_get_rd_reg480(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1E0_get_rd_reg481(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1E2                                                     0x1802B2C4
#define  SIW_RGBW_Rd_reg1E2_reg_addr                                             "0xB802B2C4"
#define  SIW_RGBW_Rd_reg1E2_reg                                                  0xB802B2C4
#define  SIW_RGBW_Rd_reg1E2_inst_addr                                            "0x00F5"
#define  set_SIW_RGBW_Rd_reg1E2_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1E2_reg)=data)
#define  get_SIW_RGBW_Rd_reg1E2_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1E2_reg))
#define  SIW_RGBW_Rd_reg1E2_rd_reg482_shift                                      (16)
#define  SIW_RGBW_Rd_reg1E2_rd_reg483_shift                                      (0)
#define  SIW_RGBW_Rd_reg1E2_rd_reg482_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1E2_rd_reg483_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1E2_rd_reg482(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1E2_rd_reg483(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1E2_get_rd_reg482(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1E2_get_rd_reg483(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1E4                                                     0x1802B2C8
#define  SIW_RGBW_Rd_reg1E4_reg_addr                                             "0xB802B2C8"
#define  SIW_RGBW_Rd_reg1E4_reg                                                  0xB802B2C8
#define  SIW_RGBW_Rd_reg1E4_inst_addr                                            "0x00F6"
#define  set_SIW_RGBW_Rd_reg1E4_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1E4_reg)=data)
#define  get_SIW_RGBW_Rd_reg1E4_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1E4_reg))
#define  SIW_RGBW_Rd_reg1E4_rd_reg484_shift                                      (16)
#define  SIW_RGBW_Rd_reg1E4_rd_reg485_shift                                      (0)
#define  SIW_RGBW_Rd_reg1E4_rd_reg484_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1E4_rd_reg485_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1E4_rd_reg484(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1E4_rd_reg485(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1E4_get_rd_reg484(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1E4_get_rd_reg485(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1E6                                                     0x1802B2CC
#define  SIW_RGBW_Rd_reg1E6_reg_addr                                             "0xB802B2CC"
#define  SIW_RGBW_Rd_reg1E6_reg                                                  0xB802B2CC
#define  SIW_RGBW_Rd_reg1E6_inst_addr                                            "0x00F7"
#define  set_SIW_RGBW_Rd_reg1E6_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1E6_reg)=data)
#define  get_SIW_RGBW_Rd_reg1E6_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1E6_reg))
#define  SIW_RGBW_Rd_reg1E6_rd_reg486_shift                                      (16)
#define  SIW_RGBW_Rd_reg1E6_rd_reg487_shift                                      (0)
#define  SIW_RGBW_Rd_reg1E6_rd_reg486_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1E6_rd_reg487_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1E6_rd_reg486(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1E6_rd_reg487(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1E6_get_rd_reg486(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1E6_get_rd_reg487(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1E8                                                     0x1802B2D0
#define  SIW_RGBW_Rd_reg1E8_reg_addr                                             "0xB802B2D0"
#define  SIW_RGBW_Rd_reg1E8_reg                                                  0xB802B2D0
#define  SIW_RGBW_Rd_reg1E8_inst_addr                                            "0x00F8"
#define  set_SIW_RGBW_Rd_reg1E8_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1E8_reg)=data)
#define  get_SIW_RGBW_Rd_reg1E8_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1E8_reg))
#define  SIW_RGBW_Rd_reg1E8_rd_reg488_shift                                      (16)
#define  SIW_RGBW_Rd_reg1E8_rd_reg489_shift                                      (0)
#define  SIW_RGBW_Rd_reg1E8_rd_reg488_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1E8_rd_reg489_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1E8_rd_reg488(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1E8_rd_reg489(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1E8_get_rd_reg488(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1E8_get_rd_reg489(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1EA                                                     0x1802B2D4
#define  SIW_RGBW_Rd_reg1EA_reg_addr                                             "0xB802B2D4"
#define  SIW_RGBW_Rd_reg1EA_reg                                                  0xB802B2D4
#define  SIW_RGBW_Rd_reg1EA_inst_addr                                            "0x00F9"
#define  set_SIW_RGBW_Rd_reg1EA_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1EA_reg)=data)
#define  get_SIW_RGBW_Rd_reg1EA_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1EA_reg))
#define  SIW_RGBW_Rd_reg1EA_rd_reg490_shift                                      (16)
#define  SIW_RGBW_Rd_reg1EA_rd_reg491_shift                                      (0)
#define  SIW_RGBW_Rd_reg1EA_rd_reg490_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1EA_rd_reg491_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1EA_rd_reg490(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1EA_rd_reg491(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1EA_get_rd_reg490(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1EA_get_rd_reg491(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1EC                                                     0x1802B2D8
#define  SIW_RGBW_Rd_reg1EC_reg_addr                                             "0xB802B2D8"
#define  SIW_RGBW_Rd_reg1EC_reg                                                  0xB802B2D8
#define  SIW_RGBW_Rd_reg1EC_inst_addr                                            "0x00FA"
#define  set_SIW_RGBW_Rd_reg1EC_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1EC_reg)=data)
#define  get_SIW_RGBW_Rd_reg1EC_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1EC_reg))
#define  SIW_RGBW_Rd_reg1EC_rd_reg492_shift                                      (16)
#define  SIW_RGBW_Rd_reg1EC_rd_reg493_shift                                      (0)
#define  SIW_RGBW_Rd_reg1EC_rd_reg492_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1EC_rd_reg493_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1EC_rd_reg492(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1EC_rd_reg493(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1EC_get_rd_reg492(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1EC_get_rd_reg493(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1EE                                                     0x1802B2DC
#define  SIW_RGBW_Rd_reg1EE_reg_addr                                             "0xB802B2DC"
#define  SIW_RGBW_Rd_reg1EE_reg                                                  0xB802B2DC
#define  SIW_RGBW_Rd_reg1EE_inst_addr                                            "0x00FB"
#define  set_SIW_RGBW_Rd_reg1EE_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1EE_reg)=data)
#define  get_SIW_RGBW_Rd_reg1EE_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1EE_reg))
#define  SIW_RGBW_Rd_reg1EE_rd_reg494_shift                                      (16)
#define  SIW_RGBW_Rd_reg1EE_rd_reg495_shift                                      (0)
#define  SIW_RGBW_Rd_reg1EE_rd_reg494_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1EE_rd_reg495_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1EE_rd_reg494(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1EE_rd_reg495(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1EE_get_rd_reg494(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1EE_get_rd_reg495(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1F0                                                     0x1802B2E0
#define  SIW_RGBW_Rd_reg1F0_reg_addr                                             "0xB802B2E0"
#define  SIW_RGBW_Rd_reg1F0_reg                                                  0xB802B2E0
#define  SIW_RGBW_Rd_reg1F0_inst_addr                                            "0x00FC"
#define  set_SIW_RGBW_Rd_reg1F0_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1F0_reg)=data)
#define  get_SIW_RGBW_Rd_reg1F0_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1F0_reg))
#define  SIW_RGBW_Rd_reg1F0_rd_reg496_shift                                      (16)
#define  SIW_RGBW_Rd_reg1F0_rd_reg497_shift                                      (0)
#define  SIW_RGBW_Rd_reg1F0_rd_reg496_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1F0_rd_reg497_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1F0_rd_reg496(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1F0_rd_reg497(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1F0_get_rd_reg496(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1F0_get_rd_reg497(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1F2                                                     0x1802B2E4
#define  SIW_RGBW_Rd_reg1F2_reg_addr                                             "0xB802B2E4"
#define  SIW_RGBW_Rd_reg1F2_reg                                                  0xB802B2E4
#define  SIW_RGBW_Rd_reg1F2_inst_addr                                            "0x00FD"
#define  set_SIW_RGBW_Rd_reg1F2_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1F2_reg)=data)
#define  get_SIW_RGBW_Rd_reg1F2_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1F2_reg))
#define  SIW_RGBW_Rd_reg1F2_rd_reg498_shift                                      (16)
#define  SIW_RGBW_Rd_reg1F2_rd_reg499_shift                                      (0)
#define  SIW_RGBW_Rd_reg1F2_rd_reg498_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1F2_rd_reg499_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1F2_rd_reg498(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1F2_rd_reg499(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1F2_get_rd_reg498(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1F2_get_rd_reg499(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1F4                                                     0x1802B2E8
#define  SIW_RGBW_Rd_reg1F4_reg_addr                                             "0xB802B2E8"
#define  SIW_RGBW_Rd_reg1F4_reg                                                  0xB802B2E8
#define  SIW_RGBW_Rd_reg1F4_inst_addr                                            "0x00FE"
#define  set_SIW_RGBW_Rd_reg1F4_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1F4_reg)=data)
#define  get_SIW_RGBW_Rd_reg1F4_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1F4_reg))
#define  SIW_RGBW_Rd_reg1F4_rd_reg500_shift                                      (16)
#define  SIW_RGBW_Rd_reg1F4_rd_reg501_shift                                      (0)
#define  SIW_RGBW_Rd_reg1F4_rd_reg500_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1F4_rd_reg501_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1F4_rd_reg500(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1F4_rd_reg501(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1F4_get_rd_reg500(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1F4_get_rd_reg501(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1F6                                                     0x1802B2EC
#define  SIW_RGBW_Rd_reg1F6_reg_addr                                             "0xB802B2EC"
#define  SIW_RGBW_Rd_reg1F6_reg                                                  0xB802B2EC
#define  SIW_RGBW_Rd_reg1F6_inst_addr                                            "0x00FF"
#define  set_SIW_RGBW_Rd_reg1F6_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1F6_reg)=data)
#define  get_SIW_RGBW_Rd_reg1F6_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1F6_reg))
#define  SIW_RGBW_Rd_reg1F6_rd_reg502_shift                                      (16)
#define  SIW_RGBW_Rd_reg1F6_rd_reg503_shift                                      (0)
#define  SIW_RGBW_Rd_reg1F6_rd_reg502_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1F6_rd_reg503_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1F6_rd_reg502(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1F6_rd_reg503(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1F6_get_rd_reg502(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1F6_get_rd_reg503(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1F8                                                     0x1802B2F0
#define  SIW_RGBW_Rd_reg1F8_reg_addr                                             "0xB802B2F0"
#define  SIW_RGBW_Rd_reg1F8_reg                                                  0xB802B2F0
#define  SIW_RGBW_Rd_reg1F8_inst_addr                                            "0x0100"
#define  set_SIW_RGBW_Rd_reg1F8_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1F8_reg)=data)
#define  get_SIW_RGBW_Rd_reg1F8_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1F8_reg))
#define  SIW_RGBW_Rd_reg1F8_rd_reg504_shift                                      (16)
#define  SIW_RGBW_Rd_reg1F8_rd_reg505_shift                                      (0)
#define  SIW_RGBW_Rd_reg1F8_rd_reg504_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1F8_rd_reg505_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1F8_rd_reg504(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1F8_rd_reg505(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1F8_get_rd_reg504(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1F8_get_rd_reg505(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1FA                                                     0x1802B2F4
#define  SIW_RGBW_Rd_reg1FA_reg_addr                                             "0xB802B2F4"
#define  SIW_RGBW_Rd_reg1FA_reg                                                  0xB802B2F4
#define  SIW_RGBW_Rd_reg1FA_inst_addr                                            "0x0101"
#define  set_SIW_RGBW_Rd_reg1FA_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1FA_reg)=data)
#define  get_SIW_RGBW_Rd_reg1FA_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1FA_reg))
#define  SIW_RGBW_Rd_reg1FA_rd_reg506_shift                                      (16)
#define  SIW_RGBW_Rd_reg1FA_rd_reg507_shift                                      (0)
#define  SIW_RGBW_Rd_reg1FA_rd_reg506_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1FA_rd_reg507_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1FA_rd_reg506(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1FA_rd_reg507(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1FA_get_rd_reg506(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1FA_get_rd_reg507(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1FC                                                     0x1802B2F8
#define  SIW_RGBW_Rd_reg1FC_reg_addr                                             "0xB802B2F8"
#define  SIW_RGBW_Rd_reg1FC_reg                                                  0xB802B2F8
#define  SIW_RGBW_Rd_reg1FC_inst_addr                                            "0x0102"
#define  set_SIW_RGBW_Rd_reg1FC_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1FC_reg)=data)
#define  get_SIW_RGBW_Rd_reg1FC_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1FC_reg))
#define  SIW_RGBW_Rd_reg1FC_rd_reg508_shift                                      (16)
#define  SIW_RGBW_Rd_reg1FC_rd_reg509_shift                                      (0)
#define  SIW_RGBW_Rd_reg1FC_rd_reg508_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1FC_rd_reg509_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1FC_rd_reg508(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1FC_rd_reg509(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1FC_get_rd_reg508(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1FC_get_rd_reg509(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg1FE                                                     0x1802B2FC
#define  SIW_RGBW_Rd_reg1FE_reg_addr                                             "0xB802B2FC"
#define  SIW_RGBW_Rd_reg1FE_reg                                                  0xB802B2FC
#define  SIW_RGBW_Rd_reg1FE_inst_addr                                            "0x0103"
#define  set_SIW_RGBW_Rd_reg1FE_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg1FE_reg)=data)
#define  get_SIW_RGBW_Rd_reg1FE_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg1FE_reg))
#define  SIW_RGBW_Rd_reg1FE_rd_reg510_shift                                      (16)
#define  SIW_RGBW_Rd_reg1FE_rd_reg511_shift                                      (0)
#define  SIW_RGBW_Rd_reg1FE_rd_reg510_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg1FE_rd_reg511_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg1FE_rd_reg510(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg1FE_rd_reg511(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg1FE_get_rd_reg510(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg1FE_get_rd_reg511(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg200                                                     0x1802B300
#define  SIW_RGBW_Rd_reg200_reg_addr                                             "0xB802B300"
#define  SIW_RGBW_Rd_reg200_reg                                                  0xB802B300
#define  SIW_RGBW_Rd_reg200_inst_addr                                            "0x0104"
#define  set_SIW_RGBW_Rd_reg200_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg200_reg)=data)
#define  get_SIW_RGBW_Rd_reg200_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg200_reg))
#define  SIW_RGBW_Rd_reg200_rd_reg512_shift                                      (16)
#define  SIW_RGBW_Rd_reg200_rd_reg513_shift                                      (0)
#define  SIW_RGBW_Rd_reg200_rd_reg512_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg200_rd_reg513_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg200_rd_reg512(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg200_rd_reg513(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg200_get_rd_reg512(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg200_get_rd_reg513(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg202                                                     0x1802B304
#define  SIW_RGBW_Rd_reg202_reg_addr                                             "0xB802B304"
#define  SIW_RGBW_Rd_reg202_reg                                                  0xB802B304
#define  SIW_RGBW_Rd_reg202_inst_addr                                            "0x0105"
#define  set_SIW_RGBW_Rd_reg202_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg202_reg)=data)
#define  get_SIW_RGBW_Rd_reg202_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg202_reg))
#define  SIW_RGBW_Rd_reg202_rd_reg514_shift                                      (16)
#define  SIW_RGBW_Rd_reg202_rd_reg515_shift                                      (0)
#define  SIW_RGBW_Rd_reg202_rd_reg514_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg202_rd_reg515_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg202_rd_reg514(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg202_rd_reg515(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg202_get_rd_reg514(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg202_get_rd_reg515(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg204                                                     0x1802B308
#define  SIW_RGBW_Rd_reg204_reg_addr                                             "0xB802B308"
#define  SIW_RGBW_Rd_reg204_reg                                                  0xB802B308
#define  SIW_RGBW_Rd_reg204_inst_addr                                            "0x0106"
#define  set_SIW_RGBW_Rd_reg204_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg204_reg)=data)
#define  get_SIW_RGBW_Rd_reg204_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg204_reg))
#define  SIW_RGBW_Rd_reg204_rd_reg516_shift                                      (16)
#define  SIW_RGBW_Rd_reg204_rd_reg517_shift                                      (0)
#define  SIW_RGBW_Rd_reg204_rd_reg516_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg204_rd_reg517_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg204_rd_reg516(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg204_rd_reg517(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg204_get_rd_reg516(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg204_get_rd_reg517(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg206                                                     0x1802B30C
#define  SIW_RGBW_Rd_reg206_reg_addr                                             "0xB802B30C"
#define  SIW_RGBW_Rd_reg206_reg                                                  0xB802B30C
#define  SIW_RGBW_Rd_reg206_inst_addr                                            "0x0107"
#define  set_SIW_RGBW_Rd_reg206_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg206_reg)=data)
#define  get_SIW_RGBW_Rd_reg206_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg206_reg))
#define  SIW_RGBW_Rd_reg206_rd_reg518_shift                                      (16)
#define  SIW_RGBW_Rd_reg206_rd_reg519_shift                                      (0)
#define  SIW_RGBW_Rd_reg206_rd_reg518_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg206_rd_reg519_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg206_rd_reg518(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg206_rd_reg519(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg206_get_rd_reg518(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg206_get_rd_reg519(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg208                                                     0x1802B310
#define  SIW_RGBW_Rd_reg208_reg_addr                                             "0xB802B310"
#define  SIW_RGBW_Rd_reg208_reg                                                  0xB802B310
#define  SIW_RGBW_Rd_reg208_inst_addr                                            "0x0108"
#define  set_SIW_RGBW_Rd_reg208_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg208_reg)=data)
#define  get_SIW_RGBW_Rd_reg208_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg208_reg))
#define  SIW_RGBW_Rd_reg208_rd_reg520_shift                                      (16)
#define  SIW_RGBW_Rd_reg208_rd_reg521_shift                                      (0)
#define  SIW_RGBW_Rd_reg208_rd_reg520_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg208_rd_reg521_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg208_rd_reg520(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg208_rd_reg521(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg208_get_rd_reg520(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg208_get_rd_reg521(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg20A                                                     0x1802B314
#define  SIW_RGBW_Rd_reg20A_reg_addr                                             "0xB802B314"
#define  SIW_RGBW_Rd_reg20A_reg                                                  0xB802B314
#define  SIW_RGBW_Rd_reg20A_inst_addr                                            "0x0109"
#define  set_SIW_RGBW_Rd_reg20A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg20A_reg)=data)
#define  get_SIW_RGBW_Rd_reg20A_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg20A_reg))
#define  SIW_RGBW_Rd_reg20A_rd_reg522_shift                                      (16)
#define  SIW_RGBW_Rd_reg20A_rd_reg523_shift                                      (0)
#define  SIW_RGBW_Rd_reg20A_rd_reg522_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg20A_rd_reg523_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg20A_rd_reg522(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg20A_rd_reg523(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg20A_get_rd_reg522(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg20A_get_rd_reg523(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg20C                                                     0x1802B318
#define  SIW_RGBW_RD_reg20C_reg_addr                                             "0xB802B318"
#define  SIW_RGBW_RD_reg20C_reg                                                  0xB802B318
#define  SIW_RGBW_RD_reg20C_inst_addr                                            "0x010A"
#define  set_SIW_RGBW_RD_reg20C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg20C_reg)=data)
#define  get_SIW_RGBW_RD_reg20C_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg20C_reg))
#define  SIW_RGBW_RD_reg20C_rd_reg524_shift                                      (16)
#define  SIW_RGBW_RD_reg20C_rd_reg525_shift                                      (0)
#define  SIW_RGBW_RD_reg20C_rd_reg524_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg20C_rd_reg525_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg20C_rd_reg524(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg20C_rd_reg525(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg20C_get_rd_reg524(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg20C_get_rd_reg525(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg20E                                                     0x1802B31C
#define  SIW_RGBW_Rd_reg20E_reg_addr                                             "0xB802B31C"
#define  SIW_RGBW_Rd_reg20E_reg                                                  0xB802B31C
#define  SIW_RGBW_Rd_reg20E_inst_addr                                            "0x010B"
#define  set_SIW_RGBW_Rd_reg20E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg20E_reg)=data)
#define  get_SIW_RGBW_Rd_reg20E_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg20E_reg))
#define  SIW_RGBW_Rd_reg20E_rd_reg526_shift                                      (16)
#define  SIW_RGBW_Rd_reg20E_rd_reg527_shift                                      (0)
#define  SIW_RGBW_Rd_reg20E_rd_reg526_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg20E_rd_reg527_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg20E_rd_reg526(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg20E_rd_reg527(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg20E_get_rd_reg526(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg20E_get_rd_reg527(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg210                                                     0x1802B320
#define  SIW_RGBW_RD_reg210_reg_addr                                             "0xB802B320"
#define  SIW_RGBW_RD_reg210_reg                                                  0xB802B320
#define  SIW_RGBW_RD_reg210_inst_addr                                            "0x010C"
#define  set_SIW_RGBW_RD_reg210_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg210_reg)=data)
#define  get_SIW_RGBW_RD_reg210_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg210_reg))
#define  SIW_RGBW_RD_reg210_rd_reg528_shift                                      (16)
#define  SIW_RGBW_RD_reg210_rd_reg529_shift                                      (0)
#define  SIW_RGBW_RD_reg210_rd_reg528_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg210_rd_reg529_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg210_rd_reg528(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg210_rd_reg529(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg210_get_rd_reg528(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg210_get_rd_reg529(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg212                                                     0x1802B324
#define  SIW_RGBW_RD_reg212_reg_addr                                             "0xB802B324"
#define  SIW_RGBW_RD_reg212_reg                                                  0xB802B324
#define  SIW_RGBW_RD_reg212_inst_addr                                            "0x010D"
#define  set_SIW_RGBW_RD_reg212_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg212_reg)=data)
#define  get_SIW_RGBW_RD_reg212_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg212_reg))
#define  SIW_RGBW_RD_reg212_rd_reg530_shift                                      (16)
#define  SIW_RGBW_RD_reg212_rd_reg531_shift                                      (0)
#define  SIW_RGBW_RD_reg212_rd_reg530_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg212_rd_reg531_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg212_rd_reg530(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg212_rd_reg531(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg212_get_rd_reg530(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg212_get_rd_reg531(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg214                                                     0x1802B328
#define  SIW_RGBW_RD_reg214_reg_addr                                             "0xB802B328"
#define  SIW_RGBW_RD_reg214_reg                                                  0xB802B328
#define  SIW_RGBW_RD_reg214_inst_addr                                            "0x010E"
#define  set_SIW_RGBW_RD_reg214_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg214_reg)=data)
#define  get_SIW_RGBW_RD_reg214_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg214_reg))
#define  SIW_RGBW_RD_reg214_rd_reg532_shift                                      (16)
#define  SIW_RGBW_RD_reg214_rd_reg533_shift                                      (0)
#define  SIW_RGBW_RD_reg214_rd_reg532_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg214_rd_reg533_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg214_rd_reg532(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg214_rd_reg533(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg214_get_rd_reg532(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg214_get_rd_reg533(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg216                                                     0x1802B32C
#define  SIW_RGBW_RD_reg216_reg_addr                                             "0xB802B32C"
#define  SIW_RGBW_RD_reg216_reg                                                  0xB802B32C
#define  SIW_RGBW_RD_reg216_inst_addr                                            "0x010F"
#define  set_SIW_RGBW_RD_reg216_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg216_reg)=data)
#define  get_SIW_RGBW_RD_reg216_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg216_reg))
#define  SIW_RGBW_RD_reg216_rd_reg534_shift                                      (16)
#define  SIW_RGBW_RD_reg216_rd_reg535_shift                                      (0)
#define  SIW_RGBW_RD_reg216_rd_reg534_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg216_rd_reg535_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg216_rd_reg534(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg216_rd_reg535(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg216_get_rd_reg534(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg216_get_rd_reg535(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg218                                                     0x1802B330
#define  SIW_RGBW_RD_reg218_reg_addr                                             "0xB802B330"
#define  SIW_RGBW_RD_reg218_reg                                                  0xB802B330
#define  SIW_RGBW_RD_reg218_inst_addr                                            "0x0110"
#define  set_SIW_RGBW_RD_reg218_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg218_reg)=data)
#define  get_SIW_RGBW_RD_reg218_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg218_reg))
#define  SIW_RGBW_RD_reg218_rd_reg536_shift                                      (16)
#define  SIW_RGBW_RD_reg218_rd_reg537_shift                                      (0)
#define  SIW_RGBW_RD_reg218_rd_reg536_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg218_rd_reg537_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg218_rd_reg536(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg218_rd_reg537(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg218_get_rd_reg536(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg218_get_rd_reg537(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg21A                                                     0x1802B334
#define  SIW_RGBW_RD_reg21A_reg_addr                                             "0xB802B334"
#define  SIW_RGBW_RD_reg21A_reg                                                  0xB802B334
#define  SIW_RGBW_RD_reg21A_inst_addr                                            "0x0111"
#define  set_SIW_RGBW_RD_reg21A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg21A_reg)=data)
#define  get_SIW_RGBW_RD_reg21A_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg21A_reg))
#define  SIW_RGBW_RD_reg21A_rd_reg538_shift                                      (16)
#define  SIW_RGBW_RD_reg21A_rd_reg539_shift                                      (0)
#define  SIW_RGBW_RD_reg21A_rd_reg538_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg21A_rd_reg539_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg21A_rd_reg538(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg21A_rd_reg539(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg21A_get_rd_reg538(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg21A_get_rd_reg539(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg21C                                                     0x1802B338
#define  SIW_RGBW_RD_reg21C_reg_addr                                             "0xB802B338"
#define  SIW_RGBW_RD_reg21C_reg                                                  0xB802B338
#define  SIW_RGBW_RD_reg21C_inst_addr                                            "0x0112"
#define  set_SIW_RGBW_RD_reg21C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg21C_reg)=data)
#define  get_SIW_RGBW_RD_reg21C_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg21C_reg))
#define  SIW_RGBW_RD_reg21C_rd_reg540_shift                                      (16)
#define  SIW_RGBW_RD_reg21C_rd_reg541_shift                                      (0)
#define  SIW_RGBW_RD_reg21C_rd_reg540_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg21C_rd_reg541_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg21C_rd_reg540(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg21C_rd_reg541(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg21C_get_rd_reg540(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg21C_get_rd_reg541(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg21E                                                     0x1802B33C
#define  SIW_RGBW_RD_reg21E_reg_addr                                             "0xB802B33C"
#define  SIW_RGBW_RD_reg21E_reg                                                  0xB802B33C
#define  SIW_RGBW_RD_reg21E_inst_addr                                            "0x0113"
#define  set_SIW_RGBW_RD_reg21E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg21E_reg)=data)
#define  get_SIW_RGBW_RD_reg21E_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg21E_reg))
#define  SIW_RGBW_RD_reg21E_rd_reg542_shift                                      (16)
#define  SIW_RGBW_RD_reg21E_rd_reg543_shift                                      (0)
#define  SIW_RGBW_RD_reg21E_rd_reg542_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg21E_rd_reg543_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg21E_rd_reg542(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg21E_rd_reg543(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg21E_get_rd_reg542(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg21E_get_rd_reg543(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg220                                                     0x1802B340
#define  SIW_RGBW_RD_reg220_reg_addr                                             "0xB802B340"
#define  SIW_RGBW_RD_reg220_reg                                                  0xB802B340
#define  SIW_RGBW_RD_reg220_inst_addr                                            "0x0114"
#define  set_SIW_RGBW_RD_reg220_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg220_reg)=data)
#define  get_SIW_RGBW_RD_reg220_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg220_reg))
#define  SIW_RGBW_RD_reg220_rd_reg544_shift                                      (16)
#define  SIW_RGBW_RD_reg220_rd_reg545_shift                                      (0)
#define  SIW_RGBW_RD_reg220_rd_reg544_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg220_rd_reg545_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg220_rd_reg544(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg220_rd_reg545(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg220_get_rd_reg544(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg220_get_rd_reg545(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg222                                                     0x1802B344
#define  SIW_RGBW_RD_reg222_reg_addr                                             "0xB802B344"
#define  SIW_RGBW_RD_reg222_reg                                                  0xB802B344
#define  SIW_RGBW_RD_reg222_inst_addr                                            "0x0115"
#define  set_SIW_RGBW_RD_reg222_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg222_reg)=data)
#define  get_SIW_RGBW_RD_reg222_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg222_reg))
#define  SIW_RGBW_RD_reg222_rd_reg546_shift                                      (16)
#define  SIW_RGBW_RD_reg222_rd_reg547_shift                                      (0)
#define  SIW_RGBW_RD_reg222_rd_reg546_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg222_rd_reg547_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg222_rd_reg546(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg222_rd_reg547(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg222_get_rd_reg546(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg222_get_rd_reg547(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg224                                                     0x1802B348
#define  SIW_RGBW_RD_reg224_reg_addr                                             "0xB802B348"
#define  SIW_RGBW_RD_reg224_reg                                                  0xB802B348
#define  SIW_RGBW_RD_reg224_inst_addr                                            "0x0116"
#define  set_SIW_RGBW_RD_reg224_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg224_reg)=data)
#define  get_SIW_RGBW_RD_reg224_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg224_reg))
#define  SIW_RGBW_RD_reg224_rd_reg548_shift                                      (16)
#define  SIW_RGBW_RD_reg224_rd_reg549_shift                                      (0)
#define  SIW_RGBW_RD_reg224_rd_reg548_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg224_rd_reg549_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg224_rd_reg548(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg224_rd_reg549(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg224_get_rd_reg548(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg224_get_rd_reg549(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg226                                                     0x1802B34C
#define  SIW_RGBW_RD_reg226_reg_addr                                             "0xB802B34C"
#define  SIW_RGBW_RD_reg226_reg                                                  0xB802B34C
#define  SIW_RGBW_RD_reg226_inst_addr                                            "0x0117"
#define  set_SIW_RGBW_RD_reg226_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg226_reg)=data)
#define  get_SIW_RGBW_RD_reg226_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg226_reg))
#define  SIW_RGBW_RD_reg226_rd_reg550_shift                                      (16)
#define  SIW_RGBW_RD_reg226_rd_reg551_shift                                      (0)
#define  SIW_RGBW_RD_reg226_rd_reg550_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg226_rd_reg551_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg226_rd_reg550(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg226_rd_reg551(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg226_get_rd_reg550(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg226_get_rd_reg551(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg228                                                     0x1802B350
#define  SIW_RGBW_RD_reg228_reg_addr                                             "0xB802B350"
#define  SIW_RGBW_RD_reg228_reg                                                  0xB802B350
#define  SIW_RGBW_RD_reg228_inst_addr                                            "0x0118"
#define  set_SIW_RGBW_RD_reg228_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg228_reg)=data)
#define  get_SIW_RGBW_RD_reg228_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg228_reg))
#define  SIW_RGBW_RD_reg228_rd_reg552_shift                                      (16)
#define  SIW_RGBW_RD_reg228_rd_reg553_shift                                      (0)
#define  SIW_RGBW_RD_reg228_rd_reg552_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg228_rd_reg553_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg228_rd_reg552(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg228_rd_reg553(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg228_get_rd_reg552(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg228_get_rd_reg553(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg22A                                                     0x1802B354
#define  SIW_RGBW_RD_reg22A_reg_addr                                             "0xB802B354"
#define  SIW_RGBW_RD_reg22A_reg                                                  0xB802B354
#define  SIW_RGBW_RD_reg22A_inst_addr                                            "0x0119"
#define  set_SIW_RGBW_RD_reg22A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg22A_reg)=data)
#define  get_SIW_RGBW_RD_reg22A_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg22A_reg))
#define  SIW_RGBW_RD_reg22A_rd_reg554_shift                                      (16)
#define  SIW_RGBW_RD_reg22A_rd_reg555_shift                                      (0)
#define  SIW_RGBW_RD_reg22A_rd_reg554_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg22A_rd_reg555_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg22A_rd_reg554(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg22A_rd_reg555(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg22A_get_rd_reg554(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg22A_get_rd_reg555(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg22C                                                     0x1802B358
#define  SIW_RGBW_RD_reg22C_reg_addr                                             "0xB802B358"
#define  SIW_RGBW_RD_reg22C_reg                                                  0xB802B358
#define  SIW_RGBW_RD_reg22C_inst_addr                                            "0x011A"
#define  set_SIW_RGBW_RD_reg22C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg22C_reg)=data)
#define  get_SIW_RGBW_RD_reg22C_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg22C_reg))
#define  SIW_RGBW_RD_reg22C_rd_reg556_shift                                      (16)
#define  SIW_RGBW_RD_reg22C_rd_reg557_shift                                      (0)
#define  SIW_RGBW_RD_reg22C_rd_reg556_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg22C_rd_reg557_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg22C_rd_reg556(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg22C_rd_reg557(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg22C_get_rd_reg556(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg22C_get_rd_reg557(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg22E                                                     0x1802B35C
#define  SIW_RGBW_RD_reg22E_reg_addr                                             "0xB802B35C"
#define  SIW_RGBW_RD_reg22E_reg                                                  0xB802B35C
#define  SIW_RGBW_RD_reg22E_inst_addr                                            "0x011B"
#define  set_SIW_RGBW_RD_reg22E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg22E_reg)=data)
#define  get_SIW_RGBW_RD_reg22E_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg22E_reg))
#define  SIW_RGBW_RD_reg22E_rd_reg558_shift                                      (16)
#define  SIW_RGBW_RD_reg22E_rd_reg559_shift                                      (0)
#define  SIW_RGBW_RD_reg22E_rd_reg558_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg22E_rd_reg559_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg22E_rd_reg558(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg22E_rd_reg559(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg22E_get_rd_reg558(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg22E_get_rd_reg559(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg230                                                     0x1802B360
#define  SIW_RGBW_RD_reg230_reg_addr                                             "0xB802B360"
#define  SIW_RGBW_RD_reg230_reg                                                  0xB802B360
#define  SIW_RGBW_RD_reg230_inst_addr                                            "0x011C"
#define  set_SIW_RGBW_RD_reg230_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg230_reg)=data)
#define  get_SIW_RGBW_RD_reg230_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg230_reg))
#define  SIW_RGBW_RD_reg230_rd_reg560_shift                                      (16)
#define  SIW_RGBW_RD_reg230_rd_reg561_shift                                      (0)
#define  SIW_RGBW_RD_reg230_rd_reg560_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg230_rd_reg561_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg230_rd_reg560(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg230_rd_reg561(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg230_get_rd_reg560(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg230_get_rd_reg561(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg232                                                     0x1802B364
#define  SIW_RGBW_RD_reg232_reg_addr                                             "0xB802B364"
#define  SIW_RGBW_RD_reg232_reg                                                  0xB802B364
#define  SIW_RGBW_RD_reg232_inst_addr                                            "0x011D"
#define  set_SIW_RGBW_RD_reg232_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg232_reg)=data)
#define  get_SIW_RGBW_RD_reg232_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg232_reg))
#define  SIW_RGBW_RD_reg232_rd_reg562_shift                                      (16)
#define  SIW_RGBW_RD_reg232_rd_reg563_shift                                      (0)
#define  SIW_RGBW_RD_reg232_rd_reg562_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg232_rd_reg563_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg232_rd_reg562(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg232_rd_reg563(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg232_get_rd_reg562(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg232_get_rd_reg563(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg234                                                     0x1802B368
#define  SIW_RGBW_RD_reg234_reg_addr                                             "0xB802B368"
#define  SIW_RGBW_RD_reg234_reg                                                  0xB802B368
#define  SIW_RGBW_RD_reg234_inst_addr                                            "0x011E"
#define  set_SIW_RGBW_RD_reg234_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg234_reg)=data)
#define  get_SIW_RGBW_RD_reg234_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg234_reg))
#define  SIW_RGBW_RD_reg234_rd_reg564_shift                                      (16)
#define  SIW_RGBW_RD_reg234_rd_reg565_shift                                      (0)
#define  SIW_RGBW_RD_reg234_rd_reg564_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg234_rd_reg565_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg234_rd_reg564(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg234_rd_reg565(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg234_get_rd_reg564(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg234_get_rd_reg565(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg236                                                     0x1802B36C
#define  SIW_RGBW_RD_reg236_reg_addr                                             "0xB802B36C"
#define  SIW_RGBW_RD_reg236_reg                                                  0xB802B36C
#define  SIW_RGBW_RD_reg236_inst_addr                                            "0x011F"
#define  set_SIW_RGBW_RD_reg236_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg236_reg)=data)
#define  get_SIW_RGBW_RD_reg236_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg236_reg))
#define  SIW_RGBW_RD_reg236_rd_reg566_shift                                      (16)
#define  SIW_RGBW_RD_reg236_rd_reg567_shift                                      (0)
#define  SIW_RGBW_RD_reg236_rd_reg566_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg236_rd_reg567_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg236_rd_reg566(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg236_rd_reg567(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg236_get_rd_reg566(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg236_get_rd_reg567(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg238                                                     0x1802B370
#define  SIW_RGBW_RD_reg238_reg_addr                                             "0xB802B370"
#define  SIW_RGBW_RD_reg238_reg                                                  0xB802B370
#define  SIW_RGBW_RD_reg238_inst_addr                                            "0x0120"
#define  set_SIW_RGBW_RD_reg238_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg238_reg)=data)
#define  get_SIW_RGBW_RD_reg238_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg238_reg))
#define  SIW_RGBW_RD_reg238_rd_reg568_shift                                      (16)
#define  SIW_RGBW_RD_reg238_rd_reg569_shift                                      (0)
#define  SIW_RGBW_RD_reg238_rd_reg568_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg238_rd_reg569_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg238_rd_reg568(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg238_rd_reg569(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg238_get_rd_reg568(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg238_get_rd_reg569(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg23A                                                     0x1802B374
#define  SIW_RGBW_RD_reg23A_reg_addr                                             "0xB802B374"
#define  SIW_RGBW_RD_reg23A_reg                                                  0xB802B374
#define  SIW_RGBW_RD_reg23A_inst_addr                                            "0x0121"
#define  set_SIW_RGBW_RD_reg23A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg23A_reg)=data)
#define  get_SIW_RGBW_RD_reg23A_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg23A_reg))
#define  SIW_RGBW_RD_reg23A_rd_reg570_shift                                      (16)
#define  SIW_RGBW_RD_reg23A_rd_reg571_shift                                      (0)
#define  SIW_RGBW_RD_reg23A_rd_reg570_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg23A_rd_reg571_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg23A_rd_reg570(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg23A_rd_reg571(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg23A_get_rd_reg570(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg23A_get_rd_reg571(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg23C                                                     0x1802B378
#define  SIW_RGBW_RD_reg23C_reg_addr                                             "0xB802B378"
#define  SIW_RGBW_RD_reg23C_reg                                                  0xB802B378
#define  SIW_RGBW_RD_reg23C_inst_addr                                            "0x0122"
#define  set_SIW_RGBW_RD_reg23C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg23C_reg)=data)
#define  get_SIW_RGBW_RD_reg23C_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg23C_reg))
#define  SIW_RGBW_RD_reg23C_rd_reg572_shift                                      (16)
#define  SIW_RGBW_RD_reg23C_rd_reg573_shift                                      (0)
#define  SIW_RGBW_RD_reg23C_rd_reg572_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg23C_rd_reg573_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg23C_rd_reg572(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg23C_rd_reg573(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg23C_get_rd_reg572(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg23C_get_rd_reg573(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg23E                                                     0x1802B37C
#define  SIW_RGBW_RD_reg23E_reg_addr                                             "0xB802B37C"
#define  SIW_RGBW_RD_reg23E_reg                                                  0xB802B37C
#define  SIW_RGBW_RD_reg23E_inst_addr                                            "0x0123"
#define  set_SIW_RGBW_RD_reg23E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg23E_reg)=data)
#define  get_SIW_RGBW_RD_reg23E_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg23E_reg))
#define  SIW_RGBW_RD_reg23E_rd_reg574_shift                                      (16)
#define  SIW_RGBW_RD_reg23E_rd_reg575_shift                                      (0)
#define  SIW_RGBW_RD_reg23E_rd_reg574_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg23E_rd_reg575_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg23E_rd_reg574(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg23E_rd_reg575(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg23E_get_rd_reg574(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg23E_get_rd_reg575(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg240                                                     0x1802B380
#define  SIW_RGBW_RD_reg240_reg_addr                                             "0xB802B380"
#define  SIW_RGBW_RD_reg240_reg                                                  0xB802B380
#define  SIW_RGBW_RD_reg240_inst_addr                                            "0x0124"
#define  set_SIW_RGBW_RD_reg240_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg240_reg)=data)
#define  get_SIW_RGBW_RD_reg240_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg240_reg))
#define  SIW_RGBW_RD_reg240_rd_reg576_shift                                      (16)
#define  SIW_RGBW_RD_reg240_rd_reg577_shift                                      (0)
#define  SIW_RGBW_RD_reg240_rd_reg576_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg240_rd_reg577_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg240_rd_reg576(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg240_rd_reg577(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg240_get_rd_reg576(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg240_get_rd_reg577(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg242                                                     0x1802B384
#define  SIW_RGBW_RD_reg242_reg_addr                                             "0xB802B384"
#define  SIW_RGBW_RD_reg242_reg                                                  0xB802B384
#define  SIW_RGBW_RD_reg242_inst_addr                                            "0x0125"
#define  set_SIW_RGBW_RD_reg242_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg242_reg)=data)
#define  get_SIW_RGBW_RD_reg242_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg242_reg))
#define  SIW_RGBW_RD_reg242_rd_reg578_shift                                      (16)
#define  SIW_RGBW_RD_reg242_rd_reg579_shift                                      (0)
#define  SIW_RGBW_RD_reg242_rd_reg578_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg242_rd_reg579_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg242_rd_reg578(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg242_rd_reg579(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg242_get_rd_reg578(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg242_get_rd_reg579(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg244                                                     0x1802B388
#define  SIW_RGBW_RD_reg244_reg_addr                                             "0xB802B388"
#define  SIW_RGBW_RD_reg244_reg                                                  0xB802B388
#define  SIW_RGBW_RD_reg244_inst_addr                                            "0x0126"
#define  set_SIW_RGBW_RD_reg244_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg244_reg)=data)
#define  get_SIW_RGBW_RD_reg244_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg244_reg))
#define  SIW_RGBW_RD_reg244_rd_reg580_shift                                      (16)
#define  SIW_RGBW_RD_reg244_rd_reg581_shift                                      (0)
#define  SIW_RGBW_RD_reg244_rd_reg580_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg244_rd_reg581_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg244_rd_reg580(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg244_rd_reg581(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg244_get_rd_reg580(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg244_get_rd_reg581(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg246                                                     0x1802B38C
#define  SIW_RGBW_RD_reg246_reg_addr                                             "0xB802B38C"
#define  SIW_RGBW_RD_reg246_reg                                                  0xB802B38C
#define  SIW_RGBW_RD_reg246_inst_addr                                            "0x0127"
#define  set_SIW_RGBW_RD_reg246_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg246_reg)=data)
#define  get_SIW_RGBW_RD_reg246_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg246_reg))
#define  SIW_RGBW_RD_reg246_rd_reg582_shift                                      (16)
#define  SIW_RGBW_RD_reg246_rd_reg583_shift                                      (0)
#define  SIW_RGBW_RD_reg246_rd_reg582_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg246_rd_reg583_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg246_rd_reg582(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg246_rd_reg583(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg246_get_rd_reg582(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg246_get_rd_reg583(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg248                                                     0x1802B390
#define  SIW_RGBW_RD_reg248_reg_addr                                             "0xB802B390"
#define  SIW_RGBW_RD_reg248_reg                                                  0xB802B390
#define  SIW_RGBW_RD_reg248_inst_addr                                            "0x0128"
#define  set_SIW_RGBW_RD_reg248_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg248_reg)=data)
#define  get_SIW_RGBW_RD_reg248_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg248_reg))
#define  SIW_RGBW_RD_reg248_rd_reg584_shift                                      (16)
#define  SIW_RGBW_RD_reg248_rd_reg585_shift                                      (0)
#define  SIW_RGBW_RD_reg248_rd_reg584_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg248_rd_reg585_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg248_rd_reg584(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg248_rd_reg585(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg248_get_rd_reg584(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg248_get_rd_reg585(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg24A                                                     0x1802B394
#define  SIW_RGBW_RD_reg24A_reg_addr                                             "0xB802B394"
#define  SIW_RGBW_RD_reg24A_reg                                                  0xB802B394
#define  SIW_RGBW_RD_reg24A_inst_addr                                            "0x0129"
#define  set_SIW_RGBW_RD_reg24A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg24A_reg)=data)
#define  get_SIW_RGBW_RD_reg24A_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg24A_reg))
#define  SIW_RGBW_RD_reg24A_rd_reg586_shift                                      (16)
#define  SIW_RGBW_RD_reg24A_rd_reg587_shift                                      (0)
#define  SIW_RGBW_RD_reg24A_rd_reg586_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg24A_rd_reg587_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg24A_rd_reg586(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg24A_rd_reg587(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg24A_get_rd_reg586(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg24A_get_rd_reg587(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg24C                                                     0x1802B398
#define  SIW_RGBW_RD_reg24C_reg_addr                                             "0xB802B398"
#define  SIW_RGBW_RD_reg24C_reg                                                  0xB802B398
#define  SIW_RGBW_RD_reg24C_inst_addr                                            "0x012A"
#define  set_SIW_RGBW_RD_reg24C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg24C_reg)=data)
#define  get_SIW_RGBW_RD_reg24C_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg24C_reg))
#define  SIW_RGBW_RD_reg24C_rd_reg588_shift                                      (16)
#define  SIW_RGBW_RD_reg24C_rd_reg589_shift                                      (0)
#define  SIW_RGBW_RD_reg24C_rd_reg588_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg24C_rd_reg589_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg24C_rd_reg588(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg24C_rd_reg589(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg24C_get_rd_reg588(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg24C_get_rd_reg589(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg24E                                                     0x1802B39C
#define  SIW_RGBW_RD_reg24E_reg_addr                                             "0xB802B39C"
#define  SIW_RGBW_RD_reg24E_reg                                                  0xB802B39C
#define  SIW_RGBW_RD_reg24E_inst_addr                                            "0x012B"
#define  set_SIW_RGBW_RD_reg24E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg24E_reg)=data)
#define  get_SIW_RGBW_RD_reg24E_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg24E_reg))
#define  SIW_RGBW_RD_reg24E_rd_reg590_shift                                      (16)
#define  SIW_RGBW_RD_reg24E_rd_reg591_shift                                      (0)
#define  SIW_RGBW_RD_reg24E_rd_reg590_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg24E_rd_reg591_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg24E_rd_reg590(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg24E_rd_reg591(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg24E_get_rd_reg590(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg24E_get_rd_reg591(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg250                                                     0x1802B3A0
#define  SIW_RGBW_RD_reg250_reg_addr                                             "0xB802B3A0"
#define  SIW_RGBW_RD_reg250_reg                                                  0xB802B3A0
#define  SIW_RGBW_RD_reg250_inst_addr                                            "0x012C"
#define  set_SIW_RGBW_RD_reg250_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg250_reg)=data)
#define  get_SIW_RGBW_RD_reg250_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg250_reg))
#define  SIW_RGBW_RD_reg250_rd_reg592_shift                                      (16)
#define  SIW_RGBW_RD_reg250_rd_reg593_shift                                      (0)
#define  SIW_RGBW_RD_reg250_rd_reg592_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg250_rd_reg593_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg250_rd_reg592(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg250_rd_reg593(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg250_get_rd_reg592(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg250_get_rd_reg593(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg252                                                     0x1802B3A4
#define  SIW_RGBW_RD_reg252_reg_addr                                             "0xB802B3A4"
#define  SIW_RGBW_RD_reg252_reg                                                  0xB802B3A4
#define  SIW_RGBW_RD_reg252_inst_addr                                            "0x012D"
#define  set_SIW_RGBW_RD_reg252_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg252_reg)=data)
#define  get_SIW_RGBW_RD_reg252_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg252_reg))
#define  SIW_RGBW_RD_reg252_rd_reg594_shift                                      (16)
#define  SIW_RGBW_RD_reg252_rd_reg595_shift                                      (0)
#define  SIW_RGBW_RD_reg252_rd_reg594_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg252_rd_reg595_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg252_rd_reg594(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg252_rd_reg595(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg252_get_rd_reg594(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg252_get_rd_reg595(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg254                                                     0x1802B3A8
#define  SIW_RGBW_RD_reg254_reg_addr                                             "0xB802B3A8"
#define  SIW_RGBW_RD_reg254_reg                                                  0xB802B3A8
#define  SIW_RGBW_RD_reg254_inst_addr                                            "0x012E"
#define  set_SIW_RGBW_RD_reg254_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg254_reg)=data)
#define  get_SIW_RGBW_RD_reg254_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg254_reg))
#define  SIW_RGBW_RD_reg254_rd_reg596_shift                                      (16)
#define  SIW_RGBW_RD_reg254_rd_reg597_shift                                      (0)
#define  SIW_RGBW_RD_reg254_rd_reg596_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg254_rd_reg597_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg254_rd_reg596(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg254_rd_reg597(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg254_get_rd_reg596(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg254_get_rd_reg597(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg256                                                     0x1802B3AC
#define  SIW_RGBW_RD_reg256_reg_addr                                             "0xB802B3AC"
#define  SIW_RGBW_RD_reg256_reg                                                  0xB802B3AC
#define  SIW_RGBW_RD_reg256_inst_addr                                            "0x012F"
#define  set_SIW_RGBW_RD_reg256_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg256_reg)=data)
#define  get_SIW_RGBW_RD_reg256_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg256_reg))
#define  SIW_RGBW_RD_reg256_rd_reg598_shift                                      (16)
#define  SIW_RGBW_RD_reg256_rd_reg599_shift                                      (0)
#define  SIW_RGBW_RD_reg256_rd_reg598_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg256_rd_reg599_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg256_rd_reg598(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg256_rd_reg599(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg256_get_rd_reg598(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg256_get_rd_reg599(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg258                                                     0x1802B3B0
#define  SIW_RGBW_RD_reg258_reg_addr                                             "0xB802B3B0"
#define  SIW_RGBW_RD_reg258_reg                                                  0xB802B3B0
#define  SIW_RGBW_RD_reg258_inst_addr                                            "0x0130"
#define  set_SIW_RGBW_RD_reg258_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg258_reg)=data)
#define  get_SIW_RGBW_RD_reg258_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg258_reg))
#define  SIW_RGBW_RD_reg258_rd_reg600_shift                                      (16)
#define  SIW_RGBW_RD_reg258_rd_reg601_shift                                      (0)
#define  SIW_RGBW_RD_reg258_rd_reg600_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg258_rd_reg601_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg258_rd_reg600(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg258_rd_reg601(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg258_get_rd_reg600(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg258_get_rd_reg601(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg25A                                                     0x1802B3B4
#define  SIW_RGBW_RD_reg25A_reg_addr                                             "0xB802B3B4"
#define  SIW_RGBW_RD_reg25A_reg                                                  0xB802B3B4
#define  SIW_RGBW_RD_reg25A_inst_addr                                            "0x0131"
#define  set_SIW_RGBW_RD_reg25A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg25A_reg)=data)
#define  get_SIW_RGBW_RD_reg25A_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg25A_reg))
#define  SIW_RGBW_RD_reg25A_rd_reg602_shift                                      (16)
#define  SIW_RGBW_RD_reg25A_rd_reg603_shift                                      (0)
#define  SIW_RGBW_RD_reg25A_rd_reg602_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg25A_rd_reg603_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg25A_rd_reg602(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg25A_rd_reg603(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg25A_get_rd_reg602(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg25A_get_rd_reg603(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg25C                                                     0x1802B3B8
#define  SIW_RGBW_RD_reg25C_reg_addr                                             "0xB802B3B8"
#define  SIW_RGBW_RD_reg25C_reg                                                  0xB802B3B8
#define  SIW_RGBW_RD_reg25C_inst_addr                                            "0x0132"
#define  set_SIW_RGBW_RD_reg25C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg25C_reg)=data)
#define  get_SIW_RGBW_RD_reg25C_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg25C_reg))
#define  SIW_RGBW_RD_reg25C_rd_reg604_shift                                      (16)
#define  SIW_RGBW_RD_reg25C_rd_reg605_shift                                      (0)
#define  SIW_RGBW_RD_reg25C_rd_reg604_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg25C_rd_reg605_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg25C_rd_reg604(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg25C_rd_reg605(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg25C_get_rd_reg604(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg25C_get_rd_reg605(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg25E                                                     0x1802B3BC
#define  SIW_RGBW_RD_reg25E_reg_addr                                             "0xB802B3BC"
#define  SIW_RGBW_RD_reg25E_reg                                                  0xB802B3BC
#define  SIW_RGBW_RD_reg25E_inst_addr                                            "0x0133"
#define  set_SIW_RGBW_RD_reg25E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg25E_reg)=data)
#define  get_SIW_RGBW_RD_reg25E_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg25E_reg))
#define  SIW_RGBW_RD_reg25E_rd_reg606_shift                                      (16)
#define  SIW_RGBW_RD_reg25E_rd_reg607_shift                                      (0)
#define  SIW_RGBW_RD_reg25E_rd_reg606_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg25E_rd_reg607_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg25E_rd_reg606(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg25E_rd_reg607(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg25E_get_rd_reg606(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg25E_get_rd_reg607(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg260                                                     0x1802B3C0
#define  SIW_RGBW_RD_reg260_reg_addr                                             "0xB802B3C0"
#define  SIW_RGBW_RD_reg260_reg                                                  0xB802B3C0
#define  SIW_RGBW_RD_reg260_inst_addr                                            "0x0134"
#define  set_SIW_RGBW_RD_reg260_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg260_reg)=data)
#define  get_SIW_RGBW_RD_reg260_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg260_reg))
#define  SIW_RGBW_RD_reg260_rd_reg608_shift                                      (16)
#define  SIW_RGBW_RD_reg260_rd_reg609_shift                                      (0)
#define  SIW_RGBW_RD_reg260_rd_reg608_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg260_rd_reg609_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg260_rd_reg608(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg260_rd_reg609(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg260_get_rd_reg608(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg260_get_rd_reg609(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg262                                                     0x1802B3C4
#define  SIW_RGBW_RD_reg262_reg_addr                                             "0xB802B3C4"
#define  SIW_RGBW_RD_reg262_reg                                                  0xB802B3C4
#define  SIW_RGBW_RD_reg262_inst_addr                                            "0x0135"
#define  set_SIW_RGBW_RD_reg262_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg262_reg)=data)
#define  get_SIW_RGBW_RD_reg262_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg262_reg))
#define  SIW_RGBW_RD_reg262_rd_reg610_shift                                      (16)
#define  SIW_RGBW_RD_reg262_rd_reg611_shift                                      (0)
#define  SIW_RGBW_RD_reg262_rd_reg610_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg262_rd_reg611_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg262_rd_reg610(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg262_rd_reg611(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg262_get_rd_reg610(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg262_get_rd_reg611(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg264                                                     0x1802B3C8
#define  SIW_RGBW_RD_reg264_reg_addr                                             "0xB802B3C8"
#define  SIW_RGBW_RD_reg264_reg                                                  0xB802B3C8
#define  SIW_RGBW_RD_reg264_inst_addr                                            "0x0136"
#define  set_SIW_RGBW_RD_reg264_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg264_reg)=data)
#define  get_SIW_RGBW_RD_reg264_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg264_reg))
#define  SIW_RGBW_RD_reg264_rd_reg612_shift                                      (16)
#define  SIW_RGBW_RD_reg264_rd_reg613_shift                                      (0)
#define  SIW_RGBW_RD_reg264_rd_reg612_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg264_rd_reg613_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg264_rd_reg612(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg264_rd_reg613(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg264_get_rd_reg612(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg264_get_rd_reg613(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg266                                                     0x1802B3CC
#define  SIW_RGBW_RD_reg266_reg_addr                                             "0xB802B3CC"
#define  SIW_RGBW_RD_reg266_reg                                                  0xB802B3CC
#define  SIW_RGBW_RD_reg266_inst_addr                                            "0x0137"
#define  set_SIW_RGBW_RD_reg266_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg266_reg)=data)
#define  get_SIW_RGBW_RD_reg266_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg266_reg))
#define  SIW_RGBW_RD_reg266_rd_reg614_shift                                      (16)
#define  SIW_RGBW_RD_reg266_rd_reg615_shift                                      (0)
#define  SIW_RGBW_RD_reg266_rd_reg614_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg266_rd_reg615_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg266_rd_reg614(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg266_rd_reg615(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg266_get_rd_reg614(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg266_get_rd_reg615(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg268                                                     0x1802B3D0
#define  SIW_RGBW_RD_reg268_reg_addr                                             "0xB802B3D0"
#define  SIW_RGBW_RD_reg268_reg                                                  0xB802B3D0
#define  SIW_RGBW_RD_reg268_inst_addr                                            "0x0138"
#define  set_SIW_RGBW_RD_reg268_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg268_reg)=data)
#define  get_SIW_RGBW_RD_reg268_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg268_reg))
#define  SIW_RGBW_RD_reg268_rd_reg616_shift                                      (16)
#define  SIW_RGBW_RD_reg268_rd_reg617_shift                                      (0)
#define  SIW_RGBW_RD_reg268_rd_reg616_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg268_rd_reg617_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg268_rd_reg616(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg268_rd_reg617(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg268_get_rd_reg616(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg268_get_rd_reg617(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg26A                                                     0x1802B3D4
#define  SIW_RGBW_RD_reg26A_reg_addr                                             "0xB802B3D4"
#define  SIW_RGBW_RD_reg26A_reg                                                  0xB802B3D4
#define  SIW_RGBW_RD_reg26A_inst_addr                                            "0x0139"
#define  set_SIW_RGBW_RD_reg26A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg26A_reg)=data)
#define  get_SIW_RGBW_RD_reg26A_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg26A_reg))
#define  SIW_RGBW_RD_reg26A_rd_reg618_shift                                      (16)
#define  SIW_RGBW_RD_reg26A_rd_reg619_shift                                      (0)
#define  SIW_RGBW_RD_reg26A_rd_reg618_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg26A_rd_reg619_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg26A_rd_reg618(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg26A_rd_reg619(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg26A_get_rd_reg618(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg26A_get_rd_reg619(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg26C                                                     0x1802B3D8
#define  SIW_RGBW_RD_reg26C_reg_addr                                             "0xB802B3D8"
#define  SIW_RGBW_RD_reg26C_reg                                                  0xB802B3D8
#define  SIW_RGBW_RD_reg26C_inst_addr                                            "0x013A"
#define  set_SIW_RGBW_RD_reg26C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg26C_reg)=data)
#define  get_SIW_RGBW_RD_reg26C_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg26C_reg))
#define  SIW_RGBW_RD_reg26C_rd_reg620_shift                                      (16)
#define  SIW_RGBW_RD_reg26C_rd_reg621_shift                                      (0)
#define  SIW_RGBW_RD_reg26C_rd_reg620_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg26C_rd_reg621_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg26C_rd_reg620(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg26C_rd_reg621(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg26C_get_rd_reg620(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg26C_get_rd_reg621(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg26E                                                     0x1802B3DC
#define  SIW_RGBW_RD_reg26E_reg_addr                                             "0xB802B3DC"
#define  SIW_RGBW_RD_reg26E_reg                                                  0xB802B3DC
#define  SIW_RGBW_RD_reg26E_inst_addr                                            "0x013B"
#define  set_SIW_RGBW_RD_reg26E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg26E_reg)=data)
#define  get_SIW_RGBW_RD_reg26E_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg26E_reg))
#define  SIW_RGBW_RD_reg26E_rd_reg622_shift                                      (16)
#define  SIW_RGBW_RD_reg26E_rd_reg623_shift                                      (0)
#define  SIW_RGBW_RD_reg26E_rd_reg622_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg26E_rd_reg623_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg26E_rd_reg622(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg26E_rd_reg623(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg26E_get_rd_reg622(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg26E_get_rd_reg623(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg270                                                     0x1802B3E0
#define  SIW_RGBW_RD_reg270_reg_addr                                             "0xB802B3E0"
#define  SIW_RGBW_RD_reg270_reg                                                  0xB802B3E0
#define  SIW_RGBW_RD_reg270_inst_addr                                            "0x013C"
#define  set_SIW_RGBW_RD_reg270_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg270_reg)=data)
#define  get_SIW_RGBW_RD_reg270_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg270_reg))
#define  SIW_RGBW_RD_reg270_rd_reg624_shift                                      (16)
#define  SIW_RGBW_RD_reg270_rd_reg625_shift                                      (0)
#define  SIW_RGBW_RD_reg270_rd_reg624_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg270_rd_reg625_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg270_rd_reg624(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg270_rd_reg625(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg270_get_rd_reg624(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg270_get_rd_reg625(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg272                                                     0x1802B3E4
#define  SIW_RGBW_RD_reg272_reg_addr                                             "0xB802B3E4"
#define  SIW_RGBW_RD_reg272_reg                                                  0xB802B3E4
#define  SIW_RGBW_RD_reg272_inst_addr                                            "0x013D"
#define  set_SIW_RGBW_RD_reg272_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg272_reg)=data)
#define  get_SIW_RGBW_RD_reg272_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg272_reg))
#define  SIW_RGBW_RD_reg272_rd_reg626_shift                                      (16)
#define  SIW_RGBW_RD_reg272_rd_reg627_shift                                      (0)
#define  SIW_RGBW_RD_reg272_rd_reg626_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg272_rd_reg627_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg272_rd_reg626(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg272_rd_reg627(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg272_get_rd_reg626(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg272_get_rd_reg627(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg274                                                     0x1802B3E8
#define  SIW_RGBW_RD_reg274_reg_addr                                             "0xB802B3E8"
#define  SIW_RGBW_RD_reg274_reg                                                  0xB802B3E8
#define  SIW_RGBW_RD_reg274_inst_addr                                            "0x013E"
#define  set_SIW_RGBW_RD_reg274_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg274_reg)=data)
#define  get_SIW_RGBW_RD_reg274_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg274_reg))
#define  SIW_RGBW_RD_reg274_rd_reg628_shift                                      (16)
#define  SIW_RGBW_RD_reg274_rd_reg629_shift                                      (0)
#define  SIW_RGBW_RD_reg274_rd_reg628_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg274_rd_reg629_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg274_rd_reg628(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg274_rd_reg629(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg274_get_rd_reg628(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg274_get_rd_reg629(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg276                                                     0x1802B3EC
#define  SIW_RGBW_RD_reg276_reg_addr                                             "0xB802B3EC"
#define  SIW_RGBW_RD_reg276_reg                                                  0xB802B3EC
#define  SIW_RGBW_RD_reg276_inst_addr                                            "0x013F"
#define  set_SIW_RGBW_RD_reg276_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg276_reg)=data)
#define  get_SIW_RGBW_RD_reg276_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg276_reg))
#define  SIW_RGBW_RD_reg276_rd_reg630_shift                                      (16)
#define  SIW_RGBW_RD_reg276_rd_reg631_shift                                      (0)
#define  SIW_RGBW_RD_reg276_rd_reg630_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg276_rd_reg631_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg276_rd_reg630(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg276_rd_reg631(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg276_get_rd_reg630(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg276_get_rd_reg631(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg278                                                     0x1802B3F0
#define  SIW_RGBW_RD_reg278_reg_addr                                             "0xB802B3F0"
#define  SIW_RGBW_RD_reg278_reg                                                  0xB802B3F0
#define  SIW_RGBW_RD_reg278_inst_addr                                            "0x0140"
#define  set_SIW_RGBW_RD_reg278_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg278_reg)=data)
#define  get_SIW_RGBW_RD_reg278_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg278_reg))
#define  SIW_RGBW_RD_reg278_rd_reg632_shift                                      (16)
#define  SIW_RGBW_RD_reg278_rd_reg633_shift                                      (0)
#define  SIW_RGBW_RD_reg278_rd_reg632_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg278_rd_reg633_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg278_rd_reg632(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg278_rd_reg633(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg278_get_rd_reg632(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg278_get_rd_reg633(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg27A                                                     0x1802B3F4
#define  SIW_RGBW_RD_reg27A_reg_addr                                             "0xB802B3F4"
#define  SIW_RGBW_RD_reg27A_reg                                                  0xB802B3F4
#define  SIW_RGBW_RD_reg27A_inst_addr                                            "0x0141"
#define  set_SIW_RGBW_RD_reg27A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg27A_reg)=data)
#define  get_SIW_RGBW_RD_reg27A_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg27A_reg))
#define  SIW_RGBW_RD_reg27A_rd_reg634_shift                                      (16)
#define  SIW_RGBW_RD_reg27A_rd_reg635_shift                                      (0)
#define  SIW_RGBW_RD_reg27A_rd_reg634_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg27A_rd_reg635_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg27A_rd_reg634(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg27A_rd_reg635(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg27A_get_rd_reg634(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg27A_get_rd_reg635(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg27C                                                     0x1802B3F8
#define  SIW_RGBW_RD_reg27C_reg_addr                                             "0xB802B3F8"
#define  SIW_RGBW_RD_reg27C_reg                                                  0xB802B3F8
#define  SIW_RGBW_RD_reg27C_inst_addr                                            "0x0142"
#define  set_SIW_RGBW_RD_reg27C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg27C_reg)=data)
#define  get_SIW_RGBW_RD_reg27C_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg27C_reg))
#define  SIW_RGBW_RD_reg27C_rd_reg636_shift                                      (16)
#define  SIW_RGBW_RD_reg27C_rd_reg637_shift                                      (0)
#define  SIW_RGBW_RD_reg27C_rd_reg636_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg27C_rd_reg637_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg27C_rd_reg636(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg27C_rd_reg637(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg27C_get_rd_reg636(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg27C_get_rd_reg637(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_RD_reg27E                                                     0x1802B3FC
#define  SIW_RGBW_RD_reg27E_reg_addr                                             "0xB802B3FC"
#define  SIW_RGBW_RD_reg27E_reg                                                  0xB802B3FC
#define  SIW_RGBW_RD_reg27E_inst_addr                                            "0x0143"
#define  set_SIW_RGBW_RD_reg27E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_RD_reg27E_reg)=data)
#define  get_SIW_RGBW_RD_reg27E_reg                                              (*((volatile unsigned int*)SIW_RGBW_RD_reg27E_reg))
#define  SIW_RGBW_RD_reg27E_rd_reg638_shift                                      (16)
#define  SIW_RGBW_RD_reg27E_rd_reg639_shift                                      (0)
#define  SIW_RGBW_RD_reg27E_rd_reg638_mask                                       (0xFFFF0000)
#define  SIW_RGBW_RD_reg27E_rd_reg639_mask                                       (0x0000FFFF)
#define  SIW_RGBW_RD_reg27E_rd_reg638(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_RD_reg27E_rd_reg639(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_RD_reg27E_get_rd_reg638(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_RD_reg27E_get_rd_reg639(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg280                                                     0x1802B400
#define  SIW_RGBW_Rd_reg280_reg_addr                                             "0xB802B400"
#define  SIW_RGBW_Rd_reg280_reg                                                  0xB802B400
#define  SIW_RGBW_Rd_reg280_inst_addr                                            "0x0144"
#define  set_SIW_RGBW_Rd_reg280_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg280_reg)=data)
#define  get_SIW_RGBW_Rd_reg280_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg280_reg))
#define  SIW_RGBW_Rd_reg280_rd_reg640_shift                                      (16)
#define  SIW_RGBW_Rd_reg280_rd_reg641_shift                                      (0)
#define  SIW_RGBW_Rd_reg280_rd_reg640_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg280_rd_reg641_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg280_rd_reg640(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg280_rd_reg641(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg280_get_rd_reg640(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg280_get_rd_reg641(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg282                                                     0x1802B404
#define  SIW_RGBW_Rd_reg282_reg_addr                                             "0xB802B404"
#define  SIW_RGBW_Rd_reg282_reg                                                  0xB802B404
#define  SIW_RGBW_Rd_reg282_inst_addr                                            "0x0145"
#define  set_SIW_RGBW_Rd_reg282_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg282_reg)=data)
#define  get_SIW_RGBW_Rd_reg282_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg282_reg))
#define  SIW_RGBW_Rd_reg282_rd_reg642_shift                                      (16)
#define  SIW_RGBW_Rd_reg282_rd_reg643_shift                                      (0)
#define  SIW_RGBW_Rd_reg282_rd_reg642_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg282_rd_reg643_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg282_rd_reg642(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg282_rd_reg643(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg282_get_rd_reg642(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg282_get_rd_reg643(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg284                                                     0x1802B408
#define  SIW_RGBW_Rd_reg284_reg_addr                                             "0xB802B408"
#define  SIW_RGBW_Rd_reg284_reg                                                  0xB802B408
#define  SIW_RGBW_Rd_reg284_inst_addr                                            "0x0146"
#define  set_SIW_RGBW_Rd_reg284_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg284_reg)=data)
#define  get_SIW_RGBW_Rd_reg284_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg284_reg))
#define  SIW_RGBW_Rd_reg284_rd_reg644_shift                                      (16)
#define  SIW_RGBW_Rd_reg284_rd_reg645_shift                                      (0)
#define  SIW_RGBW_Rd_reg284_rd_reg644_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg284_rd_reg645_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg284_rd_reg644(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg284_rd_reg645(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg284_get_rd_reg644(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg284_get_rd_reg645(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg286                                                     0x1802B40C
#define  SIW_RGBW_Rd_reg286_reg_addr                                             "0xB802B40C"
#define  SIW_RGBW_Rd_reg286_reg                                                  0xB802B40C
#define  SIW_RGBW_Rd_reg286_inst_addr                                            "0x0147"
#define  set_SIW_RGBW_Rd_reg286_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg286_reg)=data)
#define  get_SIW_RGBW_Rd_reg286_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg286_reg))
#define  SIW_RGBW_Rd_reg286_rd_reg646_shift                                      (16)
#define  SIW_RGBW_Rd_reg286_rd_reg647_shift                                      (0)
#define  SIW_RGBW_Rd_reg286_rd_reg646_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg286_rd_reg647_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg286_rd_reg646(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg286_rd_reg647(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg286_get_rd_reg646(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg286_get_rd_reg647(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg288                                                     0x1802B410
#define  SIW_RGBW_Rd_reg288_reg_addr                                             "0xB802B410"
#define  SIW_RGBW_Rd_reg288_reg                                                  0xB802B410
#define  SIW_RGBW_Rd_reg288_inst_addr                                            "0x0148"
#define  set_SIW_RGBW_Rd_reg288_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg288_reg)=data)
#define  get_SIW_RGBW_Rd_reg288_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg288_reg))
#define  SIW_RGBW_Rd_reg288_rd_reg648_shift                                      (16)
#define  SIW_RGBW_Rd_reg288_rd_reg649_shift                                      (0)
#define  SIW_RGBW_Rd_reg288_rd_reg648_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg288_rd_reg649_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg288_rd_reg648(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg288_rd_reg649(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg288_get_rd_reg648(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg288_get_rd_reg649(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg28A                                                     0x1802B414
#define  SIW_RGBW_Rd_reg28A_reg_addr                                             "0xB802B414"
#define  SIW_RGBW_Rd_reg28A_reg                                                  0xB802B414
#define  SIW_RGBW_Rd_reg28A_inst_addr                                            "0x0149"
#define  set_SIW_RGBW_Rd_reg28A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg28A_reg)=data)
#define  get_SIW_RGBW_Rd_reg28A_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg28A_reg))
#define  SIW_RGBW_Rd_reg28A_rd_reg650_shift                                      (16)
#define  SIW_RGBW_Rd_reg28A_rd_reg651_shift                                      (0)
#define  SIW_RGBW_Rd_reg28A_rd_reg650_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg28A_rd_reg651_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg28A_rd_reg650(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg28A_rd_reg651(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg28A_get_rd_reg650(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg28A_get_rd_reg651(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg28C                                                     0x1802B418
#define  SIW_RGBW_Rd_reg28C_reg_addr                                             "0xB802B418"
#define  SIW_RGBW_Rd_reg28C_reg                                                  0xB802B418
#define  SIW_RGBW_Rd_reg28C_inst_addr                                            "0x014A"
#define  set_SIW_RGBW_Rd_reg28C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg28C_reg)=data)
#define  get_SIW_RGBW_Rd_reg28C_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg28C_reg))
#define  SIW_RGBW_Rd_reg28C_rd_reg652_shift                                      (16)
#define  SIW_RGBW_Rd_reg28C_rd_reg653_shift                                      (0)
#define  SIW_RGBW_Rd_reg28C_rd_reg652_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg28C_rd_reg653_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg28C_rd_reg652(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg28C_rd_reg653(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg28C_get_rd_reg652(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg28C_get_rd_reg653(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg28E                                                     0x1802B41C
#define  SIW_RGBW_Rd_reg28E_reg_addr                                             "0xB802B41C"
#define  SIW_RGBW_Rd_reg28E_reg                                                  0xB802B41C
#define  SIW_RGBW_Rd_reg28E_inst_addr                                            "0x014B"
#define  set_SIW_RGBW_Rd_reg28E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg28E_reg)=data)
#define  get_SIW_RGBW_Rd_reg28E_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg28E_reg))
#define  SIW_RGBW_Rd_reg28E_rd_reg654_shift                                      (16)
#define  SIW_RGBW_Rd_reg28E_rd_reg655_shift                                      (0)
#define  SIW_RGBW_Rd_reg28E_rd_reg654_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg28E_rd_reg655_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg28E_rd_reg654(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg28E_rd_reg655(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg28E_get_rd_reg654(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg28E_get_rd_reg655(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg290                                                     0x1802B420
#define  SIW_RGBW_Rd_reg290_reg_addr                                             "0xB802B420"
#define  SIW_RGBW_Rd_reg290_reg                                                  0xB802B420
#define  SIW_RGBW_Rd_reg290_inst_addr                                            "0x014C"
#define  set_SIW_RGBW_Rd_reg290_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg290_reg)=data)
#define  get_SIW_RGBW_Rd_reg290_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg290_reg))
#define  SIW_RGBW_Rd_reg290_rd_reg656_shift                                      (16)
#define  SIW_RGBW_Rd_reg290_rd_reg657_shift                                      (0)
#define  SIW_RGBW_Rd_reg290_rd_reg656_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg290_rd_reg657_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg290_rd_reg656(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg290_rd_reg657(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg290_get_rd_reg656(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg290_get_rd_reg657(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg292                                                     0x1802B424
#define  SIW_RGBW_Rd_reg292_reg_addr                                             "0xB802B424"
#define  SIW_RGBW_Rd_reg292_reg                                                  0xB802B424
#define  SIW_RGBW_Rd_reg292_inst_addr                                            "0x014D"
#define  set_SIW_RGBW_Rd_reg292_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg292_reg)=data)
#define  get_SIW_RGBW_Rd_reg292_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg292_reg))
#define  SIW_RGBW_Rd_reg292_rd_reg658_shift                                      (16)
#define  SIW_RGBW_Rd_reg292_rd_reg659_shift                                      (0)
#define  SIW_RGBW_Rd_reg292_rd_reg658_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg292_rd_reg659_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg292_rd_reg658(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg292_rd_reg659(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg292_get_rd_reg658(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg292_get_rd_reg659(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg294                                                     0x1802B428
#define  SIW_RGBW_Rd_reg294_reg_addr                                             "0xB802B428"
#define  SIW_RGBW_Rd_reg294_reg                                                  0xB802B428
#define  SIW_RGBW_Rd_reg294_inst_addr                                            "0x014E"
#define  set_SIW_RGBW_Rd_reg294_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg294_reg)=data)
#define  get_SIW_RGBW_Rd_reg294_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg294_reg))
#define  SIW_RGBW_Rd_reg294_rd_reg660_shift                                      (16)
#define  SIW_RGBW_Rd_reg294_rd_reg661_shift                                      (0)
#define  SIW_RGBW_Rd_reg294_rd_reg660_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg294_rd_reg661_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg294_rd_reg660(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg294_rd_reg661(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg294_get_rd_reg660(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg294_get_rd_reg661(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg296                                                     0x1802B42C
#define  SIW_RGBW_Rd_reg296_reg_addr                                             "0xB802B42C"
#define  SIW_RGBW_Rd_reg296_reg                                                  0xB802B42C
#define  SIW_RGBW_Rd_reg296_inst_addr                                            "0x014F"
#define  set_SIW_RGBW_Rd_reg296_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg296_reg)=data)
#define  get_SIW_RGBW_Rd_reg296_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg296_reg))
#define  SIW_RGBW_Rd_reg296_rd_reg662_shift                                      (16)
#define  SIW_RGBW_Rd_reg296_rd_reg663_shift                                      (0)
#define  SIW_RGBW_Rd_reg296_rd_reg662_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg296_rd_reg663_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg296_rd_reg662(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg296_rd_reg663(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg296_get_rd_reg662(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg296_get_rd_reg663(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg298                                                     0x1802B430
#define  SIW_RGBW_Rd_reg298_reg_addr                                             "0xB802B430"
#define  SIW_RGBW_Rd_reg298_reg                                                  0xB802B430
#define  SIW_RGBW_Rd_reg298_inst_addr                                            "0x0150"
#define  set_SIW_RGBW_Rd_reg298_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg298_reg)=data)
#define  get_SIW_RGBW_Rd_reg298_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg298_reg))
#define  SIW_RGBW_Rd_reg298_rd_reg664_shift                                      (16)
#define  SIW_RGBW_Rd_reg298_rd_reg665_shift                                      (0)
#define  SIW_RGBW_Rd_reg298_rd_reg664_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg298_rd_reg665_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg298_rd_reg664(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg298_rd_reg665(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg298_get_rd_reg664(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg298_get_rd_reg665(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg29A                                                     0x1802B434
#define  SIW_RGBW_Rd_reg29A_reg_addr                                             "0xB802B434"
#define  SIW_RGBW_Rd_reg29A_reg                                                  0xB802B434
#define  SIW_RGBW_Rd_reg29A_inst_addr                                            "0x0151"
#define  set_SIW_RGBW_Rd_reg29A_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg29A_reg)=data)
#define  get_SIW_RGBW_Rd_reg29A_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg29A_reg))
#define  SIW_RGBW_Rd_reg29A_rd_reg666_shift                                      (16)
#define  SIW_RGBW_Rd_reg29A_rd_reg667_shift                                      (0)
#define  SIW_RGBW_Rd_reg29A_rd_reg666_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg29A_rd_reg667_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg29A_rd_reg666(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg29A_rd_reg667(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg29A_get_rd_reg666(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg29A_get_rd_reg667(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg29C                                                     0x1802B438
#define  SIW_RGBW_Rd_reg29C_reg_addr                                             "0xB802B438"
#define  SIW_RGBW_Rd_reg29C_reg                                                  0xB802B438
#define  SIW_RGBW_Rd_reg29C_inst_addr                                            "0x0152"
#define  set_SIW_RGBW_Rd_reg29C_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg29C_reg)=data)
#define  get_SIW_RGBW_Rd_reg29C_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg29C_reg))
#define  SIW_RGBW_Rd_reg29C_rd_reg668_shift                                      (16)
#define  SIW_RGBW_Rd_reg29C_rd_reg669_shift                                      (0)
#define  SIW_RGBW_Rd_reg29C_rd_reg668_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg29C_rd_reg669_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg29C_rd_reg668(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg29C_rd_reg669(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg29C_get_rd_reg668(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg29C_get_rd_reg669(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg29E                                                     0x1802B43C
#define  SIW_RGBW_Rd_reg29E_reg_addr                                             "0xB802B43C"
#define  SIW_RGBW_Rd_reg29E_reg                                                  0xB802B43C
#define  SIW_RGBW_Rd_reg29E_inst_addr                                            "0x0153"
#define  set_SIW_RGBW_Rd_reg29E_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg29E_reg)=data)
#define  get_SIW_RGBW_Rd_reg29E_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg29E_reg))
#define  SIW_RGBW_Rd_reg29E_rd_reg670_shift                                      (16)
#define  SIW_RGBW_Rd_reg29E_rd_reg671_shift                                      (0)
#define  SIW_RGBW_Rd_reg29E_rd_reg670_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg29E_rd_reg671_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg29E_rd_reg670(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg29E_rd_reg671(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg29E_get_rd_reg670(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg29E_get_rd_reg671(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg2A0                                                     0x1802B440
#define  SIW_RGBW_Rd_reg2A0_reg_addr                                             "0xB802B440"
#define  SIW_RGBW_Rd_reg2A0_reg                                                  0xB802B440
#define  SIW_RGBW_Rd_reg2A0_inst_addr                                            "0x0154"
#define  set_SIW_RGBW_Rd_reg2A0_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg2A0_reg)=data)
#define  get_SIW_RGBW_Rd_reg2A0_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg2A0_reg))
#define  SIW_RGBW_Rd_reg2A0_rd_reg672_shift                                      (16)
#define  SIW_RGBW_Rd_reg2A0_rd_reg673_shift                                      (0)
#define  SIW_RGBW_Rd_reg2A0_rd_reg672_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg2A0_rd_reg673_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg2A0_rd_reg672(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg2A0_rd_reg673(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg2A0_get_rd_reg672(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg2A0_get_rd_reg673(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg2A2                                                     0x1802B444
#define  SIW_RGBW_Rd_reg2A2_reg_addr                                             "0xB802B444"
#define  SIW_RGBW_Rd_reg2A2_reg                                                  0xB802B444
#define  SIW_RGBW_Rd_reg2A2_inst_addr                                            "0x0155"
#define  set_SIW_RGBW_Rd_reg2A2_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg2A2_reg)=data)
#define  get_SIW_RGBW_Rd_reg2A2_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg2A2_reg))
#define  SIW_RGBW_Rd_reg2A2_rd_reg674_shift                                      (16)
#define  SIW_RGBW_Rd_reg2A2_rd_reg675_shift                                      (0)
#define  SIW_RGBW_Rd_reg2A2_rd_reg674_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg2A2_rd_reg675_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg2A2_rd_reg674(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg2A2_rd_reg675(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg2A2_get_rd_reg674(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg2A2_get_rd_reg675(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg2A4                                                     0x1802B448
#define  SIW_RGBW_Rd_reg2A4_reg_addr                                             "0xB802B448"
#define  SIW_RGBW_Rd_reg2A4_reg                                                  0xB802B448
#define  SIW_RGBW_Rd_reg2A4_inst_addr                                            "0x0156"
#define  set_SIW_RGBW_Rd_reg2A4_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg2A4_reg)=data)
#define  get_SIW_RGBW_Rd_reg2A4_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg2A4_reg))
#define  SIW_RGBW_Rd_reg2A4_rd_reg676_shift                                      (16)
#define  SIW_RGBW_Rd_reg2A4_rd_reg677_shift                                      (0)
#define  SIW_RGBW_Rd_reg2A4_rd_reg676_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg2A4_rd_reg677_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg2A4_rd_reg676(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg2A4_rd_reg677(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg2A4_get_rd_reg676(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg2A4_get_rd_reg677(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg2A6                                                     0x1802B44C
#define  SIW_RGBW_Rd_reg2A6_reg_addr                                             "0xB802B44C"
#define  SIW_RGBW_Rd_reg2A6_reg                                                  0xB802B44C
#define  SIW_RGBW_Rd_reg2A6_inst_addr                                            "0x0157"
#define  set_SIW_RGBW_Rd_reg2A6_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg2A6_reg)=data)
#define  get_SIW_RGBW_Rd_reg2A6_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg2A6_reg))
#define  SIW_RGBW_Rd_reg2A6_rd_reg678_shift                                      (16)
#define  SIW_RGBW_Rd_reg2A6_rd_reg679_shift                                      (0)
#define  SIW_RGBW_Rd_reg2A6_rd_reg678_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg2A6_rd_reg679_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg2A6_rd_reg678(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg2A6_rd_reg679(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg2A6_get_rd_reg678(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg2A6_get_rd_reg679(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg2A8                                                     0x1802B450
#define  SIW_RGBW_Rd_reg2A8_reg_addr                                             "0xB802B450"
#define  SIW_RGBW_Rd_reg2A8_reg                                                  0xB802B450
#define  SIW_RGBW_Rd_reg2A8_inst_addr                                            "0x0158"
#define  set_SIW_RGBW_Rd_reg2A8_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg2A8_reg)=data)
#define  get_SIW_RGBW_Rd_reg2A8_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg2A8_reg))
#define  SIW_RGBW_Rd_reg2A8_rd_reg680_shift                                      (16)
#define  SIW_RGBW_Rd_reg2A8_rd_reg681_shift                                      (0)
#define  SIW_RGBW_Rd_reg2A8_rd_reg680_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg2A8_rd_reg681_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg2A8_rd_reg680(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg2A8_rd_reg681(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg2A8_get_rd_reg680(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg2A8_get_rd_reg681(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg2AA                                                     0x1802B454
#define  SIW_RGBW_Rd_reg2AA_reg_addr                                             "0xB802B454"
#define  SIW_RGBW_Rd_reg2AA_reg                                                  0xB802B454
#define  SIW_RGBW_Rd_reg2AA_inst_addr                                            "0x0159"
#define  set_SIW_RGBW_Rd_reg2AA_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg2AA_reg)=data)
#define  get_SIW_RGBW_Rd_reg2AA_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg2AA_reg))
#define  SIW_RGBW_Rd_reg2AA_rd_reg682_shift                                      (16)
#define  SIW_RGBW_Rd_reg2AA_rd_reg683_shift                                      (0)
#define  SIW_RGBW_Rd_reg2AA_rd_reg682_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg2AA_rd_reg683_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg2AA_rd_reg682(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg2AA_rd_reg683(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg2AA_get_rd_reg682(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg2AA_get_rd_reg683(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg2AC                                                     0x1802B458
#define  SIW_RGBW_Rd_reg2AC_reg_addr                                             "0xB802B458"
#define  SIW_RGBW_Rd_reg2AC_reg                                                  0xB802B458
#define  SIW_RGBW_Rd_reg2AC_inst_addr                                            "0x015A"
#define  set_SIW_RGBW_Rd_reg2AC_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg2AC_reg)=data)
#define  get_SIW_RGBW_Rd_reg2AC_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg2AC_reg))
#define  SIW_RGBW_Rd_reg2AC_rd_reg684_shift                                      (16)
#define  SIW_RGBW_Rd_reg2AC_rd_reg685_shift                                      (0)
#define  SIW_RGBW_Rd_reg2AC_rd_reg684_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg2AC_rd_reg685_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg2AC_rd_reg684(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg2AC_rd_reg685(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg2AC_get_rd_reg684(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg2AC_get_rd_reg685(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg2AE                                                     0x1802B45C
#define  SIW_RGBW_Rd_reg2AE_reg_addr                                             "0xB802B45C"
#define  SIW_RGBW_Rd_reg2AE_reg                                                  0xB802B45C
#define  SIW_RGBW_Rd_reg2AE_inst_addr                                            "0x015B"
#define  set_SIW_RGBW_Rd_reg2AE_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg2AE_reg)=data)
#define  get_SIW_RGBW_Rd_reg2AE_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg2AE_reg))
#define  SIW_RGBW_Rd_reg2AE_rd_reg686_shift                                      (16)
#define  SIW_RGBW_Rd_reg2AE_rd_reg687_shift                                      (0)
#define  SIW_RGBW_Rd_reg2AE_rd_reg686_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg2AE_rd_reg687_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg2AE_rd_reg686(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg2AE_rd_reg687(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg2AE_get_rd_reg686(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg2AE_get_rd_reg687(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg2B0                                                     0x1802B460
#define  SIW_RGBW_Rd_reg2B0_reg_addr                                             "0xB802B460"
#define  SIW_RGBW_Rd_reg2B0_reg                                                  0xB802B460
#define  SIW_RGBW_Rd_reg2B0_inst_addr                                            "0x015C"
#define  set_SIW_RGBW_Rd_reg2B0_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg2B0_reg)=data)
#define  get_SIW_RGBW_Rd_reg2B0_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg2B0_reg))
#define  SIW_RGBW_Rd_reg2B0_rd_reg688_shift                                      (16)
#define  SIW_RGBW_Rd_reg2B0_rd_reg689_shift                                      (0)
#define  SIW_RGBW_Rd_reg2B0_rd_reg688_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg2B0_rd_reg689_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg2B0_rd_reg688(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg2B0_rd_reg689(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg2B0_get_rd_reg688(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg2B0_get_rd_reg689(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg2B2                                                     0x1802B464
#define  SIW_RGBW_Rd_reg2B2_reg_addr                                             "0xB802B464"
#define  SIW_RGBW_Rd_reg2B2_reg                                                  0xB802B464
#define  SIW_RGBW_Rd_reg2B2_inst_addr                                            "0x015D"
#define  set_SIW_RGBW_Rd_reg2B2_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg2B2_reg)=data)
#define  get_SIW_RGBW_Rd_reg2B2_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg2B2_reg))
#define  SIW_RGBW_Rd_reg2B2_rd_reg690_shift                                      (16)
#define  SIW_RGBW_Rd_reg2B2_rd_reg691_shift                                      (0)
#define  SIW_RGBW_Rd_reg2B2_rd_reg690_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg2B2_rd_reg691_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg2B2_rd_reg690(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg2B2_rd_reg691(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg2B2_get_rd_reg690(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg2B2_get_rd_reg691(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg2B4                                                     0x1802B468
#define  SIW_RGBW_Rd_reg2B4_reg_addr                                             "0xB802B468"
#define  SIW_RGBW_Rd_reg2B4_reg                                                  0xB802B468
#define  SIW_RGBW_Rd_reg2B4_inst_addr                                            "0x015E"
#define  set_SIW_RGBW_Rd_reg2B4_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg2B4_reg)=data)
#define  get_SIW_RGBW_Rd_reg2B4_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg2B4_reg))
#define  SIW_RGBW_Rd_reg2B4_rd_reg692_shift                                      (16)
#define  SIW_RGBW_Rd_reg2B4_rd_reg693_shift                                      (0)
#define  SIW_RGBW_Rd_reg2B4_rd_reg692_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg2B4_rd_reg693_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg2B4_rd_reg692(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg2B4_rd_reg693(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg2B4_get_rd_reg692(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg2B4_get_rd_reg693(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg2B6                                                     0x1802B46C
#define  SIW_RGBW_Rd_reg2B6_reg_addr                                             "0xB802B46C"
#define  SIW_RGBW_Rd_reg2B6_reg                                                  0xB802B46C
#define  SIW_RGBW_Rd_reg2B6_inst_addr                                            "0x015F"
#define  set_SIW_RGBW_Rd_reg2B6_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg2B6_reg)=data)
#define  get_SIW_RGBW_Rd_reg2B6_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg2B6_reg))
#define  SIW_RGBW_Rd_reg2B6_rd_reg694_shift                                      (16)
#define  SIW_RGBW_Rd_reg2B6_rd_reg695_shift                                      (0)
#define  SIW_RGBW_Rd_reg2B6_rd_reg694_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg2B6_rd_reg695_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg2B6_rd_reg694(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg2B6_rd_reg695(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg2B6_get_rd_reg694(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg2B6_get_rd_reg695(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg2B8                                                     0x1802B470
#define  SIW_RGBW_Rd_reg2B8_reg_addr                                             "0xB802B470"
#define  SIW_RGBW_Rd_reg2B8_reg                                                  0xB802B470
#define  SIW_RGBW_Rd_reg2B8_inst_addr                                            "0x0160"
#define  set_SIW_RGBW_Rd_reg2B8_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg2B8_reg)=data)
#define  get_SIW_RGBW_Rd_reg2B8_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg2B8_reg))
#define  SIW_RGBW_Rd_reg2B8_rd_reg696_shift                                      (16)
#define  SIW_RGBW_Rd_reg2B8_rd_reg697_shift                                      (0)
#define  SIW_RGBW_Rd_reg2B8_rd_reg696_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg2B8_rd_reg697_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg2B8_rd_reg696(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg2B8_rd_reg697(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg2B8_get_rd_reg696(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg2B8_get_rd_reg697(data)                                  (0x0000FFFF&(data))

#define  SIW_RGBW_Rd_reg2BA                                                     0x1802B474
#define  SIW_RGBW_Rd_reg2BA_reg_addr                                             "0xB802B474"
#define  SIW_RGBW_Rd_reg2BA_reg                                                  0xB802B474
#define  SIW_RGBW_Rd_reg2BA_inst_addr                                            "0x0161"
#define  set_SIW_RGBW_Rd_reg2BA_reg(data)                                        (*((volatile unsigned int*)SIW_RGBW_Rd_reg2BA_reg)=data)
#define  get_SIW_RGBW_Rd_reg2BA_reg                                              (*((volatile unsigned int*)SIW_RGBW_Rd_reg2BA_reg))
#define  SIW_RGBW_Rd_reg2BA_rd_reg698_shift                                      (16)
#define  SIW_RGBW_Rd_reg2BA_rd_reg699_shift                                      (0)
#define  SIW_RGBW_Rd_reg2BA_rd_reg698_mask                                       (0xFFFF0000)
#define  SIW_RGBW_Rd_reg2BA_rd_reg699_mask                                       (0x0000FFFF)
#define  SIW_RGBW_Rd_reg2BA_rd_reg698(data)                                      (0xFFFF0000&((data)<<16))
#define  SIW_RGBW_Rd_reg2BA_rd_reg699(data)                                      (0x0000FFFF&(data))
#define  SIW_RGBW_Rd_reg2BA_get_rd_reg698(data)                                  ((0xFFFF0000&(data))>>16)
#define  SIW_RGBW_Rd_reg2BA_get_rd_reg699(data)                                  (0x0000FFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======SIW_RGBW register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802af00_31_8:24;
        RBus_UInt32  hsync_cntr:5;
        RBus_UInt32  res1:3;
    };
}siw_rgbw_siw_rgbw_timing_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  wpr_on:1;
        RBus_UInt32  dga_picture_mode_sel:2;
        RBus_UInt32  picture_mode_sel:2;
        RBus_UInt32  res2:4;
    };
}siw_rgbw_siw_rgbw_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  ls_0:1;
        RBus_UInt32  ls_1:1;
        RBus_UInt32  rme_0:1;
        RBus_UInt32  rme_1:1;
        RBus_UInt32  rm_0:4;
        RBus_UInt32  rm_1:4;
    };
}siw_rgbw_siw_rgbw_rom_bist0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  bist_fail_0:1;
        RBus_UInt32  drf_bist_fail_0:1;
        RBus_UInt32  rme_2:1;
        RBus_UInt32  rm_2:4;
        RBus_UInt32  ls_2:1;
        RBus_UInt32  test1_0:1;
        RBus_UInt32  testrwm_0:1;
    };
}siw_rgbw_siw_rgbw_sram_bist0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg000:16;
        RBus_UInt32  rd_reg001:16;
    };
}siw_rgbw_rd_reg000_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg002:16;
        RBus_UInt32  rd_reg003:16;
    };
}siw_rgbw_rd_reg002_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg004:16;
        RBus_UInt32  rd_reg005:16;
    };
}siw_rgbw_rd_reg004_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg006:16;
        RBus_UInt32  rd_reg007:16;
    };
}siw_rgbw_rd_reg006_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg008:16;
        RBus_UInt32  rd_reg009:16;
    };
}siw_rgbw_rd_reg008_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg010:16;
        RBus_UInt32  rd_reg011:16;
    };
}siw_rgbw_rd_reg00a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg012:16;
        RBus_UInt32  rd_reg013:16;
    };
}siw_rgbw_rd_reg00c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg014:16;
        RBus_UInt32  rd_reg015:16;
    };
}siw_rgbw_rd_reg00e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg016:16;
        RBus_UInt32  rd_reg017:16;
    };
}siw_rgbw_rd_reg010_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg018:16;
        RBus_UInt32  rd_reg019:16;
    };
}siw_rgbw_rd_reg012_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg020:16;
        RBus_UInt32  rd_reg021:16;
    };
}siw_rgbw_rd_reg014_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg022:16;
        RBus_UInt32  rd_reg023:16;
    };
}siw_rgbw_rd_reg016_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg024:16;
        RBus_UInt32  rd_reg025:16;
    };
}siw_rgbw_rd_reg018_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg026:16;
        RBus_UInt32  rd_reg027:16;
    };
}siw_rgbw_rd_reg01a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg028:16;
        RBus_UInt32  rd_reg029:16;
    };
}siw_rgbw_rd_reg01c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg030:16;
        RBus_UInt32  rd_reg031:16;
    };
}siw_rgbw_rd_reg01e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg032:16;
        RBus_UInt32  rd_reg033:16;
    };
}siw_rgbw_rd_reg020_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg034:16;
        RBus_UInt32  rd_reg035:16;
    };
}siw_rgbw_rd_reg022_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg036:16;
        RBus_UInt32  rd_reg037:16;
    };
}siw_rgbw_rd_reg024_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg038:16;
        RBus_UInt32  rd_reg039:16;
    };
}siw_rgbw_rd_reg026_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg040:16;
        RBus_UInt32  rd_reg041:16;
    };
}siw_rgbw_rd_reg028_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg042:16;
        RBus_UInt32  rd_reg043:16;
    };
}siw_rgbw_rd_reg02a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg044:16;
        RBus_UInt32  rd_reg045:16;
    };
}siw_rgbw_rd_reg02c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg046:16;
        RBus_UInt32  rd_reg047:16;
    };
}siw_rgbw_rd_reg02e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg048:16;
        RBus_UInt32  rd_reg049:16;
    };
}siw_rgbw_rd_reg030_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg050:16;
        RBus_UInt32  rd_reg051:16;
    };
}siw_rgbw_rd_reg032_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg052:16;
        RBus_UInt32  rd_reg053:16;
    };
}siw_rgbw_rd_reg034_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg054:16;
        RBus_UInt32  rd_reg055:16;
    };
}siw_rgbw_rd_reg036_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg056:16;
        RBus_UInt32  rd_reg057:16;
    };
}siw_rgbw_rd_reg038_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg058:16;
        RBus_UInt32  rd_reg059:16;
    };
}siw_rgbw_rd_reg03a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg060:16;
        RBus_UInt32  rd_reg061:16;
    };
}siw_rgbw_rd_reg03c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg062:16;
        RBus_UInt32  rd_reg063:16;
    };
}siw_rgbw_rd_reg03e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg064:16;
        RBus_UInt32  rd_reg065:16;
    };
}siw_rgbw_rd_reg040_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg066:16;
        RBus_UInt32  rd_reg067:16;
    };
}siw_rgbw_rd_reg042_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg068:16;
        RBus_UInt32  rd_reg069:16;
    };
}siw_rgbw_rd_reg044_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg070:16;
        RBus_UInt32  rd_reg071:16;
    };
}siw_rgbw_rd_reg046_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg072:16;
        RBus_UInt32  rd_reg073:16;
    };
}siw_rgbw_rd_reg048_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg074:16;
        RBus_UInt32  rd_reg075:16;
    };
}siw_rgbw_rd_reg04a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg076:16;
        RBus_UInt32  rd_reg077:16;
    };
}siw_rgbw_rd_reg04c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg078:16;
        RBus_UInt32  rd_reg079:16;
    };
}siw_rgbw_rd_reg04e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg080:16;
        RBus_UInt32  rd_reg081:16;
    };
}siw_rgbw_rd_reg050_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg082:16;
        RBus_UInt32  rd_reg083:16;
    };
}siw_rgbw_rd_reg052_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg084:16;
        RBus_UInt32  rd_reg085:16;
    };
}siw_rgbw_rd_reg054_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg086:16;
        RBus_UInt32  rd_reg087:16;
    };
}siw_rgbw_rd_reg056_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg088:16;
        RBus_UInt32  rd_reg089:16;
    };
}siw_rgbw_rd_reg058_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg090:16;
        RBus_UInt32  rd_reg091:16;
    };
}siw_rgbw_rd_reg05a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg092:16;
        RBus_UInt32  rd_reg093:16;
    };
}siw_rgbw_rd_reg05c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg094:16;
        RBus_UInt32  rd_reg095:16;
    };
}siw_rgbw_rd_reg05e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg096:16;
        RBus_UInt32  rd_reg097:16;
    };
}siw_rgbw_rd_reg060_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg098:16;
        RBus_UInt32  rd_reg099:16;
    };
}siw_rgbw_rd_reg062_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg100:16;
        RBus_UInt32  rd_reg101:16;
    };
}siw_rgbw_rd_reg064_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg102:16;
        RBus_UInt32  rd_reg103:16;
    };
}siw_rgbw_rd_reg066_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg104:16;
        RBus_UInt32  rd_reg105:16;
    };
}siw_rgbw_rd_reg068_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg106:16;
        RBus_UInt32  rd_reg107:16;
    };
}siw_rgbw_rd_reg06a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg108:16;
        RBus_UInt32  rd_reg109:16;
    };
}siw_rgbw_rd_reg06c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg110:16;
        RBus_UInt32  rd_reg111:16;
    };
}siw_rgbw_rd_reg06e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg112:16;
        RBus_UInt32  rd_reg113:16;
    };
}siw_rgbw_rd_reg070_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg114:16;
        RBus_UInt32  rd_reg115:16;
    };
}siw_rgbw_rd_reg072_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg116:16;
        RBus_UInt32  rd_reg117:16;
    };
}siw_rgbw_rd_reg074_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg118:16;
        RBus_UInt32  rd_reg119:16;
    };
}siw_rgbw_rd_reg076_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg120:16;
        RBus_UInt32  rd_reg121:16;
    };
}siw_rgbw_rd_reg078_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg122:16;
        RBus_UInt32  rd_reg123:16;
    };
}siw_rgbw_rd_reg07a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg124:16;
        RBus_UInt32  rd_reg125:16;
    };
}siw_rgbw_rd_reg07c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg126:16;
        RBus_UInt32  rd_reg127:16;
    };
}siw_rgbw_rd_reg07e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg128:16;
        RBus_UInt32  rd_reg129:16;
    };
}siw_rgbw_rd_reg080_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg130:16;
        RBus_UInt32  rd_reg131:16;
    };
}siw_rgbw_rd_reg082_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg132:16;
        RBus_UInt32  rd_reg133:16;
    };
}siw_rgbw_rd_reg084_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg134:16;
        RBus_UInt32  rd_reg135:16;
    };
}siw_rgbw_rd_reg086_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg136:16;
        RBus_UInt32  rd_reg137:16;
    };
}siw_rgbw_rd_reg088_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg138:16;
        RBus_UInt32  rd_reg139:16;
    };
}siw_rgbw_rd_reg08a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg140:16;
        RBus_UInt32  rd_reg141:16;
    };
}siw_rgbw_rd_reg08c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg142:16;
        RBus_UInt32  rd_reg143:16;
    };
}siw_rgbw_rd_reg08e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg144:16;
        RBus_UInt32  rd_reg145:16;
    };
}siw_rgbw_rd_reg090_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg146:16;
        RBus_UInt32  rd_reg147:16;
    };
}siw_rgbw_rd_reg092_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg148:16;
        RBus_UInt32  rd_reg149:16;
    };
}siw_rgbw_rd_reg094_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg150:16;
        RBus_UInt32  rd_reg151:16;
    };
}siw_rgbw_rd_reg096_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg152:16;
        RBus_UInt32  rd_reg153:16;
    };
}siw_rgbw_rd_reg098_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg154:16;
        RBus_UInt32  rd_reg155:16;
    };
}siw_rgbw_rd_reg09a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg156:16;
        RBus_UInt32  rd_reg157:16;
    };
}siw_rgbw_rd_reg09c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg158:16;
        RBus_UInt32  rd_reg159:16;
    };
}siw_rgbw_rd_reg09e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg160:16;
        RBus_UInt32  rd_reg161:16;
    };
}siw_rgbw_rd_reg0a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg162:16;
        RBus_UInt32  rd_reg163:16;
    };
}siw_rgbw_rd_reg0a2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg164:16;
        RBus_UInt32  rd_reg165:16;
    };
}siw_rgbw_rd_reg0a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg166:16;
        RBus_UInt32  rd_reg167:16;
    };
}siw_rgbw_rd_reg0a6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg168:16;
        RBus_UInt32  rd_reg169:16;
    };
}siw_rgbw_rd_reg0a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg170:16;
        RBus_UInt32  rd_reg171:16;
    };
}siw_rgbw_rd_reg0aa_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg172:16;
        RBus_UInt32  rd_reg173:16;
    };
}siw_rgbw_rd_reg0ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg174:16;
        RBus_UInt32  rd_reg175:16;
    };
}siw_rgbw_rd_reg0ae_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg176:16;
        RBus_UInt32  rd_reg177:16;
    };
}siw_rgbw_rd_reg0b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg178:16;
        RBus_UInt32  rd_reg179:16;
    };
}siw_rgbw_rd_reg0b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg180:16;
        RBus_UInt32  rd_reg181:16;
    };
}siw_rgbw_rd_reg0b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg182:16;
        RBus_UInt32  rd_reg183:16;
    };
}siw_rgbw_rd_reg0b6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg184:16;
        RBus_UInt32  rd_reg185:16;
    };
}siw_rgbw_rd_reg0b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg186:16;
        RBus_UInt32  rd_reg187:16;
    };
}siw_rgbw_rd_reg0ba_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg188:16;
        RBus_UInt32  rd_reg189:16;
    };
}siw_rgbw_rd_reg0bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg190:16;
        RBus_UInt32  rd_reg191:16;
    };
}siw_rgbw_rd_reg0be_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg192:16;
        RBus_UInt32  rd_reg193:16;
    };
}siw_rgbw_rd_reg0c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg194:16;
        RBus_UInt32  rd_reg195:16;
    };
}siw_rgbw_rd_reg0c2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg196:16;
        RBus_UInt32  rd_reg197:16;
    };
}siw_rgbw_rd_reg0c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg198:16;
        RBus_UInt32  rd_reg199:16;
    };
}siw_rgbw_rd_reg0c6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg200:16;
        RBus_UInt32  rd_reg201:16;
    };
}siw_rgbw_rd_reg0c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg202:16;
        RBus_UInt32  rd_reg203:16;
    };
}siw_rgbw_rd_reg0ca_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg204:16;
        RBus_UInt32  rd_reg205:16;
    };
}siw_rgbw_rd_reg0cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg206:16;
        RBus_UInt32  rd_reg207:16;
    };
}siw_rgbw_rd_reg0ce_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg208:16;
        RBus_UInt32  rd_reg209:16;
    };
}siw_rgbw_rd_reg0d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg210:16;
        RBus_UInt32  rd_reg211:16;
    };
}siw_rgbw_rd_reg0d2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg212:16;
        RBus_UInt32  rd_reg213:16;
    };
}siw_rgbw_rd_reg0d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg214:16;
        RBus_UInt32  rd_reg215:16;
    };
}siw_rgbw_rd_reg0d6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg216:16;
        RBus_UInt32  rd_reg217:16;
    };
}siw_rgbw_rd_reg0d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg218:16;
        RBus_UInt32  rd_reg219:16;
    };
}siw_rgbw_rd_reg0da_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg220:16;
        RBus_UInt32  rd_reg221:16;
    };
}siw_rgbw_rd_reg0dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg222:16;
        RBus_UInt32  rd_reg223:16;
    };
}siw_rgbw_rd_reg0de_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg224:16;
        RBus_UInt32  rd_reg225:16;
    };
}siw_rgbw_rd_reg0e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg226:16;
        RBus_UInt32  rd_reg227:16;
    };
}siw_rgbw_rd_reg0e2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg228:16;
        RBus_UInt32  rd_reg229:16;
    };
}siw_rgbw_rd_reg0e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg230:16;
        RBus_UInt32  rd_reg231:16;
    };
}siw_rgbw_rd_reg0e6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg232:16;
        RBus_UInt32  rd_reg233:16;
    };
}siw_rgbw_rd_reg0e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg234:16;
        RBus_UInt32  rd_reg235:16;
    };
}siw_rgbw_rd_reg0ea_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg236:16;
        RBus_UInt32  rd_reg237:16;
    };
}siw_rgbw_rd_reg0ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg238:16;
        RBus_UInt32  rd_reg239:16;
    };
}siw_rgbw_rd_reg0ee_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg240:16;
        RBus_UInt32  rd_reg241:16;
    };
}siw_rgbw_rd_reg0f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg242:16;
        RBus_UInt32  rd_reg243:16;
    };
}siw_rgbw_rd_reg0f2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg244:16;
        RBus_UInt32  rd_reg245:16;
    };
}siw_rgbw_rd_reg0f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg246:16;
        RBus_UInt32  rd_reg247:16;
    };
}siw_rgbw_rd_reg0f6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg248:16;
        RBus_UInt32  rd_reg249:16;
    };
}siw_rgbw_rd_reg0f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg250:16;
        RBus_UInt32  rd_reg251:16;
    };
}siw_rgbw_rd_reg0fa_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg252:16;
        RBus_UInt32  rd_reg253:16;
    };
}siw_rgbw_rd_reg0fc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg254:16;
        RBus_UInt32  rd_reg255:16;
    };
}siw_rgbw_rd_reg0fe_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg256:16;
        RBus_UInt32  rd_reg257:16;
    };
}siw_rgbw_rd_reg100_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg258:16;
        RBus_UInt32  rd_reg259:16;
    };
}siw_rgbw_rd_reg102_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg260:16;
        RBus_UInt32  rd_reg261:16;
    };
}siw_rgbw_rd_reg104_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg262:16;
        RBus_UInt32  rd_reg263:16;
    };
}siw_rgbw_rd_reg106_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg264:16;
        RBus_UInt32  rd_reg265:16;
    };
}siw_rgbw_rd_reg108_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg266:16;
        RBus_UInt32  rd_reg267:16;
    };
}siw_rgbw_rd_reg10a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg268:16;
        RBus_UInt32  rd_reg269:16;
    };
}siw_rgbw_rd_reg10c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg270:16;
        RBus_UInt32  rd_reg271:16;
    };
}siw_rgbw_rd_reg10e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg272:16;
        RBus_UInt32  rd_reg273:16;
    };
}siw_rgbw_rd_reg110_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg274:16;
        RBus_UInt32  rd_reg275:16;
    };
}siw_rgbw_rd_reg112_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg276:16;
        RBus_UInt32  rd_reg277:16;
    };
}siw_rgbw_rd_reg114_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg278:16;
        RBus_UInt32  rd_reg279:16;
    };
}siw_rgbw_rd_reg116_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg280:16;
        RBus_UInt32  rd_reg281:16;
    };
}siw_rgbw_rd_reg118_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg282:16;
        RBus_UInt32  rd_reg283:16;
    };
}siw_rgbw_rd_reg11a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg284:16;
        RBus_UInt32  rd_reg285:16;
    };
}siw_rgbw_rd_reg11c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg286:16;
        RBus_UInt32  rd_reg287:16;
    };
}siw_rgbw_rd_reg11e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg288:16;
        RBus_UInt32  rd_reg289:16;
    };
}siw_rgbw_rd_reg120_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg290:16;
        RBus_UInt32  rd_reg291:16;
    };
}siw_rgbw_rd_reg122_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg292:16;
        RBus_UInt32  rd_reg293:16;
    };
}siw_rgbw_rd_reg124_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg294:16;
        RBus_UInt32  rd_reg295:16;
    };
}siw_rgbw_rd_reg126_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg296:16;
        RBus_UInt32  rd_reg297:16;
    };
}siw_rgbw_rd_reg128_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg298:16;
        RBus_UInt32  rd_reg299:16;
    };
}siw_rgbw_rd_reg12a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg300:16;
        RBus_UInt32  rd_reg301:16;
    };
}siw_rgbw_rd_reg12c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg302:16;
        RBus_UInt32  rd_reg303:16;
    };
}siw_rgbw_rd_reg12e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg304:16;
        RBus_UInt32  rd_reg305:16;
    };
}siw_rgbw_rd_reg130_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg306:16;
        RBus_UInt32  rd_reg307:16;
    };
}siw_rgbw_rd_reg132_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg308:16;
        RBus_UInt32  rd_reg309:16;
    };
}siw_rgbw_rd_reg134_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg310:16;
        RBus_UInt32  rd_reg311:16;
    };
}siw_rgbw_rd_reg136_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg312:16;
        RBus_UInt32  rd_reg313:16;
    };
}siw_rgbw_rd_reg138_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg314:16;
        RBus_UInt32  rd_reg315:16;
    };
}siw_rgbw_rd_reg13a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg316:16;
        RBus_UInt32  rd_reg317:16;
    };
}siw_rgbw_rd_reg13c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg318:16;
        RBus_UInt32  rd_reg319:16;
    };
}siw_rgbw_rd_reg13e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg320:16;
        RBus_UInt32  rd_reg321:16;
    };
}siw_rgbw_rd_reg140_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg322:16;
        RBus_UInt32  rd_reg323:16;
    };
}siw_rgbw_rd_reg142_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg324:16;
        RBus_UInt32  rd_reg325:16;
    };
}siw_rgbw_rd_reg144_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg326:16;
        RBus_UInt32  rd_reg327:16;
    };
}siw_rgbw_rd_reg146_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg328:16;
        RBus_UInt32  rd_reg329:16;
    };
}siw_rgbw_rd_reg148_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg330:16;
        RBus_UInt32  rd_reg331:16;
    };
}siw_rgbw_rd_reg14a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg332:16;
        RBus_UInt32  rd_reg333:16;
    };
}siw_rgbw_rd_reg14c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg334:16;
        RBus_UInt32  rd_reg335:16;
    };
}siw_rgbw_rd_reg14e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg336:16;
        RBus_UInt32  rd_reg337:16;
    };
}siw_rgbw_rd_reg150_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg338:16;
        RBus_UInt32  rd_reg339:16;
    };
}siw_rgbw_rd_reg152_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg340:16;
        RBus_UInt32  rd_reg341:16;
    };
}siw_rgbw_rd_reg154_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg342:16;
        RBus_UInt32  rd_reg343:16;
    };
}siw_rgbw_rd_reg156_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg344:16;
        RBus_UInt32  rd_reg345:16;
    };
}siw_rgbw_rd_reg158_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg346:16;
        RBus_UInt32  rd_reg347:16;
    };
}siw_rgbw_rd_reg15a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg348:16;
        RBus_UInt32  rd_reg349:16;
    };
}siw_rgbw_rd_reg15c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg350:16;
        RBus_UInt32  rd_reg351:16;
    };
}siw_rgbw_rd_reg15e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg352:16;
        RBus_UInt32  rd_reg353:16;
    };
}siw_rgbw_rd_reg160_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg354:16;
        RBus_UInt32  rd_reg355:16;
    };
}siw_rgbw_rd_reg162_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg356:16;
        RBus_UInt32  rd_reg357:16;
    };
}siw_rgbw_rd_reg164_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg358:16;
        RBus_UInt32  rd_reg359:16;
    };
}siw_rgbw_rd_reg166_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg360:16;
        RBus_UInt32  rd_reg361:16;
    };
}siw_rgbw_rd_reg168_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg362:16;
        RBus_UInt32  rd_reg363:16;
    };
}siw_rgbw_rd_reg16a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg364:16;
        RBus_UInt32  rd_reg365:16;
    };
}siw_rgbw_rd_reg16c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg366:16;
        RBus_UInt32  rd_reg367:16;
    };
}siw_rgbw_rd_reg16e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg368:16;
        RBus_UInt32  rd_reg369:16;
    };
}siw_rgbw_rd_reg170_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg370:16;
        RBus_UInt32  rd_reg371:16;
    };
}siw_rgbw_rd_reg172_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg372:16;
        RBus_UInt32  rd_reg373:16;
    };
}siw_rgbw_rd_reg174_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg374:16;
        RBus_UInt32  rd_reg375:16;
    };
}siw_rgbw_rd_reg176_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg376:16;
        RBus_UInt32  rd_reg377:16;
    };
}siw_rgbw_rd_reg178_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg378:16;
        RBus_UInt32  rd_reg379:16;
    };
}siw_rgbw_rd_reg17a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg380:16;
        RBus_UInt32  rd_reg381:16;
    };
}siw_rgbw_rd_reg17c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg382:16;
        RBus_UInt32  rd_reg383:16;
    };
}siw_rgbw_rd_reg17e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg384:16;
        RBus_UInt32  rd_reg385:16;
    };
}siw_rgbw_rd_reg180_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg386:16;
        RBus_UInt32  rd_reg387:16;
    };
}siw_rgbw_rd_reg182_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg388:16;
        RBus_UInt32  rd_reg389:16;
    };
}siw_rgbw_rd_reg184_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg390:16;
        RBus_UInt32  rd_reg391:16;
    };
}siw_rgbw_rd_reg186_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg392:16;
        RBus_UInt32  rd_reg393:16;
    };
}siw_rgbw_rd_reg188_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg394:16;
        RBus_UInt32  rd_reg395:16;
    };
}siw_rgbw_rd_reg18a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg396:16;
        RBus_UInt32  rd_reg397:16;
    };
}siw_rgbw_rd_reg18c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg398:16;
        RBus_UInt32  rd_reg399:16;
    };
}siw_rgbw_rd_reg18e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg400:16;
        RBus_UInt32  rd_reg401:16;
    };
}siw_rgbw_rd_reg190_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg402:16;
        RBus_UInt32  rd_reg403:16;
    };
}siw_rgbw_rd_reg192_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg404:16;
        RBus_UInt32  rd_reg405:16;
    };
}siw_rgbw_rd_reg194_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg406:16;
        RBus_UInt32  rd_reg407:16;
    };
}siw_rgbw_rd_reg196_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg408:16;
        RBus_UInt32  rd_reg409:16;
    };
}siw_rgbw_rd_reg198_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg410:16;
        RBus_UInt32  rd_reg411:16;
    };
}siw_rgbw_rd_reg19a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg412:16;
        RBus_UInt32  rd_reg413:16;
    };
}siw_rgbw_rd_reg19c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg414:16;
        RBus_UInt32  rd_reg415:16;
    };
}siw_rgbw_rd_reg19e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg416:16;
        RBus_UInt32  rd_reg417:16;
    };
}siw_rgbw_rd_reg1a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg418:16;
        RBus_UInt32  rd_reg419:16;
    };
}siw_rgbw_rd_reg1a2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg420:16;
        RBus_UInt32  rd_reg421:16;
    };
}siw_rgbw_rd_reg1a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg422:16;
        RBus_UInt32  rd_reg423:16;
    };
}siw_rgbw_rd_reg1a6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg424:16;
        RBus_UInt32  rd_reg425:16;
    };
}siw_rgbw_rd_reg1a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg426:16;
        RBus_UInt32  rd_reg427:16;
    };
}siw_rgbw_rd_reg1aa_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg428:16;
        RBus_UInt32  rd_reg429:16;
    };
}siw_rgbw_rd_reg1ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg430:16;
        RBus_UInt32  rd_reg431:16;
    };
}siw_rgbw_rd_reg1ae_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg432:16;
        RBus_UInt32  rd_reg433:16;
    };
}siw_rgbw_rd_reg1b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg434:16;
        RBus_UInt32  rd_reg435:16;
    };
}siw_rgbw_rd_reg1b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg436:16;
        RBus_UInt32  rd_reg437:16;
    };
}siw_rgbw_rd_reg1b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg438:16;
        RBus_UInt32  rd_reg439:16;
    };
}siw_rgbw_rd_reg1b6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg440:16;
        RBus_UInt32  rd_reg441:16;
    };
}siw_rgbw_rd_reg1b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg442:16;
        RBus_UInt32  rd_reg443:16;
    };
}siw_rgbw_rd_reg1ba_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg444:16;
        RBus_UInt32  rd_reg445:16;
    };
}siw_rgbw_rd_reg1bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg446:16;
        RBus_UInt32  rd_reg447:16;
    };
}siw_rgbw_rd_reg1be_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg448:16;
        RBus_UInt32  rd_reg449:16;
    };
}siw_rgbw_rd_reg1c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg450:16;
        RBus_UInt32  rd_reg451:16;
    };
}siw_rgbw_rd_reg1c2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg452:16;
        RBus_UInt32  rd_reg453:16;
    };
}siw_rgbw_rd_reg1c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg454:16;
        RBus_UInt32  rd_reg455:16;
    };
}siw_rgbw_rd_reg1c6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg456:16;
        RBus_UInt32  rd_reg457:16;
    };
}siw_rgbw_rd_reg1c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg458:16;
        RBus_UInt32  rd_reg459:16;
    };
}siw_rgbw_rd_reg1ca_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg460:16;
        RBus_UInt32  rd_reg461:16;
    };
}siw_rgbw_rd_reg1cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg462:16;
        RBus_UInt32  rd_reg463:16;
    };
}siw_rgbw_rd_reg1ce_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg464:16;
        RBus_UInt32  rd_reg465:16;
    };
}siw_rgbw_rd_reg1d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg466:16;
        RBus_UInt32  rd_reg467:16;
    };
}siw_rgbw_rd_reg1d2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg468:16;
        RBus_UInt32  rd_reg469:16;
    };
}siw_rgbw_rd_reg1d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg470:16;
        RBus_UInt32  rd_reg471:16;
    };
}siw_rgbw_rd_reg1d6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg472:16;
        RBus_UInt32  rd_reg473:16;
    };
}siw_rgbw_rd_reg1d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg474:16;
        RBus_UInt32  rd_reg475:16;
    };
}siw_rgbw_rd_reg1da_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg476:16;
        RBus_UInt32  rd_reg477:16;
    };
}siw_rgbw_rd_reg1dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg478:16;
        RBus_UInt32  rd_reg479:16;
    };
}siw_rgbw_rd_reg1de_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg480:16;
        RBus_UInt32  rd_reg481:16;
    };
}siw_rgbw_rd_reg1e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg482:16;
        RBus_UInt32  rd_reg483:16;
    };
}siw_rgbw_rd_reg1e2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg484:16;
        RBus_UInt32  rd_reg485:16;
    };
}siw_rgbw_rd_reg1e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg486:16;
        RBus_UInt32  rd_reg487:16;
    };
}siw_rgbw_rd_reg1e6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg488:16;
        RBus_UInt32  rd_reg489:16;
    };
}siw_rgbw_rd_reg1e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg490:16;
        RBus_UInt32  rd_reg491:16;
    };
}siw_rgbw_rd_reg1ea_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg492:16;
        RBus_UInt32  rd_reg493:16;
    };
}siw_rgbw_rd_reg1ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg494:16;
        RBus_UInt32  rd_reg495:16;
    };
}siw_rgbw_rd_reg1ee_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg496:16;
        RBus_UInt32  rd_reg497:16;
    };
}siw_rgbw_rd_reg1f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg498:16;
        RBus_UInt32  rd_reg499:16;
    };
}siw_rgbw_rd_reg1f2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg500:16;
        RBus_UInt32  rd_reg501:16;
    };
}siw_rgbw_rd_reg1f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg502:16;
        RBus_UInt32  rd_reg503:16;
    };
}siw_rgbw_rd_reg1f6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg504:16;
        RBus_UInt32  rd_reg505:16;
    };
}siw_rgbw_rd_reg1f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg506:16;
        RBus_UInt32  rd_reg507:16;
    };
}siw_rgbw_rd_reg1fa_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg508:16;
        RBus_UInt32  rd_reg509:16;
    };
}siw_rgbw_rd_reg1fc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg510:16;
        RBus_UInt32  rd_reg511:16;
    };
}siw_rgbw_rd_reg1fe_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg512:16;
        RBus_UInt32  rd_reg513:16;
    };
}siw_rgbw_rd_reg200_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg514:16;
        RBus_UInt32  rd_reg515:16;
    };
}siw_rgbw_rd_reg202_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg516:16;
        RBus_UInt32  rd_reg517:16;
    };
}siw_rgbw_rd_reg204_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg518:16;
        RBus_UInt32  rd_reg519:16;
    };
}siw_rgbw_rd_reg206_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg520:16;
        RBus_UInt32  rd_reg521:16;
    };
}siw_rgbw_rd_reg208_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg522:16;
        RBus_UInt32  rd_reg523:16;
    };
}siw_rgbw_rd_reg20a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg524:16;
        RBus_UInt32  rd_reg525:16;
    };
}siw_rgbw_rd_reg20c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg526:16;
        RBus_UInt32  rd_reg527:16;
    };
}siw_rgbw_rd_reg20e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg528:16;
        RBus_UInt32  rd_reg529:16;
    };
}siw_rgbw_rd_reg210_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg530:16;
        RBus_UInt32  rd_reg531:16;
    };
}siw_rgbw_rd_reg212_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg532:16;
        RBus_UInt32  rd_reg533:16;
    };
}siw_rgbw_rd_reg214_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg534:16;
        RBus_UInt32  rd_reg535:16;
    };
}siw_rgbw_rd_reg216_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg536:16;
        RBus_UInt32  rd_reg537:16;
    };
}siw_rgbw_rd_reg218_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg538:16;
        RBus_UInt32  rd_reg539:16;
    };
}siw_rgbw_rd_reg21a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg540:16;
        RBus_UInt32  rd_reg541:16;
    };
}siw_rgbw_rd_reg21c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg542:16;
        RBus_UInt32  rd_reg543:16;
    };
}siw_rgbw_rd_reg21e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg544:16;
        RBus_UInt32  rd_reg545:16;
    };
}siw_rgbw_rd_reg220_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg546:16;
        RBus_UInt32  rd_reg547:16;
    };
}siw_rgbw_rd_reg222_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg548:16;
        RBus_UInt32  rd_reg549:16;
    };
}siw_rgbw_rd_reg224_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg550:16;
        RBus_UInt32  rd_reg551:16;
    };
}siw_rgbw_rd_reg226_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg552:16;
        RBus_UInt32  rd_reg553:16;
    };
}siw_rgbw_rd_reg228_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg554:16;
        RBus_UInt32  rd_reg555:16;
    };
}siw_rgbw_rd_reg22a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg556:16;
        RBus_UInt32  rd_reg557:16;
    };
}siw_rgbw_rd_reg22c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg558:16;
        RBus_UInt32  rd_reg559:16;
    };
}siw_rgbw_rd_reg22e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg560:16;
        RBus_UInt32  rd_reg561:16;
    };
}siw_rgbw_rd_reg230_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg562:16;
        RBus_UInt32  rd_reg563:16;
    };
}siw_rgbw_rd_reg232_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg564:16;
        RBus_UInt32  rd_reg565:16;
    };
}siw_rgbw_rd_reg234_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg566:16;
        RBus_UInt32  rd_reg567:16;
    };
}siw_rgbw_rd_reg236_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg568:16;
        RBus_UInt32  rd_reg569:16;
    };
}siw_rgbw_rd_reg238_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg570:16;
        RBus_UInt32  rd_reg571:16;
    };
}siw_rgbw_rd_reg23a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg572:16;
        RBus_UInt32  rd_reg573:16;
    };
}siw_rgbw_rd_reg23c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg574:16;
        RBus_UInt32  rd_reg575:16;
    };
}siw_rgbw_rd_reg23e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg576:16;
        RBus_UInt32  rd_reg577:16;
    };
}siw_rgbw_rd_reg240_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg578:16;
        RBus_UInt32  rd_reg579:16;
    };
}siw_rgbw_rd_reg242_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg580:16;
        RBus_UInt32  rd_reg581:16;
    };
}siw_rgbw_rd_reg244_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg582:16;
        RBus_UInt32  rd_reg583:16;
    };
}siw_rgbw_rd_reg246_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg584:16;
        RBus_UInt32  rd_reg585:16;
    };
}siw_rgbw_rd_reg248_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg586:16;
        RBus_UInt32  rd_reg587:16;
    };
}siw_rgbw_rd_reg24a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg588:16;
        RBus_UInt32  rd_reg589:16;
    };
}siw_rgbw_rd_reg24c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg590:16;
        RBus_UInt32  rd_reg591:16;
    };
}siw_rgbw_rd_reg24e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg592:16;
        RBus_UInt32  rd_reg593:16;
    };
}siw_rgbw_rd_reg250_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg594:16;
        RBus_UInt32  rd_reg595:16;
    };
}siw_rgbw_rd_reg252_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg596:16;
        RBus_UInt32  rd_reg597:16;
    };
}siw_rgbw_rd_reg254_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg598:16;
        RBus_UInt32  rd_reg599:16;
    };
}siw_rgbw_rd_reg256_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg600:16;
        RBus_UInt32  rd_reg601:16;
    };
}siw_rgbw_rd_reg258_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg602:16;
        RBus_UInt32  rd_reg603:16;
    };
}siw_rgbw_rd_reg25a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg604:16;
        RBus_UInt32  rd_reg605:16;
    };
}siw_rgbw_rd_reg25c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg606:16;
        RBus_UInt32  rd_reg607:16;
    };
}siw_rgbw_rd_reg25e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg608:16;
        RBus_UInt32  rd_reg609:16;
    };
}siw_rgbw_rd_reg260_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg610:16;
        RBus_UInt32  rd_reg611:16;
    };
}siw_rgbw_rd_reg262_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg612:16;
        RBus_UInt32  rd_reg613:16;
    };
}siw_rgbw_rd_reg264_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg614:16;
        RBus_UInt32  rd_reg615:16;
    };
}siw_rgbw_rd_reg266_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg616:16;
        RBus_UInt32  rd_reg617:16;
    };
}siw_rgbw_rd_reg268_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg618:16;
        RBus_UInt32  rd_reg619:16;
    };
}siw_rgbw_rd_reg26a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg620:16;
        RBus_UInt32  rd_reg621:16;
    };
}siw_rgbw_rd_reg26c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg622:16;
        RBus_UInt32  rd_reg623:16;
    };
}siw_rgbw_rd_reg26e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg624:16;
        RBus_UInt32  rd_reg625:16;
    };
}siw_rgbw_rd_reg270_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg626:16;
        RBus_UInt32  rd_reg627:16;
    };
}siw_rgbw_rd_reg272_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg628:16;
        RBus_UInt32  rd_reg629:16;
    };
}siw_rgbw_rd_reg274_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg630:16;
        RBus_UInt32  rd_reg631:16;
    };
}siw_rgbw_rd_reg276_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg632:16;
        RBus_UInt32  rd_reg633:16;
    };
}siw_rgbw_rd_reg278_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg634:16;
        RBus_UInt32  rd_reg635:16;
    };
}siw_rgbw_rd_reg27a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg636:16;
        RBus_UInt32  rd_reg637:16;
    };
}siw_rgbw_rd_reg27c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg638:16;
        RBus_UInt32  rd_reg639:16;
    };
}siw_rgbw_rd_reg27e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg640:16;
        RBus_UInt32  rd_reg641:16;
    };
}siw_rgbw_rd_reg280_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg642:16;
        RBus_UInt32  rd_reg643:16;
    };
}siw_rgbw_rd_reg282_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg644:16;
        RBus_UInt32  rd_reg645:16;
    };
}siw_rgbw_rd_reg284_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg646:16;
        RBus_UInt32  rd_reg647:16;
    };
}siw_rgbw_rd_reg286_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg648:16;
        RBus_UInt32  rd_reg649:16;
    };
}siw_rgbw_rd_reg288_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg650:16;
        RBus_UInt32  rd_reg651:16;
    };
}siw_rgbw_rd_reg28a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg652:16;
        RBus_UInt32  rd_reg653:16;
    };
}siw_rgbw_rd_reg28c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg654:16;
        RBus_UInt32  rd_reg655:16;
    };
}siw_rgbw_rd_reg28e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg656:16;
        RBus_UInt32  rd_reg657:16;
    };
}siw_rgbw_rd_reg290_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg658:16;
        RBus_UInt32  rd_reg659:16;
    };
}siw_rgbw_rd_reg292_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg660:16;
        RBus_UInt32  rd_reg661:16;
    };
}siw_rgbw_rd_reg294_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg662:16;
        RBus_UInt32  rd_reg663:16;
    };
}siw_rgbw_rd_reg296_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg664:16;
        RBus_UInt32  rd_reg665:16;
    };
}siw_rgbw_rd_reg298_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg666:16;
        RBus_UInt32  rd_reg667:16;
    };
}siw_rgbw_rd_reg29a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg668:16;
        RBus_UInt32  rd_reg669:16;
    };
}siw_rgbw_rd_reg29c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg670:16;
        RBus_UInt32  rd_reg671:16;
    };
}siw_rgbw_rd_reg29e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg672:16;
        RBus_UInt32  rd_reg673:16;
    };
}siw_rgbw_rd_reg2a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg674:16;
        RBus_UInt32  rd_reg675:16;
    };
}siw_rgbw_rd_reg2a2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg676:16;
        RBus_UInt32  rd_reg677:16;
    };
}siw_rgbw_rd_reg2a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg678:16;
        RBus_UInt32  rd_reg679:16;
    };
}siw_rgbw_rd_reg2a6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg680:16;
        RBus_UInt32  rd_reg681:16;
    };
}siw_rgbw_rd_reg2a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg682:16;
        RBus_UInt32  rd_reg683:16;
    };
}siw_rgbw_rd_reg2aa_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg684:16;
        RBus_UInt32  rd_reg685:16;
    };
}siw_rgbw_rd_reg2ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg686:16;
        RBus_UInt32  rd_reg687:16;
    };
}siw_rgbw_rd_reg2ae_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg688:16;
        RBus_UInt32  rd_reg689:16;
    };
}siw_rgbw_rd_reg2b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg690:16;
        RBus_UInt32  rd_reg691:16;
    };
}siw_rgbw_rd_reg2b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg692:16;
        RBus_UInt32  rd_reg693:16;
    };
}siw_rgbw_rd_reg2b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg694:16;
        RBus_UInt32  rd_reg695:16;
    };
}siw_rgbw_rd_reg2b6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg696:16;
        RBus_UInt32  rd_reg697:16;
    };
}siw_rgbw_rd_reg2b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg698:16;
        RBus_UInt32  rd_reg699:16;
    };
}siw_rgbw_rd_reg2ba_RBUS;

#else //apply LITTLE_ENDIAN

//======SIW_RGBW register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  hsync_cntr:5;
        RBus_UInt32  dummy1802af00_31_8:24;
    };
}siw_rgbw_siw_rgbw_timing_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  picture_mode_sel:2;
        RBus_UInt32  dga_picture_mode_sel:2;
        RBus_UInt32  wpr_on:1;
        RBus_UInt32  res2:23;
    };
}siw_rgbw_siw_rgbw_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rm_1:4;
        RBus_UInt32  rm_0:4;
        RBus_UInt32  rme_1:1;
        RBus_UInt32  rme_0:1;
        RBus_UInt32  ls_1:1;
        RBus_UInt32  ls_0:1;
        RBus_UInt32  res1:20;
    };
}siw_rgbw_siw_rgbw_rom_bist0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  testrwm_0:1;
        RBus_UInt32  test1_0:1;
        RBus_UInt32  ls_2:1;
        RBus_UInt32  rm_2:4;
        RBus_UInt32  rme_2:1;
        RBus_UInt32  drf_bist_fail_0:1;
        RBus_UInt32  bist_fail_0:1;
        RBus_UInt32  res1:22;
    };
}siw_rgbw_siw_rgbw_sram_bist0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg001:16;
        RBus_UInt32  rd_reg000:16;
    };
}siw_rgbw_rd_reg000_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg003:16;
        RBus_UInt32  rd_reg002:16;
    };
}siw_rgbw_rd_reg002_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg005:16;
        RBus_UInt32  rd_reg004:16;
    };
}siw_rgbw_rd_reg004_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg007:16;
        RBus_UInt32  rd_reg006:16;
    };
}siw_rgbw_rd_reg006_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg009:16;
        RBus_UInt32  rd_reg008:16;
    };
}siw_rgbw_rd_reg008_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg011:16;
        RBus_UInt32  rd_reg010:16;
    };
}siw_rgbw_rd_reg00a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg013:16;
        RBus_UInt32  rd_reg012:16;
    };
}siw_rgbw_rd_reg00c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg015:16;
        RBus_UInt32  rd_reg014:16;
    };
}siw_rgbw_rd_reg00e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg017:16;
        RBus_UInt32  rd_reg016:16;
    };
}siw_rgbw_rd_reg010_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg019:16;
        RBus_UInt32  rd_reg018:16;
    };
}siw_rgbw_rd_reg012_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg021:16;
        RBus_UInt32  rd_reg020:16;
    };
}siw_rgbw_rd_reg014_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg023:16;
        RBus_UInt32  rd_reg022:16;
    };
}siw_rgbw_rd_reg016_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg025:16;
        RBus_UInt32  rd_reg024:16;
    };
}siw_rgbw_rd_reg018_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg027:16;
        RBus_UInt32  rd_reg026:16;
    };
}siw_rgbw_rd_reg01a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg029:16;
        RBus_UInt32  rd_reg028:16;
    };
}siw_rgbw_rd_reg01c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg031:16;
        RBus_UInt32  rd_reg030:16;
    };
}siw_rgbw_rd_reg01e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg033:16;
        RBus_UInt32  rd_reg032:16;
    };
}siw_rgbw_rd_reg020_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg035:16;
        RBus_UInt32  rd_reg034:16;
    };
}siw_rgbw_rd_reg022_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg037:16;
        RBus_UInt32  rd_reg036:16;
    };
}siw_rgbw_rd_reg024_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg039:16;
        RBus_UInt32  rd_reg038:16;
    };
}siw_rgbw_rd_reg026_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg041:16;
        RBus_UInt32  rd_reg040:16;
    };
}siw_rgbw_rd_reg028_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg043:16;
        RBus_UInt32  rd_reg042:16;
    };
}siw_rgbw_rd_reg02a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg045:16;
        RBus_UInt32  rd_reg044:16;
    };
}siw_rgbw_rd_reg02c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg047:16;
        RBus_UInt32  rd_reg046:16;
    };
}siw_rgbw_rd_reg02e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg049:16;
        RBus_UInt32  rd_reg048:16;
    };
}siw_rgbw_rd_reg030_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg051:16;
        RBus_UInt32  rd_reg050:16;
    };
}siw_rgbw_rd_reg032_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg053:16;
        RBus_UInt32  rd_reg052:16;
    };
}siw_rgbw_rd_reg034_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg055:16;
        RBus_UInt32  rd_reg054:16;
    };
}siw_rgbw_rd_reg036_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg057:16;
        RBus_UInt32  rd_reg056:16;
    };
}siw_rgbw_rd_reg038_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg059:16;
        RBus_UInt32  rd_reg058:16;
    };
}siw_rgbw_rd_reg03a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg061:16;
        RBus_UInt32  rd_reg060:16;
    };
}siw_rgbw_rd_reg03c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg063:16;
        RBus_UInt32  rd_reg062:16;
    };
}siw_rgbw_rd_reg03e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg065:16;
        RBus_UInt32  rd_reg064:16;
    };
}siw_rgbw_rd_reg040_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg067:16;
        RBus_UInt32  rd_reg066:16;
    };
}siw_rgbw_rd_reg042_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg069:16;
        RBus_UInt32  rd_reg068:16;
    };
}siw_rgbw_rd_reg044_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg071:16;
        RBus_UInt32  rd_reg070:16;
    };
}siw_rgbw_rd_reg046_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg073:16;
        RBus_UInt32  rd_reg072:16;
    };
}siw_rgbw_rd_reg048_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg075:16;
        RBus_UInt32  rd_reg074:16;
    };
}siw_rgbw_rd_reg04a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg077:16;
        RBus_UInt32  rd_reg076:16;
    };
}siw_rgbw_rd_reg04c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg079:16;
        RBus_UInt32  rd_reg078:16;
    };
}siw_rgbw_rd_reg04e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg081:16;
        RBus_UInt32  rd_reg080:16;
    };
}siw_rgbw_rd_reg050_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg083:16;
        RBus_UInt32  rd_reg082:16;
    };
}siw_rgbw_rd_reg052_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg085:16;
        RBus_UInt32  rd_reg084:16;
    };
}siw_rgbw_rd_reg054_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg087:16;
        RBus_UInt32  rd_reg086:16;
    };
}siw_rgbw_rd_reg056_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg089:16;
        RBus_UInt32  rd_reg088:16;
    };
}siw_rgbw_rd_reg058_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg091:16;
        RBus_UInt32  rd_reg090:16;
    };
}siw_rgbw_rd_reg05a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg093:16;
        RBus_UInt32  rd_reg092:16;
    };
}siw_rgbw_rd_reg05c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg095:16;
        RBus_UInt32  rd_reg094:16;
    };
}siw_rgbw_rd_reg05e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg097:16;
        RBus_UInt32  rd_reg096:16;
    };
}siw_rgbw_rd_reg060_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg099:16;
        RBus_UInt32  rd_reg098:16;
    };
}siw_rgbw_rd_reg062_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg101:16;
        RBus_UInt32  rd_reg100:16;
    };
}siw_rgbw_rd_reg064_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg103:16;
        RBus_UInt32  rd_reg102:16;
    };
}siw_rgbw_rd_reg066_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg105:16;
        RBus_UInt32  rd_reg104:16;
    };
}siw_rgbw_rd_reg068_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg107:16;
        RBus_UInt32  rd_reg106:16;
    };
}siw_rgbw_rd_reg06a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg109:16;
        RBus_UInt32  rd_reg108:16;
    };
}siw_rgbw_rd_reg06c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg111:16;
        RBus_UInt32  rd_reg110:16;
    };
}siw_rgbw_rd_reg06e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg113:16;
        RBus_UInt32  rd_reg112:16;
    };
}siw_rgbw_rd_reg070_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg115:16;
        RBus_UInt32  rd_reg114:16;
    };
}siw_rgbw_rd_reg072_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg117:16;
        RBus_UInt32  rd_reg116:16;
    };
}siw_rgbw_rd_reg074_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg119:16;
        RBus_UInt32  rd_reg118:16;
    };
}siw_rgbw_rd_reg076_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg121:16;
        RBus_UInt32  rd_reg120:16;
    };
}siw_rgbw_rd_reg078_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg123:16;
        RBus_UInt32  rd_reg122:16;
    };
}siw_rgbw_rd_reg07a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg125:16;
        RBus_UInt32  rd_reg124:16;
    };
}siw_rgbw_rd_reg07c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg127:16;
        RBus_UInt32  rd_reg126:16;
    };
}siw_rgbw_rd_reg07e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg129:16;
        RBus_UInt32  rd_reg128:16;
    };
}siw_rgbw_rd_reg080_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg131:16;
        RBus_UInt32  rd_reg130:16;
    };
}siw_rgbw_rd_reg082_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg133:16;
        RBus_UInt32  rd_reg132:16;
    };
}siw_rgbw_rd_reg084_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg135:16;
        RBus_UInt32  rd_reg134:16;
    };
}siw_rgbw_rd_reg086_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg137:16;
        RBus_UInt32  rd_reg136:16;
    };
}siw_rgbw_rd_reg088_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg139:16;
        RBus_UInt32  rd_reg138:16;
    };
}siw_rgbw_rd_reg08a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg141:16;
        RBus_UInt32  rd_reg140:16;
    };
}siw_rgbw_rd_reg08c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg143:16;
        RBus_UInt32  rd_reg142:16;
    };
}siw_rgbw_rd_reg08e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg145:16;
        RBus_UInt32  rd_reg144:16;
    };
}siw_rgbw_rd_reg090_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg147:16;
        RBus_UInt32  rd_reg146:16;
    };
}siw_rgbw_rd_reg092_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg149:16;
        RBus_UInt32  rd_reg148:16;
    };
}siw_rgbw_rd_reg094_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg151:16;
        RBus_UInt32  rd_reg150:16;
    };
}siw_rgbw_rd_reg096_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg153:16;
        RBus_UInt32  rd_reg152:16;
    };
}siw_rgbw_rd_reg098_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg155:16;
        RBus_UInt32  rd_reg154:16;
    };
}siw_rgbw_rd_reg09a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg157:16;
        RBus_UInt32  rd_reg156:16;
    };
}siw_rgbw_rd_reg09c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg159:16;
        RBus_UInt32  rd_reg158:16;
    };
}siw_rgbw_rd_reg09e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg161:16;
        RBus_UInt32  rd_reg160:16;
    };
}siw_rgbw_rd_reg0a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg163:16;
        RBus_UInt32  rd_reg162:16;
    };
}siw_rgbw_rd_reg0a2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg165:16;
        RBus_UInt32  rd_reg164:16;
    };
}siw_rgbw_rd_reg0a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg167:16;
        RBus_UInt32  rd_reg166:16;
    };
}siw_rgbw_rd_reg0a6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg169:16;
        RBus_UInt32  rd_reg168:16;
    };
}siw_rgbw_rd_reg0a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg171:16;
        RBus_UInt32  rd_reg170:16;
    };
}siw_rgbw_rd_reg0aa_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg173:16;
        RBus_UInt32  rd_reg172:16;
    };
}siw_rgbw_rd_reg0ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg175:16;
        RBus_UInt32  rd_reg174:16;
    };
}siw_rgbw_rd_reg0ae_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg177:16;
        RBus_UInt32  rd_reg176:16;
    };
}siw_rgbw_rd_reg0b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg179:16;
        RBus_UInt32  rd_reg178:16;
    };
}siw_rgbw_rd_reg0b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg181:16;
        RBus_UInt32  rd_reg180:16;
    };
}siw_rgbw_rd_reg0b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg183:16;
        RBus_UInt32  rd_reg182:16;
    };
}siw_rgbw_rd_reg0b6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg185:16;
        RBus_UInt32  rd_reg184:16;
    };
}siw_rgbw_rd_reg0b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg187:16;
        RBus_UInt32  rd_reg186:16;
    };
}siw_rgbw_rd_reg0ba_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg189:16;
        RBus_UInt32  rd_reg188:16;
    };
}siw_rgbw_rd_reg0bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg191:16;
        RBus_UInt32  rd_reg190:16;
    };
}siw_rgbw_rd_reg0be_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg193:16;
        RBus_UInt32  rd_reg192:16;
    };
}siw_rgbw_rd_reg0c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg195:16;
        RBus_UInt32  rd_reg194:16;
    };
}siw_rgbw_rd_reg0c2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg197:16;
        RBus_UInt32  rd_reg196:16;
    };
}siw_rgbw_rd_reg0c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg199:16;
        RBus_UInt32  rd_reg198:16;
    };
}siw_rgbw_rd_reg0c6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg201:16;
        RBus_UInt32  rd_reg200:16;
    };
}siw_rgbw_rd_reg0c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg203:16;
        RBus_UInt32  rd_reg202:16;
    };
}siw_rgbw_rd_reg0ca_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg205:16;
        RBus_UInt32  rd_reg204:16;
    };
}siw_rgbw_rd_reg0cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg207:16;
        RBus_UInt32  rd_reg206:16;
    };
}siw_rgbw_rd_reg0ce_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg209:16;
        RBus_UInt32  rd_reg208:16;
    };
}siw_rgbw_rd_reg0d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg211:16;
        RBus_UInt32  rd_reg210:16;
    };
}siw_rgbw_rd_reg0d2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg213:16;
        RBus_UInt32  rd_reg212:16;
    };
}siw_rgbw_rd_reg0d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg215:16;
        RBus_UInt32  rd_reg214:16;
    };
}siw_rgbw_rd_reg0d6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg217:16;
        RBus_UInt32  rd_reg216:16;
    };
}siw_rgbw_rd_reg0d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg219:16;
        RBus_UInt32  rd_reg218:16;
    };
}siw_rgbw_rd_reg0da_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg221:16;
        RBus_UInt32  rd_reg220:16;
    };
}siw_rgbw_rd_reg0dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg223:16;
        RBus_UInt32  rd_reg222:16;
    };
}siw_rgbw_rd_reg0de_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg225:16;
        RBus_UInt32  rd_reg224:16;
    };
}siw_rgbw_rd_reg0e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg227:16;
        RBus_UInt32  rd_reg226:16;
    };
}siw_rgbw_rd_reg0e2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg229:16;
        RBus_UInt32  rd_reg228:16;
    };
}siw_rgbw_rd_reg0e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg231:16;
        RBus_UInt32  rd_reg230:16;
    };
}siw_rgbw_rd_reg0e6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg233:16;
        RBus_UInt32  rd_reg232:16;
    };
}siw_rgbw_rd_reg0e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg235:16;
        RBus_UInt32  rd_reg234:16;
    };
}siw_rgbw_rd_reg0ea_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg237:16;
        RBus_UInt32  rd_reg236:16;
    };
}siw_rgbw_rd_reg0ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg239:16;
        RBus_UInt32  rd_reg238:16;
    };
}siw_rgbw_rd_reg0ee_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg241:16;
        RBus_UInt32  rd_reg240:16;
    };
}siw_rgbw_rd_reg0f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg243:16;
        RBus_UInt32  rd_reg242:16;
    };
}siw_rgbw_rd_reg0f2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg245:16;
        RBus_UInt32  rd_reg244:16;
    };
}siw_rgbw_rd_reg0f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg247:16;
        RBus_UInt32  rd_reg246:16;
    };
}siw_rgbw_rd_reg0f6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg249:16;
        RBus_UInt32  rd_reg248:16;
    };
}siw_rgbw_rd_reg0f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg251:16;
        RBus_UInt32  rd_reg250:16;
    };
}siw_rgbw_rd_reg0fa_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg253:16;
        RBus_UInt32  rd_reg252:16;
    };
}siw_rgbw_rd_reg0fc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg255:16;
        RBus_UInt32  rd_reg254:16;
    };
}siw_rgbw_rd_reg0fe_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg257:16;
        RBus_UInt32  rd_reg256:16;
    };
}siw_rgbw_rd_reg100_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg259:16;
        RBus_UInt32  rd_reg258:16;
    };
}siw_rgbw_rd_reg102_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg261:16;
        RBus_UInt32  rd_reg260:16;
    };
}siw_rgbw_rd_reg104_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg263:16;
        RBus_UInt32  rd_reg262:16;
    };
}siw_rgbw_rd_reg106_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg265:16;
        RBus_UInt32  rd_reg264:16;
    };
}siw_rgbw_rd_reg108_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg267:16;
        RBus_UInt32  rd_reg266:16;
    };
}siw_rgbw_rd_reg10a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg269:16;
        RBus_UInt32  rd_reg268:16;
    };
}siw_rgbw_rd_reg10c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg271:16;
        RBus_UInt32  rd_reg270:16;
    };
}siw_rgbw_rd_reg10e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg273:16;
        RBus_UInt32  rd_reg272:16;
    };
}siw_rgbw_rd_reg110_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg275:16;
        RBus_UInt32  rd_reg274:16;
    };
}siw_rgbw_rd_reg112_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg277:16;
        RBus_UInt32  rd_reg276:16;
    };
}siw_rgbw_rd_reg114_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg279:16;
        RBus_UInt32  rd_reg278:16;
    };
}siw_rgbw_rd_reg116_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg281:16;
        RBus_UInt32  rd_reg280:16;
    };
}siw_rgbw_rd_reg118_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg283:16;
        RBus_UInt32  rd_reg282:16;
    };
}siw_rgbw_rd_reg11a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg285:16;
        RBus_UInt32  rd_reg284:16;
    };
}siw_rgbw_rd_reg11c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg287:16;
        RBus_UInt32  rd_reg286:16;
    };
}siw_rgbw_rd_reg11e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg289:16;
        RBus_UInt32  rd_reg288:16;
    };
}siw_rgbw_rd_reg120_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg291:16;
        RBus_UInt32  rd_reg290:16;
    };
}siw_rgbw_rd_reg122_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg293:16;
        RBus_UInt32  rd_reg292:16;
    };
}siw_rgbw_rd_reg124_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg295:16;
        RBus_UInt32  rd_reg294:16;
    };
}siw_rgbw_rd_reg126_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg297:16;
        RBus_UInt32  rd_reg296:16;
    };
}siw_rgbw_rd_reg128_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg299:16;
        RBus_UInt32  rd_reg298:16;
    };
}siw_rgbw_rd_reg12a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg301:16;
        RBus_UInt32  rd_reg300:16;
    };
}siw_rgbw_rd_reg12c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg303:16;
        RBus_UInt32  rd_reg302:16;
    };
}siw_rgbw_rd_reg12e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg305:16;
        RBus_UInt32  rd_reg304:16;
    };
}siw_rgbw_rd_reg130_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg307:16;
        RBus_UInt32  rd_reg306:16;
    };
}siw_rgbw_rd_reg132_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg309:16;
        RBus_UInt32  rd_reg308:16;
    };
}siw_rgbw_rd_reg134_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg311:16;
        RBus_UInt32  rd_reg310:16;
    };
}siw_rgbw_rd_reg136_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg313:16;
        RBus_UInt32  rd_reg312:16;
    };
}siw_rgbw_rd_reg138_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg315:16;
        RBus_UInt32  rd_reg314:16;
    };
}siw_rgbw_rd_reg13a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg317:16;
        RBus_UInt32  rd_reg316:16;
    };
}siw_rgbw_rd_reg13c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg319:16;
        RBus_UInt32  rd_reg318:16;
    };
}siw_rgbw_rd_reg13e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg321:16;
        RBus_UInt32  rd_reg320:16;
    };
}siw_rgbw_rd_reg140_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg323:16;
        RBus_UInt32  rd_reg322:16;
    };
}siw_rgbw_rd_reg142_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg325:16;
        RBus_UInt32  rd_reg324:16;
    };
}siw_rgbw_rd_reg144_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg327:16;
        RBus_UInt32  rd_reg326:16;
    };
}siw_rgbw_rd_reg146_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg329:16;
        RBus_UInt32  rd_reg328:16;
    };
}siw_rgbw_rd_reg148_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg331:16;
        RBus_UInt32  rd_reg330:16;
    };
}siw_rgbw_rd_reg14a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg333:16;
        RBus_UInt32  rd_reg332:16;
    };
}siw_rgbw_rd_reg14c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg335:16;
        RBus_UInt32  rd_reg334:16;
    };
}siw_rgbw_rd_reg14e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg337:16;
        RBus_UInt32  rd_reg336:16;
    };
}siw_rgbw_rd_reg150_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg339:16;
        RBus_UInt32  rd_reg338:16;
    };
}siw_rgbw_rd_reg152_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg341:16;
        RBus_UInt32  rd_reg340:16;
    };
}siw_rgbw_rd_reg154_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg343:16;
        RBus_UInt32  rd_reg342:16;
    };
}siw_rgbw_rd_reg156_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg345:16;
        RBus_UInt32  rd_reg344:16;
    };
}siw_rgbw_rd_reg158_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg347:16;
        RBus_UInt32  rd_reg346:16;
    };
}siw_rgbw_rd_reg15a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg349:16;
        RBus_UInt32  rd_reg348:16;
    };
}siw_rgbw_rd_reg15c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg351:16;
        RBus_UInt32  rd_reg350:16;
    };
}siw_rgbw_rd_reg15e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg353:16;
        RBus_UInt32  rd_reg352:16;
    };
}siw_rgbw_rd_reg160_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg355:16;
        RBus_UInt32  rd_reg354:16;
    };
}siw_rgbw_rd_reg162_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg357:16;
        RBus_UInt32  rd_reg356:16;
    };
}siw_rgbw_rd_reg164_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg359:16;
        RBus_UInt32  rd_reg358:16;
    };
}siw_rgbw_rd_reg166_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg361:16;
        RBus_UInt32  rd_reg360:16;
    };
}siw_rgbw_rd_reg168_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg363:16;
        RBus_UInt32  rd_reg362:16;
    };
}siw_rgbw_rd_reg16a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg365:16;
        RBus_UInt32  rd_reg364:16;
    };
}siw_rgbw_rd_reg16c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg367:16;
        RBus_UInt32  rd_reg366:16;
    };
}siw_rgbw_rd_reg16e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg369:16;
        RBus_UInt32  rd_reg368:16;
    };
}siw_rgbw_rd_reg170_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg371:16;
        RBus_UInt32  rd_reg370:16;
    };
}siw_rgbw_rd_reg172_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg373:16;
        RBus_UInt32  rd_reg372:16;
    };
}siw_rgbw_rd_reg174_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg375:16;
        RBus_UInt32  rd_reg374:16;
    };
}siw_rgbw_rd_reg176_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg377:16;
        RBus_UInt32  rd_reg376:16;
    };
}siw_rgbw_rd_reg178_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg379:16;
        RBus_UInt32  rd_reg378:16;
    };
}siw_rgbw_rd_reg17a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg381:16;
        RBus_UInt32  rd_reg380:16;
    };
}siw_rgbw_rd_reg17c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg383:16;
        RBus_UInt32  rd_reg382:16;
    };
}siw_rgbw_rd_reg17e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg385:16;
        RBus_UInt32  rd_reg384:16;
    };
}siw_rgbw_rd_reg180_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg387:16;
        RBus_UInt32  rd_reg386:16;
    };
}siw_rgbw_rd_reg182_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg389:16;
        RBus_UInt32  rd_reg388:16;
    };
}siw_rgbw_rd_reg184_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg391:16;
        RBus_UInt32  rd_reg390:16;
    };
}siw_rgbw_rd_reg186_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg393:16;
        RBus_UInt32  rd_reg392:16;
    };
}siw_rgbw_rd_reg188_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg395:16;
        RBus_UInt32  rd_reg394:16;
    };
}siw_rgbw_rd_reg18a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg397:16;
        RBus_UInt32  rd_reg396:16;
    };
}siw_rgbw_rd_reg18c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg399:16;
        RBus_UInt32  rd_reg398:16;
    };
}siw_rgbw_rd_reg18e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg401:16;
        RBus_UInt32  rd_reg400:16;
    };
}siw_rgbw_rd_reg190_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg403:16;
        RBus_UInt32  rd_reg402:16;
    };
}siw_rgbw_rd_reg192_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg405:16;
        RBus_UInt32  rd_reg404:16;
    };
}siw_rgbw_rd_reg194_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg407:16;
        RBus_UInt32  rd_reg406:16;
    };
}siw_rgbw_rd_reg196_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg409:16;
        RBus_UInt32  rd_reg408:16;
    };
}siw_rgbw_rd_reg198_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg411:16;
        RBus_UInt32  rd_reg410:16;
    };
}siw_rgbw_rd_reg19a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg413:16;
        RBus_UInt32  rd_reg412:16;
    };
}siw_rgbw_rd_reg19c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg415:16;
        RBus_UInt32  rd_reg414:16;
    };
}siw_rgbw_rd_reg19e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg417:16;
        RBus_UInt32  rd_reg416:16;
    };
}siw_rgbw_rd_reg1a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg419:16;
        RBus_UInt32  rd_reg418:16;
    };
}siw_rgbw_rd_reg1a2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg421:16;
        RBus_UInt32  rd_reg420:16;
    };
}siw_rgbw_rd_reg1a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg423:16;
        RBus_UInt32  rd_reg422:16;
    };
}siw_rgbw_rd_reg1a6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg425:16;
        RBus_UInt32  rd_reg424:16;
    };
}siw_rgbw_rd_reg1a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg427:16;
        RBus_UInt32  rd_reg426:16;
    };
}siw_rgbw_rd_reg1aa_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg429:16;
        RBus_UInt32  rd_reg428:16;
    };
}siw_rgbw_rd_reg1ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg431:16;
        RBus_UInt32  rd_reg430:16;
    };
}siw_rgbw_rd_reg1ae_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg433:16;
        RBus_UInt32  rd_reg432:16;
    };
}siw_rgbw_rd_reg1b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg435:16;
        RBus_UInt32  rd_reg434:16;
    };
}siw_rgbw_rd_reg1b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg437:16;
        RBus_UInt32  rd_reg436:16;
    };
}siw_rgbw_rd_reg1b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg439:16;
        RBus_UInt32  rd_reg438:16;
    };
}siw_rgbw_rd_reg1b6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg441:16;
        RBus_UInt32  rd_reg440:16;
    };
}siw_rgbw_rd_reg1b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg443:16;
        RBus_UInt32  rd_reg442:16;
    };
}siw_rgbw_rd_reg1ba_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg445:16;
        RBus_UInt32  rd_reg444:16;
    };
}siw_rgbw_rd_reg1bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg447:16;
        RBus_UInt32  rd_reg446:16;
    };
}siw_rgbw_rd_reg1be_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg449:16;
        RBus_UInt32  rd_reg448:16;
    };
}siw_rgbw_rd_reg1c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg451:16;
        RBus_UInt32  rd_reg450:16;
    };
}siw_rgbw_rd_reg1c2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg453:16;
        RBus_UInt32  rd_reg452:16;
    };
}siw_rgbw_rd_reg1c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg455:16;
        RBus_UInt32  rd_reg454:16;
    };
}siw_rgbw_rd_reg1c6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg457:16;
        RBus_UInt32  rd_reg456:16;
    };
}siw_rgbw_rd_reg1c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg459:16;
        RBus_UInt32  rd_reg458:16;
    };
}siw_rgbw_rd_reg1ca_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg461:16;
        RBus_UInt32  rd_reg460:16;
    };
}siw_rgbw_rd_reg1cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg463:16;
        RBus_UInt32  rd_reg462:16;
    };
}siw_rgbw_rd_reg1ce_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg465:16;
        RBus_UInt32  rd_reg464:16;
    };
}siw_rgbw_rd_reg1d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg467:16;
        RBus_UInt32  rd_reg466:16;
    };
}siw_rgbw_rd_reg1d2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg469:16;
        RBus_UInt32  rd_reg468:16;
    };
}siw_rgbw_rd_reg1d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg471:16;
        RBus_UInt32  rd_reg470:16;
    };
}siw_rgbw_rd_reg1d6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg473:16;
        RBus_UInt32  rd_reg472:16;
    };
}siw_rgbw_rd_reg1d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg475:16;
        RBus_UInt32  rd_reg474:16;
    };
}siw_rgbw_rd_reg1da_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg477:16;
        RBus_UInt32  rd_reg476:16;
    };
}siw_rgbw_rd_reg1dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg479:16;
        RBus_UInt32  rd_reg478:16;
    };
}siw_rgbw_rd_reg1de_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg481:16;
        RBus_UInt32  rd_reg480:16;
    };
}siw_rgbw_rd_reg1e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg483:16;
        RBus_UInt32  rd_reg482:16;
    };
}siw_rgbw_rd_reg1e2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg485:16;
        RBus_UInt32  rd_reg484:16;
    };
}siw_rgbw_rd_reg1e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg487:16;
        RBus_UInt32  rd_reg486:16;
    };
}siw_rgbw_rd_reg1e6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg489:16;
        RBus_UInt32  rd_reg488:16;
    };
}siw_rgbw_rd_reg1e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg491:16;
        RBus_UInt32  rd_reg490:16;
    };
}siw_rgbw_rd_reg1ea_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg493:16;
        RBus_UInt32  rd_reg492:16;
    };
}siw_rgbw_rd_reg1ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg495:16;
        RBus_UInt32  rd_reg494:16;
    };
}siw_rgbw_rd_reg1ee_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg497:16;
        RBus_UInt32  rd_reg496:16;
    };
}siw_rgbw_rd_reg1f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg499:16;
        RBus_UInt32  rd_reg498:16;
    };
}siw_rgbw_rd_reg1f2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg501:16;
        RBus_UInt32  rd_reg500:16;
    };
}siw_rgbw_rd_reg1f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg503:16;
        RBus_UInt32  rd_reg502:16;
    };
}siw_rgbw_rd_reg1f6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg505:16;
        RBus_UInt32  rd_reg504:16;
    };
}siw_rgbw_rd_reg1f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg507:16;
        RBus_UInt32  rd_reg506:16;
    };
}siw_rgbw_rd_reg1fa_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg509:16;
        RBus_UInt32  rd_reg508:16;
    };
}siw_rgbw_rd_reg1fc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg511:16;
        RBus_UInt32  rd_reg510:16;
    };
}siw_rgbw_rd_reg1fe_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg513:16;
        RBus_UInt32  rd_reg512:16;
    };
}siw_rgbw_rd_reg200_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg515:16;
        RBus_UInt32  rd_reg514:16;
    };
}siw_rgbw_rd_reg202_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg517:16;
        RBus_UInt32  rd_reg516:16;
    };
}siw_rgbw_rd_reg204_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg519:16;
        RBus_UInt32  rd_reg518:16;
    };
}siw_rgbw_rd_reg206_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg521:16;
        RBus_UInt32  rd_reg520:16;
    };
}siw_rgbw_rd_reg208_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg523:16;
        RBus_UInt32  rd_reg522:16;
    };
}siw_rgbw_rd_reg20a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg525:16;
        RBus_UInt32  rd_reg524:16;
    };
}siw_rgbw_rd_reg20c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg527:16;
        RBus_UInt32  rd_reg526:16;
    };
}siw_rgbw_rd_reg20e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg529:16;
        RBus_UInt32  rd_reg528:16;
    };
}siw_rgbw_rd_reg210_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg531:16;
        RBus_UInt32  rd_reg530:16;
    };
}siw_rgbw_rd_reg212_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg533:16;
        RBus_UInt32  rd_reg532:16;
    };
}siw_rgbw_rd_reg214_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg535:16;
        RBus_UInt32  rd_reg534:16;
    };
}siw_rgbw_rd_reg216_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg537:16;
        RBus_UInt32  rd_reg536:16;
    };
}siw_rgbw_rd_reg218_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg539:16;
        RBus_UInt32  rd_reg538:16;
    };
}siw_rgbw_rd_reg21a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg541:16;
        RBus_UInt32  rd_reg540:16;
    };
}siw_rgbw_rd_reg21c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg543:16;
        RBus_UInt32  rd_reg542:16;
    };
}siw_rgbw_rd_reg21e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg545:16;
        RBus_UInt32  rd_reg544:16;
    };
}siw_rgbw_rd_reg220_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg547:16;
        RBus_UInt32  rd_reg546:16;
    };
}siw_rgbw_rd_reg222_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg549:16;
        RBus_UInt32  rd_reg548:16;
    };
}siw_rgbw_rd_reg224_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg551:16;
        RBus_UInt32  rd_reg550:16;
    };
}siw_rgbw_rd_reg226_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg553:16;
        RBus_UInt32  rd_reg552:16;
    };
}siw_rgbw_rd_reg228_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg555:16;
        RBus_UInt32  rd_reg554:16;
    };
}siw_rgbw_rd_reg22a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg557:16;
        RBus_UInt32  rd_reg556:16;
    };
}siw_rgbw_rd_reg22c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg559:16;
        RBus_UInt32  rd_reg558:16;
    };
}siw_rgbw_rd_reg22e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg561:16;
        RBus_UInt32  rd_reg560:16;
    };
}siw_rgbw_rd_reg230_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg563:16;
        RBus_UInt32  rd_reg562:16;
    };
}siw_rgbw_rd_reg232_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg565:16;
        RBus_UInt32  rd_reg564:16;
    };
}siw_rgbw_rd_reg234_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg567:16;
        RBus_UInt32  rd_reg566:16;
    };
}siw_rgbw_rd_reg236_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg569:16;
        RBus_UInt32  rd_reg568:16;
    };
}siw_rgbw_rd_reg238_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg571:16;
        RBus_UInt32  rd_reg570:16;
    };
}siw_rgbw_rd_reg23a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg573:16;
        RBus_UInt32  rd_reg572:16;
    };
}siw_rgbw_rd_reg23c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg575:16;
        RBus_UInt32  rd_reg574:16;
    };
}siw_rgbw_rd_reg23e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg577:16;
        RBus_UInt32  rd_reg576:16;
    };
}siw_rgbw_rd_reg240_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg579:16;
        RBus_UInt32  rd_reg578:16;
    };
}siw_rgbw_rd_reg242_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg581:16;
        RBus_UInt32  rd_reg580:16;
    };
}siw_rgbw_rd_reg244_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg583:16;
        RBus_UInt32  rd_reg582:16;
    };
}siw_rgbw_rd_reg246_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg585:16;
        RBus_UInt32  rd_reg584:16;
    };
}siw_rgbw_rd_reg248_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg587:16;
        RBus_UInt32  rd_reg586:16;
    };
}siw_rgbw_rd_reg24a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg589:16;
        RBus_UInt32  rd_reg588:16;
    };
}siw_rgbw_rd_reg24c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg591:16;
        RBus_UInt32  rd_reg590:16;
    };
}siw_rgbw_rd_reg24e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg593:16;
        RBus_UInt32  rd_reg592:16;
    };
}siw_rgbw_rd_reg250_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg595:16;
        RBus_UInt32  rd_reg594:16;
    };
}siw_rgbw_rd_reg252_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg597:16;
        RBus_UInt32  rd_reg596:16;
    };
}siw_rgbw_rd_reg254_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg599:16;
        RBus_UInt32  rd_reg598:16;
    };
}siw_rgbw_rd_reg256_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg601:16;
        RBus_UInt32  rd_reg600:16;
    };
}siw_rgbw_rd_reg258_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg603:16;
        RBus_UInt32  rd_reg602:16;
    };
}siw_rgbw_rd_reg25a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg605:16;
        RBus_UInt32  rd_reg604:16;
    };
}siw_rgbw_rd_reg25c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg607:16;
        RBus_UInt32  rd_reg606:16;
    };
}siw_rgbw_rd_reg25e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg609:16;
        RBus_UInt32  rd_reg608:16;
    };
}siw_rgbw_rd_reg260_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg611:16;
        RBus_UInt32  rd_reg610:16;
    };
}siw_rgbw_rd_reg262_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg613:16;
        RBus_UInt32  rd_reg612:16;
    };
}siw_rgbw_rd_reg264_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg615:16;
        RBus_UInt32  rd_reg614:16;
    };
}siw_rgbw_rd_reg266_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg617:16;
        RBus_UInt32  rd_reg616:16;
    };
}siw_rgbw_rd_reg268_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg619:16;
        RBus_UInt32  rd_reg618:16;
    };
}siw_rgbw_rd_reg26a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg621:16;
        RBus_UInt32  rd_reg620:16;
    };
}siw_rgbw_rd_reg26c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg623:16;
        RBus_UInt32  rd_reg622:16;
    };
}siw_rgbw_rd_reg26e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg625:16;
        RBus_UInt32  rd_reg624:16;
    };
}siw_rgbw_rd_reg270_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg627:16;
        RBus_UInt32  rd_reg626:16;
    };
}siw_rgbw_rd_reg272_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg629:16;
        RBus_UInt32  rd_reg628:16;
    };
}siw_rgbw_rd_reg274_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg631:16;
        RBus_UInt32  rd_reg630:16;
    };
}siw_rgbw_rd_reg276_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg633:16;
        RBus_UInt32  rd_reg632:16;
    };
}siw_rgbw_rd_reg278_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg635:16;
        RBus_UInt32  rd_reg634:16;
    };
}siw_rgbw_rd_reg27a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg637:16;
        RBus_UInt32  rd_reg636:16;
    };
}siw_rgbw_rd_reg27c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg639:16;
        RBus_UInt32  rd_reg638:16;
    };
}siw_rgbw_rd_reg27e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg641:16;
        RBus_UInt32  rd_reg640:16;
    };
}siw_rgbw_rd_reg280_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg643:16;
        RBus_UInt32  rd_reg642:16;
    };
}siw_rgbw_rd_reg282_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg645:16;
        RBus_UInt32  rd_reg644:16;
    };
}siw_rgbw_rd_reg284_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg647:16;
        RBus_UInt32  rd_reg646:16;
    };
}siw_rgbw_rd_reg286_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg649:16;
        RBus_UInt32  rd_reg648:16;
    };
}siw_rgbw_rd_reg288_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg651:16;
        RBus_UInt32  rd_reg650:16;
    };
}siw_rgbw_rd_reg28a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg653:16;
        RBus_UInt32  rd_reg652:16;
    };
}siw_rgbw_rd_reg28c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg655:16;
        RBus_UInt32  rd_reg654:16;
    };
}siw_rgbw_rd_reg28e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg657:16;
        RBus_UInt32  rd_reg656:16;
    };
}siw_rgbw_rd_reg290_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg659:16;
        RBus_UInt32  rd_reg658:16;
    };
}siw_rgbw_rd_reg292_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg661:16;
        RBus_UInt32  rd_reg660:16;
    };
}siw_rgbw_rd_reg294_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg663:16;
        RBus_UInt32  rd_reg662:16;
    };
}siw_rgbw_rd_reg296_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg665:16;
        RBus_UInt32  rd_reg664:16;
    };
}siw_rgbw_rd_reg298_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg667:16;
        RBus_UInt32  rd_reg666:16;
    };
}siw_rgbw_rd_reg29a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg669:16;
        RBus_UInt32  rd_reg668:16;
    };
}siw_rgbw_rd_reg29c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg671:16;
        RBus_UInt32  rd_reg670:16;
    };
}siw_rgbw_rd_reg29e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg673:16;
        RBus_UInt32  rd_reg672:16;
    };
}siw_rgbw_rd_reg2a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg675:16;
        RBus_UInt32  rd_reg674:16;
    };
}siw_rgbw_rd_reg2a2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg677:16;
        RBus_UInt32  rd_reg676:16;
    };
}siw_rgbw_rd_reg2a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg679:16;
        RBus_UInt32  rd_reg678:16;
    };
}siw_rgbw_rd_reg2a6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg681:16;
        RBus_UInt32  rd_reg680:16;
    };
}siw_rgbw_rd_reg2a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg683:16;
        RBus_UInt32  rd_reg682:16;
    };
}siw_rgbw_rd_reg2aa_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg685:16;
        RBus_UInt32  rd_reg684:16;
    };
}siw_rgbw_rd_reg2ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg687:16;
        RBus_UInt32  rd_reg686:16;
    };
}siw_rgbw_rd_reg2ae_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg689:16;
        RBus_UInt32  rd_reg688:16;
    };
}siw_rgbw_rd_reg2b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg691:16;
        RBus_UInt32  rd_reg690:16;
    };
}siw_rgbw_rd_reg2b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg693:16;
        RBus_UInt32  rd_reg692:16;
    };
}siw_rgbw_rd_reg2b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg695:16;
        RBus_UInt32  rd_reg694:16;
    };
}siw_rgbw_rd_reg2b6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg697:16;
        RBus_UInt32  rd_reg696:16;
    };
}siw_rgbw_rd_reg2b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_reg699:16;
        RBus_UInt32  rd_reg698:16;
    };
}siw_rgbw_rd_reg2ba_RBUS;




#endif 


#endif 
