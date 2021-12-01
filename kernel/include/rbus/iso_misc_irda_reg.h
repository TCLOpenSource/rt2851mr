/**
* @file Merlin5-DesignSpec-ISO_MISC_IRDA
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_ISO_MISC_IRDA_REG_H_
#define _RBUS_ISO_MISC_IRDA_REG_H_

#include "rbus_types.h"



//  ISO_MISC_IRDA Register Address
#define  ISO_MISC_IRDA_IR_PSR_MAIN0                                             0x18061400
#define  ISO_MISC_IRDA_IR_PSR_MAIN0_reg_addr                                     "0xB8061400"
#define  ISO_MISC_IRDA_IR_PSR_MAIN0_reg                                          0xB8061400
#define  ISO_MISC_IRDA_IR_PSR_MAIN0_inst_addr                                    "0x0000"
#define  set_ISO_MISC_IRDA_IR_PSR_MAIN0_reg(data)                                (*((volatile unsigned int*)ISO_MISC_IRDA_IR_PSR_MAIN0_reg)=data)
#define  get_ISO_MISC_IRDA_IR_PSR_MAIN0_reg                                      (*((volatile unsigned int*)ISO_MISC_IRDA_IR_PSR_MAIN0_reg))
#define  ISO_MISC_IRDA_IR_PSR_MAIN0_lat_lead_low_main0_shift                     (24)
#define  ISO_MISC_IRDA_IR_PSR_MAIN0_lat_logic_low_main0_shift                    (16)
#define  ISO_MISC_IRDA_IR_PSR_MAIN0_lat_data0_high_main0_shift                   (8)
#define  ISO_MISC_IRDA_IR_PSR_MAIN0_lat_data1_high_main0_shift                   (0)
#define  ISO_MISC_IRDA_IR_PSR_MAIN0_lat_lead_low_main0_mask                      (0xFF000000)
#define  ISO_MISC_IRDA_IR_PSR_MAIN0_lat_logic_low_main0_mask                     (0x00FF0000)
#define  ISO_MISC_IRDA_IR_PSR_MAIN0_lat_data0_high_main0_mask                    (0x0000FF00)
#define  ISO_MISC_IRDA_IR_PSR_MAIN0_lat_data1_high_main0_mask                    (0x000000FF)
#define  ISO_MISC_IRDA_IR_PSR_MAIN0_lat_lead_low_main0(data)                     (0xFF000000&((data)<<24))
#define  ISO_MISC_IRDA_IR_PSR_MAIN0_lat_logic_low_main0(data)                    (0x00FF0000&((data)<<16))
#define  ISO_MISC_IRDA_IR_PSR_MAIN0_lat_data0_high_main0(data)                   (0x0000FF00&((data)<<8))
#define  ISO_MISC_IRDA_IR_PSR_MAIN0_lat_data1_high_main0(data)                   (0x000000FF&(data))
#define  ISO_MISC_IRDA_IR_PSR_MAIN0_get_lat_lead_low_main0(data)                 ((0xFF000000&(data))>>24)
#define  ISO_MISC_IRDA_IR_PSR_MAIN0_get_lat_logic_low_main0(data)                ((0x00FF0000&(data))>>16)
#define  ISO_MISC_IRDA_IR_PSR_MAIN0_get_lat_data0_high_main0(data)               ((0x0000FF00&(data))>>8)
#define  ISO_MISC_IRDA_IR_PSR_MAIN0_get_lat_data1_high_main0(data)               (0x000000FF&(data))

#define  ISO_MISC_IRDA_IR_PER_MAIN0                                             0x18061404
#define  ISO_MISC_IRDA_IR_PER_MAIN0_reg_addr                                     "0xB8061404"
#define  ISO_MISC_IRDA_IR_PER_MAIN0_reg                                          0xB8061404
#define  ISO_MISC_IRDA_IR_PER_MAIN0_inst_addr                                    "0x0001"
#define  set_ISO_MISC_IRDA_IR_PER_MAIN0_reg(data)                                (*((volatile unsigned int*)ISO_MISC_IRDA_IR_PER_MAIN0_reg)=data)
#define  get_ISO_MISC_IRDA_IR_PER_MAIN0_reg                                      (*((volatile unsigned int*)ISO_MISC_IRDA_IR_PER_MAIN0_reg))
#define  ISO_MISC_IRDA_IR_PER_MAIN0_lat_denos_num_main0_shift                    (24)
#define  ISO_MISC_IRDA_IR_PER_MAIN0_rp_burst_main0_shift                         (16)
#define  ISO_MISC_IRDA_IR_PER_MAIN0_rp_silence_main0_shift                       (8)
#define  ISO_MISC_IRDA_IR_PER_MAIN0_lat_lead_high_main0_shift                    (0)
#define  ISO_MISC_IRDA_IR_PER_MAIN0_lat_denos_num_main0_mask                     (0x3F000000)
#define  ISO_MISC_IRDA_IR_PER_MAIN0_rp_burst_main0_mask                          (0x00FF0000)
#define  ISO_MISC_IRDA_IR_PER_MAIN0_rp_silence_main0_mask                        (0x0000FF00)
#define  ISO_MISC_IRDA_IR_PER_MAIN0_lat_lead_high_main0_mask                     (0x000000FF)
#define  ISO_MISC_IRDA_IR_PER_MAIN0_lat_denos_num_main0(data)                    (0x3F000000&((data)<<24))
#define  ISO_MISC_IRDA_IR_PER_MAIN0_rp_burst_main0(data)                         (0x00FF0000&((data)<<16))
#define  ISO_MISC_IRDA_IR_PER_MAIN0_rp_silence_main0(data)                       (0x0000FF00&((data)<<8))
#define  ISO_MISC_IRDA_IR_PER_MAIN0_lat_lead_high_main0(data)                    (0x000000FF&(data))
#define  ISO_MISC_IRDA_IR_PER_MAIN0_get_lat_denos_num_main0(data)                ((0x3F000000&(data))>>24)
#define  ISO_MISC_IRDA_IR_PER_MAIN0_get_rp_burst_main0(data)                     ((0x00FF0000&(data))>>16)
#define  ISO_MISC_IRDA_IR_PER_MAIN0_get_rp_silence_main0(data)                   ((0x0000FF00&(data))>>8)
#define  ISO_MISC_IRDA_IR_PER_MAIN0_get_lat_lead_high_main0(data)                (0x000000FF&(data))

#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN0                                          0x18061408
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN0_reg_addr                                  "0xB8061408"
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN0_reg                                       0xB8061408
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN0_inst_addr                                 "0x0002"
#define  set_ISO_MISC_IRDA_IR_PSR_UP_MAIN0_reg(data)                             (*((volatile unsigned int*)ISO_MISC_IRDA_IR_PSR_UP_MAIN0_reg)=data)
#define  get_ISO_MISC_IRDA_IR_PSR_UP_MAIN0_reg                                   (*((volatile unsigned int*)ISO_MISC_IRDA_IR_PSR_UP_MAIN0_reg))
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN0_irrbl_up_main0_shift                      (24)
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN0_irrml_up_main0_shift                      (16)
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN0_irrdzl_up_main0_shift                     (8)
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN0_irrdol_up_main0_shift                     (0)
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN0_irrbl_up_main0_mask                       (0xFF000000)
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN0_irrml_up_main0_mask                       (0x00FF0000)
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN0_irrdzl_up_main0_mask                      (0x0000FF00)
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN0_irrdol_up_main0_mask                      (0x000000FF)
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN0_irrbl_up_main0(data)                      (0xFF000000&((data)<<24))
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN0_irrml_up_main0(data)                      (0x00FF0000&((data)<<16))
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN0_irrdzl_up_main0(data)                     (0x0000FF00&((data)<<8))
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN0_irrdol_up_main0(data)                     (0x000000FF&(data))
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN0_get_irrbl_up_main0(data)                  ((0xFF000000&(data))>>24)
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN0_get_irrml_up_main0(data)                  ((0x00FF0000&(data))>>16)
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN0_get_irrdzl_up_main0(data)                 ((0x0000FF00&(data))>>8)
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN0_get_irrdol_up_main0(data)                 (0x000000FF&(data))

#define  ISO_MISC_IRDA_IR_PER_UP_MAIN0                                          0x1806140C
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN0_reg_addr                                  "0xB806140C"
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN0_reg                                       0xB806140C
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN0_inst_addr                                 "0x0003"
#define  set_ISO_MISC_IRDA_IR_PER_UP_MAIN0_reg(data)                             (*((volatile unsigned int*)ISO_MISC_IRDA_IR_PER_UP_MAIN0_reg)=data)
#define  get_ISO_MISC_IRDA_IR_PER_UP_MAIN0_reg                                   (*((volatile unsigned int*)ISO_MISC_IRDA_IR_PER_UP_MAIN0_reg))
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN0_rp_burst_up_main0_shift                   (24)
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN0_rp_silence_up_main0_shift                 (16)
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN0_end_pattern_main0_shift                   (8)
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN0_irrsl_up_main0_shift                      (0)
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN0_rp_burst_up_main0_mask                    (0xFF000000)
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN0_rp_silence_up_main0_mask                  (0x00FF0000)
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN0_end_pattern_main0_mask                    (0x0000FF00)
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN0_irrsl_up_main0_mask                       (0x000000FF)
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN0_rp_burst_up_main0(data)                   (0xFF000000&((data)<<24))
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN0_rp_silence_up_main0(data)                 (0x00FF0000&((data)<<16))
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN0_end_pattern_main0(data)                   (0x0000FF00&((data)<<8))
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN0_irrsl_up_main0(data)                      (0x000000FF&(data))
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN0_get_rp_burst_up_main0(data)               ((0xFF000000&(data))>>24)
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN0_get_rp_silence_up_main0(data)             ((0x00FF0000&(data))>>16)
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN0_get_end_pattern_main0(data)               ((0x0000FF00&(data))>>8)
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN0_get_irrsl_up_main0(data)                  (0x000000FF&(data))

#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN0                                        0x18061410
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN0_reg_addr                                "0xB8061410"
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN0_reg                                     0xB8061410
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN0_inst_addr                               "0x0004"
#define  set_ISO_MISC_IRDA_IR_DATA_NUM_MAIN0_reg(data)                           (*((volatile unsigned int*)ISO_MISC_IRDA_IR_DATA_NUM_MAIN0_reg)=data)
#define  get_ISO_MISC_IRDA_IR_DATA_NUM_MAIN0_reg                                 (*((volatile unsigned int*)ISO_MISC_IRDA_IR_DATA_NUM_MAIN0_reg))
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN0_third_data_num_main0_shift              (16)
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN0_second_data_num_main0_shift             (8)
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN0_lat_data_num_main0_shift                (0)
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN0_third_data_num_main0_mask               (0x003F0000)
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN0_second_data_num_main0_mask              (0x00003F00)
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN0_lat_data_num_main0_mask                 (0x0000003F)
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN0_third_data_num_main0(data)              (0x003F0000&((data)<<16))
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN0_second_data_num_main0(data)             (0x00003F00&((data)<<8))
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN0_lat_data_num_main0(data)                (0x0000003F&(data))
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN0_get_third_data_num_main0(data)          ((0x003F0000&(data))>>16)
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN0_get_second_data_num_main0(data)         ((0x00003F00&(data))>>8)
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN0_get_lat_data_num_main0(data)            (0x0000003F&(data))

#define  ISO_MISC_IRDA_IR_CR_MAIN0                                              0x18061414
#define  ISO_MISC_IRDA_IR_CR_MAIN0_reg_addr                                      "0xB8061414"
#define  ISO_MISC_IRDA_IR_CR_MAIN0_reg                                           0xB8061414
#define  ISO_MISC_IRDA_IR_CR_MAIN0_inst_addr                                     "0x0005"
#define  set_ISO_MISC_IRDA_IR_CR_MAIN0_reg(data)                                 (*((volatile unsigned int*)ISO_MISC_IRDA_IR_CR_MAIN0_reg)=data)
#define  get_ISO_MISC_IRDA_IR_CR_MAIN0_reg                                       (*((volatile unsigned int*)ISO_MISC_IRDA_IR_CR_MAIN0_reg))
#define  ISO_MISC_IRDA_IR_CR_MAIN0_sw_reset_main0_shift                          (30)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_variable_data_len_main0_shift                 (24)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_variable_data_len_en_main0_shift              (23)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_normal_data_num_en_main0_shift                (16)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_trailer_code_main0_shift                      (15)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_rpt_code_main0_shift                          (14)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_ph_mod_inv_main0_shift                        (13)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_len_mod_inv_main0_shift                       (12)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_lat_ph_len_main0_shift                        (11)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_start_bit_main0_shift                         (10)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_lead_code_main0_shift                         (9)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_lat_rx_endian_main0_shift                     (8)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_lat_data_ph_main0_shift                       (7)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_main0_en_shift                                (0)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_sw_reset_main0_mask                           (0x40000000)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_variable_data_len_main0_mask                  (0x3F000000)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_variable_data_len_en_main0_mask               (0x00800000)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_normal_data_num_en_main0_mask                 (0x00010000)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_trailer_code_main0_mask                       (0x00008000)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_rpt_code_main0_mask                           (0x00004000)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_ph_mod_inv_main0_mask                         (0x00002000)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_len_mod_inv_main0_mask                        (0x00001000)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_lat_ph_len_main0_mask                         (0x00000800)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_start_bit_main0_mask                          (0x00000400)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_lead_code_main0_mask                          (0x00000200)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_lat_rx_endian_main0_mask                      (0x00000100)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_lat_data_ph_main0_mask                        (0x00000080)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_main0_en_mask                                 (0x00000001)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_sw_reset_main0(data)                          (0x40000000&((data)<<30))
#define  ISO_MISC_IRDA_IR_CR_MAIN0_variable_data_len_main0(data)                 (0x3F000000&((data)<<24))
#define  ISO_MISC_IRDA_IR_CR_MAIN0_variable_data_len_en_main0(data)              (0x00800000&((data)<<23))
#define  ISO_MISC_IRDA_IR_CR_MAIN0_normal_data_num_en_main0(data)                (0x00010000&((data)<<16))
#define  ISO_MISC_IRDA_IR_CR_MAIN0_trailer_code_main0(data)                      (0x00008000&((data)<<15))
#define  ISO_MISC_IRDA_IR_CR_MAIN0_rpt_code_main0(data)                          (0x00004000&((data)<<14))
#define  ISO_MISC_IRDA_IR_CR_MAIN0_ph_mod_inv_main0(data)                        (0x00002000&((data)<<13))
#define  ISO_MISC_IRDA_IR_CR_MAIN0_len_mod_inv_main0(data)                       (0x00001000&((data)<<12))
#define  ISO_MISC_IRDA_IR_CR_MAIN0_lat_ph_len_main0(data)                        (0x00000800&((data)<<11))
#define  ISO_MISC_IRDA_IR_CR_MAIN0_start_bit_main0(data)                         (0x00000400&((data)<<10))
#define  ISO_MISC_IRDA_IR_CR_MAIN0_lead_code_main0(data)                         (0x00000200&((data)<<9))
#define  ISO_MISC_IRDA_IR_CR_MAIN0_lat_rx_endian_main0(data)                     (0x00000100&((data)<<8))
#define  ISO_MISC_IRDA_IR_CR_MAIN0_lat_data_ph_main0(data)                       (0x00000080&((data)<<7))
#define  ISO_MISC_IRDA_IR_CR_MAIN0_main0_en(data)                                (0x00000001&(data))
#define  ISO_MISC_IRDA_IR_CR_MAIN0_get_sw_reset_main0(data)                      ((0x40000000&(data))>>30)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_get_variable_data_len_main0(data)             ((0x3F000000&(data))>>24)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_get_variable_data_len_en_main0(data)          ((0x00800000&(data))>>23)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_get_normal_data_num_en_main0(data)            ((0x00010000&(data))>>16)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_get_trailer_code_main0(data)                  ((0x00008000&(data))>>15)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_get_rpt_code_main0(data)                      ((0x00004000&(data))>>14)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_get_ph_mod_inv_main0(data)                    ((0x00002000&(data))>>13)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_get_len_mod_inv_main0(data)                   ((0x00001000&(data))>>12)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_get_lat_ph_len_main0(data)                    ((0x00000800&(data))>>11)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_get_start_bit_main0(data)                     ((0x00000400&(data))>>10)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_get_lead_code_main0(data)                     ((0x00000200&(data))>>9)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_get_lat_rx_endian_main0(data)                 ((0x00000100&(data))>>8)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_get_lat_data_ph_main0(data)                   ((0x00000080&(data))>>7)
#define  ISO_MISC_IRDA_IR_CR_MAIN0_get_main0_en(data)                            (0x00000001&(data))

#define  ISO_MISC_IRDA_IR_DPIR_MAIN0                                            0x18061418
#define  ISO_MISC_IRDA_IR_DPIR_MAIN0_reg_addr                                    "0xB8061418"
#define  ISO_MISC_IRDA_IR_DPIR_MAIN0_reg                                         0xB8061418
#define  ISO_MISC_IRDA_IR_DPIR_MAIN0_inst_addr                                   "0x0006"
#define  set_ISO_MISC_IRDA_IR_DPIR_MAIN0_reg(data)                               (*((volatile unsigned int*)ISO_MISC_IRDA_IR_DPIR_MAIN0_reg)=data)
#define  get_ISO_MISC_IRDA_IR_DPIR_MAIN0_reg                                     (*((volatile unsigned int*)ISO_MISC_IRDA_IR_DPIR_MAIN0_reg))
#define  ISO_MISC_IRDA_IR_DPIR_MAIN0_fsm_reset_time_main0_shift                  (16)
#define  ISO_MISC_IRDA_IR_DPIR_MAIN0_iriotcdp_main0_shift                        (0)
#define  ISO_MISC_IRDA_IR_DPIR_MAIN0_fsm_reset_time_main0_mask                   (0x00FF0000)
#define  ISO_MISC_IRDA_IR_DPIR_MAIN0_iriotcdp_main0_mask                         (0x0000FFFF)
#define  ISO_MISC_IRDA_IR_DPIR_MAIN0_fsm_reset_time_main0(data)                  (0x00FF0000&((data)<<16))
#define  ISO_MISC_IRDA_IR_DPIR_MAIN0_iriotcdp_main0(data)                        (0x0000FFFF&(data))
#define  ISO_MISC_IRDA_IR_DPIR_MAIN0_get_fsm_reset_time_main0(data)              ((0x00FF0000&(data))>>16)
#define  ISO_MISC_IRDA_IR_DPIR_MAIN0_get_iriotcdp_main0(data)                    (0x0000FFFF&(data))

#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN0                                        0x1806141C
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN0_reg_addr                                "0xB806141C"
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN0_reg                                     0xB806141C
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN0_inst_addr                               "0x0007"
#define  set_ISO_MISC_IRDA_IR_RPT_CTRL_MAIN0_reg(data)                           (*((volatile unsigned int*)ISO_MISC_IRDA_IR_RPT_CTRL_MAIN0_reg)=data)
#define  get_ISO_MISC_IRDA_IR_RPT_CTRL_MAIN0_reg                                 (*((volatile unsigned int*)ISO_MISC_IRDA_IR_RPT_CTRL_MAIN0_reg))
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN0_rpt_vld_num_main0_shift                 (16)
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN0_rpt_vld_end_main0_shift                 (8)
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN0_rpt_vld_start_main0_shift               (0)
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN0_rpt_vld_num_main0_mask                  (0x000F0000)
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN0_rpt_vld_end_main0_mask                  (0x0000FF00)
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN0_rpt_vld_start_main0_mask                (0x000000FF)
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN0_rpt_vld_num_main0(data)                 (0x000F0000&((data)<<16))
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN0_rpt_vld_end_main0(data)                 (0x0000FF00&((data)<<8))
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN0_rpt_vld_start_main0(data)               (0x000000FF&(data))
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN0_get_rpt_vld_num_main0(data)             ((0x000F0000&(data))>>16)
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN0_get_rpt_vld_end_main0(data)             ((0x0000FF00&(data))>>8)
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN0_get_rpt_vld_start_main0(data)           (0x000000FF&(data))

#define  ISO_MISC_IRDA_IR_SR_MAIN0                                              0x18061420
#define  ISO_MISC_IRDA_IR_SR_MAIN0_reg_addr                                      "0xB8061420"
#define  ISO_MISC_IRDA_IR_SR_MAIN0_reg                                           0xB8061420
#define  ISO_MISC_IRDA_IR_SR_MAIN0_inst_addr                                     "0x0008"
#define  set_ISO_MISC_IRDA_IR_SR_MAIN0_reg(data)                                 (*((volatile unsigned int*)ISO_MISC_IRDA_IR_SR_MAIN0_reg)=data)
#define  get_ISO_MISC_IRDA_IR_SR_MAIN0_reg                                       (*((volatile unsigned int*)ISO_MISC_IRDA_IR_SR_MAIN0_reg))
#define  ISO_MISC_IRDA_IR_SR_MAIN0_detect_lead_code_main0_shift                  (28)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_remote_toggle_main0_shift                     (24)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_read_pointer_main0_shift                      (20)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_detect_third_data_main0_shift                 (16)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_detect_second_data_main0_shift                (12)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_detect_data_main0_shift                       (8)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_repeat_key_invalid_main0_shift                (5)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_irrf_main0_shift                              (4)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_irdvf_main0_shift                             (0)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_detect_lead_code_main0_mask                   (0x10000000)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_remote_toggle_main0_mask                      (0x01000000)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_read_pointer_main0_mask                       (0x00100000)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_detect_third_data_main0_mask                  (0x00010000)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_detect_second_data_main0_mask                 (0x00001000)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_detect_data_main0_mask                        (0x00000100)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_repeat_key_invalid_main0_mask                 (0x00000020)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_irrf_main0_mask                               (0x00000010)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_irdvf_main0_mask                              (0x00000001)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_detect_lead_code_main0(data)                  (0x10000000&((data)<<28))
#define  ISO_MISC_IRDA_IR_SR_MAIN0_remote_toggle_main0(data)                     (0x01000000&((data)<<24))
#define  ISO_MISC_IRDA_IR_SR_MAIN0_read_pointer_main0(data)                      (0x00100000&((data)<<20))
#define  ISO_MISC_IRDA_IR_SR_MAIN0_detect_third_data_main0(data)                 (0x00010000&((data)<<16))
#define  ISO_MISC_IRDA_IR_SR_MAIN0_detect_second_data_main0(data)                (0x00001000&((data)<<12))
#define  ISO_MISC_IRDA_IR_SR_MAIN0_detect_data_main0(data)                       (0x00000100&((data)<<8))
#define  ISO_MISC_IRDA_IR_SR_MAIN0_repeat_key_invalid_main0(data)                (0x00000020&((data)<<5))
#define  ISO_MISC_IRDA_IR_SR_MAIN0_irrf_main0(data)                              (0x00000010&((data)<<4))
#define  ISO_MISC_IRDA_IR_SR_MAIN0_irdvf_main0(data)                             (0x00000001&(data))
#define  ISO_MISC_IRDA_IR_SR_MAIN0_get_detect_lead_code_main0(data)              ((0x10000000&(data))>>28)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_get_remote_toggle_main0(data)                 ((0x01000000&(data))>>24)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_get_read_pointer_main0(data)                  ((0x00100000&(data))>>20)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_get_detect_third_data_main0(data)             ((0x00010000&(data))>>16)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_get_detect_second_data_main0(data)            ((0x00001000&(data))>>12)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_get_detect_data_main0(data)                   ((0x00000100&(data))>>8)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_get_repeat_key_invalid_main0(data)            ((0x00000020&(data))>>5)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_get_irrf_main0(data)                          ((0x00000010&(data))>>4)
#define  ISO_MISC_IRDA_IR_SR_MAIN0_get_irdvf_main0(data)                         (0x00000001&(data))

#define  ISO_MISC_IRDA_IR_RP_LOW_MAIN0                                          0x18061424
#define  ISO_MISC_IRDA_IR_RP_LOW_MAIN0_reg_addr                                  "0xB8061424"
#define  ISO_MISC_IRDA_IR_RP_LOW_MAIN0_reg                                       0xB8061424
#define  ISO_MISC_IRDA_IR_RP_LOW_MAIN0_inst_addr                                 "0x0009"
#define  set_ISO_MISC_IRDA_IR_RP_LOW_MAIN0_reg(data)                             (*((volatile unsigned int*)ISO_MISC_IRDA_IR_RP_LOW_MAIN0_reg)=data)
#define  get_ISO_MISC_IRDA_IR_RP_LOW_MAIN0_reg                                   (*((volatile unsigned int*)ISO_MISC_IRDA_IR_RP_LOW_MAIN0_reg))
#define  ISO_MISC_IRDA_IR_RP_LOW_MAIN0_irrp_low_main0_shift                      (0)
#define  ISO_MISC_IRDA_IR_RP_LOW_MAIN0_irrp_low_main0_mask                       (0xFFFFFFFF)
#define  ISO_MISC_IRDA_IR_RP_LOW_MAIN0_irrp_low_main0(data)                      (0xFFFFFFFF&(data))
#define  ISO_MISC_IRDA_IR_RP_LOW_MAIN0_get_irrp_low_main0(data)                  (0xFFFFFFFF&(data))

#define  ISO_MISC_IRDA_IR_RP_HIGH_MAIN0                                         0x18061428
#define  ISO_MISC_IRDA_IR_RP_HIGH_MAIN0_reg_addr                                 "0xB8061428"
#define  ISO_MISC_IRDA_IR_RP_HIGH_MAIN0_reg                                      0xB8061428
#define  ISO_MISC_IRDA_IR_RP_HIGH_MAIN0_inst_addr                                "0x000A"
#define  set_ISO_MISC_IRDA_IR_RP_HIGH_MAIN0_reg(data)                            (*((volatile unsigned int*)ISO_MISC_IRDA_IR_RP_HIGH_MAIN0_reg)=data)
#define  get_ISO_MISC_IRDA_IR_RP_HIGH_MAIN0_reg                                  (*((volatile unsigned int*)ISO_MISC_IRDA_IR_RP_HIGH_MAIN0_reg))
#define  ISO_MISC_IRDA_IR_RP_HIGH_MAIN0_irrp_high_main0_shift                    (0)
#define  ISO_MISC_IRDA_IR_RP_HIGH_MAIN0_irrp_high_main0_mask                     (0xFFFFFFFF)
#define  ISO_MISC_IRDA_IR_RP_HIGH_MAIN0_irrp_high_main0(data)                    (0xFFFFFFFF&(data))
#define  ISO_MISC_IRDA_IR_RP_HIGH_MAIN0_get_irrp_high_main0(data)                (0xFFFFFFFF&(data))

#define  ISO_MISC_IRDA_IR_MAIN0                                                 0x1806142C
#define  ISO_MISC_IRDA_IR_MAIN0_reg_addr                                         "0xB806142C"
#define  ISO_MISC_IRDA_IR_MAIN0_reg                                              0xB806142C
#define  ISO_MISC_IRDA_IR_MAIN0_inst_addr                                        "0x000B"
#define  set_ISO_MISC_IRDA_IR_MAIN0_reg(data)                                    (*((volatile unsigned int*)ISO_MISC_IRDA_IR_MAIN0_reg)=data)
#define  get_ISO_MISC_IRDA_IR_MAIN0_reg                                          (*((volatile unsigned int*)ISO_MISC_IRDA_IR_MAIN0_reg))
#define  ISO_MISC_IRDA_IR_MAIN0_rp_main0_rst_shift                               (20)
#define  ISO_MISC_IRDA_IR_MAIN0_detect_lead_code_main0_emcu_int_en_shift         (19)
#define  ISO_MISC_IRDA_IR_MAIN0_irdvf_main0_emcu_int_en_shift                    (18)
#define  ISO_MISC_IRDA_IR_MAIN0_detect_lead_code_main0_int_en_shift              (17)
#define  ISO_MISC_IRDA_IR_MAIN0_irdvf_main0_int_en_shift                         (16)
#define  ISO_MISC_IRDA_IR_MAIN0_irfd_main0_shift                                 (0)
#define  ISO_MISC_IRDA_IR_MAIN0_rp_main0_rst_mask                                (0x00100000)
#define  ISO_MISC_IRDA_IR_MAIN0_detect_lead_code_main0_emcu_int_en_mask          (0x00080000)
#define  ISO_MISC_IRDA_IR_MAIN0_irdvf_main0_emcu_int_en_mask                     (0x00040000)
#define  ISO_MISC_IRDA_IR_MAIN0_detect_lead_code_main0_int_en_mask               (0x00020000)
#define  ISO_MISC_IRDA_IR_MAIN0_irdvf_main0_int_en_mask                          (0x00010000)
#define  ISO_MISC_IRDA_IR_MAIN0_irfd_main0_mask                                  (0x0000FFFF)
#define  ISO_MISC_IRDA_IR_MAIN0_rp_main0_rst(data)                               (0x00100000&((data)<<20))
#define  ISO_MISC_IRDA_IR_MAIN0_detect_lead_code_main0_emcu_int_en(data)         (0x00080000&((data)<<19))
#define  ISO_MISC_IRDA_IR_MAIN0_irdvf_main0_emcu_int_en(data)                    (0x00040000&((data)<<18))
#define  ISO_MISC_IRDA_IR_MAIN0_detect_lead_code_main0_int_en(data)              (0x00020000&((data)<<17))
#define  ISO_MISC_IRDA_IR_MAIN0_irdvf_main0_int_en(data)                         (0x00010000&((data)<<16))
#define  ISO_MISC_IRDA_IR_MAIN0_irfd_main0(data)                                 (0x0000FFFF&(data))
#define  ISO_MISC_IRDA_IR_MAIN0_get_rp_main0_rst(data)                           ((0x00100000&(data))>>20)
#define  ISO_MISC_IRDA_IR_MAIN0_get_detect_lead_code_main0_emcu_int_en(data)     ((0x00080000&(data))>>19)
#define  ISO_MISC_IRDA_IR_MAIN0_get_irdvf_main0_emcu_int_en(data)                ((0x00040000&(data))>>18)
#define  ISO_MISC_IRDA_IR_MAIN0_get_detect_lead_code_main0_int_en(data)          ((0x00020000&(data))>>17)
#define  ISO_MISC_IRDA_IR_MAIN0_get_irdvf_main0_int_en(data)                     ((0x00010000&(data))>>16)
#define  ISO_MISC_IRDA_IR_MAIN0_get_irfd_main0(data)                             (0x0000FFFF&(data))

#define  ISO_MISC_IRDA_IR_PSR_MAIN1                                             0x18061430
#define  ISO_MISC_IRDA_IR_PSR_MAIN1_reg_addr                                     "0xB8061430"
#define  ISO_MISC_IRDA_IR_PSR_MAIN1_reg                                          0xB8061430
#define  ISO_MISC_IRDA_IR_PSR_MAIN1_inst_addr                                    "0x000C"
#define  set_ISO_MISC_IRDA_IR_PSR_MAIN1_reg(data)                                (*((volatile unsigned int*)ISO_MISC_IRDA_IR_PSR_MAIN1_reg)=data)
#define  get_ISO_MISC_IRDA_IR_PSR_MAIN1_reg                                      (*((volatile unsigned int*)ISO_MISC_IRDA_IR_PSR_MAIN1_reg))
#define  ISO_MISC_IRDA_IR_PSR_MAIN1_lat_lead_low_main1_shift                     (24)
#define  ISO_MISC_IRDA_IR_PSR_MAIN1_lat_logic_low_main1_shift                    (16)
#define  ISO_MISC_IRDA_IR_PSR_MAIN1_lat_data0_high_main1_shift                   (8)
#define  ISO_MISC_IRDA_IR_PSR_MAIN1_lat_data1_high_main1_shift                   (0)
#define  ISO_MISC_IRDA_IR_PSR_MAIN1_lat_lead_low_main1_mask                      (0xFF000000)
#define  ISO_MISC_IRDA_IR_PSR_MAIN1_lat_logic_low_main1_mask                     (0x00FF0000)
#define  ISO_MISC_IRDA_IR_PSR_MAIN1_lat_data0_high_main1_mask                    (0x0000FF00)
#define  ISO_MISC_IRDA_IR_PSR_MAIN1_lat_data1_high_main1_mask                    (0x000000FF)
#define  ISO_MISC_IRDA_IR_PSR_MAIN1_lat_lead_low_main1(data)                     (0xFF000000&((data)<<24))
#define  ISO_MISC_IRDA_IR_PSR_MAIN1_lat_logic_low_main1(data)                    (0x00FF0000&((data)<<16))
#define  ISO_MISC_IRDA_IR_PSR_MAIN1_lat_data0_high_main1(data)                   (0x0000FF00&((data)<<8))
#define  ISO_MISC_IRDA_IR_PSR_MAIN1_lat_data1_high_main1(data)                   (0x000000FF&(data))
#define  ISO_MISC_IRDA_IR_PSR_MAIN1_get_lat_lead_low_main1(data)                 ((0xFF000000&(data))>>24)
#define  ISO_MISC_IRDA_IR_PSR_MAIN1_get_lat_logic_low_main1(data)                ((0x00FF0000&(data))>>16)
#define  ISO_MISC_IRDA_IR_PSR_MAIN1_get_lat_data0_high_main1(data)               ((0x0000FF00&(data))>>8)
#define  ISO_MISC_IRDA_IR_PSR_MAIN1_get_lat_data1_high_main1(data)               (0x000000FF&(data))

#define  ISO_MISC_IRDA_IR_PER_MAIN1                                             0x18061434
#define  ISO_MISC_IRDA_IR_PER_MAIN1_reg_addr                                     "0xB8061434"
#define  ISO_MISC_IRDA_IR_PER_MAIN1_reg                                          0xB8061434
#define  ISO_MISC_IRDA_IR_PER_MAIN1_inst_addr                                    "0x000D"
#define  set_ISO_MISC_IRDA_IR_PER_MAIN1_reg(data)                                (*((volatile unsigned int*)ISO_MISC_IRDA_IR_PER_MAIN1_reg)=data)
#define  get_ISO_MISC_IRDA_IR_PER_MAIN1_reg                                      (*((volatile unsigned int*)ISO_MISC_IRDA_IR_PER_MAIN1_reg))
#define  ISO_MISC_IRDA_IR_PER_MAIN1_lat_denos_num_main1_shift                    (24)
#define  ISO_MISC_IRDA_IR_PER_MAIN1_rp_burst_main1_shift                         (16)
#define  ISO_MISC_IRDA_IR_PER_MAIN1_rp_silence_main1_shift                       (8)
#define  ISO_MISC_IRDA_IR_PER_MAIN1_lat_lead_high_main1_shift                    (0)
#define  ISO_MISC_IRDA_IR_PER_MAIN1_lat_denos_num_main1_mask                     (0x3F000000)
#define  ISO_MISC_IRDA_IR_PER_MAIN1_rp_burst_main1_mask                          (0x00FF0000)
#define  ISO_MISC_IRDA_IR_PER_MAIN1_rp_silence_main1_mask                        (0x0000FF00)
#define  ISO_MISC_IRDA_IR_PER_MAIN1_lat_lead_high_main1_mask                     (0x000000FF)
#define  ISO_MISC_IRDA_IR_PER_MAIN1_lat_denos_num_main1(data)                    (0x3F000000&((data)<<24))
#define  ISO_MISC_IRDA_IR_PER_MAIN1_rp_burst_main1(data)                         (0x00FF0000&((data)<<16))
#define  ISO_MISC_IRDA_IR_PER_MAIN1_rp_silence_main1(data)                       (0x0000FF00&((data)<<8))
#define  ISO_MISC_IRDA_IR_PER_MAIN1_lat_lead_high_main1(data)                    (0x000000FF&(data))
#define  ISO_MISC_IRDA_IR_PER_MAIN1_get_lat_denos_num_main1(data)                ((0x3F000000&(data))>>24)
#define  ISO_MISC_IRDA_IR_PER_MAIN1_get_rp_burst_main1(data)                     ((0x00FF0000&(data))>>16)
#define  ISO_MISC_IRDA_IR_PER_MAIN1_get_rp_silence_main1(data)                   ((0x0000FF00&(data))>>8)
#define  ISO_MISC_IRDA_IR_PER_MAIN1_get_lat_lead_high_main1(data)                (0x000000FF&(data))

#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN1                                          0x18061438
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN1_reg_addr                                  "0xB8061438"
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN1_reg                                       0xB8061438
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN1_inst_addr                                 "0x000E"
#define  set_ISO_MISC_IRDA_IR_PSR_UP_MAIN1_reg(data)                             (*((volatile unsigned int*)ISO_MISC_IRDA_IR_PSR_UP_MAIN1_reg)=data)
#define  get_ISO_MISC_IRDA_IR_PSR_UP_MAIN1_reg                                   (*((volatile unsigned int*)ISO_MISC_IRDA_IR_PSR_UP_MAIN1_reg))
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN1_irrbl_up_main1_shift                      (24)
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN1_irrml_up_main1_shift                      (16)
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN1_irrdzl_up_main1_shift                     (8)
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN1_irrdol_up_main1_shift                     (0)
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN1_irrbl_up_main1_mask                       (0xFF000000)
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN1_irrml_up_main1_mask                       (0x00FF0000)
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN1_irrdzl_up_main1_mask                      (0x0000FF00)
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN1_irrdol_up_main1_mask                      (0x000000FF)
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN1_irrbl_up_main1(data)                      (0xFF000000&((data)<<24))
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN1_irrml_up_main1(data)                      (0x00FF0000&((data)<<16))
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN1_irrdzl_up_main1(data)                     (0x0000FF00&((data)<<8))
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN1_irrdol_up_main1(data)                     (0x000000FF&(data))
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN1_get_irrbl_up_main1(data)                  ((0xFF000000&(data))>>24)
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN1_get_irrml_up_main1(data)                  ((0x00FF0000&(data))>>16)
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN1_get_irrdzl_up_main1(data)                 ((0x0000FF00&(data))>>8)
#define  ISO_MISC_IRDA_IR_PSR_UP_MAIN1_get_irrdol_up_main1(data)                 (0x000000FF&(data))

#define  ISO_MISC_IRDA_IR_PER_UP_MAIN1                                          0x1806143C
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN1_reg_addr                                  "0xB806143C"
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN1_reg                                       0xB806143C
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN1_inst_addr                                 "0x000F"
#define  set_ISO_MISC_IRDA_IR_PER_UP_MAIN1_reg(data)                             (*((volatile unsigned int*)ISO_MISC_IRDA_IR_PER_UP_MAIN1_reg)=data)
#define  get_ISO_MISC_IRDA_IR_PER_UP_MAIN1_reg                                   (*((volatile unsigned int*)ISO_MISC_IRDA_IR_PER_UP_MAIN1_reg))
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN1_rp_burst_up_main1_shift                   (24)
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN1_rp_silence_up_main1_shift                 (16)
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN1_end_pattern_main1_shift                   (8)
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN1_irrsl_up_main1_shift                      (0)
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN1_rp_burst_up_main1_mask                    (0xFF000000)
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN1_rp_silence_up_main1_mask                  (0x00FF0000)
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN1_end_pattern_main1_mask                    (0x0000FF00)
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN1_irrsl_up_main1_mask                       (0x000000FF)
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN1_rp_burst_up_main1(data)                   (0xFF000000&((data)<<24))
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN1_rp_silence_up_main1(data)                 (0x00FF0000&((data)<<16))
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN1_end_pattern_main1(data)                   (0x0000FF00&((data)<<8))
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN1_irrsl_up_main1(data)                      (0x000000FF&(data))
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN1_get_rp_burst_up_main1(data)               ((0xFF000000&(data))>>24)
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN1_get_rp_silence_up_main1(data)             ((0x00FF0000&(data))>>16)
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN1_get_end_pattern_main1(data)               ((0x0000FF00&(data))>>8)
#define  ISO_MISC_IRDA_IR_PER_UP_MAIN1_get_irrsl_up_main1(data)                  (0x000000FF&(data))

#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN1                                        0x18061440
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN1_reg_addr                                "0xB8061440"
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN1_reg                                     0xB8061440
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN1_inst_addr                               "0x0010"
#define  set_ISO_MISC_IRDA_IR_DATA_NUM_MAIN1_reg(data)                           (*((volatile unsigned int*)ISO_MISC_IRDA_IR_DATA_NUM_MAIN1_reg)=data)
#define  get_ISO_MISC_IRDA_IR_DATA_NUM_MAIN1_reg                                 (*((volatile unsigned int*)ISO_MISC_IRDA_IR_DATA_NUM_MAIN1_reg))
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN1_third_data_num_main1_shift              (16)
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN1_second_data_num_main1_shift             (8)
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN1_lat_data_num_main1_shift                (0)
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN1_third_data_num_main1_mask               (0x003F0000)
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN1_second_data_num_main1_mask              (0x00003F00)
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN1_lat_data_num_main1_mask                 (0x0000003F)
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN1_third_data_num_main1(data)              (0x003F0000&((data)<<16))
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN1_second_data_num_main1(data)             (0x00003F00&((data)<<8))
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN1_lat_data_num_main1(data)                (0x0000003F&(data))
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN1_get_third_data_num_main1(data)          ((0x003F0000&(data))>>16)
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN1_get_second_data_num_main1(data)         ((0x00003F00&(data))>>8)
#define  ISO_MISC_IRDA_IR_DATA_NUM_MAIN1_get_lat_data_num_main1(data)            (0x0000003F&(data))

#define  ISO_MISC_IRDA_IR_CR_MAIN1                                              0x18061444
#define  ISO_MISC_IRDA_IR_CR_MAIN1_reg_addr                                      "0xB8061444"
#define  ISO_MISC_IRDA_IR_CR_MAIN1_reg                                           0xB8061444
#define  ISO_MISC_IRDA_IR_CR_MAIN1_inst_addr                                     "0x0011"
#define  set_ISO_MISC_IRDA_IR_CR_MAIN1_reg(data)                                 (*((volatile unsigned int*)ISO_MISC_IRDA_IR_CR_MAIN1_reg)=data)
#define  get_ISO_MISC_IRDA_IR_CR_MAIN1_reg                                       (*((volatile unsigned int*)ISO_MISC_IRDA_IR_CR_MAIN1_reg))
#define  ISO_MISC_IRDA_IR_CR_MAIN1_sw_reset_main1_shift                          (30)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_variable_data_len_main1_shift                 (24)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_variable_data_len_en_main1_shift              (23)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_normal_data_num_en_main1_shift                (16)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_trailer_code_main1_shift                      (15)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_rpt_code_main1_shift                          (14)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_ph_mod_inv_main1_shift                        (13)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_len_mod_inv_main1_shift                       (12)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_lat_ph_len_main1_shift                        (11)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_start_bit_main1_shift                         (10)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_lead_code_main1_shift                         (9)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_lat_rx_endian_main1_shift                     (8)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_lat_data_ph_main1_shift                       (7)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_main1_en_shift                                (0)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_sw_reset_main1_mask                           (0x40000000)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_variable_data_len_main1_mask                  (0x3F000000)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_variable_data_len_en_main1_mask               (0x00800000)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_normal_data_num_en_main1_mask                 (0x00010000)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_trailer_code_main1_mask                       (0x00008000)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_rpt_code_main1_mask                           (0x00004000)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_ph_mod_inv_main1_mask                         (0x00002000)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_len_mod_inv_main1_mask                        (0x00001000)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_lat_ph_len_main1_mask                         (0x00000800)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_start_bit_main1_mask                          (0x00000400)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_lead_code_main1_mask                          (0x00000200)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_lat_rx_endian_main1_mask                      (0x00000100)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_lat_data_ph_main1_mask                        (0x00000080)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_main1_en_mask                                 (0x00000001)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_sw_reset_main1(data)                          (0x40000000&((data)<<30))
#define  ISO_MISC_IRDA_IR_CR_MAIN1_variable_data_len_main1(data)                 (0x3F000000&((data)<<24))
#define  ISO_MISC_IRDA_IR_CR_MAIN1_variable_data_len_en_main1(data)              (0x00800000&((data)<<23))
#define  ISO_MISC_IRDA_IR_CR_MAIN1_normal_data_num_en_main1(data)                (0x00010000&((data)<<16))
#define  ISO_MISC_IRDA_IR_CR_MAIN1_trailer_code_main1(data)                      (0x00008000&((data)<<15))
#define  ISO_MISC_IRDA_IR_CR_MAIN1_rpt_code_main1(data)                          (0x00004000&((data)<<14))
#define  ISO_MISC_IRDA_IR_CR_MAIN1_ph_mod_inv_main1(data)                        (0x00002000&((data)<<13))
#define  ISO_MISC_IRDA_IR_CR_MAIN1_len_mod_inv_main1(data)                       (0x00001000&((data)<<12))
#define  ISO_MISC_IRDA_IR_CR_MAIN1_lat_ph_len_main1(data)                        (0x00000800&((data)<<11))
#define  ISO_MISC_IRDA_IR_CR_MAIN1_start_bit_main1(data)                         (0x00000400&((data)<<10))
#define  ISO_MISC_IRDA_IR_CR_MAIN1_lead_code_main1(data)                         (0x00000200&((data)<<9))
#define  ISO_MISC_IRDA_IR_CR_MAIN1_lat_rx_endian_main1(data)                     (0x00000100&((data)<<8))
#define  ISO_MISC_IRDA_IR_CR_MAIN1_lat_data_ph_main1(data)                       (0x00000080&((data)<<7))
#define  ISO_MISC_IRDA_IR_CR_MAIN1_main1_en(data)                                (0x00000001&(data))
#define  ISO_MISC_IRDA_IR_CR_MAIN1_get_sw_reset_main1(data)                      ((0x40000000&(data))>>30)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_get_variable_data_len_main1(data)             ((0x3F000000&(data))>>24)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_get_variable_data_len_en_main1(data)          ((0x00800000&(data))>>23)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_get_normal_data_num_en_main1(data)            ((0x00010000&(data))>>16)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_get_trailer_code_main1(data)                  ((0x00008000&(data))>>15)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_get_rpt_code_main1(data)                      ((0x00004000&(data))>>14)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_get_ph_mod_inv_main1(data)                    ((0x00002000&(data))>>13)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_get_len_mod_inv_main1(data)                   ((0x00001000&(data))>>12)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_get_lat_ph_len_main1(data)                    ((0x00000800&(data))>>11)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_get_start_bit_main1(data)                     ((0x00000400&(data))>>10)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_get_lead_code_main1(data)                     ((0x00000200&(data))>>9)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_get_lat_rx_endian_main1(data)                 ((0x00000100&(data))>>8)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_get_lat_data_ph_main1(data)                   ((0x00000080&(data))>>7)
#define  ISO_MISC_IRDA_IR_CR_MAIN1_get_main1_en(data)                            (0x00000001&(data))

#define  ISO_MISC_IRDA_IR_DPIR_MAIN1                                            0x18061448
#define  ISO_MISC_IRDA_IR_DPIR_MAIN1_reg_addr                                    "0xB8061448"
#define  ISO_MISC_IRDA_IR_DPIR_MAIN1_reg                                         0xB8061448
#define  ISO_MISC_IRDA_IR_DPIR_MAIN1_inst_addr                                   "0x0012"
#define  set_ISO_MISC_IRDA_IR_DPIR_MAIN1_reg(data)                               (*((volatile unsigned int*)ISO_MISC_IRDA_IR_DPIR_MAIN1_reg)=data)
#define  get_ISO_MISC_IRDA_IR_DPIR_MAIN1_reg                                     (*((volatile unsigned int*)ISO_MISC_IRDA_IR_DPIR_MAIN1_reg))
#define  ISO_MISC_IRDA_IR_DPIR_MAIN1_fsm_reset_time_main1_shift                  (16)
#define  ISO_MISC_IRDA_IR_DPIR_MAIN1_iriotcdp_main1_shift                        (0)
#define  ISO_MISC_IRDA_IR_DPIR_MAIN1_fsm_reset_time_main1_mask                   (0x00FF0000)
#define  ISO_MISC_IRDA_IR_DPIR_MAIN1_iriotcdp_main1_mask                         (0x0000FFFF)
#define  ISO_MISC_IRDA_IR_DPIR_MAIN1_fsm_reset_time_main1(data)                  (0x00FF0000&((data)<<16))
#define  ISO_MISC_IRDA_IR_DPIR_MAIN1_iriotcdp_main1(data)                        (0x0000FFFF&(data))
#define  ISO_MISC_IRDA_IR_DPIR_MAIN1_get_fsm_reset_time_main1(data)              ((0x00FF0000&(data))>>16)
#define  ISO_MISC_IRDA_IR_DPIR_MAIN1_get_iriotcdp_main1(data)                    (0x0000FFFF&(data))

#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN1                                        0x1806144C
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN1_reg_addr                                "0xB806144C"
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN1_reg                                     0xB806144C
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN1_inst_addr                               "0x0013"
#define  set_ISO_MISC_IRDA_IR_RPT_CTRL_MAIN1_reg(data)                           (*((volatile unsigned int*)ISO_MISC_IRDA_IR_RPT_CTRL_MAIN1_reg)=data)
#define  get_ISO_MISC_IRDA_IR_RPT_CTRL_MAIN1_reg                                 (*((volatile unsigned int*)ISO_MISC_IRDA_IR_RPT_CTRL_MAIN1_reg))
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN1_rpt_vld_num_main1_shift                 (16)
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN1_rpt_vld_end_main1_shift                 (8)
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN1_rpt_vld_start_main1_shift               (0)
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN1_rpt_vld_num_main1_mask                  (0x000F0000)
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN1_rpt_vld_end_main1_mask                  (0x0000FF00)
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN1_rpt_vld_start_main1_mask                (0x000000FF)
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN1_rpt_vld_num_main1(data)                 (0x000F0000&((data)<<16))
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN1_rpt_vld_end_main1(data)                 (0x0000FF00&((data)<<8))
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN1_rpt_vld_start_main1(data)               (0x000000FF&(data))
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN1_get_rpt_vld_num_main1(data)             ((0x000F0000&(data))>>16)
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN1_get_rpt_vld_end_main1(data)             ((0x0000FF00&(data))>>8)
#define  ISO_MISC_IRDA_IR_RPT_CTRL_MAIN1_get_rpt_vld_start_main1(data)           (0x000000FF&(data))

#define  ISO_MISC_IRDA_IR_SR_MAIN1                                              0x18061450
#define  ISO_MISC_IRDA_IR_SR_MAIN1_reg_addr                                      "0xB8061450"
#define  ISO_MISC_IRDA_IR_SR_MAIN1_reg                                           0xB8061450
#define  ISO_MISC_IRDA_IR_SR_MAIN1_inst_addr                                     "0x0014"
#define  set_ISO_MISC_IRDA_IR_SR_MAIN1_reg(data)                                 (*((volatile unsigned int*)ISO_MISC_IRDA_IR_SR_MAIN1_reg)=data)
#define  get_ISO_MISC_IRDA_IR_SR_MAIN1_reg                                       (*((volatile unsigned int*)ISO_MISC_IRDA_IR_SR_MAIN1_reg))
#define  ISO_MISC_IRDA_IR_SR_MAIN1_detect_lead_code_main1_shift                  (28)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_remote_toggle_main1_shift                     (24)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_read_pointer_main1_shift                      (20)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_detect_third_data_main1_shift                 (16)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_detect_second_data_main1_shift                (12)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_detect_data_main1_shift                       (8)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_repeat_key_invalid_main1_shift                (5)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_irrf_main1_shift                              (4)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_irdvf_main1_shift                             (0)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_detect_lead_code_main1_mask                   (0x10000000)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_remote_toggle_main1_mask                      (0x01000000)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_read_pointer_main1_mask                       (0x00100000)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_detect_third_data_main1_mask                  (0x00010000)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_detect_second_data_main1_mask                 (0x00001000)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_detect_data_main1_mask                        (0x00000100)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_repeat_key_invalid_main1_mask                 (0x00000020)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_irrf_main1_mask                               (0x00000010)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_irdvf_main1_mask                              (0x00000001)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_detect_lead_code_main1(data)                  (0x10000000&((data)<<28))
#define  ISO_MISC_IRDA_IR_SR_MAIN1_remote_toggle_main1(data)                     (0x01000000&((data)<<24))
#define  ISO_MISC_IRDA_IR_SR_MAIN1_read_pointer_main1(data)                      (0x00100000&((data)<<20))
#define  ISO_MISC_IRDA_IR_SR_MAIN1_detect_third_data_main1(data)                 (0x00010000&((data)<<16))
#define  ISO_MISC_IRDA_IR_SR_MAIN1_detect_second_data_main1(data)                (0x00001000&((data)<<12))
#define  ISO_MISC_IRDA_IR_SR_MAIN1_detect_data_main1(data)                       (0x00000100&((data)<<8))
#define  ISO_MISC_IRDA_IR_SR_MAIN1_repeat_key_invalid_main1(data)                (0x00000020&((data)<<5))
#define  ISO_MISC_IRDA_IR_SR_MAIN1_irrf_main1(data)                              (0x00000010&((data)<<4))
#define  ISO_MISC_IRDA_IR_SR_MAIN1_irdvf_main1(data)                             (0x00000001&(data))
#define  ISO_MISC_IRDA_IR_SR_MAIN1_get_detect_lead_code_main1(data)              ((0x10000000&(data))>>28)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_get_remote_toggle_main1(data)                 ((0x01000000&(data))>>24)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_get_read_pointer_main1(data)                  ((0x00100000&(data))>>20)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_get_detect_third_data_main1(data)             ((0x00010000&(data))>>16)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_get_detect_second_data_main1(data)            ((0x00001000&(data))>>12)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_get_detect_data_main1(data)                   ((0x00000100&(data))>>8)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_get_repeat_key_invalid_main1(data)            ((0x00000020&(data))>>5)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_get_irrf_main1(data)                          ((0x00000010&(data))>>4)
#define  ISO_MISC_IRDA_IR_SR_MAIN1_get_irdvf_main1(data)                         (0x00000001&(data))

#define  ISO_MISC_IRDA_IR_RP_LOW_MAIN1                                          0x18061454
#define  ISO_MISC_IRDA_IR_RP_LOW_MAIN1_reg_addr                                  "0xB8061454"
#define  ISO_MISC_IRDA_IR_RP_LOW_MAIN1_reg                                       0xB8061454
#define  ISO_MISC_IRDA_IR_RP_LOW_MAIN1_inst_addr                                 "0x0015"
#define  set_ISO_MISC_IRDA_IR_RP_LOW_MAIN1_reg(data)                             (*((volatile unsigned int*)ISO_MISC_IRDA_IR_RP_LOW_MAIN1_reg)=data)
#define  get_ISO_MISC_IRDA_IR_RP_LOW_MAIN1_reg                                   (*((volatile unsigned int*)ISO_MISC_IRDA_IR_RP_LOW_MAIN1_reg))
#define  ISO_MISC_IRDA_IR_RP_LOW_MAIN1_irrp_low_main1_shift                      (0)
#define  ISO_MISC_IRDA_IR_RP_LOW_MAIN1_irrp_low_main1_mask                       (0xFFFFFFFF)
#define  ISO_MISC_IRDA_IR_RP_LOW_MAIN1_irrp_low_main1(data)                      (0xFFFFFFFF&(data))
#define  ISO_MISC_IRDA_IR_RP_LOW_MAIN1_get_irrp_low_main1(data)                  (0xFFFFFFFF&(data))

#define  ISO_MISC_IRDA_IR_RP_HIGH_MAIN1                                         0x18061458
#define  ISO_MISC_IRDA_IR_RP_HIGH_MAIN1_reg_addr                                 "0xB8061458"
#define  ISO_MISC_IRDA_IR_RP_HIGH_MAIN1_reg                                      0xB8061458
#define  ISO_MISC_IRDA_IR_RP_HIGH_MAIN1_inst_addr                                "0x0016"
#define  set_ISO_MISC_IRDA_IR_RP_HIGH_MAIN1_reg(data)                            (*((volatile unsigned int*)ISO_MISC_IRDA_IR_RP_HIGH_MAIN1_reg)=data)
#define  get_ISO_MISC_IRDA_IR_RP_HIGH_MAIN1_reg                                  (*((volatile unsigned int*)ISO_MISC_IRDA_IR_RP_HIGH_MAIN1_reg))
#define  ISO_MISC_IRDA_IR_RP_HIGH_MAIN1_irrp_high_main1_shift                    (0)
#define  ISO_MISC_IRDA_IR_RP_HIGH_MAIN1_irrp_high_main1_mask                     (0xFFFFFFFF)
#define  ISO_MISC_IRDA_IR_RP_HIGH_MAIN1_irrp_high_main1(data)                    (0xFFFFFFFF&(data))
#define  ISO_MISC_IRDA_IR_RP_HIGH_MAIN1_get_irrp_high_main1(data)                (0xFFFFFFFF&(data))

#define  ISO_MISC_IRDA_IR_MAIN1                                                 0x1806145C
#define  ISO_MISC_IRDA_IR_MAIN1_reg_addr                                         "0xB806145C"
#define  ISO_MISC_IRDA_IR_MAIN1_reg                                              0xB806145C
#define  ISO_MISC_IRDA_IR_MAIN1_inst_addr                                        "0x0017"
#define  set_ISO_MISC_IRDA_IR_MAIN1_reg(data)                                    (*((volatile unsigned int*)ISO_MISC_IRDA_IR_MAIN1_reg)=data)
#define  get_ISO_MISC_IRDA_IR_MAIN1_reg                                          (*((volatile unsigned int*)ISO_MISC_IRDA_IR_MAIN1_reg))
#define  ISO_MISC_IRDA_IR_MAIN1_rp_main1_rst_shift                               (20)
#define  ISO_MISC_IRDA_IR_MAIN1_detect_lead_code_main1_emcu_int_en_shift         (19)
#define  ISO_MISC_IRDA_IR_MAIN1_irdvf_main1_emcu_int_en_shift                    (18)
#define  ISO_MISC_IRDA_IR_MAIN1_detect_lead_code_main1_int_en_shift              (17)
#define  ISO_MISC_IRDA_IR_MAIN1_irdvf_main1_int_en_shift                         (16)
#define  ISO_MISC_IRDA_IR_MAIN1_irfd_main1_shift                                 (0)
#define  ISO_MISC_IRDA_IR_MAIN1_rp_main1_rst_mask                                (0x00100000)
#define  ISO_MISC_IRDA_IR_MAIN1_detect_lead_code_main1_emcu_int_en_mask          (0x00080000)
#define  ISO_MISC_IRDA_IR_MAIN1_irdvf_main1_emcu_int_en_mask                     (0x00040000)
#define  ISO_MISC_IRDA_IR_MAIN1_detect_lead_code_main1_int_en_mask               (0x00020000)
#define  ISO_MISC_IRDA_IR_MAIN1_irdvf_main1_int_en_mask                          (0x00010000)
#define  ISO_MISC_IRDA_IR_MAIN1_irfd_main1_mask                                  (0x0000FFFF)
#define  ISO_MISC_IRDA_IR_MAIN1_rp_main1_rst(data)                               (0x00100000&((data)<<20))
#define  ISO_MISC_IRDA_IR_MAIN1_detect_lead_code_main1_emcu_int_en(data)         (0x00080000&((data)<<19))
#define  ISO_MISC_IRDA_IR_MAIN1_irdvf_main1_emcu_int_en(data)                    (0x00040000&((data)<<18))
#define  ISO_MISC_IRDA_IR_MAIN1_detect_lead_code_main1_int_en(data)              (0x00020000&((data)<<17))
#define  ISO_MISC_IRDA_IR_MAIN1_irdvf_main1_int_en(data)                         (0x00010000&((data)<<16))
#define  ISO_MISC_IRDA_IR_MAIN1_irfd_main1(data)                                 (0x0000FFFF&(data))
#define  ISO_MISC_IRDA_IR_MAIN1_get_rp_main1_rst(data)                           ((0x00100000&(data))>>20)
#define  ISO_MISC_IRDA_IR_MAIN1_get_detect_lead_code_main1_emcu_int_en(data)     ((0x00080000&(data))>>19)
#define  ISO_MISC_IRDA_IR_MAIN1_get_irdvf_main1_emcu_int_en(data)                ((0x00040000&(data))>>18)
#define  ISO_MISC_IRDA_IR_MAIN1_get_detect_lead_code_main1_int_en(data)          ((0x00020000&(data))>>17)
#define  ISO_MISC_IRDA_IR_MAIN1_get_irdvf_main1_int_en(data)                     ((0x00010000&(data))>>16)
#define  ISO_MISC_IRDA_IR_MAIN1_get_irfd_main1(data)                             (0x0000FFFF&(data))

#define  ISO_MISC_IRDA_IR_debug_mode_sel                                        0x18061460
#define  ISO_MISC_IRDA_IR_debug_mode_sel_reg_addr                                "0xB8061460"
#define  ISO_MISC_IRDA_IR_debug_mode_sel_reg                                     0xB8061460
#define  ISO_MISC_IRDA_IR_debug_mode_sel_inst_addr                               "0x0018"
#define  set_ISO_MISC_IRDA_IR_debug_mode_sel_reg(data)                           (*((volatile unsigned int*)ISO_MISC_IRDA_IR_debug_mode_sel_reg)=data)
#define  get_ISO_MISC_IRDA_IR_debug_mode_sel_reg                                 (*((volatile unsigned int*)ISO_MISC_IRDA_IR_debug_mode_sel_reg))
#define  ISO_MISC_IRDA_IR_debug_mode_sel_ir_debug_mode_sel_shift                 (0)
#define  ISO_MISC_IRDA_IR_debug_mode_sel_ir_debug_mode_sel_mask                  (0xFFFFFFFF)
#define  ISO_MISC_IRDA_IR_debug_mode_sel_ir_debug_mode_sel(data)                 (0xFFFFFFFF&(data))
#define  ISO_MISC_IRDA_IR_debug_mode_sel_get_ir_debug_mode_sel(data)             (0xFFFFFFFF&(data))

#define  ISO_MISC_IRDA_IR_debug_port                                            0x18061464
#define  ISO_MISC_IRDA_IR_debug_port_reg_addr                                    "0xB8061464"
#define  ISO_MISC_IRDA_IR_debug_port_reg                                         0xB8061464
#define  ISO_MISC_IRDA_IR_debug_port_inst_addr                                   "0x0019"
#define  set_ISO_MISC_IRDA_IR_debug_port_reg(data)                               (*((volatile unsigned int*)ISO_MISC_IRDA_IR_debug_port_reg)=data)
#define  get_ISO_MISC_IRDA_IR_debug_port_reg                                     (*((volatile unsigned int*)ISO_MISC_IRDA_IR_debug_port_reg))
#define  ISO_MISC_IRDA_IR_debug_port_ir_debug_port_shift                         (0)
#define  ISO_MISC_IRDA_IR_debug_port_ir_debug_port_mask                          (0xFFFFFFFF)
#define  ISO_MISC_IRDA_IR_debug_port_ir_debug_port(data)                         (0xFFFFFFFF&(data))
#define  ISO_MISC_IRDA_IR_debug_port_get_ir_debug_port(data)                     (0xFFFFFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======ISO_MISC_IRDA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lat_lead_low_main0:8;
        RBus_UInt32  lat_logic_low_main0:8;
        RBus_UInt32  lat_data0_high_main0:8;
        RBus_UInt32  lat_data1_high_main0:8;
    };
}iso_misc_irda_ir_psr_main0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lat_denos_num_main0:6;
        RBus_UInt32  rp_burst_main0:8;
        RBus_UInt32  rp_silence_main0:8;
        RBus_UInt32  lat_lead_high_main0:8;
    };
}iso_misc_irda_ir_per_main0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irrbl_up_main0:8;
        RBus_UInt32  irrml_up_main0:8;
        RBus_UInt32  irrdzl_up_main0:8;
        RBus_UInt32  irrdol_up_main0:8;
    };
}iso_misc_irda_ir_psr_up_main0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rp_burst_up_main0:8;
        RBus_UInt32  rp_silence_up_main0:8;
        RBus_UInt32  end_pattern_main0:8;
        RBus_UInt32  irrsl_up_main0:8;
    };
}iso_misc_irda_ir_per_up_main0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  third_data_num_main0:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  second_data_num_main0:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  lat_data_num_main0:6;
    };
}iso_misc_irda_ir_data_num_main0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  sw_reset_main0:1;
        RBus_UInt32  variable_data_len_main0:6;
        RBus_UInt32  variable_data_len_en_main0:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  normal_data_num_en_main0:1;
        RBus_UInt32  trailer_code_main0:1;
        RBus_UInt32  rpt_code_main0:1;
        RBus_UInt32  ph_mod_inv_main0:1;
        RBus_UInt32  len_mod_inv_main0:1;
        RBus_UInt32  lat_ph_len_main0:1;
        RBus_UInt32  start_bit_main0:1;
        RBus_UInt32  lead_code_main0:1;
        RBus_UInt32  lat_rx_endian_main0:1;
        RBus_UInt32  lat_data_ph_main0:1;
        RBus_UInt32  res3:6;
        RBus_UInt32  main0_en:1;
    };
}iso_misc_irda_ir_cr_main0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  fsm_reset_time_main0:8;
        RBus_UInt32  iriotcdp_main0:16;
    };
}iso_misc_irda_ir_dpir_main0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  rpt_vld_num_main0:4;
        RBus_UInt32  rpt_vld_end_main0:8;
        RBus_UInt32  rpt_vld_start_main0:8;
    };
}iso_misc_irda_ir_rpt_ctrl_main0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  detect_lead_code_main0:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  remote_toggle_main0:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  read_pointer_main0:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  detect_third_data_main0:1;
        RBus_UInt32  res5:3;
        RBus_UInt32  detect_second_data_main0:1;
        RBus_UInt32  res6:3;
        RBus_UInt32  detect_data_main0:1;
        RBus_UInt32  res7:2;
        RBus_UInt32  repeat_key_invalid_main0:1;
        RBus_UInt32  irrf_main0:1;
        RBus_UInt32  res8:3;
        RBus_UInt32  irdvf_main0:1;
    };
}iso_misc_irda_ir_sr_main0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irrp_low_main0:32;
    };
}iso_misc_irda_ir_rp_low_main0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irrp_high_main0:32;
    };
}iso_misc_irda_ir_rp_high_main0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  rp_main0_rst:1;
        RBus_UInt32  detect_lead_code_main0_emcu_int_en:1;
        RBus_UInt32  irdvf_main0_emcu_int_en:1;
        RBus_UInt32  detect_lead_code_main0_int_en:1;
        RBus_UInt32  irdvf_main0_int_en:1;
        RBus_UInt32  irfd_main0:16;
    };
}iso_misc_irda_ir_main0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lat_lead_low_main1:8;
        RBus_UInt32  lat_logic_low_main1:8;
        RBus_UInt32  lat_data0_high_main1:8;
        RBus_UInt32  lat_data1_high_main1:8;
    };
}iso_misc_irda_ir_psr_main1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lat_denos_num_main1:6;
        RBus_UInt32  rp_burst_main1:8;
        RBus_UInt32  rp_silence_main1:8;
        RBus_UInt32  lat_lead_high_main1:8;
    };
}iso_misc_irda_ir_per_main1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irrbl_up_main1:8;
        RBus_UInt32  irrml_up_main1:8;
        RBus_UInt32  irrdzl_up_main1:8;
        RBus_UInt32  irrdol_up_main1:8;
    };
}iso_misc_irda_ir_psr_up_main1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rp_burst_up_main1:8;
        RBus_UInt32  rp_silence_up_main1:8;
        RBus_UInt32  end_pattern_main1:8;
        RBus_UInt32  irrsl_up_main1:8;
    };
}iso_misc_irda_ir_per_up_main1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  third_data_num_main1:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  second_data_num_main1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  lat_data_num_main1:6;
    };
}iso_misc_irda_ir_data_num_main1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  sw_reset_main1:1;
        RBus_UInt32  variable_data_len_main1:6;
        RBus_UInt32  variable_data_len_en_main1:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  normal_data_num_en_main1:1;
        RBus_UInt32  trailer_code_main1:1;
        RBus_UInt32  rpt_code_main1:1;
        RBus_UInt32  ph_mod_inv_main1:1;
        RBus_UInt32  len_mod_inv_main1:1;
        RBus_UInt32  lat_ph_len_main1:1;
        RBus_UInt32  start_bit_main1:1;
        RBus_UInt32  lead_code_main1:1;
        RBus_UInt32  lat_rx_endian_main1:1;
        RBus_UInt32  lat_data_ph_main1:1;
        RBus_UInt32  res3:6;
        RBus_UInt32  main1_en:1;
    };
}iso_misc_irda_ir_cr_main1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  fsm_reset_time_main1:8;
        RBus_UInt32  iriotcdp_main1:16;
    };
}iso_misc_irda_ir_dpir_main1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  rpt_vld_num_main1:4;
        RBus_UInt32  rpt_vld_end_main1:8;
        RBus_UInt32  rpt_vld_start_main1:8;
    };
}iso_misc_irda_ir_rpt_ctrl_main1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  detect_lead_code_main1:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  remote_toggle_main1:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  read_pointer_main1:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  detect_third_data_main1:1;
        RBus_UInt32  res5:3;
        RBus_UInt32  detect_second_data_main1:1;
        RBus_UInt32  res6:3;
        RBus_UInt32  detect_data_main1:1;
        RBus_UInt32  res7:2;
        RBus_UInt32  repeat_key_invalid_main1:1;
        RBus_UInt32  irrf_main1:1;
        RBus_UInt32  res8:3;
        RBus_UInt32  irdvf_main1:1;
    };
}iso_misc_irda_ir_sr_main1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irrp_low_main1:32;
    };
}iso_misc_irda_ir_rp_low_main1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irrp_high_main1:32;
    };
}iso_misc_irda_ir_rp_high_main1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  rp_main1_rst:1;
        RBus_UInt32  detect_lead_code_main1_emcu_int_en:1;
        RBus_UInt32  irdvf_main1_emcu_int_en:1;
        RBus_UInt32  detect_lead_code_main1_int_en:1;
        RBus_UInt32  irdvf_main1_int_en:1;
        RBus_UInt32  irfd_main1:16;
    };
}iso_misc_irda_ir_main1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ir_debug_mode_sel:32;
    };
}iso_misc_irda_ir_debug_mode_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ir_debug_port:32;
    };
}iso_misc_irda_ir_debug_port_RBUS;

#else //apply LITTLE_ENDIAN

//======ISO_MISC_IRDA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lat_data1_high_main0:8;
        RBus_UInt32  lat_data0_high_main0:8;
        RBus_UInt32  lat_logic_low_main0:8;
        RBus_UInt32  lat_lead_low_main0:8;
    };
}iso_misc_irda_ir_psr_main0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lat_lead_high_main0:8;
        RBus_UInt32  rp_silence_main0:8;
        RBus_UInt32  rp_burst_main0:8;
        RBus_UInt32  lat_denos_num_main0:6;
        RBus_UInt32  res1:2;
    };
}iso_misc_irda_ir_per_main0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irrdol_up_main0:8;
        RBus_UInt32  irrdzl_up_main0:8;
        RBus_UInt32  irrml_up_main0:8;
        RBus_UInt32  irrbl_up_main0:8;
    };
}iso_misc_irda_ir_psr_up_main0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irrsl_up_main0:8;
        RBus_UInt32  end_pattern_main0:8;
        RBus_UInt32  rp_silence_up_main0:8;
        RBus_UInt32  rp_burst_up_main0:8;
    };
}iso_misc_irda_ir_per_up_main0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lat_data_num_main0:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  second_data_num_main0:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  third_data_num_main0:6;
        RBus_UInt32  res3:10;
    };
}iso_misc_irda_ir_data_num_main0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main0_en:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  lat_data_ph_main0:1;
        RBus_UInt32  lat_rx_endian_main0:1;
        RBus_UInt32  lead_code_main0:1;
        RBus_UInt32  start_bit_main0:1;
        RBus_UInt32  lat_ph_len_main0:1;
        RBus_UInt32  len_mod_inv_main0:1;
        RBus_UInt32  ph_mod_inv_main0:1;
        RBus_UInt32  rpt_code_main0:1;
        RBus_UInt32  trailer_code_main0:1;
        RBus_UInt32  normal_data_num_en_main0:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  variable_data_len_en_main0:1;
        RBus_UInt32  variable_data_len_main0:6;
        RBus_UInt32  sw_reset_main0:1;
        RBus_UInt32  res3:1;
    };
}iso_misc_irda_ir_cr_main0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iriotcdp_main0:16;
        RBus_UInt32  fsm_reset_time_main0:8;
        RBus_UInt32  res1:8;
    };
}iso_misc_irda_ir_dpir_main0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rpt_vld_start_main0:8;
        RBus_UInt32  rpt_vld_end_main0:8;
        RBus_UInt32  rpt_vld_num_main0:4;
        RBus_UInt32  res1:12;
    };
}iso_misc_irda_ir_rpt_ctrl_main0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irdvf_main0:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  irrf_main0:1;
        RBus_UInt32  repeat_key_invalid_main0:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  detect_data_main0:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  detect_second_data_main0:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  detect_third_data_main0:1;
        RBus_UInt32  res5:3;
        RBus_UInt32  read_pointer_main0:1;
        RBus_UInt32  res6:3;
        RBus_UInt32  remote_toggle_main0:1;
        RBus_UInt32  res7:3;
        RBus_UInt32  detect_lead_code_main0:1;
        RBus_UInt32  res8:3;
    };
}iso_misc_irda_ir_sr_main0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irrp_low_main0:32;
    };
}iso_misc_irda_ir_rp_low_main0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irrp_high_main0:32;
    };
}iso_misc_irda_ir_rp_high_main0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irfd_main0:16;
        RBus_UInt32  irdvf_main0_int_en:1;
        RBus_UInt32  detect_lead_code_main0_int_en:1;
        RBus_UInt32  irdvf_main0_emcu_int_en:1;
        RBus_UInt32  detect_lead_code_main0_emcu_int_en:1;
        RBus_UInt32  rp_main0_rst:1;
        RBus_UInt32  res1:11;
    };
}iso_misc_irda_ir_main0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lat_data1_high_main1:8;
        RBus_UInt32  lat_data0_high_main1:8;
        RBus_UInt32  lat_logic_low_main1:8;
        RBus_UInt32  lat_lead_low_main1:8;
    };
}iso_misc_irda_ir_psr_main1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lat_lead_high_main1:8;
        RBus_UInt32  rp_silence_main1:8;
        RBus_UInt32  rp_burst_main1:8;
        RBus_UInt32  lat_denos_num_main1:6;
        RBus_UInt32  res1:2;
    };
}iso_misc_irda_ir_per_main1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irrdol_up_main1:8;
        RBus_UInt32  irrdzl_up_main1:8;
        RBus_UInt32  irrml_up_main1:8;
        RBus_UInt32  irrbl_up_main1:8;
    };
}iso_misc_irda_ir_psr_up_main1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irrsl_up_main1:8;
        RBus_UInt32  end_pattern_main1:8;
        RBus_UInt32  rp_silence_up_main1:8;
        RBus_UInt32  rp_burst_up_main1:8;
    };
}iso_misc_irda_ir_per_up_main1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lat_data_num_main1:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  second_data_num_main1:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  third_data_num_main1:6;
        RBus_UInt32  res3:10;
    };
}iso_misc_irda_ir_data_num_main1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main1_en:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  lat_data_ph_main1:1;
        RBus_UInt32  lat_rx_endian_main1:1;
        RBus_UInt32  lead_code_main1:1;
        RBus_UInt32  start_bit_main1:1;
        RBus_UInt32  lat_ph_len_main1:1;
        RBus_UInt32  len_mod_inv_main1:1;
        RBus_UInt32  ph_mod_inv_main1:1;
        RBus_UInt32  rpt_code_main1:1;
        RBus_UInt32  trailer_code_main1:1;
        RBus_UInt32  normal_data_num_en_main1:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  variable_data_len_en_main1:1;
        RBus_UInt32  variable_data_len_main1:6;
        RBus_UInt32  sw_reset_main1:1;
        RBus_UInt32  res3:1;
    };
}iso_misc_irda_ir_cr_main1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iriotcdp_main1:16;
        RBus_UInt32  fsm_reset_time_main1:8;
        RBus_UInt32  res1:8;
    };
}iso_misc_irda_ir_dpir_main1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rpt_vld_start_main1:8;
        RBus_UInt32  rpt_vld_end_main1:8;
        RBus_UInt32  rpt_vld_num_main1:4;
        RBus_UInt32  res1:12;
    };
}iso_misc_irda_ir_rpt_ctrl_main1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irdvf_main1:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  irrf_main1:1;
        RBus_UInt32  repeat_key_invalid_main1:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  detect_data_main1:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  detect_second_data_main1:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  detect_third_data_main1:1;
        RBus_UInt32  res5:3;
        RBus_UInt32  read_pointer_main1:1;
        RBus_UInt32  res6:3;
        RBus_UInt32  remote_toggle_main1:1;
        RBus_UInt32  res7:3;
        RBus_UInt32  detect_lead_code_main1:1;
        RBus_UInt32  res8:3;
    };
}iso_misc_irda_ir_sr_main1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irrp_low_main1:32;
    };
}iso_misc_irda_ir_rp_low_main1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irrp_high_main1:32;
    };
}iso_misc_irda_ir_rp_high_main1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irfd_main1:16;
        RBus_UInt32  irdvf_main1_int_en:1;
        RBus_UInt32  detect_lead_code_main1_int_en:1;
        RBus_UInt32  irdvf_main1_emcu_int_en:1;
        RBus_UInt32  detect_lead_code_main1_emcu_int_en:1;
        RBus_UInt32  rp_main1_rst:1;
        RBus_UInt32  res1:11;
    };
}iso_misc_irda_ir_main1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ir_debug_mode_sel:32;
    };
}iso_misc_irda_ir_debug_mode_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ir_debug_port:32;
    };
}iso_misc_irda_ir_debug_port_RBUS;




#endif 


#endif 
