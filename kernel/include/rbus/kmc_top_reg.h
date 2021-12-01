/**
* @file Merlin5_MEMC_KMC_TOP
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KMC_TOP_REG_H_
#define _RBUS_KMC_TOP_REG_H_

#include "rbus_types.h"



//  KMC_TOP Register Address
#define  KMC_TOP_kmc_top_00                                                     0x18099000
#define  KMC_TOP_kmc_top_00_reg_addr                                             "0xB8099000"
#define  KMC_TOP_kmc_top_00_reg                                                  0xB8099000
#define  KMC_TOP_kmc_top_00_inst_addr                                            "0x0000"
#define  set_KMC_TOP_kmc_top_00_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_00_reg)=data)
#define  get_KMC_TOP_kmc_top_00_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_00_reg))
#define  KMC_TOP_kmc_top_00_top_patt_vtotal_shift                                (16)
#define  KMC_TOP_kmc_top_00_top_patt_htotal_shift                                (0)
#define  KMC_TOP_kmc_top_00_top_patt_vtotal_mask                                 (0xFFFF0000)
#define  KMC_TOP_kmc_top_00_top_patt_htotal_mask                                 (0x0000FFFF)
#define  KMC_TOP_kmc_top_00_top_patt_vtotal(data)                                (0xFFFF0000&((data)<<16))
#define  KMC_TOP_kmc_top_00_top_patt_htotal(data)                                (0x0000FFFF&(data))
#define  KMC_TOP_kmc_top_00_get_top_patt_vtotal(data)                            ((0xFFFF0000&(data))>>16)
#define  KMC_TOP_kmc_top_00_get_top_patt_htotal(data)                            (0x0000FFFF&(data))

#define  KMC_TOP_kmc_top_04                                                     0x18099004
#define  KMC_TOP_kmc_top_04_reg_addr                                             "0xB8099004"
#define  KMC_TOP_kmc_top_04_reg                                                  0xB8099004
#define  KMC_TOP_kmc_top_04_inst_addr                                            "0x0001"
#define  set_KMC_TOP_kmc_top_04_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_04_reg)=data)
#define  get_KMC_TOP_kmc_top_04_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_04_reg))
#define  KMC_TOP_kmc_top_04_top_patt_vact_shift                                  (16)
#define  KMC_TOP_kmc_top_04_top_patt_hact_shift                                  (0)
#define  KMC_TOP_kmc_top_04_top_patt_vact_mask                                   (0xFFFF0000)
#define  KMC_TOP_kmc_top_04_top_patt_hact_mask                                   (0x0000FFFF)
#define  KMC_TOP_kmc_top_04_top_patt_vact(data)                                  (0xFFFF0000&((data)<<16))
#define  KMC_TOP_kmc_top_04_top_patt_hact(data)                                  (0x0000FFFF&(data))
#define  KMC_TOP_kmc_top_04_get_top_patt_vact(data)                              ((0xFFFF0000&(data))>>16)
#define  KMC_TOP_kmc_top_04_get_top_patt_hact(data)                              (0x0000FFFF&(data))

#define  KMC_TOP_kmc_top_08                                                     0x18099008
#define  KMC_TOP_kmc_top_08_reg_addr                                             "0xB8099008"
#define  KMC_TOP_kmc_top_08_reg                                                  0xB8099008
#define  KMC_TOP_kmc_top_08_inst_addr                                            "0x0002"
#define  set_KMC_TOP_kmc_top_08_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_08_reg)=data)
#define  get_KMC_TOP_kmc_top_08_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_08_reg))
#define  KMC_TOP_kmc_top_08_top_patt_vs_bporch_shift                             (24)
#define  KMC_TOP_kmc_top_08_top_patt_hs_bporch_shift                             (16)
#define  KMC_TOP_kmc_top_08_top_patt_vs_width_shift                              (8)
#define  KMC_TOP_kmc_top_08_top_patt_hs_width_shift                              (0)
#define  KMC_TOP_kmc_top_08_top_patt_vs_bporch_mask                              (0xFF000000)
#define  KMC_TOP_kmc_top_08_top_patt_hs_bporch_mask                              (0x00FF0000)
#define  KMC_TOP_kmc_top_08_top_patt_vs_width_mask                               (0x0000FF00)
#define  KMC_TOP_kmc_top_08_top_patt_hs_width_mask                               (0x000000FF)
#define  KMC_TOP_kmc_top_08_top_patt_vs_bporch(data)                             (0xFF000000&((data)<<24))
#define  KMC_TOP_kmc_top_08_top_patt_hs_bporch(data)                             (0x00FF0000&((data)<<16))
#define  KMC_TOP_kmc_top_08_top_patt_vs_width(data)                              (0x0000FF00&((data)<<8))
#define  KMC_TOP_kmc_top_08_top_patt_hs_width(data)                              (0x000000FF&(data))
#define  KMC_TOP_kmc_top_08_get_top_patt_vs_bporch(data)                         ((0xFF000000&(data))>>24)
#define  KMC_TOP_kmc_top_08_get_top_patt_hs_bporch(data)                         ((0x00FF0000&(data))>>16)
#define  KMC_TOP_kmc_top_08_get_top_patt_vs_width(data)                          ((0x0000FF00&(data))>>8)
#define  KMC_TOP_kmc_top_08_get_top_patt_hs_width(data)                          (0x000000FF&(data))

#define  KMC_TOP_kmc_top_0C                                                     0x1809900C
#define  KMC_TOP_kmc_top_0C_reg_addr                                             "0xB809900C"
#define  KMC_TOP_kmc_top_0C_reg                                                  0xB809900C
#define  KMC_TOP_kmc_top_0C_inst_addr                                            "0x0003"
#define  set_KMC_TOP_kmc_top_0C_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_0C_reg)=data)
#define  get_KMC_TOP_kmc_top_0C_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_0C_reg))
#define  KMC_TOP_kmc_top_0C_top_mon_sel_shift                                    (27)
#define  KMC_TOP_kmc_top_0C_top_patt_0f_region_shift                             (15)
#define  KMC_TOP_kmc_top_0C_top_patt_0e_grid_shift                               (7)
#define  KMC_TOP_kmc_top_0C_top_patt_mode_shift                                  (3)
#define  KMC_TOP_kmc_top_0C_top_hv_measure_shift                                 (2)
#define  KMC_TOP_kmc_top_0C_top_patt_slf_gen_shift                               (1)
#define  KMC_TOP_kmc_top_0C_top_patt_enable_shift                                (0)
#define  KMC_TOP_kmc_top_0C_top_mon_sel_mask                                     (0xF8000000)
#define  KMC_TOP_kmc_top_0C_top_patt_0f_region_mask                              (0x07FF8000)
#define  KMC_TOP_kmc_top_0C_top_patt_0e_grid_mask                                (0x00007F80)
#define  KMC_TOP_kmc_top_0C_top_patt_mode_mask                                   (0x00000078)
#define  KMC_TOP_kmc_top_0C_top_hv_measure_mask                                  (0x00000004)
#define  KMC_TOP_kmc_top_0C_top_patt_slf_gen_mask                                (0x00000002)
#define  KMC_TOP_kmc_top_0C_top_patt_enable_mask                                 (0x00000001)
#define  KMC_TOP_kmc_top_0C_top_mon_sel(data)                                    (0xF8000000&((data)<<27))
#define  KMC_TOP_kmc_top_0C_top_patt_0f_region(data)                             (0x07FF8000&((data)<<15))
#define  KMC_TOP_kmc_top_0C_top_patt_0e_grid(data)                               (0x00007F80&((data)<<7))
#define  KMC_TOP_kmc_top_0C_top_patt_mode(data)                                  (0x00000078&((data)<<3))
#define  KMC_TOP_kmc_top_0C_top_hv_measure(data)                                 (0x00000004&((data)<<2))
#define  KMC_TOP_kmc_top_0C_top_patt_slf_gen(data)                               (0x00000002&((data)<<1))
#define  KMC_TOP_kmc_top_0C_top_patt_enable(data)                                (0x00000001&(data))
#define  KMC_TOP_kmc_top_0C_get_top_mon_sel(data)                                ((0xF8000000&(data))>>27)
#define  KMC_TOP_kmc_top_0C_get_top_patt_0f_region(data)                         ((0x07FF8000&(data))>>15)
#define  KMC_TOP_kmc_top_0C_get_top_patt_0e_grid(data)                           ((0x00007F80&(data))>>7)
#define  KMC_TOP_kmc_top_0C_get_top_patt_mode(data)                              ((0x00000078&(data))>>3)
#define  KMC_TOP_kmc_top_0C_get_top_hv_measure(data)                             ((0x00000004&(data))>>2)
#define  KMC_TOP_kmc_top_0C_get_top_patt_slf_gen(data)                           ((0x00000002&(data))>>1)
#define  KMC_TOP_kmc_top_0C_get_top_patt_enable(data)                            (0x00000001&(data))

#define  KMC_TOP_kmc_top_10                                                     0x18099010
#define  KMC_TOP_kmc_top_10_reg_addr                                             "0xB8099010"
#define  KMC_TOP_kmc_top_10_reg                                                  0xB8099010
#define  KMC_TOP_kmc_top_10_inst_addr                                            "0x0004"
#define  set_KMC_TOP_kmc_top_10_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_10_reg)=data)
#define  get_KMC_TOP_kmc_top_10_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_10_reg))
#define  KMC_TOP_kmc_top_10_top_cpr_out_data_en_shift                            (30)
#define  KMC_TOP_kmc_top_10_top_cpr_in_data_en_shift                             (29)
#define  KMC_TOP_kmc_top_10_kmc_ipmc_get_info_en_shift                           (28)
#define  KMC_TOP_kmc_top_10_top_patt_r_mask_shift                                (12)
#define  KMC_TOP_kmc_top_10_top_patt_lupdn_rgb_shift                             (0)
#define  KMC_TOP_kmc_top_10_top_cpr_out_data_en_mask                             (0x40000000)
#define  KMC_TOP_kmc_top_10_top_cpr_in_data_en_mask                              (0x20000000)
#define  KMC_TOP_kmc_top_10_kmc_ipmc_get_info_en_mask                            (0x10000000)
#define  KMC_TOP_kmc_top_10_top_patt_r_mask_mask                                 (0x0FFFF000)
#define  KMC_TOP_kmc_top_10_top_patt_lupdn_rgb_mask                              (0x00000FFF)
#define  KMC_TOP_kmc_top_10_top_cpr_out_data_en(data)                            (0x40000000&((data)<<30))
#define  KMC_TOP_kmc_top_10_top_cpr_in_data_en(data)                             (0x20000000&((data)<<29))
#define  KMC_TOP_kmc_top_10_kmc_ipmc_get_info_en(data)                           (0x10000000&((data)<<28))
#define  KMC_TOP_kmc_top_10_top_patt_r_mask(data)                                (0x0FFFF000&((data)<<12))
#define  KMC_TOP_kmc_top_10_top_patt_lupdn_rgb(data)                             (0x00000FFF&(data))
#define  KMC_TOP_kmc_top_10_get_top_cpr_out_data_en(data)                        ((0x40000000&(data))>>30)
#define  KMC_TOP_kmc_top_10_get_top_cpr_in_data_en(data)                         ((0x20000000&(data))>>29)
#define  KMC_TOP_kmc_top_10_get_kmc_ipmc_get_info_en(data)                       ((0x10000000&(data))>>28)
#define  KMC_TOP_kmc_top_10_get_top_patt_r_mask(data)                            ((0x0FFFF000&(data))>>12)
#define  KMC_TOP_kmc_top_10_get_top_patt_lupdn_rgb(data)                         (0x00000FFF&(data))

#define  KMC_TOP_kmc_top_14                                                     0x18099014
#define  KMC_TOP_kmc_top_14_reg_addr                                             "0xB8099014"
#define  KMC_TOP_kmc_top_14_reg                                                  0xB8099014
#define  KMC_TOP_kmc_top_14_inst_addr                                            "0x0005"
#define  set_KMC_TOP_kmc_top_14_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_14_reg)=data)
#define  get_KMC_TOP_kmc_top_14_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_14_reg))
#define  KMC_TOP_kmc_top_14_top_patt_b_mask_shift                                (16)
#define  KMC_TOP_kmc_top_14_top_patt_g_mask_shift                                (0)
#define  KMC_TOP_kmc_top_14_top_patt_b_mask_mask                                 (0xFFFF0000)
#define  KMC_TOP_kmc_top_14_top_patt_g_mask_mask                                 (0x0000FFFF)
#define  KMC_TOP_kmc_top_14_top_patt_b_mask(data)                                (0xFFFF0000&((data)<<16))
#define  KMC_TOP_kmc_top_14_top_patt_g_mask(data)                                (0x0000FFFF&(data))
#define  KMC_TOP_kmc_top_14_get_top_patt_b_mask(data)                            ((0xFFFF0000&(data))>>16)
#define  KMC_TOP_kmc_top_14_get_top_patt_g_mask(data)                            (0x0000FFFF&(data))

#define  KMC_TOP_kmc_top_18                                                     0x18099018
#define  KMC_TOP_kmc_top_18_reg_addr                                             "0xB8099018"
#define  KMC_TOP_kmc_top_18_reg                                                  0xB8099018
#define  KMC_TOP_kmc_top_18_inst_addr                                            "0x0006"
#define  set_KMC_TOP_kmc_top_18_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_18_reg)=data)
#define  get_KMC_TOP_kmc_top_18_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_18_reg))
#define  KMC_TOP_kmc_top_18_kmc_arb_bready_keep_high_shift                       (29)
#define  KMC_TOP_kmc_top_18_kosd_frame_hold_shift                                (28)
#define  KMC_TOP_kmc_top_18_kmc_int_en_shift                                     (24)
#define  KMC_TOP_kmc_top_18_kmc_int_wclr_shift                                   (20)
#define  KMC_TOP_kmc_top_18_kmc_int_source_sel_shift                             (19)
#define  KMC_TOP_kmc_top_18_kmc_in_vtotal_int_shift                              (7)
#define  KMC_TOP_kmc_top_18_kmc_in_measure_en_shift                              (6)
#define  KMC_TOP_kmc_top_18_kmc_in_measure_sel_shift                             (3)
#define  KMC_TOP_kmc_top_18_kmc_in_int_sel_shift                                 (0)
#define  KMC_TOP_kmc_top_18_kmc_arb_bready_keep_high_mask                        (0x20000000)
#define  KMC_TOP_kmc_top_18_kosd_frame_hold_mask                                 (0x10000000)
#define  KMC_TOP_kmc_top_18_kmc_int_en_mask                                      (0x0F000000)
#define  KMC_TOP_kmc_top_18_kmc_int_wclr_mask                                    (0x00F00000)
#define  KMC_TOP_kmc_top_18_kmc_int_source_sel_mask                              (0x00080000)
#define  KMC_TOP_kmc_top_18_kmc_in_vtotal_int_mask                               (0x0007FF80)
#define  KMC_TOP_kmc_top_18_kmc_in_measure_en_mask                               (0x00000040)
#define  KMC_TOP_kmc_top_18_kmc_in_measure_sel_mask                              (0x00000038)
#define  KMC_TOP_kmc_top_18_kmc_in_int_sel_mask                                  (0x00000007)
#define  KMC_TOP_kmc_top_18_kmc_arb_bready_keep_high(data)                       (0x20000000&((data)<<29))
#define  KMC_TOP_kmc_top_18_kosd_frame_hold(data)                                (0x10000000&((data)<<28))
#define  KMC_TOP_kmc_top_18_kmc_int_en(data)                                     (0x0F000000&((data)<<24))
#define  KMC_TOP_kmc_top_18_kmc_int_wclr(data)                                   (0x00F00000&((data)<<20))
#define  KMC_TOP_kmc_top_18_kmc_int_source_sel(data)                             (0x00080000&((data)<<19))
#define  KMC_TOP_kmc_top_18_kmc_in_vtotal_int(data)                              (0x0007FF80&((data)<<7))
#define  KMC_TOP_kmc_top_18_kmc_in_measure_en(data)                              (0x00000040&((data)<<6))
#define  KMC_TOP_kmc_top_18_kmc_in_measure_sel(data)                             (0x00000038&((data)<<3))
#define  KMC_TOP_kmc_top_18_kmc_in_int_sel(data)                                 (0x00000007&(data))
#define  KMC_TOP_kmc_top_18_get_kmc_arb_bready_keep_high(data)                   ((0x20000000&(data))>>29)
#define  KMC_TOP_kmc_top_18_get_kosd_frame_hold(data)                            ((0x10000000&(data))>>28)
#define  KMC_TOP_kmc_top_18_get_kmc_int_en(data)                                 ((0x0F000000&(data))>>24)
#define  KMC_TOP_kmc_top_18_get_kmc_int_wclr(data)                               ((0x00F00000&(data))>>20)
#define  KMC_TOP_kmc_top_18_get_kmc_int_source_sel(data)                         ((0x00080000&(data))>>19)
#define  KMC_TOP_kmc_top_18_get_kmc_in_vtotal_int(data)                          ((0x0007FF80&(data))>>7)
#define  KMC_TOP_kmc_top_18_get_kmc_in_measure_en(data)                          ((0x00000040&(data))>>6)
#define  KMC_TOP_kmc_top_18_get_kmc_in_measure_sel(data)                         ((0x00000038&(data))>>3)
#define  KMC_TOP_kmc_top_18_get_kmc_in_int_sel(data)                             (0x00000007&(data))

#define  KMC_TOP_kmc_top_1C                                                     0x1809901C
#define  KMC_TOP_kmc_top_1C_reg_addr                                             "0xB809901C"
#define  KMC_TOP_kmc_top_1C_reg                                                  0xB809901C
#define  KMC_TOP_kmc_top_1C_inst_addr                                            "0x0007"
#define  set_KMC_TOP_kmc_top_1C_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_1C_reg)=data)
#define  get_KMC_TOP_kmc_top_1C_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_1C_reg))
#define  KMC_TOP_kmc_top_1C_vhdtl_static_sel_shift                               (25)
#define  KMC_TOP_kmc_top_1C_kmc_meter_detail_coring_0_shift                      (0)
#define  KMC_TOP_kmc_top_1C_vhdtl_static_sel_mask                                (0x06000000)
#define  KMC_TOP_kmc_top_1C_kmc_meter_detail_coring_0_mask                       (0x01FFFFFF)
#define  KMC_TOP_kmc_top_1C_vhdtl_static_sel(data)                               (0x06000000&((data)<<25))
#define  KMC_TOP_kmc_top_1C_kmc_meter_detail_coring_0(data)                      (0x01FFFFFF&(data))
#define  KMC_TOP_kmc_top_1C_get_vhdtl_static_sel(data)                           ((0x06000000&(data))>>25)
#define  KMC_TOP_kmc_top_1C_get_kmc_meter_detail_coring_0(data)                  (0x01FFFFFF&(data))

#define  KMC_TOP_kmc_top_20                                                     0x18099020
#define  KMC_TOP_kmc_top_20_reg_addr                                             "0xB8099020"
#define  KMC_TOP_kmc_top_20_reg                                                  0xB8099020
#define  KMC_TOP_kmc_top_20_inst_addr                                            "0x0008"
#define  set_KMC_TOP_kmc_top_20_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_20_reg)=data)
#define  get_KMC_TOP_kmc_top_20_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_20_reg))
#define  KMC_TOP_kmc_top_20_vhdtl_c_coef_shift                                   (28)
#define  KMC_TOP_kmc_top_20_vhdtl_y_coef_shift                                   (24)
#define  KMC_TOP_kmc_top_20_vhdtl_vact_shift                                     (12)
#define  KMC_TOP_kmc_top_20_vhdtl_hact_shift                                     (0)
#define  KMC_TOP_kmc_top_20_vhdtl_c_coef_mask                                    (0x70000000)
#define  KMC_TOP_kmc_top_20_vhdtl_y_coef_mask                                    (0x0F000000)
#define  KMC_TOP_kmc_top_20_vhdtl_vact_mask                                      (0x00FFF000)
#define  KMC_TOP_kmc_top_20_vhdtl_hact_mask                                      (0x00000FFF)
#define  KMC_TOP_kmc_top_20_vhdtl_c_coef(data)                                   (0x70000000&((data)<<28))
#define  KMC_TOP_kmc_top_20_vhdtl_y_coef(data)                                   (0x0F000000&((data)<<24))
#define  KMC_TOP_kmc_top_20_vhdtl_vact(data)                                     (0x00FFF000&((data)<<12))
#define  KMC_TOP_kmc_top_20_vhdtl_hact(data)                                     (0x00000FFF&(data))
#define  KMC_TOP_kmc_top_20_get_vhdtl_c_coef(data)                               ((0x70000000&(data))>>28)
#define  KMC_TOP_kmc_top_20_get_vhdtl_y_coef(data)                               ((0x0F000000&(data))>>24)
#define  KMC_TOP_kmc_top_20_get_vhdtl_vact(data)                                 ((0x00FFF000&(data))>>12)
#define  KMC_TOP_kmc_top_20_get_vhdtl_hact(data)                                 (0x00000FFF&(data))

#define  KMC_TOP_kmc_top_24                                                     0x18099024
#define  KMC_TOP_kmc_top_24_reg_addr                                             "0xB8099024"
#define  KMC_TOP_kmc_top_24_reg                                                  0xB8099024
#define  KMC_TOP_kmc_top_24_inst_addr                                            "0x0009"
#define  set_KMC_TOP_kmc_top_24_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_24_reg)=data)
#define  get_KMC_TOP_kmc_top_24_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_24_reg))
#define  KMC_TOP_kmc_top_24_dummy24_shift                                        (20)
#define  KMC_TOP_kmc_top_24_vhdtl_v_th_shift                                     (10)
#define  KMC_TOP_kmc_top_24_vhdtl_h_th_shift                                     (0)
#define  KMC_TOP_kmc_top_24_dummy24_mask                                         (0xFFF00000)
#define  KMC_TOP_kmc_top_24_vhdtl_v_th_mask                                      (0x000FFC00)
#define  KMC_TOP_kmc_top_24_vhdtl_h_th_mask                                      (0x000003FF)
#define  KMC_TOP_kmc_top_24_dummy24(data)                                        (0xFFF00000&((data)<<20))
#define  KMC_TOP_kmc_top_24_vhdtl_v_th(data)                                     (0x000FFC00&((data)<<10))
#define  KMC_TOP_kmc_top_24_vhdtl_h_th(data)                                     (0x000003FF&(data))
#define  KMC_TOP_kmc_top_24_get_dummy24(data)                                    ((0xFFF00000&(data))>>20)
#define  KMC_TOP_kmc_top_24_get_vhdtl_v_th(data)                                 ((0x000FFC00&(data))>>10)
#define  KMC_TOP_kmc_top_24_get_vhdtl_h_th(data)                                 (0x000003FF&(data))

#define  KMC_TOP_kmc_top_28                                                     0x18099028
#define  KMC_TOP_kmc_top_28_reg_addr                                             "0xB8099028"
#define  KMC_TOP_kmc_top_28_reg                                                  0xB8099028
#define  KMC_TOP_kmc_top_28_inst_addr                                            "0x000A"
#define  set_KMC_TOP_kmc_top_28_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_28_reg)=data)
#define  get_KMC_TOP_kmc_top_28_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_28_reg))
#define  KMC_TOP_kmc_top_28_kmc_meter_detail_coring_1_shift                      (0)
#define  KMC_TOP_kmc_top_28_kmc_meter_detail_coring_1_mask                       (0x01FFFFFF)
#define  KMC_TOP_kmc_top_28_kmc_meter_detail_coring_1(data)                      (0x01FFFFFF&(data))
#define  KMC_TOP_kmc_top_28_get_kmc_meter_detail_coring_1(data)                  (0x01FFFFFF&(data))

#define  KMC_TOP_kmc_top_2C                                                     0x1809902C
#define  KMC_TOP_kmc_top_2C_reg_addr                                             "0xB809902C"
#define  KMC_TOP_kmc_top_2C_reg                                                  0xB809902C
#define  KMC_TOP_kmc_top_2C_inst_addr                                            "0x000B"
#define  set_KMC_TOP_kmc_top_2C_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_2C_reg)=data)
#define  get_KMC_TOP_kmc_top_2C_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_2C_reg))
#define  KMC_TOP_kmc_top_2C_kmc_meter_detail_coring_2_shift                      (0)
#define  KMC_TOP_kmc_top_2C_kmc_meter_detail_coring_2_mask                       (0x01FFFFFF)
#define  KMC_TOP_kmc_top_2C_kmc_meter_detail_coring_2(data)                      (0x01FFFFFF&(data))
#define  KMC_TOP_kmc_top_2C_get_kmc_meter_detail_coring_2(data)                  (0x01FFFFFF&(data))

#define  KMC_TOP_kmc_top_30                                                     0x18099030
#define  KMC_TOP_kmc_top_30_reg_addr                                             "0xB8099030"
#define  KMC_TOP_kmc_top_30_reg                                                  0xB8099030
#define  KMC_TOP_kmc_top_30_inst_addr                                            "0x000C"
#define  set_KMC_TOP_kmc_top_30_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_30_reg)=data)
#define  get_KMC_TOP_kmc_top_30_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_30_reg))
#define  KMC_TOP_kmc_top_30_dummy30_shift                                        (24)
#define  KMC_TOP_kmc_top_30_knr_trig_gen_mode_shift                              (23)
#define  KMC_TOP_kmc_top_30_knr_half_v_active_shift                              (12)
#define  KMC_TOP_kmc_top_30_knr_row_trig_dly_shift                               (0)
#define  KMC_TOP_kmc_top_30_dummy30_mask                                         (0xFF000000)
#define  KMC_TOP_kmc_top_30_knr_trig_gen_mode_mask                               (0x00800000)
#define  KMC_TOP_kmc_top_30_knr_half_v_active_mask                               (0x007FF000)
#define  KMC_TOP_kmc_top_30_knr_row_trig_dly_mask                                (0x00000FFF)
#define  KMC_TOP_kmc_top_30_dummy30(data)                                        (0xFF000000&((data)<<24))
#define  KMC_TOP_kmc_top_30_knr_trig_gen_mode(data)                              (0x00800000&((data)<<23))
#define  KMC_TOP_kmc_top_30_knr_half_v_active(data)                              (0x007FF000&((data)<<12))
#define  KMC_TOP_kmc_top_30_knr_row_trig_dly(data)                               (0x00000FFF&(data))
#define  KMC_TOP_kmc_top_30_get_dummy30(data)                                    ((0xFF000000&(data))>>24)
#define  KMC_TOP_kmc_top_30_get_knr_trig_gen_mode(data)                          ((0x00800000&(data))>>23)
#define  KMC_TOP_kmc_top_30_get_knr_half_v_active(data)                          ((0x007FF000&(data))>>12)
#define  KMC_TOP_kmc_top_30_get_knr_row_trig_dly(data)                           (0x00000FFF&(data))

#define  KMC_TOP_kmc_top_34                                                     0x18099034
#define  KMC_TOP_kmc_top_34_reg_addr                                             "0xB8099034"
#define  KMC_TOP_kmc_top_34_reg                                                  0xB8099034
#define  KMC_TOP_kmc_top_34_inst_addr                                            "0x000D"
#define  set_KMC_TOP_kmc_top_34_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_34_reg)=data)
#define  get_KMC_TOP_kmc_top_34_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_34_reg))
#define  KMC_TOP_kmc_top_34_dummy34_shift                                        (14)
#define  KMC_TOP_kmc_top_34_knr_422to444_mode_shift                              (13)
#define  KMC_TOP_kmc_top_34_knr_422to444_en_shift                                (12)
#define  KMC_TOP_kmc_top_34_knr_h_active_shift                                   (0)
#define  KMC_TOP_kmc_top_34_dummy34_mask                                         (0xFFFFC000)
#define  KMC_TOP_kmc_top_34_knr_422to444_mode_mask                               (0x00002000)
#define  KMC_TOP_kmc_top_34_knr_422to444_en_mask                                 (0x00001000)
#define  KMC_TOP_kmc_top_34_knr_h_active_mask                                    (0x00000FFF)
#define  KMC_TOP_kmc_top_34_dummy34(data)                                        (0xFFFFC000&((data)<<14))
#define  KMC_TOP_kmc_top_34_knr_422to444_mode(data)                              (0x00002000&((data)<<13))
#define  KMC_TOP_kmc_top_34_knr_422to444_en(data)                                (0x00001000&((data)<<12))
#define  KMC_TOP_kmc_top_34_knr_h_active(data)                                   (0x00000FFF&(data))
#define  KMC_TOP_kmc_top_34_get_dummy34(data)                                    ((0xFFFFC000&(data))>>14)
#define  KMC_TOP_kmc_top_34_get_knr_422to444_mode(data)                          ((0x00002000&(data))>>13)
#define  KMC_TOP_kmc_top_34_get_knr_422to444_en(data)                            ((0x00001000&(data))>>12)
#define  KMC_TOP_kmc_top_34_get_knr_h_active(data)                               (0x00000FFF&(data))

#define  KMC_TOP_kmc_top_38                                                     0x18099038
#define  KMC_TOP_kmc_top_38_reg_addr                                             "0xB8099038"
#define  KMC_TOP_kmc_top_38_reg                                                  0xB8099038
#define  KMC_TOP_kmc_top_38_inst_addr                                            "0x000E"
#define  set_KMC_TOP_kmc_top_38_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_38_reg)=data)
#define  get_KMC_TOP_kmc_top_38_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_38_reg))
#define  KMC_TOP_kmc_top_38_top_cpr_hf_out_data_shift                            (21)
#define  KMC_TOP_kmc_top_38_top_cpr_hf_in_data_shift                             (10)
#define  KMC_TOP_kmc_top_38_top_cpr_lf_in_data_shift                             (0)
#define  KMC_TOP_kmc_top_38_top_cpr_hf_out_data_mask                             (0x1FE00000)
#define  KMC_TOP_kmc_top_38_top_cpr_hf_in_data_mask                              (0x001FFC00)
#define  KMC_TOP_kmc_top_38_top_cpr_lf_in_data_mask                              (0x000003FF)
#define  KMC_TOP_kmc_top_38_top_cpr_hf_out_data(data)                            (0x1FE00000&((data)<<21))
#define  KMC_TOP_kmc_top_38_top_cpr_hf_in_data(data)                             (0x001FFC00&((data)<<10))
#define  KMC_TOP_kmc_top_38_top_cpr_lf_in_data(data)                             (0x000003FF&(data))
#define  KMC_TOP_kmc_top_38_get_top_cpr_hf_out_data(data)                        ((0x1FE00000&(data))>>21)
#define  KMC_TOP_kmc_top_38_get_top_cpr_hf_in_data(data)                         ((0x001FFC00&(data))>>10)
#define  KMC_TOP_kmc_top_38_get_top_cpr_lf_in_data(data)                         (0x000003FF&(data))

#define  KMC_TOP_kmc_top_3C                                                     0x1809903C
#define  KMC_TOP_kmc_top_3C_reg_addr                                             "0xB809903C"
#define  KMC_TOP_kmc_top_3C_reg                                                  0xB809903C
#define  KMC_TOP_kmc_top_3C_inst_addr                                            "0x000F"
#define  set_KMC_TOP_kmc_top_3C_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_3C_reg)=data)
#define  get_KMC_TOP_kmc_top_3C_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_3C_reg))
#define  KMC_TOP_kmc_top_3C_dummy3c_shift                                        (24)
#define  KMC_TOP_kmc_top_3C_kmc_ipmc_mode_shift                                  (20)
#define  KMC_TOP_kmc_top_3C_kmc_ipmc_hdeo_start_shift                            (10)
#define  KMC_TOP_kmc_top_3C_kmc_ipmc_hde_center_value_shift                      (0)
#define  KMC_TOP_kmc_top_3C_dummy3c_mask                                         (0xFF000000)
#define  KMC_TOP_kmc_top_3C_kmc_ipmc_mode_mask                                   (0x00F00000)
#define  KMC_TOP_kmc_top_3C_kmc_ipmc_hdeo_start_mask                             (0x000FFC00)
#define  KMC_TOP_kmc_top_3C_kmc_ipmc_hde_center_value_mask                       (0x000003FF)
#define  KMC_TOP_kmc_top_3C_dummy3c(data)                                        (0xFF000000&((data)<<24))
#define  KMC_TOP_kmc_top_3C_kmc_ipmc_mode(data)                                  (0x00F00000&((data)<<20))
#define  KMC_TOP_kmc_top_3C_kmc_ipmc_hdeo_start(data)                            (0x000FFC00&((data)<<10))
#define  KMC_TOP_kmc_top_3C_kmc_ipmc_hde_center_value(data)                      (0x000003FF&(data))
#define  KMC_TOP_kmc_top_3C_get_dummy3c(data)                                    ((0xFF000000&(data))>>24)
#define  KMC_TOP_kmc_top_3C_get_kmc_ipmc_mode(data)                              ((0x00F00000&(data))>>20)
#define  KMC_TOP_kmc_top_3C_get_kmc_ipmc_hdeo_start(data)                        ((0x000FFC00&(data))>>10)
#define  KMC_TOP_kmc_top_3C_get_kmc_ipmc_hde_center_value(data)                  (0x000003FF&(data))

#define  KMC_TOP_kmc_top_40                                                     0x18099040
#define  KMC_TOP_kmc_top_40_reg_addr                                             "0xB8099040"
#define  KMC_TOP_kmc_top_40_reg                                                  0xB8099040
#define  KMC_TOP_kmc_top_40_inst_addr                                            "0x0010"
#define  set_KMC_TOP_kmc_top_40_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_40_reg)=data)
#define  get_KMC_TOP_kmc_top_40_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_40_reg))
#define  KMC_TOP_kmc_top_40_dummy40_shift                                        (25)
#define  KMC_TOP_kmc_top_40_ipmc_sram_ls_value_shift                             (24)
#define  KMC_TOP_kmc_top_40_ipmc_sram_ls_en_shift                                (23)
#define  KMC_TOP_kmc_top_40_kmc_ipmc_v_active_shift                              (11)
#define  KMC_TOP_kmc_top_40_kmc_ipmc_hde_active_shift                            (0)
#define  KMC_TOP_kmc_top_40_dummy40_mask                                         (0xFE000000)
#define  KMC_TOP_kmc_top_40_ipmc_sram_ls_value_mask                              (0x01000000)
#define  KMC_TOP_kmc_top_40_ipmc_sram_ls_en_mask                                 (0x00800000)
#define  KMC_TOP_kmc_top_40_kmc_ipmc_v_active_mask                               (0x007FF800)
#define  KMC_TOP_kmc_top_40_kmc_ipmc_hde_active_mask                             (0x000007FF)
#define  KMC_TOP_kmc_top_40_dummy40(data)                                        (0xFE000000&((data)<<25))
#define  KMC_TOP_kmc_top_40_ipmc_sram_ls_value(data)                             (0x01000000&((data)<<24))
#define  KMC_TOP_kmc_top_40_ipmc_sram_ls_en(data)                                (0x00800000&((data)<<23))
#define  KMC_TOP_kmc_top_40_kmc_ipmc_v_active(data)                              (0x007FF800&((data)<<11))
#define  KMC_TOP_kmc_top_40_kmc_ipmc_hde_active(data)                            (0x000007FF&(data))
#define  KMC_TOP_kmc_top_40_get_dummy40(data)                                    ((0xFE000000&(data))>>25)
#define  KMC_TOP_kmc_top_40_get_ipmc_sram_ls_value(data)                         ((0x01000000&(data))>>24)
#define  KMC_TOP_kmc_top_40_get_ipmc_sram_ls_en(data)                            ((0x00800000&(data))>>23)
#define  KMC_TOP_kmc_top_40_get_kmc_ipmc_v_active(data)                          ((0x007FF800&(data))>>11)
#define  KMC_TOP_kmc_top_40_get_kmc_ipmc_hde_active(data)                        (0x000007FF&(data))

#define  KMC_TOP_kmc_top_44                                                     0x18099044
#define  KMC_TOP_kmc_top_44_reg_addr                                             "0xB8099044"
#define  KMC_TOP_kmc_top_44_reg                                                  0xB8099044
#define  KMC_TOP_kmc_top_44_inst_addr                                            "0x0011"
#define  set_KMC_TOP_kmc_top_44_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_44_reg)=data)
#define  get_KMC_TOP_kmc_top_44_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_44_reg))
#define  KMC_TOP_kmc_top_44_knr_usr_coef01_shift                                 (15)
#define  KMC_TOP_kmc_top_44_knr_usr_coef00_shift                                 (0)
#define  KMC_TOP_kmc_top_44_knr_usr_coef01_mask                                  (0x3FFF8000)
#define  KMC_TOP_kmc_top_44_knr_usr_coef00_mask                                  (0x00007FFF)
#define  KMC_TOP_kmc_top_44_knr_usr_coef01(data)                                 (0x3FFF8000&((data)<<15))
#define  KMC_TOP_kmc_top_44_knr_usr_coef00(data)                                 (0x00007FFF&(data))
#define  KMC_TOP_kmc_top_44_get_knr_usr_coef01(data)                             ((0x3FFF8000&(data))>>15)
#define  KMC_TOP_kmc_top_44_get_knr_usr_coef00(data)                             (0x00007FFF&(data))

#define  KMC_TOP_kmc_top_48                                                     0x18099048
#define  KMC_TOP_kmc_top_48_reg_addr                                             "0xB8099048"
#define  KMC_TOP_kmc_top_48_reg                                                  0xB8099048
#define  KMC_TOP_kmc_top_48_inst_addr                                            "0x0012"
#define  set_KMC_TOP_kmc_top_48_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_48_reg)=data)
#define  get_KMC_TOP_kmc_top_48_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_48_reg))
#define  KMC_TOP_kmc_top_48_knr_usr_coef10_shift                                 (15)
#define  KMC_TOP_kmc_top_48_knr_usr_coef02_shift                                 (0)
#define  KMC_TOP_kmc_top_48_knr_usr_coef10_mask                                  (0x3FFF8000)
#define  KMC_TOP_kmc_top_48_knr_usr_coef02_mask                                  (0x00007FFF)
#define  KMC_TOP_kmc_top_48_knr_usr_coef10(data)                                 (0x3FFF8000&((data)<<15))
#define  KMC_TOP_kmc_top_48_knr_usr_coef02(data)                                 (0x00007FFF&(data))
#define  KMC_TOP_kmc_top_48_get_knr_usr_coef10(data)                             ((0x3FFF8000&(data))>>15)
#define  KMC_TOP_kmc_top_48_get_knr_usr_coef02(data)                             (0x00007FFF&(data))

#define  KMC_TOP_kmc_top_4C                                                     0x1809904C
#define  KMC_TOP_kmc_top_4C_reg_addr                                             "0xB809904C"
#define  KMC_TOP_kmc_top_4C_reg                                                  0xB809904C
#define  KMC_TOP_kmc_top_4C_inst_addr                                            "0x0013"
#define  set_KMC_TOP_kmc_top_4C_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_4C_reg)=data)
#define  get_KMC_TOP_kmc_top_4C_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_4C_reg))
#define  KMC_TOP_kmc_top_4C_knr_usr_coef12_shift                                 (15)
#define  KMC_TOP_kmc_top_4C_knr_usr_coef11_shift                                 (0)
#define  KMC_TOP_kmc_top_4C_knr_usr_coef12_mask                                  (0x3FFF8000)
#define  KMC_TOP_kmc_top_4C_knr_usr_coef11_mask                                  (0x00007FFF)
#define  KMC_TOP_kmc_top_4C_knr_usr_coef12(data)                                 (0x3FFF8000&((data)<<15))
#define  KMC_TOP_kmc_top_4C_knr_usr_coef11(data)                                 (0x00007FFF&(data))
#define  KMC_TOP_kmc_top_4C_get_knr_usr_coef12(data)                             ((0x3FFF8000&(data))>>15)
#define  KMC_TOP_kmc_top_4C_get_knr_usr_coef11(data)                             (0x00007FFF&(data))

#define  KMC_TOP_kmc_top_50                                                     0x18099050
#define  KMC_TOP_kmc_top_50_reg_addr                                             "0xB8099050"
#define  KMC_TOP_kmc_top_50_reg                                                  0xB8099050
#define  KMC_TOP_kmc_top_50_inst_addr                                            "0x0014"
#define  set_KMC_TOP_kmc_top_50_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_50_reg)=data)
#define  get_KMC_TOP_kmc_top_50_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_50_reg))
#define  KMC_TOP_kmc_top_50_knr_usr_coef21_shift                                 (15)
#define  KMC_TOP_kmc_top_50_knr_usr_coef20_shift                                 (0)
#define  KMC_TOP_kmc_top_50_knr_usr_coef21_mask                                  (0x3FFF8000)
#define  KMC_TOP_kmc_top_50_knr_usr_coef20_mask                                  (0x00007FFF)
#define  KMC_TOP_kmc_top_50_knr_usr_coef21(data)                                 (0x3FFF8000&((data)<<15))
#define  KMC_TOP_kmc_top_50_knr_usr_coef20(data)                                 (0x00007FFF&(data))
#define  KMC_TOP_kmc_top_50_get_knr_usr_coef21(data)                             ((0x3FFF8000&(data))>>15)
#define  KMC_TOP_kmc_top_50_get_knr_usr_coef20(data)                             (0x00007FFF&(data))

#define  KMC_TOP_kmc_top_54                                                     0x18099054
#define  KMC_TOP_kmc_top_54_reg_addr                                             "0xB8099054"
#define  KMC_TOP_kmc_top_54_reg                                                  0xB8099054
#define  KMC_TOP_kmc_top_54_inst_addr                                            "0x0015"
#define  set_KMC_TOP_kmc_top_54_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_54_reg)=data)
#define  get_KMC_TOP_kmc_top_54_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_54_reg))
#define  KMC_TOP_kmc_top_54_knr_usr_const0_shift                                 (15)
#define  KMC_TOP_kmc_top_54_knr_usr_coef22_shift                                 (0)
#define  KMC_TOP_kmc_top_54_knr_usr_const0_mask                                  (0x07FF8000)
#define  KMC_TOP_kmc_top_54_knr_usr_coef22_mask                                  (0x00007FFF)
#define  KMC_TOP_kmc_top_54_knr_usr_const0(data)                                 (0x07FF8000&((data)<<15))
#define  KMC_TOP_kmc_top_54_knr_usr_coef22(data)                                 (0x00007FFF&(data))
#define  KMC_TOP_kmc_top_54_get_knr_usr_const0(data)                             ((0x07FF8000&(data))>>15)
#define  KMC_TOP_kmc_top_54_get_knr_usr_coef22(data)                             (0x00007FFF&(data))

#define  KMC_TOP_kmc_top_58                                                     0x18099058
#define  KMC_TOP_kmc_top_58_reg_addr                                             "0xB8099058"
#define  KMC_TOP_kmc_top_58_reg                                                  0xB8099058
#define  KMC_TOP_kmc_top_58_inst_addr                                            "0x0016"
#define  set_KMC_TOP_kmc_top_58_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_58_reg)=data)
#define  get_KMC_TOP_kmc_top_58_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_58_reg))
#define  KMC_TOP_kmc_top_58_knr_convert_map_shift                                (29)
#define  KMC_TOP_kmc_top_58_knr_convert_mode_shift                               (25)
#define  KMC_TOP_kmc_top_58_knr_convert_on_shift                                 (24)
#define  KMC_TOP_kmc_top_58_knr_usr_const2_shift                                 (12)
#define  KMC_TOP_kmc_top_58_knr_usr_const1_shift                                 (0)
#define  KMC_TOP_kmc_top_58_knr_convert_map_mask                                 (0xE0000000)
#define  KMC_TOP_kmc_top_58_knr_convert_mode_mask                                (0x1E000000)
#define  KMC_TOP_kmc_top_58_knr_convert_on_mask                                  (0x01000000)
#define  KMC_TOP_kmc_top_58_knr_usr_const2_mask                                  (0x00FFF000)
#define  KMC_TOP_kmc_top_58_knr_usr_const1_mask                                  (0x00000FFF)
#define  KMC_TOP_kmc_top_58_knr_convert_map(data)                                (0xE0000000&((data)<<29))
#define  KMC_TOP_kmc_top_58_knr_convert_mode(data)                               (0x1E000000&((data)<<25))
#define  KMC_TOP_kmc_top_58_knr_convert_on(data)                                 (0x01000000&((data)<<24))
#define  KMC_TOP_kmc_top_58_knr_usr_const2(data)                                 (0x00FFF000&((data)<<12))
#define  KMC_TOP_kmc_top_58_knr_usr_const1(data)                                 (0x00000FFF&(data))
#define  KMC_TOP_kmc_top_58_get_knr_convert_map(data)                            ((0xE0000000&(data))>>29)
#define  KMC_TOP_kmc_top_58_get_knr_convert_mode(data)                           ((0x1E000000&(data))>>25)
#define  KMC_TOP_kmc_top_58_get_knr_convert_on(data)                             ((0x01000000&(data))>>24)
#define  KMC_TOP_kmc_top_58_get_knr_usr_const2(data)                             ((0x00FFF000&(data))>>12)
#define  KMC_TOP_kmc_top_58_get_knr_usr_const1(data)                             (0x00000FFF&(data))

#define  KMC_TOP_kmc_top_5C                                                     0x1809905C
#define  KMC_TOP_kmc_top_5C_reg_addr                                             "0xB809905C"
#define  KMC_TOP_kmc_top_5C_reg                                                  0xB809905C
#define  KMC_TOP_kmc_top_5C_inst_addr                                            "0x0017"
#define  set_KMC_TOP_kmc_top_5C_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_5C_reg)=data)
#define  get_KMC_TOP_kmc_top_5C_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_5C_reg))
#define  KMC_TOP_kmc_top_5C_mc_drf_bist_in_1_shift                               (8)
#define  KMC_TOP_kmc_top_5C_top_cpr_lf_out_data_shift                            (0)
#define  KMC_TOP_kmc_top_5C_mc_drf_bist_in_1_mask                                (0x00003F00)
#define  KMC_TOP_kmc_top_5C_top_cpr_lf_out_data_mask                             (0x000000FF)
#define  KMC_TOP_kmc_top_5C_mc_drf_bist_in_1(data)                               (0x00003F00&((data)<<8))
#define  KMC_TOP_kmc_top_5C_top_cpr_lf_out_data(data)                            (0x000000FF&(data))
#define  KMC_TOP_kmc_top_5C_get_mc_drf_bist_in_1(data)                           ((0x00003F00&(data))>>8)
#define  KMC_TOP_kmc_top_5C_get_top_cpr_lf_out_data(data)                        (0x000000FF&(data))

#define  KMC_TOP_kmc_top_60                                                     0x18099060
#define  KMC_TOP_kmc_top_60_reg_addr                                             "0xB8099060"
#define  KMC_TOP_kmc_top_60_reg                                                  0xB8099060
#define  KMC_TOP_kmc_top_60_inst_addr                                            "0x0018"
#define  set_KMC_TOP_kmc_top_60_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_60_reg)=data)
#define  get_KMC_TOP_kmc_top_60_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_60_reg))
#define  KMC_TOP_kmc_top_60_kmc_second_run_en_shift                              (0)
#define  KMC_TOP_kmc_top_60_kmc_second_run_en_mask                               (0x000001FF)
#define  KMC_TOP_kmc_top_60_kmc_second_run_en(data)                              (0x000001FF&(data))
#define  KMC_TOP_kmc_top_60_get_kmc_second_run_en(data)                          (0x000001FF&(data))

#define  KMC_TOP_kmc_top_64                                                     0x18099064
#define  KMC_TOP_kmc_top_64_reg_addr                                             "0xB8099064"
#define  KMC_TOP_kmc_top_64_reg                                                  0xB8099064
#define  KMC_TOP_kmc_top_64_inst_addr                                            "0x0019"
#define  set_KMC_TOP_kmc_top_64_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_64_reg)=data)
#define  get_KMC_TOP_kmc_top_64_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_64_reg))
#define  KMC_TOP_kmc_top_64_kmc_ls_shift                                         (0)
#define  KMC_TOP_kmc_top_64_kmc_ls_mask                                          (0x0000007F)
#define  KMC_TOP_kmc_top_64_kmc_ls(data)                                         (0x0000007F&(data))
#define  KMC_TOP_kmc_top_64_get_kmc_ls(data)                                     (0x0000007F&(data))

#define  KMC_TOP_kmc_top_68                                                     0x18099068
#define  KMC_TOP_kmc_top_68_reg_addr                                             "0xB8099068"
#define  KMC_TOP_kmc_top_68_reg                                                  0xB8099068
#define  KMC_TOP_kmc_top_68_inst_addr                                            "0x001A"
#define  set_KMC_TOP_kmc_top_68_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_68_reg)=data)
#define  get_KMC_TOP_kmc_top_68_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_68_reg))
#define  KMC_TOP_kmc_top_68_kmc_rme_shift                                        (0)
#define  KMC_TOP_kmc_top_68_kmc_rme_mask                                         (0x0000007F)
#define  KMC_TOP_kmc_top_68_kmc_rme(data)                                        (0x0000007F&(data))
#define  KMC_TOP_kmc_top_68_get_kmc_rme(data)                                    (0x0000007F&(data))

#define  KMC_TOP_kmc_top_6C                                                     0x1809906C
#define  KMC_TOP_kmc_top_6C_reg_addr                                             "0xB809906C"
#define  KMC_TOP_kmc_top_6C_reg                                                  0xB809906C
#define  KMC_TOP_kmc_top_6C_inst_addr                                            "0x001B"
#define  set_KMC_TOP_kmc_top_6C_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_6C_reg)=data)
#define  get_KMC_TOP_kmc_top_6C_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_6C_reg))
#define  KMC_TOP_kmc_top_6C_kmc_rm_shift                                         (0)
#define  KMC_TOP_kmc_top_6C_kmc_rm_mask                                          (0x0FFFFFFF)
#define  KMC_TOP_kmc_top_6C_kmc_rm(data)                                         (0x0FFFFFFF&(data))
#define  KMC_TOP_kmc_top_6C_get_kmc_rm(data)                                     (0x0FFFFFFF&(data))

#define  KMC_TOP_kmc_top_70                                                     0x18099070
#define  KMC_TOP_kmc_top_70_reg_addr                                             "0xB8099070"
#define  KMC_TOP_kmc_top_70_reg                                                  0xB8099070
#define  KMC_TOP_kmc_top_70_inst_addr                                            "0x001C"
#define  set_KMC_TOP_kmc_top_70_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_70_reg)=data)
#define  get_KMC_TOP_kmc_top_70_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_70_reg))
#define  KMC_TOP_kmc_top_70_regr_mc_bist_done_shift                              (0)
#define  KMC_TOP_kmc_top_70_regr_mc_bist_done_mask                               (0xFFFFFFFF)
#define  KMC_TOP_kmc_top_70_regr_mc_bist_done(data)                              (0xFFFFFFFF&(data))
#define  KMC_TOP_kmc_top_70_get_regr_mc_bist_done(data)                          (0xFFFFFFFF&(data))

#define  KMC_TOP_kmc_top_74                                                     0x18099074
#define  KMC_TOP_kmc_top_74_reg_addr                                             "0xB8099074"
#define  KMC_TOP_kmc_top_74_reg                                                  0xB8099074
#define  KMC_TOP_kmc_top_74_inst_addr                                            "0x001D"
#define  set_KMC_TOP_kmc_top_74_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_74_reg)=data)
#define  get_KMC_TOP_kmc_top_74_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_74_reg))
#define  KMC_TOP_kmc_top_74_regr_mc_bist_done1_shift                             (0)
#define  KMC_TOP_kmc_top_74_regr_mc_bist_done1_mask                              (0xFFFFFFFF)
#define  KMC_TOP_kmc_top_74_regr_mc_bist_done1(data)                             (0xFFFFFFFF&(data))
#define  KMC_TOP_kmc_top_74_get_regr_mc_bist_done1(data)                         (0xFFFFFFFF&(data))

#define  KMC_TOP_kmc_top_78                                                     0x18099078
#define  KMC_TOP_kmc_top_78_reg_addr                                             "0xB8099078"
#define  KMC_TOP_kmc_top_78_reg                                                  0xB8099078
#define  KMC_TOP_kmc_top_78_inst_addr                                            "0x001E"
#define  set_KMC_TOP_kmc_top_78_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_78_reg)=data)
#define  get_KMC_TOP_kmc_top_78_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_78_reg))
#define  KMC_TOP_kmc_top_78_regr_mc_bist_done2_shift                             (0)
#define  KMC_TOP_kmc_top_78_regr_mc_bist_done2_mask                              (0xFFFFFFFF)
#define  KMC_TOP_kmc_top_78_regr_mc_bist_done2(data)                             (0xFFFFFFFF&(data))
#define  KMC_TOP_kmc_top_78_get_regr_mc_bist_done2(data)                         (0xFFFFFFFF&(data))

#define  KMC_TOP_kmc_top_7C                                                     0x1809907C
#define  KMC_TOP_kmc_top_7C_reg_addr                                             "0xB809907C"
#define  KMC_TOP_kmc_top_7C_reg                                                  0xB809907C
#define  KMC_TOP_kmc_top_7C_inst_addr                                            "0x001F"
#define  set_KMC_TOP_kmc_top_7C_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_7C_reg)=data)
#define  get_KMC_TOP_kmc_top_7C_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_7C_reg))
#define  KMC_TOP_kmc_top_7C_regr_mc_bist_done3_shift                             (0)
#define  KMC_TOP_kmc_top_7C_regr_mc_bist_done3_mask                              (0x07FFFFFF)
#define  KMC_TOP_kmc_top_7C_regr_mc_bist_done3(data)                             (0x07FFFFFF&(data))
#define  KMC_TOP_kmc_top_7C_get_regr_mc_bist_done3(data)                         (0x07FFFFFF&(data))

#define  KMC_TOP_kmc_top_80                                                     0x18099080
#define  KMC_TOP_kmc_top_80_reg_addr                                             "0xB8099080"
#define  KMC_TOP_kmc_top_80_reg                                                  0xB8099080
#define  KMC_TOP_kmc_top_80_inst_addr                                            "0x0020"
#define  set_KMC_TOP_kmc_top_80_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_80_reg)=data)
#define  get_KMC_TOP_kmc_top_80_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_80_reg))
#define  KMC_TOP_kmc_top_80_regr_mc_bist_fail_shift                              (0)
#define  KMC_TOP_kmc_top_80_regr_mc_bist_fail_mask                               (0xFFFFFFFF)
#define  KMC_TOP_kmc_top_80_regr_mc_bist_fail(data)                              (0xFFFFFFFF&(data))
#define  KMC_TOP_kmc_top_80_get_regr_mc_bist_fail(data)                          (0xFFFFFFFF&(data))

#define  KMC_TOP_kmc_top_84                                                     0x18099084
#define  KMC_TOP_kmc_top_84_reg_addr                                             "0xB8099084"
#define  KMC_TOP_kmc_top_84_reg                                                  0xB8099084
#define  KMC_TOP_kmc_top_84_inst_addr                                            "0x0021"
#define  set_KMC_TOP_kmc_top_84_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_84_reg)=data)
#define  get_KMC_TOP_kmc_top_84_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_84_reg))
#define  KMC_TOP_kmc_top_84_regr_mc_bist_fail1_shift                             (0)
#define  KMC_TOP_kmc_top_84_regr_mc_bist_fail1_mask                              (0xFFFFFFFF)
#define  KMC_TOP_kmc_top_84_regr_mc_bist_fail1(data)                             (0xFFFFFFFF&(data))
#define  KMC_TOP_kmc_top_84_get_regr_mc_bist_fail1(data)                         (0xFFFFFFFF&(data))

#define  KMC_TOP_kmc_top_88                                                     0x18099088
#define  KMC_TOP_kmc_top_88_reg_addr                                             "0xB8099088"
#define  KMC_TOP_kmc_top_88_reg                                                  0xB8099088
#define  KMC_TOP_kmc_top_88_inst_addr                                            "0x0022"
#define  set_KMC_TOP_kmc_top_88_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_88_reg)=data)
#define  get_KMC_TOP_kmc_top_88_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_88_reg))
#define  KMC_TOP_kmc_top_88_regr_mc_bist_fail2_shift                             (0)
#define  KMC_TOP_kmc_top_88_regr_mc_bist_fail2_mask                              (0xFFFFFFFF)
#define  KMC_TOP_kmc_top_88_regr_mc_bist_fail2(data)                             (0xFFFFFFFF&(data))
#define  KMC_TOP_kmc_top_88_get_regr_mc_bist_fail2(data)                         (0xFFFFFFFF&(data))

#define  KMC_TOP_kmc_top_8C                                                     0x1809908C
#define  KMC_TOP_kmc_top_8C_reg_addr                                             "0xB809908C"
#define  KMC_TOP_kmc_top_8C_reg                                                  0xB809908C
#define  KMC_TOP_kmc_top_8C_inst_addr                                            "0x0023"
#define  set_KMC_TOP_kmc_top_8C_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_8C_reg)=data)
#define  get_KMC_TOP_kmc_top_8C_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_8C_reg))
#define  KMC_TOP_kmc_top_8C_regr_mc_drf_bist_out_1_shift                         (27)
#define  KMC_TOP_kmc_top_8C_regr_mc_bist_fail3_shift                             (0)
#define  KMC_TOP_kmc_top_8C_regr_mc_drf_bist_out_1_mask                          (0x08000000)
#define  KMC_TOP_kmc_top_8C_regr_mc_bist_fail3_mask                              (0x07FFFFFF)
#define  KMC_TOP_kmc_top_8C_regr_mc_drf_bist_out_1(data)                         (0x08000000&((data)<<27))
#define  KMC_TOP_kmc_top_8C_regr_mc_bist_fail3(data)                             (0x07FFFFFF&(data))
#define  KMC_TOP_kmc_top_8C_get_regr_mc_drf_bist_out_1(data)                     ((0x08000000&(data))>>27)
#define  KMC_TOP_kmc_top_8C_get_regr_mc_bist_fail3(data)                         (0x07FFFFFF&(data))

#define  KMC_TOP_kmc_top_90                                                     0x18099090
#define  KMC_TOP_kmc_top_90_reg_addr                                             "0xB8099090"
#define  KMC_TOP_kmc_top_90_reg                                                  0xB8099090
#define  KMC_TOP_kmc_top_90_inst_addr                                            "0x0024"
#define  set_KMC_TOP_kmc_top_90_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_90_reg)=data)
#define  get_KMC_TOP_kmc_top_90_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_90_reg))
#define  KMC_TOP_kmc_top_90_regr_kmc_dm_axi_bbd_bist_done_shift                  (0)
#define  KMC_TOP_kmc_top_90_regr_kmc_dm_axi_bbd_bist_done_mask                   (0x007FFFFF)
#define  KMC_TOP_kmc_top_90_regr_kmc_dm_axi_bbd_bist_done(data)                  (0x007FFFFF&(data))
#define  KMC_TOP_kmc_top_90_get_regr_kmc_dm_axi_bbd_bist_done(data)              (0x007FFFFF&(data))

#define  KMC_TOP_kmc_top_94                                                     0x18099094
#define  KMC_TOP_kmc_top_94_reg_addr                                             "0xB8099094"
#define  KMC_TOP_kmc_top_94_reg                                                  0xB8099094
#define  KMC_TOP_kmc_top_94_inst_addr                                            "0x0025"
#define  set_KMC_TOP_kmc_top_94_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_94_reg)=data)
#define  get_KMC_TOP_kmc_top_94_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_94_reg))
#define  KMC_TOP_kmc_top_94_regr_kmc_dm_axi_bbd_bist_fail_shift                  (0)
#define  KMC_TOP_kmc_top_94_regr_kmc_dm_axi_bbd_bist_fail_mask                   (0x007FFFFF)
#define  KMC_TOP_kmc_top_94_regr_kmc_dm_axi_bbd_bist_fail(data)                  (0x007FFFFF&(data))
#define  KMC_TOP_kmc_top_94_get_regr_kmc_dm_axi_bbd_bist_fail(data)              (0x007FFFFF&(data))

#define  KMC_TOP_kmc_top_98                                                     0x18099098
#define  KMC_TOP_kmc_top_98_reg_addr                                             "0xB8099098"
#define  KMC_TOP_kmc_top_98_reg                                                  0xB8099098
#define  KMC_TOP_kmc_top_98_inst_addr                                            "0x0026"
#define  set_KMC_TOP_kmc_top_98_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_98_reg)=data)
#define  get_KMC_TOP_kmc_top_98_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_98_reg))
#define  KMC_TOP_kmc_top_98_regr_cpr_knr_ipmc_bisr_repaired_shift                (0)
#define  KMC_TOP_kmc_top_98_regr_cpr_knr_ipmc_bisr_repaired_mask                 (0x000001FF)
#define  KMC_TOP_kmc_top_98_regr_cpr_knr_ipmc_bisr_repaired(data)                (0x000001FF&(data))
#define  KMC_TOP_kmc_top_98_get_regr_cpr_knr_ipmc_bisr_repaired(data)            (0x000001FF&(data))

#define  KMC_TOP_kmc_top_9C                                                     0x1809909C
#define  KMC_TOP_kmc_top_9C_reg_addr                                             "0xB809909C"
#define  KMC_TOP_kmc_top_9C_reg                                                  0xB809909C
#define  KMC_TOP_kmc_top_9C_inst_addr                                            "0x0027"
#define  set_KMC_TOP_kmc_top_9C_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_9C_reg)=data)
#define  get_KMC_TOP_kmc_top_9C_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_9C_reg))
#define  KMC_TOP_kmc_top_9C_regr_cpr_knr_ipmc_bisr_fail_shift                    (0)
#define  KMC_TOP_kmc_top_9C_regr_cpr_knr_ipmc_bisr_fail_mask                     (0x000001FF)
#define  KMC_TOP_kmc_top_9C_regr_cpr_knr_ipmc_bisr_fail(data)                    (0x000001FF&(data))
#define  KMC_TOP_kmc_top_9C_get_regr_cpr_knr_ipmc_bisr_fail(data)                (0x000001FF&(data))

#define  KMC_TOP_kmc_top_A0                                                     0x180990A0
#define  KMC_TOP_kmc_top_A0_reg_addr                                             "0xB80990A0"
#define  KMC_TOP_kmc_top_A0_reg                                                  0xB80990A0
#define  KMC_TOP_kmc_top_A0_inst_addr                                            "0x0028"
#define  set_KMC_TOP_kmc_top_A0_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_A0_reg)=data)
#define  get_KMC_TOP_kmc_top_A0_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_A0_reg))
#define  KMC_TOP_kmc_top_A0_regr_kmc_meter_detail_diff_count0_shift              (0)
#define  KMC_TOP_kmc_top_A0_regr_kmc_meter_detail_diff_count0_mask               (0xFFFFFFFF)
#define  KMC_TOP_kmc_top_A0_regr_kmc_meter_detail_diff_count0(data)              (0xFFFFFFFF&(data))
#define  KMC_TOP_kmc_top_A0_get_regr_kmc_meter_detail_diff_count0(data)          (0xFFFFFFFF&(data))

#define  KMC_TOP_kmc_top_A4                                                     0x180990A4
#define  KMC_TOP_kmc_top_A4_reg_addr                                             "0xB80990A4"
#define  KMC_TOP_kmc_top_A4_reg                                                  0xB80990A4
#define  KMC_TOP_kmc_top_A4_inst_addr                                            "0x0029"
#define  set_KMC_TOP_kmc_top_A4_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_A4_reg)=data)
#define  get_KMC_TOP_kmc_top_A4_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_A4_reg))
#define  KMC_TOP_kmc_top_A4_regr_kmc_meter_detail_diff_count1_shift              (0)
#define  KMC_TOP_kmc_top_A4_regr_kmc_meter_detail_diff_count1_mask               (0xFFFFFFFF)
#define  KMC_TOP_kmc_top_A4_regr_kmc_meter_detail_diff_count1(data)              (0xFFFFFFFF&(data))
#define  KMC_TOP_kmc_top_A4_get_regr_kmc_meter_detail_diff_count1(data)          (0xFFFFFFFF&(data))

#define  KMC_TOP_kmc_top_A8                                                     0x180990A8
#define  KMC_TOP_kmc_top_A8_reg_addr                                             "0xB80990A8"
#define  KMC_TOP_kmc_top_A8_reg                                                  0xB80990A8
#define  KMC_TOP_kmc_top_A8_inst_addr                                            "0x002A"
#define  set_KMC_TOP_kmc_top_A8_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_A8_reg)=data)
#define  get_KMC_TOP_kmc_top_A8_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_A8_reg))
#define  KMC_TOP_kmc_top_A8_regr_kmc_meter_detail_diff_count2_shift              (0)
#define  KMC_TOP_kmc_top_A8_regr_kmc_meter_detail_diff_count2_mask               (0xFFFFFFFF)
#define  KMC_TOP_kmc_top_A8_regr_kmc_meter_detail_diff_count2(data)              (0xFFFFFFFF&(data))
#define  KMC_TOP_kmc_top_A8_get_regr_kmc_meter_detail_diff_count2(data)          (0xFFFFFFFF&(data))

#define  KMC_TOP_kmc_top_AC                                                     0x180990AC
#define  KMC_TOP_kmc_top_AC_reg_addr                                             "0xB80990AC"
#define  KMC_TOP_kmc_top_AC_reg                                                  0xB80990AC
#define  KMC_TOP_kmc_top_AC_inst_addr                                            "0x002B"
#define  set_KMC_TOP_kmc_top_AC_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_AC_reg)=data)
#define  get_KMC_TOP_kmc_top_AC_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_AC_reg))
#define  KMC_TOP_kmc_top_AC_regr_kmc_meter_bw_diff_count1_shift                  (0)
#define  KMC_TOP_kmc_top_AC_regr_kmc_meter_bw_diff_count1_mask                   (0xFFFFFFFF)
#define  KMC_TOP_kmc_top_AC_regr_kmc_meter_bw_diff_count1(data)                  (0xFFFFFFFF&(data))
#define  KMC_TOP_kmc_top_AC_get_regr_kmc_meter_bw_diff_count1(data)              (0xFFFFFFFF&(data))

#define  KMC_TOP_kmc_top_B0                                                     0x180990B0
#define  KMC_TOP_kmc_top_B0_reg_addr                                             "0xB80990B0"
#define  KMC_TOP_kmc_top_B0_reg                                                  0xB80990B0
#define  KMC_TOP_kmc_top_B0_inst_addr                                            "0x002C"
#define  set_KMC_TOP_kmc_top_B0_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_B0_reg)=data)
#define  get_KMC_TOP_kmc_top_B0_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_B0_reg))
#define  KMC_TOP_kmc_top_B0_regr_kmc_ipmc_hacto_shift                            (13)
#define  KMC_TOP_kmc_top_B0_regr_kmc_ipmc_htotalo_shift                          (0)
#define  KMC_TOP_kmc_top_B0_regr_kmc_ipmc_hacto_mask                             (0x03FFE000)
#define  KMC_TOP_kmc_top_B0_regr_kmc_ipmc_htotalo_mask                           (0x00001FFF)
#define  KMC_TOP_kmc_top_B0_regr_kmc_ipmc_hacto(data)                            (0x03FFE000&((data)<<13))
#define  KMC_TOP_kmc_top_B0_regr_kmc_ipmc_htotalo(data)                          (0x00001FFF&(data))
#define  KMC_TOP_kmc_top_B0_get_regr_kmc_ipmc_hacto(data)                        ((0x03FFE000&(data))>>13)
#define  KMC_TOP_kmc_top_B0_get_regr_kmc_ipmc_htotalo(data)                      (0x00001FFF&(data))

#define  KMC_TOP_kmc_top_B4                                                     0x180990B4
#define  KMC_TOP_kmc_top_B4_reg_addr                                             "0xB80990B4"
#define  KMC_TOP_kmc_top_B4_reg                                                  0xB80990B4
#define  KMC_TOP_kmc_top_B4_inst_addr                                            "0x002D"
#define  set_KMC_TOP_kmc_top_B4_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_B4_reg)=data)
#define  get_KMC_TOP_kmc_top_B4_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_B4_reg))
#define  KMC_TOP_kmc_top_B4_regr_kmc_ipmc_vacto_shift                            (12)
#define  KMC_TOP_kmc_top_B4_regr_kmc_ipmc_hinacto_shift                          (0)
#define  KMC_TOP_kmc_top_B4_regr_kmc_ipmc_vacto_mask                             (0x00FFF000)
#define  KMC_TOP_kmc_top_B4_regr_kmc_ipmc_hinacto_mask                           (0x00000FFF)
#define  KMC_TOP_kmc_top_B4_regr_kmc_ipmc_vacto(data)                            (0x00FFF000&((data)<<12))
#define  KMC_TOP_kmc_top_B4_regr_kmc_ipmc_hinacto(data)                          (0x00000FFF&(data))
#define  KMC_TOP_kmc_top_B4_get_regr_kmc_ipmc_vacto(data)                        ((0x00FFF000&(data))>>12)
#define  KMC_TOP_kmc_top_B4_get_regr_kmc_ipmc_hinacto(data)                      (0x00000FFF&(data))

#define  KMC_TOP_kmc_top_B8                                                     0x180990B8
#define  KMC_TOP_kmc_top_B8_reg_addr                                             "0xB80990B8"
#define  KMC_TOP_kmc_top_B8_reg                                                  0xB80990B8
#define  KMC_TOP_kmc_top_B8_inst_addr                                            "0x002E"
#define  set_KMC_TOP_kmc_top_B8_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_B8_reg)=data)
#define  get_KMC_TOP_kmc_top_B8_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_B8_reg))
#define  KMC_TOP_kmc_top_B8_regr_kmc_ipmc_vtotalo_shift                          (0)
#define  KMC_TOP_kmc_top_B8_regr_kmc_ipmc_vtotalo_mask                           (0x01FFFFFF)
#define  KMC_TOP_kmc_top_B8_regr_kmc_ipmc_vtotalo(data)                          (0x01FFFFFF&(data))
#define  KMC_TOP_kmc_top_B8_get_regr_kmc_ipmc_vtotalo(data)                      (0x01FFFFFF&(data))

#define  KMC_TOP_kmc_top_BC                                                     0x180990BC
#define  KMC_TOP_kmc_top_BC_reg_addr                                             "0xB80990BC"
#define  KMC_TOP_kmc_top_BC_reg                                                  0xB80990BC
#define  KMC_TOP_kmc_top_BC_inst_addr                                            "0x002F"
#define  set_KMC_TOP_kmc_top_BC_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_BC_reg)=data)
#define  get_KMC_TOP_kmc_top_BC_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_BC_reg))
#define  KMC_TOP_kmc_top_BC_regr_vhdtl_v_o_shift                                 (16)
#define  KMC_TOP_kmc_top_BC_regr_vhdtl_h_o_shift                                 (0)
#define  KMC_TOP_kmc_top_BC_regr_vhdtl_v_o_mask                                  (0xFFFF0000)
#define  KMC_TOP_kmc_top_BC_regr_vhdtl_h_o_mask                                  (0x0000FFFF)
#define  KMC_TOP_kmc_top_BC_regr_vhdtl_v_o(data)                                 (0xFFFF0000&((data)<<16))
#define  KMC_TOP_kmc_top_BC_regr_vhdtl_h_o(data)                                 (0x0000FFFF&(data))
#define  KMC_TOP_kmc_top_BC_get_regr_vhdtl_v_o(data)                             ((0xFFFF0000&(data))>>16)
#define  KMC_TOP_kmc_top_BC_get_regr_vhdtl_h_o(data)                             (0x0000FFFF&(data))

#define  KMC_TOP_kmc_top_C0                                                     0x180990C0
#define  KMC_TOP_kmc_top_C0_reg_addr                                             "0xB80990C0"
#define  KMC_TOP_kmc_top_C0_reg                                                  0xB80990C0
#define  KMC_TOP_kmc_top_C0_inst_addr                                            "0x0030"
#define  set_KMC_TOP_kmc_top_C0_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_C0_reg)=data)
#define  get_KMC_TOP_kmc_top_C0_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_C0_reg))
#define  KMC_TOP_kmc_top_C0_regr_vhdtl_rgn02_shift                               (20)
#define  KMC_TOP_kmc_top_C0_regr_vhdtl_rgn01_shift                               (10)
#define  KMC_TOP_kmc_top_C0_regr_vhdtl_rgn00_shift                               (0)
#define  KMC_TOP_kmc_top_C0_regr_vhdtl_rgn02_mask                                (0x3FF00000)
#define  KMC_TOP_kmc_top_C0_regr_vhdtl_rgn01_mask                                (0x000FFC00)
#define  KMC_TOP_kmc_top_C0_regr_vhdtl_rgn00_mask                                (0x000003FF)
#define  KMC_TOP_kmc_top_C0_regr_vhdtl_rgn02(data)                               (0x3FF00000&((data)<<20))
#define  KMC_TOP_kmc_top_C0_regr_vhdtl_rgn01(data)                               (0x000FFC00&((data)<<10))
#define  KMC_TOP_kmc_top_C0_regr_vhdtl_rgn00(data)                               (0x000003FF&(data))
#define  KMC_TOP_kmc_top_C0_get_regr_vhdtl_rgn02(data)                           ((0x3FF00000&(data))>>20)
#define  KMC_TOP_kmc_top_C0_get_regr_vhdtl_rgn01(data)                           ((0x000FFC00&(data))>>10)
#define  KMC_TOP_kmc_top_C0_get_regr_vhdtl_rgn00(data)                           (0x000003FF&(data))

#define  KMC_TOP_kmc_top_C4                                                     0x180990C4
#define  KMC_TOP_kmc_top_C4_reg_addr                                             "0xB80990C4"
#define  KMC_TOP_kmc_top_C4_reg                                                  0xB80990C4
#define  KMC_TOP_kmc_top_C4_inst_addr                                            "0x0031"
#define  set_KMC_TOP_kmc_top_C4_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_C4_reg)=data)
#define  get_KMC_TOP_kmc_top_C4_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_C4_reg))
#define  KMC_TOP_kmc_top_C4_regr_vhdtl_rgn05_shift                               (20)
#define  KMC_TOP_kmc_top_C4_regr_vhdtl_rgn04_shift                               (10)
#define  KMC_TOP_kmc_top_C4_regr_vhdtl_rgn03_shift                               (0)
#define  KMC_TOP_kmc_top_C4_regr_vhdtl_rgn05_mask                                (0x3FF00000)
#define  KMC_TOP_kmc_top_C4_regr_vhdtl_rgn04_mask                                (0x000FFC00)
#define  KMC_TOP_kmc_top_C4_regr_vhdtl_rgn03_mask                                (0x000003FF)
#define  KMC_TOP_kmc_top_C4_regr_vhdtl_rgn05(data)                               (0x3FF00000&((data)<<20))
#define  KMC_TOP_kmc_top_C4_regr_vhdtl_rgn04(data)                               (0x000FFC00&((data)<<10))
#define  KMC_TOP_kmc_top_C4_regr_vhdtl_rgn03(data)                               (0x000003FF&(data))
#define  KMC_TOP_kmc_top_C4_get_regr_vhdtl_rgn05(data)                           ((0x3FF00000&(data))>>20)
#define  KMC_TOP_kmc_top_C4_get_regr_vhdtl_rgn04(data)                           ((0x000FFC00&(data))>>10)
#define  KMC_TOP_kmc_top_C4_get_regr_vhdtl_rgn03(data)                           (0x000003FF&(data))

#define  KMC_TOP_kmc_top_C8                                                     0x180990C8
#define  KMC_TOP_kmc_top_C8_reg_addr                                             "0xB80990C8"
#define  KMC_TOP_kmc_top_C8_reg                                                  0xB80990C8
#define  KMC_TOP_kmc_top_C8_inst_addr                                            "0x0032"
#define  set_KMC_TOP_kmc_top_C8_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_C8_reg)=data)
#define  get_KMC_TOP_kmc_top_C8_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_C8_reg))
#define  KMC_TOP_kmc_top_C8_regr_vhdtl_rgn07_shift                               (10)
#define  KMC_TOP_kmc_top_C8_regr_vhdtl_rgn06_shift                               (0)
#define  KMC_TOP_kmc_top_C8_regr_vhdtl_rgn07_mask                                (0x000FFC00)
#define  KMC_TOP_kmc_top_C8_regr_vhdtl_rgn06_mask                                (0x000003FF)
#define  KMC_TOP_kmc_top_C8_regr_vhdtl_rgn07(data)                               (0x000FFC00&((data)<<10))
#define  KMC_TOP_kmc_top_C8_regr_vhdtl_rgn06(data)                               (0x000003FF&(data))
#define  KMC_TOP_kmc_top_C8_get_regr_vhdtl_rgn07(data)                           ((0x000FFC00&(data))>>10)
#define  KMC_TOP_kmc_top_C8_get_regr_vhdtl_rgn06(data)                           (0x000003FF&(data))

#define  KMC_TOP_kmc_top_CC                                                     0x180990CC
#define  KMC_TOP_kmc_top_CC_reg_addr                                             "0xB80990CC"
#define  KMC_TOP_kmc_top_CC_reg                                                  0xB80990CC
#define  KMC_TOP_kmc_top_CC_inst_addr                                            "0x0033"
#define  set_KMC_TOP_kmc_top_CC_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_CC_reg)=data)
#define  get_KMC_TOP_kmc_top_CC_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_CC_reg))
#define  KMC_TOP_kmc_top_CC_regr_vhdtl_rgn12_shift                               (20)
#define  KMC_TOP_kmc_top_CC_regr_vhdtl_rgn11_shift                               (10)
#define  KMC_TOP_kmc_top_CC_regr_vhdtl_rgn10_shift                               (0)
#define  KMC_TOP_kmc_top_CC_regr_vhdtl_rgn12_mask                                (0x3FF00000)
#define  KMC_TOP_kmc_top_CC_regr_vhdtl_rgn11_mask                                (0x000FFC00)
#define  KMC_TOP_kmc_top_CC_regr_vhdtl_rgn10_mask                                (0x000003FF)
#define  KMC_TOP_kmc_top_CC_regr_vhdtl_rgn12(data)                               (0x3FF00000&((data)<<20))
#define  KMC_TOP_kmc_top_CC_regr_vhdtl_rgn11(data)                               (0x000FFC00&((data)<<10))
#define  KMC_TOP_kmc_top_CC_regr_vhdtl_rgn10(data)                               (0x000003FF&(data))
#define  KMC_TOP_kmc_top_CC_get_regr_vhdtl_rgn12(data)                           ((0x3FF00000&(data))>>20)
#define  KMC_TOP_kmc_top_CC_get_regr_vhdtl_rgn11(data)                           ((0x000FFC00&(data))>>10)
#define  KMC_TOP_kmc_top_CC_get_regr_vhdtl_rgn10(data)                           (0x000003FF&(data))

#define  KMC_TOP_kmc_top_D0                                                     0x180990D0
#define  KMC_TOP_kmc_top_D0_reg_addr                                             "0xB80990D0"
#define  KMC_TOP_kmc_top_D0_reg                                                  0xB80990D0
#define  KMC_TOP_kmc_top_D0_inst_addr                                            "0x0034"
#define  set_KMC_TOP_kmc_top_D0_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_D0_reg)=data)
#define  get_KMC_TOP_kmc_top_D0_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_D0_reg))
#define  KMC_TOP_kmc_top_D0_regr_vhdtl_rgn15_shift                               (20)
#define  KMC_TOP_kmc_top_D0_regr_vhdtl_rgn14_shift                               (10)
#define  KMC_TOP_kmc_top_D0_regr_vhdtl_rgn13_shift                               (0)
#define  KMC_TOP_kmc_top_D0_regr_vhdtl_rgn15_mask                                (0x3FF00000)
#define  KMC_TOP_kmc_top_D0_regr_vhdtl_rgn14_mask                                (0x000FFC00)
#define  KMC_TOP_kmc_top_D0_regr_vhdtl_rgn13_mask                                (0x000003FF)
#define  KMC_TOP_kmc_top_D0_regr_vhdtl_rgn15(data)                               (0x3FF00000&((data)<<20))
#define  KMC_TOP_kmc_top_D0_regr_vhdtl_rgn14(data)                               (0x000FFC00&((data)<<10))
#define  KMC_TOP_kmc_top_D0_regr_vhdtl_rgn13(data)                               (0x000003FF&(data))
#define  KMC_TOP_kmc_top_D0_get_regr_vhdtl_rgn15(data)                           ((0x3FF00000&(data))>>20)
#define  KMC_TOP_kmc_top_D0_get_regr_vhdtl_rgn14(data)                           ((0x000FFC00&(data))>>10)
#define  KMC_TOP_kmc_top_D0_get_regr_vhdtl_rgn13(data)                           (0x000003FF&(data))

#define  KMC_TOP_kmc_top_D4                                                     0x180990D4
#define  KMC_TOP_kmc_top_D4_reg_addr                                             "0xB80990D4"
#define  KMC_TOP_kmc_top_D4_reg                                                  0xB80990D4
#define  KMC_TOP_kmc_top_D4_inst_addr                                            "0x0035"
#define  set_KMC_TOP_kmc_top_D4_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_D4_reg)=data)
#define  get_KMC_TOP_kmc_top_D4_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_D4_reg))
#define  KMC_TOP_kmc_top_D4_regr_vhdtl_rgn17_shift                               (10)
#define  KMC_TOP_kmc_top_D4_regr_vhdtl_rgn16_shift                               (0)
#define  KMC_TOP_kmc_top_D4_regr_vhdtl_rgn17_mask                                (0x000FFC00)
#define  KMC_TOP_kmc_top_D4_regr_vhdtl_rgn16_mask                                (0x000003FF)
#define  KMC_TOP_kmc_top_D4_regr_vhdtl_rgn17(data)                               (0x000FFC00&((data)<<10))
#define  KMC_TOP_kmc_top_D4_regr_vhdtl_rgn16(data)                               (0x000003FF&(data))
#define  KMC_TOP_kmc_top_D4_get_regr_vhdtl_rgn17(data)                           ((0x000FFC00&(data))>>10)
#define  KMC_TOP_kmc_top_D4_get_regr_vhdtl_rgn16(data)                           (0x000003FF&(data))

#define  KMC_TOP_kmc_top_D8                                                     0x180990D8
#define  KMC_TOP_kmc_top_D8_reg_addr                                             "0xB80990D8"
#define  KMC_TOP_kmc_top_D8_reg                                                  0xB80990D8
#define  KMC_TOP_kmc_top_D8_inst_addr                                            "0x0036"
#define  set_KMC_TOP_kmc_top_D8_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_D8_reg)=data)
#define  get_KMC_TOP_kmc_top_D8_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_D8_reg))
#define  KMC_TOP_kmc_top_D8_regr_vhdtl_rgn22_shift                               (20)
#define  KMC_TOP_kmc_top_D8_regr_vhdtl_rgn21_shift                               (10)
#define  KMC_TOP_kmc_top_D8_regr_vhdtl_rgn20_shift                               (0)
#define  KMC_TOP_kmc_top_D8_regr_vhdtl_rgn22_mask                                (0x3FF00000)
#define  KMC_TOP_kmc_top_D8_regr_vhdtl_rgn21_mask                                (0x000FFC00)
#define  KMC_TOP_kmc_top_D8_regr_vhdtl_rgn20_mask                                (0x000003FF)
#define  KMC_TOP_kmc_top_D8_regr_vhdtl_rgn22(data)                               (0x3FF00000&((data)<<20))
#define  KMC_TOP_kmc_top_D8_regr_vhdtl_rgn21(data)                               (0x000FFC00&((data)<<10))
#define  KMC_TOP_kmc_top_D8_regr_vhdtl_rgn20(data)                               (0x000003FF&(data))
#define  KMC_TOP_kmc_top_D8_get_regr_vhdtl_rgn22(data)                           ((0x3FF00000&(data))>>20)
#define  KMC_TOP_kmc_top_D8_get_regr_vhdtl_rgn21(data)                           ((0x000FFC00&(data))>>10)
#define  KMC_TOP_kmc_top_D8_get_regr_vhdtl_rgn20(data)                           (0x000003FF&(data))

#define  KMC_TOP_kmc_top_DC                                                     0x180990DC
#define  KMC_TOP_kmc_top_DC_reg_addr                                             "0xB80990DC"
#define  KMC_TOP_kmc_top_DC_reg                                                  0xB80990DC
#define  KMC_TOP_kmc_top_DC_inst_addr                                            "0x0037"
#define  set_KMC_TOP_kmc_top_DC_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_DC_reg)=data)
#define  get_KMC_TOP_kmc_top_DC_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_DC_reg))
#define  KMC_TOP_kmc_top_DC_regr_vhdtl_rgn25_shift                               (20)
#define  KMC_TOP_kmc_top_DC_regr_vhdtl_rgn24_shift                               (10)
#define  KMC_TOP_kmc_top_DC_regr_vhdtl_rgn23_shift                               (0)
#define  KMC_TOP_kmc_top_DC_regr_vhdtl_rgn25_mask                                (0x3FF00000)
#define  KMC_TOP_kmc_top_DC_regr_vhdtl_rgn24_mask                                (0x000FFC00)
#define  KMC_TOP_kmc_top_DC_regr_vhdtl_rgn23_mask                                (0x000003FF)
#define  KMC_TOP_kmc_top_DC_regr_vhdtl_rgn25(data)                               (0x3FF00000&((data)<<20))
#define  KMC_TOP_kmc_top_DC_regr_vhdtl_rgn24(data)                               (0x000FFC00&((data)<<10))
#define  KMC_TOP_kmc_top_DC_regr_vhdtl_rgn23(data)                               (0x000003FF&(data))
#define  KMC_TOP_kmc_top_DC_get_regr_vhdtl_rgn25(data)                           ((0x3FF00000&(data))>>20)
#define  KMC_TOP_kmc_top_DC_get_regr_vhdtl_rgn24(data)                           ((0x000FFC00&(data))>>10)
#define  KMC_TOP_kmc_top_DC_get_regr_vhdtl_rgn23(data)                           (0x000003FF&(data))

#define  KMC_TOP_kmc_top_E0                                                     0x180990E0
#define  KMC_TOP_kmc_top_E0_reg_addr                                             "0xB80990E0"
#define  KMC_TOP_kmc_top_E0_reg                                                  0xB80990E0
#define  KMC_TOP_kmc_top_E0_inst_addr                                            "0x0038"
#define  set_KMC_TOP_kmc_top_E0_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_E0_reg)=data)
#define  get_KMC_TOP_kmc_top_E0_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_E0_reg))
#define  KMC_TOP_kmc_top_E0_regr_vhdtl_rgn27_shift                               (10)
#define  KMC_TOP_kmc_top_E0_regr_vhdtl_rgn26_shift                               (0)
#define  KMC_TOP_kmc_top_E0_regr_vhdtl_rgn27_mask                                (0x000FFC00)
#define  KMC_TOP_kmc_top_E0_regr_vhdtl_rgn26_mask                                (0x000003FF)
#define  KMC_TOP_kmc_top_E0_regr_vhdtl_rgn27(data)                               (0x000FFC00&((data)<<10))
#define  KMC_TOP_kmc_top_E0_regr_vhdtl_rgn26(data)                               (0x000003FF&(data))
#define  KMC_TOP_kmc_top_E0_get_regr_vhdtl_rgn27(data)                           ((0x000FFC00&(data))>>10)
#define  KMC_TOP_kmc_top_E0_get_regr_vhdtl_rgn26(data)                           (0x000003FF&(data))

#define  KMC_TOP_kmc_top_E4                                                     0x180990E4
#define  KMC_TOP_kmc_top_E4_reg_addr                                             "0xB80990E4"
#define  KMC_TOP_kmc_top_E4_reg                                                  0xB80990E4
#define  KMC_TOP_kmc_top_E4_inst_addr                                            "0x0039"
#define  set_KMC_TOP_kmc_top_E4_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_E4_reg)=data)
#define  get_KMC_TOP_kmc_top_E4_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_E4_reg))
#define  KMC_TOP_kmc_top_E4_regr_vhdtl_rgn32_shift                               (20)
#define  KMC_TOP_kmc_top_E4_regr_vhdtl_rgn31_shift                               (10)
#define  KMC_TOP_kmc_top_E4_regr_vhdtl_rgn30_shift                               (0)
#define  KMC_TOP_kmc_top_E4_regr_vhdtl_rgn32_mask                                (0x3FF00000)
#define  KMC_TOP_kmc_top_E4_regr_vhdtl_rgn31_mask                                (0x000FFC00)
#define  KMC_TOP_kmc_top_E4_regr_vhdtl_rgn30_mask                                (0x000003FF)
#define  KMC_TOP_kmc_top_E4_regr_vhdtl_rgn32(data)                               (0x3FF00000&((data)<<20))
#define  KMC_TOP_kmc_top_E4_regr_vhdtl_rgn31(data)                               (0x000FFC00&((data)<<10))
#define  KMC_TOP_kmc_top_E4_regr_vhdtl_rgn30(data)                               (0x000003FF&(data))
#define  KMC_TOP_kmc_top_E4_get_regr_vhdtl_rgn32(data)                           ((0x3FF00000&(data))>>20)
#define  KMC_TOP_kmc_top_E4_get_regr_vhdtl_rgn31(data)                           ((0x000FFC00&(data))>>10)
#define  KMC_TOP_kmc_top_E4_get_regr_vhdtl_rgn30(data)                           (0x000003FF&(data))

#define  KMC_TOP_kmc_top_E8                                                     0x180990E8
#define  KMC_TOP_kmc_top_E8_reg_addr                                             "0xB80990E8"
#define  KMC_TOP_kmc_top_E8_reg                                                  0xB80990E8
#define  KMC_TOP_kmc_top_E8_inst_addr                                            "0x003A"
#define  set_KMC_TOP_kmc_top_E8_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_E8_reg)=data)
#define  get_KMC_TOP_kmc_top_E8_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_E8_reg))
#define  KMC_TOP_kmc_top_E8_regr_vhdtl_rgn35_shift                               (20)
#define  KMC_TOP_kmc_top_E8_regr_vhdtl_rgn34_shift                               (10)
#define  KMC_TOP_kmc_top_E8_regr_vhdtl_rgn33_shift                               (0)
#define  KMC_TOP_kmc_top_E8_regr_vhdtl_rgn35_mask                                (0x3FF00000)
#define  KMC_TOP_kmc_top_E8_regr_vhdtl_rgn34_mask                                (0x000FFC00)
#define  KMC_TOP_kmc_top_E8_regr_vhdtl_rgn33_mask                                (0x000003FF)
#define  KMC_TOP_kmc_top_E8_regr_vhdtl_rgn35(data)                               (0x3FF00000&((data)<<20))
#define  KMC_TOP_kmc_top_E8_regr_vhdtl_rgn34(data)                               (0x000FFC00&((data)<<10))
#define  KMC_TOP_kmc_top_E8_regr_vhdtl_rgn33(data)                               (0x000003FF&(data))
#define  KMC_TOP_kmc_top_E8_get_regr_vhdtl_rgn35(data)                           ((0x3FF00000&(data))>>20)
#define  KMC_TOP_kmc_top_E8_get_regr_vhdtl_rgn34(data)                           ((0x000FFC00&(data))>>10)
#define  KMC_TOP_kmc_top_E8_get_regr_vhdtl_rgn33(data)                           (0x000003FF&(data))

#define  KMC_TOP_kmc_top_EC                                                     0x180990EC
#define  KMC_TOP_kmc_top_EC_reg_addr                                             "0xB80990EC"
#define  KMC_TOP_kmc_top_EC_reg                                                  0xB80990EC
#define  KMC_TOP_kmc_top_EC_inst_addr                                            "0x003B"
#define  set_KMC_TOP_kmc_top_EC_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_EC_reg)=data)
#define  get_KMC_TOP_kmc_top_EC_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_EC_reg))
#define  KMC_TOP_kmc_top_EC_regr_vhdtl_rgn37_shift                               (10)
#define  KMC_TOP_kmc_top_EC_regr_vhdtl_rgn36_shift                               (0)
#define  KMC_TOP_kmc_top_EC_regr_vhdtl_rgn37_mask                                (0x000FFC00)
#define  KMC_TOP_kmc_top_EC_regr_vhdtl_rgn36_mask                                (0x000003FF)
#define  KMC_TOP_kmc_top_EC_regr_vhdtl_rgn37(data)                               (0x000FFC00&((data)<<10))
#define  KMC_TOP_kmc_top_EC_regr_vhdtl_rgn36(data)                               (0x000003FF&(data))
#define  KMC_TOP_kmc_top_EC_get_regr_vhdtl_rgn37(data)                           ((0x000FFC00&(data))>>10)
#define  KMC_TOP_kmc_top_EC_get_regr_vhdtl_rgn36(data)                           (0x000003FF&(data))

#define  KMC_TOP_kmc_top_F0                                                     0x180990F0
#define  KMC_TOP_kmc_top_F0_reg_addr                                             "0xB80990F0"
#define  KMC_TOP_kmc_top_F0_reg                                                  0xB80990F0
#define  KMC_TOP_kmc_top_F0_inst_addr                                            "0x003C"
#define  set_KMC_TOP_kmc_top_F0_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_F0_reg)=data)
#define  get_KMC_TOP_kmc_top_F0_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_F0_reg))
#define  KMC_TOP_kmc_top_F0_regr_top_vact_shift                                  (13)
#define  KMC_TOP_kmc_top_F0_regr_top_hact_shift                                  (0)
#define  KMC_TOP_kmc_top_F0_regr_top_vact_mask                                   (0x03FFE000)
#define  KMC_TOP_kmc_top_F0_regr_top_hact_mask                                   (0x00001FFF)
#define  KMC_TOP_kmc_top_F0_regr_top_vact(data)                                  (0x03FFE000&((data)<<13))
#define  KMC_TOP_kmc_top_F0_regr_top_hact(data)                                  (0x00001FFF&(data))
#define  KMC_TOP_kmc_top_F0_get_regr_top_vact(data)                              ((0x03FFE000&(data))>>13)
#define  KMC_TOP_kmc_top_F0_get_regr_top_hact(data)                              (0x00001FFF&(data))

#define  KMC_TOP_kmc_top_F4                                                     0x180990F4
#define  KMC_TOP_kmc_top_F4_reg_addr                                             "0xB80990F4"
#define  KMC_TOP_kmc_top_F4_reg                                                  0xB80990F4
#define  KMC_TOP_kmc_top_F4_inst_addr                                            "0x003D"
#define  set_KMC_TOP_kmc_top_F4_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_F4_reg)=data)
#define  get_KMC_TOP_kmc_top_F4_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_F4_reg))
#define  KMC_TOP_kmc_top_F4_regr_kmc_in_vact_measure_shift                       (12)
#define  KMC_TOP_kmc_top_F4_regr_kmc_in_hact_measure_shift                       (0)
#define  KMC_TOP_kmc_top_F4_regr_kmc_in_vact_measure_mask                        (0x00FFF000)
#define  KMC_TOP_kmc_top_F4_regr_kmc_in_hact_measure_mask                        (0x00000FFF)
#define  KMC_TOP_kmc_top_F4_regr_kmc_in_vact_measure(data)                       (0x00FFF000&((data)<<12))
#define  KMC_TOP_kmc_top_F4_regr_kmc_in_hact_measure(data)                       (0x00000FFF&(data))
#define  KMC_TOP_kmc_top_F4_get_regr_kmc_in_vact_measure(data)                   ((0x00FFF000&(data))>>12)
#define  KMC_TOP_kmc_top_F4_get_regr_kmc_in_hact_measure(data)                   (0x00000FFF&(data))

#define  KMC_TOP_kmc_top_F8                                                     0x180990F8
#define  KMC_TOP_kmc_top_F8_reg_addr                                             "0xB80990F8"
#define  KMC_TOP_kmc_top_F8_reg                                                  0xB80990F8
#define  KMC_TOP_kmc_top_F8_inst_addr                                            "0x003E"
#define  set_KMC_TOP_kmc_top_F8_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_F8_reg)=data)
#define  get_KMC_TOP_kmc_top_F8_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_F8_reg))
#define  KMC_TOP_kmc_top_F8_regr_kmc_int_pending_shift                           (24)
#define  KMC_TOP_kmc_top_F8_regr_kmc_in_vtot_measure_shift                       (12)
#define  KMC_TOP_kmc_top_F8_regr_kmc_in_htot_measure_shift                       (0)
#define  KMC_TOP_kmc_top_F8_regr_kmc_int_pending_mask                            (0x0F000000)
#define  KMC_TOP_kmc_top_F8_regr_kmc_in_vtot_measure_mask                        (0x00FFF000)
#define  KMC_TOP_kmc_top_F8_regr_kmc_in_htot_measure_mask                        (0x00000FFF)
#define  KMC_TOP_kmc_top_F8_regr_kmc_int_pending(data)                           (0x0F000000&((data)<<24))
#define  KMC_TOP_kmc_top_F8_regr_kmc_in_vtot_measure(data)                       (0x00FFF000&((data)<<12))
#define  KMC_TOP_kmc_top_F8_regr_kmc_in_htot_measure(data)                       (0x00000FFF&(data))
#define  KMC_TOP_kmc_top_F8_get_regr_kmc_int_pending(data)                       ((0x0F000000&(data))>>24)
#define  KMC_TOP_kmc_top_F8_get_regr_kmc_in_vtot_measure(data)                   ((0x00FFF000&(data))>>12)
#define  KMC_TOP_kmc_top_F8_get_regr_kmc_in_htot_measure(data)                   (0x00000FFF&(data))

#define  KMC_TOP_kmc_top_FC                                                     0x180990FC
#define  KMC_TOP_kmc_top_FC_reg_addr                                             "0xB80990FC"
#define  KMC_TOP_kmc_top_FC_reg                                                  0xB80990FC
#define  KMC_TOP_kmc_top_FC_inst_addr                                            "0x003F"
#define  set_KMC_TOP_kmc_top_FC_reg(data)                                        (*((volatile unsigned int*)KMC_TOP_kmc_top_FC_reg)=data)
#define  get_KMC_TOP_kmc_top_FC_reg                                              (*((volatile unsigned int*)KMC_TOP_kmc_top_FC_reg))
#define  KMC_TOP_kmc_top_FC_regr_frc_id_shift                                    (0)
#define  KMC_TOP_kmc_top_FC_regr_frc_id_mask                                     (0xFFFFFFFF)
#define  KMC_TOP_kmc_top_FC_regr_frc_id(data)                                    (0xFFFFFFFF&(data))
#define  KMC_TOP_kmc_top_FC_get_regr_frc_id(data)                                (0xFFFFFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KMC_TOP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  top_patt_vtotal:16;
        RBus_UInt32  top_patt_htotal:16;
    };
}kmc_top_kmc_top_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  top_patt_vact:16;
        RBus_UInt32  top_patt_hact:16;
    };
}kmc_top_kmc_top_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  top_patt_vs_bporch:8;
        RBus_UInt32  top_patt_hs_bporch:8;
        RBus_UInt32  top_patt_vs_width:8;
        RBus_UInt32  top_patt_hs_width:8;
    };
}kmc_top_kmc_top_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  top_mon_sel:5;
        RBus_UInt32  top_patt_0f_region:12;
        RBus_UInt32  top_patt_0e_grid:8;
        RBus_UInt32  top_patt_mode:4;
        RBus_UInt32  top_hv_measure:1;
        RBus_UInt32  top_patt_slf_gen:1;
        RBus_UInt32  top_patt_enable:1;
    };
}kmc_top_kmc_top_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  top_cpr_out_data_en:1;
        RBus_UInt32  top_cpr_in_data_en:1;
        RBus_UInt32  kmc_ipmc_get_info_en:1;
        RBus_UInt32  top_patt_r_mask:16;
        RBus_UInt32  top_patt_lupdn_rgb:12;
    };
}kmc_top_kmc_top_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  top_patt_b_mask:16;
        RBus_UInt32  top_patt_g_mask:16;
    };
}kmc_top_kmc_top_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  kmc_arb_bready_keep_high:1;
        RBus_UInt32  kosd_frame_hold:1;
        RBus_UInt32  kmc_int_en:4;
        RBus_UInt32  kmc_int_wclr:4;
        RBus_UInt32  kmc_int_source_sel:1;
        RBus_UInt32  kmc_in_vtotal_int:12;
        RBus_UInt32  kmc_in_measure_en:1;
        RBus_UInt32  kmc_in_measure_sel:3;
        RBus_UInt32  kmc_in_int_sel:3;
    };
}kmc_top_kmc_top_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  vhdtl_static_sel:2;
        RBus_UInt32  kmc_meter_detail_coring_0:25;
    };
}kmc_top_kmc_top_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  vhdtl_c_coef:3;
        RBus_UInt32  vhdtl_y_coef:4;
        RBus_UInt32  vhdtl_vact:12;
        RBus_UInt32  vhdtl_hact:12;
    };
}kmc_top_kmc_top_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy24:12;
        RBus_UInt32  vhdtl_v_th:10;
        RBus_UInt32  vhdtl_h_th:10;
    };
}kmc_top_kmc_top_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  kmc_meter_detail_coring_1:25;
    };
}kmc_top_kmc_top_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  kmc_meter_detail_coring_2:25;
    };
}kmc_top_kmc_top_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy30:8;
        RBus_UInt32  knr_trig_gen_mode:1;
        RBus_UInt32  knr_half_v_active:11;
        RBus_UInt32  knr_row_trig_dly:12;
    };
}kmc_top_kmc_top_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy34:18;
        RBus_UInt32  knr_422to444_mode:1;
        RBus_UInt32  knr_422to444_en:1;
        RBus_UInt32  knr_h_active:12;
    };
}kmc_top_kmc_top_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  top_cpr_hf_out_data:8;
        RBus_UInt32  top_cpr_hf_in_data:11;
        RBus_UInt32  top_cpr_lf_in_data:10;
    };
}kmc_top_kmc_top_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy3c:8;
        RBus_UInt32  kmc_ipmc_mode:4;
        RBus_UInt32  kmc_ipmc_hdeo_start:10;
        RBus_UInt32  kmc_ipmc_hde_center_value:10;
    };
}kmc_top_kmc_top_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy40:7;
        RBus_UInt32  ipmc_sram_ls_value:1;
        RBus_UInt32  ipmc_sram_ls_en:1;
        RBus_UInt32  kmc_ipmc_v_active:12;
        RBus_UInt32  kmc_ipmc_hde_active:11;
    };
}kmc_top_kmc_top_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  knr_usr_coef01:15;
        RBus_UInt32  knr_usr_coef00:15;
    };
}kmc_top_kmc_top_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  knr_usr_coef10:15;
        RBus_UInt32  knr_usr_coef02:15;
    };
}kmc_top_kmc_top_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  knr_usr_coef12:15;
        RBus_UInt32  knr_usr_coef11:15;
    };
}kmc_top_kmc_top_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  knr_usr_coef21:15;
        RBus_UInt32  knr_usr_coef20:15;
    };
}kmc_top_kmc_top_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  knr_usr_const0:12;
        RBus_UInt32  knr_usr_coef22:15;
    };
}kmc_top_kmc_top_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  knr_convert_map:3;
        RBus_UInt32  knr_convert_mode:4;
        RBus_UInt32  knr_convert_on:1;
        RBus_UInt32  knr_usr_const2:12;
        RBus_UInt32  knr_usr_const1:12;
    };
}kmc_top_kmc_top_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  mc_drf_bist_in_1:6;
        RBus_UInt32  top_cpr_lf_out_data:8;
    };
}kmc_top_kmc_top_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  kmc_second_run_en:9;
    };
}kmc_top_kmc_top_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  kmc_ls:7;
    };
}kmc_top_kmc_top_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  kmc_rme:7;
    };
}kmc_top_kmc_top_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  kmc_rm:28;
    };
}kmc_top_kmc_top_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_mc_bist_done:32;
    };
}kmc_top_kmc_top_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_mc_bist_done1:32;
    };
}kmc_top_kmc_top_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_mc_bist_done2:32;
    };
}kmc_top_kmc_top_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_mc_bist_done3:27;
    };
}kmc_top_kmc_top_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_mc_bist_fail:32;
    };
}kmc_top_kmc_top_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_mc_bist_fail1:32;
    };
}kmc_top_kmc_top_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_mc_bist_fail2:32;
    };
}kmc_top_kmc_top_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_mc_drf_bist_out_1:1;
        RBus_UInt32  regr_mc_bist_fail3:27;
    };
}kmc_top_kmc_top_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_dm_axi_bbd_bist_done:23;
    };
}kmc_top_kmc_top_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_dm_axi_bbd_bist_fail:23;
    };
}kmc_top_kmc_top_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  regr_cpr_knr_ipmc_bisr_repaired:9;
    };
}kmc_top_kmc_top_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  regr_cpr_knr_ipmc_bisr_fail:9;
    };
}kmc_top_kmc_top_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_detail_diff_count0:32;
    };
}kmc_top_kmc_top_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_detail_diff_count1:32;
    };
}kmc_top_kmc_top_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_detail_diff_count2:32;
    };
}kmc_top_kmc_top_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_bw_diff_count1:32;
    };
}kmc_top_kmc_top_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  regr_kmc_ipmc_hacto:13;
        RBus_UInt32  regr_kmc_ipmc_htotalo:13;
    };
}kmc_top_kmc_top_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_kmc_ipmc_vacto:12;
        RBus_UInt32  regr_kmc_ipmc_hinacto:12;
    };
}kmc_top_kmc_top_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  regr_kmc_ipmc_vtotalo:25;
    };
}kmc_top_kmc_top_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_vhdtl_v_o:16;
        RBus_UInt32  regr_vhdtl_h_o:16;
    };
}kmc_top_kmc_top_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_vhdtl_rgn02:10;
        RBus_UInt32  regr_vhdtl_rgn01:10;
        RBus_UInt32  regr_vhdtl_rgn00:10;
    };
}kmc_top_kmc_top_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_vhdtl_rgn05:10;
        RBus_UInt32  regr_vhdtl_rgn04:10;
        RBus_UInt32  regr_vhdtl_rgn03:10;
    };
}kmc_top_kmc_top_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_vhdtl_rgn07:10;
        RBus_UInt32  regr_vhdtl_rgn06:10;
    };
}kmc_top_kmc_top_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_vhdtl_rgn12:10;
        RBus_UInt32  regr_vhdtl_rgn11:10;
        RBus_UInt32  regr_vhdtl_rgn10:10;
    };
}kmc_top_kmc_top_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_vhdtl_rgn15:10;
        RBus_UInt32  regr_vhdtl_rgn14:10;
        RBus_UInt32  regr_vhdtl_rgn13:10;
    };
}kmc_top_kmc_top_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_vhdtl_rgn17:10;
        RBus_UInt32  regr_vhdtl_rgn16:10;
    };
}kmc_top_kmc_top_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_vhdtl_rgn22:10;
        RBus_UInt32  regr_vhdtl_rgn21:10;
        RBus_UInt32  regr_vhdtl_rgn20:10;
    };
}kmc_top_kmc_top_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_vhdtl_rgn25:10;
        RBus_UInt32  regr_vhdtl_rgn24:10;
        RBus_UInt32  regr_vhdtl_rgn23:10;
    };
}kmc_top_kmc_top_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_vhdtl_rgn27:10;
        RBus_UInt32  regr_vhdtl_rgn26:10;
    };
}kmc_top_kmc_top_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_vhdtl_rgn32:10;
        RBus_UInt32  regr_vhdtl_rgn31:10;
        RBus_UInt32  regr_vhdtl_rgn30:10;
    };
}kmc_top_kmc_top_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_vhdtl_rgn35:10;
        RBus_UInt32  regr_vhdtl_rgn34:10;
        RBus_UInt32  regr_vhdtl_rgn33:10;
    };
}kmc_top_kmc_top_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_vhdtl_rgn37:10;
        RBus_UInt32  regr_vhdtl_rgn36:10;
    };
}kmc_top_kmc_top_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  regr_top_vact:13;
        RBus_UInt32  regr_top_hact:13;
    };
}kmc_top_kmc_top_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_kmc_in_vact_measure:12;
        RBus_UInt32  regr_kmc_in_hact_measure:12;
    };
}kmc_top_kmc_top_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_kmc_int_pending:4;
        RBus_UInt32  regr_kmc_in_vtot_measure:12;
        RBus_UInt32  regr_kmc_in_htot_measure:12;
    };
}kmc_top_kmc_top_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_frc_id:32;
    };
}kmc_top_kmc_top_fc_RBUS;

#else //apply LITTLE_ENDIAN

//======KMC_TOP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  top_patt_htotal:16;
        RBus_UInt32  top_patt_vtotal:16;
    };
}kmc_top_kmc_top_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  top_patt_hact:16;
        RBus_UInt32  top_patt_vact:16;
    };
}kmc_top_kmc_top_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  top_patt_hs_width:8;
        RBus_UInt32  top_patt_vs_width:8;
        RBus_UInt32  top_patt_hs_bporch:8;
        RBus_UInt32  top_patt_vs_bporch:8;
    };
}kmc_top_kmc_top_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  top_patt_enable:1;
        RBus_UInt32  top_patt_slf_gen:1;
        RBus_UInt32  top_hv_measure:1;
        RBus_UInt32  top_patt_mode:4;
        RBus_UInt32  top_patt_0e_grid:8;
        RBus_UInt32  top_patt_0f_region:12;
        RBus_UInt32  top_mon_sel:5;
    };
}kmc_top_kmc_top_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  top_patt_lupdn_rgb:12;
        RBus_UInt32  top_patt_r_mask:16;
        RBus_UInt32  kmc_ipmc_get_info_en:1;
        RBus_UInt32  top_cpr_in_data_en:1;
        RBus_UInt32  top_cpr_out_data_en:1;
        RBus_UInt32  res1:1;
    };
}kmc_top_kmc_top_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  top_patt_g_mask:16;
        RBus_UInt32  top_patt_b_mask:16;
    };
}kmc_top_kmc_top_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_in_int_sel:3;
        RBus_UInt32  kmc_in_measure_sel:3;
        RBus_UInt32  kmc_in_measure_en:1;
        RBus_UInt32  kmc_in_vtotal_int:12;
        RBus_UInt32  kmc_int_source_sel:1;
        RBus_UInt32  kmc_int_wclr:4;
        RBus_UInt32  kmc_int_en:4;
        RBus_UInt32  kosd_frame_hold:1;
        RBus_UInt32  kmc_arb_bready_keep_high:1;
        RBus_UInt32  res1:2;
    };
}kmc_top_kmc_top_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_detail_coring_0:25;
        RBus_UInt32  vhdtl_static_sel:2;
        RBus_UInt32  res1:5;
    };
}kmc_top_kmc_top_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vhdtl_hact:12;
        RBus_UInt32  vhdtl_vact:12;
        RBus_UInt32  vhdtl_y_coef:4;
        RBus_UInt32  vhdtl_c_coef:3;
        RBus_UInt32  res1:1;
    };
}kmc_top_kmc_top_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vhdtl_h_th:10;
        RBus_UInt32  vhdtl_v_th:10;
        RBus_UInt32  dummy24:12;
    };
}kmc_top_kmc_top_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_detail_coring_1:25;
        RBus_UInt32  res1:7;
    };
}kmc_top_kmc_top_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_detail_coring_2:25;
        RBus_UInt32  res1:7;
    };
}kmc_top_kmc_top_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  knr_row_trig_dly:12;
        RBus_UInt32  knr_half_v_active:11;
        RBus_UInt32  knr_trig_gen_mode:1;
        RBus_UInt32  dummy30:8;
    };
}kmc_top_kmc_top_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  knr_h_active:12;
        RBus_UInt32  knr_422to444_en:1;
        RBus_UInt32  knr_422to444_mode:1;
        RBus_UInt32  dummy34:18;
    };
}kmc_top_kmc_top_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  top_cpr_lf_in_data:10;
        RBus_UInt32  top_cpr_hf_in_data:11;
        RBus_UInt32  top_cpr_hf_out_data:8;
        RBus_UInt32  res1:3;
    };
}kmc_top_kmc_top_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_ipmc_hde_center_value:10;
        RBus_UInt32  kmc_ipmc_hdeo_start:10;
        RBus_UInt32  kmc_ipmc_mode:4;
        RBus_UInt32  dummy3c:8;
    };
}kmc_top_kmc_top_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_ipmc_hde_active:11;
        RBus_UInt32  kmc_ipmc_v_active:12;
        RBus_UInt32  ipmc_sram_ls_en:1;
        RBus_UInt32  ipmc_sram_ls_value:1;
        RBus_UInt32  dummy40:7;
    };
}kmc_top_kmc_top_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  knr_usr_coef00:15;
        RBus_UInt32  knr_usr_coef01:15;
        RBus_UInt32  res1:2;
    };
}kmc_top_kmc_top_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  knr_usr_coef02:15;
        RBus_UInt32  knr_usr_coef10:15;
        RBus_UInt32  res1:2;
    };
}kmc_top_kmc_top_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  knr_usr_coef11:15;
        RBus_UInt32  knr_usr_coef12:15;
        RBus_UInt32  res1:2;
    };
}kmc_top_kmc_top_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  knr_usr_coef20:15;
        RBus_UInt32  knr_usr_coef21:15;
        RBus_UInt32  res1:2;
    };
}kmc_top_kmc_top_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  knr_usr_coef22:15;
        RBus_UInt32  knr_usr_const0:12;
        RBus_UInt32  res1:5;
    };
}kmc_top_kmc_top_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  knr_usr_const1:12;
        RBus_UInt32  knr_usr_const2:12;
        RBus_UInt32  knr_convert_on:1;
        RBus_UInt32  knr_convert_mode:4;
        RBus_UInt32  knr_convert_map:3;
    };
}kmc_top_kmc_top_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  top_cpr_lf_out_data:8;
        RBus_UInt32  mc_drf_bist_in_1:6;
        RBus_UInt32  res1:18;
    };
}kmc_top_kmc_top_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_second_run_en:9;
        RBus_UInt32  res1:23;
    };
}kmc_top_kmc_top_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_ls:7;
        RBus_UInt32  res1:25;
    };
}kmc_top_kmc_top_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_rme:7;
        RBus_UInt32  res1:25;
    };
}kmc_top_kmc_top_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_rm:28;
        RBus_UInt32  res1:4;
    };
}kmc_top_kmc_top_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_mc_bist_done:32;
    };
}kmc_top_kmc_top_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_mc_bist_done1:32;
    };
}kmc_top_kmc_top_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_mc_bist_done2:32;
    };
}kmc_top_kmc_top_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_mc_bist_done3:27;
        RBus_UInt32  res1:5;
    };
}kmc_top_kmc_top_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_mc_bist_fail:32;
    };
}kmc_top_kmc_top_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_mc_bist_fail1:32;
    };
}kmc_top_kmc_top_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_mc_bist_fail2:32;
    };
}kmc_top_kmc_top_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_mc_bist_fail3:27;
        RBus_UInt32  regr_mc_drf_bist_out_1:1;
        RBus_UInt32  res1:4;
    };
}kmc_top_kmc_top_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_dm_axi_bbd_bist_done:23;
        RBus_UInt32  res1:9;
    };
}kmc_top_kmc_top_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_dm_axi_bbd_bist_fail:23;
        RBus_UInt32  res1:9;
    };
}kmc_top_kmc_top_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_cpr_knr_ipmc_bisr_repaired:9;
        RBus_UInt32  res1:23;
    };
}kmc_top_kmc_top_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_cpr_knr_ipmc_bisr_fail:9;
        RBus_UInt32  res1:23;
    };
}kmc_top_kmc_top_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_detail_diff_count0:32;
    };
}kmc_top_kmc_top_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_detail_diff_count1:32;
    };
}kmc_top_kmc_top_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_detail_diff_count2:32;
    };
}kmc_top_kmc_top_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_bw_diff_count1:32;
    };
}kmc_top_kmc_top_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_ipmc_htotalo:13;
        RBus_UInt32  regr_kmc_ipmc_hacto:13;
        RBus_UInt32  res1:6;
    };
}kmc_top_kmc_top_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_ipmc_hinacto:12;
        RBus_UInt32  regr_kmc_ipmc_vacto:12;
        RBus_UInt32  res1:8;
    };
}kmc_top_kmc_top_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_ipmc_vtotalo:25;
        RBus_UInt32  res1:7;
    };
}kmc_top_kmc_top_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_vhdtl_h_o:16;
        RBus_UInt32  regr_vhdtl_v_o:16;
    };
}kmc_top_kmc_top_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_vhdtl_rgn00:10;
        RBus_UInt32  regr_vhdtl_rgn01:10;
        RBus_UInt32  regr_vhdtl_rgn02:10;
        RBus_UInt32  res1:2;
    };
}kmc_top_kmc_top_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_vhdtl_rgn03:10;
        RBus_UInt32  regr_vhdtl_rgn04:10;
        RBus_UInt32  regr_vhdtl_rgn05:10;
        RBus_UInt32  res1:2;
    };
}kmc_top_kmc_top_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_vhdtl_rgn06:10;
        RBus_UInt32  regr_vhdtl_rgn07:10;
        RBus_UInt32  res1:12;
    };
}kmc_top_kmc_top_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_vhdtl_rgn10:10;
        RBus_UInt32  regr_vhdtl_rgn11:10;
        RBus_UInt32  regr_vhdtl_rgn12:10;
        RBus_UInt32  res1:2;
    };
}kmc_top_kmc_top_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_vhdtl_rgn13:10;
        RBus_UInt32  regr_vhdtl_rgn14:10;
        RBus_UInt32  regr_vhdtl_rgn15:10;
        RBus_UInt32  res1:2;
    };
}kmc_top_kmc_top_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_vhdtl_rgn16:10;
        RBus_UInt32  regr_vhdtl_rgn17:10;
        RBus_UInt32  res1:12;
    };
}kmc_top_kmc_top_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_vhdtl_rgn20:10;
        RBus_UInt32  regr_vhdtl_rgn21:10;
        RBus_UInt32  regr_vhdtl_rgn22:10;
        RBus_UInt32  res1:2;
    };
}kmc_top_kmc_top_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_vhdtl_rgn23:10;
        RBus_UInt32  regr_vhdtl_rgn24:10;
        RBus_UInt32  regr_vhdtl_rgn25:10;
        RBus_UInt32  res1:2;
    };
}kmc_top_kmc_top_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_vhdtl_rgn26:10;
        RBus_UInt32  regr_vhdtl_rgn27:10;
        RBus_UInt32  res1:12;
    };
}kmc_top_kmc_top_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_vhdtl_rgn30:10;
        RBus_UInt32  regr_vhdtl_rgn31:10;
        RBus_UInt32  regr_vhdtl_rgn32:10;
        RBus_UInt32  res1:2;
    };
}kmc_top_kmc_top_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_vhdtl_rgn33:10;
        RBus_UInt32  regr_vhdtl_rgn34:10;
        RBus_UInt32  regr_vhdtl_rgn35:10;
        RBus_UInt32  res1:2;
    };
}kmc_top_kmc_top_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_vhdtl_rgn36:10;
        RBus_UInt32  regr_vhdtl_rgn37:10;
        RBus_UInt32  res1:12;
    };
}kmc_top_kmc_top_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_top_hact:13;
        RBus_UInt32  regr_top_vact:13;
        RBus_UInt32  res1:6;
    };
}kmc_top_kmc_top_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_in_hact_measure:12;
        RBus_UInt32  regr_kmc_in_vact_measure:12;
        RBus_UInt32  res1:8;
    };
}kmc_top_kmc_top_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_in_htot_measure:12;
        RBus_UInt32  regr_kmc_in_vtot_measure:12;
        RBus_UInt32  regr_kmc_int_pending:4;
        RBus_UInt32  res1:4;
    };
}kmc_top_kmc_top_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_frc_id:32;
    };
}kmc_top_kmc_top_fc_RBUS;




#endif 


#endif 
