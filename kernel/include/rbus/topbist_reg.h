/**
* @file Merlin5-DesignSpec-TOP_BIST
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_TOPBIST_REG_H_
#define _RBUS_TOPBIST_REG_H_

#include "rbus_types.h"



//  TOPBIST Register Address
#define  TOPBIST_dispi_bisr_rstn                                                0x18000F00
#define  TOPBIST_dispi_bisr_rstn_reg_addr                                        "0xB8000F00"
#define  TOPBIST_dispi_bisr_rstn_reg                                             0xB8000F00
#define  TOPBIST_dispi_bisr_rstn_inst_addr                                       "0x0000"
#define  set_TOPBIST_dispi_bisr_rstn_reg(data)                                   (*((volatile unsigned int*)TOPBIST_dispi_bisr_rstn_reg)=data)
#define  get_TOPBIST_dispi_bisr_rstn_reg                                         (*((volatile unsigned int*)TOPBIST_dispi_bisr_rstn_reg))
#define  TOPBIST_dispi_bisr_rstn_di_li6_bisr_rstn_shift                          (1)
#define  TOPBIST_dispi_bisr_rstn_spnr_bisr_rstn_shift                            (0)
#define  TOPBIST_dispi_bisr_rstn_di_li6_bisr_rstn_mask                           (0x00000002)
#define  TOPBIST_dispi_bisr_rstn_spnr_bisr_rstn_mask                             (0x00000001)
#define  TOPBIST_dispi_bisr_rstn_di_li6_bisr_rstn(data)                          (0x00000002&((data)<<1))
#define  TOPBIST_dispi_bisr_rstn_spnr_bisr_rstn(data)                            (0x00000001&(data))
#define  TOPBIST_dispi_bisr_rstn_get_di_li6_bisr_rstn(data)                      ((0x00000002&(data))>>1)
#define  TOPBIST_dispi_bisr_rstn_get_spnr_bisr_rstn(data)                        (0x00000001&(data))

#define  TOPBIST_ve_bisr_rstn                                                   0x18000F08
#define  TOPBIST_ve_bisr_rstn_reg_addr                                           "0xB8000F08"
#define  TOPBIST_ve_bisr_rstn_reg                                                0xB8000F08
#define  TOPBIST_ve_bisr_rstn_inst_addr                                          "0x0001"
#define  set_TOPBIST_ve_bisr_rstn_reg(data)                                      (*((volatile unsigned int*)TOPBIST_ve_bisr_rstn_reg)=data)
#define  get_TOPBIST_ve_bisr_rstn_reg                                            (*((volatile unsigned int*)TOPBIST_ve_bisr_rstn_reg))
#define  TOPBIST_ve_bisr_rstn_ngh_2_bisr_rstn_shift                              (2)
#define  TOPBIST_ve_bisr_rstn_ngh_bisr_rstn_shift                                (1)
#define  TOPBIST_ve_bisr_rstn_ve_cah_bisr_rstn_shift                             (0)
#define  TOPBIST_ve_bisr_rstn_ngh_2_bisr_rstn_mask                               (0x00000004)
#define  TOPBIST_ve_bisr_rstn_ngh_bisr_rstn_mask                                 (0x00000002)
#define  TOPBIST_ve_bisr_rstn_ve_cah_bisr_rstn_mask                              (0x00000001)
#define  TOPBIST_ve_bisr_rstn_ngh_2_bisr_rstn(data)                              (0x00000004&((data)<<2))
#define  TOPBIST_ve_bisr_rstn_ngh_bisr_rstn(data)                                (0x00000002&((data)<<1))
#define  TOPBIST_ve_bisr_rstn_ve_cah_bisr_rstn(data)                             (0x00000001&(data))
#define  TOPBIST_ve_bisr_rstn_get_ngh_2_bisr_rstn(data)                          ((0x00000004&(data))>>2)
#define  TOPBIST_ve_bisr_rstn_get_ngh_bisr_rstn(data)                            ((0x00000002&(data))>>1)
#define  TOPBIST_ve_bisr_rstn_get_ve_cah_bisr_rstn(data)                         (0x00000001&(data))

#define  TOPBIST_cpu_bisr_rstn                                                  0x18000F0C
#define  TOPBIST_cpu_bisr_rstn_reg_addr                                          "0xB8000F0C"
#define  TOPBIST_cpu_bisr_rstn_reg                                               0xB8000F0C
#define  TOPBIST_cpu_bisr_rstn_inst_addr                                         "0x0002"
#define  set_TOPBIST_cpu_bisr_rstn_reg(data)                                     (*((volatile unsigned int*)TOPBIST_cpu_bisr_rstn_reg)=data)
#define  get_TOPBIST_cpu_bisr_rstn_reg                                           (*((volatile unsigned int*)TOPBIST_cpu_bisr_rstn_reg))
#define  TOPBIST_cpu_bisr_rstn_scpu_bisr_pwr_rstn_shift                          (18)
#define  TOPBIST_cpu_bisr_rstn_acpu_bisr_pwr_rstn_shift                          (17)
#define  TOPBIST_cpu_bisr_rstn_vcpu_bisr_pwr_rstn_shift                          (16)
#define  TOPBIST_cpu_bisr_rstn_acpu_bisr_3_rstn_shift                            (15)
#define  TOPBIST_cpu_bisr_rstn_acpu_bisr_2_rstn_shift                            (14)
#define  TOPBIST_cpu_bisr_rstn_acpu_bisr_1_rstn_shift                            (13)
#define  TOPBIST_cpu_bisr_rstn_acpu_bisr_0_rstn_shift                            (12)
#define  TOPBIST_cpu_bisr_rstn_dummy_10_shift                                    (10)
#define  TOPBIST_cpu_bisr_rstn_scpu_bisr_rstn_shift                              (2)
#define  TOPBIST_cpu_bisr_rstn_vcpu_bisr_rstn_shift                              (1)
#define  TOPBIST_cpu_bisr_rstn_scpu_bisr_pwr_rstn_mask                           (0x000C0000)
#define  TOPBIST_cpu_bisr_rstn_acpu_bisr_pwr_rstn_mask                           (0x00020000)
#define  TOPBIST_cpu_bisr_rstn_vcpu_bisr_pwr_rstn_mask                           (0x00010000)
#define  TOPBIST_cpu_bisr_rstn_acpu_bisr_3_rstn_mask                             (0x00008000)
#define  TOPBIST_cpu_bisr_rstn_acpu_bisr_2_rstn_mask                             (0x00004000)
#define  TOPBIST_cpu_bisr_rstn_acpu_bisr_1_rstn_mask                             (0x00002000)
#define  TOPBIST_cpu_bisr_rstn_acpu_bisr_0_rstn_mask                             (0x00001000)
#define  TOPBIST_cpu_bisr_rstn_dummy_10_mask                                     (0x00000400)
#define  TOPBIST_cpu_bisr_rstn_scpu_bisr_rstn_mask                               (0x0000000C)
#define  TOPBIST_cpu_bisr_rstn_vcpu_bisr_rstn_mask                               (0x00000002)
#define  TOPBIST_cpu_bisr_rstn_scpu_bisr_pwr_rstn(data)                          (0x000C0000&((data)<<18))
#define  TOPBIST_cpu_bisr_rstn_acpu_bisr_pwr_rstn(data)                          (0x00020000&((data)<<17))
#define  TOPBIST_cpu_bisr_rstn_vcpu_bisr_pwr_rstn(data)                          (0x00010000&((data)<<16))
#define  TOPBIST_cpu_bisr_rstn_acpu_bisr_3_rstn(data)                            (0x00008000&((data)<<15))
#define  TOPBIST_cpu_bisr_rstn_acpu_bisr_2_rstn(data)                            (0x00004000&((data)<<14))
#define  TOPBIST_cpu_bisr_rstn_acpu_bisr_1_rstn(data)                            (0x00002000&((data)<<13))
#define  TOPBIST_cpu_bisr_rstn_acpu_bisr_0_rstn(data)                            (0x00001000&((data)<<12))
#define  TOPBIST_cpu_bisr_rstn_dummy_10(data)                                    (0x00000400&((data)<<10))
#define  TOPBIST_cpu_bisr_rstn_scpu_bisr_rstn(data)                              (0x0000000C&((data)<<2))
#define  TOPBIST_cpu_bisr_rstn_vcpu_bisr_rstn(data)                              (0x00000002&((data)<<1))
#define  TOPBIST_cpu_bisr_rstn_get_scpu_bisr_pwr_rstn(data)                      ((0x000C0000&(data))>>18)
#define  TOPBIST_cpu_bisr_rstn_get_acpu_bisr_pwr_rstn(data)                      ((0x00020000&(data))>>17)
#define  TOPBIST_cpu_bisr_rstn_get_vcpu_bisr_pwr_rstn(data)                      ((0x00010000&(data))>>16)
#define  TOPBIST_cpu_bisr_rstn_get_acpu_bisr_3_rstn(data)                        ((0x00008000&(data))>>15)
#define  TOPBIST_cpu_bisr_rstn_get_acpu_bisr_2_rstn(data)                        ((0x00004000&(data))>>14)
#define  TOPBIST_cpu_bisr_rstn_get_acpu_bisr_1_rstn(data)                        ((0x00002000&(data))>>13)
#define  TOPBIST_cpu_bisr_rstn_get_acpu_bisr_0_rstn(data)                        ((0x00001000&(data))>>12)
#define  TOPBIST_cpu_bisr_rstn_get_dummy_10(data)                                ((0x00000400&(data))>>10)
#define  TOPBIST_cpu_bisr_rstn_get_scpu_bisr_rstn(data)                          ((0x0000000C&(data))>>2)
#define  TOPBIST_cpu_bisr_rstn_get_vcpu_bisr_rstn(data)                          ((0x00000002&(data))>>1)

#define  TOPBIST_dispi_bisr_remap                                               0x18000F10
#define  TOPBIST_dispi_bisr_remap_reg_addr                                       "0xB8000F10"
#define  TOPBIST_dispi_bisr_remap_reg                                            0xB8000F10
#define  TOPBIST_dispi_bisr_remap_inst_addr                                      "0x0003"
#define  set_TOPBIST_dispi_bisr_remap_reg(data)                                  (*((volatile unsigned int*)TOPBIST_dispi_bisr_remap_reg)=data)
#define  get_TOPBIST_dispi_bisr_remap_reg                                        (*((volatile unsigned int*)TOPBIST_dispi_bisr_remap_reg))
#define  TOPBIST_dispi_bisr_remap_di_li6_bisr_remap_shift                        (1)
#define  TOPBIST_dispi_bisr_remap_spnr_bisr_remap_shift                          (0)
#define  TOPBIST_dispi_bisr_remap_di_li6_bisr_remap_mask                         (0x00000002)
#define  TOPBIST_dispi_bisr_remap_spnr_bisr_remap_mask                           (0x00000001)
#define  TOPBIST_dispi_bisr_remap_di_li6_bisr_remap(data)                        (0x00000002&((data)<<1))
#define  TOPBIST_dispi_bisr_remap_spnr_bisr_remap(data)                          (0x00000001&(data))
#define  TOPBIST_dispi_bisr_remap_get_di_li6_bisr_remap(data)                    ((0x00000002&(data))>>1)
#define  TOPBIST_dispi_bisr_remap_get_spnr_bisr_remap(data)                      (0x00000001&(data))

#define  TOPBIST_ve_bisr_remap                                                  0x18000F18
#define  TOPBIST_ve_bisr_remap_reg_addr                                          "0xB8000F18"
#define  TOPBIST_ve_bisr_remap_reg                                               0xB8000F18
#define  TOPBIST_ve_bisr_remap_inst_addr                                         "0x0004"
#define  set_TOPBIST_ve_bisr_remap_reg(data)                                     (*((volatile unsigned int*)TOPBIST_ve_bisr_remap_reg)=data)
#define  get_TOPBIST_ve_bisr_remap_reg                                           (*((volatile unsigned int*)TOPBIST_ve_bisr_remap_reg))
#define  TOPBIST_ve_bisr_remap_ngh_2_bisr_remap_shift                            (2)
#define  TOPBIST_ve_bisr_remap_ngh_bisr_remap_shift                              (1)
#define  TOPBIST_ve_bisr_remap_ve_cah_bisr_remap_shift                           (0)
#define  TOPBIST_ve_bisr_remap_ngh_2_bisr_remap_mask                             (0x00000004)
#define  TOPBIST_ve_bisr_remap_ngh_bisr_remap_mask                               (0x00000002)
#define  TOPBIST_ve_bisr_remap_ve_cah_bisr_remap_mask                            (0x00000001)
#define  TOPBIST_ve_bisr_remap_ngh_2_bisr_remap(data)                            (0x00000004&((data)<<2))
#define  TOPBIST_ve_bisr_remap_ngh_bisr_remap(data)                              (0x00000002&((data)<<1))
#define  TOPBIST_ve_bisr_remap_ve_cah_bisr_remap(data)                           (0x00000001&(data))
#define  TOPBIST_ve_bisr_remap_get_ngh_2_bisr_remap(data)                        ((0x00000004&(data))>>2)
#define  TOPBIST_ve_bisr_remap_get_ngh_bisr_remap(data)                          ((0x00000002&(data))>>1)
#define  TOPBIST_ve_bisr_remap_get_ve_cah_bisr_remap(data)                       (0x00000001&(data))

#define  TOPBIST_cpu_bisr_remap                                                 0x18000F1C
#define  TOPBIST_cpu_bisr_remap_reg_addr                                         "0xB8000F1C"
#define  TOPBIST_cpu_bisr_remap_reg                                              0xB8000F1C
#define  TOPBIST_cpu_bisr_remap_inst_addr                                        "0x0005"
#define  set_TOPBIST_cpu_bisr_remap_reg(data)                                    (*((volatile unsigned int*)TOPBIST_cpu_bisr_remap_reg)=data)
#define  get_TOPBIST_cpu_bisr_remap_reg                                          (*((volatile unsigned int*)TOPBIST_cpu_bisr_remap_reg))
#define  TOPBIST_cpu_bisr_remap_acpu_bisr_3_remap_shift                          (15)
#define  TOPBIST_cpu_bisr_remap_acpu_bisr_2_remap_shift                          (14)
#define  TOPBIST_cpu_bisr_remap_acpu_bisr_1_remap_shift                          (13)
#define  TOPBIST_cpu_bisr_remap_acpu_bisr_0_remap_shift                          (12)
#define  TOPBIST_cpu_bisr_remap_dummy_10_shift                                   (10)
#define  TOPBIST_cpu_bisr_remap_scpu_bisr_remap_shift                            (2)
#define  TOPBIST_cpu_bisr_remap_vcpu_bisr_remap_shift                            (1)
#define  TOPBIST_cpu_bisr_remap_acpu_bisr_3_remap_mask                           (0x00008000)
#define  TOPBIST_cpu_bisr_remap_acpu_bisr_2_remap_mask                           (0x00004000)
#define  TOPBIST_cpu_bisr_remap_acpu_bisr_1_remap_mask                           (0x00002000)
#define  TOPBIST_cpu_bisr_remap_acpu_bisr_0_remap_mask                           (0x00001000)
#define  TOPBIST_cpu_bisr_remap_dummy_10_mask                                    (0x00000400)
#define  TOPBIST_cpu_bisr_remap_scpu_bisr_remap_mask                             (0x0000000C)
#define  TOPBIST_cpu_bisr_remap_vcpu_bisr_remap_mask                             (0x00000002)
#define  TOPBIST_cpu_bisr_remap_acpu_bisr_3_remap(data)                          (0x00008000&((data)<<15))
#define  TOPBIST_cpu_bisr_remap_acpu_bisr_2_remap(data)                          (0x00004000&((data)<<14))
#define  TOPBIST_cpu_bisr_remap_acpu_bisr_1_remap(data)                          (0x00002000&((data)<<13))
#define  TOPBIST_cpu_bisr_remap_acpu_bisr_0_remap(data)                          (0x00001000&((data)<<12))
#define  TOPBIST_cpu_bisr_remap_dummy_10(data)                                   (0x00000400&((data)<<10))
#define  TOPBIST_cpu_bisr_remap_scpu_bisr_remap(data)                            (0x0000000C&((data)<<2))
#define  TOPBIST_cpu_bisr_remap_vcpu_bisr_remap(data)                            (0x00000002&((data)<<1))
#define  TOPBIST_cpu_bisr_remap_get_acpu_bisr_3_remap(data)                      ((0x00008000&(data))>>15)
#define  TOPBIST_cpu_bisr_remap_get_acpu_bisr_2_remap(data)                      ((0x00004000&(data))>>14)
#define  TOPBIST_cpu_bisr_remap_get_acpu_bisr_1_remap(data)                      ((0x00002000&(data))>>13)
#define  TOPBIST_cpu_bisr_remap_get_acpu_bisr_0_remap(data)                      ((0x00001000&(data))>>12)
#define  TOPBIST_cpu_bisr_remap_get_dummy_10(data)                               ((0x00000400&(data))>>10)
#define  TOPBIST_cpu_bisr_remap_get_scpu_bisr_remap(data)                        ((0x0000000C&(data))>>2)
#define  TOPBIST_cpu_bisr_remap_get_vcpu_bisr_remap(data)                        ((0x00000002&(data))>>1)

#define  TOPBIST_dispi_bisr_done                                                0x18000F20
#define  TOPBIST_dispi_bisr_done_reg_addr                                        "0xB8000F20"
#define  TOPBIST_dispi_bisr_done_reg                                             0xB8000F20
#define  TOPBIST_dispi_bisr_done_inst_addr                                       "0x0006"
#define  set_TOPBIST_dispi_bisr_done_reg(data)                                   (*((volatile unsigned int*)TOPBIST_dispi_bisr_done_reg)=data)
#define  get_TOPBIST_dispi_bisr_done_reg                                         (*((volatile unsigned int*)TOPBIST_dispi_bisr_done_reg))
#define  TOPBIST_dispi_bisr_done_di_li6_bisr_done_shift                          (1)
#define  TOPBIST_dispi_bisr_done_spnr_bisr_done_shift                            (0)
#define  TOPBIST_dispi_bisr_done_di_li6_bisr_done_mask                           (0x00000002)
#define  TOPBIST_dispi_bisr_done_spnr_bisr_done_mask                             (0x00000001)
#define  TOPBIST_dispi_bisr_done_di_li6_bisr_done(data)                          (0x00000002&((data)<<1))
#define  TOPBIST_dispi_bisr_done_spnr_bisr_done(data)                            (0x00000001&(data))
#define  TOPBIST_dispi_bisr_done_get_di_li6_bisr_done(data)                      ((0x00000002&(data))>>1)
#define  TOPBIST_dispi_bisr_done_get_spnr_bisr_done(data)                        (0x00000001&(data))

#define  TOPBIST_ve_bisr_done                                                   0x18000F28
#define  TOPBIST_ve_bisr_done_reg_addr                                           "0xB8000F28"
#define  TOPBIST_ve_bisr_done_reg                                                0xB8000F28
#define  TOPBIST_ve_bisr_done_inst_addr                                          "0x0007"
#define  set_TOPBIST_ve_bisr_done_reg(data)                                      (*((volatile unsigned int*)TOPBIST_ve_bisr_done_reg)=data)
#define  get_TOPBIST_ve_bisr_done_reg                                            (*((volatile unsigned int*)TOPBIST_ve_bisr_done_reg))
#define  TOPBIST_ve_bisr_done_ngh_2_bisr_done_shift                              (2)
#define  TOPBIST_ve_bisr_done_ngh_bisr_done_shift                                (1)
#define  TOPBIST_ve_bisr_done_ve_cah_bisr_done_shift                             (0)
#define  TOPBIST_ve_bisr_done_ngh_2_bisr_done_mask                               (0x00000004)
#define  TOPBIST_ve_bisr_done_ngh_bisr_done_mask                                 (0x00000002)
#define  TOPBIST_ve_bisr_done_ve_cah_bisr_done_mask                              (0x00000001)
#define  TOPBIST_ve_bisr_done_ngh_2_bisr_done(data)                              (0x00000004&((data)<<2))
#define  TOPBIST_ve_bisr_done_ngh_bisr_done(data)                                (0x00000002&((data)<<1))
#define  TOPBIST_ve_bisr_done_ve_cah_bisr_done(data)                             (0x00000001&(data))
#define  TOPBIST_ve_bisr_done_get_ngh_2_bisr_done(data)                          ((0x00000004&(data))>>2)
#define  TOPBIST_ve_bisr_done_get_ngh_bisr_done(data)                            ((0x00000002&(data))>>1)
#define  TOPBIST_ve_bisr_done_get_ve_cah_bisr_done(data)                         (0x00000001&(data))

#define  TOPBIST_cpu_bisr_done                                                  0x18000F2C
#define  TOPBIST_cpu_bisr_done_reg_addr                                          "0xB8000F2C"
#define  TOPBIST_cpu_bisr_done_reg                                               0xB8000F2C
#define  TOPBIST_cpu_bisr_done_inst_addr                                         "0x0008"
#define  set_TOPBIST_cpu_bisr_done_reg(data)                                     (*((volatile unsigned int*)TOPBIST_cpu_bisr_done_reg)=data)
#define  get_TOPBIST_cpu_bisr_done_reg                                           (*((volatile unsigned int*)TOPBIST_cpu_bisr_done_reg))
#define  TOPBIST_cpu_bisr_done_acpu_bisr_3_done_shift                            (15)
#define  TOPBIST_cpu_bisr_done_acpu_bisr_2_done_shift                            (14)
#define  TOPBIST_cpu_bisr_done_acpu_bisr_1_done_shift                            (13)
#define  TOPBIST_cpu_bisr_done_acpu_bisr_0_done_shift                            (12)
#define  TOPBIST_cpu_bisr_done_scpu_bisr_done_shift                              (2)
#define  TOPBIST_cpu_bisr_done_vcpu_bisr_done_shift                              (1)
#define  TOPBIST_cpu_bisr_done_acpu_bisr_3_done_mask                             (0x00008000)
#define  TOPBIST_cpu_bisr_done_acpu_bisr_2_done_mask                             (0x00004000)
#define  TOPBIST_cpu_bisr_done_acpu_bisr_1_done_mask                             (0x00002000)
#define  TOPBIST_cpu_bisr_done_acpu_bisr_0_done_mask                             (0x00001000)
#define  TOPBIST_cpu_bisr_done_scpu_bisr_done_mask                               (0x0000000C)
#define  TOPBIST_cpu_bisr_done_vcpu_bisr_done_mask                               (0x00000002)
#define  TOPBIST_cpu_bisr_done_acpu_bisr_3_done(data)                            (0x00008000&((data)<<15))
#define  TOPBIST_cpu_bisr_done_acpu_bisr_2_done(data)                            (0x00004000&((data)<<14))
#define  TOPBIST_cpu_bisr_done_acpu_bisr_1_done(data)                            (0x00002000&((data)<<13))
#define  TOPBIST_cpu_bisr_done_acpu_bisr_0_done(data)                            (0x00001000&((data)<<12))
#define  TOPBIST_cpu_bisr_done_scpu_bisr_done(data)                              (0x0000000C&((data)<<2))
#define  TOPBIST_cpu_bisr_done_vcpu_bisr_done(data)                              (0x00000002&((data)<<1))
#define  TOPBIST_cpu_bisr_done_get_acpu_bisr_3_done(data)                        ((0x00008000&(data))>>15)
#define  TOPBIST_cpu_bisr_done_get_acpu_bisr_2_done(data)                        ((0x00004000&(data))>>14)
#define  TOPBIST_cpu_bisr_done_get_acpu_bisr_1_done(data)                        ((0x00002000&(data))>>13)
#define  TOPBIST_cpu_bisr_done_get_acpu_bisr_0_done(data)                        ((0x00001000&(data))>>12)
#define  TOPBIST_cpu_bisr_done_get_scpu_bisr_done(data)                          ((0x0000000C&(data))>>2)
#define  TOPBIST_cpu_bisr_done_get_vcpu_bisr_done(data)                          ((0x00000002&(data))>>1)

#define  TOPBIST_SS_7T_0                                                        0x18000F30
#define  TOPBIST_SS_7T_0_reg_addr                                                "0xB8000F30"
#define  TOPBIST_SS_7T_0_reg                                                     0xB8000F30
#define  TOPBIST_SS_7T_0_inst_addr                                               "0x0009"
#define  set_TOPBIST_SS_7T_0_reg(data)                                           (*((volatile unsigned int*)TOPBIST_SS_7T_0_reg)=data)
#define  get_TOPBIST_SS_7T_0_reg                                                 (*((volatile unsigned int*)TOPBIST_SS_7T_0_reg))
#define  TOPBIST_SS_7T_0_rlvt_7t_dss_rst_n_shift                                 (31)
#define  TOPBIST_SS_7T_0_rlvt_7t_ro_sel_shift                                    (25)
#define  TOPBIST_SS_7T_0_rlvt_7t_wire_sel_shift                                  (24)
#define  TOPBIST_SS_7T_0_rlvt_7t_ready_shift                                     (20)
#define  TOPBIST_SS_7T_0_rlvt_7t_count_out_shift                                 (0)
#define  TOPBIST_SS_7T_0_rlvt_7t_dss_rst_n_mask                                  (0x80000000)
#define  TOPBIST_SS_7T_0_rlvt_7t_ro_sel_mask                                     (0x0E000000)
#define  TOPBIST_SS_7T_0_rlvt_7t_wire_sel_mask                                   (0x01000000)
#define  TOPBIST_SS_7T_0_rlvt_7t_ready_mask                                      (0x00100000)
#define  TOPBIST_SS_7T_0_rlvt_7t_count_out_mask                                  (0x000FFFFF)
#define  TOPBIST_SS_7T_0_rlvt_7t_dss_rst_n(data)                                 (0x80000000&((data)<<31))
#define  TOPBIST_SS_7T_0_rlvt_7t_ro_sel(data)                                    (0x0E000000&((data)<<25))
#define  TOPBIST_SS_7T_0_rlvt_7t_wire_sel(data)                                  (0x01000000&((data)<<24))
#define  TOPBIST_SS_7T_0_rlvt_7t_ready(data)                                     (0x00100000&((data)<<20))
#define  TOPBIST_SS_7T_0_rlvt_7t_count_out(data)                                 (0x000FFFFF&(data))
#define  TOPBIST_SS_7T_0_get_rlvt_7t_dss_rst_n(data)                             ((0x80000000&(data))>>31)
#define  TOPBIST_SS_7T_0_get_rlvt_7t_ro_sel(data)                                ((0x0E000000&(data))>>25)
#define  TOPBIST_SS_7T_0_get_rlvt_7t_wire_sel(data)                              ((0x01000000&(data))>>24)
#define  TOPBIST_SS_7T_0_get_rlvt_7t_ready(data)                                 ((0x00100000&(data))>>20)
#define  TOPBIST_SS_7T_0_get_rlvt_7t_count_out(data)                             (0x000FFFFF&(data))

#define  TOPBIST_SS_7T_1                                                        0x18000F34
#define  TOPBIST_SS_7T_1_reg_addr                                                "0xB8000F34"
#define  TOPBIST_SS_7T_1_reg                                                     0xB8000F34
#define  TOPBIST_SS_7T_1_inst_addr                                               "0x000A"
#define  set_TOPBIST_SS_7T_1_reg(data)                                           (*((volatile unsigned int*)TOPBIST_SS_7T_1_reg)=data)
#define  get_TOPBIST_SS_7T_1_reg                                                 (*((volatile unsigned int*)TOPBIST_SS_7T_1_reg))
#define  TOPBIST_SS_7T_1_rlvt_7t_speed_en_shift                                  (24)
#define  TOPBIST_SS_7T_1_rlvt_7t_data_in_shift                                   (4)
#define  TOPBIST_SS_7T_1_rlvt_7t_wsort_go_shift                                  (0)
#define  TOPBIST_SS_7T_1_rlvt_7t_speed_en_mask                                   (0x01000000)
#define  TOPBIST_SS_7T_1_rlvt_7t_data_in_mask                                    (0x00FFFFF0)
#define  TOPBIST_SS_7T_1_rlvt_7t_wsort_go_mask                                   (0x00000001)
#define  TOPBIST_SS_7T_1_rlvt_7t_speed_en(data)                                  (0x01000000&((data)<<24))
#define  TOPBIST_SS_7T_1_rlvt_7t_data_in(data)                                   (0x00FFFFF0&((data)<<4))
#define  TOPBIST_SS_7T_1_rlvt_7t_wsort_go(data)                                  (0x00000001&(data))
#define  TOPBIST_SS_7T_1_get_rlvt_7t_speed_en(data)                              ((0x01000000&(data))>>24)
#define  TOPBIST_SS_7T_1_get_rlvt_7t_data_in(data)                               ((0x00FFFFF0&(data))>>4)
#define  TOPBIST_SS_7T_1_get_rlvt_7t_wsort_go(data)                              (0x00000001&(data))

#define  TOPBIST_fcic_bisr_rstn                                                 0x18000F40
#define  TOPBIST_fcic_bisr_rstn_reg_addr                                         "0xB8000F40"
#define  TOPBIST_fcic_bisr_rstn_reg                                              0xB8000F40
#define  TOPBIST_fcic_bisr_rstn_inst_addr                                        "0x000B"
#define  set_TOPBIST_fcic_bisr_rstn_reg(data)                                    (*((volatile unsigned int*)TOPBIST_fcic_bisr_rstn_reg)=data)
#define  get_TOPBIST_fcic_bisr_rstn_reg                                          (*((volatile unsigned int*)TOPBIST_fcic_bisr_rstn_reg))
#define  TOPBIST_fcic_bisr_rstn_fcic1_bisr_rstn_shift                            (0)
#define  TOPBIST_fcic_bisr_rstn_fcic1_bisr_rstn_mask                             (0x00000001)
#define  TOPBIST_fcic_bisr_rstn_fcic1_bisr_rstn(data)                            (0x00000001&(data))
#define  TOPBIST_fcic_bisr_rstn_get_fcic1_bisr_rstn(data)                        (0x00000001&(data))

#define  TOPBIST_fcic_bisr_remap                                                0x18000F44
#define  TOPBIST_fcic_bisr_remap_reg_addr                                        "0xB8000F44"
#define  TOPBIST_fcic_bisr_remap_reg                                             0xB8000F44
#define  TOPBIST_fcic_bisr_remap_inst_addr                                       "0x000C"
#define  set_TOPBIST_fcic_bisr_remap_reg(data)                                   (*((volatile unsigned int*)TOPBIST_fcic_bisr_remap_reg)=data)
#define  get_TOPBIST_fcic_bisr_remap_reg                                         (*((volatile unsigned int*)TOPBIST_fcic_bisr_remap_reg))
#define  TOPBIST_fcic_bisr_remap_fcic1_bisr_remap_shift                          (0)
#define  TOPBIST_fcic_bisr_remap_fcic1_bisr_remap_mask                           (0x00000001)
#define  TOPBIST_fcic_bisr_remap_fcic1_bisr_remap(data)                          (0x00000001&(data))
#define  TOPBIST_fcic_bisr_remap_get_fcic1_bisr_remap(data)                      (0x00000001&(data))

#define  TOPBIST_fcic_bisr_done                                                 0x18000F48
#define  TOPBIST_fcic_bisr_done_reg_addr                                         "0xB8000F48"
#define  TOPBIST_fcic_bisr_done_reg                                              0xB8000F48
#define  TOPBIST_fcic_bisr_done_inst_addr                                        "0x000D"
#define  set_TOPBIST_fcic_bisr_done_reg(data)                                    (*((volatile unsigned int*)TOPBIST_fcic_bisr_done_reg)=data)
#define  get_TOPBIST_fcic_bisr_done_reg                                          (*((volatile unsigned int*)TOPBIST_fcic_bisr_done_reg))
#define  TOPBIST_fcic_bisr_done_fcic1_bisr_done_shift                            (0)
#define  TOPBIST_fcic_bisr_done_fcic1_bisr_done_mask                             (0x00000001)
#define  TOPBIST_fcic_bisr_done_fcic1_bisr_done(data)                            (0x00000001&(data))
#define  TOPBIST_fcic_bisr_done_get_fcic1_bisr_done(data)                        (0x00000001&(data))

#define  TOPBIST_memc_bisr_rstn                                                 0x18000F50
#define  TOPBIST_memc_bisr_rstn_reg_addr                                         "0xB8000F50"
#define  TOPBIST_memc_bisr_rstn_reg                                              0xB8000F50
#define  TOPBIST_memc_bisr_rstn_inst_addr                                        "0x000E"
#define  set_TOPBIST_memc_bisr_rstn_reg(data)                                    (*((volatile unsigned int*)TOPBIST_memc_bisr_rstn_reg)=data)
#define  get_TOPBIST_memc_bisr_rstn_reg                                          (*((volatile unsigned int*)TOPBIST_memc_bisr_rstn_reg))
#define  TOPBIST_memc_bisr_rstn_lbmc_lfl_bisr_rstn_7_shift                       (7)
#define  TOPBIST_memc_bisr_rstn_lbmc_lfl_bisr_rstn_6_shift                       (6)
#define  TOPBIST_memc_bisr_rstn_lbmc_lfl_bisr_rstn_5_shift                       (5)
#define  TOPBIST_memc_bisr_rstn_lbmc_lfl_bisr_rstn_4_shift                       (4)
#define  TOPBIST_memc_bisr_rstn_lbmc_lfl_bisr_rstn_3_shift                       (3)
#define  TOPBIST_memc_bisr_rstn_lbmc_lfl_bisr_rstn_2_shift                       (2)
#define  TOPBIST_memc_bisr_rstn_lbmc_lfl_bisr_rstn_1_shift                       (1)
#define  TOPBIST_memc_bisr_rstn_lbmc_lfl_bisr_rstn_0_shift                       (0)
#define  TOPBIST_memc_bisr_rstn_lbmc_lfl_bisr_rstn_7_mask                        (0x00000080)
#define  TOPBIST_memc_bisr_rstn_lbmc_lfl_bisr_rstn_6_mask                        (0x00000040)
#define  TOPBIST_memc_bisr_rstn_lbmc_lfl_bisr_rstn_5_mask                        (0x00000020)
#define  TOPBIST_memc_bisr_rstn_lbmc_lfl_bisr_rstn_4_mask                        (0x00000010)
#define  TOPBIST_memc_bisr_rstn_lbmc_lfl_bisr_rstn_3_mask                        (0x00000008)
#define  TOPBIST_memc_bisr_rstn_lbmc_lfl_bisr_rstn_2_mask                        (0x00000004)
#define  TOPBIST_memc_bisr_rstn_lbmc_lfl_bisr_rstn_1_mask                        (0x00000002)
#define  TOPBIST_memc_bisr_rstn_lbmc_lfl_bisr_rstn_0_mask                        (0x00000001)
#define  TOPBIST_memc_bisr_rstn_lbmc_lfl_bisr_rstn_7(data)                       (0x00000080&((data)<<7))
#define  TOPBIST_memc_bisr_rstn_lbmc_lfl_bisr_rstn_6(data)                       (0x00000040&((data)<<6))
#define  TOPBIST_memc_bisr_rstn_lbmc_lfl_bisr_rstn_5(data)                       (0x00000020&((data)<<5))
#define  TOPBIST_memc_bisr_rstn_lbmc_lfl_bisr_rstn_4(data)                       (0x00000010&((data)<<4))
#define  TOPBIST_memc_bisr_rstn_lbmc_lfl_bisr_rstn_3(data)                       (0x00000008&((data)<<3))
#define  TOPBIST_memc_bisr_rstn_lbmc_lfl_bisr_rstn_2(data)                       (0x00000004&((data)<<2))
#define  TOPBIST_memc_bisr_rstn_lbmc_lfl_bisr_rstn_1(data)                       (0x00000002&((data)<<1))
#define  TOPBIST_memc_bisr_rstn_lbmc_lfl_bisr_rstn_0(data)                       (0x00000001&(data))
#define  TOPBIST_memc_bisr_rstn_get_lbmc_lfl_bisr_rstn_7(data)                   ((0x00000080&(data))>>7)
#define  TOPBIST_memc_bisr_rstn_get_lbmc_lfl_bisr_rstn_6(data)                   ((0x00000040&(data))>>6)
#define  TOPBIST_memc_bisr_rstn_get_lbmc_lfl_bisr_rstn_5(data)                   ((0x00000020&(data))>>5)
#define  TOPBIST_memc_bisr_rstn_get_lbmc_lfl_bisr_rstn_4(data)                   ((0x00000010&(data))>>4)
#define  TOPBIST_memc_bisr_rstn_get_lbmc_lfl_bisr_rstn_3(data)                   ((0x00000008&(data))>>3)
#define  TOPBIST_memc_bisr_rstn_get_lbmc_lfl_bisr_rstn_2(data)                   ((0x00000004&(data))>>2)
#define  TOPBIST_memc_bisr_rstn_get_lbmc_lfl_bisr_rstn_1(data)                   ((0x00000002&(data))>>1)
#define  TOPBIST_memc_bisr_rstn_get_lbmc_lfl_bisr_rstn_0(data)                   (0x00000001&(data))

#define  TOPBIST_memc_bisr_remap                                                0x18000F54
#define  TOPBIST_memc_bisr_remap_reg_addr                                        "0xB8000F54"
#define  TOPBIST_memc_bisr_remap_reg                                             0xB8000F54
#define  TOPBIST_memc_bisr_remap_inst_addr                                       "0x000F"
#define  set_TOPBIST_memc_bisr_remap_reg(data)                                   (*((volatile unsigned int*)TOPBIST_memc_bisr_remap_reg)=data)
#define  get_TOPBIST_memc_bisr_remap_reg                                         (*((volatile unsigned int*)TOPBIST_memc_bisr_remap_reg))
#define  TOPBIST_memc_bisr_remap_lbmc_lfl_hold_remap_7_shift                     (7)
#define  TOPBIST_memc_bisr_remap_lbmc_lfl_hold_remap_6_shift                     (6)
#define  TOPBIST_memc_bisr_remap_lbmc_lfl_hold_remap_5_shift                     (5)
#define  TOPBIST_memc_bisr_remap_lbmc_lfl_hold_remap_4_shift                     (4)
#define  TOPBIST_memc_bisr_remap_lbmc_lfl_hold_remap_3_shift                     (3)
#define  TOPBIST_memc_bisr_remap_lbmc_lfl_hold_remap_2_shift                     (2)
#define  TOPBIST_memc_bisr_remap_lbmc_lfl_hold_remap_1_shift                     (1)
#define  TOPBIST_memc_bisr_remap_lbmc_lfl_hold_remap_0_shift                     (0)
#define  TOPBIST_memc_bisr_remap_lbmc_lfl_hold_remap_7_mask                      (0x00000080)
#define  TOPBIST_memc_bisr_remap_lbmc_lfl_hold_remap_6_mask                      (0x00000040)
#define  TOPBIST_memc_bisr_remap_lbmc_lfl_hold_remap_5_mask                      (0x00000020)
#define  TOPBIST_memc_bisr_remap_lbmc_lfl_hold_remap_4_mask                      (0x00000010)
#define  TOPBIST_memc_bisr_remap_lbmc_lfl_hold_remap_3_mask                      (0x00000008)
#define  TOPBIST_memc_bisr_remap_lbmc_lfl_hold_remap_2_mask                      (0x00000004)
#define  TOPBIST_memc_bisr_remap_lbmc_lfl_hold_remap_1_mask                      (0x00000002)
#define  TOPBIST_memc_bisr_remap_lbmc_lfl_hold_remap_0_mask                      (0x00000001)
#define  TOPBIST_memc_bisr_remap_lbmc_lfl_hold_remap_7(data)                     (0x00000080&((data)<<7))
#define  TOPBIST_memc_bisr_remap_lbmc_lfl_hold_remap_6(data)                     (0x00000040&((data)<<6))
#define  TOPBIST_memc_bisr_remap_lbmc_lfl_hold_remap_5(data)                     (0x00000020&((data)<<5))
#define  TOPBIST_memc_bisr_remap_lbmc_lfl_hold_remap_4(data)                     (0x00000010&((data)<<4))
#define  TOPBIST_memc_bisr_remap_lbmc_lfl_hold_remap_3(data)                     (0x00000008&((data)<<3))
#define  TOPBIST_memc_bisr_remap_lbmc_lfl_hold_remap_2(data)                     (0x00000004&((data)<<2))
#define  TOPBIST_memc_bisr_remap_lbmc_lfl_hold_remap_1(data)                     (0x00000002&((data)<<1))
#define  TOPBIST_memc_bisr_remap_lbmc_lfl_hold_remap_0(data)                     (0x00000001&(data))
#define  TOPBIST_memc_bisr_remap_get_lbmc_lfl_hold_remap_7(data)                 ((0x00000080&(data))>>7)
#define  TOPBIST_memc_bisr_remap_get_lbmc_lfl_hold_remap_6(data)                 ((0x00000040&(data))>>6)
#define  TOPBIST_memc_bisr_remap_get_lbmc_lfl_hold_remap_5(data)                 ((0x00000020&(data))>>5)
#define  TOPBIST_memc_bisr_remap_get_lbmc_lfl_hold_remap_4(data)                 ((0x00000010&(data))>>4)
#define  TOPBIST_memc_bisr_remap_get_lbmc_lfl_hold_remap_3(data)                 ((0x00000008&(data))>>3)
#define  TOPBIST_memc_bisr_remap_get_lbmc_lfl_hold_remap_2(data)                 ((0x00000004&(data))>>2)
#define  TOPBIST_memc_bisr_remap_get_lbmc_lfl_hold_remap_1(data)                 ((0x00000002&(data))>>1)
#define  TOPBIST_memc_bisr_remap_get_lbmc_lfl_hold_remap_0(data)                 (0x00000001&(data))

#define  TOPBIST_memc_bisr_done                                                 0x18000F58
#define  TOPBIST_memc_bisr_done_reg_addr                                         "0xB8000F58"
#define  TOPBIST_memc_bisr_done_reg                                              0xB8000F58
#define  TOPBIST_memc_bisr_done_inst_addr                                        "0x0010"
#define  set_TOPBIST_memc_bisr_done_reg(data)                                    (*((volatile unsigned int*)TOPBIST_memc_bisr_done_reg)=data)
#define  get_TOPBIST_memc_bisr_done_reg                                          (*((volatile unsigned int*)TOPBIST_memc_bisr_done_reg))
#define  TOPBIST_memc_bisr_done_lbmc_lfl_bisr_done_7_shift                       (7)
#define  TOPBIST_memc_bisr_done_lbmc_lfl_bisr_done_6_shift                       (6)
#define  TOPBIST_memc_bisr_done_lbmc_lfl_bisr_done_5_shift                       (5)
#define  TOPBIST_memc_bisr_done_lbmc_lfl_bisr_done_4_shift                       (4)
#define  TOPBIST_memc_bisr_done_lbmc_lfl_bisr_done_3_shift                       (3)
#define  TOPBIST_memc_bisr_done_lbmc_lfl_bisr_done_2_shift                       (2)
#define  TOPBIST_memc_bisr_done_lbmc_lfl_bisr_done_1_shift                       (1)
#define  TOPBIST_memc_bisr_done_lbmc_lfl_bisr_done_0_shift                       (0)
#define  TOPBIST_memc_bisr_done_lbmc_lfl_bisr_done_7_mask                        (0x00000080)
#define  TOPBIST_memc_bisr_done_lbmc_lfl_bisr_done_6_mask                        (0x00000040)
#define  TOPBIST_memc_bisr_done_lbmc_lfl_bisr_done_5_mask                        (0x00000020)
#define  TOPBIST_memc_bisr_done_lbmc_lfl_bisr_done_4_mask                        (0x00000010)
#define  TOPBIST_memc_bisr_done_lbmc_lfl_bisr_done_3_mask                        (0x00000008)
#define  TOPBIST_memc_bisr_done_lbmc_lfl_bisr_done_2_mask                        (0x00000004)
#define  TOPBIST_memc_bisr_done_lbmc_lfl_bisr_done_1_mask                        (0x00000002)
#define  TOPBIST_memc_bisr_done_lbmc_lfl_bisr_done_0_mask                        (0x00000001)
#define  TOPBIST_memc_bisr_done_lbmc_lfl_bisr_done_7(data)                       (0x00000080&((data)<<7))
#define  TOPBIST_memc_bisr_done_lbmc_lfl_bisr_done_6(data)                       (0x00000040&((data)<<6))
#define  TOPBIST_memc_bisr_done_lbmc_lfl_bisr_done_5(data)                       (0x00000020&((data)<<5))
#define  TOPBIST_memc_bisr_done_lbmc_lfl_bisr_done_4(data)                       (0x00000010&((data)<<4))
#define  TOPBIST_memc_bisr_done_lbmc_lfl_bisr_done_3(data)                       (0x00000008&((data)<<3))
#define  TOPBIST_memc_bisr_done_lbmc_lfl_bisr_done_2(data)                       (0x00000004&((data)<<2))
#define  TOPBIST_memc_bisr_done_lbmc_lfl_bisr_done_1(data)                       (0x00000002&((data)<<1))
#define  TOPBIST_memc_bisr_done_lbmc_lfl_bisr_done_0(data)                       (0x00000001&(data))
#define  TOPBIST_memc_bisr_done_get_lbmc_lfl_bisr_done_7(data)                   ((0x00000080&(data))>>7)
#define  TOPBIST_memc_bisr_done_get_lbmc_lfl_bisr_done_6(data)                   ((0x00000040&(data))>>6)
#define  TOPBIST_memc_bisr_done_get_lbmc_lfl_bisr_done_5(data)                   ((0x00000020&(data))>>5)
#define  TOPBIST_memc_bisr_done_get_lbmc_lfl_bisr_done_4(data)                   ((0x00000010&(data))>>4)
#define  TOPBIST_memc_bisr_done_get_lbmc_lfl_bisr_done_3(data)                   ((0x00000008&(data))>>3)
#define  TOPBIST_memc_bisr_done_get_lbmc_lfl_bisr_done_2(data)                   ((0x00000004&(data))>>2)
#define  TOPBIST_memc_bisr_done_get_lbmc_lfl_bisr_done_1(data)                   ((0x00000002&(data))>>1)
#define  TOPBIST_memc_bisr_done_get_lbmc_lfl_bisr_done_0(data)                   (0x00000001&(data))

#define  TOPBIST_BIST_SET_ON                                                    0x18000FF0
#define  TOPBIST_BIST_SET_ON_reg_addr                                            "0xB8000FF0"
#define  TOPBIST_BIST_SET_ON_reg                                                 0xB8000FF0
#define  TOPBIST_BIST_SET_ON_inst_addr                                           "0x0011"
#define  set_TOPBIST_BIST_SET_ON_reg(data)                                       (*((volatile unsigned int*)TOPBIST_BIST_SET_ON_reg)=data)
#define  get_TOPBIST_BIST_SET_ON_reg                                             (*((volatile unsigned int*)TOPBIST_BIST_SET_ON_reg))
#define  TOPBIST_BIST_SET_ON_chip_bist_set_on_shift                              (31)
#define  TOPBIST_BIST_SET_ON_sb2_bist_set_on_shift                               (5)
#define  TOPBIST_BIST_SET_ON_bridge_bist_set_on_shift                            (4)
#define  TOPBIST_BIST_SET_ON_acpu_bist_set_on_shift                              (2)
#define  TOPBIST_BIST_SET_ON_vcpu_bist_set_on_shift                              (1)
#define  TOPBIST_BIST_SET_ON_chip_bist_set_on_mask                               (0x80000000)
#define  TOPBIST_BIST_SET_ON_sb2_bist_set_on_mask                                (0x00000020)
#define  TOPBIST_BIST_SET_ON_bridge_bist_set_on_mask                             (0x00000010)
#define  TOPBIST_BIST_SET_ON_acpu_bist_set_on_mask                               (0x00000004)
#define  TOPBIST_BIST_SET_ON_vcpu_bist_set_on_mask                               (0x00000002)
#define  TOPBIST_BIST_SET_ON_chip_bist_set_on(data)                              (0x80000000&((data)<<31))
#define  TOPBIST_BIST_SET_ON_sb2_bist_set_on(data)                               (0x00000020&((data)<<5))
#define  TOPBIST_BIST_SET_ON_bridge_bist_set_on(data)                            (0x00000010&((data)<<4))
#define  TOPBIST_BIST_SET_ON_acpu_bist_set_on(data)                              (0x00000004&((data)<<2))
#define  TOPBIST_BIST_SET_ON_vcpu_bist_set_on(data)                              (0x00000002&((data)<<1))
#define  TOPBIST_BIST_SET_ON_get_chip_bist_set_on(data)                          ((0x80000000&(data))>>31)
#define  TOPBIST_BIST_SET_ON_get_sb2_bist_set_on(data)                           ((0x00000020&(data))>>5)
#define  TOPBIST_BIST_SET_ON_get_bridge_bist_set_on(data)                        ((0x00000010&(data))>>4)
#define  TOPBIST_BIST_SET_ON_get_acpu_bist_set_on(data)                          ((0x00000004&(data))>>2)
#define  TOPBIST_BIST_SET_ON_get_vcpu_bist_set_on(data)                          ((0x00000002&(data))>>1)

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======TOPBIST register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  di_li6_bisr_rstn:1;
        RBus_UInt32  spnr_bisr_rstn:1;
    };
}topbist_dispi_bisr_rstn_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}topbist_dispd_bisr_rstn_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  ngh_2_bisr_rstn:1;
        RBus_UInt32  ngh_bisr_rstn:1;
        RBus_UInt32  ve_cah_bisr_rstn:1;
    };
}topbist_ve_bisr_rstn_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  scpu_bisr_pwr_rstn:2;
        RBus_UInt32  acpu_bisr_pwr_rstn:1;
        RBus_UInt32  vcpu_bisr_pwr_rstn:1;
        RBus_UInt32  acpu_bisr_3_rstn:1;
        RBus_UInt32  acpu_bisr_2_rstn:1;
        RBus_UInt32  acpu_bisr_1_rstn:1;
        RBus_UInt32  acpu_bisr_0_rstn:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dummy18000f0c_10:1;
        RBus_UInt32  res3:4;
        RBus_UInt32  res4:2;
        RBus_UInt32  scpu_bisr_rstn:2;
        RBus_UInt32  vcpu_bisr_rstn:1;
        RBus_UInt32  res5:1;
    };
}topbist_cpu_bisr_rstn_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  di_li6_bisr_remap:1;
        RBus_UInt32  spnr_bisr_remap:1;
    };
}topbist_dispi_bisr_remap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}topbist_dispd_bisr_remap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  ngh_2_bisr_remap:1;
        RBus_UInt32  ngh_bisr_remap:1;
        RBus_UInt32  ve_cah_bisr_remap:1;
    };
}topbist_ve_bisr_remap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  acpu_bisr_3_remap:1;
        RBus_UInt32  acpu_bisr_2_remap:1;
        RBus_UInt32  acpu_bisr_1_remap:1;
        RBus_UInt32  acpu_bisr_0_remap:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dummy18000f1c_10:1;
        RBus_UInt32  res3:6;
        RBus_UInt32  scpu_bisr_remap:2;
        RBus_UInt32  vcpu_bisr_remap:1;
        RBus_UInt32  res4:1;
    };
}topbist_cpu_bisr_remap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  di_li6_bisr_done:1;
        RBus_UInt32  spnr_bisr_done:1;
    };
}topbist_dispi_bisr_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}topbist_dispd_bisr_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  ngh_2_bisr_done:1;
        RBus_UInt32  ngh_bisr_done:1;
        RBus_UInt32  ve_cah_bisr_done:1;
    };
}topbist_ve_bisr_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  acpu_bisr_3_done:1;
        RBus_UInt32  acpu_bisr_2_done:1;
        RBus_UInt32  acpu_bisr_1_done:1;
        RBus_UInt32  acpu_bisr_0_done:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  res5:3;
        RBus_UInt32  scpu_bisr_done:2;
        RBus_UInt32  vcpu_bisr_done:1;
        RBus_UInt32  res6:1;
    };
}topbist_cpu_bisr_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rlvt_7t_dss_rst_n:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  rlvt_7t_ro_sel:3;
        RBus_UInt32  rlvt_7t_wire_sel:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  rlvt_7t_ready:1;
        RBus_UInt32  rlvt_7t_count_out:20;
    };
}topbist_ss_7t_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  rlvt_7t_speed_en:1;
        RBus_UInt32  rlvt_7t_data_in:20;
        RBus_UInt32  res2:3;
        RBus_UInt32  rlvt_7t_wsort_go:1;
    };
}topbist_ss_7t_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  fcic1_bisr_rstn:1;
    };
}topbist_fcic_bisr_rstn_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  fcic1_bisr_remap:1;
    };
}topbist_fcic_bisr_remap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  fcic1_bisr_done:1;
    };
}topbist_fcic_bisr_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lbmc_lfl_bisr_rstn_7:1;
        RBus_UInt32  lbmc_lfl_bisr_rstn_6:1;
        RBus_UInt32  lbmc_lfl_bisr_rstn_5:1;
        RBus_UInt32  lbmc_lfl_bisr_rstn_4:1;
        RBus_UInt32  lbmc_lfl_bisr_rstn_3:1;
        RBus_UInt32  lbmc_lfl_bisr_rstn_2:1;
        RBus_UInt32  lbmc_lfl_bisr_rstn_1:1;
        RBus_UInt32  lbmc_lfl_bisr_rstn_0:1;
    };
}topbist_memc_bisr_rstn_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lbmc_lfl_hold_remap_7:1;
        RBus_UInt32  lbmc_lfl_hold_remap_6:1;
        RBus_UInt32  lbmc_lfl_hold_remap_5:1;
        RBus_UInt32  lbmc_lfl_hold_remap_4:1;
        RBus_UInt32  lbmc_lfl_hold_remap_3:1;
        RBus_UInt32  lbmc_lfl_hold_remap_2:1;
        RBus_UInt32  lbmc_lfl_hold_remap_1:1;
        RBus_UInt32  lbmc_lfl_hold_remap_0:1;
    };
}topbist_memc_bisr_remap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lbmc_lfl_bisr_done_7:1;
        RBus_UInt32  lbmc_lfl_bisr_done_6:1;
        RBus_UInt32  lbmc_lfl_bisr_done_5:1;
        RBus_UInt32  lbmc_lfl_bisr_done_4:1;
        RBus_UInt32  lbmc_lfl_bisr_done_3:1;
        RBus_UInt32  lbmc_lfl_bisr_done_2:1;
        RBus_UInt32  lbmc_lfl_bisr_done_1:1;
        RBus_UInt32  lbmc_lfl_bisr_done_0:1;
    };
}topbist_memc_bisr_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chip_bist_set_on:1;
        RBus_UInt32  res1:24;
        RBus_UInt32  res2:1;
        RBus_UInt32  sb2_bist_set_on:1;
        RBus_UInt32  bridge_bist_set_on:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  acpu_bist_set_on:1;
        RBus_UInt32  vcpu_bist_set_on:1;
        RBus_UInt32  res4:1;
    };
}topbist_bist_set_on_RBUS;

#else //apply LITTLE_ENDIAN

//======TOPBIST register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  spnr_bisr_rstn:1;
        RBus_UInt32  di_li6_bisr_rstn:1;
        RBus_UInt32  res1:30;
    };
}topbist_dispi_bisr_rstn_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}topbist_dispd_bisr_rstn_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_cah_bisr_rstn:1;
        RBus_UInt32  ngh_bisr_rstn:1;
        RBus_UInt32  ngh_2_bisr_rstn:1;
        RBus_UInt32  res1:29;
    };
}topbist_ve_bisr_rstn_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  vcpu_bisr_rstn:1;
        RBus_UInt32  scpu_bisr_rstn:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  res3:4;
        RBus_UInt32  dummy18000f0c_10:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  acpu_bisr_0_rstn:1;
        RBus_UInt32  acpu_bisr_1_rstn:1;
        RBus_UInt32  acpu_bisr_2_rstn:1;
        RBus_UInt32  acpu_bisr_3_rstn:1;
        RBus_UInt32  vcpu_bisr_pwr_rstn:1;
        RBus_UInt32  acpu_bisr_pwr_rstn:1;
        RBus_UInt32  scpu_bisr_pwr_rstn:2;
        RBus_UInt32  res5:12;
    };
}topbist_cpu_bisr_rstn_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  spnr_bisr_remap:1;
        RBus_UInt32  di_li6_bisr_remap:1;
        RBus_UInt32  res1:30;
    };
}topbist_dispi_bisr_remap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}topbist_dispd_bisr_remap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_cah_bisr_remap:1;
        RBus_UInt32  ngh_bisr_remap:1;
        RBus_UInt32  ngh_2_bisr_remap:1;
        RBus_UInt32  res1:29;
    };
}topbist_ve_bisr_remap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  vcpu_bisr_remap:1;
        RBus_UInt32  scpu_bisr_remap:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  dummy18000f1c_10:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  acpu_bisr_0_remap:1;
        RBus_UInt32  acpu_bisr_1_remap:1;
        RBus_UInt32  acpu_bisr_2_remap:1;
        RBus_UInt32  acpu_bisr_3_remap:1;
        RBus_UInt32  res4:16;
    };
}topbist_cpu_bisr_remap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  spnr_bisr_done:1;
        RBus_UInt32  di_li6_bisr_done:1;
        RBus_UInt32  res1:30;
    };
}topbist_dispi_bisr_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}topbist_dispd_bisr_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_cah_bisr_done:1;
        RBus_UInt32  ngh_bisr_done:1;
        RBus_UInt32  ngh_2_bisr_done:1;
        RBus_UInt32  res1:29;
    };
}topbist_ve_bisr_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  vcpu_bisr_done:1;
        RBus_UInt32  scpu_bisr_done:2;
        RBus_UInt32  res2:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  acpu_bisr_0_done:1;
        RBus_UInt32  acpu_bisr_1_done:1;
        RBus_UInt32  acpu_bisr_2_done:1;
        RBus_UInt32  acpu_bisr_3_done:1;
        RBus_UInt32  res6:16;
    };
}topbist_cpu_bisr_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rlvt_7t_count_out:20;
        RBus_UInt32  rlvt_7t_ready:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  rlvt_7t_wire_sel:1;
        RBus_UInt32  rlvt_7t_ro_sel:3;
        RBus_UInt32  res2:3;
        RBus_UInt32  rlvt_7t_dss_rst_n:1;
    };
}topbist_ss_7t_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rlvt_7t_wsort_go:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  rlvt_7t_data_in:20;
        RBus_UInt32  rlvt_7t_speed_en:1;
        RBus_UInt32  res2:7;
    };
}topbist_ss_7t_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic1_bisr_rstn:1;
        RBus_UInt32  res1:31;
    };
}topbist_fcic_bisr_rstn_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic1_bisr_remap:1;
        RBus_UInt32  res1:31;
    };
}topbist_fcic_bisr_remap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic1_bisr_done:1;
        RBus_UInt32  res1:31;
    };
}topbist_fcic_bisr_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_lfl_bisr_rstn_0:1;
        RBus_UInt32  lbmc_lfl_bisr_rstn_1:1;
        RBus_UInt32  lbmc_lfl_bisr_rstn_2:1;
        RBus_UInt32  lbmc_lfl_bisr_rstn_3:1;
        RBus_UInt32  lbmc_lfl_bisr_rstn_4:1;
        RBus_UInt32  lbmc_lfl_bisr_rstn_5:1;
        RBus_UInt32  lbmc_lfl_bisr_rstn_6:1;
        RBus_UInt32  lbmc_lfl_bisr_rstn_7:1;
        RBus_UInt32  res1:24;
    };
}topbist_memc_bisr_rstn_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_lfl_hold_remap_0:1;
        RBus_UInt32  lbmc_lfl_hold_remap_1:1;
        RBus_UInt32  lbmc_lfl_hold_remap_2:1;
        RBus_UInt32  lbmc_lfl_hold_remap_3:1;
        RBus_UInt32  lbmc_lfl_hold_remap_4:1;
        RBus_UInt32  lbmc_lfl_hold_remap_5:1;
        RBus_UInt32  lbmc_lfl_hold_remap_6:1;
        RBus_UInt32  lbmc_lfl_hold_remap_7:1;
        RBus_UInt32  res1:24;
    };
}topbist_memc_bisr_remap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_lfl_bisr_done_0:1;
        RBus_UInt32  lbmc_lfl_bisr_done_1:1;
        RBus_UInt32  lbmc_lfl_bisr_done_2:1;
        RBus_UInt32  lbmc_lfl_bisr_done_3:1;
        RBus_UInt32  lbmc_lfl_bisr_done_4:1;
        RBus_UInt32  lbmc_lfl_bisr_done_5:1;
        RBus_UInt32  lbmc_lfl_bisr_done_6:1;
        RBus_UInt32  lbmc_lfl_bisr_done_7:1;
        RBus_UInt32  res1:24;
    };
}topbist_memc_bisr_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  vcpu_bist_set_on:1;
        RBus_UInt32  acpu_bist_set_on:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  bridge_bist_set_on:1;
        RBus_UInt32  sb2_bist_set_on:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:24;
        RBus_UInt32  chip_bist_set_on:1;
    };
}topbist_bist_set_on_RBUS;




#endif 


#endif 
