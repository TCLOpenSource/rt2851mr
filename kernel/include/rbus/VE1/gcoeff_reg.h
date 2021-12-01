/**
* @file Merlin5_LGCY_VE_GCOEFF_Arch_Spec
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_GCOEFF_REG_H_
#define _RBUS_GCOEFF_REG_H_

#include "rbus_types.h"



//  GCOEFF Register Address
#define  GCOEFF_CTRL                                                            0x1800F800
#define  GCOEFF_CTRL_reg_addr                                                    "0xB800F800"
#define  GCOEFF_CTRL_reg                                                         0xB800F800
#define  GCOEFF_CTRL_inst_addr                                                   "0x0000"
#define  GCOEFF_CTRL_inst_adr                                                    "0x0000"
#define  GCOEFF_CTRL_inst                                                        0x0000
#define  set_GCOEFF_CTRL_reg(data)                                               (*((volatile unsigned int*)GCOEFF_CTRL_reg)=data)
#define  get_GCOEFF_CTRL_reg                                                     (*((volatile unsigned int*)GCOEFF_CTRL_reg))
#define  GCOEFF_CTRL_write_enable14_shift                                        (25)
#define  GCOEFF_CTRL_Ipmdoff_shift                                               (24)
#define  GCOEFF_CTRL_write_enable13_shift                                        (23)
#define  GCOEFF_CTRL_Sideband_enable_shift                                       (22)
#define  GCOEFF_CTRL_write_enable12_shift                                        (21)
#define  GCOEFF_CTRL_Luma16x8_xform_sel_shift                                    (20)
#define  GCOEFF_CTRL_write_enable11_shift                                        (19)
#define  GCOEFF_CTRL_Luma8x16_xform_sel_shift                                    (18)
#define  GCOEFF_CTRL_write_enable10_shift                                        (17)
#define  GCOEFF_CTRL_Flush_cmd_disable_shift                                     (16)
#define  GCOEFF_CTRL_write_enable9_shift                                         (15)
#define  GCOEFF_CTRL_Softrst_disable_shift                                       (14)
#define  GCOEFF_CTRL_write_enable7_shift                                         (13)
#define  GCOEFF_CTRL_Trmem_dv_load_shift                                         (12)
#define  GCOEFF_CTRL_write_enable6_shift                                         (11)
#define  GCOEFF_CTRL_Umem_bypass_shift                                           (10)
#define  GCOEFF_CTRL_write_enable5_shift                                         (9)
#define  GCOEFF_CTRL_Luma16x16_xform_sel_shift                                   (8)
#define  GCOEFF_CTRL_write_enable4_shift                                         (7)
#define  GCOEFF_CTRL_Luma8x8_xform_sel_shift                                     (6)
#define  GCOEFF_CTRL_write_enable3_shift                                         (5)
#define  GCOEFF_CTRL_Constr_intra_pred_shift                                     (4)
#define  GCOEFF_CTRL_write_enable2_shift                                         (3)
#define  GCOEFF_CTRL_Wdone_enable_shift                                          (2)
#define  GCOEFF_CTRL_write_enable1_shift                                         (1)
#define  GCOEFF_CTRL_SReset_busy_clr_shift                                       (0)
#define  GCOEFF_CTRL_write_enable14_mask                                         (0x02000000)
#define  GCOEFF_CTRL_Ipmdoff_mask                                                (0x01000000)
#define  GCOEFF_CTRL_write_enable13_mask                                         (0x00800000)
#define  GCOEFF_CTRL_Sideband_enable_mask                                        (0x00400000)
#define  GCOEFF_CTRL_write_enable12_mask                                         (0x00200000)
#define  GCOEFF_CTRL_Luma16x8_xform_sel_mask                                     (0x00100000)
#define  GCOEFF_CTRL_write_enable11_mask                                         (0x00080000)
#define  GCOEFF_CTRL_Luma8x16_xform_sel_mask                                     (0x00040000)
#define  GCOEFF_CTRL_write_enable10_mask                                         (0x00020000)
#define  GCOEFF_CTRL_Flush_cmd_disable_mask                                      (0x00010000)
#define  GCOEFF_CTRL_write_enable9_mask                                          (0x00008000)
#define  GCOEFF_CTRL_Softrst_disable_mask                                        (0x00004000)
#define  GCOEFF_CTRL_write_enable7_mask                                          (0x00002000)
#define  GCOEFF_CTRL_Trmem_dv_load_mask                                          (0x00001000)
#define  GCOEFF_CTRL_write_enable6_mask                                          (0x00000800)
#define  GCOEFF_CTRL_Umem_bypass_mask                                            (0x00000400)
#define  GCOEFF_CTRL_write_enable5_mask                                          (0x00000200)
#define  GCOEFF_CTRL_Luma16x16_xform_sel_mask                                    (0x00000100)
#define  GCOEFF_CTRL_write_enable4_mask                                          (0x00000080)
#define  GCOEFF_CTRL_Luma8x8_xform_sel_mask                                      (0x00000040)
#define  GCOEFF_CTRL_write_enable3_mask                                          (0x00000020)
#define  GCOEFF_CTRL_Constr_intra_pred_mask                                      (0x00000010)
#define  GCOEFF_CTRL_write_enable2_mask                                          (0x00000008)
#define  GCOEFF_CTRL_Wdone_enable_mask                                           (0x00000004)
#define  GCOEFF_CTRL_write_enable1_mask                                          (0x00000002)
#define  GCOEFF_CTRL_SReset_busy_clr_mask                                        (0x00000001)
#define  GCOEFF_CTRL_write_enable14(data)                                        (0x02000000&((data)<<25))
#define  GCOEFF_CTRL_Ipmdoff(data)                                               (0x01000000&((data)<<24))
#define  GCOEFF_CTRL_write_enable13(data)                                        (0x00800000&((data)<<23))
#define  GCOEFF_CTRL_Sideband_enable(data)                                       (0x00400000&((data)<<22))
#define  GCOEFF_CTRL_write_enable12(data)                                        (0x00200000&((data)<<21))
#define  GCOEFF_CTRL_Luma16x8_xform_sel(data)                                    (0x00100000&((data)<<20))
#define  GCOEFF_CTRL_write_enable11(data)                                        (0x00080000&((data)<<19))
#define  GCOEFF_CTRL_Luma8x16_xform_sel(data)                                    (0x00040000&((data)<<18))
#define  GCOEFF_CTRL_write_enable10(data)                                        (0x00020000&((data)<<17))
#define  GCOEFF_CTRL_Flush_cmd_disable(data)                                     (0x00010000&((data)<<16))
#define  GCOEFF_CTRL_write_enable9(data)                                         (0x00008000&((data)<<15))
#define  GCOEFF_CTRL_Softrst_disable(data)                                       (0x00004000&((data)<<14))
#define  GCOEFF_CTRL_write_enable7(data)                                         (0x00002000&((data)<<13))
#define  GCOEFF_CTRL_Trmem_dv_load(data)                                         (0x00001000&((data)<<12))
#define  GCOEFF_CTRL_write_enable6(data)                                         (0x00000800&((data)<<11))
#define  GCOEFF_CTRL_Umem_bypass(data)                                           (0x00000400&((data)<<10))
#define  GCOEFF_CTRL_write_enable5(data)                                         (0x00000200&((data)<<9))
#define  GCOEFF_CTRL_Luma16x16_xform_sel(data)                                   (0x00000100&((data)<<8))
#define  GCOEFF_CTRL_write_enable4(data)                                         (0x00000080&((data)<<7))
#define  GCOEFF_CTRL_Luma8x8_xform_sel(data)                                     (0x00000040&((data)<<6))
#define  GCOEFF_CTRL_write_enable3(data)                                         (0x00000020&((data)<<5))
#define  GCOEFF_CTRL_Constr_intra_pred(data)                                     (0x00000010&((data)<<4))
#define  GCOEFF_CTRL_write_enable2(data)                                         (0x00000008&((data)<<3))
#define  GCOEFF_CTRL_Wdone_enable(data)                                          (0x00000004&((data)<<2))
#define  GCOEFF_CTRL_write_enable1(data)                                         (0x00000002&((data)<<1))
#define  GCOEFF_CTRL_SReset_busy_clr(data)                                       (0x00000001&(data))
#define  GCOEFF_CTRL_get_write_enable14(data)                                    ((0x02000000&(data))>>25)
#define  GCOEFF_CTRL_get_Ipmdoff(data)                                           ((0x01000000&(data))>>24)
#define  GCOEFF_CTRL_get_write_enable13(data)                                    ((0x00800000&(data))>>23)
#define  GCOEFF_CTRL_get_Sideband_enable(data)                                   ((0x00400000&(data))>>22)
#define  GCOEFF_CTRL_get_write_enable12(data)                                    ((0x00200000&(data))>>21)
#define  GCOEFF_CTRL_get_Luma16x8_xform_sel(data)                                ((0x00100000&(data))>>20)
#define  GCOEFF_CTRL_get_write_enable11(data)                                    ((0x00080000&(data))>>19)
#define  GCOEFF_CTRL_get_Luma8x16_xform_sel(data)                                ((0x00040000&(data))>>18)
#define  GCOEFF_CTRL_get_write_enable10(data)                                    ((0x00020000&(data))>>17)
#define  GCOEFF_CTRL_get_Flush_cmd_disable(data)                                 ((0x00010000&(data))>>16)
#define  GCOEFF_CTRL_get_write_enable9(data)                                     ((0x00008000&(data))>>15)
#define  GCOEFF_CTRL_get_Softrst_disable(data)                                   ((0x00004000&(data))>>14)
#define  GCOEFF_CTRL_get_write_enable7(data)                                     ((0x00002000&(data))>>13)
#define  GCOEFF_CTRL_get_Trmem_dv_load(data)                                     ((0x00001000&(data))>>12)
#define  GCOEFF_CTRL_get_write_enable6(data)                                     ((0x00000800&(data))>>11)
#define  GCOEFF_CTRL_get_Umem_bypass(data)                                       ((0x00000400&(data))>>10)
#define  GCOEFF_CTRL_get_write_enable5(data)                                     ((0x00000200&(data))>>9)
#define  GCOEFF_CTRL_get_Luma16x16_xform_sel(data)                               ((0x00000100&(data))>>8)
#define  GCOEFF_CTRL_get_write_enable4(data)                                     ((0x00000080&(data))>>7)
#define  GCOEFF_CTRL_get_Luma8x8_xform_sel(data)                                 ((0x00000040&(data))>>6)
#define  GCOEFF_CTRL_get_write_enable3(data)                                     ((0x00000020&(data))>>5)
#define  GCOEFF_CTRL_get_Constr_intra_pred(data)                                 ((0x00000010&(data))>>4)
#define  GCOEFF_CTRL_get_write_enable2(data)                                     ((0x00000008&(data))>>3)
#define  GCOEFF_CTRL_get_Wdone_enable(data)                                      ((0x00000004&(data))>>2)
#define  GCOEFF_CTRL_get_write_enable1(data)                                     ((0x00000002&(data))>>1)
#define  GCOEFF_CTRL_get_SReset_busy_clr(data)                                   (0x00000001&(data))
#define  GCOEFF_CTRL_write_enable14_src(data)                                    ((0x02000000&(data))>>25)
#define  GCOEFF_CTRL_Ipmdoff_src(data)                                           ((0x01000000&(data))>>24)
#define  GCOEFF_CTRL_write_enable13_src(data)                                    ((0x00800000&(data))>>23)
#define  GCOEFF_CTRL_Sideband_enable_src(data)                                   ((0x00400000&(data))>>22)
#define  GCOEFF_CTRL_write_enable12_src(data)                                    ((0x00200000&(data))>>21)
#define  GCOEFF_CTRL_Luma16x8_xform_sel_src(data)                                ((0x00100000&(data))>>20)
#define  GCOEFF_CTRL_write_enable11_src(data)                                    ((0x00080000&(data))>>19)
#define  GCOEFF_CTRL_Luma8x16_xform_sel_src(data)                                ((0x00040000&(data))>>18)
#define  GCOEFF_CTRL_write_enable10_src(data)                                    ((0x00020000&(data))>>17)
#define  GCOEFF_CTRL_Flush_cmd_disable_src(data)                                 ((0x00010000&(data))>>16)
#define  GCOEFF_CTRL_write_enable9_src(data)                                     ((0x00008000&(data))>>15)
#define  GCOEFF_CTRL_Softrst_disable_src(data)                                   ((0x00004000&(data))>>14)
#define  GCOEFF_CTRL_write_enable7_src(data)                                     ((0x00002000&(data))>>13)
#define  GCOEFF_CTRL_Trmem_dv_load_src(data)                                     ((0x00001000&(data))>>12)
#define  GCOEFF_CTRL_write_enable6_src(data)                                     ((0x00000800&(data))>>11)
#define  GCOEFF_CTRL_Umem_bypass_src(data)                                       ((0x00000400&(data))>>10)
#define  GCOEFF_CTRL_write_enable5_src(data)                                     ((0x00000200&(data))>>9)
#define  GCOEFF_CTRL_Luma16x16_xform_sel_src(data)                               ((0x00000100&(data))>>8)
#define  GCOEFF_CTRL_write_enable4_src(data)                                     ((0x00000080&(data))>>7)
#define  GCOEFF_CTRL_Luma8x8_xform_sel_src(data)                                 ((0x00000040&(data))>>6)
#define  GCOEFF_CTRL_write_enable3_src(data)                                     ((0x00000020&(data))>>5)
#define  GCOEFF_CTRL_Constr_intra_pred_src(data)                                 ((0x00000010&(data))>>4)
#define  GCOEFF_CTRL_write_enable2_src(data)                                     ((0x00000008&(data))>>3)
#define  GCOEFF_CTRL_Wdone_enable_src(data)                                      ((0x00000004&(data))>>2)
#define  GCOEFF_CTRL_write_enable1_src(data)                                     ((0x00000002&(data))>>1)
#define  GCOEFF_CTRL_SReset_busy_clr_src(data)                                   (0x00000001&(data))

#define  GCOEFF_INTRA_0                                                         0x1800F804
#define  GCOEFF_INTRA_0_reg_addr                                                 "0xB800F804"
#define  GCOEFF_INTRA_0_reg                                                      0xB800F804
#define  GCOEFF_INTRA_0_inst_addr                                                "0x0001"
#define  GCOEFF_INTRA_0_inst_adr                                                 "0x0001"
#define  GCOEFF_INTRA_0_inst                                                     0x0001
#define  set_GCOEFF_INTRA_0_reg(data)                                            (*((volatile unsigned int*)GCOEFF_INTRA_0_reg)=data)
#define  get_GCOEFF_INTRA_0_reg                                                  (*((volatile unsigned int*)GCOEFF_INTRA_0_reg))
#define  GCOEFF_INTRA_intra_flag_shift                                           (0)
#define  GCOEFF_INTRA_intra_flag_mask                                            (0xFFFFFFFF)
#define  GCOEFF_INTRA_intra_flag(data)                                           (0xFFFFFFFF&(data))
#define  GCOEFF_INTRA_get_intra_flag(data)                                       (0xFFFFFFFF&(data))
#define  GCOEFF_INTRA_intra_flag_src(data)                                       (0xFFFFFFFF&(data))

#define  GCOEFF_INTRA_1                                                         0x1800F808
#define  GCOEFF_INTRA_1_reg_addr                                                 "0xB800F808"
#define  GCOEFF_INTRA_1_reg                                                      0xB800F808
#define  GCOEFF_INTRA_1_inst_addr                                                "0x0002"
#define  GCOEFF_INTRA_1_inst_adr                                                 "0x0002"
#define  GCOEFF_INTRA_1_inst                                                     0x0002
#define  set_GCOEFF_INTRA_1_reg(data)                                            (*((volatile unsigned int*)GCOEFF_INTRA_1_reg)=data)
#define  get_GCOEFF_INTRA_1_reg                                                  (*((volatile unsigned int*)GCOEFF_INTRA_1_reg))

#define  GCOEFF_INTRA_2                                                         0x1800F80C
#define  GCOEFF_INTRA_2_reg_addr                                                 "0xB800F80C"
#define  GCOEFF_INTRA_2_reg                                                      0xB800F80C
#define  GCOEFF_INTRA_2_inst_addr                                                "0x0003"
#define  GCOEFF_INTRA_2_inst_adr                                                 "0x0003"
#define  GCOEFF_INTRA_2_inst                                                     0x0003
#define  set_GCOEFF_INTRA_2_reg(data)                                            (*((volatile unsigned int*)GCOEFF_INTRA_2_reg)=data)
#define  get_GCOEFF_INTRA_2_reg                                                  (*((volatile unsigned int*)GCOEFF_INTRA_2_reg))

#define  GCOEFF_INTRA_3                                                         0x1800F810
#define  GCOEFF_INTRA_3_reg_addr                                                 "0xB800F810"
#define  GCOEFF_INTRA_3_reg                                                      0xB800F810
#define  GCOEFF_INTRA_3_inst_addr                                                "0x0004"
#define  GCOEFF_INTRA_3_inst_adr                                                 "0x0004"
#define  GCOEFF_INTRA_3_inst                                                     0x0004
#define  set_GCOEFF_INTRA_3_reg(data)                                            (*((volatile unsigned int*)GCOEFF_INTRA_3_reg)=data)
#define  get_GCOEFF_INTRA_3_reg                                                  (*((volatile unsigned int*)GCOEFF_INTRA_3_reg))

#define  GCOEFF_CHMV_0                                                          0x1800F814
#define  GCOEFF_CHMV_0_reg_addr                                                  "0xB800F814"
#define  GCOEFF_CHMV_0_reg                                                       0xB800F814
#define  GCOEFF_CHMV_0_inst_addr                                                 "0x0005"
#define  GCOEFF_CHMV_0_inst_adr                                                  "0x0005"
#define  GCOEFF_CHMV_0_inst                                                      0x0005
#define  set_GCOEFF_CHMV_0_reg(data)                                             (*((volatile unsigned int*)GCOEFF_CHMV_0_reg)=data)
#define  get_GCOEFF_CHMV_0_reg                                                   (*((volatile unsigned int*)GCOEFF_CHMV_0_reg))
#define  GCOEFF_CHMV_fmvx_shift                                                  (16)
#define  GCOEFF_CHMV_fmvy_shift                                                  (0)
#define  GCOEFF_CHMV_fmvx_mask                                                   (0x0FFF0000)
#define  GCOEFF_CHMV_fmvy_mask                                                   (0x000003FF)
#define  GCOEFF_CHMV_fmvx(data)                                                  (0x0FFF0000&((data)<<16))
#define  GCOEFF_CHMV_fmvy(data)                                                  (0x000003FF&(data))
#define  GCOEFF_CHMV_get_fmvx(data)                                              ((0x0FFF0000&(data))>>16)
#define  GCOEFF_CHMV_get_fmvy(data)                                              (0x000003FF&(data))
#define  GCOEFF_CHMV_fmvx_src(data)                                              ((0x0FFF0000&(data))>>16)
#define  GCOEFF_CHMV_fmvy_src(data)                                              (0x000003FF&(data))

#define  GCOEFF_CHMV_1                                                          0x1800F818
#define  GCOEFF_CHMV_1_reg_addr                                                  "0xB800F818"
#define  GCOEFF_CHMV_1_reg                                                       0xB800F818
#define  GCOEFF_CHMV_1_inst_addr                                                 "0x0006"
#define  GCOEFF_CHMV_1_inst_adr                                                  "0x0006"
#define  GCOEFF_CHMV_1_inst                                                      0x0006
#define  set_GCOEFF_CHMV_1_reg(data)                                             (*((volatile unsigned int*)GCOEFF_CHMV_1_reg)=data)
#define  get_GCOEFF_CHMV_1_reg                                                   (*((volatile unsigned int*)GCOEFF_CHMV_1_reg))

#define  GCOEFF_CHMV_2                                                          0x1800F81C
#define  GCOEFF_CHMV_2_reg_addr                                                  "0xB800F81C"
#define  GCOEFF_CHMV_2_reg                                                       0xB800F81C
#define  GCOEFF_CHMV_2_inst_addr                                                 "0x0007"
#define  GCOEFF_CHMV_2_inst_adr                                                  "0x0007"
#define  GCOEFF_CHMV_2_inst                                                      0x0007
#define  set_GCOEFF_CHMV_2_reg(data)                                             (*((volatile unsigned int*)GCOEFF_CHMV_2_reg)=data)
#define  get_GCOEFF_CHMV_2_reg                                                   (*((volatile unsigned int*)GCOEFF_CHMV_2_reg))

#define  GCOEFF_CHMV_3                                                          0x1800F820
#define  GCOEFF_CHMV_3_reg_addr                                                  "0xB800F820"
#define  GCOEFF_CHMV_3_reg                                                       0xB800F820
#define  GCOEFF_CHMV_3_inst_addr                                                 "0x0008"
#define  GCOEFF_CHMV_3_inst_adr                                                  "0x0008"
#define  GCOEFF_CHMV_3_inst                                                      0x0008
#define  set_GCOEFF_CHMV_3_reg(data)                                             (*((volatile unsigned int*)GCOEFF_CHMV_3_reg)=data)
#define  get_GCOEFF_CHMV_3_reg                                                   (*((volatile unsigned int*)GCOEFF_CHMV_3_reg))

#define  GCOEFF_CHBMV_0                                                         0x1800F824
#define  GCOEFF_CHBMV_0_reg_addr                                                 "0xB800F824"
#define  GCOEFF_CHBMV_0_reg                                                      0xB800F824
#define  GCOEFF_CHBMV_0_inst_addr                                                "0x0009"
#define  GCOEFF_CHBMV_0_inst_adr                                                 "0x0009"
#define  GCOEFF_CHBMV_0_inst                                                     0x0009
#define  set_GCOEFF_CHBMV_0_reg(data)                                            (*((volatile unsigned int*)GCOEFF_CHBMV_0_reg)=data)
#define  get_GCOEFF_CHBMV_0_reg                                                  (*((volatile unsigned int*)GCOEFF_CHBMV_0_reg))
#define  GCOEFF_CHBMV_fmvx_shift                                                 (16)
#define  GCOEFF_CHBMV_fmvy_shift                                                 (0)
#define  GCOEFF_CHBMV_fmvx_mask                                                  (0x0FFF0000)
#define  GCOEFF_CHBMV_fmvy_mask                                                  (0x000003FF)
#define  GCOEFF_CHBMV_fmvx(data)                                                 (0x0FFF0000&((data)<<16))
#define  GCOEFF_CHBMV_fmvy(data)                                                 (0x000003FF&(data))
#define  GCOEFF_CHBMV_get_fmvx(data)                                             ((0x0FFF0000&(data))>>16)
#define  GCOEFF_CHBMV_get_fmvy(data)                                             (0x000003FF&(data))
#define  GCOEFF_CHBMV_fmvx_src(data)                                             ((0x0FFF0000&(data))>>16)
#define  GCOEFF_CHBMV_fmvy_src(data)                                             (0x000003FF&(data))

#define  GCOEFF_CHBMV_1                                                         0x1800F828
#define  GCOEFF_CHBMV_1_reg_addr                                                 "0xB800F828"
#define  GCOEFF_CHBMV_1_reg                                                      0xB800F828
#define  GCOEFF_CHBMV_1_inst_addr                                                "0x000A"
#define  GCOEFF_CHBMV_1_inst_adr                                                 "0x000A"
#define  GCOEFF_CHBMV_1_inst                                                     0x000A
#define  set_GCOEFF_CHBMV_1_reg(data)                                            (*((volatile unsigned int*)GCOEFF_CHBMV_1_reg)=data)
#define  get_GCOEFF_CHBMV_1_reg                                                  (*((volatile unsigned int*)GCOEFF_CHBMV_1_reg))

#define  GCOEFF_CHBMV_2                                                         0x1800F82C
#define  GCOEFF_CHBMV_2_reg_addr                                                 "0xB800F82C"
#define  GCOEFF_CHBMV_2_reg                                                      0xB800F82C
#define  GCOEFF_CHBMV_2_inst_addr                                                "0x000B"
#define  GCOEFF_CHBMV_2_inst_adr                                                 "0x000B"
#define  GCOEFF_CHBMV_2_inst                                                     0x000B
#define  set_GCOEFF_CHBMV_2_reg(data)                                            (*((volatile unsigned int*)GCOEFF_CHBMV_2_reg)=data)
#define  get_GCOEFF_CHBMV_2_reg                                                  (*((volatile unsigned int*)GCOEFF_CHBMV_2_reg))

#define  GCOEFF_CHBMV_3                                                         0x1800F830
#define  GCOEFF_CHBMV_3_reg_addr                                                 "0xB800F830"
#define  GCOEFF_CHBMV_3_reg                                                      0xB800F830
#define  GCOEFF_CHBMV_3_inst_addr                                                "0x000C"
#define  GCOEFF_CHBMV_3_inst_adr                                                 "0x000C"
#define  GCOEFF_CHBMV_3_inst                                                     0x000C
#define  set_GCOEFF_CHBMV_3_reg(data)                                            (*((volatile unsigned int*)GCOEFF_CHBMV_3_reg)=data)
#define  get_GCOEFF_CHBMV_3_reg                                                  (*((volatile unsigned int*)GCOEFF_CHBMV_3_reg))

#define  GCOEFF_CHMVD_0                                                         0x1800F904
#define  GCOEFF_CHMVD_0_reg_addr                                                 "0xB800F904"
#define  GCOEFF_CHMVD_0_reg                                                      0xB800F904
#define  GCOEFF_CHMVD_0_inst_addr                                                "0x000D"
#define  GCOEFF_CHMVD_0_inst_adr                                                 "0x0041"
#define  GCOEFF_CHMVD_0_inst                                                     0x0041
#define  set_GCOEFF_CHMVD_0_reg(data)                                            (*((volatile unsigned int*)GCOEFF_CHMVD_0_reg)=data)
#define  get_GCOEFF_CHMVD_0_reg                                                  (*((volatile unsigned int*)GCOEFF_CHMVD_0_reg))
#define  GCOEFF_CHMVD_fmvx_shift                                                 (16)
#define  GCOEFF_CHMVD_fmvy_shift                                                 (0)
#define  GCOEFF_CHMVD_fmvx_mask                                                  (0x0FFF0000)
#define  GCOEFF_CHMVD_fmvy_mask                                                  (0x000003FF)
#define  GCOEFF_CHMVD_fmvx(data)                                                 (0x0FFF0000&((data)<<16))
#define  GCOEFF_CHMVD_fmvy(data)                                                 (0x000003FF&(data))
#define  GCOEFF_CHMVD_get_fmvx(data)                                             ((0x0FFF0000&(data))>>16)
#define  GCOEFF_CHMVD_get_fmvy(data)                                             (0x000003FF&(data))
#define  GCOEFF_CHMVD_fmvx_src(data)                                             ((0x0FFF0000&(data))>>16)
#define  GCOEFF_CHMVD_fmvy_src(data)                                             (0x000003FF&(data))

#define  GCOEFF_CHMVD_1                                                         0x1800F908
#define  GCOEFF_CHMVD_1_reg_addr                                                 "0xB800F908"
#define  GCOEFF_CHMVD_1_reg                                                      0xB800F908
#define  GCOEFF_CHMVD_1_inst_addr                                                "0x000E"
#define  GCOEFF_CHMVD_1_inst_adr                                                 "0x0042"
#define  GCOEFF_CHMVD_1_inst                                                     0x0042
#define  set_GCOEFF_CHMVD_1_reg(data)                                            (*((volatile unsigned int*)GCOEFF_CHMVD_1_reg)=data)
#define  get_GCOEFF_CHMVD_1_reg                                                  (*((volatile unsigned int*)GCOEFF_CHMVD_1_reg))

#define  GCOEFF_CHMVD_2                                                         0x1800F90C
#define  GCOEFF_CHMVD_2_reg_addr                                                 "0xB800F90C"
#define  GCOEFF_CHMVD_2_reg                                                      0xB800F90C
#define  GCOEFF_CHMVD_2_inst_addr                                                "0x000F"
#define  GCOEFF_CHMVD_2_inst_adr                                                 "0x0043"
#define  GCOEFF_CHMVD_2_inst                                                     0x0043
#define  set_GCOEFF_CHMVD_2_reg(data)                                            (*((volatile unsigned int*)GCOEFF_CHMVD_2_reg)=data)
#define  get_GCOEFF_CHMVD_2_reg                                                  (*((volatile unsigned int*)GCOEFF_CHMVD_2_reg))

#define  GCOEFF_CHMVD_3                                                         0x1800F910
#define  GCOEFF_CHMVD_3_reg_addr                                                 "0xB800F910"
#define  GCOEFF_CHMVD_3_reg                                                      0xB800F910
#define  GCOEFF_CHMVD_3_inst_addr                                                "0x0010"
#define  GCOEFF_CHMVD_3_inst_adr                                                 "0x0044"
#define  GCOEFF_CHMVD_3_inst                                                     0x0044
#define  set_GCOEFF_CHMVD_3_reg(data)                                            (*((volatile unsigned int*)GCOEFF_CHMVD_3_reg)=data)
#define  get_GCOEFF_CHMVD_3_reg                                                  (*((volatile unsigned int*)GCOEFF_CHMVD_3_reg))

#define  GCOEFF_CHBMVD_0                                                        0x1800F914
#define  GCOEFF_CHBMVD_0_reg_addr                                                "0xB800F914"
#define  GCOEFF_CHBMVD_0_reg                                                     0xB800F914
#define  GCOEFF_CHBMVD_0_inst_addr                                               "0x0011"
#define  GCOEFF_CHBMVD_0_inst_adr                                                "0x0045"
#define  GCOEFF_CHBMVD_0_inst                                                    0x0045
#define  set_GCOEFF_CHBMVD_0_reg(data)                                           (*((volatile unsigned int*)GCOEFF_CHBMVD_0_reg)=data)
#define  get_GCOEFF_CHBMVD_0_reg                                                 (*((volatile unsigned int*)GCOEFF_CHBMVD_0_reg))
#define  GCOEFF_CHBMVD_fmvx_shift                                                (16)
#define  GCOEFF_CHBMVD_fmvy_shift                                                (0)
#define  GCOEFF_CHBMVD_fmvx_mask                                                 (0x0FFF0000)
#define  GCOEFF_CHBMVD_fmvy_mask                                                 (0x000003FF)
#define  GCOEFF_CHBMVD_fmvx(data)                                                (0x0FFF0000&((data)<<16))
#define  GCOEFF_CHBMVD_fmvy(data)                                                (0x000003FF&(data))
#define  GCOEFF_CHBMVD_get_fmvx(data)                                            ((0x0FFF0000&(data))>>16)
#define  GCOEFF_CHBMVD_get_fmvy(data)                                            (0x000003FF&(data))
#define  GCOEFF_CHBMVD_fmvx_src(data)                                            ((0x0FFF0000&(data))>>16)
#define  GCOEFF_CHBMVD_fmvy_src(data)                                            (0x000003FF&(data))

#define  GCOEFF_CHBMVD_1                                                        0x1800F918
#define  GCOEFF_CHBMVD_1_reg_addr                                                "0xB800F918"
#define  GCOEFF_CHBMVD_1_reg                                                     0xB800F918
#define  GCOEFF_CHBMVD_1_inst_addr                                               "0x0012"
#define  GCOEFF_CHBMVD_1_inst_adr                                                "0x0046"
#define  GCOEFF_CHBMVD_1_inst                                                    0x0046
#define  set_GCOEFF_CHBMVD_1_reg(data)                                           (*((volatile unsigned int*)GCOEFF_CHBMVD_1_reg)=data)
#define  get_GCOEFF_CHBMVD_1_reg                                                 (*((volatile unsigned int*)GCOEFF_CHBMVD_1_reg))

#define  GCOEFF_CHBMVD_2                                                        0x1800F91C
#define  GCOEFF_CHBMVD_2_reg_addr                                                "0xB800F91C"
#define  GCOEFF_CHBMVD_2_reg                                                     0xB800F91C
#define  GCOEFF_CHBMVD_2_inst_addr                                               "0x0013"
#define  GCOEFF_CHBMVD_2_inst_adr                                                "0x0047"
#define  GCOEFF_CHBMVD_2_inst                                                    0x0047
#define  set_GCOEFF_CHBMVD_2_reg(data)                                           (*((volatile unsigned int*)GCOEFF_CHBMVD_2_reg)=data)
#define  get_GCOEFF_CHBMVD_2_reg                                                 (*((volatile unsigned int*)GCOEFF_CHBMVD_2_reg))

#define  GCOEFF_CHBMVD_3                                                        0x1800F920
#define  GCOEFF_CHBMVD_3_reg_addr                                                "0xB800F920"
#define  GCOEFF_CHBMVD_3_reg                                                     0xB800F920
#define  GCOEFF_CHBMVD_3_inst_addr                                               "0x0014"
#define  GCOEFF_CHBMVD_3_inst_adr                                                "0x0048"
#define  GCOEFF_CHBMVD_3_inst                                                    0x0048
#define  set_GCOEFF_CHBMVD_3_reg(data)                                           (*((volatile unsigned int*)GCOEFF_CHBMVD_3_reg)=data)
#define  get_GCOEFF_CHBMVD_3_reg                                                 (*((volatile unsigned int*)GCOEFF_CHBMVD_3_reg))

#define  GCOEFF_SDMAADR                                                         0x1800F834
#define  GCOEFF_SDMAADR_reg_addr                                                 "0xB800F834"
#define  GCOEFF_SDMAADR_reg                                                      0xB800F834
#define  GCOEFF_SDMAADR_inst_addr                                                "0x0015"
#define  GCOEFF_SDMAADR_inst_adr                                                 "0x000D"
#define  GCOEFF_SDMAADR_inst                                                     0x000D
#define  set_GCOEFF_SDMAADR_reg(data)                                            (*((volatile unsigned int*)GCOEFF_SDMAADR_reg)=data)
#define  get_GCOEFF_SDMAADR_reg                                                  (*((volatile unsigned int*)GCOEFF_SDMAADR_reg))
#define  GCOEFF_SDMAADR_seq_line_addr_shift                                      (0)
#define  GCOEFF_SDMAADR_seq_line_addr_mask                                       (0x7FFFFFFF)
#define  GCOEFF_SDMAADR_seq_line_addr(data)                                      (0x7FFFFFFF&(data))
#define  GCOEFF_SDMAADR_get_seq_line_addr(data)                                  (0x7FFFFFFF&(data))
#define  GCOEFF_SDMAADR_seq_line_addr_src(data)                                  (0x7FFFFFFF&(data))

#define  GCOEFF_INTR_THRESH                                                     0x1800F838
#define  GCOEFF_INTR_THRESH_reg_addr                                             "0xB800F838"
#define  GCOEFF_INTR_THRESH_reg                                                  0xB800F838
#define  GCOEFF_INTR_THRESH_inst_addr                                            "0x0016"
#define  GCOEFF_INTR_THRESH_inst_adr                                             "0x000E"
#define  GCOEFF_INTR_THRESH_inst                                                 0x000E
#define  set_GCOEFF_INTR_THRESH_reg(data)                                        (*((volatile unsigned int*)GCOEFF_INTR_THRESH_reg)=data)
#define  get_GCOEFF_INTR_THRESH_reg                                              (*((volatile unsigned int*)GCOEFF_INTR_THRESH_reg))
#define  GCOEFF_INTR_THRESH_Value_shift                                          (0)
#define  GCOEFF_INTR_THRESH_Value_mask                                           (0x0FFFFFFF)
#define  GCOEFF_INTR_THRESH_Value(data)                                          (0x0FFFFFFF&(data))
#define  GCOEFF_INTR_THRESH_get_Value(data)                                      (0x0FFFFFFF&(data))
#define  GCOEFF_INTR_THRESH_Value_src(data)                                      (0x0FFFFFFF&(data))

#define  GCOEFF_BUSY                                                            0x1800F83C
#define  GCOEFF_BUSY_reg_addr                                                    "0xB800F83C"
#define  GCOEFF_BUSY_reg                                                         0xB800F83C
#define  GCOEFF_BUSY_inst_addr                                                   "0x0017"
#define  GCOEFF_BUSY_inst_adr                                                    "0x000F"
#define  GCOEFF_BUSY_inst                                                        0x000F
#define  set_GCOEFF_BUSY_reg(data)                                               (*((volatile unsigned int*)GCOEFF_BUSY_reg)=data)
#define  get_GCOEFF_BUSY_reg                                                     (*((volatile unsigned int*)GCOEFF_BUSY_reg))
#define  GCOEFF_BUSY_Reach_Thresh_shift                                          (28)
#define  GCOEFF_BUSY_Count_shift                                                 (0)
#define  GCOEFF_BUSY_Reach_Thresh_mask                                           (0x10000000)
#define  GCOEFF_BUSY_Count_mask                                                  (0x0FFFFFFF)
#define  GCOEFF_BUSY_Reach_Thresh(data)                                          (0x10000000&((data)<<28))
#define  GCOEFF_BUSY_Count(data)                                                 (0x0FFFFFFF&(data))
#define  GCOEFF_BUSY_get_Reach_Thresh(data)                                      ((0x10000000&(data))>>28)
#define  GCOEFF_BUSY_get_Count(data)                                             (0x0FFFFFFF&(data))
#define  GCOEFF_BUSY_Reach_Thresh_src(data)                                      ((0x10000000&(data))>>28)
#define  GCOEFF_BUSY_Count_src(data)                                             (0x0FFFFFFF&(data))

#define  GCOEFF_DBUS1                                                           0x1800F840
#define  GCOEFF_DBUS1_reg_addr                                                   "0xB800F840"
#define  GCOEFF_DBUS1_reg                                                        0xB800F840
#define  GCOEFF_DBUS1_inst_addr                                                  "0x0018"
#define  GCOEFF_DBUS1_inst_adr                                                   "0x0010"
#define  GCOEFF_DBUS1_inst                                                       0x0010
#define  set_GCOEFF_DBUS1_reg(data)                                              (*((volatile unsigned int*)GCOEFF_DBUS1_reg)=data)
#define  get_GCOEFF_DBUS1_reg                                                    (*((volatile unsigned int*)GCOEFF_DBUS1_reg))
#define  GCOEFF_DBUS1_GenPulse_shift                                             (31)
#define  GCOEFF_DBUS1_DbgCtrl_shift                                              (28)
#define  GCOEFF_DBUS1_PicCount_shift                                             (14)
#define  GCOEFF_DBUS1_MbAddrX_shift                                              (7)
#define  GCOEFF_DBUS1_MbAddrY_shift                                              (0)
#define  GCOEFF_DBUS1_GenPulse_mask                                              (0x80000000)
#define  GCOEFF_DBUS1_DbgCtrl_mask                                               (0x70000000)
#define  GCOEFF_DBUS1_PicCount_mask                                              (0x0FFFC000)
#define  GCOEFF_DBUS1_MbAddrX_mask                                               (0x00003F80)
#define  GCOEFF_DBUS1_MbAddrY_mask                                               (0x0000007F)
#define  GCOEFF_DBUS1_GenPulse(data)                                             (0x80000000&((data)<<31))
#define  GCOEFF_DBUS1_DbgCtrl(data)                                              (0x70000000&((data)<<28))
#define  GCOEFF_DBUS1_PicCount(data)                                             (0x0FFFC000&((data)<<14))
#define  GCOEFF_DBUS1_MbAddrX(data)                                              (0x00003F80&((data)<<7))
#define  GCOEFF_DBUS1_MbAddrY(data)                                              (0x0000007F&(data))
#define  GCOEFF_DBUS1_get_GenPulse(data)                                         ((0x80000000&(data))>>31)
#define  GCOEFF_DBUS1_get_DbgCtrl(data)                                          ((0x70000000&(data))>>28)
#define  GCOEFF_DBUS1_get_PicCount(data)                                         ((0x0FFFC000&(data))>>14)
#define  GCOEFF_DBUS1_get_MbAddrX(data)                                          ((0x00003F80&(data))>>7)
#define  GCOEFF_DBUS1_get_MbAddrY(data)                                          (0x0000007F&(data))
#define  GCOEFF_DBUS1_GenPulse_src(data)                                         ((0x80000000&(data))>>31)
#define  GCOEFF_DBUS1_DbgCtrl_src(data)                                          ((0x70000000&(data))>>28)
#define  GCOEFF_DBUS1_PicCount_src(data)                                         ((0x0FFFC000&(data))>>14)
#define  GCOEFF_DBUS1_MbAddrX_src(data)                                          ((0x00003F80&(data))>>7)
#define  GCOEFF_DBUS1_MbAddrY_src(data)                                          (0x0000007F&(data))

#define  GCOEFF_DBUS2                                                           0x1800F844
#define  GCOEFF_DBUS2_reg_addr                                                   "0xB800F844"
#define  GCOEFF_DBUS2_reg                                                        0xB800F844
#define  GCOEFF_DBUS2_inst_addr                                                  "0x0019"
#define  GCOEFF_DBUS2_inst_adr                                                   "0x0011"
#define  GCOEFF_DBUS2_inst                                                       0x0011
#define  set_GCOEFF_DBUS2_reg(data)                                              (*((volatile unsigned int*)GCOEFF_DBUS2_reg)=data)
#define  get_GCOEFF_DBUS2_reg                                                    (*((volatile unsigned int*)GCOEFF_DBUS2_reg))
#define  GCOEFF_DBUS2_DbgCtrl_shift                                              (0)
#define  GCOEFF_DBUS2_DbgCtrl_mask                                               (0xFFFFFFFF)
#define  GCOEFF_DBUS2_DbgCtrl(data)                                              (0xFFFFFFFF&(data))
#define  GCOEFF_DBUS2_get_DbgCtrl(data)                                          (0xFFFFFFFF&(data))
#define  GCOEFF_DBUS2_DbgCtrl_src(data)                                          (0xFFFFFFFF&(data))

#define  GCOEFF_BASEA                                                           0x1800F848
#define  GCOEFF_BASEA_reg_addr                                                   "0xB800F848"
#define  GCOEFF_BASEA_reg                                                        0xB800F848
#define  GCOEFF_BASEA_inst_addr                                                  "0x001A"
#define  GCOEFF_BASEA_inst_adr                                                   "0x0012"
#define  GCOEFF_BASEA_inst                                                       0x0012
#define  set_GCOEFF_BASEA_reg(data)                                              (*((volatile unsigned int*)GCOEFF_BASEA_reg)=data)
#define  get_GCOEFF_BASEA_reg                                                    (*((volatile unsigned int*)GCOEFF_BASEA_reg))
#define  GCOEFF_BASEA_Vmadr_en_shift                                             (23)
#define  GCOEFF_BASEA_BaseA0_shift                                               (16)
#define  GCOEFF_BASEA_Vmadr_en_mask                                              (0x00800000)
#define  GCOEFF_BASEA_BaseA0_mask                                                (0x007F0000)
#define  GCOEFF_BASEA_Vmadr_en(data)                                             (0x00800000&((data)<<23))
#define  GCOEFF_BASEA_BaseA0(data)                                               (0x007F0000&((data)<<16))
#define  GCOEFF_BASEA_get_Vmadr_en(data)                                         ((0x00800000&(data))>>23)
#define  GCOEFF_BASEA_get_BaseA0(data)                                           ((0x007F0000&(data))>>16)
#define  GCOEFF_BASEA_Vmadr_en_src(data)                                         ((0x00800000&(data))>>23)
#define  GCOEFF_BASEA_BaseA0_src(data)                                           ((0x007F0000&(data))>>16)

#define  GCOEFF_OFFSETA_0                                                       0x1800F84C
#define  GCOEFF_OFFSETA_0_reg_addr                                               "0xB800F84C"
#define  GCOEFF_OFFSETA_0_reg                                                    0xB800F84C
#define  GCOEFF_OFFSETA_0_inst_addr                                              "0x001B"
#define  GCOEFF_OFFSETA_0_inst_adr                                               "0x0013"
#define  GCOEFF_OFFSETA_0_inst                                                   0x0013
#define  set_GCOEFF_OFFSETA_0_reg(data)                                          (*((volatile unsigned int*)GCOEFF_OFFSETA_0_reg)=data)
#define  get_GCOEFF_OFFSETA_0_reg                                                (*((volatile unsigned int*)GCOEFF_OFFSETA_0_reg))
#define  GCOEFF_OFFSETA_OffsetA_shift                                            (3)
#define  GCOEFF_OFFSETA_OffsetA_mask                                             (0x000003F8)
#define  GCOEFF_OFFSETA_OffsetA(data)                                            (0x000003F8&((data)<<3))
#define  GCOEFF_OFFSETA_get_OffsetA(data)                                        ((0x000003F8&(data))>>3)
#define  GCOEFF_OFFSETA_OffsetA_src(data)                                        ((0x000003F8&(data))>>3)

#define  GCOEFF_OFFSETA_1                                                       0x1800F850
#define  GCOEFF_OFFSETA_1_reg_addr                                               "0xB800F850"
#define  GCOEFF_OFFSETA_1_reg                                                    0xB800F850
#define  GCOEFF_OFFSETA_1_inst_addr                                              "0x001C"
#define  GCOEFF_OFFSETA_1_inst_adr                                               "0x0014"
#define  GCOEFF_OFFSETA_1_inst                                                   0x0014
#define  set_GCOEFF_OFFSETA_1_reg(data)                                          (*((volatile unsigned int*)GCOEFF_OFFSETA_1_reg)=data)
#define  get_GCOEFF_OFFSETA_1_reg                                                (*((volatile unsigned int*)GCOEFF_OFFSETA_1_reg))

#define  GCOEFF_DEBPAR                                                          0x1800F924
#define  GCOEFF_DEBPAR_reg_addr                                                  "0xB800F924"
#define  GCOEFF_DEBPAR_reg                                                       0xB800F924
#define  GCOEFF_DEBPAR_inst_addr                                                 "0x001D"
#define  GCOEFF_DEBPAR_inst_adr                                                  "0x0049"
#define  GCOEFF_DEBPAR_inst                                                      0x0049
#define  set_GCOEFF_DEBPAR_reg(data)                                             (*((volatile unsigned int*)GCOEFF_DEBPAR_reg)=data)
#define  get_GCOEFF_DEBPAR_reg                                                   (*((volatile unsigned int*)GCOEFF_DEBPAR_reg))
#define  GCOEFF_DEBPAR_StartA_shift                                              (0)
#define  GCOEFF_DEBPAR_StartA_mask                                               (0x0000007F)
#define  GCOEFF_DEBPAR_StartA(data)                                              (0x0000007F&(data))
#define  GCOEFF_DEBPAR_get_StartA(data)                                          (0x0000007F&(data))
#define  GCOEFF_DEBPAR_StartA_src(data)                                          (0x0000007F&(data))

#define  GCOEFF_CBPCTRL                                                         0x1800F854
#define  GCOEFF_CBPCTRL_reg_addr                                                 "0xB800F854"
#define  GCOEFF_CBPCTRL_reg                                                      0xB800F854
#define  GCOEFF_CBPCTRL_inst_addr                                                "0x001E"
#define  GCOEFF_CBPCTRL_inst_adr                                                 "0x0015"
#define  GCOEFF_CBPCTRL_inst                                                     0x0015
#define  set_GCOEFF_CBPCTRL_reg(data)                                            (*((volatile unsigned int*)GCOEFF_CBPCTRL_reg)=data)
#define  get_GCOEFF_CBPCTRL_reg                                                  (*((volatile unsigned int*)GCOEFF_CBPCTRL_reg))
#define  GCOEFF_CBPCTRL_IntraLumaStyleSel_shift                                  (5)
#define  GCOEFF_CBPCTRL_XVID_combine_style_shift                                 (3)
#define  GCOEFF_CBPCTRL_Style_Sel_shift                                          (0)
#define  GCOEFF_CBPCTRL_IntraLumaStyleSel_mask                                   (0x00000020)
#define  GCOEFF_CBPCTRL_XVID_combine_style_mask                                  (0x00000018)
#define  GCOEFF_CBPCTRL_Style_Sel_mask                                           (0x00000007)
#define  GCOEFF_CBPCTRL_IntraLumaStyleSel(data)                                  (0x00000020&((data)<<5))
#define  GCOEFF_CBPCTRL_XVID_combine_style(data)                                 (0x00000018&((data)<<3))
#define  GCOEFF_CBPCTRL_Style_Sel(data)                                          (0x00000007&(data))
#define  GCOEFF_CBPCTRL_get_IntraLumaStyleSel(data)                              ((0x00000020&(data))>>5)
#define  GCOEFF_CBPCTRL_get_XVID_combine_style(data)                             ((0x00000018&(data))>>3)
#define  GCOEFF_CBPCTRL_get_Style_Sel(data)                                      (0x00000007&(data))
#define  GCOEFF_CBPCTRL_IntraLumaStyleSel_src(data)                              ((0x00000020&(data))>>5)
#define  GCOEFF_CBPCTRL_XVID_combine_style_src(data)                             ((0x00000018&(data))>>3)
#define  GCOEFF_CBPCTRL_Style_Sel_src(data)                                      (0x00000007&(data))

#define  GCOEFF_SUMRUNCOST_8X8_0                                                0x1800F858
#define  GCOEFF_SUMRUNCOST_8X8_0_reg_addr                                        "0xB800F858"
#define  GCOEFF_SUMRUNCOST_8X8_0_reg                                             0xB800F858
#define  GCOEFF_SUMRUNCOST_8X8_0_inst_addr                                       "0x001F"
#define  GCOEFF_SUMRUNCOST_8X8_0_inst_adr                                        "0x0016"
#define  GCOEFF_SUMRUNCOST_8X8_0_inst                                            0x0016
#define  set_GCOEFF_SUMRUNCOST_8X8_0_reg(data)                                   (*((volatile unsigned int*)GCOEFF_SUMRUNCOST_8X8_0_reg)=data)
#define  get_GCOEFF_SUMRUNCOST_8X8_0_reg                                         (*((volatile unsigned int*)GCOEFF_SUMRUNCOST_8X8_0_reg))
#define  GCOEFF_SUMRUNCOST_8X8_Lookup_shift                                      (0)
#define  GCOEFF_SUMRUNCOST_8X8_Lookup_mask                                       (0xFFFFFFFF)
#define  GCOEFF_SUMRUNCOST_8X8_Lookup(data)                                      (0xFFFFFFFF&(data))
#define  GCOEFF_SUMRUNCOST_8X8_get_Lookup(data)                                  (0xFFFFFFFF&(data))
#define  GCOEFF_SUMRUNCOST_8X8_Lookup_src(data)                                  (0xFFFFFFFF&(data))

#define  GCOEFF_SUMRUNCOST_8X8_1                                                0x1800F85C
#define  GCOEFF_SUMRUNCOST_8X8_1_reg_addr                                        "0xB800F85C"
#define  GCOEFF_SUMRUNCOST_8X8_1_reg                                             0xB800F85C
#define  GCOEFF_SUMRUNCOST_8X8_1_inst_addr                                       "0x0020"
#define  GCOEFF_SUMRUNCOST_8X8_1_inst_adr                                        "0x0017"
#define  GCOEFF_SUMRUNCOST_8X8_1_inst                                            0x0017
#define  set_GCOEFF_SUMRUNCOST_8X8_1_reg(data)                                   (*((volatile unsigned int*)GCOEFF_SUMRUNCOST_8X8_1_reg)=data)
#define  get_GCOEFF_SUMRUNCOST_8X8_1_reg                                         (*((volatile unsigned int*)GCOEFF_SUMRUNCOST_8X8_1_reg))

#define  GCOEFF_SUMRUNCOST_8X8_2                                                0x1800F860
#define  GCOEFF_SUMRUNCOST_8X8_2_reg_addr                                        "0xB800F860"
#define  GCOEFF_SUMRUNCOST_8X8_2_reg                                             0xB800F860
#define  GCOEFF_SUMRUNCOST_8X8_2_inst_addr                                       "0x0021"
#define  GCOEFF_SUMRUNCOST_8X8_2_inst_adr                                        "0x0018"
#define  GCOEFF_SUMRUNCOST_8X8_2_inst                                            0x0018
#define  set_GCOEFF_SUMRUNCOST_8X8_2_reg(data)                                   (*((volatile unsigned int*)GCOEFF_SUMRUNCOST_8X8_2_reg)=data)
#define  get_GCOEFF_SUMRUNCOST_8X8_2_reg                                         (*((volatile unsigned int*)GCOEFF_SUMRUNCOST_8X8_2_reg))

#define  GCOEFF_SUMRUNCOST_8X8_3                                                0x1800F864
#define  GCOEFF_SUMRUNCOST_8X8_3_reg_addr                                        "0xB800F864"
#define  GCOEFF_SUMRUNCOST_8X8_3_reg                                             0xB800F864
#define  GCOEFF_SUMRUNCOST_8X8_3_inst_addr                                       "0x0022"
#define  GCOEFF_SUMRUNCOST_8X8_3_inst_adr                                        "0x0019"
#define  GCOEFF_SUMRUNCOST_8X8_3_inst                                            0x0019
#define  set_GCOEFF_SUMRUNCOST_8X8_3_reg(data)                                   (*((volatile unsigned int*)GCOEFF_SUMRUNCOST_8X8_3_reg)=data)
#define  get_GCOEFF_SUMRUNCOST_8X8_3_reg                                         (*((volatile unsigned int*)GCOEFF_SUMRUNCOST_8X8_3_reg))

#define  GCOEFF_SUMRUNCOST_8X8_4                                                0x1800F868
#define  GCOEFF_SUMRUNCOST_8X8_4_reg_addr                                        "0xB800F868"
#define  GCOEFF_SUMRUNCOST_8X8_4_reg                                             0xB800F868
#define  GCOEFF_SUMRUNCOST_8X8_4_inst_addr                                       "0x0023"
#define  GCOEFF_SUMRUNCOST_8X8_4_inst_adr                                        "0x001A"
#define  GCOEFF_SUMRUNCOST_8X8_4_inst                                            0x001A
#define  set_GCOEFF_SUMRUNCOST_8X8_4_reg(data)                                   (*((volatile unsigned int*)GCOEFF_SUMRUNCOST_8X8_4_reg)=data)
#define  get_GCOEFF_SUMRUNCOST_8X8_4_reg                                         (*((volatile unsigned int*)GCOEFF_SUMRUNCOST_8X8_4_reg))

#define  GCOEFF_SUMRUNCOST_8X8_5                                                0x1800F86C
#define  GCOEFF_SUMRUNCOST_8X8_5_reg_addr                                        "0xB800F86C"
#define  GCOEFF_SUMRUNCOST_8X8_5_reg                                             0xB800F86C
#define  GCOEFF_SUMRUNCOST_8X8_5_inst_addr                                       "0x0024"
#define  GCOEFF_SUMRUNCOST_8X8_5_inst_adr                                        "0x001B"
#define  GCOEFF_SUMRUNCOST_8X8_5_inst                                            0x001B
#define  set_GCOEFF_SUMRUNCOST_8X8_5_reg(data)                                   (*((volatile unsigned int*)GCOEFF_SUMRUNCOST_8X8_5_reg)=data)
#define  get_GCOEFF_SUMRUNCOST_8X8_5_reg                                         (*((volatile unsigned int*)GCOEFF_SUMRUNCOST_8X8_5_reg))

#define  GCOEFF_SUMRUNCOST_8X8_6                                                0x1800F870
#define  GCOEFF_SUMRUNCOST_8X8_6_reg_addr                                        "0xB800F870"
#define  GCOEFF_SUMRUNCOST_8X8_6_reg                                             0xB800F870
#define  GCOEFF_SUMRUNCOST_8X8_6_inst_addr                                       "0x0025"
#define  GCOEFF_SUMRUNCOST_8X8_6_inst_adr                                        "0x001C"
#define  GCOEFF_SUMRUNCOST_8X8_6_inst                                            0x001C
#define  set_GCOEFF_SUMRUNCOST_8X8_6_reg(data)                                   (*((volatile unsigned int*)GCOEFF_SUMRUNCOST_8X8_6_reg)=data)
#define  get_GCOEFF_SUMRUNCOST_8X8_6_reg                                         (*((volatile unsigned int*)GCOEFF_SUMRUNCOST_8X8_6_reg))

#define  GCOEFF_SUMRUNCOST_8X8_7                                                0x1800F874
#define  GCOEFF_SUMRUNCOST_8X8_7_reg_addr                                        "0xB800F874"
#define  GCOEFF_SUMRUNCOST_8X8_7_reg                                             0xB800F874
#define  GCOEFF_SUMRUNCOST_8X8_7_inst_addr                                       "0x0026"
#define  GCOEFF_SUMRUNCOST_8X8_7_inst_adr                                        "0x001D"
#define  GCOEFF_SUMRUNCOST_8X8_7_inst                                            0x001D
#define  set_GCOEFF_SUMRUNCOST_8X8_7_reg(data)                                   (*((volatile unsigned int*)GCOEFF_SUMRUNCOST_8X8_7_reg)=data)
#define  get_GCOEFF_SUMRUNCOST_8X8_7_reg                                         (*((volatile unsigned int*)GCOEFF_SUMRUNCOST_8X8_7_reg))

#define  GCOEFF_SUMRUNCOST_4X4_0                                                0x1800F878
#define  GCOEFF_SUMRUNCOST_4X4_0_reg_addr                                        "0xB800F878"
#define  GCOEFF_SUMRUNCOST_4X4_0_reg                                             0xB800F878
#define  GCOEFF_SUMRUNCOST_4X4_0_inst_addr                                       "0x0027"
#define  GCOEFF_SUMRUNCOST_4X4_0_inst_adr                                        "0x001E"
#define  GCOEFF_SUMRUNCOST_4X4_0_inst                                            0x001E
#define  set_GCOEFF_SUMRUNCOST_4X4_0_reg(data)                                   (*((volatile unsigned int*)GCOEFF_SUMRUNCOST_4X4_0_reg)=data)
#define  get_GCOEFF_SUMRUNCOST_4X4_0_reg                                         (*((volatile unsigned int*)GCOEFF_SUMRUNCOST_4X4_0_reg))
#define  GCOEFF_SUMRUNCOST_4X4_Lookup_shift                                      (0)
#define  GCOEFF_SUMRUNCOST_4X4_Lookup_mask                                       (0xFFFFFFFF)
#define  GCOEFF_SUMRUNCOST_4X4_Lookup(data)                                      (0xFFFFFFFF&(data))
#define  GCOEFF_SUMRUNCOST_4X4_get_Lookup(data)                                  (0xFFFFFFFF&(data))
#define  GCOEFF_SUMRUNCOST_4X4_Lookup_src(data)                                  (0xFFFFFFFF&(data))

#define  GCOEFF_SUMRUNCOST_4X4_1                                                0x1800F87C
#define  GCOEFF_SUMRUNCOST_4X4_1_reg_addr                                        "0xB800F87C"
#define  GCOEFF_SUMRUNCOST_4X4_1_reg                                             0xB800F87C
#define  GCOEFF_SUMRUNCOST_4X4_1_inst_addr                                       "0x0028"
#define  GCOEFF_SUMRUNCOST_4X4_1_inst_adr                                        "0x001F"
#define  GCOEFF_SUMRUNCOST_4X4_1_inst                                            0x001F
#define  set_GCOEFF_SUMRUNCOST_4X4_1_reg(data)                                   (*((volatile unsigned int*)GCOEFF_SUMRUNCOST_4X4_1_reg)=data)
#define  get_GCOEFF_SUMRUNCOST_4X4_1_reg                                         (*((volatile unsigned int*)GCOEFF_SUMRUNCOST_4X4_1_reg))

#define  GCOEFF_SUMRUNCOST_THR                                                  0x1800F880
#define  GCOEFF_SUMRUNCOST_THR_reg_addr                                          "0xB800F880"
#define  GCOEFF_SUMRUNCOST_THR_reg                                               0xB800F880
#define  GCOEFF_SUMRUNCOST_THR_inst_addr                                         "0x0029"
#define  GCOEFF_SUMRUNCOST_THR_inst_adr                                          "0x0020"
#define  GCOEFF_SUMRUNCOST_THR_inst                                              0x0020
#define  set_GCOEFF_SUMRUNCOST_THR_reg(data)                                     (*((volatile unsigned int*)GCOEFF_SUMRUNCOST_THR_reg)=data)
#define  get_GCOEFF_SUMRUNCOST_THR_reg                                           (*((volatile unsigned int*)GCOEFF_SUMRUNCOST_THR_reg))
#define  GCOEFF_SUMRUNCOST_THR_T4x4_shift                                        (16)
#define  GCOEFF_SUMRUNCOST_THR_T8x8_shift                                        (0)
#define  GCOEFF_SUMRUNCOST_THR_T4x4_mask                                         (0x07FF0000)
#define  GCOEFF_SUMRUNCOST_THR_T8x8_mask                                         (0x000007FF)
#define  GCOEFF_SUMRUNCOST_THR_T4x4(data)                                        (0x07FF0000&((data)<<16))
#define  GCOEFF_SUMRUNCOST_THR_T8x8(data)                                        (0x000007FF&(data))
#define  GCOEFF_SUMRUNCOST_THR_get_T4x4(data)                                    ((0x07FF0000&(data))>>16)
#define  GCOEFF_SUMRUNCOST_THR_get_T8x8(data)                                    (0x000007FF&(data))
#define  GCOEFF_SUMRUNCOST_THR_T4x4_src(data)                                    ((0x07FF0000&(data))>>16)
#define  GCOEFF_SUMRUNCOST_THR_T8x8_src(data)                                    (0x000007FF&(data))

#define  GCOEFF_FIRSTCFF                                                        0x1800F884
#define  GCOEFF_FIRSTCFF_reg_addr                                                "0xB800F884"
#define  GCOEFF_FIRSTCFF_reg                                                     0xB800F884
#define  GCOEFF_FIRSTCFF_inst_addr                                               "0x002A"
#define  GCOEFF_FIRSTCFF_inst_adr                                                "0x0021"
#define  GCOEFF_FIRSTCFF_inst                                                    0x0021
#define  set_GCOEFF_FIRSTCFF_reg(data)                                           (*((volatile unsigned int*)GCOEFF_FIRSTCFF_reg)=data)
#define  get_GCOEFF_FIRSTCFF_reg                                                 (*((volatile unsigned int*)GCOEFF_FIRSTCFF_reg))
#define  GCOEFF_FIRSTCFF_T4x4_shift                                              (16)
#define  GCOEFF_FIRSTCFF_T8x8_shift                                              (0)
#define  GCOEFF_FIRSTCFF_T4x4_mask                                               (0x001F0000)
#define  GCOEFF_FIRSTCFF_T8x8_mask                                               (0x0000007F)
#define  GCOEFF_FIRSTCFF_T4x4(data)                                              (0x001F0000&((data)<<16))
#define  GCOEFF_FIRSTCFF_T8x8(data)                                              (0x0000007F&(data))
#define  GCOEFF_FIRSTCFF_get_T4x4(data)                                          ((0x001F0000&(data))>>16)
#define  GCOEFF_FIRSTCFF_get_T8x8(data)                                          (0x0000007F&(data))
#define  GCOEFF_FIRSTCFF_T4x4_src(data)                                          ((0x001F0000&(data))>>16)
#define  GCOEFF_FIRSTCFF_T8x8_src(data)                                          (0x0000007F&(data))

#define  GCOEFF_SUMCFF                                                          0x1800F888
#define  GCOEFF_SUMCFF_reg_addr                                                  "0xB800F888"
#define  GCOEFF_SUMCFF_reg                                                       0xB800F888
#define  GCOEFF_SUMCFF_inst_addr                                                 "0x002B"
#define  GCOEFF_SUMCFF_inst_adr                                                  "0x0022"
#define  GCOEFF_SUMCFF_inst                                                      0x0022
#define  set_GCOEFF_SUMCFF_reg(data)                                             (*((volatile unsigned int*)GCOEFF_SUMCFF_reg)=data)
#define  get_GCOEFF_SUMCFF_reg                                                   (*((volatile unsigned int*)GCOEFF_SUMCFF_reg))
#define  GCOEFF_SUMCFF_T4x4_shift                                                (8)
#define  GCOEFF_SUMCFF_T8x8_shift                                                (0)
#define  GCOEFF_SUMCFF_T4x4_mask                                                 (0x0000FF00)
#define  GCOEFF_SUMCFF_T8x8_mask                                                 (0x000000FF)
#define  GCOEFF_SUMCFF_T4x4(data)                                                (0x0000FF00&((data)<<8))
#define  GCOEFF_SUMCFF_T8x8(data)                                                (0x000000FF&(data))
#define  GCOEFF_SUMCFF_get_T4x4(data)                                            ((0x0000FF00&(data))>>8)
#define  GCOEFF_SUMCFF_get_T8x8(data)                                            (0x000000FF&(data))
#define  GCOEFF_SUMCFF_T4x4_src(data)                                            ((0x0000FF00&(data))>>8)
#define  GCOEFF_SUMCFF_T8x8_src(data)                                            (0x000000FF&(data))

#define  GCOEFF_CHROMA_LD                                                       0x1800F88C
#define  GCOEFF_CHROMA_LD_reg_addr                                               "0xB800F88C"
#define  GCOEFF_CHROMA_LD_reg                                                    0xB800F88C
#define  GCOEFF_CHROMA_LD_inst_addr                                              "0x002C"
#define  GCOEFF_CHROMA_LD_inst_adr                                               "0x0023"
#define  GCOEFF_CHROMA_LD_inst                                                   0x0023
#define  set_GCOEFF_CHROMA_LD_reg(data)                                          (*((volatile unsigned int*)GCOEFF_CHROMA_LD_reg)=data)
#define  get_GCOEFF_CHROMA_LD_reg                                                (*((volatile unsigned int*)GCOEFF_CHROMA_LD_reg))
#define  GCOEFF_CHROMA_LD_List1Idx0_shift                                        (14)
#define  GCOEFF_CHROMA_LD_List0Idx1_shift                                        (7)
#define  GCOEFF_CHROMA_LD_List0Idx0_shift                                        (0)
#define  GCOEFF_CHROMA_LD_List1Idx0_mask                                         (0x001FC000)
#define  GCOEFF_CHROMA_LD_List0Idx1_mask                                         (0x00003F80)
#define  GCOEFF_CHROMA_LD_List0Idx0_mask                                         (0x0000007F)
#define  GCOEFF_CHROMA_LD_List1Idx0(data)                                        (0x001FC000&((data)<<14))
#define  GCOEFF_CHROMA_LD_List0Idx1(data)                                        (0x00003F80&((data)<<7))
#define  GCOEFF_CHROMA_LD_List0Idx0(data)                                        (0x0000007F&(data))
#define  GCOEFF_CHROMA_LD_get_List1Idx0(data)                                    ((0x001FC000&(data))>>14)
#define  GCOEFF_CHROMA_LD_get_List0Idx1(data)                                    ((0x00003F80&(data))>>7)
#define  GCOEFF_CHROMA_LD_get_List0Idx0(data)                                    (0x0000007F&(data))
#define  GCOEFF_CHROMA_LD_List1Idx0_src(data)                                    ((0x001FC000&(data))>>14)
#define  GCOEFF_CHROMA_LD_List0Idx1_src(data)                                    ((0x00003F80&(data))>>7)
#define  GCOEFF_CHROMA_LD_List0Idx0_src(data)                                    (0x0000007F&(data))

#define  GCOEFF_INTRAMODE_0                                                     0x1800F890
#define  GCOEFF_INTRAMODE_0_reg_addr                                             "0xB800F890"
#define  GCOEFF_INTRAMODE_0_reg                                                  0xB800F890
#define  GCOEFF_INTRAMODE_0_inst_addr                                            "0x002D"
#define  GCOEFF_INTRAMODE_0_inst_adr                                             "0x0024"
#define  GCOEFF_INTRAMODE_0_inst                                                 0x0024
#define  set_GCOEFF_INTRAMODE_0_reg(data)                                        (*((volatile unsigned int*)GCOEFF_INTRAMODE_0_reg)=data)
#define  get_GCOEFF_INTRAMODE_0_reg                                              (*((volatile unsigned int*)GCOEFF_INTRAMODE_0_reg))
#define  GCOEFF_INTRAMODE_Value_shift                                            (0)
#define  GCOEFF_INTRAMODE_Value_mask                                             (0xFFFFFFFF)
#define  GCOEFF_INTRAMODE_Value(data)                                            (0xFFFFFFFF&(data))
#define  GCOEFF_INTRAMODE_get_Value(data)                                        (0xFFFFFFFF&(data))
#define  GCOEFF_INTRAMODE_Value_src(data)                                        (0xFFFFFFFF&(data))

#define  GCOEFF_INTRAMODE_1                                                     0x1800F894
#define  GCOEFF_INTRAMODE_1_reg_addr                                             "0xB800F894"
#define  GCOEFF_INTRAMODE_1_reg                                                  0xB800F894
#define  GCOEFF_INTRAMODE_1_inst_addr                                            "0x002E"
#define  GCOEFF_INTRAMODE_1_inst_adr                                             "0x0025"
#define  GCOEFF_INTRAMODE_1_inst                                                 0x0025
#define  set_GCOEFF_INTRAMODE_1_reg(data)                                        (*((volatile unsigned int*)GCOEFF_INTRAMODE_1_reg)=data)
#define  get_GCOEFF_INTRAMODE_1_reg                                              (*((volatile unsigned int*)GCOEFF_INTRAMODE_1_reg))

#define  GCOEFF_INTRAMODE_2                                                     0x1800F898
#define  GCOEFF_INTRAMODE_2_reg_addr                                             "0xB800F898"
#define  GCOEFF_INTRAMODE_2_reg                                                  0xB800F898
#define  GCOEFF_INTRAMODE_2_inst_addr                                            "0x002F"
#define  GCOEFF_INTRAMODE_2_inst_adr                                             "0x0026"
#define  GCOEFF_INTRAMODE_2_inst                                                 0x0026
#define  set_GCOEFF_INTRAMODE_2_reg(data)                                        (*((volatile unsigned int*)GCOEFF_INTRAMODE_2_reg)=data)
#define  get_GCOEFF_INTRAMODE_2_reg                                              (*((volatile unsigned int*)GCOEFF_INTRAMODE_2_reg))

#define  GCOEFF_SLICE                                                           0x1800F89C
#define  GCOEFF_SLICE_reg_addr                                                   "0xB800F89C"
#define  GCOEFF_SLICE_reg                                                        0xB800F89C
#define  GCOEFF_SLICE_inst_addr                                                  "0x0030"
#define  GCOEFF_SLICE_inst_adr                                                   "0x0027"
#define  GCOEFF_SLICE_inst                                                       0x0027
#define  set_GCOEFF_SLICE_reg(data)                                              (*((volatile unsigned int*)GCOEFF_SLICE_reg)=data)
#define  get_GCOEFF_SLICE_reg                                                    (*((volatile unsigned int*)GCOEFF_SLICE_reg))
#define  GCOEFF_SLICE_y_shift                                                    (0)
#define  GCOEFF_SLICE_y_mask                                                     (0x0000007F)
#define  GCOEFF_SLICE_y(data)                                                    (0x0000007F&(data))
#define  GCOEFF_SLICE_get_y(data)                                                (0x0000007F&(data))
#define  GCOEFF_SLICE_y_src(data)                                                (0x0000007F&(data))

#define  GCOEFF_MBLEVEL_DROP                                                    0x1800F8A0
#define  GCOEFF_MBLEVEL_DROP_reg_addr                                            "0xB800F8A0"
#define  GCOEFF_MBLEVEL_DROP_reg                                                 0xB800F8A0
#define  GCOEFF_MBLEVEL_DROP_inst_addr                                           "0x0031"
#define  GCOEFF_MBLEVEL_DROP_inst_adr                                            "0x0028"
#define  GCOEFF_MBLEVEL_DROP_inst                                                0x0028
#define  set_GCOEFF_MBLEVEL_DROP_reg(data)                                       (*((volatile unsigned int*)GCOEFF_MBLEVEL_DROP_reg)=data)
#define  get_GCOEFF_MBLEVEL_DROP_reg                                             (*((volatile unsigned int*)GCOEFF_MBLEVEL_DROP_reg))
#define  GCOEFF_MBLEVEL_DROP_Enable_shift                                        (13)
#define  GCOEFF_MBLEVEL_DROP_Thresh_shift                                        (0)
#define  GCOEFF_MBLEVEL_DROP_Enable_mask                                         (0x00002000)
#define  GCOEFF_MBLEVEL_DROP_Thresh_mask                                         (0x00001FFF)
#define  GCOEFF_MBLEVEL_DROP_Enable(data)                                        (0x00002000&((data)<<13))
#define  GCOEFF_MBLEVEL_DROP_Thresh(data)                                        (0x00001FFF&(data))
#define  GCOEFF_MBLEVEL_DROP_get_Enable(data)                                    ((0x00002000&(data))>>13)
#define  GCOEFF_MBLEVEL_DROP_get_Thresh(data)                                    (0x00001FFF&(data))
#define  GCOEFF_MBLEVEL_DROP_Enable_src(data)                                    ((0x00002000&(data))>>13)
#define  GCOEFF_MBLEVEL_DROP_Thresh_src(data)                                    (0x00001FFF&(data))

#define  GCOEFF_SUMRUNCOST_THR_CHR                                              0x1800F8A4
#define  GCOEFF_SUMRUNCOST_THR_CHR_reg_addr                                      "0xB800F8A4"
#define  GCOEFF_SUMRUNCOST_THR_CHR_reg                                           0xB800F8A4
#define  GCOEFF_SUMRUNCOST_THR_CHR_inst_addr                                     "0x0032"
#define  GCOEFF_SUMRUNCOST_THR_CHR_inst_adr                                      "0x0029"
#define  GCOEFF_SUMRUNCOST_THR_CHR_inst                                          0x0029
#define  set_GCOEFF_SUMRUNCOST_THR_CHR_reg(data)                                 (*((volatile unsigned int*)GCOEFF_SUMRUNCOST_THR_CHR_reg)=data)
#define  get_GCOEFF_SUMRUNCOST_THR_CHR_reg                                       (*((volatile unsigned int*)GCOEFF_SUMRUNCOST_THR_CHR_reg))
#define  GCOEFF_SUMRUNCOST_THR_CHR_T4x4_shift                                    (16)
#define  GCOEFF_SUMRUNCOST_THR_CHR_T4x4_mask                                     (0x07FF0000)
#define  GCOEFF_SUMRUNCOST_THR_CHR_T4x4(data)                                    (0x07FF0000&((data)<<16))
#define  GCOEFF_SUMRUNCOST_THR_CHR_get_T4x4(data)                                ((0x07FF0000&(data))>>16)
#define  GCOEFF_SUMRUNCOST_THR_CHR_T4x4_src(data)                                ((0x07FF0000&(data))>>16)

#define  GCOEFF_FIRSTCFF_CHR                                                    0x1800F8A8
#define  GCOEFF_FIRSTCFF_CHR_reg_addr                                            "0xB800F8A8"
#define  GCOEFF_FIRSTCFF_CHR_reg                                                 0xB800F8A8
#define  GCOEFF_FIRSTCFF_CHR_inst_addr                                           "0x0033"
#define  GCOEFF_FIRSTCFF_CHR_inst_adr                                            "0x002A"
#define  GCOEFF_FIRSTCFF_CHR_inst                                                0x002A
#define  set_GCOEFF_FIRSTCFF_CHR_reg(data)                                       (*((volatile unsigned int*)GCOEFF_FIRSTCFF_CHR_reg)=data)
#define  get_GCOEFF_FIRSTCFF_CHR_reg                                             (*((volatile unsigned int*)GCOEFF_FIRSTCFF_CHR_reg))
#define  GCOEFF_FIRSTCFF_CHR_T4x4_shift                                          (16)
#define  GCOEFF_FIRSTCFF_CHR_T4x4_mask                                           (0x001F0000)
#define  GCOEFF_FIRSTCFF_CHR_T4x4(data)                                          (0x001F0000&((data)<<16))
#define  GCOEFF_FIRSTCFF_CHR_get_T4x4(data)                                      ((0x001F0000&(data))>>16)
#define  GCOEFF_FIRSTCFF_CHR_T4x4_src(data)                                      ((0x001F0000&(data))>>16)

#define  GCOEFF_SUMCFF_CHR                                                      0x1800F8AC
#define  GCOEFF_SUMCFF_CHR_reg_addr                                              "0xB800F8AC"
#define  GCOEFF_SUMCFF_CHR_reg                                                   0xB800F8AC
#define  GCOEFF_SUMCFF_CHR_inst_addr                                             "0x0034"
#define  GCOEFF_SUMCFF_CHR_inst_adr                                              "0x002B"
#define  GCOEFF_SUMCFF_CHR_inst                                                  0x002B
#define  set_GCOEFF_SUMCFF_CHR_reg(data)                                         (*((volatile unsigned int*)GCOEFF_SUMCFF_CHR_reg)=data)
#define  get_GCOEFF_SUMCFF_CHR_reg                                               (*((volatile unsigned int*)GCOEFF_SUMCFF_CHR_reg))
#define  GCOEFF_SUMCFF_CHR_T4x4_shift                                            (8)
#define  GCOEFF_SUMCFF_CHR_T4x4_mask                                             (0x0000FF00)
#define  GCOEFF_SUMCFF_CHR_T4x4(data)                                            (0x0000FF00&((data)<<8))
#define  GCOEFF_SUMCFF_CHR_get_T4x4(data)                                        ((0x0000FF00&(data))>>8)
#define  GCOEFF_SUMCFF_CHR_T4x4_src(data)                                        ((0x0000FF00&(data))>>8)

#define  GCOEFF_ULPRED                                                          0x1800F8B0
#define  GCOEFF_ULPRED_reg_addr                                                  "0xB800F8B0"
#define  GCOEFF_ULPRED_reg                                                       0xB800F8B0
#define  GCOEFF_ULPRED_inst_addr                                                 "0x0035"
#define  GCOEFF_ULPRED_inst_adr                                                  "0x002C"
#define  GCOEFF_ULPRED_inst                                                      0x002C
#define  set_GCOEFF_ULPRED_reg(data)                                             (*((volatile unsigned int*)GCOEFF_ULPRED_reg)=data)
#define  get_GCOEFF_ULPRED_reg                                                   (*((volatile unsigned int*)GCOEFF_ULPRED_reg))
#define  GCOEFF_ULPRED_Luma_wr_shift                                             (26)
#define  GCOEFF_ULPRED_CB_wr_shift                                               (25)
#define  GCOEFF_ULPRED_CR_wr_shift                                               (24)
#define  GCOEFF_ULPRED_Luma_shift                                                (16)
#define  GCOEFF_ULPRED_CB_shift                                                  (8)
#define  GCOEFF_ULPRED_CR_shift                                                  (0)
#define  GCOEFF_ULPRED_Luma_wr_mask                                              (0x04000000)
#define  GCOEFF_ULPRED_CB_wr_mask                                                (0x02000000)
#define  GCOEFF_ULPRED_CR_wr_mask                                                (0x01000000)
#define  GCOEFF_ULPRED_Luma_mask                                                 (0x00FF0000)
#define  GCOEFF_ULPRED_CB_mask                                                   (0x0000FF00)
#define  GCOEFF_ULPRED_CR_mask                                                   (0x000000FF)
#define  GCOEFF_ULPRED_Luma_wr(data)                                             (0x04000000&((data)<<26))
#define  GCOEFF_ULPRED_CB_wr(data)                                               (0x02000000&((data)<<25))
#define  GCOEFF_ULPRED_CR_wr(data)                                               (0x01000000&((data)<<24))
#define  GCOEFF_ULPRED_Luma(data)                                                (0x00FF0000&((data)<<16))
#define  GCOEFF_ULPRED_CB(data)                                                  (0x0000FF00&((data)<<8))
#define  GCOEFF_ULPRED_CR(data)                                                  (0x000000FF&(data))
#define  GCOEFF_ULPRED_get_Luma_wr(data)                                         ((0x04000000&(data))>>26)
#define  GCOEFF_ULPRED_get_CB_wr(data)                                           ((0x02000000&(data))>>25)
#define  GCOEFF_ULPRED_get_CR_wr(data)                                           ((0x01000000&(data))>>24)
#define  GCOEFF_ULPRED_get_Luma(data)                                            ((0x00FF0000&(data))>>16)
#define  GCOEFF_ULPRED_get_CB(data)                                              ((0x0000FF00&(data))>>8)
#define  GCOEFF_ULPRED_get_CR(data)                                              (0x000000FF&(data))
#define  GCOEFF_ULPRED_Luma_wr_src(data)                                         ((0x04000000&(data))>>26)
#define  GCOEFF_ULPRED_CB_wr_src(data)                                           ((0x02000000&(data))>>25)
#define  GCOEFF_ULPRED_CR_wr_src(data)                                           ((0x01000000&(data))>>24)
#define  GCOEFF_ULPRED_Luma_src(data)                                            ((0x00FF0000&(data))>>16)
#define  GCOEFF_ULPRED_CB_src(data)                                              ((0x0000FF00&(data))>>8)
#define  GCOEFF_ULPRED_CR_src(data)                                              (0x000000FF&(data))

#define  GCOEFF_PMEMCTL_DBG                                                     0x1800F8B4
#define  GCOEFF_PMEMCTL_DBG_reg_addr                                             "0xB800F8B4"
#define  GCOEFF_PMEMCTL_DBG_reg                                                  0xB800F8B4
#define  GCOEFF_PMEMCTL_DBG_inst_addr                                            "0x0036"
#define  GCOEFF_PMEMCTL_DBG_inst_adr                                             "0x002D"
#define  GCOEFF_PMEMCTL_DBG_inst                                                 0x002D
#define  set_GCOEFF_PMEMCTL_DBG_reg(data)                                        (*((volatile unsigned int*)GCOEFF_PMEMCTL_DBG_reg)=data)
#define  get_GCOEFF_PMEMCTL_DBG_reg                                              (*((volatile unsigned int*)GCOEFF_PMEMCTL_DBG_reg))
#define  GCOEFF_PMEMCTL_DBG_Soft_rst_shift                                       (24)
#define  GCOEFF_PMEMCTL_DBG_Init_en_shift                                        (23)
#define  GCOEFF_PMEMCTL_DBG_Rng_Size_shift                                       (16)
#define  GCOEFF_PMEMCTL_DBG_Rdptr_shift                                          (8)
#define  GCOEFF_PMEMCTL_DBG_Wrptr_shift                                          (0)
#define  GCOEFF_PMEMCTL_DBG_Soft_rst_mask                                        (0x01000000)
#define  GCOEFF_PMEMCTL_DBG_Init_en_mask                                         (0x00800000)
#define  GCOEFF_PMEMCTL_DBG_Rng_Size_mask                                        (0x007F0000)
#define  GCOEFF_PMEMCTL_DBG_Rdptr_mask                                           (0x0000FF00)
#define  GCOEFF_PMEMCTL_DBG_Wrptr_mask                                           (0x000000FF)
#define  GCOEFF_PMEMCTL_DBG_Soft_rst(data)                                       (0x01000000&((data)<<24))
#define  GCOEFF_PMEMCTL_DBG_Init_en(data)                                        (0x00800000&((data)<<23))
#define  GCOEFF_PMEMCTL_DBG_Rng_Size(data)                                       (0x007F0000&((data)<<16))
#define  GCOEFF_PMEMCTL_DBG_Rdptr(data)                                          (0x0000FF00&((data)<<8))
#define  GCOEFF_PMEMCTL_DBG_Wrptr(data)                                          (0x000000FF&(data))
#define  GCOEFF_PMEMCTL_DBG_get_Soft_rst(data)                                   ((0x01000000&(data))>>24)
#define  GCOEFF_PMEMCTL_DBG_get_Init_en(data)                                    ((0x00800000&(data))>>23)
#define  GCOEFF_PMEMCTL_DBG_get_Rng_Size(data)                                   ((0x007F0000&(data))>>16)
#define  GCOEFF_PMEMCTL_DBG_get_Rdptr(data)                                      ((0x0000FF00&(data))>>8)
#define  GCOEFF_PMEMCTL_DBG_get_Wrptr(data)                                      (0x000000FF&(data))
#define  GCOEFF_PMEMCTL_DBG_Soft_rst_src(data)                                   ((0x01000000&(data))>>24)
#define  GCOEFF_PMEMCTL_DBG_Init_en_src(data)                                    ((0x00800000&(data))>>23)
#define  GCOEFF_PMEMCTL_DBG_Rng_Size_src(data)                                   ((0x007F0000&(data))>>16)
#define  GCOEFF_PMEMCTL_DBG_Rdptr_src(data)                                      ((0x0000FF00&(data))>>8)
#define  GCOEFF_PMEMCTL_DBG_Wrptr_src(data)                                      (0x000000FF&(data))

#define  GCOEFF_QUANTIZER                                                       0x1800F8B8
#define  GCOEFF_QUANTIZER_reg_addr                                               "0xB800F8B8"
#define  GCOEFF_QUANTIZER_reg                                                    0xB800F8B8
#define  GCOEFF_QUANTIZER_inst_addr                                              "0x0037"
#define  GCOEFF_QUANTIZER_inst_adr                                               "0x002E"
#define  GCOEFF_QUANTIZER_inst                                                   0x002E
#define  set_GCOEFF_QUANTIZER_reg(data)                                          (*((volatile unsigned int*)GCOEFF_QUANTIZER_reg)=data)
#define  get_GCOEFF_QUANTIZER_reg                                                (*((volatile unsigned int*)GCOEFF_QUANTIZER_reg))
#define  GCOEFF_QUANTIZER_write_enable3_shift                                    (15)
#define  GCOEFF_QUANTIZER_flat_qtable_shift                                      (14)
#define  GCOEFF_QUANTIZER_write_enable2_shift                                    (13)
#define  GCOEFF_QUANTIZER_qpy_shift                                              (7)
#define  GCOEFF_QUANTIZER_write_enable1_shift                                    (6)
#define  GCOEFF_QUANTIZER_qpc_shift                                              (0)
#define  GCOEFF_QUANTIZER_write_enable3_mask                                     (0x00008000)
#define  GCOEFF_QUANTIZER_flat_qtable_mask                                       (0x00004000)
#define  GCOEFF_QUANTIZER_write_enable2_mask                                     (0x00002000)
#define  GCOEFF_QUANTIZER_qpy_mask                                               (0x00001F80)
#define  GCOEFF_QUANTIZER_write_enable1_mask                                     (0x00000040)
#define  GCOEFF_QUANTIZER_qpc_mask                                               (0x0000003F)
#define  GCOEFF_QUANTIZER_write_enable3(data)                                    (0x00008000&((data)<<15))
#define  GCOEFF_QUANTIZER_flat_qtable(data)                                      (0x00004000&((data)<<14))
#define  GCOEFF_QUANTIZER_write_enable2(data)                                    (0x00002000&((data)<<13))
#define  GCOEFF_QUANTIZER_qpy(data)                                              (0x00001F80&((data)<<7))
#define  GCOEFF_QUANTIZER_write_enable1(data)                                    (0x00000040&((data)<<6))
#define  GCOEFF_QUANTIZER_qpc(data)                                              (0x0000003F&(data))
#define  GCOEFF_QUANTIZER_get_write_enable3(data)                                ((0x00008000&(data))>>15)
#define  GCOEFF_QUANTIZER_get_flat_qtable(data)                                  ((0x00004000&(data))>>14)
#define  GCOEFF_QUANTIZER_get_write_enable2(data)                                ((0x00002000&(data))>>13)
#define  GCOEFF_QUANTIZER_get_qpy(data)                                          ((0x00001F80&(data))>>7)
#define  GCOEFF_QUANTIZER_get_write_enable1(data)                                ((0x00000040&(data))>>6)
#define  GCOEFF_QUANTIZER_get_qpc(data)                                          (0x0000003F&(data))
#define  GCOEFF_QUANTIZER_write_enable3_src(data)                                ((0x00008000&(data))>>15)
#define  GCOEFF_QUANTIZER_flat_qtable_src(data)                                  ((0x00004000&(data))>>14)
#define  GCOEFF_QUANTIZER_write_enable2_src(data)                                ((0x00002000&(data))>>13)
#define  GCOEFF_QUANTIZER_qpy_src(data)                                          ((0x00001F80&(data))>>7)
#define  GCOEFF_QUANTIZER_write_enable1_src(data)                                ((0x00000040&(data))>>6)
#define  GCOEFF_QUANTIZER_qpc_src(data)                                          (0x0000003F&(data))

#define  GCOEFF_MESTATUS                                                        0x1800F8BC
#define  GCOEFF_MESTATUS_reg_addr                                                "0xB800F8BC"
#define  GCOEFF_MESTATUS_reg                                                     0xB800F8BC
#define  GCOEFF_MESTATUS_inst_addr                                               "0x0038"
#define  GCOEFF_MESTATUS_inst_adr                                                "0x002F"
#define  GCOEFF_MESTATUS_inst                                                    0x002F
#define  set_GCOEFF_MESTATUS_reg(data)                                           (*((volatile unsigned int*)GCOEFF_MESTATUS_reg)=data)
#define  get_GCOEFF_MESTATUS_reg                                                 (*((volatile unsigned int*)GCOEFF_MESTATUS_reg))
#define  GCOEFF_MESTATUS_Mem_eng_busy_shift                                      (31)
#define  GCOEFF_MESTATUS_Mem_eng_busy_mask                                       (0x80000000)
#define  GCOEFF_MESTATUS_Mem_eng_busy(data)                                      (0x80000000&((data)<<31))
#define  GCOEFF_MESTATUS_get_Mem_eng_busy(data)                                  ((0x80000000&(data))>>31)
#define  GCOEFF_MESTATUS_Mem_eng_busy_src(data)                                  ((0x80000000&(data))>>31)

#define  GCOEFF_LISTREF                                                         0x1800F8C0
#define  GCOEFF_LISTREF_reg_addr                                                 "0xB800F8C0"
#define  GCOEFF_LISTREF_reg                                                      0xB800F8C0
#define  GCOEFF_LISTREF_inst_addr                                                "0x0039"
#define  GCOEFF_LISTREF_inst_adr                                                 "0x0030"
#define  GCOEFF_LISTREF_inst                                                     0x0030
#define  set_GCOEFF_LISTREF_reg(data)                                            (*((volatile unsigned int*)GCOEFF_LISTREF_reg)=data)
#define  get_GCOEFF_LISTREF_reg                                                  (*((volatile unsigned int*)GCOEFF_LISTREF_reg))
#define  GCOEFF_LISTREF_Inter_pred_mode_shift                                    (16)
#define  GCOEFF_LISTREF_List0RefIdx0_shift                                       (14)
#define  GCOEFF_LISTREF_List0RefIdx1_shift                                       (12)
#define  GCOEFF_LISTREF_List0RefIdx2_shift                                       (10)
#define  GCOEFF_LISTREF_List0RefIdx3_shift                                       (8)
#define  GCOEFF_LISTREF_List1RefIdx0_shift                                       (6)
#define  GCOEFF_LISTREF_List1RefIdx1_shift                                       (4)
#define  GCOEFF_LISTREF_List1RefIdx2_shift                                       (2)
#define  GCOEFF_LISTREF_List1RefIdx3_shift                                       (0)
#define  GCOEFF_LISTREF_Inter_pred_mode_mask                                     (0x00FF0000)
#define  GCOEFF_LISTREF_List0RefIdx0_mask                                        (0x0000C000)
#define  GCOEFF_LISTREF_List0RefIdx1_mask                                        (0x00003000)
#define  GCOEFF_LISTREF_List0RefIdx2_mask                                        (0x00000C00)
#define  GCOEFF_LISTREF_List0RefIdx3_mask                                        (0x00000300)
#define  GCOEFF_LISTREF_List1RefIdx0_mask                                        (0x000000C0)
#define  GCOEFF_LISTREF_List1RefIdx1_mask                                        (0x00000030)
#define  GCOEFF_LISTREF_List1RefIdx2_mask                                        (0x0000000C)
#define  GCOEFF_LISTREF_List1RefIdx3_mask                                        (0x00000003)
#define  GCOEFF_LISTREF_Inter_pred_mode(data)                                    (0x00FF0000&((data)<<16))
#define  GCOEFF_LISTREF_List0RefIdx0(data)                                       (0x0000C000&((data)<<14))
#define  GCOEFF_LISTREF_List0RefIdx1(data)                                       (0x00003000&((data)<<12))
#define  GCOEFF_LISTREF_List0RefIdx2(data)                                       (0x00000C00&((data)<<10))
#define  GCOEFF_LISTREF_List0RefIdx3(data)                                       (0x00000300&((data)<<8))
#define  GCOEFF_LISTREF_List1RefIdx0(data)                                       (0x000000C0&((data)<<6))
#define  GCOEFF_LISTREF_List1RefIdx1(data)                                       (0x00000030&((data)<<4))
#define  GCOEFF_LISTREF_List1RefIdx2(data)                                       (0x0000000C&((data)<<2))
#define  GCOEFF_LISTREF_List1RefIdx3(data)                                       (0x00000003&(data))
#define  GCOEFF_LISTREF_get_Inter_pred_mode(data)                                ((0x00FF0000&(data))>>16)
#define  GCOEFF_LISTREF_get_List0RefIdx0(data)                                   ((0x0000C000&(data))>>14)
#define  GCOEFF_LISTREF_get_List0RefIdx1(data)                                   ((0x00003000&(data))>>12)
#define  GCOEFF_LISTREF_get_List0RefIdx2(data)                                   ((0x00000C00&(data))>>10)
#define  GCOEFF_LISTREF_get_List0RefIdx3(data)                                   ((0x00000300&(data))>>8)
#define  GCOEFF_LISTREF_get_List1RefIdx0(data)                                   ((0x000000C0&(data))>>6)
#define  GCOEFF_LISTREF_get_List1RefIdx1(data)                                   ((0x00000030&(data))>>4)
#define  GCOEFF_LISTREF_get_List1RefIdx2(data)                                   ((0x0000000C&(data))>>2)
#define  GCOEFF_LISTREF_get_List1RefIdx3(data)                                   (0x00000003&(data))
#define  GCOEFF_LISTREF_Inter_pred_mode_src(data)                                ((0x00FF0000&(data))>>16)
#define  GCOEFF_LISTREF_List0RefIdx0_src(data)                                   ((0x0000C000&(data))>>14)
#define  GCOEFF_LISTREF_List0RefIdx1_src(data)                                   ((0x00003000&(data))>>12)
#define  GCOEFF_LISTREF_List0RefIdx2_src(data)                                   ((0x00000C00&(data))>>10)
#define  GCOEFF_LISTREF_List0RefIdx3_src(data)                                   ((0x00000300&(data))>>8)
#define  GCOEFF_LISTREF_List1RefIdx0_src(data)                                   ((0x000000C0&(data))>>6)
#define  GCOEFF_LISTREF_List1RefIdx1_src(data)                                   ((0x00000030&(data))>>4)
#define  GCOEFF_LISTREF_List1RefIdx2_src(data)                                   ((0x0000000C&(data))>>2)
#define  GCOEFF_LISTREF_List1RefIdx3_src(data)                                   (0x00000003&(data))

#define  GCOEFF_MBINFO                                                          0x1800F8C4
#define  GCOEFF_MBINFO_reg_addr                                                  "0xB800F8C4"
#define  GCOEFF_MBINFO_reg                                                       0xB800F8C4
#define  GCOEFF_MBINFO_inst_addr                                                 "0x003A"
#define  GCOEFF_MBINFO_inst_adr                                                  "0x0031"
#define  GCOEFF_MBINFO_inst                                                      0x0031
#define  set_GCOEFF_MBINFO_reg(data)                                             (*((volatile unsigned int*)GCOEFF_MBINFO_reg)=data)
#define  get_GCOEFF_MBINFO_reg                                                   (*((volatile unsigned int*)GCOEFF_MBINFO_reg))
#define  GCOEFF_MBINFO_SliceStart_shift                                          (25)
#define  GCOEFF_MBINFO_CodingType_shift                                          (23)
#define  GCOEFF_MBINFO_PictureType_shift                                         (21)
#define  GCOEFF_MBINFO_MBType_shift                                              (19)
#define  GCOEFF_MBINFO_MBpartition_shift                                         (16)
#define  GCOEFF_MBINFO_CurMBY_shift                                              (8)
#define  GCOEFF_MBINFO_CurMBX_shift                                              (0)
#define  GCOEFF_MBINFO_SliceStart_mask                                           (0x02000000)
#define  GCOEFF_MBINFO_CodingType_mask                                           (0x01800000)
#define  GCOEFF_MBINFO_PictureType_mask                                          (0x00600000)
#define  GCOEFF_MBINFO_MBType_mask                                               (0x00180000)
#define  GCOEFF_MBINFO_MBpartition_mask                                          (0x00070000)
#define  GCOEFF_MBINFO_CurMBY_mask                                               (0x0000FF00)
#define  GCOEFF_MBINFO_CurMBX_mask                                               (0x000000FF)
#define  GCOEFF_MBINFO_SliceStart(data)                                          (0x02000000&((data)<<25))
#define  GCOEFF_MBINFO_CodingType(data)                                          (0x01800000&((data)<<23))
#define  GCOEFF_MBINFO_PictureType(data)                                         (0x00600000&((data)<<21))
#define  GCOEFF_MBINFO_MBType(data)                                              (0x00180000&((data)<<19))
#define  GCOEFF_MBINFO_MBpartition(data)                                         (0x00070000&((data)<<16))
#define  GCOEFF_MBINFO_CurMBY(data)                                              (0x0000FF00&((data)<<8))
#define  GCOEFF_MBINFO_CurMBX(data)                                              (0x000000FF&(data))
#define  GCOEFF_MBINFO_get_SliceStart(data)                                      ((0x02000000&(data))>>25)
#define  GCOEFF_MBINFO_get_CodingType(data)                                      ((0x01800000&(data))>>23)
#define  GCOEFF_MBINFO_get_PictureType(data)                                     ((0x00600000&(data))>>21)
#define  GCOEFF_MBINFO_get_MBType(data)                                          ((0x00180000&(data))>>19)
#define  GCOEFF_MBINFO_get_MBpartition(data)                                     ((0x00070000&(data))>>16)
#define  GCOEFF_MBINFO_get_CurMBY(data)                                          ((0x0000FF00&(data))>>8)
#define  GCOEFF_MBINFO_get_CurMBX(data)                                          (0x000000FF&(data))
#define  GCOEFF_MBINFO_SliceStart_src(data)                                      ((0x02000000&(data))>>25)
#define  GCOEFF_MBINFO_CodingType_src(data)                                      ((0x01800000&(data))>>23)
#define  GCOEFF_MBINFO_PictureType_src(data)                                     ((0x00600000&(data))>>21)
#define  GCOEFF_MBINFO_MBType_src(data)                                          ((0x00180000&(data))>>19)
#define  GCOEFF_MBINFO_MBpartition_src(data)                                     ((0x00070000&(data))>>16)
#define  GCOEFF_MBINFO_CurMBY_src(data)                                          ((0x0000FF00&(data))>>8)
#define  GCOEFF_MBINFO_CurMBX_src(data)                                          (0x000000FF&(data))

#define  GCOEFF_REMMODE_0                                                       0x1800F8C8
#define  GCOEFF_REMMODE_0_reg_addr                                               "0xB800F8C8"
#define  GCOEFF_REMMODE_0_reg                                                    0xB800F8C8
#define  GCOEFF_REMMODE_0_inst_addr                                              "0x003B"
#define  GCOEFF_REMMODE_0_inst_adr                                               "0x0032"
#define  GCOEFF_REMMODE_0_inst                                                   0x0032
#define  set_GCOEFF_REMMODE_0_reg(data)                                          (*((volatile unsigned int*)GCOEFF_REMMODE_0_reg)=data)
#define  get_GCOEFF_REMMODE_0_reg                                                (*((volatile unsigned int*)GCOEFF_REMMODE_0_reg))
#define  GCOEFF_REMMODE_Value_shift                                              (0)
#define  GCOEFF_REMMODE_Value_mask                                               (0xFFFFFFFF)
#define  GCOEFF_REMMODE_Value(data)                                              (0xFFFFFFFF&(data))
#define  GCOEFF_REMMODE_get_Value(data)                                          (0xFFFFFFFF&(data))
#define  GCOEFF_REMMODE_Value_src(data)                                          (0xFFFFFFFF&(data))

#define  GCOEFF_REMMODE_1                                                       0x1800F8CC
#define  GCOEFF_REMMODE_1_reg_addr                                               "0xB800F8CC"
#define  GCOEFF_REMMODE_1_reg                                                    0xB800F8CC
#define  GCOEFF_REMMODE_1_inst_addr                                              "0x003C"
#define  GCOEFF_REMMODE_1_inst_adr                                               "0x0033"
#define  GCOEFF_REMMODE_1_inst                                                   0x0033
#define  set_GCOEFF_REMMODE_1_reg(data)                                          (*((volatile unsigned int*)GCOEFF_REMMODE_1_reg)=data)
#define  get_GCOEFF_REMMODE_1_reg                                                (*((volatile unsigned int*)GCOEFF_REMMODE_1_reg))

#define  GCOEFF_REMMODE_2                                                       0x1800F8D0
#define  GCOEFF_REMMODE_2_reg_addr                                               "0xB800F8D0"
#define  GCOEFF_REMMODE_2_reg                                                    0xB800F8D0
#define  GCOEFF_REMMODE_2_inst_addr                                              "0x003D"
#define  GCOEFF_REMMODE_2_inst_adr                                               "0x0034"
#define  GCOEFF_REMMODE_2_inst                                                   0x0034
#define  set_GCOEFF_REMMODE_2_reg(data)                                          (*((volatile unsigned int*)GCOEFF_REMMODE_2_reg)=data)
#define  get_GCOEFF_REMMODE_2_reg                                                (*((volatile unsigned int*)GCOEFF_REMMODE_2_reg))

#define  GCOEFF_BITSTR_0                                                        0x1800F8D4
#define  GCOEFF_BITSTR_0_reg_addr                                                "0xB800F8D4"
#define  GCOEFF_BITSTR_0_reg                                                     0xB800F8D4
#define  GCOEFF_BITSTR_0_inst_addr                                               "0x003E"
#define  GCOEFF_BITSTR_0_inst_adr                                                "0x0035"
#define  GCOEFF_BITSTR_0_inst                                                    0x0035
#define  set_GCOEFF_BITSTR_0_reg(data)                                           (*((volatile unsigned int*)GCOEFF_BITSTR_0_reg)=data)
#define  get_GCOEFF_BITSTR_0_reg                                                 (*((volatile unsigned int*)GCOEFF_BITSTR_0_reg))
#define  GCOEFF_BITSTR_Value_shift                                               (0)
#define  GCOEFF_BITSTR_Value_mask                                                (0xFFFFFFFF)
#define  GCOEFF_BITSTR_Value(data)                                               (0xFFFFFFFF&(data))
#define  GCOEFF_BITSTR_get_Value(data)                                           (0xFFFFFFFF&(data))
#define  GCOEFF_BITSTR_Value_src(data)                                           (0xFFFFFFFF&(data))

#define  GCOEFF_BITSTR_1                                                        0x1800F8D8
#define  GCOEFF_BITSTR_1_reg_addr                                                "0xB800F8D8"
#define  GCOEFF_BITSTR_1_reg                                                     0xB800F8D8
#define  GCOEFF_BITSTR_1_inst_addr                                               "0x003F"
#define  GCOEFF_BITSTR_1_inst_adr                                                "0x0036"
#define  GCOEFF_BITSTR_1_inst                                                    0x0036
#define  set_GCOEFF_BITSTR_1_reg(data)                                           (*((volatile unsigned int*)GCOEFF_BITSTR_1_reg)=data)
#define  get_GCOEFF_BITSTR_1_reg                                                 (*((volatile unsigned int*)GCOEFF_BITSTR_1_reg))

#define  GCOEFF_DEBINFO                                                         0x1800F8DC
#define  GCOEFF_DEBINFO_reg_addr                                                 "0xB800F8DC"
#define  GCOEFF_DEBINFO_reg                                                      0xB800F8DC
#define  GCOEFF_DEBINFO_inst_addr                                                "0x0040"
#define  GCOEFF_DEBINFO_inst_adr                                                 "0x0037"
#define  GCOEFF_DEBINFO_inst                                                     0x0037
#define  set_GCOEFF_DEBINFO_reg(data)                                            (*((volatile unsigned int*)GCOEFF_DEBINFO_reg)=data)
#define  get_GCOEFF_DEBINFO_reg                                                  (*((volatile unsigned int*)GCOEFF_DEBINFO_reg))
#define  GCOEFF_DEBINFO_Mb_mode_shift                                            (3)
#define  GCOEFF_DEBINFO_Eob_total_shift                                          (2)
#define  GCOEFF_DEBINFO_Transform_size_8x8_flag_shift                            (1)
#define  GCOEFF_DEBINFO_Mb_field_decoding_flag_shift                             (0)
#define  GCOEFF_DEBINFO_Mb_mode_mask                                             (0x00000038)
#define  GCOEFF_DEBINFO_Eob_total_mask                                           (0x00000004)
#define  GCOEFF_DEBINFO_Transform_size_8x8_flag_mask                             (0x00000002)
#define  GCOEFF_DEBINFO_Mb_field_decoding_flag_mask                              (0x00000001)
#define  GCOEFF_DEBINFO_Mb_mode(data)                                            (0x00000038&((data)<<3))
#define  GCOEFF_DEBINFO_Eob_total(data)                                          (0x00000004&((data)<<2))
#define  GCOEFF_DEBINFO_Transform_size_8x8_flag(data)                            (0x00000002&((data)<<1))
#define  GCOEFF_DEBINFO_Mb_field_decoding_flag(data)                             (0x00000001&(data))
#define  GCOEFF_DEBINFO_get_Mb_mode(data)                                        ((0x00000038&(data))>>3)
#define  GCOEFF_DEBINFO_get_Eob_total(data)                                      ((0x00000004&(data))>>2)
#define  GCOEFF_DEBINFO_get_Transform_size_8x8_flag(data)                        ((0x00000002&(data))>>1)
#define  GCOEFF_DEBINFO_get_Mb_field_decoding_flag(data)                         (0x00000001&(data))
#define  GCOEFF_DEBINFO_Mb_mode_src(data)                                        ((0x00000038&(data))>>3)
#define  GCOEFF_DEBINFO_Eob_total_src(data)                                      ((0x00000004&(data))>>2)
#define  GCOEFF_DEBINFO_Transform_size_8x8_flag_src(data)                        ((0x00000002&(data))>>1)
#define  GCOEFF_DEBINFO_Mb_field_decoding_flag_src(data)                         (0x00000001&(data))

#define  GCOEFF_SBCTRL                                                          0x1800F900
#define  GCOEFF_SBCTRL_reg_addr                                                  "0xB800F900"
#define  GCOEFF_SBCTRL_reg                                                       0xB800F900
#define  GCOEFF_SBCTRL_inst_addr                                                 "0x0041"
#define  GCOEFF_SBCTRL_inst_adr                                                  "0x0040"
#define  GCOEFF_SBCTRL_inst                                                      0x0040
#define  set_GCOEFF_SBCTRL_reg(data)                                             (*((volatile unsigned int*)GCOEFF_SBCTRL_reg)=data)
#define  get_GCOEFF_SBCTRL_reg                                                   (*((volatile unsigned int*)GCOEFF_SBCTRL_reg))
#define  GCOEFF_SBCTRL_write_enable4_shift                                       (10)
#define  GCOEFF_SBCTRL_DV_enable_shift                                           (9)
#define  GCOEFF_SBCTRL_write_enable3_shift                                       (8)
#define  GCOEFF_SBCTRL_Size_shift                                                (6)
#define  GCOEFF_SBCTRL_write_enable2_shift                                       (5)
#define  GCOEFF_SBCTRL_Rdptr_shift                                               (3)
#define  GCOEFF_SBCTRL_write_enable1_shift                                       (2)
#define  GCOEFF_SBCTRL_Wrptr_shift                                               (0)
#define  GCOEFF_SBCTRL_write_enable4_mask                                        (0x00000400)
#define  GCOEFF_SBCTRL_DV_enable_mask                                            (0x00000200)
#define  GCOEFF_SBCTRL_write_enable3_mask                                        (0x00000100)
#define  GCOEFF_SBCTRL_Size_mask                                                 (0x000000C0)
#define  GCOEFF_SBCTRL_write_enable2_mask                                        (0x00000020)
#define  GCOEFF_SBCTRL_Rdptr_mask                                                (0x00000018)
#define  GCOEFF_SBCTRL_write_enable1_mask                                        (0x00000004)
#define  GCOEFF_SBCTRL_Wrptr_mask                                                (0x00000003)
#define  GCOEFF_SBCTRL_write_enable4(data)                                       (0x00000400&((data)<<10))
#define  GCOEFF_SBCTRL_DV_enable(data)                                           (0x00000200&((data)<<9))
#define  GCOEFF_SBCTRL_write_enable3(data)                                       (0x00000100&((data)<<8))
#define  GCOEFF_SBCTRL_Size(data)                                                (0x000000C0&((data)<<6))
#define  GCOEFF_SBCTRL_write_enable2(data)                                       (0x00000020&((data)<<5))
#define  GCOEFF_SBCTRL_Rdptr(data)                                               (0x00000018&((data)<<3))
#define  GCOEFF_SBCTRL_write_enable1(data)                                       (0x00000004&((data)<<2))
#define  GCOEFF_SBCTRL_Wrptr(data)                                               (0x00000003&(data))
#define  GCOEFF_SBCTRL_get_write_enable4(data)                                   ((0x00000400&(data))>>10)
#define  GCOEFF_SBCTRL_get_DV_enable(data)                                       ((0x00000200&(data))>>9)
#define  GCOEFF_SBCTRL_get_write_enable3(data)                                   ((0x00000100&(data))>>8)
#define  GCOEFF_SBCTRL_get_Size(data)                                            ((0x000000C0&(data))>>6)
#define  GCOEFF_SBCTRL_get_write_enable2(data)                                   ((0x00000020&(data))>>5)
#define  GCOEFF_SBCTRL_get_Rdptr(data)                                           ((0x00000018&(data))>>3)
#define  GCOEFF_SBCTRL_get_write_enable1(data)                                   ((0x00000004&(data))>>2)
#define  GCOEFF_SBCTRL_get_Wrptr(data)                                           (0x00000003&(data))
#define  GCOEFF_SBCTRL_write_enable4_src(data)                                   ((0x00000400&(data))>>10)
#define  GCOEFF_SBCTRL_DV_enable_src(data)                                       ((0x00000200&(data))>>9)
#define  GCOEFF_SBCTRL_write_enable3_src(data)                                   ((0x00000100&(data))>>8)
#define  GCOEFF_SBCTRL_Size_src(data)                                            ((0x000000C0&(data))>>6)
#define  GCOEFF_SBCTRL_write_enable2_src(data)                                   ((0x00000020&(data))>>5)
#define  GCOEFF_SBCTRL_Rdptr_src(data)                                           ((0x00000018&(data))>>3)
#define  GCOEFF_SBCTRL_write_enable1_src(data)                                   ((0x00000004&(data))>>2)
#define  GCOEFF_SBCTRL_Wrptr_src(data)                                           (0x00000003&(data))

#ifdef _GCOEFF_USE_STRUCT
#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======GCOEFF register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  write_enable14:1;
        RBus_UInt32  Ipmdoff:1;
        RBus_UInt32  write_enable13:1;
        RBus_UInt32  Sideband_enable:1;
        RBus_UInt32  write_enable12:1;
        RBus_UInt32  Luma16x8_xform_sel:1;
        RBus_UInt32  write_enable11:1;
        RBus_UInt32  Luma8x16_xform_sel:1;
        RBus_UInt32  write_enable10:1;
        RBus_UInt32  Flush_cmd_disable:1;
        RBus_UInt32  write_enable9:1;
        RBus_UInt32  Softrst_disable:1;
        RBus_UInt32  write_enable7:1;
        RBus_UInt32  Trmem_dv_load:1;
        RBus_UInt32  write_enable6:1;
        RBus_UInt32  Umem_bypass:1;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  Luma16x16_xform_sel:1;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  Luma8x8_xform_sel:1;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  Constr_intra_pred:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  Wdone_enable:1;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  SReset_busy_clr:1;
    };
}GCOEFF_CTRL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  intra_flag:32;
    };
}GCOEFF_INTRA_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  fmvx:12;
        RBus_UInt32  res2:6;
        RBus_UInt32  fmvy:10;
    };
}GCOEFF_CHMV_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  fmvx:12;
        RBus_UInt32  res2:6;
        RBus_UInt32  fmvy:10;
    };
}GCOEFF_CHBMV_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  fmvx:12;
        RBus_UInt32  res2:6;
        RBus_UInt32  fmvy:10;
    };
}GCOEFF_CHMVD_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  fmvx:12;
        RBus_UInt32  res2:6;
        RBus_UInt32  fmvy:10;
    };
}GCOEFF_CHBMVD_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  seq_line_addr:31;
    };
}GCOEFF_SDMAADR_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  Value:28;
    };
}GCOEFF_INTR_THRESH_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  Reach_Thresh:1;
        RBus_UInt32  Count:28;
    };
}GCOEFF_BUSY_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  GenPulse:1;
        RBus_UInt32  DbgCtrl:3;
        RBus_UInt32  PicCount:14;
        RBus_UInt32  MbAddrX:7;
        RBus_UInt32  MbAddrY:7;
    };
}GCOEFF_DBUS1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  DbgCtrl:32;
    };
}GCOEFF_DBUS2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  Vmadr_en:1;
        RBus_UInt32  BaseA0:7;
        RBus_UInt32  res2:16;
    };
}GCOEFF_BASEA_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  OffsetA:7;
        RBus_UInt32  res2:3;
    };
}GCOEFF_OFFSETA_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  StartA:7;
    };
}GCOEFF_DEBPAR_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  IntraLumaStyleSel:1;
        RBus_UInt32  XVID_combine_style:2;
        RBus_UInt32  Style_Sel:3;
    };
}GCOEFF_CBPCTRL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Lookup:32;
    };
}GCOEFF_SUMRUNCOST_8X8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Lookup:32;
    };
}GCOEFF_SUMRUNCOST_4X4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  T4x4:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  T8x8:11;
    };
}GCOEFF_SUMRUNCOST_THR_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  T4x4:5;
        RBus_UInt32  res2:9;
        RBus_UInt32  T8x8:7;
    };
}GCOEFF_FIRSTCFF_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  T4x4:8;
        RBus_UInt32  T8x8:8;
    };
}GCOEFF_SUMCFF_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  List1Idx0:7;
        RBus_UInt32  List0Idx1:7;
        RBus_UInt32  List0Idx0:7;
    };
}GCOEFF_CHROMA_LD_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Value:32;
    };
}GCOEFF_INTRAMODE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  y:7;
    };
}GCOEFF_SLICE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  Enable:1;
        RBus_UInt32  Thresh:13;
    };
}GCOEFF_MBLEVEL_DROP_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  T4x4:11;
        RBus_UInt32  res2:16;
    };
}GCOEFF_SUMRUNCOST_THR_CHR_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  T4x4:5;
        RBus_UInt32  res2:16;
    };
}GCOEFF_FIRSTCFF_CHR_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  T4x4:8;
        RBus_UInt32  res2:8;
    };
}GCOEFF_SUMCFF_CHR_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  Luma_wr:1;
        RBus_UInt32  CB_wr:1;
        RBus_UInt32  CR_wr:1;
        RBus_UInt32  Luma:8;
        RBus_UInt32  CB:8;
        RBus_UInt32  CR:8;
    };
}GCOEFF_ULPRED_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  Soft_rst:1;
        RBus_UInt32  Init_en:1;
        RBus_UInt32  Rng_Size:7;
        RBus_UInt32  Rdptr:8;
        RBus_UInt32  Wrptr:8;
    };
}GCOEFF_PMEMCTL_DBG_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  flat_qtable:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  qpy:6;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  qpc:6;
    };
}GCOEFF_QUANTIZER_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Mem_eng_busy:1;
        RBus_UInt32  res1:31;
    };
}GCOEFF_MESTATUS_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  Inter_pred_mode:8;
        RBus_UInt32  List0RefIdx0:2;
        RBus_UInt32  List0RefIdx1:2;
        RBus_UInt32  List0RefIdx2:2;
        RBus_UInt32  List0RefIdx3:2;
        RBus_UInt32  List1RefIdx0:2;
        RBus_UInt32  List1RefIdx1:2;
        RBus_UInt32  List1RefIdx2:2;
        RBus_UInt32  List1RefIdx3:2;
    };
}GCOEFF_LISTREF_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  SliceStart:1;
        RBus_UInt32  CodingType:2;
        RBus_UInt32  PictureType:2;
        RBus_UInt32  MBType:2;
        RBus_UInt32  MBpartition:3;
        RBus_UInt32  CurMBY:8;
        RBus_UInt32  CurMBX:8;
    };
}GCOEFF_MBINFO_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Value:32;
    };
}GCOEFF_REMMODE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Value:32;
    };
}GCOEFF_BITSTR_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  Mb_mode:3;
        RBus_UInt32  Eob_total:1;
        RBus_UInt32  Transform_size_8x8_flag:1;
        RBus_UInt32  Mb_field_decoding_flag:1;
    };
}GCOEFF_DEBINFO_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  DV_enable:1;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  Size:2;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  Rdptr:2;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  Wrptr:2;
    };
}GCOEFF_SBCTRL_RBUS;

#else //apply LITTLE_ENDIAN

//======GCOEFF register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  SReset_busy_clr:1;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  Wdone_enable:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  Constr_intra_pred:1;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  Luma8x8_xform_sel:1;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  Luma16x16_xform_sel:1;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  Umem_bypass:1;
        RBus_UInt32  write_enable6:1;
        RBus_UInt32  Trmem_dv_load:1;
        RBus_UInt32  write_enable7:1;
        RBus_UInt32  Softrst_disable:1;
        RBus_UInt32  write_enable9:1;
        RBus_UInt32  Flush_cmd_disable:1;
        RBus_UInt32  write_enable10:1;
        RBus_UInt32  Luma8x16_xform_sel:1;
        RBus_UInt32  write_enable11:1;
        RBus_UInt32  Luma16x8_xform_sel:1;
        RBus_UInt32  write_enable12:1;
        RBus_UInt32  Sideband_enable:1;
        RBus_UInt32  write_enable13:1;
        RBus_UInt32  Ipmdoff:1;
        RBus_UInt32  write_enable14:1;
        RBus_UInt32  res1:6;
    };
}GCOEFF_CTRL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  intra_flag:32;
    };
}GCOEFF_INTRA_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmvy:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  fmvx:12;
        RBus_UInt32  res2:4;
    };
}GCOEFF_CHMV_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmvy:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  fmvx:12;
        RBus_UInt32  res2:4;
    };
}GCOEFF_CHBMV_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmvy:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  fmvx:12;
        RBus_UInt32  res2:4;
    };
}GCOEFF_CHMVD_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmvy:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  fmvx:12;
        RBus_UInt32  res2:4;
    };
}GCOEFF_CHBMVD_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seq_line_addr:31;
        RBus_UInt32  res1:1;
    };
}GCOEFF_SDMAADR_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Value:28;
        RBus_UInt32  res1:4;
    };
}GCOEFF_INTR_THRESH_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Count:28;
        RBus_UInt32  Reach_Thresh:1;
        RBus_UInt32  res1:3;
    };
}GCOEFF_BUSY_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  MbAddrY:7;
        RBus_UInt32  MbAddrX:7;
        RBus_UInt32  PicCount:14;
        RBus_UInt32  DbgCtrl:3;
        RBus_UInt32  GenPulse:1;
    };
}GCOEFF_DBUS1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  DbgCtrl:32;
    };
}GCOEFF_DBUS2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  BaseA0:7;
        RBus_UInt32  Vmadr_en:1;
        RBus_UInt32  res2:8;
    };
}GCOEFF_BASEA_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  OffsetA:7;
        RBus_UInt32  res2:22;
    };
}GCOEFF_OFFSETA_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  StartA:7;
        RBus_UInt32  res1:25;
    };
}GCOEFF_DEBPAR_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Style_Sel:3;
        RBus_UInt32  XVID_combine_style:2;
        RBus_UInt32  IntraLumaStyleSel:1;
        RBus_UInt32  res1:26;
    };
}GCOEFF_CBPCTRL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Lookup:32;
    };
}GCOEFF_SUMRUNCOST_8X8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Lookup:32;
    };
}GCOEFF_SUMRUNCOST_4X4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  T8x8:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  T4x4:11;
        RBus_UInt32  res2:5;
    };
}GCOEFF_SUMRUNCOST_THR_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  T8x8:7;
        RBus_UInt32  res1:9;
        RBus_UInt32  T4x4:5;
        RBus_UInt32  res2:11;
    };
}GCOEFF_FIRSTCFF_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  T8x8:8;
        RBus_UInt32  T4x4:8;
        RBus_UInt32  res1:16;
    };
}GCOEFF_SUMCFF_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  List0Idx0:7;
        RBus_UInt32  List0Idx1:7;
        RBus_UInt32  List1Idx0:7;
        RBus_UInt32  res1:11;
    };
}GCOEFF_CHROMA_LD_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Value:32;
    };
}GCOEFF_INTRAMODE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y:7;
        RBus_UInt32  res1:25;
    };
}GCOEFF_SLICE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Thresh:13;
        RBus_UInt32  Enable:1;
        RBus_UInt32  res1:18;
    };
}GCOEFF_MBLEVEL_DROP_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  T4x4:11;
        RBus_UInt32  res2:5;
    };
}GCOEFF_SUMRUNCOST_THR_CHR_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  T4x4:5;
        RBus_UInt32  res2:11;
    };
}GCOEFF_FIRSTCFF_CHR_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  T4x4:8;
        RBus_UInt32  res2:16;
    };
}GCOEFF_SUMCFF_CHR_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  CR:8;
        RBus_UInt32  CB:8;
        RBus_UInt32  Luma:8;
        RBus_UInt32  CR_wr:1;
        RBus_UInt32  CB_wr:1;
        RBus_UInt32  Luma_wr:1;
        RBus_UInt32  res1:5;
    };
}GCOEFF_ULPRED_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Wrptr:8;
        RBus_UInt32  Rdptr:8;
        RBus_UInt32  Rng_Size:7;
        RBus_UInt32  Init_en:1;
        RBus_UInt32  Soft_rst:1;
        RBus_UInt32  res1:7;
    };
}GCOEFF_PMEMCTL_DBG_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  qpc:6;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  qpy:6;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  flat_qtable:1;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  res1:16;
    };
}GCOEFF_QUANTIZER_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  Mem_eng_busy:1;
    };
}GCOEFF_MESTATUS_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  List1RefIdx3:2;
        RBus_UInt32  List1RefIdx2:2;
        RBus_UInt32  List1RefIdx1:2;
        RBus_UInt32  List1RefIdx0:2;
        RBus_UInt32  List0RefIdx3:2;
        RBus_UInt32  List0RefIdx2:2;
        RBus_UInt32  List0RefIdx1:2;
        RBus_UInt32  List0RefIdx0:2;
        RBus_UInt32  Inter_pred_mode:8;
        RBus_UInt32  res1:8;
    };
}GCOEFF_LISTREF_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  CurMBX:8;
        RBus_UInt32  CurMBY:8;
        RBus_UInt32  MBpartition:3;
        RBus_UInt32  MBType:2;
        RBus_UInt32  PictureType:2;
        RBus_UInt32  CodingType:2;
        RBus_UInt32  SliceStart:1;
        RBus_UInt32  res1:6;
    };
}GCOEFF_MBINFO_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Value:32;
    };
}GCOEFF_REMMODE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Value:32;
    };
}GCOEFF_BITSTR_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Mb_field_decoding_flag:1;
        RBus_UInt32  Transform_size_8x8_flag:1;
        RBus_UInt32  Eob_total:1;
        RBus_UInt32  Mb_mode:3;
        RBus_UInt32  res1:26;
    };
}GCOEFF_DEBINFO_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Wrptr:2;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  Rdptr:2;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  Size:2;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  DV_enable:1;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  res1:21;
    };
}GCOEFF_SBCTRL_RBUS;




#endif 


#endif 
#endif 
