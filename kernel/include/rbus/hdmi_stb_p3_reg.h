/**
* @file Merlin5-DesignSpec-P3_STB
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_HDMI_STB_P3_REG_H_
#define _RBUS_HDMI_STB_P3_REG_H_

#include "rbus_types.h"



//  HDMI_STB_P3 Register Address
#define  HDMI_STB_P3_SCDC_CR                                                    0x180BD300
#define  HDMI_STB_P3_SCDC_CR_reg_addr                                            "0xB80BD300"
#define  HDMI_STB_P3_SCDC_CR_reg                                                 0xB80BD300
#define  HDMI_STB_P3_SCDC_CR_inst_addr                                           "0x0000"
#define  set_HDMI_STB_P3_SCDC_CR_reg(data)                                       (*((volatile unsigned int*)HDMI_STB_P3_SCDC_CR_reg)=data)
#define  get_HDMI_STB_P3_SCDC_CR_reg                                             (*((volatile unsigned int*)HDMI_STB_P3_SCDC_CR_reg))
#define  HDMI_STB_P3_SCDC_CR_update11_hwauto_en_shift                            (24)
#define  HDMI_STB_P3_SCDC_CR_update10_hwauto_en_shift                            (16)
#define  HDMI_STB_P3_SCDC_CR_status_flags_chg_irq_shift                          (13)
#define  HDMI_STB_P3_SCDC_CR_hw_mask_en_shift                                    (12)
#define  HDMI_STB_P3_SCDC_CR_irq_cpu_gen_shift                                   (11)
#define  HDMI_STB_P3_SCDC_CR_write20_det_irq_flag_shift                          (10)
#define  HDMI_STB_P3_SCDC_CR_write20_det_irq_en_shift                            (9)
#define  HDMI_STB_P3_SCDC_CR_pending_shift                                       (8)
#define  HDMI_STB_P3_SCDC_CR_scdc_err_det_sum_port_shift                         (7)
#define  HDMI_STB_P3_SCDC_CR_scdc_sel_shift                                      (6)
#define  HDMI_STB_P3_SCDC_CR_scdc_reset_shift                                    (5)
#define  HDMI_STB_P3_SCDC_CR_write31_det_irq_flag_shift                          (4)
#define  HDMI_STB_P3_SCDC_CR_write31_det_irq_en_shift                            (3)
#define  HDMI_STB_P3_SCDC_CR_frl_start_src_clr_en_shift                          (2)
#define  HDMI_STB_P3_SCDC_CR_maddf_shift                                         (1)
#define  HDMI_STB_P3_SCDC_CR_scdc_en_shift                                       (0)
#define  HDMI_STB_P3_SCDC_CR_update11_hwauto_en_mask                             (0xFF000000)
#define  HDMI_STB_P3_SCDC_CR_update10_hwauto_en_mask                             (0x00FF0000)
#define  HDMI_STB_P3_SCDC_CR_status_flags_chg_irq_mask                           (0x00002000)
#define  HDMI_STB_P3_SCDC_CR_hw_mask_en_mask                                     (0x00001000)
#define  HDMI_STB_P3_SCDC_CR_irq_cpu_gen_mask                                    (0x00000800)
#define  HDMI_STB_P3_SCDC_CR_write20_det_irq_flag_mask                           (0x00000400)
#define  HDMI_STB_P3_SCDC_CR_write20_det_irq_en_mask                             (0x00000200)
#define  HDMI_STB_P3_SCDC_CR_pending_mask                                        (0x00000100)
#define  HDMI_STB_P3_SCDC_CR_scdc_err_det_sum_port_mask                          (0x00000080)
#define  HDMI_STB_P3_SCDC_CR_scdc_sel_mask                                       (0x00000040)
#define  HDMI_STB_P3_SCDC_CR_scdc_reset_mask                                     (0x00000020)
#define  HDMI_STB_P3_SCDC_CR_write31_det_irq_flag_mask                           (0x00000010)
#define  HDMI_STB_P3_SCDC_CR_write31_det_irq_en_mask                             (0x00000008)
#define  HDMI_STB_P3_SCDC_CR_frl_start_src_clr_en_mask                           (0x00000004)
#define  HDMI_STB_P3_SCDC_CR_maddf_mask                                          (0x00000002)
#define  HDMI_STB_P3_SCDC_CR_scdc_en_mask                                        (0x00000001)
#define  HDMI_STB_P3_SCDC_CR_update11_hwauto_en(data)                            (0xFF000000&((data)<<24))
#define  HDMI_STB_P3_SCDC_CR_update10_hwauto_en(data)                            (0x00FF0000&((data)<<16))
#define  HDMI_STB_P3_SCDC_CR_status_flags_chg_irq(data)                          (0x00002000&((data)<<13))
#define  HDMI_STB_P3_SCDC_CR_hw_mask_en(data)                                    (0x00001000&((data)<<12))
#define  HDMI_STB_P3_SCDC_CR_irq_cpu_gen(data)                                   (0x00000800&((data)<<11))
#define  HDMI_STB_P3_SCDC_CR_write20_det_irq_flag(data)                          (0x00000400&((data)<<10))
#define  HDMI_STB_P3_SCDC_CR_write20_det_irq_en(data)                            (0x00000200&((data)<<9))
#define  HDMI_STB_P3_SCDC_CR_pending(data)                                       (0x00000100&((data)<<8))
#define  HDMI_STB_P3_SCDC_CR_scdc_err_det_sum_port(data)                         (0x00000080&((data)<<7))
#define  HDMI_STB_P3_SCDC_CR_scdc_sel(data)                                      (0x00000040&((data)<<6))
#define  HDMI_STB_P3_SCDC_CR_scdc_reset(data)                                    (0x00000020&((data)<<5))
#define  HDMI_STB_P3_SCDC_CR_write31_det_irq_flag(data)                          (0x00000010&((data)<<4))
#define  HDMI_STB_P3_SCDC_CR_write31_det_irq_en(data)                            (0x00000008&((data)<<3))
#define  HDMI_STB_P3_SCDC_CR_frl_start_src_clr_en(data)                          (0x00000004&((data)<<2))
#define  HDMI_STB_P3_SCDC_CR_maddf(data)                                         (0x00000002&((data)<<1))
#define  HDMI_STB_P3_SCDC_CR_scdc_en(data)                                       (0x00000001&(data))
#define  HDMI_STB_P3_SCDC_CR_get_update11_hwauto_en(data)                        ((0xFF000000&(data))>>24)
#define  HDMI_STB_P3_SCDC_CR_get_update10_hwauto_en(data)                        ((0x00FF0000&(data))>>16)
#define  HDMI_STB_P3_SCDC_CR_get_status_flags_chg_irq(data)                      ((0x00002000&(data))>>13)
#define  HDMI_STB_P3_SCDC_CR_get_hw_mask_en(data)                                ((0x00001000&(data))>>12)
#define  HDMI_STB_P3_SCDC_CR_get_irq_cpu_gen(data)                               ((0x00000800&(data))>>11)
#define  HDMI_STB_P3_SCDC_CR_get_write20_det_irq_flag(data)                      ((0x00000400&(data))>>10)
#define  HDMI_STB_P3_SCDC_CR_get_write20_det_irq_en(data)                        ((0x00000200&(data))>>9)
#define  HDMI_STB_P3_SCDC_CR_get_pending(data)                                   ((0x00000100&(data))>>8)
#define  HDMI_STB_P3_SCDC_CR_get_scdc_err_det_sum_port(data)                     ((0x00000080&(data))>>7)
#define  HDMI_STB_P3_SCDC_CR_get_scdc_sel(data)                                  ((0x00000040&(data))>>6)
#define  HDMI_STB_P3_SCDC_CR_get_scdc_reset(data)                                ((0x00000020&(data))>>5)
#define  HDMI_STB_P3_SCDC_CR_get_write31_det_irq_flag(data)                      ((0x00000010&(data))>>4)
#define  HDMI_STB_P3_SCDC_CR_get_write31_det_irq_en(data)                        ((0x00000008&(data))>>3)
#define  HDMI_STB_P3_SCDC_CR_get_frl_start_src_clr_en(data)                      ((0x00000004&(data))>>2)
#define  HDMI_STB_P3_SCDC_CR_get_maddf(data)                                     ((0x00000002&(data))>>1)
#define  HDMI_STB_P3_SCDC_CR_get_scdc_en(data)                                   (0x00000001&(data))

#define  HDMI_STB_P3_SCDC_PCR                                                   0x180BD304
#define  HDMI_STB_P3_SCDC_PCR_reg_addr                                           "0xB80BD304"
#define  HDMI_STB_P3_SCDC_PCR_reg                                                0xB80BD304
#define  HDMI_STB_P3_SCDC_PCR_inst_addr                                          "0x0001"
#define  set_HDMI_STB_P3_SCDC_PCR_reg(data)                                      (*((volatile unsigned int*)HDMI_STB_P3_SCDC_PCR_reg)=data)
#define  get_HDMI_STB_P3_SCDC_PCR_reg                                            (*((volatile unsigned int*)HDMI_STB_P3_SCDC_PCR_reg))
#define  HDMI_STB_P3_SCDC_PCR_timeout_flag_shift                                 (31)
#define  HDMI_STB_P3_SCDC_PCR_timeout_sel_shift                                  (29)
#define  HDMI_STB_P3_SCDC_PCR_status_flag_shift                                  (28)
#define  HDMI_STB_P3_SCDC_PCR_config_flag_shift                                  (27)
#define  HDMI_STB_P3_SCDC_PCR_scrambler_status_flag_shift                        (26)
#define  HDMI_STB_P3_SCDC_PCR_tmds_config_flag_shift                             (25)
#define  HDMI_STB_P3_SCDC_PCR_i2c_scl_dly_sel_shift                              (21)
#define  HDMI_STB_P3_SCDC_PCR_i2c_sda_dly_sel_shift                              (17)
#define  HDMI_STB_P3_SCDC_PCR_i2c_free_num_shift                                 (10)
#define  HDMI_STB_P3_SCDC_PCR_rr_retry_sel_shift                                 (8)
#define  HDMI_STB_P3_SCDC_PCR_dbnc_level_sel_shift                               (7)
#define  HDMI_STB_P3_SCDC_PCR_dummy_6_3_shift                                    (3)
#define  HDMI_STB_P3_SCDC_PCR_test_rr_added_delay_sel_shift                      (1)
#define  HDMI_STB_P3_SCDC_PCR_apai_shift                                         (0)
#define  HDMI_STB_P3_SCDC_PCR_timeout_flag_mask                                  (0x80000000)
#define  HDMI_STB_P3_SCDC_PCR_timeout_sel_mask                                   (0x60000000)
#define  HDMI_STB_P3_SCDC_PCR_status_flag_mask                                   (0x10000000)
#define  HDMI_STB_P3_SCDC_PCR_config_flag_mask                                   (0x08000000)
#define  HDMI_STB_P3_SCDC_PCR_scrambler_status_flag_mask                         (0x04000000)
#define  HDMI_STB_P3_SCDC_PCR_tmds_config_flag_mask                              (0x02000000)
#define  HDMI_STB_P3_SCDC_PCR_i2c_scl_dly_sel_mask                               (0x01E00000)
#define  HDMI_STB_P3_SCDC_PCR_i2c_sda_dly_sel_mask                               (0x001E0000)
#define  HDMI_STB_P3_SCDC_PCR_i2c_free_num_mask                                  (0x0001FC00)
#define  HDMI_STB_P3_SCDC_PCR_rr_retry_sel_mask                                  (0x00000300)
#define  HDMI_STB_P3_SCDC_PCR_dbnc_level_sel_mask                                (0x00000080)
#define  HDMI_STB_P3_SCDC_PCR_dummy_6_3_mask                                     (0x00000078)
#define  HDMI_STB_P3_SCDC_PCR_test_rr_added_delay_sel_mask                       (0x00000006)
#define  HDMI_STB_P3_SCDC_PCR_apai_mask                                          (0x00000001)
#define  HDMI_STB_P3_SCDC_PCR_timeout_flag(data)                                 (0x80000000&((data)<<31))
#define  HDMI_STB_P3_SCDC_PCR_timeout_sel(data)                                  (0x60000000&((data)<<29))
#define  HDMI_STB_P3_SCDC_PCR_status_flag(data)                                  (0x10000000&((data)<<28))
#define  HDMI_STB_P3_SCDC_PCR_config_flag(data)                                  (0x08000000&((data)<<27))
#define  HDMI_STB_P3_SCDC_PCR_scrambler_status_flag(data)                        (0x04000000&((data)<<26))
#define  HDMI_STB_P3_SCDC_PCR_tmds_config_flag(data)                             (0x02000000&((data)<<25))
#define  HDMI_STB_P3_SCDC_PCR_i2c_scl_dly_sel(data)                              (0x01E00000&((data)<<21))
#define  HDMI_STB_P3_SCDC_PCR_i2c_sda_dly_sel(data)                              (0x001E0000&((data)<<17))
#define  HDMI_STB_P3_SCDC_PCR_i2c_free_num(data)                                 (0x0001FC00&((data)<<10))
#define  HDMI_STB_P3_SCDC_PCR_rr_retry_sel(data)                                 (0x00000300&((data)<<8))
#define  HDMI_STB_P3_SCDC_PCR_dbnc_level_sel(data)                               (0x00000080&((data)<<7))
#define  HDMI_STB_P3_SCDC_PCR_dummy_6_3(data)                                    (0x00000078&((data)<<3))
#define  HDMI_STB_P3_SCDC_PCR_test_rr_added_delay_sel(data)                      (0x00000006&((data)<<1))
#define  HDMI_STB_P3_SCDC_PCR_apai(data)                                         (0x00000001&(data))
#define  HDMI_STB_P3_SCDC_PCR_get_timeout_flag(data)                             ((0x80000000&(data))>>31)
#define  HDMI_STB_P3_SCDC_PCR_get_timeout_sel(data)                              ((0x60000000&(data))>>29)
#define  HDMI_STB_P3_SCDC_PCR_get_status_flag(data)                              ((0x10000000&(data))>>28)
#define  HDMI_STB_P3_SCDC_PCR_get_config_flag(data)                              ((0x08000000&(data))>>27)
#define  HDMI_STB_P3_SCDC_PCR_get_scrambler_status_flag(data)                    ((0x04000000&(data))>>26)
#define  HDMI_STB_P3_SCDC_PCR_get_tmds_config_flag(data)                         ((0x02000000&(data))>>25)
#define  HDMI_STB_P3_SCDC_PCR_get_i2c_scl_dly_sel(data)                          ((0x01E00000&(data))>>21)
#define  HDMI_STB_P3_SCDC_PCR_get_i2c_sda_dly_sel(data)                          ((0x001E0000&(data))>>17)
#define  HDMI_STB_P3_SCDC_PCR_get_i2c_free_num(data)                             ((0x0001FC00&(data))>>10)
#define  HDMI_STB_P3_SCDC_PCR_get_rr_retry_sel(data)                             ((0x00000300&(data))>>8)
#define  HDMI_STB_P3_SCDC_PCR_get_dbnc_level_sel(data)                           ((0x00000080&(data))>>7)
#define  HDMI_STB_P3_SCDC_PCR_get_dummy_6_3(data)                                ((0x00000078&(data))>>3)
#define  HDMI_STB_P3_SCDC_PCR_get_test_rr_added_delay_sel(data)                  ((0x00000006&(data))>>1)
#define  HDMI_STB_P3_SCDC_PCR_get_apai(data)                                     (0x00000001&(data))

#define  HDMI_STB_P3_SCDC_AP                                                    0x180BD308
#define  HDMI_STB_P3_SCDC_AP_reg_addr                                            "0xB80BD308"
#define  HDMI_STB_P3_SCDC_AP_reg                                                 0xB80BD308
#define  HDMI_STB_P3_SCDC_AP_inst_addr                                           "0x0002"
#define  set_HDMI_STB_P3_SCDC_AP_reg(data)                                       (*((volatile unsigned int*)HDMI_STB_P3_SCDC_AP_reg)=data)
#define  get_HDMI_STB_P3_SCDC_AP_reg                                             (*((volatile unsigned int*)HDMI_STB_P3_SCDC_AP_reg))
#define  HDMI_STB_P3_SCDC_AP_ap1_shift                                           (0)
#define  HDMI_STB_P3_SCDC_AP_ap1_mask                                            (0x000000FF)
#define  HDMI_STB_P3_SCDC_AP_ap1(data)                                           (0x000000FF&(data))
#define  HDMI_STB_P3_SCDC_AP_get_ap1(data)                                       (0x000000FF&(data))

#define  HDMI_STB_P3_SCDC_DP                                                    0x180BD30C
#define  HDMI_STB_P3_SCDC_DP_reg_addr                                            "0xB80BD30C"
#define  HDMI_STB_P3_SCDC_DP_reg                                                 0xB80BD30C
#define  HDMI_STB_P3_SCDC_DP_inst_addr                                           "0x0003"
#define  set_HDMI_STB_P3_SCDC_DP_reg(data)                                       (*((volatile unsigned int*)HDMI_STB_P3_SCDC_DP_reg)=data)
#define  get_HDMI_STB_P3_SCDC_DP_reg                                             (*((volatile unsigned int*)HDMI_STB_P3_SCDC_DP_reg))
#define  HDMI_STB_P3_SCDC_DP_dp1_rwmask_shift                                    (8)
#define  HDMI_STB_P3_SCDC_DP_dp1_shift                                           (0)
#define  HDMI_STB_P3_SCDC_DP_dp1_rwmask_mask                                     (0x0000FF00)
#define  HDMI_STB_P3_SCDC_DP_dp1_mask                                            (0x000000FF)
#define  HDMI_STB_P3_SCDC_DP_dp1_rwmask(data)                                    (0x0000FF00&((data)<<8))
#define  HDMI_STB_P3_SCDC_DP_dp1(data)                                           (0x000000FF&(data))
#define  HDMI_STB_P3_SCDC_DP_get_dp1_rwmask(data)                                ((0x0000FF00&(data))>>8)
#define  HDMI_STB_P3_SCDC_DP_get_dp1(data)                                       (0x000000FF&(data))

#define  HDMI_STB_P3_HDCP_CR                                                    0x180BD310
#define  HDMI_STB_P3_HDCP_CR_reg_addr                                            "0xB80BD310"
#define  HDMI_STB_P3_HDCP_CR_reg                                                 0xB80BD310
#define  HDMI_STB_P3_HDCP_CR_inst_addr                                           "0x0004"
#define  set_HDMI_STB_P3_HDCP_CR_reg(data)                                       (*((volatile unsigned int*)HDMI_STB_P3_HDCP_CR_reg)=data)
#define  get_HDMI_STB_P3_HDCP_CR_reg                                             (*((volatile unsigned int*)HDMI_STB_P3_HDCP_CR_reg))
#define  HDMI_STB_P3_HDCP_CR_clr_ri_shift                                        (29)
#define  HDMI_STB_P3_HDCP_CR_cypher_dis_shift                                    (3)
#define  HDMI_STB_P3_HDCP_CR_maddf_shift                                         (2)
#define  HDMI_STB_P3_HDCP_CR_dkapde_shift                                        (1)
#define  HDMI_STB_P3_HDCP_CR_hdcp_en_shift                                       (0)
#define  HDMI_STB_P3_HDCP_CR_clr_ri_mask                                         (0x20000000)
#define  HDMI_STB_P3_HDCP_CR_cypher_dis_mask                                     (0x00000008)
#define  HDMI_STB_P3_HDCP_CR_maddf_mask                                          (0x00000004)
#define  HDMI_STB_P3_HDCP_CR_dkapde_mask                                         (0x00000002)
#define  HDMI_STB_P3_HDCP_CR_hdcp_en_mask                                        (0x00000001)
#define  HDMI_STB_P3_HDCP_CR_clr_ri(data)                                        (0x20000000&((data)<<29))
#define  HDMI_STB_P3_HDCP_CR_cypher_dis(data)                                    (0x00000008&((data)<<3))
#define  HDMI_STB_P3_HDCP_CR_maddf(data)                                         (0x00000004&((data)<<2))
#define  HDMI_STB_P3_HDCP_CR_dkapde(data)                                        (0x00000002&((data)<<1))
#define  HDMI_STB_P3_HDCP_CR_hdcp_en(data)                                       (0x00000001&(data))
#define  HDMI_STB_P3_HDCP_CR_get_clr_ri(data)                                    ((0x20000000&(data))>>29)
#define  HDMI_STB_P3_HDCP_CR_get_cypher_dis(data)                                ((0x00000008&(data))>>3)
#define  HDMI_STB_P3_HDCP_CR_get_maddf(data)                                     ((0x00000004&(data))>>2)
#define  HDMI_STB_P3_HDCP_CR_get_dkapde(data)                                    ((0x00000002&(data))>>1)
#define  HDMI_STB_P3_HDCP_CR_get_hdcp_en(data)                                   (0x00000001&(data))

#define  HDMI_STB_P3_HDCP_DKAP                                                  0x180BD314
#define  HDMI_STB_P3_HDCP_DKAP_reg_addr                                          "0xB80BD314"
#define  HDMI_STB_P3_HDCP_DKAP_reg                                               0xB80BD314
#define  HDMI_STB_P3_HDCP_DKAP_inst_addr                                         "0x0005"
#define  set_HDMI_STB_P3_HDCP_DKAP_reg(data)                                     (*((volatile unsigned int*)HDMI_STB_P3_HDCP_DKAP_reg)=data)
#define  get_HDMI_STB_P3_HDCP_DKAP_reg                                           (*((volatile unsigned int*)HDMI_STB_P3_HDCP_DKAP_reg))
#define  HDMI_STB_P3_HDCP_DKAP_dkap_shift                                        (0)
#define  HDMI_STB_P3_HDCP_DKAP_dkap_mask                                         (0x000000FF)
#define  HDMI_STB_P3_HDCP_DKAP_dkap(data)                                        (0x000000FF&(data))
#define  HDMI_STB_P3_HDCP_DKAP_get_dkap(data)                                    (0x000000FF&(data))

#define  HDMI_STB_P3_HDCP_PCR                                                   0x180BD318
#define  HDMI_STB_P3_HDCP_PCR_reg_addr                                           "0xB80BD318"
#define  HDMI_STB_P3_HDCP_PCR_reg                                                0xB80BD318
#define  HDMI_STB_P3_HDCP_PCR_inst_addr                                          "0x0006"
#define  set_HDMI_STB_P3_HDCP_PCR_reg(data)                                      (*((volatile unsigned int*)HDMI_STB_P3_HDCP_PCR_reg)=data)
#define  get_HDMI_STB_P3_HDCP_PCR_reg                                            (*((volatile unsigned int*)HDMI_STB_P3_HDCP_PCR_reg))
#define  HDMI_STB_P3_HDCP_PCR_iic_st_shift                                       (28)
#define  HDMI_STB_P3_HDCP_PCR_i2c_scl_dly_sel_shift                              (24)
#define  HDMI_STB_P3_HDCP_PCR_i2c_sda_dly_sel_shift                              (20)
#define  HDMI_STB_P3_HDCP_PCR_ddcdbnc_shift                                      (9)
#define  HDMI_STB_P3_HDCP_PCR_dvi_enc_mode_shift                                 (8)
#define  HDMI_STB_P3_HDCP_PCR_dbnc_level_sel_shift                               (7)
#define  HDMI_STB_P3_HDCP_PCR_km_start_sel_shift                                 (2)
#define  HDMI_STB_P3_HDCP_PCR_apai_type_shift                                    (1)
#define  HDMI_STB_P3_HDCP_PCR_apai_shift                                         (0)
#define  HDMI_STB_P3_HDCP_PCR_iic_st_mask                                        (0x70000000)
#define  HDMI_STB_P3_HDCP_PCR_i2c_scl_dly_sel_mask                               (0x0F000000)
#define  HDMI_STB_P3_HDCP_PCR_i2c_sda_dly_sel_mask                               (0x00F00000)
#define  HDMI_STB_P3_HDCP_PCR_ddcdbnc_mask                                       (0x00000200)
#define  HDMI_STB_P3_HDCP_PCR_dvi_enc_mode_mask                                  (0x00000100)
#define  HDMI_STB_P3_HDCP_PCR_dbnc_level_sel_mask                                (0x00000080)
#define  HDMI_STB_P3_HDCP_PCR_km_start_sel_mask                                  (0x00000004)
#define  HDMI_STB_P3_HDCP_PCR_apai_type_mask                                     (0x00000002)
#define  HDMI_STB_P3_HDCP_PCR_apai_mask                                          (0x00000001)
#define  HDMI_STB_P3_HDCP_PCR_iic_st(data)                                       (0x70000000&((data)<<28))
#define  HDMI_STB_P3_HDCP_PCR_i2c_scl_dly_sel(data)                              (0x0F000000&((data)<<24))
#define  HDMI_STB_P3_HDCP_PCR_i2c_sda_dly_sel(data)                              (0x00F00000&((data)<<20))
#define  HDMI_STB_P3_HDCP_PCR_ddcdbnc(data)                                      (0x00000200&((data)<<9))
#define  HDMI_STB_P3_HDCP_PCR_dvi_enc_mode(data)                                 (0x00000100&((data)<<8))
#define  HDMI_STB_P3_HDCP_PCR_dbnc_level_sel(data)                               (0x00000080&((data)<<7))
#define  HDMI_STB_P3_HDCP_PCR_km_start_sel(data)                                 (0x00000004&((data)<<2))
#define  HDMI_STB_P3_HDCP_PCR_apai_type(data)                                    (0x00000002&((data)<<1))
#define  HDMI_STB_P3_HDCP_PCR_apai(data)                                         (0x00000001&(data))
#define  HDMI_STB_P3_HDCP_PCR_get_iic_st(data)                                   ((0x70000000&(data))>>28)
#define  HDMI_STB_P3_HDCP_PCR_get_i2c_scl_dly_sel(data)                          ((0x0F000000&(data))>>24)
#define  HDMI_STB_P3_HDCP_PCR_get_i2c_sda_dly_sel(data)                          ((0x00F00000&(data))>>20)
#define  HDMI_STB_P3_HDCP_PCR_get_ddcdbnc(data)                                  ((0x00000200&(data))>>9)
#define  HDMI_STB_P3_HDCP_PCR_get_dvi_enc_mode(data)                             ((0x00000100&(data))>>8)
#define  HDMI_STB_P3_HDCP_PCR_get_dbnc_level_sel(data)                           ((0x00000080&(data))>>7)
#define  HDMI_STB_P3_HDCP_PCR_get_km_start_sel(data)                             ((0x00000004&(data))>>2)
#define  HDMI_STB_P3_HDCP_PCR_get_apai_type(data)                                ((0x00000002&(data))>>1)
#define  HDMI_STB_P3_HDCP_PCR_get_apai(data)                                     (0x00000001&(data))

#define  HDMI_STB_P3_HDCP_FLAG1                                                 0x180BD31C
#define  HDMI_STB_P3_HDCP_FLAG1_reg_addr                                         "0xB80BD31C"
#define  HDMI_STB_P3_HDCP_FLAG1_reg                                              0xB80BD31C
#define  HDMI_STB_P3_HDCP_FLAG1_inst_addr                                        "0x0007"
#define  set_HDMI_STB_P3_HDCP_FLAG1_reg(data)                                    (*((volatile unsigned int*)HDMI_STB_P3_HDCP_FLAG1_reg)=data)
#define  get_HDMI_STB_P3_HDCP_FLAG1_reg                                          (*((volatile unsigned int*)HDMI_STB_P3_HDCP_FLAG1_reg))
#define  HDMI_STB_P3_HDCP_FLAG1_akm_flag_shift                                   (8)
#define  HDMI_STB_P3_HDCP_FLAG1_adne_flag_shift                                  (7)
#define  HDMI_STB_P3_HDCP_FLAG1_ence_flag_shift                                  (6)
#define  HDMI_STB_P3_HDCP_FLAG1_nc_flag_shift                                    (5)
#define  HDMI_STB_P3_HDCP_FLAG1_wr_aksv_flag_shift                               (4)
#define  HDMI_STB_P3_HDCP_FLAG1_rd_bcap_flag_shift                               (3)
#define  HDMI_STB_P3_HDCP_FLAG1_rd_ri_flag_shift                                 (2)
#define  HDMI_STB_P3_HDCP_FLAG1_rd_bksv_flag_shift                               (1)
#define  HDMI_STB_P3_HDCP_FLAG1_dummy_0_shift                                    (0)
#define  HDMI_STB_P3_HDCP_FLAG1_akm_flag_mask                                    (0x00000100)
#define  HDMI_STB_P3_HDCP_FLAG1_adne_flag_mask                                   (0x00000080)
#define  HDMI_STB_P3_HDCP_FLAG1_ence_flag_mask                                   (0x00000040)
#define  HDMI_STB_P3_HDCP_FLAG1_nc_flag_mask                                     (0x00000020)
#define  HDMI_STB_P3_HDCP_FLAG1_wr_aksv_flag_mask                                (0x00000010)
#define  HDMI_STB_P3_HDCP_FLAG1_rd_bcap_flag_mask                                (0x00000008)
#define  HDMI_STB_P3_HDCP_FLAG1_rd_ri_flag_mask                                  (0x00000004)
#define  HDMI_STB_P3_HDCP_FLAG1_rd_bksv_flag_mask                                (0x00000002)
#define  HDMI_STB_P3_HDCP_FLAG1_dummy_0_mask                                     (0x00000001)
#define  HDMI_STB_P3_HDCP_FLAG1_akm_flag(data)                                   (0x00000100&((data)<<8))
#define  HDMI_STB_P3_HDCP_FLAG1_adne_flag(data)                                  (0x00000080&((data)<<7))
#define  HDMI_STB_P3_HDCP_FLAG1_ence_flag(data)                                  (0x00000040&((data)<<6))
#define  HDMI_STB_P3_HDCP_FLAG1_nc_flag(data)                                    (0x00000020&((data)<<5))
#define  HDMI_STB_P3_HDCP_FLAG1_wr_aksv_flag(data)                               (0x00000010&((data)<<4))
#define  HDMI_STB_P3_HDCP_FLAG1_rd_bcap_flag(data)                               (0x00000008&((data)<<3))
#define  HDMI_STB_P3_HDCP_FLAG1_rd_ri_flag(data)                                 (0x00000004&((data)<<2))
#define  HDMI_STB_P3_HDCP_FLAG1_rd_bksv_flag(data)                               (0x00000002&((data)<<1))
#define  HDMI_STB_P3_HDCP_FLAG1_dummy_0(data)                                    (0x00000001&(data))
#define  HDMI_STB_P3_HDCP_FLAG1_get_akm_flag(data)                               ((0x00000100&(data))>>8)
#define  HDMI_STB_P3_HDCP_FLAG1_get_adne_flag(data)                              ((0x00000080&(data))>>7)
#define  HDMI_STB_P3_HDCP_FLAG1_get_ence_flag(data)                              ((0x00000040&(data))>>6)
#define  HDMI_STB_P3_HDCP_FLAG1_get_nc_flag(data)                                ((0x00000020&(data))>>5)
#define  HDMI_STB_P3_HDCP_FLAG1_get_wr_aksv_flag(data)                           ((0x00000010&(data))>>4)
#define  HDMI_STB_P3_HDCP_FLAG1_get_rd_bcap_flag(data)                           ((0x00000008&(data))>>3)
#define  HDMI_STB_P3_HDCP_FLAG1_get_rd_ri_flag(data)                             ((0x00000004&(data))>>2)
#define  HDMI_STB_P3_HDCP_FLAG1_get_rd_bksv_flag(data)                           ((0x00000002&(data))>>1)
#define  HDMI_STB_P3_HDCP_FLAG1_get_dummy_0(data)                                (0x00000001&(data))

#define  HDMI_STB_P3_HDCP_FLAG2                                                 0x180BD320
#define  HDMI_STB_P3_HDCP_FLAG2_reg_addr                                         "0xB80BD320"
#define  HDMI_STB_P3_HDCP_FLAG2_reg                                              0xB80BD320
#define  HDMI_STB_P3_HDCP_FLAG2_inst_addr                                        "0x0008"
#define  set_HDMI_STB_P3_HDCP_FLAG2_reg(data)                                    (*((volatile unsigned int*)HDMI_STB_P3_HDCP_FLAG2_reg)=data)
#define  get_HDMI_STB_P3_HDCP_FLAG2_reg                                          (*((volatile unsigned int*)HDMI_STB_P3_HDCP_FLAG2_reg))
#define  HDMI_STB_P3_HDCP_FLAG2_irq_akm_en_shift                                 (8)
#define  HDMI_STB_P3_HDCP_FLAG2_irq_adne_en_shift                                (7)
#define  HDMI_STB_P3_HDCP_FLAG2_irq_ence_en_shift                                (6)
#define  HDMI_STB_P3_HDCP_FLAG2_irq_nc_en_shift                                  (5)
#define  HDMI_STB_P3_HDCP_FLAG2_irq_aksv_en_shift                                (4)
#define  HDMI_STB_P3_HDCP_FLAG2_irq_bcap_en_shift                                (3)
#define  HDMI_STB_P3_HDCP_FLAG2_irq_ri_en_shift                                  (2)
#define  HDMI_STB_P3_HDCP_FLAG2_irq_bksv_en_shift                                (1)
#define  HDMI_STB_P3_HDCP_FLAG2_dummy_0_shift                                    (0)
#define  HDMI_STB_P3_HDCP_FLAG2_irq_akm_en_mask                                  (0x00000100)
#define  HDMI_STB_P3_HDCP_FLAG2_irq_adne_en_mask                                 (0x00000080)
#define  HDMI_STB_P3_HDCP_FLAG2_irq_ence_en_mask                                 (0x00000040)
#define  HDMI_STB_P3_HDCP_FLAG2_irq_nc_en_mask                                   (0x00000020)
#define  HDMI_STB_P3_HDCP_FLAG2_irq_aksv_en_mask                                 (0x00000010)
#define  HDMI_STB_P3_HDCP_FLAG2_irq_bcap_en_mask                                 (0x00000008)
#define  HDMI_STB_P3_HDCP_FLAG2_irq_ri_en_mask                                   (0x00000004)
#define  HDMI_STB_P3_HDCP_FLAG2_irq_bksv_en_mask                                 (0x00000002)
#define  HDMI_STB_P3_HDCP_FLAG2_dummy_0_mask                                     (0x00000001)
#define  HDMI_STB_P3_HDCP_FLAG2_irq_akm_en(data)                                 (0x00000100&((data)<<8))
#define  HDMI_STB_P3_HDCP_FLAG2_irq_adne_en(data)                                (0x00000080&((data)<<7))
#define  HDMI_STB_P3_HDCP_FLAG2_irq_ence_en(data)                                (0x00000040&((data)<<6))
#define  HDMI_STB_P3_HDCP_FLAG2_irq_nc_en(data)                                  (0x00000020&((data)<<5))
#define  HDMI_STB_P3_HDCP_FLAG2_irq_aksv_en(data)                                (0x00000010&((data)<<4))
#define  HDMI_STB_P3_HDCP_FLAG2_irq_bcap_en(data)                                (0x00000008&((data)<<3))
#define  HDMI_STB_P3_HDCP_FLAG2_irq_ri_en(data)                                  (0x00000004&((data)<<2))
#define  HDMI_STB_P3_HDCP_FLAG2_irq_bksv_en(data)                                (0x00000002&((data)<<1))
#define  HDMI_STB_P3_HDCP_FLAG2_dummy_0(data)                                    (0x00000001&(data))
#define  HDMI_STB_P3_HDCP_FLAG2_get_irq_akm_en(data)                             ((0x00000100&(data))>>8)
#define  HDMI_STB_P3_HDCP_FLAG2_get_irq_adne_en(data)                            ((0x00000080&(data))>>7)
#define  HDMI_STB_P3_HDCP_FLAG2_get_irq_ence_en(data)                            ((0x00000040&(data))>>6)
#define  HDMI_STB_P3_HDCP_FLAG2_get_irq_nc_en(data)                              ((0x00000020&(data))>>5)
#define  HDMI_STB_P3_HDCP_FLAG2_get_irq_aksv_en(data)                            ((0x00000010&(data))>>4)
#define  HDMI_STB_P3_HDCP_FLAG2_get_irq_bcap_en(data)                            ((0x00000008&(data))>>3)
#define  HDMI_STB_P3_HDCP_FLAG2_get_irq_ri_en(data)                              ((0x00000004&(data))>>2)
#define  HDMI_STB_P3_HDCP_FLAG2_get_irq_bksv_en(data)                            ((0x00000002&(data))>>1)
#define  HDMI_STB_P3_HDCP_FLAG2_get_dummy_0(data)                                (0x00000001&(data))

#define  HDMI_STB_P3_HDCP_AP                                                    0x180BD324
#define  HDMI_STB_P3_HDCP_AP_reg_addr                                            "0xB80BD324"
#define  HDMI_STB_P3_HDCP_AP_reg                                                 0xB80BD324
#define  HDMI_STB_P3_HDCP_AP_inst_addr                                           "0x0009"
#define  set_HDMI_STB_P3_HDCP_AP_reg(data)                                       (*((volatile unsigned int*)HDMI_STB_P3_HDCP_AP_reg)=data)
#define  get_HDMI_STB_P3_HDCP_AP_reg                                             (*((volatile unsigned int*)HDMI_STB_P3_HDCP_AP_reg))
#define  HDMI_STB_P3_HDCP_AP_ksvfifo_status_shift                                (18)
#define  HDMI_STB_P3_HDCP_AP_dp_ksvfifo_ptr_shift                                (8)
#define  HDMI_STB_P3_HDCP_AP_ap1_shift                                           (0)
#define  HDMI_STB_P3_HDCP_AP_ksvfifo_status_mask                                 (0x00040000)
#define  HDMI_STB_P3_HDCP_AP_dp_ksvfifo_ptr_mask                                 (0x0003FF00)
#define  HDMI_STB_P3_HDCP_AP_ap1_mask                                            (0x000000FF)
#define  HDMI_STB_P3_HDCP_AP_ksvfifo_status(data)                                (0x00040000&((data)<<18))
#define  HDMI_STB_P3_HDCP_AP_dp_ksvfifo_ptr(data)                                (0x0003FF00&((data)<<8))
#define  HDMI_STB_P3_HDCP_AP_ap1(data)                                           (0x000000FF&(data))
#define  HDMI_STB_P3_HDCP_AP_get_ksvfifo_status(data)                            ((0x00040000&(data))>>18)
#define  HDMI_STB_P3_HDCP_AP_get_dp_ksvfifo_ptr(data)                            ((0x0003FF00&(data))>>8)
#define  HDMI_STB_P3_HDCP_AP_get_ap1(data)                                       (0x000000FF&(data))

#define  HDMI_STB_P3_HDCP_DP                                                    0x180BD328
#define  HDMI_STB_P3_HDCP_DP_reg_addr                                            "0xB80BD328"
#define  HDMI_STB_P3_HDCP_DP_reg                                                 0xB80BD328
#define  HDMI_STB_P3_HDCP_DP_inst_addr                                           "0x000A"
#define  set_HDMI_STB_P3_HDCP_DP_reg(data)                                       (*((volatile unsigned int*)HDMI_STB_P3_HDCP_DP_reg)=data)
#define  get_HDMI_STB_P3_HDCP_DP_reg                                             (*((volatile unsigned int*)HDMI_STB_P3_HDCP_DP_reg))
#define  HDMI_STB_P3_HDCP_DP_dp1_shift                                           (0)
#define  HDMI_STB_P3_HDCP_DP_dp1_mask                                            (0x000000FF)
#define  HDMI_STB_P3_HDCP_DP_dp1(data)                                           (0x000000FF&(data))
#define  HDMI_STB_P3_HDCP_DP_get_dp1(data)                                       (0x000000FF&(data))

#define  HDMI_STB_P3_HDCP_2p2_CR                                                0x180BD32C
#define  HDMI_STB_P3_HDCP_2p2_CR_reg_addr                                        "0xB80BD32C"
#define  HDMI_STB_P3_HDCP_2p2_CR_reg                                             0xB80BD32C
#define  HDMI_STB_P3_HDCP_2p2_CR_inst_addr                                       "0x000B"
#define  set_HDMI_STB_P3_HDCP_2p2_CR_reg(data)                                   (*((volatile unsigned int*)HDMI_STB_P3_HDCP_2p2_CR_reg)=data)
#define  get_HDMI_STB_P3_HDCP_2p2_CR_reg                                         (*((volatile unsigned int*)HDMI_STB_P3_HDCP_2p2_CR_reg))
#define  HDMI_STB_P3_HDCP_2p2_CR_enable_reauth_shift                             (27)
#define  HDMI_STB_P3_HDCP_2p2_CR_switch_state_shift                              (12)
#define  HDMI_STB_P3_HDCP_2p2_CR_rpt_thr_unauth_shift                            (11)
#define  HDMI_STB_P3_HDCP_2p2_CR_apply_state_shift                               (9)
#define  HDMI_STB_P3_HDCP_2p2_CR_mspai_shift                                     (8)
#define  HDMI_STB_P3_HDCP_2p2_CR_new_auth_device_shift                           (7)
#define  HDMI_STB_P3_HDCP_2p2_CR_verify_id_pass_shift                            (6)
#define  HDMI_STB_P3_HDCP_2p2_CR_verify_id_done_shift                            (5)
#define  HDMI_STB_P3_HDCP_2p2_CR_assemble_id_fail_shift                          (4)
#define  HDMI_STB_P3_HDCP_2p2_CR_downstream_done_shift                           (3)
#define  HDMI_STB_P3_HDCP_2p2_CR_ks_done_shift                                   (2)
#define  HDMI_STB_P3_HDCP_2p2_CR_switch_unauth_shift                             (1)
#define  HDMI_STB_P3_HDCP_2p2_CR_hdcp_2p2_en_shift                               (0)
#define  HDMI_STB_P3_HDCP_2p2_CR_enable_reauth_mask                              (0x08000000)
#define  HDMI_STB_P3_HDCP_2p2_CR_switch_state_mask                               (0x00FFF000)
#define  HDMI_STB_P3_HDCP_2p2_CR_rpt_thr_unauth_mask                             (0x00000800)
#define  HDMI_STB_P3_HDCP_2p2_CR_apply_state_mask                                (0x00000200)
#define  HDMI_STB_P3_HDCP_2p2_CR_mspai_mask                                      (0x00000100)
#define  HDMI_STB_P3_HDCP_2p2_CR_new_auth_device_mask                            (0x00000080)
#define  HDMI_STB_P3_HDCP_2p2_CR_verify_id_pass_mask                             (0x00000040)
#define  HDMI_STB_P3_HDCP_2p2_CR_verify_id_done_mask                             (0x00000020)
#define  HDMI_STB_P3_HDCP_2p2_CR_assemble_id_fail_mask                           (0x00000010)
#define  HDMI_STB_P3_HDCP_2p2_CR_downstream_done_mask                            (0x00000008)
#define  HDMI_STB_P3_HDCP_2p2_CR_ks_done_mask                                    (0x00000004)
#define  HDMI_STB_P3_HDCP_2p2_CR_switch_unauth_mask                              (0x00000002)
#define  HDMI_STB_P3_HDCP_2p2_CR_hdcp_2p2_en_mask                                (0x00000001)
#define  HDMI_STB_P3_HDCP_2p2_CR_enable_reauth(data)                             (0x08000000&((data)<<27))
#define  HDMI_STB_P3_HDCP_2p2_CR_switch_state(data)                              (0x00FFF000&((data)<<12))
#define  HDMI_STB_P3_HDCP_2p2_CR_rpt_thr_unauth(data)                            (0x00000800&((data)<<11))
#define  HDMI_STB_P3_HDCP_2p2_CR_apply_state(data)                               (0x00000200&((data)<<9))
#define  HDMI_STB_P3_HDCP_2p2_CR_mspai(data)                                     (0x00000100&((data)<<8))
#define  HDMI_STB_P3_HDCP_2p2_CR_new_auth_device(data)                           (0x00000080&((data)<<7))
#define  HDMI_STB_P3_HDCP_2p2_CR_verify_id_pass(data)                            (0x00000040&((data)<<6))
#define  HDMI_STB_P3_HDCP_2p2_CR_verify_id_done(data)                            (0x00000020&((data)<<5))
#define  HDMI_STB_P3_HDCP_2p2_CR_assemble_id_fail(data)                          (0x00000010&((data)<<4))
#define  HDMI_STB_P3_HDCP_2p2_CR_downstream_done(data)                           (0x00000008&((data)<<3))
#define  HDMI_STB_P3_HDCP_2p2_CR_ks_done(data)                                   (0x00000004&((data)<<2))
#define  HDMI_STB_P3_HDCP_2p2_CR_switch_unauth(data)                             (0x00000002&((data)<<1))
#define  HDMI_STB_P3_HDCP_2p2_CR_hdcp_2p2_en(data)                               (0x00000001&(data))
#define  HDMI_STB_P3_HDCP_2p2_CR_get_enable_reauth(data)                         ((0x08000000&(data))>>27)
#define  HDMI_STB_P3_HDCP_2p2_CR_get_switch_state(data)                          ((0x00FFF000&(data))>>12)
#define  HDMI_STB_P3_HDCP_2p2_CR_get_rpt_thr_unauth(data)                        ((0x00000800&(data))>>11)
#define  HDMI_STB_P3_HDCP_2p2_CR_get_apply_state(data)                           ((0x00000200&(data))>>9)
#define  HDMI_STB_P3_HDCP_2p2_CR_get_mspai(data)                                 ((0x00000100&(data))>>8)
#define  HDMI_STB_P3_HDCP_2p2_CR_get_new_auth_device(data)                       ((0x00000080&(data))>>7)
#define  HDMI_STB_P3_HDCP_2p2_CR_get_verify_id_pass(data)                        ((0x00000040&(data))>>6)
#define  HDMI_STB_P3_HDCP_2p2_CR_get_verify_id_done(data)                        ((0x00000020&(data))>>5)
#define  HDMI_STB_P3_HDCP_2p2_CR_get_assemble_id_fail(data)                      ((0x00000010&(data))>>4)
#define  HDMI_STB_P3_HDCP_2p2_CR_get_downstream_done(data)                       ((0x00000008&(data))>>3)
#define  HDMI_STB_P3_HDCP_2p2_CR_get_ks_done(data)                               ((0x00000004&(data))>>2)
#define  HDMI_STB_P3_HDCP_2p2_CR_get_switch_unauth(data)                         ((0x00000002&(data))>>1)
#define  HDMI_STB_P3_HDCP_2p2_CR_get_hdcp_2p2_en(data)                           (0x00000001&(data))

#define  HDMI_STB_P3_HDCP_2p2_SR0                                               0x180BD338
#define  HDMI_STB_P3_HDCP_2p2_SR0_reg_addr                                       "0xB80BD338"
#define  HDMI_STB_P3_HDCP_2p2_SR0_reg                                            0xB80BD338
#define  HDMI_STB_P3_HDCP_2p2_SR0_inst_addr                                      "0x000C"
#define  set_HDMI_STB_P3_HDCP_2p2_SR0_reg(data)                                  (*((volatile unsigned int*)HDMI_STB_P3_HDCP_2p2_SR0_reg)=data)
#define  get_HDMI_STB_P3_HDCP_2p2_SR0_reg                                        (*((volatile unsigned int*)HDMI_STB_P3_HDCP_2p2_SR0_reg))
#define  HDMI_STB_P3_HDCP_2p2_SR0_irq_msg_overwrite_shift                        (18)
#define  HDMI_STB_P3_HDCP_2p2_SR0_irq_unauth_chg_shift                           (17)
#define  HDMI_STB_P3_HDCP_2p2_SR0_irq_state_chg_shift                            (16)
#define  HDMI_STB_P3_HDCP_2p2_SR0_irq_rd_msg_done_shift                          (15)
#define  HDMI_STB_P3_HDCP_2p2_SR0_irq_wr_msg_done_shift                          (14)
#define  HDMI_STB_P3_HDCP_2p2_SR0_irq_rd_msg_start_shift                         (13)
#define  HDMI_STB_P3_HDCP_2p2_SR0_irq_wr_msg_start_shift                         (12)
#define  HDMI_STB_P3_HDCP_2p2_SR0_state_shift                                    (0)
#define  HDMI_STB_P3_HDCP_2p2_SR0_irq_msg_overwrite_mask                         (0x00040000)
#define  HDMI_STB_P3_HDCP_2p2_SR0_irq_unauth_chg_mask                            (0x00020000)
#define  HDMI_STB_P3_HDCP_2p2_SR0_irq_state_chg_mask                             (0x00010000)
#define  HDMI_STB_P3_HDCP_2p2_SR0_irq_rd_msg_done_mask                           (0x00008000)
#define  HDMI_STB_P3_HDCP_2p2_SR0_irq_wr_msg_done_mask                           (0x00004000)
#define  HDMI_STB_P3_HDCP_2p2_SR0_irq_rd_msg_start_mask                          (0x00002000)
#define  HDMI_STB_P3_HDCP_2p2_SR0_irq_wr_msg_start_mask                          (0x00001000)
#define  HDMI_STB_P3_HDCP_2p2_SR0_state_mask                                     (0x00000FFF)
#define  HDMI_STB_P3_HDCP_2p2_SR0_irq_msg_overwrite(data)                        (0x00040000&((data)<<18))
#define  HDMI_STB_P3_HDCP_2p2_SR0_irq_unauth_chg(data)                           (0x00020000&((data)<<17))
#define  HDMI_STB_P3_HDCP_2p2_SR0_irq_state_chg(data)                            (0x00010000&((data)<<16))
#define  HDMI_STB_P3_HDCP_2p2_SR0_irq_rd_msg_done(data)                          (0x00008000&((data)<<15))
#define  HDMI_STB_P3_HDCP_2p2_SR0_irq_wr_msg_done(data)                          (0x00004000&((data)<<14))
#define  HDMI_STB_P3_HDCP_2p2_SR0_irq_rd_msg_start(data)                         (0x00002000&((data)<<13))
#define  HDMI_STB_P3_HDCP_2p2_SR0_irq_wr_msg_start(data)                         (0x00001000&((data)<<12))
#define  HDMI_STB_P3_HDCP_2p2_SR0_state(data)                                    (0x00000FFF&(data))
#define  HDMI_STB_P3_HDCP_2p2_SR0_get_irq_msg_overwrite(data)                    ((0x00040000&(data))>>18)
#define  HDMI_STB_P3_HDCP_2p2_SR0_get_irq_unauth_chg(data)                       ((0x00020000&(data))>>17)
#define  HDMI_STB_P3_HDCP_2p2_SR0_get_irq_state_chg(data)                        ((0x00010000&(data))>>16)
#define  HDMI_STB_P3_HDCP_2p2_SR0_get_irq_rd_msg_done(data)                      ((0x00008000&(data))>>15)
#define  HDMI_STB_P3_HDCP_2p2_SR0_get_irq_wr_msg_done(data)                      ((0x00004000&(data))>>14)
#define  HDMI_STB_P3_HDCP_2p2_SR0_get_irq_rd_msg_start(data)                     ((0x00002000&(data))>>13)
#define  HDMI_STB_P3_HDCP_2p2_SR0_get_irq_wr_msg_start(data)                     ((0x00001000&(data))>>12)
#define  HDMI_STB_P3_HDCP_2p2_SR0_get_state(data)                                (0x00000FFF&(data))

#define  HDMI_STB_P3_HDCP_2p2_SR1                                               0x180BD33C
#define  HDMI_STB_P3_HDCP_2p2_SR1_reg_addr                                       "0xB80BD33C"
#define  HDMI_STB_P3_HDCP_2p2_SR1_reg                                            0xB80BD33C
#define  HDMI_STB_P3_HDCP_2p2_SR1_inst_addr                                      "0x000D"
#define  set_HDMI_STB_P3_HDCP_2p2_SR1_reg(data)                                  (*((volatile unsigned int*)HDMI_STB_P3_HDCP_2p2_SR1_reg)=data)
#define  get_HDMI_STB_P3_HDCP_2p2_SR1_reg                                        (*((volatile unsigned int*)HDMI_STB_P3_HDCP_2p2_SR1_reg))
#define  HDMI_STB_P3_HDCP_2p2_SR1_irq_msg_overwrite_en_shift                     (6)
#define  HDMI_STB_P3_HDCP_2p2_SR1_irq_unauth_chg_en_shift                        (5)
#define  HDMI_STB_P3_HDCP_2p2_SR1_irq_state_chg_en_shift                         (4)
#define  HDMI_STB_P3_HDCP_2p2_SR1_irq_rd_msg_done_en_shift                       (3)
#define  HDMI_STB_P3_HDCP_2p2_SR1_irq_wr_msg_done_en_shift                       (2)
#define  HDMI_STB_P3_HDCP_2p2_SR1_irq_rd_msg_start_en_shift                      (1)
#define  HDMI_STB_P3_HDCP_2p2_SR1_irq_wr_msg_start_en_shift                      (0)
#define  HDMI_STB_P3_HDCP_2p2_SR1_irq_msg_overwrite_en_mask                      (0x00000040)
#define  HDMI_STB_P3_HDCP_2p2_SR1_irq_unauth_chg_en_mask                         (0x00000020)
#define  HDMI_STB_P3_HDCP_2p2_SR1_irq_state_chg_en_mask                          (0x00000010)
#define  HDMI_STB_P3_HDCP_2p2_SR1_irq_rd_msg_done_en_mask                        (0x00000008)
#define  HDMI_STB_P3_HDCP_2p2_SR1_irq_wr_msg_done_en_mask                        (0x00000004)
#define  HDMI_STB_P3_HDCP_2p2_SR1_irq_rd_msg_start_en_mask                       (0x00000002)
#define  HDMI_STB_P3_HDCP_2p2_SR1_irq_wr_msg_start_en_mask                       (0x00000001)
#define  HDMI_STB_P3_HDCP_2p2_SR1_irq_msg_overwrite_en(data)                     (0x00000040&((data)<<6))
#define  HDMI_STB_P3_HDCP_2p2_SR1_irq_unauth_chg_en(data)                        (0x00000020&((data)<<5))
#define  HDMI_STB_P3_HDCP_2p2_SR1_irq_state_chg_en(data)                         (0x00000010&((data)<<4))
#define  HDMI_STB_P3_HDCP_2p2_SR1_irq_rd_msg_done_en(data)                       (0x00000008&((data)<<3))
#define  HDMI_STB_P3_HDCP_2p2_SR1_irq_wr_msg_done_en(data)                       (0x00000004&((data)<<2))
#define  HDMI_STB_P3_HDCP_2p2_SR1_irq_rd_msg_start_en(data)                      (0x00000002&((data)<<1))
#define  HDMI_STB_P3_HDCP_2p2_SR1_irq_wr_msg_start_en(data)                      (0x00000001&(data))
#define  HDMI_STB_P3_HDCP_2p2_SR1_get_irq_msg_overwrite_en(data)                 ((0x00000040&(data))>>6)
#define  HDMI_STB_P3_HDCP_2p2_SR1_get_irq_unauth_chg_en(data)                    ((0x00000020&(data))>>5)
#define  HDMI_STB_P3_HDCP_2p2_SR1_get_irq_state_chg_en(data)                     ((0x00000010&(data))>>4)
#define  HDMI_STB_P3_HDCP_2p2_SR1_get_irq_rd_msg_done_en(data)                   ((0x00000008&(data))>>3)
#define  HDMI_STB_P3_HDCP_2p2_SR1_get_irq_wr_msg_done_en(data)                   ((0x00000004&(data))>>2)
#define  HDMI_STB_P3_HDCP_2p2_SR1_get_irq_rd_msg_start_en(data)                  ((0x00000002&(data))>>1)
#define  HDMI_STB_P3_HDCP_2p2_SR1_get_irq_wr_msg_start_en(data)                  (0x00000001&(data))

#define  HDMI_STB_P3_HDCP_MSAP                                                  0x180BD340
#define  HDMI_STB_P3_HDCP_MSAP_reg_addr                                          "0xB80BD340"
#define  HDMI_STB_P3_HDCP_MSAP_reg                                               0xB80BD340
#define  HDMI_STB_P3_HDCP_MSAP_inst_addr                                         "0x000E"
#define  set_HDMI_STB_P3_HDCP_MSAP_reg(data)                                     (*((volatile unsigned int*)HDMI_STB_P3_HDCP_MSAP_reg)=data)
#define  get_HDMI_STB_P3_HDCP_MSAP_reg                                           (*((volatile unsigned int*)HDMI_STB_P3_HDCP_MSAP_reg))
#define  HDMI_STB_P3_HDCP_MSAP_ap1_shift                                         (0)
#define  HDMI_STB_P3_HDCP_MSAP_ap1_mask                                          (0x000003FF)
#define  HDMI_STB_P3_HDCP_MSAP_ap1(data)                                         (0x000003FF&(data))
#define  HDMI_STB_P3_HDCP_MSAP_get_ap1(data)                                     (0x000003FF&(data))

#define  HDMI_STB_P3_HDCP_MSDP                                                  0x180BD344
#define  HDMI_STB_P3_HDCP_MSDP_reg_addr                                          "0xB80BD344"
#define  HDMI_STB_P3_HDCP_MSDP_reg                                               0xB80BD344
#define  HDMI_STB_P3_HDCP_MSDP_inst_addr                                         "0x000F"
#define  set_HDMI_STB_P3_HDCP_MSDP_reg(data)                                     (*((volatile unsigned int*)HDMI_STB_P3_HDCP_MSDP_reg)=data)
#define  get_HDMI_STB_P3_HDCP_MSDP_reg                                           (*((volatile unsigned int*)HDMI_STB_P3_HDCP_MSDP_reg))
#define  HDMI_STB_P3_HDCP_MSDP_dp1_shift                                         (0)
#define  HDMI_STB_P3_HDCP_MSDP_dp1_mask                                          (0x000000FF)
#define  HDMI_STB_P3_HDCP_MSDP_dp1(data)                                         (0x000000FF&(data))
#define  HDMI_STB_P3_HDCP_MSDP_get_dp1(data)                                     (0x000000FF&(data))

#define  HDMI_STB_P3_HDCP_PEND                                                  0x180BD348
#define  HDMI_STB_P3_HDCP_PEND_reg_addr                                          "0xB80BD348"
#define  HDMI_STB_P3_HDCP_PEND_reg                                               0xB80BD348
#define  HDMI_STB_P3_HDCP_PEND_inst_addr                                         "0x0010"
#define  set_HDMI_STB_P3_HDCP_PEND_reg(data)                                     (*((volatile unsigned int*)HDMI_STB_P3_HDCP_PEND_reg)=data)
#define  get_HDMI_STB_P3_HDCP_PEND_reg                                           (*((volatile unsigned int*)HDMI_STB_P3_HDCP_PEND_reg))
#define  HDMI_STB_P3_HDCP_PEND_hdcp1p4_shift                                     (1)
#define  HDMI_STB_P3_HDCP_PEND_hdcp2p2_shift                                     (0)
#define  HDMI_STB_P3_HDCP_PEND_hdcp1p4_mask                                      (0x00000002)
#define  HDMI_STB_P3_HDCP_PEND_hdcp2p2_mask                                      (0x00000001)
#define  HDMI_STB_P3_HDCP_PEND_hdcp1p4(data)                                     (0x00000002&((data)<<1))
#define  HDMI_STB_P3_HDCP_PEND_hdcp2p2(data)                                     (0x00000001&(data))
#define  HDMI_STB_P3_HDCP_PEND_get_hdcp1p4(data)                                 ((0x00000002&(data))>>1)
#define  HDMI_STB_P3_HDCP_PEND_get_hdcp2p2(data)                                 (0x00000001&(data))

#define  HDMI_STB_P3_MBIST_ST0                                                  0x180BD350
#define  HDMI_STB_P3_MBIST_ST0_reg_addr                                          "0xB80BD350"
#define  HDMI_STB_P3_MBIST_ST0_reg                                               0xB80BD350
#define  HDMI_STB_P3_MBIST_ST0_inst_addr                                         "0x0011"
#define  set_HDMI_STB_P3_MBIST_ST0_reg(data)                                     (*((volatile unsigned int*)HDMI_STB_P3_MBIST_ST0_reg)=data)
#define  get_HDMI_STB_P3_MBIST_ST0_reg                                           (*((volatile unsigned int*)HDMI_STB_P3_MBIST_ST0_reg))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_drf_fail_shift                           (25)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_drf_fail0_shift                          (24)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_drf_fail1_shift                          (23)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_drf_fail_shift                       (22)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_drf_pause_shift                          (21)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_drf_pause_shift                      (20)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_drf_done_shift                           (19)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_drf_done_shift                       (18)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_drf_resume_shift                         (17)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_drf_resume_shift                     (16)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_drf_mode_shift                           (15)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_drf_mode_shift                       (14)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_bist_fail_shift                          (13)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_bist_fail0_shift                         (12)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_bist_fail1_shift                         (11)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_bist_fail_shift                      (10)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_bist_done_shift                          (9)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_bist_done_shift                      (8)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_bist_en_shift                            (7)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_bist_en_shift                        (6)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_rme1_shift                               (5)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_rme0_shift                               (4)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_rme_shift                            (3)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_ls1_shift                                (2)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_ls0_shift                                (1)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_ls_shift                             (0)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_drf_fail_mask                            (0x02000000)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_drf_fail0_mask                           (0x01000000)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_drf_fail1_mask                           (0x00800000)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_drf_fail_mask                        (0x00400000)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_drf_pause_mask                           (0x00200000)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_drf_pause_mask                       (0x00100000)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_drf_done_mask                            (0x00080000)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_drf_done_mask                        (0x00040000)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_drf_resume_mask                          (0x00020000)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_drf_resume_mask                      (0x00010000)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_drf_mode_mask                            (0x00008000)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_drf_mode_mask                        (0x00004000)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_bist_fail_mask                           (0x00002000)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_bist_fail0_mask                          (0x00001000)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_bist_fail1_mask                          (0x00000800)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_bist_fail_mask                       (0x00000400)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_bist_done_mask                           (0x00000200)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_bist_done_mask                       (0x00000100)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_bist_en_mask                             (0x00000080)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_bist_en_mask                         (0x00000040)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_rme1_mask                                (0x00000020)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_rme0_mask                                (0x00000010)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_rme_mask                             (0x00000008)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_ls1_mask                                 (0x00000004)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_ls0_mask                                 (0x00000002)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_ls_mask                              (0x00000001)
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_drf_fail(data)                           (0x02000000&((data)<<25))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_drf_fail0(data)                          (0x01000000&((data)<<24))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_drf_fail1(data)                          (0x00800000&((data)<<23))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_drf_fail(data)                       (0x00400000&((data)<<22))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_drf_pause(data)                          (0x00200000&((data)<<21))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_drf_pause(data)                      (0x00100000&((data)<<20))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_drf_done(data)                           (0x00080000&((data)<<19))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_drf_done(data)                       (0x00040000&((data)<<18))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_drf_resume(data)                         (0x00020000&((data)<<17))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_drf_resume(data)                     (0x00010000&((data)<<16))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_drf_mode(data)                           (0x00008000&((data)<<15))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_drf_mode(data)                       (0x00004000&((data)<<14))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_bist_fail(data)                          (0x00002000&((data)<<13))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_bist_fail0(data)                         (0x00001000&((data)<<12))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_bist_fail1(data)                         (0x00000800&((data)<<11))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_bist_fail(data)                      (0x00000400&((data)<<10))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_bist_done(data)                          (0x00000200&((data)<<9))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_bist_done(data)                      (0x00000100&((data)<<8))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_bist_en(data)                            (0x00000080&((data)<<7))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_bist_en(data)                        (0x00000040&((data)<<6))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_rme1(data)                               (0x00000020&((data)<<5))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_rme0(data)                               (0x00000010&((data)<<4))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_rme(data)                            (0x00000008&((data)<<3))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_ls1(data)                                (0x00000004&((data)<<2))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_2p2_ls0(data)                                (0x00000002&((data)<<1))
#define  HDMI_STB_P3_MBIST_ST0_hdcp_ksvfifo_ls(data)                             (0x00000001&(data))
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_2p2_drf_fail(data)                       ((0x02000000&(data))>>25)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_2p2_drf_fail0(data)                      ((0x01000000&(data))>>24)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_2p2_drf_fail1(data)                      ((0x00800000&(data))>>23)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_ksvfifo_drf_fail(data)                   ((0x00400000&(data))>>22)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_2p2_drf_pause(data)                      ((0x00200000&(data))>>21)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_ksvfifo_drf_pause(data)                  ((0x00100000&(data))>>20)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_2p2_drf_done(data)                       ((0x00080000&(data))>>19)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_ksvfifo_drf_done(data)                   ((0x00040000&(data))>>18)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_2p2_drf_resume(data)                     ((0x00020000&(data))>>17)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_ksvfifo_drf_resume(data)                 ((0x00010000&(data))>>16)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_2p2_drf_mode(data)                       ((0x00008000&(data))>>15)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_ksvfifo_drf_mode(data)                   ((0x00004000&(data))>>14)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_2p2_bist_fail(data)                      ((0x00002000&(data))>>13)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_2p2_bist_fail0(data)                     ((0x00001000&(data))>>12)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_2p2_bist_fail1(data)                     ((0x00000800&(data))>>11)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_ksvfifo_bist_fail(data)                  ((0x00000400&(data))>>10)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_2p2_bist_done(data)                      ((0x00000200&(data))>>9)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_ksvfifo_bist_done(data)                  ((0x00000100&(data))>>8)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_2p2_bist_en(data)                        ((0x00000080&(data))>>7)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_ksvfifo_bist_en(data)                    ((0x00000040&(data))>>6)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_2p2_rme1(data)                           ((0x00000020&(data))>>5)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_2p2_rme0(data)                           ((0x00000010&(data))>>4)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_ksvfifo_rme(data)                        ((0x00000008&(data))>>3)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_2p2_ls1(data)                            ((0x00000004&(data))>>2)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_2p2_ls0(data)                            ((0x00000002&(data))>>1)
#define  HDMI_STB_P3_MBIST_ST0_get_hdcp_ksvfifo_ls(data)                         (0x00000001&(data))

#define  HDMI_STB_P3_MBIST_ST1                                                  0x180BD354
#define  HDMI_STB_P3_MBIST_ST1_reg_addr                                          "0xB80BD354"
#define  HDMI_STB_P3_MBIST_ST1_reg                                               0xB80BD354
#define  HDMI_STB_P3_MBIST_ST1_inst_addr                                         "0x0012"
#define  set_HDMI_STB_P3_MBIST_ST1_reg(data)                                     (*((volatile unsigned int*)HDMI_STB_P3_MBIST_ST1_reg)=data)
#define  get_HDMI_STB_P3_MBIST_ST1_reg                                           (*((volatile unsigned int*)HDMI_STB_P3_MBIST_ST1_reg))
#define  HDMI_STB_P3_MBIST_ST1_hdcp_2p2_test1_1_shift                            (14)
#define  HDMI_STB_P3_MBIST_ST1_hdcp_2p2_test1_0_shift                            (13)
#define  HDMI_STB_P3_MBIST_ST1_hdcp_ksvfifo_test1_0_shift                        (12)
#define  HDMI_STB_P3_MBIST_ST1_hdcp_2p2_rm1_shift                                (8)
#define  HDMI_STB_P3_MBIST_ST1_hdcp_2p2_rm0_shift                                (4)
#define  HDMI_STB_P3_MBIST_ST1_hdcp_ksvfifo_rm_shift                             (0)
#define  HDMI_STB_P3_MBIST_ST1_hdcp_2p2_test1_1_mask                             (0x00004000)
#define  HDMI_STB_P3_MBIST_ST1_hdcp_2p2_test1_0_mask                             (0x00002000)
#define  HDMI_STB_P3_MBIST_ST1_hdcp_ksvfifo_test1_0_mask                         (0x00001000)
#define  HDMI_STB_P3_MBIST_ST1_hdcp_2p2_rm1_mask                                 (0x00000F00)
#define  HDMI_STB_P3_MBIST_ST1_hdcp_2p2_rm0_mask                                 (0x000000F0)
#define  HDMI_STB_P3_MBIST_ST1_hdcp_ksvfifo_rm_mask                              (0x0000000F)
#define  HDMI_STB_P3_MBIST_ST1_hdcp_2p2_test1_1(data)                            (0x00004000&((data)<<14))
#define  HDMI_STB_P3_MBIST_ST1_hdcp_2p2_test1_0(data)                            (0x00002000&((data)<<13))
#define  HDMI_STB_P3_MBIST_ST1_hdcp_ksvfifo_test1_0(data)                        (0x00001000&((data)<<12))
#define  HDMI_STB_P3_MBIST_ST1_hdcp_2p2_rm1(data)                                (0x00000F00&((data)<<8))
#define  HDMI_STB_P3_MBIST_ST1_hdcp_2p2_rm0(data)                                (0x000000F0&((data)<<4))
#define  HDMI_STB_P3_MBIST_ST1_hdcp_ksvfifo_rm(data)                             (0x0000000F&(data))
#define  HDMI_STB_P3_MBIST_ST1_get_hdcp_2p2_test1_1(data)                        ((0x00004000&(data))>>14)
#define  HDMI_STB_P3_MBIST_ST1_get_hdcp_2p2_test1_0(data)                        ((0x00002000&(data))>>13)
#define  HDMI_STB_P3_MBIST_ST1_get_hdcp_ksvfifo_test1_0(data)                    ((0x00001000&(data))>>12)
#define  HDMI_STB_P3_MBIST_ST1_get_hdcp_2p2_rm1(data)                            ((0x00000F00&(data))>>8)
#define  HDMI_STB_P3_MBIST_ST1_get_hdcp_2p2_rm0(data)                            ((0x000000F0&(data))>>4)
#define  HDMI_STB_P3_MBIST_ST1_get_hdcp_ksvfifo_rm(data)                         (0x0000000F&(data))

#define  HDMI_STB_P3_MBIST_ST2                                                  0x180BD358
#define  HDMI_STB_P3_MBIST_ST2_reg_addr                                          "0xB80BD358"
#define  HDMI_STB_P3_MBIST_ST2_reg                                               0xB80BD358
#define  HDMI_STB_P3_MBIST_ST2_inst_addr                                         "0x0013"
#define  set_HDMI_STB_P3_MBIST_ST2_reg(data)                                     (*((volatile unsigned int*)HDMI_STB_P3_MBIST_ST2_reg)=data)
#define  get_HDMI_STB_P3_MBIST_ST2_reg                                           (*((volatile unsigned int*)HDMI_STB_P3_MBIST_ST2_reg))
#define  HDMI_STB_P3_MBIST_ST2_hdcp_drf_fail_shift                               (9)
#define  HDMI_STB_P3_MBIST_ST2_hdcp_drf_pause_shift                              (8)
#define  HDMI_STB_P3_MBIST_ST2_hdcp_drf_done_shift                               (7)
#define  HDMI_STB_P3_MBIST_ST2_hdcp_drf_resume_shift                             (6)
#define  HDMI_STB_P3_MBIST_ST2_hdcp_drf_mode_shift                               (5)
#define  HDMI_STB_P3_MBIST_ST2_hdcp_bist_fail_shift                              (4)
#define  HDMI_STB_P3_MBIST_ST2_hdcp_bist_done_shift                              (3)
#define  HDMI_STB_P3_MBIST_ST2_hdcp_bist_en_shift                                (2)
#define  HDMI_STB_P3_MBIST_ST2_hdcp_rme_shift                                    (1)
#define  HDMI_STB_P3_MBIST_ST2_hdcp_ls_shift                                     (0)
#define  HDMI_STB_P3_MBIST_ST2_hdcp_drf_fail_mask                                (0x00000200)
#define  HDMI_STB_P3_MBIST_ST2_hdcp_drf_pause_mask                               (0x00000100)
#define  HDMI_STB_P3_MBIST_ST2_hdcp_drf_done_mask                                (0x00000080)
#define  HDMI_STB_P3_MBIST_ST2_hdcp_drf_resume_mask                              (0x00000040)
#define  HDMI_STB_P3_MBIST_ST2_hdcp_drf_mode_mask                                (0x00000020)
#define  HDMI_STB_P3_MBIST_ST2_hdcp_bist_fail_mask                               (0x00000010)
#define  HDMI_STB_P3_MBIST_ST2_hdcp_bist_done_mask                               (0x00000008)
#define  HDMI_STB_P3_MBIST_ST2_hdcp_bist_en_mask                                 (0x00000004)
#define  HDMI_STB_P3_MBIST_ST2_hdcp_rme_mask                                     (0x00000002)
#define  HDMI_STB_P3_MBIST_ST2_hdcp_ls_mask                                      (0x00000001)
#define  HDMI_STB_P3_MBIST_ST2_hdcp_drf_fail(data)                               (0x00000200&((data)<<9))
#define  HDMI_STB_P3_MBIST_ST2_hdcp_drf_pause(data)                              (0x00000100&((data)<<8))
#define  HDMI_STB_P3_MBIST_ST2_hdcp_drf_done(data)                               (0x00000080&((data)<<7))
#define  HDMI_STB_P3_MBIST_ST2_hdcp_drf_resume(data)                             (0x00000040&((data)<<6))
#define  HDMI_STB_P3_MBIST_ST2_hdcp_drf_mode(data)                               (0x00000020&((data)<<5))
#define  HDMI_STB_P3_MBIST_ST2_hdcp_bist_fail(data)                              (0x00000010&((data)<<4))
#define  HDMI_STB_P3_MBIST_ST2_hdcp_bist_done(data)                              (0x00000008&((data)<<3))
#define  HDMI_STB_P3_MBIST_ST2_hdcp_bist_en(data)                                (0x00000004&((data)<<2))
#define  HDMI_STB_P3_MBIST_ST2_hdcp_rme(data)                                    (0x00000002&((data)<<1))
#define  HDMI_STB_P3_MBIST_ST2_hdcp_ls(data)                                     (0x00000001&(data))
#define  HDMI_STB_P3_MBIST_ST2_get_hdcp_drf_fail(data)                           ((0x00000200&(data))>>9)
#define  HDMI_STB_P3_MBIST_ST2_get_hdcp_drf_pause(data)                          ((0x00000100&(data))>>8)
#define  HDMI_STB_P3_MBIST_ST2_get_hdcp_drf_done(data)                           ((0x00000080&(data))>>7)
#define  HDMI_STB_P3_MBIST_ST2_get_hdcp_drf_resume(data)                         ((0x00000040&(data))>>6)
#define  HDMI_STB_P3_MBIST_ST2_get_hdcp_drf_mode(data)                           ((0x00000020&(data))>>5)
#define  HDMI_STB_P3_MBIST_ST2_get_hdcp_bist_fail(data)                          ((0x00000010&(data))>>4)
#define  HDMI_STB_P3_MBIST_ST2_get_hdcp_bist_done(data)                          ((0x00000008&(data))>>3)
#define  HDMI_STB_P3_MBIST_ST2_get_hdcp_bist_en(data)                            ((0x00000004&(data))>>2)
#define  HDMI_STB_P3_MBIST_ST2_get_hdcp_rme(data)                                ((0x00000002&(data))>>1)
#define  HDMI_STB_P3_MBIST_ST2_get_hdcp_ls(data)                                 (0x00000001&(data))

#define  HDMI_STB_P3_MBIST_ST3                                                  0x180BD35C
#define  HDMI_STB_P3_MBIST_ST3_reg_addr                                          "0xB80BD35C"
#define  HDMI_STB_P3_MBIST_ST3_reg                                               0xB80BD35C
#define  HDMI_STB_P3_MBIST_ST3_inst_addr                                         "0x0014"
#define  set_HDMI_STB_P3_MBIST_ST3_reg(data)                                     (*((volatile unsigned int*)HDMI_STB_P3_MBIST_ST3_reg)=data)
#define  get_HDMI_STB_P3_MBIST_ST3_reg                                           (*((volatile unsigned int*)HDMI_STB_P3_MBIST_ST3_reg))
#define  HDMI_STB_P3_MBIST_ST3_hdcp_test1_0_shift                                (9)
#define  HDMI_STB_P3_MBIST_ST3_hdcp_rm_shift                                     (4)
#define  HDMI_STB_P3_MBIST_ST3_hdcp_test1_0_mask                                 (0x00000200)
#define  HDMI_STB_P3_MBIST_ST3_hdcp_rm_mask                                      (0x000000F0)
#define  HDMI_STB_P3_MBIST_ST3_hdcp_test1_0(data)                                (0x00000200&((data)<<9))
#define  HDMI_STB_P3_MBIST_ST3_hdcp_rm(data)                                     (0x000000F0&((data)<<4))
#define  HDMI_STB_P3_MBIST_ST3_get_hdcp_test1_0(data)                            ((0x00000200&(data))>>9)
#define  HDMI_STB_P3_MBIST_ST3_get_hdcp_rm(data)                                 ((0x000000F0&(data))>>4)

#define  HDMI_STB_P3_stb_xtal_1ms                                               0x180BD370
#define  HDMI_STB_P3_stb_xtal_1ms_reg_addr                                       "0xB80BD370"
#define  HDMI_STB_P3_stb_xtal_1ms_reg                                            0xB80BD370
#define  HDMI_STB_P3_stb_xtal_1ms_inst_addr                                      "0x0015"
#define  set_HDMI_STB_P3_stb_xtal_1ms_reg(data)                                  (*((volatile unsigned int*)HDMI_STB_P3_stb_xtal_1ms_reg)=data)
#define  get_HDMI_STB_P3_stb_xtal_1ms_reg                                        (*((volatile unsigned int*)HDMI_STB_P3_stb_xtal_1ms_reg))
#define  HDMI_STB_P3_stb_xtal_1ms_cnt_shift                                      (0)
#define  HDMI_STB_P3_stb_xtal_1ms_cnt_mask                                       (0x00007FFF)
#define  HDMI_STB_P3_stb_xtal_1ms_cnt(data)                                      (0x00007FFF&(data))
#define  HDMI_STB_P3_stb_xtal_1ms_get_cnt(data)                                  (0x00007FFF&(data))

#define  HDMI_STB_P3_stb_xtal_4p7us                                             0x180BD374
#define  HDMI_STB_P3_stb_xtal_4p7us_reg_addr                                     "0xB80BD374"
#define  HDMI_STB_P3_stb_xtal_4p7us_reg                                          0xB80BD374
#define  HDMI_STB_P3_stb_xtal_4p7us_inst_addr                                    "0x0016"
#define  set_HDMI_STB_P3_stb_xtal_4p7us_reg(data)                                (*((volatile unsigned int*)HDMI_STB_P3_stb_xtal_4p7us_reg)=data)
#define  get_HDMI_STB_P3_stb_xtal_4p7us_reg                                      (*((volatile unsigned int*)HDMI_STB_P3_stb_xtal_4p7us_reg))
#define  HDMI_STB_P3_stb_xtal_4p7us_cnt_shift                                    (0)
#define  HDMI_STB_P3_stb_xtal_4p7us_cnt_mask                                     (0x000000FF)
#define  HDMI_STB_P3_stb_xtal_4p7us_cnt(data)                                    (0x000000FF&(data))
#define  HDMI_STB_P3_stb_xtal_4p7us_get_cnt(data)                                (0x000000FF&(data))

#define  HDMI_STB_P3_HDMI_STB_DBGBOX_CTL                                        0x180BD380
#define  HDMI_STB_P3_HDMI_STB_DBGBOX_CTL_reg_addr                                "0xB80BD380"
#define  HDMI_STB_P3_HDMI_STB_DBGBOX_CTL_reg                                     0xB80BD380
#define  HDMI_STB_P3_HDMI_STB_DBGBOX_CTL_inst_addr                               "0x0017"
#define  set_HDMI_STB_P3_HDMI_STB_DBGBOX_CTL_reg(data)                           (*((volatile unsigned int*)HDMI_STB_P3_HDMI_STB_DBGBOX_CTL_reg)=data)
#define  get_HDMI_STB_P3_HDMI_STB_DBGBOX_CTL_reg                                 (*((volatile unsigned int*)HDMI_STB_P3_HDMI_STB_DBGBOX_CTL_reg))
#define  HDMI_STB_P3_HDMI_STB_DBGBOX_CTL_dbg_sel_shift                           (0)
#define  HDMI_STB_P3_HDMI_STB_DBGBOX_CTL_dbg_sel_mask                            (0x0000003F)
#define  HDMI_STB_P3_HDMI_STB_DBGBOX_CTL_dbg_sel(data)                           (0x0000003F&(data))
#define  HDMI_STB_P3_HDMI_STB_DBGBOX_CTL_get_dbg_sel(data)                       (0x0000003F&(data))

#define  HDMI_STB_P3_CLKDETSR                                                   0x180BD390
#define  HDMI_STB_P3_CLKDETSR_reg_addr                                           "0xB80BD390"
#define  HDMI_STB_P3_CLKDETSR_reg                                                0xB80BD390
#define  HDMI_STB_P3_CLKDETSR_inst_addr                                          "0x0018"
#define  set_HDMI_STB_P3_CLKDETSR_reg(data)                                      (*((volatile unsigned int*)HDMI_STB_P3_CLKDETSR_reg)=data)
#define  get_HDMI_STB_P3_CLKDETSR_reg                                            (*((volatile unsigned int*)HDMI_STB_P3_CLKDETSR_reg))
#define  HDMI_STB_P3_CLKDETSR_reset_counter_shift                                (20)
#define  HDMI_STB_P3_CLKDETSR_pop_out_shift                                      (19)
#define  HDMI_STB_P3_CLKDETSR_clk_counter_shift                                  (7)
#define  HDMI_STB_P3_CLKDETSR_clock_det_en_shift                                 (6)
#define  HDMI_STB_P3_CLKDETSR_en_tmds_chg_irq_shift                              (5)
#define  HDMI_STB_P3_CLKDETSR_tmds_chg_irq_shift                                 (4)
#define  HDMI_STB_P3_CLKDETSR_dummy_3_2_shift                                    (2)
#define  HDMI_STB_P3_CLKDETSR_clk_in_target_irq_en_shift                         (1)
#define  HDMI_STB_P3_CLKDETSR_clk_in_target_shift                                (0)
#define  HDMI_STB_P3_CLKDETSR_reset_counter_mask                                 (0x00100000)
#define  HDMI_STB_P3_CLKDETSR_pop_out_mask                                       (0x00080000)
#define  HDMI_STB_P3_CLKDETSR_clk_counter_mask                                   (0x0007FF80)
#define  HDMI_STB_P3_CLKDETSR_clock_det_en_mask                                  (0x00000040)
#define  HDMI_STB_P3_CLKDETSR_en_tmds_chg_irq_mask                               (0x00000020)
#define  HDMI_STB_P3_CLKDETSR_tmds_chg_irq_mask                                  (0x00000010)
#define  HDMI_STB_P3_CLKDETSR_dummy_3_2_mask                                     (0x0000000C)
#define  HDMI_STB_P3_CLKDETSR_clk_in_target_irq_en_mask                          (0x00000002)
#define  HDMI_STB_P3_CLKDETSR_clk_in_target_mask                                 (0x00000001)
#define  HDMI_STB_P3_CLKDETSR_reset_counter(data)                                (0x00100000&((data)<<20))
#define  HDMI_STB_P3_CLKDETSR_pop_out(data)                                      (0x00080000&((data)<<19))
#define  HDMI_STB_P3_CLKDETSR_clk_counter(data)                                  (0x0007FF80&((data)<<7))
#define  HDMI_STB_P3_CLKDETSR_clock_det_en(data)                                 (0x00000040&((data)<<6))
#define  HDMI_STB_P3_CLKDETSR_en_tmds_chg_irq(data)                              (0x00000020&((data)<<5))
#define  HDMI_STB_P3_CLKDETSR_tmds_chg_irq(data)                                 (0x00000010&((data)<<4))
#define  HDMI_STB_P3_CLKDETSR_dummy_3_2(data)                                    (0x0000000C&((data)<<2))
#define  HDMI_STB_P3_CLKDETSR_clk_in_target_irq_en(data)                         (0x00000002&((data)<<1))
#define  HDMI_STB_P3_CLKDETSR_clk_in_target(data)                                (0x00000001&(data))
#define  HDMI_STB_P3_CLKDETSR_get_reset_counter(data)                            ((0x00100000&(data))>>20)
#define  HDMI_STB_P3_CLKDETSR_get_pop_out(data)                                  ((0x00080000&(data))>>19)
#define  HDMI_STB_P3_CLKDETSR_get_clk_counter(data)                              ((0x0007FF80&(data))>>7)
#define  HDMI_STB_P3_CLKDETSR_get_clock_det_en(data)                             ((0x00000040&(data))>>6)
#define  HDMI_STB_P3_CLKDETSR_get_en_tmds_chg_irq(data)                          ((0x00000020&(data))>>5)
#define  HDMI_STB_P3_CLKDETSR_get_tmds_chg_irq(data)                             ((0x00000010&(data))>>4)
#define  HDMI_STB_P3_CLKDETSR_get_dummy_3_2(data)                                ((0x0000000C&(data))>>2)
#define  HDMI_STB_P3_CLKDETSR_get_clk_in_target_irq_en(data)                     ((0x00000002&(data))>>1)
#define  HDMI_STB_P3_CLKDETSR_get_clk_in_target(data)                            (0x00000001&(data))

#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_00                                     0x180BD394
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_00_reg_addr                             "0xB80BD394"
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_00_reg                                  0xB80BD394
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_00_inst_addr                            "0x0019"
#define  set_HDMI_STB_P3_GDI_TMDSCLK_SETTING_00_reg(data)                        (*((volatile unsigned int*)HDMI_STB_P3_GDI_TMDSCLK_SETTING_00_reg)=data)
#define  get_HDMI_STB_P3_GDI_TMDSCLK_SETTING_00_reg                              (*((volatile unsigned int*)HDMI_STB_P3_GDI_TMDSCLK_SETTING_00_reg))
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_00_dclk_cnt_start_shift                 (16)
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_00_dclk_cnt_end_shift                   (0)
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_00_dclk_cnt_start_mask                  (0x0FFF0000)
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_00_dclk_cnt_end_mask                    (0x00000FFF)
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_00_dclk_cnt_start(data)                 (0x0FFF0000&((data)<<16))
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_00_dclk_cnt_end(data)                   (0x00000FFF&(data))
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_00_get_dclk_cnt_start(data)             ((0x0FFF0000&(data))>>16)
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_00_get_dclk_cnt_end(data)               (0x00000FFF&(data))

#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_01                                     0x180BD398
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_01_reg_addr                             "0xB80BD398"
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_01_reg                                  0xB80BD398
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_01_inst_addr                            "0x001A"
#define  set_HDMI_STB_P3_GDI_TMDSCLK_SETTING_01_reg(data)                        (*((volatile unsigned int*)HDMI_STB_P3_GDI_TMDSCLK_SETTING_01_reg)=data)
#define  get_HDMI_STB_P3_GDI_TMDSCLK_SETTING_01_reg                              (*((volatile unsigned int*)HDMI_STB_P3_GDI_TMDSCLK_SETTING_01_reg))
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_01_target_for_maximum_clk_counter_shift (16)
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_01_target_for_minimum_clk_counter_shift (0)
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_01_target_for_maximum_clk_counter_mask  (0x0FFF0000)
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_01_target_for_minimum_clk_counter_mask  (0x00000FFF)
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_01_target_for_maximum_clk_counter(data) (0x0FFF0000&((data)<<16))
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_01_target_for_minimum_clk_counter(data) (0x00000FFF&(data))
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_01_get_target_for_maximum_clk_counter(data) ((0x0FFF0000&(data))>>16)
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_01_get_target_for_minimum_clk_counter(data) (0x00000FFF&(data))

#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_02                                     0x180BD39C
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_02_reg_addr                             "0xB80BD39C"
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_02_reg                                  0xB80BD39C
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_02_inst_addr                            "0x001B"
#define  set_HDMI_STB_P3_GDI_TMDSCLK_SETTING_02_reg(data)                        (*((volatile unsigned int*)HDMI_STB_P3_GDI_TMDSCLK_SETTING_02_reg)=data)
#define  get_HDMI_STB_P3_GDI_TMDSCLK_SETTING_02_reg                              (*((volatile unsigned int*)HDMI_STB_P3_GDI_TMDSCLK_SETTING_02_reg))
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_02_clk_counter_err_threshold_shift      (8)
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_02_clk_counter_debounce_shift           (0)
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_02_clk_counter_err_threshold_mask       (0x00000F00)
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_02_clk_counter_debounce_mask            (0x000000FF)
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_02_clk_counter_err_threshold(data)      (0x00000F00&((data)<<8))
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_02_clk_counter_debounce(data)           (0x000000FF&(data))
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_02_get_clk_counter_err_threshold(data)  ((0x00000F00&(data))>>8)
#define  HDMI_STB_P3_GDI_TMDSCLK_SETTING_02_get_clk_counter_debounce(data)       (0x000000FF&(data))

#define  HDMI_STB_P3_ot                                                         0x180BD3A0
#define  HDMI_STB_P3_ot_reg_addr                                                 "0xB80BD3A0"
#define  HDMI_STB_P3_ot_reg                                                      0xB80BD3A0
#define  HDMI_STB_P3_ot_inst_addr                                                "0x001C"
#define  set_HDMI_STB_P3_ot_reg(data)                                            (*((volatile unsigned int*)HDMI_STB_P3_ot_reg)=data)
#define  get_HDMI_STB_P3_ot_reg                                                  (*((volatile unsigned int*)HDMI_STB_P3_ot_reg))
#define  HDMI_STB_P3_ot_port_sel_shift                                           (8)
#define  HDMI_STB_P3_ot_ddc_ch3_sel_shift                                        (6)
#define  HDMI_STB_P3_ot_ddc_ch2_sel_shift                                        (4)
#define  HDMI_STB_P3_ot_ddc_ch1_sel_shift                                        (2)
#define  HDMI_STB_P3_ot_ddc_ch0_sel_shift                                        (0)
#define  HDMI_STB_P3_ot_port_sel_mask                                            (0x00000300)
#define  HDMI_STB_P3_ot_ddc_ch3_sel_mask                                         (0x000000C0)
#define  HDMI_STB_P3_ot_ddc_ch2_sel_mask                                         (0x00000030)
#define  HDMI_STB_P3_ot_ddc_ch1_sel_mask                                         (0x0000000C)
#define  HDMI_STB_P3_ot_ddc_ch0_sel_mask                                         (0x00000003)
#define  HDMI_STB_P3_ot_port_sel(data)                                           (0x00000300&((data)<<8))
#define  HDMI_STB_P3_ot_ddc_ch3_sel(data)                                        (0x000000C0&((data)<<6))
#define  HDMI_STB_P3_ot_ddc_ch2_sel(data)                                        (0x00000030&((data)<<4))
#define  HDMI_STB_P3_ot_ddc_ch1_sel(data)                                        (0x0000000C&((data)<<2))
#define  HDMI_STB_P3_ot_ddc_ch0_sel(data)                                        (0x00000003&(data))
#define  HDMI_STB_P3_ot_get_port_sel(data)                                       ((0x00000300&(data))>>8)
#define  HDMI_STB_P3_ot_get_ddc_ch3_sel(data)                                    ((0x000000C0&(data))>>6)
#define  HDMI_STB_P3_ot_get_ddc_ch2_sel(data)                                    ((0x00000030&(data))>>4)
#define  HDMI_STB_P3_ot_get_ddc_ch1_sel(data)                                    ((0x0000000C&(data))>>2)
#define  HDMI_STB_P3_ot_get_ddc_ch0_sel(data)                                    (0x00000003&(data))

#define  HDMI_STB_P3_HDMI_STB_DBGBOX_PORT_SEL                                   0x180BD3A4
#define  HDMI_STB_P3_HDMI_STB_DBGBOX_PORT_SEL_reg_addr                           "0xB80BD3A4"
#define  HDMI_STB_P3_HDMI_STB_DBGBOX_PORT_SEL_reg                                0xB80BD3A4
#define  HDMI_STB_P3_HDMI_STB_DBGBOX_PORT_SEL_inst_addr                          "0x001D"
#define  set_HDMI_STB_P3_HDMI_STB_DBGBOX_PORT_SEL_reg(data)                      (*((volatile unsigned int*)HDMI_STB_P3_HDMI_STB_DBGBOX_PORT_SEL_reg)=data)
#define  get_HDMI_STB_P3_HDMI_STB_DBGBOX_PORT_SEL_reg                            (*((volatile unsigned int*)HDMI_STB_P3_HDMI_STB_DBGBOX_PORT_SEL_reg))
#define  HDMI_STB_P3_HDMI_STB_DBGBOX_PORT_SEL_hdmi_stb_test_sel_shift            (0)
#define  HDMI_STB_P3_HDMI_STB_DBGBOX_PORT_SEL_hdmi_stb_test_sel_mask             (0x0000000F)
#define  HDMI_STB_P3_HDMI_STB_DBGBOX_PORT_SEL_hdmi_stb_test_sel(data)            (0x0000000F&(data))
#define  HDMI_STB_P3_HDMI_STB_DBGBOX_PORT_SEL_get_hdmi_stb_test_sel(data)        (0x0000000F&(data))

#define  HDMI_STB_P3_clken_hdmi_stb                                             0x180BD3A8
#define  HDMI_STB_P3_clken_hdmi_stb_reg_addr                                     "0xB80BD3A8"
#define  HDMI_STB_P3_clken_hdmi_stb_reg                                          0xB80BD3A8
#define  HDMI_STB_P3_clken_hdmi_stb_inst_addr                                    "0x001E"
#define  set_HDMI_STB_P3_clken_hdmi_stb_reg(data)                                (*((volatile unsigned int*)HDMI_STB_P3_clken_hdmi_stb_reg)=data)
#define  get_HDMI_STB_P3_clken_hdmi_stb_reg                                      (*((volatile unsigned int*)HDMI_STB_P3_clken_hdmi_stb_reg))
#define  HDMI_STB_P3_clken_hdmi_stb_port3_shift                                  (3)
#define  HDMI_STB_P3_clken_hdmi_stb_port2_shift                                  (2)
#define  HDMI_STB_P3_clken_hdmi_stb_port1_shift                                  (1)
#define  HDMI_STB_P3_clken_hdmi_stb_port0_shift                                  (0)
#define  HDMI_STB_P3_clken_hdmi_stb_port3_mask                                   (0x00000008)
#define  HDMI_STB_P3_clken_hdmi_stb_port2_mask                                   (0x00000004)
#define  HDMI_STB_P3_clken_hdmi_stb_port1_mask                                   (0x00000002)
#define  HDMI_STB_P3_clken_hdmi_stb_port0_mask                                   (0x00000001)
#define  HDMI_STB_P3_clken_hdmi_stb_port3(data)                                  (0x00000008&((data)<<3))
#define  HDMI_STB_P3_clken_hdmi_stb_port2(data)                                  (0x00000004&((data)<<2))
#define  HDMI_STB_P3_clken_hdmi_stb_port1(data)                                  (0x00000002&((data)<<1))
#define  HDMI_STB_P3_clken_hdmi_stb_port0(data)                                  (0x00000001&(data))
#define  HDMI_STB_P3_clken_hdmi_stb_get_port3(data)                              ((0x00000008&(data))>>3)
#define  HDMI_STB_P3_clken_hdmi_stb_get_port2(data)                              ((0x00000004&(data))>>2)
#define  HDMI_STB_P3_clken_hdmi_stb_get_port1(data)                              ((0x00000002&(data))>>1)
#define  HDMI_STB_P3_clken_hdmi_stb_get_port0(data)                              (0x00000001&(data))

#define  HDMI_STB_P3_rst_n_hdmi_stb                                             0x180BD3AC
#define  HDMI_STB_P3_rst_n_hdmi_stb_reg_addr                                     "0xB80BD3AC"
#define  HDMI_STB_P3_rst_n_hdmi_stb_reg                                          0xB80BD3AC
#define  HDMI_STB_P3_rst_n_hdmi_stb_inst_addr                                    "0x001F"
#define  set_HDMI_STB_P3_rst_n_hdmi_stb_reg(data)                                (*((volatile unsigned int*)HDMI_STB_P3_rst_n_hdmi_stb_reg)=data)
#define  get_HDMI_STB_P3_rst_n_hdmi_stb_reg                                      (*((volatile unsigned int*)HDMI_STB_P3_rst_n_hdmi_stb_reg))
#define  HDMI_STB_P3_rst_n_hdmi_stb_port3_shift                                  (3)
#define  HDMI_STB_P3_rst_n_hdmi_stb_port2_shift                                  (2)
#define  HDMI_STB_P3_rst_n_hdmi_stb_port1_shift                                  (1)
#define  HDMI_STB_P3_rst_n_hdmi_stb_port0_shift                                  (0)
#define  HDMI_STB_P3_rst_n_hdmi_stb_port3_mask                                   (0x00000008)
#define  HDMI_STB_P3_rst_n_hdmi_stb_port2_mask                                   (0x00000004)
#define  HDMI_STB_P3_rst_n_hdmi_stb_port1_mask                                   (0x00000002)
#define  HDMI_STB_P3_rst_n_hdmi_stb_port0_mask                                   (0x00000001)
#define  HDMI_STB_P3_rst_n_hdmi_stb_port3(data)                                  (0x00000008&((data)<<3))
#define  HDMI_STB_P3_rst_n_hdmi_stb_port2(data)                                  (0x00000004&((data)<<2))
#define  HDMI_STB_P3_rst_n_hdmi_stb_port1(data)                                  (0x00000002&((data)<<1))
#define  HDMI_STB_P3_rst_n_hdmi_stb_port0(data)                                  (0x00000001&(data))
#define  HDMI_STB_P3_rst_n_hdmi_stb_get_port3(data)                              ((0x00000008&(data))>>3)
#define  HDMI_STB_P3_rst_n_hdmi_stb_get_port2(data)                              ((0x00000004&(data))>>2)
#define  HDMI_STB_P3_rst_n_hdmi_stb_get_port1(data)                              ((0x00000002&(data))>>1)
#define  HDMI_STB_P3_rst_n_hdmi_stb_get_port0(data)                              (0x00000001&(data))

#define  HDMI_STB_P3_hdmi_mp                                                    0x180BD3B0
#define  HDMI_STB_P3_hdmi_mp_reg_addr                                            "0xB80BD3B0"
#define  HDMI_STB_P3_hdmi_mp_reg                                                 0xB80BD3B0
#define  HDMI_STB_P3_hdmi_mp_inst_addr                                           "0x0020"
#define  set_HDMI_STB_P3_hdmi_mp_reg(data)                                       (*((volatile unsigned int*)HDMI_STB_P3_hdmi_mp_reg)=data)
#define  get_HDMI_STB_P3_hdmi_mp_reg                                             (*((volatile unsigned int*)HDMI_STB_P3_hdmi_mp_reg))
#define  HDMI_STB_P3_hdmi_mp_mp_data_out_shift                                   (8)
#define  HDMI_STB_P3_hdmi_mp_mp_check_and_shift                                  (7)
#define  HDMI_STB_P3_hdmi_mp_mp_check_or_shift                                   (6)
#define  HDMI_STB_P3_hdmi_mp_sda_i_shift                                         (5)
#define  HDMI_STB_P3_hdmi_mp_scl_i_shift                                         (4)
#define  HDMI_STB_P3_hdmi_mp_sda_oe_shift                                        (3)
#define  HDMI_STB_P3_hdmi_mp_ddc_port_sel_shift                                  (1)
#define  HDMI_STB_P3_hdmi_mp_mp_mode_shift                                       (0)
#define  HDMI_STB_P3_hdmi_mp_mp_data_out_mask                                    (0x00000100)
#define  HDMI_STB_P3_hdmi_mp_mp_check_and_mask                                   (0x00000080)
#define  HDMI_STB_P3_hdmi_mp_mp_check_or_mask                                    (0x00000040)
#define  HDMI_STB_P3_hdmi_mp_sda_i_mask                                          (0x00000020)
#define  HDMI_STB_P3_hdmi_mp_scl_i_mask                                          (0x00000010)
#define  HDMI_STB_P3_hdmi_mp_sda_oe_mask                                         (0x00000008)
#define  HDMI_STB_P3_hdmi_mp_ddc_port_sel_mask                                   (0x00000006)
#define  HDMI_STB_P3_hdmi_mp_mp_mode_mask                                        (0x00000001)
#define  HDMI_STB_P3_hdmi_mp_mp_data_out(data)                                   (0x00000100&((data)<<8))
#define  HDMI_STB_P3_hdmi_mp_mp_check_and(data)                                  (0x00000080&((data)<<7))
#define  HDMI_STB_P3_hdmi_mp_mp_check_or(data)                                   (0x00000040&((data)<<6))
#define  HDMI_STB_P3_hdmi_mp_sda_i(data)                                         (0x00000020&((data)<<5))
#define  HDMI_STB_P3_hdmi_mp_scl_i(data)                                         (0x00000010&((data)<<4))
#define  HDMI_STB_P3_hdmi_mp_sda_oe(data)                                        (0x00000008&((data)<<3))
#define  HDMI_STB_P3_hdmi_mp_ddc_port_sel(data)                                  (0x00000006&((data)<<1))
#define  HDMI_STB_P3_hdmi_mp_mp_mode(data)                                       (0x00000001&(data))
#define  HDMI_STB_P3_hdmi_mp_get_mp_data_out(data)                               ((0x00000100&(data))>>8)
#define  HDMI_STB_P3_hdmi_mp_get_mp_check_and(data)                              ((0x00000080&(data))>>7)
#define  HDMI_STB_P3_hdmi_mp_get_mp_check_or(data)                               ((0x00000040&(data))>>6)
#define  HDMI_STB_P3_hdmi_mp_get_sda_i(data)                                     ((0x00000020&(data))>>5)
#define  HDMI_STB_P3_hdmi_mp_get_scl_i(data)                                     ((0x00000010&(data))>>4)
#define  HDMI_STB_P3_hdmi_mp_get_sda_oe(data)                                    ((0x00000008&(data))>>3)
#define  HDMI_STB_P3_hdmi_mp_get_ddc_port_sel(data)                              ((0x00000006&(data))>>1)
#define  HDMI_STB_P3_hdmi_mp_get_mp_mode(data)                                   (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======HDMI_STB_P3 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  update11_hwauto_en:8;
        RBus_UInt32  update10_hwauto_en:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  status_flags_chg_irq:1;
        RBus_UInt32  hw_mask_en:1;
        RBus_UInt32  irq_cpu_gen:1;
        RBus_UInt32  write20_det_irq_flag:1;
        RBus_UInt32  write20_det_irq_en:1;
        RBus_UInt32  pending:1;
        RBus_UInt32  scdc_err_det_sum_port:1;
        RBus_UInt32  scdc_sel:1;
        RBus_UInt32  scdc_reset:1;
        RBus_UInt32  write31_det_irq_flag:1;
        RBus_UInt32  write31_det_irq_en:1;
        RBus_UInt32  frl_start_src_clr_en:1;
        RBus_UInt32  maddf:1;
        RBus_UInt32  scdc_en:1;
    };
}hdmi_stb_p3_scdc_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  timeout_flag:1;
        RBus_UInt32  timeout_sel:2;
        RBus_UInt32  status_flag:1;
        RBus_UInt32  config_flag:1;
        RBus_UInt32  scrambler_status_flag:1;
        RBus_UInt32  tmds_config_flag:1;
        RBus_UInt32  i2c_scl_dly_sel:4;
        RBus_UInt32  i2c_sda_dly_sel:4;
        RBus_UInt32  i2c_free_num:7;
        RBus_UInt32  rr_retry_sel:2;
        RBus_UInt32  dbnc_level_sel:1;
        RBus_UInt32  dummy180bd304_6_3:4;
        RBus_UInt32  test_rr_added_delay_sel:2;
        RBus_UInt32  apai:1;
    };
}hdmi_stb_p3_scdc_pcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ap1:8;
    };
}hdmi_stb_p3_scdc_ap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  dp1_mask:8;
        RBus_UInt32  dp1:8;
    };
}hdmi_stb_p3_scdc_dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  clr_ri:1;
        RBus_UInt32  res3:9;
        RBus_UInt32  res4:10;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:1;
        RBus_UInt32  res9:1;
        RBus_UInt32  res10:1;
        RBus_UInt32  cypher_dis:1;
        RBus_UInt32  maddf:1;
        RBus_UInt32  dkapde:1;
        RBus_UInt32  hdcp_en:1;
    };
}hdmi_stb_p3_hdcp_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dkap:8;
    };
}hdmi_stb_p3_hdcp_dkap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  iic_st:3;
        RBus_UInt32  i2c_scl_dly_sel:4;
        RBus_UInt32  i2c_sda_dly_sel:4;
        RBus_UInt32  res2:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:7;
        RBus_UInt32  ddcdbnc:1;
        RBus_UInt32  dvi_enc_mode:1;
        RBus_UInt32  dbnc_level_sel:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:1;
        RBus_UInt32  km_start_sel:1;
        RBus_UInt32  apai_type:1;
        RBus_UInt32  apai:1;
    };
}hdmi_stb_p3_hdcp_pcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  akm_flag:1;
        RBus_UInt32  adne_flag:1;
        RBus_UInt32  ence_flag:1;
        RBus_UInt32  nc_flag:1;
        RBus_UInt32  wr_aksv_flag:1;
        RBus_UInt32  rd_bcap_flag:1;
        RBus_UInt32  rd_ri_flag:1;
        RBus_UInt32  rd_bksv_flag:1;
        RBus_UInt32  dummy180bd31c_0:1;
    };
}hdmi_stb_p3_hdcp_flag1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  irq_akm_en:1;
        RBus_UInt32  irq_adne_en:1;
        RBus_UInt32  irq_ence_en:1;
        RBus_UInt32  irq_nc_en:1;
        RBus_UInt32  irq_aksv_en:1;
        RBus_UInt32  irq_bcap_en:1;
        RBus_UInt32  irq_ri_en:1;
        RBus_UInt32  irq_bksv_en:1;
        RBus_UInt32  dummy180bd320_0:1;
    };
}hdmi_stb_p3_hdcp_flag2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  ksvfifo_status:1;
        RBus_UInt32  dp_ksvfifo_ptr:10;
        RBus_UInt32  ap1:8;
    };
}hdmi_stb_p3_hdcp_ap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dp1:8;
    };
}hdmi_stb_p3_hdcp_dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  enable_reauth:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  switch_state:12;
        RBus_UInt32  rpt_thr_unauth:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  apply_state:1;
        RBus_UInt32  mspai:1;
        RBus_UInt32  new_auth_device:1;
        RBus_UInt32  verify_id_pass:1;
        RBus_UInt32  verify_id_done:1;
        RBus_UInt32  assemble_id_fail:1;
        RBus_UInt32  downstream_done:1;
        RBus_UInt32  ks_done:1;
        RBus_UInt32  switch_unauth:1;
        RBus_UInt32  hdcp_2p2_en:1;
    };
}hdmi_stb_p3_hdcp_2p2_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}hdmi_stb_p3_hdcp_2p2_riv0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}hdmi_stb_p3_hdcp_2p2_riv1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  res2:8;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  irq_msg_overwrite:1;
        RBus_UInt32  irq_unauth_chg:1;
        RBus_UInt32  irq_state_chg:1;
        RBus_UInt32  irq_rd_msg_done:1;
        RBus_UInt32  irq_wr_msg_done:1;
        RBus_UInt32  irq_rd_msg_start:1;
        RBus_UInt32  irq_wr_msg_start:1;
        RBus_UInt32  state:12;
    };
}hdmi_stb_p3_hdcp_2p2_sr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  res2:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  irq_msg_overwrite_en:1;
        RBus_UInt32  irq_unauth_chg_en:1;
        RBus_UInt32  irq_state_chg_en:1;
        RBus_UInt32  irq_rd_msg_done_en:1;
        RBus_UInt32  irq_wr_msg_done_en:1;
        RBus_UInt32  irq_rd_msg_start_en:1;
        RBus_UInt32  irq_wr_msg_start_en:1;
    };
}hdmi_stb_p3_hdcp_2p2_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  ap1:10;
    };
}hdmi_stb_p3_hdcp_msap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dp1:8;
    };
}hdmi_stb_p3_hdcp_msdp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  hdcp1p4:1;
        RBus_UInt32  hdcp2p2:1;
    };
}hdmi_stb_p3_hdcp_pend_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  hdcp_2p2_drf_fail:1;
        RBus_UInt32  hdcp_2p2_drf_fail0:1;
        RBus_UInt32  hdcp_2p2_drf_fail1:1;
        RBus_UInt32  hdcp_ksvfifo_drf_fail:1;
        RBus_UInt32  hdcp_2p2_drf_pause:1;
        RBus_UInt32  hdcp_ksvfifo_drf_pause:1;
        RBus_UInt32  hdcp_2p2_drf_done:1;
        RBus_UInt32  hdcp_ksvfifo_drf_done:1;
        RBus_UInt32  hdcp_2p2_drf_resume:1;
        RBus_UInt32  hdcp_ksvfifo_drf_resume:1;
        RBus_UInt32  hdcp_2p2_drf_mode:1;
        RBus_UInt32  hdcp_ksvfifo_drf_mode:1;
        RBus_UInt32  hdcp_2p2_bist_fail:1;
        RBus_UInt32  hdcp_2p2_bist_fail0:1;
        RBus_UInt32  hdcp_2p2_bist_fail1:1;
        RBus_UInt32  hdcp_ksvfifo_bist_fail:1;
        RBus_UInt32  hdcp_2p2_bist_done:1;
        RBus_UInt32  hdcp_ksvfifo_bist_done:1;
        RBus_UInt32  hdcp_2p2_bist_en:1;
        RBus_UInt32  hdcp_ksvfifo_bist_en:1;
        RBus_UInt32  hdcp_2p2_rme1:1;
        RBus_UInt32  hdcp_2p2_rme0:1;
        RBus_UInt32  hdcp_ksvfifo_rme:1;
        RBus_UInt32  hdcp_2p2_ls1:1;
        RBus_UInt32  hdcp_2p2_ls0:1;
        RBus_UInt32  hdcp_ksvfifo_ls:1;
    };
}hdmi_stb_p3_mbist_st0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  hdcp_2p2_test1_1:1;
        RBus_UInt32  hdcp_2p2_test1_0:1;
        RBus_UInt32  hdcp_ksvfifo_test1_0:1;
        RBus_UInt32  hdcp_2p2_rm1:4;
        RBus_UInt32  hdcp_2p2_rm0:4;
        RBus_UInt32  hdcp_ksvfifo_rm:4;
    };
}hdmi_stb_p3_mbist_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  hdcp_drf_fail:1;
        RBus_UInt32  hdcp_drf_pause:1;
        RBus_UInt32  hdcp_drf_done:1;
        RBus_UInt32  hdcp_drf_resume:1;
        RBus_UInt32  hdcp_drf_mode:1;
        RBus_UInt32  hdcp_bist_fail:1;
        RBus_UInt32  hdcp_bist_done:1;
        RBus_UInt32  hdcp_bist_en:1;
        RBus_UInt32  hdcp_rme:1;
        RBus_UInt32  hdcp_ls:1;
    };
}hdmi_stb_p3_mbist_st2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  hdcp_test1_0:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  hdcp_rm:4;
        RBus_UInt32  res3:4;
    };
}hdmi_stb_p3_mbist_st3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  cnt:15;
    };
}hdmi_stb_p3_stb_xtal_1ms_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  cnt:8;
    };
}hdmi_stb_p3_stb_xtal_4p7us_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  dbg_sel:6;
    };
}hdmi_stb_p3_hdmi_stb_dbgbox_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  reset_counter:1;
        RBus_UInt32  pop_out:1;
        RBus_UInt32  clk_counter:12;
        RBus_UInt32  clock_det_en:1;
        RBus_UInt32  en_tmds_chg_irq:1;
        RBus_UInt32  tmds_chg_irq:1;
        RBus_UInt32  dummy180bd390_3_2:2;
        RBus_UInt32  clk_in_target_irq_en:1;
        RBus_UInt32  clk_in_target:1;
    };
}hdmi_stb_p3_clkdetsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dclk_cnt_start:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  dclk_cnt_end:12;
    };
}hdmi_stb_p3_gdi_tmdsclk_setting_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  target_for_maximum_clk_counter:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  target_for_minimum_clk_counter:12;
    };
}hdmi_stb_p3_gdi_tmdsclk_setting_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  clk_counter_err_threshold:4;
        RBus_UInt32  clk_counter_debounce:8;
    };
}hdmi_stb_p3_gdi_tmdsclk_setting_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  port_sel:2;
        RBus_UInt32  ddc_ch3_sel:2;
        RBus_UInt32  ddc_ch2_sel:2;
        RBus_UInt32  ddc_ch1_sel:2;
        RBus_UInt32  ddc_ch0_sel:2;
    };
}hdmi_stb_p3_ot_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  hdmi_stb_test_sel:4;
    };
}hdmi_stb_p3_hdmi_stb_dbgbox_port_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  port3:1;
        RBus_UInt32  port2:1;
        RBus_UInt32  port1:1;
        RBus_UInt32  port0:1;
    };
}hdmi_stb_p3_clken_hdmi_stb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  port3:1;
        RBus_UInt32  port2:1;
        RBus_UInt32  port1:1;
        RBus_UInt32  port0:1;
    };
}hdmi_stb_p3_rst_n_hdmi_stb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  mp_data_out:1;
        RBus_UInt32  mp_check_and:1;
        RBus_UInt32  mp_check_or:1;
        RBus_UInt32  sda_i:1;
        RBus_UInt32  scl_i:1;
        RBus_UInt32  sda_oe:1;
        RBus_UInt32  ddc_port_sel:2;
        RBus_UInt32  mp_mode:1;
    };
}hdmi_stb_p3_hdmi_mp_RBUS;

#else //apply LITTLE_ENDIAN

//======HDMI_STB_P3 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scdc_en:1;
        RBus_UInt32  maddf:1;
        RBus_UInt32  frl_start_src_clr_en:1;
        RBus_UInt32  write31_det_irq_en:1;
        RBus_UInt32  write31_det_irq_flag:1;
        RBus_UInt32  scdc_reset:1;
        RBus_UInt32  scdc_sel:1;
        RBus_UInt32  scdc_err_det_sum_port:1;
        RBus_UInt32  pending:1;
        RBus_UInt32  write20_det_irq_en:1;
        RBus_UInt32  write20_det_irq_flag:1;
        RBus_UInt32  irq_cpu_gen:1;
        RBus_UInt32  hw_mask_en:1;
        RBus_UInt32  status_flags_chg_irq:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  update10_hwauto_en:8;
        RBus_UInt32  update11_hwauto_en:8;
    };
}hdmi_stb_p3_scdc_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  apai:1;
        RBus_UInt32  test_rr_added_delay_sel:2;
        RBus_UInt32  dummy180bd304_6_3:4;
        RBus_UInt32  dbnc_level_sel:1;
        RBus_UInt32  rr_retry_sel:2;
        RBus_UInt32  i2c_free_num:7;
        RBus_UInt32  i2c_sda_dly_sel:4;
        RBus_UInt32  i2c_scl_dly_sel:4;
        RBus_UInt32  tmds_config_flag:1;
        RBus_UInt32  scrambler_status_flag:1;
        RBus_UInt32  config_flag:1;
        RBus_UInt32  status_flag:1;
        RBus_UInt32  timeout_sel:2;
        RBus_UInt32  timeout_flag:1;
    };
}hdmi_stb_p3_scdc_pcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ap1:8;
        RBus_UInt32  res1:24;
    };
}hdmi_stb_p3_scdc_ap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dp1:8;
        RBus_UInt32  dp1_mask:8;
        RBus_UInt32  res1:16;
    };
}hdmi_stb_p3_scdc_dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdcp_en:1;
        RBus_UInt32  dkapde:1;
        RBus_UInt32  maddf:1;
        RBus_UInt32  cypher_dis:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:10;
        RBus_UInt32  res8:9;
        RBus_UInt32  clr_ri:1;
        RBus_UInt32  res9:1;
        RBus_UInt32  res10:1;
    };
}hdmi_stb_p3_hdcp_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dkap:8;
        RBus_UInt32  res1:24;
    };
}hdmi_stb_p3_hdcp_dkap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  apai:1;
        RBus_UInt32  apai_type:1;
        RBus_UInt32  km_start_sel:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  dbnc_level_sel:1;
        RBus_UInt32  dvi_enc_mode:1;
        RBus_UInt32  ddcdbnc:1;
        RBus_UInt32  res5:7;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:2;
        RBus_UInt32  i2c_sda_dly_sel:4;
        RBus_UInt32  i2c_scl_dly_sel:4;
        RBus_UInt32  iic_st:3;
        RBus_UInt32  res8:1;
    };
}hdmi_stb_p3_hdcp_pcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180bd31c_0:1;
        RBus_UInt32  rd_bksv_flag:1;
        RBus_UInt32  rd_ri_flag:1;
        RBus_UInt32  rd_bcap_flag:1;
        RBus_UInt32  wr_aksv_flag:1;
        RBus_UInt32  nc_flag:1;
        RBus_UInt32  ence_flag:1;
        RBus_UInt32  adne_flag:1;
        RBus_UInt32  akm_flag:1;
        RBus_UInt32  res1:23;
    };
}hdmi_stb_p3_hdcp_flag1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180bd320_0:1;
        RBus_UInt32  irq_bksv_en:1;
        RBus_UInt32  irq_ri_en:1;
        RBus_UInt32  irq_bcap_en:1;
        RBus_UInt32  irq_aksv_en:1;
        RBus_UInt32  irq_nc_en:1;
        RBus_UInt32  irq_ence_en:1;
        RBus_UInt32  irq_adne_en:1;
        RBus_UInt32  irq_akm_en:1;
        RBus_UInt32  res1:23;
    };
}hdmi_stb_p3_hdcp_flag2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ap1:8;
        RBus_UInt32  dp_ksvfifo_ptr:10;
        RBus_UInt32  ksvfifo_status:1;
        RBus_UInt32  res1:13;
    };
}hdmi_stb_p3_hdcp_ap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dp1:8;
        RBus_UInt32  res1:24;
    };
}hdmi_stb_p3_hdcp_dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdcp_2p2_en:1;
        RBus_UInt32  switch_unauth:1;
        RBus_UInt32  ks_done:1;
        RBus_UInt32  downstream_done:1;
        RBus_UInt32  assemble_id_fail:1;
        RBus_UInt32  verify_id_done:1;
        RBus_UInt32  verify_id_pass:1;
        RBus_UInt32  new_auth_device:1;
        RBus_UInt32  mspai:1;
        RBus_UInt32  apply_state:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  rpt_thr_unauth:1;
        RBus_UInt32  switch_state:12;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  enable_reauth:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:2;
    };
}hdmi_stb_p3_hdcp_2p2_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}hdmi_stb_p3_hdcp_2p2_riv0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}hdmi_stb_p3_hdcp_2p2_riv1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  state:12;
        RBus_UInt32  irq_wr_msg_start:1;
        RBus_UInt32  irq_rd_msg_start:1;
        RBus_UInt32  irq_wr_msg_done:1;
        RBus_UInt32  irq_rd_msg_done:1;
        RBus_UInt32  irq_state_chg:1;
        RBus_UInt32  irq_unauth_chg:1;
        RBus_UInt32  irq_msg_overwrite:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:8;
        RBus_UInt32  res5:2;
    };
}hdmi_stb_p3_hdcp_2p2_sr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irq_wr_msg_start_en:1;
        RBus_UInt32  irq_rd_msg_start_en:1;
        RBus_UInt32  irq_wr_msg_done_en:1;
        RBus_UInt32  irq_rd_msg_done_en:1;
        RBus_UInt32  irq_state_chg_en:1;
        RBus_UInt32  irq_unauth_chg_en:1;
        RBus_UInt32  irq_msg_overwrite_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:7;
        RBus_UInt32  res7:13;
    };
}hdmi_stb_p3_hdcp_2p2_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ap1:10;
        RBus_UInt32  res1:22;
    };
}hdmi_stb_p3_hdcp_msap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dp1:8;
        RBus_UInt32  res1:24;
    };
}hdmi_stb_p3_hdcp_msdp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdcp2p2:1;
        RBus_UInt32  hdcp1p4:1;
        RBus_UInt32  res1:30;
    };
}hdmi_stb_p3_hdcp_pend_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdcp_ksvfifo_ls:1;
        RBus_UInt32  hdcp_2p2_ls0:1;
        RBus_UInt32  hdcp_2p2_ls1:1;
        RBus_UInt32  hdcp_ksvfifo_rme:1;
        RBus_UInt32  hdcp_2p2_rme0:1;
        RBus_UInt32  hdcp_2p2_rme1:1;
        RBus_UInt32  hdcp_ksvfifo_bist_en:1;
        RBus_UInt32  hdcp_2p2_bist_en:1;
        RBus_UInt32  hdcp_ksvfifo_bist_done:1;
        RBus_UInt32  hdcp_2p2_bist_done:1;
        RBus_UInt32  hdcp_ksvfifo_bist_fail:1;
        RBus_UInt32  hdcp_2p2_bist_fail1:1;
        RBus_UInt32  hdcp_2p2_bist_fail0:1;
        RBus_UInt32  hdcp_2p2_bist_fail:1;
        RBus_UInt32  hdcp_ksvfifo_drf_mode:1;
        RBus_UInt32  hdcp_2p2_drf_mode:1;
        RBus_UInt32  hdcp_ksvfifo_drf_resume:1;
        RBus_UInt32  hdcp_2p2_drf_resume:1;
        RBus_UInt32  hdcp_ksvfifo_drf_done:1;
        RBus_UInt32  hdcp_2p2_drf_done:1;
        RBus_UInt32  hdcp_ksvfifo_drf_pause:1;
        RBus_UInt32  hdcp_2p2_drf_pause:1;
        RBus_UInt32  hdcp_ksvfifo_drf_fail:1;
        RBus_UInt32  hdcp_2p2_drf_fail1:1;
        RBus_UInt32  hdcp_2p2_drf_fail0:1;
        RBus_UInt32  hdcp_2p2_drf_fail:1;
        RBus_UInt32  res1:6;
    };
}hdmi_stb_p3_mbist_st0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdcp_ksvfifo_rm:4;
        RBus_UInt32  hdcp_2p2_rm0:4;
        RBus_UInt32  hdcp_2p2_rm1:4;
        RBus_UInt32  hdcp_ksvfifo_test1_0:1;
        RBus_UInt32  hdcp_2p2_test1_0:1;
        RBus_UInt32  hdcp_2p2_test1_1:1;
        RBus_UInt32  res1:17;
    };
}hdmi_stb_p3_mbist_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdcp_ls:1;
        RBus_UInt32  hdcp_rme:1;
        RBus_UInt32  hdcp_bist_en:1;
        RBus_UInt32  hdcp_bist_done:1;
        RBus_UInt32  hdcp_bist_fail:1;
        RBus_UInt32  hdcp_drf_mode:1;
        RBus_UInt32  hdcp_drf_resume:1;
        RBus_UInt32  hdcp_drf_done:1;
        RBus_UInt32  hdcp_drf_pause:1;
        RBus_UInt32  hdcp_drf_fail:1;
        RBus_UInt32  res1:22;
    };
}hdmi_stb_p3_mbist_st2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  hdcp_rm:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  hdcp_test1_0:1;
        RBus_UInt32  res3:22;
    };
}hdmi_stb_p3_mbist_st3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cnt:15;
        RBus_UInt32  res1:17;
    };
}hdmi_stb_p3_stb_xtal_1ms_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cnt:8;
        RBus_UInt32  res1:24;
    };
}hdmi_stb_p3_stb_xtal_4p7us_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sel:6;
        RBus_UInt32  res1:26;
    };
}hdmi_stb_p3_hdmi_stb_dbgbox_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk_in_target:1;
        RBus_UInt32  clk_in_target_irq_en:1;
        RBus_UInt32  dummy180bd390_3_2:2;
        RBus_UInt32  tmds_chg_irq:1;
        RBus_UInt32  en_tmds_chg_irq:1;
        RBus_UInt32  clock_det_en:1;
        RBus_UInt32  clk_counter:12;
        RBus_UInt32  pop_out:1;
        RBus_UInt32  reset_counter:1;
        RBus_UInt32  res1:11;
    };
}hdmi_stb_p3_clkdetsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dclk_cnt_end:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  dclk_cnt_start:12;
        RBus_UInt32  res2:4;
    };
}hdmi_stb_p3_gdi_tmdsclk_setting_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  target_for_minimum_clk_counter:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  target_for_maximum_clk_counter:12;
        RBus_UInt32  res2:4;
    };
}hdmi_stb_p3_gdi_tmdsclk_setting_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk_counter_debounce:8;
        RBus_UInt32  clk_counter_err_threshold:4;
        RBus_UInt32  res1:20;
    };
}hdmi_stb_p3_gdi_tmdsclk_setting_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddc_ch0_sel:2;
        RBus_UInt32  ddc_ch1_sel:2;
        RBus_UInt32  ddc_ch2_sel:2;
        RBus_UInt32  ddc_ch3_sel:2;
        RBus_UInt32  port_sel:2;
        RBus_UInt32  res1:22;
    };
}hdmi_stb_p3_ot_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdmi_stb_test_sel:4;
        RBus_UInt32  res1:28;
    };
}hdmi_stb_p3_hdmi_stb_dbgbox_port_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  port0:1;
        RBus_UInt32  port1:1;
        RBus_UInt32  port2:1;
        RBus_UInt32  port3:1;
        RBus_UInt32  res1:28;
    };
}hdmi_stb_p3_clken_hdmi_stb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  port0:1;
        RBus_UInt32  port1:1;
        RBus_UInt32  port2:1;
        RBus_UInt32  port3:1;
        RBus_UInt32  res1:28;
    };
}hdmi_stb_p3_rst_n_hdmi_stb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mp_mode:1;
        RBus_UInt32  ddc_port_sel:2;
        RBus_UInt32  sda_oe:1;
        RBus_UInt32  scl_i:1;
        RBus_UInt32  sda_i:1;
        RBus_UInt32  mp_check_or:1;
        RBus_UInt32  mp_check_and:1;
        RBus_UInt32  mp_data_out:1;
        RBus_UInt32  res1:23;
    };
}hdmi_stb_p3_hdmi_mp_RBUS;




#endif 


#endif 
