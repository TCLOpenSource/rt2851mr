/*  @Auther Jeffrey_zhang  */

#ifndef _RBUS_VE_MBIST_REG_H_
#define _RBUS_VE_MBIST_REG_H_

#include "rbusTypes.h"

#define  LGCY_VE_MBIST_VE_BIST_RM                                               0x1800FE00
#define  LGCY_VE_MBIST_VE_BIST_RM_reg_addr                                       "0xB800FE00"
#define  LGCY_VE_MBIST_VE_BIST_RM_reg                                            0xB800FE00
#define  LGCY_VE_MBIST_VE_BIST_RM_inst_adr                                       "0x0080"
#define  LGCY_VE_MBIST_VE_BIST_RM_inst                                           0x0080
#define  set_LGCY_VE_MBIST_VE_BIST_RM_reg(data)                                  (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_RM_reg)=data)
#define  get_LGCY_VE_MBIST_VE_BIST_RM_reg                                        (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_RM_reg))
#define  LGCY_VE_MBIST_VE_BIST_RM_TEST_RWM_shift                                 (31)
#define  LGCY_VE_MBIST_VE_BIST_RM_TEST1_shift                                    (30)
#define  LGCY_VE_MBIST_VE_BIST_RM_SYSH_RMEA_shift                                (29)
#define  LGCY_VE_MBIST_VE_BIST_RM_SYSH_RMA_shift                                 (25)
#define  LGCY_VE_MBIST_VE_BIST_RM_SYSH_RMEB_shift                                (24)
#define  LGCY_VE_MBIST_VE_BIST_RM_SYSH_RMB_shift                                 (20)
#define  LGCY_VE_MBIST_VE_BIST_RM_SYSH_RME_shift                                 (19)
#define  LGCY_VE_MBIST_VE_BIST_RM_SYSH_RM_shift                                  (15)
#define  LGCY_VE_MBIST_VE_BIST_RM_RMEA_shift                                     (14)
#define  LGCY_VE_MBIST_VE_BIST_RM_RMA_shift                                      (10)
#define  LGCY_VE_MBIST_VE_BIST_RM_RMEB_shift                                     (9)
#define  LGCY_VE_MBIST_VE_BIST_RM_RMB_shift                                      (5)
#define  LGCY_VE_MBIST_VE_BIST_RM_RME_shift                                      (4)
#define  LGCY_VE_MBIST_VE_BIST_RM_RM_shift                                       (0)
#define  LGCY_VE_MBIST_VE_BIST_RM_TEST_RWM_mask                                  (0x80000000)
#define  LGCY_VE_MBIST_VE_BIST_RM_TEST1_mask                                     (0x40000000)
#define  LGCY_VE_MBIST_VE_BIST_RM_SYSH_RMEA_mask                                 (0x20000000)
#define  LGCY_VE_MBIST_VE_BIST_RM_SYSH_RMA_mask                                  (0x1E000000)
#define  LGCY_VE_MBIST_VE_BIST_RM_SYSH_RMEB_mask                                 (0x01000000)
#define  LGCY_VE_MBIST_VE_BIST_RM_SYSH_RMB_mask                                  (0x00F00000)
#define  LGCY_VE_MBIST_VE_BIST_RM_SYSH_RME_mask                                  (0x00080000)
#define  LGCY_VE_MBIST_VE_BIST_RM_SYSH_RM_mask                                   (0x00078000)
#define  LGCY_VE_MBIST_VE_BIST_RM_RMEA_mask                                      (0x00004000)
#define  LGCY_VE_MBIST_VE_BIST_RM_RMA_mask                                       (0x00003C00)
#define  LGCY_VE_MBIST_VE_BIST_RM_RMEB_mask                                      (0x00000200)
#define  LGCY_VE_MBIST_VE_BIST_RM_RMB_mask                                       (0x000001E0)
#define  LGCY_VE_MBIST_VE_BIST_RM_RME_mask                                       (0x00000010)
#define  LGCY_VE_MBIST_VE_BIST_RM_RM_mask                                        (0x0000000F)
#define  LGCY_VE_MBIST_VE_BIST_RM_TEST_RWM(data)                                 (0x80000000&((data)<<31))
#define  LGCY_VE_MBIST_VE_BIST_RM_TEST1(data)                                    (0x40000000&((data)<<30))
#define  LGCY_VE_MBIST_VE_BIST_RM_SYSH_RMEA(data)                                (0x20000000&((data)<<29))
#define  LGCY_VE_MBIST_VE_BIST_RM_SYSH_RMA(data)                                 (0x1E000000&((data)<<25))
#define  LGCY_VE_MBIST_VE_BIST_RM_SYSH_RMEB(data)                                (0x01000000&((data)<<24))
#define  LGCY_VE_MBIST_VE_BIST_RM_SYSH_RMB(data)                                 (0x00F00000&((data)<<20))
#define  LGCY_VE_MBIST_VE_BIST_RM_SYSH_RME(data)                                 (0x00080000&((data)<<19))
#define  LGCY_VE_MBIST_VE_BIST_RM_SYSH_RM(data)                                  (0x00078000&((data)<<15))
#define  LGCY_VE_MBIST_VE_BIST_RM_RMEA(data)                                     (0x00004000&((data)<<14))
#define  LGCY_VE_MBIST_VE_BIST_RM_RMA(data)                                      (0x00003C00&((data)<<10))
#define  LGCY_VE_MBIST_VE_BIST_RM_RMEB(data)                                     (0x00000200&((data)<<9))
#define  LGCY_VE_MBIST_VE_BIST_RM_RMB(data)                                      (0x000001E0&((data)<<5))
#define  LGCY_VE_MBIST_VE_BIST_RM_RME(data)                                      (0x00000010&((data)<<4))
#define  LGCY_VE_MBIST_VE_BIST_RM_RM(data)                                       (0x0000000F&(data))
#define  LGCY_VE_MBIST_VE_BIST_RM_get_TEST_RWM(data)                             ((0x80000000&(data))>>31)
#define  LGCY_VE_MBIST_VE_BIST_RM_get_TEST1(data)                                ((0x40000000&(data))>>30)
#define  LGCY_VE_MBIST_VE_BIST_RM_get_SYSH_RMEA(data)                            ((0x20000000&(data))>>29)
#define  LGCY_VE_MBIST_VE_BIST_RM_get_SYSH_RMA(data)                             ((0x1E000000&(data))>>25)
#define  LGCY_VE_MBIST_VE_BIST_RM_get_SYSH_RMEB(data)                            ((0x01000000&(data))>>24)
#define  LGCY_VE_MBIST_VE_BIST_RM_get_SYSH_RMB(data)                             ((0x00F00000&(data))>>20)
#define  LGCY_VE_MBIST_VE_BIST_RM_get_SYSH_RME(data)                             ((0x00080000&(data))>>19)
#define  LGCY_VE_MBIST_VE_BIST_RM_get_SYSH_RM(data)                              ((0x00078000&(data))>>15)
#define  LGCY_VE_MBIST_VE_BIST_RM_get_RMEA(data)                                 ((0x00004000&(data))>>14)
#define  LGCY_VE_MBIST_VE_BIST_RM_get_RMA(data)                                  ((0x00003C00&(data))>>10)
#define  LGCY_VE_MBIST_VE_BIST_RM_get_RMEB(data)                                 ((0x00000200&(data))>>9)
#define  LGCY_VE_MBIST_VE_BIST_RM_get_RMB(data)                                  ((0x000001E0&(data))>>5)
#define  LGCY_VE_MBIST_VE_BIST_RM_get_RME(data)                                  ((0x00000010&(data))>>4)
#define  LGCY_VE_MBIST_VE_BIST_RM_get_RM(data)                                   (0x0000000F&(data))
#define  LGCY_VE_MBIST_VE_BIST_RM_TEST_RWM_src(data)                             ((0x80000000&(data))>>31)
#define  LGCY_VE_MBIST_VE_BIST_RM_TEST1_src(data)                                ((0x40000000&(data))>>30)
#define  LGCY_VE_MBIST_VE_BIST_RM_SYSH_RMEA_src(data)                            ((0x20000000&(data))>>29)
#define  LGCY_VE_MBIST_VE_BIST_RM_SYSH_RMA_src(data)                             ((0x1E000000&(data))>>25)
#define  LGCY_VE_MBIST_VE_BIST_RM_SYSH_RMEB_src(data)                            ((0x01000000&(data))>>24)
#define  LGCY_VE_MBIST_VE_BIST_RM_SYSH_RMB_src(data)                             ((0x00F00000&(data))>>20)
#define  LGCY_VE_MBIST_VE_BIST_RM_SYSH_RME_src(data)                             ((0x00080000&(data))>>19)
#define  LGCY_VE_MBIST_VE_BIST_RM_SYSH_RM_src(data)                              ((0x00078000&(data))>>15)
#define  LGCY_VE_MBIST_VE_BIST_RM_RMEA_src(data)                                 ((0x00004000&(data))>>14)
#define  LGCY_VE_MBIST_VE_BIST_RM_RMA_src(data)                                  ((0x00003C00&(data))>>10)
#define  LGCY_VE_MBIST_VE_BIST_RM_RMEB_src(data)                                 ((0x00000200&(data))>>9)
#define  LGCY_VE_MBIST_VE_BIST_RM_RMB_src(data)                                  ((0x000001E0&(data))>>5)
#define  LGCY_VE_MBIST_VE_BIST_RM_RME_src(data)                                  ((0x00000010&(data))>>4)
#define  LGCY_VE_MBIST_VE_BIST_RM_RM_src(data)                                   (0x0000000F&(data))

#define  LGCY_VE_MBIST_VE_BIST_LS_0                                             0x1800FE24
#define  LGCY_VE_MBIST_VE_BIST_LS_0_reg_addr                                     "0xB800FE24"
#define  LGCY_VE_MBIST_VE_BIST_LS_0_reg                                          0xB800FE24
#define  LGCY_VE_MBIST_VE_BIST_LS_0_inst_adr                                     "0x0089"
#define  LGCY_VE_MBIST_VE_BIST_LS_0_inst                                         0x0089
#define  set_LGCY_VE_MBIST_VE_BIST_LS_0_reg(data)                                (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_LS_0_reg)=data)
#define  get_LGCY_VE_MBIST_VE_BIST_LS_0_reg                                      (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_LS_0_reg))
#define  LGCY_VE_MBIST_VE_BIST_LS_0_ip_gc_ls_shift                               (30)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_fme_ls_shift                                 (28)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_ndb_ls_shift                                 (26)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_bs_ls_shift                                  (24)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_dcmprs_ls_shift                              (22)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_brg_ls_shift                                 (20)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_vmem_ls_shift                                (18)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_cmprs_ls_shift                               (16)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_deblk_ls_shift                               (14)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_pred_ls_shift                                (12)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_cache_ls_shift                               (10)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_rl_ls_shift                                  (8)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_cm_ls_shift                                  (6)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_itblk_ls_shift                               (4)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_mvd_ls_shift                                 (2)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_vld_ls_shift                                 (0)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_ip_gc_ls_mask                                (0xC0000000)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_fme_ls_mask                                  (0x30000000)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_ndb_ls_mask                                  (0x0C000000)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_bs_ls_mask                                   (0x03000000)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_dcmprs_ls_mask                               (0x00C00000)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_brg_ls_mask                                  (0x00300000)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_vmem_ls_mask                                 (0x000C0000)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_cmprs_ls_mask                                (0x00030000)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_deblk_ls_mask                                (0x0000C000)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_pred_ls_mask                                 (0x00003000)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_cache_ls_mask                                (0x00000C00)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_rl_ls_mask                                   (0x00000300)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_cm_ls_mask                                   (0x000000C0)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_itblk_ls_mask                                (0x00000030)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_mvd_ls_mask                                  (0x0000000C)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_vld_ls_mask                                  (0x00000003)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_ip_gc_ls(data)                               (0xC0000000&((data)<<30))
#define  LGCY_VE_MBIST_VE_BIST_LS_0_fme_ls(data)                                 (0x30000000&((data)<<28))
#define  LGCY_VE_MBIST_VE_BIST_LS_0_ndb_ls(data)                                 (0x0C000000&((data)<<26))
#define  LGCY_VE_MBIST_VE_BIST_LS_0_bs_ls(data)                                  (0x03000000&((data)<<24))
#define  LGCY_VE_MBIST_VE_BIST_LS_0_dcmprs_ls(data)                              (0x00C00000&((data)<<22))
#define  LGCY_VE_MBIST_VE_BIST_LS_0_brg_ls(data)                                 (0x00300000&((data)<<20))
#define  LGCY_VE_MBIST_VE_BIST_LS_0_vmem_ls(data)                                (0x000C0000&((data)<<18))
#define  LGCY_VE_MBIST_VE_BIST_LS_0_cmprs_ls(data)                               (0x00030000&((data)<<16))
#define  LGCY_VE_MBIST_VE_BIST_LS_0_deblk_ls(data)                               (0x0000C000&((data)<<14))
#define  LGCY_VE_MBIST_VE_BIST_LS_0_pred_ls(data)                                (0x00003000&((data)<<12))
#define  LGCY_VE_MBIST_VE_BIST_LS_0_cache_ls(data)                               (0x00000C00&((data)<<10))
#define  LGCY_VE_MBIST_VE_BIST_LS_0_rl_ls(data)                                  (0x00000300&((data)<<8))
#define  LGCY_VE_MBIST_VE_BIST_LS_0_cm_ls(data)                                  (0x000000C0&((data)<<6))
#define  LGCY_VE_MBIST_VE_BIST_LS_0_itblk_ls(data)                               (0x00000030&((data)<<4))
#define  LGCY_VE_MBIST_VE_BIST_LS_0_mvd_ls(data)                                 (0x0000000C&((data)<<2))
#define  LGCY_VE_MBIST_VE_BIST_LS_0_vld_ls(data)                                 (0x00000003&(data))
#define  LGCY_VE_MBIST_VE_BIST_LS_0_get_ip_gc_ls(data)                           ((0xC0000000&(data))>>30)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_get_fme_ls(data)                             ((0x30000000&(data))>>28)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_get_ndb_ls(data)                             ((0x0C000000&(data))>>26)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_get_bs_ls(data)                              ((0x03000000&(data))>>24)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_get_dcmprs_ls(data)                          ((0x00C00000&(data))>>22)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_get_brg_ls(data)                             ((0x00300000&(data))>>20)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_get_vmem_ls(data)                            ((0x000C0000&(data))>>18)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_get_cmprs_ls(data)                           ((0x00030000&(data))>>16)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_get_deblk_ls(data)                           ((0x0000C000&(data))>>14)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_get_pred_ls(data)                            ((0x00003000&(data))>>12)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_get_cache_ls(data)                           ((0x00000C00&(data))>>10)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_get_rl_ls(data)                              ((0x00000300&(data))>>8)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_get_cm_ls(data)                              ((0x000000C0&(data))>>6)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_get_itblk_ls(data)                           ((0x00000030&(data))>>4)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_get_mvd_ls(data)                             ((0x0000000C&(data))>>2)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_get_vld_ls(data)                             (0x00000003&(data))
#define  LGCY_VE_MBIST_VE_BIST_LS_0_ip_gc_ls_src(data)                           ((0xC0000000&(data))>>30)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_fme_ls_src(data)                             ((0x30000000&(data))>>28)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_ndb_ls_src(data)                             ((0x0C000000&(data))>>26)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_bs_ls_src(data)                              ((0x03000000&(data))>>24)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_dcmprs_ls_src(data)                          ((0x00C00000&(data))>>22)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_brg_ls_src(data)                             ((0x00300000&(data))>>20)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_vmem_ls_src(data)                            ((0x000C0000&(data))>>18)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_cmprs_ls_src(data)                           ((0x00030000&(data))>>16)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_deblk_ls_src(data)                           ((0x0000C000&(data))>>14)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_pred_ls_src(data)                            ((0x00003000&(data))>>12)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_cache_ls_src(data)                           ((0x00000C00&(data))>>10)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_rl_ls_src(data)                              ((0x00000300&(data))>>8)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_cm_ls_src(data)                              ((0x000000C0&(data))>>6)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_itblk_ls_src(data)                           ((0x00000030&(data))>>4)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_mvd_ls_src(data)                             ((0x0000000C&(data))>>2)
#define  LGCY_VE_MBIST_VE_BIST_LS_0_vld_ls_src(data)                             (0x00000003&(data))

#define  LGCY_VE_MBIST_VE_BIST_MODE                                             0x1800FE04
#define  LGCY_VE_MBIST_VE_BIST_MODE_reg_addr                                     "0xB800FE04"
#define  LGCY_VE_MBIST_VE_BIST_MODE_reg                                          0xB800FE04
#define  LGCY_VE_MBIST_VE_BIST_MODE_inst_adr                                     "0x0081"
#define  LGCY_VE_MBIST_VE_BIST_MODE_inst                                         0x0081
#define  set_LGCY_VE_MBIST_VE_BIST_MODE_reg(data)                                (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_MODE_reg)=data)
#define  get_LGCY_VE_MBIST_VE_BIST_MODE_reg                                      (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_MODE_reg))
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_dmem_bist_en_shift                        (19)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_ime_bist_en_shift                         (18)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_cmprs_bist_en_shift                       (17)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_ip_gc_bist_en_shift                       (16)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_pred_2p_bist_en_shift                     (15)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_pred_bist_en_shift                        (14)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_fme_bist_en_shift                         (13)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_dbk_bist_en_shift                         (12)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_mvd_rlmvbuf_bist_en_shift                 (11)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_rlrmem_fme_bist_en_shift                  (10)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_cm_1_bist_en_shift                        (9)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_cm_0_bist_en_shift                        (8)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_ndb_bist_en_shift                         (7)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_brg_bist_en_shift                         (6)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_bs_bist_en_shift                          (5)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_it_bist_en_shift                          (4)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_vm_bist_en_shift                          (3)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_vld_1_bist_en_shift                       (2)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_vld_0_bist_en_shift                       (1)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_rif_bist_en_shift                         (0)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_dmem_bist_en_mask                         (0x00080000)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_ime_bist_en_mask                          (0x00040000)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_cmprs_bist_en_mask                        (0x00020000)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_ip_gc_bist_en_mask                        (0x00010000)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_pred_2p_bist_en_mask                      (0x00008000)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_pred_bist_en_mask                         (0x00004000)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_fme_bist_en_mask                          (0x00002000)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_dbk_bist_en_mask                          (0x00001000)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_mvd_rlmvbuf_bist_en_mask                  (0x00000800)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_rlrmem_fme_bist_en_mask                   (0x00000400)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_cm_1_bist_en_mask                         (0x00000200)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_cm_0_bist_en_mask                         (0x00000100)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_ndb_bist_en_mask                          (0x00000080)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_brg_bist_en_mask                          (0x00000040)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_bs_bist_en_mask                           (0x00000020)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_it_bist_en_mask                           (0x00000010)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_vm_bist_en_mask                           (0x00000008)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_vld_1_bist_en_mask                        (0x00000004)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_vld_0_bist_en_mask                        (0x00000002)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_rif_bist_en_mask                          (0x00000001)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_dmem_bist_en(data)                        (0x00080000&((data)<<19))
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_ime_bist_en(data)                         (0x00040000&((data)<<18))
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_cmprs_bist_en(data)                       (0x00020000&((data)<<17))
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_ip_gc_bist_en(data)                       (0x00010000&((data)<<16))
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_pred_2p_bist_en(data)                     (0x00008000&((data)<<15))
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_pred_bist_en(data)                        (0x00004000&((data)<<14))
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_fme_bist_en(data)                         (0x00002000&((data)<<13))
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_dbk_bist_en(data)                         (0x00001000&((data)<<12))
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_mvd_rlmvbuf_bist_en(data)                 (0x00000800&((data)<<11))
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_rlrmem_fme_bist_en(data)                  (0x00000400&((data)<<10))
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_cm_1_bist_en(data)                        (0x00000200&((data)<<9))
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_cm_0_bist_en(data)                        (0x00000100&((data)<<8))
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_ndb_bist_en(data)                         (0x00000080&((data)<<7))
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_brg_bist_en(data)                         (0x00000040&((data)<<6))
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_bs_bist_en(data)                          (0x00000020&((data)<<5))
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_it_bist_en(data)                          (0x00000010&((data)<<4))
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_vm_bist_en(data)                          (0x00000008&((data)<<3))
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_vld_1_bist_en(data)                       (0x00000004&((data)<<2))
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_vld_0_bist_en(data)                       (0x00000002&((data)<<1))
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_rif_bist_en(data)                         (0x00000001&(data))
#define  LGCY_VE_MBIST_VE_BIST_MODE_get_ve_dmem_bist_en(data)                    ((0x00080000&(data))>>19)
#define  LGCY_VE_MBIST_VE_BIST_MODE_get_ve_ime_bist_en(data)                     ((0x00040000&(data))>>18)
#define  LGCY_VE_MBIST_VE_BIST_MODE_get_ve_cmprs_bist_en(data)                   ((0x00020000&(data))>>17)
#define  LGCY_VE_MBIST_VE_BIST_MODE_get_ve_ip_gc_bist_en(data)                   ((0x00010000&(data))>>16)
#define  LGCY_VE_MBIST_VE_BIST_MODE_get_ve_pred_2p_bist_en(data)                 ((0x00008000&(data))>>15)
#define  LGCY_VE_MBIST_VE_BIST_MODE_get_ve_pred_bist_en(data)                    ((0x00004000&(data))>>14)
#define  LGCY_VE_MBIST_VE_BIST_MODE_get_ve_fme_bist_en(data)                     ((0x00002000&(data))>>13)
#define  LGCY_VE_MBIST_VE_BIST_MODE_get_ve_dbk_bist_en(data)                     ((0x00001000&(data))>>12)
#define  LGCY_VE_MBIST_VE_BIST_MODE_get_ve_mvd_rlmvbuf_bist_en(data)             ((0x00000800&(data))>>11)
#define  LGCY_VE_MBIST_VE_BIST_MODE_get_ve_rlrmem_fme_bist_en(data)              ((0x00000400&(data))>>10)
#define  LGCY_VE_MBIST_VE_BIST_MODE_get_ve_cm_1_bist_en(data)                    ((0x00000200&(data))>>9)
#define  LGCY_VE_MBIST_VE_BIST_MODE_get_ve_cm_0_bist_en(data)                    ((0x00000100&(data))>>8)
#define  LGCY_VE_MBIST_VE_BIST_MODE_get_ve_ndb_bist_en(data)                     ((0x00000080&(data))>>7)
#define  LGCY_VE_MBIST_VE_BIST_MODE_get_ve_brg_bist_en(data)                     ((0x00000040&(data))>>6)
#define  LGCY_VE_MBIST_VE_BIST_MODE_get_ve_bs_bist_en(data)                      ((0x00000020&(data))>>5)
#define  LGCY_VE_MBIST_VE_BIST_MODE_get_ve_it_bist_en(data)                      ((0x00000010&(data))>>4)
#define  LGCY_VE_MBIST_VE_BIST_MODE_get_ve_vm_bist_en(data)                      ((0x00000008&(data))>>3)
#define  LGCY_VE_MBIST_VE_BIST_MODE_get_ve_vld_1_bist_en(data)                   ((0x00000004&(data))>>2)
#define  LGCY_VE_MBIST_VE_BIST_MODE_get_ve_vld_0_bist_en(data)                   ((0x00000002&(data))>>1)
#define  LGCY_VE_MBIST_VE_BIST_MODE_get_ve_rif_bist_en(data)                     (0x00000001&(data))
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_dmem_bist_en_src(data)                    ((0x00080000&(data))>>19)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_ime_bist_en_src(data)                     ((0x00040000&(data))>>18)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_cmprs_bist_en_src(data)                   ((0x00020000&(data))>>17)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_ip_gc_bist_en_src(data)                   ((0x00010000&(data))>>16)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_pred_2p_bist_en_src(data)                 ((0x00008000&(data))>>15)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_pred_bist_en_src(data)                    ((0x00004000&(data))>>14)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_fme_bist_en_src(data)                     ((0x00002000&(data))>>13)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_dbk_bist_en_src(data)                     ((0x00001000&(data))>>12)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_mvd_rlmvbuf_bist_en_src(data)             ((0x00000800&(data))>>11)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_rlrmem_fme_bist_en_src(data)              ((0x00000400&(data))>>10)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_cm_1_bist_en_src(data)                    ((0x00000200&(data))>>9)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_cm_0_bist_en_src(data)                    ((0x00000100&(data))>>8)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_ndb_bist_en_src(data)                     ((0x00000080&(data))>>7)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_brg_bist_en_src(data)                     ((0x00000040&(data))>>6)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_bs_bist_en_src(data)                      ((0x00000020&(data))>>5)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_it_bist_en_src(data)                      ((0x00000010&(data))>>4)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_vm_bist_en_src(data)                      ((0x00000008&(data))>>3)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_vld_1_bist_en_src(data)                   ((0x00000004&(data))>>2)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_vld_0_bist_en_src(data)                   ((0x00000002&(data))>>1)
#define  LGCY_VE_MBIST_VE_BIST_MODE_ve_rif_bist_en_src(data)                     (0x00000001&(data))

#define  LGCY_VE_MBIST_VE_BIST_DONE                                             0x1800FE08
#define  LGCY_VE_MBIST_VE_BIST_DONE_reg_addr                                     "0xB800FE08"
#define  LGCY_VE_MBIST_VE_BIST_DONE_reg                                          0xB800FE08
#define  LGCY_VE_MBIST_VE_BIST_DONE_inst_adr                                     "0x0082"
#define  LGCY_VE_MBIST_VE_BIST_DONE_inst                                         0x0082
#define  set_LGCY_VE_MBIST_VE_BIST_DONE_reg(data)                                (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_DONE_reg)=data)
#define  get_LGCY_VE_MBIST_VE_BIST_DONE_reg                                      (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_DONE_reg))
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_dmem_done_shift                      (19)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_ime_done_shift                       (18)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_cmprs_done_shift                     (17)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_ip_gc_done_shift                     (16)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_pred_2p_done_shift                   (15)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_pred_done_shift                      (14)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_fme_done_shift                       (13)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_dbk_done_shift                       (12)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_mvd_rlmvbuf_done_shift               (11)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_rlrmem_fme_done_shift                (10)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_cm_1_done_shift                      (9)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_cm_0_done_shift                      (8)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_ndb_done_shift                       (7)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_brg_done_shift                       (6)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_bs_done_shift                        (5)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_it_done_shift                        (4)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_vm_done_shift                        (3)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_vld_1_done_shift                     (2)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_vld_0_done_shift                     (1)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_rif_done_shift                       (0)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_dmem_done_mask                       (0x00080000)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_ime_done_mask                        (0x00040000)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_cmprs_done_mask                      (0x00020000)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_ip_gc_done_mask                      (0x00010000)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_pred_2p_done_mask                    (0x00008000)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_pred_done_mask                       (0x00004000)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_fme_done_mask                        (0x00002000)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_dbk_done_mask                        (0x00001000)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_mvd_rlmvbuf_done_mask                (0x00000800)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_rlrmem_fme_done_mask                 (0x00000400)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_cm_1_done_mask                       (0x00000200)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_cm_0_done_mask                       (0x00000100)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_ndb_done_mask                        (0x00000080)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_brg_done_mask                        (0x00000040)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_bs_done_mask                         (0x00000020)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_it_done_mask                         (0x00000010)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_vm_done_mask                         (0x00000008)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_vld_1_done_mask                      (0x00000004)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_vld_0_done_mask                      (0x00000002)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_rif_done_mask                        (0x00000001)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_dmem_done(data)                      (0x00080000&((data)<<19))
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_ime_done(data)                       (0x00040000&((data)<<18))
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_cmprs_done(data)                     (0x00020000&((data)<<17))
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_ip_gc_done(data)                     (0x00010000&((data)<<16))
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_pred_2p_done(data)                   (0x00008000&((data)<<15))
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_pred_done(data)                      (0x00004000&((data)<<14))
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_fme_done(data)                       (0x00002000&((data)<<13))
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_dbk_done(data)                       (0x00001000&((data)<<12))
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_mvd_rlmvbuf_done(data)               (0x00000800&((data)<<11))
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_rlrmem_fme_done(data)                (0x00000400&((data)<<10))
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_cm_1_done(data)                      (0x00000200&((data)<<9))
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_cm_0_done(data)                      (0x00000100&((data)<<8))
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_ndb_done(data)                       (0x00000080&((data)<<7))
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_brg_done(data)                       (0x00000040&((data)<<6))
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_bs_done(data)                        (0x00000020&((data)<<5))
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_it_done(data)                        (0x00000010&((data)<<4))
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_vm_done(data)                        (0x00000008&((data)<<3))
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_vld_1_done(data)                     (0x00000004&((data)<<2))
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_vld_0_done(data)                     (0x00000002&((data)<<1))
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_rif_done(data)                       (0x00000001&(data))
#define  LGCY_VE_MBIST_VE_BIST_DONE_get_ve_bist_dmem_done(data)                  ((0x00080000&(data))>>19)
#define  LGCY_VE_MBIST_VE_BIST_DONE_get_ve_bist_ime_done(data)                   ((0x00040000&(data))>>18)
#define  LGCY_VE_MBIST_VE_BIST_DONE_get_ve_bist_cmprs_done(data)                 ((0x00020000&(data))>>17)
#define  LGCY_VE_MBIST_VE_BIST_DONE_get_ve_bist_ip_gc_done(data)                 ((0x00010000&(data))>>16)
#define  LGCY_VE_MBIST_VE_BIST_DONE_get_ve_bist_pred_2p_done(data)               ((0x00008000&(data))>>15)
#define  LGCY_VE_MBIST_VE_BIST_DONE_get_ve_bist_pred_done(data)                  ((0x00004000&(data))>>14)
#define  LGCY_VE_MBIST_VE_BIST_DONE_get_ve_bist_fme_done(data)                   ((0x00002000&(data))>>13)
#define  LGCY_VE_MBIST_VE_BIST_DONE_get_ve_bist_dbk_done(data)                   ((0x00001000&(data))>>12)
#define  LGCY_VE_MBIST_VE_BIST_DONE_get_ve_bist_mvd_rlmvbuf_done(data)           ((0x00000800&(data))>>11)
#define  LGCY_VE_MBIST_VE_BIST_DONE_get_ve_bist_rlrmem_fme_done(data)            ((0x00000400&(data))>>10)
#define  LGCY_VE_MBIST_VE_BIST_DONE_get_ve_bist_cm_1_done(data)                  ((0x00000200&(data))>>9)
#define  LGCY_VE_MBIST_VE_BIST_DONE_get_ve_bist_cm_0_done(data)                  ((0x00000100&(data))>>8)
#define  LGCY_VE_MBIST_VE_BIST_DONE_get_ve_bist_ndb_done(data)                   ((0x00000080&(data))>>7)
#define  LGCY_VE_MBIST_VE_BIST_DONE_get_ve_bist_brg_done(data)                   ((0x00000040&(data))>>6)
#define  LGCY_VE_MBIST_VE_BIST_DONE_get_ve_bist_bs_done(data)                    ((0x00000020&(data))>>5)
#define  LGCY_VE_MBIST_VE_BIST_DONE_get_ve_bist_it_done(data)                    ((0x00000010&(data))>>4)
#define  LGCY_VE_MBIST_VE_BIST_DONE_get_ve_bist_vm_done(data)                    ((0x00000008&(data))>>3)
#define  LGCY_VE_MBIST_VE_BIST_DONE_get_ve_bist_vld_1_done(data)                 ((0x00000004&(data))>>2)
#define  LGCY_VE_MBIST_VE_BIST_DONE_get_ve_bist_vld_0_done(data)                 ((0x00000002&(data))>>1)
#define  LGCY_VE_MBIST_VE_BIST_DONE_get_ve_bist_rif_done(data)                   (0x00000001&(data))
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_dmem_done_src(data)                  ((0x00080000&(data))>>19)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_ime_done_src(data)                   ((0x00040000&(data))>>18)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_cmprs_done_src(data)                 ((0x00020000&(data))>>17)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_ip_gc_done_src(data)                 ((0x00010000&(data))>>16)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_pred_2p_done_src(data)               ((0x00008000&(data))>>15)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_pred_done_src(data)                  ((0x00004000&(data))>>14)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_fme_done_src(data)                   ((0x00002000&(data))>>13)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_dbk_done_src(data)                   ((0x00001000&(data))>>12)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_mvd_rlmvbuf_done_src(data)           ((0x00000800&(data))>>11)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_rlrmem_fme_done_src(data)            ((0x00000400&(data))>>10)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_cm_1_done_src(data)                  ((0x00000200&(data))>>9)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_cm_0_done_src(data)                  ((0x00000100&(data))>>8)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_ndb_done_src(data)                   ((0x00000080&(data))>>7)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_brg_done_src(data)                   ((0x00000040&(data))>>6)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_bs_done_src(data)                    ((0x00000020&(data))>>5)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_it_done_src(data)                    ((0x00000010&(data))>>4)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_vm_done_src(data)                    ((0x00000008&(data))>>3)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_vld_1_done_src(data)                 ((0x00000004&(data))>>2)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_vld_0_done_src(data)                 ((0x00000002&(data))>>1)
#define  LGCY_VE_MBIST_VE_BIST_DONE_ve_bist_rif_done_src(data)                   (0x00000001&(data))

#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP                                       0x1800FE0C
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_reg_addr                               "0xB800FE0C"
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_reg                                    0xB800FE0C
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_inst_adr                               "0x0083"
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_inst                                   0x0083
#define  set_LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_reg(data)                          (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_reg)=data)
#define  get_LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_reg                                (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_reg))
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_dmem_fail_group_shift          (19)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_ime_fail_group_shift           (18)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_cmprs_fail_group_shift         (17)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_ip_gc_fail_group_shift         (16)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_pred_2p_fail_group_shift       (15)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_pred_fail_group_shift          (14)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_fme_fail_group_shift           (13)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_dbk_fail_group_shift           (12)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_mvd_rlmvbuf_fail_group_shift   (11)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_rlrmem_fme_fail_group_shift    (10)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_cm_1_fail_group_shift          (9)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_cm_0_fail_group_shift          (8)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_ndb_fail_group_shift           (7)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_brg_fail_group_shift           (6)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_bs_fail_group_shift            (5)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_it_fail_group_shift            (4)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_vm_fail_group_shift            (3)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_vld_1_fail_group_shift         (2)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_vld_0_fail_group_shift         (1)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_rif_fail_group_shift           (0)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_dmem_fail_group_mask           (0x00080000)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_ime_fail_group_mask            (0x00040000)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_cmprs_fail_group_mask          (0x00020000)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_ip_gc_fail_group_mask          (0x00010000)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_pred_2p_fail_group_mask        (0x00008000)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_pred_fail_group_mask           (0x00004000)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_fme_fail_group_mask            (0x00002000)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_dbk_fail_group_mask            (0x00001000)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_mvd_rlmvbuf_fail_group_mask    (0x00000800)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_rlrmem_fme_fail_group_mask     (0x00000400)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_cm_1_fail_group_mask           (0x00000200)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_cm_0_fail_group_mask           (0x00000100)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_ndb_fail_group_mask            (0x00000080)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_brg_fail_group_mask            (0x00000040)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_bs_fail_group_mask             (0x00000020)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_it_fail_group_mask             (0x00000010)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_vm_fail_group_mask             (0x00000008)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_vld_1_fail_group_mask          (0x00000004)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_vld_0_fail_group_mask          (0x00000002)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_rif_fail_group_mask            (0x00000001)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_dmem_fail_group(data)          (0x00080000&((data)<<19))
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_ime_fail_group(data)           (0x00040000&((data)<<18))
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_cmprs_fail_group(data)         (0x00020000&((data)<<17))
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_ip_gc_fail_group(data)         (0x00010000&((data)<<16))
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_pred_2p_fail_group(data)       (0x00008000&((data)<<15))
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_pred_fail_group(data)          (0x00004000&((data)<<14))
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_fme_fail_group(data)           (0x00002000&((data)<<13))
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_dbk_fail_group(data)           (0x00001000&((data)<<12))
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_mvd_rlmvbuf_fail_group(data)   (0x00000800&((data)<<11))
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_rlrmem_fme_fail_group(data)    (0x00000400&((data)<<10))
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_cm_1_fail_group(data)          (0x00000200&((data)<<9))
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_cm_0_fail_group(data)          (0x00000100&((data)<<8))
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_ndb_fail_group(data)           (0x00000080&((data)<<7))
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_brg_fail_group(data)           (0x00000040&((data)<<6))
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_bs_fail_group(data)            (0x00000020&((data)<<5))
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_it_fail_group(data)            (0x00000010&((data)<<4))
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_vm_fail_group(data)            (0x00000008&((data)<<3))
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_vld_1_fail_group(data)         (0x00000004&((data)<<2))
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_vld_0_fail_group(data)         (0x00000002&((data)<<1))
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_rif_fail_group(data)           (0x00000001&(data))
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_get_ve_bist_dmem_fail_group(data)      ((0x00080000&(data))>>19)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_get_ve_bist_ime_fail_group(data)       ((0x00040000&(data))>>18)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_get_ve_bist_cmprs_fail_group(data)     ((0x00020000&(data))>>17)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_get_ve_bist_ip_gc_fail_group(data)     ((0x00010000&(data))>>16)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_get_ve_bist_pred_2p_fail_group(data)   ((0x00008000&(data))>>15)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_get_ve_bist_pred_fail_group(data)      ((0x00004000&(data))>>14)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_get_ve_bist_fme_fail_group(data)       ((0x00002000&(data))>>13)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_get_ve_bist_dbk_fail_group(data)       ((0x00001000&(data))>>12)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_get_ve_bist_mvd_rlmvbuf_fail_group(data) ((0x00000800&(data))>>11)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_get_ve_bist_rlrmem_fme_fail_group(data) ((0x00000400&(data))>>10)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_get_ve_bist_cm_1_fail_group(data)      ((0x00000200&(data))>>9)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_get_ve_bist_cm_0_fail_group(data)      ((0x00000100&(data))>>8)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_get_ve_bist_ndb_fail_group(data)       ((0x00000080&(data))>>7)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_get_ve_bist_brg_fail_group(data)       ((0x00000040&(data))>>6)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_get_ve_bist_bs_fail_group(data)        ((0x00000020&(data))>>5)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_get_ve_bist_it_fail_group(data)        ((0x00000010&(data))>>4)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_get_ve_bist_vm_fail_group(data)        ((0x00000008&(data))>>3)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_get_ve_bist_vld_1_fail_group(data)     ((0x00000004&(data))>>2)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_get_ve_bist_vld_0_fail_group(data)     ((0x00000002&(data))>>1)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_get_ve_bist_rif_fail_group(data)       (0x00000001&(data))
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_dmem_fail_group_src(data)      ((0x00080000&(data))>>19)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_ime_fail_group_src(data)       ((0x00040000&(data))>>18)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_cmprs_fail_group_src(data)     ((0x00020000&(data))>>17)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_ip_gc_fail_group_src(data)     ((0x00010000&(data))>>16)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_pred_2p_fail_group_src(data)   ((0x00008000&(data))>>15)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_pred_fail_group_src(data)      ((0x00004000&(data))>>14)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_fme_fail_group_src(data)       ((0x00002000&(data))>>13)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_dbk_fail_group_src(data)       ((0x00001000&(data))>>12)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_mvd_rlmvbuf_fail_group_src(data) ((0x00000800&(data))>>11)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_rlrmem_fme_fail_group_src(data) ((0x00000400&(data))>>10)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_cm_1_fail_group_src(data)      ((0x00000200&(data))>>9)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_cm_0_fail_group_src(data)      ((0x00000100&(data))>>8)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_ndb_fail_group_src(data)       ((0x00000080&(data))>>7)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_brg_fail_group_src(data)       ((0x00000040&(data))>>6)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_bs_fail_group_src(data)        ((0x00000020&(data))>>5)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_it_fail_group_src(data)        ((0x00000010&(data))>>4)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_vm_fail_group_src(data)        ((0x00000008&(data))>>3)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_vld_1_fail_group_src(data)     ((0x00000004&(data))>>2)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_vld_0_fail_group_src(data)     ((0x00000002&(data))>>1)
#define  LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_ve_bist_rif_fail_group_src(data)       (0x00000001&(data))

#define  LGCY_VE_MBIST_VE_DRF_MODE                                              0x1800FE10
#define  LGCY_VE_MBIST_VE_DRF_MODE_reg_addr                                      "0xB800FE10"
#define  LGCY_VE_MBIST_VE_DRF_MODE_reg                                           0xB800FE10
#define  LGCY_VE_MBIST_VE_DRF_MODE_inst_adr                                      "0x0084"
#define  LGCY_VE_MBIST_VE_DRF_MODE_inst                                          0x0084
#define  set_LGCY_VE_MBIST_VE_DRF_MODE_reg(data)                                 (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_MODE_reg)=data)
#define  get_LGCY_VE_MBIST_VE_DRF_MODE_reg                                       (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_MODE_reg))
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_dmem_drf_bist_en_shift                     (19)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_ime_drf_bist_en_shift                      (18)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_cmprs_drf_bist_en_shift                    (17)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_ip_gc_drf_bist_en_shift                    (16)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_pred_2p_drf_bist_en_shift                  (15)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_pred_drf_bist_en_shift                     (14)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_fme_drf_bist_en_shift                      (13)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_dbk_drf_bist_en_shift                      (12)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_mvd_rlmvbuf_drf_bist_en_shift              (11)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_rlrmem_fme_drf_bist_en_shift               (10)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_cm_1_drf_bist_en_shift                     (9)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_cm_0_drf_bist_en_shift                     (8)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_ndb_drf_bist_en_shift                      (7)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_brg_drf_bist_en_shift                      (6)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_bs_drf_bist_en_shift                       (5)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_it_drf_bist_en_shift                       (4)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_vm_drf_bist_en_shift                       (3)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_vld_1_drf_bist_en_shift                    (2)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_vld_0_drf_bist_en_shift                    (1)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_rif_drf_bist_en_shift                      (0)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_dmem_drf_bist_en_mask                      (0x00080000)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_ime_drf_bist_en_mask                       (0x00040000)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_cmprs_drf_bist_en_mask                     (0x00020000)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_ip_gc_drf_bist_en_mask                     (0x00010000)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_pred_2p_drf_bist_en_mask                   (0x00008000)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_pred_drf_bist_en_mask                      (0x00004000)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_fme_drf_bist_en_mask                       (0x00002000)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_dbk_drf_bist_en_mask                       (0x00001000)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_mvd_rlmvbuf_drf_bist_en_mask               (0x00000800)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_rlrmem_fme_drf_bist_en_mask                (0x00000400)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_cm_1_drf_bist_en_mask                      (0x00000200)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_cm_0_drf_bist_en_mask                      (0x00000100)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_ndb_drf_bist_en_mask                       (0x00000080)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_brg_drf_bist_en_mask                       (0x00000040)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_bs_drf_bist_en_mask                        (0x00000020)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_it_drf_bist_en_mask                        (0x00000010)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_vm_drf_bist_en_mask                        (0x00000008)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_vld_1_drf_bist_en_mask                     (0x00000004)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_vld_0_drf_bist_en_mask                     (0x00000002)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_rif_drf_bist_en_mask                       (0x00000001)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_dmem_drf_bist_en(data)                     (0x00080000&((data)<<19))
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_ime_drf_bist_en(data)                      (0x00040000&((data)<<18))
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_cmprs_drf_bist_en(data)                    (0x00020000&((data)<<17))
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_ip_gc_drf_bist_en(data)                    (0x00010000&((data)<<16))
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_pred_2p_drf_bist_en(data)                  (0x00008000&((data)<<15))
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_pred_drf_bist_en(data)                     (0x00004000&((data)<<14))
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_fme_drf_bist_en(data)                      (0x00002000&((data)<<13))
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_dbk_drf_bist_en(data)                      (0x00001000&((data)<<12))
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_mvd_rlmvbuf_drf_bist_en(data)              (0x00000800&((data)<<11))
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_rlrmem_fme_drf_bist_en(data)               (0x00000400&((data)<<10))
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_cm_1_drf_bist_en(data)                     (0x00000200&((data)<<9))
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_cm_0_drf_bist_en(data)                     (0x00000100&((data)<<8))
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_ndb_drf_bist_en(data)                      (0x00000080&((data)<<7))
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_brg_drf_bist_en(data)                      (0x00000040&((data)<<6))
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_bs_drf_bist_en(data)                       (0x00000020&((data)<<5))
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_it_drf_bist_en(data)                       (0x00000010&((data)<<4))
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_vm_drf_bist_en(data)                       (0x00000008&((data)<<3))
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_vld_1_drf_bist_en(data)                    (0x00000004&((data)<<2))
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_vld_0_drf_bist_en(data)                    (0x00000002&((data)<<1))
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_rif_drf_bist_en(data)                      (0x00000001&(data))
#define  LGCY_VE_MBIST_VE_DRF_MODE_get_ve_dmem_drf_bist_en(data)                 ((0x00080000&(data))>>19)
#define  LGCY_VE_MBIST_VE_DRF_MODE_get_ve_ime_drf_bist_en(data)                  ((0x00040000&(data))>>18)
#define  LGCY_VE_MBIST_VE_DRF_MODE_get_ve_cmprs_drf_bist_en(data)                ((0x00020000&(data))>>17)
#define  LGCY_VE_MBIST_VE_DRF_MODE_get_ve_ip_gc_drf_bist_en(data)                ((0x00010000&(data))>>16)
#define  LGCY_VE_MBIST_VE_DRF_MODE_get_ve_pred_2p_drf_bist_en(data)              ((0x00008000&(data))>>15)
#define  LGCY_VE_MBIST_VE_DRF_MODE_get_ve_pred_drf_bist_en(data)                 ((0x00004000&(data))>>14)
#define  LGCY_VE_MBIST_VE_DRF_MODE_get_ve_fme_drf_bist_en(data)                  ((0x00002000&(data))>>13)
#define  LGCY_VE_MBIST_VE_DRF_MODE_get_ve_dbk_drf_bist_en(data)                  ((0x00001000&(data))>>12)
#define  LGCY_VE_MBIST_VE_DRF_MODE_get_ve_mvd_rlmvbuf_drf_bist_en(data)          ((0x00000800&(data))>>11)
#define  LGCY_VE_MBIST_VE_DRF_MODE_get_ve_rlrmem_fme_drf_bist_en(data)           ((0x00000400&(data))>>10)
#define  LGCY_VE_MBIST_VE_DRF_MODE_get_ve_cm_1_drf_bist_en(data)                 ((0x00000200&(data))>>9)
#define  LGCY_VE_MBIST_VE_DRF_MODE_get_ve_cm_0_drf_bist_en(data)                 ((0x00000100&(data))>>8)
#define  LGCY_VE_MBIST_VE_DRF_MODE_get_ve_ndb_drf_bist_en(data)                  ((0x00000080&(data))>>7)
#define  LGCY_VE_MBIST_VE_DRF_MODE_get_ve_brg_drf_bist_en(data)                  ((0x00000040&(data))>>6)
#define  LGCY_VE_MBIST_VE_DRF_MODE_get_ve_bs_drf_bist_en(data)                   ((0x00000020&(data))>>5)
#define  LGCY_VE_MBIST_VE_DRF_MODE_get_ve_it_drf_bist_en(data)                   ((0x00000010&(data))>>4)
#define  LGCY_VE_MBIST_VE_DRF_MODE_get_ve_vm_drf_bist_en(data)                   ((0x00000008&(data))>>3)
#define  LGCY_VE_MBIST_VE_DRF_MODE_get_ve_vld_1_drf_bist_en(data)                ((0x00000004&(data))>>2)
#define  LGCY_VE_MBIST_VE_DRF_MODE_get_ve_vld_0_drf_bist_en(data)                ((0x00000002&(data))>>1)
#define  LGCY_VE_MBIST_VE_DRF_MODE_get_ve_rif_drf_bist_en(data)                  (0x00000001&(data))
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_dmem_drf_bist_en_src(data)                 ((0x00080000&(data))>>19)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_ime_drf_bist_en_src(data)                  ((0x00040000&(data))>>18)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_cmprs_drf_bist_en_src(data)                ((0x00020000&(data))>>17)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_ip_gc_drf_bist_en_src(data)                ((0x00010000&(data))>>16)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_pred_2p_drf_bist_en_src(data)              ((0x00008000&(data))>>15)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_pred_drf_bist_en_src(data)                 ((0x00004000&(data))>>14)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_fme_drf_bist_en_src(data)                  ((0x00002000&(data))>>13)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_dbk_drf_bist_en_src(data)                  ((0x00001000&(data))>>12)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_mvd_rlmvbuf_drf_bist_en_src(data)          ((0x00000800&(data))>>11)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_rlrmem_fme_drf_bist_en_src(data)           ((0x00000400&(data))>>10)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_cm_1_drf_bist_en_src(data)                 ((0x00000200&(data))>>9)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_cm_0_drf_bist_en_src(data)                 ((0x00000100&(data))>>8)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_ndb_drf_bist_en_src(data)                  ((0x00000080&(data))>>7)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_brg_drf_bist_en_src(data)                  ((0x00000040&(data))>>6)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_bs_drf_bist_en_src(data)                   ((0x00000020&(data))>>5)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_it_drf_bist_en_src(data)                   ((0x00000010&(data))>>4)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_vm_drf_bist_en_src(data)                   ((0x00000008&(data))>>3)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_vld_1_drf_bist_en_src(data)                ((0x00000004&(data))>>2)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_vld_0_drf_bist_en_src(data)                ((0x00000002&(data))>>1)
#define  LGCY_VE_MBIST_VE_DRF_MODE_ve_rif_drf_bist_en_src(data)                  (0x00000001&(data))

#define  LGCY_VE_MBIST_VE_DRF_RESUME                                            0x1800FE14
#define  LGCY_VE_MBIST_VE_DRF_RESUME_reg_addr                                    "0xB800FE14"
#define  LGCY_VE_MBIST_VE_DRF_RESUME_reg                                         0xB800FE14
#define  LGCY_VE_MBIST_VE_DRF_RESUME_inst_adr                                    "0x0085"
#define  LGCY_VE_MBIST_VE_DRF_RESUME_inst                                        0x0085
#define  set_LGCY_VE_MBIST_VE_DRF_RESUME_reg(data)                               (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_RESUME_reg)=data)
#define  get_LGCY_VE_MBIST_VE_DRF_RESUME_reg                                     (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_RESUME_reg))
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_dmem_drf_resume_shift                    (19)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_ime_drf_resume_shift                     (18)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_cmprs_drf_resume_shift                   (17)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_ip_gc_drf_resume_shift                   (16)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_pred_2p_drf_resume_shift                 (15)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_pred_drf_resume_shift                    (14)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_fme_drf_resume_shift                     (13)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_dbk_drf_resume_shift                     (12)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_mvd_rlmvbuf_drf_resume_shift             (11)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_rlrmem_fme_drf_resume_shift              (10)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_cm_1_drf_resume_shift                    (9)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_cm_0_drf_resume_shift                    (8)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_ndb_drf_resume_shift                     (7)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_brg_drf_resume_shift                     (6)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_bs_drf_resume_shift                      (5)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_it_drf_resume_shift                      (4)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_vm_drf_resume_shift                      (3)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_vld_1_drf_resume_shift                   (2)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_vld_0_drf_resume_shift                   (1)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_rif_drf_resume_shift                     (0)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_dmem_drf_resume_mask                     (0x00080000)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_ime_drf_resume_mask                      (0x00040000)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_cmprs_drf_resume_mask                    (0x00020000)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_ip_gc_drf_resume_mask                    (0x00010000)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_pred_2p_drf_resume_mask                  (0x00008000)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_pred_drf_resume_mask                     (0x00004000)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_fme_drf_resume_mask                      (0x00002000)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_dbk_drf_resume_mask                      (0x00001000)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_mvd_rlmvbuf_drf_resume_mask              (0x00000800)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_rlrmem_fme_drf_resume_mask               (0x00000400)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_cm_1_drf_resume_mask                     (0x00000200)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_cm_0_drf_resume_mask                     (0x00000100)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_ndb_drf_resume_mask                      (0x00000080)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_brg_drf_resume_mask                      (0x00000040)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_bs_drf_resume_mask                       (0x00000020)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_it_drf_resume_mask                       (0x00000010)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_vm_drf_resume_mask                       (0x00000008)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_vld_1_drf_resume_mask                    (0x00000004)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_vld_0_drf_resume_mask                    (0x00000002)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_rif_drf_resume_mask                      (0x00000001)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_dmem_drf_resume(data)                    (0x00080000&((data)<<19))
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_ime_drf_resume(data)                     (0x00040000&((data)<<18))
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_cmprs_drf_resume(data)                   (0x00020000&((data)<<17))
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_ip_gc_drf_resume(data)                   (0x00010000&((data)<<16))
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_pred_2p_drf_resume(data)                 (0x00008000&((data)<<15))
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_pred_drf_resume(data)                    (0x00004000&((data)<<14))
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_fme_drf_resume(data)                     (0x00002000&((data)<<13))
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_dbk_drf_resume(data)                     (0x00001000&((data)<<12))
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_mvd_rlmvbuf_drf_resume(data)             (0x00000800&((data)<<11))
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_rlrmem_fme_drf_resume(data)              (0x00000400&((data)<<10))
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_cm_1_drf_resume(data)                    (0x00000200&((data)<<9))
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_cm_0_drf_resume(data)                    (0x00000100&((data)<<8))
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_ndb_drf_resume(data)                     (0x00000080&((data)<<7))
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_brg_drf_resume(data)                     (0x00000040&((data)<<6))
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_bs_drf_resume(data)                      (0x00000020&((data)<<5))
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_it_drf_resume(data)                      (0x00000010&((data)<<4))
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_vm_drf_resume(data)                      (0x00000008&((data)<<3))
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_vld_1_drf_resume(data)                   (0x00000004&((data)<<2))
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_vld_0_drf_resume(data)                   (0x00000002&((data)<<1))
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_rif_drf_resume(data)                     (0x00000001&(data))
#define  LGCY_VE_MBIST_VE_DRF_RESUME_get_ve_dmem_drf_resume(data)                ((0x00080000&(data))>>19)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_get_ve_ime_drf_resume(data)                 ((0x00040000&(data))>>18)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_get_ve_cmprs_drf_resume(data)               ((0x00020000&(data))>>17)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_get_ve_ip_gc_drf_resume(data)               ((0x00010000&(data))>>16)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_get_ve_pred_2p_drf_resume(data)             ((0x00008000&(data))>>15)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_get_ve_pred_drf_resume(data)                ((0x00004000&(data))>>14)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_get_ve_fme_drf_resume(data)                 ((0x00002000&(data))>>13)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_get_ve_dbk_drf_resume(data)                 ((0x00001000&(data))>>12)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_get_ve_mvd_rlmvbuf_drf_resume(data)         ((0x00000800&(data))>>11)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_get_ve_rlrmem_fme_drf_resume(data)          ((0x00000400&(data))>>10)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_get_ve_cm_1_drf_resume(data)                ((0x00000200&(data))>>9)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_get_ve_cm_0_drf_resume(data)                ((0x00000100&(data))>>8)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_get_ve_ndb_drf_resume(data)                 ((0x00000080&(data))>>7)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_get_ve_brg_drf_resume(data)                 ((0x00000040&(data))>>6)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_get_ve_bs_drf_resume(data)                  ((0x00000020&(data))>>5)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_get_ve_it_drf_resume(data)                  ((0x00000010&(data))>>4)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_get_ve_vm_drf_resume(data)                  ((0x00000008&(data))>>3)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_get_ve_vld_1_drf_resume(data)               ((0x00000004&(data))>>2)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_get_ve_vld_0_drf_resume(data)               ((0x00000002&(data))>>1)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_get_ve_rif_drf_resume(data)                 (0x00000001&(data))
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_dmem_drf_resume_src(data)                ((0x00080000&(data))>>19)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_ime_drf_resume_src(data)                 ((0x00040000&(data))>>18)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_cmprs_drf_resume_src(data)               ((0x00020000&(data))>>17)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_ip_gc_drf_resume_src(data)               ((0x00010000&(data))>>16)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_pred_2p_drf_resume_src(data)             ((0x00008000&(data))>>15)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_pred_drf_resume_src(data)                ((0x00004000&(data))>>14)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_fme_drf_resume_src(data)                 ((0x00002000&(data))>>13)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_dbk_drf_resume_src(data)                 ((0x00001000&(data))>>12)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_mvd_rlmvbuf_drf_resume_src(data)         ((0x00000800&(data))>>11)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_rlrmem_fme_drf_resume_src(data)          ((0x00000400&(data))>>10)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_cm_1_drf_resume_src(data)                ((0x00000200&(data))>>9)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_cm_0_drf_resume_src(data)                ((0x00000100&(data))>>8)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_ndb_drf_resume_src(data)                 ((0x00000080&(data))>>7)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_brg_drf_resume_src(data)                 ((0x00000040&(data))>>6)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_bs_drf_resume_src(data)                  ((0x00000020&(data))>>5)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_it_drf_resume_src(data)                  ((0x00000010&(data))>>4)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_vm_drf_resume_src(data)                  ((0x00000008&(data))>>3)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_vld_1_drf_resume_src(data)               ((0x00000004&(data))>>2)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_vld_0_drf_resume_src(data)               ((0x00000002&(data))>>1)
#define  LGCY_VE_MBIST_VE_DRF_RESUME_ve_rif_drf_resume_src(data)                 (0x00000001&(data))

#define  LGCY_VE_MBIST_VE_DRF_PAUSE                                             0x1800FE18
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_reg_addr                                     "0xB800FE18"
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_reg                                          0xB800FE18
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_inst_adr                                     "0x0086"
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_inst                                         0x0086
#define  set_LGCY_VE_MBIST_VE_DRF_PAUSE_reg(data)                                (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_PAUSE_reg)=data)
#define  get_LGCY_VE_MBIST_VE_DRF_PAUSE_reg                                      (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_PAUSE_reg))
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_dmem_drf_start_pause_shift                (19)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_ime_drf_start_pause_shift                 (18)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_cmprs_drf_start_pause_shift               (17)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_ip_gc_drf_start_pause_shift               (16)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_pred_2p_drf_start_pause_shift             (15)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_pred_drf_start_pause_shift                (14)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_fme_drf_start_pause_shift                 (13)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_dbk_drf_start_pause_shift                 (12)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_mvd_rlmvbuf_drf_start_pause_shift         (11)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_rlrmem_fme_drf_start_pause_shift          (10)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_cm_1_drf_start_pause_shift                (9)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_cm_0_drf_start_pause_shift                (8)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_ndb_drf_start_pause_shift                 (7)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_brg_drf_start_pause_shift                 (6)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_bs_drf_start_pause_shift                  (5)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_it_drf_start_pause_shift                  (4)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_vm_drf_start_pause_shift                  (3)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_vld_1_drf_start_pause_shift               (2)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_vld_0_drf_start_pause_shift               (1)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_rif_drf_start_pause_shift                 (0)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_dmem_drf_start_pause_mask                 (0x00080000)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_ime_drf_start_pause_mask                  (0x00040000)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_cmprs_drf_start_pause_mask                (0x00020000)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_ip_gc_drf_start_pause_mask                (0x00010000)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_pred_2p_drf_start_pause_mask              (0x00008000)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_pred_drf_start_pause_mask                 (0x00004000)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_fme_drf_start_pause_mask                  (0x00002000)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_dbk_drf_start_pause_mask                  (0x00001000)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_mvd_rlmvbuf_drf_start_pause_mask          (0x00000800)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_rlrmem_fme_drf_start_pause_mask           (0x00000400)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_cm_1_drf_start_pause_mask                 (0x00000200)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_cm_0_drf_start_pause_mask                 (0x00000100)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_ndb_drf_start_pause_mask                  (0x00000080)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_brg_drf_start_pause_mask                  (0x00000040)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_bs_drf_start_pause_mask                   (0x00000020)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_it_drf_start_pause_mask                   (0x00000010)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_vm_drf_start_pause_mask                   (0x00000008)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_vld_1_drf_start_pause_mask                (0x00000004)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_vld_0_drf_start_pause_mask                (0x00000002)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_rif_drf_start_pause_mask                  (0x00000001)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_dmem_drf_start_pause(data)                (0x00080000&((data)<<19))
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_ime_drf_start_pause(data)                 (0x00040000&((data)<<18))
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_cmprs_drf_start_pause(data)               (0x00020000&((data)<<17))
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_ip_gc_drf_start_pause(data)               (0x00010000&((data)<<16))
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_pred_2p_drf_start_pause(data)             (0x00008000&((data)<<15))
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_pred_drf_start_pause(data)                (0x00004000&((data)<<14))
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_fme_drf_start_pause(data)                 (0x00002000&((data)<<13))
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_dbk_drf_start_pause(data)                 (0x00001000&((data)<<12))
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_mvd_rlmvbuf_drf_start_pause(data)         (0x00000800&((data)<<11))
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_rlrmem_fme_drf_start_pause(data)          (0x00000400&((data)<<10))
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_cm_1_drf_start_pause(data)                (0x00000200&((data)<<9))
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_cm_0_drf_start_pause(data)                (0x00000100&((data)<<8))
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_ndb_drf_start_pause(data)                 (0x00000080&((data)<<7))
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_brg_drf_start_pause(data)                 (0x00000040&((data)<<6))
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_bs_drf_start_pause(data)                  (0x00000020&((data)<<5))
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_it_drf_start_pause(data)                  (0x00000010&((data)<<4))
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_vm_drf_start_pause(data)                  (0x00000008&((data)<<3))
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_vld_1_drf_start_pause(data)               (0x00000004&((data)<<2))
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_vld_0_drf_start_pause(data)               (0x00000002&((data)<<1))
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_rif_drf_start_pause(data)                 (0x00000001&(data))
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_get_ve_dmem_drf_start_pause(data)            ((0x00080000&(data))>>19)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_get_ve_ime_drf_start_pause(data)             ((0x00040000&(data))>>18)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_get_ve_cmprs_drf_start_pause(data)           ((0x00020000&(data))>>17)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_get_ve_ip_gc_drf_start_pause(data)           ((0x00010000&(data))>>16)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_get_ve_pred_2p_drf_start_pause(data)         ((0x00008000&(data))>>15)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_get_ve_pred_drf_start_pause(data)            ((0x00004000&(data))>>14)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_get_ve_fme_drf_start_pause(data)             ((0x00002000&(data))>>13)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_get_ve_dbk_drf_start_pause(data)             ((0x00001000&(data))>>12)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_get_ve_mvd_rlmvbuf_drf_start_pause(data)     ((0x00000800&(data))>>11)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_get_ve_rlrmem_fme_drf_start_pause(data)      ((0x00000400&(data))>>10)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_get_ve_cm_1_drf_start_pause(data)            ((0x00000200&(data))>>9)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_get_ve_cm_0_drf_start_pause(data)            ((0x00000100&(data))>>8)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_get_ve_ndb_drf_start_pause(data)             ((0x00000080&(data))>>7)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_get_ve_brg_drf_start_pause(data)             ((0x00000040&(data))>>6)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_get_ve_bs_drf_start_pause(data)              ((0x00000020&(data))>>5)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_get_ve_it_drf_start_pause(data)              ((0x00000010&(data))>>4)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_get_ve_vm_drf_start_pause(data)              ((0x00000008&(data))>>3)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_get_ve_vld_1_drf_start_pause(data)           ((0x00000004&(data))>>2)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_get_ve_vld_0_drf_start_pause(data)           ((0x00000002&(data))>>1)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_get_ve_rif_drf_start_pause(data)             (0x00000001&(data))
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_dmem_drf_start_pause_src(data)            ((0x00080000&(data))>>19)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_ime_drf_start_pause_src(data)             ((0x00040000&(data))>>18)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_cmprs_drf_start_pause_src(data)           ((0x00020000&(data))>>17)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_ip_gc_drf_start_pause_src(data)           ((0x00010000&(data))>>16)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_pred_2p_drf_start_pause_src(data)         ((0x00008000&(data))>>15)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_pred_drf_start_pause_src(data)            ((0x00004000&(data))>>14)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_fme_drf_start_pause_src(data)             ((0x00002000&(data))>>13)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_dbk_drf_start_pause_src(data)             ((0x00001000&(data))>>12)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_mvd_rlmvbuf_drf_start_pause_src(data)     ((0x00000800&(data))>>11)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_rlrmem_fme_drf_start_pause_src(data)      ((0x00000400&(data))>>10)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_cm_1_drf_start_pause_src(data)            ((0x00000200&(data))>>9)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_cm_0_drf_start_pause_src(data)            ((0x00000100&(data))>>8)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_ndb_drf_start_pause_src(data)             ((0x00000080&(data))>>7)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_brg_drf_start_pause_src(data)             ((0x00000040&(data))>>6)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_bs_drf_start_pause_src(data)              ((0x00000020&(data))>>5)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_it_drf_start_pause_src(data)              ((0x00000010&(data))>>4)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_vm_drf_start_pause_src(data)              ((0x00000008&(data))>>3)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_vld_1_drf_start_pause_src(data)           ((0x00000004&(data))>>2)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_vld_0_drf_start_pause_src(data)           ((0x00000002&(data))>>1)
#define  LGCY_VE_MBIST_VE_DRF_PAUSE_ve_rif_drf_start_pause_src(data)             (0x00000001&(data))

#define  LGCY_VE_MBIST_VE_DRF_DONE                                              0x1800FE1C
#define  LGCY_VE_MBIST_VE_DRF_DONE_reg_addr                                      "0xB800FE1C"
#define  LGCY_VE_MBIST_VE_DRF_DONE_reg                                           0xB800FE1C
#define  LGCY_VE_MBIST_VE_DRF_DONE_inst_adr                                      "0x0087"
#define  LGCY_VE_MBIST_VE_DRF_DONE_inst                                          0x0087
#define  set_LGCY_VE_MBIST_VE_DRF_DONE_reg(data)                                 (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_DONE_reg)=data)
#define  get_LGCY_VE_MBIST_VE_DRF_DONE_reg                                       (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_DONE_reg))
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_dmem_done_shift                        (19)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_ime_done_shift                         (18)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_cmprs_done_shift                       (17)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_ip_gc_done_shift                       (16)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_pred_2p_done_shift                     (15)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_pred_done_shift                        (14)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_fme_done_shift                         (13)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_dbk_done_shift                         (12)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_mvd_rlmvbuf_done_shift                 (11)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_rlrmem_fme_done_shift                  (10)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_cm_1_done_shift                        (9)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_cm_0_done_shift                        (8)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_ndb_done_shift                         (7)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_brg_done_shift                         (6)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_bs_done_shift                          (5)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_it_done_shift                          (4)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_vm_done_shift                          (3)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_vld_1_done_shift                       (2)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_vld_0_done_shift                       (1)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_rif_done_shift                         (0)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_dmem_done_mask                         (0x00080000)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_ime_done_mask                          (0x00040000)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_cmprs_done_mask                        (0x00020000)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_ip_gc_done_mask                        (0x00010000)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_pred_2p_done_mask                      (0x00008000)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_pred_done_mask                         (0x00004000)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_fme_done_mask                          (0x00002000)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_dbk_done_mask                          (0x00001000)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_mvd_rlmvbuf_done_mask                  (0x00000800)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_rlrmem_fme_done_mask                   (0x00000400)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_cm_1_done_mask                         (0x00000200)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_cm_0_done_mask                         (0x00000100)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_ndb_done_mask                          (0x00000080)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_brg_done_mask                          (0x00000040)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_bs_done_mask                           (0x00000020)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_it_done_mask                           (0x00000010)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_vm_done_mask                           (0x00000008)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_vld_1_done_mask                        (0x00000004)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_vld_0_done_mask                        (0x00000002)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_rif_done_mask                          (0x00000001)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_dmem_done(data)                        (0x00080000&((data)<<19))
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_ime_done(data)                         (0x00040000&((data)<<18))
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_cmprs_done(data)                       (0x00020000&((data)<<17))
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_ip_gc_done(data)                       (0x00010000&((data)<<16))
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_pred_2p_done(data)                     (0x00008000&((data)<<15))
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_pred_done(data)                        (0x00004000&((data)<<14))
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_fme_done(data)                         (0x00002000&((data)<<13))
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_dbk_done(data)                         (0x00001000&((data)<<12))
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_mvd_rlmvbuf_done(data)                 (0x00000800&((data)<<11))
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_rlrmem_fme_done(data)                  (0x00000400&((data)<<10))
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_cm_1_done(data)                        (0x00000200&((data)<<9))
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_cm_0_done(data)                        (0x00000100&((data)<<8))
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_ndb_done(data)                         (0x00000080&((data)<<7))
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_brg_done(data)                         (0x00000040&((data)<<6))
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_bs_done(data)                          (0x00000020&((data)<<5))
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_it_done(data)                          (0x00000010&((data)<<4))
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_vm_done(data)                          (0x00000008&((data)<<3))
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_vld_1_done(data)                       (0x00000004&((data)<<2))
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_vld_0_done(data)                       (0x00000002&((data)<<1))
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_rif_done(data)                         (0x00000001&(data))
#define  LGCY_VE_MBIST_VE_DRF_DONE_get_ve_drf_dmem_done(data)                    ((0x00080000&(data))>>19)
#define  LGCY_VE_MBIST_VE_DRF_DONE_get_ve_drf_ime_done(data)                     ((0x00040000&(data))>>18)
#define  LGCY_VE_MBIST_VE_DRF_DONE_get_ve_drf_cmprs_done(data)                   ((0x00020000&(data))>>17)
#define  LGCY_VE_MBIST_VE_DRF_DONE_get_ve_drf_ip_gc_done(data)                   ((0x00010000&(data))>>16)
#define  LGCY_VE_MBIST_VE_DRF_DONE_get_ve_drf_pred_2p_done(data)                 ((0x00008000&(data))>>15)
#define  LGCY_VE_MBIST_VE_DRF_DONE_get_ve_drf_pred_done(data)                    ((0x00004000&(data))>>14)
#define  LGCY_VE_MBIST_VE_DRF_DONE_get_ve_drf_fme_done(data)                     ((0x00002000&(data))>>13)
#define  LGCY_VE_MBIST_VE_DRF_DONE_get_ve_drf_dbk_done(data)                     ((0x00001000&(data))>>12)
#define  LGCY_VE_MBIST_VE_DRF_DONE_get_ve_drf_mvd_rlmvbuf_done(data)             ((0x00000800&(data))>>11)
#define  LGCY_VE_MBIST_VE_DRF_DONE_get_ve_drf_rlrmem_fme_done(data)              ((0x00000400&(data))>>10)
#define  LGCY_VE_MBIST_VE_DRF_DONE_get_ve_drf_cm_1_done(data)                    ((0x00000200&(data))>>9)
#define  LGCY_VE_MBIST_VE_DRF_DONE_get_ve_drf_cm_0_done(data)                    ((0x00000100&(data))>>8)
#define  LGCY_VE_MBIST_VE_DRF_DONE_get_ve_drf_ndb_done(data)                     ((0x00000080&(data))>>7)
#define  LGCY_VE_MBIST_VE_DRF_DONE_get_ve_drf_brg_done(data)                     ((0x00000040&(data))>>6)
#define  LGCY_VE_MBIST_VE_DRF_DONE_get_ve_drf_bs_done(data)                      ((0x00000020&(data))>>5)
#define  LGCY_VE_MBIST_VE_DRF_DONE_get_ve_drf_it_done(data)                      ((0x00000010&(data))>>4)
#define  LGCY_VE_MBIST_VE_DRF_DONE_get_ve_drf_vm_done(data)                      ((0x00000008&(data))>>3)
#define  LGCY_VE_MBIST_VE_DRF_DONE_get_ve_drf_vld_1_done(data)                   ((0x00000004&(data))>>2)
#define  LGCY_VE_MBIST_VE_DRF_DONE_get_ve_drf_vld_0_done(data)                   ((0x00000002&(data))>>1)
#define  LGCY_VE_MBIST_VE_DRF_DONE_get_ve_drf_rif_done(data)                     (0x00000001&(data))
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_dmem_done_src(data)                    ((0x00080000&(data))>>19)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_ime_done_src(data)                     ((0x00040000&(data))>>18)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_cmprs_done_src(data)                   ((0x00020000&(data))>>17)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_ip_gc_done_src(data)                   ((0x00010000&(data))>>16)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_pred_2p_done_src(data)                 ((0x00008000&(data))>>15)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_pred_done_src(data)                    ((0x00004000&(data))>>14)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_fme_done_src(data)                     ((0x00002000&(data))>>13)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_dbk_done_src(data)                     ((0x00001000&(data))>>12)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_mvd_rlmvbuf_done_src(data)             ((0x00000800&(data))>>11)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_rlrmem_fme_done_src(data)              ((0x00000400&(data))>>10)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_cm_1_done_src(data)                    ((0x00000200&(data))>>9)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_cm_0_done_src(data)                    ((0x00000100&(data))>>8)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_ndb_done_src(data)                     ((0x00000080&(data))>>7)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_brg_done_src(data)                     ((0x00000040&(data))>>6)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_bs_done_src(data)                      ((0x00000020&(data))>>5)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_it_done_src(data)                      ((0x00000010&(data))>>4)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_vm_done_src(data)                      ((0x00000008&(data))>>3)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_vld_1_done_src(data)                   ((0x00000004&(data))>>2)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_vld_0_done_src(data)                   ((0x00000002&(data))>>1)
#define  LGCY_VE_MBIST_VE_DRF_DONE_ve_drf_rif_done_src(data)                     (0x00000001&(data))

#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP                                        0x1800FE20
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_reg_addr                                "0xB800FE20"
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_reg                                     0xB800FE20
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_inst_adr                                "0x0088"
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_inst                                    0x0088
#define  set_LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_reg(data)                           (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_reg)=data)
#define  get_LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_reg                                 (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_reg))
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_dmem_fail_group_shift            (19)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_ime_fail_group_shift             (18)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_cmprs_fail_group_shift           (17)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_ip_gc_fail_group_shift           (16)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_pred_2p_fail_group_shift         (15)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_pred_fail_group_shift            (14)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_fme_fail_group_shift             (13)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_dbk_fail_group_shift             (12)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_mvd_rlmvbuf_fail_group_shift     (11)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_rlrmem_fme_fail_group_shift      (10)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_cm_1_fail_group_shift            (9)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_cm_0_fail_group_shift            (8)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_ndb_fail_group_shift             (7)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_brg_fail_group_shift             (6)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_bs_fail_group_shift              (5)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_it_fail_group_shift              (4)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_vm_fail_group_shift              (3)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_vld_1_fail_group_shift           (2)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_vld_0_fail_group_shift           (1)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_rif_fail_group_shift             (0)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_dmem_fail_group_mask             (0x00080000)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_ime_fail_group_mask              (0x00040000)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_cmprs_fail_group_mask            (0x00020000)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_ip_gc_fail_group_mask            (0x00010000)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_pred_2p_fail_group_mask          (0x00008000)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_pred_fail_group_mask             (0x00004000)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_fme_fail_group_mask              (0x00002000)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_dbk_fail_group_mask              (0x00001000)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_mvd_rlmvbuf_fail_group_mask      (0x00000800)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_rlrmem_fme_fail_group_mask       (0x00000400)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_cm_1_fail_group_mask             (0x00000200)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_cm_0_fail_group_mask             (0x00000100)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_ndb_fail_group_mask              (0x00000080)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_brg_fail_group_mask              (0x00000040)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_bs_fail_group_mask               (0x00000020)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_it_fail_group_mask               (0x00000010)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_vm_fail_group_mask               (0x00000008)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_vld_1_fail_group_mask            (0x00000004)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_vld_0_fail_group_mask            (0x00000002)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_rif_fail_group_mask              (0x00000001)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_dmem_fail_group(data)            (0x00080000&((data)<<19))
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_ime_fail_group(data)             (0x00040000&((data)<<18))
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_cmprs_fail_group(data)           (0x00020000&((data)<<17))
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_ip_gc_fail_group(data)           (0x00010000&((data)<<16))
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_pred_2p_fail_group(data)         (0x00008000&((data)<<15))
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_pred_fail_group(data)            (0x00004000&((data)<<14))
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_fme_fail_group(data)             (0x00002000&((data)<<13))
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_dbk_fail_group(data)             (0x00001000&((data)<<12))
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_mvd_rlmvbuf_fail_group(data)     (0x00000800&((data)<<11))
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_rlrmem_fme_fail_group(data)      (0x00000400&((data)<<10))
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_cm_1_fail_group(data)            (0x00000200&((data)<<9))
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_cm_0_fail_group(data)            (0x00000100&((data)<<8))
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_ndb_fail_group(data)             (0x00000080&((data)<<7))
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_brg_fail_group(data)             (0x00000040&((data)<<6))
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_bs_fail_group(data)              (0x00000020&((data)<<5))
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_it_fail_group(data)              (0x00000010&((data)<<4))
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_vm_fail_group(data)              (0x00000008&((data)<<3))
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_vld_1_fail_group(data)           (0x00000004&((data)<<2))
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_vld_0_fail_group(data)           (0x00000002&((data)<<1))
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_rif_fail_group(data)             (0x00000001&(data))
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_get_ve_drf_dmem_fail_group(data)        ((0x00080000&(data))>>19)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_get_ve_drf_ime_fail_group(data)         ((0x00040000&(data))>>18)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_get_ve_drf_cmprs_fail_group(data)       ((0x00020000&(data))>>17)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_get_ve_drf_ip_gc_fail_group(data)       ((0x00010000&(data))>>16)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_get_ve_drf_pred_2p_fail_group(data)     ((0x00008000&(data))>>15)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_get_ve_drf_pred_fail_group(data)        ((0x00004000&(data))>>14)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_get_ve_drf_fme_fail_group(data)         ((0x00002000&(data))>>13)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_get_ve_drf_dbk_fail_group(data)         ((0x00001000&(data))>>12)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_get_ve_drf_mvd_rlmvbuf_fail_group(data) ((0x00000800&(data))>>11)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_get_ve_drf_rlrmem_fme_fail_group(data)  ((0x00000400&(data))>>10)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_get_ve_drf_cm_1_fail_group(data)        ((0x00000200&(data))>>9)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_get_ve_drf_cm_0_fail_group(data)        ((0x00000100&(data))>>8)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_get_ve_drf_ndb_fail_group(data)         ((0x00000080&(data))>>7)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_get_ve_drf_brg_fail_group(data)         ((0x00000040&(data))>>6)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_get_ve_drf_bs_fail_group(data)          ((0x00000020&(data))>>5)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_get_ve_drf_it_fail_group(data)          ((0x00000010&(data))>>4)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_get_ve_drf_vm_fail_group(data)          ((0x00000008&(data))>>3)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_get_ve_drf_vld_1_fail_group(data)       ((0x00000004&(data))>>2)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_get_ve_drf_vld_0_fail_group(data)       ((0x00000002&(data))>>1)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_get_ve_drf_rif_fail_group(data)         (0x00000001&(data))
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_dmem_fail_group_src(data)        ((0x00080000&(data))>>19)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_ime_fail_group_src(data)         ((0x00040000&(data))>>18)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_cmprs_fail_group_src(data)       ((0x00020000&(data))>>17)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_ip_gc_fail_group_src(data)       ((0x00010000&(data))>>16)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_pred_2p_fail_group_src(data)     ((0x00008000&(data))>>15)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_pred_fail_group_src(data)        ((0x00004000&(data))>>14)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_fme_fail_group_src(data)         ((0x00002000&(data))>>13)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_dbk_fail_group_src(data)         ((0x00001000&(data))>>12)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_mvd_rlmvbuf_fail_group_src(data) ((0x00000800&(data))>>11)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_rlrmem_fme_fail_group_src(data)  ((0x00000400&(data))>>10)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_cm_1_fail_group_src(data)        ((0x00000200&(data))>>9)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_cm_0_fail_group_src(data)        ((0x00000100&(data))>>8)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_ndb_fail_group_src(data)         ((0x00000080&(data))>>7)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_brg_fail_group_src(data)         ((0x00000040&(data))>>6)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_bs_fail_group_src(data)          ((0x00000020&(data))>>5)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_it_fail_group_src(data)          ((0x00000010&(data))>>4)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_vm_fail_group_src(data)          ((0x00000008&(data))>>3)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_vld_1_fail_group_src(data)       ((0x00000004&(data))>>2)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_vld_0_fail_group_src(data)       ((0x00000002&(data))>>1)
#define  LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_ve_drf_rif_fail_group_src(data)         (0x00000001&(data))

#define  LGCY_VE_MBIST_VE_BIST_RIF_FAIL                                         0x1800FE30
#define  LGCY_VE_MBIST_VE_BIST_RIF_FAIL_reg_addr                                 "0xB800FE30"
#define  LGCY_VE_MBIST_VE_BIST_RIF_FAIL_reg                                      0xB800FE30
#define  LGCY_VE_MBIST_VE_BIST_RIF_FAIL_inst_adr                                 "0x008C"
#define  LGCY_VE_MBIST_VE_BIST_RIF_FAIL_inst                                     0x008C
#define  set_LGCY_VE_MBIST_VE_BIST_RIF_FAIL_reg(data)                            (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_RIF_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_BIST_RIF_FAIL_reg                                  (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_RIF_FAIL_reg))
#define  LGCY_VE_MBIST_VE_BIST_RIF_FAIL_ve_bist_rif_fail_shift                   (0)
#define  LGCY_VE_MBIST_VE_BIST_RIF_FAIL_ve_bist_rif_fail_mask                    (0x000001FF)
#define  LGCY_VE_MBIST_VE_BIST_RIF_FAIL_ve_bist_rif_fail(data)                   (0x000001FF&(data))
#define  LGCY_VE_MBIST_VE_BIST_RIF_FAIL_get_ve_bist_rif_fail(data)               (0x000001FF&(data))
#define  LGCY_VE_MBIST_VE_BIST_RIF_FAIL_ve_bist_rif_fail_src(data)               (0x000001FF&(data))

#define  LGCY_VE_MBIST_VE_DRF_RIF_FAIL                                          0x1800FE34
#define  LGCY_VE_MBIST_VE_DRF_RIF_FAIL_reg_addr                                  "0xB800FE34"
#define  LGCY_VE_MBIST_VE_DRF_RIF_FAIL_reg                                       0xB800FE34
#define  LGCY_VE_MBIST_VE_DRF_RIF_FAIL_inst_adr                                  "0x008D"
#define  LGCY_VE_MBIST_VE_DRF_RIF_FAIL_inst                                      0x008D
#define  set_LGCY_VE_MBIST_VE_DRF_RIF_FAIL_reg(data)                             (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_RIF_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_DRF_RIF_FAIL_reg                                   (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_RIF_FAIL_reg))
#define  LGCY_VE_MBIST_VE_DRF_RIF_FAIL_ve_drf_rif_fail_shift                     (0)
#define  LGCY_VE_MBIST_VE_DRF_RIF_FAIL_ve_drf_rif_fail_mask                      (0x000001FF)
#define  LGCY_VE_MBIST_VE_DRF_RIF_FAIL_ve_drf_rif_fail(data)                     (0x000001FF&(data))
#define  LGCY_VE_MBIST_VE_DRF_RIF_FAIL_get_ve_drf_rif_fail(data)                 (0x000001FF&(data))
#define  LGCY_VE_MBIST_VE_DRF_RIF_FAIL_ve_drf_rif_fail_src(data)                 (0x000001FF&(data))

#define  LGCY_VE_MBIST_VE_BIST_VLD_FAIL                                         0x1800FE38
#define  LGCY_VE_MBIST_VE_BIST_VLD_FAIL_reg_addr                                 "0xB800FE38"
#define  LGCY_VE_MBIST_VE_BIST_VLD_FAIL_reg                                      0xB800FE38
#define  LGCY_VE_MBIST_VE_BIST_VLD_FAIL_inst_adr                                 "0x008E"
#define  LGCY_VE_MBIST_VE_BIST_VLD_FAIL_inst                                     0x008E
#define  set_LGCY_VE_MBIST_VE_BIST_VLD_FAIL_reg(data)                            (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_VLD_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_BIST_VLD_FAIL_reg                                  (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_VLD_FAIL_reg))
#define  LGCY_VE_MBIST_VE_BIST_VLD_FAIL_ve_bist_vld_1_fail_shift                 (3)
#define  LGCY_VE_MBIST_VE_BIST_VLD_FAIL_ve_bist_vld_0_fail_shift                 (0)
#define  LGCY_VE_MBIST_VE_BIST_VLD_FAIL_ve_bist_vld_1_fail_mask                  (0x00000018)
#define  LGCY_VE_MBIST_VE_BIST_VLD_FAIL_ve_bist_vld_0_fail_mask                  (0x00000007)
#define  LGCY_VE_MBIST_VE_BIST_VLD_FAIL_ve_bist_vld_1_fail(data)                 (0x00000018&((data)<<3))
#define  LGCY_VE_MBIST_VE_BIST_VLD_FAIL_ve_bist_vld_0_fail(data)                 (0x00000007&(data))
#define  LGCY_VE_MBIST_VE_BIST_VLD_FAIL_get_ve_bist_vld_1_fail(data)             ((0x00000018&(data))>>3)
#define  LGCY_VE_MBIST_VE_BIST_VLD_FAIL_get_ve_bist_vld_0_fail(data)             (0x00000007&(data))
#define  LGCY_VE_MBIST_VE_BIST_VLD_FAIL_ve_bist_vld_1_fail_src(data)             ((0x00000018&(data))>>3)
#define  LGCY_VE_MBIST_VE_BIST_VLD_FAIL_ve_bist_vld_0_fail_src(data)             (0x00000007&(data))

#define  LGCY_VE_MBIST_VE_DRF_VLD_FAIL                                          0x1800FE3C
#define  LGCY_VE_MBIST_VE_DRF_VLD_FAIL_reg_addr                                  "0xB800FE3C"
#define  LGCY_VE_MBIST_VE_DRF_VLD_FAIL_reg                                       0xB800FE3C
#define  LGCY_VE_MBIST_VE_DRF_VLD_FAIL_inst_adr                                  "0x008F"
#define  LGCY_VE_MBIST_VE_DRF_VLD_FAIL_inst                                      0x008F
#define  set_LGCY_VE_MBIST_VE_DRF_VLD_FAIL_reg(data)                             (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_VLD_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_DRF_VLD_FAIL_reg                                   (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_VLD_FAIL_reg))
#define  LGCY_VE_MBIST_VE_DRF_VLD_FAIL_ve_drf_vld_1_fail_shift                   (3)
#define  LGCY_VE_MBIST_VE_DRF_VLD_FAIL_ve_drf_vld_0_fail_shift                   (0)
#define  LGCY_VE_MBIST_VE_DRF_VLD_FAIL_ve_drf_vld_1_fail_mask                    (0x00000018)
#define  LGCY_VE_MBIST_VE_DRF_VLD_FAIL_ve_drf_vld_0_fail_mask                    (0x00000007)
#define  LGCY_VE_MBIST_VE_DRF_VLD_FAIL_ve_drf_vld_1_fail(data)                   (0x00000018&((data)<<3))
#define  LGCY_VE_MBIST_VE_DRF_VLD_FAIL_ve_drf_vld_0_fail(data)                   (0x00000007&(data))
#define  LGCY_VE_MBIST_VE_DRF_VLD_FAIL_get_ve_drf_vld_1_fail(data)               ((0x00000018&(data))>>3)
#define  LGCY_VE_MBIST_VE_DRF_VLD_FAIL_get_ve_drf_vld_0_fail(data)               (0x00000007&(data))
#define  LGCY_VE_MBIST_VE_DRF_VLD_FAIL_ve_drf_vld_1_fail_src(data)               ((0x00000018&(data))>>3)
#define  LGCY_VE_MBIST_VE_DRF_VLD_FAIL_ve_drf_vld_0_fail_src(data)               (0x00000007&(data))

#define  LGCY_VE_MBIST_VE_BIST_VM_FAIL                                          0x1800FE40
#define  LGCY_VE_MBIST_VE_BIST_VM_FAIL_reg_addr                                  "0xB800FE40"
#define  LGCY_VE_MBIST_VE_BIST_VM_FAIL_reg                                       0xB800FE40
#define  LGCY_VE_MBIST_VE_BIST_VM_FAIL_inst_adr                                  "0x0090"
#define  LGCY_VE_MBIST_VE_BIST_VM_FAIL_inst                                      0x0090
#define  set_LGCY_VE_MBIST_VE_BIST_VM_FAIL_reg(data)                             (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_VM_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_BIST_VM_FAIL_reg                                   (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_VM_FAIL_reg))
#define  LGCY_VE_MBIST_VE_BIST_VM_FAIL_ve_bist_vm_fail_shift                     (0)
#define  LGCY_VE_MBIST_VE_BIST_VM_FAIL_ve_bist_vm_fail_mask                      (0x000001FF)
#define  LGCY_VE_MBIST_VE_BIST_VM_FAIL_ve_bist_vm_fail(data)                     (0x000001FF&(data))
#define  LGCY_VE_MBIST_VE_BIST_VM_FAIL_get_ve_bist_vm_fail(data)                 (0x000001FF&(data))
#define  LGCY_VE_MBIST_VE_BIST_VM_FAIL_ve_bist_vm_fail_src(data)                 (0x000001FF&(data))

#define  LGCY_VE_MBIST_VE_DRF_VM_FAIL                                           0x1800FE44
#define  LGCY_VE_MBIST_VE_DRF_VM_FAIL_reg_addr                                   "0xB800FE44"
#define  LGCY_VE_MBIST_VE_DRF_VM_FAIL_reg                                        0xB800FE44
#define  LGCY_VE_MBIST_VE_DRF_VM_FAIL_inst_adr                                   "0x0091"
#define  LGCY_VE_MBIST_VE_DRF_VM_FAIL_inst                                       0x0091
#define  set_LGCY_VE_MBIST_VE_DRF_VM_FAIL_reg(data)                              (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_VM_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_DRF_VM_FAIL_reg                                    (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_VM_FAIL_reg))
#define  LGCY_VE_MBIST_VE_DRF_VM_FAIL_ve_drf_vm_fail_shift                       (0)
#define  LGCY_VE_MBIST_VE_DRF_VM_FAIL_ve_drf_vm_fail_mask                        (0x000001FF)
#define  LGCY_VE_MBIST_VE_DRF_VM_FAIL_ve_drf_vm_fail(data)                       (0x000001FF&(data))
#define  LGCY_VE_MBIST_VE_DRF_VM_FAIL_get_ve_drf_vm_fail(data)                   (0x000001FF&(data))
#define  LGCY_VE_MBIST_VE_DRF_VM_FAIL_ve_drf_vm_fail_src(data)                   (0x000001FF&(data))

#define  LGCY_VE_MBIST_VE_BIST_IT_FAIL                                          0x1800FE48
#define  LGCY_VE_MBIST_VE_BIST_IT_FAIL_reg_addr                                  "0xB800FE48"
#define  LGCY_VE_MBIST_VE_BIST_IT_FAIL_reg                                       0xB800FE48
#define  LGCY_VE_MBIST_VE_BIST_IT_FAIL_inst_adr                                  "0x0092"
#define  LGCY_VE_MBIST_VE_BIST_IT_FAIL_inst                                      0x0092
#define  set_LGCY_VE_MBIST_VE_BIST_IT_FAIL_reg(data)                             (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_IT_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_BIST_IT_FAIL_reg                                   (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_IT_FAIL_reg))
#define  LGCY_VE_MBIST_VE_BIST_IT_FAIL_ve_bist_it_fail_shift                     (0)
#define  LGCY_VE_MBIST_VE_BIST_IT_FAIL_ve_bist_it_fail_mask                      (0x0000000F)
#define  LGCY_VE_MBIST_VE_BIST_IT_FAIL_ve_bist_it_fail(data)                     (0x0000000F&(data))
#define  LGCY_VE_MBIST_VE_BIST_IT_FAIL_get_ve_bist_it_fail(data)                 (0x0000000F&(data))
#define  LGCY_VE_MBIST_VE_BIST_IT_FAIL_ve_bist_it_fail_src(data)                 (0x0000000F&(data))

#define  LGCY_VE_MBIST_VE_DRF_IT_FAIL                                           0x1800FE4C
#define  LGCY_VE_MBIST_VE_DRF_IT_FAIL_reg_addr                                   "0xB800FE4C"
#define  LGCY_VE_MBIST_VE_DRF_IT_FAIL_reg                                        0xB800FE4C
#define  LGCY_VE_MBIST_VE_DRF_IT_FAIL_inst_adr                                   "0x0093"
#define  LGCY_VE_MBIST_VE_DRF_IT_FAIL_inst                                       0x0093
#define  set_LGCY_VE_MBIST_VE_DRF_IT_FAIL_reg(data)                              (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_IT_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_DRF_IT_FAIL_reg                                    (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_IT_FAIL_reg))
#define  LGCY_VE_MBIST_VE_DRF_IT_FAIL_ve_drf_it_fail_shift                       (0)
#define  LGCY_VE_MBIST_VE_DRF_IT_FAIL_ve_drf_it_fail_mask                        (0x0000000F)
#define  LGCY_VE_MBIST_VE_DRF_IT_FAIL_ve_drf_it_fail(data)                       (0x0000000F&(data))
#define  LGCY_VE_MBIST_VE_DRF_IT_FAIL_get_ve_drf_it_fail(data)                   (0x0000000F&(data))
#define  LGCY_VE_MBIST_VE_DRF_IT_FAIL_ve_drf_it_fail_src(data)                   (0x0000000F&(data))

#define  LGCY_VE_MBIST_VE_BIST_BS_FAIL                                          0x1800FE50
#define  LGCY_VE_MBIST_VE_BIST_BS_FAIL_reg_addr                                  "0xB800FE50"
#define  LGCY_VE_MBIST_VE_BIST_BS_FAIL_reg                                       0xB800FE50
#define  LGCY_VE_MBIST_VE_BIST_BS_FAIL_inst_adr                                  "0x0094"
#define  LGCY_VE_MBIST_VE_BIST_BS_FAIL_inst                                      0x0094
#define  set_LGCY_VE_MBIST_VE_BIST_BS_FAIL_reg(data)                             (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_BS_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_BIST_BS_FAIL_reg                                   (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_BS_FAIL_reg))
#define  LGCY_VE_MBIST_VE_BIST_BS_FAIL_ve_bist_bs_fail_shift                     (0)
#define  LGCY_VE_MBIST_VE_BIST_BS_FAIL_ve_bist_bs_fail_mask                      (0x00000007)
#define  LGCY_VE_MBIST_VE_BIST_BS_FAIL_ve_bist_bs_fail(data)                     (0x00000007&(data))
#define  LGCY_VE_MBIST_VE_BIST_BS_FAIL_get_ve_bist_bs_fail(data)                 (0x00000007&(data))
#define  LGCY_VE_MBIST_VE_BIST_BS_FAIL_ve_bist_bs_fail_src(data)                 (0x00000007&(data))

#define  LGCY_VE_MBIST_VE_DRF_BS_FAIL                                           0x1800FE54
#define  LGCY_VE_MBIST_VE_DRF_BS_FAIL_reg_addr                                   "0xB800FE54"
#define  LGCY_VE_MBIST_VE_DRF_BS_FAIL_reg                                        0xB800FE54
#define  LGCY_VE_MBIST_VE_DRF_BS_FAIL_inst_adr                                   "0x0095"
#define  LGCY_VE_MBIST_VE_DRF_BS_FAIL_inst                                       0x0095
#define  set_LGCY_VE_MBIST_VE_DRF_BS_FAIL_reg(data)                              (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_BS_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_DRF_BS_FAIL_reg                                    (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_BS_FAIL_reg))
#define  LGCY_VE_MBIST_VE_DRF_BS_FAIL_ve_drf_bs_fail_shift                       (0)
#define  LGCY_VE_MBIST_VE_DRF_BS_FAIL_ve_drf_bs_fail_mask                        (0x00000007)
#define  LGCY_VE_MBIST_VE_DRF_BS_FAIL_ve_drf_bs_fail(data)                       (0x00000007&(data))
#define  LGCY_VE_MBIST_VE_DRF_BS_FAIL_get_ve_drf_bs_fail(data)                   (0x00000007&(data))
#define  LGCY_VE_MBIST_VE_DRF_BS_FAIL_ve_drf_bs_fail_src(data)                   (0x00000007&(data))

#define  LGCY_VE_MBIST_VE_BIST_BRG_FAIL                                         0x1800FE58
#define  LGCY_VE_MBIST_VE_BIST_BRG_FAIL_reg_addr                                 "0xB800FE58"
#define  LGCY_VE_MBIST_VE_BIST_BRG_FAIL_reg                                      0xB800FE58
#define  LGCY_VE_MBIST_VE_BIST_BRG_FAIL_inst_adr                                 "0x0096"
#define  LGCY_VE_MBIST_VE_BIST_BRG_FAIL_inst                                     0x0096
#define  set_LGCY_VE_MBIST_VE_BIST_BRG_FAIL_reg(data)                            (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_BRG_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_BIST_BRG_FAIL_reg                                  (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_BRG_FAIL_reg))
#define  LGCY_VE_MBIST_VE_BIST_BRG_FAIL_ve_bist_brg_fail_shift                   (0)
#define  LGCY_VE_MBIST_VE_BIST_BRG_FAIL_ve_bist_brg_fail_mask                    (0x0000003F)
#define  LGCY_VE_MBIST_VE_BIST_BRG_FAIL_ve_bist_brg_fail(data)                   (0x0000003F&(data))
#define  LGCY_VE_MBIST_VE_BIST_BRG_FAIL_get_ve_bist_brg_fail(data)               (0x0000003F&(data))
#define  LGCY_VE_MBIST_VE_BIST_BRG_FAIL_ve_bist_brg_fail_src(data)               (0x0000003F&(data))

#define  LGCY_VE_MBIST_VE_DRF_BRG_FAIL                                          0x1800FE5C
#define  LGCY_VE_MBIST_VE_DRF_BRG_FAIL_reg_addr                                  "0xB800FE5C"
#define  LGCY_VE_MBIST_VE_DRF_BRG_FAIL_reg                                       0xB800FE5C
#define  LGCY_VE_MBIST_VE_DRF_BRG_FAIL_inst_adr                                  "0x0097"
#define  LGCY_VE_MBIST_VE_DRF_BRG_FAIL_inst                                      0x0097
#define  set_LGCY_VE_MBIST_VE_DRF_BRG_FAIL_reg(data)                             (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_BRG_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_DRF_BRG_FAIL_reg                                   (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_BRG_FAIL_reg))
#define  LGCY_VE_MBIST_VE_DRF_BRG_FAIL_ve_drf_brg_fail_shift                     (0)
#define  LGCY_VE_MBIST_VE_DRF_BRG_FAIL_ve_drf_brg_fail_mask                      (0x0000003F)
#define  LGCY_VE_MBIST_VE_DRF_BRG_FAIL_ve_drf_brg_fail(data)                     (0x0000003F&(data))
#define  LGCY_VE_MBIST_VE_DRF_BRG_FAIL_get_ve_drf_brg_fail(data)                 (0x0000003F&(data))
#define  LGCY_VE_MBIST_VE_DRF_BRG_FAIL_ve_drf_brg_fail_src(data)                 (0x0000003F&(data))

#define  LGCY_VE_MBIST_VE_BIST_NDB_FAIL                                         0x1800FE60
#define  LGCY_VE_MBIST_VE_BIST_NDB_FAIL_reg_addr                                 "0xB800FE60"
#define  LGCY_VE_MBIST_VE_BIST_NDB_FAIL_reg                                      0xB800FE60
#define  LGCY_VE_MBIST_VE_BIST_NDB_FAIL_inst_adr                                 "0x0098"
#define  LGCY_VE_MBIST_VE_BIST_NDB_FAIL_inst                                     0x0098
#define  set_LGCY_VE_MBIST_VE_BIST_NDB_FAIL_reg(data)                            (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_NDB_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_BIST_NDB_FAIL_reg                                  (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_NDB_FAIL_reg))
#define  LGCY_VE_MBIST_VE_BIST_NDB_FAIL_ve_bist_ndb_fail_shift                   (0)
#define  LGCY_VE_MBIST_VE_BIST_NDB_FAIL_ve_bist_ndb_fail_mask                    (0x0000000F)
#define  LGCY_VE_MBIST_VE_BIST_NDB_FAIL_ve_bist_ndb_fail(data)                   (0x0000000F&(data))
#define  LGCY_VE_MBIST_VE_BIST_NDB_FAIL_get_ve_bist_ndb_fail(data)               (0x0000000F&(data))
#define  LGCY_VE_MBIST_VE_BIST_NDB_FAIL_ve_bist_ndb_fail_src(data)               (0x0000000F&(data))

#define  LGCY_VE_MBIST_VE_DRF_NDB_FAIL                                          0x1800FE64
#define  LGCY_VE_MBIST_VE_DRF_NDB_FAIL_reg_addr                                  "0xB800FE64"
#define  LGCY_VE_MBIST_VE_DRF_NDB_FAIL_reg                                       0xB800FE64
#define  LGCY_VE_MBIST_VE_DRF_NDB_FAIL_inst_adr                                  "0x0099"
#define  LGCY_VE_MBIST_VE_DRF_NDB_FAIL_inst                                      0x0099
#define  set_LGCY_VE_MBIST_VE_DRF_NDB_FAIL_reg(data)                             (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_NDB_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_DRF_NDB_FAIL_reg                                   (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_NDB_FAIL_reg))
#define  LGCY_VE_MBIST_VE_DRF_NDB_FAIL_ve_drf_ndb_fail_shift                     (0)
#define  LGCY_VE_MBIST_VE_DRF_NDB_FAIL_ve_drf_ndb_fail_mask                      (0x0000000F)
#define  LGCY_VE_MBIST_VE_DRF_NDB_FAIL_ve_drf_ndb_fail(data)                     (0x0000000F&(data))
#define  LGCY_VE_MBIST_VE_DRF_NDB_FAIL_get_ve_drf_ndb_fail(data)                 (0x0000000F&(data))
#define  LGCY_VE_MBIST_VE_DRF_NDB_FAIL_ve_drf_ndb_fail_src(data)                 (0x0000000F&(data))

#define  LGCY_VE_MBIST_VE_BIST_CM1_FAIL                                         0x1800FE68
#define  LGCY_VE_MBIST_VE_BIST_CM1_FAIL_reg_addr                                 "0xB800FE68"
#define  LGCY_VE_MBIST_VE_BIST_CM1_FAIL_reg                                      0xB800FE68
#define  LGCY_VE_MBIST_VE_BIST_CM1_FAIL_inst_adr                                 "0x009A"
#define  LGCY_VE_MBIST_VE_BIST_CM1_FAIL_inst                                     0x009A
#define  set_LGCY_VE_MBIST_VE_BIST_CM1_FAIL_reg(data)                            (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_CM1_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_BIST_CM1_FAIL_reg                                  (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_CM1_FAIL_reg))
#define  LGCY_VE_MBIST_VE_BIST_CM1_FAIL_ve_bist_cm_1_fail_shift                  (6)
#define  LGCY_VE_MBIST_VE_BIST_CM1_FAIL_ve_bist_cm_0_fail_shift                  (0)
#define  LGCY_VE_MBIST_VE_BIST_CM1_FAIL_ve_bist_cm_1_fail_mask                   (0x00000FC0)
#define  LGCY_VE_MBIST_VE_BIST_CM1_FAIL_ve_bist_cm_0_fail_mask                   (0x0000003F)
#define  LGCY_VE_MBIST_VE_BIST_CM1_FAIL_ve_bist_cm_1_fail(data)                  (0x00000FC0&((data)<<6))
#define  LGCY_VE_MBIST_VE_BIST_CM1_FAIL_ve_bist_cm_0_fail(data)                  (0x0000003F&(data))
#define  LGCY_VE_MBIST_VE_BIST_CM1_FAIL_get_ve_bist_cm_1_fail(data)              ((0x00000FC0&(data))>>6)
#define  LGCY_VE_MBIST_VE_BIST_CM1_FAIL_get_ve_bist_cm_0_fail(data)              (0x0000003F&(data))
#define  LGCY_VE_MBIST_VE_BIST_CM1_FAIL_ve_bist_cm_1_fail_src(data)              ((0x00000FC0&(data))>>6)
#define  LGCY_VE_MBIST_VE_BIST_CM1_FAIL_ve_bist_cm_0_fail_src(data)              (0x0000003F&(data))

#define  LGCY_VE_MBIST_VE_DRF_CM1_FAIL                                          0x1800FE6C
#define  LGCY_VE_MBIST_VE_DRF_CM1_FAIL_reg_addr                                  "0xB800FE6C"
#define  LGCY_VE_MBIST_VE_DRF_CM1_FAIL_reg                                       0xB800FE6C
#define  LGCY_VE_MBIST_VE_DRF_CM1_FAIL_inst_adr                                  "0x009B"
#define  LGCY_VE_MBIST_VE_DRF_CM1_FAIL_inst                                      0x009B
#define  set_LGCY_VE_MBIST_VE_DRF_CM1_FAIL_reg(data)                             (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_CM1_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_DRF_CM1_FAIL_reg                                   (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_CM1_FAIL_reg))
#define  LGCY_VE_MBIST_VE_DRF_CM1_FAIL_ve_drf_cm_1_fail_shift                    (6)
#define  LGCY_VE_MBIST_VE_DRF_CM1_FAIL_ve_drf_cm_0_fail_shift                    (0)
#define  LGCY_VE_MBIST_VE_DRF_CM1_FAIL_ve_drf_cm_1_fail_mask                     (0x00000FC0)
#define  LGCY_VE_MBIST_VE_DRF_CM1_FAIL_ve_drf_cm_0_fail_mask                     (0x0000003F)
#define  LGCY_VE_MBIST_VE_DRF_CM1_FAIL_ve_drf_cm_1_fail(data)                    (0x00000FC0&((data)<<6))
#define  LGCY_VE_MBIST_VE_DRF_CM1_FAIL_ve_drf_cm_0_fail(data)                    (0x0000003F&(data))
#define  LGCY_VE_MBIST_VE_DRF_CM1_FAIL_get_ve_drf_cm_1_fail(data)                ((0x00000FC0&(data))>>6)
#define  LGCY_VE_MBIST_VE_DRF_CM1_FAIL_get_ve_drf_cm_0_fail(data)                (0x0000003F&(data))
#define  LGCY_VE_MBIST_VE_DRF_CM1_FAIL_ve_drf_cm_1_fail_src(data)                ((0x00000FC0&(data))>>6)
#define  LGCY_VE_MBIST_VE_DRF_CM1_FAIL_ve_drf_cm_0_fail_src(data)                (0x0000003F&(data))

#define  LGCY_VE_MBIST_VE_BIST_RLRMEM_FME_FAIL                                  0x1800FE70
#define  LGCY_VE_MBIST_VE_BIST_RLRMEM_FME_FAIL_reg_addr                          "0xB800FE70"
#define  LGCY_VE_MBIST_VE_BIST_RLRMEM_FME_FAIL_reg                               0xB800FE70
#define  LGCY_VE_MBIST_VE_BIST_RLRMEM_FME_FAIL_inst_adr                          "0x009C"
#define  LGCY_VE_MBIST_VE_BIST_RLRMEM_FME_FAIL_inst                              0x009C
#define  set_LGCY_VE_MBIST_VE_BIST_RLRMEM_FME_FAIL_reg(data)                     (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_RLRMEM_FME_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_BIST_RLRMEM_FME_FAIL_reg                           (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_RLRMEM_FME_FAIL_reg))
#define  LGCY_VE_MBIST_VE_BIST_RLRMEM_FME_FAIL_ve_bist_rlrmem_fme_fail_shift     (0)
#define  LGCY_VE_MBIST_VE_BIST_RLRMEM_FME_FAIL_ve_bist_rlrmem_fme_fail_mask      (0x0000001F)
#define  LGCY_VE_MBIST_VE_BIST_RLRMEM_FME_FAIL_ve_bist_rlrmem_fme_fail(data)     (0x0000001F&(data))
#define  LGCY_VE_MBIST_VE_BIST_RLRMEM_FME_FAIL_get_ve_bist_rlrmem_fme_fail(data) (0x0000001F&(data))
#define  LGCY_VE_MBIST_VE_BIST_RLRMEM_FME_FAIL_ve_bist_rlrmem_fme_fail_src(data) (0x0000001F&(data))

#define  LGCY_VE_MBIST_VE_DRF_RLRMEM_FME_FAIL                                   0x1800FE74
#define  LGCY_VE_MBIST_VE_DRF_RLRMEM_FME_FAIL_reg_addr                           "0xB800FE74"
#define  LGCY_VE_MBIST_VE_DRF_RLRMEM_FME_FAIL_reg                                0xB800FE74
#define  LGCY_VE_MBIST_VE_DRF_RLRMEM_FME_FAIL_inst_adr                           "0x009D"
#define  LGCY_VE_MBIST_VE_DRF_RLRMEM_FME_FAIL_inst                               0x009D
#define  set_LGCY_VE_MBIST_VE_DRF_RLRMEM_FME_FAIL_reg(data)                      (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_RLRMEM_FME_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_DRF_RLRMEM_FME_FAIL_reg                            (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_RLRMEM_FME_FAIL_reg))
#define  LGCY_VE_MBIST_VE_DRF_RLRMEM_FME_FAIL_ve_drf_rlrmem_fme_fail_shift       (0)
#define  LGCY_VE_MBIST_VE_DRF_RLRMEM_FME_FAIL_ve_drf_rlrmem_fme_fail_mask        (0x0000001F)
#define  LGCY_VE_MBIST_VE_DRF_RLRMEM_FME_FAIL_ve_drf_rlrmem_fme_fail(data)       (0x0000001F&(data))
#define  LGCY_VE_MBIST_VE_DRF_RLRMEM_FME_FAIL_get_ve_drf_rlrmem_fme_fail(data)   (0x0000001F&(data))
#define  LGCY_VE_MBIST_VE_DRF_RLRMEM_FME_FAIL_ve_drf_rlrmem_fme_fail_src(data)   (0x0000001F&(data))

#define  LGCY_VE_MBIST_VE_BIST_MVD_RLMVBUF_FAIL                                 0x1800FE78
#define  LGCY_VE_MBIST_VE_BIST_MVD_RLMVBUF_FAIL_reg_addr                         "0xB800FE78"
#define  LGCY_VE_MBIST_VE_BIST_MVD_RLMVBUF_FAIL_reg                              0xB800FE78
#define  LGCY_VE_MBIST_VE_BIST_MVD_RLMVBUF_FAIL_inst_adr                         "0x009E"
#define  LGCY_VE_MBIST_VE_BIST_MVD_RLMVBUF_FAIL_inst                             0x009E
#define  set_LGCY_VE_MBIST_VE_BIST_MVD_RLMVBUF_FAIL_reg(data)                    (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_MVD_RLMVBUF_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_BIST_MVD_RLMVBUF_FAIL_reg                          (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_MVD_RLMVBUF_FAIL_reg))
#define  LGCY_VE_MBIST_VE_BIST_MVD_RLMVBUF_FAIL_ve_bist_mvd_rlmvbuf_fail_shift   (0)
#define  LGCY_VE_MBIST_VE_BIST_MVD_RLMVBUF_FAIL_ve_bist_mvd_rlmvbuf_fail_mask    (0x00000007)
#define  LGCY_VE_MBIST_VE_BIST_MVD_RLMVBUF_FAIL_ve_bist_mvd_rlmvbuf_fail(data)   (0x00000007&(data))
#define  LGCY_VE_MBIST_VE_BIST_MVD_RLMVBUF_FAIL_get_ve_bist_mvd_rlmvbuf_fail(data) (0x00000007&(data))
#define  LGCY_VE_MBIST_VE_BIST_MVD_RLMVBUF_FAIL_ve_bist_mvd_rlmvbuf_fail_src(data) (0x00000007&(data))

#define  LGCY_VE_MBIST_VE_DRF_MVD_RLMVBUF_FAIL                                  0x1800FE7C
#define  LGCY_VE_MBIST_VE_DRF_MVD_RLMVBUF_FAIL_reg_addr                          "0xB800FE7C"
#define  LGCY_VE_MBIST_VE_DRF_MVD_RLMVBUF_FAIL_reg                               0xB800FE7C
#define  LGCY_VE_MBIST_VE_DRF_MVD_RLMVBUF_FAIL_inst_adr                          "0x009F"
#define  LGCY_VE_MBIST_VE_DRF_MVD_RLMVBUF_FAIL_inst                              0x009F
#define  set_LGCY_VE_MBIST_VE_DRF_MVD_RLMVBUF_FAIL_reg(data)                     (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_MVD_RLMVBUF_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_DRF_MVD_RLMVBUF_FAIL_reg                           (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_MVD_RLMVBUF_FAIL_reg))
#define  LGCY_VE_MBIST_VE_DRF_MVD_RLMVBUF_FAIL_ve_drf_mvd_rlmvbuf_fail_shift     (0)
#define  LGCY_VE_MBIST_VE_DRF_MVD_RLMVBUF_FAIL_ve_drf_mvd_rlmvbuf_fail_mask      (0x00000007)
#define  LGCY_VE_MBIST_VE_DRF_MVD_RLMVBUF_FAIL_ve_drf_mvd_rlmvbuf_fail(data)     (0x00000007&(data))
#define  LGCY_VE_MBIST_VE_DRF_MVD_RLMVBUF_FAIL_get_ve_drf_mvd_rlmvbuf_fail(data) (0x00000007&(data))
#define  LGCY_VE_MBIST_VE_DRF_MVD_RLMVBUF_FAIL_ve_drf_mvd_rlmvbuf_fail_src(data) (0x00000007&(data))

#define  LGCY_VE_MBIST_VE_BIST_DBK_FAIL                                         0x1800FE80
#define  LGCY_VE_MBIST_VE_BIST_DBK_FAIL_reg_addr                                 "0xB800FE80"
#define  LGCY_VE_MBIST_VE_BIST_DBK_FAIL_reg                                      0xB800FE80
#define  LGCY_VE_MBIST_VE_BIST_DBK_FAIL_inst_adr                                 "0x00A0"
#define  LGCY_VE_MBIST_VE_BIST_DBK_FAIL_inst                                     0x00A0
#define  set_LGCY_VE_MBIST_VE_BIST_DBK_FAIL_reg(data)                            (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_DBK_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_BIST_DBK_FAIL_reg                                  (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_DBK_FAIL_reg))
#define  LGCY_VE_MBIST_VE_BIST_DBK_FAIL_ve_bist_dbk_fail_shift                   (0)
#define  LGCY_VE_MBIST_VE_BIST_DBK_FAIL_ve_bist_dbk_fail_mask                    (0x000001FF)
#define  LGCY_VE_MBIST_VE_BIST_DBK_FAIL_ve_bist_dbk_fail(data)                   (0x000001FF&(data))
#define  LGCY_VE_MBIST_VE_BIST_DBK_FAIL_get_ve_bist_dbk_fail(data)               (0x000001FF&(data))
#define  LGCY_VE_MBIST_VE_BIST_DBK_FAIL_ve_bist_dbk_fail_src(data)               (0x000001FF&(data))

#define  LGCY_VE_MBIST_VE_DRF_DBK_FAIL                                          0x1800FE84
#define  LGCY_VE_MBIST_VE_DRF_DBK_FAIL_reg_addr                                  "0xB800FE84"
#define  LGCY_VE_MBIST_VE_DRF_DBK_FAIL_reg                                       0xB800FE84
#define  LGCY_VE_MBIST_VE_DRF_DBK_FAIL_inst_adr                                  "0x00A1"
#define  LGCY_VE_MBIST_VE_DRF_DBK_FAIL_inst                                      0x00A1
#define  set_LGCY_VE_MBIST_VE_DRF_DBK_FAIL_reg(data)                             (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_DBK_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_DRF_DBK_FAIL_reg                                   (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_DBK_FAIL_reg))
#define  LGCY_VE_MBIST_VE_DRF_DBK_FAIL_ve_drf_dbk_fail_shift                     (0)
#define  LGCY_VE_MBIST_VE_DRF_DBK_FAIL_ve_drf_dbk_fail_mask                      (0x000001FF)
#define  LGCY_VE_MBIST_VE_DRF_DBK_FAIL_ve_drf_dbk_fail(data)                     (0x000001FF&(data))
#define  LGCY_VE_MBIST_VE_DRF_DBK_FAIL_get_ve_drf_dbk_fail(data)                 (0x000001FF&(data))
#define  LGCY_VE_MBIST_VE_DRF_DBK_FAIL_ve_drf_dbk_fail_src(data)                 (0x000001FF&(data))

#define  LGCY_VE_MBIST_VE_BIST_FME_FAIL                                         0x1800FE98
#define  LGCY_VE_MBIST_VE_BIST_FME_FAIL_reg_addr                                 "0xB800FE98"
#define  LGCY_VE_MBIST_VE_BIST_FME_FAIL_reg                                      0xB800FE98
#define  LGCY_VE_MBIST_VE_BIST_FME_FAIL_inst_adr                                 "0x00A6"
#define  LGCY_VE_MBIST_VE_BIST_FME_FAIL_inst                                     0x00A6
#define  set_LGCY_VE_MBIST_VE_BIST_FME_FAIL_reg(data)                            (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_FME_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_BIST_FME_FAIL_reg                                  (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_FME_FAIL_reg))
#define  LGCY_VE_MBIST_VE_BIST_FME_FAIL_ve_bist_fme_fail_shift                   (0)
#define  LGCY_VE_MBIST_VE_BIST_FME_FAIL_ve_bist_fme_fail_mask                    (0x0000007F)
#define  LGCY_VE_MBIST_VE_BIST_FME_FAIL_ve_bist_fme_fail(data)                   (0x0000007F&(data))
#define  LGCY_VE_MBIST_VE_BIST_FME_FAIL_get_ve_bist_fme_fail(data)               (0x0000007F&(data))
#define  LGCY_VE_MBIST_VE_BIST_FME_FAIL_ve_bist_fme_fail_src(data)               (0x0000007F&(data))

#define  LGCY_VE_MBIST_VE_DRF_FME_FAIL                                          0x1800FE9C
#define  LGCY_VE_MBIST_VE_DRF_FME_FAIL_reg_addr                                  "0xB800FE9C"
#define  LGCY_VE_MBIST_VE_DRF_FME_FAIL_reg                                       0xB800FE9C
#define  LGCY_VE_MBIST_VE_DRF_FME_FAIL_inst_adr                                  "0x00A7"
#define  LGCY_VE_MBIST_VE_DRF_FME_FAIL_inst                                      0x00A7
#define  set_LGCY_VE_MBIST_VE_DRF_FME_FAIL_reg(data)                             (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_FME_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_DRF_FME_FAIL_reg                                   (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_FME_FAIL_reg))
#define  LGCY_VE_MBIST_VE_DRF_FME_FAIL_ve_drf_fme_fail_shift                     (0)
#define  LGCY_VE_MBIST_VE_DRF_FME_FAIL_ve_drf_fme_fail_mask                      (0x0000007F)
#define  LGCY_VE_MBIST_VE_DRF_FME_FAIL_ve_drf_fme_fail(data)                     (0x0000007F&(data))
#define  LGCY_VE_MBIST_VE_DRF_FME_FAIL_get_ve_drf_fme_fail(data)                 (0x0000007F&(data))
#define  LGCY_VE_MBIST_VE_DRF_FME_FAIL_ve_drf_fme_fail_src(data)                 (0x0000007F&(data))

#define  LGCY_VE_MBIST_VE_BIST_PRED_0_FAIL                                      0x1800FEA0
#define  LGCY_VE_MBIST_VE_BIST_PRED_0_FAIL_reg_addr                              "0xB800FEA0"
#define  LGCY_VE_MBIST_VE_BIST_PRED_0_FAIL_reg                                   0xB800FEA0
#define  LGCY_VE_MBIST_VE_BIST_PRED_0_FAIL_inst_adr                              "0x00A8"
#define  LGCY_VE_MBIST_VE_BIST_PRED_0_FAIL_inst                                  0x00A8
#define  set_LGCY_VE_MBIST_VE_BIST_PRED_0_FAIL_reg(data)                         (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_PRED_0_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_BIST_PRED_0_FAIL_reg                               (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_PRED_0_FAIL_reg))
#define  LGCY_VE_MBIST_VE_BIST_PRED_0_FAIL_ve_bist_pred_fail_shift               (0)
#define  LGCY_VE_MBIST_VE_BIST_PRED_0_FAIL_ve_bist_pred_fail_mask                (0x0000007F)
#define  LGCY_VE_MBIST_VE_BIST_PRED_0_FAIL_ve_bist_pred_fail(data)               (0x0000007F&(data))
#define  LGCY_VE_MBIST_VE_BIST_PRED_0_FAIL_get_ve_bist_pred_fail(data)           (0x0000007F&(data))
#define  LGCY_VE_MBIST_VE_BIST_PRED_0_FAIL_ve_bist_pred_fail_src(data)           (0x0000007F&(data))

#define  LGCY_VE_MBIST_VE_DRF_PRED_0_FAIL                                       0x1800FEA4
#define  LGCY_VE_MBIST_VE_DRF_PRED_0_FAIL_reg_addr                               "0xB800FEA4"
#define  LGCY_VE_MBIST_VE_DRF_PRED_0_FAIL_reg                                    0xB800FEA4
#define  LGCY_VE_MBIST_VE_DRF_PRED_0_FAIL_inst_adr                               "0x00A9"
#define  LGCY_VE_MBIST_VE_DRF_PRED_0_FAIL_inst                                   0x00A9
#define  set_LGCY_VE_MBIST_VE_DRF_PRED_0_FAIL_reg(data)                          (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_PRED_0_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_DRF_PRED_0_FAIL_reg                                (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_PRED_0_FAIL_reg))
#define  LGCY_VE_MBIST_VE_DRF_PRED_0_FAIL_ve_drf_pred_fail_shift                 (0)
#define  LGCY_VE_MBIST_VE_DRF_PRED_0_FAIL_ve_drf_pred_fail_mask                  (0x0000007F)
#define  LGCY_VE_MBIST_VE_DRF_PRED_0_FAIL_ve_drf_pred_fail(data)                 (0x0000007F&(data))
#define  LGCY_VE_MBIST_VE_DRF_PRED_0_FAIL_get_ve_drf_pred_fail(data)             (0x0000007F&(data))
#define  LGCY_VE_MBIST_VE_DRF_PRED_0_FAIL_ve_drf_pred_fail_src(data)             (0x0000007F&(data))

#define  LGCY_VE_MBIST_VE_BIST_PRED_2P_FAIL                                     0x1800FEA8
#define  LGCY_VE_MBIST_VE_BIST_PRED_2P_FAIL_reg_addr                             "0xB800FEA8"
#define  LGCY_VE_MBIST_VE_BIST_PRED_2P_FAIL_reg                                  0xB800FEA8
#define  LGCY_VE_MBIST_VE_BIST_PRED_2P_FAIL_inst_adr                             "0x00AA"
#define  LGCY_VE_MBIST_VE_BIST_PRED_2P_FAIL_inst                                 0x00AA
#define  set_LGCY_VE_MBIST_VE_BIST_PRED_2P_FAIL_reg(data)                        (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_PRED_2P_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_BIST_PRED_2P_FAIL_reg                              (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_PRED_2P_FAIL_reg))
#define  LGCY_VE_MBIST_VE_BIST_PRED_2P_FAIL_ve_bist_pred_2p_fail_shift           (0)
#define  LGCY_VE_MBIST_VE_BIST_PRED_2P_FAIL_ve_bist_pred_2p_fail_mask            (0x00000003)
#define  LGCY_VE_MBIST_VE_BIST_PRED_2P_FAIL_ve_bist_pred_2p_fail(data)           (0x00000003&(data))
#define  LGCY_VE_MBIST_VE_BIST_PRED_2P_FAIL_get_ve_bist_pred_2p_fail(data)       (0x00000003&(data))
#define  LGCY_VE_MBIST_VE_BIST_PRED_2P_FAIL_ve_bist_pred_2p_fail_src(data)       (0x00000003&(data))

#define  LGCY_VE_MBIST_VE_DRF_PRED_2P_FAIL                                      0x1800FEAC
#define  LGCY_VE_MBIST_VE_DRF_PRED_2P_FAIL_reg_addr                              "0xB800FEAC"
#define  LGCY_VE_MBIST_VE_DRF_PRED_2P_FAIL_reg                                   0xB800FEAC
#define  LGCY_VE_MBIST_VE_DRF_PRED_2P_FAIL_inst_adr                              "0x00AB"
#define  LGCY_VE_MBIST_VE_DRF_PRED_2P_FAIL_inst                                  0x00AB
#define  set_LGCY_VE_MBIST_VE_DRF_PRED_2P_FAIL_reg(data)                         (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_PRED_2P_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_DRF_PRED_2P_FAIL_reg                               (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_PRED_2P_FAIL_reg))
#define  LGCY_VE_MBIST_VE_DRF_PRED_2P_FAIL_ve_drf_pred_2p_fail_shift             (0)
#define  LGCY_VE_MBIST_VE_DRF_PRED_2P_FAIL_ve_drf_pred_2p_fail_mask              (0x00000003)
#define  LGCY_VE_MBIST_VE_DRF_PRED_2P_FAIL_ve_drf_pred_2p_fail(data)             (0x00000003&(data))
#define  LGCY_VE_MBIST_VE_DRF_PRED_2P_FAIL_get_ve_drf_pred_2p_fail(data)         (0x00000003&(data))
#define  LGCY_VE_MBIST_VE_DRF_PRED_2P_FAIL_ve_drf_pred_2p_fail_src(data)         (0x00000003&(data))

#define  LGCY_VE_MBIST_VE_BIST_IP_GC_FAIL                                       0x1800FEB0
#define  LGCY_VE_MBIST_VE_BIST_IP_GC_FAIL_reg_addr                               "0xB800FEB0"
#define  LGCY_VE_MBIST_VE_BIST_IP_GC_FAIL_reg                                    0xB800FEB0
#define  LGCY_VE_MBIST_VE_BIST_IP_GC_FAIL_inst_adr                               "0x00AC"
#define  LGCY_VE_MBIST_VE_BIST_IP_GC_FAIL_inst                                   0x00AC
#define  set_LGCY_VE_MBIST_VE_BIST_IP_GC_FAIL_reg(data)                          (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_IP_GC_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_BIST_IP_GC_FAIL_reg                                (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_IP_GC_FAIL_reg))
#define  LGCY_VE_MBIST_VE_BIST_IP_GC_FAIL_ve_bist_ip_gc_fail_shift               (0)
#define  LGCY_VE_MBIST_VE_BIST_IP_GC_FAIL_ve_bist_ip_gc_fail_mask                (0x0000007F)
#define  LGCY_VE_MBIST_VE_BIST_IP_GC_FAIL_ve_bist_ip_gc_fail(data)               (0x0000007F&(data))
#define  LGCY_VE_MBIST_VE_BIST_IP_GC_FAIL_get_ve_bist_ip_gc_fail(data)           (0x0000007F&(data))
#define  LGCY_VE_MBIST_VE_BIST_IP_GC_FAIL_ve_bist_ip_gc_fail_src(data)           (0x0000007F&(data))

#define  LGCY_VE_MBIST_VE_DRF_IP_GC_FAIL                                        0x1800FEB4
#define  LGCY_VE_MBIST_VE_DRF_IP_GC_FAIL_reg_addr                                "0xB800FEB4"
#define  LGCY_VE_MBIST_VE_DRF_IP_GC_FAIL_reg                                     0xB800FEB4
#define  LGCY_VE_MBIST_VE_DRF_IP_GC_FAIL_inst_adr                                "0x00AD"
#define  LGCY_VE_MBIST_VE_DRF_IP_GC_FAIL_inst                                    0x00AD
#define  set_LGCY_VE_MBIST_VE_DRF_IP_GC_FAIL_reg(data)                           (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_IP_GC_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_DRF_IP_GC_FAIL_reg                                 (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_IP_GC_FAIL_reg))
#define  LGCY_VE_MBIST_VE_DRF_IP_GC_FAIL_ve_drf_ip_gc_fail_shift                 (0)
#define  LGCY_VE_MBIST_VE_DRF_IP_GC_FAIL_ve_drf_ip_gc_fail_mask                  (0x0000007F)
#define  LGCY_VE_MBIST_VE_DRF_IP_GC_FAIL_ve_drf_ip_gc_fail(data)                 (0x0000007F&(data))
#define  LGCY_VE_MBIST_VE_DRF_IP_GC_FAIL_get_ve_drf_ip_gc_fail(data)             (0x0000007F&(data))
#define  LGCY_VE_MBIST_VE_DRF_IP_GC_FAIL_ve_drf_ip_gc_fail_src(data)             (0x0000007F&(data))

#define  LGCY_VE_MBIST_VE_BIST_DMEM_FAIL                                        0x1800FEB8
#define  LGCY_VE_MBIST_VE_BIST_DMEM_FAIL_reg_addr                                "0xB800FEB8"
#define  LGCY_VE_MBIST_VE_BIST_DMEM_FAIL_reg                                     0xB800FEB8
#define  LGCY_VE_MBIST_VE_BIST_DMEM_FAIL_inst_adr                                "0x00AE"
#define  LGCY_VE_MBIST_VE_BIST_DMEM_FAIL_inst                                    0x00AE
#define  set_LGCY_VE_MBIST_VE_BIST_DMEM_FAIL_reg(data)                           (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_DMEM_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_BIST_DMEM_FAIL_reg                                 (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_DMEM_FAIL_reg))
#define  LGCY_VE_MBIST_VE_BIST_DMEM_FAIL_ve_bist_dmem_fail_shift                 (0)
#define  LGCY_VE_MBIST_VE_BIST_DMEM_FAIL_ve_bist_dmem_fail_mask                  (0x00000003)
#define  LGCY_VE_MBIST_VE_BIST_DMEM_FAIL_ve_bist_dmem_fail(data)                 (0x00000003&(data))
#define  LGCY_VE_MBIST_VE_BIST_DMEM_FAIL_get_ve_bist_dmem_fail(data)             (0x00000003&(data))
#define  LGCY_VE_MBIST_VE_BIST_DMEM_FAIL_ve_bist_dmem_fail_src(data)             (0x00000003&(data))

#define  LGCY_VE_MBIST_VE_DRF_DMEM_FAIL                                         0x1800FEBC
#define  LGCY_VE_MBIST_VE_DRF_DMEM_FAIL_reg_addr                                 "0xB800FEBC"
#define  LGCY_VE_MBIST_VE_DRF_DMEM_FAIL_reg                                      0xB800FEBC
#define  LGCY_VE_MBIST_VE_DRF_DMEM_FAIL_inst_adr                                 "0x00AF"
#define  LGCY_VE_MBIST_VE_DRF_DMEM_FAIL_inst                                     0x00AF
#define  set_LGCY_VE_MBIST_VE_DRF_DMEM_FAIL_reg(data)                            (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_DMEM_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_DRF_DMEM_FAIL_reg                                  (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_DMEM_FAIL_reg))
#define  LGCY_VE_MBIST_VE_DRF_DMEM_FAIL_ve_drf_dmem_fail_shift                   (0)
#define  LGCY_VE_MBIST_VE_DRF_DMEM_FAIL_ve_drf_dmem_fail_mask                    (0x00000003)
#define  LGCY_VE_MBIST_VE_DRF_DMEM_FAIL_ve_drf_dmem_fail(data)                   (0x00000003&(data))
#define  LGCY_VE_MBIST_VE_DRF_DMEM_FAIL_get_ve_drf_dmem_fail(data)               (0x00000003&(data))
#define  LGCY_VE_MBIST_VE_DRF_DMEM_FAIL_ve_drf_dmem_fail_src(data)               (0x00000003&(data))

#define  LGCY_VE_MBIST_VE_BIST_CMPRS_FAIL                                       0x1800FEC0
#define  LGCY_VE_MBIST_VE_BIST_CMPRS_FAIL_reg_addr                               "0xB800FEC0"
#define  LGCY_VE_MBIST_VE_BIST_CMPRS_FAIL_reg                                    0xB800FEC0
#define  LGCY_VE_MBIST_VE_BIST_CMPRS_FAIL_inst_adr                               "0x00B0"
#define  LGCY_VE_MBIST_VE_BIST_CMPRS_FAIL_inst                                   0x00B0
#define  set_LGCY_VE_MBIST_VE_BIST_CMPRS_FAIL_reg(data)                          (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_CMPRS_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_BIST_CMPRS_FAIL_reg                                (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_CMPRS_FAIL_reg))
#define  LGCY_VE_MBIST_VE_BIST_CMPRS_FAIL_ve_bist_cmprs_fail_shift               (0)
#define  LGCY_VE_MBIST_VE_BIST_CMPRS_FAIL_ve_bist_cmprs_fail_mask                (0x0000001F)
#define  LGCY_VE_MBIST_VE_BIST_CMPRS_FAIL_ve_bist_cmprs_fail(data)               (0x0000001F&(data))
#define  LGCY_VE_MBIST_VE_BIST_CMPRS_FAIL_get_ve_bist_cmprs_fail(data)           (0x0000001F&(data))
#define  LGCY_VE_MBIST_VE_BIST_CMPRS_FAIL_ve_bist_cmprs_fail_src(data)           (0x0000001F&(data))

#define  LGCY_VE_MBIST_VE_DRF_CMPRS_FAIL                                        0x1800FEC4
#define  LGCY_VE_MBIST_VE_DRF_CMPRS_FAIL_reg_addr                                "0xB800FEC4"
#define  LGCY_VE_MBIST_VE_DRF_CMPRS_FAIL_reg                                     0xB800FEC4
#define  LGCY_VE_MBIST_VE_DRF_CMPRS_FAIL_inst_adr                                "0x00B1"
#define  LGCY_VE_MBIST_VE_DRF_CMPRS_FAIL_inst                                    0x00B1
#define  set_LGCY_VE_MBIST_VE_DRF_CMPRS_FAIL_reg(data)                           (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_CMPRS_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_DRF_CMPRS_FAIL_reg                                 (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_CMPRS_FAIL_reg))
#define  LGCY_VE_MBIST_VE_DRF_CMPRS_FAIL_ve_drf_cmprs_fail_shift                 (0)
#define  LGCY_VE_MBIST_VE_DRF_CMPRS_FAIL_ve_drf_cmprs_fail_mask                  (0x0000001F)
#define  LGCY_VE_MBIST_VE_DRF_CMPRS_FAIL_ve_drf_cmprs_fail(data)                 (0x0000001F&(data))
#define  LGCY_VE_MBIST_VE_DRF_CMPRS_FAIL_get_ve_drf_cmprs_fail(data)             (0x0000001F&(data))
#define  LGCY_VE_MBIST_VE_DRF_CMPRS_FAIL_ve_drf_cmprs_fail_src(data)             (0x0000001F&(data))

#define  LGCY_VE_MBIST_VE_BIST_IME_FAIL                                         0x1800FEC8
#define  LGCY_VE_MBIST_VE_BIST_IME_FAIL_reg_addr                                 "0xB800FEC8"
#define  LGCY_VE_MBIST_VE_BIST_IME_FAIL_reg                                      0xB800FEC8
#define  LGCY_VE_MBIST_VE_BIST_IME_FAIL_inst_adr                                 "0x00B2"
#define  LGCY_VE_MBIST_VE_BIST_IME_FAIL_inst                                     0x00B2
#define  set_LGCY_VE_MBIST_VE_BIST_IME_FAIL_reg(data)                            (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_IME_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_BIST_IME_FAIL_reg                                  (*((volatile unsigned int*)LGCY_VE_MBIST_VE_BIST_IME_FAIL_reg))
#define  LGCY_VE_MBIST_VE_BIST_IME_FAIL_ve_bist_ime_fail_shift                   (0)
#define  LGCY_VE_MBIST_VE_BIST_IME_FAIL_ve_bist_ime_fail_mask                    (0x0000000F)
#define  LGCY_VE_MBIST_VE_BIST_IME_FAIL_ve_bist_ime_fail(data)                   (0x0000000F&(data))
#define  LGCY_VE_MBIST_VE_BIST_IME_FAIL_get_ve_bist_ime_fail(data)               (0x0000000F&(data))
#define  LGCY_VE_MBIST_VE_BIST_IME_FAIL_ve_bist_ime_fail_src(data)               (0x0000000F&(data))

#define  LGCY_VE_MBIST_VE_DRF_IME_FAIL                                          0x1800FECC
#define  LGCY_VE_MBIST_VE_DRF_IME_FAIL_reg_addr                                  "0xB800FECC"
#define  LGCY_VE_MBIST_VE_DRF_IME_FAIL_reg                                       0xB800FECC
#define  LGCY_VE_MBIST_VE_DRF_IME_FAIL_inst_adr                                  "0x00B3"
#define  LGCY_VE_MBIST_VE_DRF_IME_FAIL_inst                                      0x00B3
#define  set_LGCY_VE_MBIST_VE_DRF_IME_FAIL_reg(data)                             (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_IME_FAIL_reg)=data)
#define  get_LGCY_VE_MBIST_VE_DRF_IME_FAIL_reg                                   (*((volatile unsigned int*)LGCY_VE_MBIST_VE_DRF_IME_FAIL_reg))
#define  LGCY_VE_MBIST_VE_DRF_IME_FAIL_ve_drf_ime_fail_shift                     (0)
#define  LGCY_VE_MBIST_VE_DRF_IME_FAIL_ve_drf_ime_fail_mask                      (0x0000000F)
#define  LGCY_VE_MBIST_VE_DRF_IME_FAIL_ve_drf_ime_fail(data)                     (0x0000000F&(data))
#define  LGCY_VE_MBIST_VE_DRF_IME_FAIL_get_ve_drf_ime_fail(data)                 (0x0000000F&(data))
#define  LGCY_VE_MBIST_VE_DRF_IME_FAIL_ve_drf_ime_fail_src(data)                 (0x0000000F&(data))

#define  VE_MBIST_VE_BIST_RM                                                    0x1800FF00
#define  VE_MBIST_VE_BIST_RM_reg_addr                                            "0xB800FF00"
#define  VE_MBIST_VE_BIST_RM_reg                                                 0xB800FF00
#define  VE_MBIST_VE_BIST_RM_inst_adr                                            "0x00C0"
#define  VE_MBIST_VE_BIST_RM_inst                                                0x00C0
#define  set_VE_MBIST_VE_BIST_RM_reg(data)                                       (*((volatile unsigned int*)VE_MBIST_VE_BIST_RM_reg)=data)
#define  get_VE_MBIST_VE_BIST_RM_reg                                             (*((volatile unsigned int*)VE_MBIST_VE_BIST_RM_reg))
#define  VE_MBIST_VE_BIST_RM_TEST_RWM_shift                                      (31)
#define  VE_MBIST_VE_BIST_RM_TEST1_shift                                         (30)
#define  VE_MBIST_VE_BIST_RM_SYSH_RMEA_shift                                     (29)
#define  VE_MBIST_VE_BIST_RM_SYSH_RMA_shift                                      (25)
#define  VE_MBIST_VE_BIST_RM_SYSH_RMEB_shift                                     (24)
#define  VE_MBIST_VE_BIST_RM_SYSH_RMB_shift                                      (20)
#define  VE_MBIST_VE_BIST_RM_SYSH_RME_shift                                      (19)
#define  VE_MBIST_VE_BIST_RM_SYSH_RM_shift                                       (15)
#define  VE_MBIST_VE_BIST_RM_RMEA_shift                                          (14)
#define  VE_MBIST_VE_BIST_RM_RMA_shift                                           (10)
#define  VE_MBIST_VE_BIST_RM_RMEB_shift                                          (9)
#define  VE_MBIST_VE_BIST_RM_RMB_shift                                           (5)
#define  VE_MBIST_VE_BIST_RM_RME_shift                                           (4)
#define  VE_MBIST_VE_BIST_RM_RM_shift                                            (0)
#define  VE_MBIST_VE_BIST_RM_TEST_RWM_mask                                       (0x80000000)
#define  VE_MBIST_VE_BIST_RM_TEST1_mask                                          (0x40000000)
#define  VE_MBIST_VE_BIST_RM_SYSH_RMEA_mask                                      (0x20000000)
#define  VE_MBIST_VE_BIST_RM_SYSH_RMA_mask                                       (0x1E000000)
#define  VE_MBIST_VE_BIST_RM_SYSH_RMEB_mask                                      (0x01000000)
#define  VE_MBIST_VE_BIST_RM_SYSH_RMB_mask                                       (0x00F00000)
#define  VE_MBIST_VE_BIST_RM_SYSH_RME_mask                                       (0x00080000)
#define  VE_MBIST_VE_BIST_RM_SYSH_RM_mask                                        (0x00078000)
#define  VE_MBIST_VE_BIST_RM_RMEA_mask                                           (0x00004000)
#define  VE_MBIST_VE_BIST_RM_RMA_mask                                            (0x00003C00)
#define  VE_MBIST_VE_BIST_RM_RMEB_mask                                           (0x00000200)
#define  VE_MBIST_VE_BIST_RM_RMB_mask                                            (0x000001E0)
#define  VE_MBIST_VE_BIST_RM_RME_mask                                            (0x00000010)
#define  VE_MBIST_VE_BIST_RM_RM_mask                                             (0x0000000F)
#define  VE_MBIST_VE_BIST_RM_TEST_RWM(data)                                      (0x80000000&((data)<<31))
#define  VE_MBIST_VE_BIST_RM_TEST1(data)                                         (0x40000000&((data)<<30))
#define  VE_MBIST_VE_BIST_RM_SYSH_RMEA(data)                                     (0x20000000&((data)<<29))
#define  VE_MBIST_VE_BIST_RM_SYSH_RMA(data)                                      (0x1E000000&((data)<<25))
#define  VE_MBIST_VE_BIST_RM_SYSH_RMEB(data)                                     (0x01000000&((data)<<24))
#define  VE_MBIST_VE_BIST_RM_SYSH_RMB(data)                                      (0x00F00000&((data)<<20))
#define  VE_MBIST_VE_BIST_RM_SYSH_RME(data)                                      (0x00080000&((data)<<19))
#define  VE_MBIST_VE_BIST_RM_SYSH_RM(data)                                       (0x00078000&((data)<<15))
#define  VE_MBIST_VE_BIST_RM_RMEA(data)                                          (0x00004000&((data)<<14))
#define  VE_MBIST_VE_BIST_RM_RMA(data)                                           (0x00003C00&((data)<<10))
#define  VE_MBIST_VE_BIST_RM_RMEB(data)                                          (0x00000200&((data)<<9))
#define  VE_MBIST_VE_BIST_RM_RMB(data)                                           (0x000001E0&((data)<<5))
#define  VE_MBIST_VE_BIST_RM_RME(data)                                           (0x00000010&((data)<<4))
#define  VE_MBIST_VE_BIST_RM_RM(data)                                            (0x0000000F&(data))
#define  VE_MBIST_VE_BIST_RM_get_TEST_RWM(data)                                  ((0x80000000&(data))>>31)
#define  VE_MBIST_VE_BIST_RM_get_TEST1(data)                                     ((0x40000000&(data))>>30)
#define  VE_MBIST_VE_BIST_RM_get_SYSH_RMEA(data)                                 ((0x20000000&(data))>>29)
#define  VE_MBIST_VE_BIST_RM_get_SYSH_RMA(data)                                  ((0x1E000000&(data))>>25)
#define  VE_MBIST_VE_BIST_RM_get_SYSH_RMEB(data)                                 ((0x01000000&(data))>>24)
#define  VE_MBIST_VE_BIST_RM_get_SYSH_RMB(data)                                  ((0x00F00000&(data))>>20)
#define  VE_MBIST_VE_BIST_RM_get_SYSH_RME(data)                                  ((0x00080000&(data))>>19)
#define  VE_MBIST_VE_BIST_RM_get_SYSH_RM(data)                                   ((0x00078000&(data))>>15)
#define  VE_MBIST_VE_BIST_RM_get_RMEA(data)                                      ((0x00004000&(data))>>14)
#define  VE_MBIST_VE_BIST_RM_get_RMA(data)                                       ((0x00003C00&(data))>>10)
#define  VE_MBIST_VE_BIST_RM_get_RMEB(data)                                      ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_BIST_RM_get_RMB(data)                                       ((0x000001E0&(data))>>5)
#define  VE_MBIST_VE_BIST_RM_get_RME(data)                                       ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_BIST_RM_get_RM(data)                                        (0x0000000F&(data))
#define  VE_MBIST_VE_BIST_RM_TEST_RWM_src(data)                                  ((0x80000000&(data))>>31)
#define  VE_MBIST_VE_BIST_RM_TEST1_src(data)                                     ((0x40000000&(data))>>30)
#define  VE_MBIST_VE_BIST_RM_SYSH_RMEA_src(data)                                 ((0x20000000&(data))>>29)
#define  VE_MBIST_VE_BIST_RM_SYSH_RMA_src(data)                                  ((0x1E000000&(data))>>25)
#define  VE_MBIST_VE_BIST_RM_SYSH_RMEB_src(data)                                 ((0x01000000&(data))>>24)
#define  VE_MBIST_VE_BIST_RM_SYSH_RMB_src(data)                                  ((0x00F00000&(data))>>20)
#define  VE_MBIST_VE_BIST_RM_SYSH_RME_src(data)                                  ((0x00080000&(data))>>19)
#define  VE_MBIST_VE_BIST_RM_SYSH_RM_src(data)                                   ((0x00078000&(data))>>15)
#define  VE_MBIST_VE_BIST_RM_RMEA_src(data)                                      ((0x00004000&(data))>>14)
#define  VE_MBIST_VE_BIST_RM_RMA_src(data)                                       ((0x00003C00&(data))>>10)
#define  VE_MBIST_VE_BIST_RM_RMEB_src(data)                                      ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_BIST_RM_RMB_src(data)                                       ((0x000001E0&(data))>>5)
#define  VE_MBIST_VE_BIST_RM_RME_src(data)                                       ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_BIST_RM_RM_src(data)                                        (0x0000000F&(data))

#define  VE_MBIST_VE_BIST_LS_0                                                  0x1800FF44
#define  VE_MBIST_VE_BIST_LS_0_reg_addr                                          "0xB800FF44"
#define  VE_MBIST_VE_BIST_LS_0_reg                                               0xB800FF44
#define  VE_MBIST_VE_BIST_LS_0_inst_adr                                          "0x00D1"
#define  VE_MBIST_VE_BIST_LS_0_inst                                              0x00D1
#define  set_VE_MBIST_VE_BIST_LS_0_reg(data)                                     (*((volatile unsigned int*)VE_MBIST_VE_BIST_LS_0_reg)=data)
#define  get_VE_MBIST_VE_BIST_LS_0_reg                                           (*((volatile unsigned int*)VE_MBIST_VE_BIST_LS_0_reg))
#define  VE_MBIST_VE_BIST_LS_0_dcmprs_ls_shift                                   (30)
#define  VE_MBIST_VE_BIST_LS_0_cmprs_ls_shift                                    (28)
#define  VE_MBIST_VE_BIST_LS_0_ndb_ls_shift                                      (26)
#define  VE_MBIST_VE_BIST_LS_0_bs_ls_shift                                       (24)
#define  VE_MBIST_VE_BIST_LS_0_rif_ls_shift                                      (22)
#define  VE_MBIST_VE_BIST_LS_0_brg_ls_shift                                      (20)
#define  VE_MBIST_VE_BIST_LS_0_vmem_ls_shift                                     (18)
#define  VE_MBIST_VE_BIST_LS_0_sao_ls_shift                                      (16)
#define  VE_MBIST_VE_BIST_LS_0_deblk_ls_shift                                    (14)
#define  VE_MBIST_VE_BIST_LS_0_pred_ls_shift                                     (12)
#define  VE_MBIST_VE_BIST_LS_0_cache_ls_shift                                    (10)
#define  VE_MBIST_VE_BIST_LS_0_rl_ls_shift                                       (8)
#define  VE_MBIST_VE_BIST_LS_0_cm_ls_shift                                       (6)
#define  VE_MBIST_VE_BIST_LS_0_itblk_ls_shift                                    (4)
#define  VE_MBIST_VE_BIST_LS_0_mvd_ls_shift                                      (2)
#define  VE_MBIST_VE_BIST_LS_0_vld_ls_shift                                      (0)
#define  VE_MBIST_VE_BIST_LS_0_dcmprs_ls_mask                                    (0xC0000000)
#define  VE_MBIST_VE_BIST_LS_0_cmprs_ls_mask                                     (0x30000000)
#define  VE_MBIST_VE_BIST_LS_0_ndb_ls_mask                                       (0x0C000000)
#define  VE_MBIST_VE_BIST_LS_0_bs_ls_mask                                        (0x03000000)
#define  VE_MBIST_VE_BIST_LS_0_rif_ls_mask                                       (0x00C00000)
#define  VE_MBIST_VE_BIST_LS_0_brg_ls_mask                                       (0x00300000)
#define  VE_MBIST_VE_BIST_LS_0_vmem_ls_mask                                      (0x000C0000)
#define  VE_MBIST_VE_BIST_LS_0_sao_ls_mask                                       (0x00030000)
#define  VE_MBIST_VE_BIST_LS_0_deblk_ls_mask                                     (0x0000C000)
#define  VE_MBIST_VE_BIST_LS_0_pred_ls_mask                                      (0x00003000)
#define  VE_MBIST_VE_BIST_LS_0_cache_ls_mask                                     (0x00000C00)
#define  VE_MBIST_VE_BIST_LS_0_rl_ls_mask                                        (0x00000300)
#define  VE_MBIST_VE_BIST_LS_0_cm_ls_mask                                        (0x000000C0)
#define  VE_MBIST_VE_BIST_LS_0_itblk_ls_mask                                     (0x00000030)
#define  VE_MBIST_VE_BIST_LS_0_mvd_ls_mask                                       (0x0000000C)
#define  VE_MBIST_VE_BIST_LS_0_vld_ls_mask                                       (0x00000003)
#define  VE_MBIST_VE_BIST_LS_0_dcmprs_ls(data)                                   (0xC0000000&((data)<<30))
#define  VE_MBIST_VE_BIST_LS_0_cmprs_ls(data)                                    (0x30000000&((data)<<28))
#define  VE_MBIST_VE_BIST_LS_0_ndb_ls(data)                                      (0x0C000000&((data)<<26))
#define  VE_MBIST_VE_BIST_LS_0_bs_ls(data)                                       (0x03000000&((data)<<24))
#define  VE_MBIST_VE_BIST_LS_0_rif_ls(data)                                      (0x00C00000&((data)<<22))
#define  VE_MBIST_VE_BIST_LS_0_brg_ls(data)                                      (0x00300000&((data)<<20))
#define  VE_MBIST_VE_BIST_LS_0_vmem_ls(data)                                     (0x000C0000&((data)<<18))
#define  VE_MBIST_VE_BIST_LS_0_sao_ls(data)                                      (0x00030000&((data)<<16))
#define  VE_MBIST_VE_BIST_LS_0_deblk_ls(data)                                    (0x0000C000&((data)<<14))
#define  VE_MBIST_VE_BIST_LS_0_pred_ls(data)                                     (0x00003000&((data)<<12))
#define  VE_MBIST_VE_BIST_LS_0_cache_ls(data)                                    (0x00000C00&((data)<<10))
#define  VE_MBIST_VE_BIST_LS_0_rl_ls(data)                                       (0x00000300&((data)<<8))
#define  VE_MBIST_VE_BIST_LS_0_cm_ls(data)                                       (0x000000C0&((data)<<6))
#define  VE_MBIST_VE_BIST_LS_0_itblk_ls(data)                                    (0x00000030&((data)<<4))
#define  VE_MBIST_VE_BIST_LS_0_mvd_ls(data)                                      (0x0000000C&((data)<<2))
#define  VE_MBIST_VE_BIST_LS_0_vld_ls(data)                                      (0x00000003&(data))
#define  VE_MBIST_VE_BIST_LS_0_get_dcmprs_ls(data)                               ((0xC0000000&(data))>>30)
#define  VE_MBIST_VE_BIST_LS_0_get_cmprs_ls(data)                                ((0x30000000&(data))>>28)
#define  VE_MBIST_VE_BIST_LS_0_get_ndb_ls(data)                                  ((0x0C000000&(data))>>26)
#define  VE_MBIST_VE_BIST_LS_0_get_bs_ls(data)                                   ((0x03000000&(data))>>24)
#define  VE_MBIST_VE_BIST_LS_0_get_rif_ls(data)                                  ((0x00C00000&(data))>>22)
#define  VE_MBIST_VE_BIST_LS_0_get_brg_ls(data)                                  ((0x00300000&(data))>>20)
#define  VE_MBIST_VE_BIST_LS_0_get_vmem_ls(data)                                 ((0x000C0000&(data))>>18)
#define  VE_MBIST_VE_BIST_LS_0_get_sao_ls(data)                                  ((0x00030000&(data))>>16)
#define  VE_MBIST_VE_BIST_LS_0_get_deblk_ls(data)                                ((0x0000C000&(data))>>14)
#define  VE_MBIST_VE_BIST_LS_0_get_pred_ls(data)                                 ((0x00003000&(data))>>12)
#define  VE_MBIST_VE_BIST_LS_0_get_cache_ls(data)                                ((0x00000C00&(data))>>10)
#define  VE_MBIST_VE_BIST_LS_0_get_rl_ls(data)                                   ((0x00000300&(data))>>8)
#define  VE_MBIST_VE_BIST_LS_0_get_cm_ls(data)                                   ((0x000000C0&(data))>>6)
#define  VE_MBIST_VE_BIST_LS_0_get_itblk_ls(data)                                ((0x00000030&(data))>>4)
#define  VE_MBIST_VE_BIST_LS_0_get_mvd_ls(data)                                  ((0x0000000C&(data))>>2)
#define  VE_MBIST_VE_BIST_LS_0_get_vld_ls(data)                                  (0x00000003&(data))
#define  VE_MBIST_VE_BIST_LS_0_dcmprs_ls_src(data)                               ((0xC0000000&(data))>>30)
#define  VE_MBIST_VE_BIST_LS_0_cmprs_ls_src(data)                                ((0x30000000&(data))>>28)
#define  VE_MBIST_VE_BIST_LS_0_ndb_ls_src(data)                                  ((0x0C000000&(data))>>26)
#define  VE_MBIST_VE_BIST_LS_0_bs_ls_src(data)                                   ((0x03000000&(data))>>24)
#define  VE_MBIST_VE_BIST_LS_0_rif_ls_src(data)                                  ((0x00C00000&(data))>>22)
#define  VE_MBIST_VE_BIST_LS_0_brg_ls_src(data)                                  ((0x00300000&(data))>>20)
#define  VE_MBIST_VE_BIST_LS_0_vmem_ls_src(data)                                 ((0x000C0000&(data))>>18)
#define  VE_MBIST_VE_BIST_LS_0_sao_ls_src(data)                                  ((0x00030000&(data))>>16)
#define  VE_MBIST_VE_BIST_LS_0_deblk_ls_src(data)                                ((0x0000C000&(data))>>14)
#define  VE_MBIST_VE_BIST_LS_0_pred_ls_src(data)                                 ((0x00003000&(data))>>12)
#define  VE_MBIST_VE_BIST_LS_0_cache_ls_src(data)                                ((0x00000C00&(data))>>10)
#define  VE_MBIST_VE_BIST_LS_0_rl_ls_src(data)                                   ((0x00000300&(data))>>8)
#define  VE_MBIST_VE_BIST_LS_0_cm_ls_src(data)                                   ((0x000000C0&(data))>>6)
#define  VE_MBIST_VE_BIST_LS_0_itblk_ls_src(data)                                ((0x00000030&(data))>>4)
#define  VE_MBIST_VE_BIST_LS_0_mvd_ls_src(data)                                  ((0x0000000C&(data))>>2)
#define  VE_MBIST_VE_BIST_LS_0_vld_ls_src(data)                                  (0x00000003&(data))

#define  VE_MBIST_VE_BIST_MODE0                                                 0x1800FF04
#define  VE_MBIST_VE_BIST_MODE0_reg_addr                                         "0xB800FF04"
#define  VE_MBIST_VE_BIST_MODE0_reg                                              0xB800FF04
#define  VE_MBIST_VE_BIST_MODE0_inst_adr                                         "0x00C1"
#define  VE_MBIST_VE_BIST_MODE0_inst                                             0x00C1
#define  set_VE_MBIST_VE_BIST_MODE0_reg(data)                                    (*((volatile unsigned int*)VE_MBIST_VE_BIST_MODE0_reg)=data)
#define  get_VE_MBIST_VE_BIST_MODE0_reg                                          (*((volatile unsigned int*)VE_MBIST_VE_BIST_MODE0_reg))
#define  VE_MBIST_VE_BIST_MODE0_ve_mf2_bist_en_shift                             (31)
#define  VE_MBIST_VE_BIST_MODE0_ve_mf1_bist_en_shift                             (30)
#define  VE_MBIST_VE_BIST_MODE0_ve_mf0_bist_en_shift                             (29)
#define  VE_MBIST_VE_BIST_MODE0_ve_p2mvd_bist_en_shift                           (28)
#define  VE_MBIST_VE_BIST_MODE0_ve_vld_1_bist_en_shift                           (27)
#define  VE_MBIST_VE_BIST_MODE0_ve_p2_bist_en_shift                              (26)
#define  VE_MBIST_VE_BIST_MODE0_ve_clmp_bist_en_shift                            (25)
#define  VE_MBIST_VE_BIST_MODE0_ve_dcmprs_outbuf_bist_en_shift                   (24)
#define  VE_MBIST_VE_BIST_MODE0_ve_pred_3_bist_en_shift                          (23)
#define  VE_MBIST_VE_BIST_MODE0_ve_pred_2_bist_en_shift                          (22)
#define  VE_MBIST_VE_BIST_MODE0_ve_pred_1_bist_en_shift                          (21)
#define  VE_MBIST_VE_BIST_MODE0_ve_pred_0_bist_en_shift                          (20)
#define  VE_MBIST_VE_BIST_MODE0_ve_cah_2p_1_bist_en_shift                        (19)
#define  VE_MBIST_VE_BIST_MODE0_ve_cah_2p_0_bist_en_shift                        (18)
#define  VE_MBIST_VE_BIST_MODE0_ve_cah_1p_bist_en_shift                          (17)
#define  VE_MBIST_VE_BIST_MODE0_ve_dcmprs_bist_en_shift                          (16)
#define  VE_MBIST_VE_BIST_MODE0_ve_cmprs_bist_en_shift                           (15)
#define  VE_MBIST_VE_BIST_MODE0_ve_dbk_bist_en_shift                             (14)
#define  VE_MBIST_VE_BIST_MODE0_ve_seg_mvd_bist_en_shift                         (13)
#define  VE_MBIST_VE_BIST_MODE0_ve_rlrmem_mvbuf_bist_en_shift                    (12)
#define  VE_MBIST_VE_BIST_MODE0_ve_cm2_bist_en_shift                             (11)
#define  VE_MBIST_VE_BIST_MODE0_ve_cm1_bist_en_shift                             (10)
#define  VE_MBIST_VE_BIST_MODE0_ve_brg_bist_en_shift                             (9)
#define  VE_MBIST_VE_BIST_MODE0_ve_sao_bist_en_shift                             (8)
#define  VE_MBIST_VE_BIST_MODE0_ve_it_bs_bist_en_shift                           (7)
#define  VE_MBIST_VE_BIST_MODE0_ve_it_1_bist_en_shift                            (6)
#define  VE_MBIST_VE_BIST_MODE0_ve_it_0_1_bist_en_shift                          (5)
#define  VE_MBIST_VE_BIST_MODE0_ve_it_0_0_bist_en_shift                          (4)
#define  VE_MBIST_VE_BIST_MODE0_ve_vm_1_bist_en_shift                            (3)
#define  VE_MBIST_VE_BIST_MODE0_ve_vm_0_bist_en_shift                            (2)
#define  VE_MBIST_VE_BIST_MODE0_ve_vld_0_bist_en_shift                           (1)
#define  VE_MBIST_VE_BIST_MODE0_ve_rif_bist_en_shift                             (0)
#define  VE_MBIST_VE_BIST_MODE0_ve_mf2_bist_en_mask                              (0x80000000)
#define  VE_MBIST_VE_BIST_MODE0_ve_mf1_bist_en_mask                              (0x40000000)
#define  VE_MBIST_VE_BIST_MODE0_ve_mf0_bist_en_mask                              (0x20000000)
#define  VE_MBIST_VE_BIST_MODE0_ve_p2mvd_bist_en_mask                            (0x10000000)
#define  VE_MBIST_VE_BIST_MODE0_ve_vld_1_bist_en_mask                            (0x08000000)
#define  VE_MBIST_VE_BIST_MODE0_ve_p2_bist_en_mask                               (0x04000000)
#define  VE_MBIST_VE_BIST_MODE0_ve_clmp_bist_en_mask                             (0x02000000)
#define  VE_MBIST_VE_BIST_MODE0_ve_dcmprs_outbuf_bist_en_mask                    (0x01000000)
#define  VE_MBIST_VE_BIST_MODE0_ve_pred_3_bist_en_mask                           (0x00800000)
#define  VE_MBIST_VE_BIST_MODE0_ve_pred_2_bist_en_mask                           (0x00400000)
#define  VE_MBIST_VE_BIST_MODE0_ve_pred_1_bist_en_mask                           (0x00200000)
#define  VE_MBIST_VE_BIST_MODE0_ve_pred_0_bist_en_mask                           (0x00100000)
#define  VE_MBIST_VE_BIST_MODE0_ve_cah_2p_1_bist_en_mask                         (0x00080000)
#define  VE_MBIST_VE_BIST_MODE0_ve_cah_2p_0_bist_en_mask                         (0x00040000)
#define  VE_MBIST_VE_BIST_MODE0_ve_cah_1p_bist_en_mask                           (0x00020000)
#define  VE_MBIST_VE_BIST_MODE0_ve_dcmprs_bist_en_mask                           (0x00010000)
#define  VE_MBIST_VE_BIST_MODE0_ve_cmprs_bist_en_mask                            (0x00008000)
#define  VE_MBIST_VE_BIST_MODE0_ve_dbk_bist_en_mask                              (0x00004000)
#define  VE_MBIST_VE_BIST_MODE0_ve_seg_mvd_bist_en_mask                          (0x00002000)
#define  VE_MBIST_VE_BIST_MODE0_ve_rlrmem_mvbuf_bist_en_mask                     (0x00001000)
#define  VE_MBIST_VE_BIST_MODE0_ve_cm2_bist_en_mask                              (0x00000800)
#define  VE_MBIST_VE_BIST_MODE0_ve_cm1_bist_en_mask                              (0x00000400)
#define  VE_MBIST_VE_BIST_MODE0_ve_brg_bist_en_mask                              (0x00000200)
#define  VE_MBIST_VE_BIST_MODE0_ve_sao_bist_en_mask                              (0x00000100)
#define  VE_MBIST_VE_BIST_MODE0_ve_it_bs_bist_en_mask                            (0x00000080)
#define  VE_MBIST_VE_BIST_MODE0_ve_it_1_bist_en_mask                             (0x00000040)
#define  VE_MBIST_VE_BIST_MODE0_ve_it_0_1_bist_en_mask                           (0x00000020)
#define  VE_MBIST_VE_BIST_MODE0_ve_it_0_0_bist_en_mask                           (0x00000010)
#define  VE_MBIST_VE_BIST_MODE0_ve_vm_1_bist_en_mask                             (0x00000008)
#define  VE_MBIST_VE_BIST_MODE0_ve_vm_0_bist_en_mask                             (0x00000004)
#define  VE_MBIST_VE_BIST_MODE0_ve_vld_0_bist_en_mask                            (0x00000002)
#define  VE_MBIST_VE_BIST_MODE0_ve_rif_bist_en_mask                              (0x00000001)
#define  VE_MBIST_VE_BIST_MODE0_ve_mf2_bist_en(data)                             (0x80000000&((data)<<31))
#define  VE_MBIST_VE_BIST_MODE0_ve_mf1_bist_en(data)                             (0x40000000&((data)<<30))
#define  VE_MBIST_VE_BIST_MODE0_ve_mf0_bist_en(data)                             (0x20000000&((data)<<29))
#define  VE_MBIST_VE_BIST_MODE0_ve_p2mvd_bist_en(data)                           (0x10000000&((data)<<28))
#define  VE_MBIST_VE_BIST_MODE0_ve_vld_1_bist_en(data)                           (0x08000000&((data)<<27))
#define  VE_MBIST_VE_BIST_MODE0_ve_p2_bist_en(data)                              (0x04000000&((data)<<26))
#define  VE_MBIST_VE_BIST_MODE0_ve_clmp_bist_en(data)                            (0x02000000&((data)<<25))
#define  VE_MBIST_VE_BIST_MODE0_ve_dcmprs_outbuf_bist_en(data)                   (0x01000000&((data)<<24))
#define  VE_MBIST_VE_BIST_MODE0_ve_pred_3_bist_en(data)                          (0x00800000&((data)<<23))
#define  VE_MBIST_VE_BIST_MODE0_ve_pred_2_bist_en(data)                          (0x00400000&((data)<<22))
#define  VE_MBIST_VE_BIST_MODE0_ve_pred_1_bist_en(data)                          (0x00200000&((data)<<21))
#define  VE_MBIST_VE_BIST_MODE0_ve_pred_0_bist_en(data)                          (0x00100000&((data)<<20))
#define  VE_MBIST_VE_BIST_MODE0_ve_cah_2p_1_bist_en(data)                        (0x00080000&((data)<<19))
#define  VE_MBIST_VE_BIST_MODE0_ve_cah_2p_0_bist_en(data)                        (0x00040000&((data)<<18))
#define  VE_MBIST_VE_BIST_MODE0_ve_cah_1p_bist_en(data)                          (0x00020000&((data)<<17))
#define  VE_MBIST_VE_BIST_MODE0_ve_dcmprs_bist_en(data)                          (0x00010000&((data)<<16))
#define  VE_MBIST_VE_BIST_MODE0_ve_cmprs_bist_en(data)                           (0x00008000&((data)<<15))
#define  VE_MBIST_VE_BIST_MODE0_ve_dbk_bist_en(data)                             (0x00004000&((data)<<14))
#define  VE_MBIST_VE_BIST_MODE0_ve_seg_mvd_bist_en(data)                         (0x00002000&((data)<<13))
#define  VE_MBIST_VE_BIST_MODE0_ve_rlrmem_mvbuf_bist_en(data)                    (0x00001000&((data)<<12))
#define  VE_MBIST_VE_BIST_MODE0_ve_cm2_bist_en(data)                             (0x00000800&((data)<<11))
#define  VE_MBIST_VE_BIST_MODE0_ve_cm1_bist_en(data)                             (0x00000400&((data)<<10))
#define  VE_MBIST_VE_BIST_MODE0_ve_brg_bist_en(data)                             (0x00000200&((data)<<9))
#define  VE_MBIST_VE_BIST_MODE0_ve_sao_bist_en(data)                             (0x00000100&((data)<<8))
#define  VE_MBIST_VE_BIST_MODE0_ve_it_bs_bist_en(data)                           (0x00000080&((data)<<7))
#define  VE_MBIST_VE_BIST_MODE0_ve_it_1_bist_en(data)                            (0x00000040&((data)<<6))
#define  VE_MBIST_VE_BIST_MODE0_ve_it_0_1_bist_en(data)                          (0x00000020&((data)<<5))
#define  VE_MBIST_VE_BIST_MODE0_ve_it_0_0_bist_en(data)                          (0x00000010&((data)<<4))
#define  VE_MBIST_VE_BIST_MODE0_ve_vm_1_bist_en(data)                            (0x00000008&((data)<<3))
#define  VE_MBIST_VE_BIST_MODE0_ve_vm_0_bist_en(data)                            (0x00000004&((data)<<2))
#define  VE_MBIST_VE_BIST_MODE0_ve_vld_0_bist_en(data)                           (0x00000002&((data)<<1))
#define  VE_MBIST_VE_BIST_MODE0_ve_rif_bist_en(data)                             (0x00000001&(data))
#define  VE_MBIST_VE_BIST_MODE0_get_ve_mf2_bist_en(data)                         ((0x80000000&(data))>>31)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_mf1_bist_en(data)                         ((0x40000000&(data))>>30)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_mf0_bist_en(data)                         ((0x20000000&(data))>>29)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_p2mvd_bist_en(data)                       ((0x10000000&(data))>>28)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_vld_1_bist_en(data)                       ((0x08000000&(data))>>27)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_p2_bist_en(data)                          ((0x04000000&(data))>>26)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_clmp_bist_en(data)                        ((0x02000000&(data))>>25)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_dcmprs_outbuf_bist_en(data)               ((0x01000000&(data))>>24)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_pred_3_bist_en(data)                      ((0x00800000&(data))>>23)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_pred_2_bist_en(data)                      ((0x00400000&(data))>>22)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_pred_1_bist_en(data)                      ((0x00200000&(data))>>21)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_pred_0_bist_en(data)                      ((0x00100000&(data))>>20)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_cah_2p_1_bist_en(data)                    ((0x00080000&(data))>>19)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_cah_2p_0_bist_en(data)                    ((0x00040000&(data))>>18)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_cah_1p_bist_en(data)                      ((0x00020000&(data))>>17)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_dcmprs_bist_en(data)                      ((0x00010000&(data))>>16)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_cmprs_bist_en(data)                       ((0x00008000&(data))>>15)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_dbk_bist_en(data)                         ((0x00004000&(data))>>14)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_seg_mvd_bist_en(data)                     ((0x00002000&(data))>>13)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_rlrmem_mvbuf_bist_en(data)                ((0x00001000&(data))>>12)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_cm2_bist_en(data)                         ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_cm1_bist_en(data)                         ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_brg_bist_en(data)                         ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_sao_bist_en(data)                         ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_it_bs_bist_en(data)                       ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_it_1_bist_en(data)                        ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_it_0_1_bist_en(data)                      ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_it_0_0_bist_en(data)                      ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_vm_1_bist_en(data)                        ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_vm_0_bist_en(data)                        ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_vld_0_bist_en(data)                       ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_BIST_MODE0_get_ve_rif_bist_en(data)                         (0x00000001&(data))
#define  VE_MBIST_VE_BIST_MODE0_ve_mf2_bist_en_src(data)                         ((0x80000000&(data))>>31)
#define  VE_MBIST_VE_BIST_MODE0_ve_mf1_bist_en_src(data)                         ((0x40000000&(data))>>30)
#define  VE_MBIST_VE_BIST_MODE0_ve_mf0_bist_en_src(data)                         ((0x20000000&(data))>>29)
#define  VE_MBIST_VE_BIST_MODE0_ve_p2mvd_bist_en_src(data)                       ((0x10000000&(data))>>28)
#define  VE_MBIST_VE_BIST_MODE0_ve_vld_1_bist_en_src(data)                       ((0x08000000&(data))>>27)
#define  VE_MBIST_VE_BIST_MODE0_ve_p2_bist_en_src(data)                          ((0x04000000&(data))>>26)
#define  VE_MBIST_VE_BIST_MODE0_ve_clmp_bist_en_src(data)                        ((0x02000000&(data))>>25)
#define  VE_MBIST_VE_BIST_MODE0_ve_dcmprs_outbuf_bist_en_src(data)               ((0x01000000&(data))>>24)
#define  VE_MBIST_VE_BIST_MODE0_ve_pred_3_bist_en_src(data)                      ((0x00800000&(data))>>23)
#define  VE_MBIST_VE_BIST_MODE0_ve_pred_2_bist_en_src(data)                      ((0x00400000&(data))>>22)
#define  VE_MBIST_VE_BIST_MODE0_ve_pred_1_bist_en_src(data)                      ((0x00200000&(data))>>21)
#define  VE_MBIST_VE_BIST_MODE0_ve_pred_0_bist_en_src(data)                      ((0x00100000&(data))>>20)
#define  VE_MBIST_VE_BIST_MODE0_ve_cah_2p_1_bist_en_src(data)                    ((0x00080000&(data))>>19)
#define  VE_MBIST_VE_BIST_MODE0_ve_cah_2p_0_bist_en_src(data)                    ((0x00040000&(data))>>18)
#define  VE_MBIST_VE_BIST_MODE0_ve_cah_1p_bist_en_src(data)                      ((0x00020000&(data))>>17)
#define  VE_MBIST_VE_BIST_MODE0_ve_dcmprs_bist_en_src(data)                      ((0x00010000&(data))>>16)
#define  VE_MBIST_VE_BIST_MODE0_ve_cmprs_bist_en_src(data)                       ((0x00008000&(data))>>15)
#define  VE_MBIST_VE_BIST_MODE0_ve_dbk_bist_en_src(data)                         ((0x00004000&(data))>>14)
#define  VE_MBIST_VE_BIST_MODE0_ve_seg_mvd_bist_en_src(data)                     ((0x00002000&(data))>>13)
#define  VE_MBIST_VE_BIST_MODE0_ve_rlrmem_mvbuf_bist_en_src(data)                ((0x00001000&(data))>>12)
#define  VE_MBIST_VE_BIST_MODE0_ve_cm2_bist_en_src(data)                         ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_BIST_MODE0_ve_cm1_bist_en_src(data)                         ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_BIST_MODE0_ve_brg_bist_en_src(data)                         ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_BIST_MODE0_ve_sao_bist_en_src(data)                         ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_BIST_MODE0_ve_it_bs_bist_en_src(data)                       ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_BIST_MODE0_ve_it_1_bist_en_src(data)                        ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_BIST_MODE0_ve_it_0_1_bist_en_src(data)                      ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_BIST_MODE0_ve_it_0_0_bist_en_src(data)                      ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_BIST_MODE0_ve_vm_1_bist_en_src(data)                        ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_BIST_MODE0_ve_vm_0_bist_en_src(data)                        ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_BIST_MODE0_ve_vld_0_bist_en_src(data)                       ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_BIST_MODE0_ve_rif_bist_en_src(data)                         (0x00000001&(data))

#define  VE_MBIST_VE_BIST_MODE1                                                 0x1800FF08
#define  VE_MBIST_VE_BIST_MODE1_reg_addr                                         "0xB800FF08"
#define  VE_MBIST_VE_BIST_MODE1_reg                                              0xB800FF08
#define  VE_MBIST_VE_BIST_MODE1_inst_adr                                         "0x00C2"
#define  VE_MBIST_VE_BIST_MODE1_inst                                             0x00C2
#define  set_VE_MBIST_VE_BIST_MODE1_reg(data)                                    (*((volatile unsigned int*)VE_MBIST_VE_BIST_MODE1_reg)=data)
#define  get_VE_MBIST_VE_BIST_MODE1_reg                                          (*((volatile unsigned int*)VE_MBIST_VE_BIST_MODE1_reg))
#define  VE_MBIST_VE_BIST_MODE1_ve_pred_2e_bist_en_shift                         (8)
#define  VE_MBIST_VE_BIST_MODE1_ve_rlrmem01_bist_en_shift                        (7)
#define  VE_MBIST_VE_BIST_MODE1_ve_cmprs_1_bist_en_shift                         (6)
#define  VE_MBIST_VE_BIST_MODE1_ve_pred_3_2p_bist_en_shift                       (5)
#define  VE_MBIST_VE_BIST_MODE1_ve_vm_2_bist_en_shift                            (4)
#define  VE_MBIST_VE_BIST_MODE1_ve_ciblk_bist_en_shift                           (3)
#define  VE_MBIST_VE_BIST_MODE1_ve_sr_bist_en_shift                              (2)
#define  VE_MBIST_VE_BIST_MODE1_ve_cdef_bist_en_shift                            (1)
#define  VE_MBIST_VE_BIST_MODE1_ve_lr_bist_en_shift                              (0)
#define  VE_MBIST_VE_BIST_MODE1_ve_pred_2e_bist_en_mask                          (0x00000100)
#define  VE_MBIST_VE_BIST_MODE1_ve_rlrmem01_bist_en_mask                         (0x00000080)
#define  VE_MBIST_VE_BIST_MODE1_ve_cmprs_1_bist_en_mask                          (0x00000040)
#define  VE_MBIST_VE_BIST_MODE1_ve_pred_3_2p_bist_en_mask                        (0x00000020)
#define  VE_MBIST_VE_BIST_MODE1_ve_vm_2_bist_en_mask                             (0x00000010)
#define  VE_MBIST_VE_BIST_MODE1_ve_ciblk_bist_en_mask                            (0x00000008)
#define  VE_MBIST_VE_BIST_MODE1_ve_sr_bist_en_mask                               (0x00000004)
#define  VE_MBIST_VE_BIST_MODE1_ve_cdef_bist_en_mask                             (0x00000002)
#define  VE_MBIST_VE_BIST_MODE1_ve_lr_bist_en_mask                               (0x00000001)
#define  VE_MBIST_VE_BIST_MODE1_ve_pred_2e_bist_en(data)                         (0x00000100&((data)<<8))
#define  VE_MBIST_VE_BIST_MODE1_ve_rlrmem01_bist_en(data)                        (0x00000080&((data)<<7))
#define  VE_MBIST_VE_BIST_MODE1_ve_cmprs_1_bist_en(data)                         (0x00000040&((data)<<6))
#define  VE_MBIST_VE_BIST_MODE1_ve_pred_3_2p_bist_en(data)                       (0x00000020&((data)<<5))
#define  VE_MBIST_VE_BIST_MODE1_ve_vm_2_bist_en(data)                            (0x00000010&((data)<<4))
#define  VE_MBIST_VE_BIST_MODE1_ve_ciblk_bist_en(data)                           (0x00000008&((data)<<3))
#define  VE_MBIST_VE_BIST_MODE1_ve_sr_bist_en(data)                              (0x00000004&((data)<<2))
#define  VE_MBIST_VE_BIST_MODE1_ve_cdef_bist_en(data)                            (0x00000002&((data)<<1))
#define  VE_MBIST_VE_BIST_MODE1_ve_lr_bist_en(data)                              (0x00000001&(data))
#define  VE_MBIST_VE_BIST_MODE1_get_ve_pred_2e_bist_en(data)                     ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_BIST_MODE1_get_ve_rlrmem01_bist_en(data)                    ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_BIST_MODE1_get_ve_cmprs_1_bist_en(data)                     ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_BIST_MODE1_get_ve_pred_3_2p_bist_en(data)                   ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_BIST_MODE1_get_ve_vm_2_bist_en(data)                        ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_BIST_MODE1_get_ve_ciblk_bist_en(data)                       ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_BIST_MODE1_get_ve_sr_bist_en(data)                          ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_BIST_MODE1_get_ve_cdef_bist_en(data)                        ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_BIST_MODE1_get_ve_lr_bist_en(data)                          (0x00000001&(data))
#define  VE_MBIST_VE_BIST_MODE1_ve_pred_2e_bist_en_src(data)                     ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_BIST_MODE1_ve_rlrmem01_bist_en_src(data)                    ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_BIST_MODE1_ve_cmprs_1_bist_en_src(data)                     ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_BIST_MODE1_ve_pred_3_2p_bist_en_src(data)                   ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_BIST_MODE1_ve_vm_2_bist_en_src(data)                        ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_BIST_MODE1_ve_ciblk_bist_en_src(data)                       ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_BIST_MODE1_ve_sr_bist_en_src(data)                          ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_BIST_MODE1_ve_cdef_bist_en_src(data)                        ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_BIST_MODE1_ve_lr_bist_en_src(data)                          (0x00000001&(data))

#define  VE_MBIST_VE_BIST_DONE0                                                 0x1800FF0C
#define  VE_MBIST_VE_BIST_DONE0_reg_addr                                         "0xB800FF0C"
#define  VE_MBIST_VE_BIST_DONE0_reg                                              0xB800FF0C
#define  VE_MBIST_VE_BIST_DONE0_inst_adr                                         "0x00C3"
#define  VE_MBIST_VE_BIST_DONE0_inst                                             0x00C3
#define  set_VE_MBIST_VE_BIST_DONE0_reg(data)                                    (*((volatile unsigned int*)VE_MBIST_VE_BIST_DONE0_reg)=data)
#define  get_VE_MBIST_VE_BIST_DONE0_reg                                          (*((volatile unsigned int*)VE_MBIST_VE_BIST_DONE0_reg))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_mf2_done_shift                           (31)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_mf1_done_shift                           (30)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_mf0_done_shift                           (29)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_p2mvd_done_shift                         (28)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_vld_1_done_shift                         (27)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_p2_done_shift                            (26)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_clmp_done_shift                          (25)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_dcmprs_outbuf_done_shift                 (24)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_pred_3_done_shift                        (23)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_pred_2_done_shift                        (22)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_pred_1_done_shift                        (21)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_pred_0_done_shift                        (20)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_cah_2p_1_done_shift                      (19)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_cah_2p_0_done_shift                      (18)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_cah_1p_done_shift                        (17)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_dcmprs_done_shift                        (16)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_cmprs_done_shift                         (15)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_dbk_done_shift                           (14)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_seg_mvd_done_shift                       (13)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_rlrmem_mvbuf_done_shift                  (12)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_cm2_done_shift                           (11)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_cm1_done_shift                           (10)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_brg_done_shift                           (9)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_sao_done_shift                           (8)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_it_bs_done_shift                         (7)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_it_1_done_shift                          (6)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_it_0_1_done_shift                        (5)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_it_0_0_done_shift                        (4)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_vm_1_done_shift                          (3)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_vm_0_done_shift                          (2)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_vld_0_done_shift                         (1)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_rif_done_shift                           (0)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_mf2_done_mask                            (0x80000000)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_mf1_done_mask                            (0x40000000)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_mf0_done_mask                            (0x20000000)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_p2mvd_done_mask                          (0x10000000)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_vld_1_done_mask                          (0x08000000)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_p2_done_mask                             (0x04000000)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_clmp_done_mask                           (0x02000000)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_dcmprs_outbuf_done_mask                  (0x01000000)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_pred_3_done_mask                         (0x00800000)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_pred_2_done_mask                         (0x00400000)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_pred_1_done_mask                         (0x00200000)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_pred_0_done_mask                         (0x00100000)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_cah_2p_1_done_mask                       (0x00080000)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_cah_2p_0_done_mask                       (0x00040000)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_cah_1p_done_mask                         (0x00020000)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_dcmprs_done_mask                         (0x00010000)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_cmprs_done_mask                          (0x00008000)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_dbk_done_mask                            (0x00004000)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_seg_mvd_done_mask                        (0x00002000)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_rlrmem_mvbuf_done_mask                   (0x00001000)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_cm2_done_mask                            (0x00000800)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_cm1_done_mask                            (0x00000400)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_brg_done_mask                            (0x00000200)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_sao_done_mask                            (0x00000100)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_it_bs_done_mask                          (0x00000080)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_it_1_done_mask                           (0x00000040)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_it_0_1_done_mask                         (0x00000020)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_it_0_0_done_mask                         (0x00000010)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_vm_1_done_mask                           (0x00000008)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_vm_0_done_mask                           (0x00000004)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_vld_0_done_mask                          (0x00000002)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_rif_done_mask                            (0x00000001)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_mf2_done(data)                           (0x80000000&((data)<<31))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_mf1_done(data)                           (0x40000000&((data)<<30))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_mf0_done(data)                           (0x20000000&((data)<<29))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_p2mvd_done(data)                         (0x10000000&((data)<<28))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_vld_1_done(data)                         (0x08000000&((data)<<27))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_p2_done(data)                            (0x04000000&((data)<<26))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_clmp_done(data)                          (0x02000000&((data)<<25))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_dcmprs_outbuf_done(data)                 (0x01000000&((data)<<24))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_pred_3_done(data)                        (0x00800000&((data)<<23))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_pred_2_done(data)                        (0x00400000&((data)<<22))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_pred_1_done(data)                        (0x00200000&((data)<<21))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_pred_0_done(data)                        (0x00100000&((data)<<20))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_cah_2p_1_done(data)                      (0x00080000&((data)<<19))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_cah_2p_0_done(data)                      (0x00040000&((data)<<18))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_cah_1p_done(data)                        (0x00020000&((data)<<17))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_dcmprs_done(data)                        (0x00010000&((data)<<16))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_cmprs_done(data)                         (0x00008000&((data)<<15))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_dbk_done(data)                           (0x00004000&((data)<<14))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_seg_mvd_done(data)                       (0x00002000&((data)<<13))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_rlrmem_mvbuf_done(data)                  (0x00001000&((data)<<12))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_cm2_done(data)                           (0x00000800&((data)<<11))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_cm1_done(data)                           (0x00000400&((data)<<10))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_brg_done(data)                           (0x00000200&((data)<<9))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_sao_done(data)                           (0x00000100&((data)<<8))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_it_bs_done(data)                         (0x00000080&((data)<<7))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_it_1_done(data)                          (0x00000040&((data)<<6))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_it_0_1_done(data)                        (0x00000020&((data)<<5))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_it_0_0_done(data)                        (0x00000010&((data)<<4))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_vm_1_done(data)                          (0x00000008&((data)<<3))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_vm_0_done(data)                          (0x00000004&((data)<<2))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_vld_0_done(data)                         (0x00000002&((data)<<1))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_rif_done(data)                           (0x00000001&(data))
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_mf2_done(data)                       ((0x80000000&(data))>>31)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_mf1_done(data)                       ((0x40000000&(data))>>30)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_mf0_done(data)                       ((0x20000000&(data))>>29)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_p2mvd_done(data)                     ((0x10000000&(data))>>28)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_vld_1_done(data)                     ((0x08000000&(data))>>27)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_p2_done(data)                        ((0x04000000&(data))>>26)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_clmp_done(data)                      ((0x02000000&(data))>>25)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_dcmprs_outbuf_done(data)             ((0x01000000&(data))>>24)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_pred_3_done(data)                    ((0x00800000&(data))>>23)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_pred_2_done(data)                    ((0x00400000&(data))>>22)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_pred_1_done(data)                    ((0x00200000&(data))>>21)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_pred_0_done(data)                    ((0x00100000&(data))>>20)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_cah_2p_1_done(data)                  ((0x00080000&(data))>>19)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_cah_2p_0_done(data)                  ((0x00040000&(data))>>18)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_cah_1p_done(data)                    ((0x00020000&(data))>>17)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_dcmprs_done(data)                    ((0x00010000&(data))>>16)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_cmprs_done(data)                     ((0x00008000&(data))>>15)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_dbk_done(data)                       ((0x00004000&(data))>>14)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_seg_mvd_done(data)                   ((0x00002000&(data))>>13)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_rlrmem_mvbuf_done(data)              ((0x00001000&(data))>>12)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_cm2_done(data)                       ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_cm1_done(data)                       ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_brg_done(data)                       ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_sao_done(data)                       ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_it_bs_done(data)                     ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_it_1_done(data)                      ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_it_0_1_done(data)                    ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_it_0_0_done(data)                    ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_vm_1_done(data)                      ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_vm_0_done(data)                      ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_vld_0_done(data)                     ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_BIST_DONE0_get_ve_bist_rif_done(data)                       (0x00000001&(data))
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_mf2_done_src(data)                       ((0x80000000&(data))>>31)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_mf1_done_src(data)                       ((0x40000000&(data))>>30)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_mf0_done_src(data)                       ((0x20000000&(data))>>29)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_p2mvd_done_src(data)                     ((0x10000000&(data))>>28)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_vld_1_done_src(data)                     ((0x08000000&(data))>>27)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_p2_done_src(data)                        ((0x04000000&(data))>>26)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_clmp_done_src(data)                      ((0x02000000&(data))>>25)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_dcmprs_outbuf_done_src(data)             ((0x01000000&(data))>>24)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_pred_3_done_src(data)                    ((0x00800000&(data))>>23)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_pred_2_done_src(data)                    ((0x00400000&(data))>>22)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_pred_1_done_src(data)                    ((0x00200000&(data))>>21)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_pred_0_done_src(data)                    ((0x00100000&(data))>>20)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_cah_2p_1_done_src(data)                  ((0x00080000&(data))>>19)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_cah_2p_0_done_src(data)                  ((0x00040000&(data))>>18)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_cah_1p_done_src(data)                    ((0x00020000&(data))>>17)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_dcmprs_done_src(data)                    ((0x00010000&(data))>>16)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_cmprs_done_src(data)                     ((0x00008000&(data))>>15)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_dbk_done_src(data)                       ((0x00004000&(data))>>14)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_seg_mvd_done_src(data)                   ((0x00002000&(data))>>13)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_rlrmem_mvbuf_done_src(data)              ((0x00001000&(data))>>12)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_cm2_done_src(data)                       ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_cm1_done_src(data)                       ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_brg_done_src(data)                       ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_sao_done_src(data)                       ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_it_bs_done_src(data)                     ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_it_1_done_src(data)                      ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_it_0_1_done_src(data)                    ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_it_0_0_done_src(data)                    ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_vm_1_done_src(data)                      ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_vm_0_done_src(data)                      ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_vld_0_done_src(data)                     ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_BIST_DONE0_ve_bist_rif_done_src(data)                       (0x00000001&(data))

#define  VE_MBIST_VE_BIST_DONE1                                                 0x1800FF10
#define  VE_MBIST_VE_BIST_DONE1_reg_addr                                         "0xB800FF10"
#define  VE_MBIST_VE_BIST_DONE1_reg                                              0xB800FF10
#define  VE_MBIST_VE_BIST_DONE1_inst_adr                                         "0x00C4"
#define  VE_MBIST_VE_BIST_DONE1_inst                                             0x00C4
#define  set_VE_MBIST_VE_BIST_DONE1_reg(data)                                    (*((volatile unsigned int*)VE_MBIST_VE_BIST_DONE1_reg)=data)
#define  get_VE_MBIST_VE_BIST_DONE1_reg                                          (*((volatile unsigned int*)VE_MBIST_VE_BIST_DONE1_reg))
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_pred_2e_done_shift                       (8)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_rlrmem01_done_shift                      (7)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_cmprs_1_done_shift                       (6)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_pred_3_2p_done_shift                     (5)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_vm_2_done_shift                          (4)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_ciblk_done_shift                         (3)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_sr_done_shift                            (2)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_cdef_done_shift                          (1)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_lr_done_shift                            (0)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_pred_2e_done_mask                        (0x00000100)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_rlrmem01_done_mask                       (0x00000080)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_cmprs_1_done_mask                        (0x00000040)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_pred_3_2p_done_mask                      (0x00000020)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_vm_2_done_mask                           (0x00000010)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_ciblk_done_mask                          (0x00000008)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_sr_done_mask                             (0x00000004)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_cdef_done_mask                           (0x00000002)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_lr_done_mask                             (0x00000001)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_pred_2e_done(data)                       (0x00000100&((data)<<8))
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_rlrmem01_done(data)                      (0x00000080&((data)<<7))
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_cmprs_1_done(data)                       (0x00000040&((data)<<6))
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_pred_3_2p_done(data)                     (0x00000020&((data)<<5))
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_vm_2_done(data)                          (0x00000010&((data)<<4))
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_ciblk_done(data)                         (0x00000008&((data)<<3))
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_sr_done(data)                            (0x00000004&((data)<<2))
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_cdef_done(data)                          (0x00000002&((data)<<1))
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_lr_done(data)                            (0x00000001&(data))
#define  VE_MBIST_VE_BIST_DONE1_get_ve_bist_pred_2e_done(data)                   ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_BIST_DONE1_get_ve_bist_rlrmem01_done(data)                  ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_BIST_DONE1_get_ve_bist_cmprs_1_done(data)                   ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_BIST_DONE1_get_ve_bist_pred_3_2p_done(data)                 ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_BIST_DONE1_get_ve_bist_vm_2_done(data)                      ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_BIST_DONE1_get_ve_bist_ciblk_done(data)                     ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_BIST_DONE1_get_ve_bist_sr_done(data)                        ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_BIST_DONE1_get_ve_bist_cdef_done(data)                      ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_BIST_DONE1_get_ve_bist_lr_done(data)                        (0x00000001&(data))
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_pred_2e_done_src(data)                   ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_rlrmem01_done_src(data)                  ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_cmprs_1_done_src(data)                   ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_pred_3_2p_done_src(data)                 ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_vm_2_done_src(data)                      ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_ciblk_done_src(data)                     ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_sr_done_src(data)                        ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_cdef_done_src(data)                      ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_BIST_DONE1_ve_bist_lr_done_src(data)                        (0x00000001&(data))

#define  VE_MBIST_VE_BIST_FAIL_GROUP0                                           0x1800FF14
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_reg_addr                                   "0xB800FF14"
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_reg                                        0xB800FF14
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_inst_adr                                   "0x00C5"
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_inst                                       0x00C5
#define  set_VE_MBIST_VE_BIST_FAIL_GROUP0_reg(data)                              (*((volatile unsigned int*)VE_MBIST_VE_BIST_FAIL_GROUP0_reg)=data)
#define  get_VE_MBIST_VE_BIST_FAIL_GROUP0_reg                                    (*((volatile unsigned int*)VE_MBIST_VE_BIST_FAIL_GROUP0_reg))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_mf2_fail_group_shift               (31)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_mf1_fail_group_shift               (30)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_mf0_fail_group_shift               (29)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_p2mvd_fail_group_shift             (28)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_vld_1_fail_group_shift             (27)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_p2_fail_group_shift                (26)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_clmp_fail_group_shift              (25)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_dcmprs_outbuf_fail_group_shift     (24)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_pred_3_fail_group_shift            (23)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_pred_2_fail_group_shift            (22)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_pred_1_fail_group_shift            (21)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_pred_0_fail_group_shift            (20)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_cah_2p_1_fail_group_shift          (19)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_cah_2p_0_fail_group_shift          (18)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_cah_1p_fail_group_shift            (17)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_dcmprs_fail_group_shift            (16)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_cmprs_fail_group_shift             (15)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_dbk_fail_group_shift               (14)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_seg_mvd_fail_group_shift           (13)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_rlrmem_mvbuf_fail_group_shift      (12)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_cm2_fail_group_shift               (11)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_cm1_fail_group_shift               (10)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_brg_fail_group_shift               (9)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_sao_fail_group_shift               (8)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_it_bs_fail_group_shift             (7)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_it_1_fail_group_shift              (6)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_it_0_1_fail_group_shift            (5)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_it_0_0_fail_group_shift            (4)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_vm_1_fail_group_shift              (3)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_vm_0_fail_group_shift              (2)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_vld_0_fail_group_shift             (1)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_rif_fail_group_shift               (0)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_mf2_fail_group_mask                (0x80000000)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_mf1_fail_group_mask                (0x40000000)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_mf0_fail_group_mask                (0x20000000)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_p2mvd_fail_group_mask              (0x10000000)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_vld_1_fail_group_mask              (0x08000000)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_p2_fail_group_mask                 (0x04000000)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_clmp_fail_group_mask               (0x02000000)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_dcmprs_outbuf_fail_group_mask      (0x01000000)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_pred_3_fail_group_mask             (0x00800000)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_pred_2_fail_group_mask             (0x00400000)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_pred_1_fail_group_mask             (0x00200000)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_pred_0_fail_group_mask             (0x00100000)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_cah_2p_1_fail_group_mask           (0x00080000)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_cah_2p_0_fail_group_mask           (0x00040000)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_cah_1p_fail_group_mask             (0x00020000)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_dcmprs_fail_group_mask             (0x00010000)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_cmprs_fail_group_mask              (0x00008000)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_dbk_fail_group_mask                (0x00004000)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_seg_mvd_fail_group_mask            (0x00002000)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_rlrmem_mvbuf_fail_group_mask       (0x00001000)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_cm2_fail_group_mask                (0x00000800)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_cm1_fail_group_mask                (0x00000400)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_brg_fail_group_mask                (0x00000200)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_sao_fail_group_mask                (0x00000100)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_it_bs_fail_group_mask              (0x00000080)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_it_1_fail_group_mask               (0x00000040)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_it_0_1_fail_group_mask             (0x00000020)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_it_0_0_fail_group_mask             (0x00000010)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_vm_1_fail_group_mask               (0x00000008)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_vm_0_fail_group_mask               (0x00000004)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_vld_0_fail_group_mask              (0x00000002)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_rif_fail_group_mask                (0x00000001)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_mf2_fail_group(data)               (0x80000000&((data)<<31))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_mf1_fail_group(data)               (0x40000000&((data)<<30))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_mf0_fail_group(data)               (0x20000000&((data)<<29))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_p2mvd_fail_group(data)             (0x10000000&((data)<<28))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_vld_1_fail_group(data)             (0x08000000&((data)<<27))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_p2_fail_group(data)                (0x04000000&((data)<<26))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_clmp_fail_group(data)              (0x02000000&((data)<<25))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_dcmprs_outbuf_fail_group(data)     (0x01000000&((data)<<24))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_pred_3_fail_group(data)            (0x00800000&((data)<<23))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_pred_2_fail_group(data)            (0x00400000&((data)<<22))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_pred_1_fail_group(data)            (0x00200000&((data)<<21))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_pred_0_fail_group(data)            (0x00100000&((data)<<20))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_cah_2p_1_fail_group(data)          (0x00080000&((data)<<19))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_cah_2p_0_fail_group(data)          (0x00040000&((data)<<18))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_cah_1p_fail_group(data)            (0x00020000&((data)<<17))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_dcmprs_fail_group(data)            (0x00010000&((data)<<16))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_cmprs_fail_group(data)             (0x00008000&((data)<<15))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_dbk_fail_group(data)               (0x00004000&((data)<<14))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_seg_mvd_fail_group(data)           (0x00002000&((data)<<13))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_rlrmem_mvbuf_fail_group(data)      (0x00001000&((data)<<12))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_cm2_fail_group(data)               (0x00000800&((data)<<11))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_cm1_fail_group(data)               (0x00000400&((data)<<10))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_brg_fail_group(data)               (0x00000200&((data)<<9))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_sao_fail_group(data)               (0x00000100&((data)<<8))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_it_bs_fail_group(data)             (0x00000080&((data)<<7))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_it_1_fail_group(data)              (0x00000040&((data)<<6))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_it_0_1_fail_group(data)            (0x00000020&((data)<<5))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_it_0_0_fail_group(data)            (0x00000010&((data)<<4))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_vm_1_fail_group(data)              (0x00000008&((data)<<3))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_vm_0_fail_group(data)              (0x00000004&((data)<<2))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_vld_0_fail_group(data)             (0x00000002&((data)<<1))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_rif_fail_group(data)               (0x00000001&(data))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_mf2_fail_group(data)           ((0x80000000&(data))>>31)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_mf1_fail_group(data)           ((0x40000000&(data))>>30)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_mf0_fail_group(data)           ((0x20000000&(data))>>29)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_p2mvd_fail_group(data)         ((0x10000000&(data))>>28)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_vld_1_fail_group(data)         ((0x08000000&(data))>>27)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_p2_fail_group(data)            ((0x04000000&(data))>>26)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_clmp_fail_group(data)          ((0x02000000&(data))>>25)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_dcmprs_outbuf_fail_group(data) ((0x01000000&(data))>>24)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_pred_3_fail_group(data)        ((0x00800000&(data))>>23)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_pred_2_fail_group(data)        ((0x00400000&(data))>>22)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_pred_1_fail_group(data)        ((0x00200000&(data))>>21)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_pred_0_fail_group(data)        ((0x00100000&(data))>>20)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_cah_2p_1_fail_group(data)      ((0x00080000&(data))>>19)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_cah_2p_0_fail_group(data)      ((0x00040000&(data))>>18)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_cah_1p_fail_group(data)        ((0x00020000&(data))>>17)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_dcmprs_fail_group(data)        ((0x00010000&(data))>>16)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_cmprs_fail_group(data)         ((0x00008000&(data))>>15)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_dbk_fail_group(data)           ((0x00004000&(data))>>14)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_seg_mvd_fail_group(data)       ((0x00002000&(data))>>13)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_rlrmem_mvbuf_fail_group(data)  ((0x00001000&(data))>>12)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_cm2_fail_group(data)           ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_cm1_fail_group(data)           ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_brg_fail_group(data)           ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_sao_fail_group(data)           ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_it_bs_fail_group(data)         ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_it_1_fail_group(data)          ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_it_0_1_fail_group(data)        ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_it_0_0_fail_group(data)        ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_vm_1_fail_group(data)          ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_vm_0_fail_group(data)          ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_vld_0_fail_group(data)         ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_get_ve_bist_rif_fail_group(data)           (0x00000001&(data))
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_mf2_fail_group_src(data)           ((0x80000000&(data))>>31)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_mf1_fail_group_src(data)           ((0x40000000&(data))>>30)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_mf0_fail_group_src(data)           ((0x20000000&(data))>>29)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_p2mvd_fail_group_src(data)         ((0x10000000&(data))>>28)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_vld_1_fail_group_src(data)         ((0x08000000&(data))>>27)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_p2_fail_group_src(data)            ((0x04000000&(data))>>26)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_clmp_fail_group_src(data)          ((0x02000000&(data))>>25)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_dcmprs_outbuf_fail_group_src(data) ((0x01000000&(data))>>24)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_pred_3_fail_group_src(data)        ((0x00800000&(data))>>23)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_pred_2_fail_group_src(data)        ((0x00400000&(data))>>22)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_pred_1_fail_group_src(data)        ((0x00200000&(data))>>21)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_pred_0_fail_group_src(data)        ((0x00100000&(data))>>20)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_cah_2p_1_fail_group_src(data)      ((0x00080000&(data))>>19)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_cah_2p_0_fail_group_src(data)      ((0x00040000&(data))>>18)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_cah_1p_fail_group_src(data)        ((0x00020000&(data))>>17)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_dcmprs_fail_group_src(data)        ((0x00010000&(data))>>16)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_cmprs_fail_group_src(data)         ((0x00008000&(data))>>15)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_dbk_fail_group_src(data)           ((0x00004000&(data))>>14)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_seg_mvd_fail_group_src(data)       ((0x00002000&(data))>>13)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_rlrmem_mvbuf_fail_group_src(data)  ((0x00001000&(data))>>12)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_cm2_fail_group_src(data)           ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_cm1_fail_group_src(data)           ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_brg_fail_group_src(data)           ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_sao_fail_group_src(data)           ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_it_bs_fail_group_src(data)         ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_it_1_fail_group_src(data)          ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_it_0_1_fail_group_src(data)        ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_it_0_0_fail_group_src(data)        ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_vm_1_fail_group_src(data)          ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_vm_0_fail_group_src(data)          ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_vld_0_fail_group_src(data)         ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_BIST_FAIL_GROUP0_ve_bist_rif_fail_group_src(data)           (0x00000001&(data))

#define  VE_MBIST_VE_BIST_FAIL_GROUP1                                           0x1800FF18
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_reg_addr                                   "0xB800FF18"
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_reg                                        0xB800FF18
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_inst_adr                                   "0x00C6"
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_inst                                       0x00C6
#define  set_VE_MBIST_VE_BIST_FAIL_GROUP1_reg(data)                              (*((volatile unsigned int*)VE_MBIST_VE_BIST_FAIL_GROUP1_reg)=data)
#define  get_VE_MBIST_VE_BIST_FAIL_GROUP1_reg                                    (*((volatile unsigned int*)VE_MBIST_VE_BIST_FAIL_GROUP1_reg))
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_pred_2e_fail_group_shift           (8)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_rlrmem01_fail_group_shift          (7)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_cmprs_1_fail_group_shift           (6)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_pred_3_2p_fail_group_shift         (5)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_vm_2_fail_group_shift              (4)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_ciblk_fail_group_shift             (3)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_sr_fail_group_shift                (2)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_cdef_fail_group_shift              (1)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_lr_fail_group_shift                (0)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_pred_2e_fail_group_mask            (0x00000100)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_rlrmem01_fail_group_mask           (0x00000080)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_cmprs_1_fail_group_mask            (0x00000040)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_pred_3_2p_fail_group_mask          (0x00000020)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_vm_2_fail_group_mask               (0x00000010)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_ciblk_fail_group_mask              (0x00000008)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_sr_fail_group_mask                 (0x00000004)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_cdef_fail_group_mask               (0x00000002)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_lr_fail_group_mask                 (0x00000001)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_pred_2e_fail_group(data)           (0x00000100&((data)<<8))
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_rlrmem01_fail_group(data)          (0x00000080&((data)<<7))
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_cmprs_1_fail_group(data)           (0x00000040&((data)<<6))
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_pred_3_2p_fail_group(data)         (0x00000020&((data)<<5))
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_vm_2_fail_group(data)              (0x00000010&((data)<<4))
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_ciblk_fail_group(data)             (0x00000008&((data)<<3))
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_sr_fail_group(data)                (0x00000004&((data)<<2))
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_cdef_fail_group(data)              (0x00000002&((data)<<1))
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_lr_fail_group(data)                (0x00000001&(data))
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_get_ve_bist_pred_2e_fail_group(data)       ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_get_ve_bist_rlrmem01_fail_group(data)      ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_get_ve_bist_cmprs_1_fail_group(data)       ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_get_ve_bist_pred_3_2p_fail_group(data)     ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_get_ve_bist_vm_2_fail_group(data)          ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_get_ve_bist_ciblk_fail_group(data)         ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_get_ve_bist_sr_fail_group(data)            ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_get_ve_bist_cdef_fail_group(data)          ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_get_ve_bist_lr_fail_group(data)            (0x00000001&(data))
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_pred_2e_fail_group_src(data)       ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_rlrmem01_fail_group_src(data)      ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_cmprs_1_fail_group_src(data)       ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_pred_3_2p_fail_group_src(data)     ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_vm_2_fail_group_src(data)          ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_ciblk_fail_group_src(data)         ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_sr_fail_group_src(data)            ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_cdef_fail_group_src(data)          ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_BIST_FAIL_GROUP1_ve_bist_lr_fail_group_src(data)            (0x00000001&(data))

#define  VE_MBIST_VE_DRF_MODE0                                                  0x1800FF1C
#define  VE_MBIST_VE_DRF_MODE0_reg_addr                                          "0xB800FF1C"
#define  VE_MBIST_VE_DRF_MODE0_reg                                               0xB800FF1C
#define  VE_MBIST_VE_DRF_MODE0_inst_adr                                          "0x00C7"
#define  VE_MBIST_VE_DRF_MODE0_inst                                              0x00C7
#define  set_VE_MBIST_VE_DRF_MODE0_reg(data)                                     (*((volatile unsigned int*)VE_MBIST_VE_DRF_MODE0_reg)=data)
#define  get_VE_MBIST_VE_DRF_MODE0_reg                                           (*((volatile unsigned int*)VE_MBIST_VE_DRF_MODE0_reg))
#define  VE_MBIST_VE_DRF_MODE0_ve_mf2_drf_bist_en_shift                          (31)
#define  VE_MBIST_VE_DRF_MODE0_ve_mf1_drf_bist_en_shift                          (30)
#define  VE_MBIST_VE_DRF_MODE0_ve_mf0_drf_bist_en_shift                          (29)
#define  VE_MBIST_VE_DRF_MODE0_ve_p2mvd_drf_bist_en_shift                        (28)
#define  VE_MBIST_VE_DRF_MODE0_ve_vld_1_drf_bist_en_shift                        (27)
#define  VE_MBIST_VE_DRF_MODE0_ve_p2_drf_bist_en_shift                           (26)
#define  VE_MBIST_VE_DRF_MODE0_ve_clmp_drf_bist_en_shift                         (25)
#define  VE_MBIST_VE_DRF_MODE0_ve_dcmprs_outbuf_drf_bist_en_shift                (24)
#define  VE_MBIST_VE_DRF_MODE0_ve_pred_3_drf_bist_en_shift                       (23)
#define  VE_MBIST_VE_DRF_MODE0_ve_pred_2_drf_bist_en_shift                       (22)
#define  VE_MBIST_VE_DRF_MODE0_ve_pred_1_drf_bist_en_shift                       (21)
#define  VE_MBIST_VE_DRF_MODE0_ve_pred_0_drf_bist_en_shift                       (20)
#define  VE_MBIST_VE_DRF_MODE0_ve_cah_2p_1_drf_bist_en_shift                     (19)
#define  VE_MBIST_VE_DRF_MODE0_ve_cah_2p_0_drf_bist_en_shift                     (18)
#define  VE_MBIST_VE_DRF_MODE0_ve_cah_1p_drf_bist_en_shift                       (17)
#define  VE_MBIST_VE_DRF_MODE0_ve_dcmprs_drf_bist_en_shift                       (16)
#define  VE_MBIST_VE_DRF_MODE0_ve_cmprs_drf_bist_en_shift                        (15)
#define  VE_MBIST_VE_DRF_MODE0_ve_dbk_drf_bist_en_shift                          (14)
#define  VE_MBIST_VE_DRF_MODE0_ve_seg_mvd_drf_bist_en_shift                      (13)
#define  VE_MBIST_VE_DRF_MODE0_ve_rlrmem_mvbuf_drf_bist_en_shift                 (12)
#define  VE_MBIST_VE_DRF_MODE0_ve_cm2_drf_bist_en_shift                          (11)
#define  VE_MBIST_VE_DRF_MODE0_ve_cm1_drf_bist_en_shift                          (10)
#define  VE_MBIST_VE_DRF_MODE0_ve_brg_drf_bist_en_shift                          (9)
#define  VE_MBIST_VE_DRF_MODE0_ve_sao_drf_bist_en_shift                          (8)
#define  VE_MBIST_VE_DRF_MODE0_ve_it_bs_drf_bist_en_shift                        (7)
#define  VE_MBIST_VE_DRF_MODE0_ve_it_1_drf_bist_en_shift                         (6)
#define  VE_MBIST_VE_DRF_MODE0_ve_it_0_1_drf_bist_en_shift                       (5)
#define  VE_MBIST_VE_DRF_MODE0_ve_it_0_0_drf_bist_en_shift                       (4)
#define  VE_MBIST_VE_DRF_MODE0_ve_vm_1_drf_bist_en_shift                         (3)
#define  VE_MBIST_VE_DRF_MODE0_ve_vm_0_drf_bist_en_shift                         (2)
#define  VE_MBIST_VE_DRF_MODE0_ve_vld_0_drf_bist_en_shift                        (1)
#define  VE_MBIST_VE_DRF_MODE0_ve_rif_drf_bist_en_shift                          (0)
#define  VE_MBIST_VE_DRF_MODE0_ve_mf2_drf_bist_en_mask                           (0x80000000)
#define  VE_MBIST_VE_DRF_MODE0_ve_mf1_drf_bist_en_mask                           (0x40000000)
#define  VE_MBIST_VE_DRF_MODE0_ve_mf0_drf_bist_en_mask                           (0x20000000)
#define  VE_MBIST_VE_DRF_MODE0_ve_p2mvd_drf_bist_en_mask                         (0x10000000)
#define  VE_MBIST_VE_DRF_MODE0_ve_vld_1_drf_bist_en_mask                         (0x08000000)
#define  VE_MBIST_VE_DRF_MODE0_ve_p2_drf_bist_en_mask                            (0x04000000)
#define  VE_MBIST_VE_DRF_MODE0_ve_clmp_drf_bist_en_mask                          (0x02000000)
#define  VE_MBIST_VE_DRF_MODE0_ve_dcmprs_outbuf_drf_bist_en_mask                 (0x01000000)
#define  VE_MBIST_VE_DRF_MODE0_ve_pred_3_drf_bist_en_mask                        (0x00800000)
#define  VE_MBIST_VE_DRF_MODE0_ve_pred_2_drf_bist_en_mask                        (0x00400000)
#define  VE_MBIST_VE_DRF_MODE0_ve_pred_1_drf_bist_en_mask                        (0x00200000)
#define  VE_MBIST_VE_DRF_MODE0_ve_pred_0_drf_bist_en_mask                        (0x00100000)
#define  VE_MBIST_VE_DRF_MODE0_ve_cah_2p_1_drf_bist_en_mask                      (0x00080000)
#define  VE_MBIST_VE_DRF_MODE0_ve_cah_2p_0_drf_bist_en_mask                      (0x00040000)
#define  VE_MBIST_VE_DRF_MODE0_ve_cah_1p_drf_bist_en_mask                        (0x00020000)
#define  VE_MBIST_VE_DRF_MODE0_ve_dcmprs_drf_bist_en_mask                        (0x00010000)
#define  VE_MBIST_VE_DRF_MODE0_ve_cmprs_drf_bist_en_mask                         (0x00008000)
#define  VE_MBIST_VE_DRF_MODE0_ve_dbk_drf_bist_en_mask                           (0x00004000)
#define  VE_MBIST_VE_DRF_MODE0_ve_seg_mvd_drf_bist_en_mask                       (0x00002000)
#define  VE_MBIST_VE_DRF_MODE0_ve_rlrmem_mvbuf_drf_bist_en_mask                  (0x00001000)
#define  VE_MBIST_VE_DRF_MODE0_ve_cm2_drf_bist_en_mask                           (0x00000800)
#define  VE_MBIST_VE_DRF_MODE0_ve_cm1_drf_bist_en_mask                           (0x00000400)
#define  VE_MBIST_VE_DRF_MODE0_ve_brg_drf_bist_en_mask                           (0x00000200)
#define  VE_MBIST_VE_DRF_MODE0_ve_sao_drf_bist_en_mask                           (0x00000100)
#define  VE_MBIST_VE_DRF_MODE0_ve_it_bs_drf_bist_en_mask                         (0x00000080)
#define  VE_MBIST_VE_DRF_MODE0_ve_it_1_drf_bist_en_mask                          (0x00000040)
#define  VE_MBIST_VE_DRF_MODE0_ve_it_0_1_drf_bist_en_mask                        (0x00000020)
#define  VE_MBIST_VE_DRF_MODE0_ve_it_0_0_drf_bist_en_mask                        (0x00000010)
#define  VE_MBIST_VE_DRF_MODE0_ve_vm_1_drf_bist_en_mask                          (0x00000008)
#define  VE_MBIST_VE_DRF_MODE0_ve_vm_0_drf_bist_en_mask                          (0x00000004)
#define  VE_MBIST_VE_DRF_MODE0_ve_vld_0_drf_bist_en_mask                         (0x00000002)
#define  VE_MBIST_VE_DRF_MODE0_ve_rif_drf_bist_en_mask                           (0x00000001)
#define  VE_MBIST_VE_DRF_MODE0_ve_mf2_drf_bist_en(data)                          (0x80000000&((data)<<31))
#define  VE_MBIST_VE_DRF_MODE0_ve_mf1_drf_bist_en(data)                          (0x40000000&((data)<<30))
#define  VE_MBIST_VE_DRF_MODE0_ve_mf0_drf_bist_en(data)                          (0x20000000&((data)<<29))
#define  VE_MBIST_VE_DRF_MODE0_ve_p2mvd_drf_bist_en(data)                        (0x10000000&((data)<<28))
#define  VE_MBIST_VE_DRF_MODE0_ve_vld_1_drf_bist_en(data)                        (0x08000000&((data)<<27))
#define  VE_MBIST_VE_DRF_MODE0_ve_p2_drf_bist_en(data)                           (0x04000000&((data)<<26))
#define  VE_MBIST_VE_DRF_MODE0_ve_clmp_drf_bist_en(data)                         (0x02000000&((data)<<25))
#define  VE_MBIST_VE_DRF_MODE0_ve_dcmprs_outbuf_drf_bist_en(data)                (0x01000000&((data)<<24))
#define  VE_MBIST_VE_DRF_MODE0_ve_pred_3_drf_bist_en(data)                       (0x00800000&((data)<<23))
#define  VE_MBIST_VE_DRF_MODE0_ve_pred_2_drf_bist_en(data)                       (0x00400000&((data)<<22))
#define  VE_MBIST_VE_DRF_MODE0_ve_pred_1_drf_bist_en(data)                       (0x00200000&((data)<<21))
#define  VE_MBIST_VE_DRF_MODE0_ve_pred_0_drf_bist_en(data)                       (0x00100000&((data)<<20))
#define  VE_MBIST_VE_DRF_MODE0_ve_cah_2p_1_drf_bist_en(data)                     (0x00080000&((data)<<19))
#define  VE_MBIST_VE_DRF_MODE0_ve_cah_2p_0_drf_bist_en(data)                     (0x00040000&((data)<<18))
#define  VE_MBIST_VE_DRF_MODE0_ve_cah_1p_drf_bist_en(data)                       (0x00020000&((data)<<17))
#define  VE_MBIST_VE_DRF_MODE0_ve_dcmprs_drf_bist_en(data)                       (0x00010000&((data)<<16))
#define  VE_MBIST_VE_DRF_MODE0_ve_cmprs_drf_bist_en(data)                        (0x00008000&((data)<<15))
#define  VE_MBIST_VE_DRF_MODE0_ve_dbk_drf_bist_en(data)                          (0x00004000&((data)<<14))
#define  VE_MBIST_VE_DRF_MODE0_ve_seg_mvd_drf_bist_en(data)                      (0x00002000&((data)<<13))
#define  VE_MBIST_VE_DRF_MODE0_ve_rlrmem_mvbuf_drf_bist_en(data)                 (0x00001000&((data)<<12))
#define  VE_MBIST_VE_DRF_MODE0_ve_cm2_drf_bist_en(data)                          (0x00000800&((data)<<11))
#define  VE_MBIST_VE_DRF_MODE0_ve_cm1_drf_bist_en(data)                          (0x00000400&((data)<<10))
#define  VE_MBIST_VE_DRF_MODE0_ve_brg_drf_bist_en(data)                          (0x00000200&((data)<<9))
#define  VE_MBIST_VE_DRF_MODE0_ve_sao_drf_bist_en(data)                          (0x00000100&((data)<<8))
#define  VE_MBIST_VE_DRF_MODE0_ve_it_bs_drf_bist_en(data)                        (0x00000080&((data)<<7))
#define  VE_MBIST_VE_DRF_MODE0_ve_it_1_drf_bist_en(data)                         (0x00000040&((data)<<6))
#define  VE_MBIST_VE_DRF_MODE0_ve_it_0_1_drf_bist_en(data)                       (0x00000020&((data)<<5))
#define  VE_MBIST_VE_DRF_MODE0_ve_it_0_0_drf_bist_en(data)                       (0x00000010&((data)<<4))
#define  VE_MBIST_VE_DRF_MODE0_ve_vm_1_drf_bist_en(data)                         (0x00000008&((data)<<3))
#define  VE_MBIST_VE_DRF_MODE0_ve_vm_0_drf_bist_en(data)                         (0x00000004&((data)<<2))
#define  VE_MBIST_VE_DRF_MODE0_ve_vld_0_drf_bist_en(data)                        (0x00000002&((data)<<1))
#define  VE_MBIST_VE_DRF_MODE0_ve_rif_drf_bist_en(data)                          (0x00000001&(data))
#define  VE_MBIST_VE_DRF_MODE0_get_ve_mf2_drf_bist_en(data)                      ((0x80000000&(data))>>31)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_mf1_drf_bist_en(data)                      ((0x40000000&(data))>>30)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_mf0_drf_bist_en(data)                      ((0x20000000&(data))>>29)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_p2mvd_drf_bist_en(data)                    ((0x10000000&(data))>>28)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_vld_1_drf_bist_en(data)                    ((0x08000000&(data))>>27)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_p2_drf_bist_en(data)                       ((0x04000000&(data))>>26)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_clmp_drf_bist_en(data)                     ((0x02000000&(data))>>25)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_dcmprs_outbuf_drf_bist_en(data)            ((0x01000000&(data))>>24)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_pred_3_drf_bist_en(data)                   ((0x00800000&(data))>>23)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_pred_2_drf_bist_en(data)                   ((0x00400000&(data))>>22)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_pred_1_drf_bist_en(data)                   ((0x00200000&(data))>>21)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_pred_0_drf_bist_en(data)                   ((0x00100000&(data))>>20)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_cah_2p_1_drf_bist_en(data)                 ((0x00080000&(data))>>19)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_cah_2p_0_drf_bist_en(data)                 ((0x00040000&(data))>>18)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_cah_1p_drf_bist_en(data)                   ((0x00020000&(data))>>17)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_dcmprs_drf_bist_en(data)                   ((0x00010000&(data))>>16)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_cmprs_drf_bist_en(data)                    ((0x00008000&(data))>>15)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_dbk_drf_bist_en(data)                      ((0x00004000&(data))>>14)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_seg_mvd_drf_bist_en(data)                  ((0x00002000&(data))>>13)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_rlrmem_mvbuf_drf_bist_en(data)             ((0x00001000&(data))>>12)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_cm2_drf_bist_en(data)                      ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_cm1_drf_bist_en(data)                      ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_brg_drf_bist_en(data)                      ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_sao_drf_bist_en(data)                      ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_it_bs_drf_bist_en(data)                    ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_it_1_drf_bist_en(data)                     ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_it_0_1_drf_bist_en(data)                   ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_it_0_0_drf_bist_en(data)                   ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_vm_1_drf_bist_en(data)                     ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_vm_0_drf_bist_en(data)                     ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_vld_0_drf_bist_en(data)                    ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_DRF_MODE0_get_ve_rif_drf_bist_en(data)                      (0x00000001&(data))
#define  VE_MBIST_VE_DRF_MODE0_ve_mf2_drf_bist_en_src(data)                      ((0x80000000&(data))>>31)
#define  VE_MBIST_VE_DRF_MODE0_ve_mf1_drf_bist_en_src(data)                      ((0x40000000&(data))>>30)
#define  VE_MBIST_VE_DRF_MODE0_ve_mf0_drf_bist_en_src(data)                      ((0x20000000&(data))>>29)
#define  VE_MBIST_VE_DRF_MODE0_ve_p2mvd_drf_bist_en_src(data)                    ((0x10000000&(data))>>28)
#define  VE_MBIST_VE_DRF_MODE0_ve_vld_1_drf_bist_en_src(data)                    ((0x08000000&(data))>>27)
#define  VE_MBIST_VE_DRF_MODE0_ve_p2_drf_bist_en_src(data)                       ((0x04000000&(data))>>26)
#define  VE_MBIST_VE_DRF_MODE0_ve_clmp_drf_bist_en_src(data)                     ((0x02000000&(data))>>25)
#define  VE_MBIST_VE_DRF_MODE0_ve_dcmprs_outbuf_drf_bist_en_src(data)            ((0x01000000&(data))>>24)
#define  VE_MBIST_VE_DRF_MODE0_ve_pred_3_drf_bist_en_src(data)                   ((0x00800000&(data))>>23)
#define  VE_MBIST_VE_DRF_MODE0_ve_pred_2_drf_bist_en_src(data)                   ((0x00400000&(data))>>22)
#define  VE_MBIST_VE_DRF_MODE0_ve_pred_1_drf_bist_en_src(data)                   ((0x00200000&(data))>>21)
#define  VE_MBIST_VE_DRF_MODE0_ve_pred_0_drf_bist_en_src(data)                   ((0x00100000&(data))>>20)
#define  VE_MBIST_VE_DRF_MODE0_ve_cah_2p_1_drf_bist_en_src(data)                 ((0x00080000&(data))>>19)
#define  VE_MBIST_VE_DRF_MODE0_ve_cah_2p_0_drf_bist_en_src(data)                 ((0x00040000&(data))>>18)
#define  VE_MBIST_VE_DRF_MODE0_ve_cah_1p_drf_bist_en_src(data)                   ((0x00020000&(data))>>17)
#define  VE_MBIST_VE_DRF_MODE0_ve_dcmprs_drf_bist_en_src(data)                   ((0x00010000&(data))>>16)
#define  VE_MBIST_VE_DRF_MODE0_ve_cmprs_drf_bist_en_src(data)                    ((0x00008000&(data))>>15)
#define  VE_MBIST_VE_DRF_MODE0_ve_dbk_drf_bist_en_src(data)                      ((0x00004000&(data))>>14)
#define  VE_MBIST_VE_DRF_MODE0_ve_seg_mvd_drf_bist_en_src(data)                  ((0x00002000&(data))>>13)
#define  VE_MBIST_VE_DRF_MODE0_ve_rlrmem_mvbuf_drf_bist_en_src(data)             ((0x00001000&(data))>>12)
#define  VE_MBIST_VE_DRF_MODE0_ve_cm2_drf_bist_en_src(data)                      ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_DRF_MODE0_ve_cm1_drf_bist_en_src(data)                      ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_DRF_MODE0_ve_brg_drf_bist_en_src(data)                      ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_DRF_MODE0_ve_sao_drf_bist_en_src(data)                      ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_DRF_MODE0_ve_it_bs_drf_bist_en_src(data)                    ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_DRF_MODE0_ve_it_1_drf_bist_en_src(data)                     ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_DRF_MODE0_ve_it_0_1_drf_bist_en_src(data)                   ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_DRF_MODE0_ve_it_0_0_drf_bist_en_src(data)                   ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_DRF_MODE0_ve_vm_1_drf_bist_en_src(data)                     ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_DRF_MODE0_ve_vm_0_drf_bist_en_src(data)                     ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_DRF_MODE0_ve_vld_0_drf_bist_en_src(data)                    ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_DRF_MODE0_ve_rif_drf_bist_en_src(data)                      (0x00000001&(data))

#define  VE_MBIST_VE_DRF_MODE1                                                  0x1800FF20
#define  VE_MBIST_VE_DRF_MODE1_reg_addr                                          "0xB800FF20"
#define  VE_MBIST_VE_DRF_MODE1_reg                                               0xB800FF20
#define  VE_MBIST_VE_DRF_MODE1_inst_adr                                          "0x00C8"
#define  VE_MBIST_VE_DRF_MODE1_inst                                              0x00C8
#define  set_VE_MBIST_VE_DRF_MODE1_reg(data)                                     (*((volatile unsigned int*)VE_MBIST_VE_DRF_MODE1_reg)=data)
#define  get_VE_MBIST_VE_DRF_MODE1_reg                                           (*((volatile unsigned int*)VE_MBIST_VE_DRF_MODE1_reg))
#define  VE_MBIST_VE_DRF_MODE1_ve_ngh_2_bisr_drf_bist_en_shift                   (11)
#define  VE_MBIST_VE_DRF_MODE1_ve_ngh_bisr_drf_bist_en_shift                     (10)
#define  VE_MBIST_VE_DRF_MODE1_ve_cah_bisr_drf_bist_en_shift                     (9)
#define  VE_MBIST_VE_DRF_MODE1_ve_pred_2e_drf_bist_en_shift                      (8)
#define  VE_MBIST_VE_DRF_MODE1_ve_rlrmem01_drf_bist_en_shift                     (7)
#define  VE_MBIST_VE_DRF_MODE1_ve_cmprs_1_drf_bist_en_shift                      (6)
#define  VE_MBIST_VE_DRF_MODE1_ve_pred_3_2p_drf_bist_en_shift                    (5)
#define  VE_MBIST_VE_DRF_MODE1_ve_vm_2_drf_bist_en_shift                         (4)
#define  VE_MBIST_VE_DRF_MODE1_ve_ciblk_drf_bist_en_shift                        (3)
#define  VE_MBIST_VE_DRF_MODE1_ve_sr_drf_bist_en_shift                           (2)
#define  VE_MBIST_VE_DRF_MODE1_ve_cdef_drf_bist_en_shift                         (1)
#define  VE_MBIST_VE_DRF_MODE1_ve_lr_drf_bist_en_shift                           (0)
#define  VE_MBIST_VE_DRF_MODE1_ve_ngh_2_bisr_drf_bist_en_mask                    (0x00000800)
#define  VE_MBIST_VE_DRF_MODE1_ve_ngh_bisr_drf_bist_en_mask                      (0x00000400)
#define  VE_MBIST_VE_DRF_MODE1_ve_cah_bisr_drf_bist_en_mask                      (0x00000200)
#define  VE_MBIST_VE_DRF_MODE1_ve_pred_2e_drf_bist_en_mask                       (0x00000100)
#define  VE_MBIST_VE_DRF_MODE1_ve_rlrmem01_drf_bist_en_mask                      (0x00000080)
#define  VE_MBIST_VE_DRF_MODE1_ve_cmprs_1_drf_bist_en_mask                       (0x00000040)
#define  VE_MBIST_VE_DRF_MODE1_ve_pred_3_2p_drf_bist_en_mask                     (0x00000020)
#define  VE_MBIST_VE_DRF_MODE1_ve_vm_2_drf_bist_en_mask                          (0x00000010)
#define  VE_MBIST_VE_DRF_MODE1_ve_ciblk_drf_bist_en_mask                         (0x00000008)
#define  VE_MBIST_VE_DRF_MODE1_ve_sr_drf_bist_en_mask                            (0x00000004)
#define  VE_MBIST_VE_DRF_MODE1_ve_cdef_drf_bist_en_mask                          (0x00000002)
#define  VE_MBIST_VE_DRF_MODE1_ve_lr_drf_bist_en_mask                            (0x00000001)
#define  VE_MBIST_VE_DRF_MODE1_ve_ngh_2_bisr_drf_bist_en(data)                   (0x00000800&((data)<<11))
#define  VE_MBIST_VE_DRF_MODE1_ve_ngh_bisr_drf_bist_en(data)                     (0x00000400&((data)<<10))
#define  VE_MBIST_VE_DRF_MODE1_ve_cah_bisr_drf_bist_en(data)                     (0x00000200&((data)<<9))
#define  VE_MBIST_VE_DRF_MODE1_ve_pred_2e_drf_bist_en(data)                      (0x00000100&((data)<<8))
#define  VE_MBIST_VE_DRF_MODE1_ve_rlrmem01_drf_bist_en(data)                     (0x00000080&((data)<<7))
#define  VE_MBIST_VE_DRF_MODE1_ve_cmprs_1_drf_bist_en(data)                      (0x00000040&((data)<<6))
#define  VE_MBIST_VE_DRF_MODE1_ve_pred_3_2p_drf_bist_en(data)                    (0x00000020&((data)<<5))
#define  VE_MBIST_VE_DRF_MODE1_ve_vm_2_drf_bist_en(data)                         (0x00000010&((data)<<4))
#define  VE_MBIST_VE_DRF_MODE1_ve_ciblk_drf_bist_en(data)                        (0x00000008&((data)<<3))
#define  VE_MBIST_VE_DRF_MODE1_ve_sr_drf_bist_en(data)                           (0x00000004&((data)<<2))
#define  VE_MBIST_VE_DRF_MODE1_ve_cdef_drf_bist_en(data)                         (0x00000002&((data)<<1))
#define  VE_MBIST_VE_DRF_MODE1_ve_lr_drf_bist_en(data)                           (0x00000001&(data))
#define  VE_MBIST_VE_DRF_MODE1_get_ve_ngh_2_bisr_drf_bist_en(data)               ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_DRF_MODE1_get_ve_ngh_bisr_drf_bist_en(data)                 ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_DRF_MODE1_get_ve_cah_bisr_drf_bist_en(data)                 ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_DRF_MODE1_get_ve_pred_2e_drf_bist_en(data)                  ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_DRF_MODE1_get_ve_rlrmem01_drf_bist_en(data)                 ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_DRF_MODE1_get_ve_cmprs_1_drf_bist_en(data)                  ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_DRF_MODE1_get_ve_pred_3_2p_drf_bist_en(data)                ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_DRF_MODE1_get_ve_vm_2_drf_bist_en(data)                     ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_DRF_MODE1_get_ve_ciblk_drf_bist_en(data)                    ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_DRF_MODE1_get_ve_sr_drf_bist_en(data)                       ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_DRF_MODE1_get_ve_cdef_drf_bist_en(data)                     ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_DRF_MODE1_get_ve_lr_drf_bist_en(data)                       (0x00000001&(data))
#define  VE_MBIST_VE_DRF_MODE1_ve_ngh_2_bisr_drf_bist_en_src(data)               ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_DRF_MODE1_ve_ngh_bisr_drf_bist_en_src(data)                 ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_DRF_MODE1_ve_cah_bisr_drf_bist_en_src(data)                 ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_DRF_MODE1_ve_pred_2e_drf_bist_en_src(data)                  ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_DRF_MODE1_ve_rlrmem01_drf_bist_en_src(data)                 ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_DRF_MODE1_ve_cmprs_1_drf_bist_en_src(data)                  ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_DRF_MODE1_ve_pred_3_2p_drf_bist_en_src(data)                ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_DRF_MODE1_ve_vm_2_drf_bist_en_src(data)                     ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_DRF_MODE1_ve_ciblk_drf_bist_en_src(data)                    ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_DRF_MODE1_ve_sr_drf_bist_en_src(data)                       ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_DRF_MODE1_ve_cdef_drf_bist_en_src(data)                     ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_DRF_MODE1_ve_lr_drf_bist_en_src(data)                       (0x00000001&(data))

#define  VE_MBIST_VE_DRF_RESUME0                                                0x1800FF24
#define  VE_MBIST_VE_DRF_RESUME0_reg_addr                                        "0xB800FF24"
#define  VE_MBIST_VE_DRF_RESUME0_reg                                             0xB800FF24
#define  VE_MBIST_VE_DRF_RESUME0_inst_adr                                        "0x00C9"
#define  VE_MBIST_VE_DRF_RESUME0_inst                                            0x00C9
#define  set_VE_MBIST_VE_DRF_RESUME0_reg(data)                                   (*((volatile unsigned int*)VE_MBIST_VE_DRF_RESUME0_reg)=data)
#define  get_VE_MBIST_VE_DRF_RESUME0_reg                                         (*((volatile unsigned int*)VE_MBIST_VE_DRF_RESUME0_reg))
#define  VE_MBIST_VE_DRF_RESUME0_ve_mf2_drf_resume_shift                         (31)
#define  VE_MBIST_VE_DRF_RESUME0_ve_mf1_drf_resume_shift                         (30)
#define  VE_MBIST_VE_DRF_RESUME0_ve_mf0_drf_resume_shift                         (29)
#define  VE_MBIST_VE_DRF_RESUME0_ve_p2mvd_drf_resume_shift                       (28)
#define  VE_MBIST_VE_DRF_RESUME0_ve_vld_1_drf_resume_shift                       (27)
#define  VE_MBIST_VE_DRF_RESUME0_ve_p2_drf_resume_shift                          (26)
#define  VE_MBIST_VE_DRF_RESUME0_ve_clmp_drf_resume_shift                        (25)
#define  VE_MBIST_VE_DRF_RESUME0_ve_dcmprs_outbuf_drf_resume_shift               (24)
#define  VE_MBIST_VE_DRF_RESUME0_ve_pred_3_drf_resume_shift                      (23)
#define  VE_MBIST_VE_DRF_RESUME0_ve_pred_2_drf_resume_shift                      (22)
#define  VE_MBIST_VE_DRF_RESUME0_ve_pred_0_drf_resume_shift                      (21)
#define  VE_MBIST_VE_DRF_RESUME0_ve_pred_1_drf_resume_shift                      (20)
#define  VE_MBIST_VE_DRF_RESUME0_ve_cah_2p_1_drf_resume_shift                    (19)
#define  VE_MBIST_VE_DRF_RESUME0_ve_cah_2p_0_drf_resume_shift                    (18)
#define  VE_MBIST_VE_DRF_RESUME0_ve_cah_1p_drf_resume_shift                      (17)
#define  VE_MBIST_VE_DRF_RESUME0_ve_dcmprs_drf_resume_shift                      (16)
#define  VE_MBIST_VE_DRF_RESUME0_ve_cmprs_drf_resume_shift                       (15)
#define  VE_MBIST_VE_DRF_RESUME0_ve_dbk_drf_resume_shift                         (14)
#define  VE_MBIST_VE_DRF_RESUME0_ve_seg_mvd_drf_resume_shift                     (13)
#define  VE_MBIST_VE_DRF_RESUME0_ve_rlrmem_mvbuf_drf_resume_shift                (12)
#define  VE_MBIST_VE_DRF_RESUME0_ve_cm2_drf_resume_shift                         (11)
#define  VE_MBIST_VE_DRF_RESUME0_ve_cm1_drf_resume_shift                         (10)
#define  VE_MBIST_VE_DRF_RESUME0_ve_brg_drf_resume_shift                         (9)
#define  VE_MBIST_VE_DRF_RESUME0_ve_sao_drf_resume_shift                         (8)
#define  VE_MBIST_VE_DRF_RESUME0_ve_it_bs_drf_resume_shift                       (7)
#define  VE_MBIST_VE_DRF_RESUME0_ve_it_1_drf_resume_shift                        (6)
#define  VE_MBIST_VE_DRF_RESUME0_ve_it_0_1_drf_resume_shift                      (5)
#define  VE_MBIST_VE_DRF_RESUME0_ve_it_0_0_drf_resume_shift                      (4)
#define  VE_MBIST_VE_DRF_RESUME0_ve_vm_1_drf_resume_shift                        (3)
#define  VE_MBIST_VE_DRF_RESUME0_ve_vm_0_drf_resume_shift                        (2)
#define  VE_MBIST_VE_DRF_RESUME0_ve_vld_0_drf_resume_shift                       (1)
#define  VE_MBIST_VE_DRF_RESUME0_ve_rif_drf_resume_shift                         (0)
#define  VE_MBIST_VE_DRF_RESUME0_ve_mf2_drf_resume_mask                          (0x80000000)
#define  VE_MBIST_VE_DRF_RESUME0_ve_mf1_drf_resume_mask                          (0x40000000)
#define  VE_MBIST_VE_DRF_RESUME0_ve_mf0_drf_resume_mask                          (0x20000000)
#define  VE_MBIST_VE_DRF_RESUME0_ve_p2mvd_drf_resume_mask                        (0x10000000)
#define  VE_MBIST_VE_DRF_RESUME0_ve_vld_1_drf_resume_mask                        (0x08000000)
#define  VE_MBIST_VE_DRF_RESUME0_ve_p2_drf_resume_mask                           (0x04000000)
#define  VE_MBIST_VE_DRF_RESUME0_ve_clmp_drf_resume_mask                         (0x02000000)
#define  VE_MBIST_VE_DRF_RESUME0_ve_dcmprs_outbuf_drf_resume_mask                (0x01000000)
#define  VE_MBIST_VE_DRF_RESUME0_ve_pred_3_drf_resume_mask                       (0x00800000)
#define  VE_MBIST_VE_DRF_RESUME0_ve_pred_2_drf_resume_mask                       (0x00400000)
#define  VE_MBIST_VE_DRF_RESUME0_ve_pred_0_drf_resume_mask                       (0x00200000)
#define  VE_MBIST_VE_DRF_RESUME0_ve_pred_1_drf_resume_mask                       (0x00100000)
#define  VE_MBIST_VE_DRF_RESUME0_ve_cah_2p_1_drf_resume_mask                     (0x00080000)
#define  VE_MBIST_VE_DRF_RESUME0_ve_cah_2p_0_drf_resume_mask                     (0x00040000)
#define  VE_MBIST_VE_DRF_RESUME0_ve_cah_1p_drf_resume_mask                       (0x00020000)
#define  VE_MBIST_VE_DRF_RESUME0_ve_dcmprs_drf_resume_mask                       (0x00010000)
#define  VE_MBIST_VE_DRF_RESUME0_ve_cmprs_drf_resume_mask                        (0x00008000)
#define  VE_MBIST_VE_DRF_RESUME0_ve_dbk_drf_resume_mask                          (0x00004000)
#define  VE_MBIST_VE_DRF_RESUME0_ve_seg_mvd_drf_resume_mask                      (0x00002000)
#define  VE_MBIST_VE_DRF_RESUME0_ve_rlrmem_mvbuf_drf_resume_mask                 (0x00001000)
#define  VE_MBIST_VE_DRF_RESUME0_ve_cm2_drf_resume_mask                          (0x00000800)
#define  VE_MBIST_VE_DRF_RESUME0_ve_cm1_drf_resume_mask                          (0x00000400)
#define  VE_MBIST_VE_DRF_RESUME0_ve_brg_drf_resume_mask                          (0x00000200)
#define  VE_MBIST_VE_DRF_RESUME0_ve_sao_drf_resume_mask                          (0x00000100)
#define  VE_MBIST_VE_DRF_RESUME0_ve_it_bs_drf_resume_mask                        (0x00000080)
#define  VE_MBIST_VE_DRF_RESUME0_ve_it_1_drf_resume_mask                         (0x00000040)
#define  VE_MBIST_VE_DRF_RESUME0_ve_it_0_1_drf_resume_mask                       (0x00000020)
#define  VE_MBIST_VE_DRF_RESUME0_ve_it_0_0_drf_resume_mask                       (0x00000010)
#define  VE_MBIST_VE_DRF_RESUME0_ve_vm_1_drf_resume_mask                         (0x00000008)
#define  VE_MBIST_VE_DRF_RESUME0_ve_vm_0_drf_resume_mask                         (0x00000004)
#define  VE_MBIST_VE_DRF_RESUME0_ve_vld_0_drf_resume_mask                        (0x00000002)
#define  VE_MBIST_VE_DRF_RESUME0_ve_rif_drf_resume_mask                          (0x00000001)
#define  VE_MBIST_VE_DRF_RESUME0_ve_mf2_drf_resume(data)                         (0x80000000&((data)<<31))
#define  VE_MBIST_VE_DRF_RESUME0_ve_mf1_drf_resume(data)                         (0x40000000&((data)<<30))
#define  VE_MBIST_VE_DRF_RESUME0_ve_mf0_drf_resume(data)                         (0x20000000&((data)<<29))
#define  VE_MBIST_VE_DRF_RESUME0_ve_p2mvd_drf_resume(data)                       (0x10000000&((data)<<28))
#define  VE_MBIST_VE_DRF_RESUME0_ve_vld_1_drf_resume(data)                       (0x08000000&((data)<<27))
#define  VE_MBIST_VE_DRF_RESUME0_ve_p2_drf_resume(data)                          (0x04000000&((data)<<26))
#define  VE_MBIST_VE_DRF_RESUME0_ve_clmp_drf_resume(data)                        (0x02000000&((data)<<25))
#define  VE_MBIST_VE_DRF_RESUME0_ve_dcmprs_outbuf_drf_resume(data)               (0x01000000&((data)<<24))
#define  VE_MBIST_VE_DRF_RESUME0_ve_pred_3_drf_resume(data)                      (0x00800000&((data)<<23))
#define  VE_MBIST_VE_DRF_RESUME0_ve_pred_2_drf_resume(data)                      (0x00400000&((data)<<22))
#define  VE_MBIST_VE_DRF_RESUME0_ve_pred_0_drf_resume(data)                      (0x00200000&((data)<<21))
#define  VE_MBIST_VE_DRF_RESUME0_ve_pred_1_drf_resume(data)                      (0x00100000&((data)<<20))
#define  VE_MBIST_VE_DRF_RESUME0_ve_cah_2p_1_drf_resume(data)                    (0x00080000&((data)<<19))
#define  VE_MBIST_VE_DRF_RESUME0_ve_cah_2p_0_drf_resume(data)                    (0x00040000&((data)<<18))
#define  VE_MBIST_VE_DRF_RESUME0_ve_cah_1p_drf_resume(data)                      (0x00020000&((data)<<17))
#define  VE_MBIST_VE_DRF_RESUME0_ve_dcmprs_drf_resume(data)                      (0x00010000&((data)<<16))
#define  VE_MBIST_VE_DRF_RESUME0_ve_cmprs_drf_resume(data)                       (0x00008000&((data)<<15))
#define  VE_MBIST_VE_DRF_RESUME0_ve_dbk_drf_resume(data)                         (0x00004000&((data)<<14))
#define  VE_MBIST_VE_DRF_RESUME0_ve_seg_mvd_drf_resume(data)                     (0x00002000&((data)<<13))
#define  VE_MBIST_VE_DRF_RESUME0_ve_rlrmem_mvbuf_drf_resume(data)                (0x00001000&((data)<<12))
#define  VE_MBIST_VE_DRF_RESUME0_ve_cm2_drf_resume(data)                         (0x00000800&((data)<<11))
#define  VE_MBIST_VE_DRF_RESUME0_ve_cm1_drf_resume(data)                         (0x00000400&((data)<<10))
#define  VE_MBIST_VE_DRF_RESUME0_ve_brg_drf_resume(data)                         (0x00000200&((data)<<9))
#define  VE_MBIST_VE_DRF_RESUME0_ve_sao_drf_resume(data)                         (0x00000100&((data)<<8))
#define  VE_MBIST_VE_DRF_RESUME0_ve_it_bs_drf_resume(data)                       (0x00000080&((data)<<7))
#define  VE_MBIST_VE_DRF_RESUME0_ve_it_1_drf_resume(data)                        (0x00000040&((data)<<6))
#define  VE_MBIST_VE_DRF_RESUME0_ve_it_0_1_drf_resume(data)                      (0x00000020&((data)<<5))
#define  VE_MBIST_VE_DRF_RESUME0_ve_it_0_0_drf_resume(data)                      (0x00000010&((data)<<4))
#define  VE_MBIST_VE_DRF_RESUME0_ve_vm_1_drf_resume(data)                        (0x00000008&((data)<<3))
#define  VE_MBIST_VE_DRF_RESUME0_ve_vm_0_drf_resume(data)                        (0x00000004&((data)<<2))
#define  VE_MBIST_VE_DRF_RESUME0_ve_vld_0_drf_resume(data)                       (0x00000002&((data)<<1))
#define  VE_MBIST_VE_DRF_RESUME0_ve_rif_drf_resume(data)                         (0x00000001&(data))
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_mf2_drf_resume(data)                     ((0x80000000&(data))>>31)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_mf1_drf_resume(data)                     ((0x40000000&(data))>>30)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_mf0_drf_resume(data)                     ((0x20000000&(data))>>29)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_p2mvd_drf_resume(data)                   ((0x10000000&(data))>>28)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_vld_1_drf_resume(data)                   ((0x08000000&(data))>>27)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_p2_drf_resume(data)                      ((0x04000000&(data))>>26)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_clmp_drf_resume(data)                    ((0x02000000&(data))>>25)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_dcmprs_outbuf_drf_resume(data)           ((0x01000000&(data))>>24)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_pred_3_drf_resume(data)                  ((0x00800000&(data))>>23)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_pred_2_drf_resume(data)                  ((0x00400000&(data))>>22)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_pred_0_drf_resume(data)                  ((0x00200000&(data))>>21)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_pred_1_drf_resume(data)                  ((0x00100000&(data))>>20)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_cah_2p_1_drf_resume(data)                ((0x00080000&(data))>>19)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_cah_2p_0_drf_resume(data)                ((0x00040000&(data))>>18)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_cah_1p_drf_resume(data)                  ((0x00020000&(data))>>17)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_dcmprs_drf_resume(data)                  ((0x00010000&(data))>>16)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_cmprs_drf_resume(data)                   ((0x00008000&(data))>>15)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_dbk_drf_resume(data)                     ((0x00004000&(data))>>14)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_seg_mvd_drf_resume(data)                 ((0x00002000&(data))>>13)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_rlrmem_mvbuf_drf_resume(data)            ((0x00001000&(data))>>12)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_cm2_drf_resume(data)                     ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_cm1_drf_resume(data)                     ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_brg_drf_resume(data)                     ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_sao_drf_resume(data)                     ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_it_bs_drf_resume(data)                   ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_it_1_drf_resume(data)                    ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_it_0_1_drf_resume(data)                  ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_it_0_0_drf_resume(data)                  ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_vm_1_drf_resume(data)                    ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_vm_0_drf_resume(data)                    ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_vld_0_drf_resume(data)                   ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_DRF_RESUME0_get_ve_rif_drf_resume(data)                     (0x00000001&(data))
#define  VE_MBIST_VE_DRF_RESUME0_ve_mf2_drf_resume_src(data)                     ((0x80000000&(data))>>31)
#define  VE_MBIST_VE_DRF_RESUME0_ve_mf1_drf_resume_src(data)                     ((0x40000000&(data))>>30)
#define  VE_MBIST_VE_DRF_RESUME0_ve_mf0_drf_resume_src(data)                     ((0x20000000&(data))>>29)
#define  VE_MBIST_VE_DRF_RESUME0_ve_p2mvd_drf_resume_src(data)                   ((0x10000000&(data))>>28)
#define  VE_MBIST_VE_DRF_RESUME0_ve_vld_1_drf_resume_src(data)                   ((0x08000000&(data))>>27)
#define  VE_MBIST_VE_DRF_RESUME0_ve_p2_drf_resume_src(data)                      ((0x04000000&(data))>>26)
#define  VE_MBIST_VE_DRF_RESUME0_ve_clmp_drf_resume_src(data)                    ((0x02000000&(data))>>25)
#define  VE_MBIST_VE_DRF_RESUME0_ve_dcmprs_outbuf_drf_resume_src(data)           ((0x01000000&(data))>>24)
#define  VE_MBIST_VE_DRF_RESUME0_ve_pred_3_drf_resume_src(data)                  ((0x00800000&(data))>>23)
#define  VE_MBIST_VE_DRF_RESUME0_ve_pred_2_drf_resume_src(data)                  ((0x00400000&(data))>>22)
#define  VE_MBIST_VE_DRF_RESUME0_ve_pred_0_drf_resume_src(data)                  ((0x00200000&(data))>>21)
#define  VE_MBIST_VE_DRF_RESUME0_ve_pred_1_drf_resume_src(data)                  ((0x00100000&(data))>>20)
#define  VE_MBIST_VE_DRF_RESUME0_ve_cah_2p_1_drf_resume_src(data)                ((0x00080000&(data))>>19)
#define  VE_MBIST_VE_DRF_RESUME0_ve_cah_2p_0_drf_resume_src(data)                ((0x00040000&(data))>>18)
#define  VE_MBIST_VE_DRF_RESUME0_ve_cah_1p_drf_resume_src(data)                  ((0x00020000&(data))>>17)
#define  VE_MBIST_VE_DRF_RESUME0_ve_dcmprs_drf_resume_src(data)                  ((0x00010000&(data))>>16)
#define  VE_MBIST_VE_DRF_RESUME0_ve_cmprs_drf_resume_src(data)                   ((0x00008000&(data))>>15)
#define  VE_MBIST_VE_DRF_RESUME0_ve_dbk_drf_resume_src(data)                     ((0x00004000&(data))>>14)
#define  VE_MBIST_VE_DRF_RESUME0_ve_seg_mvd_drf_resume_src(data)                 ((0x00002000&(data))>>13)
#define  VE_MBIST_VE_DRF_RESUME0_ve_rlrmem_mvbuf_drf_resume_src(data)            ((0x00001000&(data))>>12)
#define  VE_MBIST_VE_DRF_RESUME0_ve_cm2_drf_resume_src(data)                     ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_DRF_RESUME0_ve_cm1_drf_resume_src(data)                     ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_DRF_RESUME0_ve_brg_drf_resume_src(data)                     ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_DRF_RESUME0_ve_sao_drf_resume_src(data)                     ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_DRF_RESUME0_ve_it_bs_drf_resume_src(data)                   ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_DRF_RESUME0_ve_it_1_drf_resume_src(data)                    ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_DRF_RESUME0_ve_it_0_1_drf_resume_src(data)                  ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_DRF_RESUME0_ve_it_0_0_drf_resume_src(data)                  ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_DRF_RESUME0_ve_vm_1_drf_resume_src(data)                    ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_DRF_RESUME0_ve_vm_0_drf_resume_src(data)                    ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_DRF_RESUME0_ve_vld_0_drf_resume_src(data)                   ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_DRF_RESUME0_ve_rif_drf_resume_src(data)                     (0x00000001&(data))

#define  VE_MBIST_VE_DRF_RESUME1                                                0x1800FF28
#define  VE_MBIST_VE_DRF_RESUME1_reg_addr                                        "0xB800FF28"
#define  VE_MBIST_VE_DRF_RESUME1_reg                                             0xB800FF28
#define  VE_MBIST_VE_DRF_RESUME1_inst_adr                                        "0x00CA"
#define  VE_MBIST_VE_DRF_RESUME1_inst                                            0x00CA
#define  set_VE_MBIST_VE_DRF_RESUME1_reg(data)                                   (*((volatile unsigned int*)VE_MBIST_VE_DRF_RESUME1_reg)=data)
#define  get_VE_MBIST_VE_DRF_RESUME1_reg                                         (*((volatile unsigned int*)VE_MBIST_VE_DRF_RESUME1_reg))
#define  VE_MBIST_VE_DRF_RESUME1_ve_ngh_2_bisr_drf_resume_shift                  (11)
#define  VE_MBIST_VE_DRF_RESUME1_ve_ngh_bisr_drf_resume_shift                    (10)
#define  VE_MBIST_VE_DRF_RESUME1_ve_cah_bisr_drf_resume_shift                    (9)
#define  VE_MBIST_VE_DRF_RESUME1_ve_pred_2e_drf_resume_shift                     (8)
#define  VE_MBIST_VE_DRF_RESUME1_ve_rlrmem01_drf_resume_shift                    (7)
#define  VE_MBIST_VE_DRF_RESUME1_ve_cmprs_1_drf_resume_shift                     (6)
#define  VE_MBIST_VE_DRF_RESUME1_ve_pred_3_2p_drf_resume_shift                   (5)
#define  VE_MBIST_VE_DRF_RESUME1_ve_vm_2_drf_resume_shift                        (4)
#define  VE_MBIST_VE_DRF_RESUME1_ve_ciblk_drf_resume_shift                       (3)
#define  VE_MBIST_VE_DRF_RESUME1_ve_sr_drf_resume_shift                          (2)
#define  VE_MBIST_VE_DRF_RESUME1_ve_cdef_drf_resume_shift                        (1)
#define  VE_MBIST_VE_DRF_RESUME1_ve_lr_drf_resume_shift                          (0)
#define  VE_MBIST_VE_DRF_RESUME1_ve_ngh_2_bisr_drf_resume_mask                   (0x00000800)
#define  VE_MBIST_VE_DRF_RESUME1_ve_ngh_bisr_drf_resume_mask                     (0x00000400)
#define  VE_MBIST_VE_DRF_RESUME1_ve_cah_bisr_drf_resume_mask                     (0x00000200)
#define  VE_MBIST_VE_DRF_RESUME1_ve_pred_2e_drf_resume_mask                      (0x00000100)
#define  VE_MBIST_VE_DRF_RESUME1_ve_rlrmem01_drf_resume_mask                     (0x00000080)
#define  VE_MBIST_VE_DRF_RESUME1_ve_cmprs_1_drf_resume_mask                      (0x00000040)
#define  VE_MBIST_VE_DRF_RESUME1_ve_pred_3_2p_drf_resume_mask                    (0x00000020)
#define  VE_MBIST_VE_DRF_RESUME1_ve_vm_2_drf_resume_mask                         (0x00000010)
#define  VE_MBIST_VE_DRF_RESUME1_ve_ciblk_drf_resume_mask                        (0x00000008)
#define  VE_MBIST_VE_DRF_RESUME1_ve_sr_drf_resume_mask                           (0x00000004)
#define  VE_MBIST_VE_DRF_RESUME1_ve_cdef_drf_resume_mask                         (0x00000002)
#define  VE_MBIST_VE_DRF_RESUME1_ve_lr_drf_resume_mask                           (0x00000001)
#define  VE_MBIST_VE_DRF_RESUME1_ve_ngh_2_bisr_drf_resume(data)                  (0x00000800&((data)<<11))
#define  VE_MBIST_VE_DRF_RESUME1_ve_ngh_bisr_drf_resume(data)                    (0x00000400&((data)<<10))
#define  VE_MBIST_VE_DRF_RESUME1_ve_cah_bisr_drf_resume(data)                    (0x00000200&((data)<<9))
#define  VE_MBIST_VE_DRF_RESUME1_ve_pred_2e_drf_resume(data)                     (0x00000100&((data)<<8))
#define  VE_MBIST_VE_DRF_RESUME1_ve_rlrmem01_drf_resume(data)                    (0x00000080&((data)<<7))
#define  VE_MBIST_VE_DRF_RESUME1_ve_cmprs_1_drf_resume(data)                     (0x00000040&((data)<<6))
#define  VE_MBIST_VE_DRF_RESUME1_ve_pred_3_2p_drf_resume(data)                   (0x00000020&((data)<<5))
#define  VE_MBIST_VE_DRF_RESUME1_ve_vm_2_drf_resume(data)                        (0x00000010&((data)<<4))
#define  VE_MBIST_VE_DRF_RESUME1_ve_ciblk_drf_resume(data)                       (0x00000008&((data)<<3))
#define  VE_MBIST_VE_DRF_RESUME1_ve_sr_drf_resume(data)                          (0x00000004&((data)<<2))
#define  VE_MBIST_VE_DRF_RESUME1_ve_cdef_drf_resume(data)                        (0x00000002&((data)<<1))
#define  VE_MBIST_VE_DRF_RESUME1_ve_lr_drf_resume(data)                          (0x00000001&(data))
#define  VE_MBIST_VE_DRF_RESUME1_get_ve_ngh_2_bisr_drf_resume(data)              ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_DRF_RESUME1_get_ve_ngh_bisr_drf_resume(data)                ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_DRF_RESUME1_get_ve_cah_bisr_drf_resume(data)                ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_DRF_RESUME1_get_ve_pred_2e_drf_resume(data)                 ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_DRF_RESUME1_get_ve_rlrmem01_drf_resume(data)                ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_DRF_RESUME1_get_ve_cmprs_1_drf_resume(data)                 ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_DRF_RESUME1_get_ve_pred_3_2p_drf_resume(data)               ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_DRF_RESUME1_get_ve_vm_2_drf_resume(data)                    ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_DRF_RESUME1_get_ve_ciblk_drf_resume(data)                   ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_DRF_RESUME1_get_ve_sr_drf_resume(data)                      ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_DRF_RESUME1_get_ve_cdef_drf_resume(data)                    ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_DRF_RESUME1_get_ve_lr_drf_resume(data)                      (0x00000001&(data))
#define  VE_MBIST_VE_DRF_RESUME1_ve_ngh_2_bisr_drf_resume_src(data)              ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_DRF_RESUME1_ve_ngh_bisr_drf_resume_src(data)                ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_DRF_RESUME1_ve_cah_bisr_drf_resume_src(data)                ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_DRF_RESUME1_ve_pred_2e_drf_resume_src(data)                 ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_DRF_RESUME1_ve_rlrmem01_drf_resume_src(data)                ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_DRF_RESUME1_ve_cmprs_1_drf_resume_src(data)                 ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_DRF_RESUME1_ve_pred_3_2p_drf_resume_src(data)               ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_DRF_RESUME1_ve_vm_2_drf_resume_src(data)                    ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_DRF_RESUME1_ve_ciblk_drf_resume_src(data)                   ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_DRF_RESUME1_ve_sr_drf_resume_src(data)                      ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_DRF_RESUME1_ve_cdef_drf_resume_src(data)                    ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_DRF_RESUME1_ve_lr_drf_resume_src(data)                      (0x00000001&(data))

#define  VE_MBIST_VE_DRF_PAUSE0                                                 0x1800FF2C
#define  VE_MBIST_VE_DRF_PAUSE0_reg_addr                                         "0xB800FF2C"
#define  VE_MBIST_VE_DRF_PAUSE0_reg                                              0xB800FF2C
#define  VE_MBIST_VE_DRF_PAUSE0_inst_adr                                         "0x00CB"
#define  VE_MBIST_VE_DRF_PAUSE0_inst                                             0x00CB
#define  set_VE_MBIST_VE_DRF_PAUSE0_reg(data)                                    (*((volatile unsigned int*)VE_MBIST_VE_DRF_PAUSE0_reg)=data)
#define  get_VE_MBIST_VE_DRF_PAUSE0_reg                                          (*((volatile unsigned int*)VE_MBIST_VE_DRF_PAUSE0_reg))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_mf2_drf_start_pause_shift                     (31)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_mf1_drf_start_pause_shift                     (30)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_mf0_drf_start_pause_shift                     (29)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_p2mvd_drf_start_pause_shift                   (28)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_vld_1_drf_start_pause_shift                   (27)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_p2_drf_start_pause_shift                      (26)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_clmp_drf_start_pause_shift                    (25)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_dcmprs_outbuf_drf_start_pause_shift           (24)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_pred_3_drf_start_pause_shift                  (23)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_pred_2_drf_start_pause_shift                  (22)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_pred_1_drf_start_pause_shift                  (21)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_pred_0_drf_start_pause_shift                  (20)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_cah_2p_1_drf_start_pause_shift                (19)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_cah_2p_0_drf_start_pause_shift                (18)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_cah_1p_drf_start_pause_shift                  (17)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_dcmprs_drf_start_pause_shift                  (16)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_cmprs_drf_start_pause_shift                   (15)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_dbk_drf_start_pause_shift                     (14)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_seg_mvd_drf_start_pause_shift                 (13)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_rlrmem_mvbuf_drf_start_pause_shift            (12)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_cm2_drf_start_pause_shift                     (11)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_cm1_drf_start_pause_shift                     (10)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_brg_drf_start_pause_shift                     (9)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_sao_drf_start_pause_shift                     (8)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_it_bs_drf_start_pause_shift                   (7)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_it_1_drf_start_pause_shift                    (6)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_it_0_1_drf_start_pause_shift                  (5)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_it_0_0_drf_start_pause_shift                  (4)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_vm_1_drf_start_pause_shift                    (3)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_vm_0_drf_start_pause_shift                    (2)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_vld_0_drf_start_pause_shift                   (1)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_rif_drf_start_pause_shift                     (0)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_mf2_drf_start_pause_mask                      (0x80000000)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_mf1_drf_start_pause_mask                      (0x40000000)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_mf0_drf_start_pause_mask                      (0x20000000)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_p2mvd_drf_start_pause_mask                    (0x10000000)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_vld_1_drf_start_pause_mask                    (0x08000000)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_p2_drf_start_pause_mask                       (0x04000000)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_clmp_drf_start_pause_mask                     (0x02000000)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_dcmprs_outbuf_drf_start_pause_mask            (0x01000000)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_pred_3_drf_start_pause_mask                   (0x00800000)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_pred_2_drf_start_pause_mask                   (0x00400000)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_pred_1_drf_start_pause_mask                   (0x00200000)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_pred_0_drf_start_pause_mask                   (0x00100000)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_cah_2p_1_drf_start_pause_mask                 (0x00080000)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_cah_2p_0_drf_start_pause_mask                 (0x00040000)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_cah_1p_drf_start_pause_mask                   (0x00020000)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_dcmprs_drf_start_pause_mask                   (0x00010000)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_cmprs_drf_start_pause_mask                    (0x00008000)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_dbk_drf_start_pause_mask                      (0x00004000)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_seg_mvd_drf_start_pause_mask                  (0x00002000)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_rlrmem_mvbuf_drf_start_pause_mask             (0x00001000)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_cm2_drf_start_pause_mask                      (0x00000800)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_cm1_drf_start_pause_mask                      (0x00000400)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_brg_drf_start_pause_mask                      (0x00000200)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_sao_drf_start_pause_mask                      (0x00000100)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_it_bs_drf_start_pause_mask                    (0x00000080)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_it_1_drf_start_pause_mask                     (0x00000040)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_it_0_1_drf_start_pause_mask                   (0x00000020)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_it_0_0_drf_start_pause_mask                   (0x00000010)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_vm_1_drf_start_pause_mask                     (0x00000008)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_vm_0_drf_start_pause_mask                     (0x00000004)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_vld_0_drf_start_pause_mask                    (0x00000002)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_rif_drf_start_pause_mask                      (0x00000001)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_mf2_drf_start_pause(data)                     (0x80000000&((data)<<31))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_mf1_drf_start_pause(data)                     (0x40000000&((data)<<30))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_mf0_drf_start_pause(data)                     (0x20000000&((data)<<29))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_p2mvd_drf_start_pause(data)                   (0x10000000&((data)<<28))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_vld_1_drf_start_pause(data)                   (0x08000000&((data)<<27))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_p2_drf_start_pause(data)                      (0x04000000&((data)<<26))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_clmp_drf_start_pause(data)                    (0x02000000&((data)<<25))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_dcmprs_outbuf_drf_start_pause(data)           (0x01000000&((data)<<24))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_pred_3_drf_start_pause(data)                  (0x00800000&((data)<<23))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_pred_2_drf_start_pause(data)                  (0x00400000&((data)<<22))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_pred_1_drf_start_pause(data)                  (0x00200000&((data)<<21))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_pred_0_drf_start_pause(data)                  (0x00100000&((data)<<20))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_cah_2p_1_drf_start_pause(data)                (0x00080000&((data)<<19))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_cah_2p_0_drf_start_pause(data)                (0x00040000&((data)<<18))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_cah_1p_drf_start_pause(data)                  (0x00020000&((data)<<17))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_dcmprs_drf_start_pause(data)                  (0x00010000&((data)<<16))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_cmprs_drf_start_pause(data)                   (0x00008000&((data)<<15))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_dbk_drf_start_pause(data)                     (0x00004000&((data)<<14))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_seg_mvd_drf_start_pause(data)                 (0x00002000&((data)<<13))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_rlrmem_mvbuf_drf_start_pause(data)            (0x00001000&((data)<<12))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_cm2_drf_start_pause(data)                     (0x00000800&((data)<<11))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_cm1_drf_start_pause(data)                     (0x00000400&((data)<<10))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_brg_drf_start_pause(data)                     (0x00000200&((data)<<9))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_sao_drf_start_pause(data)                     (0x00000100&((data)<<8))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_it_bs_drf_start_pause(data)                   (0x00000080&((data)<<7))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_it_1_drf_start_pause(data)                    (0x00000040&((data)<<6))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_it_0_1_drf_start_pause(data)                  (0x00000020&((data)<<5))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_it_0_0_drf_start_pause(data)                  (0x00000010&((data)<<4))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_vm_1_drf_start_pause(data)                    (0x00000008&((data)<<3))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_vm_0_drf_start_pause(data)                    (0x00000004&((data)<<2))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_vld_0_drf_start_pause(data)                   (0x00000002&((data)<<1))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_rif_drf_start_pause(data)                     (0x00000001&(data))
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_mf2_drf_start_pause(data)                 ((0x80000000&(data))>>31)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_mf1_drf_start_pause(data)                 ((0x40000000&(data))>>30)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_mf0_drf_start_pause(data)                 ((0x20000000&(data))>>29)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_p2mvd_drf_start_pause(data)               ((0x10000000&(data))>>28)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_vld_1_drf_start_pause(data)               ((0x08000000&(data))>>27)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_p2_drf_start_pause(data)                  ((0x04000000&(data))>>26)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_clmp_drf_start_pause(data)                ((0x02000000&(data))>>25)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_dcmprs_outbuf_drf_start_pause(data)       ((0x01000000&(data))>>24)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_pred_3_drf_start_pause(data)              ((0x00800000&(data))>>23)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_pred_2_drf_start_pause(data)              ((0x00400000&(data))>>22)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_pred_1_drf_start_pause(data)              ((0x00200000&(data))>>21)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_pred_0_drf_start_pause(data)              ((0x00100000&(data))>>20)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_cah_2p_1_drf_start_pause(data)            ((0x00080000&(data))>>19)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_cah_2p_0_drf_start_pause(data)            ((0x00040000&(data))>>18)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_cah_1p_drf_start_pause(data)              ((0x00020000&(data))>>17)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_dcmprs_drf_start_pause(data)              ((0x00010000&(data))>>16)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_cmprs_drf_start_pause(data)               ((0x00008000&(data))>>15)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_dbk_drf_start_pause(data)                 ((0x00004000&(data))>>14)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_seg_mvd_drf_start_pause(data)             ((0x00002000&(data))>>13)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_rlrmem_mvbuf_drf_start_pause(data)        ((0x00001000&(data))>>12)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_cm2_drf_start_pause(data)                 ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_cm1_drf_start_pause(data)                 ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_brg_drf_start_pause(data)                 ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_sao_drf_start_pause(data)                 ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_it_bs_drf_start_pause(data)               ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_it_1_drf_start_pause(data)                ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_it_0_1_drf_start_pause(data)              ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_it_0_0_drf_start_pause(data)              ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_vm_1_drf_start_pause(data)                ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_vm_0_drf_start_pause(data)                ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_vld_0_drf_start_pause(data)               ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_DRF_PAUSE0_get_ve_rif_drf_start_pause(data)                 (0x00000001&(data))
#define  VE_MBIST_VE_DRF_PAUSE0_ve_mf2_drf_start_pause_src(data)                 ((0x80000000&(data))>>31)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_mf1_drf_start_pause_src(data)                 ((0x40000000&(data))>>30)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_mf0_drf_start_pause_src(data)                 ((0x20000000&(data))>>29)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_p2mvd_drf_start_pause_src(data)               ((0x10000000&(data))>>28)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_vld_1_drf_start_pause_src(data)               ((0x08000000&(data))>>27)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_p2_drf_start_pause_src(data)                  ((0x04000000&(data))>>26)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_clmp_drf_start_pause_src(data)                ((0x02000000&(data))>>25)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_dcmprs_outbuf_drf_start_pause_src(data)       ((0x01000000&(data))>>24)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_pred_3_drf_start_pause_src(data)              ((0x00800000&(data))>>23)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_pred_2_drf_start_pause_src(data)              ((0x00400000&(data))>>22)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_pred_1_drf_start_pause_src(data)              ((0x00200000&(data))>>21)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_pred_0_drf_start_pause_src(data)              ((0x00100000&(data))>>20)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_cah_2p_1_drf_start_pause_src(data)            ((0x00080000&(data))>>19)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_cah_2p_0_drf_start_pause_src(data)            ((0x00040000&(data))>>18)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_cah_1p_drf_start_pause_src(data)              ((0x00020000&(data))>>17)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_dcmprs_drf_start_pause_src(data)              ((0x00010000&(data))>>16)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_cmprs_drf_start_pause_src(data)               ((0x00008000&(data))>>15)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_dbk_drf_start_pause_src(data)                 ((0x00004000&(data))>>14)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_seg_mvd_drf_start_pause_src(data)             ((0x00002000&(data))>>13)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_rlrmem_mvbuf_drf_start_pause_src(data)        ((0x00001000&(data))>>12)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_cm2_drf_start_pause_src(data)                 ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_cm1_drf_start_pause_src(data)                 ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_brg_drf_start_pause_src(data)                 ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_sao_drf_start_pause_src(data)                 ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_it_bs_drf_start_pause_src(data)               ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_it_1_drf_start_pause_src(data)                ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_it_0_1_drf_start_pause_src(data)              ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_it_0_0_drf_start_pause_src(data)              ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_vm_1_drf_start_pause_src(data)                ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_vm_0_drf_start_pause_src(data)                ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_vld_0_drf_start_pause_src(data)               ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_DRF_PAUSE0_ve_rif_drf_start_pause_src(data)                 (0x00000001&(data))

#define  VE_MBIST_VE_DRF_PAUSE1                                                 0x1800FF30
#define  VE_MBIST_VE_DRF_PAUSE1_reg_addr                                         "0xB800FF30"
#define  VE_MBIST_VE_DRF_PAUSE1_reg                                              0xB800FF30
#define  VE_MBIST_VE_DRF_PAUSE1_inst_adr                                         "0x00CC"
#define  VE_MBIST_VE_DRF_PAUSE1_inst                                             0x00CC
#define  set_VE_MBIST_VE_DRF_PAUSE1_reg(data)                                    (*((volatile unsigned int*)VE_MBIST_VE_DRF_PAUSE1_reg)=data)
#define  get_VE_MBIST_VE_DRF_PAUSE1_reg                                          (*((volatile unsigned int*)VE_MBIST_VE_DRF_PAUSE1_reg))
#define  VE_MBIST_VE_DRF_PAUSE1_ve_ngh_2_bisr_drf_start_pause_shift              (11)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_ngh_bisr_drf_start_pause_shift                (10)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_cah_bisr_drf_start_pause_shift                (9)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_pred_2e_drf_start_pause_shift                 (8)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_rlrmem01_drf_start_pause_shift                (7)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_cmprs_1_drf_start_pause_shift                 (6)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_pred_3_2p_drf_start_pause_shift               (5)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_vm_2_drf_start_pause_shift                    (4)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_ciblk_drf_start_pause_shift                   (3)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_sr_drf_start_pause_shift                      (2)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_cdef_drf_start_pause_shift                    (1)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_lr_drf_start_pause_shift                      (0)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_ngh_2_bisr_drf_start_pause_mask               (0x00000800)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_ngh_bisr_drf_start_pause_mask                 (0x00000400)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_cah_bisr_drf_start_pause_mask                 (0x00000200)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_pred_2e_drf_start_pause_mask                  (0x00000100)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_rlrmem01_drf_start_pause_mask                 (0x00000080)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_cmprs_1_drf_start_pause_mask                  (0x00000040)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_pred_3_2p_drf_start_pause_mask                (0x00000020)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_vm_2_drf_start_pause_mask                     (0x00000010)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_ciblk_drf_start_pause_mask                    (0x00000008)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_sr_drf_start_pause_mask                       (0x00000004)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_cdef_drf_start_pause_mask                     (0x00000002)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_lr_drf_start_pause_mask                       (0x00000001)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_ngh_2_bisr_drf_start_pause(data)              (0x00000800&((data)<<11))
#define  VE_MBIST_VE_DRF_PAUSE1_ve_ngh_bisr_drf_start_pause(data)                (0x00000400&((data)<<10))
#define  VE_MBIST_VE_DRF_PAUSE1_ve_cah_bisr_drf_start_pause(data)                (0x00000200&((data)<<9))
#define  VE_MBIST_VE_DRF_PAUSE1_ve_pred_2e_drf_start_pause(data)                 (0x00000100&((data)<<8))
#define  VE_MBIST_VE_DRF_PAUSE1_ve_rlrmem01_drf_start_pause(data)                (0x00000080&((data)<<7))
#define  VE_MBIST_VE_DRF_PAUSE1_ve_cmprs_1_drf_start_pause(data)                 (0x00000040&((data)<<6))
#define  VE_MBIST_VE_DRF_PAUSE1_ve_pred_3_2p_drf_start_pause(data)               (0x00000020&((data)<<5))
#define  VE_MBIST_VE_DRF_PAUSE1_ve_vm_2_drf_start_pause(data)                    (0x00000010&((data)<<4))
#define  VE_MBIST_VE_DRF_PAUSE1_ve_ciblk_drf_start_pause(data)                   (0x00000008&((data)<<3))
#define  VE_MBIST_VE_DRF_PAUSE1_ve_sr_drf_start_pause(data)                      (0x00000004&((data)<<2))
#define  VE_MBIST_VE_DRF_PAUSE1_ve_cdef_drf_start_pause(data)                    (0x00000002&((data)<<1))
#define  VE_MBIST_VE_DRF_PAUSE1_ve_lr_drf_start_pause(data)                      (0x00000001&(data))
#define  VE_MBIST_VE_DRF_PAUSE1_get_ve_ngh_2_bisr_drf_start_pause(data)          ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_DRF_PAUSE1_get_ve_ngh_bisr_drf_start_pause(data)            ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_DRF_PAUSE1_get_ve_cah_bisr_drf_start_pause(data)            ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_DRF_PAUSE1_get_ve_pred_2e_drf_start_pause(data)             ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_DRF_PAUSE1_get_ve_rlrmem01_drf_start_pause(data)            ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_DRF_PAUSE1_get_ve_cmprs_1_drf_start_pause(data)             ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_DRF_PAUSE1_get_ve_pred_3_2p_drf_start_pause(data)           ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_DRF_PAUSE1_get_ve_vm_2_drf_start_pause(data)                ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_DRF_PAUSE1_get_ve_ciblk_drf_start_pause(data)               ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_DRF_PAUSE1_get_ve_sr_drf_start_pause(data)                  ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_DRF_PAUSE1_get_ve_cdef_drf_start_pause(data)                ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_DRF_PAUSE1_get_ve_lr_drf_start_pause(data)                  (0x00000001&(data))
#define  VE_MBIST_VE_DRF_PAUSE1_ve_ngh_2_bisr_drf_start_pause_src(data)          ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_ngh_bisr_drf_start_pause_src(data)            ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_cah_bisr_drf_start_pause_src(data)            ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_pred_2e_drf_start_pause_src(data)             ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_rlrmem01_drf_start_pause_src(data)            ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_cmprs_1_drf_start_pause_src(data)             ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_pred_3_2p_drf_start_pause_src(data)           ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_vm_2_drf_start_pause_src(data)                ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_ciblk_drf_start_pause_src(data)               ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_sr_drf_start_pause_src(data)                  ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_cdef_drf_start_pause_src(data)                ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_DRF_PAUSE1_ve_lr_drf_start_pause_src(data)                  (0x00000001&(data))

#define  VE_MBIST_VE_DRF_DONE0                                                  0x1800FF34
#define  VE_MBIST_VE_DRF_DONE0_reg_addr                                          "0xB800FF34"
#define  VE_MBIST_VE_DRF_DONE0_reg                                               0xB800FF34
#define  VE_MBIST_VE_DRF_DONE0_inst_adr                                          "0x00CD"
#define  VE_MBIST_VE_DRF_DONE0_inst                                              0x00CD
#define  set_VE_MBIST_VE_DRF_DONE0_reg(data)                                     (*((volatile unsigned int*)VE_MBIST_VE_DRF_DONE0_reg)=data)
#define  get_VE_MBIST_VE_DRF_DONE0_reg                                           (*((volatile unsigned int*)VE_MBIST_VE_DRF_DONE0_reg))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_mf2_done_shift                             (31)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_mf1_done_shift                             (30)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_mf0_done_shift                             (29)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_p2mvd_done_shift                           (28)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_vld_1_done_shift                           (27)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_p2_done_shift                              (26)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_clmp_done_shift                            (25)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_dcmprs_outbuf_done_shift                   (24)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_pred_3_done_shift                          (23)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_pred_2_done_shift                          (22)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_pred_1_done_shift                          (21)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_pred_0_done_shift                          (20)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_cah_2p_1_done_shift                        (19)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_cah_2p_0_done_shift                        (18)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_cah_1p_done_shift                          (17)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_dcmprs_done_shift                          (16)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_cmprs_done_shift                           (15)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_dbk_done_shift                             (14)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_seg_mvd_done_shift                         (13)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_rlrmem_mvbuf_done_shift                    (12)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_cm2_done_shift                             (11)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_cm1_done_shift                             (10)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_brg_done_shift                             (9)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_sao_done_shift                             (8)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_it_bs_done_shift                           (7)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_it_1_done_shift                            (6)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_it_0_1_done_shift                          (5)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_it_0_0_done_shift                          (4)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_vm_1_done_shift                            (3)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_vm_0_done_shift                            (2)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_vld_0_done_shift                           (1)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_rif_done_shift                             (0)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_mf2_done_mask                              (0x80000000)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_mf1_done_mask                              (0x40000000)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_mf0_done_mask                              (0x20000000)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_p2mvd_done_mask                            (0x10000000)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_vld_1_done_mask                            (0x08000000)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_p2_done_mask                               (0x04000000)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_clmp_done_mask                             (0x02000000)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_dcmprs_outbuf_done_mask                    (0x01000000)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_pred_3_done_mask                           (0x00800000)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_pred_2_done_mask                           (0x00400000)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_pred_1_done_mask                           (0x00200000)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_pred_0_done_mask                           (0x00100000)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_cah_2p_1_done_mask                         (0x00080000)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_cah_2p_0_done_mask                         (0x00040000)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_cah_1p_done_mask                           (0x00020000)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_dcmprs_done_mask                           (0x00010000)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_cmprs_done_mask                            (0x00008000)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_dbk_done_mask                              (0x00004000)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_seg_mvd_done_mask                          (0x00002000)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_rlrmem_mvbuf_done_mask                     (0x00001000)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_cm2_done_mask                              (0x00000800)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_cm1_done_mask                              (0x00000400)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_brg_done_mask                              (0x00000200)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_sao_done_mask                              (0x00000100)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_it_bs_done_mask                            (0x00000080)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_it_1_done_mask                             (0x00000040)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_it_0_1_done_mask                           (0x00000020)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_it_0_0_done_mask                           (0x00000010)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_vm_1_done_mask                             (0x00000008)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_vm_0_done_mask                             (0x00000004)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_vld_0_done_mask                            (0x00000002)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_rif_done_mask                              (0x00000001)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_mf2_done(data)                             (0x80000000&((data)<<31))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_mf1_done(data)                             (0x40000000&((data)<<30))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_mf0_done(data)                             (0x20000000&((data)<<29))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_p2mvd_done(data)                           (0x10000000&((data)<<28))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_vld_1_done(data)                           (0x08000000&((data)<<27))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_p2_done(data)                              (0x04000000&((data)<<26))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_clmp_done(data)                            (0x02000000&((data)<<25))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_dcmprs_outbuf_done(data)                   (0x01000000&((data)<<24))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_pred_3_done(data)                          (0x00800000&((data)<<23))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_pred_2_done(data)                          (0x00400000&((data)<<22))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_pred_1_done(data)                          (0x00200000&((data)<<21))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_pred_0_done(data)                          (0x00100000&((data)<<20))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_cah_2p_1_done(data)                        (0x00080000&((data)<<19))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_cah_2p_0_done(data)                        (0x00040000&((data)<<18))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_cah_1p_done(data)                          (0x00020000&((data)<<17))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_dcmprs_done(data)                          (0x00010000&((data)<<16))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_cmprs_done(data)                           (0x00008000&((data)<<15))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_dbk_done(data)                             (0x00004000&((data)<<14))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_seg_mvd_done(data)                         (0x00002000&((data)<<13))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_rlrmem_mvbuf_done(data)                    (0x00001000&((data)<<12))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_cm2_done(data)                             (0x00000800&((data)<<11))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_cm1_done(data)                             (0x00000400&((data)<<10))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_brg_done(data)                             (0x00000200&((data)<<9))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_sao_done(data)                             (0x00000100&((data)<<8))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_it_bs_done(data)                           (0x00000080&((data)<<7))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_it_1_done(data)                            (0x00000040&((data)<<6))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_it_0_1_done(data)                          (0x00000020&((data)<<5))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_it_0_0_done(data)                          (0x00000010&((data)<<4))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_vm_1_done(data)                            (0x00000008&((data)<<3))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_vm_0_done(data)                            (0x00000004&((data)<<2))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_vld_0_done(data)                           (0x00000002&((data)<<1))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_rif_done(data)                             (0x00000001&(data))
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_mf2_done(data)                         ((0x80000000&(data))>>31)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_mf1_done(data)                         ((0x40000000&(data))>>30)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_mf0_done(data)                         ((0x20000000&(data))>>29)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_p2mvd_done(data)                       ((0x10000000&(data))>>28)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_vld_1_done(data)                       ((0x08000000&(data))>>27)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_p2_done(data)                          ((0x04000000&(data))>>26)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_clmp_done(data)                        ((0x02000000&(data))>>25)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_dcmprs_outbuf_done(data)               ((0x01000000&(data))>>24)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_pred_3_done(data)                      ((0x00800000&(data))>>23)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_pred_2_done(data)                      ((0x00400000&(data))>>22)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_pred_1_done(data)                      ((0x00200000&(data))>>21)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_pred_0_done(data)                      ((0x00100000&(data))>>20)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_cah_2p_1_done(data)                    ((0x00080000&(data))>>19)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_cah_2p_0_done(data)                    ((0x00040000&(data))>>18)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_cah_1p_done(data)                      ((0x00020000&(data))>>17)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_dcmprs_done(data)                      ((0x00010000&(data))>>16)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_cmprs_done(data)                       ((0x00008000&(data))>>15)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_dbk_done(data)                         ((0x00004000&(data))>>14)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_seg_mvd_done(data)                     ((0x00002000&(data))>>13)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_rlrmem_mvbuf_done(data)                ((0x00001000&(data))>>12)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_cm2_done(data)                         ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_cm1_done(data)                         ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_brg_done(data)                         ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_sao_done(data)                         ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_it_bs_done(data)                       ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_it_1_done(data)                        ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_it_0_1_done(data)                      ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_it_0_0_done(data)                      ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_vm_1_done(data)                        ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_vm_0_done(data)                        ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_vld_0_done(data)                       ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_DRF_DONE0_get_ve_drf_rif_done(data)                         (0x00000001&(data))
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_mf2_done_src(data)                         ((0x80000000&(data))>>31)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_mf1_done_src(data)                         ((0x40000000&(data))>>30)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_mf0_done_src(data)                         ((0x20000000&(data))>>29)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_p2mvd_done_src(data)                       ((0x10000000&(data))>>28)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_vld_1_done_src(data)                       ((0x08000000&(data))>>27)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_p2_done_src(data)                          ((0x04000000&(data))>>26)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_clmp_done_src(data)                        ((0x02000000&(data))>>25)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_dcmprs_outbuf_done_src(data)               ((0x01000000&(data))>>24)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_pred_3_done_src(data)                      ((0x00800000&(data))>>23)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_pred_2_done_src(data)                      ((0x00400000&(data))>>22)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_pred_1_done_src(data)                      ((0x00200000&(data))>>21)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_pred_0_done_src(data)                      ((0x00100000&(data))>>20)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_cah_2p_1_done_src(data)                    ((0x00080000&(data))>>19)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_cah_2p_0_done_src(data)                    ((0x00040000&(data))>>18)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_cah_1p_done_src(data)                      ((0x00020000&(data))>>17)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_dcmprs_done_src(data)                      ((0x00010000&(data))>>16)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_cmprs_done_src(data)                       ((0x00008000&(data))>>15)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_dbk_done_src(data)                         ((0x00004000&(data))>>14)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_seg_mvd_done_src(data)                     ((0x00002000&(data))>>13)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_rlrmem_mvbuf_done_src(data)                ((0x00001000&(data))>>12)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_cm2_done_src(data)                         ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_cm1_done_src(data)                         ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_brg_done_src(data)                         ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_sao_done_src(data)                         ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_it_bs_done_src(data)                       ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_it_1_done_src(data)                        ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_it_0_1_done_src(data)                      ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_it_0_0_done_src(data)                      ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_vm_1_done_src(data)                        ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_vm_0_done_src(data)                        ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_vld_0_done_src(data)                       ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_DRF_DONE0_ve_drf_rif_done_src(data)                         (0x00000001&(data))

#define  VE_MBIST_VE_DRF_DONE1                                                  0x1800FF38
#define  VE_MBIST_VE_DRF_DONE1_reg_addr                                          "0xB800FF38"
#define  VE_MBIST_VE_DRF_DONE1_reg                                               0xB800FF38
#define  VE_MBIST_VE_DRF_DONE1_inst_adr                                          "0x00CE"
#define  VE_MBIST_VE_DRF_DONE1_inst                                              0x00CE
#define  set_VE_MBIST_VE_DRF_DONE1_reg(data)                                     (*((volatile unsigned int*)VE_MBIST_VE_DRF_DONE1_reg)=data)
#define  get_VE_MBIST_VE_DRF_DONE1_reg                                           (*((volatile unsigned int*)VE_MBIST_VE_DRF_DONE1_reg))
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_ngh_2_bisr_done_shift                      (11)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_ngh_bisr_done_shift                        (10)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_cah_bisr_done_shift                        (9)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_pred_2e_done_shift                         (8)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_rlrmem01_done_shift                        (7)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_cmprs_1_done_shift                         (6)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_pred_3_2p_done_shift                       (5)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_vm_2_done_shift                            (4)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_ciblk_done_shift                           (3)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_sr_done_shift                              (2)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_cdef_done_shift                            (1)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_lr_done_shift                              (0)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_ngh_2_bisr_done_mask                       (0x00000800)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_ngh_bisr_done_mask                         (0x00000400)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_cah_bisr_done_mask                         (0x00000200)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_pred_2e_done_mask                          (0x00000100)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_rlrmem01_done_mask                         (0x00000080)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_cmprs_1_done_mask                          (0x00000040)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_pred_3_2p_done_mask                        (0x00000020)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_vm_2_done_mask                             (0x00000010)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_ciblk_done_mask                            (0x00000008)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_sr_done_mask                               (0x00000004)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_cdef_done_mask                             (0x00000002)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_lr_done_mask                               (0x00000001)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_ngh_2_bisr_done(data)                      (0x00000800&((data)<<11))
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_ngh_bisr_done(data)                        (0x00000400&((data)<<10))
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_cah_bisr_done(data)                        (0x00000200&((data)<<9))
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_pred_2e_done(data)                         (0x00000100&((data)<<8))
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_rlrmem01_done(data)                        (0x00000080&((data)<<7))
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_cmprs_1_done(data)                         (0x00000040&((data)<<6))
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_pred_3_2p_done(data)                       (0x00000020&((data)<<5))
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_vm_2_done(data)                            (0x00000010&((data)<<4))
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_ciblk_done(data)                           (0x00000008&((data)<<3))
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_sr_done(data)                              (0x00000004&((data)<<2))
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_cdef_done(data)                            (0x00000002&((data)<<1))
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_lr_done(data)                              (0x00000001&(data))
#define  VE_MBIST_VE_DRF_DONE1_get_ve_drf_ngh_2_bisr_done(data)                  ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_DRF_DONE1_get_ve_drf_ngh_bisr_done(data)                    ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_DRF_DONE1_get_ve_drf_cah_bisr_done(data)                    ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_DRF_DONE1_get_ve_drf_pred_2e_done(data)                     ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_DRF_DONE1_get_ve_drf_rlrmem01_done(data)                    ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_DRF_DONE1_get_ve_drf_cmprs_1_done(data)                     ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_DRF_DONE1_get_ve_drf_pred_3_2p_done(data)                   ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_DRF_DONE1_get_ve_drf_vm_2_done(data)                        ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_DRF_DONE1_get_ve_drf_ciblk_done(data)                       ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_DRF_DONE1_get_ve_drf_sr_done(data)                          ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_DRF_DONE1_get_ve_drf_cdef_done(data)                        ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_DRF_DONE1_get_ve_drf_lr_done(data)                          (0x00000001&(data))
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_ngh_2_bisr_done_src(data)                  ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_ngh_bisr_done_src(data)                    ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_cah_bisr_done_src(data)                    ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_pred_2e_done_src(data)                     ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_rlrmem01_done_src(data)                    ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_cmprs_1_done_src(data)                     ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_pred_3_2p_done_src(data)                   ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_vm_2_done_src(data)                        ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_ciblk_done_src(data)                       ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_sr_done_src(data)                          ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_cdef_done_src(data)                        ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_DRF_DONE1_ve_drf_lr_done_src(data)                          (0x00000001&(data))

#define  VE_MBIST_VE_DRF_FAIL_GROUP0                                            0x1800FF3C
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_reg_addr                                    "0xB800FF3C"
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_reg                                         0xB800FF3C
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_inst_adr                                    "0x00CF"
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_inst                                        0x00CF
#define  set_VE_MBIST_VE_DRF_FAIL_GROUP0_reg(data)                               (*((volatile unsigned int*)VE_MBIST_VE_DRF_FAIL_GROUP0_reg)=data)
#define  get_VE_MBIST_VE_DRF_FAIL_GROUP0_reg                                     (*((volatile unsigned int*)VE_MBIST_VE_DRF_FAIL_GROUP0_reg))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_mf2_fail_group_shift                 (31)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_mf1_fail_group_shift                 (30)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_mf0_fail_group_shift                 (29)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_p2mvd_fail_group_shift               (28)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_vld_1_fail_group_shift               (27)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_p2_fail_group_shift                  (26)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_clmp_fail_group_shift                (25)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_dcmprs_outbuf_fail_group_shift       (24)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_pred_3_fail_group_shift              (23)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_pred_2_fail_group_shift              (22)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_pred_1_fail_group_shift              (21)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_pred_0_fail_group_shift              (20)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_cah_2p_1_fail_group_shift            (19)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_cah_2p_0_fail_group_shift            (18)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_cah_1p_fail_group_shift              (17)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_dcmprs_fail_group_shift              (16)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_cmprs_fail_group_shift               (15)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_dbk_fail_group_shift                 (14)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_seg_mvd_fail_group_shift             (13)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_rlrmem_mvbuf_fail_group_shift        (12)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_cm2_fail_group_shift                 (11)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_cm1_fail_group_shift                 (10)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_brg_fail_group_shift                 (9)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_sao_fail_group_shift                 (8)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_it_bs_fail_group_shift               (7)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_it_1_fail_group_shift                (6)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_it_0_1_fail_group_shift              (5)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_it_0_0_fail_group_shift              (4)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_vm_1_fail_group_shift                (3)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_vm_0_fail_group_shift                (2)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_vld_0_fail_group_shift               (1)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_rif_fail_group_shift                 (0)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_mf2_fail_group_mask                  (0x80000000)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_mf1_fail_group_mask                  (0x40000000)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_mf0_fail_group_mask                  (0x20000000)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_p2mvd_fail_group_mask                (0x10000000)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_vld_1_fail_group_mask                (0x08000000)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_p2_fail_group_mask                   (0x04000000)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_clmp_fail_group_mask                 (0x02000000)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_dcmprs_outbuf_fail_group_mask        (0x01000000)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_pred_3_fail_group_mask               (0x00800000)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_pred_2_fail_group_mask               (0x00400000)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_pred_1_fail_group_mask               (0x00200000)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_pred_0_fail_group_mask               (0x00100000)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_cah_2p_1_fail_group_mask             (0x00080000)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_cah_2p_0_fail_group_mask             (0x00040000)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_cah_1p_fail_group_mask               (0x00020000)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_dcmprs_fail_group_mask               (0x00010000)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_cmprs_fail_group_mask                (0x00008000)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_dbk_fail_group_mask                  (0x00004000)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_seg_mvd_fail_group_mask              (0x00002000)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_rlrmem_mvbuf_fail_group_mask         (0x00001000)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_cm2_fail_group_mask                  (0x00000800)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_cm1_fail_group_mask                  (0x00000400)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_brg_fail_group_mask                  (0x00000200)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_sao_fail_group_mask                  (0x00000100)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_it_bs_fail_group_mask                (0x00000080)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_it_1_fail_group_mask                 (0x00000040)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_it_0_1_fail_group_mask               (0x00000020)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_it_0_0_fail_group_mask               (0x00000010)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_vm_1_fail_group_mask                 (0x00000008)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_vm_0_fail_group_mask                 (0x00000004)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_vld_0_fail_group_mask                (0x00000002)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_rif_fail_group_mask                  (0x00000001)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_mf2_fail_group(data)                 (0x80000000&((data)<<31))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_mf1_fail_group(data)                 (0x40000000&((data)<<30))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_mf0_fail_group(data)                 (0x20000000&((data)<<29))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_p2mvd_fail_group(data)               (0x10000000&((data)<<28))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_vld_1_fail_group(data)               (0x08000000&((data)<<27))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_p2_fail_group(data)                  (0x04000000&((data)<<26))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_clmp_fail_group(data)                (0x02000000&((data)<<25))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_dcmprs_outbuf_fail_group(data)       (0x01000000&((data)<<24))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_pred_3_fail_group(data)              (0x00800000&((data)<<23))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_pred_2_fail_group(data)              (0x00400000&((data)<<22))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_pred_1_fail_group(data)              (0x00200000&((data)<<21))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_pred_0_fail_group(data)              (0x00100000&((data)<<20))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_cah_2p_1_fail_group(data)            (0x00080000&((data)<<19))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_cah_2p_0_fail_group(data)            (0x00040000&((data)<<18))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_cah_1p_fail_group(data)              (0x00020000&((data)<<17))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_dcmprs_fail_group(data)              (0x00010000&((data)<<16))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_cmprs_fail_group(data)               (0x00008000&((data)<<15))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_dbk_fail_group(data)                 (0x00004000&((data)<<14))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_seg_mvd_fail_group(data)             (0x00002000&((data)<<13))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_rlrmem_mvbuf_fail_group(data)        (0x00001000&((data)<<12))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_cm2_fail_group(data)                 (0x00000800&((data)<<11))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_cm1_fail_group(data)                 (0x00000400&((data)<<10))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_brg_fail_group(data)                 (0x00000200&((data)<<9))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_sao_fail_group(data)                 (0x00000100&((data)<<8))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_it_bs_fail_group(data)               (0x00000080&((data)<<7))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_it_1_fail_group(data)                (0x00000040&((data)<<6))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_it_0_1_fail_group(data)              (0x00000020&((data)<<5))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_it_0_0_fail_group(data)              (0x00000010&((data)<<4))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_vm_1_fail_group(data)                (0x00000008&((data)<<3))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_vm_0_fail_group(data)                (0x00000004&((data)<<2))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_vld_0_fail_group(data)               (0x00000002&((data)<<1))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_rif_fail_group(data)                 (0x00000001&(data))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_mf2_fail_group(data)             ((0x80000000&(data))>>31)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_mf1_fail_group(data)             ((0x40000000&(data))>>30)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_mf0_fail_group(data)             ((0x20000000&(data))>>29)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_p2mvd_fail_group(data)           ((0x10000000&(data))>>28)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_vld_1_fail_group(data)           ((0x08000000&(data))>>27)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_p2_fail_group(data)              ((0x04000000&(data))>>26)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_clmp_fail_group(data)            ((0x02000000&(data))>>25)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_dcmprs_outbuf_fail_group(data)   ((0x01000000&(data))>>24)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_pred_3_fail_group(data)          ((0x00800000&(data))>>23)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_pred_2_fail_group(data)          ((0x00400000&(data))>>22)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_pred_1_fail_group(data)          ((0x00200000&(data))>>21)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_pred_0_fail_group(data)          ((0x00100000&(data))>>20)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_cah_2p_1_fail_group(data)        ((0x00080000&(data))>>19)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_cah_2p_0_fail_group(data)        ((0x00040000&(data))>>18)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_cah_1p_fail_group(data)          ((0x00020000&(data))>>17)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_dcmprs_fail_group(data)          ((0x00010000&(data))>>16)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_cmprs_fail_group(data)           ((0x00008000&(data))>>15)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_dbk_fail_group(data)             ((0x00004000&(data))>>14)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_seg_mvd_fail_group(data)         ((0x00002000&(data))>>13)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_rlrmem_mvbuf_fail_group(data)    ((0x00001000&(data))>>12)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_cm2_fail_group(data)             ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_cm1_fail_group(data)             ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_brg_fail_group(data)             ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_sao_fail_group(data)             ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_it_bs_fail_group(data)           ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_it_1_fail_group(data)            ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_it_0_1_fail_group(data)          ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_it_0_0_fail_group(data)          ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_vm_1_fail_group(data)            ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_vm_0_fail_group(data)            ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_vld_0_fail_group(data)           ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_get_ve_drf_rif_fail_group(data)             (0x00000001&(data))
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_mf2_fail_group_src(data)             ((0x80000000&(data))>>31)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_mf1_fail_group_src(data)             ((0x40000000&(data))>>30)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_mf0_fail_group_src(data)             ((0x20000000&(data))>>29)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_p2mvd_fail_group_src(data)           ((0x10000000&(data))>>28)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_vld_1_fail_group_src(data)           ((0x08000000&(data))>>27)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_p2_fail_group_src(data)              ((0x04000000&(data))>>26)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_clmp_fail_group_src(data)            ((0x02000000&(data))>>25)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_dcmprs_outbuf_fail_group_src(data)   ((0x01000000&(data))>>24)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_pred_3_fail_group_src(data)          ((0x00800000&(data))>>23)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_pred_2_fail_group_src(data)          ((0x00400000&(data))>>22)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_pred_1_fail_group_src(data)          ((0x00200000&(data))>>21)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_pred_0_fail_group_src(data)          ((0x00100000&(data))>>20)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_cah_2p_1_fail_group_src(data)        ((0x00080000&(data))>>19)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_cah_2p_0_fail_group_src(data)        ((0x00040000&(data))>>18)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_cah_1p_fail_group_src(data)          ((0x00020000&(data))>>17)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_dcmprs_fail_group_src(data)          ((0x00010000&(data))>>16)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_cmprs_fail_group_src(data)           ((0x00008000&(data))>>15)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_dbk_fail_group_src(data)             ((0x00004000&(data))>>14)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_seg_mvd_fail_group_src(data)         ((0x00002000&(data))>>13)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_rlrmem_mvbuf_fail_group_src(data)    ((0x00001000&(data))>>12)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_cm2_fail_group_src(data)             ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_cm1_fail_group_src(data)             ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_brg_fail_group_src(data)             ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_sao_fail_group_src(data)             ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_it_bs_fail_group_src(data)           ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_it_1_fail_group_src(data)            ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_it_0_1_fail_group_src(data)          ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_it_0_0_fail_group_src(data)          ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_vm_1_fail_group_src(data)            ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_vm_0_fail_group_src(data)            ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_vld_0_fail_group_src(data)           ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_DRF_FAIL_GROUP0_ve_drf_rif_fail_group_src(data)             (0x00000001&(data))

#define  VE_MBIST_VE_DRF_FAIL_GROUP1                                            0x1800FF40
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_reg_addr                                    "0xB800FF40"
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_reg                                         0xB800FF40
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_inst_adr                                    "0x00D0"
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_inst                                        0x00D0
#define  set_VE_MBIST_VE_DRF_FAIL_GROUP1_reg(data)                               (*((volatile unsigned int*)VE_MBIST_VE_DRF_FAIL_GROUP1_reg)=data)
#define  get_VE_MBIST_VE_DRF_FAIL_GROUP1_reg                                     (*((volatile unsigned int*)VE_MBIST_VE_DRF_FAIL_GROUP1_reg))
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_ngh_2_bisr_fail_group_shift          (11)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_ngh_bisr_fail_group_shift            (10)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_cah_bisr_fail_group_shift            (9)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_pred_2e_fail_group_shift             (8)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_rlrmem01_fail_group_shift            (7)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_cmprs_1_fail_group_shift             (6)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_pred_3_2p_fail_group_shift           (5)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_vm_2_fail_group_shift                (4)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_ciblk_fail_group_shift               (3)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_sr_fail_group_shift                  (2)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_cdef_fail_group_shift                (1)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_lr_fail_group_shift                  (0)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_ngh_2_bisr_fail_group_mask           (0x00000800)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_ngh_bisr_fail_group_mask             (0x00000400)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_cah_bisr_fail_group_mask             (0x00000200)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_pred_2e_fail_group_mask              (0x00000100)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_rlrmem01_fail_group_mask             (0x00000080)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_cmprs_1_fail_group_mask              (0x00000040)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_pred_3_2p_fail_group_mask            (0x00000020)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_vm_2_fail_group_mask                 (0x00000010)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_ciblk_fail_group_mask                (0x00000008)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_sr_fail_group_mask                   (0x00000004)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_cdef_fail_group_mask                 (0x00000002)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_lr_fail_group_mask                   (0x00000001)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_ngh_2_bisr_fail_group(data)          (0x00000800&((data)<<11))
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_ngh_bisr_fail_group(data)            (0x00000400&((data)<<10))
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_cah_bisr_fail_group(data)            (0x00000200&((data)<<9))
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_pred_2e_fail_group(data)             (0x00000100&((data)<<8))
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_rlrmem01_fail_group(data)            (0x00000080&((data)<<7))
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_cmprs_1_fail_group(data)             (0x00000040&((data)<<6))
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_pred_3_2p_fail_group(data)           (0x00000020&((data)<<5))
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_vm_2_fail_group(data)                (0x00000010&((data)<<4))
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_ciblk_fail_group(data)               (0x00000008&((data)<<3))
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_sr_fail_group(data)                  (0x00000004&((data)<<2))
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_cdef_fail_group(data)                (0x00000002&((data)<<1))
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_lr_fail_group(data)                  (0x00000001&(data))
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_get_ve_drf_ngh_2_bisr_fail_group(data)      ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_get_ve_drf_ngh_bisr_fail_group(data)        ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_get_ve_drf_cah_bisr_fail_group(data)        ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_get_ve_drf_pred_2e_fail_group(data)         ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_get_ve_drf_rlrmem01_fail_group(data)        ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_get_ve_drf_cmprs_1_fail_group(data)         ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_get_ve_drf_pred_3_2p_fail_group(data)       ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_get_ve_drf_vm_2_fail_group(data)            ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_get_ve_drf_ciblk_fail_group(data)           ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_get_ve_drf_sr_fail_group(data)              ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_get_ve_drf_cdef_fail_group(data)            ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_get_ve_drf_lr_fail_group(data)              (0x00000001&(data))
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_ngh_2_bisr_fail_group_src(data)      ((0x00000800&(data))>>11)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_ngh_bisr_fail_group_src(data)        ((0x00000400&(data))>>10)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_cah_bisr_fail_group_src(data)        ((0x00000200&(data))>>9)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_pred_2e_fail_group_src(data)         ((0x00000100&(data))>>8)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_rlrmem01_fail_group_src(data)        ((0x00000080&(data))>>7)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_cmprs_1_fail_group_src(data)         ((0x00000040&(data))>>6)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_pred_3_2p_fail_group_src(data)       ((0x00000020&(data))>>5)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_vm_2_fail_group_src(data)            ((0x00000010&(data))>>4)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_ciblk_fail_group_src(data)           ((0x00000008&(data))>>3)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_sr_fail_group_src(data)              ((0x00000004&(data))>>2)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_cdef_fail_group_src(data)            ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_DRF_FAIL_GROUP1_ve_drf_lr_fail_group_src(data)              (0x00000001&(data))

#define  VE_MBIST_CAH_BISR_SECOND_RUN_EN                                        0x1800FF48
#define  VE_MBIST_CAH_BISR_SECOND_RUN_EN_reg_addr                                "0xB800FF48"
#define  VE_MBIST_CAH_BISR_SECOND_RUN_EN_reg                                     0xB800FF48
#define  VE_MBIST_CAH_BISR_SECOND_RUN_EN_inst_adr                                "0x00D2"
#define  VE_MBIST_CAH_BISR_SECOND_RUN_EN_inst                                    0x00D2
#define  set_VE_MBIST_CAH_BISR_SECOND_RUN_EN_reg(data)                           (*((volatile unsigned int*)VE_MBIST_CAH_BISR_SECOND_RUN_EN_reg)=data)
#define  get_VE_MBIST_CAH_BISR_SECOND_RUN_EN_reg                                 (*((volatile unsigned int*)VE_MBIST_CAH_BISR_SECOND_RUN_EN_reg))
#define  VE_MBIST_CAH_BISR_SECOND_RUN_EN_ve_ngh_2_bisr_second_run_shift          (2)
#define  VE_MBIST_CAH_BISR_SECOND_RUN_EN_ve_ngh_bisr_second_run_shift            (1)
#define  VE_MBIST_CAH_BISR_SECOND_RUN_EN_ve_cah_bisr_second_run_shift            (0)
#define  VE_MBIST_CAH_BISR_SECOND_RUN_EN_ve_ngh_2_bisr_second_run_mask           (0x00000004)
#define  VE_MBIST_CAH_BISR_SECOND_RUN_EN_ve_ngh_bisr_second_run_mask             (0x00000002)
#define  VE_MBIST_CAH_BISR_SECOND_RUN_EN_ve_cah_bisr_second_run_mask             (0x00000001)
#define  VE_MBIST_CAH_BISR_SECOND_RUN_EN_ve_ngh_2_bisr_second_run(data)          (0x00000004&((data)<<2))
#define  VE_MBIST_CAH_BISR_SECOND_RUN_EN_ve_ngh_bisr_second_run(data)            (0x00000002&((data)<<1))
#define  VE_MBIST_CAH_BISR_SECOND_RUN_EN_ve_cah_bisr_second_run(data)            (0x00000001&(data))
#define  VE_MBIST_CAH_BISR_SECOND_RUN_EN_get_ve_ngh_2_bisr_second_run(data)      ((0x00000004&(data))>>2)
#define  VE_MBIST_CAH_BISR_SECOND_RUN_EN_get_ve_ngh_bisr_second_run(data)        ((0x00000002&(data))>>1)
#define  VE_MBIST_CAH_BISR_SECOND_RUN_EN_get_ve_cah_bisr_second_run(data)        (0x00000001&(data))
#define  VE_MBIST_CAH_BISR_SECOND_RUN_EN_ve_ngh_2_bisr_second_run_src(data)      ((0x00000004&(data))>>2)
#define  VE_MBIST_CAH_BISR_SECOND_RUN_EN_ve_ngh_bisr_second_run_src(data)        ((0x00000002&(data))>>1)
#define  VE_MBIST_CAH_BISR_SECOND_RUN_EN_ve_cah_bisr_second_run_src(data)        (0x00000001&(data))

#define  VE_MBIST_CAH_BISR_FAIL_GROUP                                           0x1800FF4C
#define  VE_MBIST_CAH_BISR_FAIL_GROUP_reg_addr                                   "0xB800FF4C"
#define  VE_MBIST_CAH_BISR_FAIL_GROUP_reg                                        0xB800FF4C
#define  VE_MBIST_CAH_BISR_FAIL_GROUP_inst_adr                                   "0x00D3"
#define  VE_MBIST_CAH_BISR_FAIL_GROUP_inst                                       0x00D3
#define  set_VE_MBIST_CAH_BISR_FAIL_GROUP_reg(data)                              (*((volatile unsigned int*)VE_MBIST_CAH_BISR_FAIL_GROUP_reg)=data)
#define  get_VE_MBIST_CAH_BISR_FAIL_GROUP_reg                                    (*((volatile unsigned int*)VE_MBIST_CAH_BISR_FAIL_GROUP_reg))
#define  VE_MBIST_CAH_BISR_FAIL_GROUP_ve_ngh_2_bisr_fail_group_shift             (2)
#define  VE_MBIST_CAH_BISR_FAIL_GROUP_ve_ngh_bisr_fail_group_shift               (1)
#define  VE_MBIST_CAH_BISR_FAIL_GROUP_ve_cah_bisr_fail_group_shift               (0)
#define  VE_MBIST_CAH_BISR_FAIL_GROUP_ve_ngh_2_bisr_fail_group_mask              (0x00000004)
#define  VE_MBIST_CAH_BISR_FAIL_GROUP_ve_ngh_bisr_fail_group_mask                (0x00000002)
#define  VE_MBIST_CAH_BISR_FAIL_GROUP_ve_cah_bisr_fail_group_mask                (0x00000001)
#define  VE_MBIST_CAH_BISR_FAIL_GROUP_ve_ngh_2_bisr_fail_group(data)             (0x00000004&((data)<<2))
#define  VE_MBIST_CAH_BISR_FAIL_GROUP_ve_ngh_bisr_fail_group(data)               (0x00000002&((data)<<1))
#define  VE_MBIST_CAH_BISR_FAIL_GROUP_ve_cah_bisr_fail_group(data)               (0x00000001&(data))
#define  VE_MBIST_CAH_BISR_FAIL_GROUP_get_ve_ngh_2_bisr_fail_group(data)         ((0x00000004&(data))>>2)
#define  VE_MBIST_CAH_BISR_FAIL_GROUP_get_ve_ngh_bisr_fail_group(data)           ((0x00000002&(data))>>1)
#define  VE_MBIST_CAH_BISR_FAIL_GROUP_get_ve_cah_bisr_fail_group(data)           (0x00000001&(data))
#define  VE_MBIST_CAH_BISR_FAIL_GROUP_ve_ngh_2_bisr_fail_group_src(data)         ((0x00000004&(data))>>2)
#define  VE_MBIST_CAH_BISR_FAIL_GROUP_ve_ngh_bisr_fail_group_src(data)           ((0x00000002&(data))>>1)
#define  VE_MBIST_CAH_BISR_FAIL_GROUP_ve_cah_bisr_fail_group_src(data)           (0x00000001&(data))

#define  VE_MBIST_VE_BIST_RIF_FAIL                                              0x1800FF50
#define  VE_MBIST_VE_BIST_RIF_FAIL_reg_addr                                      "0xB800FF50"
#define  VE_MBIST_VE_BIST_RIF_FAIL_reg                                           0xB800FF50
#define  VE_MBIST_VE_BIST_RIF_FAIL_inst_adr                                      "0x00D4"
#define  VE_MBIST_VE_BIST_RIF_FAIL_inst                                          0x00D4
#define  set_VE_MBIST_VE_BIST_RIF_FAIL_reg(data)                                 (*((volatile unsigned int*)VE_MBIST_VE_BIST_RIF_FAIL_reg)=data)
#define  get_VE_MBIST_VE_BIST_RIF_FAIL_reg                                       (*((volatile unsigned int*)VE_MBIST_VE_BIST_RIF_FAIL_reg))
#define  VE_MBIST_VE_BIST_RIF_FAIL_ve_bist_p2_fail_shift                         (25)
#define  VE_MBIST_VE_BIST_RIF_FAIL_ve_bist_vld_1_fail_shift                      (15)
#define  VE_MBIST_VE_BIST_RIF_FAIL_ve_bist_vld_0_fail_shift                      (5)
#define  VE_MBIST_VE_BIST_RIF_FAIL_ve_bist_rif_fail_shift                        (0)
#define  VE_MBIST_VE_BIST_RIF_FAIL_ve_bist_p2_fail_mask                          (0x3E000000)
#define  VE_MBIST_VE_BIST_RIF_FAIL_ve_bist_vld_1_fail_mask                       (0x01FF8000)
#define  VE_MBIST_VE_BIST_RIF_FAIL_ve_bist_vld_0_fail_mask                       (0x00007FE0)
#define  VE_MBIST_VE_BIST_RIF_FAIL_ve_bist_rif_fail_mask                         (0x0000001F)
#define  VE_MBIST_VE_BIST_RIF_FAIL_ve_bist_p2_fail(data)                         (0x3E000000&((data)<<25))
#define  VE_MBIST_VE_BIST_RIF_FAIL_ve_bist_vld_1_fail(data)                      (0x01FF8000&((data)<<15))
#define  VE_MBIST_VE_BIST_RIF_FAIL_ve_bist_vld_0_fail(data)                      (0x00007FE0&((data)<<5))
#define  VE_MBIST_VE_BIST_RIF_FAIL_ve_bist_rif_fail(data)                        (0x0000001F&(data))
#define  VE_MBIST_VE_BIST_RIF_FAIL_get_ve_bist_p2_fail(data)                     ((0x3E000000&(data))>>25)
#define  VE_MBIST_VE_BIST_RIF_FAIL_get_ve_bist_vld_1_fail(data)                  ((0x01FF8000&(data))>>15)
#define  VE_MBIST_VE_BIST_RIF_FAIL_get_ve_bist_vld_0_fail(data)                  ((0x00007FE0&(data))>>5)
#define  VE_MBIST_VE_BIST_RIF_FAIL_get_ve_bist_rif_fail(data)                    (0x0000001F&(data))
#define  VE_MBIST_VE_BIST_RIF_FAIL_ve_bist_p2_fail_src(data)                     ((0x3E000000&(data))>>25)
#define  VE_MBIST_VE_BIST_RIF_FAIL_ve_bist_vld_1_fail_src(data)                  ((0x01FF8000&(data))>>15)
#define  VE_MBIST_VE_BIST_RIF_FAIL_ve_bist_vld_0_fail_src(data)                  ((0x00007FE0&(data))>>5)
#define  VE_MBIST_VE_BIST_RIF_FAIL_ve_bist_rif_fail_src(data)                    (0x0000001F&(data))

#define  VE_MBIST_VE_DRF_RIF_FAIL                                               0x1800FF54
#define  VE_MBIST_VE_DRF_RIF_FAIL_reg_addr                                       "0xB800FF54"
#define  VE_MBIST_VE_DRF_RIF_FAIL_reg                                            0xB800FF54
#define  VE_MBIST_VE_DRF_RIF_FAIL_inst_adr                                       "0x00D5"
#define  VE_MBIST_VE_DRF_RIF_FAIL_inst                                           0x00D5
#define  set_VE_MBIST_VE_DRF_RIF_FAIL_reg(data)                                  (*((volatile unsigned int*)VE_MBIST_VE_DRF_RIF_FAIL_reg)=data)
#define  get_VE_MBIST_VE_DRF_RIF_FAIL_reg                                        (*((volatile unsigned int*)VE_MBIST_VE_DRF_RIF_FAIL_reg))
#define  VE_MBIST_VE_DRF_RIF_FAIL_ve_drf_p2_fail_shift                           (25)
#define  VE_MBIST_VE_DRF_RIF_FAIL_ve_drf_vld_1_fail_shift                        (15)
#define  VE_MBIST_VE_DRF_RIF_FAIL_ve_drf_vld_0_fail_shift                        (5)
#define  VE_MBIST_VE_DRF_RIF_FAIL_ve_drf_rif_fail_shift                          (0)
#define  VE_MBIST_VE_DRF_RIF_FAIL_ve_drf_p2_fail_mask                            (0x3E000000)
#define  VE_MBIST_VE_DRF_RIF_FAIL_ve_drf_vld_1_fail_mask                         (0x01FF8000)
#define  VE_MBIST_VE_DRF_RIF_FAIL_ve_drf_vld_0_fail_mask                         (0x00007FE0)
#define  VE_MBIST_VE_DRF_RIF_FAIL_ve_drf_rif_fail_mask                           (0x0000001F)
#define  VE_MBIST_VE_DRF_RIF_FAIL_ve_drf_p2_fail(data)                           (0x3E000000&((data)<<25))
#define  VE_MBIST_VE_DRF_RIF_FAIL_ve_drf_vld_1_fail(data)                        (0x01FF8000&((data)<<15))
#define  VE_MBIST_VE_DRF_RIF_FAIL_ve_drf_vld_0_fail(data)                        (0x00007FE0&((data)<<5))
#define  VE_MBIST_VE_DRF_RIF_FAIL_ve_drf_rif_fail(data)                          (0x0000001F&(data))
#define  VE_MBIST_VE_DRF_RIF_FAIL_get_ve_drf_p2_fail(data)                       ((0x3E000000&(data))>>25)
#define  VE_MBIST_VE_DRF_RIF_FAIL_get_ve_drf_vld_1_fail(data)                    ((0x01FF8000&(data))>>15)
#define  VE_MBIST_VE_DRF_RIF_FAIL_get_ve_drf_vld_0_fail(data)                    ((0x00007FE0&(data))>>5)
#define  VE_MBIST_VE_DRF_RIF_FAIL_get_ve_drf_rif_fail(data)                      (0x0000001F&(data))
#define  VE_MBIST_VE_DRF_RIF_FAIL_ve_drf_p2_fail_src(data)                       ((0x3E000000&(data))>>25)
#define  VE_MBIST_VE_DRF_RIF_FAIL_ve_drf_vld_1_fail_src(data)                    ((0x01FF8000&(data))>>15)
#define  VE_MBIST_VE_DRF_RIF_FAIL_ve_drf_vld_0_fail_src(data)                    ((0x00007FE0&(data))>>5)
#define  VE_MBIST_VE_DRF_RIF_FAIL_ve_drf_rif_fail_src(data)                      (0x0000001F&(data))

#define  VE_MBIST_VE_BIST_VM_FAIL                                               0x1800FF58
#define  VE_MBIST_VE_BIST_VM_FAIL_reg_addr                                       "0xB800FF58"
#define  VE_MBIST_VE_BIST_VM_FAIL_reg                                            0xB800FF58
#define  VE_MBIST_VE_BIST_VM_FAIL_inst_adr                                       "0x00D6"
#define  VE_MBIST_VE_BIST_VM_FAIL_inst                                           0x00D6
#define  set_VE_MBIST_VE_BIST_VM_FAIL_reg(data)                                  (*((volatile unsigned int*)VE_MBIST_VE_BIST_VM_FAIL_reg)=data)
#define  get_VE_MBIST_VE_BIST_VM_FAIL_reg                                        (*((volatile unsigned int*)VE_MBIST_VE_BIST_VM_FAIL_reg))
#define  VE_MBIST_VE_BIST_VM_FAIL_ve_bist_vm_2_fail_shift                        (20)
#define  VE_MBIST_VE_BIST_VM_FAIL_ve_bist_vm_1_fail_shift                        (10)
#define  VE_MBIST_VE_BIST_VM_FAIL_ve_bist_vm_0_fail_shift                        (0)
#define  VE_MBIST_VE_BIST_VM_FAIL_ve_bist_vm_2_fail_mask                         (0x07F00000)
#define  VE_MBIST_VE_BIST_VM_FAIL_ve_bist_vm_1_fail_mask                         (0x000FFC00)
#define  VE_MBIST_VE_BIST_VM_FAIL_ve_bist_vm_0_fail_mask                         (0x000003FF)
#define  VE_MBIST_VE_BIST_VM_FAIL_ve_bist_vm_2_fail(data)                        (0x07F00000&((data)<<20))
#define  VE_MBIST_VE_BIST_VM_FAIL_ve_bist_vm_1_fail(data)                        (0x000FFC00&((data)<<10))
#define  VE_MBIST_VE_BIST_VM_FAIL_ve_bist_vm_0_fail(data)                        (0x000003FF&(data))
#define  VE_MBIST_VE_BIST_VM_FAIL_get_ve_bist_vm_2_fail(data)                    ((0x07F00000&(data))>>20)
#define  VE_MBIST_VE_BIST_VM_FAIL_get_ve_bist_vm_1_fail(data)                    ((0x000FFC00&(data))>>10)
#define  VE_MBIST_VE_BIST_VM_FAIL_get_ve_bist_vm_0_fail(data)                    (0x000003FF&(data))
#define  VE_MBIST_VE_BIST_VM_FAIL_ve_bist_vm_2_fail_src(data)                    ((0x07F00000&(data))>>20)
#define  VE_MBIST_VE_BIST_VM_FAIL_ve_bist_vm_1_fail_src(data)                    ((0x000FFC00&(data))>>10)
#define  VE_MBIST_VE_BIST_VM_FAIL_ve_bist_vm_0_fail_src(data)                    (0x000003FF&(data))

#define  VE_MBIST_VE_DRF_VM_FAIL                                                0x1800FF5C
#define  VE_MBIST_VE_DRF_VM_FAIL_reg_addr                                        "0xB800FF5C"
#define  VE_MBIST_VE_DRF_VM_FAIL_reg                                             0xB800FF5C
#define  VE_MBIST_VE_DRF_VM_FAIL_inst_adr                                        "0x00D7"
#define  VE_MBIST_VE_DRF_VM_FAIL_inst                                            0x00D7
#define  set_VE_MBIST_VE_DRF_VM_FAIL_reg(data)                                   (*((volatile unsigned int*)VE_MBIST_VE_DRF_VM_FAIL_reg)=data)
#define  get_VE_MBIST_VE_DRF_VM_FAIL_reg                                         (*((volatile unsigned int*)VE_MBIST_VE_DRF_VM_FAIL_reg))
#define  VE_MBIST_VE_DRF_VM_FAIL_ve_drf_vm_2_fail_shift                          (20)
#define  VE_MBIST_VE_DRF_VM_FAIL_ve_drf_vm_1_fail_shift                          (10)
#define  VE_MBIST_VE_DRF_VM_FAIL_ve_drf_vm_0_fail_shift                          (0)
#define  VE_MBIST_VE_DRF_VM_FAIL_ve_drf_vm_2_fail_mask                           (0x07F00000)
#define  VE_MBIST_VE_DRF_VM_FAIL_ve_drf_vm_1_fail_mask                           (0x000FFC00)
#define  VE_MBIST_VE_DRF_VM_FAIL_ve_drf_vm_0_fail_mask                           (0x000003FF)
#define  VE_MBIST_VE_DRF_VM_FAIL_ve_drf_vm_2_fail(data)                          (0x07F00000&((data)<<20))
#define  VE_MBIST_VE_DRF_VM_FAIL_ve_drf_vm_1_fail(data)                          (0x000FFC00&((data)<<10))
#define  VE_MBIST_VE_DRF_VM_FAIL_ve_drf_vm_0_fail(data)                          (0x000003FF&(data))
#define  VE_MBIST_VE_DRF_VM_FAIL_get_ve_drf_vm_2_fail(data)                      ((0x07F00000&(data))>>20)
#define  VE_MBIST_VE_DRF_VM_FAIL_get_ve_drf_vm_1_fail(data)                      ((0x000FFC00&(data))>>10)
#define  VE_MBIST_VE_DRF_VM_FAIL_get_ve_drf_vm_0_fail(data)                      (0x000003FF&(data))
#define  VE_MBIST_VE_DRF_VM_FAIL_ve_drf_vm_2_fail_src(data)                      ((0x07F00000&(data))>>20)
#define  VE_MBIST_VE_DRF_VM_FAIL_ve_drf_vm_1_fail_src(data)                      ((0x000FFC00&(data))>>10)
#define  VE_MBIST_VE_DRF_VM_FAIL_ve_drf_vm_0_fail_src(data)                      (0x000003FF&(data))

#define  VE_MBIST_VE_BIST_IT_FAIL                                               0x1800FF60
#define  VE_MBIST_VE_BIST_IT_FAIL_reg_addr                                       "0xB800FF60"
#define  VE_MBIST_VE_BIST_IT_FAIL_reg                                            0xB800FF60
#define  VE_MBIST_VE_BIST_IT_FAIL_inst_adr                                       "0x00D8"
#define  VE_MBIST_VE_BIST_IT_FAIL_inst                                           0x00D8
#define  set_VE_MBIST_VE_BIST_IT_FAIL_reg(data)                                  (*((volatile unsigned int*)VE_MBIST_VE_BIST_IT_FAIL_reg)=data)
#define  get_VE_MBIST_VE_BIST_IT_FAIL_reg                                        (*((volatile unsigned int*)VE_MBIST_VE_BIST_IT_FAIL_reg))
#define  VE_MBIST_VE_BIST_IT_FAIL_ve_bist_it_bs_fail_shift                       (26)
#define  VE_MBIST_VE_BIST_IT_FAIL_ve_bist_it_1_fail_shift                        (20)
#define  VE_MBIST_VE_BIST_IT_FAIL_ve_bist_it_0_1_fail_shift                      (10)
#define  VE_MBIST_VE_BIST_IT_FAIL_ve_bist_it_0_0_fail_shift                      (0)
#define  VE_MBIST_VE_BIST_IT_FAIL_ve_bist_it_bs_fail_mask                        (0x3C000000)
#define  VE_MBIST_VE_BIST_IT_FAIL_ve_bist_it_1_fail_mask                         (0x03F00000)
#define  VE_MBIST_VE_BIST_IT_FAIL_ve_bist_it_0_1_fail_mask                       (0x000FFC00)
#define  VE_MBIST_VE_BIST_IT_FAIL_ve_bist_it_0_0_fail_mask                       (0x000003FF)
#define  VE_MBIST_VE_BIST_IT_FAIL_ve_bist_it_bs_fail(data)                       (0x3C000000&((data)<<26))
#define  VE_MBIST_VE_BIST_IT_FAIL_ve_bist_it_1_fail(data)                        (0x03F00000&((data)<<20))
#define  VE_MBIST_VE_BIST_IT_FAIL_ve_bist_it_0_1_fail(data)                      (0x000FFC00&((data)<<10))
#define  VE_MBIST_VE_BIST_IT_FAIL_ve_bist_it_0_0_fail(data)                      (0x000003FF&(data))
#define  VE_MBIST_VE_BIST_IT_FAIL_get_ve_bist_it_bs_fail(data)                   ((0x3C000000&(data))>>26)
#define  VE_MBIST_VE_BIST_IT_FAIL_get_ve_bist_it_1_fail(data)                    ((0x03F00000&(data))>>20)
#define  VE_MBIST_VE_BIST_IT_FAIL_get_ve_bist_it_0_1_fail(data)                  ((0x000FFC00&(data))>>10)
#define  VE_MBIST_VE_BIST_IT_FAIL_get_ve_bist_it_0_0_fail(data)                  (0x000003FF&(data))
#define  VE_MBIST_VE_BIST_IT_FAIL_ve_bist_it_bs_fail_src(data)                   ((0x3C000000&(data))>>26)
#define  VE_MBIST_VE_BIST_IT_FAIL_ve_bist_it_1_fail_src(data)                    ((0x03F00000&(data))>>20)
#define  VE_MBIST_VE_BIST_IT_FAIL_ve_bist_it_0_1_fail_src(data)                  ((0x000FFC00&(data))>>10)
#define  VE_MBIST_VE_BIST_IT_FAIL_ve_bist_it_0_0_fail_src(data)                  (0x000003FF&(data))

#define  VE_MBIST_VE_DRF_IT_FAIL                                                0x1800FF64
#define  VE_MBIST_VE_DRF_IT_FAIL_reg_addr                                        "0xB800FF64"
#define  VE_MBIST_VE_DRF_IT_FAIL_reg                                             0xB800FF64
#define  VE_MBIST_VE_DRF_IT_FAIL_inst_adr                                        "0x00D9"
#define  VE_MBIST_VE_DRF_IT_FAIL_inst                                            0x00D9
#define  set_VE_MBIST_VE_DRF_IT_FAIL_reg(data)                                   (*((volatile unsigned int*)VE_MBIST_VE_DRF_IT_FAIL_reg)=data)
#define  get_VE_MBIST_VE_DRF_IT_FAIL_reg                                         (*((volatile unsigned int*)VE_MBIST_VE_DRF_IT_FAIL_reg))
#define  VE_MBIST_VE_DRF_IT_FAIL_ve_drf_it_bs_fail_shift                         (26)
#define  VE_MBIST_VE_DRF_IT_FAIL_ve_drf_it_1_fail_shift                          (20)
#define  VE_MBIST_VE_DRF_IT_FAIL_ve_drf_it_0_1_fail_shift                        (10)
#define  VE_MBIST_VE_DRF_IT_FAIL_ve_drf_it_0_0_fail_shift                        (0)
#define  VE_MBIST_VE_DRF_IT_FAIL_ve_drf_it_bs_fail_mask                          (0x3C000000)
#define  VE_MBIST_VE_DRF_IT_FAIL_ve_drf_it_1_fail_mask                           (0x03F00000)
#define  VE_MBIST_VE_DRF_IT_FAIL_ve_drf_it_0_1_fail_mask                         (0x000FFC00)
#define  VE_MBIST_VE_DRF_IT_FAIL_ve_drf_it_0_0_fail_mask                         (0x000003FF)
#define  VE_MBIST_VE_DRF_IT_FAIL_ve_drf_it_bs_fail(data)                         (0x3C000000&((data)<<26))
#define  VE_MBIST_VE_DRF_IT_FAIL_ve_drf_it_1_fail(data)                          (0x03F00000&((data)<<20))
#define  VE_MBIST_VE_DRF_IT_FAIL_ve_drf_it_0_1_fail(data)                        (0x000FFC00&((data)<<10))
#define  VE_MBIST_VE_DRF_IT_FAIL_ve_drf_it_0_0_fail(data)                        (0x000003FF&(data))
#define  VE_MBIST_VE_DRF_IT_FAIL_get_ve_drf_it_bs_fail(data)                     ((0x3C000000&(data))>>26)
#define  VE_MBIST_VE_DRF_IT_FAIL_get_ve_drf_it_1_fail(data)                      ((0x03F00000&(data))>>20)
#define  VE_MBIST_VE_DRF_IT_FAIL_get_ve_drf_it_0_1_fail(data)                    ((0x000FFC00&(data))>>10)
#define  VE_MBIST_VE_DRF_IT_FAIL_get_ve_drf_it_0_0_fail(data)                    (0x000003FF&(data))
#define  VE_MBIST_VE_DRF_IT_FAIL_ve_drf_it_bs_fail_src(data)                     ((0x3C000000&(data))>>26)
#define  VE_MBIST_VE_DRF_IT_FAIL_ve_drf_it_1_fail_src(data)                      ((0x03F00000&(data))>>20)
#define  VE_MBIST_VE_DRF_IT_FAIL_ve_drf_it_0_1_fail_src(data)                    ((0x000FFC00&(data))>>10)
#define  VE_MBIST_VE_DRF_IT_FAIL_ve_drf_it_0_0_fail_src(data)                    (0x000003FF&(data))

#define  VE_MBIST_VE_BIST_SAO_FAIL                                              0x1800FF68
#define  VE_MBIST_VE_BIST_SAO_FAIL_reg_addr                                      "0xB800FF68"
#define  VE_MBIST_VE_BIST_SAO_FAIL_reg                                           0xB800FF68
#define  VE_MBIST_VE_BIST_SAO_FAIL_inst_adr                                      "0x00DA"
#define  VE_MBIST_VE_BIST_SAO_FAIL_inst                                          0x00DA
#define  set_VE_MBIST_VE_BIST_SAO_FAIL_reg(data)                                 (*((volatile unsigned int*)VE_MBIST_VE_BIST_SAO_FAIL_reg)=data)
#define  get_VE_MBIST_VE_BIST_SAO_FAIL_reg                                       (*((volatile unsigned int*)VE_MBIST_VE_BIST_SAO_FAIL_reg))
#define  VE_MBIST_VE_BIST_SAO_FAIL_ve_bist_sao_fail_shift                        (0)
#define  VE_MBIST_VE_BIST_SAO_FAIL_ve_bist_sao_fail_mask                         (0x00000007)
#define  VE_MBIST_VE_BIST_SAO_FAIL_ve_bist_sao_fail(data)                        (0x00000007&(data))
#define  VE_MBIST_VE_BIST_SAO_FAIL_get_ve_bist_sao_fail(data)                    (0x00000007&(data))
#define  VE_MBIST_VE_BIST_SAO_FAIL_ve_bist_sao_fail_src(data)                    (0x00000007&(data))

#define  VE_MBIST_VE_DRF_SAO_FAIL                                               0x1800FF6C
#define  VE_MBIST_VE_DRF_SAO_FAIL_reg_addr                                       "0xB800FF6C"
#define  VE_MBIST_VE_DRF_SAO_FAIL_reg                                            0xB800FF6C
#define  VE_MBIST_VE_DRF_SAO_FAIL_inst_adr                                       "0x00DB"
#define  VE_MBIST_VE_DRF_SAO_FAIL_inst                                           0x00DB
#define  set_VE_MBIST_VE_DRF_SAO_FAIL_reg(data)                                  (*((volatile unsigned int*)VE_MBIST_VE_DRF_SAO_FAIL_reg)=data)
#define  get_VE_MBIST_VE_DRF_SAO_FAIL_reg                                        (*((volatile unsigned int*)VE_MBIST_VE_DRF_SAO_FAIL_reg))
#define  VE_MBIST_VE_DRF_SAO_FAIL_ve_drf_sao_fail_shift                          (0)
#define  VE_MBIST_VE_DRF_SAO_FAIL_ve_drf_sao_fail_mask                           (0x00000007)
#define  VE_MBIST_VE_DRF_SAO_FAIL_ve_drf_sao_fail(data)                          (0x00000007&(data))
#define  VE_MBIST_VE_DRF_SAO_FAIL_get_ve_drf_sao_fail(data)                      (0x00000007&(data))
#define  VE_MBIST_VE_DRF_SAO_FAIL_ve_drf_sao_fail_src(data)                      (0x00000007&(data))

#define  VE_MBIST_VE_BIST_BRG_FAIL                                              0x1800FF70
#define  VE_MBIST_VE_BIST_BRG_FAIL_reg_addr                                      "0xB800FF70"
#define  VE_MBIST_VE_BIST_BRG_FAIL_reg                                           0xB800FF70
#define  VE_MBIST_VE_BIST_BRG_FAIL_inst_adr                                      "0x00DC"
#define  VE_MBIST_VE_BIST_BRG_FAIL_inst                                          0x00DC
#define  set_VE_MBIST_VE_BIST_BRG_FAIL_reg(data)                                 (*((volatile unsigned int*)VE_MBIST_VE_BIST_BRG_FAIL_reg)=data)
#define  get_VE_MBIST_VE_BIST_BRG_FAIL_reg                                       (*((volatile unsigned int*)VE_MBIST_VE_BIST_BRG_FAIL_reg))
#define  VE_MBIST_VE_BIST_BRG_FAIL_ve_bist_brg_fail_shift                        (0)
#define  VE_MBIST_VE_BIST_BRG_FAIL_ve_bist_brg_fail_mask                         (0x0000001F)
#define  VE_MBIST_VE_BIST_BRG_FAIL_ve_bist_brg_fail(data)                        (0x0000001F&(data))
#define  VE_MBIST_VE_BIST_BRG_FAIL_get_ve_bist_brg_fail(data)                    (0x0000001F&(data))
#define  VE_MBIST_VE_BIST_BRG_FAIL_ve_bist_brg_fail_src(data)                    (0x0000001F&(data))

#define  VE_MBIST_VE_DRF_BRG_FAIL                                               0x1800FF74
#define  VE_MBIST_VE_DRF_BRG_FAIL_reg_addr                                       "0xB800FF74"
#define  VE_MBIST_VE_DRF_BRG_FAIL_reg                                            0xB800FF74
#define  VE_MBIST_VE_DRF_BRG_FAIL_inst_adr                                       "0x00DD"
#define  VE_MBIST_VE_DRF_BRG_FAIL_inst                                           0x00DD
#define  set_VE_MBIST_VE_DRF_BRG_FAIL_reg(data)                                  (*((volatile unsigned int*)VE_MBIST_VE_DRF_BRG_FAIL_reg)=data)
#define  get_VE_MBIST_VE_DRF_BRG_FAIL_reg                                        (*((volatile unsigned int*)VE_MBIST_VE_DRF_BRG_FAIL_reg))
#define  VE_MBIST_VE_DRF_BRG_FAIL_ve_drf_brg_fail_shift                          (0)
#define  VE_MBIST_VE_DRF_BRG_FAIL_ve_drf_brg_fail_mask                           (0x0000001F)
#define  VE_MBIST_VE_DRF_BRG_FAIL_ve_drf_brg_fail(data)                          (0x0000001F&(data))
#define  VE_MBIST_VE_DRF_BRG_FAIL_get_ve_drf_brg_fail(data)                      (0x0000001F&(data))
#define  VE_MBIST_VE_DRF_BRG_FAIL_ve_drf_brg_fail_src(data)                      (0x0000001F&(data))

#define  VE_MBIST_VE_BIST_CM_FAIL                                               0x1800FF78
#define  VE_MBIST_VE_BIST_CM_FAIL_reg_addr                                       "0xB800FF78"
#define  VE_MBIST_VE_BIST_CM_FAIL_reg                                            0xB800FF78
#define  VE_MBIST_VE_BIST_CM_FAIL_inst_adr                                       "0x00DE"
#define  VE_MBIST_VE_BIST_CM_FAIL_inst                                           0x00DE
#define  set_VE_MBIST_VE_BIST_CM_FAIL_reg(data)                                  (*((volatile unsigned int*)VE_MBIST_VE_BIST_CM_FAIL_reg)=data)
#define  get_VE_MBIST_VE_BIST_CM_FAIL_reg                                        (*((volatile unsigned int*)VE_MBIST_VE_BIST_CM_FAIL_reg))
#define  VE_MBIST_VE_BIST_CM_FAIL_ve_bist_cm2_fail_shift                         (10)
#define  VE_MBIST_VE_BIST_CM_FAIL_ve_bist_cm1_fail_shift                         (0)
#define  VE_MBIST_VE_BIST_CM_FAIL_ve_bist_cm2_fail_mask                          (0x000FFC00)
#define  VE_MBIST_VE_BIST_CM_FAIL_ve_bist_cm1_fail_mask                          (0x000003FF)
#define  VE_MBIST_VE_BIST_CM_FAIL_ve_bist_cm2_fail(data)                         (0x000FFC00&((data)<<10))
#define  VE_MBIST_VE_BIST_CM_FAIL_ve_bist_cm1_fail(data)                         (0x000003FF&(data))
#define  VE_MBIST_VE_BIST_CM_FAIL_get_ve_bist_cm2_fail(data)                     ((0x000FFC00&(data))>>10)
#define  VE_MBIST_VE_BIST_CM_FAIL_get_ve_bist_cm1_fail(data)                     (0x000003FF&(data))
#define  VE_MBIST_VE_BIST_CM_FAIL_ve_bist_cm2_fail_src(data)                     ((0x000FFC00&(data))>>10)
#define  VE_MBIST_VE_BIST_CM_FAIL_ve_bist_cm1_fail_src(data)                     (0x000003FF&(data))

#define  VE_MBIST_VE_DRF_CM_FAIL                                                0x1800FF7C
#define  VE_MBIST_VE_DRF_CM_FAIL_reg_addr                                        "0xB800FF7C"
#define  VE_MBIST_VE_DRF_CM_FAIL_reg                                             0xB800FF7C
#define  VE_MBIST_VE_DRF_CM_FAIL_inst_adr                                        "0x00DF"
#define  VE_MBIST_VE_DRF_CM_FAIL_inst                                            0x00DF
#define  set_VE_MBIST_VE_DRF_CM_FAIL_reg(data)                                   (*((volatile unsigned int*)VE_MBIST_VE_DRF_CM_FAIL_reg)=data)
#define  get_VE_MBIST_VE_DRF_CM_FAIL_reg                                         (*((volatile unsigned int*)VE_MBIST_VE_DRF_CM_FAIL_reg))
#define  VE_MBIST_VE_DRF_CM_FAIL_ve_drf_cm2_fail_shift                           (10)
#define  VE_MBIST_VE_DRF_CM_FAIL_ve_drf_cm1_fail_shift                           (0)
#define  VE_MBIST_VE_DRF_CM_FAIL_ve_drf_cm2_fail_mask                            (0x000FFC00)
#define  VE_MBIST_VE_DRF_CM_FAIL_ve_drf_cm1_fail_mask                            (0x000003FF)
#define  VE_MBIST_VE_DRF_CM_FAIL_ve_drf_cm2_fail(data)                           (0x000FFC00&((data)<<10))
#define  VE_MBIST_VE_DRF_CM_FAIL_ve_drf_cm1_fail(data)                           (0x000003FF&(data))
#define  VE_MBIST_VE_DRF_CM_FAIL_get_ve_drf_cm2_fail(data)                       ((0x000FFC00&(data))>>10)
#define  VE_MBIST_VE_DRF_CM_FAIL_get_ve_drf_cm1_fail(data)                       (0x000003FF&(data))
#define  VE_MBIST_VE_DRF_CM_FAIL_ve_drf_cm2_fail_src(data)                       ((0x000FFC00&(data))>>10)
#define  VE_MBIST_VE_DRF_CM_FAIL_ve_drf_cm1_fail_src(data)                       (0x000003FF&(data))

#define  VE_MBIST_VE_BIST_RLRMEM_MVBUF_FAIL                                     0x1800FF80
#define  VE_MBIST_VE_BIST_RLRMEM_MVBUF_FAIL_reg_addr                             "0xB800FF80"
#define  VE_MBIST_VE_BIST_RLRMEM_MVBUF_FAIL_reg                                  0xB800FF80
#define  VE_MBIST_VE_BIST_RLRMEM_MVBUF_FAIL_inst_adr                             "0x00E0"
#define  VE_MBIST_VE_BIST_RLRMEM_MVBUF_FAIL_inst                                 0x00E0
#define  set_VE_MBIST_VE_BIST_RLRMEM_MVBUF_FAIL_reg(data)                        (*((volatile unsigned int*)VE_MBIST_VE_BIST_RLRMEM_MVBUF_FAIL_reg)=data)
#define  get_VE_MBIST_VE_BIST_RLRMEM_MVBUF_FAIL_reg                              (*((volatile unsigned int*)VE_MBIST_VE_BIST_RLRMEM_MVBUF_FAIL_reg))
#define  VE_MBIST_VE_BIST_RLRMEM_MVBUF_FAIL_ve_bist_rlrmem01_fail_shift          (7)
#define  VE_MBIST_VE_BIST_RLRMEM_MVBUF_FAIL_ve_bist_rlrmem_mvbuf_fail_shift      (0)
#define  VE_MBIST_VE_BIST_RLRMEM_MVBUF_FAIL_ve_bist_rlrmem01_fail_mask           (0x00007F80)
#define  VE_MBIST_VE_BIST_RLRMEM_MVBUF_FAIL_ve_bist_rlrmem_mvbuf_fail_mask       (0x0000007F)
#define  VE_MBIST_VE_BIST_RLRMEM_MVBUF_FAIL_ve_bist_rlrmem01_fail(data)          (0x00007F80&((data)<<7))
#define  VE_MBIST_VE_BIST_RLRMEM_MVBUF_FAIL_ve_bist_rlrmem_mvbuf_fail(data)      (0x0000007F&(data))
#define  VE_MBIST_VE_BIST_RLRMEM_MVBUF_FAIL_get_ve_bist_rlrmem01_fail(data)      ((0x00007F80&(data))>>7)
#define  VE_MBIST_VE_BIST_RLRMEM_MVBUF_FAIL_get_ve_bist_rlrmem_mvbuf_fail(data)  (0x0000007F&(data))
#define  VE_MBIST_VE_BIST_RLRMEM_MVBUF_FAIL_ve_bist_rlrmem01_fail_src(data)      ((0x00007F80&(data))>>7)
#define  VE_MBIST_VE_BIST_RLRMEM_MVBUF_FAIL_ve_bist_rlrmem_mvbuf_fail_src(data)  (0x0000007F&(data))

#define  VE_MBIST_VE_DRF_RLRMEM_MVBUF_FAIL                                      0x1800FF84
#define  VE_MBIST_VE_DRF_RLRMEM_MVBUF_FAIL_reg_addr                              "0xB800FF84"
#define  VE_MBIST_VE_DRF_RLRMEM_MVBUF_FAIL_reg                                   0xB800FF84
#define  VE_MBIST_VE_DRF_RLRMEM_MVBUF_FAIL_inst_adr                              "0x00E1"
#define  VE_MBIST_VE_DRF_RLRMEM_MVBUF_FAIL_inst                                  0x00E1
#define  set_VE_MBIST_VE_DRF_RLRMEM_MVBUF_FAIL_reg(data)                         (*((volatile unsigned int*)VE_MBIST_VE_DRF_RLRMEM_MVBUF_FAIL_reg)=data)
#define  get_VE_MBIST_VE_DRF_RLRMEM_MVBUF_FAIL_reg                               (*((volatile unsigned int*)VE_MBIST_VE_DRF_RLRMEM_MVBUF_FAIL_reg))
#define  VE_MBIST_VE_DRF_RLRMEM_MVBUF_FAIL_ve_drf_rlrmem01_fail_shift            (7)
#define  VE_MBIST_VE_DRF_RLRMEM_MVBUF_FAIL_ve_drf_rlrmem_mvbuf_fail_shift        (0)
#define  VE_MBIST_VE_DRF_RLRMEM_MVBUF_FAIL_ve_drf_rlrmem01_fail_mask             (0x00007F80)
#define  VE_MBIST_VE_DRF_RLRMEM_MVBUF_FAIL_ve_drf_rlrmem_mvbuf_fail_mask         (0x0000007F)
#define  VE_MBIST_VE_DRF_RLRMEM_MVBUF_FAIL_ve_drf_rlrmem01_fail(data)            (0x00007F80&((data)<<7))
#define  VE_MBIST_VE_DRF_RLRMEM_MVBUF_FAIL_ve_drf_rlrmem_mvbuf_fail(data)        (0x0000007F&(data))
#define  VE_MBIST_VE_DRF_RLRMEM_MVBUF_FAIL_get_ve_drf_rlrmem01_fail(data)        ((0x00007F80&(data))>>7)
#define  VE_MBIST_VE_DRF_RLRMEM_MVBUF_FAIL_get_ve_drf_rlrmem_mvbuf_fail(data)    (0x0000007F&(data))
#define  VE_MBIST_VE_DRF_RLRMEM_MVBUF_FAIL_ve_drf_rlrmem01_fail_src(data)        ((0x00007F80&(data))>>7)
#define  VE_MBIST_VE_DRF_RLRMEM_MVBUF_FAIL_ve_drf_rlrmem_mvbuf_fail_src(data)    (0x0000007F&(data))

#define  VE_MBIST_VE_BIST_SEG_MVD_FAIL                                          0x1800FF88
#define  VE_MBIST_VE_BIST_SEG_MVD_FAIL_reg_addr                                  "0xB800FF88"
#define  VE_MBIST_VE_BIST_SEG_MVD_FAIL_reg                                       0xB800FF88
#define  VE_MBIST_VE_BIST_SEG_MVD_FAIL_inst_adr                                  "0x00E2"
#define  VE_MBIST_VE_BIST_SEG_MVD_FAIL_inst                                      0x00E2
#define  set_VE_MBIST_VE_BIST_SEG_MVD_FAIL_reg(data)                             (*((volatile unsigned int*)VE_MBIST_VE_BIST_SEG_MVD_FAIL_reg)=data)
#define  get_VE_MBIST_VE_BIST_SEG_MVD_FAIL_reg                                   (*((volatile unsigned int*)VE_MBIST_VE_BIST_SEG_MVD_FAIL_reg))
#define  VE_MBIST_VE_BIST_SEG_MVD_FAIL_ve_bist_seg_mvd_fail_shift                (0)
#define  VE_MBIST_VE_BIST_SEG_MVD_FAIL_ve_bist_seg_mvd_fail_mask                 (0x000001FF)
#define  VE_MBIST_VE_BIST_SEG_MVD_FAIL_ve_bist_seg_mvd_fail(data)                (0x000001FF&(data))
#define  VE_MBIST_VE_BIST_SEG_MVD_FAIL_get_ve_bist_seg_mvd_fail(data)            (0x000001FF&(data))
#define  VE_MBIST_VE_BIST_SEG_MVD_FAIL_ve_bist_seg_mvd_fail_src(data)            (0x000001FF&(data))

#define  VE_MBIST_VE_DRF_SEG_MVD_FAIL                                           0x1800FF8C
#define  VE_MBIST_VE_DRF_SEG_MVD_FAIL_reg_addr                                   "0xB800FF8C"
#define  VE_MBIST_VE_DRF_SEG_MVD_FAIL_reg                                        0xB800FF8C
#define  VE_MBIST_VE_DRF_SEG_MVD_FAIL_inst_adr                                   "0x00E3"
#define  VE_MBIST_VE_DRF_SEG_MVD_FAIL_inst                                       0x00E3
#define  set_VE_MBIST_VE_DRF_SEG_MVD_FAIL_reg(data)                              (*((volatile unsigned int*)VE_MBIST_VE_DRF_SEG_MVD_FAIL_reg)=data)
#define  get_VE_MBIST_VE_DRF_SEG_MVD_FAIL_reg                                    (*((volatile unsigned int*)VE_MBIST_VE_DRF_SEG_MVD_FAIL_reg))
#define  VE_MBIST_VE_DRF_SEG_MVD_FAIL_ve_drf_seg_mvd_fail_shift                  (0)
#define  VE_MBIST_VE_DRF_SEG_MVD_FAIL_ve_drf_seg_mvd_fail_mask                   (0x000001FF)
#define  VE_MBIST_VE_DRF_SEG_MVD_FAIL_ve_drf_seg_mvd_fail(data)                  (0x000001FF&(data))
#define  VE_MBIST_VE_DRF_SEG_MVD_FAIL_get_ve_drf_seg_mvd_fail(data)              (0x000001FF&(data))
#define  VE_MBIST_VE_DRF_SEG_MVD_FAIL_ve_drf_seg_mvd_fail_src(data)              (0x000001FF&(data))

#define  VE_MBIST_VE_BIST_DBK_0_FAIL                                            0x1800FF90
#define  VE_MBIST_VE_BIST_DBK_0_FAIL_reg_addr                                    "0xB800FF90"
#define  VE_MBIST_VE_BIST_DBK_0_FAIL_reg                                         0xB800FF90
#define  VE_MBIST_VE_BIST_DBK_0_FAIL_inst_adr                                    "0x00E4"
#define  VE_MBIST_VE_BIST_DBK_0_FAIL_inst                                        0x00E4
#define  set_VE_MBIST_VE_BIST_DBK_0_FAIL_reg(data)                               (*((volatile unsigned int*)VE_MBIST_VE_BIST_DBK_0_FAIL_reg)=data)
#define  get_VE_MBIST_VE_BIST_DBK_0_FAIL_reg                                     (*((volatile unsigned int*)VE_MBIST_VE_BIST_DBK_0_FAIL_reg))
#define  VE_MBIST_VE_BIST_DBK_0_FAIL_ve_bist_cmprs_1_fail_shift                  (14)
#define  VE_MBIST_VE_BIST_DBK_0_FAIL_ve_bist_cmprs_fail_shift                    (10)
#define  VE_MBIST_VE_BIST_DBK_0_FAIL_ve_bist_dbk_fail_shift                      (0)
#define  VE_MBIST_VE_BIST_DBK_0_FAIL_ve_bist_cmprs_1_fail_mask                   (0x0007C000)
#define  VE_MBIST_VE_BIST_DBK_0_FAIL_ve_bist_cmprs_fail_mask                     (0x00003C00)
#define  VE_MBIST_VE_BIST_DBK_0_FAIL_ve_bist_dbk_fail_mask                       (0x000003FF)
#define  VE_MBIST_VE_BIST_DBK_0_FAIL_ve_bist_cmprs_1_fail(data)                  (0x0007C000&((data)<<14))
#define  VE_MBIST_VE_BIST_DBK_0_FAIL_ve_bist_cmprs_fail(data)                    (0x00003C00&((data)<<10))
#define  VE_MBIST_VE_BIST_DBK_0_FAIL_ve_bist_dbk_fail(data)                      (0x000003FF&(data))
#define  VE_MBIST_VE_BIST_DBK_0_FAIL_get_ve_bist_cmprs_1_fail(data)              ((0x0007C000&(data))>>14)
#define  VE_MBIST_VE_BIST_DBK_0_FAIL_get_ve_bist_cmprs_fail(data)                ((0x00003C00&(data))>>10)
#define  VE_MBIST_VE_BIST_DBK_0_FAIL_get_ve_bist_dbk_fail(data)                  (0x000003FF&(data))
#define  VE_MBIST_VE_BIST_DBK_0_FAIL_ve_bist_cmprs_1_fail_src(data)              ((0x0007C000&(data))>>14)
#define  VE_MBIST_VE_BIST_DBK_0_FAIL_ve_bist_cmprs_fail_src(data)                ((0x00003C00&(data))>>10)
#define  VE_MBIST_VE_BIST_DBK_0_FAIL_ve_bist_dbk_fail_src(data)                  (0x000003FF&(data))

#define  VE_MBIST_VE_DRF_DBK_0_FAIL                                             0x1800FF94
#define  VE_MBIST_VE_DRF_DBK_0_FAIL_reg_addr                                     "0xB800FF94"
#define  VE_MBIST_VE_DRF_DBK_0_FAIL_reg                                          0xB800FF94
#define  VE_MBIST_VE_DRF_DBK_0_FAIL_inst_adr                                     "0x00E5"
#define  VE_MBIST_VE_DRF_DBK_0_FAIL_inst                                         0x00E5
#define  set_VE_MBIST_VE_DRF_DBK_0_FAIL_reg(data)                                (*((volatile unsigned int*)VE_MBIST_VE_DRF_DBK_0_FAIL_reg)=data)
#define  get_VE_MBIST_VE_DRF_DBK_0_FAIL_reg                                      (*((volatile unsigned int*)VE_MBIST_VE_DRF_DBK_0_FAIL_reg))
#define  VE_MBIST_VE_DRF_DBK_0_FAIL_ve_drf_cmprs_1_fail_shift                    (14)
#define  VE_MBIST_VE_DRF_DBK_0_FAIL_ve_drf_cmprs_fail_shift                      (10)
#define  VE_MBIST_VE_DRF_DBK_0_FAIL_ve_drf_dbk_fail_shift                        (0)
#define  VE_MBIST_VE_DRF_DBK_0_FAIL_ve_drf_cmprs_1_fail_mask                     (0x0007C000)
#define  VE_MBIST_VE_DRF_DBK_0_FAIL_ve_drf_cmprs_fail_mask                       (0x00003C00)
#define  VE_MBIST_VE_DRF_DBK_0_FAIL_ve_drf_dbk_fail_mask                         (0x000003FF)
#define  VE_MBIST_VE_DRF_DBK_0_FAIL_ve_drf_cmprs_1_fail(data)                    (0x0007C000&((data)<<14))
#define  VE_MBIST_VE_DRF_DBK_0_FAIL_ve_drf_cmprs_fail(data)                      (0x00003C00&((data)<<10))
#define  VE_MBIST_VE_DRF_DBK_0_FAIL_ve_drf_dbk_fail(data)                        (0x000003FF&(data))
#define  VE_MBIST_VE_DRF_DBK_0_FAIL_get_ve_drf_cmprs_1_fail(data)                ((0x0007C000&(data))>>14)
#define  VE_MBIST_VE_DRF_DBK_0_FAIL_get_ve_drf_cmprs_fail(data)                  ((0x00003C00&(data))>>10)
#define  VE_MBIST_VE_DRF_DBK_0_FAIL_get_ve_drf_dbk_fail(data)                    (0x000003FF&(data))
#define  VE_MBIST_VE_DRF_DBK_0_FAIL_ve_drf_cmprs_1_fail_src(data)                ((0x0007C000&(data))>>14)
#define  VE_MBIST_VE_DRF_DBK_0_FAIL_ve_drf_cmprs_fail_src(data)                  ((0x00003C00&(data))>>10)
#define  VE_MBIST_VE_DRF_DBK_0_FAIL_ve_drf_dbk_fail_src(data)                    (0x000003FF&(data))

#define  VE_MBIST_VE_BIST_CAH_FAIL                                              0x1800FF98
#define  VE_MBIST_VE_BIST_CAH_FAIL_reg_addr                                      "0xB800FF98"
#define  VE_MBIST_VE_BIST_CAH_FAIL_reg                                           0xB800FF98
#define  VE_MBIST_VE_BIST_CAH_FAIL_inst_adr                                      "0x00E6"
#define  VE_MBIST_VE_BIST_CAH_FAIL_inst                                          0x00E6
#define  set_VE_MBIST_VE_BIST_CAH_FAIL_reg(data)                                 (*((volatile unsigned int*)VE_MBIST_VE_BIST_CAH_FAIL_reg)=data)
#define  get_VE_MBIST_VE_BIST_CAH_FAIL_reg                                       (*((volatile unsigned int*)VE_MBIST_VE_BIST_CAH_FAIL_reg))
#define  VE_MBIST_VE_BIST_CAH_FAIL_ve_bist_cah_2p_1_fail_shift                   (10)
#define  VE_MBIST_VE_BIST_CAH_FAIL_ve_bist_cah_2p_0_fail_shift                   (2)
#define  VE_MBIST_VE_BIST_CAH_FAIL_ve_bist_cah_1p_fail_shift                     (0)
#define  VE_MBIST_VE_BIST_CAH_FAIL_ve_bist_cah_2p_1_fail_mask                    (0x00003C00)
#define  VE_MBIST_VE_BIST_CAH_FAIL_ve_bist_cah_2p_0_fail_mask                    (0x000003FC)
#define  VE_MBIST_VE_BIST_CAH_FAIL_ve_bist_cah_1p_fail_mask                      (0x00000003)
#define  VE_MBIST_VE_BIST_CAH_FAIL_ve_bist_cah_2p_1_fail(data)                   (0x00003C00&((data)<<10))
#define  VE_MBIST_VE_BIST_CAH_FAIL_ve_bist_cah_2p_0_fail(data)                   (0x000003FC&((data)<<2))
#define  VE_MBIST_VE_BIST_CAH_FAIL_ve_bist_cah_1p_fail(data)                     (0x00000003&(data))
#define  VE_MBIST_VE_BIST_CAH_FAIL_get_ve_bist_cah_2p_1_fail(data)               ((0x00003C00&(data))>>10)
#define  VE_MBIST_VE_BIST_CAH_FAIL_get_ve_bist_cah_2p_0_fail(data)               ((0x000003FC&(data))>>2)
#define  VE_MBIST_VE_BIST_CAH_FAIL_get_ve_bist_cah_1p_fail(data)                 (0x00000003&(data))
#define  VE_MBIST_VE_BIST_CAH_FAIL_ve_bist_cah_2p_1_fail_src(data)               ((0x00003C00&(data))>>10)
#define  VE_MBIST_VE_BIST_CAH_FAIL_ve_bist_cah_2p_0_fail_src(data)               ((0x000003FC&(data))>>2)
#define  VE_MBIST_VE_BIST_CAH_FAIL_ve_bist_cah_1p_fail_src(data)                 (0x00000003&(data))

#define  VE_MBIST_VE_DRF_CAH_FAIL                                               0x1800FF9C
#define  VE_MBIST_VE_DRF_CAH_FAIL_reg_addr                                       "0xB800FF9C"
#define  VE_MBIST_VE_DRF_CAH_FAIL_reg                                            0xB800FF9C
#define  VE_MBIST_VE_DRF_CAH_FAIL_inst_adr                                       "0x00E7"
#define  VE_MBIST_VE_DRF_CAH_FAIL_inst                                           0x00E7
#define  set_VE_MBIST_VE_DRF_CAH_FAIL_reg(data)                                  (*((volatile unsigned int*)VE_MBIST_VE_DRF_CAH_FAIL_reg)=data)
#define  get_VE_MBIST_VE_DRF_CAH_FAIL_reg                                        (*((volatile unsigned int*)VE_MBIST_VE_DRF_CAH_FAIL_reg))
#define  VE_MBIST_VE_DRF_CAH_FAIL_ve_drf_cah_2p_1_fail_shift                     (10)
#define  VE_MBIST_VE_DRF_CAH_FAIL_ve_drf_cah_2p_0_fail_shift                     (2)
#define  VE_MBIST_VE_DRF_CAH_FAIL_ve_drf_cah_1p_fail_shift                       (0)
#define  VE_MBIST_VE_DRF_CAH_FAIL_ve_drf_cah_2p_1_fail_mask                      (0x00003C00)
#define  VE_MBIST_VE_DRF_CAH_FAIL_ve_drf_cah_2p_0_fail_mask                      (0x000003FC)
#define  VE_MBIST_VE_DRF_CAH_FAIL_ve_drf_cah_1p_fail_mask                        (0x00000003)
#define  VE_MBIST_VE_DRF_CAH_FAIL_ve_drf_cah_2p_1_fail(data)                     (0x00003C00&((data)<<10))
#define  VE_MBIST_VE_DRF_CAH_FAIL_ve_drf_cah_2p_0_fail(data)                     (0x000003FC&((data)<<2))
#define  VE_MBIST_VE_DRF_CAH_FAIL_ve_drf_cah_1p_fail(data)                       (0x00000003&(data))
#define  VE_MBIST_VE_DRF_CAH_FAIL_get_ve_drf_cah_2p_1_fail(data)                 ((0x00003C00&(data))>>10)
#define  VE_MBIST_VE_DRF_CAH_FAIL_get_ve_drf_cah_2p_0_fail(data)                 ((0x000003FC&(data))>>2)
#define  VE_MBIST_VE_DRF_CAH_FAIL_get_ve_drf_cah_1p_fail(data)                   (0x00000003&(data))
#define  VE_MBIST_VE_DRF_CAH_FAIL_ve_drf_cah_2p_1_fail_src(data)                 ((0x00003C00&(data))>>10)
#define  VE_MBIST_VE_DRF_CAH_FAIL_ve_drf_cah_2p_0_fail_src(data)                 ((0x000003FC&(data))>>2)
#define  VE_MBIST_VE_DRF_CAH_FAIL_ve_drf_cah_1p_fail_src(data)                   (0x00000003&(data))

#define  VE_MBIST_VE_BIST_PRED_FAIL                                             0x1800FFA0
#define  VE_MBIST_VE_BIST_PRED_FAIL_reg_addr                                     "0xB800FFA0"
#define  VE_MBIST_VE_BIST_PRED_FAIL_reg                                          0xB800FFA0
#define  VE_MBIST_VE_BIST_PRED_FAIL_inst_adr                                     "0x00E8"
#define  VE_MBIST_VE_BIST_PRED_FAIL_inst                                         0x00E8
#define  set_VE_MBIST_VE_BIST_PRED_FAIL_reg(data)                                (*((volatile unsigned int*)VE_MBIST_VE_BIST_PRED_FAIL_reg)=data)
#define  get_VE_MBIST_VE_BIST_PRED_FAIL_reg                                      (*((volatile unsigned int*)VE_MBIST_VE_BIST_PRED_FAIL_reg))
#define  VE_MBIST_VE_BIST_PRED_FAIL_ve_bist_pred_2e_fail_shift                   (24)
#define  VE_MBIST_VE_BIST_PRED_FAIL_ve_bist_pred_2_fail_shift                    (18)
#define  VE_MBIST_VE_BIST_PRED_FAIL_ve_bist_pred_1_fail_shift                    (10)
#define  VE_MBIST_VE_BIST_PRED_FAIL_ve_bist_pred_0_fail_shift                    (0)
#define  VE_MBIST_VE_BIST_PRED_FAIL_ve_bist_pred_2e_fail_mask                    (0x3F000000)
#define  VE_MBIST_VE_BIST_PRED_FAIL_ve_bist_pred_2_fail_mask                     (0x00FC0000)
#define  VE_MBIST_VE_BIST_PRED_FAIL_ve_bist_pred_1_fail_mask                     (0x0003FC00)
#define  VE_MBIST_VE_BIST_PRED_FAIL_ve_bist_pred_0_fail_mask                     (0x000003FF)
#define  VE_MBIST_VE_BIST_PRED_FAIL_ve_bist_pred_2e_fail(data)                   (0x3F000000&((data)<<24))
#define  VE_MBIST_VE_BIST_PRED_FAIL_ve_bist_pred_2_fail(data)                    (0x00FC0000&((data)<<18))
#define  VE_MBIST_VE_BIST_PRED_FAIL_ve_bist_pred_1_fail(data)                    (0x0003FC00&((data)<<10))
#define  VE_MBIST_VE_BIST_PRED_FAIL_ve_bist_pred_0_fail(data)                    (0x000003FF&(data))
#define  VE_MBIST_VE_BIST_PRED_FAIL_get_ve_bist_pred_2e_fail(data)               ((0x3F000000&(data))>>24)
#define  VE_MBIST_VE_BIST_PRED_FAIL_get_ve_bist_pred_2_fail(data)                ((0x00FC0000&(data))>>18)
#define  VE_MBIST_VE_BIST_PRED_FAIL_get_ve_bist_pred_1_fail(data)                ((0x0003FC00&(data))>>10)
#define  VE_MBIST_VE_BIST_PRED_FAIL_get_ve_bist_pred_0_fail(data)                (0x000003FF&(data))
#define  VE_MBIST_VE_BIST_PRED_FAIL_ve_bist_pred_2e_fail_src(data)               ((0x3F000000&(data))>>24)
#define  VE_MBIST_VE_BIST_PRED_FAIL_ve_bist_pred_2_fail_src(data)                ((0x00FC0000&(data))>>18)
#define  VE_MBIST_VE_BIST_PRED_FAIL_ve_bist_pred_1_fail_src(data)                ((0x0003FC00&(data))>>10)
#define  VE_MBIST_VE_BIST_PRED_FAIL_ve_bist_pred_0_fail_src(data)                (0x000003FF&(data))

#define  VE_MBIST_VE_DRF_PRED_FAIL                                              0x1800FFA4
#define  VE_MBIST_VE_DRF_PRED_FAIL_reg_addr                                      "0xB800FFA4"
#define  VE_MBIST_VE_DRF_PRED_FAIL_reg                                           0xB800FFA4
#define  VE_MBIST_VE_DRF_PRED_FAIL_inst_adr                                      "0x00E9"
#define  VE_MBIST_VE_DRF_PRED_FAIL_inst                                          0x00E9
#define  set_VE_MBIST_VE_DRF_PRED_FAIL_reg(data)                                 (*((volatile unsigned int*)VE_MBIST_VE_DRF_PRED_FAIL_reg)=data)
#define  get_VE_MBIST_VE_DRF_PRED_FAIL_reg                                       (*((volatile unsigned int*)VE_MBIST_VE_DRF_PRED_FAIL_reg))
#define  VE_MBIST_VE_DRF_PRED_FAIL_ve_drf_pred_2e_fail_shift                     (24)
#define  VE_MBIST_VE_DRF_PRED_FAIL_ve_drf_pred_2_fail_shift                      (18)
#define  VE_MBIST_VE_DRF_PRED_FAIL_ve_drf_pred_1_fail_shift                      (10)
#define  VE_MBIST_VE_DRF_PRED_FAIL_ve_drf_pred_0_fail_shift                      (0)
#define  VE_MBIST_VE_DRF_PRED_FAIL_ve_drf_pred_2e_fail_mask                      (0x3F000000)
#define  VE_MBIST_VE_DRF_PRED_FAIL_ve_drf_pred_2_fail_mask                       (0x00FC0000)
#define  VE_MBIST_VE_DRF_PRED_FAIL_ve_drf_pred_1_fail_mask                       (0x0003FC00)
#define  VE_MBIST_VE_DRF_PRED_FAIL_ve_drf_pred_0_fail_mask                       (0x000003FF)
#define  VE_MBIST_VE_DRF_PRED_FAIL_ve_drf_pred_2e_fail(data)                     (0x3F000000&((data)<<24))
#define  VE_MBIST_VE_DRF_PRED_FAIL_ve_drf_pred_2_fail(data)                      (0x00FC0000&((data)<<18))
#define  VE_MBIST_VE_DRF_PRED_FAIL_ve_drf_pred_1_fail(data)                      (0x0003FC00&((data)<<10))
#define  VE_MBIST_VE_DRF_PRED_FAIL_ve_drf_pred_0_fail(data)                      (0x000003FF&(data))
#define  VE_MBIST_VE_DRF_PRED_FAIL_get_ve_drf_pred_2e_fail(data)                 ((0x3F000000&(data))>>24)
#define  VE_MBIST_VE_DRF_PRED_FAIL_get_ve_drf_pred_2_fail(data)                  ((0x00FC0000&(data))>>18)
#define  VE_MBIST_VE_DRF_PRED_FAIL_get_ve_drf_pred_1_fail(data)                  ((0x0003FC00&(data))>>10)
#define  VE_MBIST_VE_DRF_PRED_FAIL_get_ve_drf_pred_0_fail(data)                  (0x000003FF&(data))
#define  VE_MBIST_VE_DRF_PRED_FAIL_ve_drf_pred_2e_fail_src(data)                 ((0x3F000000&(data))>>24)
#define  VE_MBIST_VE_DRF_PRED_FAIL_ve_drf_pred_2_fail_src(data)                  ((0x00FC0000&(data))>>18)
#define  VE_MBIST_VE_DRF_PRED_FAIL_ve_drf_pred_1_fail_src(data)                  ((0x0003FC00&(data))>>10)
#define  VE_MBIST_VE_DRF_PRED_FAIL_ve_drf_pred_0_fail_src(data)                  (0x000003FF&(data))

#define  VE_MBIST_VE_BIST_CIBLK_FAIL                                            0x1800FFA8
#define  VE_MBIST_VE_BIST_CIBLK_FAIL_reg_addr                                    "0xB800FFA8"
#define  VE_MBIST_VE_BIST_CIBLK_FAIL_reg                                         0xB800FFA8
#define  VE_MBIST_VE_BIST_CIBLK_FAIL_inst_adr                                    "0x00EA"
#define  VE_MBIST_VE_BIST_CIBLK_FAIL_inst                                        0x00EA
#define  set_VE_MBIST_VE_BIST_CIBLK_FAIL_reg(data)                               (*((volatile unsigned int*)VE_MBIST_VE_BIST_CIBLK_FAIL_reg)=data)
#define  get_VE_MBIST_VE_BIST_CIBLK_FAIL_reg                                     (*((volatile unsigned int*)VE_MBIST_VE_BIST_CIBLK_FAIL_reg))
#define  VE_MBIST_VE_BIST_CIBLK_FAIL_ve_bist_pred_3_2p_fail_shift                (16)
#define  VE_MBIST_VE_BIST_CIBLK_FAIL_ve_bist_pred_3_fail_shift                   (7)
#define  VE_MBIST_VE_BIST_CIBLK_FAIL_ve_bist_ciblk_fail_shift                    (0)
#define  VE_MBIST_VE_BIST_CIBLK_FAIL_ve_bist_pred_3_2p_fail_mask                 (0x003F0000)
#define  VE_MBIST_VE_BIST_CIBLK_FAIL_ve_bist_pred_3_fail_mask                    (0x0000FF80)
#define  VE_MBIST_VE_BIST_CIBLK_FAIL_ve_bist_ciblk_fail_mask                     (0x0000007F)
#define  VE_MBIST_VE_BIST_CIBLK_FAIL_ve_bist_pred_3_2p_fail(data)                (0x003F0000&((data)<<16))
#define  VE_MBIST_VE_BIST_CIBLK_FAIL_ve_bist_pred_3_fail(data)                   (0x0000FF80&((data)<<7))
#define  VE_MBIST_VE_BIST_CIBLK_FAIL_ve_bist_ciblk_fail(data)                    (0x0000007F&(data))
#define  VE_MBIST_VE_BIST_CIBLK_FAIL_get_ve_bist_pred_3_2p_fail(data)            ((0x003F0000&(data))>>16)
#define  VE_MBIST_VE_BIST_CIBLK_FAIL_get_ve_bist_pred_3_fail(data)               ((0x0000FF80&(data))>>7)
#define  VE_MBIST_VE_BIST_CIBLK_FAIL_get_ve_bist_ciblk_fail(data)                (0x0000007F&(data))
#define  VE_MBIST_VE_BIST_CIBLK_FAIL_ve_bist_pred_3_2p_fail_src(data)            ((0x003F0000&(data))>>16)
#define  VE_MBIST_VE_BIST_CIBLK_FAIL_ve_bist_pred_3_fail_src(data)               ((0x0000FF80&(data))>>7)
#define  VE_MBIST_VE_BIST_CIBLK_FAIL_ve_bist_ciblk_fail_src(data)                (0x0000007F&(data))

#define  VE_MBIST_VE_DRF_CIBLK_FAIL                                             0x1800FFAC
#define  VE_MBIST_VE_DRF_CIBLK_FAIL_reg_addr                                     "0xB800FFAC"
#define  VE_MBIST_VE_DRF_CIBLK_FAIL_reg                                          0xB800FFAC
#define  VE_MBIST_VE_DRF_CIBLK_FAIL_inst_adr                                     "0x00EB"
#define  VE_MBIST_VE_DRF_CIBLK_FAIL_inst                                         0x00EB
#define  set_VE_MBIST_VE_DRF_CIBLK_FAIL_reg(data)                                (*((volatile unsigned int*)VE_MBIST_VE_DRF_CIBLK_FAIL_reg)=data)
#define  get_VE_MBIST_VE_DRF_CIBLK_FAIL_reg                                      (*((volatile unsigned int*)VE_MBIST_VE_DRF_CIBLK_FAIL_reg))
#define  VE_MBIST_VE_DRF_CIBLK_FAIL_ve_drf_pred_3_2p_fail_shift                  (16)
#define  VE_MBIST_VE_DRF_CIBLK_FAIL_ve_drf_pred_3_fail_shift                     (7)
#define  VE_MBIST_VE_DRF_CIBLK_FAIL_ve_drf_ciblk_fail_shift                      (0)
#define  VE_MBIST_VE_DRF_CIBLK_FAIL_ve_drf_pred_3_2p_fail_mask                   (0x003F0000)
#define  VE_MBIST_VE_DRF_CIBLK_FAIL_ve_drf_pred_3_fail_mask                      (0x0000FF80)
#define  VE_MBIST_VE_DRF_CIBLK_FAIL_ve_drf_ciblk_fail_mask                       (0x0000007F)
#define  VE_MBIST_VE_DRF_CIBLK_FAIL_ve_drf_pred_3_2p_fail(data)                  (0x003F0000&((data)<<16))
#define  VE_MBIST_VE_DRF_CIBLK_FAIL_ve_drf_pred_3_fail(data)                     (0x0000FF80&((data)<<7))
#define  VE_MBIST_VE_DRF_CIBLK_FAIL_ve_drf_ciblk_fail(data)                      (0x0000007F&(data))
#define  VE_MBIST_VE_DRF_CIBLK_FAIL_get_ve_drf_pred_3_2p_fail(data)              ((0x003F0000&(data))>>16)
#define  VE_MBIST_VE_DRF_CIBLK_FAIL_get_ve_drf_pred_3_fail(data)                 ((0x0000FF80&(data))>>7)
#define  VE_MBIST_VE_DRF_CIBLK_FAIL_get_ve_drf_ciblk_fail(data)                  (0x0000007F&(data))
#define  VE_MBIST_VE_DRF_CIBLK_FAIL_ve_drf_pred_3_2p_fail_src(data)              ((0x003F0000&(data))>>16)
#define  VE_MBIST_VE_DRF_CIBLK_FAIL_ve_drf_pred_3_fail_src(data)                 ((0x0000FF80&(data))>>7)
#define  VE_MBIST_VE_DRF_CIBLK_FAIL_ve_drf_ciblk_fail_src(data)                  (0x0000007F&(data))

#define  VE_MBIST_VE_BIST_DCMPRS_FAIL                                           0x1800FFB0
#define  VE_MBIST_VE_BIST_DCMPRS_FAIL_reg_addr                                   "0xB800FFB0"
#define  VE_MBIST_VE_BIST_DCMPRS_FAIL_reg                                        0xB800FFB0
#define  VE_MBIST_VE_BIST_DCMPRS_FAIL_inst_adr                                   "0x00EC"
#define  VE_MBIST_VE_BIST_DCMPRS_FAIL_inst                                       0x00EC
#define  set_VE_MBIST_VE_BIST_DCMPRS_FAIL_reg(data)                              (*((volatile unsigned int*)VE_MBIST_VE_BIST_DCMPRS_FAIL_reg)=data)
#define  get_VE_MBIST_VE_BIST_DCMPRS_FAIL_reg                                    (*((volatile unsigned int*)VE_MBIST_VE_BIST_DCMPRS_FAIL_reg))
#define  VE_MBIST_VE_BIST_DCMPRS_FAIL_ve_bist_dcmprs_outbuf_fail_shift           (9)
#define  VE_MBIST_VE_BIST_DCMPRS_FAIL_ve_bist_dcmprs_fail_shift                  (0)
#define  VE_MBIST_VE_BIST_DCMPRS_FAIL_ve_bist_dcmprs_outbuf_fail_mask            (0x00007E00)
#define  VE_MBIST_VE_BIST_DCMPRS_FAIL_ve_bist_dcmprs_fail_mask                   (0x000001FF)
#define  VE_MBIST_VE_BIST_DCMPRS_FAIL_ve_bist_dcmprs_outbuf_fail(data)           (0x00007E00&((data)<<9))
#define  VE_MBIST_VE_BIST_DCMPRS_FAIL_ve_bist_dcmprs_fail(data)                  (0x000001FF&(data))
#define  VE_MBIST_VE_BIST_DCMPRS_FAIL_get_ve_bist_dcmprs_outbuf_fail(data)       ((0x00007E00&(data))>>9)
#define  VE_MBIST_VE_BIST_DCMPRS_FAIL_get_ve_bist_dcmprs_fail(data)              (0x000001FF&(data))
#define  VE_MBIST_VE_BIST_DCMPRS_FAIL_ve_bist_dcmprs_outbuf_fail_src(data)       ((0x00007E00&(data))>>9)
#define  VE_MBIST_VE_BIST_DCMPRS_FAIL_ve_bist_dcmprs_fail_src(data)              (0x000001FF&(data))

#define  VE_MBIST_VE_DRF_DCMPRS_FAIL                                            0x1800FFB4
#define  VE_MBIST_VE_DRF_DCMPRS_FAIL_reg_addr                                    "0xB800FFB4"
#define  VE_MBIST_VE_DRF_DCMPRS_FAIL_reg                                         0xB800FFB4
#define  VE_MBIST_VE_DRF_DCMPRS_FAIL_inst_adr                                    "0x00ED"
#define  VE_MBIST_VE_DRF_DCMPRS_FAIL_inst                                        0x00ED
#define  set_VE_MBIST_VE_DRF_DCMPRS_FAIL_reg(data)                               (*((volatile unsigned int*)VE_MBIST_VE_DRF_DCMPRS_FAIL_reg)=data)
#define  get_VE_MBIST_VE_DRF_DCMPRS_FAIL_reg                                     (*((volatile unsigned int*)VE_MBIST_VE_DRF_DCMPRS_FAIL_reg))
#define  VE_MBIST_VE_DRF_DCMPRS_FAIL_ve_drf_dcmprs_outbuf_fail_shift             (9)
#define  VE_MBIST_VE_DRF_DCMPRS_FAIL_ve_drf_dcmprs_fail_shift                    (0)
#define  VE_MBIST_VE_DRF_DCMPRS_FAIL_ve_drf_dcmprs_outbuf_fail_mask              (0x00007E00)
#define  VE_MBIST_VE_DRF_DCMPRS_FAIL_ve_drf_dcmprs_fail_mask                     (0x000001FF)
#define  VE_MBIST_VE_DRF_DCMPRS_FAIL_ve_drf_dcmprs_outbuf_fail(data)             (0x00007E00&((data)<<9))
#define  VE_MBIST_VE_DRF_DCMPRS_FAIL_ve_drf_dcmprs_fail(data)                    (0x000001FF&(data))
#define  VE_MBIST_VE_DRF_DCMPRS_FAIL_get_ve_drf_dcmprs_outbuf_fail(data)         ((0x00007E00&(data))>>9)
#define  VE_MBIST_VE_DRF_DCMPRS_FAIL_get_ve_drf_dcmprs_fail(data)                (0x000001FF&(data))
#define  VE_MBIST_VE_DRF_DCMPRS_FAIL_ve_drf_dcmprs_outbuf_fail_src(data)         ((0x00007E00&(data))>>9)
#define  VE_MBIST_VE_DRF_DCMPRS_FAIL_ve_drf_dcmprs_fail_src(data)                (0x000001FF&(data))

#define  VE_MBIST_VE_BIST_CLMP_FAIL                                             0x1800FFB8
#define  VE_MBIST_VE_BIST_CLMP_FAIL_reg_addr                                     "0xB800FFB8"
#define  VE_MBIST_VE_BIST_CLMP_FAIL_reg                                          0xB800FFB8
#define  VE_MBIST_VE_BIST_CLMP_FAIL_inst_adr                                     "0x00EE"
#define  VE_MBIST_VE_BIST_CLMP_FAIL_inst                                         0x00EE
#define  set_VE_MBIST_VE_BIST_CLMP_FAIL_reg(data)                                (*((volatile unsigned int*)VE_MBIST_VE_BIST_CLMP_FAIL_reg)=data)
#define  get_VE_MBIST_VE_BIST_CLMP_FAIL_reg                                      (*((volatile unsigned int*)VE_MBIST_VE_BIST_CLMP_FAIL_reg))
#define  VE_MBIST_VE_BIST_CLMP_FAIL_ve_bist_clmp_fail_shift                      (0)
#define  VE_MBIST_VE_BIST_CLMP_FAIL_ve_bist_clmp_fail_mask                       (0x0000001F)
#define  VE_MBIST_VE_BIST_CLMP_FAIL_ve_bist_clmp_fail(data)                      (0x0000001F&(data))
#define  VE_MBIST_VE_BIST_CLMP_FAIL_get_ve_bist_clmp_fail(data)                  (0x0000001F&(data))
#define  VE_MBIST_VE_BIST_CLMP_FAIL_ve_bist_clmp_fail_src(data)                  (0x0000001F&(data))

#define  VE_MBIST_VE_DRF_CLMP_FAIL                                              0x1800FFBC
#define  VE_MBIST_VE_DRF_CLMP_FAIL_reg_addr                                      "0xB800FFBC"
#define  VE_MBIST_VE_DRF_CLMP_FAIL_reg                                           0xB800FFBC
#define  VE_MBIST_VE_DRF_CLMP_FAIL_inst_adr                                      "0x00EF"
#define  VE_MBIST_VE_DRF_CLMP_FAIL_inst                                          0x00EF
#define  set_VE_MBIST_VE_DRF_CLMP_FAIL_reg(data)                                 (*((volatile unsigned int*)VE_MBIST_VE_DRF_CLMP_FAIL_reg)=data)
#define  get_VE_MBIST_VE_DRF_CLMP_FAIL_reg                                       (*((volatile unsigned int*)VE_MBIST_VE_DRF_CLMP_FAIL_reg))
#define  VE_MBIST_VE_DRF_CLMP_FAIL_ve_drf_clmp_fail_shift                        (0)
#define  VE_MBIST_VE_DRF_CLMP_FAIL_ve_drf_clmp_fail_mask                         (0x0000001F)
#define  VE_MBIST_VE_DRF_CLMP_FAIL_ve_drf_clmp_fail(data)                        (0x0000001F&(data))
#define  VE_MBIST_VE_DRF_CLMP_FAIL_get_ve_drf_clmp_fail(data)                    (0x0000001F&(data))
#define  VE_MBIST_VE_DRF_CLMP_FAIL_ve_drf_clmp_fail_src(data)                    (0x0000001F&(data))

#define  VE_MBIST_VE_BIST_P2MVD_FAIL                                            0x1800FFC0
#define  VE_MBIST_VE_BIST_P2MVD_FAIL_reg_addr                                    "0xB800FFC0"
#define  VE_MBIST_VE_BIST_P2MVD_FAIL_reg                                         0xB800FFC0
#define  VE_MBIST_VE_BIST_P2MVD_FAIL_inst_adr                                    "0x00F0"
#define  VE_MBIST_VE_BIST_P2MVD_FAIL_inst                                        0x00F0
#define  set_VE_MBIST_VE_BIST_P2MVD_FAIL_reg(data)                               (*((volatile unsigned int*)VE_MBIST_VE_BIST_P2MVD_FAIL_reg)=data)
#define  get_VE_MBIST_VE_BIST_P2MVD_FAIL_reg                                     (*((volatile unsigned int*)VE_MBIST_VE_BIST_P2MVD_FAIL_reg))
#define  VE_MBIST_VE_BIST_P2MVD_FAIL_ve_bist_p2mvd_fail_shift                    (0)
#define  VE_MBIST_VE_BIST_P2MVD_FAIL_ve_bist_p2mvd_fail_mask                     (0x000003FF)
#define  VE_MBIST_VE_BIST_P2MVD_FAIL_ve_bist_p2mvd_fail(data)                    (0x000003FF&(data))
#define  VE_MBIST_VE_BIST_P2MVD_FAIL_get_ve_bist_p2mvd_fail(data)                (0x000003FF&(data))
#define  VE_MBIST_VE_BIST_P2MVD_FAIL_ve_bist_p2mvd_fail_src(data)                (0x000003FF&(data))

#define  VE_MBIST_VE_DRF_P2MVD_FAIL                                             0x1800FFC4
#define  VE_MBIST_VE_DRF_P2MVD_FAIL_reg_addr                                     "0xB800FFC4"
#define  VE_MBIST_VE_DRF_P2MVD_FAIL_reg                                          0xB800FFC4
#define  VE_MBIST_VE_DRF_P2MVD_FAIL_inst_adr                                     "0x00F1"
#define  VE_MBIST_VE_DRF_P2MVD_FAIL_inst                                         0x00F1
#define  set_VE_MBIST_VE_DRF_P2MVD_FAIL_reg(data)                                (*((volatile unsigned int*)VE_MBIST_VE_DRF_P2MVD_FAIL_reg)=data)
#define  get_VE_MBIST_VE_DRF_P2MVD_FAIL_reg                                      (*((volatile unsigned int*)VE_MBIST_VE_DRF_P2MVD_FAIL_reg))
#define  VE_MBIST_VE_DRF_P2MVD_FAIL_ve_drf_p2mvd_fail_shift                      (0)
#define  VE_MBIST_VE_DRF_P2MVD_FAIL_ve_drf_p2mvd_fail_mask                       (0x000003FF)
#define  VE_MBIST_VE_DRF_P2MVD_FAIL_ve_drf_p2mvd_fail(data)                      (0x000003FF&(data))
#define  VE_MBIST_VE_DRF_P2MVD_FAIL_get_ve_drf_p2mvd_fail(data)                  (0x000003FF&(data))
#define  VE_MBIST_VE_DRF_P2MVD_FAIL_ve_drf_p2mvd_fail_src(data)                  (0x000003FF&(data))

#define  VE_MBIST_VE_BIST_MF_FAIL                                               0x1800FFC8
#define  VE_MBIST_VE_BIST_MF_FAIL_reg_addr                                       "0xB800FFC8"
#define  VE_MBIST_VE_BIST_MF_FAIL_reg                                            0xB800FFC8
#define  VE_MBIST_VE_BIST_MF_FAIL_inst_adr                                       "0x00F2"
#define  VE_MBIST_VE_BIST_MF_FAIL_inst                                           0x00F2
#define  set_VE_MBIST_VE_BIST_MF_FAIL_reg(data)                                  (*((volatile unsigned int*)VE_MBIST_VE_BIST_MF_FAIL_reg)=data)
#define  get_VE_MBIST_VE_BIST_MF_FAIL_reg                                        (*((volatile unsigned int*)VE_MBIST_VE_BIST_MF_FAIL_reg))
#define  VE_MBIST_VE_BIST_MF_FAIL_ve_bist_mf2_fail_shift                         (16)
#define  VE_MBIST_VE_BIST_MF_FAIL_ve_bist_mf1_fail_shift                         (8)
#define  VE_MBIST_VE_BIST_MF_FAIL_ve_bist_mf0_fail_shift                         (0)
#define  VE_MBIST_VE_BIST_MF_FAIL_ve_bist_mf2_fail_mask                          (0x00FF0000)
#define  VE_MBIST_VE_BIST_MF_FAIL_ve_bist_mf1_fail_mask                          (0x0000FF00)
#define  VE_MBIST_VE_BIST_MF_FAIL_ve_bist_mf0_fail_mask                          (0x000000FF)
#define  VE_MBIST_VE_BIST_MF_FAIL_ve_bist_mf2_fail(data)                         (0x00FF0000&((data)<<16))
#define  VE_MBIST_VE_BIST_MF_FAIL_ve_bist_mf1_fail(data)                         (0x0000FF00&((data)<<8))
#define  VE_MBIST_VE_BIST_MF_FAIL_ve_bist_mf0_fail(data)                         (0x000000FF&(data))
#define  VE_MBIST_VE_BIST_MF_FAIL_get_ve_bist_mf2_fail(data)                     ((0x00FF0000&(data))>>16)
#define  VE_MBIST_VE_BIST_MF_FAIL_get_ve_bist_mf1_fail(data)                     ((0x0000FF00&(data))>>8)
#define  VE_MBIST_VE_BIST_MF_FAIL_get_ve_bist_mf0_fail(data)                     (0x000000FF&(data))
#define  VE_MBIST_VE_BIST_MF_FAIL_ve_bist_mf2_fail_src(data)                     ((0x00FF0000&(data))>>16)
#define  VE_MBIST_VE_BIST_MF_FAIL_ve_bist_mf1_fail_src(data)                     ((0x0000FF00&(data))>>8)
#define  VE_MBIST_VE_BIST_MF_FAIL_ve_bist_mf0_fail_src(data)                     (0x000000FF&(data))

#define  VE_MBIST_VE_DRF_MF_FAIL                                                0x1800FFCC
#define  VE_MBIST_VE_DRF_MF_FAIL_reg_addr                                        "0xB800FFCC"
#define  VE_MBIST_VE_DRF_MF_FAIL_reg                                             0xB800FFCC
#define  VE_MBIST_VE_DRF_MF_FAIL_inst_adr                                        "0x00F3"
#define  VE_MBIST_VE_DRF_MF_FAIL_inst                                            0x00F3
#define  set_VE_MBIST_VE_DRF_MF_FAIL_reg(data)                                   (*((volatile unsigned int*)VE_MBIST_VE_DRF_MF_FAIL_reg)=data)
#define  get_VE_MBIST_VE_DRF_MF_FAIL_reg                                         (*((volatile unsigned int*)VE_MBIST_VE_DRF_MF_FAIL_reg))
#define  VE_MBIST_VE_DRF_MF_FAIL_ve_drf_mf2_fail_shift                           (16)
#define  VE_MBIST_VE_DRF_MF_FAIL_ve_drf_mf1_fail_shift                           (8)
#define  VE_MBIST_VE_DRF_MF_FAIL_ve_drf_mf0_fail_shift                           (0)
#define  VE_MBIST_VE_DRF_MF_FAIL_ve_drf_mf2_fail_mask                            (0x00FF0000)
#define  VE_MBIST_VE_DRF_MF_FAIL_ve_drf_mf1_fail_mask                            (0x0000FF00)
#define  VE_MBIST_VE_DRF_MF_FAIL_ve_drf_mf0_fail_mask                            (0x000000FF)
#define  VE_MBIST_VE_DRF_MF_FAIL_ve_drf_mf2_fail(data)                           (0x00FF0000&((data)<<16))
#define  VE_MBIST_VE_DRF_MF_FAIL_ve_drf_mf1_fail(data)                           (0x0000FF00&((data)<<8))
#define  VE_MBIST_VE_DRF_MF_FAIL_ve_drf_mf0_fail(data)                           (0x000000FF&(data))
#define  VE_MBIST_VE_DRF_MF_FAIL_get_ve_drf_mf2_fail(data)                       ((0x00FF0000&(data))>>16)
#define  VE_MBIST_VE_DRF_MF_FAIL_get_ve_drf_mf1_fail(data)                       ((0x0000FF00&(data))>>8)
#define  VE_MBIST_VE_DRF_MF_FAIL_get_ve_drf_mf0_fail(data)                       (0x000000FF&(data))
#define  VE_MBIST_VE_DRF_MF_FAIL_ve_drf_mf2_fail_src(data)                       ((0x00FF0000&(data))>>16)
#define  VE_MBIST_VE_DRF_MF_FAIL_ve_drf_mf1_fail_src(data)                       ((0x0000FF00&(data))>>8)
#define  VE_MBIST_VE_DRF_MF_FAIL_ve_drf_mf0_fail_src(data)                       (0x000000FF&(data))

#define  VE_MBIST_VE_BIST_LR_FAIL                                               0x1800FFD0
#define  VE_MBIST_VE_BIST_LR_FAIL_reg_addr                                       "0xB800FFD0"
#define  VE_MBIST_VE_BIST_LR_FAIL_reg                                            0xB800FFD0
#define  VE_MBIST_VE_BIST_LR_FAIL_inst_adr                                       "0x00F4"
#define  VE_MBIST_VE_BIST_LR_FAIL_inst                                           0x00F4
#define  set_VE_MBIST_VE_BIST_LR_FAIL_reg(data)                                  (*((volatile unsigned int*)VE_MBIST_VE_BIST_LR_FAIL_reg)=data)
#define  get_VE_MBIST_VE_BIST_LR_FAIL_reg                                        (*((volatile unsigned int*)VE_MBIST_VE_BIST_LR_FAIL_reg))
#define  VE_MBIST_VE_BIST_LR_FAIL_ve_bist_lr_fail_shift                          (0)
#define  VE_MBIST_VE_BIST_LR_FAIL_ve_bist_lr_fail_mask                           (0x0000001F)
#define  VE_MBIST_VE_BIST_LR_FAIL_ve_bist_lr_fail(data)                          (0x0000001F&(data))
#define  VE_MBIST_VE_BIST_LR_FAIL_get_ve_bist_lr_fail(data)                      (0x0000001F&(data))
#define  VE_MBIST_VE_BIST_LR_FAIL_ve_bist_lr_fail_src(data)                      (0x0000001F&(data))

#define  VE_MBIST_VE_DRF_LR_FAIL                                                0x1800FFD4
#define  VE_MBIST_VE_DRF_LR_FAIL_reg_addr                                        "0xB800FFD4"
#define  VE_MBIST_VE_DRF_LR_FAIL_reg                                             0xB800FFD4
#define  VE_MBIST_VE_DRF_LR_FAIL_inst_adr                                        "0x00F5"
#define  VE_MBIST_VE_DRF_LR_FAIL_inst                                            0x00F5
#define  set_VE_MBIST_VE_DRF_LR_FAIL_reg(data)                                   (*((volatile unsigned int*)VE_MBIST_VE_DRF_LR_FAIL_reg)=data)
#define  get_VE_MBIST_VE_DRF_LR_FAIL_reg                                         (*((volatile unsigned int*)VE_MBIST_VE_DRF_LR_FAIL_reg))
#define  VE_MBIST_VE_DRF_LR_FAIL_ve_drf_lr_fail_shift                            (0)
#define  VE_MBIST_VE_DRF_LR_FAIL_ve_drf_lr_fail_mask                             (0x0000001F)
#define  VE_MBIST_VE_DRF_LR_FAIL_ve_drf_lr_fail(data)                            (0x0000001F&(data))
#define  VE_MBIST_VE_DRF_LR_FAIL_get_ve_drf_lr_fail(data)                        (0x0000001F&(data))
#define  VE_MBIST_VE_DRF_LR_FAIL_ve_drf_lr_fail_src(data)                        (0x0000001F&(data))

#define  VE_MBIST_VE_BIST_CDEF_FAIL                                             0x1800FFD8
#define  VE_MBIST_VE_BIST_CDEF_FAIL_reg_addr                                     "0xB800FFD8"
#define  VE_MBIST_VE_BIST_CDEF_FAIL_reg                                          0xB800FFD8
#define  VE_MBIST_VE_BIST_CDEF_FAIL_inst_adr                                     "0x00F6"
#define  VE_MBIST_VE_BIST_CDEF_FAIL_inst                                         0x00F6
#define  set_VE_MBIST_VE_BIST_CDEF_FAIL_reg(data)                                (*((volatile unsigned int*)VE_MBIST_VE_BIST_CDEF_FAIL_reg)=data)
#define  get_VE_MBIST_VE_BIST_CDEF_FAIL_reg                                      (*((volatile unsigned int*)VE_MBIST_VE_BIST_CDEF_FAIL_reg))
#define  VE_MBIST_VE_BIST_CDEF_FAIL_ve_bist_cdef_fail_shift                      (0)
#define  VE_MBIST_VE_BIST_CDEF_FAIL_ve_bist_cdef_fail_mask                       (0x0000000F)
#define  VE_MBIST_VE_BIST_CDEF_FAIL_ve_bist_cdef_fail(data)                      (0x0000000F&(data))
#define  VE_MBIST_VE_BIST_CDEF_FAIL_get_ve_bist_cdef_fail(data)                  (0x0000000F&(data))
#define  VE_MBIST_VE_BIST_CDEF_FAIL_ve_bist_cdef_fail_src(data)                  (0x0000000F&(data))

#define  VE_MBIST_VE_DRF_CDEF_FAIL                                              0x1800FFDC
#define  VE_MBIST_VE_DRF_CDEF_FAIL_reg_addr                                      "0xB800FFDC"
#define  VE_MBIST_VE_DRF_CDEF_FAIL_reg                                           0xB800FFDC
#define  VE_MBIST_VE_DRF_CDEF_FAIL_inst_adr                                      "0x00F7"
#define  VE_MBIST_VE_DRF_CDEF_FAIL_inst                                          0x00F7
#define  set_VE_MBIST_VE_DRF_CDEF_FAIL_reg(data)                                 (*((volatile unsigned int*)VE_MBIST_VE_DRF_CDEF_FAIL_reg)=data)
#define  get_VE_MBIST_VE_DRF_CDEF_FAIL_reg                                       (*((volatile unsigned int*)VE_MBIST_VE_DRF_CDEF_FAIL_reg))
#define  VE_MBIST_VE_DRF_CDEF_FAIL_ve_drf_cdef_fail_shift                        (0)
#define  VE_MBIST_VE_DRF_CDEF_FAIL_ve_drf_cdef_fail_mask                         (0x0000000F)
#define  VE_MBIST_VE_DRF_CDEF_FAIL_ve_drf_cdef_fail(data)                        (0x0000000F&(data))
#define  VE_MBIST_VE_DRF_CDEF_FAIL_get_ve_drf_cdef_fail(data)                    (0x0000000F&(data))
#define  VE_MBIST_VE_DRF_CDEF_FAIL_ve_drf_cdef_fail_src(data)                    (0x0000000F&(data))

#define  VE_MBIST_VE_BIST_SR_FAIL                                               0x1800FFE0
#define  VE_MBIST_VE_BIST_SR_FAIL_reg_addr                                       "0xB800FFE0"
#define  VE_MBIST_VE_BIST_SR_FAIL_reg                                            0xB800FFE0
#define  VE_MBIST_VE_BIST_SR_FAIL_inst_adr                                       "0x00F8"
#define  VE_MBIST_VE_BIST_SR_FAIL_inst                                           0x00F8
#define  set_VE_MBIST_VE_BIST_SR_FAIL_reg(data)                                  (*((volatile unsigned int*)VE_MBIST_VE_BIST_SR_FAIL_reg)=data)
#define  get_VE_MBIST_VE_BIST_SR_FAIL_reg                                        (*((volatile unsigned int*)VE_MBIST_VE_BIST_SR_FAIL_reg))
#define  VE_MBIST_VE_BIST_SR_FAIL_ve_bist_sr_fail_shift                          (0)
#define  VE_MBIST_VE_BIST_SR_FAIL_ve_bist_sr_fail_mask                           (0x0000001F)
#define  VE_MBIST_VE_BIST_SR_FAIL_ve_bist_sr_fail(data)                          (0x0000001F&(data))
#define  VE_MBIST_VE_BIST_SR_FAIL_get_ve_bist_sr_fail(data)                      (0x0000001F&(data))
#define  VE_MBIST_VE_BIST_SR_FAIL_ve_bist_sr_fail_src(data)                      (0x0000001F&(data))

#define  VE_MBIST_VE_DRF_SR_FAIL                                                0x1800FFE4
#define  VE_MBIST_VE_DRF_SR_FAIL_reg_addr                                        "0xB800FFE4"
#define  VE_MBIST_VE_DRF_SR_FAIL_reg                                             0xB800FFE4
#define  VE_MBIST_VE_DRF_SR_FAIL_inst_adr                                        "0x00F9"
#define  VE_MBIST_VE_DRF_SR_FAIL_inst                                            0x00F9
#define  set_VE_MBIST_VE_DRF_SR_FAIL_reg(data)                                   (*((volatile unsigned int*)VE_MBIST_VE_DRF_SR_FAIL_reg)=data)
#define  get_VE_MBIST_VE_DRF_SR_FAIL_reg                                         (*((volatile unsigned int*)VE_MBIST_VE_DRF_SR_FAIL_reg))
#define  VE_MBIST_VE_DRF_SR_FAIL_ve_drf_sr_fail_shift                            (0)
#define  VE_MBIST_VE_DRF_SR_FAIL_ve_drf_sr_fail_mask                             (0x0000001F)
#define  VE_MBIST_VE_DRF_SR_FAIL_ve_drf_sr_fail(data)                            (0x0000001F&(data))
#define  VE_MBIST_VE_DRF_SR_FAIL_get_ve_drf_sr_fail(data)                        (0x0000001F&(data))
#define  VE_MBIST_VE_DRF_SR_FAIL_ve_drf_sr_fail_src(data)                        (0x0000001F&(data))

#define  VE_MBIST_VE_CAH_BSIR_FAIL                                              0x1800FFF0
#define  VE_MBIST_VE_CAH_BSIR_FAIL_reg_addr                                      "0xB800FFF0"
#define  VE_MBIST_VE_CAH_BSIR_FAIL_reg                                           0xB800FFF0
#define  VE_MBIST_VE_CAH_BSIR_FAIL_inst_adr                                      "0x00FC"
#define  VE_MBIST_VE_CAH_BSIR_FAIL_inst                                          0x00FC
#define  set_VE_MBIST_VE_CAH_BSIR_FAIL_reg(data)                                 (*((volatile unsigned int*)VE_MBIST_VE_CAH_BSIR_FAIL_reg)=data)
#define  get_VE_MBIST_VE_CAH_BSIR_FAIL_reg                                       (*((volatile unsigned int*)VE_MBIST_VE_CAH_BSIR_FAIL_reg))
#define  VE_MBIST_VE_CAH_BSIR_FAIL_ve_cah_bisr_repaired_shift                    (31)
#define  VE_MBIST_VE_CAH_BSIR_FAIL_ve_cah_bisr_fail_shift                        (0)
#define  VE_MBIST_VE_CAH_BSIR_FAIL_ve_cah_bisr_repaired_mask                     (0x80000000)
#define  VE_MBIST_VE_CAH_BSIR_FAIL_ve_cah_bisr_fail_mask                         (0x00000003)
#define  VE_MBIST_VE_CAH_BSIR_FAIL_ve_cah_bisr_repaired(data)                    (0x80000000&((data)<<31))
#define  VE_MBIST_VE_CAH_BSIR_FAIL_ve_cah_bisr_fail(data)                        (0x00000003&(data))
#define  VE_MBIST_VE_CAH_BSIR_FAIL_get_ve_cah_bisr_repaired(data)                ((0x80000000&(data))>>31)
#define  VE_MBIST_VE_CAH_BSIR_FAIL_get_ve_cah_bisr_fail(data)                    (0x00000003&(data))
#define  VE_MBIST_VE_CAH_BSIR_FAIL_ve_cah_bisr_repaired_src(data)                ((0x80000000&(data))>>31)
#define  VE_MBIST_VE_CAH_BSIR_FAIL_ve_cah_bisr_fail_src(data)                    (0x00000003&(data))

#define  VE_MBIST_VE_DRF_CAH_BISR_FAIL                                          0x1800FFF4
#define  VE_MBIST_VE_DRF_CAH_BISR_FAIL_reg_addr                                  "0xB800FFF4"
#define  VE_MBIST_VE_DRF_CAH_BISR_FAIL_reg                                       0xB800FFF4
#define  VE_MBIST_VE_DRF_CAH_BISR_FAIL_inst_adr                                  "0x00FD"
#define  VE_MBIST_VE_DRF_CAH_BISR_FAIL_inst                                      0x00FD
#define  set_VE_MBIST_VE_DRF_CAH_BISR_FAIL_reg(data)                             (*((volatile unsigned int*)VE_MBIST_VE_DRF_CAH_BISR_FAIL_reg)=data)
#define  get_VE_MBIST_VE_DRF_CAH_BISR_FAIL_reg                                   (*((volatile unsigned int*)VE_MBIST_VE_DRF_CAH_BISR_FAIL_reg))
#define  VE_MBIST_VE_DRF_CAH_BISR_FAIL_ve_drf_cah_bisr_fail_shift                (0)
#define  VE_MBIST_VE_DRF_CAH_BISR_FAIL_ve_drf_cah_bisr_fail_mask                 (0x00000003)
#define  VE_MBIST_VE_DRF_CAH_BISR_FAIL_ve_drf_cah_bisr_fail(data)                (0x00000003&(data))
#define  VE_MBIST_VE_DRF_CAH_BISR_FAIL_get_ve_drf_cah_bisr_fail(data)            (0x00000003&(data))
#define  VE_MBIST_VE_DRF_CAH_BISR_FAIL_ve_drf_cah_bisr_fail_src(data)            (0x00000003&(data))

#define  VE_MBIST_VE_NGH_BISR_FAIL                                              0x1800FFF8
#define  VE_MBIST_VE_NGH_BISR_FAIL_reg_addr                                      "0xB800FFF8"
#define  VE_MBIST_VE_NGH_BISR_FAIL_reg                                           0xB800FFF8
#define  VE_MBIST_VE_NGH_BISR_FAIL_inst_adr                                      "0x00FE"
#define  VE_MBIST_VE_NGH_BISR_FAIL_inst                                          0x00FE
#define  set_VE_MBIST_VE_NGH_BISR_FAIL_reg(data)                                 (*((volatile unsigned int*)VE_MBIST_VE_NGH_BISR_FAIL_reg)=data)
#define  get_VE_MBIST_VE_NGH_BISR_FAIL_reg                                       (*((volatile unsigned int*)VE_MBIST_VE_NGH_BISR_FAIL_reg))
#define  VE_MBIST_VE_NGH_BISR_FAIL_ve_ngh_2_bisr_repaired_shift                  (31)
#define  VE_MBIST_VE_NGH_BISR_FAIL_ve_ngh_bisr_repaired_shift                    (30)
#define  VE_MBIST_VE_NGH_BISR_FAIL_ve_ngh_2_bisr_fail_shift                      (1)
#define  VE_MBIST_VE_NGH_BISR_FAIL_ve_ngh_bisr_fail_shift                        (0)
#define  VE_MBIST_VE_NGH_BISR_FAIL_ve_ngh_2_bisr_repaired_mask                   (0x80000000)
#define  VE_MBIST_VE_NGH_BISR_FAIL_ve_ngh_bisr_repaired_mask                     (0x40000000)
#define  VE_MBIST_VE_NGH_BISR_FAIL_ve_ngh_2_bisr_fail_mask                       (0x00000002)
#define  VE_MBIST_VE_NGH_BISR_FAIL_ve_ngh_bisr_fail_mask                         (0x00000001)
#define  VE_MBIST_VE_NGH_BISR_FAIL_ve_ngh_2_bisr_repaired(data)                  (0x80000000&((data)<<31))
#define  VE_MBIST_VE_NGH_BISR_FAIL_ve_ngh_bisr_repaired(data)                    (0x40000000&((data)<<30))
#define  VE_MBIST_VE_NGH_BISR_FAIL_ve_ngh_2_bisr_fail(data)                      (0x00000002&((data)<<1))
#define  VE_MBIST_VE_NGH_BISR_FAIL_ve_ngh_bisr_fail(data)                        (0x00000001&(data))
#define  VE_MBIST_VE_NGH_BISR_FAIL_get_ve_ngh_2_bisr_repaired(data)              ((0x80000000&(data))>>31)
#define  VE_MBIST_VE_NGH_BISR_FAIL_get_ve_ngh_bisr_repaired(data)                ((0x40000000&(data))>>30)
#define  VE_MBIST_VE_NGH_BISR_FAIL_get_ve_ngh_2_bisr_fail(data)                  ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_NGH_BISR_FAIL_get_ve_ngh_bisr_fail(data)                    (0x00000001&(data))
#define  VE_MBIST_VE_NGH_BISR_FAIL_ve_ngh_2_bisr_repaired_src(data)              ((0x80000000&(data))>>31)
#define  VE_MBIST_VE_NGH_BISR_FAIL_ve_ngh_bisr_repaired_src(data)                ((0x40000000&(data))>>30)
#define  VE_MBIST_VE_NGH_BISR_FAIL_ve_ngh_2_bisr_fail_src(data)                  ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_NGH_BISR_FAIL_ve_ngh_bisr_fail_src(data)                    (0x00000001&(data))

#define  VE_MBIST_VE_DRF_NGH_BISR_FAIL                                          0x1800FFFC
#define  VE_MBIST_VE_DRF_NGH_BISR_FAIL_reg_addr                                  "0xB800FFFC"
#define  VE_MBIST_VE_DRF_NGH_BISR_FAIL_reg                                       0xB800FFFC
#define  VE_MBIST_VE_DRF_NGH_BISR_FAIL_inst_adr                                  "0x00FF"
#define  VE_MBIST_VE_DRF_NGH_BISR_FAIL_inst                                      0x00FF
#define  set_VE_MBIST_VE_DRF_NGH_BISR_FAIL_reg(data)                             (*((volatile unsigned int*)VE_MBIST_VE_DRF_NGH_BISR_FAIL_reg)=data)
#define  get_VE_MBIST_VE_DRF_NGH_BISR_FAIL_reg                                   (*((volatile unsigned int*)VE_MBIST_VE_DRF_NGH_BISR_FAIL_reg))
#define  VE_MBIST_VE_DRF_NGH_BISR_FAIL_ve_drf_ngh_2_bisr_fail_shift              (1)
#define  VE_MBIST_VE_DRF_NGH_BISR_FAIL_ve_drf_ngh_bisr_fail_shift                (0)
#define  VE_MBIST_VE_DRF_NGH_BISR_FAIL_ve_drf_ngh_2_bisr_fail_mask               (0x00000002)
#define  VE_MBIST_VE_DRF_NGH_BISR_FAIL_ve_drf_ngh_bisr_fail_mask                 (0x00000001)
#define  VE_MBIST_VE_DRF_NGH_BISR_FAIL_ve_drf_ngh_2_bisr_fail(data)              (0x00000002&((data)<<1))
#define  VE_MBIST_VE_DRF_NGH_BISR_FAIL_ve_drf_ngh_bisr_fail(data)                (0x00000001&(data))
#define  VE_MBIST_VE_DRF_NGH_BISR_FAIL_get_ve_drf_ngh_2_bisr_fail(data)          ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_DRF_NGH_BISR_FAIL_get_ve_drf_ngh_bisr_fail(data)            (0x00000001&(data))
#define  VE_MBIST_VE_DRF_NGH_BISR_FAIL_ve_drf_ngh_2_bisr_fail_src(data)          ((0x00000002&(data))>>1)
#define  VE_MBIST_VE_DRF_NGH_BISR_FAIL_ve_drf_ngh_bisr_fail_src(data)            (0x00000001&(data))

#ifdef _VE_MBIST_USE_STRUCT
#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======VE_MBIST register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  TEST_RWM:1;
        RBus_UInt32  TEST1:1;
        RBus_UInt32  SYSH_RMEA:1;
        RBus_UInt32  SYSH_RMA:4;
        RBus_UInt32  SYSH_RMEB:1;
        RBus_UInt32  SYSH_RMB:4;
        RBus_UInt32  SYSH_RME:1;
        RBus_UInt32  SYSH_RM:4;
        RBus_UInt32  RMEA:1;
        RBus_UInt32  RMA:4;
        RBus_UInt32  RMEB:1;
        RBus_UInt32  RMB:4;
        RBus_UInt32  RME:1;
        RBus_UInt32  RM:4;
    };
}LGCY_VE_MBIST_VE_BIST_RM_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ve_dmem_bist_en:1;
        RBus_UInt32  ve_ime_bist_en:1;
        RBus_UInt32  ve_cmprs_bist_en:1;
        RBus_UInt32  ve_ip_gc_bist_en:1;
        RBus_UInt32  ve_pred_2p_bist_en:1;
        RBus_UInt32  ve_pred_bist_en:1;
        RBus_UInt32  ve_fme_bist_en:1;
        RBus_UInt32  ve_dbk_bist_en:1;
        RBus_UInt32  ve_mvd_rlmvbuf_bist_en:1;
        RBus_UInt32  ve_rlrmem_fme_bist_en:1;
        RBus_UInt32  ve_cm_1_bist_en:1;
        RBus_UInt32  ve_cm_0_bist_en:1;
        RBus_UInt32  ve_ndb_bist_en:1;
        RBus_UInt32  ve_brg_bist_en:1;
        RBus_UInt32  ve_bs_bist_en:1;
        RBus_UInt32  ve_it_bist_en:1;
        RBus_UInt32  ve_vm_bist_en:1;
        RBus_UInt32  ve_vld_1_bist_en:1;
        RBus_UInt32  ve_vld_0_bist_en:1;
        RBus_UInt32  ve_rif_bist_en:1;
    };
}LGCY_VE_MBIST_VE_BIST_MODE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ve_bist_dmem_done:1;
        RBus_UInt32  ve_bist_ime_done:1;
        RBus_UInt32  ve_bist_cmprs_done:1;
        RBus_UInt32  ve_bist_ip_gc_done:1;
        RBus_UInt32  ve_bist_pred_2p_done:1;
        RBus_UInt32  ve_bist_pred_done:1;
        RBus_UInt32  ve_bist_fme_done:1;
        RBus_UInt32  ve_bist_dbk_done:1;
        RBus_UInt32  ve_bist_mvd_rlmvbuf_done:1;
        RBus_UInt32  ve_bist_rlrmem_fme_done:1;
        RBus_UInt32  ve_bist_cm_1_done:1;
        RBus_UInt32  ve_bist_cm_0_done:1;
        RBus_UInt32  ve_bist_ndb_done:1;
        RBus_UInt32  ve_bist_brg_done:1;
        RBus_UInt32  ve_bist_bs_done:1;
        RBus_UInt32  ve_bist_it_done:1;
        RBus_UInt32  ve_bist_vm_done:1;
        RBus_UInt32  ve_bist_vld_1_done:1;
        RBus_UInt32  ve_bist_vld_0_done:1;
        RBus_UInt32  ve_bist_rif_done:1;
    };
}LGCY_VE_MBIST_VE_BIST_DONE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ve_bist_dmem_fail_group:1;
        RBus_UInt32  ve_bist_ime_fail_group:1;
        RBus_UInt32  ve_bist_cmprs_fail_group:1;
        RBus_UInt32  ve_bist_ip_gc_fail_group:1;
        RBus_UInt32  ve_bist_pred_2p_fail_group:1;
        RBus_UInt32  ve_bist_pred_fail_group:1;
        RBus_UInt32  ve_bist_fme_fail_group:1;
        RBus_UInt32  ve_bist_dbk_fail_group:1;
        RBus_UInt32  ve_bist_mvd_rlmvbuf_fail_group:1;
        RBus_UInt32  ve_bist_rlrmem_fme_fail_group:1;
        RBus_UInt32  ve_bist_cm_1_fail_group:1;
        RBus_UInt32  ve_bist_cm_0_fail_group:1;
        RBus_UInt32  ve_bist_ndb_fail_group:1;
        RBus_UInt32  ve_bist_brg_fail_group:1;
        RBus_UInt32  ve_bist_bs_fail_group:1;
        RBus_UInt32  ve_bist_it_fail_group:1;
        RBus_UInt32  ve_bist_vm_fail_group:1;
        RBus_UInt32  ve_bist_vld_1_fail_group:1;
        RBus_UInt32  ve_bist_vld_0_fail_group:1;
        RBus_UInt32  ve_bist_rif_fail_group:1;
    };
}LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ve_dmem_drf_bist_en:1;
        RBus_UInt32  ve_ime_drf_bist_en:1;
        RBus_UInt32  ve_cmprs_drf_bist_en:1;
        RBus_UInt32  ve_ip_gc_drf_bist_en:1;
        RBus_UInt32  ve_pred_2p_drf_bist_en:1;
        RBus_UInt32  ve_pred_drf_bist_en:1;
        RBus_UInt32  ve_fme_drf_bist_en:1;
        RBus_UInt32  ve_dbk_drf_bist_en:1;
        RBus_UInt32  ve_mvd_rlmvbuf_drf_bist_en:1;
        RBus_UInt32  ve_rlrmem_fme_drf_bist_en:1;
        RBus_UInt32  ve_cm_1_drf_bist_en:1;
        RBus_UInt32  ve_cm_0_drf_bist_en:1;
        RBus_UInt32  ve_ndb_drf_bist_en:1;
        RBus_UInt32  ve_brg_drf_bist_en:1;
        RBus_UInt32  ve_bs_drf_bist_en:1;
        RBus_UInt32  ve_it_drf_bist_en:1;
        RBus_UInt32  ve_vm_drf_bist_en:1;
        RBus_UInt32  ve_vld_1_drf_bist_en:1;
        RBus_UInt32  ve_vld_0_drf_bist_en:1;
        RBus_UInt32  ve_rif_drf_bist_en:1;
    };
}LGCY_VE_MBIST_VE_DRF_MODE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ve_dmem_drf_resume:1;
        RBus_UInt32  ve_ime_drf_resume:1;
        RBus_UInt32  ve_cmprs_drf_resume:1;
        RBus_UInt32  ve_ip_gc_drf_resume:1;
        RBus_UInt32  ve_pred_2p_drf_resume:1;
        RBus_UInt32  ve_pred_drf_resume:1;
        RBus_UInt32  ve_fme_drf_resume:1;
        RBus_UInt32  ve_dbk_drf_resume:1;
        RBus_UInt32  ve_mvd_rlmvbuf_drf_resume:1;
        RBus_UInt32  ve_rlrmem_fme_drf_resume:1;
        RBus_UInt32  ve_cm_1_drf_resume:1;
        RBus_UInt32  ve_cm_0_drf_resume:1;
        RBus_UInt32  ve_ndb_drf_resume:1;
        RBus_UInt32  ve_brg_drf_resume:1;
        RBus_UInt32  ve_bs_drf_resume:1;
        RBus_UInt32  ve_it_drf_resume:1;
        RBus_UInt32  ve_vm_drf_resume:1;
        RBus_UInt32  ve_vld_1_drf_resume:1;
        RBus_UInt32  ve_vld_0_drf_resume:1;
        RBus_UInt32  ve_rif_drf_resume:1;
    };
}LGCY_VE_MBIST_VE_DRF_RESUME_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ve_dmem_drf_start_pause:1;
        RBus_UInt32  ve_ime_drf_start_pause:1;
        RBus_UInt32  ve_cmprs_drf_start_pause:1;
        RBus_UInt32  ve_ip_gc_drf_start_pause:1;
        RBus_UInt32  ve_pred_2p_drf_start_pause:1;
        RBus_UInt32  ve_pred_drf_start_pause:1;
        RBus_UInt32  ve_fme_drf_start_pause:1;
        RBus_UInt32  ve_dbk_drf_start_pause:1;
        RBus_UInt32  ve_mvd_rlmvbuf_drf_start_pause:1;
        RBus_UInt32  ve_rlrmem_fme_drf_start_pause:1;
        RBus_UInt32  ve_cm_1_drf_start_pause:1;
        RBus_UInt32  ve_cm_0_drf_start_pause:1;
        RBus_UInt32  ve_ndb_drf_start_pause:1;
        RBus_UInt32  ve_brg_drf_start_pause:1;
        RBus_UInt32  ve_bs_drf_start_pause:1;
        RBus_UInt32  ve_it_drf_start_pause:1;
        RBus_UInt32  ve_vm_drf_start_pause:1;
        RBus_UInt32  ve_vld_1_drf_start_pause:1;
        RBus_UInt32  ve_vld_0_drf_start_pause:1;
        RBus_UInt32  ve_rif_drf_start_pause:1;
    };
}LGCY_VE_MBIST_VE_DRF_PAUSE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ve_drf_dmem_done:1;
        RBus_UInt32  ve_drf_ime_done:1;
        RBus_UInt32  ve_drf_cmprs_done:1;
        RBus_UInt32  ve_drf_ip_gc_done:1;
        RBus_UInt32  ve_drf_pred_2p_done:1;
        RBus_UInt32  ve_drf_pred_done:1;
        RBus_UInt32  ve_drf_fme_done:1;
        RBus_UInt32  ve_drf_dbk_done:1;
        RBus_UInt32  ve_drf_mvd_rlmvbuf_done:1;
        RBus_UInt32  ve_drf_rlrmem_fme_done:1;
        RBus_UInt32  ve_drf_cm_1_done:1;
        RBus_UInt32  ve_drf_cm_0_done:1;
        RBus_UInt32  ve_drf_ndb_done:1;
        RBus_UInt32  ve_drf_brg_done:1;
        RBus_UInt32  ve_drf_bs_done:1;
        RBus_UInt32  ve_drf_it_done:1;
        RBus_UInt32  ve_drf_vm_done:1;
        RBus_UInt32  ve_drf_vld_1_done:1;
        RBus_UInt32  ve_drf_vld_0_done:1;
        RBus_UInt32  ve_drf_rif_done:1;
    };
}LGCY_VE_MBIST_VE_DRF_DONE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ve_drf_dmem_fail_group:1;
        RBus_UInt32  ve_drf_ime_fail_group:1;
        RBus_UInt32  ve_drf_cmprs_fail_group:1;
        RBus_UInt32  ve_drf_ip_gc_fail_group:1;
        RBus_UInt32  ve_drf_pred_2p_fail_group:1;
        RBus_UInt32  ve_drf_pred_fail_group:1;
        RBus_UInt32  ve_drf_fme_fail_group:1;
        RBus_UInt32  ve_drf_dbk_fail_group:1;
        RBus_UInt32  ve_drf_mvd_rlmvbuf_fail_group:1;
        RBus_UInt32  ve_drf_rlrmem_fme_fail_group:1;
        RBus_UInt32  ve_drf_cm_1_fail_group:1;
        RBus_UInt32  ve_drf_cm_0_fail_group:1;
        RBus_UInt32  ve_drf_ndb_fail_group:1;
        RBus_UInt32  ve_drf_brg_fail_group:1;
        RBus_UInt32  ve_drf_bs_fail_group:1;
        RBus_UInt32  ve_drf_it_fail_group:1;
        RBus_UInt32  ve_drf_vm_fail_group:1;
        RBus_UInt32  ve_drf_vld_1_fail_group:1;
        RBus_UInt32  ve_drf_vld_0_fail_group:1;
        RBus_UInt32  ve_drf_rif_fail_group:1;
    };
}LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  ve_bist_rif_fail:9;
    };
}LGCY_VE_MBIST_VE_BIST_RIF_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  ve_drf_rif_fail:9;
    };
}LGCY_VE_MBIST_VE_DRF_RIF_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  ve_bist_vld_1_fail:2;
        RBus_UInt32  ve_bist_vld_0_fail:3;
    };
}LGCY_VE_MBIST_VE_BIST_VLD_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  ve_drf_vld_1_fail:2;
        RBus_UInt32  ve_drf_vld_0_fail:3;
    };
}LGCY_VE_MBIST_VE_DRF_VLD_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  ve_bist_vm_fail:9;
    };
}LGCY_VE_MBIST_VE_BIST_VM_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  ve_drf_vm_fail:9;
    };
}LGCY_VE_MBIST_VE_DRF_VM_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  ve_bist_it_fail:4;
    };
}LGCY_VE_MBIST_VE_BIST_IT_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  ve_drf_it_fail:4;
    };
}LGCY_VE_MBIST_VE_DRF_IT_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  ve_bist_bs_fail:3;
    };
}LGCY_VE_MBIST_VE_BIST_BS_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  ve_drf_bs_fail:3;
    };
}LGCY_VE_MBIST_VE_DRF_BS_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  ve_bist_brg_fail:6;
    };
}LGCY_VE_MBIST_VE_BIST_BRG_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  ve_drf_brg_fail:6;
    };
}LGCY_VE_MBIST_VE_DRF_BRG_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  ve_bist_ndb_fail:4;
    };
}LGCY_VE_MBIST_VE_BIST_NDB_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  ve_drf_ndb_fail:4;
    };
}LGCY_VE_MBIST_VE_DRF_NDB_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  ve_bist_cm_1_fail:6;
        RBus_UInt32  ve_bist_cm_0_fail:6;
    };
}LGCY_VE_MBIST_VE_BIST_CM1_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  ve_drf_cm_1_fail:6;
        RBus_UInt32  ve_drf_cm_0_fail:6;
    };
}LGCY_VE_MBIST_VE_DRF_CM1_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  ve_bist_rlrmem_fme_fail:5;
    };
}LGCY_VE_MBIST_VE_BIST_RLRMEM_FME_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  ve_drf_rlrmem_fme_fail:5;
    };
}LGCY_VE_MBIST_VE_DRF_RLRMEM_FME_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  ve_bist_mvd_rlmvbuf_fail:3;
    };
}LGCY_VE_MBIST_VE_BIST_MVD_RLMVBUF_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  ve_drf_mvd_rlmvbuf_fail:3;
    };
}LGCY_VE_MBIST_VE_DRF_MVD_RLMVBUF_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  ve_bist_dbk_fail:9;
    };
}LGCY_VE_MBIST_VE_BIST_DBK_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  ve_drf_dbk_fail:9;
    };
}LGCY_VE_MBIST_VE_DRF_DBK_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  ve_bist_fme_fail:7;
    };
}LGCY_VE_MBIST_VE_BIST_FME_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  ve_drf_fme_fail:7;
    };
}LGCY_VE_MBIST_VE_DRF_FME_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  ve_bist_pred_fail:7;
    };
}LGCY_VE_MBIST_VE_BIST_PRED_0_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  ve_drf_pred_fail:7;
    };
}LGCY_VE_MBIST_VE_DRF_PRED_0_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  ve_bist_pred_2p_fail:2;
    };
}LGCY_VE_MBIST_VE_BIST_PRED_2P_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  ve_drf_pred_2p_fail:2;
    };
}LGCY_VE_MBIST_VE_DRF_PRED_2P_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  ve_bist_ip_gc_fail:7;
    };
}LGCY_VE_MBIST_VE_BIST_IP_GC_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  ve_drf_ip_gc_fail:7;
    };
}LGCY_VE_MBIST_VE_DRF_IP_GC_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  ve_bist_dmem_fail:2;
    };
}LGCY_VE_MBIST_VE_BIST_DMEM_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  ve_drf_dmem_fail:2;
    };
}LGCY_VE_MBIST_VE_DRF_DMEM_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  ve_bist_cmprs_fail:5;
    };
}LGCY_VE_MBIST_VE_BIST_CMPRS_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  ve_drf_cmprs_fail:5;
    };
}LGCY_VE_MBIST_VE_DRF_CMPRS_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  ve_bist_ime_fail:4;
    };
}LGCY_VE_MBIST_VE_BIST_IME_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  ve_drf_ime_fail:4;
    };
}LGCY_VE_MBIST_VE_DRF_IME_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  TEST_RWM:1;
        RBus_UInt32  TEST1:1;
        RBus_UInt32  SYSH_RMEA:1;
        RBus_UInt32  SYSH_RMA:4;
        RBus_UInt32  SYSH_RMEB:1;
        RBus_UInt32  SYSH_RMB:4;
        RBus_UInt32  SYSH_RME:1;
        RBus_UInt32  SYSH_RM:4;
        RBus_UInt32  RMEA:1;
        RBus_UInt32  RMA:4;
        RBus_UInt32  RMEB:1;
        RBus_UInt32  RMB:4;
        RBus_UInt32  RME:1;
        RBus_UInt32  RM:4;
    };
}VE_MBIST_VE_BIST_RM_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_mf2_bist_en:1;
        RBus_UInt32  ve_mf1_bist_en:1;
        RBus_UInt32  ve_mf0_bist_en:1;
        RBus_UInt32  ve_p2mvd_bist_en:1;
        RBus_UInt32  ve_vld_1_bist_en:1;
        RBus_UInt32  ve_p2_bist_en:1;
        RBus_UInt32  ve_clmp_bist_en:1;
        RBus_UInt32  ve_dcmprs_outbuf_bist_en:1;
        RBus_UInt32  ve_pred_3_bist_en:1;
        RBus_UInt32  ve_pred_2_bist_en:1;
        RBus_UInt32  ve_pred_1_bist_en:1;
        RBus_UInt32  ve_pred_0_bist_en:1;
        RBus_UInt32  ve_cah_2p_1_bist_en:1;
        RBus_UInt32  ve_cah_2p_0_bist_en:1;
        RBus_UInt32  ve_cah_1p_bist_en:1;
        RBus_UInt32  ve_dcmprs_bist_en:1;
        RBus_UInt32  ve_cmprs_bist_en:1;
        RBus_UInt32  ve_dbk_bist_en:1;
        RBus_UInt32  ve_seg_mvd_bist_en:1;
        RBus_UInt32  ve_rlrmem_mvbuf_bist_en:1;
        RBus_UInt32  ve_cm2_bist_en:1;
        RBus_UInt32  ve_cm1_bist_en:1;
        RBus_UInt32  ve_brg_bist_en:1;
        RBus_UInt32  ve_sao_bist_en:1;
        RBus_UInt32  ve_it_bs_bist_en:1;
        RBus_UInt32  ve_it_1_bist_en:1;
        RBus_UInt32  ve_it_0_1_bist_en:1;
        RBus_UInt32  ve_it_0_0_bist_en:1;
        RBus_UInt32  ve_vm_1_bist_en:1;
        RBus_UInt32  ve_vm_0_bist_en:1;
        RBus_UInt32  ve_vld_0_bist_en:1;
        RBus_UInt32  ve_rif_bist_en:1;
    };
}VE_MBIST_VE_BIST_MODE0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  ve_pred_2e_bist_en:1;
        RBus_UInt32  ve_rlrmem01_bist_en:1;
        RBus_UInt32  ve_cmprs_1_bist_en:1;
        RBus_UInt32  ve_pred_3_2p_bist_en:1;
        RBus_UInt32  ve_vm_2_bist_en:1;
        RBus_UInt32  ve_ciblk_bist_en:1;
        RBus_UInt32  ve_sr_bist_en:1;
        RBus_UInt32  ve_cdef_bist_en:1;
        RBus_UInt32  ve_lr_bist_en:1;
    };
}VE_MBIST_VE_BIST_MODE1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_mf2_done:1;
        RBus_UInt32  ve_bist_mf1_done:1;
        RBus_UInt32  ve_bist_mf0_done:1;
        RBus_UInt32  ve_bist_p2mvd_done:1;
        RBus_UInt32  ve_bist_vld_1_done:1;
        RBus_UInt32  ve_bist_p2_done:1;
        RBus_UInt32  ve_bist_clmp_done:1;
        RBus_UInt32  ve_bist_dcmprs_outbuf_done:1;
        RBus_UInt32  ve_bist_pred_3_done:1;
        RBus_UInt32  ve_bist_pred_2_done:1;
        RBus_UInt32  ve_bist_pred_1_done:1;
        RBus_UInt32  ve_bist_pred_0_done:1;
        RBus_UInt32  ve_bist_cah_2p_1_done:1;
        RBus_UInt32  ve_bist_cah_2p_0_done:1;
        RBus_UInt32  ve_bist_cah_1p_done:1;
        RBus_UInt32  ve_bist_dcmprs_done:1;
        RBus_UInt32  ve_bist_cmprs_done:1;
        RBus_UInt32  ve_bist_dbk_done:1;
        RBus_UInt32  ve_bist_seg_mvd_done:1;
        RBus_UInt32  ve_bist_rlrmem_mvbuf_done:1;
        RBus_UInt32  ve_bist_cm2_done:1;
        RBus_UInt32  ve_bist_cm1_done:1;
        RBus_UInt32  ve_bist_brg_done:1;
        RBus_UInt32  ve_bist_sao_done:1;
        RBus_UInt32  ve_bist_it_bs_done:1;
        RBus_UInt32  ve_bist_it_1_done:1;
        RBus_UInt32  ve_bist_it_0_1_done:1;
        RBus_UInt32  ve_bist_it_0_0_done:1;
        RBus_UInt32  ve_bist_vm_1_done:1;
        RBus_UInt32  ve_bist_vm_0_done:1;
        RBus_UInt32  ve_bist_vld_0_done:1;
        RBus_UInt32  ve_bist_rif_done:1;
    };
}VE_MBIST_VE_BIST_DONE0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  ve_bist_pred_2e_done:1;
        RBus_UInt32  ve_bist_rlrmem01_done:1;
        RBus_UInt32  ve_bist_cmprs_1_done:1;
        RBus_UInt32  ve_bist_pred_3_2p_done:1;
        RBus_UInt32  ve_bist_vm_2_done:1;
        RBus_UInt32  ve_bist_ciblk_done:1;
        RBus_UInt32  ve_bist_sr_done:1;
        RBus_UInt32  ve_bist_cdef_done:1;
        RBus_UInt32  ve_bist_lr_done:1;
    };
}VE_MBIST_VE_BIST_DONE1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_mf2_fail_group:1;
        RBus_UInt32  ve_bist_mf1_fail_group:1;
        RBus_UInt32  ve_bist_mf0_fail_group:1;
        RBus_UInt32  ve_bist_p2mvd_fail_group:1;
        RBus_UInt32  ve_bist_vld_1_fail_group:1;
        RBus_UInt32  ve_bist_p2_fail_group:1;
        RBus_UInt32  ve_bist_clmp_fail_group:1;
        RBus_UInt32  ve_bist_dcmprs_outbuf_fail_group:1;
        RBus_UInt32  ve_bist_pred_3_fail_group:1;
        RBus_UInt32  ve_bist_pred_2_fail_group:1;
        RBus_UInt32  ve_bist_pred_1_fail_group:1;
        RBus_UInt32  ve_bist_pred_0_fail_group:1;
        RBus_UInt32  ve_bist_cah_2p_1_fail_group:1;
        RBus_UInt32  ve_bist_cah_2p_0_fail_group:1;
        RBus_UInt32  ve_bist_cah_1p_fail_group:1;
        RBus_UInt32  ve_bist_dcmprs_fail_group:1;
        RBus_UInt32  ve_bist_cmprs_fail_group:1;
        RBus_UInt32  ve_bist_dbk_fail_group:1;
        RBus_UInt32  ve_bist_seg_mvd_fail_group:1;
        RBus_UInt32  ve_bist_rlrmem_mvbuf_fail_group:1;
        RBus_UInt32  ve_bist_cm2_fail_group:1;
        RBus_UInt32  ve_bist_cm1_fail_group:1;
        RBus_UInt32  ve_bist_brg_fail_group:1;
        RBus_UInt32  ve_bist_sao_fail_group:1;
        RBus_UInt32  ve_bist_it_bs_fail_group:1;
        RBus_UInt32  ve_bist_it_1_fail_group:1;
        RBus_UInt32  ve_bist_it_0_1_fail_group:1;
        RBus_UInt32  ve_bist_it_0_0_fail_group:1;
        RBus_UInt32  ve_bist_vm_1_fail_group:1;
        RBus_UInt32  ve_bist_vm_0_fail_group:1;
        RBus_UInt32  ve_bist_vld_0_fail_group:1;
        RBus_UInt32  ve_bist_rif_fail_group:1;
    };
}VE_MBIST_VE_BIST_FAIL_GROUP0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  ve_bist_pred_2e_fail_group:1;
        RBus_UInt32  ve_bist_rlrmem01_fail_group:1;
        RBus_UInt32  ve_bist_cmprs_1_fail_group:1;
        RBus_UInt32  ve_bist_pred_3_2p_fail_group:1;
        RBus_UInt32  ve_bist_vm_2_fail_group:1;
        RBus_UInt32  ve_bist_ciblk_fail_group:1;
        RBus_UInt32  ve_bist_sr_fail_group:1;
        RBus_UInt32  ve_bist_cdef_fail_group:1;
        RBus_UInt32  ve_bist_lr_fail_group:1;
    };
}VE_MBIST_VE_BIST_FAIL_GROUP1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_mf2_drf_bist_en:1;
        RBus_UInt32  ve_mf1_drf_bist_en:1;
        RBus_UInt32  ve_mf0_drf_bist_en:1;
        RBus_UInt32  ve_p2mvd_drf_bist_en:1;
        RBus_UInt32  ve_vld_1_drf_bist_en:1;
        RBus_UInt32  ve_p2_drf_bist_en:1;
        RBus_UInt32  ve_clmp_drf_bist_en:1;
        RBus_UInt32  ve_dcmprs_outbuf_drf_bist_en:1;
        RBus_UInt32  ve_pred_3_drf_bist_en:1;
        RBus_UInt32  ve_pred_2_drf_bist_en:1;
        RBus_UInt32  ve_pred_1_drf_bist_en:1;
        RBus_UInt32  ve_pred_0_drf_bist_en:1;
        RBus_UInt32  ve_cah_2p_1_drf_bist_en:1;
        RBus_UInt32  ve_cah_2p_0_drf_bist_en:1;
        RBus_UInt32  ve_cah_1p_drf_bist_en:1;
        RBus_UInt32  ve_dcmprs_drf_bist_en:1;
        RBus_UInt32  ve_cmprs_drf_bist_en:1;
        RBus_UInt32  ve_dbk_drf_bist_en:1;
        RBus_UInt32  ve_seg_mvd_drf_bist_en:1;
        RBus_UInt32  ve_rlrmem_mvbuf_drf_bist_en:1;
        RBus_UInt32  ve_cm2_drf_bist_en:1;
        RBus_UInt32  ve_cm1_drf_bist_en:1;
        RBus_UInt32  ve_brg_drf_bist_en:1;
        RBus_UInt32  ve_sao_drf_bist_en:1;
        RBus_UInt32  ve_it_bs_drf_bist_en:1;
        RBus_UInt32  ve_it_1_drf_bist_en:1;
        RBus_UInt32  ve_it_0_1_drf_bist_en:1;
        RBus_UInt32  ve_it_0_0_drf_bist_en:1;
        RBus_UInt32  ve_vm_1_drf_bist_en:1;
        RBus_UInt32  ve_vm_0_drf_bist_en:1;
        RBus_UInt32  ve_vld_0_drf_bist_en:1;
        RBus_UInt32  ve_rif_drf_bist_en:1;
    };
}VE_MBIST_VE_DRF_MODE0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  ve_ngh_2_bisr_drf_bist_en:1;
        RBus_UInt32  ve_ngh_bisr_drf_bist_en:1;
        RBus_UInt32  ve_cah_bisr_drf_bist_en:1;
        RBus_UInt32  ve_pred_2e_drf_bist_en:1;
        RBus_UInt32  ve_rlrmem01_drf_bist_en:1;
        RBus_UInt32  ve_cmprs_1_drf_bist_en:1;
        RBus_UInt32  ve_pred_3_2p_drf_bist_en:1;
        RBus_UInt32  ve_vm_2_drf_bist_en:1;
        RBus_UInt32  ve_ciblk_drf_bist_en:1;
        RBus_UInt32  ve_sr_drf_bist_en:1;
        RBus_UInt32  ve_cdef_drf_bist_en:1;
        RBus_UInt32  ve_lr_drf_bist_en:1;
    };
}VE_MBIST_VE_DRF_MODE1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_mf2_drf_resume:1;
        RBus_UInt32  ve_mf1_drf_resume:1;
        RBus_UInt32  ve_mf0_drf_resume:1;
        RBus_UInt32  ve_p2mvd_drf_resume:1;
        RBus_UInt32  ve_vld_1_drf_resume:1;
        RBus_UInt32  ve_p2_drf_resume:1;
        RBus_UInt32  ve_clmp_drf_resume:1;
        RBus_UInt32  ve_dcmprs_outbuf_drf_resume:1;
        RBus_UInt32  ve_pred_3_drf_resume:1;
        RBus_UInt32  ve_pred_2_drf_resume:1;
        RBus_UInt32  ve_pred_0_drf_resume:1;
        RBus_UInt32  ve_pred_1_drf_resume:1;
        RBus_UInt32  ve_cah_2p_1_drf_resume:1;
        RBus_UInt32  ve_cah_2p_0_drf_resume:1;
        RBus_UInt32  ve_cah_1p_drf_resume:1;
        RBus_UInt32  ve_dcmprs_drf_resume:1;
        RBus_UInt32  ve_cmprs_drf_resume:1;
        RBus_UInt32  ve_dbk_drf_resume:1;
        RBus_UInt32  ve_seg_mvd_drf_resume:1;
        RBus_UInt32  ve_rlrmem_mvbuf_drf_resume:1;
        RBus_UInt32  ve_cm2_drf_resume:1;
        RBus_UInt32  ve_cm1_drf_resume:1;
        RBus_UInt32  ve_brg_drf_resume:1;
        RBus_UInt32  ve_sao_drf_resume:1;
        RBus_UInt32  ve_it_bs_drf_resume:1;
        RBus_UInt32  ve_it_1_drf_resume:1;
        RBus_UInt32  ve_it_0_1_drf_resume:1;
        RBus_UInt32  ve_it_0_0_drf_resume:1;
        RBus_UInt32  ve_vm_1_drf_resume:1;
        RBus_UInt32  ve_vm_0_drf_resume:1;
        RBus_UInt32  ve_vld_0_drf_resume:1;
        RBus_UInt32  ve_rif_drf_resume:1;
    };
}VE_MBIST_VE_DRF_RESUME0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  ve_ngh_2_bisr_drf_resume:1;
        RBus_UInt32  ve_ngh_bisr_drf_resume:1;
        RBus_UInt32  ve_cah_bisr_drf_resume:1;
        RBus_UInt32  ve_pred_2e_drf_resume:1;
        RBus_UInt32  ve_rlrmem01_drf_resume:1;
        RBus_UInt32  ve_cmprs_1_drf_resume:1;
        RBus_UInt32  ve_pred_3_2p_drf_resume:1;
        RBus_UInt32  ve_vm_2_drf_resume:1;
        RBus_UInt32  ve_ciblk_drf_resume:1;
        RBus_UInt32  ve_sr_drf_resume:1;
        RBus_UInt32  ve_cdef_drf_resume:1;
        RBus_UInt32  ve_lr_drf_resume:1;
    };
}VE_MBIST_VE_DRF_RESUME1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_mf2_drf_start_pause:1;
        RBus_UInt32  ve_mf1_drf_start_pause:1;
        RBus_UInt32  ve_mf0_drf_start_pause:1;
        RBus_UInt32  ve_p2mvd_drf_start_pause:1;
        RBus_UInt32  ve_vld_1_drf_start_pause:1;
        RBus_UInt32  ve_p2_drf_start_pause:1;
        RBus_UInt32  ve_clmp_drf_start_pause:1;
        RBus_UInt32  ve_dcmprs_outbuf_drf_start_pause:1;
        RBus_UInt32  ve_pred_3_drf_start_pause:1;
        RBus_UInt32  ve_pred_2_drf_start_pause:1;
        RBus_UInt32  ve_pred_1_drf_start_pause:1;
        RBus_UInt32  ve_pred_0_drf_start_pause:1;
        RBus_UInt32  ve_cah_2p_1_drf_start_pause:1;
        RBus_UInt32  ve_cah_2p_0_drf_start_pause:1;
        RBus_UInt32  ve_cah_1p_drf_start_pause:1;
        RBus_UInt32  ve_dcmprs_drf_start_pause:1;
        RBus_UInt32  ve_cmprs_drf_start_pause:1;
        RBus_UInt32  ve_dbk_drf_start_pause:1;
        RBus_UInt32  ve_seg_mvd_drf_start_pause:1;
        RBus_UInt32  ve_rlrmem_mvbuf_drf_start_pause:1;
        RBus_UInt32  ve_cm2_drf_start_pause:1;
        RBus_UInt32  ve_cm1_drf_start_pause:1;
        RBus_UInt32  ve_brg_drf_start_pause:1;
        RBus_UInt32  ve_sao_drf_start_pause:1;
        RBus_UInt32  ve_it_bs_drf_start_pause:1;
        RBus_UInt32  ve_it_1_drf_start_pause:1;
        RBus_UInt32  ve_it_0_1_drf_start_pause:1;
        RBus_UInt32  ve_it_0_0_drf_start_pause:1;
        RBus_UInt32  ve_vm_1_drf_start_pause:1;
        RBus_UInt32  ve_vm_0_drf_start_pause:1;
        RBus_UInt32  ve_vld_0_drf_start_pause:1;
        RBus_UInt32  ve_rif_drf_start_pause:1;
    };
}VE_MBIST_VE_DRF_PAUSE0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  ve_ngh_2_bisr_drf_start_pause:1;
        RBus_UInt32  ve_ngh_bisr_drf_start_pause:1;
        RBus_UInt32  ve_cah_bisr_drf_start_pause:1;
        RBus_UInt32  ve_pred_2e_drf_start_pause:1;
        RBus_UInt32  ve_rlrmem01_drf_start_pause:1;
        RBus_UInt32  ve_cmprs_1_drf_start_pause:1;
        RBus_UInt32  ve_pred_3_2p_drf_start_pause:1;
        RBus_UInt32  ve_vm_2_drf_start_pause:1;
        RBus_UInt32  ve_ciblk_drf_start_pause:1;
        RBus_UInt32  ve_sr_drf_start_pause:1;
        RBus_UInt32  ve_cdef_drf_start_pause:1;
        RBus_UInt32  ve_lr_drf_start_pause:1;
    };
}VE_MBIST_VE_DRF_PAUSE1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_mf2_done:1;
        RBus_UInt32  ve_drf_mf1_done:1;
        RBus_UInt32  ve_drf_mf0_done:1;
        RBus_UInt32  ve_drf_p2mvd_done:1;
        RBus_UInt32  ve_drf_vld_1_done:1;
        RBus_UInt32  ve_drf_p2_done:1;
        RBus_UInt32  ve_drf_clmp_done:1;
        RBus_UInt32  ve_drf_dcmprs_outbuf_done:1;
        RBus_UInt32  ve_drf_pred_3_done:1;
        RBus_UInt32  ve_drf_pred_2_done:1;
        RBus_UInt32  ve_drf_pred_1_done:1;
        RBus_UInt32  ve_drf_pred_0_done:1;
        RBus_UInt32  ve_drf_cah_2p_1_done:1;
        RBus_UInt32  ve_drf_cah_2p_0_done:1;
        RBus_UInt32  ve_drf_cah_1p_done:1;
        RBus_UInt32  ve_drf_dcmprs_done:1;
        RBus_UInt32  ve_drf_cmprs_done:1;
        RBus_UInt32  ve_drf_dbk_done:1;
        RBus_UInt32  ve_drf_seg_mvd_done:1;
        RBus_UInt32  ve_drf_rlrmem_mvbuf_done:1;
        RBus_UInt32  ve_drf_cm2_done:1;
        RBus_UInt32  ve_drf_cm1_done:1;
        RBus_UInt32  ve_drf_brg_done:1;
        RBus_UInt32  ve_drf_sao_done:1;
        RBus_UInt32  ve_drf_it_bs_done:1;
        RBus_UInt32  ve_drf_it_1_done:1;
        RBus_UInt32  ve_drf_it_0_1_done:1;
        RBus_UInt32  ve_drf_it_0_0_done:1;
        RBus_UInt32  ve_drf_vm_1_done:1;
        RBus_UInt32  ve_drf_vm_0_done:1;
        RBus_UInt32  ve_drf_vld_0_done:1;
        RBus_UInt32  ve_drf_rif_done:1;
    };
}VE_MBIST_VE_DRF_DONE0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  ve_drf_ngh_2_bisr_done:1;
        RBus_UInt32  ve_drf_ngh_bisr_done:1;
        RBus_UInt32  ve_drf_cah_bisr_done:1;
        RBus_UInt32  ve_drf_pred_2e_done:1;
        RBus_UInt32  ve_drf_rlrmem01_done:1;
        RBus_UInt32  ve_drf_cmprs_1_done:1;
        RBus_UInt32  ve_drf_pred_3_2p_done:1;
        RBus_UInt32  ve_drf_vm_2_done:1;
        RBus_UInt32  ve_drf_ciblk_done:1;
        RBus_UInt32  ve_drf_sr_done:1;
        RBus_UInt32  ve_drf_cdef_done:1;
        RBus_UInt32  ve_drf_lr_done:1;
    };
}VE_MBIST_VE_DRF_DONE1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_mf2_fail_group:1;
        RBus_UInt32  ve_drf_mf1_fail_group:1;
        RBus_UInt32  ve_drf_mf0_fail_group:1;
        RBus_UInt32  ve_drf_p2mvd_fail_group:1;
        RBus_UInt32  ve_drf_vld_1_fail_group:1;
        RBus_UInt32  ve_drf_p2_fail_group:1;
        RBus_UInt32  ve_drf_clmp_fail_group:1;
        RBus_UInt32  ve_drf_dcmprs_outbuf_fail_group:1;
        RBus_UInt32  ve_drf_pred_3_fail_group:1;
        RBus_UInt32  ve_drf_pred_2_fail_group:1;
        RBus_UInt32  ve_drf_pred_1_fail_group:1;
        RBus_UInt32  ve_drf_pred_0_fail_group:1;
        RBus_UInt32  ve_drf_cah_2p_1_fail_group:1;
        RBus_UInt32  ve_drf_cah_2p_0_fail_group:1;
        RBus_UInt32  ve_drf_cah_1p_fail_group:1;
        RBus_UInt32  ve_drf_dcmprs_fail_group:1;
        RBus_UInt32  ve_drf_cmprs_fail_group:1;
        RBus_UInt32  ve_drf_dbk_fail_group:1;
        RBus_UInt32  ve_drf_seg_mvd_fail_group:1;
        RBus_UInt32  ve_drf_rlrmem_mvbuf_fail_group:1;
        RBus_UInt32  ve_drf_cm2_fail_group:1;
        RBus_UInt32  ve_drf_cm1_fail_group:1;
        RBus_UInt32  ve_drf_brg_fail_group:1;
        RBus_UInt32  ve_drf_sao_fail_group:1;
        RBus_UInt32  ve_drf_it_bs_fail_group:1;
        RBus_UInt32  ve_drf_it_1_fail_group:1;
        RBus_UInt32  ve_drf_it_0_1_fail_group:1;
        RBus_UInt32  ve_drf_it_0_0_fail_group:1;
        RBus_UInt32  ve_drf_vm_1_fail_group:1;
        RBus_UInt32  ve_drf_vm_0_fail_group:1;
        RBus_UInt32  ve_drf_vld_0_fail_group:1;
        RBus_UInt32  ve_drf_rif_fail_group:1;
    };
}VE_MBIST_VE_DRF_FAIL_GROUP0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  ve_drf_ngh_2_bisr_fail_group:1;
        RBus_UInt32  ve_drf_ngh_bisr_fail_group:1;
        RBus_UInt32  ve_drf_cah_bisr_fail_group:1;
        RBus_UInt32  ve_drf_pred_2e_fail_group:1;
        RBus_UInt32  ve_drf_rlrmem01_fail_group:1;
        RBus_UInt32  ve_drf_cmprs_1_fail_group:1;
        RBus_UInt32  ve_drf_pred_3_2p_fail_group:1;
        RBus_UInt32  ve_drf_vm_2_fail_group:1;
        RBus_UInt32  ve_drf_ciblk_fail_group:1;
        RBus_UInt32  ve_drf_sr_fail_group:1;
        RBus_UInt32  ve_drf_cdef_fail_group:1;
        RBus_UInt32  ve_drf_lr_fail_group:1;
    };
}VE_MBIST_VE_DRF_FAIL_GROUP1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  ve_ngh_2_bisr_second_run:1;
        RBus_UInt32  ve_ngh_bisr_second_run:1;
        RBus_UInt32  ve_cah_bisr_second_run:1;
    };
}VE_MBIST_CAH_BISR_SECOND_RUN_EN_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  ve_ngh_2_bisr_fail_group:1;
        RBus_UInt32  ve_ngh_bisr_fail_group:1;
        RBus_UInt32  ve_cah_bisr_fail_group:1;
    };
}VE_MBIST_CAH_BISR_FAIL_GROUP_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ve_bist_p2_fail:5;
        RBus_UInt32  ve_bist_vld_1_fail:10;
        RBus_UInt32  ve_bist_vld_0_fail:10;
        RBus_UInt32  ve_bist_rif_fail:5;
    };
}VE_MBIST_VE_BIST_RIF_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ve_drf_p2_fail:5;
        RBus_UInt32  ve_drf_vld_1_fail:10;
        RBus_UInt32  ve_drf_vld_0_fail:10;
        RBus_UInt32  ve_drf_rif_fail:5;
    };
}VE_MBIST_VE_DRF_RIF_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ve_bist_vm_2_fail:7;
        RBus_UInt32  ve_bist_vm_1_fail:10;
        RBus_UInt32  ve_bist_vm_0_fail:10;
    };
}VE_MBIST_VE_BIST_VM_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ve_drf_vm_2_fail:7;
        RBus_UInt32  ve_drf_vm_1_fail:10;
        RBus_UInt32  ve_drf_vm_0_fail:10;
    };
}VE_MBIST_VE_DRF_VM_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ve_bist_it_bs_fail:4;
        RBus_UInt32  ve_bist_it_1_fail:6;
        RBus_UInt32  ve_bist_it_0_1_fail:10;
        RBus_UInt32  ve_bist_it_0_0_fail:10;
    };
}VE_MBIST_VE_BIST_IT_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ve_drf_it_bs_fail:4;
        RBus_UInt32  ve_drf_it_1_fail:6;
        RBus_UInt32  ve_drf_it_0_1_fail:10;
        RBus_UInt32  ve_drf_it_0_0_fail:10;
    };
}VE_MBIST_VE_DRF_IT_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  ve_bist_sao_fail:3;
    };
}VE_MBIST_VE_BIST_SAO_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  ve_drf_sao_fail:3;
    };
}VE_MBIST_VE_DRF_SAO_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  ve_bist_brg_fail:5;
    };
}VE_MBIST_VE_BIST_BRG_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  ve_drf_brg_fail:5;
    };
}VE_MBIST_VE_DRF_BRG_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ve_bist_cm2_fail:10;
        RBus_UInt32  ve_bist_cm1_fail:10;
    };
}VE_MBIST_VE_BIST_CM_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ve_drf_cm2_fail:10;
        RBus_UInt32  ve_drf_cm1_fail:10;
    };
}VE_MBIST_VE_DRF_CM_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  ve_bist_rlrmem01_fail:8;
        RBus_UInt32  ve_bist_rlrmem_mvbuf_fail:7;
    };
}VE_MBIST_VE_BIST_RLRMEM_MVBUF_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  ve_drf_rlrmem01_fail:8;
        RBus_UInt32  ve_drf_rlrmem_mvbuf_fail:7;
    };
}VE_MBIST_VE_DRF_RLRMEM_MVBUF_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  ve_bist_seg_mvd_fail:9;
    };
}VE_MBIST_VE_BIST_SEG_MVD_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  ve_drf_seg_mvd_fail:9;
    };
}VE_MBIST_VE_DRF_SEG_MVD_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  ve_bist_cmprs_1_fail:5;
        RBus_UInt32  ve_bist_cmprs_fail:4;
        RBus_UInt32  ve_bist_dbk_fail:10;
    };
}VE_MBIST_VE_BIST_DBK_0_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  ve_drf_cmprs_1_fail:5;
        RBus_UInt32  ve_drf_cmprs_fail:4;
        RBus_UInt32  ve_drf_dbk_fail:10;
    };
}VE_MBIST_VE_DRF_DBK_0_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  ve_bist_cah_2p_1_fail:4;
        RBus_UInt32  ve_bist_cah_2p_0_fail:8;
        RBus_UInt32  ve_bist_cah_1p_fail:2;
    };
}VE_MBIST_VE_BIST_CAH_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  ve_drf_cah_2p_1_fail:4;
        RBus_UInt32  ve_drf_cah_2p_0_fail:8;
        RBus_UInt32  ve_drf_cah_1p_fail:2;
    };
}VE_MBIST_VE_DRF_CAH_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ve_bist_pred_2e_fail:6;
        RBus_UInt32  ve_bist_pred_2_fail:6;
        RBus_UInt32  ve_bist_pred_1_fail:8;
        RBus_UInt32  ve_bist_pred_0_fail:10;
    };
}VE_MBIST_VE_BIST_PRED_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ve_drf_pred_2e_fail:6;
        RBus_UInt32  ve_drf_pred_2_fail:6;
        RBus_UInt32  ve_drf_pred_1_fail:8;
        RBus_UInt32  ve_drf_pred_0_fail:10;
    };
}VE_MBIST_VE_DRF_PRED_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  ve_bist_pred_3_2p_fail:6;
        RBus_UInt32  ve_bist_pred_3_fail:9;
        RBus_UInt32  ve_bist_ciblk_fail:7;
    };
}VE_MBIST_VE_BIST_CIBLK_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  ve_drf_pred_3_2p_fail:6;
        RBus_UInt32  ve_drf_pred_3_fail:9;
        RBus_UInt32  ve_drf_ciblk_fail:7;
    };
}VE_MBIST_VE_DRF_CIBLK_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  ve_bist_dcmprs_outbuf_fail:6;
        RBus_UInt32  ve_bist_dcmprs_fail:9;
    };
}VE_MBIST_VE_BIST_DCMPRS_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  ve_drf_dcmprs_outbuf_fail:6;
        RBus_UInt32  ve_drf_dcmprs_fail:9;
    };
}VE_MBIST_VE_DRF_DCMPRS_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  ve_bist_clmp_fail:5;
    };
}VE_MBIST_VE_BIST_CLMP_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  ve_drf_clmp_fail:5;
    };
}VE_MBIST_VE_DRF_CLMP_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  ve_bist_p2mvd_fail:10;
    };
}VE_MBIST_VE_BIST_P2MVD_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  ve_drf_p2mvd_fail:10;
    };
}VE_MBIST_VE_DRF_P2MVD_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ve_bist_mf2_fail:8;
        RBus_UInt32  ve_bist_mf1_fail:8;
        RBus_UInt32  ve_bist_mf0_fail:8;
    };
}VE_MBIST_VE_BIST_MF_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ve_drf_mf2_fail:8;
        RBus_UInt32  ve_drf_mf1_fail:8;
        RBus_UInt32  ve_drf_mf0_fail:8;
    };
}VE_MBIST_VE_DRF_MF_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  ve_bist_lr_fail:5;
    };
}VE_MBIST_VE_BIST_LR_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  ve_drf_lr_fail:5;
    };
}VE_MBIST_VE_DRF_LR_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  ve_bist_cdef_fail:4;
    };
}VE_MBIST_VE_BIST_CDEF_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  ve_drf_cdef_fail:4;
    };
}VE_MBIST_VE_DRF_CDEF_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  ve_bist_sr_fail:5;
    };
}VE_MBIST_VE_BIST_SR_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  ve_drf_sr_fail:5;
    };
}VE_MBIST_VE_DRF_SR_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_cah_bisr_repaired:1;
        RBus_UInt32  res1:29;
        RBus_UInt32  ve_cah_bisr_fail:2;
    };
}VE_MBIST_VE_CAH_BSIR_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  ve_drf_cah_bisr_fail:2;
    };
}VE_MBIST_VE_DRF_CAH_BISR_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_ngh_2_bisr_repaired:1;
        RBus_UInt32  ve_ngh_bisr_repaired:1;
        RBus_UInt32  res1:28;
        RBus_UInt32  ve_ngh_2_bisr_fail:1;
        RBus_UInt32  ve_ngh_bisr_fail:1;
    };
}VE_MBIST_VE_NGH_BISR_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  ve_drf_ngh_2_bisr_fail:1;
        RBus_UInt32  ve_drf_ngh_bisr_fail:1;
    };
}VE_MBIST_VE_DRF_NGH_BISR_FAIL_RBUS;

#else //apply LITTLE_ENDIAN
//======VE_MBIST register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  RM:4;
        RBus_UInt32  RME:1;
        RBus_UInt32  RMB:4;
        RBus_UInt32  RMEB:1;
        RBus_UInt32  RMA:4;
        RBus_UInt32  RMEA:1;
        RBus_UInt32  SYSH_RM:4;
        RBus_UInt32  SYSH_RME:1;
        RBus_UInt32  SYSH_RMB:4;
        RBus_UInt32  SYSH_RMEB:1;
        RBus_UInt32  SYSH_RMA:4;
        RBus_UInt32  SYSH_RMEA:1;
        RBus_UInt32  TEST1:1;
        RBus_UInt32  TEST_RWM:1;
    };
}LGCY_VE_MBIST_VE_BIST_RM_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_rif_bist_en:1;
        RBus_UInt32  ve_vld_0_bist_en:1;
        RBus_UInt32  ve_vld_1_bist_en:1;
        RBus_UInt32  ve_vm_bist_en:1;
        RBus_UInt32  ve_it_bist_en:1;
        RBus_UInt32  ve_bs_bist_en:1;
        RBus_UInt32  ve_brg_bist_en:1;
        RBus_UInt32  ve_ndb_bist_en:1;
        RBus_UInt32  ve_cm_0_bist_en:1;
        RBus_UInt32  ve_cm_1_bist_en:1;
        RBus_UInt32  ve_rlrmem_fme_bist_en:1;
        RBus_UInt32  ve_mvd_rlmvbuf_bist_en:1;
        RBus_UInt32  ve_dbk_bist_en:1;
        RBus_UInt32  ve_fme_bist_en:1;
        RBus_UInt32  ve_pred_bist_en:1;
        RBus_UInt32  ve_pred_2p_bist_en:1;
        RBus_UInt32  ve_ip_gc_bist_en:1;
        RBus_UInt32  ve_cmprs_bist_en:1;
        RBus_UInt32  ve_ime_bist_en:1;
        RBus_UInt32  ve_dmem_bist_en:1;
        RBus_UInt32  res1:12;
    };
}LGCY_VE_MBIST_VE_BIST_MODE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_rif_done:1;
        RBus_UInt32  ve_bist_vld_0_done:1;
        RBus_UInt32  ve_bist_vld_1_done:1;
        RBus_UInt32  ve_bist_vm_done:1;
        RBus_UInt32  ve_bist_it_done:1;
        RBus_UInt32  ve_bist_bs_done:1;
        RBus_UInt32  ve_bist_brg_done:1;
        RBus_UInt32  ve_bist_ndb_done:1;
        RBus_UInt32  ve_bist_cm_0_done:1;
        RBus_UInt32  ve_bist_cm_1_done:1;
        RBus_UInt32  ve_bist_rlrmem_fme_done:1;
        RBus_UInt32  ve_bist_mvd_rlmvbuf_done:1;
        RBus_UInt32  ve_bist_dbk_done:1;
        RBus_UInt32  ve_bist_fme_done:1;
        RBus_UInt32  ve_bist_pred_done:1;
        RBus_UInt32  ve_bist_pred_2p_done:1;
        RBus_UInt32  ve_bist_ip_gc_done:1;
        RBus_UInt32  ve_bist_cmprs_done:1;
        RBus_UInt32  ve_bist_ime_done:1;
        RBus_UInt32  ve_bist_dmem_done:1;
        RBus_UInt32  res1:12;
    };
}LGCY_VE_MBIST_VE_BIST_DONE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_rif_fail_group:1;
        RBus_UInt32  ve_bist_vld_0_fail_group:1;
        RBus_UInt32  ve_bist_vld_1_fail_group:1;
        RBus_UInt32  ve_bist_vm_fail_group:1;
        RBus_UInt32  ve_bist_it_fail_group:1;
        RBus_UInt32  ve_bist_bs_fail_group:1;
        RBus_UInt32  ve_bist_brg_fail_group:1;
        RBus_UInt32  ve_bist_ndb_fail_group:1;
        RBus_UInt32  ve_bist_cm_0_fail_group:1;
        RBus_UInt32  ve_bist_cm_1_fail_group:1;
        RBus_UInt32  ve_bist_rlrmem_fme_fail_group:1;
        RBus_UInt32  ve_bist_mvd_rlmvbuf_fail_group:1;
        RBus_UInt32  ve_bist_dbk_fail_group:1;
        RBus_UInt32  ve_bist_fme_fail_group:1;
        RBus_UInt32  ve_bist_pred_fail_group:1;
        RBus_UInt32  ve_bist_pred_2p_fail_group:1;
        RBus_UInt32  ve_bist_ip_gc_fail_group:1;
        RBus_UInt32  ve_bist_cmprs_fail_group:1;
        RBus_UInt32  ve_bist_ime_fail_group:1;
        RBus_UInt32  ve_bist_dmem_fail_group:1;
        RBus_UInt32  res1:12;
    };
}LGCY_VE_MBIST_VE_BIST_FAIL_GROUP_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_rif_drf_bist_en:1;
        RBus_UInt32  ve_vld_0_drf_bist_en:1;
        RBus_UInt32  ve_vld_1_drf_bist_en:1;
        RBus_UInt32  ve_vm_drf_bist_en:1;
        RBus_UInt32  ve_it_drf_bist_en:1;
        RBus_UInt32  ve_bs_drf_bist_en:1;
        RBus_UInt32  ve_brg_drf_bist_en:1;
        RBus_UInt32  ve_ndb_drf_bist_en:1;
        RBus_UInt32  ve_cm_0_drf_bist_en:1;
        RBus_UInt32  ve_cm_1_drf_bist_en:1;
        RBus_UInt32  ve_rlrmem_fme_drf_bist_en:1;
        RBus_UInt32  ve_mvd_rlmvbuf_drf_bist_en:1;
        RBus_UInt32  ve_dbk_drf_bist_en:1;
        RBus_UInt32  ve_fme_drf_bist_en:1;
        RBus_UInt32  ve_pred_drf_bist_en:1;
        RBus_UInt32  ve_pred_2p_drf_bist_en:1;
        RBus_UInt32  ve_ip_gc_drf_bist_en:1;
        RBus_UInt32  ve_cmprs_drf_bist_en:1;
        RBus_UInt32  ve_ime_drf_bist_en:1;
        RBus_UInt32  ve_dmem_drf_bist_en:1;
        RBus_UInt32  res1:12;
    };
}LGCY_VE_MBIST_VE_DRF_MODE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_rif_drf_resume:1;
        RBus_UInt32  ve_vld_0_drf_resume:1;
        RBus_UInt32  ve_vld_1_drf_resume:1;
        RBus_UInt32  ve_vm_drf_resume:1;
        RBus_UInt32  ve_it_drf_resume:1;
        RBus_UInt32  ve_bs_drf_resume:1;
        RBus_UInt32  ve_brg_drf_resume:1;
        RBus_UInt32  ve_ndb_drf_resume:1;
        RBus_UInt32  ve_cm_0_drf_resume:1;
        RBus_UInt32  ve_cm_1_drf_resume:1;
        RBus_UInt32  ve_rlrmem_fme_drf_resume:1;
        RBus_UInt32  ve_mvd_rlmvbuf_drf_resume:1;
        RBus_UInt32  ve_dbk_drf_resume:1;
        RBus_UInt32  ve_fme_drf_resume:1;
        RBus_UInt32  ve_pred_drf_resume:1;
        RBus_UInt32  ve_pred_2p_drf_resume:1;
        RBus_UInt32  ve_ip_gc_drf_resume:1;
        RBus_UInt32  ve_cmprs_drf_resume:1;
        RBus_UInt32  ve_ime_drf_resume:1;
        RBus_UInt32  ve_dmem_drf_resume:1;
        RBus_UInt32  res1:12;
    };
}LGCY_VE_MBIST_VE_DRF_RESUME_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_rif_drf_start_pause:1;
        RBus_UInt32  ve_vld_0_drf_start_pause:1;
        RBus_UInt32  ve_vld_1_drf_start_pause:1;
        RBus_UInt32  ve_vm_drf_start_pause:1;
        RBus_UInt32  ve_it_drf_start_pause:1;
        RBus_UInt32  ve_bs_drf_start_pause:1;
        RBus_UInt32  ve_brg_drf_start_pause:1;
        RBus_UInt32  ve_ndb_drf_start_pause:1;
        RBus_UInt32  ve_cm_0_drf_start_pause:1;
        RBus_UInt32  ve_cm_1_drf_start_pause:1;
        RBus_UInt32  ve_rlrmem_fme_drf_start_pause:1;
        RBus_UInt32  ve_mvd_rlmvbuf_drf_start_pause:1;
        RBus_UInt32  ve_dbk_drf_start_pause:1;
        RBus_UInt32  ve_fme_drf_start_pause:1;
        RBus_UInt32  ve_pred_drf_start_pause:1;
        RBus_UInt32  ve_pred_2p_drf_start_pause:1;
        RBus_UInt32  ve_ip_gc_drf_start_pause:1;
        RBus_UInt32  ve_cmprs_drf_start_pause:1;
        RBus_UInt32  ve_ime_drf_start_pause:1;
        RBus_UInt32  ve_dmem_drf_start_pause:1;
        RBus_UInt32  res1:12;
    };
}LGCY_VE_MBIST_VE_DRF_PAUSE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_rif_done:1;
        RBus_UInt32  ve_drf_vld_0_done:1;
        RBus_UInt32  ve_drf_vld_1_done:1;
        RBus_UInt32  ve_drf_vm_done:1;
        RBus_UInt32  ve_drf_it_done:1;
        RBus_UInt32  ve_drf_bs_done:1;
        RBus_UInt32  ve_drf_brg_done:1;
        RBus_UInt32  ve_drf_ndb_done:1;
        RBus_UInt32  ve_drf_cm_0_done:1;
        RBus_UInt32  ve_drf_cm_1_done:1;
        RBus_UInt32  ve_drf_rlrmem_fme_done:1;
        RBus_UInt32  ve_drf_mvd_rlmvbuf_done:1;
        RBus_UInt32  ve_drf_dbk_done:1;
        RBus_UInt32  ve_drf_fme_done:1;
        RBus_UInt32  ve_drf_pred_done:1;
        RBus_UInt32  ve_drf_pred_2p_done:1;
        RBus_UInt32  ve_drf_ip_gc_done:1;
        RBus_UInt32  ve_drf_cmprs_done:1;
        RBus_UInt32  ve_drf_ime_done:1;
        RBus_UInt32  ve_drf_dmem_done:1;
        RBus_UInt32  res1:12;
    };
}LGCY_VE_MBIST_VE_DRF_DONE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_rif_fail_group:1;
        RBus_UInt32  ve_drf_vld_0_fail_group:1;
        RBus_UInt32  ve_drf_vld_1_fail_group:1;
        RBus_UInt32  ve_drf_vm_fail_group:1;
        RBus_UInt32  ve_drf_it_fail_group:1;
        RBus_UInt32  ve_drf_bs_fail_group:1;
        RBus_UInt32  ve_drf_brg_fail_group:1;
        RBus_UInt32  ve_drf_ndb_fail_group:1;
        RBus_UInt32  ve_drf_cm_0_fail_group:1;
        RBus_UInt32  ve_drf_cm_1_fail_group:1;
        RBus_UInt32  ve_drf_rlrmem_fme_fail_group:1;
        RBus_UInt32  ve_drf_mvd_rlmvbuf_fail_group:1;
        RBus_UInt32  ve_drf_dbk_fail_group:1;
        RBus_UInt32  ve_drf_fme_fail_group:1;
        RBus_UInt32  ve_drf_pred_fail_group:1;
        RBus_UInt32  ve_drf_pred_2p_fail_group:1;
        RBus_UInt32  ve_drf_ip_gc_fail_group:1;
        RBus_UInt32  ve_drf_cmprs_fail_group:1;
        RBus_UInt32  ve_drf_ime_fail_group:1;
        RBus_UInt32  ve_drf_dmem_fail_group:1;
        RBus_UInt32  res1:12;
    };
}LGCY_VE_MBIST_VE_DRF_FAIL_GROUP_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_rif_fail:9;
        RBus_UInt32  res1:23;
    };
}LGCY_VE_MBIST_VE_BIST_RIF_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_rif_fail:9;
        RBus_UInt32  res1:23;
    };
}LGCY_VE_MBIST_VE_DRF_RIF_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_vld_0_fail:3;
        RBus_UInt32  ve_bist_vld_1_fail:2;
        RBus_UInt32  res1:27;
    };
}LGCY_VE_MBIST_VE_BIST_VLD_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_vld_0_fail:3;
        RBus_UInt32  ve_drf_vld_1_fail:2;
        RBus_UInt32  res1:27;
    };
}LGCY_VE_MBIST_VE_DRF_VLD_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_vm_fail:9;
        RBus_UInt32  res1:23;
    };
}LGCY_VE_MBIST_VE_BIST_VM_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_vm_fail:9;
        RBus_UInt32  res1:23;
    };
}LGCY_VE_MBIST_VE_DRF_VM_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_it_fail:4;
        RBus_UInt32  res1:28;
    };
}LGCY_VE_MBIST_VE_BIST_IT_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_it_fail:4;
        RBus_UInt32  res1:28;
    };
}LGCY_VE_MBIST_VE_DRF_IT_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_bs_fail:3;
        RBus_UInt32  res1:29;
    };
}LGCY_VE_MBIST_VE_BIST_BS_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_bs_fail:3;
        RBus_UInt32  res1:29;
    };
}LGCY_VE_MBIST_VE_DRF_BS_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_brg_fail:6;
        RBus_UInt32  res1:26;
    };
}LGCY_VE_MBIST_VE_BIST_BRG_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_brg_fail:6;
        RBus_UInt32  res1:26;
    };
}LGCY_VE_MBIST_VE_DRF_BRG_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_ndb_fail:4;
        RBus_UInt32  res1:28;
    };
}LGCY_VE_MBIST_VE_BIST_NDB_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_ndb_fail:4;
        RBus_UInt32  res1:28;
    };
}LGCY_VE_MBIST_VE_DRF_NDB_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_cm_0_fail:6;
        RBus_UInt32  ve_bist_cm_1_fail:6;
        RBus_UInt32  res1:20;
    };
}LGCY_VE_MBIST_VE_BIST_CM1_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_cm_0_fail:6;
        RBus_UInt32  ve_drf_cm_1_fail:6;
        RBus_UInt32  res1:20;
    };
}LGCY_VE_MBIST_VE_DRF_CM1_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_rlrmem_fme_fail:5;
        RBus_UInt32  res1:27;
    };
}LGCY_VE_MBIST_VE_BIST_RLRMEM_FME_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_rlrmem_fme_fail:5;
        RBus_UInt32  res1:27;
    };
}LGCY_VE_MBIST_VE_DRF_RLRMEM_FME_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_mvd_rlmvbuf_fail:3;
        RBus_UInt32  res1:29;
    };
}LGCY_VE_MBIST_VE_BIST_MVD_RLMVBUF_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_mvd_rlmvbuf_fail:3;
        RBus_UInt32  res1:29;
    };
}LGCY_VE_MBIST_VE_DRF_MVD_RLMVBUF_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_dbk_fail:9;
        RBus_UInt32  res1:23;
    };
}LGCY_VE_MBIST_VE_BIST_DBK_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_dbk_fail:9;
        RBus_UInt32  res1:23;
    };
}LGCY_VE_MBIST_VE_DRF_DBK_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_fme_fail:7;
        RBus_UInt32  res1:25;
    };
}LGCY_VE_MBIST_VE_BIST_FME_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_fme_fail:7;
        RBus_UInt32  res1:25;
    };
}LGCY_VE_MBIST_VE_DRF_FME_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_pred_fail:7;
        RBus_UInt32  res1:25;
    };
}LGCY_VE_MBIST_VE_BIST_PRED_0_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_pred_fail:7;
        RBus_UInt32  res1:25;
    };
}LGCY_VE_MBIST_VE_DRF_PRED_0_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_pred_2p_fail:2;
        RBus_UInt32  res1:30;
    };
}LGCY_VE_MBIST_VE_BIST_PRED_2P_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_pred_2p_fail:2;
        RBus_UInt32  res1:30;
    };
}LGCY_VE_MBIST_VE_DRF_PRED_2P_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_ip_gc_fail:7;
        RBus_UInt32  res1:25;
    };
}LGCY_VE_MBIST_VE_BIST_IP_GC_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_ip_gc_fail:7;
        RBus_UInt32  res1:25;
    };
}LGCY_VE_MBIST_VE_DRF_IP_GC_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_dmem_fail:2;
        RBus_UInt32  res1:30;
    };
}LGCY_VE_MBIST_VE_BIST_DMEM_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_dmem_fail:2;
        RBus_UInt32  res1:30;
    };
}LGCY_VE_MBIST_VE_DRF_DMEM_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_cmprs_fail:5;
        RBus_UInt32  res1:27;
    };
}LGCY_VE_MBIST_VE_BIST_CMPRS_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_cmprs_fail:5;
        RBus_UInt32  res1:27;
    };
}LGCY_VE_MBIST_VE_DRF_CMPRS_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_ime_fail:4;
        RBus_UInt32  res1:28;
    };
}LGCY_VE_MBIST_VE_BIST_IME_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_ime_fail:4;
        RBus_UInt32  res1:28;
    };
}LGCY_VE_MBIST_VE_DRF_IME_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  RM:4;
        RBus_UInt32  RME:1;
        RBus_UInt32  RMB:4;
        RBus_UInt32  RMEB:1;
        RBus_UInt32  RMA:4;
        RBus_UInt32  RMEA:1;
        RBus_UInt32  SYSH_RM:4;
        RBus_UInt32  SYSH_RME:1;
        RBus_UInt32  SYSH_RMB:4;
        RBus_UInt32  SYSH_RMEB:1;
        RBus_UInt32  SYSH_RMA:4;
        RBus_UInt32  SYSH_RMEA:1;
        RBus_UInt32  TEST1:1;
        RBus_UInt32  TEST_RWM:1;
    };
}VE_MBIST_VE_BIST_RM_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_rif_bist_en:1;
        RBus_UInt32  ve_vld_0_bist_en:1;
        RBus_UInt32  ve_vm_0_bist_en:1;
        RBus_UInt32  ve_vm_1_bist_en:1;
        RBus_UInt32  ve_it_0_0_bist_en:1;
        RBus_UInt32  ve_it_0_1_bist_en:1;
        RBus_UInt32  ve_it_1_bist_en:1;
        RBus_UInt32  ve_it_bs_bist_en:1;
        RBus_UInt32  ve_sao_bist_en:1;
        RBus_UInt32  ve_brg_bist_en:1;
        RBus_UInt32  ve_cm1_bist_en:1;
        RBus_UInt32  ve_cm2_bist_en:1;
        RBus_UInt32  ve_rlrmem_mvbuf_bist_en:1;
        RBus_UInt32  ve_seg_mvd_bist_en:1;
        RBus_UInt32  ve_dbk_bist_en:1;
        RBus_UInt32  ve_cmprs_bist_en:1;
        RBus_UInt32  ve_dcmprs_bist_en:1;
        RBus_UInt32  ve_cah_1p_bist_en:1;
        RBus_UInt32  ve_cah_2p_0_bist_en:1;
        RBus_UInt32  ve_cah_2p_1_bist_en:1;
        RBus_UInt32  ve_pred_0_bist_en:1;
        RBus_UInt32  ve_pred_1_bist_en:1;
        RBus_UInt32  ve_pred_2_bist_en:1;
        RBus_UInt32  ve_pred_3_bist_en:1;
        RBus_UInt32  ve_dcmprs_outbuf_bist_en:1;
        RBus_UInt32  ve_clmp_bist_en:1;
        RBus_UInt32  ve_p2_bist_en:1;
        RBus_UInt32  ve_vld_1_bist_en:1;
        RBus_UInt32  ve_p2mvd_bist_en:1;
        RBus_UInt32  ve_mf0_bist_en:1;
        RBus_UInt32  ve_mf1_bist_en:1;
        RBus_UInt32  ve_mf2_bist_en:1;
    };
}VE_MBIST_VE_BIST_MODE0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_lr_bist_en:1;
        RBus_UInt32  ve_cdef_bist_en:1;
        RBus_UInt32  ve_sr_bist_en:1;
        RBus_UInt32  ve_ciblk_bist_en:1;
        RBus_UInt32  ve_vm_2_bist_en:1;
        RBus_UInt32  ve_pred_3_2p_bist_en:1;
        RBus_UInt32  ve_cmprs_1_bist_en:1;
        RBus_UInt32  ve_rlrmem01_bist_en:1;
        RBus_UInt32  ve_pred_2e_bist_en:1;
        RBus_UInt32  res1:23;
    };
}VE_MBIST_VE_BIST_MODE1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_rif_done:1;
        RBus_UInt32  ve_bist_vld_0_done:1;
        RBus_UInt32  ve_bist_vm_0_done:1;
        RBus_UInt32  ve_bist_vm_1_done:1;
        RBus_UInt32  ve_bist_it_0_0_done:1;
        RBus_UInt32  ve_bist_it_0_1_done:1;
        RBus_UInt32  ve_bist_it_1_done:1;
        RBus_UInt32  ve_bist_it_bs_done:1;
        RBus_UInt32  ve_bist_sao_done:1;
        RBus_UInt32  ve_bist_brg_done:1;
        RBus_UInt32  ve_bist_cm1_done:1;
        RBus_UInt32  ve_bist_cm2_done:1;
        RBus_UInt32  ve_bist_rlrmem_mvbuf_done:1;
        RBus_UInt32  ve_bist_seg_mvd_done:1;
        RBus_UInt32  ve_bist_dbk_done:1;
        RBus_UInt32  ve_bist_cmprs_done:1;
        RBus_UInt32  ve_bist_dcmprs_done:1;
        RBus_UInt32  ve_bist_cah_1p_done:1;
        RBus_UInt32  ve_bist_cah_2p_0_done:1;
        RBus_UInt32  ve_bist_cah_2p_1_done:1;
        RBus_UInt32  ve_bist_pred_0_done:1;
        RBus_UInt32  ve_bist_pred_1_done:1;
        RBus_UInt32  ve_bist_pred_2_done:1;
        RBus_UInt32  ve_bist_pred_3_done:1;
        RBus_UInt32  ve_bist_dcmprs_outbuf_done:1;
        RBus_UInt32  ve_bist_clmp_done:1;
        RBus_UInt32  ve_bist_p2_done:1;
        RBus_UInt32  ve_bist_vld_1_done:1;
        RBus_UInt32  ve_bist_p2mvd_done:1;
        RBus_UInt32  ve_bist_mf0_done:1;
        RBus_UInt32  ve_bist_mf1_done:1;
        RBus_UInt32  ve_bist_mf2_done:1;
    };
}VE_MBIST_VE_BIST_DONE0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_lr_done:1;
        RBus_UInt32  ve_bist_cdef_done:1;
        RBus_UInt32  ve_bist_sr_done:1;
        RBus_UInt32  ve_bist_ciblk_done:1;
        RBus_UInt32  ve_bist_vm_2_done:1;
        RBus_UInt32  ve_bist_pred_3_2p_done:1;
        RBus_UInt32  ve_bist_cmprs_1_done:1;
        RBus_UInt32  ve_bist_rlrmem01_done:1;
        RBus_UInt32  ve_bist_pred_2e_done:1;
        RBus_UInt32  res1:23;
    };
}VE_MBIST_VE_BIST_DONE1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_rif_fail_group:1;
        RBus_UInt32  ve_bist_vld_0_fail_group:1;
        RBus_UInt32  ve_bist_vm_0_fail_group:1;
        RBus_UInt32  ve_bist_vm_1_fail_group:1;
        RBus_UInt32  ve_bist_it_0_0_fail_group:1;
        RBus_UInt32  ve_bist_it_0_1_fail_group:1;
        RBus_UInt32  ve_bist_it_1_fail_group:1;
        RBus_UInt32  ve_bist_it_bs_fail_group:1;
        RBus_UInt32  ve_bist_sao_fail_group:1;
        RBus_UInt32  ve_bist_brg_fail_group:1;
        RBus_UInt32  ve_bist_cm1_fail_group:1;
        RBus_UInt32  ve_bist_cm2_fail_group:1;
        RBus_UInt32  ve_bist_rlrmem_mvbuf_fail_group:1;
        RBus_UInt32  ve_bist_seg_mvd_fail_group:1;
        RBus_UInt32  ve_bist_dbk_fail_group:1;
        RBus_UInt32  ve_bist_cmprs_fail_group:1;
        RBus_UInt32  ve_bist_dcmprs_fail_group:1;
        RBus_UInt32  ve_bist_cah_1p_fail_group:1;
        RBus_UInt32  ve_bist_cah_2p_0_fail_group:1;
        RBus_UInt32  ve_bist_cah_2p_1_fail_group:1;
        RBus_UInt32  ve_bist_pred_0_fail_group:1;
        RBus_UInt32  ve_bist_pred_1_fail_group:1;
        RBus_UInt32  ve_bist_pred_2_fail_group:1;
        RBus_UInt32  ve_bist_pred_3_fail_group:1;
        RBus_UInt32  ve_bist_dcmprs_outbuf_fail_group:1;
        RBus_UInt32  ve_bist_clmp_fail_group:1;
        RBus_UInt32  ve_bist_p2_fail_group:1;
        RBus_UInt32  ve_bist_vld_1_fail_group:1;
        RBus_UInt32  ve_bist_p2mvd_fail_group:1;
        RBus_UInt32  ve_bist_mf0_fail_group:1;
        RBus_UInt32  ve_bist_mf1_fail_group:1;
        RBus_UInt32  ve_bist_mf2_fail_group:1;
    };
}VE_MBIST_VE_BIST_FAIL_GROUP0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_lr_fail_group:1;
        RBus_UInt32  ve_bist_cdef_fail_group:1;
        RBus_UInt32  ve_bist_sr_fail_group:1;
        RBus_UInt32  ve_bist_ciblk_fail_group:1;
        RBus_UInt32  ve_bist_vm_2_fail_group:1;
        RBus_UInt32  ve_bist_pred_3_2p_fail_group:1;
        RBus_UInt32  ve_bist_cmprs_1_fail_group:1;
        RBus_UInt32  ve_bist_rlrmem01_fail_group:1;
        RBus_UInt32  ve_bist_pred_2e_fail_group:1;
        RBus_UInt32  res1:23;
    };
}VE_MBIST_VE_BIST_FAIL_GROUP1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_rif_drf_bist_en:1;
        RBus_UInt32  ve_vld_0_drf_bist_en:1;
        RBus_UInt32  ve_vm_0_drf_bist_en:1;
        RBus_UInt32  ve_vm_1_drf_bist_en:1;
        RBus_UInt32  ve_it_0_0_drf_bist_en:1;
        RBus_UInt32  ve_it_0_1_drf_bist_en:1;
        RBus_UInt32  ve_it_1_drf_bist_en:1;
        RBus_UInt32  ve_it_bs_drf_bist_en:1;
        RBus_UInt32  ve_sao_drf_bist_en:1;
        RBus_UInt32  ve_brg_drf_bist_en:1;
        RBus_UInt32  ve_cm1_drf_bist_en:1;
        RBus_UInt32  ve_cm2_drf_bist_en:1;
        RBus_UInt32  ve_rlrmem_mvbuf_drf_bist_en:1;
        RBus_UInt32  ve_seg_mvd_drf_bist_en:1;
        RBus_UInt32  ve_dbk_drf_bist_en:1;
        RBus_UInt32  ve_cmprs_drf_bist_en:1;
        RBus_UInt32  ve_dcmprs_drf_bist_en:1;
        RBus_UInt32  ve_cah_1p_drf_bist_en:1;
        RBus_UInt32  ve_cah_2p_0_drf_bist_en:1;
        RBus_UInt32  ve_cah_2p_1_drf_bist_en:1;
        RBus_UInt32  ve_pred_0_drf_bist_en:1;
        RBus_UInt32  ve_pred_1_drf_bist_en:1;
        RBus_UInt32  ve_pred_2_drf_bist_en:1;
        RBus_UInt32  ve_pred_3_drf_bist_en:1;
        RBus_UInt32  ve_dcmprs_outbuf_drf_bist_en:1;
        RBus_UInt32  ve_clmp_drf_bist_en:1;
        RBus_UInt32  ve_p2_drf_bist_en:1;
        RBus_UInt32  ve_vld_1_drf_bist_en:1;
        RBus_UInt32  ve_p2mvd_drf_bist_en:1;
        RBus_UInt32  ve_mf0_drf_bist_en:1;
        RBus_UInt32  ve_mf1_drf_bist_en:1;
        RBus_UInt32  ve_mf2_drf_bist_en:1;
    };
}VE_MBIST_VE_DRF_MODE0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_lr_drf_bist_en:1;
        RBus_UInt32  ve_cdef_drf_bist_en:1;
        RBus_UInt32  ve_sr_drf_bist_en:1;
        RBus_UInt32  ve_ciblk_drf_bist_en:1;
        RBus_UInt32  ve_vm_2_drf_bist_en:1;
        RBus_UInt32  ve_pred_3_2p_drf_bist_en:1;
        RBus_UInt32  ve_cmprs_1_drf_bist_en:1;
        RBus_UInt32  ve_rlrmem01_drf_bist_en:1;
        RBus_UInt32  ve_pred_2e_drf_bist_en:1;
        RBus_UInt32  ve_cah_bisr_drf_bist_en:1;
        RBus_UInt32  ve_ngh_bisr_drf_bist_en:1;
        RBus_UInt32  ve_ngh_2_bisr_drf_bist_en:1;
        RBus_UInt32  res1:20;
    };
}VE_MBIST_VE_DRF_MODE1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_rif_drf_resume:1;
        RBus_UInt32  ve_vld_0_drf_resume:1;
        RBus_UInt32  ve_vm_0_drf_resume:1;
        RBus_UInt32  ve_vm_1_drf_resume:1;
        RBus_UInt32  ve_it_0_0_drf_resume:1;
        RBus_UInt32  ve_it_0_1_drf_resume:1;
        RBus_UInt32  ve_it_1_drf_resume:1;
        RBus_UInt32  ve_it_bs_drf_resume:1;
        RBus_UInt32  ve_sao_drf_resume:1;
        RBus_UInt32  ve_brg_drf_resume:1;
        RBus_UInt32  ve_cm1_drf_resume:1;
        RBus_UInt32  ve_cm2_drf_resume:1;
        RBus_UInt32  ve_rlrmem_mvbuf_drf_resume:1;
        RBus_UInt32  ve_seg_mvd_drf_resume:1;
        RBus_UInt32  ve_dbk_drf_resume:1;
        RBus_UInt32  ve_cmprs_drf_resume:1;
        RBus_UInt32  ve_dcmprs_drf_resume:1;
        RBus_UInt32  ve_cah_1p_drf_resume:1;
        RBus_UInt32  ve_cah_2p_0_drf_resume:1;
        RBus_UInt32  ve_cah_2p_1_drf_resume:1;
        RBus_UInt32  ve_pred_1_drf_resume:1;
        RBus_UInt32  ve_pred_0_drf_resume:1;
        RBus_UInt32  ve_pred_2_drf_resume:1;
        RBus_UInt32  ve_pred_3_drf_resume:1;
        RBus_UInt32  ve_dcmprs_outbuf_drf_resume:1;
        RBus_UInt32  ve_clmp_drf_resume:1;
        RBus_UInt32  ve_p2_drf_resume:1;
        RBus_UInt32  ve_vld_1_drf_resume:1;
        RBus_UInt32  ve_p2mvd_drf_resume:1;
        RBus_UInt32  ve_mf0_drf_resume:1;
        RBus_UInt32  ve_mf1_drf_resume:1;
        RBus_UInt32  ve_mf2_drf_resume:1;
    };
}VE_MBIST_VE_DRF_RESUME0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_lr_drf_resume:1;
        RBus_UInt32  ve_cdef_drf_resume:1;
        RBus_UInt32  ve_sr_drf_resume:1;
        RBus_UInt32  ve_ciblk_drf_resume:1;
        RBus_UInt32  ve_vm_2_drf_resume:1;
        RBus_UInt32  ve_pred_3_2p_drf_resume:1;
        RBus_UInt32  ve_cmprs_1_drf_resume:1;
        RBus_UInt32  ve_rlrmem01_drf_resume:1;
        RBus_UInt32  ve_pred_2e_drf_resume:1;
        RBus_UInt32  ve_cah_bisr_drf_resume:1;
        RBus_UInt32  ve_ngh_bisr_drf_resume:1;
        RBus_UInt32  ve_ngh_2_bisr_drf_resume:1;
        RBus_UInt32  res1:20;
    };
}VE_MBIST_VE_DRF_RESUME1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_rif_drf_start_pause:1;
        RBus_UInt32  ve_vld_0_drf_start_pause:1;
        RBus_UInt32  ve_vm_0_drf_start_pause:1;
        RBus_UInt32  ve_vm_1_drf_start_pause:1;
        RBus_UInt32  ve_it_0_0_drf_start_pause:1;
        RBus_UInt32  ve_it_0_1_drf_start_pause:1;
        RBus_UInt32  ve_it_1_drf_start_pause:1;
        RBus_UInt32  ve_it_bs_drf_start_pause:1;
        RBus_UInt32  ve_sao_drf_start_pause:1;
        RBus_UInt32  ve_brg_drf_start_pause:1;
        RBus_UInt32  ve_cm1_drf_start_pause:1;
        RBus_UInt32  ve_cm2_drf_start_pause:1;
        RBus_UInt32  ve_rlrmem_mvbuf_drf_start_pause:1;
        RBus_UInt32  ve_seg_mvd_drf_start_pause:1;
        RBus_UInt32  ve_dbk_drf_start_pause:1;
        RBus_UInt32  ve_cmprs_drf_start_pause:1;
        RBus_UInt32  ve_dcmprs_drf_start_pause:1;
        RBus_UInt32  ve_cah_1p_drf_start_pause:1;
        RBus_UInt32  ve_cah_2p_0_drf_start_pause:1;
        RBus_UInt32  ve_cah_2p_1_drf_start_pause:1;
        RBus_UInt32  ve_pred_0_drf_start_pause:1;
        RBus_UInt32  ve_pred_1_drf_start_pause:1;
        RBus_UInt32  ve_pred_2_drf_start_pause:1;
        RBus_UInt32  ve_pred_3_drf_start_pause:1;
        RBus_UInt32  ve_dcmprs_outbuf_drf_start_pause:1;
        RBus_UInt32  ve_clmp_drf_start_pause:1;
        RBus_UInt32  ve_p2_drf_start_pause:1;
        RBus_UInt32  ve_vld_1_drf_start_pause:1;
        RBus_UInt32  ve_p2mvd_drf_start_pause:1;
        RBus_UInt32  ve_mf0_drf_start_pause:1;
        RBus_UInt32  ve_mf1_drf_start_pause:1;
        RBus_UInt32  ve_mf2_drf_start_pause:1;
    };
}VE_MBIST_VE_DRF_PAUSE0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_lr_drf_start_pause:1;
        RBus_UInt32  ve_cdef_drf_start_pause:1;
        RBus_UInt32  ve_sr_drf_start_pause:1;
        RBus_UInt32  ve_ciblk_drf_start_pause:1;
        RBus_UInt32  ve_vm_2_drf_start_pause:1;
        RBus_UInt32  ve_pred_3_2p_drf_start_pause:1;
        RBus_UInt32  ve_cmprs_1_drf_start_pause:1;
        RBus_UInt32  ve_rlrmem01_drf_start_pause:1;
        RBus_UInt32  ve_pred_2e_drf_start_pause:1;
        RBus_UInt32  ve_cah_bisr_drf_start_pause:1;
        RBus_UInt32  ve_ngh_bisr_drf_start_pause:1;
        RBus_UInt32  ve_ngh_2_bisr_drf_start_pause:1;
        RBus_UInt32  res1:20;
    };
}VE_MBIST_VE_DRF_PAUSE1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_rif_done:1;
        RBus_UInt32  ve_drf_vld_0_done:1;
        RBus_UInt32  ve_drf_vm_0_done:1;
        RBus_UInt32  ve_drf_vm_1_done:1;
        RBus_UInt32  ve_drf_it_0_0_done:1;
        RBus_UInt32  ve_drf_it_0_1_done:1;
        RBus_UInt32  ve_drf_it_1_done:1;
        RBus_UInt32  ve_drf_it_bs_done:1;
        RBus_UInt32  ve_drf_sao_done:1;
        RBus_UInt32  ve_drf_brg_done:1;
        RBus_UInt32  ve_drf_cm1_done:1;
        RBus_UInt32  ve_drf_cm2_done:1;
        RBus_UInt32  ve_drf_rlrmem_mvbuf_done:1;
        RBus_UInt32  ve_drf_seg_mvd_done:1;
        RBus_UInt32  ve_drf_dbk_done:1;
        RBus_UInt32  ve_drf_cmprs_done:1;
        RBus_UInt32  ve_drf_dcmprs_done:1;
        RBus_UInt32  ve_drf_cah_1p_done:1;
        RBus_UInt32  ve_drf_cah_2p_0_done:1;
        RBus_UInt32  ve_drf_cah_2p_1_done:1;
        RBus_UInt32  ve_drf_pred_0_done:1;
        RBus_UInt32  ve_drf_pred_1_done:1;
        RBus_UInt32  ve_drf_pred_2_done:1;
        RBus_UInt32  ve_drf_pred_3_done:1;
        RBus_UInt32  ve_drf_dcmprs_outbuf_done:1;
        RBus_UInt32  ve_drf_clmp_done:1;
        RBus_UInt32  ve_drf_p2_done:1;
        RBus_UInt32  ve_drf_vld_1_done:1;
        RBus_UInt32  ve_drf_p2mvd_done:1;
        RBus_UInt32  ve_drf_mf0_done:1;
        RBus_UInt32  ve_drf_mf1_done:1;
        RBus_UInt32  ve_drf_mf2_done:1;
    };
}VE_MBIST_VE_DRF_DONE0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_lr_done:1;
        RBus_UInt32  ve_drf_cdef_done:1;
        RBus_UInt32  ve_drf_sr_done:1;
        RBus_UInt32  ve_drf_ciblk_done:1;
        RBus_UInt32  ve_drf_vm_2_done:1;
        RBus_UInt32  ve_drf_pred_3_2p_done:1;
        RBus_UInt32  ve_drf_cmprs_1_done:1;
        RBus_UInt32  ve_drf_rlrmem01_done:1;
        RBus_UInt32  ve_drf_pred_2e_done:1;
        RBus_UInt32  ve_drf_cah_bisr_done:1;
        RBus_UInt32  ve_drf_ngh_bisr_done:1;
        RBus_UInt32  ve_drf_ngh_2_bisr_done:1;
        RBus_UInt32  res1:20;
    };
}VE_MBIST_VE_DRF_DONE1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_rif_fail_group:1;
        RBus_UInt32  ve_drf_vld_0_fail_group:1;
        RBus_UInt32  ve_drf_vm_0_fail_group:1;
        RBus_UInt32  ve_drf_vm_1_fail_group:1;
        RBus_UInt32  ve_drf_it_0_0_fail_group:1;
        RBus_UInt32  ve_drf_it_0_1_fail_group:1;
        RBus_UInt32  ve_drf_it_1_fail_group:1;
        RBus_UInt32  ve_drf_it_bs_fail_group:1;
        RBus_UInt32  ve_drf_sao_fail_group:1;
        RBus_UInt32  ve_drf_brg_fail_group:1;
        RBus_UInt32  ve_drf_cm1_fail_group:1;
        RBus_UInt32  ve_drf_cm2_fail_group:1;
        RBus_UInt32  ve_drf_rlrmem_mvbuf_fail_group:1;
        RBus_UInt32  ve_drf_seg_mvd_fail_group:1;
        RBus_UInt32  ve_drf_dbk_fail_group:1;
        RBus_UInt32  ve_drf_cmprs_fail_group:1;
        RBus_UInt32  ve_drf_dcmprs_fail_group:1;
        RBus_UInt32  ve_drf_cah_1p_fail_group:1;
        RBus_UInt32  ve_drf_cah_2p_0_fail_group:1;
        RBus_UInt32  ve_drf_cah_2p_1_fail_group:1;
        RBus_UInt32  ve_drf_pred_0_fail_group:1;
        RBus_UInt32  ve_drf_pred_1_fail_group:1;
        RBus_UInt32  ve_drf_pred_2_fail_group:1;
        RBus_UInt32  ve_drf_pred_3_fail_group:1;
        RBus_UInt32  ve_drf_dcmprs_outbuf_fail_group:1;
        RBus_UInt32  ve_drf_clmp_fail_group:1;
        RBus_UInt32  ve_drf_p2_fail_group:1;
        RBus_UInt32  ve_drf_vld_1_fail_group:1;
        RBus_UInt32  ve_drf_p2mvd_fail_group:1;
        RBus_UInt32  ve_drf_mf0_fail_group:1;
        RBus_UInt32  ve_drf_mf1_fail_group:1;
        RBus_UInt32  ve_drf_mf2_fail_group:1;
    };
}VE_MBIST_VE_DRF_FAIL_GROUP0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_lr_fail_group:1;
        RBus_UInt32  ve_drf_cdef_fail_group:1;
        RBus_UInt32  ve_drf_sr_fail_group:1;
        RBus_UInt32  ve_drf_ciblk_fail_group:1;
        RBus_UInt32  ve_drf_vm_2_fail_group:1;
        RBus_UInt32  ve_drf_pred_3_2p_fail_group:1;
        RBus_UInt32  ve_drf_cmprs_1_fail_group:1;
        RBus_UInt32  ve_drf_rlrmem01_fail_group:1;
        RBus_UInt32  ve_drf_pred_2e_fail_group:1;
        RBus_UInt32  ve_drf_cah_bisr_fail_group:1;
        RBus_UInt32  ve_drf_ngh_bisr_fail_group:1;
        RBus_UInt32  ve_drf_ngh_2_bisr_fail_group:1;
        RBus_UInt32  res1:20;
    };
}VE_MBIST_VE_DRF_FAIL_GROUP1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_cah_bisr_second_run:1;
        RBus_UInt32  ve_ngh_bisr_second_run:1;
        RBus_UInt32  ve_ngh_2_bisr_second_run:1;
        RBus_UInt32  res1:29;
    };
}VE_MBIST_CAH_BISR_SECOND_RUN_EN_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_cah_bisr_fail_group:1;
        RBus_UInt32  ve_ngh_bisr_fail_group:1;
        RBus_UInt32  ve_ngh_2_bisr_fail_group:1;
        RBus_UInt32  res1:29;
    };
}VE_MBIST_CAH_BISR_FAIL_GROUP_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_rif_fail:5;
        RBus_UInt32  ve_bist_vld_0_fail:10;
        RBus_UInt32  ve_bist_vld_1_fail:10;
        RBus_UInt32  ve_bist_p2_fail:5;
        RBus_UInt32  res1:2;
    };
}VE_MBIST_VE_BIST_RIF_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_rif_fail:5;
        RBus_UInt32  ve_drf_vld_0_fail:10;
        RBus_UInt32  ve_drf_vld_1_fail:10;
        RBus_UInt32  ve_drf_p2_fail:5;
        RBus_UInt32  res1:2;
    };
}VE_MBIST_VE_DRF_RIF_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_vm_0_fail:10;
        RBus_UInt32  ve_bist_vm_1_fail:10;
        RBus_UInt32  ve_bist_vm_2_fail:7;
        RBus_UInt32  res1:5;
    };
}VE_MBIST_VE_BIST_VM_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_vm_0_fail:10;
        RBus_UInt32  ve_drf_vm_1_fail:10;
        RBus_UInt32  ve_drf_vm_2_fail:7;
        RBus_UInt32  res1:5;
    };
}VE_MBIST_VE_DRF_VM_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_it_0_0_fail:10;
        RBus_UInt32  ve_bist_it_0_1_fail:10;
        RBus_UInt32  ve_bist_it_1_fail:6;
        RBus_UInt32  ve_bist_it_bs_fail:4;
        RBus_UInt32  res1:2;
    };
}VE_MBIST_VE_BIST_IT_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_it_0_0_fail:10;
        RBus_UInt32  ve_drf_it_0_1_fail:10;
        RBus_UInt32  ve_drf_it_1_fail:6;
        RBus_UInt32  ve_drf_it_bs_fail:4;
        RBus_UInt32  res1:2;
    };
}VE_MBIST_VE_DRF_IT_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_sao_fail:3;
        RBus_UInt32  res1:29;
    };
}VE_MBIST_VE_BIST_SAO_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_sao_fail:3;
        RBus_UInt32  res1:29;
    };
}VE_MBIST_VE_DRF_SAO_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_brg_fail:5;
        RBus_UInt32  res1:27;
    };
}VE_MBIST_VE_BIST_BRG_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_brg_fail:5;
        RBus_UInt32  res1:27;
    };
}VE_MBIST_VE_DRF_BRG_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_cm1_fail:10;
        RBus_UInt32  ve_bist_cm2_fail:10;
        RBus_UInt32  res1:12;
    };
}VE_MBIST_VE_BIST_CM_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_cm1_fail:10;
        RBus_UInt32  ve_drf_cm2_fail:10;
        RBus_UInt32  res1:12;
    };
}VE_MBIST_VE_DRF_CM_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_rlrmem_mvbuf_fail:7;
        RBus_UInt32  ve_bist_rlrmem01_fail:8;
        RBus_UInt32  res1:17;
    };
}VE_MBIST_VE_BIST_RLRMEM_MVBUF_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_rlrmem_mvbuf_fail:7;
        RBus_UInt32  ve_drf_rlrmem01_fail:8;
        RBus_UInt32  res1:17;
    };
}VE_MBIST_VE_DRF_RLRMEM_MVBUF_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_seg_mvd_fail:9;
        RBus_UInt32  res1:23;
    };
}VE_MBIST_VE_BIST_SEG_MVD_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_seg_mvd_fail:9;
        RBus_UInt32  res1:23;
    };
}VE_MBIST_VE_DRF_SEG_MVD_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_dbk_fail:10;
        RBus_UInt32  ve_bist_cmprs_fail:4;
        RBus_UInt32  ve_bist_cmprs_1_fail:5;
        RBus_UInt32  res1:13;
    };
}VE_MBIST_VE_BIST_DBK_0_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_dbk_fail:10;
        RBus_UInt32  ve_drf_cmprs_fail:4;
        RBus_UInt32  ve_drf_cmprs_1_fail:5;
        RBus_UInt32  res1:13;
    };
}VE_MBIST_VE_DRF_DBK_0_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_cah_1p_fail:2;
        RBus_UInt32  ve_bist_cah_2p_0_fail:8;
        RBus_UInt32  ve_bist_cah_2p_1_fail:4;
        RBus_UInt32  res1:18;
    };
}VE_MBIST_VE_BIST_CAH_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_cah_1p_fail:2;
        RBus_UInt32  ve_drf_cah_2p_0_fail:8;
        RBus_UInt32  ve_drf_cah_2p_1_fail:4;
        RBus_UInt32  res1:18;
    };
}VE_MBIST_VE_DRF_CAH_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_pred_0_fail:10;
        RBus_UInt32  ve_bist_pred_1_fail:8;
        RBus_UInt32  ve_bist_pred_2_fail:6;
        RBus_UInt32  ve_bist_pred_2e_fail:6;
        RBus_UInt32  res1:2;
    };
}VE_MBIST_VE_BIST_PRED_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_pred_0_fail:10;
        RBus_UInt32  ve_drf_pred_1_fail:8;
        RBus_UInt32  ve_drf_pred_2_fail:6;
        RBus_UInt32  ve_drf_pred_2e_fail:6;
        RBus_UInt32  res1:2;
    };
}VE_MBIST_VE_DRF_PRED_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_ciblk_fail:7;
        RBus_UInt32  ve_bist_pred_3_fail:9;
        RBus_UInt32  ve_bist_pred_3_2p_fail:6;
        RBus_UInt32  res1:10;
    };
}VE_MBIST_VE_BIST_CIBLK_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_ciblk_fail:7;
        RBus_UInt32  ve_drf_pred_3_fail:9;
        RBus_UInt32  ve_drf_pred_3_2p_fail:6;
        RBus_UInt32  res1:10;
    };
}VE_MBIST_VE_DRF_CIBLK_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_dcmprs_fail:9;
        RBus_UInt32  ve_bist_dcmprs_outbuf_fail:6;
        RBus_UInt32  res1:17;
    };
}VE_MBIST_VE_BIST_DCMPRS_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_dcmprs_fail:9;
        RBus_UInt32  ve_drf_dcmprs_outbuf_fail:6;
        RBus_UInt32  res1:17;
    };
}VE_MBIST_VE_DRF_DCMPRS_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_clmp_fail:5;
        RBus_UInt32  res1:27;
    };
}VE_MBIST_VE_BIST_CLMP_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_clmp_fail:5;
        RBus_UInt32  res1:27;
    };
}VE_MBIST_VE_DRF_CLMP_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_p2mvd_fail:10;
        RBus_UInt32  res1:22;
    };
}VE_MBIST_VE_BIST_P2MVD_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_p2mvd_fail:10;
        RBus_UInt32  res1:22;
    };
}VE_MBIST_VE_DRF_P2MVD_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_mf0_fail:8;
        RBus_UInt32  ve_bist_mf1_fail:8;
        RBus_UInt32  ve_bist_mf2_fail:8;
        RBus_UInt32  res1:8;
    };
}VE_MBIST_VE_BIST_MF_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_mf0_fail:8;
        RBus_UInt32  ve_drf_mf1_fail:8;
        RBus_UInt32  ve_drf_mf2_fail:8;
        RBus_UInt32  res1:8;
    };
}VE_MBIST_VE_DRF_MF_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_lr_fail:5;
        RBus_UInt32  res1:27;
    };
}VE_MBIST_VE_BIST_LR_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_lr_fail:5;
        RBus_UInt32  res1:27;
    };
}VE_MBIST_VE_DRF_LR_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_cdef_fail:4;
        RBus_UInt32  res1:28;
    };
}VE_MBIST_VE_BIST_CDEF_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_cdef_fail:4;
        RBus_UInt32  res1:28;
    };
}VE_MBIST_VE_DRF_CDEF_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_sr_fail:5;
        RBus_UInt32  res1:27;
    };
}VE_MBIST_VE_BIST_SR_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_sr_fail:5;
        RBus_UInt32  res1:27;
    };
}VE_MBIST_VE_DRF_SR_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_cah_bisr_fail:2;
        RBus_UInt32  res1:29;
        RBus_UInt32  ve_cah_bisr_repaired:1;
    };
}VE_MBIST_VE_CAH_BSIR_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_cah_bisr_fail:2;
        RBus_UInt32  res1:30;
    };
}VE_MBIST_VE_DRF_CAH_BISR_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_ngh_bisr_fail:1;
        RBus_UInt32  ve_ngh_2_bisr_fail:1;
        RBus_UInt32  res1:28;
        RBus_UInt32  ve_ngh_bisr_repaired:1;
        RBus_UInt32  ve_ngh_2_bisr_repaired:1;
    };
}VE_MBIST_VE_NGH_BISR_FAIL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_ngh_bisr_fail:1;
        RBus_UInt32  ve_drf_ngh_2_bisr_fail:1;
        RBus_UInt32  res1:30;
    };
}VE_MBIST_VE_DRF_NGH_BISR_FAIL_RBUS;

#endif

#endif
#endif
