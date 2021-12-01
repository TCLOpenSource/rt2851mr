/**
* @file Merlin5-DesignSpec-ACPU_wrapper for dv only
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_ACWRAP_REG_H_
#define _RBUS_ACWRAP_REG_H_

#include "rbus_types.h"



//  ACWRAP Register Address
#define  ACWRAP_acpu_status                                                     0x180022A0
#define  ACWRAP_acpu_status_reg_addr                                             "0xB80022A0"
#define  ACWRAP_acpu_status_reg                                                  0xB80022A0
#define  ACWRAP_acpu_status_inst_addr                                            "0x0000"
#define  set_ACWRAP_acpu_status_reg(data)                                        (*((volatile unsigned int*)ACWRAP_acpu_status_reg)=data)
#define  get_ACWRAP_acpu_status_reg                                              (*((volatile unsigned int*)ACWRAP_acpu_status_reg))
#define  ACWRAP_acpu_status_sleep_mode_status_shift                              (0)
#define  ACWRAP_acpu_status_sleep_mode_status_mask                               (0x00000001)
#define  ACWRAP_acpu_status_sleep_mode_status(data)                              (0x00000001&(data))
#define  ACWRAP_acpu_status_get_sleep_mode_status(data)                          (0x00000001&(data))

#define  ACWRAP_wrapper_cfg1                                                    0x18002400
#define  ACWRAP_wrapper_cfg1_reg_addr                                            "0xB8002400"
#define  ACWRAP_wrapper_cfg1_reg                                                 0xB8002400
#define  ACWRAP_wrapper_cfg1_inst_addr                                           "0x0001"
#define  set_ACWRAP_wrapper_cfg1_reg(data)                                       (*((volatile unsigned int*)ACWRAP_wrapper_cfg1_reg)=data)
#define  get_ACWRAP_wrapper_cfg1_reg                                             (*((volatile unsigned int*)ACWRAP_wrapper_cfg1_reg))
#define  ACWRAP_wrapper_cfg1_wlast_sel_shift                                     (31)
#define  ACWRAP_wrapper_cfg1_wr_outstand_num_shift                               (4)
#define  ACWRAP_wrapper_cfg1_rd_outstand_num_shift                               (0)
#define  ACWRAP_wrapper_cfg1_wlast_sel_mask                                      (0x80000000)
#define  ACWRAP_wrapper_cfg1_wr_outstand_num_mask                                (0x00000070)
#define  ACWRAP_wrapper_cfg1_rd_outstand_num_mask                                (0x00000007)
#define  ACWRAP_wrapper_cfg1_wlast_sel(data)                                     (0x80000000&((data)<<31))
#define  ACWRAP_wrapper_cfg1_wr_outstand_num(data)                               (0x00000070&((data)<<4))
#define  ACWRAP_wrapper_cfg1_rd_outstand_num(data)                               (0x00000007&(data))
#define  ACWRAP_wrapper_cfg1_get_wlast_sel(data)                                 ((0x80000000&(data))>>31)
#define  ACWRAP_wrapper_cfg1_get_wr_outstand_num(data)                           ((0x00000070&(data))>>4)
#define  ACWRAP_wrapper_cfg1_get_rd_outstand_num(data)                           (0x00000007&(data))

#define  ACWRAP_ocpdbg_ctrl                                                     0x18002404
#define  ACWRAP_ocpdbg_ctrl_reg_addr                                             "0xB8002404"
#define  ACWRAP_ocpdbg_ctrl_reg                                                  0xB8002404
#define  ACWRAP_ocpdbg_ctrl_inst_addr                                            "0x0002"
#define  set_ACWRAP_ocpdbg_ctrl_reg(data)                                        (*((volatile unsigned int*)ACWRAP_ocpdbg_ctrl_reg)=data)
#define  get_ACWRAP_ocpdbg_ctrl_reg                                              (*((volatile unsigned int*)ACWRAP_ocpdbg_ctrl_reg))
#define  ACWRAP_ocpdbg_ctrl_stop_dbg_ocp_shift                                   (1)
#define  ACWRAP_ocpdbg_ctrl_fetch_dbg_entry_ocp_shift                            (0)
#define  ACWRAP_ocpdbg_ctrl_stop_dbg_ocp_mask                                    (0x00000002)
#define  ACWRAP_ocpdbg_ctrl_fetch_dbg_entry_ocp_mask                             (0x00000001)
#define  ACWRAP_ocpdbg_ctrl_stop_dbg_ocp(data)                                   (0x00000002&((data)<<1))
#define  ACWRAP_ocpdbg_ctrl_fetch_dbg_entry_ocp(data)                            (0x00000001&(data))
#define  ACWRAP_ocpdbg_ctrl_get_stop_dbg_ocp(data)                               ((0x00000002&(data))>>1)
#define  ACWRAP_ocpdbg_ctrl_get_fetch_dbg_entry_ocp(data)                        (0x00000001&(data))

#define  ACWRAP_ocpdbg_status1                                                  0x18002408
#define  ACWRAP_ocpdbg_status1_reg_addr                                          "0xB8002408"
#define  ACWRAP_ocpdbg_status1_reg                                               0xB8002408
#define  ACWRAP_ocpdbg_status1_inst_addr                                         "0x0003"
#define  set_ACWRAP_ocpdbg_status1_reg(data)                                     (*((volatile unsigned int*)ACWRAP_ocpdbg_status1_reg)=data)
#define  get_ACWRAP_ocpdbg_status1_reg                                           (*((volatile unsigned int*)ACWRAP_ocpdbg_status1_reg))
#define  ACWRAP_ocpdbg_status1_valid_entry_cnt_ocp_shift                         (0)
#define  ACWRAP_ocpdbg_status1_valid_entry_cnt_ocp_mask                          (0x0000001F)
#define  ACWRAP_ocpdbg_status1_valid_entry_cnt_ocp(data)                         (0x0000001F&(data))
#define  ACWRAP_ocpdbg_status1_get_valid_entry_cnt_ocp(data)                     (0x0000001F&(data))

#define  ACWRAP_ocpdbg_status2                                                  0x1800240C
#define  ACWRAP_ocpdbg_status2_reg_addr                                          "0xB800240C"
#define  ACWRAP_ocpdbg_status2_reg                                               0xB800240C
#define  ACWRAP_ocpdbg_status2_inst_addr                                         "0x0004"
#define  set_ACWRAP_ocpdbg_status2_reg(data)                                     (*((volatile unsigned int*)ACWRAP_ocpdbg_status2_reg)=data)
#define  get_ACWRAP_ocpdbg_status2_reg                                           (*((volatile unsigned int*)ACWRAP_ocpdbg_status2_reg))
#define  ACWRAP_ocpdbg_status2_ocpdbg_addr_shift                                 (0)
#define  ACWRAP_ocpdbg_status2_ocpdbg_addr_mask                                  (0xFFFFFFFF)
#define  ACWRAP_ocpdbg_status2_ocpdbg_addr(data)                                 (0xFFFFFFFF&(data))
#define  ACWRAP_ocpdbg_status2_get_ocpdbg_addr(data)                             (0xFFFFFFFF&(data))

#define  ACWRAP_ocpdbg_status3                                                  0x18002500
#define  ACWRAP_ocpdbg_status3_reg_addr                                          "0xB8002500"
#define  ACWRAP_ocpdbg_status3_reg                                               0xB8002500
#define  ACWRAP_ocpdbg_status3_inst_addr                                         "0x0005"
#define  set_ACWRAP_ocpdbg_status3_reg(data)                                     (*((volatile unsigned int*)ACWRAP_ocpdbg_status3_reg)=data)
#define  get_ACWRAP_ocpdbg_status3_reg                                           (*((volatile unsigned int*)ACWRAP_ocpdbg_status3_reg))
#define  ACWRAP_ocpdbg_status3_ocpdbg_write_shift                                (12)
#define  ACWRAP_ocpdbg_status3_ocpdbg_byte_en_shift                              (4)
#define  ACWRAP_ocpdbg_status3_ocpdbg_tag_id_shift                               (0)
#define  ACWRAP_ocpdbg_status3_ocpdbg_write_mask                                 (0x00001000)
#define  ACWRAP_ocpdbg_status3_ocpdbg_byte_en_mask                               (0x00000FF0)
#define  ACWRAP_ocpdbg_status3_ocpdbg_tag_id_mask                                (0x0000000F)
#define  ACWRAP_ocpdbg_status3_ocpdbg_write(data)                                (0x00001000&((data)<<12))
#define  ACWRAP_ocpdbg_status3_ocpdbg_byte_en(data)                              (0x00000FF0&((data)<<4))
#define  ACWRAP_ocpdbg_status3_ocpdbg_tag_id(data)                               (0x0000000F&(data))
#define  ACWRAP_ocpdbg_status3_get_ocpdbg_write(data)                            ((0x00001000&(data))>>12)
#define  ACWRAP_ocpdbg_status3_get_ocpdbg_byte_en(data)                          ((0x00000FF0&(data))>>4)
#define  ACWRAP_ocpdbg_status3_get_ocpdbg_tag_id(data)                           (0x0000000F&(data))

#define  ACWRAP_WRAPPER_CTRL                                                    0x1801A018
#define  ACWRAP_WRAPPER_CTRL_reg_addr                                            "0xB801A018"
#define  ACWRAP_WRAPPER_CTRL_reg                                                 0xB801A018
#define  ACWRAP_WRAPPER_CTRL_inst_addr                                           "0x0006"
#define  set_ACWRAP_WRAPPER_CTRL_reg(data)                                       (*((volatile unsigned int*)ACWRAP_WRAPPER_CTRL_reg)=data)
#define  get_ACWRAP_WRAPPER_CTRL_reg                                             (*((volatile unsigned int*)ACWRAP_WRAPPER_CTRL_reg))
#define  ACWRAP_WRAPPER_CTRL_write_en7_shift                                     (28)
#define  ACWRAP_WRAPPER_CTRL_ac2_in_order_shift                                  (27)
#define  ACWRAP_WRAPPER_CTRL_ac2_bypass_shift                                    (26)
#define  ACWRAP_WRAPPER_CTRL_ac2_merge_shift                                     (25)
#define  ACWRAP_WRAPPER_CTRL_write_en6_shift                                     (24)
#define  ACWRAP_WRAPPER_CTRL_kc_in_order_shift                                   (23)
#define  ACWRAP_WRAPPER_CTRL_kc_bypass_shift                                     (22)
#define  ACWRAP_WRAPPER_CTRL_kc_merge_shift                                      (21)
#define  ACWRAP_WRAPPER_CTRL_kc_merge_enhance_shift                              (20)
#define  ACWRAP_WRAPPER_CTRL_write_en5_shift                                     (19)
#define  ACWRAP_WRAPPER_CTRL_vc2_in_order_shift                                  (18)
#define  ACWRAP_WRAPPER_CTRL_vc2_bypass_shift                                    (17)
#define  ACWRAP_WRAPPER_CTRL_vc2_merge_shift                                     (16)
#define  ACWRAP_WRAPPER_CTRL_write_en4_shift                                     (13)
#define  ACWRAP_WRAPPER_CTRL_mult_wr_en_shift                                    (12)
#define  ACWRAP_WRAPPER_CTRL_write_en3_shift                                     (11)
#define  ACWRAP_WRAPPER_CTRL_ac_in_order_shift                                   (10)
#define  ACWRAP_WRAPPER_CTRL_ac_bypass_shift                                     (9)
#define  ACWRAP_WRAPPER_CTRL_ac_merge_shift                                      (8)
#define  ACWRAP_WRAPPER_CTRL_write_en2_shift                                     (7)
#define  ACWRAP_WRAPPER_CTRL_vc_in_order_shift                                   (6)
#define  ACWRAP_WRAPPER_CTRL_vc_bypass_shift                                     (5)
#define  ACWRAP_WRAPPER_CTRL_vc_merge_shift                                      (4)
#define  ACWRAP_WRAPPER_CTRL_write_en7_mask                                      (0x10000000)
#define  ACWRAP_WRAPPER_CTRL_ac2_in_order_mask                                   (0x08000000)
#define  ACWRAP_WRAPPER_CTRL_ac2_bypass_mask                                     (0x04000000)
#define  ACWRAP_WRAPPER_CTRL_ac2_merge_mask                                      (0x02000000)
#define  ACWRAP_WRAPPER_CTRL_write_en6_mask                                      (0x01000000)
#define  ACWRAP_WRAPPER_CTRL_kc_in_order_mask                                    (0x00800000)
#define  ACWRAP_WRAPPER_CTRL_kc_bypass_mask                                      (0x00400000)
#define  ACWRAP_WRAPPER_CTRL_kc_merge_mask                                       (0x00200000)
#define  ACWRAP_WRAPPER_CTRL_kc_merge_enhance_mask                               (0x00100000)
#define  ACWRAP_WRAPPER_CTRL_write_en5_mask                                      (0x00080000)
#define  ACWRAP_WRAPPER_CTRL_vc2_in_order_mask                                   (0x00040000)
#define  ACWRAP_WRAPPER_CTRL_vc2_bypass_mask                                     (0x00020000)
#define  ACWRAP_WRAPPER_CTRL_vc2_merge_mask                                      (0x00010000)
#define  ACWRAP_WRAPPER_CTRL_write_en4_mask                                      (0x00002000)
#define  ACWRAP_WRAPPER_CTRL_mult_wr_en_mask                                     (0x00001000)
#define  ACWRAP_WRAPPER_CTRL_write_en3_mask                                      (0x00000800)
#define  ACWRAP_WRAPPER_CTRL_ac_in_order_mask                                    (0x00000400)
#define  ACWRAP_WRAPPER_CTRL_ac_bypass_mask                                      (0x00000200)
#define  ACWRAP_WRAPPER_CTRL_ac_merge_mask                                       (0x00000100)
#define  ACWRAP_WRAPPER_CTRL_write_en2_mask                                      (0x00000080)
#define  ACWRAP_WRAPPER_CTRL_vc_in_order_mask                                    (0x00000040)
#define  ACWRAP_WRAPPER_CTRL_vc_bypass_mask                                      (0x00000020)
#define  ACWRAP_WRAPPER_CTRL_vc_merge_mask                                       (0x00000010)
#define  ACWRAP_WRAPPER_CTRL_write_en7(data)                                     (0x10000000&((data)<<28))
#define  ACWRAP_WRAPPER_CTRL_ac2_in_order(data)                                  (0x08000000&((data)<<27))
#define  ACWRAP_WRAPPER_CTRL_ac2_bypass(data)                                    (0x04000000&((data)<<26))
#define  ACWRAP_WRAPPER_CTRL_ac2_merge(data)                                     (0x02000000&((data)<<25))
#define  ACWRAP_WRAPPER_CTRL_write_en6(data)                                     (0x01000000&((data)<<24))
#define  ACWRAP_WRAPPER_CTRL_kc_in_order(data)                                   (0x00800000&((data)<<23))
#define  ACWRAP_WRAPPER_CTRL_kc_bypass(data)                                     (0x00400000&((data)<<22))
#define  ACWRAP_WRAPPER_CTRL_kc_merge(data)                                      (0x00200000&((data)<<21))
#define  ACWRAP_WRAPPER_CTRL_kc_merge_enhance(data)                              (0x00100000&((data)<<20))
#define  ACWRAP_WRAPPER_CTRL_write_en5(data)                                     (0x00080000&((data)<<19))
#define  ACWRAP_WRAPPER_CTRL_vc2_in_order(data)                                  (0x00040000&((data)<<18))
#define  ACWRAP_WRAPPER_CTRL_vc2_bypass(data)                                    (0x00020000&((data)<<17))
#define  ACWRAP_WRAPPER_CTRL_vc2_merge(data)                                     (0x00010000&((data)<<16))
#define  ACWRAP_WRAPPER_CTRL_write_en4(data)                                     (0x00002000&((data)<<13))
#define  ACWRAP_WRAPPER_CTRL_mult_wr_en(data)                                    (0x00001000&((data)<<12))
#define  ACWRAP_WRAPPER_CTRL_write_en3(data)                                     (0x00000800&((data)<<11))
#define  ACWRAP_WRAPPER_CTRL_ac_in_order(data)                                   (0x00000400&((data)<<10))
#define  ACWRAP_WRAPPER_CTRL_ac_bypass(data)                                     (0x00000200&((data)<<9))
#define  ACWRAP_WRAPPER_CTRL_ac_merge(data)                                      (0x00000100&((data)<<8))
#define  ACWRAP_WRAPPER_CTRL_write_en2(data)                                     (0x00000080&((data)<<7))
#define  ACWRAP_WRAPPER_CTRL_vc_in_order(data)                                   (0x00000040&((data)<<6))
#define  ACWRAP_WRAPPER_CTRL_vc_bypass(data)                                     (0x00000020&((data)<<5))
#define  ACWRAP_WRAPPER_CTRL_vc_merge(data)                                      (0x00000010&((data)<<4))
#define  ACWRAP_WRAPPER_CTRL_get_write_en7(data)                                 ((0x10000000&(data))>>28)
#define  ACWRAP_WRAPPER_CTRL_get_ac2_in_order(data)                              ((0x08000000&(data))>>27)
#define  ACWRAP_WRAPPER_CTRL_get_ac2_bypass(data)                                ((0x04000000&(data))>>26)
#define  ACWRAP_WRAPPER_CTRL_get_ac2_merge(data)                                 ((0x02000000&(data))>>25)
#define  ACWRAP_WRAPPER_CTRL_get_write_en6(data)                                 ((0x01000000&(data))>>24)
#define  ACWRAP_WRAPPER_CTRL_get_kc_in_order(data)                               ((0x00800000&(data))>>23)
#define  ACWRAP_WRAPPER_CTRL_get_kc_bypass(data)                                 ((0x00400000&(data))>>22)
#define  ACWRAP_WRAPPER_CTRL_get_kc_merge(data)                                  ((0x00200000&(data))>>21)
#define  ACWRAP_WRAPPER_CTRL_get_kc_merge_enhance(data)                          ((0x00100000&(data))>>20)
#define  ACWRAP_WRAPPER_CTRL_get_write_en5(data)                                 ((0x00080000&(data))>>19)
#define  ACWRAP_WRAPPER_CTRL_get_vc2_in_order(data)                              ((0x00040000&(data))>>18)
#define  ACWRAP_WRAPPER_CTRL_get_vc2_bypass(data)                                ((0x00020000&(data))>>17)
#define  ACWRAP_WRAPPER_CTRL_get_vc2_merge(data)                                 ((0x00010000&(data))>>16)
#define  ACWRAP_WRAPPER_CTRL_get_write_en4(data)                                 ((0x00002000&(data))>>13)
#define  ACWRAP_WRAPPER_CTRL_get_mult_wr_en(data)                                ((0x00001000&(data))>>12)
#define  ACWRAP_WRAPPER_CTRL_get_write_en3(data)                                 ((0x00000800&(data))>>11)
#define  ACWRAP_WRAPPER_CTRL_get_ac_in_order(data)                               ((0x00000400&(data))>>10)
#define  ACWRAP_WRAPPER_CTRL_get_ac_bypass(data)                                 ((0x00000200&(data))>>9)
#define  ACWRAP_WRAPPER_CTRL_get_ac_merge(data)                                  ((0x00000100&(data))>>8)
#define  ACWRAP_WRAPPER_CTRL_get_write_en2(data)                                 ((0x00000080&(data))>>7)
#define  ACWRAP_WRAPPER_CTRL_get_vc_in_order(data)                               ((0x00000040&(data))>>6)
#define  ACWRAP_WRAPPER_CTRL_get_vc_bypass(data)                                 ((0x00000020&(data))>>5)
#define  ACWRAP_WRAPPER_CTRL_get_vc_merge(data)                                  ((0x00000010&(data))>>4)

#define  ACWRAP_ctrl_reg                                                        0x1801A960
#define  ACWRAP_ctrl_reg_reg_addr                                                "0xB801A960"
#define  ACWRAP_ctrl_reg_reg                                                     0xB801A960
#define  ACWRAP_ctrl_reg_inst_addr                                               "0x0007"
#define  set_ACWRAP_ctrl_reg_reg(data)                                           (*((volatile unsigned int*)ACWRAP_ctrl_reg_reg)=data)
#define  get_ACWRAP_ctrl_reg_reg                                                 (*((volatile unsigned int*)ACWRAP_ctrl_reg_reg))
#define  ACWRAP_ctrl_reg_gpu_general_protect_shift                               (20)
#define  ACWRAP_ctrl_reg_gpu_os_id_3_protect_shift                               (19)
#define  ACWRAP_ctrl_reg_gpu_os_id_2_protect_shift                               (18)
#define  ACWRAP_ctrl_reg_gpu_os_id_1_protect_shift                               (17)
#define  ACWRAP_ctrl_reg_gpu_os_id_0_protect_shift                               (16)
#define  ACWRAP_ctrl_reg_dc_picindex_rw_n_shift                                  (12)
#define  ACWRAP_ctrl_reg_otp_bits_scpu_rd_n_shift                                (11)
#define  ACWRAP_ctrl_reg_otp_bits_vcpu_rd_n_shift                                (10)
#define  ACWRAP_ctrl_reg_otp_bits_acpu_rd_n_shift                                (9)
#define  ACWRAP_ctrl_reg_otp_bits_kcpu_rd_n_shift                                (8)
#define  ACWRAP_ctrl_reg_se_queue2_protect_shift                                 (4)
#define  ACWRAP_ctrl_reg_flash_release_shift                                     (0)
#define  ACWRAP_ctrl_reg_gpu_general_protect_mask                                (0x00100000)
#define  ACWRAP_ctrl_reg_gpu_os_id_3_protect_mask                                (0x00080000)
#define  ACWRAP_ctrl_reg_gpu_os_id_2_protect_mask                                (0x00040000)
#define  ACWRAP_ctrl_reg_gpu_os_id_1_protect_mask                                (0x00020000)
#define  ACWRAP_ctrl_reg_gpu_os_id_0_protect_mask                                (0x00010000)
#define  ACWRAP_ctrl_reg_dc_picindex_rw_n_mask                                   (0x00001000)
#define  ACWRAP_ctrl_reg_otp_bits_scpu_rd_n_mask                                 (0x00000800)
#define  ACWRAP_ctrl_reg_otp_bits_vcpu_rd_n_mask                                 (0x00000400)
#define  ACWRAP_ctrl_reg_otp_bits_acpu_rd_n_mask                                 (0x00000200)
#define  ACWRAP_ctrl_reg_otp_bits_kcpu_rd_n_mask                                 (0x00000100)
#define  ACWRAP_ctrl_reg_se_queue2_protect_mask                                  (0x00000030)
#define  ACWRAP_ctrl_reg_flash_release_mask                                      (0x00000001)
#define  ACWRAP_ctrl_reg_gpu_general_protect(data)                               (0x00100000&((data)<<20))
#define  ACWRAP_ctrl_reg_gpu_os_id_3_protect(data)                               (0x00080000&((data)<<19))
#define  ACWRAP_ctrl_reg_gpu_os_id_2_protect(data)                               (0x00040000&((data)<<18))
#define  ACWRAP_ctrl_reg_gpu_os_id_1_protect(data)                               (0x00020000&((data)<<17))
#define  ACWRAP_ctrl_reg_gpu_os_id_0_protect(data)                               (0x00010000&((data)<<16))
#define  ACWRAP_ctrl_reg_dc_picindex_rw_n(data)                                  (0x00001000&((data)<<12))
#define  ACWRAP_ctrl_reg_otp_bits_scpu_rd_n(data)                                (0x00000800&((data)<<11))
#define  ACWRAP_ctrl_reg_otp_bits_vcpu_rd_n(data)                                (0x00000400&((data)<<10))
#define  ACWRAP_ctrl_reg_otp_bits_acpu_rd_n(data)                                (0x00000200&((data)<<9))
#define  ACWRAP_ctrl_reg_otp_bits_kcpu_rd_n(data)                                (0x00000100&((data)<<8))
#define  ACWRAP_ctrl_reg_se_queue2_protect(data)                                 (0x00000030&((data)<<4))
#define  ACWRAP_ctrl_reg_flash_release(data)                                     (0x00000001&(data))
#define  ACWRAP_ctrl_reg_get_gpu_general_protect(data)                           ((0x00100000&(data))>>20)
#define  ACWRAP_ctrl_reg_get_gpu_os_id_3_protect(data)                           ((0x00080000&(data))>>19)
#define  ACWRAP_ctrl_reg_get_gpu_os_id_2_protect(data)                           ((0x00040000&(data))>>18)
#define  ACWRAP_ctrl_reg_get_gpu_os_id_1_protect(data)                           ((0x00020000&(data))>>17)
#define  ACWRAP_ctrl_reg_get_gpu_os_id_0_protect(data)                           ((0x00010000&(data))>>16)
#define  ACWRAP_ctrl_reg_get_dc_picindex_rw_n(data)                              ((0x00001000&(data))>>12)
#define  ACWRAP_ctrl_reg_get_otp_bits_scpu_rd_n(data)                            ((0x00000800&(data))>>11)
#define  ACWRAP_ctrl_reg_get_otp_bits_vcpu_rd_n(data)                            ((0x00000400&(data))>>10)
#define  ACWRAP_ctrl_reg_get_otp_bits_acpu_rd_n(data)                            ((0x00000200&(data))>>9)
#define  ACWRAP_ctrl_reg_get_otp_bits_kcpu_rd_n(data)                            ((0x00000100&(data))>>8)
#define  ACWRAP_ctrl_reg_get_se_queue2_protect(data)                             ((0x00000030&(data))>>4)
#define  ACWRAP_ctrl_reg_get_flash_release(data)                                 (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======ACWRAP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  sleep_mode_status:1;
    };
}acwrap_acpu_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wlast_sel:1;
        RBus_UInt32  res1:24;
        RBus_UInt32  wr_outstand_num:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  rd_outstand_num:3;
    };
}acwrap_wrapper_cfg1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  stop_dbg_ocp:1;
        RBus_UInt32  fetch_dbg_entry_ocp:1;
    };
}acwrap_ocpdbg_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  valid_entry_cnt_ocp:5;
    };
}acwrap_ocpdbg_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ocpdbg_addr:32;
    };
}acwrap_ocpdbg_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  ocpdbg_write:1;
        RBus_UInt32  ocpdbg_byte_en:8;
        RBus_UInt32  ocpdbg_tag_id:4;
    };
}acwrap_ocpdbg_status3_RBUS;

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
}acwrap_wrapper_ctrl_RBUS;

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
}acwrap_ctrl_reg_RBUS;

#else //apply LITTLE_ENDIAN

//======ACWRAP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sleep_mode_status:1;
        RBus_UInt32  res1:31;
    };
}acwrap_acpu_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_outstand_num:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  wr_outstand_num:3;
        RBus_UInt32  res2:24;
        RBus_UInt32  wlast_sel:1;
    };
}acwrap_wrapper_cfg1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fetch_dbg_entry_ocp:1;
        RBus_UInt32  stop_dbg_ocp:1;
        RBus_UInt32  res1:30;
    };
}acwrap_ocpdbg_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valid_entry_cnt_ocp:5;
        RBus_UInt32  res1:27;
    };
}acwrap_ocpdbg_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ocpdbg_addr:32;
    };
}acwrap_ocpdbg_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ocpdbg_tag_id:4;
        RBus_UInt32  ocpdbg_byte_en:8;
        RBus_UInt32  ocpdbg_write:1;
        RBus_UInt32  res1:19;
    };
}acwrap_ocpdbg_status3_RBUS;

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
}acwrap_wrapper_ctrl_RBUS;

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
}acwrap_ctrl_reg_RBUS;




#endif 


#endif 
