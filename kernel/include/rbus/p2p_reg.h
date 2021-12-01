/**
* @file Merlin5-DesignSpec-D-Domain_P2P
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_P2P_REG_H_
#define _RBUS_P2P_REG_H_

#include "rbus_types.h"



//  P2P Register Address
#define  P2P_P2P_EN                                                             0x1802DD00
#define  P2P_P2P_EN_reg_addr                                                     "0xB802DD00"
#define  P2P_P2P_EN_reg                                                          0xB802DD00
#define  P2P_P2P_EN_inst_addr                                                    "0x0000"
#define  set_P2P_P2P_EN_reg(data)                                                (*((volatile unsigned int*)P2P_P2P_EN_reg)=data)
#define  get_P2P_P2P_EN_reg                                                      (*((volatile unsigned int*)P2P_P2P_EN_reg))
#define  P2P_P2P_EN_phy_clk_div_shift                                            (16)
#define  P2P_P2P_EN_p2p_bit_mode_shift                                           (8)
#define  P2P_P2P_EN_p2p_lane_mode_shift                                          (4)
#define  P2P_P2P_EN_p2p_en_shift                                                 (0)
#define  P2P_P2P_EN_phy_clk_div_mask                                             (0x01FF0000)
#define  P2P_P2P_EN_p2p_bit_mode_mask                                            (0x00000300)
#define  P2P_P2P_EN_p2p_lane_mode_mask                                           (0x00000030)
#define  P2P_P2P_EN_p2p_en_mask                                                  (0x00000001)
#define  P2P_P2P_EN_phy_clk_div(data)                                            (0x01FF0000&((data)<<16))
#define  P2P_P2P_EN_p2p_bit_mode(data)                                           (0x00000300&((data)<<8))
#define  P2P_P2P_EN_p2p_lane_mode(data)                                          (0x00000030&((data)<<4))
#define  P2P_P2P_EN_p2p_en(data)                                                 (0x00000001&(data))
#define  P2P_P2P_EN_get_phy_clk_div(data)                                        ((0x01FF0000&(data))>>16)
#define  P2P_P2P_EN_get_p2p_bit_mode(data)                                       ((0x00000300&(data))>>8)
#define  P2P_P2P_EN_get_p2p_lane_mode(data)                                      ((0x00000030&(data))>>4)
#define  P2P_P2P_EN_get_p2p_en(data)                                             (0x00000001&(data))

#define  P2P_P2P_FSM                                                            0x1802DD04
#define  P2P_P2P_FSM_reg_addr                                                    "0xB802DD04"
#define  P2P_P2P_FSM_reg                                                         0xB802DD04
#define  P2P_P2P_FSM_inst_addr                                                   "0x0001"
#define  set_P2P_P2P_FSM_reg(data)                                               (*((volatile unsigned int*)P2P_P2P_FSM_reg)=data)
#define  get_P2P_P2P_FSM_reg                                                     (*((volatile unsigned int*)P2P_P2P_FSM_reg))
#define  P2P_P2P_FSM_fsm_force_mode3_shift                                       (31)
#define  P2P_P2P_FSM_standby_time_10us_shift                                     (16)
#define  P2P_P2P_FSM_training_time_500us_shift                                   (4)
#define  P2P_P2P_FSM_lsp_times_shift                                             (0)
#define  P2P_P2P_FSM_fsm_force_mode3_mask                                        (0x80000000)
#define  P2P_P2P_FSM_standby_time_10us_mask                                      (0x001F0000)
#define  P2P_P2P_FSM_training_time_500us_mask                                    (0x00003FF0)
#define  P2P_P2P_FSM_lsp_times_mask                                              (0x0000000F)
#define  P2P_P2P_FSM_fsm_force_mode3(data)                                       (0x80000000&((data)<<31))
#define  P2P_P2P_FSM_standby_time_10us(data)                                     (0x001F0000&((data)<<16))
#define  P2P_P2P_FSM_training_time_500us(data)                                   (0x00003FF0&((data)<<4))
#define  P2P_P2P_FSM_lsp_times(data)                                             (0x0000000F&(data))
#define  P2P_P2P_FSM_get_fsm_force_mode3(data)                                   ((0x80000000&(data))>>31)
#define  P2P_P2P_FSM_get_standby_time_10us(data)                                 ((0x001F0000&(data))>>16)
#define  P2P_P2P_FSM_get_training_time_500us(data)                               ((0x00003FF0&(data))>>4)
#define  P2P_P2P_FSM_get_lsp_times(data)                                         (0x0000000F&(data))

#define  P2P_P2P_CLOCK_PATTERN                                                  0x1802DD08
#define  P2P_P2P_CLOCK_PATTERN_reg_addr                                          "0xB802DD08"
#define  P2P_P2P_CLOCK_PATTERN_reg                                               0xB802DD08
#define  P2P_P2P_CLOCK_PATTERN_inst_addr                                         "0x0002"
#define  set_P2P_P2P_CLOCK_PATTERN_reg(data)                                     (*((volatile unsigned int*)P2P_P2P_CLOCK_PATTERN_reg)=data)
#define  get_P2P_P2P_CLOCK_PATTERN_reg                                           (*((volatile unsigned int*)P2P_P2P_CLOCK_PATTERN_reg))
#define  P2P_P2P_CLOCK_PATTERN_clock_pattern_shift                               (20)
#define  P2P_P2P_CLOCK_PATTERN_dummy_19_1_shift                                  (1)
#define  P2P_P2P_CLOCK_PATTERN_dis_clock_at_bcc_shift                            (0)
#define  P2P_P2P_CLOCK_PATTERN_clock_pattern_mask                                (0x3FF00000)
#define  P2P_P2P_CLOCK_PATTERN_dummy_19_1_mask                                   (0x000FFFFE)
#define  P2P_P2P_CLOCK_PATTERN_dis_clock_at_bcc_mask                             (0x00000001)
#define  P2P_P2P_CLOCK_PATTERN_clock_pattern(data)                               (0x3FF00000&((data)<<20))
#define  P2P_P2P_CLOCK_PATTERN_dummy_19_1(data)                                  (0x000FFFFE&((data)<<1))
#define  P2P_P2P_CLOCK_PATTERN_dis_clock_at_bcc(data)                            (0x00000001&(data))
#define  P2P_P2P_CLOCK_PATTERN_get_clock_pattern(data)                           ((0x3FF00000&(data))>>20)
#define  P2P_P2P_CLOCK_PATTERN_get_dummy_19_1(data)                              ((0x000FFFFE&(data))>>1)
#define  P2P_P2P_CLOCK_PATTERN_get_dis_clock_at_bcc(data)                        (0x00000001&(data))

#define  P2P_P2P_K12                                                            0x1802DD0C
#define  P2P_P2P_K12_reg_addr                                                    "0xB802DD0C"
#define  P2P_P2P_K12_reg                                                         0xB802DD0C
#define  P2P_P2P_K12_inst_addr                                                   "0x0003"
#define  set_P2P_P2P_K12_reg(data)                                               (*((volatile unsigned int*)P2P_P2P_K12_reg)=data)
#define  get_P2P_P2P_K12_reg                                                     (*((volatile unsigned int*)P2P_P2P_K12_reg))
#define  P2P_P2P_K12_dummy_31_28_shift                                           (28)
#define  P2P_P2P_K12_k1_symbol_shift                                             (16)
#define  P2P_P2P_K12_dummy_15_12_shift                                           (12)
#define  P2P_P2P_K12_k2_symbol_shift                                             (0)
#define  P2P_P2P_K12_dummy_31_28_mask                                            (0xF0000000)
#define  P2P_P2P_K12_k1_symbol_mask                                              (0x03FF0000)
#define  P2P_P2P_K12_dummy_15_12_mask                                            (0x0000F000)
#define  P2P_P2P_K12_k2_symbol_mask                                              (0x000003FF)
#define  P2P_P2P_K12_dummy_31_28(data)                                           (0xF0000000&((data)<<28))
#define  P2P_P2P_K12_k1_symbol(data)                                             (0x03FF0000&((data)<<16))
#define  P2P_P2P_K12_dummy_15_12(data)                                           (0x0000F000&((data)<<12))
#define  P2P_P2P_K12_k2_symbol(data)                                             (0x000003FF&(data))
#define  P2P_P2P_K12_get_dummy_31_28(data)                                       ((0xF0000000&(data))>>28)
#define  P2P_P2P_K12_get_k1_symbol(data)                                         ((0x03FF0000&(data))>>16)
#define  P2P_P2P_K12_get_dummy_15_12(data)                                       ((0x0000F000&(data))>>12)
#define  P2P_P2P_K12_get_k2_symbol(data)                                         (0x000003FF&(data))

#define  P2P_P2P_K34                                                            0x1802DD10
#define  P2P_P2P_K34_reg_addr                                                    "0xB802DD10"
#define  P2P_P2P_K34_reg                                                         0xB802DD10
#define  P2P_P2P_K34_inst_addr                                                   "0x0004"
#define  set_P2P_P2P_K34_reg(data)                                               (*((volatile unsigned int*)P2P_P2P_K34_reg)=data)
#define  get_P2P_P2P_K34_reg                                                     (*((volatile unsigned int*)P2P_P2P_K34_reg))
#define  P2P_P2P_K34_dummy_31_28_shift                                           (28)
#define  P2P_P2P_K34_k3_symbol_shift                                             (16)
#define  P2P_P2P_K34_dummy_15_12_shift                                           (12)
#define  P2P_P2P_K34_k4_symbol_shift                                             (0)
#define  P2P_P2P_K34_dummy_31_28_mask                                            (0xF0000000)
#define  P2P_P2P_K34_k3_symbol_mask                                              (0x03FF0000)
#define  P2P_P2P_K34_dummy_15_12_mask                                            (0x0000F000)
#define  P2P_P2P_K34_k4_symbol_mask                                              (0x000003FF)
#define  P2P_P2P_K34_dummy_31_28(data)                                           (0xF0000000&((data)<<28))
#define  P2P_P2P_K34_k3_symbol(data)                                             (0x03FF0000&((data)<<16))
#define  P2P_P2P_K34_dummy_15_12(data)                                           (0x0000F000&((data)<<12))
#define  P2P_P2P_K34_k4_symbol(data)                                             (0x000003FF&(data))
#define  P2P_P2P_K34_get_dummy_31_28(data)                                       ((0xF0000000&(data))>>28)
#define  P2P_P2P_K34_get_k3_symbol(data)                                         ((0x03FF0000&(data))>>16)
#define  P2P_P2P_K34_get_dummy_15_12(data)                                       ((0x0000F000&(data))>>12)
#define  P2P_P2P_K34_get_k4_symbol(data)                                         (0x000003FF&(data))

#define  P2P_P2P_G12                                                            0x1802DD14
#define  P2P_P2P_G12_reg_addr                                                    "0xB802DD14"
#define  P2P_P2P_G12_reg                                                         0xB802DD14
#define  P2P_P2P_G12_inst_addr                                                   "0x0005"
#define  set_P2P_P2P_G12_reg(data)                                               (*((volatile unsigned int*)P2P_P2P_G12_reg)=data)
#define  get_P2P_P2P_G12_reg                                                     (*((volatile unsigned int*)P2P_P2P_G12_reg))
#define  P2P_P2P_G12_dummy_31_28_shift                                           (28)
#define  P2P_P2P_G12_g1_symbol_shift                                             (16)
#define  P2P_P2P_G12_dummy_15_12_shift                                           (12)
#define  P2P_P2P_G12_g2_symbol_shift                                             (0)
#define  P2P_P2P_G12_dummy_31_28_mask                                            (0xF0000000)
#define  P2P_P2P_G12_g1_symbol_mask                                              (0x03FF0000)
#define  P2P_P2P_G12_dummy_15_12_mask                                            (0x0000F000)
#define  P2P_P2P_G12_g2_symbol_mask                                              (0x000003FF)
#define  P2P_P2P_G12_dummy_31_28(data)                                           (0xF0000000&((data)<<28))
#define  P2P_P2P_G12_g1_symbol(data)                                             (0x03FF0000&((data)<<16))
#define  P2P_P2P_G12_dummy_15_12(data)                                           (0x0000F000&((data)<<12))
#define  P2P_P2P_G12_g2_symbol(data)                                             (0x000003FF&(data))
#define  P2P_P2P_G12_get_dummy_31_28(data)                                       ((0xF0000000&(data))>>28)
#define  P2P_P2P_G12_get_g1_symbol(data)                                         ((0x03FF0000&(data))>>16)
#define  P2P_P2P_G12_get_dummy_15_12(data)                                       ((0x0000F000&(data))>>12)
#define  P2P_P2P_G12_get_g2_symbol(data)                                         (0x000003FF&(data))

#define  P2P_P2P_G34                                                            0x1802DD18
#define  P2P_P2P_G34_reg_addr                                                    "0xB802DD18"
#define  P2P_P2P_G34_reg                                                         0xB802DD18
#define  P2P_P2P_G34_inst_addr                                                   "0x0006"
#define  set_P2P_P2P_G34_reg(data)                                               (*((volatile unsigned int*)P2P_P2P_G34_reg)=data)
#define  get_P2P_P2P_G34_reg                                                     (*((volatile unsigned int*)P2P_P2P_G34_reg))
#define  P2P_P2P_G34_dummy_31_28_shift                                           (28)
#define  P2P_P2P_G34_g3_symbol_shift                                             (16)
#define  P2P_P2P_G34_dummy_15_12_shift                                           (12)
#define  P2P_P2P_G34_g4_symbol_shift                                             (0)
#define  P2P_P2P_G34_dummy_31_28_mask                                            (0xF0000000)
#define  P2P_P2P_G34_g3_symbol_mask                                              (0x03FF0000)
#define  P2P_P2P_G34_dummy_15_12_mask                                            (0x0000F000)
#define  P2P_P2P_G34_g4_symbol_mask                                              (0x000003FF)
#define  P2P_P2P_G34_dummy_31_28(data)                                           (0xF0000000&((data)<<28))
#define  P2P_P2P_G34_g3_symbol(data)                                             (0x03FF0000&((data)<<16))
#define  P2P_P2P_G34_dummy_15_12(data)                                           (0x0000F000&((data)<<12))
#define  P2P_P2P_G34_g4_symbol(data)                                             (0x000003FF&(data))
#define  P2P_P2P_G34_get_dummy_31_28(data)                                       ((0xF0000000&(data))>>28)
#define  P2P_P2P_G34_get_g3_symbol(data)                                         ((0x03FF0000&(data))>>16)
#define  P2P_P2P_G34_get_dummy_15_12(data)                                       ((0x0000F000&(data))>>12)
#define  P2P_P2P_G34_get_g4_symbol(data)                                         (0x000003FF&(data))

#define  P2P_P2P_LSP_K3_LOC00                                                   0x1802DD1C
#define  P2P_P2P_LSP_K3_LOC00_reg_addr                                           "0xB802DD1C"
#define  P2P_P2P_LSP_K3_LOC00_reg                                                0xB802DD1C
#define  P2P_P2P_LSP_K3_LOC00_inst_addr                                          "0x0007"
#define  set_P2P_P2P_LSP_K3_LOC00_reg(data)                                      (*((volatile unsigned int*)P2P_P2P_LSP_K3_LOC00_reg)=data)
#define  get_P2P_P2P_LSP_K3_LOC00_reg                                            (*((volatile unsigned int*)P2P_P2P_LSP_K3_LOC00_reg))
#define  P2P_P2P_LSP_K3_LOC00_lsp_k3_loc00_shift                                 (24)
#define  P2P_P2P_LSP_K3_LOC00_lsp_k3_loc01_shift                                 (16)
#define  P2P_P2P_LSP_K3_LOC00_lsp_k3_loc02_shift                                 (8)
#define  P2P_P2P_LSP_K3_LOC00_lsp_k3_loc03_shift                                 (0)
#define  P2P_P2P_LSP_K3_LOC00_lsp_k3_loc00_mask                                  (0x1F000000)
#define  P2P_P2P_LSP_K3_LOC00_lsp_k3_loc01_mask                                  (0x001F0000)
#define  P2P_P2P_LSP_K3_LOC00_lsp_k3_loc02_mask                                  (0x00001F00)
#define  P2P_P2P_LSP_K3_LOC00_lsp_k3_loc03_mask                                  (0x0000001F)
#define  P2P_P2P_LSP_K3_LOC00_lsp_k3_loc00(data)                                 (0x1F000000&((data)<<24))
#define  P2P_P2P_LSP_K3_LOC00_lsp_k3_loc01(data)                                 (0x001F0000&((data)<<16))
#define  P2P_P2P_LSP_K3_LOC00_lsp_k3_loc02(data)                                 (0x00001F00&((data)<<8))
#define  P2P_P2P_LSP_K3_LOC00_lsp_k3_loc03(data)                                 (0x0000001F&(data))
#define  P2P_P2P_LSP_K3_LOC00_get_lsp_k3_loc00(data)                             ((0x1F000000&(data))>>24)
#define  P2P_P2P_LSP_K3_LOC00_get_lsp_k3_loc01(data)                             ((0x001F0000&(data))>>16)
#define  P2P_P2P_LSP_K3_LOC00_get_lsp_k3_loc02(data)                             ((0x00001F00&(data))>>8)
#define  P2P_P2P_LSP_K3_LOC00_get_lsp_k3_loc03(data)                             (0x0000001F&(data))

#define  P2P_P2P_LSP_K3_LOC04                                                   0x1802DD20
#define  P2P_P2P_LSP_K3_LOC04_reg_addr                                           "0xB802DD20"
#define  P2P_P2P_LSP_K3_LOC04_reg                                                0xB802DD20
#define  P2P_P2P_LSP_K3_LOC04_inst_addr                                          "0x0008"
#define  set_P2P_P2P_LSP_K3_LOC04_reg(data)                                      (*((volatile unsigned int*)P2P_P2P_LSP_K3_LOC04_reg)=data)
#define  get_P2P_P2P_LSP_K3_LOC04_reg                                            (*((volatile unsigned int*)P2P_P2P_LSP_K3_LOC04_reg))
#define  P2P_P2P_LSP_K3_LOC04_lsp_k3_loc04_shift                                 (24)
#define  P2P_P2P_LSP_K3_LOC04_lsp_k3_loc05_shift                                 (16)
#define  P2P_P2P_LSP_K3_LOC04_lsp_k3_loc06_shift                                 (8)
#define  P2P_P2P_LSP_K3_LOC04_lsp_k3_loc07_shift                                 (0)
#define  P2P_P2P_LSP_K3_LOC04_lsp_k3_loc04_mask                                  (0x1F000000)
#define  P2P_P2P_LSP_K3_LOC04_lsp_k3_loc05_mask                                  (0x001F0000)
#define  P2P_P2P_LSP_K3_LOC04_lsp_k3_loc06_mask                                  (0x00001F00)
#define  P2P_P2P_LSP_K3_LOC04_lsp_k3_loc07_mask                                  (0x0000001F)
#define  P2P_P2P_LSP_K3_LOC04_lsp_k3_loc04(data)                                 (0x1F000000&((data)<<24))
#define  P2P_P2P_LSP_K3_LOC04_lsp_k3_loc05(data)                                 (0x001F0000&((data)<<16))
#define  P2P_P2P_LSP_K3_LOC04_lsp_k3_loc06(data)                                 (0x00001F00&((data)<<8))
#define  P2P_P2P_LSP_K3_LOC04_lsp_k3_loc07(data)                                 (0x0000001F&(data))
#define  P2P_P2P_LSP_K3_LOC04_get_lsp_k3_loc04(data)                             ((0x1F000000&(data))>>24)
#define  P2P_P2P_LSP_K3_LOC04_get_lsp_k3_loc05(data)                             ((0x001F0000&(data))>>16)
#define  P2P_P2P_LSP_K3_LOC04_get_lsp_k3_loc06(data)                             ((0x00001F00&(data))>>8)
#define  P2P_P2P_LSP_K3_LOC04_get_lsp_k3_loc07(data)                             (0x0000001F&(data))

#define  P2P_P2P_LSP_K3_LOC08                                                   0x1802DD24
#define  P2P_P2P_LSP_K3_LOC08_reg_addr                                           "0xB802DD24"
#define  P2P_P2P_LSP_K3_LOC08_reg                                                0xB802DD24
#define  P2P_P2P_LSP_K3_LOC08_inst_addr                                          "0x0009"
#define  set_P2P_P2P_LSP_K3_LOC08_reg(data)                                      (*((volatile unsigned int*)P2P_P2P_LSP_K3_LOC08_reg)=data)
#define  get_P2P_P2P_LSP_K3_LOC08_reg                                            (*((volatile unsigned int*)P2P_P2P_LSP_K3_LOC08_reg))
#define  P2P_P2P_LSP_K3_LOC08_lsp_k3_loc08_shift                                 (24)
#define  P2P_P2P_LSP_K3_LOC08_lsp_k3_loc09_shift                                 (16)
#define  P2P_P2P_LSP_K3_LOC08_lsp_k3_loc10_shift                                 (8)
#define  P2P_P2P_LSP_K3_LOC08_lsp_k3_loc11_shift                                 (0)
#define  P2P_P2P_LSP_K3_LOC08_lsp_k3_loc08_mask                                  (0x1F000000)
#define  P2P_P2P_LSP_K3_LOC08_lsp_k3_loc09_mask                                  (0x001F0000)
#define  P2P_P2P_LSP_K3_LOC08_lsp_k3_loc10_mask                                  (0x00001F00)
#define  P2P_P2P_LSP_K3_LOC08_lsp_k3_loc11_mask                                  (0x0000001F)
#define  P2P_P2P_LSP_K3_LOC08_lsp_k3_loc08(data)                                 (0x1F000000&((data)<<24))
#define  P2P_P2P_LSP_K3_LOC08_lsp_k3_loc09(data)                                 (0x001F0000&((data)<<16))
#define  P2P_P2P_LSP_K3_LOC08_lsp_k3_loc10(data)                                 (0x00001F00&((data)<<8))
#define  P2P_P2P_LSP_K3_LOC08_lsp_k3_loc11(data)                                 (0x0000001F&(data))
#define  P2P_P2P_LSP_K3_LOC08_get_lsp_k3_loc08(data)                             ((0x1F000000&(data))>>24)
#define  P2P_P2P_LSP_K3_LOC08_get_lsp_k3_loc09(data)                             ((0x001F0000&(data))>>16)
#define  P2P_P2P_LSP_K3_LOC08_get_lsp_k3_loc10(data)                             ((0x00001F00&(data))>>8)
#define  P2P_P2P_LSP_K3_LOC08_get_lsp_k3_loc11(data)                             (0x0000001F&(data))

#define  P2P_P2P_TCON_SEL0                                                      0x1802DD28
#define  P2P_P2P_TCON_SEL0_reg_addr                                              "0xB802DD28"
#define  P2P_P2P_TCON_SEL0_reg                                                   0xB802DD28
#define  P2P_P2P_TCON_SEL0_inst_addr                                             "0x000A"
#define  set_P2P_P2P_TCON_SEL0_reg(data)                                         (*((volatile unsigned int*)P2P_P2P_TCON_SEL0_reg)=data)
#define  get_P2P_P2P_TCON_SEL0_reg                                               (*((volatile unsigned int*)P2P_P2P_TCON_SEL0_reg))
#define  P2P_P2P_TCON_SEL0_dummy_31_24_shift                                     (24)
#define  P2P_P2P_TCON_SEL0_tcon_sel_fsync_shift                                  (16)
#define  P2P_P2P_TCON_SEL0_tcon_sel_pol_shift                                    (8)
#define  P2P_P2P_TCON_SEL0_tcon_sel_polc_shift                                   (0)
#define  P2P_P2P_TCON_SEL0_dummy_31_24_mask                                      (0xFF000000)
#define  P2P_P2P_TCON_SEL0_tcon_sel_fsync_mask                                   (0x001F0000)
#define  P2P_P2P_TCON_SEL0_tcon_sel_pol_mask                                     (0x00001F00)
#define  P2P_P2P_TCON_SEL0_tcon_sel_polc_mask                                    (0x0000001F)
#define  P2P_P2P_TCON_SEL0_dummy_31_24(data)                                     (0xFF000000&((data)<<24))
#define  P2P_P2P_TCON_SEL0_tcon_sel_fsync(data)                                  (0x001F0000&((data)<<16))
#define  P2P_P2P_TCON_SEL0_tcon_sel_pol(data)                                    (0x00001F00&((data)<<8))
#define  P2P_P2P_TCON_SEL0_tcon_sel_polc(data)                                   (0x0000001F&(data))
#define  P2P_P2P_TCON_SEL0_get_dummy_31_24(data)                                 ((0xFF000000&(data))>>24)
#define  P2P_P2P_TCON_SEL0_get_tcon_sel_fsync(data)                              ((0x001F0000&(data))>>16)
#define  P2P_P2P_TCON_SEL0_get_tcon_sel_pol(data)                                ((0x00001F00&(data))>>8)
#define  P2P_P2P_TCON_SEL0_get_tcon_sel_polc(data)                               (0x0000001F&(data))

#define  P2P_P2P_TCON_SEL1                                                      0x1802DD2C
#define  P2P_P2P_TCON_SEL1_reg_addr                                              "0xB802DD2C"
#define  P2P_P2P_TCON_SEL1_reg                                                   0xB802DD2C
#define  P2P_P2P_TCON_SEL1_inst_addr                                             "0x000B"
#define  set_P2P_P2P_TCON_SEL1_reg(data)                                         (*((volatile unsigned int*)P2P_P2P_TCON_SEL1_reg)=data)
#define  get_P2P_P2P_TCON_SEL1_reg                                               (*((volatile unsigned int*)P2P_P2P_TCON_SEL1_reg))
#define  P2P_P2P_TCON_SEL1_dummy_31_24_shift                                     (24)
#define  P2P_P2P_TCON_SEL1_tcon_sel_bkdu_shift                                   (16)
#define  P2P_P2P_TCON_SEL1_tcon_sel_pol2_shift                                   (8)
#define  P2P_P2P_TCON_SEL1_tcon_sel_pol3_shift                                   (0)
#define  P2P_P2P_TCON_SEL1_dummy_31_24_mask                                      (0xFF000000)
#define  P2P_P2P_TCON_SEL1_tcon_sel_bkdu_mask                                    (0x001F0000)
#define  P2P_P2P_TCON_SEL1_tcon_sel_pol2_mask                                    (0x00001F00)
#define  P2P_P2P_TCON_SEL1_tcon_sel_pol3_mask                                    (0x0000001F)
#define  P2P_P2P_TCON_SEL1_dummy_31_24(data)                                     (0xFF000000&((data)<<24))
#define  P2P_P2P_TCON_SEL1_tcon_sel_bkdu(data)                                   (0x001F0000&((data)<<16))
#define  P2P_P2P_TCON_SEL1_tcon_sel_pol2(data)                                   (0x00001F00&((data)<<8))
#define  P2P_P2P_TCON_SEL1_tcon_sel_pol3(data)                                   (0x0000001F&(data))
#define  P2P_P2P_TCON_SEL1_get_dummy_31_24(data)                                 ((0xFF000000&(data))>>24)
#define  P2P_P2P_TCON_SEL1_get_tcon_sel_bkdu(data)                               ((0x001F0000&(data))>>16)
#define  P2P_P2P_TCON_SEL1_get_tcon_sel_pol2(data)                               ((0x00001F00&(data))>>8)
#define  P2P_P2P_TCON_SEL1_get_tcon_sel_pol3(data)                               (0x0000001F&(data))

#define  P2P_P2P_CTRL_L_BYTE0_00                                                0x1802DD30
#define  P2P_P2P_CTRL_L_BYTE0_00_reg_addr                                        "0xB802DD30"
#define  P2P_P2P_CTRL_L_BYTE0_00_reg                                             0xB802DD30
#define  P2P_P2P_CTRL_L_BYTE0_00_inst_addr                                       "0x000C"
#define  set_P2P_P2P_CTRL_L_BYTE0_00_reg(data)                                   (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE0_00_reg)=data)
#define  get_P2P_P2P_CTRL_L_BYTE0_00_reg                                         (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE0_00_reg))
#define  P2P_P2P_CTRL_L_BYTE0_00_ctrl_l_byte0_00_shift                           (24)
#define  P2P_P2P_CTRL_L_BYTE0_00_ctrl_l_byte0_01_shift                           (16)
#define  P2P_P2P_CTRL_L_BYTE0_00_ctrl_l_byte0_02_shift                           (8)
#define  P2P_P2P_CTRL_L_BYTE0_00_ctrl_l_byte0_03_shift                           (0)
#define  P2P_P2P_CTRL_L_BYTE0_00_ctrl_l_byte0_00_mask                            (0xFF000000)
#define  P2P_P2P_CTRL_L_BYTE0_00_ctrl_l_byte0_01_mask                            (0x00FF0000)
#define  P2P_P2P_CTRL_L_BYTE0_00_ctrl_l_byte0_02_mask                            (0x0000FF00)
#define  P2P_P2P_CTRL_L_BYTE0_00_ctrl_l_byte0_03_mask                            (0x000000FF)
#define  P2P_P2P_CTRL_L_BYTE0_00_ctrl_l_byte0_00(data)                           (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_L_BYTE0_00_ctrl_l_byte0_01(data)                           (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_L_BYTE0_00_ctrl_l_byte0_02(data)                           (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_L_BYTE0_00_ctrl_l_byte0_03(data)                           (0x000000FF&(data))
#define  P2P_P2P_CTRL_L_BYTE0_00_get_ctrl_l_byte0_00(data)                       ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_L_BYTE0_00_get_ctrl_l_byte0_01(data)                       ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_L_BYTE0_00_get_ctrl_l_byte0_02(data)                       ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_L_BYTE0_00_get_ctrl_l_byte0_03(data)                       (0x000000FF&(data))

#define  P2P_P2P_CTRL_L_BYTE0_04                                                0x1802DD34
#define  P2P_P2P_CTRL_L_BYTE0_04_reg_addr                                        "0xB802DD34"
#define  P2P_P2P_CTRL_L_BYTE0_04_reg                                             0xB802DD34
#define  P2P_P2P_CTRL_L_BYTE0_04_inst_addr                                       "0x000D"
#define  set_P2P_P2P_CTRL_L_BYTE0_04_reg(data)                                   (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE0_04_reg)=data)
#define  get_P2P_P2P_CTRL_L_BYTE0_04_reg                                         (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE0_04_reg))
#define  P2P_P2P_CTRL_L_BYTE0_04_ctrl_l_byte0_04_shift                           (24)
#define  P2P_P2P_CTRL_L_BYTE0_04_ctrl_l_byte0_05_shift                           (16)
#define  P2P_P2P_CTRL_L_BYTE0_04_ctrl_l_byte0_06_shift                           (8)
#define  P2P_P2P_CTRL_L_BYTE0_04_ctrl_l_byte0_07_shift                           (0)
#define  P2P_P2P_CTRL_L_BYTE0_04_ctrl_l_byte0_04_mask                            (0xFF000000)
#define  P2P_P2P_CTRL_L_BYTE0_04_ctrl_l_byte0_05_mask                            (0x00FF0000)
#define  P2P_P2P_CTRL_L_BYTE0_04_ctrl_l_byte0_06_mask                            (0x0000FF00)
#define  P2P_P2P_CTRL_L_BYTE0_04_ctrl_l_byte0_07_mask                            (0x000000FF)
#define  P2P_P2P_CTRL_L_BYTE0_04_ctrl_l_byte0_04(data)                           (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_L_BYTE0_04_ctrl_l_byte0_05(data)                           (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_L_BYTE0_04_ctrl_l_byte0_06(data)                           (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_L_BYTE0_04_ctrl_l_byte0_07(data)                           (0x000000FF&(data))
#define  P2P_P2P_CTRL_L_BYTE0_04_get_ctrl_l_byte0_04(data)                       ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_L_BYTE0_04_get_ctrl_l_byte0_05(data)                       ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_L_BYTE0_04_get_ctrl_l_byte0_06(data)                       ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_L_BYTE0_04_get_ctrl_l_byte0_07(data)                       (0x000000FF&(data))

#define  P2P_P2P_CTRL_L_BYTE0_08                                                0x1802DD38
#define  P2P_P2P_CTRL_L_BYTE0_08_reg_addr                                        "0xB802DD38"
#define  P2P_P2P_CTRL_L_BYTE0_08_reg                                             0xB802DD38
#define  P2P_P2P_CTRL_L_BYTE0_08_inst_addr                                       "0x000E"
#define  set_P2P_P2P_CTRL_L_BYTE0_08_reg(data)                                   (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE0_08_reg)=data)
#define  get_P2P_P2P_CTRL_L_BYTE0_08_reg                                         (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE0_08_reg))
#define  P2P_P2P_CTRL_L_BYTE0_08_ctrl_l_byte0_08_shift                           (24)
#define  P2P_P2P_CTRL_L_BYTE0_08_ctrl_l_byte0_09_shift                           (16)
#define  P2P_P2P_CTRL_L_BYTE0_08_ctrl_l_byte0_10_shift                           (8)
#define  P2P_P2P_CTRL_L_BYTE0_08_ctrl_l_byte0_11_shift                           (0)
#define  P2P_P2P_CTRL_L_BYTE0_08_ctrl_l_byte0_08_mask                            (0xFF000000)
#define  P2P_P2P_CTRL_L_BYTE0_08_ctrl_l_byte0_09_mask                            (0x00FF0000)
#define  P2P_P2P_CTRL_L_BYTE0_08_ctrl_l_byte0_10_mask                            (0x0000FF00)
#define  P2P_P2P_CTRL_L_BYTE0_08_ctrl_l_byte0_11_mask                            (0x000000FF)
#define  P2P_P2P_CTRL_L_BYTE0_08_ctrl_l_byte0_08(data)                           (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_L_BYTE0_08_ctrl_l_byte0_09(data)                           (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_L_BYTE0_08_ctrl_l_byte0_10(data)                           (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_L_BYTE0_08_ctrl_l_byte0_11(data)                           (0x000000FF&(data))
#define  P2P_P2P_CTRL_L_BYTE0_08_get_ctrl_l_byte0_08(data)                       ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_L_BYTE0_08_get_ctrl_l_byte0_09(data)                       ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_L_BYTE0_08_get_ctrl_l_byte0_10(data)                       ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_L_BYTE0_08_get_ctrl_l_byte0_11(data)                       (0x000000FF&(data))

#define  P2P_P2P_CTRL_L_BYTE1_EVEN00                                            0x1802DD3C
#define  P2P_P2P_CTRL_L_BYTE1_EVEN00_reg_addr                                    "0xB802DD3C"
#define  P2P_P2P_CTRL_L_BYTE1_EVEN00_reg                                         0xB802DD3C
#define  P2P_P2P_CTRL_L_BYTE1_EVEN00_inst_addr                                   "0x000F"
#define  set_P2P_P2P_CTRL_L_BYTE1_EVEN00_reg(data)                               (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE1_EVEN00_reg)=data)
#define  get_P2P_P2P_CTRL_L_BYTE1_EVEN00_reg                                     (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE1_EVEN00_reg))
#define  P2P_P2P_CTRL_L_BYTE1_EVEN00_ctrl_l_byte1_even00_shift                   (24)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN00_ctrl_l_byte1_even01_shift                   (16)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN00_ctrl_l_byte1_even02_shift                   (8)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN00_ctrl_l_byte1_even03_shift                   (0)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN00_ctrl_l_byte1_even00_mask                    (0xFF000000)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN00_ctrl_l_byte1_even01_mask                    (0x00FF0000)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN00_ctrl_l_byte1_even02_mask                    (0x0000FF00)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN00_ctrl_l_byte1_even03_mask                    (0x000000FF)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN00_ctrl_l_byte1_even00(data)                   (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_L_BYTE1_EVEN00_ctrl_l_byte1_even01(data)                   (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_L_BYTE1_EVEN00_ctrl_l_byte1_even02(data)                   (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_L_BYTE1_EVEN00_ctrl_l_byte1_even03(data)                   (0x000000FF&(data))
#define  P2P_P2P_CTRL_L_BYTE1_EVEN00_get_ctrl_l_byte1_even00(data)               ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN00_get_ctrl_l_byte1_even01(data)               ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN00_get_ctrl_l_byte1_even02(data)               ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN00_get_ctrl_l_byte1_even03(data)               (0x000000FF&(data))

#define  P2P_P2P_CTRL_L_BYTE1_EVEN04                                            0x1802DD40
#define  P2P_P2P_CTRL_L_BYTE1_EVEN04_reg_addr                                    "0xB802DD40"
#define  P2P_P2P_CTRL_L_BYTE1_EVEN04_reg                                         0xB802DD40
#define  P2P_P2P_CTRL_L_BYTE1_EVEN04_inst_addr                                   "0x0010"
#define  set_P2P_P2P_CTRL_L_BYTE1_EVEN04_reg(data)                               (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE1_EVEN04_reg)=data)
#define  get_P2P_P2P_CTRL_L_BYTE1_EVEN04_reg                                     (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE1_EVEN04_reg))
#define  P2P_P2P_CTRL_L_BYTE1_EVEN04_ctrl_l_byte1_even04_shift                   (24)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN04_ctrl_l_byte1_even05_shift                   (16)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN04_ctrl_l_byte1_even06_shift                   (8)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN04_ctrl_l_byte1_even07_shift                   (0)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN04_ctrl_l_byte1_even04_mask                    (0xFF000000)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN04_ctrl_l_byte1_even05_mask                    (0x00FF0000)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN04_ctrl_l_byte1_even06_mask                    (0x0000FF00)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN04_ctrl_l_byte1_even07_mask                    (0x000000FF)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN04_ctrl_l_byte1_even04(data)                   (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_L_BYTE1_EVEN04_ctrl_l_byte1_even05(data)                   (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_L_BYTE1_EVEN04_ctrl_l_byte1_even06(data)                   (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_L_BYTE1_EVEN04_ctrl_l_byte1_even07(data)                   (0x000000FF&(data))
#define  P2P_P2P_CTRL_L_BYTE1_EVEN04_get_ctrl_l_byte1_even04(data)               ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN04_get_ctrl_l_byte1_even05(data)               ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN04_get_ctrl_l_byte1_even06(data)               ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN04_get_ctrl_l_byte1_even07(data)               (0x000000FF&(data))

#define  P2P_P2P_CTRL_L_BYTE1_EVEN08                                            0x1802DD44
#define  P2P_P2P_CTRL_L_BYTE1_EVEN08_reg_addr                                    "0xB802DD44"
#define  P2P_P2P_CTRL_L_BYTE1_EVEN08_reg                                         0xB802DD44
#define  P2P_P2P_CTRL_L_BYTE1_EVEN08_inst_addr                                   "0x0011"
#define  set_P2P_P2P_CTRL_L_BYTE1_EVEN08_reg(data)                               (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE1_EVEN08_reg)=data)
#define  get_P2P_P2P_CTRL_L_BYTE1_EVEN08_reg                                     (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE1_EVEN08_reg))
#define  P2P_P2P_CTRL_L_BYTE1_EVEN08_ctrl_l_byte1_even08_shift                   (24)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN08_ctrl_l_byte1_even09_shift                   (16)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN08_ctrl_l_byte1_even10_shift                   (8)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN08_ctrl_l_byte1_even11_shift                   (0)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN08_ctrl_l_byte1_even08_mask                    (0xFF000000)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN08_ctrl_l_byte1_even09_mask                    (0x00FF0000)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN08_ctrl_l_byte1_even10_mask                    (0x0000FF00)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN08_ctrl_l_byte1_even11_mask                    (0x000000FF)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN08_ctrl_l_byte1_even08(data)                   (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_L_BYTE1_EVEN08_ctrl_l_byte1_even09(data)                   (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_L_BYTE1_EVEN08_ctrl_l_byte1_even10(data)                   (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_L_BYTE1_EVEN08_ctrl_l_byte1_even11(data)                   (0x000000FF&(data))
#define  P2P_P2P_CTRL_L_BYTE1_EVEN08_get_ctrl_l_byte1_even08(data)               ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN08_get_ctrl_l_byte1_even09(data)               ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN08_get_ctrl_l_byte1_even10(data)               ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_L_BYTE1_EVEN08_get_ctrl_l_byte1_even11(data)               (0x000000FF&(data))

#define  P2P_P2P_CTRL_L_BYTE1_ODD00                                             0x1802DD48
#define  P2P_P2P_CTRL_L_BYTE1_ODD00_reg_addr                                     "0xB802DD48"
#define  P2P_P2P_CTRL_L_BYTE1_ODD00_reg                                          0xB802DD48
#define  P2P_P2P_CTRL_L_BYTE1_ODD00_inst_addr                                    "0x0012"
#define  set_P2P_P2P_CTRL_L_BYTE1_ODD00_reg(data)                                (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE1_ODD00_reg)=data)
#define  get_P2P_P2P_CTRL_L_BYTE1_ODD00_reg                                      (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE1_ODD00_reg))
#define  P2P_P2P_CTRL_L_BYTE1_ODD00_ctrl_l_byte1_odd00_shift                     (24)
#define  P2P_P2P_CTRL_L_BYTE1_ODD00_ctrl_l_byte1_odd01_shift                     (16)
#define  P2P_P2P_CTRL_L_BYTE1_ODD00_ctrl_l_byte1_odd02_shift                     (8)
#define  P2P_P2P_CTRL_L_BYTE1_ODD00_ctrl_l_byte1_odd03_shift                     (0)
#define  P2P_P2P_CTRL_L_BYTE1_ODD00_ctrl_l_byte1_odd00_mask                      (0xFF000000)
#define  P2P_P2P_CTRL_L_BYTE1_ODD00_ctrl_l_byte1_odd01_mask                      (0x00FF0000)
#define  P2P_P2P_CTRL_L_BYTE1_ODD00_ctrl_l_byte1_odd02_mask                      (0x0000FF00)
#define  P2P_P2P_CTRL_L_BYTE1_ODD00_ctrl_l_byte1_odd03_mask                      (0x000000FF)
#define  P2P_P2P_CTRL_L_BYTE1_ODD00_ctrl_l_byte1_odd00(data)                     (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_L_BYTE1_ODD00_ctrl_l_byte1_odd01(data)                     (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_L_BYTE1_ODD00_ctrl_l_byte1_odd02(data)                     (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_L_BYTE1_ODD00_ctrl_l_byte1_odd03(data)                     (0x000000FF&(data))
#define  P2P_P2P_CTRL_L_BYTE1_ODD00_get_ctrl_l_byte1_odd00(data)                 ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_L_BYTE1_ODD00_get_ctrl_l_byte1_odd01(data)                 ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_L_BYTE1_ODD00_get_ctrl_l_byte1_odd02(data)                 ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_L_BYTE1_ODD00_get_ctrl_l_byte1_odd03(data)                 (0x000000FF&(data))

#define  P2P_P2P_CTRL_L_BYTE1_ODD04                                             0x1802DD4C
#define  P2P_P2P_CTRL_L_BYTE1_ODD04_reg_addr                                     "0xB802DD4C"
#define  P2P_P2P_CTRL_L_BYTE1_ODD04_reg                                          0xB802DD4C
#define  P2P_P2P_CTRL_L_BYTE1_ODD04_inst_addr                                    "0x0013"
#define  set_P2P_P2P_CTRL_L_BYTE1_ODD04_reg(data)                                (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE1_ODD04_reg)=data)
#define  get_P2P_P2P_CTRL_L_BYTE1_ODD04_reg                                      (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE1_ODD04_reg))
#define  P2P_P2P_CTRL_L_BYTE1_ODD04_ctrl_l_byte1_odd04_shift                     (24)
#define  P2P_P2P_CTRL_L_BYTE1_ODD04_ctrl_l_byte1_odd05_shift                     (16)
#define  P2P_P2P_CTRL_L_BYTE1_ODD04_ctrl_l_byte1_odd06_shift                     (8)
#define  P2P_P2P_CTRL_L_BYTE1_ODD04_ctrl_l_byte1_odd07_shift                     (0)
#define  P2P_P2P_CTRL_L_BYTE1_ODD04_ctrl_l_byte1_odd04_mask                      (0xFF000000)
#define  P2P_P2P_CTRL_L_BYTE1_ODD04_ctrl_l_byte1_odd05_mask                      (0x00FF0000)
#define  P2P_P2P_CTRL_L_BYTE1_ODD04_ctrl_l_byte1_odd06_mask                      (0x0000FF00)
#define  P2P_P2P_CTRL_L_BYTE1_ODD04_ctrl_l_byte1_odd07_mask                      (0x000000FF)
#define  P2P_P2P_CTRL_L_BYTE1_ODD04_ctrl_l_byte1_odd04(data)                     (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_L_BYTE1_ODD04_ctrl_l_byte1_odd05(data)                     (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_L_BYTE1_ODD04_ctrl_l_byte1_odd06(data)                     (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_L_BYTE1_ODD04_ctrl_l_byte1_odd07(data)                     (0x000000FF&(data))
#define  P2P_P2P_CTRL_L_BYTE1_ODD04_get_ctrl_l_byte1_odd04(data)                 ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_L_BYTE1_ODD04_get_ctrl_l_byte1_odd05(data)                 ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_L_BYTE1_ODD04_get_ctrl_l_byte1_odd06(data)                 ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_L_BYTE1_ODD04_get_ctrl_l_byte1_odd07(data)                 (0x000000FF&(data))

#define  P2P_P2P_CTRL_L_BYTE1_ODD08                                             0x1802DD50
#define  P2P_P2P_CTRL_L_BYTE1_ODD08_reg_addr                                     "0xB802DD50"
#define  P2P_P2P_CTRL_L_BYTE1_ODD08_reg                                          0xB802DD50
#define  P2P_P2P_CTRL_L_BYTE1_ODD08_inst_addr                                    "0x0014"
#define  set_P2P_P2P_CTRL_L_BYTE1_ODD08_reg(data)                                (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE1_ODD08_reg)=data)
#define  get_P2P_P2P_CTRL_L_BYTE1_ODD08_reg                                      (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE1_ODD08_reg))
#define  P2P_P2P_CTRL_L_BYTE1_ODD08_ctrl_l_byte1_odd08_shift                     (24)
#define  P2P_P2P_CTRL_L_BYTE1_ODD08_ctrl_l_byte1_odd09_shift                     (16)
#define  P2P_P2P_CTRL_L_BYTE1_ODD08_ctrl_l_byte1_odd10_shift                     (8)
#define  P2P_P2P_CTRL_L_BYTE1_ODD08_ctrl_l_byte1_odd11_shift                     (0)
#define  P2P_P2P_CTRL_L_BYTE1_ODD08_ctrl_l_byte1_odd08_mask                      (0xFF000000)
#define  P2P_P2P_CTRL_L_BYTE1_ODD08_ctrl_l_byte1_odd09_mask                      (0x00FF0000)
#define  P2P_P2P_CTRL_L_BYTE1_ODD08_ctrl_l_byte1_odd10_mask                      (0x0000FF00)
#define  P2P_P2P_CTRL_L_BYTE1_ODD08_ctrl_l_byte1_odd11_mask                      (0x000000FF)
#define  P2P_P2P_CTRL_L_BYTE1_ODD08_ctrl_l_byte1_odd08(data)                     (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_L_BYTE1_ODD08_ctrl_l_byte1_odd09(data)                     (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_L_BYTE1_ODD08_ctrl_l_byte1_odd10(data)                     (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_L_BYTE1_ODD08_ctrl_l_byte1_odd11(data)                     (0x000000FF&(data))
#define  P2P_P2P_CTRL_L_BYTE1_ODD08_get_ctrl_l_byte1_odd08(data)                 ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_L_BYTE1_ODD08_get_ctrl_l_byte1_odd09(data)                 ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_L_BYTE1_ODD08_get_ctrl_l_byte1_odd10(data)                 ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_L_BYTE1_ODD08_get_ctrl_l_byte1_odd11(data)                 (0x000000FF&(data))

#define  P2P_P2P_CTRL_L_BYTE2_EVEN00                                            0x1802DD54
#define  P2P_P2P_CTRL_L_BYTE2_EVEN00_reg_addr                                    "0xB802DD54"
#define  P2P_P2P_CTRL_L_BYTE2_EVEN00_reg                                         0xB802DD54
#define  P2P_P2P_CTRL_L_BYTE2_EVEN00_inst_addr                                   "0x0015"
#define  set_P2P_P2P_CTRL_L_BYTE2_EVEN00_reg(data)                               (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE2_EVEN00_reg)=data)
#define  get_P2P_P2P_CTRL_L_BYTE2_EVEN00_reg                                     (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE2_EVEN00_reg))
#define  P2P_P2P_CTRL_L_BYTE2_EVEN00_ctrl_l_byte2_even00_shift                   (24)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN00_ctrl_l_byte2_even01_shift                   (16)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN00_ctrl_l_byte2_even02_shift                   (8)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN00_ctrl_l_byte2_even03_shift                   (0)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN00_ctrl_l_byte2_even00_mask                    (0xFF000000)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN00_ctrl_l_byte2_even01_mask                    (0x00FF0000)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN00_ctrl_l_byte2_even02_mask                    (0x0000FF00)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN00_ctrl_l_byte2_even03_mask                    (0x000000FF)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN00_ctrl_l_byte2_even00(data)                   (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_L_BYTE2_EVEN00_ctrl_l_byte2_even01(data)                   (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_L_BYTE2_EVEN00_ctrl_l_byte2_even02(data)                   (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_L_BYTE2_EVEN00_ctrl_l_byte2_even03(data)                   (0x000000FF&(data))
#define  P2P_P2P_CTRL_L_BYTE2_EVEN00_get_ctrl_l_byte2_even00(data)               ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN00_get_ctrl_l_byte2_even01(data)               ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN00_get_ctrl_l_byte2_even02(data)               ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN00_get_ctrl_l_byte2_even03(data)               (0x000000FF&(data))

#define  P2P_P2P_CTRL_L_BYTE2_EVEN04                                            0x1802DD58
#define  P2P_P2P_CTRL_L_BYTE2_EVEN04_reg_addr                                    "0xB802DD58"
#define  P2P_P2P_CTRL_L_BYTE2_EVEN04_reg                                         0xB802DD58
#define  P2P_P2P_CTRL_L_BYTE2_EVEN04_inst_addr                                   "0x0016"
#define  set_P2P_P2P_CTRL_L_BYTE2_EVEN04_reg(data)                               (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE2_EVEN04_reg)=data)
#define  get_P2P_P2P_CTRL_L_BYTE2_EVEN04_reg                                     (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE2_EVEN04_reg))
#define  P2P_P2P_CTRL_L_BYTE2_EVEN04_ctrl_l_byte2_even04_shift                   (24)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN04_ctrl_l_byte2_even05_shift                   (16)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN04_ctrl_l_byte2_even06_shift                   (8)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN04_ctrl_l_byte2_even07_shift                   (0)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN04_ctrl_l_byte2_even04_mask                    (0xFF000000)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN04_ctrl_l_byte2_even05_mask                    (0x00FF0000)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN04_ctrl_l_byte2_even06_mask                    (0x0000FF00)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN04_ctrl_l_byte2_even07_mask                    (0x000000FF)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN04_ctrl_l_byte2_even04(data)                   (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_L_BYTE2_EVEN04_ctrl_l_byte2_even05(data)                   (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_L_BYTE2_EVEN04_ctrl_l_byte2_even06(data)                   (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_L_BYTE2_EVEN04_ctrl_l_byte2_even07(data)                   (0x000000FF&(data))
#define  P2P_P2P_CTRL_L_BYTE2_EVEN04_get_ctrl_l_byte2_even04(data)               ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN04_get_ctrl_l_byte2_even05(data)               ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN04_get_ctrl_l_byte2_even06(data)               ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN04_get_ctrl_l_byte2_even07(data)               (0x000000FF&(data))

#define  P2P_P2P_CTRL_L_BYTE2_EVEN08                                            0x1802DD5C
#define  P2P_P2P_CTRL_L_BYTE2_EVEN08_reg_addr                                    "0xB802DD5C"
#define  P2P_P2P_CTRL_L_BYTE2_EVEN08_reg                                         0xB802DD5C
#define  P2P_P2P_CTRL_L_BYTE2_EVEN08_inst_addr                                   "0x0017"
#define  set_P2P_P2P_CTRL_L_BYTE2_EVEN08_reg(data)                               (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE2_EVEN08_reg)=data)
#define  get_P2P_P2P_CTRL_L_BYTE2_EVEN08_reg                                     (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE2_EVEN08_reg))
#define  P2P_P2P_CTRL_L_BYTE2_EVEN08_ctrl_l_byte2_even08_shift                   (24)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN08_ctrl_l_byte2_even09_shift                   (16)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN08_ctrl_l_byte2_even10_shift                   (8)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN08_ctrl_l_byte2_even11_shift                   (0)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN08_ctrl_l_byte2_even08_mask                    (0xFF000000)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN08_ctrl_l_byte2_even09_mask                    (0x00FF0000)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN08_ctrl_l_byte2_even10_mask                    (0x0000FF00)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN08_ctrl_l_byte2_even11_mask                    (0x000000FF)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN08_ctrl_l_byte2_even08(data)                   (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_L_BYTE2_EVEN08_ctrl_l_byte2_even09(data)                   (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_L_BYTE2_EVEN08_ctrl_l_byte2_even10(data)                   (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_L_BYTE2_EVEN08_ctrl_l_byte2_even11(data)                   (0x000000FF&(data))
#define  P2P_P2P_CTRL_L_BYTE2_EVEN08_get_ctrl_l_byte2_even08(data)               ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN08_get_ctrl_l_byte2_even09(data)               ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN08_get_ctrl_l_byte2_even10(data)               ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_L_BYTE2_EVEN08_get_ctrl_l_byte2_even11(data)               (0x000000FF&(data))

#define  P2P_P2P_CTRL_L_BYTE2_ODD00                                             0x1802DD60
#define  P2P_P2P_CTRL_L_BYTE2_ODD00_reg_addr                                     "0xB802DD60"
#define  P2P_P2P_CTRL_L_BYTE2_ODD00_reg                                          0xB802DD60
#define  P2P_P2P_CTRL_L_BYTE2_ODD00_inst_addr                                    "0x0018"
#define  set_P2P_P2P_CTRL_L_BYTE2_ODD00_reg(data)                                (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE2_ODD00_reg)=data)
#define  get_P2P_P2P_CTRL_L_BYTE2_ODD00_reg                                      (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE2_ODD00_reg))
#define  P2P_P2P_CTRL_L_BYTE2_ODD00_ctrl_l_byte2_odd00_shift                     (24)
#define  P2P_P2P_CTRL_L_BYTE2_ODD00_ctrl_l_byte2_odd01_shift                     (16)
#define  P2P_P2P_CTRL_L_BYTE2_ODD00_ctrl_l_byte2_odd02_shift                     (8)
#define  P2P_P2P_CTRL_L_BYTE2_ODD00_ctrl_l_byte2_odd03_shift                     (0)
#define  P2P_P2P_CTRL_L_BYTE2_ODD00_ctrl_l_byte2_odd00_mask                      (0xFF000000)
#define  P2P_P2P_CTRL_L_BYTE2_ODD00_ctrl_l_byte2_odd01_mask                      (0x00FF0000)
#define  P2P_P2P_CTRL_L_BYTE2_ODD00_ctrl_l_byte2_odd02_mask                      (0x0000FF00)
#define  P2P_P2P_CTRL_L_BYTE2_ODD00_ctrl_l_byte2_odd03_mask                      (0x000000FF)
#define  P2P_P2P_CTRL_L_BYTE2_ODD00_ctrl_l_byte2_odd00(data)                     (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_L_BYTE2_ODD00_ctrl_l_byte2_odd01(data)                     (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_L_BYTE2_ODD00_ctrl_l_byte2_odd02(data)                     (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_L_BYTE2_ODD00_ctrl_l_byte2_odd03(data)                     (0x000000FF&(data))
#define  P2P_P2P_CTRL_L_BYTE2_ODD00_get_ctrl_l_byte2_odd00(data)                 ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_L_BYTE2_ODD00_get_ctrl_l_byte2_odd01(data)                 ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_L_BYTE2_ODD00_get_ctrl_l_byte2_odd02(data)                 ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_L_BYTE2_ODD00_get_ctrl_l_byte2_odd03(data)                 (0x000000FF&(data))

#define  P2P_P2P_CTRL_L_BYTE2_ODD04                                             0x1802DD64
#define  P2P_P2P_CTRL_L_BYTE2_ODD04_reg_addr                                     "0xB802DD64"
#define  P2P_P2P_CTRL_L_BYTE2_ODD04_reg                                          0xB802DD64
#define  P2P_P2P_CTRL_L_BYTE2_ODD04_inst_addr                                    "0x0019"
#define  set_P2P_P2P_CTRL_L_BYTE2_ODD04_reg(data)                                (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE2_ODD04_reg)=data)
#define  get_P2P_P2P_CTRL_L_BYTE2_ODD04_reg                                      (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE2_ODD04_reg))
#define  P2P_P2P_CTRL_L_BYTE2_ODD04_ctrl_l_byte2_odd04_shift                     (24)
#define  P2P_P2P_CTRL_L_BYTE2_ODD04_ctrl_l_byte2_odd05_shift                     (16)
#define  P2P_P2P_CTRL_L_BYTE2_ODD04_ctrl_l_byte2_odd06_shift                     (8)
#define  P2P_P2P_CTRL_L_BYTE2_ODD04_ctrl_l_byte2_odd07_shift                     (0)
#define  P2P_P2P_CTRL_L_BYTE2_ODD04_ctrl_l_byte2_odd04_mask                      (0xFF000000)
#define  P2P_P2P_CTRL_L_BYTE2_ODD04_ctrl_l_byte2_odd05_mask                      (0x00FF0000)
#define  P2P_P2P_CTRL_L_BYTE2_ODD04_ctrl_l_byte2_odd06_mask                      (0x0000FF00)
#define  P2P_P2P_CTRL_L_BYTE2_ODD04_ctrl_l_byte2_odd07_mask                      (0x000000FF)
#define  P2P_P2P_CTRL_L_BYTE2_ODD04_ctrl_l_byte2_odd04(data)                     (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_L_BYTE2_ODD04_ctrl_l_byte2_odd05(data)                     (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_L_BYTE2_ODD04_ctrl_l_byte2_odd06(data)                     (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_L_BYTE2_ODD04_ctrl_l_byte2_odd07(data)                     (0x000000FF&(data))
#define  P2P_P2P_CTRL_L_BYTE2_ODD04_get_ctrl_l_byte2_odd04(data)                 ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_L_BYTE2_ODD04_get_ctrl_l_byte2_odd05(data)                 ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_L_BYTE2_ODD04_get_ctrl_l_byte2_odd06(data)                 ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_L_BYTE2_ODD04_get_ctrl_l_byte2_odd07(data)                 (0x000000FF&(data))

#define  P2P_P2P_CTRL_L_BYTE2_ODD08                                             0x1802DD68
#define  P2P_P2P_CTRL_L_BYTE2_ODD08_reg_addr                                     "0xB802DD68"
#define  P2P_P2P_CTRL_L_BYTE2_ODD08_reg                                          0xB802DD68
#define  P2P_P2P_CTRL_L_BYTE2_ODD08_inst_addr                                    "0x001A"
#define  set_P2P_P2P_CTRL_L_BYTE2_ODD08_reg(data)                                (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE2_ODD08_reg)=data)
#define  get_P2P_P2P_CTRL_L_BYTE2_ODD08_reg                                      (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE2_ODD08_reg))
#define  P2P_P2P_CTRL_L_BYTE2_ODD08_ctrl_l_byte2_odd08_shift                     (24)
#define  P2P_P2P_CTRL_L_BYTE2_ODD08_ctrl_l_byte2_odd09_shift                     (16)
#define  P2P_P2P_CTRL_L_BYTE2_ODD08_ctrl_l_byte2_odd10_shift                     (8)
#define  P2P_P2P_CTRL_L_BYTE2_ODD08_ctrl_l_byte2_odd11_shift                     (0)
#define  P2P_P2P_CTRL_L_BYTE2_ODD08_ctrl_l_byte2_odd08_mask                      (0xFF000000)
#define  P2P_P2P_CTRL_L_BYTE2_ODD08_ctrl_l_byte2_odd09_mask                      (0x00FF0000)
#define  P2P_P2P_CTRL_L_BYTE2_ODD08_ctrl_l_byte2_odd10_mask                      (0x0000FF00)
#define  P2P_P2P_CTRL_L_BYTE2_ODD08_ctrl_l_byte2_odd11_mask                      (0x000000FF)
#define  P2P_P2P_CTRL_L_BYTE2_ODD08_ctrl_l_byte2_odd08(data)                     (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_L_BYTE2_ODD08_ctrl_l_byte2_odd09(data)                     (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_L_BYTE2_ODD08_ctrl_l_byte2_odd10(data)                     (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_L_BYTE2_ODD08_ctrl_l_byte2_odd11(data)                     (0x000000FF&(data))
#define  P2P_P2P_CTRL_L_BYTE2_ODD08_get_ctrl_l_byte2_odd08(data)                 ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_L_BYTE2_ODD08_get_ctrl_l_byte2_odd09(data)                 ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_L_BYTE2_ODD08_get_ctrl_l_byte2_odd10(data)                 ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_L_BYTE2_ODD08_get_ctrl_l_byte2_odd11(data)                 (0x000000FF&(data))

#define  P2P_P2P_CTRL_L_BYTE3_00                                                0x1802DD6C
#define  P2P_P2P_CTRL_L_BYTE3_00_reg_addr                                        "0xB802DD6C"
#define  P2P_P2P_CTRL_L_BYTE3_00_reg                                             0xB802DD6C
#define  P2P_P2P_CTRL_L_BYTE3_00_inst_addr                                       "0x001B"
#define  set_P2P_P2P_CTRL_L_BYTE3_00_reg(data)                                   (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE3_00_reg)=data)
#define  get_P2P_P2P_CTRL_L_BYTE3_00_reg                                         (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE3_00_reg))
#define  P2P_P2P_CTRL_L_BYTE3_00_ctrl_l_byte3_00_shift                           (24)
#define  P2P_P2P_CTRL_L_BYTE3_00_ctrl_l_byte3_01_shift                           (16)
#define  P2P_P2P_CTRL_L_BYTE3_00_ctrl_l_byte3_02_shift                           (8)
#define  P2P_P2P_CTRL_L_BYTE3_00_ctrl_l_byte3_03_shift                           (0)
#define  P2P_P2P_CTRL_L_BYTE3_00_ctrl_l_byte3_00_mask                            (0xFF000000)
#define  P2P_P2P_CTRL_L_BYTE3_00_ctrl_l_byte3_01_mask                            (0x00FF0000)
#define  P2P_P2P_CTRL_L_BYTE3_00_ctrl_l_byte3_02_mask                            (0x0000FF00)
#define  P2P_P2P_CTRL_L_BYTE3_00_ctrl_l_byte3_03_mask                            (0x000000FF)
#define  P2P_P2P_CTRL_L_BYTE3_00_ctrl_l_byte3_00(data)                           (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_L_BYTE3_00_ctrl_l_byte3_01(data)                           (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_L_BYTE3_00_ctrl_l_byte3_02(data)                           (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_L_BYTE3_00_ctrl_l_byte3_03(data)                           (0x000000FF&(data))
#define  P2P_P2P_CTRL_L_BYTE3_00_get_ctrl_l_byte3_00(data)                       ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_L_BYTE3_00_get_ctrl_l_byte3_01(data)                       ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_L_BYTE3_00_get_ctrl_l_byte3_02(data)                       ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_L_BYTE3_00_get_ctrl_l_byte3_03(data)                       (0x000000FF&(data))

#define  P2P_P2P_CTRL_L_BYTE3_04                                                0x1802DD70
#define  P2P_P2P_CTRL_L_BYTE3_04_reg_addr                                        "0xB802DD70"
#define  P2P_P2P_CTRL_L_BYTE3_04_reg                                             0xB802DD70
#define  P2P_P2P_CTRL_L_BYTE3_04_inst_addr                                       "0x001C"
#define  set_P2P_P2P_CTRL_L_BYTE3_04_reg(data)                                   (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE3_04_reg)=data)
#define  get_P2P_P2P_CTRL_L_BYTE3_04_reg                                         (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE3_04_reg))
#define  P2P_P2P_CTRL_L_BYTE3_04_ctrl_l_byte3_04_shift                           (24)
#define  P2P_P2P_CTRL_L_BYTE3_04_ctrl_l_byte3_05_shift                           (16)
#define  P2P_P2P_CTRL_L_BYTE3_04_ctrl_l_byte3_06_shift                           (8)
#define  P2P_P2P_CTRL_L_BYTE3_04_ctrl_l_byte3_07_shift                           (0)
#define  P2P_P2P_CTRL_L_BYTE3_04_ctrl_l_byte3_04_mask                            (0xFF000000)
#define  P2P_P2P_CTRL_L_BYTE3_04_ctrl_l_byte3_05_mask                            (0x00FF0000)
#define  P2P_P2P_CTRL_L_BYTE3_04_ctrl_l_byte3_06_mask                            (0x0000FF00)
#define  P2P_P2P_CTRL_L_BYTE3_04_ctrl_l_byte3_07_mask                            (0x000000FF)
#define  P2P_P2P_CTRL_L_BYTE3_04_ctrl_l_byte3_04(data)                           (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_L_BYTE3_04_ctrl_l_byte3_05(data)                           (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_L_BYTE3_04_ctrl_l_byte3_06(data)                           (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_L_BYTE3_04_ctrl_l_byte3_07(data)                           (0x000000FF&(data))
#define  P2P_P2P_CTRL_L_BYTE3_04_get_ctrl_l_byte3_04(data)                       ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_L_BYTE3_04_get_ctrl_l_byte3_05(data)                       ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_L_BYTE3_04_get_ctrl_l_byte3_06(data)                       ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_L_BYTE3_04_get_ctrl_l_byte3_07(data)                       (0x000000FF&(data))

#define  P2P_P2P_CTRL_L_BYTE3_08                                                0x1802DD74
#define  P2P_P2P_CTRL_L_BYTE3_08_reg_addr                                        "0xB802DD74"
#define  P2P_P2P_CTRL_L_BYTE3_08_reg                                             0xB802DD74
#define  P2P_P2P_CTRL_L_BYTE3_08_inst_addr                                       "0x001D"
#define  set_P2P_P2P_CTRL_L_BYTE3_08_reg(data)                                   (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE3_08_reg)=data)
#define  get_P2P_P2P_CTRL_L_BYTE3_08_reg                                         (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE3_08_reg))
#define  P2P_P2P_CTRL_L_BYTE3_08_ctrl_l_byte3_08_shift                           (24)
#define  P2P_P2P_CTRL_L_BYTE3_08_ctrl_l_byte3_09_shift                           (16)
#define  P2P_P2P_CTRL_L_BYTE3_08_ctrl_l_byte3_10_shift                           (8)
#define  P2P_P2P_CTRL_L_BYTE3_08_ctrl_l_byte3_11_shift                           (0)
#define  P2P_P2P_CTRL_L_BYTE3_08_ctrl_l_byte3_08_mask                            (0xFF000000)
#define  P2P_P2P_CTRL_L_BYTE3_08_ctrl_l_byte3_09_mask                            (0x00FF0000)
#define  P2P_P2P_CTRL_L_BYTE3_08_ctrl_l_byte3_10_mask                            (0x0000FF00)
#define  P2P_P2P_CTRL_L_BYTE3_08_ctrl_l_byte3_11_mask                            (0x000000FF)
#define  P2P_P2P_CTRL_L_BYTE3_08_ctrl_l_byte3_08(data)                           (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_L_BYTE3_08_ctrl_l_byte3_09(data)                           (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_L_BYTE3_08_ctrl_l_byte3_10(data)                           (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_L_BYTE3_08_ctrl_l_byte3_11(data)                           (0x000000FF&(data))
#define  P2P_P2P_CTRL_L_BYTE3_08_get_ctrl_l_byte3_08(data)                       ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_L_BYTE3_08_get_ctrl_l_byte3_09(data)                       ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_L_BYTE3_08_get_ctrl_l_byte3_10(data)                       ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_L_BYTE3_08_get_ctrl_l_byte3_11(data)                       (0x000000FF&(data))

#define  P2P_P2P_CTRL_L_BYTE4_00                                                0x1802DD78
#define  P2P_P2P_CTRL_L_BYTE4_00_reg_addr                                        "0xB802DD78"
#define  P2P_P2P_CTRL_L_BYTE4_00_reg                                             0xB802DD78
#define  P2P_P2P_CTRL_L_BYTE4_00_inst_addr                                       "0x001E"
#define  set_P2P_P2P_CTRL_L_BYTE4_00_reg(data)                                   (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE4_00_reg)=data)
#define  get_P2P_P2P_CTRL_L_BYTE4_00_reg                                         (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE4_00_reg))
#define  P2P_P2P_CTRL_L_BYTE4_00_ctrl_l_byte4_00_shift                           (24)
#define  P2P_P2P_CTRL_L_BYTE4_00_ctrl_l_byte4_01_shift                           (16)
#define  P2P_P2P_CTRL_L_BYTE4_00_ctrl_l_byte4_02_shift                           (8)
#define  P2P_P2P_CTRL_L_BYTE4_00_ctrl_l_byte4_03_shift                           (0)
#define  P2P_P2P_CTRL_L_BYTE4_00_ctrl_l_byte4_00_mask                            (0xFF000000)
#define  P2P_P2P_CTRL_L_BYTE4_00_ctrl_l_byte4_01_mask                            (0x00FF0000)
#define  P2P_P2P_CTRL_L_BYTE4_00_ctrl_l_byte4_02_mask                            (0x0000FF00)
#define  P2P_P2P_CTRL_L_BYTE4_00_ctrl_l_byte4_03_mask                            (0x000000FF)
#define  P2P_P2P_CTRL_L_BYTE4_00_ctrl_l_byte4_00(data)                           (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_L_BYTE4_00_ctrl_l_byte4_01(data)                           (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_L_BYTE4_00_ctrl_l_byte4_02(data)                           (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_L_BYTE4_00_ctrl_l_byte4_03(data)                           (0x000000FF&(data))
#define  P2P_P2P_CTRL_L_BYTE4_00_get_ctrl_l_byte4_00(data)                       ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_L_BYTE4_00_get_ctrl_l_byte4_01(data)                       ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_L_BYTE4_00_get_ctrl_l_byte4_02(data)                       ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_L_BYTE4_00_get_ctrl_l_byte4_03(data)                       (0x000000FF&(data))

#define  P2P_P2P_CTRL_L_BYTE4_04                                                0x1802DD7C
#define  P2P_P2P_CTRL_L_BYTE4_04_reg_addr                                        "0xB802DD7C"
#define  P2P_P2P_CTRL_L_BYTE4_04_reg                                             0xB802DD7C
#define  P2P_P2P_CTRL_L_BYTE4_04_inst_addr                                       "0x001F"
#define  set_P2P_P2P_CTRL_L_BYTE4_04_reg(data)                                   (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE4_04_reg)=data)
#define  get_P2P_P2P_CTRL_L_BYTE4_04_reg                                         (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE4_04_reg))
#define  P2P_P2P_CTRL_L_BYTE4_04_ctrl_l_byte4_04_shift                           (24)
#define  P2P_P2P_CTRL_L_BYTE4_04_ctrl_l_byte4_05_shift                           (16)
#define  P2P_P2P_CTRL_L_BYTE4_04_ctrl_l_byte4_06_shift                           (8)
#define  P2P_P2P_CTRL_L_BYTE4_04_ctrl_l_byte4_07_shift                           (0)
#define  P2P_P2P_CTRL_L_BYTE4_04_ctrl_l_byte4_04_mask                            (0xFF000000)
#define  P2P_P2P_CTRL_L_BYTE4_04_ctrl_l_byte4_05_mask                            (0x00FF0000)
#define  P2P_P2P_CTRL_L_BYTE4_04_ctrl_l_byte4_06_mask                            (0x0000FF00)
#define  P2P_P2P_CTRL_L_BYTE4_04_ctrl_l_byte4_07_mask                            (0x000000FF)
#define  P2P_P2P_CTRL_L_BYTE4_04_ctrl_l_byte4_04(data)                           (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_L_BYTE4_04_ctrl_l_byte4_05(data)                           (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_L_BYTE4_04_ctrl_l_byte4_06(data)                           (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_L_BYTE4_04_ctrl_l_byte4_07(data)                           (0x000000FF&(data))
#define  P2P_P2P_CTRL_L_BYTE4_04_get_ctrl_l_byte4_04(data)                       ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_L_BYTE4_04_get_ctrl_l_byte4_05(data)                       ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_L_BYTE4_04_get_ctrl_l_byte4_06(data)                       ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_L_BYTE4_04_get_ctrl_l_byte4_07(data)                       (0x000000FF&(data))

#define  P2P_P2P_CTRL_L_BYTE4_08                                                0x1802DD80
#define  P2P_P2P_CTRL_L_BYTE4_08_reg_addr                                        "0xB802DD80"
#define  P2P_P2P_CTRL_L_BYTE4_08_reg                                             0xB802DD80
#define  P2P_P2P_CTRL_L_BYTE4_08_inst_addr                                       "0x0020"
#define  set_P2P_P2P_CTRL_L_BYTE4_08_reg(data)                                   (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE4_08_reg)=data)
#define  get_P2P_P2P_CTRL_L_BYTE4_08_reg                                         (*((volatile unsigned int*)P2P_P2P_CTRL_L_BYTE4_08_reg))
#define  P2P_P2P_CTRL_L_BYTE4_08_ctrl_l_byte4_08_shift                           (24)
#define  P2P_P2P_CTRL_L_BYTE4_08_ctrl_l_byte4_09_shift                           (16)
#define  P2P_P2P_CTRL_L_BYTE4_08_ctrl_l_byte4_10_shift                           (8)
#define  P2P_P2P_CTRL_L_BYTE4_08_ctrl_l_byte4_11_shift                           (0)
#define  P2P_P2P_CTRL_L_BYTE4_08_ctrl_l_byte4_08_mask                            (0xFF000000)
#define  P2P_P2P_CTRL_L_BYTE4_08_ctrl_l_byte4_09_mask                            (0x00FF0000)
#define  P2P_P2P_CTRL_L_BYTE4_08_ctrl_l_byte4_10_mask                            (0x0000FF00)
#define  P2P_P2P_CTRL_L_BYTE4_08_ctrl_l_byte4_11_mask                            (0x000000FF)
#define  P2P_P2P_CTRL_L_BYTE4_08_ctrl_l_byte4_08(data)                           (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_L_BYTE4_08_ctrl_l_byte4_09(data)                           (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_L_BYTE4_08_ctrl_l_byte4_10(data)                           (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_L_BYTE4_08_ctrl_l_byte4_11(data)                           (0x000000FF&(data))
#define  P2P_P2P_CTRL_L_BYTE4_08_get_ctrl_l_byte4_08(data)                       ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_L_BYTE4_08_get_ctrl_l_byte4_09(data)                       ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_L_BYTE4_08_get_ctrl_l_byte4_10(data)                       ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_L_BYTE4_08_get_ctrl_l_byte4_11(data)                       (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE00                                                  0x1802DD84
#define  P2P_P2P_CTRL_F_BYTE00_reg_addr                                          "0xB802DD84"
#define  P2P_P2P_CTRL_F_BYTE00_reg                                               0xB802DD84
#define  P2P_P2P_CTRL_F_BYTE00_inst_addr                                         "0x0021"
#define  set_P2P_P2P_CTRL_F_BYTE00_reg(data)                                     (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE00_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE00_reg                                           (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE00_reg))
#define  P2P_P2P_CTRL_F_BYTE00_ctrl_f_byte00_shift                               (24)
#define  P2P_P2P_CTRL_F_BYTE00_ctrl_f_byte01_shift                               (16)
#define  P2P_P2P_CTRL_F_BYTE00_ctrl_f_byte02_shift                               (8)
#define  P2P_P2P_CTRL_F_BYTE00_ctrl_f_byte03_shift                               (0)
#define  P2P_P2P_CTRL_F_BYTE00_ctrl_f_byte00_mask                                (0xFF000000)
#define  P2P_P2P_CTRL_F_BYTE00_ctrl_f_byte01_mask                                (0x00FF0000)
#define  P2P_P2P_CTRL_F_BYTE00_ctrl_f_byte02_mask                                (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE00_ctrl_f_byte03_mask                                (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE00_ctrl_f_byte00(data)                               (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_F_BYTE00_ctrl_f_byte01(data)                               (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_F_BYTE00_ctrl_f_byte02(data)                               (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE00_ctrl_f_byte03(data)                               (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE00_get_ctrl_f_byte00(data)                           ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_F_BYTE00_get_ctrl_f_byte01(data)                           ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_F_BYTE00_get_ctrl_f_byte02(data)                           ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE00_get_ctrl_f_byte03(data)                           (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE04                                                  0x1802DD88
#define  P2P_P2P_CTRL_F_BYTE04_reg_addr                                          "0xB802DD88"
#define  P2P_P2P_CTRL_F_BYTE04_reg                                               0xB802DD88
#define  P2P_P2P_CTRL_F_BYTE04_inst_addr                                         "0x0022"
#define  set_P2P_P2P_CTRL_F_BYTE04_reg(data)                                     (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE04_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE04_reg                                           (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE04_reg))
#define  P2P_P2P_CTRL_F_BYTE04_ctrl_f_byte04_shift                               (24)
#define  P2P_P2P_CTRL_F_BYTE04_ctrl_f_byte05_shift                               (16)
#define  P2P_P2P_CTRL_F_BYTE04_ctrl_f_byte06_shift                               (8)
#define  P2P_P2P_CTRL_F_BYTE04_ctrl_f_byte07_shift                               (0)
#define  P2P_P2P_CTRL_F_BYTE04_ctrl_f_byte04_mask                                (0xFF000000)
#define  P2P_P2P_CTRL_F_BYTE04_ctrl_f_byte05_mask                                (0x00FF0000)
#define  P2P_P2P_CTRL_F_BYTE04_ctrl_f_byte06_mask                                (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE04_ctrl_f_byte07_mask                                (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE04_ctrl_f_byte04(data)                               (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_F_BYTE04_ctrl_f_byte05(data)                               (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_F_BYTE04_ctrl_f_byte06(data)                               (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE04_ctrl_f_byte07(data)                               (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE04_get_ctrl_f_byte04(data)                           ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_F_BYTE04_get_ctrl_f_byte05(data)                           ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_F_BYTE04_get_ctrl_f_byte06(data)                           ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE04_get_ctrl_f_byte07(data)                           (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE08                                                  0x1802DD8C
#define  P2P_P2P_CTRL_F_BYTE08_reg_addr                                          "0xB802DD8C"
#define  P2P_P2P_CTRL_F_BYTE08_reg                                               0xB802DD8C
#define  P2P_P2P_CTRL_F_BYTE08_inst_addr                                         "0x0023"
#define  set_P2P_P2P_CTRL_F_BYTE08_reg(data)                                     (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE08_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE08_reg                                           (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE08_reg))
#define  P2P_P2P_CTRL_F_BYTE08_ctrl_f_byte08_shift                               (24)
#define  P2P_P2P_CTRL_F_BYTE08_ctrl_f_byte09_shift                               (16)
#define  P2P_P2P_CTRL_F_BYTE08_ctrl_f_byte10_shift                               (8)
#define  P2P_P2P_CTRL_F_BYTE08_ctrl_f_byte11_shift                               (0)
#define  P2P_P2P_CTRL_F_BYTE08_ctrl_f_byte08_mask                                (0xFF000000)
#define  P2P_P2P_CTRL_F_BYTE08_ctrl_f_byte09_mask                                (0x00FF0000)
#define  P2P_P2P_CTRL_F_BYTE08_ctrl_f_byte10_mask                                (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE08_ctrl_f_byte11_mask                                (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE08_ctrl_f_byte08(data)                               (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_F_BYTE08_ctrl_f_byte09(data)                               (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_F_BYTE08_ctrl_f_byte10(data)                               (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE08_ctrl_f_byte11(data)                               (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE08_get_ctrl_f_byte08(data)                           ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_F_BYTE08_get_ctrl_f_byte09(data)                           ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_F_BYTE08_get_ctrl_f_byte10(data)                           ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE08_get_ctrl_f_byte11(data)                           (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE12                                                  0x1802DD90
#define  P2P_P2P_CTRL_F_BYTE12_reg_addr                                          "0xB802DD90"
#define  P2P_P2P_CTRL_F_BYTE12_reg                                               0xB802DD90
#define  P2P_P2P_CTRL_F_BYTE12_inst_addr                                         "0x0024"
#define  set_P2P_P2P_CTRL_F_BYTE12_reg(data)                                     (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE12_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE12_reg                                           (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE12_reg))
#define  P2P_P2P_CTRL_F_BYTE12_ctrl_f_byte12_shift                               (24)
#define  P2P_P2P_CTRL_F_BYTE12_ctrl_f_byte13_shift                               (16)
#define  P2P_P2P_CTRL_F_BYTE12_ctrl_f_byte14_shift                               (8)
#define  P2P_P2P_CTRL_F_BYTE12_ctrl_f_byte15_shift                               (0)
#define  P2P_P2P_CTRL_F_BYTE12_ctrl_f_byte12_mask                                (0xFF000000)
#define  P2P_P2P_CTRL_F_BYTE12_ctrl_f_byte13_mask                                (0x00FF0000)
#define  P2P_P2P_CTRL_F_BYTE12_ctrl_f_byte14_mask                                (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE12_ctrl_f_byte15_mask                                (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE12_ctrl_f_byte12(data)                               (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_F_BYTE12_ctrl_f_byte13(data)                               (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_F_BYTE12_ctrl_f_byte14(data)                               (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE12_ctrl_f_byte15(data)                               (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE12_get_ctrl_f_byte12(data)                           ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_F_BYTE12_get_ctrl_f_byte13(data)                           ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_F_BYTE12_get_ctrl_f_byte14(data)                           ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE12_get_ctrl_f_byte15(data)                           (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE16                                                  0x1802DD94
#define  P2P_P2P_CTRL_F_BYTE16_reg_addr                                          "0xB802DD94"
#define  P2P_P2P_CTRL_F_BYTE16_reg                                               0xB802DD94
#define  P2P_P2P_CTRL_F_BYTE16_inst_addr                                         "0x0025"
#define  set_P2P_P2P_CTRL_F_BYTE16_reg(data)                                     (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE16_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE16_reg                                           (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE16_reg))
#define  P2P_P2P_CTRL_F_BYTE16_ctrl_f_byte16_shift                               (24)
#define  P2P_P2P_CTRL_F_BYTE16_ctrl_f_byte17_shift                               (16)
#define  P2P_P2P_CTRL_F_BYTE16_ctrl_f_byte18_shift                               (8)
#define  P2P_P2P_CTRL_F_BYTE16_ctrl_f_byte19_shift                               (0)
#define  P2P_P2P_CTRL_F_BYTE16_ctrl_f_byte16_mask                                (0xFF000000)
#define  P2P_P2P_CTRL_F_BYTE16_ctrl_f_byte17_mask                                (0x00FF0000)
#define  P2P_P2P_CTRL_F_BYTE16_ctrl_f_byte18_mask                                (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE16_ctrl_f_byte19_mask                                (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE16_ctrl_f_byte16(data)                               (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_F_BYTE16_ctrl_f_byte17(data)                               (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_F_BYTE16_ctrl_f_byte18(data)                               (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE16_ctrl_f_byte19(data)                               (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE16_get_ctrl_f_byte16(data)                           ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_F_BYTE16_get_ctrl_f_byte17(data)                           ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_F_BYTE16_get_ctrl_f_byte18(data)                           ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE16_get_ctrl_f_byte19(data)                           (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE20                                                  0x1802DD98
#define  P2P_P2P_CTRL_F_BYTE20_reg_addr                                          "0xB802DD98"
#define  P2P_P2P_CTRL_F_BYTE20_reg                                               0xB802DD98
#define  P2P_P2P_CTRL_F_BYTE20_inst_addr                                         "0x0026"
#define  set_P2P_P2P_CTRL_F_BYTE20_reg(data)                                     (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE20_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE20_reg                                           (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE20_reg))
#define  P2P_P2P_CTRL_F_BYTE20_ctrl_f_byte20_shift                               (24)
#define  P2P_P2P_CTRL_F_BYTE20_ctrl_f_byte21_shift                               (16)
#define  P2P_P2P_CTRL_F_BYTE20_ctrl_f_byte22_shift                               (8)
#define  P2P_P2P_CTRL_F_BYTE20_ctrl_f_byte23_shift                               (0)
#define  P2P_P2P_CTRL_F_BYTE20_ctrl_f_byte20_mask                                (0xFF000000)
#define  P2P_P2P_CTRL_F_BYTE20_ctrl_f_byte21_mask                                (0x00FF0000)
#define  P2P_P2P_CTRL_F_BYTE20_ctrl_f_byte22_mask                                (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE20_ctrl_f_byte23_mask                                (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE20_ctrl_f_byte20(data)                               (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_F_BYTE20_ctrl_f_byte21(data)                               (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_F_BYTE20_ctrl_f_byte22(data)                               (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE20_ctrl_f_byte23(data)                               (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE20_get_ctrl_f_byte20(data)                           ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_F_BYTE20_get_ctrl_f_byte21(data)                           ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_F_BYTE20_get_ctrl_f_byte22(data)                           ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE20_get_ctrl_f_byte23(data)                           (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE24                                                  0x1802DD9C
#define  P2P_P2P_CTRL_F_BYTE24_reg_addr                                          "0xB802DD9C"
#define  P2P_P2P_CTRL_F_BYTE24_reg                                               0xB802DD9C
#define  P2P_P2P_CTRL_F_BYTE24_inst_addr                                         "0x0027"
#define  set_P2P_P2P_CTRL_F_BYTE24_reg(data)                                     (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE24_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE24_reg                                           (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE24_reg))
#define  P2P_P2P_CTRL_F_BYTE24_ctrl_f_byte24_shift                               (24)
#define  P2P_P2P_CTRL_F_BYTE24_ctrl_f_byte25_shift                               (16)
#define  P2P_P2P_CTRL_F_BYTE24_ctrl_f_byte26_shift                               (8)
#define  P2P_P2P_CTRL_F_BYTE24_ctrl_f_byte27_shift                               (0)
#define  P2P_P2P_CTRL_F_BYTE24_ctrl_f_byte24_mask                                (0xFF000000)
#define  P2P_P2P_CTRL_F_BYTE24_ctrl_f_byte25_mask                                (0x00FF0000)
#define  P2P_P2P_CTRL_F_BYTE24_ctrl_f_byte26_mask                                (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE24_ctrl_f_byte27_mask                                (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE24_ctrl_f_byte24(data)                               (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_F_BYTE24_ctrl_f_byte25(data)                               (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_F_BYTE24_ctrl_f_byte26(data)                               (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE24_ctrl_f_byte27(data)                               (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE24_get_ctrl_f_byte24(data)                           ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_F_BYTE24_get_ctrl_f_byte25(data)                           ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_F_BYTE24_get_ctrl_f_byte26(data)                           ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE24_get_ctrl_f_byte27(data)                           (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE28                                                  0x1802DDA0
#define  P2P_P2P_CTRL_F_BYTE28_reg_addr                                          "0xB802DDA0"
#define  P2P_P2P_CTRL_F_BYTE28_reg                                               0xB802DDA0
#define  P2P_P2P_CTRL_F_BYTE28_inst_addr                                         "0x0028"
#define  set_P2P_P2P_CTRL_F_BYTE28_reg(data)                                     (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE28_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE28_reg                                           (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE28_reg))
#define  P2P_P2P_CTRL_F_BYTE28_ctrl_f_byte28_shift                               (24)
#define  P2P_P2P_CTRL_F_BYTE28_ctrl_f_byte29_shift                               (16)
#define  P2P_P2P_CTRL_F_BYTE28_ctrl_f_byte30_shift                               (8)
#define  P2P_P2P_CTRL_F_BYTE28_ctrl_f_byte31_shift                               (0)
#define  P2P_P2P_CTRL_F_BYTE28_ctrl_f_byte28_mask                                (0xFF000000)
#define  P2P_P2P_CTRL_F_BYTE28_ctrl_f_byte29_mask                                (0x00FF0000)
#define  P2P_P2P_CTRL_F_BYTE28_ctrl_f_byte30_mask                                (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE28_ctrl_f_byte31_mask                                (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE28_ctrl_f_byte28(data)                               (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_F_BYTE28_ctrl_f_byte29(data)                               (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_F_BYTE28_ctrl_f_byte30(data)                               (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE28_ctrl_f_byte31(data)                               (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE28_get_ctrl_f_byte28(data)                           ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_F_BYTE28_get_ctrl_f_byte29(data)                           ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_F_BYTE28_get_ctrl_f_byte30(data)                           ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE28_get_ctrl_f_byte31(data)                           (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE32                                                  0x1802DDA4
#define  P2P_P2P_CTRL_F_BYTE32_reg_addr                                          "0xB802DDA4"
#define  P2P_P2P_CTRL_F_BYTE32_reg                                               0xB802DDA4
#define  P2P_P2P_CTRL_F_BYTE32_inst_addr                                         "0x0029"
#define  set_P2P_P2P_CTRL_F_BYTE32_reg(data)                                     (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE32_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE32_reg                                           (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE32_reg))
#define  P2P_P2P_CTRL_F_BYTE32_ctrl_f_byte32_shift                               (24)
#define  P2P_P2P_CTRL_F_BYTE32_ctrl_f_byte33_shift                               (16)
#define  P2P_P2P_CTRL_F_BYTE32_ctrl_f_byte34_shift                               (8)
#define  P2P_P2P_CTRL_F_BYTE32_ctrl_f_byte35_shift                               (0)
#define  P2P_P2P_CTRL_F_BYTE32_ctrl_f_byte32_mask                                (0xFF000000)
#define  P2P_P2P_CTRL_F_BYTE32_ctrl_f_byte33_mask                                (0x00FF0000)
#define  P2P_P2P_CTRL_F_BYTE32_ctrl_f_byte34_mask                                (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE32_ctrl_f_byte35_mask                                (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE32_ctrl_f_byte32(data)                               (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_F_BYTE32_ctrl_f_byte33(data)                               (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_F_BYTE32_ctrl_f_byte34(data)                               (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE32_ctrl_f_byte35(data)                               (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE32_get_ctrl_f_byte32(data)                           ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_F_BYTE32_get_ctrl_f_byte33(data)                           ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_F_BYTE32_get_ctrl_f_byte34(data)                           ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE32_get_ctrl_f_byte35(data)                           (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE36                                                  0x1802DDA8
#define  P2P_P2P_CTRL_F_BYTE36_reg_addr                                          "0xB802DDA8"
#define  P2P_P2P_CTRL_F_BYTE36_reg                                               0xB802DDA8
#define  P2P_P2P_CTRL_F_BYTE36_inst_addr                                         "0x002A"
#define  set_P2P_P2P_CTRL_F_BYTE36_reg(data)                                     (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE36_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE36_reg                                           (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE36_reg))
#define  P2P_P2P_CTRL_F_BYTE36_ctrl_f_byte36_shift                               (24)
#define  P2P_P2P_CTRL_F_BYTE36_ctrl_f_byte37_shift                               (16)
#define  P2P_P2P_CTRL_F_BYTE36_ctrl_f_byte38_shift                               (8)
#define  P2P_P2P_CTRL_F_BYTE36_ctrl_f_byte39_shift                               (0)
#define  P2P_P2P_CTRL_F_BYTE36_ctrl_f_byte36_mask                                (0xFF000000)
#define  P2P_P2P_CTRL_F_BYTE36_ctrl_f_byte37_mask                                (0x00FF0000)
#define  P2P_P2P_CTRL_F_BYTE36_ctrl_f_byte38_mask                                (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE36_ctrl_f_byte39_mask                                (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE36_ctrl_f_byte36(data)                               (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_F_BYTE36_ctrl_f_byte37(data)                               (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_F_BYTE36_ctrl_f_byte38(data)                               (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE36_ctrl_f_byte39(data)                               (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE36_get_ctrl_f_byte36(data)                           ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_F_BYTE36_get_ctrl_f_byte37(data)                           ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_F_BYTE36_get_ctrl_f_byte38(data)                           ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE36_get_ctrl_f_byte39(data)                           (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE40                                                  0x1802DDAC
#define  P2P_P2P_CTRL_F_BYTE40_reg_addr                                          "0xB802DDAC"
#define  P2P_P2P_CTRL_F_BYTE40_reg                                               0xB802DDAC
#define  P2P_P2P_CTRL_F_BYTE40_inst_addr                                         "0x002B"
#define  set_P2P_P2P_CTRL_F_BYTE40_reg(data)                                     (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE40_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE40_reg                                           (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE40_reg))
#define  P2P_P2P_CTRL_F_BYTE40_ctrl_f_byte40_shift                               (24)
#define  P2P_P2P_CTRL_F_BYTE40_ctrl_f_byte41_shift                               (16)
#define  P2P_P2P_CTRL_F_BYTE40_ctrl_f_byte42_shift                               (8)
#define  P2P_P2P_CTRL_F_BYTE40_ctrl_f_byte43_shift                               (0)
#define  P2P_P2P_CTRL_F_BYTE40_ctrl_f_byte40_mask                                (0xFF000000)
#define  P2P_P2P_CTRL_F_BYTE40_ctrl_f_byte41_mask                                (0x00FF0000)
#define  P2P_P2P_CTRL_F_BYTE40_ctrl_f_byte42_mask                                (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE40_ctrl_f_byte43_mask                                (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE40_ctrl_f_byte40(data)                               (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_F_BYTE40_ctrl_f_byte41(data)                               (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_F_BYTE40_ctrl_f_byte42(data)                               (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE40_ctrl_f_byte43(data)                               (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE40_get_ctrl_f_byte40(data)                           ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_F_BYTE40_get_ctrl_f_byte41(data)                           ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_F_BYTE40_get_ctrl_f_byte42(data)                           ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE40_get_ctrl_f_byte43(data)                           (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE44                                                  0x1802DDB0
#define  P2P_P2P_CTRL_F_BYTE44_reg_addr                                          "0xB802DDB0"
#define  P2P_P2P_CTRL_F_BYTE44_reg                                               0xB802DDB0
#define  P2P_P2P_CTRL_F_BYTE44_inst_addr                                         "0x002C"
#define  set_P2P_P2P_CTRL_F_BYTE44_reg(data)                                     (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE44_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE44_reg                                           (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE44_reg))
#define  P2P_P2P_CTRL_F_BYTE44_ctrl_f_byte44_shift                               (24)
#define  P2P_P2P_CTRL_F_BYTE44_ctrl_f_byte45_shift                               (16)
#define  P2P_P2P_CTRL_F_BYTE44_ctrl_f_byte46_shift                               (8)
#define  P2P_P2P_CTRL_F_BYTE44_ctrl_f_byte47_shift                               (0)
#define  P2P_P2P_CTRL_F_BYTE44_ctrl_f_byte44_mask                                (0xFF000000)
#define  P2P_P2P_CTRL_F_BYTE44_ctrl_f_byte45_mask                                (0x00FF0000)
#define  P2P_P2P_CTRL_F_BYTE44_ctrl_f_byte46_mask                                (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE44_ctrl_f_byte47_mask                                (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE44_ctrl_f_byte44(data)                               (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_F_BYTE44_ctrl_f_byte45(data)                               (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_F_BYTE44_ctrl_f_byte46(data)                               (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE44_ctrl_f_byte47(data)                               (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE44_get_ctrl_f_byte44(data)                           ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_F_BYTE44_get_ctrl_f_byte45(data)                           ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_F_BYTE44_get_ctrl_f_byte46(data)                           ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE44_get_ctrl_f_byte47(data)                           (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE48                                                  0x1802DDB4
#define  P2P_P2P_CTRL_F_BYTE48_reg_addr                                          "0xB802DDB4"
#define  P2P_P2P_CTRL_F_BYTE48_reg                                               0xB802DDB4
#define  P2P_P2P_CTRL_F_BYTE48_inst_addr                                         "0x002D"
#define  set_P2P_P2P_CTRL_F_BYTE48_reg(data)                                     (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE48_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE48_reg                                           (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE48_reg))
#define  P2P_P2P_CTRL_F_BYTE48_ctrl_f_byte48_shift                               (24)
#define  P2P_P2P_CTRL_F_BYTE48_ctrl_f_byte49_shift                               (16)
#define  P2P_P2P_CTRL_F_BYTE48_ctrl_f_byte50_shift                               (8)
#define  P2P_P2P_CTRL_F_BYTE48_ctrl_f_byte51_shift                               (0)
#define  P2P_P2P_CTRL_F_BYTE48_ctrl_f_byte48_mask                                (0xFF000000)
#define  P2P_P2P_CTRL_F_BYTE48_ctrl_f_byte49_mask                                (0x00FF0000)
#define  P2P_P2P_CTRL_F_BYTE48_ctrl_f_byte50_mask                                (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE48_ctrl_f_byte51_mask                                (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE48_ctrl_f_byte48(data)                               (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_F_BYTE48_ctrl_f_byte49(data)                               (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_F_BYTE48_ctrl_f_byte50(data)                               (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE48_ctrl_f_byte51(data)                               (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE48_get_ctrl_f_byte48(data)                           ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_F_BYTE48_get_ctrl_f_byte49(data)                           ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_F_BYTE48_get_ctrl_f_byte50(data)                           ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE48_get_ctrl_f_byte51(data)                           (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE52                                                  0x1802DDB8
#define  P2P_P2P_CTRL_F_BYTE52_reg_addr                                          "0xB802DDB8"
#define  P2P_P2P_CTRL_F_BYTE52_reg                                               0xB802DDB8
#define  P2P_P2P_CTRL_F_BYTE52_inst_addr                                         "0x002E"
#define  set_P2P_P2P_CTRL_F_BYTE52_reg(data)                                     (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE52_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE52_reg                                           (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE52_reg))
#define  P2P_P2P_CTRL_F_BYTE52_ctrl_f_byte52_shift                               (24)
#define  P2P_P2P_CTRL_F_BYTE52_ctrl_f_byte53_shift                               (16)
#define  P2P_P2P_CTRL_F_BYTE52_ctrl_f_byte54_shift                               (8)
#define  P2P_P2P_CTRL_F_BYTE52_ctrl_f_byte55_shift                               (0)
#define  P2P_P2P_CTRL_F_BYTE52_ctrl_f_byte52_mask                                (0xFF000000)
#define  P2P_P2P_CTRL_F_BYTE52_ctrl_f_byte53_mask                                (0x00FF0000)
#define  P2P_P2P_CTRL_F_BYTE52_ctrl_f_byte54_mask                                (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE52_ctrl_f_byte55_mask                                (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE52_ctrl_f_byte52(data)                               (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_F_BYTE52_ctrl_f_byte53(data)                               (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_F_BYTE52_ctrl_f_byte54(data)                               (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE52_ctrl_f_byte55(data)                               (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE52_get_ctrl_f_byte52(data)                           ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_F_BYTE52_get_ctrl_f_byte53(data)                           ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_F_BYTE52_get_ctrl_f_byte54(data)                           ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE52_get_ctrl_f_byte55(data)                           (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE56                                                  0x1802DDBC
#define  P2P_P2P_CTRL_F_BYTE56_reg_addr                                          "0xB802DDBC"
#define  P2P_P2P_CTRL_F_BYTE56_reg                                               0xB802DDBC
#define  P2P_P2P_CTRL_F_BYTE56_inst_addr                                         "0x002F"
#define  set_P2P_P2P_CTRL_F_BYTE56_reg(data)                                     (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE56_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE56_reg                                           (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE56_reg))
#define  P2P_P2P_CTRL_F_BYTE56_ctrl_f_byte56_shift                               (24)
#define  P2P_P2P_CTRL_F_BYTE56_ctrl_f_byte57_shift                               (16)
#define  P2P_P2P_CTRL_F_BYTE56_ctrl_f_byte58_shift                               (8)
#define  P2P_P2P_CTRL_F_BYTE56_ctrl_f_byte59_shift                               (0)
#define  P2P_P2P_CTRL_F_BYTE56_ctrl_f_byte56_mask                                (0xFF000000)
#define  P2P_P2P_CTRL_F_BYTE56_ctrl_f_byte57_mask                                (0x00FF0000)
#define  P2P_P2P_CTRL_F_BYTE56_ctrl_f_byte58_mask                                (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE56_ctrl_f_byte59_mask                                (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE56_ctrl_f_byte56(data)                               (0xFF000000&((data)<<24))
#define  P2P_P2P_CTRL_F_BYTE56_ctrl_f_byte57(data)                               (0x00FF0000&((data)<<16))
#define  P2P_P2P_CTRL_F_BYTE56_ctrl_f_byte58(data)                               (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE56_ctrl_f_byte59(data)                               (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE56_get_ctrl_f_byte56(data)                           ((0xFF000000&(data))>>24)
#define  P2P_P2P_CTRL_F_BYTE56_get_ctrl_f_byte57(data)                           ((0x00FF0000&(data))>>16)
#define  P2P_P2P_CTRL_F_BYTE56_get_ctrl_f_byte58(data)                           ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE56_get_ctrl_f_byte59(data)                           (0x000000FF&(data))

#define  P2P_P2P_SCRAMBLER_MODE                                                 0x1802DDC0
#define  P2P_P2P_SCRAMBLER_MODE_reg_addr                                         "0xB802DDC0"
#define  P2P_P2P_SCRAMBLER_MODE_reg                                              0xB802DDC0
#define  P2P_P2P_SCRAMBLER_MODE_inst_addr                                        "0x0030"
#define  set_P2P_P2P_SCRAMBLER_MODE_reg(data)                                    (*((volatile unsigned int*)P2P_P2P_SCRAMBLER_MODE_reg)=data)
#define  get_P2P_P2P_SCRAMBLER_MODE_reg                                          (*((volatile unsigned int*)P2P_P2P_SCRAMBLER_MODE_reg))
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_00_shift                           (31)
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_01_shift                           (30)
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_02_shift                           (29)
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_03_shift                           (28)
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_04_shift                           (27)
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_05_shift                           (26)
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_06_shift                           (25)
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_07_shift                           (24)
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_08_shift                           (23)
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_09_shift                           (22)
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_10_shift                           (21)
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_11_shift                           (20)
#define  P2P_P2P_SCRAMBLER_MODE_dummy_19_12_shift                                (12)
#define  P2P_P2P_SCRAMBLER_MODE_scrambler_auto_en_shift                          (8)
#define  P2P_P2P_SCRAMBLER_MODE_initial_8b10b_shift                              (5)
#define  P2P_P2P_SCRAMBLER_MODE_disable_8b10b_shift                              (4)
#define  P2P_P2P_SCRAMBLER_MODE_scrambler_mode_shift                             (0)
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_00_mask                            (0x80000000)
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_01_mask                            (0x40000000)
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_02_mask                            (0x20000000)
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_03_mask                            (0x10000000)
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_04_mask                            (0x08000000)
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_05_mask                            (0x04000000)
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_06_mask                            (0x02000000)
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_07_mask                            (0x01000000)
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_08_mask                            (0x00800000)
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_09_mask                            (0x00400000)
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_10_mask                            (0x00200000)
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_11_mask                            (0x00100000)
#define  P2P_P2P_SCRAMBLER_MODE_dummy_19_12_mask                                 (0x000FF000)
#define  P2P_P2P_SCRAMBLER_MODE_scrambler_auto_en_mask                           (0x00000100)
#define  P2P_P2P_SCRAMBLER_MODE_initial_8b10b_mask                               (0x00000020)
#define  P2P_P2P_SCRAMBLER_MODE_disable_8b10b_mask                               (0x00000010)
#define  P2P_P2P_SCRAMBLER_MODE_scrambler_mode_mask                              (0x00000003)
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_00(data)                           (0x80000000&((data)<<31))
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_01(data)                           (0x40000000&((data)<<30))
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_02(data)                           (0x20000000&((data)<<29))
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_03(data)                           (0x10000000&((data)<<28))
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_04(data)                           (0x08000000&((data)<<27))
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_05(data)                           (0x04000000&((data)<<26))
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_06(data)                           (0x02000000&((data)<<25))
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_07(data)                           (0x01000000&((data)<<24))
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_08(data)                           (0x00800000&((data)<<23))
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_09(data)                           (0x00400000&((data)<<22))
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_10(data)                           (0x00200000&((data)<<21))
#define  P2P_P2P_SCRAMBLER_MODE_ext_pixel_sel_11(data)                           (0x00100000&((data)<<20))
#define  P2P_P2P_SCRAMBLER_MODE_dummy_19_12(data)                                (0x000FF000&((data)<<12))
#define  P2P_P2P_SCRAMBLER_MODE_scrambler_auto_en(data)                          (0x00000100&((data)<<8))
#define  P2P_P2P_SCRAMBLER_MODE_initial_8b10b(data)                              (0x00000020&((data)<<5))
#define  P2P_P2P_SCRAMBLER_MODE_disable_8b10b(data)                              (0x00000010&((data)<<4))
#define  P2P_P2P_SCRAMBLER_MODE_scrambler_mode(data)                             (0x00000003&(data))
#define  P2P_P2P_SCRAMBLER_MODE_get_ext_pixel_sel_00(data)                       ((0x80000000&(data))>>31)
#define  P2P_P2P_SCRAMBLER_MODE_get_ext_pixel_sel_01(data)                       ((0x40000000&(data))>>30)
#define  P2P_P2P_SCRAMBLER_MODE_get_ext_pixel_sel_02(data)                       ((0x20000000&(data))>>29)
#define  P2P_P2P_SCRAMBLER_MODE_get_ext_pixel_sel_03(data)                       ((0x10000000&(data))>>28)
#define  P2P_P2P_SCRAMBLER_MODE_get_ext_pixel_sel_04(data)                       ((0x08000000&(data))>>27)
#define  P2P_P2P_SCRAMBLER_MODE_get_ext_pixel_sel_05(data)                       ((0x04000000&(data))>>26)
#define  P2P_P2P_SCRAMBLER_MODE_get_ext_pixel_sel_06(data)                       ((0x02000000&(data))>>25)
#define  P2P_P2P_SCRAMBLER_MODE_get_ext_pixel_sel_07(data)                       ((0x01000000&(data))>>24)
#define  P2P_P2P_SCRAMBLER_MODE_get_ext_pixel_sel_08(data)                       ((0x00800000&(data))>>23)
#define  P2P_P2P_SCRAMBLER_MODE_get_ext_pixel_sel_09(data)                       ((0x00400000&(data))>>22)
#define  P2P_P2P_SCRAMBLER_MODE_get_ext_pixel_sel_10(data)                       ((0x00200000&(data))>>21)
#define  P2P_P2P_SCRAMBLER_MODE_get_ext_pixel_sel_11(data)                       ((0x00100000&(data))>>20)
#define  P2P_P2P_SCRAMBLER_MODE_get_dummy_19_12(data)                            ((0x000FF000&(data))>>12)
#define  P2P_P2P_SCRAMBLER_MODE_get_scrambler_auto_en(data)                      ((0x00000100&(data))>>8)
#define  P2P_P2P_SCRAMBLER_MODE_get_initial_8b10b(data)                          ((0x00000020&(data))>>5)
#define  P2P_P2P_SCRAMBLER_MODE_get_disable_8b10b(data)                          ((0x00000010&(data))>>4)
#define  P2P_P2P_SCRAMBLER_MODE_get_scrambler_mode(data)                         (0x00000003&(data))

#define  P2P_P2P_BCC_TX_DATA_0                                                  0x1802DDC4
#define  P2P_P2P_BCC_TX_DATA_0_reg_addr                                          "0xB802DDC4"
#define  P2P_P2P_BCC_TX_DATA_0_reg                                               0xB802DDC4
#define  P2P_P2P_BCC_TX_DATA_0_inst_addr                                         "0x0031"
#define  set_P2P_P2P_BCC_TX_DATA_0_reg(data)                                     (*((volatile unsigned int*)P2P_P2P_BCC_TX_DATA_0_reg)=data)
#define  get_P2P_P2P_BCC_TX_DATA_0_reg                                           (*((volatile unsigned int*)P2P_P2P_BCC_TX_DATA_0_reg))
#define  P2P_P2P_BCC_TX_DATA_0_bcc_tx_byte_3_shift                               (24)
#define  P2P_P2P_BCC_TX_DATA_0_bcc_tx_byte_2_shift                               (16)
#define  P2P_P2P_BCC_TX_DATA_0_bcc_tx_byte_1_shift                               (8)
#define  P2P_P2P_BCC_TX_DATA_0_bcc_tx_byte_0_shift                               (0)
#define  P2P_P2P_BCC_TX_DATA_0_bcc_tx_byte_3_mask                                (0xFF000000)
#define  P2P_P2P_BCC_TX_DATA_0_bcc_tx_byte_2_mask                                (0x00FF0000)
#define  P2P_P2P_BCC_TX_DATA_0_bcc_tx_byte_1_mask                                (0x0000FF00)
#define  P2P_P2P_BCC_TX_DATA_0_bcc_tx_byte_0_mask                                (0x000000FF)
#define  P2P_P2P_BCC_TX_DATA_0_bcc_tx_byte_3(data)                               (0xFF000000&((data)<<24))
#define  P2P_P2P_BCC_TX_DATA_0_bcc_tx_byte_2(data)                               (0x00FF0000&((data)<<16))
#define  P2P_P2P_BCC_TX_DATA_0_bcc_tx_byte_1(data)                               (0x0000FF00&((data)<<8))
#define  P2P_P2P_BCC_TX_DATA_0_bcc_tx_byte_0(data)                               (0x000000FF&(data))
#define  P2P_P2P_BCC_TX_DATA_0_get_bcc_tx_byte_3(data)                           ((0xFF000000&(data))>>24)
#define  P2P_P2P_BCC_TX_DATA_0_get_bcc_tx_byte_2(data)                           ((0x00FF0000&(data))>>16)
#define  P2P_P2P_BCC_TX_DATA_0_get_bcc_tx_byte_1(data)                           ((0x0000FF00&(data))>>8)
#define  P2P_P2P_BCC_TX_DATA_0_get_bcc_tx_byte_0(data)                           (0x000000FF&(data))

#define  P2P_P2P_BCC_TX_DATA_1                                                  0x1802DDC8
#define  P2P_P2P_BCC_TX_DATA_1_reg_addr                                          "0xB802DDC8"
#define  P2P_P2P_BCC_TX_DATA_1_reg                                               0xB802DDC8
#define  P2P_P2P_BCC_TX_DATA_1_inst_addr                                         "0x0032"
#define  set_P2P_P2P_BCC_TX_DATA_1_reg(data)                                     (*((volatile unsigned int*)P2P_P2P_BCC_TX_DATA_1_reg)=data)
#define  get_P2P_P2P_BCC_TX_DATA_1_reg                                           (*((volatile unsigned int*)P2P_P2P_BCC_TX_DATA_1_reg))
#define  P2P_P2P_BCC_TX_DATA_1_dummy_31_16_shift                                 (16)
#define  P2P_P2P_BCC_TX_DATA_1_bcc_tx_byte_5_shift                               (8)
#define  P2P_P2P_BCC_TX_DATA_1_bcc_tx_byte_4_shift                               (0)
#define  P2P_P2P_BCC_TX_DATA_1_dummy_31_16_mask                                  (0xFFFF0000)
#define  P2P_P2P_BCC_TX_DATA_1_bcc_tx_byte_5_mask                                (0x0000FF00)
#define  P2P_P2P_BCC_TX_DATA_1_bcc_tx_byte_4_mask                                (0x000000FF)
#define  P2P_P2P_BCC_TX_DATA_1_dummy_31_16(data)                                 (0xFFFF0000&((data)<<16))
#define  P2P_P2P_BCC_TX_DATA_1_bcc_tx_byte_5(data)                               (0x0000FF00&((data)<<8))
#define  P2P_P2P_BCC_TX_DATA_1_bcc_tx_byte_4(data)                               (0x000000FF&(data))
#define  P2P_P2P_BCC_TX_DATA_1_get_dummy_31_16(data)                             ((0xFFFF0000&(data))>>16)
#define  P2P_P2P_BCC_TX_DATA_1_get_bcc_tx_byte_5(data)                           ((0x0000FF00&(data))>>8)
#define  P2P_P2P_BCC_TX_DATA_1_get_bcc_tx_byte_4(data)                           (0x000000FF&(data))

#define  P2P_P2P_BCC_RX_DATA_0                                                  0x1802DDCC
#define  P2P_P2P_BCC_RX_DATA_0_reg_addr                                          "0xB802DDCC"
#define  P2P_P2P_BCC_RX_DATA_0_reg                                               0xB802DDCC
#define  P2P_P2P_BCC_RX_DATA_0_inst_addr                                         "0x0033"
#define  set_P2P_P2P_BCC_RX_DATA_0_reg(data)                                     (*((volatile unsigned int*)P2P_P2P_BCC_RX_DATA_0_reg)=data)
#define  get_P2P_P2P_BCC_RX_DATA_0_reg                                           (*((volatile unsigned int*)P2P_P2P_BCC_RX_DATA_0_reg))
#define  P2P_P2P_BCC_RX_DATA_0_bcc_rx_byte_2_shift                               (16)
#define  P2P_P2P_BCC_RX_DATA_0_bcc_rx_byte_1_shift                               (8)
#define  P2P_P2P_BCC_RX_DATA_0_bcc_rx_byte_0_shift                               (0)
#define  P2P_P2P_BCC_RX_DATA_0_bcc_rx_byte_2_mask                                (0x00FF0000)
#define  P2P_P2P_BCC_RX_DATA_0_bcc_rx_byte_1_mask                                (0x0000FF00)
#define  P2P_P2P_BCC_RX_DATA_0_bcc_rx_byte_0_mask                                (0x000000FF)
#define  P2P_P2P_BCC_RX_DATA_0_bcc_rx_byte_2(data)                               (0x00FF0000&((data)<<16))
#define  P2P_P2P_BCC_RX_DATA_0_bcc_rx_byte_1(data)                               (0x0000FF00&((data)<<8))
#define  P2P_P2P_BCC_RX_DATA_0_bcc_rx_byte_0(data)                               (0x000000FF&(data))
#define  P2P_P2P_BCC_RX_DATA_0_get_bcc_rx_byte_2(data)                           ((0x00FF0000&(data))>>16)
#define  P2P_P2P_BCC_RX_DATA_0_get_bcc_rx_byte_1(data)                           ((0x0000FF00&(data))>>8)
#define  P2P_P2P_BCC_RX_DATA_0_get_bcc_rx_byte_0(data)                           (0x000000FF&(data))

#define  P2P_P2P_BCC_CTL_0                                                      0x1802DDD0
#define  P2P_P2P_BCC_CTL_0_reg_addr                                              "0xB802DDD0"
#define  P2P_P2P_BCC_CTL_0_reg                                                   0xB802DDD0
#define  P2P_P2P_BCC_CTL_0_inst_addr                                             "0x0034"
#define  set_P2P_P2P_BCC_CTL_0_reg(data)                                         (*((volatile unsigned int*)P2P_P2P_BCC_CTL_0_reg)=data)
#define  get_P2P_P2P_BCC_CTL_0_reg                                               (*((volatile unsigned int*)P2P_P2P_BCC_CTL_0_reg))
#define  P2P_P2P_BCC_CTL_0_bcc_rx_error_wait_time_shift                          (20)
#define  P2P_P2P_BCC_CTL_0_bcc_rx_reply_time_shift                               (8)
#define  P2P_P2P_BCC_CTL_0_bcc_tx_preamble_num_shift                             (0)
#define  P2P_P2P_BCC_CTL_0_bcc_rx_error_wait_time_mask                           (0x3FF00000)
#define  P2P_P2P_BCC_CTL_0_bcc_rx_reply_time_mask                                (0x0003FF00)
#define  P2P_P2P_BCC_CTL_0_bcc_tx_preamble_num_mask                              (0x0000001F)
#define  P2P_P2P_BCC_CTL_0_bcc_rx_error_wait_time(data)                          (0x3FF00000&((data)<<20))
#define  P2P_P2P_BCC_CTL_0_bcc_rx_reply_time(data)                               (0x0003FF00&((data)<<8))
#define  P2P_P2P_BCC_CTL_0_bcc_tx_preamble_num(data)                             (0x0000001F&(data))
#define  P2P_P2P_BCC_CTL_0_get_bcc_rx_error_wait_time(data)                      ((0x3FF00000&(data))>>20)
#define  P2P_P2P_BCC_CTL_0_get_bcc_rx_reply_time(data)                           ((0x0003FF00&(data))>>8)
#define  P2P_P2P_BCC_CTL_0_get_bcc_tx_preamble_num(data)                         (0x0000001F&(data))

#define  P2P_P2P_BCC_CTL_1                                                      0x1802DDD4
#define  P2P_P2P_BCC_CTL_1_reg_addr                                              "0xB802DDD4"
#define  P2P_P2P_BCC_CTL_1_reg                                                   0xB802DDD4
#define  P2P_P2P_BCC_CTL_1_inst_addr                                             "0x0035"
#define  set_P2P_P2P_BCC_CTL_1_reg(data)                                         (*((volatile unsigned int*)P2P_P2P_BCC_CTL_1_reg)=data)
#define  get_P2P_P2P_BCC_CTL_1_reg                                               (*((volatile unsigned int*)P2P_P2P_BCC_CTL_1_reg))
#define  P2P_P2P_BCC_CTL_1_bcc_trigger_shift                                     (31)
#define  P2P_P2P_BCC_CTL_1_dummy_27_13_shift                                     (13)
#define  P2P_P2P_BCC_CTL_1_bcc_trigger_hw_shift                                  (12)
#define  P2P_P2P_BCC_CTL_1_bcc_clk_div_shift                                     (0)
#define  P2P_P2P_BCC_CTL_1_bcc_trigger_mask                                      (0x80000000)
#define  P2P_P2P_BCC_CTL_1_dummy_27_13_mask                                      (0x0FFFE000)
#define  P2P_P2P_BCC_CTL_1_bcc_trigger_hw_mask                                   (0x00001000)
#define  P2P_P2P_BCC_CTL_1_bcc_clk_div_mask                                      (0x00000FFF)
#define  P2P_P2P_BCC_CTL_1_bcc_trigger(data)                                     (0x80000000&((data)<<31))
#define  P2P_P2P_BCC_CTL_1_dummy_27_13(data)                                     (0x0FFFE000&((data)<<13))
#define  P2P_P2P_BCC_CTL_1_bcc_trigger_hw(data)                                  (0x00001000&((data)<<12))
#define  P2P_P2P_BCC_CTL_1_bcc_clk_div(data)                                     (0x00000FFF&(data))
#define  P2P_P2P_BCC_CTL_1_get_bcc_trigger(data)                                 ((0x80000000&(data))>>31)
#define  P2P_P2P_BCC_CTL_1_get_dummy_27_13(data)                                 ((0x0FFFE000&(data))>>13)
#define  P2P_P2P_BCC_CTL_1_get_bcc_trigger_hw(data)                              ((0x00001000&(data))>>12)
#define  P2P_P2P_BCC_CTL_1_get_bcc_clk_div(data)                                 (0x00000FFF&(data))

#define  P2P_P2P_BCC_CTL_2                                                      0x1802DDD8
#define  P2P_P2P_BCC_CTL_2_reg_addr                                              "0xB802DDD8"
#define  P2P_P2P_BCC_CTL_2_reg                                                   0xB802DDD8
#define  P2P_P2P_BCC_CTL_2_inst_addr                                             "0x0036"
#define  set_P2P_P2P_BCC_CTL_2_reg(data)                                         (*((volatile unsigned int*)P2P_P2P_BCC_CTL_2_reg)=data)
#define  get_P2P_P2P_BCC_CTL_2_reg                                               (*((volatile unsigned int*)P2P_P2P_BCC_CTL_2_reg))
#define  P2P_P2P_BCC_CTL_2_bcc_reset_shift                                       (31)
#define  P2P_P2P_BCC_CTL_2_dummy_27_20_shift                                     (20)
#define  P2P_P2P_BCC_CTL_2_bcc_irq_threshould_8us_shift                          (8)
#define  P2P_P2P_BCC_CTL_2_bcc_mode2_enable_shift                                (4)
#define  P2P_P2P_BCC_CTL_2_bcc_sw_chksum_shift                                   (2)
#define  P2P_P2P_BCC_CTL_2_bcc_tx_done_announce_shift                            (1)
#define  P2P_P2P_BCC_CTL_2_bcc_enable_shift                                      (0)
#define  P2P_P2P_BCC_CTL_2_bcc_reset_mask                                        (0x80000000)
#define  P2P_P2P_BCC_CTL_2_dummy_27_20_mask                                      (0x0FF00000)
#define  P2P_P2P_BCC_CTL_2_bcc_irq_threshould_8us_mask                           (0x0003FF00)
#define  P2P_P2P_BCC_CTL_2_bcc_mode2_enable_mask                                 (0x00000010)
#define  P2P_P2P_BCC_CTL_2_bcc_sw_chksum_mask                                    (0x00000004)
#define  P2P_P2P_BCC_CTL_2_bcc_tx_done_announce_mask                             (0x00000002)
#define  P2P_P2P_BCC_CTL_2_bcc_enable_mask                                       (0x00000001)
#define  P2P_P2P_BCC_CTL_2_bcc_reset(data)                                       (0x80000000&((data)<<31))
#define  P2P_P2P_BCC_CTL_2_dummy_27_20(data)                                     (0x0FF00000&((data)<<20))
#define  P2P_P2P_BCC_CTL_2_bcc_irq_threshould_8us(data)                          (0x0003FF00&((data)<<8))
#define  P2P_P2P_BCC_CTL_2_bcc_mode2_enable(data)                                (0x00000010&((data)<<4))
#define  P2P_P2P_BCC_CTL_2_bcc_sw_chksum(data)                                   (0x00000004&((data)<<2))
#define  P2P_P2P_BCC_CTL_2_bcc_tx_done_announce(data)                            (0x00000002&((data)<<1))
#define  P2P_P2P_BCC_CTL_2_bcc_enable(data)                                      (0x00000001&(data))
#define  P2P_P2P_BCC_CTL_2_get_bcc_reset(data)                                   ((0x80000000&(data))>>31)
#define  P2P_P2P_BCC_CTL_2_get_dummy_27_20(data)                                 ((0x0FF00000&(data))>>20)
#define  P2P_P2P_BCC_CTL_2_get_bcc_irq_threshould_8us(data)                      ((0x0003FF00&(data))>>8)
#define  P2P_P2P_BCC_CTL_2_get_bcc_mode2_enable(data)                            ((0x00000010&(data))>>4)
#define  P2P_P2P_BCC_CTL_2_get_bcc_sw_chksum(data)                               ((0x00000004&(data))>>2)
#define  P2P_P2P_BCC_CTL_2_get_bcc_tx_done_announce(data)                        ((0x00000002&(data))>>1)
#define  P2P_P2P_BCC_CTL_2_get_bcc_enable(data)                                  (0x00000001&(data))

#define  P2P_P2P_BCC_CTL_3                                                      0x1802DDDC
#define  P2P_P2P_BCC_CTL_3_reg_addr                                              "0xB802DDDC"
#define  P2P_P2P_BCC_CTL_3_reg                                                   0xB802DDDC
#define  P2P_P2P_BCC_CTL_3_inst_addr                                             "0x0037"
#define  set_P2P_P2P_BCC_CTL_3_reg(data)                                         (*((volatile unsigned int*)P2P_P2P_BCC_CTL_3_reg)=data)
#define  get_P2P_P2P_BCC_CTL_3_reg                                               (*((volatile unsigned int*)P2P_P2P_BCC_CTL_3_reg))
#define  P2P_P2P_BCC_CTL_3_bcc_manual_sample_shift                               (31)
#define  P2P_P2P_BCC_CTL_3_bcc_in_sample_2_shift                                 (20)
#define  P2P_P2P_BCC_CTL_3_bcc_in_sample_1_shift                                 (10)
#define  P2P_P2P_BCC_CTL_3_bcc_in_sample_0_shift                                 (0)
#define  P2P_P2P_BCC_CTL_3_bcc_manual_sample_mask                                (0x80000000)
#define  P2P_P2P_BCC_CTL_3_bcc_in_sample_2_mask                                  (0x7FF00000)
#define  P2P_P2P_BCC_CTL_3_bcc_in_sample_1_mask                                  (0x000FFC00)
#define  P2P_P2P_BCC_CTL_3_bcc_in_sample_0_mask                                  (0x000003FF)
#define  P2P_P2P_BCC_CTL_3_bcc_manual_sample(data)                               (0x80000000&((data)<<31))
#define  P2P_P2P_BCC_CTL_3_bcc_in_sample_2(data)                                 (0x7FF00000&((data)<<20))
#define  P2P_P2P_BCC_CTL_3_bcc_in_sample_1(data)                                 (0x000FFC00&((data)<<10))
#define  P2P_P2P_BCC_CTL_3_bcc_in_sample_0(data)                                 (0x000003FF&(data))
#define  P2P_P2P_BCC_CTL_3_get_bcc_manual_sample(data)                           ((0x80000000&(data))>>31)
#define  P2P_P2P_BCC_CTL_3_get_bcc_in_sample_2(data)                             ((0x7FF00000&(data))>>20)
#define  P2P_P2P_BCC_CTL_3_get_bcc_in_sample_1(data)                             ((0x000FFC00&(data))>>10)
#define  P2P_P2P_BCC_CTL_3_get_bcc_in_sample_0(data)                             (0x000003FF&(data))

#define  P2P_P2P_BCC_CTL_4                                                      0x1802DDE0
#define  P2P_P2P_BCC_CTL_4_reg_addr                                              "0xB802DDE0"
#define  P2P_P2P_BCC_CTL_4_reg                                                   0xB802DDE0
#define  P2P_P2P_BCC_CTL_4_inst_addr                                             "0x0038"
#define  set_P2P_P2P_BCC_CTL_4_reg(data)                                         (*((volatile unsigned int*)P2P_P2P_BCC_CTL_4_reg)=data)
#define  get_P2P_P2P_BCC_CTL_4_reg                                               (*((volatile unsigned int*)P2P_P2P_BCC_CTL_4_reg))
#define  P2P_P2P_BCC_CTL_4_dummy_31_29_shift                                     (29)
#define  P2P_P2P_BCC_CTL_4_bcc_measure_point_shift                               (24)
#define  P2P_P2P_BCC_CTL_4_bcc_in_sample_4_shift                                 (12)
#define  P2P_P2P_BCC_CTL_4_bcc_in_sample_3_shift                                 (0)
#define  P2P_P2P_BCC_CTL_4_dummy_31_29_mask                                      (0xE0000000)
#define  P2P_P2P_BCC_CTL_4_bcc_measure_point_mask                                (0x1F000000)
#define  P2P_P2P_BCC_CTL_4_bcc_in_sample_4_mask                                  (0x00FFF000)
#define  P2P_P2P_BCC_CTL_4_bcc_in_sample_3_mask                                  (0x00000FFF)
#define  P2P_P2P_BCC_CTL_4_dummy_31_29(data)                                     (0xE0000000&((data)<<29))
#define  P2P_P2P_BCC_CTL_4_bcc_measure_point(data)                               (0x1F000000&((data)<<24))
#define  P2P_P2P_BCC_CTL_4_bcc_in_sample_4(data)                                 (0x00FFF000&((data)<<12))
#define  P2P_P2P_BCC_CTL_4_bcc_in_sample_3(data)                                 (0x00000FFF&(data))
#define  P2P_P2P_BCC_CTL_4_get_dummy_31_29(data)                                 ((0xE0000000&(data))>>29)
#define  P2P_P2P_BCC_CTL_4_get_bcc_measure_point(data)                           ((0x1F000000&(data))>>24)
#define  P2P_P2P_BCC_CTL_4_get_bcc_in_sample_4(data)                             ((0x00FFF000&(data))>>12)
#define  P2P_P2P_BCC_CTL_4_get_bcc_in_sample_3(data)                             (0x00000FFF&(data))

#define  P2P_P2P_BCC_STATUS_0                                                   0x1802DDE4
#define  P2P_P2P_BCC_STATUS_0_reg_addr                                           "0xB802DDE4"
#define  P2P_P2P_BCC_STATUS_0_reg                                                0xB802DDE4
#define  P2P_P2P_BCC_STATUS_0_inst_addr                                          "0x0039"
#define  set_P2P_P2P_BCC_STATUS_0_reg(data)                                      (*((volatile unsigned int*)P2P_P2P_BCC_STATUS_0_reg)=data)
#define  get_P2P_P2P_BCC_STATUS_0_reg                                            (*((volatile unsigned int*)P2P_P2P_BCC_STATUS_0_reg))
#define  P2P_P2P_BCC_STATUS_0_dummy_31_28_shift                                  (28)
#define  P2P_P2P_BCC_STATUS_0_bcc_irq_irq_en_shift                               (27)
#define  P2P_P2P_BCC_STATUS_0_p2p_training_fail_irq_en_shift                     (26)
#define  P2P_P2P_BCC_STATUS_0_p2p_bcc_bc_trigger_irq_en_shift                    (25)
#define  P2P_P2P_BCC_STATUS_0_stop_high_err_irq_en_shift                         (24)
#define  P2P_P2P_BCC_STATUS_0_data_lead_bit_err_irq_en_shift                     (23)
#define  P2P_P2P_BCC_STATUS_0_start_low_err_en_irq_en_shift                      (22)
#define  P2P_P2P_BCC_STATUS_0_preamble_le8_err_irq_en_shift                      (21)
#define  P2P_P2P_BCC_STATUS_0_preamble_bh_bl_err_irq_en_shift                    (20)
#define  P2P_P2P_BCC_STATUS_0_dummy_19_shift                                     (19)
#define  P2P_P2P_BCC_STATUS_0_bcc_rx_done_irq_en_shift                           (18)
#define  P2P_P2P_BCC_STATUS_0_bcc_tx_done_irq_en_shift                           (17)
#define  P2P_P2P_BCC_STATUS_0_bcc_rx_reply_time_out_irq_en_shift                 (16)
#define  P2P_P2P_BCC_STATUS_0_dummy_15_12_shift                                  (12)
#define  P2P_P2P_BCC_STATUS_0_bcc_irq_shift                                      (11)
#define  P2P_P2P_BCC_STATUS_0_p2p_training_fail_shift                            (10)
#define  P2P_P2P_BCC_STATUS_0_p2p_bcc_bc_trigger_shift                           (9)
#define  P2P_P2P_BCC_STATUS_0_stop_high_err_shift                                (8)
#define  P2P_P2P_BCC_STATUS_0_data_lead_bit_err_shift                            (7)
#define  P2P_P2P_BCC_STATUS_0_start_low_err_shift                                (6)
#define  P2P_P2P_BCC_STATUS_0_preamble_le8_err_shift                             (5)
#define  P2P_P2P_BCC_STATUS_0_preamble_bh_bl_err_shift                           (4)
#define  P2P_P2P_BCC_STATUS_0_dummy_3_shift                                      (3)
#define  P2P_P2P_BCC_STATUS_0_bcc_rx_done_shift                                  (2)
#define  P2P_P2P_BCC_STATUS_0_bcc_tx_done_shift                                  (1)
#define  P2P_P2P_BCC_STATUS_0_bcc_rx_reply_time_out_shift                        (0)
#define  P2P_P2P_BCC_STATUS_0_dummy_31_28_mask                                   (0xF0000000)
#define  P2P_P2P_BCC_STATUS_0_bcc_irq_irq_en_mask                                (0x08000000)
#define  P2P_P2P_BCC_STATUS_0_p2p_training_fail_irq_en_mask                      (0x04000000)
#define  P2P_P2P_BCC_STATUS_0_p2p_bcc_bc_trigger_irq_en_mask                     (0x02000000)
#define  P2P_P2P_BCC_STATUS_0_stop_high_err_irq_en_mask                          (0x01000000)
#define  P2P_P2P_BCC_STATUS_0_data_lead_bit_err_irq_en_mask                      (0x00800000)
#define  P2P_P2P_BCC_STATUS_0_start_low_err_en_irq_en_mask                       (0x00400000)
#define  P2P_P2P_BCC_STATUS_0_preamble_le8_err_irq_en_mask                       (0x00200000)
#define  P2P_P2P_BCC_STATUS_0_preamble_bh_bl_err_irq_en_mask                     (0x00100000)
#define  P2P_P2P_BCC_STATUS_0_dummy_19_mask                                      (0x00080000)
#define  P2P_P2P_BCC_STATUS_0_bcc_rx_done_irq_en_mask                            (0x00040000)
#define  P2P_P2P_BCC_STATUS_0_bcc_tx_done_irq_en_mask                            (0x00020000)
#define  P2P_P2P_BCC_STATUS_0_bcc_rx_reply_time_out_irq_en_mask                  (0x00010000)
#define  P2P_P2P_BCC_STATUS_0_dummy_15_12_mask                                   (0x0000F000)
#define  P2P_P2P_BCC_STATUS_0_bcc_irq_mask                                       (0x00000800)
#define  P2P_P2P_BCC_STATUS_0_p2p_training_fail_mask                             (0x00000400)
#define  P2P_P2P_BCC_STATUS_0_p2p_bcc_bc_trigger_mask                            (0x00000200)
#define  P2P_P2P_BCC_STATUS_0_stop_high_err_mask                                 (0x00000100)
#define  P2P_P2P_BCC_STATUS_0_data_lead_bit_err_mask                             (0x00000080)
#define  P2P_P2P_BCC_STATUS_0_start_low_err_mask                                 (0x00000040)
#define  P2P_P2P_BCC_STATUS_0_preamble_le8_err_mask                              (0x00000020)
#define  P2P_P2P_BCC_STATUS_0_preamble_bh_bl_err_mask                            (0x00000010)
#define  P2P_P2P_BCC_STATUS_0_dummy_3_mask                                       (0x00000008)
#define  P2P_P2P_BCC_STATUS_0_bcc_rx_done_mask                                   (0x00000004)
#define  P2P_P2P_BCC_STATUS_0_bcc_tx_done_mask                                   (0x00000002)
#define  P2P_P2P_BCC_STATUS_0_bcc_rx_reply_time_out_mask                         (0x00000001)
#define  P2P_P2P_BCC_STATUS_0_dummy_31_28(data)                                  (0xF0000000&((data)<<28))
#define  P2P_P2P_BCC_STATUS_0_bcc_irq_irq_en(data)                               (0x08000000&((data)<<27))
#define  P2P_P2P_BCC_STATUS_0_p2p_training_fail_irq_en(data)                     (0x04000000&((data)<<26))
#define  P2P_P2P_BCC_STATUS_0_p2p_bcc_bc_trigger_irq_en(data)                    (0x02000000&((data)<<25))
#define  P2P_P2P_BCC_STATUS_0_stop_high_err_irq_en(data)                         (0x01000000&((data)<<24))
#define  P2P_P2P_BCC_STATUS_0_data_lead_bit_err_irq_en(data)                     (0x00800000&((data)<<23))
#define  P2P_P2P_BCC_STATUS_0_start_low_err_en_irq_en(data)                      (0x00400000&((data)<<22))
#define  P2P_P2P_BCC_STATUS_0_preamble_le8_err_irq_en(data)                      (0x00200000&((data)<<21))
#define  P2P_P2P_BCC_STATUS_0_preamble_bh_bl_err_irq_en(data)                    (0x00100000&((data)<<20))
#define  P2P_P2P_BCC_STATUS_0_dummy_19(data)                                     (0x00080000&((data)<<19))
#define  P2P_P2P_BCC_STATUS_0_bcc_rx_done_irq_en(data)                           (0x00040000&((data)<<18))
#define  P2P_P2P_BCC_STATUS_0_bcc_tx_done_irq_en(data)                           (0x00020000&((data)<<17))
#define  P2P_P2P_BCC_STATUS_0_bcc_rx_reply_time_out_irq_en(data)                 (0x00010000&((data)<<16))
#define  P2P_P2P_BCC_STATUS_0_dummy_15_12(data)                                  (0x0000F000&((data)<<12))
#define  P2P_P2P_BCC_STATUS_0_bcc_irq(data)                                      (0x00000800&((data)<<11))
#define  P2P_P2P_BCC_STATUS_0_p2p_training_fail(data)                            (0x00000400&((data)<<10))
#define  P2P_P2P_BCC_STATUS_0_p2p_bcc_bc_trigger(data)                           (0x00000200&((data)<<9))
#define  P2P_P2P_BCC_STATUS_0_stop_high_err(data)                                (0x00000100&((data)<<8))
#define  P2P_P2P_BCC_STATUS_0_data_lead_bit_err(data)                            (0x00000080&((data)<<7))
#define  P2P_P2P_BCC_STATUS_0_start_low_err(data)                                (0x00000040&((data)<<6))
#define  P2P_P2P_BCC_STATUS_0_preamble_le8_err(data)                             (0x00000020&((data)<<5))
#define  P2P_P2P_BCC_STATUS_0_preamble_bh_bl_err(data)                           (0x00000010&((data)<<4))
#define  P2P_P2P_BCC_STATUS_0_dummy_3(data)                                      (0x00000008&((data)<<3))
#define  P2P_P2P_BCC_STATUS_0_bcc_rx_done(data)                                  (0x00000004&((data)<<2))
#define  P2P_P2P_BCC_STATUS_0_bcc_tx_done(data)                                  (0x00000002&((data)<<1))
#define  P2P_P2P_BCC_STATUS_0_bcc_rx_reply_time_out(data)                        (0x00000001&(data))
#define  P2P_P2P_BCC_STATUS_0_get_dummy_31_28(data)                              ((0xF0000000&(data))>>28)
#define  P2P_P2P_BCC_STATUS_0_get_bcc_irq_irq_en(data)                           ((0x08000000&(data))>>27)
#define  P2P_P2P_BCC_STATUS_0_get_p2p_training_fail_irq_en(data)                 ((0x04000000&(data))>>26)
#define  P2P_P2P_BCC_STATUS_0_get_p2p_bcc_bc_trigger_irq_en(data)                ((0x02000000&(data))>>25)
#define  P2P_P2P_BCC_STATUS_0_get_stop_high_err_irq_en(data)                     ((0x01000000&(data))>>24)
#define  P2P_P2P_BCC_STATUS_0_get_data_lead_bit_err_irq_en(data)                 ((0x00800000&(data))>>23)
#define  P2P_P2P_BCC_STATUS_0_get_start_low_err_en_irq_en(data)                  ((0x00400000&(data))>>22)
#define  P2P_P2P_BCC_STATUS_0_get_preamble_le8_err_irq_en(data)                  ((0x00200000&(data))>>21)
#define  P2P_P2P_BCC_STATUS_0_get_preamble_bh_bl_err_irq_en(data)                ((0x00100000&(data))>>20)
#define  P2P_P2P_BCC_STATUS_0_get_dummy_19(data)                                 ((0x00080000&(data))>>19)
#define  P2P_P2P_BCC_STATUS_0_get_bcc_rx_done_irq_en(data)                       ((0x00040000&(data))>>18)
#define  P2P_P2P_BCC_STATUS_0_get_bcc_tx_done_irq_en(data)                       ((0x00020000&(data))>>17)
#define  P2P_P2P_BCC_STATUS_0_get_bcc_rx_reply_time_out_irq_en(data)             ((0x00010000&(data))>>16)
#define  P2P_P2P_BCC_STATUS_0_get_dummy_15_12(data)                              ((0x0000F000&(data))>>12)
#define  P2P_P2P_BCC_STATUS_0_get_bcc_irq(data)                                  ((0x00000800&(data))>>11)
#define  P2P_P2P_BCC_STATUS_0_get_p2p_training_fail(data)                        ((0x00000400&(data))>>10)
#define  P2P_P2P_BCC_STATUS_0_get_p2p_bcc_bc_trigger(data)                       ((0x00000200&(data))>>9)
#define  P2P_P2P_BCC_STATUS_0_get_stop_high_err(data)                            ((0x00000100&(data))>>8)
#define  P2P_P2P_BCC_STATUS_0_get_data_lead_bit_err(data)                        ((0x00000080&(data))>>7)
#define  P2P_P2P_BCC_STATUS_0_get_start_low_err(data)                            ((0x00000040&(data))>>6)
#define  P2P_P2P_BCC_STATUS_0_get_preamble_le8_err(data)                         ((0x00000020&(data))>>5)
#define  P2P_P2P_BCC_STATUS_0_get_preamble_bh_bl_err(data)                       ((0x00000010&(data))>>4)
#define  P2P_P2P_BCC_STATUS_0_get_dummy_3(data)                                  ((0x00000008&(data))>>3)
#define  P2P_P2P_BCC_STATUS_0_get_bcc_rx_done(data)                              ((0x00000004&(data))>>2)
#define  P2P_P2P_BCC_STATUS_0_get_bcc_tx_done(data)                              ((0x00000002&(data))>>1)
#define  P2P_P2P_BCC_STATUS_0_get_bcc_rx_reply_time_out(data)                    (0x00000001&(data))

#define  P2P_P2P_BCC_DEBOUNCE                                                   0x1802DDE8
#define  P2P_P2P_BCC_DEBOUNCE_reg_addr                                           "0xB802DDE8"
#define  P2P_P2P_BCC_DEBOUNCE_reg                                                0xB802DDE8
#define  P2P_P2P_BCC_DEBOUNCE_inst_addr                                          "0x003A"
#define  set_P2P_P2P_BCC_DEBOUNCE_reg(data)                                      (*((volatile unsigned int*)P2P_P2P_BCC_DEBOUNCE_reg)=data)
#define  get_P2P_P2P_BCC_DEBOUNCE_reg                                            (*((volatile unsigned int*)P2P_P2P_BCC_DEBOUNCE_reg))
#define  P2P_P2P_BCC_DEBOUNCE_bcc_debounce_en_shift                              (31)
#define  P2P_P2P_BCC_DEBOUNCE_bcc_manual_mode_shift                              (29)
#define  P2P_P2P_BCC_DEBOUNCE_bcc_manual_value_shift                             (28)
#define  P2P_P2P_BCC_DEBOUNCE_dummy_27_22_shift                                  (22)
#define  P2P_P2P_BCC_DEBOUNCE_bcc_measure_cnt_shift                              (12)
#define  P2P_P2P_BCC_DEBOUNCE_bcc_debounce_threshold_shift                       (0)
#define  P2P_P2P_BCC_DEBOUNCE_bcc_debounce_en_mask                               (0x80000000)
#define  P2P_P2P_BCC_DEBOUNCE_bcc_manual_mode_mask                               (0x20000000)
#define  P2P_P2P_BCC_DEBOUNCE_bcc_manual_value_mask                              (0x10000000)
#define  P2P_P2P_BCC_DEBOUNCE_dummy_27_22_mask                                   (0x0FC00000)
#define  P2P_P2P_BCC_DEBOUNCE_bcc_measure_cnt_mask                               (0x003FF000)
#define  P2P_P2P_BCC_DEBOUNCE_bcc_debounce_threshold_mask                        (0x000001FF)
#define  P2P_P2P_BCC_DEBOUNCE_bcc_debounce_en(data)                              (0x80000000&((data)<<31))
#define  P2P_P2P_BCC_DEBOUNCE_bcc_manual_mode(data)                              (0x20000000&((data)<<29))
#define  P2P_P2P_BCC_DEBOUNCE_bcc_manual_value(data)                             (0x10000000&((data)<<28))
#define  P2P_P2P_BCC_DEBOUNCE_dummy_27_22(data)                                  (0x0FC00000&((data)<<22))
#define  P2P_P2P_BCC_DEBOUNCE_bcc_measure_cnt(data)                              (0x003FF000&((data)<<12))
#define  P2P_P2P_BCC_DEBOUNCE_bcc_debounce_threshold(data)                       (0x000001FF&(data))
#define  P2P_P2P_BCC_DEBOUNCE_get_bcc_debounce_en(data)                          ((0x80000000&(data))>>31)
#define  P2P_P2P_BCC_DEBOUNCE_get_bcc_manual_mode(data)                          ((0x20000000&(data))>>29)
#define  P2P_P2P_BCC_DEBOUNCE_get_bcc_manual_value(data)                         ((0x10000000&(data))>>28)
#define  P2P_P2P_BCC_DEBOUNCE_get_dummy_27_22(data)                              ((0x0FC00000&(data))>>22)
#define  P2P_P2P_BCC_DEBOUNCE_get_bcc_measure_cnt(data)                          ((0x003FF000&(data))>>12)
#define  P2P_P2P_BCC_DEBOUNCE_get_bcc_debounce_threshold(data)                   (0x000001FF&(data))

#define  P2P_P2P_DBG                                                            0x1802DDEC
#define  P2P_P2P_DBG_reg_addr                                                    "0xB802DDEC"
#define  P2P_P2P_DBG_reg                                                         0xB802DDEC
#define  P2P_P2P_DBG_inst_addr                                                   "0x003B"
#define  set_P2P_P2P_DBG_reg(data)                                               (*((volatile unsigned int*)P2P_P2P_DBG_reg)=data)
#define  get_P2P_P2P_DBG_reg                                                     (*((volatile unsigned int*)P2P_P2P_DBG_reg))
#define  P2P_P2P_DBG_dummy_31_12_shift                                           (12)
#define  P2P_P2P_DBG_dbg_sel_shift                                               (4)
#define  P2P_P2P_DBG_dbg_part_sel_shift                                          (3)
#define  P2P_P2P_DBG_dbg_en_shift                                                (0)
#define  P2P_P2P_DBG_dummy_31_12_mask                                            (0xFFFFF000)
#define  P2P_P2P_DBG_dbg_sel_mask                                                (0x000003F0)
#define  P2P_P2P_DBG_dbg_part_sel_mask                                           (0x00000008)
#define  P2P_P2P_DBG_dbg_en_mask                                                 (0x00000001)
#define  P2P_P2P_DBG_dummy_31_12(data)                                           (0xFFFFF000&((data)<<12))
#define  P2P_P2P_DBG_dbg_sel(data)                                               (0x000003F0&((data)<<4))
#define  P2P_P2P_DBG_dbg_part_sel(data)                                          (0x00000008&((data)<<3))
#define  P2P_P2P_DBG_dbg_en(data)                                                (0x00000001&(data))
#define  P2P_P2P_DBG_get_dummy_31_12(data)                                       ((0xFFFFF000&(data))>>12)
#define  P2P_P2P_DBG_get_dbg_sel(data)                                           ((0x000003F0&(data))>>4)
#define  P2P_P2P_DBG_get_dbg_part_sel(data)                                      ((0x00000008&(data))>>3)
#define  P2P_P2P_DBG_get_dbg_en(data)                                            (0x00000001&(data))

#define  P2P_P2P_CRC_CTRL                                                       0x1802DDF0
#define  P2P_P2P_CRC_CTRL_reg_addr                                               "0xB802DDF0"
#define  P2P_P2P_CRC_CTRL_reg                                                    0xB802DDF0
#define  P2P_P2P_CRC_CTRL_inst_addr                                              "0x003C"
#define  set_P2P_P2P_CRC_CTRL_reg(data)                                          (*((volatile unsigned int*)P2P_P2P_CRC_CTRL_reg)=data)
#define  get_P2P_P2P_CRC_CTRL_reg                                                (*((volatile unsigned int*)P2P_P2P_CRC_CTRL_reg))
#define  P2P_P2P_CRC_CTRL_crc_err_cnt_shift                                      (16)
#define  P2P_P2P_CRC_CTRL_crc_port_en_shift                                      (4)
#define  P2P_P2P_CRC_CTRL_crc_auto_cmp_en_shift                                  (2)
#define  P2P_P2P_CRC_CTRL_crc_conti_shift                                        (1)
#define  P2P_P2P_CRC_CTRL_crc_start_shift                                        (0)
#define  P2P_P2P_CRC_CTRL_crc_err_cnt_mask                                       (0xFFFF0000)
#define  P2P_P2P_CRC_CTRL_crc_port_en_mask                                       (0x0000FFF0)
#define  P2P_P2P_CRC_CTRL_crc_auto_cmp_en_mask                                   (0x00000004)
#define  P2P_P2P_CRC_CTRL_crc_conti_mask                                         (0x00000002)
#define  P2P_P2P_CRC_CTRL_crc_start_mask                                         (0x00000001)
#define  P2P_P2P_CRC_CTRL_crc_err_cnt(data)                                      (0xFFFF0000&((data)<<16))
#define  P2P_P2P_CRC_CTRL_crc_port_en(data)                                      (0x0000FFF0&((data)<<4))
#define  P2P_P2P_CRC_CTRL_crc_auto_cmp_en(data)                                  (0x00000004&((data)<<2))
#define  P2P_P2P_CRC_CTRL_crc_conti(data)                                        (0x00000002&((data)<<1))
#define  P2P_P2P_CRC_CTRL_crc_start(data)                                        (0x00000001&(data))
#define  P2P_P2P_CRC_CTRL_get_crc_err_cnt(data)                                  ((0xFFFF0000&(data))>>16)
#define  P2P_P2P_CRC_CTRL_get_crc_port_en(data)                                  ((0x0000FFF0&(data))>>4)
#define  P2P_P2P_CRC_CTRL_get_crc_auto_cmp_en(data)                              ((0x00000004&(data))>>2)
#define  P2P_P2P_CRC_CTRL_get_crc_conti(data)                                    ((0x00000002&(data))>>1)
#define  P2P_P2P_CRC_CTRL_get_crc_start(data)                                    (0x00000001&(data))

#define  P2P_P2P_CRC_RESULT                                                     0x1802DDF4
#define  P2P_P2P_CRC_RESULT_reg_addr                                             "0xB802DDF4"
#define  P2P_P2P_CRC_RESULT_reg                                                  0xB802DDF4
#define  P2P_P2P_CRC_RESULT_inst_addr                                            "0x003D"
#define  set_P2P_P2P_CRC_RESULT_reg(data)                                        (*((volatile unsigned int*)P2P_P2P_CRC_RESULT_reg)=data)
#define  get_P2P_P2P_CRC_RESULT_reg                                              (*((volatile unsigned int*)P2P_P2P_CRC_RESULT_reg))
#define  P2P_P2P_CRC_RESULT_crc_result_shift                                     (0)
#define  P2P_P2P_CRC_RESULT_crc_result_mask                                      (0xFFFFFFFF)
#define  P2P_P2P_CRC_RESULT_crc_result(data)                                     (0xFFFFFFFF&(data))
#define  P2P_P2P_CRC_RESULT_get_crc_result(data)                                 (0xFFFFFFFF&(data))

#define  P2P_P2P_CRC_GOLDEN                                                     0x1802DDF8
#define  P2P_P2P_CRC_GOLDEN_reg_addr                                             "0xB802DDF8"
#define  P2P_P2P_CRC_GOLDEN_reg                                                  0xB802DDF8
#define  P2P_P2P_CRC_GOLDEN_inst_addr                                            "0x003E"
#define  set_P2P_P2P_CRC_GOLDEN_reg(data)                                        (*((volatile unsigned int*)P2P_P2P_CRC_GOLDEN_reg)=data)
#define  get_P2P_P2P_CRC_GOLDEN_reg                                              (*((volatile unsigned int*)P2P_P2P_CRC_GOLDEN_reg))
#define  P2P_P2P_CRC_GOLDEN_crc_golden_shift                                     (0)
#define  P2P_P2P_CRC_GOLDEN_crc_golden_mask                                      (0xFFFFFFFF)
#define  P2P_P2P_CRC_GOLDEN_crc_golden(data)                                     (0xFFFFFFFF&(data))
#define  P2P_P2P_CRC_GOLDEN_get_crc_golden(data)                                 (0xFFFFFFFF&(data))

#define  P2P_P2P_DGB_READ                                                       0x1802DDFC
#define  P2P_P2P_DGB_READ_reg_addr                                               "0xB802DDFC"
#define  P2P_P2P_DGB_READ_reg                                                    0xB802DDFC
#define  P2P_P2P_DGB_READ_inst_addr                                              "0x003F"
#define  set_P2P_P2P_DGB_READ_reg(data)                                          (*((volatile unsigned int*)P2P_P2P_DGB_READ_reg)=data)
#define  get_P2P_P2P_DGB_READ_reg                                                (*((volatile unsigned int*)P2P_P2P_DGB_READ_reg))
#define  P2P_P2P_DGB_READ_p2p_tst_out_shift                                      (0)
#define  P2P_P2P_DGB_READ_p2p_tst_out_mask                                       (0xFFFFFFFF)
#define  P2P_P2P_DGB_READ_p2p_tst_out(data)                                      (0xFFFFFFFF&(data))
#define  P2P_P2P_DGB_READ_get_p2p_tst_out(data)                                  (0xFFFFFFFF&(data))

#define  P2P_P2P_DMY_LINE0                                                      0x1802DE00
#define  P2P_P2P_DMY_LINE0_reg_addr                                              "0xB802DE00"
#define  P2P_P2P_DMY_LINE0_reg                                                   0xB802DE00
#define  P2P_P2P_DMY_LINE0_inst_addr                                             "0x0040"
#define  set_P2P_P2P_DMY_LINE0_reg(data)                                         (*((volatile unsigned int*)P2P_P2P_DMY_LINE0_reg)=data)
#define  get_P2P_P2P_DMY_LINE0_reg                                               (*((volatile unsigned int*)P2P_P2P_DMY_LINE0_reg))
#define  P2P_P2P_DMY_LINE0_dmy_length_shift                                      (20)
#define  P2P_P2P_DMY_LINE0_ldmy_enable_shift                                     (18)
#define  P2P_P2P_DMY_LINE0_ldmy_color_sel_shift                                  (17)
#define  P2P_P2P_DMY_LINE0_fdmy_color_sel_shift                                  (8)
#define  P2P_P2P_DMY_LINE0_fdmy_line_num_shift                                   (4)
#define  P2P_P2P_DMY_LINE0_bdmy_line_num_shift                                   (0)
#define  P2P_P2P_DMY_LINE0_dmy_length_mask                                       (0xFFF00000)
#define  P2P_P2P_DMY_LINE0_ldmy_enable_mask                                      (0x00040000)
#define  P2P_P2P_DMY_LINE0_ldmy_color_sel_mask                                   (0x00020000)
#define  P2P_P2P_DMY_LINE0_fdmy_color_sel_mask                                   (0x0001FF00)
#define  P2P_P2P_DMY_LINE0_fdmy_line_num_mask                                    (0x000000F0)
#define  P2P_P2P_DMY_LINE0_bdmy_line_num_mask                                    (0x0000000F)
#define  P2P_P2P_DMY_LINE0_dmy_length(data)                                      (0xFFF00000&((data)<<20))
#define  P2P_P2P_DMY_LINE0_ldmy_enable(data)                                     (0x00040000&((data)<<18))
#define  P2P_P2P_DMY_LINE0_ldmy_color_sel(data)                                  (0x00020000&((data)<<17))
#define  P2P_P2P_DMY_LINE0_fdmy_color_sel(data)                                  (0x0001FF00&((data)<<8))
#define  P2P_P2P_DMY_LINE0_fdmy_line_num(data)                                   (0x000000F0&((data)<<4))
#define  P2P_P2P_DMY_LINE0_bdmy_line_num(data)                                   (0x0000000F&(data))
#define  P2P_P2P_DMY_LINE0_get_dmy_length(data)                                  ((0xFFF00000&(data))>>20)
#define  P2P_P2P_DMY_LINE0_get_ldmy_enable(data)                                 ((0x00040000&(data))>>18)
#define  P2P_P2P_DMY_LINE0_get_ldmy_color_sel(data)                              ((0x00020000&(data))>>17)
#define  P2P_P2P_DMY_LINE0_get_fdmy_color_sel(data)                              ((0x0001FF00&(data))>>8)
#define  P2P_P2P_DMY_LINE0_get_fdmy_line_num(data)                               ((0x000000F0&(data))>>4)
#define  P2P_P2P_DMY_LINE0_get_bdmy_line_num(data)                               (0x0000000F&(data))

#define  P2P_P2P_DMY_LINE1                                                      0x1802DE04
#define  P2P_P2P_DMY_LINE1_reg_addr                                              "0xB802DE04"
#define  P2P_P2P_DMY_LINE1_reg                                                   0xB802DE04
#define  P2P_P2P_DMY_LINE1_inst_addr                                             "0x0041"
#define  set_P2P_P2P_DMY_LINE1_reg(data)                                         (*((volatile unsigned int*)P2P_P2P_DMY_LINE1_reg)=data)
#define  get_P2P_P2P_DMY_LINE1_reg                                               (*((volatile unsigned int*)P2P_P2P_DMY_LINE1_reg))
#define  P2P_P2P_DMY_LINE1_dmy_color1_shift                                      (24)
#define  P2P_P2P_DMY_LINE1_dmy_color0_shift                                      (16)
#define  P2P_P2P_DMY_LINE1_hs_to_den_distance_shift                              (8)
#define  P2P_P2P_DMY_LINE1_bdmy_color_sel_shift                                  (0)
#define  P2P_P2P_DMY_LINE1_dmy_color1_mask                                       (0xFF000000)
#define  P2P_P2P_DMY_LINE1_dmy_color0_mask                                       (0x00FF0000)
#define  P2P_P2P_DMY_LINE1_hs_to_den_distance_mask                               (0x0000FF00)
#define  P2P_P2P_DMY_LINE1_bdmy_color_sel_mask                                   (0x000000FF)
#define  P2P_P2P_DMY_LINE1_dmy_color1(data)                                      (0xFF000000&((data)<<24))
#define  P2P_P2P_DMY_LINE1_dmy_color0(data)                                      (0x00FF0000&((data)<<16))
#define  P2P_P2P_DMY_LINE1_hs_to_den_distance(data)                              (0x0000FF00&((data)<<8))
#define  P2P_P2P_DMY_LINE1_bdmy_color_sel(data)                                  (0x000000FF&(data))
#define  P2P_P2P_DMY_LINE1_get_dmy_color1(data)                                  ((0xFF000000&(data))>>24)
#define  P2P_P2P_DMY_LINE1_get_dmy_color0(data)                                  ((0x00FF0000&(data))>>16)
#define  P2P_P2P_DMY_LINE1_get_hs_to_den_distance(data)                          ((0x0000FF00&(data))>>8)
#define  P2P_P2P_DMY_LINE1_get_bdmy_color_sel(data)                              (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE02_01                                               0x1802DE08
#define  P2P_P2P_CTRL_F_BYTE02_01_reg_addr                                       "0xB802DE08"
#define  P2P_P2P_CTRL_F_BYTE02_01_reg                                            0xB802DE08
#define  P2P_P2P_CTRL_F_BYTE02_01_inst_addr                                      "0x0042"
#define  set_P2P_P2P_CTRL_F_BYTE02_01_reg(data)                                  (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE02_01_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE02_01_reg                                        (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE02_01_reg))
#define  P2P_P2P_CTRL_F_BYTE02_01_ctrl_f_byte01_01_shift                         (22)
#define  P2P_P2P_CTRL_F_BYTE02_01_ctrl_f_byte02_01_shift                         (8)
#define  P2P_P2P_CTRL_F_BYTE02_01_ctrl_f_byte03_01_shift                         (0)
#define  P2P_P2P_CTRL_F_BYTE02_01_ctrl_f_byte01_01_mask                          (0x00C00000)
#define  P2P_P2P_CTRL_F_BYTE02_01_ctrl_f_byte02_01_mask                          (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE02_01_ctrl_f_byte03_01_mask                          (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE02_01_ctrl_f_byte01_01(data)                         (0x00C00000&((data)<<22))
#define  P2P_P2P_CTRL_F_BYTE02_01_ctrl_f_byte02_01(data)                         (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE02_01_ctrl_f_byte03_01(data)                         (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE02_01_get_ctrl_f_byte01_01(data)                     ((0x00C00000&(data))>>22)
#define  P2P_P2P_CTRL_F_BYTE02_01_get_ctrl_f_byte02_01(data)                     ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE02_01_get_ctrl_f_byte03_01(data)                     (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE04_01                                               0x1802DE0C
#define  P2P_P2P_CTRL_F_BYTE04_01_reg_addr                                       "0xB802DE0C"
#define  P2P_P2P_CTRL_F_BYTE04_01_reg                                            0xB802DE0C
#define  P2P_P2P_CTRL_F_BYTE04_01_inst_addr                                      "0x0043"
#define  set_P2P_P2P_CTRL_F_BYTE04_01_reg(data)                                  (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE04_01_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE04_01_reg                                        (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE04_01_reg))
#define  P2P_P2P_CTRL_F_BYTE04_01_ctrl_f_byte04_01_shift                         (8)
#define  P2P_P2P_CTRL_F_BYTE04_01_ctrl_f_byte05_01_shift                         (0)
#define  P2P_P2P_CTRL_F_BYTE04_01_ctrl_f_byte04_01_mask                          (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE04_01_ctrl_f_byte05_01_mask                          (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE04_01_ctrl_f_byte04_01(data)                         (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE04_01_ctrl_f_byte05_01(data)                         (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE04_01_get_ctrl_f_byte04_01(data)                     ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE04_01_get_ctrl_f_byte05_01(data)                     (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE02_02                                               0x1802DE10
#define  P2P_P2P_CTRL_F_BYTE02_02_reg_addr                                       "0xB802DE10"
#define  P2P_P2P_CTRL_F_BYTE02_02_reg                                            0xB802DE10
#define  P2P_P2P_CTRL_F_BYTE02_02_inst_addr                                      "0x0044"
#define  set_P2P_P2P_CTRL_F_BYTE02_02_reg(data)                                  (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE02_02_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE02_02_reg                                        (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE02_02_reg))
#define  P2P_P2P_CTRL_F_BYTE02_02_ctrl_f_byte01_02_shift                         (22)
#define  P2P_P2P_CTRL_F_BYTE02_02_ctrl_f_byte02_02_shift                         (8)
#define  P2P_P2P_CTRL_F_BYTE02_02_ctrl_f_byte03_02_shift                         (0)
#define  P2P_P2P_CTRL_F_BYTE02_02_ctrl_f_byte01_02_mask                          (0x00C00000)
#define  P2P_P2P_CTRL_F_BYTE02_02_ctrl_f_byte02_02_mask                          (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE02_02_ctrl_f_byte03_02_mask                          (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE02_02_ctrl_f_byte01_02(data)                         (0x00C00000&((data)<<22))
#define  P2P_P2P_CTRL_F_BYTE02_02_ctrl_f_byte02_02(data)                         (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE02_02_ctrl_f_byte03_02(data)                         (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE02_02_get_ctrl_f_byte01_02(data)                     ((0x00C00000&(data))>>22)
#define  P2P_P2P_CTRL_F_BYTE02_02_get_ctrl_f_byte02_02(data)                     ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE02_02_get_ctrl_f_byte03_02(data)                     (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE04_02                                               0x1802DE14
#define  P2P_P2P_CTRL_F_BYTE04_02_reg_addr                                       "0xB802DE14"
#define  P2P_P2P_CTRL_F_BYTE04_02_reg                                            0xB802DE14
#define  P2P_P2P_CTRL_F_BYTE04_02_inst_addr                                      "0x0045"
#define  set_P2P_P2P_CTRL_F_BYTE04_02_reg(data)                                  (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE04_02_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE04_02_reg                                        (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE04_02_reg))
#define  P2P_P2P_CTRL_F_BYTE04_02_ctrl_f_byte04_02_shift                         (8)
#define  P2P_P2P_CTRL_F_BYTE04_02_ctrl_f_byte05_02_shift                         (0)
#define  P2P_P2P_CTRL_F_BYTE04_02_ctrl_f_byte04_02_mask                          (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE04_02_ctrl_f_byte05_02_mask                          (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE04_02_ctrl_f_byte04_02(data)                         (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE04_02_ctrl_f_byte05_02(data)                         (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE04_02_get_ctrl_f_byte04_02(data)                     ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE04_02_get_ctrl_f_byte05_02(data)                     (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE02_03                                               0x1802DE18
#define  P2P_P2P_CTRL_F_BYTE02_03_reg_addr                                       "0xB802DE18"
#define  P2P_P2P_CTRL_F_BYTE02_03_reg                                            0xB802DE18
#define  P2P_P2P_CTRL_F_BYTE02_03_inst_addr                                      "0x0046"
#define  set_P2P_P2P_CTRL_F_BYTE02_03_reg(data)                                  (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE02_03_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE02_03_reg                                        (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE02_03_reg))
#define  P2P_P2P_CTRL_F_BYTE02_03_ctrl_f_byte01_03_shift                         (22)
#define  P2P_P2P_CTRL_F_BYTE02_03_ctrl_f_byte02_03_shift                         (8)
#define  P2P_P2P_CTRL_F_BYTE02_03_ctrl_f_byte03_03_shift                         (0)
#define  P2P_P2P_CTRL_F_BYTE02_03_ctrl_f_byte01_03_mask                          (0x00C00000)
#define  P2P_P2P_CTRL_F_BYTE02_03_ctrl_f_byte02_03_mask                          (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE02_03_ctrl_f_byte03_03_mask                          (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE02_03_ctrl_f_byte01_03(data)                         (0x00C00000&((data)<<22))
#define  P2P_P2P_CTRL_F_BYTE02_03_ctrl_f_byte02_03(data)                         (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE02_03_ctrl_f_byte03_03(data)                         (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE02_03_get_ctrl_f_byte01_03(data)                     ((0x00C00000&(data))>>22)
#define  P2P_P2P_CTRL_F_BYTE02_03_get_ctrl_f_byte02_03(data)                     ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE02_03_get_ctrl_f_byte03_03(data)                     (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE04_03                                               0x1802DE1C
#define  P2P_P2P_CTRL_F_BYTE04_03_reg_addr                                       "0xB802DE1C"
#define  P2P_P2P_CTRL_F_BYTE04_03_reg                                            0xB802DE1C
#define  P2P_P2P_CTRL_F_BYTE04_03_inst_addr                                      "0x0047"
#define  set_P2P_P2P_CTRL_F_BYTE04_03_reg(data)                                  (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE04_03_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE04_03_reg                                        (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE04_03_reg))
#define  P2P_P2P_CTRL_F_BYTE04_03_ctrl_f_byte04_03_shift                         (8)
#define  P2P_P2P_CTRL_F_BYTE04_03_ctrl_f_byte05_03_shift                         (0)
#define  P2P_P2P_CTRL_F_BYTE04_03_ctrl_f_byte04_03_mask                          (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE04_03_ctrl_f_byte05_03_mask                          (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE04_03_ctrl_f_byte04_03(data)                         (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE04_03_ctrl_f_byte05_03(data)                         (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE04_03_get_ctrl_f_byte04_03(data)                     ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE04_03_get_ctrl_f_byte05_03(data)                     (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE02_04                                               0x1802DE20
#define  P2P_P2P_CTRL_F_BYTE02_04_reg_addr                                       "0xB802DE20"
#define  P2P_P2P_CTRL_F_BYTE02_04_reg                                            0xB802DE20
#define  P2P_P2P_CTRL_F_BYTE02_04_inst_addr                                      "0x0048"
#define  set_P2P_P2P_CTRL_F_BYTE02_04_reg(data)                                  (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE02_04_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE02_04_reg                                        (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE02_04_reg))
#define  P2P_P2P_CTRL_F_BYTE02_04_ctrl_f_byte01_04_shift                         (22)
#define  P2P_P2P_CTRL_F_BYTE02_04_ctrl_f_byte02_04_shift                         (8)
#define  P2P_P2P_CTRL_F_BYTE02_04_ctrl_f_byte03_04_shift                         (0)
#define  P2P_P2P_CTRL_F_BYTE02_04_ctrl_f_byte01_04_mask                          (0x00C00000)
#define  P2P_P2P_CTRL_F_BYTE02_04_ctrl_f_byte02_04_mask                          (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE02_04_ctrl_f_byte03_04_mask                          (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE02_04_ctrl_f_byte01_04(data)                         (0x00C00000&((data)<<22))
#define  P2P_P2P_CTRL_F_BYTE02_04_ctrl_f_byte02_04(data)                         (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE02_04_ctrl_f_byte03_04(data)                         (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE02_04_get_ctrl_f_byte01_04(data)                     ((0x00C00000&(data))>>22)
#define  P2P_P2P_CTRL_F_BYTE02_04_get_ctrl_f_byte02_04(data)                     ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE02_04_get_ctrl_f_byte03_04(data)                     (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE04_04                                               0x1802DE24
#define  P2P_P2P_CTRL_F_BYTE04_04_reg_addr                                       "0xB802DE24"
#define  P2P_P2P_CTRL_F_BYTE04_04_reg                                            0xB802DE24
#define  P2P_P2P_CTRL_F_BYTE04_04_inst_addr                                      "0x0049"
#define  set_P2P_P2P_CTRL_F_BYTE04_04_reg(data)                                  (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE04_04_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE04_04_reg                                        (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE04_04_reg))
#define  P2P_P2P_CTRL_F_BYTE04_04_ctrl_f_byte04_04_shift                         (8)
#define  P2P_P2P_CTRL_F_BYTE04_04_ctrl_f_byte05_04_shift                         (0)
#define  P2P_P2P_CTRL_F_BYTE04_04_ctrl_f_byte04_04_mask                          (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE04_04_ctrl_f_byte05_04_mask                          (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE04_04_ctrl_f_byte04_04(data)                         (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE04_04_ctrl_f_byte05_04(data)                         (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE04_04_get_ctrl_f_byte04_04(data)                     ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE04_04_get_ctrl_f_byte05_04(data)                     (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE02_05                                               0x1802DE28
#define  P2P_P2P_CTRL_F_BYTE02_05_reg_addr                                       "0xB802DE28"
#define  P2P_P2P_CTRL_F_BYTE02_05_reg                                            0xB802DE28
#define  P2P_P2P_CTRL_F_BYTE02_05_inst_addr                                      "0x004A"
#define  set_P2P_P2P_CTRL_F_BYTE02_05_reg(data)                                  (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE02_05_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE02_05_reg                                        (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE02_05_reg))
#define  P2P_P2P_CTRL_F_BYTE02_05_ctrl_f_byte01_05_shift                         (22)
#define  P2P_P2P_CTRL_F_BYTE02_05_ctrl_f_byte02_05_shift                         (8)
#define  P2P_P2P_CTRL_F_BYTE02_05_ctrl_f_byte03_05_shift                         (0)
#define  P2P_P2P_CTRL_F_BYTE02_05_ctrl_f_byte01_05_mask                          (0x00C00000)
#define  P2P_P2P_CTRL_F_BYTE02_05_ctrl_f_byte02_05_mask                          (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE02_05_ctrl_f_byte03_05_mask                          (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE02_05_ctrl_f_byte01_05(data)                         (0x00C00000&((data)<<22))
#define  P2P_P2P_CTRL_F_BYTE02_05_ctrl_f_byte02_05(data)                         (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE02_05_ctrl_f_byte03_05(data)                         (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE02_05_get_ctrl_f_byte01_05(data)                     ((0x00C00000&(data))>>22)
#define  P2P_P2P_CTRL_F_BYTE02_05_get_ctrl_f_byte02_05(data)                     ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE02_05_get_ctrl_f_byte03_05(data)                     (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE04_05                                               0x1802DE2C
#define  P2P_P2P_CTRL_F_BYTE04_05_reg_addr                                       "0xB802DE2C"
#define  P2P_P2P_CTRL_F_BYTE04_05_reg                                            0xB802DE2C
#define  P2P_P2P_CTRL_F_BYTE04_05_inst_addr                                      "0x004B"
#define  set_P2P_P2P_CTRL_F_BYTE04_05_reg(data)                                  (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE04_05_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE04_05_reg                                        (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE04_05_reg))
#define  P2P_P2P_CTRL_F_BYTE04_05_ctrl_f_byte04_05_shift                         (8)
#define  P2P_P2P_CTRL_F_BYTE04_05_ctrl_f_byte05_05_shift                         (0)
#define  P2P_P2P_CTRL_F_BYTE04_05_ctrl_f_byte04_05_mask                          (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE04_05_ctrl_f_byte05_05_mask                          (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE04_05_ctrl_f_byte04_05(data)                         (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE04_05_ctrl_f_byte05_05(data)                         (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE04_05_get_ctrl_f_byte04_05(data)                     ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE04_05_get_ctrl_f_byte05_05(data)                     (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE02_06                                               0x1802DE30
#define  P2P_P2P_CTRL_F_BYTE02_06_reg_addr                                       "0xB802DE30"
#define  P2P_P2P_CTRL_F_BYTE02_06_reg                                            0xB802DE30
#define  P2P_P2P_CTRL_F_BYTE02_06_inst_addr                                      "0x004C"
#define  set_P2P_P2P_CTRL_F_BYTE02_06_reg(data)                                  (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE02_06_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE02_06_reg                                        (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE02_06_reg))
#define  P2P_P2P_CTRL_F_BYTE02_06_ctrl_f_byte01_06_shift                         (22)
#define  P2P_P2P_CTRL_F_BYTE02_06_ctrl_f_byte02_06_shift                         (8)
#define  P2P_P2P_CTRL_F_BYTE02_06_ctrl_f_byte03_06_shift                         (0)
#define  P2P_P2P_CTRL_F_BYTE02_06_ctrl_f_byte01_06_mask                          (0x00C00000)
#define  P2P_P2P_CTRL_F_BYTE02_06_ctrl_f_byte02_06_mask                          (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE02_06_ctrl_f_byte03_06_mask                          (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE02_06_ctrl_f_byte01_06(data)                         (0x00C00000&((data)<<22))
#define  P2P_P2P_CTRL_F_BYTE02_06_ctrl_f_byte02_06(data)                         (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE02_06_ctrl_f_byte03_06(data)                         (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE02_06_get_ctrl_f_byte01_06(data)                     ((0x00C00000&(data))>>22)
#define  P2P_P2P_CTRL_F_BYTE02_06_get_ctrl_f_byte02_06(data)                     ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE02_06_get_ctrl_f_byte03_06(data)                     (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE04_06                                               0x1802DE34
#define  P2P_P2P_CTRL_F_BYTE04_06_reg_addr                                       "0xB802DE34"
#define  P2P_P2P_CTRL_F_BYTE04_06_reg                                            0xB802DE34
#define  P2P_P2P_CTRL_F_BYTE04_06_inst_addr                                      "0x004D"
#define  set_P2P_P2P_CTRL_F_BYTE04_06_reg(data)                                  (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE04_06_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE04_06_reg                                        (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE04_06_reg))
#define  P2P_P2P_CTRL_F_BYTE04_06_ctrl_f_byte04_06_shift                         (8)
#define  P2P_P2P_CTRL_F_BYTE04_06_ctrl_f_byte05_06_shift                         (0)
#define  P2P_P2P_CTRL_F_BYTE04_06_ctrl_f_byte04_06_mask                          (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE04_06_ctrl_f_byte05_06_mask                          (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE04_06_ctrl_f_byte04_06(data)                         (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE04_06_ctrl_f_byte05_06(data)                         (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE04_06_get_ctrl_f_byte04_06(data)                     ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE04_06_get_ctrl_f_byte05_06(data)                     (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE02_07                                               0x1802DE38
#define  P2P_P2P_CTRL_F_BYTE02_07_reg_addr                                       "0xB802DE38"
#define  P2P_P2P_CTRL_F_BYTE02_07_reg                                            0xB802DE38
#define  P2P_P2P_CTRL_F_BYTE02_07_inst_addr                                      "0x004E"
#define  set_P2P_P2P_CTRL_F_BYTE02_07_reg(data)                                  (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE02_07_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE02_07_reg                                        (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE02_07_reg))
#define  P2P_P2P_CTRL_F_BYTE02_07_ctrl_f_byte01_07_shift                         (22)
#define  P2P_P2P_CTRL_F_BYTE02_07_ctrl_f_byte02_07_shift                         (8)
#define  P2P_P2P_CTRL_F_BYTE02_07_ctrl_f_byte03_07_shift                         (0)
#define  P2P_P2P_CTRL_F_BYTE02_07_ctrl_f_byte01_07_mask                          (0x00C00000)
#define  P2P_P2P_CTRL_F_BYTE02_07_ctrl_f_byte02_07_mask                          (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE02_07_ctrl_f_byte03_07_mask                          (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE02_07_ctrl_f_byte01_07(data)                         (0x00C00000&((data)<<22))
#define  P2P_P2P_CTRL_F_BYTE02_07_ctrl_f_byte02_07(data)                         (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE02_07_ctrl_f_byte03_07(data)                         (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE02_07_get_ctrl_f_byte01_07(data)                     ((0x00C00000&(data))>>22)
#define  P2P_P2P_CTRL_F_BYTE02_07_get_ctrl_f_byte02_07(data)                     ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE02_07_get_ctrl_f_byte03_07(data)                     (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE04_07                                               0x1802DE3C
#define  P2P_P2P_CTRL_F_BYTE04_07_reg_addr                                       "0xB802DE3C"
#define  P2P_P2P_CTRL_F_BYTE04_07_reg                                            0xB802DE3C
#define  P2P_P2P_CTRL_F_BYTE04_07_inst_addr                                      "0x004F"
#define  set_P2P_P2P_CTRL_F_BYTE04_07_reg(data)                                  (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE04_07_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE04_07_reg                                        (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE04_07_reg))
#define  P2P_P2P_CTRL_F_BYTE04_07_ctrl_f_byte04_07_shift                         (8)
#define  P2P_P2P_CTRL_F_BYTE04_07_ctrl_f_byte05_07_shift                         (0)
#define  P2P_P2P_CTRL_F_BYTE04_07_ctrl_f_byte04_07_mask                          (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE04_07_ctrl_f_byte05_07_mask                          (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE04_07_ctrl_f_byte04_07(data)                         (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE04_07_ctrl_f_byte05_07(data)                         (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE04_07_get_ctrl_f_byte04_07(data)                     ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE04_07_get_ctrl_f_byte05_07(data)                     (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE02_08                                               0x1802DE40
#define  P2P_P2P_CTRL_F_BYTE02_08_reg_addr                                       "0xB802DE40"
#define  P2P_P2P_CTRL_F_BYTE02_08_reg                                            0xB802DE40
#define  P2P_P2P_CTRL_F_BYTE02_08_inst_addr                                      "0x0050"
#define  set_P2P_P2P_CTRL_F_BYTE02_08_reg(data)                                  (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE02_08_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE02_08_reg                                        (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE02_08_reg))
#define  P2P_P2P_CTRL_F_BYTE02_08_ctrl_f_byte01_08_shift                         (22)
#define  P2P_P2P_CTRL_F_BYTE02_08_ctrl_f_byte02_08_shift                         (8)
#define  P2P_P2P_CTRL_F_BYTE02_08_ctrl_f_byte03_08_shift                         (0)
#define  P2P_P2P_CTRL_F_BYTE02_08_ctrl_f_byte01_08_mask                          (0x00C00000)
#define  P2P_P2P_CTRL_F_BYTE02_08_ctrl_f_byte02_08_mask                          (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE02_08_ctrl_f_byte03_08_mask                          (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE02_08_ctrl_f_byte01_08(data)                         (0x00C00000&((data)<<22))
#define  P2P_P2P_CTRL_F_BYTE02_08_ctrl_f_byte02_08(data)                         (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE02_08_ctrl_f_byte03_08(data)                         (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE02_08_get_ctrl_f_byte01_08(data)                     ((0x00C00000&(data))>>22)
#define  P2P_P2P_CTRL_F_BYTE02_08_get_ctrl_f_byte02_08(data)                     ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE02_08_get_ctrl_f_byte03_08(data)                     (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE04_08                                               0x1802DE44
#define  P2P_P2P_CTRL_F_BYTE04_08_reg_addr                                       "0xB802DE44"
#define  P2P_P2P_CTRL_F_BYTE04_08_reg                                            0xB802DE44
#define  P2P_P2P_CTRL_F_BYTE04_08_inst_addr                                      "0x0051"
#define  set_P2P_P2P_CTRL_F_BYTE04_08_reg(data)                                  (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE04_08_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE04_08_reg                                        (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE04_08_reg))
#define  P2P_P2P_CTRL_F_BYTE04_08_ctrl_f_byte04_08_shift                         (8)
#define  P2P_P2P_CTRL_F_BYTE04_08_ctrl_f_byte05_08_shift                         (0)
#define  P2P_P2P_CTRL_F_BYTE04_08_ctrl_f_byte04_08_mask                          (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE04_08_ctrl_f_byte05_08_mask                          (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE04_08_ctrl_f_byte04_08(data)                         (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE04_08_ctrl_f_byte05_08(data)                         (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE04_08_get_ctrl_f_byte04_08(data)                     ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE04_08_get_ctrl_f_byte05_08(data)                     (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE02_09                                               0x1802DE48
#define  P2P_P2P_CTRL_F_BYTE02_09_reg_addr                                       "0xB802DE48"
#define  P2P_P2P_CTRL_F_BYTE02_09_reg                                            0xB802DE48
#define  P2P_P2P_CTRL_F_BYTE02_09_inst_addr                                      "0x0052"
#define  set_P2P_P2P_CTRL_F_BYTE02_09_reg(data)                                  (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE02_09_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE02_09_reg                                        (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE02_09_reg))
#define  P2P_P2P_CTRL_F_BYTE02_09_ctrl_f_byte01_09_shift                         (22)
#define  P2P_P2P_CTRL_F_BYTE02_09_ctrl_f_byte02_09_shift                         (8)
#define  P2P_P2P_CTRL_F_BYTE02_09_ctrl_f_byte03_09_shift                         (0)
#define  P2P_P2P_CTRL_F_BYTE02_09_ctrl_f_byte01_09_mask                          (0x00C00000)
#define  P2P_P2P_CTRL_F_BYTE02_09_ctrl_f_byte02_09_mask                          (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE02_09_ctrl_f_byte03_09_mask                          (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE02_09_ctrl_f_byte01_09(data)                         (0x00C00000&((data)<<22))
#define  P2P_P2P_CTRL_F_BYTE02_09_ctrl_f_byte02_09(data)                         (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE02_09_ctrl_f_byte03_09(data)                         (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE02_09_get_ctrl_f_byte01_09(data)                     ((0x00C00000&(data))>>22)
#define  P2P_P2P_CTRL_F_BYTE02_09_get_ctrl_f_byte02_09(data)                     ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE02_09_get_ctrl_f_byte03_09(data)                     (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE04_09                                               0x1802DE4C
#define  P2P_P2P_CTRL_F_BYTE04_09_reg_addr                                       "0xB802DE4C"
#define  P2P_P2P_CTRL_F_BYTE04_09_reg                                            0xB802DE4C
#define  P2P_P2P_CTRL_F_BYTE04_09_inst_addr                                      "0x0053"
#define  set_P2P_P2P_CTRL_F_BYTE04_09_reg(data)                                  (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE04_09_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE04_09_reg                                        (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE04_09_reg))
#define  P2P_P2P_CTRL_F_BYTE04_09_ctrl_f_byte04_09_shift                         (8)
#define  P2P_P2P_CTRL_F_BYTE04_09_ctrl_f_byte05_09_shift                         (0)
#define  P2P_P2P_CTRL_F_BYTE04_09_ctrl_f_byte04_09_mask                          (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE04_09_ctrl_f_byte05_09_mask                          (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE04_09_ctrl_f_byte04_09(data)                         (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE04_09_ctrl_f_byte05_09(data)                         (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE04_09_get_ctrl_f_byte04_09(data)                     ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE04_09_get_ctrl_f_byte05_09(data)                     (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE02_10                                               0x1802DE50
#define  P2P_P2P_CTRL_F_BYTE02_10_reg_addr                                       "0xB802DE50"
#define  P2P_P2P_CTRL_F_BYTE02_10_reg                                            0xB802DE50
#define  P2P_P2P_CTRL_F_BYTE02_10_inst_addr                                      "0x0054"
#define  set_P2P_P2P_CTRL_F_BYTE02_10_reg(data)                                  (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE02_10_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE02_10_reg                                        (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE02_10_reg))
#define  P2P_P2P_CTRL_F_BYTE02_10_ctrl_f_byte01_10_shift                         (22)
#define  P2P_P2P_CTRL_F_BYTE02_10_ctrl_f_byte02_10_shift                         (8)
#define  P2P_P2P_CTRL_F_BYTE02_10_ctrl_f_byte03_10_shift                         (0)
#define  P2P_P2P_CTRL_F_BYTE02_10_ctrl_f_byte01_10_mask                          (0x00C00000)
#define  P2P_P2P_CTRL_F_BYTE02_10_ctrl_f_byte02_10_mask                          (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE02_10_ctrl_f_byte03_10_mask                          (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE02_10_ctrl_f_byte01_10(data)                         (0x00C00000&((data)<<22))
#define  P2P_P2P_CTRL_F_BYTE02_10_ctrl_f_byte02_10(data)                         (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE02_10_ctrl_f_byte03_10(data)                         (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE02_10_get_ctrl_f_byte01_10(data)                     ((0x00C00000&(data))>>22)
#define  P2P_P2P_CTRL_F_BYTE02_10_get_ctrl_f_byte02_10(data)                     ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE02_10_get_ctrl_f_byte03_10(data)                     (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE04_10                                               0x1802DE54
#define  P2P_P2P_CTRL_F_BYTE04_10_reg_addr                                       "0xB802DE54"
#define  P2P_P2P_CTRL_F_BYTE04_10_reg                                            0xB802DE54
#define  P2P_P2P_CTRL_F_BYTE04_10_inst_addr                                      "0x0055"
#define  set_P2P_P2P_CTRL_F_BYTE04_10_reg(data)                                  (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE04_10_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE04_10_reg                                        (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE04_10_reg))
#define  P2P_P2P_CTRL_F_BYTE04_10_ctrl_f_byte04_10_shift                         (8)
#define  P2P_P2P_CTRL_F_BYTE04_10_ctrl_f_byte05_10_shift                         (0)
#define  P2P_P2P_CTRL_F_BYTE04_10_ctrl_f_byte04_10_mask                          (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE04_10_ctrl_f_byte05_10_mask                          (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE04_10_ctrl_f_byte04_10(data)                         (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE04_10_ctrl_f_byte05_10(data)                         (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE04_10_get_ctrl_f_byte04_10(data)                     ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE04_10_get_ctrl_f_byte05_10(data)                     (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE02_11                                               0x1802DE58
#define  P2P_P2P_CTRL_F_BYTE02_11_reg_addr                                       "0xB802DE58"
#define  P2P_P2P_CTRL_F_BYTE02_11_reg                                            0xB802DE58
#define  P2P_P2P_CTRL_F_BYTE02_11_inst_addr                                      "0x0056"
#define  set_P2P_P2P_CTRL_F_BYTE02_11_reg(data)                                  (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE02_11_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE02_11_reg                                        (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE02_11_reg))
#define  P2P_P2P_CTRL_F_BYTE02_11_ctrl_f_byte01_11_shift                         (22)
#define  P2P_P2P_CTRL_F_BYTE02_11_ctrl_f_byte02_11_shift                         (8)
#define  P2P_P2P_CTRL_F_BYTE02_11_ctrl_f_byte03_11_shift                         (0)
#define  P2P_P2P_CTRL_F_BYTE02_11_ctrl_f_byte01_11_mask                          (0x00C00000)
#define  P2P_P2P_CTRL_F_BYTE02_11_ctrl_f_byte02_11_mask                          (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE02_11_ctrl_f_byte03_11_mask                          (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE02_11_ctrl_f_byte01_11(data)                         (0x00C00000&((data)<<22))
#define  P2P_P2P_CTRL_F_BYTE02_11_ctrl_f_byte02_11(data)                         (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE02_11_ctrl_f_byte03_11(data)                         (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE02_11_get_ctrl_f_byte01_11(data)                     ((0x00C00000&(data))>>22)
#define  P2P_P2P_CTRL_F_BYTE02_11_get_ctrl_f_byte02_11(data)                     ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE02_11_get_ctrl_f_byte03_11(data)                     (0x000000FF&(data))

#define  P2P_P2P_CTRL_F_BYTE04_11                                               0x1802DE5C
#define  P2P_P2P_CTRL_F_BYTE04_11_reg_addr                                       "0xB802DE5C"
#define  P2P_P2P_CTRL_F_BYTE04_11_reg                                            0xB802DE5C
#define  P2P_P2P_CTRL_F_BYTE04_11_inst_addr                                      "0x0057"
#define  set_P2P_P2P_CTRL_F_BYTE04_11_reg(data)                                  (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE04_11_reg)=data)
#define  get_P2P_P2P_CTRL_F_BYTE04_11_reg                                        (*((volatile unsigned int*)P2P_P2P_CTRL_F_BYTE04_11_reg))
#define  P2P_P2P_CTRL_F_BYTE04_11_ctrl_f_byte04_11_shift                         (8)
#define  P2P_P2P_CTRL_F_BYTE04_11_ctrl_f_byte05_11_shift                         (0)
#define  P2P_P2P_CTRL_F_BYTE04_11_ctrl_f_byte04_11_mask                          (0x0000FF00)
#define  P2P_P2P_CTRL_F_BYTE04_11_ctrl_f_byte05_11_mask                          (0x000000FF)
#define  P2P_P2P_CTRL_F_BYTE04_11_ctrl_f_byte04_11(data)                         (0x0000FF00&((data)<<8))
#define  P2P_P2P_CTRL_F_BYTE04_11_ctrl_f_byte05_11(data)                         (0x000000FF&(data))
#define  P2P_P2P_CTRL_F_BYTE04_11_get_ctrl_f_byte04_11(data)                     ((0x0000FF00&(data))>>8)
#define  P2P_P2P_CTRL_F_BYTE04_11_get_ctrl_f_byte05_11(data)                     (0x000000FF&(data))

#define  P2P_P2P_POL_INV_0                                                      0x1802DE60
#define  P2P_P2P_POL_INV_0_reg_addr                                              "0xB802DE60"
#define  P2P_P2P_POL_INV_0_reg                                                   0xB802DE60
#define  P2P_P2P_POL_INV_0_inst_addr                                             "0x0058"
#define  set_P2P_P2P_POL_INV_0_reg(data)                                         (*((volatile unsigned int*)P2P_P2P_POL_INV_0_reg)=data)
#define  get_P2P_P2P_POL_INV_0_reg                                               (*((volatile unsigned int*)P2P_P2P_POL_INV_0_reg))
#define  P2P_P2P_POL_INV_0_pol_inv_shift                                         (16)
#define  P2P_P2P_POL_INV_0_polc_inv_shift                                        (0)
#define  P2P_P2P_POL_INV_0_pol_inv_mask                                          (0x0FFF0000)
#define  P2P_P2P_POL_INV_0_polc_inv_mask                                         (0x00000FFF)
#define  P2P_P2P_POL_INV_0_pol_inv(data)                                         (0x0FFF0000&((data)<<16))
#define  P2P_P2P_POL_INV_0_polc_inv(data)                                        (0x00000FFF&(data))
#define  P2P_P2P_POL_INV_0_get_pol_inv(data)                                     ((0x0FFF0000&(data))>>16)
#define  P2P_P2P_POL_INV_0_get_polc_inv(data)                                    (0x00000FFF&(data))

#define  P2P_P2P_POL_INV_1                                                      0x1802DE64
#define  P2P_P2P_POL_INV_1_reg_addr                                              "0xB802DE64"
#define  P2P_P2P_POL_INV_1_reg                                                   0xB802DE64
#define  P2P_P2P_POL_INV_1_inst_addr                                             "0x0059"
#define  set_P2P_P2P_POL_INV_1_reg(data)                                         (*((volatile unsigned int*)P2P_P2P_POL_INV_1_reg)=data)
#define  get_P2P_P2P_POL_INV_1_reg                                               (*((volatile unsigned int*)P2P_P2P_POL_INV_1_reg))
#define  P2P_P2P_POL_INV_1_pol2_inv_shift                                        (16)
#define  P2P_P2P_POL_INV_1_pol3_inv_shift                                        (0)
#define  P2P_P2P_POL_INV_1_pol2_inv_mask                                         (0x0FFF0000)
#define  P2P_P2P_POL_INV_1_pol3_inv_mask                                         (0x00000FFF)
#define  P2P_P2P_POL_INV_1_pol2_inv(data)                                        (0x0FFF0000&((data)<<16))
#define  P2P_P2P_POL_INV_1_pol3_inv(data)                                        (0x00000FFF&(data))
#define  P2P_P2P_POL_INV_1_get_pol2_inv(data)                                    ((0x0FFF0000&(data))>>16)
#define  P2P_P2P_POL_INV_1_get_pol3_inv(data)                                    (0x00000FFF&(data))

#define  P2P_P2P_K3_LOC_0                                                       0x1802DE68
#define  P2P_P2P_K3_LOC_0_reg_addr                                               "0xB802DE68"
#define  P2P_P2P_K3_LOC_0_reg                                                    0xB802DE68
#define  P2P_P2P_K3_LOC_0_inst_addr                                              "0x005A"
#define  set_P2P_P2P_K3_LOC_0_reg(data)                                          (*((volatile unsigned int*)P2P_P2P_K3_LOC_0_reg)=data)
#define  get_P2P_P2P_K3_LOC_0_reg                                                (*((volatile unsigned int*)P2P_P2P_K3_LOC_0_reg))
#define  P2P_P2P_K3_LOC_0_k3_line_start_00_shift                                 (28)
#define  P2P_P2P_K3_LOC_0_k3_line_start_01_shift                                 (24)
#define  P2P_P2P_K3_LOC_0_k3_line_start_02_shift                                 (20)
#define  P2P_P2P_K3_LOC_0_k3_line_start_03_shift                                 (16)
#define  P2P_P2P_K3_LOC_0_k3_line_start_04_shift                                 (12)
#define  P2P_P2P_K3_LOC_0_k3_line_start_05_shift                                 (8)
#define  P2P_P2P_K3_LOC_0_k3_line_start_06_shift                                 (4)
#define  P2P_P2P_K3_LOC_0_k3_line_start_07_shift                                 (0)
#define  P2P_P2P_K3_LOC_0_k3_line_start_00_mask                                  (0xF0000000)
#define  P2P_P2P_K3_LOC_0_k3_line_start_01_mask                                  (0x0F000000)
#define  P2P_P2P_K3_LOC_0_k3_line_start_02_mask                                  (0x00F00000)
#define  P2P_P2P_K3_LOC_0_k3_line_start_03_mask                                  (0x000F0000)
#define  P2P_P2P_K3_LOC_0_k3_line_start_04_mask                                  (0x0000F000)
#define  P2P_P2P_K3_LOC_0_k3_line_start_05_mask                                  (0x00000F00)
#define  P2P_P2P_K3_LOC_0_k3_line_start_06_mask                                  (0x000000F0)
#define  P2P_P2P_K3_LOC_0_k3_line_start_07_mask                                  (0x0000000F)
#define  P2P_P2P_K3_LOC_0_k3_line_start_00(data)                                 (0xF0000000&((data)<<28))
#define  P2P_P2P_K3_LOC_0_k3_line_start_01(data)                                 (0x0F000000&((data)<<24))
#define  P2P_P2P_K3_LOC_0_k3_line_start_02(data)                                 (0x00F00000&((data)<<20))
#define  P2P_P2P_K3_LOC_0_k3_line_start_03(data)                                 (0x000F0000&((data)<<16))
#define  P2P_P2P_K3_LOC_0_k3_line_start_04(data)                                 (0x0000F000&((data)<<12))
#define  P2P_P2P_K3_LOC_0_k3_line_start_05(data)                                 (0x00000F00&((data)<<8))
#define  P2P_P2P_K3_LOC_0_k3_line_start_06(data)                                 (0x000000F0&((data)<<4))
#define  P2P_P2P_K3_LOC_0_k3_line_start_07(data)                                 (0x0000000F&(data))
#define  P2P_P2P_K3_LOC_0_get_k3_line_start_00(data)                             ((0xF0000000&(data))>>28)
#define  P2P_P2P_K3_LOC_0_get_k3_line_start_01(data)                             ((0x0F000000&(data))>>24)
#define  P2P_P2P_K3_LOC_0_get_k3_line_start_02(data)                             ((0x00F00000&(data))>>20)
#define  P2P_P2P_K3_LOC_0_get_k3_line_start_03(data)                             ((0x000F0000&(data))>>16)
#define  P2P_P2P_K3_LOC_0_get_k3_line_start_04(data)                             ((0x0000F000&(data))>>12)
#define  P2P_P2P_K3_LOC_0_get_k3_line_start_05(data)                             ((0x00000F00&(data))>>8)
#define  P2P_P2P_K3_LOC_0_get_k3_line_start_06(data)                             ((0x000000F0&(data))>>4)
#define  P2P_P2P_K3_LOC_0_get_k3_line_start_07(data)                             (0x0000000F&(data))

#define  P2P_P2P_K3_LOC_1                                                       0x1802DE6C
#define  P2P_P2P_K3_LOC_1_reg_addr                                               "0xB802DE6C"
#define  P2P_P2P_K3_LOC_1_reg                                                    0xB802DE6C
#define  P2P_P2P_K3_LOC_1_inst_addr                                              "0x005B"
#define  set_P2P_P2P_K3_LOC_1_reg(data)                                          (*((volatile unsigned int*)P2P_P2P_K3_LOC_1_reg)=data)
#define  get_P2P_P2P_K3_LOC_1_reg                                                (*((volatile unsigned int*)P2P_P2P_K3_LOC_1_reg))
#define  P2P_P2P_K3_LOC_1_k3_line_start_08_shift                                 (28)
#define  P2P_P2P_K3_LOC_1_k3_line_start_09_shift                                 (24)
#define  P2P_P2P_K3_LOC_1_k3_line_start_10_shift                                 (20)
#define  P2P_P2P_K3_LOC_1_k3_line_start_11_shift                                 (16)
#define  P2P_P2P_K3_LOC_1_k3_line_period_shift                                   (0)
#define  P2P_P2P_K3_LOC_1_k3_line_start_08_mask                                  (0xF0000000)
#define  P2P_P2P_K3_LOC_1_k3_line_start_09_mask                                  (0x0F000000)
#define  P2P_P2P_K3_LOC_1_k3_line_start_10_mask                                  (0x00F00000)
#define  P2P_P2P_K3_LOC_1_k3_line_start_11_mask                                  (0x000F0000)
#define  P2P_P2P_K3_LOC_1_k3_line_period_mask                                    (0x0000000F)
#define  P2P_P2P_K3_LOC_1_k3_line_start_08(data)                                 (0xF0000000&((data)<<28))
#define  P2P_P2P_K3_LOC_1_k3_line_start_09(data)                                 (0x0F000000&((data)<<24))
#define  P2P_P2P_K3_LOC_1_k3_line_start_10(data)                                 (0x00F00000&((data)<<20))
#define  P2P_P2P_K3_LOC_1_k3_line_start_11(data)                                 (0x000F0000&((data)<<16))
#define  P2P_P2P_K3_LOC_1_k3_line_period(data)                                   (0x0000000F&(data))
#define  P2P_P2P_K3_LOC_1_get_k3_line_start_08(data)                             ((0xF0000000&(data))>>28)
#define  P2P_P2P_K3_LOC_1_get_k3_line_start_09(data)                             ((0x0F000000&(data))>>24)
#define  P2P_P2P_K3_LOC_1_get_k3_line_start_10(data)                             ((0x00F00000&(data))>>20)
#define  P2P_P2P_K3_LOC_1_get_k3_line_start_11(data)                             ((0x000F0000&(data))>>16)
#define  P2P_P2P_K3_LOC_1_get_k3_line_period(data)                               (0x0000000F&(data))

#define  P2P_P2P_FIFO_BIST                                                      0x1802DE70
#define  P2P_P2P_FIFO_BIST_reg_addr                                              "0xB802DE70"
#define  P2P_P2P_FIFO_BIST_reg                                                   0xB802DE70
#define  P2P_P2P_FIFO_BIST_inst_addr                                             "0x005C"
#define  set_P2P_P2P_FIFO_BIST_reg(data)                                         (*((volatile unsigned int*)P2P_P2P_FIFO_BIST_reg)=data)
#define  get_P2P_P2P_FIFO_BIST_reg                                               (*((volatile unsigned int*)P2P_P2P_FIFO_BIST_reg))
#define  P2P_P2P_FIFO_BIST_p2p_bist_enable_shift                                 (31)
#define  P2P_P2P_FIFO_BIST_p2p_bist_done_shift                                   (30)
#define  P2P_P2P_FIFO_BIST_p2p_bist_result_shift                                 (29)
#define  P2P_P2P_FIFO_BIST_p2p_bist_length_shift                                 (0)
#define  P2P_P2P_FIFO_BIST_p2p_bist_enable_mask                                  (0x80000000)
#define  P2P_P2P_FIFO_BIST_p2p_bist_done_mask                                    (0x40000000)
#define  P2P_P2P_FIFO_BIST_p2p_bist_result_mask                                  (0x20000000)
#define  P2P_P2P_FIFO_BIST_p2p_bist_length_mask                                  (0x000FFFFF)
#define  P2P_P2P_FIFO_BIST_p2p_bist_enable(data)                                 (0x80000000&((data)<<31))
#define  P2P_P2P_FIFO_BIST_p2p_bist_done(data)                                   (0x40000000&((data)<<30))
#define  P2P_P2P_FIFO_BIST_p2p_bist_result(data)                                 (0x20000000&((data)<<29))
#define  P2P_P2P_FIFO_BIST_p2p_bist_length(data)                                 (0x000FFFFF&(data))
#define  P2P_P2P_FIFO_BIST_get_p2p_bist_enable(data)                             ((0x80000000&(data))>>31)
#define  P2P_P2P_FIFO_BIST_get_p2p_bist_done(data)                               ((0x40000000&(data))>>30)
#define  P2P_P2P_FIFO_BIST_get_p2p_bist_result(data)                             ((0x20000000&(data))>>29)
#define  P2P_P2P_FIFO_BIST_get_p2p_bist_length(data)                             (0x000FFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======P2P register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  phy_clk_div:9;
        RBus_UInt32  res2:6;
        RBus_UInt32  p2p_bit_mode:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  p2p_lane_mode:2;
        RBus_UInt32  res4:3;
        RBus_UInt32  p2p_en:1;
    };
}p2p_p2p_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fsm_force_mode3:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  standby_time_10us:5;
        RBus_UInt32  res2:2;
        RBus_UInt32  training_time_500us:10;
        RBus_UInt32  lsp_times:4;
    };
}p2p_p2p_fsm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  clock_pattern:10;
        RBus_UInt32  dummy1802dd08_19_1:19;
        RBus_UInt32  dis_clock_at_bcc:1;
    };
}p2p_p2p_clock_pattern_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802dd0c_31_28:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  k1_symbol:10;
        RBus_UInt32  dummy1802dd0c_15_12:4;
        RBus_UInt32  res2:2;
        RBus_UInt32  k2_symbol:10;
    };
}p2p_p2p_k12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802dd10_31_28:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  k3_symbol:10;
        RBus_UInt32  dummy1802dd10_15_12:4;
        RBus_UInt32  res2:2;
        RBus_UInt32  k4_symbol:10;
    };
}p2p_p2p_k34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802dd14_31_28:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  g1_symbol:10;
        RBus_UInt32  dummy1802dd14_15_12:4;
        RBus_UInt32  res2:2;
        RBus_UInt32  g2_symbol:10;
    };
}p2p_p2p_g12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802dd18_31_28:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  g3_symbol:10;
        RBus_UInt32  dummy1802dd18_15_12:4;
        RBus_UInt32  res2:2;
        RBus_UInt32  g4_symbol:10;
    };
}p2p_p2p_g34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  lsp_k3_loc00:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  lsp_k3_loc01:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  lsp_k3_loc02:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  lsp_k3_loc03:5;
    };
}p2p_p2p_lsp_k3_loc00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  lsp_k3_loc04:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  lsp_k3_loc05:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  lsp_k3_loc06:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  lsp_k3_loc07:5;
    };
}p2p_p2p_lsp_k3_loc04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  lsp_k3_loc08:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  lsp_k3_loc09:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  lsp_k3_loc10:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  lsp_k3_loc11:5;
    };
}p2p_p2p_lsp_k3_loc08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802dd28_31_24:8;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon_sel_fsync:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon_sel_pol:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  tcon_sel_polc:5;
    };
}p2p_p2p_tcon_sel0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802dd2c_31_24:8;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon_sel_bkdu:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon_sel_pol2:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  tcon_sel_pol3:5;
    };
}p2p_p2p_tcon_sel1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte0_00:8;
        RBus_UInt32  ctrl_l_byte0_01:8;
        RBus_UInt32  ctrl_l_byte0_02:8;
        RBus_UInt32  ctrl_l_byte0_03:8;
    };
}p2p_p2p_ctrl_l_byte0_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte0_04:8;
        RBus_UInt32  ctrl_l_byte0_05:8;
        RBus_UInt32  ctrl_l_byte0_06:8;
        RBus_UInt32  ctrl_l_byte0_07:8;
    };
}p2p_p2p_ctrl_l_byte0_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte0_08:8;
        RBus_UInt32  ctrl_l_byte0_09:8;
        RBus_UInt32  ctrl_l_byte0_10:8;
        RBus_UInt32  ctrl_l_byte0_11:8;
    };
}p2p_p2p_ctrl_l_byte0_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte1_even00:8;
        RBus_UInt32  ctrl_l_byte1_even01:8;
        RBus_UInt32  ctrl_l_byte1_even02:8;
        RBus_UInt32  ctrl_l_byte1_even03:8;
    };
}p2p_p2p_ctrl_l_byte1_even00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte1_even04:8;
        RBus_UInt32  ctrl_l_byte1_even05:8;
        RBus_UInt32  ctrl_l_byte1_even06:8;
        RBus_UInt32  ctrl_l_byte1_even07:8;
    };
}p2p_p2p_ctrl_l_byte1_even04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte1_even08:8;
        RBus_UInt32  ctrl_l_byte1_even09:8;
        RBus_UInt32  ctrl_l_byte1_even10:8;
        RBus_UInt32  ctrl_l_byte1_even11:8;
    };
}p2p_p2p_ctrl_l_byte1_even08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte1_odd00:8;
        RBus_UInt32  ctrl_l_byte1_odd01:8;
        RBus_UInt32  ctrl_l_byte1_odd02:8;
        RBus_UInt32  ctrl_l_byte1_odd03:8;
    };
}p2p_p2p_ctrl_l_byte1_odd00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte1_odd04:8;
        RBus_UInt32  ctrl_l_byte1_odd05:8;
        RBus_UInt32  ctrl_l_byte1_odd06:8;
        RBus_UInt32  ctrl_l_byte1_odd07:8;
    };
}p2p_p2p_ctrl_l_byte1_odd04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte1_odd08:8;
        RBus_UInt32  ctrl_l_byte1_odd09:8;
        RBus_UInt32  ctrl_l_byte1_odd10:8;
        RBus_UInt32  ctrl_l_byte1_odd11:8;
    };
}p2p_p2p_ctrl_l_byte1_odd08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte2_even00:8;
        RBus_UInt32  ctrl_l_byte2_even01:8;
        RBus_UInt32  ctrl_l_byte2_even02:8;
        RBus_UInt32  ctrl_l_byte2_even03:8;
    };
}p2p_p2p_ctrl_l_byte2_even00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte2_even04:8;
        RBus_UInt32  ctrl_l_byte2_even05:8;
        RBus_UInt32  ctrl_l_byte2_even06:8;
        RBus_UInt32  ctrl_l_byte2_even07:8;
    };
}p2p_p2p_ctrl_l_byte2_even04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte2_even08:8;
        RBus_UInt32  ctrl_l_byte2_even09:8;
        RBus_UInt32  ctrl_l_byte2_even10:8;
        RBus_UInt32  ctrl_l_byte2_even11:8;
    };
}p2p_p2p_ctrl_l_byte2_even08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte2_odd00:8;
        RBus_UInt32  ctrl_l_byte2_odd01:8;
        RBus_UInt32  ctrl_l_byte2_odd02:8;
        RBus_UInt32  ctrl_l_byte2_odd03:8;
    };
}p2p_p2p_ctrl_l_byte2_odd00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte2_odd04:8;
        RBus_UInt32  ctrl_l_byte2_odd05:8;
        RBus_UInt32  ctrl_l_byte2_odd06:8;
        RBus_UInt32  ctrl_l_byte2_odd07:8;
    };
}p2p_p2p_ctrl_l_byte2_odd04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte2_odd08:8;
        RBus_UInt32  ctrl_l_byte2_odd09:8;
        RBus_UInt32  ctrl_l_byte2_odd10:8;
        RBus_UInt32  ctrl_l_byte2_odd11:8;
    };
}p2p_p2p_ctrl_l_byte2_odd08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte3_00:8;
        RBus_UInt32  ctrl_l_byte3_01:8;
        RBus_UInt32  ctrl_l_byte3_02:8;
        RBus_UInt32  ctrl_l_byte3_03:8;
    };
}p2p_p2p_ctrl_l_byte3_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte3_04:8;
        RBus_UInt32  ctrl_l_byte3_05:8;
        RBus_UInt32  ctrl_l_byte3_06:8;
        RBus_UInt32  ctrl_l_byte3_07:8;
    };
}p2p_p2p_ctrl_l_byte3_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte3_08:8;
        RBus_UInt32  ctrl_l_byte3_09:8;
        RBus_UInt32  ctrl_l_byte3_10:8;
        RBus_UInt32  ctrl_l_byte3_11:8;
    };
}p2p_p2p_ctrl_l_byte3_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte4_00:8;
        RBus_UInt32  ctrl_l_byte4_01:8;
        RBus_UInt32  ctrl_l_byte4_02:8;
        RBus_UInt32  ctrl_l_byte4_03:8;
    };
}p2p_p2p_ctrl_l_byte4_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte4_04:8;
        RBus_UInt32  ctrl_l_byte4_05:8;
        RBus_UInt32  ctrl_l_byte4_06:8;
        RBus_UInt32  ctrl_l_byte4_07:8;
    };
}p2p_p2p_ctrl_l_byte4_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte4_08:8;
        RBus_UInt32  ctrl_l_byte4_09:8;
        RBus_UInt32  ctrl_l_byte4_10:8;
        RBus_UInt32  ctrl_l_byte4_11:8;
    };
}p2p_p2p_ctrl_l_byte4_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte00:8;
        RBus_UInt32  ctrl_f_byte01:8;
        RBus_UInt32  ctrl_f_byte02:8;
        RBus_UInt32  ctrl_f_byte03:8;
    };
}p2p_p2p_ctrl_f_byte00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte04:8;
        RBus_UInt32  ctrl_f_byte05:8;
        RBus_UInt32  ctrl_f_byte06:8;
        RBus_UInt32  ctrl_f_byte07:8;
    };
}p2p_p2p_ctrl_f_byte04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte08:8;
        RBus_UInt32  ctrl_f_byte09:8;
        RBus_UInt32  ctrl_f_byte10:8;
        RBus_UInt32  ctrl_f_byte11:8;
    };
}p2p_p2p_ctrl_f_byte08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte12:8;
        RBus_UInt32  ctrl_f_byte13:8;
        RBus_UInt32  ctrl_f_byte14:8;
        RBus_UInt32  ctrl_f_byte15:8;
    };
}p2p_p2p_ctrl_f_byte12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte16:8;
        RBus_UInt32  ctrl_f_byte17:8;
        RBus_UInt32  ctrl_f_byte18:8;
        RBus_UInt32  ctrl_f_byte19:8;
    };
}p2p_p2p_ctrl_f_byte16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte20:8;
        RBus_UInt32  ctrl_f_byte21:8;
        RBus_UInt32  ctrl_f_byte22:8;
        RBus_UInt32  ctrl_f_byte23:8;
    };
}p2p_p2p_ctrl_f_byte20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte24:8;
        RBus_UInt32  ctrl_f_byte25:8;
        RBus_UInt32  ctrl_f_byte26:8;
        RBus_UInt32  ctrl_f_byte27:8;
    };
}p2p_p2p_ctrl_f_byte24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte28:8;
        RBus_UInt32  ctrl_f_byte29:8;
        RBus_UInt32  ctrl_f_byte30:8;
        RBus_UInt32  ctrl_f_byte31:8;
    };
}p2p_p2p_ctrl_f_byte28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte32:8;
        RBus_UInt32  ctrl_f_byte33:8;
        RBus_UInt32  ctrl_f_byte34:8;
        RBus_UInt32  ctrl_f_byte35:8;
    };
}p2p_p2p_ctrl_f_byte32_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte36:8;
        RBus_UInt32  ctrl_f_byte37:8;
        RBus_UInt32  ctrl_f_byte38:8;
        RBus_UInt32  ctrl_f_byte39:8;
    };
}p2p_p2p_ctrl_f_byte36_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte40:8;
        RBus_UInt32  ctrl_f_byte41:8;
        RBus_UInt32  ctrl_f_byte42:8;
        RBus_UInt32  ctrl_f_byte43:8;
    };
}p2p_p2p_ctrl_f_byte40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte44:8;
        RBus_UInt32  ctrl_f_byte45:8;
        RBus_UInt32  ctrl_f_byte46:8;
        RBus_UInt32  ctrl_f_byte47:8;
    };
}p2p_p2p_ctrl_f_byte44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte48:8;
        RBus_UInt32  ctrl_f_byte49:8;
        RBus_UInt32  ctrl_f_byte50:8;
        RBus_UInt32  ctrl_f_byte51:8;
    };
}p2p_p2p_ctrl_f_byte48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte52:8;
        RBus_UInt32  ctrl_f_byte53:8;
        RBus_UInt32  ctrl_f_byte54:8;
        RBus_UInt32  ctrl_f_byte55:8;
    };
}p2p_p2p_ctrl_f_byte52_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte56:8;
        RBus_UInt32  ctrl_f_byte57:8;
        RBus_UInt32  ctrl_f_byte58:8;
        RBus_UInt32  ctrl_f_byte59:8;
    };
}p2p_p2p_ctrl_f_byte56_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ext_pixel_sel_00:1;
        RBus_UInt32  ext_pixel_sel_01:1;
        RBus_UInt32  ext_pixel_sel_02:1;
        RBus_UInt32  ext_pixel_sel_03:1;
        RBus_UInt32  ext_pixel_sel_04:1;
        RBus_UInt32  ext_pixel_sel_05:1;
        RBus_UInt32  ext_pixel_sel_06:1;
        RBus_UInt32  ext_pixel_sel_07:1;
        RBus_UInt32  ext_pixel_sel_08:1;
        RBus_UInt32  ext_pixel_sel_09:1;
        RBus_UInt32  ext_pixel_sel_10:1;
        RBus_UInt32  ext_pixel_sel_11:1;
        RBus_UInt32  dummy1802ddc0_19_12:8;
        RBus_UInt32  res1:3;
        RBus_UInt32  scrambler_auto_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  initial_8b10b:1;
        RBus_UInt32  disable_8b10b:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  scrambler_mode:2;
    };
}p2p_p2p_scrambler_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bcc_tx_byte_3:8;
        RBus_UInt32  bcc_tx_byte_2:8;
        RBus_UInt32  bcc_tx_byte_1:8;
        RBus_UInt32  bcc_tx_byte_0:8;
    };
}p2p_p2p_bcc_tx_data_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802ddc8_31_16:16;
        RBus_UInt32  bcc_tx_byte_5:8;
        RBus_UInt32  bcc_tx_byte_4:8;
    };
}p2p_p2p_bcc_tx_data_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  bcc_rx_byte_2:8;
        RBus_UInt32  bcc_rx_byte_1:8;
        RBus_UInt32  bcc_rx_byte_0:8;
    };
}p2p_p2p_bcc_rx_data_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  bcc_rx_error_wait_time:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  bcc_rx_reply_time:10;
        RBus_UInt32  res3:3;
        RBus_UInt32  bcc_tx_preamble_num:5;
    };
}p2p_p2p_bcc_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bcc_trigger:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  dummy1802ddd4_27_13:15;
        RBus_UInt32  bcc_trigger_hw:1;
        RBus_UInt32  bcc_clk_div:12;
    };
}p2p_p2p_bcc_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bcc_reset:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  dummy1802ddd8_27_20:8;
        RBus_UInt32  res2:2;
        RBus_UInt32  bcc_irq_threshould_8us:10;
        RBus_UInt32  res3:3;
        RBus_UInt32  bcc_mode2_enable:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  bcc_sw_chksum:1;
        RBus_UInt32  bcc_tx_done_announce:1;
        RBus_UInt32  bcc_enable:1;
    };
}p2p_p2p_bcc_ctl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bcc_manual_sample:1;
        RBus_UInt32  bcc_in_sample_2:11;
        RBus_UInt32  bcc_in_sample_1:10;
        RBus_UInt32  bcc_in_sample_0:10;
    };
}p2p_p2p_bcc_ctl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802dde0_31_29:3;
        RBus_UInt32  bcc_measure_point:5;
        RBus_UInt32  bcc_in_sample_4:12;
        RBus_UInt32  bcc_in_sample_3:12;
    };
}p2p_p2p_bcc_ctl_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802dde4_31_28:4;
        RBus_UInt32  bcc_irq_irq_en:1;
        RBus_UInt32  p2p_training_fail_irq_en:1;
        RBus_UInt32  p2p_bcc_bc_trigger_irq_en:1;
        RBus_UInt32  stop_high_err_irq_en:1;
        RBus_UInt32  data_lead_bit_err_irq_en:1;
        RBus_UInt32  start_low_err_en_irq_en:1;
        RBus_UInt32  preamble_le8_err_irq_en:1;
        RBus_UInt32  preamble_bh_bl_err_irq_en:1;
        RBus_UInt32  dummy1802dde4_19:1;
        RBus_UInt32  bcc_rx_done_irq_en:1;
        RBus_UInt32  bcc_tx_done_irq_en:1;
        RBus_UInt32  bcc_rx_reply_time_out_irq_en:1;
        RBus_UInt32  dummy1802dde4_15_12:4;
        RBus_UInt32  bcc_irq:1;
        RBus_UInt32  p2p_training_fail:1;
        RBus_UInt32  p2p_bcc_bc_trigger:1;
        RBus_UInt32  stop_high_err:1;
        RBus_UInt32  data_lead_bit_err:1;
        RBus_UInt32  start_low_err:1;
        RBus_UInt32  preamble_le8_err:1;
        RBus_UInt32  preamble_bh_bl_err:1;
        RBus_UInt32  dummy1802dde4_3:1;
        RBus_UInt32  bcc_rx_done:1;
        RBus_UInt32  bcc_tx_done:1;
        RBus_UInt32  bcc_rx_reply_time_out:1;
    };
}p2p_p2p_bcc_status_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bcc_debounce_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  bcc_manual_mode:1;
        RBus_UInt32  bcc_manual_value:1;
        RBus_UInt32  dummy1802dde8_27_22:6;
        RBus_UInt32  bcc_measure_cnt:10;
        RBus_UInt32  res2:3;
        RBus_UInt32  bcc_debounce_threshold:9;
    };
}p2p_p2p_bcc_debounce_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802ddec_31_12:20;
        RBus_UInt32  res1:2;
        RBus_UInt32  dbg_sel:6;
        RBus_UInt32  dbg_part_sel:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  dbg_en:1;
    };
}p2p_p2p_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_err_cnt:16;
        RBus_UInt32  crc_port_en:12;
        RBus_UInt32  res1:1;
        RBus_UInt32  crc_auto_cmp_en:1;
        RBus_UInt32  crc_conti:1;
        RBus_UInt32  crc_start:1;
    };
}p2p_p2p_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_result:32;
    };
}p2p_p2p_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_golden:32;
    };
}p2p_p2p_crc_golden_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p2p_tst_out:32;
    };
}p2p_p2p_dgb_read_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dmy_length:12;
        RBus_UInt32  res1:1;
        RBus_UInt32  ldmy_enable:1;
        RBus_UInt32  ldmy_color_sel:1;
        RBus_UInt32  fdmy_color_sel:9;
        RBus_UInt32  fdmy_line_num:4;
        RBus_UInt32  bdmy_line_num:4;
    };
}p2p_p2p_dmy_line0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dmy_color1:8;
        RBus_UInt32  dmy_color0:8;
        RBus_UInt32  hs_to_den_distance:8;
        RBus_UInt32  bdmy_color_sel:8;
    };
}p2p_p2p_dmy_line1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ctrl_f_byte01_01:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  ctrl_f_byte02_01:8;
        RBus_UInt32  ctrl_f_byte03_01:8;
    };
}p2p_p2p_ctrl_f_byte02_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ctrl_f_byte04_01:8;
        RBus_UInt32  ctrl_f_byte05_01:8;
    };
}p2p_p2p_ctrl_f_byte04_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ctrl_f_byte01_02:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  ctrl_f_byte02_02:8;
        RBus_UInt32  ctrl_f_byte03_02:8;
    };
}p2p_p2p_ctrl_f_byte02_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ctrl_f_byte04_02:8;
        RBus_UInt32  ctrl_f_byte05_02:8;
    };
}p2p_p2p_ctrl_f_byte04_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ctrl_f_byte01_03:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  ctrl_f_byte02_03:8;
        RBus_UInt32  ctrl_f_byte03_03:8;
    };
}p2p_p2p_ctrl_f_byte02_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ctrl_f_byte04_03:8;
        RBus_UInt32  ctrl_f_byte05_03:8;
    };
}p2p_p2p_ctrl_f_byte04_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ctrl_f_byte01_04:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  ctrl_f_byte02_04:8;
        RBus_UInt32  ctrl_f_byte03_04:8;
    };
}p2p_p2p_ctrl_f_byte02_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ctrl_f_byte04_04:8;
        RBus_UInt32  ctrl_f_byte05_04:8;
    };
}p2p_p2p_ctrl_f_byte04_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ctrl_f_byte01_05:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  ctrl_f_byte02_05:8;
        RBus_UInt32  ctrl_f_byte03_05:8;
    };
}p2p_p2p_ctrl_f_byte02_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ctrl_f_byte04_05:8;
        RBus_UInt32  ctrl_f_byte05_05:8;
    };
}p2p_p2p_ctrl_f_byte04_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ctrl_f_byte01_06:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  ctrl_f_byte02_06:8;
        RBus_UInt32  ctrl_f_byte03_06:8;
    };
}p2p_p2p_ctrl_f_byte02_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ctrl_f_byte04_06:8;
        RBus_UInt32  ctrl_f_byte05_06:8;
    };
}p2p_p2p_ctrl_f_byte04_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ctrl_f_byte01_07:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  ctrl_f_byte02_07:8;
        RBus_UInt32  ctrl_f_byte03_07:8;
    };
}p2p_p2p_ctrl_f_byte02_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ctrl_f_byte04_07:8;
        RBus_UInt32  ctrl_f_byte05_07:8;
    };
}p2p_p2p_ctrl_f_byte04_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ctrl_f_byte01_08:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  ctrl_f_byte02_08:8;
        RBus_UInt32  ctrl_f_byte03_08:8;
    };
}p2p_p2p_ctrl_f_byte02_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ctrl_f_byte04_08:8;
        RBus_UInt32  ctrl_f_byte05_08:8;
    };
}p2p_p2p_ctrl_f_byte04_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ctrl_f_byte01_09:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  ctrl_f_byte02_09:8;
        RBus_UInt32  ctrl_f_byte03_09:8;
    };
}p2p_p2p_ctrl_f_byte02_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ctrl_f_byte04_09:8;
        RBus_UInt32  ctrl_f_byte05_09:8;
    };
}p2p_p2p_ctrl_f_byte04_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ctrl_f_byte01_10:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  ctrl_f_byte02_10:8;
        RBus_UInt32  ctrl_f_byte03_10:8;
    };
}p2p_p2p_ctrl_f_byte02_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ctrl_f_byte04_10:8;
        RBus_UInt32  ctrl_f_byte05_10:8;
    };
}p2p_p2p_ctrl_f_byte04_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ctrl_f_byte01_11:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  ctrl_f_byte02_11:8;
        RBus_UInt32  ctrl_f_byte03_11:8;
    };
}p2p_p2p_ctrl_f_byte02_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ctrl_f_byte04_11:8;
        RBus_UInt32  ctrl_f_byte05_11:8;
    };
}p2p_p2p_ctrl_f_byte04_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  pol_inv:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  polc_inv:12;
    };
}p2p_p2p_pol_inv_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  pol2_inv:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  pol3_inv:12;
    };
}p2p_p2p_pol_inv_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k3_line_start_00:4;
        RBus_UInt32  k3_line_start_01:4;
        RBus_UInt32  k3_line_start_02:4;
        RBus_UInt32  k3_line_start_03:4;
        RBus_UInt32  k3_line_start_04:4;
        RBus_UInt32  k3_line_start_05:4;
        RBus_UInt32  k3_line_start_06:4;
        RBus_UInt32  k3_line_start_07:4;
    };
}p2p_p2p_k3_loc_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k3_line_start_08:4;
        RBus_UInt32  k3_line_start_09:4;
        RBus_UInt32  k3_line_start_10:4;
        RBus_UInt32  k3_line_start_11:4;
        RBus_UInt32  res1:12;
        RBus_UInt32  k3_line_period:4;
    };
}p2p_p2p_k3_loc_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p2p_bist_enable:1;
        RBus_UInt32  p2p_bist_done:1;
        RBus_UInt32  p2p_bist_result:1;
        RBus_UInt32  res1:9;
        RBus_UInt32  p2p_bist_length:20;
    };
}p2p_p2p_fifo_bist_RBUS;

#else //apply LITTLE_ENDIAN

//======P2P register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p2p_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  p2p_lane_mode:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  p2p_bit_mode:2;
        RBus_UInt32  res3:6;
        RBus_UInt32  phy_clk_div:9;
        RBus_UInt32  res4:7;
    };
}p2p_p2p_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lsp_times:4;
        RBus_UInt32  training_time_500us:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  standby_time_10us:5;
        RBus_UInt32  res2:10;
        RBus_UInt32  fsm_force_mode3:1;
    };
}p2p_p2p_fsm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dis_clock_at_bcc:1;
        RBus_UInt32  dummy1802dd08_19_1:19;
        RBus_UInt32  clock_pattern:10;
        RBus_UInt32  res1:2;
    };
}p2p_p2p_clock_pattern_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k2_symbol:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  dummy1802dd0c_15_12:4;
        RBus_UInt32  k1_symbol:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  dummy1802dd0c_31_28:4;
    };
}p2p_p2p_k12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k4_symbol:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  dummy1802dd10_15_12:4;
        RBus_UInt32  k3_symbol:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  dummy1802dd10_31_28:4;
    };
}p2p_p2p_k34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  g2_symbol:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  dummy1802dd14_15_12:4;
        RBus_UInt32  g1_symbol:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  dummy1802dd14_31_28:4;
    };
}p2p_p2p_g12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  g4_symbol:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  dummy1802dd18_15_12:4;
        RBus_UInt32  g3_symbol:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  dummy1802dd18_31_28:4;
    };
}p2p_p2p_g34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lsp_k3_loc03:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  lsp_k3_loc02:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  lsp_k3_loc01:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  lsp_k3_loc00:5;
        RBus_UInt32  res4:3;
    };
}p2p_p2p_lsp_k3_loc00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lsp_k3_loc07:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  lsp_k3_loc06:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  lsp_k3_loc05:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  lsp_k3_loc04:5;
        RBus_UInt32  res4:3;
    };
}p2p_p2p_lsp_k3_loc04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lsp_k3_loc11:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  lsp_k3_loc10:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  lsp_k3_loc09:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  lsp_k3_loc08:5;
        RBus_UInt32  res4:3;
    };
}p2p_p2p_lsp_k3_loc08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon_sel_polc:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon_sel_pol:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon_sel_fsync:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  dummy1802dd28_31_24:8;
    };
}p2p_p2p_tcon_sel0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon_sel_pol3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon_sel_pol2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon_sel_bkdu:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  dummy1802dd2c_31_24:8;
    };
}p2p_p2p_tcon_sel1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte0_03:8;
        RBus_UInt32  ctrl_l_byte0_02:8;
        RBus_UInt32  ctrl_l_byte0_01:8;
        RBus_UInt32  ctrl_l_byte0_00:8;
    };
}p2p_p2p_ctrl_l_byte0_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte0_07:8;
        RBus_UInt32  ctrl_l_byte0_06:8;
        RBus_UInt32  ctrl_l_byte0_05:8;
        RBus_UInt32  ctrl_l_byte0_04:8;
    };
}p2p_p2p_ctrl_l_byte0_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte0_11:8;
        RBus_UInt32  ctrl_l_byte0_10:8;
        RBus_UInt32  ctrl_l_byte0_09:8;
        RBus_UInt32  ctrl_l_byte0_08:8;
    };
}p2p_p2p_ctrl_l_byte0_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte1_even03:8;
        RBus_UInt32  ctrl_l_byte1_even02:8;
        RBus_UInt32  ctrl_l_byte1_even01:8;
        RBus_UInt32  ctrl_l_byte1_even00:8;
    };
}p2p_p2p_ctrl_l_byte1_even00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte1_even07:8;
        RBus_UInt32  ctrl_l_byte1_even06:8;
        RBus_UInt32  ctrl_l_byte1_even05:8;
        RBus_UInt32  ctrl_l_byte1_even04:8;
    };
}p2p_p2p_ctrl_l_byte1_even04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte1_even11:8;
        RBus_UInt32  ctrl_l_byte1_even10:8;
        RBus_UInt32  ctrl_l_byte1_even09:8;
        RBus_UInt32  ctrl_l_byte1_even08:8;
    };
}p2p_p2p_ctrl_l_byte1_even08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte1_odd03:8;
        RBus_UInt32  ctrl_l_byte1_odd02:8;
        RBus_UInt32  ctrl_l_byte1_odd01:8;
        RBus_UInt32  ctrl_l_byte1_odd00:8;
    };
}p2p_p2p_ctrl_l_byte1_odd00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte1_odd07:8;
        RBus_UInt32  ctrl_l_byte1_odd06:8;
        RBus_UInt32  ctrl_l_byte1_odd05:8;
        RBus_UInt32  ctrl_l_byte1_odd04:8;
    };
}p2p_p2p_ctrl_l_byte1_odd04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte1_odd11:8;
        RBus_UInt32  ctrl_l_byte1_odd10:8;
        RBus_UInt32  ctrl_l_byte1_odd09:8;
        RBus_UInt32  ctrl_l_byte1_odd08:8;
    };
}p2p_p2p_ctrl_l_byte1_odd08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte2_even03:8;
        RBus_UInt32  ctrl_l_byte2_even02:8;
        RBus_UInt32  ctrl_l_byte2_even01:8;
        RBus_UInt32  ctrl_l_byte2_even00:8;
    };
}p2p_p2p_ctrl_l_byte2_even00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte2_even07:8;
        RBus_UInt32  ctrl_l_byte2_even06:8;
        RBus_UInt32  ctrl_l_byte2_even05:8;
        RBus_UInt32  ctrl_l_byte2_even04:8;
    };
}p2p_p2p_ctrl_l_byte2_even04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte2_even11:8;
        RBus_UInt32  ctrl_l_byte2_even10:8;
        RBus_UInt32  ctrl_l_byte2_even09:8;
        RBus_UInt32  ctrl_l_byte2_even08:8;
    };
}p2p_p2p_ctrl_l_byte2_even08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte2_odd03:8;
        RBus_UInt32  ctrl_l_byte2_odd02:8;
        RBus_UInt32  ctrl_l_byte2_odd01:8;
        RBus_UInt32  ctrl_l_byte2_odd00:8;
    };
}p2p_p2p_ctrl_l_byte2_odd00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte2_odd07:8;
        RBus_UInt32  ctrl_l_byte2_odd06:8;
        RBus_UInt32  ctrl_l_byte2_odd05:8;
        RBus_UInt32  ctrl_l_byte2_odd04:8;
    };
}p2p_p2p_ctrl_l_byte2_odd04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte2_odd11:8;
        RBus_UInt32  ctrl_l_byte2_odd10:8;
        RBus_UInt32  ctrl_l_byte2_odd09:8;
        RBus_UInt32  ctrl_l_byte2_odd08:8;
    };
}p2p_p2p_ctrl_l_byte2_odd08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte3_03:8;
        RBus_UInt32  ctrl_l_byte3_02:8;
        RBus_UInt32  ctrl_l_byte3_01:8;
        RBus_UInt32  ctrl_l_byte3_00:8;
    };
}p2p_p2p_ctrl_l_byte3_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte3_07:8;
        RBus_UInt32  ctrl_l_byte3_06:8;
        RBus_UInt32  ctrl_l_byte3_05:8;
        RBus_UInt32  ctrl_l_byte3_04:8;
    };
}p2p_p2p_ctrl_l_byte3_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte3_11:8;
        RBus_UInt32  ctrl_l_byte3_10:8;
        RBus_UInt32  ctrl_l_byte3_09:8;
        RBus_UInt32  ctrl_l_byte3_08:8;
    };
}p2p_p2p_ctrl_l_byte3_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte4_03:8;
        RBus_UInt32  ctrl_l_byte4_02:8;
        RBus_UInt32  ctrl_l_byte4_01:8;
        RBus_UInt32  ctrl_l_byte4_00:8;
    };
}p2p_p2p_ctrl_l_byte4_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte4_07:8;
        RBus_UInt32  ctrl_l_byte4_06:8;
        RBus_UInt32  ctrl_l_byte4_05:8;
        RBus_UInt32  ctrl_l_byte4_04:8;
    };
}p2p_p2p_ctrl_l_byte4_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_l_byte4_11:8;
        RBus_UInt32  ctrl_l_byte4_10:8;
        RBus_UInt32  ctrl_l_byte4_09:8;
        RBus_UInt32  ctrl_l_byte4_08:8;
    };
}p2p_p2p_ctrl_l_byte4_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte03:8;
        RBus_UInt32  ctrl_f_byte02:8;
        RBus_UInt32  ctrl_f_byte01:8;
        RBus_UInt32  ctrl_f_byte00:8;
    };
}p2p_p2p_ctrl_f_byte00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte07:8;
        RBus_UInt32  ctrl_f_byte06:8;
        RBus_UInt32  ctrl_f_byte05:8;
        RBus_UInt32  ctrl_f_byte04:8;
    };
}p2p_p2p_ctrl_f_byte04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte11:8;
        RBus_UInt32  ctrl_f_byte10:8;
        RBus_UInt32  ctrl_f_byte09:8;
        RBus_UInt32  ctrl_f_byte08:8;
    };
}p2p_p2p_ctrl_f_byte08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte15:8;
        RBus_UInt32  ctrl_f_byte14:8;
        RBus_UInt32  ctrl_f_byte13:8;
        RBus_UInt32  ctrl_f_byte12:8;
    };
}p2p_p2p_ctrl_f_byte12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte19:8;
        RBus_UInt32  ctrl_f_byte18:8;
        RBus_UInt32  ctrl_f_byte17:8;
        RBus_UInt32  ctrl_f_byte16:8;
    };
}p2p_p2p_ctrl_f_byte16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte23:8;
        RBus_UInt32  ctrl_f_byte22:8;
        RBus_UInt32  ctrl_f_byte21:8;
        RBus_UInt32  ctrl_f_byte20:8;
    };
}p2p_p2p_ctrl_f_byte20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte27:8;
        RBus_UInt32  ctrl_f_byte26:8;
        RBus_UInt32  ctrl_f_byte25:8;
        RBus_UInt32  ctrl_f_byte24:8;
    };
}p2p_p2p_ctrl_f_byte24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte31:8;
        RBus_UInt32  ctrl_f_byte30:8;
        RBus_UInt32  ctrl_f_byte29:8;
        RBus_UInt32  ctrl_f_byte28:8;
    };
}p2p_p2p_ctrl_f_byte28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte35:8;
        RBus_UInt32  ctrl_f_byte34:8;
        RBus_UInt32  ctrl_f_byte33:8;
        RBus_UInt32  ctrl_f_byte32:8;
    };
}p2p_p2p_ctrl_f_byte32_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte39:8;
        RBus_UInt32  ctrl_f_byte38:8;
        RBus_UInt32  ctrl_f_byte37:8;
        RBus_UInt32  ctrl_f_byte36:8;
    };
}p2p_p2p_ctrl_f_byte36_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte43:8;
        RBus_UInt32  ctrl_f_byte42:8;
        RBus_UInt32  ctrl_f_byte41:8;
        RBus_UInt32  ctrl_f_byte40:8;
    };
}p2p_p2p_ctrl_f_byte40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte47:8;
        RBus_UInt32  ctrl_f_byte46:8;
        RBus_UInt32  ctrl_f_byte45:8;
        RBus_UInt32  ctrl_f_byte44:8;
    };
}p2p_p2p_ctrl_f_byte44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte51:8;
        RBus_UInt32  ctrl_f_byte50:8;
        RBus_UInt32  ctrl_f_byte49:8;
        RBus_UInt32  ctrl_f_byte48:8;
    };
}p2p_p2p_ctrl_f_byte48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte55:8;
        RBus_UInt32  ctrl_f_byte54:8;
        RBus_UInt32  ctrl_f_byte53:8;
        RBus_UInt32  ctrl_f_byte52:8;
    };
}p2p_p2p_ctrl_f_byte52_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte59:8;
        RBus_UInt32  ctrl_f_byte58:8;
        RBus_UInt32  ctrl_f_byte57:8;
        RBus_UInt32  ctrl_f_byte56:8;
    };
}p2p_p2p_ctrl_f_byte56_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scrambler_mode:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  disable_8b10b:1;
        RBus_UInt32  initial_8b10b:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  scrambler_auto_en:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  dummy1802ddc0_19_12:8;
        RBus_UInt32  ext_pixel_sel_11:1;
        RBus_UInt32  ext_pixel_sel_10:1;
        RBus_UInt32  ext_pixel_sel_09:1;
        RBus_UInt32  ext_pixel_sel_08:1;
        RBus_UInt32  ext_pixel_sel_07:1;
        RBus_UInt32  ext_pixel_sel_06:1;
        RBus_UInt32  ext_pixel_sel_05:1;
        RBus_UInt32  ext_pixel_sel_04:1;
        RBus_UInt32  ext_pixel_sel_03:1;
        RBus_UInt32  ext_pixel_sel_02:1;
        RBus_UInt32  ext_pixel_sel_01:1;
        RBus_UInt32  ext_pixel_sel_00:1;
    };
}p2p_p2p_scrambler_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bcc_tx_byte_0:8;
        RBus_UInt32  bcc_tx_byte_1:8;
        RBus_UInt32  bcc_tx_byte_2:8;
        RBus_UInt32  bcc_tx_byte_3:8;
    };
}p2p_p2p_bcc_tx_data_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bcc_tx_byte_4:8;
        RBus_UInt32  bcc_tx_byte_5:8;
        RBus_UInt32  dummy1802ddc8_31_16:16;
    };
}p2p_p2p_bcc_tx_data_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bcc_rx_byte_0:8;
        RBus_UInt32  bcc_rx_byte_1:8;
        RBus_UInt32  bcc_rx_byte_2:8;
        RBus_UInt32  res1:8;
    };
}p2p_p2p_bcc_rx_data_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bcc_tx_preamble_num:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  bcc_rx_reply_time:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  bcc_rx_error_wait_time:10;
        RBus_UInt32  res3:2;
    };
}p2p_p2p_bcc_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bcc_clk_div:12;
        RBus_UInt32  bcc_trigger_hw:1;
        RBus_UInt32  dummy1802ddd4_27_13:15;
        RBus_UInt32  res1:3;
        RBus_UInt32  bcc_trigger:1;
    };
}p2p_p2p_bcc_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bcc_enable:1;
        RBus_UInt32  bcc_tx_done_announce:1;
        RBus_UInt32  bcc_sw_chksum:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  bcc_mode2_enable:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  bcc_irq_threshould_8us:10;
        RBus_UInt32  res3:2;
        RBus_UInt32  dummy1802ddd8_27_20:8;
        RBus_UInt32  res4:3;
        RBus_UInt32  bcc_reset:1;
    };
}p2p_p2p_bcc_ctl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bcc_in_sample_0:10;
        RBus_UInt32  bcc_in_sample_1:10;
        RBus_UInt32  bcc_in_sample_2:11;
        RBus_UInt32  bcc_manual_sample:1;
    };
}p2p_p2p_bcc_ctl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bcc_in_sample_3:12;
        RBus_UInt32  bcc_in_sample_4:12;
        RBus_UInt32  bcc_measure_point:5;
        RBus_UInt32  dummy1802dde0_31_29:3;
    };
}p2p_p2p_bcc_ctl_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bcc_rx_reply_time_out:1;
        RBus_UInt32  bcc_tx_done:1;
        RBus_UInt32  bcc_rx_done:1;
        RBus_UInt32  dummy1802dde4_3:1;
        RBus_UInt32  preamble_bh_bl_err:1;
        RBus_UInt32  preamble_le8_err:1;
        RBus_UInt32  start_low_err:1;
        RBus_UInt32  data_lead_bit_err:1;
        RBus_UInt32  stop_high_err:1;
        RBus_UInt32  p2p_bcc_bc_trigger:1;
        RBus_UInt32  p2p_training_fail:1;
        RBus_UInt32  bcc_irq:1;
        RBus_UInt32  dummy1802dde4_15_12:4;
        RBus_UInt32  bcc_rx_reply_time_out_irq_en:1;
        RBus_UInt32  bcc_tx_done_irq_en:1;
        RBus_UInt32  bcc_rx_done_irq_en:1;
        RBus_UInt32  dummy1802dde4_19:1;
        RBus_UInt32  preamble_bh_bl_err_irq_en:1;
        RBus_UInt32  preamble_le8_err_irq_en:1;
        RBus_UInt32  start_low_err_en_irq_en:1;
        RBus_UInt32  data_lead_bit_err_irq_en:1;
        RBus_UInt32  stop_high_err_irq_en:1;
        RBus_UInt32  p2p_bcc_bc_trigger_irq_en:1;
        RBus_UInt32  p2p_training_fail_irq_en:1;
        RBus_UInt32  bcc_irq_irq_en:1;
        RBus_UInt32  dummy1802dde4_31_28:4;
    };
}p2p_p2p_bcc_status_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bcc_debounce_threshold:9;
        RBus_UInt32  res1:3;
        RBus_UInt32  bcc_measure_cnt:10;
        RBus_UInt32  dummy1802dde8_27_22:6;
        RBus_UInt32  bcc_manual_value:1;
        RBus_UInt32  bcc_manual_mode:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  bcc_debounce_en:1;
    };
}p2p_p2p_bcc_debounce_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  dbg_part_sel:1;
        RBus_UInt32  dbg_sel:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  dummy1802ddec_31_12:20;
    };
}p2p_p2p_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_start:1;
        RBus_UInt32  crc_conti:1;
        RBus_UInt32  crc_auto_cmp_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  crc_port_en:12;
        RBus_UInt32  crc_err_cnt:16;
    };
}p2p_p2p_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_result:32;
    };
}p2p_p2p_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_golden:32;
    };
}p2p_p2p_crc_golden_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p2p_tst_out:32;
    };
}p2p_p2p_dgb_read_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdmy_line_num:4;
        RBus_UInt32  fdmy_line_num:4;
        RBus_UInt32  fdmy_color_sel:9;
        RBus_UInt32  ldmy_color_sel:1;
        RBus_UInt32  ldmy_enable:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dmy_length:12;
    };
}p2p_p2p_dmy_line0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdmy_color_sel:8;
        RBus_UInt32  hs_to_den_distance:8;
        RBus_UInt32  dmy_color0:8;
        RBus_UInt32  dmy_color1:8;
    };
}p2p_p2p_dmy_line1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte03_01:8;
        RBus_UInt32  ctrl_f_byte02_01:8;
        RBus_UInt32  res1:6;
        RBus_UInt32  ctrl_f_byte01_01:2;
        RBus_UInt32  res2:8;
    };
}p2p_p2p_ctrl_f_byte02_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte05_01:8;
        RBus_UInt32  ctrl_f_byte04_01:8;
        RBus_UInt32  res1:16;
    };
}p2p_p2p_ctrl_f_byte04_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte03_02:8;
        RBus_UInt32  ctrl_f_byte02_02:8;
        RBus_UInt32  res1:6;
        RBus_UInt32  ctrl_f_byte01_02:2;
        RBus_UInt32  res2:8;
    };
}p2p_p2p_ctrl_f_byte02_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte05_02:8;
        RBus_UInt32  ctrl_f_byte04_02:8;
        RBus_UInt32  res1:16;
    };
}p2p_p2p_ctrl_f_byte04_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte03_03:8;
        RBus_UInt32  ctrl_f_byte02_03:8;
        RBus_UInt32  res1:6;
        RBus_UInt32  ctrl_f_byte01_03:2;
        RBus_UInt32  res2:8;
    };
}p2p_p2p_ctrl_f_byte02_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte05_03:8;
        RBus_UInt32  ctrl_f_byte04_03:8;
        RBus_UInt32  res1:16;
    };
}p2p_p2p_ctrl_f_byte04_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte03_04:8;
        RBus_UInt32  ctrl_f_byte02_04:8;
        RBus_UInt32  res1:6;
        RBus_UInt32  ctrl_f_byte01_04:2;
        RBus_UInt32  res2:8;
    };
}p2p_p2p_ctrl_f_byte02_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte05_04:8;
        RBus_UInt32  ctrl_f_byte04_04:8;
        RBus_UInt32  res1:16;
    };
}p2p_p2p_ctrl_f_byte04_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte03_05:8;
        RBus_UInt32  ctrl_f_byte02_05:8;
        RBus_UInt32  res1:6;
        RBus_UInt32  ctrl_f_byte01_05:2;
        RBus_UInt32  res2:8;
    };
}p2p_p2p_ctrl_f_byte02_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte05_05:8;
        RBus_UInt32  ctrl_f_byte04_05:8;
        RBus_UInt32  res1:16;
    };
}p2p_p2p_ctrl_f_byte04_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte03_06:8;
        RBus_UInt32  ctrl_f_byte02_06:8;
        RBus_UInt32  res1:6;
        RBus_UInt32  ctrl_f_byte01_06:2;
        RBus_UInt32  res2:8;
    };
}p2p_p2p_ctrl_f_byte02_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte05_06:8;
        RBus_UInt32  ctrl_f_byte04_06:8;
        RBus_UInt32  res1:16;
    };
}p2p_p2p_ctrl_f_byte04_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte03_07:8;
        RBus_UInt32  ctrl_f_byte02_07:8;
        RBus_UInt32  res1:6;
        RBus_UInt32  ctrl_f_byte01_07:2;
        RBus_UInt32  res2:8;
    };
}p2p_p2p_ctrl_f_byte02_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte05_07:8;
        RBus_UInt32  ctrl_f_byte04_07:8;
        RBus_UInt32  res1:16;
    };
}p2p_p2p_ctrl_f_byte04_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte03_08:8;
        RBus_UInt32  ctrl_f_byte02_08:8;
        RBus_UInt32  res1:6;
        RBus_UInt32  ctrl_f_byte01_08:2;
        RBus_UInt32  res2:8;
    };
}p2p_p2p_ctrl_f_byte02_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte05_08:8;
        RBus_UInt32  ctrl_f_byte04_08:8;
        RBus_UInt32  res1:16;
    };
}p2p_p2p_ctrl_f_byte04_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte03_09:8;
        RBus_UInt32  ctrl_f_byte02_09:8;
        RBus_UInt32  res1:6;
        RBus_UInt32  ctrl_f_byte01_09:2;
        RBus_UInt32  res2:8;
    };
}p2p_p2p_ctrl_f_byte02_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte05_09:8;
        RBus_UInt32  ctrl_f_byte04_09:8;
        RBus_UInt32  res1:16;
    };
}p2p_p2p_ctrl_f_byte04_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte03_10:8;
        RBus_UInt32  ctrl_f_byte02_10:8;
        RBus_UInt32  res1:6;
        RBus_UInt32  ctrl_f_byte01_10:2;
        RBus_UInt32  res2:8;
    };
}p2p_p2p_ctrl_f_byte02_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte05_10:8;
        RBus_UInt32  ctrl_f_byte04_10:8;
        RBus_UInt32  res1:16;
    };
}p2p_p2p_ctrl_f_byte04_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte03_11:8;
        RBus_UInt32  ctrl_f_byte02_11:8;
        RBus_UInt32  res1:6;
        RBus_UInt32  ctrl_f_byte01_11:2;
        RBus_UInt32  res2:8;
    };
}p2p_p2p_ctrl_f_byte02_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_f_byte05_11:8;
        RBus_UInt32  ctrl_f_byte04_11:8;
        RBus_UInt32  res1:16;
    };
}p2p_p2p_ctrl_f_byte04_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  polc_inv:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  pol_inv:12;
        RBus_UInt32  res2:4;
    };
}p2p_p2p_pol_inv_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pol3_inv:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  pol2_inv:12;
        RBus_UInt32  res2:4;
    };
}p2p_p2p_pol_inv_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k3_line_start_07:4;
        RBus_UInt32  k3_line_start_06:4;
        RBus_UInt32  k3_line_start_05:4;
        RBus_UInt32  k3_line_start_04:4;
        RBus_UInt32  k3_line_start_03:4;
        RBus_UInt32  k3_line_start_02:4;
        RBus_UInt32  k3_line_start_01:4;
        RBus_UInt32  k3_line_start_00:4;
    };
}p2p_p2p_k3_loc_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k3_line_period:4;
        RBus_UInt32  res1:12;
        RBus_UInt32  k3_line_start_11:4;
        RBus_UInt32  k3_line_start_10:4;
        RBus_UInt32  k3_line_start_09:4;
        RBus_UInt32  k3_line_start_08:4;
    };
}p2p_p2p_k3_loc_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p2p_bist_length:20;
        RBus_UInt32  res1:9;
        RBus_UInt32  p2p_bist_result:1;
        RBus_UInt32  p2p_bist_done:1;
        RBus_UInt32  p2p_bist_enable:1;
    };
}p2p_p2p_fifo_bist_RBUS;




#endif 


#endif 
