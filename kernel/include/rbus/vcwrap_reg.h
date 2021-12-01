/**
* @file Merlin5-DesignSpec-VCPU_wrapper for dv only
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_VCWRAP_REG_H_
#define _RBUS_VCWRAP_REG_H_

#include "rbus_types.h"



//  VCWRAP Register Address
#define  VCWRAP_VC_SLEEP_CTRL                                                   0x18001088
#define  VCWRAP_VC_SLEEP_CTRL_reg_addr                                           "0xB8001088"
#define  VCWRAP_VC_SLEEP_CTRL_reg                                                0xB8001088
#define  VCWRAP_VC_SLEEP_CTRL_inst_addr                                          "0x0000"
#define  set_VCWRAP_VC_SLEEP_CTRL_reg(data)                                      (*((volatile unsigned int*)VCWRAP_VC_SLEEP_CTRL_reg)=data)
#define  get_VCWRAP_VC_SLEEP_CTRL_reg                                            (*((volatile unsigned int*)VCWRAP_VC_SLEEP_CTRL_reg))
#define  VCWRAP_VC_SLEEP_CTRL_ext_sleepreq_r_shift                               (0)
#define  VCWRAP_VC_SLEEP_CTRL_ext_sleepreq_r_mask                                (0x00000001)
#define  VCWRAP_VC_SLEEP_CTRL_ext_sleepreq_r(data)                               (0x00000001&(data))
#define  VCWRAP_VC_SLEEP_CTRL_get_ext_sleepreq_r(data)                           (0x00000001&(data))

#define  VCWRAP_VC_SLEEP_STATUS                                                 0x1800108C
#define  VCWRAP_VC_SLEEP_STATUS_reg_addr                                         "0xB800108C"
#define  VCWRAP_VC_SLEEP_STATUS_reg                                              0xB800108C
#define  VCWRAP_VC_SLEEP_STATUS_inst_addr                                        "0x0001"
#define  set_VCWRAP_VC_SLEEP_STATUS_reg(data)                                    (*((volatile unsigned int*)VCWRAP_VC_SLEEP_STATUS_reg)=data)
#define  get_VCWRAP_VC_SLEEP_STATUS_reg                                          (*((volatile unsigned int*)VCWRAP_VC_SLEEP_STATUS_reg))
#define  VCWRAP_VC_SLEEP_STATUS_sl_sleepsys_r_shift                              (0)
#define  VCWRAP_VC_SLEEP_STATUS_sl_sleepsys_r_mask                               (0x00000001)
#define  VCWRAP_VC_SLEEP_STATUS_sl_sleepsys_r(data)                              (0x00000001&(data))
#define  VCWRAP_VC_SLEEP_STATUS_get_sl_sleepsys_r(data)                          (0x00000001&(data))

#define  VCWRAP_WRAPPER_CTRL                                                    0x1801A018
#define  VCWRAP_WRAPPER_CTRL_reg_addr                                            "0xB801A018"
#define  VCWRAP_WRAPPER_CTRL_reg                                                 0xB801A018
#define  VCWRAP_WRAPPER_CTRL_inst_addr                                           "0x0002"
#define  set_VCWRAP_WRAPPER_CTRL_reg(data)                                       (*((volatile unsigned int*)VCWRAP_WRAPPER_CTRL_reg)=data)
#define  get_VCWRAP_WRAPPER_CTRL_reg                                             (*((volatile unsigned int*)VCWRAP_WRAPPER_CTRL_reg))
#define  VCWRAP_WRAPPER_CTRL_write_en7_shift                                     (28)
#define  VCWRAP_WRAPPER_CTRL_ac2_in_order_shift                                  (27)
#define  VCWRAP_WRAPPER_CTRL_ac2_bypass_shift                                    (26)
#define  VCWRAP_WRAPPER_CTRL_ac2_merge_shift                                     (25)
#define  VCWRAP_WRAPPER_CTRL_write_en6_shift                                     (24)
#define  VCWRAP_WRAPPER_CTRL_kc_in_order_shift                                   (23)
#define  VCWRAP_WRAPPER_CTRL_kc_bypass_shift                                     (22)
#define  VCWRAP_WRAPPER_CTRL_kc_merge_shift                                      (21)
#define  VCWRAP_WRAPPER_CTRL_kc_merge_enhance_shift                              (20)
#define  VCWRAP_WRAPPER_CTRL_write_en5_shift                                     (19)
#define  VCWRAP_WRAPPER_CTRL_vc2_in_order_shift                                  (18)
#define  VCWRAP_WRAPPER_CTRL_vc2_bypass_shift                                    (17)
#define  VCWRAP_WRAPPER_CTRL_vc2_merge_shift                                     (16)
#define  VCWRAP_WRAPPER_CTRL_write_en4_shift                                     (13)
#define  VCWRAP_WRAPPER_CTRL_mult_wr_en_shift                                    (12)
#define  VCWRAP_WRAPPER_CTRL_write_en3_shift                                     (11)
#define  VCWRAP_WRAPPER_CTRL_ac_in_order_shift                                   (10)
#define  VCWRAP_WRAPPER_CTRL_ac_bypass_shift                                     (9)
#define  VCWRAP_WRAPPER_CTRL_ac_merge_shift                                      (8)
#define  VCWRAP_WRAPPER_CTRL_write_en2_shift                                     (7)
#define  VCWRAP_WRAPPER_CTRL_vc_in_order_shift                                   (6)
#define  VCWRAP_WRAPPER_CTRL_vc_bypass_shift                                     (5)
#define  VCWRAP_WRAPPER_CTRL_vc_merge_shift                                      (4)
#define  VCWRAP_WRAPPER_CTRL_write_en7_mask                                      (0x10000000)
#define  VCWRAP_WRAPPER_CTRL_ac2_in_order_mask                                   (0x08000000)
#define  VCWRAP_WRAPPER_CTRL_ac2_bypass_mask                                     (0x04000000)
#define  VCWRAP_WRAPPER_CTRL_ac2_merge_mask                                      (0x02000000)
#define  VCWRAP_WRAPPER_CTRL_write_en6_mask                                      (0x01000000)
#define  VCWRAP_WRAPPER_CTRL_kc_in_order_mask                                    (0x00800000)
#define  VCWRAP_WRAPPER_CTRL_kc_bypass_mask                                      (0x00400000)
#define  VCWRAP_WRAPPER_CTRL_kc_merge_mask                                       (0x00200000)
#define  VCWRAP_WRAPPER_CTRL_kc_merge_enhance_mask                               (0x00100000)
#define  VCWRAP_WRAPPER_CTRL_write_en5_mask                                      (0x00080000)
#define  VCWRAP_WRAPPER_CTRL_vc2_in_order_mask                                   (0x00040000)
#define  VCWRAP_WRAPPER_CTRL_vc2_bypass_mask                                     (0x00020000)
#define  VCWRAP_WRAPPER_CTRL_vc2_merge_mask                                      (0x00010000)
#define  VCWRAP_WRAPPER_CTRL_write_en4_mask                                      (0x00002000)
#define  VCWRAP_WRAPPER_CTRL_mult_wr_en_mask                                     (0x00001000)
#define  VCWRAP_WRAPPER_CTRL_write_en3_mask                                      (0x00000800)
#define  VCWRAP_WRAPPER_CTRL_ac_in_order_mask                                    (0x00000400)
#define  VCWRAP_WRAPPER_CTRL_ac_bypass_mask                                      (0x00000200)
#define  VCWRAP_WRAPPER_CTRL_ac_merge_mask                                       (0x00000100)
#define  VCWRAP_WRAPPER_CTRL_write_en2_mask                                      (0x00000080)
#define  VCWRAP_WRAPPER_CTRL_vc_in_order_mask                                    (0x00000040)
#define  VCWRAP_WRAPPER_CTRL_vc_bypass_mask                                      (0x00000020)
#define  VCWRAP_WRAPPER_CTRL_vc_merge_mask                                       (0x00000010)
#define  VCWRAP_WRAPPER_CTRL_write_en7(data)                                     (0x10000000&((data)<<28))
#define  VCWRAP_WRAPPER_CTRL_ac2_in_order(data)                                  (0x08000000&((data)<<27))
#define  VCWRAP_WRAPPER_CTRL_ac2_bypass(data)                                    (0x04000000&((data)<<26))
#define  VCWRAP_WRAPPER_CTRL_ac2_merge(data)                                     (0x02000000&((data)<<25))
#define  VCWRAP_WRAPPER_CTRL_write_en6(data)                                     (0x01000000&((data)<<24))
#define  VCWRAP_WRAPPER_CTRL_kc_in_order(data)                                   (0x00800000&((data)<<23))
#define  VCWRAP_WRAPPER_CTRL_kc_bypass(data)                                     (0x00400000&((data)<<22))
#define  VCWRAP_WRAPPER_CTRL_kc_merge(data)                                      (0x00200000&((data)<<21))
#define  VCWRAP_WRAPPER_CTRL_kc_merge_enhance(data)                              (0x00100000&((data)<<20))
#define  VCWRAP_WRAPPER_CTRL_write_en5(data)                                     (0x00080000&((data)<<19))
#define  VCWRAP_WRAPPER_CTRL_vc2_in_order(data)                                  (0x00040000&((data)<<18))
#define  VCWRAP_WRAPPER_CTRL_vc2_bypass(data)                                    (0x00020000&((data)<<17))
#define  VCWRAP_WRAPPER_CTRL_vc2_merge(data)                                     (0x00010000&((data)<<16))
#define  VCWRAP_WRAPPER_CTRL_write_en4(data)                                     (0x00002000&((data)<<13))
#define  VCWRAP_WRAPPER_CTRL_mult_wr_en(data)                                    (0x00001000&((data)<<12))
#define  VCWRAP_WRAPPER_CTRL_write_en3(data)                                     (0x00000800&((data)<<11))
#define  VCWRAP_WRAPPER_CTRL_ac_in_order(data)                                   (0x00000400&((data)<<10))
#define  VCWRAP_WRAPPER_CTRL_ac_bypass(data)                                     (0x00000200&((data)<<9))
#define  VCWRAP_WRAPPER_CTRL_ac_merge(data)                                      (0x00000100&((data)<<8))
#define  VCWRAP_WRAPPER_CTRL_write_en2(data)                                     (0x00000080&((data)<<7))
#define  VCWRAP_WRAPPER_CTRL_vc_in_order(data)                                   (0x00000040&((data)<<6))
#define  VCWRAP_WRAPPER_CTRL_vc_bypass(data)                                     (0x00000020&((data)<<5))
#define  VCWRAP_WRAPPER_CTRL_vc_merge(data)                                      (0x00000010&((data)<<4))
#define  VCWRAP_WRAPPER_CTRL_get_write_en7(data)                                 ((0x10000000&(data))>>28)
#define  VCWRAP_WRAPPER_CTRL_get_ac2_in_order(data)                              ((0x08000000&(data))>>27)
#define  VCWRAP_WRAPPER_CTRL_get_ac2_bypass(data)                                ((0x04000000&(data))>>26)
#define  VCWRAP_WRAPPER_CTRL_get_ac2_merge(data)                                 ((0x02000000&(data))>>25)
#define  VCWRAP_WRAPPER_CTRL_get_write_en6(data)                                 ((0x01000000&(data))>>24)
#define  VCWRAP_WRAPPER_CTRL_get_kc_in_order(data)                               ((0x00800000&(data))>>23)
#define  VCWRAP_WRAPPER_CTRL_get_kc_bypass(data)                                 ((0x00400000&(data))>>22)
#define  VCWRAP_WRAPPER_CTRL_get_kc_merge(data)                                  ((0x00200000&(data))>>21)
#define  VCWRAP_WRAPPER_CTRL_get_kc_merge_enhance(data)                          ((0x00100000&(data))>>20)
#define  VCWRAP_WRAPPER_CTRL_get_write_en5(data)                                 ((0x00080000&(data))>>19)
#define  VCWRAP_WRAPPER_CTRL_get_vc2_in_order(data)                              ((0x00040000&(data))>>18)
#define  VCWRAP_WRAPPER_CTRL_get_vc2_bypass(data)                                ((0x00020000&(data))>>17)
#define  VCWRAP_WRAPPER_CTRL_get_vc2_merge(data)                                 ((0x00010000&(data))>>16)
#define  VCWRAP_WRAPPER_CTRL_get_write_en4(data)                                 ((0x00002000&(data))>>13)
#define  VCWRAP_WRAPPER_CTRL_get_mult_wr_en(data)                                ((0x00001000&(data))>>12)
#define  VCWRAP_WRAPPER_CTRL_get_write_en3(data)                                 ((0x00000800&(data))>>11)
#define  VCWRAP_WRAPPER_CTRL_get_ac_in_order(data)                               ((0x00000400&(data))>>10)
#define  VCWRAP_WRAPPER_CTRL_get_ac_bypass(data)                                 ((0x00000200&(data))>>9)
#define  VCWRAP_WRAPPER_CTRL_get_ac_merge(data)                                  ((0x00000100&(data))>>8)
#define  VCWRAP_WRAPPER_CTRL_get_write_en2(data)                                 ((0x00000080&(data))>>7)
#define  VCWRAP_WRAPPER_CTRL_get_vc_in_order(data)                               ((0x00000040&(data))>>6)
#define  VCWRAP_WRAPPER_CTRL_get_vc_bypass(data)                                 ((0x00000020&(data))>>5)
#define  VCWRAP_WRAPPER_CTRL_get_vc_merge(data)                                  ((0x00000010&(data))>>4)

#define  VCWRAP_INC_CTRL                                                        0x1801A640
#define  VCWRAP_INC_CTRL_reg_addr                                                "0xB801A640"
#define  VCWRAP_INC_CTRL_reg                                                     0xB801A640
#define  VCWRAP_INC_CTRL_inst_addr                                               "0x0003"
#define  set_VCWRAP_INC_CTRL_reg(data)                                           (*((volatile unsigned int*)VCWRAP_INC_CTRL_reg)=data)
#define  get_VCWRAP_INC_CTRL_reg                                                 (*((volatile unsigned int*)VCWRAP_INC_CTRL_reg))
#define  VCWRAP_INC_CTRL_vc2_line_read_rbus_shift                                (4)
#define  VCWRAP_INC_CTRL_vc_line_read_rbus_shift                                 (3)
#define  VCWRAP_INC_CTRL_ac2_line_read_rbus_shift                                (2)
#define  VCWRAP_INC_CTRL_ac_line_read_rbus_shift                                 (1)
#define  VCWRAP_INC_CTRL_kc_line_read_rbus_shift                                 (0)
#define  VCWRAP_INC_CTRL_vc2_line_read_rbus_mask                                 (0x00000010)
#define  VCWRAP_INC_CTRL_vc_line_read_rbus_mask                                  (0x00000008)
#define  VCWRAP_INC_CTRL_ac2_line_read_rbus_mask                                 (0x00000004)
#define  VCWRAP_INC_CTRL_ac_line_read_rbus_mask                                  (0x00000002)
#define  VCWRAP_INC_CTRL_kc_line_read_rbus_mask                                  (0x00000001)
#define  VCWRAP_INC_CTRL_vc2_line_read_rbus(data)                                (0x00000010&((data)<<4))
#define  VCWRAP_INC_CTRL_vc_line_read_rbus(data)                                 (0x00000008&((data)<<3))
#define  VCWRAP_INC_CTRL_ac2_line_read_rbus(data)                                (0x00000004&((data)<<2))
#define  VCWRAP_INC_CTRL_ac_line_read_rbus(data)                                 (0x00000002&((data)<<1))
#define  VCWRAP_INC_CTRL_kc_line_read_rbus(data)                                 (0x00000001&(data))
#define  VCWRAP_INC_CTRL_get_vc2_line_read_rbus(data)                            ((0x00000010&(data))>>4)
#define  VCWRAP_INC_CTRL_get_vc_line_read_rbus(data)                             ((0x00000008&(data))>>3)
#define  VCWRAP_INC_CTRL_get_ac2_line_read_rbus(data)                            ((0x00000004&(data))>>2)
#define  VCWRAP_INC_CTRL_get_ac_line_read_rbus(data)                             ((0x00000002&(data))>>1)
#define  VCWRAP_INC_CTRL_get_kc_line_read_rbus(data)                             (0x00000001&(data))

#define  VCWRAP_INC_ADDR_0                                                      0x1801A644
#define  VCWRAP_INC_ADDR_0_reg_addr                                              "0xB801A644"
#define  VCWRAP_INC_ADDR_0_reg                                                   0xB801A644
#define  VCWRAP_INC_ADDR_0_inst_addr                                             "0x0004"
#define  set_VCWRAP_INC_ADDR_0_reg(data)                                         (*((volatile unsigned int*)VCWRAP_INC_ADDR_0_reg)=data)
#define  get_VCWRAP_INC_ADDR_0_reg                                               (*((volatile unsigned int*)VCWRAP_INC_ADDR_0_reg))
#define  VCWRAP_INC_ADDR_0_line_read_rbus_addr_shift                             (0)
#define  VCWRAP_INC_ADDR_0_line_read_rbus_addr_mask                              (0xFFFFFFFF)
#define  VCWRAP_INC_ADDR_0_line_read_rbus_addr(data)                             (0xFFFFFFFF&(data))
#define  VCWRAP_INC_ADDR_0_get_line_read_rbus_addr(data)                         (0xFFFFFFFF&(data))

#define  VCWRAP_INC_ADDR_1                                                      0x1801A648
#define  VCWRAP_INC_ADDR_1_reg_addr                                              "0xB801A648"
#define  VCWRAP_INC_ADDR_1_reg                                                   0xB801A648
#define  VCWRAP_INC_ADDR_1_inst_addr                                             "0x0005"
#define  set_VCWRAP_INC_ADDR_1_reg(data)                                         (*((volatile unsigned int*)VCWRAP_INC_ADDR_1_reg)=data)
#define  get_VCWRAP_INC_ADDR_1_reg                                               (*((volatile unsigned int*)VCWRAP_INC_ADDR_1_reg))
#define  VCWRAP_INC_ADDR_1_line_read_rbus_addr_shift                             (0)
#define  VCWRAP_INC_ADDR_1_line_read_rbus_addr_mask                              (0xFFFFFFFF)
#define  VCWRAP_INC_ADDR_1_line_read_rbus_addr(data)                             (0xFFFFFFFF&(data))
#define  VCWRAP_INC_ADDR_1_get_line_read_rbus_addr(data)                         (0xFFFFFFFF&(data))

#define  VCWRAP_INC_ADDR_2                                                      0x1801A64C
#define  VCWRAP_INC_ADDR_2_reg_addr                                              "0xB801A64C"
#define  VCWRAP_INC_ADDR_2_reg                                                   0xB801A64C
#define  VCWRAP_INC_ADDR_2_inst_addr                                             "0x0006"
#define  set_VCWRAP_INC_ADDR_2_reg(data)                                         (*((volatile unsigned int*)VCWRAP_INC_ADDR_2_reg)=data)
#define  get_VCWRAP_INC_ADDR_2_reg                                               (*((volatile unsigned int*)VCWRAP_INC_ADDR_2_reg))
#define  VCWRAP_INC_ADDR_2_line_read_rbus_addr_shift                             (0)
#define  VCWRAP_INC_ADDR_2_line_read_rbus_addr_mask                              (0xFFFFFFFF)
#define  VCWRAP_INC_ADDR_2_line_read_rbus_addr(data)                             (0xFFFFFFFF&(data))
#define  VCWRAP_INC_ADDR_2_get_line_read_rbus_addr(data)                         (0xFFFFFFFF&(data))

#define  VCWRAP_INC_ADDR_3                                                      0x1801A650
#define  VCWRAP_INC_ADDR_3_reg_addr                                              "0xB801A650"
#define  VCWRAP_INC_ADDR_3_reg                                                   0xB801A650
#define  VCWRAP_INC_ADDR_3_inst_addr                                             "0x0007"
#define  set_VCWRAP_INC_ADDR_3_reg(data)                                         (*((volatile unsigned int*)VCWRAP_INC_ADDR_3_reg)=data)
#define  get_VCWRAP_INC_ADDR_3_reg                                               (*((volatile unsigned int*)VCWRAP_INC_ADDR_3_reg))
#define  VCWRAP_INC_ADDR_3_line_read_rbus_addr_shift                             (0)
#define  VCWRAP_INC_ADDR_3_line_read_rbus_addr_mask                              (0xFFFFFFFF)
#define  VCWRAP_INC_ADDR_3_line_read_rbus_addr(data)                             (0xFFFFFFFF&(data))
#define  VCWRAP_INC_ADDR_3_get_line_read_rbus_addr(data)                         (0xFFFFFFFF&(data))

#define  VCWRAP_INC_ADDR_4                                                      0x1801A654
#define  VCWRAP_INC_ADDR_4_reg_addr                                              "0xB801A654"
#define  VCWRAP_INC_ADDR_4_reg                                                   0xB801A654
#define  VCWRAP_INC_ADDR_4_inst_addr                                             "0x0008"
#define  set_VCWRAP_INC_ADDR_4_reg(data)                                         (*((volatile unsigned int*)VCWRAP_INC_ADDR_4_reg)=data)
#define  get_VCWRAP_INC_ADDR_4_reg                                               (*((volatile unsigned int*)VCWRAP_INC_ADDR_4_reg))
#define  VCWRAP_INC_ADDR_4_line_read_rbus_addr_shift                             (0)
#define  VCWRAP_INC_ADDR_4_line_read_rbus_addr_mask                              (0xFFFFFFFF)
#define  VCWRAP_INC_ADDR_4_line_read_rbus_addr(data)                             (0xFFFFFFFF&(data))
#define  VCWRAP_INC_ADDR_4_get_line_read_rbus_addr(data)                         (0xFFFFFFFF&(data))

#define  VCWRAP_BOOT_REMAP2                                                     0x1801A93C
#define  VCWRAP_BOOT_REMAP2_reg_addr                                             "0xB801A93C"
#define  VCWRAP_BOOT_REMAP2_reg                                                  0xB801A93C
#define  VCWRAP_BOOT_REMAP2_inst_addr                                            "0x0009"
#define  set_VCWRAP_BOOT_REMAP2_reg(data)                                        (*((volatile unsigned int*)VCWRAP_BOOT_REMAP2_reg)=data)
#define  get_VCWRAP_BOOT_REMAP2_reg                                              (*((volatile unsigned int*)VCWRAP_BOOT_REMAP2_reg))
#define  VCWRAP_BOOT_REMAP2_vcpu_boot_addr_remap_shift                           (16)
#define  VCWRAP_BOOT_REMAP2_vcpu_boot_addr_remap_mask                            (0xFFFF0000)
#define  VCWRAP_BOOT_REMAP2_vcpu_boot_addr_remap(data)                           (0xFFFF0000&((data)<<16))
#define  VCWRAP_BOOT_REMAP2_get_vcpu_boot_addr_remap(data)                       ((0xFFFF0000&(data))>>16)

#define  VCWRAP_ctrl_reg                                                        0x1801A960
#define  VCWRAP_ctrl_reg_reg_addr                                                "0xB801A960"
#define  VCWRAP_ctrl_reg_reg                                                     0xB801A960
#define  VCWRAP_ctrl_reg_inst_addr                                               "0x000A"
#define  set_VCWRAP_ctrl_reg_reg(data)                                           (*((volatile unsigned int*)VCWRAP_ctrl_reg_reg)=data)
#define  get_VCWRAP_ctrl_reg_reg                                                 (*((volatile unsigned int*)VCWRAP_ctrl_reg_reg))
#define  VCWRAP_ctrl_reg_gpu_general_protect_shift                               (20)
#define  VCWRAP_ctrl_reg_gpu_os_id_3_protect_shift                               (19)
#define  VCWRAP_ctrl_reg_gpu_os_id_2_protect_shift                               (18)
#define  VCWRAP_ctrl_reg_gpu_os_id_1_protect_shift                               (17)
#define  VCWRAP_ctrl_reg_gpu_os_id_0_protect_shift                               (16)
#define  VCWRAP_ctrl_reg_dc_picindex_rw_n_shift                                  (12)
#define  VCWRAP_ctrl_reg_otp_bits_scpu_rd_n_shift                                (11)
#define  VCWRAP_ctrl_reg_otp_bits_vcpu_rd_n_shift                                (10)
#define  VCWRAP_ctrl_reg_otp_bits_acpu_rd_n_shift                                (9)
#define  VCWRAP_ctrl_reg_otp_bits_kcpu_rd_n_shift                                (8)
#define  VCWRAP_ctrl_reg_se_queue2_protect_shift                                 (4)
#define  VCWRAP_ctrl_reg_flash_release_shift                                     (0)
#define  VCWRAP_ctrl_reg_gpu_general_protect_mask                                (0x00100000)
#define  VCWRAP_ctrl_reg_gpu_os_id_3_protect_mask                                (0x00080000)
#define  VCWRAP_ctrl_reg_gpu_os_id_2_protect_mask                                (0x00040000)
#define  VCWRAP_ctrl_reg_gpu_os_id_1_protect_mask                                (0x00020000)
#define  VCWRAP_ctrl_reg_gpu_os_id_0_protect_mask                                (0x00010000)
#define  VCWRAP_ctrl_reg_dc_picindex_rw_n_mask                                   (0x00001000)
#define  VCWRAP_ctrl_reg_otp_bits_scpu_rd_n_mask                                 (0x00000800)
#define  VCWRAP_ctrl_reg_otp_bits_vcpu_rd_n_mask                                 (0x00000400)
#define  VCWRAP_ctrl_reg_otp_bits_acpu_rd_n_mask                                 (0x00000200)
#define  VCWRAP_ctrl_reg_otp_bits_kcpu_rd_n_mask                                 (0x00000100)
#define  VCWRAP_ctrl_reg_se_queue2_protect_mask                                  (0x00000030)
#define  VCWRAP_ctrl_reg_flash_release_mask                                      (0x00000001)
#define  VCWRAP_ctrl_reg_gpu_general_protect(data)                               (0x00100000&((data)<<20))
#define  VCWRAP_ctrl_reg_gpu_os_id_3_protect(data)                               (0x00080000&((data)<<19))
#define  VCWRAP_ctrl_reg_gpu_os_id_2_protect(data)                               (0x00040000&((data)<<18))
#define  VCWRAP_ctrl_reg_gpu_os_id_1_protect(data)                               (0x00020000&((data)<<17))
#define  VCWRAP_ctrl_reg_gpu_os_id_0_protect(data)                               (0x00010000&((data)<<16))
#define  VCWRAP_ctrl_reg_dc_picindex_rw_n(data)                                  (0x00001000&((data)<<12))
#define  VCWRAP_ctrl_reg_otp_bits_scpu_rd_n(data)                                (0x00000800&((data)<<11))
#define  VCWRAP_ctrl_reg_otp_bits_vcpu_rd_n(data)                                (0x00000400&((data)<<10))
#define  VCWRAP_ctrl_reg_otp_bits_acpu_rd_n(data)                                (0x00000200&((data)<<9))
#define  VCWRAP_ctrl_reg_otp_bits_kcpu_rd_n(data)                                (0x00000100&((data)<<8))
#define  VCWRAP_ctrl_reg_se_queue2_protect(data)                                 (0x00000030&((data)<<4))
#define  VCWRAP_ctrl_reg_flash_release(data)                                     (0x00000001&(data))
#define  VCWRAP_ctrl_reg_get_gpu_general_protect(data)                           ((0x00100000&(data))>>20)
#define  VCWRAP_ctrl_reg_get_gpu_os_id_3_protect(data)                           ((0x00080000&(data))>>19)
#define  VCWRAP_ctrl_reg_get_gpu_os_id_2_protect(data)                           ((0x00040000&(data))>>18)
#define  VCWRAP_ctrl_reg_get_gpu_os_id_1_protect(data)                           ((0x00020000&(data))>>17)
#define  VCWRAP_ctrl_reg_get_gpu_os_id_0_protect(data)                           ((0x00010000&(data))>>16)
#define  VCWRAP_ctrl_reg_get_dc_picindex_rw_n(data)                              ((0x00001000&(data))>>12)
#define  VCWRAP_ctrl_reg_get_otp_bits_scpu_rd_n(data)                            ((0x00000800&(data))>>11)
#define  VCWRAP_ctrl_reg_get_otp_bits_vcpu_rd_n(data)                            ((0x00000400&(data))>>10)
#define  VCWRAP_ctrl_reg_get_otp_bits_acpu_rd_n(data)                            ((0x00000200&(data))>>9)
#define  VCWRAP_ctrl_reg_get_otp_bits_kcpu_rd_n(data)                            ((0x00000100&(data))>>8)
#define  VCWRAP_ctrl_reg_get_se_queue2_protect(data)                             ((0x00000030&(data))>>4)
#define  VCWRAP_ctrl_reg_get_flash_release(data)                                 (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======VCWRAP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  ext_sleepreq_r:1;
    };
}vcwrap_vc_sleep_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  sl_sleepsys_r:1;
    };
}vcwrap_vc_sleep_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  write_en7:1;
        RBus_UInt32  ac2_in_order:1;
        RBus_UInt32  ac2_bypass:1;
        RBus_UInt32  ac2_merge:1;
        RBus_UInt32  write_en6:1;
        RBus_UInt32  kc_in_order:1;
        RBus_UInt32  kc_bypass:1;
        RBus_UInt32  kc_merge:1;
        RBus_UInt32  kc_merge_enhance:1;
        RBus_UInt32  write_en5:1;
        RBus_UInt32  vc2_in_order:1;
        RBus_UInt32  vc2_bypass:1;
        RBus_UInt32  vc2_merge:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  mult_wr_en:1;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  ac_in_order:1;
        RBus_UInt32  ac_bypass:1;
        RBus_UInt32  ac_merge:1;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  vc_in_order:1;
        RBus_UInt32  vc_bypass:1;
        RBus_UInt32  vc_merge:1;
        RBus_UInt32  res3:4;
    };
}vcwrap_wrapper_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  vc2_line_read_rbus:1;
        RBus_UInt32  vc_line_read_rbus:1;
        RBus_UInt32  ac2_line_read_rbus:1;
        RBus_UInt32  ac_line_read_rbus:1;
        RBus_UInt32  kc_line_read_rbus:1;
    };
}vcwrap_inc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line_read_rbus_addr:32;
    };
}vcwrap_inc_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcpu_boot_addr_remap:16;
        RBus_UInt32  res1:16;
    };
}vcwrap_boot_remap2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  gpu_general_protect:1;
        RBus_UInt32  gpu_os_id_3_protect:1;
        RBus_UInt32  gpu_os_id_2_protect:1;
        RBus_UInt32  gpu_os_id_1_protect:1;
        RBus_UInt32  gpu_os_id_0_protect:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  dc_picindex_rw_n:1;
        RBus_UInt32  otp_bits_scpu_rd_n:1;
        RBus_UInt32  otp_bits_vcpu_rd_n:1;
        RBus_UInt32  otp_bits_acpu_rd_n:1;
        RBus_UInt32  otp_bits_kcpu_rd_n:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  se_queue2_protect:2;
        RBus_UInt32  res4:3;
        RBus_UInt32  flash_release:1;
    };
}vcwrap_ctrl_reg_RBUS;

#else //apply LITTLE_ENDIAN

//======VCWRAP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ext_sleepreq_r:1;
        RBus_UInt32  res1:31;
    };
}vcwrap_vc_sleep_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sl_sleepsys_r:1;
        RBus_UInt32  res1:31;
    };
}vcwrap_vc_sleep_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  vc_merge:1;
        RBus_UInt32  vc_bypass:1;
        RBus_UInt32  vc_in_order:1;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  ac_merge:1;
        RBus_UInt32  ac_bypass:1;
        RBus_UInt32  ac_in_order:1;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  mult_wr_en:1;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  vc2_merge:1;
        RBus_UInt32  vc2_bypass:1;
        RBus_UInt32  vc2_in_order:1;
        RBus_UInt32  write_en5:1;
        RBus_UInt32  kc_merge_enhance:1;
        RBus_UInt32  kc_merge:1;
        RBus_UInt32  kc_bypass:1;
        RBus_UInt32  kc_in_order:1;
        RBus_UInt32  write_en6:1;
        RBus_UInt32  ac2_merge:1;
        RBus_UInt32  ac2_bypass:1;
        RBus_UInt32  ac2_in_order:1;
        RBus_UInt32  write_en7:1;
        RBus_UInt32  res3:3;
    };
}vcwrap_wrapper_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kc_line_read_rbus:1;
        RBus_UInt32  ac_line_read_rbus:1;
        RBus_UInt32  ac2_line_read_rbus:1;
        RBus_UInt32  vc_line_read_rbus:1;
        RBus_UInt32  vc2_line_read_rbus:1;
        RBus_UInt32  res1:27;
    };
}vcwrap_inc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line_read_rbus_addr:32;
    };
}vcwrap_inc_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  vcpu_boot_addr_remap:16;
    };
}vcwrap_boot_remap2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  flash_release:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  se_queue2_protect:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  otp_bits_kcpu_rd_n:1;
        RBus_UInt32  otp_bits_acpu_rd_n:1;
        RBus_UInt32  otp_bits_vcpu_rd_n:1;
        RBus_UInt32  otp_bits_scpu_rd_n:1;
        RBus_UInt32  dc_picindex_rw_n:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  gpu_os_id_0_protect:1;
        RBus_UInt32  gpu_os_id_1_protect:1;
        RBus_UInt32  gpu_os_id_2_protect:1;
        RBus_UInt32  gpu_os_id_3_protect:1;
        RBus_UInt32  gpu_general_protect:1;
        RBus_UInt32  res4:11;
    };
}vcwrap_ctrl_reg_RBUS;




#endif 


#endif 
