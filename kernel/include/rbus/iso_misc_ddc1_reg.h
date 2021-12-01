/**
* @file Merlin5-DesignSpec-ISO_MISC_DDC1
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_ISO_MISC_DDC1_REG_H_
#define _RBUS_ISO_MISC_DDC1_REG_H_

#include "rbus_types.h"



//  ISO_MISC_DDC1 Register Address
#define  ISO_MISC_DDC1_I2C_CR                                                   0x18061B00
#define  ISO_MISC_DDC1_I2C_CR_reg_addr                                           "0xB8061B00"
#define  ISO_MISC_DDC1_I2C_CR_reg                                                0xB8061B00
#define  ISO_MISC_DDC1_I2C_CR_inst_addr                                          "0x0000"
#define  set_ISO_MISC_DDC1_I2C_CR_reg(data)                                      (*((volatile unsigned int*)ISO_MISC_DDC1_I2C_CR_reg)=data)
#define  get_ISO_MISC_DDC1_I2C_CR_reg                                            (*((volatile unsigned int*)ISO_MISC_DDC1_I2C_CR_reg))
#define  ISO_MISC_DDC1_I2C_CR_cmderr_ie_shift                                    (7)
#define  ISO_MISC_DDC1_I2C_CR_timeout_en_shift                                   (6)
#define  ISO_MISC_DDC1_I2C_CR_debounce_mode_shift                                (4)
#define  ISO_MISC_DDC1_I2C_CR_retime_m_shift                                     (0)
#define  ISO_MISC_DDC1_I2C_CR_cmderr_ie_mask                                     (0x00000080)
#define  ISO_MISC_DDC1_I2C_CR_timeout_en_mask                                    (0x00000040)
#define  ISO_MISC_DDC1_I2C_CR_debounce_mode_mask                                 (0x00000030)
#define  ISO_MISC_DDC1_I2C_CR_retime_m_mask                                      (0x00000007)
#define  ISO_MISC_DDC1_I2C_CR_cmderr_ie(data)                                    (0x00000080&((data)<<7))
#define  ISO_MISC_DDC1_I2C_CR_timeout_en(data)                                   (0x00000040&((data)<<6))
#define  ISO_MISC_DDC1_I2C_CR_debounce_mode(data)                                (0x00000030&((data)<<4))
#define  ISO_MISC_DDC1_I2C_CR_retime_m(data)                                     (0x00000007&(data))
#define  ISO_MISC_DDC1_I2C_CR_get_cmderr_ie(data)                                ((0x00000080&(data))>>7)
#define  ISO_MISC_DDC1_I2C_CR_get_timeout_en(data)                               ((0x00000040&(data))>>6)
#define  ISO_MISC_DDC1_I2C_CR_get_debounce_mode(data)                            ((0x00000030&(data))>>4)
#define  ISO_MISC_DDC1_I2C_CR_get_retime_m(data)                                 (0x00000007&(data))

#define  ISO_MISC_DDC1_I2C_SR1                                                  0x18061B04
#define  ISO_MISC_DDC1_I2C_SR1_reg_addr                                          "0xB8061B04"
#define  ISO_MISC_DDC1_I2C_SR1_reg                                               0xB8061B04
#define  ISO_MISC_DDC1_I2C_SR1_inst_addr                                         "0x0001"
#define  set_ISO_MISC_DDC1_I2C_SR1_reg(data)                                     (*((volatile unsigned int*)ISO_MISC_DDC1_I2C_SR1_reg)=data)
#define  get_ISO_MISC_DDC1_I2C_SR1_reg                                           (*((volatile unsigned int*)ISO_MISC_DDC1_I2C_SR1_reg))
#define  ISO_MISC_DDC1_I2C_SR1_cmderr_shift                                      (7)
#define  ISO_MISC_DDC1_I2C_SR1_finish_shift                                      (4)
#define  ISO_MISC_DDC1_I2C_SR1_timeout_shift                                     (3)
#define  ISO_MISC_DDC1_I2C_SR1_cmderr_mask                                       (0x00000080)
#define  ISO_MISC_DDC1_I2C_SR1_finish_mask                                       (0x00000010)
#define  ISO_MISC_DDC1_I2C_SR1_timeout_mask                                      (0x00000008)
#define  ISO_MISC_DDC1_I2C_SR1_cmderr(data)                                      (0x00000080&((data)<<7))
#define  ISO_MISC_DDC1_I2C_SR1_finish(data)                                      (0x00000010&((data)<<4))
#define  ISO_MISC_DDC1_I2C_SR1_timeout(data)                                     (0x00000008&((data)<<3))
#define  ISO_MISC_DDC1_I2C_SR1_get_cmderr(data)                                  ((0x00000080&(data))>>7)
#define  ISO_MISC_DDC1_I2C_SR1_get_finish(data)                                  ((0x00000010&(data))>>4)
#define  ISO_MISC_DDC1_I2C_SR1_get_timeout(data)                                 ((0x00000008&(data))>>3)

#define  ISO_MISC_DDC1_I2C_TR                                                   0x18061B08
#define  ISO_MISC_DDC1_I2C_TR_reg_addr                                           "0xB8061B08"
#define  ISO_MISC_DDC1_I2C_TR_reg                                                0xB8061B08
#define  ISO_MISC_DDC1_I2C_TR_inst_addr                                          "0x0002"
#define  set_ISO_MISC_DDC1_I2C_TR_reg(data)                                      (*((volatile unsigned int*)ISO_MISC_DDC1_I2C_TR_reg)=data)
#define  get_ISO_MISC_DDC1_I2C_TR_reg                                            (*((volatile unsigned int*)ISO_MISC_DDC1_I2C_TR_reg))
#define  ISO_MISC_DDC1_I2C_TR_timeout_val_shift                                  (0)
#define  ISO_MISC_DDC1_I2C_TR_timeout_val_mask                                   (0x000000FF)
#define  ISO_MISC_DDC1_I2C_TR_timeout_val(data)                                  (0x000000FF&(data))
#define  ISO_MISC_DDC1_I2C_TR_get_timeout_val(data)                              (0x000000FF&(data))

#define  ISO_MISC_DDC1_EDID_CR                                                  0x18061B0C
#define  ISO_MISC_DDC1_EDID_CR_reg_addr                                          "0xB8061B0C"
#define  ISO_MISC_DDC1_EDID_CR_reg                                               0xB8061B0C
#define  ISO_MISC_DDC1_EDID_CR_inst_addr                                         "0x0003"
#define  set_ISO_MISC_DDC1_EDID_CR_reg(data)                                     (*((volatile unsigned int*)ISO_MISC_DDC1_EDID_CR_reg)=data)
#define  get_ISO_MISC_DDC1_EDID_CR_reg                                           (*((volatile unsigned int*)ISO_MISC_DDC1_EDID_CR_reg))
#define  ISO_MISC_DDC1_EDID_CR_edid_address_shift                                (5)
#define  ISO_MISC_DDC1_EDID_CR_finish_int_en_shift                               (4)
#define  ISO_MISC_DDC1_EDID_CR_edid_srwen_shift                                  (1)
#define  ISO_MISC_DDC1_EDID_CR_edid_en_shift                                     (0)
#define  ISO_MISC_DDC1_EDID_CR_edid_address_mask                                 (0x000000E0)
#define  ISO_MISC_DDC1_EDID_CR_finish_int_en_mask                                (0x00000010)
#define  ISO_MISC_DDC1_EDID_CR_edid_srwen_mask                                   (0x00000002)
#define  ISO_MISC_DDC1_EDID_CR_edid_en_mask                                      (0x00000001)
#define  ISO_MISC_DDC1_EDID_CR_edid_address(data)                                (0x000000E0&((data)<<5))
#define  ISO_MISC_DDC1_EDID_CR_finish_int_en(data)                               (0x00000010&((data)<<4))
#define  ISO_MISC_DDC1_EDID_CR_edid_srwen(data)                                  (0x00000002&((data)<<1))
#define  ISO_MISC_DDC1_EDID_CR_edid_en(data)                                     (0x00000001&(data))
#define  ISO_MISC_DDC1_EDID_CR_get_edid_address(data)                            ((0x000000E0&(data))>>5)
#define  ISO_MISC_DDC1_EDID_CR_get_finish_int_en(data)                           ((0x00000010&(data))>>4)
#define  ISO_MISC_DDC1_EDID_CR_get_edid_srwen(data)                              ((0x00000002&(data))>>1)
#define  ISO_MISC_DDC1_EDID_CR_get_edid_en(data)                                 (0x00000001&(data))

#define  ISO_MISC_DDC1_DDC_VCR                                                  0x18061B10
#define  ISO_MISC_DDC1_DDC_VCR_reg_addr                                          "0xB8061B10"
#define  ISO_MISC_DDC1_DDC_VCR_reg                                               0xB8061B10
#define  ISO_MISC_DDC1_DDC_VCR_inst_addr                                         "0x0004"
#define  set_ISO_MISC_DDC1_DDC_VCR_reg(data)                                     (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_VCR_reg)=data)
#define  get_ISO_MISC_DDC1_DDC_VCR_reg                                           (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_VCR_reg))
#define  ISO_MISC_DDC1_DDC_VCR_dummy_7_0_shift                                   (0)
#define  ISO_MISC_DDC1_DDC_VCR_dummy_7_0_mask                                    (0x000000FF)
#define  ISO_MISC_DDC1_DDC_VCR_dummy_7_0(data)                                   (0x000000FF&(data))
#define  ISO_MISC_DDC1_DDC_VCR_get_dummy_7_0(data)                               (0x000000FF&(data))

#define  ISO_MISC_DDC1_EDID_IMSWSAR                                             0x18061B14
#define  ISO_MISC_DDC1_EDID_IMSWSAR_reg_addr                                     "0xB8061B14"
#define  ISO_MISC_DDC1_EDID_IMSWSAR_reg                                          0xB8061B14
#define  ISO_MISC_DDC1_EDID_IMSWSAR_inst_addr                                    "0x0005"
#define  set_ISO_MISC_DDC1_EDID_IMSWSAR_reg(data)                                (*((volatile unsigned int*)ISO_MISC_DDC1_EDID_IMSWSAR_reg)=data)
#define  get_ISO_MISC_DDC1_EDID_IMSWSAR_reg                                      (*((volatile unsigned int*)ISO_MISC_DDC1_EDID_IMSWSAR_reg))
#define  ISO_MISC_DDC1_EDID_IMSWSAR_edid_sadr_shift                              (0)
#define  ISO_MISC_DDC1_EDID_IMSWSAR_edid_sadr_mask                               (0x000000FF)
#define  ISO_MISC_DDC1_EDID_IMSWSAR_edid_sadr(data)                              (0x000000FF&(data))
#define  ISO_MISC_DDC1_EDID_IMSWSAR_get_edid_sadr(data)                          (0x000000FF&(data))

#define  ISO_MISC_DDC1_EDID_IMSWEAR                                             0x18061B18
#define  ISO_MISC_DDC1_EDID_IMSWEAR_reg_addr                                     "0xB8061B18"
#define  ISO_MISC_DDC1_EDID_IMSWEAR_reg                                          0xB8061B18
#define  ISO_MISC_DDC1_EDID_IMSWEAR_inst_addr                                    "0x0006"
#define  set_ISO_MISC_DDC1_EDID_IMSWEAR_reg(data)                                (*((volatile unsigned int*)ISO_MISC_DDC1_EDID_IMSWEAR_reg)=data)
#define  get_ISO_MISC_DDC1_EDID_IMSWEAR_reg                                      (*((volatile unsigned int*)ISO_MISC_DDC1_EDID_IMSWEAR_reg))
#define  ISO_MISC_DDC1_EDID_IMSWEAR_edid_eadr_shift                              (0)
#define  ISO_MISC_DDC1_EDID_IMSWEAR_edid_eadr_mask                               (0x000000FF)
#define  ISO_MISC_DDC1_EDID_IMSWEAR_edid_eadr(data)                              (0x000000FF&(data))
#define  ISO_MISC_DDC1_EDID_IMSWEAR_get_edid_eadr(data)                          (0x000000FF&(data))

#define  ISO_MISC_DDC1_EDID_IR                                                  0x18061B1C
#define  ISO_MISC_DDC1_EDID_IR_reg_addr                                          "0xB8061B1C"
#define  ISO_MISC_DDC1_EDID_IR_reg                                               0xB8061B1C
#define  ISO_MISC_DDC1_EDID_IR_inst_addr                                         "0x0007"
#define  set_ISO_MISC_DDC1_EDID_IR_reg(data)                                     (*((volatile unsigned int*)ISO_MISC_DDC1_EDID_IR_reg)=data)
#define  get_ISO_MISC_DDC1_EDID_IR_reg                                           (*((volatile unsigned int*)ISO_MISC_DDC1_EDID_IR_reg))
#define  ISO_MISC_DDC1_EDID_IR_edidsubaddress_shift                              (5)
#define  ISO_MISC_DDC1_EDID_IR_edidstop_shift                                    (4)
#define  ISO_MISC_DDC1_EDID_IR_i2c_m_rd_st_ie_shift                              (3)
#define  ISO_MISC_DDC1_EDID_IR_i2c_m_rd_sp_ie_shift                              (2)
#define  ISO_MISC_DDC1_EDID_IR_edidsubaddress_ie_shift                           (1)
#define  ISO_MISC_DDC1_EDID_IR_edidstop_ie_shift                                 (0)
#define  ISO_MISC_DDC1_EDID_IR_edidsubaddress_mask                               (0x00000020)
#define  ISO_MISC_DDC1_EDID_IR_edidstop_mask                                     (0x00000010)
#define  ISO_MISC_DDC1_EDID_IR_i2c_m_rd_st_ie_mask                               (0x00000008)
#define  ISO_MISC_DDC1_EDID_IR_i2c_m_rd_sp_ie_mask                               (0x00000004)
#define  ISO_MISC_DDC1_EDID_IR_edidsubaddress_ie_mask                            (0x00000002)
#define  ISO_MISC_DDC1_EDID_IR_edidstop_ie_mask                                  (0x00000001)
#define  ISO_MISC_DDC1_EDID_IR_edidsubaddress(data)                              (0x00000020&((data)<<5))
#define  ISO_MISC_DDC1_EDID_IR_edidstop(data)                                    (0x00000010&((data)<<4))
#define  ISO_MISC_DDC1_EDID_IR_i2c_m_rd_st_ie(data)                              (0x00000008&((data)<<3))
#define  ISO_MISC_DDC1_EDID_IR_i2c_m_rd_sp_ie(data)                              (0x00000004&((data)<<2))
#define  ISO_MISC_DDC1_EDID_IR_edidsubaddress_ie(data)                           (0x00000002&((data)<<1))
#define  ISO_MISC_DDC1_EDID_IR_edidstop_ie(data)                                 (0x00000001&(data))
#define  ISO_MISC_DDC1_EDID_IR_get_edidsubaddress(data)                          ((0x00000020&(data))>>5)
#define  ISO_MISC_DDC1_EDID_IR_get_edidstop(data)                                ((0x00000010&(data))>>4)
#define  ISO_MISC_DDC1_EDID_IR_get_i2c_m_rd_st_ie(data)                          ((0x00000008&(data))>>3)
#define  ISO_MISC_DDC1_EDID_IR_get_i2c_m_rd_sp_ie(data)                          ((0x00000004&(data))>>2)
#define  ISO_MISC_DDC1_EDID_IR_get_edidsubaddress_ie(data)                       ((0x00000002&(data))>>1)
#define  ISO_MISC_DDC1_EDID_IR_get_edidstop_ie(data)                             (0x00000001&(data))

#define  ISO_MISC_DDC1_DDC_SIR                                                  0x18061B20
#define  ISO_MISC_DDC1_DDC_SIR_reg_addr                                          "0xB8061B20"
#define  ISO_MISC_DDC1_DDC_SIR_reg                                               0xB8061B20
#define  ISO_MISC_DDC1_DDC_SIR_inst_addr                                         "0x0008"
#define  set_ISO_MISC_DDC1_DDC_SIR_reg(data)                                     (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_SIR_reg)=data)
#define  get_ISO_MISC_DDC1_DDC_SIR_reg                                           (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_SIR_reg))
#define  ISO_MISC_DDC1_DDC_SIR_edidap_shift                                      (0)
#define  ISO_MISC_DDC1_DDC_SIR_edidap_mask                                       (0x000001FF)
#define  ISO_MISC_DDC1_DDC_SIR_edidap(data)                                      (0x000001FF&(data))
#define  ISO_MISC_DDC1_DDC_SIR_get_edidap(data)                                  (0x000001FF&(data))

#define  ISO_MISC_DDC1_DDC_SAP                                                  0x18061B24
#define  ISO_MISC_DDC1_DDC_SAP_reg_addr                                          "0xB8061B24"
#define  ISO_MISC_DDC1_DDC_SAP_reg                                               0xB8061B24
#define  ISO_MISC_DDC1_DDC_SAP_inst_addr                                         "0x0009"
#define  set_ISO_MISC_DDC1_DDC_SAP_reg(data)                                     (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_SAP_reg)=data)
#define  get_ISO_MISC_DDC1_DDC_SAP_reg                                           (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_SAP_reg))
#define  ISO_MISC_DDC1_DDC_SAP_ediddp_shift                                      (0)
#define  ISO_MISC_DDC1_DDC_SAP_ediddp_mask                                       (0x000000FF)
#define  ISO_MISC_DDC1_DDC_SAP_ediddp(data)                                      (0x000000FF&(data))
#define  ISO_MISC_DDC1_DDC_SAP_get_ediddp(data)                                  (0x000000FF&(data))

#define  ISO_MISC_DDC1_DDC_BISTCR                                               0x18061B28
#define  ISO_MISC_DDC1_DDC_BISTCR_reg_addr                                       "0xB8061B28"
#define  ISO_MISC_DDC1_DDC_BISTCR_reg                                            0xB8061B28
#define  ISO_MISC_DDC1_DDC_BISTCR_inst_addr                                      "0x000A"
#define  set_ISO_MISC_DDC1_DDC_BISTCR_reg(data)                                  (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_BISTCR_reg)=data)
#define  get_ISO_MISC_DDC1_DDC_BISTCR_reg                                        (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_BISTCR_reg))
#define  ISO_MISC_DDC1_DDC_BISTCR_ddc_bist_rme_shift                             (4)
#define  ISO_MISC_DDC1_DDC_BISTCR_ddc_bist_rm_shift                              (0)
#define  ISO_MISC_DDC1_DDC_BISTCR_ddc_bist_rme_mask                              (0x00000010)
#define  ISO_MISC_DDC1_DDC_BISTCR_ddc_bist_rm_mask                               (0x0000000F)
#define  ISO_MISC_DDC1_DDC_BISTCR_ddc_bist_rme(data)                             (0x00000010&((data)<<4))
#define  ISO_MISC_DDC1_DDC_BISTCR_ddc_bist_rm(data)                              (0x0000000F&(data))
#define  ISO_MISC_DDC1_DDC_BISTCR_get_ddc_bist_rme(data)                         ((0x00000010&(data))>>4)
#define  ISO_MISC_DDC1_DDC_BISTCR_get_ddc_bist_rm(data)                          (0x0000000F&(data))

#define  ISO_MISC_DDC1_DDC_SCR                                                  0x18061B2C
#define  ISO_MISC_DDC1_DDC_SCR_reg_addr                                          "0xB8061B2C"
#define  ISO_MISC_DDC1_DDC_SCR_reg                                               0xB8061B2C
#define  ISO_MISC_DDC1_DDC_SCR_inst_addr                                         "0x000B"
#define  set_ISO_MISC_DDC1_DDC_SCR_reg(data)                                     (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_SCR_reg)=data)
#define  get_ISO_MISC_DDC1_DDC_SCR_reg                                           (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_SCR_reg))
#define  ISO_MISC_DDC1_DDC_SCR_segpt_latie_shift                                 (7)
#define  ISO_MISC_DDC1_DDC_SCR_dataoutputdelay_sel_shift                         (4)
#define  ISO_MISC_DDC1_DDC_SCR_i2c_m_rd_st_sts_shift                             (2)
#define  ISO_MISC_DDC1_DDC_SCR_i2c_m_rd_sp_sts_shift                             (1)
#define  ISO_MISC_DDC1_DDC_SCR_sgid_en_shift                                     (0)
#define  ISO_MISC_DDC1_DDC_SCR_segpt_latie_mask                                  (0x00000080)
#define  ISO_MISC_DDC1_DDC_SCR_dataoutputdelay_sel_mask                          (0x00000070)
#define  ISO_MISC_DDC1_DDC_SCR_i2c_m_rd_st_sts_mask                              (0x00000004)
#define  ISO_MISC_DDC1_DDC_SCR_i2c_m_rd_sp_sts_mask                              (0x00000002)
#define  ISO_MISC_DDC1_DDC_SCR_sgid_en_mask                                      (0x00000001)
#define  ISO_MISC_DDC1_DDC_SCR_segpt_latie(data)                                 (0x00000080&((data)<<7))
#define  ISO_MISC_DDC1_DDC_SCR_dataoutputdelay_sel(data)                         (0x00000070&((data)<<4))
#define  ISO_MISC_DDC1_DDC_SCR_i2c_m_rd_st_sts(data)                             (0x00000004&((data)<<2))
#define  ISO_MISC_DDC1_DDC_SCR_i2c_m_rd_sp_sts(data)                             (0x00000002&((data)<<1))
#define  ISO_MISC_DDC1_DDC_SCR_sgid_en(data)                                     (0x00000001&(data))
#define  ISO_MISC_DDC1_DDC_SCR_get_segpt_latie(data)                             ((0x00000080&(data))>>7)
#define  ISO_MISC_DDC1_DDC_SCR_get_dataoutputdelay_sel(data)                     ((0x00000070&(data))>>4)
#define  ISO_MISC_DDC1_DDC_SCR_get_i2c_m_rd_st_sts(data)                         ((0x00000004&(data))>>2)
#define  ISO_MISC_DDC1_DDC_SCR_get_i2c_m_rd_sp_sts(data)                         ((0x00000002&(data))>>1)
#define  ISO_MISC_DDC1_DDC_SCR_get_sgid_en(data)                                 (0x00000001&(data))

#define  ISO_MISC_DDC1_DDC_SSAR                                                 0x18061B30
#define  ISO_MISC_DDC1_DDC_SSAR_reg_addr                                         "0xB8061B30"
#define  ISO_MISC_DDC1_DDC_SSAR_reg                                              0xB8061B30
#define  ISO_MISC_DDC1_DDC_SSAR_inst_addr                                        "0x000C"
#define  set_ISO_MISC_DDC1_DDC_SSAR_reg(data)                                    (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_SSAR_reg)=data)
#define  get_ISO_MISC_DDC1_DDC_SSAR_reg                                          (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_SSAR_reg))
#define  ISO_MISC_DDC1_DDC_SSAR_sgid_address_shift                               (1)
#define  ISO_MISC_DDC1_DDC_SSAR_sgid_dtrden_shift                                (0)
#define  ISO_MISC_DDC1_DDC_SSAR_sgid_address_mask                                (0x000000FE)
#define  ISO_MISC_DDC1_DDC_SSAR_sgid_dtrden_mask                                 (0x00000001)
#define  ISO_MISC_DDC1_DDC_SSAR_sgid_address(data)                               (0x000000FE&((data)<<1))
#define  ISO_MISC_DDC1_DDC_SSAR_sgid_dtrden(data)                                (0x00000001&(data))
#define  ISO_MISC_DDC1_DDC_SSAR_get_sgid_address(data)                           ((0x000000FE&(data))>>1)
#define  ISO_MISC_DDC1_DDC_SSAR_get_sgid_dtrden(data)                            (0x00000001&(data))

#define  ISO_MISC_DDC1_DDC_SPR                                                  0x18061B34
#define  ISO_MISC_DDC1_DDC_SPR_reg_addr                                          "0xB8061B34"
#define  ISO_MISC_DDC1_DDC_SPR_reg                                               0xB8061B34
#define  ISO_MISC_DDC1_DDC_SPR_inst_addr                                         "0x000D"
#define  set_ISO_MISC_DDC1_DDC_SPR_reg(data)                                     (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_SPR_reg)=data)
#define  get_ISO_MISC_DDC1_DDC_SPR_reg                                           (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_SPR_reg))
#define  ISO_MISC_DDC1_DDC_SPR_segpt_latched_shift                               (7)
#define  ISO_MISC_DDC1_DDC_SPR_seg_pt_shift                                      (0)
#define  ISO_MISC_DDC1_DDC_SPR_segpt_latched_mask                                (0x00000080)
#define  ISO_MISC_DDC1_DDC_SPR_seg_pt_mask                                       (0x0000007F)
#define  ISO_MISC_DDC1_DDC_SPR_segpt_latched(data)                               (0x00000080&((data)<<7))
#define  ISO_MISC_DDC1_DDC_SPR_seg_pt(data)                                      (0x0000007F&(data))
#define  ISO_MISC_DDC1_DDC_SPR_get_segpt_latched(data)                           ((0x00000080&(data))>>7)
#define  ISO_MISC_DDC1_DDC_SPR_get_seg_pt(data)                                  (0x0000007F&(data))

#define  ISO_MISC_DDC1_DDC_FSMS                                                 0x18061B64
#define  ISO_MISC_DDC1_DDC_FSMS_reg_addr                                         "0xB8061B64"
#define  ISO_MISC_DDC1_DDC_FSMS_reg                                              0xB8061B64
#define  ISO_MISC_DDC1_DDC_FSMS_inst_addr                                        "0x000E"
#define  set_ISO_MISC_DDC1_DDC_FSMS_reg(data)                                    (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_FSMS_reg)=data)
#define  get_ISO_MISC_DDC1_DDC_FSMS_reg                                          (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_FSMS_reg))
#define  ISO_MISC_DDC1_DDC_FSMS_cmdfsm_st_shift                                  (0)
#define  ISO_MISC_DDC1_DDC_FSMS_cmdfsm_st_mask                                   (0x000000FF)
#define  ISO_MISC_DDC1_DDC_FSMS_cmdfsm_st(data)                                  (0x000000FF&(data))
#define  ISO_MISC_DDC1_DDC_FSMS_get_cmdfsm_st(data)                              (0x000000FF&(data))

#define  ISO_MISC_DDC1_DDC_Dummy                                                0x18061B68
#define  ISO_MISC_DDC1_DDC_Dummy_reg_addr                                        "0xB8061B68"
#define  ISO_MISC_DDC1_DDC_Dummy_reg                                             0xB8061B68
#define  ISO_MISC_DDC1_DDC_Dummy_inst_addr                                       "0x000F"
#define  set_ISO_MISC_DDC1_DDC_Dummy_reg(data)                                   (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_Dummy_reg)=data)
#define  get_ISO_MISC_DDC1_DDC_Dummy_reg                                         (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_Dummy_reg))
#define  ISO_MISC_DDC1_DDC_Dummy_dummy_7_1_shift                                 (1)
#define  ISO_MISC_DDC1_DDC_Dummy_ls_0_shift                                      (0)
#define  ISO_MISC_DDC1_DDC_Dummy_dummy_7_1_mask                                  (0x000000FE)
#define  ISO_MISC_DDC1_DDC_Dummy_ls_0_mask                                       (0x00000001)
#define  ISO_MISC_DDC1_DDC_Dummy_dummy_7_1(data)                                 (0x000000FE&((data)<<1))
#define  ISO_MISC_DDC1_DDC_Dummy_ls_0(data)                                      (0x00000001&(data))
#define  ISO_MISC_DDC1_DDC_Dummy_get_dummy_7_1(data)                             ((0x000000FE&(data))>>1)
#define  ISO_MISC_DDC1_DDC_Dummy_get_ls_0(data)                                  (0x00000001&(data))

#define  ISO_MISC_DDC1_DDC_EDID_SRAM_READ_IRQ_EN                                0x18061B70
#define  ISO_MISC_DDC1_DDC_EDID_SRAM_READ_IRQ_EN_reg_addr                        "0xB8061B70"
#define  ISO_MISC_DDC1_DDC_EDID_SRAM_READ_IRQ_EN_reg                             0xB8061B70
#define  ISO_MISC_DDC1_DDC_EDID_SRAM_READ_IRQ_EN_inst_addr                       "0x0010"
#define  set_ISO_MISC_DDC1_DDC_EDID_SRAM_READ_IRQ_EN_reg(data)                   (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_EDID_SRAM_READ_IRQ_EN_reg)=data)
#define  get_ISO_MISC_DDC1_DDC_EDID_SRAM_READ_IRQ_EN_reg                         (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_EDID_SRAM_READ_IRQ_EN_reg))
#define  ISO_MISC_DDC1_DDC_EDID_SRAM_READ_IRQ_EN_start_irq_en_shift              (1)
#define  ISO_MISC_DDC1_DDC_EDID_SRAM_READ_IRQ_EN_stop_irq_en_shift               (0)
#define  ISO_MISC_DDC1_DDC_EDID_SRAM_READ_IRQ_EN_start_irq_en_mask               (0x00000002)
#define  ISO_MISC_DDC1_DDC_EDID_SRAM_READ_IRQ_EN_stop_irq_en_mask                (0x00000001)
#define  ISO_MISC_DDC1_DDC_EDID_SRAM_READ_IRQ_EN_start_irq_en(data)              (0x00000002&((data)<<1))
#define  ISO_MISC_DDC1_DDC_EDID_SRAM_READ_IRQ_EN_stop_irq_en(data)               (0x00000001&(data))
#define  ISO_MISC_DDC1_DDC_EDID_SRAM_READ_IRQ_EN_get_start_irq_en(data)          ((0x00000002&(data))>>1)
#define  ISO_MISC_DDC1_DDC_EDID_SRAM_READ_IRQ_EN_get_stop_irq_en(data)           (0x00000001&(data))

#define  ISO_MISC_DDC1_DDC_EDID_SRAM_READ_AUX                                   0x18061B74
#define  ISO_MISC_DDC1_DDC_EDID_SRAM_READ_AUX_reg_addr                           "0xB8061B74"
#define  ISO_MISC_DDC1_DDC_EDID_SRAM_READ_AUX_reg                                0xB8061B74
#define  ISO_MISC_DDC1_DDC_EDID_SRAM_READ_AUX_inst_addr                          "0x0011"
#define  set_ISO_MISC_DDC1_DDC_EDID_SRAM_READ_AUX_reg(data)                      (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_EDID_SRAM_READ_AUX_reg)=data)
#define  get_ISO_MISC_DDC1_DDC_EDID_SRAM_READ_AUX_reg                            (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_EDID_SRAM_READ_AUX_reg))
#define  ISO_MISC_DDC1_DDC_EDID_SRAM_READ_AUX_start_shift                        (1)
#define  ISO_MISC_DDC1_DDC_EDID_SRAM_READ_AUX_stop_shift                         (0)
#define  ISO_MISC_DDC1_DDC_EDID_SRAM_READ_AUX_start_mask                         (0x00000002)
#define  ISO_MISC_DDC1_DDC_EDID_SRAM_READ_AUX_stop_mask                          (0x00000001)
#define  ISO_MISC_DDC1_DDC_EDID_SRAM_READ_AUX_start(data)                        (0x00000002&((data)<<1))
#define  ISO_MISC_DDC1_DDC_EDID_SRAM_READ_AUX_stop(data)                         (0x00000001&(data))
#define  ISO_MISC_DDC1_DDC_EDID_SRAM_READ_AUX_get_start(data)                    ((0x00000002&(data))>>1)
#define  ISO_MISC_DDC1_DDC_EDID_SRAM_READ_AUX_get_stop(data)                     (0x00000001&(data))

#define  ISO_MISC_DDC1_DDC_BIST_MODE                                            0x18061B78
#define  ISO_MISC_DDC1_DDC_BIST_MODE_reg_addr                                    "0xB8061B78"
#define  ISO_MISC_DDC1_DDC_BIST_MODE_reg                                         0xB8061B78
#define  ISO_MISC_DDC1_DDC_BIST_MODE_inst_addr                                   "0x0012"
#define  set_ISO_MISC_DDC1_DDC_BIST_MODE_reg(data)                               (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_BIST_MODE_reg)=data)
#define  get_ISO_MISC_DDC1_DDC_BIST_MODE_reg                                     (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_BIST_MODE_reg))
#define  ISO_MISC_DDC1_DDC_BIST_MODE_ddc_bist_mode_shift                         (0)
#define  ISO_MISC_DDC1_DDC_BIST_MODE_ddc_bist_mode_mask                          (0x00000001)
#define  ISO_MISC_DDC1_DDC_BIST_MODE_ddc_bist_mode(data)                         (0x00000001&(data))
#define  ISO_MISC_DDC1_DDC_BIST_MODE_get_ddc_bist_mode(data)                     (0x00000001&(data))

#define  ISO_MISC_DDC1_DDC_BIST_DONE                                            0x18061B7C
#define  ISO_MISC_DDC1_DDC_BIST_DONE_reg_addr                                    "0xB8061B7C"
#define  ISO_MISC_DDC1_DDC_BIST_DONE_reg                                         0xB8061B7C
#define  ISO_MISC_DDC1_DDC_BIST_DONE_inst_addr                                   "0x0013"
#define  set_ISO_MISC_DDC1_DDC_BIST_DONE_reg(data)                               (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_BIST_DONE_reg)=data)
#define  get_ISO_MISC_DDC1_DDC_BIST_DONE_reg                                     (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_BIST_DONE_reg))
#define  ISO_MISC_DDC1_DDC_BIST_DONE_ddc_bist_done_shift                         (0)
#define  ISO_MISC_DDC1_DDC_BIST_DONE_ddc_bist_done_mask                          (0x00000001)
#define  ISO_MISC_DDC1_DDC_BIST_DONE_ddc_bist_done(data)                         (0x00000001&(data))
#define  ISO_MISC_DDC1_DDC_BIST_DONE_get_ddc_bist_done(data)                     (0x00000001&(data))

#define  ISO_MISC_DDC1_DDC_BIST_FAIL                                            0x18061B80
#define  ISO_MISC_DDC1_DDC_BIST_FAIL_reg_addr                                    "0xB8061B80"
#define  ISO_MISC_DDC1_DDC_BIST_FAIL_reg                                         0xB8061B80
#define  ISO_MISC_DDC1_DDC_BIST_FAIL_inst_addr                                   "0x0014"
#define  set_ISO_MISC_DDC1_DDC_BIST_FAIL_reg(data)                               (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_BIST_FAIL_reg)=data)
#define  get_ISO_MISC_DDC1_DDC_BIST_FAIL_reg                                     (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_BIST_FAIL_reg))
#define  ISO_MISC_DDC1_DDC_BIST_FAIL_ddc_bist_fail_shift                         (0)
#define  ISO_MISC_DDC1_DDC_BIST_FAIL_ddc_bist_fail_mask                          (0x00000001)
#define  ISO_MISC_DDC1_DDC_BIST_FAIL_ddc_bist_fail(data)                         (0x00000001&(data))
#define  ISO_MISC_DDC1_DDC_BIST_FAIL_get_ddc_bist_fail(data)                     (0x00000001&(data))

#define  ISO_MISC_DDC1_DDC_DRF_MODE                                             0x18061B84
#define  ISO_MISC_DDC1_DDC_DRF_MODE_reg_addr                                     "0xB8061B84"
#define  ISO_MISC_DDC1_DDC_DRF_MODE_reg                                          0xB8061B84
#define  ISO_MISC_DDC1_DDC_DRF_MODE_inst_addr                                    "0x0015"
#define  set_ISO_MISC_DDC1_DDC_DRF_MODE_reg(data)                                (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_DRF_MODE_reg)=data)
#define  get_ISO_MISC_DDC1_DDC_DRF_MODE_reg                                      (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_DRF_MODE_reg))
#define  ISO_MISC_DDC1_DDC_DRF_MODE_ddc_drf_mode_shift                           (0)
#define  ISO_MISC_DDC1_DDC_DRF_MODE_ddc_drf_mode_mask                            (0x00000001)
#define  ISO_MISC_DDC1_DDC_DRF_MODE_ddc_drf_mode(data)                           (0x00000001&(data))
#define  ISO_MISC_DDC1_DDC_DRF_MODE_get_ddc_drf_mode(data)                       (0x00000001&(data))

#define  ISO_MISC_DDC1_DDC_DRF_RESUME                                           0x18061B88
#define  ISO_MISC_DDC1_DDC_DRF_RESUME_reg_addr                                   "0xB8061B88"
#define  ISO_MISC_DDC1_DDC_DRF_RESUME_reg                                        0xB8061B88
#define  ISO_MISC_DDC1_DDC_DRF_RESUME_inst_addr                                  "0x0016"
#define  set_ISO_MISC_DDC1_DDC_DRF_RESUME_reg(data)                              (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_DRF_RESUME_reg)=data)
#define  get_ISO_MISC_DDC1_DDC_DRF_RESUME_reg                                    (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_DRF_RESUME_reg))
#define  ISO_MISC_DDC1_DDC_DRF_RESUME_ddc_drf_resume_shift                       (0)
#define  ISO_MISC_DDC1_DDC_DRF_RESUME_ddc_drf_resume_mask                        (0x00000001)
#define  ISO_MISC_DDC1_DDC_DRF_RESUME_ddc_drf_resume(data)                       (0x00000001&(data))
#define  ISO_MISC_DDC1_DDC_DRF_RESUME_get_ddc_drf_resume(data)                   (0x00000001&(data))

#define  ISO_MISC_DDC1_DDC_DRF_DONE                                             0x18061B8C
#define  ISO_MISC_DDC1_DDC_DRF_DONE_reg_addr                                     "0xB8061B8C"
#define  ISO_MISC_DDC1_DDC_DRF_DONE_reg                                          0xB8061B8C
#define  ISO_MISC_DDC1_DDC_DRF_DONE_inst_addr                                    "0x0017"
#define  set_ISO_MISC_DDC1_DDC_DRF_DONE_reg(data)                                (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_DRF_DONE_reg)=data)
#define  get_ISO_MISC_DDC1_DDC_DRF_DONE_reg                                      (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_DRF_DONE_reg))
#define  ISO_MISC_DDC1_DDC_DRF_DONE_ddc_drf_done_shift                           (0)
#define  ISO_MISC_DDC1_DDC_DRF_DONE_ddc_drf_done_mask                            (0x00000001)
#define  ISO_MISC_DDC1_DDC_DRF_DONE_ddc_drf_done(data)                           (0x00000001&(data))
#define  ISO_MISC_DDC1_DDC_DRF_DONE_get_ddc_drf_done(data)                       (0x00000001&(data))

#define  ISO_MISC_DDC1_DDC_DRF_PAUSE                                            0x18061B90
#define  ISO_MISC_DDC1_DDC_DRF_PAUSE_reg_addr                                    "0xB8061B90"
#define  ISO_MISC_DDC1_DDC_DRF_PAUSE_reg                                         0xB8061B90
#define  ISO_MISC_DDC1_DDC_DRF_PAUSE_inst_addr                                   "0x0018"
#define  set_ISO_MISC_DDC1_DDC_DRF_PAUSE_reg(data)                               (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_DRF_PAUSE_reg)=data)
#define  get_ISO_MISC_DDC1_DDC_DRF_PAUSE_reg                                     (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_DRF_PAUSE_reg))
#define  ISO_MISC_DDC1_DDC_DRF_PAUSE_ddc_drf_pause_shift                         (0)
#define  ISO_MISC_DDC1_DDC_DRF_PAUSE_ddc_drf_pause_mask                          (0x00000001)
#define  ISO_MISC_DDC1_DDC_DRF_PAUSE_ddc_drf_pause(data)                         (0x00000001&(data))
#define  ISO_MISC_DDC1_DDC_DRF_PAUSE_get_ddc_drf_pause(data)                     (0x00000001&(data))

#define  ISO_MISC_DDC1_DDC_DRF_FAIL                                             0x18061B94
#define  ISO_MISC_DDC1_DDC_DRF_FAIL_reg_addr                                     "0xB8061B94"
#define  ISO_MISC_DDC1_DDC_DRF_FAIL_reg                                          0xB8061B94
#define  ISO_MISC_DDC1_DDC_DRF_FAIL_inst_addr                                    "0x0019"
#define  set_ISO_MISC_DDC1_DDC_DRF_FAIL_reg(data)                                (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_DRF_FAIL_reg)=data)
#define  get_ISO_MISC_DDC1_DDC_DRF_FAIL_reg                                      (*((volatile unsigned int*)ISO_MISC_DDC1_DDC_DRF_FAIL_reg))
#define  ISO_MISC_DDC1_DDC_DRF_FAIL_ddc_drf_fail_shift                           (0)
#define  ISO_MISC_DDC1_DDC_DRF_FAIL_ddc_drf_fail_mask                            (0x00000001)
#define  ISO_MISC_DDC1_DDC_DRF_FAIL_ddc_drf_fail(data)                           (0x00000001&(data))
#define  ISO_MISC_DDC1_DDC_DRF_FAIL_get_ddc_drf_fail(data)                       (0x00000001&(data))

#define  ISO_MISC_DDC1_CMDERR_SOURCE                                            0x18061B98
#define  ISO_MISC_DDC1_CMDERR_SOURCE_reg_addr                                    "0xB8061B98"
#define  ISO_MISC_DDC1_CMDERR_SOURCE_reg                                         0xB8061B98
#define  ISO_MISC_DDC1_CMDERR_SOURCE_inst_addr                                   "0x001A"
#define  set_ISO_MISC_DDC1_CMDERR_SOURCE_reg(data)                               (*((volatile unsigned int*)ISO_MISC_DDC1_CMDERR_SOURCE_reg)=data)
#define  get_ISO_MISC_DDC1_CMDERR_SOURCE_reg                                     (*((volatile unsigned int*)ISO_MISC_DDC1_CMDERR_SOURCE_reg))
#define  ISO_MISC_DDC1_CMDERR_SOURCE_read_stop_shift                             (3)
#define  ISO_MISC_DDC1_CMDERR_SOURCE_read_ack_stop_shift                         (2)
#define  ISO_MISC_DDC1_CMDERR_SOURCE_write_data_lost_shift                       (1)
#define  ISO_MISC_DDC1_CMDERR_SOURCE_slv_addr_lost_shift                         (0)
#define  ISO_MISC_DDC1_CMDERR_SOURCE_read_stop_mask                              (0x00000008)
#define  ISO_MISC_DDC1_CMDERR_SOURCE_read_ack_stop_mask                          (0x00000004)
#define  ISO_MISC_DDC1_CMDERR_SOURCE_write_data_lost_mask                        (0x00000002)
#define  ISO_MISC_DDC1_CMDERR_SOURCE_slv_addr_lost_mask                          (0x00000001)
#define  ISO_MISC_DDC1_CMDERR_SOURCE_read_stop(data)                             (0x00000008&((data)<<3))
#define  ISO_MISC_DDC1_CMDERR_SOURCE_read_ack_stop(data)                         (0x00000004&((data)<<2))
#define  ISO_MISC_DDC1_CMDERR_SOURCE_write_data_lost(data)                       (0x00000002&((data)<<1))
#define  ISO_MISC_DDC1_CMDERR_SOURCE_slv_addr_lost(data)                         (0x00000001&(data))
#define  ISO_MISC_DDC1_CMDERR_SOURCE_get_read_stop(data)                         ((0x00000008&(data))>>3)
#define  ISO_MISC_DDC1_CMDERR_SOURCE_get_read_ack_stop(data)                     ((0x00000004&(data))>>2)
#define  ISO_MISC_DDC1_CMDERR_SOURCE_get_write_data_lost(data)                   ((0x00000002&(data))>>1)
#define  ISO_MISC_DDC1_CMDERR_SOURCE_get_slv_addr_lost(data)                     (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======ISO_MISC_DDC1 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  cmderr_ie:1;
        RBus_UInt32  timeout_en:1;
        RBus_UInt32  debounce_mode:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  retime_m:3;
    };
}iso_misc_ddc1_i2c_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  cmderr:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  finish:1;
        RBus_UInt32  timeout:1;
        RBus_UInt32  res3:3;
    };
}iso_misc_ddc1_i2c_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  timeout_val:8;
    };
}iso_misc_ddc1_i2c_tr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  edid_address:3;
        RBus_UInt32  finish_int_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  edid_srwen:1;
        RBus_UInt32  edid_en:1;
    };
}iso_misc_ddc1_edid_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dummy18061b10_7_0:8;
    };
}iso_misc_ddc1_ddc_vcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  edid_sadr:8;
    };
}iso_misc_ddc1_edid_imswsar_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  edid_eadr:8;
    };
}iso_misc_ddc1_edid_imswear_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  res2:1;
        RBus_UInt32  edidsubaddress:1;
        RBus_UInt32  edidstop:1;
        RBus_UInt32  i2c_m_rd_st_ie:1;
        RBus_UInt32  i2c_m_rd_sp_ie:1;
        RBus_UInt32  edidsubaddress_ie:1;
        RBus_UInt32  edidstop_ie:1;
    };
}iso_misc_ddc1_edid_ir_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  edidap:9;
    };
}iso_misc_ddc1_ddc_sir_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ediddp:8;
    };
}iso_misc_ddc1_ddc_sap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  res2:1;
        RBus_UInt32  ddc_bist_rme:1;
        RBus_UInt32  ddc_bist_rm:4;
    };
}iso_misc_ddc1_ddc_bistcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  segpt_latie:1;
        RBus_UInt32  dataoutputdelay_sel:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  i2c_m_rd_st_sts:1;
        RBus_UInt32  i2c_m_rd_sp_sts:1;
        RBus_UInt32  sgid_en:1;
    };
}iso_misc_ddc1_ddc_scr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sgid_address:7;
        RBus_UInt32  sgid_dtrden:1;
    };
}iso_misc_ddc1_ddc_ssar_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  segpt_latched:1;
        RBus_UInt32  seg_pt:7;
    };
}iso_misc_ddc1_ddc_spr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  cmdfsm_st:8;
    };
}iso_misc_ddc1_ddc_fsms_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dummy18061b68_7_1:7;
        RBus_UInt32  ls_0:1;
    };
}iso_misc_ddc1_ddc_dummy_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  start_irq_en:1;
        RBus_UInt32  stop_irq_en:1;
    };
}iso_misc_ddc1_ddc_edid_sram_read_irq_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  start:1;
        RBus_UInt32  stop:1;
    };
}iso_misc_ddc1_ddc_edid_sram_read_aux_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  ddc_bist_mode:1;
    };
}iso_misc_ddc1_ddc_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  ddc_bist_done:1;
    };
}iso_misc_ddc1_ddc_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  ddc_bist_fail:1;
    };
}iso_misc_ddc1_ddc_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  ddc_drf_mode:1;
    };
}iso_misc_ddc1_ddc_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  ddc_drf_resume:1;
    };
}iso_misc_ddc1_ddc_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  ddc_drf_done:1;
    };
}iso_misc_ddc1_ddc_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  ddc_drf_pause:1;
    };
}iso_misc_ddc1_ddc_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  ddc_drf_fail:1;
    };
}iso_misc_ddc1_ddc_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  read_stop:1;
        RBus_UInt32  read_ack_stop:1;
        RBus_UInt32  write_data_lost:1;
        RBus_UInt32  slv_addr_lost:1;
    };
}iso_misc_ddc1_cmderr_source_RBUS;

#else //apply LITTLE_ENDIAN

//======ISO_MISC_DDC1 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  retime_m:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  debounce_mode:2;
        RBus_UInt32  timeout_en:1;
        RBus_UInt32  cmderr_ie:1;
        RBus_UInt32  res2:24;
    };
}iso_misc_ddc1_i2c_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  timeout:1;
        RBus_UInt32  finish:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  cmderr:1;
        RBus_UInt32  res3:24;
    };
}iso_misc_ddc1_i2c_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  timeout_val:8;
        RBus_UInt32  res1:24;
    };
}iso_misc_ddc1_i2c_tr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  edid_en:1;
        RBus_UInt32  edid_srwen:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  finish_int_en:1;
        RBus_UInt32  edid_address:3;
        RBus_UInt32  res3:24;
    };
}iso_misc_ddc1_edid_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy18061b10_7_0:8;
        RBus_UInt32  res1:24;
    };
}iso_misc_ddc1_ddc_vcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  edid_sadr:8;
        RBus_UInt32  res1:24;
    };
}iso_misc_ddc1_edid_imswsar_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  edid_eadr:8;
        RBus_UInt32  res1:24;
    };
}iso_misc_ddc1_edid_imswear_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  edidstop_ie:1;
        RBus_UInt32  edidsubaddress_ie:1;
        RBus_UInt32  i2c_m_rd_sp_ie:1;
        RBus_UInt32  i2c_m_rd_st_ie:1;
        RBus_UInt32  edidstop:1;
        RBus_UInt32  edidsubaddress:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:25;
    };
}iso_misc_ddc1_edid_ir_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  edidap:9;
        RBus_UInt32  res1:23;
    };
}iso_misc_ddc1_ddc_sir_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ediddp:8;
        RBus_UInt32  res1:24;
    };
}iso_misc_ddc1_ddc_sap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddc_bist_rm:4;
        RBus_UInt32  ddc_bist_rme:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:26;
    };
}iso_misc_ddc1_ddc_bistcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sgid_en:1;
        RBus_UInt32  i2c_m_rd_sp_sts:1;
        RBus_UInt32  i2c_m_rd_st_sts:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dataoutputdelay_sel:3;
        RBus_UInt32  segpt_latie:1;
        RBus_UInt32  res2:24;
    };
}iso_misc_ddc1_ddc_scr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sgid_dtrden:1;
        RBus_UInt32  sgid_address:7;
        RBus_UInt32  res1:24;
    };
}iso_misc_ddc1_ddc_ssar_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_pt:7;
        RBus_UInt32  segpt_latched:1;
        RBus_UInt32  res1:24;
    };
}iso_misc_ddc1_ddc_spr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmdfsm_st:8;
        RBus_UInt32  res1:24;
    };
}iso_misc_ddc1_ddc_fsms_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ls_0:1;
        RBus_UInt32  dummy18061b68_7_1:7;
        RBus_UInt32  res1:24;
    };
}iso_misc_ddc1_ddc_dummy_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  stop_irq_en:1;
        RBus_UInt32  start_irq_en:1;
        RBus_UInt32  res1:30;
    };
}iso_misc_ddc1_ddc_edid_sram_read_irq_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  stop:1;
        RBus_UInt32  start:1;
        RBus_UInt32  res1:30;
    };
}iso_misc_ddc1_ddc_edid_sram_read_aux_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddc_bist_mode:1;
        RBus_UInt32  res1:31;
    };
}iso_misc_ddc1_ddc_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddc_bist_done:1;
        RBus_UInt32  res1:31;
    };
}iso_misc_ddc1_ddc_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddc_bist_fail:1;
        RBus_UInt32  res1:31;
    };
}iso_misc_ddc1_ddc_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddc_drf_mode:1;
        RBus_UInt32  res1:31;
    };
}iso_misc_ddc1_ddc_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddc_drf_resume:1;
        RBus_UInt32  res1:31;
    };
}iso_misc_ddc1_ddc_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddc_drf_done:1;
        RBus_UInt32  res1:31;
    };
}iso_misc_ddc1_ddc_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddc_drf_pause:1;
        RBus_UInt32  res1:31;
    };
}iso_misc_ddc1_ddc_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddc_drf_fail:1;
        RBus_UInt32  res1:31;
    };
}iso_misc_ddc1_ddc_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  slv_addr_lost:1;
        RBus_UInt32  write_data_lost:1;
        RBus_UInt32  read_ack_stop:1;
        RBus_UInt32  read_stop:1;
        RBus_UInt32  res1:28;
    };
}iso_misc_ddc1_cmderr_source_RBUS;




#endif 


#endif 
