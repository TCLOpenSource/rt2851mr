/**
* @file Merlin5_MEMC_KMC_BI
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KMC_BI_REG_H_
#define _RBUS_KMC_BI_REG_H_

#include "rbus_types.h"



//  KMC_BI Register Address
#define  KMC_BI_bi_top_00                                                       0x1809F200
#define  KMC_BI_bi_top_00_reg_addr                                               "0xB809F200"
#define  KMC_BI_bi_top_00_reg                                                    0xB809F200
#define  KMC_BI_bi_top_00_inst_addr                                              "0x0000"
#define  set_KMC_BI_bi_top_00_reg(data)                                          (*((volatile unsigned int*)KMC_BI_bi_top_00_reg)=data)
#define  get_KMC_BI_bi_top_00_reg                                                (*((volatile unsigned int*)KMC_BI_bi_top_00_reg))
#define  KMC_BI_bi_top_00_bi_mv_fix_en_shift                                     (0)
#define  KMC_BI_bi_top_00_bi_mv_fix_en_mask                                      (0x00000001)
#define  KMC_BI_bi_top_00_bi_mv_fix_en(data)                                     (0x00000001&(data))
#define  KMC_BI_bi_top_00_get_bi_mv_fix_en(data)                                 (0x00000001&(data))

#define  KMC_BI_bi_top_01                                                       0x1809F204
#define  KMC_BI_bi_top_01_reg_addr                                               "0xB809F204"
#define  KMC_BI_bi_top_01_reg                                                    0xB809F204
#define  KMC_BI_bi_top_01_inst_addr                                              "0x0001"
#define  set_KMC_BI_bi_top_01_reg(data)                                          (*((volatile unsigned int*)KMC_BI_bi_top_01_reg)=data)
#define  get_KMC_BI_bi_top_01_reg                                                (*((volatile unsigned int*)KMC_BI_bi_top_01_reg))
#define  KMC_BI_bi_top_01_bi_fb_mode_shift                                       (2)
#define  KMC_BI_bi_top_01_bi_fb_statistics_en_shift                              (1)
#define  KMC_BI_bi_top_01_bi_fb_fix_en_shift                                     (0)
#define  KMC_BI_bi_top_01_bi_fb_mode_mask                                        (0x0000000C)
#define  KMC_BI_bi_top_01_bi_fb_statistics_en_mask                               (0x00000002)
#define  KMC_BI_bi_top_01_bi_fb_fix_en_mask                                      (0x00000001)
#define  KMC_BI_bi_top_01_bi_fb_mode(data)                                       (0x0000000C&((data)<<2))
#define  KMC_BI_bi_top_01_bi_fb_statistics_en(data)                              (0x00000002&((data)<<1))
#define  KMC_BI_bi_top_01_bi_fb_fix_en(data)                                     (0x00000001&(data))
#define  KMC_BI_bi_top_01_get_bi_fb_mode(data)                                   ((0x0000000C&(data))>>2)
#define  KMC_BI_bi_top_01_get_bi_fb_statistics_en(data)                          ((0x00000002&(data))>>1)
#define  KMC_BI_bi_top_01_get_bi_fb_fix_en(data)                                 (0x00000001&(data))

#define  KMC_BI_bi_top_d_buf                                                    0x1809F208
#define  KMC_BI_bi_top_d_buf_reg_addr                                            "0xB809F208"
#define  KMC_BI_bi_top_d_buf_reg                                                 0xB809F208
#define  KMC_BI_bi_top_d_buf_inst_addr                                           "0x0002"
#define  set_KMC_BI_bi_top_d_buf_reg(data)                                       (*((volatile unsigned int*)KMC_BI_bi_top_d_buf_reg)=data)
#define  get_KMC_BI_bi_top_d_buf_reg                                             (*((volatile unsigned int*)KMC_BI_bi_top_d_buf_reg))
#define  KMC_BI_bi_top_d_buf_bi_read_sel_shift                                   (31)
#define  KMC_BI_bi_top_d_buf_bi_double_apply1_shift                              (3)
#define  KMC_BI_bi_top_d_buf_bi_double_apply0_shift                              (2)
#define  KMC_BI_bi_top_d_buf_bi_double_en1_shift                                 (1)
#define  KMC_BI_bi_top_d_buf_bi_double_en0_shift                                 (0)
#define  KMC_BI_bi_top_d_buf_bi_read_sel_mask                                    (0x80000000)
#define  KMC_BI_bi_top_d_buf_bi_double_apply1_mask                               (0x00000008)
#define  KMC_BI_bi_top_d_buf_bi_double_apply0_mask                               (0x00000004)
#define  KMC_BI_bi_top_d_buf_bi_double_en1_mask                                  (0x00000002)
#define  KMC_BI_bi_top_d_buf_bi_double_en0_mask                                  (0x00000001)
#define  KMC_BI_bi_top_d_buf_bi_read_sel(data)                                   (0x80000000&((data)<<31))
#define  KMC_BI_bi_top_d_buf_bi_double_apply1(data)                              (0x00000008&((data)<<3))
#define  KMC_BI_bi_top_d_buf_bi_double_apply0(data)                              (0x00000004&((data)<<2))
#define  KMC_BI_bi_top_d_buf_bi_double_en1(data)                                 (0x00000002&((data)<<1))
#define  KMC_BI_bi_top_d_buf_bi_double_en0(data)                                 (0x00000001&(data))
#define  KMC_BI_bi_top_d_buf_get_bi_read_sel(data)                               ((0x80000000&(data))>>31)
#define  KMC_BI_bi_top_d_buf_get_bi_double_apply1(data)                          ((0x00000008&(data))>>3)
#define  KMC_BI_bi_top_d_buf_get_bi_double_apply0(data)                          ((0x00000004&(data))>>2)
#define  KMC_BI_bi_top_d_buf_get_bi_double_en1(data)                             ((0x00000002&(data))>>1)
#define  KMC_BI_bi_top_d_buf_get_bi_double_en0(data)                             (0x00000001&(data))

#define  KMC_BI_bi_size_ctrl                                                    0x1809F20C
#define  KMC_BI_bi_size_ctrl_reg_addr                                            "0xB809F20C"
#define  KMC_BI_bi_size_ctrl_reg                                                 0xB809F20C
#define  KMC_BI_bi_size_ctrl_inst_addr                                           "0x0003"
#define  set_KMC_BI_bi_size_ctrl_reg(data)                                       (*((volatile unsigned int*)KMC_BI_bi_size_ctrl_reg)=data)
#define  get_KMC_BI_bi_size_ctrl_reg                                             (*((volatile unsigned int*)KMC_BI_bi_size_ctrl_reg))
#define  KMC_BI_bi_size_ctrl_bi_blk_res_sel_shift                                (0)
#define  KMC_BI_bi_size_ctrl_bi_blk_res_sel_mask                                 (0x00000001)
#define  KMC_BI_bi_size_ctrl_bi_blk_res_sel(data)                                (0x00000001&(data))
#define  KMC_BI_bi_size_ctrl_get_bi_blk_res_sel(data)                            (0x00000001&(data))

#define  KMC_BI_bi_rmv11                                                        0x1809F214
#define  KMC_BI_bi_rmv11_reg_addr                                                "0xB809F214"
#define  KMC_BI_bi_rmv11_reg                                                     0xB809F214
#define  KMC_BI_bi_rmv11_inst_addr                                               "0x0004"
#define  set_KMC_BI_bi_rmv11_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv11_reg)=data)
#define  get_KMC_BI_bi_rmv11_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv11_reg))
#define  KMC_BI_bi_rmv11_bi_rmv11_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv11_bi_rmv11_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv11_bi_rmv11_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv11_bi_rmv11_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv11_bi_rmv11_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv11_bi_rmv11_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv11_get_bi_rmv11_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv11_get_bi_rmv11_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv12                                                        0x1809F218
#define  KMC_BI_bi_rmv12_reg_addr                                                "0xB809F218"
#define  KMC_BI_bi_rmv12_reg                                                     0xB809F218
#define  KMC_BI_bi_rmv12_inst_addr                                               "0x0005"
#define  set_KMC_BI_bi_rmv12_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv12_reg)=data)
#define  get_KMC_BI_bi_rmv12_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv12_reg))
#define  KMC_BI_bi_rmv12_bi_rmv12_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv12_bi_rmv12_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv12_bi_rmv12_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv12_bi_rmv12_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv12_bi_rmv12_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv12_bi_rmv12_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv12_get_bi_rmv12_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv12_get_bi_rmv12_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv13                                                        0x1809F21C
#define  KMC_BI_bi_rmv13_reg_addr                                                "0xB809F21C"
#define  KMC_BI_bi_rmv13_reg                                                     0xB809F21C
#define  KMC_BI_bi_rmv13_inst_addr                                               "0x0006"
#define  set_KMC_BI_bi_rmv13_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv13_reg)=data)
#define  get_KMC_BI_bi_rmv13_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv13_reg))
#define  KMC_BI_bi_rmv13_bi_rmv13_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv13_bi_rmv13_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv13_bi_rmv13_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv13_bi_rmv13_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv13_bi_rmv13_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv13_bi_rmv13_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv13_get_bi_rmv13_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv13_get_bi_rmv13_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv14                                                        0x1809F220
#define  KMC_BI_bi_rmv14_reg_addr                                                "0xB809F220"
#define  KMC_BI_bi_rmv14_reg                                                     0xB809F220
#define  KMC_BI_bi_rmv14_inst_addr                                               "0x0007"
#define  set_KMC_BI_bi_rmv14_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv14_reg)=data)
#define  get_KMC_BI_bi_rmv14_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv14_reg))
#define  KMC_BI_bi_rmv14_bi_rmv14_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv14_bi_rmv14_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv14_bi_rmv14_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv14_bi_rmv14_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv14_bi_rmv14_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv14_bi_rmv14_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv14_get_bi_rmv14_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv14_get_bi_rmv14_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv15                                                        0x1809F224
#define  KMC_BI_bi_rmv15_reg_addr                                                "0xB809F224"
#define  KMC_BI_bi_rmv15_reg                                                     0xB809F224
#define  KMC_BI_bi_rmv15_inst_addr                                               "0x0008"
#define  set_KMC_BI_bi_rmv15_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv15_reg)=data)
#define  get_KMC_BI_bi_rmv15_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv15_reg))
#define  KMC_BI_bi_rmv15_bi_rmv15_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv15_bi_rmv15_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv15_bi_rmv15_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv15_bi_rmv15_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv15_bi_rmv15_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv15_bi_rmv15_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv15_get_bi_rmv15_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv15_get_bi_rmv15_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv16                                                        0x1809F228
#define  KMC_BI_bi_rmv16_reg_addr                                                "0xB809F228"
#define  KMC_BI_bi_rmv16_reg                                                     0xB809F228
#define  KMC_BI_bi_rmv16_inst_addr                                               "0x0009"
#define  set_KMC_BI_bi_rmv16_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv16_reg)=data)
#define  get_KMC_BI_bi_rmv16_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv16_reg))
#define  KMC_BI_bi_rmv16_bi_rmv16_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv16_bi_rmv16_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv16_bi_rmv16_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv16_bi_rmv16_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv16_bi_rmv16_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv16_bi_rmv16_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv16_get_bi_rmv16_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv16_get_bi_rmv16_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv17                                                        0x1809F22C
#define  KMC_BI_bi_rmv17_reg_addr                                                "0xB809F22C"
#define  KMC_BI_bi_rmv17_reg                                                     0xB809F22C
#define  KMC_BI_bi_rmv17_inst_addr                                               "0x000A"
#define  set_KMC_BI_bi_rmv17_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv17_reg)=data)
#define  get_KMC_BI_bi_rmv17_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv17_reg))
#define  KMC_BI_bi_rmv17_bi_rmv17_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv17_bi_rmv17_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv17_bi_rmv17_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv17_bi_rmv17_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv17_bi_rmv17_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv17_bi_rmv17_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv17_get_bi_rmv17_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv17_get_bi_rmv17_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv18                                                        0x1809F230
#define  KMC_BI_bi_rmv18_reg_addr                                                "0xB809F230"
#define  KMC_BI_bi_rmv18_reg                                                     0xB809F230
#define  KMC_BI_bi_rmv18_inst_addr                                               "0x000B"
#define  set_KMC_BI_bi_rmv18_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv18_reg)=data)
#define  get_KMC_BI_bi_rmv18_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv18_reg))
#define  KMC_BI_bi_rmv18_bi_rmv18_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv18_bi_rmv18_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv18_bi_rmv18_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv18_bi_rmv18_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv18_bi_rmv18_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv18_bi_rmv18_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv18_get_bi_rmv18_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv18_get_bi_rmv18_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv21                                                        0x1809F234
#define  KMC_BI_bi_rmv21_reg_addr                                                "0xB809F234"
#define  KMC_BI_bi_rmv21_reg                                                     0xB809F234
#define  KMC_BI_bi_rmv21_inst_addr                                               "0x000C"
#define  set_KMC_BI_bi_rmv21_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv21_reg)=data)
#define  get_KMC_BI_bi_rmv21_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv21_reg))
#define  KMC_BI_bi_rmv21_bi_rmv21_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv21_bi_rmv21_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv21_bi_rmv21_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv21_bi_rmv21_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv21_bi_rmv21_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv21_bi_rmv21_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv21_get_bi_rmv21_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv21_get_bi_rmv21_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv22                                                        0x1809F238
#define  KMC_BI_bi_rmv22_reg_addr                                                "0xB809F238"
#define  KMC_BI_bi_rmv22_reg                                                     0xB809F238
#define  KMC_BI_bi_rmv22_inst_addr                                               "0x000D"
#define  set_KMC_BI_bi_rmv22_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv22_reg)=data)
#define  get_KMC_BI_bi_rmv22_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv22_reg))
#define  KMC_BI_bi_rmv22_bi_rmv22_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv22_bi_rmv22_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv22_bi_rmv22_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv22_bi_rmv22_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv22_bi_rmv22_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv22_bi_rmv22_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv22_get_bi_rmv22_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv22_get_bi_rmv22_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv23                                                        0x1809F23C
#define  KMC_BI_bi_rmv23_reg_addr                                                "0xB809F23C"
#define  KMC_BI_bi_rmv23_reg                                                     0xB809F23C
#define  KMC_BI_bi_rmv23_inst_addr                                               "0x000E"
#define  set_KMC_BI_bi_rmv23_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv23_reg)=data)
#define  get_KMC_BI_bi_rmv23_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv23_reg))
#define  KMC_BI_bi_rmv23_bi_rmv23_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv23_bi_rmv23_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv23_bi_rmv23_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv23_bi_rmv23_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv23_bi_rmv23_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv23_bi_rmv23_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv23_get_bi_rmv23_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv23_get_bi_rmv23_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv24                                                        0x1809F240
#define  KMC_BI_bi_rmv24_reg_addr                                                "0xB809F240"
#define  KMC_BI_bi_rmv24_reg                                                     0xB809F240
#define  KMC_BI_bi_rmv24_inst_addr                                               "0x000F"
#define  set_KMC_BI_bi_rmv24_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv24_reg)=data)
#define  get_KMC_BI_bi_rmv24_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv24_reg))
#define  KMC_BI_bi_rmv24_bi_rmv24_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv24_bi_rmv24_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv24_bi_rmv24_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv24_bi_rmv24_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv24_bi_rmv24_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv24_bi_rmv24_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv24_get_bi_rmv24_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv24_get_bi_rmv24_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv25                                                        0x1809F244
#define  KMC_BI_bi_rmv25_reg_addr                                                "0xB809F244"
#define  KMC_BI_bi_rmv25_reg                                                     0xB809F244
#define  KMC_BI_bi_rmv25_inst_addr                                               "0x0010"
#define  set_KMC_BI_bi_rmv25_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv25_reg)=data)
#define  get_KMC_BI_bi_rmv25_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv25_reg))
#define  KMC_BI_bi_rmv25_bi_rmv25_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv25_bi_rmv25_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv25_bi_rmv25_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv25_bi_rmv25_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv25_bi_rmv25_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv25_bi_rmv25_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv25_get_bi_rmv25_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv25_get_bi_rmv25_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv26                                                        0x1809F248
#define  KMC_BI_bi_rmv26_reg_addr                                                "0xB809F248"
#define  KMC_BI_bi_rmv26_reg                                                     0xB809F248
#define  KMC_BI_bi_rmv26_inst_addr                                               "0x0011"
#define  set_KMC_BI_bi_rmv26_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv26_reg)=data)
#define  get_KMC_BI_bi_rmv26_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv26_reg))
#define  KMC_BI_bi_rmv26_bi_rmv26_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv26_bi_rmv26_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv26_bi_rmv26_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv26_bi_rmv26_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv26_bi_rmv26_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv26_bi_rmv26_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv26_get_bi_rmv26_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv26_get_bi_rmv26_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv27                                                        0x1809F24C
#define  KMC_BI_bi_rmv27_reg_addr                                                "0xB809F24C"
#define  KMC_BI_bi_rmv27_reg                                                     0xB809F24C
#define  KMC_BI_bi_rmv27_inst_addr                                               "0x0012"
#define  set_KMC_BI_bi_rmv27_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv27_reg)=data)
#define  get_KMC_BI_bi_rmv27_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv27_reg))
#define  KMC_BI_bi_rmv27_bi_rmv27_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv27_bi_rmv27_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv27_bi_rmv27_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv27_bi_rmv27_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv27_bi_rmv27_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv27_bi_rmv27_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv27_get_bi_rmv27_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv27_get_bi_rmv27_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv28                                                        0x1809F250
#define  KMC_BI_bi_rmv28_reg_addr                                                "0xB809F250"
#define  KMC_BI_bi_rmv28_reg                                                     0xB809F250
#define  KMC_BI_bi_rmv28_inst_addr                                               "0x0013"
#define  set_KMC_BI_bi_rmv28_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv28_reg)=data)
#define  get_KMC_BI_bi_rmv28_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv28_reg))
#define  KMC_BI_bi_rmv28_bi_rmv28_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv28_bi_rmv28_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv28_bi_rmv28_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv28_bi_rmv28_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv28_bi_rmv28_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv28_bi_rmv28_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv28_get_bi_rmv28_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv28_get_bi_rmv28_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv31                                                        0x1809F254
#define  KMC_BI_bi_rmv31_reg_addr                                                "0xB809F254"
#define  KMC_BI_bi_rmv31_reg                                                     0xB809F254
#define  KMC_BI_bi_rmv31_inst_addr                                               "0x0014"
#define  set_KMC_BI_bi_rmv31_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv31_reg)=data)
#define  get_KMC_BI_bi_rmv31_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv31_reg))
#define  KMC_BI_bi_rmv31_bi_rmv31_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv31_bi_rmv31_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv31_bi_rmv31_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv31_bi_rmv31_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv31_bi_rmv31_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv31_bi_rmv31_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv31_get_bi_rmv31_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv31_get_bi_rmv31_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv32                                                        0x1809F258
#define  KMC_BI_bi_rmv32_reg_addr                                                "0xB809F258"
#define  KMC_BI_bi_rmv32_reg                                                     0xB809F258
#define  KMC_BI_bi_rmv32_inst_addr                                               "0x0015"
#define  set_KMC_BI_bi_rmv32_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv32_reg)=data)
#define  get_KMC_BI_bi_rmv32_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv32_reg))
#define  KMC_BI_bi_rmv32_bi_rmv32_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv32_bi_rmv32_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv32_bi_rmv32_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv32_bi_rmv32_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv32_bi_rmv32_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv32_bi_rmv32_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv32_get_bi_rmv32_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv32_get_bi_rmv32_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv33                                                        0x1809F25C
#define  KMC_BI_bi_rmv33_reg_addr                                                "0xB809F25C"
#define  KMC_BI_bi_rmv33_reg                                                     0xB809F25C
#define  KMC_BI_bi_rmv33_inst_addr                                               "0x0016"
#define  set_KMC_BI_bi_rmv33_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv33_reg)=data)
#define  get_KMC_BI_bi_rmv33_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv33_reg))
#define  KMC_BI_bi_rmv33_bi_rmv33_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv33_bi_rmv33_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv33_bi_rmv33_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv33_bi_rmv33_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv33_bi_rmv33_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv33_bi_rmv33_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv33_get_bi_rmv33_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv33_get_bi_rmv33_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv34                                                        0x1809F260
#define  KMC_BI_bi_rmv34_reg_addr                                                "0xB809F260"
#define  KMC_BI_bi_rmv34_reg                                                     0xB809F260
#define  KMC_BI_bi_rmv34_inst_addr                                               "0x0017"
#define  set_KMC_BI_bi_rmv34_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv34_reg)=data)
#define  get_KMC_BI_bi_rmv34_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv34_reg))
#define  KMC_BI_bi_rmv34_bi_rmv34_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv34_bi_rmv34_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv34_bi_rmv34_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv34_bi_rmv34_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv34_bi_rmv34_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv34_bi_rmv34_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv34_get_bi_rmv34_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv34_get_bi_rmv34_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv35                                                        0x1809F264
#define  KMC_BI_bi_rmv35_reg_addr                                                "0xB809F264"
#define  KMC_BI_bi_rmv35_reg                                                     0xB809F264
#define  KMC_BI_bi_rmv35_inst_addr                                               "0x0018"
#define  set_KMC_BI_bi_rmv35_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv35_reg)=data)
#define  get_KMC_BI_bi_rmv35_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv35_reg))
#define  KMC_BI_bi_rmv35_bi_rmv35_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv35_bi_rmv35_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv35_bi_rmv35_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv35_bi_rmv35_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv35_bi_rmv35_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv35_bi_rmv35_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv35_get_bi_rmv35_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv35_get_bi_rmv35_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv36                                                        0x1809F268
#define  KMC_BI_bi_rmv36_reg_addr                                                "0xB809F268"
#define  KMC_BI_bi_rmv36_reg                                                     0xB809F268
#define  KMC_BI_bi_rmv36_inst_addr                                               "0x0019"
#define  set_KMC_BI_bi_rmv36_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv36_reg)=data)
#define  get_KMC_BI_bi_rmv36_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv36_reg))
#define  KMC_BI_bi_rmv36_bi_rmv36_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv36_bi_rmv36_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv36_bi_rmv36_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv36_bi_rmv36_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv36_bi_rmv36_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv36_bi_rmv36_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv36_get_bi_rmv36_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv36_get_bi_rmv36_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv37                                                        0x1809F26C
#define  KMC_BI_bi_rmv37_reg_addr                                                "0xB809F26C"
#define  KMC_BI_bi_rmv37_reg                                                     0xB809F26C
#define  KMC_BI_bi_rmv37_inst_addr                                               "0x001A"
#define  set_KMC_BI_bi_rmv37_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv37_reg)=data)
#define  get_KMC_BI_bi_rmv37_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv37_reg))
#define  KMC_BI_bi_rmv37_bi_rmv37_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv37_bi_rmv37_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv37_bi_rmv37_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv37_bi_rmv37_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv37_bi_rmv37_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv37_bi_rmv37_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv37_get_bi_rmv37_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv37_get_bi_rmv37_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv38                                                        0x1809F270
#define  KMC_BI_bi_rmv38_reg_addr                                                "0xB809F270"
#define  KMC_BI_bi_rmv38_reg                                                     0xB809F270
#define  KMC_BI_bi_rmv38_inst_addr                                               "0x001B"
#define  set_KMC_BI_bi_rmv38_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv38_reg)=data)
#define  get_KMC_BI_bi_rmv38_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv38_reg))
#define  KMC_BI_bi_rmv38_bi_rmv38_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv38_bi_rmv38_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv38_bi_rmv38_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv38_bi_rmv38_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv38_bi_rmv38_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv38_bi_rmv38_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv38_get_bi_rmv38_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv38_get_bi_rmv38_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv41                                                        0x1809F274
#define  KMC_BI_bi_rmv41_reg_addr                                                "0xB809F274"
#define  KMC_BI_bi_rmv41_reg                                                     0xB809F274
#define  KMC_BI_bi_rmv41_inst_addr                                               "0x001C"
#define  set_KMC_BI_bi_rmv41_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv41_reg)=data)
#define  get_KMC_BI_bi_rmv41_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv41_reg))
#define  KMC_BI_bi_rmv41_bi_rmv41_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv41_bi_rmv41_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv41_bi_rmv41_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv41_bi_rmv41_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv41_bi_rmv41_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv41_bi_rmv41_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv41_get_bi_rmv41_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv41_get_bi_rmv41_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv42                                                        0x1809F278
#define  KMC_BI_bi_rmv42_reg_addr                                                "0xB809F278"
#define  KMC_BI_bi_rmv42_reg                                                     0xB809F278
#define  KMC_BI_bi_rmv42_inst_addr                                               "0x001D"
#define  set_KMC_BI_bi_rmv42_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv42_reg)=data)
#define  get_KMC_BI_bi_rmv42_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv42_reg))
#define  KMC_BI_bi_rmv42_bi_rmv42_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv42_bi_rmv42_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv42_bi_rmv42_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv42_bi_rmv42_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv42_bi_rmv42_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv42_bi_rmv42_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv42_get_bi_rmv42_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv42_get_bi_rmv42_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv43                                                        0x1809F27C
#define  KMC_BI_bi_rmv43_reg_addr                                                "0xB809F27C"
#define  KMC_BI_bi_rmv43_reg                                                     0xB809F27C
#define  KMC_BI_bi_rmv43_inst_addr                                               "0x001E"
#define  set_KMC_BI_bi_rmv43_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv43_reg)=data)
#define  get_KMC_BI_bi_rmv43_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv43_reg))
#define  KMC_BI_bi_rmv43_bi_rmv43_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv43_bi_rmv43_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv43_bi_rmv43_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv43_bi_rmv43_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv43_bi_rmv43_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv43_bi_rmv43_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv43_get_bi_rmv43_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv43_get_bi_rmv43_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv44                                                        0x1809F280
#define  KMC_BI_bi_rmv44_reg_addr                                                "0xB809F280"
#define  KMC_BI_bi_rmv44_reg                                                     0xB809F280
#define  KMC_BI_bi_rmv44_inst_addr                                               "0x001F"
#define  set_KMC_BI_bi_rmv44_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv44_reg)=data)
#define  get_KMC_BI_bi_rmv44_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv44_reg))
#define  KMC_BI_bi_rmv44_bi_rmv44_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv44_bi_rmv44_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv44_bi_rmv44_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv44_bi_rmv44_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv44_bi_rmv44_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv44_bi_rmv44_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv44_get_bi_rmv44_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv44_get_bi_rmv44_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv45                                                        0x1809F284
#define  KMC_BI_bi_rmv45_reg_addr                                                "0xB809F284"
#define  KMC_BI_bi_rmv45_reg                                                     0xB809F284
#define  KMC_BI_bi_rmv45_inst_addr                                               "0x0020"
#define  set_KMC_BI_bi_rmv45_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv45_reg)=data)
#define  get_KMC_BI_bi_rmv45_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv45_reg))
#define  KMC_BI_bi_rmv45_bi_rmv45_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv45_bi_rmv45_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv45_bi_rmv45_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv45_bi_rmv45_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv45_bi_rmv45_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv45_bi_rmv45_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv45_get_bi_rmv45_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv45_get_bi_rmv45_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv46                                                        0x1809F288
#define  KMC_BI_bi_rmv46_reg_addr                                                "0xB809F288"
#define  KMC_BI_bi_rmv46_reg                                                     0xB809F288
#define  KMC_BI_bi_rmv46_inst_addr                                               "0x0021"
#define  set_KMC_BI_bi_rmv46_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv46_reg)=data)
#define  get_KMC_BI_bi_rmv46_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv46_reg))
#define  KMC_BI_bi_rmv46_bi_rmv46_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv46_bi_rmv46_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv46_bi_rmv46_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv46_bi_rmv46_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv46_bi_rmv46_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv46_bi_rmv46_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv46_get_bi_rmv46_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv46_get_bi_rmv46_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv47                                                        0x1809F28C
#define  KMC_BI_bi_rmv47_reg_addr                                                "0xB809F28C"
#define  KMC_BI_bi_rmv47_reg                                                     0xB809F28C
#define  KMC_BI_bi_rmv47_inst_addr                                               "0x0022"
#define  set_KMC_BI_bi_rmv47_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv47_reg)=data)
#define  get_KMC_BI_bi_rmv47_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv47_reg))
#define  KMC_BI_bi_rmv47_bi_rmv47_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv47_bi_rmv47_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv47_bi_rmv47_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv47_bi_rmv47_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv47_bi_rmv47_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv47_bi_rmv47_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv47_get_bi_rmv47_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv47_get_bi_rmv47_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_rmv48                                                        0x1809F290
#define  KMC_BI_bi_rmv48_reg_addr                                                "0xB809F290"
#define  KMC_BI_bi_rmv48_reg                                                     0xB809F290
#define  KMC_BI_bi_rmv48_inst_addr                                               "0x0023"
#define  set_KMC_BI_bi_rmv48_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_rmv48_reg)=data)
#define  get_KMC_BI_bi_rmv48_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_rmv48_reg))
#define  KMC_BI_bi_rmv48_bi_rmv48_mvy_shift                                      (11)
#define  KMC_BI_bi_rmv48_bi_rmv48_mvx_shift                                      (0)
#define  KMC_BI_bi_rmv48_bi_rmv48_mvy_mask                                       (0x001FF800)
#define  KMC_BI_bi_rmv48_bi_rmv48_mvx_mask                                       (0x000007FF)
#define  KMC_BI_bi_rmv48_bi_rmv48_mvy(data)                                      (0x001FF800&((data)<<11))
#define  KMC_BI_bi_rmv48_bi_rmv48_mvx(data)                                      (0x000007FF&(data))
#define  KMC_BI_bi_rmv48_get_bi_rmv48_mvy(data)                                  ((0x001FF800&(data))>>11)
#define  KMC_BI_bi_rmv48_get_bi_rmv48_mvx(data)                                  (0x000007FF&(data))

#define  KMC_BI_bi_beta_00                                                      0x1809F298
#define  KMC_BI_bi_beta_00_reg_addr                                              "0xB809F298"
#define  KMC_BI_bi_beta_00_reg                                                   0xB809F298
#define  KMC_BI_bi_beta_00_inst_addr                                             "0x0024"
#define  set_KMC_BI_bi_beta_00_reg(data)                                         (*((volatile unsigned int*)KMC_BI_bi_beta_00_reg)=data)
#define  get_KMC_BI_bi_beta_00_reg                                               (*((volatile unsigned int*)KMC_BI_bi_beta_00_reg))
#define  KMC_BI_bi_beta_00_bi_beta_14_shift                                      (24)
#define  KMC_BI_bi_beta_00_bi_beta_13_shift                                      (16)
#define  KMC_BI_bi_beta_00_bi_beta_12_shift                                      (8)
#define  KMC_BI_bi_beta_00_bi_beta_11_shift                                      (0)
#define  KMC_BI_bi_beta_00_bi_beta_14_mask                                       (0xFF000000)
#define  KMC_BI_bi_beta_00_bi_beta_13_mask                                       (0x00FF0000)
#define  KMC_BI_bi_beta_00_bi_beta_12_mask                                       (0x0000FF00)
#define  KMC_BI_bi_beta_00_bi_beta_11_mask                                       (0x000000FF)
#define  KMC_BI_bi_beta_00_bi_beta_14(data)                                      (0xFF000000&((data)<<24))
#define  KMC_BI_bi_beta_00_bi_beta_13(data)                                      (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_beta_00_bi_beta_12(data)                                      (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_beta_00_bi_beta_11(data)                                      (0x000000FF&(data))
#define  KMC_BI_bi_beta_00_get_bi_beta_14(data)                                  ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_beta_00_get_bi_beta_13(data)                                  ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_beta_00_get_bi_beta_12(data)                                  ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_beta_00_get_bi_beta_11(data)                                  (0x000000FF&(data))

#define  KMC_BI_bi_beta_01                                                      0x1809F29C
#define  KMC_BI_bi_beta_01_reg_addr                                              "0xB809F29C"
#define  KMC_BI_bi_beta_01_reg                                                   0xB809F29C
#define  KMC_BI_bi_beta_01_inst_addr                                             "0x0025"
#define  set_KMC_BI_bi_beta_01_reg(data)                                         (*((volatile unsigned int*)KMC_BI_bi_beta_01_reg)=data)
#define  get_KMC_BI_bi_beta_01_reg                                               (*((volatile unsigned int*)KMC_BI_bi_beta_01_reg))
#define  KMC_BI_bi_beta_01_bi_beta_18_shift                                      (24)
#define  KMC_BI_bi_beta_01_bi_beta_17_shift                                      (16)
#define  KMC_BI_bi_beta_01_bi_beta_16_shift                                      (8)
#define  KMC_BI_bi_beta_01_bi_beta_15_shift                                      (0)
#define  KMC_BI_bi_beta_01_bi_beta_18_mask                                       (0xFF000000)
#define  KMC_BI_bi_beta_01_bi_beta_17_mask                                       (0x00FF0000)
#define  KMC_BI_bi_beta_01_bi_beta_16_mask                                       (0x0000FF00)
#define  KMC_BI_bi_beta_01_bi_beta_15_mask                                       (0x000000FF)
#define  KMC_BI_bi_beta_01_bi_beta_18(data)                                      (0xFF000000&((data)<<24))
#define  KMC_BI_bi_beta_01_bi_beta_17(data)                                      (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_beta_01_bi_beta_16(data)                                      (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_beta_01_bi_beta_15(data)                                      (0x000000FF&(data))
#define  KMC_BI_bi_beta_01_get_bi_beta_18(data)                                  ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_beta_01_get_bi_beta_17(data)                                  ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_beta_01_get_bi_beta_16(data)                                  ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_beta_01_get_bi_beta_15(data)                                  (0x000000FF&(data))

#define  KMC_BI_bi_beta_02                                                      0x1809F2A0
#define  KMC_BI_bi_beta_02_reg_addr                                              "0xB809F2A0"
#define  KMC_BI_bi_beta_02_reg                                                   0xB809F2A0
#define  KMC_BI_bi_beta_02_inst_addr                                             "0x0026"
#define  set_KMC_BI_bi_beta_02_reg(data)                                         (*((volatile unsigned int*)KMC_BI_bi_beta_02_reg)=data)
#define  get_KMC_BI_bi_beta_02_reg                                               (*((volatile unsigned int*)KMC_BI_bi_beta_02_reg))
#define  KMC_BI_bi_beta_02_bi_beta_24_shift                                      (24)
#define  KMC_BI_bi_beta_02_bi_beta_23_shift                                      (16)
#define  KMC_BI_bi_beta_02_bi_beta_22_shift                                      (8)
#define  KMC_BI_bi_beta_02_bi_beta_21_shift                                      (0)
#define  KMC_BI_bi_beta_02_bi_beta_24_mask                                       (0xFF000000)
#define  KMC_BI_bi_beta_02_bi_beta_23_mask                                       (0x00FF0000)
#define  KMC_BI_bi_beta_02_bi_beta_22_mask                                       (0x0000FF00)
#define  KMC_BI_bi_beta_02_bi_beta_21_mask                                       (0x000000FF)
#define  KMC_BI_bi_beta_02_bi_beta_24(data)                                      (0xFF000000&((data)<<24))
#define  KMC_BI_bi_beta_02_bi_beta_23(data)                                      (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_beta_02_bi_beta_22(data)                                      (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_beta_02_bi_beta_21(data)                                      (0x000000FF&(data))
#define  KMC_BI_bi_beta_02_get_bi_beta_24(data)                                  ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_beta_02_get_bi_beta_23(data)                                  ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_beta_02_get_bi_beta_22(data)                                  ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_beta_02_get_bi_beta_21(data)                                  (0x000000FF&(data))

#define  KMC_BI_bi_beta_03                                                      0x1809F2A4
#define  KMC_BI_bi_beta_03_reg_addr                                              "0xB809F2A4"
#define  KMC_BI_bi_beta_03_reg                                                   0xB809F2A4
#define  KMC_BI_bi_beta_03_inst_addr                                             "0x0027"
#define  set_KMC_BI_bi_beta_03_reg(data)                                         (*((volatile unsigned int*)KMC_BI_bi_beta_03_reg)=data)
#define  get_KMC_BI_bi_beta_03_reg                                               (*((volatile unsigned int*)KMC_BI_bi_beta_03_reg))
#define  KMC_BI_bi_beta_03_bi_beta_28_shift                                      (24)
#define  KMC_BI_bi_beta_03_bi_beta_27_shift                                      (16)
#define  KMC_BI_bi_beta_03_bi_beta_26_shift                                      (8)
#define  KMC_BI_bi_beta_03_bi_beta_25_shift                                      (0)
#define  KMC_BI_bi_beta_03_bi_beta_28_mask                                       (0xFF000000)
#define  KMC_BI_bi_beta_03_bi_beta_27_mask                                       (0x00FF0000)
#define  KMC_BI_bi_beta_03_bi_beta_26_mask                                       (0x0000FF00)
#define  KMC_BI_bi_beta_03_bi_beta_25_mask                                       (0x000000FF)
#define  KMC_BI_bi_beta_03_bi_beta_28(data)                                      (0xFF000000&((data)<<24))
#define  KMC_BI_bi_beta_03_bi_beta_27(data)                                      (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_beta_03_bi_beta_26(data)                                      (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_beta_03_bi_beta_25(data)                                      (0x000000FF&(data))
#define  KMC_BI_bi_beta_03_get_bi_beta_28(data)                                  ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_beta_03_get_bi_beta_27(data)                                  ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_beta_03_get_bi_beta_26(data)                                  ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_beta_03_get_bi_beta_25(data)                                  (0x000000FF&(data))

#define  KMC_BI_bi_beta_04                                                      0x1809F2A8
#define  KMC_BI_bi_beta_04_reg_addr                                              "0xB809F2A8"
#define  KMC_BI_bi_beta_04_reg                                                   0xB809F2A8
#define  KMC_BI_bi_beta_04_inst_addr                                             "0x0028"
#define  set_KMC_BI_bi_beta_04_reg(data)                                         (*((volatile unsigned int*)KMC_BI_bi_beta_04_reg)=data)
#define  get_KMC_BI_bi_beta_04_reg                                               (*((volatile unsigned int*)KMC_BI_bi_beta_04_reg))
#define  KMC_BI_bi_beta_04_bi_beta_34_shift                                      (24)
#define  KMC_BI_bi_beta_04_bi_beta_33_shift                                      (16)
#define  KMC_BI_bi_beta_04_bi_beta_32_shift                                      (8)
#define  KMC_BI_bi_beta_04_bi_beta_31_shift                                      (0)
#define  KMC_BI_bi_beta_04_bi_beta_34_mask                                       (0xFF000000)
#define  KMC_BI_bi_beta_04_bi_beta_33_mask                                       (0x00FF0000)
#define  KMC_BI_bi_beta_04_bi_beta_32_mask                                       (0x0000FF00)
#define  KMC_BI_bi_beta_04_bi_beta_31_mask                                       (0x000000FF)
#define  KMC_BI_bi_beta_04_bi_beta_34(data)                                      (0xFF000000&((data)<<24))
#define  KMC_BI_bi_beta_04_bi_beta_33(data)                                      (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_beta_04_bi_beta_32(data)                                      (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_beta_04_bi_beta_31(data)                                      (0x000000FF&(data))
#define  KMC_BI_bi_beta_04_get_bi_beta_34(data)                                  ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_beta_04_get_bi_beta_33(data)                                  ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_beta_04_get_bi_beta_32(data)                                  ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_beta_04_get_bi_beta_31(data)                                  (0x000000FF&(data))

#define  KMC_BI_bi_beta_05                                                      0x1809F2AC
#define  KMC_BI_bi_beta_05_reg_addr                                              "0xB809F2AC"
#define  KMC_BI_bi_beta_05_reg                                                   0xB809F2AC
#define  KMC_BI_bi_beta_05_inst_addr                                             "0x0029"
#define  set_KMC_BI_bi_beta_05_reg(data)                                         (*((volatile unsigned int*)KMC_BI_bi_beta_05_reg)=data)
#define  get_KMC_BI_bi_beta_05_reg                                               (*((volatile unsigned int*)KMC_BI_bi_beta_05_reg))
#define  KMC_BI_bi_beta_05_bi_beta_38_shift                                      (24)
#define  KMC_BI_bi_beta_05_bi_beta_37_shift                                      (16)
#define  KMC_BI_bi_beta_05_bi_beta_36_shift                                      (8)
#define  KMC_BI_bi_beta_05_bi_beta_35_shift                                      (0)
#define  KMC_BI_bi_beta_05_bi_beta_38_mask                                       (0xFF000000)
#define  KMC_BI_bi_beta_05_bi_beta_37_mask                                       (0x00FF0000)
#define  KMC_BI_bi_beta_05_bi_beta_36_mask                                       (0x0000FF00)
#define  KMC_BI_bi_beta_05_bi_beta_35_mask                                       (0x000000FF)
#define  KMC_BI_bi_beta_05_bi_beta_38(data)                                      (0xFF000000&((data)<<24))
#define  KMC_BI_bi_beta_05_bi_beta_37(data)                                      (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_beta_05_bi_beta_36(data)                                      (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_beta_05_bi_beta_35(data)                                      (0x000000FF&(data))
#define  KMC_BI_bi_beta_05_get_bi_beta_38(data)                                  ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_beta_05_get_bi_beta_37(data)                                  ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_beta_05_get_bi_beta_36(data)                                  ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_beta_05_get_bi_beta_35(data)                                  (0x000000FF&(data))

#define  KMC_BI_bi_beta_06                                                      0x1809F2B0
#define  KMC_BI_bi_beta_06_reg_addr                                              "0xB809F2B0"
#define  KMC_BI_bi_beta_06_reg                                                   0xB809F2B0
#define  KMC_BI_bi_beta_06_inst_addr                                             "0x002A"
#define  set_KMC_BI_bi_beta_06_reg(data)                                         (*((volatile unsigned int*)KMC_BI_bi_beta_06_reg)=data)
#define  get_KMC_BI_bi_beta_06_reg                                               (*((volatile unsigned int*)KMC_BI_bi_beta_06_reg))
#define  KMC_BI_bi_beta_06_bi_beta_44_shift                                      (24)
#define  KMC_BI_bi_beta_06_bi_beta_43_shift                                      (16)
#define  KMC_BI_bi_beta_06_bi_beta_42_shift                                      (8)
#define  KMC_BI_bi_beta_06_bi_beta_41_shift                                      (0)
#define  KMC_BI_bi_beta_06_bi_beta_44_mask                                       (0xFF000000)
#define  KMC_BI_bi_beta_06_bi_beta_43_mask                                       (0x00FF0000)
#define  KMC_BI_bi_beta_06_bi_beta_42_mask                                       (0x0000FF00)
#define  KMC_BI_bi_beta_06_bi_beta_41_mask                                       (0x000000FF)
#define  KMC_BI_bi_beta_06_bi_beta_44(data)                                      (0xFF000000&((data)<<24))
#define  KMC_BI_bi_beta_06_bi_beta_43(data)                                      (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_beta_06_bi_beta_42(data)                                      (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_beta_06_bi_beta_41(data)                                      (0x000000FF&(data))
#define  KMC_BI_bi_beta_06_get_bi_beta_44(data)                                  ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_beta_06_get_bi_beta_43(data)                                  ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_beta_06_get_bi_beta_42(data)                                  ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_beta_06_get_bi_beta_41(data)                                  (0x000000FF&(data))

#define  KMC_BI_bi_beta_07                                                      0x1809F2B4
#define  KMC_BI_bi_beta_07_reg_addr                                              "0xB809F2B4"
#define  KMC_BI_bi_beta_07_reg                                                   0xB809F2B4
#define  KMC_BI_bi_beta_07_inst_addr                                             "0x002B"
#define  set_KMC_BI_bi_beta_07_reg(data)                                         (*((volatile unsigned int*)KMC_BI_bi_beta_07_reg)=data)
#define  get_KMC_BI_bi_beta_07_reg                                               (*((volatile unsigned int*)KMC_BI_bi_beta_07_reg))
#define  KMC_BI_bi_beta_07_bi_beta_48_shift                                      (24)
#define  KMC_BI_bi_beta_07_bi_beta_47_shift                                      (16)
#define  KMC_BI_bi_beta_07_bi_beta_46_shift                                      (8)
#define  KMC_BI_bi_beta_07_bi_beta_45_shift                                      (0)
#define  KMC_BI_bi_beta_07_bi_beta_48_mask                                       (0xFF000000)
#define  KMC_BI_bi_beta_07_bi_beta_47_mask                                       (0x00FF0000)
#define  KMC_BI_bi_beta_07_bi_beta_46_mask                                       (0x0000FF00)
#define  KMC_BI_bi_beta_07_bi_beta_45_mask                                       (0x000000FF)
#define  KMC_BI_bi_beta_07_bi_beta_48(data)                                      (0xFF000000&((data)<<24))
#define  KMC_BI_bi_beta_07_bi_beta_47(data)                                      (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_beta_07_bi_beta_46(data)                                      (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_beta_07_bi_beta_45(data)                                      (0x000000FF&(data))
#define  KMC_BI_bi_beta_07_get_bi_beta_48(data)                                  ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_beta_07_get_bi_beta_47(data)                                  ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_beta_07_get_bi_beta_46(data)                                  ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_beta_07_get_bi_beta_45(data)                                  (0x000000FF&(data))

#define  KMC_BI_bi_fb_00                                                        0x1809F2B8
#define  KMC_BI_bi_fb_00_reg_addr                                                "0xB809F2B8"
#define  KMC_BI_bi_fb_00_reg                                                     0xB809F2B8
#define  KMC_BI_bi_fb_00_inst_addr                                               "0x002C"
#define  set_KMC_BI_bi_fb_00_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_fb_00_reg)=data)
#define  get_KMC_BI_bi_fb_00_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_fb_00_reg))
#define  KMC_BI_bi_fb_00_bi_fb_14_shift                                          (24)
#define  KMC_BI_bi_fb_00_bi_fb_13_shift                                          (16)
#define  KMC_BI_bi_fb_00_bi_fb_12_shift                                          (8)
#define  KMC_BI_bi_fb_00_bi_fb_11_shift                                          (0)
#define  KMC_BI_bi_fb_00_bi_fb_14_mask                                           (0xFF000000)
#define  KMC_BI_bi_fb_00_bi_fb_13_mask                                           (0x00FF0000)
#define  KMC_BI_bi_fb_00_bi_fb_12_mask                                           (0x0000FF00)
#define  KMC_BI_bi_fb_00_bi_fb_11_mask                                           (0x000000FF)
#define  KMC_BI_bi_fb_00_bi_fb_14(data)                                          (0xFF000000&((data)<<24))
#define  KMC_BI_bi_fb_00_bi_fb_13(data)                                          (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_fb_00_bi_fb_12(data)                                          (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_fb_00_bi_fb_11(data)                                          (0x000000FF&(data))
#define  KMC_BI_bi_fb_00_get_bi_fb_14(data)                                      ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_fb_00_get_bi_fb_13(data)                                      ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_fb_00_get_bi_fb_12(data)                                      ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_fb_00_get_bi_fb_11(data)                                      (0x000000FF&(data))

#define  KMC_BI_bi_fb_01                                                        0x1809F2BC
#define  KMC_BI_bi_fb_01_reg_addr                                                "0xB809F2BC"
#define  KMC_BI_bi_fb_01_reg                                                     0xB809F2BC
#define  KMC_BI_bi_fb_01_inst_addr                                               "0x002D"
#define  set_KMC_BI_bi_fb_01_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_fb_01_reg)=data)
#define  get_KMC_BI_bi_fb_01_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_fb_01_reg))
#define  KMC_BI_bi_fb_01_bi_fb_18_shift                                          (24)
#define  KMC_BI_bi_fb_01_bi_fb_17_shift                                          (16)
#define  KMC_BI_bi_fb_01_bi_fb_16_shift                                          (8)
#define  KMC_BI_bi_fb_01_bi_fb_15_shift                                          (0)
#define  KMC_BI_bi_fb_01_bi_fb_18_mask                                           (0xFF000000)
#define  KMC_BI_bi_fb_01_bi_fb_17_mask                                           (0x00FF0000)
#define  KMC_BI_bi_fb_01_bi_fb_16_mask                                           (0x0000FF00)
#define  KMC_BI_bi_fb_01_bi_fb_15_mask                                           (0x000000FF)
#define  KMC_BI_bi_fb_01_bi_fb_18(data)                                          (0xFF000000&((data)<<24))
#define  KMC_BI_bi_fb_01_bi_fb_17(data)                                          (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_fb_01_bi_fb_16(data)                                          (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_fb_01_bi_fb_15(data)                                          (0x000000FF&(data))
#define  KMC_BI_bi_fb_01_get_bi_fb_18(data)                                      ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_fb_01_get_bi_fb_17(data)                                      ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_fb_01_get_bi_fb_16(data)                                      ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_fb_01_get_bi_fb_15(data)                                      (0x000000FF&(data))

#define  KMC_BI_bi_fb_02                                                        0x1809F2C0
#define  KMC_BI_bi_fb_02_reg_addr                                                "0xB809F2C0"
#define  KMC_BI_bi_fb_02_reg                                                     0xB809F2C0
#define  KMC_BI_bi_fb_02_inst_addr                                               "0x002E"
#define  set_KMC_BI_bi_fb_02_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_fb_02_reg)=data)
#define  get_KMC_BI_bi_fb_02_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_fb_02_reg))
#define  KMC_BI_bi_fb_02_bi_fb_24_shift                                          (24)
#define  KMC_BI_bi_fb_02_bi_fb_23_shift                                          (16)
#define  KMC_BI_bi_fb_02_bi_fb_22_shift                                          (8)
#define  KMC_BI_bi_fb_02_bi_fb_21_shift                                          (0)
#define  KMC_BI_bi_fb_02_bi_fb_24_mask                                           (0xFF000000)
#define  KMC_BI_bi_fb_02_bi_fb_23_mask                                           (0x00FF0000)
#define  KMC_BI_bi_fb_02_bi_fb_22_mask                                           (0x0000FF00)
#define  KMC_BI_bi_fb_02_bi_fb_21_mask                                           (0x000000FF)
#define  KMC_BI_bi_fb_02_bi_fb_24(data)                                          (0xFF000000&((data)<<24))
#define  KMC_BI_bi_fb_02_bi_fb_23(data)                                          (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_fb_02_bi_fb_22(data)                                          (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_fb_02_bi_fb_21(data)                                          (0x000000FF&(data))
#define  KMC_BI_bi_fb_02_get_bi_fb_24(data)                                      ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_fb_02_get_bi_fb_23(data)                                      ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_fb_02_get_bi_fb_22(data)                                      ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_fb_02_get_bi_fb_21(data)                                      (0x000000FF&(data))

#define  KMC_BI_bi_fb_03                                                        0x1809F2C4
#define  KMC_BI_bi_fb_03_reg_addr                                                "0xB809F2C4"
#define  KMC_BI_bi_fb_03_reg                                                     0xB809F2C4
#define  KMC_BI_bi_fb_03_inst_addr                                               "0x002F"
#define  set_KMC_BI_bi_fb_03_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_fb_03_reg)=data)
#define  get_KMC_BI_bi_fb_03_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_fb_03_reg))
#define  KMC_BI_bi_fb_03_bi_fb_28_shift                                          (24)
#define  KMC_BI_bi_fb_03_bi_fb_27_shift                                          (16)
#define  KMC_BI_bi_fb_03_bi_fb_26_shift                                          (8)
#define  KMC_BI_bi_fb_03_bi_fb_25_shift                                          (0)
#define  KMC_BI_bi_fb_03_bi_fb_28_mask                                           (0xFF000000)
#define  KMC_BI_bi_fb_03_bi_fb_27_mask                                           (0x00FF0000)
#define  KMC_BI_bi_fb_03_bi_fb_26_mask                                           (0x0000FF00)
#define  KMC_BI_bi_fb_03_bi_fb_25_mask                                           (0x000000FF)
#define  KMC_BI_bi_fb_03_bi_fb_28(data)                                          (0xFF000000&((data)<<24))
#define  KMC_BI_bi_fb_03_bi_fb_27(data)                                          (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_fb_03_bi_fb_26(data)                                          (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_fb_03_bi_fb_25(data)                                          (0x000000FF&(data))
#define  KMC_BI_bi_fb_03_get_bi_fb_28(data)                                      ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_fb_03_get_bi_fb_27(data)                                      ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_fb_03_get_bi_fb_26(data)                                      ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_fb_03_get_bi_fb_25(data)                                      (0x000000FF&(data))

#define  KMC_BI_bi_fb_04                                                        0x1809F2C8
#define  KMC_BI_bi_fb_04_reg_addr                                                "0xB809F2C8"
#define  KMC_BI_bi_fb_04_reg                                                     0xB809F2C8
#define  KMC_BI_bi_fb_04_inst_addr                                               "0x0030"
#define  set_KMC_BI_bi_fb_04_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_fb_04_reg)=data)
#define  get_KMC_BI_bi_fb_04_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_fb_04_reg))
#define  KMC_BI_bi_fb_04_bi_fb_34_shift                                          (24)
#define  KMC_BI_bi_fb_04_bi_fb_33_shift                                          (16)
#define  KMC_BI_bi_fb_04_bi_fb_32_shift                                          (8)
#define  KMC_BI_bi_fb_04_bi_fb_31_shift                                          (0)
#define  KMC_BI_bi_fb_04_bi_fb_34_mask                                           (0xFF000000)
#define  KMC_BI_bi_fb_04_bi_fb_33_mask                                           (0x00FF0000)
#define  KMC_BI_bi_fb_04_bi_fb_32_mask                                           (0x0000FF00)
#define  KMC_BI_bi_fb_04_bi_fb_31_mask                                           (0x000000FF)
#define  KMC_BI_bi_fb_04_bi_fb_34(data)                                          (0xFF000000&((data)<<24))
#define  KMC_BI_bi_fb_04_bi_fb_33(data)                                          (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_fb_04_bi_fb_32(data)                                          (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_fb_04_bi_fb_31(data)                                          (0x000000FF&(data))
#define  KMC_BI_bi_fb_04_get_bi_fb_34(data)                                      ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_fb_04_get_bi_fb_33(data)                                      ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_fb_04_get_bi_fb_32(data)                                      ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_fb_04_get_bi_fb_31(data)                                      (0x000000FF&(data))

#define  KMC_BI_bi_fb_05                                                        0x1809F2CC
#define  KMC_BI_bi_fb_05_reg_addr                                                "0xB809F2CC"
#define  KMC_BI_bi_fb_05_reg                                                     0xB809F2CC
#define  KMC_BI_bi_fb_05_inst_addr                                               "0x0031"
#define  set_KMC_BI_bi_fb_05_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_fb_05_reg)=data)
#define  get_KMC_BI_bi_fb_05_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_fb_05_reg))
#define  KMC_BI_bi_fb_05_bi_fb_38_shift                                          (24)
#define  KMC_BI_bi_fb_05_bi_fb_37_shift                                          (16)
#define  KMC_BI_bi_fb_05_bi_fb_36_shift                                          (8)
#define  KMC_BI_bi_fb_05_bi_fb_35_shift                                          (0)
#define  KMC_BI_bi_fb_05_bi_fb_38_mask                                           (0xFF000000)
#define  KMC_BI_bi_fb_05_bi_fb_37_mask                                           (0x00FF0000)
#define  KMC_BI_bi_fb_05_bi_fb_36_mask                                           (0x0000FF00)
#define  KMC_BI_bi_fb_05_bi_fb_35_mask                                           (0x000000FF)
#define  KMC_BI_bi_fb_05_bi_fb_38(data)                                          (0xFF000000&((data)<<24))
#define  KMC_BI_bi_fb_05_bi_fb_37(data)                                          (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_fb_05_bi_fb_36(data)                                          (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_fb_05_bi_fb_35(data)                                          (0x000000FF&(data))
#define  KMC_BI_bi_fb_05_get_bi_fb_38(data)                                      ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_fb_05_get_bi_fb_37(data)                                      ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_fb_05_get_bi_fb_36(data)                                      ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_fb_05_get_bi_fb_35(data)                                      (0x000000FF&(data))

#define  KMC_BI_bi_fb_06                                                        0x1809F2D0
#define  KMC_BI_bi_fb_06_reg_addr                                                "0xB809F2D0"
#define  KMC_BI_bi_fb_06_reg                                                     0xB809F2D0
#define  KMC_BI_bi_fb_06_inst_addr                                               "0x0032"
#define  set_KMC_BI_bi_fb_06_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_fb_06_reg)=data)
#define  get_KMC_BI_bi_fb_06_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_fb_06_reg))
#define  KMC_BI_bi_fb_06_bi_fb_44_shift                                          (24)
#define  KMC_BI_bi_fb_06_bi_fb_43_shift                                          (16)
#define  KMC_BI_bi_fb_06_bi_fb_42_shift                                          (8)
#define  KMC_BI_bi_fb_06_bi_fb_41_shift                                          (0)
#define  KMC_BI_bi_fb_06_bi_fb_44_mask                                           (0xFF000000)
#define  KMC_BI_bi_fb_06_bi_fb_43_mask                                           (0x00FF0000)
#define  KMC_BI_bi_fb_06_bi_fb_42_mask                                           (0x0000FF00)
#define  KMC_BI_bi_fb_06_bi_fb_41_mask                                           (0x000000FF)
#define  KMC_BI_bi_fb_06_bi_fb_44(data)                                          (0xFF000000&((data)<<24))
#define  KMC_BI_bi_fb_06_bi_fb_43(data)                                          (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_fb_06_bi_fb_42(data)                                          (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_fb_06_bi_fb_41(data)                                          (0x000000FF&(data))
#define  KMC_BI_bi_fb_06_get_bi_fb_44(data)                                      ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_fb_06_get_bi_fb_43(data)                                      ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_fb_06_get_bi_fb_42(data)                                      ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_fb_06_get_bi_fb_41(data)                                      (0x000000FF&(data))

#define  KMC_BI_bi_fb_07                                                        0x1809F2D4
#define  KMC_BI_bi_fb_07_reg_addr                                                "0xB809F2D4"
#define  KMC_BI_bi_fb_07_reg                                                     0xB809F2D4
#define  KMC_BI_bi_fb_07_inst_addr                                               "0x0033"
#define  set_KMC_BI_bi_fb_07_reg(data)                                           (*((volatile unsigned int*)KMC_BI_bi_fb_07_reg)=data)
#define  get_KMC_BI_bi_fb_07_reg                                                 (*((volatile unsigned int*)KMC_BI_bi_fb_07_reg))
#define  KMC_BI_bi_fb_07_bi_fb_48_shift                                          (24)
#define  KMC_BI_bi_fb_07_bi_fb_47_shift                                          (16)
#define  KMC_BI_bi_fb_07_bi_fb_46_shift                                          (8)
#define  KMC_BI_bi_fb_07_bi_fb_45_shift                                          (0)
#define  KMC_BI_bi_fb_07_bi_fb_48_mask                                           (0xFF000000)
#define  KMC_BI_bi_fb_07_bi_fb_47_mask                                           (0x00FF0000)
#define  KMC_BI_bi_fb_07_bi_fb_46_mask                                           (0x0000FF00)
#define  KMC_BI_bi_fb_07_bi_fb_45_mask                                           (0x000000FF)
#define  KMC_BI_bi_fb_07_bi_fb_48(data)                                          (0xFF000000&((data)<<24))
#define  KMC_BI_bi_fb_07_bi_fb_47(data)                                          (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_fb_07_bi_fb_46(data)                                          (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_fb_07_bi_fb_45(data)                                          (0x000000FF&(data))
#define  KMC_BI_bi_fb_07_get_bi_fb_48(data)                                      ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_fb_07_get_bi_fb_47(data)                                      ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_fb_07_get_bi_fb_46(data)                                      ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_fb_07_get_bi_fb_45(data)                                      (0x000000FF&(data))

#define  KMC_BI_bi_gama_00                                                      0x1809F2D8
#define  KMC_BI_bi_gama_00_reg_addr                                              "0xB809F2D8"
#define  KMC_BI_bi_gama_00_reg                                                   0xB809F2D8
#define  KMC_BI_bi_gama_00_inst_addr                                             "0x0034"
#define  set_KMC_BI_bi_gama_00_reg(data)                                         (*((volatile unsigned int*)KMC_BI_bi_gama_00_reg)=data)
#define  get_KMC_BI_bi_gama_00_reg                                               (*((volatile unsigned int*)KMC_BI_bi_gama_00_reg))
#define  KMC_BI_bi_gama_00_bi_gama_14_shift                                      (24)
#define  KMC_BI_bi_gama_00_bi_gama_13_shift                                      (16)
#define  KMC_BI_bi_gama_00_bi_gama_12_shift                                      (8)
#define  KMC_BI_bi_gama_00_bi_gama_11_shift                                      (0)
#define  KMC_BI_bi_gama_00_bi_gama_14_mask                                       (0xFF000000)
#define  KMC_BI_bi_gama_00_bi_gama_13_mask                                       (0x00FF0000)
#define  KMC_BI_bi_gama_00_bi_gama_12_mask                                       (0x0000FF00)
#define  KMC_BI_bi_gama_00_bi_gama_11_mask                                       (0x000000FF)
#define  KMC_BI_bi_gama_00_bi_gama_14(data)                                      (0xFF000000&((data)<<24))
#define  KMC_BI_bi_gama_00_bi_gama_13(data)                                      (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_gama_00_bi_gama_12(data)                                      (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_gama_00_bi_gama_11(data)                                      (0x000000FF&(data))
#define  KMC_BI_bi_gama_00_get_bi_gama_14(data)                                  ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_gama_00_get_bi_gama_13(data)                                  ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_gama_00_get_bi_gama_12(data)                                  ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_gama_00_get_bi_gama_11(data)                                  (0x000000FF&(data))

#define  KMC_BI_bi_gama_01                                                      0x1809F2DC
#define  KMC_BI_bi_gama_01_reg_addr                                              "0xB809F2DC"
#define  KMC_BI_bi_gama_01_reg                                                   0xB809F2DC
#define  KMC_BI_bi_gama_01_inst_addr                                             "0x0035"
#define  set_KMC_BI_bi_gama_01_reg(data)                                         (*((volatile unsigned int*)KMC_BI_bi_gama_01_reg)=data)
#define  get_KMC_BI_bi_gama_01_reg                                               (*((volatile unsigned int*)KMC_BI_bi_gama_01_reg))
#define  KMC_BI_bi_gama_01_bi_gama_18_shift                                      (24)
#define  KMC_BI_bi_gama_01_bi_gama_17_shift                                      (16)
#define  KMC_BI_bi_gama_01_bi_gama_16_shift                                      (8)
#define  KMC_BI_bi_gama_01_bi_gama_15_shift                                      (0)
#define  KMC_BI_bi_gama_01_bi_gama_18_mask                                       (0xFF000000)
#define  KMC_BI_bi_gama_01_bi_gama_17_mask                                       (0x00FF0000)
#define  KMC_BI_bi_gama_01_bi_gama_16_mask                                       (0x0000FF00)
#define  KMC_BI_bi_gama_01_bi_gama_15_mask                                       (0x000000FF)
#define  KMC_BI_bi_gama_01_bi_gama_18(data)                                      (0xFF000000&((data)<<24))
#define  KMC_BI_bi_gama_01_bi_gama_17(data)                                      (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_gama_01_bi_gama_16(data)                                      (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_gama_01_bi_gama_15(data)                                      (0x000000FF&(data))
#define  KMC_BI_bi_gama_01_get_bi_gama_18(data)                                  ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_gama_01_get_bi_gama_17(data)                                  ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_gama_01_get_bi_gama_16(data)                                  ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_gama_01_get_bi_gama_15(data)                                  (0x000000FF&(data))

#define  KMC_BI_bi_gama_02                                                      0x1809F2E0
#define  KMC_BI_bi_gama_02_reg_addr                                              "0xB809F2E0"
#define  KMC_BI_bi_gama_02_reg                                                   0xB809F2E0
#define  KMC_BI_bi_gama_02_inst_addr                                             "0x0036"
#define  set_KMC_BI_bi_gama_02_reg(data)                                         (*((volatile unsigned int*)KMC_BI_bi_gama_02_reg)=data)
#define  get_KMC_BI_bi_gama_02_reg                                               (*((volatile unsigned int*)KMC_BI_bi_gama_02_reg))
#define  KMC_BI_bi_gama_02_bi_gama_24_shift                                      (24)
#define  KMC_BI_bi_gama_02_bi_gama_23_shift                                      (16)
#define  KMC_BI_bi_gama_02_bi_gama_22_shift                                      (8)
#define  KMC_BI_bi_gama_02_bi_gama_21_shift                                      (0)
#define  KMC_BI_bi_gama_02_bi_gama_24_mask                                       (0xFF000000)
#define  KMC_BI_bi_gama_02_bi_gama_23_mask                                       (0x00FF0000)
#define  KMC_BI_bi_gama_02_bi_gama_22_mask                                       (0x0000FF00)
#define  KMC_BI_bi_gama_02_bi_gama_21_mask                                       (0x000000FF)
#define  KMC_BI_bi_gama_02_bi_gama_24(data)                                      (0xFF000000&((data)<<24))
#define  KMC_BI_bi_gama_02_bi_gama_23(data)                                      (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_gama_02_bi_gama_22(data)                                      (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_gama_02_bi_gama_21(data)                                      (0x000000FF&(data))
#define  KMC_BI_bi_gama_02_get_bi_gama_24(data)                                  ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_gama_02_get_bi_gama_23(data)                                  ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_gama_02_get_bi_gama_22(data)                                  ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_gama_02_get_bi_gama_21(data)                                  (0x000000FF&(data))

#define  KMC_BI_bi_gama_03                                                      0x1809F2E4
#define  KMC_BI_bi_gama_03_reg_addr                                              "0xB809F2E4"
#define  KMC_BI_bi_gama_03_reg                                                   0xB809F2E4
#define  KMC_BI_bi_gama_03_inst_addr                                             "0x0037"
#define  set_KMC_BI_bi_gama_03_reg(data)                                         (*((volatile unsigned int*)KMC_BI_bi_gama_03_reg)=data)
#define  get_KMC_BI_bi_gama_03_reg                                               (*((volatile unsigned int*)KMC_BI_bi_gama_03_reg))
#define  KMC_BI_bi_gama_03_bi_gama_28_shift                                      (24)
#define  KMC_BI_bi_gama_03_bi_gama_27_shift                                      (16)
#define  KMC_BI_bi_gama_03_bi_gama_26_shift                                      (8)
#define  KMC_BI_bi_gama_03_bi_gama_25_shift                                      (0)
#define  KMC_BI_bi_gama_03_bi_gama_28_mask                                       (0xFF000000)
#define  KMC_BI_bi_gama_03_bi_gama_27_mask                                       (0x00FF0000)
#define  KMC_BI_bi_gama_03_bi_gama_26_mask                                       (0x0000FF00)
#define  KMC_BI_bi_gama_03_bi_gama_25_mask                                       (0x000000FF)
#define  KMC_BI_bi_gama_03_bi_gama_28(data)                                      (0xFF000000&((data)<<24))
#define  KMC_BI_bi_gama_03_bi_gama_27(data)                                      (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_gama_03_bi_gama_26(data)                                      (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_gama_03_bi_gama_25(data)                                      (0x000000FF&(data))
#define  KMC_BI_bi_gama_03_get_bi_gama_28(data)                                  ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_gama_03_get_bi_gama_27(data)                                  ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_gama_03_get_bi_gama_26(data)                                  ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_gama_03_get_bi_gama_25(data)                                  (0x000000FF&(data))

#define  KMC_BI_bi_gama_04                                                      0x1809F2E8
#define  KMC_BI_bi_gama_04_reg_addr                                              "0xB809F2E8"
#define  KMC_BI_bi_gama_04_reg                                                   0xB809F2E8
#define  KMC_BI_bi_gama_04_inst_addr                                             "0x0038"
#define  set_KMC_BI_bi_gama_04_reg(data)                                         (*((volatile unsigned int*)KMC_BI_bi_gama_04_reg)=data)
#define  get_KMC_BI_bi_gama_04_reg                                               (*((volatile unsigned int*)KMC_BI_bi_gama_04_reg))
#define  KMC_BI_bi_gama_04_bi_gama_34_shift                                      (24)
#define  KMC_BI_bi_gama_04_bi_gama_33_shift                                      (16)
#define  KMC_BI_bi_gama_04_bi_gama_32_shift                                      (8)
#define  KMC_BI_bi_gama_04_bi_gama_31_shift                                      (0)
#define  KMC_BI_bi_gama_04_bi_gama_34_mask                                       (0xFF000000)
#define  KMC_BI_bi_gama_04_bi_gama_33_mask                                       (0x00FF0000)
#define  KMC_BI_bi_gama_04_bi_gama_32_mask                                       (0x0000FF00)
#define  KMC_BI_bi_gama_04_bi_gama_31_mask                                       (0x000000FF)
#define  KMC_BI_bi_gama_04_bi_gama_34(data)                                      (0xFF000000&((data)<<24))
#define  KMC_BI_bi_gama_04_bi_gama_33(data)                                      (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_gama_04_bi_gama_32(data)                                      (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_gama_04_bi_gama_31(data)                                      (0x000000FF&(data))
#define  KMC_BI_bi_gama_04_get_bi_gama_34(data)                                  ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_gama_04_get_bi_gama_33(data)                                  ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_gama_04_get_bi_gama_32(data)                                  ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_gama_04_get_bi_gama_31(data)                                  (0x000000FF&(data))

#define  KMC_BI_bi_gama_05                                                      0x1809F2EC
#define  KMC_BI_bi_gama_05_reg_addr                                              "0xB809F2EC"
#define  KMC_BI_bi_gama_05_reg                                                   0xB809F2EC
#define  KMC_BI_bi_gama_05_inst_addr                                             "0x0039"
#define  set_KMC_BI_bi_gama_05_reg(data)                                         (*((volatile unsigned int*)KMC_BI_bi_gama_05_reg)=data)
#define  get_KMC_BI_bi_gama_05_reg                                               (*((volatile unsigned int*)KMC_BI_bi_gama_05_reg))
#define  KMC_BI_bi_gama_05_bi_gama_38_shift                                      (24)
#define  KMC_BI_bi_gama_05_bi_gama_37_shift                                      (16)
#define  KMC_BI_bi_gama_05_bi_gama_36_shift                                      (8)
#define  KMC_BI_bi_gama_05_bi_gama_35_shift                                      (0)
#define  KMC_BI_bi_gama_05_bi_gama_38_mask                                       (0xFF000000)
#define  KMC_BI_bi_gama_05_bi_gama_37_mask                                       (0x00FF0000)
#define  KMC_BI_bi_gama_05_bi_gama_36_mask                                       (0x0000FF00)
#define  KMC_BI_bi_gama_05_bi_gama_35_mask                                       (0x000000FF)
#define  KMC_BI_bi_gama_05_bi_gama_38(data)                                      (0xFF000000&((data)<<24))
#define  KMC_BI_bi_gama_05_bi_gama_37(data)                                      (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_gama_05_bi_gama_36(data)                                      (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_gama_05_bi_gama_35(data)                                      (0x000000FF&(data))
#define  KMC_BI_bi_gama_05_get_bi_gama_38(data)                                  ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_gama_05_get_bi_gama_37(data)                                  ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_gama_05_get_bi_gama_36(data)                                  ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_gama_05_get_bi_gama_35(data)                                  (0x000000FF&(data))

#define  KMC_BI_bi_gama_06                                                      0x1809F2F0
#define  KMC_BI_bi_gama_06_reg_addr                                              "0xB809F2F0"
#define  KMC_BI_bi_gama_06_reg                                                   0xB809F2F0
#define  KMC_BI_bi_gama_06_inst_addr                                             "0x003A"
#define  set_KMC_BI_bi_gama_06_reg(data)                                         (*((volatile unsigned int*)KMC_BI_bi_gama_06_reg)=data)
#define  get_KMC_BI_bi_gama_06_reg                                               (*((volatile unsigned int*)KMC_BI_bi_gama_06_reg))
#define  KMC_BI_bi_gama_06_bi_gama_44_shift                                      (24)
#define  KMC_BI_bi_gama_06_bi_gama_43_shift                                      (16)
#define  KMC_BI_bi_gama_06_bi_gama_42_shift                                      (8)
#define  KMC_BI_bi_gama_06_bi_gama_41_shift                                      (0)
#define  KMC_BI_bi_gama_06_bi_gama_44_mask                                       (0xFF000000)
#define  KMC_BI_bi_gama_06_bi_gama_43_mask                                       (0x00FF0000)
#define  KMC_BI_bi_gama_06_bi_gama_42_mask                                       (0x0000FF00)
#define  KMC_BI_bi_gama_06_bi_gama_41_mask                                       (0x000000FF)
#define  KMC_BI_bi_gama_06_bi_gama_44(data)                                      (0xFF000000&((data)<<24))
#define  KMC_BI_bi_gama_06_bi_gama_43(data)                                      (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_gama_06_bi_gama_42(data)                                      (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_gama_06_bi_gama_41(data)                                      (0x000000FF&(data))
#define  KMC_BI_bi_gama_06_get_bi_gama_44(data)                                  ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_gama_06_get_bi_gama_43(data)                                  ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_gama_06_get_bi_gama_42(data)                                  ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_gama_06_get_bi_gama_41(data)                                  (0x000000FF&(data))

#define  KMC_BI_bi_gama_07                                                      0x1809F2F4
#define  KMC_BI_bi_gama_07_reg_addr                                              "0xB809F2F4"
#define  KMC_BI_bi_gama_07_reg                                                   0xB809F2F4
#define  KMC_BI_bi_gama_07_inst_addr                                             "0x003B"
#define  set_KMC_BI_bi_gama_07_reg(data)                                         (*((volatile unsigned int*)KMC_BI_bi_gama_07_reg)=data)
#define  get_KMC_BI_bi_gama_07_reg                                               (*((volatile unsigned int*)KMC_BI_bi_gama_07_reg))
#define  KMC_BI_bi_gama_07_bi_gama_48_shift                                      (24)
#define  KMC_BI_bi_gama_07_bi_gama_47_shift                                      (16)
#define  KMC_BI_bi_gama_07_bi_gama_46_shift                                      (8)
#define  KMC_BI_bi_gama_07_bi_gama_45_shift                                      (0)
#define  KMC_BI_bi_gama_07_bi_gama_48_mask                                       (0xFF000000)
#define  KMC_BI_bi_gama_07_bi_gama_47_mask                                       (0x00FF0000)
#define  KMC_BI_bi_gama_07_bi_gama_46_mask                                       (0x0000FF00)
#define  KMC_BI_bi_gama_07_bi_gama_45_mask                                       (0x000000FF)
#define  KMC_BI_bi_gama_07_bi_gama_48(data)                                      (0xFF000000&((data)<<24))
#define  KMC_BI_bi_gama_07_bi_gama_47(data)                                      (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_gama_07_bi_gama_46(data)                                      (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_gama_07_bi_gama_45(data)                                      (0x000000FF&(data))
#define  KMC_BI_bi_gama_07_get_bi_gama_48(data)                                  ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_gama_07_get_bi_gama_47(data)                                  ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_gama_07_get_bi_gama_46(data)                                  ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_gama_07_get_bi_gama_45(data)                                  (0x000000FF&(data))

#define  KMC_BI_bifb_statistic_thl                                              0x1809F2F8
#define  KMC_BI_bifb_statistic_thl_reg_addr                                      "0xB809F2F8"
#define  KMC_BI_bifb_statistic_thl_reg                                           0xB809F2F8
#define  KMC_BI_bifb_statistic_thl_inst_addr                                     "0x003C"
#define  set_KMC_BI_bifb_statistic_thl_reg(data)                                 (*((volatile unsigned int*)KMC_BI_bifb_statistic_thl_reg)=data)
#define  get_KMC_BI_bifb_statistic_thl_reg                                       (*((volatile unsigned int*)KMC_BI_bifb_statistic_thl_reg))
#define  KMC_BI_bifb_statistic_thl_bifb_statistic_thl_shift                      (0)
#define  KMC_BI_bifb_statistic_thl_bifb_statistic_thl_mask                       (0x000000FF)
#define  KMC_BI_bifb_statistic_thl_bifb_statistic_thl(data)                      (0x000000FF&(data))
#define  KMC_BI_bifb_statistic_thl_get_bifb_statistic_thl(data)                  (0x000000FF&(data))

#define  KMC_BI_bi_max_00                                                       0x1809F2FC
#define  KMC_BI_bi_max_00_reg_addr                                               "0xB809F2FC"
#define  KMC_BI_bi_max_00_reg                                                    0xB809F2FC
#define  KMC_BI_bi_max_00_inst_addr                                              "0x003D"
#define  set_KMC_BI_bi_max_00_reg(data)                                          (*((volatile unsigned int*)KMC_BI_bi_max_00_reg)=data)
#define  get_KMC_BI_bi_max_00_reg                                                (*((volatile unsigned int*)KMC_BI_bi_max_00_reg))
#define  KMC_BI_bi_max_00_bi_max_14_shift                                        (24)
#define  KMC_BI_bi_max_00_bi_max_13_shift                                        (16)
#define  KMC_BI_bi_max_00_bi_max_12_shift                                        (8)
#define  KMC_BI_bi_max_00_bi_max_11_shift                                        (0)
#define  KMC_BI_bi_max_00_bi_max_14_mask                                         (0xFF000000)
#define  KMC_BI_bi_max_00_bi_max_13_mask                                         (0x00FF0000)
#define  KMC_BI_bi_max_00_bi_max_12_mask                                         (0x0000FF00)
#define  KMC_BI_bi_max_00_bi_max_11_mask                                         (0x000000FF)
#define  KMC_BI_bi_max_00_bi_max_14(data)                                        (0xFF000000&((data)<<24))
#define  KMC_BI_bi_max_00_bi_max_13(data)                                        (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_max_00_bi_max_12(data)                                        (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_max_00_bi_max_11(data)                                        (0x000000FF&(data))
#define  KMC_BI_bi_max_00_get_bi_max_14(data)                                    ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_max_00_get_bi_max_13(data)                                    ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_max_00_get_bi_max_12(data)                                    ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_max_00_get_bi_max_11(data)                                    (0x000000FF&(data))

#define  KMC_BI_bi_max_01                                                       0x1809F300
#define  KMC_BI_bi_max_01_reg_addr                                               "0xB809F300"
#define  KMC_BI_bi_max_01_reg                                                    0xB809F300
#define  KMC_BI_bi_max_01_inst_addr                                              "0x003E"
#define  set_KMC_BI_bi_max_01_reg(data)                                          (*((volatile unsigned int*)KMC_BI_bi_max_01_reg)=data)
#define  get_KMC_BI_bi_max_01_reg                                                (*((volatile unsigned int*)KMC_BI_bi_max_01_reg))
#define  KMC_BI_bi_max_01_bi_max_18_shift                                        (24)
#define  KMC_BI_bi_max_01_bi_max_17_shift                                        (16)
#define  KMC_BI_bi_max_01_bi_max_16_shift                                        (8)
#define  KMC_BI_bi_max_01_bi_max_15_shift                                        (0)
#define  KMC_BI_bi_max_01_bi_max_18_mask                                         (0xFF000000)
#define  KMC_BI_bi_max_01_bi_max_17_mask                                         (0x00FF0000)
#define  KMC_BI_bi_max_01_bi_max_16_mask                                         (0x0000FF00)
#define  KMC_BI_bi_max_01_bi_max_15_mask                                         (0x000000FF)
#define  KMC_BI_bi_max_01_bi_max_18(data)                                        (0xFF000000&((data)<<24))
#define  KMC_BI_bi_max_01_bi_max_17(data)                                        (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_max_01_bi_max_16(data)                                        (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_max_01_bi_max_15(data)                                        (0x000000FF&(data))
#define  KMC_BI_bi_max_01_get_bi_max_18(data)                                    ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_max_01_get_bi_max_17(data)                                    ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_max_01_get_bi_max_16(data)                                    ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_max_01_get_bi_max_15(data)                                    (0x000000FF&(data))

#define  KMC_BI_bi_max_02                                                       0x1809F304
#define  KMC_BI_bi_max_02_reg_addr                                               "0xB809F304"
#define  KMC_BI_bi_max_02_reg                                                    0xB809F304
#define  KMC_BI_bi_max_02_inst_addr                                              "0x003F"
#define  set_KMC_BI_bi_max_02_reg(data)                                          (*((volatile unsigned int*)KMC_BI_bi_max_02_reg)=data)
#define  get_KMC_BI_bi_max_02_reg                                                (*((volatile unsigned int*)KMC_BI_bi_max_02_reg))
#define  KMC_BI_bi_max_02_bi_max_24_shift                                        (24)
#define  KMC_BI_bi_max_02_bi_max_23_shift                                        (16)
#define  KMC_BI_bi_max_02_bi_max_22_shift                                        (8)
#define  KMC_BI_bi_max_02_bi_max_21_shift                                        (0)
#define  KMC_BI_bi_max_02_bi_max_24_mask                                         (0xFF000000)
#define  KMC_BI_bi_max_02_bi_max_23_mask                                         (0x00FF0000)
#define  KMC_BI_bi_max_02_bi_max_22_mask                                         (0x0000FF00)
#define  KMC_BI_bi_max_02_bi_max_21_mask                                         (0x000000FF)
#define  KMC_BI_bi_max_02_bi_max_24(data)                                        (0xFF000000&((data)<<24))
#define  KMC_BI_bi_max_02_bi_max_23(data)                                        (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_max_02_bi_max_22(data)                                        (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_max_02_bi_max_21(data)                                        (0x000000FF&(data))
#define  KMC_BI_bi_max_02_get_bi_max_24(data)                                    ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_max_02_get_bi_max_23(data)                                    ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_max_02_get_bi_max_22(data)                                    ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_max_02_get_bi_max_21(data)                                    (0x000000FF&(data))

#define  KMC_BI_bi_max_03                                                       0x1809F308
#define  KMC_BI_bi_max_03_reg_addr                                               "0xB809F308"
#define  KMC_BI_bi_max_03_reg                                                    0xB809F308
#define  KMC_BI_bi_max_03_inst_addr                                              "0x0040"
#define  set_KMC_BI_bi_max_03_reg(data)                                          (*((volatile unsigned int*)KMC_BI_bi_max_03_reg)=data)
#define  get_KMC_BI_bi_max_03_reg                                                (*((volatile unsigned int*)KMC_BI_bi_max_03_reg))
#define  KMC_BI_bi_max_03_bi_max_28_shift                                        (24)
#define  KMC_BI_bi_max_03_bi_max_27_shift                                        (16)
#define  KMC_BI_bi_max_03_bi_max_26_shift                                        (8)
#define  KMC_BI_bi_max_03_bi_max_25_shift                                        (0)
#define  KMC_BI_bi_max_03_bi_max_28_mask                                         (0xFF000000)
#define  KMC_BI_bi_max_03_bi_max_27_mask                                         (0x00FF0000)
#define  KMC_BI_bi_max_03_bi_max_26_mask                                         (0x0000FF00)
#define  KMC_BI_bi_max_03_bi_max_25_mask                                         (0x000000FF)
#define  KMC_BI_bi_max_03_bi_max_28(data)                                        (0xFF000000&((data)<<24))
#define  KMC_BI_bi_max_03_bi_max_27(data)                                        (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_max_03_bi_max_26(data)                                        (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_max_03_bi_max_25(data)                                        (0x000000FF&(data))
#define  KMC_BI_bi_max_03_get_bi_max_28(data)                                    ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_max_03_get_bi_max_27(data)                                    ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_max_03_get_bi_max_26(data)                                    ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_max_03_get_bi_max_25(data)                                    (0x000000FF&(data))

#define  KMC_BI_bi_max_04                                                       0x1809F30C
#define  KMC_BI_bi_max_04_reg_addr                                               "0xB809F30C"
#define  KMC_BI_bi_max_04_reg                                                    0xB809F30C
#define  KMC_BI_bi_max_04_inst_addr                                              "0x0041"
#define  set_KMC_BI_bi_max_04_reg(data)                                          (*((volatile unsigned int*)KMC_BI_bi_max_04_reg)=data)
#define  get_KMC_BI_bi_max_04_reg                                                (*((volatile unsigned int*)KMC_BI_bi_max_04_reg))
#define  KMC_BI_bi_max_04_bi_max_34_shift                                        (24)
#define  KMC_BI_bi_max_04_bi_max_33_shift                                        (16)
#define  KMC_BI_bi_max_04_bi_max_32_shift                                        (8)
#define  KMC_BI_bi_max_04_bi_max_31_shift                                        (0)
#define  KMC_BI_bi_max_04_bi_max_34_mask                                         (0xFF000000)
#define  KMC_BI_bi_max_04_bi_max_33_mask                                         (0x00FF0000)
#define  KMC_BI_bi_max_04_bi_max_32_mask                                         (0x0000FF00)
#define  KMC_BI_bi_max_04_bi_max_31_mask                                         (0x000000FF)
#define  KMC_BI_bi_max_04_bi_max_34(data)                                        (0xFF000000&((data)<<24))
#define  KMC_BI_bi_max_04_bi_max_33(data)                                        (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_max_04_bi_max_32(data)                                        (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_max_04_bi_max_31(data)                                        (0x000000FF&(data))
#define  KMC_BI_bi_max_04_get_bi_max_34(data)                                    ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_max_04_get_bi_max_33(data)                                    ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_max_04_get_bi_max_32(data)                                    ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_max_04_get_bi_max_31(data)                                    (0x000000FF&(data))

#define  KMC_BI_bi_max_05                                                       0x1809F310
#define  KMC_BI_bi_max_05_reg_addr                                               "0xB809F310"
#define  KMC_BI_bi_max_05_reg                                                    0xB809F310
#define  KMC_BI_bi_max_05_inst_addr                                              "0x0042"
#define  set_KMC_BI_bi_max_05_reg(data)                                          (*((volatile unsigned int*)KMC_BI_bi_max_05_reg)=data)
#define  get_KMC_BI_bi_max_05_reg                                                (*((volatile unsigned int*)KMC_BI_bi_max_05_reg))
#define  KMC_BI_bi_max_05_bi_max_38_shift                                        (24)
#define  KMC_BI_bi_max_05_bi_max_37_shift                                        (16)
#define  KMC_BI_bi_max_05_bi_max_36_shift                                        (8)
#define  KMC_BI_bi_max_05_bi_max_35_shift                                        (0)
#define  KMC_BI_bi_max_05_bi_max_38_mask                                         (0xFF000000)
#define  KMC_BI_bi_max_05_bi_max_37_mask                                         (0x00FF0000)
#define  KMC_BI_bi_max_05_bi_max_36_mask                                         (0x0000FF00)
#define  KMC_BI_bi_max_05_bi_max_35_mask                                         (0x000000FF)
#define  KMC_BI_bi_max_05_bi_max_38(data)                                        (0xFF000000&((data)<<24))
#define  KMC_BI_bi_max_05_bi_max_37(data)                                        (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_max_05_bi_max_36(data)                                        (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_max_05_bi_max_35(data)                                        (0x000000FF&(data))
#define  KMC_BI_bi_max_05_get_bi_max_38(data)                                    ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_max_05_get_bi_max_37(data)                                    ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_max_05_get_bi_max_36(data)                                    ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_max_05_get_bi_max_35(data)                                    (0x000000FF&(data))

#define  KMC_BI_bi_max_06                                                       0x1809F314
#define  KMC_BI_bi_max_06_reg_addr                                               "0xB809F314"
#define  KMC_BI_bi_max_06_reg                                                    0xB809F314
#define  KMC_BI_bi_max_06_inst_addr                                              "0x0043"
#define  set_KMC_BI_bi_max_06_reg(data)                                          (*((volatile unsigned int*)KMC_BI_bi_max_06_reg)=data)
#define  get_KMC_BI_bi_max_06_reg                                                (*((volatile unsigned int*)KMC_BI_bi_max_06_reg))
#define  KMC_BI_bi_max_06_bi_max_44_shift                                        (24)
#define  KMC_BI_bi_max_06_bi_max_43_shift                                        (16)
#define  KMC_BI_bi_max_06_bi_max_42_shift                                        (8)
#define  KMC_BI_bi_max_06_bi_max_41_shift                                        (0)
#define  KMC_BI_bi_max_06_bi_max_44_mask                                         (0xFF000000)
#define  KMC_BI_bi_max_06_bi_max_43_mask                                         (0x00FF0000)
#define  KMC_BI_bi_max_06_bi_max_42_mask                                         (0x0000FF00)
#define  KMC_BI_bi_max_06_bi_max_41_mask                                         (0x000000FF)
#define  KMC_BI_bi_max_06_bi_max_44(data)                                        (0xFF000000&((data)<<24))
#define  KMC_BI_bi_max_06_bi_max_43(data)                                        (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_max_06_bi_max_42(data)                                        (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_max_06_bi_max_41(data)                                        (0x000000FF&(data))
#define  KMC_BI_bi_max_06_get_bi_max_44(data)                                    ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_max_06_get_bi_max_43(data)                                    ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_max_06_get_bi_max_42(data)                                    ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_max_06_get_bi_max_41(data)                                    (0x000000FF&(data))

#define  KMC_BI_bi_max_07                                                       0x1809F318
#define  KMC_BI_bi_max_07_reg_addr                                               "0xB809F318"
#define  KMC_BI_bi_max_07_reg                                                    0xB809F318
#define  KMC_BI_bi_max_07_inst_addr                                              "0x0044"
#define  set_KMC_BI_bi_max_07_reg(data)                                          (*((volatile unsigned int*)KMC_BI_bi_max_07_reg)=data)
#define  get_KMC_BI_bi_max_07_reg                                                (*((volatile unsigned int*)KMC_BI_bi_max_07_reg))
#define  KMC_BI_bi_max_07_bi_max_48_shift                                        (24)
#define  KMC_BI_bi_max_07_bi_max_47_shift                                        (16)
#define  KMC_BI_bi_max_07_bi_max_46_shift                                        (8)
#define  KMC_BI_bi_max_07_bi_max_45_shift                                        (0)
#define  KMC_BI_bi_max_07_bi_max_48_mask                                         (0xFF000000)
#define  KMC_BI_bi_max_07_bi_max_47_mask                                         (0x00FF0000)
#define  KMC_BI_bi_max_07_bi_max_46_mask                                         (0x0000FF00)
#define  KMC_BI_bi_max_07_bi_max_45_mask                                         (0x000000FF)
#define  KMC_BI_bi_max_07_bi_max_48(data)                                        (0xFF000000&((data)<<24))
#define  KMC_BI_bi_max_07_bi_max_47(data)                                        (0x00FF0000&((data)<<16))
#define  KMC_BI_bi_max_07_bi_max_46(data)                                        (0x0000FF00&((data)<<8))
#define  KMC_BI_bi_max_07_bi_max_45(data)                                        (0x000000FF&(data))
#define  KMC_BI_bi_max_07_get_bi_max_48(data)                                    ((0xFF000000&(data))>>24)
#define  KMC_BI_bi_max_07_get_bi_max_47(data)                                    ((0x00FF0000&(data))>>16)
#define  KMC_BI_bi_max_07_get_bi_max_46(data)                                    ((0x0000FF00&(data))>>8)
#define  KMC_BI_bi_max_07_get_bi_max_45(data)                                    (0x000000FF&(data))

#define  KMC_BI_bifb_cnt_00                                                     0x1809F31C
#define  KMC_BI_bifb_cnt_00_reg_addr                                             "0xB809F31C"
#define  KMC_BI_bifb_cnt_00_reg                                                  0xB809F31C
#define  KMC_BI_bifb_cnt_00_inst_addr                                            "0x0045"
#define  set_KMC_BI_bifb_cnt_00_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_cnt_00_reg)=data)
#define  get_KMC_BI_bifb_cnt_00_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_cnt_00_reg))
#define  KMC_BI_bifb_cnt_00_bifb_cnt_12_shift                                    (16)
#define  KMC_BI_bifb_cnt_00_bifb_cnt_11_shift                                    (0)
#define  KMC_BI_bifb_cnt_00_bifb_cnt_12_mask                                     (0x0FFF0000)
#define  KMC_BI_bifb_cnt_00_bifb_cnt_11_mask                                     (0x00000FFF)
#define  KMC_BI_bifb_cnt_00_bifb_cnt_12(data)                                    (0x0FFF0000&((data)<<16))
#define  KMC_BI_bifb_cnt_00_bifb_cnt_11(data)                                    (0x00000FFF&(data))
#define  KMC_BI_bifb_cnt_00_get_bifb_cnt_12(data)                                ((0x0FFF0000&(data))>>16)
#define  KMC_BI_bifb_cnt_00_get_bifb_cnt_11(data)                                (0x00000FFF&(data))

#define  KMC_BI_bifb_cnt_01                                                     0x1809F320
#define  KMC_BI_bifb_cnt_01_reg_addr                                             "0xB809F320"
#define  KMC_BI_bifb_cnt_01_reg                                                  0xB809F320
#define  KMC_BI_bifb_cnt_01_inst_addr                                            "0x0046"
#define  set_KMC_BI_bifb_cnt_01_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_cnt_01_reg)=data)
#define  get_KMC_BI_bifb_cnt_01_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_cnt_01_reg))
#define  KMC_BI_bifb_cnt_01_bifb_cnt_14_shift                                    (16)
#define  KMC_BI_bifb_cnt_01_bifb_cnt_13_shift                                    (0)
#define  KMC_BI_bifb_cnt_01_bifb_cnt_14_mask                                     (0x0FFF0000)
#define  KMC_BI_bifb_cnt_01_bifb_cnt_13_mask                                     (0x00000FFF)
#define  KMC_BI_bifb_cnt_01_bifb_cnt_14(data)                                    (0x0FFF0000&((data)<<16))
#define  KMC_BI_bifb_cnt_01_bifb_cnt_13(data)                                    (0x00000FFF&(data))
#define  KMC_BI_bifb_cnt_01_get_bifb_cnt_14(data)                                ((0x0FFF0000&(data))>>16)
#define  KMC_BI_bifb_cnt_01_get_bifb_cnt_13(data)                                (0x00000FFF&(data))

#define  KMC_BI_bifb_cnt_02                                                     0x1809F324
#define  KMC_BI_bifb_cnt_02_reg_addr                                             "0xB809F324"
#define  KMC_BI_bifb_cnt_02_reg                                                  0xB809F324
#define  KMC_BI_bifb_cnt_02_inst_addr                                            "0x0047"
#define  set_KMC_BI_bifb_cnt_02_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_cnt_02_reg)=data)
#define  get_KMC_BI_bifb_cnt_02_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_cnt_02_reg))
#define  KMC_BI_bifb_cnt_02_bifb_cnt_16_shift                                    (16)
#define  KMC_BI_bifb_cnt_02_bifb_cnt_15_shift                                    (0)
#define  KMC_BI_bifb_cnt_02_bifb_cnt_16_mask                                     (0x0FFF0000)
#define  KMC_BI_bifb_cnt_02_bifb_cnt_15_mask                                     (0x00000FFF)
#define  KMC_BI_bifb_cnt_02_bifb_cnt_16(data)                                    (0x0FFF0000&((data)<<16))
#define  KMC_BI_bifb_cnt_02_bifb_cnt_15(data)                                    (0x00000FFF&(data))
#define  KMC_BI_bifb_cnt_02_get_bifb_cnt_16(data)                                ((0x0FFF0000&(data))>>16)
#define  KMC_BI_bifb_cnt_02_get_bifb_cnt_15(data)                                (0x00000FFF&(data))

#define  KMC_BI_bifb_cnt_03                                                     0x1809F328
#define  KMC_BI_bifb_cnt_03_reg_addr                                             "0xB809F328"
#define  KMC_BI_bifb_cnt_03_reg                                                  0xB809F328
#define  KMC_BI_bifb_cnt_03_inst_addr                                            "0x0048"
#define  set_KMC_BI_bifb_cnt_03_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_cnt_03_reg)=data)
#define  get_KMC_BI_bifb_cnt_03_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_cnt_03_reg))
#define  KMC_BI_bifb_cnt_03_bifb_cnt_18_shift                                    (16)
#define  KMC_BI_bifb_cnt_03_bifb_cnt_17_shift                                    (0)
#define  KMC_BI_bifb_cnt_03_bifb_cnt_18_mask                                     (0x0FFF0000)
#define  KMC_BI_bifb_cnt_03_bifb_cnt_17_mask                                     (0x00000FFF)
#define  KMC_BI_bifb_cnt_03_bifb_cnt_18(data)                                    (0x0FFF0000&((data)<<16))
#define  KMC_BI_bifb_cnt_03_bifb_cnt_17(data)                                    (0x00000FFF&(data))
#define  KMC_BI_bifb_cnt_03_get_bifb_cnt_18(data)                                ((0x0FFF0000&(data))>>16)
#define  KMC_BI_bifb_cnt_03_get_bifb_cnt_17(data)                                (0x00000FFF&(data))

#define  KMC_BI_bifb_cnt_04                                                     0x1809F32C
#define  KMC_BI_bifb_cnt_04_reg_addr                                             "0xB809F32C"
#define  KMC_BI_bifb_cnt_04_reg                                                  0xB809F32C
#define  KMC_BI_bifb_cnt_04_inst_addr                                            "0x0049"
#define  set_KMC_BI_bifb_cnt_04_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_cnt_04_reg)=data)
#define  get_KMC_BI_bifb_cnt_04_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_cnt_04_reg))
#define  KMC_BI_bifb_cnt_04_bifb_cnt_22_shift                                    (16)
#define  KMC_BI_bifb_cnt_04_bifb_cnt_21_shift                                    (0)
#define  KMC_BI_bifb_cnt_04_bifb_cnt_22_mask                                     (0x0FFF0000)
#define  KMC_BI_bifb_cnt_04_bifb_cnt_21_mask                                     (0x00000FFF)
#define  KMC_BI_bifb_cnt_04_bifb_cnt_22(data)                                    (0x0FFF0000&((data)<<16))
#define  KMC_BI_bifb_cnt_04_bifb_cnt_21(data)                                    (0x00000FFF&(data))
#define  KMC_BI_bifb_cnt_04_get_bifb_cnt_22(data)                                ((0x0FFF0000&(data))>>16)
#define  KMC_BI_bifb_cnt_04_get_bifb_cnt_21(data)                                (0x00000FFF&(data))

#define  KMC_BI_bifb_cnt_05                                                     0x1809F330
#define  KMC_BI_bifb_cnt_05_reg_addr                                             "0xB809F330"
#define  KMC_BI_bifb_cnt_05_reg                                                  0xB809F330
#define  KMC_BI_bifb_cnt_05_inst_addr                                            "0x004A"
#define  set_KMC_BI_bifb_cnt_05_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_cnt_05_reg)=data)
#define  get_KMC_BI_bifb_cnt_05_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_cnt_05_reg))
#define  KMC_BI_bifb_cnt_05_bifb_cnt_24_shift                                    (16)
#define  KMC_BI_bifb_cnt_05_bifb_cnt_23_shift                                    (0)
#define  KMC_BI_bifb_cnt_05_bifb_cnt_24_mask                                     (0x0FFF0000)
#define  KMC_BI_bifb_cnt_05_bifb_cnt_23_mask                                     (0x00000FFF)
#define  KMC_BI_bifb_cnt_05_bifb_cnt_24(data)                                    (0x0FFF0000&((data)<<16))
#define  KMC_BI_bifb_cnt_05_bifb_cnt_23(data)                                    (0x00000FFF&(data))
#define  KMC_BI_bifb_cnt_05_get_bifb_cnt_24(data)                                ((0x0FFF0000&(data))>>16)
#define  KMC_BI_bifb_cnt_05_get_bifb_cnt_23(data)                                (0x00000FFF&(data))

#define  KMC_BI_bifb_cnt_06                                                     0x1809F334
#define  KMC_BI_bifb_cnt_06_reg_addr                                             "0xB809F334"
#define  KMC_BI_bifb_cnt_06_reg                                                  0xB809F334
#define  KMC_BI_bifb_cnt_06_inst_addr                                            "0x004B"
#define  set_KMC_BI_bifb_cnt_06_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_cnt_06_reg)=data)
#define  get_KMC_BI_bifb_cnt_06_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_cnt_06_reg))
#define  KMC_BI_bifb_cnt_06_bifb_cnt_26_shift                                    (16)
#define  KMC_BI_bifb_cnt_06_bifb_cnt_25_shift                                    (0)
#define  KMC_BI_bifb_cnt_06_bifb_cnt_26_mask                                     (0x0FFF0000)
#define  KMC_BI_bifb_cnt_06_bifb_cnt_25_mask                                     (0x00000FFF)
#define  KMC_BI_bifb_cnt_06_bifb_cnt_26(data)                                    (0x0FFF0000&((data)<<16))
#define  KMC_BI_bifb_cnt_06_bifb_cnt_25(data)                                    (0x00000FFF&(data))
#define  KMC_BI_bifb_cnt_06_get_bifb_cnt_26(data)                                ((0x0FFF0000&(data))>>16)
#define  KMC_BI_bifb_cnt_06_get_bifb_cnt_25(data)                                (0x00000FFF&(data))

#define  KMC_BI_bifb_cnt_07                                                     0x1809F338
#define  KMC_BI_bifb_cnt_07_reg_addr                                             "0xB809F338"
#define  KMC_BI_bifb_cnt_07_reg                                                  0xB809F338
#define  KMC_BI_bifb_cnt_07_inst_addr                                            "0x004C"
#define  set_KMC_BI_bifb_cnt_07_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_cnt_07_reg)=data)
#define  get_KMC_BI_bifb_cnt_07_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_cnt_07_reg))
#define  KMC_BI_bifb_cnt_07_bifb_cnt_28_shift                                    (16)
#define  KMC_BI_bifb_cnt_07_bifb_cnt_27_shift                                    (0)
#define  KMC_BI_bifb_cnt_07_bifb_cnt_28_mask                                     (0x0FFF0000)
#define  KMC_BI_bifb_cnt_07_bifb_cnt_27_mask                                     (0x00000FFF)
#define  KMC_BI_bifb_cnt_07_bifb_cnt_28(data)                                    (0x0FFF0000&((data)<<16))
#define  KMC_BI_bifb_cnt_07_bifb_cnt_27(data)                                    (0x00000FFF&(data))
#define  KMC_BI_bifb_cnt_07_get_bifb_cnt_28(data)                                ((0x0FFF0000&(data))>>16)
#define  KMC_BI_bifb_cnt_07_get_bifb_cnt_27(data)                                (0x00000FFF&(data))

#define  KMC_BI_bifb_cnt_08                                                     0x1809F33C
#define  KMC_BI_bifb_cnt_08_reg_addr                                             "0xB809F33C"
#define  KMC_BI_bifb_cnt_08_reg                                                  0xB809F33C
#define  KMC_BI_bifb_cnt_08_inst_addr                                            "0x004D"
#define  set_KMC_BI_bifb_cnt_08_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_cnt_08_reg)=data)
#define  get_KMC_BI_bifb_cnt_08_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_cnt_08_reg))
#define  KMC_BI_bifb_cnt_08_bifb_cnt_32_shift                                    (16)
#define  KMC_BI_bifb_cnt_08_bifb_cnt_31_shift                                    (0)
#define  KMC_BI_bifb_cnt_08_bifb_cnt_32_mask                                     (0x0FFF0000)
#define  KMC_BI_bifb_cnt_08_bifb_cnt_31_mask                                     (0x00000FFF)
#define  KMC_BI_bifb_cnt_08_bifb_cnt_32(data)                                    (0x0FFF0000&((data)<<16))
#define  KMC_BI_bifb_cnt_08_bifb_cnt_31(data)                                    (0x00000FFF&(data))
#define  KMC_BI_bifb_cnt_08_get_bifb_cnt_32(data)                                ((0x0FFF0000&(data))>>16)
#define  KMC_BI_bifb_cnt_08_get_bifb_cnt_31(data)                                (0x00000FFF&(data))

#define  KMC_BI_bifb_cnt_09                                                     0x1809F340
#define  KMC_BI_bifb_cnt_09_reg_addr                                             "0xB809F340"
#define  KMC_BI_bifb_cnt_09_reg                                                  0xB809F340
#define  KMC_BI_bifb_cnt_09_inst_addr                                            "0x004E"
#define  set_KMC_BI_bifb_cnt_09_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_cnt_09_reg)=data)
#define  get_KMC_BI_bifb_cnt_09_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_cnt_09_reg))
#define  KMC_BI_bifb_cnt_09_bifb_cnt_34_shift                                    (16)
#define  KMC_BI_bifb_cnt_09_bifb_cnt_33_shift                                    (0)
#define  KMC_BI_bifb_cnt_09_bifb_cnt_34_mask                                     (0x0FFF0000)
#define  KMC_BI_bifb_cnt_09_bifb_cnt_33_mask                                     (0x00000FFF)
#define  KMC_BI_bifb_cnt_09_bifb_cnt_34(data)                                    (0x0FFF0000&((data)<<16))
#define  KMC_BI_bifb_cnt_09_bifb_cnt_33(data)                                    (0x00000FFF&(data))
#define  KMC_BI_bifb_cnt_09_get_bifb_cnt_34(data)                                ((0x0FFF0000&(data))>>16)
#define  KMC_BI_bifb_cnt_09_get_bifb_cnt_33(data)                                (0x00000FFF&(data))

#define  KMC_BI_bifb_cnt_10                                                     0x1809F344
#define  KMC_BI_bifb_cnt_10_reg_addr                                             "0xB809F344"
#define  KMC_BI_bifb_cnt_10_reg                                                  0xB809F344
#define  KMC_BI_bifb_cnt_10_inst_addr                                            "0x004F"
#define  set_KMC_BI_bifb_cnt_10_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_cnt_10_reg)=data)
#define  get_KMC_BI_bifb_cnt_10_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_cnt_10_reg))
#define  KMC_BI_bifb_cnt_10_bifb_cnt_36_shift                                    (16)
#define  KMC_BI_bifb_cnt_10_bifb_cnt_35_shift                                    (0)
#define  KMC_BI_bifb_cnt_10_bifb_cnt_36_mask                                     (0x0FFF0000)
#define  KMC_BI_bifb_cnt_10_bifb_cnt_35_mask                                     (0x00000FFF)
#define  KMC_BI_bifb_cnt_10_bifb_cnt_36(data)                                    (0x0FFF0000&((data)<<16))
#define  KMC_BI_bifb_cnt_10_bifb_cnt_35(data)                                    (0x00000FFF&(data))
#define  KMC_BI_bifb_cnt_10_get_bifb_cnt_36(data)                                ((0x0FFF0000&(data))>>16)
#define  KMC_BI_bifb_cnt_10_get_bifb_cnt_35(data)                                (0x00000FFF&(data))

#define  KMC_BI_bifb_cnt_11                                                     0x1809F348
#define  KMC_BI_bifb_cnt_11_reg_addr                                             "0xB809F348"
#define  KMC_BI_bifb_cnt_11_reg                                                  0xB809F348
#define  KMC_BI_bifb_cnt_11_inst_addr                                            "0x0050"
#define  set_KMC_BI_bifb_cnt_11_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_cnt_11_reg)=data)
#define  get_KMC_BI_bifb_cnt_11_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_cnt_11_reg))
#define  KMC_BI_bifb_cnt_11_bifb_cnt_38_shift                                    (16)
#define  KMC_BI_bifb_cnt_11_bifb_cnt_37_shift                                    (0)
#define  KMC_BI_bifb_cnt_11_bifb_cnt_38_mask                                     (0x0FFF0000)
#define  KMC_BI_bifb_cnt_11_bifb_cnt_37_mask                                     (0x00000FFF)
#define  KMC_BI_bifb_cnt_11_bifb_cnt_38(data)                                    (0x0FFF0000&((data)<<16))
#define  KMC_BI_bifb_cnt_11_bifb_cnt_37(data)                                    (0x00000FFF&(data))
#define  KMC_BI_bifb_cnt_11_get_bifb_cnt_38(data)                                ((0x0FFF0000&(data))>>16)
#define  KMC_BI_bifb_cnt_11_get_bifb_cnt_37(data)                                (0x00000FFF&(data))

#define  KMC_BI_bifb_cnt_12                                                     0x1809F34C
#define  KMC_BI_bifb_cnt_12_reg_addr                                             "0xB809F34C"
#define  KMC_BI_bifb_cnt_12_reg                                                  0xB809F34C
#define  KMC_BI_bifb_cnt_12_inst_addr                                            "0x0051"
#define  set_KMC_BI_bifb_cnt_12_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_cnt_12_reg)=data)
#define  get_KMC_BI_bifb_cnt_12_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_cnt_12_reg))
#define  KMC_BI_bifb_cnt_12_bifb_cnt_42_shift                                    (16)
#define  KMC_BI_bifb_cnt_12_bifb_cnt_41_shift                                    (0)
#define  KMC_BI_bifb_cnt_12_bifb_cnt_42_mask                                     (0x0FFF0000)
#define  KMC_BI_bifb_cnt_12_bifb_cnt_41_mask                                     (0x00000FFF)
#define  KMC_BI_bifb_cnt_12_bifb_cnt_42(data)                                    (0x0FFF0000&((data)<<16))
#define  KMC_BI_bifb_cnt_12_bifb_cnt_41(data)                                    (0x00000FFF&(data))
#define  KMC_BI_bifb_cnt_12_get_bifb_cnt_42(data)                                ((0x0FFF0000&(data))>>16)
#define  KMC_BI_bifb_cnt_12_get_bifb_cnt_41(data)                                (0x00000FFF&(data))

#define  KMC_BI_bifb_cnt_13                                                     0x1809F350
#define  KMC_BI_bifb_cnt_13_reg_addr                                             "0xB809F350"
#define  KMC_BI_bifb_cnt_13_reg                                                  0xB809F350
#define  KMC_BI_bifb_cnt_13_inst_addr                                            "0x0052"
#define  set_KMC_BI_bifb_cnt_13_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_cnt_13_reg)=data)
#define  get_KMC_BI_bifb_cnt_13_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_cnt_13_reg))
#define  KMC_BI_bifb_cnt_13_bifb_cnt_44_shift                                    (16)
#define  KMC_BI_bifb_cnt_13_bifb_cnt_43_shift                                    (0)
#define  KMC_BI_bifb_cnt_13_bifb_cnt_44_mask                                     (0x0FFF0000)
#define  KMC_BI_bifb_cnt_13_bifb_cnt_43_mask                                     (0x00000FFF)
#define  KMC_BI_bifb_cnt_13_bifb_cnt_44(data)                                    (0x0FFF0000&((data)<<16))
#define  KMC_BI_bifb_cnt_13_bifb_cnt_43(data)                                    (0x00000FFF&(data))
#define  KMC_BI_bifb_cnt_13_get_bifb_cnt_44(data)                                ((0x0FFF0000&(data))>>16)
#define  KMC_BI_bifb_cnt_13_get_bifb_cnt_43(data)                                (0x00000FFF&(data))

#define  KMC_BI_bifb_cnt_14                                                     0x1809F354
#define  KMC_BI_bifb_cnt_14_reg_addr                                             "0xB809F354"
#define  KMC_BI_bifb_cnt_14_reg                                                  0xB809F354
#define  KMC_BI_bifb_cnt_14_inst_addr                                            "0x0053"
#define  set_KMC_BI_bifb_cnt_14_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_cnt_14_reg)=data)
#define  get_KMC_BI_bifb_cnt_14_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_cnt_14_reg))
#define  KMC_BI_bifb_cnt_14_bifb_cnt_46_shift                                    (16)
#define  KMC_BI_bifb_cnt_14_bifb_cnt_45_shift                                    (0)
#define  KMC_BI_bifb_cnt_14_bifb_cnt_46_mask                                     (0x0FFF0000)
#define  KMC_BI_bifb_cnt_14_bifb_cnt_45_mask                                     (0x00000FFF)
#define  KMC_BI_bifb_cnt_14_bifb_cnt_46(data)                                    (0x0FFF0000&((data)<<16))
#define  KMC_BI_bifb_cnt_14_bifb_cnt_45(data)                                    (0x00000FFF&(data))
#define  KMC_BI_bifb_cnt_14_get_bifb_cnt_46(data)                                ((0x0FFF0000&(data))>>16)
#define  KMC_BI_bifb_cnt_14_get_bifb_cnt_45(data)                                (0x00000FFF&(data))

#define  KMC_BI_bifb_cnt_15                                                     0x1809F358
#define  KMC_BI_bifb_cnt_15_reg_addr                                             "0xB809F358"
#define  KMC_BI_bifb_cnt_15_reg                                                  0xB809F358
#define  KMC_BI_bifb_cnt_15_inst_addr                                            "0x0054"
#define  set_KMC_BI_bifb_cnt_15_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_cnt_15_reg)=data)
#define  get_KMC_BI_bifb_cnt_15_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_cnt_15_reg))
#define  KMC_BI_bifb_cnt_15_bifb_cnt_48_shift                                    (16)
#define  KMC_BI_bifb_cnt_15_bifb_cnt_47_shift                                    (0)
#define  KMC_BI_bifb_cnt_15_bifb_cnt_48_mask                                     (0x0FFF0000)
#define  KMC_BI_bifb_cnt_15_bifb_cnt_47_mask                                     (0x00000FFF)
#define  KMC_BI_bifb_cnt_15_bifb_cnt_48(data)                                    (0x0FFF0000&((data)<<16))
#define  KMC_BI_bifb_cnt_15_bifb_cnt_47(data)                                    (0x00000FFF&(data))
#define  KMC_BI_bifb_cnt_15_get_bifb_cnt_48(data)                                ((0x0FFF0000&(data))>>16)
#define  KMC_BI_bifb_cnt_15_get_bifb_cnt_47(data)                                (0x00000FFF&(data))

#define  KMC_BI_bifb_sum_11                                                     0x1809F35C
#define  KMC_BI_bifb_sum_11_reg_addr                                             "0xB809F35C"
#define  KMC_BI_bifb_sum_11_reg                                                  0xB809F35C
#define  KMC_BI_bifb_sum_11_inst_addr                                            "0x0055"
#define  set_KMC_BI_bifb_sum_11_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_11_reg)=data)
#define  get_KMC_BI_bifb_sum_11_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_11_reg))
#define  KMC_BI_bifb_sum_11_bifb_sum_11_shift                                    (0)
#define  KMC_BI_bifb_sum_11_bifb_sum_11_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_11_bifb_sum_11(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_11_get_bifb_sum_11(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_12                                                     0x1809F360
#define  KMC_BI_bifb_sum_12_reg_addr                                             "0xB809F360"
#define  KMC_BI_bifb_sum_12_reg                                                  0xB809F360
#define  KMC_BI_bifb_sum_12_inst_addr                                            "0x0056"
#define  set_KMC_BI_bifb_sum_12_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_12_reg)=data)
#define  get_KMC_BI_bifb_sum_12_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_12_reg))
#define  KMC_BI_bifb_sum_12_bifb_sum_12_shift                                    (0)
#define  KMC_BI_bifb_sum_12_bifb_sum_12_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_12_bifb_sum_12(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_12_get_bifb_sum_12(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_13                                                     0x1809F364
#define  KMC_BI_bifb_sum_13_reg_addr                                             "0xB809F364"
#define  KMC_BI_bifb_sum_13_reg                                                  0xB809F364
#define  KMC_BI_bifb_sum_13_inst_addr                                            "0x0057"
#define  set_KMC_BI_bifb_sum_13_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_13_reg)=data)
#define  get_KMC_BI_bifb_sum_13_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_13_reg))
#define  KMC_BI_bifb_sum_13_bifb_sum_13_shift                                    (0)
#define  KMC_BI_bifb_sum_13_bifb_sum_13_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_13_bifb_sum_13(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_13_get_bifb_sum_13(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_14                                                     0x1809F368
#define  KMC_BI_bifb_sum_14_reg_addr                                             "0xB809F368"
#define  KMC_BI_bifb_sum_14_reg                                                  0xB809F368
#define  KMC_BI_bifb_sum_14_inst_addr                                            "0x0058"
#define  set_KMC_BI_bifb_sum_14_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_14_reg)=data)
#define  get_KMC_BI_bifb_sum_14_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_14_reg))
#define  KMC_BI_bifb_sum_14_bifb_sum_14_shift                                    (0)
#define  KMC_BI_bifb_sum_14_bifb_sum_14_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_14_bifb_sum_14(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_14_get_bifb_sum_14(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_15                                                     0x1809F36C
#define  KMC_BI_bifb_sum_15_reg_addr                                             "0xB809F36C"
#define  KMC_BI_bifb_sum_15_reg                                                  0xB809F36C
#define  KMC_BI_bifb_sum_15_inst_addr                                            "0x0059"
#define  set_KMC_BI_bifb_sum_15_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_15_reg)=data)
#define  get_KMC_BI_bifb_sum_15_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_15_reg))
#define  KMC_BI_bifb_sum_15_bifb_sum_15_shift                                    (0)
#define  KMC_BI_bifb_sum_15_bifb_sum_15_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_15_bifb_sum_15(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_15_get_bifb_sum_15(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_16                                                     0x1809F370
#define  KMC_BI_bifb_sum_16_reg_addr                                             "0xB809F370"
#define  KMC_BI_bifb_sum_16_reg                                                  0xB809F370
#define  KMC_BI_bifb_sum_16_inst_addr                                            "0x005A"
#define  set_KMC_BI_bifb_sum_16_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_16_reg)=data)
#define  get_KMC_BI_bifb_sum_16_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_16_reg))
#define  KMC_BI_bifb_sum_16_bifb_sum_16_shift                                    (0)
#define  KMC_BI_bifb_sum_16_bifb_sum_16_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_16_bifb_sum_16(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_16_get_bifb_sum_16(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_17                                                     0x1809F374
#define  KMC_BI_bifb_sum_17_reg_addr                                             "0xB809F374"
#define  KMC_BI_bifb_sum_17_reg                                                  0xB809F374
#define  KMC_BI_bifb_sum_17_inst_addr                                            "0x005B"
#define  set_KMC_BI_bifb_sum_17_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_17_reg)=data)
#define  get_KMC_BI_bifb_sum_17_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_17_reg))
#define  KMC_BI_bifb_sum_17_bifb_sum_17_shift                                    (0)
#define  KMC_BI_bifb_sum_17_bifb_sum_17_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_17_bifb_sum_17(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_17_get_bifb_sum_17(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_18                                                     0x1809F378
#define  KMC_BI_bifb_sum_18_reg_addr                                             "0xB809F378"
#define  KMC_BI_bifb_sum_18_reg                                                  0xB809F378
#define  KMC_BI_bifb_sum_18_inst_addr                                            "0x005C"
#define  set_KMC_BI_bifb_sum_18_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_18_reg)=data)
#define  get_KMC_BI_bifb_sum_18_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_18_reg))
#define  KMC_BI_bifb_sum_18_bifb_sum_18_shift                                    (0)
#define  KMC_BI_bifb_sum_18_bifb_sum_18_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_18_bifb_sum_18(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_18_get_bifb_sum_18(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_21                                                     0x1809F37C
#define  KMC_BI_bifb_sum_21_reg_addr                                             "0xB809F37C"
#define  KMC_BI_bifb_sum_21_reg                                                  0xB809F37C
#define  KMC_BI_bifb_sum_21_inst_addr                                            "0x005D"
#define  set_KMC_BI_bifb_sum_21_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_21_reg)=data)
#define  get_KMC_BI_bifb_sum_21_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_21_reg))
#define  KMC_BI_bifb_sum_21_bifb_sum_21_shift                                    (0)
#define  KMC_BI_bifb_sum_21_bifb_sum_21_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_21_bifb_sum_21(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_21_get_bifb_sum_21(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_22                                                     0x1809F380
#define  KMC_BI_bifb_sum_22_reg_addr                                             "0xB809F380"
#define  KMC_BI_bifb_sum_22_reg                                                  0xB809F380
#define  KMC_BI_bifb_sum_22_inst_addr                                            "0x005E"
#define  set_KMC_BI_bifb_sum_22_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_22_reg)=data)
#define  get_KMC_BI_bifb_sum_22_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_22_reg))
#define  KMC_BI_bifb_sum_22_bifb_sum_22_shift                                    (0)
#define  KMC_BI_bifb_sum_22_bifb_sum_22_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_22_bifb_sum_22(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_22_get_bifb_sum_22(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_23                                                     0x1809F384
#define  KMC_BI_bifb_sum_23_reg_addr                                             "0xB809F384"
#define  KMC_BI_bifb_sum_23_reg                                                  0xB809F384
#define  KMC_BI_bifb_sum_23_inst_addr                                            "0x005F"
#define  set_KMC_BI_bifb_sum_23_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_23_reg)=data)
#define  get_KMC_BI_bifb_sum_23_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_23_reg))
#define  KMC_BI_bifb_sum_23_bifb_sum_23_shift                                    (0)
#define  KMC_BI_bifb_sum_23_bifb_sum_23_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_23_bifb_sum_23(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_23_get_bifb_sum_23(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_24                                                     0x1809F388
#define  KMC_BI_bifb_sum_24_reg_addr                                             "0xB809F388"
#define  KMC_BI_bifb_sum_24_reg                                                  0xB809F388
#define  KMC_BI_bifb_sum_24_inst_addr                                            "0x0060"
#define  set_KMC_BI_bifb_sum_24_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_24_reg)=data)
#define  get_KMC_BI_bifb_sum_24_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_24_reg))
#define  KMC_BI_bifb_sum_24_bifb_sum_24_shift                                    (0)
#define  KMC_BI_bifb_sum_24_bifb_sum_24_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_24_bifb_sum_24(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_24_get_bifb_sum_24(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_25                                                     0x1809F38C
#define  KMC_BI_bifb_sum_25_reg_addr                                             "0xB809F38C"
#define  KMC_BI_bifb_sum_25_reg                                                  0xB809F38C
#define  KMC_BI_bifb_sum_25_inst_addr                                            "0x0061"
#define  set_KMC_BI_bifb_sum_25_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_25_reg)=data)
#define  get_KMC_BI_bifb_sum_25_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_25_reg))
#define  KMC_BI_bifb_sum_25_bifb_sum_25_shift                                    (0)
#define  KMC_BI_bifb_sum_25_bifb_sum_25_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_25_bifb_sum_25(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_25_get_bifb_sum_25(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_26                                                     0x1809F390
#define  KMC_BI_bifb_sum_26_reg_addr                                             "0xB809F390"
#define  KMC_BI_bifb_sum_26_reg                                                  0xB809F390
#define  KMC_BI_bifb_sum_26_inst_addr                                            "0x0062"
#define  set_KMC_BI_bifb_sum_26_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_26_reg)=data)
#define  get_KMC_BI_bifb_sum_26_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_26_reg))
#define  KMC_BI_bifb_sum_26_bifb_sum_26_shift                                    (0)
#define  KMC_BI_bifb_sum_26_bifb_sum_26_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_26_bifb_sum_26(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_26_get_bifb_sum_26(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_27                                                     0x1809F394
#define  KMC_BI_bifb_sum_27_reg_addr                                             "0xB809F394"
#define  KMC_BI_bifb_sum_27_reg                                                  0xB809F394
#define  KMC_BI_bifb_sum_27_inst_addr                                            "0x0063"
#define  set_KMC_BI_bifb_sum_27_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_27_reg)=data)
#define  get_KMC_BI_bifb_sum_27_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_27_reg))
#define  KMC_BI_bifb_sum_27_bifb_sum_27_shift                                    (0)
#define  KMC_BI_bifb_sum_27_bifb_sum_27_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_27_bifb_sum_27(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_27_get_bifb_sum_27(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_28                                                     0x1809F398
#define  KMC_BI_bifb_sum_28_reg_addr                                             "0xB809F398"
#define  KMC_BI_bifb_sum_28_reg                                                  0xB809F398
#define  KMC_BI_bifb_sum_28_inst_addr                                            "0x0064"
#define  set_KMC_BI_bifb_sum_28_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_28_reg)=data)
#define  get_KMC_BI_bifb_sum_28_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_28_reg))
#define  KMC_BI_bifb_sum_28_bifb_sum_28_shift                                    (0)
#define  KMC_BI_bifb_sum_28_bifb_sum_28_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_28_bifb_sum_28(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_28_get_bifb_sum_28(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_31                                                     0x1809F39C
#define  KMC_BI_bifb_sum_31_reg_addr                                             "0xB809F39C"
#define  KMC_BI_bifb_sum_31_reg                                                  0xB809F39C
#define  KMC_BI_bifb_sum_31_inst_addr                                            "0x0065"
#define  set_KMC_BI_bifb_sum_31_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_31_reg)=data)
#define  get_KMC_BI_bifb_sum_31_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_31_reg))
#define  KMC_BI_bifb_sum_31_bifb_sum_31_shift                                    (0)
#define  KMC_BI_bifb_sum_31_bifb_sum_31_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_31_bifb_sum_31(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_31_get_bifb_sum_31(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_32                                                     0x1809F3A0
#define  KMC_BI_bifb_sum_32_reg_addr                                             "0xB809F3A0"
#define  KMC_BI_bifb_sum_32_reg                                                  0xB809F3A0
#define  KMC_BI_bifb_sum_32_inst_addr                                            "0x0066"
#define  set_KMC_BI_bifb_sum_32_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_32_reg)=data)
#define  get_KMC_BI_bifb_sum_32_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_32_reg))
#define  KMC_BI_bifb_sum_32_bifb_sum_32_shift                                    (0)
#define  KMC_BI_bifb_sum_32_bifb_sum_32_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_32_bifb_sum_32(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_32_get_bifb_sum_32(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_33                                                     0x1809F3A4
#define  KMC_BI_bifb_sum_33_reg_addr                                             "0xB809F3A4"
#define  KMC_BI_bifb_sum_33_reg                                                  0xB809F3A4
#define  KMC_BI_bifb_sum_33_inst_addr                                            "0x0067"
#define  set_KMC_BI_bifb_sum_33_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_33_reg)=data)
#define  get_KMC_BI_bifb_sum_33_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_33_reg))
#define  KMC_BI_bifb_sum_33_bifb_sum_33_shift                                    (0)
#define  KMC_BI_bifb_sum_33_bifb_sum_33_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_33_bifb_sum_33(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_33_get_bifb_sum_33(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_34                                                     0x1809F3A8
#define  KMC_BI_bifb_sum_34_reg_addr                                             "0xB809F3A8"
#define  KMC_BI_bifb_sum_34_reg                                                  0xB809F3A8
#define  KMC_BI_bifb_sum_34_inst_addr                                            "0x0068"
#define  set_KMC_BI_bifb_sum_34_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_34_reg)=data)
#define  get_KMC_BI_bifb_sum_34_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_34_reg))
#define  KMC_BI_bifb_sum_34_bifb_sum_34_shift                                    (0)
#define  KMC_BI_bifb_sum_34_bifb_sum_34_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_34_bifb_sum_34(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_34_get_bifb_sum_34(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_35                                                     0x1809F3AC
#define  KMC_BI_bifb_sum_35_reg_addr                                             "0xB809F3AC"
#define  KMC_BI_bifb_sum_35_reg                                                  0xB809F3AC
#define  KMC_BI_bifb_sum_35_inst_addr                                            "0x0069"
#define  set_KMC_BI_bifb_sum_35_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_35_reg)=data)
#define  get_KMC_BI_bifb_sum_35_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_35_reg))
#define  KMC_BI_bifb_sum_35_bifb_sum_35_shift                                    (0)
#define  KMC_BI_bifb_sum_35_bifb_sum_35_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_35_bifb_sum_35(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_35_get_bifb_sum_35(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_36                                                     0x1809F3B0
#define  KMC_BI_bifb_sum_36_reg_addr                                             "0xB809F3B0"
#define  KMC_BI_bifb_sum_36_reg                                                  0xB809F3B0
#define  KMC_BI_bifb_sum_36_inst_addr                                            "0x006A"
#define  set_KMC_BI_bifb_sum_36_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_36_reg)=data)
#define  get_KMC_BI_bifb_sum_36_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_36_reg))
#define  KMC_BI_bifb_sum_36_bifb_sum_36_shift                                    (0)
#define  KMC_BI_bifb_sum_36_bifb_sum_36_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_36_bifb_sum_36(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_36_get_bifb_sum_36(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_37                                                     0x1809F3B4
#define  KMC_BI_bifb_sum_37_reg_addr                                             "0xB809F3B4"
#define  KMC_BI_bifb_sum_37_reg                                                  0xB809F3B4
#define  KMC_BI_bifb_sum_37_inst_addr                                            "0x006B"
#define  set_KMC_BI_bifb_sum_37_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_37_reg)=data)
#define  get_KMC_BI_bifb_sum_37_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_37_reg))
#define  KMC_BI_bifb_sum_37_bifb_sum_37_shift                                    (0)
#define  KMC_BI_bifb_sum_37_bifb_sum_37_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_37_bifb_sum_37(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_37_get_bifb_sum_37(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_38                                                     0x1809F3B8
#define  KMC_BI_bifb_sum_38_reg_addr                                             "0xB809F3B8"
#define  KMC_BI_bifb_sum_38_reg                                                  0xB809F3B8
#define  KMC_BI_bifb_sum_38_inst_addr                                            "0x006C"
#define  set_KMC_BI_bifb_sum_38_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_38_reg)=data)
#define  get_KMC_BI_bifb_sum_38_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_38_reg))
#define  KMC_BI_bifb_sum_38_bifb_sum_38_shift                                    (0)
#define  KMC_BI_bifb_sum_38_bifb_sum_38_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_38_bifb_sum_38(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_38_get_bifb_sum_38(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_41                                                     0x1809F3BC
#define  KMC_BI_bifb_sum_41_reg_addr                                             "0xB809F3BC"
#define  KMC_BI_bifb_sum_41_reg                                                  0xB809F3BC
#define  KMC_BI_bifb_sum_41_inst_addr                                            "0x006D"
#define  set_KMC_BI_bifb_sum_41_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_41_reg)=data)
#define  get_KMC_BI_bifb_sum_41_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_41_reg))
#define  KMC_BI_bifb_sum_41_bifb_sum_41_shift                                    (0)
#define  KMC_BI_bifb_sum_41_bifb_sum_41_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_41_bifb_sum_41(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_41_get_bifb_sum_41(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_42                                                     0x1809F3C0
#define  KMC_BI_bifb_sum_42_reg_addr                                             "0xB809F3C0"
#define  KMC_BI_bifb_sum_42_reg                                                  0xB809F3C0
#define  KMC_BI_bifb_sum_42_inst_addr                                            "0x006E"
#define  set_KMC_BI_bifb_sum_42_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_42_reg)=data)
#define  get_KMC_BI_bifb_sum_42_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_42_reg))
#define  KMC_BI_bifb_sum_42_bifb_sum_42_shift                                    (0)
#define  KMC_BI_bifb_sum_42_bifb_sum_42_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_42_bifb_sum_42(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_42_get_bifb_sum_42(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_43                                                     0x1809F3C4
#define  KMC_BI_bifb_sum_43_reg_addr                                             "0xB809F3C4"
#define  KMC_BI_bifb_sum_43_reg                                                  0xB809F3C4
#define  KMC_BI_bifb_sum_43_inst_addr                                            "0x006F"
#define  set_KMC_BI_bifb_sum_43_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_43_reg)=data)
#define  get_KMC_BI_bifb_sum_43_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_43_reg))
#define  KMC_BI_bifb_sum_43_bifb_sum_43_shift                                    (0)
#define  KMC_BI_bifb_sum_43_bifb_sum_43_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_43_bifb_sum_43(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_43_get_bifb_sum_43(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_44                                                     0x1809F3C8
#define  KMC_BI_bifb_sum_44_reg_addr                                             "0xB809F3C8"
#define  KMC_BI_bifb_sum_44_reg                                                  0xB809F3C8
#define  KMC_BI_bifb_sum_44_inst_addr                                            "0x0070"
#define  set_KMC_BI_bifb_sum_44_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_44_reg)=data)
#define  get_KMC_BI_bifb_sum_44_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_44_reg))
#define  KMC_BI_bifb_sum_44_bifb_sum_44_shift                                    (0)
#define  KMC_BI_bifb_sum_44_bifb_sum_44_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_44_bifb_sum_44(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_44_get_bifb_sum_44(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_45                                                     0x1809F3CC
#define  KMC_BI_bifb_sum_45_reg_addr                                             "0xB809F3CC"
#define  KMC_BI_bifb_sum_45_reg                                                  0xB809F3CC
#define  KMC_BI_bifb_sum_45_inst_addr                                            "0x0071"
#define  set_KMC_BI_bifb_sum_45_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_45_reg)=data)
#define  get_KMC_BI_bifb_sum_45_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_45_reg))
#define  KMC_BI_bifb_sum_45_bifb_sum_45_shift                                    (0)
#define  KMC_BI_bifb_sum_45_bifb_sum_45_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_45_bifb_sum_45(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_45_get_bifb_sum_45(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_46                                                     0x1809F3D0
#define  KMC_BI_bifb_sum_46_reg_addr                                             "0xB809F3D0"
#define  KMC_BI_bifb_sum_46_reg                                                  0xB809F3D0
#define  KMC_BI_bifb_sum_46_inst_addr                                            "0x0072"
#define  set_KMC_BI_bifb_sum_46_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_46_reg)=data)
#define  get_KMC_BI_bifb_sum_46_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_46_reg))
#define  KMC_BI_bifb_sum_46_bifb_sum_46_shift                                    (0)
#define  KMC_BI_bifb_sum_46_bifb_sum_46_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_46_bifb_sum_46(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_46_get_bifb_sum_46(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_47                                                     0x1809F3D4
#define  KMC_BI_bifb_sum_47_reg_addr                                             "0xB809F3D4"
#define  KMC_BI_bifb_sum_47_reg                                                  0xB809F3D4
#define  KMC_BI_bifb_sum_47_inst_addr                                            "0x0073"
#define  set_KMC_BI_bifb_sum_47_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_47_reg)=data)
#define  get_KMC_BI_bifb_sum_47_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_47_reg))
#define  KMC_BI_bifb_sum_47_bifb_sum_47_shift                                    (0)
#define  KMC_BI_bifb_sum_47_bifb_sum_47_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_47_bifb_sum_47(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_47_get_bifb_sum_47(data)                                (0xFFFFFFFF&(data))

#define  KMC_BI_bifb_sum_48                                                     0x1809F3D8
#define  KMC_BI_bifb_sum_48_reg_addr                                             "0xB809F3D8"
#define  KMC_BI_bifb_sum_48_reg                                                  0xB809F3D8
#define  KMC_BI_bifb_sum_48_inst_addr                                            "0x0074"
#define  set_KMC_BI_bifb_sum_48_reg(data)                                        (*((volatile unsigned int*)KMC_BI_bifb_sum_48_reg)=data)
#define  get_KMC_BI_bifb_sum_48_reg                                              (*((volatile unsigned int*)KMC_BI_bifb_sum_48_reg))
#define  KMC_BI_bifb_sum_48_bifb_sum_48_shift                                    (0)
#define  KMC_BI_bifb_sum_48_bifb_sum_48_mask                                     (0xFFFFFFFF)
#define  KMC_BI_bifb_sum_48_bifb_sum_48(data)                                    (0xFFFFFFFF&(data))
#define  KMC_BI_bifb_sum_48_get_bifb_sum_48(data)                                (0xFFFFFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KMC_BI register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  bi_mv_fix_en:1;
    };
}kmc_bi_bi_top_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  bi_fb_mode:2;
        RBus_UInt32  bi_fb_statistics_en:1;
        RBus_UInt32  bi_fb_fix_en:1;
    };
}kmc_bi_bi_top_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_read_sel:1;
        RBus_UInt32  res1:27;
        RBus_UInt32  bi_double_apply1:1;
        RBus_UInt32  bi_double_apply0:1;
        RBus_UInt32  bi_double_en1:1;
        RBus_UInt32  bi_double_en0:1;
    };
}kmc_bi_bi_top_d_buf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  bi_blk_res_sel:1;
    };
}kmc_bi_bi_size_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv11_mvy:10;
        RBus_UInt32  bi_rmv11_mvx:11;
    };
}kmc_bi_bi_rmv11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv12_mvy:10;
        RBus_UInt32  bi_rmv12_mvx:11;
    };
}kmc_bi_bi_rmv12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv13_mvy:10;
        RBus_UInt32  bi_rmv13_mvx:11;
    };
}kmc_bi_bi_rmv13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv14_mvy:10;
        RBus_UInt32  bi_rmv14_mvx:11;
    };
}kmc_bi_bi_rmv14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv15_mvy:10;
        RBus_UInt32  bi_rmv15_mvx:11;
    };
}kmc_bi_bi_rmv15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv16_mvy:10;
        RBus_UInt32  bi_rmv16_mvx:11;
    };
}kmc_bi_bi_rmv16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv17_mvy:10;
        RBus_UInt32  bi_rmv17_mvx:11;
    };
}kmc_bi_bi_rmv17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv18_mvy:10;
        RBus_UInt32  bi_rmv18_mvx:11;
    };
}kmc_bi_bi_rmv18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv21_mvy:10;
        RBus_UInt32  bi_rmv21_mvx:11;
    };
}kmc_bi_bi_rmv21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv22_mvy:10;
        RBus_UInt32  bi_rmv22_mvx:11;
    };
}kmc_bi_bi_rmv22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv23_mvy:10;
        RBus_UInt32  bi_rmv23_mvx:11;
    };
}kmc_bi_bi_rmv23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv24_mvy:10;
        RBus_UInt32  bi_rmv24_mvx:11;
    };
}kmc_bi_bi_rmv24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv25_mvy:10;
        RBus_UInt32  bi_rmv25_mvx:11;
    };
}kmc_bi_bi_rmv25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv26_mvy:10;
        RBus_UInt32  bi_rmv26_mvx:11;
    };
}kmc_bi_bi_rmv26_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv27_mvy:10;
        RBus_UInt32  bi_rmv27_mvx:11;
    };
}kmc_bi_bi_rmv27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv28_mvy:10;
        RBus_UInt32  bi_rmv28_mvx:11;
    };
}kmc_bi_bi_rmv28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv31_mvy:10;
        RBus_UInt32  bi_rmv31_mvx:11;
    };
}kmc_bi_bi_rmv31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv32_mvy:10;
        RBus_UInt32  bi_rmv32_mvx:11;
    };
}kmc_bi_bi_rmv32_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv33_mvy:10;
        RBus_UInt32  bi_rmv33_mvx:11;
    };
}kmc_bi_bi_rmv33_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv34_mvy:10;
        RBus_UInt32  bi_rmv34_mvx:11;
    };
}kmc_bi_bi_rmv34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv35_mvy:10;
        RBus_UInt32  bi_rmv35_mvx:11;
    };
}kmc_bi_bi_rmv35_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv36_mvy:10;
        RBus_UInt32  bi_rmv36_mvx:11;
    };
}kmc_bi_bi_rmv36_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv37_mvy:10;
        RBus_UInt32  bi_rmv37_mvx:11;
    };
}kmc_bi_bi_rmv37_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv38_mvy:10;
        RBus_UInt32  bi_rmv38_mvx:11;
    };
}kmc_bi_bi_rmv38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv41_mvy:10;
        RBus_UInt32  bi_rmv41_mvx:11;
    };
}kmc_bi_bi_rmv41_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv42_mvy:10;
        RBus_UInt32  bi_rmv42_mvx:11;
    };
}kmc_bi_bi_rmv42_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv43_mvy:10;
        RBus_UInt32  bi_rmv43_mvx:11;
    };
}kmc_bi_bi_rmv43_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv44_mvy:10;
        RBus_UInt32  bi_rmv44_mvx:11;
    };
}kmc_bi_bi_rmv44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv45_mvy:10;
        RBus_UInt32  bi_rmv45_mvx:11;
    };
}kmc_bi_bi_rmv45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv46_mvy:10;
        RBus_UInt32  bi_rmv46_mvx:11;
    };
}kmc_bi_bi_rmv46_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv47_mvy:10;
        RBus_UInt32  bi_rmv47_mvx:11;
    };
}kmc_bi_bi_rmv47_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bi_rmv48_mvy:10;
        RBus_UInt32  bi_rmv48_mvx:11;
    };
}kmc_bi_bi_rmv48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_beta_14:8;
        RBus_UInt32  bi_beta_13:8;
        RBus_UInt32  bi_beta_12:8;
        RBus_UInt32  bi_beta_11:8;
    };
}kmc_bi_bi_beta_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_beta_18:8;
        RBus_UInt32  bi_beta_17:8;
        RBus_UInt32  bi_beta_16:8;
        RBus_UInt32  bi_beta_15:8;
    };
}kmc_bi_bi_beta_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_beta_24:8;
        RBus_UInt32  bi_beta_23:8;
        RBus_UInt32  bi_beta_22:8;
        RBus_UInt32  bi_beta_21:8;
    };
}kmc_bi_bi_beta_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_beta_28:8;
        RBus_UInt32  bi_beta_27:8;
        RBus_UInt32  bi_beta_26:8;
        RBus_UInt32  bi_beta_25:8;
    };
}kmc_bi_bi_beta_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_beta_34:8;
        RBus_UInt32  bi_beta_33:8;
        RBus_UInt32  bi_beta_32:8;
        RBus_UInt32  bi_beta_31:8;
    };
}kmc_bi_bi_beta_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_beta_38:8;
        RBus_UInt32  bi_beta_37:8;
        RBus_UInt32  bi_beta_36:8;
        RBus_UInt32  bi_beta_35:8;
    };
}kmc_bi_bi_beta_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_beta_44:8;
        RBus_UInt32  bi_beta_43:8;
        RBus_UInt32  bi_beta_42:8;
        RBus_UInt32  bi_beta_41:8;
    };
}kmc_bi_bi_beta_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_beta_48:8;
        RBus_UInt32  bi_beta_47:8;
        RBus_UInt32  bi_beta_46:8;
        RBus_UInt32  bi_beta_45:8;
    };
}kmc_bi_bi_beta_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_fb_14:8;
        RBus_UInt32  bi_fb_13:8;
        RBus_UInt32  bi_fb_12:8;
        RBus_UInt32  bi_fb_11:8;
    };
}kmc_bi_bi_fb_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_fb_18:8;
        RBus_UInt32  bi_fb_17:8;
        RBus_UInt32  bi_fb_16:8;
        RBus_UInt32  bi_fb_15:8;
    };
}kmc_bi_bi_fb_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_fb_24:8;
        RBus_UInt32  bi_fb_23:8;
        RBus_UInt32  bi_fb_22:8;
        RBus_UInt32  bi_fb_21:8;
    };
}kmc_bi_bi_fb_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_fb_28:8;
        RBus_UInt32  bi_fb_27:8;
        RBus_UInt32  bi_fb_26:8;
        RBus_UInt32  bi_fb_25:8;
    };
}kmc_bi_bi_fb_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_fb_34:8;
        RBus_UInt32  bi_fb_33:8;
        RBus_UInt32  bi_fb_32:8;
        RBus_UInt32  bi_fb_31:8;
    };
}kmc_bi_bi_fb_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_fb_38:8;
        RBus_UInt32  bi_fb_37:8;
        RBus_UInt32  bi_fb_36:8;
        RBus_UInt32  bi_fb_35:8;
    };
}kmc_bi_bi_fb_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_fb_44:8;
        RBus_UInt32  bi_fb_43:8;
        RBus_UInt32  bi_fb_42:8;
        RBus_UInt32  bi_fb_41:8;
    };
}kmc_bi_bi_fb_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_fb_48:8;
        RBus_UInt32  bi_fb_47:8;
        RBus_UInt32  bi_fb_46:8;
        RBus_UInt32  bi_fb_45:8;
    };
}kmc_bi_bi_fb_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_gama_14:8;
        RBus_UInt32  bi_gama_13:8;
        RBus_UInt32  bi_gama_12:8;
        RBus_UInt32  bi_gama_11:8;
    };
}kmc_bi_bi_gama_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_gama_18:8;
        RBus_UInt32  bi_gama_17:8;
        RBus_UInt32  bi_gama_16:8;
        RBus_UInt32  bi_gama_15:8;
    };
}kmc_bi_bi_gama_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_gama_24:8;
        RBus_UInt32  bi_gama_23:8;
        RBus_UInt32  bi_gama_22:8;
        RBus_UInt32  bi_gama_21:8;
    };
}kmc_bi_bi_gama_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_gama_28:8;
        RBus_UInt32  bi_gama_27:8;
        RBus_UInt32  bi_gama_26:8;
        RBus_UInt32  bi_gama_25:8;
    };
}kmc_bi_bi_gama_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_gama_34:8;
        RBus_UInt32  bi_gama_33:8;
        RBus_UInt32  bi_gama_32:8;
        RBus_UInt32  bi_gama_31:8;
    };
}kmc_bi_bi_gama_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_gama_38:8;
        RBus_UInt32  bi_gama_37:8;
        RBus_UInt32  bi_gama_36:8;
        RBus_UInt32  bi_gama_35:8;
    };
}kmc_bi_bi_gama_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_gama_44:8;
        RBus_UInt32  bi_gama_43:8;
        RBus_UInt32  bi_gama_42:8;
        RBus_UInt32  bi_gama_41:8;
    };
}kmc_bi_bi_gama_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_gama_48:8;
        RBus_UInt32  bi_gama_47:8;
        RBus_UInt32  bi_gama_46:8;
        RBus_UInt32  bi_gama_45:8;
    };
}kmc_bi_bi_gama_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  bifb_statistic_thl:8;
    };
}kmc_bi_bifb_statistic_thl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_max_14:8;
        RBus_UInt32  bi_max_13:8;
        RBus_UInt32  bi_max_12:8;
        RBus_UInt32  bi_max_11:8;
    };
}kmc_bi_bi_max_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_max_18:8;
        RBus_UInt32  bi_max_17:8;
        RBus_UInt32  bi_max_16:8;
        RBus_UInt32  bi_max_15:8;
    };
}kmc_bi_bi_max_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_max_24:8;
        RBus_UInt32  bi_max_23:8;
        RBus_UInt32  bi_max_22:8;
        RBus_UInt32  bi_max_21:8;
    };
}kmc_bi_bi_max_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_max_28:8;
        RBus_UInt32  bi_max_27:8;
        RBus_UInt32  bi_max_26:8;
        RBus_UInt32  bi_max_25:8;
    };
}kmc_bi_bi_max_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_max_34:8;
        RBus_UInt32  bi_max_33:8;
        RBus_UInt32  bi_max_32:8;
        RBus_UInt32  bi_max_31:8;
    };
}kmc_bi_bi_max_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_max_38:8;
        RBus_UInt32  bi_max_37:8;
        RBus_UInt32  bi_max_36:8;
        RBus_UInt32  bi_max_35:8;
    };
}kmc_bi_bi_max_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_max_44:8;
        RBus_UInt32  bi_max_43:8;
        RBus_UInt32  bi_max_42:8;
        RBus_UInt32  bi_max_41:8;
    };
}kmc_bi_bi_max_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_max_48:8;
        RBus_UInt32  bi_max_47:8;
        RBus_UInt32  bi_max_46:8;
        RBus_UInt32  bi_max_45:8;
    };
}kmc_bi_bi_max_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_12:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  bifb_cnt_11:12;
    };
}kmc_bi_bifb_cnt_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_14:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  bifb_cnt_13:12;
    };
}kmc_bi_bifb_cnt_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_16:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  bifb_cnt_15:12;
    };
}kmc_bi_bifb_cnt_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_18:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  bifb_cnt_17:12;
    };
}kmc_bi_bifb_cnt_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_22:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  bifb_cnt_21:12;
    };
}kmc_bi_bifb_cnt_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_24:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  bifb_cnt_23:12;
    };
}kmc_bi_bifb_cnt_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_26:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  bifb_cnt_25:12;
    };
}kmc_bi_bifb_cnt_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_28:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  bifb_cnt_27:12;
    };
}kmc_bi_bifb_cnt_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_32:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  bifb_cnt_31:12;
    };
}kmc_bi_bifb_cnt_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_34:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  bifb_cnt_33:12;
    };
}kmc_bi_bifb_cnt_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_36:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  bifb_cnt_35:12;
    };
}kmc_bi_bifb_cnt_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_38:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  bifb_cnt_37:12;
    };
}kmc_bi_bifb_cnt_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_42:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  bifb_cnt_41:12;
    };
}kmc_bi_bifb_cnt_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_44:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  bifb_cnt_43:12;
    };
}kmc_bi_bifb_cnt_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_46:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  bifb_cnt_45:12;
    };
}kmc_bi_bifb_cnt_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_48:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  bifb_cnt_47:12;
    };
}kmc_bi_bifb_cnt_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_11:32;
    };
}kmc_bi_bifb_sum_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_12:32;
    };
}kmc_bi_bifb_sum_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_13:32;
    };
}kmc_bi_bifb_sum_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_14:32;
    };
}kmc_bi_bifb_sum_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_15:32;
    };
}kmc_bi_bifb_sum_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_16:32;
    };
}kmc_bi_bifb_sum_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_17:32;
    };
}kmc_bi_bifb_sum_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_18:32;
    };
}kmc_bi_bifb_sum_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_21:32;
    };
}kmc_bi_bifb_sum_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_22:32;
    };
}kmc_bi_bifb_sum_22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_23:32;
    };
}kmc_bi_bifb_sum_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_24:32;
    };
}kmc_bi_bifb_sum_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_25:32;
    };
}kmc_bi_bifb_sum_25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_26:32;
    };
}kmc_bi_bifb_sum_26_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_27:32;
    };
}kmc_bi_bifb_sum_27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_28:32;
    };
}kmc_bi_bifb_sum_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_31:32;
    };
}kmc_bi_bifb_sum_31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_32:32;
    };
}kmc_bi_bifb_sum_32_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_33:32;
    };
}kmc_bi_bifb_sum_33_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_34:32;
    };
}kmc_bi_bifb_sum_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_35:32;
    };
}kmc_bi_bifb_sum_35_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_36:32;
    };
}kmc_bi_bifb_sum_36_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_37:32;
    };
}kmc_bi_bifb_sum_37_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_38:32;
    };
}kmc_bi_bifb_sum_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_41:32;
    };
}kmc_bi_bifb_sum_41_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_42:32;
    };
}kmc_bi_bifb_sum_42_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_43:32;
    };
}kmc_bi_bifb_sum_43_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_44:32;
    };
}kmc_bi_bifb_sum_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_45:32;
    };
}kmc_bi_bifb_sum_45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_46:32;
    };
}kmc_bi_bifb_sum_46_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_47:32;
    };
}kmc_bi_bifb_sum_47_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_48:32;
    };
}kmc_bi_bifb_sum_48_RBUS;

#else //apply LITTLE_ENDIAN

//======KMC_BI register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_mv_fix_en:1;
        RBus_UInt32  res1:31;
    };
}kmc_bi_bi_top_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_fb_fix_en:1;
        RBus_UInt32  bi_fb_statistics_en:1;
        RBus_UInt32  bi_fb_mode:2;
        RBus_UInt32  res1:28;
    };
}kmc_bi_bi_top_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_double_en0:1;
        RBus_UInt32  bi_double_en1:1;
        RBus_UInt32  bi_double_apply0:1;
        RBus_UInt32  bi_double_apply1:1;
        RBus_UInt32  res1:27;
        RBus_UInt32  bi_read_sel:1;
    };
}kmc_bi_bi_top_d_buf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_blk_res_sel:1;
        RBus_UInt32  res1:31;
    };
}kmc_bi_bi_size_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv11_mvx:11;
        RBus_UInt32  bi_rmv11_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv12_mvx:11;
        RBus_UInt32  bi_rmv12_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv13_mvx:11;
        RBus_UInt32  bi_rmv13_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv14_mvx:11;
        RBus_UInt32  bi_rmv14_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv15_mvx:11;
        RBus_UInt32  bi_rmv15_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv16_mvx:11;
        RBus_UInt32  bi_rmv16_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv17_mvx:11;
        RBus_UInt32  bi_rmv17_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv18_mvx:11;
        RBus_UInt32  bi_rmv18_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv21_mvx:11;
        RBus_UInt32  bi_rmv21_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv22_mvx:11;
        RBus_UInt32  bi_rmv22_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv23_mvx:11;
        RBus_UInt32  bi_rmv23_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv24_mvx:11;
        RBus_UInt32  bi_rmv24_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv25_mvx:11;
        RBus_UInt32  bi_rmv25_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv26_mvx:11;
        RBus_UInt32  bi_rmv26_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv26_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv27_mvx:11;
        RBus_UInt32  bi_rmv27_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv28_mvx:11;
        RBus_UInt32  bi_rmv28_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv31_mvx:11;
        RBus_UInt32  bi_rmv31_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv32_mvx:11;
        RBus_UInt32  bi_rmv32_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv32_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv33_mvx:11;
        RBus_UInt32  bi_rmv33_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv33_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv34_mvx:11;
        RBus_UInt32  bi_rmv34_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv35_mvx:11;
        RBus_UInt32  bi_rmv35_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv35_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv36_mvx:11;
        RBus_UInt32  bi_rmv36_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv36_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv37_mvx:11;
        RBus_UInt32  bi_rmv37_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv37_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv38_mvx:11;
        RBus_UInt32  bi_rmv38_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv41_mvx:11;
        RBus_UInt32  bi_rmv41_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv41_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv42_mvx:11;
        RBus_UInt32  bi_rmv42_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv42_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv43_mvx:11;
        RBus_UInt32  bi_rmv43_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv43_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv44_mvx:11;
        RBus_UInt32  bi_rmv44_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv45_mvx:11;
        RBus_UInt32  bi_rmv45_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv46_mvx:11;
        RBus_UInt32  bi_rmv46_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv46_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv47_mvx:11;
        RBus_UInt32  bi_rmv47_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv47_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_rmv48_mvx:11;
        RBus_UInt32  bi_rmv48_mvy:10;
        RBus_UInt32  res1:11;
    };
}kmc_bi_bi_rmv48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_beta_11:8;
        RBus_UInt32  bi_beta_12:8;
        RBus_UInt32  bi_beta_13:8;
        RBus_UInt32  bi_beta_14:8;
    };
}kmc_bi_bi_beta_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_beta_15:8;
        RBus_UInt32  bi_beta_16:8;
        RBus_UInt32  bi_beta_17:8;
        RBus_UInt32  bi_beta_18:8;
    };
}kmc_bi_bi_beta_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_beta_21:8;
        RBus_UInt32  bi_beta_22:8;
        RBus_UInt32  bi_beta_23:8;
        RBus_UInt32  bi_beta_24:8;
    };
}kmc_bi_bi_beta_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_beta_25:8;
        RBus_UInt32  bi_beta_26:8;
        RBus_UInt32  bi_beta_27:8;
        RBus_UInt32  bi_beta_28:8;
    };
}kmc_bi_bi_beta_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_beta_31:8;
        RBus_UInt32  bi_beta_32:8;
        RBus_UInt32  bi_beta_33:8;
        RBus_UInt32  bi_beta_34:8;
    };
}kmc_bi_bi_beta_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_beta_35:8;
        RBus_UInt32  bi_beta_36:8;
        RBus_UInt32  bi_beta_37:8;
        RBus_UInt32  bi_beta_38:8;
    };
}kmc_bi_bi_beta_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_beta_41:8;
        RBus_UInt32  bi_beta_42:8;
        RBus_UInt32  bi_beta_43:8;
        RBus_UInt32  bi_beta_44:8;
    };
}kmc_bi_bi_beta_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_beta_45:8;
        RBus_UInt32  bi_beta_46:8;
        RBus_UInt32  bi_beta_47:8;
        RBus_UInt32  bi_beta_48:8;
    };
}kmc_bi_bi_beta_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_fb_11:8;
        RBus_UInt32  bi_fb_12:8;
        RBus_UInt32  bi_fb_13:8;
        RBus_UInt32  bi_fb_14:8;
    };
}kmc_bi_bi_fb_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_fb_15:8;
        RBus_UInt32  bi_fb_16:8;
        RBus_UInt32  bi_fb_17:8;
        RBus_UInt32  bi_fb_18:8;
    };
}kmc_bi_bi_fb_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_fb_21:8;
        RBus_UInt32  bi_fb_22:8;
        RBus_UInt32  bi_fb_23:8;
        RBus_UInt32  bi_fb_24:8;
    };
}kmc_bi_bi_fb_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_fb_25:8;
        RBus_UInt32  bi_fb_26:8;
        RBus_UInt32  bi_fb_27:8;
        RBus_UInt32  bi_fb_28:8;
    };
}kmc_bi_bi_fb_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_fb_31:8;
        RBus_UInt32  bi_fb_32:8;
        RBus_UInt32  bi_fb_33:8;
        RBus_UInt32  bi_fb_34:8;
    };
}kmc_bi_bi_fb_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_fb_35:8;
        RBus_UInt32  bi_fb_36:8;
        RBus_UInt32  bi_fb_37:8;
        RBus_UInt32  bi_fb_38:8;
    };
}kmc_bi_bi_fb_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_fb_41:8;
        RBus_UInt32  bi_fb_42:8;
        RBus_UInt32  bi_fb_43:8;
        RBus_UInt32  bi_fb_44:8;
    };
}kmc_bi_bi_fb_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_fb_45:8;
        RBus_UInt32  bi_fb_46:8;
        RBus_UInt32  bi_fb_47:8;
        RBus_UInt32  bi_fb_48:8;
    };
}kmc_bi_bi_fb_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_gama_11:8;
        RBus_UInt32  bi_gama_12:8;
        RBus_UInt32  bi_gama_13:8;
        RBus_UInt32  bi_gama_14:8;
    };
}kmc_bi_bi_gama_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_gama_15:8;
        RBus_UInt32  bi_gama_16:8;
        RBus_UInt32  bi_gama_17:8;
        RBus_UInt32  bi_gama_18:8;
    };
}kmc_bi_bi_gama_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_gama_21:8;
        RBus_UInt32  bi_gama_22:8;
        RBus_UInt32  bi_gama_23:8;
        RBus_UInt32  bi_gama_24:8;
    };
}kmc_bi_bi_gama_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_gama_25:8;
        RBus_UInt32  bi_gama_26:8;
        RBus_UInt32  bi_gama_27:8;
        RBus_UInt32  bi_gama_28:8;
    };
}kmc_bi_bi_gama_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_gama_31:8;
        RBus_UInt32  bi_gama_32:8;
        RBus_UInt32  bi_gama_33:8;
        RBus_UInt32  bi_gama_34:8;
    };
}kmc_bi_bi_gama_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_gama_35:8;
        RBus_UInt32  bi_gama_36:8;
        RBus_UInt32  bi_gama_37:8;
        RBus_UInt32  bi_gama_38:8;
    };
}kmc_bi_bi_gama_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_gama_41:8;
        RBus_UInt32  bi_gama_42:8;
        RBus_UInt32  bi_gama_43:8;
        RBus_UInt32  bi_gama_44:8;
    };
}kmc_bi_bi_gama_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_gama_45:8;
        RBus_UInt32  bi_gama_46:8;
        RBus_UInt32  bi_gama_47:8;
        RBus_UInt32  bi_gama_48:8;
    };
}kmc_bi_bi_gama_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_statistic_thl:8;
        RBus_UInt32  res1:24;
    };
}kmc_bi_bifb_statistic_thl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_max_11:8;
        RBus_UInt32  bi_max_12:8;
        RBus_UInt32  bi_max_13:8;
        RBus_UInt32  bi_max_14:8;
    };
}kmc_bi_bi_max_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_max_15:8;
        RBus_UInt32  bi_max_16:8;
        RBus_UInt32  bi_max_17:8;
        RBus_UInt32  bi_max_18:8;
    };
}kmc_bi_bi_max_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_max_21:8;
        RBus_UInt32  bi_max_22:8;
        RBus_UInt32  bi_max_23:8;
        RBus_UInt32  bi_max_24:8;
    };
}kmc_bi_bi_max_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_max_25:8;
        RBus_UInt32  bi_max_26:8;
        RBus_UInt32  bi_max_27:8;
        RBus_UInt32  bi_max_28:8;
    };
}kmc_bi_bi_max_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_max_31:8;
        RBus_UInt32  bi_max_32:8;
        RBus_UInt32  bi_max_33:8;
        RBus_UInt32  bi_max_34:8;
    };
}kmc_bi_bi_max_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_max_35:8;
        RBus_UInt32  bi_max_36:8;
        RBus_UInt32  bi_max_37:8;
        RBus_UInt32  bi_max_38:8;
    };
}kmc_bi_bi_max_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_max_41:8;
        RBus_UInt32  bi_max_42:8;
        RBus_UInt32  bi_max_43:8;
        RBus_UInt32  bi_max_44:8;
    };
}kmc_bi_bi_max_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bi_max_45:8;
        RBus_UInt32  bi_max_46:8;
        RBus_UInt32  bi_max_47:8;
        RBus_UInt32  bi_max_48:8;
    };
}kmc_bi_bi_max_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_cnt_11:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_12:12;
        RBus_UInt32  res2:4;
    };
}kmc_bi_bifb_cnt_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_cnt_13:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_14:12;
        RBus_UInt32  res2:4;
    };
}kmc_bi_bifb_cnt_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_cnt_15:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_16:12;
        RBus_UInt32  res2:4;
    };
}kmc_bi_bifb_cnt_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_cnt_17:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_18:12;
        RBus_UInt32  res2:4;
    };
}kmc_bi_bifb_cnt_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_cnt_21:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_22:12;
        RBus_UInt32  res2:4;
    };
}kmc_bi_bifb_cnt_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_cnt_23:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_24:12;
        RBus_UInt32  res2:4;
    };
}kmc_bi_bifb_cnt_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_cnt_25:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_26:12;
        RBus_UInt32  res2:4;
    };
}kmc_bi_bifb_cnt_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_cnt_27:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_28:12;
        RBus_UInt32  res2:4;
    };
}kmc_bi_bifb_cnt_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_cnt_31:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_32:12;
        RBus_UInt32  res2:4;
    };
}kmc_bi_bifb_cnt_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_cnt_33:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_34:12;
        RBus_UInt32  res2:4;
    };
}kmc_bi_bifb_cnt_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_cnt_35:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_36:12;
        RBus_UInt32  res2:4;
    };
}kmc_bi_bifb_cnt_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_cnt_37:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_38:12;
        RBus_UInt32  res2:4;
    };
}kmc_bi_bifb_cnt_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_cnt_41:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_42:12;
        RBus_UInt32  res2:4;
    };
}kmc_bi_bifb_cnt_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_cnt_43:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_44:12;
        RBus_UInt32  res2:4;
    };
}kmc_bi_bifb_cnt_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_cnt_45:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_46:12;
        RBus_UInt32  res2:4;
    };
}kmc_bi_bifb_cnt_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_cnt_47:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  bifb_cnt_48:12;
        RBus_UInt32  res2:4;
    };
}kmc_bi_bifb_cnt_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_11:32;
    };
}kmc_bi_bifb_sum_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_12:32;
    };
}kmc_bi_bifb_sum_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_13:32;
    };
}kmc_bi_bifb_sum_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_14:32;
    };
}kmc_bi_bifb_sum_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_15:32;
    };
}kmc_bi_bifb_sum_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_16:32;
    };
}kmc_bi_bifb_sum_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_17:32;
    };
}kmc_bi_bifb_sum_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_18:32;
    };
}kmc_bi_bifb_sum_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_21:32;
    };
}kmc_bi_bifb_sum_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_22:32;
    };
}kmc_bi_bifb_sum_22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_23:32;
    };
}kmc_bi_bifb_sum_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_24:32;
    };
}kmc_bi_bifb_sum_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_25:32;
    };
}kmc_bi_bifb_sum_25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_26:32;
    };
}kmc_bi_bifb_sum_26_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_27:32;
    };
}kmc_bi_bifb_sum_27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_28:32;
    };
}kmc_bi_bifb_sum_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_31:32;
    };
}kmc_bi_bifb_sum_31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_32:32;
    };
}kmc_bi_bifb_sum_32_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_33:32;
    };
}kmc_bi_bifb_sum_33_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_34:32;
    };
}kmc_bi_bifb_sum_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_35:32;
    };
}kmc_bi_bifb_sum_35_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_36:32;
    };
}kmc_bi_bifb_sum_36_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_37:32;
    };
}kmc_bi_bifb_sum_37_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_38:32;
    };
}kmc_bi_bifb_sum_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_41:32;
    };
}kmc_bi_bifb_sum_41_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_42:32;
    };
}kmc_bi_bifb_sum_42_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_43:32;
    };
}kmc_bi_bifb_sum_43_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_44:32;
    };
}kmc_bi_bifb_sum_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_45:32;
    };
}kmc_bi_bifb_sum_45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_46:32;
    };
}kmc_bi_bifb_sum_46_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_47:32;
    };
}kmc_bi_bifb_sum_47_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bifb_sum_48:32;
    };
}kmc_bi_bifb_sum_48_RBUS;




#endif 


#endif 
