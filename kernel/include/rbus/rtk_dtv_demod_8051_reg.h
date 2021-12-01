/**
* @file Merlin5_DesignSpec_rtk_dtv_demod_8051
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_RTK_DTV_DEMOD_8051_REG_H_
#define _RBUS_RTK_DTV_DEMOD_8051_REG_H_

#include "rbus_types.h"



//  RTK_DTV_DEMOD_8051 Register Address
#define  RTK_DTV_DEMOD_8051_GP_INT0_N                                           0x1815C004
#define  RTK_DTV_DEMOD_8051_GP_INT0_N_reg_addr                                   "0xB815C004"
#define  RTK_DTV_DEMOD_8051_GP_INT0_N_reg                                        0xB815C004
#define  RTK_DTV_DEMOD_8051_GP_INT0_N_inst_addr                                  "0x0000"
#define  set_RTK_DTV_DEMOD_8051_GP_INT0_N_reg(data)                              (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_GP_INT0_N_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_GP_INT0_N_reg                                    (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_GP_INT0_N_reg))
#define  RTK_DTV_DEMOD_8051_GP_INT0_N_bootcode_en_shift                          (7)
#define  RTK_DTV_DEMOD_8051_GP_INT0_N_i2ct_en_ctrl_shift                         (6)
#define  RTK_DTV_DEMOD_8051_GP_INT0_N_dw51_rst_in_n_shift                        (5)
#define  RTK_DTV_DEMOD_8051_GP_INT0_N_gp_int0_n_shift                            (0)
#define  RTK_DTV_DEMOD_8051_GP_INT0_N_bootcode_en_mask                           (0x00000080)
#define  RTK_DTV_DEMOD_8051_GP_INT0_N_i2ct_en_ctrl_mask                          (0x00000040)
#define  RTK_DTV_DEMOD_8051_GP_INT0_N_dw51_rst_in_n_mask                         (0x00000020)
#define  RTK_DTV_DEMOD_8051_GP_INT0_N_gp_int0_n_mask                             (0x00000001)
#define  RTK_DTV_DEMOD_8051_GP_INT0_N_bootcode_en(data)                          (0x00000080&((data)<<7))
#define  RTK_DTV_DEMOD_8051_GP_INT0_N_i2ct_en_ctrl(data)                         (0x00000040&((data)<<6))
#define  RTK_DTV_DEMOD_8051_GP_INT0_N_dw51_rst_in_n(data)                        (0x00000020&((data)<<5))
#define  RTK_DTV_DEMOD_8051_GP_INT0_N_gp_int0_n(data)                            (0x00000001&(data))
#define  RTK_DTV_DEMOD_8051_GP_INT0_N_get_bootcode_en(data)                      ((0x00000080&(data))>>7)
#define  RTK_DTV_DEMOD_8051_GP_INT0_N_get_i2ct_en_ctrl(data)                     ((0x00000040&(data))>>6)
#define  RTK_DTV_DEMOD_8051_GP_INT0_N_get_dw51_rst_in_n(data)                    ((0x00000020&(data))>>5)
#define  RTK_DTV_DEMOD_8051_GP_INT0_N_get_gp_int0_n(data)                        (0x00000001&(data))

#define  RTK_DTV_DEMOD_8051_FW_BIST_PASS                                        0x1815C008
#define  RTK_DTV_DEMOD_8051_FW_BIST_PASS_reg_addr                                "0xB815C008"
#define  RTK_DTV_DEMOD_8051_FW_BIST_PASS_reg                                     0xB815C008
#define  RTK_DTV_DEMOD_8051_FW_BIST_PASS_inst_addr                               "0x0001"
#define  set_RTK_DTV_DEMOD_8051_FW_BIST_PASS_reg(data)                           (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_FW_BIST_PASS_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_FW_BIST_PASS_reg                                 (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_FW_BIST_PASS_reg))
#define  RTK_DTV_DEMOD_8051_FW_BIST_PASS_rom_bist_en_shift                       (7)
#define  RTK_DTV_DEMOD_8051_FW_BIST_PASS_rom_bist_finish_shift                   (3)
#define  RTK_DTV_DEMOD_8051_FW_BIST_PASS_rom_bist_pass_shift                     (2)
#define  RTK_DTV_DEMOD_8051_FW_BIST_PASS_fw_bist_finish_shift                    (1)
#define  RTK_DTV_DEMOD_8051_FW_BIST_PASS_fw_bist_pass_shift                      (0)
#define  RTK_DTV_DEMOD_8051_FW_BIST_PASS_rom_bist_en_mask                        (0x00000080)
#define  RTK_DTV_DEMOD_8051_FW_BIST_PASS_rom_bist_finish_mask                    (0x00000008)
#define  RTK_DTV_DEMOD_8051_FW_BIST_PASS_rom_bist_pass_mask                      (0x00000004)
#define  RTK_DTV_DEMOD_8051_FW_BIST_PASS_fw_bist_finish_mask                     (0x00000002)
#define  RTK_DTV_DEMOD_8051_FW_BIST_PASS_fw_bist_pass_mask                       (0x00000001)
#define  RTK_DTV_DEMOD_8051_FW_BIST_PASS_rom_bist_en(data)                       (0x00000080&((data)<<7))
#define  RTK_DTV_DEMOD_8051_FW_BIST_PASS_rom_bist_finish(data)                   (0x00000008&((data)<<3))
#define  RTK_DTV_DEMOD_8051_FW_BIST_PASS_rom_bist_pass(data)                     (0x00000004&((data)<<2))
#define  RTK_DTV_DEMOD_8051_FW_BIST_PASS_fw_bist_finish(data)                    (0x00000002&((data)<<1))
#define  RTK_DTV_DEMOD_8051_FW_BIST_PASS_fw_bist_pass(data)                      (0x00000001&(data))
#define  RTK_DTV_DEMOD_8051_FW_BIST_PASS_get_rom_bist_en(data)                   ((0x00000080&(data))>>7)
#define  RTK_DTV_DEMOD_8051_FW_BIST_PASS_get_rom_bist_finish(data)               ((0x00000008&(data))>>3)
#define  RTK_DTV_DEMOD_8051_FW_BIST_PASS_get_rom_bist_pass(data)                 ((0x00000004&(data))>>2)
#define  RTK_DTV_DEMOD_8051_FW_BIST_PASS_get_fw_bist_finish(data)                ((0x00000002&(data))>>1)
#define  RTK_DTV_DEMOD_8051_FW_BIST_PASS_get_fw_bist_pass(data)                  (0x00000001&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_03                                      0x1815C00C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_03_reg_addr                              "0xB815C00C"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_03_reg                                   0xB815C00C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_03_inst_addr                             "0x0002"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_03_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_03_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_03_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_03_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_03_reserve8051_03_shift                  (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_03_reserve8051_03_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_03_reserve8051_03(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_03_get_reserve8051_03(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_CKG_COUNT_REG                                       0x1815C010
#define  RTK_DTV_DEMOD_8051_CKG_COUNT_REG_reg_addr                               "0xB815C010"
#define  RTK_DTV_DEMOD_8051_CKG_COUNT_REG_reg                                    0xB815C010
#define  RTK_DTV_DEMOD_8051_CKG_COUNT_REG_inst_addr                              "0x0003"
#define  set_RTK_DTV_DEMOD_8051_CKG_COUNT_REG_reg(data)                          (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_CKG_COUNT_REG_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_CKG_COUNT_REG_reg                                (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_CKG_COUNT_REG_reg))
#define  RTK_DTV_DEMOD_8051_CKG_COUNT_REG_ckg_count_reg_shift                    (0)
#define  RTK_DTV_DEMOD_8051_CKG_COUNT_REG_ckg_count_reg_mask                     (0x000000FF)
#define  RTK_DTV_DEMOD_8051_CKG_COUNT_REG_ckg_count_reg(data)                    (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_CKG_COUNT_REG_get_ckg_count_reg(data)                (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_F005                                                0x1815C014
#define  RTK_DTV_DEMOD_8051_F005_reg_addr                                        "0xB815C014"
#define  RTK_DTV_DEMOD_8051_F005_reg                                             0xB815C014
#define  RTK_DTV_DEMOD_8051_F005_inst_addr                                       "0x0004"
#define  set_RTK_DTV_DEMOD_8051_F005_reg(data)                                   (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_F005_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_F005_reg                                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_F005_reg))
#define  RTK_DTV_DEMOD_8051_F005_f005_shift                                      (0)
#define  RTK_DTV_DEMOD_8051_F005_f005_mask                                       (0x00000001)
#define  RTK_DTV_DEMOD_8051_F005_f005(data)                                      (0x00000001&(data))
#define  RTK_DTV_DEMOD_8051_F005_get_f005(data)                                  (0x00000001&(data))

#define  RTK_DTV_DEMOD_8051_WDOG_RST_N                                          0x1815C018
#define  RTK_DTV_DEMOD_8051_WDOG_RST_N_reg_addr                                  "0xB815C018"
#define  RTK_DTV_DEMOD_8051_WDOG_RST_N_reg                                       0xB815C018
#define  RTK_DTV_DEMOD_8051_WDOG_RST_N_inst_addr                                 "0x0005"
#define  set_RTK_DTV_DEMOD_8051_WDOG_RST_N_reg(data)                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_WDOG_RST_N_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_WDOG_RST_N_reg                                   (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_WDOG_RST_N_reg))
#define  RTK_DTV_DEMOD_8051_WDOG_RST_N_wdog_en_shift                             (7)
#define  RTK_DTV_DEMOD_8051_WDOG_RST_N_wdog_count_reg_shift                      (3)
#define  RTK_DTV_DEMOD_8051_WDOG_RST_N_wdog_clear_shift                          (2)
#define  RTK_DTV_DEMOD_8051_WDOG_RST_N_wdog_tout_ind_shift                       (1)
#define  RTK_DTV_DEMOD_8051_WDOG_RST_N_wdog_rst_n_shift                          (0)
#define  RTK_DTV_DEMOD_8051_WDOG_RST_N_wdog_en_mask                              (0x00000080)
#define  RTK_DTV_DEMOD_8051_WDOG_RST_N_wdog_count_reg_mask                       (0x00000078)
#define  RTK_DTV_DEMOD_8051_WDOG_RST_N_wdog_clear_mask                           (0x00000004)
#define  RTK_DTV_DEMOD_8051_WDOG_RST_N_wdog_tout_ind_mask                        (0x00000002)
#define  RTK_DTV_DEMOD_8051_WDOG_RST_N_wdog_rst_n_mask                           (0x00000001)
#define  RTK_DTV_DEMOD_8051_WDOG_RST_N_wdog_en(data)                             (0x00000080&((data)<<7))
#define  RTK_DTV_DEMOD_8051_WDOG_RST_N_wdog_count_reg(data)                      (0x00000078&((data)<<3))
#define  RTK_DTV_DEMOD_8051_WDOG_RST_N_wdog_clear(data)                          (0x00000004&((data)<<2))
#define  RTK_DTV_DEMOD_8051_WDOG_RST_N_wdog_tout_ind(data)                       (0x00000002&((data)<<1))
#define  RTK_DTV_DEMOD_8051_WDOG_RST_N_wdog_rst_n(data)                          (0x00000001&(data))
#define  RTK_DTV_DEMOD_8051_WDOG_RST_N_get_wdog_en(data)                         ((0x00000080&(data))>>7)
#define  RTK_DTV_DEMOD_8051_WDOG_RST_N_get_wdog_count_reg(data)                  ((0x00000078&(data))>>3)
#define  RTK_DTV_DEMOD_8051_WDOG_RST_N_get_wdog_clear(data)                      ((0x00000004&(data))>>2)
#define  RTK_DTV_DEMOD_8051_WDOG_RST_N_get_wdog_tout_ind(data)                   ((0x00000002&(data))>>1)
#define  RTK_DTV_DEMOD_8051_WDOG_RST_N_get_wdog_rst_n(data)                      (0x00000001&(data))

#define  RTK_DTV_DEMOD_8051_FW_LENGTH                                           0x1815C01C
#define  RTK_DTV_DEMOD_8051_FW_LENGTH_reg_addr                                   "0xB815C01C"
#define  RTK_DTV_DEMOD_8051_FW_LENGTH_reg                                        0xB815C01C
#define  RTK_DTV_DEMOD_8051_FW_LENGTH_inst_addr                                  "0x0006"
#define  set_RTK_DTV_DEMOD_8051_FW_LENGTH_reg(data)                              (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_FW_LENGTH_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_FW_LENGTH_reg                                    (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_FW_LENGTH_reg))
#define  RTK_DTV_DEMOD_8051_FW_LENGTH_fw_length_shift                            (0)
#define  RTK_DTV_DEMOD_8051_FW_LENGTH_fw_length_mask                             (0x000000FF)
#define  RTK_DTV_DEMOD_8051_FW_LENGTH_fw_length(data)                            (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_FW_LENGTH_get_fw_length(data)                        (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_LA_ADDR                                             0x1815C020
#define  RTK_DTV_DEMOD_8051_LA_ADDR_reg_addr                                     "0xB815C020"
#define  RTK_DTV_DEMOD_8051_LA_ADDR_reg                                          0xB815C020
#define  RTK_DTV_DEMOD_8051_LA_ADDR_inst_addr                                    "0x0007"
#define  set_RTK_DTV_DEMOD_8051_LA_ADDR_reg(data)                                (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_LA_ADDR_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_LA_ADDR_reg                                      (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_LA_ADDR_reg))
#define  RTK_DTV_DEMOD_8051_LA_ADDR_la_addr_shift                                (0)
#define  RTK_DTV_DEMOD_8051_LA_ADDR_la_addr_mask                                 (0x000000FF)
#define  RTK_DTV_DEMOD_8051_LA_ADDR_la_addr(data)                                (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_LA_ADDR_get_la_addr(data)                            (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_TIMEOUT_THRE                                        0x1815C024
#define  RTK_DTV_DEMOD_8051_TIMEOUT_THRE_reg_addr                                "0xB815C024"
#define  RTK_DTV_DEMOD_8051_TIMEOUT_THRE_reg                                     0xB815C024
#define  RTK_DTV_DEMOD_8051_TIMEOUT_THRE_inst_addr                               "0x0008"
#define  set_RTK_DTV_DEMOD_8051_TIMEOUT_THRE_reg(data)                           (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_TIMEOUT_THRE_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_TIMEOUT_THRE_reg                                 (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_TIMEOUT_THRE_reg))
#define  RTK_DTV_DEMOD_8051_TIMEOUT_THRE_timeout_thre_shift                      (0)
#define  RTK_DTV_DEMOD_8051_TIMEOUT_THRE_timeout_thre_mask                       (0x000000FF)
#define  RTK_DTV_DEMOD_8051_TIMEOUT_THRE_timeout_thre(data)                      (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_TIMEOUT_THRE_get_timeout_thre(data)                  (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_BIST_FAIL0                                          0x1815C028
#define  RTK_DTV_DEMOD_8051_BIST_FAIL0_reg_addr                                  "0xB815C028"
#define  RTK_DTV_DEMOD_8051_BIST_FAIL0_reg                                       0xB815C028
#define  RTK_DTV_DEMOD_8051_BIST_FAIL0_inst_addr                                 "0x0009"
#define  set_RTK_DTV_DEMOD_8051_BIST_FAIL0_reg(data)                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_BIST_FAIL0_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_BIST_FAIL0_reg                                   (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_BIST_FAIL0_reg))
#define  RTK_DTV_DEMOD_8051_BIST_FAIL0_bist_mode_shift                           (7)
#define  RTK_DTV_DEMOD_8051_BIST_FAIL0_bist_done1_shift                          (3)
#define  RTK_DTV_DEMOD_8051_BIST_FAIL0_bist_fail1_shift                          (2)
#define  RTK_DTV_DEMOD_8051_BIST_FAIL0_bist_done0_shift                          (1)
#define  RTK_DTV_DEMOD_8051_BIST_FAIL0_bist_fail0_shift                          (0)
#define  RTK_DTV_DEMOD_8051_BIST_FAIL0_bist_mode_mask                            (0x00000080)
#define  RTK_DTV_DEMOD_8051_BIST_FAIL0_bist_done1_mask                           (0x00000008)
#define  RTK_DTV_DEMOD_8051_BIST_FAIL0_bist_fail1_mask                           (0x00000004)
#define  RTK_DTV_DEMOD_8051_BIST_FAIL0_bist_done0_mask                           (0x00000002)
#define  RTK_DTV_DEMOD_8051_BIST_FAIL0_bist_fail0_mask                           (0x00000001)
#define  RTK_DTV_DEMOD_8051_BIST_FAIL0_bist_mode(data)                           (0x00000080&((data)<<7))
#define  RTK_DTV_DEMOD_8051_BIST_FAIL0_bist_done1(data)                          (0x00000008&((data)<<3))
#define  RTK_DTV_DEMOD_8051_BIST_FAIL0_bist_fail1(data)                          (0x00000004&((data)<<2))
#define  RTK_DTV_DEMOD_8051_BIST_FAIL0_bist_done0(data)                          (0x00000002&((data)<<1))
#define  RTK_DTV_DEMOD_8051_BIST_FAIL0_bist_fail0(data)                          (0x00000001&(data))
#define  RTK_DTV_DEMOD_8051_BIST_FAIL0_get_bist_mode(data)                       ((0x00000080&(data))>>7)
#define  RTK_DTV_DEMOD_8051_BIST_FAIL0_get_bist_done1(data)                      ((0x00000008&(data))>>3)
#define  RTK_DTV_DEMOD_8051_BIST_FAIL0_get_bist_fail1(data)                      ((0x00000004&(data))>>2)
#define  RTK_DTV_DEMOD_8051_BIST_FAIL0_get_bist_done0(data)                      ((0x00000002&(data))>>1)
#define  RTK_DTV_DEMOD_8051_BIST_FAIL0_get_bist_fail0(data)                      (0x00000001&(data))

#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN                                          0x1815C040
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_reg_addr                                  "0xB815C040"
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_reg                                       0xB815C040
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_inst_addr                                 "0x000A"
#define  set_RTK_DTV_DEMOD_8051_ALU_MAC_EN_reg(data)                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_MAC_EN_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_MAC_EN_reg                                   (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_MAC_EN_reg))
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_alu_atr_en_shift                          (6)
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_alu_log2_en_shift                         (5)
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_alu_cordic_en_shift                       (4)
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_alu_div_en_shift                          (3)
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_alu_sub_sel_shift                         (2)
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_alu_mac_op_en_shift                       (1)
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_alu_mac_en_shift                          (0)
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_alu_atr_en_mask                           (0x00000040)
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_alu_log2_en_mask                          (0x00000020)
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_alu_cordic_en_mask                        (0x00000010)
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_alu_div_en_mask                           (0x00000008)
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_alu_sub_sel_mask                          (0x00000004)
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_alu_mac_op_en_mask                        (0x00000002)
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_alu_mac_en_mask                           (0x00000001)
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_alu_atr_en(data)                          (0x00000040&((data)<<6))
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_alu_log2_en(data)                         (0x00000020&((data)<<5))
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_alu_cordic_en(data)                       (0x00000010&((data)<<4))
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_alu_div_en(data)                          (0x00000008&((data)<<3))
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_alu_sub_sel(data)                         (0x00000004&((data)<<2))
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_alu_mac_op_en(data)                       (0x00000002&((data)<<1))
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_alu_mac_en(data)                          (0x00000001&(data))
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_get_alu_atr_en(data)                      ((0x00000040&(data))>>6)
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_get_alu_log2_en(data)                     ((0x00000020&(data))>>5)
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_get_alu_cordic_en(data)                   ((0x00000010&(data))>>4)
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_get_alu_div_en(data)                      ((0x00000008&(data))>>3)
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_get_alu_sub_sel(data)                     ((0x00000004&(data))>>2)
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_get_alu_mac_op_en(data)                   ((0x00000002&(data))>>1)
#define  RTK_DTV_DEMOD_8051_ALU_MAC_EN_get_alu_mac_en(data)                      (0x00000001&(data))

#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN1_B1                                      0x1815C044
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN1_B1_reg_addr                              "0xB815C044"
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN1_B1_reg                                   0xB815C044
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN1_B1_inst_addr                             "0x000B"
#define  set_RTK_DTV_DEMOD_8051_ALU_MUL_IN1_B1_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_MUL_IN1_B1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_MUL_IN1_B1_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_MUL_IN1_B1_reg))
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN1_B1_alu_mul_in1_b1_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN1_B1_alu_mul_in1_b1_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN1_B1_alu_mul_in1_b1(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN1_B1_get_alu_mul_in1_b1(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN1_B0                                      0x1815C048
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN1_B0_reg_addr                              "0xB815C048"
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN1_B0_reg                                   0xB815C048
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN1_B0_inst_addr                             "0x000C"
#define  set_RTK_DTV_DEMOD_8051_ALU_MUL_IN1_B0_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_MUL_IN1_B0_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_MUL_IN1_B0_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_MUL_IN1_B0_reg))
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN1_B0_alu_mul_in1_b0_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN1_B0_alu_mul_in1_b0_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN1_B0_alu_mul_in1_b0(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN1_B0_get_alu_mul_in1_b0(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN2_B1                                      0x1815C04C
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN2_B1_reg_addr                              "0xB815C04C"
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN2_B1_reg                                   0xB815C04C
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN2_B1_inst_addr                             "0x000D"
#define  set_RTK_DTV_DEMOD_8051_ALU_MUL_IN2_B1_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_MUL_IN2_B1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_MUL_IN2_B1_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_MUL_IN2_B1_reg))
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN2_B1_alu_mul_in2_b1_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN2_B1_alu_mul_in2_b1_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN2_B1_alu_mul_in2_b1(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN2_B1_get_alu_mul_in2_b1(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN2_B0                                      0x1815C050
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN2_B0_reg_addr                              "0xB815C050"
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN2_B0_reg                                   0xB815C050
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN2_B0_inst_addr                             "0x000E"
#define  set_RTK_DTV_DEMOD_8051_ALU_MUL_IN2_B0_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_MUL_IN2_B0_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_MUL_IN2_B0_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_MUL_IN2_B0_reg))
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN2_B0_alu_mul_in2_b0_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN2_B0_alu_mul_in2_b0_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN2_B0_alu_mul_in2_b0(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_MUL_IN2_B0_get_alu_mul_in2_b0(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B3                                      0x1815C054
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B3_reg_addr                              "0xB815C054"
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B3_reg                                   0xB815C054
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B3_inst_addr                             "0x000F"
#define  set_RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B3_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B3_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B3_reg))
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B3_alu_add_in1_b3_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B3_alu_add_in1_b3_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B3_alu_add_in1_b3(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B3_get_alu_add_in1_b3(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B2                                      0x1815C058
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B2_reg_addr                              "0xB815C058"
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B2_reg                                   0xB815C058
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B2_inst_addr                             "0x0010"
#define  set_RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B2_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B2_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B2_reg))
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B2_alu_add_in1_b2_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B2_alu_add_in1_b2_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B2_alu_add_in1_b2(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B2_get_alu_add_in1_b2(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B1                                      0x1815C05C
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B1_reg_addr                              "0xB815C05C"
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B1_reg                                   0xB815C05C
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B1_inst_addr                             "0x0011"
#define  set_RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B1_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B1_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B1_reg))
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B1_alu_add_in1_b1_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B1_alu_add_in1_b1_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B1_alu_add_in1_b1(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B1_get_alu_add_in1_b1(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B0                                      0x1815C060
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B0_reg_addr                              "0xB815C060"
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B0_reg                                   0xB815C060
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B0_inst_addr                             "0x0012"
#define  set_RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B0_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B0_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B0_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B0_reg))
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B0_alu_add_in1_b0_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B0_alu_add_in1_b0_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B0_alu_add_in1_b0(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN1_B0_get_alu_add_in1_b0(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B3                                      0x1815C064
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B3_reg_addr                              "0xB815C064"
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B3_reg                                   0xB815C064
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B3_inst_addr                             "0x0013"
#define  set_RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B3_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B3_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B3_reg))
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B3_alu_add_in2_b3_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B3_alu_add_in2_b3_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B3_alu_add_in2_b3(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B3_get_alu_add_in2_b3(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B2                                      0x1815C068
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B2_reg_addr                              "0xB815C068"
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B2_reg                                   0xB815C068
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B2_inst_addr                             "0x0014"
#define  set_RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B2_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B2_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B2_reg))
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B2_alu_add_in2_b2_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B2_alu_add_in2_b2_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B2_alu_add_in2_b2(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B2_get_alu_add_in2_b2(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B1                                      0x1815C06C
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B1_reg_addr                              "0xB815C06C"
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B1_reg                                   0xB815C06C
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B1_inst_addr                             "0x0015"
#define  set_RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B1_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B1_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B1_reg))
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B1_alu_add_in2_b1_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B1_alu_add_in2_b1_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B1_alu_add_in2_b1(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B1_get_alu_add_in2_b1(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B0                                      0x1815C070
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B0_reg_addr                              "0xB815C070"
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B0_reg                                   0xB815C070
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B0_inst_addr                             "0x0016"
#define  set_RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B0_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B0_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B0_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B0_reg))
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B0_alu_add_in2_b0_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B0_alu_add_in2_b0_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B0_alu_add_in2_b0(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_ADD_IN2_B0_get_alu_add_in2_b0(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B3                                      0x1815C074
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B3_reg_addr                              "0xB815C074"
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B3_reg                                   0xB815C074
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B3_inst_addr                             "0x0017"
#define  set_RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B3_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B3_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B3_reg))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B3_alu_div_in1_b3_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B3_alu_div_in1_b3_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B3_alu_div_in1_b3(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B3_get_alu_div_in1_b3(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B2                                      0x1815C078
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B2_reg_addr                              "0xB815C078"
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B2_reg                                   0xB815C078
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B2_inst_addr                             "0x0018"
#define  set_RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B2_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B2_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B2_reg))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B2_alu_div_in1_b2_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B2_alu_div_in1_b2_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B2_alu_div_in1_b2(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B2_get_alu_div_in1_b2(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B1                                      0x1815C07C
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B1_reg_addr                              "0xB815C07C"
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B1_reg                                   0xB815C07C
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B1_inst_addr                             "0x0019"
#define  set_RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B1_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B1_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B1_reg))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B1_alu_div_in1_b1_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B1_alu_div_in1_b1_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B1_alu_div_in1_b1(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B1_get_alu_div_in1_b1(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B0                                      0x1815C080
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B0_reg_addr                              "0xB815C080"
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B0_reg                                   0xB815C080
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B0_inst_addr                             "0x001A"
#define  set_RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B0_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B0_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B0_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B0_reg))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B0_alu_div_in1_b0_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B0_alu_div_in1_b0_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B0_alu_div_in1_b0(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN1_B0_get_alu_div_in1_b0(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B3                                      0x1815C084
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B3_reg_addr                              "0xB815C084"
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B3_reg                                   0xB815C084
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B3_inst_addr                             "0x001B"
#define  set_RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B3_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B3_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B3_reg))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B3_alu_div_in2_b3_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B3_alu_div_in2_b3_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B3_alu_div_in2_b3(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B3_get_alu_div_in2_b3(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B2                                      0x1815C088
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B2_reg_addr                              "0xB815C088"
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B2_reg                                   0xB815C088
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B2_inst_addr                             "0x001C"
#define  set_RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B2_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B2_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B2_reg))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B2_alu_div_in2_b2_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B2_alu_div_in2_b2_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B2_alu_div_in2_b2(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B2_get_alu_div_in2_b2(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B1                                      0x1815C08C
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B1_reg_addr                              "0xB815C08C"
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B1_reg                                   0xB815C08C
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B1_inst_addr                             "0x001D"
#define  set_RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B1_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B1_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B1_reg))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B1_alu_div_in2_b1_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B1_alu_div_in2_b1_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B1_alu_div_in2_b1(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B1_get_alu_div_in2_b1(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B0                                      0x1815C090
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B0_reg_addr                              "0xB815C090"
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B0_reg                                   0xB815C090
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B0_inst_addr                             "0x001E"
#define  set_RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B0_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B0_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B0_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B0_reg))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B0_alu_div_in2_b0_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B0_alu_div_in2_b0_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B0_alu_div_in2_b0(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_IN2_B0_get_alu_div_in2_b0(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_PHASE_B1                                 0x1815C094
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_PHASE_B1_reg_addr                         "0xB815C094"
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_PHASE_B1_reg                              0xB815C094
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_PHASE_B1_inst_addr                        "0x001F"
#define  set_RTK_DTV_DEMOD_8051_ALU_CORDIC_PHASE_B1_reg(data)                    (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_CORDIC_PHASE_B1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_CORDIC_PHASE_B1_reg                          (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_CORDIC_PHASE_B1_reg))
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_PHASE_B1_alu_cordic_phase_b1_shift        (0)
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_PHASE_B1_alu_cordic_phase_b1_mask         (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_PHASE_B1_alu_cordic_phase_b1(data)        (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_PHASE_B1_get_alu_cordic_phase_b1(data)    (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_PHASE_B0                                 0x1815C098
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_PHASE_B0_reg_addr                         "0xB815C098"
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_PHASE_B0_reg                              0xB815C098
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_PHASE_B0_inst_addr                        "0x0020"
#define  set_RTK_DTV_DEMOD_8051_ALU_CORDIC_PHASE_B0_reg(data)                    (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_CORDIC_PHASE_B0_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_CORDIC_PHASE_B0_reg                          (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_CORDIC_PHASE_B0_reg))
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_PHASE_B0_alu_cordic_phase_b0_shift        (0)
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_PHASE_B0_alu_cordic_phase_b0_mask         (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_PHASE_B0_alu_cordic_phase_b0(data)        (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_PHASE_B0_get_alu_cordic_phase_b0(data)    (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B2                                      0x1815C09C
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B2_reg_addr                              "0xB815C09C"
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B2_reg                                   0xB815C09C
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B2_inst_addr                             "0x0021"
#define  set_RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B2_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B2_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B2_reg))
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B2_alu_log2_in_b2_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B2_alu_log2_in_b2_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B2_alu_log2_in_b2(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B2_get_alu_log2_in_b2(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B1                                      0x1815C0A0
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B1_reg_addr                              "0xB815C0A0"
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B1_reg                                   0xB815C0A0
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B1_inst_addr                             "0x0022"
#define  set_RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B1_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B1_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B1_reg))
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B1_alu_log2_in_b1_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B1_alu_log2_in_b1_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B1_alu_log2_in_b1(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B1_get_alu_log2_in_b1(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B0                                      0x1815C0A4
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B0_reg_addr                              "0xB815C0A4"
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B0_reg                                   0xB815C0A4
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B0_inst_addr                             "0x0023"
#define  set_RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B0_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B0_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B0_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B0_reg))
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B0_alu_log2_in_b0_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B0_alu_log2_in_b0_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B0_alu_log2_in_b0(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_IN_B0_get_alu_log2_in_b0(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_ATR_IN_B2                                       0x1815C0A8
#define  RTK_DTV_DEMOD_8051_ALU_ATR_IN_B2_reg_addr                               "0xB815C0A8"
#define  RTK_DTV_DEMOD_8051_ALU_ATR_IN_B2_reg                                    0xB815C0A8
#define  RTK_DTV_DEMOD_8051_ALU_ATR_IN_B2_inst_addr                              "0x0024"
#define  set_RTK_DTV_DEMOD_8051_ALU_ATR_IN_B2_reg(data)                          (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ATR_IN_B2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_ATR_IN_B2_reg                                (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ATR_IN_B2_reg))
#define  RTK_DTV_DEMOD_8051_ALU_ATR_IN_B2_alu_atr_in_b2_shift                    (0)
#define  RTK_DTV_DEMOD_8051_ALU_ATR_IN_B2_alu_atr_in_b2_mask                     (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_ATR_IN_B2_alu_atr_in_b2(data)                    (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_ATR_IN_B2_get_alu_atr_in_b2(data)                (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_ATR_IN_B1                                       0x1815C0AC
#define  RTK_DTV_DEMOD_8051_ALU_ATR_IN_B1_reg_addr                               "0xB815C0AC"
#define  RTK_DTV_DEMOD_8051_ALU_ATR_IN_B1_reg                                    0xB815C0AC
#define  RTK_DTV_DEMOD_8051_ALU_ATR_IN_B1_inst_addr                              "0x0025"
#define  set_RTK_DTV_DEMOD_8051_ALU_ATR_IN_B1_reg(data)                          (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ATR_IN_B1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_ATR_IN_B1_reg                                (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ATR_IN_B1_reg))
#define  RTK_DTV_DEMOD_8051_ALU_ATR_IN_B1_alu_atr_in_b1_shift                    (0)
#define  RTK_DTV_DEMOD_8051_ALU_ATR_IN_B1_alu_atr_in_b1_mask                     (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_ATR_IN_B1_alu_atr_in_b1(data)                    (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_ATR_IN_B1_get_alu_atr_in_b1(data)                (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_ATR_IN_B0                                       0x1815C0B0
#define  RTK_DTV_DEMOD_8051_ALU_ATR_IN_B0_reg_addr                               "0xB815C0B0"
#define  RTK_DTV_DEMOD_8051_ALU_ATR_IN_B0_reg                                    0xB815C0B0
#define  RTK_DTV_DEMOD_8051_ALU_ATR_IN_B0_inst_addr                              "0x0026"
#define  set_RTK_DTV_DEMOD_8051_ALU_ATR_IN_B0_reg(data)                          (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ATR_IN_B0_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_ATR_IN_B0_reg                                (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ATR_IN_B0_reg))
#define  RTK_DTV_DEMOD_8051_ALU_ATR_IN_B0_alu_atr_in_b0_shift                    (0)
#define  RTK_DTV_DEMOD_8051_ALU_ATR_IN_B0_alu_atr_in_b0_mask                     (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_ATR_IN_B0_alu_atr_in_b0(data)                    (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_ATR_IN_B0_get_alu_atr_in_b0(data)                (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_ATR_ALPHA1                                      0x1815C0B4
#define  RTK_DTV_DEMOD_8051_ALU_ATR_ALPHA1_reg_addr                              "0xB815C0B4"
#define  RTK_DTV_DEMOD_8051_ALU_ATR_ALPHA1_reg                                   0xB815C0B4
#define  RTK_DTV_DEMOD_8051_ALU_ATR_ALPHA1_inst_addr                             "0x0027"
#define  set_RTK_DTV_DEMOD_8051_ALU_ATR_ALPHA1_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ATR_ALPHA1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_ATR_ALPHA1_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ATR_ALPHA1_reg))
#define  RTK_DTV_DEMOD_8051_ALU_ATR_ALPHA1_alu_atr_alpha1_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_ATR_ALPHA1_alu_atr_alpha1_mask                   (0x0000003F)
#define  RTK_DTV_DEMOD_8051_ALU_ATR_ALPHA1_alu_atr_alpha1(data)                  (0x0000003F&(data))
#define  RTK_DTV_DEMOD_8051_ALU_ATR_ALPHA1_get_alu_atr_alpha1(data)              (0x0000003F&(data))

#define  RTK_DTV_DEMOD_8051_ALU_ATR_ALPHA2                                      0x1815C0B8
#define  RTK_DTV_DEMOD_8051_ALU_ATR_ALPHA2_reg_addr                              "0xB815C0B8"
#define  RTK_DTV_DEMOD_8051_ALU_ATR_ALPHA2_reg                                   0xB815C0B8
#define  RTK_DTV_DEMOD_8051_ALU_ATR_ALPHA2_inst_addr                             "0x0028"
#define  set_RTK_DTV_DEMOD_8051_ALU_ATR_ALPHA2_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ATR_ALPHA2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_ATR_ALPHA2_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ATR_ALPHA2_reg))
#define  RTK_DTV_DEMOD_8051_ALU_ATR_ALPHA2_alu_atr_alpha2_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_ATR_ALPHA2_alu_atr_alpha2_mask                   (0x0000003F)
#define  RTK_DTV_DEMOD_8051_ALU_ATR_ALPHA2_alu_atr_alpha2(data)                  (0x0000003F&(data))
#define  RTK_DTV_DEMOD_8051_ALU_ATR_ALPHA2_get_alu_atr_alpha2(data)              (0x0000003F&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_2F                                      0x1815C0BC
#define  RTK_DTV_DEMOD_8051_RESERVE8051_2F_reg_addr                              "0xB815C0BC"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_2F_reg                                   0xB815C0BC
#define  RTK_DTV_DEMOD_8051_RESERVE8051_2F_inst_addr                             "0x0029"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_2F_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_2F_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_2F_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_2F_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_2F_reserve8051_2f_shift                  (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_2F_reserve8051_2f_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_2F_reserve8051_2f(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_2F_get_reserve8051_2f(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_30                                      0x1815C0C0
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_reg_addr                              "0xB815C0C0"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_reg                                   0xB815C0C0
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_inst_addr                             "0x002A"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_30_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_30_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_30_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_30_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_reserve8051_30_7_0_shift              (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_reserve8051_30_7_0_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_reserve8051_30_7_0(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_get_reserve8051_30_7_0(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_1                                    0x1815C0C4
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_1_reg_addr                            "0xB815C0C4"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_1_reg                                 0xB815C0C4
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_1_inst_addr                           "0x002B"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_30_1_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_30_1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_30_1_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_30_1_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_1_reserve8051_30_15_8_shift           (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_1_reserve8051_30_15_8_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_1_reserve8051_30_15_8(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_1_get_reserve8051_30_15_8(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_2                                    0x1815C0C8
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_2_reg_addr                            "0xB815C0C8"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_2_reg                                 0xB815C0C8
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_2_inst_addr                           "0x002C"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_30_2_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_30_2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_30_2_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_30_2_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_2_reserve8051_30_23_16_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_2_reserve8051_30_23_16_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_2_reserve8051_30_23_16(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_2_get_reserve8051_30_23_16(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_3                                    0x1815C0CC
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_3_reg_addr                            "0xB815C0CC"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_3_reg                                 0xB815C0CC
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_3_inst_addr                           "0x002D"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_30_3_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_30_3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_30_3_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_30_3_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_3_reserve8051_30_31_24_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_3_reserve8051_30_31_24_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_3_reserve8051_30_31_24(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_30_3_get_reserve8051_30_31_24(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_34                                      0x1815C0D0
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_reg_addr                              "0xB815C0D0"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_reg                                   0xB815C0D0
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_inst_addr                             "0x002E"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_34_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_34_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_34_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_34_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_reserve8051_34_7_0_shift              (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_reserve8051_34_7_0_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_reserve8051_34_7_0(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_get_reserve8051_34_7_0(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_1                                    0x1815C0D4
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_1_reg_addr                            "0xB815C0D4"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_1_reg                                 0xB815C0D4
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_1_inst_addr                           "0x002F"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_34_1_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_34_1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_34_1_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_34_1_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_1_reserve8051_34_15_8_shift           (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_1_reserve8051_34_15_8_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_1_reserve8051_34_15_8(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_1_get_reserve8051_34_15_8(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_2                                    0x1815C0D8
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_2_reg_addr                            "0xB815C0D8"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_2_reg                                 0xB815C0D8
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_2_inst_addr                           "0x0030"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_34_2_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_34_2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_34_2_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_34_2_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_2_reserve8051_34_23_16_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_2_reserve8051_34_23_16_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_2_reserve8051_34_23_16(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_2_get_reserve8051_34_23_16(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_3                                    0x1815C0DC
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_3_reg_addr                            "0xB815C0DC"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_3_reg                                 0xB815C0DC
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_3_inst_addr                           "0x0031"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_34_3_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_34_3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_34_3_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_34_3_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_3_reserve8051_34_31_24_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_3_reserve8051_34_31_24_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_3_reserve8051_34_31_24(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_34_3_get_reserve8051_34_31_24(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_38                                      0x1815C0E0
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_reg_addr                              "0xB815C0E0"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_reg                                   0xB815C0E0
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_inst_addr                             "0x0032"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_38_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_38_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_38_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_38_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_reserve8051_38_7_0_shift              (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_reserve8051_38_7_0_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_reserve8051_38_7_0(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_get_reserve8051_38_7_0(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_1                                    0x1815C0E4
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_1_reg_addr                            "0xB815C0E4"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_1_reg                                 0xB815C0E4
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_1_inst_addr                           "0x0033"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_38_1_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_38_1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_38_1_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_38_1_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_1_reserve8051_38_15_8_shift           (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_1_reserve8051_38_15_8_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_1_reserve8051_38_15_8(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_1_get_reserve8051_38_15_8(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_2                                    0x1815C0E8
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_2_reg_addr                            "0xB815C0E8"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_2_reg                                 0xB815C0E8
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_2_inst_addr                           "0x0034"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_38_2_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_38_2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_38_2_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_38_2_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_2_reserve8051_38_23_16_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_2_reserve8051_38_23_16_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_2_reserve8051_38_23_16(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_2_get_reserve8051_38_23_16(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_3                                    0x1815C0EC
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_3_reg_addr                            "0xB815C0EC"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_3_reg                                 0xB815C0EC
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_3_inst_addr                           "0x0035"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_38_3_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_38_3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_38_3_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_38_3_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_3_reserve8051_38_31_24_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_3_reserve8051_38_31_24_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_3_reserve8051_38_31_24(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_38_3_get_reserve8051_38_31_24(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C                                      0x1815C0F0
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_reg_addr                              "0xB815C0F0"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_reg                                   0xB815C0F0
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_inst_addr                             "0x0036"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_3C_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_3C_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_3C_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_3C_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_reserve8051_3c_7_0_shift              (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_reserve8051_3c_7_0_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_reserve8051_3c_7_0(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_get_reserve8051_3c_7_0(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_1                                    0x1815C0F4
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_1_reg_addr                            "0xB815C0F4"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_1_reg                                 0xB815C0F4
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_1_inst_addr                           "0x0037"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_3C_1_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_3C_1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_3C_1_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_3C_1_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_1_reserve8051_3c_15_8_shift           (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_1_reserve8051_3c_15_8_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_1_reserve8051_3c_15_8(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_1_get_reserve8051_3c_15_8(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_2                                    0x1815C0F8
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_2_reg_addr                            "0xB815C0F8"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_2_reg                                 0xB815C0F8
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_2_inst_addr                           "0x0038"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_3C_2_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_3C_2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_3C_2_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_3C_2_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_2_reserve8051_3c_23_16_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_2_reserve8051_3c_23_16_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_2_reserve8051_3c_23_16(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_2_get_reserve8051_3c_23_16(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_3                                    0x1815C0FC
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_3_reg_addr                            "0xB815C0FC"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_3_reg                                 0xB815C0FC
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_3_inst_addr                           "0x0039"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_3C_3_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_3C_3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_3C_3_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_3C_3_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_3_reserve8051_3c_31_24_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_3_reserve8051_3c_31_24_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_3_reserve8051_3c_31_24(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_3C_3_get_reserve8051_3c_31_24(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B3                                      0x1815C100
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B3_reg_addr                              "0xB815C100"
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B3_reg                                   0xB815C100
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B3_inst_addr                             "0x003A"
#define  set_RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B3_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B3_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B3_reg))
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B3_alu_mul_out_b3_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B3_alu_mul_out_b3_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B3_alu_mul_out_b3(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B3_get_alu_mul_out_b3(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B2                                      0x1815C104
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B2_reg_addr                              "0xB815C104"
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B2_reg                                   0xB815C104
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B2_inst_addr                             "0x003B"
#define  set_RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B2_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B2_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B2_reg))
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B2_alu_mul_out_b2_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B2_alu_mul_out_b2_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B2_alu_mul_out_b2(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B2_get_alu_mul_out_b2(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B1                                      0x1815C108
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B1_reg_addr                              "0xB815C108"
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B1_reg                                   0xB815C108
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B1_inst_addr                             "0x003C"
#define  set_RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B1_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B1_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B1_reg))
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B1_alu_mul_out_b1_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B1_alu_mul_out_b1_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B1_alu_mul_out_b1(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B1_get_alu_mul_out_b1(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B0                                      0x1815C10C
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B0_reg_addr                              "0xB815C10C"
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B0_reg                                   0xB815C10C
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B0_inst_addr                             "0x003D"
#define  set_RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B0_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B0_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B0_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B0_reg))
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B0_alu_mul_out_b0_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B0_alu_mul_out_b0_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B0_alu_mul_out_b0(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_MUL_OUT_B0_get_alu_mul_out_b0(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B3                                      0x1815C110
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B3_reg_addr                              "0xB815C110"
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B3_reg                                   0xB815C110
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B3_inst_addr                             "0x003E"
#define  set_RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B3_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B3_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B3_reg))
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B3_alu_add_out_b3_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B3_alu_add_out_b3_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B3_alu_add_out_b3(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B3_get_alu_add_out_b3(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B2                                      0x1815C114
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B2_reg_addr                              "0xB815C114"
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B2_reg                                   0xB815C114
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B2_inst_addr                             "0x003F"
#define  set_RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B2_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B2_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B2_reg))
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B2_alu_add_out_b2_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B2_alu_add_out_b2_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B2_alu_add_out_b2(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B2_get_alu_add_out_b2(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B1                                      0x1815C118
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B1_reg_addr                              "0xB815C118"
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B1_reg                                   0xB815C118
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B1_inst_addr                             "0x0040"
#define  set_RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B1_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B1_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B1_reg))
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B1_alu_add_out_b1_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B1_alu_add_out_b1_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B1_alu_add_out_b1(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B1_get_alu_add_out_b1(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B0                                      0x1815C11C
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B0_reg_addr                              "0xB815C11C"
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B0_reg                                   0xB815C11C
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B0_inst_addr                             "0x0041"
#define  set_RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B0_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B0_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B0_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B0_reg))
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B0_alu_add_out_b0_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B0_alu_add_out_b0_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B0_alu_add_out_b0(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_ADD_OUT_B0_get_alu_add_out_b0(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_DIV_OK                                          0x1815C120
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OK_reg_addr                                  "0xB815C120"
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OK_reg                                       0xB815C120
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OK_inst_addr                                 "0x0042"
#define  set_RTK_DTV_DEMOD_8051_ALU_DIV_OK_reg(data)                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_OK_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_DIV_OK_reg                                   (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_OK_reg))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OK_alu_div_ok_shift                          (0)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OK_alu_div_ok_mask                           (0x00000001)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OK_alu_div_ok(data)                          (0x00000001&(data))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OK_get_alu_div_ok(data)                      (0x00000001&(data))

#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B3                                      0x1815C124
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B3_reg_addr                              "0xB815C124"
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B3_reg                                   0xB815C124
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B3_inst_addr                             "0x0043"
#define  set_RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B3_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B3_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B3_reg))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B3_alu_div_out_b3_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B3_alu_div_out_b3_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B3_alu_div_out_b3(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B3_get_alu_div_out_b3(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B2                                      0x1815C128
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B2_reg_addr                              "0xB815C128"
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B2_reg                                   0xB815C128
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B2_inst_addr                             "0x0044"
#define  set_RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B2_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B2_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B2_reg))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B2_alu_div_out_b2_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B2_alu_div_out_b2_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B2_alu_div_out_b2(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B2_get_alu_div_out_b2(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B1                                      0x1815C12C
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B1_reg_addr                              "0xB815C12C"
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B1_reg                                   0xB815C12C
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B1_inst_addr                             "0x0045"
#define  set_RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B1_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B1_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B1_reg))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B1_alu_div_out_b1_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B1_alu_div_out_b1_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B1_alu_div_out_b1(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B1_get_alu_div_out_b1(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B0                                      0x1815C130
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B0_reg_addr                              "0xB815C130"
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B0_reg                                   0xB815C130
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B0_inst_addr                             "0x0046"
#define  set_RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B0_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B0_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B0_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B0_reg))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B0_alu_div_out_b0_shift                  (0)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B0_alu_div_out_b0_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B0_alu_div_out_b0(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_DIV_OUT_B0_get_alu_div_out_b0(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OK                                       0x1815C134
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OK_reg_addr                               "0xB815C134"
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OK_reg                                    0xB815C134
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OK_inst_addr                              "0x0047"
#define  set_RTK_DTV_DEMOD_8051_ALU_CORDIC_OK_reg(data)                          (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_CORDIC_OK_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_CORDIC_OK_reg                                (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_CORDIC_OK_reg))
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OK_alu_cordic_ok_shift                    (0)
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OK_alu_cordic_ok_mask                     (0x00000001)
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OK_alu_cordic_ok(data)                    (0x00000001&(data))
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OK_get_alu_cordic_ok(data)                (0x00000001&(data))

#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT1_B1                                  0x1815C138
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT1_B1_reg_addr                          "0xB815C138"
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT1_B1_reg                               0xB815C138
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT1_B1_inst_addr                         "0x0048"
#define  set_RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT1_B1_reg(data)                     (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT1_B1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT1_B1_reg                           (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT1_B1_reg))
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT1_B1_alu_cordic_out1_b1_shift          (0)
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT1_B1_alu_cordic_out1_b1_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT1_B1_alu_cordic_out1_b1(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT1_B1_get_alu_cordic_out1_b1(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT1_B0                                  0x1815C13C
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT1_B0_reg_addr                          "0xB815C13C"
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT1_B0_reg                               0xB815C13C
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT1_B0_inst_addr                         "0x0049"
#define  set_RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT1_B0_reg(data)                     (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT1_B0_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT1_B0_reg                           (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT1_B0_reg))
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT1_B0_alu_cordic_out1_b0_shift          (0)
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT1_B0_alu_cordic_out1_b0_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT1_B0_alu_cordic_out1_b0(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT1_B0_get_alu_cordic_out1_b0(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT2_B1                                  0x1815C140
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT2_B1_reg_addr                          "0xB815C140"
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT2_B1_reg                               0xB815C140
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT2_B1_inst_addr                         "0x004A"
#define  set_RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT2_B1_reg(data)                     (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT2_B1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT2_B1_reg                           (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT2_B1_reg))
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT2_B1_alu_cordic_out2_b1_shift          (0)
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT2_B1_alu_cordic_out2_b1_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT2_B1_alu_cordic_out2_b1(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT2_B1_get_alu_cordic_out2_b1(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT2_B0                                  0x1815C144
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT2_B0_reg_addr                          "0xB815C144"
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT2_B0_reg                               0xB815C144
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT2_B0_inst_addr                         "0x004B"
#define  set_RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT2_B0_reg(data)                     (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT2_B0_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT2_B0_reg                           (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT2_B0_reg))
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT2_B0_alu_cordic_out2_b0_shift          (0)
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT2_B0_alu_cordic_out2_b0_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT2_B0_alu_cordic_out2_b0(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_CORDIC_OUT2_B0_get_alu_cordic_out2_b0(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_LOG2_OK                                         0x1815C148
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_OK_reg_addr                                 "0xB815C148"
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_OK_reg                                      0xB815C148
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_OK_inst_addr                                "0x004C"
#define  set_RTK_DTV_DEMOD_8051_ALU_LOG2_OK_reg(data)                            (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_LOG2_OK_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_LOG2_OK_reg                                  (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_LOG2_OK_reg))
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_OK_alu_log2_ok_shift                        (0)
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_OK_alu_log2_ok_mask                         (0x00000001)
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_OK_alu_log2_ok(data)                        (0x00000001&(data))
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_OK_get_alu_log2_ok(data)                    (0x00000001&(data))

#define  RTK_DTV_DEMOD_8051_ALU_LOG2_OUT_A_3                                    0x1815C14C
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_OUT_A_3_reg_addr                            "0xB815C14C"
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_OUT_A_3_reg                                 0xB815C14C
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_OUT_A_3_inst_addr                           "0x004D"
#define  set_RTK_DTV_DEMOD_8051_ALU_LOG2_OUT_A_3_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_LOG2_OUT_A_3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_LOG2_OUT_A_3_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_LOG2_OUT_A_3_reg))
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_OUT_A_3_alu_log2_out_a_3_shift              (0)
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_OUT_A_3_alu_log2_out_a_3_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_OUT_A_3_alu_log2_out_a_3(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_OUT_A_3_get_alu_log2_out_a_3(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_ALU_LOG2_OUT_2_0                                    0x1815C150
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_OUT_2_0_reg_addr                            "0xB815C150"
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_OUT_2_0_reg                                 0xB815C150
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_OUT_2_0_inst_addr                           "0x004E"
#define  set_RTK_DTV_DEMOD_8051_ALU_LOG2_OUT_2_0_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_LOG2_OUT_2_0_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_ALU_LOG2_OUT_2_0_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_ALU_LOG2_OUT_2_0_reg))
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_OUT_2_0_alu_log2_out_2_0_shift              (5)
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_OUT_2_0_alu_log2_out_2_0_mask               (0x000000E0)
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_OUT_2_0_alu_log2_out_2_0(data)              (0x000000E0&((data)<<5))
#define  RTK_DTV_DEMOD_8051_ALU_LOG2_OUT_2_0_get_alu_log2_out_2_0(data)          ((0x000000E0&(data))>>5)

#define  RTK_DTV_DEMOD_8051_RESERVE8051_55                                      0x1815C154
#define  RTK_DTV_DEMOD_8051_RESERVE8051_55_reg_addr                              "0xB815C154"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_55_reg                                   0xB815C154
#define  RTK_DTV_DEMOD_8051_RESERVE8051_55_inst_addr                             "0x004F"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_55_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_55_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_55_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_55_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_55_reserve8051_55_7_0_shift              (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_55_reserve8051_55_7_0_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_55_reserve8051_55_7_0(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_55_get_reserve8051_55_7_0(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_55_1                                    0x1815C158
#define  RTK_DTV_DEMOD_8051_RESERVE8051_55_1_reg_addr                            "0xB815C158"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_55_1_reg                                 0xB815C158
#define  RTK_DTV_DEMOD_8051_RESERVE8051_55_1_inst_addr                           "0x0050"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_55_1_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_55_1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_55_1_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_55_1_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_55_1_reserve8051_55_15_8_shift           (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_55_1_reserve8051_55_15_8_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_55_1_reserve8051_55_15_8(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_55_1_get_reserve8051_55_15_8(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_55_2                                    0x1815C15C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_55_2_reg_addr                            "0xB815C15C"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_55_2_reg                                 0xB815C15C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_55_2_inst_addr                           "0x0051"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_55_2_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_55_2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_55_2_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_55_2_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_55_2_reserve8051_55_23_16_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_55_2_reserve8051_55_23_16_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_55_2_reserve8051_55_23_16(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_55_2_get_reserve8051_55_23_16(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_58                                      0x1815C160
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_reg_addr                              "0xB815C160"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_reg                                   0xB815C160
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_inst_addr                             "0x0052"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_58_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_58_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_58_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_58_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_reserve8051_58_7_0_shift              (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_reserve8051_58_7_0_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_reserve8051_58_7_0(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_get_reserve8051_58_7_0(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_1                                    0x1815C164
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_1_reg_addr                            "0xB815C164"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_1_reg                                 0xB815C164
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_1_inst_addr                           "0x0053"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_58_1_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_58_1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_58_1_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_58_1_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_1_reserve8051_58_15_8_shift           (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_1_reserve8051_58_15_8_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_1_reserve8051_58_15_8(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_1_get_reserve8051_58_15_8(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_2                                    0x1815C168
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_2_reg_addr                            "0xB815C168"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_2_reg                                 0xB815C168
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_2_inst_addr                           "0x0054"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_58_2_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_58_2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_58_2_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_58_2_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_2_reserve8051_58_23_16_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_2_reserve8051_58_23_16_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_2_reserve8051_58_23_16(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_2_get_reserve8051_58_23_16(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_3                                    0x1815C16C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_3_reg_addr                            "0xB815C16C"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_3_reg                                 0xB815C16C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_3_inst_addr                           "0x0055"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_58_3_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_58_3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_58_3_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_58_3_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_3_reserve8051_58_31_24_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_3_reserve8051_58_31_24_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_3_reserve8051_58_31_24(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_58_3_get_reserve8051_58_31_24(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C                                      0x1815C170
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_reg_addr                              "0xB815C170"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_reg                                   0xB815C170
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_inst_addr                             "0x0056"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_5C_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_5C_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_5C_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_5C_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_reserve8051_5c_7_0_shift              (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_reserve8051_5c_7_0_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_reserve8051_5c_7_0(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_get_reserve8051_5c_7_0(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_1                                    0x1815C174
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_1_reg_addr                            "0xB815C174"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_1_reg                                 0xB815C174
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_1_inst_addr                           "0x0057"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_5C_1_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_5C_1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_5C_1_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_5C_1_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_1_reserve8051_5c_15_8_shift           (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_1_reserve8051_5c_15_8_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_1_reserve8051_5c_15_8(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_1_get_reserve8051_5c_15_8(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_2                                    0x1815C178
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_2_reg_addr                            "0xB815C178"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_2_reg                                 0xB815C178
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_2_inst_addr                           "0x0058"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_5C_2_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_5C_2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_5C_2_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_5C_2_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_2_reserve8051_5c_23_16_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_2_reserve8051_5c_23_16_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_2_reserve8051_5c_23_16(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_2_get_reserve8051_5c_23_16(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_3                                    0x1815C17C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_3_reg_addr                            "0xB815C17C"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_3_reg                                 0xB815C17C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_3_inst_addr                           "0x0059"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_5C_3_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_5C_3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_5C_3_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_5C_3_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_3_reserve8051_5c_31_24_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_3_reserve8051_5c_31_24_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_3_reserve8051_5c_31_24(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_5C_3_get_reserve8051_5c_31_24(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_60                                      0x1815C180
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_reg_addr                              "0xB815C180"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_reg                                   0xB815C180
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_inst_addr                             "0x005A"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_60_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_60_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_60_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_60_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_reserve8051_60_7_0_shift              (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_reserve8051_60_7_0_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_reserve8051_60_7_0(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_get_reserve8051_60_7_0(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_1                                    0x1815C184
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_1_reg_addr                            "0xB815C184"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_1_reg                                 0xB815C184
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_1_inst_addr                           "0x005B"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_60_1_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_60_1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_60_1_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_60_1_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_1_reserve8051_60_15_8_shift           (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_1_reserve8051_60_15_8_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_1_reserve8051_60_15_8(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_1_get_reserve8051_60_15_8(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_2                                    0x1815C188
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_2_reg_addr                            "0xB815C188"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_2_reg                                 0xB815C188
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_2_inst_addr                           "0x005C"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_60_2_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_60_2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_60_2_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_60_2_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_2_reserve8051_60_23_16_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_2_reserve8051_60_23_16_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_2_reserve8051_60_23_16(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_2_get_reserve8051_60_23_16(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_3                                    0x1815C18C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_3_reg_addr                            "0xB815C18C"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_3_reg                                 0xB815C18C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_3_inst_addr                           "0x005D"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_60_3_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_60_3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_60_3_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_60_3_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_3_reserve8051_60_31_24_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_3_reserve8051_60_31_24_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_3_reserve8051_60_31_24(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_60_3_get_reserve8051_60_31_24(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_64                                      0x1815C190
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_reg_addr                              "0xB815C190"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_reg                                   0xB815C190
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_inst_addr                             "0x005E"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_64_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_64_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_64_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_64_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_reserve8051_64_7_0_shift              (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_reserve8051_64_7_0_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_reserve8051_64_7_0(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_get_reserve8051_64_7_0(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_1                                    0x1815C194
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_1_reg_addr                            "0xB815C194"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_1_reg                                 0xB815C194
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_1_inst_addr                           "0x005F"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_64_1_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_64_1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_64_1_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_64_1_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_1_reserve8051_64_15_8_shift           (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_1_reserve8051_64_15_8_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_1_reserve8051_64_15_8(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_1_get_reserve8051_64_15_8(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_2                                    0x1815C198
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_2_reg_addr                            "0xB815C198"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_2_reg                                 0xB815C198
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_2_inst_addr                           "0x0060"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_64_2_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_64_2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_64_2_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_64_2_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_2_reserve8051_64_23_16_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_2_reserve8051_64_23_16_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_2_reserve8051_64_23_16(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_2_get_reserve8051_64_23_16(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_3                                    0x1815C19C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_3_reg_addr                            "0xB815C19C"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_3_reg                                 0xB815C19C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_3_inst_addr                           "0x0061"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_64_3_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_64_3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_64_3_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_64_3_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_3_reserve8051_64_31_24_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_3_reserve8051_64_31_24_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_3_reserve8051_64_31_24(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_64_3_get_reserve8051_64_31_24(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_68                                      0x1815C1A0
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_reg_addr                              "0xB815C1A0"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_reg                                   0xB815C1A0
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_inst_addr                             "0x0062"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_68_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_68_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_68_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_68_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_reserve8051_68_7_0_shift              (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_reserve8051_68_7_0_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_reserve8051_68_7_0(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_get_reserve8051_68_7_0(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_1                                    0x1815C1A4
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_1_reg_addr                            "0xB815C1A4"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_1_reg                                 0xB815C1A4
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_1_inst_addr                           "0x0063"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_68_1_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_68_1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_68_1_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_68_1_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_1_reserve8051_68_15_8_shift           (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_1_reserve8051_68_15_8_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_1_reserve8051_68_15_8(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_1_get_reserve8051_68_15_8(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_2                                    0x1815C1A8
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_2_reg_addr                            "0xB815C1A8"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_2_reg                                 0xB815C1A8
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_2_inst_addr                           "0x0064"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_68_2_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_68_2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_68_2_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_68_2_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_2_reserve8051_68_23_16_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_2_reserve8051_68_23_16_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_2_reserve8051_68_23_16(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_2_get_reserve8051_68_23_16(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_3                                    0x1815C1AC
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_3_reg_addr                            "0xB815C1AC"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_3_reg                                 0xB815C1AC
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_3_inst_addr                           "0x0065"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_68_3_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_68_3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_68_3_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_68_3_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_3_reserve8051_68_31_24_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_3_reserve8051_68_31_24_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_3_reserve8051_68_31_24(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_68_3_get_reserve8051_68_31_24(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C                                      0x1815C1B0
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_reg_addr                              "0xB815C1B0"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_reg                                   0xB815C1B0
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_inst_addr                             "0x0066"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_6C_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_6C_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_6C_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_6C_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_reserve8051_6c_7_0_shift              (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_reserve8051_6c_7_0_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_reserve8051_6c_7_0(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_get_reserve8051_6c_7_0(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_1                                    0x1815C1B4
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_1_reg_addr                            "0xB815C1B4"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_1_reg                                 0xB815C1B4
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_1_inst_addr                           "0x0067"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_6C_1_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_6C_1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_6C_1_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_6C_1_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_1_reserve8051_6c_15_8_shift           (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_1_reserve8051_6c_15_8_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_1_reserve8051_6c_15_8(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_1_get_reserve8051_6c_15_8(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_2                                    0x1815C1B8
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_2_reg_addr                            "0xB815C1B8"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_2_reg                                 0xB815C1B8
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_2_inst_addr                           "0x0068"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_6C_2_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_6C_2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_6C_2_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_6C_2_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_2_reserve8051_6c_23_16_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_2_reserve8051_6c_23_16_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_2_reserve8051_6c_23_16(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_2_get_reserve8051_6c_23_16(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_3                                    0x1815C1BC
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_3_reg_addr                            "0xB815C1BC"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_3_reg                                 0xB815C1BC
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_3_inst_addr                           "0x0069"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_6C_3_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_6C_3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_6C_3_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_6C_3_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_3_reserve8051_6c_31_24_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_3_reserve8051_6c_31_24_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_3_reserve8051_6c_31_24(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_6C_3_get_reserve8051_6c_31_24(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_70                                      0x1815C1C0
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_reg_addr                              "0xB815C1C0"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_reg                                   0xB815C1C0
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_inst_addr                             "0x006A"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_70_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_70_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_70_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_70_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_reserve8051_70_7_0_shift              (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_reserve8051_70_7_0_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_reserve8051_70_7_0(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_get_reserve8051_70_7_0(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_1                                    0x1815C1C4
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_1_reg_addr                            "0xB815C1C4"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_1_reg                                 0xB815C1C4
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_1_inst_addr                           "0x006B"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_70_1_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_70_1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_70_1_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_70_1_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_1_reserve8051_70_15_8_shift           (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_1_reserve8051_70_15_8_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_1_reserve8051_70_15_8(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_1_get_reserve8051_70_15_8(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_2                                    0x1815C1C8
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_2_reg_addr                            "0xB815C1C8"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_2_reg                                 0xB815C1C8
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_2_inst_addr                           "0x006C"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_70_2_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_70_2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_70_2_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_70_2_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_2_reserve8051_70_23_16_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_2_reserve8051_70_23_16_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_2_reserve8051_70_23_16(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_2_get_reserve8051_70_23_16(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_3                                    0x1815C1CC
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_3_reg_addr                            "0xB815C1CC"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_3_reg                                 0xB815C1CC
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_3_inst_addr                           "0x006D"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_70_3_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_70_3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_70_3_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_70_3_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_3_reserve8051_70_31_24_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_3_reserve8051_70_31_24_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_3_reserve8051_70_31_24(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_70_3_get_reserve8051_70_31_24(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_74                                      0x1815C1D0
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_reg_addr                              "0xB815C1D0"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_reg                                   0xB815C1D0
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_inst_addr                             "0x006E"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_74_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_74_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_74_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_74_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_reserve8051_74_7_0_shift              (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_reserve8051_74_7_0_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_reserve8051_74_7_0(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_get_reserve8051_74_7_0(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_1                                    0x1815C1D4
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_1_reg_addr                            "0xB815C1D4"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_1_reg                                 0xB815C1D4
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_1_inst_addr                           "0x006F"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_74_1_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_74_1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_74_1_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_74_1_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_1_reserve8051_74_15_8_shift           (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_1_reserve8051_74_15_8_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_1_reserve8051_74_15_8(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_1_get_reserve8051_74_15_8(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_2                                    0x1815C1D8
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_2_reg_addr                            "0xB815C1D8"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_2_reg                                 0xB815C1D8
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_2_inst_addr                           "0x0070"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_74_2_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_74_2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_74_2_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_74_2_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_2_reserve8051_74_23_16_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_2_reserve8051_74_23_16_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_2_reserve8051_74_23_16(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_2_get_reserve8051_74_23_16(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_3                                    0x1815C1DC
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_3_reg_addr                            "0xB815C1DC"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_3_reg                                 0xB815C1DC
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_3_inst_addr                           "0x0071"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_74_3_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_74_3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_74_3_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_74_3_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_3_reserve8051_74_31_24_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_3_reserve8051_74_31_24_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_3_reserve8051_74_31_24(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_74_3_get_reserve8051_74_31_24(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_78                                      0x1815C1E0
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_reg_addr                              "0xB815C1E0"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_reg                                   0xB815C1E0
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_inst_addr                             "0x0072"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_78_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_78_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_78_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_78_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_reserve8051_78_7_0_shift              (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_reserve8051_78_7_0_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_reserve8051_78_7_0(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_get_reserve8051_78_7_0(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_1                                    0x1815C1E4
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_1_reg_addr                            "0xB815C1E4"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_1_reg                                 0xB815C1E4
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_1_inst_addr                           "0x0073"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_78_1_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_78_1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_78_1_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_78_1_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_1_reserve8051_78_15_8_shift           (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_1_reserve8051_78_15_8_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_1_reserve8051_78_15_8(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_1_get_reserve8051_78_15_8(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_2                                    0x1815C1E8
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_2_reg_addr                            "0xB815C1E8"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_2_reg                                 0xB815C1E8
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_2_inst_addr                           "0x0074"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_78_2_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_78_2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_78_2_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_78_2_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_2_reserve8051_78_23_16_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_2_reserve8051_78_23_16_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_2_reserve8051_78_23_16(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_2_get_reserve8051_78_23_16(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_3                                    0x1815C1EC
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_3_reg_addr                            "0xB815C1EC"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_3_reg                                 0xB815C1EC
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_3_inst_addr                           "0x0075"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_78_3_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_78_3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_78_3_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_78_3_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_3_reserve8051_78_31_24_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_3_reserve8051_78_31_24_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_3_reserve8051_78_31_24(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_78_3_get_reserve8051_78_31_24(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C                                      0x1815C1F0
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_reg_addr                              "0xB815C1F0"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_reg                                   0xB815C1F0
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_inst_addr                             "0x0076"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_7C_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_7C_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_7C_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_7C_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_reserve8051_7c_7_0_shift              (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_reserve8051_7c_7_0_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_reserve8051_7c_7_0(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_get_reserve8051_7c_7_0(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_1                                    0x1815C1F4
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_1_reg_addr                            "0xB815C1F4"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_1_reg                                 0xB815C1F4
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_1_inst_addr                           "0x0077"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_7C_1_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_7C_1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_7C_1_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_7C_1_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_1_reserve8051_7c_15_8_shift           (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_1_reserve8051_7c_15_8_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_1_reserve8051_7c_15_8(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_1_get_reserve8051_7c_15_8(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_2                                    0x1815C1F8
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_2_reg_addr                            "0xB815C1F8"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_2_reg                                 0xB815C1F8
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_2_inst_addr                           "0x0078"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_7C_2_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_7C_2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_7C_2_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_7C_2_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_2_reserve8051_7c_23_16_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_2_reserve8051_7c_23_16_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_2_reserve8051_7c_23_16(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_2_get_reserve8051_7c_23_16(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_3                                    0x1815C1FC
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_3_reg_addr                            "0xB815C1FC"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_3_reg                                 0xB815C1FC
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_3_inst_addr                           "0x0079"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_7C_3_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_7C_3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_7C_3_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_7C_3_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_3_reserve8051_7c_31_24_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_3_reserve8051_7c_31_24_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_3_reserve8051_7c_31_24(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_7C_3_get_reserve8051_7c_31_24(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_80                                      0x1815C200
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_reg_addr                              "0xB815C200"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_reg                                   0xB815C200
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_inst_addr                             "0x007A"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_80_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_80_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_80_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_80_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_reserve8051_80_7_0_shift              (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_reserve8051_80_7_0_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_reserve8051_80_7_0(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_get_reserve8051_80_7_0(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_1                                    0x1815C204
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_1_reg_addr                            "0xB815C204"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_1_reg                                 0xB815C204
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_1_inst_addr                           "0x007B"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_80_1_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_80_1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_80_1_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_80_1_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_1_reserve8051_80_15_8_shift           (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_1_reserve8051_80_15_8_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_1_reserve8051_80_15_8(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_1_get_reserve8051_80_15_8(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_2                                    0x1815C208
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_2_reg_addr                            "0xB815C208"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_2_reg                                 0xB815C208
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_2_inst_addr                           "0x007C"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_80_2_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_80_2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_80_2_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_80_2_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_2_reserve8051_80_23_16_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_2_reserve8051_80_23_16_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_2_reserve8051_80_23_16(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_2_get_reserve8051_80_23_16(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_3                                    0x1815C20C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_3_reg_addr                            "0xB815C20C"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_3_reg                                 0xB815C20C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_3_inst_addr                           "0x007D"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_80_3_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_80_3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_80_3_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_80_3_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_3_reserve8051_80_31_24_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_3_reserve8051_80_31_24_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_3_reserve8051_80_31_24(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_80_3_get_reserve8051_80_31_24(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_84                                      0x1815C210
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_reg_addr                              "0xB815C210"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_reg                                   0xB815C210
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_inst_addr                             "0x007E"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_84_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_84_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_84_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_84_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_reserve8051_84_7_0_shift              (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_reserve8051_84_7_0_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_reserve8051_84_7_0(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_get_reserve8051_84_7_0(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_1                                    0x1815C214
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_1_reg_addr                            "0xB815C214"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_1_reg                                 0xB815C214
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_1_inst_addr                           "0x007F"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_84_1_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_84_1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_84_1_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_84_1_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_1_reserve8051_84_15_8_shift           (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_1_reserve8051_84_15_8_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_1_reserve8051_84_15_8(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_1_get_reserve8051_84_15_8(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_2                                    0x1815C218
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_2_reg_addr                            "0xB815C218"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_2_reg                                 0xB815C218
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_2_inst_addr                           "0x0080"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_84_2_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_84_2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_84_2_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_84_2_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_2_reserve8051_84_23_16_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_2_reserve8051_84_23_16_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_2_reserve8051_84_23_16(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_2_get_reserve8051_84_23_16(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_3                                    0x1815C21C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_3_reg_addr                            "0xB815C21C"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_3_reg                                 0xB815C21C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_3_inst_addr                           "0x0081"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_84_3_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_84_3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_84_3_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_84_3_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_3_reserve8051_84_31_24_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_3_reserve8051_84_31_24_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_3_reserve8051_84_31_24(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_84_3_get_reserve8051_84_31_24(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_88                                      0x1815C220
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_reg_addr                              "0xB815C220"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_reg                                   0xB815C220
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_inst_addr                             "0x0082"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_88_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_88_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_88_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_88_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_reserve8051_88_7_0_shift              (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_reserve8051_88_7_0_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_reserve8051_88_7_0(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_get_reserve8051_88_7_0(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_1                                    0x1815C224
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_1_reg_addr                            "0xB815C224"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_1_reg                                 0xB815C224
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_1_inst_addr                           "0x0083"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_88_1_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_88_1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_88_1_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_88_1_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_1_reserve8051_88_15_8_shift           (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_1_reserve8051_88_15_8_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_1_reserve8051_88_15_8(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_1_get_reserve8051_88_15_8(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_2                                    0x1815C228
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_2_reg_addr                            "0xB815C228"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_2_reg                                 0xB815C228
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_2_inst_addr                           "0x0084"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_88_2_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_88_2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_88_2_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_88_2_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_2_reserve8051_88_23_16_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_2_reserve8051_88_23_16_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_2_reserve8051_88_23_16(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_2_get_reserve8051_88_23_16(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_3                                    0x1815C22C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_3_reg_addr                            "0xB815C22C"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_3_reg                                 0xB815C22C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_3_inst_addr                           "0x0085"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_88_3_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_88_3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_88_3_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_88_3_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_3_reserve8051_88_31_24_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_3_reserve8051_88_31_24_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_3_reserve8051_88_31_24(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_88_3_get_reserve8051_88_31_24(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C                                      0x1815C230
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_reg_addr                              "0xB815C230"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_reg                                   0xB815C230
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_inst_addr                             "0x0086"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_8C_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_8C_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_8C_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_8C_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_reserve8051_8c_7_0_shift              (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_reserve8051_8c_7_0_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_reserve8051_8c_7_0(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_get_reserve8051_8c_7_0(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_1                                    0x1815C234
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_1_reg_addr                            "0xB815C234"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_1_reg                                 0xB815C234
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_1_inst_addr                           "0x0087"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_8C_1_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_8C_1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_8C_1_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_8C_1_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_1_reserve8051_8c_15_8_shift           (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_1_reserve8051_8c_15_8_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_1_reserve8051_8c_15_8(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_1_get_reserve8051_8c_15_8(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_2                                    0x1815C238
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_2_reg_addr                            "0xB815C238"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_2_reg                                 0xB815C238
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_2_inst_addr                           "0x0088"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_8C_2_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_8C_2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_8C_2_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_8C_2_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_2_reserve8051_8c_23_16_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_2_reserve8051_8c_23_16_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_2_reserve8051_8c_23_16(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_2_get_reserve8051_8c_23_16(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_3                                    0x1815C23C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_3_reg_addr                            "0xB815C23C"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_3_reg                                 0xB815C23C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_3_inst_addr                           "0x0089"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_8C_3_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_8C_3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_8C_3_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_8C_3_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_3_reserve8051_8c_31_24_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_3_reserve8051_8c_31_24_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_3_reserve8051_8c_31_24(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_8C_3_get_reserve8051_8c_31_24(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_90                                      0x1815C240
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_reg_addr                              "0xB815C240"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_reg                                   0xB815C240
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_inst_addr                             "0x008A"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_90_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_90_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_90_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_90_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_reserve8051_90_7_0_shift              (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_reserve8051_90_7_0_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_reserve8051_90_7_0(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_get_reserve8051_90_7_0(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_1                                    0x1815C244
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_1_reg_addr                            "0xB815C244"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_1_reg                                 0xB815C244
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_1_inst_addr                           "0x008B"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_90_1_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_90_1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_90_1_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_90_1_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_1_reserve8051_90_15_8_shift           (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_1_reserve8051_90_15_8_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_1_reserve8051_90_15_8(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_1_get_reserve8051_90_15_8(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_2                                    0x1815C248
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_2_reg_addr                            "0xB815C248"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_2_reg                                 0xB815C248
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_2_inst_addr                           "0x008C"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_90_2_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_90_2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_90_2_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_90_2_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_2_reserve8051_90_23_16_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_2_reserve8051_90_23_16_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_2_reserve8051_90_23_16(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_2_get_reserve8051_90_23_16(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_3                                    0x1815C24C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_3_reg_addr                            "0xB815C24C"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_3_reg                                 0xB815C24C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_3_inst_addr                           "0x008D"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_90_3_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_90_3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_90_3_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_90_3_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_3_reserve8051_90_31_24_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_3_reserve8051_90_31_24_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_3_reserve8051_90_31_24(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_90_3_get_reserve8051_90_31_24(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_94                                      0x1815C250
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_reg_addr                              "0xB815C250"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_reg                                   0xB815C250
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_inst_addr                             "0x008E"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_94_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_94_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_94_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_94_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_reserve8051_94_7_0_shift              (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_reserve8051_94_7_0_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_reserve8051_94_7_0(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_get_reserve8051_94_7_0(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_1                                    0x1815C254
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_1_reg_addr                            "0xB815C254"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_1_reg                                 0xB815C254
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_1_inst_addr                           "0x008F"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_94_1_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_94_1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_94_1_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_94_1_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_1_reserve8051_94_15_8_shift           (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_1_reserve8051_94_15_8_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_1_reserve8051_94_15_8(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_1_get_reserve8051_94_15_8(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_2                                    0x1815C258
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_2_reg_addr                            "0xB815C258"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_2_reg                                 0xB815C258
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_2_inst_addr                           "0x0090"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_94_2_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_94_2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_94_2_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_94_2_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_2_reserve8051_94_23_16_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_2_reserve8051_94_23_16_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_2_reserve8051_94_23_16(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_2_get_reserve8051_94_23_16(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_3                                    0x1815C25C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_3_reg_addr                            "0xB815C25C"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_3_reg                                 0xB815C25C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_3_inst_addr                           "0x0091"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_94_3_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_94_3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_94_3_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_94_3_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_3_reserve8051_94_31_24_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_3_reserve8051_94_31_24_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_3_reserve8051_94_31_24(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_94_3_get_reserve8051_94_31_24(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_98                                      0x1815C260
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_reg_addr                              "0xB815C260"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_reg                                   0xB815C260
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_inst_addr                             "0x0092"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_98_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_98_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_98_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_98_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_reserve8051_98_7_0_shift              (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_reserve8051_98_7_0_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_reserve8051_98_7_0(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_get_reserve8051_98_7_0(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_1                                    0x1815C264
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_1_reg_addr                            "0xB815C264"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_1_reg                                 0xB815C264
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_1_inst_addr                           "0x0093"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_98_1_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_98_1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_98_1_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_98_1_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_1_reserve8051_98_15_8_shift           (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_1_reserve8051_98_15_8_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_1_reserve8051_98_15_8(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_1_get_reserve8051_98_15_8(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_2                                    0x1815C268
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_2_reg_addr                            "0xB815C268"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_2_reg                                 0xB815C268
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_2_inst_addr                           "0x0094"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_98_2_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_98_2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_98_2_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_98_2_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_2_reserve8051_98_23_16_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_2_reserve8051_98_23_16_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_2_reserve8051_98_23_16(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_2_get_reserve8051_98_23_16(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_3                                    0x1815C26C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_3_reg_addr                            "0xB815C26C"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_3_reg                                 0xB815C26C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_3_inst_addr                           "0x0095"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_98_3_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_98_3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_98_3_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_98_3_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_3_reserve8051_98_31_24_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_3_reserve8051_98_31_24_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_3_reserve8051_98_31_24(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_98_3_get_reserve8051_98_31_24(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C                                      0x1815C270
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_reg_addr                              "0xB815C270"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_reg                                   0xB815C270
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_inst_addr                             "0x0096"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_9C_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_9C_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_9C_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_9C_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_reserve8051_9c_7_0_shift              (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_reserve8051_9c_7_0_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_reserve8051_9c_7_0(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_get_reserve8051_9c_7_0(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_1                                    0x1815C274
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_1_reg_addr                            "0xB815C274"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_1_reg                                 0xB815C274
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_1_inst_addr                           "0x0097"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_9C_1_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_9C_1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_9C_1_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_9C_1_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_1_reserve8051_9c_15_8_shift           (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_1_reserve8051_9c_15_8_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_1_reserve8051_9c_15_8(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_1_get_reserve8051_9c_15_8(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_2                                    0x1815C278
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_2_reg_addr                            "0xB815C278"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_2_reg                                 0xB815C278
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_2_inst_addr                           "0x0098"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_9C_2_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_9C_2_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_9C_2_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_9C_2_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_2_reserve8051_9c_23_16_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_2_reserve8051_9c_23_16_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_2_reserve8051_9c_23_16(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_2_get_reserve8051_9c_23_16(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_3                                    0x1815C27C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_3_reg_addr                            "0xB815C27C"
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_3_reg                                 0xB815C27C
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_3_inst_addr                           "0x0099"
#define  set_RTK_DTV_DEMOD_8051_RESERVE8051_9C_3_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_9C_3_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESERVE8051_9C_3_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESERVE8051_9C_3_reg))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_3_reserve8051_9c_31_24_shift          (0)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_3_reserve8051_9c_31_24_mask           (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_3_reserve8051_9c_31_24(data)          (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESERVE8051_9C_3_get_reserve8051_9c_31_24(data)      (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0                                     0x1815C280
#define  RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_reg_addr                             "0xB815C280"
#define  RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_reg                                  0xB815C280
#define  RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_inst_addr                            "0x009A"
#define  set_RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_reg(data)                        (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_reg                              (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_reg))
#define  RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_drf_bist_mode_shift                  (7)
#define  RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_drf_bist_done_1_shift                (3)
#define  RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_drf_bist_fail_1_shift                (2)
#define  RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_drf_bist_done_0_shift                (1)
#define  RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_drf_bist_fail_0_shift                (0)
#define  RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_drf_bist_mode_mask                   (0x00000080)
#define  RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_drf_bist_done_1_mask                 (0x00000008)
#define  RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_drf_bist_fail_1_mask                 (0x00000004)
#define  RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_drf_bist_done_0_mask                 (0x00000002)
#define  RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_drf_bist_fail_0_mask                 (0x00000001)
#define  RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_drf_bist_mode(data)                  (0x00000080&((data)<<7))
#define  RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_drf_bist_done_1(data)                (0x00000008&((data)<<3))
#define  RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_drf_bist_fail_1(data)                (0x00000004&((data)<<2))
#define  RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_drf_bist_done_0(data)                (0x00000002&((data)<<1))
#define  RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_drf_bist_fail_0(data)                (0x00000001&(data))
#define  RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_get_drf_bist_mode(data)              ((0x00000080&(data))>>7)
#define  RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_get_drf_bist_done_1(data)            ((0x00000008&(data))>>3)
#define  RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_get_drf_bist_fail_1(data)            ((0x00000004&(data))>>2)
#define  RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_get_drf_bist_done_0(data)            ((0x00000002&(data))>>1)
#define  RTK_DTV_DEMOD_8051_DRF_BIST_FAIL_0_get_drf_bist_fail_0(data)            (0x00000001&(data))

#define  RTK_DTV_DEMOD_8051_DVS                                                 0x1815C284
#define  RTK_DTV_DEMOD_8051_DVS_reg_addr                                         "0xB815C284"
#define  RTK_DTV_DEMOD_8051_DVS_reg                                              0xB815C284
#define  RTK_DTV_DEMOD_8051_DVS_inst_addr                                        "0x009B"
#define  set_RTK_DTV_DEMOD_8051_DVS_reg(data)                                    (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_DVS_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_DVS_reg                                          (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_DVS_reg))
#define  RTK_DTV_DEMOD_8051_DVS_drf_start_pause_shift                            (7)
#define  RTK_DTV_DEMOD_8051_DVS_te_shift                                         (5)
#define  RTK_DTV_DEMOD_8051_DVS_dvse_shift                                       (4)
#define  RTK_DTV_DEMOD_8051_DVS_dvs_shift                                        (0)
#define  RTK_DTV_DEMOD_8051_DVS_drf_start_pause_mask                             (0x00000080)
#define  RTK_DTV_DEMOD_8051_DVS_te_mask                                          (0x00000020)
#define  RTK_DTV_DEMOD_8051_DVS_dvse_mask                                        (0x00000010)
#define  RTK_DTV_DEMOD_8051_DVS_dvs_mask                                         (0x0000000F)
#define  RTK_DTV_DEMOD_8051_DVS_drf_start_pause(data)                            (0x00000080&((data)<<7))
#define  RTK_DTV_DEMOD_8051_DVS_te(data)                                         (0x00000020&((data)<<5))
#define  RTK_DTV_DEMOD_8051_DVS_dvse(data)                                       (0x00000010&((data)<<4))
#define  RTK_DTV_DEMOD_8051_DVS_dvs(data)                                        (0x0000000F&(data))
#define  RTK_DTV_DEMOD_8051_DVS_get_drf_start_pause(data)                        ((0x00000080&(data))>>7)
#define  RTK_DTV_DEMOD_8051_DVS_get_te(data)                                     ((0x00000020&(data))>>5)
#define  RTK_DTV_DEMOD_8051_DVS_get_dvse(data)                                   ((0x00000010&(data))>>4)
#define  RTK_DTV_DEMOD_8051_DVS_get_dvs(data)                                    (0x0000000F&(data))

#define  RTK_DTV_DEMOD_8051_RESUME_WAIT_TH                                      0x1815C288
#define  RTK_DTV_DEMOD_8051_RESUME_WAIT_TH_reg_addr                              "0xB815C288"
#define  RTK_DTV_DEMOD_8051_RESUME_WAIT_TH_reg                                   0xB815C288
#define  RTK_DTV_DEMOD_8051_RESUME_WAIT_TH_inst_addr                             "0x009C"
#define  set_RTK_DTV_DEMOD_8051_RESUME_WAIT_TH_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESUME_WAIT_TH_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESUME_WAIT_TH_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESUME_WAIT_TH_reg))
#define  RTK_DTV_DEMOD_8051_RESUME_WAIT_TH_resume_wait_th_7_0_shift              (0)
#define  RTK_DTV_DEMOD_8051_RESUME_WAIT_TH_resume_wait_th_7_0_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_8051_RESUME_WAIT_TH_resume_wait_th_7_0(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_8051_RESUME_WAIT_TH_get_resume_wait_th_7_0(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_8051_RESUME_WAIT_TH_1                                    0x1815C28C
#define  RTK_DTV_DEMOD_8051_RESUME_WAIT_TH_1_reg_addr                            "0xB815C28C"
#define  RTK_DTV_DEMOD_8051_RESUME_WAIT_TH_1_reg                                 0xB815C28C
#define  RTK_DTV_DEMOD_8051_RESUME_WAIT_TH_1_inst_addr                           "0x009D"
#define  set_RTK_DTV_DEMOD_8051_RESUME_WAIT_TH_1_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESUME_WAIT_TH_1_reg)=data)
#define  get_RTK_DTV_DEMOD_8051_RESUME_WAIT_TH_1_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_8051_RESUME_WAIT_TH_1_reg))
#define  RTK_DTV_DEMOD_8051_RESUME_WAIT_TH_1_resume_wait_th_11_8_shift           (0)
#define  RTK_DTV_DEMOD_8051_RESUME_WAIT_TH_1_resume_wait_th_11_8_mask            (0x0000000F)
#define  RTK_DTV_DEMOD_8051_RESUME_WAIT_TH_1_resume_wait_th_11_8(data)           (0x0000000F&(data))
#define  RTK_DTV_DEMOD_8051_RESUME_WAIT_TH_1_get_resume_wait_th_11_8(data)       (0x0000000F&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======RTK_DTV_DEMOD_8051 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  bootcode_en:1;
        RBus_UInt32  i2ct_en_ctrl:1;
        RBus_UInt32  dw51_rst_in_n:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  gp_int0_n:1;
    };
}rtk_dtv_demod_8051_gp_int0_n_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rom_bist_en:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  rom_bist_finish:1;
        RBus_UInt32  rom_bist_pass:1;
        RBus_UInt32  fw_bist_finish:1;
        RBus_UInt32  fw_bist_pass:1;
    };
}rtk_dtv_demod_8051_fw_bist_pass_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_03:8;
    };
}rtk_dtv_demod_8051_reserve8051_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ckg_count_reg:8;
    };
}rtk_dtv_demod_8051_ckg_count_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  f005:1;
    };
}rtk_dtv_demod_8051_f005_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  wdog_en:1;
        RBus_UInt32  wdog_count_reg:4;
        RBus_UInt32  wdog_clear:1;
        RBus_UInt32  wdog_tout_ind:1;
        RBus_UInt32  wdog_rst_n:1;
    };
}rtk_dtv_demod_8051_wdog_rst_n_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  fw_length:8;
    };
}rtk_dtv_demod_8051_fw_length_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  la_addr:8;
    };
}rtk_dtv_demod_8051_la_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  timeout_thre:8;
    };
}rtk_dtv_demod_8051_timeout_thre_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  bist_mode:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  bist_done1:1;
        RBus_UInt32  bist_fail1:1;
        RBus_UInt32  bist_done0:1;
        RBus_UInt32  bist_fail0:1;
    };
}rtk_dtv_demod_8051_bist_fail0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  alu_atr_en:1;
        RBus_UInt32  alu_log2_en:1;
        RBus_UInt32  alu_cordic_en:1;
        RBus_UInt32  alu_div_en:1;
        RBus_UInt32  alu_sub_sel:1;
        RBus_UInt32  alu_mac_op_en:1;
        RBus_UInt32  alu_mac_en:1;
    };
}rtk_dtv_demod_8051_alu_mac_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_mul_in1_b1:8;
    };
}rtk_dtv_demod_8051_alu_mul_in1_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_mul_in1_b0:8;
    };
}rtk_dtv_demod_8051_alu_mul_in1_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_mul_in2_b1:8;
    };
}rtk_dtv_demod_8051_alu_mul_in2_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_mul_in2_b0:8;
    };
}rtk_dtv_demod_8051_alu_mul_in2_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_add_in1_b3:8;
    };
}rtk_dtv_demod_8051_alu_add_in1_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_add_in1_b2:8;
    };
}rtk_dtv_demod_8051_alu_add_in1_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_add_in1_b1:8;
    };
}rtk_dtv_demod_8051_alu_add_in1_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_add_in1_b0:8;
    };
}rtk_dtv_demod_8051_alu_add_in1_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_add_in2_b3:8;
    };
}rtk_dtv_demod_8051_alu_add_in2_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_add_in2_b2:8;
    };
}rtk_dtv_demod_8051_alu_add_in2_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_add_in2_b1:8;
    };
}rtk_dtv_demod_8051_alu_add_in2_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_add_in2_b0:8;
    };
}rtk_dtv_demod_8051_alu_add_in2_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_div_in1_b3:8;
    };
}rtk_dtv_demod_8051_alu_div_in1_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_div_in1_b2:8;
    };
}rtk_dtv_demod_8051_alu_div_in1_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_div_in1_b1:8;
    };
}rtk_dtv_demod_8051_alu_div_in1_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_div_in1_b0:8;
    };
}rtk_dtv_demod_8051_alu_div_in1_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_div_in2_b3:8;
    };
}rtk_dtv_demod_8051_alu_div_in2_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_div_in2_b2:8;
    };
}rtk_dtv_demod_8051_alu_div_in2_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_div_in2_b1:8;
    };
}rtk_dtv_demod_8051_alu_div_in2_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_div_in2_b0:8;
    };
}rtk_dtv_demod_8051_alu_div_in2_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_cordic_phase_b1:8;
    };
}rtk_dtv_demod_8051_alu_cordic_phase_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_cordic_phase_b0:8;
    };
}rtk_dtv_demod_8051_alu_cordic_phase_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_log2_in_b2:8;
    };
}rtk_dtv_demod_8051_alu_log2_in_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_log2_in_b1:8;
    };
}rtk_dtv_demod_8051_alu_log2_in_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_log2_in_b0:8;
    };
}rtk_dtv_demod_8051_alu_log2_in_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_atr_in_b2:8;
    };
}rtk_dtv_demod_8051_alu_atr_in_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_atr_in_b1:8;
    };
}rtk_dtv_demod_8051_alu_atr_in_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_atr_in_b0:8;
    };
}rtk_dtv_demod_8051_alu_atr_in_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  alu_atr_alpha1:6;
    };
}rtk_dtv_demod_8051_alu_atr_alpha1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  alu_atr_alpha2:6;
    };
}rtk_dtv_demod_8051_alu_atr_alpha2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_2f:8;
    };
}rtk_dtv_demod_8051_reserve8051_2f_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_30_7_0:8;
    };
}rtk_dtv_demod_8051_reserve8051_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_30_15_8:8;
    };
}rtk_dtv_demod_8051_reserve8051_30_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_30_23_16:8;
    };
}rtk_dtv_demod_8051_reserve8051_30_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_30_31_24:8;
    };
}rtk_dtv_demod_8051_reserve8051_30_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_34_7_0:8;
    };
}rtk_dtv_demod_8051_reserve8051_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_34_15_8:8;
    };
}rtk_dtv_demod_8051_reserve8051_34_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_34_23_16:8;
    };
}rtk_dtv_demod_8051_reserve8051_34_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_34_31_24:8;
    };
}rtk_dtv_demod_8051_reserve8051_34_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_38_7_0:8;
    };
}rtk_dtv_demod_8051_reserve8051_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_38_15_8:8;
    };
}rtk_dtv_demod_8051_reserve8051_38_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_38_23_16:8;
    };
}rtk_dtv_demod_8051_reserve8051_38_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_38_31_24:8;
    };
}rtk_dtv_demod_8051_reserve8051_38_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_3c_7_0:8;
    };
}rtk_dtv_demod_8051_reserve8051_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_3c_15_8:8;
    };
}rtk_dtv_demod_8051_reserve8051_3c_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_3c_23_16:8;
    };
}rtk_dtv_demod_8051_reserve8051_3c_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_3c_31_24:8;
    };
}rtk_dtv_demod_8051_reserve8051_3c_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_mul_out_b3:8;
    };
}rtk_dtv_demod_8051_alu_mul_out_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_mul_out_b2:8;
    };
}rtk_dtv_demod_8051_alu_mul_out_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_mul_out_b1:8;
    };
}rtk_dtv_demod_8051_alu_mul_out_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_mul_out_b0:8;
    };
}rtk_dtv_demod_8051_alu_mul_out_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_add_out_b3:8;
    };
}rtk_dtv_demod_8051_alu_add_out_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_add_out_b2:8;
    };
}rtk_dtv_demod_8051_alu_add_out_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_add_out_b1:8;
    };
}rtk_dtv_demod_8051_alu_add_out_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_add_out_b0:8;
    };
}rtk_dtv_demod_8051_alu_add_out_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  alu_div_ok:1;
    };
}rtk_dtv_demod_8051_alu_div_ok_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_div_out_b3:8;
    };
}rtk_dtv_demod_8051_alu_div_out_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_div_out_b2:8;
    };
}rtk_dtv_demod_8051_alu_div_out_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_div_out_b1:8;
    };
}rtk_dtv_demod_8051_alu_div_out_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_div_out_b0:8;
    };
}rtk_dtv_demod_8051_alu_div_out_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  alu_cordic_ok:1;
    };
}rtk_dtv_demod_8051_alu_cordic_ok_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_cordic_out1_b1:8;
    };
}rtk_dtv_demod_8051_alu_cordic_out1_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_cordic_out1_b0:8;
    };
}rtk_dtv_demod_8051_alu_cordic_out1_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_cordic_out2_b1:8;
    };
}rtk_dtv_demod_8051_alu_cordic_out2_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_cordic_out2_b0:8;
    };
}rtk_dtv_demod_8051_alu_cordic_out2_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  alu_log2_ok:1;
    };
}rtk_dtv_demod_8051_alu_log2_ok_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_log2_out_a_3:8;
    };
}rtk_dtv_demod_8051_alu_log2_out_a_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  alu_log2_out_2_0:3;
        RBus_UInt32  res2:5;
    };
}rtk_dtv_demod_8051_alu_log2_out_2_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_55_7_0:8;
    };
}rtk_dtv_demod_8051_reserve8051_55_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_55_15_8:8;
    };
}rtk_dtv_demod_8051_reserve8051_55_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_55_23_16:8;
    };
}rtk_dtv_demod_8051_reserve8051_55_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_58_7_0:8;
    };
}rtk_dtv_demod_8051_reserve8051_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_58_15_8:8;
    };
}rtk_dtv_demod_8051_reserve8051_58_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_58_23_16:8;
    };
}rtk_dtv_demod_8051_reserve8051_58_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_58_31_24:8;
    };
}rtk_dtv_demod_8051_reserve8051_58_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_5c_7_0:8;
    };
}rtk_dtv_demod_8051_reserve8051_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_5c_15_8:8;
    };
}rtk_dtv_demod_8051_reserve8051_5c_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_5c_23_16:8;
    };
}rtk_dtv_demod_8051_reserve8051_5c_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_5c_31_24:8;
    };
}rtk_dtv_demod_8051_reserve8051_5c_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_60_7_0:8;
    };
}rtk_dtv_demod_8051_reserve8051_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_60_15_8:8;
    };
}rtk_dtv_demod_8051_reserve8051_60_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_60_23_16:8;
    };
}rtk_dtv_demod_8051_reserve8051_60_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_60_31_24:8;
    };
}rtk_dtv_demod_8051_reserve8051_60_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_64_7_0:8;
    };
}rtk_dtv_demod_8051_reserve8051_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_64_15_8:8;
    };
}rtk_dtv_demod_8051_reserve8051_64_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_64_23_16:8;
    };
}rtk_dtv_demod_8051_reserve8051_64_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_64_31_24:8;
    };
}rtk_dtv_demod_8051_reserve8051_64_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_68_7_0:8;
    };
}rtk_dtv_demod_8051_reserve8051_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_68_15_8:8;
    };
}rtk_dtv_demod_8051_reserve8051_68_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_68_23_16:8;
    };
}rtk_dtv_demod_8051_reserve8051_68_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_68_31_24:8;
    };
}rtk_dtv_demod_8051_reserve8051_68_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_6c_7_0:8;
    };
}rtk_dtv_demod_8051_reserve8051_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_6c_15_8:8;
    };
}rtk_dtv_demod_8051_reserve8051_6c_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_6c_23_16:8;
    };
}rtk_dtv_demod_8051_reserve8051_6c_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_6c_31_24:8;
    };
}rtk_dtv_demod_8051_reserve8051_6c_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_70_7_0:8;
    };
}rtk_dtv_demod_8051_reserve8051_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_70_15_8:8;
    };
}rtk_dtv_demod_8051_reserve8051_70_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_70_23_16:8;
    };
}rtk_dtv_demod_8051_reserve8051_70_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_70_31_24:8;
    };
}rtk_dtv_demod_8051_reserve8051_70_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_74_7_0:8;
    };
}rtk_dtv_demod_8051_reserve8051_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_74_15_8:8;
    };
}rtk_dtv_demod_8051_reserve8051_74_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_74_23_16:8;
    };
}rtk_dtv_demod_8051_reserve8051_74_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_74_31_24:8;
    };
}rtk_dtv_demod_8051_reserve8051_74_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_78_7_0:8;
    };
}rtk_dtv_demod_8051_reserve8051_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_78_15_8:8;
    };
}rtk_dtv_demod_8051_reserve8051_78_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_78_23_16:8;
    };
}rtk_dtv_demod_8051_reserve8051_78_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_78_31_24:8;
    };
}rtk_dtv_demod_8051_reserve8051_78_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_7c_7_0:8;
    };
}rtk_dtv_demod_8051_reserve8051_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_7c_15_8:8;
    };
}rtk_dtv_demod_8051_reserve8051_7c_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_7c_23_16:8;
    };
}rtk_dtv_demod_8051_reserve8051_7c_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_7c_31_24:8;
    };
}rtk_dtv_demod_8051_reserve8051_7c_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_80_7_0:8;
    };
}rtk_dtv_demod_8051_reserve8051_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_80_15_8:8;
    };
}rtk_dtv_demod_8051_reserve8051_80_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_80_23_16:8;
    };
}rtk_dtv_demod_8051_reserve8051_80_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_80_31_24:8;
    };
}rtk_dtv_demod_8051_reserve8051_80_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_84_7_0:8;
    };
}rtk_dtv_demod_8051_reserve8051_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_84_15_8:8;
    };
}rtk_dtv_demod_8051_reserve8051_84_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_84_23_16:8;
    };
}rtk_dtv_demod_8051_reserve8051_84_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_84_31_24:8;
    };
}rtk_dtv_demod_8051_reserve8051_84_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_88_7_0:8;
    };
}rtk_dtv_demod_8051_reserve8051_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_88_15_8:8;
    };
}rtk_dtv_demod_8051_reserve8051_88_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_88_23_16:8;
    };
}rtk_dtv_demod_8051_reserve8051_88_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_88_31_24:8;
    };
}rtk_dtv_demod_8051_reserve8051_88_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_8c_7_0:8;
    };
}rtk_dtv_demod_8051_reserve8051_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_8c_15_8:8;
    };
}rtk_dtv_demod_8051_reserve8051_8c_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_8c_23_16:8;
    };
}rtk_dtv_demod_8051_reserve8051_8c_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_8c_31_24:8;
    };
}rtk_dtv_demod_8051_reserve8051_8c_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_90_7_0:8;
    };
}rtk_dtv_demod_8051_reserve8051_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_90_15_8:8;
    };
}rtk_dtv_demod_8051_reserve8051_90_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_90_23_16:8;
    };
}rtk_dtv_demod_8051_reserve8051_90_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_90_31_24:8;
    };
}rtk_dtv_demod_8051_reserve8051_90_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_94_7_0:8;
    };
}rtk_dtv_demod_8051_reserve8051_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_94_15_8:8;
    };
}rtk_dtv_demod_8051_reserve8051_94_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_94_23_16:8;
    };
}rtk_dtv_demod_8051_reserve8051_94_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_94_31_24:8;
    };
}rtk_dtv_demod_8051_reserve8051_94_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_98_7_0:8;
    };
}rtk_dtv_demod_8051_reserve8051_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_98_15_8:8;
    };
}rtk_dtv_demod_8051_reserve8051_98_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_98_23_16:8;
    };
}rtk_dtv_demod_8051_reserve8051_98_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_98_31_24:8;
    };
}rtk_dtv_demod_8051_reserve8051_98_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_9c_7_0:8;
    };
}rtk_dtv_demod_8051_reserve8051_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_9c_15_8:8;
    };
}rtk_dtv_demod_8051_reserve8051_9c_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_9c_23_16:8;
    };
}rtk_dtv_demod_8051_reserve8051_9c_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reserve8051_9c_31_24:8;
    };
}rtk_dtv_demod_8051_reserve8051_9c_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  drf_bist_mode:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  drf_bist_done_1:1;
        RBus_UInt32  drf_bist_fail_1:1;
        RBus_UInt32  drf_bist_done_0:1;
        RBus_UInt32  drf_bist_fail_0:1;
    };
}rtk_dtv_demod_8051_drf_bist_fail_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  drf_start_pause:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  te:1;
        RBus_UInt32  dvse:1;
        RBus_UInt32  dvs:4;
    };
}rtk_dtv_demod_8051_dvs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  resume_wait_th_7_0:8;
    };
}rtk_dtv_demod_8051_resume_wait_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  resume_wait_th_11_8:4;
    };
}rtk_dtv_demod_8051_resume_wait_th_1_RBUS;

#else //apply LITTLE_ENDIAN

//======RTK_DTV_DEMOD_8051 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gp_int0_n:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  dw51_rst_in_n:1;
        RBus_UInt32  i2ct_en_ctrl:1;
        RBus_UInt32  bootcode_en:1;
        RBus_UInt32  res2:24;
    };
}rtk_dtv_demod_8051_gp_int0_n_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_bist_pass:1;
        RBus_UInt32  fw_bist_finish:1;
        RBus_UInt32  rom_bist_pass:1;
        RBus_UInt32  rom_bist_finish:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  rom_bist_en:1;
        RBus_UInt32  res2:24;
    };
}rtk_dtv_demod_8051_fw_bist_pass_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_03:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ckg_count_reg:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_ckg_count_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  f005:1;
        RBus_UInt32  res1:31;
    };
}rtk_dtv_demod_8051_f005_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wdog_rst_n:1;
        RBus_UInt32  wdog_tout_ind:1;
        RBus_UInt32  wdog_clear:1;
        RBus_UInt32  wdog_count_reg:4;
        RBus_UInt32  wdog_en:1;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_wdog_rst_n_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_length:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_fw_length_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  la_addr:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_la_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  timeout_thre:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_timeout_thre_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_fail0:1;
        RBus_UInt32  bist_done0:1;
        RBus_UInt32  bist_fail1:1;
        RBus_UInt32  bist_done1:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  bist_mode:1;
        RBus_UInt32  res2:24;
    };
}rtk_dtv_demod_8051_bist_fail0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_mac_en:1;
        RBus_UInt32  alu_mac_op_en:1;
        RBus_UInt32  alu_sub_sel:1;
        RBus_UInt32  alu_div_en:1;
        RBus_UInt32  alu_cordic_en:1;
        RBus_UInt32  alu_log2_en:1;
        RBus_UInt32  alu_atr_en:1;
        RBus_UInt32  res1:25;
    };
}rtk_dtv_demod_8051_alu_mac_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_mul_in1_b1:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_mul_in1_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_mul_in1_b0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_mul_in1_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_mul_in2_b1:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_mul_in2_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_mul_in2_b0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_mul_in2_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_add_in1_b3:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_add_in1_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_add_in1_b2:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_add_in1_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_add_in1_b1:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_add_in1_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_add_in1_b0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_add_in1_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_add_in2_b3:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_add_in2_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_add_in2_b2:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_add_in2_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_add_in2_b1:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_add_in2_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_add_in2_b0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_add_in2_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_div_in1_b3:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_div_in1_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_div_in1_b2:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_div_in1_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_div_in1_b1:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_div_in1_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_div_in1_b0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_div_in1_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_div_in2_b3:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_div_in2_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_div_in2_b2:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_div_in2_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_div_in2_b1:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_div_in2_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_div_in2_b0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_div_in2_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_cordic_phase_b1:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_cordic_phase_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_cordic_phase_b0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_cordic_phase_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_log2_in_b2:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_log2_in_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_log2_in_b1:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_log2_in_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_log2_in_b0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_log2_in_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_atr_in_b2:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_atr_in_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_atr_in_b1:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_atr_in_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_atr_in_b0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_atr_in_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_atr_alpha1:6;
        RBus_UInt32  res1:26;
    };
}rtk_dtv_demod_8051_alu_atr_alpha1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_atr_alpha2:6;
        RBus_UInt32  res1:26;
    };
}rtk_dtv_demod_8051_alu_atr_alpha2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_2f:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_2f_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_30_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_30_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_30_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_30_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_30_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_30_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_30_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_34_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_34_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_34_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_34_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_34_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_34_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_34_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_38_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_38_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_38_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_38_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_38_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_38_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_38_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_3c_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_3c_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_3c_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_3c_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_3c_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_3c_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_3c_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_mul_out_b3:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_mul_out_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_mul_out_b2:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_mul_out_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_mul_out_b1:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_mul_out_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_mul_out_b0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_mul_out_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_add_out_b3:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_add_out_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_add_out_b2:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_add_out_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_add_out_b1:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_add_out_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_add_out_b0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_add_out_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_div_ok:1;
        RBus_UInt32  res1:31;
    };
}rtk_dtv_demod_8051_alu_div_ok_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_div_out_b3:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_div_out_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_div_out_b2:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_div_out_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_div_out_b1:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_div_out_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_div_out_b0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_div_out_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_cordic_ok:1;
        RBus_UInt32  res1:31;
    };
}rtk_dtv_demod_8051_alu_cordic_ok_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_cordic_out1_b1:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_cordic_out1_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_cordic_out1_b0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_cordic_out1_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_cordic_out2_b1:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_cordic_out2_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_cordic_out2_b0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_cordic_out2_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_log2_ok:1;
        RBus_UInt32  res1:31;
    };
}rtk_dtv_demod_8051_alu_log2_ok_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alu_log2_out_a_3:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_alu_log2_out_a_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  alu_log2_out_2_0:3;
        RBus_UInt32  res2:24;
    };
}rtk_dtv_demod_8051_alu_log2_out_2_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_55_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_55_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_55_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_55_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_55_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_55_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_58_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_58_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_58_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_58_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_58_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_58_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_58_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_5c_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_5c_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_5c_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_5c_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_5c_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_5c_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_5c_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_60_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_60_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_60_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_60_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_60_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_60_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_60_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_64_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_64_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_64_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_64_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_64_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_64_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_64_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_68_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_68_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_68_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_68_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_68_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_68_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_68_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_6c_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_6c_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_6c_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_6c_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_6c_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_6c_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_6c_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_70_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_70_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_70_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_70_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_70_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_70_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_70_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_74_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_74_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_74_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_74_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_74_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_74_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_74_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_78_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_78_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_78_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_78_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_78_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_78_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_78_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_7c_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_7c_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_7c_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_7c_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_7c_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_7c_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_7c_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_80_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_80_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_80_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_80_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_80_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_80_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_80_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_84_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_84_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_84_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_84_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_84_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_84_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_84_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_88_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_88_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_88_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_88_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_88_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_88_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_88_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_8c_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_8c_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_8c_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_8c_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_8c_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_8c_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_8c_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_90_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_90_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_90_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_90_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_90_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_90_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_90_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_94_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_94_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_94_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_94_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_94_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_94_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_94_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_98_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_98_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_98_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_98_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_98_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_98_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_98_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_9c_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_9c_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_9c_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_9c_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_9c_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserve8051_9c_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_reserve8051_9c_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_bist_fail_0:1;
        RBus_UInt32  drf_bist_done_0:1;
        RBus_UInt32  drf_bist_fail_1:1;
        RBus_UInt32  drf_bist_done_1:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  drf_bist_mode:1;
        RBus_UInt32  res2:24;
    };
}rtk_dtv_demod_8051_drf_bist_fail_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dvs:4;
        RBus_UInt32  dvse:1;
        RBus_UInt32  te:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  drf_start_pause:1;
        RBus_UInt32  res2:24;
    };
}rtk_dtv_demod_8051_dvs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  resume_wait_th_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_8051_resume_wait_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  resume_wait_th_11_8:4;
        RBus_UInt32  res1:28;
    };
}rtk_dtv_demod_8051_resume_wait_th_1_RBUS;




#endif 


#endif 
