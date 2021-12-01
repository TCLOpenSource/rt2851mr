/**
* @file Merlin5_VE_SEG_SPEC
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_SEG_REG_H_
#define _RBUS_SEG_REG_H_

#include "rbus_types.h"



//  SEG Register Address
#define  SEG_ctrl                                                               0x1800E740
#define  SEG_ctrl_reg_addr                                                       "0xB800E740"
#define  SEG_ctrl_reg                                                            0xB800E740
#define  SEG_ctrl_inst_addr                                                      "0x0000"
#define  set_SEG_ctrl_reg(data)                                                  (*((volatile unsigned int*)SEG_ctrl_reg)=data)
#define  get_SEG_ctrl_reg                                                        (*((volatile unsigned int*)SEG_ctrl_reg))
#define  SEG_ctrl_segreset_shift                                                 (2)
#define  SEG_ctrl_resetreadpointer_shift                                         (1)
#define  SEG_ctrl_segenable_shift                                                (0)
#define  SEG_ctrl_segreset_mask                                                  (0x00000004)
#define  SEG_ctrl_resetreadpointer_mask                                          (0x00000002)
#define  SEG_ctrl_segenable_mask                                                 (0x00000001)
#define  SEG_ctrl_segreset(data)                                                 (0x00000004&((data)<<2))
#define  SEG_ctrl_resetreadpointer(data)                                         (0x00000002&((data)<<1))
#define  SEG_ctrl_segenable(data)                                                (0x00000001&(data))
#define  SEG_ctrl_get_segreset(data)                                             ((0x00000004&(data))>>2)
#define  SEG_ctrl_get_resetreadpointer(data)                                     ((0x00000002&(data))>>1)
#define  SEG_ctrl_get_segenable(data)                                            (0x00000001&(data))

#define  SEG_tbcmd                                                              0x1800E744
#define  SEG_tbcmd_reg_addr                                                      "0xB800E744"
#define  SEG_tbcmd_reg                                                           0xB800E744
#define  SEG_tbcmd_inst_addr                                                     "0x0001"
#define  set_SEG_tbcmd_reg(data)                                                 (*((volatile unsigned int*)SEG_tbcmd_reg)=data)
#define  get_SEG_tbcmd_reg                                                       (*((volatile unsigned int*)SEG_tbcmd_reg))
#define  SEG_tbcmd_startaddr_shift                                               (0)
#define  SEG_tbcmd_startaddr_mask                                                (0xFFFFFFFF)
#define  SEG_tbcmd_startaddr(data)                                               (0xFFFFFFFF&(data))
#define  SEG_tbcmd_get_startaddr(data)                                           (0xFFFFFFFF&(data))

#define  SEG_tbcmd1                                                             0x1800E748
#define  SEG_tbcmd1_reg_addr                                                     "0xB800E748"
#define  SEG_tbcmd1_reg                                                          0xB800E748
#define  SEG_tbcmd1_inst_addr                                                    "0x0002"
#define  set_SEG_tbcmd1_reg(data)                                                (*((volatile unsigned int*)SEG_tbcmd1_reg)=data)
#define  get_SEG_tbcmd1_reg                                                      (*((volatile unsigned int*)SEG_tbcmd1_reg))
#define  SEG_tbcmd1_writepointer_shift                                           (0)
#define  SEG_tbcmd1_writepointer_mask                                            (0x0000FFFF)
#define  SEG_tbcmd1_writepointer(data)                                           (0x0000FFFF&(data))
#define  SEG_tbcmd1_get_writepointer(data)                                       (0x0000FFFF&(data))

#define  SEG_slccfg                                                             0x1800E74C
#define  SEG_slccfg_reg_addr                                                     "0xB800E74C"
#define  SEG_slccfg_reg                                                          0xB800E74C
#define  SEG_slccfg_inst_addr                                                    "0x0003"
#define  set_SEG_slccfg_reg(data)                                                (*((volatile unsigned int*)SEG_slccfg_reg)=data)
#define  get_SEG_slccfg_reg                                                      (*((volatile unsigned int*)SEG_slccfg_reg))
#define  SEG_slccfg_startaddr_shift                                              (0)
#define  SEG_slccfg_startaddr_mask                                               (0xFFFFFFFF)
#define  SEG_slccfg_startaddr(data)                                              (0xFFFFFFFF&(data))
#define  SEG_slccfg_get_startaddr(data)                                          (0xFFFFFFFF&(data))

#define  SEG_sync                                                               0x1800E750
#define  SEG_sync_reg_addr                                                       "0xB800E750"
#define  SEG_sync_reg                                                            0xB800E750
#define  SEG_sync_inst_addr                                                      "0x0004"
#define  set_SEG_sync_reg(data)                                                  (*((volatile unsigned int*)SEG_sync_reg)=data)
#define  get_SEG_sync_reg                                                        (*((volatile unsigned int*)SEG_sync_reg))
#define  SEG_sync_enablealtminc_shift                                            (31)
#define  SEG_sync_altminc_shift                                                  (18)
#define  SEG_sync_select_shift                                                   (17)
#define  SEG_sync_enable_shift                                                   (16)
#define  SEG_sync_minc_shift                                                     (0)
#define  SEG_sync_enablealtminc_mask                                             (0x80000000)
#define  SEG_sync_altminc_mask                                                   (0x7FFC0000)
#define  SEG_sync_select_mask                                                    (0x00020000)
#define  SEG_sync_enable_mask                                                    (0x00010000)
#define  SEG_sync_minc_mask                                                      (0x0000FFFF)
#define  SEG_sync_enablealtminc(data)                                            (0x80000000&((data)<<31))
#define  SEG_sync_altminc(data)                                                  (0x7FFC0000&((data)<<18))
#define  SEG_sync_select(data)                                                   (0x00020000&((data)<<17))
#define  SEG_sync_enable(data)                                                   (0x00010000&((data)<<16))
#define  SEG_sync_minc(data)                                                     (0x0000FFFF&(data))
#define  SEG_sync_get_enablealtminc(data)                                        ((0x80000000&(data))>>31)
#define  SEG_sync_get_altminc(data)                                              ((0x7FFC0000&(data))>>18)
#define  SEG_sync_get_select(data)                                               ((0x00020000&(data))>>17)
#define  SEG_sync_get_enable(data)                                               ((0x00010000&(data))>>16)
#define  SEG_sync_get_minc(data)                                                 (0x0000FFFF&(data))

#define  SEG_debug                                                              0x1800E754
#define  SEG_debug_reg_addr                                                      "0xB800E754"
#define  SEG_debug_reg                                                           0xB800E754
#define  SEG_debug_inst_addr                                                     "0x0005"
#define  set_SEG_debug_reg(data)                                                 (*((volatile unsigned int*)SEG_debug_reg)=data)
#define  get_SEG_debug_reg                                                       (*((volatile unsigned int*)SEG_debug_reg))
#define  SEG_debug_segexport_shift                                               (19)
#define  SEG_debug_enable_shift                                                  (18)
#define  SEG_debug_ctbaddr_shift                                                 (0)
#define  SEG_debug_segexport_mask                                                (0x00080000)
#define  SEG_debug_enable_mask                                                   (0x00040000)
#define  SEG_debug_ctbaddr_mask                                                  (0x0003FFFF)
#define  SEG_debug_segexport(data)                                               (0x00080000&((data)<<19))
#define  SEG_debug_enable(data)                                                  (0x00040000&((data)<<18))
#define  SEG_debug_ctbaddr(data)                                                 (0x0003FFFF&(data))
#define  SEG_debug_get_segexport(data)                                           ((0x00080000&(data))>>19)
#define  SEG_debug_get_enable(data)                                              ((0x00040000&(data))>>18)
#define  SEG_debug_get_ctbaddr(data)                                             (0x0003FFFF&(data))

#define  SEG_debug1                                                             0x1800E758
#define  SEG_debug1_reg_addr                                                     "0xB800E758"
#define  SEG_debug1_reg                                                          0xB800E758
#define  SEG_debug1_inst_addr                                                    "0x0006"
#define  set_SEG_debug1_reg(data)                                                (*((volatile unsigned int*)SEG_debug1_reg)=data)
#define  get_SEG_debug1_reg                                                      (*((volatile unsigned int*)SEG_debug1_reg))
#define  SEG_debug1_qpdeltaabs_shift                                             (14)
#define  SEG_debug1_size_shift                                                   (11)
#define  SEG_debug1_zidx_shift                                                   (3)
#define  SEG_debug1_tugo_shift                                                   (2)
#define  SEG_debug1_cugo_shift                                                   (1)
#define  SEG_debug1_saogo_shift                                                  (0)
#define  SEG_debug1_qpdeltaabs_mask                                              (0x00004000)
#define  SEG_debug1_size_mask                                                    (0x00003800)
#define  SEG_debug1_zidx_mask                                                    (0x000007F8)
#define  SEG_debug1_tugo_mask                                                    (0x00000004)
#define  SEG_debug1_cugo_mask                                                    (0x00000002)
#define  SEG_debug1_saogo_mask                                                   (0x00000001)
#define  SEG_debug1_qpdeltaabs(data)                                             (0x00004000&((data)<<14))
#define  SEG_debug1_size(data)                                                   (0x00003800&((data)<<11))
#define  SEG_debug1_zidx(data)                                                   (0x000007F8&((data)<<3))
#define  SEG_debug1_tugo(data)                                                   (0x00000004&((data)<<2))
#define  SEG_debug1_cugo(data)                                                   (0x00000002&((data)<<1))
#define  SEG_debug1_saogo(data)                                                  (0x00000001&(data))
#define  SEG_debug1_get_qpdeltaabs(data)                                         ((0x00004000&(data))>>14)
#define  SEG_debug1_get_size(data)                                               ((0x00003800&(data))>>11)
#define  SEG_debug1_get_zidx(data)                                               ((0x000007F8&(data))>>3)
#define  SEG_debug1_get_tugo(data)                                               ((0x00000004&(data))>>2)
#define  SEG_debug1_get_cugo(data)                                               ((0x00000002&(data))>>1)
#define  SEG_debug1_get_saogo(data)                                              (0x00000001&(data))

#define  SEG_debug2                                                             0x1800E75C
#define  SEG_debug2_reg_addr                                                     "0xB800E75C"
#define  SEG_debug2_reg                                                          0xB800E75C
#define  SEG_debug2_inst_addr                                                    "0x0007"
#define  set_SEG_debug2_reg(data)                                                (*((volatile unsigned int*)SEG_debug2_reg)=data)
#define  get_SEG_debug2_reg                                                      (*((volatile unsigned int*)SEG_debug2_reg))
#define  SEG_debug2_piccount_shift                                               (0)
#define  SEG_debug2_piccount_mask                                                (0x00007FFF)
#define  SEG_debug2_piccount(data)                                               (0x00007FFF&(data))
#define  SEG_debug2_get_piccount(data)                                           (0x00007FFF&(data))

#define  SEG_debug3                                                             0x1800E760
#define  SEG_debug3_reg_addr                                                     "0xB800E760"
#define  SEG_debug3_reg                                                          0xB800E760
#define  SEG_debug3_inst_addr                                                    "0x0008"
#define  set_SEG_debug3_reg(data)                                                (*((volatile unsigned int*)SEG_debug3_reg)=data)
#define  get_SEG_debug3_reg                                                      (*((volatile unsigned int*)SEG_debug3_reg))
#define  SEG_debug3_sdesaddr_shift                                               (0)
#define  SEG_debug3_sdesaddr_mask                                                (0xFFFFFFFF)
#define  SEG_debug3_sdesaddr(data)                                               (0xFFFFFFFF&(data))
#define  SEG_debug3_get_sdesaddr(data)                                           (0xFFFFFFFF&(data))

#define  SEG_debug4                                                             0x1800E764
#define  SEG_debug4_reg_addr                                                     "0xB800E764"
#define  SEG_debug4_reg                                                          0xB800E764
#define  SEG_debug4_inst_addr                                                    "0x0009"
#define  set_SEG_debug4_reg(data)                                                (*((volatile unsigned int*)SEG_debug4_reg)=data)
#define  get_SEG_debug4_reg                                                      (*((volatile unsigned int*)SEG_debug4_reg))
#define  SEG_debug4_mvdsaddr_shift                                               (0)
#define  SEG_debug4_mvdsaddr_mask                                                (0xFFFFFFFF)
#define  SEG_debug4_mvdsaddr(data)                                               (0xFFFFFFFF&(data))
#define  SEG_debug4_get_mvdsaddr(data)                                           (0xFFFFFFFF&(data))

#define  SEG_debug5                                                             0x1800E768
#define  SEG_debug5_reg_addr                                                     "0xB800E768"
#define  SEG_debug5_reg                                                          0xB800E768
#define  SEG_debug5_inst_addr                                                    "0x000A"
#define  set_SEG_debug5_reg(data)                                                (*((volatile unsigned int*)SEG_debug5_reg)=data)
#define  get_SEG_debug5_reg                                                      (*((volatile unsigned int*)SEG_debug5_reg))
#define  SEG_debug5_itsaddr_shift                                                (0)
#define  SEG_debug5_itsaddr_mask                                                 (0xFFFFFFFF)
#define  SEG_debug5_itsaddr(data)                                                (0xFFFFFFFF&(data))
#define  SEG_debug5_get_itsaddr(data)                                            (0xFFFFFFFF&(data))

#define  SEG_debug6                                                             0x1800E76C
#define  SEG_debug6_reg_addr                                                     "0xB800E76C"
#define  SEG_debug6_reg                                                          0xB800E76C
#define  SEG_debug6_inst_addr                                                    "0x000B"
#define  set_SEG_debug6_reg(data)                                                (*((volatile unsigned int*)SEG_debug6_reg)=data)
#define  get_SEG_debug6_reg                                                      (*((volatile unsigned int*)SEG_debug6_reg))
#define  SEG_debug6_cmsaddr_shift                                                (0)
#define  SEG_debug6_cmsaddr_mask                                                 (0xFFFFFFFF)
#define  SEG_debug6_cmsaddr(data)                                                (0xFFFFFFFF&(data))
#define  SEG_debug6_get_cmsaddr(data)                                            (0xFFFFFFFF&(data))

#define  SEG_segment_0                                                          0x1800E770
#define  SEG_segment_0_reg_addr                                                  "0xB800E770"
#define  SEG_segment_0_reg                                                       0xB800E770
#define  SEG_segment_0_inst_addr                                                 "0x000C"
#define  set_SEG_segment_0_reg(data)                                             (*((volatile unsigned int*)SEG_segment_0_reg)=data)
#define  get_SEG_segment_0_reg                                                   (*((volatile unsigned int*)SEG_segment_0_reg))
#define  SEG_segment_0_masklossless_shift                                        (23)
#define  SEG_segment_0_maskqindex_shift                                          (22)
#define  SEG_segment_0_maskfilterlevel_shift                                     (21)
#define  SEG_segment_0_maskrefidx_shift                                          (20)
#define  SEG_segment_0_maskskip_shift                                            (19)
#define  SEG_segment_0_qindex_shift                                              (10)
#define  SEG_segment_0_filterlevel_shift                                         (3)
#define  SEG_segment_0_refidx_shift                                              (0)
#define  SEG_segment_0_masklossless_mask                                         (0x00800000)
#define  SEG_segment_0_maskqindex_mask                                           (0x00400000)
#define  SEG_segment_0_maskfilterlevel_mask                                      (0x00200000)
#define  SEG_segment_0_maskrefidx_mask                                           (0x00100000)
#define  SEG_segment_0_maskskip_mask                                             (0x00080000)
#define  SEG_segment_0_qindex_mask                                               (0x0007FC00)
#define  SEG_segment_0_filterlevel_mask                                          (0x000003F8)
#define  SEG_segment_0_refidx_mask                                               (0x00000007)
#define  SEG_segment_0_masklossless(data)                                        (0x00800000&((data)<<23))
#define  SEG_segment_0_maskqindex(data)                                          (0x00400000&((data)<<22))
#define  SEG_segment_0_maskfilterlevel(data)                                     (0x00200000&((data)<<21))
#define  SEG_segment_0_maskrefidx(data)                                          (0x00100000&((data)<<20))
#define  SEG_segment_0_maskskip(data)                                            (0x00080000&((data)<<19))
#define  SEG_segment_0_qindex(data)                                              (0x0007FC00&((data)<<10))
#define  SEG_segment_0_filterlevel(data)                                         (0x000003F8&((data)<<3))
#define  SEG_segment_0_refidx(data)                                              (0x00000007&(data))
#define  SEG_segment_0_get_masklossless(data)                                    ((0x00800000&(data))>>23)
#define  SEG_segment_0_get_maskqindex(data)                                      ((0x00400000&(data))>>22)
#define  SEG_segment_0_get_maskfilterlevel(data)                                 ((0x00200000&(data))>>21)
#define  SEG_segment_0_get_maskrefidx(data)                                      ((0x00100000&(data))>>20)
#define  SEG_segment_0_get_maskskip(data)                                        ((0x00080000&(data))>>19)
#define  SEG_segment_0_get_qindex(data)                                          ((0x0007FC00&(data))>>10)
#define  SEG_segment_0_get_filterlevel(data)                                     ((0x000003F8&(data))>>3)
#define  SEG_segment_0_get_refidx(data)                                          (0x00000007&(data))

#define  SEG_segment_1                                                          0x1800E774
#define  SEG_segment_1_reg_addr                                                  "0xB800E774"
#define  SEG_segment_1_reg                                                       0xB800E774
#define  SEG_segment_1_inst_addr                                                 "0x000D"
#define  set_SEG_segment_1_reg(data)                                             (*((volatile unsigned int*)SEG_segment_1_reg)=data)
#define  get_SEG_segment_1_reg                                                   (*((volatile unsigned int*)SEG_segment_1_reg))
#define  SEG_segment_1_masklossless_shift                                        (23)
#define  SEG_segment_1_maskqindex_shift                                          (22)
#define  SEG_segment_1_maskfilterlevel_shift                                     (21)
#define  SEG_segment_1_maskrefidx_shift                                          (20)
#define  SEG_segment_1_maskskip_shift                                            (19)
#define  SEG_segment_1_qindex_shift                                              (10)
#define  SEG_segment_1_filterlevel_shift                                         (3)
#define  SEG_segment_1_refidx_shift                                              (0)
#define  SEG_segment_1_masklossless_mask                                         (0x00800000)
#define  SEG_segment_1_maskqindex_mask                                           (0x00400000)
#define  SEG_segment_1_maskfilterlevel_mask                                      (0x00200000)
#define  SEG_segment_1_maskrefidx_mask                                           (0x00100000)
#define  SEG_segment_1_maskskip_mask                                             (0x00080000)
#define  SEG_segment_1_qindex_mask                                               (0x0007FC00)
#define  SEG_segment_1_filterlevel_mask                                          (0x000003F8)
#define  SEG_segment_1_refidx_mask                                               (0x00000007)
#define  SEG_segment_1_masklossless(data)                                        (0x00800000&((data)<<23))
#define  SEG_segment_1_maskqindex(data)                                          (0x00400000&((data)<<22))
#define  SEG_segment_1_maskfilterlevel(data)                                     (0x00200000&((data)<<21))
#define  SEG_segment_1_maskrefidx(data)                                          (0x00100000&((data)<<20))
#define  SEG_segment_1_maskskip(data)                                            (0x00080000&((data)<<19))
#define  SEG_segment_1_qindex(data)                                              (0x0007FC00&((data)<<10))
#define  SEG_segment_1_filterlevel(data)                                         (0x000003F8&((data)<<3))
#define  SEG_segment_1_refidx(data)                                              (0x00000007&(data))
#define  SEG_segment_1_get_masklossless(data)                                    ((0x00800000&(data))>>23)
#define  SEG_segment_1_get_maskqindex(data)                                      ((0x00400000&(data))>>22)
#define  SEG_segment_1_get_maskfilterlevel(data)                                 ((0x00200000&(data))>>21)
#define  SEG_segment_1_get_maskrefidx(data)                                      ((0x00100000&(data))>>20)
#define  SEG_segment_1_get_maskskip(data)                                        ((0x00080000&(data))>>19)
#define  SEG_segment_1_get_qindex(data)                                          ((0x0007FC00&(data))>>10)
#define  SEG_segment_1_get_filterlevel(data)                                     ((0x000003F8&(data))>>3)
#define  SEG_segment_1_get_refidx(data)                                          (0x00000007&(data))

#define  SEG_segment_2                                                          0x1800E778
#define  SEG_segment_2_reg_addr                                                  "0xB800E778"
#define  SEG_segment_2_reg                                                       0xB800E778
#define  SEG_segment_2_inst_addr                                                 "0x000E"
#define  set_SEG_segment_2_reg(data)                                             (*((volatile unsigned int*)SEG_segment_2_reg)=data)
#define  get_SEG_segment_2_reg                                                   (*((volatile unsigned int*)SEG_segment_2_reg))
#define  SEG_segment_2_masklossless_shift                                        (23)
#define  SEG_segment_2_maskqindex_shift                                          (22)
#define  SEG_segment_2_maskfilterlevel_shift                                     (21)
#define  SEG_segment_2_maskrefidx_shift                                          (20)
#define  SEG_segment_2_maskskip_shift                                            (19)
#define  SEG_segment_2_qindex_shift                                              (10)
#define  SEG_segment_2_filterlevel_shift                                         (3)
#define  SEG_segment_2_refidx_shift                                              (0)
#define  SEG_segment_2_masklossless_mask                                         (0x00800000)
#define  SEG_segment_2_maskqindex_mask                                           (0x00400000)
#define  SEG_segment_2_maskfilterlevel_mask                                      (0x00200000)
#define  SEG_segment_2_maskrefidx_mask                                           (0x00100000)
#define  SEG_segment_2_maskskip_mask                                             (0x00080000)
#define  SEG_segment_2_qindex_mask                                               (0x0007FC00)
#define  SEG_segment_2_filterlevel_mask                                          (0x000003F8)
#define  SEG_segment_2_refidx_mask                                               (0x00000007)
#define  SEG_segment_2_masklossless(data)                                        (0x00800000&((data)<<23))
#define  SEG_segment_2_maskqindex(data)                                          (0x00400000&((data)<<22))
#define  SEG_segment_2_maskfilterlevel(data)                                     (0x00200000&((data)<<21))
#define  SEG_segment_2_maskrefidx(data)                                          (0x00100000&((data)<<20))
#define  SEG_segment_2_maskskip(data)                                            (0x00080000&((data)<<19))
#define  SEG_segment_2_qindex(data)                                              (0x0007FC00&((data)<<10))
#define  SEG_segment_2_filterlevel(data)                                         (0x000003F8&((data)<<3))
#define  SEG_segment_2_refidx(data)                                              (0x00000007&(data))
#define  SEG_segment_2_get_masklossless(data)                                    ((0x00800000&(data))>>23)
#define  SEG_segment_2_get_maskqindex(data)                                      ((0x00400000&(data))>>22)
#define  SEG_segment_2_get_maskfilterlevel(data)                                 ((0x00200000&(data))>>21)
#define  SEG_segment_2_get_maskrefidx(data)                                      ((0x00100000&(data))>>20)
#define  SEG_segment_2_get_maskskip(data)                                        ((0x00080000&(data))>>19)
#define  SEG_segment_2_get_qindex(data)                                          ((0x0007FC00&(data))>>10)
#define  SEG_segment_2_get_filterlevel(data)                                     ((0x000003F8&(data))>>3)
#define  SEG_segment_2_get_refidx(data)                                          (0x00000007&(data))

#define  SEG_segment_3                                                          0x1800E77C
#define  SEG_segment_3_reg_addr                                                  "0xB800E77C"
#define  SEG_segment_3_reg                                                       0xB800E77C
#define  SEG_segment_3_inst_addr                                                 "0x000F"
#define  set_SEG_segment_3_reg(data)                                             (*((volatile unsigned int*)SEG_segment_3_reg)=data)
#define  get_SEG_segment_3_reg                                                   (*((volatile unsigned int*)SEG_segment_3_reg))
#define  SEG_segment_3_masklossless_shift                                        (23)
#define  SEG_segment_3_maskqindex_shift                                          (22)
#define  SEG_segment_3_maskfilterlevel_shift                                     (21)
#define  SEG_segment_3_maskrefidx_shift                                          (20)
#define  SEG_segment_3_maskskip_shift                                            (19)
#define  SEG_segment_3_qindex_shift                                              (10)
#define  SEG_segment_3_filterlevel_shift                                         (3)
#define  SEG_segment_3_refidx_shift                                              (0)
#define  SEG_segment_3_masklossless_mask                                         (0x00800000)
#define  SEG_segment_3_maskqindex_mask                                           (0x00400000)
#define  SEG_segment_3_maskfilterlevel_mask                                      (0x00200000)
#define  SEG_segment_3_maskrefidx_mask                                           (0x00100000)
#define  SEG_segment_3_maskskip_mask                                             (0x00080000)
#define  SEG_segment_3_qindex_mask                                               (0x0007FC00)
#define  SEG_segment_3_filterlevel_mask                                          (0x000003F8)
#define  SEG_segment_3_refidx_mask                                               (0x00000007)
#define  SEG_segment_3_masklossless(data)                                        (0x00800000&((data)<<23))
#define  SEG_segment_3_maskqindex(data)                                          (0x00400000&((data)<<22))
#define  SEG_segment_3_maskfilterlevel(data)                                     (0x00200000&((data)<<21))
#define  SEG_segment_3_maskrefidx(data)                                          (0x00100000&((data)<<20))
#define  SEG_segment_3_maskskip(data)                                            (0x00080000&((data)<<19))
#define  SEG_segment_3_qindex(data)                                              (0x0007FC00&((data)<<10))
#define  SEG_segment_3_filterlevel(data)                                         (0x000003F8&((data)<<3))
#define  SEG_segment_3_refidx(data)                                              (0x00000007&(data))
#define  SEG_segment_3_get_masklossless(data)                                    ((0x00800000&(data))>>23)
#define  SEG_segment_3_get_maskqindex(data)                                      ((0x00400000&(data))>>22)
#define  SEG_segment_3_get_maskfilterlevel(data)                                 ((0x00200000&(data))>>21)
#define  SEG_segment_3_get_maskrefidx(data)                                      ((0x00100000&(data))>>20)
#define  SEG_segment_3_get_maskskip(data)                                        ((0x00080000&(data))>>19)
#define  SEG_segment_3_get_qindex(data)                                          ((0x0007FC00&(data))>>10)
#define  SEG_segment_3_get_filterlevel(data)                                     ((0x000003F8&(data))>>3)
#define  SEG_segment_3_get_refidx(data)                                          (0x00000007&(data))

#define  SEG_segment_4                                                          0x1800E780
#define  SEG_segment_4_reg_addr                                                  "0xB800E780"
#define  SEG_segment_4_reg                                                       0xB800E780
#define  SEG_segment_4_inst_addr                                                 "0x0010"
#define  set_SEG_segment_4_reg(data)                                             (*((volatile unsigned int*)SEG_segment_4_reg)=data)
#define  get_SEG_segment_4_reg                                                   (*((volatile unsigned int*)SEG_segment_4_reg))
#define  SEG_segment_4_masklossless_shift                                        (23)
#define  SEG_segment_4_maskqindex_shift                                          (22)
#define  SEG_segment_4_maskfilterlevel_shift                                     (21)
#define  SEG_segment_4_maskrefidx_shift                                          (20)
#define  SEG_segment_4_maskskip_shift                                            (19)
#define  SEG_segment_4_qindex_shift                                              (10)
#define  SEG_segment_4_filterlevel_shift                                         (3)
#define  SEG_segment_4_refidx_shift                                              (0)
#define  SEG_segment_4_masklossless_mask                                         (0x00800000)
#define  SEG_segment_4_maskqindex_mask                                           (0x00400000)
#define  SEG_segment_4_maskfilterlevel_mask                                      (0x00200000)
#define  SEG_segment_4_maskrefidx_mask                                           (0x00100000)
#define  SEG_segment_4_maskskip_mask                                             (0x00080000)
#define  SEG_segment_4_qindex_mask                                               (0x0007FC00)
#define  SEG_segment_4_filterlevel_mask                                          (0x000003F8)
#define  SEG_segment_4_refidx_mask                                               (0x00000007)
#define  SEG_segment_4_masklossless(data)                                        (0x00800000&((data)<<23))
#define  SEG_segment_4_maskqindex(data)                                          (0x00400000&((data)<<22))
#define  SEG_segment_4_maskfilterlevel(data)                                     (0x00200000&((data)<<21))
#define  SEG_segment_4_maskrefidx(data)                                          (0x00100000&((data)<<20))
#define  SEG_segment_4_maskskip(data)                                            (0x00080000&((data)<<19))
#define  SEG_segment_4_qindex(data)                                              (0x0007FC00&((data)<<10))
#define  SEG_segment_4_filterlevel(data)                                         (0x000003F8&((data)<<3))
#define  SEG_segment_4_refidx(data)                                              (0x00000007&(data))
#define  SEG_segment_4_get_masklossless(data)                                    ((0x00800000&(data))>>23)
#define  SEG_segment_4_get_maskqindex(data)                                      ((0x00400000&(data))>>22)
#define  SEG_segment_4_get_maskfilterlevel(data)                                 ((0x00200000&(data))>>21)
#define  SEG_segment_4_get_maskrefidx(data)                                      ((0x00100000&(data))>>20)
#define  SEG_segment_4_get_maskskip(data)                                        ((0x00080000&(data))>>19)
#define  SEG_segment_4_get_qindex(data)                                          ((0x0007FC00&(data))>>10)
#define  SEG_segment_4_get_filterlevel(data)                                     ((0x000003F8&(data))>>3)
#define  SEG_segment_4_get_refidx(data)                                          (0x00000007&(data))

#define  SEG_segment_5                                                          0x1800E784
#define  SEG_segment_5_reg_addr                                                  "0xB800E784"
#define  SEG_segment_5_reg                                                       0xB800E784
#define  SEG_segment_5_inst_addr                                                 "0x0011"
#define  set_SEG_segment_5_reg(data)                                             (*((volatile unsigned int*)SEG_segment_5_reg)=data)
#define  get_SEG_segment_5_reg                                                   (*((volatile unsigned int*)SEG_segment_5_reg))
#define  SEG_segment_5_masklossless_shift                                        (23)
#define  SEG_segment_5_maskqindex_shift                                          (22)
#define  SEG_segment_5_maskfilterlevel_shift                                     (21)
#define  SEG_segment_5_maskrefidx_shift                                          (20)
#define  SEG_segment_5_maskskip_shift                                            (19)
#define  SEG_segment_5_qindex_shift                                              (10)
#define  SEG_segment_5_filterlevel_shift                                         (3)
#define  SEG_segment_5_refidx_shift                                              (0)
#define  SEG_segment_5_masklossless_mask                                         (0x00800000)
#define  SEG_segment_5_maskqindex_mask                                           (0x00400000)
#define  SEG_segment_5_maskfilterlevel_mask                                      (0x00200000)
#define  SEG_segment_5_maskrefidx_mask                                           (0x00100000)
#define  SEG_segment_5_maskskip_mask                                             (0x00080000)
#define  SEG_segment_5_qindex_mask                                               (0x0007FC00)
#define  SEG_segment_5_filterlevel_mask                                          (0x000003F8)
#define  SEG_segment_5_refidx_mask                                               (0x00000007)
#define  SEG_segment_5_masklossless(data)                                        (0x00800000&((data)<<23))
#define  SEG_segment_5_maskqindex(data)                                          (0x00400000&((data)<<22))
#define  SEG_segment_5_maskfilterlevel(data)                                     (0x00200000&((data)<<21))
#define  SEG_segment_5_maskrefidx(data)                                          (0x00100000&((data)<<20))
#define  SEG_segment_5_maskskip(data)                                            (0x00080000&((data)<<19))
#define  SEG_segment_5_qindex(data)                                              (0x0007FC00&((data)<<10))
#define  SEG_segment_5_filterlevel(data)                                         (0x000003F8&((data)<<3))
#define  SEG_segment_5_refidx(data)                                              (0x00000007&(data))
#define  SEG_segment_5_get_masklossless(data)                                    ((0x00800000&(data))>>23)
#define  SEG_segment_5_get_maskqindex(data)                                      ((0x00400000&(data))>>22)
#define  SEG_segment_5_get_maskfilterlevel(data)                                 ((0x00200000&(data))>>21)
#define  SEG_segment_5_get_maskrefidx(data)                                      ((0x00100000&(data))>>20)
#define  SEG_segment_5_get_maskskip(data)                                        ((0x00080000&(data))>>19)
#define  SEG_segment_5_get_qindex(data)                                          ((0x0007FC00&(data))>>10)
#define  SEG_segment_5_get_filterlevel(data)                                     ((0x000003F8&(data))>>3)
#define  SEG_segment_5_get_refidx(data)                                          (0x00000007&(data))

#define  SEG_segment_6                                                          0x1800E788
#define  SEG_segment_6_reg_addr                                                  "0xB800E788"
#define  SEG_segment_6_reg                                                       0xB800E788
#define  SEG_segment_6_inst_addr                                                 "0x0012"
#define  set_SEG_segment_6_reg(data)                                             (*((volatile unsigned int*)SEG_segment_6_reg)=data)
#define  get_SEG_segment_6_reg                                                   (*((volatile unsigned int*)SEG_segment_6_reg))
#define  SEG_segment_6_masklossless_shift                                        (23)
#define  SEG_segment_6_maskqindex_shift                                          (22)
#define  SEG_segment_6_maskfilterlevel_shift                                     (21)
#define  SEG_segment_6_maskrefidx_shift                                          (20)
#define  SEG_segment_6_maskskip_shift                                            (19)
#define  SEG_segment_6_qindex_shift                                              (10)
#define  SEG_segment_6_filterlevel_shift                                         (3)
#define  SEG_segment_6_refidx_shift                                              (0)
#define  SEG_segment_6_masklossless_mask                                         (0x00800000)
#define  SEG_segment_6_maskqindex_mask                                           (0x00400000)
#define  SEG_segment_6_maskfilterlevel_mask                                      (0x00200000)
#define  SEG_segment_6_maskrefidx_mask                                           (0x00100000)
#define  SEG_segment_6_maskskip_mask                                             (0x00080000)
#define  SEG_segment_6_qindex_mask                                               (0x0007FC00)
#define  SEG_segment_6_filterlevel_mask                                          (0x000003F8)
#define  SEG_segment_6_refidx_mask                                               (0x00000007)
#define  SEG_segment_6_masklossless(data)                                        (0x00800000&((data)<<23))
#define  SEG_segment_6_maskqindex(data)                                          (0x00400000&((data)<<22))
#define  SEG_segment_6_maskfilterlevel(data)                                     (0x00200000&((data)<<21))
#define  SEG_segment_6_maskrefidx(data)                                          (0x00100000&((data)<<20))
#define  SEG_segment_6_maskskip(data)                                            (0x00080000&((data)<<19))
#define  SEG_segment_6_qindex(data)                                              (0x0007FC00&((data)<<10))
#define  SEG_segment_6_filterlevel(data)                                         (0x000003F8&((data)<<3))
#define  SEG_segment_6_refidx(data)                                              (0x00000007&(data))
#define  SEG_segment_6_get_masklossless(data)                                    ((0x00800000&(data))>>23)
#define  SEG_segment_6_get_maskqindex(data)                                      ((0x00400000&(data))>>22)
#define  SEG_segment_6_get_maskfilterlevel(data)                                 ((0x00200000&(data))>>21)
#define  SEG_segment_6_get_maskrefidx(data)                                      ((0x00100000&(data))>>20)
#define  SEG_segment_6_get_maskskip(data)                                        ((0x00080000&(data))>>19)
#define  SEG_segment_6_get_qindex(data)                                          ((0x0007FC00&(data))>>10)
#define  SEG_segment_6_get_filterlevel(data)                                     ((0x000003F8&(data))>>3)
#define  SEG_segment_6_get_refidx(data)                                          (0x00000007&(data))

#define  SEG_segment_7                                                          0x1800E78C
#define  SEG_segment_7_reg_addr                                                  "0xB800E78C"
#define  SEG_segment_7_reg                                                       0xB800E78C
#define  SEG_segment_7_inst_addr                                                 "0x0013"
#define  set_SEG_segment_7_reg(data)                                             (*((volatile unsigned int*)SEG_segment_7_reg)=data)
#define  get_SEG_segment_7_reg                                                   (*((volatile unsigned int*)SEG_segment_7_reg))
#define  SEG_segment_7_masklossless_shift                                        (23)
#define  SEG_segment_7_maskqindex_shift                                          (22)
#define  SEG_segment_7_maskfilterlevel_shift                                     (21)
#define  SEG_segment_7_maskrefidx_shift                                          (20)
#define  SEG_segment_7_maskskip_shift                                            (19)
#define  SEG_segment_7_qindex_shift                                              (10)
#define  SEG_segment_7_filterlevel_shift                                         (3)
#define  SEG_segment_7_refidx_shift                                              (0)
#define  SEG_segment_7_masklossless_mask                                         (0x00800000)
#define  SEG_segment_7_maskqindex_mask                                           (0x00400000)
#define  SEG_segment_7_maskfilterlevel_mask                                      (0x00200000)
#define  SEG_segment_7_maskrefidx_mask                                           (0x00100000)
#define  SEG_segment_7_maskskip_mask                                             (0x00080000)
#define  SEG_segment_7_qindex_mask                                               (0x0007FC00)
#define  SEG_segment_7_filterlevel_mask                                          (0x000003F8)
#define  SEG_segment_7_refidx_mask                                               (0x00000007)
#define  SEG_segment_7_masklossless(data)                                        (0x00800000&((data)<<23))
#define  SEG_segment_7_maskqindex(data)                                          (0x00400000&((data)<<22))
#define  SEG_segment_7_maskfilterlevel(data)                                     (0x00200000&((data)<<21))
#define  SEG_segment_7_maskrefidx(data)                                          (0x00100000&((data)<<20))
#define  SEG_segment_7_maskskip(data)                                            (0x00080000&((data)<<19))
#define  SEG_segment_7_qindex(data)                                              (0x0007FC00&((data)<<10))
#define  SEG_segment_7_filterlevel(data)                                         (0x000003F8&((data)<<3))
#define  SEG_segment_7_refidx(data)                                              (0x00000007&(data))
#define  SEG_segment_7_get_masklossless(data)                                    ((0x00800000&(data))>>23)
#define  SEG_segment_7_get_maskqindex(data)                                      ((0x00400000&(data))>>22)
#define  SEG_segment_7_get_maskfilterlevel(data)                                 ((0x00200000&(data))>>21)
#define  SEG_segment_7_get_maskrefidx(data)                                      ((0x00100000&(data))>>20)
#define  SEG_segment_7_get_maskskip(data)                                        ((0x00080000&(data))>>19)
#define  SEG_segment_7_get_qindex(data)                                          ((0x0007FC00&(data))>>10)
#define  SEG_segment_7_get_filterlevel(data)                                     ((0x000003F8&(data))>>3)
#define  SEG_segment_7_get_refidx(data)                                          (0x00000007&(data))

#define  SEG_segment1_0                                                         0x1800E790
#define  SEG_segment1_0_reg_addr                                                 "0xB800E790"
#define  SEG_segment1_0_reg                                                      0xB800E790
#define  SEG_segment1_0_inst_addr                                                "0x0014"
#define  set_SEG_segment1_0_reg(data)                                            (*((volatile unsigned int*)SEG_segment1_0_reg)=data)
#define  get_SEG_segment1_0_reg                                                  (*((volatile unsigned int*)SEG_segment1_0_reg))
#define  SEG_segment1_0_maskfilterlevelv_shift                                   (23)
#define  SEG_segment1_0_maskfilterlevelu_shift                                   (22)
#define  SEG_segment1_0_maskfilterlevelhori_shift                                (21)
#define  SEG_segment1_0_filterlevelv_shift                                       (14)
#define  SEG_segment1_0_filterlevelu_shift                                       (7)
#define  SEG_segment1_0_filterlevelhori_shift                                    (0)
#define  SEG_segment1_0_maskfilterlevelv_mask                                    (0x00800000)
#define  SEG_segment1_0_maskfilterlevelu_mask                                    (0x00400000)
#define  SEG_segment1_0_maskfilterlevelhori_mask                                 (0x00200000)
#define  SEG_segment1_0_filterlevelv_mask                                        (0x001FC000)
#define  SEG_segment1_0_filterlevelu_mask                                        (0x00003F80)
#define  SEG_segment1_0_filterlevelhori_mask                                     (0x0000007F)
#define  SEG_segment1_0_maskfilterlevelv(data)                                   (0x00800000&((data)<<23))
#define  SEG_segment1_0_maskfilterlevelu(data)                                   (0x00400000&((data)<<22))
#define  SEG_segment1_0_maskfilterlevelhori(data)                                (0x00200000&((data)<<21))
#define  SEG_segment1_0_filterlevelv(data)                                       (0x001FC000&((data)<<14))
#define  SEG_segment1_0_filterlevelu(data)                                       (0x00003F80&((data)<<7))
#define  SEG_segment1_0_filterlevelhori(data)                                    (0x0000007F&(data))
#define  SEG_segment1_0_get_maskfilterlevelv(data)                               ((0x00800000&(data))>>23)
#define  SEG_segment1_0_get_maskfilterlevelu(data)                               ((0x00400000&(data))>>22)
#define  SEG_segment1_0_get_maskfilterlevelhori(data)                            ((0x00200000&(data))>>21)
#define  SEG_segment1_0_get_filterlevelv(data)                                   ((0x001FC000&(data))>>14)
#define  SEG_segment1_0_get_filterlevelu(data)                                   ((0x00003F80&(data))>>7)
#define  SEG_segment1_0_get_filterlevelhori(data)                                (0x0000007F&(data))

#define  SEG_segment1_1                                                         0x1800E794
#define  SEG_segment1_1_reg_addr                                                 "0xB800E794"
#define  SEG_segment1_1_reg                                                      0xB800E794
#define  SEG_segment1_1_inst_addr                                                "0x0015"
#define  set_SEG_segment1_1_reg(data)                                            (*((volatile unsigned int*)SEG_segment1_1_reg)=data)
#define  get_SEG_segment1_1_reg                                                  (*((volatile unsigned int*)SEG_segment1_1_reg))
#define  SEG_segment1_1_maskfilterlevelv_shift                                   (23)
#define  SEG_segment1_1_maskfilterlevelu_shift                                   (22)
#define  SEG_segment1_1_maskfilterlevelhori_shift                                (21)
#define  SEG_segment1_1_filterlevelv_shift                                       (14)
#define  SEG_segment1_1_filterlevelu_shift                                       (7)
#define  SEG_segment1_1_filterlevelhori_shift                                    (0)
#define  SEG_segment1_1_maskfilterlevelv_mask                                    (0x00800000)
#define  SEG_segment1_1_maskfilterlevelu_mask                                    (0x00400000)
#define  SEG_segment1_1_maskfilterlevelhori_mask                                 (0x00200000)
#define  SEG_segment1_1_filterlevelv_mask                                        (0x001FC000)
#define  SEG_segment1_1_filterlevelu_mask                                        (0x00003F80)
#define  SEG_segment1_1_filterlevelhori_mask                                     (0x0000007F)
#define  SEG_segment1_1_maskfilterlevelv(data)                                   (0x00800000&((data)<<23))
#define  SEG_segment1_1_maskfilterlevelu(data)                                   (0x00400000&((data)<<22))
#define  SEG_segment1_1_maskfilterlevelhori(data)                                (0x00200000&((data)<<21))
#define  SEG_segment1_1_filterlevelv(data)                                       (0x001FC000&((data)<<14))
#define  SEG_segment1_1_filterlevelu(data)                                       (0x00003F80&((data)<<7))
#define  SEG_segment1_1_filterlevelhori(data)                                    (0x0000007F&(data))
#define  SEG_segment1_1_get_maskfilterlevelv(data)                               ((0x00800000&(data))>>23)
#define  SEG_segment1_1_get_maskfilterlevelu(data)                               ((0x00400000&(data))>>22)
#define  SEG_segment1_1_get_maskfilterlevelhori(data)                            ((0x00200000&(data))>>21)
#define  SEG_segment1_1_get_filterlevelv(data)                                   ((0x001FC000&(data))>>14)
#define  SEG_segment1_1_get_filterlevelu(data)                                   ((0x00003F80&(data))>>7)
#define  SEG_segment1_1_get_filterlevelhori(data)                                (0x0000007F&(data))

#define  SEG_segment1_2                                                         0x1800E798
#define  SEG_segment1_2_reg_addr                                                 "0xB800E798"
#define  SEG_segment1_2_reg                                                      0xB800E798
#define  SEG_segment1_2_inst_addr                                                "0x0016"
#define  set_SEG_segment1_2_reg(data)                                            (*((volatile unsigned int*)SEG_segment1_2_reg)=data)
#define  get_SEG_segment1_2_reg                                                  (*((volatile unsigned int*)SEG_segment1_2_reg))
#define  SEG_segment1_2_maskfilterlevelv_shift                                   (23)
#define  SEG_segment1_2_maskfilterlevelu_shift                                   (22)
#define  SEG_segment1_2_maskfilterlevelhori_shift                                (21)
#define  SEG_segment1_2_filterlevelv_shift                                       (14)
#define  SEG_segment1_2_filterlevelu_shift                                       (7)
#define  SEG_segment1_2_filterlevelhori_shift                                    (0)
#define  SEG_segment1_2_maskfilterlevelv_mask                                    (0x00800000)
#define  SEG_segment1_2_maskfilterlevelu_mask                                    (0x00400000)
#define  SEG_segment1_2_maskfilterlevelhori_mask                                 (0x00200000)
#define  SEG_segment1_2_filterlevelv_mask                                        (0x001FC000)
#define  SEG_segment1_2_filterlevelu_mask                                        (0x00003F80)
#define  SEG_segment1_2_filterlevelhori_mask                                     (0x0000007F)
#define  SEG_segment1_2_maskfilterlevelv(data)                                   (0x00800000&((data)<<23))
#define  SEG_segment1_2_maskfilterlevelu(data)                                   (0x00400000&((data)<<22))
#define  SEG_segment1_2_maskfilterlevelhori(data)                                (0x00200000&((data)<<21))
#define  SEG_segment1_2_filterlevelv(data)                                       (0x001FC000&((data)<<14))
#define  SEG_segment1_2_filterlevelu(data)                                       (0x00003F80&((data)<<7))
#define  SEG_segment1_2_filterlevelhori(data)                                    (0x0000007F&(data))
#define  SEG_segment1_2_get_maskfilterlevelv(data)                               ((0x00800000&(data))>>23)
#define  SEG_segment1_2_get_maskfilterlevelu(data)                               ((0x00400000&(data))>>22)
#define  SEG_segment1_2_get_maskfilterlevelhori(data)                            ((0x00200000&(data))>>21)
#define  SEG_segment1_2_get_filterlevelv(data)                                   ((0x001FC000&(data))>>14)
#define  SEG_segment1_2_get_filterlevelu(data)                                   ((0x00003F80&(data))>>7)
#define  SEG_segment1_2_get_filterlevelhori(data)                                (0x0000007F&(data))

#define  SEG_segment1_3                                                         0x1800E79C
#define  SEG_segment1_3_reg_addr                                                 "0xB800E79C"
#define  SEG_segment1_3_reg                                                      0xB800E79C
#define  SEG_segment1_3_inst_addr                                                "0x0017"
#define  set_SEG_segment1_3_reg(data)                                            (*((volatile unsigned int*)SEG_segment1_3_reg)=data)
#define  get_SEG_segment1_3_reg                                                  (*((volatile unsigned int*)SEG_segment1_3_reg))
#define  SEG_segment1_3_maskfilterlevelv_shift                                   (23)
#define  SEG_segment1_3_maskfilterlevelu_shift                                   (22)
#define  SEG_segment1_3_maskfilterlevelhori_shift                                (21)
#define  SEG_segment1_3_filterlevelv_shift                                       (14)
#define  SEG_segment1_3_filterlevelu_shift                                       (7)
#define  SEG_segment1_3_filterlevelhori_shift                                    (0)
#define  SEG_segment1_3_maskfilterlevelv_mask                                    (0x00800000)
#define  SEG_segment1_3_maskfilterlevelu_mask                                    (0x00400000)
#define  SEG_segment1_3_maskfilterlevelhori_mask                                 (0x00200000)
#define  SEG_segment1_3_filterlevelv_mask                                        (0x001FC000)
#define  SEG_segment1_3_filterlevelu_mask                                        (0x00003F80)
#define  SEG_segment1_3_filterlevelhori_mask                                     (0x0000007F)
#define  SEG_segment1_3_maskfilterlevelv(data)                                   (0x00800000&((data)<<23))
#define  SEG_segment1_3_maskfilterlevelu(data)                                   (0x00400000&((data)<<22))
#define  SEG_segment1_3_maskfilterlevelhori(data)                                (0x00200000&((data)<<21))
#define  SEG_segment1_3_filterlevelv(data)                                       (0x001FC000&((data)<<14))
#define  SEG_segment1_3_filterlevelu(data)                                       (0x00003F80&((data)<<7))
#define  SEG_segment1_3_filterlevelhori(data)                                    (0x0000007F&(data))
#define  SEG_segment1_3_get_maskfilterlevelv(data)                               ((0x00800000&(data))>>23)
#define  SEG_segment1_3_get_maskfilterlevelu(data)                               ((0x00400000&(data))>>22)
#define  SEG_segment1_3_get_maskfilterlevelhori(data)                            ((0x00200000&(data))>>21)
#define  SEG_segment1_3_get_filterlevelv(data)                                   ((0x001FC000&(data))>>14)
#define  SEG_segment1_3_get_filterlevelu(data)                                   ((0x00003F80&(data))>>7)
#define  SEG_segment1_3_get_filterlevelhori(data)                                (0x0000007F&(data))

#define  SEG_segment1_4                                                         0x1800E7A0
#define  SEG_segment1_4_reg_addr                                                 "0xB800E7A0"
#define  SEG_segment1_4_reg                                                      0xB800E7A0
#define  SEG_segment1_4_inst_addr                                                "0x0018"
#define  set_SEG_segment1_4_reg(data)                                            (*((volatile unsigned int*)SEG_segment1_4_reg)=data)
#define  get_SEG_segment1_4_reg                                                  (*((volatile unsigned int*)SEG_segment1_4_reg))
#define  SEG_segment1_4_maskfilterlevelv_shift                                   (23)
#define  SEG_segment1_4_maskfilterlevelu_shift                                   (22)
#define  SEG_segment1_4_maskfilterlevelhori_shift                                (21)
#define  SEG_segment1_4_filterlevelv_shift                                       (14)
#define  SEG_segment1_4_filterlevelu_shift                                       (7)
#define  SEG_segment1_4_filterlevelhori_shift                                    (0)
#define  SEG_segment1_4_maskfilterlevelv_mask                                    (0x00800000)
#define  SEG_segment1_4_maskfilterlevelu_mask                                    (0x00400000)
#define  SEG_segment1_4_maskfilterlevelhori_mask                                 (0x00200000)
#define  SEG_segment1_4_filterlevelv_mask                                        (0x001FC000)
#define  SEG_segment1_4_filterlevelu_mask                                        (0x00003F80)
#define  SEG_segment1_4_filterlevelhori_mask                                     (0x0000007F)
#define  SEG_segment1_4_maskfilterlevelv(data)                                   (0x00800000&((data)<<23))
#define  SEG_segment1_4_maskfilterlevelu(data)                                   (0x00400000&((data)<<22))
#define  SEG_segment1_4_maskfilterlevelhori(data)                                (0x00200000&((data)<<21))
#define  SEG_segment1_4_filterlevelv(data)                                       (0x001FC000&((data)<<14))
#define  SEG_segment1_4_filterlevelu(data)                                       (0x00003F80&((data)<<7))
#define  SEG_segment1_4_filterlevelhori(data)                                    (0x0000007F&(data))
#define  SEG_segment1_4_get_maskfilterlevelv(data)                               ((0x00800000&(data))>>23)
#define  SEG_segment1_4_get_maskfilterlevelu(data)                               ((0x00400000&(data))>>22)
#define  SEG_segment1_4_get_maskfilterlevelhori(data)                            ((0x00200000&(data))>>21)
#define  SEG_segment1_4_get_filterlevelv(data)                                   ((0x001FC000&(data))>>14)
#define  SEG_segment1_4_get_filterlevelu(data)                                   ((0x00003F80&(data))>>7)
#define  SEG_segment1_4_get_filterlevelhori(data)                                (0x0000007F&(data))

#define  SEG_segment1_5                                                         0x1800E7A4
#define  SEG_segment1_5_reg_addr                                                 "0xB800E7A4"
#define  SEG_segment1_5_reg                                                      0xB800E7A4
#define  SEG_segment1_5_inst_addr                                                "0x0019"
#define  set_SEG_segment1_5_reg(data)                                            (*((volatile unsigned int*)SEG_segment1_5_reg)=data)
#define  get_SEG_segment1_5_reg                                                  (*((volatile unsigned int*)SEG_segment1_5_reg))
#define  SEG_segment1_5_maskfilterlevelv_shift                                   (23)
#define  SEG_segment1_5_maskfilterlevelu_shift                                   (22)
#define  SEG_segment1_5_maskfilterlevelhori_shift                                (21)
#define  SEG_segment1_5_filterlevelv_shift                                       (14)
#define  SEG_segment1_5_filterlevelu_shift                                       (7)
#define  SEG_segment1_5_filterlevelhori_shift                                    (0)
#define  SEG_segment1_5_maskfilterlevelv_mask                                    (0x00800000)
#define  SEG_segment1_5_maskfilterlevelu_mask                                    (0x00400000)
#define  SEG_segment1_5_maskfilterlevelhori_mask                                 (0x00200000)
#define  SEG_segment1_5_filterlevelv_mask                                        (0x001FC000)
#define  SEG_segment1_5_filterlevelu_mask                                        (0x00003F80)
#define  SEG_segment1_5_filterlevelhori_mask                                     (0x0000007F)
#define  SEG_segment1_5_maskfilterlevelv(data)                                   (0x00800000&((data)<<23))
#define  SEG_segment1_5_maskfilterlevelu(data)                                   (0x00400000&((data)<<22))
#define  SEG_segment1_5_maskfilterlevelhori(data)                                (0x00200000&((data)<<21))
#define  SEG_segment1_5_filterlevelv(data)                                       (0x001FC000&((data)<<14))
#define  SEG_segment1_5_filterlevelu(data)                                       (0x00003F80&((data)<<7))
#define  SEG_segment1_5_filterlevelhori(data)                                    (0x0000007F&(data))
#define  SEG_segment1_5_get_maskfilterlevelv(data)                               ((0x00800000&(data))>>23)
#define  SEG_segment1_5_get_maskfilterlevelu(data)                               ((0x00400000&(data))>>22)
#define  SEG_segment1_5_get_maskfilterlevelhori(data)                            ((0x00200000&(data))>>21)
#define  SEG_segment1_5_get_filterlevelv(data)                                   ((0x001FC000&(data))>>14)
#define  SEG_segment1_5_get_filterlevelu(data)                                   ((0x00003F80&(data))>>7)
#define  SEG_segment1_5_get_filterlevelhori(data)                                (0x0000007F&(data))

#define  SEG_segment1_6                                                         0x1800E7A8
#define  SEG_segment1_6_reg_addr                                                 "0xB800E7A8"
#define  SEG_segment1_6_reg                                                      0xB800E7A8
#define  SEG_segment1_6_inst_addr                                                "0x001A"
#define  set_SEG_segment1_6_reg(data)                                            (*((volatile unsigned int*)SEG_segment1_6_reg)=data)
#define  get_SEG_segment1_6_reg                                                  (*((volatile unsigned int*)SEG_segment1_6_reg))
#define  SEG_segment1_6_maskfilterlevelv_shift                                   (23)
#define  SEG_segment1_6_maskfilterlevelu_shift                                   (22)
#define  SEG_segment1_6_maskfilterlevelhori_shift                                (21)
#define  SEG_segment1_6_filterlevelv_shift                                       (14)
#define  SEG_segment1_6_filterlevelu_shift                                       (7)
#define  SEG_segment1_6_filterlevelhori_shift                                    (0)
#define  SEG_segment1_6_maskfilterlevelv_mask                                    (0x00800000)
#define  SEG_segment1_6_maskfilterlevelu_mask                                    (0x00400000)
#define  SEG_segment1_6_maskfilterlevelhori_mask                                 (0x00200000)
#define  SEG_segment1_6_filterlevelv_mask                                        (0x001FC000)
#define  SEG_segment1_6_filterlevelu_mask                                        (0x00003F80)
#define  SEG_segment1_6_filterlevelhori_mask                                     (0x0000007F)
#define  SEG_segment1_6_maskfilterlevelv(data)                                   (0x00800000&((data)<<23))
#define  SEG_segment1_6_maskfilterlevelu(data)                                   (0x00400000&((data)<<22))
#define  SEG_segment1_6_maskfilterlevelhori(data)                                (0x00200000&((data)<<21))
#define  SEG_segment1_6_filterlevelv(data)                                       (0x001FC000&((data)<<14))
#define  SEG_segment1_6_filterlevelu(data)                                       (0x00003F80&((data)<<7))
#define  SEG_segment1_6_filterlevelhori(data)                                    (0x0000007F&(data))
#define  SEG_segment1_6_get_maskfilterlevelv(data)                               ((0x00800000&(data))>>23)
#define  SEG_segment1_6_get_maskfilterlevelu(data)                               ((0x00400000&(data))>>22)
#define  SEG_segment1_6_get_maskfilterlevelhori(data)                            ((0x00200000&(data))>>21)
#define  SEG_segment1_6_get_filterlevelv(data)                                   ((0x001FC000&(data))>>14)
#define  SEG_segment1_6_get_filterlevelu(data)                                   ((0x00003F80&(data))>>7)
#define  SEG_segment1_6_get_filterlevelhori(data)                                (0x0000007F&(data))

#define  SEG_segment1_7                                                         0x1800E7AC
#define  SEG_segment1_7_reg_addr                                                 "0xB800E7AC"
#define  SEG_segment1_7_reg                                                      0xB800E7AC
#define  SEG_segment1_7_inst_addr                                                "0x001B"
#define  set_SEG_segment1_7_reg(data)                                            (*((volatile unsigned int*)SEG_segment1_7_reg)=data)
#define  get_SEG_segment1_7_reg                                                  (*((volatile unsigned int*)SEG_segment1_7_reg))
#define  SEG_segment1_7_maskfilterlevelv_shift                                   (23)
#define  SEG_segment1_7_maskfilterlevelu_shift                                   (22)
#define  SEG_segment1_7_maskfilterlevelhori_shift                                (21)
#define  SEG_segment1_7_filterlevelv_shift                                       (14)
#define  SEG_segment1_7_filterlevelu_shift                                       (7)
#define  SEG_segment1_7_filterlevelhori_shift                                    (0)
#define  SEG_segment1_7_maskfilterlevelv_mask                                    (0x00800000)
#define  SEG_segment1_7_maskfilterlevelu_mask                                    (0x00400000)
#define  SEG_segment1_7_maskfilterlevelhori_mask                                 (0x00200000)
#define  SEG_segment1_7_filterlevelv_mask                                        (0x001FC000)
#define  SEG_segment1_7_filterlevelu_mask                                        (0x00003F80)
#define  SEG_segment1_7_filterlevelhori_mask                                     (0x0000007F)
#define  SEG_segment1_7_maskfilterlevelv(data)                                   (0x00800000&((data)<<23))
#define  SEG_segment1_7_maskfilterlevelu(data)                                   (0x00400000&((data)<<22))
#define  SEG_segment1_7_maskfilterlevelhori(data)                                (0x00200000&((data)<<21))
#define  SEG_segment1_7_filterlevelv(data)                                       (0x001FC000&((data)<<14))
#define  SEG_segment1_7_filterlevelu(data)                                       (0x00003F80&((data)<<7))
#define  SEG_segment1_7_filterlevelhori(data)                                    (0x0000007F&(data))
#define  SEG_segment1_7_get_maskfilterlevelv(data)                               ((0x00800000&(data))>>23)
#define  SEG_segment1_7_get_maskfilterlevelu(data)                               ((0x00400000&(data))>>22)
#define  SEG_segment1_7_get_maskfilterlevelhori(data)                            ((0x00200000&(data))>>21)
#define  SEG_segment1_7_get_filterlevelv(data)                                   ((0x001FC000&(data))>>14)
#define  SEG_segment1_7_get_filterlevelu(data)                                   ((0x00003F80&(data))>>7)
#define  SEG_segment1_7_get_filterlevelhori(data)                                (0x0000007F&(data))

#define  SEG_pic                                                                0x1800E7B0
#define  SEG_pic_reg_addr                                                        "0xB800E7B0"
#define  SEG_pic_reg                                                             0xB800E7B0
#define  SEG_pic_inst_addr                                                       "0x001C"
#define  set_SEG_pic_reg(data)                                                   (*((volatile unsigned int*)SEG_pic_reg)=data)
#define  get_SEG_pic_reg                                                         (*((volatile unsigned int*)SEG_pic_reg))
#define  SEG_pic_disablemvdldcomem_shift                                         (11)
#define  SEG_pic_disablemvdstcomem_shift                                         (10)
#define  SEG_pic_intraonly_shift                                                 (9)
#define  SEG_pic_absdelta_shift                                                  (8)
#define  SEG_pic_qindex_shift                                                    (0)
#define  SEG_pic_disablemvdldcomem_mask                                          (0x00000800)
#define  SEG_pic_disablemvdstcomem_mask                                          (0x00000400)
#define  SEG_pic_intraonly_mask                                                  (0x00000200)
#define  SEG_pic_absdelta_mask                                                   (0x00000100)
#define  SEG_pic_qindex_mask                                                     (0x000000FF)
#define  SEG_pic_disablemvdldcomem(data)                                         (0x00000800&((data)<<11))
#define  SEG_pic_disablemvdstcomem(data)                                         (0x00000400&((data)<<10))
#define  SEG_pic_intraonly(data)                                                 (0x00000200&((data)<<9))
#define  SEG_pic_absdelta(data)                                                  (0x00000100&((data)<<8))
#define  SEG_pic_qindex(data)                                                    (0x000000FF&(data))
#define  SEG_pic_get_disablemvdldcomem(data)                                     ((0x00000800&(data))>>11)
#define  SEG_pic_get_disablemvdstcomem(data)                                     ((0x00000400&(data))>>10)
#define  SEG_pic_get_intraonly(data)                                             ((0x00000200&(data))>>9)
#define  SEG_pic_get_absdelta(data)                                              ((0x00000100&(data))>>8)
#define  SEG_pic_get_qindex(data)                                                (0x000000FF&(data))

#define  SEG_refdelta0                                                          0x1800E7B4
#define  SEG_refdelta0_reg_addr                                                  "0xB800E7B4"
#define  SEG_refdelta0_reg                                                       0xB800E7B4
#define  SEG_refdelta0_inst_addr                                                 "0x001D"
#define  set_SEG_refdelta0_reg(data)                                             (*((volatile unsigned int*)SEG_refdelta0_reg)=data)
#define  get_SEG_refdelta0_reg                                                   (*((volatile unsigned int*)SEG_refdelta0_reg))
#define  SEG_refdelta0_ref_delta_3_shift                                         (21)
#define  SEG_refdelta0_ref_delta_2_shift                                         (14)
#define  SEG_refdelta0_ref_delta_1_shift                                         (7)
#define  SEG_refdelta0_ref_delta_0_shift                                         (0)
#define  SEG_refdelta0_ref_delta_3_mask                                          (0x0FE00000)
#define  SEG_refdelta0_ref_delta_2_mask                                          (0x001FC000)
#define  SEG_refdelta0_ref_delta_1_mask                                          (0x00003F80)
#define  SEG_refdelta0_ref_delta_0_mask                                          (0x0000007F)
#define  SEG_refdelta0_ref_delta_3(data)                                         (0x0FE00000&((data)<<21))
#define  SEG_refdelta0_ref_delta_2(data)                                         (0x001FC000&((data)<<14))
#define  SEG_refdelta0_ref_delta_1(data)                                         (0x00003F80&((data)<<7))
#define  SEG_refdelta0_ref_delta_0(data)                                         (0x0000007F&(data))
#define  SEG_refdelta0_get_ref_delta_3(data)                                     ((0x0FE00000&(data))>>21)
#define  SEG_refdelta0_get_ref_delta_2(data)                                     ((0x001FC000&(data))>>14)
#define  SEG_refdelta0_get_ref_delta_1(data)                                     ((0x00003F80&(data))>>7)
#define  SEG_refdelta0_get_ref_delta_0(data)                                     (0x0000007F&(data))

#define  SEG_refdelta1                                                          0x1800E7B8
#define  SEG_refdelta1_reg_addr                                                  "0xB800E7B8"
#define  SEG_refdelta1_reg                                                       0xB800E7B8
#define  SEG_refdelta1_inst_addr                                                 "0x001E"
#define  set_SEG_refdelta1_reg(data)                                             (*((volatile unsigned int*)SEG_refdelta1_reg)=data)
#define  get_SEG_refdelta1_reg                                                   (*((volatile unsigned int*)SEG_refdelta1_reg))
#define  SEG_refdelta1_ref_delta_7_shift                                         (21)
#define  SEG_refdelta1_ref_delta_6_shift                                         (14)
#define  SEG_refdelta1_ref_delta_5_shift                                         (7)
#define  SEG_refdelta1_ref_delta_4_shift                                         (0)
#define  SEG_refdelta1_ref_delta_7_mask                                          (0x0FE00000)
#define  SEG_refdelta1_ref_delta_6_mask                                          (0x001FC000)
#define  SEG_refdelta1_ref_delta_5_mask                                          (0x00003F80)
#define  SEG_refdelta1_ref_delta_4_mask                                          (0x0000007F)
#define  SEG_refdelta1_ref_delta_7(data)                                         (0x0FE00000&((data)<<21))
#define  SEG_refdelta1_ref_delta_6(data)                                         (0x001FC000&((data)<<14))
#define  SEG_refdelta1_ref_delta_5(data)                                         (0x00003F80&((data)<<7))
#define  SEG_refdelta1_ref_delta_4(data)                                         (0x0000007F&(data))
#define  SEG_refdelta1_get_ref_delta_7(data)                                     ((0x0FE00000&(data))>>21)
#define  SEG_refdelta1_get_ref_delta_6(data)                                     ((0x001FC000&(data))>>14)
#define  SEG_refdelta1_get_ref_delta_5(data)                                     ((0x00003F80&(data))>>7)
#define  SEG_refdelta1_get_ref_delta_4(data)                                     (0x0000007F&(data))

#define  SEG_modedelta                                                          0x1800E7BC
#define  SEG_modedelta_reg_addr                                                  "0xB800E7BC"
#define  SEG_modedelta_reg                                                       0xB800E7BC
#define  SEG_modedelta_inst_addr                                                 "0x001F"
#define  set_SEG_modedelta_reg(data)                                             (*((volatile unsigned int*)SEG_modedelta_reg)=data)
#define  get_SEG_modedelta_reg                                                   (*((volatile unsigned int*)SEG_modedelta_reg))
#define  SEG_modedelta_mode_delta_1_shift                                        (7)
#define  SEG_modedelta_mode_delta_0_shift                                        (0)
#define  SEG_modedelta_mode_delta_1_mask                                         (0x00003F80)
#define  SEG_modedelta_mode_delta_0_mask                                         (0x0000007F)
#define  SEG_modedelta_mode_delta_1(data)                                        (0x00003F80&((data)<<7))
#define  SEG_modedelta_mode_delta_0(data)                                        (0x0000007F&(data))
#define  SEG_modedelta_get_mode_delta_1(data)                                    ((0x00003F80&(data))>>7)
#define  SEG_modedelta_get_mode_delta_0(data)                                    (0x0000007F&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======SEG register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  segreset:1;
        RBus_UInt32  resetreadpointer:1;
        RBus_UInt32  segenable:1;
    };
}seg_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  startaddr:32;
    };
}seg_tbcmd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  writepointer:16;
    };
}seg_tbcmd1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  startaddr:32;
    };
}seg_slccfg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  enablealtminc:1;
        RBus_UInt32  altminc:13;
        RBus_UInt32  select:1;
        RBus_UInt32  enable:1;
        RBus_UInt32  minc:16;
    };
}seg_sync_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  segexport:1;
        RBus_UInt32  enable:1;
        RBus_UInt32  ctbaddr:18;
    };
}seg_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  qpdeltaabs:1;
        RBus_UInt32  size:3;
        RBus_UInt32  zidx:8;
        RBus_UInt32  tugo:1;
        RBus_UInt32  cugo:1;
        RBus_UInt32  saogo:1;
    };
}seg_debug1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  piccount:15;
    };
}seg_debug2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sdesaddr:32;
    };
}seg_debug3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvdsaddr:32;
    };
}seg_debug4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  itsaddr:32;
    };
}seg_debug5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmsaddr:32;
    };
}seg_debug6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  masklossless:1;
        RBus_UInt32  maskqindex:1;
        RBus_UInt32  maskfilterlevel:1;
        RBus_UInt32  maskrefidx:1;
        RBus_UInt32  maskskip:1;
        RBus_UInt32  qindex:9;
        RBus_UInt32  filterlevel:7;
        RBus_UInt32  refidx:3;
    };
}seg_segment_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  maskfilterlevelv:1;
        RBus_UInt32  maskfilterlevelu:1;
        RBus_UInt32  maskfilterlevelhori:1;
        RBus_UInt32  filterlevelv:7;
        RBus_UInt32  filterlevelu:7;
        RBus_UInt32  filterlevelhori:7;
    };
}seg_segment1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  disablemvdldcomem:1;
        RBus_UInt32  disablemvdstcomem:1;
        RBus_UInt32  intraonly:1;
        RBus_UInt32  absdelta:1;
        RBus_UInt32  qindex:8;
    };
}seg_pic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ref_delta_3:7;
        RBus_UInt32  ref_delta_2:7;
        RBus_UInt32  ref_delta_1:7;
        RBus_UInt32  ref_delta_0:7;
    };
}seg_refdelta0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ref_delta_7:7;
        RBus_UInt32  ref_delta_6:7;
        RBus_UInt32  ref_delta_5:7;
        RBus_UInt32  ref_delta_4:7;
    };
}seg_refdelta1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  mode_delta_1:7;
        RBus_UInt32  mode_delta_0:7;
    };
}seg_modedelta_RBUS;

#else //apply LITTLE_ENDIAN

//======SEG register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  segenable:1;
        RBus_UInt32  resetreadpointer:1;
        RBus_UInt32  segreset:1;
        RBus_UInt32  res1:29;
    };
}seg_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  startaddr:32;
    };
}seg_tbcmd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  writepointer:16;
        RBus_UInt32  res1:16;
    };
}seg_tbcmd1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  startaddr:32;
    };
}seg_slccfg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  minc:16;
        RBus_UInt32  enable:1;
        RBus_UInt32  select:1;
        RBus_UInt32  altminc:13;
        RBus_UInt32  enablealtminc:1;
    };
}seg_sync_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctbaddr:18;
        RBus_UInt32  enable:1;
        RBus_UInt32  segexport:1;
        RBus_UInt32  res1:12;
    };
}seg_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  saogo:1;
        RBus_UInt32  cugo:1;
        RBus_UInt32  tugo:1;
        RBus_UInt32  zidx:8;
        RBus_UInt32  size:3;
        RBus_UInt32  qpdeltaabs:1;
        RBus_UInt32  res1:17;
    };
}seg_debug1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  piccount:15;
        RBus_UInt32  res1:17;
    };
}seg_debug2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sdesaddr:32;
    };
}seg_debug3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvdsaddr:32;
    };
}seg_debug4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  itsaddr:32;
    };
}seg_debug5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmsaddr:32;
    };
}seg_debug6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  refidx:3;
        RBus_UInt32  filterlevel:7;
        RBus_UInt32  qindex:9;
        RBus_UInt32  maskskip:1;
        RBus_UInt32  maskrefidx:1;
        RBus_UInt32  maskfilterlevel:1;
        RBus_UInt32  maskqindex:1;
        RBus_UInt32  masklossless:1;
        RBus_UInt32  res1:8;
    };
}seg_segment_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  filterlevelhori:7;
        RBus_UInt32  filterlevelu:7;
        RBus_UInt32  filterlevelv:7;
        RBus_UInt32  maskfilterlevelhori:1;
        RBus_UInt32  maskfilterlevelu:1;
        RBus_UInt32  maskfilterlevelv:1;
        RBus_UInt32  res1:8;
    };
}seg_segment1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  qindex:8;
        RBus_UInt32  absdelta:1;
        RBus_UInt32  intraonly:1;
        RBus_UInt32  disablemvdstcomem:1;
        RBus_UInt32  disablemvdldcomem:1;
        RBus_UInt32  res1:20;
    };
}seg_pic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ref_delta_0:7;
        RBus_UInt32  ref_delta_1:7;
        RBus_UInt32  ref_delta_2:7;
        RBus_UInt32  ref_delta_3:7;
        RBus_UInt32  res1:4;
    };
}seg_refdelta0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ref_delta_4:7;
        RBus_UInt32  ref_delta_5:7;
        RBus_UInt32  ref_delta_6:7;
        RBus_UInt32  ref_delta_7:7;
        RBus_UInt32  res1:4;
    };
}seg_refdelta1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mode_delta_0:7;
        RBus_UInt32  mode_delta_1:7;
        RBus_UInt32  res1:18;
    };
}seg_modedelta_RBUS;




#endif 


#endif 
