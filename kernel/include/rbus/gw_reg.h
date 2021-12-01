/**
* @file Merlin5-DesignSpec-GPU_Wrapper
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_GW_REG_H_
#define _RBUS_GW_REG_H_

#include "rbus_types.h"



//  GW Register Address
#define  GW_gpu_irq_status                                                      0x1810E000
#define  GW_gpu_irq_status_reg_addr                                              "0xB810E000"
#define  GW_gpu_irq_status_reg                                                   0xB810E000
#define  GW_gpu_irq_status_inst_addr                                             "0x0000"
#define  set_GW_gpu_irq_status_reg(data)                                         (*((volatile unsigned int*)GW_gpu_irq_status_reg)=data)
#define  get_GW_gpu_irq_status_reg                                               (*((volatile unsigned int*)GW_gpu_irq_status_reg))
#define  GW_gpu_irq_status_irqgpu_shift                                          (3)
#define  GW_gpu_irq_status_irqmmu_shift                                          (2)
#define  GW_gpu_irq_status_irqjob_shift                                          (1)
#define  GW_gpu_irq_status_irqevent_shift                                        (0)
#define  GW_gpu_irq_status_irqgpu_mask                                           (0x00000008)
#define  GW_gpu_irq_status_irqmmu_mask                                           (0x00000004)
#define  GW_gpu_irq_status_irqjob_mask                                           (0x00000002)
#define  GW_gpu_irq_status_irqevent_mask                                         (0x00000001)
#define  GW_gpu_irq_status_irqgpu(data)                                          (0x00000008&((data)<<3))
#define  GW_gpu_irq_status_irqmmu(data)                                          (0x00000004&((data)<<2))
#define  GW_gpu_irq_status_irqjob(data)                                          (0x00000002&((data)<<1))
#define  GW_gpu_irq_status_irqevent(data)                                        (0x00000001&(data))
#define  GW_gpu_irq_status_get_irqgpu(data)                                      ((0x00000008&(data))>>3)
#define  GW_gpu_irq_status_get_irqmmu(data)                                      ((0x00000004&(data))>>2)
#define  GW_gpu_irq_status_get_irqjob(data)                                      ((0x00000002&(data))>>1)
#define  GW_gpu_irq_status_get_irqevent(data)                                    (0x00000001&(data))

#define  GW_gpu_sw_bist_config                                                  0x1810E004
#define  GW_gpu_sw_bist_config_reg_addr                                          "0xB810E004"
#define  GW_gpu_sw_bist_config_reg                                               0xB810E004
#define  GW_gpu_sw_bist_config_inst_addr                                         "0x0001"
#define  set_GW_gpu_sw_bist_config_reg(data)                                     (*((volatile unsigned int*)GW_gpu_sw_bist_config_reg)=data)
#define  get_GW_gpu_sw_bist_config_reg                                           (*((volatile unsigned int*)GW_gpu_sw_bist_config_reg))
#define  GW_gpu_sw_bist_config_sw_bist_tdo_shift                                 (8)
#define  GW_gpu_sw_bist_config_sw_bist_trstn_shift                               (7)
#define  GW_gpu_sw_bist_config_sw_bist_tms_shift                                 (6)
#define  GW_gpu_sw_bist_config_sw_bist_tdi_shift                                 (5)
#define  GW_gpu_sw_bist_config_sw_bist_tck_shift                                 (4)
#define  GW_gpu_sw_bist_config_ejtag_sw_bist_shift                               (0)
#define  GW_gpu_sw_bist_config_sw_bist_tdo_mask                                  (0x00000100)
#define  GW_gpu_sw_bist_config_sw_bist_trstn_mask                                (0x00000080)
#define  GW_gpu_sw_bist_config_sw_bist_tms_mask                                  (0x00000040)
#define  GW_gpu_sw_bist_config_sw_bist_tdi_mask                                  (0x00000020)
#define  GW_gpu_sw_bist_config_sw_bist_tck_mask                                  (0x00000010)
#define  GW_gpu_sw_bist_config_ejtag_sw_bist_mask                                (0x00000001)
#define  GW_gpu_sw_bist_config_sw_bist_tdo(data)                                 (0x00000100&((data)<<8))
#define  GW_gpu_sw_bist_config_sw_bist_trstn(data)                               (0x00000080&((data)<<7))
#define  GW_gpu_sw_bist_config_sw_bist_tms(data)                                 (0x00000040&((data)<<6))
#define  GW_gpu_sw_bist_config_sw_bist_tdi(data)                                 (0x00000020&((data)<<5))
#define  GW_gpu_sw_bist_config_sw_bist_tck(data)                                 (0x00000010&((data)<<4))
#define  GW_gpu_sw_bist_config_ejtag_sw_bist(data)                               (0x00000001&(data))
#define  GW_gpu_sw_bist_config_get_sw_bist_tdo(data)                             ((0x00000100&(data))>>8)
#define  GW_gpu_sw_bist_config_get_sw_bist_trstn(data)                           ((0x00000080&(data))>>7)
#define  GW_gpu_sw_bist_config_get_sw_bist_tms(data)                             ((0x00000040&(data))>>6)
#define  GW_gpu_sw_bist_config_get_sw_bist_tdi(data)                             ((0x00000020&(data))>>5)
#define  GW_gpu_sw_bist_config_get_sw_bist_tck(data)                             ((0x00000010&(data))>>4)
#define  GW_gpu_sw_bist_config_get_ejtag_sw_bist(data)                           (0x00000001&(data))

#define  GW_gpu_reset                                                           0x1810F000
#define  GW_gpu_reset_reg_addr                                                   "0xB810F000"
#define  GW_gpu_reset_reg                                                        0xB810F000
#define  GW_gpu_reset_inst_addr                                                  "0x0002"
#define  set_GW_gpu_reset_reg(data)                                              (*((volatile unsigned int*)GW_gpu_reset_reg)=data)
#define  get_GW_gpu_reset_reg                                                    (*((volatile unsigned int*)GW_gpu_reset_reg))
#define  GW_gpu_reset_dummy_1_shift                                              (1)
#define  GW_gpu_reset_gpu_resetn_shift                                           (0)
#define  GW_gpu_reset_dummy_1_mask                                               (0x00000002)
#define  GW_gpu_reset_gpu_resetn_mask                                            (0x00000001)
#define  GW_gpu_reset_dummy_1(data)                                              (0x00000002&((data)<<1))
#define  GW_gpu_reset_gpu_resetn(data)                                           (0x00000001&(data))
#define  GW_gpu_reset_get_dummy_1(data)                                          ((0x00000002&(data))>>1)
#define  GW_gpu_reset_get_gpu_resetn(data)                                       (0x00000001&(data))

#define  GW_gpu_protected_mode                                                  0x1810F004
#define  GW_gpu_protected_mode_reg_addr                                          "0xB810F004"
#define  GW_gpu_protected_mode_reg                                               0xB810F004
#define  GW_gpu_protected_mode_inst_addr                                         "0x0003"
#define  set_GW_gpu_protected_mode_reg(data)                                     (*((volatile unsigned int*)GW_gpu_protected_mode_reg)=data)
#define  get_GW_gpu_protected_mode_reg                                           (*((volatile unsigned int*)GW_gpu_protected_mode_reg))
#define  GW_gpu_protected_mode_gpu_protected_mode_shift                          (0)
#define  GW_gpu_protected_mode_gpu_protected_mode_mask                           (0x00000003)
#define  GW_gpu_protected_mode_gpu_protected_mode(data)                          (0x00000003&(data))
#define  GW_gpu_protected_mode_get_gpu_protected_mode(data)                      (0x00000003&(data))

#define  GW_gpu_normal_nsaid                                                    0x1810F008
#define  GW_gpu_normal_nsaid_reg_addr                                            "0xB810F008"
#define  GW_gpu_normal_nsaid_reg                                                 0xB810F008
#define  GW_gpu_normal_nsaid_inst_addr                                           "0x0004"
#define  set_GW_gpu_normal_nsaid_reg(data)                                       (*((volatile unsigned int*)GW_gpu_normal_nsaid_reg)=data)
#define  get_GW_gpu_normal_nsaid_reg                                             (*((volatile unsigned int*)GW_gpu_normal_nsaid_reg))
#define  GW_gpu_normal_nsaid_gpu_normal_nsaid_shift                              (0)
#define  GW_gpu_normal_nsaid_gpu_normal_nsaid_mask                               (0x0000000F)
#define  GW_gpu_normal_nsaid_gpu_normal_nsaid(data)                              (0x0000000F&(data))
#define  GW_gpu_normal_nsaid_get_gpu_normal_nsaid(data)                          (0x0000000F&(data))

#define  GW_gpu_prot_nsaid                                                      0x1810F00C
#define  GW_gpu_prot_nsaid_reg_addr                                              "0xB810F00C"
#define  GW_gpu_prot_nsaid_reg                                                   0xB810F00C
#define  GW_gpu_prot_nsaid_inst_addr                                             "0x0005"
#define  set_GW_gpu_prot_nsaid_reg(data)                                         (*((volatile unsigned int*)GW_gpu_prot_nsaid_reg)=data)
#define  get_GW_gpu_prot_nsaid_reg                                               (*((volatile unsigned int*)GW_gpu_prot_nsaid_reg))
#define  GW_gpu_prot_nsaid_gpu_prot_nsaid_shift                                  (0)
#define  GW_gpu_prot_nsaid_gpu_prot_nsaid_mask                                   (0x0000000F)
#define  GW_gpu_prot_nsaid_gpu_prot_nsaid(data)                                  (0x0000000F&(data))
#define  GW_gpu_prot_nsaid_get_gpu_prot_nsaid(data)                              (0x0000000F&(data))

#define  GW_dvalin_config_0                                                     0x1810F010
#define  GW_dvalin_config_0_reg_addr                                             "0xB810F010"
#define  GW_dvalin_config_0_reg                                                  0xB810F010
#define  GW_dvalin_config_0_inst_addr                                            "0x0006"
#define  set_GW_dvalin_config_0_reg(data)                                        (*((volatile unsigned int*)GW_dvalin_config_0_reg)=data)
#define  get_GW_dvalin_config_0_reg                                              (*((volatile unsigned int*)GW_dvalin_config_0_reg))
#define  GW_dvalin_config_0_gpu_coherencyfeatures_shift                          (16)
#define  GW_dvalin_config_0_gpu_striping_granule_shift                           (0)
#define  GW_dvalin_config_0_gpu_coherencyfeatures_mask                           (0x00010000)
#define  GW_dvalin_config_0_gpu_striping_granule_mask                            (0x00000007)
#define  GW_dvalin_config_0_gpu_coherencyfeatures(data)                          (0x00010000&((data)<<16))
#define  GW_dvalin_config_0_gpu_striping_granule(data)                           (0x00000007&(data))
#define  GW_dvalin_config_0_get_gpu_coherencyfeatures(data)                      ((0x00010000&(data))>>16)
#define  GW_dvalin_config_0_get_gpu_striping_granule(data)                       (0x00000007&(data))

#define  GW_dvalin_config_1                                                     0x1810F014
#define  GW_dvalin_config_1_reg_addr                                             "0xB810F014"
#define  GW_dvalin_config_1_reg                                                  0xB810F014
#define  GW_dvalin_config_1_inst_addr                                            "0x0007"
#define  set_GW_dvalin_config_1_reg(data)                                        (*((volatile unsigned int*)GW_dvalin_config_1_reg)=data)
#define  get_GW_dvalin_config_1_reg                                              (*((volatile unsigned int*)GW_dvalin_config_1_reg))
#define  GW_dvalin_config_1_gpu_texfmtenable_shift                               (0)
#define  GW_dvalin_config_1_gpu_texfmtenable_mask                                (0xFFFFFFFF)
#define  GW_dvalin_config_1_gpu_texfmtenable(data)                               (0xFFFFFFFF&(data))
#define  GW_dvalin_config_1_get_gpu_texfmtenable(data)                           (0xFFFFFFFF&(data))

#define  GW_dc_sys_cti                                                          0x1810E020
#define  GW_dc_sys_cti_reg_addr                                                  "0xB810E020"
#define  GW_dc_sys_cti_reg                                                       0xB810E020
#define  GW_dc_sys_cti_inst_addr                                                 "0x0008"
#define  set_GW_dc_sys_cti_reg(data)                                             (*((volatile unsigned int*)GW_dc_sys_cti_reg)=data)
#define  get_GW_dc_sys_cti_reg                                                   (*((volatile unsigned int*)GW_dc_sys_cti_reg))
#define  GW_dc_sys_cti_gw_rcmd_mode_shift                                        (0)
#define  GW_dc_sys_cti_gw_rcmd_mode_mask                                         (0x00000003)
#define  GW_dc_sys_cti_gw_rcmd_mode(data)                                        (0x00000003&(data))
#define  GW_dc_sys_cti_get_gw_rcmd_mode(data)                                    (0x00000003&(data))

#define  GW_dc_sys_srg                                                          0x1810E024
#define  GW_dc_sys_srg_reg_addr                                                  "0xB810E024"
#define  GW_dc_sys_srg_reg                                                       0xB810E024
#define  GW_dc_sys_srg_inst_addr                                                 "0x0009"
#define  set_GW_dc_sys_srg_reg(data)                                             (*((volatile unsigned int*)GW_dc_sys_srg_reg)=data)
#define  get_GW_dc_sys_srg_reg                                                   (*((volatile unsigned int*)GW_dc_sys_srg_reg))
#define  GW_dc_sys_srg_gw_srg_mode_shift                                         (3)
#define  GW_dc_sys_srg_gw_srg_write_disable_shift                                (2)
#define  GW_dc_sys_srg_gw_srg_read_disable_shift                                 (1)
#define  GW_dc_sys_srg_gw_srg_burst_limit_shift                                  (0)
#define  GW_dc_sys_srg_gw_srg_mode_mask                                          (0x00000038)
#define  GW_dc_sys_srg_gw_srg_write_disable_mask                                 (0x00000004)
#define  GW_dc_sys_srg_gw_srg_read_disable_mask                                  (0x00000002)
#define  GW_dc_sys_srg_gw_srg_burst_limit_mask                                   (0x00000001)
#define  GW_dc_sys_srg_gw_srg_mode(data)                                         (0x00000038&((data)<<3))
#define  GW_dc_sys_srg_gw_srg_write_disable(data)                                (0x00000004&((data)<<2))
#define  GW_dc_sys_srg_gw_srg_read_disable(data)                                 (0x00000002&((data)<<1))
#define  GW_dc_sys_srg_gw_srg_burst_limit(data)                                  (0x00000001&(data))
#define  GW_dc_sys_srg_get_gw_srg_mode(data)                                     ((0x00000038&(data))>>3)
#define  GW_dc_sys_srg_get_gw_srg_write_disable(data)                            ((0x00000004&(data))>>2)
#define  GW_dc_sys_srg_get_gw_srg_read_disable(data)                             ((0x00000002&(data))>>1)
#define  GW_dc_sys_srg_get_gw_srg_burst_limit(data)                              (0x00000001&(data))

#define  GW_outstand_num                                                        0x1810E030
#define  GW_outstand_num_reg_addr                                                "0xB810E030"
#define  GW_outstand_num_reg                                                     0xB810E030
#define  GW_outstand_num_inst_addr                                               "0x000A"
#define  set_GW_outstand_num_reg(data)                                           (*((volatile unsigned int*)GW_outstand_num_reg)=data)
#define  get_GW_outstand_num_reg                                                 (*((volatile unsigned int*)GW_outstand_num_reg))
#define  GW_outstand_num_gw_rd_outstand_num_shift                                (16)
#define  GW_outstand_num_gw_wr_outstand_num_shift                                (0)
#define  GW_outstand_num_gw_rd_outstand_num_mask                                 (0x007F0000)
#define  GW_outstand_num_gw_wr_outstand_num_mask                                 (0x0000003F)
#define  GW_outstand_num_gw_rd_outstand_num(data)                                (0x007F0000&((data)<<16))
#define  GW_outstand_num_gw_wr_outstand_num(data)                                (0x0000003F&(data))
#define  GW_outstand_num_get_gw_rd_outstand_num(data)                            ((0x007F0000&(data))>>16)
#define  GW_outstand_num_get_gw_wr_outstand_num(data)                            (0x0000003F&(data))

#define  GW_outstand_cnt                                                        0x1810E034
#define  GW_outstand_cnt_reg_addr                                                "0xB810E034"
#define  GW_outstand_cnt_reg                                                     0xB810E034
#define  GW_outstand_cnt_inst_addr                                               "0x000B"
#define  set_GW_outstand_cnt_reg(data)                                           (*((volatile unsigned int*)GW_outstand_cnt_reg)=data)
#define  get_GW_outstand_cnt_reg                                                 (*((volatile unsigned int*)GW_outstand_cnt_reg))
#define  GW_outstand_cnt_gw_rd_outstand_cnt_shift                                (16)
#define  GW_outstand_cnt_gw_wr_outstand_cnt_shift                                (0)
#define  GW_outstand_cnt_gw_rd_outstand_cnt_mask                                 (0x007F0000)
#define  GW_outstand_cnt_gw_wr_outstand_cnt_mask                                 (0x0000003F)
#define  GW_outstand_cnt_gw_rd_outstand_cnt(data)                                (0x007F0000&((data)<<16))
#define  GW_outstand_cnt_gw_wr_outstand_cnt(data)                                (0x0000003F&(data))
#define  GW_outstand_cnt_get_gw_rd_outstand_cnt(data)                            ((0x007F0000&(data))>>16)
#define  GW_outstand_cnt_get_gw_wr_outstand_cnt(data)                            (0x0000003F&(data))

#define  GW_in_order_mode                                                       0x1810E040
#define  GW_in_order_mode_reg_addr                                               "0xB810E040"
#define  GW_in_order_mode_reg                                                    0xB810E040
#define  GW_in_order_mode_inst_addr                                              "0x000C"
#define  set_GW_in_order_mode_reg(data)                                          (*((volatile unsigned int*)GW_in_order_mode_reg)=data)
#define  get_GW_in_order_mode_reg                                                (*((volatile unsigned int*)GW_in_order_mode_reg))
#define  GW_in_order_mode_gw_in_order_mode_shift                                 (0)
#define  GW_in_order_mode_gw_in_order_mode_mask                                  (0x00000001)
#define  GW_in_order_mode_gw_in_order_mode(data)                                 (0x00000001&(data))
#define  GW_in_order_mode_get_gw_in_order_mode(data)                             (0x00000001&(data))

#define  GW_soft_reset                                                          0x1810E044
#define  GW_soft_reset_reg_addr                                                  "0xB810E044"
#define  GW_soft_reset_reg                                                       0xB810E044
#define  GW_soft_reset_inst_addr                                                 "0x000D"
#define  set_GW_soft_reset_reg(data)                                             (*((volatile unsigned int*)GW_soft_reset_reg)=data)
#define  get_GW_soft_reset_reg                                                   (*((volatile unsigned int*)GW_soft_reset_reg))
#define  GW_soft_reset_gw_soft_reset_shift                                       (0)
#define  GW_soft_reset_gw_soft_reset_mask                                        (0x00000001)
#define  GW_soft_reset_gw_soft_reset(data)                                       (0x00000001&(data))
#define  GW_soft_reset_get_gw_soft_reset(data)                                   (0x00000001&(data))

#define  GW_endian                                                              0x1810E048
#define  GW_endian_reg_addr                                                      "0xB810E048"
#define  GW_endian_reg                                                           0xB810E048
#define  GW_endian_inst_addr                                                     "0x000E"
#define  set_GW_endian_reg(data)                                                 (*((volatile unsigned int*)GW_endian_reg)=data)
#define  get_GW_endian_reg                                                       (*((volatile unsigned int*)GW_endian_reg))
#define  GW_endian_gw_endian_swap_mode_shift                                     (1)
#define  GW_endian_gw_endian_swap_shift                                          (0)
#define  GW_endian_gw_endian_swap_mode_mask                                      (0x00000006)
#define  GW_endian_gw_endian_swap_mask                                           (0x00000001)
#define  GW_endian_gw_endian_swap_mode(data)                                     (0x00000006&((data)<<1))
#define  GW_endian_gw_endian_swap(data)                                          (0x00000001&(data))
#define  GW_endian_get_gw_endian_swap_mode(data)                                 ((0x00000006&(data))>>1)
#define  GW_endian_get_gw_endian_swap(data)                                      (0x00000001&(data))

#define  GW_rw_arbitration                                                      0x1810E04C
#define  GW_rw_arbitration_reg_addr                                              "0xB810E04C"
#define  GW_rw_arbitration_reg                                                   0xB810E04C
#define  GW_rw_arbitration_inst_addr                                             "0x000F"
#define  set_GW_rw_arbitration_reg(data)                                         (*((volatile unsigned int*)GW_rw_arbitration_reg)=data)
#define  get_GW_rw_arbitration_reg                                               (*((volatile unsigned int*)GW_rw_arbitration_reg))
#define  GW_rw_arbitration_gw_rw_arbitration_shift                               (0)
#define  GW_rw_arbitration_gw_rw_arbitration_mask                                (0x00000003)
#define  GW_rw_arbitration_gw_rw_arbitration(data)                               (0x00000003&(data))
#define  GW_rw_arbitration_get_gw_rw_arbitration(data)                           (0x00000003&(data))

#define  GW_int_en                                                              0x1810E050
#define  GW_int_en_reg_addr                                                      "0xB810E050"
#define  GW_int_en_reg                                                           0xB810E050
#define  GW_int_en_inst_addr                                                     "0x0010"
#define  set_GW_int_en_reg(data)                                                 (*((volatile unsigned int*)GW_int_en_reg)=data)
#define  get_GW_int_en_reg                                                       (*((volatile unsigned int*)GW_int_en_reg))
#define  GW_int_en_irqgpu_en_shift                                               (3)
#define  GW_int_en_irqmmu_en_shift                                               (2)
#define  GW_int_en_irqjob_en_shift                                               (1)
#define  GW_int_en_irqevent_en_shift                                             (0)
#define  GW_int_en_irqgpu_en_mask                                                (0x00000008)
#define  GW_int_en_irqmmu_en_mask                                                (0x00000004)
#define  GW_int_en_irqjob_en_mask                                                (0x00000002)
#define  GW_int_en_irqevent_en_mask                                              (0x00000001)
#define  GW_int_en_irqgpu_en(data)                                               (0x00000008&((data)<<3))
#define  GW_int_en_irqmmu_en(data)                                               (0x00000004&((data)<<2))
#define  GW_int_en_irqjob_en(data)                                               (0x00000002&((data)<<1))
#define  GW_int_en_irqevent_en(data)                                             (0x00000001&(data))
#define  GW_int_en_get_irqgpu_en(data)                                           ((0x00000008&(data))>>3)
#define  GW_int_en_get_irqmmu_en(data)                                           ((0x00000004&(data))>>2)
#define  GW_int_en_get_irqjob_en(data)                                           ((0x00000002&(data))>>1)
#define  GW_int_en_get_irqevent_en(data)                                         (0x00000001&(data))

#define  GW_write_bufferable                                                    0x1810E054
#define  GW_write_bufferable_reg_addr                                            "0xB810E054"
#define  GW_write_bufferable_reg                                                 0xB810E054
#define  GW_write_bufferable_inst_addr                                           "0x0011"
#define  set_GW_write_bufferable_reg(data)                                       (*((volatile unsigned int*)GW_write_bufferable_reg)=data)
#define  get_GW_write_bufferable_reg                                             (*((volatile unsigned int*)GW_write_bufferable_reg))
#define  GW_write_bufferable_gw_wdone_sel_shift                                  (1)
#define  GW_write_bufferable_gw_force_write_bufferable_shift                     (0)
#define  GW_write_bufferable_gw_wdone_sel_mask                                   (0x00000002)
#define  GW_write_bufferable_gw_force_write_bufferable_mask                      (0x00000001)
#define  GW_write_bufferable_gw_wdone_sel(data)                                  (0x00000002&((data)<<1))
#define  GW_write_bufferable_gw_force_write_bufferable(data)                     (0x00000001&(data))
#define  GW_write_bufferable_get_gw_wdone_sel(data)                              ((0x00000002&(data))>>1)
#define  GW_write_bufferable_get_gw_force_write_bufferable(data)                 (0x00000001&(data))

#define  GW_dc_fifo_status                                                      0x1810E058
#define  GW_dc_fifo_status_reg_addr                                              "0xB810E058"
#define  GW_dc_fifo_status_reg                                                   0xB810E058
#define  GW_dc_fifo_status_inst_addr                                             "0x0012"
#define  set_GW_dc_fifo_status_reg(data)                                         (*((volatile unsigned int*)GW_dc_fifo_status_reg)=data)
#define  get_GW_dc_fifo_status_reg                                               (*((volatile unsigned int*)GW_dc_fifo_status_reg))
#define  GW_dc_fifo_status_dc_remote_cmd_cnt_shift                               (10)
#define  GW_dc_fifo_status_dc_rcmd_async_fifo_empty_shift                        (9)
#define  GW_dc_fifo_status_dc_rcmd_async_fifo_full_shift                         (8)
#define  GW_dc_fifo_status_dc_rdata_async_fifo_empty_shift                       (7)
#define  GW_dc_fifo_status_dc_rdata_async_fifo_full_shift                        (6)
#define  GW_dc_fifo_status_dc_wcmd_async_fifo_empty_shift                        (5)
#define  GW_dc_fifo_status_dc_wcmd_async_fifo_full_shift                         (4)
#define  GW_dc_fifo_status_dc_wdata_async_fifo_empty_shift                       (3)
#define  GW_dc_fifo_status_dc_wdata_async_fifo_full_shift                        (2)
#define  GW_dc_fifo_status_dc_wlast_async_fifo_empty_shift                       (1)
#define  GW_dc_fifo_status_dc_wlast_async_fifo_full_shift                        (0)
#define  GW_dc_fifo_status_dc_remote_cmd_cnt_mask                                (0x0001FC00)
#define  GW_dc_fifo_status_dc_rcmd_async_fifo_empty_mask                         (0x00000200)
#define  GW_dc_fifo_status_dc_rcmd_async_fifo_full_mask                          (0x00000100)
#define  GW_dc_fifo_status_dc_rdata_async_fifo_empty_mask                        (0x00000080)
#define  GW_dc_fifo_status_dc_rdata_async_fifo_full_mask                         (0x00000040)
#define  GW_dc_fifo_status_dc_wcmd_async_fifo_empty_mask                         (0x00000020)
#define  GW_dc_fifo_status_dc_wcmd_async_fifo_full_mask                          (0x00000010)
#define  GW_dc_fifo_status_dc_wdata_async_fifo_empty_mask                        (0x00000008)
#define  GW_dc_fifo_status_dc_wdata_async_fifo_full_mask                         (0x00000004)
#define  GW_dc_fifo_status_dc_wlast_async_fifo_empty_mask                        (0x00000002)
#define  GW_dc_fifo_status_dc_wlast_async_fifo_full_mask                         (0x00000001)
#define  GW_dc_fifo_status_dc_remote_cmd_cnt(data)                               (0x0001FC00&((data)<<10))
#define  GW_dc_fifo_status_dc_rcmd_async_fifo_empty(data)                        (0x00000200&((data)<<9))
#define  GW_dc_fifo_status_dc_rcmd_async_fifo_full(data)                         (0x00000100&((data)<<8))
#define  GW_dc_fifo_status_dc_rdata_async_fifo_empty(data)                       (0x00000080&((data)<<7))
#define  GW_dc_fifo_status_dc_rdata_async_fifo_full(data)                        (0x00000040&((data)<<6))
#define  GW_dc_fifo_status_dc_wcmd_async_fifo_empty(data)                        (0x00000020&((data)<<5))
#define  GW_dc_fifo_status_dc_wcmd_async_fifo_full(data)                         (0x00000010&((data)<<4))
#define  GW_dc_fifo_status_dc_wdata_async_fifo_empty(data)                       (0x00000008&((data)<<3))
#define  GW_dc_fifo_status_dc_wdata_async_fifo_full(data)                        (0x00000004&((data)<<2))
#define  GW_dc_fifo_status_dc_wlast_async_fifo_empty(data)                       (0x00000002&((data)<<1))
#define  GW_dc_fifo_status_dc_wlast_async_fifo_full(data)                        (0x00000001&(data))
#define  GW_dc_fifo_status_get_dc_remote_cmd_cnt(data)                           ((0x0001FC00&(data))>>10)
#define  GW_dc_fifo_status_get_dc_rcmd_async_fifo_empty(data)                    ((0x00000200&(data))>>9)
#define  GW_dc_fifo_status_get_dc_rcmd_async_fifo_full(data)                     ((0x00000100&(data))>>8)
#define  GW_dc_fifo_status_get_dc_rdata_async_fifo_empty(data)                   ((0x00000080&(data))>>7)
#define  GW_dc_fifo_status_get_dc_rdata_async_fifo_full(data)                    ((0x00000040&(data))>>6)
#define  GW_dc_fifo_status_get_dc_wcmd_async_fifo_empty(data)                    ((0x00000020&(data))>>5)
#define  GW_dc_fifo_status_get_dc_wcmd_async_fifo_full(data)                     ((0x00000010&(data))>>4)
#define  GW_dc_fifo_status_get_dc_wdata_async_fifo_empty(data)                   ((0x00000008&(data))>>3)
#define  GW_dc_fifo_status_get_dc_wdata_async_fifo_full(data)                    ((0x00000004&(data))>>2)
#define  GW_dc_fifo_status_get_dc_wlast_async_fifo_empty(data)                   ((0x00000002&(data))>>1)
#define  GW_dc_fifo_status_get_dc_wlast_async_fifo_full(data)                    (0x00000001&(data))

#define  GW_axi_fifo_status                                                     0x1810E05C
#define  GW_axi_fifo_status_reg_addr                                             "0xB810E05C"
#define  GW_axi_fifo_status_reg                                                  0xB810E05C
#define  GW_axi_fifo_status_inst_addr                                            "0x0013"
#define  set_GW_axi_fifo_status_reg(data)                                        (*((volatile unsigned int*)GW_axi_fifo_status_reg)=data)
#define  get_GW_axi_fifo_status_reg                                              (*((volatile unsigned int*)GW_axi_fifo_status_reg))
#define  GW_axi_fifo_status_axi_rcmd_fifo_empty_shift                            (9)
#define  GW_axi_fifo_status_axi_rcmd_fifo_full_shift                             (8)
#define  GW_axi_fifo_status_axi_rdata_fifo_empty_shift                           (7)
#define  GW_axi_fifo_status_axi_rdata_fifo_full_shift                            (6)
#define  GW_axi_fifo_status_axi_wcmd_fifo_empty_shift                            (5)
#define  GW_axi_fifo_status_axi_wcmd_fifo_full_shift                             (4)
#define  GW_axi_fifo_status_axi_wdata_fifo_empty_shift                           (3)
#define  GW_axi_fifo_status_axi_wdata_fifo_full_shift                            (2)
#define  GW_axi_fifo_status_axi_wid_empty_shift                                  (1)
#define  GW_axi_fifo_status_axi_wid_full_shift                                   (0)
#define  GW_axi_fifo_status_axi_rcmd_fifo_empty_mask                             (0x00000200)
#define  GW_axi_fifo_status_axi_rcmd_fifo_full_mask                              (0x00000100)
#define  GW_axi_fifo_status_axi_rdata_fifo_empty_mask                            (0x00000080)
#define  GW_axi_fifo_status_axi_rdata_fifo_full_mask                             (0x00000040)
#define  GW_axi_fifo_status_axi_wcmd_fifo_empty_mask                             (0x00000020)
#define  GW_axi_fifo_status_axi_wcmd_fifo_full_mask                              (0x00000010)
#define  GW_axi_fifo_status_axi_wdata_fifo_empty_mask                            (0x00000008)
#define  GW_axi_fifo_status_axi_wdata_fifo_full_mask                             (0x00000004)
#define  GW_axi_fifo_status_axi_wid_empty_mask                                   (0x00000002)
#define  GW_axi_fifo_status_axi_wid_full_mask                                    (0x00000001)
#define  GW_axi_fifo_status_axi_rcmd_fifo_empty(data)                            (0x00000200&((data)<<9))
#define  GW_axi_fifo_status_axi_rcmd_fifo_full(data)                             (0x00000100&((data)<<8))
#define  GW_axi_fifo_status_axi_rdata_fifo_empty(data)                           (0x00000080&((data)<<7))
#define  GW_axi_fifo_status_axi_rdata_fifo_full(data)                            (0x00000040&((data)<<6))
#define  GW_axi_fifo_status_axi_wcmd_fifo_empty(data)                            (0x00000020&((data)<<5))
#define  GW_axi_fifo_status_axi_wcmd_fifo_full(data)                             (0x00000010&((data)<<4))
#define  GW_axi_fifo_status_axi_wdata_fifo_empty(data)                           (0x00000008&((data)<<3))
#define  GW_axi_fifo_status_axi_wdata_fifo_full(data)                            (0x00000004&((data)<<2))
#define  GW_axi_fifo_status_axi_wid_empty(data)                                  (0x00000002&((data)<<1))
#define  GW_axi_fifo_status_axi_wid_full(data)                                   (0x00000001&(data))
#define  GW_axi_fifo_status_get_axi_rcmd_fifo_empty(data)                        ((0x00000200&(data))>>9)
#define  GW_axi_fifo_status_get_axi_rcmd_fifo_full(data)                         ((0x00000100&(data))>>8)
#define  GW_axi_fifo_status_get_axi_rdata_fifo_empty(data)                       ((0x00000080&(data))>>7)
#define  GW_axi_fifo_status_get_axi_rdata_fifo_full(data)                        ((0x00000040&(data))>>6)
#define  GW_axi_fifo_status_get_axi_wcmd_fifo_empty(data)                        ((0x00000020&(data))>>5)
#define  GW_axi_fifo_status_get_axi_wcmd_fifo_full(data)                         ((0x00000010&(data))>>4)
#define  GW_axi_fifo_status_get_axi_wdata_fifo_empty(data)                       ((0x00000008&(data))>>3)
#define  GW_axi_fifo_status_get_axi_wdata_fifo_full(data)                        ((0x00000004&(data))>>2)
#define  GW_axi_fifo_status_get_axi_wid_empty(data)                              ((0x00000002&(data))>>1)
#define  GW_axi_fifo_status_get_axi_wid_full(data)                               (0x00000001&(data))

#define  GW_wrapper_status                                                      0x1810E038
#define  GW_wrapper_status_reg_addr                                              "0xB810E038"
#define  GW_wrapper_status_reg                                                   0xB810E038
#define  GW_wrapper_status_inst_addr                                             "0x0014"
#define  set_GW_wrapper_status_reg(data)                                         (*((volatile unsigned int*)GW_wrapper_status_reg)=data)
#define  get_GW_wrapper_status_reg                                               (*((volatile unsigned int*)GW_wrapper_status_reg))
#define  GW_wrapper_status_dc_idle_shift                                         (2)
#define  GW_wrapper_status_axi_r_idle_shift                                      (1)
#define  GW_wrapper_status_axi_w_idle_shift                                      (0)
#define  GW_wrapper_status_dc_idle_mask                                          (0x00000004)
#define  GW_wrapper_status_axi_r_idle_mask                                       (0x00000002)
#define  GW_wrapper_status_axi_w_idle_mask                                       (0x00000001)
#define  GW_wrapper_status_dc_idle(data)                                         (0x00000004&((data)<<2))
#define  GW_wrapper_status_axi_r_idle(data)                                      (0x00000002&((data)<<1))
#define  GW_wrapper_status_axi_w_idle(data)                                      (0x00000001&(data))
#define  GW_wrapper_status_get_dc_idle(data)                                     ((0x00000004&(data))>>2)
#define  GW_wrapper_status_get_axi_r_idle(data)                                  ((0x00000002&(data))>>1)
#define  GW_wrapper_status_get_axi_w_idle(data)                                  (0x00000001&(data))

#define  GW_dummy                                                               0x1810E060
#define  GW_dummy_reg_addr                                                       "0xB810E060"
#define  GW_dummy_reg                                                            0xB810E060
#define  GW_dummy_inst_addr                                                      "0x0015"
#define  set_GW_dummy_reg(data)                                                  (*((volatile unsigned int*)GW_dummy_reg)=data)
#define  get_GW_dummy_reg                                                        (*((volatile unsigned int*)GW_dummy_reg))
#define  GW_dummy_dummy_rw_shift                                                 (0)
#define  GW_dummy_dummy_rw_mask                                                  (0xFFFFFFFF)
#define  GW_dummy_dummy_rw(data)                                                 (0xFFFFFFFF&(data))
#define  GW_dummy_get_dummy_rw(data)                                             (0xFFFFFFFF&(data))

#define  GW_sf_dbus_ctrl                                                        0x1810E100
#define  GW_sf_dbus_ctrl_reg_addr                                                "0xB810E100"
#define  GW_sf_dbus_ctrl_reg                                                     0xB810E100
#define  GW_sf_dbus_ctrl_inst_addr                                               "0x0016"
#define  set_GW_sf_dbus_ctrl_reg(data)                                           (*((volatile unsigned int*)GW_sf_dbus_ctrl_reg)=data)
#define  get_GW_sf_dbus_ctrl_reg                                                 (*((volatile unsigned int*)GW_sf_dbus_ctrl_reg))
#define  GW_sf_dbus_ctrl_reg_sf_rx_gated_shift                                   (6)
#define  GW_sf_dbus_ctrl_reg_sf_rx_start_shift                                   (5)
#define  GW_sf_dbus_ctrl_reg_sf_rx_mode_shift                                    (4)
#define  GW_sf_dbus_ctrl_reg_sf_tx_start_shift                                   (1)
#define  GW_sf_dbus_ctrl_reg_sf_tx_mode_shift                                    (0)
#define  GW_sf_dbus_ctrl_reg_sf_rx_gated_mask                                    (0x00000040)
#define  GW_sf_dbus_ctrl_reg_sf_rx_start_mask                                    (0x00000020)
#define  GW_sf_dbus_ctrl_reg_sf_rx_mode_mask                                     (0x00000010)
#define  GW_sf_dbus_ctrl_reg_sf_tx_start_mask                                    (0x00000002)
#define  GW_sf_dbus_ctrl_reg_sf_tx_mode_mask                                     (0x00000001)
#define  GW_sf_dbus_ctrl_reg_sf_rx_gated(data)                                   (0x00000040&((data)<<6))
#define  GW_sf_dbus_ctrl_reg_sf_rx_start(data)                                   (0x00000020&((data)<<5))
#define  GW_sf_dbus_ctrl_reg_sf_rx_mode(data)                                    (0x00000010&((data)<<4))
#define  GW_sf_dbus_ctrl_reg_sf_tx_start(data)                                   (0x00000002&((data)<<1))
#define  GW_sf_dbus_ctrl_reg_sf_tx_mode(data)                                    (0x00000001&(data))
#define  GW_sf_dbus_ctrl_get_reg_sf_rx_gated(data)                               ((0x00000040&(data))>>6)
#define  GW_sf_dbus_ctrl_get_reg_sf_rx_start(data)                               ((0x00000020&(data))>>5)
#define  GW_sf_dbus_ctrl_get_reg_sf_rx_mode(data)                                ((0x00000010&(data))>>4)
#define  GW_sf_dbus_ctrl_get_reg_sf_tx_start(data)                               ((0x00000002&(data))>>1)
#define  GW_sf_dbus_ctrl_get_reg_sf_tx_mode(data)                                (0x00000001&(data))

#define  GW_sf_dbus_status                                                      0x1810E104
#define  GW_sf_dbus_status_reg_addr                                              "0xB810E104"
#define  GW_sf_dbus_status_reg                                                   0xB810E104
#define  GW_sf_dbus_status_inst_addr                                             "0x0017"
#define  set_GW_sf_dbus_status_reg(data)                                         (*((volatile unsigned int*)GW_sf_dbus_status_reg)=data)
#define  get_GW_sf_dbus_status_reg                                               (*((volatile unsigned int*)GW_sf_dbus_status_reg))
#define  GW_sf_dbus_status_reg_sf_rx_fail_bit_status_shift                       (24)
#define  GW_sf_dbus_status_reg_sf_rx_debug_bit_sel_shift                         (16)
#define  GW_sf_dbus_status_reg_sf_rx_err_shift                                   (5)
#define  GW_sf_dbus_status_reg_sf_rx_done_shift                                  (4)
#define  GW_sf_dbus_status_reg_sf_tx_work_shift                                  (0)
#define  GW_sf_dbus_status_reg_sf_rx_fail_bit_status_mask                        (0x01000000)
#define  GW_sf_dbus_status_reg_sf_rx_debug_bit_sel_mask                          (0x00FF0000)
#define  GW_sf_dbus_status_reg_sf_rx_err_mask                                    (0x00000020)
#define  GW_sf_dbus_status_reg_sf_rx_done_mask                                   (0x00000010)
#define  GW_sf_dbus_status_reg_sf_tx_work_mask                                   (0x00000001)
#define  GW_sf_dbus_status_reg_sf_rx_fail_bit_status(data)                       (0x01000000&((data)<<24))
#define  GW_sf_dbus_status_reg_sf_rx_debug_bit_sel(data)                         (0x00FF0000&((data)<<16))
#define  GW_sf_dbus_status_reg_sf_rx_err(data)                                   (0x00000020&((data)<<5))
#define  GW_sf_dbus_status_reg_sf_rx_done(data)                                  (0x00000010&((data)<<4))
#define  GW_sf_dbus_status_reg_sf_tx_work(data)                                  (0x00000001&(data))
#define  GW_sf_dbus_status_get_reg_sf_rx_fail_bit_status(data)                   ((0x01000000&(data))>>24)
#define  GW_sf_dbus_status_get_reg_sf_rx_debug_bit_sel(data)                     ((0x00FF0000&(data))>>16)
#define  GW_sf_dbus_status_get_reg_sf_rx_err(data)                               ((0x00000020&(data))>>5)
#define  GW_sf_dbus_status_get_reg_sf_rx_done(data)                              ((0x00000010&(data))>>4)
#define  GW_sf_dbus_status_get_reg_sf_tx_work(data)                              (0x00000001&(data))

#define  GW_sf_scpu_ctr_dbg_0                                                   0x1810E108
#define  GW_sf_scpu_ctr_dbg_0_reg_addr                                           "0xB810E108"
#define  GW_sf_scpu_ctr_dbg_0_reg                                                0xB810E108
#define  GW_sf_scpu_ctr_dbg_0_inst_addr                                          "0x0018"
#define  set_GW_sf_scpu_ctr_dbg_0_reg(data)                                      (*((volatile unsigned int*)GW_sf_scpu_ctr_dbg_0_reg)=data)
#define  get_GW_sf_scpu_ctr_dbg_0_reg                                            (*((volatile unsigned int*)GW_sf_scpu_ctr_dbg_0_reg))
#define  GW_sf_scpu_ctr_dbg_0_scpu_ctr_lsb_shift                                 (0)
#define  GW_sf_scpu_ctr_dbg_0_scpu_ctr_lsb_mask                                  (0xFFFFFFFF)
#define  GW_sf_scpu_ctr_dbg_0_scpu_ctr_lsb(data)                                 (0xFFFFFFFF&(data))
#define  GW_sf_scpu_ctr_dbg_0_get_scpu_ctr_lsb(data)                             (0xFFFFFFFF&(data))

#define  GW_sf_scpu_ctr_dbg_1                                                   0x1810E10C
#define  GW_sf_scpu_ctr_dbg_1_reg_addr                                           "0xB810E10C"
#define  GW_sf_scpu_ctr_dbg_1_reg                                                0xB810E10C
#define  GW_sf_scpu_ctr_dbg_1_inst_addr                                          "0x0019"
#define  set_GW_sf_scpu_ctr_dbg_1_reg(data)                                      (*((volatile unsigned int*)GW_sf_scpu_ctr_dbg_1_reg)=data)
#define  get_GW_sf_scpu_ctr_dbg_1_reg                                            (*((volatile unsigned int*)GW_sf_scpu_ctr_dbg_1_reg))
#define  GW_sf_scpu_ctr_dbg_1_scpu_ctr_msb_shift                                 (0)
#define  GW_sf_scpu_ctr_dbg_1_scpu_ctr_msb_mask                                  (0xFFFFFFFF)
#define  GW_sf_scpu_ctr_dbg_1_scpu_ctr_msb(data)                                 (0xFFFFFFFF&(data))
#define  GW_sf_scpu_ctr_dbg_1_get_scpu_ctr_msb(data)                             (0xFFFFFFFF&(data))

#define  GW_rm                                                                  0x1810E064
#define  GW_rm_reg_addr                                                          "0xB810E064"
#define  GW_rm_reg                                                               0xB810E064
#define  GW_rm_inst_addr                                                         "0x001A"
#define  set_GW_rm_reg(data)                                                     (*((volatile unsigned int*)GW_rm_reg)=data)
#define  get_GW_rm_reg                                                           (*((volatile unsigned int*)GW_rm_reg))
#define  GW_rm_rme_shift                                                         (4)
#define  GW_rm_rm_shift                                                          (0)
#define  GW_rm_rme_mask                                                          (0x00000010)
#define  GW_rm_rm_mask                                                           (0x0000000F)
#define  GW_rm_rme(data)                                                         (0x00000010&((data)<<4))
#define  GW_rm_rm(data)                                                          (0x0000000F&(data))
#define  GW_rm_get_rme(data)                                                     ((0x00000010&(data))>>4)
#define  GW_rm_get_rm(data)                                                      (0x0000000F&(data))

#define  GW_bist_mode                                                           0x1810E068
#define  GW_bist_mode_reg_addr                                                   "0xB810E068"
#define  GW_bist_mode_reg                                                        0xB810E068
#define  GW_bist_mode_inst_addr                                                  "0x001B"
#define  set_GW_bist_mode_reg(data)                                              (*((volatile unsigned int*)GW_bist_mode_reg)=data)
#define  get_GW_bist_mode_reg                                                    (*((volatile unsigned int*)GW_bist_mode_reg))
#define  GW_bist_mode_bist_mode_shift                                            (0)
#define  GW_bist_mode_bist_mode_mask                                             (0x00000001)
#define  GW_bist_mode_bist_mode(data)                                            (0x00000001&(data))
#define  GW_bist_mode_get_bist_mode(data)                                        (0x00000001&(data))

#define  GW_bist_done                                                           0x1810E06C
#define  GW_bist_done_reg_addr                                                   "0xB810E06C"
#define  GW_bist_done_reg                                                        0xB810E06C
#define  GW_bist_done_inst_addr                                                  "0x001C"
#define  set_GW_bist_done_reg(data)                                              (*((volatile unsigned int*)GW_bist_done_reg)=data)
#define  get_GW_bist_done_reg                                                    (*((volatile unsigned int*)GW_bist_done_reg))
#define  GW_bist_done_bist_done_shift                                            (0)
#define  GW_bist_done_bist_done_mask                                             (0x00000001)
#define  GW_bist_done_bist_done(data)                                            (0x00000001&(data))
#define  GW_bist_done_get_bist_done(data)                                        (0x00000001&(data))

#define  GW_drf_bist_mode                                                       0x1810E070
#define  GW_drf_bist_mode_reg_addr                                               "0xB810E070"
#define  GW_drf_bist_mode_reg                                                    0xB810E070
#define  GW_drf_bist_mode_inst_addr                                              "0x001D"
#define  set_GW_drf_bist_mode_reg(data)                                          (*((volatile unsigned int*)GW_drf_bist_mode_reg)=data)
#define  get_GW_drf_bist_mode_reg                                                (*((volatile unsigned int*)GW_drf_bist_mode_reg))
#define  GW_drf_bist_mode_drf_bist_mode_shift                                    (0)
#define  GW_drf_bist_mode_drf_bist_mode_mask                                     (0x00000001)
#define  GW_drf_bist_mode_drf_bist_mode(data)                                    (0x00000001&(data))
#define  GW_drf_bist_mode_get_drf_bist_mode(data)                                (0x00000001&(data))

#define  GW_drf_start_pause                                                     0x1810E074
#define  GW_drf_start_pause_reg_addr                                             "0xB810E074"
#define  GW_drf_start_pause_reg                                                  0xB810E074
#define  GW_drf_start_pause_inst_addr                                            "0x001E"
#define  set_GW_drf_start_pause_reg(data)                                        (*((volatile unsigned int*)GW_drf_start_pause_reg)=data)
#define  get_GW_drf_start_pause_reg                                              (*((volatile unsigned int*)GW_drf_start_pause_reg))
#define  GW_drf_start_pause_drf_start_pause_shift                                (0)
#define  GW_drf_start_pause_drf_start_pause_mask                                 (0x00000001)
#define  GW_drf_start_pause_drf_start_pause(data)                                (0x00000001&(data))
#define  GW_drf_start_pause_get_drf_start_pause(data)                            (0x00000001&(data))

#define  GW_drf_test_resume                                                     0x1810E078
#define  GW_drf_test_resume_reg_addr                                             "0xB810E078"
#define  GW_drf_test_resume_reg                                                  0xB810E078
#define  GW_drf_test_resume_inst_addr                                            "0x001F"
#define  set_GW_drf_test_resume_reg(data)                                        (*((volatile unsigned int*)GW_drf_test_resume_reg)=data)
#define  get_GW_drf_test_resume_reg                                              (*((volatile unsigned int*)GW_drf_test_resume_reg))
#define  GW_drf_test_resume_drf_test_resume_shift                                (0)
#define  GW_drf_test_resume_drf_test_resume_mask                                 (0x00000001)
#define  GW_drf_test_resume_drf_test_resume(data)                                (0x00000001&(data))
#define  GW_drf_test_resume_get_drf_test_resume(data)                            (0x00000001&(data))

#define  GW_drf_bist_done                                                       0x1810E07C
#define  GW_drf_bist_done_reg_addr                                               "0xB810E07C"
#define  GW_drf_bist_done_reg                                                    0xB810E07C
#define  GW_drf_bist_done_inst_addr                                              "0x0020"
#define  set_GW_drf_bist_done_reg(data)                                          (*((volatile unsigned int*)GW_drf_bist_done_reg)=data)
#define  get_GW_drf_bist_done_reg                                                (*((volatile unsigned int*)GW_drf_bist_done_reg))
#define  GW_drf_bist_done_drf_bist_done_shift                                    (0)
#define  GW_drf_bist_done_drf_bist_done_mask                                     (0x00000001)
#define  GW_drf_bist_done_drf_bist_done(data)                                    (0x00000001&(data))
#define  GW_drf_bist_done_get_drf_bist_done(data)                                (0x00000001&(data))

#define  GW_bist_fail                                                           0x1810E080
#define  GW_bist_fail_reg_addr                                                   "0xB810E080"
#define  GW_bist_fail_reg                                                        0xB810E080
#define  GW_bist_fail_inst_addr                                                  "0x0021"
#define  set_GW_bist_fail_reg(data)                                              (*((volatile unsigned int*)GW_bist_fail_reg)=data)
#define  get_GW_bist_fail_reg                                                    (*((volatile unsigned int*)GW_bist_fail_reg))
#define  GW_bist_fail_bist_fail_shift                                            (0)
#define  GW_bist_fail_bist_fail_mask                                             (0x00000001)
#define  GW_bist_fail_bist_fail(data)                                            (0x00000001&(data))
#define  GW_bist_fail_get_bist_fail(data)                                        (0x00000001&(data))

#define  GW_drf_bist_fail                                                       0x1810E084
#define  GW_drf_bist_fail_reg_addr                                               "0xB810E084"
#define  GW_drf_bist_fail_reg                                                    0xB810E084
#define  GW_drf_bist_fail_inst_addr                                              "0x0022"
#define  set_GW_drf_bist_fail_reg(data)                                          (*((volatile unsigned int*)GW_drf_bist_fail_reg)=data)
#define  get_GW_drf_bist_fail_reg                                                (*((volatile unsigned int*)GW_drf_bist_fail_reg))
#define  GW_drf_bist_fail_drf_bist_fail_shift                                    (0)
#define  GW_drf_bist_fail_drf_bist_fail_mask                                     (0x00000001)
#define  GW_drf_bist_fail_drf_bist_fail(data)                                    (0x00000001&(data))
#define  GW_drf_bist_fail_get_drf_bist_fail(data)                                (0x00000001&(data))

#define  GW_testrwm                                                             0x1810E088
#define  GW_testrwm_reg_addr                                                     "0xB810E088"
#define  GW_testrwm_reg                                                          0xB810E088
#define  GW_testrwm_inst_addr                                                    "0x0023"
#define  set_GW_testrwm_reg(data)                                                (*((volatile unsigned int*)GW_testrwm_reg)=data)
#define  get_GW_testrwm_reg                                                      (*((volatile unsigned int*)GW_testrwm_reg))
#define  GW_testrwm_test1_shift                                                  (1)
#define  GW_testrwm_testrwm_shift                                                (0)
#define  GW_testrwm_test1_mask                                                   (0x00000002)
#define  GW_testrwm_testrwm_mask                                                 (0x00000001)
#define  GW_testrwm_test1(data)                                                  (0x00000002&((data)<<1))
#define  GW_testrwm_testrwm(data)                                                (0x00000001&(data))
#define  GW_testrwm_get_test1(data)                                              ((0x00000002&(data))>>1)
#define  GW_testrwm_get_testrwm(data)                                            (0x00000001&(data))

#define  GW_gpu_rm                                                              0x1810E08C
#define  GW_gpu_rm_reg_addr                                                      "0xB810E08C"
#define  GW_gpu_rm_reg                                                           0xB810E08C
#define  GW_gpu_rm_inst_addr                                                     "0x0024"
#define  set_GW_gpu_rm_reg(data)                                                 (*((volatile unsigned int*)GW_gpu_rm_reg)=data)
#define  get_GW_gpu_rm_reg                                                       (*((volatile unsigned int*)GW_gpu_rm_reg))
#define  GW_gpu_rm_gpu_test1_shift                                               (6)
#define  GW_gpu_rm_gpu_testrwm_shift                                             (5)
#define  GW_gpu_rm_gpu_rme_shift                                                 (4)
#define  GW_gpu_rm_gpu_rm_shift                                                  (0)
#define  GW_gpu_rm_gpu_test1_mask                                                (0x00000040)
#define  GW_gpu_rm_gpu_testrwm_mask                                              (0x00000020)
#define  GW_gpu_rm_gpu_rme_mask                                                  (0x00000010)
#define  GW_gpu_rm_gpu_rm_mask                                                   (0x0000000F)
#define  GW_gpu_rm_gpu_test1(data)                                               (0x00000040&((data)<<6))
#define  GW_gpu_rm_gpu_testrwm(data)                                             (0x00000020&((data)<<5))
#define  GW_gpu_rm_gpu_rme(data)                                                 (0x00000010&((data)<<4))
#define  GW_gpu_rm_gpu_rm(data)                                                  (0x0000000F&(data))
#define  GW_gpu_rm_get_gpu_test1(data)                                           ((0x00000040&(data))>>6)
#define  GW_gpu_rm_get_gpu_testrwm(data)                                         ((0x00000020&(data))>>5)
#define  GW_gpu_rm_get_gpu_rme(data)                                             ((0x00000010&(data))>>4)
#define  GW_gpu_rm_get_gpu_rm(data)                                              (0x0000000F&(data))

#define  GW_gpu_bist_mode                                                       0x1810E090
#define  GW_gpu_bist_mode_reg_addr                                               "0xB810E090"
#define  GW_gpu_bist_mode_reg                                                    0xB810E090
#define  GW_gpu_bist_mode_inst_addr                                              "0x0025"
#define  set_GW_gpu_bist_mode_reg(data)                                          (*((volatile unsigned int*)GW_gpu_bist_mode_reg)=data)
#define  get_GW_gpu_bist_mode_reg                                                (*((volatile unsigned int*)GW_gpu_bist_mode_reg))
#define  GW_gpu_bist_mode_gpu_force_all_sram_clken_shift                         (31)
#define  GW_gpu_bist_mode_dummy_0_shift                                          (0)
#define  GW_gpu_bist_mode_gpu_force_all_sram_clken_mask                          (0x80000000)
#define  GW_gpu_bist_mode_dummy_0_mask                                           (0x00000001)
#define  GW_gpu_bist_mode_gpu_force_all_sram_clken(data)                         (0x80000000&((data)<<31))
#define  GW_gpu_bist_mode_dummy_0(data)                                          (0x00000001&(data))
#define  GW_gpu_bist_mode_get_gpu_force_all_sram_clken(data)                     ((0x80000000&(data))>>31)
#define  GW_gpu_bist_mode_get_dummy_0(data)                                      (0x00000001&(data))

#define  GW_dss_c30_0                                                           0x1810E0C0
#define  GW_dss_c30_0_reg_addr                                                   "0xB810E0C0"
#define  GW_dss_c30_0_reg                                                        0xB810E0C0
#define  GW_dss_c30_0_inst_addr                                                  "0x0026"
#define  set_GW_dss_c30_0_reg(data)                                              (*((volatile unsigned int*)GW_dss_c30_0_reg)=data)
#define  get_GW_dss_c30_0_reg                                                    (*((volatile unsigned int*)GW_dss_c30_0_reg))
#define  GW_dss_c30_0_reg_gpu_c30_7t_0_data_in_shift                             (8)
#define  GW_dss_c30_0_reg_gpu_c30_7t_0_wire_sel_shift                            (5)
#define  GW_dss_c30_0_reg_gpu_c30_7t_0_speed_en_shift                            (4)
#define  GW_dss_c30_0_reg_gpu_c30_7t_0_ro_sel_shift                              (1)
#define  GW_dss_c30_0_reg_gpu_c30_7t_0_dss_rst_n_shift                           (0)
#define  GW_dss_c30_0_reg_gpu_c30_7t_0_data_in_mask                              (0x0FFFFF00)
#define  GW_dss_c30_0_reg_gpu_c30_7t_0_wire_sel_mask                             (0x00000020)
#define  GW_dss_c30_0_reg_gpu_c30_7t_0_speed_en_mask                             (0x00000010)
#define  GW_dss_c30_0_reg_gpu_c30_7t_0_ro_sel_mask                               (0x0000000E)
#define  GW_dss_c30_0_reg_gpu_c30_7t_0_dss_rst_n_mask                            (0x00000001)
#define  GW_dss_c30_0_reg_gpu_c30_7t_0_data_in(data)                             (0x0FFFFF00&((data)<<8))
#define  GW_dss_c30_0_reg_gpu_c30_7t_0_wire_sel(data)                            (0x00000020&((data)<<5))
#define  GW_dss_c30_0_reg_gpu_c30_7t_0_speed_en(data)                            (0x00000010&((data)<<4))
#define  GW_dss_c30_0_reg_gpu_c30_7t_0_ro_sel(data)                              (0x0000000E&((data)<<1))
#define  GW_dss_c30_0_reg_gpu_c30_7t_0_dss_rst_n(data)                           (0x00000001&(data))
#define  GW_dss_c30_0_get_reg_gpu_c30_7t_0_data_in(data)                         ((0x0FFFFF00&(data))>>8)
#define  GW_dss_c30_0_get_reg_gpu_c30_7t_0_wire_sel(data)                        ((0x00000020&(data))>>5)
#define  GW_dss_c30_0_get_reg_gpu_c30_7t_0_speed_en(data)                        ((0x00000010&(data))>>4)
#define  GW_dss_c30_0_get_reg_gpu_c30_7t_0_ro_sel(data)                          ((0x0000000E&(data))>>1)
#define  GW_dss_c30_0_get_reg_gpu_c30_7t_0_dss_rst_n(data)                       (0x00000001&(data))

#define  GW_dss_c35_0                                                           0x1810E0C8
#define  GW_dss_c35_0_reg_addr                                                   "0xB810E0C8"
#define  GW_dss_c35_0_reg                                                        0xB810E0C8
#define  GW_dss_c35_0_inst_addr                                                  "0x0027"
#define  set_GW_dss_c35_0_reg(data)                                              (*((volatile unsigned int*)GW_dss_c35_0_reg)=data)
#define  get_GW_dss_c35_0_reg                                                    (*((volatile unsigned int*)GW_dss_c35_0_reg))
#define  GW_dss_c35_0_reg_gpu_c35_7t_0_data_in_shift                             (8)
#define  GW_dss_c35_0_reg_gpu_c35_7t_0_wire_sel_shift                            (5)
#define  GW_dss_c35_0_reg_gpu_c35_7t_0_speed_en_shift                            (4)
#define  GW_dss_c35_0_reg_gpu_c35_7t_0_ro_sel_shift                              (1)
#define  GW_dss_c35_0_reg_gpu_c35_7t_0_dss_rst_n_shift                           (0)
#define  GW_dss_c35_0_reg_gpu_c35_7t_0_data_in_mask                              (0x0FFFFF00)
#define  GW_dss_c35_0_reg_gpu_c35_7t_0_wire_sel_mask                             (0x00000020)
#define  GW_dss_c35_0_reg_gpu_c35_7t_0_speed_en_mask                             (0x00000010)
#define  GW_dss_c35_0_reg_gpu_c35_7t_0_ro_sel_mask                               (0x0000000E)
#define  GW_dss_c35_0_reg_gpu_c35_7t_0_dss_rst_n_mask                            (0x00000001)
#define  GW_dss_c35_0_reg_gpu_c35_7t_0_data_in(data)                             (0x0FFFFF00&((data)<<8))
#define  GW_dss_c35_0_reg_gpu_c35_7t_0_wire_sel(data)                            (0x00000020&((data)<<5))
#define  GW_dss_c35_0_reg_gpu_c35_7t_0_speed_en(data)                            (0x00000010&((data)<<4))
#define  GW_dss_c35_0_reg_gpu_c35_7t_0_ro_sel(data)                              (0x0000000E&((data)<<1))
#define  GW_dss_c35_0_reg_gpu_c35_7t_0_dss_rst_n(data)                           (0x00000001&(data))
#define  GW_dss_c35_0_get_reg_gpu_c35_7t_0_data_in(data)                         ((0x0FFFFF00&(data))>>8)
#define  GW_dss_c35_0_get_reg_gpu_c35_7t_0_wire_sel(data)                        ((0x00000020&(data))>>5)
#define  GW_dss_c35_0_get_reg_gpu_c35_7t_0_speed_en(data)                        ((0x00000010&(data))>>4)
#define  GW_dss_c35_0_get_reg_gpu_c35_7t_0_ro_sel(data)                          ((0x0000000E&(data))>>1)
#define  GW_dss_c35_0_get_reg_gpu_c35_7t_0_dss_rst_n(data)                       (0x00000001&(data))

#define  GW_dss_ro_c30_00                                                       0x1810E0D0
#define  GW_dss_ro_c30_00_reg_addr                                               "0xB810E0D0"
#define  GW_dss_ro_c30_00_reg                                                    0xB810E0D0
#define  GW_dss_ro_c30_00_inst_addr                                              "0x0028"
#define  set_GW_dss_ro_c30_00_reg(data)                                          (*((volatile unsigned int*)GW_dss_ro_c30_00_reg)=data)
#define  get_GW_dss_ro_c30_00_reg                                                (*((volatile unsigned int*)GW_dss_ro_c30_00_reg))
#define  GW_dss_ro_c30_00_gpu_dss_c30_7t_0_wsort_go_ro_shift                     (21)
#define  GW_dss_ro_c30_00_gpu_dss_c30_7t_0_ready_ro_shift                        (20)
#define  GW_dss_ro_c30_00_gpu_dss_c30_7t_0_count_out_ro_shift                    (0)
#define  GW_dss_ro_c30_00_gpu_dss_c30_7t_0_wsort_go_ro_mask                      (0x00200000)
#define  GW_dss_ro_c30_00_gpu_dss_c30_7t_0_ready_ro_mask                         (0x00100000)
#define  GW_dss_ro_c30_00_gpu_dss_c30_7t_0_count_out_ro_mask                     (0x000FFFFF)
#define  GW_dss_ro_c30_00_gpu_dss_c30_7t_0_wsort_go_ro(data)                     (0x00200000&((data)<<21))
#define  GW_dss_ro_c30_00_gpu_dss_c30_7t_0_ready_ro(data)                        (0x00100000&((data)<<20))
#define  GW_dss_ro_c30_00_gpu_dss_c30_7t_0_count_out_ro(data)                    (0x000FFFFF&(data))
#define  GW_dss_ro_c30_00_get_gpu_dss_c30_7t_0_wsort_go_ro(data)                 ((0x00200000&(data))>>21)
#define  GW_dss_ro_c30_00_get_gpu_dss_c30_7t_0_ready_ro(data)                    ((0x00100000&(data))>>20)
#define  GW_dss_ro_c30_00_get_gpu_dss_c30_7t_0_count_out_ro(data)                (0x000FFFFF&(data))

#define  GW_dss_ro_c30_01                                                       0x1810E0D4
#define  GW_dss_ro_c30_01_reg_addr                                               "0xB810E0D4"
#define  GW_dss_ro_c30_01_reg                                                    0xB810E0D4
#define  GW_dss_ro_c30_01_inst_addr                                              "0x0029"
#define  set_GW_dss_ro_c30_01_reg(data)                                          (*((volatile unsigned int*)GW_dss_ro_c30_01_reg)=data)
#define  get_GW_dss_ro_c30_01_reg                                                (*((volatile unsigned int*)GW_dss_ro_c30_01_reg))
#define  GW_dss_ro_c30_01_gpu_dss_c30_7t_0_dbgo_ro_shift                         (0)
#define  GW_dss_ro_c30_01_gpu_dss_c30_7t_0_dbgo_ro_mask                          (0x0000FFFF)
#define  GW_dss_ro_c30_01_gpu_dss_c30_7t_0_dbgo_ro(data)                         (0x0000FFFF&(data))
#define  GW_dss_ro_c30_01_get_gpu_dss_c30_7t_0_dbgo_ro(data)                     (0x0000FFFF&(data))

#define  GW_dss_ro_c35_00                                                       0x1810E0E0
#define  GW_dss_ro_c35_00_reg_addr                                               "0xB810E0E0"
#define  GW_dss_ro_c35_00_reg                                                    0xB810E0E0
#define  GW_dss_ro_c35_00_inst_addr                                              "0x002A"
#define  set_GW_dss_ro_c35_00_reg(data)                                          (*((volatile unsigned int*)GW_dss_ro_c35_00_reg)=data)
#define  get_GW_dss_ro_c35_00_reg                                                (*((volatile unsigned int*)GW_dss_ro_c35_00_reg))
#define  GW_dss_ro_c35_00_gpu_dss_c35_7t_0_wsort_go_ro_shift                     (21)
#define  GW_dss_ro_c35_00_gpu_dss_c35_7t_0_ready_ro_shift                        (20)
#define  GW_dss_ro_c35_00_gpu_dss_c35_7t_0_count_out_ro_shift                    (0)
#define  GW_dss_ro_c35_00_gpu_dss_c35_7t_0_wsort_go_ro_mask                      (0x00200000)
#define  GW_dss_ro_c35_00_gpu_dss_c35_7t_0_ready_ro_mask                         (0x00100000)
#define  GW_dss_ro_c35_00_gpu_dss_c35_7t_0_count_out_ro_mask                     (0x000FFFFF)
#define  GW_dss_ro_c35_00_gpu_dss_c35_7t_0_wsort_go_ro(data)                     (0x00200000&((data)<<21))
#define  GW_dss_ro_c35_00_gpu_dss_c35_7t_0_ready_ro(data)                        (0x00100000&((data)<<20))
#define  GW_dss_ro_c35_00_gpu_dss_c35_7t_0_count_out_ro(data)                    (0x000FFFFF&(data))
#define  GW_dss_ro_c35_00_get_gpu_dss_c35_7t_0_wsort_go_ro(data)                 ((0x00200000&(data))>>21)
#define  GW_dss_ro_c35_00_get_gpu_dss_c35_7t_0_ready_ro(data)                    ((0x00100000&(data))>>20)
#define  GW_dss_ro_c35_00_get_gpu_dss_c35_7t_0_count_out_ro(data)                (0x000FFFFF&(data))

#define  GW_dss_ro_c35_01                                                       0x1810E0E4
#define  GW_dss_ro_c35_01_reg_addr                                               "0xB810E0E4"
#define  GW_dss_ro_c35_01_reg                                                    0xB810E0E4
#define  GW_dss_ro_c35_01_inst_addr                                              "0x002B"
#define  set_GW_dss_ro_c35_01_reg(data)                                          (*((volatile unsigned int*)GW_dss_ro_c35_01_reg)=data)
#define  get_GW_dss_ro_c35_01_reg                                                (*((volatile unsigned int*)GW_dss_ro_c35_01_reg))
#define  GW_dss_ro_c35_01_gpu_dss_c35_7t_0_dbgo_ro_shift                         (0)
#define  GW_dss_ro_c35_01_gpu_dss_c35_7t_0_dbgo_ro_mask                          (0x0000FFFF)
#define  GW_dss_ro_c35_01_gpu_dss_c35_7t_0_dbgo_ro(data)                         (0x0000FFFF&(data))
#define  GW_dss_ro_c35_01_get_gpu_dss_c35_7t_0_dbgo_ro(data)                     (0x0000FFFF&(data))

#define  GW_voltprob                                                            0x1810E0F0
#define  GW_voltprob_reg_addr                                                    "0xB810E0F0"
#define  GW_voltprob_reg                                                         0xB810E0F0
#define  GW_voltprob_inst_addr                                                   "0x002C"
#define  set_GW_voltprob_reg(data)                                               (*((volatile unsigned int*)GW_voltprob_reg)=data)
#define  get_GW_voltprob_reg                                                     (*((volatile unsigned int*)GW_voltprob_reg))
#define  GW_voltprob_voltprob_gpu_gnd_ctrl_shift                                 (1)
#define  GW_voltprob_voltprob_gpu_pwr_ctrl_shift                                 (0)
#define  GW_voltprob_voltprob_gpu_gnd_ctrl_mask                                  (0x00000002)
#define  GW_voltprob_voltprob_gpu_pwr_ctrl_mask                                  (0x00000001)
#define  GW_voltprob_voltprob_gpu_gnd_ctrl(data)                                 (0x00000002&((data)<<1))
#define  GW_voltprob_voltprob_gpu_pwr_ctrl(data)                                 (0x00000001&(data))
#define  GW_voltprob_get_voltprob_gpu_gnd_ctrl(data)                             ((0x00000002&(data))>>1)
#define  GW_voltprob_get_voltprob_gpu_pwr_ctrl(data)                             (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======GW register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  irqgpu:1;
        RBus_UInt32  irqmmu:1;
        RBus_UInt32  irqjob:1;
        RBus_UInt32  irqevent:1;
    };
}gw_gpu_irq_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  sw_bist_tdo:1;
        RBus_UInt32  sw_bist_trstn:1;
        RBus_UInt32  sw_bist_tms:1;
        RBus_UInt32  sw_bist_tdi:1;
        RBus_UInt32  sw_bist_tck:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  ejtag_sw_bist:1;
    };
}gw_gpu_sw_bist_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  dummy1810f000_1:1;
        RBus_UInt32  gpu_resetn:1;
    };
}gw_gpu_reset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  gpu_protected_mode:2;
    };
}gw_gpu_protected_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  gpu_normal_nsaid:4;
    };
}gw_gpu_normal_nsaid_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  gpu_prot_nsaid:4;
    };
}gw_gpu_prot_nsaid_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  gpu_coherencyfeatures:1;
        RBus_UInt32  res2:13;
        RBus_UInt32  gpu_striping_granule:3;
    };
}gw_dvalin_config_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpu_texfmtenable:32;
    };
}gw_dvalin_config_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  gw_rcmd_mode:2;
    };
}gw_dc_sys_cti_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  gw_srg_mode:3;
        RBus_UInt32  gw_srg_write_disable:1;
        RBus_UInt32  gw_srg_read_disable:1;
        RBus_UInt32  gw_srg_burst_limit:1;
    };
}gw_dc_sys_srg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  gw_rd_outstand_num:7;
        RBus_UInt32  res2:10;
        RBus_UInt32  gw_wr_outstand_num:6;
    };
}gw_outstand_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  gw_rd_outstand_cnt:7;
        RBus_UInt32  res2:10;
        RBus_UInt32  gw_wr_outstand_cnt:6;
    };
}gw_outstand_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  gw_in_order_mode:1;
    };
}gw_in_order_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  gw_soft_reset:1;
    };
}gw_soft_reset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  gw_endian_swap_mode:2;
        RBus_UInt32  gw_endian_swap:1;
    };
}gw_endian_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  gw_rw_arbitration:2;
    };
}gw_rw_arbitration_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  irqgpu_en:1;
        RBus_UInt32  irqmmu_en:1;
        RBus_UInt32  irqjob_en:1;
        RBus_UInt32  irqevent_en:1;
    };
}gw_int_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  gw_wdone_sel:1;
        RBus_UInt32  gw_force_write_bufferable:1;
    };
}gw_write_bufferable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  dc_remote_cmd_cnt:7;
        RBus_UInt32  dc_rcmd_async_fifo_empty:1;
        RBus_UInt32  dc_rcmd_async_fifo_full:1;
        RBus_UInt32  dc_rdata_async_fifo_empty:1;
        RBus_UInt32  dc_rdata_async_fifo_full:1;
        RBus_UInt32  dc_wcmd_async_fifo_empty:1;
        RBus_UInt32  dc_wcmd_async_fifo_full:1;
        RBus_UInt32  dc_wdata_async_fifo_empty:1;
        RBus_UInt32  dc_wdata_async_fifo_full:1;
        RBus_UInt32  dc_wlast_async_fifo_empty:1;
        RBus_UInt32  dc_wlast_async_fifo_full:1;
    };
}gw_dc_fifo_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
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
}gw_axi_fifo_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  dc_idle:1;
        RBus_UInt32  axi_r_idle:1;
        RBus_UInt32  axi_w_idle:1;
    };
}gw_wrapper_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_rw:32;
    };
}gw_dummy_RBUS;

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
}gw_sf_dbus_ctrl_RBUS;

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
}gw_sf_dbus_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_ctr_lsb:32;
    };
}gw_sf_scpu_ctr_dbg_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_ctr_msb:32;
    };
}gw_sf_scpu_ctr_dbg_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  rme:1;
        RBus_UInt32  rm:4;
    };
}gw_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  bist_mode:1;
    };
}gw_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  bist_done:1;
    };
}gw_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  drf_bist_mode:1;
    };
}gw_drf_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  drf_start_pause:1;
    };
}gw_drf_start_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  drf_test_resume:1;
    };
}gw_drf_test_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  drf_bist_done:1;
    };
}gw_drf_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  bist_fail:1;
    };
}gw_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  drf_bist_fail:1;
    };
}gw_drf_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  test1:1;
        RBus_UInt32  testrwm:1;
    };
}gw_testrwm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  gpu_test1:1;
        RBus_UInt32  gpu_testrwm:1;
        RBus_UInt32  gpu_rme:1;
        RBus_UInt32  gpu_rm:4;
    };
}gw_gpu_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpu_force_all_sram_clken:1;
        RBus_UInt32  res1:30;
        RBus_UInt32  dummy1810e090_0:1;
    };
}gw_gpu_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_gpu_c30_7t_0_data_in:20;
        RBus_UInt32  res2:2;
        RBus_UInt32  reg_gpu_c30_7t_0_wire_sel:1;
        RBus_UInt32  reg_gpu_c30_7t_0_speed_en:1;
        RBus_UInt32  reg_gpu_c30_7t_0_ro_sel:3;
        RBus_UInt32  reg_gpu_c30_7t_0_dss_rst_n:1;
    };
}gw_dss_c30_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_gpu_c35_7t_0_data_in:20;
        RBus_UInt32  res2:2;
        RBus_UInt32  reg_gpu_c35_7t_0_wire_sel:1;
        RBus_UInt32  reg_gpu_c35_7t_0_speed_en:1;
        RBus_UInt32  reg_gpu_c35_7t_0_ro_sel:3;
        RBus_UInt32  reg_gpu_c35_7t_0_dss_rst_n:1;
    };
}gw_dss_c35_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  gpu_dss_c30_7t_0_wsort_go_ro:1;
        RBus_UInt32  gpu_dss_c30_7t_0_ready_ro:1;
        RBus_UInt32  gpu_dss_c30_7t_0_count_out_ro:20;
    };
}gw_dss_ro_c30_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  gpu_dss_c30_7t_0_dbgo_ro:16;
    };
}gw_dss_ro_c30_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  gpu_dss_c35_7t_0_wsort_go_ro:1;
        RBus_UInt32  gpu_dss_c35_7t_0_ready_ro:1;
        RBus_UInt32  gpu_dss_c35_7t_0_count_out_ro:20;
    };
}gw_dss_ro_c35_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  gpu_dss_c35_7t_0_dbgo_ro:16;
    };
}gw_dss_ro_c35_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  voltprob_gpu_gnd_ctrl:1;
        RBus_UInt32  voltprob_gpu_pwr_ctrl:1;
    };
}gw_voltprob_RBUS;

#else //apply LITTLE_ENDIAN

//======GW register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irqevent:1;
        RBus_UInt32  irqjob:1;
        RBus_UInt32  irqmmu:1;
        RBus_UInt32  irqgpu:1;
        RBus_UInt32  res1:28;
    };
}gw_gpu_irq_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ejtag_sw_bist:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  sw_bist_tck:1;
        RBus_UInt32  sw_bist_tdi:1;
        RBus_UInt32  sw_bist_tms:1;
        RBus_UInt32  sw_bist_trstn:1;
        RBus_UInt32  sw_bist_tdo:1;
        RBus_UInt32  res2:23;
    };
}gw_gpu_sw_bist_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpu_resetn:1;
        RBus_UInt32  dummy1810f000_1:1;
        RBus_UInt32  res1:30;
    };
}gw_gpu_reset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpu_protected_mode:2;
        RBus_UInt32  res1:30;
    };
}gw_gpu_protected_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpu_normal_nsaid:4;
        RBus_UInt32  res1:28;
    };
}gw_gpu_normal_nsaid_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpu_prot_nsaid:4;
        RBus_UInt32  res1:28;
    };
}gw_gpu_prot_nsaid_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpu_striping_granule:3;
        RBus_UInt32  res1:13;
        RBus_UInt32  gpu_coherencyfeatures:1;
        RBus_UInt32  res2:15;
    };
}gw_dvalin_config_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpu_texfmtenable:32;
    };
}gw_dvalin_config_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gw_rcmd_mode:2;
        RBus_UInt32  res1:30;
    };
}gw_dc_sys_cti_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gw_srg_burst_limit:1;
        RBus_UInt32  gw_srg_read_disable:1;
        RBus_UInt32  gw_srg_write_disable:1;
        RBus_UInt32  gw_srg_mode:3;
        RBus_UInt32  res1:26;
    };
}gw_dc_sys_srg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gw_wr_outstand_num:6;
        RBus_UInt32  res1:10;
        RBus_UInt32  gw_rd_outstand_num:7;
        RBus_UInt32  res2:9;
    };
}gw_outstand_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gw_wr_outstand_cnt:6;
        RBus_UInt32  res1:10;
        RBus_UInt32  gw_rd_outstand_cnt:7;
        RBus_UInt32  res2:9;
    };
}gw_outstand_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gw_in_order_mode:1;
        RBus_UInt32  res1:31;
    };
}gw_in_order_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gw_soft_reset:1;
        RBus_UInt32  res1:31;
    };
}gw_soft_reset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gw_endian_swap:1;
        RBus_UInt32  gw_endian_swap_mode:2;
        RBus_UInt32  res1:29;
    };
}gw_endian_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gw_rw_arbitration:2;
        RBus_UInt32  res1:30;
    };
}gw_rw_arbitration_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irqevent_en:1;
        RBus_UInt32  irqjob_en:1;
        RBus_UInt32  irqmmu_en:1;
        RBus_UInt32  irqgpu_en:1;
        RBus_UInt32  res1:28;
    };
}gw_int_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gw_force_write_bufferable:1;
        RBus_UInt32  gw_wdone_sel:1;
        RBus_UInt32  res1:30;
    };
}gw_write_bufferable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dc_wlast_async_fifo_full:1;
        RBus_UInt32  dc_wlast_async_fifo_empty:1;
        RBus_UInt32  dc_wdata_async_fifo_full:1;
        RBus_UInt32  dc_wdata_async_fifo_empty:1;
        RBus_UInt32  dc_wcmd_async_fifo_full:1;
        RBus_UInt32  dc_wcmd_async_fifo_empty:1;
        RBus_UInt32  dc_rdata_async_fifo_full:1;
        RBus_UInt32  dc_rdata_async_fifo_empty:1;
        RBus_UInt32  dc_rcmd_async_fifo_full:1;
        RBus_UInt32  dc_rcmd_async_fifo_empty:1;
        RBus_UInt32  dc_remote_cmd_cnt:7;
        RBus_UInt32  res1:15;
    };
}gw_dc_fifo_status_RBUS;

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
        RBus_UInt32  res1:22;
    };
}gw_axi_fifo_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  axi_w_idle:1;
        RBus_UInt32  axi_r_idle:1;
        RBus_UInt32  dc_idle:1;
        RBus_UInt32  res1:29;
    };
}gw_wrapper_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_rw:32;
    };
}gw_dummy_RBUS;

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
}gw_sf_dbus_ctrl_RBUS;

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
}gw_sf_dbus_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_ctr_lsb:32;
    };
}gw_sf_scpu_ctr_dbg_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_ctr_msb:32;
    };
}gw_sf_scpu_ctr_dbg_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rm:4;
        RBus_UInt32  rme:1;
        RBus_UInt32  res1:27;
    };
}gw_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_mode:1;
        RBus_UInt32  res1:31;
    };
}gw_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_done:1;
        RBus_UInt32  res1:31;
    };
}gw_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_bist_mode:1;
        RBus_UInt32  res1:31;
    };
}gw_drf_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_start_pause:1;
        RBus_UInt32  res1:31;
    };
}gw_drf_start_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_test_resume:1;
        RBus_UInt32  res1:31;
    };
}gw_drf_test_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_bist_done:1;
        RBus_UInt32  res1:31;
    };
}gw_drf_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_fail:1;
        RBus_UInt32  res1:31;
    };
}gw_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_bist_fail:1;
        RBus_UInt32  res1:31;
    };
}gw_drf_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  testrwm:1;
        RBus_UInt32  test1:1;
        RBus_UInt32  res1:30;
    };
}gw_testrwm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpu_rm:4;
        RBus_UInt32  gpu_rme:1;
        RBus_UInt32  gpu_testrwm:1;
        RBus_UInt32  gpu_test1:1;
        RBus_UInt32  res1:25;
    };
}gw_gpu_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1810e090_0:1;
        RBus_UInt32  res1:30;
        RBus_UInt32  gpu_force_all_sram_clken:1;
    };
}gw_gpu_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_gpu_c30_7t_0_dss_rst_n:1;
        RBus_UInt32  reg_gpu_c30_7t_0_ro_sel:3;
        RBus_UInt32  reg_gpu_c30_7t_0_speed_en:1;
        RBus_UInt32  reg_gpu_c30_7t_0_wire_sel:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_gpu_c30_7t_0_data_in:20;
        RBus_UInt32  res2:4;
    };
}gw_dss_c30_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_gpu_c35_7t_0_dss_rst_n:1;
        RBus_UInt32  reg_gpu_c35_7t_0_ro_sel:3;
        RBus_UInt32  reg_gpu_c35_7t_0_speed_en:1;
        RBus_UInt32  reg_gpu_c35_7t_0_wire_sel:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_gpu_c35_7t_0_data_in:20;
        RBus_UInt32  res2:4;
    };
}gw_dss_c35_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpu_dss_c30_7t_0_count_out_ro:20;
        RBus_UInt32  gpu_dss_c30_7t_0_ready_ro:1;
        RBus_UInt32  gpu_dss_c30_7t_0_wsort_go_ro:1;
        RBus_UInt32  res1:10;
    };
}gw_dss_ro_c30_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpu_dss_c30_7t_0_dbgo_ro:16;
        RBus_UInt32  res1:16;
    };
}gw_dss_ro_c30_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpu_dss_c35_7t_0_count_out_ro:20;
        RBus_UInt32  gpu_dss_c35_7t_0_ready_ro:1;
        RBus_UInt32  gpu_dss_c35_7t_0_wsort_go_ro:1;
        RBus_UInt32  res1:10;
    };
}gw_dss_ro_c35_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpu_dss_c35_7t_0_dbgo_ro:16;
        RBus_UInt32  res1:16;
    };
}gw_dss_ro_c35_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  voltprob_gpu_pwr_ctrl:1;
        RBus_UInt32  voltprob_gpu_gnd_ctrl:1;
        RBus_UInt32  res1:30;
    };
}gw_voltprob_RBUS;




#endif 


#endif 
