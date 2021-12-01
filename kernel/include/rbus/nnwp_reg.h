/**
* @file Merlin5-DesignSpec-NNIP_Wrapper
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_NNWP_REG_H_
#define _RBUS_NNWP_REG_H_

#include "rbus_types.h"



//  NNWP Register Address
#define  NNWP_nnip_reset                                                        0x18075000
#define  NNWP_nnip_reset_reg_addr                                                "0xB8075000"
#define  NNWP_nnip_reset_reg                                                     0xB8075000
#define  NNWP_nnip_reset_inst_addr                                               "0x0000"
#define  set_NNWP_nnip_reset_reg(data)                                           (*((volatile unsigned int*)NNWP_nnip_reset_reg)=data)
#define  get_NNWP_nnip_reset_reg                                                 (*((volatile unsigned int*)NNWP_nnip_reset_reg))
#define  NNWP_nnip_reset_rstn_hresetn_shift                                      (2)
#define  NNWP_nnip_reset_rstn_aresetn_shift                                      (1)
#define  NNWP_nnip_reset_rstn_resetpin__shift                                    (0)
#define  NNWP_nnip_reset_rstn_hresetn_mask                                       (0x00000004)
#define  NNWP_nnip_reset_rstn_aresetn_mask                                       (0x00000002)
#define  NNWP_nnip_reset_rstn_resetpin__mask                                     (0x00000001)
#define  NNWP_nnip_reset_rstn_hresetn(data)                                      (0x00000004&((data)<<2))
#define  NNWP_nnip_reset_rstn_aresetn(data)                                      (0x00000002&((data)<<1))
#define  NNWP_nnip_reset_rstn_resetpin_(data)                                    (0x00000001&(data))
#define  NNWP_nnip_reset_get_rstn_hresetn(data)                                  ((0x00000004&(data))>>2)
#define  NNWP_nnip_reset_get_rstn_aresetn(data)                                  ((0x00000002&(data))>>1)
#define  NNWP_nnip_reset_get_rstn_resetpin_(data)                                (0x00000001&(data))

#define  NNWP_nnip_clken                                                        0x18075004
#define  NNWP_nnip_clken_reg_addr                                                "0xB8075004"
#define  NNWP_nnip_clken_reg                                                     0xB8075004
#define  NNWP_nnip_clken_inst_addr                                               "0x0001"
#define  set_NNWP_nnip_clken_reg(data)                                           (*((volatile unsigned int*)NNWP_nnip_clken_reg)=data)
#define  get_NNWP_nnip_clken_reg                                                 (*((volatile unsigned int*)NNWP_nnip_clken_reg))
#define  NNWP_nnip_clken_clken_hclk_shift                                        (2)
#define  NNWP_nnip_clken_clken_aclk_shift                                        (1)
#define  NNWP_nnip_clken_clken_clkcore_shift                                     (0)
#define  NNWP_nnip_clken_clken_hclk_mask                                         (0x00000004)
#define  NNWP_nnip_clken_clken_aclk_mask                                         (0x00000002)
#define  NNWP_nnip_clken_clken_clkcore_mask                                      (0x00000001)
#define  NNWP_nnip_clken_clken_hclk(data)                                        (0x00000004&((data)<<2))
#define  NNWP_nnip_clken_clken_aclk(data)                                        (0x00000002&((data)<<1))
#define  NNWP_nnip_clken_clken_clkcore(data)                                     (0x00000001&(data))
#define  NNWP_nnip_clken_get_clken_hclk(data)                                    ((0x00000004&(data))>>2)
#define  NNWP_nnip_clken_get_clken_aclk(data)                                    ((0x00000002&(data))>>1)
#define  NNWP_nnip_clken_get_clken_clkcore(data)                                 (0x00000001&(data))

#define  NNWP_nnip_low_power                                                    0x18075010
#define  NNWP_nnip_low_power_reg_addr                                            "0xB8075010"
#define  NNWP_nnip_low_power_reg                                                 0xB8075010
#define  NNWP_nnip_low_power_inst_addr                                           "0x0002"
#define  set_NNWP_nnip_low_power_reg(data)                                       (*((volatile unsigned int*)NNWP_nnip_low_power_reg)=data)
#define  get_NNWP_nnip_low_power_reg                                             (*((volatile unsigned int*)NNWP_nnip_low_power_reg))
#define  NNWP_nnip_low_power_csysack_shift                                       (2)
#define  NNWP_nnip_low_power_cactive_shift                                       (1)
#define  NNWP_nnip_low_power_csysreq_shift                                       (0)
#define  NNWP_nnip_low_power_csysack_mask                                        (0x00000004)
#define  NNWP_nnip_low_power_cactive_mask                                        (0x00000002)
#define  NNWP_nnip_low_power_csysreq_mask                                        (0x00000001)
#define  NNWP_nnip_low_power_csysack(data)                                       (0x00000004&((data)<<2))
#define  NNWP_nnip_low_power_cactive(data)                                       (0x00000002&((data)<<1))
#define  NNWP_nnip_low_power_csysreq(data)                                       (0x00000001&(data))
#define  NNWP_nnip_low_power_get_csysack(data)                                   ((0x00000004&(data))>>2)
#define  NNWP_nnip_low_power_get_cactive(data)                                   ((0x00000002&(data))>>1)
#define  NNWP_nnip_low_power_get_csysreq(data)                                   (0x00000001&(data))

#define  NNWP_nnip_protected_mode                                               0x18075020
#define  NNWP_nnip_protected_mode_reg_addr                                       "0xB8075020"
#define  NNWP_nnip_protected_mode_reg                                            0xB8075020
#define  NNWP_nnip_protected_mode_inst_addr                                      "0x0003"
#define  set_NNWP_nnip_protected_mode_reg(data)                                  (*((volatile unsigned int*)NNWP_nnip_protected_mode_reg)=data)
#define  get_NNWP_nnip_protected_mode_reg                                        (*((volatile unsigned int*)NNWP_nnip_protected_mode_reg))
#define  NNWP_nnip_protected_mode_nnip_prot_nsaid_shift                          (8)
#define  NNWP_nnip_protected_mode_nnip_normal_nsaid_shift                        (4)
#define  NNWP_nnip_protected_mode_nnip_prot_mode_en_shift                        (1)
#define  NNWP_nnip_protected_mode_nnip_prot_bit_shift                            (0)
#define  NNWP_nnip_protected_mode_nnip_prot_nsaid_mask                           (0x00000300)
#define  NNWP_nnip_protected_mode_nnip_normal_nsaid_mask                         (0x00000030)
#define  NNWP_nnip_protected_mode_nnip_prot_mode_en_mask                         (0x00000002)
#define  NNWP_nnip_protected_mode_nnip_prot_bit_mask                             (0x00000001)
#define  NNWP_nnip_protected_mode_nnip_prot_nsaid(data)                          (0x00000300&((data)<<8))
#define  NNWP_nnip_protected_mode_nnip_normal_nsaid(data)                        (0x00000030&((data)<<4))
#define  NNWP_nnip_protected_mode_nnip_prot_mode_en(data)                        (0x00000002&((data)<<1))
#define  NNWP_nnip_protected_mode_nnip_prot_bit(data)                            (0x00000001&(data))
#define  NNWP_nnip_protected_mode_get_nnip_prot_nsaid(data)                      ((0x00000300&(data))>>8)
#define  NNWP_nnip_protected_mode_get_nnip_normal_nsaid(data)                    ((0x00000030&(data))>>4)
#define  NNWP_nnip_protected_mode_get_nnip_prot_mode_en(data)                    ((0x00000002&(data))>>1)
#define  NNWP_nnip_protected_mode_get_nnip_prot_bit(data)                        (0x00000001&(data))

#define  NNWP_ace_lite_AR                                                       0x18075030
#define  NNWP_ace_lite_AR_reg_addr                                               "0xB8075030"
#define  NNWP_ace_lite_AR_reg                                                    0xB8075030
#define  NNWP_ace_lite_AR_inst_addr                                              "0x0004"
#define  set_NNWP_ace_lite_AR_reg(data)                                          (*((volatile unsigned int*)NNWP_ace_lite_AR_reg)=data)
#define  get_NNWP_ace_lite_AR_reg                                                (*((volatile unsigned int*)NNWP_ace_lite_AR_reg))
#define  NNWP_ace_lite_AR_aruser_shift                                           (8)
#define  NNWP_ace_lite_AR_arsnoop_shift                                          (4)
#define  NNWP_ace_lite_AR_ardomain_shift                                         (2)
#define  NNWP_ace_lite_AR_arbar_shift                                            (0)
#define  NNWP_ace_lite_AR_aruser_mask                                            (0x0001FF00)
#define  NNWP_ace_lite_AR_arsnoop_mask                                           (0x000000F0)
#define  NNWP_ace_lite_AR_ardomain_mask                                          (0x0000000C)
#define  NNWP_ace_lite_AR_arbar_mask                                             (0x00000003)
#define  NNWP_ace_lite_AR_aruser(data)                                           (0x0001FF00&((data)<<8))
#define  NNWP_ace_lite_AR_arsnoop(data)                                          (0x000000F0&((data)<<4))
#define  NNWP_ace_lite_AR_ardomain(data)                                         (0x0000000C&((data)<<2))
#define  NNWP_ace_lite_AR_arbar(data)                                            (0x00000003&(data))
#define  NNWP_ace_lite_AR_get_aruser(data)                                       ((0x0001FF00&(data))>>8)
#define  NNWP_ace_lite_AR_get_arsnoop(data)                                      ((0x000000F0&(data))>>4)
#define  NNWP_ace_lite_AR_get_ardomain(data)                                     ((0x0000000C&(data))>>2)
#define  NNWP_ace_lite_AR_get_arbar(data)                                        (0x00000003&(data))

#define  NNWP_ace_lite_AW                                                       0x18075034
#define  NNWP_ace_lite_AW_reg_addr                                               "0xB8075034"
#define  NNWP_ace_lite_AW_reg                                                    0xB8075034
#define  NNWP_ace_lite_AW_inst_addr                                              "0x0005"
#define  set_NNWP_ace_lite_AW_reg(data)                                          (*((volatile unsigned int*)NNWP_ace_lite_AW_reg)=data)
#define  get_NNWP_ace_lite_AW_reg                                                (*((volatile unsigned int*)NNWP_ace_lite_AW_reg))
#define  NNWP_ace_lite_AW_awuser_shift                                           (8)
#define  NNWP_ace_lite_AW_awsnoop_shift                                          (4)
#define  NNWP_ace_lite_AW_awdomain_shift                                         (2)
#define  NNWP_ace_lite_AW_awbar_shift                                            (0)
#define  NNWP_ace_lite_AW_awuser_mask                                            (0x0001FF00)
#define  NNWP_ace_lite_AW_awsnoop_mask                                           (0x00000070)
#define  NNWP_ace_lite_AW_awdomain_mask                                          (0x0000000C)
#define  NNWP_ace_lite_AW_awbar_mask                                             (0x00000003)
#define  NNWP_ace_lite_AW_awuser(data)                                           (0x0001FF00&((data)<<8))
#define  NNWP_ace_lite_AW_awsnoop(data)                                          (0x00000070&((data)<<4))
#define  NNWP_ace_lite_AW_awdomain(data)                                         (0x0000000C&((data)<<2))
#define  NNWP_ace_lite_AW_awbar(data)                                            (0x00000003&(data))
#define  NNWP_ace_lite_AW_get_awuser(data)                                       ((0x0001FF00&(data))>>8)
#define  NNWP_ace_lite_AW_get_awsnoop(data)                                      ((0x00000070&(data))>>4)
#define  NNWP_ace_lite_AW_get_awdomain(data)                                     ((0x0000000C&(data))>>2)
#define  NNWP_ace_lite_AW_get_awbar(data)                                        (0x00000003&(data))

#define  NNWP_secure_dmy_r                                                      0x18075FF8
#define  NNWP_secure_dmy_r_reg_addr                                              "0xB8075FF8"
#define  NNWP_secure_dmy_r_reg                                                   0xB8075FF8
#define  NNWP_secure_dmy_r_inst_addr                                             "0x0006"
#define  set_NNWP_secure_dmy_r_reg(data)                                         (*((volatile unsigned int*)NNWP_secure_dmy_r_reg)=data)
#define  get_NNWP_secure_dmy_r_reg                                               (*((volatile unsigned int*)NNWP_secure_dmy_r_reg))
#define  NNWP_secure_dmy_r_sec_dmy_r_shift                                       (0)
#define  NNWP_secure_dmy_r_sec_dmy_r_mask                                        (0xFFFFFFFF)
#define  NNWP_secure_dmy_r_sec_dmy_r(data)                                       (0xFFFFFFFF&(data))
#define  NNWP_secure_dmy_r_get_sec_dmy_r(data)                                   (0xFFFFFFFF&(data))

#define  NNWP_secure_dmy_rw                                                     0x18075FFC
#define  NNWP_secure_dmy_rw_reg_addr                                             "0xB8075FFC"
#define  NNWP_secure_dmy_rw_reg                                                  0xB8075FFC
#define  NNWP_secure_dmy_rw_inst_addr                                            "0x0007"
#define  set_NNWP_secure_dmy_rw_reg(data)                                        (*((volatile unsigned int*)NNWP_secure_dmy_rw_reg)=data)
#define  get_NNWP_secure_dmy_rw_reg                                              (*((volatile unsigned int*)NNWP_secure_dmy_rw_reg))
#define  NNWP_secure_dmy_rw_sec_dmy_rw_shift                                     (0)
#define  NNWP_secure_dmy_rw_sec_dmy_rw_mask                                      (0xFFFFFFFF)
#define  NNWP_secure_dmy_rw_sec_dmy_rw(data)                                     (0xFFFFFFFF&(data))
#define  NNWP_secure_dmy_rw_get_sec_dmy_rw(data)                                 (0xFFFFFFFF&(data))

#define  NNWP_nnwp_dmy1_rw                                                      0x18076000
#define  NNWP_nnwp_dmy1_rw_reg_addr                                              "0xB8076000"
#define  NNWP_nnwp_dmy1_rw_reg                                                   0xB8076000
#define  NNWP_nnwp_dmy1_rw_inst_addr                                             "0x0008"
#define  set_NNWP_nnwp_dmy1_rw_reg(data)                                         (*((volatile unsigned int*)NNWP_nnwp_dmy1_rw_reg)=data)
#define  get_NNWP_nnwp_dmy1_rw_reg                                               (*((volatile unsigned int*)NNWP_nnwp_dmy1_rw_reg))
#define  NNWP_nnwp_dmy1_rw_nonsec_dmy1_rw_shift                                  (0)
#define  NNWP_nnwp_dmy1_rw_nonsec_dmy1_rw_mask                                   (0xFFFFFFFF)
#define  NNWP_nnwp_dmy1_rw_nonsec_dmy1_rw(data)                                  (0xFFFFFFFF&(data))
#define  NNWP_nnwp_dmy1_rw_get_nonsec_dmy1_rw(data)                              (0xFFFFFFFF&(data))

#define  NNWP_nnwp_reset                                                        0x18076004
#define  NNWP_nnwp_reset_reg_addr                                                "0xB8076004"
#define  NNWP_nnwp_reset_reg                                                     0xB8076004
#define  NNWP_nnwp_reset_inst_addr                                               "0x0009"
#define  set_NNWP_nnwp_reset_reg(data)                                           (*((volatile unsigned int*)NNWP_nnwp_reset_reg)=data)
#define  get_NNWP_nnwp_reset_reg                                                 (*((volatile unsigned int*)NNWP_nnwp_reset_reg))
#define  NNWP_nnwp_reset_nnwp_soft_reset_shift                                   (0)
#define  NNWP_nnwp_reset_nnwp_soft_reset_mask                                    (0x00000001)
#define  NNWP_nnwp_reset_nnwp_soft_reset(data)                                   (0x00000001&(data))
#define  NNWP_nnwp_reset_get_nnwp_soft_reset(data)                               (0x00000001&(data))

#define  NNWP_nnip_ctrl                                                         0x18076010
#define  NNWP_nnip_ctrl_reg_addr                                                 "0xB8076010"
#define  NNWP_nnip_ctrl_reg                                                      0xB8076010
#define  NNWP_nnip_ctrl_inst_addr                                                "0x000A"
#define  set_NNWP_nnip_ctrl_reg(data)                                            (*((volatile unsigned int*)NNWP_nnip_ctrl_reg)=data)
#define  get_NNWP_nnip_ctrl_reg                                                  (*((volatile unsigned int*)NNWP_nnip_ctrl_reg))
#define  NNWP_nnip_ctrl_xaq2_int_en_shift                                        (0)
#define  NNWP_nnip_ctrl_xaq2_int_en_mask                                         (0x00000001)
#define  NNWP_nnip_ctrl_xaq2_int_en(data)                                        (0x00000001&(data))
#define  NNWP_nnip_ctrl_get_xaq2_int_en(data)                                    (0x00000001&(data))

#define  NNWP_nnip_status                                                       0x18076014
#define  NNWP_nnip_status_reg_addr                                               "0xB8076014"
#define  NNWP_nnip_status_reg                                                    0xB8076014
#define  NNWP_nnip_status_inst_addr                                              "0x000B"
#define  set_NNWP_nnip_status_reg(data)                                          (*((volatile unsigned int*)NNWP_nnip_status_reg)=data)
#define  get_NNWP_nnip_status_reg                                                (*((volatile unsigned int*)NNWP_nnip_status_reg))
#define  NNWP_nnip_status_xaq2_intr_shift                                        (0)
#define  NNWP_nnip_status_xaq2_intr_mask                                         (0x00000001)
#define  NNWP_nnip_status_xaq2_intr(data)                                        (0x00000001&(data))
#define  NNWP_nnip_status_get_xaq2_intr(data)                                    (0x00000001&(data))

#define  NNWP_debug_ctrl                                                        0x18076030
#define  NNWP_debug_ctrl_reg_addr                                                "0xB8076030"
#define  NNWP_debug_ctrl_reg                                                     0xB8076030
#define  NNWP_debug_ctrl_inst_addr                                               "0x000C"
#define  set_NNWP_debug_ctrl_reg(data)                                           (*((volatile unsigned int*)NNWP_debug_ctrl_reg)=data)
#define  get_NNWP_debug_ctrl_reg                                                 (*((volatile unsigned int*)NNWP_debug_ctrl_reg))
#define  NNWP_debug_ctrl_dbg_en_shift                                            (8)
#define  NNWP_debug_ctrl_dbg1_sel_shift                                          (4)
#define  NNWP_debug_ctrl_dbg0_sel_shift                                          (0)
#define  NNWP_debug_ctrl_dbg_en_mask                                             (0x00000100)
#define  NNWP_debug_ctrl_dbg1_sel_mask                                           (0x000000F0)
#define  NNWP_debug_ctrl_dbg0_sel_mask                                           (0x0000000F)
#define  NNWP_debug_ctrl_dbg_en(data)                                            (0x00000100&((data)<<8))
#define  NNWP_debug_ctrl_dbg1_sel(data)                                          (0x000000F0&((data)<<4))
#define  NNWP_debug_ctrl_dbg0_sel(data)                                          (0x0000000F&(data))
#define  NNWP_debug_ctrl_get_dbg_en(data)                                        ((0x00000100&(data))>>8)
#define  NNWP_debug_ctrl_get_dbg1_sel(data)                                      ((0x000000F0&(data))>>4)
#define  NNWP_debug_ctrl_get_dbg0_sel(data)                                      (0x0000000F&(data))

#define  NNWP_debug_status                                                      0x18076034
#define  NNWP_debug_status_reg_addr                                              "0xB8076034"
#define  NNWP_debug_status_reg                                                   0xB8076034
#define  NNWP_debug_status_inst_addr                                             "0x000D"
#define  set_NNWP_debug_status_reg(data)                                         (*((volatile unsigned int*)NNWP_debug_status_reg)=data)
#define  get_NNWP_debug_status_reg                                               (*((volatile unsigned int*)NNWP_debug_status_reg))
#define  NNWP_debug_status_dbg1_val_shift                                        (16)
#define  NNWP_debug_status_dbg0_val_shift                                        (0)
#define  NNWP_debug_status_dbg1_val_mask                                         (0xFFFF0000)
#define  NNWP_debug_status_dbg0_val_mask                                         (0x0000FFFF)
#define  NNWP_debug_status_dbg1_val(data)                                        (0xFFFF0000&((data)<<16))
#define  NNWP_debug_status_dbg0_val(data)                                        (0x0000FFFF&(data))
#define  NNWP_debug_status_get_dbg1_val(data)                                    ((0xFFFF0000&(data))>>16)
#define  NNWP_debug_status_get_dbg0_val(data)                                    (0x0000FFFF&(data))

#define  NNWP_read_channel                                                      0x18076100
#define  NNWP_read_channel_reg_addr                                              "0xB8076100"
#define  NNWP_read_channel_reg                                                   0xB8076100
#define  NNWP_read_channel_inst_addr                                             "0x000E"
#define  set_NNWP_read_channel_reg(data)                                         (*((volatile unsigned int*)NNWP_read_channel_reg)=data)
#define  get_NNWP_read_channel_reg                                               (*((volatile unsigned int*)NNWP_read_channel_reg))
#define  NNWP_read_channel_nnwp_rdata_fifo_size_shift                            (0)
#define  NNWP_read_channel_nnwp_rdata_fifo_size_mask                             (0x000001FF)
#define  NNWP_read_channel_nnwp_rdata_fifo_size(data)                            (0x000001FF&(data))
#define  NNWP_read_channel_get_nnwp_rdata_fifo_size(data)                        (0x000001FF&(data))

#define  NNWP_read_channel1                                                     0x18076104
#define  NNWP_read_channel1_reg_addr                                             "0xB8076104"
#define  NNWP_read_channel1_reg                                                  0xB8076104
#define  NNWP_read_channel1_inst_addr                                            "0x000F"
#define  set_NNWP_read_channel1_reg(data)                                        (*((volatile unsigned int*)NNWP_read_channel1_reg)=data)
#define  get_NNWP_read_channel1_reg                                              (*((volatile unsigned int*)NNWP_read_channel1_reg))
#define  NNWP_read_channel1_update_nnwp_rdata_fifo_size_shift                    (0)
#define  NNWP_read_channel1_update_nnwp_rdata_fifo_size_mask                     (0x00000001)
#define  NNWP_read_channel1_update_nnwp_rdata_fifo_size(data)                    (0x00000001&(data))
#define  NNWP_read_channel1_get_update_nnwp_rdata_fifo_size(data)                (0x00000001&(data))

#define  NNWP_dc_sys_grp                                                        0x18076110
#define  NNWP_dc_sys_grp_reg_addr                                                "0xB8076110"
#define  NNWP_dc_sys_grp_reg                                                     0xB8076110
#define  NNWP_dc_sys_grp_inst_addr                                               "0x0010"
#define  set_NNWP_dc_sys_grp_reg(data)                                           (*((volatile unsigned int*)NNWP_dc_sys_grp_reg)=data)
#define  get_NNWP_dc_sys_grp_reg                                                 (*((volatile unsigned int*)NNWP_dc_sys_grp_reg))
#define  NNWP_dc_sys_grp_nnwp_grp_mode_shift                                     (10)
#define  NNWP_dc_sys_grp_nnwp_grp_write_disable_shift                            (9)
#define  NNWP_dc_sys_grp_nnwp_grp_read_disable_shift                             (8)
#define  NNWP_dc_sys_grp_nnwp_grp_burst_max_num_shift                            (4)
#define  NNWP_dc_sys_grp_nnwp_grp_burst_limit_shift                              (0)
#define  NNWP_dc_sys_grp_nnwp_grp_mode_mask                                      (0x00001C00)
#define  NNWP_dc_sys_grp_nnwp_grp_write_disable_mask                             (0x00000200)
#define  NNWP_dc_sys_grp_nnwp_grp_read_disable_mask                              (0x00000100)
#define  NNWP_dc_sys_grp_nnwp_grp_burst_max_num_mask                             (0x000000F0)
#define  NNWP_dc_sys_grp_nnwp_grp_burst_limit_mask                               (0x0000000F)
#define  NNWP_dc_sys_grp_nnwp_grp_mode(data)                                     (0x00001C00&((data)<<10))
#define  NNWP_dc_sys_grp_nnwp_grp_write_disable(data)                            (0x00000200&((data)<<9))
#define  NNWP_dc_sys_grp_nnwp_grp_read_disable(data)                             (0x00000100&((data)<<8))
#define  NNWP_dc_sys_grp_nnwp_grp_burst_max_num(data)                            (0x000000F0&((data)<<4))
#define  NNWP_dc_sys_grp_nnwp_grp_burst_limit(data)                              (0x0000000F&(data))
#define  NNWP_dc_sys_grp_get_nnwp_grp_mode(data)                                 ((0x00001C00&(data))>>10)
#define  NNWP_dc_sys_grp_get_nnwp_grp_write_disable(data)                        ((0x00000200&(data))>>9)
#define  NNWP_dc_sys_grp_get_nnwp_grp_read_disable(data)                         ((0x00000100&(data))>>8)
#define  NNWP_dc_sys_grp_get_nnwp_grp_burst_max_num(data)                        ((0x000000F0&(data))>>4)
#define  NNWP_dc_sys_grp_get_nnwp_grp_burst_limit(data)                          (0x0000000F&(data))

#define  NNWP_in_order_mode                                                     0x18076200
#define  NNWP_in_order_mode_reg_addr                                             "0xB8076200"
#define  NNWP_in_order_mode_reg                                                  0xB8076200
#define  NNWP_in_order_mode_inst_addr                                            "0x0011"
#define  set_NNWP_in_order_mode_reg(data)                                        (*((volatile unsigned int*)NNWP_in_order_mode_reg)=data)
#define  get_NNWP_in_order_mode_reg                                              (*((volatile unsigned int*)NNWP_in_order_mode_reg))
#define  NNWP_in_order_mode_nnwp_in_order_mode_shift                             (0)
#define  NNWP_in_order_mode_nnwp_in_order_mode_mask                              (0x00000001)
#define  NNWP_in_order_mode_nnwp_in_order_mode(data)                             (0x00000001&(data))
#define  NNWP_in_order_mode_get_nnwp_in_order_mode(data)                         (0x00000001&(data))

#define  NNWP_outstand_num                                                      0x18076210
#define  NNWP_outstand_num_reg_addr                                              "0xB8076210"
#define  NNWP_outstand_num_reg                                                   0xB8076210
#define  NNWP_outstand_num_inst_addr                                             "0x0012"
#define  set_NNWP_outstand_num_reg(data)                                         (*((volatile unsigned int*)NNWP_outstand_num_reg)=data)
#define  get_NNWP_outstand_num_reg                                               (*((volatile unsigned int*)NNWP_outstand_num_reg))
#define  NNWP_outstand_num_nnwp_rd_outstand_num_shift                            (16)
#define  NNWP_outstand_num_nnwp_wr_outstand_num_shift                            (0)
#define  NNWP_outstand_num_nnwp_rd_outstand_num_mask                             (0x003F0000)
#define  NNWP_outstand_num_nnwp_wr_outstand_num_mask                             (0x0000003F)
#define  NNWP_outstand_num_nnwp_rd_outstand_num(data)                            (0x003F0000&((data)<<16))
#define  NNWP_outstand_num_nnwp_wr_outstand_num(data)                            (0x0000003F&(data))
#define  NNWP_outstand_num_get_nnwp_rd_outstand_num(data)                        ((0x003F0000&(data))>>16)
#define  NNWP_outstand_num_get_nnwp_wr_outstand_num(data)                        (0x0000003F&(data))

#define  NNWP_outstand_cnt                                                      0x18076214
#define  NNWP_outstand_cnt_reg_addr                                              "0xB8076214"
#define  NNWP_outstand_cnt_reg                                                   0xB8076214
#define  NNWP_outstand_cnt_inst_addr                                             "0x0013"
#define  set_NNWP_outstand_cnt_reg(data)                                         (*((volatile unsigned int*)NNWP_outstand_cnt_reg)=data)
#define  get_NNWP_outstand_cnt_reg                                               (*((volatile unsigned int*)NNWP_outstand_cnt_reg))
#define  NNWP_outstand_cnt_nnwp_rd_outstand_cnt_shift                            (16)
#define  NNWP_outstand_cnt_nnwp_wr_outstand_cnt_shift                            (0)
#define  NNWP_outstand_cnt_nnwp_rd_outstand_cnt_mask                             (0x003F0000)
#define  NNWP_outstand_cnt_nnwp_wr_outstand_cnt_mask                             (0x0000003F)
#define  NNWP_outstand_cnt_nnwp_rd_outstand_cnt(data)                            (0x003F0000&((data)<<16))
#define  NNWP_outstand_cnt_nnwp_wr_outstand_cnt(data)                            (0x0000003F&(data))
#define  NNWP_outstand_cnt_get_nnwp_rd_outstand_cnt(data)                        ((0x003F0000&(data))>>16)
#define  NNWP_outstand_cnt_get_nnwp_wr_outstand_cnt(data)                        (0x0000003F&(data))

#define  NNWP_endian                                                            0x18076300
#define  NNWP_endian_reg_addr                                                    "0xB8076300"
#define  NNWP_endian_reg                                                         0xB8076300
#define  NNWP_endian_inst_addr                                                   "0x0014"
#define  set_NNWP_endian_reg(data)                                               (*((volatile unsigned int*)NNWP_endian_reg)=data)
#define  get_NNWP_endian_reg                                                     (*((volatile unsigned int*)NNWP_endian_reg))
#define  NNWP_endian_nnwp_endian_swap_mode_shift                                 (1)
#define  NNWP_endian_nnwp_endian_swap_shift                                      (0)
#define  NNWP_endian_nnwp_endian_swap_mode_mask                                  (0x00000006)
#define  NNWP_endian_nnwp_endian_swap_mask                                       (0x00000001)
#define  NNWP_endian_nnwp_endian_swap_mode(data)                                 (0x00000006&((data)<<1))
#define  NNWP_endian_nnwp_endian_swap(data)                                      (0x00000001&(data))
#define  NNWP_endian_get_nnwp_endian_swap_mode(data)                             ((0x00000006&(data))>>1)
#define  NNWP_endian_get_nnwp_endian_swap(data)                                  (0x00000001&(data))

#define  NNWP_rw_arbitration                                                    0x18076304
#define  NNWP_rw_arbitration_reg_addr                                            "0xB8076304"
#define  NNWP_rw_arbitration_reg                                                 0xB8076304
#define  NNWP_rw_arbitration_inst_addr                                           "0x0015"
#define  set_NNWP_rw_arbitration_reg(data)                                       (*((volatile unsigned int*)NNWP_rw_arbitration_reg)=data)
#define  get_NNWP_rw_arbitration_reg                                             (*((volatile unsigned int*)NNWP_rw_arbitration_reg))
#define  NNWP_rw_arbitration_nnwp_rw_arbitration_shift                           (0)
#define  NNWP_rw_arbitration_nnwp_rw_arbitration_mask                            (0x00000003)
#define  NNWP_rw_arbitration_nnwp_rw_arbitration(data)                           (0x00000003&(data))
#define  NNWP_rw_arbitration_get_nnwp_rw_arbitration(data)                       (0x00000003&(data))

#define  NNWP_write_bufferable                                                  0x18076308
#define  NNWP_write_bufferable_reg_addr                                          "0xB8076308"
#define  NNWP_write_bufferable_reg                                               0xB8076308
#define  NNWP_write_bufferable_inst_addr                                         "0x0016"
#define  set_NNWP_write_bufferable_reg(data)                                     (*((volatile unsigned int*)NNWP_write_bufferable_reg)=data)
#define  get_NNWP_write_bufferable_reg                                           (*((volatile unsigned int*)NNWP_write_bufferable_reg))
#define  NNWP_write_bufferable_write_bufferable_from_awcache_bit0_shift          (2)
#define  NNWP_write_bufferable_nnwp_wdone_sel_shift                              (1)
#define  NNWP_write_bufferable_nnwp_force_write_bufferable_shift                 (0)
#define  NNWP_write_bufferable_write_bufferable_from_awcache_bit0_mask           (0x00000004)
#define  NNWP_write_bufferable_nnwp_wdone_sel_mask                               (0x00000002)
#define  NNWP_write_bufferable_nnwp_force_write_bufferable_mask                  (0x00000001)
#define  NNWP_write_bufferable_write_bufferable_from_awcache_bit0(data)          (0x00000004&((data)<<2))
#define  NNWP_write_bufferable_nnwp_wdone_sel(data)                              (0x00000002&((data)<<1))
#define  NNWP_write_bufferable_nnwp_force_write_bufferable(data)                 (0x00000001&(data))
#define  NNWP_write_bufferable_get_write_bufferable_from_awcache_bit0(data)      ((0x00000004&(data))>>2)
#define  NNWP_write_bufferable_get_nnwp_wdone_sel(data)                          ((0x00000002&(data))>>1)
#define  NNWP_write_bufferable_get_nnwp_force_write_bufferable(data)             (0x00000001&(data))

#define  NNWP_dc_fifo_status                                                    0x1807630C
#define  NNWP_dc_fifo_status_reg_addr                                            "0xB807630C"
#define  NNWP_dc_fifo_status_reg                                                 0xB807630C
#define  NNWP_dc_fifo_status_inst_addr                                           "0x0017"
#define  set_NNWP_dc_fifo_status_reg(data)                                       (*((volatile unsigned int*)NNWP_dc_fifo_status_reg)=data)
#define  get_NNWP_dc_fifo_status_reg                                             (*((volatile unsigned int*)NNWP_dc_fifo_status_reg))
#define  NNWP_dc_fifo_status_rdata_sram_empty_shift                              (19)
#define  NNWP_dc_fifo_status_rdata_sram_full_shift                               (18)
#define  NNWP_dc_fifo_status_rdata_sram_overflow_shift                           (17)
#define  NNWP_dc_fifo_status_dc_remote_cmd_cnt_shift                             (10)
#define  NNWP_dc_fifo_status_dc_rcmd_sync_fifo_empty_shift                       (9)
#define  NNWP_dc_fifo_status_dc_rcmd_sync_fifo_full_shift                        (8)
#define  NNWP_dc_fifo_status_dc_rdata_sync_fifo_empty_shift                      (7)
#define  NNWP_dc_fifo_status_dc_rdata_sync_fifo_full_shift                       (6)
#define  NNWP_dc_fifo_status_dc_wcmd_sync_fifo_empty_shift                       (5)
#define  NNWP_dc_fifo_status_dc_wcmd_sync_fifo_full_shift                        (4)
#define  NNWP_dc_fifo_status_dc_wdata_sync_fifo_empty_shift                      (3)
#define  NNWP_dc_fifo_status_dc_wdata_sync_fifo_full_shift                       (2)
#define  NNWP_dc_fifo_status_rdata_sram_empty_mask                               (0x00080000)
#define  NNWP_dc_fifo_status_rdata_sram_full_mask                                (0x00040000)
#define  NNWP_dc_fifo_status_rdata_sram_overflow_mask                            (0x00020000)
#define  NNWP_dc_fifo_status_dc_remote_cmd_cnt_mask                              (0x0001FC00)
#define  NNWP_dc_fifo_status_dc_rcmd_sync_fifo_empty_mask                        (0x00000200)
#define  NNWP_dc_fifo_status_dc_rcmd_sync_fifo_full_mask                         (0x00000100)
#define  NNWP_dc_fifo_status_dc_rdata_sync_fifo_empty_mask                       (0x00000080)
#define  NNWP_dc_fifo_status_dc_rdata_sync_fifo_full_mask                        (0x00000040)
#define  NNWP_dc_fifo_status_dc_wcmd_sync_fifo_empty_mask                        (0x00000020)
#define  NNWP_dc_fifo_status_dc_wcmd_sync_fifo_full_mask                         (0x00000010)
#define  NNWP_dc_fifo_status_dc_wdata_sync_fifo_empty_mask                       (0x00000008)
#define  NNWP_dc_fifo_status_dc_wdata_sync_fifo_full_mask                        (0x00000004)
#define  NNWP_dc_fifo_status_rdata_sram_empty(data)                              (0x00080000&((data)<<19))
#define  NNWP_dc_fifo_status_rdata_sram_full(data)                               (0x00040000&((data)<<18))
#define  NNWP_dc_fifo_status_rdata_sram_overflow(data)                           (0x00020000&((data)<<17))
#define  NNWP_dc_fifo_status_dc_remote_cmd_cnt(data)                             (0x0001FC00&((data)<<10))
#define  NNWP_dc_fifo_status_dc_rcmd_sync_fifo_empty(data)                       (0x00000200&((data)<<9))
#define  NNWP_dc_fifo_status_dc_rcmd_sync_fifo_full(data)                        (0x00000100&((data)<<8))
#define  NNWP_dc_fifo_status_dc_rdata_sync_fifo_empty(data)                      (0x00000080&((data)<<7))
#define  NNWP_dc_fifo_status_dc_rdata_sync_fifo_full(data)                       (0x00000040&((data)<<6))
#define  NNWP_dc_fifo_status_dc_wcmd_sync_fifo_empty(data)                       (0x00000020&((data)<<5))
#define  NNWP_dc_fifo_status_dc_wcmd_sync_fifo_full(data)                        (0x00000010&((data)<<4))
#define  NNWP_dc_fifo_status_dc_wdata_sync_fifo_empty(data)                      (0x00000008&((data)<<3))
#define  NNWP_dc_fifo_status_dc_wdata_sync_fifo_full(data)                       (0x00000004&((data)<<2))
#define  NNWP_dc_fifo_status_get_rdata_sram_empty(data)                          ((0x00080000&(data))>>19)
#define  NNWP_dc_fifo_status_get_rdata_sram_full(data)                           ((0x00040000&(data))>>18)
#define  NNWP_dc_fifo_status_get_rdata_sram_overflow(data)                       ((0x00020000&(data))>>17)
#define  NNWP_dc_fifo_status_get_dc_remote_cmd_cnt(data)                         ((0x0001FC00&(data))>>10)
#define  NNWP_dc_fifo_status_get_dc_rcmd_sync_fifo_empty(data)                   ((0x00000200&(data))>>9)
#define  NNWP_dc_fifo_status_get_dc_rcmd_sync_fifo_full(data)                    ((0x00000100&(data))>>8)
#define  NNWP_dc_fifo_status_get_dc_rdata_sync_fifo_empty(data)                  ((0x00000080&(data))>>7)
#define  NNWP_dc_fifo_status_get_dc_rdata_sync_fifo_full(data)                   ((0x00000040&(data))>>6)
#define  NNWP_dc_fifo_status_get_dc_wcmd_sync_fifo_empty(data)                   ((0x00000020&(data))>>5)
#define  NNWP_dc_fifo_status_get_dc_wcmd_sync_fifo_full(data)                    ((0x00000010&(data))>>4)
#define  NNWP_dc_fifo_status_get_dc_wdata_sync_fifo_empty(data)                  ((0x00000008&(data))>>3)
#define  NNWP_dc_fifo_status_get_dc_wdata_sync_fifo_full(data)                   ((0x00000004&(data))>>2)

#define  NNWP_axi_fifo_status                                                   0x18076310
#define  NNWP_axi_fifo_status_reg_addr                                           "0xB8076310"
#define  NNWP_axi_fifo_status_reg                                                0xB8076310
#define  NNWP_axi_fifo_status_inst_addr                                          "0x0018"
#define  set_NNWP_axi_fifo_status_reg(data)                                      (*((volatile unsigned int*)NNWP_axi_fifo_status_reg)=data)
#define  get_NNWP_axi_fifo_status_reg                                            (*((volatile unsigned int*)NNWP_axi_fifo_status_reg))
#define  NNWP_axi_fifo_status_axi_awcache_empty_shift                            (11)
#define  NNWP_axi_fifo_status_axi_awcache_full_shift                             (10)
#define  NNWP_axi_fifo_status_axi_rcmd_fifo_empty_shift                          (9)
#define  NNWP_axi_fifo_status_axi_rcmd_fifo_full_shift                           (8)
#define  NNWP_axi_fifo_status_axi_rdata_fifo_empty_shift                         (7)
#define  NNWP_axi_fifo_status_axi_rdata_fifo_full_shift                          (6)
#define  NNWP_axi_fifo_status_axi_wcmd_fifo_empty_shift                          (5)
#define  NNWP_axi_fifo_status_axi_wcmd_fifo_full_shift                           (4)
#define  NNWP_axi_fifo_status_axi_wdata_fifo_empty_shift                         (3)
#define  NNWP_axi_fifo_status_axi_wdata_fifo_full_shift                          (2)
#define  NNWP_axi_fifo_status_axi_wid_empty_shift                                (1)
#define  NNWP_axi_fifo_status_axi_wid_full_shift                                 (0)
#define  NNWP_axi_fifo_status_axi_awcache_empty_mask                             (0x00000800)
#define  NNWP_axi_fifo_status_axi_awcache_full_mask                              (0x00000400)
#define  NNWP_axi_fifo_status_axi_rcmd_fifo_empty_mask                           (0x00000200)
#define  NNWP_axi_fifo_status_axi_rcmd_fifo_full_mask                            (0x00000100)
#define  NNWP_axi_fifo_status_axi_rdata_fifo_empty_mask                          (0x00000080)
#define  NNWP_axi_fifo_status_axi_rdata_fifo_full_mask                           (0x00000040)
#define  NNWP_axi_fifo_status_axi_wcmd_fifo_empty_mask                           (0x00000020)
#define  NNWP_axi_fifo_status_axi_wcmd_fifo_full_mask                            (0x00000010)
#define  NNWP_axi_fifo_status_axi_wdata_fifo_empty_mask                          (0x00000008)
#define  NNWP_axi_fifo_status_axi_wdata_fifo_full_mask                           (0x00000004)
#define  NNWP_axi_fifo_status_axi_wid_empty_mask                                 (0x00000002)
#define  NNWP_axi_fifo_status_axi_wid_full_mask                                  (0x00000001)
#define  NNWP_axi_fifo_status_axi_awcache_empty(data)                            (0x00000800&((data)<<11))
#define  NNWP_axi_fifo_status_axi_awcache_full(data)                             (0x00000400&((data)<<10))
#define  NNWP_axi_fifo_status_axi_rcmd_fifo_empty(data)                          (0x00000200&((data)<<9))
#define  NNWP_axi_fifo_status_axi_rcmd_fifo_full(data)                           (0x00000100&((data)<<8))
#define  NNWP_axi_fifo_status_axi_rdata_fifo_empty(data)                         (0x00000080&((data)<<7))
#define  NNWP_axi_fifo_status_axi_rdata_fifo_full(data)                          (0x00000040&((data)<<6))
#define  NNWP_axi_fifo_status_axi_wcmd_fifo_empty(data)                          (0x00000020&((data)<<5))
#define  NNWP_axi_fifo_status_axi_wcmd_fifo_full(data)                           (0x00000010&((data)<<4))
#define  NNWP_axi_fifo_status_axi_wdata_fifo_empty(data)                         (0x00000008&((data)<<3))
#define  NNWP_axi_fifo_status_axi_wdata_fifo_full(data)                          (0x00000004&((data)<<2))
#define  NNWP_axi_fifo_status_axi_wid_empty(data)                                (0x00000002&((data)<<1))
#define  NNWP_axi_fifo_status_axi_wid_full(data)                                 (0x00000001&(data))
#define  NNWP_axi_fifo_status_get_axi_awcache_empty(data)                        ((0x00000800&(data))>>11)
#define  NNWP_axi_fifo_status_get_axi_awcache_full(data)                         ((0x00000400&(data))>>10)
#define  NNWP_axi_fifo_status_get_axi_rcmd_fifo_empty(data)                      ((0x00000200&(data))>>9)
#define  NNWP_axi_fifo_status_get_axi_rcmd_fifo_full(data)                       ((0x00000100&(data))>>8)
#define  NNWP_axi_fifo_status_get_axi_rdata_fifo_empty(data)                     ((0x00000080&(data))>>7)
#define  NNWP_axi_fifo_status_get_axi_rdata_fifo_full(data)                      ((0x00000040&(data))>>6)
#define  NNWP_axi_fifo_status_get_axi_wcmd_fifo_empty(data)                      ((0x00000020&(data))>>5)
#define  NNWP_axi_fifo_status_get_axi_wcmd_fifo_full(data)                       ((0x00000010&(data))>>4)
#define  NNWP_axi_fifo_status_get_axi_wdata_fifo_empty(data)                     ((0x00000008&(data))>>3)
#define  NNWP_axi_fifo_status_get_axi_wdata_fifo_full(data)                      ((0x00000004&(data))>>2)
#define  NNWP_axi_fifo_status_get_axi_wid_empty(data)                            ((0x00000002&(data))>>1)
#define  NNWP_axi_fifo_status_get_axi_wid_full(data)                             (0x00000001&(data))

#define  NNWP_wrapper_status                                                    0x18076314
#define  NNWP_wrapper_status_reg_addr                                            "0xB8076314"
#define  NNWP_wrapper_status_reg                                                 0xB8076314
#define  NNWP_wrapper_status_inst_addr                                           "0x0019"
#define  set_NNWP_wrapper_status_reg(data)                                       (*((volatile unsigned int*)NNWP_wrapper_status_reg)=data)
#define  get_NNWP_wrapper_status_reg                                             (*((volatile unsigned int*)NNWP_wrapper_status_reg))
#define  NNWP_wrapper_status_dc_idle_shift                                       (2)
#define  NNWP_wrapper_status_axi_r_idle_shift                                    (1)
#define  NNWP_wrapper_status_axi_w_idle_shift                                    (0)
#define  NNWP_wrapper_status_dc_idle_mask                                        (0x00000004)
#define  NNWP_wrapper_status_axi_r_idle_mask                                     (0x00000002)
#define  NNWP_wrapper_status_axi_w_idle_mask                                     (0x00000001)
#define  NNWP_wrapper_status_dc_idle(data)                                       (0x00000004&((data)<<2))
#define  NNWP_wrapper_status_axi_r_idle(data)                                    (0x00000002&((data)<<1))
#define  NNWP_wrapper_status_axi_w_idle(data)                                    (0x00000001&(data))
#define  NNWP_wrapper_status_get_dc_idle(data)                                   ((0x00000004&(data))>>2)
#define  NNWP_wrapper_status_get_axi_r_idle(data)                                ((0x00000002&(data))>>1)
#define  NNWP_wrapper_status_get_axi_w_idle(data)                                (0x00000001&(data))

#define  NNWP_sf_ctrl                                                           0x18076400
#define  NNWP_sf_ctrl_reg_addr                                                   "0xB8076400"
#define  NNWP_sf_ctrl_reg                                                        0xB8076400
#define  NNWP_sf_ctrl_inst_addr                                                  "0x001A"
#define  set_NNWP_sf_ctrl_reg(data)                                              (*((volatile unsigned int*)NNWP_sf_ctrl_reg)=data)
#define  get_NNWP_sf_ctrl_reg                                                    (*((volatile unsigned int*)NNWP_sf_ctrl_reg))
#define  NNWP_sf_ctrl_reg_sf_rx_gated_shift                                      (6)
#define  NNWP_sf_ctrl_reg_sf_rx_start_shift                                      (5)
#define  NNWP_sf_ctrl_reg_sf_rx_mode_shift                                       (4)
#define  NNWP_sf_ctrl_reg_sf_tx_start_shift                                      (1)
#define  NNWP_sf_ctrl_reg_sf_tx_mode_shift                                       (0)
#define  NNWP_sf_ctrl_reg_sf_rx_gated_mask                                       (0x00000040)
#define  NNWP_sf_ctrl_reg_sf_rx_start_mask                                       (0x00000020)
#define  NNWP_sf_ctrl_reg_sf_rx_mode_mask                                        (0x00000010)
#define  NNWP_sf_ctrl_reg_sf_tx_start_mask                                       (0x00000002)
#define  NNWP_sf_ctrl_reg_sf_tx_mode_mask                                        (0x00000001)
#define  NNWP_sf_ctrl_reg_sf_rx_gated(data)                                      (0x00000040&((data)<<6))
#define  NNWP_sf_ctrl_reg_sf_rx_start(data)                                      (0x00000020&((data)<<5))
#define  NNWP_sf_ctrl_reg_sf_rx_mode(data)                                       (0x00000010&((data)<<4))
#define  NNWP_sf_ctrl_reg_sf_tx_start(data)                                      (0x00000002&((data)<<1))
#define  NNWP_sf_ctrl_reg_sf_tx_mode(data)                                       (0x00000001&(data))
#define  NNWP_sf_ctrl_get_reg_sf_rx_gated(data)                                  ((0x00000040&(data))>>6)
#define  NNWP_sf_ctrl_get_reg_sf_rx_start(data)                                  ((0x00000020&(data))>>5)
#define  NNWP_sf_ctrl_get_reg_sf_rx_mode(data)                                   ((0x00000010&(data))>>4)
#define  NNWP_sf_ctrl_get_reg_sf_tx_start(data)                                  ((0x00000002&(data))>>1)
#define  NNWP_sf_ctrl_get_reg_sf_tx_mode(data)                                   (0x00000001&(data))

#define  NNWP_sf_status                                                         0x18076404
#define  NNWP_sf_status_reg_addr                                                 "0xB8076404"
#define  NNWP_sf_status_reg                                                      0xB8076404
#define  NNWP_sf_status_inst_addr                                                "0x001B"
#define  set_NNWP_sf_status_reg(data)                                            (*((volatile unsigned int*)NNWP_sf_status_reg)=data)
#define  get_NNWP_sf_status_reg                                                  (*((volatile unsigned int*)NNWP_sf_status_reg))
#define  NNWP_sf_status_reg_sf_rx_fail_bit_status_shift                          (24)
#define  NNWP_sf_status_reg_sf_rx_debug_bit_sel_shift                            (16)
#define  NNWP_sf_status_reg_sf_rx_err_shift                                      (5)
#define  NNWP_sf_status_reg_sf_rx_done_shift                                     (4)
#define  NNWP_sf_status_reg_sf_tx_work_shift                                     (0)
#define  NNWP_sf_status_reg_sf_rx_fail_bit_status_mask                           (0x01000000)
#define  NNWP_sf_status_reg_sf_rx_debug_bit_sel_mask                             (0x00FF0000)
#define  NNWP_sf_status_reg_sf_rx_err_mask                                       (0x00000020)
#define  NNWP_sf_status_reg_sf_rx_done_mask                                      (0x00000010)
#define  NNWP_sf_status_reg_sf_tx_work_mask                                      (0x00000001)
#define  NNWP_sf_status_reg_sf_rx_fail_bit_status(data)                          (0x01000000&((data)<<24))
#define  NNWP_sf_status_reg_sf_rx_debug_bit_sel(data)                            (0x00FF0000&((data)<<16))
#define  NNWP_sf_status_reg_sf_rx_err(data)                                      (0x00000020&((data)<<5))
#define  NNWP_sf_status_reg_sf_rx_done(data)                                     (0x00000010&((data)<<4))
#define  NNWP_sf_status_reg_sf_tx_work(data)                                     (0x00000001&(data))
#define  NNWP_sf_status_get_reg_sf_rx_fail_bit_status(data)                      ((0x01000000&(data))>>24)
#define  NNWP_sf_status_get_reg_sf_rx_debug_bit_sel(data)                        ((0x00FF0000&(data))>>16)
#define  NNWP_sf_status_get_reg_sf_rx_err(data)                                  ((0x00000020&(data))>>5)
#define  NNWP_sf_status_get_reg_sf_rx_done(data)                                 ((0x00000010&(data))>>4)
#define  NNWP_sf_status_get_reg_sf_tx_work(data)                                 (0x00000001&(data))

#define  NNWP_bist_mode                                                         0x18076500
#define  NNWP_bist_mode_reg_addr                                                 "0xB8076500"
#define  NNWP_bist_mode_reg                                                      0xB8076500
#define  NNWP_bist_mode_inst_addr                                                "0x001C"
#define  set_NNWP_bist_mode_reg(data)                                            (*((volatile unsigned int*)NNWP_bist_mode_reg)=data)
#define  get_NNWP_bist_mode_reg                                                  (*((volatile unsigned int*)NNWP_bist_mode_reg))
#define  NNWP_bist_mode_bist_mode_ffm_shift                                      (13)
#define  NNWP_bist_mode_bist_mode_core_a_shift                                   (12)
#define  NNWP_bist_mode_bist_mode_group_ctrl_2p_shift                            (11)
#define  NNWP_bist_mode_bist_mode_group_ctrl_1p_shift                            (10)
#define  NNWP_bist_mode_bist_mode_merge_shift                                    (9)
#define  NNWP_bist_mode_bist_mode_gc_sh_nn_cache_shift                           (8)
#define  NNWP_bist_mode_bist_mode_conv_out_fifo_shift                            (7)
#define  NNWP_bist_mode_bist_mode_backend_merger_shift                           (6)
#define  NNWP_bist_mode_bist_mode_tp_0_shift                                     (5)
#define  NNWP_bist_mode_bist_mode_wrapper_shift                                  (4)
#define  NNWP_bist_mode_bist_mode_us_cache_0_shift                               (3)
#define  NNWP_bist_mode_bist_mode_us_cache_1_shift                               (2)
#define  NNWP_bist_mode_bist_mode_conv_core_0_shift                              (1)
#define  NNWP_bist_mode_bist_mode_conv_core_1_shift                              (0)
#define  NNWP_bist_mode_bist_mode_ffm_mask                                       (0x00002000)
#define  NNWP_bist_mode_bist_mode_core_a_mask                                    (0x00001000)
#define  NNWP_bist_mode_bist_mode_group_ctrl_2p_mask                             (0x00000800)
#define  NNWP_bist_mode_bist_mode_group_ctrl_1p_mask                             (0x00000400)
#define  NNWP_bist_mode_bist_mode_merge_mask                                     (0x00000200)
#define  NNWP_bist_mode_bist_mode_gc_sh_nn_cache_mask                            (0x00000100)
#define  NNWP_bist_mode_bist_mode_conv_out_fifo_mask                             (0x00000080)
#define  NNWP_bist_mode_bist_mode_backend_merger_mask                            (0x00000040)
#define  NNWP_bist_mode_bist_mode_tp_0_mask                                      (0x00000020)
#define  NNWP_bist_mode_bist_mode_wrapper_mask                                   (0x00000010)
#define  NNWP_bist_mode_bist_mode_us_cache_0_mask                                (0x00000008)
#define  NNWP_bist_mode_bist_mode_us_cache_1_mask                                (0x00000004)
#define  NNWP_bist_mode_bist_mode_conv_core_0_mask                               (0x00000002)
#define  NNWP_bist_mode_bist_mode_conv_core_1_mask                               (0x00000001)
#define  NNWP_bist_mode_bist_mode_ffm(data)                                      (0x00002000&((data)<<13))
#define  NNWP_bist_mode_bist_mode_core_a(data)                                   (0x00001000&((data)<<12))
#define  NNWP_bist_mode_bist_mode_group_ctrl_2p(data)                            (0x00000800&((data)<<11))
#define  NNWP_bist_mode_bist_mode_group_ctrl_1p(data)                            (0x00000400&((data)<<10))
#define  NNWP_bist_mode_bist_mode_merge(data)                                    (0x00000200&((data)<<9))
#define  NNWP_bist_mode_bist_mode_gc_sh_nn_cache(data)                           (0x00000100&((data)<<8))
#define  NNWP_bist_mode_bist_mode_conv_out_fifo(data)                            (0x00000080&((data)<<7))
#define  NNWP_bist_mode_bist_mode_backend_merger(data)                           (0x00000040&((data)<<6))
#define  NNWP_bist_mode_bist_mode_tp_0(data)                                     (0x00000020&((data)<<5))
#define  NNWP_bist_mode_bist_mode_wrapper(data)                                  (0x00000010&((data)<<4))
#define  NNWP_bist_mode_bist_mode_us_cache_0(data)                               (0x00000008&((data)<<3))
#define  NNWP_bist_mode_bist_mode_us_cache_1(data)                               (0x00000004&((data)<<2))
#define  NNWP_bist_mode_bist_mode_conv_core_0(data)                              (0x00000002&((data)<<1))
#define  NNWP_bist_mode_bist_mode_conv_core_1(data)                              (0x00000001&(data))
#define  NNWP_bist_mode_get_bist_mode_ffm(data)                                  ((0x00002000&(data))>>13)
#define  NNWP_bist_mode_get_bist_mode_core_a(data)                               ((0x00001000&(data))>>12)
#define  NNWP_bist_mode_get_bist_mode_group_ctrl_2p(data)                        ((0x00000800&(data))>>11)
#define  NNWP_bist_mode_get_bist_mode_group_ctrl_1p(data)                        ((0x00000400&(data))>>10)
#define  NNWP_bist_mode_get_bist_mode_merge(data)                                ((0x00000200&(data))>>9)
#define  NNWP_bist_mode_get_bist_mode_gc_sh_nn_cache(data)                       ((0x00000100&(data))>>8)
#define  NNWP_bist_mode_get_bist_mode_conv_out_fifo(data)                        ((0x00000080&(data))>>7)
#define  NNWP_bist_mode_get_bist_mode_backend_merger(data)                       ((0x00000040&(data))>>6)
#define  NNWP_bist_mode_get_bist_mode_tp_0(data)                                 ((0x00000020&(data))>>5)
#define  NNWP_bist_mode_get_bist_mode_wrapper(data)                              ((0x00000010&(data))>>4)
#define  NNWP_bist_mode_get_bist_mode_us_cache_0(data)                           ((0x00000008&(data))>>3)
#define  NNWP_bist_mode_get_bist_mode_us_cache_1(data)                           ((0x00000004&(data))>>2)
#define  NNWP_bist_mode_get_bist_mode_conv_core_0(data)                          ((0x00000002&(data))>>1)
#define  NNWP_bist_mode_get_bist_mode_conv_core_1(data)                          (0x00000001&(data))

#define  NNWP_bist_done                                                         0x18076510
#define  NNWP_bist_done_reg_addr                                                 "0xB8076510"
#define  NNWP_bist_done_reg                                                      0xB8076510
#define  NNWP_bist_done_inst_addr                                                "0x001D"
#define  set_NNWP_bist_done_reg(data)                                            (*((volatile unsigned int*)NNWP_bist_done_reg)=data)
#define  get_NNWP_bist_done_reg                                                  (*((volatile unsigned int*)NNWP_bist_done_reg))
#define  NNWP_bist_done_bist_done_ffm_shift                                      (13)
#define  NNWP_bist_done_bist_done_core_a_shift                                   (12)
#define  NNWP_bist_done_bist_done_group_ctrl_2p_shift                            (11)
#define  NNWP_bist_done_bist_done_group_ctrl_1p_shift                            (10)
#define  NNWP_bist_done_bist_done_merge_shift                                    (9)
#define  NNWP_bist_done_bist_done_gc_sh_nn_cache_shift                           (8)
#define  NNWP_bist_done_bist_done_conv_out_fifo_shift                            (7)
#define  NNWP_bist_done_bist_done_backend_merger_shift                           (6)
#define  NNWP_bist_done_bist_done_tp_0_shift                                     (5)
#define  NNWP_bist_done_bist_done_wrapper_shift                                  (4)
#define  NNWP_bist_done_bist_done_us_cache_0_shift                               (3)
#define  NNWP_bist_done_bist_done_us_cache_1_shift                               (2)
#define  NNWP_bist_done_bist_done_conv_core_0_shift                              (1)
#define  NNWP_bist_done_bist_done_conv_core_1_shift                              (0)
#define  NNWP_bist_done_bist_done_ffm_mask                                       (0x00002000)
#define  NNWP_bist_done_bist_done_core_a_mask                                    (0x00001000)
#define  NNWP_bist_done_bist_done_group_ctrl_2p_mask                             (0x00000800)
#define  NNWP_bist_done_bist_done_group_ctrl_1p_mask                             (0x00000400)
#define  NNWP_bist_done_bist_done_merge_mask                                     (0x00000200)
#define  NNWP_bist_done_bist_done_gc_sh_nn_cache_mask                            (0x00000100)
#define  NNWP_bist_done_bist_done_conv_out_fifo_mask                             (0x00000080)
#define  NNWP_bist_done_bist_done_backend_merger_mask                            (0x00000040)
#define  NNWP_bist_done_bist_done_tp_0_mask                                      (0x00000020)
#define  NNWP_bist_done_bist_done_wrapper_mask                                   (0x00000010)
#define  NNWP_bist_done_bist_done_us_cache_0_mask                                (0x00000008)
#define  NNWP_bist_done_bist_done_us_cache_1_mask                                (0x00000004)
#define  NNWP_bist_done_bist_done_conv_core_0_mask                               (0x00000002)
#define  NNWP_bist_done_bist_done_conv_core_1_mask                               (0x00000001)
#define  NNWP_bist_done_bist_done_ffm(data)                                      (0x00002000&((data)<<13))
#define  NNWP_bist_done_bist_done_core_a(data)                                   (0x00001000&((data)<<12))
#define  NNWP_bist_done_bist_done_group_ctrl_2p(data)                            (0x00000800&((data)<<11))
#define  NNWP_bist_done_bist_done_group_ctrl_1p(data)                            (0x00000400&((data)<<10))
#define  NNWP_bist_done_bist_done_merge(data)                                    (0x00000200&((data)<<9))
#define  NNWP_bist_done_bist_done_gc_sh_nn_cache(data)                           (0x00000100&((data)<<8))
#define  NNWP_bist_done_bist_done_conv_out_fifo(data)                            (0x00000080&((data)<<7))
#define  NNWP_bist_done_bist_done_backend_merger(data)                           (0x00000040&((data)<<6))
#define  NNWP_bist_done_bist_done_tp_0(data)                                     (0x00000020&((data)<<5))
#define  NNWP_bist_done_bist_done_wrapper(data)                                  (0x00000010&((data)<<4))
#define  NNWP_bist_done_bist_done_us_cache_0(data)                               (0x00000008&((data)<<3))
#define  NNWP_bist_done_bist_done_us_cache_1(data)                               (0x00000004&((data)<<2))
#define  NNWP_bist_done_bist_done_conv_core_0(data)                              (0x00000002&((data)<<1))
#define  NNWP_bist_done_bist_done_conv_core_1(data)                              (0x00000001&(data))
#define  NNWP_bist_done_get_bist_done_ffm(data)                                  ((0x00002000&(data))>>13)
#define  NNWP_bist_done_get_bist_done_core_a(data)                               ((0x00001000&(data))>>12)
#define  NNWP_bist_done_get_bist_done_group_ctrl_2p(data)                        ((0x00000800&(data))>>11)
#define  NNWP_bist_done_get_bist_done_group_ctrl_1p(data)                        ((0x00000400&(data))>>10)
#define  NNWP_bist_done_get_bist_done_merge(data)                                ((0x00000200&(data))>>9)
#define  NNWP_bist_done_get_bist_done_gc_sh_nn_cache(data)                       ((0x00000100&(data))>>8)
#define  NNWP_bist_done_get_bist_done_conv_out_fifo(data)                        ((0x00000080&(data))>>7)
#define  NNWP_bist_done_get_bist_done_backend_merger(data)                       ((0x00000040&(data))>>6)
#define  NNWP_bist_done_get_bist_done_tp_0(data)                                 ((0x00000020&(data))>>5)
#define  NNWP_bist_done_get_bist_done_wrapper(data)                              ((0x00000010&(data))>>4)
#define  NNWP_bist_done_get_bist_done_us_cache_0(data)                           ((0x00000008&(data))>>3)
#define  NNWP_bist_done_get_bist_done_us_cache_1(data)                           ((0x00000004&(data))>>2)
#define  NNWP_bist_done_get_bist_done_conv_core_0(data)                          ((0x00000002&(data))>>1)
#define  NNWP_bist_done_get_bist_done_conv_core_1(data)                          (0x00000001&(data))

#define  NNWP_drf_bist_mode                                                     0x18076520
#define  NNWP_drf_bist_mode_reg_addr                                             "0xB8076520"
#define  NNWP_drf_bist_mode_reg                                                  0xB8076520
#define  NNWP_drf_bist_mode_inst_addr                                            "0x001E"
#define  set_NNWP_drf_bist_mode_reg(data)                                        (*((volatile unsigned int*)NNWP_drf_bist_mode_reg)=data)
#define  get_NNWP_drf_bist_mode_reg                                              (*((volatile unsigned int*)NNWP_drf_bist_mode_reg))
#define  NNWP_drf_bist_mode_drf_bist_mode_ffm_shift                              (13)
#define  NNWP_drf_bist_mode_drf_bist_mode_core_a_shift                           (12)
#define  NNWP_drf_bist_mode_drf_bist_mode_group_ctrl_2p_shift                    (11)
#define  NNWP_drf_bist_mode_drf_bist_mode_group_ctrl_1p_shift                    (10)
#define  NNWP_drf_bist_mode_drf_bist_mode_merge_shift                            (9)
#define  NNWP_drf_bist_mode_drf_bist_mode_gc_sh_nn_cache_shift                   (8)
#define  NNWP_drf_bist_mode_drf_bist_mode_conv_out_fifo_shift                    (7)
#define  NNWP_drf_bist_mode_drf_bist_mode_backend_merger_shift                   (6)
#define  NNWP_drf_bist_mode_drf_bist_mode_tp_0_shift                             (5)
#define  NNWP_drf_bist_mode_drf_bist_mode_wrapper_shift                          (4)
#define  NNWP_drf_bist_mode_drf_bist_mode_us_cache_0_shift                       (3)
#define  NNWP_drf_bist_mode_drf_bist_mode_us_cache_1_shift                       (2)
#define  NNWP_drf_bist_mode_drf_bist_mode_conv_core_0_shift                      (1)
#define  NNWP_drf_bist_mode_drf_bist_mode_conv_core_1_shift                      (0)
#define  NNWP_drf_bist_mode_drf_bist_mode_ffm_mask                               (0x00002000)
#define  NNWP_drf_bist_mode_drf_bist_mode_core_a_mask                            (0x00001000)
#define  NNWP_drf_bist_mode_drf_bist_mode_group_ctrl_2p_mask                     (0x00000800)
#define  NNWP_drf_bist_mode_drf_bist_mode_group_ctrl_1p_mask                     (0x00000400)
#define  NNWP_drf_bist_mode_drf_bist_mode_merge_mask                             (0x00000200)
#define  NNWP_drf_bist_mode_drf_bist_mode_gc_sh_nn_cache_mask                    (0x00000100)
#define  NNWP_drf_bist_mode_drf_bist_mode_conv_out_fifo_mask                     (0x00000080)
#define  NNWP_drf_bist_mode_drf_bist_mode_backend_merger_mask                    (0x00000040)
#define  NNWP_drf_bist_mode_drf_bist_mode_tp_0_mask                              (0x00000020)
#define  NNWP_drf_bist_mode_drf_bist_mode_wrapper_mask                           (0x00000010)
#define  NNWP_drf_bist_mode_drf_bist_mode_us_cache_0_mask                        (0x00000008)
#define  NNWP_drf_bist_mode_drf_bist_mode_us_cache_1_mask                        (0x00000004)
#define  NNWP_drf_bist_mode_drf_bist_mode_conv_core_0_mask                       (0x00000002)
#define  NNWP_drf_bist_mode_drf_bist_mode_conv_core_1_mask                       (0x00000001)
#define  NNWP_drf_bist_mode_drf_bist_mode_ffm(data)                              (0x00002000&((data)<<13))
#define  NNWP_drf_bist_mode_drf_bist_mode_core_a(data)                           (0x00001000&((data)<<12))
#define  NNWP_drf_bist_mode_drf_bist_mode_group_ctrl_2p(data)                    (0x00000800&((data)<<11))
#define  NNWP_drf_bist_mode_drf_bist_mode_group_ctrl_1p(data)                    (0x00000400&((data)<<10))
#define  NNWP_drf_bist_mode_drf_bist_mode_merge(data)                            (0x00000200&((data)<<9))
#define  NNWP_drf_bist_mode_drf_bist_mode_gc_sh_nn_cache(data)                   (0x00000100&((data)<<8))
#define  NNWP_drf_bist_mode_drf_bist_mode_conv_out_fifo(data)                    (0x00000080&((data)<<7))
#define  NNWP_drf_bist_mode_drf_bist_mode_backend_merger(data)                   (0x00000040&((data)<<6))
#define  NNWP_drf_bist_mode_drf_bist_mode_tp_0(data)                             (0x00000020&((data)<<5))
#define  NNWP_drf_bist_mode_drf_bist_mode_wrapper(data)                          (0x00000010&((data)<<4))
#define  NNWP_drf_bist_mode_drf_bist_mode_us_cache_0(data)                       (0x00000008&((data)<<3))
#define  NNWP_drf_bist_mode_drf_bist_mode_us_cache_1(data)                       (0x00000004&((data)<<2))
#define  NNWP_drf_bist_mode_drf_bist_mode_conv_core_0(data)                      (0x00000002&((data)<<1))
#define  NNWP_drf_bist_mode_drf_bist_mode_conv_core_1(data)                      (0x00000001&(data))
#define  NNWP_drf_bist_mode_get_drf_bist_mode_ffm(data)                          ((0x00002000&(data))>>13)
#define  NNWP_drf_bist_mode_get_drf_bist_mode_core_a(data)                       ((0x00001000&(data))>>12)
#define  NNWP_drf_bist_mode_get_drf_bist_mode_group_ctrl_2p(data)                ((0x00000800&(data))>>11)
#define  NNWP_drf_bist_mode_get_drf_bist_mode_group_ctrl_1p(data)                ((0x00000400&(data))>>10)
#define  NNWP_drf_bist_mode_get_drf_bist_mode_merge(data)                        ((0x00000200&(data))>>9)
#define  NNWP_drf_bist_mode_get_drf_bist_mode_gc_sh_nn_cache(data)               ((0x00000100&(data))>>8)
#define  NNWP_drf_bist_mode_get_drf_bist_mode_conv_out_fifo(data)                ((0x00000080&(data))>>7)
#define  NNWP_drf_bist_mode_get_drf_bist_mode_backend_merger(data)               ((0x00000040&(data))>>6)
#define  NNWP_drf_bist_mode_get_drf_bist_mode_tp_0(data)                         ((0x00000020&(data))>>5)
#define  NNWP_drf_bist_mode_get_drf_bist_mode_wrapper(data)                      ((0x00000010&(data))>>4)
#define  NNWP_drf_bist_mode_get_drf_bist_mode_us_cache_0(data)                   ((0x00000008&(data))>>3)
#define  NNWP_drf_bist_mode_get_drf_bist_mode_us_cache_1(data)                   ((0x00000004&(data))>>2)
#define  NNWP_drf_bist_mode_get_drf_bist_mode_conv_core_0(data)                  ((0x00000002&(data))>>1)
#define  NNWP_drf_bist_mode_get_drf_bist_mode_conv_core_1(data)                  (0x00000001&(data))

#define  NNWP_drf_start_pause                                                   0x18076530
#define  NNWP_drf_start_pause_reg_addr                                           "0xB8076530"
#define  NNWP_drf_start_pause_reg                                                0xB8076530
#define  NNWP_drf_start_pause_inst_addr                                          "0x001F"
#define  set_NNWP_drf_start_pause_reg(data)                                      (*((volatile unsigned int*)NNWP_drf_start_pause_reg)=data)
#define  get_NNWP_drf_start_pause_reg                                            (*((volatile unsigned int*)NNWP_drf_start_pause_reg))
#define  NNWP_drf_start_pause_drf_start_pause_ffm_shift                          (13)
#define  NNWP_drf_start_pause_drf_start_pause_core_a_shift                       (12)
#define  NNWP_drf_start_pause_drf_start_pause_group_ctrl_2p_shift                (11)
#define  NNWP_drf_start_pause_drf_start_pause_group_ctrl_1p_shift                (10)
#define  NNWP_drf_start_pause_drf_start_pause_merge_shift                        (9)
#define  NNWP_drf_start_pause_drf_start_pause_gc_sh_nn_cache_shift               (8)
#define  NNWP_drf_start_pause_drf_start_pause_conv_out_fifo_shift                (7)
#define  NNWP_drf_start_pause_drf_start_pause_backend_merger_shift               (6)
#define  NNWP_drf_start_pause_drf_start_pause_tp_0_shift                         (5)
#define  NNWP_drf_start_pause_drf_start_pause_wrapper_shift                      (4)
#define  NNWP_drf_start_pause_drf_start_pause_us_cache_0_shift                   (3)
#define  NNWP_drf_start_pause_drf_start_pause_us_cache_1_shift                   (2)
#define  NNWP_drf_start_pause_drf_start_pause_conv_core_0_shift                  (1)
#define  NNWP_drf_start_pause_drf_start_pause_conv_core_1_shift                  (0)
#define  NNWP_drf_start_pause_drf_start_pause_ffm_mask                           (0x00002000)
#define  NNWP_drf_start_pause_drf_start_pause_core_a_mask                        (0x00001000)
#define  NNWP_drf_start_pause_drf_start_pause_group_ctrl_2p_mask                 (0x00000800)
#define  NNWP_drf_start_pause_drf_start_pause_group_ctrl_1p_mask                 (0x00000400)
#define  NNWP_drf_start_pause_drf_start_pause_merge_mask                         (0x00000200)
#define  NNWP_drf_start_pause_drf_start_pause_gc_sh_nn_cache_mask                (0x00000100)
#define  NNWP_drf_start_pause_drf_start_pause_conv_out_fifo_mask                 (0x00000080)
#define  NNWP_drf_start_pause_drf_start_pause_backend_merger_mask                (0x00000040)
#define  NNWP_drf_start_pause_drf_start_pause_tp_0_mask                          (0x00000020)
#define  NNWP_drf_start_pause_drf_start_pause_wrapper_mask                       (0x00000010)
#define  NNWP_drf_start_pause_drf_start_pause_us_cache_0_mask                    (0x00000008)
#define  NNWP_drf_start_pause_drf_start_pause_us_cache_1_mask                    (0x00000004)
#define  NNWP_drf_start_pause_drf_start_pause_conv_core_0_mask                   (0x00000002)
#define  NNWP_drf_start_pause_drf_start_pause_conv_core_1_mask                   (0x00000001)
#define  NNWP_drf_start_pause_drf_start_pause_ffm(data)                          (0x00002000&((data)<<13))
#define  NNWP_drf_start_pause_drf_start_pause_core_a(data)                       (0x00001000&((data)<<12))
#define  NNWP_drf_start_pause_drf_start_pause_group_ctrl_2p(data)                (0x00000800&((data)<<11))
#define  NNWP_drf_start_pause_drf_start_pause_group_ctrl_1p(data)                (0x00000400&((data)<<10))
#define  NNWP_drf_start_pause_drf_start_pause_merge(data)                        (0x00000200&((data)<<9))
#define  NNWP_drf_start_pause_drf_start_pause_gc_sh_nn_cache(data)               (0x00000100&((data)<<8))
#define  NNWP_drf_start_pause_drf_start_pause_conv_out_fifo(data)                (0x00000080&((data)<<7))
#define  NNWP_drf_start_pause_drf_start_pause_backend_merger(data)               (0x00000040&((data)<<6))
#define  NNWP_drf_start_pause_drf_start_pause_tp_0(data)                         (0x00000020&((data)<<5))
#define  NNWP_drf_start_pause_drf_start_pause_wrapper(data)                      (0x00000010&((data)<<4))
#define  NNWP_drf_start_pause_drf_start_pause_us_cache_0(data)                   (0x00000008&((data)<<3))
#define  NNWP_drf_start_pause_drf_start_pause_us_cache_1(data)                   (0x00000004&((data)<<2))
#define  NNWP_drf_start_pause_drf_start_pause_conv_core_0(data)                  (0x00000002&((data)<<1))
#define  NNWP_drf_start_pause_drf_start_pause_conv_core_1(data)                  (0x00000001&(data))
#define  NNWP_drf_start_pause_get_drf_start_pause_ffm(data)                      ((0x00002000&(data))>>13)
#define  NNWP_drf_start_pause_get_drf_start_pause_core_a(data)                   ((0x00001000&(data))>>12)
#define  NNWP_drf_start_pause_get_drf_start_pause_group_ctrl_2p(data)            ((0x00000800&(data))>>11)
#define  NNWP_drf_start_pause_get_drf_start_pause_group_ctrl_1p(data)            ((0x00000400&(data))>>10)
#define  NNWP_drf_start_pause_get_drf_start_pause_merge(data)                    ((0x00000200&(data))>>9)
#define  NNWP_drf_start_pause_get_drf_start_pause_gc_sh_nn_cache(data)           ((0x00000100&(data))>>8)
#define  NNWP_drf_start_pause_get_drf_start_pause_conv_out_fifo(data)            ((0x00000080&(data))>>7)
#define  NNWP_drf_start_pause_get_drf_start_pause_backend_merger(data)           ((0x00000040&(data))>>6)
#define  NNWP_drf_start_pause_get_drf_start_pause_tp_0(data)                     ((0x00000020&(data))>>5)
#define  NNWP_drf_start_pause_get_drf_start_pause_wrapper(data)                  ((0x00000010&(data))>>4)
#define  NNWP_drf_start_pause_get_drf_start_pause_us_cache_0(data)               ((0x00000008&(data))>>3)
#define  NNWP_drf_start_pause_get_drf_start_pause_us_cache_1(data)               ((0x00000004&(data))>>2)
#define  NNWP_drf_start_pause_get_drf_start_pause_conv_core_0(data)              ((0x00000002&(data))>>1)
#define  NNWP_drf_start_pause_get_drf_start_pause_conv_core_1(data)              (0x00000001&(data))

#define  NNWP_drf_test_resume                                                   0x18076540
#define  NNWP_drf_test_resume_reg_addr                                           "0xB8076540"
#define  NNWP_drf_test_resume_reg                                                0xB8076540
#define  NNWP_drf_test_resume_inst_addr                                          "0x0020"
#define  set_NNWP_drf_test_resume_reg(data)                                      (*((volatile unsigned int*)NNWP_drf_test_resume_reg)=data)
#define  get_NNWP_drf_test_resume_reg                                            (*((volatile unsigned int*)NNWP_drf_test_resume_reg))
#define  NNWP_drf_test_resume_drf_test_resume_ffm_shift                          (13)
#define  NNWP_drf_test_resume_drf_test_resume_core_a_shift                       (12)
#define  NNWP_drf_test_resume_drf_test_resume_group_ctrl_2p_shift                (11)
#define  NNWP_drf_test_resume_drf_test_resume_group_ctrl_1p_shift                (10)
#define  NNWP_drf_test_resume_drf_test_resume_merge_shift                        (9)
#define  NNWP_drf_test_resume_drf_test_resume_gc_sh_nn_cache_shift               (8)
#define  NNWP_drf_test_resume_drf_test_resume_conv_out_fifo_shift                (7)
#define  NNWP_drf_test_resume_drf_test_resume_backend_merger_shift               (6)
#define  NNWP_drf_test_resume_drf_test_resume_tp_0_shift                         (5)
#define  NNWP_drf_test_resume_drf_test_resume_wrapper_shift                      (4)
#define  NNWP_drf_test_resume_drf_test_resume_us_cache_0_shift                   (3)
#define  NNWP_drf_test_resume_drf_test_resume_us_cache_1_shift                   (2)
#define  NNWP_drf_test_resume_drf_test_resume_conv_core_0_shift                  (1)
#define  NNWP_drf_test_resume_drf_test_resume_conv_core_1_shift                  (0)
#define  NNWP_drf_test_resume_drf_test_resume_ffm_mask                           (0x00002000)
#define  NNWP_drf_test_resume_drf_test_resume_core_a_mask                        (0x00001000)
#define  NNWP_drf_test_resume_drf_test_resume_group_ctrl_2p_mask                 (0x00000800)
#define  NNWP_drf_test_resume_drf_test_resume_group_ctrl_1p_mask                 (0x00000400)
#define  NNWP_drf_test_resume_drf_test_resume_merge_mask                         (0x00000200)
#define  NNWP_drf_test_resume_drf_test_resume_gc_sh_nn_cache_mask                (0x00000100)
#define  NNWP_drf_test_resume_drf_test_resume_conv_out_fifo_mask                 (0x00000080)
#define  NNWP_drf_test_resume_drf_test_resume_backend_merger_mask                (0x00000040)
#define  NNWP_drf_test_resume_drf_test_resume_tp_0_mask                          (0x00000020)
#define  NNWP_drf_test_resume_drf_test_resume_wrapper_mask                       (0x00000010)
#define  NNWP_drf_test_resume_drf_test_resume_us_cache_0_mask                    (0x00000008)
#define  NNWP_drf_test_resume_drf_test_resume_us_cache_1_mask                    (0x00000004)
#define  NNWP_drf_test_resume_drf_test_resume_conv_core_0_mask                   (0x00000002)
#define  NNWP_drf_test_resume_drf_test_resume_conv_core_1_mask                   (0x00000001)
#define  NNWP_drf_test_resume_drf_test_resume_ffm(data)                          (0x00002000&((data)<<13))
#define  NNWP_drf_test_resume_drf_test_resume_core_a(data)                       (0x00001000&((data)<<12))
#define  NNWP_drf_test_resume_drf_test_resume_group_ctrl_2p(data)                (0x00000800&((data)<<11))
#define  NNWP_drf_test_resume_drf_test_resume_group_ctrl_1p(data)                (0x00000400&((data)<<10))
#define  NNWP_drf_test_resume_drf_test_resume_merge(data)                        (0x00000200&((data)<<9))
#define  NNWP_drf_test_resume_drf_test_resume_gc_sh_nn_cache(data)               (0x00000100&((data)<<8))
#define  NNWP_drf_test_resume_drf_test_resume_conv_out_fifo(data)                (0x00000080&((data)<<7))
#define  NNWP_drf_test_resume_drf_test_resume_backend_merger(data)               (0x00000040&((data)<<6))
#define  NNWP_drf_test_resume_drf_test_resume_tp_0(data)                         (0x00000020&((data)<<5))
#define  NNWP_drf_test_resume_drf_test_resume_wrapper(data)                      (0x00000010&((data)<<4))
#define  NNWP_drf_test_resume_drf_test_resume_us_cache_0(data)                   (0x00000008&((data)<<3))
#define  NNWP_drf_test_resume_drf_test_resume_us_cache_1(data)                   (0x00000004&((data)<<2))
#define  NNWP_drf_test_resume_drf_test_resume_conv_core_0(data)                  (0x00000002&((data)<<1))
#define  NNWP_drf_test_resume_drf_test_resume_conv_core_1(data)                  (0x00000001&(data))
#define  NNWP_drf_test_resume_get_drf_test_resume_ffm(data)                      ((0x00002000&(data))>>13)
#define  NNWP_drf_test_resume_get_drf_test_resume_core_a(data)                   ((0x00001000&(data))>>12)
#define  NNWP_drf_test_resume_get_drf_test_resume_group_ctrl_2p(data)            ((0x00000800&(data))>>11)
#define  NNWP_drf_test_resume_get_drf_test_resume_group_ctrl_1p(data)            ((0x00000400&(data))>>10)
#define  NNWP_drf_test_resume_get_drf_test_resume_merge(data)                    ((0x00000200&(data))>>9)
#define  NNWP_drf_test_resume_get_drf_test_resume_gc_sh_nn_cache(data)           ((0x00000100&(data))>>8)
#define  NNWP_drf_test_resume_get_drf_test_resume_conv_out_fifo(data)            ((0x00000080&(data))>>7)
#define  NNWP_drf_test_resume_get_drf_test_resume_backend_merger(data)           ((0x00000040&(data))>>6)
#define  NNWP_drf_test_resume_get_drf_test_resume_tp_0(data)                     ((0x00000020&(data))>>5)
#define  NNWP_drf_test_resume_get_drf_test_resume_wrapper(data)                  ((0x00000010&(data))>>4)
#define  NNWP_drf_test_resume_get_drf_test_resume_us_cache_0(data)               ((0x00000008&(data))>>3)
#define  NNWP_drf_test_resume_get_drf_test_resume_us_cache_1(data)               ((0x00000004&(data))>>2)
#define  NNWP_drf_test_resume_get_drf_test_resume_conv_core_0(data)              ((0x00000002&(data))>>1)
#define  NNWP_drf_test_resume_get_drf_test_resume_conv_core_1(data)              (0x00000001&(data))

#define  NNWP_drf_bist_done                                                     0x18076550
#define  NNWP_drf_bist_done_reg_addr                                             "0xB8076550"
#define  NNWP_drf_bist_done_reg                                                  0xB8076550
#define  NNWP_drf_bist_done_inst_addr                                            "0x0021"
#define  set_NNWP_drf_bist_done_reg(data)                                        (*((volatile unsigned int*)NNWP_drf_bist_done_reg)=data)
#define  get_NNWP_drf_bist_done_reg                                              (*((volatile unsigned int*)NNWP_drf_bist_done_reg))
#define  NNWP_drf_bist_done_drf_bist_done_ffm_shift                              (13)
#define  NNWP_drf_bist_done_drf_bist_done_core_a_shift                           (12)
#define  NNWP_drf_bist_done_drf_bist_done_group_ctrl_2p_shift                    (11)
#define  NNWP_drf_bist_done_drf_bist_done_group_ctrl_1p_shift                    (10)
#define  NNWP_drf_bist_done_drf_bist_done_merge_shift                            (9)
#define  NNWP_drf_bist_done_drf_bist_done_gc_sh_nn_cache_shift                   (8)
#define  NNWP_drf_bist_done_drf_bist_done_conv_out_fifo_shift                    (7)
#define  NNWP_drf_bist_done_drf_bist_done_backend_merger_shift                   (6)
#define  NNWP_drf_bist_done_drf_bist_done_tp_0_shift                             (5)
#define  NNWP_drf_bist_done_drf_bist_done_wrapper_shift                          (4)
#define  NNWP_drf_bist_done_drf_bist_done_us_cache_0_shift                       (3)
#define  NNWP_drf_bist_done_drf_bist_done_us_cache_1_shift                       (2)
#define  NNWP_drf_bist_done_drf_bist_done_conv_core_0_shift                      (1)
#define  NNWP_drf_bist_done_drf_bist_done_conv_core_1_shift                      (0)
#define  NNWP_drf_bist_done_drf_bist_done_ffm_mask                               (0x00002000)
#define  NNWP_drf_bist_done_drf_bist_done_core_a_mask                            (0x00001000)
#define  NNWP_drf_bist_done_drf_bist_done_group_ctrl_2p_mask                     (0x00000800)
#define  NNWP_drf_bist_done_drf_bist_done_group_ctrl_1p_mask                     (0x00000400)
#define  NNWP_drf_bist_done_drf_bist_done_merge_mask                             (0x00000200)
#define  NNWP_drf_bist_done_drf_bist_done_gc_sh_nn_cache_mask                    (0x00000100)
#define  NNWP_drf_bist_done_drf_bist_done_conv_out_fifo_mask                     (0x00000080)
#define  NNWP_drf_bist_done_drf_bist_done_backend_merger_mask                    (0x00000040)
#define  NNWP_drf_bist_done_drf_bist_done_tp_0_mask                              (0x00000020)
#define  NNWP_drf_bist_done_drf_bist_done_wrapper_mask                           (0x00000010)
#define  NNWP_drf_bist_done_drf_bist_done_us_cache_0_mask                        (0x00000008)
#define  NNWP_drf_bist_done_drf_bist_done_us_cache_1_mask                        (0x00000004)
#define  NNWP_drf_bist_done_drf_bist_done_conv_core_0_mask                       (0x00000002)
#define  NNWP_drf_bist_done_drf_bist_done_conv_core_1_mask                       (0x00000001)
#define  NNWP_drf_bist_done_drf_bist_done_ffm(data)                              (0x00002000&((data)<<13))
#define  NNWP_drf_bist_done_drf_bist_done_core_a(data)                           (0x00001000&((data)<<12))
#define  NNWP_drf_bist_done_drf_bist_done_group_ctrl_2p(data)                    (0x00000800&((data)<<11))
#define  NNWP_drf_bist_done_drf_bist_done_group_ctrl_1p(data)                    (0x00000400&((data)<<10))
#define  NNWP_drf_bist_done_drf_bist_done_merge(data)                            (0x00000200&((data)<<9))
#define  NNWP_drf_bist_done_drf_bist_done_gc_sh_nn_cache(data)                   (0x00000100&((data)<<8))
#define  NNWP_drf_bist_done_drf_bist_done_conv_out_fifo(data)                    (0x00000080&((data)<<7))
#define  NNWP_drf_bist_done_drf_bist_done_backend_merger(data)                   (0x00000040&((data)<<6))
#define  NNWP_drf_bist_done_drf_bist_done_tp_0(data)                             (0x00000020&((data)<<5))
#define  NNWP_drf_bist_done_drf_bist_done_wrapper(data)                          (0x00000010&((data)<<4))
#define  NNWP_drf_bist_done_drf_bist_done_us_cache_0(data)                       (0x00000008&((data)<<3))
#define  NNWP_drf_bist_done_drf_bist_done_us_cache_1(data)                       (0x00000004&((data)<<2))
#define  NNWP_drf_bist_done_drf_bist_done_conv_core_0(data)                      (0x00000002&((data)<<1))
#define  NNWP_drf_bist_done_drf_bist_done_conv_core_1(data)                      (0x00000001&(data))
#define  NNWP_drf_bist_done_get_drf_bist_done_ffm(data)                          ((0x00002000&(data))>>13)
#define  NNWP_drf_bist_done_get_drf_bist_done_core_a(data)                       ((0x00001000&(data))>>12)
#define  NNWP_drf_bist_done_get_drf_bist_done_group_ctrl_2p(data)                ((0x00000800&(data))>>11)
#define  NNWP_drf_bist_done_get_drf_bist_done_group_ctrl_1p(data)                ((0x00000400&(data))>>10)
#define  NNWP_drf_bist_done_get_drf_bist_done_merge(data)                        ((0x00000200&(data))>>9)
#define  NNWP_drf_bist_done_get_drf_bist_done_gc_sh_nn_cache(data)               ((0x00000100&(data))>>8)
#define  NNWP_drf_bist_done_get_drf_bist_done_conv_out_fifo(data)                ((0x00000080&(data))>>7)
#define  NNWP_drf_bist_done_get_drf_bist_done_backend_merger(data)               ((0x00000040&(data))>>6)
#define  NNWP_drf_bist_done_get_drf_bist_done_tp_0(data)                         ((0x00000020&(data))>>5)
#define  NNWP_drf_bist_done_get_drf_bist_done_wrapper(data)                      ((0x00000010&(data))>>4)
#define  NNWP_drf_bist_done_get_drf_bist_done_us_cache_0(data)                   ((0x00000008&(data))>>3)
#define  NNWP_drf_bist_done_get_drf_bist_done_us_cache_1(data)                   ((0x00000004&(data))>>2)
#define  NNWP_drf_bist_done_get_drf_bist_done_conv_core_0(data)                  ((0x00000002&(data))>>1)
#define  NNWP_drf_bist_done_get_drf_bist_done_conv_core_1(data)                  (0x00000001&(data))

#define  NNWP_bist_fail_group                                                   0x18076560
#define  NNWP_bist_fail_group_reg_addr                                           "0xB8076560"
#define  NNWP_bist_fail_group_reg                                                0xB8076560
#define  NNWP_bist_fail_group_inst_addr                                          "0x0022"
#define  set_NNWP_bist_fail_group_reg(data)                                      (*((volatile unsigned int*)NNWP_bist_fail_group_reg)=data)
#define  get_NNWP_bist_fail_group_reg                                            (*((volatile unsigned int*)NNWP_bist_fail_group_reg))
#define  NNWP_bist_fail_group_bist_fail_group_ffm_shift                          (13)
#define  NNWP_bist_fail_group_bist_fail_group_core_a_shift                       (12)
#define  NNWP_bist_fail_group_bist_fail_group_group_ctrl_2p_shift                (11)
#define  NNWP_bist_fail_group_bist_fail_group_group_ctrl_1p_shift                (10)
#define  NNWP_bist_fail_group_bist_fail_group_merge_shift                        (9)
#define  NNWP_bist_fail_group_bist_fail_group_gc_sh_nn_cache_shift               (8)
#define  NNWP_bist_fail_group_bist_fail_group_conv_out_fifo_shift                (7)
#define  NNWP_bist_fail_group_bist_fail_group_backend_merger_shift               (6)
#define  NNWP_bist_fail_group_bist_fail_group_tp_0_shift                         (5)
#define  NNWP_bist_fail_group_bist_fail_group_wrapper_shift                      (4)
#define  NNWP_bist_fail_group_bist_fail_group_us_cache_0_shift                   (3)
#define  NNWP_bist_fail_group_bist_fail_group_us_cache_1_shift                   (2)
#define  NNWP_bist_fail_group_bist_fail_group_conv_core_0_shift                  (1)
#define  NNWP_bist_fail_group_bist_fail_group_conv_core_1_shift                  (0)
#define  NNWP_bist_fail_group_bist_fail_group_ffm_mask                           (0x00002000)
#define  NNWP_bist_fail_group_bist_fail_group_core_a_mask                        (0x00001000)
#define  NNWP_bist_fail_group_bist_fail_group_group_ctrl_2p_mask                 (0x00000800)
#define  NNWP_bist_fail_group_bist_fail_group_group_ctrl_1p_mask                 (0x00000400)
#define  NNWP_bist_fail_group_bist_fail_group_merge_mask                         (0x00000200)
#define  NNWP_bist_fail_group_bist_fail_group_gc_sh_nn_cache_mask                (0x00000100)
#define  NNWP_bist_fail_group_bist_fail_group_conv_out_fifo_mask                 (0x00000080)
#define  NNWP_bist_fail_group_bist_fail_group_backend_merger_mask                (0x00000040)
#define  NNWP_bist_fail_group_bist_fail_group_tp_0_mask                          (0x00000020)
#define  NNWP_bist_fail_group_bist_fail_group_wrapper_mask                       (0x00000010)
#define  NNWP_bist_fail_group_bist_fail_group_us_cache_0_mask                    (0x00000008)
#define  NNWP_bist_fail_group_bist_fail_group_us_cache_1_mask                    (0x00000004)
#define  NNWP_bist_fail_group_bist_fail_group_conv_core_0_mask                   (0x00000002)
#define  NNWP_bist_fail_group_bist_fail_group_conv_core_1_mask                   (0x00000001)
#define  NNWP_bist_fail_group_bist_fail_group_ffm(data)                          (0x00002000&((data)<<13))
#define  NNWP_bist_fail_group_bist_fail_group_core_a(data)                       (0x00001000&((data)<<12))
#define  NNWP_bist_fail_group_bist_fail_group_group_ctrl_2p(data)                (0x00000800&((data)<<11))
#define  NNWP_bist_fail_group_bist_fail_group_group_ctrl_1p(data)                (0x00000400&((data)<<10))
#define  NNWP_bist_fail_group_bist_fail_group_merge(data)                        (0x00000200&((data)<<9))
#define  NNWP_bist_fail_group_bist_fail_group_gc_sh_nn_cache(data)               (0x00000100&((data)<<8))
#define  NNWP_bist_fail_group_bist_fail_group_conv_out_fifo(data)                (0x00000080&((data)<<7))
#define  NNWP_bist_fail_group_bist_fail_group_backend_merger(data)               (0x00000040&((data)<<6))
#define  NNWP_bist_fail_group_bist_fail_group_tp_0(data)                         (0x00000020&((data)<<5))
#define  NNWP_bist_fail_group_bist_fail_group_wrapper(data)                      (0x00000010&((data)<<4))
#define  NNWP_bist_fail_group_bist_fail_group_us_cache_0(data)                   (0x00000008&((data)<<3))
#define  NNWP_bist_fail_group_bist_fail_group_us_cache_1(data)                   (0x00000004&((data)<<2))
#define  NNWP_bist_fail_group_bist_fail_group_conv_core_0(data)                  (0x00000002&((data)<<1))
#define  NNWP_bist_fail_group_bist_fail_group_conv_core_1(data)                  (0x00000001&(data))
#define  NNWP_bist_fail_group_get_bist_fail_group_ffm(data)                      ((0x00002000&(data))>>13)
#define  NNWP_bist_fail_group_get_bist_fail_group_core_a(data)                   ((0x00001000&(data))>>12)
#define  NNWP_bist_fail_group_get_bist_fail_group_group_ctrl_2p(data)            ((0x00000800&(data))>>11)
#define  NNWP_bist_fail_group_get_bist_fail_group_group_ctrl_1p(data)            ((0x00000400&(data))>>10)
#define  NNWP_bist_fail_group_get_bist_fail_group_merge(data)                    ((0x00000200&(data))>>9)
#define  NNWP_bist_fail_group_get_bist_fail_group_gc_sh_nn_cache(data)           ((0x00000100&(data))>>8)
#define  NNWP_bist_fail_group_get_bist_fail_group_conv_out_fifo(data)            ((0x00000080&(data))>>7)
#define  NNWP_bist_fail_group_get_bist_fail_group_backend_merger(data)           ((0x00000040&(data))>>6)
#define  NNWP_bist_fail_group_get_bist_fail_group_tp_0(data)                     ((0x00000020&(data))>>5)
#define  NNWP_bist_fail_group_get_bist_fail_group_wrapper(data)                  ((0x00000010&(data))>>4)
#define  NNWP_bist_fail_group_get_bist_fail_group_us_cache_0(data)               ((0x00000008&(data))>>3)
#define  NNWP_bist_fail_group_get_bist_fail_group_us_cache_1(data)               ((0x00000004&(data))>>2)
#define  NNWP_bist_fail_group_get_bist_fail_group_conv_core_0(data)              ((0x00000002&(data))>>1)
#define  NNWP_bist_fail_group_get_bist_fail_group_conv_core_1(data)              (0x00000001&(data))

#define  NNWP_bist_fail_0                                                       0x18076564
#define  NNWP_bist_fail_0_reg_addr                                               "0xB8076564"
#define  NNWP_bist_fail_0_reg                                                    0xB8076564
#define  NNWP_bist_fail_0_inst_addr                                              "0x0023"
#define  set_NNWP_bist_fail_0_reg(data)                                          (*((volatile unsigned int*)NNWP_bist_fail_0_reg)=data)
#define  get_NNWP_bist_fail_0_reg                                                (*((volatile unsigned int*)NNWP_bist_fail_0_reg))
#define  NNWP_bist_fail_0_bist_fail_backend_merger_2_shift                       (31)
#define  NNWP_bist_fail_0_bist_fail_backend_merger_1_shift                       (30)
#define  NNWP_bist_fail_0_bist_fail_backend_merger_0_shift                       (29)
#define  NNWP_bist_fail_0_bist_fail_merge_6_shift                                (28)
#define  NNWP_bist_fail_0_bist_fail_merge_5_shift                                (27)
#define  NNWP_bist_fail_0_bist_fail_merge_4_shift                                (26)
#define  NNWP_bist_fail_0_bist_fail_merge_3_shift                                (25)
#define  NNWP_bist_fail_0_bist_fail_merge_2_shift                                (24)
#define  NNWP_bist_fail_0_bist_fail_merge_1_shift                                (23)
#define  NNWP_bist_fail_0_bist_fail_merge_0_shift                                (22)
#define  NNWP_bist_fail_0_bist_fail_group_ctrl_1p_2_shift                        (21)
#define  NNWP_bist_fail_0_bist_fail_group_ctrl_1p_1_shift                        (20)
#define  NNWP_bist_fail_0_bist_fail_group_ctrl_1p_0_shift                        (19)
#define  NNWP_bist_fail_0_bist_fail_group_ctrl_2p_3_shift                        (18)
#define  NNWP_bist_fail_0_bist_fail_group_ctrl_2p_2_shift                        (17)
#define  NNWP_bist_fail_0_bist_fail_group_ctrl_2p_1_shift                        (16)
#define  NNWP_bist_fail_0_bist_fail_group_ctrl_2p_0_shift                        (15)
#define  NNWP_bist_fail_0_bist_fail_core_a_9_shift                               (14)
#define  NNWP_bist_fail_0_bist_fail_core_a_8_shift                               (13)
#define  NNWP_bist_fail_0_bist_fail_core_a_7_shift                               (12)
#define  NNWP_bist_fail_0_bist_fail_core_a_6_shift                               (11)
#define  NNWP_bist_fail_0_bist_fail_core_a_5_shift                               (10)
#define  NNWP_bist_fail_0_bist_fail_core_a_4_shift                               (9)
#define  NNWP_bist_fail_0_bist_fail_core_a_3_shift                               (8)
#define  NNWP_bist_fail_0_bist_fail_core_a_2_shift                               (7)
#define  NNWP_bist_fail_0_bist_fail_core_a_1_shift                               (6)
#define  NNWP_bist_fail_0_bist_fail_core_a_0_shift                               (5)
#define  NNWP_bist_fail_0_bist_fail_ffm_4_shift                                  (4)
#define  NNWP_bist_fail_0_bist_fail_ffm_3_shift                                  (3)
#define  NNWP_bist_fail_0_bist_fail_ffm_2_shift                                  (2)
#define  NNWP_bist_fail_0_bist_fail_ffm_1_shift                                  (1)
#define  NNWP_bist_fail_0_bist_fail_ffm_0_shift                                  (0)
#define  NNWP_bist_fail_0_bist_fail_backend_merger_2_mask                        (0x80000000)
#define  NNWP_bist_fail_0_bist_fail_backend_merger_1_mask                        (0x40000000)
#define  NNWP_bist_fail_0_bist_fail_backend_merger_0_mask                        (0x20000000)
#define  NNWP_bist_fail_0_bist_fail_merge_6_mask                                 (0x10000000)
#define  NNWP_bist_fail_0_bist_fail_merge_5_mask                                 (0x08000000)
#define  NNWP_bist_fail_0_bist_fail_merge_4_mask                                 (0x04000000)
#define  NNWP_bist_fail_0_bist_fail_merge_3_mask                                 (0x02000000)
#define  NNWP_bist_fail_0_bist_fail_merge_2_mask                                 (0x01000000)
#define  NNWP_bist_fail_0_bist_fail_merge_1_mask                                 (0x00800000)
#define  NNWP_bist_fail_0_bist_fail_merge_0_mask                                 (0x00400000)
#define  NNWP_bist_fail_0_bist_fail_group_ctrl_1p_2_mask                         (0x00200000)
#define  NNWP_bist_fail_0_bist_fail_group_ctrl_1p_1_mask                         (0x00100000)
#define  NNWP_bist_fail_0_bist_fail_group_ctrl_1p_0_mask                         (0x00080000)
#define  NNWP_bist_fail_0_bist_fail_group_ctrl_2p_3_mask                         (0x00040000)
#define  NNWP_bist_fail_0_bist_fail_group_ctrl_2p_2_mask                         (0x00020000)
#define  NNWP_bist_fail_0_bist_fail_group_ctrl_2p_1_mask                         (0x00010000)
#define  NNWP_bist_fail_0_bist_fail_group_ctrl_2p_0_mask                         (0x00008000)
#define  NNWP_bist_fail_0_bist_fail_core_a_9_mask                                (0x00004000)
#define  NNWP_bist_fail_0_bist_fail_core_a_8_mask                                (0x00002000)
#define  NNWP_bist_fail_0_bist_fail_core_a_7_mask                                (0x00001000)
#define  NNWP_bist_fail_0_bist_fail_core_a_6_mask                                (0x00000800)
#define  NNWP_bist_fail_0_bist_fail_core_a_5_mask                                (0x00000400)
#define  NNWP_bist_fail_0_bist_fail_core_a_4_mask                                (0x00000200)
#define  NNWP_bist_fail_0_bist_fail_core_a_3_mask                                (0x00000100)
#define  NNWP_bist_fail_0_bist_fail_core_a_2_mask                                (0x00000080)
#define  NNWP_bist_fail_0_bist_fail_core_a_1_mask                                (0x00000040)
#define  NNWP_bist_fail_0_bist_fail_core_a_0_mask                                (0x00000020)
#define  NNWP_bist_fail_0_bist_fail_ffm_4_mask                                   (0x00000010)
#define  NNWP_bist_fail_0_bist_fail_ffm_3_mask                                   (0x00000008)
#define  NNWP_bist_fail_0_bist_fail_ffm_2_mask                                   (0x00000004)
#define  NNWP_bist_fail_0_bist_fail_ffm_1_mask                                   (0x00000002)
#define  NNWP_bist_fail_0_bist_fail_ffm_0_mask                                   (0x00000001)
#define  NNWP_bist_fail_0_bist_fail_backend_merger_2(data)                       (0x80000000&((data)<<31))
#define  NNWP_bist_fail_0_bist_fail_backend_merger_1(data)                       (0x40000000&((data)<<30))
#define  NNWP_bist_fail_0_bist_fail_backend_merger_0(data)                       (0x20000000&((data)<<29))
#define  NNWP_bist_fail_0_bist_fail_merge_6(data)                                (0x10000000&((data)<<28))
#define  NNWP_bist_fail_0_bist_fail_merge_5(data)                                (0x08000000&((data)<<27))
#define  NNWP_bist_fail_0_bist_fail_merge_4(data)                                (0x04000000&((data)<<26))
#define  NNWP_bist_fail_0_bist_fail_merge_3(data)                                (0x02000000&((data)<<25))
#define  NNWP_bist_fail_0_bist_fail_merge_2(data)                                (0x01000000&((data)<<24))
#define  NNWP_bist_fail_0_bist_fail_merge_1(data)                                (0x00800000&((data)<<23))
#define  NNWP_bist_fail_0_bist_fail_merge_0(data)                                (0x00400000&((data)<<22))
#define  NNWP_bist_fail_0_bist_fail_group_ctrl_1p_2(data)                        (0x00200000&((data)<<21))
#define  NNWP_bist_fail_0_bist_fail_group_ctrl_1p_1(data)                        (0x00100000&((data)<<20))
#define  NNWP_bist_fail_0_bist_fail_group_ctrl_1p_0(data)                        (0x00080000&((data)<<19))
#define  NNWP_bist_fail_0_bist_fail_group_ctrl_2p_3(data)                        (0x00040000&((data)<<18))
#define  NNWP_bist_fail_0_bist_fail_group_ctrl_2p_2(data)                        (0x00020000&((data)<<17))
#define  NNWP_bist_fail_0_bist_fail_group_ctrl_2p_1(data)                        (0x00010000&((data)<<16))
#define  NNWP_bist_fail_0_bist_fail_group_ctrl_2p_0(data)                        (0x00008000&((data)<<15))
#define  NNWP_bist_fail_0_bist_fail_core_a_9(data)                               (0x00004000&((data)<<14))
#define  NNWP_bist_fail_0_bist_fail_core_a_8(data)                               (0x00002000&((data)<<13))
#define  NNWP_bist_fail_0_bist_fail_core_a_7(data)                               (0x00001000&((data)<<12))
#define  NNWP_bist_fail_0_bist_fail_core_a_6(data)                               (0x00000800&((data)<<11))
#define  NNWP_bist_fail_0_bist_fail_core_a_5(data)                               (0x00000400&((data)<<10))
#define  NNWP_bist_fail_0_bist_fail_core_a_4(data)                               (0x00000200&((data)<<9))
#define  NNWP_bist_fail_0_bist_fail_core_a_3(data)                               (0x00000100&((data)<<8))
#define  NNWP_bist_fail_0_bist_fail_core_a_2(data)                               (0x00000080&((data)<<7))
#define  NNWP_bist_fail_0_bist_fail_core_a_1(data)                               (0x00000040&((data)<<6))
#define  NNWP_bist_fail_0_bist_fail_core_a_0(data)                               (0x00000020&((data)<<5))
#define  NNWP_bist_fail_0_bist_fail_ffm_4(data)                                  (0x00000010&((data)<<4))
#define  NNWP_bist_fail_0_bist_fail_ffm_3(data)                                  (0x00000008&((data)<<3))
#define  NNWP_bist_fail_0_bist_fail_ffm_2(data)                                  (0x00000004&((data)<<2))
#define  NNWP_bist_fail_0_bist_fail_ffm_1(data)                                  (0x00000002&((data)<<1))
#define  NNWP_bist_fail_0_bist_fail_ffm_0(data)                                  (0x00000001&(data))
#define  NNWP_bist_fail_0_get_bist_fail_backend_merger_2(data)                   ((0x80000000&(data))>>31)
#define  NNWP_bist_fail_0_get_bist_fail_backend_merger_1(data)                   ((0x40000000&(data))>>30)
#define  NNWP_bist_fail_0_get_bist_fail_backend_merger_0(data)                   ((0x20000000&(data))>>29)
#define  NNWP_bist_fail_0_get_bist_fail_merge_6(data)                            ((0x10000000&(data))>>28)
#define  NNWP_bist_fail_0_get_bist_fail_merge_5(data)                            ((0x08000000&(data))>>27)
#define  NNWP_bist_fail_0_get_bist_fail_merge_4(data)                            ((0x04000000&(data))>>26)
#define  NNWP_bist_fail_0_get_bist_fail_merge_3(data)                            ((0x02000000&(data))>>25)
#define  NNWP_bist_fail_0_get_bist_fail_merge_2(data)                            ((0x01000000&(data))>>24)
#define  NNWP_bist_fail_0_get_bist_fail_merge_1(data)                            ((0x00800000&(data))>>23)
#define  NNWP_bist_fail_0_get_bist_fail_merge_0(data)                            ((0x00400000&(data))>>22)
#define  NNWP_bist_fail_0_get_bist_fail_group_ctrl_1p_2(data)                    ((0x00200000&(data))>>21)
#define  NNWP_bist_fail_0_get_bist_fail_group_ctrl_1p_1(data)                    ((0x00100000&(data))>>20)
#define  NNWP_bist_fail_0_get_bist_fail_group_ctrl_1p_0(data)                    ((0x00080000&(data))>>19)
#define  NNWP_bist_fail_0_get_bist_fail_group_ctrl_2p_3(data)                    ((0x00040000&(data))>>18)
#define  NNWP_bist_fail_0_get_bist_fail_group_ctrl_2p_2(data)                    ((0x00020000&(data))>>17)
#define  NNWP_bist_fail_0_get_bist_fail_group_ctrl_2p_1(data)                    ((0x00010000&(data))>>16)
#define  NNWP_bist_fail_0_get_bist_fail_group_ctrl_2p_0(data)                    ((0x00008000&(data))>>15)
#define  NNWP_bist_fail_0_get_bist_fail_core_a_9(data)                           ((0x00004000&(data))>>14)
#define  NNWP_bist_fail_0_get_bist_fail_core_a_8(data)                           ((0x00002000&(data))>>13)
#define  NNWP_bist_fail_0_get_bist_fail_core_a_7(data)                           ((0x00001000&(data))>>12)
#define  NNWP_bist_fail_0_get_bist_fail_core_a_6(data)                           ((0x00000800&(data))>>11)
#define  NNWP_bist_fail_0_get_bist_fail_core_a_5(data)                           ((0x00000400&(data))>>10)
#define  NNWP_bist_fail_0_get_bist_fail_core_a_4(data)                           ((0x00000200&(data))>>9)
#define  NNWP_bist_fail_0_get_bist_fail_core_a_3(data)                           ((0x00000100&(data))>>8)
#define  NNWP_bist_fail_0_get_bist_fail_core_a_2(data)                           ((0x00000080&(data))>>7)
#define  NNWP_bist_fail_0_get_bist_fail_core_a_1(data)                           ((0x00000040&(data))>>6)
#define  NNWP_bist_fail_0_get_bist_fail_core_a_0(data)                           ((0x00000020&(data))>>5)
#define  NNWP_bist_fail_0_get_bist_fail_ffm_4(data)                              ((0x00000010&(data))>>4)
#define  NNWP_bist_fail_0_get_bist_fail_ffm_3(data)                              ((0x00000008&(data))>>3)
#define  NNWP_bist_fail_0_get_bist_fail_ffm_2(data)                              ((0x00000004&(data))>>2)
#define  NNWP_bist_fail_0_get_bist_fail_ffm_1(data)                              ((0x00000002&(data))>>1)
#define  NNWP_bist_fail_0_get_bist_fail_ffm_0(data)                              (0x00000001&(data))

#define  NNWP_bist_fail_1                                                       0x18076568
#define  NNWP_bist_fail_1_reg_addr                                               "0xB8076568"
#define  NNWP_bist_fail_1_reg                                                    0xB8076568
#define  NNWP_bist_fail_1_inst_addr                                              "0x0024"
#define  set_NNWP_bist_fail_1_reg(data)                                          (*((volatile unsigned int*)NNWP_bist_fail_1_reg)=data)
#define  get_NNWP_bist_fail_1_reg                                                (*((volatile unsigned int*)NNWP_bist_fail_1_reg))
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_11_shift                          (31)
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_10_shift                          (30)
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_9_shift                           (29)
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_8_shift                           (28)
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_7_shift                           (27)
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_6_shift                           (26)
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_5_shift                           (25)
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_4_shift                           (24)
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_3_shift                           (23)
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_2_shift                           (22)
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_1_shift                           (21)
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_0_shift                           (20)
#define  NNWP_bist_fail_1_bist_fail_wrapper_shift                                (19)
#define  NNWP_bist_fail_1_bist_fail_tp_0_6_shift                                 (18)
#define  NNWP_bist_fail_1_bist_fail_tp_0_5_shift                                 (17)
#define  NNWP_bist_fail_1_bist_fail_tp_0_4_shift                                 (16)
#define  NNWP_bist_fail_1_bist_fail_tp_0_3_shift                                 (15)
#define  NNWP_bist_fail_1_bist_fail_tp_0_2_shift                                 (14)
#define  NNWP_bist_fail_1_bist_fail_tp_0_1_shift                                 (13)
#define  NNWP_bist_fail_1_bist_fail_tp_0_0_shift                                 (12)
#define  NNWP_bist_fail_1_bist_fail_conv_out_fifo_7_shift                        (11)
#define  NNWP_bist_fail_1_bist_fail_conv_out_fifo_6_shift                        (10)
#define  NNWP_bist_fail_1_bist_fail_conv_out_fifo_5_shift                        (9)
#define  NNWP_bist_fail_1_bist_fail_conv_out_fifo_4_shift                        (8)
#define  NNWP_bist_fail_1_bist_fail_conv_out_fifo_3_shift                        (7)
#define  NNWP_bist_fail_1_bist_fail_conv_out_fifo_2_shift                        (6)
#define  NNWP_bist_fail_1_bist_fail_conv_out_fifo_1_shift                        (5)
#define  NNWP_bist_fail_1_bist_fail_conv_out_fifo_0_shift                        (4)
#define  NNWP_bist_fail_1_bist_fail_gc_sh_nn_cache_3_shift                       (3)
#define  NNWP_bist_fail_1_bist_fail_gc_sh_nn_cache_2_shift                       (2)
#define  NNWP_bist_fail_1_bist_fail_gc_sh_nn_cache_1_shift                       (1)
#define  NNWP_bist_fail_1_bist_fail_gc_sh_nn_cache_0_shift                       (0)
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_11_mask                           (0x80000000)
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_10_mask                           (0x40000000)
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_9_mask                            (0x20000000)
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_8_mask                            (0x10000000)
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_7_mask                            (0x08000000)
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_6_mask                            (0x04000000)
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_5_mask                            (0x02000000)
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_4_mask                            (0x01000000)
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_3_mask                            (0x00800000)
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_2_mask                            (0x00400000)
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_1_mask                            (0x00200000)
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_0_mask                            (0x00100000)
#define  NNWP_bist_fail_1_bist_fail_wrapper_mask                                 (0x00080000)
#define  NNWP_bist_fail_1_bist_fail_tp_0_6_mask                                  (0x00040000)
#define  NNWP_bist_fail_1_bist_fail_tp_0_5_mask                                  (0x00020000)
#define  NNWP_bist_fail_1_bist_fail_tp_0_4_mask                                  (0x00010000)
#define  NNWP_bist_fail_1_bist_fail_tp_0_3_mask                                  (0x00008000)
#define  NNWP_bist_fail_1_bist_fail_tp_0_2_mask                                  (0x00004000)
#define  NNWP_bist_fail_1_bist_fail_tp_0_1_mask                                  (0x00002000)
#define  NNWP_bist_fail_1_bist_fail_tp_0_0_mask                                  (0x00001000)
#define  NNWP_bist_fail_1_bist_fail_conv_out_fifo_7_mask                         (0x00000800)
#define  NNWP_bist_fail_1_bist_fail_conv_out_fifo_6_mask                         (0x00000400)
#define  NNWP_bist_fail_1_bist_fail_conv_out_fifo_5_mask                         (0x00000200)
#define  NNWP_bist_fail_1_bist_fail_conv_out_fifo_4_mask                         (0x00000100)
#define  NNWP_bist_fail_1_bist_fail_conv_out_fifo_3_mask                         (0x00000080)
#define  NNWP_bist_fail_1_bist_fail_conv_out_fifo_2_mask                         (0x00000040)
#define  NNWP_bist_fail_1_bist_fail_conv_out_fifo_1_mask                         (0x00000020)
#define  NNWP_bist_fail_1_bist_fail_conv_out_fifo_0_mask                         (0x00000010)
#define  NNWP_bist_fail_1_bist_fail_gc_sh_nn_cache_3_mask                        (0x00000008)
#define  NNWP_bist_fail_1_bist_fail_gc_sh_nn_cache_2_mask                        (0x00000004)
#define  NNWP_bist_fail_1_bist_fail_gc_sh_nn_cache_1_mask                        (0x00000002)
#define  NNWP_bist_fail_1_bist_fail_gc_sh_nn_cache_0_mask                        (0x00000001)
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_11(data)                          (0x80000000&((data)<<31))
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_10(data)                          (0x40000000&((data)<<30))
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_9(data)                           (0x20000000&((data)<<29))
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_8(data)                           (0x10000000&((data)<<28))
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_7(data)                           (0x08000000&((data)<<27))
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_6(data)                           (0x04000000&((data)<<26))
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_5(data)                           (0x02000000&((data)<<25))
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_4(data)                           (0x01000000&((data)<<24))
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_3(data)                           (0x00800000&((data)<<23))
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_2(data)                           (0x00400000&((data)<<22))
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_1(data)                           (0x00200000&((data)<<21))
#define  NNWP_bist_fail_1_bist_fail_us_cache_0_0(data)                           (0x00100000&((data)<<20))
#define  NNWP_bist_fail_1_bist_fail_wrapper(data)                                (0x00080000&((data)<<19))
#define  NNWP_bist_fail_1_bist_fail_tp_0_6(data)                                 (0x00040000&((data)<<18))
#define  NNWP_bist_fail_1_bist_fail_tp_0_5(data)                                 (0x00020000&((data)<<17))
#define  NNWP_bist_fail_1_bist_fail_tp_0_4(data)                                 (0x00010000&((data)<<16))
#define  NNWP_bist_fail_1_bist_fail_tp_0_3(data)                                 (0x00008000&((data)<<15))
#define  NNWP_bist_fail_1_bist_fail_tp_0_2(data)                                 (0x00004000&((data)<<14))
#define  NNWP_bist_fail_1_bist_fail_tp_0_1(data)                                 (0x00002000&((data)<<13))
#define  NNWP_bist_fail_1_bist_fail_tp_0_0(data)                                 (0x00001000&((data)<<12))
#define  NNWP_bist_fail_1_bist_fail_conv_out_fifo_7(data)                        (0x00000800&((data)<<11))
#define  NNWP_bist_fail_1_bist_fail_conv_out_fifo_6(data)                        (0x00000400&((data)<<10))
#define  NNWP_bist_fail_1_bist_fail_conv_out_fifo_5(data)                        (0x00000200&((data)<<9))
#define  NNWP_bist_fail_1_bist_fail_conv_out_fifo_4(data)                        (0x00000100&((data)<<8))
#define  NNWP_bist_fail_1_bist_fail_conv_out_fifo_3(data)                        (0x00000080&((data)<<7))
#define  NNWP_bist_fail_1_bist_fail_conv_out_fifo_2(data)                        (0x00000040&((data)<<6))
#define  NNWP_bist_fail_1_bist_fail_conv_out_fifo_1(data)                        (0x00000020&((data)<<5))
#define  NNWP_bist_fail_1_bist_fail_conv_out_fifo_0(data)                        (0x00000010&((data)<<4))
#define  NNWP_bist_fail_1_bist_fail_gc_sh_nn_cache_3(data)                       (0x00000008&((data)<<3))
#define  NNWP_bist_fail_1_bist_fail_gc_sh_nn_cache_2(data)                       (0x00000004&((data)<<2))
#define  NNWP_bist_fail_1_bist_fail_gc_sh_nn_cache_1(data)                       (0x00000002&((data)<<1))
#define  NNWP_bist_fail_1_bist_fail_gc_sh_nn_cache_0(data)                       (0x00000001&(data))
#define  NNWP_bist_fail_1_get_bist_fail_us_cache_0_11(data)                      ((0x80000000&(data))>>31)
#define  NNWP_bist_fail_1_get_bist_fail_us_cache_0_10(data)                      ((0x40000000&(data))>>30)
#define  NNWP_bist_fail_1_get_bist_fail_us_cache_0_9(data)                       ((0x20000000&(data))>>29)
#define  NNWP_bist_fail_1_get_bist_fail_us_cache_0_8(data)                       ((0x10000000&(data))>>28)
#define  NNWP_bist_fail_1_get_bist_fail_us_cache_0_7(data)                       ((0x08000000&(data))>>27)
#define  NNWP_bist_fail_1_get_bist_fail_us_cache_0_6(data)                       ((0x04000000&(data))>>26)
#define  NNWP_bist_fail_1_get_bist_fail_us_cache_0_5(data)                       ((0x02000000&(data))>>25)
#define  NNWP_bist_fail_1_get_bist_fail_us_cache_0_4(data)                       ((0x01000000&(data))>>24)
#define  NNWP_bist_fail_1_get_bist_fail_us_cache_0_3(data)                       ((0x00800000&(data))>>23)
#define  NNWP_bist_fail_1_get_bist_fail_us_cache_0_2(data)                       ((0x00400000&(data))>>22)
#define  NNWP_bist_fail_1_get_bist_fail_us_cache_0_1(data)                       ((0x00200000&(data))>>21)
#define  NNWP_bist_fail_1_get_bist_fail_us_cache_0_0(data)                       ((0x00100000&(data))>>20)
#define  NNWP_bist_fail_1_get_bist_fail_wrapper(data)                            ((0x00080000&(data))>>19)
#define  NNWP_bist_fail_1_get_bist_fail_tp_0_6(data)                             ((0x00040000&(data))>>18)
#define  NNWP_bist_fail_1_get_bist_fail_tp_0_5(data)                             ((0x00020000&(data))>>17)
#define  NNWP_bist_fail_1_get_bist_fail_tp_0_4(data)                             ((0x00010000&(data))>>16)
#define  NNWP_bist_fail_1_get_bist_fail_tp_0_3(data)                             ((0x00008000&(data))>>15)
#define  NNWP_bist_fail_1_get_bist_fail_tp_0_2(data)                             ((0x00004000&(data))>>14)
#define  NNWP_bist_fail_1_get_bist_fail_tp_0_1(data)                             ((0x00002000&(data))>>13)
#define  NNWP_bist_fail_1_get_bist_fail_tp_0_0(data)                             ((0x00001000&(data))>>12)
#define  NNWP_bist_fail_1_get_bist_fail_conv_out_fifo_7(data)                    ((0x00000800&(data))>>11)
#define  NNWP_bist_fail_1_get_bist_fail_conv_out_fifo_6(data)                    ((0x00000400&(data))>>10)
#define  NNWP_bist_fail_1_get_bist_fail_conv_out_fifo_5(data)                    ((0x00000200&(data))>>9)
#define  NNWP_bist_fail_1_get_bist_fail_conv_out_fifo_4(data)                    ((0x00000100&(data))>>8)
#define  NNWP_bist_fail_1_get_bist_fail_conv_out_fifo_3(data)                    ((0x00000080&(data))>>7)
#define  NNWP_bist_fail_1_get_bist_fail_conv_out_fifo_2(data)                    ((0x00000040&(data))>>6)
#define  NNWP_bist_fail_1_get_bist_fail_conv_out_fifo_1(data)                    ((0x00000020&(data))>>5)
#define  NNWP_bist_fail_1_get_bist_fail_conv_out_fifo_0(data)                    ((0x00000010&(data))>>4)
#define  NNWP_bist_fail_1_get_bist_fail_gc_sh_nn_cache_3(data)                   ((0x00000008&(data))>>3)
#define  NNWP_bist_fail_1_get_bist_fail_gc_sh_nn_cache_2(data)                   ((0x00000004&(data))>>2)
#define  NNWP_bist_fail_1_get_bist_fail_gc_sh_nn_cache_1(data)                   ((0x00000002&(data))>>1)
#define  NNWP_bist_fail_1_get_bist_fail_gc_sh_nn_cache_0(data)                   (0x00000001&(data))

#define  NNWP_bist_fail_2                                                       0x1807656C
#define  NNWP_bist_fail_2_reg_addr                                               "0xB807656C"
#define  NNWP_bist_fail_2_reg                                                    0xB807656C
#define  NNWP_bist_fail_2_inst_addr                                              "0x0025"
#define  set_NNWP_bist_fail_2_reg(data)                                          (*((volatile unsigned int*)NNWP_bist_fail_2_reg)=data)
#define  get_NNWP_bist_fail_2_reg                                                (*((volatile unsigned int*)NNWP_bist_fail_2_reg))
#define  NNWP_bist_fail_2_bist_fail_conv_core_1_7_shift                          (19)
#define  NNWP_bist_fail_2_bist_fail_conv_core_1_6_shift                          (18)
#define  NNWP_bist_fail_2_bist_fail_conv_core_1_5_shift                          (17)
#define  NNWP_bist_fail_2_bist_fail_conv_core_1_4_shift                          (16)
#define  NNWP_bist_fail_2_bist_fail_conv_core_1_3_shift                          (15)
#define  NNWP_bist_fail_2_bist_fail_conv_core_1_2_shift                          (14)
#define  NNWP_bist_fail_2_bist_fail_conv_core_1_1_shift                          (13)
#define  NNWP_bist_fail_2_bist_fail_conv_core_1_0_shift                          (12)
#define  NNWP_bist_fail_2_bist_fail_conv_core_0_7_shift                          (11)
#define  NNWP_bist_fail_2_bist_fail_conv_core_0_6_shift                          (10)
#define  NNWP_bist_fail_2_bist_fail_conv_core_0_5_shift                          (9)
#define  NNWP_bist_fail_2_bist_fail_conv_core_0_4_shift                          (8)
#define  NNWP_bist_fail_2_bist_fail_conv_core_0_3_shift                          (7)
#define  NNWP_bist_fail_2_bist_fail_conv_core_0_2_shift                          (6)
#define  NNWP_bist_fail_2_bist_fail_conv_core_0_1_shift                          (5)
#define  NNWP_bist_fail_2_bist_fail_conv_core_0_0_shift                          (4)
#define  NNWP_bist_fail_2_bist_fail_us_cache_1_3_shift                           (3)
#define  NNWP_bist_fail_2_bist_fail_us_cache_1_2_shift                           (2)
#define  NNWP_bist_fail_2_bist_fail_us_cache_1_1_shift                           (1)
#define  NNWP_bist_fail_2_bist_fail_us_cache_1_0_shift                           (0)
#define  NNWP_bist_fail_2_bist_fail_conv_core_1_7_mask                           (0x00080000)
#define  NNWP_bist_fail_2_bist_fail_conv_core_1_6_mask                           (0x00040000)
#define  NNWP_bist_fail_2_bist_fail_conv_core_1_5_mask                           (0x00020000)
#define  NNWP_bist_fail_2_bist_fail_conv_core_1_4_mask                           (0x00010000)
#define  NNWP_bist_fail_2_bist_fail_conv_core_1_3_mask                           (0x00008000)
#define  NNWP_bist_fail_2_bist_fail_conv_core_1_2_mask                           (0x00004000)
#define  NNWP_bist_fail_2_bist_fail_conv_core_1_1_mask                           (0x00002000)
#define  NNWP_bist_fail_2_bist_fail_conv_core_1_0_mask                           (0x00001000)
#define  NNWP_bist_fail_2_bist_fail_conv_core_0_7_mask                           (0x00000800)
#define  NNWP_bist_fail_2_bist_fail_conv_core_0_6_mask                           (0x00000400)
#define  NNWP_bist_fail_2_bist_fail_conv_core_0_5_mask                           (0x00000200)
#define  NNWP_bist_fail_2_bist_fail_conv_core_0_4_mask                           (0x00000100)
#define  NNWP_bist_fail_2_bist_fail_conv_core_0_3_mask                           (0x00000080)
#define  NNWP_bist_fail_2_bist_fail_conv_core_0_2_mask                           (0x00000040)
#define  NNWP_bist_fail_2_bist_fail_conv_core_0_1_mask                           (0x00000020)
#define  NNWP_bist_fail_2_bist_fail_conv_core_0_0_mask                           (0x00000010)
#define  NNWP_bist_fail_2_bist_fail_us_cache_1_3_mask                            (0x00000008)
#define  NNWP_bist_fail_2_bist_fail_us_cache_1_2_mask                            (0x00000004)
#define  NNWP_bist_fail_2_bist_fail_us_cache_1_1_mask                            (0x00000002)
#define  NNWP_bist_fail_2_bist_fail_us_cache_1_0_mask                            (0x00000001)
#define  NNWP_bist_fail_2_bist_fail_conv_core_1_7(data)                          (0x00080000&((data)<<19))
#define  NNWP_bist_fail_2_bist_fail_conv_core_1_6(data)                          (0x00040000&((data)<<18))
#define  NNWP_bist_fail_2_bist_fail_conv_core_1_5(data)                          (0x00020000&((data)<<17))
#define  NNWP_bist_fail_2_bist_fail_conv_core_1_4(data)                          (0x00010000&((data)<<16))
#define  NNWP_bist_fail_2_bist_fail_conv_core_1_3(data)                          (0x00008000&((data)<<15))
#define  NNWP_bist_fail_2_bist_fail_conv_core_1_2(data)                          (0x00004000&((data)<<14))
#define  NNWP_bist_fail_2_bist_fail_conv_core_1_1(data)                          (0x00002000&((data)<<13))
#define  NNWP_bist_fail_2_bist_fail_conv_core_1_0(data)                          (0x00001000&((data)<<12))
#define  NNWP_bist_fail_2_bist_fail_conv_core_0_7(data)                          (0x00000800&((data)<<11))
#define  NNWP_bist_fail_2_bist_fail_conv_core_0_6(data)                          (0x00000400&((data)<<10))
#define  NNWP_bist_fail_2_bist_fail_conv_core_0_5(data)                          (0x00000200&((data)<<9))
#define  NNWP_bist_fail_2_bist_fail_conv_core_0_4(data)                          (0x00000100&((data)<<8))
#define  NNWP_bist_fail_2_bist_fail_conv_core_0_3(data)                          (0x00000080&((data)<<7))
#define  NNWP_bist_fail_2_bist_fail_conv_core_0_2(data)                          (0x00000040&((data)<<6))
#define  NNWP_bist_fail_2_bist_fail_conv_core_0_1(data)                          (0x00000020&((data)<<5))
#define  NNWP_bist_fail_2_bist_fail_conv_core_0_0(data)                          (0x00000010&((data)<<4))
#define  NNWP_bist_fail_2_bist_fail_us_cache_1_3(data)                           (0x00000008&((data)<<3))
#define  NNWP_bist_fail_2_bist_fail_us_cache_1_2(data)                           (0x00000004&((data)<<2))
#define  NNWP_bist_fail_2_bist_fail_us_cache_1_1(data)                           (0x00000002&((data)<<1))
#define  NNWP_bist_fail_2_bist_fail_us_cache_1_0(data)                           (0x00000001&(data))
#define  NNWP_bist_fail_2_get_bist_fail_conv_core_1_7(data)                      ((0x00080000&(data))>>19)
#define  NNWP_bist_fail_2_get_bist_fail_conv_core_1_6(data)                      ((0x00040000&(data))>>18)
#define  NNWP_bist_fail_2_get_bist_fail_conv_core_1_5(data)                      ((0x00020000&(data))>>17)
#define  NNWP_bist_fail_2_get_bist_fail_conv_core_1_4(data)                      ((0x00010000&(data))>>16)
#define  NNWP_bist_fail_2_get_bist_fail_conv_core_1_3(data)                      ((0x00008000&(data))>>15)
#define  NNWP_bist_fail_2_get_bist_fail_conv_core_1_2(data)                      ((0x00004000&(data))>>14)
#define  NNWP_bist_fail_2_get_bist_fail_conv_core_1_1(data)                      ((0x00002000&(data))>>13)
#define  NNWP_bist_fail_2_get_bist_fail_conv_core_1_0(data)                      ((0x00001000&(data))>>12)
#define  NNWP_bist_fail_2_get_bist_fail_conv_core_0_7(data)                      ((0x00000800&(data))>>11)
#define  NNWP_bist_fail_2_get_bist_fail_conv_core_0_6(data)                      ((0x00000400&(data))>>10)
#define  NNWP_bist_fail_2_get_bist_fail_conv_core_0_5(data)                      ((0x00000200&(data))>>9)
#define  NNWP_bist_fail_2_get_bist_fail_conv_core_0_4(data)                      ((0x00000100&(data))>>8)
#define  NNWP_bist_fail_2_get_bist_fail_conv_core_0_3(data)                      ((0x00000080&(data))>>7)
#define  NNWP_bist_fail_2_get_bist_fail_conv_core_0_2(data)                      ((0x00000040&(data))>>6)
#define  NNWP_bist_fail_2_get_bist_fail_conv_core_0_1(data)                      ((0x00000020&(data))>>5)
#define  NNWP_bist_fail_2_get_bist_fail_conv_core_0_0(data)                      ((0x00000010&(data))>>4)
#define  NNWP_bist_fail_2_get_bist_fail_us_cache_1_3(data)                       ((0x00000008&(data))>>3)
#define  NNWP_bist_fail_2_get_bist_fail_us_cache_1_2(data)                       ((0x00000004&(data))>>2)
#define  NNWP_bist_fail_2_get_bist_fail_us_cache_1_1(data)                       ((0x00000002&(data))>>1)
#define  NNWP_bist_fail_2_get_bist_fail_us_cache_1_0(data)                       (0x00000001&(data))

#define  NNWP_drf_bist_fail_group                                               0x18076570
#define  NNWP_drf_bist_fail_group_reg_addr                                       "0xB8076570"
#define  NNWP_drf_bist_fail_group_reg                                            0xB8076570
#define  NNWP_drf_bist_fail_group_inst_addr                                      "0x0026"
#define  set_NNWP_drf_bist_fail_group_reg(data)                                  (*((volatile unsigned int*)NNWP_drf_bist_fail_group_reg)=data)
#define  get_NNWP_drf_bist_fail_group_reg                                        (*((volatile unsigned int*)NNWP_drf_bist_fail_group_reg))
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_ffm_shift                  (13)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_core_a_shift               (12)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_group_ctrl_2p_shift        (11)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_group_ctrl_1p_shift        (10)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_merge_shift                (9)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_gc_sh_nn_cache_shift       (8)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_conv_out_fifo_shift        (7)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_backend_merger_shift       (6)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_tp_0_shift                 (5)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_wrapper_shift              (4)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_us_cache_0_shift           (3)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_us_cache_1_shift           (2)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_conv_core_0_shift          (1)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_conv_core_1_shift          (0)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_ffm_mask                   (0x00002000)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_core_a_mask                (0x00001000)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_group_ctrl_2p_mask         (0x00000800)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_group_ctrl_1p_mask         (0x00000400)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_merge_mask                 (0x00000200)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_gc_sh_nn_cache_mask        (0x00000100)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_conv_out_fifo_mask         (0x00000080)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_backend_merger_mask        (0x00000040)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_tp_0_mask                  (0x00000020)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_wrapper_mask               (0x00000010)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_us_cache_0_mask            (0x00000008)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_us_cache_1_mask            (0x00000004)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_conv_core_0_mask           (0x00000002)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_conv_core_1_mask           (0x00000001)
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_ffm(data)                  (0x00002000&((data)<<13))
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_core_a(data)               (0x00001000&((data)<<12))
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_group_ctrl_2p(data)        (0x00000800&((data)<<11))
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_group_ctrl_1p(data)        (0x00000400&((data)<<10))
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_merge(data)                (0x00000200&((data)<<9))
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_gc_sh_nn_cache(data)       (0x00000100&((data)<<8))
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_conv_out_fifo(data)        (0x00000080&((data)<<7))
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_backend_merger(data)       (0x00000040&((data)<<6))
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_tp_0(data)                 (0x00000020&((data)<<5))
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_wrapper(data)              (0x00000010&((data)<<4))
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_us_cache_0(data)           (0x00000008&((data)<<3))
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_us_cache_1(data)           (0x00000004&((data)<<2))
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_conv_core_0(data)          (0x00000002&((data)<<1))
#define  NNWP_drf_bist_fail_group_drf_bist_fail_group_conv_core_1(data)          (0x00000001&(data))
#define  NNWP_drf_bist_fail_group_get_drf_bist_fail_group_ffm(data)              ((0x00002000&(data))>>13)
#define  NNWP_drf_bist_fail_group_get_drf_bist_fail_group_core_a(data)           ((0x00001000&(data))>>12)
#define  NNWP_drf_bist_fail_group_get_drf_bist_fail_group_group_ctrl_2p(data)    ((0x00000800&(data))>>11)
#define  NNWP_drf_bist_fail_group_get_drf_bist_fail_group_group_ctrl_1p(data)    ((0x00000400&(data))>>10)
#define  NNWP_drf_bist_fail_group_get_drf_bist_fail_group_merge(data)            ((0x00000200&(data))>>9)
#define  NNWP_drf_bist_fail_group_get_drf_bist_fail_group_gc_sh_nn_cache(data)   ((0x00000100&(data))>>8)
#define  NNWP_drf_bist_fail_group_get_drf_bist_fail_group_conv_out_fifo(data)    ((0x00000080&(data))>>7)
#define  NNWP_drf_bist_fail_group_get_drf_bist_fail_group_backend_merger(data)   ((0x00000040&(data))>>6)
#define  NNWP_drf_bist_fail_group_get_drf_bist_fail_group_tp_0(data)             ((0x00000020&(data))>>5)
#define  NNWP_drf_bist_fail_group_get_drf_bist_fail_group_wrapper(data)          ((0x00000010&(data))>>4)
#define  NNWP_drf_bist_fail_group_get_drf_bist_fail_group_us_cache_0(data)       ((0x00000008&(data))>>3)
#define  NNWP_drf_bist_fail_group_get_drf_bist_fail_group_us_cache_1(data)       ((0x00000004&(data))>>2)
#define  NNWP_drf_bist_fail_group_get_drf_bist_fail_group_conv_core_0(data)      ((0x00000002&(data))>>1)
#define  NNWP_drf_bist_fail_group_get_drf_bist_fail_group_conv_core_1(data)      (0x00000001&(data))

#define  NNWP_drf_bist_fail_0                                                   0x18076574
#define  NNWP_drf_bist_fail_0_reg_addr                                           "0xB8076574"
#define  NNWP_drf_bist_fail_0_reg                                                0xB8076574
#define  NNWP_drf_bist_fail_0_inst_addr                                          "0x0027"
#define  set_NNWP_drf_bist_fail_0_reg(data)                                      (*((volatile unsigned int*)NNWP_drf_bist_fail_0_reg)=data)
#define  get_NNWP_drf_bist_fail_0_reg                                            (*((volatile unsigned int*)NNWP_drf_bist_fail_0_reg))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_backend_merger_2_shift               (31)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_backend_merger_1_shift               (30)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_backend_merger_0_shift               (29)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_merge_6_shift                        (28)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_merge_5_shift                        (27)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_merge_4_shift                        (26)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_merge_3_shift                        (25)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_merge_2_shift                        (24)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_merge_1_shift                        (23)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_merge_0_shift                        (22)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_group_ctrl_1p_2_shift                (21)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_group_ctrl_1p_1_shift                (20)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_group_ctrl_1p_0_shift                (19)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_group_ctrl_2p_3_shift                (18)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_group_ctrl_2p_2_shift                (17)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_group_ctrl_2p_1_shift                (16)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_group_ctrl_2p_0_shift                (15)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_9_shift                       (14)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_8_shift                       (13)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_7_shift                       (12)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_6_shift                       (11)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_5_shift                       (10)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_4_shift                       (9)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_3_shift                       (8)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_2_shift                       (7)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_1_shift                       (6)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_0_shift                       (5)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_ffm_4_shift                          (4)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_ffm_3_shift                          (3)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_ffm_2_shift                          (2)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_ffm_1_shift                          (1)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_ffm_0_shift                          (0)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_backend_merger_2_mask                (0x80000000)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_backend_merger_1_mask                (0x40000000)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_backend_merger_0_mask                (0x20000000)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_merge_6_mask                         (0x10000000)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_merge_5_mask                         (0x08000000)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_merge_4_mask                         (0x04000000)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_merge_3_mask                         (0x02000000)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_merge_2_mask                         (0x01000000)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_merge_1_mask                         (0x00800000)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_merge_0_mask                         (0x00400000)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_group_ctrl_1p_2_mask                 (0x00200000)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_group_ctrl_1p_1_mask                 (0x00100000)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_group_ctrl_1p_0_mask                 (0x00080000)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_group_ctrl_2p_3_mask                 (0x00040000)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_group_ctrl_2p_2_mask                 (0x00020000)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_group_ctrl_2p_1_mask                 (0x00010000)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_group_ctrl_2p_0_mask                 (0x00008000)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_9_mask                        (0x00004000)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_8_mask                        (0x00002000)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_7_mask                        (0x00001000)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_6_mask                        (0x00000800)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_5_mask                        (0x00000400)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_4_mask                        (0x00000200)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_3_mask                        (0x00000100)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_2_mask                        (0x00000080)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_1_mask                        (0x00000040)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_0_mask                        (0x00000020)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_ffm_4_mask                           (0x00000010)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_ffm_3_mask                           (0x00000008)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_ffm_2_mask                           (0x00000004)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_ffm_1_mask                           (0x00000002)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_ffm_0_mask                           (0x00000001)
#define  NNWP_drf_bist_fail_0_drf_bist_fail_backend_merger_2(data)               (0x80000000&((data)<<31))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_backend_merger_1(data)               (0x40000000&((data)<<30))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_backend_merger_0(data)               (0x20000000&((data)<<29))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_merge_6(data)                        (0x10000000&((data)<<28))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_merge_5(data)                        (0x08000000&((data)<<27))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_merge_4(data)                        (0x04000000&((data)<<26))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_merge_3(data)                        (0x02000000&((data)<<25))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_merge_2(data)                        (0x01000000&((data)<<24))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_merge_1(data)                        (0x00800000&((data)<<23))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_merge_0(data)                        (0x00400000&((data)<<22))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_group_ctrl_1p_2(data)                (0x00200000&((data)<<21))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_group_ctrl_1p_1(data)                (0x00100000&((data)<<20))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_group_ctrl_1p_0(data)                (0x00080000&((data)<<19))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_group_ctrl_2p_3(data)                (0x00040000&((data)<<18))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_group_ctrl_2p_2(data)                (0x00020000&((data)<<17))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_group_ctrl_2p_1(data)                (0x00010000&((data)<<16))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_group_ctrl_2p_0(data)                (0x00008000&((data)<<15))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_9(data)                       (0x00004000&((data)<<14))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_8(data)                       (0x00002000&((data)<<13))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_7(data)                       (0x00001000&((data)<<12))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_6(data)                       (0x00000800&((data)<<11))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_5(data)                       (0x00000400&((data)<<10))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_4(data)                       (0x00000200&((data)<<9))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_3(data)                       (0x00000100&((data)<<8))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_2(data)                       (0x00000080&((data)<<7))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_1(data)                       (0x00000040&((data)<<6))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_core_a_0(data)                       (0x00000020&((data)<<5))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_ffm_4(data)                          (0x00000010&((data)<<4))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_ffm_3(data)                          (0x00000008&((data)<<3))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_ffm_2(data)                          (0x00000004&((data)<<2))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_ffm_1(data)                          (0x00000002&((data)<<1))
#define  NNWP_drf_bist_fail_0_drf_bist_fail_ffm_0(data)                          (0x00000001&(data))
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_backend_merger_2(data)           ((0x80000000&(data))>>31)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_backend_merger_1(data)           ((0x40000000&(data))>>30)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_backend_merger_0(data)           ((0x20000000&(data))>>29)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_merge_6(data)                    ((0x10000000&(data))>>28)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_merge_5(data)                    ((0x08000000&(data))>>27)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_merge_4(data)                    ((0x04000000&(data))>>26)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_merge_3(data)                    ((0x02000000&(data))>>25)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_merge_2(data)                    ((0x01000000&(data))>>24)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_merge_1(data)                    ((0x00800000&(data))>>23)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_merge_0(data)                    ((0x00400000&(data))>>22)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_group_ctrl_1p_2(data)            ((0x00200000&(data))>>21)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_group_ctrl_1p_1(data)            ((0x00100000&(data))>>20)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_group_ctrl_1p_0(data)            ((0x00080000&(data))>>19)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_group_ctrl_2p_3(data)            ((0x00040000&(data))>>18)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_group_ctrl_2p_2(data)            ((0x00020000&(data))>>17)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_group_ctrl_2p_1(data)            ((0x00010000&(data))>>16)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_group_ctrl_2p_0(data)            ((0x00008000&(data))>>15)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_core_a_9(data)                   ((0x00004000&(data))>>14)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_core_a_8(data)                   ((0x00002000&(data))>>13)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_core_a_7(data)                   ((0x00001000&(data))>>12)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_core_a_6(data)                   ((0x00000800&(data))>>11)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_core_a_5(data)                   ((0x00000400&(data))>>10)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_core_a_4(data)                   ((0x00000200&(data))>>9)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_core_a_3(data)                   ((0x00000100&(data))>>8)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_core_a_2(data)                   ((0x00000080&(data))>>7)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_core_a_1(data)                   ((0x00000040&(data))>>6)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_core_a_0(data)                   ((0x00000020&(data))>>5)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_ffm_4(data)                      ((0x00000010&(data))>>4)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_ffm_3(data)                      ((0x00000008&(data))>>3)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_ffm_2(data)                      ((0x00000004&(data))>>2)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_ffm_1(data)                      ((0x00000002&(data))>>1)
#define  NNWP_drf_bist_fail_0_get_drf_bist_fail_ffm_0(data)                      (0x00000001&(data))

#define  NNWP_drf_bist_fail_1                                                   0x18076578
#define  NNWP_drf_bist_fail_1_reg_addr                                           "0xB8076578"
#define  NNWP_drf_bist_fail_1_reg                                                0xB8076578
#define  NNWP_drf_bist_fail_1_inst_addr                                          "0x0028"
#define  set_NNWP_drf_bist_fail_1_reg(data)                                      (*((volatile unsigned int*)NNWP_drf_bist_fail_1_reg)=data)
#define  get_NNWP_drf_bist_fail_1_reg                                            (*((volatile unsigned int*)NNWP_drf_bist_fail_1_reg))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_11_shift                  (31)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_10_shift                  (30)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_9_shift                   (29)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_8_shift                   (28)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_7_shift                   (27)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_6_shift                   (26)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_5_shift                   (25)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_4_shift                   (24)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_3_shift                   (23)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_2_shift                   (22)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_1_shift                   (21)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_0_shift                   (20)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_wrapper_shift                        (19)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_tp_0_6_shift                         (18)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_tp_0_5_shift                         (17)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_tp_0_4_shift                         (16)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_tp_0_3_shift                         (15)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_tp_0_2_shift                         (14)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_tp_0_1_shift                         (13)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_tp_0_0_shift                         (12)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_conv_out_fifo_7_shift                (11)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_conv_out_fifo_6_shift                (10)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_conv_out_fifo_5_shift                (9)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_conv_out_fifo_4_shift                (8)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_conv_out_fifo_3_shift                (7)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_conv_out_fifo_2_shift                (6)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_conv_out_fifo_1_shift                (5)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_conv_out_fifo_0_shift                (4)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_gc_sh_nn_cache_3_shift               (3)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_gc_sh_nn_cache_2_shift               (2)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_gc_sh_nn_cache_1_shift               (1)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_gc_sh_nn_cache_0_shift               (0)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_11_mask                   (0x80000000)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_10_mask                   (0x40000000)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_9_mask                    (0x20000000)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_8_mask                    (0x10000000)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_7_mask                    (0x08000000)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_6_mask                    (0x04000000)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_5_mask                    (0x02000000)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_4_mask                    (0x01000000)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_3_mask                    (0x00800000)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_2_mask                    (0x00400000)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_1_mask                    (0x00200000)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_0_mask                    (0x00100000)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_wrapper_mask                         (0x00080000)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_tp_0_6_mask                          (0x00040000)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_tp_0_5_mask                          (0x00020000)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_tp_0_4_mask                          (0x00010000)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_tp_0_3_mask                          (0x00008000)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_tp_0_2_mask                          (0x00004000)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_tp_0_1_mask                          (0x00002000)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_tp_0_0_mask                          (0x00001000)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_conv_out_fifo_7_mask                 (0x00000800)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_conv_out_fifo_6_mask                 (0x00000400)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_conv_out_fifo_5_mask                 (0x00000200)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_conv_out_fifo_4_mask                 (0x00000100)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_conv_out_fifo_3_mask                 (0x00000080)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_conv_out_fifo_2_mask                 (0x00000040)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_conv_out_fifo_1_mask                 (0x00000020)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_conv_out_fifo_0_mask                 (0x00000010)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_gc_sh_nn_cache_3_mask                (0x00000008)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_gc_sh_nn_cache_2_mask                (0x00000004)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_gc_sh_nn_cache_1_mask                (0x00000002)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_gc_sh_nn_cache_0_mask                (0x00000001)
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_11(data)                  (0x80000000&((data)<<31))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_10(data)                  (0x40000000&((data)<<30))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_9(data)                   (0x20000000&((data)<<29))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_8(data)                   (0x10000000&((data)<<28))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_7(data)                   (0x08000000&((data)<<27))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_6(data)                   (0x04000000&((data)<<26))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_5(data)                   (0x02000000&((data)<<25))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_4(data)                   (0x01000000&((data)<<24))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_3(data)                   (0x00800000&((data)<<23))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_2(data)                   (0x00400000&((data)<<22))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_1(data)                   (0x00200000&((data)<<21))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_us_cache_0_0(data)                   (0x00100000&((data)<<20))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_wrapper(data)                        (0x00080000&((data)<<19))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_tp_0_6(data)                         (0x00040000&((data)<<18))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_tp_0_5(data)                         (0x00020000&((data)<<17))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_tp_0_4(data)                         (0x00010000&((data)<<16))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_tp_0_3(data)                         (0x00008000&((data)<<15))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_tp_0_2(data)                         (0x00004000&((data)<<14))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_tp_0_1(data)                         (0x00002000&((data)<<13))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_tp_0_0(data)                         (0x00001000&((data)<<12))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_conv_out_fifo_7(data)                (0x00000800&((data)<<11))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_conv_out_fifo_6(data)                (0x00000400&((data)<<10))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_conv_out_fifo_5(data)                (0x00000200&((data)<<9))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_conv_out_fifo_4(data)                (0x00000100&((data)<<8))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_conv_out_fifo_3(data)                (0x00000080&((data)<<7))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_conv_out_fifo_2(data)                (0x00000040&((data)<<6))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_conv_out_fifo_1(data)                (0x00000020&((data)<<5))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_conv_out_fifo_0(data)                (0x00000010&((data)<<4))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_gc_sh_nn_cache_3(data)               (0x00000008&((data)<<3))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_gc_sh_nn_cache_2(data)               (0x00000004&((data)<<2))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_gc_sh_nn_cache_1(data)               (0x00000002&((data)<<1))
#define  NNWP_drf_bist_fail_1_drf_bist_fail_gc_sh_nn_cache_0(data)               (0x00000001&(data))
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_us_cache_0_11(data)              ((0x80000000&(data))>>31)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_us_cache_0_10(data)              ((0x40000000&(data))>>30)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_us_cache_0_9(data)               ((0x20000000&(data))>>29)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_us_cache_0_8(data)               ((0x10000000&(data))>>28)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_us_cache_0_7(data)               ((0x08000000&(data))>>27)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_us_cache_0_6(data)               ((0x04000000&(data))>>26)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_us_cache_0_5(data)               ((0x02000000&(data))>>25)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_us_cache_0_4(data)               ((0x01000000&(data))>>24)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_us_cache_0_3(data)               ((0x00800000&(data))>>23)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_us_cache_0_2(data)               ((0x00400000&(data))>>22)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_us_cache_0_1(data)               ((0x00200000&(data))>>21)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_us_cache_0_0(data)               ((0x00100000&(data))>>20)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_wrapper(data)                    ((0x00080000&(data))>>19)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_tp_0_6(data)                     ((0x00040000&(data))>>18)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_tp_0_5(data)                     ((0x00020000&(data))>>17)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_tp_0_4(data)                     ((0x00010000&(data))>>16)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_tp_0_3(data)                     ((0x00008000&(data))>>15)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_tp_0_2(data)                     ((0x00004000&(data))>>14)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_tp_0_1(data)                     ((0x00002000&(data))>>13)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_tp_0_0(data)                     ((0x00001000&(data))>>12)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_conv_out_fifo_7(data)            ((0x00000800&(data))>>11)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_conv_out_fifo_6(data)            ((0x00000400&(data))>>10)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_conv_out_fifo_5(data)            ((0x00000200&(data))>>9)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_conv_out_fifo_4(data)            ((0x00000100&(data))>>8)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_conv_out_fifo_3(data)            ((0x00000080&(data))>>7)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_conv_out_fifo_2(data)            ((0x00000040&(data))>>6)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_conv_out_fifo_1(data)            ((0x00000020&(data))>>5)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_conv_out_fifo_0(data)            ((0x00000010&(data))>>4)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_gc_sh_nn_cache_3(data)           ((0x00000008&(data))>>3)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_gc_sh_nn_cache_2(data)           ((0x00000004&(data))>>2)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_gc_sh_nn_cache_1(data)           ((0x00000002&(data))>>1)
#define  NNWP_drf_bist_fail_1_get_drf_bist_fail_gc_sh_nn_cache_0(data)           (0x00000001&(data))

#define  NNWP_drf_bist_fail_2                                                   0x1807657C
#define  NNWP_drf_bist_fail_2_reg_addr                                           "0xB807657C"
#define  NNWP_drf_bist_fail_2_reg                                                0xB807657C
#define  NNWP_drf_bist_fail_2_inst_addr                                          "0x0029"
#define  set_NNWP_drf_bist_fail_2_reg(data)                                      (*((volatile unsigned int*)NNWP_drf_bist_fail_2_reg)=data)
#define  get_NNWP_drf_bist_fail_2_reg                                            (*((volatile unsigned int*)NNWP_drf_bist_fail_2_reg))
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_1_7_shift                  (19)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_1_6_shift                  (18)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_1_5_shift                  (17)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_1_4_shift                  (16)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_1_3_shift                  (15)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_1_2_shift                  (14)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_1_1_shift                  (13)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_1_0_shift                  (12)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_0_7_shift                  (11)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_0_6_shift                  (10)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_0_5_shift                  (9)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_0_4_shift                  (8)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_0_3_shift                  (7)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_0_2_shift                  (6)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_0_1_shift                  (5)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_0_0_shift                  (4)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_us_cache_1_3_shift                   (3)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_us_cache_1_2_shift                   (2)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_us_cache_1_1_shift                   (1)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_us_cache_1_0_shift                   (0)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_1_7_mask                   (0x00080000)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_1_6_mask                   (0x00040000)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_1_5_mask                   (0x00020000)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_1_4_mask                   (0x00010000)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_1_3_mask                   (0x00008000)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_1_2_mask                   (0x00004000)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_1_1_mask                   (0x00002000)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_1_0_mask                   (0x00001000)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_0_7_mask                   (0x00000800)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_0_6_mask                   (0x00000400)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_0_5_mask                   (0x00000200)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_0_4_mask                   (0x00000100)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_0_3_mask                   (0x00000080)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_0_2_mask                   (0x00000040)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_0_1_mask                   (0x00000020)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_0_0_mask                   (0x00000010)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_us_cache_1_3_mask                    (0x00000008)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_us_cache_1_2_mask                    (0x00000004)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_us_cache_1_1_mask                    (0x00000002)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_us_cache_1_0_mask                    (0x00000001)
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_1_7(data)                  (0x00080000&((data)<<19))
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_1_6(data)                  (0x00040000&((data)<<18))
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_1_5(data)                  (0x00020000&((data)<<17))
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_1_4(data)                  (0x00010000&((data)<<16))
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_1_3(data)                  (0x00008000&((data)<<15))
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_1_2(data)                  (0x00004000&((data)<<14))
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_1_1(data)                  (0x00002000&((data)<<13))
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_1_0(data)                  (0x00001000&((data)<<12))
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_0_7(data)                  (0x00000800&((data)<<11))
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_0_6(data)                  (0x00000400&((data)<<10))
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_0_5(data)                  (0x00000200&((data)<<9))
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_0_4(data)                  (0x00000100&((data)<<8))
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_0_3(data)                  (0x00000080&((data)<<7))
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_0_2(data)                  (0x00000040&((data)<<6))
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_0_1(data)                  (0x00000020&((data)<<5))
#define  NNWP_drf_bist_fail_2_drf_bist_fail_conv_core_0_0(data)                  (0x00000010&((data)<<4))
#define  NNWP_drf_bist_fail_2_drf_bist_fail_us_cache_1_3(data)                   (0x00000008&((data)<<3))
#define  NNWP_drf_bist_fail_2_drf_bist_fail_us_cache_1_2(data)                   (0x00000004&((data)<<2))
#define  NNWP_drf_bist_fail_2_drf_bist_fail_us_cache_1_1(data)                   (0x00000002&((data)<<1))
#define  NNWP_drf_bist_fail_2_drf_bist_fail_us_cache_1_0(data)                   (0x00000001&(data))
#define  NNWP_drf_bist_fail_2_get_drf_bist_fail_conv_core_1_7(data)              ((0x00080000&(data))>>19)
#define  NNWP_drf_bist_fail_2_get_drf_bist_fail_conv_core_1_6(data)              ((0x00040000&(data))>>18)
#define  NNWP_drf_bist_fail_2_get_drf_bist_fail_conv_core_1_5(data)              ((0x00020000&(data))>>17)
#define  NNWP_drf_bist_fail_2_get_drf_bist_fail_conv_core_1_4(data)              ((0x00010000&(data))>>16)
#define  NNWP_drf_bist_fail_2_get_drf_bist_fail_conv_core_1_3(data)              ((0x00008000&(data))>>15)
#define  NNWP_drf_bist_fail_2_get_drf_bist_fail_conv_core_1_2(data)              ((0x00004000&(data))>>14)
#define  NNWP_drf_bist_fail_2_get_drf_bist_fail_conv_core_1_1(data)              ((0x00002000&(data))>>13)
#define  NNWP_drf_bist_fail_2_get_drf_bist_fail_conv_core_1_0(data)              ((0x00001000&(data))>>12)
#define  NNWP_drf_bist_fail_2_get_drf_bist_fail_conv_core_0_7(data)              ((0x00000800&(data))>>11)
#define  NNWP_drf_bist_fail_2_get_drf_bist_fail_conv_core_0_6(data)              ((0x00000400&(data))>>10)
#define  NNWP_drf_bist_fail_2_get_drf_bist_fail_conv_core_0_5(data)              ((0x00000200&(data))>>9)
#define  NNWP_drf_bist_fail_2_get_drf_bist_fail_conv_core_0_4(data)              ((0x00000100&(data))>>8)
#define  NNWP_drf_bist_fail_2_get_drf_bist_fail_conv_core_0_3(data)              ((0x00000080&(data))>>7)
#define  NNWP_drf_bist_fail_2_get_drf_bist_fail_conv_core_0_2(data)              ((0x00000040&(data))>>6)
#define  NNWP_drf_bist_fail_2_get_drf_bist_fail_conv_core_0_1(data)              ((0x00000020&(data))>>5)
#define  NNWP_drf_bist_fail_2_get_drf_bist_fail_conv_core_0_0(data)              ((0x00000010&(data))>>4)
#define  NNWP_drf_bist_fail_2_get_drf_bist_fail_us_cache_1_3(data)               ((0x00000008&(data))>>3)
#define  NNWP_drf_bist_fail_2_get_drf_bist_fail_us_cache_1_2(data)               ((0x00000004&(data))>>2)
#define  NNWP_drf_bist_fail_2_get_drf_bist_fail_us_cache_1_1(data)               ((0x00000002&(data))>>1)
#define  NNWP_drf_bist_fail_2_get_drf_bist_fail_us_cache_1_0(data)               (0x00000001&(data))

#define  NNWP_nnwp_sram                                                         0x18076580
#define  NNWP_nnwp_sram_reg_addr                                                 "0xB8076580"
#define  NNWP_nnwp_sram_reg                                                      0xB8076580
#define  NNWP_nnwp_sram_inst_addr                                                "0x002A"
#define  set_NNWP_nnwp_sram_reg(data)                                            (*((volatile unsigned int*)NNWP_nnwp_sram_reg)=data)
#define  get_NNWP_nnwp_sram_reg                                                  (*((volatile unsigned int*)NNWP_nnwp_sram_reg))
#define  NNWP_nnwp_sram_nnwp_test1_shift                                         (6)
#define  NNWP_nnwp_sram_nnwp_testrwm_shift                                       (5)
#define  NNWP_nnwp_sram_nnwp_rme_shift                                           (4)
#define  NNWP_nnwp_sram_nnwp_rm_shift                                            (0)
#define  NNWP_nnwp_sram_nnwp_test1_mask                                          (0x00000040)
#define  NNWP_nnwp_sram_nnwp_testrwm_mask                                        (0x00000020)
#define  NNWP_nnwp_sram_nnwp_rme_mask                                            (0x00000010)
#define  NNWP_nnwp_sram_nnwp_rm_mask                                             (0x0000000F)
#define  NNWP_nnwp_sram_nnwp_test1(data)                                         (0x00000040&((data)<<6))
#define  NNWP_nnwp_sram_nnwp_testrwm(data)                                       (0x00000020&((data)<<5))
#define  NNWP_nnwp_sram_nnwp_rme(data)                                           (0x00000010&((data)<<4))
#define  NNWP_nnwp_sram_nnwp_rm(data)                                            (0x0000000F&(data))
#define  NNWP_nnwp_sram_get_nnwp_test1(data)                                     ((0x00000040&(data))>>6)
#define  NNWP_nnwp_sram_get_nnwp_testrwm(data)                                   ((0x00000020&(data))>>5)
#define  NNWP_nnwp_sram_get_nnwp_rme(data)                                       ((0x00000010&(data))>>4)
#define  NNWP_nnwp_sram_get_nnwp_rm(data)                                        (0x0000000F&(data))

#define  NNWP_nn_sram                                                           0x18076584
#define  NNWP_nn_sram_reg_addr                                                   "0xB8076584"
#define  NNWP_nn_sram_reg                                                        0xB8076584
#define  NNWP_nn_sram_inst_addr                                                  "0x002B"
#define  set_NNWP_nn_sram_reg(data)                                              (*((volatile unsigned int*)NNWP_nn_sram_reg)=data)
#define  get_NNWP_nn_sram_reg                                                    (*((volatile unsigned int*)NNWP_nn_sram_reg))
#define  NNWP_nn_sram_nnip_test1_shift                                           (6)
#define  NNWP_nn_sram_nnip_testrwm_shift                                         (5)
#define  NNWP_nn_sram_nnip_rme_shift                                             (4)
#define  NNWP_nn_sram_nnip_rm_shift                                              (0)
#define  NNWP_nn_sram_nnip_test1_mask                                            (0x00000040)
#define  NNWP_nn_sram_nnip_testrwm_mask                                          (0x00000020)
#define  NNWP_nn_sram_nnip_rme_mask                                              (0x00000010)
#define  NNWP_nn_sram_nnip_rm_mask                                               (0x0000000F)
#define  NNWP_nn_sram_nnip_test1(data)                                           (0x00000040&((data)<<6))
#define  NNWP_nn_sram_nnip_testrwm(data)                                         (0x00000020&((data)<<5))
#define  NNWP_nn_sram_nnip_rme(data)                                             (0x00000010&((data)<<4))
#define  NNWP_nn_sram_nnip_rm(data)                                              (0x0000000F&(data))
#define  NNWP_nn_sram_get_nnip_test1(data)                                       ((0x00000040&(data))>>6)
#define  NNWP_nn_sram_get_nnip_testrwm(data)                                     ((0x00000020&(data))>>5)
#define  NNWP_nn_sram_get_nnip_rme(data)                                         ((0x00000010&(data))>>4)
#define  NNWP_nn_sram_get_nnip_rm(data)                                          (0x0000000F&(data))

#define  NNWP_sram_ls_0                                                         0x18076588
#define  NNWP_sram_ls_0_reg_addr                                                 "0xB8076588"
#define  NNWP_sram_ls_0_reg                                                      0xB8076588
#define  NNWP_sram_ls_0_inst_addr                                                "0x002C"
#define  set_NNWP_sram_ls_0_reg(data)                                            (*((volatile unsigned int*)NNWP_sram_ls_0_reg)=data)
#define  get_NNWP_sram_ls_0_reg                                                  (*((volatile unsigned int*)NNWP_sram_ls_0_reg))
#define  NNWP_sram_ls_0_ls_backend_merger_2_shift                                (31)
#define  NNWP_sram_ls_0_ls_backend_merger_1_shift                                (30)
#define  NNWP_sram_ls_0_ls_backend_merger_0_shift                                (29)
#define  NNWP_sram_ls_0_ls_merge_6_shift                                         (28)
#define  NNWP_sram_ls_0_ls_merge_5_shift                                         (27)
#define  NNWP_sram_ls_0_ls_merge_4_shift                                         (26)
#define  NNWP_sram_ls_0_ls_merge_3_shift                                         (25)
#define  NNWP_sram_ls_0_ls_merge_2_shift                                         (24)
#define  NNWP_sram_ls_0_ls_merge_1_shift                                         (23)
#define  NNWP_sram_ls_0_ls_merge_0_shift                                         (22)
#define  NNWP_sram_ls_0_ls_group_ctrl_1p_2_shift                                 (21)
#define  NNWP_sram_ls_0_ls_group_ctrl_1p_1_shift                                 (20)
#define  NNWP_sram_ls_0_ls_group_ctrl_1p_0_shift                                 (19)
#define  NNWP_sram_ls_0_ls_group_ctrl_2p_3_shift                                 (18)
#define  NNWP_sram_ls_0_ls_group_ctrl_2p_2_shift                                 (17)
#define  NNWP_sram_ls_0_ls_group_ctrl_2p_1_shift                                 (16)
#define  NNWP_sram_ls_0_ls_group_ctrl_2p_0_shift                                 (15)
#define  NNWP_sram_ls_0_ls_core_a_9_shift                                        (14)
#define  NNWP_sram_ls_0_ls_core_a_8_shift                                        (13)
#define  NNWP_sram_ls_0_ls_core_a_7_shift                                        (12)
#define  NNWP_sram_ls_0_ls_core_a_6_shift                                        (11)
#define  NNWP_sram_ls_0_ls_core_a_5_shift                                        (10)
#define  NNWP_sram_ls_0_ls_core_a_4_shift                                        (9)
#define  NNWP_sram_ls_0_ls_core_a_3_shift                                        (8)
#define  NNWP_sram_ls_0_ls_core_a_2_shift                                        (7)
#define  NNWP_sram_ls_0_ls_core_a_1_shift                                        (6)
#define  NNWP_sram_ls_0_ls_core_a_0_shift                                        (5)
#define  NNWP_sram_ls_0_ls_ffm_4_shift                                           (4)
#define  NNWP_sram_ls_0_ls_ffm_3_shift                                           (3)
#define  NNWP_sram_ls_0_ls_ffm_2_shift                                           (2)
#define  NNWP_sram_ls_0_ls_ffm_1_shift                                           (1)
#define  NNWP_sram_ls_0_ls_ffm_0_shift                                           (0)
#define  NNWP_sram_ls_0_ls_backend_merger_2_mask                                 (0x80000000)
#define  NNWP_sram_ls_0_ls_backend_merger_1_mask                                 (0x40000000)
#define  NNWP_sram_ls_0_ls_backend_merger_0_mask                                 (0x20000000)
#define  NNWP_sram_ls_0_ls_merge_6_mask                                          (0x10000000)
#define  NNWP_sram_ls_0_ls_merge_5_mask                                          (0x08000000)
#define  NNWP_sram_ls_0_ls_merge_4_mask                                          (0x04000000)
#define  NNWP_sram_ls_0_ls_merge_3_mask                                          (0x02000000)
#define  NNWP_sram_ls_0_ls_merge_2_mask                                          (0x01000000)
#define  NNWP_sram_ls_0_ls_merge_1_mask                                          (0x00800000)
#define  NNWP_sram_ls_0_ls_merge_0_mask                                          (0x00400000)
#define  NNWP_sram_ls_0_ls_group_ctrl_1p_2_mask                                  (0x00200000)
#define  NNWP_sram_ls_0_ls_group_ctrl_1p_1_mask                                  (0x00100000)
#define  NNWP_sram_ls_0_ls_group_ctrl_1p_0_mask                                  (0x00080000)
#define  NNWP_sram_ls_0_ls_group_ctrl_2p_3_mask                                  (0x00040000)
#define  NNWP_sram_ls_0_ls_group_ctrl_2p_2_mask                                  (0x00020000)
#define  NNWP_sram_ls_0_ls_group_ctrl_2p_1_mask                                  (0x00010000)
#define  NNWP_sram_ls_0_ls_group_ctrl_2p_0_mask                                  (0x00008000)
#define  NNWP_sram_ls_0_ls_core_a_9_mask                                         (0x00004000)
#define  NNWP_sram_ls_0_ls_core_a_8_mask                                         (0x00002000)
#define  NNWP_sram_ls_0_ls_core_a_7_mask                                         (0x00001000)
#define  NNWP_sram_ls_0_ls_core_a_6_mask                                         (0x00000800)
#define  NNWP_sram_ls_0_ls_core_a_5_mask                                         (0x00000400)
#define  NNWP_sram_ls_0_ls_core_a_4_mask                                         (0x00000200)
#define  NNWP_sram_ls_0_ls_core_a_3_mask                                         (0x00000100)
#define  NNWP_sram_ls_0_ls_core_a_2_mask                                         (0x00000080)
#define  NNWP_sram_ls_0_ls_core_a_1_mask                                         (0x00000040)
#define  NNWP_sram_ls_0_ls_core_a_0_mask                                         (0x00000020)
#define  NNWP_sram_ls_0_ls_ffm_4_mask                                            (0x00000010)
#define  NNWP_sram_ls_0_ls_ffm_3_mask                                            (0x00000008)
#define  NNWP_sram_ls_0_ls_ffm_2_mask                                            (0x00000004)
#define  NNWP_sram_ls_0_ls_ffm_1_mask                                            (0x00000002)
#define  NNWP_sram_ls_0_ls_ffm_0_mask                                            (0x00000001)
#define  NNWP_sram_ls_0_ls_backend_merger_2(data)                                (0x80000000&((data)<<31))
#define  NNWP_sram_ls_0_ls_backend_merger_1(data)                                (0x40000000&((data)<<30))
#define  NNWP_sram_ls_0_ls_backend_merger_0(data)                                (0x20000000&((data)<<29))
#define  NNWP_sram_ls_0_ls_merge_6(data)                                         (0x10000000&((data)<<28))
#define  NNWP_sram_ls_0_ls_merge_5(data)                                         (0x08000000&((data)<<27))
#define  NNWP_sram_ls_0_ls_merge_4(data)                                         (0x04000000&((data)<<26))
#define  NNWP_sram_ls_0_ls_merge_3(data)                                         (0x02000000&((data)<<25))
#define  NNWP_sram_ls_0_ls_merge_2(data)                                         (0x01000000&((data)<<24))
#define  NNWP_sram_ls_0_ls_merge_1(data)                                         (0x00800000&((data)<<23))
#define  NNWP_sram_ls_0_ls_merge_0(data)                                         (0x00400000&((data)<<22))
#define  NNWP_sram_ls_0_ls_group_ctrl_1p_2(data)                                 (0x00200000&((data)<<21))
#define  NNWP_sram_ls_0_ls_group_ctrl_1p_1(data)                                 (0x00100000&((data)<<20))
#define  NNWP_sram_ls_0_ls_group_ctrl_1p_0(data)                                 (0x00080000&((data)<<19))
#define  NNWP_sram_ls_0_ls_group_ctrl_2p_3(data)                                 (0x00040000&((data)<<18))
#define  NNWP_sram_ls_0_ls_group_ctrl_2p_2(data)                                 (0x00020000&((data)<<17))
#define  NNWP_sram_ls_0_ls_group_ctrl_2p_1(data)                                 (0x00010000&((data)<<16))
#define  NNWP_sram_ls_0_ls_group_ctrl_2p_0(data)                                 (0x00008000&((data)<<15))
#define  NNWP_sram_ls_0_ls_core_a_9(data)                                        (0x00004000&((data)<<14))
#define  NNWP_sram_ls_0_ls_core_a_8(data)                                        (0x00002000&((data)<<13))
#define  NNWP_sram_ls_0_ls_core_a_7(data)                                        (0x00001000&((data)<<12))
#define  NNWP_sram_ls_0_ls_core_a_6(data)                                        (0x00000800&((data)<<11))
#define  NNWP_sram_ls_0_ls_core_a_5(data)                                        (0x00000400&((data)<<10))
#define  NNWP_sram_ls_0_ls_core_a_4(data)                                        (0x00000200&((data)<<9))
#define  NNWP_sram_ls_0_ls_core_a_3(data)                                        (0x00000100&((data)<<8))
#define  NNWP_sram_ls_0_ls_core_a_2(data)                                        (0x00000080&((data)<<7))
#define  NNWP_sram_ls_0_ls_core_a_1(data)                                        (0x00000040&((data)<<6))
#define  NNWP_sram_ls_0_ls_core_a_0(data)                                        (0x00000020&((data)<<5))
#define  NNWP_sram_ls_0_ls_ffm_4(data)                                           (0x00000010&((data)<<4))
#define  NNWP_sram_ls_0_ls_ffm_3(data)                                           (0x00000008&((data)<<3))
#define  NNWP_sram_ls_0_ls_ffm_2(data)                                           (0x00000004&((data)<<2))
#define  NNWP_sram_ls_0_ls_ffm_1(data)                                           (0x00000002&((data)<<1))
#define  NNWP_sram_ls_0_ls_ffm_0(data)                                           (0x00000001&(data))
#define  NNWP_sram_ls_0_get_ls_backend_merger_2(data)                            ((0x80000000&(data))>>31)
#define  NNWP_sram_ls_0_get_ls_backend_merger_1(data)                            ((0x40000000&(data))>>30)
#define  NNWP_sram_ls_0_get_ls_backend_merger_0(data)                            ((0x20000000&(data))>>29)
#define  NNWP_sram_ls_0_get_ls_merge_6(data)                                     ((0x10000000&(data))>>28)
#define  NNWP_sram_ls_0_get_ls_merge_5(data)                                     ((0x08000000&(data))>>27)
#define  NNWP_sram_ls_0_get_ls_merge_4(data)                                     ((0x04000000&(data))>>26)
#define  NNWP_sram_ls_0_get_ls_merge_3(data)                                     ((0x02000000&(data))>>25)
#define  NNWP_sram_ls_0_get_ls_merge_2(data)                                     ((0x01000000&(data))>>24)
#define  NNWP_sram_ls_0_get_ls_merge_1(data)                                     ((0x00800000&(data))>>23)
#define  NNWP_sram_ls_0_get_ls_merge_0(data)                                     ((0x00400000&(data))>>22)
#define  NNWP_sram_ls_0_get_ls_group_ctrl_1p_2(data)                             ((0x00200000&(data))>>21)
#define  NNWP_sram_ls_0_get_ls_group_ctrl_1p_1(data)                             ((0x00100000&(data))>>20)
#define  NNWP_sram_ls_0_get_ls_group_ctrl_1p_0(data)                             ((0x00080000&(data))>>19)
#define  NNWP_sram_ls_0_get_ls_group_ctrl_2p_3(data)                             ((0x00040000&(data))>>18)
#define  NNWP_sram_ls_0_get_ls_group_ctrl_2p_2(data)                             ((0x00020000&(data))>>17)
#define  NNWP_sram_ls_0_get_ls_group_ctrl_2p_1(data)                             ((0x00010000&(data))>>16)
#define  NNWP_sram_ls_0_get_ls_group_ctrl_2p_0(data)                             ((0x00008000&(data))>>15)
#define  NNWP_sram_ls_0_get_ls_core_a_9(data)                                    ((0x00004000&(data))>>14)
#define  NNWP_sram_ls_0_get_ls_core_a_8(data)                                    ((0x00002000&(data))>>13)
#define  NNWP_sram_ls_0_get_ls_core_a_7(data)                                    ((0x00001000&(data))>>12)
#define  NNWP_sram_ls_0_get_ls_core_a_6(data)                                    ((0x00000800&(data))>>11)
#define  NNWP_sram_ls_0_get_ls_core_a_5(data)                                    ((0x00000400&(data))>>10)
#define  NNWP_sram_ls_0_get_ls_core_a_4(data)                                    ((0x00000200&(data))>>9)
#define  NNWP_sram_ls_0_get_ls_core_a_3(data)                                    ((0x00000100&(data))>>8)
#define  NNWP_sram_ls_0_get_ls_core_a_2(data)                                    ((0x00000080&(data))>>7)
#define  NNWP_sram_ls_0_get_ls_core_a_1(data)                                    ((0x00000040&(data))>>6)
#define  NNWP_sram_ls_0_get_ls_core_a_0(data)                                    ((0x00000020&(data))>>5)
#define  NNWP_sram_ls_0_get_ls_ffm_4(data)                                       ((0x00000010&(data))>>4)
#define  NNWP_sram_ls_0_get_ls_ffm_3(data)                                       ((0x00000008&(data))>>3)
#define  NNWP_sram_ls_0_get_ls_ffm_2(data)                                       ((0x00000004&(data))>>2)
#define  NNWP_sram_ls_0_get_ls_ffm_1(data)                                       ((0x00000002&(data))>>1)
#define  NNWP_sram_ls_0_get_ls_ffm_0(data)                                       (0x00000001&(data))

#define  NNWP_sram_ls_1                                                         0x1807658C
#define  NNWP_sram_ls_1_reg_addr                                                 "0xB807658C"
#define  NNWP_sram_ls_1_reg                                                      0xB807658C
#define  NNWP_sram_ls_1_inst_addr                                                "0x002D"
#define  set_NNWP_sram_ls_1_reg(data)                                            (*((volatile unsigned int*)NNWP_sram_ls_1_reg)=data)
#define  get_NNWP_sram_ls_1_reg                                                  (*((volatile unsigned int*)NNWP_sram_ls_1_reg))
#define  NNWP_sram_ls_1_ls_us_cache_0_11_shift                                   (31)
#define  NNWP_sram_ls_1_ls_us_cache_0_10_shift                                   (30)
#define  NNWP_sram_ls_1_ls_us_cache_0_9_shift                                    (29)
#define  NNWP_sram_ls_1_ls_us_cache_0_8_shift                                    (28)
#define  NNWP_sram_ls_1_ls_us_cache_0_7_shift                                    (27)
#define  NNWP_sram_ls_1_ls_us_cache_0_6_shift                                    (26)
#define  NNWP_sram_ls_1_ls_us_cache_0_5_shift                                    (25)
#define  NNWP_sram_ls_1_ls_us_cache_0_4_shift                                    (24)
#define  NNWP_sram_ls_1_ls_us_cache_0_3_shift                                    (23)
#define  NNWP_sram_ls_1_ls_us_cache_0_2_shift                                    (22)
#define  NNWP_sram_ls_1_ls_us_cache_0_1_shift                                    (21)
#define  NNWP_sram_ls_1_ls_us_cache_0_0_shift                                    (20)
#define  NNWP_sram_ls_1_ls_wrapper_shift                                         (19)
#define  NNWP_sram_ls_1_ls_tp_0_6_shift                                          (18)
#define  NNWP_sram_ls_1_ls_tp_0_5_shift                                          (17)
#define  NNWP_sram_ls_1_ls_tp_0_4_shift                                          (16)
#define  NNWP_sram_ls_1_ls_tp_0_3_shift                                          (15)
#define  NNWP_sram_ls_1_ls_tp_0_2_shift                                          (14)
#define  NNWP_sram_ls_1_ls_tp_0_1_shift                                          (13)
#define  NNWP_sram_ls_1_ls_tp_0_0_shift                                          (12)
#define  NNWP_sram_ls_1_ls_conv_out_fifo_7_shift                                 (11)
#define  NNWP_sram_ls_1_ls_conv_out_fifo_6_shift                                 (10)
#define  NNWP_sram_ls_1_ls_conv_out_fifo_5_shift                                 (9)
#define  NNWP_sram_ls_1_ls_conv_out_fifo_4_shift                                 (8)
#define  NNWP_sram_ls_1_ls_conv_out_fifo_3_shift                                 (7)
#define  NNWP_sram_ls_1_ls_conv_out_fifo_2_shift                                 (6)
#define  NNWP_sram_ls_1_ls_conv_out_fifo_1_shift                                 (5)
#define  NNWP_sram_ls_1_ls_conv_out_fifo_0_shift                                 (4)
#define  NNWP_sram_ls_1_ls_gc_sh_nn_cache_3_shift                                (3)
#define  NNWP_sram_ls_1_ls_gc_sh_nn_cache_2_shift                                (2)
#define  NNWP_sram_ls_1_ls_gc_sh_nn_cache_1_shift                                (1)
#define  NNWP_sram_ls_1_ls_gc_sh_nn_cache_0_shift                                (0)
#define  NNWP_sram_ls_1_ls_us_cache_0_11_mask                                    (0x80000000)
#define  NNWP_sram_ls_1_ls_us_cache_0_10_mask                                    (0x40000000)
#define  NNWP_sram_ls_1_ls_us_cache_0_9_mask                                     (0x20000000)
#define  NNWP_sram_ls_1_ls_us_cache_0_8_mask                                     (0x10000000)
#define  NNWP_sram_ls_1_ls_us_cache_0_7_mask                                     (0x08000000)
#define  NNWP_sram_ls_1_ls_us_cache_0_6_mask                                     (0x04000000)
#define  NNWP_sram_ls_1_ls_us_cache_0_5_mask                                     (0x02000000)
#define  NNWP_sram_ls_1_ls_us_cache_0_4_mask                                     (0x01000000)
#define  NNWP_sram_ls_1_ls_us_cache_0_3_mask                                     (0x00800000)
#define  NNWP_sram_ls_1_ls_us_cache_0_2_mask                                     (0x00400000)
#define  NNWP_sram_ls_1_ls_us_cache_0_1_mask                                     (0x00200000)
#define  NNWP_sram_ls_1_ls_us_cache_0_0_mask                                     (0x00100000)
#define  NNWP_sram_ls_1_ls_wrapper_mask                                          (0x00080000)
#define  NNWP_sram_ls_1_ls_tp_0_6_mask                                           (0x00040000)
#define  NNWP_sram_ls_1_ls_tp_0_5_mask                                           (0x00020000)
#define  NNWP_sram_ls_1_ls_tp_0_4_mask                                           (0x00010000)
#define  NNWP_sram_ls_1_ls_tp_0_3_mask                                           (0x00008000)
#define  NNWP_sram_ls_1_ls_tp_0_2_mask                                           (0x00004000)
#define  NNWP_sram_ls_1_ls_tp_0_1_mask                                           (0x00002000)
#define  NNWP_sram_ls_1_ls_tp_0_0_mask                                           (0x00001000)
#define  NNWP_sram_ls_1_ls_conv_out_fifo_7_mask                                  (0x00000800)
#define  NNWP_sram_ls_1_ls_conv_out_fifo_6_mask                                  (0x00000400)
#define  NNWP_sram_ls_1_ls_conv_out_fifo_5_mask                                  (0x00000200)
#define  NNWP_sram_ls_1_ls_conv_out_fifo_4_mask                                  (0x00000100)
#define  NNWP_sram_ls_1_ls_conv_out_fifo_3_mask                                  (0x00000080)
#define  NNWP_sram_ls_1_ls_conv_out_fifo_2_mask                                  (0x00000040)
#define  NNWP_sram_ls_1_ls_conv_out_fifo_1_mask                                  (0x00000020)
#define  NNWP_sram_ls_1_ls_conv_out_fifo_0_mask                                  (0x00000010)
#define  NNWP_sram_ls_1_ls_gc_sh_nn_cache_3_mask                                 (0x00000008)
#define  NNWP_sram_ls_1_ls_gc_sh_nn_cache_2_mask                                 (0x00000004)
#define  NNWP_sram_ls_1_ls_gc_sh_nn_cache_1_mask                                 (0x00000002)
#define  NNWP_sram_ls_1_ls_gc_sh_nn_cache_0_mask                                 (0x00000001)
#define  NNWP_sram_ls_1_ls_us_cache_0_11(data)                                   (0x80000000&((data)<<31))
#define  NNWP_sram_ls_1_ls_us_cache_0_10(data)                                   (0x40000000&((data)<<30))
#define  NNWP_sram_ls_1_ls_us_cache_0_9(data)                                    (0x20000000&((data)<<29))
#define  NNWP_sram_ls_1_ls_us_cache_0_8(data)                                    (0x10000000&((data)<<28))
#define  NNWP_sram_ls_1_ls_us_cache_0_7(data)                                    (0x08000000&((data)<<27))
#define  NNWP_sram_ls_1_ls_us_cache_0_6(data)                                    (0x04000000&((data)<<26))
#define  NNWP_sram_ls_1_ls_us_cache_0_5(data)                                    (0x02000000&((data)<<25))
#define  NNWP_sram_ls_1_ls_us_cache_0_4(data)                                    (0x01000000&((data)<<24))
#define  NNWP_sram_ls_1_ls_us_cache_0_3(data)                                    (0x00800000&((data)<<23))
#define  NNWP_sram_ls_1_ls_us_cache_0_2(data)                                    (0x00400000&((data)<<22))
#define  NNWP_sram_ls_1_ls_us_cache_0_1(data)                                    (0x00200000&((data)<<21))
#define  NNWP_sram_ls_1_ls_us_cache_0_0(data)                                    (0x00100000&((data)<<20))
#define  NNWP_sram_ls_1_ls_wrapper(data)                                         (0x00080000&((data)<<19))
#define  NNWP_sram_ls_1_ls_tp_0_6(data)                                          (0x00040000&((data)<<18))
#define  NNWP_sram_ls_1_ls_tp_0_5(data)                                          (0x00020000&((data)<<17))
#define  NNWP_sram_ls_1_ls_tp_0_4(data)                                          (0x00010000&((data)<<16))
#define  NNWP_sram_ls_1_ls_tp_0_3(data)                                          (0x00008000&((data)<<15))
#define  NNWP_sram_ls_1_ls_tp_0_2(data)                                          (0x00004000&((data)<<14))
#define  NNWP_sram_ls_1_ls_tp_0_1(data)                                          (0x00002000&((data)<<13))
#define  NNWP_sram_ls_1_ls_tp_0_0(data)                                          (0x00001000&((data)<<12))
#define  NNWP_sram_ls_1_ls_conv_out_fifo_7(data)                                 (0x00000800&((data)<<11))
#define  NNWP_sram_ls_1_ls_conv_out_fifo_6(data)                                 (0x00000400&((data)<<10))
#define  NNWP_sram_ls_1_ls_conv_out_fifo_5(data)                                 (0x00000200&((data)<<9))
#define  NNWP_sram_ls_1_ls_conv_out_fifo_4(data)                                 (0x00000100&((data)<<8))
#define  NNWP_sram_ls_1_ls_conv_out_fifo_3(data)                                 (0x00000080&((data)<<7))
#define  NNWP_sram_ls_1_ls_conv_out_fifo_2(data)                                 (0x00000040&((data)<<6))
#define  NNWP_sram_ls_1_ls_conv_out_fifo_1(data)                                 (0x00000020&((data)<<5))
#define  NNWP_sram_ls_1_ls_conv_out_fifo_0(data)                                 (0x00000010&((data)<<4))
#define  NNWP_sram_ls_1_ls_gc_sh_nn_cache_3(data)                                (0x00000008&((data)<<3))
#define  NNWP_sram_ls_1_ls_gc_sh_nn_cache_2(data)                                (0x00000004&((data)<<2))
#define  NNWP_sram_ls_1_ls_gc_sh_nn_cache_1(data)                                (0x00000002&((data)<<1))
#define  NNWP_sram_ls_1_ls_gc_sh_nn_cache_0(data)                                (0x00000001&(data))
#define  NNWP_sram_ls_1_get_ls_us_cache_0_11(data)                               ((0x80000000&(data))>>31)
#define  NNWP_sram_ls_1_get_ls_us_cache_0_10(data)                               ((0x40000000&(data))>>30)
#define  NNWP_sram_ls_1_get_ls_us_cache_0_9(data)                                ((0x20000000&(data))>>29)
#define  NNWP_sram_ls_1_get_ls_us_cache_0_8(data)                                ((0x10000000&(data))>>28)
#define  NNWP_sram_ls_1_get_ls_us_cache_0_7(data)                                ((0x08000000&(data))>>27)
#define  NNWP_sram_ls_1_get_ls_us_cache_0_6(data)                                ((0x04000000&(data))>>26)
#define  NNWP_sram_ls_1_get_ls_us_cache_0_5(data)                                ((0x02000000&(data))>>25)
#define  NNWP_sram_ls_1_get_ls_us_cache_0_4(data)                                ((0x01000000&(data))>>24)
#define  NNWP_sram_ls_1_get_ls_us_cache_0_3(data)                                ((0x00800000&(data))>>23)
#define  NNWP_sram_ls_1_get_ls_us_cache_0_2(data)                                ((0x00400000&(data))>>22)
#define  NNWP_sram_ls_1_get_ls_us_cache_0_1(data)                                ((0x00200000&(data))>>21)
#define  NNWP_sram_ls_1_get_ls_us_cache_0_0(data)                                ((0x00100000&(data))>>20)
#define  NNWP_sram_ls_1_get_ls_wrapper(data)                                     ((0x00080000&(data))>>19)
#define  NNWP_sram_ls_1_get_ls_tp_0_6(data)                                      ((0x00040000&(data))>>18)
#define  NNWP_sram_ls_1_get_ls_tp_0_5(data)                                      ((0x00020000&(data))>>17)
#define  NNWP_sram_ls_1_get_ls_tp_0_4(data)                                      ((0x00010000&(data))>>16)
#define  NNWP_sram_ls_1_get_ls_tp_0_3(data)                                      ((0x00008000&(data))>>15)
#define  NNWP_sram_ls_1_get_ls_tp_0_2(data)                                      ((0x00004000&(data))>>14)
#define  NNWP_sram_ls_1_get_ls_tp_0_1(data)                                      ((0x00002000&(data))>>13)
#define  NNWP_sram_ls_1_get_ls_tp_0_0(data)                                      ((0x00001000&(data))>>12)
#define  NNWP_sram_ls_1_get_ls_conv_out_fifo_7(data)                             ((0x00000800&(data))>>11)
#define  NNWP_sram_ls_1_get_ls_conv_out_fifo_6(data)                             ((0x00000400&(data))>>10)
#define  NNWP_sram_ls_1_get_ls_conv_out_fifo_5(data)                             ((0x00000200&(data))>>9)
#define  NNWP_sram_ls_1_get_ls_conv_out_fifo_4(data)                             ((0x00000100&(data))>>8)
#define  NNWP_sram_ls_1_get_ls_conv_out_fifo_3(data)                             ((0x00000080&(data))>>7)
#define  NNWP_sram_ls_1_get_ls_conv_out_fifo_2(data)                             ((0x00000040&(data))>>6)
#define  NNWP_sram_ls_1_get_ls_conv_out_fifo_1(data)                             ((0x00000020&(data))>>5)
#define  NNWP_sram_ls_1_get_ls_conv_out_fifo_0(data)                             ((0x00000010&(data))>>4)
#define  NNWP_sram_ls_1_get_ls_gc_sh_nn_cache_3(data)                            ((0x00000008&(data))>>3)
#define  NNWP_sram_ls_1_get_ls_gc_sh_nn_cache_2(data)                            ((0x00000004&(data))>>2)
#define  NNWP_sram_ls_1_get_ls_gc_sh_nn_cache_1(data)                            ((0x00000002&(data))>>1)
#define  NNWP_sram_ls_1_get_ls_gc_sh_nn_cache_0(data)                            (0x00000001&(data))

#define  NNWP_sram_ls_2                                                         0x18076590
#define  NNWP_sram_ls_2_reg_addr                                                 "0xB8076590"
#define  NNWP_sram_ls_2_reg                                                      0xB8076590
#define  NNWP_sram_ls_2_inst_addr                                                "0x002E"
#define  set_NNWP_sram_ls_2_reg(data)                                            (*((volatile unsigned int*)NNWP_sram_ls_2_reg)=data)
#define  get_NNWP_sram_ls_2_reg                                                  (*((volatile unsigned int*)NNWP_sram_ls_2_reg))
#define  NNWP_sram_ls_2_ls_conv_core_1_7_shift                                   (19)
#define  NNWP_sram_ls_2_ls_conv_core_1_6_shift                                   (18)
#define  NNWP_sram_ls_2_ls_conv_core_1_5_shift                                   (17)
#define  NNWP_sram_ls_2_ls_conv_core_1_4_shift                                   (16)
#define  NNWP_sram_ls_2_ls_conv_core_1_3_shift                                   (15)
#define  NNWP_sram_ls_2_ls_conv_core_1_2_shift                                   (14)
#define  NNWP_sram_ls_2_ls_conv_core_1_1_shift                                   (13)
#define  NNWP_sram_ls_2_ls_conv_core_1_0_shift                                   (12)
#define  NNWP_sram_ls_2_ls_conv_core_0_7_shift                                   (11)
#define  NNWP_sram_ls_2_ls_conv_core_0_6_shift                                   (10)
#define  NNWP_sram_ls_2_ls_conv_core_0_5_shift                                   (9)
#define  NNWP_sram_ls_2_ls_conv_core_0_4_shift                                   (8)
#define  NNWP_sram_ls_2_ls_conv_core_0_3_shift                                   (7)
#define  NNWP_sram_ls_2_ls_conv_core_0_2_shift                                   (6)
#define  NNWP_sram_ls_2_ls_conv_core_0_1_shift                                   (5)
#define  NNWP_sram_ls_2_ls_conv_core_0_0_shift                                   (4)
#define  NNWP_sram_ls_2_ls_us_cache_1_3_shift                                    (3)
#define  NNWP_sram_ls_2_ls_us_cache_1_2_shift                                    (2)
#define  NNWP_sram_ls_2_ls_us_cache_1_1_shift                                    (1)
#define  NNWP_sram_ls_2_ls_us_cache_1_0_shift                                    (0)
#define  NNWP_sram_ls_2_ls_conv_core_1_7_mask                                    (0x00080000)
#define  NNWP_sram_ls_2_ls_conv_core_1_6_mask                                    (0x00040000)
#define  NNWP_sram_ls_2_ls_conv_core_1_5_mask                                    (0x00020000)
#define  NNWP_sram_ls_2_ls_conv_core_1_4_mask                                    (0x00010000)
#define  NNWP_sram_ls_2_ls_conv_core_1_3_mask                                    (0x00008000)
#define  NNWP_sram_ls_2_ls_conv_core_1_2_mask                                    (0x00004000)
#define  NNWP_sram_ls_2_ls_conv_core_1_1_mask                                    (0x00002000)
#define  NNWP_sram_ls_2_ls_conv_core_1_0_mask                                    (0x00001000)
#define  NNWP_sram_ls_2_ls_conv_core_0_7_mask                                    (0x00000800)
#define  NNWP_sram_ls_2_ls_conv_core_0_6_mask                                    (0x00000400)
#define  NNWP_sram_ls_2_ls_conv_core_0_5_mask                                    (0x00000200)
#define  NNWP_sram_ls_2_ls_conv_core_0_4_mask                                    (0x00000100)
#define  NNWP_sram_ls_2_ls_conv_core_0_3_mask                                    (0x00000080)
#define  NNWP_sram_ls_2_ls_conv_core_0_2_mask                                    (0x00000040)
#define  NNWP_sram_ls_2_ls_conv_core_0_1_mask                                    (0x00000020)
#define  NNWP_sram_ls_2_ls_conv_core_0_0_mask                                    (0x00000010)
#define  NNWP_sram_ls_2_ls_us_cache_1_3_mask                                     (0x00000008)
#define  NNWP_sram_ls_2_ls_us_cache_1_2_mask                                     (0x00000004)
#define  NNWP_sram_ls_2_ls_us_cache_1_1_mask                                     (0x00000002)
#define  NNWP_sram_ls_2_ls_us_cache_1_0_mask                                     (0x00000001)
#define  NNWP_sram_ls_2_ls_conv_core_1_7(data)                                   (0x00080000&((data)<<19))
#define  NNWP_sram_ls_2_ls_conv_core_1_6(data)                                   (0x00040000&((data)<<18))
#define  NNWP_sram_ls_2_ls_conv_core_1_5(data)                                   (0x00020000&((data)<<17))
#define  NNWP_sram_ls_2_ls_conv_core_1_4(data)                                   (0x00010000&((data)<<16))
#define  NNWP_sram_ls_2_ls_conv_core_1_3(data)                                   (0x00008000&((data)<<15))
#define  NNWP_sram_ls_2_ls_conv_core_1_2(data)                                   (0x00004000&((data)<<14))
#define  NNWP_sram_ls_2_ls_conv_core_1_1(data)                                   (0x00002000&((data)<<13))
#define  NNWP_sram_ls_2_ls_conv_core_1_0(data)                                   (0x00001000&((data)<<12))
#define  NNWP_sram_ls_2_ls_conv_core_0_7(data)                                   (0x00000800&((data)<<11))
#define  NNWP_sram_ls_2_ls_conv_core_0_6(data)                                   (0x00000400&((data)<<10))
#define  NNWP_sram_ls_2_ls_conv_core_0_5(data)                                   (0x00000200&((data)<<9))
#define  NNWP_sram_ls_2_ls_conv_core_0_4(data)                                   (0x00000100&((data)<<8))
#define  NNWP_sram_ls_2_ls_conv_core_0_3(data)                                   (0x00000080&((data)<<7))
#define  NNWP_sram_ls_2_ls_conv_core_0_2(data)                                   (0x00000040&((data)<<6))
#define  NNWP_sram_ls_2_ls_conv_core_0_1(data)                                   (0x00000020&((data)<<5))
#define  NNWP_sram_ls_2_ls_conv_core_0_0(data)                                   (0x00000010&((data)<<4))
#define  NNWP_sram_ls_2_ls_us_cache_1_3(data)                                    (0x00000008&((data)<<3))
#define  NNWP_sram_ls_2_ls_us_cache_1_2(data)                                    (0x00000004&((data)<<2))
#define  NNWP_sram_ls_2_ls_us_cache_1_1(data)                                    (0x00000002&((data)<<1))
#define  NNWP_sram_ls_2_ls_us_cache_1_0(data)                                    (0x00000001&(data))
#define  NNWP_sram_ls_2_get_ls_conv_core_1_7(data)                               ((0x00080000&(data))>>19)
#define  NNWP_sram_ls_2_get_ls_conv_core_1_6(data)                               ((0x00040000&(data))>>18)
#define  NNWP_sram_ls_2_get_ls_conv_core_1_5(data)                               ((0x00020000&(data))>>17)
#define  NNWP_sram_ls_2_get_ls_conv_core_1_4(data)                               ((0x00010000&(data))>>16)
#define  NNWP_sram_ls_2_get_ls_conv_core_1_3(data)                               ((0x00008000&(data))>>15)
#define  NNWP_sram_ls_2_get_ls_conv_core_1_2(data)                               ((0x00004000&(data))>>14)
#define  NNWP_sram_ls_2_get_ls_conv_core_1_1(data)                               ((0x00002000&(data))>>13)
#define  NNWP_sram_ls_2_get_ls_conv_core_1_0(data)                               ((0x00001000&(data))>>12)
#define  NNWP_sram_ls_2_get_ls_conv_core_0_7(data)                               ((0x00000800&(data))>>11)
#define  NNWP_sram_ls_2_get_ls_conv_core_0_6(data)                               ((0x00000400&(data))>>10)
#define  NNWP_sram_ls_2_get_ls_conv_core_0_5(data)                               ((0x00000200&(data))>>9)
#define  NNWP_sram_ls_2_get_ls_conv_core_0_4(data)                               ((0x00000100&(data))>>8)
#define  NNWP_sram_ls_2_get_ls_conv_core_0_3(data)                               ((0x00000080&(data))>>7)
#define  NNWP_sram_ls_2_get_ls_conv_core_0_2(data)                               ((0x00000040&(data))>>6)
#define  NNWP_sram_ls_2_get_ls_conv_core_0_1(data)                               ((0x00000020&(data))>>5)
#define  NNWP_sram_ls_2_get_ls_conv_core_0_0(data)                               ((0x00000010&(data))>>4)
#define  NNWP_sram_ls_2_get_ls_us_cache_1_3(data)                                ((0x00000008&(data))>>3)
#define  NNWP_sram_ls_2_get_ls_us_cache_1_2(data)                                ((0x00000004&(data))>>2)
#define  NNWP_sram_ls_2_get_ls_us_cache_1_1(data)                                ((0x00000002&(data))>>1)
#define  NNWP_sram_ls_2_get_ls_us_cache_1_0(data)                                (0x00000001&(data))

#define  NNWP_nnwp_dmy_r                                                        0x18076FF8
#define  NNWP_nnwp_dmy_r_reg_addr                                                "0xB8076FF8"
#define  NNWP_nnwp_dmy_r_reg                                                     0xB8076FF8
#define  NNWP_nnwp_dmy_r_inst_addr                                               "0x002F"
#define  set_NNWP_nnwp_dmy_r_reg(data)                                           (*((volatile unsigned int*)NNWP_nnwp_dmy_r_reg)=data)
#define  get_NNWP_nnwp_dmy_r_reg                                                 (*((volatile unsigned int*)NNWP_nnwp_dmy_r_reg))
#define  NNWP_nnwp_dmy_r_nonsec_dmy_r_shift                                      (0)
#define  NNWP_nnwp_dmy_r_nonsec_dmy_r_mask                                       (0xFFFFFFFF)
#define  NNWP_nnwp_dmy_r_nonsec_dmy_r(data)                                      (0xFFFFFFFF&(data))
#define  NNWP_nnwp_dmy_r_get_nonsec_dmy_r(data)                                  (0xFFFFFFFF&(data))

#define  NNWP_nnwp_dmy2_rw                                                      0x18076FFC
#define  NNWP_nnwp_dmy2_rw_reg_addr                                              "0xB8076FFC"
#define  NNWP_nnwp_dmy2_rw_reg                                                   0xB8076FFC
#define  NNWP_nnwp_dmy2_rw_inst_addr                                             "0x0030"
#define  set_NNWP_nnwp_dmy2_rw_reg(data)                                         (*((volatile unsigned int*)NNWP_nnwp_dmy2_rw_reg)=data)
#define  get_NNWP_nnwp_dmy2_rw_reg                                               (*((volatile unsigned int*)NNWP_nnwp_dmy2_rw_reg))
#define  NNWP_nnwp_dmy2_rw_nonsec_dmy2_rw_shift                                  (0)
#define  NNWP_nnwp_dmy2_rw_nonsec_dmy2_rw_mask                                   (0xFFFFFFFF)
#define  NNWP_nnwp_dmy2_rw_nonsec_dmy2_rw(data)                                  (0xFFFFFFFF&(data))
#define  NNWP_nnwp_dmy2_rw_get_nonsec_dmy2_rw(data)                              (0xFFFFFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======NNWP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  rstn_hresetn:1;
        RBus_UInt32  rstn_aresetn:1;
        RBus_UInt32  rstn_resetpin_:1;
    };
}nnwp_nnip_reset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  clken_hclk:1;
        RBus_UInt32  clken_aclk:1;
        RBus_UInt32  clken_clkcore:1;
    };
}nnwp_nnip_clken_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  csysack:1;
        RBus_UInt32  cactive:1;
        RBus_UInt32  csysreq:1;
    };
}nnwp_nnip_low_power_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  nnip_prot_nsaid:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  nnip_normal_nsaid:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  nnip_prot_mode_en:1;
        RBus_UInt32  nnip_prot_bit:1;
    };
}nnwp_nnip_protected_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  aruser:9;
        RBus_UInt32  arsnoop:4;
        RBus_UInt32  ardomain:2;
        RBus_UInt32  arbar:2;
    };
}nnwp_ace_lite_ar_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  awuser:9;
        RBus_UInt32  res2:1;
        RBus_UInt32  awsnoop:3;
        RBus_UInt32  awdomain:2;
        RBus_UInt32  awbar:2;
    };
}nnwp_ace_lite_aw_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sec_dmy_r:32;
    };
}nnwp_secure_dmy_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sec_dmy_rw:32;
    };
}nnwp_secure_dmy_rw_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nonsec_dmy1_rw:32;
    };
}nnwp_nnwp_dmy1_rw_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  nnwp_soft_reset:1;
    };
}nnwp_nnwp_reset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  xaq2_int_en:1;
    };
}nnwp_nnip_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  xaq2_intr:1;
    };
}nnwp_nnip_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  dbg_en:1;
        RBus_UInt32  dbg1_sel:4;
        RBus_UInt32  dbg0_sel:4;
    };
}nnwp_debug_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg1_val:16;
        RBus_UInt32  dbg0_val:16;
    };
}nnwp_debug_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  nnwp_rdata_fifo_size:9;
    };
}nnwp_read_channel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  update_nnwp_rdata_fifo_size:1;
    };
}nnwp_read_channel1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  nnwp_grp_mode:3;
        RBus_UInt32  nnwp_grp_write_disable:1;
        RBus_UInt32  nnwp_grp_read_disable:1;
        RBus_UInt32  nnwp_grp_burst_max_num:4;
        RBus_UInt32  nnwp_grp_burst_limit:4;
    };
}nnwp_dc_sys_grp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  nnwp_in_order_mode:1;
    };
}nnwp_in_order_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  nnwp_rd_outstand_num:6;
        RBus_UInt32  res2:10;
        RBus_UInt32  nnwp_wr_outstand_num:6;
    };
}nnwp_outstand_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  nnwp_rd_outstand_cnt:6;
        RBus_UInt32  res2:10;
        RBus_UInt32  nnwp_wr_outstand_cnt:6;
    };
}nnwp_outstand_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  nnwp_endian_swap_mode:2;
        RBus_UInt32  nnwp_endian_swap:1;
    };
}nnwp_endian_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  nnwp_rw_arbitration:2;
    };
}nnwp_rw_arbitration_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  write_bufferable_from_awcache_bit0:1;
        RBus_UInt32  nnwp_wdone_sel:1;
        RBus_UInt32  nnwp_force_write_bufferable:1;
    };
}nnwp_write_bufferable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  rdata_sram_empty:1;
        RBus_UInt32  rdata_sram_full:1;
        RBus_UInt32  rdata_sram_overflow:1;
        RBus_UInt32  dc_remote_cmd_cnt:7;
        RBus_UInt32  dc_rcmd_sync_fifo_empty:1;
        RBus_UInt32  dc_rcmd_sync_fifo_full:1;
        RBus_UInt32  dc_rdata_sync_fifo_empty:1;
        RBus_UInt32  dc_rdata_sync_fifo_full:1;
        RBus_UInt32  dc_wcmd_sync_fifo_empty:1;
        RBus_UInt32  dc_wcmd_sync_fifo_full:1;
        RBus_UInt32  dc_wdata_sync_fifo_empty:1;
        RBus_UInt32  dc_wdata_sync_fifo_full:1;
        RBus_UInt32  res2:2;
    };
}nnwp_dc_fifo_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  axi_awcache_empty:1;
        RBus_UInt32  axi_awcache_full:1;
        RBus_UInt32  axi_rcmd_fifo_empty:1;
        RBus_UInt32  axi_rcmd_fifo_full:1;
        RBus_UInt32  axi_rdata_fifo_empty:1;
        RBus_UInt32  axi_rdata_fifo_full:1;
        RBus_UInt32  axi_wcmd_fifo_empty:1;
        RBus_UInt32  axi_wcmd_fifo_full:1;
        RBus_UInt32  axi_wdata_fifo_empty:1;
        RBus_UInt32  axi_wdata_fifo_full:1;
        RBus_UInt32  axi_wid_empty:1;
        RBus_UInt32  axi_wid_full:1;
    };
}nnwp_axi_fifo_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  dc_idle:1;
        RBus_UInt32  axi_r_idle:1;
        RBus_UInt32  axi_w_idle:1;
    };
}nnwp_wrapper_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  reg_sf_rx_gated:1;
        RBus_UInt32  reg_sf_rx_start:1;
        RBus_UInt32  reg_sf_rx_mode:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  reg_sf_tx_start:1;
        RBus_UInt32  reg_sf_tx_mode:1;
    };
}nnwp_sf_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  reg_sf_rx_fail_bit_status:1;
        RBus_UInt32  reg_sf_rx_debug_bit_sel:8;
        RBus_UInt32  res2:10;
        RBus_UInt32  reg_sf_rx_err:1;
        RBus_UInt32  reg_sf_rx_done:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  reg_sf_tx_work:1;
    };
}nnwp_sf_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  bist_mode_ffm:1;
        RBus_UInt32  bist_mode_core_a:1;
        RBus_UInt32  bist_mode_group_ctrl_2p:1;
        RBus_UInt32  bist_mode_group_ctrl_1p:1;
        RBus_UInt32  bist_mode_merge:1;
        RBus_UInt32  bist_mode_gc_sh_nn_cache:1;
        RBus_UInt32  bist_mode_conv_out_fifo:1;
        RBus_UInt32  bist_mode_backend_merger:1;
        RBus_UInt32  bist_mode_tp_0:1;
        RBus_UInt32  bist_mode_wrapper:1;
        RBus_UInt32  bist_mode_us_cache_0:1;
        RBus_UInt32  bist_mode_us_cache_1:1;
        RBus_UInt32  bist_mode_conv_core_0:1;
        RBus_UInt32  bist_mode_conv_core_1:1;
    };
}nnwp_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  bist_done_ffm:1;
        RBus_UInt32  bist_done_core_a:1;
        RBus_UInt32  bist_done_group_ctrl_2p:1;
        RBus_UInt32  bist_done_group_ctrl_1p:1;
        RBus_UInt32  bist_done_merge:1;
        RBus_UInt32  bist_done_gc_sh_nn_cache:1;
        RBus_UInt32  bist_done_conv_out_fifo:1;
        RBus_UInt32  bist_done_backend_merger:1;
        RBus_UInt32  bist_done_tp_0:1;
        RBus_UInt32  bist_done_wrapper:1;
        RBus_UInt32  bist_done_us_cache_0:1;
        RBus_UInt32  bist_done_us_cache_1:1;
        RBus_UInt32  bist_done_conv_core_0:1;
        RBus_UInt32  bist_done_conv_core_1:1;
    };
}nnwp_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  drf_bist_mode_ffm:1;
        RBus_UInt32  drf_bist_mode_core_a:1;
        RBus_UInt32  drf_bist_mode_group_ctrl_2p:1;
        RBus_UInt32  drf_bist_mode_group_ctrl_1p:1;
        RBus_UInt32  drf_bist_mode_merge:1;
        RBus_UInt32  drf_bist_mode_gc_sh_nn_cache:1;
        RBus_UInt32  drf_bist_mode_conv_out_fifo:1;
        RBus_UInt32  drf_bist_mode_backend_merger:1;
        RBus_UInt32  drf_bist_mode_tp_0:1;
        RBus_UInt32  drf_bist_mode_wrapper:1;
        RBus_UInt32  drf_bist_mode_us_cache_0:1;
        RBus_UInt32  drf_bist_mode_us_cache_1:1;
        RBus_UInt32  drf_bist_mode_conv_core_0:1;
        RBus_UInt32  drf_bist_mode_conv_core_1:1;
    };
}nnwp_drf_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  drf_start_pause_ffm:1;
        RBus_UInt32  drf_start_pause_core_a:1;
        RBus_UInt32  drf_start_pause_group_ctrl_2p:1;
        RBus_UInt32  drf_start_pause_group_ctrl_1p:1;
        RBus_UInt32  drf_start_pause_merge:1;
        RBus_UInt32  drf_start_pause_gc_sh_nn_cache:1;
        RBus_UInt32  drf_start_pause_conv_out_fifo:1;
        RBus_UInt32  drf_start_pause_backend_merger:1;
        RBus_UInt32  drf_start_pause_tp_0:1;
        RBus_UInt32  drf_start_pause_wrapper:1;
        RBus_UInt32  drf_start_pause_us_cache_0:1;
        RBus_UInt32  drf_start_pause_us_cache_1:1;
        RBus_UInt32  drf_start_pause_conv_core_0:1;
        RBus_UInt32  drf_start_pause_conv_core_1:1;
    };
}nnwp_drf_start_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  drf_test_resume_ffm:1;
        RBus_UInt32  drf_test_resume_core_a:1;
        RBus_UInt32  drf_test_resume_group_ctrl_2p:1;
        RBus_UInt32  drf_test_resume_group_ctrl_1p:1;
        RBus_UInt32  drf_test_resume_merge:1;
        RBus_UInt32  drf_test_resume_gc_sh_nn_cache:1;
        RBus_UInt32  drf_test_resume_conv_out_fifo:1;
        RBus_UInt32  drf_test_resume_backend_merger:1;
        RBus_UInt32  drf_test_resume_tp_0:1;
        RBus_UInt32  drf_test_resume_wrapper:1;
        RBus_UInt32  drf_test_resume_us_cache_0:1;
        RBus_UInt32  drf_test_resume_us_cache_1:1;
        RBus_UInt32  drf_test_resume_conv_core_0:1;
        RBus_UInt32  drf_test_resume_conv_core_1:1;
    };
}nnwp_drf_test_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  drf_bist_done_ffm:1;
        RBus_UInt32  drf_bist_done_core_a:1;
        RBus_UInt32  drf_bist_done_group_ctrl_2p:1;
        RBus_UInt32  drf_bist_done_group_ctrl_1p:1;
        RBus_UInt32  drf_bist_done_merge:1;
        RBus_UInt32  drf_bist_done_gc_sh_nn_cache:1;
        RBus_UInt32  drf_bist_done_conv_out_fifo:1;
        RBus_UInt32  drf_bist_done_backend_merger:1;
        RBus_UInt32  drf_bist_done_tp_0:1;
        RBus_UInt32  drf_bist_done_wrapper:1;
        RBus_UInt32  drf_bist_done_us_cache_0:1;
        RBus_UInt32  drf_bist_done_us_cache_1:1;
        RBus_UInt32  drf_bist_done_conv_core_0:1;
        RBus_UInt32  drf_bist_done_conv_core_1:1;
    };
}nnwp_drf_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  bist_fail_group_ffm:1;
        RBus_UInt32  bist_fail_group_core_a:1;
        RBus_UInt32  bist_fail_group_group_ctrl_2p:1;
        RBus_UInt32  bist_fail_group_group_ctrl_1p:1;
        RBus_UInt32  bist_fail_group_merge:1;
        RBus_UInt32  bist_fail_group_gc_sh_nn_cache:1;
        RBus_UInt32  bist_fail_group_conv_out_fifo:1;
        RBus_UInt32  bist_fail_group_backend_merger:1;
        RBus_UInt32  bist_fail_group_tp_0:1;
        RBus_UInt32  bist_fail_group_wrapper:1;
        RBus_UInt32  bist_fail_group_us_cache_0:1;
        RBus_UInt32  bist_fail_group_us_cache_1:1;
        RBus_UInt32  bist_fail_group_conv_core_0:1;
        RBus_UInt32  bist_fail_group_conv_core_1:1;
    };
}nnwp_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_fail_backend_merger_2:1;
        RBus_UInt32  bist_fail_backend_merger_1:1;
        RBus_UInt32  bist_fail_backend_merger_0:1;
        RBus_UInt32  bist_fail_merge_6:1;
        RBus_UInt32  bist_fail_merge_5:1;
        RBus_UInt32  bist_fail_merge_4:1;
        RBus_UInt32  bist_fail_merge_3:1;
        RBus_UInt32  bist_fail_merge_2:1;
        RBus_UInt32  bist_fail_merge_1:1;
        RBus_UInt32  bist_fail_merge_0:1;
        RBus_UInt32  bist_fail_group_ctrl_1p_2:1;
        RBus_UInt32  bist_fail_group_ctrl_1p_1:1;
        RBus_UInt32  bist_fail_group_ctrl_1p_0:1;
        RBus_UInt32  bist_fail_group_ctrl_2p_3:1;
        RBus_UInt32  bist_fail_group_ctrl_2p_2:1;
        RBus_UInt32  bist_fail_group_ctrl_2p_1:1;
        RBus_UInt32  bist_fail_group_ctrl_2p_0:1;
        RBus_UInt32  bist_fail_core_a_9:1;
        RBus_UInt32  bist_fail_core_a_8:1;
        RBus_UInt32  bist_fail_core_a_7:1;
        RBus_UInt32  bist_fail_core_a_6:1;
        RBus_UInt32  bist_fail_core_a_5:1;
        RBus_UInt32  bist_fail_core_a_4:1;
        RBus_UInt32  bist_fail_core_a_3:1;
        RBus_UInt32  bist_fail_core_a_2:1;
        RBus_UInt32  bist_fail_core_a_1:1;
        RBus_UInt32  bist_fail_core_a_0:1;
        RBus_UInt32  bist_fail_ffm_4:1;
        RBus_UInt32  bist_fail_ffm_3:1;
        RBus_UInt32  bist_fail_ffm_2:1;
        RBus_UInt32  bist_fail_ffm_1:1;
        RBus_UInt32  bist_fail_ffm_0:1;
    };
}nnwp_bist_fail_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_fail_us_cache_0_11:1;
        RBus_UInt32  bist_fail_us_cache_0_10:1;
        RBus_UInt32  bist_fail_us_cache_0_9:1;
        RBus_UInt32  bist_fail_us_cache_0_8:1;
        RBus_UInt32  bist_fail_us_cache_0_7:1;
        RBus_UInt32  bist_fail_us_cache_0_6:1;
        RBus_UInt32  bist_fail_us_cache_0_5:1;
        RBus_UInt32  bist_fail_us_cache_0_4:1;
        RBus_UInt32  bist_fail_us_cache_0_3:1;
        RBus_UInt32  bist_fail_us_cache_0_2:1;
        RBus_UInt32  bist_fail_us_cache_0_1:1;
        RBus_UInt32  bist_fail_us_cache_0_0:1;
        RBus_UInt32  bist_fail_wrapper:1;
        RBus_UInt32  bist_fail_tp_0_6:1;
        RBus_UInt32  bist_fail_tp_0_5:1;
        RBus_UInt32  bist_fail_tp_0_4:1;
        RBus_UInt32  bist_fail_tp_0_3:1;
        RBus_UInt32  bist_fail_tp_0_2:1;
        RBus_UInt32  bist_fail_tp_0_1:1;
        RBus_UInt32  bist_fail_tp_0_0:1;
        RBus_UInt32  bist_fail_conv_out_fifo_7:1;
        RBus_UInt32  bist_fail_conv_out_fifo_6:1;
        RBus_UInt32  bist_fail_conv_out_fifo_5:1;
        RBus_UInt32  bist_fail_conv_out_fifo_4:1;
        RBus_UInt32  bist_fail_conv_out_fifo_3:1;
        RBus_UInt32  bist_fail_conv_out_fifo_2:1;
        RBus_UInt32  bist_fail_conv_out_fifo_1:1;
        RBus_UInt32  bist_fail_conv_out_fifo_0:1;
        RBus_UInt32  bist_fail_gc_sh_nn_cache_3:1;
        RBus_UInt32  bist_fail_gc_sh_nn_cache_2:1;
        RBus_UInt32  bist_fail_gc_sh_nn_cache_1:1;
        RBus_UInt32  bist_fail_gc_sh_nn_cache_0:1;
    };
}nnwp_bist_fail_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  bist_fail_conv_core_1_7:1;
        RBus_UInt32  bist_fail_conv_core_1_6:1;
        RBus_UInt32  bist_fail_conv_core_1_5:1;
        RBus_UInt32  bist_fail_conv_core_1_4:1;
        RBus_UInt32  bist_fail_conv_core_1_3:1;
        RBus_UInt32  bist_fail_conv_core_1_2:1;
        RBus_UInt32  bist_fail_conv_core_1_1:1;
        RBus_UInt32  bist_fail_conv_core_1_0:1;
        RBus_UInt32  bist_fail_conv_core_0_7:1;
        RBus_UInt32  bist_fail_conv_core_0_6:1;
        RBus_UInt32  bist_fail_conv_core_0_5:1;
        RBus_UInt32  bist_fail_conv_core_0_4:1;
        RBus_UInt32  bist_fail_conv_core_0_3:1;
        RBus_UInt32  bist_fail_conv_core_0_2:1;
        RBus_UInt32  bist_fail_conv_core_0_1:1;
        RBus_UInt32  bist_fail_conv_core_0_0:1;
        RBus_UInt32  bist_fail_us_cache_1_3:1;
        RBus_UInt32  bist_fail_us_cache_1_2:1;
        RBus_UInt32  bist_fail_us_cache_1_1:1;
        RBus_UInt32  bist_fail_us_cache_1_0:1;
    };
}nnwp_bist_fail_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  drf_bist_fail_group_ffm:1;
        RBus_UInt32  drf_bist_fail_group_core_a:1;
        RBus_UInt32  drf_bist_fail_group_group_ctrl_2p:1;
        RBus_UInt32  drf_bist_fail_group_group_ctrl_1p:1;
        RBus_UInt32  drf_bist_fail_group_merge:1;
        RBus_UInt32  drf_bist_fail_group_gc_sh_nn_cache:1;
        RBus_UInt32  drf_bist_fail_group_conv_out_fifo:1;
        RBus_UInt32  drf_bist_fail_group_backend_merger:1;
        RBus_UInt32  drf_bist_fail_group_tp_0:1;
        RBus_UInt32  drf_bist_fail_group_wrapper:1;
        RBus_UInt32  drf_bist_fail_group_us_cache_0:1;
        RBus_UInt32  drf_bist_fail_group_us_cache_1:1;
        RBus_UInt32  drf_bist_fail_group_conv_core_0:1;
        RBus_UInt32  drf_bist_fail_group_conv_core_1:1;
    };
}nnwp_drf_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_bist_fail_backend_merger_2:1;
        RBus_UInt32  drf_bist_fail_backend_merger_1:1;
        RBus_UInt32  drf_bist_fail_backend_merger_0:1;
        RBus_UInt32  drf_bist_fail_merge_6:1;
        RBus_UInt32  drf_bist_fail_merge_5:1;
        RBus_UInt32  drf_bist_fail_merge_4:1;
        RBus_UInt32  drf_bist_fail_merge_3:1;
        RBus_UInt32  drf_bist_fail_merge_2:1;
        RBus_UInt32  drf_bist_fail_merge_1:1;
        RBus_UInt32  drf_bist_fail_merge_0:1;
        RBus_UInt32  drf_bist_fail_group_ctrl_1p_2:1;
        RBus_UInt32  drf_bist_fail_group_ctrl_1p_1:1;
        RBus_UInt32  drf_bist_fail_group_ctrl_1p_0:1;
        RBus_UInt32  drf_bist_fail_group_ctrl_2p_3:1;
        RBus_UInt32  drf_bist_fail_group_ctrl_2p_2:1;
        RBus_UInt32  drf_bist_fail_group_ctrl_2p_1:1;
        RBus_UInt32  drf_bist_fail_group_ctrl_2p_0:1;
        RBus_UInt32  drf_bist_fail_core_a_9:1;
        RBus_UInt32  drf_bist_fail_core_a_8:1;
        RBus_UInt32  drf_bist_fail_core_a_7:1;
        RBus_UInt32  drf_bist_fail_core_a_6:1;
        RBus_UInt32  drf_bist_fail_core_a_5:1;
        RBus_UInt32  drf_bist_fail_core_a_4:1;
        RBus_UInt32  drf_bist_fail_core_a_3:1;
        RBus_UInt32  drf_bist_fail_core_a_2:1;
        RBus_UInt32  drf_bist_fail_core_a_1:1;
        RBus_UInt32  drf_bist_fail_core_a_0:1;
        RBus_UInt32  drf_bist_fail_ffm_4:1;
        RBus_UInt32  drf_bist_fail_ffm_3:1;
        RBus_UInt32  drf_bist_fail_ffm_2:1;
        RBus_UInt32  drf_bist_fail_ffm_1:1;
        RBus_UInt32  drf_bist_fail_ffm_0:1;
    };
}nnwp_drf_bist_fail_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_bist_fail_us_cache_0_11:1;
        RBus_UInt32  drf_bist_fail_us_cache_0_10:1;
        RBus_UInt32  drf_bist_fail_us_cache_0_9:1;
        RBus_UInt32  drf_bist_fail_us_cache_0_8:1;
        RBus_UInt32  drf_bist_fail_us_cache_0_7:1;
        RBus_UInt32  drf_bist_fail_us_cache_0_6:1;
        RBus_UInt32  drf_bist_fail_us_cache_0_5:1;
        RBus_UInt32  drf_bist_fail_us_cache_0_4:1;
        RBus_UInt32  drf_bist_fail_us_cache_0_3:1;
        RBus_UInt32  drf_bist_fail_us_cache_0_2:1;
        RBus_UInt32  drf_bist_fail_us_cache_0_1:1;
        RBus_UInt32  drf_bist_fail_us_cache_0_0:1;
        RBus_UInt32  drf_bist_fail_wrapper:1;
        RBus_UInt32  drf_bist_fail_tp_0_6:1;
        RBus_UInt32  drf_bist_fail_tp_0_5:1;
        RBus_UInt32  drf_bist_fail_tp_0_4:1;
        RBus_UInt32  drf_bist_fail_tp_0_3:1;
        RBus_UInt32  drf_bist_fail_tp_0_2:1;
        RBus_UInt32  drf_bist_fail_tp_0_1:1;
        RBus_UInt32  drf_bist_fail_tp_0_0:1;
        RBus_UInt32  drf_bist_fail_conv_out_fifo_7:1;
        RBus_UInt32  drf_bist_fail_conv_out_fifo_6:1;
        RBus_UInt32  drf_bist_fail_conv_out_fifo_5:1;
        RBus_UInt32  drf_bist_fail_conv_out_fifo_4:1;
        RBus_UInt32  drf_bist_fail_conv_out_fifo_3:1;
        RBus_UInt32  drf_bist_fail_conv_out_fifo_2:1;
        RBus_UInt32  drf_bist_fail_conv_out_fifo_1:1;
        RBus_UInt32  drf_bist_fail_conv_out_fifo_0:1;
        RBus_UInt32  drf_bist_fail_gc_sh_nn_cache_3:1;
        RBus_UInt32  drf_bist_fail_gc_sh_nn_cache_2:1;
        RBus_UInt32  drf_bist_fail_gc_sh_nn_cache_1:1;
        RBus_UInt32  drf_bist_fail_gc_sh_nn_cache_0:1;
    };
}nnwp_drf_bist_fail_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  drf_bist_fail_conv_core_1_7:1;
        RBus_UInt32  drf_bist_fail_conv_core_1_6:1;
        RBus_UInt32  drf_bist_fail_conv_core_1_5:1;
        RBus_UInt32  drf_bist_fail_conv_core_1_4:1;
        RBus_UInt32  drf_bist_fail_conv_core_1_3:1;
        RBus_UInt32  drf_bist_fail_conv_core_1_2:1;
        RBus_UInt32  drf_bist_fail_conv_core_1_1:1;
        RBus_UInt32  drf_bist_fail_conv_core_1_0:1;
        RBus_UInt32  drf_bist_fail_conv_core_0_7:1;
        RBus_UInt32  drf_bist_fail_conv_core_0_6:1;
        RBus_UInt32  drf_bist_fail_conv_core_0_5:1;
        RBus_UInt32  drf_bist_fail_conv_core_0_4:1;
        RBus_UInt32  drf_bist_fail_conv_core_0_3:1;
        RBus_UInt32  drf_bist_fail_conv_core_0_2:1;
        RBus_UInt32  drf_bist_fail_conv_core_0_1:1;
        RBus_UInt32  drf_bist_fail_conv_core_0_0:1;
        RBus_UInt32  drf_bist_fail_us_cache_1_3:1;
        RBus_UInt32  drf_bist_fail_us_cache_1_2:1;
        RBus_UInt32  drf_bist_fail_us_cache_1_1:1;
        RBus_UInt32  drf_bist_fail_us_cache_1_0:1;
    };
}nnwp_drf_bist_fail_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  nnwp_test1:1;
        RBus_UInt32  nnwp_testrwm:1;
        RBus_UInt32  nnwp_rme:1;
        RBus_UInt32  nnwp_rm:4;
    };
}nnwp_nnwp_sram_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  nnip_test1:1;
        RBus_UInt32  nnip_testrwm:1;
        RBus_UInt32  nnip_rme:1;
        RBus_UInt32  nnip_rm:4;
    };
}nnwp_nn_sram_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ls_backend_merger_2:1;
        RBus_UInt32  ls_backend_merger_1:1;
        RBus_UInt32  ls_backend_merger_0:1;
        RBus_UInt32  ls_merge_6:1;
        RBus_UInt32  ls_merge_5:1;
        RBus_UInt32  ls_merge_4:1;
        RBus_UInt32  ls_merge_3:1;
        RBus_UInt32  ls_merge_2:1;
        RBus_UInt32  ls_merge_1:1;
        RBus_UInt32  ls_merge_0:1;
        RBus_UInt32  ls_group_ctrl_1p_2:1;
        RBus_UInt32  ls_group_ctrl_1p_1:1;
        RBus_UInt32  ls_group_ctrl_1p_0:1;
        RBus_UInt32  ls_group_ctrl_2p_3:1;
        RBus_UInt32  ls_group_ctrl_2p_2:1;
        RBus_UInt32  ls_group_ctrl_2p_1:1;
        RBus_UInt32  ls_group_ctrl_2p_0:1;
        RBus_UInt32  ls_core_a_9:1;
        RBus_UInt32  ls_core_a_8:1;
        RBus_UInt32  ls_core_a_7:1;
        RBus_UInt32  ls_core_a_6:1;
        RBus_UInt32  ls_core_a_5:1;
        RBus_UInt32  ls_core_a_4:1;
        RBus_UInt32  ls_core_a_3:1;
        RBus_UInt32  ls_core_a_2:1;
        RBus_UInt32  ls_core_a_1:1;
        RBus_UInt32  ls_core_a_0:1;
        RBus_UInt32  ls_ffm_4:1;
        RBus_UInt32  ls_ffm_3:1;
        RBus_UInt32  ls_ffm_2:1;
        RBus_UInt32  ls_ffm_1:1;
        RBus_UInt32  ls_ffm_0:1;
    };
}nnwp_sram_ls_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ls_us_cache_0_11:1;
        RBus_UInt32  ls_us_cache_0_10:1;
        RBus_UInt32  ls_us_cache_0_9:1;
        RBus_UInt32  ls_us_cache_0_8:1;
        RBus_UInt32  ls_us_cache_0_7:1;
        RBus_UInt32  ls_us_cache_0_6:1;
        RBus_UInt32  ls_us_cache_0_5:1;
        RBus_UInt32  ls_us_cache_0_4:1;
        RBus_UInt32  ls_us_cache_0_3:1;
        RBus_UInt32  ls_us_cache_0_2:1;
        RBus_UInt32  ls_us_cache_0_1:1;
        RBus_UInt32  ls_us_cache_0_0:1;
        RBus_UInt32  ls_wrapper:1;
        RBus_UInt32  ls_tp_0_6:1;
        RBus_UInt32  ls_tp_0_5:1;
        RBus_UInt32  ls_tp_0_4:1;
        RBus_UInt32  ls_tp_0_3:1;
        RBus_UInt32  ls_tp_0_2:1;
        RBus_UInt32  ls_tp_0_1:1;
        RBus_UInt32  ls_tp_0_0:1;
        RBus_UInt32  ls_conv_out_fifo_7:1;
        RBus_UInt32  ls_conv_out_fifo_6:1;
        RBus_UInt32  ls_conv_out_fifo_5:1;
        RBus_UInt32  ls_conv_out_fifo_4:1;
        RBus_UInt32  ls_conv_out_fifo_3:1;
        RBus_UInt32  ls_conv_out_fifo_2:1;
        RBus_UInt32  ls_conv_out_fifo_1:1;
        RBus_UInt32  ls_conv_out_fifo_0:1;
        RBus_UInt32  ls_gc_sh_nn_cache_3:1;
        RBus_UInt32  ls_gc_sh_nn_cache_2:1;
        RBus_UInt32  ls_gc_sh_nn_cache_1:1;
        RBus_UInt32  ls_gc_sh_nn_cache_0:1;
    };
}nnwp_sram_ls_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ls_conv_core_1_7:1;
        RBus_UInt32  ls_conv_core_1_6:1;
        RBus_UInt32  ls_conv_core_1_5:1;
        RBus_UInt32  ls_conv_core_1_4:1;
        RBus_UInt32  ls_conv_core_1_3:1;
        RBus_UInt32  ls_conv_core_1_2:1;
        RBus_UInt32  ls_conv_core_1_1:1;
        RBus_UInt32  ls_conv_core_1_0:1;
        RBus_UInt32  ls_conv_core_0_7:1;
        RBus_UInt32  ls_conv_core_0_6:1;
        RBus_UInt32  ls_conv_core_0_5:1;
        RBus_UInt32  ls_conv_core_0_4:1;
        RBus_UInt32  ls_conv_core_0_3:1;
        RBus_UInt32  ls_conv_core_0_2:1;
        RBus_UInt32  ls_conv_core_0_1:1;
        RBus_UInt32  ls_conv_core_0_0:1;
        RBus_UInt32  ls_us_cache_1_3:1;
        RBus_UInt32  ls_us_cache_1_2:1;
        RBus_UInt32  ls_us_cache_1_1:1;
        RBus_UInt32  ls_us_cache_1_0:1;
    };
}nnwp_sram_ls_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nonsec_dmy_r:32;
    };
}nnwp_nnwp_dmy_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nonsec_dmy2_rw:32;
    };
}nnwp_nnwp_dmy2_rw_RBUS;

#else //apply LITTLE_ENDIAN

//======NNWP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rstn_resetpin_:1;
        RBus_UInt32  rstn_aresetn:1;
        RBus_UInt32  rstn_hresetn:1;
        RBus_UInt32  res1:29;
    };
}nnwp_nnip_reset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clken_clkcore:1;
        RBus_UInt32  clken_aclk:1;
        RBus_UInt32  clken_hclk:1;
        RBus_UInt32  res1:29;
    };
}nnwp_nnip_clken_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  csysreq:1;
        RBus_UInt32  cactive:1;
        RBus_UInt32  csysack:1;
        RBus_UInt32  res1:29;
    };
}nnwp_nnip_low_power_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nnip_prot_bit:1;
        RBus_UInt32  nnip_prot_mode_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  nnip_normal_nsaid:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  nnip_prot_nsaid:2;
        RBus_UInt32  res3:22;
    };
}nnwp_nnip_protected_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  arbar:2;
        RBus_UInt32  ardomain:2;
        RBus_UInt32  arsnoop:4;
        RBus_UInt32  aruser:9;
        RBus_UInt32  res1:15;
    };
}nnwp_ace_lite_ar_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  awbar:2;
        RBus_UInt32  awdomain:2;
        RBus_UInt32  awsnoop:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  awuser:9;
        RBus_UInt32  res2:15;
    };
}nnwp_ace_lite_aw_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sec_dmy_r:32;
    };
}nnwp_secure_dmy_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sec_dmy_rw:32;
    };
}nnwp_secure_dmy_rw_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nonsec_dmy1_rw:32;
    };
}nnwp_nnwp_dmy1_rw_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nnwp_soft_reset:1;
        RBus_UInt32  res1:31;
    };
}nnwp_nnwp_reset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xaq2_int_en:1;
        RBus_UInt32  res1:31;
    };
}nnwp_nnip_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xaq2_intr:1;
        RBus_UInt32  res1:31;
    };
}nnwp_nnip_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg0_sel:4;
        RBus_UInt32  dbg1_sel:4;
        RBus_UInt32  dbg_en:1;
        RBus_UInt32  res1:23;
    };
}nnwp_debug_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg0_val:16;
        RBus_UInt32  dbg1_val:16;
    };
}nnwp_debug_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nnwp_rdata_fifo_size:9;
        RBus_UInt32  res1:23;
    };
}nnwp_read_channel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  update_nnwp_rdata_fifo_size:1;
        RBus_UInt32  res1:31;
    };
}nnwp_read_channel1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nnwp_grp_burst_limit:4;
        RBus_UInt32  nnwp_grp_burst_max_num:4;
        RBus_UInt32  nnwp_grp_read_disable:1;
        RBus_UInt32  nnwp_grp_write_disable:1;
        RBus_UInt32  nnwp_grp_mode:3;
        RBus_UInt32  res1:19;
    };
}nnwp_dc_sys_grp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nnwp_in_order_mode:1;
        RBus_UInt32  res1:31;
    };
}nnwp_in_order_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nnwp_wr_outstand_num:6;
        RBus_UInt32  res1:10;
        RBus_UInt32  nnwp_rd_outstand_num:6;
        RBus_UInt32  res2:10;
    };
}nnwp_outstand_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nnwp_wr_outstand_cnt:6;
        RBus_UInt32  res1:10;
        RBus_UInt32  nnwp_rd_outstand_cnt:6;
        RBus_UInt32  res2:10;
    };
}nnwp_outstand_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nnwp_endian_swap:1;
        RBus_UInt32  nnwp_endian_swap_mode:2;
        RBus_UInt32  res1:29;
    };
}nnwp_endian_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nnwp_rw_arbitration:2;
        RBus_UInt32  res1:30;
    };
}nnwp_rw_arbitration_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nnwp_force_write_bufferable:1;
        RBus_UInt32  nnwp_wdone_sel:1;
        RBus_UInt32  write_bufferable_from_awcache_bit0:1;
        RBus_UInt32  res1:29;
    };
}nnwp_write_bufferable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dc_wdata_sync_fifo_full:1;
        RBus_UInt32  dc_wdata_sync_fifo_empty:1;
        RBus_UInt32  dc_wcmd_sync_fifo_full:1;
        RBus_UInt32  dc_wcmd_sync_fifo_empty:1;
        RBus_UInt32  dc_rdata_sync_fifo_full:1;
        RBus_UInt32  dc_rdata_sync_fifo_empty:1;
        RBus_UInt32  dc_rcmd_sync_fifo_full:1;
        RBus_UInt32  dc_rcmd_sync_fifo_empty:1;
        RBus_UInt32  dc_remote_cmd_cnt:7;
        RBus_UInt32  rdata_sram_overflow:1;
        RBus_UInt32  rdata_sram_full:1;
        RBus_UInt32  rdata_sram_empty:1;
        RBus_UInt32  res2:12;
    };
}nnwp_dc_fifo_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  axi_wid_full:1;
        RBus_UInt32  axi_wid_empty:1;
        RBus_UInt32  axi_wdata_fifo_full:1;
        RBus_UInt32  axi_wdata_fifo_empty:1;
        RBus_UInt32  axi_wcmd_fifo_full:1;
        RBus_UInt32  axi_wcmd_fifo_empty:1;
        RBus_UInt32  axi_rdata_fifo_full:1;
        RBus_UInt32  axi_rdata_fifo_empty:1;
        RBus_UInt32  axi_rcmd_fifo_full:1;
        RBus_UInt32  axi_rcmd_fifo_empty:1;
        RBus_UInt32  axi_awcache_full:1;
        RBus_UInt32  axi_awcache_empty:1;
        RBus_UInt32  res1:20;
    };
}nnwp_axi_fifo_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  axi_w_idle:1;
        RBus_UInt32  axi_r_idle:1;
        RBus_UInt32  dc_idle:1;
        RBus_UInt32  res1:29;
    };
}nnwp_wrapper_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_sf_tx_mode:1;
        RBus_UInt32  reg_sf_tx_start:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_sf_rx_mode:1;
        RBus_UInt32  reg_sf_rx_start:1;
        RBus_UInt32  reg_sf_rx_gated:1;
        RBus_UInt32  res2:25;
    };
}nnwp_sf_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_sf_tx_work:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_sf_rx_done:1;
        RBus_UInt32  reg_sf_rx_err:1;
        RBus_UInt32  res2:10;
        RBus_UInt32  reg_sf_rx_debug_bit_sel:8;
        RBus_UInt32  reg_sf_rx_fail_bit_status:1;
        RBus_UInt32  res3:7;
    };
}nnwp_sf_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_mode_conv_core_1:1;
        RBus_UInt32  bist_mode_conv_core_0:1;
        RBus_UInt32  bist_mode_us_cache_1:1;
        RBus_UInt32  bist_mode_us_cache_0:1;
        RBus_UInt32  bist_mode_wrapper:1;
        RBus_UInt32  bist_mode_tp_0:1;
        RBus_UInt32  bist_mode_backend_merger:1;
        RBus_UInt32  bist_mode_conv_out_fifo:1;
        RBus_UInt32  bist_mode_gc_sh_nn_cache:1;
        RBus_UInt32  bist_mode_merge:1;
        RBus_UInt32  bist_mode_group_ctrl_1p:1;
        RBus_UInt32  bist_mode_group_ctrl_2p:1;
        RBus_UInt32  bist_mode_core_a:1;
        RBus_UInt32  bist_mode_ffm:1;
        RBus_UInt32  res1:18;
    };
}nnwp_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_done_conv_core_1:1;
        RBus_UInt32  bist_done_conv_core_0:1;
        RBus_UInt32  bist_done_us_cache_1:1;
        RBus_UInt32  bist_done_us_cache_0:1;
        RBus_UInt32  bist_done_wrapper:1;
        RBus_UInt32  bist_done_tp_0:1;
        RBus_UInt32  bist_done_backend_merger:1;
        RBus_UInt32  bist_done_conv_out_fifo:1;
        RBus_UInt32  bist_done_gc_sh_nn_cache:1;
        RBus_UInt32  bist_done_merge:1;
        RBus_UInt32  bist_done_group_ctrl_1p:1;
        RBus_UInt32  bist_done_group_ctrl_2p:1;
        RBus_UInt32  bist_done_core_a:1;
        RBus_UInt32  bist_done_ffm:1;
        RBus_UInt32  res1:18;
    };
}nnwp_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_bist_mode_conv_core_1:1;
        RBus_UInt32  drf_bist_mode_conv_core_0:1;
        RBus_UInt32  drf_bist_mode_us_cache_1:1;
        RBus_UInt32  drf_bist_mode_us_cache_0:1;
        RBus_UInt32  drf_bist_mode_wrapper:1;
        RBus_UInt32  drf_bist_mode_tp_0:1;
        RBus_UInt32  drf_bist_mode_backend_merger:1;
        RBus_UInt32  drf_bist_mode_conv_out_fifo:1;
        RBus_UInt32  drf_bist_mode_gc_sh_nn_cache:1;
        RBus_UInt32  drf_bist_mode_merge:1;
        RBus_UInt32  drf_bist_mode_group_ctrl_1p:1;
        RBus_UInt32  drf_bist_mode_group_ctrl_2p:1;
        RBus_UInt32  drf_bist_mode_core_a:1;
        RBus_UInt32  drf_bist_mode_ffm:1;
        RBus_UInt32  res1:18;
    };
}nnwp_drf_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_start_pause_conv_core_1:1;
        RBus_UInt32  drf_start_pause_conv_core_0:1;
        RBus_UInt32  drf_start_pause_us_cache_1:1;
        RBus_UInt32  drf_start_pause_us_cache_0:1;
        RBus_UInt32  drf_start_pause_wrapper:1;
        RBus_UInt32  drf_start_pause_tp_0:1;
        RBus_UInt32  drf_start_pause_backend_merger:1;
        RBus_UInt32  drf_start_pause_conv_out_fifo:1;
        RBus_UInt32  drf_start_pause_gc_sh_nn_cache:1;
        RBus_UInt32  drf_start_pause_merge:1;
        RBus_UInt32  drf_start_pause_group_ctrl_1p:1;
        RBus_UInt32  drf_start_pause_group_ctrl_2p:1;
        RBus_UInt32  drf_start_pause_core_a:1;
        RBus_UInt32  drf_start_pause_ffm:1;
        RBus_UInt32  res1:18;
    };
}nnwp_drf_start_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_test_resume_conv_core_1:1;
        RBus_UInt32  drf_test_resume_conv_core_0:1;
        RBus_UInt32  drf_test_resume_us_cache_1:1;
        RBus_UInt32  drf_test_resume_us_cache_0:1;
        RBus_UInt32  drf_test_resume_wrapper:1;
        RBus_UInt32  drf_test_resume_tp_0:1;
        RBus_UInt32  drf_test_resume_backend_merger:1;
        RBus_UInt32  drf_test_resume_conv_out_fifo:1;
        RBus_UInt32  drf_test_resume_gc_sh_nn_cache:1;
        RBus_UInt32  drf_test_resume_merge:1;
        RBus_UInt32  drf_test_resume_group_ctrl_1p:1;
        RBus_UInt32  drf_test_resume_group_ctrl_2p:1;
        RBus_UInt32  drf_test_resume_core_a:1;
        RBus_UInt32  drf_test_resume_ffm:1;
        RBus_UInt32  res1:18;
    };
}nnwp_drf_test_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_bist_done_conv_core_1:1;
        RBus_UInt32  drf_bist_done_conv_core_0:1;
        RBus_UInt32  drf_bist_done_us_cache_1:1;
        RBus_UInt32  drf_bist_done_us_cache_0:1;
        RBus_UInt32  drf_bist_done_wrapper:1;
        RBus_UInt32  drf_bist_done_tp_0:1;
        RBus_UInt32  drf_bist_done_backend_merger:1;
        RBus_UInt32  drf_bist_done_conv_out_fifo:1;
        RBus_UInt32  drf_bist_done_gc_sh_nn_cache:1;
        RBus_UInt32  drf_bist_done_merge:1;
        RBus_UInt32  drf_bist_done_group_ctrl_1p:1;
        RBus_UInt32  drf_bist_done_group_ctrl_2p:1;
        RBus_UInt32  drf_bist_done_core_a:1;
        RBus_UInt32  drf_bist_done_ffm:1;
        RBus_UInt32  res1:18;
    };
}nnwp_drf_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_fail_group_conv_core_1:1;
        RBus_UInt32  bist_fail_group_conv_core_0:1;
        RBus_UInt32  bist_fail_group_us_cache_1:1;
        RBus_UInt32  bist_fail_group_us_cache_0:1;
        RBus_UInt32  bist_fail_group_wrapper:1;
        RBus_UInt32  bist_fail_group_tp_0:1;
        RBus_UInt32  bist_fail_group_backend_merger:1;
        RBus_UInt32  bist_fail_group_conv_out_fifo:1;
        RBus_UInt32  bist_fail_group_gc_sh_nn_cache:1;
        RBus_UInt32  bist_fail_group_merge:1;
        RBus_UInt32  bist_fail_group_group_ctrl_1p:1;
        RBus_UInt32  bist_fail_group_group_ctrl_2p:1;
        RBus_UInt32  bist_fail_group_core_a:1;
        RBus_UInt32  bist_fail_group_ffm:1;
        RBus_UInt32  res1:18;
    };
}nnwp_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_fail_ffm_0:1;
        RBus_UInt32  bist_fail_ffm_1:1;
        RBus_UInt32  bist_fail_ffm_2:1;
        RBus_UInt32  bist_fail_ffm_3:1;
        RBus_UInt32  bist_fail_ffm_4:1;
        RBus_UInt32  bist_fail_core_a_0:1;
        RBus_UInt32  bist_fail_core_a_1:1;
        RBus_UInt32  bist_fail_core_a_2:1;
        RBus_UInt32  bist_fail_core_a_3:1;
        RBus_UInt32  bist_fail_core_a_4:1;
        RBus_UInt32  bist_fail_core_a_5:1;
        RBus_UInt32  bist_fail_core_a_6:1;
        RBus_UInt32  bist_fail_core_a_7:1;
        RBus_UInt32  bist_fail_core_a_8:1;
        RBus_UInt32  bist_fail_core_a_9:1;
        RBus_UInt32  bist_fail_group_ctrl_2p_0:1;
        RBus_UInt32  bist_fail_group_ctrl_2p_1:1;
        RBus_UInt32  bist_fail_group_ctrl_2p_2:1;
        RBus_UInt32  bist_fail_group_ctrl_2p_3:1;
        RBus_UInt32  bist_fail_group_ctrl_1p_0:1;
        RBus_UInt32  bist_fail_group_ctrl_1p_1:1;
        RBus_UInt32  bist_fail_group_ctrl_1p_2:1;
        RBus_UInt32  bist_fail_merge_0:1;
        RBus_UInt32  bist_fail_merge_1:1;
        RBus_UInt32  bist_fail_merge_2:1;
        RBus_UInt32  bist_fail_merge_3:1;
        RBus_UInt32  bist_fail_merge_4:1;
        RBus_UInt32  bist_fail_merge_5:1;
        RBus_UInt32  bist_fail_merge_6:1;
        RBus_UInt32  bist_fail_backend_merger_0:1;
        RBus_UInt32  bist_fail_backend_merger_1:1;
        RBus_UInt32  bist_fail_backend_merger_2:1;
    };
}nnwp_bist_fail_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_fail_gc_sh_nn_cache_0:1;
        RBus_UInt32  bist_fail_gc_sh_nn_cache_1:1;
        RBus_UInt32  bist_fail_gc_sh_nn_cache_2:1;
        RBus_UInt32  bist_fail_gc_sh_nn_cache_3:1;
        RBus_UInt32  bist_fail_conv_out_fifo_0:1;
        RBus_UInt32  bist_fail_conv_out_fifo_1:1;
        RBus_UInt32  bist_fail_conv_out_fifo_2:1;
        RBus_UInt32  bist_fail_conv_out_fifo_3:1;
        RBus_UInt32  bist_fail_conv_out_fifo_4:1;
        RBus_UInt32  bist_fail_conv_out_fifo_5:1;
        RBus_UInt32  bist_fail_conv_out_fifo_6:1;
        RBus_UInt32  bist_fail_conv_out_fifo_7:1;
        RBus_UInt32  bist_fail_tp_0_0:1;
        RBus_UInt32  bist_fail_tp_0_1:1;
        RBus_UInt32  bist_fail_tp_0_2:1;
        RBus_UInt32  bist_fail_tp_0_3:1;
        RBus_UInt32  bist_fail_tp_0_4:1;
        RBus_UInt32  bist_fail_tp_0_5:1;
        RBus_UInt32  bist_fail_tp_0_6:1;
        RBus_UInt32  bist_fail_wrapper:1;
        RBus_UInt32  bist_fail_us_cache_0_0:1;
        RBus_UInt32  bist_fail_us_cache_0_1:1;
        RBus_UInt32  bist_fail_us_cache_0_2:1;
        RBus_UInt32  bist_fail_us_cache_0_3:1;
        RBus_UInt32  bist_fail_us_cache_0_4:1;
        RBus_UInt32  bist_fail_us_cache_0_5:1;
        RBus_UInt32  bist_fail_us_cache_0_6:1;
        RBus_UInt32  bist_fail_us_cache_0_7:1;
        RBus_UInt32  bist_fail_us_cache_0_8:1;
        RBus_UInt32  bist_fail_us_cache_0_9:1;
        RBus_UInt32  bist_fail_us_cache_0_10:1;
        RBus_UInt32  bist_fail_us_cache_0_11:1;
    };
}nnwp_bist_fail_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_fail_us_cache_1_0:1;
        RBus_UInt32  bist_fail_us_cache_1_1:1;
        RBus_UInt32  bist_fail_us_cache_1_2:1;
        RBus_UInt32  bist_fail_us_cache_1_3:1;
        RBus_UInt32  bist_fail_conv_core_0_0:1;
        RBus_UInt32  bist_fail_conv_core_0_1:1;
        RBus_UInt32  bist_fail_conv_core_0_2:1;
        RBus_UInt32  bist_fail_conv_core_0_3:1;
        RBus_UInt32  bist_fail_conv_core_0_4:1;
        RBus_UInt32  bist_fail_conv_core_0_5:1;
        RBus_UInt32  bist_fail_conv_core_0_6:1;
        RBus_UInt32  bist_fail_conv_core_0_7:1;
        RBus_UInt32  bist_fail_conv_core_1_0:1;
        RBus_UInt32  bist_fail_conv_core_1_1:1;
        RBus_UInt32  bist_fail_conv_core_1_2:1;
        RBus_UInt32  bist_fail_conv_core_1_3:1;
        RBus_UInt32  bist_fail_conv_core_1_4:1;
        RBus_UInt32  bist_fail_conv_core_1_5:1;
        RBus_UInt32  bist_fail_conv_core_1_6:1;
        RBus_UInt32  bist_fail_conv_core_1_7:1;
        RBus_UInt32  res1:12;
    };
}nnwp_bist_fail_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_bist_fail_group_conv_core_1:1;
        RBus_UInt32  drf_bist_fail_group_conv_core_0:1;
        RBus_UInt32  drf_bist_fail_group_us_cache_1:1;
        RBus_UInt32  drf_bist_fail_group_us_cache_0:1;
        RBus_UInt32  drf_bist_fail_group_wrapper:1;
        RBus_UInt32  drf_bist_fail_group_tp_0:1;
        RBus_UInt32  drf_bist_fail_group_backend_merger:1;
        RBus_UInt32  drf_bist_fail_group_conv_out_fifo:1;
        RBus_UInt32  drf_bist_fail_group_gc_sh_nn_cache:1;
        RBus_UInt32  drf_bist_fail_group_merge:1;
        RBus_UInt32  drf_bist_fail_group_group_ctrl_1p:1;
        RBus_UInt32  drf_bist_fail_group_group_ctrl_2p:1;
        RBus_UInt32  drf_bist_fail_group_core_a:1;
        RBus_UInt32  drf_bist_fail_group_ffm:1;
        RBus_UInt32  res1:18;
    };
}nnwp_drf_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_bist_fail_ffm_0:1;
        RBus_UInt32  drf_bist_fail_ffm_1:1;
        RBus_UInt32  drf_bist_fail_ffm_2:1;
        RBus_UInt32  drf_bist_fail_ffm_3:1;
        RBus_UInt32  drf_bist_fail_ffm_4:1;
        RBus_UInt32  drf_bist_fail_core_a_0:1;
        RBus_UInt32  drf_bist_fail_core_a_1:1;
        RBus_UInt32  drf_bist_fail_core_a_2:1;
        RBus_UInt32  drf_bist_fail_core_a_3:1;
        RBus_UInt32  drf_bist_fail_core_a_4:1;
        RBus_UInt32  drf_bist_fail_core_a_5:1;
        RBus_UInt32  drf_bist_fail_core_a_6:1;
        RBus_UInt32  drf_bist_fail_core_a_7:1;
        RBus_UInt32  drf_bist_fail_core_a_8:1;
        RBus_UInt32  drf_bist_fail_core_a_9:1;
        RBus_UInt32  drf_bist_fail_group_ctrl_2p_0:1;
        RBus_UInt32  drf_bist_fail_group_ctrl_2p_1:1;
        RBus_UInt32  drf_bist_fail_group_ctrl_2p_2:1;
        RBus_UInt32  drf_bist_fail_group_ctrl_2p_3:1;
        RBus_UInt32  drf_bist_fail_group_ctrl_1p_0:1;
        RBus_UInt32  drf_bist_fail_group_ctrl_1p_1:1;
        RBus_UInt32  drf_bist_fail_group_ctrl_1p_2:1;
        RBus_UInt32  drf_bist_fail_merge_0:1;
        RBus_UInt32  drf_bist_fail_merge_1:1;
        RBus_UInt32  drf_bist_fail_merge_2:1;
        RBus_UInt32  drf_bist_fail_merge_3:1;
        RBus_UInt32  drf_bist_fail_merge_4:1;
        RBus_UInt32  drf_bist_fail_merge_5:1;
        RBus_UInt32  drf_bist_fail_merge_6:1;
        RBus_UInt32  drf_bist_fail_backend_merger_0:1;
        RBus_UInt32  drf_bist_fail_backend_merger_1:1;
        RBus_UInt32  drf_bist_fail_backend_merger_2:1;
    };
}nnwp_drf_bist_fail_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_bist_fail_gc_sh_nn_cache_0:1;
        RBus_UInt32  drf_bist_fail_gc_sh_nn_cache_1:1;
        RBus_UInt32  drf_bist_fail_gc_sh_nn_cache_2:1;
        RBus_UInt32  drf_bist_fail_gc_sh_nn_cache_3:1;
        RBus_UInt32  drf_bist_fail_conv_out_fifo_0:1;
        RBus_UInt32  drf_bist_fail_conv_out_fifo_1:1;
        RBus_UInt32  drf_bist_fail_conv_out_fifo_2:1;
        RBus_UInt32  drf_bist_fail_conv_out_fifo_3:1;
        RBus_UInt32  drf_bist_fail_conv_out_fifo_4:1;
        RBus_UInt32  drf_bist_fail_conv_out_fifo_5:1;
        RBus_UInt32  drf_bist_fail_conv_out_fifo_6:1;
        RBus_UInt32  drf_bist_fail_conv_out_fifo_7:1;
        RBus_UInt32  drf_bist_fail_tp_0_0:1;
        RBus_UInt32  drf_bist_fail_tp_0_1:1;
        RBus_UInt32  drf_bist_fail_tp_0_2:1;
        RBus_UInt32  drf_bist_fail_tp_0_3:1;
        RBus_UInt32  drf_bist_fail_tp_0_4:1;
        RBus_UInt32  drf_bist_fail_tp_0_5:1;
        RBus_UInt32  drf_bist_fail_tp_0_6:1;
        RBus_UInt32  drf_bist_fail_wrapper:1;
        RBus_UInt32  drf_bist_fail_us_cache_0_0:1;
        RBus_UInt32  drf_bist_fail_us_cache_0_1:1;
        RBus_UInt32  drf_bist_fail_us_cache_0_2:1;
        RBus_UInt32  drf_bist_fail_us_cache_0_3:1;
        RBus_UInt32  drf_bist_fail_us_cache_0_4:1;
        RBus_UInt32  drf_bist_fail_us_cache_0_5:1;
        RBus_UInt32  drf_bist_fail_us_cache_0_6:1;
        RBus_UInt32  drf_bist_fail_us_cache_0_7:1;
        RBus_UInt32  drf_bist_fail_us_cache_0_8:1;
        RBus_UInt32  drf_bist_fail_us_cache_0_9:1;
        RBus_UInt32  drf_bist_fail_us_cache_0_10:1;
        RBus_UInt32  drf_bist_fail_us_cache_0_11:1;
    };
}nnwp_drf_bist_fail_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_bist_fail_us_cache_1_0:1;
        RBus_UInt32  drf_bist_fail_us_cache_1_1:1;
        RBus_UInt32  drf_bist_fail_us_cache_1_2:1;
        RBus_UInt32  drf_bist_fail_us_cache_1_3:1;
        RBus_UInt32  drf_bist_fail_conv_core_0_0:1;
        RBus_UInt32  drf_bist_fail_conv_core_0_1:1;
        RBus_UInt32  drf_bist_fail_conv_core_0_2:1;
        RBus_UInt32  drf_bist_fail_conv_core_0_3:1;
        RBus_UInt32  drf_bist_fail_conv_core_0_4:1;
        RBus_UInt32  drf_bist_fail_conv_core_0_5:1;
        RBus_UInt32  drf_bist_fail_conv_core_0_6:1;
        RBus_UInt32  drf_bist_fail_conv_core_0_7:1;
        RBus_UInt32  drf_bist_fail_conv_core_1_0:1;
        RBus_UInt32  drf_bist_fail_conv_core_1_1:1;
        RBus_UInt32  drf_bist_fail_conv_core_1_2:1;
        RBus_UInt32  drf_bist_fail_conv_core_1_3:1;
        RBus_UInt32  drf_bist_fail_conv_core_1_4:1;
        RBus_UInt32  drf_bist_fail_conv_core_1_5:1;
        RBus_UInt32  drf_bist_fail_conv_core_1_6:1;
        RBus_UInt32  drf_bist_fail_conv_core_1_7:1;
        RBus_UInt32  res1:12;
    };
}nnwp_drf_bist_fail_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nnwp_rm:4;
        RBus_UInt32  nnwp_rme:1;
        RBus_UInt32  nnwp_testrwm:1;
        RBus_UInt32  nnwp_test1:1;
        RBus_UInt32  res1:25;
    };
}nnwp_nnwp_sram_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nnip_rm:4;
        RBus_UInt32  nnip_rme:1;
        RBus_UInt32  nnip_testrwm:1;
        RBus_UInt32  nnip_test1:1;
        RBus_UInt32  res1:25;
    };
}nnwp_nn_sram_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ls_ffm_0:1;
        RBus_UInt32  ls_ffm_1:1;
        RBus_UInt32  ls_ffm_2:1;
        RBus_UInt32  ls_ffm_3:1;
        RBus_UInt32  ls_ffm_4:1;
        RBus_UInt32  ls_core_a_0:1;
        RBus_UInt32  ls_core_a_1:1;
        RBus_UInt32  ls_core_a_2:1;
        RBus_UInt32  ls_core_a_3:1;
        RBus_UInt32  ls_core_a_4:1;
        RBus_UInt32  ls_core_a_5:1;
        RBus_UInt32  ls_core_a_6:1;
        RBus_UInt32  ls_core_a_7:1;
        RBus_UInt32  ls_core_a_8:1;
        RBus_UInt32  ls_core_a_9:1;
        RBus_UInt32  ls_group_ctrl_2p_0:1;
        RBus_UInt32  ls_group_ctrl_2p_1:1;
        RBus_UInt32  ls_group_ctrl_2p_2:1;
        RBus_UInt32  ls_group_ctrl_2p_3:1;
        RBus_UInt32  ls_group_ctrl_1p_0:1;
        RBus_UInt32  ls_group_ctrl_1p_1:1;
        RBus_UInt32  ls_group_ctrl_1p_2:1;
        RBus_UInt32  ls_merge_0:1;
        RBus_UInt32  ls_merge_1:1;
        RBus_UInt32  ls_merge_2:1;
        RBus_UInt32  ls_merge_3:1;
        RBus_UInt32  ls_merge_4:1;
        RBus_UInt32  ls_merge_5:1;
        RBus_UInt32  ls_merge_6:1;
        RBus_UInt32  ls_backend_merger_0:1;
        RBus_UInt32  ls_backend_merger_1:1;
        RBus_UInt32  ls_backend_merger_2:1;
    };
}nnwp_sram_ls_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ls_gc_sh_nn_cache_0:1;
        RBus_UInt32  ls_gc_sh_nn_cache_1:1;
        RBus_UInt32  ls_gc_sh_nn_cache_2:1;
        RBus_UInt32  ls_gc_sh_nn_cache_3:1;
        RBus_UInt32  ls_conv_out_fifo_0:1;
        RBus_UInt32  ls_conv_out_fifo_1:1;
        RBus_UInt32  ls_conv_out_fifo_2:1;
        RBus_UInt32  ls_conv_out_fifo_3:1;
        RBus_UInt32  ls_conv_out_fifo_4:1;
        RBus_UInt32  ls_conv_out_fifo_5:1;
        RBus_UInt32  ls_conv_out_fifo_6:1;
        RBus_UInt32  ls_conv_out_fifo_7:1;
        RBus_UInt32  ls_tp_0_0:1;
        RBus_UInt32  ls_tp_0_1:1;
        RBus_UInt32  ls_tp_0_2:1;
        RBus_UInt32  ls_tp_0_3:1;
        RBus_UInt32  ls_tp_0_4:1;
        RBus_UInt32  ls_tp_0_5:1;
        RBus_UInt32  ls_tp_0_6:1;
        RBus_UInt32  ls_wrapper:1;
        RBus_UInt32  ls_us_cache_0_0:1;
        RBus_UInt32  ls_us_cache_0_1:1;
        RBus_UInt32  ls_us_cache_0_2:1;
        RBus_UInt32  ls_us_cache_0_3:1;
        RBus_UInt32  ls_us_cache_0_4:1;
        RBus_UInt32  ls_us_cache_0_5:1;
        RBus_UInt32  ls_us_cache_0_6:1;
        RBus_UInt32  ls_us_cache_0_7:1;
        RBus_UInt32  ls_us_cache_0_8:1;
        RBus_UInt32  ls_us_cache_0_9:1;
        RBus_UInt32  ls_us_cache_0_10:1;
        RBus_UInt32  ls_us_cache_0_11:1;
    };
}nnwp_sram_ls_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ls_us_cache_1_0:1;
        RBus_UInt32  ls_us_cache_1_1:1;
        RBus_UInt32  ls_us_cache_1_2:1;
        RBus_UInt32  ls_us_cache_1_3:1;
        RBus_UInt32  ls_conv_core_0_0:1;
        RBus_UInt32  ls_conv_core_0_1:1;
        RBus_UInt32  ls_conv_core_0_2:1;
        RBus_UInt32  ls_conv_core_0_3:1;
        RBus_UInt32  ls_conv_core_0_4:1;
        RBus_UInt32  ls_conv_core_0_5:1;
        RBus_UInt32  ls_conv_core_0_6:1;
        RBus_UInt32  ls_conv_core_0_7:1;
        RBus_UInt32  ls_conv_core_1_0:1;
        RBus_UInt32  ls_conv_core_1_1:1;
        RBus_UInt32  ls_conv_core_1_2:1;
        RBus_UInt32  ls_conv_core_1_3:1;
        RBus_UInt32  ls_conv_core_1_4:1;
        RBus_UInt32  ls_conv_core_1_5:1;
        RBus_UInt32  ls_conv_core_1_6:1;
        RBus_UInt32  ls_conv_core_1_7:1;
        RBus_UInt32  res1:12;
    };
}nnwp_sram_ls_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nonsec_dmy_r:32;
    };
}nnwp_nnwp_dmy_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nonsec_dmy2_rw:32;
    };
}nnwp_nnwp_dmy2_rw_RBUS;




#endif 


#endif 
