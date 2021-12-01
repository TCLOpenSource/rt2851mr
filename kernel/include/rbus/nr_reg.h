/**
* @file Merlin5-DesignSpec-I-Domain_SPNR
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_NR_REG_H_
#define _RBUS_NR_REG_H_

#include "rbus_types.h"



//  NR Register Address
#define  NR_DCH1_DebugMode                                                      0x18025000
#define  NR_DCH1_DebugMode_reg_addr                                              "0xB8025000"
#define  NR_DCH1_DebugMode_reg                                                   0xB8025000
#define  NR_DCH1_DebugMode_inst_addr                                             "0x0000"
#define  set_NR_DCH1_DebugMode_reg(data)                                         (*((volatile unsigned int*)NR_DCH1_DebugMode_reg)=data)
#define  get_NR_DCH1_DebugMode_reg                                               (*((volatile unsigned int*)NR_DCH1_DebugMode_reg))
#define  NR_DCH1_DebugMode_cp_debugmode_shift                                    (1)
#define  NR_DCH1_DebugMode_cp_debugmode_en_shift                                 (0)
#define  NR_DCH1_DebugMode_cp_debugmode_mask                                     (0x0000001E)
#define  NR_DCH1_DebugMode_cp_debugmode_en_mask                                  (0x00000001)
#define  NR_DCH1_DebugMode_cp_debugmode(data)                                    (0x0000001E&((data)<<1))
#define  NR_DCH1_DebugMode_cp_debugmode_en(data)                                 (0x00000001&(data))
#define  NR_DCH1_DebugMode_get_cp_debugmode(data)                                ((0x0000001E&(data))>>1)
#define  NR_DCH1_DebugMode_get_cp_debugmode_en(data)                             (0x00000001&(data))

#define  NR_DCH1_CP_Ctrl                                                        0x18025004
#define  NR_DCH1_CP_Ctrl_reg_addr                                                "0xB8025004"
#define  NR_DCH1_CP_Ctrl_reg                                                     0xB8025004
#define  NR_DCH1_CP_Ctrl_inst_addr                                               "0x0001"
#define  set_NR_DCH1_CP_Ctrl_reg(data)                                           (*((volatile unsigned int*)NR_DCH1_CP_Ctrl_reg)=data)
#define  get_NR_DCH1_CP_Ctrl_reg                                                 (*((volatile unsigned int*)NR_DCH1_CP_Ctrl_reg))
#define  NR_DCH1_CP_Ctrl_vc_snr_lpf_sel_shift                                    (28)
#define  NR_DCH1_CP_Ctrl_cp_sresultweight_shift                                  (24)
#define  NR_DCH1_CP_Ctrl_cp_zoranweighty_sel_shift                               (10)
#define  NR_DCH1_CP_Ctrl_cp_zoranweightc_sel_shift                               (8)
#define  NR_DCH1_CP_Ctrl_vc_nr_maxmin_range_sel_shift                            (7)
#define  NR_DCH1_CP_Ctrl_sresultweight_adjust_shift_shift                        (4)
#define  NR_DCH1_CP_Ctrl_cp_spatialenabley_shift                                 (2)
#define  NR_DCH1_CP_Ctrl_cp_spatialenablec_shift                                 (1)
#define  NR_DCH1_CP_Ctrl_vc_snr_lpf_sel_mask                                     (0x70000000)
#define  NR_DCH1_CP_Ctrl_cp_sresultweight_mask                                   (0x0F000000)
#define  NR_DCH1_CP_Ctrl_cp_zoranweighty_sel_mask                                (0x00000C00)
#define  NR_DCH1_CP_Ctrl_cp_zoranweightc_sel_mask                                (0x00000300)
#define  NR_DCH1_CP_Ctrl_vc_nr_maxmin_range_sel_mask                             (0x00000080)
#define  NR_DCH1_CP_Ctrl_sresultweight_adjust_shift_mask                         (0x00000070)
#define  NR_DCH1_CP_Ctrl_cp_spatialenabley_mask                                  (0x00000004)
#define  NR_DCH1_CP_Ctrl_cp_spatialenablec_mask                                  (0x00000002)
#define  NR_DCH1_CP_Ctrl_vc_snr_lpf_sel(data)                                    (0x70000000&((data)<<28))
#define  NR_DCH1_CP_Ctrl_cp_sresultweight(data)                                  (0x0F000000&((data)<<24))
#define  NR_DCH1_CP_Ctrl_cp_zoranweighty_sel(data)                               (0x00000C00&((data)<<10))
#define  NR_DCH1_CP_Ctrl_cp_zoranweightc_sel(data)                               (0x00000300&((data)<<8))
#define  NR_DCH1_CP_Ctrl_vc_nr_maxmin_range_sel(data)                            (0x00000080&((data)<<7))
#define  NR_DCH1_CP_Ctrl_sresultweight_adjust_shift(data)                        (0x00000070&((data)<<4))
#define  NR_DCH1_CP_Ctrl_cp_spatialenabley(data)                                 (0x00000004&((data)<<2))
#define  NR_DCH1_CP_Ctrl_cp_spatialenablec(data)                                 (0x00000002&((data)<<1))
#define  NR_DCH1_CP_Ctrl_get_vc_snr_lpf_sel(data)                                ((0x70000000&(data))>>28)
#define  NR_DCH1_CP_Ctrl_get_cp_sresultweight(data)                              ((0x0F000000&(data))>>24)
#define  NR_DCH1_CP_Ctrl_get_cp_zoranweighty_sel(data)                           ((0x00000C00&(data))>>10)
#define  NR_DCH1_CP_Ctrl_get_cp_zoranweightc_sel(data)                           ((0x00000300&(data))>>8)
#define  NR_DCH1_CP_Ctrl_get_vc_nr_maxmin_range_sel(data)                        ((0x00000080&(data))>>7)
#define  NR_DCH1_CP_Ctrl_get_sresultweight_adjust_shift(data)                    ((0x00000070&(data))>>4)
#define  NR_DCH1_CP_Ctrl_get_cp_spatialenabley(data)                             ((0x00000004&(data))>>2)
#define  NR_DCH1_CP_Ctrl_get_cp_spatialenablec(data)                             ((0x00000002&(data))>>1)

#define  NR_DCH1_Spatial_Thl                                                    0x18025010
#define  NR_DCH1_Spatial_Thl_reg_addr                                            "0xB8025010"
#define  NR_DCH1_Spatial_Thl_reg                                                 0xB8025010
#define  NR_DCH1_Spatial_Thl_inst_addr                                           "0x0002"
#define  set_NR_DCH1_Spatial_Thl_reg(data)                                       (*((volatile unsigned int*)NR_DCH1_Spatial_Thl_reg)=data)
#define  get_NR_DCH1_Spatial_Thl_reg                                             (*((volatile unsigned int*)NR_DCH1_Spatial_Thl_reg))
#define  NR_DCH1_Spatial_Thl_cp_spatialthlyx2_shift                              (24)
#define  NR_DCH1_Spatial_Thl_cp_spatialthlcx2_shift                              (16)
#define  NR_DCH1_Spatial_Thl_cp_spatialthly_shift                                (8)
#define  NR_DCH1_Spatial_Thl_cp_spatialthlc_shift                                (0)
#define  NR_DCH1_Spatial_Thl_cp_spatialthlyx2_mask                               (0xFF000000)
#define  NR_DCH1_Spatial_Thl_cp_spatialthlcx2_mask                               (0x00FF0000)
#define  NR_DCH1_Spatial_Thl_cp_spatialthly_mask                                 (0x0000FF00)
#define  NR_DCH1_Spatial_Thl_cp_spatialthlc_mask                                 (0x000000FF)
#define  NR_DCH1_Spatial_Thl_cp_spatialthlyx2(data)                              (0xFF000000&((data)<<24))
#define  NR_DCH1_Spatial_Thl_cp_spatialthlcx2(data)                              (0x00FF0000&((data)<<16))
#define  NR_DCH1_Spatial_Thl_cp_spatialthly(data)                                (0x0000FF00&((data)<<8))
#define  NR_DCH1_Spatial_Thl_cp_spatialthlc(data)                                (0x000000FF&(data))
#define  NR_DCH1_Spatial_Thl_get_cp_spatialthlyx2(data)                          ((0xFF000000&(data))>>24)
#define  NR_DCH1_Spatial_Thl_get_cp_spatialthlcx2(data)                          ((0x00FF0000&(data))>>16)
#define  NR_DCH1_Spatial_Thl_get_cp_spatialthly(data)                            ((0x0000FF00&(data))>>8)
#define  NR_DCH1_Spatial_Thl_get_cp_spatialthlc(data)                            (0x000000FF&(data))

#define  NR_DCH1_Spatial_Thl2                                                   0x18025014
#define  NR_DCH1_Spatial_Thl2_reg_addr                                           "0xB8025014"
#define  NR_DCH1_Spatial_Thl2_reg                                                0xB8025014
#define  NR_DCH1_Spatial_Thl2_inst_addr                                          "0x0003"
#define  set_NR_DCH1_Spatial_Thl2_reg(data)                                      (*((volatile unsigned int*)NR_DCH1_Spatial_Thl2_reg)=data)
#define  get_NR_DCH1_Spatial_Thl2_reg                                            (*((volatile unsigned int*)NR_DCH1_Spatial_Thl2_reg))
#define  NR_DCH1_Spatial_Thl2_cp_spatialthlyx4_shift                             (8)
#define  NR_DCH1_Spatial_Thl2_cp_spatialthlcx4_shift                             (0)
#define  NR_DCH1_Spatial_Thl2_cp_spatialthlyx4_mask                              (0x0000FF00)
#define  NR_DCH1_Spatial_Thl2_cp_spatialthlcx4_mask                              (0x000000FF)
#define  NR_DCH1_Spatial_Thl2_cp_spatialthlyx4(data)                             (0x0000FF00&((data)<<8))
#define  NR_DCH1_Spatial_Thl2_cp_spatialthlcx4(data)                             (0x000000FF&(data))
#define  NR_DCH1_Spatial_Thl2_get_cp_spatialthlyx4(data)                         ((0x0000FF00&(data))>>8)
#define  NR_DCH1_Spatial_Thl2_get_cp_spatialthlcx4(data)                         (0x000000FF&(data))

#define  NR_DCH1_Spatial_Weight                                                 0x18025018
#define  NR_DCH1_Spatial_Weight_reg_addr                                         "0xB8025018"
#define  NR_DCH1_Spatial_Weight_reg                                              0xB8025018
#define  NR_DCH1_Spatial_Weight_inst_addr                                        "0x0004"
#define  set_NR_DCH1_Spatial_Weight_reg(data)                                    (*((volatile unsigned int*)NR_DCH1_Spatial_Weight_reg)=data)
#define  get_NR_DCH1_Spatial_Weight_reg                                          (*((volatile unsigned int*)NR_DCH1_Spatial_Weight_reg))
#define  NR_DCH1_Spatial_Weight_cp_lpresultweightc_shift                         (28)
#define  NR_DCH1_Spatial_Weight_cp_weight1y_shift                                (16)
#define  NR_DCH1_Spatial_Weight_cp_weight2y_shift                                (8)
#define  NR_DCH1_Spatial_Weight_cp_fixedweight1y_shift                           (5)
#define  NR_DCH1_Spatial_Weight_cp_fixedweight2y_shift                           (4)
#define  NR_DCH1_Spatial_Weight_cp_lpresultweightc_mask                          (0xF0000000)
#define  NR_DCH1_Spatial_Weight_cp_weight1y_mask                                 (0x001F0000)
#define  NR_DCH1_Spatial_Weight_cp_weight2y_mask                                 (0x00001F00)
#define  NR_DCH1_Spatial_Weight_cp_fixedweight1y_mask                            (0x00000020)
#define  NR_DCH1_Spatial_Weight_cp_fixedweight2y_mask                            (0x00000010)
#define  NR_DCH1_Spatial_Weight_cp_lpresultweightc(data)                         (0xF0000000&((data)<<28))
#define  NR_DCH1_Spatial_Weight_cp_weight1y(data)                                (0x001F0000&((data)<<16))
#define  NR_DCH1_Spatial_Weight_cp_weight2y(data)                                (0x00001F00&((data)<<8))
#define  NR_DCH1_Spatial_Weight_cp_fixedweight1y(data)                           (0x00000020&((data)<<5))
#define  NR_DCH1_Spatial_Weight_cp_fixedweight2y(data)                           (0x00000010&((data)<<4))
#define  NR_DCH1_Spatial_Weight_get_cp_lpresultweightc(data)                     ((0xF0000000&(data))>>28)
#define  NR_DCH1_Spatial_Weight_get_cp_weight1y(data)                            ((0x001F0000&(data))>>16)
#define  NR_DCH1_Spatial_Weight_get_cp_weight2y(data)                            ((0x00001F00&(data))>>8)
#define  NR_DCH1_Spatial_Weight_get_cp_fixedweight1y(data)                       ((0x00000020&(data))>>5)
#define  NR_DCH1_Spatial_Weight_get_cp_fixedweight2y(data)                       ((0x00000010&(data))>>4)

#define  NR_V_MPEGNR_DB_CTRL                                                    0x180255DC
#define  NR_V_MPEGNR_DB_CTRL_reg_addr                                            "0xB80255DC"
#define  NR_V_MPEGNR_DB_CTRL_reg                                                 0xB80255DC
#define  NR_V_MPEGNR_DB_CTRL_inst_addr                                           "0x0005"
#define  set_NR_V_MPEGNR_DB_CTRL_reg(data)                                       (*((volatile unsigned int*)NR_V_MPEGNR_DB_CTRL_reg)=data)
#define  get_NR_V_MPEGNR_DB_CTRL_reg                                             (*((volatile unsigned int*)NR_V_MPEGNR_DB_CTRL_reg))
#define  NR_V_MPEGNR_DB_CTRL_mpegnr_db_apply_shift                               (2)
#define  NR_V_MPEGNR_DB_CTRL_mpegnr_db_rd_sel_shift                              (1)
#define  NR_V_MPEGNR_DB_CTRL_mpegnr_db_en_shift                                  (0)
#define  NR_V_MPEGNR_DB_CTRL_mpegnr_db_apply_mask                                (0x00000004)
#define  NR_V_MPEGNR_DB_CTRL_mpegnr_db_rd_sel_mask                               (0x00000002)
#define  NR_V_MPEGNR_DB_CTRL_mpegnr_db_en_mask                                   (0x00000001)
#define  NR_V_MPEGNR_DB_CTRL_mpegnr_db_apply(data)                               (0x00000004&((data)<<2))
#define  NR_V_MPEGNR_DB_CTRL_mpegnr_db_rd_sel(data)                              (0x00000002&((data)<<1))
#define  NR_V_MPEGNR_DB_CTRL_mpegnr_db_en(data)                                  (0x00000001&(data))
#define  NR_V_MPEGNR_DB_CTRL_get_mpegnr_db_apply(data)                           ((0x00000004&(data))>>2)
#define  NR_V_MPEGNR_DB_CTRL_get_mpegnr_db_rd_sel(data)                          ((0x00000002&(data))>>1)
#define  NR_V_MPEGNR_DB_CTRL_get_mpegnr_db_en(data)                              (0x00000001&(data))

#define  NR_DCH1_MPEGNR1                                                        0x180255A0
#define  NR_DCH1_MPEGNR1_reg_addr                                                "0xB80255A0"
#define  NR_DCH1_MPEGNR1_reg                                                     0xB80255A0
#define  NR_DCH1_MPEGNR1_inst_addr                                               "0x0006"
#define  set_NR_DCH1_MPEGNR1_reg(data)                                           (*((volatile unsigned int*)NR_DCH1_MPEGNR1_reg)=data)
#define  get_NR_DCH1_MPEGNR1_reg                                                 (*((volatile unsigned int*)NR_DCH1_MPEGNR1_reg))
#define  NR_DCH1_MPEGNR1_cp_mpglowerbound_shift                                  (24)
#define  NR_DCH1_MPEGNR1_cp_mpgupperbound_shift                                  (14)
#define  NR_DCH1_MPEGNR1_cp_mpglpmode_shift                                      (12)
#define  NR_DCH1_MPEGNR1_cp_mpgidx_y_shift                                       (8)
#define  NR_DCH1_MPEGNR1_cp_mpegresultweight_y_shift                             (4)
#define  NR_DCH1_MPEGNR1_cp_mpegenable_y_c_shift                                 (1)
#define  NR_DCH1_MPEGNR1_cp_mpegenable_y_y_shift                                 (0)
#define  NR_DCH1_MPEGNR1_cp_mpglowerbound_mask                                   (0xFF000000)
#define  NR_DCH1_MPEGNR1_cp_mpgupperbound_mask                                   (0x00FFC000)
#define  NR_DCH1_MPEGNR1_cp_mpglpmode_mask                                       (0x00003000)
#define  NR_DCH1_MPEGNR1_cp_mpgidx_y_mask                                        (0x00000700)
#define  NR_DCH1_MPEGNR1_cp_mpegresultweight_y_mask                              (0x00000070)
#define  NR_DCH1_MPEGNR1_cp_mpegenable_y_c_mask                                  (0x00000002)
#define  NR_DCH1_MPEGNR1_cp_mpegenable_y_y_mask                                  (0x00000001)
#define  NR_DCH1_MPEGNR1_cp_mpglowerbound(data)                                  (0xFF000000&((data)<<24))
#define  NR_DCH1_MPEGNR1_cp_mpgupperbound(data)                                  (0x00FFC000&((data)<<14))
#define  NR_DCH1_MPEGNR1_cp_mpglpmode(data)                                      (0x00003000&((data)<<12))
#define  NR_DCH1_MPEGNR1_cp_mpgidx_y(data)                                       (0x00000700&((data)<<8))
#define  NR_DCH1_MPEGNR1_cp_mpegresultweight_y(data)                             (0x00000070&((data)<<4))
#define  NR_DCH1_MPEGNR1_cp_mpegenable_y_c(data)                                 (0x00000002&((data)<<1))
#define  NR_DCH1_MPEGNR1_cp_mpegenable_y_y(data)                                 (0x00000001&(data))
#define  NR_DCH1_MPEGNR1_get_cp_mpglowerbound(data)                              ((0xFF000000&(data))>>24)
#define  NR_DCH1_MPEGNR1_get_cp_mpgupperbound(data)                              ((0x00FFC000&(data))>>14)
#define  NR_DCH1_MPEGNR1_get_cp_mpglpmode(data)                                  ((0x00003000&(data))>>12)
#define  NR_DCH1_MPEGNR1_get_cp_mpgidx_y(data)                                   ((0x00000700&(data))>>8)
#define  NR_DCH1_MPEGNR1_get_cp_mpegresultweight_y(data)                         ((0x00000070&(data))>>4)
#define  NR_DCH1_MPEGNR1_get_cp_mpegenable_y_c(data)                             ((0x00000002&(data))>>1)
#define  NR_DCH1_MPEGNR1_get_cp_mpegenable_y_y(data)                             (0x00000001&(data))

#define  NR_DCH1_MPEGNR2                                                        0x180255A4
#define  NR_DCH1_MPEGNR2_reg_addr                                                "0xB80255A4"
#define  NR_DCH1_MPEGNR2_reg                                                     0xB80255A4
#define  NR_DCH1_MPEGNR2_inst_addr                                               "0x0007"
#define  set_NR_DCH1_MPEGNR2_reg(data)                                           (*((volatile unsigned int*)NR_DCH1_MPEGNR2_reg)=data)
#define  get_NR_DCH1_MPEGNR2_reg                                                 (*((volatile unsigned int*)NR_DCH1_MPEGNR2_reg))
#define  NR_DCH1_MPEGNR2_cp_mpgub_dec_sel_shift                                  (31)
#define  NR_DCH1_MPEGNR2_cp_mpgub_difcmp_en_shift                                (28)
#define  NR_DCH1_MPEGNR2_cp_mpgub_difcen_en_shift                                (26)
#define  NR_DCH1_MPEGNR2_cp_mpgupperbound_offset_shift                           (8)
#define  NR_DCH1_MPEGNR2_cp_mpgupperbound_gain_shift                             (4)
#define  NR_DCH1_MPEGNR2_cp_mpgdiffsum_range_shift                               (0)
#define  NR_DCH1_MPEGNR2_cp_mpgub_dec_sel_mask                                   (0x80000000)
#define  NR_DCH1_MPEGNR2_cp_mpgub_difcmp_en_mask                                 (0x70000000)
#define  NR_DCH1_MPEGNR2_cp_mpgub_difcen_en_mask                                 (0x0C000000)
#define  NR_DCH1_MPEGNR2_cp_mpgupperbound_offset_mask                            (0x0000FF00)
#define  NR_DCH1_MPEGNR2_cp_mpgupperbound_gain_mask                              (0x00000030)
#define  NR_DCH1_MPEGNR2_cp_mpgdiffsum_range_mask                                (0x00000007)
#define  NR_DCH1_MPEGNR2_cp_mpgub_dec_sel(data)                                  (0x80000000&((data)<<31))
#define  NR_DCH1_MPEGNR2_cp_mpgub_difcmp_en(data)                                (0x70000000&((data)<<28))
#define  NR_DCH1_MPEGNR2_cp_mpgub_difcen_en(data)                                (0x0C000000&((data)<<26))
#define  NR_DCH1_MPEGNR2_cp_mpgupperbound_offset(data)                           (0x0000FF00&((data)<<8))
#define  NR_DCH1_MPEGNR2_cp_mpgupperbound_gain(data)                             (0x00000030&((data)<<4))
#define  NR_DCH1_MPEGNR2_cp_mpgdiffsum_range(data)                               (0x00000007&(data))
#define  NR_DCH1_MPEGNR2_get_cp_mpgub_dec_sel(data)                              ((0x80000000&(data))>>31)
#define  NR_DCH1_MPEGNR2_get_cp_mpgub_difcmp_en(data)                            ((0x70000000&(data))>>28)
#define  NR_DCH1_MPEGNR2_get_cp_mpgub_difcen_en(data)                            ((0x0C000000&(data))>>26)
#define  NR_DCH1_MPEGNR2_get_cp_mpgupperbound_offset(data)                       ((0x0000FF00&(data))>>8)
#define  NR_DCH1_MPEGNR2_get_cp_mpgupperbound_gain(data)                         ((0x00000030&(data))>>4)
#define  NR_DCH1_MPEGNR2_get_cp_mpgdiffsum_range(data)                           (0x00000007&(data))

#define  NR_DCH1_MPEGNR3                                                        0x180255A8
#define  NR_DCH1_MPEGNR3_reg_addr                                                "0xB80255A8"
#define  NR_DCH1_MPEGNR3_reg                                                     0xB80255A8
#define  NR_DCH1_MPEGNR3_inst_addr                                               "0x0008"
#define  set_NR_DCH1_MPEGNR3_reg(data)                                           (*((volatile unsigned int*)NR_DCH1_MPEGNR3_reg)=data)
#define  get_NR_DCH1_MPEGNR3_reg                                                 (*((volatile unsigned int*)NR_DCH1_MPEGNR3_reg))
#define  NR_DCH1_MPEGNR3_cp_mpgver_blend_mpegai_shift                            (0)
#define  NR_DCH1_MPEGNR3_cp_mpgver_blend_mpegai_mask                             (0x00000001)
#define  NR_DCH1_MPEGNR3_cp_mpgver_blend_mpegai(data)                            (0x00000001&(data))
#define  NR_DCH1_MPEGNR3_get_cp_mpgver_blend_mpegai(data)                        (0x00000001&(data))

#define  NR_DCH1_blend_NR_Ver_step                                              0x180255C0
#define  NR_DCH1_blend_NR_Ver_step_reg_addr                                      "0xB80255C0"
#define  NR_DCH1_blend_NR_Ver_step_reg                                           0xB80255C0
#define  NR_DCH1_blend_NR_Ver_step_inst_addr                                     "0x0009"
#define  set_NR_DCH1_blend_NR_Ver_step_reg(data)                                 (*((volatile unsigned int*)NR_DCH1_blend_NR_Ver_step_reg)=data)
#define  get_NR_DCH1_blend_NR_Ver_step_reg                                       (*((volatile unsigned int*)NR_DCH1_blend_NR_Ver_step_reg))
#define  NR_DCH1_blend_NR_Ver_step_cp_mpgver_blend_yini_shift                    (16)
#define  NR_DCH1_blend_NR_Ver_step_cp_mpgver_blend_ystep_shift                   (0)
#define  NR_DCH1_blend_NR_Ver_step_cp_mpgver_blend_yini_mask                     (0x00070000)
#define  NR_DCH1_blend_NR_Ver_step_cp_mpgver_blend_ystep_mask                    (0x00007FFF)
#define  NR_DCH1_blend_NR_Ver_step_cp_mpgver_blend_yini(data)                    (0x00070000&((data)<<16))
#define  NR_DCH1_blend_NR_Ver_step_cp_mpgver_blend_ystep(data)                   (0x00007FFF&(data))
#define  NR_DCH1_blend_NR_Ver_step_get_cp_mpgver_blend_yini(data)                ((0x00070000&(data))>>16)
#define  NR_DCH1_blend_NR_Ver_step_get_cp_mpgver_blend_ystep(data)               (0x00007FFF&(data))

#define  NR_DCH1_MPEGNR_UB_delta1                                               0x180255C4
#define  NR_DCH1_MPEGNR_UB_delta1_reg_addr                                       "0xB80255C4"
#define  NR_DCH1_MPEGNR_UB_delta1_reg                                            0xB80255C4
#define  NR_DCH1_MPEGNR_UB_delta1_inst_addr                                      "0x000A"
#define  set_NR_DCH1_MPEGNR_UB_delta1_reg(data)                                  (*((volatile unsigned int*)NR_DCH1_MPEGNR_UB_delta1_reg)=data)
#define  get_NR_DCH1_MPEGNR_UB_delta1_reg                                        (*((volatile unsigned int*)NR_DCH1_MPEGNR_UB_delta1_reg))
#define  NR_DCH1_MPEGNR_UB_delta1_cp_mpgub_delta2_shift                          (16)
#define  NR_DCH1_MPEGNR_UB_delta1_cp_mpgub_delta1_shift                          (0)
#define  NR_DCH1_MPEGNR_UB_delta1_cp_mpgub_delta2_mask                           (0x03FF0000)
#define  NR_DCH1_MPEGNR_UB_delta1_cp_mpgub_delta1_mask                           (0x000003FF)
#define  NR_DCH1_MPEGNR_UB_delta1_cp_mpgub_delta2(data)                          (0x03FF0000&((data)<<16))
#define  NR_DCH1_MPEGNR_UB_delta1_cp_mpgub_delta1(data)                          (0x000003FF&(data))
#define  NR_DCH1_MPEGNR_UB_delta1_get_cp_mpgub_delta2(data)                      ((0x03FF0000&(data))>>16)
#define  NR_DCH1_MPEGNR_UB_delta1_get_cp_mpgub_delta1(data)                      (0x000003FF&(data))

#define  NR_DCH1_MPEGNR_UB_delta2                                               0x180255C8
#define  NR_DCH1_MPEGNR_UB_delta2_reg_addr                                       "0xB80255C8"
#define  NR_DCH1_MPEGNR_UB_delta2_reg                                            0xB80255C8
#define  NR_DCH1_MPEGNR_UB_delta2_inst_addr                                      "0x000B"
#define  set_NR_DCH1_MPEGNR_UB_delta2_reg(data)                                  (*((volatile unsigned int*)NR_DCH1_MPEGNR_UB_delta2_reg)=data)
#define  get_NR_DCH1_MPEGNR_UB_delta2_reg                                        (*((volatile unsigned int*)NR_DCH1_MPEGNR_UB_delta2_reg))
#define  NR_DCH1_MPEGNR_UB_delta2_cp_mpgub_delta3_shift                          (0)
#define  NR_DCH1_MPEGNR_UB_delta2_cp_mpgub_delta3_mask                           (0x000003FF)
#define  NR_DCH1_MPEGNR_UB_delta2_cp_mpgub_delta3(data)                          (0x000003FF&(data))
#define  NR_DCH1_MPEGNR_UB_delta2_get_cp_mpgub_delta3(data)                      (0x000003FF&(data))

#define  NR_DCH1_MPEGNR_Diff_Th                                                 0x180255CC
#define  NR_DCH1_MPEGNR_Diff_Th_reg_addr                                         "0xB80255CC"
#define  NR_DCH1_MPEGNR_Diff_Th_reg                                              0xB80255CC
#define  NR_DCH1_MPEGNR_Diff_Th_inst_addr                                        "0x000C"
#define  set_NR_DCH1_MPEGNR_Diff_Th_reg(data)                                    (*((volatile unsigned int*)NR_DCH1_MPEGNR_Diff_Th_reg)=data)
#define  get_NR_DCH1_MPEGNR_Diff_Th_reg                                          (*((volatile unsigned int*)NR_DCH1_MPEGNR_Diff_Th_reg))
#define  NR_DCH1_MPEGNR_Diff_Th_cp_mpgver_diff_th_high_shift                     (16)
#define  NR_DCH1_MPEGNR_Diff_Th_cp_mpgver_diff_th_low_shift                      (0)
#define  NR_DCH1_MPEGNR_Diff_Th_cp_mpgver_diff_th_high_mask                      (0x03FF0000)
#define  NR_DCH1_MPEGNR_Diff_Th_cp_mpgver_diff_th_low_mask                       (0x000003FF)
#define  NR_DCH1_MPEGNR_Diff_Th_cp_mpgver_diff_th_high(data)                     (0x03FF0000&((data)<<16))
#define  NR_DCH1_MPEGNR_Diff_Th_cp_mpgver_diff_th_low(data)                      (0x000003FF&(data))
#define  NR_DCH1_MPEGNR_Diff_Th_get_cp_mpgver_diff_th_high(data)                 ((0x03FF0000&(data))>>16)
#define  NR_DCH1_MPEGNR_Diff_Th_get_cp_mpgver_diff_th_low(data)                  (0x000003FF&(data))

#define  NR_DCH1_MPEGNR_Diff_Gain                                               0x180255D0
#define  NR_DCH1_MPEGNR_Diff_Gain_reg_addr                                       "0xB80255D0"
#define  NR_DCH1_MPEGNR_Diff_Gain_reg                                            0xB80255D0
#define  NR_DCH1_MPEGNR_Diff_Gain_inst_addr                                      "0x000D"
#define  set_NR_DCH1_MPEGNR_Diff_Gain_reg(data)                                  (*((volatile unsigned int*)NR_DCH1_MPEGNR_Diff_Gain_reg)=data)
#define  get_NR_DCH1_MPEGNR_Diff_Gain_reg                                        (*((volatile unsigned int*)NR_DCH1_MPEGNR_Diff_Gain_reg))
#define  NR_DCH1_MPEGNR_Diff_Gain_cp_mpgver_diff_gain_high_shift                 (16)
#define  NR_DCH1_MPEGNR_Diff_Gain_cp_mpgver_diff_gain_low_shift                  (0)
#define  NR_DCH1_MPEGNR_Diff_Gain_cp_mpgver_diff_gain_high_mask                  (0x00070000)
#define  NR_DCH1_MPEGNR_Diff_Gain_cp_mpgver_diff_gain_low_mask                   (0x00000007)
#define  NR_DCH1_MPEGNR_Diff_Gain_cp_mpgver_diff_gain_high(data)                 (0x00070000&((data)<<16))
#define  NR_DCH1_MPEGNR_Diff_Gain_cp_mpgver_diff_gain_low(data)                  (0x00000007&(data))
#define  NR_DCH1_MPEGNR_Diff_Gain_get_cp_mpgver_diff_gain_high(data)             ((0x00070000&(data))>>16)
#define  NR_DCH1_MPEGNR_Diff_Gain_get_cp_mpgver_diff_gain_low(data)              (0x00000007&(data))

#define  NR_DCH1_MPEGNR_Diff_Cmp                                                0x180255D4
#define  NR_DCH1_MPEGNR_Diff_Cmp_reg_addr                                        "0xB80255D4"
#define  NR_DCH1_MPEGNR_Diff_Cmp_reg                                             0xB80255D4
#define  NR_DCH1_MPEGNR_Diff_Cmp_inst_addr                                       "0x000E"
#define  set_NR_DCH1_MPEGNR_Diff_Cmp_reg(data)                                   (*((volatile unsigned int*)NR_DCH1_MPEGNR_Diff_Cmp_reg)=data)
#define  get_NR_DCH1_MPEGNR_Diff_Cmp_reg                                         (*((volatile unsigned int*)NR_DCH1_MPEGNR_Diff_Cmp_reg))
#define  NR_DCH1_MPEGNR_Diff_Cmp_cp_mpgub_difcmp_gain_shift                      (16)
#define  NR_DCH1_MPEGNR_Diff_Cmp_cp_mpgub_difcmp_offset_shift                    (0)
#define  NR_DCH1_MPEGNR_Diff_Cmp_cp_mpgub_difcmp_gain_mask                       (0x00070000)
#define  NR_DCH1_MPEGNR_Diff_Cmp_cp_mpgub_difcmp_offset_mask                     (0x000003FF)
#define  NR_DCH1_MPEGNR_Diff_Cmp_cp_mpgub_difcmp_gain(data)                      (0x00070000&((data)<<16))
#define  NR_DCH1_MPEGNR_Diff_Cmp_cp_mpgub_difcmp_offset(data)                    (0x000003FF&(data))
#define  NR_DCH1_MPEGNR_Diff_Cmp_get_cp_mpgub_difcmp_gain(data)                  ((0x00070000&(data))>>16)
#define  NR_DCH1_MPEGNR_Diff_Cmp_get_cp_mpgub_difcmp_offset(data)                (0x000003FF&(data))

#define  NR_DCH1_Vist_Blking_Range                                              0x180255AC
#define  NR_DCH1_Vist_Blking_Range_reg_addr                                      "0xB80255AC"
#define  NR_DCH1_Vist_Blking_Range_reg                                           0xB80255AC
#define  NR_DCH1_Vist_Blking_Range_inst_addr                                     "0x000F"
#define  set_NR_DCH1_Vist_Blking_Range_reg(data)                                 (*((volatile unsigned int*)NR_DCH1_Vist_Blking_Range_reg)=data)
#define  get_NR_DCH1_Vist_Blking_Range_reg                                       (*((volatile unsigned int*)NR_DCH1_Vist_Blking_Range_reg))
#define  NR_DCH1_Vist_Blking_Range_cp_visthorend_shift                           (16)
#define  NR_DCH1_Vist_Blking_Range_cp_vistverend_shift                           (0)
#define  NR_DCH1_Vist_Blking_Range_cp_visthorend_mask                            (0x1FFF0000)
#define  NR_DCH1_Vist_Blking_Range_cp_vistverend_mask                            (0x00001FFF)
#define  NR_DCH1_Vist_Blking_Range_cp_visthorend(data)                           (0x1FFF0000&((data)<<16))
#define  NR_DCH1_Vist_Blking_Range_cp_vistverend(data)                           (0x00001FFF&(data))
#define  NR_DCH1_Vist_Blking_Range_get_cp_visthorend(data)                       ((0x1FFF0000&(data))>>16)
#define  NR_DCH1_Vist_Blking_Range_get_cp_vistverend(data)                       (0x00001FFF&(data))

#define  NR_DCH1_det_Hist_Vor_thd_hlh                                           0x180255B0
#define  NR_DCH1_det_Hist_Vor_thd_hlh_reg_addr                                   "0xB80255B0"
#define  NR_DCH1_det_Hist_Vor_thd_hlh_reg                                        0xB80255B0
#define  NR_DCH1_det_Hist_Vor_thd_hlh_inst_addr                                  "0x0010"
#define  set_NR_DCH1_det_Hist_Vor_thd_hlh_reg(data)                              (*((volatile unsigned int*)NR_DCH1_det_Hist_Vor_thd_hlh_reg)=data)
#define  get_NR_DCH1_det_Hist_Vor_thd_hlh_reg                                    (*((volatile unsigned int*)NR_DCH1_det_Hist_Vor_thd_hlh_reg))
#define  NR_DCH1_det_Hist_Vor_thd_hlh_cp_vistvor_diff_th_hlh_shift               (0)
#define  NR_DCH1_det_Hist_Vor_thd_hlh_cp_vistvor_diff_th_hlh_mask                (0x000003FF)
#define  NR_DCH1_det_Hist_Vor_thd_hlh_cp_vistvor_diff_th_hlh(data)               (0x000003FF&(data))
#define  NR_DCH1_det_Hist_Vor_thd_hlh_get_cp_vistvor_diff_th_hlh(data)           (0x000003FF&(data))

#define  NR_DCH1_MPEGStart                                                      0x180255B4
#define  NR_DCH1_MPEGStart_reg_addr                                              "0xB80255B4"
#define  NR_DCH1_MPEGStart_reg                                                   0xB80255B4
#define  NR_DCH1_MPEGStart_inst_addr                                             "0x0011"
#define  set_NR_DCH1_MPEGStart_reg(data)                                         (*((volatile unsigned int*)NR_DCH1_MPEGStart_reg)=data)
#define  get_NR_DCH1_MPEGStart_reg                                               (*((volatile unsigned int*)NR_DCH1_MPEGStart_reg))
#define  NR_DCH1_MPEGStart_cp_vistveroffset_shift                                (4)
#define  NR_DCH1_MPEGStart_cp_vistveren_shift                                    (3)
#define  NR_DCH1_MPEGStart_cp_vist2step_shift                                    (0)
#define  NR_DCH1_MPEGStart_cp_vistveroffset_mask                                 (0x00000070)
#define  NR_DCH1_MPEGStart_cp_vistveren_mask                                     (0x00000008)
#define  NR_DCH1_MPEGStart_cp_vist2step_mask                                     (0x00000007)
#define  NR_DCH1_MPEGStart_cp_vistveroffset(data)                                (0x00000070&((data)<<4))
#define  NR_DCH1_MPEGStart_cp_vistveren(data)                                    (0x00000008&((data)<<3))
#define  NR_DCH1_MPEGStart_cp_vist2step(data)                                    (0x00000007&(data))
#define  NR_DCH1_MPEGStart_get_cp_vistveroffset(data)                            ((0x00000070&(data))>>4)
#define  NR_DCH1_MPEGStart_get_cp_vistveren(data)                                ((0x00000008&(data))>>3)
#define  NR_DCH1_MPEGStart_get_cp_vist2step(data)                                (0x00000007&(data))

#define  NR_DCH1_det_Vist_Hor_step                                              0x180255B8
#define  NR_DCH1_det_Vist_Hor_step_reg_addr                                      "0xB80255B8"
#define  NR_DCH1_det_Vist_Hor_step_reg                                           0xB80255B8
#define  NR_DCH1_det_Vist_Hor_step_inst_addr                                     "0x0012"
#define  set_NR_DCH1_det_Vist_Hor_step_reg(data)                                 (*((volatile unsigned int*)NR_DCH1_det_Vist_Hor_step_reg)=data)
#define  get_NR_DCH1_det_Vist_Hor_step_reg                                       (*((volatile unsigned int*)NR_DCH1_det_Vist_Hor_step_reg))
#define  NR_DCH1_det_Vist_Hor_step_cp_visthor_det_offset_shift                   (20)
#define  NR_DCH1_det_Vist_Hor_step_cp_visthor_det_yini_shift                     (16)
#define  NR_DCH1_det_Vist_Hor_step_cp_visthor_det_ystep_shift                    (0)
#define  NR_DCH1_det_Vist_Hor_step_cp_visthor_det_offset_mask                    (0x00700000)
#define  NR_DCH1_det_Vist_Hor_step_cp_visthor_det_yini_mask                      (0x00070000)
#define  NR_DCH1_det_Vist_Hor_step_cp_visthor_det_ystep_mask                     (0x00007FFF)
#define  NR_DCH1_det_Vist_Hor_step_cp_visthor_det_offset(data)                   (0x00700000&((data)<<20))
#define  NR_DCH1_det_Vist_Hor_step_cp_visthor_det_yini(data)                     (0x00070000&((data)<<16))
#define  NR_DCH1_det_Vist_Hor_step_cp_visthor_det_ystep(data)                    (0x00007FFF&(data))
#define  NR_DCH1_det_Vist_Hor_step_get_cp_visthor_det_offset(data)               ((0x00700000&(data))>>20)
#define  NR_DCH1_det_Vist_Hor_step_get_cp_visthor_det_yini(data)                 ((0x00070000&(data))>>16)
#define  NR_DCH1_det_Vist_Hor_step_get_cp_visthor_det_ystep(data)                (0x00007FFF&(data))

#define  NR_DCH1_det_Hist_Hor_thd                                               0x180255BC
#define  NR_DCH1_det_Hist_Hor_thd_reg_addr                                       "0xB80255BC"
#define  NR_DCH1_det_Hist_Hor_thd_reg                                            0xB80255BC
#define  NR_DCH1_det_Hist_Hor_thd_inst_addr                                      "0x0013"
#define  set_NR_DCH1_det_Hist_Hor_thd_reg(data)                                  (*((volatile unsigned int*)NR_DCH1_det_Hist_Hor_thd_reg)=data)
#define  get_NR_DCH1_det_Hist_Hor_thd_reg                                        (*((volatile unsigned int*)NR_DCH1_det_Hist_Hor_thd_reg))
#define  NR_DCH1_det_Hist_Hor_thd_cp_visthor_diff_th_high_shift                  (16)
#define  NR_DCH1_det_Hist_Hor_thd_cp_visthor_diff_th_low_shift                   (0)
#define  NR_DCH1_det_Hist_Hor_thd_cp_visthor_diff_th_high_mask                   (0x03FF0000)
#define  NR_DCH1_det_Hist_Hor_thd_cp_visthor_diff_th_low_mask                    (0x000003FF)
#define  NR_DCH1_det_Hist_Hor_thd_cp_visthor_diff_th_high(data)                  (0x03FF0000&((data)<<16))
#define  NR_DCH1_det_Hist_Hor_thd_cp_visthor_diff_th_low(data)                   (0x000003FF&(data))
#define  NR_DCH1_det_Hist_Hor_thd_get_cp_visthor_diff_th_high(data)              ((0x03FF0000&(data))>>16)
#define  NR_DCH1_det_Hist_Hor_thd_get_cp_visthor_diff_th_low(data)               (0x000003FF&(data))

#define  NR_DCH1_MPEGNR_MBIST                                                   0x180255D8
#define  NR_DCH1_MPEGNR_MBIST_reg_addr                                           "0xB80255D8"
#define  NR_DCH1_MPEGNR_MBIST_reg                                                0xB80255D8
#define  NR_DCH1_MPEGNR_MBIST_inst_addr                                          "0x0014"
#define  set_NR_DCH1_MPEGNR_MBIST_reg(data)                                      (*((volatile unsigned int*)NR_DCH1_MPEGNR_MBIST_reg)=data)
#define  get_NR_DCH1_MPEGNR_MBIST_reg                                            (*((volatile unsigned int*)NR_DCH1_MPEGNR_MBIST_reg))
#define  NR_DCH1_MPEGNR_MBIST_mpegnr_vdeblk_ls_shift                             (9)
#define  NR_DCH1_MPEGNR_MBIST_mpegnr_vdeblk_rme_shift                            (8)
#define  NR_DCH1_MPEGNR_MBIST_mpegnr_vdeblk_rm_shift                             (4)
#define  NR_DCH1_MPEGNR_MBIST_mpegnr_vdeblk_bist_fail_shift                      (1)
#define  NR_DCH1_MPEGNR_MBIST_mpegnr_vdeblk_drf_bist_fail_shift                  (0)
#define  NR_DCH1_MPEGNR_MBIST_mpegnr_vdeblk_ls_mask                              (0x00000200)
#define  NR_DCH1_MPEGNR_MBIST_mpegnr_vdeblk_rme_mask                             (0x00000100)
#define  NR_DCH1_MPEGNR_MBIST_mpegnr_vdeblk_rm_mask                              (0x000000F0)
#define  NR_DCH1_MPEGNR_MBIST_mpegnr_vdeblk_bist_fail_mask                       (0x00000002)
#define  NR_DCH1_MPEGNR_MBIST_mpegnr_vdeblk_drf_bist_fail_mask                   (0x00000001)
#define  NR_DCH1_MPEGNR_MBIST_mpegnr_vdeblk_ls(data)                             (0x00000200&((data)<<9))
#define  NR_DCH1_MPEGNR_MBIST_mpegnr_vdeblk_rme(data)                            (0x00000100&((data)<<8))
#define  NR_DCH1_MPEGNR_MBIST_mpegnr_vdeblk_rm(data)                             (0x000000F0&((data)<<4))
#define  NR_DCH1_MPEGNR_MBIST_mpegnr_vdeblk_bist_fail(data)                      (0x00000002&((data)<<1))
#define  NR_DCH1_MPEGNR_MBIST_mpegnr_vdeblk_drf_bist_fail(data)                  (0x00000001&(data))
#define  NR_DCH1_MPEGNR_MBIST_get_mpegnr_vdeblk_ls(data)                         ((0x00000200&(data))>>9)
#define  NR_DCH1_MPEGNR_MBIST_get_mpegnr_vdeblk_rme(data)                        ((0x00000100&(data))>>8)
#define  NR_DCH1_MPEGNR_MBIST_get_mpegnr_vdeblk_rm(data)                         ((0x000000F0&(data))>>4)
#define  NR_DCH1_MPEGNR_MBIST_get_mpegnr_vdeblk_bist_fail(data)                  ((0x00000002&(data))>>1)
#define  NR_DCH1_MPEGNR_MBIST_get_mpegnr_vdeblk_drf_bist_fail(data)              (0x00000001&(data))

#define  NR_DCH1_VisCntVer0                                                     0x180255E0
#define  NR_DCH1_VisCntVer0_reg_addr                                             "0xB80255E0"
#define  NR_DCH1_VisCntVer0_reg                                                  0xB80255E0
#define  NR_DCH1_VisCntVer0_inst_addr                                            "0x0015"
#define  set_NR_DCH1_VisCntVer0_reg(data)                                        (*((volatile unsigned int*)NR_DCH1_VisCntVer0_reg)=data)
#define  get_NR_DCH1_VisCntVer0_reg                                              (*((volatile unsigned int*)NR_DCH1_VisCntVer0_reg))
#define  NR_DCH1_VisCntVer0_cp_viscntver0_shift                                  (0)
#define  NR_DCH1_VisCntVer0_cp_viscntver0_mask                                   (0x000FFFFF)
#define  NR_DCH1_VisCntVer0_cp_viscntver0(data)                                  (0x000FFFFF&(data))
#define  NR_DCH1_VisCntVer0_get_cp_viscntver0(data)                              (0x000FFFFF&(data))

#define  NR_DCH1_VisCntVer1                                                     0x180255E4
#define  NR_DCH1_VisCntVer1_reg_addr                                             "0xB80255E4"
#define  NR_DCH1_VisCntVer1_reg                                                  0xB80255E4
#define  NR_DCH1_VisCntVer1_inst_addr                                            "0x0016"
#define  set_NR_DCH1_VisCntVer1_reg(data)                                        (*((volatile unsigned int*)NR_DCH1_VisCntVer1_reg)=data)
#define  get_NR_DCH1_VisCntVer1_reg                                              (*((volatile unsigned int*)NR_DCH1_VisCntVer1_reg))
#define  NR_DCH1_VisCntVer1_cp_viscntver1_shift                                  (0)
#define  NR_DCH1_VisCntVer1_cp_viscntver1_mask                                   (0x000FFFFF)
#define  NR_DCH1_VisCntVer1_cp_viscntver1(data)                                  (0x000FFFFF&(data))
#define  NR_DCH1_VisCntVer1_get_cp_viscntver1(data)                              (0x000FFFFF&(data))

#define  NR_DCH1_VisCntVer2                                                     0x180255E8
#define  NR_DCH1_VisCntVer2_reg_addr                                             "0xB80255E8"
#define  NR_DCH1_VisCntVer2_reg                                                  0xB80255E8
#define  NR_DCH1_VisCntVer2_inst_addr                                            "0x0017"
#define  set_NR_DCH1_VisCntVer2_reg(data)                                        (*((volatile unsigned int*)NR_DCH1_VisCntVer2_reg)=data)
#define  get_NR_DCH1_VisCntVer2_reg                                              (*((volatile unsigned int*)NR_DCH1_VisCntVer2_reg))
#define  NR_DCH1_VisCntVer2_cp_viscntver2_shift                                  (0)
#define  NR_DCH1_VisCntVer2_cp_viscntver2_mask                                   (0x000FFFFF)
#define  NR_DCH1_VisCntVer2_cp_viscntver2(data)                                  (0x000FFFFF&(data))
#define  NR_DCH1_VisCntVer2_get_cp_viscntver2(data)                              (0x000FFFFF&(data))

#define  NR_DCH1_VisCntVer3                                                     0x180255EC
#define  NR_DCH1_VisCntVer3_reg_addr                                             "0xB80255EC"
#define  NR_DCH1_VisCntVer3_reg                                                  0xB80255EC
#define  NR_DCH1_VisCntVer3_inst_addr                                            "0x0018"
#define  set_NR_DCH1_VisCntVer3_reg(data)                                        (*((volatile unsigned int*)NR_DCH1_VisCntVer3_reg)=data)
#define  get_NR_DCH1_VisCntVer3_reg                                              (*((volatile unsigned int*)NR_DCH1_VisCntVer3_reg))
#define  NR_DCH1_VisCntVer3_cp_viscntver3_shift                                  (0)
#define  NR_DCH1_VisCntVer3_cp_viscntver3_mask                                   (0x000FFFFF)
#define  NR_DCH1_VisCntVer3_cp_viscntver3(data)                                  (0x000FFFFF&(data))
#define  NR_DCH1_VisCntVer3_get_cp_viscntver3(data)                              (0x000FFFFF&(data))

#define  NR_DCH1_VisCntVer4                                                     0x180255F0
#define  NR_DCH1_VisCntVer4_reg_addr                                             "0xB80255F0"
#define  NR_DCH1_VisCntVer4_reg                                                  0xB80255F0
#define  NR_DCH1_VisCntVer4_inst_addr                                            "0x0019"
#define  set_NR_DCH1_VisCntVer4_reg(data)                                        (*((volatile unsigned int*)NR_DCH1_VisCntVer4_reg)=data)
#define  get_NR_DCH1_VisCntVer4_reg                                              (*((volatile unsigned int*)NR_DCH1_VisCntVer4_reg))
#define  NR_DCH1_VisCntVer4_cp_viscntver4_shift                                  (0)
#define  NR_DCH1_VisCntVer4_cp_viscntver4_mask                                   (0x000FFFFF)
#define  NR_DCH1_VisCntVer4_cp_viscntver4(data)                                  (0x000FFFFF&(data))
#define  NR_DCH1_VisCntVer4_get_cp_viscntver4(data)                              (0x000FFFFF&(data))

#define  NR_DCH1_VisCntVer5                                                     0x180255F4
#define  NR_DCH1_VisCntVer5_reg_addr                                             "0xB80255F4"
#define  NR_DCH1_VisCntVer5_reg                                                  0xB80255F4
#define  NR_DCH1_VisCntVer5_inst_addr                                            "0x001A"
#define  set_NR_DCH1_VisCntVer5_reg(data)                                        (*((volatile unsigned int*)NR_DCH1_VisCntVer5_reg)=data)
#define  get_NR_DCH1_VisCntVer5_reg                                              (*((volatile unsigned int*)NR_DCH1_VisCntVer5_reg))
#define  NR_DCH1_VisCntVer5_cp_viscntver5_shift                                  (0)
#define  NR_DCH1_VisCntVer5_cp_viscntver5_mask                                   (0x000FFFFF)
#define  NR_DCH1_VisCntVer5_cp_viscntver5(data)                                  (0x000FFFFF&(data))
#define  NR_DCH1_VisCntVer5_get_cp_viscntver5(data)                              (0x000FFFFF&(data))

#define  NR_DCH1_VisCntVer6                                                     0x180255F8
#define  NR_DCH1_VisCntVer6_reg_addr                                             "0xB80255F8"
#define  NR_DCH1_VisCntVer6_reg                                                  0xB80255F8
#define  NR_DCH1_VisCntVer6_inst_addr                                            "0x001B"
#define  set_NR_DCH1_VisCntVer6_reg(data)                                        (*((volatile unsigned int*)NR_DCH1_VisCntVer6_reg)=data)
#define  get_NR_DCH1_VisCntVer6_reg                                              (*((volatile unsigned int*)NR_DCH1_VisCntVer6_reg))
#define  NR_DCH1_VisCntVer6_cp_viscntver6_shift                                  (0)
#define  NR_DCH1_VisCntVer6_cp_viscntver6_mask                                   (0x000FFFFF)
#define  NR_DCH1_VisCntVer6_cp_viscntver6(data)                                  (0x000FFFFF&(data))
#define  NR_DCH1_VisCntVer6_get_cp_viscntver6(data)                              (0x000FFFFF&(data))

#define  NR_DCH1_VisCntVer7                                                     0x180255FC
#define  NR_DCH1_VisCntVer7_reg_addr                                             "0xB80255FC"
#define  NR_DCH1_VisCntVer7_reg                                                  0xB80255FC
#define  NR_DCH1_VisCntVer7_inst_addr                                            "0x001C"
#define  set_NR_DCH1_VisCntVer7_reg(data)                                        (*((volatile unsigned int*)NR_DCH1_VisCntVer7_reg)=data)
#define  get_NR_DCH1_VisCntVer7_reg                                              (*((volatile unsigned int*)NR_DCH1_VisCntVer7_reg))
#define  NR_DCH1_VisCntVer7_cp_viscntver7_shift                                  (0)
#define  NR_DCH1_VisCntVer7_cp_viscntver7_mask                                   (0x000FFFFF)
#define  NR_DCH1_VisCntVer7_cp_viscntver7(data)                                  (0x000FFFFF&(data))
#define  NR_DCH1_VisCntVer7_get_cp_viscntver7(data)                              (0x000FFFFF&(data))

#define  NR_DCH1_MpgUB_Client                                                   0x18025520
#define  NR_DCH1_MpgUB_Client_reg_addr                                           "0xB8025520"
#define  NR_DCH1_MpgUB_Client_reg                                                0xB8025520
#define  NR_DCH1_MpgUB_Client_inst_addr                                          "0x001D"
#define  set_NR_DCH1_MpgUB_Client_reg(data)                                      (*((volatile unsigned int*)NR_DCH1_MpgUB_Client_reg)=data)
#define  get_NR_DCH1_MpgUB_Client_reg                                            (*((volatile unsigned int*)NR_DCH1_MpgUB_Client_reg))
#define  NR_DCH1_MpgUB_Client_cp_mpgupperbound_client_shift                      (0)
#define  NR_DCH1_MpgUB_Client_cp_mpgupperbound_client_mask                       (0x000003FF)
#define  NR_DCH1_MpgUB_Client_cp_mpgupperbound_client(data)                      (0x000003FF&(data))
#define  NR_DCH1_MpgUB_Client_get_cp_mpgupperbound_client(data)                  (0x000003FF&(data))

#define  NR_DCH1_CP_MpgFW1                                                      0x18025524
#define  NR_DCH1_CP_MpgFW1_reg_addr                                              "0xB8025524"
#define  NR_DCH1_CP_MpgFW1_reg                                                   0xB8025524
#define  NR_DCH1_CP_MpgFW1_inst_addr                                             "0x001E"
#define  set_NR_DCH1_CP_MpgFW1_reg(data)                                         (*((volatile unsigned int*)NR_DCH1_CP_MpgFW1_reg)=data)
#define  get_NR_DCH1_CP_MpgFW1_reg                                               (*((volatile unsigned int*)NR_DCH1_CP_MpgFW1_reg))
#define  NR_DCH1_CP_MpgFW1_cp_mpgfw1_shift                                       (0)
#define  NR_DCH1_CP_MpgFW1_cp_mpgfw1_mask                                        (0xFFFFFFFF)
#define  NR_DCH1_CP_MpgFW1_cp_mpgfw1(data)                                       (0xFFFFFFFF&(data))
#define  NR_DCH1_CP_MpgFW1_get_cp_mpgfw1(data)                                   (0xFFFFFFFF&(data))

#define  NR_DCH1_CP_MpgFW2                                                      0x18025528
#define  NR_DCH1_CP_MpgFW2_reg_addr                                              "0xB8025528"
#define  NR_DCH1_CP_MpgFW2_reg                                                   0xB8025528
#define  NR_DCH1_CP_MpgFW2_inst_addr                                             "0x001F"
#define  set_NR_DCH1_CP_MpgFW2_reg(data)                                         (*((volatile unsigned int*)NR_DCH1_CP_MpgFW2_reg)=data)
#define  get_NR_DCH1_CP_MpgFW2_reg                                               (*((volatile unsigned int*)NR_DCH1_CP_MpgFW2_reg))
#define  NR_DCH1_CP_MpgFW2_cp_mpgfw2_shift                                       (0)
#define  NR_DCH1_CP_MpgFW2_cp_mpgfw2_mask                                        (0xFFFFFFFF)
#define  NR_DCH1_CP_MpgFW2_cp_mpgfw2(data)                                       (0xFFFFFFFF&(data))
#define  NR_DCH1_CP_MpgFW2_get_cp_mpgfw2(data)                                   (0xFFFFFFFF&(data))

#define  NR_CURVE_MAPPING_CTRL                                                  0x18025060
#define  NR_CURVE_MAPPING_CTRL_reg_addr                                          "0xB8025060"
#define  NR_CURVE_MAPPING_CTRL_reg                                               0xB8025060
#define  NR_CURVE_MAPPING_CTRL_inst_addr                                         "0x0020"
#define  set_NR_CURVE_MAPPING_CTRL_reg(data)                                     (*((volatile unsigned int*)NR_CURVE_MAPPING_CTRL_reg)=data)
#define  get_NR_CURVE_MAPPING_CTRL_reg                                           (*((volatile unsigned int*)NR_CURVE_MAPPING_CTRL_reg))
#define  NR_CURVE_MAPPING_CTRL_curvemappingmode_en_shift                         (0)
#define  NR_CURVE_MAPPING_CTRL_curvemappingmode_en_mask                          (0x00000001)
#define  NR_CURVE_MAPPING_CTRL_curvemappingmode_en(data)                         (0x00000001&(data))
#define  NR_CURVE_MAPPING_CTRL_get_curvemappingmode_en(data)                     (0x00000001&(data))

#define  NR_CURVE_MAPPING_STEP_0                                                0x18025064
#define  NR_CURVE_MAPPING_STEP_0_reg_addr                                        "0xB8025064"
#define  NR_CURVE_MAPPING_STEP_0_reg                                             0xB8025064
#define  NR_CURVE_MAPPING_STEP_0_inst_addr                                       "0x0021"
#define  set_NR_CURVE_MAPPING_STEP_0_reg(data)                                   (*((volatile unsigned int*)NR_CURVE_MAPPING_STEP_0_reg)=data)
#define  get_NR_CURVE_MAPPING_STEP_0_reg                                         (*((volatile unsigned int*)NR_CURVE_MAPPING_STEP_0_reg))
#define  NR_CURVE_MAPPING_STEP_0_curvemapping_step1_shift                        (16)
#define  NR_CURVE_MAPPING_STEP_0_curvemapping_step2_shift                        (0)
#define  NR_CURVE_MAPPING_STEP_0_curvemapping_step1_mask                         (0x01FF0000)
#define  NR_CURVE_MAPPING_STEP_0_curvemapping_step2_mask                         (0x000001FF)
#define  NR_CURVE_MAPPING_STEP_0_curvemapping_step1(data)                        (0x01FF0000&((data)<<16))
#define  NR_CURVE_MAPPING_STEP_0_curvemapping_step2(data)                        (0x000001FF&(data))
#define  NR_CURVE_MAPPING_STEP_0_get_curvemapping_step1(data)                    ((0x01FF0000&(data))>>16)
#define  NR_CURVE_MAPPING_STEP_0_get_curvemapping_step2(data)                    (0x000001FF&(data))

#define  NR_CURVE_MAPPING_STEP_1                                                0x18025068
#define  NR_CURVE_MAPPING_STEP_1_reg_addr                                        "0xB8025068"
#define  NR_CURVE_MAPPING_STEP_1_reg                                             0xB8025068
#define  NR_CURVE_MAPPING_STEP_1_inst_addr                                       "0x0022"
#define  set_NR_CURVE_MAPPING_STEP_1_reg(data)                                   (*((volatile unsigned int*)NR_CURVE_MAPPING_STEP_1_reg)=data)
#define  get_NR_CURVE_MAPPING_STEP_1_reg                                         (*((volatile unsigned int*)NR_CURVE_MAPPING_STEP_1_reg))
#define  NR_CURVE_MAPPING_STEP_1_curvemapping_step3_shift                        (16)
#define  NR_CURVE_MAPPING_STEP_1_curvemapping_step4_shift                        (0)
#define  NR_CURVE_MAPPING_STEP_1_curvemapping_step3_mask                         (0x01FF0000)
#define  NR_CURVE_MAPPING_STEP_1_curvemapping_step4_mask                         (0x000001FF)
#define  NR_CURVE_MAPPING_STEP_1_curvemapping_step3(data)                        (0x01FF0000&((data)<<16))
#define  NR_CURVE_MAPPING_STEP_1_curvemapping_step4(data)                        (0x000001FF&(data))
#define  NR_CURVE_MAPPING_STEP_1_get_curvemapping_step3(data)                    ((0x01FF0000&(data))>>16)
#define  NR_CURVE_MAPPING_STEP_1_get_curvemapping_step4(data)                    (0x000001FF&(data))

#define  NR_CURVE_MAPPING_STEP_2                                                0x1802506C
#define  NR_CURVE_MAPPING_STEP_2_reg_addr                                        "0xB802506C"
#define  NR_CURVE_MAPPING_STEP_2_reg                                             0xB802506C
#define  NR_CURVE_MAPPING_STEP_2_inst_addr                                       "0x0023"
#define  set_NR_CURVE_MAPPING_STEP_2_reg(data)                                   (*((volatile unsigned int*)NR_CURVE_MAPPING_STEP_2_reg)=data)
#define  get_NR_CURVE_MAPPING_STEP_2_reg                                         (*((volatile unsigned int*)NR_CURVE_MAPPING_STEP_2_reg))
#define  NR_CURVE_MAPPING_STEP_2_curvemapping_step5_shift                        (16)
#define  NR_CURVE_MAPPING_STEP_2_curvemapping_step6_shift                        (0)
#define  NR_CURVE_MAPPING_STEP_2_curvemapping_step5_mask                         (0x01FF0000)
#define  NR_CURVE_MAPPING_STEP_2_curvemapping_step6_mask                         (0x000001FF)
#define  NR_CURVE_MAPPING_STEP_2_curvemapping_step5(data)                        (0x01FF0000&((data)<<16))
#define  NR_CURVE_MAPPING_STEP_2_curvemapping_step6(data)                        (0x000001FF&(data))
#define  NR_CURVE_MAPPING_STEP_2_get_curvemapping_step5(data)                    ((0x01FF0000&(data))>>16)
#define  NR_CURVE_MAPPING_STEP_2_get_curvemapping_step6(data)                    (0x000001FF&(data))

#define  NR_CURVE_MAPPING_STEP_3                                                0x18025070
#define  NR_CURVE_MAPPING_STEP_3_reg_addr                                        "0xB8025070"
#define  NR_CURVE_MAPPING_STEP_3_reg                                             0xB8025070
#define  NR_CURVE_MAPPING_STEP_3_inst_addr                                       "0x0024"
#define  set_NR_CURVE_MAPPING_STEP_3_reg(data)                                   (*((volatile unsigned int*)NR_CURVE_MAPPING_STEP_3_reg)=data)
#define  get_NR_CURVE_MAPPING_STEP_3_reg                                         (*((volatile unsigned int*)NR_CURVE_MAPPING_STEP_3_reg))
#define  NR_CURVE_MAPPING_STEP_3_curvemapping_step7_shift                        (16)
#define  NR_CURVE_MAPPING_STEP_3_curvemapping_step8_shift                        (0)
#define  NR_CURVE_MAPPING_STEP_3_curvemapping_step7_mask                         (0x01FF0000)
#define  NR_CURVE_MAPPING_STEP_3_curvemapping_step8_mask                         (0x000001FF)
#define  NR_CURVE_MAPPING_STEP_3_curvemapping_step7(data)                        (0x01FF0000&((data)<<16))
#define  NR_CURVE_MAPPING_STEP_3_curvemapping_step8(data)                        (0x000001FF&(data))
#define  NR_CURVE_MAPPING_STEP_3_get_curvemapping_step7(data)                    ((0x01FF0000&(data))>>16)
#define  NR_CURVE_MAPPING_STEP_3_get_curvemapping_step8(data)                    (0x000001FF&(data))

#define  NR_CURVE_MAPPING_W1_1                                                  0x18025074
#define  NR_CURVE_MAPPING_W1_1_reg_addr                                          "0xB8025074"
#define  NR_CURVE_MAPPING_W1_1_reg                                               0xB8025074
#define  NR_CURVE_MAPPING_W1_1_inst_addr                                         "0x0025"
#define  set_NR_CURVE_MAPPING_W1_1_reg(data)                                     (*((volatile unsigned int*)NR_CURVE_MAPPING_W1_1_reg)=data)
#define  get_NR_CURVE_MAPPING_W1_1_reg                                           (*((volatile unsigned int*)NR_CURVE_MAPPING_W1_1_reg))
#define  NR_CURVE_MAPPING_W1_1_curvemapping_w1_0_shift                           (24)
#define  NR_CURVE_MAPPING_W1_1_curvemapping_w1_1_shift                           (16)
#define  NR_CURVE_MAPPING_W1_1_curvemapping_w1_2_shift                           (8)
#define  NR_CURVE_MAPPING_W1_1_curvemapping_w1_3_shift                           (0)
#define  NR_CURVE_MAPPING_W1_1_curvemapping_w1_0_mask                            (0x1F000000)
#define  NR_CURVE_MAPPING_W1_1_curvemapping_w1_1_mask                            (0x001F0000)
#define  NR_CURVE_MAPPING_W1_1_curvemapping_w1_2_mask                            (0x00001F00)
#define  NR_CURVE_MAPPING_W1_1_curvemapping_w1_3_mask                            (0x0000001F)
#define  NR_CURVE_MAPPING_W1_1_curvemapping_w1_0(data)                           (0x1F000000&((data)<<24))
#define  NR_CURVE_MAPPING_W1_1_curvemapping_w1_1(data)                           (0x001F0000&((data)<<16))
#define  NR_CURVE_MAPPING_W1_1_curvemapping_w1_2(data)                           (0x00001F00&((data)<<8))
#define  NR_CURVE_MAPPING_W1_1_curvemapping_w1_3(data)                           (0x0000001F&(data))
#define  NR_CURVE_MAPPING_W1_1_get_curvemapping_w1_0(data)                       ((0x1F000000&(data))>>24)
#define  NR_CURVE_MAPPING_W1_1_get_curvemapping_w1_1(data)                       ((0x001F0000&(data))>>16)
#define  NR_CURVE_MAPPING_W1_1_get_curvemapping_w1_2(data)                       ((0x00001F00&(data))>>8)
#define  NR_CURVE_MAPPING_W1_1_get_curvemapping_w1_3(data)                       (0x0000001F&(data))

#define  NR_CURVE_MAPPING_W1_2                                                  0x18025078
#define  NR_CURVE_MAPPING_W1_2_reg_addr                                          "0xB8025078"
#define  NR_CURVE_MAPPING_W1_2_reg                                               0xB8025078
#define  NR_CURVE_MAPPING_W1_2_inst_addr                                         "0x0026"
#define  set_NR_CURVE_MAPPING_W1_2_reg(data)                                     (*((volatile unsigned int*)NR_CURVE_MAPPING_W1_2_reg)=data)
#define  get_NR_CURVE_MAPPING_W1_2_reg                                           (*((volatile unsigned int*)NR_CURVE_MAPPING_W1_2_reg))
#define  NR_CURVE_MAPPING_W1_2_curvemapping_w1_4_shift                           (24)
#define  NR_CURVE_MAPPING_W1_2_curvemapping_w1_5_shift                           (16)
#define  NR_CURVE_MAPPING_W1_2_curvemapping_w1_6_shift                           (8)
#define  NR_CURVE_MAPPING_W1_2_curvemapping_w1_7_shift                           (0)
#define  NR_CURVE_MAPPING_W1_2_curvemapping_w1_4_mask                            (0x1F000000)
#define  NR_CURVE_MAPPING_W1_2_curvemapping_w1_5_mask                            (0x001F0000)
#define  NR_CURVE_MAPPING_W1_2_curvemapping_w1_6_mask                            (0x00001F00)
#define  NR_CURVE_MAPPING_W1_2_curvemapping_w1_7_mask                            (0x0000001F)
#define  NR_CURVE_MAPPING_W1_2_curvemapping_w1_4(data)                           (0x1F000000&((data)<<24))
#define  NR_CURVE_MAPPING_W1_2_curvemapping_w1_5(data)                           (0x001F0000&((data)<<16))
#define  NR_CURVE_MAPPING_W1_2_curvemapping_w1_6(data)                           (0x00001F00&((data)<<8))
#define  NR_CURVE_MAPPING_W1_2_curvemapping_w1_7(data)                           (0x0000001F&(data))
#define  NR_CURVE_MAPPING_W1_2_get_curvemapping_w1_4(data)                       ((0x1F000000&(data))>>24)
#define  NR_CURVE_MAPPING_W1_2_get_curvemapping_w1_5(data)                       ((0x001F0000&(data))>>16)
#define  NR_CURVE_MAPPING_W1_2_get_curvemapping_w1_6(data)                       ((0x00001F00&(data))>>8)
#define  NR_CURVE_MAPPING_W1_2_get_curvemapping_w1_7(data)                       (0x0000001F&(data))

#define  NR_CURVE_MAPPING_W1_3                                                  0x1802507C
#define  NR_CURVE_MAPPING_W1_3_reg_addr                                          "0xB802507C"
#define  NR_CURVE_MAPPING_W1_3_reg                                               0xB802507C
#define  NR_CURVE_MAPPING_W1_3_inst_addr                                         "0x0027"
#define  set_NR_CURVE_MAPPING_W1_3_reg(data)                                     (*((volatile unsigned int*)NR_CURVE_MAPPING_W1_3_reg)=data)
#define  get_NR_CURVE_MAPPING_W1_3_reg                                           (*((volatile unsigned int*)NR_CURVE_MAPPING_W1_3_reg))
#define  NR_CURVE_MAPPING_W1_3_curvemapping_w1_8_shift                           (0)
#define  NR_CURVE_MAPPING_W1_3_curvemapping_w1_8_mask                            (0x0000001F)
#define  NR_CURVE_MAPPING_W1_3_curvemapping_w1_8(data)                           (0x0000001F&(data))
#define  NR_CURVE_MAPPING_W1_3_get_curvemapping_w1_8(data)                       (0x0000001F&(data))

#define  NR_CURVE_MAPPING_W2_1                                                  0x18025080
#define  NR_CURVE_MAPPING_W2_1_reg_addr                                          "0xB8025080"
#define  NR_CURVE_MAPPING_W2_1_reg                                               0xB8025080
#define  NR_CURVE_MAPPING_W2_1_inst_addr                                         "0x0028"
#define  set_NR_CURVE_MAPPING_W2_1_reg(data)                                     (*((volatile unsigned int*)NR_CURVE_MAPPING_W2_1_reg)=data)
#define  get_NR_CURVE_MAPPING_W2_1_reg                                           (*((volatile unsigned int*)NR_CURVE_MAPPING_W2_1_reg))
#define  NR_CURVE_MAPPING_W2_1_curvemapping_w2_0_shift                           (24)
#define  NR_CURVE_MAPPING_W2_1_curvemapping_w2_1_shift                           (16)
#define  NR_CURVE_MAPPING_W2_1_curvemapping_w2_2_shift                           (8)
#define  NR_CURVE_MAPPING_W2_1_curvemapping_w2_3_shift                           (0)
#define  NR_CURVE_MAPPING_W2_1_curvemapping_w2_0_mask                            (0x1F000000)
#define  NR_CURVE_MAPPING_W2_1_curvemapping_w2_1_mask                            (0x001F0000)
#define  NR_CURVE_MAPPING_W2_1_curvemapping_w2_2_mask                            (0x00001F00)
#define  NR_CURVE_MAPPING_W2_1_curvemapping_w2_3_mask                            (0x0000001F)
#define  NR_CURVE_MAPPING_W2_1_curvemapping_w2_0(data)                           (0x1F000000&((data)<<24))
#define  NR_CURVE_MAPPING_W2_1_curvemapping_w2_1(data)                           (0x001F0000&((data)<<16))
#define  NR_CURVE_MAPPING_W2_1_curvemapping_w2_2(data)                           (0x00001F00&((data)<<8))
#define  NR_CURVE_MAPPING_W2_1_curvemapping_w2_3(data)                           (0x0000001F&(data))
#define  NR_CURVE_MAPPING_W2_1_get_curvemapping_w2_0(data)                       ((0x1F000000&(data))>>24)
#define  NR_CURVE_MAPPING_W2_1_get_curvemapping_w2_1(data)                       ((0x001F0000&(data))>>16)
#define  NR_CURVE_MAPPING_W2_1_get_curvemapping_w2_2(data)                       ((0x00001F00&(data))>>8)
#define  NR_CURVE_MAPPING_W2_1_get_curvemapping_w2_3(data)                       (0x0000001F&(data))

#define  NR_CURVE_MAPPING_W2_2                                                  0x18025084
#define  NR_CURVE_MAPPING_W2_2_reg_addr                                          "0xB8025084"
#define  NR_CURVE_MAPPING_W2_2_reg                                               0xB8025084
#define  NR_CURVE_MAPPING_W2_2_inst_addr                                         "0x0029"
#define  set_NR_CURVE_MAPPING_W2_2_reg(data)                                     (*((volatile unsigned int*)NR_CURVE_MAPPING_W2_2_reg)=data)
#define  get_NR_CURVE_MAPPING_W2_2_reg                                           (*((volatile unsigned int*)NR_CURVE_MAPPING_W2_2_reg))
#define  NR_CURVE_MAPPING_W2_2_curvemapping_w2_4_shift                           (24)
#define  NR_CURVE_MAPPING_W2_2_curvemapping_w2_5_shift                           (16)
#define  NR_CURVE_MAPPING_W2_2_curvemapping_w2_6_shift                           (8)
#define  NR_CURVE_MAPPING_W2_2_curvemapping_w2_7_shift                           (0)
#define  NR_CURVE_MAPPING_W2_2_curvemapping_w2_4_mask                            (0x1F000000)
#define  NR_CURVE_MAPPING_W2_2_curvemapping_w2_5_mask                            (0x001F0000)
#define  NR_CURVE_MAPPING_W2_2_curvemapping_w2_6_mask                            (0x00001F00)
#define  NR_CURVE_MAPPING_W2_2_curvemapping_w2_7_mask                            (0x0000001F)
#define  NR_CURVE_MAPPING_W2_2_curvemapping_w2_4(data)                           (0x1F000000&((data)<<24))
#define  NR_CURVE_MAPPING_W2_2_curvemapping_w2_5(data)                           (0x001F0000&((data)<<16))
#define  NR_CURVE_MAPPING_W2_2_curvemapping_w2_6(data)                           (0x00001F00&((data)<<8))
#define  NR_CURVE_MAPPING_W2_2_curvemapping_w2_7(data)                           (0x0000001F&(data))
#define  NR_CURVE_MAPPING_W2_2_get_curvemapping_w2_4(data)                       ((0x1F000000&(data))>>24)
#define  NR_CURVE_MAPPING_W2_2_get_curvemapping_w2_5(data)                       ((0x001F0000&(data))>>16)
#define  NR_CURVE_MAPPING_W2_2_get_curvemapping_w2_6(data)                       ((0x00001F00&(data))>>8)
#define  NR_CURVE_MAPPING_W2_2_get_curvemapping_w2_7(data)                       (0x0000001F&(data))

#define  NR_CURVE_MAPPING_W2_3                                                  0x18025088
#define  NR_CURVE_MAPPING_W2_3_reg_addr                                          "0xB8025088"
#define  NR_CURVE_MAPPING_W2_3_reg                                               0xB8025088
#define  NR_CURVE_MAPPING_W2_3_inst_addr                                         "0x002A"
#define  set_NR_CURVE_MAPPING_W2_3_reg(data)                                     (*((volatile unsigned int*)NR_CURVE_MAPPING_W2_3_reg)=data)
#define  get_NR_CURVE_MAPPING_W2_3_reg                                           (*((volatile unsigned int*)NR_CURVE_MAPPING_W2_3_reg))
#define  NR_CURVE_MAPPING_W2_3_curvemapping_w2_8_shift                           (0)
#define  NR_CURVE_MAPPING_W2_3_curvemapping_w2_8_mask                            (0x0000001F)
#define  NR_CURVE_MAPPING_W2_3_curvemapping_w2_8(data)                           (0x0000001F&(data))
#define  NR_CURVE_MAPPING_W2_3_get_curvemapping_w2_8(data)                       (0x0000001F&(data))

#define  NR_SNR_DB_CTRL                                                         0x1802508C
#define  NR_SNR_DB_CTRL_reg_addr                                                 "0xB802508C"
#define  NR_SNR_DB_CTRL_reg                                                      0xB802508C
#define  NR_SNR_DB_CTRL_inst_addr                                                "0x002B"
#define  set_NR_SNR_DB_CTRL_reg(data)                                            (*((volatile unsigned int*)NR_SNR_DB_CTRL_reg)=data)
#define  get_NR_SNR_DB_CTRL_reg                                                  (*((volatile unsigned int*)NR_SNR_DB_CTRL_reg))
#define  NR_SNR_DB_CTRL_snr_db_apply_shift                                       (2)
#define  NR_SNR_DB_CTRL_snr_db_rd_sel_shift                                      (1)
#define  NR_SNR_DB_CTRL_snr_db_en_shift                                          (0)
#define  NR_SNR_DB_CTRL_snr_db_apply_mask                                        (0x00000004)
#define  NR_SNR_DB_CTRL_snr_db_rd_sel_mask                                       (0x00000002)
#define  NR_SNR_DB_CTRL_snr_db_en_mask                                           (0x00000001)
#define  NR_SNR_DB_CTRL_snr_db_apply(data)                                       (0x00000004&((data)<<2))
#define  NR_SNR_DB_CTRL_snr_db_rd_sel(data)                                      (0x00000002&((data)<<1))
#define  NR_SNR_DB_CTRL_snr_db_en(data)                                          (0x00000001&(data))
#define  NR_SNR_DB_CTRL_get_snr_db_apply(data)                                   ((0x00000004&(data))>>2)
#define  NR_SNR_DB_CTRL_get_snr_db_rd_sel(data)                                  ((0x00000002&(data))>>1)
#define  NR_SNR_DB_CTRL_get_snr_db_en(data)                                      (0x00000001&(data))

#define  NR_MOSQUITO_CTRL                                                       0x18025090
#define  NR_MOSQUITO_CTRL_reg_addr                                               "0xB8025090"
#define  NR_MOSQUITO_CTRL_reg                                                    0xB8025090
#define  NR_MOSQUITO_CTRL_inst_addr                                              "0x002C"
#define  set_NR_MOSQUITO_CTRL_reg(data)                                          (*((volatile unsigned int*)NR_MOSQUITO_CTRL_reg)=data)
#define  get_NR_MOSQUITO_CTRL_reg                                                (*((volatile unsigned int*)NR_MOSQUITO_CTRL_reg))
#define  NR_MOSQUITO_CTRL_mnr_adjustnoiselevel_bytype_shift                      (31)
#define  NR_MOSQUITO_CTRL_mnr_vardiff_refine_2dsearch_shift                      (30)
#define  NR_MOSQUITO_CTRL_mnr_lpf_sel_shift                                      (26)
#define  NR_MOSQUITO_CTRL_mosquitonr_edge_strength_gain_shift                    (8)
#define  NR_MOSQUITO_CTRL_mosquitonr_weight_shift                                (4)
#define  NR_MOSQUITO_CTRL_mosquitonr_blending_mode_shift                         (3)
#define  NR_MOSQUITO_CTRL_mosquitonr_vertical_en_shift                           (1)
#define  NR_MOSQUITO_CTRL_mosquito_detect_en_shift                               (0)
#define  NR_MOSQUITO_CTRL_mnr_adjustnoiselevel_bytype_mask                       (0x80000000)
#define  NR_MOSQUITO_CTRL_mnr_vardiff_refine_2dsearch_mask                       (0x40000000)
#define  NR_MOSQUITO_CTRL_mnr_lpf_sel_mask                                       (0x1C000000)
#define  NR_MOSQUITO_CTRL_mosquitonr_edge_strength_gain_mask                     (0x00000700)
#define  NR_MOSQUITO_CTRL_mosquitonr_weight_mask                                 (0x000000F0)
#define  NR_MOSQUITO_CTRL_mosquitonr_blending_mode_mask                          (0x00000008)
#define  NR_MOSQUITO_CTRL_mosquitonr_vertical_en_mask                            (0x00000002)
#define  NR_MOSQUITO_CTRL_mosquito_detect_en_mask                                (0x00000001)
#define  NR_MOSQUITO_CTRL_mnr_adjustnoiselevel_bytype(data)                      (0x80000000&((data)<<31))
#define  NR_MOSQUITO_CTRL_mnr_vardiff_refine_2dsearch(data)                      (0x40000000&((data)<<30))
#define  NR_MOSQUITO_CTRL_mnr_lpf_sel(data)                                      (0x1C000000&((data)<<26))
#define  NR_MOSQUITO_CTRL_mosquitonr_edge_strength_gain(data)                    (0x00000700&((data)<<8))
#define  NR_MOSQUITO_CTRL_mosquitonr_weight(data)                                (0x000000F0&((data)<<4))
#define  NR_MOSQUITO_CTRL_mosquitonr_blending_mode(data)                         (0x00000008&((data)<<3))
#define  NR_MOSQUITO_CTRL_mosquitonr_vertical_en(data)                           (0x00000002&((data)<<1))
#define  NR_MOSQUITO_CTRL_mosquito_detect_en(data)                               (0x00000001&(data))
#define  NR_MOSQUITO_CTRL_get_mnr_adjustnoiselevel_bytype(data)                  ((0x80000000&(data))>>31)
#define  NR_MOSQUITO_CTRL_get_mnr_vardiff_refine_2dsearch(data)                  ((0x40000000&(data))>>30)
#define  NR_MOSQUITO_CTRL_get_mnr_lpf_sel(data)                                  ((0x1C000000&(data))>>26)
#define  NR_MOSQUITO_CTRL_get_mosquitonr_edge_strength_gain(data)                ((0x00000700&(data))>>8)
#define  NR_MOSQUITO_CTRL_get_mosquitonr_weight(data)                            ((0x000000F0&(data))>>4)
#define  NR_MOSQUITO_CTRL_get_mosquitonr_blending_mode(data)                     ((0x00000008&(data))>>3)
#define  NR_MOSQUITO_CTRL_get_mosquitonr_vertical_en(data)                       ((0x00000002&(data))>>1)
#define  NR_MOSQUITO_CTRL_get_mosquito_detect_en(data)                           (0x00000001&(data))

#define  NR_MOSQUITO_NR_KEEP_EDGE_CTRL                                          0x18025094
#define  NR_MOSQUITO_NR_KEEP_EDGE_CTRL_reg_addr                                  "0xB8025094"
#define  NR_MOSQUITO_NR_KEEP_EDGE_CTRL_reg                                       0xB8025094
#define  NR_MOSQUITO_NR_KEEP_EDGE_CTRL_inst_addr                                 "0x002D"
#define  set_NR_MOSQUITO_NR_KEEP_EDGE_CTRL_reg(data)                             (*((volatile unsigned int*)NR_MOSQUITO_NR_KEEP_EDGE_CTRL_reg)=data)
#define  get_NR_MOSQUITO_NR_KEEP_EDGE_CTRL_reg                                   (*((volatile unsigned int*)NR_MOSQUITO_NR_KEEP_EDGE_CTRL_reg))
#define  NR_MOSQUITO_NR_KEEP_EDGE_CTRL_mnr_keepedge_shift_shift                  (16)
#define  NR_MOSQUITO_NR_KEEP_EDGE_CTRL_mnr_keepedgethd_step_shift                (8)
#define  NR_MOSQUITO_NR_KEEP_EDGE_CTRL_mnr_keepedgethd_shift                     (0)
#define  NR_MOSQUITO_NR_KEEP_EDGE_CTRL_mnr_keepedge_shift_mask                   (0x00070000)
#define  NR_MOSQUITO_NR_KEEP_EDGE_CTRL_mnr_keepedgethd_step_mask                 (0x00003F00)
#define  NR_MOSQUITO_NR_KEEP_EDGE_CTRL_mnr_keepedgethd_mask                      (0x000000FF)
#define  NR_MOSQUITO_NR_KEEP_EDGE_CTRL_mnr_keepedge_shift(data)                  (0x00070000&((data)<<16))
#define  NR_MOSQUITO_NR_KEEP_EDGE_CTRL_mnr_keepedgethd_step(data)                (0x00003F00&((data)<<8))
#define  NR_MOSQUITO_NR_KEEP_EDGE_CTRL_mnr_keepedgethd(data)                     (0x000000FF&(data))
#define  NR_MOSQUITO_NR_KEEP_EDGE_CTRL_get_mnr_keepedge_shift(data)              ((0x00070000&(data))>>16)
#define  NR_MOSQUITO_NR_KEEP_EDGE_CTRL_get_mnr_keepedgethd_step(data)            ((0x00003F00&(data))>>8)
#define  NR_MOSQUITO_NR_KEEP_EDGE_CTRL_get_mnr_keepedgethd(data)                 (0x000000FF&(data))

#define  NR_MOSQUITO_NR_LEVEL_CTRL                                              0x18025098
#define  NR_MOSQUITO_NR_LEVEL_CTRL_reg_addr                                      "0xB8025098"
#define  NR_MOSQUITO_NR_LEVEL_CTRL_reg                                           0xB8025098
#define  NR_MOSQUITO_NR_LEVEL_CTRL_inst_addr                                     "0x002E"
#define  set_NR_MOSQUITO_NR_LEVEL_CTRL_reg(data)                                 (*((volatile unsigned int*)NR_MOSQUITO_NR_LEVEL_CTRL_reg)=data)
#define  get_NR_MOSQUITO_NR_LEVEL_CTRL_reg                                       (*((volatile unsigned int*)NR_MOSQUITO_NR_LEVEL_CTRL_reg))
#define  NR_MOSQUITO_NR_LEVEL_CTRL_mnr_nlevel_maxfrac_mode_shift                 (27)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_mosquitonr_nlevel_negative_offset_shift       (16)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_mosquitonr_nlevel_positive_offset_shift       (8)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_mosquitonr_nlevel_negative_shift_shift        (4)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_mosquitonr_nlevel_positive_shift_shift        (0)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_mnr_nlevel_maxfrac_mode_mask                  (0x18000000)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_mosquitonr_nlevel_negative_offset_mask        (0x00FF0000)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_mosquitonr_nlevel_positive_offset_mask        (0x0000FF00)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_mosquitonr_nlevel_negative_shift_mask         (0x000000F0)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_mosquitonr_nlevel_positive_shift_mask         (0x0000000F)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_mnr_nlevel_maxfrac_mode(data)                 (0x18000000&((data)<<27))
#define  NR_MOSQUITO_NR_LEVEL_CTRL_mosquitonr_nlevel_negative_offset(data)       (0x00FF0000&((data)<<16))
#define  NR_MOSQUITO_NR_LEVEL_CTRL_mosquitonr_nlevel_positive_offset(data)       (0x0000FF00&((data)<<8))
#define  NR_MOSQUITO_NR_LEVEL_CTRL_mosquitonr_nlevel_negative_shift(data)        (0x000000F0&((data)<<4))
#define  NR_MOSQUITO_NR_LEVEL_CTRL_mosquitonr_nlevel_positive_shift(data)        (0x0000000F&(data))
#define  NR_MOSQUITO_NR_LEVEL_CTRL_get_mnr_nlevel_maxfrac_mode(data)             ((0x18000000&(data))>>27)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_get_mosquitonr_nlevel_negative_offset(data)   ((0x00FF0000&(data))>>16)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_get_mosquitonr_nlevel_positive_offset(data)   ((0x0000FF00&(data))>>8)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_get_mosquitonr_nlevel_negative_shift(data)    ((0x000000F0&(data))>>4)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_get_mosquitonr_nlevel_positive_shift(data)    (0x0000000F&(data))

#define  NR_MOSQUITO_NR_LEVEL_CTRL_1                                            0x1802509C
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_reg_addr                                    "0xB802509C"
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_reg                                         0xB802509C
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_inst_addr                                   "0x002F"
#define  set_NR_MOSQUITO_NR_LEVEL_CTRL_1_reg(data)                               (*((volatile unsigned int*)NR_MOSQUITO_NR_LEVEL_CTRL_1_reg)=data)
#define  get_NR_MOSQUITO_NR_LEVEL_CTRL_1_reg                                     (*((volatile unsigned int*)NR_MOSQUITO_NR_LEVEL_CTRL_1_reg))
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_edge_lpf_en_shift                           (31)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_noise_level_mode_shift                      (30)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_farvar_faredge_refine_en_shift              (29)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_noise_level_trim_shift                      (27)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_far_var_gain_shift                          (24)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_far_var_offset_shift                        (16)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_mnr_var2d_byedge_shift                      (14)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_mnr_shp_en_shift                            (13)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_nlevel_diff_factor_en_shift                 (12)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_blendsnr_byedge_en_shift                    (10)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_hdiff_frac_half_range_shift                 (7)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_vdiff_frac_shift_shift                      (4)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_mnr_xrange_ext_shift                        (3)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_hdiff_frac_shift_shift                      (0)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_edge_lpf_en_mask                            (0x80000000)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_noise_level_mode_mask                       (0x40000000)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_farvar_faredge_refine_en_mask               (0x20000000)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_noise_level_trim_mask                       (0x18000000)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_far_var_gain_mask                           (0x07000000)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_far_var_offset_mask                         (0x00FF0000)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_mnr_var2d_byedge_mask                       (0x00004000)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_mnr_shp_en_mask                             (0x00002000)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_nlevel_diff_factor_en_mask                  (0x00001000)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_blendsnr_byedge_en_mask                     (0x00000400)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_hdiff_frac_half_range_mask                  (0x00000380)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_vdiff_frac_shift_mask                       (0x00000070)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_mnr_xrange_ext_mask                         (0x00000008)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_hdiff_frac_shift_mask                       (0x00000007)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_edge_lpf_en(data)                           (0x80000000&((data)<<31))
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_noise_level_mode(data)                      (0x40000000&((data)<<30))
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_farvar_faredge_refine_en(data)              (0x20000000&((data)<<29))
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_noise_level_trim(data)                      (0x18000000&((data)<<27))
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_far_var_gain(data)                          (0x07000000&((data)<<24))
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_far_var_offset(data)                        (0x00FF0000&((data)<<16))
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_mnr_var2d_byedge(data)                      (0x00004000&((data)<<14))
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_mnr_shp_en(data)                            (0x00002000&((data)<<13))
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_nlevel_diff_factor_en(data)                 (0x00001000&((data)<<12))
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_blendsnr_byedge_en(data)                    (0x00000400&((data)<<10))
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_hdiff_frac_half_range(data)                 (0x00000380&((data)<<7))
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_vdiff_frac_shift(data)                      (0x00000070&((data)<<4))
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_mnr_xrange_ext(data)                        (0x00000008&((data)<<3))
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_hdiff_frac_shift(data)                      (0x00000007&(data))
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_get_edge_lpf_en(data)                       ((0x80000000&(data))>>31)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_get_noise_level_mode(data)                  ((0x40000000&(data))>>30)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_get_farvar_faredge_refine_en(data)          ((0x20000000&(data))>>29)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_get_noise_level_trim(data)                  ((0x18000000&(data))>>27)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_get_far_var_gain(data)                      ((0x07000000&(data))>>24)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_get_far_var_offset(data)                    ((0x00FF0000&(data))>>16)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_get_mnr_var2d_byedge(data)                  ((0x00004000&(data))>>14)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_get_mnr_shp_en(data)                        ((0x00002000&(data))>>13)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_get_nlevel_diff_factor_en(data)             ((0x00001000&(data))>>12)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_get_blendsnr_byedge_en(data)                ((0x00000400&(data))>>10)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_get_hdiff_frac_half_range(data)             ((0x00000380&(data))>>7)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_get_vdiff_frac_shift(data)                  ((0x00000070&(data))>>4)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_get_mnr_xrange_ext(data)                    ((0x00000008&(data))>>3)
#define  NR_MOSQUITO_NR_LEVEL_CTRL_1_get_hdiff_frac_shift(data)                  (0x00000007&(data))

#define  NR_MOSQUITO_NR_DECAY_CTRL_1                                            0x180250A8
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_reg_addr                                    "0xB80250A8"
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_reg                                         0xB80250A8
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_inst_addr                                   "0x0030"
#define  set_NR_MOSQUITO_NR_DECAY_CTRL_1_reg(data)                               (*((volatile unsigned int*)NR_MOSQUITO_NR_DECAY_CTRL_1_reg)=data)
#define  get_NR_MOSQUITO_NR_DECAY_CTRL_1_reg                                     (*((volatile unsigned int*)NR_MOSQUITO_NR_DECAY_CTRL_1_reg))
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_mnr_vdecay_step_shift                       (16)
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_mnr_vdecay_start_shift                      (12)
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_mnr_hdecay_step_shift                       (8)
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_mnr_hdecay_start_shift                      (4)
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_mnr_decay_allcomp_en_shift                  (1)
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_mnr_decay_en_shift                          (0)
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_mnr_vdecay_step_mask                        (0x00070000)
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_mnr_vdecay_start_mask                       (0x0000F000)
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_mnr_hdecay_step_mask                        (0x00000700)
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_mnr_hdecay_start_mask                       (0x000000F0)
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_mnr_decay_allcomp_en_mask                   (0x00000002)
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_mnr_decay_en_mask                           (0x00000001)
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_mnr_vdecay_step(data)                       (0x00070000&((data)<<16))
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_mnr_vdecay_start(data)                      (0x0000F000&((data)<<12))
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_mnr_hdecay_step(data)                       (0x00000700&((data)<<8))
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_mnr_hdecay_start(data)                      (0x000000F0&((data)<<4))
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_mnr_decay_allcomp_en(data)                  (0x00000002&((data)<<1))
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_mnr_decay_en(data)                          (0x00000001&(data))
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_get_mnr_vdecay_step(data)                   ((0x00070000&(data))>>16)
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_get_mnr_vdecay_start(data)                  ((0x0000F000&(data))>>12)
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_get_mnr_hdecay_step(data)                   ((0x00000700&(data))>>8)
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_get_mnr_hdecay_start(data)                  ((0x000000F0&(data))>>4)
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_get_mnr_decay_allcomp_en(data)              ((0x00000002&(data))>>1)
#define  NR_MOSQUITO_NR_DECAY_CTRL_1_get_mnr_decay_en(data)                      (0x00000001&(data))

#define  NR_MOSQUITO_NR_EDGE_THD_CTRL                                           0x180250A0
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_reg_addr                                   "0xB80250A0"
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_reg                                        0xB80250A0
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_inst_addr                                  "0x0031"
#define  set_NR_MOSQUITO_NR_EDGE_THD_CTRL_reg(data)                              (*((volatile unsigned int*)NR_MOSQUITO_NR_EDGE_THD_CTRL_reg)=data)
#define  get_NR_MOSQUITO_NR_EDGE_THD_CTRL_reg                                    (*((volatile unsigned int*)NR_MOSQUITO_NR_EDGE_THD_CTRL_reg))
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_mnr_edgethd8_shift                         (24)
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_mnr_edgethd7_shift                         (16)
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_mnr_edgethd6_shift                         (8)
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_mnr_edgethd5_shift                         (0)
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_mnr_edgethd8_mask                          (0xFF000000)
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_mnr_edgethd7_mask                          (0x00FF0000)
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_mnr_edgethd6_mask                          (0x0000FF00)
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_mnr_edgethd5_mask                          (0x000000FF)
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_mnr_edgethd8(data)                         (0xFF000000&((data)<<24))
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_mnr_edgethd7(data)                         (0x00FF0000&((data)<<16))
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_mnr_edgethd6(data)                         (0x0000FF00&((data)<<8))
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_mnr_edgethd5(data)                         (0x000000FF&(data))
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_get_mnr_edgethd8(data)                     ((0xFF000000&(data))>>24)
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_get_mnr_edgethd7(data)                     ((0x00FF0000&(data))>>16)
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_get_mnr_edgethd6(data)                     ((0x0000FF00&(data))>>8)
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_get_mnr_edgethd5(data)                     (0x000000FF&(data))

#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_1                                         0x180250A4
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_1_reg_addr                                 "0xB80250A4"
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_1_reg                                      0xB80250A4
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_1_inst_addr                                "0x0032"
#define  set_NR_MOSQUITO_NR_EDGE_THD_CTRL_1_reg(data)                            (*((volatile unsigned int*)NR_MOSQUITO_NR_EDGE_THD_CTRL_1_reg)=data)
#define  get_NR_MOSQUITO_NR_EDGE_THD_CTRL_1_reg                                  (*((volatile unsigned int*)NR_MOSQUITO_NR_EDGE_THD_CTRL_1_reg))
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_1_mnr_edgethd4_shift                       (24)
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_1_mnr_edgethd3_shift                       (16)
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_1_mnr_edgethd2_shift                       (8)
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_1_mnr_edgethd1_shift                       (0)
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_1_mnr_edgethd4_mask                        (0xFF000000)
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_1_mnr_edgethd3_mask                        (0x00FF0000)
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_1_mnr_edgethd2_mask                        (0x0000FF00)
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_1_mnr_edgethd1_mask                        (0x000000FF)
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_1_mnr_edgethd4(data)                       (0xFF000000&((data)<<24))
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_1_mnr_edgethd3(data)                       (0x00FF0000&((data)<<16))
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_1_mnr_edgethd2(data)                       (0x0000FF00&((data)<<8))
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_1_mnr_edgethd1(data)                       (0x000000FF&(data))
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_1_get_mnr_edgethd4(data)                   ((0xFF000000&(data))>>24)
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_1_get_mnr_edgethd3(data)                   ((0x00FF0000&(data))>>16)
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_1_get_mnr_edgethd2(data)                   ((0x0000FF00&(data))>>8)
#define  NR_MOSQUITO_NR_EDGE_THD_CTRL_1_get_mnr_edgethd1(data)                   (0x000000FF&(data))

#define  NR_MOSQUITO_NR_ONESIDE_CTRL                                            0x18025020
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_reg_addr                                    "0xB8025020"
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_reg                                         0xB8025020
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_inst_addr                                   "0x0033"
#define  set_NR_MOSQUITO_NR_ONESIDE_CTRL_reg(data)                               (*((volatile unsigned int*)NR_MOSQUITO_NR_ONESIDE_CTRL_reg)=data)
#define  get_NR_MOSQUITO_NR_ONESIDE_CTRL_reg                                     (*((volatile unsigned int*)NR_MOSQUITO_NR_ONESIDE_CTRL_reg))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_mnr_oneside_edge_en_shift                   (31)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_mnr_oneside_edge_vertical_en_shift          (30)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_mnr_oneside_edge_strength_gain_shift        (27)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_mnr_oneside_edge_keepedge_shift_shift       (24)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_mnr_nlevel_mid_offset_shift                 (16)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_mnr_nlevel_mid_shift_shift                  (12)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_mnr_oneside_edge_nlevel_positive_offset_shift (4)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_mnr_oneside_edge_nlevel_positive_shift_shift (0)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_mnr_oneside_edge_en_mask                    (0x80000000)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_mnr_oneside_edge_vertical_en_mask           (0x40000000)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_mnr_oneside_edge_strength_gain_mask         (0x38000000)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_mnr_oneside_edge_keepedge_shift_mask        (0x07000000)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_mnr_nlevel_mid_offset_mask                  (0x00FF0000)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_mnr_nlevel_mid_shift_mask                   (0x0000F000)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_mnr_oneside_edge_nlevel_positive_offset_mask (0x00000FF0)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_mnr_oneside_edge_nlevel_positive_shift_mask (0x0000000F)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_mnr_oneside_edge_en(data)                   (0x80000000&((data)<<31))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_mnr_oneside_edge_vertical_en(data)          (0x40000000&((data)<<30))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_mnr_oneside_edge_strength_gain(data)        (0x38000000&((data)<<27))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_mnr_oneside_edge_keepedge_shift(data)       (0x07000000&((data)<<24))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_mnr_nlevel_mid_offset(data)                 (0x00FF0000&((data)<<16))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_mnr_nlevel_mid_shift(data)                  (0x0000F000&((data)<<12))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_mnr_oneside_edge_nlevel_positive_offset(data) (0x00000FF0&((data)<<4))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_mnr_oneside_edge_nlevel_positive_shift(data) (0x0000000F&(data))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_get_mnr_oneside_edge_en(data)               ((0x80000000&(data))>>31)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_get_mnr_oneside_edge_vertical_en(data)      ((0x40000000&(data))>>30)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_get_mnr_oneside_edge_strength_gain(data)    ((0x38000000&(data))>>27)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_get_mnr_oneside_edge_keepedge_shift(data)   ((0x07000000&(data))>>24)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_get_mnr_nlevel_mid_offset(data)             ((0x00FF0000&(data))>>16)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_get_mnr_nlevel_mid_shift(data)              ((0x0000F000&(data))>>12)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_get_mnr_oneside_edge_nlevel_positive_offset(data) ((0x00000FF0&(data))>>4)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_get_mnr_oneside_edge_nlevel_positive_shift(data) (0x0000000F&(data))

#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1                                          0x18025024
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_reg_addr                                  "0xB8025024"
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_reg                                       0xB8025024
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_inst_addr                                 "0x0034"
#define  set_NR_MOSQUITO_NR_ONESIDE_CTRL_1_reg(data)                             (*((volatile unsigned int*)NR_MOSQUITO_NR_ONESIDE_CTRL_1_reg)=data)
#define  get_NR_MOSQUITO_NR_ONESIDE_CTRL_1_reg                                   (*((volatile unsigned int*)NR_MOSQUITO_NR_ONESIDE_CTRL_1_reg))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_mnr_oneside_edge_nlevel_negative_offset_shift (24)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_mnr_oneside_edge_nlevel_negative_shift_shift (20)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_mnr_oneside_edge_maxedgestep_shift        (15)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_mnr_oneside_edge_edgelevelgain_shift      (12)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_mnr_oneside_edge_flatvarianceshift_shift  (9)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_mnr_oneside_edge_flatvarianceth_shift     (0)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_mnr_oneside_edge_nlevel_negative_offset_mask (0xFF000000)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_mnr_oneside_edge_nlevel_negative_shift_mask (0x00F00000)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_mnr_oneside_edge_maxedgestep_mask         (0x000F8000)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_mnr_oneside_edge_edgelevelgain_mask       (0x00007000)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_mnr_oneside_edge_flatvarianceshift_mask   (0x00000600)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_mnr_oneside_edge_flatvarianceth_mask      (0x000001FF)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_mnr_oneside_edge_nlevel_negative_offset(data) (0xFF000000&((data)<<24))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_mnr_oneside_edge_nlevel_negative_shift(data) (0x00F00000&((data)<<20))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_mnr_oneside_edge_maxedgestep(data)        (0x000F8000&((data)<<15))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_mnr_oneside_edge_edgelevelgain(data)      (0x00007000&((data)<<12))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_mnr_oneside_edge_flatvarianceshift(data)  (0x00000600&((data)<<9))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_mnr_oneside_edge_flatvarianceth(data)     (0x000001FF&(data))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_get_mnr_oneside_edge_nlevel_negative_offset(data) ((0xFF000000&(data))>>24)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_get_mnr_oneside_edge_nlevel_negative_shift(data) ((0x00F00000&(data))>>20)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_get_mnr_oneside_edge_maxedgestep(data)    ((0x000F8000&(data))>>15)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_get_mnr_oneside_edge_edgelevelgain(data)  ((0x00007000&(data))>>12)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_get_mnr_oneside_edge_flatvarianceshift(data) ((0x00000600&(data))>>9)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_1_get_mnr_oneside_edge_flatvarianceth(data) (0x000001FF&(data))

#define  NR_MOSQUITO_NR_ONESIDE_CTRL_2                                          0x18025028
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_2_reg_addr                                  "0xB8025028"
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_2_reg                                       0xB8025028
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_2_inst_addr                                 "0x0035"
#define  set_NR_MOSQUITO_NR_ONESIDE_CTRL_2_reg(data)                             (*((volatile unsigned int*)NR_MOSQUITO_NR_ONESIDE_CTRL_2_reg)=data)
#define  get_NR_MOSQUITO_NR_ONESIDE_CTRL_2_reg                                   (*((volatile unsigned int*)NR_MOSQUITO_NR_ONESIDE_CTRL_2_reg))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_2_mnr_oneside_edge_nlevel_upbnd_en_shift    (23)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_2_mnr_oneside_edge_nlevel_upbnd_startth_shift (16)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_2_mnr_var_diff_th_shift                     (8)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_2_mnr_vardiff_refine_gain_positive_shift    (4)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_2_mnr_vardiff_refine_gain_negative_shift    (0)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_2_mnr_oneside_edge_nlevel_upbnd_en_mask     (0x00800000)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_2_mnr_oneside_edge_nlevel_upbnd_startth_mask (0x007F0000)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_2_mnr_var_diff_th_mask                      (0x00000F00)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_2_mnr_vardiff_refine_gain_positive_mask     (0x00000070)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_2_mnr_vardiff_refine_gain_negative_mask     (0x00000007)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_2_mnr_oneside_edge_nlevel_upbnd_en(data)    (0x00800000&((data)<<23))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_2_mnr_oneside_edge_nlevel_upbnd_startth(data) (0x007F0000&((data)<<16))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_2_mnr_var_diff_th(data)                     (0x00000F00&((data)<<8))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_2_mnr_vardiff_refine_gain_positive(data)    (0x00000070&((data)<<4))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_2_mnr_vardiff_refine_gain_negative(data)    (0x00000007&(data))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_2_get_mnr_oneside_edge_nlevel_upbnd_en(data) ((0x00800000&(data))>>23)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_2_get_mnr_oneside_edge_nlevel_upbnd_startth(data) ((0x007F0000&(data))>>16)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_2_get_mnr_var_diff_th(data)                 ((0x00000F00&(data))>>8)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_2_get_mnr_vardiff_refine_gain_positive(data) ((0x00000070&(data))>>4)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_2_get_mnr_vardiff_refine_gain_negative(data) (0x00000007&(data))

#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3                                          0x1802502C
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_reg_addr                                  "0xB802502C"
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_reg                                       0xB802502C
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_inst_addr                                 "0x0036"
#define  set_NR_MOSQUITO_NR_ONESIDE_CTRL_3_reg(data)                             (*((volatile unsigned int*)NR_MOSQUITO_NR_ONESIDE_CTRL_3_reg)=data)
#define  get_NR_MOSQUITO_NR_ONESIDE_CTRL_3_reg                                   (*((volatile unsigned int*)NR_MOSQUITO_NR_ONESIDE_CTRL_3_reg))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_mnr_oneside_edge_nlevel_upbnd_gain_shift  (28)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_mnr_oneside_edge_nlevel_upbnd_offset_shift (20)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_mnr_oneside_edge_nlevel_lobnd_en_shift    (19)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_mnr_oneside_edge_nlevel_lobnd_startth_shift (12)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_mnr_oneside_edge_nlevel_lobnd_gain_shift  (8)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_mnr_oneside_edge_nlevel_lobnd_offset_shift (0)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_mnr_oneside_edge_nlevel_upbnd_gain_mask   (0x70000000)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_mnr_oneside_edge_nlevel_upbnd_offset_mask (0x0FF00000)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_mnr_oneside_edge_nlevel_lobnd_en_mask     (0x00080000)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_mnr_oneside_edge_nlevel_lobnd_startth_mask (0x0007F000)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_mnr_oneside_edge_nlevel_lobnd_gain_mask   (0x00000700)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_mnr_oneside_edge_nlevel_lobnd_offset_mask (0x000000FF)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_mnr_oneside_edge_nlevel_upbnd_gain(data)  (0x70000000&((data)<<28))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_mnr_oneside_edge_nlevel_upbnd_offset(data) (0x0FF00000&((data)<<20))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_mnr_oneside_edge_nlevel_lobnd_en(data)    (0x00080000&((data)<<19))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_mnr_oneside_edge_nlevel_lobnd_startth(data) (0x0007F000&((data)<<12))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_mnr_oneside_edge_nlevel_lobnd_gain(data)  (0x00000700&((data)<<8))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_mnr_oneside_edge_nlevel_lobnd_offset(data) (0x000000FF&(data))
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_get_mnr_oneside_edge_nlevel_upbnd_gain(data) ((0x70000000&(data))>>28)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_get_mnr_oneside_edge_nlevel_upbnd_offset(data) ((0x0FF00000&(data))>>20)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_get_mnr_oneside_edge_nlevel_lobnd_en(data) ((0x00080000&(data))>>19)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_get_mnr_oneside_edge_nlevel_lobnd_startth(data) ((0x0007F000&(data))>>12)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_get_mnr_oneside_edge_nlevel_lobnd_gain(data) ((0x00000700&(data))>>8)
#define  NR_MOSQUITO_NR_ONESIDE_CTRL_3_get_mnr_oneside_edge_nlevel_lobnd_offset(data) (0x000000FF&(data))

#define  NR_NEW_LPF_NEARBY_CTRL                                                 0x180250AC
#define  NR_NEW_LPF_NEARBY_CTRL_reg_addr                                         "0xB80250AC"
#define  NR_NEW_LPF_NEARBY_CTRL_reg                                              0xB80250AC
#define  NR_NEW_LPF_NEARBY_CTRL_inst_addr                                        "0x0037"
#define  set_NR_NEW_LPF_NEARBY_CTRL_reg(data)                                    (*((volatile unsigned int*)NR_NEW_LPF_NEARBY_CTRL_reg)=data)
#define  get_NR_NEW_LPF_NEARBY_CTRL_reg                                          (*((volatile unsigned int*)NR_NEW_LPF_NEARBY_CTRL_reg))
#define  NR_NEW_LPF_NEARBY_CTRL_modified_lpf_edge_gain_shift                     (28)
#define  NR_NEW_LPF_NEARBY_CTRL_modified_lpf_thd_step_shift                      (20)
#define  NR_NEW_LPF_NEARBY_CTRL_modified_lpf_thd_lowbnd_shift                    (12)
#define  NR_NEW_LPF_NEARBY_CTRL_modified_lpf_edge_en_shift                       (10)
#define  NR_NEW_LPF_NEARBY_CTRL_modified_lpf_thd_upbnd_shift                     (0)
#define  NR_NEW_LPF_NEARBY_CTRL_modified_lpf_edge_gain_mask                      (0x70000000)
#define  NR_NEW_LPF_NEARBY_CTRL_modified_lpf_thd_step_mask                       (0x03F00000)
#define  NR_NEW_LPF_NEARBY_CTRL_modified_lpf_thd_lowbnd_mask                     (0x000FF000)
#define  NR_NEW_LPF_NEARBY_CTRL_modified_lpf_edge_en_mask                        (0x00000400)
#define  NR_NEW_LPF_NEARBY_CTRL_modified_lpf_thd_upbnd_mask                      (0x000003FF)
#define  NR_NEW_LPF_NEARBY_CTRL_modified_lpf_edge_gain(data)                     (0x70000000&((data)<<28))
#define  NR_NEW_LPF_NEARBY_CTRL_modified_lpf_thd_step(data)                      (0x03F00000&((data)<<20))
#define  NR_NEW_LPF_NEARBY_CTRL_modified_lpf_thd_lowbnd(data)                    (0x000FF000&((data)<<12))
#define  NR_NEW_LPF_NEARBY_CTRL_modified_lpf_edge_en(data)                       (0x00000400&((data)<<10))
#define  NR_NEW_LPF_NEARBY_CTRL_modified_lpf_thd_upbnd(data)                     (0x000003FF&(data))
#define  NR_NEW_LPF_NEARBY_CTRL_get_modified_lpf_edge_gain(data)                 ((0x70000000&(data))>>28)
#define  NR_NEW_LPF_NEARBY_CTRL_get_modified_lpf_thd_step(data)                  ((0x03F00000&(data))>>20)
#define  NR_NEW_LPF_NEARBY_CTRL_get_modified_lpf_thd_lowbnd(data)                ((0x000FF000&(data))>>12)
#define  NR_NEW_LPF_NEARBY_CTRL_get_modified_lpf_edge_en(data)                   ((0x00000400&(data))>>10)
#define  NR_NEW_LPF_NEARBY_CTRL_get_modified_lpf_thd_upbnd(data)                 (0x000003FF&(data))

#define  NR_TYPE_DETECT_CTRL0                                                   0x180250B0
#define  NR_TYPE_DETECT_CTRL0_reg_addr                                           "0xB80250B0"
#define  NR_TYPE_DETECT_CTRL0_reg                                                0xB80250B0
#define  NR_TYPE_DETECT_CTRL0_inst_addr                                          "0x0038"
#define  set_NR_TYPE_DETECT_CTRL0_reg(data)                                      (*((volatile unsigned int*)NR_TYPE_DETECT_CTRL0_reg)=data)
#define  get_NR_TYPE_DETECT_CTRL0_reg                                            (*((volatile unsigned int*)NR_TYPE_DETECT_CTRL0_reg))
#define  NR_TYPE_DETECT_CTRL0_typedetect_max_step_shift                          (12)
#define  NR_TYPE_DETECT_CTRL0_typedetect_max_thd_shift                           (0)
#define  NR_TYPE_DETECT_CTRL0_typedetect_max_step_mask                           (0x001FF000)
#define  NR_TYPE_DETECT_CTRL0_typedetect_max_thd_mask                            (0x000003FF)
#define  NR_TYPE_DETECT_CTRL0_typedetect_max_step(data)                          (0x001FF000&((data)<<12))
#define  NR_TYPE_DETECT_CTRL0_typedetect_max_thd(data)                           (0x000003FF&(data))
#define  NR_TYPE_DETECT_CTRL0_get_typedetect_max_step(data)                      ((0x001FF000&(data))>>12)
#define  NR_TYPE_DETECT_CTRL0_get_typedetect_max_thd(data)                       (0x000003FF&(data))

#define  NR_TYPE_DETECT_CTRL1                                                   0x180250B4
#define  NR_TYPE_DETECT_CTRL1_reg_addr                                           "0xB80250B4"
#define  NR_TYPE_DETECT_CTRL1_reg                                                0xB80250B4
#define  NR_TYPE_DETECT_CTRL1_inst_addr                                          "0x0039"
#define  set_NR_TYPE_DETECT_CTRL1_reg(data)                                      (*((volatile unsigned int*)NR_TYPE_DETECT_CTRL1_reg)=data)
#define  get_NR_TYPE_DETECT_CTRL1_reg                                            (*((volatile unsigned int*)NR_TYPE_DETECT_CTRL1_reg))
#define  NR_TYPE_DETECT_CTRL1_typedetect_mid_step_shift                          (12)
#define  NR_TYPE_DETECT_CTRL1_typedetect_mid_thd_shift                           (0)
#define  NR_TYPE_DETECT_CTRL1_typedetect_mid_step_mask                           (0x001FF000)
#define  NR_TYPE_DETECT_CTRL1_typedetect_mid_thd_mask                            (0x000003FF)
#define  NR_TYPE_DETECT_CTRL1_typedetect_mid_step(data)                          (0x001FF000&((data)<<12))
#define  NR_TYPE_DETECT_CTRL1_typedetect_mid_thd(data)                           (0x000003FF&(data))
#define  NR_TYPE_DETECT_CTRL1_get_typedetect_mid_step(data)                      ((0x001FF000&(data))>>12)
#define  NR_TYPE_DETECT_CTRL1_get_typedetect_mid_thd(data)                       (0x000003FF&(data))

#define  NR_LINE_KEEP_CTRL0                                                     0x180250B8
#define  NR_LINE_KEEP_CTRL0_reg_addr                                             "0xB80250B8"
#define  NR_LINE_KEEP_CTRL0_reg                                                  0xB80250B8
#define  NR_LINE_KEEP_CTRL0_inst_addr                                            "0x003A"
#define  set_NR_LINE_KEEP_CTRL0_reg(data)                                        (*((volatile unsigned int*)NR_LINE_KEEP_CTRL0_reg)=data)
#define  get_NR_LINE_KEEP_CTRL0_reg                                              (*((volatile unsigned int*)NR_LINE_KEEP_CTRL0_reg))
#define  NR_LINE_KEEP_CTRL0_linekeep_verhor_ctrl_shift                           (28)
#define  NR_LINE_KEEP_CTRL0_linekeep_edgeflag_thd_shift                          (20)
#define  NR_LINE_KEEP_CTRL0_linekeep_flatflag_thd_shift                          (12)
#define  NR_LINE_KEEP_CTRL0_linekeep_linestrength_shift_shift                    (8)
#define  NR_LINE_KEEP_CTRL0_linekeep_mode_shift                                  (4)
#define  NR_LINE_KEEP_CTRL0_linekeep_shift_shift                                 (0)
#define  NR_LINE_KEEP_CTRL0_linekeep_verhor_ctrl_mask                            (0x30000000)
#define  NR_LINE_KEEP_CTRL0_linekeep_edgeflag_thd_mask                           (0x01F00000)
#define  NR_LINE_KEEP_CTRL0_linekeep_flatflag_thd_mask                           (0x0001F000)
#define  NR_LINE_KEEP_CTRL0_linekeep_linestrength_shift_mask                     (0x00000700)
#define  NR_LINE_KEEP_CTRL0_linekeep_mode_mask                                   (0x00000010)
#define  NR_LINE_KEEP_CTRL0_linekeep_shift_mask                                  (0x00000007)
#define  NR_LINE_KEEP_CTRL0_linekeep_verhor_ctrl(data)                           (0x30000000&((data)<<28))
#define  NR_LINE_KEEP_CTRL0_linekeep_edgeflag_thd(data)                          (0x01F00000&((data)<<20))
#define  NR_LINE_KEEP_CTRL0_linekeep_flatflag_thd(data)                          (0x0001F000&((data)<<12))
#define  NR_LINE_KEEP_CTRL0_linekeep_linestrength_shift(data)                    (0x00000700&((data)<<8))
#define  NR_LINE_KEEP_CTRL0_linekeep_mode(data)                                  (0x00000010&((data)<<4))
#define  NR_LINE_KEEP_CTRL0_linekeep_shift(data)                                 (0x00000007&(data))
#define  NR_LINE_KEEP_CTRL0_get_linekeep_verhor_ctrl(data)                       ((0x30000000&(data))>>28)
#define  NR_LINE_KEEP_CTRL0_get_linekeep_edgeflag_thd(data)                      ((0x01F00000&(data))>>20)
#define  NR_LINE_KEEP_CTRL0_get_linekeep_flatflag_thd(data)                      ((0x0001F000&(data))>>12)
#define  NR_LINE_KEEP_CTRL0_get_linekeep_linestrength_shift(data)                ((0x00000700&(data))>>8)
#define  NR_LINE_KEEP_CTRL0_get_linekeep_mode(data)                              ((0x00000010&(data))>>4)
#define  NR_LINE_KEEP_CTRL0_get_linekeep_shift(data)                             (0x00000007&(data))

#define  NR_LINE_KEEP_CTRL1                                                     0x180250BC
#define  NR_LINE_KEEP_CTRL1_reg_addr                                             "0xB80250BC"
#define  NR_LINE_KEEP_CTRL1_reg                                                  0xB80250BC
#define  NR_LINE_KEEP_CTRL1_inst_addr                                            "0x003B"
#define  set_NR_LINE_KEEP_CTRL1_reg(data)                                        (*((volatile unsigned int*)NR_LINE_KEEP_CTRL1_reg)=data)
#define  get_NR_LINE_KEEP_CTRL1_reg                                              (*((volatile unsigned int*)NR_LINE_KEEP_CTRL1_reg))
#define  NR_LINE_KEEP_CTRL1_linekeep_horline_judgeratio_shift                    (28)
#define  NR_LINE_KEEP_CTRL1_linekeep_verline_judgeratio_shift                    (24)
#define  NR_LINE_KEEP_CTRL1_linekeep_yuvdiff_step_shift                          (12)
#define  NR_LINE_KEEP_CTRL1_linekeep_yuvdiff_thd_shift                           (0)
#define  NR_LINE_KEEP_CTRL1_linekeep_horline_judgeratio_mask                     (0xF0000000)
#define  NR_LINE_KEEP_CTRL1_linekeep_verline_judgeratio_mask                     (0x0F000000)
#define  NR_LINE_KEEP_CTRL1_linekeep_yuvdiff_step_mask                           (0x001FF000)
#define  NR_LINE_KEEP_CTRL1_linekeep_yuvdiff_thd_mask                            (0x000003FF)
#define  NR_LINE_KEEP_CTRL1_linekeep_horline_judgeratio(data)                    (0xF0000000&((data)<<28))
#define  NR_LINE_KEEP_CTRL1_linekeep_verline_judgeratio(data)                    (0x0F000000&((data)<<24))
#define  NR_LINE_KEEP_CTRL1_linekeep_yuvdiff_step(data)                          (0x001FF000&((data)<<12))
#define  NR_LINE_KEEP_CTRL1_linekeep_yuvdiff_thd(data)                           (0x000003FF&(data))
#define  NR_LINE_KEEP_CTRL1_get_linekeep_horline_judgeratio(data)                ((0xF0000000&(data))>>28)
#define  NR_LINE_KEEP_CTRL1_get_linekeep_verline_judgeratio(data)                ((0x0F000000&(data))>>24)
#define  NR_LINE_KEEP_CTRL1_get_linekeep_yuvdiff_step(data)                      ((0x001FF000&(data))>>12)
#define  NR_LINE_KEEP_CTRL1_get_linekeep_yuvdiff_thd(data)                       (0x000003FF&(data))

#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0                                     0x180250C0
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_reg_addr                             "0xB80250C0"
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_reg                                  0xB80250C0
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_inst_addr                            "0x003C"
#define  set_NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_reg(data)                        (*((volatile unsigned int*)NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_reg)=data)
#define  get_NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_reg                              (*((volatile unsigned int*)NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_reg))
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_mnr_uvedge_en_shift                  (31)
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_mnr_uvedge_gain0_shift               (16)
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_mnr_uvedge_gain1_shift               (8)
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_mnr_uvedge_step0_shift               (4)
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_mnr_uvedge_step1_shift               (0)
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_mnr_uvedge_en_mask                   (0x80000000)
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_mnr_uvedge_gain0_mask                (0x001F0000)
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_mnr_uvedge_gain1_mask                (0x00001F00)
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_mnr_uvedge_step0_mask                (0x00000070)
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_mnr_uvedge_step1_mask                (0x00000007)
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_mnr_uvedge_en(data)                  (0x80000000&((data)<<31))
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_mnr_uvedge_gain0(data)               (0x001F0000&((data)<<16))
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_mnr_uvedge_gain1(data)               (0x00001F00&((data)<<8))
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_mnr_uvedge_step0(data)               (0x00000070&((data)<<4))
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_mnr_uvedge_step1(data)               (0x00000007&(data))
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_get_mnr_uvedge_en(data)              ((0x80000000&(data))>>31)
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_get_mnr_uvedge_gain0(data)           ((0x001F0000&(data))>>16)
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_get_mnr_uvedge_gain1(data)           ((0x00001F00&(data))>>8)
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_get_mnr_uvedge_step0(data)           ((0x00000070&(data))>>4)
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL0_get_mnr_uvedge_step1(data)           (0x00000007&(data))

#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL1                                     0x180250C4
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL1_reg_addr                             "0xB80250C4"
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL1_reg                                  0xB80250C4
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL1_inst_addr                            "0x003D"
#define  set_NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL1_reg(data)                        (*((volatile unsigned int*)NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL1_reg)=data)
#define  get_NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL1_reg                              (*((volatile unsigned int*)NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL1_reg))
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL1_mnr_uvedge_lowbd0_shift              (8)
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL1_mnr_uvedge_lowbd1_shift              (0)
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL1_mnr_uvedge_lowbd0_mask               (0x0000FF00)
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL1_mnr_uvedge_lowbd1_mask               (0x000000FF)
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL1_mnr_uvedge_lowbd0(data)              (0x0000FF00&((data)<<8))
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL1_mnr_uvedge_lowbd1(data)              (0x000000FF&(data))
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL1_get_mnr_uvedge_lowbd0(data)          ((0x0000FF00&(data))>>8)
#define  NR_UV_MODIFIED_MOSQUITO_EDGE_CTRL1_get_mnr_uvedge_lowbd1(data)          (0x000000FF&(data))

#define  NR_SPNR_ACT_Length                                                     0x180250C8
#define  NR_SPNR_ACT_Length_reg_addr                                             "0xB80250C8"
#define  NR_SPNR_ACT_Length_reg                                                  0xB80250C8
#define  NR_SPNR_ACT_Length_inst_addr                                            "0x003E"
#define  set_NR_SPNR_ACT_Length_reg(data)                                        (*((volatile unsigned int*)NR_SPNR_ACT_Length_reg)=data)
#define  get_NR_SPNR_ACT_Length_reg                                              (*((volatile unsigned int*)NR_SPNR_ACT_Length_reg))
#define  NR_SPNR_ACT_Length_spnr_image_height_shift                              (0)
#define  NR_SPNR_ACT_Length_spnr_image_height_mask                               (0x00001FFF)
#define  NR_SPNR_ACT_Length_spnr_image_height(data)                              (0x00001FFF&(data))
#define  NR_SPNR_ACT_Length_get_spnr_image_height(data)                          (0x00001FFF&(data))

#define  NR_EDGE_FILTER                                                         0x18025544
#define  NR_EDGE_FILTER_reg_addr                                                 "0xB8025544"
#define  NR_EDGE_FILTER_reg                                                      0xB8025544
#define  NR_EDGE_FILTER_inst_addr                                                "0x003F"
#define  set_NR_EDGE_FILTER_reg(data)                                            (*((volatile unsigned int*)NR_EDGE_FILTER_reg)=data)
#define  get_NR_EDGE_FILTER_reg                                                  (*((volatile unsigned int*)NR_EDGE_FILTER_reg))
#define  NR_EDGE_FILTER_vc_edge_lpf_sel_shift                                    (0)
#define  NR_EDGE_FILTER_vc_edge_lpf_sel_mask                                     (0x00000007)
#define  NR_EDGE_FILTER_vc_edge_lpf_sel(data)                                    (0x00000007&(data))
#define  NR_EDGE_FILTER_get_vc_edge_lpf_sel(data)                                (0x00000007&(data))

#define  NR_MOTION_WEIGHT_ctrl                                                  0x18025548
#define  NR_MOTION_WEIGHT_ctrl_reg_addr                                          "0xB8025548"
#define  NR_MOTION_WEIGHT_ctrl_reg                                               0xB8025548
#define  NR_MOTION_WEIGHT_ctrl_inst_addr                                         "0x0040"
#define  set_NR_MOTION_WEIGHT_ctrl_reg(data)                                     (*((volatile unsigned int*)NR_MOTION_WEIGHT_ctrl_reg)=data)
#define  get_NR_MOTION_WEIGHT_ctrl_reg                                           (*((volatile unsigned int*)NR_MOTION_WEIGHT_ctrl_reg))
#define  NR_MOTION_WEIGHT_ctrl_vc_nr_motion_signwt1_shift                        (12)
#define  NR_MOTION_WEIGHT_ctrl_vc_nr_motion_signwt2_shift                        (11)
#define  NR_MOTION_WEIGHT_ctrl_nr_motion_en_shift                                (0)
#define  NR_MOTION_WEIGHT_ctrl_vc_nr_motion_signwt1_mask                         (0x00001000)
#define  NR_MOTION_WEIGHT_ctrl_vc_nr_motion_signwt2_mask                         (0x00000800)
#define  NR_MOTION_WEIGHT_ctrl_nr_motion_en_mask                                 (0x00000001)
#define  NR_MOTION_WEIGHT_ctrl_vc_nr_motion_signwt1(data)                        (0x00001000&((data)<<12))
#define  NR_MOTION_WEIGHT_ctrl_vc_nr_motion_signwt2(data)                        (0x00000800&((data)<<11))
#define  NR_MOTION_WEIGHT_ctrl_nr_motion_en(data)                                (0x00000001&(data))
#define  NR_MOTION_WEIGHT_ctrl_get_vc_nr_motion_signwt1(data)                    ((0x00001000&(data))>>12)
#define  NR_MOTION_WEIGHT_ctrl_get_vc_nr_motion_signwt2(data)                    ((0x00000800&(data))>>11)
#define  NR_MOTION_WEIGHT_ctrl_get_nr_motion_en(data)                            (0x00000001&(data))

#define  NR_MOTION_WEIGHT1_1                                                    0x1802554C
#define  NR_MOTION_WEIGHT1_1_reg_addr                                            "0xB802554C"
#define  NR_MOTION_WEIGHT1_1_reg                                                 0xB802554C
#define  NR_MOTION_WEIGHT1_1_inst_addr                                           "0x0041"
#define  set_NR_MOTION_WEIGHT1_1_reg(data)                                       (*((volatile unsigned int*)NR_MOTION_WEIGHT1_1_reg)=data)
#define  get_NR_MOTION_WEIGHT1_1_reg                                             (*((volatile unsigned int*)NR_MOTION_WEIGHT1_1_reg))
#define  NR_MOTION_WEIGHT1_1_nr_motion_weight1_0_shift                           (28)
#define  NR_MOTION_WEIGHT1_1_nr_motion_weight1_1_shift                           (24)
#define  NR_MOTION_WEIGHT1_1_nr_motion_weight1_2_shift                           (20)
#define  NR_MOTION_WEIGHT1_1_nr_motion_weight1_3_shift                           (16)
#define  NR_MOTION_WEIGHT1_1_nr_motion_weight1_4_shift                           (12)
#define  NR_MOTION_WEIGHT1_1_nr_motion_weight1_5_shift                           (8)
#define  NR_MOTION_WEIGHT1_1_nr_motion_weight1_6_shift                           (4)
#define  NR_MOTION_WEIGHT1_1_nr_motion_weight1_7_shift                           (0)
#define  NR_MOTION_WEIGHT1_1_nr_motion_weight1_0_mask                            (0xF0000000)
#define  NR_MOTION_WEIGHT1_1_nr_motion_weight1_1_mask                            (0x0F000000)
#define  NR_MOTION_WEIGHT1_1_nr_motion_weight1_2_mask                            (0x00F00000)
#define  NR_MOTION_WEIGHT1_1_nr_motion_weight1_3_mask                            (0x000F0000)
#define  NR_MOTION_WEIGHT1_1_nr_motion_weight1_4_mask                            (0x0000F000)
#define  NR_MOTION_WEIGHT1_1_nr_motion_weight1_5_mask                            (0x00000F00)
#define  NR_MOTION_WEIGHT1_1_nr_motion_weight1_6_mask                            (0x000000F0)
#define  NR_MOTION_WEIGHT1_1_nr_motion_weight1_7_mask                            (0x0000000F)
#define  NR_MOTION_WEIGHT1_1_nr_motion_weight1_0(data)                           (0xF0000000&((data)<<28))
#define  NR_MOTION_WEIGHT1_1_nr_motion_weight1_1(data)                           (0x0F000000&((data)<<24))
#define  NR_MOTION_WEIGHT1_1_nr_motion_weight1_2(data)                           (0x00F00000&((data)<<20))
#define  NR_MOTION_WEIGHT1_1_nr_motion_weight1_3(data)                           (0x000F0000&((data)<<16))
#define  NR_MOTION_WEIGHT1_1_nr_motion_weight1_4(data)                           (0x0000F000&((data)<<12))
#define  NR_MOTION_WEIGHT1_1_nr_motion_weight1_5(data)                           (0x00000F00&((data)<<8))
#define  NR_MOTION_WEIGHT1_1_nr_motion_weight1_6(data)                           (0x000000F0&((data)<<4))
#define  NR_MOTION_WEIGHT1_1_nr_motion_weight1_7(data)                           (0x0000000F&(data))
#define  NR_MOTION_WEIGHT1_1_get_nr_motion_weight1_0(data)                       ((0xF0000000&(data))>>28)
#define  NR_MOTION_WEIGHT1_1_get_nr_motion_weight1_1(data)                       ((0x0F000000&(data))>>24)
#define  NR_MOTION_WEIGHT1_1_get_nr_motion_weight1_2(data)                       ((0x00F00000&(data))>>20)
#define  NR_MOTION_WEIGHT1_1_get_nr_motion_weight1_3(data)                       ((0x000F0000&(data))>>16)
#define  NR_MOTION_WEIGHT1_1_get_nr_motion_weight1_4(data)                       ((0x0000F000&(data))>>12)
#define  NR_MOTION_WEIGHT1_1_get_nr_motion_weight1_5(data)                       ((0x00000F00&(data))>>8)
#define  NR_MOTION_WEIGHT1_1_get_nr_motion_weight1_6(data)                       ((0x000000F0&(data))>>4)
#define  NR_MOTION_WEIGHT1_1_get_nr_motion_weight1_7(data)                       (0x0000000F&(data))

#define  NR_MOTION_WEIGHT1_2                                                    0x18025550
#define  NR_MOTION_WEIGHT1_2_reg_addr                                            "0xB8025550"
#define  NR_MOTION_WEIGHT1_2_reg                                                 0xB8025550
#define  NR_MOTION_WEIGHT1_2_inst_addr                                           "0x0042"
#define  set_NR_MOTION_WEIGHT1_2_reg(data)                                       (*((volatile unsigned int*)NR_MOTION_WEIGHT1_2_reg)=data)
#define  get_NR_MOTION_WEIGHT1_2_reg                                             (*((volatile unsigned int*)NR_MOTION_WEIGHT1_2_reg))
#define  NR_MOTION_WEIGHT1_2_nr_motion_weight1_8_shift                           (28)
#define  NR_MOTION_WEIGHT1_2_nr_motion_weight1_9_shift                           (24)
#define  NR_MOTION_WEIGHT1_2_nr_motion_weight1_10_shift                          (20)
#define  NR_MOTION_WEIGHT1_2_nr_motion_weight1_11_shift                          (16)
#define  NR_MOTION_WEIGHT1_2_nr_motion_weight1_12_shift                          (12)
#define  NR_MOTION_WEIGHT1_2_nr_motion_weight1_13_shift                          (8)
#define  NR_MOTION_WEIGHT1_2_nr_motion_weight1_14_shift                          (4)
#define  NR_MOTION_WEIGHT1_2_nr_motion_weight1_15_shift                          (0)
#define  NR_MOTION_WEIGHT1_2_nr_motion_weight1_8_mask                            (0xF0000000)
#define  NR_MOTION_WEIGHT1_2_nr_motion_weight1_9_mask                            (0x0F000000)
#define  NR_MOTION_WEIGHT1_2_nr_motion_weight1_10_mask                           (0x00F00000)
#define  NR_MOTION_WEIGHT1_2_nr_motion_weight1_11_mask                           (0x000F0000)
#define  NR_MOTION_WEIGHT1_2_nr_motion_weight1_12_mask                           (0x0000F000)
#define  NR_MOTION_WEIGHT1_2_nr_motion_weight1_13_mask                           (0x00000F00)
#define  NR_MOTION_WEIGHT1_2_nr_motion_weight1_14_mask                           (0x000000F0)
#define  NR_MOTION_WEIGHT1_2_nr_motion_weight1_15_mask                           (0x0000000F)
#define  NR_MOTION_WEIGHT1_2_nr_motion_weight1_8(data)                           (0xF0000000&((data)<<28))
#define  NR_MOTION_WEIGHT1_2_nr_motion_weight1_9(data)                           (0x0F000000&((data)<<24))
#define  NR_MOTION_WEIGHT1_2_nr_motion_weight1_10(data)                          (0x00F00000&((data)<<20))
#define  NR_MOTION_WEIGHT1_2_nr_motion_weight1_11(data)                          (0x000F0000&((data)<<16))
#define  NR_MOTION_WEIGHT1_2_nr_motion_weight1_12(data)                          (0x0000F000&((data)<<12))
#define  NR_MOTION_WEIGHT1_2_nr_motion_weight1_13(data)                          (0x00000F00&((data)<<8))
#define  NR_MOTION_WEIGHT1_2_nr_motion_weight1_14(data)                          (0x000000F0&((data)<<4))
#define  NR_MOTION_WEIGHT1_2_nr_motion_weight1_15(data)                          (0x0000000F&(data))
#define  NR_MOTION_WEIGHT1_2_get_nr_motion_weight1_8(data)                       ((0xF0000000&(data))>>28)
#define  NR_MOTION_WEIGHT1_2_get_nr_motion_weight1_9(data)                       ((0x0F000000&(data))>>24)
#define  NR_MOTION_WEIGHT1_2_get_nr_motion_weight1_10(data)                      ((0x00F00000&(data))>>20)
#define  NR_MOTION_WEIGHT1_2_get_nr_motion_weight1_11(data)                      ((0x000F0000&(data))>>16)
#define  NR_MOTION_WEIGHT1_2_get_nr_motion_weight1_12(data)                      ((0x0000F000&(data))>>12)
#define  NR_MOTION_WEIGHT1_2_get_nr_motion_weight1_13(data)                      ((0x00000F00&(data))>>8)
#define  NR_MOTION_WEIGHT1_2_get_nr_motion_weight1_14(data)                      ((0x000000F0&(data))>>4)
#define  NR_MOTION_WEIGHT1_2_get_nr_motion_weight1_15(data)                      (0x0000000F&(data))

#define  NR_MOTION_WEIGHT1_3                                                    0x18025554
#define  NR_MOTION_WEIGHT1_3_reg_addr                                            "0xB8025554"
#define  NR_MOTION_WEIGHT1_3_reg                                                 0xB8025554
#define  NR_MOTION_WEIGHT1_3_inst_addr                                           "0x0043"
#define  set_NR_MOTION_WEIGHT1_3_reg(data)                                       (*((volatile unsigned int*)NR_MOTION_WEIGHT1_3_reg)=data)
#define  get_NR_MOTION_WEIGHT1_3_reg                                             (*((volatile unsigned int*)NR_MOTION_WEIGHT1_3_reg))
#define  NR_MOTION_WEIGHT1_3_nr_motion_weight1_16_shift                          (28)
#define  NR_MOTION_WEIGHT1_3_nr_motion_weight1_17_shift                          (24)
#define  NR_MOTION_WEIGHT1_3_nr_motion_weight1_18_shift                          (20)
#define  NR_MOTION_WEIGHT1_3_nr_motion_weight1_19_shift                          (16)
#define  NR_MOTION_WEIGHT1_3_nr_motion_weight1_20_shift                          (12)
#define  NR_MOTION_WEIGHT1_3_nr_motion_weight1_21_shift                          (8)
#define  NR_MOTION_WEIGHT1_3_nr_motion_weight1_22_shift                          (4)
#define  NR_MOTION_WEIGHT1_3_nr_motion_weight1_23_shift                          (0)
#define  NR_MOTION_WEIGHT1_3_nr_motion_weight1_16_mask                           (0xF0000000)
#define  NR_MOTION_WEIGHT1_3_nr_motion_weight1_17_mask                           (0x0F000000)
#define  NR_MOTION_WEIGHT1_3_nr_motion_weight1_18_mask                           (0x00F00000)
#define  NR_MOTION_WEIGHT1_3_nr_motion_weight1_19_mask                           (0x000F0000)
#define  NR_MOTION_WEIGHT1_3_nr_motion_weight1_20_mask                           (0x0000F000)
#define  NR_MOTION_WEIGHT1_3_nr_motion_weight1_21_mask                           (0x00000F00)
#define  NR_MOTION_WEIGHT1_3_nr_motion_weight1_22_mask                           (0x000000F0)
#define  NR_MOTION_WEIGHT1_3_nr_motion_weight1_23_mask                           (0x0000000F)
#define  NR_MOTION_WEIGHT1_3_nr_motion_weight1_16(data)                          (0xF0000000&((data)<<28))
#define  NR_MOTION_WEIGHT1_3_nr_motion_weight1_17(data)                          (0x0F000000&((data)<<24))
#define  NR_MOTION_WEIGHT1_3_nr_motion_weight1_18(data)                          (0x00F00000&((data)<<20))
#define  NR_MOTION_WEIGHT1_3_nr_motion_weight1_19(data)                          (0x000F0000&((data)<<16))
#define  NR_MOTION_WEIGHT1_3_nr_motion_weight1_20(data)                          (0x0000F000&((data)<<12))
#define  NR_MOTION_WEIGHT1_3_nr_motion_weight1_21(data)                          (0x00000F00&((data)<<8))
#define  NR_MOTION_WEIGHT1_3_nr_motion_weight1_22(data)                          (0x000000F0&((data)<<4))
#define  NR_MOTION_WEIGHT1_3_nr_motion_weight1_23(data)                          (0x0000000F&(data))
#define  NR_MOTION_WEIGHT1_3_get_nr_motion_weight1_16(data)                      ((0xF0000000&(data))>>28)
#define  NR_MOTION_WEIGHT1_3_get_nr_motion_weight1_17(data)                      ((0x0F000000&(data))>>24)
#define  NR_MOTION_WEIGHT1_3_get_nr_motion_weight1_18(data)                      ((0x00F00000&(data))>>20)
#define  NR_MOTION_WEIGHT1_3_get_nr_motion_weight1_19(data)                      ((0x000F0000&(data))>>16)
#define  NR_MOTION_WEIGHT1_3_get_nr_motion_weight1_20(data)                      ((0x0000F000&(data))>>12)
#define  NR_MOTION_WEIGHT1_3_get_nr_motion_weight1_21(data)                      ((0x00000F00&(data))>>8)
#define  NR_MOTION_WEIGHT1_3_get_nr_motion_weight1_22(data)                      ((0x000000F0&(data))>>4)
#define  NR_MOTION_WEIGHT1_3_get_nr_motion_weight1_23(data)                      (0x0000000F&(data))

#define  NR_MOTION_WEIGHT1_4                                                    0x18025558
#define  NR_MOTION_WEIGHT1_4_reg_addr                                            "0xB8025558"
#define  NR_MOTION_WEIGHT1_4_reg                                                 0xB8025558
#define  NR_MOTION_WEIGHT1_4_inst_addr                                           "0x0044"
#define  set_NR_MOTION_WEIGHT1_4_reg(data)                                       (*((volatile unsigned int*)NR_MOTION_WEIGHT1_4_reg)=data)
#define  get_NR_MOTION_WEIGHT1_4_reg                                             (*((volatile unsigned int*)NR_MOTION_WEIGHT1_4_reg))
#define  NR_MOTION_WEIGHT1_4_nr_motion_weight1_24_shift                          (28)
#define  NR_MOTION_WEIGHT1_4_nr_motion_weight1_25_shift                          (24)
#define  NR_MOTION_WEIGHT1_4_nr_motion_weight1_26_shift                          (20)
#define  NR_MOTION_WEIGHT1_4_nr_motion_weight1_27_shift                          (16)
#define  NR_MOTION_WEIGHT1_4_nr_motion_weight1_28_shift                          (12)
#define  NR_MOTION_WEIGHT1_4_nr_motion_weight1_29_shift                          (8)
#define  NR_MOTION_WEIGHT1_4_nr_motion_weight1_30_shift                          (4)
#define  NR_MOTION_WEIGHT1_4_nr_motion_weight1_31_shift                          (0)
#define  NR_MOTION_WEIGHT1_4_nr_motion_weight1_24_mask                           (0xF0000000)
#define  NR_MOTION_WEIGHT1_4_nr_motion_weight1_25_mask                           (0x0F000000)
#define  NR_MOTION_WEIGHT1_4_nr_motion_weight1_26_mask                           (0x00F00000)
#define  NR_MOTION_WEIGHT1_4_nr_motion_weight1_27_mask                           (0x000F0000)
#define  NR_MOTION_WEIGHT1_4_nr_motion_weight1_28_mask                           (0x0000F000)
#define  NR_MOTION_WEIGHT1_4_nr_motion_weight1_29_mask                           (0x00000F00)
#define  NR_MOTION_WEIGHT1_4_nr_motion_weight1_30_mask                           (0x000000F0)
#define  NR_MOTION_WEIGHT1_4_nr_motion_weight1_31_mask                           (0x0000000F)
#define  NR_MOTION_WEIGHT1_4_nr_motion_weight1_24(data)                          (0xF0000000&((data)<<28))
#define  NR_MOTION_WEIGHT1_4_nr_motion_weight1_25(data)                          (0x0F000000&((data)<<24))
#define  NR_MOTION_WEIGHT1_4_nr_motion_weight1_26(data)                          (0x00F00000&((data)<<20))
#define  NR_MOTION_WEIGHT1_4_nr_motion_weight1_27(data)                          (0x000F0000&((data)<<16))
#define  NR_MOTION_WEIGHT1_4_nr_motion_weight1_28(data)                          (0x0000F000&((data)<<12))
#define  NR_MOTION_WEIGHT1_4_nr_motion_weight1_29(data)                          (0x00000F00&((data)<<8))
#define  NR_MOTION_WEIGHT1_4_nr_motion_weight1_30(data)                          (0x000000F0&((data)<<4))
#define  NR_MOTION_WEIGHT1_4_nr_motion_weight1_31(data)                          (0x0000000F&(data))
#define  NR_MOTION_WEIGHT1_4_get_nr_motion_weight1_24(data)                      ((0xF0000000&(data))>>28)
#define  NR_MOTION_WEIGHT1_4_get_nr_motion_weight1_25(data)                      ((0x0F000000&(data))>>24)
#define  NR_MOTION_WEIGHT1_4_get_nr_motion_weight1_26(data)                      ((0x00F00000&(data))>>20)
#define  NR_MOTION_WEIGHT1_4_get_nr_motion_weight1_27(data)                      ((0x000F0000&(data))>>16)
#define  NR_MOTION_WEIGHT1_4_get_nr_motion_weight1_28(data)                      ((0x0000F000&(data))>>12)
#define  NR_MOTION_WEIGHT1_4_get_nr_motion_weight1_29(data)                      ((0x00000F00&(data))>>8)
#define  NR_MOTION_WEIGHT1_4_get_nr_motion_weight1_30(data)                      ((0x000000F0&(data))>>4)
#define  NR_MOTION_WEIGHT1_4_get_nr_motion_weight1_31(data)                      (0x0000000F&(data))

#define  NR_MOTION_WEIGHT2_1                                                    0x1802555C
#define  NR_MOTION_WEIGHT2_1_reg_addr                                            "0xB802555C"
#define  NR_MOTION_WEIGHT2_1_reg                                                 0xB802555C
#define  NR_MOTION_WEIGHT2_1_inst_addr                                           "0x0045"
#define  set_NR_MOTION_WEIGHT2_1_reg(data)                                       (*((volatile unsigned int*)NR_MOTION_WEIGHT2_1_reg)=data)
#define  get_NR_MOTION_WEIGHT2_1_reg                                             (*((volatile unsigned int*)NR_MOTION_WEIGHT2_1_reg))
#define  NR_MOTION_WEIGHT2_1_nr_motion_weight2_0_shift                           (28)
#define  NR_MOTION_WEIGHT2_1_nr_motion_weight2_1_shift                           (24)
#define  NR_MOTION_WEIGHT2_1_nr_motion_weight2_2_shift                           (20)
#define  NR_MOTION_WEIGHT2_1_nr_motion_weight2_3_shift                           (16)
#define  NR_MOTION_WEIGHT2_1_nr_motion_weight2_4_shift                           (12)
#define  NR_MOTION_WEIGHT2_1_nr_motion_weight2_5_shift                           (8)
#define  NR_MOTION_WEIGHT2_1_nr_motion_weight2_6_shift                           (4)
#define  NR_MOTION_WEIGHT2_1_nr_motion_weight2_7_shift                           (0)
#define  NR_MOTION_WEIGHT2_1_nr_motion_weight2_0_mask                            (0xF0000000)
#define  NR_MOTION_WEIGHT2_1_nr_motion_weight2_1_mask                            (0x0F000000)
#define  NR_MOTION_WEIGHT2_1_nr_motion_weight2_2_mask                            (0x00F00000)
#define  NR_MOTION_WEIGHT2_1_nr_motion_weight2_3_mask                            (0x000F0000)
#define  NR_MOTION_WEIGHT2_1_nr_motion_weight2_4_mask                            (0x0000F000)
#define  NR_MOTION_WEIGHT2_1_nr_motion_weight2_5_mask                            (0x00000F00)
#define  NR_MOTION_WEIGHT2_1_nr_motion_weight2_6_mask                            (0x000000F0)
#define  NR_MOTION_WEIGHT2_1_nr_motion_weight2_7_mask                            (0x0000000F)
#define  NR_MOTION_WEIGHT2_1_nr_motion_weight2_0(data)                           (0xF0000000&((data)<<28))
#define  NR_MOTION_WEIGHT2_1_nr_motion_weight2_1(data)                           (0x0F000000&((data)<<24))
#define  NR_MOTION_WEIGHT2_1_nr_motion_weight2_2(data)                           (0x00F00000&((data)<<20))
#define  NR_MOTION_WEIGHT2_1_nr_motion_weight2_3(data)                           (0x000F0000&((data)<<16))
#define  NR_MOTION_WEIGHT2_1_nr_motion_weight2_4(data)                           (0x0000F000&((data)<<12))
#define  NR_MOTION_WEIGHT2_1_nr_motion_weight2_5(data)                           (0x00000F00&((data)<<8))
#define  NR_MOTION_WEIGHT2_1_nr_motion_weight2_6(data)                           (0x000000F0&((data)<<4))
#define  NR_MOTION_WEIGHT2_1_nr_motion_weight2_7(data)                           (0x0000000F&(data))
#define  NR_MOTION_WEIGHT2_1_get_nr_motion_weight2_0(data)                       ((0xF0000000&(data))>>28)
#define  NR_MOTION_WEIGHT2_1_get_nr_motion_weight2_1(data)                       ((0x0F000000&(data))>>24)
#define  NR_MOTION_WEIGHT2_1_get_nr_motion_weight2_2(data)                       ((0x00F00000&(data))>>20)
#define  NR_MOTION_WEIGHT2_1_get_nr_motion_weight2_3(data)                       ((0x000F0000&(data))>>16)
#define  NR_MOTION_WEIGHT2_1_get_nr_motion_weight2_4(data)                       ((0x0000F000&(data))>>12)
#define  NR_MOTION_WEIGHT2_1_get_nr_motion_weight2_5(data)                       ((0x00000F00&(data))>>8)
#define  NR_MOTION_WEIGHT2_1_get_nr_motion_weight2_6(data)                       ((0x000000F0&(data))>>4)
#define  NR_MOTION_WEIGHT2_1_get_nr_motion_weight2_7(data)                       (0x0000000F&(data))

#define  NR_MOTION_WEIGHT2_2                                                    0x18025560
#define  NR_MOTION_WEIGHT2_2_reg_addr                                            "0xB8025560"
#define  NR_MOTION_WEIGHT2_2_reg                                                 0xB8025560
#define  NR_MOTION_WEIGHT2_2_inst_addr                                           "0x0046"
#define  set_NR_MOTION_WEIGHT2_2_reg(data)                                       (*((volatile unsigned int*)NR_MOTION_WEIGHT2_2_reg)=data)
#define  get_NR_MOTION_WEIGHT2_2_reg                                             (*((volatile unsigned int*)NR_MOTION_WEIGHT2_2_reg))
#define  NR_MOTION_WEIGHT2_2_nr_motion_weight2_8_shift                           (28)
#define  NR_MOTION_WEIGHT2_2_nr_motion_weight2_9_shift                           (24)
#define  NR_MOTION_WEIGHT2_2_nr_motion_weight2_10_shift                          (20)
#define  NR_MOTION_WEIGHT2_2_nr_motion_weight2_11_shift                          (16)
#define  NR_MOTION_WEIGHT2_2_nr_motion_weight2_12_shift                          (12)
#define  NR_MOTION_WEIGHT2_2_nr_motion_weight2_13_shift                          (8)
#define  NR_MOTION_WEIGHT2_2_nr_motion_weight2_14_shift                          (4)
#define  NR_MOTION_WEIGHT2_2_nr_motion_weight2_15_shift                          (0)
#define  NR_MOTION_WEIGHT2_2_nr_motion_weight2_8_mask                            (0xF0000000)
#define  NR_MOTION_WEIGHT2_2_nr_motion_weight2_9_mask                            (0x0F000000)
#define  NR_MOTION_WEIGHT2_2_nr_motion_weight2_10_mask                           (0x00F00000)
#define  NR_MOTION_WEIGHT2_2_nr_motion_weight2_11_mask                           (0x000F0000)
#define  NR_MOTION_WEIGHT2_2_nr_motion_weight2_12_mask                           (0x0000F000)
#define  NR_MOTION_WEIGHT2_2_nr_motion_weight2_13_mask                           (0x00000F00)
#define  NR_MOTION_WEIGHT2_2_nr_motion_weight2_14_mask                           (0x000000F0)
#define  NR_MOTION_WEIGHT2_2_nr_motion_weight2_15_mask                           (0x0000000F)
#define  NR_MOTION_WEIGHT2_2_nr_motion_weight2_8(data)                           (0xF0000000&((data)<<28))
#define  NR_MOTION_WEIGHT2_2_nr_motion_weight2_9(data)                           (0x0F000000&((data)<<24))
#define  NR_MOTION_WEIGHT2_2_nr_motion_weight2_10(data)                          (0x00F00000&((data)<<20))
#define  NR_MOTION_WEIGHT2_2_nr_motion_weight2_11(data)                          (0x000F0000&((data)<<16))
#define  NR_MOTION_WEIGHT2_2_nr_motion_weight2_12(data)                          (0x0000F000&((data)<<12))
#define  NR_MOTION_WEIGHT2_2_nr_motion_weight2_13(data)                          (0x00000F00&((data)<<8))
#define  NR_MOTION_WEIGHT2_2_nr_motion_weight2_14(data)                          (0x000000F0&((data)<<4))
#define  NR_MOTION_WEIGHT2_2_nr_motion_weight2_15(data)                          (0x0000000F&(data))
#define  NR_MOTION_WEIGHT2_2_get_nr_motion_weight2_8(data)                       ((0xF0000000&(data))>>28)
#define  NR_MOTION_WEIGHT2_2_get_nr_motion_weight2_9(data)                       ((0x0F000000&(data))>>24)
#define  NR_MOTION_WEIGHT2_2_get_nr_motion_weight2_10(data)                      ((0x00F00000&(data))>>20)
#define  NR_MOTION_WEIGHT2_2_get_nr_motion_weight2_11(data)                      ((0x000F0000&(data))>>16)
#define  NR_MOTION_WEIGHT2_2_get_nr_motion_weight2_12(data)                      ((0x0000F000&(data))>>12)
#define  NR_MOTION_WEIGHT2_2_get_nr_motion_weight2_13(data)                      ((0x00000F00&(data))>>8)
#define  NR_MOTION_WEIGHT2_2_get_nr_motion_weight2_14(data)                      ((0x000000F0&(data))>>4)
#define  NR_MOTION_WEIGHT2_2_get_nr_motion_weight2_15(data)                      (0x0000000F&(data))

#define  NR_MOTION_WEIGHT2_3                                                    0x18025564
#define  NR_MOTION_WEIGHT2_3_reg_addr                                            "0xB8025564"
#define  NR_MOTION_WEIGHT2_3_reg                                                 0xB8025564
#define  NR_MOTION_WEIGHT2_3_inst_addr                                           "0x0047"
#define  set_NR_MOTION_WEIGHT2_3_reg(data)                                       (*((volatile unsigned int*)NR_MOTION_WEIGHT2_3_reg)=data)
#define  get_NR_MOTION_WEIGHT2_3_reg                                             (*((volatile unsigned int*)NR_MOTION_WEIGHT2_3_reg))
#define  NR_MOTION_WEIGHT2_3_nr_motion_weight2_16_shift                          (28)
#define  NR_MOTION_WEIGHT2_3_nr_motion_weight2_17_shift                          (24)
#define  NR_MOTION_WEIGHT2_3_nr_motion_weight2_18_shift                          (20)
#define  NR_MOTION_WEIGHT2_3_nr_motion_weight2_19_shift                          (16)
#define  NR_MOTION_WEIGHT2_3_nr_motion_weight2_20_shift                          (12)
#define  NR_MOTION_WEIGHT2_3_nr_motion_weight2_21_shift                          (8)
#define  NR_MOTION_WEIGHT2_3_nr_motion_weight2_22_shift                          (4)
#define  NR_MOTION_WEIGHT2_3_nr_motion_weight2_23_shift                          (0)
#define  NR_MOTION_WEIGHT2_3_nr_motion_weight2_16_mask                           (0xF0000000)
#define  NR_MOTION_WEIGHT2_3_nr_motion_weight2_17_mask                           (0x0F000000)
#define  NR_MOTION_WEIGHT2_3_nr_motion_weight2_18_mask                           (0x00F00000)
#define  NR_MOTION_WEIGHT2_3_nr_motion_weight2_19_mask                           (0x000F0000)
#define  NR_MOTION_WEIGHT2_3_nr_motion_weight2_20_mask                           (0x0000F000)
#define  NR_MOTION_WEIGHT2_3_nr_motion_weight2_21_mask                           (0x00000F00)
#define  NR_MOTION_WEIGHT2_3_nr_motion_weight2_22_mask                           (0x000000F0)
#define  NR_MOTION_WEIGHT2_3_nr_motion_weight2_23_mask                           (0x0000000F)
#define  NR_MOTION_WEIGHT2_3_nr_motion_weight2_16(data)                          (0xF0000000&((data)<<28))
#define  NR_MOTION_WEIGHT2_3_nr_motion_weight2_17(data)                          (0x0F000000&((data)<<24))
#define  NR_MOTION_WEIGHT2_3_nr_motion_weight2_18(data)                          (0x00F00000&((data)<<20))
#define  NR_MOTION_WEIGHT2_3_nr_motion_weight2_19(data)                          (0x000F0000&((data)<<16))
#define  NR_MOTION_WEIGHT2_3_nr_motion_weight2_20(data)                          (0x0000F000&((data)<<12))
#define  NR_MOTION_WEIGHT2_3_nr_motion_weight2_21(data)                          (0x00000F00&((data)<<8))
#define  NR_MOTION_WEIGHT2_3_nr_motion_weight2_22(data)                          (0x000000F0&((data)<<4))
#define  NR_MOTION_WEIGHT2_3_nr_motion_weight2_23(data)                          (0x0000000F&(data))
#define  NR_MOTION_WEIGHT2_3_get_nr_motion_weight2_16(data)                      ((0xF0000000&(data))>>28)
#define  NR_MOTION_WEIGHT2_3_get_nr_motion_weight2_17(data)                      ((0x0F000000&(data))>>24)
#define  NR_MOTION_WEIGHT2_3_get_nr_motion_weight2_18(data)                      ((0x00F00000&(data))>>20)
#define  NR_MOTION_WEIGHT2_3_get_nr_motion_weight2_19(data)                      ((0x000F0000&(data))>>16)
#define  NR_MOTION_WEIGHT2_3_get_nr_motion_weight2_20(data)                      ((0x0000F000&(data))>>12)
#define  NR_MOTION_WEIGHT2_3_get_nr_motion_weight2_21(data)                      ((0x00000F00&(data))>>8)
#define  NR_MOTION_WEIGHT2_3_get_nr_motion_weight2_22(data)                      ((0x000000F0&(data))>>4)
#define  NR_MOTION_WEIGHT2_3_get_nr_motion_weight2_23(data)                      (0x0000000F&(data))

#define  NR_MOTION_WEIGHT2_4                                                    0x18025568
#define  NR_MOTION_WEIGHT2_4_reg_addr                                            "0xB8025568"
#define  NR_MOTION_WEIGHT2_4_reg                                                 0xB8025568
#define  NR_MOTION_WEIGHT2_4_inst_addr                                           "0x0048"
#define  set_NR_MOTION_WEIGHT2_4_reg(data)                                       (*((volatile unsigned int*)NR_MOTION_WEIGHT2_4_reg)=data)
#define  get_NR_MOTION_WEIGHT2_4_reg                                             (*((volatile unsigned int*)NR_MOTION_WEIGHT2_4_reg))
#define  NR_MOTION_WEIGHT2_4_nr_motion_weight2_24_shift                          (28)
#define  NR_MOTION_WEIGHT2_4_nr_motion_weight2_25_shift                          (24)
#define  NR_MOTION_WEIGHT2_4_nr_motion_weight2_26_shift                          (20)
#define  NR_MOTION_WEIGHT2_4_nr_motion_weight2_27_shift                          (16)
#define  NR_MOTION_WEIGHT2_4_nr_motion_weight2_28_shift                          (12)
#define  NR_MOTION_WEIGHT2_4_nr_motion_weight2_29_shift                          (8)
#define  NR_MOTION_WEIGHT2_4_nr_motion_weight2_30_shift                          (4)
#define  NR_MOTION_WEIGHT2_4_nr_motion_weight2_31_shift                          (0)
#define  NR_MOTION_WEIGHT2_4_nr_motion_weight2_24_mask                           (0xF0000000)
#define  NR_MOTION_WEIGHT2_4_nr_motion_weight2_25_mask                           (0x0F000000)
#define  NR_MOTION_WEIGHT2_4_nr_motion_weight2_26_mask                           (0x00F00000)
#define  NR_MOTION_WEIGHT2_4_nr_motion_weight2_27_mask                           (0x000F0000)
#define  NR_MOTION_WEIGHT2_4_nr_motion_weight2_28_mask                           (0x0000F000)
#define  NR_MOTION_WEIGHT2_4_nr_motion_weight2_29_mask                           (0x00000F00)
#define  NR_MOTION_WEIGHT2_4_nr_motion_weight2_30_mask                           (0x000000F0)
#define  NR_MOTION_WEIGHT2_4_nr_motion_weight2_31_mask                           (0x0000000F)
#define  NR_MOTION_WEIGHT2_4_nr_motion_weight2_24(data)                          (0xF0000000&((data)<<28))
#define  NR_MOTION_WEIGHT2_4_nr_motion_weight2_25(data)                          (0x0F000000&((data)<<24))
#define  NR_MOTION_WEIGHT2_4_nr_motion_weight2_26(data)                          (0x00F00000&((data)<<20))
#define  NR_MOTION_WEIGHT2_4_nr_motion_weight2_27(data)                          (0x000F0000&((data)<<16))
#define  NR_MOTION_WEIGHT2_4_nr_motion_weight2_28(data)                          (0x0000F000&((data)<<12))
#define  NR_MOTION_WEIGHT2_4_nr_motion_weight2_29(data)                          (0x00000F00&((data)<<8))
#define  NR_MOTION_WEIGHT2_4_nr_motion_weight2_30(data)                          (0x000000F0&((data)<<4))
#define  NR_MOTION_WEIGHT2_4_nr_motion_weight2_31(data)                          (0x0000000F&(data))
#define  NR_MOTION_WEIGHT2_4_get_nr_motion_weight2_24(data)                      ((0xF0000000&(data))>>28)
#define  NR_MOTION_WEIGHT2_4_get_nr_motion_weight2_25(data)                      ((0x0F000000&(data))>>24)
#define  NR_MOTION_WEIGHT2_4_get_nr_motion_weight2_26(data)                      ((0x00F00000&(data))>>20)
#define  NR_MOTION_WEIGHT2_4_get_nr_motion_weight2_27(data)                      ((0x000F0000&(data))>>16)
#define  NR_MOTION_WEIGHT2_4_get_nr_motion_weight2_28(data)                      ((0x0000F000&(data))>>12)
#define  NR_MOTION_WEIGHT2_4_get_nr_motion_weight2_29(data)                      ((0x00000F00&(data))>>8)
#define  NR_MOTION_WEIGHT2_4_get_nr_motion_weight2_30(data)                      ((0x000000F0&(data))>>4)
#define  NR_MOTION_WEIGHT2_4_get_nr_motion_weight2_31(data)                      (0x0000000F&(data))

#define  NR_snr_Timing_monitor_ctrl                                             0x1802556C
#define  NR_snr_Timing_monitor_ctrl_reg_addr                                     "0xB802556C"
#define  NR_snr_Timing_monitor_ctrl_reg                                          0xB802556C
#define  NR_snr_Timing_monitor_ctrl_inst_addr                                    "0x0049"
#define  set_NR_snr_Timing_monitor_ctrl_reg(data)                                (*((volatile unsigned int*)NR_snr_Timing_monitor_ctrl_reg)=data)
#define  get_NR_snr_Timing_monitor_ctrl_reg                                      (*((volatile unsigned int*)NR_snr_Timing_monitor_ctrl_reg))
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_en_shift                      (31)
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_i2rnd_mode_shift              (29)
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_src_shift                     (28)
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_unit_shift                    (27)
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_multi_mode_shift              (26)
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_compare_shift                 (24)
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_sta0_shift                    (12)
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_end0_shift                    (8)
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_sta1_shift                    (4)
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_end1_shift                    (0)
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_en_mask                       (0x80000000)
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_i2rnd_mode_mask               (0x60000000)
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_src_mask                      (0x10000000)
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_unit_mask                     (0x08000000)
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_multi_mode_mask               (0x04000000)
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_compare_mask                  (0x03000000)
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_sta0_mask                     (0x0000F000)
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_end0_mask                     (0x00000F00)
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_sta1_mask                     (0x000000F0)
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_end1_mask                     (0x0000000F)
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_en(data)                      (0x80000000&((data)<<31))
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_i2rnd_mode(data)              (0x60000000&((data)<<29))
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_src(data)                     (0x10000000&((data)<<28))
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_unit(data)                    (0x08000000&((data)<<27))
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_multi_mode(data)              (0x04000000&((data)<<26))
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_compare(data)                 (0x03000000&((data)<<24))
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_sta0(data)                    (0x0000F000&((data)<<12))
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_end0(data)                    (0x00000F00&((data)<<8))
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_sta1(data)                    (0x000000F0&((data)<<4))
#define  NR_snr_Timing_monitor_ctrl_timing_monitor_end1(data)                    (0x0000000F&(data))
#define  NR_snr_Timing_monitor_ctrl_get_timing_monitor_en(data)                  ((0x80000000&(data))>>31)
#define  NR_snr_Timing_monitor_ctrl_get_timing_monitor_i2rnd_mode(data)          ((0x60000000&(data))>>29)
#define  NR_snr_Timing_monitor_ctrl_get_timing_monitor_src(data)                 ((0x10000000&(data))>>28)
#define  NR_snr_Timing_monitor_ctrl_get_timing_monitor_unit(data)                ((0x08000000&(data))>>27)
#define  NR_snr_Timing_monitor_ctrl_get_timing_monitor_multi_mode(data)          ((0x04000000&(data))>>26)
#define  NR_snr_Timing_monitor_ctrl_get_timing_monitor_compare(data)             ((0x03000000&(data))>>24)
#define  NR_snr_Timing_monitor_ctrl_get_timing_monitor_sta0(data)                ((0x0000F000&(data))>>12)
#define  NR_snr_Timing_monitor_ctrl_get_timing_monitor_end0(data)                ((0x00000F00&(data))>>8)
#define  NR_snr_Timing_monitor_ctrl_get_timing_monitor_sta1(data)                ((0x000000F0&(data))>>4)
#define  NR_snr_Timing_monitor_ctrl_get_timing_monitor_end1(data)                (0x0000000F&(data))

#define  NR_snr_Timing_monitor_multi                                            0x18025570
#define  NR_snr_Timing_monitor_multi_reg_addr                                    "0xB8025570"
#define  NR_snr_Timing_monitor_multi_reg                                         0xB8025570
#define  NR_snr_Timing_monitor_multi_inst_addr                                   "0x004A"
#define  set_NR_snr_Timing_monitor_multi_reg(data)                               (*((volatile unsigned int*)NR_snr_Timing_monitor_multi_reg)=data)
#define  get_NR_snr_Timing_monitor_multi_reg                                     (*((volatile unsigned int*)NR_snr_Timing_monitor_multi_reg))
#define  NR_snr_Timing_monitor_multi_timing_monitor_sta2_shift                   (28)
#define  NR_snr_Timing_monitor_multi_timing_monitor_end2_shift                   (24)
#define  NR_snr_Timing_monitor_multi_timing_monitor_sta3_shift                   (20)
#define  NR_snr_Timing_monitor_multi_timing_monitor_end3_shift                   (16)
#define  NR_snr_Timing_monitor_multi_timing_monitor_sta4_shift                   (12)
#define  NR_snr_Timing_monitor_multi_timing_monitor_end4_shift                   (8)
#define  NR_snr_Timing_monitor_multi_timing_monitor_sta5_shift                   (4)
#define  NR_snr_Timing_monitor_multi_timing_monitor_end5_shift                   (0)
#define  NR_snr_Timing_monitor_multi_timing_monitor_sta2_mask                    (0xF0000000)
#define  NR_snr_Timing_monitor_multi_timing_monitor_end2_mask                    (0x0F000000)
#define  NR_snr_Timing_monitor_multi_timing_monitor_sta3_mask                    (0x00F00000)
#define  NR_snr_Timing_monitor_multi_timing_monitor_end3_mask                    (0x000F0000)
#define  NR_snr_Timing_monitor_multi_timing_monitor_sta4_mask                    (0x0000F000)
#define  NR_snr_Timing_monitor_multi_timing_monitor_end4_mask                    (0x00000F00)
#define  NR_snr_Timing_monitor_multi_timing_monitor_sta5_mask                    (0x000000F0)
#define  NR_snr_Timing_monitor_multi_timing_monitor_end5_mask                    (0x0000000F)
#define  NR_snr_Timing_monitor_multi_timing_monitor_sta2(data)                   (0xF0000000&((data)<<28))
#define  NR_snr_Timing_monitor_multi_timing_monitor_end2(data)                   (0x0F000000&((data)<<24))
#define  NR_snr_Timing_monitor_multi_timing_monitor_sta3(data)                   (0x00F00000&((data)<<20))
#define  NR_snr_Timing_monitor_multi_timing_monitor_end3(data)                   (0x000F0000&((data)<<16))
#define  NR_snr_Timing_monitor_multi_timing_monitor_sta4(data)                   (0x0000F000&((data)<<12))
#define  NR_snr_Timing_monitor_multi_timing_monitor_end4(data)                   (0x00000F00&((data)<<8))
#define  NR_snr_Timing_monitor_multi_timing_monitor_sta5(data)                   (0x000000F0&((data)<<4))
#define  NR_snr_Timing_monitor_multi_timing_monitor_end5(data)                   (0x0000000F&(data))
#define  NR_snr_Timing_monitor_multi_get_timing_monitor_sta2(data)               ((0xF0000000&(data))>>28)
#define  NR_snr_Timing_monitor_multi_get_timing_monitor_end2(data)               ((0x0F000000&(data))>>24)
#define  NR_snr_Timing_monitor_multi_get_timing_monitor_sta3(data)               ((0x00F00000&(data))>>20)
#define  NR_snr_Timing_monitor_multi_get_timing_monitor_end3(data)               ((0x000F0000&(data))>>16)
#define  NR_snr_Timing_monitor_multi_get_timing_monitor_sta4(data)               ((0x0000F000&(data))>>12)
#define  NR_snr_Timing_monitor_multi_get_timing_monitor_end4(data)               ((0x00000F00&(data))>>8)
#define  NR_snr_Timing_monitor_multi_get_timing_monitor_sta5(data)               ((0x000000F0&(data))>>4)
#define  NR_snr_Timing_monitor_multi_get_timing_monitor_end5(data)               (0x0000000F&(data))

#define  NR_snr_Timing_monitor_compare_th                                       0x18025574
#define  NR_snr_Timing_monitor_compare_th_reg_addr                               "0xB8025574"
#define  NR_snr_Timing_monitor_compare_th_reg                                    0xB8025574
#define  NR_snr_Timing_monitor_compare_th_inst_addr                              "0x004B"
#define  set_NR_snr_Timing_monitor_compare_th_reg(data)                          (*((volatile unsigned int*)NR_snr_Timing_monitor_compare_th_reg)=data)
#define  get_NR_snr_Timing_monitor_compare_th_reg                                (*((volatile unsigned int*)NR_snr_Timing_monitor_compare_th_reg))
#define  NR_snr_Timing_monitor_compare_th_t_m_compare_th_shift                   (0)
#define  NR_snr_Timing_monitor_compare_th_t_m_compare_th_mask                    (0x0FFFFFFF)
#define  NR_snr_Timing_monitor_compare_th_t_m_compare_th(data)                   (0x0FFFFFFF&(data))
#define  NR_snr_Timing_monitor_compare_th_get_t_m_compare_th(data)               (0x0FFFFFFF&(data))

#define  NR_snr_Timing_monitor_golden                                           0x18025578
#define  NR_snr_Timing_monitor_golden_reg_addr                                   "0xB8025578"
#define  NR_snr_Timing_monitor_golden_reg                                        0xB8025578
#define  NR_snr_Timing_monitor_golden_inst_addr                                  "0x004C"
#define  set_NR_snr_Timing_monitor_golden_reg(data)                              (*((volatile unsigned int*)NR_snr_Timing_monitor_golden_reg)=data)
#define  get_NR_snr_Timing_monitor_golden_reg                                    (*((volatile unsigned int*)NR_snr_Timing_monitor_golden_reg))
#define  NR_snr_Timing_monitor_golden_t_m_golden_shift                           (0)
#define  NR_snr_Timing_monitor_golden_t_m_golden_mask                            (0x0FFFFFFF)
#define  NR_snr_Timing_monitor_golden_t_m_golden(data)                           (0x0FFFFFFF&(data))
#define  NR_snr_Timing_monitor_golden_get_t_m_golden(data)                       (0x0FFFFFFF&(data))

#define  NR_snr_Timing_monitor_result1                                          0x1802557C
#define  NR_snr_Timing_monitor_result1_reg_addr                                  "0xB802557C"
#define  NR_snr_Timing_monitor_result1_reg                                       0xB802557C
#define  NR_snr_Timing_monitor_result1_inst_addr                                 "0x004D"
#define  set_NR_snr_Timing_monitor_result1_reg(data)                             (*((volatile unsigned int*)NR_snr_Timing_monitor_result1_reg)=data)
#define  get_NR_snr_Timing_monitor_result1_reg                                   (*((volatile unsigned int*)NR_snr_Timing_monitor_result1_reg))
#define  NR_snr_Timing_monitor_result1_t_m_result_previous1_shift                (0)
#define  NR_snr_Timing_monitor_result1_t_m_result_previous1_mask                 (0x0FFFFFFF)
#define  NR_snr_Timing_monitor_result1_t_m_result_previous1(data)                (0x0FFFFFFF&(data))
#define  NR_snr_Timing_monitor_result1_get_t_m_result_previous1(data)            (0x0FFFFFFF&(data))

#define  NR_snr_Timing_monitor_result2                                          0x18025580
#define  NR_snr_Timing_monitor_result2_reg_addr                                  "0xB8025580"
#define  NR_snr_Timing_monitor_result2_reg                                       0xB8025580
#define  NR_snr_Timing_monitor_result2_inst_addr                                 "0x004E"
#define  set_NR_snr_Timing_monitor_result2_reg(data)                             (*((volatile unsigned int*)NR_snr_Timing_monitor_result2_reg)=data)
#define  get_NR_snr_Timing_monitor_result2_reg                                   (*((volatile unsigned int*)NR_snr_Timing_monitor_result2_reg))
#define  NR_snr_Timing_monitor_result2_t_m_result_previous2_shift                (0)
#define  NR_snr_Timing_monitor_result2_t_m_result_previous2_mask                 (0x0FFFFFFF)
#define  NR_snr_Timing_monitor_result2_t_m_result_previous2(data)                (0x0FFFFFFF&(data))
#define  NR_snr_Timing_monitor_result2_get_t_m_result_previous2(data)            (0x0FFFFFFF&(data))

#define  NR_snr_Timing_monitor_result3                                          0x18025584
#define  NR_snr_Timing_monitor_result3_reg_addr                                  "0xB8025584"
#define  NR_snr_Timing_monitor_result3_reg                                       0xB8025584
#define  NR_snr_Timing_monitor_result3_inst_addr                                 "0x004F"
#define  set_NR_snr_Timing_monitor_result3_reg(data)                             (*((volatile unsigned int*)NR_snr_Timing_monitor_result3_reg)=data)
#define  get_NR_snr_Timing_monitor_result3_reg                                   (*((volatile unsigned int*)NR_snr_Timing_monitor_result3_reg))
#define  NR_snr_Timing_monitor_result3_t_m_result_previous3_shift                (0)
#define  NR_snr_Timing_monitor_result3_t_m_result_previous3_mask                 (0x0FFFFFFF)
#define  NR_snr_Timing_monitor_result3_t_m_result_previous3(data)                (0x0FFFFFFF&(data))
#define  NR_snr_Timing_monitor_result3_get_t_m_result_previous3(data)            (0x0FFFFFFF&(data))

#define  NR_snr_Timing_monitor_result4                                          0x18025588
#define  NR_snr_Timing_monitor_result4_reg_addr                                  "0xB8025588"
#define  NR_snr_Timing_monitor_result4_reg                                       0xB8025588
#define  NR_snr_Timing_monitor_result4_inst_addr                                 "0x0050"
#define  set_NR_snr_Timing_monitor_result4_reg(data)                             (*((volatile unsigned int*)NR_snr_Timing_monitor_result4_reg)=data)
#define  get_NR_snr_Timing_monitor_result4_reg                                   (*((volatile unsigned int*)NR_snr_Timing_monitor_result4_reg))
#define  NR_snr_Timing_monitor_result4_t_m_result_previous4_shift                (0)
#define  NR_snr_Timing_monitor_result4_t_m_result_previous4_mask                 (0x0FFFFFFF)
#define  NR_snr_Timing_monitor_result4_t_m_result_previous4(data)                (0x0FFFFFFF&(data))
#define  NR_snr_Timing_monitor_result4_get_t_m_result_previous4(data)            (0x0FFFFFFF&(data))

#define  NR_snr_Timing_monitor_max                                              0x1802558C
#define  NR_snr_Timing_monitor_max_reg_addr                                      "0xB802558C"
#define  NR_snr_Timing_monitor_max_reg                                           0xB802558C
#define  NR_snr_Timing_monitor_max_inst_addr                                     "0x0051"
#define  set_NR_snr_Timing_monitor_max_reg(data)                                 (*((volatile unsigned int*)NR_snr_Timing_monitor_max_reg)=data)
#define  get_NR_snr_Timing_monitor_max_reg                                       (*((volatile unsigned int*)NR_snr_Timing_monitor_max_reg))
#define  NR_snr_Timing_monitor_max_t_m_result_max_shift                          (0)
#define  NR_snr_Timing_monitor_max_t_m_result_max_mask                           (0x0FFFFFFF)
#define  NR_snr_Timing_monitor_max_t_m_result_max(data)                          (0x0FFFFFFF&(data))
#define  NR_snr_Timing_monitor_max_get_t_m_result_max(data)                      (0x0FFFFFFF&(data))

#define  NR_snr_Timing_monitor_min                                              0x18025590
#define  NR_snr_Timing_monitor_min_reg_addr                                      "0xB8025590"
#define  NR_snr_Timing_monitor_min_reg                                           0xB8025590
#define  NR_snr_Timing_monitor_min_inst_addr                                     "0x0052"
#define  set_NR_snr_Timing_monitor_min_reg(data)                                 (*((volatile unsigned int*)NR_snr_Timing_monitor_min_reg)=data)
#define  get_NR_snr_Timing_monitor_min_reg                                       (*((volatile unsigned int*)NR_snr_Timing_monitor_min_reg))
#define  NR_snr_Timing_monitor_min_t_m_result_min_shift                          (0)
#define  NR_snr_Timing_monitor_min_t_m_result_min_mask                           (0x0FFFFFFF)
#define  NR_snr_Timing_monitor_min_t_m_result_min(data)                          (0x0FFFFFFF&(data))
#define  NR_snr_Timing_monitor_min_get_t_m_result_min(data)                      (0x0FFFFFFF&(data))

#define  NR_snr_Timing_monitor_st                                               0x18025594
#define  NR_snr_Timing_monitor_st_reg_addr                                       "0xB8025594"
#define  NR_snr_Timing_monitor_st_reg                                            0xB8025594
#define  NR_snr_Timing_monitor_st_inst_addr                                      "0x0053"
#define  set_NR_snr_Timing_monitor_st_reg(data)                                  (*((volatile unsigned int*)NR_snr_Timing_monitor_st_reg)=data)
#define  get_NR_snr_Timing_monitor_st_reg                                        (*((volatile unsigned int*)NR_snr_Timing_monitor_st_reg))
#define  NR_snr_Timing_monitor_st_compare_hit_shift                              (2)
#define  NR_snr_Timing_monitor_st_hsync_hit_den_error_shift                      (1)
#define  NR_snr_Timing_monitor_st_vsync_hit_den_error_shift                      (0)
#define  NR_snr_Timing_monitor_st_compare_hit_mask                               (0x00000004)
#define  NR_snr_Timing_monitor_st_hsync_hit_den_error_mask                       (0x00000002)
#define  NR_snr_Timing_monitor_st_vsync_hit_den_error_mask                       (0x00000001)
#define  NR_snr_Timing_monitor_st_compare_hit(data)                              (0x00000004&((data)<<2))
#define  NR_snr_Timing_monitor_st_hsync_hit_den_error(data)                      (0x00000002&((data)<<1))
#define  NR_snr_Timing_monitor_st_vsync_hit_den_error(data)                      (0x00000001&(data))
#define  NR_snr_Timing_monitor_st_get_compare_hit(data)                          ((0x00000004&(data))>>2)
#define  NR_snr_Timing_monitor_st_get_hsync_hit_den_error(data)                  ((0x00000002&(data))>>1)
#define  NR_snr_Timing_monitor_st_get_vsync_hit_den_error(data)                  (0x00000001&(data))

#define  NR_NR_DUMMY                                                            0x18025598
#define  NR_NR_DUMMY_reg_addr                                                    "0xB8025598"
#define  NR_NR_DUMMY_reg                                                         0xB8025598
#define  NR_NR_DUMMY_inst_addr                                                   "0x0054"
#define  set_NR_NR_DUMMY_reg(data)                                               (*((volatile unsigned int*)NR_NR_DUMMY_reg)=data)
#define  get_NR_NR_DUMMY_reg                                                     (*((volatile unsigned int*)NR_NR_DUMMY_reg))
#define  NR_NR_DUMMY_dummy_31_16_shift                                           (16)
#define  NR_NR_DUMMY_dummy_d0_shift                                              (0)
#define  NR_NR_DUMMY_dummy_31_16_mask                                            (0xFFFF0000)
#define  NR_NR_DUMMY_dummy_d0_mask                                               (0x0000FFFF)
#define  NR_NR_DUMMY_dummy_31_16(data)                                           (0xFFFF0000&((data)<<16))
#define  NR_NR_DUMMY_dummy_d0(data)                                              (0x0000FFFF&(data))
#define  NR_NR_DUMMY_get_dummy_31_16(data)                                       ((0xFFFF0000&(data))>>16)
#define  NR_NR_DUMMY_get_dummy_d0(data)                                          (0x0000FFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======NR register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  cp_debugmode:4;
        RBus_UInt32  cp_debugmode_en:1;
    };
}nr_dch1_debugmode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  vc_snr_lpf_sel:3;
        RBus_UInt32  cp_sresultweight:4;
        RBus_UInt32  res2:12;
        RBus_UInt32  cp_zoranweighty_sel:2;
        RBus_UInt32  cp_zoranweightc_sel:2;
        RBus_UInt32  vc_nr_maxmin_range_sel:1;
        RBus_UInt32  sresultweight_adjust_shift:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  cp_spatialenabley:1;
        RBus_UInt32  cp_spatialenablec:1;
        RBus_UInt32  res4:1;
    };
}nr_dch1_cp_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_spatialthlyx2:8;
        RBus_UInt32  cp_spatialthlcx2:8;
        RBus_UInt32  cp_spatialthly:8;
        RBus_UInt32  cp_spatialthlc:8;
    };
}nr_dch1_spatial_thl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  cp_spatialthlyx4:8;
        RBus_UInt32  cp_spatialthlcx4:8;
    };
}nr_dch1_spatial_thl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_lpresultweightc:4;
        RBus_UInt32  res1:7;
        RBus_UInt32  cp_weight1y:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  cp_weight2y:5;
        RBus_UInt32  res3:2;
        RBus_UInt32  cp_fixedweight1y:1;
        RBus_UInt32  cp_fixedweight2y:1;
        RBus_UInt32  res4:4;
    };
}nr_dch1_spatial_weight_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  mpegnr_db_apply:1;
        RBus_UInt32  mpegnr_db_rd_sel:1;
        RBus_UInt32  mpegnr_db_en:1;
    };
}nr_v_mpegnr_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_mpglowerbound:8;
        RBus_UInt32  cp_mpgupperbound:10;
        RBus_UInt32  cp_mpglpmode:2;
        RBus_UInt32  res1:1;
        RBus_UInt32  cp_mpgidx_y:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  cp_mpegresultweight_y:3;
        RBus_UInt32  res3:2;
        RBus_UInt32  cp_mpegenable_y_c:1;
        RBus_UInt32  cp_mpegenable_y_y:1;
    };
}nr_dch1_mpegnr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_mpgub_dec_sel:1;
        RBus_UInt32  cp_mpgub_difcmp_en:3;
        RBus_UInt32  cp_mpgub_difcen_en:2;
        RBus_UInt32  res1:10;
        RBus_UInt32  cp_mpgupperbound_offset:8;
        RBus_UInt32  res2:2;
        RBus_UInt32  cp_mpgupperbound_gain:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  cp_mpgdiffsum_range:3;
    };
}nr_dch1_mpegnr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  cp_mpgver_blend_mpegai:1;
    };
}nr_dch1_mpegnr3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  cp_mpgver_blend_yini:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  cp_mpgver_blend_ystep:15;
    };
}nr_dch1_blend_nr_ver_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  cp_mpgub_delta2:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  cp_mpgub_delta1:10;
    };
}nr_dch1_mpegnr_ub_delta1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  cp_mpgub_delta3:10;
    };
}nr_dch1_mpegnr_ub_delta2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  cp_mpgver_diff_th_high:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  cp_mpgver_diff_th_low:10;
    };
}nr_dch1_mpegnr_diff_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  cp_mpgver_diff_gain_high:3;
        RBus_UInt32  res2:13;
        RBus_UInt32  cp_mpgver_diff_gain_low:3;
    };
}nr_dch1_mpegnr_diff_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  cp_mpgub_difcmp_gain:3;
        RBus_UInt32  res2:6;
        RBus_UInt32  cp_mpgub_difcmp_offset:10;
    };
}nr_dch1_mpegnr_diff_cmp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  cp_visthorend:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  cp_vistverend:13;
    };
}nr_dch1_vist_blking_range_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  cp_vistvor_diff_th_hlh:10;
    };
}nr_dch1_det_hist_vor_thd_hlh_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  cp_vistveroffset:3;
        RBus_UInt32  cp_vistveren:1;
        RBus_UInt32  cp_vist2step:3;
    };
}nr_dch1_mpegstart_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  cp_visthor_det_offset:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  cp_visthor_det_yini:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  cp_visthor_det_ystep:15;
    };
}nr_dch1_det_vist_hor_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  cp_visthor_diff_th_high:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  cp_visthor_diff_th_low:10;
    };
}nr_dch1_det_hist_hor_thd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  mpegnr_vdeblk_ls:1;
        RBus_UInt32  mpegnr_vdeblk_rme:1;
        RBus_UInt32  mpegnr_vdeblk_rm:4;
        RBus_UInt32  res2:2;
        RBus_UInt32  mpegnr_vdeblk_bist_fail:1;
        RBus_UInt32  mpegnr_vdeblk_drf_bist_fail:1;
    };
}nr_dch1_mpegnr_mbist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  cp_viscntver0:20;
    };
}nr_dch1_viscntver0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  cp_viscntver1:20;
    };
}nr_dch1_viscntver1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  cp_viscntver2:20;
    };
}nr_dch1_viscntver2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  cp_viscntver3:20;
    };
}nr_dch1_viscntver3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  cp_viscntver4:20;
    };
}nr_dch1_viscntver4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  cp_viscntver5:20;
    };
}nr_dch1_viscntver5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  cp_viscntver6:20;
    };
}nr_dch1_viscntver6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  cp_viscntver7:20;
    };
}nr_dch1_viscntver7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  cp_mpgupperbound_client:10;
    };
}nr_dch1_mpgub_client_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_mpgfw1:32;
    };
}nr_dch1_cp_mpgfw1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_mpgfw2:32;
    };
}nr_dch1_cp_mpgfw2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  curvemappingmode_en:1;
    };
}nr_curve_mapping_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  curvemapping_step1:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  curvemapping_step2:9;
    };
}nr_curve_mapping_step_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  curvemapping_step3:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  curvemapping_step4:9;
    };
}nr_curve_mapping_step_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  curvemapping_step5:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  curvemapping_step6:9;
    };
}nr_curve_mapping_step_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  curvemapping_step7:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  curvemapping_step8:9;
    };
}nr_curve_mapping_step_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  curvemapping_w1_0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  curvemapping_w1_1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  curvemapping_w1_2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  curvemapping_w1_3:5;
    };
}nr_curve_mapping_w1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  curvemapping_w1_4:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  curvemapping_w1_5:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  curvemapping_w1_6:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  curvemapping_w1_7:5;
    };
}nr_curve_mapping_w1_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  curvemapping_w1_8:5;
    };
}nr_curve_mapping_w1_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  curvemapping_w2_0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  curvemapping_w2_1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  curvemapping_w2_2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  curvemapping_w2_3:5;
    };
}nr_curve_mapping_w2_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  curvemapping_w2_4:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  curvemapping_w2_5:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  curvemapping_w2_6:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  curvemapping_w2_7:5;
    };
}nr_curve_mapping_w2_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  curvemapping_w2_8:5;
    };
}nr_curve_mapping_w2_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  snr_db_apply:1;
        RBus_UInt32  snr_db_rd_sel:1;
        RBus_UInt32  snr_db_en:1;
    };
}nr_snr_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mnr_adjustnoiselevel_bytype:1;
        RBus_UInt32  mnr_vardiff_refine_2dsearch:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  mnr_lpf_sel:3;
        RBus_UInt32  res2:15;
        RBus_UInt32  mosquitonr_edge_strength_gain:3;
        RBus_UInt32  mosquitonr_weight:4;
        RBus_UInt32  mosquitonr_blending_mode:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  mosquitonr_vertical_en:1;
        RBus_UInt32  mosquito_detect_en:1;
    };
}nr_mosquito_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  mnr_keepedge_shift:3;
        RBus_UInt32  res2:2;
        RBus_UInt32  mnr_keepedgethd_step:6;
        RBus_UInt32  mnr_keepedgethd:8;
    };
}nr_mosquito_nr_keep_edge_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  mnr_nlevel_maxfrac_mode:2;
        RBus_UInt32  res2:3;
        RBus_UInt32  mosquitonr_nlevel_negative_offset:8;
        RBus_UInt32  mosquitonr_nlevel_positive_offset:8;
        RBus_UInt32  mosquitonr_nlevel_negative_shift:4;
        RBus_UInt32  mosquitonr_nlevel_positive_shift:4;
    };
}nr_mosquito_nr_level_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  edge_lpf_en:1;
        RBus_UInt32  noise_level_mode:1;
        RBus_UInt32  farvar_faredge_refine_en:1;
        RBus_UInt32  noise_level_trim:2;
        RBus_UInt32  far_var_gain:3;
        RBus_UInt32  far_var_offset:8;
        RBus_UInt32  res1:1;
        RBus_UInt32  mnr_var2d_byedge:1;
        RBus_UInt32  mnr_shp_en:1;
        RBus_UInt32  nlevel_diff_factor_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  blendsnr_byedge_en:1;
        RBus_UInt32  hdiff_frac_half_range:3;
        RBus_UInt32  vdiff_frac_shift:3;
        RBus_UInt32  mnr_xrange_ext:1;
        RBus_UInt32  hdiff_frac_shift:3;
    };
}nr_mosquito_nr_level_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  mnr_vdecay_step:3;
        RBus_UInt32  mnr_vdecay_start:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  mnr_hdecay_step:3;
        RBus_UInt32  mnr_hdecay_start:4;
        RBus_UInt32  res3:2;
        RBus_UInt32  mnr_decay_allcomp_en:1;
        RBus_UInt32  mnr_decay_en:1;
    };
}nr_mosquito_nr_decay_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mnr_edgethd8:8;
        RBus_UInt32  mnr_edgethd7:8;
        RBus_UInt32  mnr_edgethd6:8;
        RBus_UInt32  mnr_edgethd5:8;
    };
}nr_mosquito_nr_edge_thd_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mnr_edgethd4:8;
        RBus_UInt32  mnr_edgethd3:8;
        RBus_UInt32  mnr_edgethd2:8;
        RBus_UInt32  mnr_edgethd1:8;
    };
}nr_mosquito_nr_edge_thd_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mnr_oneside_edge_en:1;
        RBus_UInt32  mnr_oneside_edge_vertical_en:1;
        RBus_UInt32  mnr_oneside_edge_strength_gain:3;
        RBus_UInt32  mnr_oneside_edge_keepedge_shift:3;
        RBus_UInt32  mnr_nlevel_mid_offset:8;
        RBus_UInt32  mnr_nlevel_mid_shift:4;
        RBus_UInt32  mnr_oneside_edge_nlevel_positive_offset:8;
        RBus_UInt32  mnr_oneside_edge_nlevel_positive_shift:4;
    };
}nr_mosquito_nr_oneside_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mnr_oneside_edge_nlevel_negative_offset:8;
        RBus_UInt32  mnr_oneside_edge_nlevel_negative_shift:4;
        RBus_UInt32  mnr_oneside_edge_maxedgestep:5;
        RBus_UInt32  mnr_oneside_edge_edgelevelgain:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  mnr_oneside_edge_flatvarianceshift:2;
        RBus_UInt32  mnr_oneside_edge_flatvarianceth:9;
    };
}nr_mosquito_nr_oneside_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  mnr_oneside_edge_nlevel_upbnd_en:1;
        RBus_UInt32  mnr_oneside_edge_nlevel_upbnd_startth:7;
        RBus_UInt32  res2:4;
        RBus_UInt32  mnr_var_diff_th:4;
        RBus_UInt32  res3:1;
        RBus_UInt32  mnr_vardiff_refine_gain_positive:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  mnr_vardiff_refine_gain_negative:3;
    };
}nr_mosquito_nr_oneside_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mnr_oneside_edge_nlevel_upbnd_gain:3;
        RBus_UInt32  mnr_oneside_edge_nlevel_upbnd_offset:8;
        RBus_UInt32  mnr_oneside_edge_nlevel_lobnd_en:1;
        RBus_UInt32  mnr_oneside_edge_nlevel_lobnd_startth:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  mnr_oneside_edge_nlevel_lobnd_gain:3;
        RBus_UInt32  mnr_oneside_edge_nlevel_lobnd_offset:8;
    };
}nr_mosquito_nr_oneside_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  modified_lpf_edge_gain:3;
        RBus_UInt32  res2:2;
        RBus_UInt32  modified_lpf_thd_step:6;
        RBus_UInt32  modified_lpf_thd_lowbnd:8;
        RBus_UInt32  res3:1;
        RBus_UInt32  modified_lpf_edge_en:1;
        RBus_UInt32  modified_lpf_thd_upbnd:10;
    };
}nr_new_lpf_nearby_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  typedetect_max_step:9;
        RBus_UInt32  res2:2;
        RBus_UInt32  typedetect_max_thd:10;
    };
}nr_type_detect_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  typedetect_mid_step:9;
        RBus_UInt32  res2:2;
        RBus_UInt32  typedetect_mid_thd:10;
    };
}nr_type_detect_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  linekeep_verhor_ctrl:2;
        RBus_UInt32  res2:3;
        RBus_UInt32  linekeep_edgeflag_thd:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  linekeep_flatflag_thd:5;
        RBus_UInt32  res4:1;
        RBus_UInt32  linekeep_linestrength_shift:3;
        RBus_UInt32  res5:3;
        RBus_UInt32  linekeep_mode:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  linekeep_shift:3;
    };
}nr_line_keep_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  linekeep_horline_judgeratio:4;
        RBus_UInt32  linekeep_verline_judgeratio:4;
        RBus_UInt32  res1:3;
        RBus_UInt32  linekeep_yuvdiff_step:9;
        RBus_UInt32  res2:2;
        RBus_UInt32  linekeep_yuvdiff_thd:10;
    };
}nr_line_keep_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mnr_uvedge_en:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  mnr_uvedge_gain0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  mnr_uvedge_gain1:5;
        RBus_UInt32  res3:1;
        RBus_UInt32  mnr_uvedge_step0:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  mnr_uvedge_step1:3;
    };
}nr_uv_modified_mosquito_edge_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  mnr_uvedge_lowbd0:8;
        RBus_UInt32  mnr_uvedge_lowbd1:8;
    };
}nr_uv_modified_mosquito_edge_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  spnr_image_height:13;
    };
}nr_spnr_act_length_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  vc_edge_lpf_sel:3;
    };
}nr_edge_filter_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  vc_nr_motion_signwt1:1;
        RBus_UInt32  vc_nr_motion_signwt2:1;
        RBus_UInt32  res2:10;
        RBus_UInt32  nr_motion_en:1;
    };
}nr_motion_weight_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nr_motion_weight1_0:4;
        RBus_UInt32  nr_motion_weight1_1:4;
        RBus_UInt32  nr_motion_weight1_2:4;
        RBus_UInt32  nr_motion_weight1_3:4;
        RBus_UInt32  nr_motion_weight1_4:4;
        RBus_UInt32  nr_motion_weight1_5:4;
        RBus_UInt32  nr_motion_weight1_6:4;
        RBus_UInt32  nr_motion_weight1_7:4;
    };
}nr_motion_weight1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nr_motion_weight1_8:4;
        RBus_UInt32  nr_motion_weight1_9:4;
        RBus_UInt32  nr_motion_weight1_10:4;
        RBus_UInt32  nr_motion_weight1_11:4;
        RBus_UInt32  nr_motion_weight1_12:4;
        RBus_UInt32  nr_motion_weight1_13:4;
        RBus_UInt32  nr_motion_weight1_14:4;
        RBus_UInt32  nr_motion_weight1_15:4;
    };
}nr_motion_weight1_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nr_motion_weight1_16:4;
        RBus_UInt32  nr_motion_weight1_17:4;
        RBus_UInt32  nr_motion_weight1_18:4;
        RBus_UInt32  nr_motion_weight1_19:4;
        RBus_UInt32  nr_motion_weight1_20:4;
        RBus_UInt32  nr_motion_weight1_21:4;
        RBus_UInt32  nr_motion_weight1_22:4;
        RBus_UInt32  nr_motion_weight1_23:4;
    };
}nr_motion_weight1_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nr_motion_weight1_24:4;
        RBus_UInt32  nr_motion_weight1_25:4;
        RBus_UInt32  nr_motion_weight1_26:4;
        RBus_UInt32  nr_motion_weight1_27:4;
        RBus_UInt32  nr_motion_weight1_28:4;
        RBus_UInt32  nr_motion_weight1_29:4;
        RBus_UInt32  nr_motion_weight1_30:4;
        RBus_UInt32  nr_motion_weight1_31:4;
    };
}nr_motion_weight1_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nr_motion_weight2_0:4;
        RBus_UInt32  nr_motion_weight2_1:4;
        RBus_UInt32  nr_motion_weight2_2:4;
        RBus_UInt32  nr_motion_weight2_3:4;
        RBus_UInt32  nr_motion_weight2_4:4;
        RBus_UInt32  nr_motion_weight2_5:4;
        RBus_UInt32  nr_motion_weight2_6:4;
        RBus_UInt32  nr_motion_weight2_7:4;
    };
}nr_motion_weight2_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nr_motion_weight2_8:4;
        RBus_UInt32  nr_motion_weight2_9:4;
        RBus_UInt32  nr_motion_weight2_10:4;
        RBus_UInt32  nr_motion_weight2_11:4;
        RBus_UInt32  nr_motion_weight2_12:4;
        RBus_UInt32  nr_motion_weight2_13:4;
        RBus_UInt32  nr_motion_weight2_14:4;
        RBus_UInt32  nr_motion_weight2_15:4;
    };
}nr_motion_weight2_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nr_motion_weight2_16:4;
        RBus_UInt32  nr_motion_weight2_17:4;
        RBus_UInt32  nr_motion_weight2_18:4;
        RBus_UInt32  nr_motion_weight2_19:4;
        RBus_UInt32  nr_motion_weight2_20:4;
        RBus_UInt32  nr_motion_weight2_21:4;
        RBus_UInt32  nr_motion_weight2_22:4;
        RBus_UInt32  nr_motion_weight2_23:4;
    };
}nr_motion_weight2_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nr_motion_weight2_24:4;
        RBus_UInt32  nr_motion_weight2_25:4;
        RBus_UInt32  nr_motion_weight2_26:4;
        RBus_UInt32  nr_motion_weight2_27:4;
        RBus_UInt32  nr_motion_weight2_28:4;
        RBus_UInt32  nr_motion_weight2_29:4;
        RBus_UInt32  nr_motion_weight2_30:4;
        RBus_UInt32  nr_motion_weight2_31:4;
    };
}nr_motion_weight2_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  timing_monitor_en:1;
        RBus_UInt32  timing_monitor_i2rnd_mode:2;
        RBus_UInt32  timing_monitor_src:1;
        RBus_UInt32  timing_monitor_unit:1;
        RBus_UInt32  timing_monitor_multi_mode:1;
        RBus_UInt32  timing_monitor_compare:2;
        RBus_UInt32  res1:8;
        RBus_UInt32  timing_monitor_sta0:4;
        RBus_UInt32  timing_monitor_end0:4;
        RBus_UInt32  timing_monitor_sta1:4;
        RBus_UInt32  timing_monitor_end1:4;
    };
}nr_snr_timing_monitor_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  timing_monitor_sta2:4;
        RBus_UInt32  timing_monitor_end2:4;
        RBus_UInt32  timing_monitor_sta3:4;
        RBus_UInt32  timing_monitor_end3:4;
        RBus_UInt32  timing_monitor_sta4:4;
        RBus_UInt32  timing_monitor_end4:4;
        RBus_UInt32  timing_monitor_sta5:4;
        RBus_UInt32  timing_monitor_end5:4;
    };
}nr_snr_timing_monitor_multi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_compare_th:28;
    };
}nr_snr_timing_monitor_compare_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_golden:28;
    };
}nr_snr_timing_monitor_golden_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_result_previous1:28;
    };
}nr_snr_timing_monitor_result1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_result_previous2:28;
    };
}nr_snr_timing_monitor_result2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_result_previous3:28;
    };
}nr_snr_timing_monitor_result3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_result_previous4:28;
    };
}nr_snr_timing_monitor_result4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_result_max:28;
    };
}nr_snr_timing_monitor_max_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_result_min:28;
    };
}nr_snr_timing_monitor_min_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  compare_hit:1;
        RBus_UInt32  hsync_hit_den_error:1;
        RBus_UInt32  vsync_hit_den_error:1;
    };
}nr_snr_timing_monitor_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy18025598_31_16:16;
        RBus_UInt32  dummy_d0:16;
    };
}nr_nr_dummy_RBUS;

#else //apply LITTLE_ENDIAN

//======NR register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_debugmode_en:1;
        RBus_UInt32  cp_debugmode:4;
        RBus_UInt32  res1:27;
    };
}nr_dch1_debugmode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  cp_spatialenablec:1;
        RBus_UInt32  cp_spatialenabley:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  sresultweight_adjust_shift:3;
        RBus_UInt32  vc_nr_maxmin_range_sel:1;
        RBus_UInt32  cp_zoranweightc_sel:2;
        RBus_UInt32  cp_zoranweighty_sel:2;
        RBus_UInt32  res3:12;
        RBus_UInt32  cp_sresultweight:4;
        RBus_UInt32  vc_snr_lpf_sel:3;
        RBus_UInt32  res4:1;
    };
}nr_dch1_cp_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_spatialthlc:8;
        RBus_UInt32  cp_spatialthly:8;
        RBus_UInt32  cp_spatialthlcx2:8;
        RBus_UInt32  cp_spatialthlyx2:8;
    };
}nr_dch1_spatial_thl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_spatialthlcx4:8;
        RBus_UInt32  cp_spatialthlyx4:8;
        RBus_UInt32  res1:16;
    };
}nr_dch1_spatial_thl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cp_fixedweight2y:1;
        RBus_UInt32  cp_fixedweight1y:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  cp_weight2y:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  cp_weight1y:5;
        RBus_UInt32  res4:7;
        RBus_UInt32  cp_lpresultweightc:4;
    };
}nr_dch1_spatial_weight_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpegnr_db_en:1;
        RBus_UInt32  mpegnr_db_rd_sel:1;
        RBus_UInt32  mpegnr_db_apply:1;
        RBus_UInt32  res1:29;
    };
}nr_v_mpegnr_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_mpegenable_y_y:1;
        RBus_UInt32  cp_mpegenable_y_c:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  cp_mpegresultweight_y:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  cp_mpgidx_y:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  cp_mpglpmode:2;
        RBus_UInt32  cp_mpgupperbound:10;
        RBus_UInt32  cp_mpglowerbound:8;
    };
}nr_dch1_mpegnr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_mpgdiffsum_range:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  cp_mpgupperbound_gain:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  cp_mpgupperbound_offset:8;
        RBus_UInt32  res3:10;
        RBus_UInt32  cp_mpgub_difcen_en:2;
        RBus_UInt32  cp_mpgub_difcmp_en:3;
        RBus_UInt32  cp_mpgub_dec_sel:1;
    };
}nr_dch1_mpegnr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_mpgver_blend_mpegai:1;
        RBus_UInt32  res1:31;
    };
}nr_dch1_mpegnr3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_mpgver_blend_ystep:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  cp_mpgver_blend_yini:3;
        RBus_UInt32  res2:13;
    };
}nr_dch1_blend_nr_ver_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_mpgub_delta1:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  cp_mpgub_delta2:10;
        RBus_UInt32  res2:6;
    };
}nr_dch1_mpegnr_ub_delta1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_mpgub_delta3:10;
        RBus_UInt32  res1:22;
    };
}nr_dch1_mpegnr_ub_delta2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_mpgver_diff_th_low:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  cp_mpgver_diff_th_high:10;
        RBus_UInt32  res2:6;
    };
}nr_dch1_mpegnr_diff_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_mpgver_diff_gain_low:3;
        RBus_UInt32  res1:13;
        RBus_UInt32  cp_mpgver_diff_gain_high:3;
        RBus_UInt32  res2:13;
    };
}nr_dch1_mpegnr_diff_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_mpgub_difcmp_offset:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  cp_mpgub_difcmp_gain:3;
        RBus_UInt32  res2:13;
    };
}nr_dch1_mpegnr_diff_cmp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_vistverend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  cp_visthorend:13;
        RBus_UInt32  res2:3;
    };
}nr_dch1_vist_blking_range_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_vistvor_diff_th_hlh:10;
        RBus_UInt32  res1:22;
    };
}nr_dch1_det_hist_vor_thd_hlh_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_vist2step:3;
        RBus_UInt32  cp_vistveren:1;
        RBus_UInt32  cp_vistveroffset:3;
        RBus_UInt32  res1:25;
    };
}nr_dch1_mpegstart_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_visthor_det_ystep:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  cp_visthor_det_yini:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  cp_visthor_det_offset:3;
        RBus_UInt32  res3:9;
    };
}nr_dch1_det_vist_hor_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_visthor_diff_th_low:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  cp_visthor_diff_th_high:10;
        RBus_UInt32  res2:6;
    };
}nr_dch1_det_hist_hor_thd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpegnr_vdeblk_drf_bist_fail:1;
        RBus_UInt32  mpegnr_vdeblk_bist_fail:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  mpegnr_vdeblk_rm:4;
        RBus_UInt32  mpegnr_vdeblk_rme:1;
        RBus_UInt32  mpegnr_vdeblk_ls:1;
        RBus_UInt32  res2:22;
    };
}nr_dch1_mpegnr_mbist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_viscntver0:20;
        RBus_UInt32  res1:12;
    };
}nr_dch1_viscntver0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_viscntver1:20;
        RBus_UInt32  res1:12;
    };
}nr_dch1_viscntver1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_viscntver2:20;
        RBus_UInt32  res1:12;
    };
}nr_dch1_viscntver2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_viscntver3:20;
        RBus_UInt32  res1:12;
    };
}nr_dch1_viscntver3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_viscntver4:20;
        RBus_UInt32  res1:12;
    };
}nr_dch1_viscntver4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_viscntver5:20;
        RBus_UInt32  res1:12;
    };
}nr_dch1_viscntver5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_viscntver6:20;
        RBus_UInt32  res1:12;
    };
}nr_dch1_viscntver6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_viscntver7:20;
        RBus_UInt32  res1:12;
    };
}nr_dch1_viscntver7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_mpgupperbound_client:10;
        RBus_UInt32  res1:22;
    };
}nr_dch1_mpgub_client_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_mpgfw1:32;
    };
}nr_dch1_cp_mpgfw1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_mpgfw2:32;
    };
}nr_dch1_cp_mpgfw2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  curvemappingmode_en:1;
        RBus_UInt32  res1:31;
    };
}nr_curve_mapping_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  curvemapping_step2:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  curvemapping_step1:9;
        RBus_UInt32  res2:7;
    };
}nr_curve_mapping_step_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  curvemapping_step4:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  curvemapping_step3:9;
        RBus_UInt32  res2:7;
    };
}nr_curve_mapping_step_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  curvemapping_step6:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  curvemapping_step5:9;
        RBus_UInt32  res2:7;
    };
}nr_curve_mapping_step_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  curvemapping_step8:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  curvemapping_step7:9;
        RBus_UInt32  res2:7;
    };
}nr_curve_mapping_step_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  curvemapping_w1_3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  curvemapping_w1_2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  curvemapping_w1_1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  curvemapping_w1_0:5;
        RBus_UInt32  res4:3;
    };
}nr_curve_mapping_w1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  curvemapping_w1_7:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  curvemapping_w1_6:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  curvemapping_w1_5:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  curvemapping_w1_4:5;
        RBus_UInt32  res4:3;
    };
}nr_curve_mapping_w1_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  curvemapping_w1_8:5;
        RBus_UInt32  res1:27;
    };
}nr_curve_mapping_w1_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  curvemapping_w2_3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  curvemapping_w2_2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  curvemapping_w2_1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  curvemapping_w2_0:5;
        RBus_UInt32  res4:3;
    };
}nr_curve_mapping_w2_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  curvemapping_w2_7:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  curvemapping_w2_6:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  curvemapping_w2_5:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  curvemapping_w2_4:5;
        RBus_UInt32  res4:3;
    };
}nr_curve_mapping_w2_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  curvemapping_w2_8:5;
        RBus_UInt32  res1:27;
    };
}nr_curve_mapping_w2_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  snr_db_en:1;
        RBus_UInt32  snr_db_rd_sel:1;
        RBus_UInt32  snr_db_apply:1;
        RBus_UInt32  res1:29;
    };
}nr_snr_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mosquito_detect_en:1;
        RBus_UInt32  mosquitonr_vertical_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  mosquitonr_blending_mode:1;
        RBus_UInt32  mosquitonr_weight:4;
        RBus_UInt32  mosquitonr_edge_strength_gain:3;
        RBus_UInt32  res2:15;
        RBus_UInt32  mnr_lpf_sel:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  mnr_vardiff_refine_2dsearch:1;
        RBus_UInt32  mnr_adjustnoiselevel_bytype:1;
    };
}nr_mosquito_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mnr_keepedgethd:8;
        RBus_UInt32  mnr_keepedgethd_step:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  mnr_keepedge_shift:3;
        RBus_UInt32  res2:13;
    };
}nr_mosquito_nr_keep_edge_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mosquitonr_nlevel_positive_shift:4;
        RBus_UInt32  mosquitonr_nlevel_negative_shift:4;
        RBus_UInt32  mosquitonr_nlevel_positive_offset:8;
        RBus_UInt32  mosquitonr_nlevel_negative_offset:8;
        RBus_UInt32  res1:3;
        RBus_UInt32  mnr_nlevel_maxfrac_mode:2;
        RBus_UInt32  res2:3;
    };
}nr_mosquito_nr_level_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdiff_frac_shift:3;
        RBus_UInt32  mnr_xrange_ext:1;
        RBus_UInt32  vdiff_frac_shift:3;
        RBus_UInt32  hdiff_frac_half_range:3;
        RBus_UInt32  blendsnr_byedge_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  nlevel_diff_factor_en:1;
        RBus_UInt32  mnr_shp_en:1;
        RBus_UInt32  mnr_var2d_byedge:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  far_var_offset:8;
        RBus_UInt32  far_var_gain:3;
        RBus_UInt32  noise_level_trim:2;
        RBus_UInt32  farvar_faredge_refine_en:1;
        RBus_UInt32  noise_level_mode:1;
        RBus_UInt32  edge_lpf_en:1;
    };
}nr_mosquito_nr_level_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mnr_decay_en:1;
        RBus_UInt32  mnr_decay_allcomp_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  mnr_hdecay_start:4;
        RBus_UInt32  mnr_hdecay_step:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  mnr_vdecay_start:4;
        RBus_UInt32  mnr_vdecay_step:3;
        RBus_UInt32  res3:13;
    };
}nr_mosquito_nr_decay_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mnr_edgethd5:8;
        RBus_UInt32  mnr_edgethd6:8;
        RBus_UInt32  mnr_edgethd7:8;
        RBus_UInt32  mnr_edgethd8:8;
    };
}nr_mosquito_nr_edge_thd_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mnr_edgethd1:8;
        RBus_UInt32  mnr_edgethd2:8;
        RBus_UInt32  mnr_edgethd3:8;
        RBus_UInt32  mnr_edgethd4:8;
    };
}nr_mosquito_nr_edge_thd_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mnr_oneside_edge_nlevel_positive_shift:4;
        RBus_UInt32  mnr_oneside_edge_nlevel_positive_offset:8;
        RBus_UInt32  mnr_nlevel_mid_shift:4;
        RBus_UInt32  mnr_nlevel_mid_offset:8;
        RBus_UInt32  mnr_oneside_edge_keepedge_shift:3;
        RBus_UInt32  mnr_oneside_edge_strength_gain:3;
        RBus_UInt32  mnr_oneside_edge_vertical_en:1;
        RBus_UInt32  mnr_oneside_edge_en:1;
    };
}nr_mosquito_nr_oneside_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mnr_oneside_edge_flatvarianceth:9;
        RBus_UInt32  mnr_oneside_edge_flatvarianceshift:2;
        RBus_UInt32  res1:1;
        RBus_UInt32  mnr_oneside_edge_edgelevelgain:3;
        RBus_UInt32  mnr_oneside_edge_maxedgestep:5;
        RBus_UInt32  mnr_oneside_edge_nlevel_negative_shift:4;
        RBus_UInt32  mnr_oneside_edge_nlevel_negative_offset:8;
    };
}nr_mosquito_nr_oneside_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mnr_vardiff_refine_gain_negative:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  mnr_vardiff_refine_gain_positive:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  mnr_var_diff_th:4;
        RBus_UInt32  res3:4;
        RBus_UInt32  mnr_oneside_edge_nlevel_upbnd_startth:7;
        RBus_UInt32  mnr_oneside_edge_nlevel_upbnd_en:1;
        RBus_UInt32  res4:8;
    };
}nr_mosquito_nr_oneside_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mnr_oneside_edge_nlevel_lobnd_offset:8;
        RBus_UInt32  mnr_oneside_edge_nlevel_lobnd_gain:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  mnr_oneside_edge_nlevel_lobnd_startth:7;
        RBus_UInt32  mnr_oneside_edge_nlevel_lobnd_en:1;
        RBus_UInt32  mnr_oneside_edge_nlevel_upbnd_offset:8;
        RBus_UInt32  mnr_oneside_edge_nlevel_upbnd_gain:3;
        RBus_UInt32  res2:1;
    };
}nr_mosquito_nr_oneside_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  modified_lpf_thd_upbnd:10;
        RBus_UInt32  modified_lpf_edge_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  modified_lpf_thd_lowbnd:8;
        RBus_UInt32  modified_lpf_thd_step:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  modified_lpf_edge_gain:3;
        RBus_UInt32  res3:1;
    };
}nr_new_lpf_nearby_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  typedetect_max_thd:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  typedetect_max_step:9;
        RBus_UInt32  res2:11;
    };
}nr_type_detect_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  typedetect_mid_thd:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  typedetect_mid_step:9;
        RBus_UInt32  res2:11;
    };
}nr_type_detect_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  linekeep_shift:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  linekeep_mode:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  linekeep_linestrength_shift:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  linekeep_flatflag_thd:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  linekeep_edgeflag_thd:5;
        RBus_UInt32  res5:3;
        RBus_UInt32  linekeep_verhor_ctrl:2;
        RBus_UInt32  res6:2;
    };
}nr_line_keep_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  linekeep_yuvdiff_thd:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  linekeep_yuvdiff_step:9;
        RBus_UInt32  res2:3;
        RBus_UInt32  linekeep_verline_judgeratio:4;
        RBus_UInt32  linekeep_horline_judgeratio:4;
    };
}nr_line_keep_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mnr_uvedge_step1:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  mnr_uvedge_step0:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  mnr_uvedge_gain1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  mnr_uvedge_gain0:5;
        RBus_UInt32  res4:10;
        RBus_UInt32  mnr_uvedge_en:1;
    };
}nr_uv_modified_mosquito_edge_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mnr_uvedge_lowbd1:8;
        RBus_UInt32  mnr_uvedge_lowbd0:8;
        RBus_UInt32  res1:16;
    };
}nr_uv_modified_mosquito_edge_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  spnr_image_height:13;
        RBus_UInt32  res1:19;
    };
}nr_spnr_act_length_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vc_edge_lpf_sel:3;
        RBus_UInt32  res1:29;
    };
}nr_edge_filter_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nr_motion_en:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  vc_nr_motion_signwt2:1;
        RBus_UInt32  vc_nr_motion_signwt1:1;
        RBus_UInt32  res2:19;
    };
}nr_motion_weight_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nr_motion_weight1_7:4;
        RBus_UInt32  nr_motion_weight1_6:4;
        RBus_UInt32  nr_motion_weight1_5:4;
        RBus_UInt32  nr_motion_weight1_4:4;
        RBus_UInt32  nr_motion_weight1_3:4;
        RBus_UInt32  nr_motion_weight1_2:4;
        RBus_UInt32  nr_motion_weight1_1:4;
        RBus_UInt32  nr_motion_weight1_0:4;
    };
}nr_motion_weight1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nr_motion_weight1_15:4;
        RBus_UInt32  nr_motion_weight1_14:4;
        RBus_UInt32  nr_motion_weight1_13:4;
        RBus_UInt32  nr_motion_weight1_12:4;
        RBus_UInt32  nr_motion_weight1_11:4;
        RBus_UInt32  nr_motion_weight1_10:4;
        RBus_UInt32  nr_motion_weight1_9:4;
        RBus_UInt32  nr_motion_weight1_8:4;
    };
}nr_motion_weight1_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nr_motion_weight1_23:4;
        RBus_UInt32  nr_motion_weight1_22:4;
        RBus_UInt32  nr_motion_weight1_21:4;
        RBus_UInt32  nr_motion_weight1_20:4;
        RBus_UInt32  nr_motion_weight1_19:4;
        RBus_UInt32  nr_motion_weight1_18:4;
        RBus_UInt32  nr_motion_weight1_17:4;
        RBus_UInt32  nr_motion_weight1_16:4;
    };
}nr_motion_weight1_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nr_motion_weight1_31:4;
        RBus_UInt32  nr_motion_weight1_30:4;
        RBus_UInt32  nr_motion_weight1_29:4;
        RBus_UInt32  nr_motion_weight1_28:4;
        RBus_UInt32  nr_motion_weight1_27:4;
        RBus_UInt32  nr_motion_weight1_26:4;
        RBus_UInt32  nr_motion_weight1_25:4;
        RBus_UInt32  nr_motion_weight1_24:4;
    };
}nr_motion_weight1_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nr_motion_weight2_7:4;
        RBus_UInt32  nr_motion_weight2_6:4;
        RBus_UInt32  nr_motion_weight2_5:4;
        RBus_UInt32  nr_motion_weight2_4:4;
        RBus_UInt32  nr_motion_weight2_3:4;
        RBus_UInt32  nr_motion_weight2_2:4;
        RBus_UInt32  nr_motion_weight2_1:4;
        RBus_UInt32  nr_motion_weight2_0:4;
    };
}nr_motion_weight2_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nr_motion_weight2_15:4;
        RBus_UInt32  nr_motion_weight2_14:4;
        RBus_UInt32  nr_motion_weight2_13:4;
        RBus_UInt32  nr_motion_weight2_12:4;
        RBus_UInt32  nr_motion_weight2_11:4;
        RBus_UInt32  nr_motion_weight2_10:4;
        RBus_UInt32  nr_motion_weight2_9:4;
        RBus_UInt32  nr_motion_weight2_8:4;
    };
}nr_motion_weight2_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nr_motion_weight2_23:4;
        RBus_UInt32  nr_motion_weight2_22:4;
        RBus_UInt32  nr_motion_weight2_21:4;
        RBus_UInt32  nr_motion_weight2_20:4;
        RBus_UInt32  nr_motion_weight2_19:4;
        RBus_UInt32  nr_motion_weight2_18:4;
        RBus_UInt32  nr_motion_weight2_17:4;
        RBus_UInt32  nr_motion_weight2_16:4;
    };
}nr_motion_weight2_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nr_motion_weight2_31:4;
        RBus_UInt32  nr_motion_weight2_30:4;
        RBus_UInt32  nr_motion_weight2_29:4;
        RBus_UInt32  nr_motion_weight2_28:4;
        RBus_UInt32  nr_motion_weight2_27:4;
        RBus_UInt32  nr_motion_weight2_26:4;
        RBus_UInt32  nr_motion_weight2_25:4;
        RBus_UInt32  nr_motion_weight2_24:4;
    };
}nr_motion_weight2_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  timing_monitor_end1:4;
        RBus_UInt32  timing_monitor_sta1:4;
        RBus_UInt32  timing_monitor_end0:4;
        RBus_UInt32  timing_monitor_sta0:4;
        RBus_UInt32  res1:8;
        RBus_UInt32  timing_monitor_compare:2;
        RBus_UInt32  timing_monitor_multi_mode:1;
        RBus_UInt32  timing_monitor_unit:1;
        RBus_UInt32  timing_monitor_src:1;
        RBus_UInt32  timing_monitor_i2rnd_mode:2;
        RBus_UInt32  timing_monitor_en:1;
    };
}nr_snr_timing_monitor_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  timing_monitor_end5:4;
        RBus_UInt32  timing_monitor_sta5:4;
        RBus_UInt32  timing_monitor_end4:4;
        RBus_UInt32  timing_monitor_sta4:4;
        RBus_UInt32  timing_monitor_end3:4;
        RBus_UInt32  timing_monitor_sta3:4;
        RBus_UInt32  timing_monitor_end2:4;
        RBus_UInt32  timing_monitor_sta2:4;
    };
}nr_snr_timing_monitor_multi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_compare_th:28;
        RBus_UInt32  res1:4;
    };
}nr_snr_timing_monitor_compare_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_golden:28;
        RBus_UInt32  res1:4;
    };
}nr_snr_timing_monitor_golden_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_result_previous1:28;
        RBus_UInt32  res1:4;
    };
}nr_snr_timing_monitor_result1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_result_previous2:28;
        RBus_UInt32  res1:4;
    };
}nr_snr_timing_monitor_result2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_result_previous3:28;
        RBus_UInt32  res1:4;
    };
}nr_snr_timing_monitor_result3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_result_previous4:28;
        RBus_UInt32  res1:4;
    };
}nr_snr_timing_monitor_result4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_result_max:28;
        RBus_UInt32  res1:4;
    };
}nr_snr_timing_monitor_max_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_result_min:28;
        RBus_UInt32  res1:4;
    };
}nr_snr_timing_monitor_min_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vsync_hit_den_error:1;
        RBus_UInt32  hsync_hit_den_error:1;
        RBus_UInt32  compare_hit:1;
        RBus_UInt32  res1:29;
    };
}nr_snr_timing_monitor_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_d0:16;
        RBus_UInt32  dummy18025598_31_16:16;
    };
}nr_nr_dummy_RBUS;




#endif 


#endif 
