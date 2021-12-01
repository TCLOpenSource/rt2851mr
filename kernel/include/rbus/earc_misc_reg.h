/**
* @file Merlin4-DesignSpec-eARC_misc
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_MISC_EARC_REG_H_
#define _RBUS_MISC_EARC_REG_H_

#include "rbus_types.h"



//  EARC Register Address
#define  EARC_earc_1x_48k                                                       0x180B8000
#define  EARC_earc_1x_48k_reg_addr                                               "0xB80B8000"
#define  EARC_earc_1x_48k_reg                                                    0xB80B8000
#define  EARC_earc_1x_48k_inst_addr                                              "0x0000"
#define  set_EARC_earc_1x_48k_reg(data)                                          (*((volatile unsigned int*)EARC_earc_1x_48k_reg)=data)
#define  get_EARC_earc_1x_48k_reg                                                (*((volatile unsigned int*)EARC_earc_1x_48k_reg))
#define  EARC_earc_1x_48k_ck_1x_48k_mode_shift                                   (28)
#define  EARC_earc_1x_48k_dummy_27_24_shift                                      (24)
#define  EARC_earc_1x_48k_eclk_test_x_shift                                      (19)
#define  EARC_earc_1x_48k_eclk_test_y_shift                                      (16)
#define  EARC_earc_1x_48k_earc_1x_inv_en_shift                                   (0)
#define  EARC_earc_1x_48k_ck_1x_48k_mode_mask                                    (0xF0000000)
#define  EARC_earc_1x_48k_dummy_27_24_mask                                       (0x0F000000)
#define  EARC_earc_1x_48k_eclk_test_x_mask                                       (0x00F80000)
#define  EARC_earc_1x_48k_eclk_test_y_mask                                       (0x00070000)
#define  EARC_earc_1x_48k_earc_1x_inv_en_mask                                    (0x00000001)
#define  EARC_earc_1x_48k_ck_1x_48k_mode(data)                                   (0xF0000000&((data)<<28))
#define  EARC_earc_1x_48k_dummy_27_24(data)                                      (0x0F000000&((data)<<24))
#define  EARC_earc_1x_48k_eclk_test_x(data)                                      (0x00F80000&((data)<<19))
#define  EARC_earc_1x_48k_eclk_test_y(data)                                      (0x00070000&((data)<<16))
#define  EARC_earc_1x_48k_earc_1x_inv_en(data)                                   (0x00000001&(data))
#define  EARC_earc_1x_48k_get_ck_1x_48k_mode(data)                               ((0xF0000000&(data))>>28)
#define  EARC_earc_1x_48k_get_dummy_27_24(data)                                  ((0x0F000000&(data))>>24)
#define  EARC_earc_1x_48k_get_eclk_test_x(data)                                  ((0x00F80000&(data))>>19)
#define  EARC_earc_1x_48k_get_eclk_test_y(data)                                  ((0x00070000&(data))>>16)
#define  EARC_earc_1x_48k_get_earc_1x_inv_en(data)                               (0x00000001&(data))

#define  EARC_earc_ana_0                                                        0x180B8004
#define  EARC_earc_ana_0_reg_addr                                                "0xB80B8004"
#define  EARC_earc_ana_0_reg                                                     0xB80B8004
#define  EARC_earc_ana_0_inst_addr                                               "0x0001"
#define  set_EARC_earc_ana_0_reg(data)                                           (*((volatile unsigned int*)EARC_earc_ana_0_reg)=data)
#define  get_EARC_earc_ana_0_reg                                                 (*((volatile unsigned int*)EARC_earc_ana_0_reg))
#define  EARC_earc_ana_0_pow_earc_driver_shift                                   (31)
#define  EARC_earc_ana_0_pow_earc_mbias_shift                                    (30)
#define  EARC_earc_ana_0_pow_earc_pll_shift                                      (29)
#define  EARC_earc_ana_0_earc_date_sel_shift                                     (27)
#define  EARC_earc_ana_0_df_ck_sel_shift                                         (20)
#define  EARC_earc_ana_0_df_trf_sel_shift                                        (18)
#define  EARC_earc_ana_0_earc_pll_cp_shift                                       (16)
#define  EARC_earc_ana_0_earc_pll_cs_shift                                       (14)
#define  EARC_earc_ana_0_earc_pll_dbug_en_shift                                  (13)
#define  EARC_earc_ana_0_earc_pll_ip_shift                                       (9)
#define  EARC_earc_ana_0_earc_pll_k_shift                                        (6)
#define  EARC_earc_ana_0_earc_pll_oeb_shift                                      (5)
#define  EARC_earc_ana_0_earc_pll_rs_shift                                       (2)
#define  EARC_earc_ana_0_earc_pll_wdrst_shift                                    (1)
#define  EARC_earc_ana_0_earc_pll_wdset_shift                                    (0)
#define  EARC_earc_ana_0_pow_earc_driver_mask                                    (0x80000000)
#define  EARC_earc_ana_0_pow_earc_mbias_mask                                     (0x40000000)
#define  EARC_earc_ana_0_pow_earc_pll_mask                                       (0x20000000)
#define  EARC_earc_ana_0_earc_date_sel_mask                                      (0x08000000)
#define  EARC_earc_ana_0_df_ck_sel_mask                                          (0x00100000)
#define  EARC_earc_ana_0_df_trf_sel_mask                                         (0x000C0000)
#define  EARC_earc_ana_0_earc_pll_cp_mask                                        (0x00030000)
#define  EARC_earc_ana_0_earc_pll_cs_mask                                        (0x0000C000)
#define  EARC_earc_ana_0_earc_pll_dbug_en_mask                                   (0x00002000)
#define  EARC_earc_ana_0_earc_pll_ip_mask                                        (0x00001E00)
#define  EARC_earc_ana_0_earc_pll_k_mask                                         (0x000001C0)
#define  EARC_earc_ana_0_earc_pll_oeb_mask                                       (0x00000020)
#define  EARC_earc_ana_0_earc_pll_rs_mask                                        (0x0000001C)
#define  EARC_earc_ana_0_earc_pll_wdrst_mask                                     (0x00000002)
#define  EARC_earc_ana_0_earc_pll_wdset_mask                                     (0x00000001)
#define  EARC_earc_ana_0_pow_earc_driver(data)                                   (0x80000000&((data)<<31))
#define  EARC_earc_ana_0_pow_earc_mbias(data)                                    (0x40000000&((data)<<30))
#define  EARC_earc_ana_0_pow_earc_pll(data)                                      (0x20000000&((data)<<29))
#define  EARC_earc_ana_0_earc_date_sel(data)                                     (0x08000000&((data)<<27))
#define  EARC_earc_ana_0_df_ck_sel(data)                                         (0x00100000&((data)<<20))
#define  EARC_earc_ana_0_df_trf_sel(data)                                        (0x000C0000&((data)<<18))
#define  EARC_earc_ana_0_earc_pll_cp(data)                                       (0x00030000&((data)<<16))
#define  EARC_earc_ana_0_earc_pll_cs(data)                                       (0x0000C000&((data)<<14))
#define  EARC_earc_ana_0_earc_pll_dbug_en(data)                                  (0x00002000&((data)<<13))
#define  EARC_earc_ana_0_earc_pll_ip(data)                                       (0x00001E00&((data)<<9))
#define  EARC_earc_ana_0_earc_pll_k(data)                                        (0x000001C0&((data)<<6))
#define  EARC_earc_ana_0_earc_pll_oeb(data)                                      (0x00000020&((data)<<5))
#define  EARC_earc_ana_0_earc_pll_rs(data)                                       (0x0000001C&((data)<<2))
#define  EARC_earc_ana_0_earc_pll_wdrst(data)                                    (0x00000002&((data)<<1))
#define  EARC_earc_ana_0_earc_pll_wdset(data)                                    (0x00000001&(data))
#define  EARC_earc_ana_0_get_pow_earc_driver(data)                               ((0x80000000&(data))>>31)
#define  EARC_earc_ana_0_get_pow_earc_mbias(data)                                ((0x40000000&(data))>>30)
#define  EARC_earc_ana_0_get_pow_earc_pll(data)                                  ((0x20000000&(data))>>29)
#define  EARC_earc_ana_0_get_earc_date_sel(data)                                 ((0x08000000&(data))>>27)
#define  EARC_earc_ana_0_get_df_ck_sel(data)                                     ((0x00100000&(data))>>20)
#define  EARC_earc_ana_0_get_df_trf_sel(data)                                    ((0x000C0000&(data))>>18)
#define  EARC_earc_ana_0_get_earc_pll_cp(data)                                   ((0x00030000&(data))>>16)
#define  EARC_earc_ana_0_get_earc_pll_cs(data)                                   ((0x0000C000&(data))>>14)
#define  EARC_earc_ana_0_get_earc_pll_dbug_en(data)                              ((0x00002000&(data))>>13)
#define  EARC_earc_ana_0_get_earc_pll_ip(data)                                   ((0x00001E00&(data))>>9)
#define  EARC_earc_ana_0_get_earc_pll_k(data)                                    ((0x000001C0&(data))>>6)
#define  EARC_earc_ana_0_get_earc_pll_oeb(data)                                  ((0x00000020&(data))>>5)
#define  EARC_earc_ana_0_get_earc_pll_rs(data)                                   ((0x0000001C&(data))>>2)
#define  EARC_earc_ana_0_get_earc_pll_wdrst(data)                                ((0x00000002&(data))>>1)
#define  EARC_earc_ana_0_get_earc_pll_wdset(data)                                (0x00000001&(data))

#define  EARC_earc_ana_1                                                        0x180B8008
#define  EARC_earc_ana_1_reg_addr                                                "0xB80B8008"
#define  EARC_earc_ana_1_reg                                                     0xB80B8008
#define  EARC_earc_ana_1_inst_addr                                               "0x0002"
#define  set_EARC_earc_ana_1_reg(data)                                           (*((volatile unsigned int*)EARC_earc_ana_1_reg)=data)
#define  get_EARC_earc_ana_1_reg                                                 (*((volatile unsigned int*)EARC_earc_ana_1_reg))
#define  EARC_earc_ana_1_cm_ib_sel_shift                                         (29)
#define  EARC_earc_ana_1_ldo18v_sel_shift                                        (27)
#define  EARC_earc_ana_1_earc_pll_p_shift                                        (25)
#define  EARC_earc_ana_1_earc_pll_pibypass_shift                                 (24)
#define  EARC_earc_ana_1_r300_sel_shift                                          (21)
#define  EARC_earc_ana_1_r60_sel_shift                                           (17)
#define  EARC_earc_ana_1_reserved_aphy_shift                                     (5)
#define  EARC_earc_ana_1_r_test_en_shift                                         (4)
#define  EARC_earc_ana_1_r_en_shift                                              (0)
#define  EARC_earc_ana_1_cm_ib_sel_mask                                          (0xE0000000)
#define  EARC_earc_ana_1_ldo18v_sel_mask                                         (0x18000000)
#define  EARC_earc_ana_1_earc_pll_p_mask                                         (0x06000000)
#define  EARC_earc_ana_1_earc_pll_pibypass_mask                                  (0x01000000)
#define  EARC_earc_ana_1_r300_sel_mask                                           (0x00E00000)
#define  EARC_earc_ana_1_r60_sel_mask                                            (0x001E0000)
#define  EARC_earc_ana_1_reserved_aphy_mask                                      (0x00001FE0)
#define  EARC_earc_ana_1_r_test_en_mask                                          (0x00000010)
#define  EARC_earc_ana_1_r_en_mask                                               (0x0000000F)
#define  EARC_earc_ana_1_cm_ib_sel(data)                                         (0xE0000000&((data)<<29))
#define  EARC_earc_ana_1_ldo18v_sel(data)                                        (0x18000000&((data)<<27))
#define  EARC_earc_ana_1_earc_pll_p(data)                                        (0x06000000&((data)<<25))
#define  EARC_earc_ana_1_earc_pll_pibypass(data)                                 (0x01000000&((data)<<24))
#define  EARC_earc_ana_1_r300_sel(data)                                          (0x00E00000&((data)<<21))
#define  EARC_earc_ana_1_r60_sel(data)                                           (0x001E0000&((data)<<17))
#define  EARC_earc_ana_1_reserved_aphy(data)                                     (0x00001FE0&((data)<<5))
#define  EARC_earc_ana_1_r_test_en(data)                                         (0x00000010&((data)<<4))
#define  EARC_earc_ana_1_r_en(data)                                              (0x0000000F&(data))
#define  EARC_earc_ana_1_get_cm_ib_sel(data)                                     ((0xE0000000&(data))>>29)
#define  EARC_earc_ana_1_get_ldo18v_sel(data)                                    ((0x18000000&(data))>>27)
#define  EARC_earc_ana_1_get_earc_pll_p(data)                                    ((0x06000000&(data))>>25)
#define  EARC_earc_ana_1_get_earc_pll_pibypass(data)                             ((0x01000000&(data))>>24)
#define  EARC_earc_ana_1_get_r300_sel(data)                                      ((0x00E00000&(data))>>21)
#define  EARC_earc_ana_1_get_r60_sel(data)                                       ((0x001E0000&(data))>>17)
#define  EARC_earc_ana_1_get_reserved_aphy(data)                                 ((0x00001FE0&(data))>>5)
#define  EARC_earc_ana_1_get_r_test_en(data)                                     ((0x00000010&(data))>>4)
#define  EARC_earc_ana_1_get_r_en(data)                                          (0x0000000F&(data))

#define  EARC_earc_ana_2                                                        0x180B800C
#define  EARC_earc_ana_2_reg_addr                                                "0xB80B800C"
#define  EARC_earc_ana_2_reg                                                     0xB80B800C
#define  EARC_earc_ana_2_inst_addr                                               "0x0003"
#define  set_EARC_earc_ana_2_reg(data)                                           (*((volatile unsigned int*)EARC_earc_ana_2_reg)=data)
#define  get_EARC_earc_ana_2_reg                                                 (*((volatile unsigned int*)EARC_earc_ana_2_reg))
#define  EARC_earc_ana_2_rstb_earc_pll_shift                                     (31)
#define  EARC_earc_ana_2_rstb_spk_div_shift                                      (30)
#define  EARC_earc_ana_2_cm_trf_sel_shift                                        (27)
#define  EARC_earc_ana_2_df_ib_sel_shift                                         (24)
#define  EARC_earc_ana_2_earc_saving_mode_shift                                  (23)
#define  EARC_earc_ana_2_earc_test_mode_shift                                    (22)
#define  EARC_earc_ana_2_earc_test_sel_shift                                     (18)
#define  EARC_earc_ana_2_ldo18v_ref_sel_shift                                    (17)
#define  EARC_earc_ana_2_vol_level_df_shift                                      (9)
#define  EARC_earc_ana_2_vol_level_cm_shift                                      (8)
#define  EARC_earc_ana_2_vol_level_extra_shift                                   (6)
#define  EARC_earc_ana_2_df_duty_sel_shift                                       (3)
#define  EARC_earc_ana_2_earc_pll_ckrdy_fast_shift                               (2)
#define  EARC_earc_ana_2_rstb_pll_vco_shift                                      (1)
#define  EARC_earc_ana_2_pow_earc_ldo_shift                                      (0)
#define  EARC_earc_ana_2_rstb_earc_pll_mask                                      (0x80000000)
#define  EARC_earc_ana_2_rstb_spk_div_mask                                       (0x40000000)
#define  EARC_earc_ana_2_cm_trf_sel_mask                                         (0x38000000)
#define  EARC_earc_ana_2_df_ib_sel_mask                                          (0x07000000)
#define  EARC_earc_ana_2_earc_saving_mode_mask                                   (0x00800000)
#define  EARC_earc_ana_2_earc_test_mode_mask                                     (0x00400000)
#define  EARC_earc_ana_2_earc_test_sel_mask                                      (0x003C0000)
#define  EARC_earc_ana_2_ldo18v_ref_sel_mask                                     (0x00020000)
#define  EARC_earc_ana_2_vol_level_df_mask                                       (0x00000200)
#define  EARC_earc_ana_2_vol_level_cm_mask                                       (0x00000100)
#define  EARC_earc_ana_2_vol_level_extra_mask                                    (0x000000C0)
#define  EARC_earc_ana_2_df_duty_sel_mask                                        (0x00000038)
#define  EARC_earc_ana_2_earc_pll_ckrdy_fast_mask                                (0x00000004)
#define  EARC_earc_ana_2_rstb_pll_vco_mask                                       (0x00000002)
#define  EARC_earc_ana_2_pow_earc_ldo_mask                                       (0x00000001)
#define  EARC_earc_ana_2_rstb_earc_pll(data)                                     (0x80000000&((data)<<31))
#define  EARC_earc_ana_2_rstb_spk_div(data)                                      (0x40000000&((data)<<30))
#define  EARC_earc_ana_2_cm_trf_sel(data)                                        (0x38000000&((data)<<27))
#define  EARC_earc_ana_2_df_ib_sel(data)                                         (0x07000000&((data)<<24))
#define  EARC_earc_ana_2_earc_saving_mode(data)                                  (0x00800000&((data)<<23))
#define  EARC_earc_ana_2_earc_test_mode(data)                                    (0x00400000&((data)<<22))
#define  EARC_earc_ana_2_earc_test_sel(data)                                     (0x003C0000&((data)<<18))
#define  EARC_earc_ana_2_ldo18v_ref_sel(data)                                    (0x00020000&((data)<<17))
#define  EARC_earc_ana_2_vol_level_df(data)                                      (0x00000200&((data)<<9))
#define  EARC_earc_ana_2_vol_level_cm(data)                                      (0x00000100&((data)<<8))
#define  EARC_earc_ana_2_vol_level_extra(data)                                   (0x000000C0&((data)<<6))
#define  EARC_earc_ana_2_df_duty_sel(data)                                       (0x00000038&((data)<<3))
#define  EARC_earc_ana_2_earc_pll_ckrdy_fast(data)                               (0x00000004&((data)<<2))
#define  EARC_earc_ana_2_rstb_pll_vco(data)                                      (0x00000002&((data)<<1))
#define  EARC_earc_ana_2_pow_earc_ldo(data)                                      (0x00000001&(data))
#define  EARC_earc_ana_2_get_rstb_earc_pll(data)                                 ((0x80000000&(data))>>31)
#define  EARC_earc_ana_2_get_rstb_spk_div(data)                                  ((0x40000000&(data))>>30)
#define  EARC_earc_ana_2_get_cm_trf_sel(data)                                    ((0x38000000&(data))>>27)
#define  EARC_earc_ana_2_get_df_ib_sel(data)                                     ((0x07000000&(data))>>24)
#define  EARC_earc_ana_2_get_earc_saving_mode(data)                              ((0x00800000&(data))>>23)
#define  EARC_earc_ana_2_get_earc_test_mode(data)                                ((0x00400000&(data))>>22)
#define  EARC_earc_ana_2_get_earc_test_sel(data)                                 ((0x003C0000&(data))>>18)
#define  EARC_earc_ana_2_get_ldo18v_ref_sel(data)                                ((0x00020000&(data))>>17)
#define  EARC_earc_ana_2_get_vol_level_df(data)                                  ((0x00000200&(data))>>9)
#define  EARC_earc_ana_2_get_vol_level_cm(data)                                  ((0x00000100&(data))>>8)
#define  EARC_earc_ana_2_get_vol_level_extra(data)                               ((0x000000C0&(data))>>6)
#define  EARC_earc_ana_2_get_df_duty_sel(data)                                   ((0x00000038&(data))>>3)
#define  EARC_earc_ana_2_get_earc_pll_ckrdy_fast(data)                           ((0x00000004&(data))>>2)
#define  EARC_earc_ana_2_get_rstb_pll_vco(data)                                  ((0x00000002&(data))>>1)
#define  EARC_earc_ana_2_get_pow_earc_ldo(data)                                  (0x00000001&(data))

#define  EARC_PLL_earc_SSC0                                                     0x180B8010
#define  EARC_PLL_earc_SSC0_reg_addr                                             "0xB80B8010"
#define  EARC_PLL_earc_SSC0_reg                                                  0xB80B8010
#define  EARC_PLL_earc_SSC0_inst_addr                                            "0x0004"
#define  set_EARC_PLL_earc_SSC0_reg(data)                                        (*((volatile unsigned int*)EARC_PLL_earc_SSC0_reg)=data)
#define  get_EARC_PLL_earc_SSC0_reg                                              (*((volatile unsigned int*)EARC_PLL_earc_SSC0_reg))
#define  EARC_PLL_earc_SSC0_fcode_t_shift                                        (16)
#define  EARC_PLL_earc_SSC0_oc_step_set_shift                                    (4)
#define  EARC_PLL_earc_SSC0_oc_en_shift                                          (0)
#define  EARC_PLL_earc_SSC0_fcode_t_mask                                         (0x07FF0000)
#define  EARC_PLL_earc_SSC0_oc_step_set_mask                                     (0x00003FF0)
#define  EARC_PLL_earc_SSC0_oc_en_mask                                           (0x00000001)
#define  EARC_PLL_earc_SSC0_fcode_t(data)                                        (0x07FF0000&((data)<<16))
#define  EARC_PLL_earc_SSC0_oc_step_set(data)                                    (0x00003FF0&((data)<<4))
#define  EARC_PLL_earc_SSC0_oc_en(data)                                          (0x00000001&(data))
#define  EARC_PLL_earc_SSC0_get_fcode_t(data)                                    ((0x07FF0000&(data))>>16)
#define  EARC_PLL_earc_SSC0_get_oc_step_set(data)                                ((0x00003FF0&(data))>>4)
#define  EARC_PLL_earc_SSC0_get_oc_en(data)                                      (0x00000001&(data))

#define  EARC_PLL_earc_SSC1                                                     0x180B8014
#define  EARC_PLL_earc_SSC1_reg_addr                                             "0xB80B8014"
#define  EARC_PLL_earc_SSC1_reg                                                  0xB80B8014
#define  EARC_PLL_earc_SSC1_inst_addr                                            "0x0005"
#define  set_EARC_PLL_earc_SSC1_reg(data)                                        (*((volatile unsigned int*)EARC_PLL_earc_SSC1_reg)=data)
#define  get_EARC_PLL_earc_SSC1_reg                                              (*((volatile unsigned int*)EARC_PLL_earc_SSC1_reg))
#define  EARC_PLL_earc_SSC1_oc_done_delay_shift                                  (16)
#define  EARC_PLL_earc_SSC1_hs_oc_stop_diff_shift                                (12)
#define  EARC_PLL_earc_SSC1_sel_oc_mode_shift                                    (8)
#define  EARC_PLL_earc_SSC1_oc_done_delay_mask                                   (0x003F0000)
#define  EARC_PLL_earc_SSC1_hs_oc_stop_diff_mask                                 (0x00003000)
#define  EARC_PLL_earc_SSC1_sel_oc_mode_mask                                     (0x00000300)
#define  EARC_PLL_earc_SSC1_oc_done_delay(data)                                  (0x003F0000&((data)<<16))
#define  EARC_PLL_earc_SSC1_hs_oc_stop_diff(data)                                (0x00003000&((data)<<12))
#define  EARC_PLL_earc_SSC1_sel_oc_mode(data)                                    (0x00000300&((data)<<8))
#define  EARC_PLL_earc_SSC1_get_oc_done_delay(data)                              ((0x003F0000&(data))>>16)
#define  EARC_PLL_earc_SSC1_get_hs_oc_stop_diff(data)                            ((0x00003000&(data))>>12)
#define  EARC_PLL_earc_SSC1_get_sel_oc_mode(data)                                ((0x00000300&(data))>>8)

#define  EARC_PLL_earc_SSC2                                                     0x180B8018
#define  EARC_PLL_earc_SSC2_reg_addr                                             "0xB80B8018"
#define  EARC_PLL_earc_SSC2_reg                                                  0xB80B8018
#define  EARC_PLL_earc_SSC2_inst_addr                                            "0x0006"
#define  set_EARC_PLL_earc_SSC2_reg(data)                                        (*((volatile unsigned int*)EARC_PLL_earc_SSC2_reg)=data)
#define  get_EARC_PLL_earc_SSC2_reg                                              (*((volatile unsigned int*)EARC_PLL_earc_SSC2_reg))
#define  EARC_PLL_earc_SSC2_en_pi_debug_shift                                    (2)
#define  EARC_PLL_earc_SSC2_sdm_order_shift                                      (1)
#define  EARC_PLL_earc_SSC2_bypass_pi_shift                                      (0)
#define  EARC_PLL_earc_SSC2_en_pi_debug_mask                                     (0x00000004)
#define  EARC_PLL_earc_SSC2_sdm_order_mask                                       (0x00000002)
#define  EARC_PLL_earc_SSC2_bypass_pi_mask                                       (0x00000001)
#define  EARC_PLL_earc_SSC2_en_pi_debug(data)                                    (0x00000004&((data)<<2))
#define  EARC_PLL_earc_SSC2_sdm_order(data)                                      (0x00000002&((data)<<1))
#define  EARC_PLL_earc_SSC2_bypass_pi(data)                                      (0x00000001&(data))
#define  EARC_PLL_earc_SSC2_get_en_pi_debug(data)                                ((0x00000004&(data))>>2)
#define  EARC_PLL_earc_SSC2_get_sdm_order(data)                                  ((0x00000002&(data))>>1)
#define  EARC_PLL_earc_SSC2_get_bypass_pi(data)                                  (0x00000001&(data))

#define  EARC_PLL_SSC3                                                          0x180B801C
#define  EARC_PLL_SSC3_reg_addr                                                  "0xB80B801C"
#define  EARC_PLL_SSC3_reg                                                       0xB80B801C
#define  EARC_PLL_SSC3_inst_addr                                                 "0x0007"
#define  set_EARC_PLL_SSC3_reg(data)                                             (*((volatile unsigned int*)EARC_PLL_SSC3_reg)=data)
#define  get_EARC_PLL_SSC3_reg                                                   (*((volatile unsigned int*)EARC_PLL_SSC3_reg))
#define  EARC_PLL_SSC3_ncode_t_shift                                             (16)
#define  EARC_PLL_SSC3_ncode_t_mask                                              (0x00FF0000)
#define  EARC_PLL_SSC3_ncode_t(data)                                             (0x00FF0000&((data)<<16))
#define  EARC_PLL_SSC3_get_ncode_t(data)                                         ((0x00FF0000&(data))>>16)

#define  EARC_PLL_earc_SSC5                                                     0x180B8024
#define  EARC_PLL_earc_SSC5_reg_addr                                             "0xB80B8024"
#define  EARC_PLL_earc_SSC5_reg                                                  0xB80B8024
#define  EARC_PLL_earc_SSC5_inst_addr                                            "0x0008"
#define  set_EARC_PLL_earc_SSC5_reg(data)                                        (*((volatile unsigned int*)EARC_PLL_earc_SSC5_reg)=data)
#define  get_EARC_PLL_earc_SSC5_reg                                              (*((volatile unsigned int*)EARC_PLL_earc_SSC5_reg))
#define  EARC_PLL_earc_SSC5_fcode_debug_shift                                    (16)
#define  EARC_PLL_earc_SSC5_ncode_debug_shift                                    (8)
#define  EARC_PLL_earc_SSC5_oc_done_shift                                        (4)
#define  EARC_PLL_earc_SSC5_fmod_shift                                           (0)
#define  EARC_PLL_earc_SSC5_fcode_debug_mask                                     (0x07FF0000)
#define  EARC_PLL_earc_SSC5_ncode_debug_mask                                     (0x0000FF00)
#define  EARC_PLL_earc_SSC5_oc_done_mask                                         (0x00000010)
#define  EARC_PLL_earc_SSC5_fmod_mask                                            (0x00000001)
#define  EARC_PLL_earc_SSC5_fcode_debug(data)                                    (0x07FF0000&((data)<<16))
#define  EARC_PLL_earc_SSC5_ncode_debug(data)                                    (0x0000FF00&((data)<<8))
#define  EARC_PLL_earc_SSC5_oc_done(data)                                        (0x00000010&((data)<<4))
#define  EARC_PLL_earc_SSC5_fmod(data)                                           (0x00000001&(data))
#define  EARC_PLL_earc_SSC5_get_fcode_debug(data)                                ((0x07FF0000&(data))>>16)
#define  EARC_PLL_earc_SSC5_get_ncode_debug(data)                                ((0x0000FF00&(data))>>8)
#define  EARC_PLL_earc_SSC5_get_oc_done(data)                                    ((0x00000010&(data))>>4)
#define  EARC_PLL_earc_SSC5_get_fmod(data)                                       (0x00000001&(data))

#define  EARC_earc_dphy0                                                        0x180B8028
#define  EARC_earc_dphy0_reg_addr                                                "0xB80B8028"
#define  EARC_earc_dphy0_reg                                                     0xB80B8028
#define  EARC_earc_dphy0_inst_addr                                               "0x0009"
#define  set_EARC_earc_dphy0_reg(data)                                           (*((volatile unsigned int*)EARC_earc_dphy0_reg)=data)
#define  get_EARC_earc_dphy0_reg                                                 (*((volatile unsigned int*)EARC_earc_dphy0_reg))
#define  EARC_earc_dphy0_debug_mux_shift                                         (31)
#define  EARC_earc_dphy0_df_clk_div_shift                                        (21)
#define  EARC_earc_dphy0_df_tx_on_shift                                          (20)
#define  EARC_earc_dphy0_pi_cur_sel_shift                                        (18)
#define  EARC_earc_dphy0_debug_sel_shift                                         (12)
#define  EARC_earc_dphy0_cm_tx_data_inv_shift                                    (11)
#define  EARC_earc_dphy0_cm_start_mode_shift                                     (8)
#define  EARC_earc_dphy0_cm_rx_data_inv_shift                                    (7)
#define  EARC_earc_dphy0_cm_prbs_sel_shift                                       (5)
#define  EARC_earc_dphy0_cm_prbs_inv_shift                                       (4)
#define  EARC_earc_dphy0_cm_prbs_en_shift                                        (3)
#define  EARC_earc_dphy0_cm_prbs_clr_shift                                       (2)
#define  EARC_earc_dphy0_cm_fifo_clr_shift                                       (1)
#define  EARC_earc_dphy0_cm_fifo_bypass_shift                                    (0)
#define  EARC_earc_dphy0_debug_mux_mask                                          (0x80000000)
#define  EARC_earc_dphy0_df_clk_div_mask                                         (0x00600000)
#define  EARC_earc_dphy0_df_tx_on_mask                                           (0x00100000)
#define  EARC_earc_dphy0_pi_cur_sel_mask                                         (0x000C0000)
#define  EARC_earc_dphy0_debug_sel_mask                                          (0x0003F000)
#define  EARC_earc_dphy0_cm_tx_data_inv_mask                                     (0x00000800)
#define  EARC_earc_dphy0_cm_start_mode_mask                                      (0x00000700)
#define  EARC_earc_dphy0_cm_rx_data_inv_mask                                     (0x00000080)
#define  EARC_earc_dphy0_cm_prbs_sel_mask                                        (0x00000060)
#define  EARC_earc_dphy0_cm_prbs_inv_mask                                        (0x00000010)
#define  EARC_earc_dphy0_cm_prbs_en_mask                                         (0x00000008)
#define  EARC_earc_dphy0_cm_prbs_clr_mask                                        (0x00000004)
#define  EARC_earc_dphy0_cm_fifo_clr_mask                                        (0x00000002)
#define  EARC_earc_dphy0_cm_fifo_bypass_mask                                     (0x00000001)
#define  EARC_earc_dphy0_debug_mux(data)                                         (0x80000000&((data)<<31))
#define  EARC_earc_dphy0_df_clk_div(data)                                        (0x00600000&((data)<<21))
#define  EARC_earc_dphy0_df_tx_on(data)                                          (0x00100000&((data)<<20))
#define  EARC_earc_dphy0_pi_cur_sel(data)                                        (0x000C0000&((data)<<18))
#define  EARC_earc_dphy0_debug_sel(data)                                         (0x0003F000&((data)<<12))
#define  EARC_earc_dphy0_cm_tx_data_inv(data)                                    (0x00000800&((data)<<11))
#define  EARC_earc_dphy0_cm_start_mode(data)                                     (0x00000700&((data)<<8))
#define  EARC_earc_dphy0_cm_rx_data_inv(data)                                    (0x00000080&((data)<<7))
#define  EARC_earc_dphy0_cm_prbs_sel(data)                                       (0x00000060&((data)<<5))
#define  EARC_earc_dphy0_cm_prbs_inv(data)                                       (0x00000010&((data)<<4))
#define  EARC_earc_dphy0_cm_prbs_en(data)                                        (0x00000008&((data)<<3))
#define  EARC_earc_dphy0_cm_prbs_clr(data)                                       (0x00000004&((data)<<2))
#define  EARC_earc_dphy0_cm_fifo_clr(data)                                       (0x00000002&((data)<<1))
#define  EARC_earc_dphy0_cm_fifo_bypass(data)                                    (0x00000001&(data))
#define  EARC_earc_dphy0_get_debug_mux(data)                                     ((0x80000000&(data))>>31)
#define  EARC_earc_dphy0_get_df_clk_div(data)                                    ((0x00600000&(data))>>21)
#define  EARC_earc_dphy0_get_df_tx_on(data)                                      ((0x00100000&(data))>>20)
#define  EARC_earc_dphy0_get_pi_cur_sel(data)                                    ((0x000C0000&(data))>>18)
#define  EARC_earc_dphy0_get_debug_sel(data)                                     ((0x0003F000&(data))>>12)
#define  EARC_earc_dphy0_get_cm_tx_data_inv(data)                                ((0x00000800&(data))>>11)
#define  EARC_earc_dphy0_get_cm_start_mode(data)                                 ((0x00000700&(data))>>8)
#define  EARC_earc_dphy0_get_cm_rx_data_inv(data)                                ((0x00000080&(data))>>7)
#define  EARC_earc_dphy0_get_cm_prbs_sel(data)                                   ((0x00000060&(data))>>5)
#define  EARC_earc_dphy0_get_cm_prbs_inv(data)                                   ((0x00000010&(data))>>4)
#define  EARC_earc_dphy0_get_cm_prbs_en(data)                                    ((0x00000008&(data))>>3)
#define  EARC_earc_dphy0_get_cm_prbs_clr(data)                                   ((0x00000004&(data))>>2)
#define  EARC_earc_dphy0_get_cm_fifo_clr(data)                                   ((0x00000002&(data))>>1)
#define  EARC_earc_dphy0_get_cm_fifo_bypass(data)                                (0x00000001&(data))

#define  EARC_earc_dphy1                                                        0x180B802C
#define  EARC_earc_dphy1_reg_addr                                                "0xB80B802C"
#define  EARC_earc_dphy1_reg                                                     0xB80B802C
#define  EARC_earc_dphy1_inst_addr                                               "0x000A"
#define  set_EARC_earc_dphy1_reg(data)                                           (*((volatile unsigned int*)EARC_earc_dphy1_reg)=data)
#define  get_EARC_earc_dphy1_reg                                                 (*((volatile unsigned int*)EARC_earc_dphy1_reg))
#define  EARC_earc_dphy1_cm_rx_response_shift                                    (24)
#define  EARC_earc_dphy1_debug_ro_shift                                          (16)
#define  EARC_earc_dphy1_prbs_num_shift                                          (8)
#define  EARC_earc_dphy1_df_prbs_sel_shift                                       (6)
#define  EARC_earc_dphy1_df_prbs_inv_shift                                       (5)
#define  EARC_earc_dphy1_df_prbs_en_shift                                        (4)
#define  EARC_earc_dphy1_df_prbs_clr_shift                                       (3)
#define  EARC_earc_dphy1_df_out_inv_shift                                        (2)
#define  EARC_earc_dphy1_df_data_sel_shift                                       (1)
#define  EARC_earc_dphy1_df_data_inv_shift                                       (0)
#define  EARC_earc_dphy1_cm_rx_response_mask                                     (0x3F000000)
#define  EARC_earc_dphy1_debug_ro_mask                                           (0x00FF0000)
#define  EARC_earc_dphy1_prbs_num_mask                                           (0x0000FF00)
#define  EARC_earc_dphy1_df_prbs_sel_mask                                        (0x000000C0)
#define  EARC_earc_dphy1_df_prbs_inv_mask                                        (0x00000020)
#define  EARC_earc_dphy1_df_prbs_en_mask                                         (0x00000010)
#define  EARC_earc_dphy1_df_prbs_clr_mask                                        (0x00000008)
#define  EARC_earc_dphy1_df_out_inv_mask                                         (0x00000004)
#define  EARC_earc_dphy1_df_data_sel_mask                                        (0x00000002)
#define  EARC_earc_dphy1_df_data_inv_mask                                        (0x00000001)
#define  EARC_earc_dphy1_cm_rx_response(data)                                    (0x3F000000&((data)<<24))
#define  EARC_earc_dphy1_debug_ro(data)                                          (0x00FF0000&((data)<<16))
#define  EARC_earc_dphy1_prbs_num(data)                                          (0x0000FF00&((data)<<8))
#define  EARC_earc_dphy1_df_prbs_sel(data)                                       (0x000000C0&((data)<<6))
#define  EARC_earc_dphy1_df_prbs_inv(data)                                       (0x00000020&((data)<<5))
#define  EARC_earc_dphy1_df_prbs_en(data)                                        (0x00000010&((data)<<4))
#define  EARC_earc_dphy1_df_prbs_clr(data)                                       (0x00000008&((data)<<3))
#define  EARC_earc_dphy1_df_out_inv(data)                                        (0x00000004&((data)<<2))
#define  EARC_earc_dphy1_df_data_sel(data)                                       (0x00000002&((data)<<1))
#define  EARC_earc_dphy1_df_data_inv(data)                                       (0x00000001&(data))
#define  EARC_earc_dphy1_get_cm_rx_response(data)                                ((0x3F000000&(data))>>24)
#define  EARC_earc_dphy1_get_debug_ro(data)                                      ((0x00FF0000&(data))>>16)
#define  EARC_earc_dphy1_get_prbs_num(data)                                      ((0x0000FF00&(data))>>8)
#define  EARC_earc_dphy1_get_df_prbs_sel(data)                                   ((0x000000C0&(data))>>6)
#define  EARC_earc_dphy1_get_df_prbs_inv(data)                                   ((0x00000020&(data))>>5)
#define  EARC_earc_dphy1_get_df_prbs_en(data)                                    ((0x00000010&(data))>>4)
#define  EARC_earc_dphy1_get_df_prbs_clr(data)                                   ((0x00000008&(data))>>3)
#define  EARC_earc_dphy1_get_df_out_inv(data)                                    ((0x00000004&(data))>>2)
#define  EARC_earc_dphy1_get_df_data_sel(data)                                   ((0x00000002&(data))>>1)
#define  EARC_earc_dphy1_get_df_data_inv(data)                                   (0x00000001&(data))

#define  EARC_earc_dphy2                                                        0x180B8030
#define  EARC_earc_dphy2_reg_addr                                                "0xB80B8030"
#define  EARC_earc_dphy2_reg                                                     0xB80B8030
#define  EARC_earc_dphy2_inst_addr                                               "0x000B"
#define  set_EARC_earc_dphy2_reg(data)                                           (*((volatile unsigned int*)EARC_earc_dphy2_reg)=data)
#define  get_EARC_earc_dphy2_reg                                                 (*((volatile unsigned int*)EARC_earc_dphy2_reg))
#define  EARC_earc_dphy2_reserved_dphy_shift                                     (0)
#define  EARC_earc_dphy2_reserved_dphy_mask                                      (0xFFFFFFFF)
#define  EARC_earc_dphy2_reserved_dphy(data)                                     (0xFFFFFFFF&(data))
#define  EARC_earc_dphy2_get_reserved_dphy(data)                                 (0xFFFFFFFF&(data))

#define  EARC_earc_db_ctrl                                                      0x180B8034
#define  EARC_earc_db_ctrl_reg_addr                                              "0xB80B8034"
#define  EARC_earc_db_ctrl_reg                                                   0xB80B8034
#define  EARC_earc_db_ctrl_inst_addr                                             "0x000C"
#define  set_EARC_earc_db_ctrl_reg(data)                                         (*((volatile unsigned int*)EARC_earc_db_ctrl_reg)=data)
#define  get_EARC_earc_db_ctrl_reg                                               (*((volatile unsigned int*)EARC_earc_db_ctrl_reg))
#define  EARC_earc_db_ctrl_rstn_plldig_shift                                     (4)
#define  EARC_earc_db_ctrl_rstn_earcdphy_shift                                   (3)
#define  EARC_earc_db_ctrl_db_en_shift                                           (2)
#define  EARC_earc_db_ctrl_db_read_shift                                         (1)
#define  EARC_earc_db_ctrl_db_apply_shift                                        (0)
#define  EARC_earc_db_ctrl_rstn_plldig_mask                                      (0x00000010)
#define  EARC_earc_db_ctrl_rstn_earcdphy_mask                                    (0x00000008)
#define  EARC_earc_db_ctrl_db_en_mask                                            (0x00000004)
#define  EARC_earc_db_ctrl_db_read_mask                                          (0x00000002)
#define  EARC_earc_db_ctrl_db_apply_mask                                         (0x00000001)
#define  EARC_earc_db_ctrl_rstn_plldig(data)                                     (0x00000010&((data)<<4))
#define  EARC_earc_db_ctrl_rstn_earcdphy(data)                                   (0x00000008&((data)<<3))
#define  EARC_earc_db_ctrl_db_en(data)                                           (0x00000004&((data)<<2))
#define  EARC_earc_db_ctrl_db_read(data)                                         (0x00000002&((data)<<1))
#define  EARC_earc_db_ctrl_db_apply(data)                                        (0x00000001&(data))
#define  EARC_earc_db_ctrl_get_rstn_plldig(data)                                 ((0x00000010&(data))>>4)
#define  EARC_earc_db_ctrl_get_rstn_earcdphy(data)                               ((0x00000008&(data))>>3)
#define  EARC_earc_db_ctrl_get_db_en(data)                                       ((0x00000004&(data))>>2)
#define  EARC_earc_db_ctrl_get_db_read(data)                                     ((0x00000002&(data))>>1)
#define  EARC_earc_db_ctrl_get_db_apply(data)                                    (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======EARC register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ck_1x_48k_mode:4;
        RBus_UInt32  dummy180b8000_27_24:4;
        RBus_UInt32  eclk_test_x:5;
        RBus_UInt32  eclk_test_y:3;
        RBus_UInt32  res1:15;
        RBus_UInt32  earc_1x_inv_en:1;
    };
}earc_earc_1x_48k_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pow_earc_driver:1;
        RBus_UInt32  pow_earc_mbias:1;
        RBus_UInt32  pow_earc_pll:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  earc_date_sel:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  df_ck_sel:1;
        RBus_UInt32  df_trf_sel:2;
        RBus_UInt32  earc_pll_cp:2;
        RBus_UInt32  earc_pll_cs:2;
        RBus_UInt32  earc_pll_dbug_en:1;
        RBus_UInt32  earc_pll_ip:4;
        RBus_UInt32  earc_pll_k:3;
        RBus_UInt32  earc_pll_oeb:1;
        RBus_UInt32  earc_pll_rs:3;
        RBus_UInt32  earc_pll_wdrst:1;
        RBus_UInt32  earc_pll_wdset:1;
    };
}earc_earc_ana_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cm_ib_sel:3;
        RBus_UInt32  ldo18v_sel:2;
        RBus_UInt32  earc_pll_p:2;
        RBus_UInt32  earc_pll_pibypass:1;
        RBus_UInt32  r300_sel:3;
        RBus_UInt32  r60_sel:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  reserved_aphy:8;
        RBus_UInt32  r_test_en:1;
        RBus_UInt32  r_en:4;
    };
}earc_earc_ana_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rstb_earc_pll:1;
        RBus_UInt32  rstb_spk_div:1;
        RBus_UInt32  cm_trf_sel:3;
        RBus_UInt32  df_ib_sel:3;
        RBus_UInt32  earc_saving_mode:1;
        RBus_UInt32  earc_test_mode:1;
        RBus_UInt32  earc_test_sel:4;
        RBus_UInt32  ldo18v_ref_sel:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  vol_level_df:1;
        RBus_UInt32  vol_level_cm:1;
        RBus_UInt32  vol_level_extra:2;
        RBus_UInt32  df_duty_sel:3;
        RBus_UInt32  earc_pll_ckrdy_fast:1;
        RBus_UInt32  rstb_pll_vco:1;
        RBus_UInt32  pow_earc_ldo:1;
    };
}earc_earc_ana_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fcode_t:11;
        RBus_UInt32  res2:2;
        RBus_UInt32  oc_step_set:10;
        RBus_UInt32  res3:3;
        RBus_UInt32  oc_en:1;
    };
}earc_pll_earc_ssc0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  oc_done_delay:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  hs_oc_stop_diff:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  sel_oc_mode:2;
        RBus_UInt32  res4:8;
    };
}earc_pll_earc_ssc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  en_pi_debug:1;
        RBus_UInt32  sdm_order:1;
        RBus_UInt32  bypass_pi:1;
    };
}earc_pll_earc_ssc2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ncode_t:8;
        RBus_UInt32  res2:5;
        RBus_UInt32  res3:11;
    };
}earc_pll_ssc3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}earc_pll_earc_ssc4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fcode_debug:11;
        RBus_UInt32  ncode_debug:8;
        RBus_UInt32  res2:3;
        RBus_UInt32  oc_done:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  fmod:1;
    };
}earc_pll_earc_ssc5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  debug_mux:1;
        RBus_UInt32  res1:8;
        RBus_UInt32  df_clk_div:2;
        RBus_UInt32  df_tx_on:1;
        RBus_UInt32  pi_cur_sel:2;
        RBus_UInt32  debug_sel:6;
        RBus_UInt32  cm_tx_data_inv:1;
        RBus_UInt32  cm_start_mode:3;
        RBus_UInt32  cm_rx_data_inv:1;
        RBus_UInt32  cm_prbs_sel:2;
        RBus_UInt32  cm_prbs_inv:1;
        RBus_UInt32  cm_prbs_en:1;
        RBus_UInt32  cm_prbs_clr:1;
        RBus_UInt32  cm_fifo_clr:1;
        RBus_UInt32  cm_fifo_bypass:1;
    };
}earc_earc_dphy0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  cm_rx_response:6;
        RBus_UInt32  debug_ro:8;
        RBus_UInt32  prbs_num:8;
        RBus_UInt32  df_prbs_sel:2;
        RBus_UInt32  df_prbs_inv:1;
        RBus_UInt32  df_prbs_en:1;
        RBus_UInt32  df_prbs_clr:1;
        RBus_UInt32  df_out_inv:1;
        RBus_UInt32  df_data_sel:1;
        RBus_UInt32  df_data_inv:1;
    };
}earc_earc_dphy1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_dphy:32;
    };
}earc_earc_dphy2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  rstn_plldig:1;
        RBus_UInt32  rstn_earcdphy:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  db_read:1;
        RBus_UInt32  db_apply:1;
    };
}earc_earc_db_ctrl_RBUS;

#else //apply LITTLE_ENDIAN

//======EARC register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  earc_1x_inv_en:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  eclk_test_y:3;
        RBus_UInt32  eclk_test_x:5;
        RBus_UInt32  dummy180b8000_27_24:4;
        RBus_UInt32  ck_1x_48k_mode:4;
    };
}earc_earc_1x_48k_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  earc_pll_wdset:1;
        RBus_UInt32  earc_pll_wdrst:1;
        RBus_UInt32  earc_pll_rs:3;
        RBus_UInt32  earc_pll_oeb:1;
        RBus_UInt32  earc_pll_k:3;
        RBus_UInt32  earc_pll_ip:4;
        RBus_UInt32  earc_pll_dbug_en:1;
        RBus_UInt32  earc_pll_cs:2;
        RBus_UInt32  earc_pll_cp:2;
        RBus_UInt32  df_trf_sel:2;
        RBus_UInt32  df_ck_sel:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  earc_date_sel:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pow_earc_pll:1;
        RBus_UInt32  pow_earc_mbias:1;
        RBus_UInt32  pow_earc_driver:1;
    };
}earc_earc_ana_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  r_en:4;
        RBus_UInt32  r_test_en:1;
        RBus_UInt32  reserved_aphy:8;
        RBus_UInt32  res1:4;
        RBus_UInt32  r60_sel:4;
        RBus_UInt32  r300_sel:3;
        RBus_UInt32  earc_pll_pibypass:1;
        RBus_UInt32  earc_pll_p:2;
        RBus_UInt32  ldo18v_sel:2;
        RBus_UInt32  cm_ib_sel:3;
    };
}earc_earc_ana_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pow_earc_ldo:1;
        RBus_UInt32  rstb_pll_vco:1;
        RBus_UInt32  earc_pll_ckrdy_fast:1;
        RBus_UInt32  df_duty_sel:3;
        RBus_UInt32  vol_level_extra:2;
        RBus_UInt32  vol_level_cm:1;
        RBus_UInt32  vol_level_df:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  ldo18v_ref_sel:1;
        RBus_UInt32  earc_test_sel:4;
        RBus_UInt32  earc_test_mode:1;
        RBus_UInt32  earc_saving_mode:1;
        RBus_UInt32  df_ib_sel:3;
        RBus_UInt32  cm_trf_sel:3;
        RBus_UInt32  rstb_spk_div:1;
        RBus_UInt32  rstb_earc_pll:1;
    };
}earc_earc_ana_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  oc_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  oc_step_set:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  fcode_t:11;
        RBus_UInt32  res3:5;
    };
}earc_pll_earc_ssc0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  sel_oc_mode:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  hs_oc_stop_diff:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  oc_done_delay:6;
        RBus_UInt32  res4:10;
    };
}earc_pll_earc_ssc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bypass_pi:1;
        RBus_UInt32  sdm_order:1;
        RBus_UInt32  en_pi_debug:1;
        RBus_UInt32  res1:29;
    };
}earc_pll_earc_ssc2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  ncode_t:8;
        RBus_UInt32  res3:8;
    };
}earc_pll_ssc3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}earc_pll_earc_ssc4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmod:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  oc_done:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  ncode_debug:8;
        RBus_UInt32  fcode_debug:11;
        RBus_UInt32  res3:5;
    };
}earc_pll_earc_ssc5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cm_fifo_bypass:1;
        RBus_UInt32  cm_fifo_clr:1;
        RBus_UInt32  cm_prbs_clr:1;
        RBus_UInt32  cm_prbs_en:1;
        RBus_UInt32  cm_prbs_inv:1;
        RBus_UInt32  cm_prbs_sel:2;
        RBus_UInt32  cm_rx_data_inv:1;
        RBus_UInt32  cm_start_mode:3;
        RBus_UInt32  cm_tx_data_inv:1;
        RBus_UInt32  debug_sel:6;
        RBus_UInt32  pi_cur_sel:2;
        RBus_UInt32  df_tx_on:1;
        RBus_UInt32  df_clk_div:2;
        RBus_UInt32  res1:8;
        RBus_UInt32  debug_mux:1;
    };
}earc_earc_dphy0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  df_data_inv:1;
        RBus_UInt32  df_data_sel:1;
        RBus_UInt32  df_out_inv:1;
        RBus_UInt32  df_prbs_clr:1;
        RBus_UInt32  df_prbs_en:1;
        RBus_UInt32  df_prbs_inv:1;
        RBus_UInt32  df_prbs_sel:2;
        RBus_UInt32  prbs_num:8;
        RBus_UInt32  debug_ro:8;
        RBus_UInt32  cm_rx_response:6;
        RBus_UInt32  res1:2;
    };
}earc_earc_dphy1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_dphy:32;
    };
}earc_earc_dphy2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  db_apply:1;
        RBus_UInt32  db_read:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  rstn_earcdphy:1;
        RBus_UInt32  rstn_plldig:1;
        RBus_UInt32  res1:27;
    };
}earc_earc_db_ctrl_RBUS;




#endif 


#endif 
