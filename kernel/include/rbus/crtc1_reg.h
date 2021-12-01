/**
* @file Merlin5_MEMC_CRTC1
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_CRTC1_REG_H_
#define _RBUS_CRTC1_REG_H_

#include "rbus_types.h"



//  CRTC1 Register Address
#define  CRTC1_CRTC1_00                                                         0x1809D100
#define  CRTC1_CRTC1_00_reg_addr                                                 "0xB809D100"
#define  CRTC1_CRTC1_00_reg                                                      0xB809D100
#define  CRTC1_CRTC1_00_inst_addr                                                "0x0000"
#define  set_CRTC1_CRTC1_00_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_00_reg)=data)
#define  get_CRTC1_CRTC1_00_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_00_reg))
#define  CRTC1_CRTC1_00_crtc1_out_hs_width_shift                                 (25)
#define  CRTC1_CRTC1_00_crtc1_out_vtotal_shift                                   (12)
#define  CRTC1_CRTC1_00_crtc1_out_htotal_shift                                   (0)
#define  CRTC1_CRTC1_00_crtc1_out_hs_width_mask                                  (0xFE000000)
#define  CRTC1_CRTC1_00_crtc1_out_vtotal_mask                                    (0x01FFF000)
#define  CRTC1_CRTC1_00_crtc1_out_htotal_mask                                    (0x00000FFF)
#define  CRTC1_CRTC1_00_crtc1_out_hs_width(data)                                 (0xFE000000&((data)<<25))
#define  CRTC1_CRTC1_00_crtc1_out_vtotal(data)                                   (0x01FFF000&((data)<<12))
#define  CRTC1_CRTC1_00_crtc1_out_htotal(data)                                   (0x00000FFF&(data))
#define  CRTC1_CRTC1_00_get_crtc1_out_hs_width(data)                             ((0xFE000000&(data))>>25)
#define  CRTC1_CRTC1_00_get_crtc1_out_vtotal(data)                               ((0x01FFF000&(data))>>12)
#define  CRTC1_CRTC1_00_get_crtc1_out_htotal(data)                               (0x00000FFF&(data))

#define  CRTC1_CRTC1_04                                                         0x1809D104
#define  CRTC1_CRTC1_04_reg_addr                                                 "0xB809D104"
#define  CRTC1_CRTC1_04_reg                                                      0xB809D104
#define  CRTC1_CRTC1_04_inst_addr                                                "0x0001"
#define  set_CRTC1_CRTC1_04_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_04_reg)=data)
#define  get_CRTC1_CRTC1_04_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_04_reg))
#define  CRTC1_CRTC1_04_crtc1_out_vs_width_shift                                 (25)
#define  CRTC1_CRTC1_04_crtc1_out_vact_shift                                     (12)
#define  CRTC1_CRTC1_04_crtc1_out_hact_shift                                     (0)
#define  CRTC1_CRTC1_04_crtc1_out_vs_width_mask                                  (0xFE000000)
#define  CRTC1_CRTC1_04_crtc1_out_vact_mask                                      (0x01FFF000)
#define  CRTC1_CRTC1_04_crtc1_out_hact_mask                                      (0x00000FFF)
#define  CRTC1_CRTC1_04_crtc1_out_vs_width(data)                                 (0xFE000000&((data)<<25))
#define  CRTC1_CRTC1_04_crtc1_out_vact(data)                                     (0x01FFF000&((data)<<12))
#define  CRTC1_CRTC1_04_crtc1_out_hact(data)                                     (0x00000FFF&(data))
#define  CRTC1_CRTC1_04_get_crtc1_out_vs_width(data)                             ((0xFE000000&(data))>>25)
#define  CRTC1_CRTC1_04_get_crtc1_out_vact(data)                                 ((0x01FFF000&(data))>>12)
#define  CRTC1_CRTC1_04_get_crtc1_out_hact(data)                                 (0x00000FFF&(data))

#define  CRTC1_CRTC1_08                                                         0x1809D108
#define  CRTC1_CRTC1_08_reg_addr                                                 "0xB809D108"
#define  CRTC1_CRTC1_08_reg                                                      0xB809D108
#define  CRTC1_CRTC1_08_inst_addr                                                "0x0002"
#define  set_CRTC1_CRTC1_08_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_08_reg)=data)
#define  get_CRTC1_CRTC1_08_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_08_reg))
#define  CRTC1_CRTC1_08_crtc1_dummy_00_shift                                     (31)
#define  CRTC1_CRTC1_08_crtc1_lbmc_index_update_en_shift                         (30)
#define  CRTC1_CRTC1_08_crtc1_htotal_timing_update_en_shift                      (29)
#define  CRTC1_CRTC1_08_crtc1_osd_timing_update_en_shift                         (28)
#define  CRTC1_CRTC1_08_crtc1_frc_timing_update_en_shift                         (27)
#define  CRTC1_CRTC1_08_crtc1_out_timing_update_en_shift                         (26)
#define  CRTC1_CRTC1_08_crtc1_vtrig_timing_update_en_shift                       (25)
#define  CRTC1_CRTC1_08_crtc1_vspll_timing_update_en_shift                       (24)
#define  CRTC1_CRTC1_08_crtc1_out_vs_bporch_shift                                (12)
#define  CRTC1_CRTC1_08_crtc1_out_hs_bporch_shift                                (0)
#define  CRTC1_CRTC1_08_crtc1_dummy_00_mask                                      (0x80000000)
#define  CRTC1_CRTC1_08_crtc1_lbmc_index_update_en_mask                          (0x40000000)
#define  CRTC1_CRTC1_08_crtc1_htotal_timing_update_en_mask                       (0x20000000)
#define  CRTC1_CRTC1_08_crtc1_osd_timing_update_en_mask                          (0x10000000)
#define  CRTC1_CRTC1_08_crtc1_frc_timing_update_en_mask                          (0x08000000)
#define  CRTC1_CRTC1_08_crtc1_out_timing_update_en_mask                          (0x04000000)
#define  CRTC1_CRTC1_08_crtc1_vtrig_timing_update_en_mask                        (0x02000000)
#define  CRTC1_CRTC1_08_crtc1_vspll_timing_update_en_mask                        (0x01000000)
#define  CRTC1_CRTC1_08_crtc1_out_vs_bporch_mask                                 (0x00FFF000)
#define  CRTC1_CRTC1_08_crtc1_out_hs_bporch_mask                                 (0x00000FFF)
#define  CRTC1_CRTC1_08_crtc1_dummy_00(data)                                     (0x80000000&((data)<<31))
#define  CRTC1_CRTC1_08_crtc1_lbmc_index_update_en(data)                         (0x40000000&((data)<<30))
#define  CRTC1_CRTC1_08_crtc1_htotal_timing_update_en(data)                      (0x20000000&((data)<<29))
#define  CRTC1_CRTC1_08_crtc1_osd_timing_update_en(data)                         (0x10000000&((data)<<28))
#define  CRTC1_CRTC1_08_crtc1_frc_timing_update_en(data)                         (0x08000000&((data)<<27))
#define  CRTC1_CRTC1_08_crtc1_out_timing_update_en(data)                         (0x04000000&((data)<<26))
#define  CRTC1_CRTC1_08_crtc1_vtrig_timing_update_en(data)                       (0x02000000&((data)<<25))
#define  CRTC1_CRTC1_08_crtc1_vspll_timing_update_en(data)                       (0x01000000&((data)<<24))
#define  CRTC1_CRTC1_08_crtc1_out_vs_bporch(data)                                (0x00FFF000&((data)<<12))
#define  CRTC1_CRTC1_08_crtc1_out_hs_bporch(data)                                (0x00000FFF&(data))
#define  CRTC1_CRTC1_08_get_crtc1_dummy_00(data)                                 ((0x80000000&(data))>>31)
#define  CRTC1_CRTC1_08_get_crtc1_lbmc_index_update_en(data)                     ((0x40000000&(data))>>30)
#define  CRTC1_CRTC1_08_get_crtc1_htotal_timing_update_en(data)                  ((0x20000000&(data))>>29)
#define  CRTC1_CRTC1_08_get_crtc1_osd_timing_update_en(data)                     ((0x10000000&(data))>>28)
#define  CRTC1_CRTC1_08_get_crtc1_frc_timing_update_en(data)                     ((0x08000000&(data))>>27)
#define  CRTC1_CRTC1_08_get_crtc1_out_timing_update_en(data)                     ((0x04000000&(data))>>26)
#define  CRTC1_CRTC1_08_get_crtc1_vtrig_timing_update_en(data)                   ((0x02000000&(data))>>25)
#define  CRTC1_CRTC1_08_get_crtc1_vspll_timing_update_en(data)                   ((0x01000000&(data))>>24)
#define  CRTC1_CRTC1_08_get_crtc1_out_vs_bporch(data)                            ((0x00FFF000&(data))>>12)
#define  CRTC1_CRTC1_08_get_crtc1_out_hs_bporch(data)                            (0x00000FFF&(data))

#define  CRTC1_CRTC1_0C                                                         0x1809D10C
#define  CRTC1_CRTC1_0C_reg_addr                                                 "0xB809D10C"
#define  CRTC1_CRTC1_0C_reg                                                      0xB809D10C
#define  CRTC1_CRTC1_0C_inst_addr                                                "0x0003"
#define  set_CRTC1_CRTC1_0C_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_0C_reg)=data)
#define  get_CRTC1_CRTC1_0C_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_0C_reg))
#define  CRTC1_CRTC1_0C_crtc1_dummy_01_shift                                     (25)
#define  CRTC1_CRTC1_0C_crtc1_osd_vact_shift                                     (12)
#define  CRTC1_CRTC1_0C_crtc1_osd_hact_shift                                     (0)
#define  CRTC1_CRTC1_0C_crtc1_dummy_01_mask                                      (0xFE000000)
#define  CRTC1_CRTC1_0C_crtc1_osd_vact_mask                                      (0x01FFF000)
#define  CRTC1_CRTC1_0C_crtc1_osd_hact_mask                                      (0x00000FFF)
#define  CRTC1_CRTC1_0C_crtc1_dummy_01(data)                                     (0xFE000000&((data)<<25))
#define  CRTC1_CRTC1_0C_crtc1_osd_vact(data)                                     (0x01FFF000&((data)<<12))
#define  CRTC1_CRTC1_0C_crtc1_osd_hact(data)                                     (0x00000FFF&(data))
#define  CRTC1_CRTC1_0C_get_crtc1_dummy_01(data)                                 ((0xFE000000&(data))>>25)
#define  CRTC1_CRTC1_0C_get_crtc1_osd_vact(data)                                 ((0x01FFF000&(data))>>12)
#define  CRTC1_CRTC1_0C_get_crtc1_osd_hact(data)                                 (0x00000FFF&(data))

#define  CRTC1_CRTC1_10                                                         0x1809D110
#define  CRTC1_CRTC1_10_reg_addr                                                 "0xB809D110"
#define  CRTC1_CRTC1_10_reg                                                      0xB809D110
#define  CRTC1_CRTC1_10_inst_addr                                                "0x0004"
#define  set_CRTC1_CRTC1_10_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_10_reg)=data)
#define  get_CRTC1_CRTC1_10_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_10_reg))
#define  CRTC1_CRTC1_10_crtc1_dummy_02_shift                                     (24)
#define  CRTC1_CRTC1_10_crtc1_osd_vs_bporch_shift                                (12)
#define  CRTC1_CRTC1_10_crtc1_osd_hs_bporch_shift                                (0)
#define  CRTC1_CRTC1_10_crtc1_dummy_02_mask                                      (0xFF000000)
#define  CRTC1_CRTC1_10_crtc1_osd_vs_bporch_mask                                 (0x00FFF000)
#define  CRTC1_CRTC1_10_crtc1_osd_hs_bporch_mask                                 (0x00000FFF)
#define  CRTC1_CRTC1_10_crtc1_dummy_02(data)                                     (0xFF000000&((data)<<24))
#define  CRTC1_CRTC1_10_crtc1_osd_vs_bporch(data)                                (0x00FFF000&((data)<<12))
#define  CRTC1_CRTC1_10_crtc1_osd_hs_bporch(data)                                (0x00000FFF&(data))
#define  CRTC1_CRTC1_10_get_crtc1_dummy_02(data)                                 ((0xFF000000&(data))>>24)
#define  CRTC1_CRTC1_10_get_crtc1_osd_vs_bporch(data)                            ((0x00FFF000&(data))>>12)
#define  CRTC1_CRTC1_10_get_crtc1_osd_hs_bporch(data)                            (0x00000FFF&(data))

#define  CRTC1_CRTC1_14                                                         0x1809D114
#define  CRTC1_CRTC1_14_reg_addr                                                 "0xB809D114"
#define  CRTC1_CRTC1_14_reg                                                      0xB809D114
#define  CRTC1_CRTC1_14_inst_addr                                                "0x0005"
#define  set_CRTC1_CRTC1_14_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_14_reg)=data)
#define  get_CRTC1_CRTC1_14_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_14_reg))
#define  CRTC1_CRTC1_14_crtc1_frc_prede_lnum_shift                               (30)
#define  CRTC1_CRTC1_14_crtc1_frc_prede_pnum_shift                               (25)
#define  CRTC1_CRTC1_14_crtc1_frc_vact_shift                                     (12)
#define  CRTC1_CRTC1_14_crtc1_frc_hact_shift                                     (0)
#define  CRTC1_CRTC1_14_crtc1_frc_prede_lnum_mask                                (0xC0000000)
#define  CRTC1_CRTC1_14_crtc1_frc_prede_pnum_mask                                (0x3E000000)
#define  CRTC1_CRTC1_14_crtc1_frc_vact_mask                                      (0x01FFF000)
#define  CRTC1_CRTC1_14_crtc1_frc_hact_mask                                      (0x00000FFF)
#define  CRTC1_CRTC1_14_crtc1_frc_prede_lnum(data)                               (0xC0000000&((data)<<30))
#define  CRTC1_CRTC1_14_crtc1_frc_prede_pnum(data)                               (0x3E000000&((data)<<25))
#define  CRTC1_CRTC1_14_crtc1_frc_vact(data)                                     (0x01FFF000&((data)<<12))
#define  CRTC1_CRTC1_14_crtc1_frc_hact(data)                                     (0x00000FFF&(data))
#define  CRTC1_CRTC1_14_get_crtc1_frc_prede_lnum(data)                           ((0xC0000000&(data))>>30)
#define  CRTC1_CRTC1_14_get_crtc1_frc_prede_pnum(data)                           ((0x3E000000&(data))>>25)
#define  CRTC1_CRTC1_14_get_crtc1_frc_vact(data)                                 ((0x01FFF000&(data))>>12)
#define  CRTC1_CRTC1_14_get_crtc1_frc_hact(data)                                 (0x00000FFF&(data))

#define  CRTC1_CRTC1_18                                                         0x1809D118
#define  CRTC1_CRTC1_18_reg_addr                                                 "0xB809D118"
#define  CRTC1_CRTC1_18_reg                                                      0xB809D118
#define  CRTC1_CRTC1_18_inst_addr                                                "0x0006"
#define  set_CRTC1_CRTC1_18_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_18_reg)=data)
#define  get_CRTC1_CRTC1_18_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_18_reg))
#define  CRTC1_CRTC1_18_crtc1_dummy_03_shift                                     (24)
#define  CRTC1_CRTC1_18_crtc1_frc_vs_bporch_shift                                (12)
#define  CRTC1_CRTC1_18_crtc1_frc_hs_bporch_shift                                (0)
#define  CRTC1_CRTC1_18_crtc1_dummy_03_mask                                      (0xFF000000)
#define  CRTC1_CRTC1_18_crtc1_frc_vs_bporch_mask                                 (0x00FFF000)
#define  CRTC1_CRTC1_18_crtc1_frc_hs_bporch_mask                                 (0x00000FFF)
#define  CRTC1_CRTC1_18_crtc1_dummy_03(data)                                     (0xFF000000&((data)<<24))
#define  CRTC1_CRTC1_18_crtc1_frc_vs_bporch(data)                                (0x00FFF000&((data)<<12))
#define  CRTC1_CRTC1_18_crtc1_frc_hs_bporch(data)                                (0x00000FFF&(data))
#define  CRTC1_CRTC1_18_get_crtc1_dummy_03(data)                                 ((0xFF000000&(data))>>24)
#define  CRTC1_CRTC1_18_get_crtc1_frc_vs_bporch(data)                            ((0x00FFF000&(data))>>12)
#define  CRTC1_CRTC1_18_get_crtc1_frc_hs_bporch(data)                            (0x00000FFF&(data))

#define  CRTC1_CRTC1_1C                                                         0x1809D11C
#define  CRTC1_CRTC1_1C_reg_addr                                                 "0xB809D11C"
#define  CRTC1_CRTC1_1C_reg                                                      0xB809D11C
#define  CRTC1_CRTC1_1C_inst_addr                                                "0x0007"
#define  set_CRTC1_CRTC1_1C_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_1C_reg)=data)
#define  get_CRTC1_CRTC1_1C_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_1C_reg))
#define  CRTC1_CRTC1_1C_crtc1_vspll_me_work_mode_shift                           (26)
#define  CRTC1_CRTC1_1C_crtc1_me2_org_vtrig_dly_shift                            (13)
#define  CRTC1_CRTC1_1C_crtc1_ip_vtrig_dly_shift                                 (0)
#define  CRTC1_CRTC1_1C_crtc1_vspll_me_work_mode_mask                            (0x0C000000)
#define  CRTC1_CRTC1_1C_crtc1_me2_org_vtrig_dly_mask                             (0x03FFE000)
#define  CRTC1_CRTC1_1C_crtc1_ip_vtrig_dly_mask                                  (0x00001FFF)
#define  CRTC1_CRTC1_1C_crtc1_vspll_me_work_mode(data)                           (0x0C000000&((data)<<26))
#define  CRTC1_CRTC1_1C_crtc1_me2_org_vtrig_dly(data)                            (0x03FFE000&((data)<<13))
#define  CRTC1_CRTC1_1C_crtc1_ip_vtrig_dly(data)                                 (0x00001FFF&(data))
#define  CRTC1_CRTC1_1C_get_crtc1_vspll_me_work_mode(data)                       ((0x0C000000&(data))>>26)
#define  CRTC1_CRTC1_1C_get_crtc1_me2_org_vtrig_dly(data)                        ((0x03FFE000&(data))>>13)
#define  CRTC1_CRTC1_1C_get_crtc1_ip_vtrig_dly(data)                             (0x00001FFF&(data))

#define  CRTC1_CRTC1_20                                                         0x1809D120
#define  CRTC1_CRTC1_20_reg_addr                                                 "0xB809D120"
#define  CRTC1_CRTC1_20_reg                                                      0xB809D120
#define  CRTC1_CRTC1_20_inst_addr                                                "0x0008"
#define  set_CRTC1_CRTC1_20_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_20_reg)=data)
#define  get_CRTC1_CRTC1_20_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_20_reg))
#define  CRTC1_CRTC1_20_crtc1_debug_mux_shift                                    (30)
#define  CRTC1_CRTC1_20_crtc1_frc_vtrig_dly_shift                                (20)
#define  CRTC1_CRTC1_20_crtc1_osd_vtrig_dly_shift                                (10)
#define  CRTC1_CRTC1_20_crtc1_out_vtrig_dly_shift                                (0)
#define  CRTC1_CRTC1_20_crtc1_debug_mux_mask                                     (0xC0000000)
#define  CRTC1_CRTC1_20_crtc1_frc_vtrig_dly_mask                                 (0x3FF00000)
#define  CRTC1_CRTC1_20_crtc1_osd_vtrig_dly_mask                                 (0x000FFC00)
#define  CRTC1_CRTC1_20_crtc1_out_vtrig_dly_mask                                 (0x000003FF)
#define  CRTC1_CRTC1_20_crtc1_debug_mux(data)                                    (0xC0000000&((data)<<30))
#define  CRTC1_CRTC1_20_crtc1_frc_vtrig_dly(data)                                (0x3FF00000&((data)<<20))
#define  CRTC1_CRTC1_20_crtc1_osd_vtrig_dly(data)                                (0x000FFC00&((data)<<10))
#define  CRTC1_CRTC1_20_crtc1_out_vtrig_dly(data)                                (0x000003FF&(data))
#define  CRTC1_CRTC1_20_get_crtc1_debug_mux(data)                                ((0xC0000000&(data))>>30)
#define  CRTC1_CRTC1_20_get_crtc1_frc_vtrig_dly(data)                            ((0x3FF00000&(data))>>20)
#define  CRTC1_CRTC1_20_get_crtc1_osd_vtrig_dly(data)                            ((0x000FFC00&(data))>>10)
#define  CRTC1_CRTC1_20_get_crtc1_out_vtrig_dly(data)                            (0x000003FF&(data))

#define  CRTC1_CRTC1_24                                                         0x1809D124
#define  CRTC1_CRTC1_24_reg_addr                                                 "0xB809D124"
#define  CRTC1_CRTC1_24_reg                                                      0xB809D124
#define  CRTC1_CRTC1_24_inst_addr                                                "0x0009"
#define  set_CRTC1_CRTC1_24_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_24_reg)=data)
#define  get_CRTC1_CRTC1_24_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_24_reg))
#define  CRTC1_CRTC1_24_crtc1_lbme2_vtrig_dly_shift                              (19)
#define  CRTC1_CRTC1_24_crtc1_dec_vtrig_dly_shift                                (6)
#define  CRTC1_CRTC1_24_crtc1_me2_vtrig_dly_shift                                (0)
#define  CRTC1_CRTC1_24_crtc1_lbme2_vtrig_dly_mask                               (0xFFF80000)
#define  CRTC1_CRTC1_24_crtc1_dec_vtrig_dly_mask                                 (0x0007FFC0)
#define  CRTC1_CRTC1_24_crtc1_me2_vtrig_dly_mask                                 (0x0000003F)
#define  CRTC1_CRTC1_24_crtc1_lbme2_vtrig_dly(data)                              (0xFFF80000&((data)<<19))
#define  CRTC1_CRTC1_24_crtc1_dec_vtrig_dly(data)                                (0x0007FFC0&((data)<<6))
#define  CRTC1_CRTC1_24_crtc1_me2_vtrig_dly(data)                                (0x0000003F&(data))
#define  CRTC1_CRTC1_24_get_crtc1_lbme2_vtrig_dly(data)                          ((0xFFF80000&(data))>>19)
#define  CRTC1_CRTC1_24_get_crtc1_dec_vtrig_dly(data)                            ((0x0007FFC0&(data))>>6)
#define  CRTC1_CRTC1_24_get_crtc1_me2_vtrig_dly(data)                            (0x0000003F&(data))

#define  CRTC1_CRTC1_28                                                         0x1809D128
#define  CRTC1_CRTC1_28_reg_addr                                                 "0xB809D128"
#define  CRTC1_CRTC1_28_reg                                                      0xB809D128
#define  CRTC1_CRTC1_28_inst_addr                                                "0x000A"
#define  set_CRTC1_CRTC1_28_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_28_reg)=data)
#define  get_CRTC1_CRTC1_28_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_28_reg))
#define  CRTC1_CRTC1_28_crtc1_vspll_reset_shift                                  (31)
#define  CRTC1_CRTC1_28_crtc1_force_inside_fhd_timing_shift                      (30)
#define  CRTC1_CRTC1_28_crtc1_slave_mode_on_shift                                (29)
#define  CRTC1_CRTC1_28_crtc1_lbmc_vtrig_dly_shift                               (16)
#define  CRTC1_CRTC1_28_crtc1_mc_vtrig_dly_shift                                 (8)
#define  CRTC1_CRTC1_28_crtc1_dehalo_vtrig_dly_shift                             (0)
#define  CRTC1_CRTC1_28_crtc1_vspll_reset_mask                                   (0x80000000)
#define  CRTC1_CRTC1_28_crtc1_force_inside_fhd_timing_mask                       (0x40000000)
#define  CRTC1_CRTC1_28_crtc1_slave_mode_on_mask                                 (0x20000000)
#define  CRTC1_CRTC1_28_crtc1_lbmc_vtrig_dly_mask                                (0x1FFF0000)
#define  CRTC1_CRTC1_28_crtc1_mc_vtrig_dly_mask                                  (0x0000FF00)
#define  CRTC1_CRTC1_28_crtc1_dehalo_vtrig_dly_mask                              (0x000000FF)
#define  CRTC1_CRTC1_28_crtc1_vspll_reset(data)                                  (0x80000000&((data)<<31))
#define  CRTC1_CRTC1_28_crtc1_force_inside_fhd_timing(data)                      (0x40000000&((data)<<30))
#define  CRTC1_CRTC1_28_crtc1_slave_mode_on(data)                                (0x20000000&((data)<<29))
#define  CRTC1_CRTC1_28_crtc1_lbmc_vtrig_dly(data)                               (0x1FFF0000&((data)<<16))
#define  CRTC1_CRTC1_28_crtc1_mc_vtrig_dly(data)                                 (0x0000FF00&((data)<<8))
#define  CRTC1_CRTC1_28_crtc1_dehalo_vtrig_dly(data)                             (0x000000FF&(data))
#define  CRTC1_CRTC1_28_get_crtc1_vspll_reset(data)                              ((0x80000000&(data))>>31)
#define  CRTC1_CRTC1_28_get_crtc1_force_inside_fhd_timing(data)                  ((0x40000000&(data))>>30)
#define  CRTC1_CRTC1_28_get_crtc1_slave_mode_on(data)                            ((0x20000000&(data))>>29)
#define  CRTC1_CRTC1_28_get_crtc1_lbmc_vtrig_dly(data)                           ((0x1FFF0000&(data))>>16)
#define  CRTC1_CRTC1_28_get_crtc1_mc_vtrig_dly(data)                             ((0x0000FF00&(data))>>8)
#define  CRTC1_CRTC1_28_get_crtc1_dehalo_vtrig_dly(data)                         (0x000000FF&(data))

#define  CRTC1_CRTC1_2C                                                         0x1809D12C
#define  CRTC1_CRTC1_2C_reg_addr                                                 "0xB809D12C"
#define  CRTC1_CRTC1_2C_reg                                                      0xB809D12C
#define  CRTC1_CRTC1_2C_inst_addr                                                "0x000B"
#define  set_CRTC1_CRTC1_2C_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_2C_reg)=data)
#define  get_CRTC1_CRTC1_2C_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_2C_reg))
#define  CRTC1_CRTC1_2C_crtc1_lbmc_lfidx3_dly_shift                              (24)
#define  CRTC1_CRTC1_2C_crtc1_lbmc_lfidx2_dly_shift                              (16)
#define  CRTC1_CRTC1_2C_crtc1_lbmc_lfidx1_dly_shift                              (8)
#define  CRTC1_CRTC1_2C_crtc1_lbmc_lfidx0_dly_shift                              (0)
#define  CRTC1_CRTC1_2C_crtc1_lbmc_lfidx3_dly_mask                               (0xFF000000)
#define  CRTC1_CRTC1_2C_crtc1_lbmc_lfidx2_dly_mask                               (0x00FF0000)
#define  CRTC1_CRTC1_2C_crtc1_lbmc_lfidx1_dly_mask                               (0x0000FF00)
#define  CRTC1_CRTC1_2C_crtc1_lbmc_lfidx0_dly_mask                               (0x000000FF)
#define  CRTC1_CRTC1_2C_crtc1_lbmc_lfidx3_dly(data)                              (0xFF000000&((data)<<24))
#define  CRTC1_CRTC1_2C_crtc1_lbmc_lfidx2_dly(data)                              (0x00FF0000&((data)<<16))
#define  CRTC1_CRTC1_2C_crtc1_lbmc_lfidx1_dly(data)                              (0x0000FF00&((data)<<8))
#define  CRTC1_CRTC1_2C_crtc1_lbmc_lfidx0_dly(data)                              (0x000000FF&(data))
#define  CRTC1_CRTC1_2C_get_crtc1_lbmc_lfidx3_dly(data)                          ((0xFF000000&(data))>>24)
#define  CRTC1_CRTC1_2C_get_crtc1_lbmc_lfidx2_dly(data)                          ((0x00FF0000&(data))>>16)
#define  CRTC1_CRTC1_2C_get_crtc1_lbmc_lfidx1_dly(data)                          ((0x0000FF00&(data))>>8)
#define  CRTC1_CRTC1_2C_get_crtc1_lbmc_lfidx0_dly(data)                          (0x000000FF&(data))

#define  CRTC1_CRTC1_30                                                         0x1809D130
#define  CRTC1_CRTC1_30_reg_addr                                                 "0xB809D130"
#define  CRTC1_CRTC1_30_reg                                                      0xB809D130
#define  CRTC1_CRTC1_30_inst_addr                                                "0x000C"
#define  set_CRTC1_CRTC1_30_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_30_reg)=data)
#define  get_CRTC1_CRTC1_30_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_30_reg))
#define  CRTC1_CRTC1_30_crtc1_lbmc_lfidx7_dly_shift                              (24)
#define  CRTC1_CRTC1_30_crtc1_lbmc_lfidx6_dly_shift                              (16)
#define  CRTC1_CRTC1_30_crtc1_lbmc_lfidx5_dly_shift                              (8)
#define  CRTC1_CRTC1_30_crtc1_lbmc_lfidx4_dly_shift                              (0)
#define  CRTC1_CRTC1_30_crtc1_lbmc_lfidx7_dly_mask                               (0xFF000000)
#define  CRTC1_CRTC1_30_crtc1_lbmc_lfidx6_dly_mask                               (0x00FF0000)
#define  CRTC1_CRTC1_30_crtc1_lbmc_lfidx5_dly_mask                               (0x0000FF00)
#define  CRTC1_CRTC1_30_crtc1_lbmc_lfidx4_dly_mask                               (0x000000FF)
#define  CRTC1_CRTC1_30_crtc1_lbmc_lfidx7_dly(data)                              (0xFF000000&((data)<<24))
#define  CRTC1_CRTC1_30_crtc1_lbmc_lfidx6_dly(data)                              (0x00FF0000&((data)<<16))
#define  CRTC1_CRTC1_30_crtc1_lbmc_lfidx5_dly(data)                              (0x0000FF00&((data)<<8))
#define  CRTC1_CRTC1_30_crtc1_lbmc_lfidx4_dly(data)                              (0x000000FF&(data))
#define  CRTC1_CRTC1_30_get_crtc1_lbmc_lfidx7_dly(data)                          ((0xFF000000&(data))>>24)
#define  CRTC1_CRTC1_30_get_crtc1_lbmc_lfidx6_dly(data)                          ((0x00FF0000&(data))>>16)
#define  CRTC1_CRTC1_30_get_crtc1_lbmc_lfidx5_dly(data)                          ((0x0000FF00&(data))>>8)
#define  CRTC1_CRTC1_30_get_crtc1_lbmc_lfidx4_dly(data)                          (0x000000FF&(data))

#define  CRTC1_CRTC1_34                                                         0x1809D134
#define  CRTC1_CRTC1_34_reg_addr                                                 "0xB809D134"
#define  CRTC1_CRTC1_34_reg                                                      0xB809D134
#define  CRTC1_CRTC1_34_inst_addr                                                "0x000D"
#define  set_CRTC1_CRTC1_34_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_34_reg)=data)
#define  get_CRTC1_CRTC1_34_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_34_reg))
#define  CRTC1_CRTC1_34_crtc1_lbmc_hfyidx2_dly_shift                             (24)
#define  CRTC1_CRTC1_34_crtc1_lbmc_hfyidx1_dly_shift                             (16)
#define  CRTC1_CRTC1_34_crtc1_lbmc_hfyidx0_dly_shift                             (8)
#define  CRTC1_CRTC1_34_crtc1_lbmc_lfidx8_dly_shift                              (0)
#define  CRTC1_CRTC1_34_crtc1_lbmc_hfyidx2_dly_mask                              (0xFF000000)
#define  CRTC1_CRTC1_34_crtc1_lbmc_hfyidx1_dly_mask                              (0x00FF0000)
#define  CRTC1_CRTC1_34_crtc1_lbmc_hfyidx0_dly_mask                              (0x0000FF00)
#define  CRTC1_CRTC1_34_crtc1_lbmc_lfidx8_dly_mask                               (0x000000FF)
#define  CRTC1_CRTC1_34_crtc1_lbmc_hfyidx2_dly(data)                             (0xFF000000&((data)<<24))
#define  CRTC1_CRTC1_34_crtc1_lbmc_hfyidx1_dly(data)                             (0x00FF0000&((data)<<16))
#define  CRTC1_CRTC1_34_crtc1_lbmc_hfyidx0_dly(data)                             (0x0000FF00&((data)<<8))
#define  CRTC1_CRTC1_34_crtc1_lbmc_lfidx8_dly(data)                              (0x000000FF&(data))
#define  CRTC1_CRTC1_34_get_crtc1_lbmc_hfyidx2_dly(data)                         ((0xFF000000&(data))>>24)
#define  CRTC1_CRTC1_34_get_crtc1_lbmc_hfyidx1_dly(data)                         ((0x00FF0000&(data))>>16)
#define  CRTC1_CRTC1_34_get_crtc1_lbmc_hfyidx0_dly(data)                         ((0x0000FF00&(data))>>8)
#define  CRTC1_CRTC1_34_get_crtc1_lbmc_lfidx8_dly(data)                          (0x000000FF&(data))

#define  CRTC1_CRTC1_38                                                         0x1809D138
#define  CRTC1_CRTC1_38_reg_addr                                                 "0xB809D138"
#define  CRTC1_CRTC1_38_reg                                                      0xB809D138
#define  CRTC1_CRTC1_38_inst_addr                                                "0x000E"
#define  set_CRTC1_CRTC1_38_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_38_reg)=data)
#define  get_CRTC1_CRTC1_38_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_38_reg))
#define  CRTC1_CRTC1_38_crtc1_frc_hdly_shift                                     (20)
#define  CRTC1_CRTC1_38_crtc1_out_hdly_shift                                     (8)
#define  CRTC1_CRTC1_38_crtc1_lbmc_hfcidx0_dly_shift                             (0)
#define  CRTC1_CRTC1_38_crtc1_frc_hdly_mask                                      (0xFFF00000)
#define  CRTC1_CRTC1_38_crtc1_out_hdly_mask                                      (0x000FFF00)
#define  CRTC1_CRTC1_38_crtc1_lbmc_hfcidx0_dly_mask                              (0x000000FF)
#define  CRTC1_CRTC1_38_crtc1_frc_hdly(data)                                     (0xFFF00000&((data)<<20))
#define  CRTC1_CRTC1_38_crtc1_out_hdly(data)                                     (0x000FFF00&((data)<<8))
#define  CRTC1_CRTC1_38_crtc1_lbmc_hfcidx0_dly(data)                             (0x000000FF&(data))
#define  CRTC1_CRTC1_38_get_crtc1_frc_hdly(data)                                 ((0xFFF00000&(data))>>20)
#define  CRTC1_CRTC1_38_get_crtc1_out_hdly(data)                                 ((0x000FFF00&(data))>>8)
#define  CRTC1_CRTC1_38_get_crtc1_lbmc_hfcidx0_dly(data)                         (0x000000FF&(data))

#define  CRTC1_CRTC1_3C                                                         0x1809D13C
#define  CRTC1_CRTC1_3C_reg_addr                                                 "0xB809D13C"
#define  CRTC1_CRTC1_3C_reg                                                      0xB809D13C
#define  CRTC1_CRTC1_3C_inst_addr                                                "0x000F"
#define  set_CRTC1_CRTC1_3C_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_3C_reg)=data)
#define  get_CRTC1_CRTC1_3C_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_3C_reg))
#define  CRTC1_CRTC1_3C_crtc1_me2_hdly_shift                                     (24)
#define  CRTC1_CRTC1_3C_crtc1_mc_hdly_shift                                      (12)
#define  CRTC1_CRTC1_3C_crtc1_osd_hdly_shift                                     (0)
#define  CRTC1_CRTC1_3C_crtc1_me2_hdly_mask                                      (0xFF000000)
#define  CRTC1_CRTC1_3C_crtc1_mc_hdly_mask                                       (0x00FFF000)
#define  CRTC1_CRTC1_3C_crtc1_osd_hdly_mask                                      (0x00000FFF)
#define  CRTC1_CRTC1_3C_crtc1_me2_hdly(data)                                     (0xFF000000&((data)<<24))
#define  CRTC1_CRTC1_3C_crtc1_mc_hdly(data)                                      (0x00FFF000&((data)<<12))
#define  CRTC1_CRTC1_3C_crtc1_osd_hdly(data)                                     (0x00000FFF&(data))
#define  CRTC1_CRTC1_3C_get_crtc1_me2_hdly(data)                                 ((0xFF000000&(data))>>24)
#define  CRTC1_CRTC1_3C_get_crtc1_mc_hdly(data)                                  ((0x00FFF000&(data))>>12)
#define  CRTC1_CRTC1_3C_get_crtc1_osd_hdly(data)                                 (0x00000FFF&(data))

#define  CRTC1_CRTC1_40                                                         0x1809D140
#define  CRTC1_CRTC1_40_reg_addr                                                 "0xB809D140"
#define  CRTC1_CRTC1_40_reg                                                      0xB809D140
#define  CRTC1_CRTC1_40_inst_addr                                                "0x0010"
#define  set_CRTC1_CRTC1_40_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_40_reg)=data)
#define  get_CRTC1_CRTC1_40_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_40_reg))
#define  CRTC1_CRTC1_40_crtc1_mc_row_type_shift                                  (30)
#define  CRTC1_CRTC1_40_crtc1_dehalo_row_type_shift                              (28)
#define  CRTC1_CRTC1_40_crtc1_me2_row_type_shift                                 (26)
#define  CRTC1_CRTC1_40_crtc1_dehalo_vact_shift                                  (13)
#define  CRTC1_CRTC1_40_crtc1_me2_vact_shift                                     (0)
#define  CRTC1_CRTC1_40_crtc1_mc_row_type_mask                                   (0xC0000000)
#define  CRTC1_CRTC1_40_crtc1_dehalo_row_type_mask                               (0x30000000)
#define  CRTC1_CRTC1_40_crtc1_me2_row_type_mask                                  (0x0C000000)
#define  CRTC1_CRTC1_40_crtc1_dehalo_vact_mask                                   (0x03FFE000)
#define  CRTC1_CRTC1_40_crtc1_me2_vact_mask                                      (0x00001FFF)
#define  CRTC1_CRTC1_40_crtc1_mc_row_type(data)                                  (0xC0000000&((data)<<30))
#define  CRTC1_CRTC1_40_crtc1_dehalo_row_type(data)                              (0x30000000&((data)<<28))
#define  CRTC1_CRTC1_40_crtc1_me2_row_type(data)                                 (0x0C000000&((data)<<26))
#define  CRTC1_CRTC1_40_crtc1_dehalo_vact(data)                                  (0x03FFE000&((data)<<13))
#define  CRTC1_CRTC1_40_crtc1_me2_vact(data)                                     (0x00001FFF&(data))
#define  CRTC1_CRTC1_40_get_crtc1_mc_row_type(data)                              ((0xC0000000&(data))>>30)
#define  CRTC1_CRTC1_40_get_crtc1_dehalo_row_type(data)                          ((0x30000000&(data))>>28)
#define  CRTC1_CRTC1_40_get_crtc1_me2_row_type(data)                             ((0x0C000000&(data))>>26)
#define  CRTC1_CRTC1_40_get_crtc1_dehalo_vact(data)                              ((0x03FFE000&(data))>>13)
#define  CRTC1_CRTC1_40_get_crtc1_me2_vact(data)                                 (0x00001FFF&(data))

#define  CRTC1_CRTC1_44                                                         0x1809D144
#define  CRTC1_CRTC1_44_reg_addr                                                 "0xB809D144"
#define  CRTC1_CRTC1_44_reg                                                      0xB809D144
#define  CRTC1_CRTC1_44_inst_addr                                                "0x0011"
#define  set_CRTC1_CRTC1_44_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_44_reg)=data)
#define  get_CRTC1_CRTC1_44_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_44_reg))
#define  CRTC1_CRTC1_44_crtc1_dhm4_row_hdly_shift                                (25)
#define  CRTC1_CRTC1_44_crtc1_dehalo_hdly_shift                                  (13)
#define  CRTC1_CRTC1_44_crtc1_mc_vact_shift                                      (0)
#define  CRTC1_CRTC1_44_crtc1_dhm4_row_hdly_mask                                 (0xFE000000)
#define  CRTC1_CRTC1_44_crtc1_dehalo_hdly_mask                                   (0x01FFE000)
#define  CRTC1_CRTC1_44_crtc1_mc_vact_mask                                       (0x00001FFF)
#define  CRTC1_CRTC1_44_crtc1_dhm4_row_hdly(data)                                (0xFE000000&((data)<<25))
#define  CRTC1_CRTC1_44_crtc1_dehalo_hdly(data)                                  (0x01FFE000&((data)<<13))
#define  CRTC1_CRTC1_44_crtc1_mc_vact(data)                                      (0x00001FFF&(data))
#define  CRTC1_CRTC1_44_get_crtc1_dhm4_row_hdly(data)                            ((0xFE000000&(data))>>25)
#define  CRTC1_CRTC1_44_get_crtc1_dehalo_hdly(data)                              ((0x01FFE000&(data))>>13)
#define  CRTC1_CRTC1_44_get_crtc1_mc_vact(data)                                  (0x00001FFF&(data))

#define  CRTC1_CRTC1_48                                                         0x1809D148
#define  CRTC1_CRTC1_48_reg_addr                                                 "0xB809D148"
#define  CRTC1_CRTC1_48_reg                                                      0xB809D148
#define  CRTC1_CRTC1_48_inst_addr                                                "0x0012"
#define  set_CRTC1_CRTC1_48_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_48_reg)=data)
#define  get_CRTC1_CRTC1_48_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_48_reg))
#define  CRTC1_CRTC1_48_crtc1_plogo_row_num_shift                                (21)
#define  CRTC1_CRTC1_48_crtc1_plogo_func_enable_shift                            (20)
#define  CRTC1_CRTC1_48_crtc1_plogo_fetch_row_type_shift                         (18)
#define  CRTC1_CRTC1_48_crtc1_plogo_row_type_shift                               (16)
#define  CRTC1_CRTC1_48_crtc1_plogo_fetch_row_num_shift                          (10)
#define  CRTC1_CRTC1_48_crtc1_plogo_dummy0_shift                                 (0)
#define  CRTC1_CRTC1_48_crtc1_plogo_row_num_mask                                 (0xFFE00000)
#define  CRTC1_CRTC1_48_crtc1_plogo_func_enable_mask                             (0x00100000)
#define  CRTC1_CRTC1_48_crtc1_plogo_fetch_row_type_mask                          (0x000C0000)
#define  CRTC1_CRTC1_48_crtc1_plogo_row_type_mask                                (0x00030000)
#define  CRTC1_CRTC1_48_crtc1_plogo_fetch_row_num_mask                           (0x0000FC00)
#define  CRTC1_CRTC1_48_crtc1_plogo_dummy0_mask                                  (0x000003FF)
#define  CRTC1_CRTC1_48_crtc1_plogo_row_num(data)                                (0xFFE00000&((data)<<21))
#define  CRTC1_CRTC1_48_crtc1_plogo_func_enable(data)                            (0x00100000&((data)<<20))
#define  CRTC1_CRTC1_48_crtc1_plogo_fetch_row_type(data)                         (0x000C0000&((data)<<18))
#define  CRTC1_CRTC1_48_crtc1_plogo_row_type(data)                               (0x00030000&((data)<<16))
#define  CRTC1_CRTC1_48_crtc1_plogo_fetch_row_num(data)                          (0x0000FC00&((data)<<10))
#define  CRTC1_CRTC1_48_crtc1_plogo_dummy0(data)                                 (0x000003FF&(data))
#define  CRTC1_CRTC1_48_get_crtc1_plogo_row_num(data)                            ((0xFFE00000&(data))>>21)
#define  CRTC1_CRTC1_48_get_crtc1_plogo_func_enable(data)                        ((0x00100000&(data))>>20)
#define  CRTC1_CRTC1_48_get_crtc1_plogo_fetch_row_type(data)                     ((0x000C0000&(data))>>18)
#define  CRTC1_CRTC1_48_get_crtc1_plogo_row_type(data)                           ((0x00030000&(data))>>16)
#define  CRTC1_CRTC1_48_get_crtc1_plogo_fetch_row_num(data)                      ((0x0000FC00&(data))>>10)
#define  CRTC1_CRTC1_48_get_crtc1_plogo_dummy0(data)                             (0x000003FF&(data))

#define  CRTC1_CRTC1_60                                                         0x1809D160
#define  CRTC1_CRTC1_60_reg_addr                                                 "0xB809D160"
#define  CRTC1_CRTC1_60_reg                                                      0xB809D160
#define  CRTC1_CRTC1_60_inst_addr                                                "0x0013"
#define  set_CRTC1_CRTC1_60_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_60_reg)=data)
#define  get_CRTC1_CRTC1_60_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_60_reg))
#define  CRTC1_CRTC1_60_crtc1_vspll_hw_debug_shift                               (24)
#define  CRTC1_CRTC1_60_crtc1_m_shift                                            (16)
#define  CRTC1_CRTC1_60_crtc1_n_shift                                            (8)
#define  CRTC1_CRTC1_60_crtc1_vspll_period_det_iir_ratio_shift                   (4)
#define  CRTC1_CRTC1_60_crtc1_vspll_init_v_total_en_shift                        (3)
#define  CRTC1_CRTC1_60_crtc1_vspll_period_det_mode_shift                        (2)
#define  CRTC1_CRTC1_60_crtc1_n2m_mode_shift                                     (0)
#define  CRTC1_CRTC1_60_crtc1_vspll_hw_debug_mask                                (0xFF000000)
#define  CRTC1_CRTC1_60_crtc1_m_mask                                             (0x00FF0000)
#define  CRTC1_CRTC1_60_crtc1_n_mask                                             (0x0000FF00)
#define  CRTC1_CRTC1_60_crtc1_vspll_period_det_iir_ratio_mask                    (0x000000F0)
#define  CRTC1_CRTC1_60_crtc1_vspll_init_v_total_en_mask                         (0x00000008)
#define  CRTC1_CRTC1_60_crtc1_vspll_period_det_mode_mask                         (0x00000004)
#define  CRTC1_CRTC1_60_crtc1_n2m_mode_mask                                      (0x00000003)
#define  CRTC1_CRTC1_60_crtc1_vspll_hw_debug(data)                               (0xFF000000&((data)<<24))
#define  CRTC1_CRTC1_60_crtc1_m(data)                                            (0x00FF0000&((data)<<16))
#define  CRTC1_CRTC1_60_crtc1_n(data)                                            (0x0000FF00&((data)<<8))
#define  CRTC1_CRTC1_60_crtc1_vspll_period_det_iir_ratio(data)                   (0x000000F0&((data)<<4))
#define  CRTC1_CRTC1_60_crtc1_vspll_init_v_total_en(data)                        (0x00000008&((data)<<3))
#define  CRTC1_CRTC1_60_crtc1_vspll_period_det_mode(data)                        (0x00000004&((data)<<2))
#define  CRTC1_CRTC1_60_crtc1_n2m_mode(data)                                     (0x00000003&(data))
#define  CRTC1_CRTC1_60_get_crtc1_vspll_hw_debug(data)                           ((0xFF000000&(data))>>24)
#define  CRTC1_CRTC1_60_get_crtc1_m(data)                                        ((0x00FF0000&(data))>>16)
#define  CRTC1_CRTC1_60_get_crtc1_n(data)                                        ((0x0000FF00&(data))>>8)
#define  CRTC1_CRTC1_60_get_crtc1_vspll_period_det_iir_ratio(data)               ((0x000000F0&(data))>>4)
#define  CRTC1_CRTC1_60_get_crtc1_vspll_init_v_total_en(data)                    ((0x00000008&(data))>>3)
#define  CRTC1_CRTC1_60_get_crtc1_vspll_period_det_mode(data)                    ((0x00000004&(data))>>2)
#define  CRTC1_CRTC1_60_get_crtc1_n2m_mode(data)                                 (0x00000003&(data))

#define  CRTC1_CRTC1_64                                                         0x1809D164
#define  CRTC1_CRTC1_64_reg_addr                                                 "0xB809D164"
#define  CRTC1_CRTC1_64_reg                                                      0xB809D164
#define  CRTC1_CRTC1_64_inst_addr                                                "0x0014"
#define  set_CRTC1_CRTC1_64_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_64_reg)=data)
#define  get_CRTC1_CRTC1_64_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_64_reg))
#define  CRTC1_CRTC1_64_crtc1_vspll_min_v_total_shift                            (13)
#define  CRTC1_CRTC1_64_crtc1_vspll_max_v_total_shift                            (0)
#define  CRTC1_CRTC1_64_crtc1_vspll_min_v_total_mask                             (0x03FFE000)
#define  CRTC1_CRTC1_64_crtc1_vspll_max_v_total_mask                             (0x00001FFF)
#define  CRTC1_CRTC1_64_crtc1_vspll_min_v_total(data)                            (0x03FFE000&((data)<<13))
#define  CRTC1_CRTC1_64_crtc1_vspll_max_v_total(data)                            (0x00001FFF&(data))
#define  CRTC1_CRTC1_64_get_crtc1_vspll_min_v_total(data)                        ((0x03FFE000&(data))>>13)
#define  CRTC1_CRTC1_64_get_crtc1_vspll_max_v_total(data)                        (0x00001FFF&(data))

#define  CRTC1_CRTC1_68                                                         0x1809D168
#define  CRTC1_CRTC1_68_reg_addr                                                 "0xB809D168"
#define  CRTC1_CRTC1_68_reg                                                      0xB809D168
#define  CRTC1_CRTC1_68_inst_addr                                                "0x0015"
#define  set_CRTC1_CRTC1_68_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_68_reg)=data)
#define  get_CRTC1_CRTC1_68_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_68_reg))
#define  CRTC1_CRTC1_68_crtc1_vspll_v_total_ofst_neg_shift                       (13)
#define  CRTC1_CRTC1_68_crtc1_vspll_v_total_ofst_pos_shift                       (0)
#define  CRTC1_CRTC1_68_crtc1_vspll_v_total_ofst_neg_mask                        (0x03FFE000)
#define  CRTC1_CRTC1_68_crtc1_vspll_v_total_ofst_pos_mask                        (0x00001FFF)
#define  CRTC1_CRTC1_68_crtc1_vspll_v_total_ofst_neg(data)                       (0x03FFE000&((data)<<13))
#define  CRTC1_CRTC1_68_crtc1_vspll_v_total_ofst_pos(data)                       (0x00001FFF&(data))
#define  CRTC1_CRTC1_68_get_crtc1_vspll_v_total_ofst_neg(data)                   ((0x03FFE000&(data))>>13)
#define  CRTC1_CRTC1_68_get_crtc1_vspll_v_total_ofst_pos(data)                   (0x00001FFF&(data))

#define  CRTC1_CRTC1_6C                                                         0x1809D16C
#define  CRTC1_CRTC1_6C_reg_addr                                                 "0xB809D16C"
#define  CRTC1_CRTC1_6C_reg                                                      0xB809D16C
#define  CRTC1_CRTC1_6C_inst_addr                                                "0x0016"
#define  set_CRTC1_CRTC1_6C_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_6C_reg)=data)
#define  get_CRTC1_CRTC1_6C_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_6C_reg))
#define  CRTC1_CRTC1_6C_crtc1_vspll_phase_diff_gain_shift                        (24)
#define  CRTC1_CRTC1_6C_crtc1_vspll_finer_period_gain_shift                      (16)
#define  CRTC1_CRTC1_6C_crtc1_vspll_rough_period_gain_shift                      (8)
#define  CRTC1_CRTC1_6C_crtc1_vspll_fine_tune_th_shift                           (0)
#define  CRTC1_CRTC1_6C_crtc1_vspll_phase_diff_gain_mask                         (0xFF000000)
#define  CRTC1_CRTC1_6C_crtc1_vspll_finer_period_gain_mask                       (0x00FF0000)
#define  CRTC1_CRTC1_6C_crtc1_vspll_rough_period_gain_mask                       (0x0000FF00)
#define  CRTC1_CRTC1_6C_crtc1_vspll_fine_tune_th_mask                            (0x000000FF)
#define  CRTC1_CRTC1_6C_crtc1_vspll_phase_diff_gain(data)                        (0xFF000000&((data)<<24))
#define  CRTC1_CRTC1_6C_crtc1_vspll_finer_period_gain(data)                      (0x00FF0000&((data)<<16))
#define  CRTC1_CRTC1_6C_crtc1_vspll_rough_period_gain(data)                      (0x0000FF00&((data)<<8))
#define  CRTC1_CRTC1_6C_crtc1_vspll_fine_tune_th(data)                           (0x000000FF&(data))
#define  CRTC1_CRTC1_6C_get_crtc1_vspll_phase_diff_gain(data)                    ((0xFF000000&(data))>>24)
#define  CRTC1_CRTC1_6C_get_crtc1_vspll_finer_period_gain(data)                  ((0x00FF0000&(data))>>16)
#define  CRTC1_CRTC1_6C_get_crtc1_vspll_rough_period_gain(data)                  ((0x0000FF00&(data))>>8)
#define  CRTC1_CRTC1_6C_get_crtc1_vspll_fine_tune_th(data)                       (0x000000FF&(data))

#define  CRTC1_CRTC1_70                                                         0x1809D170
#define  CRTC1_CRTC1_70_reg_addr                                                 "0xB809D170"
#define  CRTC1_CRTC1_70_reg                                                      0xB809D170
#define  CRTC1_CRTC1_70_inst_addr                                                "0x0017"
#define  set_CRTC1_CRTC1_70_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_70_reg)=data)
#define  get_CRTC1_CRTC1_70_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_70_reg))
#define  CRTC1_CRTC1_70_crtc1_vspll_phase_lock_th_shift                          (24)
#define  CRTC1_CRTC1_70_crtc1_vspll_period_lock_th_shift                         (16)
#define  CRTC1_CRTC1_70_crtc1_vspll_max_finer_step_shift                         (8)
#define  CRTC1_CRTC1_70_crtc1_vspll_max_rough_step_shift                         (0)
#define  CRTC1_CRTC1_70_crtc1_vspll_phase_lock_th_mask                           (0xFF000000)
#define  CRTC1_CRTC1_70_crtc1_vspll_period_lock_th_mask                          (0x00FF0000)
#define  CRTC1_CRTC1_70_crtc1_vspll_max_finer_step_mask                          (0x0000FF00)
#define  CRTC1_CRTC1_70_crtc1_vspll_max_rough_step_mask                          (0x000000FF)
#define  CRTC1_CRTC1_70_crtc1_vspll_phase_lock_th(data)                          (0xFF000000&((data)<<24))
#define  CRTC1_CRTC1_70_crtc1_vspll_period_lock_th(data)                         (0x00FF0000&((data)<<16))
#define  CRTC1_CRTC1_70_crtc1_vspll_max_finer_step(data)                         (0x0000FF00&((data)<<8))
#define  CRTC1_CRTC1_70_crtc1_vspll_max_rough_step(data)                         (0x000000FF&(data))
#define  CRTC1_CRTC1_70_get_crtc1_vspll_phase_lock_th(data)                      ((0xFF000000&(data))>>24)
#define  CRTC1_CRTC1_70_get_crtc1_vspll_period_lock_th(data)                     ((0x00FF0000&(data))>>16)
#define  CRTC1_CRTC1_70_get_crtc1_vspll_max_finer_step(data)                     ((0x0000FF00&(data))>>8)
#define  CRTC1_CRTC1_70_get_crtc1_vspll_max_rough_step(data)                     (0x000000FF&(data))

#define  CRTC1_CRTC1_74                                                         0x1809D174
#define  CRTC1_CRTC1_74_reg_addr                                                 "0xB809D174"
#define  CRTC1_CRTC1_74_reg                                                      0xB809D174
#define  CRTC1_CRTC1_74_inst_addr                                                "0x0018"
#define  set_CRTC1_CRTC1_74_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_74_reg)=data)
#define  get_CRTC1_CRTC1_74_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_74_reg))
#define  CRTC1_CRTC1_74_crtc1_lbmc_s_lfidx3_dly_shift                            (24)
#define  CRTC1_CRTC1_74_crtc1_lbmc_s_lfidx2_dly_shift                            (16)
#define  CRTC1_CRTC1_74_crtc1_lbmc_s_lfidx1_dly_shift                            (8)
#define  CRTC1_CRTC1_74_crtc1_lbmc_s_lfidx0_dly_shift                            (0)
#define  CRTC1_CRTC1_74_crtc1_lbmc_s_lfidx3_dly_mask                             (0xFF000000)
#define  CRTC1_CRTC1_74_crtc1_lbmc_s_lfidx2_dly_mask                             (0x00FF0000)
#define  CRTC1_CRTC1_74_crtc1_lbmc_s_lfidx1_dly_mask                             (0x0000FF00)
#define  CRTC1_CRTC1_74_crtc1_lbmc_s_lfidx0_dly_mask                             (0x000000FF)
#define  CRTC1_CRTC1_74_crtc1_lbmc_s_lfidx3_dly(data)                            (0xFF000000&((data)<<24))
#define  CRTC1_CRTC1_74_crtc1_lbmc_s_lfidx2_dly(data)                            (0x00FF0000&((data)<<16))
#define  CRTC1_CRTC1_74_crtc1_lbmc_s_lfidx1_dly(data)                            (0x0000FF00&((data)<<8))
#define  CRTC1_CRTC1_74_crtc1_lbmc_s_lfidx0_dly(data)                            (0x000000FF&(data))
#define  CRTC1_CRTC1_74_get_crtc1_lbmc_s_lfidx3_dly(data)                        ((0xFF000000&(data))>>24)
#define  CRTC1_CRTC1_74_get_crtc1_lbmc_s_lfidx2_dly(data)                        ((0x00FF0000&(data))>>16)
#define  CRTC1_CRTC1_74_get_crtc1_lbmc_s_lfidx1_dly(data)                        ((0x0000FF00&(data))>>8)
#define  CRTC1_CRTC1_74_get_crtc1_lbmc_s_lfidx0_dly(data)                        (0x000000FF&(data))

#define  CRTC1_CRTC1_78                                                         0x1809D178
#define  CRTC1_CRTC1_78_reg_addr                                                 "0xB809D178"
#define  CRTC1_CRTC1_78_reg                                                      0xB809D178
#define  CRTC1_CRTC1_78_inst_addr                                                "0x0019"
#define  set_CRTC1_CRTC1_78_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_78_reg)=data)
#define  get_CRTC1_CRTC1_78_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_78_reg))
#define  CRTC1_CRTC1_78_crtc1_lbmc_s_lfidx7_dly_shift                            (24)
#define  CRTC1_CRTC1_78_crtc1_lbmc_s_lfidx6_dly_shift                            (16)
#define  CRTC1_CRTC1_78_crtc1_lbmc_s_lfidx5_dly_shift                            (8)
#define  CRTC1_CRTC1_78_crtc1_lbmc_s_lfidx4_dly_shift                            (0)
#define  CRTC1_CRTC1_78_crtc1_lbmc_s_lfidx7_dly_mask                             (0xFF000000)
#define  CRTC1_CRTC1_78_crtc1_lbmc_s_lfidx6_dly_mask                             (0x00FF0000)
#define  CRTC1_CRTC1_78_crtc1_lbmc_s_lfidx5_dly_mask                             (0x0000FF00)
#define  CRTC1_CRTC1_78_crtc1_lbmc_s_lfidx4_dly_mask                             (0x000000FF)
#define  CRTC1_CRTC1_78_crtc1_lbmc_s_lfidx7_dly(data)                            (0xFF000000&((data)<<24))
#define  CRTC1_CRTC1_78_crtc1_lbmc_s_lfidx6_dly(data)                            (0x00FF0000&((data)<<16))
#define  CRTC1_CRTC1_78_crtc1_lbmc_s_lfidx5_dly(data)                            (0x0000FF00&((data)<<8))
#define  CRTC1_CRTC1_78_crtc1_lbmc_s_lfidx4_dly(data)                            (0x000000FF&(data))
#define  CRTC1_CRTC1_78_get_crtc1_lbmc_s_lfidx7_dly(data)                        ((0xFF000000&(data))>>24)
#define  CRTC1_CRTC1_78_get_crtc1_lbmc_s_lfidx6_dly(data)                        ((0x00FF0000&(data))>>16)
#define  CRTC1_CRTC1_78_get_crtc1_lbmc_s_lfidx5_dly(data)                        ((0x0000FF00&(data))>>8)
#define  CRTC1_CRTC1_78_get_crtc1_lbmc_s_lfidx4_dly(data)                        (0x000000FF&(data))

#define  CRTC1_CRTC1_7C                                                         0x1809D17C
#define  CRTC1_CRTC1_7C_reg_addr                                                 "0xB809D17C"
#define  CRTC1_CRTC1_7C_reg                                                      0xB809D17C
#define  CRTC1_CRTC1_7C_inst_addr                                                "0x001A"
#define  set_CRTC1_CRTC1_7C_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_7C_reg)=data)
#define  get_CRTC1_CRTC1_7C_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_7C_reg))
#define  CRTC1_CRTC1_7C_crtc1_lbmc_s_hfyidx1_dly_shift                           (24)
#define  CRTC1_CRTC1_7C_crtc1_lbmc_s_hfyidx0_dly_shift                           (16)
#define  CRTC1_CRTC1_7C_crtc1_lbmc_s_lfidx9_dly_shift                            (8)
#define  CRTC1_CRTC1_7C_crtc1_lbmc_s_lfidx8_dly_shift                            (0)
#define  CRTC1_CRTC1_7C_crtc1_lbmc_s_hfyidx1_dly_mask                            (0xFF000000)
#define  CRTC1_CRTC1_7C_crtc1_lbmc_s_hfyidx0_dly_mask                            (0x00FF0000)
#define  CRTC1_CRTC1_7C_crtc1_lbmc_s_lfidx9_dly_mask                             (0x0000FF00)
#define  CRTC1_CRTC1_7C_crtc1_lbmc_s_lfidx8_dly_mask                             (0x000000FF)
#define  CRTC1_CRTC1_7C_crtc1_lbmc_s_hfyidx1_dly(data)                           (0xFF000000&((data)<<24))
#define  CRTC1_CRTC1_7C_crtc1_lbmc_s_hfyidx0_dly(data)                           (0x00FF0000&((data)<<16))
#define  CRTC1_CRTC1_7C_crtc1_lbmc_s_lfidx9_dly(data)                            (0x0000FF00&((data)<<8))
#define  CRTC1_CRTC1_7C_crtc1_lbmc_s_lfidx8_dly(data)                            (0x000000FF&(data))
#define  CRTC1_CRTC1_7C_get_crtc1_lbmc_s_hfyidx1_dly(data)                       ((0xFF000000&(data))>>24)
#define  CRTC1_CRTC1_7C_get_crtc1_lbmc_s_hfyidx0_dly(data)                       ((0x00FF0000&(data))>>16)
#define  CRTC1_CRTC1_7C_get_crtc1_lbmc_s_lfidx9_dly(data)                        ((0x0000FF00&(data))>>8)
#define  CRTC1_CRTC1_7C_get_crtc1_lbmc_s_lfidx8_dly(data)                        (0x000000FF&(data))

#define  CRTC1_CRTC1_80                                                         0x1809D180
#define  CRTC1_CRTC1_80_reg_addr                                                 "0xB809D180"
#define  CRTC1_CRTC1_80_reg                                                      0xB809D180
#define  CRTC1_CRTC1_80_inst_addr                                                "0x001B"
#define  set_CRTC1_CRTC1_80_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_80_reg)=data)
#define  get_CRTC1_CRTC1_80_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_80_reg))
#define  CRTC1_CRTC1_80_crtc1_medh_vtrig_dly_shift                               (16)
#define  CRTC1_CRTC1_80_crtc1_lbmc_s_hfyidx3_dly_shift                           (8)
#define  CRTC1_CRTC1_80_crtc1_lbmc_s_hfyidx2_dly_shift                           (0)
#define  CRTC1_CRTC1_80_crtc1_medh_vtrig_dly_mask                                (0x0FFF0000)
#define  CRTC1_CRTC1_80_crtc1_lbmc_s_hfyidx3_dly_mask                            (0x0000FF00)
#define  CRTC1_CRTC1_80_crtc1_lbmc_s_hfyidx2_dly_mask                            (0x000000FF)
#define  CRTC1_CRTC1_80_crtc1_medh_vtrig_dly(data)                               (0x0FFF0000&((data)<<16))
#define  CRTC1_CRTC1_80_crtc1_lbmc_s_hfyidx3_dly(data)                           (0x0000FF00&((data)<<8))
#define  CRTC1_CRTC1_80_crtc1_lbmc_s_hfyidx2_dly(data)                           (0x000000FF&(data))
#define  CRTC1_CRTC1_80_get_crtc1_medh_vtrig_dly(data)                           ((0x0FFF0000&(data))>>16)
#define  CRTC1_CRTC1_80_get_crtc1_lbmc_s_hfyidx3_dly(data)                       ((0x0000FF00&(data))>>8)
#define  CRTC1_CRTC1_80_get_crtc1_lbmc_s_hfyidx2_dly(data)                       (0x000000FF&(data))

#define  CRTC1_CRTC1_84                                                         0x1809D184
#define  CRTC1_CRTC1_84_reg_addr                                                 "0xB809D184"
#define  CRTC1_CRTC1_84_reg                                                      0xB809D184
#define  CRTC1_CRTC1_84_inst_addr                                                "0x001C"
#define  set_CRTC1_CRTC1_84_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_84_reg)=data)
#define  get_CRTC1_CRTC1_84_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_84_reg))
#define  CRTC1_CRTC1_84_crtc1_mrtt_ofst_shift                                    (0)
#define  CRTC1_CRTC1_84_crtc1_mrtt_ofst_mask                                     (0x00001FFF)
#define  CRTC1_CRTC1_84_crtc1_mrtt_ofst(data)                                    (0x00001FFF&(data))
#define  CRTC1_CRTC1_84_get_crtc1_mrtt_ofst(data)                                (0x00001FFF&(data))

#define  CRTC1_CRTC1_88                                                         0x1809D188
#define  CRTC1_CRTC1_88_reg_addr                                                 "0xB809D188"
#define  CRTC1_CRTC1_88_reg                                                      0xB809D188
#define  CRTC1_CRTC1_88_inst_addr                                                "0x001D"
#define  set_CRTC1_CRTC1_88_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_88_reg)=data)
#define  get_CRTC1_CRTC1_88_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_88_reg))
#define  CRTC1_CRTC1_88_crtc1_lbme1_vtrig_dly_shift                              (19)
#define  CRTC1_CRTC1_88_crtc1_me1_vtrig_dly_shift                                (13)
#define  CRTC1_CRTC1_88_crtc1_me1_org_vtrig_dly_shift                            (0)
#define  CRTC1_CRTC1_88_crtc1_lbme1_vtrig_dly_mask                               (0xFFF80000)
#define  CRTC1_CRTC1_88_crtc1_me1_vtrig_dly_mask                                 (0x0007E000)
#define  CRTC1_CRTC1_88_crtc1_me1_org_vtrig_dly_mask                             (0x00001FFF)
#define  CRTC1_CRTC1_88_crtc1_lbme1_vtrig_dly(data)                              (0xFFF80000&((data)<<19))
#define  CRTC1_CRTC1_88_crtc1_me1_vtrig_dly(data)                                (0x0007E000&((data)<<13))
#define  CRTC1_CRTC1_88_crtc1_me1_org_vtrig_dly(data)                            (0x00001FFF&(data))
#define  CRTC1_CRTC1_88_get_crtc1_lbme1_vtrig_dly(data)                          ((0xFFF80000&(data))>>19)
#define  CRTC1_CRTC1_88_get_crtc1_me1_vtrig_dly(data)                            ((0x0007E000&(data))>>13)
#define  CRTC1_CRTC1_88_get_crtc1_me1_org_vtrig_dly(data)                        (0x00001FFF&(data))

#define  CRTC1_CRTC1_8C                                                         0x1809D18C
#define  CRTC1_CRTC1_8C_reg_addr                                                 "0xB809D18C"
#define  CRTC1_CRTC1_8C_reg                                                      0xB809D18C
#define  CRTC1_CRTC1_8C_inst_addr                                                "0x001E"
#define  set_CRTC1_CRTC1_8C_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_8C_reg)=data)
#define  get_CRTC1_CRTC1_8C_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_8C_reg))
#define  CRTC1_CRTC1_8C_crtc1_me1_hdly_shift                                     (15)
#define  CRTC1_CRTC1_8C_crtc1_me1_row_type_shift                                 (13)
#define  CRTC1_CRTC1_8C_crtc1_me1_vact_shift                                     (0)
#define  CRTC1_CRTC1_8C_crtc1_me1_hdly_mask                                      (0x007F8000)
#define  CRTC1_CRTC1_8C_crtc1_me1_row_type_mask                                  (0x00006000)
#define  CRTC1_CRTC1_8C_crtc1_me1_vact_mask                                      (0x00001FFF)
#define  CRTC1_CRTC1_8C_crtc1_me1_hdly(data)                                     (0x007F8000&((data)<<15))
#define  CRTC1_CRTC1_8C_crtc1_me1_row_type(data)                                 (0x00006000&((data)<<13))
#define  CRTC1_CRTC1_8C_crtc1_me1_vact(data)                                     (0x00001FFF&(data))
#define  CRTC1_CRTC1_8C_get_crtc1_me1_hdly(data)                                 ((0x007F8000&(data))>>15)
#define  CRTC1_CRTC1_8C_get_crtc1_me1_row_type(data)                             ((0x00006000&(data))>>13)
#define  CRTC1_CRTC1_8C_get_crtc1_me1_vact(data)                                 (0x00001FFF&(data))

#define  CRTC1_CRTC1_90                                                         0x1809D190
#define  CRTC1_CRTC1_90_reg_addr                                                 "0xB809D190"
#define  CRTC1_CRTC1_90_reg                                                      0xB809D190
#define  CRTC1_CRTC1_90_inst_addr                                                "0x001F"
#define  set_CRTC1_CRTC1_90_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_90_reg)=data)
#define  get_CRTC1_CRTC1_90_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_90_reg))
#define  CRTC1_CRTC1_90_crtc1_lr_reset_mode_shift                                (30)
#define  CRTC1_CRTC1_90_crtc1_3d_lr_enable_shift                                 (29)
#define  CRTC1_CRTC1_90_crtc1_lr_p_cycle_shift                                   (26)
#define  CRTC1_CRTC1_90_crtc1_lr_reset_outphase_match_shift                      (20)
#define  CRTC1_CRTC1_90_crtc1_lr_reset_inphase_match_shift                       (16)
#define  CRTC1_CRTC1_90_crtc1_black_p_patt_shift                                 (8)
#define  CRTC1_CRTC1_90_crtc1_lr_p_patt_shift                                    (0)
#define  CRTC1_CRTC1_90_crtc1_lr_reset_mode_mask                                 (0xC0000000)
#define  CRTC1_CRTC1_90_crtc1_3d_lr_enable_mask                                  (0x20000000)
#define  CRTC1_CRTC1_90_crtc1_lr_p_cycle_mask                                    (0x1C000000)
#define  CRTC1_CRTC1_90_crtc1_lr_reset_outphase_match_mask                       (0x03F00000)
#define  CRTC1_CRTC1_90_crtc1_lr_reset_inphase_match_mask                        (0x000F0000)
#define  CRTC1_CRTC1_90_crtc1_black_p_patt_mask                                  (0x0000FF00)
#define  CRTC1_CRTC1_90_crtc1_lr_p_patt_mask                                     (0x000000FF)
#define  CRTC1_CRTC1_90_crtc1_lr_reset_mode(data)                                (0xC0000000&((data)<<30))
#define  CRTC1_CRTC1_90_crtc1_3d_lr_enable(data)                                 (0x20000000&((data)<<29))
#define  CRTC1_CRTC1_90_crtc1_lr_p_cycle(data)                                   (0x1C000000&((data)<<26))
#define  CRTC1_CRTC1_90_crtc1_lr_reset_outphase_match(data)                      (0x03F00000&((data)<<20))
#define  CRTC1_CRTC1_90_crtc1_lr_reset_inphase_match(data)                       (0x000F0000&((data)<<16))
#define  CRTC1_CRTC1_90_crtc1_black_p_patt(data)                                 (0x0000FF00&((data)<<8))
#define  CRTC1_CRTC1_90_crtc1_lr_p_patt(data)                                    (0x000000FF&(data))
#define  CRTC1_CRTC1_90_get_crtc1_lr_reset_mode(data)                            ((0xC0000000&(data))>>30)
#define  CRTC1_CRTC1_90_get_crtc1_3d_lr_enable(data)                             ((0x20000000&(data))>>29)
#define  CRTC1_CRTC1_90_get_crtc1_lr_p_cycle(data)                               ((0x1C000000&(data))>>26)
#define  CRTC1_CRTC1_90_get_crtc1_lr_reset_outphase_match(data)                  ((0x03F00000&(data))>>20)
#define  CRTC1_CRTC1_90_get_crtc1_lr_reset_inphase_match(data)                   ((0x000F0000&(data))>>16)
#define  CRTC1_CRTC1_90_get_crtc1_black_p_patt(data)                             ((0x0000FF00&(data))>>8)
#define  CRTC1_CRTC1_90_get_crtc1_lr_p_patt(data)                                (0x000000FF&(data))

#define  CRTC1_CRTC1_94                                                         0x1809D194
#define  CRTC1_CRTC1_94_reg_addr                                                 "0xB809D194"
#define  CRTC1_CRTC1_94_reg                                                      0xB809D194
#define  CRTC1_CRTC1_94_inst_addr                                                "0x0020"
#define  set_CRTC1_CRTC1_94_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_94_reg)=data)
#define  get_CRTC1_CRTC1_94_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_94_reg))
#define  CRTC1_CRTC1_94_crtc1_me2dh_extcorr_vtrig_dly_shift                      (24)
#define  CRTC1_CRTC1_94_crtc1_me2dh_dobflt_vtrig_dly_shift                       (16)
#define  CRTC1_CRTC1_94_crtc1_me2dh_pstflt_vtrig_dly_shift                       (8)
#define  CRTC1_CRTC1_94_crtc1_me2dh_preflt_vtrig_dly_shift                       (0)
#define  CRTC1_CRTC1_94_crtc1_me2dh_extcorr_vtrig_dly_mask                       (0xFF000000)
#define  CRTC1_CRTC1_94_crtc1_me2dh_dobflt_vtrig_dly_mask                        (0x00FF0000)
#define  CRTC1_CRTC1_94_crtc1_me2dh_pstflt_vtrig_dly_mask                        (0x0000FF00)
#define  CRTC1_CRTC1_94_crtc1_me2dh_preflt_vtrig_dly_mask                        (0x000000FF)
#define  CRTC1_CRTC1_94_crtc1_me2dh_extcorr_vtrig_dly(data)                      (0xFF000000&((data)<<24))
#define  CRTC1_CRTC1_94_crtc1_me2dh_dobflt_vtrig_dly(data)                       (0x00FF0000&((data)<<16))
#define  CRTC1_CRTC1_94_crtc1_me2dh_pstflt_vtrig_dly(data)                       (0x0000FF00&((data)<<8))
#define  CRTC1_CRTC1_94_crtc1_me2dh_preflt_vtrig_dly(data)                       (0x000000FF&(data))
#define  CRTC1_CRTC1_94_get_crtc1_me2dh_extcorr_vtrig_dly(data)                  ((0xFF000000&(data))>>24)
#define  CRTC1_CRTC1_94_get_crtc1_me2dh_dobflt_vtrig_dly(data)                   ((0x00FF0000&(data))>>16)
#define  CRTC1_CRTC1_94_get_crtc1_me2dh_pstflt_vtrig_dly(data)                   ((0x0000FF00&(data))>>8)
#define  CRTC1_CRTC1_94_get_crtc1_me2dh_preflt_vtrig_dly(data)                   (0x000000FF&(data))

#define  CRTC1_CRTC1_F0                                                         0x1809D1F0
#define  CRTC1_CRTC1_F0_reg_addr                                                 "0xB809D1F0"
#define  CRTC1_CRTC1_F0_reg                                                      0xB809D1F0
#define  CRTC1_CRTC1_F0_inst_addr                                                "0x0021"
#define  set_CRTC1_CRTC1_F0_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_F0_reg)=data)
#define  get_CRTC1_CRTC1_F0_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_F0_reg))
#define  CRTC1_CRTC1_F0_regr_crtc1_vspll_phase_diff_shift                        (16)
#define  CRTC1_CRTC1_F0_regr_crtc1_vspll_ip_period_shift                         (3)
#define  CRTC1_CRTC1_F0_regr_crtc1_vspll_fine_tune_shift                         (2)
#define  CRTC1_CRTC1_F0_regr_crtc1_vspll_phase_lock_shift                        (1)
#define  CRTC1_CRTC1_F0_regr_crtc1_vspll_period_lock_shift                       (0)
#define  CRTC1_CRTC1_F0_regr_crtc1_vspll_phase_diff_mask                         (0x3FFF0000)
#define  CRTC1_CRTC1_F0_regr_crtc1_vspll_ip_period_mask                          (0x0000FFF8)
#define  CRTC1_CRTC1_F0_regr_crtc1_vspll_fine_tune_mask                          (0x00000004)
#define  CRTC1_CRTC1_F0_regr_crtc1_vspll_phase_lock_mask                         (0x00000002)
#define  CRTC1_CRTC1_F0_regr_crtc1_vspll_period_lock_mask                        (0x00000001)
#define  CRTC1_CRTC1_F0_regr_crtc1_vspll_phase_diff(data)                        (0x3FFF0000&((data)<<16))
#define  CRTC1_CRTC1_F0_regr_crtc1_vspll_ip_period(data)                         (0x0000FFF8&((data)<<3))
#define  CRTC1_CRTC1_F0_regr_crtc1_vspll_fine_tune(data)                         (0x00000004&((data)<<2))
#define  CRTC1_CRTC1_F0_regr_crtc1_vspll_phase_lock(data)                        (0x00000002&((data)<<1))
#define  CRTC1_CRTC1_F0_regr_crtc1_vspll_period_lock(data)                       (0x00000001&(data))
#define  CRTC1_CRTC1_F0_get_regr_crtc1_vspll_phase_diff(data)                    ((0x3FFF0000&(data))>>16)
#define  CRTC1_CRTC1_F0_get_regr_crtc1_vspll_ip_period(data)                     ((0x0000FFF8&(data))>>3)
#define  CRTC1_CRTC1_F0_get_regr_crtc1_vspll_fine_tune(data)                     ((0x00000004&(data))>>2)
#define  CRTC1_CRTC1_F0_get_regr_crtc1_vspll_phase_lock(data)                    ((0x00000002&(data))>>1)
#define  CRTC1_CRTC1_F0_get_regr_crtc1_vspll_period_lock(data)                   (0x00000001&(data))

#define  CRTC1_CRTC1_F4                                                         0x1809D1F4
#define  CRTC1_CRTC1_F4_reg_addr                                                 "0xB809D1F4"
#define  CRTC1_CRTC1_F4_reg                                                      0xB809D1F4
#define  CRTC1_CRTC1_F4_inst_addr                                                "0x0022"
#define  set_CRTC1_CRTC1_F4_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_F4_reg)=data)
#define  get_CRTC1_CRTC1_F4_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_F4_reg))
#define  CRTC1_CRTC1_F4_regr_crtc1_vspll_rough_v_total_shift                     (14)
#define  CRTC1_CRTC1_F4_regr_crtc1_vspll_period_diff_shift                       (0)
#define  CRTC1_CRTC1_F4_regr_crtc1_vspll_rough_v_total_mask                      (0x07FFC000)
#define  CRTC1_CRTC1_F4_regr_crtc1_vspll_period_diff_mask                        (0x00003FFF)
#define  CRTC1_CRTC1_F4_regr_crtc1_vspll_rough_v_total(data)                     (0x07FFC000&((data)<<14))
#define  CRTC1_CRTC1_F4_regr_crtc1_vspll_period_diff(data)                       (0x00003FFF&(data))
#define  CRTC1_CRTC1_F4_get_regr_crtc1_vspll_rough_v_total(data)                 ((0x07FFC000&(data))>>14)
#define  CRTC1_CRTC1_F4_get_regr_crtc1_vspll_period_diff(data)                   (0x00003FFF&(data))

#define  CRTC1_CRTC1_F8                                                         0x1809D1F8
#define  CRTC1_CRTC1_F8_reg_addr                                                 "0xB809D1F8"
#define  CRTC1_CRTC1_F8_reg                                                      0xB809D1F8
#define  CRTC1_CRTC1_F8_inst_addr                                                "0x0023"
#define  set_CRTC1_CRTC1_F8_reg(data)                                            (*((volatile unsigned int*)CRTC1_CRTC1_F8_reg)=data)
#define  get_CRTC1_CRTC1_F8_reg                                                  (*((volatile unsigned int*)CRTC1_CRTC1_F8_reg))
#define  CRTC1_CRTC1_F8_regr_crtc1_vspll_finer_v_total_shift                     (0)
#define  CRTC1_CRTC1_F8_regr_crtc1_vspll_finer_v_total_mask                      (0x00001FFF)
#define  CRTC1_CRTC1_F8_regr_crtc1_vspll_finer_v_total(data)                     (0x00001FFF&(data))
#define  CRTC1_CRTC1_F8_get_regr_crtc1_vspll_finer_v_total(data)                 (0x00001FFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======CRTC1 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_out_hs_width:7;
        RBus_UInt32  crtc1_out_vtotal:13;
        RBus_UInt32  crtc1_out_htotal:12;
    };
}crtc1_crtc1_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_out_vs_width:7;
        RBus_UInt32  crtc1_out_vact:13;
        RBus_UInt32  crtc1_out_hact:12;
    };
}crtc1_crtc1_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_dummy_00:1;
        RBus_UInt32  crtc1_lbmc_index_update_en:1;
        RBus_UInt32  crtc1_htotal_timing_update_en:1;
        RBus_UInt32  crtc1_osd_timing_update_en:1;
        RBus_UInt32  crtc1_frc_timing_update_en:1;
        RBus_UInt32  crtc1_out_timing_update_en:1;
        RBus_UInt32  crtc1_vtrig_timing_update_en:1;
        RBus_UInt32  crtc1_vspll_timing_update_en:1;
        RBus_UInt32  crtc1_out_vs_bporch:12;
        RBus_UInt32  crtc1_out_hs_bporch:12;
    };
}crtc1_crtc1_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_dummy_01:7;
        RBus_UInt32  crtc1_osd_vact:13;
        RBus_UInt32  crtc1_osd_hact:12;
    };
}crtc1_crtc1_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_dummy_02:8;
        RBus_UInt32  crtc1_osd_vs_bporch:12;
        RBus_UInt32  crtc1_osd_hs_bporch:12;
    };
}crtc1_crtc1_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_frc_prede_lnum:2;
        RBus_UInt32  crtc1_frc_prede_pnum:5;
        RBus_UInt32  crtc1_frc_vact:13;
        RBus_UInt32  crtc1_frc_hact:12;
    };
}crtc1_crtc1_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_dummy_03:8;
        RBus_UInt32  crtc1_frc_vs_bporch:12;
        RBus_UInt32  crtc1_frc_hs_bporch:12;
    };
}crtc1_crtc1_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  crtc1_vspll_me_work_mode:2;
        RBus_UInt32  crtc1_me2_org_vtrig_dly:13;
        RBus_UInt32  crtc1_ip_vtrig_dly:13;
    };
}crtc1_crtc1_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_debug_mux:2;
        RBus_UInt32  crtc1_frc_vtrig_dly:10;
        RBus_UInt32  crtc1_osd_vtrig_dly:10;
        RBus_UInt32  crtc1_out_vtrig_dly:10;
    };
}crtc1_crtc1_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_lbme2_vtrig_dly:13;
        RBus_UInt32  crtc1_dec_vtrig_dly:13;
        RBus_UInt32  crtc1_me2_vtrig_dly:6;
    };
}crtc1_crtc1_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_vspll_reset:1;
        RBus_UInt32  crtc1_force_inside_fhd_timing:1;
        RBus_UInt32  crtc1_slave_mode_on:1;
        RBus_UInt32  crtc1_lbmc_vtrig_dly:13;
        RBus_UInt32  crtc1_mc_vtrig_dly:8;
        RBus_UInt32  crtc1_dehalo_vtrig_dly:8;
    };
}crtc1_crtc1_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_lbmc_lfidx3_dly:8;
        RBus_UInt32  crtc1_lbmc_lfidx2_dly:8;
        RBus_UInt32  crtc1_lbmc_lfidx1_dly:8;
        RBus_UInt32  crtc1_lbmc_lfidx0_dly:8;
    };
}crtc1_crtc1_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_lbmc_lfidx7_dly:8;
        RBus_UInt32  crtc1_lbmc_lfidx6_dly:8;
        RBus_UInt32  crtc1_lbmc_lfidx5_dly:8;
        RBus_UInt32  crtc1_lbmc_lfidx4_dly:8;
    };
}crtc1_crtc1_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_lbmc_hfyidx2_dly:8;
        RBus_UInt32  crtc1_lbmc_hfyidx1_dly:8;
        RBus_UInt32  crtc1_lbmc_hfyidx0_dly:8;
        RBus_UInt32  crtc1_lbmc_lfidx8_dly:8;
    };
}crtc1_crtc1_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_frc_hdly:12;
        RBus_UInt32  crtc1_out_hdly:12;
        RBus_UInt32  crtc1_lbmc_hfcidx0_dly:8;
    };
}crtc1_crtc1_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_me2_hdly:8;
        RBus_UInt32  crtc1_mc_hdly:12;
        RBus_UInt32  crtc1_osd_hdly:12;
    };
}crtc1_crtc1_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_mc_row_type:2;
        RBus_UInt32  crtc1_dehalo_row_type:2;
        RBus_UInt32  crtc1_me2_row_type:2;
        RBus_UInt32  crtc1_dehalo_vact:13;
        RBus_UInt32  crtc1_me2_vact:13;
    };
}crtc1_crtc1_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_dhm4_row_hdly:7;
        RBus_UInt32  crtc1_dehalo_hdly:12;
        RBus_UInt32  crtc1_mc_vact:13;
    };
}crtc1_crtc1_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_plogo_row_num:11;
        RBus_UInt32  crtc1_plogo_func_enable:1;
        RBus_UInt32  crtc1_plogo_fetch_row_type:2;
        RBus_UInt32  crtc1_plogo_row_type:2;
        RBus_UInt32  crtc1_plogo_fetch_row_num:6;
        RBus_UInt32  crtc1_plogo_dummy0:10;
    };
}crtc1_crtc1_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_vspll_hw_debug:8;
        RBus_UInt32  crtc1_m:8;
        RBus_UInt32  crtc1_n:8;
        RBus_UInt32  crtc1_vspll_period_det_iir_ratio:4;
        RBus_UInt32  crtc1_vspll_init_v_total_en:1;
        RBus_UInt32  crtc1_vspll_period_det_mode:1;
        RBus_UInt32  crtc1_n2m_mode:2;
    };
}crtc1_crtc1_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  crtc1_vspll_min_v_total:13;
        RBus_UInt32  crtc1_vspll_max_v_total:13;
    };
}crtc1_crtc1_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  crtc1_vspll_v_total_ofst_neg:13;
        RBus_UInt32  crtc1_vspll_v_total_ofst_pos:13;
    };
}crtc1_crtc1_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_vspll_phase_diff_gain:8;
        RBus_UInt32  crtc1_vspll_finer_period_gain:8;
        RBus_UInt32  crtc1_vspll_rough_period_gain:8;
        RBus_UInt32  crtc1_vspll_fine_tune_th:8;
    };
}crtc1_crtc1_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_vspll_phase_lock_th:8;
        RBus_UInt32  crtc1_vspll_period_lock_th:8;
        RBus_UInt32  crtc1_vspll_max_finer_step:8;
        RBus_UInt32  crtc1_vspll_max_rough_step:8;
    };
}crtc1_crtc1_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_lbmc_s_lfidx3_dly:8;
        RBus_UInt32  crtc1_lbmc_s_lfidx2_dly:8;
        RBus_UInt32  crtc1_lbmc_s_lfidx1_dly:8;
        RBus_UInt32  crtc1_lbmc_s_lfidx0_dly:8;
    };
}crtc1_crtc1_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_lbmc_s_lfidx7_dly:8;
        RBus_UInt32  crtc1_lbmc_s_lfidx6_dly:8;
        RBus_UInt32  crtc1_lbmc_s_lfidx5_dly:8;
        RBus_UInt32  crtc1_lbmc_s_lfidx4_dly:8;
    };
}crtc1_crtc1_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_lbmc_s_hfyidx1_dly:8;
        RBus_UInt32  crtc1_lbmc_s_hfyidx0_dly:8;
        RBus_UInt32  crtc1_lbmc_s_lfidx9_dly:8;
        RBus_UInt32  crtc1_lbmc_s_lfidx8_dly:8;
    };
}crtc1_crtc1_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  crtc1_medh_vtrig_dly:12;
        RBus_UInt32  crtc1_lbmc_s_hfyidx3_dly:8;
        RBus_UInt32  crtc1_lbmc_s_hfyidx2_dly:8;
    };
}crtc1_crtc1_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  crtc1_mrtt_ofst:13;
    };
}crtc1_crtc1_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_lbme1_vtrig_dly:13;
        RBus_UInt32  crtc1_me1_vtrig_dly:6;
        RBus_UInt32  crtc1_me1_org_vtrig_dly:13;
    };
}crtc1_crtc1_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  crtc1_me1_hdly:8;
        RBus_UInt32  crtc1_me1_row_type:2;
        RBus_UInt32  crtc1_me1_vact:13;
    };
}crtc1_crtc1_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_lr_reset_mode:2;
        RBus_UInt32  crtc1_3d_lr_enable:1;
        RBus_UInt32  crtc1_lr_p_cycle:3;
        RBus_UInt32  crtc1_lr_reset_outphase_match:6;
        RBus_UInt32  crtc1_lr_reset_inphase_match:4;
        RBus_UInt32  crtc1_black_p_patt:8;
        RBus_UInt32  crtc1_lr_p_patt:8;
    };
}crtc1_crtc1_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_me2dh_extcorr_vtrig_dly:8;
        RBus_UInt32  crtc1_me2dh_dobflt_vtrig_dly:8;
        RBus_UInt32  crtc1_me2dh_pstflt_vtrig_dly:8;
        RBus_UInt32  crtc1_me2dh_preflt_vtrig_dly:8;
    };
}crtc1_crtc1_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_crtc1_vspll_phase_diff:14;
        RBus_UInt32  regr_crtc1_vspll_ip_period:13;
        RBus_UInt32  regr_crtc1_vspll_fine_tune:1;
        RBus_UInt32  regr_crtc1_vspll_phase_lock:1;
        RBus_UInt32  regr_crtc1_vspll_period_lock:1;
    };
}crtc1_crtc1_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_crtc1_vspll_rough_v_total:13;
        RBus_UInt32  regr_crtc1_vspll_period_diff:14;
    };
}crtc1_crtc1_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  regr_crtc1_vspll_finer_v_total:13;
    };
}crtc1_crtc1_f8_RBUS;

#else //apply LITTLE_ENDIAN

//======CRTC1 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_out_htotal:12;
        RBus_UInt32  crtc1_out_vtotal:13;
        RBus_UInt32  crtc1_out_hs_width:7;
    };
}crtc1_crtc1_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_out_hact:12;
        RBus_UInt32  crtc1_out_vact:13;
        RBus_UInt32  crtc1_out_vs_width:7;
    };
}crtc1_crtc1_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_out_hs_bporch:12;
        RBus_UInt32  crtc1_out_vs_bporch:12;
        RBus_UInt32  crtc1_vspll_timing_update_en:1;
        RBus_UInt32  crtc1_vtrig_timing_update_en:1;
        RBus_UInt32  crtc1_out_timing_update_en:1;
        RBus_UInt32  crtc1_frc_timing_update_en:1;
        RBus_UInt32  crtc1_osd_timing_update_en:1;
        RBus_UInt32  crtc1_htotal_timing_update_en:1;
        RBus_UInt32  crtc1_lbmc_index_update_en:1;
        RBus_UInt32  crtc1_dummy_00:1;
    };
}crtc1_crtc1_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_osd_hact:12;
        RBus_UInt32  crtc1_osd_vact:13;
        RBus_UInt32  crtc1_dummy_01:7;
    };
}crtc1_crtc1_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_osd_hs_bporch:12;
        RBus_UInt32  crtc1_osd_vs_bporch:12;
        RBus_UInt32  crtc1_dummy_02:8;
    };
}crtc1_crtc1_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_frc_hact:12;
        RBus_UInt32  crtc1_frc_vact:13;
        RBus_UInt32  crtc1_frc_prede_pnum:5;
        RBus_UInt32  crtc1_frc_prede_lnum:2;
    };
}crtc1_crtc1_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_frc_hs_bporch:12;
        RBus_UInt32  crtc1_frc_vs_bporch:12;
        RBus_UInt32  crtc1_dummy_03:8;
    };
}crtc1_crtc1_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_ip_vtrig_dly:13;
        RBus_UInt32  crtc1_me2_org_vtrig_dly:13;
        RBus_UInt32  crtc1_vspll_me_work_mode:2;
        RBus_UInt32  res1:4;
    };
}crtc1_crtc1_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_out_vtrig_dly:10;
        RBus_UInt32  crtc1_osd_vtrig_dly:10;
        RBus_UInt32  crtc1_frc_vtrig_dly:10;
        RBus_UInt32  crtc1_debug_mux:2;
    };
}crtc1_crtc1_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_me2_vtrig_dly:6;
        RBus_UInt32  crtc1_dec_vtrig_dly:13;
        RBus_UInt32  crtc1_lbme2_vtrig_dly:13;
    };
}crtc1_crtc1_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_dehalo_vtrig_dly:8;
        RBus_UInt32  crtc1_mc_vtrig_dly:8;
        RBus_UInt32  crtc1_lbmc_vtrig_dly:13;
        RBus_UInt32  crtc1_slave_mode_on:1;
        RBus_UInt32  crtc1_force_inside_fhd_timing:1;
        RBus_UInt32  crtc1_vspll_reset:1;
    };
}crtc1_crtc1_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_lbmc_lfidx0_dly:8;
        RBus_UInt32  crtc1_lbmc_lfidx1_dly:8;
        RBus_UInt32  crtc1_lbmc_lfidx2_dly:8;
        RBus_UInt32  crtc1_lbmc_lfidx3_dly:8;
    };
}crtc1_crtc1_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_lbmc_lfidx4_dly:8;
        RBus_UInt32  crtc1_lbmc_lfidx5_dly:8;
        RBus_UInt32  crtc1_lbmc_lfidx6_dly:8;
        RBus_UInt32  crtc1_lbmc_lfidx7_dly:8;
    };
}crtc1_crtc1_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_lbmc_lfidx8_dly:8;
        RBus_UInt32  crtc1_lbmc_hfyidx0_dly:8;
        RBus_UInt32  crtc1_lbmc_hfyidx1_dly:8;
        RBus_UInt32  crtc1_lbmc_hfyidx2_dly:8;
    };
}crtc1_crtc1_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_lbmc_hfcidx0_dly:8;
        RBus_UInt32  crtc1_out_hdly:12;
        RBus_UInt32  crtc1_frc_hdly:12;
    };
}crtc1_crtc1_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_osd_hdly:12;
        RBus_UInt32  crtc1_mc_hdly:12;
        RBus_UInt32  crtc1_me2_hdly:8;
    };
}crtc1_crtc1_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_me2_vact:13;
        RBus_UInt32  crtc1_dehalo_vact:13;
        RBus_UInt32  crtc1_me2_row_type:2;
        RBus_UInt32  crtc1_dehalo_row_type:2;
        RBus_UInt32  crtc1_mc_row_type:2;
    };
}crtc1_crtc1_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_mc_vact:13;
        RBus_UInt32  crtc1_dehalo_hdly:12;
        RBus_UInt32  crtc1_dhm4_row_hdly:7;
    };
}crtc1_crtc1_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_plogo_dummy0:10;
        RBus_UInt32  crtc1_plogo_fetch_row_num:6;
        RBus_UInt32  crtc1_plogo_row_type:2;
        RBus_UInt32  crtc1_plogo_fetch_row_type:2;
        RBus_UInt32  crtc1_plogo_func_enable:1;
        RBus_UInt32  crtc1_plogo_row_num:11;
    };
}crtc1_crtc1_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_n2m_mode:2;
        RBus_UInt32  crtc1_vspll_period_det_mode:1;
        RBus_UInt32  crtc1_vspll_init_v_total_en:1;
        RBus_UInt32  crtc1_vspll_period_det_iir_ratio:4;
        RBus_UInt32  crtc1_n:8;
        RBus_UInt32  crtc1_m:8;
        RBus_UInt32  crtc1_vspll_hw_debug:8;
    };
}crtc1_crtc1_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_vspll_max_v_total:13;
        RBus_UInt32  crtc1_vspll_min_v_total:13;
        RBus_UInt32  res1:6;
    };
}crtc1_crtc1_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_vspll_v_total_ofst_pos:13;
        RBus_UInt32  crtc1_vspll_v_total_ofst_neg:13;
        RBus_UInt32  res1:6;
    };
}crtc1_crtc1_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_vspll_fine_tune_th:8;
        RBus_UInt32  crtc1_vspll_rough_period_gain:8;
        RBus_UInt32  crtc1_vspll_finer_period_gain:8;
        RBus_UInt32  crtc1_vspll_phase_diff_gain:8;
    };
}crtc1_crtc1_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_vspll_max_rough_step:8;
        RBus_UInt32  crtc1_vspll_max_finer_step:8;
        RBus_UInt32  crtc1_vspll_period_lock_th:8;
        RBus_UInt32  crtc1_vspll_phase_lock_th:8;
    };
}crtc1_crtc1_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_lbmc_s_lfidx0_dly:8;
        RBus_UInt32  crtc1_lbmc_s_lfidx1_dly:8;
        RBus_UInt32  crtc1_lbmc_s_lfidx2_dly:8;
        RBus_UInt32  crtc1_lbmc_s_lfidx3_dly:8;
    };
}crtc1_crtc1_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_lbmc_s_lfidx4_dly:8;
        RBus_UInt32  crtc1_lbmc_s_lfidx5_dly:8;
        RBus_UInt32  crtc1_lbmc_s_lfidx6_dly:8;
        RBus_UInt32  crtc1_lbmc_s_lfidx7_dly:8;
    };
}crtc1_crtc1_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_lbmc_s_lfidx8_dly:8;
        RBus_UInt32  crtc1_lbmc_s_lfidx9_dly:8;
        RBus_UInt32  crtc1_lbmc_s_hfyidx0_dly:8;
        RBus_UInt32  crtc1_lbmc_s_hfyidx1_dly:8;
    };
}crtc1_crtc1_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_lbmc_s_hfyidx2_dly:8;
        RBus_UInt32  crtc1_lbmc_s_hfyidx3_dly:8;
        RBus_UInt32  crtc1_medh_vtrig_dly:12;
        RBus_UInt32  res1:4;
    };
}crtc1_crtc1_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_mrtt_ofst:13;
        RBus_UInt32  res1:19;
    };
}crtc1_crtc1_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_me1_org_vtrig_dly:13;
        RBus_UInt32  crtc1_me1_vtrig_dly:6;
        RBus_UInt32  crtc1_lbme1_vtrig_dly:13;
    };
}crtc1_crtc1_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_me1_vact:13;
        RBus_UInt32  crtc1_me1_row_type:2;
        RBus_UInt32  crtc1_me1_hdly:8;
        RBus_UInt32  res1:9;
    };
}crtc1_crtc1_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_lr_p_patt:8;
        RBus_UInt32  crtc1_black_p_patt:8;
        RBus_UInt32  crtc1_lr_reset_inphase_match:4;
        RBus_UInt32  crtc1_lr_reset_outphase_match:6;
        RBus_UInt32  crtc1_lr_p_cycle:3;
        RBus_UInt32  crtc1_3d_lr_enable:1;
        RBus_UInt32  crtc1_lr_reset_mode:2;
    };
}crtc1_crtc1_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crtc1_me2dh_preflt_vtrig_dly:8;
        RBus_UInt32  crtc1_me2dh_pstflt_vtrig_dly:8;
        RBus_UInt32  crtc1_me2dh_dobflt_vtrig_dly:8;
        RBus_UInt32  crtc1_me2dh_extcorr_vtrig_dly:8;
    };
}crtc1_crtc1_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_crtc1_vspll_period_lock:1;
        RBus_UInt32  regr_crtc1_vspll_phase_lock:1;
        RBus_UInt32  regr_crtc1_vspll_fine_tune:1;
        RBus_UInt32  regr_crtc1_vspll_ip_period:13;
        RBus_UInt32  regr_crtc1_vspll_phase_diff:14;
        RBus_UInt32  res1:2;
    };
}crtc1_crtc1_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_crtc1_vspll_period_diff:14;
        RBus_UInt32  regr_crtc1_vspll_rough_v_total:13;
        RBus_UInt32  res1:5;
    };
}crtc1_crtc1_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_crtc1_vspll_finer_v_total:13;
        RBus_UInt32  res1:19;
    };
}crtc1_crtc1_f8_RBUS;




#endif 


#endif 
