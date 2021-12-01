/**
* @file Merlin5-DesignSpec-TVE
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_TVE_REG_H_
#define _RBUS_TVE_REG_H_

#include "rbus_types.h"



//  TVE Register Address
#define  TVE_syncgen_rst                                                        0x1801F000
#define  TVE_syncgen_rst_reg_addr                                                "0xB801F000"
#define  TVE_syncgen_rst_reg                                                     0xB801F000
#define  TVE_syncgen_rst_inst_addr                                               "0x0000"
#define  set_TVE_syncgen_rst_reg(data)                                           (*((volatile unsigned int*)TVE_syncgen_rst_reg)=data)
#define  get_TVE_syncgen_rst_reg                                                 (*((volatile unsigned int*)TVE_syncgen_rst_reg))
#define  TVE_syncgen_rst_write_en5_shift                                         (9)
#define  TVE_syncgen_rst_hi_sync_go_shift                                        (8)
#define  TVE_syncgen_rst_write_en4_shift                                         (7)
#define  TVE_syncgen_rst_pi_sync_go_shift                                        (6)
#define  TVE_syncgen_rst_write_en3_shift                                         (5)
#define  TVE_syncgen_rst_i_sync_go_shift                                         (4)
#define  TVE_syncgen_rst_write_en5_mask                                          (0x00000200)
#define  TVE_syncgen_rst_hi_sync_go_mask                                         (0x00000100)
#define  TVE_syncgen_rst_write_en4_mask                                          (0x00000080)
#define  TVE_syncgen_rst_pi_sync_go_mask                                         (0x00000040)
#define  TVE_syncgen_rst_write_en3_mask                                          (0x00000020)
#define  TVE_syncgen_rst_i_sync_go_mask                                          (0x00000010)
#define  TVE_syncgen_rst_write_en5(data)                                         (0x00000200&((data)<<9))
#define  TVE_syncgen_rst_hi_sync_go(data)                                        (0x00000100&((data)<<8))
#define  TVE_syncgen_rst_write_en4(data)                                         (0x00000080&((data)<<7))
#define  TVE_syncgen_rst_pi_sync_go(data)                                        (0x00000040&((data)<<6))
#define  TVE_syncgen_rst_write_en3(data)                                         (0x00000020&((data)<<5))
#define  TVE_syncgen_rst_i_sync_go(data)                                         (0x00000010&((data)<<4))
#define  TVE_syncgen_rst_get_write_en5(data)                                     ((0x00000200&(data))>>9)
#define  TVE_syncgen_rst_get_hi_sync_go(data)                                    ((0x00000100&(data))>>8)
#define  TVE_syncgen_rst_get_write_en4(data)                                     ((0x00000080&(data))>>7)
#define  TVE_syncgen_rst_get_pi_sync_go(data)                                    ((0x00000040&(data))>>6)
#define  TVE_syncgen_rst_get_write_en3(data)                                     ((0x00000020&(data))>>5)
#define  TVE_syncgen_rst_get_i_sync_go(data)                                     ((0x00000010&(data))>>4)

#define  TVE_syncgen_i                                                          0x1801F004
#define  TVE_syncgen_i_reg_addr                                                  "0xB801F004"
#define  TVE_syncgen_i_reg                                                       0xB801F004
#define  TVE_syncgen_i_inst_addr                                                 "0x0001"
#define  set_TVE_syncgen_i_reg(data)                                             (*((volatile unsigned int*)TVE_syncgen_i_reg)=data)
#define  get_TVE_syncgen_i_reg                                                   (*((volatile unsigned int*)TVE_syncgen_i_reg))
#define  TVE_syncgen_i_write_en2_shift                                           (25)
#define  TVE_syncgen_i_v_thr_shift                                               (14)
#define  TVE_syncgen_i_write_en1_shift                                           (13)
#define  TVE_syncgen_i_h_thr_shift                                               (0)
#define  TVE_syncgen_i_write_en2_mask                                            (0x02000000)
#define  TVE_syncgen_i_v_thr_mask                                                (0x01FFC000)
#define  TVE_syncgen_i_write_en1_mask                                            (0x00002000)
#define  TVE_syncgen_i_h_thr_mask                                                (0x00001FFF)
#define  TVE_syncgen_i_write_en2(data)                                           (0x02000000&((data)<<25))
#define  TVE_syncgen_i_v_thr(data)                                               (0x01FFC000&((data)<<14))
#define  TVE_syncgen_i_write_en1(data)                                           (0x00002000&((data)<<13))
#define  TVE_syncgen_i_h_thr(data)                                               (0x00001FFF&(data))
#define  TVE_syncgen_i_get_write_en2(data)                                       ((0x02000000&(data))>>25)
#define  TVE_syncgen_i_get_v_thr(data)                                           ((0x01FFC000&(data))>>14)
#define  TVE_syncgen_i_get_write_en1(data)                                       ((0x00002000&(data))>>13)
#define  TVE_syncgen_i_get_h_thr(data)                                           (0x00001FFF&(data))

#define  TVE_syncgen_status_i                                                   0x1801F014
#define  TVE_syncgen_status_i_reg_addr                                           "0xB801F014"
#define  TVE_syncgen_status_i_reg                                                0xB801F014
#define  TVE_syncgen_status_i_inst_addr                                          "0x0002"
#define  set_TVE_syncgen_status_i_reg(data)                                      (*((volatile unsigned int*)TVE_syncgen_status_i_reg)=data)
#define  get_TVE_syncgen_status_i_reg                                            (*((volatile unsigned int*)TVE_syncgen_status_i_reg))
#define  TVE_syncgen_status_i_i_field_shift                                      (23)
#define  TVE_syncgen_status_i_i_vcnt_shift                                       (12)
#define  TVE_syncgen_status_i_i_field_mask                                       (0x00800000)
#define  TVE_syncgen_status_i_i_vcnt_mask                                        (0x007FF000)
#define  TVE_syncgen_status_i_i_field(data)                                      (0x00800000&((data)<<23))
#define  TVE_syncgen_status_i_i_vcnt(data)                                       (0x007FF000&((data)<<12))
#define  TVE_syncgen_status_i_get_i_field(data)                                  ((0x00800000&(data))>>23)
#define  TVE_syncgen_status_i_get_i_vcnt(data)                                   ((0x007FF000&(data))>>12)

#define  TVE_inten                                                              0x1801F01C
#define  TVE_inten_reg_addr                                                      "0xB801F01C"
#define  TVE_inten_reg                                                           0xB801F01C
#define  TVE_inten_inst_addr                                                     "0x0003"
#define  set_TVE_inten_reg(data)                                                 (*((volatile unsigned int*)TVE_inten_reg)=data)
#define  get_TVE_inten_reg                                                       (*((volatile unsigned int*)TVE_inten_reg))
#define  TVE_inten_inten_vbi_i_shift                                             (5)
#define  TVE_inten_inten_i_shift                                                 (2)
#define  TVE_inten_write_data_shift                                              (0)
#define  TVE_inten_inten_vbi_i_mask                                              (0x00000020)
#define  TVE_inten_inten_i_mask                                                  (0x00000004)
#define  TVE_inten_write_data_mask                                               (0x00000001)
#define  TVE_inten_inten_vbi_i(data)                                             (0x00000020&((data)<<5))
#define  TVE_inten_inten_i(data)                                                 (0x00000004&((data)<<2))
#define  TVE_inten_write_data(data)                                              (0x00000001&(data))
#define  TVE_inten_get_inten_vbi_i(data)                                         ((0x00000020&(data))>>5)
#define  TVE_inten_get_inten_i(data)                                             ((0x00000004&(data))>>2)
#define  TVE_inten_get_write_data(data)                                          (0x00000001&(data))

#define  TVE_intst                                                              0x1801F020
#define  TVE_intst_reg_addr                                                      "0xB801F020"
#define  TVE_intst_reg                                                           0xB801F020
#define  TVE_intst_inst_addr                                                     "0x0004"
#define  set_TVE_intst_reg(data)                                                 (*((volatile unsigned int*)TVE_intst_reg)=data)
#define  get_TVE_intst_reg                                                       (*((volatile unsigned int*)TVE_intst_reg))
#define  TVE_intst_intst_vbi_i_shift                                             (5)
#define  TVE_intst_intst_i_shift                                                 (2)
#define  TVE_intst_write_data_shift                                              (0)
#define  TVE_intst_intst_vbi_i_mask                                              (0x00000020)
#define  TVE_intst_intst_i_mask                                                  (0x00000004)
#define  TVE_intst_write_data_mask                                               (0x00000001)
#define  TVE_intst_intst_vbi_i(data)                                             (0x00000020&((data)<<5))
#define  TVE_intst_intst_i(data)                                                 (0x00000004&((data)<<2))
#define  TVE_intst_write_data(data)                                              (0x00000001&(data))
#define  TVE_intst_get_intst_vbi_i(data)                                         ((0x00000020&(data))>>5)
#define  TVE_intst_get_intst_i(data)                                             ((0x00000004&(data))>>2)
#define  TVE_intst_get_write_data(data)                                          (0x00000001&(data))

#define  TVE_intpos_i                                                           0x1801F024
#define  TVE_intpos_i_reg_addr                                                   "0xB801F024"
#define  TVE_intpos_i_reg                                                        0xB801F024
#define  TVE_intpos_i_inst_addr                                                  "0x0005"
#define  set_TVE_intpos_i_reg(data)                                              (*((volatile unsigned int*)TVE_intpos_i_reg)=data)
#define  get_TVE_intpos_i_reg                                                    (*((volatile unsigned int*)TVE_intpos_i_reg))
#define  TVE_intpos_i_write_en2_shift                                            (25)
#define  TVE_intpos_i_int_vpos_shift                                             (14)
#define  TVE_intpos_i_write_en1_shift                                            (13)
#define  TVE_intpos_i_int_hpos_shift                                             (0)
#define  TVE_intpos_i_write_en2_mask                                             (0x02000000)
#define  TVE_intpos_i_int_vpos_mask                                              (0x01FFC000)
#define  TVE_intpos_i_write_en1_mask                                             (0x00002000)
#define  TVE_intpos_i_int_hpos_mask                                              (0x00001FFF)
#define  TVE_intpos_i_write_en2(data)                                            (0x02000000&((data)<<25))
#define  TVE_intpos_i_int_vpos(data)                                             (0x01FFC000&((data)<<14))
#define  TVE_intpos_i_write_en1(data)                                            (0x00002000&((data)<<13))
#define  TVE_intpos_i_int_hpos(data)                                             (0x00001FFF&(data))
#define  TVE_intpos_i_get_write_en2(data)                                        ((0x02000000&(data))>>25)
#define  TVE_intpos_i_get_int_vpos(data)                                         ((0x01FFC000&(data))>>14)
#define  TVE_intpos_i_get_write_en1(data)                                        ((0x00002000&(data))>>13)
#define  TVE_intpos_i_get_int_hpos(data)                                         (0x00001FFF&(data))

#define  TVE_srstn                                                              0x1801F038
#define  TVE_srstn_reg_addr                                                      "0xB801F038"
#define  TVE_srstn_reg                                                           0xB801F038
#define  TVE_srstn_inst_addr                                                     "0x0006"
#define  set_TVE_srstn_reg(data)                                                 (*((volatile unsigned int*)TVE_srstn_reg)=data)
#define  get_TVE_srstn_reg                                                       (*((volatile unsigned int*)TVE_srstn_reg))
#define  TVE_srstn_srstn_shift                                                   (0)
#define  TVE_srstn_srstn_mask                                                    (0x00000001)
#define  TVE_srstn_srstn(data)                                                   (0x00000001&(data))
#define  TVE_srstn_get_srstn(data)                                               (0x00000001&(data))

#define  TVE_av_ctrl                                                            0x1801F040
#define  TVE_av_ctrl_reg_addr                                                    "0xB801F040"
#define  TVE_av_ctrl_reg                                                         0xB801F040
#define  TVE_av_ctrl_inst_addr                                                   "0x0007"
#define  set_TVE_av_ctrl_reg(data)                                               (*((volatile unsigned int*)TVE_av_ctrl_reg)=data)
#define  get_TVE_av_ctrl_reg                                                     (*((volatile unsigned int*)TVE_av_ctrl_reg))
#define  TVE_av_ctrl_i_luminace_ebl_shift                                        (7)
#define  TVE_av_ctrl_i_colorbar_ebl_shift                                        (4)
#define  TVE_av_ctrl_i_black_ebl_shift                                           (2)
#define  TVE_av_ctrl_write_data_shift                                            (0)
#define  TVE_av_ctrl_i_luminace_ebl_mask                                         (0x00000080)
#define  TVE_av_ctrl_i_colorbar_ebl_mask                                         (0x00000010)
#define  TVE_av_ctrl_i_black_ebl_mask                                            (0x00000004)
#define  TVE_av_ctrl_write_data_mask                                             (0x00000001)
#define  TVE_av_ctrl_i_luminace_ebl(data)                                        (0x00000080&((data)<<7))
#define  TVE_av_ctrl_i_colorbar_ebl(data)                                        (0x00000010&((data)<<4))
#define  TVE_av_ctrl_i_black_ebl(data)                                           (0x00000004&((data)<<2))
#define  TVE_av_ctrl_write_data(data)                                            (0x00000001&(data))
#define  TVE_av_ctrl_get_i_luminace_ebl(data)                                    ((0x00000080&(data))>>7)
#define  TVE_av_ctrl_get_i_colorbar_ebl(data)                                    ((0x00000010&(data))>>4)
#define  TVE_av_ctrl_get_i_black_ebl(data)                                       ((0x00000004&(data))>>2)
#define  TVE_av_ctrl_get_write_data(data)                                        (0x00000001&(data))

#define  TVE_ctl_luminace                                                       0x1801F0A8
#define  TVE_ctl_luminace_reg_addr                                               "0xB801F0A8"
#define  TVE_ctl_luminace_reg                                                    0xB801F0A8
#define  TVE_ctl_luminace_inst_addr                                              "0x0008"
#define  set_TVE_ctl_luminace_reg(data)                                          (*((volatile unsigned int*)TVE_ctl_luminace_reg)=data)
#define  get_TVE_ctl_luminace_reg                                                (*((volatile unsigned int*)TVE_ctl_luminace_reg))
#define  TVE_ctl_luminace_write_en1_shift                                        (4)
#define  TVE_ctl_luminace_i_lvl_shift                                            (0)
#define  TVE_ctl_luminace_write_en1_mask                                         (0x00000010)
#define  TVE_ctl_luminace_i_lvl_mask                                             (0x0000000F)
#define  TVE_ctl_luminace_write_en1(data)                                        (0x00000010&((data)<<4))
#define  TVE_ctl_luminace_i_lvl(data)                                            (0x0000000F&(data))
#define  TVE_ctl_luminace_get_write_en1(data)                                    ((0x00000010&(data))>>4)
#define  TVE_ctl_luminace_get_i_lvl(data)                                        (0x0000000F&(data))

#define  TVE_av_slew                                                            0x1801F048
#define  TVE_av_slew_reg_addr                                                    "0xB801F048"
#define  TVE_av_slew_reg                                                         0xB801F048
#define  TVE_av_slew_inst_addr                                                   "0x0009"
#define  set_TVE_av_slew_reg(data)                                               (*((volatile unsigned int*)TVE_av_slew_reg)=data)
#define  get_TVE_av_slew_reg                                                     (*((volatile unsigned int*)TVE_av_slew_reg))
#define  TVE_av_slew_write_en4_shift                                             (9)
#define  TVE_av_slew_i_en_shift                                                  (8)
#define  TVE_av_slew_write_en3_shift                                             (7)
#define  TVE_av_slew_p_en_shift                                                  (6)
#define  TVE_av_slew_write_en2_shift                                             (5)
#define  TVE_av_slew_i_slewrate_shift                                            (3)
#define  TVE_av_slew_write_en1_shift                                             (2)
#define  TVE_av_slew_p_slewrate_shift                                            (0)
#define  TVE_av_slew_write_en4_mask                                              (0x00000200)
#define  TVE_av_slew_i_en_mask                                                   (0x00000100)
#define  TVE_av_slew_write_en3_mask                                              (0x00000080)
#define  TVE_av_slew_p_en_mask                                                   (0x00000040)
#define  TVE_av_slew_write_en2_mask                                              (0x00000020)
#define  TVE_av_slew_i_slewrate_mask                                             (0x00000018)
#define  TVE_av_slew_write_en1_mask                                              (0x00000004)
#define  TVE_av_slew_p_slewrate_mask                                             (0x00000003)
#define  TVE_av_slew_write_en4(data)                                             (0x00000200&((data)<<9))
#define  TVE_av_slew_i_en(data)                                                  (0x00000100&((data)<<8))
#define  TVE_av_slew_write_en3(data)                                             (0x00000080&((data)<<7))
#define  TVE_av_slew_p_en(data)                                                  (0x00000040&((data)<<6))
#define  TVE_av_slew_write_en2(data)                                             (0x00000020&((data)<<5))
#define  TVE_av_slew_i_slewrate(data)                                            (0x00000018&((data)<<3))
#define  TVE_av_slew_write_en1(data)                                             (0x00000004&((data)<<2))
#define  TVE_av_slew_p_slewrate(data)                                            (0x00000003&(data))
#define  TVE_av_slew_get_write_en4(data)                                         ((0x00000200&(data))>>9)
#define  TVE_av_slew_get_i_en(data)                                              ((0x00000100&(data))>>8)
#define  TVE_av_slew_get_write_en3(data)                                         ((0x00000080&(data))>>7)
#define  TVE_av_slew_get_p_en(data)                                              ((0x00000040&(data))>>6)
#define  TVE_av_slew_get_write_en2(data)                                         ((0x00000020&(data))>>5)
#define  TVE_av_slew_get_i_slewrate(data)                                        ((0x00000018&(data))>>3)
#define  TVE_av_slew_get_write_en1(data)                                         ((0x00000004&(data))>>2)
#define  TVE_av_slew_get_p_slewrate(data)                                        (0x00000003&(data))

#define  TVE_slew_i_hpos                                                        0x1801F04C
#define  TVE_slew_i_hpos_reg_addr                                                "0xB801F04C"
#define  TVE_slew_i_hpos_reg                                                     0xB801F04C
#define  TVE_slew_i_hpos_inst_addr                                               "0x000A"
#define  set_TVE_slew_i_hpos_reg(data)                                           (*((volatile unsigned int*)TVE_slew_i_hpos_reg)=data)
#define  get_TVE_slew_i_hpos_reg                                                 (*((volatile unsigned int*)TVE_slew_i_hpos_reg))
#define  TVE_slew_i_hpos_write_en2_shift                                         (21)
#define  TVE_slew_i_hpos_i_h_st_shift                                            (11)
#define  TVE_slew_i_hpos_write_en1_shift                                         (10)
#define  TVE_slew_i_hpos_i_h_end_shift                                           (0)
#define  TVE_slew_i_hpos_write_en2_mask                                          (0x00200000)
#define  TVE_slew_i_hpos_i_h_st_mask                                             (0x001FF800)
#define  TVE_slew_i_hpos_write_en1_mask                                          (0x00000400)
#define  TVE_slew_i_hpos_i_h_end_mask                                            (0x000003FF)
#define  TVE_slew_i_hpos_write_en2(data)                                         (0x00200000&((data)<<21))
#define  TVE_slew_i_hpos_i_h_st(data)                                            (0x001FF800&((data)<<11))
#define  TVE_slew_i_hpos_write_en1(data)                                         (0x00000400&((data)<<10))
#define  TVE_slew_i_hpos_i_h_end(data)                                           (0x000003FF&(data))
#define  TVE_slew_i_hpos_get_write_en2(data)                                     ((0x00200000&(data))>>21)
#define  TVE_slew_i_hpos_get_i_h_st(data)                                        ((0x001FF800&(data))>>11)
#define  TVE_slew_i_hpos_get_write_en1(data)                                     ((0x00000400&(data))>>10)
#define  TVE_slew_i_hpos_get_i_h_end(data)                                       (0x000003FF&(data))

#define  TVE_av_i_hpos                                                          0x1801F050
#define  TVE_av_i_hpos_reg_addr                                                  "0xB801F050"
#define  TVE_av_i_hpos_reg                                                       0xB801F050
#define  TVE_av_i_hpos_inst_addr                                                 "0x000B"
#define  set_TVE_av_i_hpos_reg(data)                                             (*((volatile unsigned int*)TVE_av_i_hpos_reg)=data)
#define  get_TVE_av_i_hpos_reg                                                   (*((volatile unsigned int*)TVE_av_i_hpos_reg))
#define  TVE_av_i_hpos_write_en2_shift                                           (27)
#define  TVE_av_i_hpos_i_h_st_shift                                              (14)
#define  TVE_av_i_hpos_write_en1_shift                                           (13)
#define  TVE_av_i_hpos_i_h_end_shift                                             (0)
#define  TVE_av_i_hpos_write_en2_mask                                            (0x08000000)
#define  TVE_av_i_hpos_i_h_st_mask                                               (0x07FFC000)
#define  TVE_av_i_hpos_write_en1_mask                                            (0x00002000)
#define  TVE_av_i_hpos_i_h_end_mask                                              (0x00001FFF)
#define  TVE_av_i_hpos_write_en2(data)                                           (0x08000000&((data)<<27))
#define  TVE_av_i_hpos_i_h_st(data)                                              (0x07FFC000&((data)<<14))
#define  TVE_av_i_hpos_write_en1(data)                                           (0x00002000&((data)<<13))
#define  TVE_av_i_hpos_i_h_end(data)                                             (0x00001FFF&(data))
#define  TVE_av_i_hpos_get_write_en2(data)                                       ((0x08000000&(data))>>27)
#define  TVE_av_i_hpos_get_i_h_st(data)                                          ((0x07FFC000&(data))>>14)
#define  TVE_av_i_hpos_get_write_en1(data)                                       ((0x00002000&(data))>>13)
#define  TVE_av_i_hpos_get_i_h_end(data)                                         (0x00001FFF&(data))

#define  TVE_itop_vpos                                                          0x1801F05C
#define  TVE_itop_vpos_reg_addr                                                  "0xB801F05C"
#define  TVE_itop_vpos_reg                                                       0xB801F05C
#define  TVE_itop_vpos_inst_addr                                                 "0x000C"
#define  set_TVE_itop_vpos_reg(data)                                             (*((volatile unsigned int*)TVE_itop_vpos_reg)=data)
#define  get_TVE_itop_vpos_reg                                                   (*((volatile unsigned int*)TVE_itop_vpos_reg))
#define  TVE_itop_vpos_write_en2_shift                                           (23)
#define  TVE_itop_vpos_itop_v_st_shift                                           (12)
#define  TVE_itop_vpos_write_en1_shift                                           (11)
#define  TVE_itop_vpos_itop_v_end_shift                                          (0)
#define  TVE_itop_vpos_write_en2_mask                                            (0x00800000)
#define  TVE_itop_vpos_itop_v_st_mask                                            (0x007FF000)
#define  TVE_itop_vpos_write_en1_mask                                            (0x00000800)
#define  TVE_itop_vpos_itop_v_end_mask                                           (0x000007FF)
#define  TVE_itop_vpos_write_en2(data)                                           (0x00800000&((data)<<23))
#define  TVE_itop_vpos_itop_v_st(data)                                           (0x007FF000&((data)<<12))
#define  TVE_itop_vpos_write_en1(data)                                           (0x00000800&((data)<<11))
#define  TVE_itop_vpos_itop_v_end(data)                                          (0x000007FF&(data))
#define  TVE_itop_vpos_get_write_en2(data)                                       ((0x00800000&(data))>>23)
#define  TVE_itop_vpos_get_itop_v_st(data)                                       ((0x007FF000&(data))>>12)
#define  TVE_itop_vpos_get_write_en1(data)                                       ((0x00000800&(data))>>11)
#define  TVE_itop_vpos_get_itop_v_end(data)                                      (0x000007FF&(data))

#define  TVE_ibot_vpos                                                          0x1801F060
#define  TVE_ibot_vpos_reg_addr                                                  "0xB801F060"
#define  TVE_ibot_vpos_reg                                                       0xB801F060
#define  TVE_ibot_vpos_inst_addr                                                 "0x000D"
#define  set_TVE_ibot_vpos_reg(data)                                             (*((volatile unsigned int*)TVE_ibot_vpos_reg)=data)
#define  get_TVE_ibot_vpos_reg                                                   (*((volatile unsigned int*)TVE_ibot_vpos_reg))
#define  TVE_ibot_vpos_write_en2_shift                                           (23)
#define  TVE_ibot_vpos_ibot_v_st_shift                                           (12)
#define  TVE_ibot_vpos_write_en1_shift                                           (11)
#define  TVE_ibot_vpos_ibot_v_end_shift                                          (0)
#define  TVE_ibot_vpos_write_en2_mask                                            (0x00800000)
#define  TVE_ibot_vpos_ibot_v_st_mask                                            (0x007FF000)
#define  TVE_ibot_vpos_write_en1_mask                                            (0x00000800)
#define  TVE_ibot_vpos_ibot_v_end_mask                                           (0x000007FF)
#define  TVE_ibot_vpos_write_en2(data)                                           (0x00800000&((data)<<23))
#define  TVE_ibot_vpos_ibot_v_st(data)                                           (0x007FF000&((data)<<12))
#define  TVE_ibot_vpos_write_en1(data)                                           (0x00000800&((data)<<11))
#define  TVE_ibot_vpos_ibot_v_end(data)                                          (0x000007FF&(data))
#define  TVE_ibot_vpos_get_write_en2(data)                                       ((0x00800000&(data))>>23)
#define  TVE_ibot_vpos_get_ibot_v_st(data)                                       ((0x007FF000&(data))>>12)
#define  TVE_ibot_vpos_get_write_en1(data)                                       ((0x00000800&(data))>>11)
#define  TVE_ibot_vpos_get_ibot_v_end(data)                                      (0x000007FF&(data))

#define  TVE_i_colorbar_hpos                                                    0x1801F074
#define  TVE_i_colorbar_hpos_reg_addr                                            "0xB801F074"
#define  TVE_i_colorbar_hpos_reg                                                 0xB801F074
#define  TVE_i_colorbar_hpos_inst_addr                                           "0x000E"
#define  set_TVE_i_colorbar_hpos_reg(data)                                       (*((volatile unsigned int*)TVE_i_colorbar_hpos_reg)=data)
#define  get_TVE_i_colorbar_hpos_reg                                             (*((volatile unsigned int*)TVE_i_colorbar_hpos_reg))
#define  TVE_i_colorbar_hpos_write_en2_shift                                     (21)
#define  TVE_i_colorbar_hpos_i_h_width_shift                                     (11)
#define  TVE_i_colorbar_hpos_write_en1_shift                                     (10)
#define  TVE_i_colorbar_hpos_i_h_st_pos_shift                                    (0)
#define  TVE_i_colorbar_hpos_write_en2_mask                                      (0x00200000)
#define  TVE_i_colorbar_hpos_i_h_width_mask                                      (0x001FF800)
#define  TVE_i_colorbar_hpos_write_en1_mask                                      (0x00000400)
#define  TVE_i_colorbar_hpos_i_h_st_pos_mask                                     (0x000003FF)
#define  TVE_i_colorbar_hpos_write_en2(data)                                     (0x00200000&((data)<<21))
#define  TVE_i_colorbar_hpos_i_h_width(data)                                     (0x001FF800&((data)<<11))
#define  TVE_i_colorbar_hpos_write_en1(data)                                     (0x00000400&((data)<<10))
#define  TVE_i_colorbar_hpos_i_h_st_pos(data)                                    (0x000003FF&(data))
#define  TVE_i_colorbar_hpos_get_write_en2(data)                                 ((0x00200000&(data))>>21)
#define  TVE_i_colorbar_hpos_get_i_h_width(data)                                 ((0x001FF800&(data))>>11)
#define  TVE_i_colorbar_hpos_get_write_en1(data)                                 ((0x00000400&(data))>>10)
#define  TVE_i_colorbar_hpos_get_i_h_st_pos(data)                                (0x000003FF&(data))

#define  TVE_ip_vsyncpos                                                        0x1801F0B0
#define  TVE_ip_vsyncpos_reg_addr                                                "0xB801F0B0"
#define  TVE_ip_vsyncpos_reg                                                     0xB801F0B0
#define  TVE_ip_vsyncpos_inst_addr                                               "0x000F"
#define  set_TVE_ip_vsyncpos_reg(data)                                           (*((volatile unsigned int*)TVE_ip_vsyncpos_reg)=data)
#define  get_TVE_ip_vsyncpos_reg                                                 (*((volatile unsigned int*)TVE_ip_vsyncpos_reg))
#define  TVE_ip_vsyncpos_write_en2_shift                                         (21)
#define  TVE_ip_vsyncpos_ip_vsync_pos1_shift                                     (11)
#define  TVE_ip_vsyncpos_write_en1_shift                                         (10)
#define  TVE_ip_vsyncpos_ip_vsync_pos2_shift                                     (0)
#define  TVE_ip_vsyncpos_write_en2_mask                                          (0x00200000)
#define  TVE_ip_vsyncpos_ip_vsync_pos1_mask                                      (0x001FF800)
#define  TVE_ip_vsyncpos_write_en1_mask                                          (0x00000400)
#define  TVE_ip_vsyncpos_ip_vsync_pos2_mask                                      (0x000003FF)
#define  TVE_ip_vsyncpos_write_en2(data)                                         (0x00200000&((data)<<21))
#define  TVE_ip_vsyncpos_ip_vsync_pos1(data)                                     (0x001FF800&((data)<<11))
#define  TVE_ip_vsyncpos_write_en1(data)                                         (0x00000400&((data)<<10))
#define  TVE_ip_vsyncpos_ip_vsync_pos2(data)                                     (0x000003FF&(data))
#define  TVE_ip_vsyncpos_get_write_en2(data)                                     ((0x00200000&(data))>>21)
#define  TVE_ip_vsyncpos_get_ip_vsync_pos1(data)                                 ((0x001FF800&(data))>>11)
#define  TVE_ip_vsyncpos_get_write_en1(data)                                     ((0x00000400&(data))>>10)
#define  TVE_ip_vsyncpos_get_ip_vsync_pos2(data)                                 (0x000003FF&(data))

#define  TVE_ip_hsyncpos                                                        0x1801F0B4
#define  TVE_ip_hsyncpos_reg_addr                                                "0xB801F0B4"
#define  TVE_ip_hsyncpos_reg                                                     0xB801F0B4
#define  TVE_ip_hsyncpos_inst_addr                                               "0x0010"
#define  set_TVE_ip_hsyncpos_reg(data)                                           (*((volatile unsigned int*)TVE_ip_hsyncpos_reg)=data)
#define  get_TVE_ip_hsyncpos_reg                                                 (*((volatile unsigned int*)TVE_ip_hsyncpos_reg))
#define  TVE_ip_hsyncpos_hthr_shift                                              (0)
#define  TVE_ip_hsyncpos_hthr_mask                                               (0x000007FF)
#define  TVE_ip_hsyncpos_hthr(data)                                              (0x000007FF&(data))
#define  TVE_ip_hsyncpos_get_hthr(data)                                          (0x000007FF&(data))

#define  TVE_ip_input                                                           0x1801F220
#define  TVE_ip_input_reg_addr                                                   "0xB801F220"
#define  TVE_ip_input_reg                                                        0xB801F220
#define  TVE_ip_input_inst_addr                                                  "0x0011"
#define  set_TVE_ip_input_reg(data)                                              (*((volatile unsigned int*)TVE_ip_input_reg)=data)
#define  get_TVE_ip_input_reg                                                    (*((volatile unsigned int*)TVE_ip_input_reg))
#define  TVE_ip_input_y_black_lvl_shift                                          (0)
#define  TVE_ip_input_y_black_lvl_mask                                           (0x000000FF)
#define  TVE_ip_input_y_black_lvl(data)                                          (0x000000FF&(data))
#define  TVE_ip_input_get_y_black_lvl(data)                                      (0x000000FF&(data))

#define  TVE_vbi_coeff                                                          0x1801F100
#define  TVE_vbi_coeff_reg_addr                                                  "0xB801F100"
#define  TVE_vbi_coeff_reg                                                       0xB801F100
#define  TVE_vbi_coeff_inst_addr                                                 "0x0012"
#define  set_TVE_vbi_coeff_reg(data)                                             (*((volatile unsigned int*)TVE_vbi_coeff_reg)=data)
#define  get_TVE_vbi_coeff_reg                                                   (*((volatile unsigned int*)TVE_vbi_coeff_reg))
#define  TVE_vbi_coeff_write_en2_shift                                           (31)
#define  TVE_vbi_coeff_gain_shift                                                (16)
#define  TVE_vbi_coeff_write_en1_shift                                           (15)
#define  TVE_vbi_coeff_offset_shift                                              (0)
#define  TVE_vbi_coeff_write_en2_mask                                            (0x80000000)
#define  TVE_vbi_coeff_gain_mask                                                 (0x7FFF0000)
#define  TVE_vbi_coeff_write_en1_mask                                            (0x00008000)
#define  TVE_vbi_coeff_offset_mask                                               (0x00007FFF)
#define  TVE_vbi_coeff_write_en2(data)                                           (0x80000000&((data)<<31))
#define  TVE_vbi_coeff_gain(data)                                                (0x7FFF0000&((data)<<16))
#define  TVE_vbi_coeff_write_en1(data)                                           (0x00008000&((data)<<15))
#define  TVE_vbi_coeff_offset(data)                                              (0x00007FFF&(data))
#define  TVE_vbi_coeff_get_write_en2(data)                                       ((0x80000000&(data))>>31)
#define  TVE_vbi_coeff_get_gain(data)                                            ((0x7FFF0000&(data))>>16)
#define  TVE_vbi_coeff_get_write_en1(data)                                       ((0x00008000&(data))>>15)
#define  TVE_vbi_coeff_get_offset(data)                                          (0x00007FFF&(data))

#define  TVE_blnk_coeff                                                         0x1801F104
#define  TVE_blnk_coeff_reg_addr                                                 "0xB801F104"
#define  TVE_blnk_coeff_reg                                                      0xB801F104
#define  TVE_blnk_coeff_inst_addr                                                "0x0013"
#define  set_TVE_blnk_coeff_reg(data)                                            (*((volatile unsigned int*)TVE_blnk_coeff_reg)=data)
#define  get_TVE_blnk_coeff_reg                                                  (*((volatile unsigned int*)TVE_blnk_coeff_reg))
#define  TVE_blnk_coeff_write_en2_shift                                          (31)
#define  TVE_blnk_coeff_gain_shift                                               (16)
#define  TVE_blnk_coeff_write_en1_shift                                          (15)
#define  TVE_blnk_coeff_offset_shift                                             (0)
#define  TVE_blnk_coeff_write_en2_mask                                           (0x80000000)
#define  TVE_blnk_coeff_gain_mask                                                (0x7FFF0000)
#define  TVE_blnk_coeff_write_en1_mask                                           (0x00008000)
#define  TVE_blnk_coeff_offset_mask                                              (0x00007FFF)
#define  TVE_blnk_coeff_write_en2(data)                                          (0x80000000&((data)<<31))
#define  TVE_blnk_coeff_gain(data)                                               (0x7FFF0000&((data)<<16))
#define  TVE_blnk_coeff_write_en1(data)                                          (0x00008000&((data)<<15))
#define  TVE_blnk_coeff_offset(data)                                             (0x00007FFF&(data))
#define  TVE_blnk_coeff_get_write_en2(data)                                      ((0x80000000&(data))>>31)
#define  TVE_blnk_coeff_get_gain(data)                                           ((0x7FFF0000&(data))>>16)
#define  TVE_blnk_coeff_get_write_en1(data)                                      ((0x00008000&(data))>>15)
#define  TVE_blnk_coeff_get_offset(data)                                         (0x00007FFF&(data))

#define  TVE_av_coeff1                                                          0x1801F108
#define  TVE_av_coeff1_reg_addr                                                  "0xB801F108"
#define  TVE_av_coeff1_reg                                                       0xB801F108
#define  TVE_av_coeff1_inst_addr                                                 "0x0014"
#define  set_TVE_av_coeff1_reg(data)                                             (*((volatile unsigned int*)TVE_av_coeff1_reg)=data)
#define  get_TVE_av_coeff1_reg                                                   (*((volatile unsigned int*)TVE_av_coeff1_reg))
#define  TVE_av_coeff1_write_en2_shift                                           (31)
#define  TVE_av_coeff1_c2_shift                                                  (16)
#define  TVE_av_coeff1_write_en1_shift                                           (15)
#define  TVE_av_coeff1_c1_shift                                                  (0)
#define  TVE_av_coeff1_write_en2_mask                                            (0x80000000)
#define  TVE_av_coeff1_c2_mask                                                   (0x7FFF0000)
#define  TVE_av_coeff1_write_en1_mask                                            (0x00008000)
#define  TVE_av_coeff1_c1_mask                                                   (0x00007FFF)
#define  TVE_av_coeff1_write_en2(data)                                           (0x80000000&((data)<<31))
#define  TVE_av_coeff1_c2(data)                                                  (0x7FFF0000&((data)<<16))
#define  TVE_av_coeff1_write_en1(data)                                           (0x00008000&((data)<<15))
#define  TVE_av_coeff1_c1(data)                                                  (0x00007FFF&(data))
#define  TVE_av_coeff1_get_write_en2(data)                                       ((0x80000000&(data))>>31)
#define  TVE_av_coeff1_get_c2(data)                                              ((0x7FFF0000&(data))>>16)
#define  TVE_av_coeff1_get_write_en1(data)                                       ((0x00008000&(data))>>15)
#define  TVE_av_coeff1_get_c1(data)                                              (0x00007FFF&(data))

#define  TVE_av_coeff2                                                          0x1801F10C
#define  TVE_av_coeff2_reg_addr                                                  "0xB801F10C"
#define  TVE_av_coeff2_reg                                                       0xB801F10C
#define  TVE_av_coeff2_inst_addr                                                 "0x0015"
#define  set_TVE_av_coeff2_reg(data)                                             (*((volatile unsigned int*)TVE_av_coeff2_reg)=data)
#define  get_TVE_av_coeff2_reg                                                   (*((volatile unsigned int*)TVE_av_coeff2_reg))
#define  TVE_av_coeff2_write_en2_shift                                           (31)
#define  TVE_av_coeff2_c3_shift                                                  (16)
#define  TVE_av_coeff2_write_en1_shift                                           (15)
#define  TVE_av_coeff2_c4_shift                                                  (0)
#define  TVE_av_coeff2_write_en2_mask                                            (0x80000000)
#define  TVE_av_coeff2_c3_mask                                                   (0x7FFF0000)
#define  TVE_av_coeff2_write_en1_mask                                            (0x00008000)
#define  TVE_av_coeff2_c4_mask                                                   (0x00007FFF)
#define  TVE_av_coeff2_write_en2(data)                                           (0x80000000&((data)<<31))
#define  TVE_av_coeff2_c3(data)                                                  (0x7FFF0000&((data)<<16))
#define  TVE_av_coeff2_write_en1(data)                                           (0x00008000&((data)<<15))
#define  TVE_av_coeff2_c4(data)                                                  (0x00007FFF&(data))
#define  TVE_av_coeff2_get_write_en2(data)                                       ((0x80000000&(data))>>31)
#define  TVE_av_coeff2_get_c3(data)                                              ((0x7FFF0000&(data))>>16)
#define  TVE_av_coeff2_get_write_en1(data)                                       ((0x00008000&(data))>>15)
#define  TVE_av_coeff2_get_c4(data)                                              (0x00007FFF&(data))

#define  TVE_av_coeff3                                                          0x1801F110
#define  TVE_av_coeff3_reg_addr                                                  "0xB801F110"
#define  TVE_av_coeff3_reg                                                       0xB801F110
#define  TVE_av_coeff3_inst_addr                                                 "0x0016"
#define  set_TVE_av_coeff3_reg(data)                                             (*((volatile unsigned int*)TVE_av_coeff3_reg)=data)
#define  get_TVE_av_coeff3_reg                                                   (*((volatile unsigned int*)TVE_av_coeff3_reg))
#define  TVE_av_coeff3_write_en2_shift                                           (31)
#define  TVE_av_coeff3_c5_shift                                                  (16)
#define  TVE_av_coeff3_write_en1_shift                                           (15)
#define  TVE_av_coeff3_c6_shift                                                  (0)
#define  TVE_av_coeff3_write_en2_mask                                            (0x80000000)
#define  TVE_av_coeff3_c5_mask                                                   (0x7FFF0000)
#define  TVE_av_coeff3_write_en1_mask                                            (0x00008000)
#define  TVE_av_coeff3_c6_mask                                                   (0x00007FFF)
#define  TVE_av_coeff3_write_en2(data)                                           (0x80000000&((data)<<31))
#define  TVE_av_coeff3_c5(data)                                                  (0x7FFF0000&((data)<<16))
#define  TVE_av_coeff3_write_en1(data)                                           (0x00008000&((data)<<15))
#define  TVE_av_coeff3_c6(data)                                                  (0x00007FFF&(data))
#define  TVE_av_coeff3_get_write_en2(data)                                       ((0x80000000&(data))>>31)
#define  TVE_av_coeff3_get_c5(data)                                              ((0x7FFF0000&(data))>>16)
#define  TVE_av_coeff3_get_write_en1(data)                                       ((0x00008000&(data))>>15)
#define  TVE_av_coeff3_get_c6(data)                                              (0x00007FFF&(data))

#define  TVE_av_coeff4                                                          0x1801F114
#define  TVE_av_coeff4_reg_addr                                                  "0xB801F114"
#define  TVE_av_coeff4_reg                                                       0xB801F114
#define  TVE_av_coeff4_inst_addr                                                 "0x0017"
#define  set_TVE_av_coeff4_reg(data)                                             (*((volatile unsigned int*)TVE_av_coeff4_reg)=data)
#define  get_TVE_av_coeff4_reg                                                   (*((volatile unsigned int*)TVE_av_coeff4_reg))
#define  TVE_av_coeff4_write_en2_shift                                           (31)
#define  TVE_av_coeff4_k1_shift                                                  (16)
#define  TVE_av_coeff4_write_en1_shift                                           (15)
#define  TVE_av_coeff4_k2_shift                                                  (0)
#define  TVE_av_coeff4_write_en2_mask                                            (0x80000000)
#define  TVE_av_coeff4_k1_mask                                                   (0x7FFF0000)
#define  TVE_av_coeff4_write_en1_mask                                            (0x00008000)
#define  TVE_av_coeff4_k2_mask                                                   (0x00007FFF)
#define  TVE_av_coeff4_write_en2(data)                                           (0x80000000&((data)<<31))
#define  TVE_av_coeff4_k1(data)                                                  (0x7FFF0000&((data)<<16))
#define  TVE_av_coeff4_write_en1(data)                                           (0x00008000&((data)<<15))
#define  TVE_av_coeff4_k2(data)                                                  (0x00007FFF&(data))
#define  TVE_av_coeff4_get_write_en2(data)                                       ((0x80000000&(data))>>31)
#define  TVE_av_coeff4_get_k1(data)                                              ((0x7FFF0000&(data))>>16)
#define  TVE_av_coeff4_get_write_en1(data)                                       ((0x00008000&(data))>>15)
#define  TVE_av_coeff4_get_k2(data)                                              (0x00007FFF&(data))

#define  TVE_av_coeff5                                                          0x1801F118
#define  TVE_av_coeff5_reg_addr                                                  "0xB801F118"
#define  TVE_av_coeff5_reg                                                       0xB801F118
#define  TVE_av_coeff5_inst_addr                                                 "0x0018"
#define  set_TVE_av_coeff5_reg(data)                                             (*((volatile unsigned int*)TVE_av_coeff5_reg)=data)
#define  get_TVE_av_coeff5_reg                                                   (*((volatile unsigned int*)TVE_av_coeff5_reg))
#define  TVE_av_coeff5_write_en1_shift                                           (17)
#define  TVE_av_coeff5_vbi_gain_ebl_shift                                        (16)
#define  TVE_av_coeff5_write_en2_shift                                           (15)
#define  TVE_av_coeff5_k3_shift                                                  (0)
#define  TVE_av_coeff5_write_en1_mask                                            (0x00020000)
#define  TVE_av_coeff5_vbi_gain_ebl_mask                                         (0x00010000)
#define  TVE_av_coeff5_write_en2_mask                                            (0x00008000)
#define  TVE_av_coeff5_k3_mask                                                   (0x00007FFF)
#define  TVE_av_coeff5_write_en1(data)                                           (0x00020000&((data)<<17))
#define  TVE_av_coeff5_vbi_gain_ebl(data)                                        (0x00010000&((data)<<16))
#define  TVE_av_coeff5_write_en2(data)                                           (0x00008000&((data)<<15))
#define  TVE_av_coeff5_k3(data)                                                  (0x00007FFF&(data))
#define  TVE_av_coeff5_get_write_en1(data)                                       ((0x00020000&(data))>>17)
#define  TVE_av_coeff5_get_vbi_gain_ebl(data)                                    ((0x00010000&(data))>>16)
#define  TVE_av_coeff5_get_write_en2(data)                                       ((0x00008000&(data))>>15)
#define  TVE_av_coeff5_get_k3(data)                                              (0x00007FFF&(data))

#define  TVE_TVE_ctrl                                                           0x1801F130
#define  TVE_TVE_ctrl_reg_addr                                                   "0xB801F130"
#define  TVE_TVE_ctrl_reg                                                        0xB801F130
#define  TVE_TVE_ctrl_inst_addr                                                  "0x0019"
#define  set_TVE_TVE_ctrl_reg(data)                                              (*((volatile unsigned int*)TVE_TVE_ctrl_reg)=data)
#define  get_TVE_TVE_ctrl_reg                                                    (*((volatile unsigned int*)TVE_TVE_ctrl_reg))
#define  TVE_TVE_ctrl_tve_rb_ebl_shift                                           (3)
#define  TVE_TVE_ctrl_tve_g_ebl_shift                                            (2)
#define  TVE_TVE_ctrl_tve_ebl_shift                                              (1)
#define  TVE_TVE_ctrl_write_data_shift                                           (0)
#define  TVE_TVE_ctrl_tve_rb_ebl_mask                                            (0x00000008)
#define  TVE_TVE_ctrl_tve_g_ebl_mask                                             (0x00000004)
#define  TVE_TVE_ctrl_tve_ebl_mask                                               (0x00000002)
#define  TVE_TVE_ctrl_write_data_mask                                            (0x00000001)
#define  TVE_TVE_ctrl_tve_rb_ebl(data)                                           (0x00000008&((data)<<3))
#define  TVE_TVE_ctrl_tve_g_ebl(data)                                            (0x00000004&((data)<<2))
#define  TVE_TVE_ctrl_tve_ebl(data)                                              (0x00000002&((data)<<1))
#define  TVE_TVE_ctrl_write_data(data)                                           (0x00000001&(data))
#define  TVE_TVE_ctrl_get_tve_rb_ebl(data)                                       ((0x00000008&(data))>>3)
#define  TVE_TVE_ctrl_get_tve_g_ebl(data)                                        ((0x00000004&(data))>>2)
#define  TVE_TVE_ctrl_get_tve_ebl(data)                                          ((0x00000002&(data))>>1)
#define  TVE_TVE_ctrl_get_write_data(data)                                       (0x00000001&(data))

#define  TVE_TVE_len                                                            0x1801F138
#define  TVE_TVE_len_reg_addr                                                    "0xB801F138"
#define  TVE_TVE_len_reg                                                         0xB801F138
#define  TVE_TVE_len_inst_addr                                                   "0x001A"
#define  set_TVE_TVE_len_reg(data)                                               (*((volatile unsigned int*)TVE_TVE_len_reg)=data)
#define  get_TVE_TVE_len_reg                                                     (*((volatile unsigned int*)TVE_TVE_len_reg))
#define  TVE_TVE_len_write_en4_shift                                             (29)
#define  TVE_TVE_len_tve_st_ps_shift                                             (21)
#define  TVE_TVE_len_write_en3_shift                                             (20)
#define  TVE_TVE_len_tve_ps_len_shift                                            (14)
#define  TVE_TVE_len_write_en2_shift                                             (13)
#define  TVE_TVE_len_tve_agc_len_shift                                           (7)
#define  TVE_TVE_len_write_en1_shift                                             (6)
#define  TVE_TVE_len_tve_blnk_len_shift                                          (0)
#define  TVE_TVE_len_write_en4_mask                                              (0x20000000)
#define  TVE_TVE_len_tve_st_ps_mask                                              (0x1FE00000)
#define  TVE_TVE_len_write_en3_mask                                              (0x00100000)
#define  TVE_TVE_len_tve_ps_len_mask                                             (0x000FC000)
#define  TVE_TVE_len_write_en2_mask                                              (0x00002000)
#define  TVE_TVE_len_tve_agc_len_mask                                            (0x00001F80)
#define  TVE_TVE_len_write_en1_mask                                              (0x00000040)
#define  TVE_TVE_len_tve_blnk_len_mask                                           (0x0000003F)
#define  TVE_TVE_len_write_en4(data)                                             (0x20000000&((data)<<29))
#define  TVE_TVE_len_tve_st_ps(data)                                             (0x1FE00000&((data)<<21))
#define  TVE_TVE_len_write_en3(data)                                             (0x00100000&((data)<<20))
#define  TVE_TVE_len_tve_ps_len(data)                                            (0x000FC000&((data)<<14))
#define  TVE_TVE_len_write_en2(data)                                             (0x00002000&((data)<<13))
#define  TVE_TVE_len_tve_agc_len(data)                                           (0x00001F80&((data)<<7))
#define  TVE_TVE_len_write_en1(data)                                             (0x00000040&((data)<<6))
#define  TVE_TVE_len_tve_blnk_len(data)                                          (0x0000003F&(data))
#define  TVE_TVE_len_get_write_en4(data)                                         ((0x20000000&(data))>>29)
#define  TVE_TVE_len_get_tve_st_ps(data)                                         ((0x1FE00000&(data))>>21)
#define  TVE_TVE_len_get_write_en3(data)                                         ((0x00100000&(data))>>20)
#define  TVE_TVE_len_get_tve_ps_len(data)                                        ((0x000FC000&(data))>>14)
#define  TVE_TVE_len_get_write_en2(data)                                         ((0x00002000&(data))>>13)
#define  TVE_TVE_len_get_tve_agc_len(data)                                       ((0x00001F80&(data))>>7)
#define  TVE_TVE_len_get_write_en1(data)                                         ((0x00000040&(data))>>6)
#define  TVE_TVE_len_get_tve_blnk_len(data)                                      (0x0000003F&(data))

#define  TVE_cgms_ctrl                                                          0x1801F160
#define  TVE_cgms_ctrl_reg_addr                                                  "0xB801F160"
#define  TVE_cgms_ctrl_reg                                                       0xB801F160
#define  TVE_cgms_ctrl_inst_addr                                                 "0x001B"
#define  set_TVE_cgms_ctrl_reg(data)                                             (*((volatile unsigned int*)TVE_cgms_ctrl_reg)=data)
#define  get_TVE_cgms_ctrl_reg                                                   (*((volatile unsigned int*)TVE_cgms_ctrl_reg))
#define  TVE_cgms_ctrl_write_en3_shift                                           (24)
#define  TVE_cgms_ctrl_cgms_i_ebl_shift                                          (23)
#define  TVE_cgms_ctrl_write_en2_shift                                           (22)
#define  TVE_cgms_ctrl_cgms_p_ebl_shift                                          (21)
#define  TVE_cgms_ctrl_write_en1_shift                                           (20)
#define  TVE_cgms_ctrl_cgms_data_shift                                           (0)
#define  TVE_cgms_ctrl_write_en3_mask                                            (0x01000000)
#define  TVE_cgms_ctrl_cgms_i_ebl_mask                                           (0x00800000)
#define  TVE_cgms_ctrl_write_en2_mask                                            (0x00400000)
#define  TVE_cgms_ctrl_cgms_p_ebl_mask                                           (0x00200000)
#define  TVE_cgms_ctrl_write_en1_mask                                            (0x00100000)
#define  TVE_cgms_ctrl_cgms_data_mask                                            (0x000FFFFF)
#define  TVE_cgms_ctrl_write_en3(data)                                           (0x01000000&((data)<<24))
#define  TVE_cgms_ctrl_cgms_i_ebl(data)                                          (0x00800000&((data)<<23))
#define  TVE_cgms_ctrl_write_en2(data)                                           (0x00400000&((data)<<22))
#define  TVE_cgms_ctrl_cgms_p_ebl(data)                                          (0x00200000&((data)<<21))
#define  TVE_cgms_ctrl_write_en1(data)                                           (0x00100000&((data)<<20))
#define  TVE_cgms_ctrl_cgms_data(data)                                           (0x000FFFFF&(data))
#define  TVE_cgms_ctrl_get_write_en3(data)                                       ((0x01000000&(data))>>24)
#define  TVE_cgms_ctrl_get_cgms_i_ebl(data)                                      ((0x00800000&(data))>>23)
#define  TVE_cgms_ctrl_get_write_en2(data)                                       ((0x00400000&(data))>>22)
#define  TVE_cgms_ctrl_get_cgms_p_ebl(data)                                      ((0x00200000&(data))>>21)
#define  TVE_cgms_ctrl_get_write_en1(data)                                       ((0x00100000&(data))>>20)
#define  TVE_cgms_ctrl_get_cgms_data(data)                                       (0x000FFFFF&(data))

#define  TVE_cgms_ctrl1                                                         0x1801F310
#define  TVE_cgms_ctrl1_reg_addr                                                 "0xB801F310"
#define  TVE_cgms_ctrl1_reg                                                      0xB801F310
#define  TVE_cgms_ctrl1_inst_addr                                                "0x001C"
#define  set_TVE_cgms_ctrl1_reg(data)                                            (*((volatile unsigned int*)TVE_cgms_ctrl1_reg)=data)
#define  get_TVE_cgms_ctrl1_reg                                                  (*((volatile unsigned int*)TVE_cgms_ctrl1_reg))
#define  TVE_cgms_ctrl1_cgms_data_shift                                          (0)
#define  TVE_cgms_ctrl1_cgms_data_mask                                           (0x000FFFFF)
#define  TVE_cgms_ctrl1_cgms_data(data)                                          (0x000FFFFF&(data))
#define  TVE_cgms_ctrl1_get_cgms_data(data)                                      (0x000FFFFF&(data))

#define  TVE_cgms_i_vpos                                                        0x1801F164
#define  TVE_cgms_i_vpos_reg_addr                                                "0xB801F164"
#define  TVE_cgms_i_vpos_reg                                                     0xB801F164
#define  TVE_cgms_i_vpos_inst_addr                                               "0x001D"
#define  set_TVE_cgms_i_vpos_reg(data)                                           (*((volatile unsigned int*)TVE_cgms_i_vpos_reg)=data)
#define  get_TVE_cgms_i_vpos_reg                                                 (*((volatile unsigned int*)TVE_cgms_i_vpos_reg))
#define  TVE_cgms_i_vpos_write_en2_shift                                         (20)
#define  TVE_cgms_i_vpos_cgms_i_vpos1_shift                                      (11)
#define  TVE_cgms_i_vpos_write_en1_shift                                         (10)
#define  TVE_cgms_i_vpos_cgms_i_vpos2_shift                                      (0)
#define  TVE_cgms_i_vpos_write_en2_mask                                          (0x00100000)
#define  TVE_cgms_i_vpos_cgms_i_vpos1_mask                                       (0x000FF800)
#define  TVE_cgms_i_vpos_write_en1_mask                                          (0x00000400)
#define  TVE_cgms_i_vpos_cgms_i_vpos2_mask                                       (0x000003FF)
#define  TVE_cgms_i_vpos_write_en2(data)                                         (0x00100000&((data)<<20))
#define  TVE_cgms_i_vpos_cgms_i_vpos1(data)                                      (0x000FF800&((data)<<11))
#define  TVE_cgms_i_vpos_write_en1(data)                                         (0x00000400&((data)<<10))
#define  TVE_cgms_i_vpos_cgms_i_vpos2(data)                                      (0x000003FF&(data))
#define  TVE_cgms_i_vpos_get_write_en2(data)                                     ((0x00100000&(data))>>20)
#define  TVE_cgms_i_vpos_get_cgms_i_vpos1(data)                                  ((0x000FF800&(data))>>11)
#define  TVE_cgms_i_vpos_get_write_en1(data)                                     ((0x00000400&(data))>>10)
#define  TVE_cgms_i_vpos_get_cgms_i_vpos2(data)                                  (0x000003FF&(data))

#define  TVE_cgms_i_hpos                                                        0x1801F16C
#define  TVE_cgms_i_hpos_reg_addr                                                "0xB801F16C"
#define  TVE_cgms_i_hpos_reg                                                     0xB801F16C
#define  TVE_cgms_i_hpos_inst_addr                                               "0x001E"
#define  set_TVE_cgms_i_hpos_reg(data)                                           (*((volatile unsigned int*)TVE_cgms_i_hpos_reg)=data)
#define  get_TVE_cgms_i_hpos_reg                                                 (*((volatile unsigned int*)TVE_cgms_i_hpos_reg))
#define  TVE_cgms_i_hpos_write_en2_shift                                         (21)
#define  TVE_cgms_i_hpos_cgms_i_hst_shift                                        (11)
#define  TVE_cgms_i_hpos_write_en1_shift                                         (10)
#define  TVE_cgms_i_hpos_cgms_i_len_shift                                        (0)
#define  TVE_cgms_i_hpos_write_en2_mask                                          (0x00200000)
#define  TVE_cgms_i_hpos_cgms_i_hst_mask                                         (0x001FF800)
#define  TVE_cgms_i_hpos_write_en1_mask                                          (0x00000400)
#define  TVE_cgms_i_hpos_cgms_i_len_mask                                         (0x000003FF)
#define  TVE_cgms_i_hpos_write_en2(data)                                         (0x00200000&((data)<<21))
#define  TVE_cgms_i_hpos_cgms_i_hst(data)                                        (0x001FF800&((data)<<11))
#define  TVE_cgms_i_hpos_write_en1(data)                                         (0x00000400&((data)<<10))
#define  TVE_cgms_i_hpos_cgms_i_len(data)                                        (0x000003FF&(data))
#define  TVE_cgms_i_hpos_get_write_en2(data)                                     ((0x00200000&(data))>>21)
#define  TVE_cgms_i_hpos_get_cgms_i_hst(data)                                    ((0x001FF800&(data))>>11)
#define  TVE_cgms_i_hpos_get_write_en1(data)                                     ((0x00000400&(data))>>10)
#define  TVE_cgms_i_hpos_get_cgms_i_len(data)                                    (0x000003FF&(data))

#define  TVE_cgms_b_hdr                                                         0x1801F358
#define  TVE_cgms_b_hdr_reg_addr                                                 "0xB801F358"
#define  TVE_cgms_b_hdr_reg                                                      0xB801F358
#define  TVE_cgms_b_hdr_inst_addr                                                "0x001F"
#define  set_TVE_cgms_b_hdr_reg(data)                                            (*((volatile unsigned int*)TVE_cgms_b_hdr_reg)=data)
#define  get_TVE_cgms_b_hdr_reg                                                  (*((volatile unsigned int*)TVE_cgms_b_hdr_reg))
#define  TVE_cgms_b_hdr_cgms_hdr_shift                                           (0)
#define  TVE_cgms_b_hdr_cgms_hdr_mask                                            (0x0000003F)
#define  TVE_cgms_b_hdr_cgms_hdr(data)                                           (0x0000003F&(data))
#define  TVE_cgms_b_hdr_get_cgms_hdr(data)                                       (0x0000003F&(data))

#define  TVE_cgms_b_data_0                                                      0x1801F35C
#define  TVE_cgms_b_data_0_reg_addr                                              "0xB801F35C"
#define  TVE_cgms_b_data_0_reg                                                   0xB801F35C
#define  TVE_cgms_b_data_0_inst_addr                                             "0x0020"
#define  set_TVE_cgms_b_data_0_reg(data)                                         (*((volatile unsigned int*)TVE_cgms_b_data_0_reg)=data)
#define  get_TVE_cgms_b_data_0_reg                                               (*((volatile unsigned int*)TVE_cgms_b_data_0_reg))
#define  TVE_cgms_b_data_0_cgms_data_shift                                       (0)
#define  TVE_cgms_b_data_0_cgms_data_mask                                        (0xFFFFFFFF)
#define  TVE_cgms_b_data_0_cgms_data(data)                                       (0xFFFFFFFF&(data))
#define  TVE_cgms_b_data_0_get_cgms_data(data)                                   (0xFFFFFFFF&(data))

#define  TVE_cgms_b_data_1                                                      0x1801F360
#define  TVE_cgms_b_data_1_reg_addr                                              "0xB801F360"
#define  TVE_cgms_b_data_1_reg                                                   0xB801F360
#define  TVE_cgms_b_data_1_inst_addr                                             "0x0021"
#define  set_TVE_cgms_b_data_1_reg(data)                                         (*((volatile unsigned int*)TVE_cgms_b_data_1_reg)=data)
#define  get_TVE_cgms_b_data_1_reg                                               (*((volatile unsigned int*)TVE_cgms_b_data_1_reg))
#define  TVE_cgms_b_data_1_cgms_data_shift                                       (0)
#define  TVE_cgms_b_data_1_cgms_data_mask                                        (0xFFFFFFFF)
#define  TVE_cgms_b_data_1_cgms_data(data)                                       (0xFFFFFFFF&(data))
#define  TVE_cgms_b_data_1_get_cgms_data(data)                                   (0xFFFFFFFF&(data))

#define  TVE_cgms_b_data_2                                                      0x1801F364
#define  TVE_cgms_b_data_2_reg_addr                                              "0xB801F364"
#define  TVE_cgms_b_data_2_reg                                                   0xB801F364
#define  TVE_cgms_b_data_2_inst_addr                                             "0x0022"
#define  set_TVE_cgms_b_data_2_reg(data)                                         (*((volatile unsigned int*)TVE_cgms_b_data_2_reg)=data)
#define  get_TVE_cgms_b_data_2_reg                                               (*((volatile unsigned int*)TVE_cgms_b_data_2_reg))
#define  TVE_cgms_b_data_2_cgms_data_shift                                       (0)
#define  TVE_cgms_b_data_2_cgms_data_mask                                        (0xFFFFFFFF)
#define  TVE_cgms_b_data_2_cgms_data(data)                                       (0xFFFFFFFF&(data))
#define  TVE_cgms_b_data_2_get_cgms_data(data)                                   (0xFFFFFFFF&(data))

#define  TVE_cgms_b_data_3                                                      0x1801F368
#define  TVE_cgms_b_data_3_reg_addr                                              "0xB801F368"
#define  TVE_cgms_b_data_3_reg                                                   0xB801F368
#define  TVE_cgms_b_data_3_inst_addr                                             "0x0023"
#define  set_TVE_cgms_b_data_3_reg(data)                                         (*((volatile unsigned int*)TVE_cgms_b_data_3_reg)=data)
#define  get_TVE_cgms_b_data_3_reg                                               (*((volatile unsigned int*)TVE_cgms_b_data_3_reg))
#define  TVE_cgms_b_data_3_cgms_data_shift                                       (0)
#define  TVE_cgms_b_data_3_cgms_data_mask                                        (0xFFFFFFFF)
#define  TVE_cgms_b_data_3_cgms_data(data)                                       (0xFFFFFFFF&(data))
#define  TVE_cgms_b_data_3_get_cgms_data(data)                                   (0xFFFFFFFF&(data))

#define  TVE_wss_ctrl                                                           0x1801F174
#define  TVE_wss_ctrl_reg_addr                                                   "0xB801F174"
#define  TVE_wss_ctrl_reg                                                        0xB801F174
#define  TVE_wss_ctrl_inst_addr                                                  "0x0024"
#define  set_TVE_wss_ctrl_reg(data)                                              (*((volatile unsigned int*)TVE_wss_ctrl_reg)=data)
#define  get_TVE_wss_ctrl_reg                                                    (*((volatile unsigned int*)TVE_wss_ctrl_reg))
#define  TVE_wss_ctrl_write_en4_shift                                            (30)
#define  TVE_wss_ctrl_wss_ebl_shift                                              (29)
#define  TVE_wss_ctrl_write_en3_shift                                            (28)
#define  TVE_wss_ctrl_wss_intp_sel_shift                                         (27)
#define  TVE_wss_ctrl_write_en2_shift                                            (26)
#define  TVE_wss_ctrl_wss_end_hpos_shift                                         (15)
#define  TVE_wss_ctrl_write_en1_shift                                            (14)
#define  TVE_wss_ctrl_wss_data_shift                                             (0)
#define  TVE_wss_ctrl_write_en4_mask                                             (0x40000000)
#define  TVE_wss_ctrl_wss_ebl_mask                                               (0x20000000)
#define  TVE_wss_ctrl_write_en3_mask                                             (0x10000000)
#define  TVE_wss_ctrl_wss_intp_sel_mask                                          (0x08000000)
#define  TVE_wss_ctrl_write_en2_mask                                             (0x04000000)
#define  TVE_wss_ctrl_wss_end_hpos_mask                                          (0x03FF8000)
#define  TVE_wss_ctrl_write_en1_mask                                             (0x00004000)
#define  TVE_wss_ctrl_wss_data_mask                                              (0x00003FFF)
#define  TVE_wss_ctrl_write_en4(data)                                            (0x40000000&((data)<<30))
#define  TVE_wss_ctrl_wss_ebl(data)                                              (0x20000000&((data)<<29))
#define  TVE_wss_ctrl_write_en3(data)                                            (0x10000000&((data)<<28))
#define  TVE_wss_ctrl_wss_intp_sel(data)                                         (0x08000000&((data)<<27))
#define  TVE_wss_ctrl_write_en2(data)                                            (0x04000000&((data)<<26))
#define  TVE_wss_ctrl_wss_end_hpos(data)                                         (0x03FF8000&((data)<<15))
#define  TVE_wss_ctrl_write_en1(data)                                            (0x00004000&((data)<<14))
#define  TVE_wss_ctrl_wss_data(data)                                             (0x00003FFF&(data))
#define  TVE_wss_ctrl_get_write_en4(data)                                        ((0x40000000&(data))>>30)
#define  TVE_wss_ctrl_get_wss_ebl(data)                                          ((0x20000000&(data))>>29)
#define  TVE_wss_ctrl_get_write_en3(data)                                        ((0x10000000&(data))>>28)
#define  TVE_wss_ctrl_get_wss_intp_sel(data)                                     ((0x08000000&(data))>>27)
#define  TVE_wss_ctrl_get_write_en2(data)                                        ((0x04000000&(data))>>26)
#define  TVE_wss_ctrl_get_wss_end_hpos(data)                                     ((0x03FF8000&(data))>>15)
#define  TVE_wss_ctrl_get_write_en1(data)                                        ((0x00004000&(data))>>14)
#define  TVE_wss_ctrl_get_wss_data(data)                                         (0x00003FFF&(data))

#define  TVE_wss_pos                                                            0x1801F178
#define  TVE_wss_pos_reg_addr                                                    "0xB801F178"
#define  TVE_wss_pos_reg                                                         0xB801F178
#define  TVE_wss_pos_inst_addr                                                   "0x0025"
#define  set_TVE_wss_pos_reg(data)                                               (*((volatile unsigned int*)TVE_wss_pos_reg)=data)
#define  get_TVE_wss_pos_reg                                                     (*((volatile unsigned int*)TVE_wss_pos_reg))
#define  TVE_wss_pos_write_en2_shift                                             (22)
#define  TVE_wss_pos_wss_h_pos_shift                                             (11)
#define  TVE_wss_pos_write_en1_shift                                             (10)
#define  TVE_wss_pos_wss_v_pos_shift                                             (0)
#define  TVE_wss_pos_write_en2_mask                                              (0x00400000)
#define  TVE_wss_pos_wss_h_pos_mask                                              (0x003FF800)
#define  TVE_wss_pos_write_en1_mask                                              (0x00000400)
#define  TVE_wss_pos_wss_v_pos_mask                                              (0x000003FF)
#define  TVE_wss_pos_write_en2(data)                                             (0x00400000&((data)<<22))
#define  TVE_wss_pos_wss_h_pos(data)                                             (0x003FF800&((data)<<11))
#define  TVE_wss_pos_write_en1(data)                                             (0x00000400&((data)<<10))
#define  TVE_wss_pos_wss_v_pos(data)                                             (0x000003FF&(data))
#define  TVE_wss_pos_get_write_en2(data)                                         ((0x00400000&(data))>>22)
#define  TVE_wss_pos_get_wss_h_pos(data)                                         ((0x003FF800&(data))>>11)
#define  TVE_wss_pos_get_write_en1(data)                                         ((0x00000400&(data))>>10)
#define  TVE_wss_pos_get_wss_v_pos(data)                                         (0x000003FF&(data))

#define  TVE_tt_ctrl                                                            0x1801F184
#define  TVE_tt_ctrl_reg_addr                                                    "0xB801F184"
#define  TVE_tt_ctrl_reg                                                         0xB801F184
#define  TVE_tt_ctrl_inst_addr                                                   "0x0026"
#define  set_TVE_tt_ctrl_reg(data)                                               (*((volatile unsigned int*)TVE_tt_ctrl_reg)=data)
#define  get_TVE_tt_ctrl_reg                                                     (*((volatile unsigned int*)TVE_tt_ctrl_reg))
#define  TVE_tt_ctrl_write_en5_shift                                             (26)
#define  TVE_tt_ctrl_tt_bit_swap_shift                                           (25)
#define  TVE_tt_ctrl_write_en4_shift                                             (24)
#define  TVE_tt_ctrl_tt_h_st_shift                                               (13)
#define  TVE_tt_ctrl_write_en3_shift                                             (12)
#define  TVE_tt_ctrl_tt_line_no_shift                                            (4)
#define  TVE_tt_ctrl_write_en2_shift                                             (3)
#define  TVE_tt_ctrl_tt_intp_sel_shift                                           (2)
#define  TVE_tt_ctrl_write_en1_shift                                             (1)
#define  TVE_tt_ctrl_vbi_tt_ebl_shift                                            (0)
#define  TVE_tt_ctrl_write_en5_mask                                              (0x04000000)
#define  TVE_tt_ctrl_tt_bit_swap_mask                                            (0x02000000)
#define  TVE_tt_ctrl_write_en4_mask                                              (0x01000000)
#define  TVE_tt_ctrl_tt_h_st_mask                                                (0x00FFE000)
#define  TVE_tt_ctrl_write_en3_mask                                              (0x00001000)
#define  TVE_tt_ctrl_tt_line_no_mask                                             (0x00000FF0)
#define  TVE_tt_ctrl_write_en2_mask                                              (0x00000008)
#define  TVE_tt_ctrl_tt_intp_sel_mask                                            (0x00000004)
#define  TVE_tt_ctrl_write_en1_mask                                              (0x00000002)
#define  TVE_tt_ctrl_vbi_tt_ebl_mask                                             (0x00000001)
#define  TVE_tt_ctrl_write_en5(data)                                             (0x04000000&((data)<<26))
#define  TVE_tt_ctrl_tt_bit_swap(data)                                           (0x02000000&((data)<<25))
#define  TVE_tt_ctrl_write_en4(data)                                             (0x01000000&((data)<<24))
#define  TVE_tt_ctrl_tt_h_st(data)                                               (0x00FFE000&((data)<<13))
#define  TVE_tt_ctrl_write_en3(data)                                             (0x00001000&((data)<<12))
#define  TVE_tt_ctrl_tt_line_no(data)                                            (0x00000FF0&((data)<<4))
#define  TVE_tt_ctrl_write_en2(data)                                             (0x00000008&((data)<<3))
#define  TVE_tt_ctrl_tt_intp_sel(data)                                           (0x00000004&((data)<<2))
#define  TVE_tt_ctrl_write_en1(data)                                             (0x00000002&((data)<<1))
#define  TVE_tt_ctrl_vbi_tt_ebl(data)                                            (0x00000001&(data))
#define  TVE_tt_ctrl_get_write_en5(data)                                         ((0x04000000&(data))>>26)
#define  TVE_tt_ctrl_get_tt_bit_swap(data)                                       ((0x02000000&(data))>>25)
#define  TVE_tt_ctrl_get_write_en4(data)                                         ((0x01000000&(data))>>24)
#define  TVE_tt_ctrl_get_tt_h_st(data)                                           ((0x00FFE000&(data))>>13)
#define  TVE_tt_ctrl_get_write_en3(data)                                         ((0x00001000&(data))>>12)
#define  TVE_tt_ctrl_get_tt_line_no(data)                                        ((0x00000FF0&(data))>>4)
#define  TVE_tt_ctrl_get_write_en2(data)                                         ((0x00000008&(data))>>3)
#define  TVE_tt_ctrl_get_tt_intp_sel(data)                                       ((0x00000004&(data))>>2)
#define  TVE_tt_ctrl_get_write_en1(data)                                         ((0x00000002&(data))>>1)
#define  TVE_tt_ctrl_get_vbi_tt_ebl(data)                                        (0x00000001&(data))

#define  TVE_tt_vpos                                                            0x1801F188
#define  TVE_tt_vpos_reg_addr                                                    "0xB801F188"
#define  TVE_tt_vpos_reg                                                         0xB801F188
#define  TVE_tt_vpos_inst_addr                                                   "0x0027"
#define  set_TVE_tt_vpos_reg(data)                                               (*((volatile unsigned int*)TVE_tt_vpos_reg)=data)
#define  get_TVE_tt_vpos_reg                                                     (*((volatile unsigned int*)TVE_tt_vpos_reg))
#define  TVE_tt_vpos_write_en2_shift                                             (15)
#define  TVE_tt_vpos_tt_b_vst_shift                                              (6)
#define  TVE_tt_vpos_write_en1_shift                                             (5)
#define  TVE_tt_vpos_tt_t_vst_shift                                              (0)
#define  TVE_tt_vpos_write_en2_mask                                              (0x00008000)
#define  TVE_tt_vpos_tt_b_vst_mask                                               (0x00007FC0)
#define  TVE_tt_vpos_write_en1_mask                                              (0x00000020)
#define  TVE_tt_vpos_tt_t_vst_mask                                               (0x0000001F)
#define  TVE_tt_vpos_write_en2(data)                                             (0x00008000&((data)<<15))
#define  TVE_tt_vpos_tt_b_vst(data)                                              (0x00007FC0&((data)<<6))
#define  TVE_tt_vpos_write_en1(data)                                             (0x00000020&((data)<<5))
#define  TVE_tt_vpos_tt_t_vst(data)                                              (0x0000001F&(data))
#define  TVE_tt_vpos_get_write_en2(data)                                         ((0x00008000&(data))>>15)
#define  TVE_tt_vpos_get_tt_b_vst(data)                                          ((0x00007FC0&(data))>>6)
#define  TVE_tt_vpos_get_write_en1(data)                                         ((0x00000020&(data))>>5)
#define  TVE_tt_vpos_get_tt_t_vst(data)                                          (0x0000001F&(data))

#define  TVE_tt_mask_vpos                                                       0x1801F18C
#define  TVE_tt_mask_vpos_reg_addr                                               "0xB801F18C"
#define  TVE_tt_mask_vpos_reg                                                    0xB801F18C
#define  TVE_tt_mask_vpos_inst_addr                                              "0x0028"
#define  set_TVE_tt_mask_vpos_reg(data)                                          (*((volatile unsigned int*)TVE_tt_mask_vpos_reg)=data)
#define  get_TVE_tt_mask_vpos_reg                                                (*((volatile unsigned int*)TVE_tt_mask_vpos_reg))
#define  TVE_tt_mask_vpos_write_en2_shift                                        (23)
#define  TVE_tt_mask_vpos_start_line2_shift                                      (12)
#define  TVE_tt_mask_vpos_write_en1_shift                                        (11)
#define  TVE_tt_mask_vpos_start_line1_shift                                      (0)
#define  TVE_tt_mask_vpos_write_en2_mask                                         (0x00800000)
#define  TVE_tt_mask_vpos_start_line2_mask                                       (0x007FF000)
#define  TVE_tt_mask_vpos_write_en1_mask                                         (0x00000800)
#define  TVE_tt_mask_vpos_start_line1_mask                                       (0x000007FF)
#define  TVE_tt_mask_vpos_write_en2(data)                                        (0x00800000&((data)<<23))
#define  TVE_tt_mask_vpos_start_line2(data)                                      (0x007FF000&((data)<<12))
#define  TVE_tt_mask_vpos_write_en1(data)                                        (0x00000800&((data)<<11))
#define  TVE_tt_mask_vpos_start_line1(data)                                      (0x000007FF&(data))
#define  TVE_tt_mask_vpos_get_write_en2(data)                                    ((0x00800000&(data))>>23)
#define  TVE_tt_mask_vpos_get_start_line2(data)                                  ((0x007FF000&(data))>>12)
#define  TVE_tt_mask_vpos_get_write_en1(data)                                    ((0x00000800&(data))>>11)
#define  TVE_tt_mask_vpos_get_start_line1(data)                                  (0x000007FF&(data))

#define  TVE_tt_mask_flg_0                                                      0x1801F190
#define  TVE_tt_mask_flg_0_reg_addr                                              "0xB801F190"
#define  TVE_tt_mask_flg_0_reg                                                   0xB801F190
#define  TVE_tt_mask_flg_0_inst_addr                                             "0x0029"
#define  set_TVE_tt_mask_flg_0_reg(data)                                         (*((volatile unsigned int*)TVE_tt_mask_flg_0_reg)=data)
#define  get_TVE_tt_mask_flg_0_reg                                               (*((volatile unsigned int*)TVE_tt_mask_flg_0_reg))
#define  TVE_tt_mask_flg_0_tt_line_mask_shift                                    (0)
#define  TVE_tt_mask_flg_0_tt_line_mask_mask                                     (0xFFFFFFFF)
#define  TVE_tt_mask_flg_0_tt_line_mask(data)                                    (0xFFFFFFFF&(data))
#define  TVE_tt_mask_flg_0_get_tt_line_mask(data)                                (0xFFFFFFFF&(data))

#define  TVE_tt_mask_flg_1                                                      0x1801F194
#define  TVE_tt_mask_flg_1_reg_addr                                              "0xB801F194"
#define  TVE_tt_mask_flg_1_reg                                                   0xB801F194
#define  TVE_tt_mask_flg_1_inst_addr                                             "0x002A"
#define  set_TVE_tt_mask_flg_1_reg(data)                                         (*((volatile unsigned int*)TVE_tt_mask_flg_1_reg)=data)
#define  get_TVE_tt_mask_flg_1_reg                                               (*((volatile unsigned int*)TVE_tt_mask_flg_1_reg))
#define  TVE_tt_mask_flg_1_tt_line_mask_shift                                    (0)
#define  TVE_tt_mask_flg_1_tt_line_mask_mask                                     (0xFFFFFFFF)
#define  TVE_tt_mask_flg_1_tt_line_mask(data)                                    (0xFFFFFFFF&(data))
#define  TVE_tt_mask_flg_1_get_tt_line_mask(data)                                (0xFFFFFFFF&(data))

#define  TVE_vps_ctrl                                                           0x1801F198
#define  TVE_vps_ctrl_reg_addr                                                   "0xB801F198"
#define  TVE_vps_ctrl_reg                                                        0xB801F198
#define  TVE_vps_ctrl_inst_addr                                                  "0x002B"
#define  set_TVE_vps_ctrl_reg(data)                                              (*((volatile unsigned int*)TVE_vps_ctrl_reg)=data)
#define  get_TVE_vps_ctrl_reg                                                    (*((volatile unsigned int*)TVE_vps_ctrl_reg))
#define  TVE_vps_ctrl_write_en4_shift                                            (26)
#define  TVE_vps_ctrl_vps_h_pos_shift                                            (15)
#define  TVE_vps_ctrl_write_en3_shift                                            (14)
#define  TVE_vps_ctrl_vps_v_pos_shift                                            (4)
#define  TVE_vps_ctrl_write_en2_shift                                            (3)
#define  TVE_vps_ctrl_vps_intp_sel_shift                                         (2)
#define  TVE_vps_ctrl_write_en1_shift                                            (1)
#define  TVE_vps_ctrl_vbi_vps_ebl_shift                                          (0)
#define  TVE_vps_ctrl_write_en4_mask                                             (0x04000000)
#define  TVE_vps_ctrl_vps_h_pos_mask                                             (0x03FF8000)
#define  TVE_vps_ctrl_write_en3_mask                                             (0x00004000)
#define  TVE_vps_ctrl_vps_v_pos_mask                                             (0x00003FF0)
#define  TVE_vps_ctrl_write_en2_mask                                             (0x00000008)
#define  TVE_vps_ctrl_vps_intp_sel_mask                                          (0x00000004)
#define  TVE_vps_ctrl_write_en1_mask                                             (0x00000002)
#define  TVE_vps_ctrl_vbi_vps_ebl_mask                                           (0x00000001)
#define  TVE_vps_ctrl_write_en4(data)                                            (0x04000000&((data)<<26))
#define  TVE_vps_ctrl_vps_h_pos(data)                                            (0x03FF8000&((data)<<15))
#define  TVE_vps_ctrl_write_en3(data)                                            (0x00004000&((data)<<14))
#define  TVE_vps_ctrl_vps_v_pos(data)                                            (0x00003FF0&((data)<<4))
#define  TVE_vps_ctrl_write_en2(data)                                            (0x00000008&((data)<<3))
#define  TVE_vps_ctrl_vps_intp_sel(data)                                         (0x00000004&((data)<<2))
#define  TVE_vps_ctrl_write_en1(data)                                            (0x00000002&((data)<<1))
#define  TVE_vps_ctrl_vbi_vps_ebl(data)                                          (0x00000001&(data))
#define  TVE_vps_ctrl_get_write_en4(data)                                        ((0x04000000&(data))>>26)
#define  TVE_vps_ctrl_get_vps_h_pos(data)                                        ((0x03FF8000&(data))>>15)
#define  TVE_vps_ctrl_get_write_en3(data)                                        ((0x00004000&(data))>>14)
#define  TVE_vps_ctrl_get_vps_v_pos(data)                                        ((0x00003FF0&(data))>>4)
#define  TVE_vps_ctrl_get_write_en2(data)                                        ((0x00000008&(data))>>3)
#define  TVE_vps_ctrl_get_vps_intp_sel(data)                                     ((0x00000004&(data))>>2)
#define  TVE_vps_ctrl_get_write_en1(data)                                        ((0x00000002&(data))>>1)
#define  TVE_vps_ctrl_get_vbi_vps_ebl(data)                                      (0x00000001&(data))

#define  TVE_vps_data_0                                                         0x1801F1A0
#define  TVE_vps_data_0_reg_addr                                                 "0xB801F1A0"
#define  TVE_vps_data_0_reg                                                      0xB801F1A0
#define  TVE_vps_data_0_inst_addr                                                "0x002C"
#define  set_TVE_vps_data_0_reg(data)                                            (*((volatile unsigned int*)TVE_vps_data_0_reg)=data)
#define  get_TVE_vps_data_0_reg                                                  (*((volatile unsigned int*)TVE_vps_data_0_reg))
#define  TVE_vps_data_0_vps_data_shift                                           (0)
#define  TVE_vps_data_0_vps_data_mask                                            (0xFFFFFFFF)
#define  TVE_vps_data_0_vps_data(data)                                           (0xFFFFFFFF&(data))
#define  TVE_vps_data_0_get_vps_data(data)                                       (0xFFFFFFFF&(data))

#define  TVE_vps_data_1                                                         0x1801F1A4
#define  TVE_vps_data_1_reg_addr                                                 "0xB801F1A4"
#define  TVE_vps_data_1_reg                                                      0xB801F1A4
#define  TVE_vps_data_1_inst_addr                                                "0x002D"
#define  set_TVE_vps_data_1_reg(data)                                            (*((volatile unsigned int*)TVE_vps_data_1_reg)=data)
#define  get_TVE_vps_data_1_reg                                                  (*((volatile unsigned int*)TVE_vps_data_1_reg))
#define  TVE_vps_data_1_vps_data_shift                                           (0)
#define  TVE_vps_data_1_vps_data_mask                                            (0xFFFFFFFF)
#define  TVE_vps_data_1_vps_data(data)                                           (0xFFFFFFFF&(data))
#define  TVE_vps_data_1_get_vps_data(data)                                       (0xFFFFFFFF&(data))

#define  TVE_vps_data_2                                                         0x1801F1A8
#define  TVE_vps_data_2_reg_addr                                                 "0xB801F1A8"
#define  TVE_vps_data_2_reg                                                      0xB801F1A8
#define  TVE_vps_data_2_inst_addr                                                "0x002E"
#define  set_TVE_vps_data_2_reg(data)                                            (*((volatile unsigned int*)TVE_vps_data_2_reg)=data)
#define  get_TVE_vps_data_2_reg                                                  (*((volatile unsigned int*)TVE_vps_data_2_reg))
#define  TVE_vps_data_2_vps_data_shift                                           (0)
#define  TVE_vps_data_2_vps_data_mask                                            (0xFFFFFFFF)
#define  TVE_vps_data_2_vps_data(data)                                           (0xFFFFFFFF&(data))
#define  TVE_vps_data_2_get_vps_data(data)                                       (0xFFFFFFFF&(data))

#define  TVE_vps_data1                                                          0x1801F1AC
#define  TVE_vps_data1_reg_addr                                                  "0xB801F1AC"
#define  TVE_vps_data1_reg                                                       0xB801F1AC
#define  TVE_vps_data1_inst_addr                                                 "0x002F"
#define  set_TVE_vps_data1_reg(data)                                             (*((volatile unsigned int*)TVE_vps_data1_reg)=data)
#define  get_TVE_vps_data1_reg                                                   (*((volatile unsigned int*)TVE_vps_data1_reg))
#define  TVE_vps_data1_vps_data_shift                                            (0)
#define  TVE_vps_data1_vps_data_mask                                             (0x000000FF)
#define  TVE_vps_data1_vps_data(data)                                            (0x000000FF&(data))
#define  TVE_vps_data1_get_vps_data(data)                                        (0x000000FF&(data))

#define  TVE_vbi_dwn_ctrl                                                       0x1801F314
#define  TVE_vbi_dwn_ctrl_reg_addr                                               "0xB801F314"
#define  TVE_vbi_dwn_ctrl_reg                                                    0xB801F314
#define  TVE_vbi_dwn_ctrl_inst_addr                                              "0x0030"
#define  set_TVE_vbi_dwn_ctrl_reg(data)                                          (*((volatile unsigned int*)TVE_vbi_dwn_ctrl_reg)=data)
#define  get_TVE_vbi_dwn_ctrl_reg                                                (*((volatile unsigned int*)TVE_vbi_dwn_ctrl_reg))
#define  TVE_vbi_dwn_ctrl_write_en4_shift                                        (31)
#define  TVE_vbi_dwn_ctrl_dwn_ebl_shift                                          (29)
#define  TVE_vbi_dwn_ctrl_write_en3_shift                                        (28)
#define  TVE_vbi_dwn_ctrl_dwn_i_p_sel_shift                                      (27)
#define  TVE_vbi_dwn_ctrl_write_en2_shift                                        (26)
#define  TVE_vbi_dwn_ctrl_dwn_st_i_shift                                         (14)
#define  TVE_vbi_dwn_ctrl_write_en1_shift                                        (13)
#define  TVE_vbi_dwn_ctrl_dwn_end_i_shift                                        (0)
#define  TVE_vbi_dwn_ctrl_write_en4_mask                                         (0x80000000)
#define  TVE_vbi_dwn_ctrl_dwn_ebl_mask                                           (0x60000000)
#define  TVE_vbi_dwn_ctrl_write_en3_mask                                         (0x10000000)
#define  TVE_vbi_dwn_ctrl_dwn_i_p_sel_mask                                       (0x08000000)
#define  TVE_vbi_dwn_ctrl_write_en2_mask                                         (0x04000000)
#define  TVE_vbi_dwn_ctrl_dwn_st_i_mask                                          (0x03FFC000)
#define  TVE_vbi_dwn_ctrl_write_en1_mask                                         (0x00002000)
#define  TVE_vbi_dwn_ctrl_dwn_end_i_mask                                         (0x00001FFF)
#define  TVE_vbi_dwn_ctrl_write_en4(data)                                        (0x80000000&((data)<<31))
#define  TVE_vbi_dwn_ctrl_dwn_ebl(data)                                          (0x60000000&((data)<<29))
#define  TVE_vbi_dwn_ctrl_write_en3(data)                                        (0x10000000&((data)<<28))
#define  TVE_vbi_dwn_ctrl_dwn_i_p_sel(data)                                      (0x08000000&((data)<<27))
#define  TVE_vbi_dwn_ctrl_write_en2(data)                                        (0x04000000&((data)<<26))
#define  TVE_vbi_dwn_ctrl_dwn_st_i(data)                                         (0x03FFC000&((data)<<14))
#define  TVE_vbi_dwn_ctrl_write_en1(data)                                        (0x00002000&((data)<<13))
#define  TVE_vbi_dwn_ctrl_dwn_end_i(data)                                        (0x00001FFF&(data))
#define  TVE_vbi_dwn_ctrl_get_write_en4(data)                                    ((0x80000000&(data))>>31)
#define  TVE_vbi_dwn_ctrl_get_dwn_ebl(data)                                      ((0x60000000&(data))>>29)
#define  TVE_vbi_dwn_ctrl_get_write_en3(data)                                    ((0x10000000&(data))>>28)
#define  TVE_vbi_dwn_ctrl_get_dwn_i_p_sel(data)                                  ((0x08000000&(data))>>27)
#define  TVE_vbi_dwn_ctrl_get_write_en2(data)                                    ((0x04000000&(data))>>26)
#define  TVE_vbi_dwn_ctrl_get_dwn_st_i(data)                                     ((0x03FFC000&(data))>>14)
#define  TVE_vbi_dwn_ctrl_get_write_en1(data)                                    ((0x00002000&(data))>>13)
#define  TVE_vbi_dwn_ctrl_get_dwn_end_i(data)                                    (0x00001FFF&(data))

#define  TVE_vbi_dwn_hpos                                                       0x1801F318
#define  TVE_vbi_dwn_hpos_reg_addr                                               "0xB801F318"
#define  TVE_vbi_dwn_hpos_reg                                                    0xB801F318
#define  TVE_vbi_dwn_hpos_inst_addr                                              "0x0031"
#define  set_TVE_vbi_dwn_hpos_reg(data)                                          (*((volatile unsigned int*)TVE_vbi_dwn_hpos_reg)=data)
#define  get_TVE_vbi_dwn_hpos_reg                                                (*((volatile unsigned int*)TVE_vbi_dwn_hpos_reg))
#define  TVE_vbi_dwn_hpos_write_en2_shift                                        (26)
#define  TVE_vbi_dwn_hpos_dwn_st_p_shift                                         (14)
#define  TVE_vbi_dwn_hpos_write_en1_shift                                        (13)
#define  TVE_vbi_dwn_hpos_dwn_end_p_shift                                        (0)
#define  TVE_vbi_dwn_hpos_write_en2_mask                                         (0x04000000)
#define  TVE_vbi_dwn_hpos_dwn_st_p_mask                                          (0x03FFC000)
#define  TVE_vbi_dwn_hpos_write_en1_mask                                         (0x00002000)
#define  TVE_vbi_dwn_hpos_dwn_end_p_mask                                         (0x00001FFF)
#define  TVE_vbi_dwn_hpos_write_en2(data)                                        (0x04000000&((data)<<26))
#define  TVE_vbi_dwn_hpos_dwn_st_p(data)                                         (0x03FFC000&((data)<<14))
#define  TVE_vbi_dwn_hpos_write_en1(data)                                        (0x00002000&((data)<<13))
#define  TVE_vbi_dwn_hpos_dwn_end_p(data)                                        (0x00001FFF&(data))
#define  TVE_vbi_dwn_hpos_get_write_en2(data)                                    ((0x04000000&(data))>>26)
#define  TVE_vbi_dwn_hpos_get_dwn_st_p(data)                                     ((0x03FFC000&(data))>>14)
#define  TVE_vbi_dwn_hpos_get_write_en1(data)                                    ((0x00002000&(data))>>13)
#define  TVE_vbi_dwn_hpos_get_dwn_end_p(data)                                    (0x00001FFF&(data))

#define  TVE_vbi_dwn_vpos_i                                                     0x1801F31C
#define  TVE_vbi_dwn_vpos_i_reg_addr                                             "0xB801F31C"
#define  TVE_vbi_dwn_vpos_i_reg                                                  0xB801F31C
#define  TVE_vbi_dwn_vpos_i_inst_addr                                            "0x0032"
#define  set_TVE_vbi_dwn_vpos_i_reg(data)                                        (*((volatile unsigned int*)TVE_vbi_dwn_vpos_i_reg)=data)
#define  get_TVE_vbi_dwn_vpos_i_reg                                              (*((volatile unsigned int*)TVE_vbi_dwn_vpos_i_reg))
#define  TVE_vbi_dwn_vpos_i_write_en2_shift                                      (23)
#define  TVE_vbi_dwn_vpos_i_vbi_start_line2_shift                                (12)
#define  TVE_vbi_dwn_vpos_i_write_en1_shift                                      (11)
#define  TVE_vbi_dwn_vpos_i_vbi_start_line1_shift                                (0)
#define  TVE_vbi_dwn_vpos_i_write_en2_mask                                       (0x00800000)
#define  TVE_vbi_dwn_vpos_i_vbi_start_line2_mask                                 (0x007FF000)
#define  TVE_vbi_dwn_vpos_i_write_en1_mask                                       (0x00000800)
#define  TVE_vbi_dwn_vpos_i_vbi_start_line1_mask                                 (0x000007FF)
#define  TVE_vbi_dwn_vpos_i_write_en2(data)                                      (0x00800000&((data)<<23))
#define  TVE_vbi_dwn_vpos_i_vbi_start_line2(data)                                (0x007FF000&((data)<<12))
#define  TVE_vbi_dwn_vpos_i_write_en1(data)                                      (0x00000800&((data)<<11))
#define  TVE_vbi_dwn_vpos_i_vbi_start_line1(data)                                (0x000007FF&(data))
#define  TVE_vbi_dwn_vpos_i_get_write_en2(data)                                  ((0x00800000&(data))>>23)
#define  TVE_vbi_dwn_vpos_i_get_vbi_start_line2(data)                            ((0x007FF000&(data))>>12)
#define  TVE_vbi_dwn_vpos_i_get_write_en1(data)                                  ((0x00000800&(data))>>11)
#define  TVE_vbi_dwn_vpos_i_get_vbi_start_line1(data)                            (0x000007FF&(data))

#define  TVE_vbi_line_flag_i_0                                                  0x1801F324
#define  TVE_vbi_line_flag_i_0_reg_addr                                          "0xB801F324"
#define  TVE_vbi_line_flag_i_0_reg                                               0xB801F324
#define  TVE_vbi_line_flag_i_0_inst_addr                                         "0x0033"
#define  set_TVE_vbi_line_flag_i_0_reg(data)                                     (*((volatile unsigned int*)TVE_vbi_line_flag_i_0_reg)=data)
#define  get_TVE_vbi_line_flag_i_0_reg                                           (*((volatile unsigned int*)TVE_vbi_line_flag_i_0_reg))
#define  TVE_vbi_line_flag_i_0_vbi_line_flg_shift                                (0)
#define  TVE_vbi_line_flag_i_0_vbi_line_flg_mask                                 (0xFFFFFFFF)
#define  TVE_vbi_line_flag_i_0_vbi_line_flg(data)                                (0xFFFFFFFF&(data))
#define  TVE_vbi_line_flag_i_0_get_vbi_line_flg(data)                            (0xFFFFFFFF&(data))

#define  TVE_vbi_line_flag_i_1                                                  0x1801F328
#define  TVE_vbi_line_flag_i_1_reg_addr                                          "0xB801F328"
#define  TVE_vbi_line_flag_i_1_reg                                               0xB801F328
#define  TVE_vbi_line_flag_i_1_inst_addr                                         "0x0034"
#define  set_TVE_vbi_line_flag_i_1_reg(data)                                     (*((volatile unsigned int*)TVE_vbi_line_flag_i_1_reg)=data)
#define  get_TVE_vbi_line_flag_i_1_reg                                           (*((volatile unsigned int*)TVE_vbi_line_flag_i_1_reg))
#define  TVE_vbi_line_flag_i_1_vbi_line_flg_shift                                (0)
#define  TVE_vbi_line_flag_i_1_vbi_line_flg_mask                                 (0xFFFFFFFF)
#define  TVE_vbi_line_flag_i_1_vbi_line_flg(data)                                (0xFFFFFFFF&(data))
#define  TVE_vbi_line_flag_i_1_get_vbi_line_flg(data)                            (0xFFFFFFFF&(data))

#define  TVE_vbi_line_pty_i_0                                                   0x1801F334
#define  TVE_vbi_line_pty_i_0_reg_addr                                           "0xB801F334"
#define  TVE_vbi_line_pty_i_0_reg                                                0xB801F334
#define  TVE_vbi_line_pty_i_0_inst_addr                                          "0x0035"
#define  set_TVE_vbi_line_pty_i_0_reg(data)                                      (*((volatile unsigned int*)TVE_vbi_line_pty_i_0_reg)=data)
#define  get_TVE_vbi_line_pty_i_0_reg                                            (*((volatile unsigned int*)TVE_vbi_line_pty_i_0_reg))
#define  TVE_vbi_line_pty_i_0_vbi_pty_shift                                      (0)
#define  TVE_vbi_line_pty_i_0_vbi_pty_mask                                       (0xFFFFFFFF)
#define  TVE_vbi_line_pty_i_0_vbi_pty(data)                                      (0xFFFFFFFF&(data))
#define  TVE_vbi_line_pty_i_0_get_vbi_pty(data)                                  (0xFFFFFFFF&(data))

#define  TVE_vbi_line_pty_i_1                                                   0x1801F338
#define  TVE_vbi_line_pty_i_1_reg_addr                                           "0xB801F338"
#define  TVE_vbi_line_pty_i_1_reg                                                0xB801F338
#define  TVE_vbi_line_pty_i_1_inst_addr                                          "0x0036"
#define  set_TVE_vbi_line_pty_i_1_reg(data)                                      (*((volatile unsigned int*)TVE_vbi_line_pty_i_1_reg)=data)
#define  get_TVE_vbi_line_pty_i_1_reg                                            (*((volatile unsigned int*)TVE_vbi_line_pty_i_1_reg))
#define  TVE_vbi_line_pty_i_1_vbi_pty_shift                                      (0)
#define  TVE_vbi_line_pty_i_1_vbi_pty_mask                                       (0xFFFFFFFF)
#define  TVE_vbi_line_pty_i_1_vbi_pty(data)                                      (0xFFFFFFFF&(data))
#define  TVE_vbi_line_pty_i_1_get_vbi_pty(data)                                  (0xFFFFFFFF&(data))

#define  TVE_dif_hactive                                                        0x1801F1B0
#define  TVE_dif_hactive_reg_addr                                                "0xB801F1B0"
#define  TVE_dif_hactive_reg                                                     0xB801F1B0
#define  TVE_dif_hactive_inst_addr                                               "0x0037"
#define  set_TVE_dif_hactive_reg(data)                                           (*((volatile unsigned int*)TVE_dif_hactive_reg)=data)
#define  get_TVE_dif_hactive_reg                                                 (*((volatile unsigned int*)TVE_dif_hactive_reg))
#define  TVE_dif_hactive_write_en3_shift                                         (30)
#define  TVE_dif_hactive_di_i_p_sel_shift                                        (28)
#define  TVE_dif_hactive_write_en2_shift                                         (27)
#define  TVE_dif_hactive_hact_start_shift                                        (14)
#define  TVE_dif_hactive_write_en1_shift                                         (13)
#define  TVE_dif_hactive_hact_end_shift                                          (0)
#define  TVE_dif_hactive_write_en3_mask                                          (0x40000000)
#define  TVE_dif_hactive_di_i_p_sel_mask                                         (0x30000000)
#define  TVE_dif_hactive_write_en2_mask                                          (0x08000000)
#define  TVE_dif_hactive_hact_start_mask                                         (0x07FFC000)
#define  TVE_dif_hactive_write_en1_mask                                          (0x00002000)
#define  TVE_dif_hactive_hact_end_mask                                           (0x00001FFF)
#define  TVE_dif_hactive_write_en3(data)                                         (0x40000000&((data)<<30))
#define  TVE_dif_hactive_di_i_p_sel(data)                                        (0x30000000&((data)<<28))
#define  TVE_dif_hactive_write_en2(data)                                         (0x08000000&((data)<<27))
#define  TVE_dif_hactive_hact_start(data)                                        (0x07FFC000&((data)<<14))
#define  TVE_dif_hactive_write_en1(data)                                         (0x00002000&((data)<<13))
#define  TVE_dif_hactive_hact_end(data)                                          (0x00001FFF&(data))
#define  TVE_dif_hactive_get_write_en3(data)                                     ((0x40000000&(data))>>30)
#define  TVE_dif_hactive_get_di_i_p_sel(data)                                    ((0x30000000&(data))>>28)
#define  TVE_dif_hactive_get_write_en2(data)                                     ((0x08000000&(data))>>27)
#define  TVE_dif_hactive_get_hact_start(data)                                    ((0x07FFC000&(data))>>14)
#define  TVE_dif_hactive_get_write_en1(data)                                     ((0x00002000&(data))>>13)
#define  TVE_dif_hactive_get_hact_end(data)                                      (0x00001FFF&(data))

#define  TVE_dif_ctrl                                                           0x1801F1B4
#define  TVE_dif_ctrl_reg_addr                                                   "0xB801F1B4"
#define  TVE_dif_ctrl_reg                                                        0xB801F1B4
#define  TVE_dif_ctrl_inst_addr                                                  "0x0038"
#define  set_TVE_dif_ctrl_reg(data)                                              (*((volatile unsigned int*)TVE_dif_ctrl_reg)=data)
#define  get_TVE_dif_ctrl_reg                                                    (*((volatile unsigned int*)TVE_dif_ctrl_reg))
#define  TVE_dif_ctrl_cd_shift                                                   (9)
#define  TVE_dif_ctrl_di_bus_swap_shift                                          (8)
#define  TVE_dif_ctrl_di_clk_phs_shift                                           (7)
#define  TVE_dif_ctrl_di_fpga_clk_sel_shift                                      (6)
#define  TVE_dif_ctrl_di_vbi_bypass_shift                                        (5)
#define  TVE_dif_ctrl_di_ebl_shift                                               (4)
#define  TVE_dif_ctrl_di_source_sel_shift                                        (3)
#define  TVE_dif_ctrl_di_mod_shift                                               (2)
#define  TVE_dif_ctrl_di_hdr_ebl_shift                                           (1)
#define  TVE_dif_ctrl_write_data_shift                                           (0)
#define  TVE_dif_ctrl_cd_mask                                                    (0x00000200)
#define  TVE_dif_ctrl_di_bus_swap_mask                                           (0x00000100)
#define  TVE_dif_ctrl_di_clk_phs_mask                                            (0x00000080)
#define  TVE_dif_ctrl_di_fpga_clk_sel_mask                                       (0x00000040)
#define  TVE_dif_ctrl_di_vbi_bypass_mask                                         (0x00000020)
#define  TVE_dif_ctrl_di_ebl_mask                                                (0x00000010)
#define  TVE_dif_ctrl_di_source_sel_mask                                         (0x00000008)
#define  TVE_dif_ctrl_di_mod_mask                                                (0x00000004)
#define  TVE_dif_ctrl_di_hdr_ebl_mask                                            (0x00000002)
#define  TVE_dif_ctrl_write_data_mask                                            (0x00000001)
#define  TVE_dif_ctrl_cd(data)                                                   (0x00000200&((data)<<9))
#define  TVE_dif_ctrl_di_bus_swap(data)                                          (0x00000100&((data)<<8))
#define  TVE_dif_ctrl_di_clk_phs(data)                                           (0x00000080&((data)<<7))
#define  TVE_dif_ctrl_di_fpga_clk_sel(data)                                      (0x00000040&((data)<<6))
#define  TVE_dif_ctrl_di_vbi_bypass(data)                                        (0x00000020&((data)<<5))
#define  TVE_dif_ctrl_di_ebl(data)                                               (0x00000010&((data)<<4))
#define  TVE_dif_ctrl_di_source_sel(data)                                        (0x00000008&((data)<<3))
#define  TVE_dif_ctrl_di_mod(data)                                               (0x00000004&((data)<<2))
#define  TVE_dif_ctrl_di_hdr_ebl(data)                                           (0x00000002&((data)<<1))
#define  TVE_dif_ctrl_write_data(data)                                           (0x00000001&(data))
#define  TVE_dif_ctrl_get_cd(data)                                               ((0x00000200&(data))>>9)
#define  TVE_dif_ctrl_get_di_bus_swap(data)                                      ((0x00000100&(data))>>8)
#define  TVE_dif_ctrl_get_di_clk_phs(data)                                       ((0x00000080&(data))>>7)
#define  TVE_dif_ctrl_get_di_fpga_clk_sel(data)                                  ((0x00000040&(data))>>6)
#define  TVE_dif_ctrl_get_di_vbi_bypass(data)                                    ((0x00000020&(data))>>5)
#define  TVE_dif_ctrl_get_di_ebl(data)                                           ((0x00000010&(data))>>4)
#define  TVE_dif_ctrl_get_di_source_sel(data)                                    ((0x00000008&(data))>>3)
#define  TVE_dif_ctrl_get_di_mod(data)                                           ((0x00000004&(data))>>2)
#define  TVE_dif_ctrl_get_di_hdr_ebl(data)                                       ((0x00000002&(data))>>1)
#define  TVE_dif_ctrl_get_write_data(data)                                       (0x00000001&(data))

#define  TVE_dif_hsync                                                          0x1801F1B8
#define  TVE_dif_hsync_reg_addr                                                  "0xB801F1B8"
#define  TVE_dif_hsync_reg                                                       0xB801F1B8
#define  TVE_dif_hsync_inst_addr                                                 "0x0039"
#define  set_TVE_dif_hsync_reg(data)                                             (*((volatile unsigned int*)TVE_dif_hsync_reg)=data)
#define  get_TVE_dif_hsync_reg                                                   (*((volatile unsigned int*)TVE_dif_hsync_reg))
#define  TVE_dif_hsync_write_en3_shift                                           (29)
#define  TVE_dif_hsync_hs_polar_shift                                            (28)
#define  TVE_dif_hsync_write_en2_shift                                           (27)
#define  TVE_dif_hsync_hs_start_shift                                            (14)
#define  TVE_dif_hsync_write_en1_shift                                           (13)
#define  TVE_dif_hsync_hs_end_shift                                              (0)
#define  TVE_dif_hsync_write_en3_mask                                            (0x20000000)
#define  TVE_dif_hsync_hs_polar_mask                                             (0x10000000)
#define  TVE_dif_hsync_write_en2_mask                                            (0x08000000)
#define  TVE_dif_hsync_hs_start_mask                                             (0x07FFC000)
#define  TVE_dif_hsync_write_en1_mask                                            (0x00002000)
#define  TVE_dif_hsync_hs_end_mask                                               (0x00001FFF)
#define  TVE_dif_hsync_write_en3(data)                                           (0x20000000&((data)<<29))
#define  TVE_dif_hsync_hs_polar(data)                                            (0x10000000&((data)<<28))
#define  TVE_dif_hsync_write_en2(data)                                           (0x08000000&((data)<<27))
#define  TVE_dif_hsync_hs_start(data)                                            (0x07FFC000&((data)<<14))
#define  TVE_dif_hsync_write_en1(data)                                           (0x00002000&((data)<<13))
#define  TVE_dif_hsync_hs_end(data)                                              (0x00001FFF&(data))
#define  TVE_dif_hsync_get_write_en3(data)                                       ((0x20000000&(data))>>29)
#define  TVE_dif_hsync_get_hs_polar(data)                                        ((0x10000000&(data))>>28)
#define  TVE_dif_hsync_get_write_en2(data)                                       ((0x08000000&(data))>>27)
#define  TVE_dif_hsync_get_hs_start(data)                                        ((0x07FFC000&(data))>>14)
#define  TVE_dif_hsync_get_write_en1(data)                                       ((0x00002000&(data))>>13)
#define  TVE_dif_hsync_get_hs_end(data)                                          (0x00001FFF&(data))

#define  TVE_dif_vs_st_pos1                                                     0x1801F1BC
#define  TVE_dif_vs_st_pos1_reg_addr                                             "0xB801F1BC"
#define  TVE_dif_vs_st_pos1_reg                                                  0xB801F1BC
#define  TVE_dif_vs_st_pos1_inst_addr                                            "0x003A"
#define  set_TVE_dif_vs_st_pos1_reg(data)                                        (*((volatile unsigned int*)TVE_dif_vs_st_pos1_reg)=data)
#define  get_TVE_dif_vs_st_pos1_reg                                              (*((volatile unsigned int*)TVE_dif_vs_st_pos1_reg))
#define  TVE_dif_vs_st_pos1_write_en3_shift                                      (27)
#define  TVE_dif_vs_st_pos1_vs_polar_shift                                       (26)
#define  TVE_dif_vs_st_pos1_write_en2_shift                                      (25)
#define  TVE_dif_vs_st_pos1_vs_st_pos1v_shift                                    (14)
#define  TVE_dif_vs_st_pos1_write_en1_shift                                      (13)
#define  TVE_dif_vs_st_pos1_vs_st_pos1h_shift                                    (0)
#define  TVE_dif_vs_st_pos1_write_en3_mask                                       (0x08000000)
#define  TVE_dif_vs_st_pos1_vs_polar_mask                                        (0x04000000)
#define  TVE_dif_vs_st_pos1_write_en2_mask                                       (0x02000000)
#define  TVE_dif_vs_st_pos1_vs_st_pos1v_mask                                     (0x01FFC000)
#define  TVE_dif_vs_st_pos1_write_en1_mask                                       (0x00002000)
#define  TVE_dif_vs_st_pos1_vs_st_pos1h_mask                                     (0x00001FFF)
#define  TVE_dif_vs_st_pos1_write_en3(data)                                      (0x08000000&((data)<<27))
#define  TVE_dif_vs_st_pos1_vs_polar(data)                                       (0x04000000&((data)<<26))
#define  TVE_dif_vs_st_pos1_write_en2(data)                                      (0x02000000&((data)<<25))
#define  TVE_dif_vs_st_pos1_vs_st_pos1v(data)                                    (0x01FFC000&((data)<<14))
#define  TVE_dif_vs_st_pos1_write_en1(data)                                      (0x00002000&((data)<<13))
#define  TVE_dif_vs_st_pos1_vs_st_pos1h(data)                                    (0x00001FFF&(data))
#define  TVE_dif_vs_st_pos1_get_write_en3(data)                                  ((0x08000000&(data))>>27)
#define  TVE_dif_vs_st_pos1_get_vs_polar(data)                                   ((0x04000000&(data))>>26)
#define  TVE_dif_vs_st_pos1_get_write_en2(data)                                  ((0x02000000&(data))>>25)
#define  TVE_dif_vs_st_pos1_get_vs_st_pos1v(data)                                ((0x01FFC000&(data))>>14)
#define  TVE_dif_vs_st_pos1_get_write_en1(data)                                  ((0x00002000&(data))>>13)
#define  TVE_dif_vs_st_pos1_get_vs_st_pos1h(data)                                (0x00001FFF&(data))

#define  TVE_dif_vs_end_pos1                                                    0x1801F1C0
#define  TVE_dif_vs_end_pos1_reg_addr                                            "0xB801F1C0"
#define  TVE_dif_vs_end_pos1_reg                                                 0xB801F1C0
#define  TVE_dif_vs_end_pos1_inst_addr                                           "0x003B"
#define  set_TVE_dif_vs_end_pos1_reg(data)                                       (*((volatile unsigned int*)TVE_dif_vs_end_pos1_reg)=data)
#define  get_TVE_dif_vs_end_pos1_reg                                             (*((volatile unsigned int*)TVE_dif_vs_end_pos1_reg))
#define  TVE_dif_vs_end_pos1_write_en2_shift                                     (25)
#define  TVE_dif_vs_end_pos1_vs_end_pos1v_shift                                  (14)
#define  TVE_dif_vs_end_pos1_write_en1_shift                                     (13)
#define  TVE_dif_vs_end_pos1_vs_end_pos1h_shift                                  (0)
#define  TVE_dif_vs_end_pos1_write_en2_mask                                      (0x02000000)
#define  TVE_dif_vs_end_pos1_vs_end_pos1v_mask                                   (0x01FFC000)
#define  TVE_dif_vs_end_pos1_write_en1_mask                                      (0x00002000)
#define  TVE_dif_vs_end_pos1_vs_end_pos1h_mask                                   (0x00001FFF)
#define  TVE_dif_vs_end_pos1_write_en2(data)                                     (0x02000000&((data)<<25))
#define  TVE_dif_vs_end_pos1_vs_end_pos1v(data)                                  (0x01FFC000&((data)<<14))
#define  TVE_dif_vs_end_pos1_write_en1(data)                                     (0x00002000&((data)<<13))
#define  TVE_dif_vs_end_pos1_vs_end_pos1h(data)                                  (0x00001FFF&(data))
#define  TVE_dif_vs_end_pos1_get_write_en2(data)                                 ((0x02000000&(data))>>25)
#define  TVE_dif_vs_end_pos1_get_vs_end_pos1v(data)                              ((0x01FFC000&(data))>>14)
#define  TVE_dif_vs_end_pos1_get_write_en1(data)                                 ((0x00002000&(data))>>13)
#define  TVE_dif_vs_end_pos1_get_vs_end_pos1h(data)                              (0x00001FFF&(data))

#define  TVE_dif_vs_st_pos2                                                     0x1801F1C4
#define  TVE_dif_vs_st_pos2_reg_addr                                             "0xB801F1C4"
#define  TVE_dif_vs_st_pos2_reg                                                  0xB801F1C4
#define  TVE_dif_vs_st_pos2_inst_addr                                            "0x003C"
#define  set_TVE_dif_vs_st_pos2_reg(data)                                        (*((volatile unsigned int*)TVE_dif_vs_st_pos2_reg)=data)
#define  get_TVE_dif_vs_st_pos2_reg                                              (*((volatile unsigned int*)TVE_dif_vs_st_pos2_reg))
#define  TVE_dif_vs_st_pos2_write_en2_shift                                      (25)
#define  TVE_dif_vs_st_pos2_vs_st_pos2v_shift                                    (14)
#define  TVE_dif_vs_st_pos2_write_en1_shift                                      (13)
#define  TVE_dif_vs_st_pos2_vs_st_pos2h_shift                                    (0)
#define  TVE_dif_vs_st_pos2_write_en2_mask                                       (0x02000000)
#define  TVE_dif_vs_st_pos2_vs_st_pos2v_mask                                     (0x01FFC000)
#define  TVE_dif_vs_st_pos2_write_en1_mask                                       (0x00002000)
#define  TVE_dif_vs_st_pos2_vs_st_pos2h_mask                                     (0x00001FFF)
#define  TVE_dif_vs_st_pos2_write_en2(data)                                      (0x02000000&((data)<<25))
#define  TVE_dif_vs_st_pos2_vs_st_pos2v(data)                                    (0x01FFC000&((data)<<14))
#define  TVE_dif_vs_st_pos2_write_en1(data)                                      (0x00002000&((data)<<13))
#define  TVE_dif_vs_st_pos2_vs_st_pos2h(data)                                    (0x00001FFF&(data))
#define  TVE_dif_vs_st_pos2_get_write_en2(data)                                  ((0x02000000&(data))>>25)
#define  TVE_dif_vs_st_pos2_get_vs_st_pos2v(data)                                ((0x01FFC000&(data))>>14)
#define  TVE_dif_vs_st_pos2_get_write_en1(data)                                  ((0x00002000&(data))>>13)
#define  TVE_dif_vs_st_pos2_get_vs_st_pos2h(data)                                (0x00001FFF&(data))

#define  TVE_dif_vs_end_pos2                                                    0x1801F1C8
#define  TVE_dif_vs_end_pos2_reg_addr                                            "0xB801F1C8"
#define  TVE_dif_vs_end_pos2_reg                                                 0xB801F1C8
#define  TVE_dif_vs_end_pos2_inst_addr                                           "0x003D"
#define  set_TVE_dif_vs_end_pos2_reg(data)                                       (*((volatile unsigned int*)TVE_dif_vs_end_pos2_reg)=data)
#define  get_TVE_dif_vs_end_pos2_reg                                             (*((volatile unsigned int*)TVE_dif_vs_end_pos2_reg))
#define  TVE_dif_vs_end_pos2_write_en2_shift                                     (25)
#define  TVE_dif_vs_end_pos2_vs_end_pos2v_shift                                  (14)
#define  TVE_dif_vs_end_pos2_write_en1_shift                                     (13)
#define  TVE_dif_vs_end_pos2_vs_end_pos2h_shift                                  (0)
#define  TVE_dif_vs_end_pos2_write_en2_mask                                      (0x02000000)
#define  TVE_dif_vs_end_pos2_vs_end_pos2v_mask                                   (0x01FFC000)
#define  TVE_dif_vs_end_pos2_write_en1_mask                                      (0x00002000)
#define  TVE_dif_vs_end_pos2_vs_end_pos2h_mask                                   (0x00001FFF)
#define  TVE_dif_vs_end_pos2_write_en2(data)                                     (0x02000000&((data)<<25))
#define  TVE_dif_vs_end_pos2_vs_end_pos2v(data)                                  (0x01FFC000&((data)<<14))
#define  TVE_dif_vs_end_pos2_write_en1(data)                                     (0x00002000&((data)<<13))
#define  TVE_dif_vs_end_pos2_vs_end_pos2h(data)                                  (0x00001FFF&(data))
#define  TVE_dif_vs_end_pos2_get_write_en2(data)                                 ((0x02000000&(data))>>25)
#define  TVE_dif_vs_end_pos2_get_vs_end_pos2v(data)                              ((0x01FFC000&(data))>>14)
#define  TVE_dif_vs_end_pos2_get_write_en1(data)                                 ((0x00002000&(data))>>13)
#define  TVE_dif_vs_end_pos2_get_vs_end_pos2h(data)                              (0x00001FFF&(data))

#define  TVE_dif_f_bit_pos                                                      0x1801F1CC
#define  TVE_dif_f_bit_pos_reg_addr                                              "0xB801F1CC"
#define  TVE_dif_f_bit_pos_reg                                                   0xB801F1CC
#define  TVE_dif_f_bit_pos_inst_addr                                             "0x003E"
#define  set_TVE_dif_f_bit_pos_reg(data)                                         (*((volatile unsigned int*)TVE_dif_f_bit_pos_reg)=data)
#define  get_TVE_dif_f_bit_pos_reg                                               (*((volatile unsigned int*)TVE_dif_f_bit_pos_reg))
#define  TVE_dif_f_bit_pos_write_en2_shift                                       (23)
#define  TVE_dif_f_bit_pos_v_tgl_hi_shift                                        (12)
#define  TVE_dif_f_bit_pos_write_en1_shift                                       (11)
#define  TVE_dif_f_bit_pos_v_tgl_lo_shift                                        (0)
#define  TVE_dif_f_bit_pos_write_en2_mask                                        (0x00800000)
#define  TVE_dif_f_bit_pos_v_tgl_hi_mask                                         (0x007FF000)
#define  TVE_dif_f_bit_pos_write_en1_mask                                        (0x00000800)
#define  TVE_dif_f_bit_pos_v_tgl_lo_mask                                         (0x000007FF)
#define  TVE_dif_f_bit_pos_write_en2(data)                                       (0x00800000&((data)<<23))
#define  TVE_dif_f_bit_pos_v_tgl_hi(data)                                        (0x007FF000&((data)<<12))
#define  TVE_dif_f_bit_pos_write_en1(data)                                       (0x00000800&((data)<<11))
#define  TVE_dif_f_bit_pos_v_tgl_lo(data)                                        (0x000007FF&(data))
#define  TVE_dif_f_bit_pos_get_write_en2(data)                                   ((0x00800000&(data))>>23)
#define  TVE_dif_f_bit_pos_get_v_tgl_hi(data)                                    ((0x007FF000&(data))>>12)
#define  TVE_dif_f_bit_pos_get_write_en1(data)                                   ((0x00000800&(data))>>11)
#define  TVE_dif_f_bit_pos_get_v_tgl_lo(data)                                    (0x000007FF&(data))

#define  TVE_dif_v_bit_pos1                                                     0x1801F1D0
#define  TVE_dif_v_bit_pos1_reg_addr                                             "0xB801F1D0"
#define  TVE_dif_v_bit_pos1_reg                                                  0xB801F1D0
#define  TVE_dif_v_bit_pos1_inst_addr                                            "0x003F"
#define  set_TVE_dif_v_bit_pos1_reg(data)                                        (*((volatile unsigned int*)TVE_dif_v_bit_pos1_reg)=data)
#define  get_TVE_dif_v_bit_pos1_reg                                              (*((volatile unsigned int*)TVE_dif_v_bit_pos1_reg))
#define  TVE_dif_v_bit_pos1_write_en2_shift                                      (23)
#define  TVE_dif_v_bit_pos1_v_tgl1_hi_shift                                      (12)
#define  TVE_dif_v_bit_pos1_write_en1_shift                                      (11)
#define  TVE_dif_v_bit_pos1_v_tgl1_lo_shift                                      (0)
#define  TVE_dif_v_bit_pos1_write_en2_mask                                       (0x00800000)
#define  TVE_dif_v_bit_pos1_v_tgl1_hi_mask                                       (0x007FF000)
#define  TVE_dif_v_bit_pos1_write_en1_mask                                       (0x00000800)
#define  TVE_dif_v_bit_pos1_v_tgl1_lo_mask                                       (0x000007FF)
#define  TVE_dif_v_bit_pos1_write_en2(data)                                      (0x00800000&((data)<<23))
#define  TVE_dif_v_bit_pos1_v_tgl1_hi(data)                                      (0x007FF000&((data)<<12))
#define  TVE_dif_v_bit_pos1_write_en1(data)                                      (0x00000800&((data)<<11))
#define  TVE_dif_v_bit_pos1_v_tgl1_lo(data)                                      (0x000007FF&(data))
#define  TVE_dif_v_bit_pos1_get_write_en2(data)                                  ((0x00800000&(data))>>23)
#define  TVE_dif_v_bit_pos1_get_v_tgl1_hi(data)                                  ((0x007FF000&(data))>>12)
#define  TVE_dif_v_bit_pos1_get_write_en1(data)                                  ((0x00000800&(data))>>11)
#define  TVE_dif_v_bit_pos1_get_v_tgl1_lo(data)                                  (0x000007FF&(data))

#define  TVE_dif_v_bit_pos2                                                     0x1801F1D4
#define  TVE_dif_v_bit_pos2_reg_addr                                             "0xB801F1D4"
#define  TVE_dif_v_bit_pos2_reg                                                  0xB801F1D4
#define  TVE_dif_v_bit_pos2_inst_addr                                            "0x0040"
#define  set_TVE_dif_v_bit_pos2_reg(data)                                        (*((volatile unsigned int*)TVE_dif_v_bit_pos2_reg)=data)
#define  get_TVE_dif_v_bit_pos2_reg                                              (*((volatile unsigned int*)TVE_dif_v_bit_pos2_reg))
#define  TVE_dif_v_bit_pos2_write_en2_shift                                      (23)
#define  TVE_dif_v_bit_pos2_v_tgl2_hi_shift                                      (12)
#define  TVE_dif_v_bit_pos2_write_en1_shift                                      (11)
#define  TVE_dif_v_bit_pos2_v_tgl2_lo_shift                                      (0)
#define  TVE_dif_v_bit_pos2_write_en2_mask                                       (0x00800000)
#define  TVE_dif_v_bit_pos2_v_tgl2_hi_mask                                       (0x007FF000)
#define  TVE_dif_v_bit_pos2_write_en1_mask                                       (0x00000800)
#define  TVE_dif_v_bit_pos2_v_tgl2_lo_mask                                       (0x000007FF)
#define  TVE_dif_v_bit_pos2_write_en2(data)                                      (0x00800000&((data)<<23))
#define  TVE_dif_v_bit_pos2_v_tgl2_hi(data)                                      (0x007FF000&((data)<<12))
#define  TVE_dif_v_bit_pos2_write_en1(data)                                      (0x00000800&((data)<<11))
#define  TVE_dif_v_bit_pos2_v_tgl2_lo(data)                                      (0x000007FF&(data))
#define  TVE_dif_v_bit_pos2_get_write_en2(data)                                  ((0x00800000&(data))>>23)
#define  TVE_dif_v_bit_pos2_get_v_tgl2_hi(data)                                  ((0x007FF000&(data))>>12)
#define  TVE_dif_v_bit_pos2_get_write_en1(data)                                  ((0x00000800&(data))>>11)
#define  TVE_dif_v_bit_pos2_get_v_tgl2_lo(data)                                  (0x000007FF&(data))

#define  TVE_dif_fv_bit_hpos                                                    0x1801F1D8
#define  TVE_dif_fv_bit_hpos_reg_addr                                            "0xB801F1D8"
#define  TVE_dif_fv_bit_hpos_reg                                                 0xB801F1D8
#define  TVE_dif_fv_bit_hpos_inst_addr                                           "0x0041"
#define  set_TVE_dif_fv_bit_hpos_reg(data)                                       (*((volatile unsigned int*)TVE_dif_fv_bit_hpos_reg)=data)
#define  get_TVE_dif_fv_bit_hpos_reg                                             (*((volatile unsigned int*)TVE_dif_fv_bit_hpos_reg))
#define  TVE_dif_fv_bit_hpos_write_en2_shift                                     (27)
#define  TVE_dif_fv_bit_hpos_fv_start_shift                                      (14)
#define  TVE_dif_fv_bit_hpos_write_en1_shift                                     (13)
#define  TVE_dif_fv_bit_hpos_fv_end_shift                                        (0)
#define  TVE_dif_fv_bit_hpos_write_en2_mask                                      (0x08000000)
#define  TVE_dif_fv_bit_hpos_fv_start_mask                                       (0x07FFC000)
#define  TVE_dif_fv_bit_hpos_write_en1_mask                                      (0x00002000)
#define  TVE_dif_fv_bit_hpos_fv_end_mask                                         (0x00001FFF)
#define  TVE_dif_fv_bit_hpos_write_en2(data)                                     (0x08000000&((data)<<27))
#define  TVE_dif_fv_bit_hpos_fv_start(data)                                      (0x07FFC000&((data)<<14))
#define  TVE_dif_fv_bit_hpos_write_en1(data)                                     (0x00002000&((data)<<13))
#define  TVE_dif_fv_bit_hpos_fv_end(data)                                        (0x00001FFF&(data))
#define  TVE_dif_fv_bit_hpos_get_write_en2(data)                                 ((0x08000000&(data))>>27)
#define  TVE_dif_fv_bit_hpos_get_fv_start(data)                                  ((0x07FFC000&(data))>>14)
#define  TVE_dif_fv_bit_hpos_get_write_en1(data)                                 ((0x00002000&(data))>>13)
#define  TVE_dif_fv_bit_hpos_get_fv_end(data)                                    (0x00001FFF&(data))

#define  TVE_ip_phs_0                                                           0x1801F880
#define  TVE_ip_phs_0_reg_addr                                                   "0xB801F880"
#define  TVE_ip_phs_0_reg                                                        0xB801F880
#define  TVE_ip_phs_0_inst_addr                                                  "0x0042"
#define  set_TVE_ip_phs_0_reg(data)                                              (*((volatile unsigned int*)TVE_ip_phs_0_reg)=data)
#define  get_TVE_ip_phs_0_reg                                                    (*((volatile unsigned int*)TVE_ip_phs_0_reg))
#define  TVE_ip_phs_0_phi_shift                                                  (0)
#define  TVE_ip_phs_0_phi_mask                                                   (0x000000FF)
#define  TVE_ip_phs_0_phi(data)                                                  (0x000000FF&(data))
#define  TVE_ip_phs_0_get_phi(data)                                              (0x000000FF&(data))

#define  TVE_ip_phs_1                                                           0x1801F884
#define  TVE_ip_phs_1_reg_addr                                                   "0xB801F884"
#define  TVE_ip_phs_1_reg                                                        0xB801F884
#define  TVE_ip_phs_1_inst_addr                                                  "0x0043"
#define  set_TVE_ip_phs_1_reg(data)                                              (*((volatile unsigned int*)TVE_ip_phs_1_reg)=data)
#define  get_TVE_ip_phs_1_reg                                                    (*((volatile unsigned int*)TVE_ip_phs_1_reg))
#define  TVE_ip_phs_1_phi_shift                                                  (0)
#define  TVE_ip_phs_1_phi_mask                                                   (0x000000FF)
#define  TVE_ip_phs_1_phi(data)                                                  (0x000000FF&(data))
#define  TVE_ip_phs_1_get_phi(data)                                              (0x000000FF&(data))

#define  TVE_ip_phs_2                                                           0x1801F888
#define  TVE_ip_phs_2_reg_addr                                                   "0xB801F888"
#define  TVE_ip_phs_2_reg                                                        0xB801F888
#define  TVE_ip_phs_2_inst_addr                                                  "0x0044"
#define  set_TVE_ip_phs_2_reg(data)                                              (*((volatile unsigned int*)TVE_ip_phs_2_reg)=data)
#define  get_TVE_ip_phs_2_reg                                                    (*((volatile unsigned int*)TVE_ip_phs_2_reg))
#define  TVE_ip_phs_2_phi_shift                                                  (0)
#define  TVE_ip_phs_2_phi_mask                                                   (0x000000FF)
#define  TVE_ip_phs_2_phi(data)                                                  (0x000000FF&(data))
#define  TVE_ip_phs_2_get_phi(data)                                              (0x000000FF&(data))

#define  TVE_ip_phs_3                                                           0x1801F88C
#define  TVE_ip_phs_3_reg_addr                                                   "0xB801F88C"
#define  TVE_ip_phs_3_reg                                                        0xB801F88C
#define  TVE_ip_phs_3_inst_addr                                                  "0x0045"
#define  set_TVE_ip_phs_3_reg(data)                                              (*((volatile unsigned int*)TVE_ip_phs_3_reg)=data)
#define  get_TVE_ip_phs_3_reg                                                    (*((volatile unsigned int*)TVE_ip_phs_3_reg))
#define  TVE_ip_phs_3_phi_shift                                                  (0)
#define  TVE_ip_phs_3_phi_mask                                                   (0x000000FF)
#define  TVE_ip_phs_3_phi(data)                                                  (0x000000FF&(data))
#define  TVE_ip_phs_3_get_phi(data)                                              (0x000000FF&(data))

#define  TVE_ip_sctoh_0                                                         0x1801F890
#define  TVE_ip_sctoh_0_reg_addr                                                 "0xB801F890"
#define  TVE_ip_sctoh_0_reg                                                      0xB801F890
#define  TVE_ip_sctoh_0_inst_addr                                                "0x0046"
#define  set_TVE_ip_sctoh_0_reg(data)                                            (*((volatile unsigned int*)TVE_ip_sctoh_0_reg)=data)
#define  get_TVE_ip_sctoh_0_reg                                                  (*((volatile unsigned int*)TVE_ip_sctoh_0_reg))
#define  TVE_ip_sctoh_0_sctoh_shift                                              (0)
#define  TVE_ip_sctoh_0_sctoh_mask                                               (0x000000FF)
#define  TVE_ip_sctoh_0_sctoh(data)                                              (0x000000FF&(data))
#define  TVE_ip_sctoh_0_get_sctoh(data)                                          (0x000000FF&(data))

#define  TVE_ip_sctoh_1                                                         0x1801F894
#define  TVE_ip_sctoh_1_reg_addr                                                 "0xB801F894"
#define  TVE_ip_sctoh_1_reg                                                      0xB801F894
#define  TVE_ip_sctoh_1_inst_addr                                                "0x0047"
#define  set_TVE_ip_sctoh_1_reg(data)                                            (*((volatile unsigned int*)TVE_ip_sctoh_1_reg)=data)
#define  get_TVE_ip_sctoh_1_reg                                                  (*((volatile unsigned int*)TVE_ip_sctoh_1_reg))
#define  TVE_ip_sctoh_1_sctoh_shift                                              (0)
#define  TVE_ip_sctoh_1_sctoh_mask                                               (0x000000FF)
#define  TVE_ip_sctoh_1_sctoh(data)                                              (0x000000FF&(data))
#define  TVE_ip_sctoh_1_get_sctoh(data)                                          (0x000000FF&(data))

#define  TVE_ip_sctoh_2                                                         0x1801F898
#define  TVE_ip_sctoh_2_reg_addr                                                 "0xB801F898"
#define  TVE_ip_sctoh_2_reg                                                      0xB801F898
#define  TVE_ip_sctoh_2_inst_addr                                                "0x0048"
#define  set_TVE_ip_sctoh_2_reg(data)                                            (*((volatile unsigned int*)TVE_ip_sctoh_2_reg)=data)
#define  get_TVE_ip_sctoh_2_reg                                                  (*((volatile unsigned int*)TVE_ip_sctoh_2_reg))
#define  TVE_ip_sctoh_2_sctoh_shift                                              (0)
#define  TVE_ip_sctoh_2_sctoh_mask                                               (0x000000FF)
#define  TVE_ip_sctoh_2_sctoh(data)                                              (0x000000FF&(data))
#define  TVE_ip_sctoh_2_get_sctoh(data)                                          (0x000000FF&(data))

#define  TVE_ip_sctoh_3                                                         0x1801F89C
#define  TVE_ip_sctoh_3_reg_addr                                                 "0xB801F89C"
#define  TVE_ip_sctoh_3_reg                                                      0xB801F89C
#define  TVE_ip_sctoh_3_inst_addr                                                "0x0049"
#define  set_TVE_ip_sctoh_3_reg(data)                                            (*((volatile unsigned int*)TVE_ip_sctoh_3_reg)=data)
#define  get_TVE_ip_sctoh_3_reg                                                  (*((volatile unsigned int*)TVE_ip_sctoh_3_reg))
#define  TVE_ip_sctoh_3_sctoh_shift                                              (0)
#define  TVE_ip_sctoh_3_sctoh_mask                                               (0x000000FF)
#define  TVE_ip_sctoh_3_sctoh(data)                                              (0x000000FF&(data))
#define  TVE_ip_sctoh_3_get_sctoh(data)                                          (0x000000FF&(data))

#define  TVE_ip_f_ctrl                                                          0x1801F8A0
#define  TVE_ip_f_ctrl_reg_addr                                                  "0xB801F8A0"
#define  TVE_ip_f_ctrl_reg                                                       0xB801F8A0
#define  TVE_ip_f_ctrl_inst_addr                                                 "0x004A"
#define  set_TVE_ip_f_ctrl_reg(data)                                             (*((volatile unsigned int*)TVE_ip_f_ctrl_reg)=data)
#define  get_TVE_ip_f_ctrl_reg                                                   (*((volatile unsigned int*)TVE_ip_f_ctrl_reg))
#define  TVE_ip_f_ctrl_u_invert_shift                                            (3)
#define  TVE_ip_f_ctrl_v_invert_shift                                            (2)
#define  TVE_ip_f_ctrl_t_offset_phase_shift                                      (1)
#define  TVE_ip_f_ctrl_t_reset_fsc_shift                                         (0)
#define  TVE_ip_f_ctrl_u_invert_mask                                             (0x00000008)
#define  TVE_ip_f_ctrl_v_invert_mask                                             (0x00000004)
#define  TVE_ip_f_ctrl_t_offset_phase_mask                                       (0x00000002)
#define  TVE_ip_f_ctrl_t_reset_fsc_mask                                          (0x00000001)
#define  TVE_ip_f_ctrl_u_invert(data)                                            (0x00000008&((data)<<3))
#define  TVE_ip_f_ctrl_v_invert(data)                                            (0x00000004&((data)<<2))
#define  TVE_ip_f_ctrl_t_offset_phase(data)                                      (0x00000002&((data)<<1))
#define  TVE_ip_f_ctrl_t_reset_fsc(data)                                         (0x00000001&(data))
#define  TVE_ip_f_ctrl_get_u_invert(data)                                        ((0x00000008&(data))>>3)
#define  TVE_ip_f_ctrl_get_v_invert(data)                                        ((0x00000004&(data))>>2)
#define  TVE_ip_f_ctrl_get_t_offset_phase(data)                                  ((0x00000002&(data))>>1)
#define  TVE_ip_f_ctrl_get_t_reset_fsc(data)                                     (0x00000001&(data))

#define  TVE_ip_t_sel_sin                                                       0x1801F980
#define  TVE_ip_t_sel_sin_reg_addr                                               "0xB801F980"
#define  TVE_ip_t_sel_sin_reg                                                    0xB801F980
#define  TVE_ip_t_sel_sin_inst_addr                                              "0x004B"
#define  set_TVE_ip_t_sel_sin_reg(data)                                          (*((volatile unsigned int*)TVE_ip_t_sel_sin_reg)=data)
#define  get_TVE_ip_t_sel_sin_reg                                                (*((volatile unsigned int*)TVE_ip_t_sel_sin_reg))
#define  TVE_ip_t_sel_sin_t_sel_sin_shift                                        (1)
#define  TVE_ip_t_sel_sin_t_fsc_rom_shift                                        (0)
#define  TVE_ip_t_sel_sin_t_sel_sin_mask                                         (0x00000002)
#define  TVE_ip_t_sel_sin_t_fsc_rom_mask                                         (0x00000001)
#define  TVE_ip_t_sel_sin_t_sel_sin(data)                                        (0x00000002&((data)<<1))
#define  TVE_ip_t_sel_sin_t_fsc_rom(data)                                        (0x00000001&(data))
#define  TVE_ip_t_sel_sin_get_t_sel_sin(data)                                    ((0x00000002&(data))>>1)
#define  TVE_ip_t_sel_sin_get_t_fsc_rom(data)                                    (0x00000001&(data))

#define  TVE_ip_blck_lvl                                                        0x1801F8A8
#define  TVE_ip_blck_lvl_reg_addr                                                "0xB801F8A8"
#define  TVE_ip_blck_lvl_reg                                                     0xB801F8A8
#define  TVE_ip_blck_lvl_inst_addr                                               "0x004C"
#define  set_TVE_ip_blck_lvl_reg(data)                                           (*((volatile unsigned int*)TVE_ip_blck_lvl_reg)=data)
#define  get_TVE_ip_blck_lvl_reg                                                 (*((volatile unsigned int*)TVE_ip_blck_lvl_reg))
#define  TVE_ip_blck_lvl_black_lvl_shift                                         (0)
#define  TVE_ip_blck_lvl_black_lvl_mask                                          (0x000000FF)
#define  TVE_ip_blck_lvl_black_lvl(data)                                         (0x000000FF&(data))
#define  TVE_ip_blck_lvl_get_black_lvl(data)                                     (0x000000FF&(data))

#define  TVE_ip_blnk_lvl                                                        0x1801F8AC
#define  TVE_ip_blnk_lvl_reg_addr                                                "0xB801F8AC"
#define  TVE_ip_blnk_lvl_reg                                                     0xB801F8AC
#define  TVE_ip_blnk_lvl_inst_addr                                               "0x004D"
#define  set_TVE_ip_blnk_lvl_reg(data)                                           (*((volatile unsigned int*)TVE_ip_blnk_lvl_reg)=data)
#define  get_TVE_ip_blnk_lvl_reg                                                 (*((volatile unsigned int*)TVE_ip_blnk_lvl_reg))
#define  TVE_ip_blnk_lvl_blank_lvl_shift                                         (0)
#define  TVE_ip_blnk_lvl_blank_lvl_mask                                          (0x000000FF)
#define  TVE_ip_blnk_lvl_blank_lvl(data)                                         (0x000000FF&(data))
#define  TVE_ip_blnk_lvl_get_blank_lvl(data)                                     (0x000000FF&(data))

#define  TVE_ip_clamp_lvl                                                       0x1801F8B0
#define  TVE_ip_clamp_lvl_reg_addr                                               "0xB801F8B0"
#define  TVE_ip_clamp_lvl_reg                                                    0xB801F8B0
#define  TVE_ip_clamp_lvl_inst_addr                                              "0x004E"
#define  set_TVE_ip_clamp_lvl_reg(data)                                          (*((volatile unsigned int*)TVE_ip_clamp_lvl_reg)=data)
#define  get_TVE_ip_clamp_lvl_reg                                                (*((volatile unsigned int*)TVE_ip_clamp_lvl_reg))
#define  TVE_ip_clamp_lvl_clamp_lvl_shift                                        (0)
#define  TVE_ip_clamp_lvl_clamp_lvl_mask                                         (0x000000FF)
#define  TVE_ip_clamp_lvl_clamp_lvl(data)                                        (0x000000FF&(data))
#define  TVE_ip_clamp_lvl_get_clamp_lvl(data)                                    (0x000000FF&(data))

#define  TVE_ip_sync_lvl                                                        0x1801F8B4
#define  TVE_ip_sync_lvl_reg_addr                                                "0xB801F8B4"
#define  TVE_ip_sync_lvl_reg                                                     0xB801F8B4
#define  TVE_ip_sync_lvl_inst_addr                                               "0x004F"
#define  set_TVE_ip_sync_lvl_reg(data)                                           (*((volatile unsigned int*)TVE_ip_sync_lvl_reg)=data)
#define  get_TVE_ip_sync_lvl_reg                                                 (*((volatile unsigned int*)TVE_ip_sync_lvl_reg))
#define  TVE_ip_sync_lvl_sync_lvl_shift                                          (0)
#define  TVE_ip_sync_lvl_sync_lvl_mask                                           (0x000000FF)
#define  TVE_ip_sync_lvl_sync_lvl(data)                                          (0x000000FF&(data))
#define  TVE_ip_sync_lvl_get_sync_lvl(data)                                      (0x000000FF&(data))

#define  TVE_ip_y_ctrl                                                          0x1801F8B8
#define  TVE_ip_y_ctrl_reg_addr                                                  "0xB801F8B8"
#define  TVE_ip_y_ctrl_reg                                                       0xB801F8B8
#define  TVE_ip_y_ctrl_inst_addr                                                 "0x0050"
#define  set_TVE_ip_y_ctrl_reg(data)                                             (*((volatile unsigned int*)TVE_ip_y_ctrl_reg)=data)
#define  get_TVE_ip_y_ctrl_reg                                                   (*((volatile unsigned int*)TVE_ip_y_ctrl_reg))
#define  TVE_ip_y_ctrl_y_interp_shift                                            (6)
#define  TVE_ip_y_ctrl_y_colorbar_en_shift                                       (5)
#define  TVE_ip_y_ctrl_t_ydel_adj_shift                                          (2)
#define  TVE_ip_y_ctrl_t_sel_ylpf_shift                                          (1)
#define  TVE_ip_y_ctrl_t_ygain_val_shift                                         (0)
#define  TVE_ip_y_ctrl_y_interp_mask                                             (0x000000C0)
#define  TVE_ip_y_ctrl_y_colorbar_en_mask                                        (0x00000020)
#define  TVE_ip_y_ctrl_t_ydel_adj_mask                                           (0x0000001C)
#define  TVE_ip_y_ctrl_t_sel_ylpf_mask                                           (0x00000002)
#define  TVE_ip_y_ctrl_t_ygain_val_mask                                          (0x00000001)
#define  TVE_ip_y_ctrl_y_interp(data)                                            (0x000000C0&((data)<<6))
#define  TVE_ip_y_ctrl_y_colorbar_en(data)                                       (0x00000020&((data)<<5))
#define  TVE_ip_y_ctrl_t_ydel_adj(data)                                          (0x0000001C&((data)<<2))
#define  TVE_ip_y_ctrl_t_sel_ylpf(data)                                          (0x00000002&((data)<<1))
#define  TVE_ip_y_ctrl_t_ygain_val(data)                                         (0x00000001&(data))
#define  TVE_ip_y_ctrl_get_y_interp(data)                                        ((0x000000C0&(data))>>6)
#define  TVE_ip_y_ctrl_get_y_colorbar_en(data)                                   ((0x00000020&(data))>>5)
#define  TVE_ip_y_ctrl_get_t_ydel_adj(data)                                      ((0x0000001C&(data))>>2)
#define  TVE_ip_y_ctrl_get_t_sel_ylpf(data)                                      ((0x00000002&(data))>>1)
#define  TVE_ip_y_ctrl_get_t_ygain_val(data)                                     (0x00000001&(data))

#define  TVE_ip_test_param                                                      0x1801F984
#define  TVE_ip_test_param_reg_addr                                              "0xB801F984"
#define  TVE_ip_test_param_reg                                                   0xB801F984
#define  TVE_ip_test_param_inst_addr                                             "0x0051"
#define  set_TVE_ip_test_param_reg(data)                                         (*((volatile unsigned int*)TVE_ip_test_param_reg)=data)
#define  get_TVE_ip_test_param_reg                                               (*((volatile unsigned int*)TVE_ip_test_param_reg))
#define  TVE_ip_test_param_t_byp_yups_shift                                      (6)
#define  TVE_ip_test_param_t_sel_ylp_shift                                       (5)
#define  TVE_ip_test_param_t_ygain_off_shift                                     (4)
#define  TVE_ip_test_param_y_tsin_cos_shift                                      (3)
#define  TVE_ip_test_param_y_tsel_dac_tst_shift                                  (2)
#define  TVE_ip_test_param_y_tdig_out_shift                                      (0)
#define  TVE_ip_test_param_t_byp_yups_mask                                       (0x00000040)
#define  TVE_ip_test_param_t_sel_ylp_mask                                        (0x00000020)
#define  TVE_ip_test_param_t_ygain_off_mask                                      (0x00000010)
#define  TVE_ip_test_param_y_tsin_cos_mask                                       (0x00000008)
#define  TVE_ip_test_param_y_tsel_dac_tst_mask                                   (0x00000004)
#define  TVE_ip_test_param_y_tdig_out_mask                                       (0x00000003)
#define  TVE_ip_test_param_t_byp_yups(data)                                      (0x00000040&((data)<<6))
#define  TVE_ip_test_param_t_sel_ylp(data)                                       (0x00000020&((data)<<5))
#define  TVE_ip_test_param_t_ygain_off(data)                                     (0x00000010&((data)<<4))
#define  TVE_ip_test_param_y_tsin_cos(data)                                      (0x00000008&((data)<<3))
#define  TVE_ip_test_param_y_tsel_dac_tst(data)                                  (0x00000004&((data)<<2))
#define  TVE_ip_test_param_y_tdig_out(data)                                      (0x00000003&(data))
#define  TVE_ip_test_param_get_t_byp_yups(data)                                  ((0x00000040&(data))>>6)
#define  TVE_ip_test_param_get_t_sel_ylp(data)                                   ((0x00000020&(data))>>5)
#define  TVE_ip_test_param_get_t_ygain_off(data)                                 ((0x00000010&(data))>>4)
#define  TVE_ip_test_param_get_y_tsin_cos(data)                                  ((0x00000008&(data))>>3)
#define  TVE_ip_test_param_get_y_tsel_dac_tst(data)                              ((0x00000004&(data))>>2)
#define  TVE_ip_test_param_get_y_tdig_out(data)                                  (0x00000003&(data))

#define  TVE_ip_y_gain                                                          0x1801FA00
#define  TVE_ip_y_gain_reg_addr                                                  "0xB801FA00"
#define  TVE_ip_y_gain_reg                                                       0xB801FA00
#define  TVE_ip_y_gain_inst_addr                                                 "0x0052"
#define  set_TVE_ip_y_gain_reg(data)                                             (*((volatile unsigned int*)TVE_ip_y_gain_reg)=data)
#define  get_TVE_ip_y_gain_reg                                                   (*((volatile unsigned int*)TVE_ip_y_gain_reg))
#define  TVE_ip_y_gain_y_gain_shift                                              (0)
#define  TVE_ip_y_gain_y_gain_mask                                               (0x000003FF)
#define  TVE_ip_y_gain_y_gain(data)                                              (0x000003FF&(data))
#define  TVE_ip_y_gain_get_y_gain(data)                                          (0x000003FF&(data))

#define  TVE_ip_sync_lvl2                                                       0x1801F9C0
#define  TVE_ip_sync_lvl2_reg_addr                                               "0xB801F9C0"
#define  TVE_ip_sync_lvl2_reg                                                    0xB801F9C0
#define  TVE_ip_sync_lvl2_inst_addr                                              "0x0053"
#define  set_TVE_ip_sync_lvl2_reg(data)                                          (*((volatile unsigned int*)TVE_ip_sync_lvl2_reg)=data)
#define  get_TVE_ip_sync_lvl2_reg                                                (*((volatile unsigned int*)TVE_ip_sync_lvl2_reg))
#define  TVE_ip_sync_lvl2_sync_lvl_h_shift                                       (0)
#define  TVE_ip_sync_lvl2_sync_lvl_h_mask                                        (0x000000FF)
#define  TVE_ip_sync_lvl2_sync_lvl_h(data)                                       (0x000000FF&(data))
#define  TVE_ip_sync_lvl2_get_sync_lvl_h(data)                                   (0x000000FF&(data))

#define  TVE_ip_sync_lvl3                                                       0x1801F9C4
#define  TVE_ip_sync_lvl3_reg_addr                                               "0xB801F9C4"
#define  TVE_ip_sync_lvl3_reg                                                    0xB801F9C4
#define  TVE_ip_sync_lvl3_inst_addr                                              "0x0054"
#define  set_TVE_ip_sync_lvl3_reg(data)                                          (*((volatile unsigned int*)TVE_ip_sync_lvl3_reg)=data)
#define  get_TVE_ip_sync_lvl3_reg                                                (*((volatile unsigned int*)TVE_ip_sync_lvl3_reg))
#define  TVE_ip_sync_lvl3_sync_lvl_m_shift                                       (0)
#define  TVE_ip_sync_lvl3_sync_lvl_m_mask                                        (0x000000FF)
#define  TVE_ip_sync_lvl3_sync_lvl_m(data)                                       (0x000000FF&(data))
#define  TVE_ip_sync_lvl3_get_sync_lvl_m(data)                                   (0x000000FF&(data))

#define  TVE_ip_sync_lvl4                                                       0x1801F9C8
#define  TVE_ip_sync_lvl4_reg_addr                                               "0xB801F9C8"
#define  TVE_ip_sync_lvl4_reg                                                    0xB801F9C8
#define  TVE_ip_sync_lvl4_inst_addr                                              "0x0055"
#define  set_TVE_ip_sync_lvl4_reg(data)                                          (*((volatile unsigned int*)TVE_ip_sync_lvl4_reg)=data)
#define  get_TVE_ip_sync_lvl4_reg                                                (*((volatile unsigned int*)TVE_ip_sync_lvl4_reg))
#define  TVE_ip_sync_lvl4_sync_lvl_l_shift                                       (0)
#define  TVE_ip_sync_lvl4_sync_lvl_l_mask                                        (0x000000FF)
#define  TVE_ip_sync_lvl4_sync_lvl_l(data)                                       (0x000000FF&(data))
#define  TVE_ip_sync_lvl4_get_sync_lvl_l(data)                                   (0x000000FF&(data))

#define  TVE_ip_o_ctrl                                                          0x1801F8BC
#define  TVE_ip_o_ctrl_reg_addr                                                  "0xB801F8BC"
#define  TVE_ip_o_ctrl_reg                                                       0xB801F8BC
#define  TVE_ip_o_ctrl_inst_addr                                                 "0x0056"
#define  set_TVE_ip_o_ctrl_reg(data)                                             (*((volatile unsigned int*)TVE_ip_o_ctrl_reg)=data)
#define  get_TVE_ip_o_ctrl_reg                                                   (*((volatile unsigned int*)TVE_ip_o_ctrl_reg))
#define  TVE_ip_o_ctrl_y_path_delay_shift                                        (4)
#define  TVE_ip_o_ctrl_y_tsel_yuv_shift                                          (3)
#define  TVE_ip_o_ctrl_t_pd_cvdac_shift                                          (2)
#define  TVE_ip_o_ctrl_t_pd_ydac_shift                                           (1)
#define  TVE_ip_o_ctrl_t_pd_cdac_shift                                           (0)
#define  TVE_ip_o_ctrl_y_path_delay_mask                                         (0x00000030)
#define  TVE_ip_o_ctrl_y_tsel_yuv_mask                                           (0x00000008)
#define  TVE_ip_o_ctrl_t_pd_cvdac_mask                                           (0x00000004)
#define  TVE_ip_o_ctrl_t_pd_ydac_mask                                            (0x00000002)
#define  TVE_ip_o_ctrl_t_pd_cdac_mask                                            (0x00000001)
#define  TVE_ip_o_ctrl_y_path_delay(data)                                        (0x00000030&((data)<<4))
#define  TVE_ip_o_ctrl_y_tsel_yuv(data)                                          (0x00000008&((data)<<3))
#define  TVE_ip_o_ctrl_t_pd_cvdac(data)                                          (0x00000004&((data)<<2))
#define  TVE_ip_o_ctrl_t_pd_ydac(data)                                           (0x00000002&((data)<<1))
#define  TVE_ip_o_ctrl_t_pd_cdac(data)                                           (0x00000001&(data))
#define  TVE_ip_o_ctrl_get_y_path_delay(data)                                    ((0x00000030&(data))>>4)
#define  TVE_ip_o_ctrl_get_y_tsel_yuv(data)                                      ((0x00000008&(data))>>3)
#define  TVE_ip_o_ctrl_get_t_pd_cvdac(data)                                      ((0x00000004&(data))>>2)
#define  TVE_ip_o_ctrl_get_t_pd_ydac(data)                                       ((0x00000002&(data))>>1)
#define  TVE_ip_o_ctrl_get_t_pd_cdac(data)                                       (0x00000001&(data))

#define  TVE_ip_nba                                                             0x1801F8C8
#define  TVE_ip_nba_reg_addr                                                     "0xB801F8C8"
#define  TVE_ip_nba_reg                                                          0xB801F8C8
#define  TVE_ip_nba_inst_addr                                                    "0x0057"
#define  set_TVE_ip_nba_reg(data)                                                (*((volatile unsigned int*)TVE_ip_nba_reg)=data)
#define  get_TVE_ip_nba_reg                                                      (*((volatile unsigned int*)TVE_ip_nba_reg))
#define  TVE_ip_nba_nba_shift                                                    (0)
#define  TVE_ip_nba_nba_mask                                                     (0x000000FF)
#define  TVE_ip_nba_nba(data)                                                    (0x000000FF&(data))
#define  TVE_ip_nba_get_nba(data)                                                (0x000000FF&(data))

#define  TVE_ip_pba                                                             0x1801F8CC
#define  TVE_ip_pba_reg_addr                                                     "0xB801F8CC"
#define  TVE_ip_pba_reg                                                          0xB801F8CC
#define  TVE_ip_pba_inst_addr                                                    "0x0058"
#define  set_TVE_ip_pba_reg(data)                                                (*((volatile unsigned int*)TVE_ip_pba_reg)=data)
#define  get_TVE_ip_pba_reg                                                      (*((volatile unsigned int*)TVE_ip_pba_reg))
#define  TVE_ip_pba_pba_shift                                                    (0)
#define  TVE_ip_pba_pba_mask                                                     (0x000000FF)
#define  TVE_ip_pba_pba(data)                                                    (0x000000FF&(data))
#define  TVE_ip_pba_get_pba(data)                                                (0x000000FF&(data))

#define  TVE_ip_c_ctrl                                                          0x1801F8D0
#define  TVE_ip_c_ctrl_reg_addr                                                  "0xB801F8D0"
#define  TVE_ip_c_ctrl_reg                                                       0xB801F8D0
#define  TVE_ip_c_ctrl_inst_addr                                                 "0x0059"
#define  set_TVE_ip_c_ctrl_reg(data)                                             (*((volatile unsigned int*)TVE_ip_c_ctrl_reg)=data)
#define  get_TVE_ip_c_ctrl_reg                                                   (*((volatile unsigned int*)TVE_ip_c_ctrl_reg))
#define  TVE_ip_c_ctrl_t_pal_clpf_shift                                          (1)
#define  TVE_ip_c_ctrl_t_sel_c_gain_shift                                        (0)
#define  TVE_ip_c_ctrl_t_pal_clpf_mask                                           (0x00000002)
#define  TVE_ip_c_ctrl_t_sel_c_gain_mask                                         (0x00000001)
#define  TVE_ip_c_ctrl_t_pal_clpf(data)                                          (0x00000002&((data)<<1))
#define  TVE_ip_c_ctrl_t_sel_c_gain(data)                                        (0x00000001&(data))
#define  TVE_ip_c_ctrl_get_t_pal_clpf(data)                                      ((0x00000002&(data))>>1)
#define  TVE_ip_c_ctrl_get_t_sel_c_gain(data)                                    (0x00000001&(data))

#define  TVE_ip_test_t_byp_cups                                                 0x1801F98C
#define  TVE_ip_test_t_byp_cups_reg_addr                                         "0xB801F98C"
#define  TVE_ip_test_t_byp_cups_reg                                              0xB801F98C
#define  TVE_ip_test_t_byp_cups_inst_addr                                        "0x005A"
#define  set_TVE_ip_test_t_byp_cups_reg(data)                                    (*((volatile unsigned int*)TVE_ip_test_t_byp_cups_reg)=data)
#define  get_TVE_ip_test_t_byp_cups_reg                                          (*((volatile unsigned int*)TVE_ip_test_t_byp_cups_reg))
#define  TVE_ip_test_t_byp_cups_t_byp_cups_shift                                 (2)
#define  TVE_ip_test_t_byp_cups_t_byp_clpf_shift                                 (1)
#define  TVE_ip_test_t_byp_cups_t_c_gain_off_shift                               (0)
#define  TVE_ip_test_t_byp_cups_t_byp_cups_mask                                  (0x00000004)
#define  TVE_ip_test_t_byp_cups_t_byp_clpf_mask                                  (0x00000002)
#define  TVE_ip_test_t_byp_cups_t_c_gain_off_mask                                (0x00000001)
#define  TVE_ip_test_t_byp_cups_t_byp_cups(data)                                 (0x00000004&((data)<<2))
#define  TVE_ip_test_t_byp_cups_t_byp_clpf(data)                                 (0x00000002&((data)<<1))
#define  TVE_ip_test_t_byp_cups_t_c_gain_off(data)                               (0x00000001&(data))
#define  TVE_ip_test_t_byp_cups_get_t_byp_cups(data)                             ((0x00000004&(data))>>2)
#define  TVE_ip_test_t_byp_cups_get_t_byp_clpf(data)                             ((0x00000002&(data))>>1)
#define  TVE_ip_test_t_byp_cups_get_t_c_gain_off(data)                           (0x00000001&(data))

#define  TVE_ip_synclpf_gain                                                    0x1801F9CC
#define  TVE_ip_synclpf_gain_reg_addr                                            "0xB801F9CC"
#define  TVE_ip_synclpf_gain_reg                                                 0xB801F9CC
#define  TVE_ip_synclpf_gain_inst_addr                                           "0x005B"
#define  set_TVE_ip_synclpf_gain_reg(data)                                       (*((volatile unsigned int*)TVE_ip_synclpf_gain_reg)=data)
#define  get_TVE_ip_synclpf_gain_reg                                             (*((volatile unsigned int*)TVE_ip_synclpf_gain_reg))
#define  TVE_ip_synclpf_gain_clpf_gain_shift                                     (0)
#define  TVE_ip_synclpf_gain_clpf_gain_mask                                      (0x000000FF)
#define  TVE_ip_synclpf_gain_clpf_gain(data)                                     (0x000000FF&(data))
#define  TVE_ip_synclpf_gain_get_clpf_gain(data)                                 (0x000000FF&(data))

#define  TVE_ip_s_ctrl                                                          0x1801F8E0
#define  TVE_ip_s_ctrl_reg_addr                                                  "0xB801F8E0"
#define  TVE_ip_s_ctrl_reg                                                       0xB801F8E0
#define  TVE_ip_s_ctrl_inst_addr                                                 "0x005C"
#define  set_TVE_ip_s_ctrl_reg(data)                                             (*((volatile unsigned int*)TVE_ip_s_ctrl_reg)=data)
#define  get_TVE_ip_s_ctrl_reg                                                   (*((volatile unsigned int*)TVE_ip_s_ctrl_reg))
#define  TVE_ip_s_ctrl_t_hsync_phs_shift                                         (7)
#define  TVE_ip_s_ctrl_t_vsync_phs_shift                                         (6)
#define  TVE_ip_s_ctrl_y_tsyncmode_shift                                         (3)
#define  TVE_ip_s_ctrl_y_tencd_mode_shift                                        (0)
#define  TVE_ip_s_ctrl_t_hsync_phs_mask                                          (0x00000080)
#define  TVE_ip_s_ctrl_t_vsync_phs_mask                                          (0x00000040)
#define  TVE_ip_s_ctrl_y_tsyncmode_mask                                          (0x00000038)
#define  TVE_ip_s_ctrl_y_tencd_mode_mask                                         (0x00000007)
#define  TVE_ip_s_ctrl_t_hsync_phs(data)                                         (0x00000080&((data)<<7))
#define  TVE_ip_s_ctrl_t_vsync_phs(data)                                         (0x00000040&((data)<<6))
#define  TVE_ip_s_ctrl_y_tsyncmode(data)                                         (0x00000038&((data)<<3))
#define  TVE_ip_s_ctrl_y_tencd_mode(data)                                        (0x00000007&(data))
#define  TVE_ip_s_ctrl_get_t_hsync_phs(data)                                     ((0x00000080&(data))>>7)
#define  TVE_ip_s_ctrl_get_t_vsync_phs(data)                                     ((0x00000040&(data))>>6)
#define  TVE_ip_s_ctrl_get_y_tsyncmode(data)                                     ((0x00000038&(data))>>3)
#define  TVE_ip_s_ctrl_get_y_tencd_mode(data)                                    (0x00000007&(data))

#define  TVE_ip_vso0                                                            0x1801F8E4
#define  TVE_ip_vso0_reg_addr                                                    "0xB801F8E4"
#define  TVE_ip_vso0_reg                                                         0xB801F8E4
#define  TVE_ip_vso0_inst_addr                                                   "0x005D"
#define  set_TVE_ip_vso0_reg(data)                                               (*((volatile unsigned int*)TVE_ip_vso0_reg)=data)
#define  get_TVE_ip_vso0_reg                                                     (*((volatile unsigned int*)TVE_ip_vso0_reg))
#define  TVE_ip_vso0_clk_phs_shift                                               (6)
#define  TVE_ip_vso0_t_fsync_enbl_shift                                          (5)
#define  TVE_ip_vso0_t_fsync_phs_shift                                           (4)
#define  TVE_ip_vso0_vso_shift                                                   (0)
#define  TVE_ip_vso0_clk_phs_mask                                                (0x000000C0)
#define  TVE_ip_vso0_t_fsync_enbl_mask                                           (0x00000020)
#define  TVE_ip_vso0_t_fsync_phs_mask                                            (0x00000010)
#define  TVE_ip_vso0_vso_mask                                                    (0x00000003)
#define  TVE_ip_vso0_clk_phs(data)                                               (0x000000C0&((data)<<6))
#define  TVE_ip_vso0_t_fsync_enbl(data)                                          (0x00000020&((data)<<5))
#define  TVE_ip_vso0_t_fsync_phs(data)                                           (0x00000010&((data)<<4))
#define  TVE_ip_vso0_vso(data)                                                   (0x00000003&(data))
#define  TVE_ip_vso0_get_clk_phs(data)                                           ((0x000000C0&(data))>>6)
#define  TVE_ip_vso0_get_t_fsync_enbl(data)                                      ((0x00000020&(data))>>5)
#define  TVE_ip_vso0_get_t_fsync_phs(data)                                       ((0x00000010&(data))>>4)
#define  TVE_ip_vso0_get_vso(data)                                               (0x00000003&(data))

#define  TVE_ip_vso1                                                            0x1801F8E8
#define  TVE_ip_vso1_reg_addr                                                    "0xB801F8E8"
#define  TVE_ip_vso1_reg                                                         0xB801F8E8
#define  TVE_ip_vso1_inst_addr                                                   "0x005E"
#define  set_TVE_ip_vso1_reg(data)                                               (*((volatile unsigned int*)TVE_ip_vso1_reg)=data)
#define  get_TVE_ip_vso1_reg                                                     (*((volatile unsigned int*)TVE_ip_vso1_reg))
#define  TVE_ip_vso1_vso_shift                                                   (0)
#define  TVE_ip_vso1_vso_mask                                                    (0x000000FF)
#define  TVE_ip_vso1_vso(data)                                                   (0x000000FF&(data))
#define  TVE_ip_vso1_get_vso(data)                                               (0x000000FF&(data))

#define  TVE_ip_hso0                                                            0x1801F8EC
#define  TVE_ip_hso0_reg_addr                                                    "0xB801F8EC"
#define  TVE_ip_hso0_reg                                                         0xB801F8EC
#define  TVE_ip_hso0_inst_addr                                                   "0x005F"
#define  set_TVE_ip_hso0_reg(data)                                               (*((volatile unsigned int*)TVE_ip_hso0_reg)=data)
#define  get_TVE_ip_hso0_reg                                                     (*((volatile unsigned int*)TVE_ip_hso0_reg))
#define  TVE_ip_hso0_hso_shift                                                   (0)
#define  TVE_ip_hso0_hso_mask                                                    (0x00000007)
#define  TVE_ip_hso0_hso(data)                                                   (0x00000007&(data))
#define  TVE_ip_hso0_get_hso(data)                                               (0x00000007&(data))

#define  TVE_ip_hso1                                                            0x1801F8F0
#define  TVE_ip_hso1_reg_addr                                                    "0xB801F8F0"
#define  TVE_ip_hso1_reg                                                         0xB801F8F0
#define  TVE_ip_hso1_inst_addr                                                   "0x0060"
#define  set_TVE_ip_hso1_reg(data)                                               (*((volatile unsigned int*)TVE_ip_hso1_reg)=data)
#define  get_TVE_ip_hso1_reg                                                     (*((volatile unsigned int*)TVE_ip_hso1_reg))
#define  TVE_ip_hso1_hso_shift                                                   (0)
#define  TVE_ip_hso1_hso_mask                                                    (0x000000FF)
#define  TVE_ip_hso1_hso(data)                                                   (0x000000FF&(data))
#define  TVE_ip_hso1_get_hso(data)                                               (0x000000FF&(data))

#define  TVE_ip_hlc0                                                            0x1801F8F4
#define  TVE_ip_hlc0_reg_addr                                                    "0xB801F8F4"
#define  TVE_ip_hlc0_reg                                                         0xB801F8F4
#define  TVE_ip_hlc0_inst_addr                                                   "0x0061"
#define  set_TVE_ip_hlc0_reg(data)                                               (*((volatile unsigned int*)TVE_ip_hlc0_reg)=data)
#define  get_TVE_ip_hlc0_reg                                                     (*((volatile unsigned int*)TVE_ip_hlc0_reg))
#define  TVE_ip_hlc0_hlc_shift                                                   (0)
#define  TVE_ip_hlc0_hlc_mask                                                    (0x00000003)
#define  TVE_ip_hlc0_hlc(data)                                                   (0x00000003&(data))
#define  TVE_ip_hlc0_get_hlc(data)                                               (0x00000003&(data))

#define  TVE_ip_hlc1                                                            0x1801F8F8
#define  TVE_ip_hlc1_reg_addr                                                    "0xB801F8F8"
#define  TVE_ip_hlc1_reg                                                         0xB801F8F8
#define  TVE_ip_hlc1_inst_addr                                                   "0x0062"
#define  set_TVE_ip_hlc1_reg(data)                                               (*((volatile unsigned int*)TVE_ip_hlc1_reg)=data)
#define  get_TVE_ip_hlc1_reg                                                     (*((volatile unsigned int*)TVE_ip_hlc1_reg))
#define  TVE_ip_hlc1_hlc_shift                                                   (0)
#define  TVE_ip_hlc1_hlc_mask                                                    (0x000000FF)
#define  TVE_ip_hlc1_hlc(data)                                                   (0x000000FF&(data))
#define  TVE_ip_hlc1_get_hlc(data)                                               (0x000000FF&(data))

#define  TVE_ip_ccd_odd_0                                                       0x1801F904
#define  TVE_ip_ccd_odd_0_reg_addr                                               "0xB801F904"
#define  TVE_ip_ccd_odd_0_reg                                                    0xB801F904
#define  TVE_ip_ccd_odd_0_inst_addr                                              "0x0063"
#define  set_TVE_ip_ccd_odd_0_reg(data)                                          (*((volatile unsigned int*)TVE_ip_ccd_odd_0_reg)=data)
#define  get_TVE_ip_ccd_odd_0_reg                                                (*((volatile unsigned int*)TVE_ip_ccd_odd_0_reg))
#define  TVE_ip_ccd_odd_0_ccd_odd_shift                                          (0)
#define  TVE_ip_ccd_odd_0_ccd_odd_mask                                           (0x000000FF)
#define  TVE_ip_ccd_odd_0_ccd_odd(data)                                          (0x000000FF&(data))
#define  TVE_ip_ccd_odd_0_get_ccd_odd(data)                                      (0x000000FF&(data))

#define  TVE_ip_ccd_odd_1                                                       0x1801F908
#define  TVE_ip_ccd_odd_1_reg_addr                                               "0xB801F908"
#define  TVE_ip_ccd_odd_1_reg                                                    0xB801F908
#define  TVE_ip_ccd_odd_1_inst_addr                                              "0x0064"
#define  set_TVE_ip_ccd_odd_1_reg(data)                                          (*((volatile unsigned int*)TVE_ip_ccd_odd_1_reg)=data)
#define  get_TVE_ip_ccd_odd_1_reg                                                (*((volatile unsigned int*)TVE_ip_ccd_odd_1_reg))
#define  TVE_ip_ccd_odd_1_ccd_odd_shift                                          (0)
#define  TVE_ip_ccd_odd_1_ccd_odd_mask                                           (0x000000FF)
#define  TVE_ip_ccd_odd_1_ccd_odd(data)                                          (0x000000FF&(data))
#define  TVE_ip_ccd_odd_1_get_ccd_odd(data)                                      (0x000000FF&(data))

#define  TVE_ip_ccd_even_0                                                      0x1801F90C
#define  TVE_ip_ccd_even_0_reg_addr                                              "0xB801F90C"
#define  TVE_ip_ccd_even_0_reg                                                   0xB801F90C
#define  TVE_ip_ccd_even_0_inst_addr                                             "0x0065"
#define  set_TVE_ip_ccd_even_0_reg(data)                                         (*((volatile unsigned int*)TVE_ip_ccd_even_0_reg)=data)
#define  get_TVE_ip_ccd_even_0_reg                                               (*((volatile unsigned int*)TVE_ip_ccd_even_0_reg))
#define  TVE_ip_ccd_even_0_ccd_even_shift                                        (0)
#define  TVE_ip_ccd_even_0_ccd_even_mask                                         (0x000000FF)
#define  TVE_ip_ccd_even_0_ccd_even(data)                                        (0x000000FF&(data))
#define  TVE_ip_ccd_even_0_get_ccd_even(data)                                    (0x000000FF&(data))

#define  TVE_ip_ccd_even_1                                                      0x1801F910
#define  TVE_ip_ccd_even_1_reg_addr                                              "0xB801F910"
#define  TVE_ip_ccd_even_1_reg                                                   0xB801F910
#define  TVE_ip_ccd_even_1_inst_addr                                             "0x0066"
#define  set_TVE_ip_ccd_even_1_reg(data)                                         (*((volatile unsigned int*)TVE_ip_ccd_even_1_reg)=data)
#define  get_TVE_ip_ccd_even_1_reg                                               (*((volatile unsigned int*)TVE_ip_ccd_even_1_reg))
#define  TVE_ip_ccd_even_1_ccd_even_shift                                        (0)
#define  TVE_ip_ccd_even_1_ccd_even_mask                                         (0x000000FF)
#define  TVE_ip_ccd_even_1_ccd_even(data)                                        (0x000000FF&(data))
#define  TVE_ip_ccd_even_1_get_ccd_even(data)                                    (0x000000FF&(data))

#define  TVE_ip_ccd_enbl                                                        0x1801F914
#define  TVE_ip_ccd_enbl_reg_addr                                                "0xB801F914"
#define  TVE_ip_ccd_enbl_reg                                                     0xB801F914
#define  TVE_ip_ccd_enbl_inst_addr                                               "0x0067"
#define  set_TVE_ip_ccd_enbl_reg(data)                                           (*((volatile unsigned int*)TVE_ip_ccd_enbl_reg)=data)
#define  get_TVE_ip_ccd_enbl_reg                                                 (*((volatile unsigned int*)TVE_ip_ccd_enbl_reg))
#define  TVE_ip_ccd_enbl_cc_enbl_shift                                           (0)
#define  TVE_ip_ccd_enbl_cc_enbl_mask                                            (0x00000003)
#define  TVE_ip_ccd_enbl_cc_enbl(data)                                           (0x00000003&(data))
#define  TVE_ip_ccd_enbl_get_cc_enbl(data)                                       (0x00000003&(data))

#define  TVE_ip_test_hlr0                                                       0x1801F9B4
#define  TVE_ip_test_hlr0_reg_addr                                               "0xB801F9B4"
#define  TVE_ip_test_hlr0_reg                                                    0xB801F9B4
#define  TVE_ip_test_hlr0_inst_addr                                              "0x0068"
#define  set_TVE_ip_test_hlr0_reg(data)                                          (*((volatile unsigned int*)TVE_ip_test_hlr0_reg)=data)
#define  get_TVE_ip_test_hlr0_reg                                                (*((volatile unsigned int*)TVE_ip_test_hlr0_reg))
#define  TVE_ip_test_hlr0_hlr_shift                                              (0)
#define  TVE_ip_test_hlr0_hlr_mask                                               (0x00000003)
#define  TVE_ip_test_hlr0_hlr(data)                                              (0x00000003&(data))
#define  TVE_ip_test_hlr0_get_hlr(data)                                          (0x00000003&(data))

#define  TVE_ip_test_hlr1                                                       0x1801F9B8
#define  TVE_ip_test_hlr1_reg_addr                                               "0xB801F9B8"
#define  TVE_ip_test_hlr1_reg                                                    0xB801F9B8
#define  TVE_ip_test_hlr1_inst_addr                                              "0x0069"
#define  set_TVE_ip_test_hlr1_reg(data)                                          (*((volatile unsigned int*)TVE_ip_test_hlr1_reg)=data)
#define  get_TVE_ip_test_hlr1_reg                                                (*((volatile unsigned int*)TVE_ip_test_hlr1_reg))
#define  TVE_ip_test_hlr1_hlr_shift                                              (0)
#define  TVE_ip_test_hlr1_hlr_mask                                               (0x000000FF)
#define  TVE_ip_test_hlr1_hlr(data)                                              (0x000000FF&(data))
#define  TVE_ip_test_hlr1_get_hlr(data)                                          (0x000000FF&(data))

#define  TVE_ip_test_vsmr                                                       0x1801F9BC
#define  TVE_ip_test_vsmr_reg_addr                                               "0xB801F9BC"
#define  TVE_ip_test_vsmr_reg                                                    0xB801F9BC
#define  TVE_ip_test_vsmr_inst_addr                                              "0x006A"
#define  set_TVE_ip_test_vsmr_reg(data)                                          (*((volatile unsigned int*)TVE_ip_test_vsmr_reg)=data)
#define  get_TVE_ip_test_vsmr_reg                                                (*((volatile unsigned int*)TVE_ip_test_vsmr_reg))
#define  TVE_ip_test_vsmr_vsmr_shift                                             (0)
#define  TVE_ip_test_vsmr_vsmr_mask                                              (0x0000001F)
#define  TVE_ip_test_vsmr_vsmr(data)                                             (0x0000001F&(data))
#define  TVE_ip_test_vsmr_get_vsmr(data)                                         (0x0000001F&(data))

#define  TVE_ip_sync_strt                                                       0x1801F9D0
#define  TVE_ip_sync_strt_reg_addr                                               "0xB801F9D0"
#define  TVE_ip_sync_strt_reg                                                    0xB801F9D0
#define  TVE_ip_sync_strt_inst_addr                                              "0x006B"
#define  set_TVE_ip_sync_strt_reg(data)                                          (*((volatile unsigned int*)TVE_ip_sync_strt_reg)=data)
#define  get_TVE_ip_sync_strt_reg                                                (*((volatile unsigned int*)TVE_ip_sync_strt_reg))
#define  TVE_ip_sync_strt_sync_strt_shift                                        (0)
#define  TVE_ip_sync_strt_sync_strt_mask                                         (0x0000000F)
#define  TVE_ip_sync_strt_sync_strt(data)                                        (0x0000000F&(data))
#define  TVE_ip_sync_strt_get_sync_strt(data)                                    (0x0000000F&(data))

#define  TVE_ip_sync_end                                                        0x1801F9D4
#define  TVE_ip_sync_end_reg_addr                                                "0xB801F9D4"
#define  TVE_ip_sync_end_reg                                                     0xB801F9D4
#define  TVE_ip_sync_end_inst_addr                                               "0x006C"
#define  set_TVE_ip_sync_end_reg(data)                                           (*((volatile unsigned int*)TVE_ip_sync_end_reg)=data)
#define  get_TVE_ip_sync_end_reg                                                 (*((volatile unsigned int*)TVE_ip_sync_end_reg))
#define  TVE_ip_sync_end_sync_end_shift                                          (0)
#define  TVE_ip_sync_end_sync_end_mask                                           (0x0000007F)
#define  TVE_ip_sync_end_sync_end(data)                                          (0x0000007F&(data))
#define  TVE_ip_sync_end_get_sync_end(data)                                      (0x0000007F&(data))

#define  TVE_ip_sync_srend                                                      0x1801F9D8
#define  TVE_ip_sync_srend_reg_addr                                              "0xB801F9D8"
#define  TVE_ip_sync_srend_reg                                                   0xB801F9D8
#define  TVE_ip_sync_srend_inst_addr                                             "0x006D"
#define  set_TVE_ip_sync_srend_reg(data)                                         (*((volatile unsigned int*)TVE_ip_sync_srend_reg)=data)
#define  get_TVE_ip_sync_srend_reg                                               (*((volatile unsigned int*)TVE_ip_sync_srend_reg))
#define  TVE_ip_sync_srend_sync_srend_shift                                      (0)
#define  TVE_ip_sync_srend_sync_srend_mask                                       (0x000000FF)
#define  TVE_ip_sync_srend_sync_srend(data)                                      (0x000000FF&(data))
#define  TVE_ip_sync_srend_get_sync_srend(data)                                  (0x000000FF&(data))

#define  TVE_ip_sync_eqend                                                      0x1801F9DC
#define  TVE_ip_sync_eqend_reg_addr                                              "0xB801F9DC"
#define  TVE_ip_sync_eqend_reg                                                   0xB801F9DC
#define  TVE_ip_sync_eqend_inst_addr                                             "0x006E"
#define  set_TVE_ip_sync_eqend_reg(data)                                         (*((volatile unsigned int*)TVE_ip_sync_eqend_reg)=data)
#define  get_TVE_ip_sync_eqend_reg                                               (*((volatile unsigned int*)TVE_ip_sync_eqend_reg))
#define  TVE_ip_sync_eqend_sync_eqend_shift                                      (0)
#define  TVE_ip_sync_eqend_sync_eqend_mask                                       (0x0000003F)
#define  TVE_ip_sync_eqend_sync_eqend(data)                                      (0x0000003F&(data))
#define  TVE_ip_sync_eqend_get_sync_eqend(data)                                  (0x0000003F&(data))

#define  TVE_ip_actv_strt                                                       0x1801F9E0
#define  TVE_ip_actv_strt_reg_addr                                               "0xB801F9E0"
#define  TVE_ip_actv_strt_reg                                                    0xB801F9E0
#define  TVE_ip_actv_strt_inst_addr                                              "0x006F"
#define  set_TVE_ip_actv_strt_reg(data)                                          (*((volatile unsigned int*)TVE_ip_actv_strt_reg)=data)
#define  get_TVE_ip_actv_strt_reg                                                (*((volatile unsigned int*)TVE_ip_actv_strt_reg))
#define  TVE_ip_actv_strt_actv_strt_shift                                        (0)
#define  TVE_ip_actv_strt_actv_strt_mask                                         (0x000000FF)
#define  TVE_ip_actv_strt_actv_strt(data)                                        (0x000000FF&(data))
#define  TVE_ip_actv_strt_get_actv_strt(data)                                    (0x000000FF&(data))

#define  TVE_ip_actv_end                                                        0x1801F9E4
#define  TVE_ip_actv_end_reg_addr                                                "0xB801F9E4"
#define  TVE_ip_actv_end_reg                                                     0xB801F9E4
#define  TVE_ip_actv_end_inst_addr                                               "0x0070"
#define  set_TVE_ip_actv_end_reg(data)                                           (*((volatile unsigned int*)TVE_ip_actv_end_reg)=data)
#define  get_TVE_ip_actv_end_reg                                                 (*((volatile unsigned int*)TVE_ip_actv_end_reg))
#define  TVE_ip_actv_end_actv_end_shift                                          (0)
#define  TVE_ip_actv_end_actv_end_mask                                           (0x000000FF)
#define  TVE_ip_actv_end_actv_end(data)                                          (0x000000FF&(data))
#define  TVE_ip_actv_end_get_actv_end(data)                                      (0x000000FF&(data))

#define  TVE_ip_wbrst_strt                                                      0x1801F9E8
#define  TVE_ip_wbrst_strt_reg_addr                                              "0xB801F9E8"
#define  TVE_ip_wbrst_strt_reg                                                   0xB801F9E8
#define  TVE_ip_wbrst_strt_inst_addr                                             "0x0071"
#define  set_TVE_ip_wbrst_strt_reg(data)                                         (*((volatile unsigned int*)TVE_ip_wbrst_strt_reg)=data)
#define  get_TVE_ip_wbrst_strt_reg                                               (*((volatile unsigned int*)TVE_ip_wbrst_strt_reg))
#define  TVE_ip_wbrst_strt_wbrst_strt_shift                                      (0)
#define  TVE_ip_wbrst_strt_wbrst_strt_mask                                       (0x0000007F)
#define  TVE_ip_wbrst_strt_wbrst_strt(data)                                      (0x0000007F&(data))
#define  TVE_ip_wbrst_strt_get_wbrst_strt(data)                                  (0x0000007F&(data))

#define  TVE_ip_nbrst_strt                                                      0x1801F9EC
#define  TVE_ip_nbrst_strt_reg_addr                                              "0xB801F9EC"
#define  TVE_ip_nbrst_strt_reg                                                   0xB801F9EC
#define  TVE_ip_nbrst_strt_inst_addr                                             "0x0072"
#define  set_TVE_ip_nbrst_strt_reg(data)                                         (*((volatile unsigned int*)TVE_ip_nbrst_strt_reg)=data)
#define  get_TVE_ip_nbrst_strt_reg                                               (*((volatile unsigned int*)TVE_ip_nbrst_strt_reg))
#define  TVE_ip_nbrst_strt_nbrst_strt_shift                                      (0)
#define  TVE_ip_nbrst_strt_nbrst_strt_mask                                       (0x0000007F)
#define  TVE_ip_nbrst_strt_nbrst_strt(data)                                      (0x0000007F&(data))
#define  TVE_ip_nbrst_strt_get_nbrst_strt(data)                                  (0x0000007F&(data))

#define  TVE_ip_nbrst_end                                                       0x1801F9F0
#define  TVE_ip_nbrst_end_reg_addr                                               "0xB801F9F0"
#define  TVE_ip_nbrst_end_reg                                                    0xB801F9F0
#define  TVE_ip_nbrst_end_inst_addr                                              "0x0073"
#define  set_TVE_ip_nbrst_end_reg(data)                                          (*((volatile unsigned int*)TVE_ip_nbrst_end_reg)=data)
#define  get_TVE_ip_nbrst_end_reg                                                (*((volatile unsigned int*)TVE_ip_nbrst_end_reg))
#define  TVE_ip_nbrst_end_nbrst_end_shift                                        (0)
#define  TVE_ip_nbrst_end_nbrst_end_mask                                         (0x000000FF)
#define  TVE_ip_nbrst_end_nbrst_end(data)                                        (0x000000FF&(data))
#define  TVE_ip_nbrst_end_get_nbrst_end(data)                                    (0x000000FF&(data))

#define  TVE_ip_TVEfcr                                                          0x1801F920
#define  TVE_ip_TVEfcr_reg_addr                                                  "0xB801F920"
#define  TVE_ip_TVEfcr_reg                                                       0xB801F920
#define  TVE_ip_TVEfcr_inst_addr                                                 "0x0074"
#define  set_TVE_ip_TVEfcr_reg(data)                                             (*((volatile unsigned int*)TVE_ip_TVEfcr_reg)=data)
#define  get_TVE_ip_TVEfcr_reg                                                   (*((volatile unsigned int*)TVE_ip_TVEfcr_reg))
#define  TVE_ip_TVEfcr_tvefcr_shift                                              (0)
#define  TVE_ip_TVEfcr_tvefcr_mask                                               (0x000000FF)
#define  TVE_ip_TVEfcr_tvefcr(data)                                              (0x000000FF&(data))
#define  TVE_ip_TVEfcr_get_tvefcr(data)                                          (0x000000FF&(data))

#define  TVE_ip_TVEcsl1                                                         0x1801F924
#define  TVE_ip_TVEcsl1_reg_addr                                                 "0xB801F924"
#define  TVE_ip_TVEcsl1_reg                                                      0xB801F924
#define  TVE_ip_TVEcsl1_inst_addr                                                "0x0075"
#define  set_TVE_ip_TVEcsl1_reg(data)                                            (*((volatile unsigned int*)TVE_ip_TVEcsl1_reg)=data)
#define  get_TVE_ip_TVEcsl1_reg                                                  (*((volatile unsigned int*)TVE_ip_TVEcsl1_reg))
#define  TVE_ip_TVEcsl1_tvecsl1_shift                                            (0)
#define  TVE_ip_TVEcsl1_tvecsl1_mask                                             (0x000000FF)
#define  TVE_ip_TVEcsl1_tvecsl1(data)                                            (0x000000FF&(data))
#define  TVE_ip_TVEcsl1_get_tvecsl1(data)                                        (0x000000FF&(data))

#define  TVE_ip_TVEcls1                                                         0x1801F928
#define  TVE_ip_TVEcls1_reg_addr                                                 "0xB801F928"
#define  TVE_ip_TVEcls1_reg                                                      0xB801F928
#define  TVE_ip_TVEcls1_inst_addr                                                "0x0076"
#define  set_TVE_ip_TVEcls1_reg(data)                                            (*((volatile unsigned int*)TVE_ip_TVEcls1_reg)=data)
#define  get_TVE_ip_TVEcls1_reg                                                  (*((volatile unsigned int*)TVE_ip_TVEcls1_reg))
#define  TVE_ip_TVEcls1_tvecls1_shift                                            (0)
#define  TVE_ip_TVEcls1_tvecls1_mask                                             (0x0000003F)
#define  TVE_ip_TVEcls1_tvecls1(data)                                            (0x0000003F&(data))
#define  TVE_ip_TVEcls1_get_tvecls1(data)                                        (0x0000003F&(data))

#define  TVE_ip_TVEcsl2                                                         0x1801F92C
#define  TVE_ip_TVEcsl2_reg_addr                                                 "0xB801F92C"
#define  TVE_ip_TVEcsl2_reg                                                      0xB801F92C
#define  TVE_ip_TVEcsl2_inst_addr                                                "0x0077"
#define  set_TVE_ip_TVEcsl2_reg(data)                                            (*((volatile unsigned int*)TVE_ip_TVEcsl2_reg)=data)
#define  get_TVE_ip_TVEcsl2_reg                                                  (*((volatile unsigned int*)TVE_ip_TVEcsl2_reg))
#define  TVE_ip_TVEcsl2_tvecsl2_shift                                            (0)
#define  TVE_ip_TVEcsl2_tvecsl2_mask                                             (0x000000FF)
#define  TVE_ip_TVEcsl2_tvecsl2(data)                                            (0x000000FF&(data))
#define  TVE_ip_TVEcsl2_get_tvecsl2(data)                                        (0x000000FF&(data))

#define  TVE_ip_TVEcls2                                                         0x1801F930
#define  TVE_ip_TVEcls2_reg_addr                                                 "0xB801F930"
#define  TVE_ip_TVEcls2_reg                                                      0xB801F930
#define  TVE_ip_TVEcls2_inst_addr                                                "0x0078"
#define  set_TVE_ip_TVEcls2_reg(data)                                            (*((volatile unsigned int*)TVE_ip_TVEcls2_reg)=data)
#define  get_TVE_ip_TVEcls2_reg                                                  (*((volatile unsigned int*)TVE_ip_TVEcls2_reg))
#define  TVE_ip_TVEcls2_tvecls2_shift                                            (0)
#define  TVE_ip_TVEcls2_tvecls2_mask                                             (0x0000003F)
#define  TVE_ip_TVEcls2_tvecls2(data)                                            (0x0000003F&(data))
#define  TVE_ip_TVEcls2_get_tvecls2(data)                                        (0x0000003F&(data))

#define  TVE_ip_TVEcssp                                                         0x1801F934
#define  TVE_ip_TVEcssp_reg_addr                                                 "0xB801F934"
#define  TVE_ip_TVEcssp_reg                                                      0xB801F934
#define  TVE_ip_TVEcssp_inst_addr                                                "0x0079"
#define  set_TVE_ip_TVEcssp_reg(data)                                            (*((volatile unsigned int*)TVE_ip_TVEcssp_reg)=data)
#define  get_TVE_ip_TVEcssp_reg                                                  (*((volatile unsigned int*)TVE_ip_TVEcssp_reg))
#define  TVE_ip_TVEcssp_tvecssp_shift                                            (5)
#define  TVE_ip_TVEcssp_tvecsnum_shift                                           (2)
#define  TVE_ip_TVEcssp_tvecsln_shift                                            (0)
#define  TVE_ip_TVEcssp_tvecssp_mask                                             (0x000000E0)
#define  TVE_ip_TVEcssp_tvecsnum_mask                                            (0x0000001C)
#define  TVE_ip_TVEcssp_tvecsln_mask                                             (0x00000003)
#define  TVE_ip_TVEcssp_tvecssp(data)                                            (0x000000E0&((data)<<5))
#define  TVE_ip_TVEcssp_tvecsnum(data)                                           (0x0000001C&((data)<<2))
#define  TVE_ip_TVEcssp_tvecsln(data)                                            (0x00000003&(data))
#define  TVE_ip_TVEcssp_get_tvecssp(data)                                        ((0x000000E0&(data))>>5)
#define  TVE_ip_TVEcssp_get_tvecsnum(data)                                       ((0x0000001C&(data))>>2)
#define  TVE_ip_TVEcssp_get_tvecsln(data)                                        (0x00000003&(data))

#define  TVE_ip_TVEpsd                                                          0x1801F938
#define  TVE_ip_TVEpsd_reg_addr                                                  "0xB801F938"
#define  TVE_ip_TVEpsd_reg                                                       0xB801F938
#define  TVE_ip_TVEpsd_inst_addr                                                 "0x007A"
#define  set_TVE_ip_TVEpsd_reg(data)                                             (*((volatile unsigned int*)TVE_ip_TVEpsd_reg)=data)
#define  get_TVE_ip_TVEpsd_reg                                                   (*((volatile unsigned int*)TVE_ip_TVEpsd_reg))
#define  TVE_ip_TVEpsd_tvepsd_shift                                              (0)
#define  TVE_ip_TVEpsd_tvepsd_mask                                               (0x0000003F)
#define  TVE_ip_TVEpsd_tvepsd(data)                                              (0x0000003F&(data))
#define  TVE_ip_TVEpsd_get_tvepsd(data)                                          (0x0000003F&(data))

#define  TVE_ip_TVEpsl                                                          0x1801F93C
#define  TVE_ip_TVEpsl_reg_addr                                                  "0xB801F93C"
#define  TVE_ip_TVEpsl_reg                                                       0xB801F93C
#define  TVE_ip_TVEpsl_inst_addr                                                 "0x007B"
#define  set_TVE_ip_TVEpsl_reg(data)                                             (*((volatile unsigned int*)TVE_ip_TVEpsl_reg)=data)
#define  get_TVE_ip_TVEpsl_reg                                                   (*((volatile unsigned int*)TVE_ip_TVEpsl_reg))
#define  TVE_ip_TVEpsl_tvepsl_shift                                              (0)
#define  TVE_ip_TVEpsl_tvepsl_mask                                               (0x0000003F)
#define  TVE_ip_TVEpsl_tvepsl(data)                                              (0x0000003F&(data))
#define  TVE_ip_TVEpsl_get_tvepsl(data)                                          (0x0000003F&(data))

#define  TVE_ip_TVEpss                                                          0x1801F940
#define  TVE_ip_TVEpss_reg_addr                                                  "0xB801F940"
#define  TVE_ip_TVEpss_reg                                                       0xB801F940
#define  TVE_ip_TVEpss_inst_addr                                                 "0x007C"
#define  set_TVE_ip_TVEpss_reg(data)                                             (*((volatile unsigned int*)TVE_ip_TVEpss_reg)=data)
#define  get_TVE_ip_TVEpss_reg                                                   (*((volatile unsigned int*)TVE_ip_TVEpss_reg))
#define  TVE_ip_TVEpss_tvepss_shift                                              (0)
#define  TVE_ip_TVEpss_tvepss_mask                                               (0x0000003F)
#define  TVE_ip_TVEpss_tvepss(data)                                              (0x0000003F&(data))
#define  TVE_ip_TVEpss_get_tvepss(data)                                          (0x0000003F&(data))

#define  TVE_ip_TVEpsls0                                                        0x1801F944
#define  TVE_ip_TVEpsls0_reg_addr                                                "0xB801F944"
#define  TVE_ip_TVEpsls0_reg                                                     0xB801F944
#define  TVE_ip_TVEpsls0_inst_addr                                               "0x007D"
#define  set_TVE_ip_TVEpsls0_reg(data)                                           (*((volatile unsigned int*)TVE_ip_TVEpsls0_reg)=data)
#define  get_TVE_ip_TVEpsls0_reg                                                 (*((volatile unsigned int*)TVE_ip_TVEpsls0_reg))
#define  TVE_ip_TVEpsls0_tvepsls_shift                                           (0)
#define  TVE_ip_TVEpsls0_tvepsls_mask                                            (0x0000007F)
#define  TVE_ip_TVEpsls0_tvepsls(data)                                           (0x0000007F&(data))
#define  TVE_ip_TVEpsls0_get_tvepsls(data)                                       (0x0000007F&(data))

#define  TVE_ip_TVEpsls1                                                        0x1801F948
#define  TVE_ip_TVEpsls1_reg_addr                                                "0xB801F948"
#define  TVE_ip_TVEpsls1_reg                                                     0xB801F948
#define  TVE_ip_TVEpsls1_inst_addr                                               "0x007E"
#define  set_TVE_ip_TVEpsls1_reg(data)                                           (*((volatile unsigned int*)TVE_ip_TVEpsls1_reg)=data)
#define  get_TVE_ip_TVEpsls1_reg                                                 (*((volatile unsigned int*)TVE_ip_TVEpsls1_reg))
#define  TVE_ip_TVEpsls1_tvepsls_shift                                           (0)
#define  TVE_ip_TVEpsls1_tvepsls_mask                                            (0x000000FF)
#define  TVE_ip_TVEpsls1_tvepsls(data)                                           (0x000000FF&(data))
#define  TVE_ip_TVEpsls1_get_tvepsls(data)                                       (0x000000FF&(data))

#define  TVE_ip_TVEpsfs0                                                        0x1801F94C
#define  TVE_ip_TVEpsfs0_reg_addr                                                "0xB801F94C"
#define  TVE_ip_TVEpsfs0_reg                                                     0xB801F94C
#define  TVE_ip_TVEpsfs0_inst_addr                                               "0x007F"
#define  set_TVE_ip_TVEpsfs0_reg(data)                                           (*((volatile unsigned int*)TVE_ip_TVEpsfs0_reg)=data)
#define  get_TVE_ip_TVEpsfs0_reg                                                 (*((volatile unsigned int*)TVE_ip_TVEpsfs0_reg))
#define  TVE_ip_TVEpsfs0_tvepsfs_shift                                           (0)
#define  TVE_ip_TVEpsfs0_tvepsfs_mask                                            (0x0000007F)
#define  TVE_ip_TVEpsfs0_tvepsfs(data)                                           (0x0000007F&(data))
#define  TVE_ip_TVEpsfs0_get_tvepsfs(data)                                       (0x0000007F&(data))

#define  TVE_ip_TVEpsfs1                                                        0x1801F950
#define  TVE_ip_TVEpsfs1_reg_addr                                                "0xB801F950"
#define  TVE_ip_TVEpsfs1_reg                                                     0xB801F950
#define  TVE_ip_TVEpsfs1_inst_addr                                               "0x0080"
#define  set_TVE_ip_TVEpsfs1_reg(data)                                           (*((volatile unsigned int*)TVE_ip_TVEpsfs1_reg)=data)
#define  get_TVE_ip_TVEpsfs1_reg                                                 (*((volatile unsigned int*)TVE_ip_TVEpsfs1_reg))
#define  TVE_ip_TVEpsfs1_tvepsfs_shift                                           (0)
#define  TVE_ip_TVEpsfs1_tvepsfs_mask                                            (0x000000FF)
#define  TVE_ip_TVEpsfs1_tvepsfs(data)                                           (0x000000FF&(data))
#define  TVE_ip_TVEpsfs1_get_tvepsfs(data)                                       (0x000000FF&(data))

#define  TVE_ip_TVEpsagca                                                       0x1801F954
#define  TVE_ip_TVEpsagca_reg_addr                                               "0xB801F954"
#define  TVE_ip_TVEpsagca_reg                                                    0xB801F954
#define  TVE_ip_TVEpsagca_inst_addr                                              "0x0081"
#define  set_TVE_ip_TVEpsagca_reg(data)                                          (*((volatile unsigned int*)TVE_ip_TVEpsagca_reg)=data)
#define  get_TVE_ip_TVEpsagca_reg                                                (*((volatile unsigned int*)TVE_ip_TVEpsagca_reg))
#define  TVE_ip_TVEpsagca_tvepsagca_shift                                        (0)
#define  TVE_ip_TVEpsagca_tvepsagca_mask                                         (0x000000FF)
#define  TVE_ip_TVEpsagca_tvepsagca(data)                                        (0x000000FF&(data))
#define  TVE_ip_TVEpsagca_get_tvepsagca(data)                                    (0x000000FF&(data))

#define  TVE_ip_TVEpsagcb                                                       0x1801F958
#define  TVE_ip_TVEpsagcb_reg_addr                                               "0xB801F958"
#define  TVE_ip_TVEpsagcb_reg                                                    0xB801F958
#define  TVE_ip_TVEpsagcb_inst_addr                                              "0x0082"
#define  set_TVE_ip_TVEpsagcb_reg(data)                                          (*((volatile unsigned int*)TVE_ip_TVEpsagcb_reg)=data)
#define  get_TVE_ip_TVEpsagcb_reg                                                (*((volatile unsigned int*)TVE_ip_TVEpsagcb_reg))
#define  TVE_ip_TVEpsagcb_tvepsagcb_shift                                        (0)
#define  TVE_ip_TVEpsagcb_tvepsagcb_mask                                         (0x000000FF)
#define  TVE_ip_TVEpsagcb_tvepsagcb(data)                                        (0x000000FF&(data))
#define  TVE_ip_TVEpsagcb_get_tvepsagcb(data)                                    (0x000000FF&(data))

#define  TVE_ip_TVEeofbpc                                                       0x1801F95C
#define  TVE_ip_TVEeofbpc_reg_addr                                               "0xB801F95C"
#define  TVE_ip_TVEeofbpc_reg                                                    0xB801F95C
#define  TVE_ip_TVEeofbpc_inst_addr                                              "0x0083"
#define  set_TVE_ip_TVEeofbpc_reg(data)                                          (*((volatile unsigned int*)TVE_ip_TVEeofbpc_reg)=data)
#define  get_TVE_ip_TVEeofbpc_reg                                                (*((volatile unsigned int*)TVE_ip_TVEeofbpc_reg))
#define  TVE_ip_TVEeofbpc_tveeofbpc_shift                                        (0)
#define  TVE_ip_TVEeofbpc_tveeofbpc_mask                                         (0x000000FF)
#define  TVE_ip_TVEeofbpc_tveeofbpc(data)                                        (0x000000FF&(data))
#define  TVE_ip_TVEeofbpc_get_tveeofbpc(data)                                    (0x000000FF&(data))

#define  TVE_ip_TVEpbz1                                                         0x1801F960
#define  TVE_ip_TVEpbz1_reg_addr                                                 "0xB801F960"
#define  TVE_ip_TVEpbz1_reg                                                      0xB801F960
#define  TVE_ip_TVEpbz1_inst_addr                                                "0x0084"
#define  set_TVE_ip_TVEpbz1_reg(data)                                            (*((volatile unsigned int*)TVE_ip_TVEpbz1_reg)=data)
#define  get_TVE_ip_TVEpbz1_reg                                                  (*((volatile unsigned int*)TVE_ip_TVEpbz1_reg))
#define  TVE_ip_TVEpbz1_tvepbz1_shift                                            (4)
#define  TVE_ip_TVEpbz1_tvepbz2_shift                                            (0)
#define  TVE_ip_TVEpbz1_tvepbz1_mask                                             (0x000000F0)
#define  TVE_ip_TVEpbz1_tvepbz2_mask                                             (0x0000000F)
#define  TVE_ip_TVEpbz1_tvepbz1(data)                                            (0x000000F0&((data)<<4))
#define  TVE_ip_TVEpbz1_tvepbz2(data)                                            (0x0000000F&(data))
#define  TVE_ip_TVEpbz1_get_tvepbz1(data)                                        ((0x000000F0&(data))>>4)
#define  TVE_ip_TVEpbz1_get_tvepbz2(data)                                        (0x0000000F&(data))

#define  TVE_ip_TVEpbz3                                                         0x1801F964
#define  TVE_ip_TVEpbz3_reg_addr                                                 "0xB801F964"
#define  TVE_ip_TVEpbz3_reg                                                      0xB801F964
#define  TVE_ip_TVEpbz3_inst_addr                                                "0x0085"
#define  set_TVE_ip_TVEpbz3_reg(data)                                            (*((volatile unsigned int*)TVE_ip_TVEpbz3_reg)=data)
#define  get_TVE_ip_TVEpbz3_reg                                                  (*((volatile unsigned int*)TVE_ip_TVEpbz3_reg))
#define  TVE_ip_TVEpbz3_tvepbz3_shift                                            (4)
#define  TVE_ip_TVEpbz3_tvepadvbsen_shift                                        (3)
#define  TVE_ip_TVEpbz3_tvepzninvrt_shift                                        (0)
#define  TVE_ip_TVEpbz3_tvepbz3_mask                                             (0x000000F0)
#define  TVE_ip_TVEpbz3_tvepadvbsen_mask                                         (0x00000008)
#define  TVE_ip_TVEpbz3_tvepzninvrt_mask                                         (0x00000007)
#define  TVE_ip_TVEpbz3_tvepbz3(data)                                            (0x000000F0&((data)<<4))
#define  TVE_ip_TVEpbz3_tvepadvbsen(data)                                        (0x00000008&((data)<<3))
#define  TVE_ip_TVEpbz3_tvepzninvrt(data)                                        (0x00000007&(data))
#define  TVE_ip_TVEpbz3_get_tvepbz3(data)                                        ((0x000000F0&(data))>>4)
#define  TVE_ip_TVEpbz3_get_tvepadvbsen(data)                                    ((0x00000008&(data))>>3)
#define  TVE_ip_TVEpbz3_get_tvepzninvrt(data)                                    (0x00000007&(data))

#define  TVE_ip_TVEpcslimd0                                                     0x1801F968
#define  TVE_ip_TVEpcslimd0_reg_addr                                             "0xB801F968"
#define  TVE_ip_TVEpcslimd0_reg                                                  0xB801F968
#define  TVE_ip_TVEpcslimd0_inst_addr                                            "0x0086"
#define  set_TVE_ip_TVEpcslimd0_reg(data)                                        (*((volatile unsigned int*)TVE_ip_TVEpcslimd0_reg)=data)
#define  get_TVE_ip_TVEpcslimd0_reg                                              (*((volatile unsigned int*)TVE_ip_TVEpcslimd0_reg))
#define  TVE_ip_TVEpcslimd0_tvepcslimd_lsb_shift                                 (0)
#define  TVE_ip_TVEpcslimd0_tvepcslimd_lsb_mask                                  (0x000000FF)
#define  TVE_ip_TVEpcslimd0_tvepcslimd_lsb(data)                                 (0x000000FF&(data))
#define  TVE_ip_TVEpcslimd0_get_tvepcslimd_lsb(data)                             (0x000000FF&(data))

#define  TVE_ip_TVEpcslimd1                                                     0x1801F96C
#define  TVE_ip_TVEpcslimd1_reg_addr                                             "0xB801F96C"
#define  TVE_ip_TVEpcslimd1_reg                                                  0xB801F96C
#define  TVE_ip_TVEpcslimd1_inst_addr                                            "0x0087"
#define  set_TVE_ip_TVEpcslimd1_reg(data)                                        (*((volatile unsigned int*)TVE_ip_TVEpcslimd1_reg)=data)
#define  get_TVE_ip_TVEpcslimd1_reg                                              (*((volatile unsigned int*)TVE_ip_TVEpcslimd1_reg))
#define  TVE_ip_TVEpcslimd1_tvepcslimd_msb_shift                                 (0)
#define  TVE_ip_TVEpcslimd1_tvepcslimd_msb_mask                                  (0x00000003)
#define  TVE_ip_TVEpcslimd1_tvepcslimd_msb(data)                                 (0x00000003&(data))
#define  TVE_ip_TVEpcslimd1_get_tvepcslimd_msb(data)                             (0x00000003&(data))

#define  TVE_ip_TVE_ctrl                                                        0x1801F990
#define  TVE_ip_TVE_ctrl_reg_addr                                                "0xB801F990"
#define  TVE_ip_TVE_ctrl_reg                                                     0xB801F990
#define  TVE_ip_TVE_ctrl_inst_addr                                               "0x0088"
#define  set_TVE_ip_TVE_ctrl_reg(data)                                           (*((volatile unsigned int*)TVE_ip_TVE_ctrl_reg)=data)
#define  get_TVE_ip_TVE_ctrl_reg                                                 (*((volatile unsigned int*)TVE_ip_TVE_ctrl_reg))
#define  TVE_ip_TVE_ctrl_tvetms_shift                                            (0)
#define  TVE_ip_TVE_ctrl_tvetms_mask                                             (0x000000FF)
#define  TVE_ip_TVE_ctrl_tvetms(data)                                            (0x000000FF&(data))
#define  TVE_ip_TVE_ctrl_get_tvetms(data)                                        (0x000000FF&(data))

#define  TVE_video_dac_ctrl_0                                                   0x1801F200
#define  TVE_video_dac_ctrl_0_reg_addr                                           "0xB801F200"
#define  TVE_video_dac_ctrl_0_reg                                                0xB801F200
#define  TVE_video_dac_ctrl_0_inst_addr                                          "0x0089"
#define  set_TVE_video_dac_ctrl_0_reg(data)                                      (*((volatile unsigned int*)TVE_video_dac_ctrl_0_reg)=data)
#define  get_TVE_video_dac_ctrl_0_reg                                            (*((volatile unsigned int*)TVE_video_dac_ctrl_0_reg))
#define  TVE_video_dac_ctrl_0_vdac_apow_shift                                    (22)
#define  TVE_video_dac_ctrl_0_vdac_bpow_shift                                    (21)
#define  TVE_video_dac_ctrl_0_vdac_cpow_shift                                    (20)
#define  TVE_video_dac_ctrl_0_powldv_l_shift                                     (19)
#define  TVE_video_dac_ctrl_0_stanby_l_shift                                     (18)
#define  TVE_video_dac_ctrl_0_biasa_regl_shift                                   (12)
#define  TVE_video_dac_ctrl_0_biasb_regl_shift                                   (6)
#define  TVE_video_dac_ctrl_0_biasc_regl_shift                                   (0)
#define  TVE_video_dac_ctrl_0_vdac_apow_mask                                     (0x00400000)
#define  TVE_video_dac_ctrl_0_vdac_bpow_mask                                     (0x00200000)
#define  TVE_video_dac_ctrl_0_vdac_cpow_mask                                     (0x00100000)
#define  TVE_video_dac_ctrl_0_powldv_l_mask                                      (0x00080000)
#define  TVE_video_dac_ctrl_0_stanby_l_mask                                      (0x00040000)
#define  TVE_video_dac_ctrl_0_biasa_regl_mask                                    (0x0000F000)
#define  TVE_video_dac_ctrl_0_biasb_regl_mask                                    (0x000003C0)
#define  TVE_video_dac_ctrl_0_biasc_regl_mask                                    (0x0000000F)
#define  TVE_video_dac_ctrl_0_vdac_apow(data)                                    (0x00400000&((data)<<22))
#define  TVE_video_dac_ctrl_0_vdac_bpow(data)                                    (0x00200000&((data)<<21))
#define  TVE_video_dac_ctrl_0_vdac_cpow(data)                                    (0x00100000&((data)<<20))
#define  TVE_video_dac_ctrl_0_powldv_l(data)                                     (0x00080000&((data)<<19))
#define  TVE_video_dac_ctrl_0_stanby_l(data)                                     (0x00040000&((data)<<18))
#define  TVE_video_dac_ctrl_0_biasa_regl(data)                                   (0x0000F000&((data)<<12))
#define  TVE_video_dac_ctrl_0_biasb_regl(data)                                   (0x000003C0&((data)<<6))
#define  TVE_video_dac_ctrl_0_biasc_regl(data)                                   (0x0000000F&(data))
#define  TVE_video_dac_ctrl_0_get_vdac_apow(data)                                ((0x00400000&(data))>>22)
#define  TVE_video_dac_ctrl_0_get_vdac_bpow(data)                                ((0x00200000&(data))>>21)
#define  TVE_video_dac_ctrl_0_get_vdac_cpow(data)                                ((0x00100000&(data))>>20)
#define  TVE_video_dac_ctrl_0_get_powldv_l(data)                                 ((0x00080000&(data))>>19)
#define  TVE_video_dac_ctrl_0_get_stanby_l(data)                                 ((0x00040000&(data))>>18)
#define  TVE_video_dac_ctrl_0_get_biasa_regl(data)                               ((0x0000F000&(data))>>12)
#define  TVE_video_dac_ctrl_0_get_biasb_regl(data)                               ((0x000003C0&(data))>>6)
#define  TVE_video_dac_ctrl_0_get_biasc_regl(data)                               (0x0000000F&(data))

#define  TVE_video_dac_ctrl_1                                                   0x1801F204
#define  TVE_video_dac_ctrl_1_reg_addr                                           "0xB801F204"
#define  TVE_video_dac_ctrl_1_reg                                                0xB801F204
#define  TVE_video_dac_ctrl_1_inst_addr                                          "0x008A"
#define  set_TVE_video_dac_ctrl_1_reg(data)                                      (*((volatile unsigned int*)TVE_video_dac_ctrl_1_reg)=data)
#define  get_TVE_video_dac_ctrl_1_reg                                            (*((volatile unsigned int*)TVE_video_dac_ctrl_1_reg))
#define  TVE_video_dac_ctrl_1_vdac_apow_shift                                    (22)
#define  TVE_video_dac_ctrl_1_vdac_bpow_shift                                    (21)
#define  TVE_video_dac_ctrl_1_vdac_cpow_shift                                    (20)
#define  TVE_video_dac_ctrl_1_powldv_l_shift                                     (19)
#define  TVE_video_dac_ctrl_1_stanby_l_shift                                     (18)
#define  TVE_video_dac_ctrl_1_biasa_regl_shift                                   (12)
#define  TVE_video_dac_ctrl_1_biasb_regl_shift                                   (6)
#define  TVE_video_dac_ctrl_1_biasc_regl_shift                                   (0)
#define  TVE_video_dac_ctrl_1_vdac_apow_mask                                     (0x00400000)
#define  TVE_video_dac_ctrl_1_vdac_bpow_mask                                     (0x00200000)
#define  TVE_video_dac_ctrl_1_vdac_cpow_mask                                     (0x00100000)
#define  TVE_video_dac_ctrl_1_powldv_l_mask                                      (0x00080000)
#define  TVE_video_dac_ctrl_1_stanby_l_mask                                      (0x00040000)
#define  TVE_video_dac_ctrl_1_biasa_regl_mask                                    (0x0000F000)
#define  TVE_video_dac_ctrl_1_biasb_regl_mask                                    (0x000003C0)
#define  TVE_video_dac_ctrl_1_biasc_regl_mask                                    (0x0000000F)
#define  TVE_video_dac_ctrl_1_vdac_apow(data)                                    (0x00400000&((data)<<22))
#define  TVE_video_dac_ctrl_1_vdac_bpow(data)                                    (0x00200000&((data)<<21))
#define  TVE_video_dac_ctrl_1_vdac_cpow(data)                                    (0x00100000&((data)<<20))
#define  TVE_video_dac_ctrl_1_powldv_l(data)                                     (0x00080000&((data)<<19))
#define  TVE_video_dac_ctrl_1_stanby_l(data)                                     (0x00040000&((data)<<18))
#define  TVE_video_dac_ctrl_1_biasa_regl(data)                                   (0x0000F000&((data)<<12))
#define  TVE_video_dac_ctrl_1_biasb_regl(data)                                   (0x000003C0&((data)<<6))
#define  TVE_video_dac_ctrl_1_biasc_regl(data)                                   (0x0000000F&(data))
#define  TVE_video_dac_ctrl_1_get_vdac_apow(data)                                ((0x00400000&(data))>>22)
#define  TVE_video_dac_ctrl_1_get_vdac_bpow(data)                                ((0x00200000&(data))>>21)
#define  TVE_video_dac_ctrl_1_get_vdac_cpow(data)                                ((0x00100000&(data))>>20)
#define  TVE_video_dac_ctrl_1_get_powldv_l(data)                                 ((0x00080000&(data))>>19)
#define  TVE_video_dac_ctrl_1_get_stanby_l(data)                                 ((0x00040000&(data))>>18)
#define  TVE_video_dac_ctrl_1_get_biasa_regl(data)                               ((0x0000F000&(data))>>12)
#define  TVE_video_dac_ctrl_1_get_biasb_regl(data)                               ((0x000003C0&(data))>>6)
#define  TVE_video_dac_ctrl_1_get_biasc_regl(data)                               (0x0000000F&(data))

#define  TVE_video_dac_ctrl2_0                                                  0x1801F218
#define  TVE_video_dac_ctrl2_0_reg_addr                                          "0xB801F218"
#define  TVE_video_dac_ctrl2_0_reg                                               0xB801F218
#define  TVE_video_dac_ctrl2_0_inst_addr                                         "0x008B"
#define  set_TVE_video_dac_ctrl2_0_reg(data)                                     (*((volatile unsigned int*)TVE_video_dac_ctrl2_0_reg)=data)
#define  get_TVE_video_dac_ctrl2_0_reg                                           (*((volatile unsigned int*)TVE_video_dac_ctrl2_0_reg))
#define  TVE_video_dac_ctrl2_0_abiq_regl_shift                                   (12)
#define  TVE_video_dac_ctrl2_0_ldvbias_regl_shift                                (9)
#define  TVE_video_dac_ctrl2_0_vcmref_regl_shift                                 (7)
#define  TVE_video_dac_ctrl2_0_vdac_cf_regl_shift                                (2)
#define  TVE_video_dac_ctrl2_0_vdac_rf_regl_shift                                (0)
#define  TVE_video_dac_ctrl2_0_abiq_regl_mask                                    (0x00007000)
#define  TVE_video_dac_ctrl2_0_ldvbias_regl_mask                                 (0x00000E00)
#define  TVE_video_dac_ctrl2_0_vcmref_regl_mask                                  (0x00000180)
#define  TVE_video_dac_ctrl2_0_vdac_cf_regl_mask                                 (0x0000001C)
#define  TVE_video_dac_ctrl2_0_vdac_rf_regl_mask                                 (0x00000003)
#define  TVE_video_dac_ctrl2_0_abiq_regl(data)                                   (0x00007000&((data)<<12))
#define  TVE_video_dac_ctrl2_0_ldvbias_regl(data)                                (0x00000E00&((data)<<9))
#define  TVE_video_dac_ctrl2_0_vcmref_regl(data)                                 (0x00000180&((data)<<7))
#define  TVE_video_dac_ctrl2_0_vdac_cf_regl(data)                                (0x0000001C&((data)<<2))
#define  TVE_video_dac_ctrl2_0_vdac_rf_regl(data)                                (0x00000003&(data))
#define  TVE_video_dac_ctrl2_0_get_abiq_regl(data)                               ((0x00007000&(data))>>12)
#define  TVE_video_dac_ctrl2_0_get_ldvbias_regl(data)                            ((0x00000E00&(data))>>9)
#define  TVE_video_dac_ctrl2_0_get_vcmref_regl(data)                             ((0x00000180&(data))>>7)
#define  TVE_video_dac_ctrl2_0_get_vdac_cf_regl(data)                            ((0x0000001C&(data))>>2)
#define  TVE_video_dac_ctrl2_0_get_vdac_rf_regl(data)                            (0x00000003&(data))

#define  TVE_video_dac_ctrl2_1                                                  0x1801F21C
#define  TVE_video_dac_ctrl2_1_reg_addr                                          "0xB801F21C"
#define  TVE_video_dac_ctrl2_1_reg                                               0xB801F21C
#define  TVE_video_dac_ctrl2_1_inst_addr                                         "0x008C"
#define  set_TVE_video_dac_ctrl2_1_reg(data)                                     (*((volatile unsigned int*)TVE_video_dac_ctrl2_1_reg)=data)
#define  get_TVE_video_dac_ctrl2_1_reg                                           (*((volatile unsigned int*)TVE_video_dac_ctrl2_1_reg))
#define  TVE_video_dac_ctrl2_1_abiq_regl_shift                                   (12)
#define  TVE_video_dac_ctrl2_1_ldvbias_regl_shift                                (9)
#define  TVE_video_dac_ctrl2_1_vcmref_regl_shift                                 (7)
#define  TVE_video_dac_ctrl2_1_vdac_cf_regl_shift                                (2)
#define  TVE_video_dac_ctrl2_1_vdac_rf_regl_shift                                (0)
#define  TVE_video_dac_ctrl2_1_abiq_regl_mask                                    (0x00007000)
#define  TVE_video_dac_ctrl2_1_ldvbias_regl_mask                                 (0x00000E00)
#define  TVE_video_dac_ctrl2_1_vcmref_regl_mask                                  (0x00000180)
#define  TVE_video_dac_ctrl2_1_vdac_cf_regl_mask                                 (0x0000001C)
#define  TVE_video_dac_ctrl2_1_vdac_rf_regl_mask                                 (0x00000003)
#define  TVE_video_dac_ctrl2_1_abiq_regl(data)                                   (0x00007000&((data)<<12))
#define  TVE_video_dac_ctrl2_1_ldvbias_regl(data)                                (0x00000E00&((data)<<9))
#define  TVE_video_dac_ctrl2_1_vcmref_regl(data)                                 (0x00000180&((data)<<7))
#define  TVE_video_dac_ctrl2_1_vdac_cf_regl(data)                                (0x0000001C&((data)<<2))
#define  TVE_video_dac_ctrl2_1_vdac_rf_regl(data)                                (0x00000003&(data))
#define  TVE_video_dac_ctrl2_1_get_abiq_regl(data)                               ((0x00007000&(data))>>12)
#define  TVE_video_dac_ctrl2_1_get_ldvbias_regl(data)                            ((0x00000E00&(data))>>9)
#define  TVE_video_dac_ctrl2_1_get_vcmref_regl(data)                             ((0x00000180&(data))>>7)
#define  TVE_video_dac_ctrl2_1_get_vdac_cf_regl(data)                            ((0x0000001C&(data))>>2)
#define  TVE_video_dac_ctrl2_1_get_vdac_rf_regl(data)                            (0x00000003&(data))

#define  TVE_video_dac_ctrl3                                                    0x1801F350
#define  TVE_video_dac_ctrl3_reg_addr                                            "0xB801F350"
#define  TVE_video_dac_ctrl3_reg                                                 0xB801F350
#define  TVE_video_dac_ctrl3_inst_addr                                           "0x008D"
#define  set_TVE_video_dac_ctrl3_reg(data)                                       (*((volatile unsigned int*)TVE_video_dac_ctrl3_reg)=data)
#define  get_TVE_video_dac_ctrl3_reg                                             (*((volatile unsigned int*)TVE_video_dac_ctrl3_reg))
#define  TVE_video_dac_ctrl3_write_en6_shift                                     (18)
#define  TVE_video_dac_ctrl3_dcc2_l_shift                                        (17)
#define  TVE_video_dac_ctrl3_write_en5_shift                                     (16)
#define  TVE_video_dac_ctrl3_dcc_l_shift                                         (15)
#define  TVE_video_dac_ctrl3_write_en4_shift                                     (14)
#define  TVE_video_dac_ctrl3_caldiv_shift                                        (12)
#define  TVE_video_dac_ctrl3_write_en3_shift                                     (8)
#define  TVE_video_dac_ctrl3_div_regl_shift                                      (6)
#define  TVE_video_dac_ctrl3_write_en2_shift                                     (5)
#define  TVE_video_dac_ctrl3_ckmode_regl_shift                                   (3)
#define  TVE_video_dac_ctrl3_write_en1_shift                                     (2)
#define  TVE_video_dac_ctrl3_calen_regl_shift                                    (0)
#define  TVE_video_dac_ctrl3_write_en6_mask                                      (0x00040000)
#define  TVE_video_dac_ctrl3_dcc2_l_mask                                         (0x00020000)
#define  TVE_video_dac_ctrl3_write_en5_mask                                      (0x00010000)
#define  TVE_video_dac_ctrl3_dcc_l_mask                                          (0x00008000)
#define  TVE_video_dac_ctrl3_write_en4_mask                                      (0x00004000)
#define  TVE_video_dac_ctrl3_caldiv_mask                                         (0x00003000)
#define  TVE_video_dac_ctrl3_write_en3_mask                                      (0x00000100)
#define  TVE_video_dac_ctrl3_div_regl_mask                                       (0x000000C0)
#define  TVE_video_dac_ctrl3_write_en2_mask                                      (0x00000020)
#define  TVE_video_dac_ctrl3_ckmode_regl_mask                                    (0x00000018)
#define  TVE_video_dac_ctrl3_write_en1_mask                                      (0x00000004)
#define  TVE_video_dac_ctrl3_calen_regl_mask                                     (0x00000003)
#define  TVE_video_dac_ctrl3_write_en6(data)                                     (0x00040000&((data)<<18))
#define  TVE_video_dac_ctrl3_dcc2_l(data)                                        (0x00020000&((data)<<17))
#define  TVE_video_dac_ctrl3_write_en5(data)                                     (0x00010000&((data)<<16))
#define  TVE_video_dac_ctrl3_dcc_l(data)                                         (0x00008000&((data)<<15))
#define  TVE_video_dac_ctrl3_write_en4(data)                                     (0x00004000&((data)<<14))
#define  TVE_video_dac_ctrl3_caldiv(data)                                        (0x00003000&((data)<<12))
#define  TVE_video_dac_ctrl3_write_en3(data)                                     (0x00000100&((data)<<8))
#define  TVE_video_dac_ctrl3_div_regl(data)                                      (0x000000C0&((data)<<6))
#define  TVE_video_dac_ctrl3_write_en2(data)                                     (0x00000020&((data)<<5))
#define  TVE_video_dac_ctrl3_ckmode_regl(data)                                   (0x00000018&((data)<<3))
#define  TVE_video_dac_ctrl3_write_en1(data)                                     (0x00000004&((data)<<2))
#define  TVE_video_dac_ctrl3_calen_regl(data)                                    (0x00000003&(data))
#define  TVE_video_dac_ctrl3_get_write_en6(data)                                 ((0x00040000&(data))>>18)
#define  TVE_video_dac_ctrl3_get_dcc2_l(data)                                    ((0x00020000&(data))>>17)
#define  TVE_video_dac_ctrl3_get_write_en5(data)                                 ((0x00010000&(data))>>16)
#define  TVE_video_dac_ctrl3_get_dcc_l(data)                                     ((0x00008000&(data))>>15)
#define  TVE_video_dac_ctrl3_get_write_en4(data)                                 ((0x00004000&(data))>>14)
#define  TVE_video_dac_ctrl3_get_caldiv(data)                                    ((0x00003000&(data))>>12)
#define  TVE_video_dac_ctrl3_get_write_en3(data)                                 ((0x00000100&(data))>>8)
#define  TVE_video_dac_ctrl3_get_div_regl(data)                                  ((0x000000C0&(data))>>6)
#define  TVE_video_dac_ctrl3_get_write_en2(data)                                 ((0x00000020&(data))>>5)
#define  TVE_video_dac_ctrl3_get_ckmode_regl(data)                               ((0x00000018&(data))>>3)
#define  TVE_video_dac_ctrl3_get_write_en1(data)                                 ((0x00000004&(data))>>2)
#define  TVE_video_dac_ctrl3_get_calen_regl(data)                                (0x00000003&(data))

#define  TVE_dac_mux                                                            0x1801F208
#define  TVE_dac_mux_reg_addr                                                    "0xB801F208"
#define  TVE_dac_mux_reg                                                         0xB801F208
#define  TVE_dac_mux_inst_addr                                                   "0x008E"
#define  set_TVE_dac_mux_reg(data)                                               (*((volatile unsigned int*)TVE_dac_mux_reg)=data)
#define  get_TVE_dac_mux_reg                                                     (*((volatile unsigned int*)TVE_dac_mux_reg))
#define  TVE_dac_mux_write_en4_shift                                             (9)
#define  TVE_dac_mux_up_ctrl_int1_shift                                          (7)
#define  TVE_dac_mux_write_en4_mask                                              (0x00000200)
#define  TVE_dac_mux_up_ctrl_int1_mask                                           (0x00000180)
#define  TVE_dac_mux_write_en4(data)                                             (0x00000200&((data)<<9))
#define  TVE_dac_mux_up_ctrl_int1(data)                                          (0x00000180&((data)<<7))
#define  TVE_dac_mux_get_write_en4(data)                                         ((0x00000200&(data))>>9)
#define  TVE_dac_mux_get_up_ctrl_int1(data)                                      ((0x00000180&(data))>>7)

#define  TVE_cmp_dly                                                            0x1801F20C
#define  TVE_cmp_dly_reg_addr                                                    "0xB801F20C"
#define  TVE_cmp_dly_reg                                                         0xB801F20C
#define  TVE_cmp_dly_inst_addr                                                   "0x008F"
#define  set_TVE_cmp_dly_reg(data)                                               (*((volatile unsigned int*)TVE_cmp_dly_reg)=data)
#define  get_TVE_cmp_dly_reg                                                     (*((volatile unsigned int*)TVE_cmp_dly_reg))
#define  TVE_cmp_dly_write_en3_shift                                             (8)
#define  TVE_cmp_dly_ygdelay_shift                                               (6)
#define  TVE_cmp_dly_write_en2_shift                                             (5)
#define  TVE_cmp_dly_bdelay_shift                                                (3)
#define  TVE_cmp_dly_write_en1_shift                                             (2)
#define  TVE_cmp_dly_rdelay_shift                                                (0)
#define  TVE_cmp_dly_write_en3_mask                                              (0x00000100)
#define  TVE_cmp_dly_ygdelay_mask                                                (0x000000C0)
#define  TVE_cmp_dly_write_en2_mask                                              (0x00000020)
#define  TVE_cmp_dly_bdelay_mask                                                 (0x00000018)
#define  TVE_cmp_dly_write_en1_mask                                              (0x00000004)
#define  TVE_cmp_dly_rdelay_mask                                                 (0x00000003)
#define  TVE_cmp_dly_write_en3(data)                                             (0x00000100&((data)<<8))
#define  TVE_cmp_dly_ygdelay(data)                                               (0x000000C0&((data)<<6))
#define  TVE_cmp_dly_write_en2(data)                                             (0x00000020&((data)<<5))
#define  TVE_cmp_dly_bdelay(data)                                                (0x00000018&((data)<<3))
#define  TVE_cmp_dly_write_en1(data)                                             (0x00000004&((data)<<2))
#define  TVE_cmp_dly_rdelay(data)                                                (0x00000003&(data))
#define  TVE_cmp_dly_get_write_en3(data)                                         ((0x00000100&(data))>>8)
#define  TVE_cmp_dly_get_ygdelay(data)                                           ((0x000000C0&(data))>>6)
#define  TVE_cmp_dly_get_write_en2(data)                                         ((0x00000020&(data))>>5)
#define  TVE_cmp_dly_get_bdelay(data)                                            ((0x00000018&(data))>>3)
#define  TVE_cmp_dly_get_write_en1(data)                                         ((0x00000004&(data))>>2)
#define  TVE_cmp_dly_get_rdelay(data)                                            (0x00000003&(data))

#define  TVE_dac_misc                                                           0x1801F210
#define  TVE_dac_misc_reg_addr                                                   "0xB801F210"
#define  TVE_dac_misc_reg                                                        0xB801F210
#define  TVE_dac_misc_inst_addr                                                  "0x0090"
#define  set_TVE_dac_misc_reg(data)                                              (*((volatile unsigned int*)TVE_dac_misc_reg)=data)
#define  get_TVE_dac_misc_reg                                                    (*((volatile unsigned int*)TVE_dac_misc_reg))
#define  TVE_dac_misc_write_en4_shift                                            (25)
#define  TVE_dac_misc_out_control123_shift                                       (22)
#define  TVE_dac_misc_write_en4_mask                                             (0x02000000)
#define  TVE_dac_misc_out_control123_mask                                        (0x01C00000)
#define  TVE_dac_misc_write_en4(data)                                            (0x02000000&((data)<<25))
#define  TVE_dac_misc_out_control123(data)                                       (0x01C00000&((data)<<22))
#define  TVE_dac_misc_get_write_en4(data)                                        ((0x02000000&(data))>>25)
#define  TVE_dac_misc_get_out_control123(data)                                   ((0x01C00000&(data))>>22)

#define  TVE_dac_misc1                                                          0x1801F224
#define  TVE_dac_misc1_reg_addr                                                  "0xB801F224"
#define  TVE_dac_misc1_reg                                                       0xB801F224
#define  TVE_dac_misc1_inst_addr                                                 "0x0091"
#define  set_TVE_dac_misc1_reg(data)                                             (*((volatile unsigned int*)TVE_dac_misc1_reg)=data)
#define  get_TVE_dac_misc1_reg                                                   (*((volatile unsigned int*)TVE_dac_misc1_reg))
#define  TVE_dac_misc1_dac_value3_shift                                          (20)
#define  TVE_dac_misc1_dac_value3_mask                                           (0x3FF00000)
#define  TVE_dac_misc1_dac_value3(data)                                          (0x3FF00000&((data)<<20))
#define  TVE_dac_misc1_get_dac_value3(data)                                      ((0x3FF00000&(data))>>20)

#define  TVE_dbg                                                                0x1801F214
#define  TVE_dbg_reg_addr                                                        "0xB801F214"
#define  TVE_dbg_reg                                                             0xB801F214
#define  TVE_dbg_inst_addr                                                       "0x0092"
#define  set_TVE_dbg_reg(data)                                                   (*((volatile unsigned int*)TVE_dbg_reg)=data)
#define  get_TVE_dbg_reg                                                         (*((volatile unsigned int*)TVE_dbg_reg))
#define  TVE_dbg_write_en3_shift                                                 (11)
#define  TVE_dbg_sel1_shift                                                      (7)
#define  TVE_dbg_write_en2_shift                                                 (6)
#define  TVE_dbg_sel0_shift                                                      (2)
#define  TVE_dbg_write_en1_shift                                                 (1)
#define  TVE_dbg_enable_shift                                                    (0)
#define  TVE_dbg_write_en3_mask                                                  (0x00000800)
#define  TVE_dbg_sel1_mask                                                       (0x00000780)
#define  TVE_dbg_write_en2_mask                                                  (0x00000040)
#define  TVE_dbg_sel0_mask                                                       (0x0000003C)
#define  TVE_dbg_write_en1_mask                                                  (0x00000002)
#define  TVE_dbg_enable_mask                                                     (0x00000001)
#define  TVE_dbg_write_en3(data)                                                 (0x00000800&((data)<<11))
#define  TVE_dbg_sel1(data)                                                      (0x00000780&((data)<<7))
#define  TVE_dbg_write_en2(data)                                                 (0x00000040&((data)<<6))
#define  TVE_dbg_sel0(data)                                                      (0x0000003C&((data)<<2))
#define  TVE_dbg_write_en1(data)                                                 (0x00000002&((data)<<1))
#define  TVE_dbg_enable(data)                                                    (0x00000001&(data))
#define  TVE_dbg_get_write_en3(data)                                             ((0x00000800&(data))>>11)
#define  TVE_dbg_get_sel1(data)                                                  ((0x00000780&(data))>>7)
#define  TVE_dbg_get_write_en2(data)                                             ((0x00000040&(data))>>6)
#define  TVE_dbg_get_sel0(data)                                                  ((0x0000003C&(data))>>2)
#define  TVE_dbg_get_write_en1(data)                                             ((0x00000002&(data))>>1)
#define  TVE_dbg_get_enable(data)                                                (0x00000001&(data))

#define  TVE_dummy_0                                                            0x1801F300
#define  TVE_dummy_0_reg_addr                                                    "0xB801F300"
#define  TVE_dummy_0_reg                                                         0xB801F300
#define  TVE_dummy_0_inst_addr                                                   "0x0093"
#define  set_TVE_dummy_0_reg(data)                                               (*((volatile unsigned int*)TVE_dummy_0_reg)=data)
#define  get_TVE_dummy_0_reg                                                     (*((volatile unsigned int*)TVE_dummy_0_reg))
#define  TVE_dummy_0_tve_dummy_0_shift                                           (0)
#define  TVE_dummy_0_tve_dummy_0_mask                                            (0xFFFFFFFF)
#define  TVE_dummy_0_tve_dummy_0(data)                                           (0xFFFFFFFF&(data))
#define  TVE_dummy_0_get_tve_dummy_0(data)                                       (0xFFFFFFFF&(data))

#define  TVE_dummy_1                                                            0x1801FCFC
#define  TVE_dummy_1_reg_addr                                                    "0xB801FCFC"
#define  TVE_dummy_1_reg                                                         0xB801FCFC
#define  TVE_dummy_1_inst_addr                                                   "0x0094"
#define  set_TVE_dummy_1_reg(data)                                               (*((volatile unsigned int*)TVE_dummy_1_reg)=data)
#define  get_TVE_dummy_1_reg                                                     (*((volatile unsigned int*)TVE_dummy_1_reg))
#define  TVE_dummy_1_tve_dummy_1_shift                                           (0)
#define  TVE_dummy_1_tve_dummy_1_mask                                            (0xFFFFFFFF)
#define  TVE_dummy_1_tve_dummy_1(data)                                           (0xFFFFFFFF&(data))
#define  TVE_dummy_1_get_tve_dummy_1(data)                                       (0xFFFFFFFF&(data))

#define  TVE_dac_test                                                           0x1801F344
#define  TVE_dac_test_reg_addr                                                   "0xB801F344"
#define  TVE_dac_test_reg                                                        0xB801F344
#define  TVE_dac_test_inst_addr                                                  "0x0095"
#define  set_TVE_dac_test_reg(data)                                              (*((volatile unsigned int*)TVE_dac_test_reg)=data)
#define  get_TVE_dac_test_reg                                                    (*((volatile unsigned int*)TVE_dac_test_reg))
#define  TVE_dac_test_aio_dac_en_shift                                           (2)
#define  TVE_dac_test_dac1_en_shift                                              (1)
#define  TVE_dac_test_dac0_en_shift                                              (0)
#define  TVE_dac_test_aio_dac_en_mask                                            (0x00000004)
#define  TVE_dac_test_dac1_en_mask                                               (0x00000002)
#define  TVE_dac_test_dac0_en_mask                                               (0x00000001)
#define  TVE_dac_test_aio_dac_en(data)                                           (0x00000004&((data)<<2))
#define  TVE_dac_test_dac1_en(data)                                              (0x00000002&((data)<<1))
#define  TVE_dac_test_dac0_en(data)                                              (0x00000001&(data))
#define  TVE_dac_test_get_aio_dac_en(data)                                       ((0x00000004&(data))>>2)
#define  TVE_dac_test_get_dac1_en(data)                                          ((0x00000002&(data))>>1)
#define  TVE_dac_test_get_dac0_en(data)                                          (0x00000001&(data))

#define  TVE_intvbi_i                                                           0x1801F348
#define  TVE_intvbi_i_reg_addr                                                   "0xB801F348"
#define  TVE_intvbi_i_reg                                                        0xB801F348
#define  TVE_intvbi_i_inst_addr                                                  "0x0096"
#define  set_TVE_intvbi_i_reg(data)                                              (*((volatile unsigned int*)TVE_intvbi_i_reg)=data)
#define  get_TVE_intvbi_i_reg                                                    (*((volatile unsigned int*)TVE_intvbi_i_reg))
#define  TVE_intvbi_i_write_en2_shift                                            (25)
#define  TVE_intvbi_i_int_vpos_shift                                             (14)
#define  TVE_intvbi_i_write_en1_shift                                            (13)
#define  TVE_intvbi_i_int_hpos_shift                                             (0)
#define  TVE_intvbi_i_write_en2_mask                                             (0x02000000)
#define  TVE_intvbi_i_int_vpos_mask                                              (0x01FFC000)
#define  TVE_intvbi_i_write_en1_mask                                             (0x00002000)
#define  TVE_intvbi_i_int_hpos_mask                                              (0x00001FFF)
#define  TVE_intvbi_i_write_en2(data)                                            (0x02000000&((data)<<25))
#define  TVE_intvbi_i_int_vpos(data)                                             (0x01FFC000&((data)<<14))
#define  TVE_intvbi_i_write_en1(data)                                            (0x00002000&((data)<<13))
#define  TVE_intvbi_i_int_hpos(data)                                             (0x00001FFF&(data))
#define  TVE_intvbi_i_get_write_en2(data)                                        ((0x02000000&(data))>>25)
#define  TVE_intvbi_i_get_int_vpos(data)                                         ((0x01FFC000&(data))>>14)
#define  TVE_intvbi_i_get_write_en1(data)                                        ((0x00002000&(data))>>13)
#define  TVE_intvbi_i_get_int_hpos(data)                                         (0x00001FFF&(data))

#define  TVE_intvbi_p1                                                          0x1801F34C
#define  TVE_intvbi_p1_reg_addr                                                  "0xB801F34C"
#define  TVE_intvbi_p1_reg                                                       0xB801F34C
#define  TVE_intvbi_p1_inst_addr                                                 "0x0097"
#define  set_TVE_intvbi_p1_reg(data)                                             (*((volatile unsigned int*)TVE_intvbi_p1_reg)=data)
#define  get_TVE_intvbi_p1_reg                                                   (*((volatile unsigned int*)TVE_intvbi_p1_reg))
#define  TVE_intvbi_p1_write_en2_shift                                           (25)
#define  TVE_intvbi_p1_int_vpos_shift                                            (14)
#define  TVE_intvbi_p1_write_en1_shift                                           (13)
#define  TVE_intvbi_p1_int_hpos_shift                                            (0)
#define  TVE_intvbi_p1_write_en2_mask                                            (0x02000000)
#define  TVE_intvbi_p1_int_vpos_mask                                             (0x01FFC000)
#define  TVE_intvbi_p1_write_en1_mask                                            (0x00002000)
#define  TVE_intvbi_p1_int_hpos_mask                                             (0x00001FFF)
#define  TVE_intvbi_p1_write_en2(data)                                           (0x02000000&((data)<<25))
#define  TVE_intvbi_p1_int_vpos(data)                                            (0x01FFC000&((data)<<14))
#define  TVE_intvbi_p1_write_en1(data)                                           (0x00002000&((data)<<13))
#define  TVE_intvbi_p1_int_hpos(data)                                            (0x00001FFF&(data))
#define  TVE_intvbi_p1_get_write_en2(data)                                       ((0x02000000&(data))>>25)
#define  TVE_intvbi_p1_get_int_vpos(data)                                        ((0x01FFC000&(data))>>14)
#define  TVE_intvbi_p1_get_write_en1(data)                                       ((0x00002000&(data))>>13)
#define  TVE_intvbi_p1_get_int_hpos(data)                                        (0x00001FFF&(data))

#define  TVE_intvbi_p2                                                          0x1801F370
#define  TVE_intvbi_p2_reg_addr                                                  "0xB801F370"
#define  TVE_intvbi_p2_reg                                                       0xB801F370
#define  TVE_intvbi_p2_inst_addr                                                 "0x0098"
#define  set_TVE_intvbi_p2_reg(data)                                             (*((volatile unsigned int*)TVE_intvbi_p2_reg)=data)
#define  get_TVE_intvbi_p2_reg                                                   (*((volatile unsigned int*)TVE_intvbi_p2_reg))
#define  TVE_intvbi_p2_write_en2_shift                                           (25)
#define  TVE_intvbi_p2_int_vpos_shift                                            (14)
#define  TVE_intvbi_p2_write_en1_shift                                           (13)
#define  TVE_intvbi_p2_int_hpos_shift                                            (0)
#define  TVE_intvbi_p2_write_en2_mask                                            (0x02000000)
#define  TVE_intvbi_p2_int_vpos_mask                                             (0x01FFC000)
#define  TVE_intvbi_p2_write_en1_mask                                            (0x00002000)
#define  TVE_intvbi_p2_int_hpos_mask                                             (0x00001FFF)
#define  TVE_intvbi_p2_write_en2(data)                                           (0x02000000&((data)<<25))
#define  TVE_intvbi_p2_int_vpos(data)                                            (0x01FFC000&((data)<<14))
#define  TVE_intvbi_p2_write_en1(data)                                           (0x00002000&((data)<<13))
#define  TVE_intvbi_p2_int_hpos(data)                                            (0x00001FFF&(data))
#define  TVE_intvbi_p2_get_write_en2(data)                                       ((0x02000000&(data))>>25)
#define  TVE_intvbi_p2_get_int_vpos(data)                                        ((0x01FFC000&(data))>>14)
#define  TVE_intvbi_p2_get_write_en1(data)                                       ((0x00002000&(data))>>13)
#define  TVE_intvbi_p2_get_int_hpos(data)                                        (0x00001FFF&(data))

#define  TVE_intvbi_h1                                                          0x1801F374
#define  TVE_intvbi_h1_reg_addr                                                  "0xB801F374"
#define  TVE_intvbi_h1_reg                                                       0xB801F374
#define  TVE_intvbi_h1_inst_addr                                                 "0x0099"
#define  set_TVE_intvbi_h1_reg(data)                                             (*((volatile unsigned int*)TVE_intvbi_h1_reg)=data)
#define  get_TVE_intvbi_h1_reg                                                   (*((volatile unsigned int*)TVE_intvbi_h1_reg))
#define  TVE_intvbi_h1_write_en2_shift                                           (25)
#define  TVE_intvbi_h1_int_vpos_shift                                            (14)
#define  TVE_intvbi_h1_write_en1_shift                                           (13)
#define  TVE_intvbi_h1_int_hpos_shift                                            (0)
#define  TVE_intvbi_h1_write_en2_mask                                            (0x02000000)
#define  TVE_intvbi_h1_int_vpos_mask                                             (0x01FFC000)
#define  TVE_intvbi_h1_write_en1_mask                                            (0x00002000)
#define  TVE_intvbi_h1_int_hpos_mask                                             (0x00001FFF)
#define  TVE_intvbi_h1_write_en2(data)                                           (0x02000000&((data)<<25))
#define  TVE_intvbi_h1_int_vpos(data)                                            (0x01FFC000&((data)<<14))
#define  TVE_intvbi_h1_write_en1(data)                                           (0x00002000&((data)<<13))
#define  TVE_intvbi_h1_int_hpos(data)                                            (0x00001FFF&(data))
#define  TVE_intvbi_h1_get_write_en2(data)                                       ((0x02000000&(data))>>25)
#define  TVE_intvbi_h1_get_int_vpos(data)                                        ((0x01FFC000&(data))>>14)
#define  TVE_intvbi_h1_get_write_en1(data)                                       ((0x00002000&(data))>>13)
#define  TVE_intvbi_h1_get_int_hpos(data)                                        (0x00001FFF&(data))

#define  TVE_intvbi_h2                                                          0x1801F378
#define  TVE_intvbi_h2_reg_addr                                                  "0xB801F378"
#define  TVE_intvbi_h2_reg                                                       0xB801F378
#define  TVE_intvbi_h2_inst_addr                                                 "0x009A"
#define  set_TVE_intvbi_h2_reg(data)                                             (*((volatile unsigned int*)TVE_intvbi_h2_reg)=data)
#define  get_TVE_intvbi_h2_reg                                                   (*((volatile unsigned int*)TVE_intvbi_h2_reg))
#define  TVE_intvbi_h2_write_en2_shift                                           (25)
#define  TVE_intvbi_h2_int_vpos_shift                                            (14)
#define  TVE_intvbi_h2_write_en1_shift                                           (13)
#define  TVE_intvbi_h2_int_hpos_shift                                            (0)
#define  TVE_intvbi_h2_write_en2_mask                                            (0x02000000)
#define  TVE_intvbi_h2_int_vpos_mask                                             (0x01FFC000)
#define  TVE_intvbi_h2_write_en1_mask                                            (0x00002000)
#define  TVE_intvbi_h2_int_hpos_mask                                             (0x00001FFF)
#define  TVE_intvbi_h2_write_en2(data)                                           (0x02000000&((data)<<25))
#define  TVE_intvbi_h2_int_vpos(data)                                            (0x01FFC000&((data)<<14))
#define  TVE_intvbi_h2_write_en1(data)                                           (0x00002000&((data)<<13))
#define  TVE_intvbi_h2_int_hpos(data)                                            (0x00001FFF&(data))
#define  TVE_intvbi_h2_get_write_en2(data)                                       ((0x02000000&(data))>>25)
#define  TVE_intvbi_h2_get_int_vpos(data)                                        ((0x01FFC000&(data))>>14)
#define  TVE_intvbi_h2_get_write_en1(data)                                       ((0x00002000&(data))>>13)
#define  TVE_intvbi_h2_get_int_hpos(data)                                        (0x00001FFF&(data))

#define  TVE_dac4_fir_1                                                         0x1801F398
#define  TVE_dac4_fir_1_reg_addr                                                 "0xB801F398"
#define  TVE_dac4_fir_1_reg                                                      0xB801F398
#define  TVE_dac4_fir_1_inst_addr                                                "0x009B"
#define  set_TVE_dac4_fir_1_reg(data)                                            (*((volatile unsigned int*)TVE_dac4_fir_1_reg)=data)
#define  get_TVE_dac4_fir_1_reg                                                  (*((volatile unsigned int*)TVE_dac4_fir_1_reg))
#define  TVE_dac4_fir_1_c1_shift                                                 (16)
#define  TVE_dac4_fir_1_c0_shift                                                 (0)
#define  TVE_dac4_fir_1_c1_mask                                                  (0x3FFF0000)
#define  TVE_dac4_fir_1_c0_mask                                                  (0x00003FFF)
#define  TVE_dac4_fir_1_c1(data)                                                 (0x3FFF0000&((data)<<16))
#define  TVE_dac4_fir_1_c0(data)                                                 (0x00003FFF&(data))
#define  TVE_dac4_fir_1_get_c1(data)                                             ((0x3FFF0000&(data))>>16)
#define  TVE_dac4_fir_1_get_c0(data)                                             (0x00003FFF&(data))

#define  TVE_dac4_fir_2                                                         0x1801F39C
#define  TVE_dac4_fir_2_reg_addr                                                 "0xB801F39C"
#define  TVE_dac4_fir_2_reg                                                      0xB801F39C
#define  TVE_dac4_fir_2_inst_addr                                                "0x009C"
#define  set_TVE_dac4_fir_2_reg(data)                                            (*((volatile unsigned int*)TVE_dac4_fir_2_reg)=data)
#define  get_TVE_dac4_fir_2_reg                                                  (*((volatile unsigned int*)TVE_dac4_fir_2_reg))
#define  TVE_dac4_fir_2_c3_shift                                                 (16)
#define  TVE_dac4_fir_2_c2_shift                                                 (0)
#define  TVE_dac4_fir_2_c3_mask                                                  (0x3FFF0000)
#define  TVE_dac4_fir_2_c2_mask                                                  (0x00003FFF)
#define  TVE_dac4_fir_2_c3(data)                                                 (0x3FFF0000&((data)<<16))
#define  TVE_dac4_fir_2_c2(data)                                                 (0x00003FFF&(data))
#define  TVE_dac4_fir_2_get_c3(data)                                             ((0x3FFF0000&(data))>>16)
#define  TVE_dac4_fir_2_get_c2(data)                                             (0x00003FFF&(data))

#define  TVE_dac4_fifo                                                          0x1801F3A0
#define  TVE_dac4_fifo_reg_addr                                                  "0xB801F3A0"
#define  TVE_dac4_fifo_reg                                                       0xB801F3A0
#define  TVE_dac4_fifo_inst_addr                                                 "0x009D"
#define  set_TVE_dac4_fifo_reg(data)                                             (*((volatile unsigned int*)TVE_dac4_fifo_reg)=data)
#define  get_TVE_dac4_fifo_reg                                                   (*((volatile unsigned int*)TVE_dac4_fifo_reg))
#define  TVE_dac4_fifo_tve_sim_cntl_shift                                        (2)
#define  TVE_dac4_fifo_empty_clr_shift                                           (1)
#define  TVE_dac4_fifo_full_clr_shift                                            (0)
#define  TVE_dac4_fifo_tve_sim_cntl_mask                                         (0x00000004)
#define  TVE_dac4_fifo_empty_clr_mask                                            (0x00000002)
#define  TVE_dac4_fifo_full_clr_mask                                             (0x00000001)
#define  TVE_dac4_fifo_tve_sim_cntl(data)                                        (0x00000004&((data)<<2))
#define  TVE_dac4_fifo_empty_clr(data)                                           (0x00000002&((data)<<1))
#define  TVE_dac4_fifo_full_clr(data)                                            (0x00000001&(data))
#define  TVE_dac4_fifo_get_tve_sim_cntl(data)                                    ((0x00000004&(data))>>2)
#define  TVE_dac4_fifo_get_empty_clr(data)                                       ((0x00000002&(data))>>1)
#define  TVE_dac4_fifo_get_full_clr(data)                                        (0x00000001&(data))

#define  TVE_dac4_fifo_read                                                     0x1801F3A4
#define  TVE_dac4_fifo_read_reg_addr                                             "0xB801F3A4"
#define  TVE_dac4_fifo_read_reg                                                  0xB801F3A4
#define  TVE_dac4_fifo_read_inst_addr                                            "0x009E"
#define  set_TVE_dac4_fifo_read_reg(data)                                        (*((volatile unsigned int*)TVE_dac4_fifo_read_reg)=data)
#define  get_TVE_dac4_fifo_read_reg                                              (*((volatile unsigned int*)TVE_dac4_fifo_read_reg))
#define  TVE_dac4_fifo_read_avout_fifo_empty_shift                               (3)
#define  TVE_dac4_fifo_read_avout_fifo_full_shift                                (2)
#define  TVE_dac4_fifo_read_fifo_empty_shift                                     (1)
#define  TVE_dac4_fifo_read_fifo_full_shift                                      (0)
#define  TVE_dac4_fifo_read_avout_fifo_empty_mask                                (0x00000008)
#define  TVE_dac4_fifo_read_avout_fifo_full_mask                                 (0x00000004)
#define  TVE_dac4_fifo_read_fifo_empty_mask                                      (0x00000002)
#define  TVE_dac4_fifo_read_fifo_full_mask                                       (0x00000001)
#define  TVE_dac4_fifo_read_avout_fifo_empty(data)                               (0x00000008&((data)<<3))
#define  TVE_dac4_fifo_read_avout_fifo_full(data)                                (0x00000004&((data)<<2))
#define  TVE_dac4_fifo_read_fifo_empty(data)                                     (0x00000002&((data)<<1))
#define  TVE_dac4_fifo_read_fifo_full(data)                                      (0x00000001&(data))
#define  TVE_dac4_fifo_read_get_avout_fifo_empty(data)                           ((0x00000008&(data))>>3)
#define  TVE_dac4_fifo_read_get_avout_fifo_full(data)                            ((0x00000004&(data))>>2)
#define  TVE_dac4_fifo_read_get_fifo_empty(data)                                 ((0x00000002&(data))>>1)
#define  TVE_dac4_fifo_read_get_fifo_full(data)                                  (0x00000001&(data))

#define  TVE_cvbs_lpf0                                                          0x1801F3B0
#define  TVE_cvbs_lpf0_reg_addr                                                  "0xB801F3B0"
#define  TVE_cvbs_lpf0_reg                                                       0xB801F3B0
#define  TVE_cvbs_lpf0_inst_addr                                                 "0x009F"
#define  set_TVE_cvbs_lpf0_reg(data)                                             (*((volatile unsigned int*)TVE_cvbs_lpf0_reg)=data)
#define  get_TVE_cvbs_lpf0_reg                                                   (*((volatile unsigned int*)TVE_cvbs_lpf0_reg))
#define  TVE_cvbs_lpf0_lpf_en_shift                                              (31)
#define  TVE_cvbs_lpf0_avout_sel_shift                                           (30)
#define  TVE_cvbs_lpf0_coef_17_shift                                             (16)
#define  TVE_cvbs_lpf0_coef_16_shift                                             (0)
#define  TVE_cvbs_lpf0_lpf_en_mask                                               (0x80000000)
#define  TVE_cvbs_lpf0_avout_sel_mask                                            (0x40000000)
#define  TVE_cvbs_lpf0_coef_17_mask                                              (0x07FF0000)
#define  TVE_cvbs_lpf0_coef_16_mask                                              (0x000007FF)
#define  TVE_cvbs_lpf0_lpf_en(data)                                              (0x80000000&((data)<<31))
#define  TVE_cvbs_lpf0_avout_sel(data)                                           (0x40000000&((data)<<30))
#define  TVE_cvbs_lpf0_coef_17(data)                                             (0x07FF0000&((data)<<16))
#define  TVE_cvbs_lpf0_coef_16(data)                                             (0x000007FF&(data))
#define  TVE_cvbs_lpf0_get_lpf_en(data)                                          ((0x80000000&(data))>>31)
#define  TVE_cvbs_lpf0_get_avout_sel(data)                                       ((0x40000000&(data))>>30)
#define  TVE_cvbs_lpf0_get_coef_17(data)                                         ((0x07FF0000&(data))>>16)
#define  TVE_cvbs_lpf0_get_coef_16(data)                                         (0x000007FF&(data))

#define  TVE_cvbs_lpf1                                                          0x1801F3B4
#define  TVE_cvbs_lpf1_reg_addr                                                  "0xB801F3B4"
#define  TVE_cvbs_lpf1_reg                                                       0xB801F3B4
#define  TVE_cvbs_lpf1_inst_addr                                                 "0x00A0"
#define  set_TVE_cvbs_lpf1_reg(data)                                             (*((volatile unsigned int*)TVE_cvbs_lpf1_reg)=data)
#define  get_TVE_cvbs_lpf1_reg                                                   (*((volatile unsigned int*)TVE_cvbs_lpf1_reg))
#define  TVE_cvbs_lpf1_coef_15_shift                                             (16)
#define  TVE_cvbs_lpf1_coef_14_shift                                             (0)
#define  TVE_cvbs_lpf1_coef_15_mask                                              (0x07FF0000)
#define  TVE_cvbs_lpf1_coef_14_mask                                              (0x000007FF)
#define  TVE_cvbs_lpf1_coef_15(data)                                             (0x07FF0000&((data)<<16))
#define  TVE_cvbs_lpf1_coef_14(data)                                             (0x000007FF&(data))
#define  TVE_cvbs_lpf1_get_coef_15(data)                                         ((0x07FF0000&(data))>>16)
#define  TVE_cvbs_lpf1_get_coef_14(data)                                         (0x000007FF&(data))

#define  TVE_cvbs_lpf2                                                          0x1801F3B8
#define  TVE_cvbs_lpf2_reg_addr                                                  "0xB801F3B8"
#define  TVE_cvbs_lpf2_reg                                                       0xB801F3B8
#define  TVE_cvbs_lpf2_inst_addr                                                 "0x00A1"
#define  set_TVE_cvbs_lpf2_reg(data)                                             (*((volatile unsigned int*)TVE_cvbs_lpf2_reg)=data)
#define  get_TVE_cvbs_lpf2_reg                                                   (*((volatile unsigned int*)TVE_cvbs_lpf2_reg))
#define  TVE_cvbs_lpf2_coef_13_shift                                             (16)
#define  TVE_cvbs_lpf2_coef_12_shift                                             (0)
#define  TVE_cvbs_lpf2_coef_13_mask                                              (0x07FF0000)
#define  TVE_cvbs_lpf2_coef_12_mask                                              (0x000007FF)
#define  TVE_cvbs_lpf2_coef_13(data)                                             (0x07FF0000&((data)<<16))
#define  TVE_cvbs_lpf2_coef_12(data)                                             (0x000007FF&(data))
#define  TVE_cvbs_lpf2_get_coef_13(data)                                         ((0x07FF0000&(data))>>16)
#define  TVE_cvbs_lpf2_get_coef_12(data)                                         (0x000007FF&(data))

#define  TVE_cvbs_lpf3                                                          0x1801F3BC
#define  TVE_cvbs_lpf3_reg_addr                                                  "0xB801F3BC"
#define  TVE_cvbs_lpf3_reg                                                       0xB801F3BC
#define  TVE_cvbs_lpf3_inst_addr                                                 "0x00A2"
#define  set_TVE_cvbs_lpf3_reg(data)                                             (*((volatile unsigned int*)TVE_cvbs_lpf3_reg)=data)
#define  get_TVE_cvbs_lpf3_reg                                                   (*((volatile unsigned int*)TVE_cvbs_lpf3_reg))
#define  TVE_cvbs_lpf3_coef_11_shift                                             (16)
#define  TVE_cvbs_lpf3_coef_10_shift                                             (0)
#define  TVE_cvbs_lpf3_coef_11_mask                                              (0x07FF0000)
#define  TVE_cvbs_lpf3_coef_10_mask                                              (0x000007FF)
#define  TVE_cvbs_lpf3_coef_11(data)                                             (0x07FF0000&((data)<<16))
#define  TVE_cvbs_lpf3_coef_10(data)                                             (0x000007FF&(data))
#define  TVE_cvbs_lpf3_get_coef_11(data)                                         ((0x07FF0000&(data))>>16)
#define  TVE_cvbs_lpf3_get_coef_10(data)                                         (0x000007FF&(data))

#define  TVE_cvbs_lpf4                                                          0x1801F3C0
#define  TVE_cvbs_lpf4_reg_addr                                                  "0xB801F3C0"
#define  TVE_cvbs_lpf4_reg                                                       0xB801F3C0
#define  TVE_cvbs_lpf4_inst_addr                                                 "0x00A3"
#define  set_TVE_cvbs_lpf4_reg(data)                                             (*((volatile unsigned int*)TVE_cvbs_lpf4_reg)=data)
#define  get_TVE_cvbs_lpf4_reg                                                   (*((volatile unsigned int*)TVE_cvbs_lpf4_reg))
#define  TVE_cvbs_lpf4_coef_9_shift                                              (16)
#define  TVE_cvbs_lpf4_coef_8_shift                                              (0)
#define  TVE_cvbs_lpf4_coef_9_mask                                               (0x07FF0000)
#define  TVE_cvbs_lpf4_coef_8_mask                                               (0x000007FF)
#define  TVE_cvbs_lpf4_coef_9(data)                                              (0x07FF0000&((data)<<16))
#define  TVE_cvbs_lpf4_coef_8(data)                                              (0x000007FF&(data))
#define  TVE_cvbs_lpf4_get_coef_9(data)                                          ((0x07FF0000&(data))>>16)
#define  TVE_cvbs_lpf4_get_coef_8(data)                                          (0x000007FF&(data))

#define  TVE_cvbs_lpf5                                                          0x1801F3C4
#define  TVE_cvbs_lpf5_reg_addr                                                  "0xB801F3C4"
#define  TVE_cvbs_lpf5_reg                                                       0xB801F3C4
#define  TVE_cvbs_lpf5_inst_addr                                                 "0x00A4"
#define  set_TVE_cvbs_lpf5_reg(data)                                             (*((volatile unsigned int*)TVE_cvbs_lpf5_reg)=data)
#define  get_TVE_cvbs_lpf5_reg                                                   (*((volatile unsigned int*)TVE_cvbs_lpf5_reg))
#define  TVE_cvbs_lpf5_coef_7_shift                                              (16)
#define  TVE_cvbs_lpf5_coef_6_shift                                              (0)
#define  TVE_cvbs_lpf5_coef_7_mask                                               (0x07FF0000)
#define  TVE_cvbs_lpf5_coef_6_mask                                               (0x000007FF)
#define  TVE_cvbs_lpf5_coef_7(data)                                              (0x07FF0000&((data)<<16))
#define  TVE_cvbs_lpf5_coef_6(data)                                              (0x000007FF&(data))
#define  TVE_cvbs_lpf5_get_coef_7(data)                                          ((0x07FF0000&(data))>>16)
#define  TVE_cvbs_lpf5_get_coef_6(data)                                          (0x000007FF&(data))

#define  TVE_cvbs_lpf6                                                          0x1801F3C8
#define  TVE_cvbs_lpf6_reg_addr                                                  "0xB801F3C8"
#define  TVE_cvbs_lpf6_reg                                                       0xB801F3C8
#define  TVE_cvbs_lpf6_inst_addr                                                 "0x00A5"
#define  set_TVE_cvbs_lpf6_reg(data)                                             (*((volatile unsigned int*)TVE_cvbs_lpf6_reg)=data)
#define  get_TVE_cvbs_lpf6_reg                                                   (*((volatile unsigned int*)TVE_cvbs_lpf6_reg))
#define  TVE_cvbs_lpf6_coef_5_shift                                              (16)
#define  TVE_cvbs_lpf6_coef_4_shift                                              (0)
#define  TVE_cvbs_lpf6_coef_5_mask                                               (0x07FF0000)
#define  TVE_cvbs_lpf6_coef_4_mask                                               (0x000007FF)
#define  TVE_cvbs_lpf6_coef_5(data)                                              (0x07FF0000&((data)<<16))
#define  TVE_cvbs_lpf6_coef_4(data)                                              (0x000007FF&(data))
#define  TVE_cvbs_lpf6_get_coef_5(data)                                          ((0x07FF0000&(data))>>16)
#define  TVE_cvbs_lpf6_get_coef_4(data)                                          (0x000007FF&(data))

#define  TVE_cvbs_lpf7                                                          0x1801F3CC
#define  TVE_cvbs_lpf7_reg_addr                                                  "0xB801F3CC"
#define  TVE_cvbs_lpf7_reg                                                       0xB801F3CC
#define  TVE_cvbs_lpf7_inst_addr                                                 "0x00A6"
#define  set_TVE_cvbs_lpf7_reg(data)                                             (*((volatile unsigned int*)TVE_cvbs_lpf7_reg)=data)
#define  get_TVE_cvbs_lpf7_reg                                                   (*((volatile unsigned int*)TVE_cvbs_lpf7_reg))
#define  TVE_cvbs_lpf7_coef_3_shift                                              (16)
#define  TVE_cvbs_lpf7_coef_2_shift                                              (0)
#define  TVE_cvbs_lpf7_coef_3_mask                                               (0x07FF0000)
#define  TVE_cvbs_lpf7_coef_2_mask                                               (0x000007FF)
#define  TVE_cvbs_lpf7_coef_3(data)                                              (0x07FF0000&((data)<<16))
#define  TVE_cvbs_lpf7_coef_2(data)                                              (0x000007FF&(data))
#define  TVE_cvbs_lpf7_get_coef_3(data)                                          ((0x07FF0000&(data))>>16)
#define  TVE_cvbs_lpf7_get_coef_2(data)                                          (0x000007FF&(data))

#define  TVE_cvbs_lpf8                                                          0x1801F3D0
#define  TVE_cvbs_lpf8_reg_addr                                                  "0xB801F3D0"
#define  TVE_cvbs_lpf8_reg                                                       0xB801F3D0
#define  TVE_cvbs_lpf8_inst_addr                                                 "0x00A7"
#define  set_TVE_cvbs_lpf8_reg(data)                                             (*((volatile unsigned int*)TVE_cvbs_lpf8_reg)=data)
#define  get_TVE_cvbs_lpf8_reg                                                   (*((volatile unsigned int*)TVE_cvbs_lpf8_reg))
#define  TVE_cvbs_lpf8_coef_1_shift                                              (16)
#define  TVE_cvbs_lpf8_avout_fifo_empty_clr_shift                                (1)
#define  TVE_cvbs_lpf8_avout_fifo_full_clr_shift                                 (0)
#define  TVE_cvbs_lpf8_coef_1_mask                                               (0x07FF0000)
#define  TVE_cvbs_lpf8_avout_fifo_empty_clr_mask                                 (0x00000002)
#define  TVE_cvbs_lpf8_avout_fifo_full_clr_mask                                  (0x00000001)
#define  TVE_cvbs_lpf8_coef_1(data)                                              (0x07FF0000&((data)<<16))
#define  TVE_cvbs_lpf8_avout_fifo_empty_clr(data)                                (0x00000002&((data)<<1))
#define  TVE_cvbs_lpf8_avout_fifo_full_clr(data)                                 (0x00000001&(data))
#define  TVE_cvbs_lpf8_get_coef_1(data)                                          ((0x07FF0000&(data))>>16)
#define  TVE_cvbs_lpf8_get_avout_fifo_empty_clr(data)                            ((0x00000002&(data))>>1)
#define  TVE_cvbs_lpf8_get_avout_fifo_full_clr(data)                             (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======TVE register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  write_en5:1;
        RBus_UInt32  hi_sync_go:1;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  pi_sync_go:1;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  i_sync_go:1;
        RBus_UInt32  res2:4;
    };
}tve_syncgen_rst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  v_thr:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  h_thr:13;
    };
}tve_syncgen_i_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  i_field:1;
        RBus_UInt32  i_vcnt:11;
        RBus_UInt32  res2:12;
    };
}tve_syncgen_status_i_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  inten_vbi_i:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  inten_i:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  write_data:1;
    };
}tve_inten_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  intst_vbi_i:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  intst_i:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  write_data:1;
    };
}tve_intst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  int_vpos:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  int_hpos:13;
    };
}tve_intpos_i_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  srstn:1;
    };
}tve_srstn_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  i_luminace_ebl:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  i_colorbar_ebl:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  i_black_ebl:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  write_data:1;
    };
}tve_av_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  i_lvl:4;
    };
}tve_ctl_luminace_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  i_en:1;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  p_en:1;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  i_slewrate:2;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  p_slewrate:2;
    };
}tve_av_slew_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  i_h_st:10;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  i_h_end:10;
    };
}tve_slew_i_hpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  i_h_st:13;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  i_h_end:13;
    };
}tve_av_i_hpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  itop_v_st:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  itop_v_end:11;
    };
}tve_itop_vpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  ibot_v_st:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  ibot_v_end:11;
    };
}tve_ibot_vpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  i_h_width:10;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  i_h_st_pos:10;
    };
}tve_i_colorbar_hpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  ip_vsync_pos1:10;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  ip_vsync_pos2:10;
    };
}tve_ip_vsyncpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  hthr:11;
    };
}tve_ip_hsyncpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  y_black_lvl:8;
    };
}tve_ip_input_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_en2:1;
        RBus_UInt32  gain:15;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  offset:15;
    };
}tve_vbi_coeff_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_en2:1;
        RBus_UInt32  gain:15;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  offset:15;
    };
}tve_blnk_coeff_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_en2:1;
        RBus_UInt32  c2:15;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  c1:15;
    };
}tve_av_coeff1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_en2:1;
        RBus_UInt32  c3:15;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  c4:15;
    };
}tve_av_coeff2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_en2:1;
        RBus_UInt32  c5:15;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  c6:15;
    };
}tve_av_coeff3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_en2:1;
        RBus_UInt32  k1:15;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  k2:15;
    };
}tve_av_coeff4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  vbi_gain_ebl:1;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  k3:15;
    };
}tve_av_coeff5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  tve_rb_ebl:1;
        RBus_UInt32  tve_g_ebl:1;
        RBus_UInt32  tve_ebl:1;
        RBus_UInt32  write_data:1;
    };
}tve_tve_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  tve_st_ps:8;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  tve_ps_len:6;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  tve_agc_len:6;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  tve_blnk_len:6;
    };
}tve_tve_len_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  cgms_i_ebl:1;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  cgms_p_ebl:1;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  cgms_data:20;
    };
}tve_cgms_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  cgms_data:20;
    };
}tve_cgms_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  cgms_i_vpos1:9;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  cgms_i_vpos2:10;
    };
}tve_cgms_i_vpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  cgms_i_hst:10;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  cgms_i_len:10;
    };
}tve_cgms_i_hpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  cgms_hdr:6;
    };
}tve_cgms_b_hdr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cgms_data:32;
    };
}tve_cgms_b_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  wss_ebl:1;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  wss_intp_sel:1;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  wss_end_hpos:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  wss_data:14;
    };
}tve_wss_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  wss_h_pos:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  wss_v_pos:10;
    };
}tve_wss_pos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  write_en5:1;
        RBus_UInt32  tt_bit_swap:1;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  tt_h_st:11;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  tt_line_no:8;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  tt_intp_sel:1;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  vbi_tt_ebl:1;
    };
}tve_tt_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  tt_b_vst:9;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  tt_t_vst:5;
    };
}tve_tt_vpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  start_line2:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  start_line1:11;
    };
}tve_tt_mask_vpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tt_line_mask:32;
    };
}tve_tt_mask_flg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  vps_h_pos:11;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  vps_v_pos:10;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  vps_intp_sel:1;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  vbi_vps_ebl:1;
    };
}tve_vps_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vps_data:32;
    };
}tve_vps_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  vps_data:8;
    };
}tve_vps_data1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_en4:1;
        RBus_UInt32  dwn_ebl:2;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  dwn_i_p_sel:1;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  dwn_st_i:12;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  dwn_end_i:13;
    };
}tve_vbi_dwn_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  dwn_st_p:12;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  dwn_end_p:13;
    };
}tve_vbi_dwn_hpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  vbi_start_line2:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  vbi_start_line1:11;
    };
}tve_vbi_dwn_vpos_i_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbi_line_flg:32;
    };
}tve_vbi_line_flag_i_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbi_pty:32;
    };
}tve_vbi_line_pty_i_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  di_i_p_sel:2;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  hact_start:13;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  hact_end:13;
    };
}tve_dif_hactive_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  cd:1;
        RBus_UInt32  di_bus_swap:1;
        RBus_UInt32  di_clk_phs:1;
        RBus_UInt32  di_fpga_clk_sel:1;
        RBus_UInt32  di_vbi_bypass:1;
        RBus_UInt32  di_ebl:1;
        RBus_UInt32  di_source_sel:1;
        RBus_UInt32  di_mod:1;
        RBus_UInt32  di_hdr_ebl:1;
        RBus_UInt32  write_data:1;
    };
}tve_dif_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  hs_polar:1;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  hs_start:13;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  hs_end:13;
    };
}tve_dif_hsync_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  vs_polar:1;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  vs_st_pos1v:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  vs_st_pos1h:13;
    };
}tve_dif_vs_st_pos1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  vs_end_pos1v:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  vs_end_pos1h:13;
    };
}tve_dif_vs_end_pos1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  vs_st_pos2v:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  vs_st_pos2h:13;
    };
}tve_dif_vs_st_pos2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  vs_end_pos2v:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  vs_end_pos2h:13;
    };
}tve_dif_vs_end_pos2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  v_tgl_hi:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  v_tgl_lo:11;
    };
}tve_dif_f_bit_pos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  v_tgl1_hi:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  v_tgl1_lo:11;
    };
}tve_dif_v_bit_pos1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  v_tgl2_hi:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  v_tgl2_lo:11;
    };
}tve_dif_v_bit_pos2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  fv_start:13;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  fv_end:13;
    };
}tve_dif_fv_bit_hpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  phi:8;
    };
}tve_ip_phs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sctoh:8;
    };
}tve_ip_sctoh_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  u_invert:1;
        RBus_UInt32  v_invert:1;
        RBus_UInt32  t_offset_phase:1;
        RBus_UInt32  t_reset_fsc:1;
    };
}tve_ip_f_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  t_sel_sin:1;
        RBus_UInt32  t_fsc_rom:1;
    };
}tve_ip_t_sel_sin_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  black_lvl:8;
    };
}tve_ip_blck_lvl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  blank_lvl:8;
    };
}tve_ip_blnk_lvl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  clamp_lvl:8;
    };
}tve_ip_clamp_lvl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sync_lvl:8;
    };
}tve_ip_sync_lvl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  y_interp:2;
        RBus_UInt32  y_colorbar_en:1;
        RBus_UInt32  t_ydel_adj:3;
        RBus_UInt32  t_sel_ylpf:1;
        RBus_UInt32  t_ygain_val:1;
    };
}tve_ip_y_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  t_byp_yups:1;
        RBus_UInt32  t_sel_ylp:1;
        RBus_UInt32  t_ygain_off:1;
        RBus_UInt32  y_tsin_cos:1;
        RBus_UInt32  y_tsel_dac_tst:1;
        RBus_UInt32  y_tdig_out:2;
    };
}tve_ip_test_param_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  y_gain:10;
    };
}tve_ip_y_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sync_lvl_h:8;
    };
}tve_ip_sync_lvl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sync_lvl_m:8;
    };
}tve_ip_sync_lvl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sync_lvl_l:8;
    };
}tve_ip_sync_lvl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  y_path_delay:2;
        RBus_UInt32  y_tsel_yuv:1;
        RBus_UInt32  t_pd_cvdac:1;
        RBus_UInt32  t_pd_ydac:1;
        RBus_UInt32  t_pd_cdac:1;
    };
}tve_ip_o_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  nba:8;
    };
}tve_ip_nba_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  pba:8;
    };
}tve_ip_pba_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  t_pal_clpf:1;
        RBus_UInt32  t_sel_c_gain:1;
    };
}tve_ip_c_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  t_byp_cups:1;
        RBus_UInt32  t_byp_clpf:1;
        RBus_UInt32  t_c_gain_off:1;
    };
}tve_ip_test_t_byp_cups_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  clpf_gain:8;
    };
}tve_ip_synclpf_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  t_hsync_phs:1;
        RBus_UInt32  t_vsync_phs:1;
        RBus_UInt32  y_tsyncmode:3;
        RBus_UInt32  y_tencd_mode:3;
    };
}tve_ip_s_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  clk_phs:2;
        RBus_UInt32  t_fsync_enbl:1;
        RBus_UInt32  t_fsync_phs:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  vso:2;
    };
}tve_ip_vso0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  vso:8;
    };
}tve_ip_vso1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  hso:3;
    };
}tve_ip_hso0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  hso:8;
    };
}tve_ip_hso1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  hlc:2;
    };
}tve_ip_hlc0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  hlc:8;
    };
}tve_ip_hlc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ccd_odd:8;
    };
}tve_ip_ccd_odd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ccd_even:8;
    };
}tve_ip_ccd_even_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  cc_enbl:2;
    };
}tve_ip_ccd_enbl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  hlr:2;
    };
}tve_ip_test_hlr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  hlr:8;
    };
}tve_ip_test_hlr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  vsmr:5;
    };
}tve_ip_test_vsmr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  sync_strt:4;
    };
}tve_ip_sync_strt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  sync_end:7;
    };
}tve_ip_sync_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sync_srend:8;
    };
}tve_ip_sync_srend_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  sync_eqend:6;
    };
}tve_ip_sync_eqend_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  actv_strt:8;
    };
}tve_ip_actv_strt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  actv_end:8;
    };
}tve_ip_actv_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  wbrst_strt:7;
    };
}tve_ip_wbrst_strt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  nbrst_strt:7;
    };
}tve_ip_nbrst_strt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  nbrst_end:8;
    };
}tve_ip_nbrst_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  tvefcr:8;
    };
}tve_ip_tvefcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  tvecsl1:8;
    };
}tve_ip_tvecsl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  tvecls1:6;
    };
}tve_ip_tvecls1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  tvecsl2:8;
    };
}tve_ip_tvecsl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  tvecls2:6;
    };
}tve_ip_tvecls2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  tvecssp:3;
        RBus_UInt32  tvecsnum:3;
        RBus_UInt32  tvecsln:2;
    };
}tve_ip_tvecssp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  tvepsd:6;
    };
}tve_ip_tvepsd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  tvepsl:6;
    };
}tve_ip_tvepsl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  tvepss:6;
    };
}tve_ip_tvepss_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  tvepsls:7;
    };
}tve_ip_tvepsls0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  tvepsls:8;
    };
}tve_ip_tvepsls1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  tvepsfs:7;
    };
}tve_ip_tvepsfs0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  tvepsfs:8;
    };
}tve_ip_tvepsfs1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  tvepsagca:8;
    };
}tve_ip_tvepsagca_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  tvepsagcb:8;
    };
}tve_ip_tvepsagcb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  tveeofbpc:8;
    };
}tve_ip_tveeofbpc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  tvepbz1:4;
        RBus_UInt32  tvepbz2:4;
    };
}tve_ip_tvepbz1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  tvepbz3:4;
        RBus_UInt32  tvepadvbsen:1;
        RBus_UInt32  tvepzninvrt:3;
    };
}tve_ip_tvepbz3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  tvepcslimd_lsb:8;
    };
}tve_ip_tvepcslimd0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  tvepcslimd_msb:2;
    };
}tve_ip_tvepcslimd1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  tvetms:8;
    };
}tve_ip_tve_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  vdac_apow:1;
        RBus_UInt32  vdac_bpow:1;
        RBus_UInt32  vdac_cpow:1;
        RBus_UInt32  powldv_l:1;
        RBus_UInt32  stanby_l:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  biasa_regl:4;
        RBus_UInt32  res3:2;
        RBus_UInt32  biasb_regl:4;
        RBus_UInt32  res4:2;
        RBus_UInt32  biasc_regl:4;
    };
}tve_video_dac_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  abiq_regl:3;
        RBus_UInt32  ldvbias_regl:3;
        RBus_UInt32  vcmref_regl:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  vdac_cf_regl:3;
        RBus_UInt32  vdac_rf_regl:2;
    };
}tve_video_dac_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  write_en6:1;
        RBus_UInt32  dcc2_l:1;
        RBus_UInt32  write_en5:1;
        RBus_UInt32  dcc_l:1;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  caldiv:2;
        RBus_UInt32  res2:3;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  div_regl:2;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  ckmode_regl:2;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  calen_regl:2;
    };
}tve_video_dac_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  up_ctrl_int1:2;
        RBus_UInt32  res2:7;
    };
}tve_dac_mux_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  ygdelay:2;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  bdelay:2;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  rdelay:2;
    };
}tve_cmp_dly_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  out_control123:3;
        RBus_UInt32  res2:22;
    };
}tve_dac_misc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dac_value3:10;
        RBus_UInt32  res2:20;
    };
}tve_dac_misc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  sel1:4;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  sel0:4;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  enable:1;
    };
}tve_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tve_dummy_0:32;
    };
}tve_dummy_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tve_dummy_1:32;
    };
}tve_dummy_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  aio_dac_en:1;
        RBus_UInt32  dac1_en:1;
        RBus_UInt32  dac0_en:1;
    };
}tve_dac_test_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  int_vpos:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  int_hpos:13;
    };
}tve_intvbi_i_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  int_vpos:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  int_hpos:13;
    };
}tve_intvbi_p1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  int_vpos:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  int_hpos:13;
    };
}tve_intvbi_p2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  int_vpos:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  int_hpos:13;
    };
}tve_intvbi_h1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  int_vpos:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  int_hpos:13;
    };
}tve_intvbi_h2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c1:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  c0:14;
    };
}tve_dac4_fir_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c3:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  c2:14;
    };
}tve_dac4_fir_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  tve_sim_cntl:1;
        RBus_UInt32  empty_clr:1;
        RBus_UInt32  full_clr:1;
    };
}tve_dac4_fifo_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  avout_fifo_empty:1;
        RBus_UInt32  avout_fifo_full:1;
        RBus_UInt32  fifo_empty:1;
        RBus_UInt32  fifo_full:1;
    };
}tve_dac4_fifo_read_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lpf_en:1;
        RBus_UInt32  avout_sel:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  coef_17:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  coef_16:11;
    };
}tve_cvbs_lpf0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  coef_15:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  coef_14:11;
    };
}tve_cvbs_lpf1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  coef_13:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  coef_12:11;
    };
}tve_cvbs_lpf2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  coef_11:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  coef_10:11;
    };
}tve_cvbs_lpf3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  coef_9:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  coef_8:11;
    };
}tve_cvbs_lpf4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  coef_7:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  coef_6:11;
    };
}tve_cvbs_lpf5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  coef_5:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  coef_4:11;
    };
}tve_cvbs_lpf6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  coef_3:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  coef_2:11;
    };
}tve_cvbs_lpf7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  coef_1:11;
        RBus_UInt32  res2:14;
        RBus_UInt32  avout_fifo_empty_clr:1;
        RBus_UInt32  avout_fifo_full_clr:1;
    };
}tve_cvbs_lpf8_RBUS;

#else //apply LITTLE_ENDIAN

//======TVE register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  i_sync_go:1;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  pi_sync_go:1;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  hi_sync_go:1;
        RBus_UInt32  write_en5:1;
        RBus_UInt32  res2:22;
    };
}tve_syncgen_rst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h_thr:13;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  v_thr:11;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:6;
    };
}tve_syncgen_i_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  i_vcnt:11;
        RBus_UInt32  i_field:1;
        RBus_UInt32  res2:8;
    };
}tve_syncgen_status_i_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  inten_i:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  inten_vbi_i:1;
        RBus_UInt32  res3:26;
    };
}tve_inten_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  intst_i:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  intst_vbi_i:1;
        RBus_UInt32  res3:26;
    };
}tve_intst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  int_hpos:13;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  int_vpos:11;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:6;
    };
}tve_intpos_i_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  srstn:1;
        RBus_UInt32  res1:31;
    };
}tve_srstn_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  i_black_ebl:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  i_colorbar_ebl:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  i_luminace_ebl:1;
        RBus_UInt32  res4:24;
    };
}tve_av_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i_lvl:4;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  res1:27;
    };
}tve_ctl_luminace_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p_slewrate:2;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  i_slewrate:2;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  p_en:1;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  i_en:1;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  res1:22;
    };
}tve_av_slew_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i_h_end:10;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  i_h_st:10;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:10;
    };
}tve_slew_i_hpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i_h_end:13;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  i_h_st:13;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:4;
    };
}tve_av_i_hpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  itop_v_end:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  itop_v_st:11;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:8;
    };
}tve_itop_vpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ibot_v_end:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  ibot_v_st:11;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:8;
    };
}tve_ibot_vpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i_h_st_pos:10;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  i_h_width:10;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:10;
    };
}tve_i_colorbar_hpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ip_vsync_pos2:10;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  ip_vsync_pos1:10;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:10;
    };
}tve_ip_vsyncpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hthr:11;
        RBus_UInt32  res1:21;
    };
}tve_ip_hsyncpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_black_lvl:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_input_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  offset:15;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  gain:15;
        RBus_UInt32  write_en2:1;
    };
}tve_vbi_coeff_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  offset:15;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  gain:15;
        RBus_UInt32  write_en2:1;
    };
}tve_blnk_coeff_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c1:15;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  c2:15;
        RBus_UInt32  write_en2:1;
    };
}tve_av_coeff1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c4:15;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  c3:15;
        RBus_UInt32  write_en2:1;
    };
}tve_av_coeff2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c6:15;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  c5:15;
        RBus_UInt32  write_en2:1;
    };
}tve_av_coeff3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k2:15;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  k1:15;
        RBus_UInt32  write_en2:1;
    };
}tve_av_coeff4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k3:15;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  vbi_gain_ebl:1;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  res1:14;
    };
}tve_av_coeff5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  tve_ebl:1;
        RBus_UInt32  tve_g_ebl:1;
        RBus_UInt32  tve_rb_ebl:1;
        RBus_UInt32  res1:28;
    };
}tve_tve_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tve_blnk_len:6;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  tve_agc_len:6;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  tve_ps_len:6;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  tve_st_ps:8;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  res1:2;
    };
}tve_tve_len_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cgms_data:20;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  cgms_p_ebl:1;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  cgms_i_ebl:1;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  res1:7;
    };
}tve_cgms_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cgms_data:20;
        RBus_UInt32  res1:12;
    };
}tve_cgms_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cgms_i_vpos2:10;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  cgms_i_vpos1:9;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:11;
    };
}tve_cgms_i_vpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cgms_i_len:10;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  cgms_i_hst:10;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:10;
    };
}tve_cgms_i_hpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cgms_hdr:6;
        RBus_UInt32  res1:26;
    };
}tve_cgms_b_hdr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cgms_data:32;
    };
}tve_cgms_b_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wss_data:14;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  wss_end_hpos:11;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  wss_intp_sel:1;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  wss_ebl:1;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  res1:1;
    };
}tve_wss_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wss_v_pos:10;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  wss_h_pos:11;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:9;
    };
}tve_wss_pos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbi_tt_ebl:1;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  tt_intp_sel:1;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  tt_line_no:8;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  tt_h_st:11;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  tt_bit_swap:1;
        RBus_UInt32  write_en5:1;
        RBus_UInt32  res1:5;
    };
}tve_tt_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tt_t_vst:5;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  tt_b_vst:9;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:16;
    };
}tve_tt_vpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_line1:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  start_line2:11;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:8;
    };
}tve_tt_mask_vpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tt_line_mask:32;
    };
}tve_tt_mask_flg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbi_vps_ebl:1;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  vps_intp_sel:1;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  vps_v_pos:10;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  vps_h_pos:11;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  res1:5;
    };
}tve_vps_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vps_data:32;
    };
}tve_vps_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vps_data:8;
        RBus_UInt32  res1:24;
    };
}tve_vps_data1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dwn_end_i:13;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  dwn_st_i:12;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  dwn_i_p_sel:1;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  dwn_ebl:2;
        RBus_UInt32  write_en4:1;
    };
}tve_vbi_dwn_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dwn_end_p:13;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  dwn_st_p:12;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:5;
    };
}tve_vbi_dwn_hpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbi_start_line1:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  vbi_start_line2:11;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:8;
    };
}tve_vbi_dwn_vpos_i_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbi_line_flg:32;
    };
}tve_vbi_line_flag_i_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbi_pty:32;
    };
}tve_vbi_line_pty_i_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hact_end:13;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  hact_start:13;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  di_i_p_sel:2;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  res1:1;
    };
}tve_dif_hactive_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  di_hdr_ebl:1;
        RBus_UInt32  di_mod:1;
        RBus_UInt32  di_source_sel:1;
        RBus_UInt32  di_ebl:1;
        RBus_UInt32  di_vbi_bypass:1;
        RBus_UInt32  di_fpga_clk_sel:1;
        RBus_UInt32  di_clk_phs:1;
        RBus_UInt32  di_bus_swap:1;
        RBus_UInt32  cd:1;
        RBus_UInt32  res1:22;
    };
}tve_dif_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hs_end:13;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  hs_start:13;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  hs_polar:1;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  res1:2;
    };
}tve_dif_hsync_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vs_st_pos1h:13;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  vs_st_pos1v:11;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  vs_polar:1;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  res1:4;
    };
}tve_dif_vs_st_pos1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vs_end_pos1h:13;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  vs_end_pos1v:11;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:6;
    };
}tve_dif_vs_end_pos1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vs_st_pos2h:13;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  vs_st_pos2v:11;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:6;
    };
}tve_dif_vs_st_pos2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vs_end_pos2h:13;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  vs_end_pos2v:11;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:6;
    };
}tve_dif_vs_end_pos2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_tgl_lo:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  v_tgl_hi:11;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:8;
    };
}tve_dif_f_bit_pos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_tgl1_lo:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  v_tgl1_hi:11;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:8;
    };
}tve_dif_v_bit_pos1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_tgl2_lo:11;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  v_tgl2_hi:11;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:8;
    };
}tve_dif_v_bit_pos2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fv_end:13;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  fv_start:13;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:4;
    };
}tve_dif_fv_bit_hpos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  phi:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_phs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sctoh:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_sctoh_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_reset_fsc:1;
        RBus_UInt32  t_offset_phase:1;
        RBus_UInt32  v_invert:1;
        RBus_UInt32  u_invert:1;
        RBus_UInt32  res1:28;
    };
}tve_ip_f_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_fsc_rom:1;
        RBus_UInt32  t_sel_sin:1;
        RBus_UInt32  res1:30;
    };
}tve_ip_t_sel_sin_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  black_lvl:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_blck_lvl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  blank_lvl:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_blnk_lvl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clamp_lvl:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_clamp_lvl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sync_lvl:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_sync_lvl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_ygain_val:1;
        RBus_UInt32  t_sel_ylpf:1;
        RBus_UInt32  t_ydel_adj:3;
        RBus_UInt32  y_colorbar_en:1;
        RBus_UInt32  y_interp:2;
        RBus_UInt32  res1:24;
    };
}tve_ip_y_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_tdig_out:2;
        RBus_UInt32  y_tsel_dac_tst:1;
        RBus_UInt32  y_tsin_cos:1;
        RBus_UInt32  t_ygain_off:1;
        RBus_UInt32  t_sel_ylp:1;
        RBus_UInt32  t_byp_yups:1;
        RBus_UInt32  res1:25;
    };
}tve_ip_test_param_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_gain:10;
        RBus_UInt32  res1:22;
    };
}tve_ip_y_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sync_lvl_h:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_sync_lvl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sync_lvl_m:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_sync_lvl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sync_lvl_l:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_sync_lvl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_pd_cdac:1;
        RBus_UInt32  t_pd_ydac:1;
        RBus_UInt32  t_pd_cvdac:1;
        RBus_UInt32  y_tsel_yuv:1;
        RBus_UInt32  y_path_delay:2;
        RBus_UInt32  res1:26;
    };
}tve_ip_o_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nba:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_nba_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pba:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_pba_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_sel_c_gain:1;
        RBus_UInt32  t_pal_clpf:1;
        RBus_UInt32  res1:30;
    };
}tve_ip_c_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_c_gain_off:1;
        RBus_UInt32  t_byp_clpf:1;
        RBus_UInt32  t_byp_cups:1;
        RBus_UInt32  res1:29;
    };
}tve_ip_test_t_byp_cups_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clpf_gain:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_synclpf_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_tencd_mode:3;
        RBus_UInt32  y_tsyncmode:3;
        RBus_UInt32  t_vsync_phs:1;
        RBus_UInt32  t_hsync_phs:1;
        RBus_UInt32  res1:24;
    };
}tve_ip_s_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vso:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  t_fsync_phs:1;
        RBus_UInt32  t_fsync_enbl:1;
        RBus_UInt32  clk_phs:2;
        RBus_UInt32  res2:24;
    };
}tve_ip_vso0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vso:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_vso1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hso:3;
        RBus_UInt32  res1:29;
    };
}tve_ip_hso0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hso:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_hso1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hlc:2;
        RBus_UInt32  res1:30;
    };
}tve_ip_hlc0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hlc:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_hlc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ccd_odd:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_ccd_odd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ccd_even:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_ccd_even_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cc_enbl:2;
        RBus_UInt32  res1:30;
    };
}tve_ip_ccd_enbl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hlr:2;
        RBus_UInt32  res1:30;
    };
}tve_ip_test_hlr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hlr:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_test_hlr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vsmr:5;
        RBus_UInt32  res1:27;
    };
}tve_ip_test_vsmr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sync_strt:4;
        RBus_UInt32  res1:28;
    };
}tve_ip_sync_strt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sync_end:7;
        RBus_UInt32  res1:25;
    };
}tve_ip_sync_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sync_srend:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_sync_srend_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sync_eqend:6;
        RBus_UInt32  res1:26;
    };
}tve_ip_sync_eqend_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  actv_strt:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_actv_strt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  actv_end:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_actv_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wbrst_strt:7;
        RBus_UInt32  res1:25;
    };
}tve_ip_wbrst_strt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nbrst_strt:7;
        RBus_UInt32  res1:25;
    };
}tve_ip_nbrst_strt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nbrst_end:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_nbrst_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tvefcr:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_tvefcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tvecsl1:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_tvecsl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tvecls1:6;
        RBus_UInt32  res1:26;
    };
}tve_ip_tvecls1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tvecsl2:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_tvecsl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tvecls2:6;
        RBus_UInt32  res1:26;
    };
}tve_ip_tvecls2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tvecsln:2;
        RBus_UInt32  tvecsnum:3;
        RBus_UInt32  tvecssp:3;
        RBus_UInt32  res1:24;
    };
}tve_ip_tvecssp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tvepsd:6;
        RBus_UInt32  res1:26;
    };
}tve_ip_tvepsd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tvepsl:6;
        RBus_UInt32  res1:26;
    };
}tve_ip_tvepsl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tvepss:6;
        RBus_UInt32  res1:26;
    };
}tve_ip_tvepss_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tvepsls:7;
        RBus_UInt32  res1:25;
    };
}tve_ip_tvepsls0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tvepsls:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_tvepsls1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tvepsfs:7;
        RBus_UInt32  res1:25;
    };
}tve_ip_tvepsfs0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tvepsfs:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_tvepsfs1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tvepsagca:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_tvepsagca_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tvepsagcb:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_tvepsagcb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tveeofbpc:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_tveeofbpc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tvepbz2:4;
        RBus_UInt32  tvepbz1:4;
        RBus_UInt32  res1:24;
    };
}tve_ip_tvepbz1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tvepzninvrt:3;
        RBus_UInt32  tvepadvbsen:1;
        RBus_UInt32  tvepbz3:4;
        RBus_UInt32  res1:24;
    };
}tve_ip_tvepbz3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tvepcslimd_lsb:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_tvepcslimd0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tvepcslimd_msb:2;
        RBus_UInt32  res1:30;
    };
}tve_ip_tvepcslimd1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tvetms:8;
        RBus_UInt32  res1:24;
    };
}tve_ip_tve_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  biasc_regl:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  biasb_regl:4;
        RBus_UInt32  res2:2;
        RBus_UInt32  biasa_regl:4;
        RBus_UInt32  res3:2;
        RBus_UInt32  stanby_l:1;
        RBus_UInt32  powldv_l:1;
        RBus_UInt32  vdac_cpow:1;
        RBus_UInt32  vdac_bpow:1;
        RBus_UInt32  vdac_apow:1;
        RBus_UInt32  res4:9;
    };
}tve_video_dac_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vdac_rf_regl:2;
        RBus_UInt32  vdac_cf_regl:3;
        RBus_UInt32  res1:2;
        RBus_UInt32  vcmref_regl:2;
        RBus_UInt32  ldvbias_regl:3;
        RBus_UInt32  abiq_regl:3;
        RBus_UInt32  res2:17;
    };
}tve_video_dac_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  calen_regl:2;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  ckmode_regl:2;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  div_regl:2;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  caldiv:2;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  dcc_l:1;
        RBus_UInt32  write_en5:1;
        RBus_UInt32  dcc2_l:1;
        RBus_UInt32  write_en6:1;
        RBus_UInt32  res2:13;
    };
}tve_video_dac_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  up_ctrl_int1:2;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  res2:22;
    };
}tve_dac_mux_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rdelay:2;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  bdelay:2;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  ygdelay:2;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  res1:23;
    };
}tve_cmp_dly_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  out_control123:3;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  res2:6;
    };
}tve_dac_misc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  dac_value3:10;
        RBus_UInt32  res2:2;
    };
}tve_dac_misc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  enable:1;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  sel0:4;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  sel1:4;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  res1:20;
    };
}tve_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tve_dummy_0:32;
    };
}tve_dummy_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tve_dummy_1:32;
    };
}tve_dummy_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dac0_en:1;
        RBus_UInt32  dac1_en:1;
        RBus_UInt32  aio_dac_en:1;
        RBus_UInt32  res1:29;
    };
}tve_dac_test_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  int_hpos:13;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  int_vpos:11;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:6;
    };
}tve_intvbi_i_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  int_hpos:13;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  int_vpos:11;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:6;
    };
}tve_intvbi_p1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  int_hpos:13;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  int_vpos:11;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:6;
    };
}tve_intvbi_p2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  int_hpos:13;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  int_vpos:11;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:6;
    };
}tve_intvbi_h1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  int_hpos:13;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  int_vpos:11;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res1:6;
    };
}tve_intvbi_h2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c0:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  c1:14;
        RBus_UInt32  res2:2;
    };
}tve_dac4_fir_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c2:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  c3:14;
        RBus_UInt32  res2:2;
    };
}tve_dac4_fir_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  full_clr:1;
        RBus_UInt32  empty_clr:1;
        RBus_UInt32  tve_sim_cntl:1;
        RBus_UInt32  res1:29;
    };
}tve_dac4_fifo_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fifo_full:1;
        RBus_UInt32  fifo_empty:1;
        RBus_UInt32  avout_fifo_full:1;
        RBus_UInt32  avout_fifo_empty:1;
        RBus_UInt32  res1:28;
    };
}tve_dac4_fifo_read_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_16:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  coef_17:11;
        RBus_UInt32  res2:3;
        RBus_UInt32  avout_sel:1;
        RBus_UInt32  lpf_en:1;
    };
}tve_cvbs_lpf0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_14:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  coef_15:11;
        RBus_UInt32  res2:5;
    };
}tve_cvbs_lpf1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_12:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  coef_13:11;
        RBus_UInt32  res2:5;
    };
}tve_cvbs_lpf2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_10:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  coef_11:11;
        RBus_UInt32  res2:5;
    };
}tve_cvbs_lpf3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_8:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  coef_9:11;
        RBus_UInt32  res2:5;
    };
}tve_cvbs_lpf4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_6:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  coef_7:11;
        RBus_UInt32  res2:5;
    };
}tve_cvbs_lpf5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_4:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  coef_5:11;
        RBus_UInt32  res2:5;
    };
}tve_cvbs_lpf6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_2:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  coef_3:11;
        RBus_UInt32  res2:5;
    };
}tve_cvbs_lpf7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  avout_fifo_full_clr:1;
        RBus_UInt32  avout_fifo_empty_clr:1;
        RBus_UInt32  res1:14;
        RBus_UInt32  coef_1:11;
        RBus_UInt32  res2:5;
    };
}tve_cvbs_lpf8_RBUS;




#endif 


#endif 
