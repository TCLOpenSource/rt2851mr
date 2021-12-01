/**
* @file Merlin5-DesignSpec-D-Domain_Display_Timing_Generator
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_PPOVERLAY_REG_H_
#define _RBUS_PPOVERLAY_REG_H_

#include "rbus_types.h"



//  PPOVERLAY Register Address
#define  PPOVERLAY_Double_Buffer_CTRL                                           0x18028028
#define  PPOVERLAY_Double_Buffer_CTRL_reg_addr                                   "0xB8028028"
#define  PPOVERLAY_Double_Buffer_CTRL_reg                                        0xB8028028
#define  PPOVERLAY_Double_Buffer_CTRL_inst_addr                                  "0x0000"
#define  set_PPOVERLAY_Double_Buffer_CTRL_reg(data)                              (*((volatile unsigned int*)PPOVERLAY_Double_Buffer_CTRL_reg)=data)
#define  get_PPOVERLAY_Double_Buffer_CTRL_reg                                    (*((volatile unsigned int*)PPOVERLAY_Double_Buffer_CTRL_reg))
#define  PPOVERLAY_Double_Buffer_CTRL_drm_multireg_dbuf_vsync_sel_shift          (30)
#define  PPOVERLAY_Double_Buffer_CTRL_drm_multireg_dbuf_en_shift                 (14)
#define  PPOVERLAY_Double_Buffer_CTRL_drm_multireg_dbuf_read_sel_shift           (13)
#define  PPOVERLAY_Double_Buffer_CTRL_drm_multireg_dbuf_set_shift                (12)
#define  PPOVERLAY_Double_Buffer_CTRL_dreg_dbuf_en_shift                         (10)
#define  PPOVERLAY_Double_Buffer_CTRL_dreg_dbuf_read_sel_shift                   (9)
#define  PPOVERLAY_Double_Buffer_CTRL_dreg_dbuf_set_shift                        (8)
#define  PPOVERLAY_Double_Buffer_CTRL_dsubreg_dbuf_en_shift                      (6)
#define  PPOVERLAY_Double_Buffer_CTRL_dsubreg_dbuf_read_sel_shift                (5)
#define  PPOVERLAY_Double_Buffer_CTRL_dsubreg_dbuf_set_shift                     (4)
#define  PPOVERLAY_Double_Buffer_CTRL_dmainreg_dbuf_en_shift                     (2)
#define  PPOVERLAY_Double_Buffer_CTRL_dmainreg_dbuf_read_sel_shift               (1)
#define  PPOVERLAY_Double_Buffer_CTRL_dmainreg_dbuf_set_shift                    (0)
#define  PPOVERLAY_Double_Buffer_CTRL_drm_multireg_dbuf_vsync_sel_mask           (0xC0000000)
#define  PPOVERLAY_Double_Buffer_CTRL_drm_multireg_dbuf_en_mask                  (0x00004000)
#define  PPOVERLAY_Double_Buffer_CTRL_drm_multireg_dbuf_read_sel_mask            (0x00002000)
#define  PPOVERLAY_Double_Buffer_CTRL_drm_multireg_dbuf_set_mask                 (0x00001000)
#define  PPOVERLAY_Double_Buffer_CTRL_dreg_dbuf_en_mask                          (0x00000400)
#define  PPOVERLAY_Double_Buffer_CTRL_dreg_dbuf_read_sel_mask                    (0x00000200)
#define  PPOVERLAY_Double_Buffer_CTRL_dreg_dbuf_set_mask                         (0x00000100)
#define  PPOVERLAY_Double_Buffer_CTRL_dsubreg_dbuf_en_mask                       (0x00000040)
#define  PPOVERLAY_Double_Buffer_CTRL_dsubreg_dbuf_read_sel_mask                 (0x00000020)
#define  PPOVERLAY_Double_Buffer_CTRL_dsubreg_dbuf_set_mask                      (0x00000010)
#define  PPOVERLAY_Double_Buffer_CTRL_dmainreg_dbuf_en_mask                      (0x00000004)
#define  PPOVERLAY_Double_Buffer_CTRL_dmainreg_dbuf_read_sel_mask                (0x00000002)
#define  PPOVERLAY_Double_Buffer_CTRL_dmainreg_dbuf_set_mask                     (0x00000001)
#define  PPOVERLAY_Double_Buffer_CTRL_drm_multireg_dbuf_vsync_sel(data)          (0xC0000000&((data)<<30))
#define  PPOVERLAY_Double_Buffer_CTRL_drm_multireg_dbuf_en(data)                 (0x00004000&((data)<<14))
#define  PPOVERLAY_Double_Buffer_CTRL_drm_multireg_dbuf_read_sel(data)           (0x00002000&((data)<<13))
#define  PPOVERLAY_Double_Buffer_CTRL_drm_multireg_dbuf_set(data)                (0x00001000&((data)<<12))
#define  PPOVERLAY_Double_Buffer_CTRL_dreg_dbuf_en(data)                         (0x00000400&((data)<<10))
#define  PPOVERLAY_Double_Buffer_CTRL_dreg_dbuf_read_sel(data)                   (0x00000200&((data)<<9))
#define  PPOVERLAY_Double_Buffer_CTRL_dreg_dbuf_set(data)                        (0x00000100&((data)<<8))
#define  PPOVERLAY_Double_Buffer_CTRL_dsubreg_dbuf_en(data)                      (0x00000040&((data)<<6))
#define  PPOVERLAY_Double_Buffer_CTRL_dsubreg_dbuf_read_sel(data)                (0x00000020&((data)<<5))
#define  PPOVERLAY_Double_Buffer_CTRL_dsubreg_dbuf_set(data)                     (0x00000010&((data)<<4))
#define  PPOVERLAY_Double_Buffer_CTRL_dmainreg_dbuf_en(data)                     (0x00000004&((data)<<2))
#define  PPOVERLAY_Double_Buffer_CTRL_dmainreg_dbuf_read_sel(data)               (0x00000002&((data)<<1))
#define  PPOVERLAY_Double_Buffer_CTRL_dmainreg_dbuf_set(data)                    (0x00000001&(data))
#define  PPOVERLAY_Double_Buffer_CTRL_get_drm_multireg_dbuf_vsync_sel(data)      ((0xC0000000&(data))>>30)
#define  PPOVERLAY_Double_Buffer_CTRL_get_drm_multireg_dbuf_en(data)             ((0x00004000&(data))>>14)
#define  PPOVERLAY_Double_Buffer_CTRL_get_drm_multireg_dbuf_read_sel(data)       ((0x00002000&(data))>>13)
#define  PPOVERLAY_Double_Buffer_CTRL_get_drm_multireg_dbuf_set(data)            ((0x00001000&(data))>>12)
#define  PPOVERLAY_Double_Buffer_CTRL_get_dreg_dbuf_en(data)                     ((0x00000400&(data))>>10)
#define  PPOVERLAY_Double_Buffer_CTRL_get_dreg_dbuf_read_sel(data)               ((0x00000200&(data))>>9)
#define  PPOVERLAY_Double_Buffer_CTRL_get_dreg_dbuf_set(data)                    ((0x00000100&(data))>>8)
#define  PPOVERLAY_Double_Buffer_CTRL_get_dsubreg_dbuf_en(data)                  ((0x00000040&(data))>>6)
#define  PPOVERLAY_Double_Buffer_CTRL_get_dsubreg_dbuf_read_sel(data)            ((0x00000020&(data))>>5)
#define  PPOVERLAY_Double_Buffer_CTRL_get_dsubreg_dbuf_set(data)                 ((0x00000010&(data))>>4)
#define  PPOVERLAY_Double_Buffer_CTRL_get_dmainreg_dbuf_en(data)                 ((0x00000004&(data))>>2)
#define  PPOVERLAY_Double_Buffer_CTRL_get_dmainreg_dbuf_read_sel(data)           ((0x00000002&(data))>>1)
#define  PPOVERLAY_Double_Buffer_CTRL_get_dmainreg_dbuf_set(data)                (0x00000001&(data))

#define  PPOVERLAY_Double_Buffer_CTRL2                                          0x1802847C
#define  PPOVERLAY_Double_Buffer_CTRL2_reg_addr                                  "0xB802847C"
#define  PPOVERLAY_Double_Buffer_CTRL2_reg                                       0xB802847C
#define  PPOVERLAY_Double_Buffer_CTRL2_inst_addr                                 "0x0001"
#define  set_PPOVERLAY_Double_Buffer_CTRL2_reg(data)                             (*((volatile unsigned int*)PPOVERLAY_Double_Buffer_CTRL2_reg)=data)
#define  get_PPOVERLAY_Double_Buffer_CTRL2_reg                                   (*((volatile unsigned int*)PPOVERLAY_Double_Buffer_CTRL2_reg))
#define  PPOVERLAY_Double_Buffer_CTRL2_osddtgreg_dbuf_en_shift                   (22)
#define  PPOVERLAY_Double_Buffer_CTRL2_osddtgreg_dbuf_read_sel_shift             (21)
#define  PPOVERLAY_Double_Buffer_CTRL2_osddtgreg_dbuf_set_shift                  (20)
#define  PPOVERLAY_Double_Buffer_CTRL2_uzudtgreg_dbuf_en_shift                   (18)
#define  PPOVERLAY_Double_Buffer_CTRL2_uzudtgreg_dbuf_read_sel_shift             (17)
#define  PPOVERLAY_Double_Buffer_CTRL2_uzudtgreg_dbuf_set_shift                  (16)
#define  PPOVERLAY_Double_Buffer_CTRL2_memcdtgreg_dbuf_en_shift                  (14)
#define  PPOVERLAY_Double_Buffer_CTRL2_memcdtgreg_dbuf_read_sel_shift            (13)
#define  PPOVERLAY_Double_Buffer_CTRL2_memc_dtgreg_dbuf_set_shift                (12)
#define  PPOVERLAY_Double_Buffer_CTRL2_osddtg_dbuf_vsync_sel_shift               (4)
#define  PPOVERLAY_Double_Buffer_CTRL2_uzudtg_dbuf_vsync_sel_shift               (2)
#define  PPOVERLAY_Double_Buffer_CTRL2_memcdtg_dbuf_vsync_sel_shift              (0)
#define  PPOVERLAY_Double_Buffer_CTRL2_osddtgreg_dbuf_en_mask                    (0x00400000)
#define  PPOVERLAY_Double_Buffer_CTRL2_osddtgreg_dbuf_read_sel_mask              (0x00200000)
#define  PPOVERLAY_Double_Buffer_CTRL2_osddtgreg_dbuf_set_mask                   (0x00100000)
#define  PPOVERLAY_Double_Buffer_CTRL2_uzudtgreg_dbuf_en_mask                    (0x00040000)
#define  PPOVERLAY_Double_Buffer_CTRL2_uzudtgreg_dbuf_read_sel_mask              (0x00020000)
#define  PPOVERLAY_Double_Buffer_CTRL2_uzudtgreg_dbuf_set_mask                   (0x00010000)
#define  PPOVERLAY_Double_Buffer_CTRL2_memcdtgreg_dbuf_en_mask                   (0x00004000)
#define  PPOVERLAY_Double_Buffer_CTRL2_memcdtgreg_dbuf_read_sel_mask             (0x00002000)
#define  PPOVERLAY_Double_Buffer_CTRL2_memc_dtgreg_dbuf_set_mask                 (0x00001000)
#define  PPOVERLAY_Double_Buffer_CTRL2_osddtg_dbuf_vsync_sel_mask                (0x00000030)
#define  PPOVERLAY_Double_Buffer_CTRL2_uzudtg_dbuf_vsync_sel_mask                (0x0000000C)
#define  PPOVERLAY_Double_Buffer_CTRL2_memcdtg_dbuf_vsync_sel_mask               (0x00000003)
#define  PPOVERLAY_Double_Buffer_CTRL2_osddtgreg_dbuf_en(data)                   (0x00400000&((data)<<22))
#define  PPOVERLAY_Double_Buffer_CTRL2_osddtgreg_dbuf_read_sel(data)             (0x00200000&((data)<<21))
#define  PPOVERLAY_Double_Buffer_CTRL2_osddtgreg_dbuf_set(data)                  (0x00100000&((data)<<20))
#define  PPOVERLAY_Double_Buffer_CTRL2_uzudtgreg_dbuf_en(data)                   (0x00040000&((data)<<18))
#define  PPOVERLAY_Double_Buffer_CTRL2_uzudtgreg_dbuf_read_sel(data)             (0x00020000&((data)<<17))
#define  PPOVERLAY_Double_Buffer_CTRL2_uzudtgreg_dbuf_set(data)                  (0x00010000&((data)<<16))
#define  PPOVERLAY_Double_Buffer_CTRL2_memcdtgreg_dbuf_en(data)                  (0x00004000&((data)<<14))
#define  PPOVERLAY_Double_Buffer_CTRL2_memcdtgreg_dbuf_read_sel(data)            (0x00002000&((data)<<13))
#define  PPOVERLAY_Double_Buffer_CTRL2_memc_dtgreg_dbuf_set(data)                (0x00001000&((data)<<12))
#define  PPOVERLAY_Double_Buffer_CTRL2_osddtg_dbuf_vsync_sel(data)               (0x00000030&((data)<<4))
#define  PPOVERLAY_Double_Buffer_CTRL2_uzudtg_dbuf_vsync_sel(data)               (0x0000000C&((data)<<2))
#define  PPOVERLAY_Double_Buffer_CTRL2_memcdtg_dbuf_vsync_sel(data)              (0x00000003&(data))
#define  PPOVERLAY_Double_Buffer_CTRL2_get_osddtgreg_dbuf_en(data)               ((0x00400000&(data))>>22)
#define  PPOVERLAY_Double_Buffer_CTRL2_get_osddtgreg_dbuf_read_sel(data)         ((0x00200000&(data))>>21)
#define  PPOVERLAY_Double_Buffer_CTRL2_get_osddtgreg_dbuf_set(data)              ((0x00100000&(data))>>20)
#define  PPOVERLAY_Double_Buffer_CTRL2_get_uzudtgreg_dbuf_en(data)               ((0x00040000&(data))>>18)
#define  PPOVERLAY_Double_Buffer_CTRL2_get_uzudtgreg_dbuf_read_sel(data)         ((0x00020000&(data))>>17)
#define  PPOVERLAY_Double_Buffer_CTRL2_get_uzudtgreg_dbuf_set(data)              ((0x00010000&(data))>>16)
#define  PPOVERLAY_Double_Buffer_CTRL2_get_memcdtgreg_dbuf_en(data)              ((0x00004000&(data))>>14)
#define  PPOVERLAY_Double_Buffer_CTRL2_get_memcdtgreg_dbuf_read_sel(data)        ((0x00002000&(data))>>13)
#define  PPOVERLAY_Double_Buffer_CTRL2_get_memc_dtgreg_dbuf_set(data)            ((0x00001000&(data))>>12)
#define  PPOVERLAY_Double_Buffer_CTRL2_get_osddtg_dbuf_vsync_sel(data)           ((0x00000030&(data))>>4)
#define  PPOVERLAY_Double_Buffer_CTRL2_get_uzudtg_dbuf_vsync_sel(data)           ((0x0000000C&(data))>>2)
#define  PPOVERLAY_Double_Buffer_CTRL2_get_memcdtg_dbuf_vsync_sel(data)          (0x00000003&(data))

#define  PPOVERLAY_Double_Buffer_CTRL3                                          0x18028478
#define  PPOVERLAY_Double_Buffer_CTRL3_reg_addr                                  "0xB8028478"
#define  PPOVERLAY_Double_Buffer_CTRL3_reg                                       0xB8028478
#define  PPOVERLAY_Double_Buffer_CTRL3_inst_addr                                 "0x0002"
#define  set_PPOVERLAY_Double_Buffer_CTRL3_reg(data)                             (*((volatile unsigned int*)PPOVERLAY_Double_Buffer_CTRL3_reg)=data)
#define  get_PPOVERLAY_Double_Buffer_CTRL3_reg                                   (*((volatile unsigned int*)PPOVERLAY_Double_Buffer_CTRL3_reg))
#define  PPOVERLAY_Double_Buffer_CTRL3_dmainreg_other_dbuf_en_shift              (2)
#define  PPOVERLAY_Double_Buffer_CTRL3_dmainreg_other_dbuf_read_sel_shift        (1)
#define  PPOVERLAY_Double_Buffer_CTRL3_dmainreg_other_dbuf_set_shift             (0)
#define  PPOVERLAY_Double_Buffer_CTRL3_dmainreg_other_dbuf_en_mask               (0x00000004)
#define  PPOVERLAY_Double_Buffer_CTRL3_dmainreg_other_dbuf_read_sel_mask         (0x00000002)
#define  PPOVERLAY_Double_Buffer_CTRL3_dmainreg_other_dbuf_set_mask              (0x00000001)
#define  PPOVERLAY_Double_Buffer_CTRL3_dmainreg_other_dbuf_en(data)              (0x00000004&((data)<<2))
#define  PPOVERLAY_Double_Buffer_CTRL3_dmainreg_other_dbuf_read_sel(data)        (0x00000002&((data)<<1))
#define  PPOVERLAY_Double_Buffer_CTRL3_dmainreg_other_dbuf_set(data)             (0x00000001&(data))
#define  PPOVERLAY_Double_Buffer_CTRL3_get_dmainreg_other_dbuf_en(data)          ((0x00000004&(data))>>2)
#define  PPOVERLAY_Double_Buffer_CTRL3_get_dmainreg_other_dbuf_read_sel(data)    ((0x00000002&(data))>>1)
#define  PPOVERLAY_Double_Buffer_CTRL3_get_dmainreg_other_dbuf_set(data)         (0x00000001&(data))

#define  PPOVERLAY_Highlight_window_DB_CTRL                                     0x18028154
#define  PPOVERLAY_Highlight_window_DB_CTRL_reg_addr                             "0xB8028154"
#define  PPOVERLAY_Highlight_window_DB_CTRL_reg                                  0xB8028154
#define  PPOVERLAY_Highlight_window_DB_CTRL_inst_addr                            "0x0003"
#define  set_PPOVERLAY_Highlight_window_DB_CTRL_reg(data)                        (*((volatile unsigned int*)PPOVERLAY_Highlight_window_DB_CTRL_reg)=data)
#define  get_PPOVERLAY_Highlight_window_DB_CTRL_reg                              (*((volatile unsigned int*)PPOVERLAY_Highlight_window_DB_CTRL_reg))
#define  PPOVERLAY_Highlight_window_DB_CTRL_hlw_db_en_shift                      (2)
#define  PPOVERLAY_Highlight_window_DB_CTRL_hlw_db_read_sel_shift                (1)
#define  PPOVERLAY_Highlight_window_DB_CTRL_hlw_db_apply_shift                   (0)
#define  PPOVERLAY_Highlight_window_DB_CTRL_hlw_db_en_mask                       (0x00000004)
#define  PPOVERLAY_Highlight_window_DB_CTRL_hlw_db_read_sel_mask                 (0x00000002)
#define  PPOVERLAY_Highlight_window_DB_CTRL_hlw_db_apply_mask                    (0x00000001)
#define  PPOVERLAY_Highlight_window_DB_CTRL_hlw_db_en(data)                      (0x00000004&((data)<<2))
#define  PPOVERLAY_Highlight_window_DB_CTRL_hlw_db_read_sel(data)                (0x00000002&((data)<<1))
#define  PPOVERLAY_Highlight_window_DB_CTRL_hlw_db_apply(data)                   (0x00000001&(data))
#define  PPOVERLAY_Highlight_window_DB_CTRL_get_hlw_db_en(data)                  ((0x00000004&(data))>>2)
#define  PPOVERLAY_Highlight_window_DB_CTRL_get_hlw_db_read_sel(data)            ((0x00000002&(data))>>1)
#define  PPOVERLAY_Highlight_window_DB_CTRL_get_hlw_db_apply(data)               (0x00000001&(data))

#define  PPOVERLAY_iv2dv_Double_Buffer_CTRL                                     0x18025C70
#define  PPOVERLAY_iv2dv_Double_Buffer_CTRL_reg_addr                             "0xB8025C70"
#define  PPOVERLAY_iv2dv_Double_Buffer_CTRL_reg                                  0xB8025C70
#define  PPOVERLAY_iv2dv_Double_Buffer_CTRL_inst_addr                            "0x0004"
#define  set_PPOVERLAY_iv2dv_Double_Buffer_CTRL_reg(data)                        (*((volatile unsigned int*)PPOVERLAY_iv2dv_Double_Buffer_CTRL_reg)=data)
#define  get_PPOVERLAY_iv2dv_Double_Buffer_CTRL_reg                              (*((volatile unsigned int*)PPOVERLAY_iv2dv_Double_Buffer_CTRL_reg))
#define  PPOVERLAY_iv2dv_Double_Buffer_CTRL_iv2dv_db_vsync_sel_shift             (31)
#define  PPOVERLAY_iv2dv_Double_Buffer_CTRL_iv2dv_db_en_shift                    (2)
#define  PPOVERLAY_iv2dv_Double_Buffer_CTRL_iv2dv_db_read_sel_shift              (1)
#define  PPOVERLAY_iv2dv_Double_Buffer_CTRL_iv2dv_db_apply_shift                 (0)
#define  PPOVERLAY_iv2dv_Double_Buffer_CTRL_iv2dv_db_vsync_sel_mask              (0x80000000)
#define  PPOVERLAY_iv2dv_Double_Buffer_CTRL_iv2dv_db_en_mask                     (0x00000004)
#define  PPOVERLAY_iv2dv_Double_Buffer_CTRL_iv2dv_db_read_sel_mask               (0x00000002)
#define  PPOVERLAY_iv2dv_Double_Buffer_CTRL_iv2dv_db_apply_mask                  (0x00000001)
#define  PPOVERLAY_iv2dv_Double_Buffer_CTRL_iv2dv_db_vsync_sel(data)             (0x80000000&((data)<<31))
#define  PPOVERLAY_iv2dv_Double_Buffer_CTRL_iv2dv_db_en(data)                    (0x00000004&((data)<<2))
#define  PPOVERLAY_iv2dv_Double_Buffer_CTRL_iv2dv_db_read_sel(data)              (0x00000002&((data)<<1))
#define  PPOVERLAY_iv2dv_Double_Buffer_CTRL_iv2dv_db_apply(data)                 (0x00000001&(data))
#define  PPOVERLAY_iv2dv_Double_Buffer_CTRL_get_iv2dv_db_vsync_sel(data)         ((0x80000000&(data))>>31)
#define  PPOVERLAY_iv2dv_Double_Buffer_CTRL_get_iv2dv_db_en(data)                ((0x00000004&(data))>>2)
#define  PPOVERLAY_iv2dv_Double_Buffer_CTRL_get_iv2dv_db_read_sel(data)          ((0x00000002&(data))>>1)
#define  PPOVERLAY_iv2dv_Double_Buffer_CTRL_get_iv2dv_db_apply(data)             (0x00000001&(data))

#define  PPOVERLAY_dispd_stage1_sm_ctrl                                         0x18028114
#define  PPOVERLAY_dispd_stage1_sm_ctrl_reg_addr                                 "0xB8028114"
#define  PPOVERLAY_dispd_stage1_sm_ctrl_reg                                      0xB8028114
#define  PPOVERLAY_dispd_stage1_sm_ctrl_inst_addr                                "0x0005"
#define  set_PPOVERLAY_dispd_stage1_sm_ctrl_reg(data)                            (*((volatile unsigned int*)PPOVERLAY_dispd_stage1_sm_ctrl_reg)=data)
#define  get_PPOVERLAY_dispd_stage1_sm_ctrl_reg                                  (*((volatile unsigned int*)PPOVERLAY_dispd_stage1_sm_ctrl_reg))
#define  PPOVERLAY_dispd_stage1_sm_ctrl_dispd_stage1_smooth_toggle_protect_shift (0)
#define  PPOVERLAY_dispd_stage1_sm_ctrl_dispd_stage1_smooth_toggle_protect_mask  (0x00000001)
#define  PPOVERLAY_dispd_stage1_sm_ctrl_dispd_stage1_smooth_toggle_protect(data) (0x00000001&(data))
#define  PPOVERLAY_dispd_stage1_sm_ctrl_get_dispd_stage1_smooth_toggle_protect(data) (0x00000001&(data))

#define  PPOVERLAY_dispd_stage2_sm_ctrl                                         0x18028118
#define  PPOVERLAY_dispd_stage2_sm_ctrl_reg_addr                                 "0xB8028118"
#define  PPOVERLAY_dispd_stage2_sm_ctrl_reg                                      0xB8028118
#define  PPOVERLAY_dispd_stage2_sm_ctrl_inst_addr                                "0x0006"
#define  set_PPOVERLAY_dispd_stage2_sm_ctrl_reg(data)                            (*((volatile unsigned int*)PPOVERLAY_dispd_stage2_sm_ctrl_reg)=data)
#define  get_PPOVERLAY_dispd_stage2_sm_ctrl_reg                                  (*((volatile unsigned int*)PPOVERLAY_dispd_stage2_sm_ctrl_reg))
#define  PPOVERLAY_dispd_stage2_sm_ctrl_dispd_stage2_smooth_toggle_protect_shift (0)
#define  PPOVERLAY_dispd_stage2_sm_ctrl_dispd_stage2_smooth_toggle_protect_mask  (0x00000001)
#define  PPOVERLAY_dispd_stage2_sm_ctrl_dispd_stage2_smooth_toggle_protect(data) (0x00000001&(data))
#define  PPOVERLAY_dispd_stage2_sm_ctrl_get_dispd_stage2_smooth_toggle_protect(data) (0x00000001&(data))

#define  PPOVERLAY_dispd_smooth_toggle1                                         0x1802811C
#define  PPOVERLAY_dispd_smooth_toggle1_reg_addr                                 "0xB802811C"
#define  PPOVERLAY_dispd_smooth_toggle1_reg                                      0xB802811C
#define  PPOVERLAY_dispd_smooth_toggle1_inst_addr                                "0x0007"
#define  set_PPOVERLAY_dispd_smooth_toggle1_reg(data)                            (*((volatile unsigned int*)PPOVERLAY_dispd_smooth_toggle1_reg)=data)
#define  get_PPOVERLAY_dispd_smooth_toggle1_reg                                  (*((volatile unsigned int*)PPOVERLAY_dispd_smooth_toggle1_reg))
#define  PPOVERLAY_dispd_smooth_toggle1_dispd_stage1_smooth_toggle_src_sel_shift (1)
#define  PPOVERLAY_dispd_smooth_toggle1_dispd_stage1_smooth_toggle_apply_shift   (0)
#define  PPOVERLAY_dispd_smooth_toggle1_dispd_stage1_smooth_toggle_src_sel_mask  (0x00000002)
#define  PPOVERLAY_dispd_smooth_toggle1_dispd_stage1_smooth_toggle_apply_mask    (0x00000001)
#define  PPOVERLAY_dispd_smooth_toggle1_dispd_stage1_smooth_toggle_src_sel(data) (0x00000002&((data)<<1))
#define  PPOVERLAY_dispd_smooth_toggle1_dispd_stage1_smooth_toggle_apply(data)   (0x00000001&(data))
#define  PPOVERLAY_dispd_smooth_toggle1_get_dispd_stage1_smooth_toggle_src_sel(data) ((0x00000002&(data))>>1)
#define  PPOVERLAY_dispd_smooth_toggle1_get_dispd_stage1_smooth_toggle_apply(data) (0x00000001&(data))

#define  PPOVERLAY_dispd_smooth_toggle2                                         0x18028120
#define  PPOVERLAY_dispd_smooth_toggle2_reg_addr                                 "0xB8028120"
#define  PPOVERLAY_dispd_smooth_toggle2_reg                                      0xB8028120
#define  PPOVERLAY_dispd_smooth_toggle2_inst_addr                                "0x0008"
#define  set_PPOVERLAY_dispd_smooth_toggle2_reg(data)                            (*((volatile unsigned int*)PPOVERLAY_dispd_smooth_toggle2_reg)=data)
#define  get_PPOVERLAY_dispd_smooth_toggle2_reg                                  (*((volatile unsigned int*)PPOVERLAY_dispd_smooth_toggle2_reg))
#define  PPOVERLAY_dispd_smooth_toggle2_dispd_stage2_smooth_toggle_apply_shift   (0)
#define  PPOVERLAY_dispd_smooth_toggle2_dispd_stage2_smooth_toggle_apply_mask    (0x00000001)
#define  PPOVERLAY_dispd_smooth_toggle2_dispd_stage2_smooth_toggle_apply(data)   (0x00000001&(data))
#define  PPOVERLAY_dispd_smooth_toggle2_get_dispd_stage2_smooth_toggle_apply(data) (0x00000001&(data))

#define  PPOVERLAY_Display_Timing_CTRL1                                         0x18028000
#define  PPOVERLAY_Display_Timing_CTRL1_reg_addr                                 "0xB8028000"
#define  PPOVERLAY_Display_Timing_CTRL1_reg                                      0xB8028000
#define  PPOVERLAY_Display_Timing_CTRL1_inst_addr                                "0x0009"
#define  set_PPOVERLAY_Display_Timing_CTRL1_reg(data)                            (*((volatile unsigned int*)PPOVERLAY_Display_Timing_CTRL1_reg)=data)
#define  get_PPOVERLAY_Display_Timing_CTRL1_reg                                  (*((volatile unsigned int*)PPOVERLAY_Display_Timing_CTRL1_reg))
#define  PPOVERLAY_Display_Timing_CTRL1_disp_frc_fsync_shift                     (31)
#define  PPOVERLAY_Display_Timing_CTRL1_disp_frc_on_fsync_shift                  (30)
#define  PPOVERLAY_Display_Timing_CTRL1_disp_line_4x_shift                       (29)
#define  PPOVERLAY_Display_Timing_CTRL1_disp_fix_last_line_shift                 (27)
#define  PPOVERLAY_Display_Timing_CTRL1_disp_fsync_en_shift                      (26)
#define  PPOVERLAY_Display_Timing_CTRL1_disp_en_shift                            (24)
#define  PPOVERLAY_Display_Timing_CTRL1_main_imd_sm_to_gdma_shift                (22)
#define  PPOVERLAY_Display_Timing_CTRL1_sub_imd_sm_to_gdma_shift                 (21)
#define  PPOVERLAY_Display_Timing_CTRL1_wde_to_free_run_shift                    (20)
#define  PPOVERLAY_Display_Timing_CTRL1_dout_force_bg_shift                      (18)
#define  PPOVERLAY_Display_Timing_CTRL1_fsync_fll_mode_shift                     (8)
#define  PPOVERLAY_Display_Timing_CTRL1_dv_rst_sscg_alignok_sel_shift            (0)
#define  PPOVERLAY_Display_Timing_CTRL1_disp_frc_fsync_mask                      (0x80000000)
#define  PPOVERLAY_Display_Timing_CTRL1_disp_frc_on_fsync_mask                   (0x40000000)
#define  PPOVERLAY_Display_Timing_CTRL1_disp_line_4x_mask                        (0x20000000)
#define  PPOVERLAY_Display_Timing_CTRL1_disp_fix_last_line_mask                  (0x18000000)
#define  PPOVERLAY_Display_Timing_CTRL1_disp_fsync_en_mask                       (0x04000000)
#define  PPOVERLAY_Display_Timing_CTRL1_disp_en_mask                             (0x01000000)
#define  PPOVERLAY_Display_Timing_CTRL1_main_imd_sm_to_gdma_mask                 (0x00400000)
#define  PPOVERLAY_Display_Timing_CTRL1_sub_imd_sm_to_gdma_mask                  (0x00200000)
#define  PPOVERLAY_Display_Timing_CTRL1_wde_to_free_run_mask                     (0x00100000)
#define  PPOVERLAY_Display_Timing_CTRL1_dout_force_bg_mask                       (0x00040000)
#define  PPOVERLAY_Display_Timing_CTRL1_fsync_fll_mode_mask                      (0x00000100)
#define  PPOVERLAY_Display_Timing_CTRL1_dv_rst_sscg_alignok_sel_mask             (0x00000001)
#define  PPOVERLAY_Display_Timing_CTRL1_disp_frc_fsync(data)                     (0x80000000&((data)<<31))
#define  PPOVERLAY_Display_Timing_CTRL1_disp_frc_on_fsync(data)                  (0x40000000&((data)<<30))
#define  PPOVERLAY_Display_Timing_CTRL1_disp_line_4x(data)                       (0x20000000&((data)<<29))
#define  PPOVERLAY_Display_Timing_CTRL1_disp_fix_last_line(data)                 (0x18000000&((data)<<27))
#define  PPOVERLAY_Display_Timing_CTRL1_disp_fsync_en(data)                      (0x04000000&((data)<<26))
#define  PPOVERLAY_Display_Timing_CTRL1_disp_en(data)                            (0x01000000&((data)<<24))
#define  PPOVERLAY_Display_Timing_CTRL1_main_imd_sm_to_gdma(data)                (0x00400000&((data)<<22))
#define  PPOVERLAY_Display_Timing_CTRL1_sub_imd_sm_to_gdma(data)                 (0x00200000&((data)<<21))
#define  PPOVERLAY_Display_Timing_CTRL1_wde_to_free_run(data)                    (0x00100000&((data)<<20))
#define  PPOVERLAY_Display_Timing_CTRL1_dout_force_bg(data)                      (0x00040000&((data)<<18))
#define  PPOVERLAY_Display_Timing_CTRL1_fsync_fll_mode(data)                     (0x00000100&((data)<<8))
#define  PPOVERLAY_Display_Timing_CTRL1_dv_rst_sscg_alignok_sel(data)            (0x00000001&(data))
#define  PPOVERLAY_Display_Timing_CTRL1_get_disp_frc_fsync(data)                 ((0x80000000&(data))>>31)
#define  PPOVERLAY_Display_Timing_CTRL1_get_disp_frc_on_fsync(data)              ((0x40000000&(data))>>30)
#define  PPOVERLAY_Display_Timing_CTRL1_get_disp_line_4x(data)                   ((0x20000000&(data))>>29)
#define  PPOVERLAY_Display_Timing_CTRL1_get_disp_fix_last_line(data)             ((0x18000000&(data))>>27)
#define  PPOVERLAY_Display_Timing_CTRL1_get_disp_fsync_en(data)                  ((0x04000000&(data))>>26)
#define  PPOVERLAY_Display_Timing_CTRL1_get_disp_en(data)                        ((0x01000000&(data))>>24)
#define  PPOVERLAY_Display_Timing_CTRL1_get_main_imd_sm_to_gdma(data)            ((0x00400000&(data))>>22)
#define  PPOVERLAY_Display_Timing_CTRL1_get_sub_imd_sm_to_gdma(data)             ((0x00200000&(data))>>21)
#define  PPOVERLAY_Display_Timing_CTRL1_get_wde_to_free_run(data)                ((0x00100000&(data))>>20)
#define  PPOVERLAY_Display_Timing_CTRL1_get_dout_force_bg(data)                  ((0x00040000&(data))>>18)
#define  PPOVERLAY_Display_Timing_CTRL1_get_fsync_fll_mode(data)                 ((0x00000100&(data))>>8)
#define  PPOVERLAY_Display_Timing_CTRL1_get_dv_rst_sscg_alignok_sel(data)        (0x00000001&(data))

#define  PPOVERLAY_Display_Timing_CTRL2                                         0x18028004
#define  PPOVERLAY_Display_Timing_CTRL2_reg_addr                                 "0xB8028004"
#define  PPOVERLAY_Display_Timing_CTRL2_reg                                      0xB8028004
#define  PPOVERLAY_Display_Timing_CTRL2_inst_addr                                "0x000A"
#define  set_PPOVERLAY_Display_Timing_CTRL2_reg(data)                            (*((volatile unsigned int*)PPOVERLAY_Display_Timing_CTRL2_reg)=data)
#define  get_PPOVERLAY_Display_Timing_CTRL2_reg                                  (*((volatile unsigned int*)PPOVERLAY_Display_Timing_CTRL2_reg))
#define  PPOVERLAY_Display_Timing_CTRL2_lineod_en_shift                          (31)
#define  PPOVERLAY_Display_Timing_CTRL2_hcic_enable_shift                        (30)
#define  PPOVERLAY_Display_Timing_CTRL2_lineod2_en_shift                         (29)
#define  PPOVERLAY_Display_Timing_CTRL2_pip_swap_en_shift                        (28)
#define  PPOVERLAY_Display_Timing_CTRL2_valc_en_shift                            (27)
#define  PPOVERLAY_Display_Timing_CTRL2_shpnr_line_mode_shift                    (24)
#define  PPOVERLAY_Display_Timing_CTRL2_pod_enable_shift                         (23)
#define  PPOVERLAY_Display_Timing_CTRL2_mplus_rgbw_en_shift                      (19)
#define  PPOVERLAY_Display_Timing_CTRL2_d2i3ddma_src_sel_shift                   (16)
#define  PPOVERLAY_Display_Timing_CTRL2_d2i3_drop_en_shift                       (15)
#define  PPOVERLAY_Display_Timing_CTRL2_rtk_dither_en_shift                      (8)
#define  PPOVERLAY_Display_Timing_CTRL2_a10_en_shift                             (7)
#define  PPOVERLAY_Display_Timing_CTRL2_orbit_timing_en_shift                    (6)
#define  PPOVERLAY_Display_Timing_CTRL2_dispd_lg_mplus_siw_rgbw_clk_en_shift     (4)
#define  PPOVERLAY_Display_Timing_CTRL2_frc2fsync_protection_shift               (3)
#define  PPOVERLAY_Display_Timing_CTRL2_frc2fsync_speedup_period_shift           (2)
#define  PPOVERLAY_Display_Timing_CTRL2_frc2fsync_speedup_en_shift               (1)
#define  PPOVERLAY_Display_Timing_CTRL2_frc2fsync_en_shift                       (0)
#define  PPOVERLAY_Display_Timing_CTRL2_lineod_en_mask                           (0x80000000)
#define  PPOVERLAY_Display_Timing_CTRL2_hcic_enable_mask                         (0x40000000)
#define  PPOVERLAY_Display_Timing_CTRL2_lineod2_en_mask                          (0x20000000)
#define  PPOVERLAY_Display_Timing_CTRL2_pip_swap_en_mask                         (0x10000000)
#define  PPOVERLAY_Display_Timing_CTRL2_valc_en_mask                             (0x08000000)
#define  PPOVERLAY_Display_Timing_CTRL2_shpnr_line_mode_mask                     (0x07000000)
#define  PPOVERLAY_Display_Timing_CTRL2_pod_enable_mask                          (0x00800000)
#define  PPOVERLAY_Display_Timing_CTRL2_mplus_rgbw_en_mask                       (0x00780000)
#define  PPOVERLAY_Display_Timing_CTRL2_d2i3ddma_src_sel_mask                    (0x00070000)
#define  PPOVERLAY_Display_Timing_CTRL2_d2i3_drop_en_mask                        (0x00008000)
#define  PPOVERLAY_Display_Timing_CTRL2_rtk_dither_en_mask                       (0x00000100)
#define  PPOVERLAY_Display_Timing_CTRL2_a10_en_mask                              (0x00000080)
#define  PPOVERLAY_Display_Timing_CTRL2_orbit_timing_en_mask                     (0x00000040)
#define  PPOVERLAY_Display_Timing_CTRL2_dispd_lg_mplus_siw_rgbw_clk_en_mask      (0x00000030)
#define  PPOVERLAY_Display_Timing_CTRL2_frc2fsync_protection_mask                (0x00000008)
#define  PPOVERLAY_Display_Timing_CTRL2_frc2fsync_speedup_period_mask            (0x00000004)
#define  PPOVERLAY_Display_Timing_CTRL2_frc2fsync_speedup_en_mask                (0x00000002)
#define  PPOVERLAY_Display_Timing_CTRL2_frc2fsync_en_mask                        (0x00000001)
#define  PPOVERLAY_Display_Timing_CTRL2_lineod_en(data)                          (0x80000000&((data)<<31))
#define  PPOVERLAY_Display_Timing_CTRL2_hcic_enable(data)                        (0x40000000&((data)<<30))
#define  PPOVERLAY_Display_Timing_CTRL2_lineod2_en(data)                         (0x20000000&((data)<<29))
#define  PPOVERLAY_Display_Timing_CTRL2_pip_swap_en(data)                        (0x10000000&((data)<<28))
#define  PPOVERLAY_Display_Timing_CTRL2_valc_en(data)                            (0x08000000&((data)<<27))
#define  PPOVERLAY_Display_Timing_CTRL2_shpnr_line_mode(data)                    (0x07000000&((data)<<24))
#define  PPOVERLAY_Display_Timing_CTRL2_pod_enable(data)                         (0x00800000&((data)<<23))
#define  PPOVERLAY_Display_Timing_CTRL2_mplus_rgbw_en(data)                      (0x00780000&((data)<<19))
#define  PPOVERLAY_Display_Timing_CTRL2_d2i3ddma_src_sel(data)                   (0x00070000&((data)<<16))
#define  PPOVERLAY_Display_Timing_CTRL2_d2i3_drop_en(data)                       (0x00008000&((data)<<15))
#define  PPOVERLAY_Display_Timing_CTRL2_rtk_dither_en(data)                      (0x00000100&((data)<<8))
#define  PPOVERLAY_Display_Timing_CTRL2_a10_en(data)                             (0x00000080&((data)<<7))
#define  PPOVERLAY_Display_Timing_CTRL2_orbit_timing_en(data)                    (0x00000040&((data)<<6))
#define  PPOVERLAY_Display_Timing_CTRL2_dispd_lg_mplus_siw_rgbw_clk_en(data)     (0x00000030&((data)<<4))
#define  PPOVERLAY_Display_Timing_CTRL2_frc2fsync_protection(data)               (0x00000008&((data)<<3))
#define  PPOVERLAY_Display_Timing_CTRL2_frc2fsync_speedup_period(data)           (0x00000004&((data)<<2))
#define  PPOVERLAY_Display_Timing_CTRL2_frc2fsync_speedup_en(data)               (0x00000002&((data)<<1))
#define  PPOVERLAY_Display_Timing_CTRL2_frc2fsync_en(data)                       (0x00000001&(data))
#define  PPOVERLAY_Display_Timing_CTRL2_get_lineod_en(data)                      ((0x80000000&(data))>>31)
#define  PPOVERLAY_Display_Timing_CTRL2_get_hcic_enable(data)                    ((0x40000000&(data))>>30)
#define  PPOVERLAY_Display_Timing_CTRL2_get_lineod2_en(data)                     ((0x20000000&(data))>>29)
#define  PPOVERLAY_Display_Timing_CTRL2_get_pip_swap_en(data)                    ((0x10000000&(data))>>28)
#define  PPOVERLAY_Display_Timing_CTRL2_get_valc_en(data)                        ((0x08000000&(data))>>27)
#define  PPOVERLAY_Display_Timing_CTRL2_get_shpnr_line_mode(data)                ((0x07000000&(data))>>24)
#define  PPOVERLAY_Display_Timing_CTRL2_get_pod_enable(data)                     ((0x00800000&(data))>>23)
#define  PPOVERLAY_Display_Timing_CTRL2_get_mplus_rgbw_en(data)                  ((0x00780000&(data))>>19)
#define  PPOVERLAY_Display_Timing_CTRL2_get_d2i3ddma_src_sel(data)               ((0x00070000&(data))>>16)
#define  PPOVERLAY_Display_Timing_CTRL2_get_d2i3_drop_en(data)                   ((0x00008000&(data))>>15)
#define  PPOVERLAY_Display_Timing_CTRL2_get_rtk_dither_en(data)                  ((0x00000100&(data))>>8)
#define  PPOVERLAY_Display_Timing_CTRL2_get_a10_en(data)                         ((0x00000080&(data))>>7)
#define  PPOVERLAY_Display_Timing_CTRL2_get_orbit_timing_en(data)                ((0x00000040&(data))>>6)
#define  PPOVERLAY_Display_Timing_CTRL2_get_dispd_lg_mplus_siw_rgbw_clk_en(data) ((0x00000030&(data))>>4)
#define  PPOVERLAY_Display_Timing_CTRL2_get_frc2fsync_protection(data)           ((0x00000008&(data))>>3)
#define  PPOVERLAY_Display_Timing_CTRL2_get_frc2fsync_speedup_period(data)       ((0x00000004&(data))>>2)
#define  PPOVERLAY_Display_Timing_CTRL2_get_frc2fsync_speedup_en(data)           ((0x00000002&(data))>>1)
#define  PPOVERLAY_Display_Timing_CTRL2_get_frc2fsync_en(data)                   (0x00000001&(data))

#define  PPOVERLAY_DH_Width                                                     0x18028008
#define  PPOVERLAY_DH_Width_reg_addr                                             "0xB8028008"
#define  PPOVERLAY_DH_Width_reg                                                  0xB8028008
#define  PPOVERLAY_DH_Width_inst_addr                                            "0x000B"
#define  set_PPOVERLAY_DH_Width_reg(data)                                        (*((volatile unsigned int*)PPOVERLAY_DH_Width_reg)=data)
#define  get_PPOVERLAY_DH_Width_reg                                              (*((volatile unsigned int*)PPOVERLAY_DH_Width_reg))
#define  PPOVERLAY_DH_Width_dh_width_shift                                       (0)
#define  PPOVERLAY_DH_Width_dh_width_mask                                        (0x000000FF)
#define  PPOVERLAY_DH_Width_dh_width(data)                                       (0x000000FF&(data))
#define  PPOVERLAY_DH_Width_get_dh_width(data)                                   (0x000000FF&(data))

#define  PPOVERLAY_DH_Total_Last_Line_Length                                    0x1802800C
#define  PPOVERLAY_DH_Total_Last_Line_Length_reg_addr                            "0xB802800C"
#define  PPOVERLAY_DH_Total_Last_Line_Length_reg                                 0xB802800C
#define  PPOVERLAY_DH_Total_Last_Line_Length_inst_addr                           "0x000C"
#define  set_PPOVERLAY_DH_Total_Last_Line_Length_reg(data)                       (*((volatile unsigned int*)PPOVERLAY_DH_Total_Last_Line_Length_reg)=data)
#define  get_PPOVERLAY_DH_Total_Last_Line_Length_reg                             (*((volatile unsigned int*)PPOVERLAY_DH_Total_Last_Line_Length_reg))
#define  PPOVERLAY_DH_Total_Last_Line_Length_dh_total_shift                      (16)
#define  PPOVERLAY_DH_Total_Last_Line_Length_dh_total_last_line_shift            (0)
#define  PPOVERLAY_DH_Total_Last_Line_Length_dh_total_mask                       (0x1FFF0000)
#define  PPOVERLAY_DH_Total_Last_Line_Length_dh_total_last_line_mask             (0x00001FFF)
#define  PPOVERLAY_DH_Total_Last_Line_Length_dh_total(data)                      (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_DH_Total_Last_Line_Length_dh_total_last_line(data)            (0x00001FFF&(data))
#define  PPOVERLAY_DH_Total_Last_Line_Length_get_dh_total(data)                  ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_DH_Total_Last_Line_Length_get_dh_total_last_line(data)        (0x00001FFF&(data))

#define  PPOVERLAY_DV_Length                                                    0x18028010
#define  PPOVERLAY_DV_Length_reg_addr                                            "0xB8028010"
#define  PPOVERLAY_DV_Length_reg                                                 0xB8028010
#define  PPOVERLAY_DV_Length_inst_addr                                           "0x000D"
#define  set_PPOVERLAY_DV_Length_reg(data)                                       (*((volatile unsigned int*)PPOVERLAY_DV_Length_reg)=data)
#define  get_PPOVERLAY_DV_Length_reg                                             (*((volatile unsigned int*)PPOVERLAY_DV_Length_reg))
#define  PPOVERLAY_DV_Length_dv_length_shift                                     (0)
#define  PPOVERLAY_DV_Length_dv_length_mask                                      (0x000000FF)
#define  PPOVERLAY_DV_Length_dv_length(data)                                     (0x000000FF&(data))
#define  PPOVERLAY_DV_Length_get_dv_length(data)                                 (0x000000FF&(data))

#define  PPOVERLAY_DV_total                                                     0x18028014
#define  PPOVERLAY_DV_total_reg_addr                                             "0xB8028014"
#define  PPOVERLAY_DV_total_reg                                                  0xB8028014
#define  PPOVERLAY_DV_total_inst_addr                                            "0x000E"
#define  set_PPOVERLAY_DV_total_reg(data)                                        (*((volatile unsigned int*)PPOVERLAY_DV_total_reg)=data)
#define  get_PPOVERLAY_DV_total_reg                                              (*((volatile unsigned int*)PPOVERLAY_DV_total_reg))
#define  PPOVERLAY_DV_total_dv_total_shift                                       (0)
#define  PPOVERLAY_DV_total_dv_total_mask                                        (0x00001FFF)
#define  PPOVERLAY_DV_total_dv_total(data)                                       (0x00001FFF&(data))
#define  PPOVERLAY_DV_total_get_dv_total(data)                                   (0x00001FFF&(data))

#define  PPOVERLAY_FRC2fsync_speedup_ctrl                                       0x18028018
#define  PPOVERLAY_FRC2fsync_speedup_ctrl_reg_addr                               "0xB8028018"
#define  PPOVERLAY_FRC2fsync_speedup_ctrl_reg                                    0xB8028018
#define  PPOVERLAY_FRC2fsync_speedup_ctrl_inst_addr                              "0x000F"
#define  set_PPOVERLAY_FRC2fsync_speedup_ctrl_reg(data)                          (*((volatile unsigned int*)PPOVERLAY_FRC2fsync_speedup_ctrl_reg)=data)
#define  get_PPOVERLAY_FRC2fsync_speedup_ctrl_reg                                (*((volatile unsigned int*)PPOVERLAY_FRC2fsync_speedup_ctrl_reg))
#define  PPOVERLAY_FRC2fsync_speedup_ctrl_frc2fsync_speedup_by_vtotal_en_shift   (31)
#define  PPOVERLAY_FRC2fsync_speedup_ctrl_speedup_dv_total_shift                 (0)
#define  PPOVERLAY_FRC2fsync_speedup_ctrl_frc2fsync_speedup_by_vtotal_en_mask    (0x80000000)
#define  PPOVERLAY_FRC2fsync_speedup_ctrl_speedup_dv_total_mask                  (0x00001FFF)
#define  PPOVERLAY_FRC2fsync_speedup_ctrl_frc2fsync_speedup_by_vtotal_en(data)   (0x80000000&((data)<<31))
#define  PPOVERLAY_FRC2fsync_speedup_ctrl_speedup_dv_total(data)                 (0x00001FFF&(data))
#define  PPOVERLAY_FRC2fsync_speedup_ctrl_get_frc2fsync_speedup_by_vtotal_en(data) ((0x80000000&(data))>>31)
#define  PPOVERLAY_FRC2fsync_speedup_ctrl_get_speedup_dv_total(data)             (0x00001FFF&(data))

#define  PPOVERLAY_PWM_predict_ctrl                                             0x1802801C
#define  PPOVERLAY_PWM_predict_ctrl_reg_addr                                     "0xB802801C"
#define  PPOVERLAY_PWM_predict_ctrl_reg                                          0xB802801C
#define  PPOVERLAY_PWM_predict_ctrl_inst_addr                                    "0x0010"
#define  set_PPOVERLAY_PWM_predict_ctrl_reg(data)                                (*((volatile unsigned int*)PPOVERLAY_PWM_predict_ctrl_reg)=data)
#define  get_PPOVERLAY_PWM_predict_ctrl_reg                                      (*((volatile unsigned int*)PPOVERLAY_PWM_predict_ctrl_reg))
#define  PPOVERLAY_PWM_predict_ctrl_pwm_predict_avg_delta_shift                  (16)
#define  PPOVERLAY_PWM_predict_ctrl_pwm_predict_delta_thr_shift                  (8)
#define  PPOVERLAY_PWM_predict_ctrl_pwm_predict_fsync_ok_shift                   (5)
#define  PPOVERLAY_PWM_predict_ctrl_pwm_predict_fsync_ok_event_ie_shift          (4)
#define  PPOVERLAY_PWM_predict_ctrl_pwm_predict_delta_error_shift                (3)
#define  PPOVERLAY_PWM_predict_ctrl_pwm_fsync_ok_delay_en_shift                  (2)
#define  PPOVERLAY_PWM_predict_ctrl_pwm_predict_sw_update_shift                  (1)
#define  PPOVERLAY_PWM_predict_ctrl_pwm_predict_en_shift                         (0)
#define  PPOVERLAY_PWM_predict_ctrl_pwm_predict_avg_delta_mask                   (0x1FFF0000)
#define  PPOVERLAY_PWM_predict_ctrl_pwm_predict_delta_thr_mask                   (0x0000FF00)
#define  PPOVERLAY_PWM_predict_ctrl_pwm_predict_fsync_ok_mask                    (0x00000020)
#define  PPOVERLAY_PWM_predict_ctrl_pwm_predict_fsync_ok_event_ie_mask           (0x00000010)
#define  PPOVERLAY_PWM_predict_ctrl_pwm_predict_delta_error_mask                 (0x00000008)
#define  PPOVERLAY_PWM_predict_ctrl_pwm_fsync_ok_delay_en_mask                   (0x00000004)
#define  PPOVERLAY_PWM_predict_ctrl_pwm_predict_sw_update_mask                   (0x00000002)
#define  PPOVERLAY_PWM_predict_ctrl_pwm_predict_en_mask                          (0x00000001)
#define  PPOVERLAY_PWM_predict_ctrl_pwm_predict_avg_delta(data)                  (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_PWM_predict_ctrl_pwm_predict_delta_thr(data)                  (0x0000FF00&((data)<<8))
#define  PPOVERLAY_PWM_predict_ctrl_pwm_predict_fsync_ok(data)                   (0x00000020&((data)<<5))
#define  PPOVERLAY_PWM_predict_ctrl_pwm_predict_fsync_ok_event_ie(data)          (0x00000010&((data)<<4))
#define  PPOVERLAY_PWM_predict_ctrl_pwm_predict_delta_error(data)                (0x00000008&((data)<<3))
#define  PPOVERLAY_PWM_predict_ctrl_pwm_fsync_ok_delay_en(data)                  (0x00000004&((data)<<2))
#define  PPOVERLAY_PWM_predict_ctrl_pwm_predict_sw_update(data)                  (0x00000002&((data)<<1))
#define  PPOVERLAY_PWM_predict_ctrl_pwm_predict_en(data)                         (0x00000001&(data))
#define  PPOVERLAY_PWM_predict_ctrl_get_pwm_predict_avg_delta(data)              ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_PWM_predict_ctrl_get_pwm_predict_delta_thr(data)              ((0x0000FF00&(data))>>8)
#define  PPOVERLAY_PWM_predict_ctrl_get_pwm_predict_fsync_ok(data)               ((0x00000020&(data))>>5)
#define  PPOVERLAY_PWM_predict_ctrl_get_pwm_predict_fsync_ok_event_ie(data)      ((0x00000010&(data))>>4)
#define  PPOVERLAY_PWM_predict_ctrl_get_pwm_predict_delta_error(data)            ((0x00000008&(data))>>3)
#define  PPOVERLAY_PWM_predict_ctrl_get_pwm_fsync_ok_delay_en(data)              ((0x00000004&(data))>>2)
#define  PPOVERLAY_PWM_predict_ctrl_get_pwm_predict_sw_update(data)              ((0x00000002&(data))>>1)
#define  PPOVERLAY_PWM_predict_ctrl_get_pwm_predict_en(data)                     (0x00000001&(data))

#define  PPOVERLAY_Display_Background_Color                                     0x18028020
#define  PPOVERLAY_Display_Background_Color_reg_addr                             "0xB8028020"
#define  PPOVERLAY_Display_Background_Color_reg                                  0xB8028020
#define  PPOVERLAY_Display_Background_Color_inst_addr                            "0x0011"
#define  set_PPOVERLAY_Display_Background_Color_reg(data)                        (*((volatile unsigned int*)PPOVERLAY_Display_Background_Color_reg)=data)
#define  get_PPOVERLAY_Display_Background_Color_reg                              (*((volatile unsigned int*)PPOVERLAY_Display_Background_Color_reg))
#define  PPOVERLAY_Display_Background_Color_d_bg_g_shift                         (16)
#define  PPOVERLAY_Display_Background_Color_d_bg_b_shift                         (0)
#define  PPOVERLAY_Display_Background_Color_d_bg_g_mask                          (0x3FFF0000)
#define  PPOVERLAY_Display_Background_Color_d_bg_b_mask                          (0x00003FFF)
#define  PPOVERLAY_Display_Background_Color_d_bg_g(data)                         (0x3FFF0000&((data)<<16))
#define  PPOVERLAY_Display_Background_Color_d_bg_b(data)                         (0x00003FFF&(data))
#define  PPOVERLAY_Display_Background_Color_get_d_bg_g(data)                     ((0x3FFF0000&(data))>>16)
#define  PPOVERLAY_Display_Background_Color_get_d_bg_b(data)                     (0x00003FFF&(data))

#define  PPOVERLAY_Display_Background_Color_2                                   0x18028024
#define  PPOVERLAY_Display_Background_Color_2_reg_addr                           "0xB8028024"
#define  PPOVERLAY_Display_Background_Color_2_reg                                0xB8028024
#define  PPOVERLAY_Display_Background_Color_2_inst_addr                          "0x0012"
#define  set_PPOVERLAY_Display_Background_Color_2_reg(data)                      (*((volatile unsigned int*)PPOVERLAY_Display_Background_Color_2_reg)=data)
#define  get_PPOVERLAY_Display_Background_Color_2_reg                            (*((volatile unsigned int*)PPOVERLAY_Display_Background_Color_2_reg))
#define  PPOVERLAY_Display_Background_Color_2_d_bg_r_shift                       (0)
#define  PPOVERLAY_Display_Background_Color_2_d_bg_r_mask                        (0x00003FFF)
#define  PPOVERLAY_Display_Background_Color_2_d_bg_r(data)                       (0x00003FFF&(data))
#define  PPOVERLAY_Display_Background_Color_2_get_d_bg_r(data)                   (0x00003FFF&(data))

#define  PPOVERLAY_Display_S2IP_Timing_Ctrl_0                                   0x1802802C
#define  PPOVERLAY_Display_S2IP_Timing_Ctrl_0_reg_addr                           "0xB802802C"
#define  PPOVERLAY_Display_S2IP_Timing_Ctrl_0_reg                                0xB802802C
#define  PPOVERLAY_Display_S2IP_Timing_Ctrl_0_inst_addr                          "0x0013"
#define  set_PPOVERLAY_Display_S2IP_Timing_Ctrl_0_reg(data)                      (*((volatile unsigned int*)PPOVERLAY_Display_S2IP_Timing_Ctrl_0_reg)=data)
#define  get_PPOVERLAY_Display_S2IP_Timing_Ctrl_0_reg                            (*((volatile unsigned int*)PPOVERLAY_Display_S2IP_Timing_Ctrl_0_reg))
#define  PPOVERLAY_Display_S2IP_Timing_Ctrl_0_mplus_vs_sel_shift                 (15)
#define  PPOVERLAY_Display_S2IP_Timing_Ctrl_0_mplus_vs_sta_shift                 (0)
#define  PPOVERLAY_Display_S2IP_Timing_Ctrl_0_mplus_vs_sel_mask                  (0x00008000)
#define  PPOVERLAY_Display_S2IP_Timing_Ctrl_0_mplus_vs_sta_mask                  (0x00001FFF)
#define  PPOVERLAY_Display_S2IP_Timing_Ctrl_0_mplus_vs_sel(data)                 (0x00008000&((data)<<15))
#define  PPOVERLAY_Display_S2IP_Timing_Ctrl_0_mplus_vs_sta(data)                 (0x00001FFF&(data))
#define  PPOVERLAY_Display_S2IP_Timing_Ctrl_0_get_mplus_vs_sel(data)             ((0x00008000&(data))>>15)
#define  PPOVERLAY_Display_S2IP_Timing_Ctrl_0_get_mplus_vs_sta(data)             (0x00001FFF&(data))

#define  PPOVERLAY_Measure_total_pixels_Result1                                 0x18028034
#define  PPOVERLAY_Measure_total_pixels_Result1_reg_addr                         "0xB8028034"
#define  PPOVERLAY_Measure_total_pixels_Result1_reg                              0xB8028034
#define  PPOVERLAY_Measure_total_pixels_Result1_inst_addr                        "0x0014"
#define  set_PPOVERLAY_Measure_total_pixels_Result1_reg(data)                    (*((volatile unsigned int*)PPOVERLAY_Measure_total_pixels_Result1_reg)=data)
#define  get_PPOVERLAY_Measure_total_pixels_Result1_reg                          (*((volatile unsigned int*)PPOVERLAY_Measure_total_pixels_Result1_reg))
#define  PPOVERLAY_Measure_total_pixels_Result1_measure_topixels_ctr_shift       (31)
#define  PPOVERLAY_Measure_total_pixels_Result1_measure_topixels_mode_shift      (30)
#define  PPOVERLAY_Measure_total_pixels_Result1_measure_topixels_2f_shift        (29)
#define  PPOVERLAY_Measure_total_pixels_Result1_total_pixels_first_cnt_shift     (0)
#define  PPOVERLAY_Measure_total_pixels_Result1_measure_topixels_ctr_mask        (0x80000000)
#define  PPOVERLAY_Measure_total_pixels_Result1_measure_topixels_mode_mask       (0x40000000)
#define  PPOVERLAY_Measure_total_pixels_Result1_measure_topixels_2f_mask         (0x20000000)
#define  PPOVERLAY_Measure_total_pixels_Result1_total_pixels_first_cnt_mask      (0x0FFFFFFF)
#define  PPOVERLAY_Measure_total_pixels_Result1_measure_topixels_ctr(data)       (0x80000000&((data)<<31))
#define  PPOVERLAY_Measure_total_pixels_Result1_measure_topixels_mode(data)      (0x40000000&((data)<<30))
#define  PPOVERLAY_Measure_total_pixels_Result1_measure_topixels_2f(data)        (0x20000000&((data)<<29))
#define  PPOVERLAY_Measure_total_pixels_Result1_total_pixels_first_cnt(data)     (0x0FFFFFFF&(data))
#define  PPOVERLAY_Measure_total_pixels_Result1_get_measure_topixels_ctr(data)   ((0x80000000&(data))>>31)
#define  PPOVERLAY_Measure_total_pixels_Result1_get_measure_topixels_mode(data)  ((0x40000000&(data))>>30)
#define  PPOVERLAY_Measure_total_pixels_Result1_get_measure_topixels_2f(data)    ((0x20000000&(data))>>29)
#define  PPOVERLAY_Measure_total_pixels_Result1_get_total_pixels_first_cnt(data) (0x0FFFFFFF&(data))

#define  PPOVERLAY_Measure_total_pixels_Result2                                 0x18028038
#define  PPOVERLAY_Measure_total_pixels_Result2_reg_addr                         "0xB8028038"
#define  PPOVERLAY_Measure_total_pixels_Result2_reg                              0xB8028038
#define  PPOVERLAY_Measure_total_pixels_Result2_inst_addr                        "0x0015"
#define  set_PPOVERLAY_Measure_total_pixels_Result2_reg(data)                    (*((volatile unsigned int*)PPOVERLAY_Measure_total_pixels_Result2_reg)=data)
#define  get_PPOVERLAY_Measure_total_pixels_Result2_reg                          (*((volatile unsigned int*)PPOVERLAY_Measure_total_pixels_Result2_reg))
#define  PPOVERLAY_Measure_total_pixels_Result2_total_pixels_second_cnt_shift    (0)
#define  PPOVERLAY_Measure_total_pixels_Result2_total_pixels_second_cnt_mask     (0x0FFFFFFF)
#define  PPOVERLAY_Measure_total_pixels_Result2_total_pixels_second_cnt(data)    (0x0FFFFFFF&(data))
#define  PPOVERLAY_Measure_total_pixels_Result2_get_total_pixels_second_cnt(data) (0x0FFFFFFF&(data))

#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1                     0x1802803C
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_reg_addr             "0xB802803C"
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_reg                  0xB802803C
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_inst_addr            "0x0016"
#define  set_PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_reg(data)        (*((volatile unsigned int*)PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_reg)=data)
#define  get_PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_reg              (*((volatile unsigned int*)PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_reg))
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_measure_dvllpixels_ctr_shift (31)
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_measure_dvllpixels_mode_shift (30)
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_measure_dvllpixels_2f_shift (29)
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_dv_total_value_first_shift (16)
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_last_line_value_first_shift (0)
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_measure_dvllpixels_ctr_mask (0x80000000)
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_measure_dvllpixels_mode_mask (0x40000000)
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_measure_dvllpixels_2f_mask (0x20000000)
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_dv_total_value_first_mask (0x1FFF0000)
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_last_line_value_first_mask (0x00001FFF)
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_measure_dvllpixels_ctr(data) (0x80000000&((data)<<31))
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_measure_dvllpixels_mode(data) (0x40000000&((data)<<30))
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_measure_dvllpixels_2f(data) (0x20000000&((data)<<29))
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_dv_total_value_first(data) (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_last_line_value_first(data) (0x00001FFF&(data))
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_get_measure_dvllpixels_ctr(data) ((0x80000000&(data))>>31)
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_get_measure_dvllpixels_mode(data) ((0x40000000&(data))>>30)
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_get_measure_dvllpixels_2f(data) ((0x20000000&(data))>>29)
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_get_dv_total_value_first(data) ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result1_get_last_line_value_first(data) (0x00001FFF&(data))

#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result2                     0x18028040
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result2_reg_addr             "0xB8028040"
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result2_reg                  0xB8028040
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result2_inst_addr            "0x0017"
#define  set_PPOVERLAY_Measure_dvtotal_last_line_pixels_Result2_reg(data)        (*((volatile unsigned int*)PPOVERLAY_Measure_dvtotal_last_line_pixels_Result2_reg)=data)
#define  get_PPOVERLAY_Measure_dvtotal_last_line_pixels_Result2_reg              (*((volatile unsigned int*)PPOVERLAY_Measure_dvtotal_last_line_pixels_Result2_reg))
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result2_dv_total_value_second_shift (16)
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result2_last_line_value_second_shift (0)
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result2_dv_total_value_second_mask (0x1FFF0000)
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result2_last_line_value_second_mask (0x00001FFF)
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result2_dv_total_value_second(data) (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result2_last_line_value_second(data) (0x00001FFF&(data))
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result2_get_dv_total_value_second(data) ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_Measure_dvtotal_last_line_pixels_Result2_get_last_line_value_second(data) (0x00001FFF&(data))

#define  PPOVERLAY_frc_to_frame_sync_den_end_ctrl                               0x18028044
#define  PPOVERLAY_frc_to_frame_sync_den_end_ctrl_reg_addr                       "0xB8028044"
#define  PPOVERLAY_frc_to_frame_sync_den_end_ctrl_reg                            0xB8028044
#define  PPOVERLAY_frc_to_frame_sync_den_end_ctrl_inst_addr                      "0x0018"
#define  set_PPOVERLAY_frc_to_frame_sync_den_end_ctrl_reg(data)                  (*((volatile unsigned int*)PPOVERLAY_frc_to_frame_sync_den_end_ctrl_reg)=data)
#define  get_PPOVERLAY_frc_to_frame_sync_den_end_ctrl_reg                        (*((volatile unsigned int*)PPOVERLAY_frc_to_frame_sync_den_end_ctrl_reg))
#define  PPOVERLAY_frc_to_frame_sync_den_end_ctrl_osd_split_dv_den_cnt_target_shift (16)
#define  PPOVERLAY_frc_to_frame_sync_den_end_ctrl_dv_den_cnt_target_shift        (0)
#define  PPOVERLAY_frc_to_frame_sync_den_end_ctrl_osd_split_dv_den_cnt_target_mask (0x1FFF0000)
#define  PPOVERLAY_frc_to_frame_sync_den_end_ctrl_dv_den_cnt_target_mask         (0x00001FFF)
#define  PPOVERLAY_frc_to_frame_sync_den_end_ctrl_osd_split_dv_den_cnt_target(data) (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_frc_to_frame_sync_den_end_ctrl_dv_den_cnt_target(data)        (0x00001FFF&(data))
#define  PPOVERLAY_frc_to_frame_sync_den_end_ctrl_get_osd_split_dv_den_cnt_target(data) ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_frc_to_frame_sync_den_end_ctrl_get_dv_den_cnt_target(data)    (0x00001FFF&(data))

#define  PPOVERLAY_DVS_Abnormal_Control                                         0x18028054
#define  PPOVERLAY_DVS_Abnormal_Control_reg_addr                                 "0xB8028054"
#define  PPOVERLAY_DVS_Abnormal_Control_reg                                      0xB8028054
#define  PPOVERLAY_DVS_Abnormal_Control_inst_addr                                "0x0019"
#define  set_PPOVERLAY_DVS_Abnormal_Control_reg(data)                            (*((volatile unsigned int*)PPOVERLAY_DVS_Abnormal_Control_reg)=data)
#define  get_PPOVERLAY_DVS_Abnormal_Control_reg                                  (*((volatile unsigned int*)PPOVERLAY_DVS_Abnormal_Control_reg))
#define  PPOVERLAY_DVS_Abnormal_Control_dvs_abnormal_long_en_shift               (31)
#define  PPOVERLAY_DVS_Abnormal_Control_dvs_abnormal_measure_en_shift            (30)
#define  PPOVERLAY_DVS_Abnormal_Control_dvs_abnormal_short_en_shift              (29)
#define  PPOVERLAY_DVS_Abnormal_Control_dvs_long_line_th_shift                   (16)
#define  PPOVERLAY_DVS_Abnormal_Control_dvs_short_line_th_shift                  (0)
#define  PPOVERLAY_DVS_Abnormal_Control_dvs_abnormal_long_en_mask                (0x80000000)
#define  PPOVERLAY_DVS_Abnormal_Control_dvs_abnormal_measure_en_mask             (0x40000000)
#define  PPOVERLAY_DVS_Abnormal_Control_dvs_abnormal_short_en_mask               (0x20000000)
#define  PPOVERLAY_DVS_Abnormal_Control_dvs_long_line_th_mask                    (0x1FFF0000)
#define  PPOVERLAY_DVS_Abnormal_Control_dvs_short_line_th_mask                   (0x00001FFF)
#define  PPOVERLAY_DVS_Abnormal_Control_dvs_abnormal_long_en(data)               (0x80000000&((data)<<31))
#define  PPOVERLAY_DVS_Abnormal_Control_dvs_abnormal_measure_en(data)            (0x40000000&((data)<<30))
#define  PPOVERLAY_DVS_Abnormal_Control_dvs_abnormal_short_en(data)              (0x20000000&((data)<<29))
#define  PPOVERLAY_DVS_Abnormal_Control_dvs_long_line_th(data)                   (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_DVS_Abnormal_Control_dvs_short_line_th(data)                  (0x00001FFF&(data))
#define  PPOVERLAY_DVS_Abnormal_Control_get_dvs_abnormal_long_en(data)           ((0x80000000&(data))>>31)
#define  PPOVERLAY_DVS_Abnormal_Control_get_dvs_abnormal_measure_en(data)        ((0x40000000&(data))>>30)
#define  PPOVERLAY_DVS_Abnormal_Control_get_dvs_abnormal_short_en(data)          ((0x20000000&(data))>>29)
#define  PPOVERLAY_DVS_Abnormal_Control_get_dvs_long_line_th(data)               ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_DVS_Abnormal_Control_get_dvs_short_line_th(data)              (0x00001FFF&(data))

#define  PPOVERLAY_I2D_CTRL_0                                                   0x18028070
#define  PPOVERLAY_I2D_CTRL_0_reg_addr                                           "0xB8028070"
#define  PPOVERLAY_I2D_CTRL_0_reg                                                0xB8028070
#define  PPOVERLAY_I2D_CTRL_0_inst_addr                                          "0x001A"
#define  set_PPOVERLAY_I2D_CTRL_0_reg(data)                                      (*((volatile unsigned int*)PPOVERLAY_I2D_CTRL_0_reg)=data)
#define  get_PPOVERLAY_I2D_CTRL_0_reg                                            (*((volatile unsigned int*)PPOVERLAY_I2D_CTRL_0_reg))
#define  PPOVERLAY_I2D_CTRL_0_i2d_special_dly_en_shift                           (31)
#define  PPOVERLAY_I2D_CTRL_0_i2d_special_dly_mode_shift                         (30)
#define  PPOVERLAY_I2D_CTRL_0_i2d_dly_new_mode_en_shift                          (29)
#define  PPOVERLAY_I2D_CTRL_0_i2d_dly_lower_shift                                (16)
#define  PPOVERLAY_I2D_CTRL_0_i2d_dly_n_line_mode_shift                          (13)
#define  PPOVERLAY_I2D_CTRL_0_i2d_dly_upper_shift                                (0)
#define  PPOVERLAY_I2D_CTRL_0_i2d_special_dly_en_mask                            (0x80000000)
#define  PPOVERLAY_I2D_CTRL_0_i2d_special_dly_mode_mask                          (0x40000000)
#define  PPOVERLAY_I2D_CTRL_0_i2d_dly_new_mode_en_mask                           (0x20000000)
#define  PPOVERLAY_I2D_CTRL_0_i2d_dly_lower_mask                                 (0x1FFF0000)
#define  PPOVERLAY_I2D_CTRL_0_i2d_dly_n_line_mode_mask                           (0x00006000)
#define  PPOVERLAY_I2D_CTRL_0_i2d_dly_upper_mask                                 (0x00001FFF)
#define  PPOVERLAY_I2D_CTRL_0_i2d_special_dly_en(data)                           (0x80000000&((data)<<31))
#define  PPOVERLAY_I2D_CTRL_0_i2d_special_dly_mode(data)                         (0x40000000&((data)<<30))
#define  PPOVERLAY_I2D_CTRL_0_i2d_dly_new_mode_en(data)                          (0x20000000&((data)<<29))
#define  PPOVERLAY_I2D_CTRL_0_i2d_dly_lower(data)                                (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_I2D_CTRL_0_i2d_dly_n_line_mode(data)                          (0x00006000&((data)<<13))
#define  PPOVERLAY_I2D_CTRL_0_i2d_dly_upper(data)                                (0x00001FFF&(data))
#define  PPOVERLAY_I2D_CTRL_0_get_i2d_special_dly_en(data)                       ((0x80000000&(data))>>31)
#define  PPOVERLAY_I2D_CTRL_0_get_i2d_special_dly_mode(data)                     ((0x40000000&(data))>>30)
#define  PPOVERLAY_I2D_CTRL_0_get_i2d_dly_new_mode_en(data)                      ((0x20000000&(data))>>29)
#define  PPOVERLAY_I2D_CTRL_0_get_i2d_dly_lower(data)                            ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_I2D_CTRL_0_get_i2d_dly_n_line_mode(data)                      ((0x00006000&(data))>>13)
#define  PPOVERLAY_I2D_CTRL_0_get_i2d_dly_upper(data)                            (0x00001FFF&(data))

#define  PPOVERLAY_I2D_CTRL_1                                                   0x18028074
#define  PPOVERLAY_I2D_CTRL_1_reg_addr                                           "0xB8028074"
#define  PPOVERLAY_I2D_CTRL_1_reg                                                0xB8028074
#define  PPOVERLAY_I2D_CTRL_1_inst_addr                                          "0x001B"
#define  set_PPOVERLAY_I2D_CTRL_1_reg(data)                                      (*((volatile unsigned int*)PPOVERLAY_I2D_CTRL_1_reg)=data)
#define  get_PPOVERLAY_I2D_CTRL_1_reg                                            (*((volatile unsigned int*)PPOVERLAY_I2D_CTRL_1_reg))
#define  PPOVERLAY_I2D_CTRL_1_i2d_dly_sub_line_max_shift                         (16)
#define  PPOVERLAY_I2D_CTRL_1_i2d_dly_add_line_max_shift                         (0)
#define  PPOVERLAY_I2D_CTRL_1_i2d_dly_sub_line_max_mask                          (0x1FFF0000)
#define  PPOVERLAY_I2D_CTRL_1_i2d_dly_add_line_max_mask                          (0x00001FFF)
#define  PPOVERLAY_I2D_CTRL_1_i2d_dly_sub_line_max(data)                         (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_I2D_CTRL_1_i2d_dly_add_line_max(data)                         (0x00001FFF&(data))
#define  PPOVERLAY_I2D_CTRL_1_get_i2d_dly_sub_line_max(data)                     ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_I2D_CTRL_1_get_i2d_dly_add_line_max(data)                     (0x00001FFF&(data))

#define  PPOVERLAY_I2D_MEAS_0                                                   0x18028078
#define  PPOVERLAY_I2D_MEAS_0_reg_addr                                           "0xB8028078"
#define  PPOVERLAY_I2D_MEAS_0_reg                                                0xB8028078
#define  PPOVERLAY_I2D_MEAS_0_inst_addr                                          "0x001C"
#define  set_PPOVERLAY_I2D_MEAS_0_reg(data)                                      (*((volatile unsigned int*)PPOVERLAY_I2D_MEAS_0_reg)=data)
#define  get_PPOVERLAY_I2D_MEAS_0_reg                                            (*((volatile unsigned int*)PPOVERLAY_I2D_MEAS_0_reg))
#define  PPOVERLAY_I2D_MEAS_0_i2d_tune_res0_shift                                (16)
#define  PPOVERLAY_I2D_MEAS_0_i2d_tune_res1_shift                                (0)
#define  PPOVERLAY_I2D_MEAS_0_i2d_tune_res0_mask                                 (0x1FFF0000)
#define  PPOVERLAY_I2D_MEAS_0_i2d_tune_res1_mask                                 (0x00001FFF)
#define  PPOVERLAY_I2D_MEAS_0_i2d_tune_res0(data)                                (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_I2D_MEAS_0_i2d_tune_res1(data)                                (0x00001FFF&(data))
#define  PPOVERLAY_I2D_MEAS_0_get_i2d_tune_res0(data)                            ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_I2D_MEAS_0_get_i2d_tune_res1(data)                            (0x00001FFF&(data))

#define  PPOVERLAY_I2D_MEAS_1                                                   0x1802807C
#define  PPOVERLAY_I2D_MEAS_1_reg_addr                                           "0xB802807C"
#define  PPOVERLAY_I2D_MEAS_1_reg                                                0xB802807C
#define  PPOVERLAY_I2D_MEAS_1_inst_addr                                          "0x001D"
#define  set_PPOVERLAY_I2D_MEAS_1_reg(data)                                      (*((volatile unsigned int*)PPOVERLAY_I2D_MEAS_1_reg)=data)
#define  get_PPOVERLAY_I2D_MEAS_1_reg                                            (*((volatile unsigned int*)PPOVERLAY_I2D_MEAS_1_reg))
#define  PPOVERLAY_I2D_MEAS_1_i2d_tune_res2_shift                                (16)
#define  PPOVERLAY_I2D_MEAS_1_i2d_tune_res3_shift                                (0)
#define  PPOVERLAY_I2D_MEAS_1_i2d_tune_res2_mask                                 (0x1FFF0000)
#define  PPOVERLAY_I2D_MEAS_1_i2d_tune_res3_mask                                 (0x00001FFF)
#define  PPOVERLAY_I2D_MEAS_1_i2d_tune_res2(data)                                (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_I2D_MEAS_1_i2d_tune_res3(data)                                (0x00001FFF&(data))
#define  PPOVERLAY_I2D_MEAS_1_get_i2d_tune_res2(data)                            ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_I2D_MEAS_1_get_i2d_tune_res3(data)                            (0x00001FFF&(data))

#define  PPOVERLAY_I2D_MEAS_2                                                   0x18028080
#define  PPOVERLAY_I2D_MEAS_2_reg_addr                                           "0xB8028080"
#define  PPOVERLAY_I2D_MEAS_2_reg                                                0xB8028080
#define  PPOVERLAY_I2D_MEAS_2_inst_addr                                          "0x001E"
#define  set_PPOVERLAY_I2D_MEAS_2_reg(data)                                      (*((volatile unsigned int*)PPOVERLAY_I2D_MEAS_2_reg)=data)
#define  get_PPOVERLAY_I2D_MEAS_2_reg                                            (*((volatile unsigned int*)PPOVERLAY_I2D_MEAS_2_reg))
#define  PPOVERLAY_I2D_MEAS_2_i2d_tune_res4_shift                                (16)
#define  PPOVERLAY_I2D_MEAS_2_i2d_tune_res5_shift                                (0)
#define  PPOVERLAY_I2D_MEAS_2_i2d_tune_res4_mask                                 (0x1FFF0000)
#define  PPOVERLAY_I2D_MEAS_2_i2d_tune_res5_mask                                 (0x00001FFF)
#define  PPOVERLAY_I2D_MEAS_2_i2d_tune_res4(data)                                (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_I2D_MEAS_2_i2d_tune_res5(data)                                (0x00001FFF&(data))
#define  PPOVERLAY_I2D_MEAS_2_get_i2d_tune_res4(data)                            ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_I2D_MEAS_2_get_i2d_tune_res5(data)                            (0x00001FFF&(data))

#define  PPOVERLAY_I2D_MEAS_3                                                   0x18028084
#define  PPOVERLAY_I2D_MEAS_3_reg_addr                                           "0xB8028084"
#define  PPOVERLAY_I2D_MEAS_3_reg                                                0xB8028084
#define  PPOVERLAY_I2D_MEAS_3_inst_addr                                          "0x001F"
#define  set_PPOVERLAY_I2D_MEAS_3_reg(data)                                      (*((volatile unsigned int*)PPOVERLAY_I2D_MEAS_3_reg)=data)
#define  get_PPOVERLAY_I2D_MEAS_3_reg                                            (*((volatile unsigned int*)PPOVERLAY_I2D_MEAS_3_reg))
#define  PPOVERLAY_I2D_MEAS_3_i2d_tune_res6_shift                                (16)
#define  PPOVERLAY_I2D_MEAS_3_i2d_tune_res7_shift                                (0)
#define  PPOVERLAY_I2D_MEAS_3_i2d_tune_res6_mask                                 (0x1FFF0000)
#define  PPOVERLAY_I2D_MEAS_3_i2d_tune_res7_mask                                 (0x00001FFF)
#define  PPOVERLAY_I2D_MEAS_3_i2d_tune_res6(data)                                (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_I2D_MEAS_3_i2d_tune_res7(data)                                (0x00001FFF&(data))
#define  PPOVERLAY_I2D_MEAS_3_get_i2d_tune_res6(data)                            ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_I2D_MEAS_3_get_i2d_tune_res7(data)                            (0x00001FFF&(data))

#define  PPOVERLAY_I2D_MEAS_phase                                               0x18028088
#define  PPOVERLAY_I2D_MEAS_phase_reg_addr                                       "0xB8028088"
#define  PPOVERLAY_I2D_MEAS_phase_reg                                            0xB8028088
#define  PPOVERLAY_I2D_MEAS_phase_inst_addr                                      "0x0020"
#define  set_PPOVERLAY_I2D_MEAS_phase_reg(data)                                  (*((volatile unsigned int*)PPOVERLAY_I2D_MEAS_phase_reg)=data)
#define  get_PPOVERLAY_I2D_MEAS_phase_reg                                        (*((volatile unsigned int*)PPOVERLAY_I2D_MEAS_phase_reg))
#define  PPOVERLAY_I2D_MEAS_phase_i2d_dly_ok_shift                               (31)
#define  PPOVERLAY_I2D_MEAS_phase_i2d_dly_status_shift                           (29)
#define  PPOVERLAY_I2D_MEAS_phase_i2d_dly_onerun_done_shift                      (28)
#define  PPOVERLAY_I2D_MEAS_phase_i2d_dly_onerun_done_int_en_shift               (27)
#define  PPOVERLAY_I2D_MEAS_phase_i2d_frame_index_shift                          (16)
#define  PPOVERLAY_I2D_MEAS_phase_i2d_phase_err_shift                            (0)
#define  PPOVERLAY_I2D_MEAS_phase_i2d_dly_ok_mask                                (0x80000000)
#define  PPOVERLAY_I2D_MEAS_phase_i2d_dly_status_mask                            (0x60000000)
#define  PPOVERLAY_I2D_MEAS_phase_i2d_dly_onerun_done_mask                       (0x10000000)
#define  PPOVERLAY_I2D_MEAS_phase_i2d_dly_onerun_done_int_en_mask                (0x08000000)
#define  PPOVERLAY_I2D_MEAS_phase_i2d_frame_index_mask                           (0x000F0000)
#define  PPOVERLAY_I2D_MEAS_phase_i2d_phase_err_mask                             (0x00001FFF)
#define  PPOVERLAY_I2D_MEAS_phase_i2d_dly_ok(data)                               (0x80000000&((data)<<31))
#define  PPOVERLAY_I2D_MEAS_phase_i2d_dly_status(data)                           (0x60000000&((data)<<29))
#define  PPOVERLAY_I2D_MEAS_phase_i2d_dly_onerun_done(data)                      (0x10000000&((data)<<28))
#define  PPOVERLAY_I2D_MEAS_phase_i2d_dly_onerun_done_int_en(data)               (0x08000000&((data)<<27))
#define  PPOVERLAY_I2D_MEAS_phase_i2d_frame_index(data)                          (0x000F0000&((data)<<16))
#define  PPOVERLAY_I2D_MEAS_phase_i2d_phase_err(data)                            (0x00001FFF&(data))
#define  PPOVERLAY_I2D_MEAS_phase_get_i2d_dly_ok(data)                           ((0x80000000&(data))>>31)
#define  PPOVERLAY_I2D_MEAS_phase_get_i2d_dly_status(data)                       ((0x60000000&(data))>>29)
#define  PPOVERLAY_I2D_MEAS_phase_get_i2d_dly_onerun_done(data)                  ((0x10000000&(data))>>28)
#define  PPOVERLAY_I2D_MEAS_phase_get_i2d_dly_onerun_done_int_en(data)           ((0x08000000&(data))>>27)
#define  PPOVERLAY_I2D_MEAS_phase_get_i2d_frame_index(data)                      ((0x000F0000&(data))>>16)
#define  PPOVERLAY_I2D_MEAS_phase_get_i2d_phase_err(data)                        (0x00001FFF&(data))

#define  PPOVERLAY_VRR_dvsync_dly_ctrl0                                         0x18028090
#define  PPOVERLAY_VRR_dvsync_dly_ctrl0_reg_addr                                 "0xB8028090"
#define  PPOVERLAY_VRR_dvsync_dly_ctrl0_reg                                      0xB8028090
#define  PPOVERLAY_VRR_dvsync_dly_ctrl0_inst_addr                                "0x0021"
#define  set_PPOVERLAY_VRR_dvsync_dly_ctrl0_reg(data)                            (*((volatile unsigned int*)PPOVERLAY_VRR_dvsync_dly_ctrl0_reg)=data)
#define  get_PPOVERLAY_VRR_dvsync_dly_ctrl0_reg                                  (*((volatile unsigned int*)PPOVERLAY_VRR_dvsync_dly_ctrl0_reg))
#define  PPOVERLAY_VRR_dvsync_dly_ctrl0_pwm_vs_dly_en_shift                      (31)
#define  PPOVERLAY_VRR_dvsync_dly_ctrl0_dvsync_dly_int_en_shift                  (30)
#define  PPOVERLAY_VRR_dvsync_dly_ctrl0_dvsync_dly_int_update_shift              (29)
#define  PPOVERLAY_VRR_dvsync_dly_ctrl0_dvsync_line_cnt_shift                    (0)
#define  PPOVERLAY_VRR_dvsync_dly_ctrl0_pwm_vs_dly_en_mask                       (0x80000000)
#define  PPOVERLAY_VRR_dvsync_dly_ctrl0_dvsync_dly_int_en_mask                   (0x40000000)
#define  PPOVERLAY_VRR_dvsync_dly_ctrl0_dvsync_dly_int_update_mask               (0x20000000)
#define  PPOVERLAY_VRR_dvsync_dly_ctrl0_dvsync_line_cnt_mask                     (0x00001FFF)
#define  PPOVERLAY_VRR_dvsync_dly_ctrl0_pwm_vs_dly_en(data)                      (0x80000000&((data)<<31))
#define  PPOVERLAY_VRR_dvsync_dly_ctrl0_dvsync_dly_int_en(data)                  (0x40000000&((data)<<30))
#define  PPOVERLAY_VRR_dvsync_dly_ctrl0_dvsync_dly_int_update(data)              (0x20000000&((data)<<29))
#define  PPOVERLAY_VRR_dvsync_dly_ctrl0_dvsync_line_cnt(data)                    (0x00001FFF&(data))
#define  PPOVERLAY_VRR_dvsync_dly_ctrl0_get_pwm_vs_dly_en(data)                  ((0x80000000&(data))>>31)
#define  PPOVERLAY_VRR_dvsync_dly_ctrl0_get_dvsync_dly_int_en(data)              ((0x40000000&(data))>>30)
#define  PPOVERLAY_VRR_dvsync_dly_ctrl0_get_dvsync_dly_int_update(data)          ((0x20000000&(data))>>29)
#define  PPOVERLAY_VRR_dvsync_dly_ctrl0_get_dvsync_line_cnt(data)                (0x00001FFF&(data))

#define  PPOVERLAY_VRR_dvsync_dly_ctrl1                                         0x18028094
#define  PPOVERLAY_VRR_dvsync_dly_ctrl1_reg_addr                                 "0xB8028094"
#define  PPOVERLAY_VRR_dvsync_dly_ctrl1_reg                                      0xB8028094
#define  PPOVERLAY_VRR_dvsync_dly_ctrl1_inst_addr                                "0x0022"
#define  set_PPOVERLAY_VRR_dvsync_dly_ctrl1_reg(data)                            (*((volatile unsigned int*)PPOVERLAY_VRR_dvsync_dly_ctrl1_reg)=data)
#define  get_PPOVERLAY_VRR_dvsync_dly_ctrl1_reg                                  (*((volatile unsigned int*)PPOVERLAY_VRR_dvsync_dly_ctrl1_reg))
#define  PPOVERLAY_VRR_dvsync_dly_ctrl1_pwm_int_dly_shift                        (16)
#define  PPOVERLAY_VRR_dvsync_dly_ctrl1_pwm_vs_dly_shift                         (0)
#define  PPOVERLAY_VRR_dvsync_dly_ctrl1_pwm_int_dly_mask                         (0xFFFF0000)
#define  PPOVERLAY_VRR_dvsync_dly_ctrl1_pwm_vs_dly_mask                          (0x0000FFFF)
#define  PPOVERLAY_VRR_dvsync_dly_ctrl1_pwm_int_dly(data)                        (0xFFFF0000&((data)<<16))
#define  PPOVERLAY_VRR_dvsync_dly_ctrl1_pwm_vs_dly(data)                         (0x0000FFFF&(data))
#define  PPOVERLAY_VRR_dvsync_dly_ctrl1_get_pwm_int_dly(data)                    ((0xFFFF0000&(data))>>16)
#define  PPOVERLAY_VRR_dvsync_dly_ctrl1_get_pwm_vs_dly(data)                     (0x0000FFFF&(data))

#define  PPOVERLAY_DTG_dclk_detect                                              0x180280E0
#define  PPOVERLAY_DTG_dclk_detect_reg_addr                                      "0xB80280E0"
#define  PPOVERLAY_DTG_dclk_detect_reg                                           0xB80280E0
#define  PPOVERLAY_DTG_dclk_detect_inst_addr                                     "0x0023"
#define  set_PPOVERLAY_DTG_dclk_detect_reg(data)                                 (*((volatile unsigned int*)PPOVERLAY_DTG_dclk_detect_reg)=data)
#define  get_PPOVERLAY_DTG_dclk_detect_reg                                       (*((volatile unsigned int*)PPOVERLAY_DTG_dclk_detect_reg))
#define  PPOVERLAY_DTG_dclk_detect_dclk_det_en_shift                             (31)
#define  PPOVERLAY_DTG_dclk_detect_dclk_cnt_max_min_reset_shift                  (30)
#define  PPOVERLAY_DTG_dclk_detect_dclk_n_cnt_shift                              (0)
#define  PPOVERLAY_DTG_dclk_detect_dclk_det_en_mask                              (0x80000000)
#define  PPOVERLAY_DTG_dclk_detect_dclk_cnt_max_min_reset_mask                   (0x40000000)
#define  PPOVERLAY_DTG_dclk_detect_dclk_n_cnt_mask                               (0x0000FFFF)
#define  PPOVERLAY_DTG_dclk_detect_dclk_det_en(data)                             (0x80000000&((data)<<31))
#define  PPOVERLAY_DTG_dclk_detect_dclk_cnt_max_min_reset(data)                  (0x40000000&((data)<<30))
#define  PPOVERLAY_DTG_dclk_detect_dclk_n_cnt(data)                              (0x0000FFFF&(data))
#define  PPOVERLAY_DTG_dclk_detect_get_dclk_det_en(data)                         ((0x80000000&(data))>>31)
#define  PPOVERLAY_DTG_dclk_detect_get_dclk_cnt_max_min_reset(data)              ((0x40000000&(data))>>30)
#define  PPOVERLAY_DTG_dclk_detect_get_dclk_n_cnt(data)                          (0x0000FFFF&(data))

#define  PPOVERLAY_DTG_dclk_detect_max_min                                      0x180280E4
#define  PPOVERLAY_DTG_dclk_detect_max_min_reg_addr                              "0xB80280E4"
#define  PPOVERLAY_DTG_dclk_detect_max_min_reg                                   0xB80280E4
#define  PPOVERLAY_DTG_dclk_detect_max_min_inst_addr                             "0x0024"
#define  set_PPOVERLAY_DTG_dclk_detect_max_min_reg(data)                         (*((volatile unsigned int*)PPOVERLAY_DTG_dclk_detect_max_min_reg)=data)
#define  get_PPOVERLAY_DTG_dclk_detect_max_min_reg                               (*((volatile unsigned int*)PPOVERLAY_DTG_dclk_detect_max_min_reg))
#define  PPOVERLAY_DTG_dclk_detect_max_min_max_dclk_n_cnt_shift                  (16)
#define  PPOVERLAY_DTG_dclk_detect_max_min_min_dclk_n_cnt_shift                  (0)
#define  PPOVERLAY_DTG_dclk_detect_max_min_max_dclk_n_cnt_mask                   (0xFFFF0000)
#define  PPOVERLAY_DTG_dclk_detect_max_min_min_dclk_n_cnt_mask                   (0x0000FFFF)
#define  PPOVERLAY_DTG_dclk_detect_max_min_max_dclk_n_cnt(data)                  (0xFFFF0000&((data)<<16))
#define  PPOVERLAY_DTG_dclk_detect_max_min_min_dclk_n_cnt(data)                  (0x0000FFFF&(data))
#define  PPOVERLAY_DTG_dclk_detect_max_min_get_max_dclk_n_cnt(data)              ((0xFFFF0000&(data))>>16)
#define  PPOVERLAY_DTG_dclk_detect_max_min_get_min_dclk_n_cnt(data)              (0x0000FFFF&(data))

#define  PPOVERLAY_DTG_ie_2                                                     0x180280D0
#define  PPOVERLAY_DTG_ie_2_reg_addr                                             "0xB80280D0"
#define  PPOVERLAY_DTG_ie_2_reg                                                  0xB80280D0
#define  PPOVERLAY_DTG_ie_2_inst_addr                                            "0x0025"
#define  set_PPOVERLAY_DTG_ie_2_reg(data)                                        (*((volatile unsigned int*)PPOVERLAY_DTG_ie_2_reg)=data)
#define  get_PPOVERLAY_DTG_ie_2_reg                                              (*((volatile unsigned int*)PPOVERLAY_DTG_ie_2_reg))
#define  PPOVERLAY_DTG_ie_2_dtg_ie_2_shift                                       (31)
#define  PPOVERLAY_DTG_ie_2_ie_fll_track_unlock_2_shift                          (30)
#define  PPOVERLAY_DTG_ie_2_osddtgv_den_sta_event_ie_2_shift                     (23)
#define  PPOVERLAY_DTG_ie_2_osddtgv_den_end_event_ie_2_shift                     (22)
#define  PPOVERLAY_DTG_ie_2_disp_frc2fsync_event_ie_2_shift                      (21)
#define  PPOVERLAY_DTG_ie_2_kiwi_den_phase_error_ie_2_shift                      (20)
#define  PPOVERLAY_DTG_ie_2_kiwi_dvs_phase_error_ie_2_shift                      (19)
#define  PPOVERLAY_DTG_ie_2_memcdtgv_den_sta_event_ie_2_shift                    (18)
#define  PPOVERLAY_DTG_ie_2_memcdtgv_den_end_event_ie_2_shift                    (17)
#define  PPOVERLAY_DTG_ie_2_d_counter_dvs_ie_2_shift                             (16)
#define  PPOVERLAY_DTG_ie_2_dvs_long_event_2_shift                               (14)
#define  PPOVERLAY_DTG_ie_2_dvs_short_event_2_shift                              (13)
#define  PPOVERLAY_DTG_ie_2_dtg_vlc_ie_2_shift                                   (4)
#define  PPOVERLAY_DTG_ie_2_sv_den_sta_event_ie_2_shift                          (3)
#define  PPOVERLAY_DTG_ie_2_sv_den_end_event_ie_2_shift                          (2)
#define  PPOVERLAY_DTG_ie_2_mv_den_sta_event_ie_2_shift                          (1)
#define  PPOVERLAY_DTG_ie_2_mv_den_end_event_ie_2_shift                          (0)
#define  PPOVERLAY_DTG_ie_2_dtg_ie_2_mask                                        (0x80000000)
#define  PPOVERLAY_DTG_ie_2_ie_fll_track_unlock_2_mask                           (0x40000000)
#define  PPOVERLAY_DTG_ie_2_osddtgv_den_sta_event_ie_2_mask                      (0x00800000)
#define  PPOVERLAY_DTG_ie_2_osddtgv_den_end_event_ie_2_mask                      (0x00400000)
#define  PPOVERLAY_DTG_ie_2_disp_frc2fsync_event_ie_2_mask                       (0x00200000)
#define  PPOVERLAY_DTG_ie_2_kiwi_den_phase_error_ie_2_mask                       (0x00100000)
#define  PPOVERLAY_DTG_ie_2_kiwi_dvs_phase_error_ie_2_mask                       (0x00080000)
#define  PPOVERLAY_DTG_ie_2_memcdtgv_den_sta_event_ie_2_mask                     (0x00040000)
#define  PPOVERLAY_DTG_ie_2_memcdtgv_den_end_event_ie_2_mask                     (0x00020000)
#define  PPOVERLAY_DTG_ie_2_d_counter_dvs_ie_2_mask                              (0x00010000)
#define  PPOVERLAY_DTG_ie_2_dvs_long_event_2_mask                                (0x00004000)
#define  PPOVERLAY_DTG_ie_2_dvs_short_event_2_mask                               (0x00002000)
#define  PPOVERLAY_DTG_ie_2_dtg_vlc_ie_2_mask                                    (0x00000010)
#define  PPOVERLAY_DTG_ie_2_sv_den_sta_event_ie_2_mask                           (0x00000008)
#define  PPOVERLAY_DTG_ie_2_sv_den_end_event_ie_2_mask                           (0x00000004)
#define  PPOVERLAY_DTG_ie_2_mv_den_sta_event_ie_2_mask                           (0x00000002)
#define  PPOVERLAY_DTG_ie_2_mv_den_end_event_ie_2_mask                           (0x00000001)
#define  PPOVERLAY_DTG_ie_2_dtg_ie_2(data)                                       (0x80000000&((data)<<31))
#define  PPOVERLAY_DTG_ie_2_ie_fll_track_unlock_2(data)                          (0x40000000&((data)<<30))
#define  PPOVERLAY_DTG_ie_2_osddtgv_den_sta_event_ie_2(data)                     (0x00800000&((data)<<23))
#define  PPOVERLAY_DTG_ie_2_osddtgv_den_end_event_ie_2(data)                     (0x00400000&((data)<<22))
#define  PPOVERLAY_DTG_ie_2_disp_frc2fsync_event_ie_2(data)                      (0x00200000&((data)<<21))
#define  PPOVERLAY_DTG_ie_2_kiwi_den_phase_error_ie_2(data)                      (0x00100000&((data)<<20))
#define  PPOVERLAY_DTG_ie_2_kiwi_dvs_phase_error_ie_2(data)                      (0x00080000&((data)<<19))
#define  PPOVERLAY_DTG_ie_2_memcdtgv_den_sta_event_ie_2(data)                    (0x00040000&((data)<<18))
#define  PPOVERLAY_DTG_ie_2_memcdtgv_den_end_event_ie_2(data)                    (0x00020000&((data)<<17))
#define  PPOVERLAY_DTG_ie_2_d_counter_dvs_ie_2(data)                             (0x00010000&((data)<<16))
#define  PPOVERLAY_DTG_ie_2_dvs_long_event_2(data)                               (0x00004000&((data)<<14))
#define  PPOVERLAY_DTG_ie_2_dvs_short_event_2(data)                              (0x00002000&((data)<<13))
#define  PPOVERLAY_DTG_ie_2_dtg_vlc_ie_2(data)                                   (0x00000010&((data)<<4))
#define  PPOVERLAY_DTG_ie_2_sv_den_sta_event_ie_2(data)                          (0x00000008&((data)<<3))
#define  PPOVERLAY_DTG_ie_2_sv_den_end_event_ie_2(data)                          (0x00000004&((data)<<2))
#define  PPOVERLAY_DTG_ie_2_mv_den_sta_event_ie_2(data)                          (0x00000002&((data)<<1))
#define  PPOVERLAY_DTG_ie_2_mv_den_end_event_ie_2(data)                          (0x00000001&(data))
#define  PPOVERLAY_DTG_ie_2_get_dtg_ie_2(data)                                   ((0x80000000&(data))>>31)
#define  PPOVERLAY_DTG_ie_2_get_ie_fll_track_unlock_2(data)                      ((0x40000000&(data))>>30)
#define  PPOVERLAY_DTG_ie_2_get_osddtgv_den_sta_event_ie_2(data)                 ((0x00800000&(data))>>23)
#define  PPOVERLAY_DTG_ie_2_get_osddtgv_den_end_event_ie_2(data)                 ((0x00400000&(data))>>22)
#define  PPOVERLAY_DTG_ie_2_get_disp_frc2fsync_event_ie_2(data)                  ((0x00200000&(data))>>21)
#define  PPOVERLAY_DTG_ie_2_get_kiwi_den_phase_error_ie_2(data)                  ((0x00100000&(data))>>20)
#define  PPOVERLAY_DTG_ie_2_get_kiwi_dvs_phase_error_ie_2(data)                  ((0x00080000&(data))>>19)
#define  PPOVERLAY_DTG_ie_2_get_memcdtgv_den_sta_event_ie_2(data)                ((0x00040000&(data))>>18)
#define  PPOVERLAY_DTG_ie_2_get_memcdtgv_den_end_event_ie_2(data)                ((0x00020000&(data))>>17)
#define  PPOVERLAY_DTG_ie_2_get_d_counter_dvs_ie_2(data)                         ((0x00010000&(data))>>16)
#define  PPOVERLAY_DTG_ie_2_get_dvs_long_event_2(data)                           ((0x00004000&(data))>>14)
#define  PPOVERLAY_DTG_ie_2_get_dvs_short_event_2(data)                          ((0x00002000&(data))>>13)
#define  PPOVERLAY_DTG_ie_2_get_dtg_vlc_ie_2(data)                               ((0x00000010&(data))>>4)
#define  PPOVERLAY_DTG_ie_2_get_sv_den_sta_event_ie_2(data)                      ((0x00000008&(data))>>3)
#define  PPOVERLAY_DTG_ie_2_get_sv_den_end_event_ie_2(data)                      ((0x00000004&(data))>>2)
#define  PPOVERLAY_DTG_ie_2_get_mv_den_sta_event_ie_2(data)                      ((0x00000002&(data))>>1)
#define  PPOVERLAY_DTG_ie_2_get_mv_den_end_event_ie_2(data)                      (0x00000001&(data))

#define  PPOVERLAY_DTG_pending_status_2                                         0x180280D4
#define  PPOVERLAY_DTG_pending_status_2_reg_addr                                 "0xB80280D4"
#define  PPOVERLAY_DTG_pending_status_2_reg                                      0xB80280D4
#define  PPOVERLAY_DTG_pending_status_2_inst_addr                                "0x0026"
#define  set_PPOVERLAY_DTG_pending_status_2_reg(data)                            (*((volatile unsigned int*)PPOVERLAY_DTG_pending_status_2_reg)=data)
#define  get_PPOVERLAY_DTG_pending_status_2_reg                                  (*((volatile unsigned int*)PPOVERLAY_DTG_pending_status_2_reg))
#define  PPOVERLAY_DTG_pending_status_2_osddtgv_den_sta_event_2_shift            (23)
#define  PPOVERLAY_DTG_pending_status_2_osddtgv_den_end_event_2_shift            (22)
#define  PPOVERLAY_DTG_pending_status_2_disp_frc2fsync_event_2_shift             (21)
#define  PPOVERLAY_DTG_pending_status_2_kiwi_den_phase_error_irq_2_shift         (20)
#define  PPOVERLAY_DTG_pending_status_2_kiwi_dvs_phase_error_irq_2_shift         (19)
#define  PPOVERLAY_DTG_pending_status_2_memcdtgv_den_sta_event_2_shift           (18)
#define  PPOVERLAY_DTG_pending_status_2_memcdtgv_den_end_event_2_shift           (17)
#define  PPOVERLAY_DTG_pending_status_2_d_counter_dvs_irq_2_shift                (16)
#define  PPOVERLAY_DTG_pending_status_2_dvs_long_2_shift                         (14)
#define  PPOVERLAY_DTG_pending_status_2_dvs_short_2_shift                        (13)
#define  PPOVERLAY_DTG_pending_status_2_dtg_vlc_status_2_shift                   (4)
#define  PPOVERLAY_DTG_pending_status_2_sv_den_sta_event_2_shift                 (3)
#define  PPOVERLAY_DTG_pending_status_2_sv_den_end_event_2_shift                 (2)
#define  PPOVERLAY_DTG_pending_status_2_mv_den_sta_event_2_shift                 (1)
#define  PPOVERLAY_DTG_pending_status_2_mv_den_end_event_2_shift                 (0)
#define  PPOVERLAY_DTG_pending_status_2_osddtgv_den_sta_event_2_mask             (0x00800000)
#define  PPOVERLAY_DTG_pending_status_2_osddtgv_den_end_event_2_mask             (0x00400000)
#define  PPOVERLAY_DTG_pending_status_2_disp_frc2fsync_event_2_mask              (0x00200000)
#define  PPOVERLAY_DTG_pending_status_2_kiwi_den_phase_error_irq_2_mask          (0x00100000)
#define  PPOVERLAY_DTG_pending_status_2_kiwi_dvs_phase_error_irq_2_mask          (0x00080000)
#define  PPOVERLAY_DTG_pending_status_2_memcdtgv_den_sta_event_2_mask            (0x00040000)
#define  PPOVERLAY_DTG_pending_status_2_memcdtgv_den_end_event_2_mask            (0x00020000)
#define  PPOVERLAY_DTG_pending_status_2_d_counter_dvs_irq_2_mask                 (0x00010000)
#define  PPOVERLAY_DTG_pending_status_2_dvs_long_2_mask                          (0x00004000)
#define  PPOVERLAY_DTG_pending_status_2_dvs_short_2_mask                         (0x00002000)
#define  PPOVERLAY_DTG_pending_status_2_dtg_vlc_status_2_mask                    (0x00000010)
#define  PPOVERLAY_DTG_pending_status_2_sv_den_sta_event_2_mask                  (0x00000008)
#define  PPOVERLAY_DTG_pending_status_2_sv_den_end_event_2_mask                  (0x00000004)
#define  PPOVERLAY_DTG_pending_status_2_mv_den_sta_event_2_mask                  (0x00000002)
#define  PPOVERLAY_DTG_pending_status_2_mv_den_end_event_2_mask                  (0x00000001)
#define  PPOVERLAY_DTG_pending_status_2_osddtgv_den_sta_event_2(data)            (0x00800000&((data)<<23))
#define  PPOVERLAY_DTG_pending_status_2_osddtgv_den_end_event_2(data)            (0x00400000&((data)<<22))
#define  PPOVERLAY_DTG_pending_status_2_disp_frc2fsync_event_2(data)             (0x00200000&((data)<<21))
#define  PPOVERLAY_DTG_pending_status_2_kiwi_den_phase_error_irq_2(data)         (0x00100000&((data)<<20))
#define  PPOVERLAY_DTG_pending_status_2_kiwi_dvs_phase_error_irq_2(data)         (0x00080000&((data)<<19))
#define  PPOVERLAY_DTG_pending_status_2_memcdtgv_den_sta_event_2(data)           (0x00040000&((data)<<18))
#define  PPOVERLAY_DTG_pending_status_2_memcdtgv_den_end_event_2(data)           (0x00020000&((data)<<17))
#define  PPOVERLAY_DTG_pending_status_2_d_counter_dvs_irq_2(data)                (0x00010000&((data)<<16))
#define  PPOVERLAY_DTG_pending_status_2_dvs_long_2(data)                         (0x00004000&((data)<<14))
#define  PPOVERLAY_DTG_pending_status_2_dvs_short_2(data)                        (0x00002000&((data)<<13))
#define  PPOVERLAY_DTG_pending_status_2_dtg_vlc_status_2(data)                   (0x00000010&((data)<<4))
#define  PPOVERLAY_DTG_pending_status_2_sv_den_sta_event_2(data)                 (0x00000008&((data)<<3))
#define  PPOVERLAY_DTG_pending_status_2_sv_den_end_event_2(data)                 (0x00000004&((data)<<2))
#define  PPOVERLAY_DTG_pending_status_2_mv_den_sta_event_2(data)                 (0x00000002&((data)<<1))
#define  PPOVERLAY_DTG_pending_status_2_mv_den_end_event_2(data)                 (0x00000001&(data))
#define  PPOVERLAY_DTG_pending_status_2_get_osddtgv_den_sta_event_2(data)        ((0x00800000&(data))>>23)
#define  PPOVERLAY_DTG_pending_status_2_get_osddtgv_den_end_event_2(data)        ((0x00400000&(data))>>22)
#define  PPOVERLAY_DTG_pending_status_2_get_disp_frc2fsync_event_2(data)         ((0x00200000&(data))>>21)
#define  PPOVERLAY_DTG_pending_status_2_get_kiwi_den_phase_error_irq_2(data)     ((0x00100000&(data))>>20)
#define  PPOVERLAY_DTG_pending_status_2_get_kiwi_dvs_phase_error_irq_2(data)     ((0x00080000&(data))>>19)
#define  PPOVERLAY_DTG_pending_status_2_get_memcdtgv_den_sta_event_2(data)       ((0x00040000&(data))>>18)
#define  PPOVERLAY_DTG_pending_status_2_get_memcdtgv_den_end_event_2(data)       ((0x00020000&(data))>>17)
#define  PPOVERLAY_DTG_pending_status_2_get_d_counter_dvs_irq_2(data)            ((0x00010000&(data))>>16)
#define  PPOVERLAY_DTG_pending_status_2_get_dvs_long_2(data)                     ((0x00004000&(data))>>14)
#define  PPOVERLAY_DTG_pending_status_2_get_dvs_short_2(data)                    ((0x00002000&(data))>>13)
#define  PPOVERLAY_DTG_pending_status_2_get_dtg_vlc_status_2(data)               ((0x00000010&(data))>>4)
#define  PPOVERLAY_DTG_pending_status_2_get_sv_den_sta_event_2(data)             ((0x00000008&(data))>>3)
#define  PPOVERLAY_DTG_pending_status_2_get_sv_den_end_event_2(data)             ((0x00000004&(data))>>2)
#define  PPOVERLAY_DTG_pending_status_2_get_mv_den_sta_event_2(data)             ((0x00000002&(data))>>1)
#define  PPOVERLAY_DTG_pending_status_2_get_mv_den_end_event_2(data)             (0x00000001&(data))

#define  PPOVERLAY_DTG_ie                                                       0x180280F0
#define  PPOVERLAY_DTG_ie_reg_addr                                               "0xB80280F0"
#define  PPOVERLAY_DTG_ie_reg                                                    0xB80280F0
#define  PPOVERLAY_DTG_ie_inst_addr                                              "0x0027"
#define  set_PPOVERLAY_DTG_ie_reg(data)                                          (*((volatile unsigned int*)PPOVERLAY_DTG_ie_reg)=data)
#define  get_PPOVERLAY_DTG_ie_reg                                                (*((volatile unsigned int*)PPOVERLAY_DTG_ie_reg))
#define  PPOVERLAY_DTG_ie_dtg_ie_shift                                           (31)
#define  PPOVERLAY_DTG_ie_ie_fll_track_unlock_shift                              (30)
#define  PPOVERLAY_DTG_ie_osddtgv_den_sta_event_ie_shift                         (23)
#define  PPOVERLAY_DTG_ie_osddtgv_den_end_event_ie_shift                         (22)
#define  PPOVERLAY_DTG_ie_disp_frc2fsync_event_ie_shift                          (21)
#define  PPOVERLAY_DTG_ie_kiwi_den_phase_error_ie_shift                          (20)
#define  PPOVERLAY_DTG_ie_kiwi_dvs_phase_error_ie_shift                          (19)
#define  PPOVERLAY_DTG_ie_memcdtgv_den_sta_event_ie_shift                        (18)
#define  PPOVERLAY_DTG_ie_memcdtgv_den_end_event_ie_shift                        (17)
#define  PPOVERLAY_DTG_ie_d_counter_dvs_ie_shift                                 (16)
#define  PPOVERLAY_DTG_ie_dvs_long_event_shift                                   (14)
#define  PPOVERLAY_DTG_ie_dvs_short_event_shift                                  (13)
#define  PPOVERLAY_DTG_ie_fll_exit_irq_en_shift                                  (12)
#define  PPOVERLAY_DTG_ie_fix_last_line_ivs_too_close_event_ie_shift             (11)
#define  PPOVERLAY_DTG_ie_fix_last_line_no_ivs_event_ie_shift                    (10)
#define  PPOVERLAY_DTG_ie_fix_last_line_less_than_th_event_ie_shift              (9)
#define  PPOVERLAY_DTG_ie_fix_last_line_more_than_th_event_ie_shift              (8)
#define  PPOVERLAY_DTG_ie_fix_last_line_less_event_ie_shift                      (7)
#define  PPOVERLAY_DTG_ie_fix_last_line_more_event_ie_shift                      (6)
#define  PPOVERLAY_DTG_ie_auto_switch_x_event_ie_shift                           (5)
#define  PPOVERLAY_DTG_ie_dtg_vlc_ie_shift                                       (4)
#define  PPOVERLAY_DTG_ie_sv_den_sta_event_ie_shift                              (3)
#define  PPOVERLAY_DTG_ie_sv_den_end_event_ie_shift                              (2)
#define  PPOVERLAY_DTG_ie_mv_den_sta_event_ie_shift                              (1)
#define  PPOVERLAY_DTG_ie_mv_den_end_event_ie_shift                              (0)
#define  PPOVERLAY_DTG_ie_dtg_ie_mask                                            (0x80000000)
#define  PPOVERLAY_DTG_ie_ie_fll_track_unlock_mask                               (0x40000000)
#define  PPOVERLAY_DTG_ie_osddtgv_den_sta_event_ie_mask                          (0x00800000)
#define  PPOVERLAY_DTG_ie_osddtgv_den_end_event_ie_mask                          (0x00400000)
#define  PPOVERLAY_DTG_ie_disp_frc2fsync_event_ie_mask                           (0x00200000)
#define  PPOVERLAY_DTG_ie_kiwi_den_phase_error_ie_mask                           (0x00100000)
#define  PPOVERLAY_DTG_ie_kiwi_dvs_phase_error_ie_mask                           (0x00080000)
#define  PPOVERLAY_DTG_ie_memcdtgv_den_sta_event_ie_mask                         (0x00040000)
#define  PPOVERLAY_DTG_ie_memcdtgv_den_end_event_ie_mask                         (0x00020000)
#define  PPOVERLAY_DTG_ie_d_counter_dvs_ie_mask                                  (0x00010000)
#define  PPOVERLAY_DTG_ie_dvs_long_event_mask                                    (0x00004000)
#define  PPOVERLAY_DTG_ie_dvs_short_event_mask                                   (0x00002000)
#define  PPOVERLAY_DTG_ie_fll_exit_irq_en_mask                                   (0x00001000)
#define  PPOVERLAY_DTG_ie_fix_last_line_ivs_too_close_event_ie_mask              (0x00000800)
#define  PPOVERLAY_DTG_ie_fix_last_line_no_ivs_event_ie_mask                     (0x00000400)
#define  PPOVERLAY_DTG_ie_fix_last_line_less_than_th_event_ie_mask               (0x00000200)
#define  PPOVERLAY_DTG_ie_fix_last_line_more_than_th_event_ie_mask               (0x00000100)
#define  PPOVERLAY_DTG_ie_fix_last_line_less_event_ie_mask                       (0x00000080)
#define  PPOVERLAY_DTG_ie_fix_last_line_more_event_ie_mask                       (0x00000040)
#define  PPOVERLAY_DTG_ie_auto_switch_x_event_ie_mask                            (0x00000020)
#define  PPOVERLAY_DTG_ie_dtg_vlc_ie_mask                                        (0x00000010)
#define  PPOVERLAY_DTG_ie_sv_den_sta_event_ie_mask                               (0x00000008)
#define  PPOVERLAY_DTG_ie_sv_den_end_event_ie_mask                               (0x00000004)
#define  PPOVERLAY_DTG_ie_mv_den_sta_event_ie_mask                               (0x00000002)
#define  PPOVERLAY_DTG_ie_mv_den_end_event_ie_mask                               (0x00000001)
#define  PPOVERLAY_DTG_ie_dtg_ie(data)                                           (0x80000000&((data)<<31))
#define  PPOVERLAY_DTG_ie_ie_fll_track_unlock(data)                              (0x40000000&((data)<<30))
#define  PPOVERLAY_DTG_ie_osddtgv_den_sta_event_ie(data)                         (0x00800000&((data)<<23))
#define  PPOVERLAY_DTG_ie_osddtgv_den_end_event_ie(data)                         (0x00400000&((data)<<22))
#define  PPOVERLAY_DTG_ie_disp_frc2fsync_event_ie(data)                          (0x00200000&((data)<<21))
#define  PPOVERLAY_DTG_ie_kiwi_den_phase_error_ie(data)                          (0x00100000&((data)<<20))
#define  PPOVERLAY_DTG_ie_kiwi_dvs_phase_error_ie(data)                          (0x00080000&((data)<<19))
#define  PPOVERLAY_DTG_ie_memcdtgv_den_sta_event_ie(data)                        (0x00040000&((data)<<18))
#define  PPOVERLAY_DTG_ie_memcdtgv_den_end_event_ie(data)                        (0x00020000&((data)<<17))
#define  PPOVERLAY_DTG_ie_d_counter_dvs_ie(data)                                 (0x00010000&((data)<<16))
#define  PPOVERLAY_DTG_ie_dvs_long_event(data)                                   (0x00004000&((data)<<14))
#define  PPOVERLAY_DTG_ie_dvs_short_event(data)                                  (0x00002000&((data)<<13))
#define  PPOVERLAY_DTG_ie_fll_exit_irq_en(data)                                  (0x00001000&((data)<<12))
#define  PPOVERLAY_DTG_ie_fix_last_line_ivs_too_close_event_ie(data)             (0x00000800&((data)<<11))
#define  PPOVERLAY_DTG_ie_fix_last_line_no_ivs_event_ie(data)                    (0x00000400&((data)<<10))
#define  PPOVERLAY_DTG_ie_fix_last_line_less_than_th_event_ie(data)              (0x00000200&((data)<<9))
#define  PPOVERLAY_DTG_ie_fix_last_line_more_than_th_event_ie(data)              (0x00000100&((data)<<8))
#define  PPOVERLAY_DTG_ie_fix_last_line_less_event_ie(data)                      (0x00000080&((data)<<7))
#define  PPOVERLAY_DTG_ie_fix_last_line_more_event_ie(data)                      (0x00000040&((data)<<6))
#define  PPOVERLAY_DTG_ie_auto_switch_x_event_ie(data)                           (0x00000020&((data)<<5))
#define  PPOVERLAY_DTG_ie_dtg_vlc_ie(data)                                       (0x00000010&((data)<<4))
#define  PPOVERLAY_DTG_ie_sv_den_sta_event_ie(data)                              (0x00000008&((data)<<3))
#define  PPOVERLAY_DTG_ie_sv_den_end_event_ie(data)                              (0x00000004&((data)<<2))
#define  PPOVERLAY_DTG_ie_mv_den_sta_event_ie(data)                              (0x00000002&((data)<<1))
#define  PPOVERLAY_DTG_ie_mv_den_end_event_ie(data)                              (0x00000001&(data))
#define  PPOVERLAY_DTG_ie_get_dtg_ie(data)                                       ((0x80000000&(data))>>31)
#define  PPOVERLAY_DTG_ie_get_ie_fll_track_unlock(data)                          ((0x40000000&(data))>>30)
#define  PPOVERLAY_DTG_ie_get_osddtgv_den_sta_event_ie(data)                     ((0x00800000&(data))>>23)
#define  PPOVERLAY_DTG_ie_get_osddtgv_den_end_event_ie(data)                     ((0x00400000&(data))>>22)
#define  PPOVERLAY_DTG_ie_get_disp_frc2fsync_event_ie(data)                      ((0x00200000&(data))>>21)
#define  PPOVERLAY_DTG_ie_get_kiwi_den_phase_error_ie(data)                      ((0x00100000&(data))>>20)
#define  PPOVERLAY_DTG_ie_get_kiwi_dvs_phase_error_ie(data)                      ((0x00080000&(data))>>19)
#define  PPOVERLAY_DTG_ie_get_memcdtgv_den_sta_event_ie(data)                    ((0x00040000&(data))>>18)
#define  PPOVERLAY_DTG_ie_get_memcdtgv_den_end_event_ie(data)                    ((0x00020000&(data))>>17)
#define  PPOVERLAY_DTG_ie_get_d_counter_dvs_ie(data)                             ((0x00010000&(data))>>16)
#define  PPOVERLAY_DTG_ie_get_dvs_long_event(data)                               ((0x00004000&(data))>>14)
#define  PPOVERLAY_DTG_ie_get_dvs_short_event(data)                              ((0x00002000&(data))>>13)
#define  PPOVERLAY_DTG_ie_get_fll_exit_irq_en(data)                              ((0x00001000&(data))>>12)
#define  PPOVERLAY_DTG_ie_get_fix_last_line_ivs_too_close_event_ie(data)         ((0x00000800&(data))>>11)
#define  PPOVERLAY_DTG_ie_get_fix_last_line_no_ivs_event_ie(data)                ((0x00000400&(data))>>10)
#define  PPOVERLAY_DTG_ie_get_fix_last_line_less_than_th_event_ie(data)          ((0x00000200&(data))>>9)
#define  PPOVERLAY_DTG_ie_get_fix_last_line_more_than_th_event_ie(data)          ((0x00000100&(data))>>8)
#define  PPOVERLAY_DTG_ie_get_fix_last_line_less_event_ie(data)                  ((0x00000080&(data))>>7)
#define  PPOVERLAY_DTG_ie_get_fix_last_line_more_event_ie(data)                  ((0x00000040&(data))>>6)
#define  PPOVERLAY_DTG_ie_get_auto_switch_x_event_ie(data)                       ((0x00000020&(data))>>5)
#define  PPOVERLAY_DTG_ie_get_dtg_vlc_ie(data)                                   ((0x00000010&(data))>>4)
#define  PPOVERLAY_DTG_ie_get_sv_den_sta_event_ie(data)                          ((0x00000008&(data))>>3)
#define  PPOVERLAY_DTG_ie_get_sv_den_end_event_ie(data)                          ((0x00000004&(data))>>2)
#define  PPOVERLAY_DTG_ie_get_mv_den_sta_event_ie(data)                          ((0x00000002&(data))>>1)
#define  PPOVERLAY_DTG_ie_get_mv_den_end_event_ie(data)                          (0x00000001&(data))

#define  PPOVERLAY_DTG_pending_status                                           0x180280F4
#define  PPOVERLAY_DTG_pending_status_reg_addr                                   "0xB80280F4"
#define  PPOVERLAY_DTG_pending_status_reg                                        0xB80280F4
#define  PPOVERLAY_DTG_pending_status_inst_addr                                  "0x0028"
#define  set_PPOVERLAY_DTG_pending_status_reg(data)                              (*((volatile unsigned int*)PPOVERLAY_DTG_pending_status_reg)=data)
#define  get_PPOVERLAY_DTG_pending_status_reg                                    (*((volatile unsigned int*)PPOVERLAY_DTG_pending_status_reg))
#define  PPOVERLAY_DTG_pending_status_iv2dv_reg_is_db_shift                      (31)
#define  PPOVERLAY_DTG_pending_status_dtg_reg_is_db_shift                        (30)
#define  PPOVERLAY_DTG_pending_status_dtg_sub_reg_is_db_shift                    (29)
#define  PPOVERLAY_DTG_pending_status_dtg_main_reg_is_db_shift                   (28)
#define  PPOVERLAY_DTG_pending_status_dtg_main_other_reg_is_db_shift             (27)
#define  PPOVERLAY_DTG_pending_status_osddtgv_den_sta_event_shift                (23)
#define  PPOVERLAY_DTG_pending_status_osddtgv_den_end_event_shift                (22)
#define  PPOVERLAY_DTG_pending_status_disp_frc2fsync_event_shift                 (21)
#define  PPOVERLAY_DTG_pending_status_kiwi_den_phase_error_irq_shift             (20)
#define  PPOVERLAY_DTG_pending_status_kiwi_dvs_phase_error_irq_shift             (19)
#define  PPOVERLAY_DTG_pending_status_memcdtgv_den_sta_event_shift               (18)
#define  PPOVERLAY_DTG_pending_status_memcdtgv_den_end_event_shift               (17)
#define  PPOVERLAY_DTG_pending_status_d_counter_dvs_irq_shift                    (16)
#define  PPOVERLAY_DTG_pending_status_dvs_long_shift                             (14)
#define  PPOVERLAY_DTG_pending_status_dvs_short_shift                            (13)
#define  PPOVERLAY_DTG_pending_status_fix_last_line_ivs_too_close_event_shift    (11)
#define  PPOVERLAY_DTG_pending_status_fix_last_line_no_ivs_event_shift           (10)
#define  PPOVERLAY_DTG_pending_status_fix_last_line_less_than_th_event_shift     (9)
#define  PPOVERLAY_DTG_pending_status_fix_last_line_more_than_th_event_shift     (8)
#define  PPOVERLAY_DTG_pending_status_fix_last_line_less_event_shift             (7)
#define  PPOVERLAY_DTG_pending_status_fix_last_line_more_event_shift             (6)
#define  PPOVERLAY_DTG_pending_status_auto_switch_x_event_shift                  (5)
#define  PPOVERLAY_DTG_pending_status_dtg_vlc_status_shift                       (4)
#define  PPOVERLAY_DTG_pending_status_sv_den_sta_event_shift                     (3)
#define  PPOVERLAY_DTG_pending_status_sv_den_end_event_shift                     (2)
#define  PPOVERLAY_DTG_pending_status_mv_den_sta_event_shift                     (1)
#define  PPOVERLAY_DTG_pending_status_mv_den_end_event_shift                     (0)
#define  PPOVERLAY_DTG_pending_status_iv2dv_reg_is_db_mask                       (0x80000000)
#define  PPOVERLAY_DTG_pending_status_dtg_reg_is_db_mask                         (0x40000000)
#define  PPOVERLAY_DTG_pending_status_dtg_sub_reg_is_db_mask                     (0x20000000)
#define  PPOVERLAY_DTG_pending_status_dtg_main_reg_is_db_mask                    (0x10000000)
#define  PPOVERLAY_DTG_pending_status_dtg_main_other_reg_is_db_mask              (0x08000000)
#define  PPOVERLAY_DTG_pending_status_osddtgv_den_sta_event_mask                 (0x00800000)
#define  PPOVERLAY_DTG_pending_status_osddtgv_den_end_event_mask                 (0x00400000)
#define  PPOVERLAY_DTG_pending_status_disp_frc2fsync_event_mask                  (0x00200000)
#define  PPOVERLAY_DTG_pending_status_kiwi_den_phase_error_irq_mask              (0x00100000)
#define  PPOVERLAY_DTG_pending_status_kiwi_dvs_phase_error_irq_mask              (0x00080000)
#define  PPOVERLAY_DTG_pending_status_memcdtgv_den_sta_event_mask                (0x00040000)
#define  PPOVERLAY_DTG_pending_status_memcdtgv_den_end_event_mask                (0x00020000)
#define  PPOVERLAY_DTG_pending_status_d_counter_dvs_irq_mask                     (0x00010000)
#define  PPOVERLAY_DTG_pending_status_dvs_long_mask                              (0x00004000)
#define  PPOVERLAY_DTG_pending_status_dvs_short_mask                             (0x00002000)
#define  PPOVERLAY_DTG_pending_status_fix_last_line_ivs_too_close_event_mask     (0x00000800)
#define  PPOVERLAY_DTG_pending_status_fix_last_line_no_ivs_event_mask            (0x00000400)
#define  PPOVERLAY_DTG_pending_status_fix_last_line_less_than_th_event_mask      (0x00000200)
#define  PPOVERLAY_DTG_pending_status_fix_last_line_more_than_th_event_mask      (0x00000100)
#define  PPOVERLAY_DTG_pending_status_fix_last_line_less_event_mask              (0x00000080)
#define  PPOVERLAY_DTG_pending_status_fix_last_line_more_event_mask              (0x00000040)
#define  PPOVERLAY_DTG_pending_status_auto_switch_x_event_mask                   (0x00000020)
#define  PPOVERLAY_DTG_pending_status_dtg_vlc_status_mask                        (0x00000010)
#define  PPOVERLAY_DTG_pending_status_sv_den_sta_event_mask                      (0x00000008)
#define  PPOVERLAY_DTG_pending_status_sv_den_end_event_mask                      (0x00000004)
#define  PPOVERLAY_DTG_pending_status_mv_den_sta_event_mask                      (0x00000002)
#define  PPOVERLAY_DTG_pending_status_mv_den_end_event_mask                      (0x00000001)
#define  PPOVERLAY_DTG_pending_status_iv2dv_reg_is_db(data)                      (0x80000000&((data)<<31))
#define  PPOVERLAY_DTG_pending_status_dtg_reg_is_db(data)                        (0x40000000&((data)<<30))
#define  PPOVERLAY_DTG_pending_status_dtg_sub_reg_is_db(data)                    (0x20000000&((data)<<29))
#define  PPOVERLAY_DTG_pending_status_dtg_main_reg_is_db(data)                   (0x10000000&((data)<<28))
#define  PPOVERLAY_DTG_pending_status_dtg_main_other_reg_is_db(data)             (0x08000000&((data)<<27))
#define  PPOVERLAY_DTG_pending_status_osddtgv_den_sta_event(data)                (0x00800000&((data)<<23))
#define  PPOVERLAY_DTG_pending_status_osddtgv_den_end_event(data)                (0x00400000&((data)<<22))
#define  PPOVERLAY_DTG_pending_status_disp_frc2fsync_event(data)                 (0x00200000&((data)<<21))
#define  PPOVERLAY_DTG_pending_status_kiwi_den_phase_error_irq(data)             (0x00100000&((data)<<20))
#define  PPOVERLAY_DTG_pending_status_kiwi_dvs_phase_error_irq(data)             (0x00080000&((data)<<19))
#define  PPOVERLAY_DTG_pending_status_memcdtgv_den_sta_event(data)               (0x00040000&((data)<<18))
#define  PPOVERLAY_DTG_pending_status_memcdtgv_den_end_event(data)               (0x00020000&((data)<<17))
#define  PPOVERLAY_DTG_pending_status_d_counter_dvs_irq(data)                    (0x00010000&((data)<<16))
#define  PPOVERLAY_DTG_pending_status_dvs_long(data)                             (0x00004000&((data)<<14))
#define  PPOVERLAY_DTG_pending_status_dvs_short(data)                            (0x00002000&((data)<<13))
#define  PPOVERLAY_DTG_pending_status_fix_last_line_ivs_too_close_event(data)    (0x00000800&((data)<<11))
#define  PPOVERLAY_DTG_pending_status_fix_last_line_no_ivs_event(data)           (0x00000400&((data)<<10))
#define  PPOVERLAY_DTG_pending_status_fix_last_line_less_than_th_event(data)     (0x00000200&((data)<<9))
#define  PPOVERLAY_DTG_pending_status_fix_last_line_more_than_th_event(data)     (0x00000100&((data)<<8))
#define  PPOVERLAY_DTG_pending_status_fix_last_line_less_event(data)             (0x00000080&((data)<<7))
#define  PPOVERLAY_DTG_pending_status_fix_last_line_more_event(data)             (0x00000040&((data)<<6))
#define  PPOVERLAY_DTG_pending_status_auto_switch_x_event(data)                  (0x00000020&((data)<<5))
#define  PPOVERLAY_DTG_pending_status_dtg_vlc_status(data)                       (0x00000010&((data)<<4))
#define  PPOVERLAY_DTG_pending_status_sv_den_sta_event(data)                     (0x00000008&((data)<<3))
#define  PPOVERLAY_DTG_pending_status_sv_den_end_event(data)                     (0x00000004&((data)<<2))
#define  PPOVERLAY_DTG_pending_status_mv_den_sta_event(data)                     (0x00000002&((data)<<1))
#define  PPOVERLAY_DTG_pending_status_mv_den_end_event(data)                     (0x00000001&(data))
#define  PPOVERLAY_DTG_pending_status_get_iv2dv_reg_is_db(data)                  ((0x80000000&(data))>>31)
#define  PPOVERLAY_DTG_pending_status_get_dtg_reg_is_db(data)                    ((0x40000000&(data))>>30)
#define  PPOVERLAY_DTG_pending_status_get_dtg_sub_reg_is_db(data)                ((0x20000000&(data))>>29)
#define  PPOVERLAY_DTG_pending_status_get_dtg_main_reg_is_db(data)               ((0x10000000&(data))>>28)
#define  PPOVERLAY_DTG_pending_status_get_dtg_main_other_reg_is_db(data)         ((0x08000000&(data))>>27)
#define  PPOVERLAY_DTG_pending_status_get_osddtgv_den_sta_event(data)            ((0x00800000&(data))>>23)
#define  PPOVERLAY_DTG_pending_status_get_osddtgv_den_end_event(data)            ((0x00400000&(data))>>22)
#define  PPOVERLAY_DTG_pending_status_get_disp_frc2fsync_event(data)             ((0x00200000&(data))>>21)
#define  PPOVERLAY_DTG_pending_status_get_kiwi_den_phase_error_irq(data)         ((0x00100000&(data))>>20)
#define  PPOVERLAY_DTG_pending_status_get_kiwi_dvs_phase_error_irq(data)         ((0x00080000&(data))>>19)
#define  PPOVERLAY_DTG_pending_status_get_memcdtgv_den_sta_event(data)           ((0x00040000&(data))>>18)
#define  PPOVERLAY_DTG_pending_status_get_memcdtgv_den_end_event(data)           ((0x00020000&(data))>>17)
#define  PPOVERLAY_DTG_pending_status_get_d_counter_dvs_irq(data)                ((0x00010000&(data))>>16)
#define  PPOVERLAY_DTG_pending_status_get_dvs_long(data)                         ((0x00004000&(data))>>14)
#define  PPOVERLAY_DTG_pending_status_get_dvs_short(data)                        ((0x00002000&(data))>>13)
#define  PPOVERLAY_DTG_pending_status_get_fix_last_line_ivs_too_close_event(data) ((0x00000800&(data))>>11)
#define  PPOVERLAY_DTG_pending_status_get_fix_last_line_no_ivs_event(data)       ((0x00000400&(data))>>10)
#define  PPOVERLAY_DTG_pending_status_get_fix_last_line_less_than_th_event(data) ((0x00000200&(data))>>9)
#define  PPOVERLAY_DTG_pending_status_get_fix_last_line_more_than_th_event(data) ((0x00000100&(data))>>8)
#define  PPOVERLAY_DTG_pending_status_get_fix_last_line_less_event(data)         ((0x00000080&(data))>>7)
#define  PPOVERLAY_DTG_pending_status_get_fix_last_line_more_event(data)         ((0x00000040&(data))>>6)
#define  PPOVERLAY_DTG_pending_status_get_auto_switch_x_event(data)              ((0x00000020&(data))>>5)
#define  PPOVERLAY_DTG_pending_status_get_dtg_vlc_status(data)                   ((0x00000010&(data))>>4)
#define  PPOVERLAY_DTG_pending_status_get_sv_den_sta_event(data)                 ((0x00000008&(data))>>3)
#define  PPOVERLAY_DTG_pending_status_get_sv_den_end_event(data)                 ((0x00000004&(data))>>2)
#define  PPOVERLAY_DTG_pending_status_get_mv_den_sta_event(data)                 ((0x00000002&(data))>>1)
#define  PPOVERLAY_DTG_pending_status_get_mv_den_end_event(data)                 (0x00000001&(data))

#define  PPOVERLAY_DTG_no_ie_pending_status                                     0x180280F8
#define  PPOVERLAY_DTG_no_ie_pending_status_reg_addr                             "0xB80280F8"
#define  PPOVERLAY_DTG_no_ie_pending_status_reg                                  0xB80280F8
#define  PPOVERLAY_DTG_no_ie_pending_status_inst_addr                            "0x0029"
#define  set_PPOVERLAY_DTG_no_ie_pending_status_reg(data)                        (*((volatile unsigned int*)PPOVERLAY_DTG_no_ie_pending_status_reg)=data)
#define  get_PPOVERLAY_DTG_no_ie_pending_status_reg                              (*((volatile unsigned int*)PPOVERLAY_DTG_no_ie_pending_status_reg))
#define  PPOVERLAY_DTG_no_ie_pending_status_main_watchdog_or_shift               (31)
#define  PPOVERLAY_DTG_no_ie_pending_status_sub_watchdog_or_shift                (30)
#define  PPOVERLAY_DTG_no_ie_pending_status_main_watchdog_and_shift              (29)
#define  PPOVERLAY_DTG_no_ie_pending_status_sub_watchdog_and_shift               (28)
#define  PPOVERLAY_DTG_no_ie_pending_status_osddtg_fsync_err_shift               (9)
#define  PPOVERLAY_DTG_no_ie_pending_status_uzudtg_fsync_err_shift               (8)
#define  PPOVERLAY_DTG_no_ie_pending_status_memcdtg_fsync_err_shift              (7)
#define  PPOVERLAY_DTG_no_ie_pending_status_hlw_error_flag_shift                 (6)
#define  PPOVERLAY_DTG_no_ie_pending_status_hlw_bc1_flag_shift                   (5)
#define  PPOVERLAY_DTG_no_ie_pending_status_hlw_bc2_flag_shift                   (4)
#define  PPOVERLAY_DTG_no_ie_pending_status_hlw_bc3_flag_shift                   (3)
#define  PPOVERLAY_DTG_no_ie_pending_status_hlw_bc4_flag_shift                   (2)
#define  PPOVERLAY_DTG_no_ie_pending_status_hlw_bc5_flag_shift                   (1)
#define  PPOVERLAY_DTG_no_ie_pending_status_old_fll_unlocked_event_shift         (0)
#define  PPOVERLAY_DTG_no_ie_pending_status_main_watchdog_or_mask                (0x80000000)
#define  PPOVERLAY_DTG_no_ie_pending_status_sub_watchdog_or_mask                 (0x40000000)
#define  PPOVERLAY_DTG_no_ie_pending_status_main_watchdog_and_mask               (0x20000000)
#define  PPOVERLAY_DTG_no_ie_pending_status_sub_watchdog_and_mask                (0x10000000)
#define  PPOVERLAY_DTG_no_ie_pending_status_osddtg_fsync_err_mask                (0x00000200)
#define  PPOVERLAY_DTG_no_ie_pending_status_uzudtg_fsync_err_mask                (0x00000100)
#define  PPOVERLAY_DTG_no_ie_pending_status_memcdtg_fsync_err_mask               (0x00000080)
#define  PPOVERLAY_DTG_no_ie_pending_status_hlw_error_flag_mask                  (0x00000040)
#define  PPOVERLAY_DTG_no_ie_pending_status_hlw_bc1_flag_mask                    (0x00000020)
#define  PPOVERLAY_DTG_no_ie_pending_status_hlw_bc2_flag_mask                    (0x00000010)
#define  PPOVERLAY_DTG_no_ie_pending_status_hlw_bc3_flag_mask                    (0x00000008)
#define  PPOVERLAY_DTG_no_ie_pending_status_hlw_bc4_flag_mask                    (0x00000004)
#define  PPOVERLAY_DTG_no_ie_pending_status_hlw_bc5_flag_mask                    (0x00000002)
#define  PPOVERLAY_DTG_no_ie_pending_status_old_fll_unlocked_event_mask          (0x00000001)
#define  PPOVERLAY_DTG_no_ie_pending_status_main_watchdog_or(data)               (0x80000000&((data)<<31))
#define  PPOVERLAY_DTG_no_ie_pending_status_sub_watchdog_or(data)                (0x40000000&((data)<<30))
#define  PPOVERLAY_DTG_no_ie_pending_status_main_watchdog_and(data)              (0x20000000&((data)<<29))
#define  PPOVERLAY_DTG_no_ie_pending_status_sub_watchdog_and(data)               (0x10000000&((data)<<28))
#define  PPOVERLAY_DTG_no_ie_pending_status_osddtg_fsync_err(data)               (0x00000200&((data)<<9))
#define  PPOVERLAY_DTG_no_ie_pending_status_uzudtg_fsync_err(data)               (0x00000100&((data)<<8))
#define  PPOVERLAY_DTG_no_ie_pending_status_memcdtg_fsync_err(data)              (0x00000080&((data)<<7))
#define  PPOVERLAY_DTG_no_ie_pending_status_hlw_error_flag(data)                 (0x00000040&((data)<<6))
#define  PPOVERLAY_DTG_no_ie_pending_status_hlw_bc1_flag(data)                   (0x00000020&((data)<<5))
#define  PPOVERLAY_DTG_no_ie_pending_status_hlw_bc2_flag(data)                   (0x00000010&((data)<<4))
#define  PPOVERLAY_DTG_no_ie_pending_status_hlw_bc3_flag(data)                   (0x00000008&((data)<<3))
#define  PPOVERLAY_DTG_no_ie_pending_status_hlw_bc4_flag(data)                   (0x00000004&((data)<<2))
#define  PPOVERLAY_DTG_no_ie_pending_status_hlw_bc5_flag(data)                   (0x00000002&((data)<<1))
#define  PPOVERLAY_DTG_no_ie_pending_status_old_fll_unlocked_event(data)         (0x00000001&(data))
#define  PPOVERLAY_DTG_no_ie_pending_status_get_main_watchdog_or(data)           ((0x80000000&(data))>>31)
#define  PPOVERLAY_DTG_no_ie_pending_status_get_sub_watchdog_or(data)            ((0x40000000&(data))>>30)
#define  PPOVERLAY_DTG_no_ie_pending_status_get_main_watchdog_and(data)          ((0x20000000&(data))>>29)
#define  PPOVERLAY_DTG_no_ie_pending_status_get_sub_watchdog_and(data)           ((0x10000000&(data))>>28)
#define  PPOVERLAY_DTG_no_ie_pending_status_get_osddtg_fsync_err(data)           ((0x00000200&(data))>>9)
#define  PPOVERLAY_DTG_no_ie_pending_status_get_uzudtg_fsync_err(data)           ((0x00000100&(data))>>8)
#define  PPOVERLAY_DTG_no_ie_pending_status_get_memcdtg_fsync_err(data)          ((0x00000080&(data))>>7)
#define  PPOVERLAY_DTG_no_ie_pending_status_get_hlw_error_flag(data)             ((0x00000040&(data))>>6)
#define  PPOVERLAY_DTG_no_ie_pending_status_get_hlw_bc1_flag(data)               ((0x00000020&(data))>>5)
#define  PPOVERLAY_DTG_no_ie_pending_status_get_hlw_bc2_flag(data)               ((0x00000010&(data))>>4)
#define  PPOVERLAY_DTG_no_ie_pending_status_get_hlw_bc3_flag(data)               ((0x00000008&(data))>>3)
#define  PPOVERLAY_DTG_no_ie_pending_status_get_hlw_bc4_flag(data)               ((0x00000004&(data))>>2)
#define  PPOVERLAY_DTG_no_ie_pending_status_get_hlw_bc5_flag(data)               ((0x00000002&(data))>>1)
#define  PPOVERLAY_DTG_no_ie_pending_status_get_old_fll_unlocked_event(data)     (0x00000001&(data))

#define  PPOVERLAY_DTG_watchdog_status                                          0x180280FC
#define  PPOVERLAY_DTG_watchdog_status_reg_addr                                  "0xB80280FC"
#define  PPOVERLAY_DTG_watchdog_status_reg                                       0xB80280FC
#define  PPOVERLAY_DTG_watchdog_status_inst_addr                                 "0x002A"
#define  set_PPOVERLAY_DTG_watchdog_status_reg(data)                             (*((volatile unsigned int*)PPOVERLAY_DTG_watchdog_status_reg)=data)
#define  get_PPOVERLAY_DTG_watchdog_status_reg                                   (*((volatile unsigned int*)PPOVERLAY_DTG_watchdog_status_reg))
#define  PPOVERLAY_DTG_watchdog_status_watchdog_main_status_shift                (16)
#define  PPOVERLAY_DTG_watchdog_status_watchdog_sub_status_shift                 (0)
#define  PPOVERLAY_DTG_watchdog_status_watchdog_main_status_mask                 (0xFFFF0000)
#define  PPOVERLAY_DTG_watchdog_status_watchdog_sub_status_mask                  (0x0000FFFF)
#define  PPOVERLAY_DTG_watchdog_status_watchdog_main_status(data)                (0xFFFF0000&((data)<<16))
#define  PPOVERLAY_DTG_watchdog_status_watchdog_sub_status(data)                 (0x0000FFFF&(data))
#define  PPOVERLAY_DTG_watchdog_status_get_watchdog_main_status(data)            ((0xFFFF0000&(data))>>16)
#define  PPOVERLAY_DTG_watchdog_status_get_watchdog_sub_status(data)             (0x0000FFFF&(data))

#define  PPOVERLAY_MEMC_MUX_CTRL                                                0x18028100
#define  PPOVERLAY_MEMC_MUX_CTRL_reg_addr                                        "0xB8028100"
#define  PPOVERLAY_MEMC_MUX_CTRL_reg                                             0xB8028100
#define  PPOVERLAY_MEMC_MUX_CTRL_inst_addr                                       "0x002B"
#define  set_PPOVERLAY_MEMC_MUX_CTRL_reg(data)                                   (*((volatile unsigned int*)PPOVERLAY_MEMC_MUX_CTRL_reg)=data)
#define  get_PPOVERLAY_MEMC_MUX_CTRL_reg                                         (*((volatile unsigned int*)PPOVERLAY_MEMC_MUX_CTRL_reg))
#define  PPOVERLAY_MEMC_MUX_CTRL_rtk_bypass_vs_delay_shift                       (16)
#define  PPOVERLAY_MEMC_MUX_CTRL_memcdtg_golden_vs_shift                         (14)
#define  PPOVERLAY_MEMC_MUX_CTRL_memc_outmux_sel_shift                           (13)
#define  PPOVERLAY_MEMC_MUX_CTRL_memc_out_bg_en_shift                            (12)
#define  PPOVERLAY_MEMC_MUX_CTRL_memc_in_bg_en_shift                             (0)
#define  PPOVERLAY_MEMC_MUX_CTRL_rtk_bypass_vs_delay_mask                        (0x000F0000)
#define  PPOVERLAY_MEMC_MUX_CTRL_memcdtg_golden_vs_mask                          (0x00004000)
#define  PPOVERLAY_MEMC_MUX_CTRL_memc_outmux_sel_mask                            (0x00002000)
#define  PPOVERLAY_MEMC_MUX_CTRL_memc_out_bg_en_mask                             (0x00001000)
#define  PPOVERLAY_MEMC_MUX_CTRL_memc_in_bg_en_mask                              (0x00000001)
#define  PPOVERLAY_MEMC_MUX_CTRL_rtk_bypass_vs_delay(data)                       (0x000F0000&((data)<<16))
#define  PPOVERLAY_MEMC_MUX_CTRL_memcdtg_golden_vs(data)                         (0x00004000&((data)<<14))
#define  PPOVERLAY_MEMC_MUX_CTRL_memc_outmux_sel(data)                           (0x00002000&((data)<<13))
#define  PPOVERLAY_MEMC_MUX_CTRL_memc_out_bg_en(data)                            (0x00001000&((data)<<12))
#define  PPOVERLAY_MEMC_MUX_CTRL_memc_in_bg_en(data)                             (0x00000001&(data))
#define  PPOVERLAY_MEMC_MUX_CTRL_get_rtk_bypass_vs_delay(data)                   ((0x000F0000&(data))>>16)
#define  PPOVERLAY_MEMC_MUX_CTRL_get_memcdtg_golden_vs(data)                     ((0x00004000&(data))>>14)
#define  PPOVERLAY_MEMC_MUX_CTRL_get_memc_outmux_sel(data)                       ((0x00002000&(data))>>13)
#define  PPOVERLAY_MEMC_MUX_CTRL_get_memc_out_bg_en(data)                        ((0x00001000&(data))>>12)
#define  PPOVERLAY_MEMC_MUX_CTRL_get_memc_in_bg_en(data)                         (0x00000001&(data))

#define  PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_GB                                   0x18028104
#define  PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_GB_reg_addr                           "0xB8028104"
#define  PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_GB_reg                                0xB8028104
#define  PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_GB_inst_addr                          "0x002C"
#define  set_PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_GB_reg(data)                      (*((volatile unsigned int*)PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_GB_reg)=data)
#define  get_PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_GB_reg                            (*((volatile unsigned int*)PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_GB_reg))
#define  PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_GB_in_y_g_value_shift                 (16)
#define  PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_GB_in_cb_b_value_shift                (0)
#define  PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_GB_in_y_g_value_mask                  (0x0FFF0000)
#define  PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_GB_in_cb_b_value_mask                 (0x00000FFF)
#define  PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_GB_in_y_g_value(data)                 (0x0FFF0000&((data)<<16))
#define  PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_GB_in_cb_b_value(data)                (0x00000FFF&(data))
#define  PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_GB_get_in_y_g_value(data)             ((0x0FFF0000&(data))>>16)
#define  PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_GB_get_in_cb_b_value(data)            (0x00000FFF&(data))

#define  PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_R                                    0x18028108
#define  PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_R_reg_addr                            "0xB8028108"
#define  PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_R_reg                                 0xB8028108
#define  PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_R_inst_addr                           "0x002D"
#define  set_PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_R_reg(data)                       (*((volatile unsigned int*)PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_R_reg)=data)
#define  get_PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_R_reg                             (*((volatile unsigned int*)PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_R_reg))
#define  PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_R_in_cr_r_value_shift                 (0)
#define  PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_R_in_cr_r_value_mask                  (0x00000FFF)
#define  PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_R_in_cr_r_value(data)                 (0x00000FFF&(data))
#define  PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_R_get_in_cr_r_value(data)             (0x00000FFF&(data))

#define  PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_GB                                 0x1802810C
#define  PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_GB_reg_addr                         "0xB802810C"
#define  PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_GB_reg                              0xB802810C
#define  PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_GB_inst_addr                        "0x002E"
#define  set_PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_GB_reg(data)                    (*((volatile unsigned int*)PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_GB_reg)=data)
#define  get_PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_GB_reg                          (*((volatile unsigned int*)PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_GB_reg))
#define  PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_GB_out_y_g_value_shift              (16)
#define  PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_GB_out_cb_b_value_shift             (0)
#define  PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_GB_out_y_g_value_mask               (0x0FFF0000)
#define  PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_GB_out_cb_b_value_mask              (0x00000FFF)
#define  PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_GB_out_y_g_value(data)              (0x0FFF0000&((data)<<16))
#define  PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_GB_out_cb_b_value(data)             (0x00000FFF&(data))
#define  PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_GB_get_out_y_g_value(data)          ((0x0FFF0000&(data))>>16)
#define  PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_GB_get_out_cb_b_value(data)         (0x00000FFF&(data))

#define  PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_R                                  0x18028110
#define  PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_R_reg_addr                          "0xB8028110"
#define  PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_R_reg                               0xB8028110
#define  PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_R_inst_addr                         "0x002F"
#define  set_PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_R_reg(data)                     (*((volatile unsigned int*)PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_R_reg)=data)
#define  get_PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_R_reg                           (*((volatile unsigned int*)PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_R_reg))
#define  PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_R_out_cr_r_value_shift              (0)
#define  PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_R_out_cr_r_value_mask               (0x00000FFF)
#define  PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_R_out_cr_r_value(data)              (0x00000FFF&(data))
#define  PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_R_get_out_cr_r_value(data)          (0x00000FFF&(data))

#define  PPOVERLAY_fix_last_line_systhesisN_ratio                               0x18028140
#define  PPOVERLAY_fix_last_line_systhesisN_ratio_reg_addr                       "0xB8028140"
#define  PPOVERLAY_fix_last_line_systhesisN_ratio_reg                            0xB8028140
#define  PPOVERLAY_fix_last_line_systhesisN_ratio_inst_addr                      "0x0030"
#define  set_PPOVERLAY_fix_last_line_systhesisN_ratio_reg(data)                  (*((volatile unsigned int*)PPOVERLAY_fix_last_line_systhesisN_ratio_reg)=data)
#define  get_PPOVERLAY_fix_last_line_systhesisN_ratio_reg                        (*((volatile unsigned int*)PPOVERLAY_fix_last_line_systhesisN_ratio_reg))
#define  PPOVERLAY_fix_last_line_systhesisN_ratio_dv_rst_sscg_sel_shift          (24)
#define  PPOVERLAY_fix_last_line_systhesisN_ratio_max_multiple_synthesisn_shift  (20)
#define  PPOVERLAY_fix_last_line_systhesisN_ratio_synthesisn_shift               (16)
#define  PPOVERLAY_fix_last_line_systhesisN_ratio_synthesisn_ratio_shift         (0)
#define  PPOVERLAY_fix_last_line_systhesisN_ratio_dv_rst_sscg_sel_mask           (0x01000000)
#define  PPOVERLAY_fix_last_line_systhesisN_ratio_max_multiple_synthesisn_mask   (0x00F00000)
#define  PPOVERLAY_fix_last_line_systhesisN_ratio_synthesisn_mask                (0x00070000)
#define  PPOVERLAY_fix_last_line_systhesisN_ratio_synthesisn_ratio_mask          (0x000007FF)
#define  PPOVERLAY_fix_last_line_systhesisN_ratio_dv_rst_sscg_sel(data)          (0x01000000&((data)<<24))
#define  PPOVERLAY_fix_last_line_systhesisN_ratio_max_multiple_synthesisn(data)  (0x00F00000&((data)<<20))
#define  PPOVERLAY_fix_last_line_systhesisN_ratio_synthesisn(data)               (0x00070000&((data)<<16))
#define  PPOVERLAY_fix_last_line_systhesisN_ratio_synthesisn_ratio(data)         (0x000007FF&(data))
#define  PPOVERLAY_fix_last_line_systhesisN_ratio_get_dv_rst_sscg_sel(data)      ((0x01000000&(data))>>24)
#define  PPOVERLAY_fix_last_line_systhesisN_ratio_get_max_multiple_synthesisn(data) ((0x00F00000&(data))>>20)
#define  PPOVERLAY_fix_last_line_systhesisN_ratio_get_synthesisn(data)           ((0x00070000&(data))>>16)
#define  PPOVERLAY_fix_last_line_systhesisN_ratio_get_synthesisn_ratio(data)     (0x000007FF&(data))

#define  PPOVERLAY_fix_last_line_mode_lock_status                               0x18028144
#define  PPOVERLAY_fix_last_line_mode_lock_status_reg_addr                       "0xB8028144"
#define  PPOVERLAY_fix_last_line_mode_lock_status_reg                            0xB8028144
#define  PPOVERLAY_fix_last_line_mode_lock_status_inst_addr                      "0x0031"
#define  set_PPOVERLAY_fix_last_line_mode_lock_status_reg(data)                  (*((volatile unsigned int*)PPOVERLAY_fix_last_line_mode_lock_status_reg)=data)
#define  get_PPOVERLAY_fix_last_line_mode_lock_status_reg                        (*((volatile unsigned int*)PPOVERLAY_fix_last_line_mode_lock_status_reg))
#define  PPOVERLAY_fix_last_line_mode_lock_status_offset_ft_lock_en_shift        (31)
#define  PPOVERLAY_fix_last_line_mode_lock_status_t_s_shift                      (16)
#define  PPOVERLAY_fix_last_line_mode_lock_status_lock_th_shift                  (0)
#define  PPOVERLAY_fix_last_line_mode_lock_status_offset_ft_lock_en_mask         (0x80000000)
#define  PPOVERLAY_fix_last_line_mode_lock_status_t_s_mask                       (0x00010000)
#define  PPOVERLAY_fix_last_line_mode_lock_status_lock_th_mask                   (0x0000FFFF)
#define  PPOVERLAY_fix_last_line_mode_lock_status_offset_ft_lock_en(data)        (0x80000000&((data)<<31))
#define  PPOVERLAY_fix_last_line_mode_lock_status_t_s(data)                      (0x00010000&((data)<<16))
#define  PPOVERLAY_fix_last_line_mode_lock_status_lock_th(data)                  (0x0000FFFF&(data))
#define  PPOVERLAY_fix_last_line_mode_lock_status_get_offset_ft_lock_en(data)    ((0x80000000&(data))>>31)
#define  PPOVERLAY_fix_last_line_mode_lock_status_get_t_s(data)                  ((0x00010000&(data))>>16)
#define  PPOVERLAY_fix_last_line_mode_lock_status_get_lock_th(data)              (0x0000FFFF&(data))

#define  PPOVERLAY_fix_last_line_mode_conter0                                   0x18028148
#define  PPOVERLAY_fix_last_line_mode_conter0_reg_addr                           "0xB8028148"
#define  PPOVERLAY_fix_last_line_mode_conter0_reg                                0xB8028148
#define  PPOVERLAY_fix_last_line_mode_conter0_inst_addr                          "0x0032"
#define  set_PPOVERLAY_fix_last_line_mode_conter0_reg(data)                      (*((volatile unsigned int*)PPOVERLAY_fix_last_line_mode_conter0_reg)=data)
#define  get_PPOVERLAY_fix_last_line_mode_conter0_reg                            (*((volatile unsigned int*)PPOVERLAY_fix_last_line_mode_conter0_reg))
#define  PPOVERLAY_fix_last_line_mode_conter0_offset_ft_shift                    (0)
#define  PPOVERLAY_fix_last_line_mode_conter0_offset_ft_mask                     (0x00001FFF)
#define  PPOVERLAY_fix_last_line_mode_conter0_offset_ft(data)                    (0x00001FFF&(data))
#define  PPOVERLAY_fix_last_line_mode_conter0_get_offset_ft(data)                (0x00001FFF&(data))

#define  PPOVERLAY_fix_last_line_mode_counter1                                  0x1802814C
#define  PPOVERLAY_fix_last_line_mode_counter1_reg_addr                          "0xB802814C"
#define  PPOVERLAY_fix_last_line_mode_counter1_reg                               0xB802814C
#define  PPOVERLAY_fix_last_line_mode_counter1_inst_addr                         "0x0033"
#define  set_PPOVERLAY_fix_last_line_mode_counter1_reg(data)                     (*((volatile unsigned int*)PPOVERLAY_fix_last_line_mode_counter1_reg)=data)
#define  get_PPOVERLAY_fix_last_line_mode_counter1_reg                           (*((volatile unsigned int*)PPOVERLAY_fix_last_line_mode_counter1_reg))
#define  PPOVERLAY_fix_last_line_mode_counter1_phase_error_ft_shift              (0)
#define  PPOVERLAY_fix_last_line_mode_counter1_phase_error_ft_mask               (0x00FFFFFF)
#define  PPOVERLAY_fix_last_line_mode_counter1_phase_error_ft(data)              (0x00FFFFFF&(data))
#define  PPOVERLAY_fix_last_line_mode_counter1_get_phase_error_ft(data)          (0x00FFFFFF&(data))

#define  PPOVERLAY_fix_last_line_mode_lock_wde                                  0x18028150
#define  PPOVERLAY_fix_last_line_mode_lock_wde_reg_addr                          "0xB8028150"
#define  PPOVERLAY_fix_last_line_mode_lock_wde_reg                               0xB8028150
#define  PPOVERLAY_fix_last_line_mode_lock_wde_inst_addr                         "0x0034"
#define  set_PPOVERLAY_fix_last_line_mode_lock_wde_reg(data)                     (*((volatile unsigned int*)PPOVERLAY_fix_last_line_mode_lock_wde_reg)=data)
#define  get_PPOVERLAY_fix_last_line_mode_lock_wde_reg                           (*((volatile unsigned int*)PPOVERLAY_fix_last_line_mode_lock_wde_reg))
#define  PPOVERLAY_fix_last_line_mode_lock_wde_wde_fll_track_unlock_shift        (1)
#define  PPOVERLAY_fix_last_line_mode_lock_wde_wde_fll_track_unlock_mask         (0x00000002)
#define  PPOVERLAY_fix_last_line_mode_lock_wde_wde_fll_track_unlock(data)        (0x00000002&((data)<<1))
#define  PPOVERLAY_fix_last_line_mode_lock_wde_get_wde_fll_track_unlock(data)    ((0x00000002&(data))>>1)

#define  PPOVERLAY_DTG_LC                                                       0x18028228
#define  PPOVERLAY_DTG_LC_reg_addr                                               "0xB8028228"
#define  PPOVERLAY_DTG_LC_reg                                                    0xB8028228
#define  PPOVERLAY_DTG_LC_inst_addr                                              "0x0035"
#define  set_PPOVERLAY_DTG_LC_reg(data)                                          (*((volatile unsigned int*)PPOVERLAY_DTG_LC_reg)=data)
#define  get_PPOVERLAY_DTG_LC_reg                                                (*((volatile unsigned int*)PPOVERLAY_DTG_LC_reg))
#define  PPOVERLAY_DTG_LC_dtg_vlcen_shift                                        (31)
#define  PPOVERLAY_DTG_LC_dtg_vlc_mode_shift                                     (30)
#define  PPOVERLAY_DTG_LC_dtg_vlc_src_sel_shift                                  (16)
#define  PPOVERLAY_DTG_LC_debug_mux_shift                                        (13)
#define  PPOVERLAY_DTG_LC_dtg_vln_shift                                          (0)
#define  PPOVERLAY_DTG_LC_dtg_vlcen_mask                                         (0x80000000)
#define  PPOVERLAY_DTG_LC_dtg_vlc_mode_mask                                      (0x40000000)
#define  PPOVERLAY_DTG_LC_dtg_vlc_src_sel_mask                                   (0x00030000)
#define  PPOVERLAY_DTG_LC_debug_mux_mask                                         (0x0000E000)
#define  PPOVERLAY_DTG_LC_dtg_vln_mask                                           (0x00001FFF)
#define  PPOVERLAY_DTG_LC_dtg_vlcen(data)                                        (0x80000000&((data)<<31))
#define  PPOVERLAY_DTG_LC_dtg_vlc_mode(data)                                     (0x40000000&((data)<<30))
#define  PPOVERLAY_DTG_LC_dtg_vlc_src_sel(data)                                  (0x00030000&((data)<<16))
#define  PPOVERLAY_DTG_LC_debug_mux(data)                                        (0x0000E000&((data)<<13))
#define  PPOVERLAY_DTG_LC_dtg_vln(data)                                          (0x00001FFF&(data))
#define  PPOVERLAY_DTG_LC_get_dtg_vlcen(data)                                    ((0x80000000&(data))>>31)
#define  PPOVERLAY_DTG_LC_get_dtg_vlc_mode(data)                                 ((0x40000000&(data))>>30)
#define  PPOVERLAY_DTG_LC_get_dtg_vlc_src_sel(data)                              ((0x00030000&(data))>>16)
#define  PPOVERLAY_DTG_LC_get_debug_mux(data)                                    ((0x0000E000&(data))>>13)
#define  PPOVERLAY_DTG_LC_get_dtg_vln(data)                                      (0x00001FFF&(data))

#define  PPOVERLAY_SRAM_OK_main_SET                                             0x1802822C
#define  PPOVERLAY_SRAM_OK_main_SET_reg_addr                                     "0xB802822C"
#define  PPOVERLAY_SRAM_OK_main_SET_reg                                          0xB802822C
#define  PPOVERLAY_SRAM_OK_main_SET_inst_addr                                    "0x0036"
#define  set_PPOVERLAY_SRAM_OK_main_SET_reg(data)                                (*((volatile unsigned int*)PPOVERLAY_SRAM_OK_main_SET_reg)=data)
#define  get_PPOVERLAY_SRAM_OK_main_SET_reg                                      (*((volatile unsigned int*)PPOVERLAY_SRAM_OK_main_SET_reg))
#define  PPOVERLAY_SRAM_OK_main_SET_sram_ok_main_meas_en_shift                   (16)
#define  PPOVERLAY_SRAM_OK_main_SET_sram_ok_main_line_th_shift                   (12)
#define  PPOVERLAY_SRAM_OK_main_SET_sram_ok_main_16pix_th_shift                  (0)
#define  PPOVERLAY_SRAM_OK_main_SET_sram_ok_main_meas_en_mask                    (0x00010000)
#define  PPOVERLAY_SRAM_OK_main_SET_sram_ok_main_line_th_mask                    (0x00003000)
#define  PPOVERLAY_SRAM_OK_main_SET_sram_ok_main_16pix_th_mask                   (0x000001FF)
#define  PPOVERLAY_SRAM_OK_main_SET_sram_ok_main_meas_en(data)                   (0x00010000&((data)<<16))
#define  PPOVERLAY_SRAM_OK_main_SET_sram_ok_main_line_th(data)                   (0x00003000&((data)<<12))
#define  PPOVERLAY_SRAM_OK_main_SET_sram_ok_main_16pix_th(data)                  (0x000001FF&(data))
#define  PPOVERLAY_SRAM_OK_main_SET_get_sram_ok_main_meas_en(data)               ((0x00010000&(data))>>16)
#define  PPOVERLAY_SRAM_OK_main_SET_get_sram_ok_main_line_th(data)               ((0x00003000&(data))>>12)
#define  PPOVERLAY_SRAM_OK_main_SET_get_sram_ok_main_16pix_th(data)              (0x000001FF&(data))

#define  PPOVERLAY_SRAM_OK_main_Result_odd                                      0x18028230
#define  PPOVERLAY_SRAM_OK_main_Result_odd_reg_addr                              "0xB8028230"
#define  PPOVERLAY_SRAM_OK_main_Result_odd_reg                                   0xB8028230
#define  PPOVERLAY_SRAM_OK_main_Result_odd_inst_addr                             "0x0037"
#define  set_PPOVERLAY_SRAM_OK_main_Result_odd_reg(data)                         (*((volatile unsigned int*)PPOVERLAY_SRAM_OK_main_Result_odd_reg)=data)
#define  get_PPOVERLAY_SRAM_OK_main_Result_odd_reg                               (*((volatile unsigned int*)PPOVERLAY_SRAM_OK_main_Result_odd_reg))
#define  PPOVERLAY_SRAM_OK_main_Result_odd_dummy_31_29_shift                     (29)
#define  PPOVERLAY_SRAM_OK_main_Result_odd_line_cnt_sram_ok_main_odd_shift       (16)
#define  PPOVERLAY_SRAM_OK_main_Result_odd_pix_cnt_sram_ok_main_odd_shift        (0)
#define  PPOVERLAY_SRAM_OK_main_Result_odd_dummy_31_29_mask                      (0xE0000000)
#define  PPOVERLAY_SRAM_OK_main_Result_odd_line_cnt_sram_ok_main_odd_mask        (0x1FFF0000)
#define  PPOVERLAY_SRAM_OK_main_Result_odd_pix_cnt_sram_ok_main_odd_mask         (0x00001FFF)
#define  PPOVERLAY_SRAM_OK_main_Result_odd_dummy_31_29(data)                     (0xE0000000&((data)<<29))
#define  PPOVERLAY_SRAM_OK_main_Result_odd_line_cnt_sram_ok_main_odd(data)       (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_SRAM_OK_main_Result_odd_pix_cnt_sram_ok_main_odd(data)        (0x00001FFF&(data))
#define  PPOVERLAY_SRAM_OK_main_Result_odd_get_dummy_31_29(data)                 ((0xE0000000&(data))>>29)
#define  PPOVERLAY_SRAM_OK_main_Result_odd_get_line_cnt_sram_ok_main_odd(data)   ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_SRAM_OK_main_Result_odd_get_pix_cnt_sram_ok_main_odd(data)    (0x00001FFF&(data))

#define  PPOVERLAY_SRAM_OK_main_Result_even                                     0x18028234
#define  PPOVERLAY_SRAM_OK_main_Result_even_reg_addr                             "0xB8028234"
#define  PPOVERLAY_SRAM_OK_main_Result_even_reg                                  0xB8028234
#define  PPOVERLAY_SRAM_OK_main_Result_even_inst_addr                            "0x0038"
#define  set_PPOVERLAY_SRAM_OK_main_Result_even_reg(data)                        (*((volatile unsigned int*)PPOVERLAY_SRAM_OK_main_Result_even_reg)=data)
#define  get_PPOVERLAY_SRAM_OK_main_Result_even_reg                              (*((volatile unsigned int*)PPOVERLAY_SRAM_OK_main_Result_even_reg))
#define  PPOVERLAY_SRAM_OK_main_Result_even_dummy_31_29_shift                    (29)
#define  PPOVERLAY_SRAM_OK_main_Result_even_line_cnt_sram_ok_main_even_shift     (16)
#define  PPOVERLAY_SRAM_OK_main_Result_even_pix_cnt_sram_ok_main_even_shift      (0)
#define  PPOVERLAY_SRAM_OK_main_Result_even_dummy_31_29_mask                     (0xE0000000)
#define  PPOVERLAY_SRAM_OK_main_Result_even_line_cnt_sram_ok_main_even_mask      (0x1FFF0000)
#define  PPOVERLAY_SRAM_OK_main_Result_even_pix_cnt_sram_ok_main_even_mask       (0x00001FFF)
#define  PPOVERLAY_SRAM_OK_main_Result_even_dummy_31_29(data)                    (0xE0000000&((data)<<29))
#define  PPOVERLAY_SRAM_OK_main_Result_even_line_cnt_sram_ok_main_even(data)     (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_SRAM_OK_main_Result_even_pix_cnt_sram_ok_main_even(data)      (0x00001FFF&(data))
#define  PPOVERLAY_SRAM_OK_main_Result_even_get_dummy_31_29(data)                ((0xE0000000&(data))>>29)
#define  PPOVERLAY_SRAM_OK_main_Result_even_get_line_cnt_sram_ok_main_even(data) ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_SRAM_OK_main_Result_even_get_pix_cnt_sram_ok_main_even(data)  (0x00001FFF&(data))

#define  PPOVERLAY_SRAM_OK_sub_SET                                              0x18028238
#define  PPOVERLAY_SRAM_OK_sub_SET_reg_addr                                      "0xB8028238"
#define  PPOVERLAY_SRAM_OK_sub_SET_reg                                           0xB8028238
#define  PPOVERLAY_SRAM_OK_sub_SET_inst_addr                                     "0x0039"
#define  set_PPOVERLAY_SRAM_OK_sub_SET_reg(data)                                 (*((volatile unsigned int*)PPOVERLAY_SRAM_OK_sub_SET_reg)=data)
#define  get_PPOVERLAY_SRAM_OK_sub_SET_reg                                       (*((volatile unsigned int*)PPOVERLAY_SRAM_OK_sub_SET_reg))
#define  PPOVERLAY_SRAM_OK_sub_SET_sram_ok_sub_meas_en_shift                     (16)
#define  PPOVERLAY_SRAM_OK_sub_SET_sram_ok_sub_line_th_shift                     (12)
#define  PPOVERLAY_SRAM_OK_sub_SET_sram_ok_sub_16pix_th_shift                    (0)
#define  PPOVERLAY_SRAM_OK_sub_SET_sram_ok_sub_meas_en_mask                      (0x00010000)
#define  PPOVERLAY_SRAM_OK_sub_SET_sram_ok_sub_line_th_mask                      (0x00003000)
#define  PPOVERLAY_SRAM_OK_sub_SET_sram_ok_sub_16pix_th_mask                     (0x000001FF)
#define  PPOVERLAY_SRAM_OK_sub_SET_sram_ok_sub_meas_en(data)                     (0x00010000&((data)<<16))
#define  PPOVERLAY_SRAM_OK_sub_SET_sram_ok_sub_line_th(data)                     (0x00003000&((data)<<12))
#define  PPOVERLAY_SRAM_OK_sub_SET_sram_ok_sub_16pix_th(data)                    (0x000001FF&(data))
#define  PPOVERLAY_SRAM_OK_sub_SET_get_sram_ok_sub_meas_en(data)                 ((0x00010000&(data))>>16)
#define  PPOVERLAY_SRAM_OK_sub_SET_get_sram_ok_sub_line_th(data)                 ((0x00003000&(data))>>12)
#define  PPOVERLAY_SRAM_OK_sub_SET_get_sram_ok_sub_16pix_th(data)                (0x000001FF&(data))

#define  PPOVERLAY_SRAM_OK_sub_Result_odd                                       0x1802823C
#define  PPOVERLAY_SRAM_OK_sub_Result_odd_reg_addr                               "0xB802823C"
#define  PPOVERLAY_SRAM_OK_sub_Result_odd_reg                                    0xB802823C
#define  PPOVERLAY_SRAM_OK_sub_Result_odd_inst_addr                              "0x003A"
#define  set_PPOVERLAY_SRAM_OK_sub_Result_odd_reg(data)                          (*((volatile unsigned int*)PPOVERLAY_SRAM_OK_sub_Result_odd_reg)=data)
#define  get_PPOVERLAY_SRAM_OK_sub_Result_odd_reg                                (*((volatile unsigned int*)PPOVERLAY_SRAM_OK_sub_Result_odd_reg))
#define  PPOVERLAY_SRAM_OK_sub_Result_odd_dummy_31_29_shift                      (29)
#define  PPOVERLAY_SRAM_OK_sub_Result_odd_line_cnt_sram_ok_sub_odd_shift         (16)
#define  PPOVERLAY_SRAM_OK_sub_Result_odd_pix_cnt_sram_ok_sub_odd_shift          (0)
#define  PPOVERLAY_SRAM_OK_sub_Result_odd_dummy_31_29_mask                       (0xE0000000)
#define  PPOVERLAY_SRAM_OK_sub_Result_odd_line_cnt_sram_ok_sub_odd_mask          (0x1FFF0000)
#define  PPOVERLAY_SRAM_OK_sub_Result_odd_pix_cnt_sram_ok_sub_odd_mask           (0x00001FFF)
#define  PPOVERLAY_SRAM_OK_sub_Result_odd_dummy_31_29(data)                      (0xE0000000&((data)<<29))
#define  PPOVERLAY_SRAM_OK_sub_Result_odd_line_cnt_sram_ok_sub_odd(data)         (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_SRAM_OK_sub_Result_odd_pix_cnt_sram_ok_sub_odd(data)          (0x00001FFF&(data))
#define  PPOVERLAY_SRAM_OK_sub_Result_odd_get_dummy_31_29(data)                  ((0xE0000000&(data))>>29)
#define  PPOVERLAY_SRAM_OK_sub_Result_odd_get_line_cnt_sram_ok_sub_odd(data)     ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_SRAM_OK_sub_Result_odd_get_pix_cnt_sram_ok_sub_odd(data)      (0x00001FFF&(data))

#define  PPOVERLAY_SRAM_OK_sub_Result_even                                      0x18028240
#define  PPOVERLAY_SRAM_OK_sub_Result_even_reg_addr                              "0xB8028240"
#define  PPOVERLAY_SRAM_OK_sub_Result_even_reg                                   0xB8028240
#define  PPOVERLAY_SRAM_OK_sub_Result_even_inst_addr                             "0x003B"
#define  set_PPOVERLAY_SRAM_OK_sub_Result_even_reg(data)                         (*((volatile unsigned int*)PPOVERLAY_SRAM_OK_sub_Result_even_reg)=data)
#define  get_PPOVERLAY_SRAM_OK_sub_Result_even_reg                               (*((volatile unsigned int*)PPOVERLAY_SRAM_OK_sub_Result_even_reg))
#define  PPOVERLAY_SRAM_OK_sub_Result_even_dummy_31_29_shift                     (29)
#define  PPOVERLAY_SRAM_OK_sub_Result_even_line_cnt_sram_ok_sub_even_shift       (16)
#define  PPOVERLAY_SRAM_OK_sub_Result_even_pix_cnt_sram_ok_sub_even_shift        (0)
#define  PPOVERLAY_SRAM_OK_sub_Result_even_dummy_31_29_mask                      (0xE0000000)
#define  PPOVERLAY_SRAM_OK_sub_Result_even_line_cnt_sram_ok_sub_even_mask        (0x1FFF0000)
#define  PPOVERLAY_SRAM_OK_sub_Result_even_pix_cnt_sram_ok_sub_even_mask         (0x00001FFF)
#define  PPOVERLAY_SRAM_OK_sub_Result_even_dummy_31_29(data)                     (0xE0000000&((data)<<29))
#define  PPOVERLAY_SRAM_OK_sub_Result_even_line_cnt_sram_ok_sub_even(data)       (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_SRAM_OK_sub_Result_even_pix_cnt_sram_ok_sub_even(data)        (0x00001FFF&(data))
#define  PPOVERLAY_SRAM_OK_sub_Result_even_get_dummy_31_29(data)                 ((0xE0000000&(data))>>29)
#define  PPOVERLAY_SRAM_OK_sub_Result_even_get_line_cnt_sram_ok_sub_even(data)   ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_SRAM_OK_sub_Result_even_get_pix_cnt_sram_ok_sub_even(data)    (0x00001FFF&(data))

#define  PPOVERLAY_rbus_control                                                 0x18028244
#define  PPOVERLAY_rbus_control_reg_addr                                         "0xB8028244"
#define  PPOVERLAY_rbus_control_reg                                              0xB8028244
#define  PPOVERLAY_rbus_control_inst_addr                                        "0x003C"
#define  set_PPOVERLAY_rbus_control_reg(data)                                    (*((volatile unsigned int*)PPOVERLAY_rbus_control_reg)=data)
#define  get_PPOVERLAY_rbus_control_reg                                          (*((volatile unsigned int*)PPOVERLAY_rbus_control_reg))
#define  PPOVERLAY_rbus_control_rbus_reset_shift                                 (0)
#define  PPOVERLAY_rbus_control_rbus_reset_mask                                  (0x00000001)
#define  PPOVERLAY_rbus_control_rbus_reset(data)                                 (0x00000001&(data))
#define  PPOVERLAY_rbus_control_get_rbus_reset(data)                             (0x00000001&(data))

#define  PPOVERLAY_new_meas0_linecnt_real                                       0x18028248
#define  PPOVERLAY_new_meas0_linecnt_real_reg_addr                               "0xB8028248"
#define  PPOVERLAY_new_meas0_linecnt_real_reg                                    0xB8028248
#define  PPOVERLAY_new_meas0_linecnt_real_inst_addr                              "0x003D"
#define  set_PPOVERLAY_new_meas0_linecnt_real_reg(data)                          (*((volatile unsigned int*)PPOVERLAY_new_meas0_linecnt_real_reg)=data)
#define  get_PPOVERLAY_new_meas0_linecnt_real_reg                                (*((volatile unsigned int*)PPOVERLAY_new_meas0_linecnt_real_reg))
#define  PPOVERLAY_new_meas0_linecnt_real_line_cnt_rt_shift                      (0)
#define  PPOVERLAY_new_meas0_linecnt_real_line_cnt_rt_mask                       (0x00001FFF)
#define  PPOVERLAY_new_meas0_linecnt_real_line_cnt_rt(data)                      (0x00001FFF&(data))
#define  PPOVERLAY_new_meas0_linecnt_real_get_line_cnt_rt(data)                  (0x00001FFF&(data))

#define  PPOVERLAY_new_meas1_linecnt_real                                       0x18028258
#define  PPOVERLAY_new_meas1_linecnt_real_reg_addr                               "0xB8028258"
#define  PPOVERLAY_new_meas1_linecnt_real_reg                                    0xB8028258
#define  PPOVERLAY_new_meas1_linecnt_real_inst_addr                              "0x003E"
#define  set_PPOVERLAY_new_meas1_linecnt_real_reg(data)                          (*((volatile unsigned int*)PPOVERLAY_new_meas1_linecnt_real_reg)=data)
#define  get_PPOVERLAY_new_meas1_linecnt_real_reg                                (*((volatile unsigned int*)PPOVERLAY_new_meas1_linecnt_real_reg))
#define  PPOVERLAY_new_meas1_linecnt_real_uzudtg_line_cnt_rt_shift               (16)
#define  PPOVERLAY_new_meas1_linecnt_real_memcdtg_line_cnt_rt_shift              (0)
#define  PPOVERLAY_new_meas1_linecnt_real_uzudtg_line_cnt_rt_mask                (0x1FFF0000)
#define  PPOVERLAY_new_meas1_linecnt_real_memcdtg_line_cnt_rt_mask               (0x00001FFF)
#define  PPOVERLAY_new_meas1_linecnt_real_uzudtg_line_cnt_rt(data)               (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_new_meas1_linecnt_real_memcdtg_line_cnt_rt(data)              (0x00001FFF&(data))
#define  PPOVERLAY_new_meas1_linecnt_real_get_uzudtg_line_cnt_rt(data)           ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_new_meas1_linecnt_real_get_memcdtg_line_cnt_rt(data)          (0x00001FFF&(data))

#define  PPOVERLAY_new_meas2_linecnt_real                                       0x1802825C
#define  PPOVERLAY_new_meas2_linecnt_real_reg_addr                               "0xB802825C"
#define  PPOVERLAY_new_meas2_linecnt_real_reg                                    0xB802825C
#define  PPOVERLAY_new_meas2_linecnt_real_inst_addr                              "0x003F"
#define  set_PPOVERLAY_new_meas2_linecnt_real_reg(data)                          (*((volatile unsigned int*)PPOVERLAY_new_meas2_linecnt_real_reg)=data)
#define  get_PPOVERLAY_new_meas2_linecnt_real_reg                                (*((volatile unsigned int*)PPOVERLAY_new_meas2_linecnt_real_reg))
#define  PPOVERLAY_new_meas2_linecnt_real_osddtg_line_cnt_rt_shift               (16)
#define  PPOVERLAY_new_meas2_linecnt_real_uzudtg_dly_line_cnt_rt_shift           (0)
#define  PPOVERLAY_new_meas2_linecnt_real_osddtg_line_cnt_rt_mask                (0x1FFF0000)
#define  PPOVERLAY_new_meas2_linecnt_real_uzudtg_dly_line_cnt_rt_mask            (0x00001FFF)
#define  PPOVERLAY_new_meas2_linecnt_real_osddtg_line_cnt_rt(data)               (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_new_meas2_linecnt_real_uzudtg_dly_line_cnt_rt(data)           (0x00001FFF&(data))
#define  PPOVERLAY_new_meas2_linecnt_real_get_osddtg_line_cnt_rt(data)           ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_new_meas2_linecnt_real_get_uzudtg_dly_line_cnt_rt(data)       (0x00001FFF&(data))

#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path                 0x1802824C
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_reg_addr         "0xB802824C"
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_reg              0xB802824C
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_inst_addr        "0x0040"
#define  set_PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_reg(data)    (*((volatile unsigned int*)PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_reg)=data)
#define  get_PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_reg          (*((volatile unsigned int*)PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_reg))
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_m_not_fs_line_pixel_en_shift (31)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_m_field_flag_shift (30)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_m_not_fs_line_value_shift (16)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_m_underflow_flag_shift (15)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_m_overflow_flag_shift (14)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_m_not_fs_pixel_value_shift (0)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_m_not_fs_line_pixel_en_mask (0x80000000)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_m_field_flag_mask (0x40000000)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_m_not_fs_line_value_mask (0x1FFF0000)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_m_underflow_flag_mask (0x00008000)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_m_overflow_flag_mask (0x00004000)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_m_not_fs_pixel_value_mask (0x00001FFF)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_m_not_fs_line_pixel_en(data) (0x80000000&((data)<<31))
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_m_field_flag(data) (0x40000000&((data)<<30))
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_m_not_fs_line_value(data) (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_m_underflow_flag(data) (0x00008000&((data)<<15))
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_m_overflow_flag(data) (0x00004000&((data)<<14))
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_m_not_fs_pixel_value(data) (0x00001FFF&(data))
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_get_m_not_fs_line_pixel_en(data) ((0x80000000&(data))>>31)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_get_m_field_flag(data) ((0x40000000&(data))>>30)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_get_m_not_fs_line_value(data) ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_get_m_underflow_flag(data) ((0x00008000&(data))>>15)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_get_m_overflow_flag(data) ((0x00004000&(data))>>14)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Main_path_get_m_not_fs_pixel_value(data) (0x00001FFF&(data))

#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path                  0x18028250
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_reg_addr          "0xB8028250"
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_reg               0xB8028250
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_inst_addr         "0x0041"
#define  set_PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_reg(data)     (*((volatile unsigned int*)PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_reg)=data)
#define  get_PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_reg           (*((volatile unsigned int*)PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_reg))
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_s_not_fs_line_pixel_en_shift (31)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_s_field_flag_shift (30)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_s_not_fs_line_value_shift (16)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_s_underflow_flag_shift (15)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_s_overflow_flag_shift (14)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_s_not_fs_pixel_value_shift (0)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_s_not_fs_line_pixel_en_mask (0x80000000)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_s_field_flag_mask (0x40000000)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_s_not_fs_line_value_mask (0x1FFF0000)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_s_underflow_flag_mask (0x00008000)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_s_overflow_flag_mask (0x00004000)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_s_not_fs_pixel_value_mask (0x00001FFF)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_s_not_fs_line_pixel_en(data) (0x80000000&((data)<<31))
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_s_field_flag(data) (0x40000000&((data)<<30))
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_s_not_fs_line_value(data) (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_s_underflow_flag(data) (0x00008000&((data)<<15))
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_s_overflow_flag(data) (0x00004000&((data)<<14))
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_s_not_fs_pixel_value(data) (0x00001FFF&(data))
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_get_s_not_fs_line_pixel_en(data) ((0x80000000&(data))>>31)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_get_s_field_flag(data) ((0x40000000&(data))>>30)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_get_s_not_fs_line_value(data) ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_get_s_underflow_flag(data) ((0x00008000&(data))>>15)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_get_s_overflow_flag(data) ((0x00004000&(data))>>14)
#define  PPOVERLAY_Measure_not_frame_sync_Line_pixels_Sub_path_get_s_not_fs_pixel_value(data) (0x00001FFF&(data))

#define  PPOVERLAY_D_Domain_Counter_DVS_CTRL                                    0x18028254
#define  PPOVERLAY_D_Domain_Counter_DVS_CTRL_reg_addr                            "0xB8028254"
#define  PPOVERLAY_D_Domain_Counter_DVS_CTRL_reg                                 0xB8028254
#define  PPOVERLAY_D_Domain_Counter_DVS_CTRL_inst_addr                           "0x0042"
#define  set_PPOVERLAY_D_Domain_Counter_DVS_CTRL_reg(data)                       (*((volatile unsigned int*)PPOVERLAY_D_Domain_Counter_DVS_CTRL_reg)=data)
#define  get_PPOVERLAY_D_Domain_Counter_DVS_CTRL_reg                             (*((volatile unsigned int*)PPOVERLAY_D_Domain_Counter_DVS_CTRL_reg))
#define  PPOVERLAY_D_Domain_Counter_DVS_CTRL_d_counter_dvs_en_shift              (31)
#define  PPOVERLAY_D_Domain_Counter_DVS_CTRL_d_counter_dvs_mask_shift            (16)
#define  PPOVERLAY_D_Domain_Counter_DVS_CTRL_d_counter_dvs_set_shift             (0)
#define  PPOVERLAY_D_Domain_Counter_DVS_CTRL_d_counter_dvs_en_mask               (0x80000000)
#define  PPOVERLAY_D_Domain_Counter_DVS_CTRL_d_counter_dvs_mask_mask             (0x00010000)
#define  PPOVERLAY_D_Domain_Counter_DVS_CTRL_d_counter_dvs_set_mask              (0x00001FFF)
#define  PPOVERLAY_D_Domain_Counter_DVS_CTRL_d_counter_dvs_en(data)              (0x80000000&((data)<<31))
#define  PPOVERLAY_D_Domain_Counter_DVS_CTRL_d_counter_dvs_mask(data)            (0x00010000&((data)<<16))
#define  PPOVERLAY_D_Domain_Counter_DVS_CTRL_d_counter_dvs_set(data)             (0x00001FFF&(data))
#define  PPOVERLAY_D_Domain_Counter_DVS_CTRL_get_d_counter_dvs_en(data)          ((0x80000000&(data))>>31)
#define  PPOVERLAY_D_Domain_Counter_DVS_CTRL_get_d_counter_dvs_mask(data)        ((0x00010000&(data))>>16)
#define  PPOVERLAY_D_Domain_Counter_DVS_CTRL_get_d_counter_dvs_set(data)         (0x00001FFF&(data))

#define  PPOVERLAY_FIX_LAST_LINE_EXIT_CTRL                                      0x18028280
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_CTRL_reg_addr                              "0xB8028280"
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_CTRL_reg                                   0xB8028280
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_CTRL_inst_addr                             "0x0043"
#define  set_PPOVERLAY_FIX_LAST_LINE_EXIT_CTRL_reg(data)                         (*((volatile unsigned int*)PPOVERLAY_FIX_LAST_LINE_EXIT_CTRL_reg)=data)
#define  get_PPOVERLAY_FIX_LAST_LINE_EXIT_CTRL_reg                               (*((volatile unsigned int*)PPOVERLAY_FIX_LAST_LINE_EXIT_CTRL_reg))
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_CTRL_fix_last_line_exit_en_shift           (31)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_CTRL_more_line_th_shift                    (16)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_CTRL_less_line_th_shift                    (0)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_CTRL_fix_last_line_exit_en_mask            (0x80000000)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_CTRL_more_line_th_mask                     (0x1FFF0000)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_CTRL_less_line_th_mask                     (0x00001FFF)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_CTRL_fix_last_line_exit_en(data)           (0x80000000&((data)<<31))
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_CTRL_more_line_th(data)                    (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_CTRL_less_line_th(data)                    (0x00001FFF&(data))
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_CTRL_get_fix_last_line_exit_en(data)       ((0x80000000&(data))>>31)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_CTRL_get_more_line_th(data)                ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_CTRL_get_less_line_th(data)                (0x00001FFF&(data))

#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS1                                   0x18028284
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS1_reg_addr                           "0xB8028284"
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS1_reg                                0xB8028284
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS1_inst_addr                          "0x0044"
#define  set_PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS1_reg(data)                      (*((volatile unsigned int*)PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS1_reg)=data)
#define  get_PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS1_reg                            (*((volatile unsigned int*)PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS1_reg))
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS1_fll_status_counter_shift           (0)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS1_fll_status_counter_mask            (0x00001FFF)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS1_fll_status_counter(data)           (0x00001FFF&(data))
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS1_get_fll_status_counter(data)       (0x00001FFF&(data))

#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2                                   0x18028288
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_reg_addr                           "0xB8028288"
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_reg                                0xB8028288
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_inst_addr                          "0x0045"
#define  set_PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_reg(data)                      (*((volatile unsigned int*)PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_reg)=data)
#define  get_PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_reg                            (*((volatile unsigned int*)PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_reg))
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_wd_fix_last_more_en_shift          (5)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_wd_fix_last_less_en_shift          (4)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_wd_fix_last_more_than_th_en_shift  (3)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_wd_fix_last_less_than_th_en_shift  (2)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_wd_fix_last_no_ivs_en_shift        (1)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_wd_fix_last_line_ivs_too_close_en_shift (0)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_wd_fix_last_more_en_mask           (0x00000020)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_wd_fix_last_less_en_mask           (0x00000010)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_wd_fix_last_more_than_th_en_mask   (0x00000008)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_wd_fix_last_less_than_th_en_mask   (0x00000004)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_wd_fix_last_no_ivs_en_mask         (0x00000002)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_wd_fix_last_line_ivs_too_close_en_mask (0x00000001)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_wd_fix_last_more_en(data)          (0x00000020&((data)<<5))
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_wd_fix_last_less_en(data)          (0x00000010&((data)<<4))
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_wd_fix_last_more_than_th_en(data)  (0x00000008&((data)<<3))
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_wd_fix_last_less_than_th_en(data)  (0x00000004&((data)<<2))
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_wd_fix_last_no_ivs_en(data)        (0x00000002&((data)<<1))
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_wd_fix_last_line_ivs_too_close_en(data) (0x00000001&(data))
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_get_wd_fix_last_more_en(data)      ((0x00000020&(data))>>5)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_get_wd_fix_last_less_en(data)      ((0x00000010&(data))>>4)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_get_wd_fix_last_more_than_th_en(data) ((0x00000008&(data))>>3)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_get_wd_fix_last_less_than_th_en(data) ((0x00000004&(data))>>2)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_get_wd_fix_last_no_ivs_en(data)    ((0x00000002&(data))>>1)
#define  PPOVERLAY_FIX_LAST_LINE_EXIT_STATUS2_get_wd_fix_last_line_ivs_too_close_en(data) (0x00000001&(data))

#define  PPOVERLAY_SRAM_OK_main_Result_left                                     0x180282C4
#define  PPOVERLAY_SRAM_OK_main_Result_left_reg_addr                             "0xB80282C4"
#define  PPOVERLAY_SRAM_OK_main_Result_left_reg                                  0xB80282C4
#define  PPOVERLAY_SRAM_OK_main_Result_left_inst_addr                            "0x0046"
#define  set_PPOVERLAY_SRAM_OK_main_Result_left_reg(data)                        (*((volatile unsigned int*)PPOVERLAY_SRAM_OK_main_Result_left_reg)=data)
#define  get_PPOVERLAY_SRAM_OK_main_Result_left_reg                              (*((volatile unsigned int*)PPOVERLAY_SRAM_OK_main_Result_left_reg))
#define  PPOVERLAY_SRAM_OK_main_Result_left_dummy_31_29_shift                    (29)
#define  PPOVERLAY_SRAM_OK_main_Result_left_line_cnt_sram_ok_main_left_shift     (16)
#define  PPOVERLAY_SRAM_OK_main_Result_left_pix_cnt_sram_ok_main_left_shift      (0)
#define  PPOVERLAY_SRAM_OK_main_Result_left_dummy_31_29_mask                     (0xE0000000)
#define  PPOVERLAY_SRAM_OK_main_Result_left_line_cnt_sram_ok_main_left_mask      (0x1FFF0000)
#define  PPOVERLAY_SRAM_OK_main_Result_left_pix_cnt_sram_ok_main_left_mask       (0x00001FFF)
#define  PPOVERLAY_SRAM_OK_main_Result_left_dummy_31_29(data)                    (0xE0000000&((data)<<29))
#define  PPOVERLAY_SRAM_OK_main_Result_left_line_cnt_sram_ok_main_left(data)     (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_SRAM_OK_main_Result_left_pix_cnt_sram_ok_main_left(data)      (0x00001FFF&(data))
#define  PPOVERLAY_SRAM_OK_main_Result_left_get_dummy_31_29(data)                ((0xE0000000&(data))>>29)
#define  PPOVERLAY_SRAM_OK_main_Result_left_get_line_cnt_sram_ok_main_left(data) ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_SRAM_OK_main_Result_left_get_pix_cnt_sram_ok_main_left(data)  (0x00001FFF&(data))

#define  PPOVERLAY_SRAM_OK_main_Result_right                                    0x180282C8
#define  PPOVERLAY_SRAM_OK_main_Result_right_reg_addr                            "0xB80282C8"
#define  PPOVERLAY_SRAM_OK_main_Result_right_reg                                 0xB80282C8
#define  PPOVERLAY_SRAM_OK_main_Result_right_inst_addr                           "0x0047"
#define  set_PPOVERLAY_SRAM_OK_main_Result_right_reg(data)                       (*((volatile unsigned int*)PPOVERLAY_SRAM_OK_main_Result_right_reg)=data)
#define  get_PPOVERLAY_SRAM_OK_main_Result_right_reg                             (*((volatile unsigned int*)PPOVERLAY_SRAM_OK_main_Result_right_reg))
#define  PPOVERLAY_SRAM_OK_main_Result_right_dummy_31_29_shift                   (29)
#define  PPOVERLAY_SRAM_OK_main_Result_right_line_cnt_sram_ok_main_right_shift   (16)
#define  PPOVERLAY_SRAM_OK_main_Result_right_pix_cnt_sram_ok_main_right_shift    (0)
#define  PPOVERLAY_SRAM_OK_main_Result_right_dummy_31_29_mask                    (0xE0000000)
#define  PPOVERLAY_SRAM_OK_main_Result_right_line_cnt_sram_ok_main_right_mask    (0x1FFF0000)
#define  PPOVERLAY_SRAM_OK_main_Result_right_pix_cnt_sram_ok_main_right_mask     (0x00001FFF)
#define  PPOVERLAY_SRAM_OK_main_Result_right_dummy_31_29(data)                   (0xE0000000&((data)<<29))
#define  PPOVERLAY_SRAM_OK_main_Result_right_line_cnt_sram_ok_main_right(data)   (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_SRAM_OK_main_Result_right_pix_cnt_sram_ok_main_right(data)    (0x00001FFF&(data))
#define  PPOVERLAY_SRAM_OK_main_Result_right_get_dummy_31_29(data)               ((0xE0000000&(data))>>29)
#define  PPOVERLAY_SRAM_OK_main_Result_right_get_line_cnt_sram_ok_main_right(data) ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_SRAM_OK_main_Result_right_get_pix_cnt_sram_ok_main_right(data) (0x00001FFF&(data))

#define  PPOVERLAY_DVS_cnt                                                      0x180282DC
#define  PPOVERLAY_DVS_cnt_reg_addr                                              "0xB80282DC"
#define  PPOVERLAY_DVS_cnt_reg                                                   0xB80282DC
#define  PPOVERLAY_DVS_cnt_inst_addr                                             "0x0048"
#define  set_PPOVERLAY_DVS_cnt_reg(data)                                         (*((volatile unsigned int*)PPOVERLAY_DVS_cnt_reg)=data)
#define  get_PPOVERLAY_DVS_cnt_reg                                               (*((volatile unsigned int*)PPOVERLAY_DVS_cnt_reg))
#define  PPOVERLAY_DVS_cnt_dvs_cnt_shift                                         (0)
#define  PPOVERLAY_DVS_cnt_dvs_cnt_mask                                          (0x01FFFFFF)
#define  PPOVERLAY_DVS_cnt_dvs_cnt(data)                                         (0x01FFFFFF&(data))
#define  PPOVERLAY_DVS_cnt_get_dvs_cnt(data)                                     (0x01FFFFFF&(data))

#define  PPOVERLAY_DVS_SSCG_cnt                                                 0x180282E0
#define  PPOVERLAY_DVS_SSCG_cnt_reg_addr                                         "0xB80282E0"
#define  PPOVERLAY_DVS_SSCG_cnt_reg                                              0xB80282E0
#define  PPOVERLAY_DVS_SSCG_cnt_inst_addr                                        "0x0049"
#define  set_PPOVERLAY_DVS_SSCG_cnt_reg(data)                                    (*((volatile unsigned int*)PPOVERLAY_DVS_SSCG_cnt_reg)=data)
#define  get_PPOVERLAY_DVS_SSCG_cnt_reg                                          (*((volatile unsigned int*)PPOVERLAY_DVS_SSCG_cnt_reg))
#define  PPOVERLAY_DVS_SSCG_cnt_dvs_sscg_cnt_shift                               (0)
#define  PPOVERLAY_DVS_SSCG_cnt_dvs_sscg_cnt_mask                                (0x01FFFFFF)
#define  PPOVERLAY_DVS_SSCG_cnt_dvs_sscg_cnt(data)                               (0x01FFFFFF&(data))
#define  PPOVERLAY_DVS_SSCG_cnt_get_dvs_sscg_cnt(data)                           (0x01FFFFFF&(data))

#define  PPOVERLAY_uzudtg_DVS_cnt                                               0x180282E4
#define  PPOVERLAY_uzudtg_DVS_cnt_reg_addr                                       "0xB80282E4"
#define  PPOVERLAY_uzudtg_DVS_cnt_reg                                            0xB80282E4
#define  PPOVERLAY_uzudtg_DVS_cnt_inst_addr                                      "0x004A"
#define  set_PPOVERLAY_uzudtg_DVS_cnt_reg(data)                                  (*((volatile unsigned int*)PPOVERLAY_uzudtg_DVS_cnt_reg)=data)
#define  get_PPOVERLAY_uzudtg_DVS_cnt_reg                                        (*((volatile unsigned int*)PPOVERLAY_uzudtg_DVS_cnt_reg))
#define  PPOVERLAY_uzudtg_DVS_cnt_uzudtg_dvs_cnt_shift                           (0)
#define  PPOVERLAY_uzudtg_DVS_cnt_uzudtg_dvs_cnt_mask                            (0x01FFFFFF)
#define  PPOVERLAY_uzudtg_DVS_cnt_uzudtg_dvs_cnt(data)                           (0x01FFFFFF&(data))
#define  PPOVERLAY_uzudtg_DVS_cnt_get_uzudtg_dvs_cnt(data)                       (0x01FFFFFF&(data))

#define  PPOVERLAY_osddtg_DVS_cnt                                               0x180282E8
#define  PPOVERLAY_osddtg_DVS_cnt_reg_addr                                       "0xB80282E8"
#define  PPOVERLAY_osddtg_DVS_cnt_reg                                            0xB80282E8
#define  PPOVERLAY_osddtg_DVS_cnt_inst_addr                                      "0x004B"
#define  set_PPOVERLAY_osddtg_DVS_cnt_reg(data)                                  (*((volatile unsigned int*)PPOVERLAY_osddtg_DVS_cnt_reg)=data)
#define  get_PPOVERLAY_osddtg_DVS_cnt_reg                                        (*((volatile unsigned int*)PPOVERLAY_osddtg_DVS_cnt_reg))
#define  PPOVERLAY_osddtg_DVS_cnt_osddtg_dvs_cnt_shift                           (0)
#define  PPOVERLAY_osddtg_DVS_cnt_osddtg_dvs_cnt_mask                            (0x01FFFFFF)
#define  PPOVERLAY_osddtg_DVS_cnt_osddtg_dvs_cnt(data)                           (0x01FFFFFF&(data))
#define  PPOVERLAY_osddtg_DVS_cnt_get_osddtg_dvs_cnt(data)                       (0x01FFFFFF&(data))

#define  PPOVERLAY_memcdtg_DVS_cnt                                              0x180282EC
#define  PPOVERLAY_memcdtg_DVS_cnt_reg_addr                                      "0xB80282EC"
#define  PPOVERLAY_memcdtg_DVS_cnt_reg                                           0xB80282EC
#define  PPOVERLAY_memcdtg_DVS_cnt_inst_addr                                     "0x004C"
#define  set_PPOVERLAY_memcdtg_DVS_cnt_reg(data)                                 (*((volatile unsigned int*)PPOVERLAY_memcdtg_DVS_cnt_reg)=data)
#define  get_PPOVERLAY_memcdtg_DVS_cnt_reg                                       (*((volatile unsigned int*)PPOVERLAY_memcdtg_DVS_cnt_reg))
#define  PPOVERLAY_memcdtg_DVS_cnt_memcdtg_dvs_cnt_shift                         (0)
#define  PPOVERLAY_memcdtg_DVS_cnt_memcdtg_dvs_cnt_mask                          (0x01FFFFFF)
#define  PPOVERLAY_memcdtg_DVS_cnt_memcdtg_dvs_cnt(data)                         (0x01FFFFFF&(data))
#define  PPOVERLAY_memcdtg_DVS_cnt_get_memcdtg_dvs_cnt(data)                     (0x01FFFFFF&(data))

#define  PPOVERLAY_DISPD_IRQ_RECORD                                             0x180282F0
#define  PPOVERLAY_DISPD_IRQ_RECORD_reg_addr                                     "0xB80282F0"
#define  PPOVERLAY_DISPD_IRQ_RECORD_reg                                          0xB80282F0
#define  PPOVERLAY_DISPD_IRQ_RECORD_inst_addr                                    "0x004D"
#define  set_PPOVERLAY_DISPD_IRQ_RECORD_reg(data)                                (*((volatile unsigned int*)PPOVERLAY_DISPD_IRQ_RECORD_reg)=data)
#define  get_PPOVERLAY_DISPD_IRQ_RECORD_reg                                      (*((volatile unsigned int*)PPOVERLAY_DISPD_IRQ_RECORD_reg))
#define  PPOVERLAY_DISPD_IRQ_RECORD_dctl_irq_2_record_shift                      (18)
#define  PPOVERLAY_DISPD_IRQ_RECORD_dmato3dlut_irq_record_shift                  (11)
#define  PPOVERLAY_DISPD_IRQ_RECORD_d_hist_main_irq_record_shift                 (10)
#define  PPOVERLAY_DISPD_IRQ_RECORD_d_hist_sub_irq_record_shift                  (9)
#define  PPOVERLAY_DISPD_IRQ_RECORD_m_plus_irq_record_shift                      (8)
#define  PPOVERLAY_DISPD_IRQ_RECORD_vi_irq_record_shift                          (7)
#define  PPOVERLAY_DISPD_IRQ_RECORD_su_main_irq_record_shift                     (6)
#define  PPOVERLAY_DISPD_IRQ_RECORD_su_sub_irq_record_shift                      (5)
#define  PPOVERLAY_DISPD_IRQ_RECORD_osd_irq_record_shift                         (4)
#define  PPOVERLAY_DISPD_IRQ_RECORD_dctl_irq_record_shift                        (2)
#define  PPOVERLAY_DISPD_IRQ_RECORD_od_irq_record_shift                          (1)
#define  PPOVERLAY_DISPD_IRQ_RECORD_ld_spi_irq_record_shift                      (0)
#define  PPOVERLAY_DISPD_IRQ_RECORD_dctl_irq_2_record_mask                       (0x00040000)
#define  PPOVERLAY_DISPD_IRQ_RECORD_dmato3dlut_irq_record_mask                   (0x00000800)
#define  PPOVERLAY_DISPD_IRQ_RECORD_d_hist_main_irq_record_mask                  (0x00000400)
#define  PPOVERLAY_DISPD_IRQ_RECORD_d_hist_sub_irq_record_mask                   (0x00000200)
#define  PPOVERLAY_DISPD_IRQ_RECORD_m_plus_irq_record_mask                       (0x00000100)
#define  PPOVERLAY_DISPD_IRQ_RECORD_vi_irq_record_mask                           (0x00000080)
#define  PPOVERLAY_DISPD_IRQ_RECORD_su_main_irq_record_mask                      (0x00000040)
#define  PPOVERLAY_DISPD_IRQ_RECORD_su_sub_irq_record_mask                       (0x00000020)
#define  PPOVERLAY_DISPD_IRQ_RECORD_osd_irq_record_mask                          (0x00000010)
#define  PPOVERLAY_DISPD_IRQ_RECORD_dctl_irq_record_mask                         (0x00000004)
#define  PPOVERLAY_DISPD_IRQ_RECORD_od_irq_record_mask                           (0x00000002)
#define  PPOVERLAY_DISPD_IRQ_RECORD_ld_spi_irq_record_mask                       (0x00000001)
#define  PPOVERLAY_DISPD_IRQ_RECORD_dctl_irq_2_record(data)                      (0x00040000&((data)<<18))
#define  PPOVERLAY_DISPD_IRQ_RECORD_dmato3dlut_irq_record(data)                  (0x00000800&((data)<<11))
#define  PPOVERLAY_DISPD_IRQ_RECORD_d_hist_main_irq_record(data)                 (0x00000400&((data)<<10))
#define  PPOVERLAY_DISPD_IRQ_RECORD_d_hist_sub_irq_record(data)                  (0x00000200&((data)<<9))
#define  PPOVERLAY_DISPD_IRQ_RECORD_m_plus_irq_record(data)                      (0x00000100&((data)<<8))
#define  PPOVERLAY_DISPD_IRQ_RECORD_vi_irq_record(data)                          (0x00000080&((data)<<7))
#define  PPOVERLAY_DISPD_IRQ_RECORD_su_main_irq_record(data)                     (0x00000040&((data)<<6))
#define  PPOVERLAY_DISPD_IRQ_RECORD_su_sub_irq_record(data)                      (0x00000020&((data)<<5))
#define  PPOVERLAY_DISPD_IRQ_RECORD_osd_irq_record(data)                         (0x00000010&((data)<<4))
#define  PPOVERLAY_DISPD_IRQ_RECORD_dctl_irq_record(data)                        (0x00000004&((data)<<2))
#define  PPOVERLAY_DISPD_IRQ_RECORD_od_irq_record(data)                          (0x00000002&((data)<<1))
#define  PPOVERLAY_DISPD_IRQ_RECORD_ld_spi_irq_record(data)                      (0x00000001&(data))
#define  PPOVERLAY_DISPD_IRQ_RECORD_get_dctl_irq_2_record(data)                  ((0x00040000&(data))>>18)
#define  PPOVERLAY_DISPD_IRQ_RECORD_get_dmato3dlut_irq_record(data)              ((0x00000800&(data))>>11)
#define  PPOVERLAY_DISPD_IRQ_RECORD_get_d_hist_main_irq_record(data)             ((0x00000400&(data))>>10)
#define  PPOVERLAY_DISPD_IRQ_RECORD_get_d_hist_sub_irq_record(data)              ((0x00000200&(data))>>9)
#define  PPOVERLAY_DISPD_IRQ_RECORD_get_m_plus_irq_record(data)                  ((0x00000100&(data))>>8)
#define  PPOVERLAY_DISPD_IRQ_RECORD_get_vi_irq_record(data)                      ((0x00000080&(data))>>7)
#define  PPOVERLAY_DISPD_IRQ_RECORD_get_su_main_irq_record(data)                 ((0x00000040&(data))>>6)
#define  PPOVERLAY_DISPD_IRQ_RECORD_get_su_sub_irq_record(data)                  ((0x00000020&(data))>>5)
#define  PPOVERLAY_DISPD_IRQ_RECORD_get_osd_irq_record(data)                     ((0x00000010&(data))>>4)
#define  PPOVERLAY_DISPD_IRQ_RECORD_get_dctl_irq_record(data)                    ((0x00000004&(data))>>2)
#define  PPOVERLAY_DISPD_IRQ_RECORD_get_od_irq_record(data)                      ((0x00000002&(data))>>1)
#define  PPOVERLAY_DISPD_IRQ_RECORD_get_ld_spi_irq_record(data)                  (0x00000001&(data))

#define  PPOVERLAY_DISPD_TEST_PIN                                               0x180282F4
#define  PPOVERLAY_DISPD_TEST_PIN_reg_addr                                       "0xB80282F4"
#define  PPOVERLAY_DISPD_TEST_PIN_reg                                            0xB80282F4
#define  PPOVERLAY_DISPD_TEST_PIN_inst_addr                                      "0x004E"
#define  set_PPOVERLAY_DISPD_TEST_PIN_reg(data)                                  (*((volatile unsigned int*)PPOVERLAY_DISPD_TEST_PIN_reg)=data)
#define  get_PPOVERLAY_DISPD_TEST_PIN_reg                                        (*((volatile unsigned int*)PPOVERLAY_DISPD_TEST_PIN_reg))
#define  PPOVERLAY_DISPD_TEST_PIN_dispd_testpin_sel_shift                        (0)
#define  PPOVERLAY_DISPD_TEST_PIN_dispd_testpin_sel_mask                         (0x0000003F)
#define  PPOVERLAY_DISPD_TEST_PIN_dispd_testpin_sel(data)                        (0x0000003F&(data))
#define  PPOVERLAY_DISPD_TEST_PIN_get_dispd_testpin_sel(data)                    (0x0000003F&(data))

#define  PPOVERLAY_d_clk_porch_gated_debug                                      0x180282FC
#define  PPOVERLAY_d_clk_porch_gated_debug_reg_addr                              "0xB80282FC"
#define  PPOVERLAY_d_clk_porch_gated_debug_reg                                   0xB80282FC
#define  PPOVERLAY_d_clk_porch_gated_debug_inst_addr                             "0x004F"
#define  set_PPOVERLAY_d_clk_porch_gated_debug_reg(data)                         (*((volatile unsigned int*)PPOVERLAY_d_clk_porch_gated_debug_reg)=data)
#define  get_PPOVERLAY_d_clk_porch_gated_debug_reg                               (*((volatile unsigned int*)PPOVERLAY_d_clk_porch_gated_debug_reg))
#define  PPOVERLAY_d_clk_porch_gated_debug_porch_gated_en_shift                  (31)
#define  PPOVERLAY_d_clk_porch_gated_debug_dispd_stage2_clk_back_porch_gated_en_shift (3)
#define  PPOVERLAY_d_clk_porch_gated_debug_dispd_stage2_clk_front_porch_gated_en_shift (2)
#define  PPOVERLAY_d_clk_porch_gated_debug_dispd_stage1_clk_back_porch_gated_en_shift (1)
#define  PPOVERLAY_d_clk_porch_gated_debug_dispd_stage1_clk_front_porch_gated_en_shift (0)
#define  PPOVERLAY_d_clk_porch_gated_debug_porch_gated_en_mask                   (0x80000000)
#define  PPOVERLAY_d_clk_porch_gated_debug_dispd_stage2_clk_back_porch_gated_en_mask (0x00000008)
#define  PPOVERLAY_d_clk_porch_gated_debug_dispd_stage2_clk_front_porch_gated_en_mask (0x00000004)
#define  PPOVERLAY_d_clk_porch_gated_debug_dispd_stage1_clk_back_porch_gated_en_mask (0x00000002)
#define  PPOVERLAY_d_clk_porch_gated_debug_dispd_stage1_clk_front_porch_gated_en_mask (0x00000001)
#define  PPOVERLAY_d_clk_porch_gated_debug_porch_gated_en(data)                  (0x80000000&((data)<<31))
#define  PPOVERLAY_d_clk_porch_gated_debug_dispd_stage2_clk_back_porch_gated_en(data) (0x00000008&((data)<<3))
#define  PPOVERLAY_d_clk_porch_gated_debug_dispd_stage2_clk_front_porch_gated_en(data) (0x00000004&((data)<<2))
#define  PPOVERLAY_d_clk_porch_gated_debug_dispd_stage1_clk_back_porch_gated_en(data) (0x00000002&((data)<<1))
#define  PPOVERLAY_d_clk_porch_gated_debug_dispd_stage1_clk_front_porch_gated_en(data) (0x00000001&(data))
#define  PPOVERLAY_d_clk_porch_gated_debug_get_porch_gated_en(data)              ((0x80000000&(data))>>31)
#define  PPOVERLAY_d_clk_porch_gated_debug_get_dispd_stage2_clk_back_porch_gated_en(data) ((0x00000008&(data))>>3)
#define  PPOVERLAY_d_clk_porch_gated_debug_get_dispd_stage2_clk_front_porch_gated_en(data) ((0x00000004&(data))>>2)
#define  PPOVERLAY_d_clk_porch_gated_debug_get_dispd_stage1_clk_back_porch_gated_en(data) ((0x00000002&(data))>>1)
#define  PPOVERLAY_d_clk_porch_gated_debug_get_dispd_stage1_clk_front_porch_gated_en(data) (0x00000001&(data))

#define  PPOVERLAY_FS_IV_DV_Fine_Tuning3                                        0x18025C44
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning3_reg_addr                                "0xB8025C44"
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning3_reg                                     0xB8025C44
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning3_inst_addr                               "0x0050"
#define  set_PPOVERLAY_FS_IV_DV_Fine_Tuning3_reg(data)                           (*((volatile unsigned int*)PPOVERLAY_FS_IV_DV_Fine_Tuning3_reg)=data)
#define  get_PPOVERLAY_FS_IV_DV_Fine_Tuning3_reg                                 (*((volatile unsigned int*)PPOVERLAY_FS_IV_DV_Fine_Tuning3_reg))
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning3_dummy_31_shift                          (31)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning3_iv2dv_3d_line_l_shift                   (16)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning3_iv2dv_3d_line_r_shift                   (0)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning3_dummy_31_mask                           (0x80000000)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning3_iv2dv_3d_line_l_mask                    (0x7FFF0000)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning3_iv2dv_3d_line_r_mask                    (0x00007FFF)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning3_dummy_31(data)                          (0x80000000&((data)<<31))
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning3_iv2dv_3d_line_l(data)                   (0x7FFF0000&((data)<<16))
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning3_iv2dv_3d_line_r(data)                   (0x00007FFF&(data))
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning3_get_dummy_31(data)                      ((0x80000000&(data))>>31)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning3_get_iv2dv_3d_line_l(data)               ((0x7FFF0000&(data))>>16)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning3_get_iv2dv_3d_line_r(data)               (0x00007FFF&(data))

#define  PPOVERLAY_FS_IV_DV_Fine_Tuning4                                        0x18025C48
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning4_reg_addr                                "0xB8025C48"
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning4_reg                                     0xB8025C48
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning4_inst_addr                               "0x0051"
#define  set_PPOVERLAY_FS_IV_DV_Fine_Tuning4_reg(data)                           (*((volatile unsigned int*)PPOVERLAY_FS_IV_DV_Fine_Tuning4_reg)=data)
#define  get_PPOVERLAY_FS_IV_DV_Fine_Tuning4_reg                                 (*((volatile unsigned int*)PPOVERLAY_FS_IV_DV_Fine_Tuning4_reg))
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning4_iv2dv_3d_pixel_r_shift                  (16)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning4_iv2dv_3d_pixel2_l_shift                 (0)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning4_iv2dv_3d_pixel_r_mask                   (0x1FFF0000)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning4_iv2dv_3d_pixel2_l_mask                  (0x00001FFF)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning4_iv2dv_3d_pixel_r(data)                  (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning4_iv2dv_3d_pixel2_l(data)                 (0x00001FFF&(data))
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning4_get_iv2dv_3d_pixel_r(data)              ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning4_get_iv2dv_3d_pixel2_l(data)             (0x00001FFF&(data))

#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1                                        0x18025C4C
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_reg_addr                                "0xB8025C4C"
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_reg                                     0xB8025C4C
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_inst_addr                               "0x0052"
#define  set_PPOVERLAY_FS_IV_DV_Fine_Tuning1_reg(data)                           (*((volatile unsigned int*)PPOVERLAY_FS_IV_DV_Fine_Tuning1_reg)=data)
#define  get_PPOVERLAY_FS_IV_DV_Fine_Tuning1_reg                                 (*((volatile unsigned int*)PPOVERLAY_FS_IV_DV_Fine_Tuning1_reg))
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_dummy_31_30_shift                       (30)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_iv2dv_3d_flag_en_shift                  (29)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_iv2dv_3d_flag_inv_shift                 (28)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_dummy_27_26_shift                       (26)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_iv2dv_toggle_en_shift                   (3)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_iv2dv_toggle_inv_shift                  (2)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_dummy_1_0_shift                         (0)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_dummy_31_30_mask                        (0xC0000000)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_iv2dv_3d_flag_en_mask                   (0x20000000)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_iv2dv_3d_flag_inv_mask                  (0x10000000)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_dummy_27_26_mask                        (0x0C000000)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_iv2dv_toggle_en_mask                    (0x00000008)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_iv2dv_toggle_inv_mask                   (0x00000004)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_dummy_1_0_mask                          (0x00000003)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_dummy_31_30(data)                       (0xC0000000&((data)<<30))
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_iv2dv_3d_flag_en(data)                  (0x20000000&((data)<<29))
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_iv2dv_3d_flag_inv(data)                 (0x10000000&((data)<<28))
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_dummy_27_26(data)                       (0x0C000000&((data)<<26))
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_iv2dv_toggle_en(data)                   (0x00000008&((data)<<3))
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_iv2dv_toggle_inv(data)                  (0x00000004&((data)<<2))
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_dummy_1_0(data)                         (0x00000003&(data))
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_get_dummy_31_30(data)                   ((0xC0000000&(data))>>30)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_get_iv2dv_3d_flag_en(data)              ((0x20000000&(data))>>29)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_get_iv2dv_3d_flag_inv(data)             ((0x10000000&(data))>>28)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_get_dummy_27_26(data)                   ((0x0C000000&(data))>>26)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_get_iv2dv_toggle_en(data)               ((0x00000008&(data))>>3)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_get_iv2dv_toggle_inv(data)              ((0x00000004&(data))>>2)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning1_get_dummy_1_0(data)                     (0x00000003&(data))

#define  PPOVERLAY_FS_IV_DV_Fine_Tuning2                                        0x18025C50
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning2_reg_addr                                "0xB8025C50"
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning2_reg                                     0xB8025C50
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning2_inst_addr                               "0x0053"
#define  set_PPOVERLAY_FS_IV_DV_Fine_Tuning2_reg(data)                           (*((volatile unsigned int*)PPOVERLAY_FS_IV_DV_Fine_Tuning2_reg)=data)
#define  get_PPOVERLAY_FS_IV_DV_Fine_Tuning2_reg                                 (*((volatile unsigned int*)PPOVERLAY_FS_IV_DV_Fine_Tuning2_reg))
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning2_iv2dv_pixel_shift                       (16)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning2_iv2dv_pixel2_shift                      (0)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning2_iv2dv_pixel_mask                        (0x1FFF0000)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning2_iv2dv_pixel2_mask                       (0x00001FFF)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning2_iv2dv_pixel(data)                       (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning2_iv2dv_pixel2(data)                      (0x00001FFF&(data))
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning2_get_iv2dv_pixel(data)                   ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning2_get_iv2dv_pixel2(data)                  (0x00001FFF&(data))

#define  PPOVERLAY_FS_IV_DV_Fine_Tuning5                                        0x18025C58
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning5_reg_addr                                "0xB8025C58"
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning5_reg                                     0xB8025C58
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning5_inst_addr                               "0x0054"
#define  set_PPOVERLAY_FS_IV_DV_Fine_Tuning5_reg(data)                           (*((volatile unsigned int*)PPOVERLAY_FS_IV_DV_Fine_Tuning5_reg)=data)
#define  get_PPOVERLAY_FS_IV_DV_Fine_Tuning5_reg                                 (*((volatile unsigned int*)PPOVERLAY_FS_IV_DV_Fine_Tuning5_reg))
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning5_dummy_31_shift                          (31)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning5_iv2dv_line_shift                        (16)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning5_iv2dv_line_2_shift                      (0)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning5_dummy_31_mask                           (0x80000000)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning5_iv2dv_line_mask                         (0x7FFF0000)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning5_iv2dv_line_2_mask                       (0x00007FFF)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning5_dummy_31(data)                          (0x80000000&((data)<<31))
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning5_iv2dv_line(data)                        (0x7FFF0000&((data)<<16))
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning5_iv2dv_line_2(data)                      (0x00007FFF&(data))
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning5_get_dummy_31(data)                      ((0x80000000&(data))>>31)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning5_get_iv2dv_line(data)                    ((0x7FFF0000&(data))>>16)
#define  PPOVERLAY_FS_IV_DV_Fine_Tuning5_get_iv2dv_line_2(data)                  (0x00007FFF&(data))

#define  PPOVERLAY_dctl_iv2dv_ihs_ctrl                                          0x18025C64
#define  PPOVERLAY_dctl_iv2dv_ihs_ctrl_reg_addr                                  "0xB8025C64"
#define  PPOVERLAY_dctl_iv2dv_ihs_ctrl_reg                                       0xB8025C64
#define  PPOVERLAY_dctl_iv2dv_ihs_ctrl_inst_addr                                 "0x0055"
#define  set_PPOVERLAY_dctl_iv2dv_ihs_ctrl_reg(data)                             (*((volatile unsigned int*)PPOVERLAY_dctl_iv2dv_ihs_ctrl_reg)=data)
#define  get_PPOVERLAY_dctl_iv2dv_ihs_ctrl_reg                                   (*((volatile unsigned int*)PPOVERLAY_dctl_iv2dv_ihs_ctrl_reg))
#define  PPOVERLAY_dctl_iv2dv_ihs_ctrl_iv2dv_ih_slf_gen_en_shift                 (31)
#define  PPOVERLAY_dctl_iv2dv_ihs_ctrl_iv2dv_ih_slf_width_shift                  (0)
#define  PPOVERLAY_dctl_iv2dv_ihs_ctrl_iv2dv_ih_slf_gen_en_mask                  (0x80000000)
#define  PPOVERLAY_dctl_iv2dv_ihs_ctrl_iv2dv_ih_slf_width_mask                   (0x00001FFF)
#define  PPOVERLAY_dctl_iv2dv_ihs_ctrl_iv2dv_ih_slf_gen_en(data)                 (0x80000000&((data)<<31))
#define  PPOVERLAY_dctl_iv2dv_ihs_ctrl_iv2dv_ih_slf_width(data)                  (0x00001FFF&(data))
#define  PPOVERLAY_dctl_iv2dv_ihs_ctrl_get_iv2dv_ih_slf_gen_en(data)             ((0x80000000&(data))>>31)
#define  PPOVERLAY_dctl_iv2dv_ihs_ctrl_get_iv2dv_ih_slf_width(data)              (0x00001FFF&(data))

#define  PPOVERLAY_measure_ivs_ctrl0                                            0x18025C80
#define  PPOVERLAY_measure_ivs_ctrl0_reg_addr                                    "0xB8025C80"
#define  PPOVERLAY_measure_ivs_ctrl0_reg                                         0xB8025C80
#define  PPOVERLAY_measure_ivs_ctrl0_inst_addr                                   "0x0056"
#define  set_PPOVERLAY_measure_ivs_ctrl0_reg(data)                               (*((volatile unsigned int*)PPOVERLAY_measure_ivs_ctrl0_reg)=data)
#define  get_PPOVERLAY_measure_ivs_ctrl0_reg                                     (*((volatile unsigned int*)PPOVERLAY_measure_ivs_ctrl0_reg))
#define  PPOVERLAY_measure_ivs_ctrl0_ivs_over_threshold_err_shift                (31)
#define  PPOVERLAY_measure_ivs_ctrl0_ivs_over_threshold_int_en_shift             (30)
#define  PPOVERLAY_measure_ivs_ctrl0_ivs_threshold_shift                         (0)
#define  PPOVERLAY_measure_ivs_ctrl0_ivs_over_threshold_err_mask                 (0x80000000)
#define  PPOVERLAY_measure_ivs_ctrl0_ivs_over_threshold_int_en_mask              (0x40000000)
#define  PPOVERLAY_measure_ivs_ctrl0_ivs_threshold_mask                          (0x0FFFFFFF)
#define  PPOVERLAY_measure_ivs_ctrl0_ivs_over_threshold_err(data)                (0x80000000&((data)<<31))
#define  PPOVERLAY_measure_ivs_ctrl0_ivs_over_threshold_int_en(data)             (0x40000000&((data)<<30))
#define  PPOVERLAY_measure_ivs_ctrl0_ivs_threshold(data)                         (0x0FFFFFFF&(data))
#define  PPOVERLAY_measure_ivs_ctrl0_get_ivs_over_threshold_err(data)            ((0x80000000&(data))>>31)
#define  PPOVERLAY_measure_ivs_ctrl0_get_ivs_over_threshold_int_en(data)         ((0x40000000&(data))>>30)
#define  PPOVERLAY_measure_ivs_ctrl0_get_ivs_threshold(data)                     (0x0FFFFFFF&(data))

#define  PPOVERLAY_XTAL_COUNT_ICLK_CTRL                                         0x18025C90
#define  PPOVERLAY_XTAL_COUNT_ICLK_CTRL_reg_addr                                 "0xB8025C90"
#define  PPOVERLAY_XTAL_COUNT_ICLK_CTRL_reg                                      0xB8025C90
#define  PPOVERLAY_XTAL_COUNT_ICLK_CTRL_inst_addr                                "0x0057"
#define  set_PPOVERLAY_XTAL_COUNT_ICLK_CTRL_reg(data)                            (*((volatile unsigned int*)PPOVERLAY_XTAL_COUNT_ICLK_CTRL_reg)=data)
#define  get_PPOVERLAY_XTAL_COUNT_ICLK_CTRL_reg                                  (*((volatile unsigned int*)PPOVERLAY_XTAL_COUNT_ICLK_CTRL_reg))
#define  PPOVERLAY_XTAL_COUNT_ICLK_CTRL_xclk_max_shift                           (24)
#define  PPOVERLAY_XTAL_COUNT_ICLK_CTRL_xclk_min_shift                           (16)
#define  PPOVERLAY_XTAL_COUNT_ICLK_CTRL_iclk_num_shift                           (8)
#define  PPOVERLAY_XTAL_COUNT_ICLK_CTRL_auto_switch_x_en_shift                   (0)
#define  PPOVERLAY_XTAL_COUNT_ICLK_CTRL_xclk_max_mask                            (0xFF000000)
#define  PPOVERLAY_XTAL_COUNT_ICLK_CTRL_xclk_min_mask                            (0x00FF0000)
#define  PPOVERLAY_XTAL_COUNT_ICLK_CTRL_iclk_num_mask                            (0x0000FF00)
#define  PPOVERLAY_XTAL_COUNT_ICLK_CTRL_auto_switch_x_en_mask                    (0x00000001)
#define  PPOVERLAY_XTAL_COUNT_ICLK_CTRL_xclk_max(data)                           (0xFF000000&((data)<<24))
#define  PPOVERLAY_XTAL_COUNT_ICLK_CTRL_xclk_min(data)                           (0x00FF0000&((data)<<16))
#define  PPOVERLAY_XTAL_COUNT_ICLK_CTRL_iclk_num(data)                           (0x0000FF00&((data)<<8))
#define  PPOVERLAY_XTAL_COUNT_ICLK_CTRL_auto_switch_x_en(data)                   (0x00000001&(data))
#define  PPOVERLAY_XTAL_COUNT_ICLK_CTRL_get_xclk_max(data)                       ((0xFF000000&(data))>>24)
#define  PPOVERLAY_XTAL_COUNT_ICLK_CTRL_get_xclk_min(data)                       ((0x00FF0000&(data))>>16)
#define  PPOVERLAY_XTAL_COUNT_ICLK_CTRL_get_iclk_num(data)                       ((0x0000FF00&(data))>>8)
#define  PPOVERLAY_XTAL_COUNT_ICLK_CTRL_get_auto_switch_x_en(data)               (0x00000001&(data))

#define  PPOVERLAY_Main_Display_Control_RSV                                     0x18028300
#define  PPOVERLAY_Main_Display_Control_RSV_reg_addr                             "0xB8028300"
#define  PPOVERLAY_Main_Display_Control_RSV_reg                                  0xB8028300
#define  PPOVERLAY_Main_Display_Control_RSV_inst_addr                            "0x0058"
#define  set_PPOVERLAY_Main_Display_Control_RSV_reg(data)                        (*((volatile unsigned int*)PPOVERLAY_Main_Display_Control_RSV_reg)=data)
#define  get_PPOVERLAY_Main_Display_Control_RSV_reg                              (*((volatile unsigned int*)PPOVERLAY_Main_Display_Control_RSV_reg))
#define  PPOVERLAY_Main_Display_Control_RSV_main_wd_to_background_shift          (15)
#define  PPOVERLAY_Main_Display_Control_RSV_main_wd_to_free_run_shift            (14)
#define  PPOVERLAY_Main_Display_Control_RSV_dummy_13_4_shift                     (4)
#define  PPOVERLAY_Main_Display_Control_RSV_m_hbd_en_shift                       (3)
#define  PPOVERLAY_Main_Display_Control_RSV_m_bd_trans_shift                     (2)
#define  PPOVERLAY_Main_Display_Control_RSV_m_force_bg_shift                     (1)
#define  PPOVERLAY_Main_Display_Control_RSV_m_disp_en_shift                      (0)
#define  PPOVERLAY_Main_Display_Control_RSV_main_wd_to_background_mask           (0x00008000)
#define  PPOVERLAY_Main_Display_Control_RSV_main_wd_to_free_run_mask             (0x00004000)
#define  PPOVERLAY_Main_Display_Control_RSV_dummy_13_4_mask                      (0x00003FF0)
#define  PPOVERLAY_Main_Display_Control_RSV_m_hbd_en_mask                        (0x00000008)
#define  PPOVERLAY_Main_Display_Control_RSV_m_bd_trans_mask                      (0x00000004)
#define  PPOVERLAY_Main_Display_Control_RSV_m_force_bg_mask                      (0x00000002)
#define  PPOVERLAY_Main_Display_Control_RSV_m_disp_en_mask                       (0x00000001)
#define  PPOVERLAY_Main_Display_Control_RSV_main_wd_to_background(data)          (0x00008000&((data)<<15))
#define  PPOVERLAY_Main_Display_Control_RSV_main_wd_to_free_run(data)            (0x00004000&((data)<<14))
#define  PPOVERLAY_Main_Display_Control_RSV_dummy_13_4(data)                     (0x00003FF0&((data)<<4))
#define  PPOVERLAY_Main_Display_Control_RSV_m_hbd_en(data)                       (0x00000008&((data)<<3))
#define  PPOVERLAY_Main_Display_Control_RSV_m_bd_trans(data)                     (0x00000004&((data)<<2))
#define  PPOVERLAY_Main_Display_Control_RSV_m_force_bg(data)                     (0x00000002&((data)<<1))
#define  PPOVERLAY_Main_Display_Control_RSV_m_disp_en(data)                      (0x00000001&(data))
#define  PPOVERLAY_Main_Display_Control_RSV_get_main_wd_to_background(data)      ((0x00008000&(data))>>15)
#define  PPOVERLAY_Main_Display_Control_RSV_get_main_wd_to_free_run(data)        ((0x00004000&(data))>>14)
#define  PPOVERLAY_Main_Display_Control_RSV_get_dummy_13_4(data)                 ((0x00003FF0&(data))>>4)
#define  PPOVERLAY_Main_Display_Control_RSV_get_m_hbd_en(data)                   ((0x00000008&(data))>>3)
#define  PPOVERLAY_Main_Display_Control_RSV_get_m_bd_trans(data)                 ((0x00000004&(data))>>2)
#define  PPOVERLAY_Main_Display_Control_RSV_get_m_force_bg(data)                 ((0x00000002&(data))>>1)
#define  PPOVERLAY_Main_Display_Control_RSV_get_m_disp_en(data)                  (0x00000001&(data))

#define  PPOVERLAY_Main_Border_Highlight_Border_Color1                          0x18028304
#define  PPOVERLAY_Main_Border_Highlight_Border_Color1_reg_addr                  "0xB8028304"
#define  PPOVERLAY_Main_Border_Highlight_Border_Color1_reg                       0xB8028304
#define  PPOVERLAY_Main_Border_Highlight_Border_Color1_inst_addr                 "0x0059"
#define  set_PPOVERLAY_Main_Border_Highlight_Border_Color1_reg(data)             (*((volatile unsigned int*)PPOVERLAY_Main_Border_Highlight_Border_Color1_reg)=data)
#define  get_PPOVERLAY_Main_Border_Highlight_Border_Color1_reg                   (*((volatile unsigned int*)PPOVERLAY_Main_Border_Highlight_Border_Color1_reg))
#define  PPOVERLAY_Main_Border_Highlight_Border_Color1_m_hbd_g_shift             (16)
#define  PPOVERLAY_Main_Border_Highlight_Border_Color1_m_hbd_b_shift             (0)
#define  PPOVERLAY_Main_Border_Highlight_Border_Color1_m_hbd_g_mask              (0x3FFF0000)
#define  PPOVERLAY_Main_Border_Highlight_Border_Color1_m_hbd_b_mask              (0x00003FFF)
#define  PPOVERLAY_Main_Border_Highlight_Border_Color1_m_hbd_g(data)             (0x3FFF0000&((data)<<16))
#define  PPOVERLAY_Main_Border_Highlight_Border_Color1_m_hbd_b(data)             (0x00003FFF&(data))
#define  PPOVERLAY_Main_Border_Highlight_Border_Color1_get_m_hbd_g(data)         ((0x3FFF0000&(data))>>16)
#define  PPOVERLAY_Main_Border_Highlight_Border_Color1_get_m_hbd_b(data)         (0x00003FFF&(data))

#define  PPOVERLAY_Main_Border_Highlight_Border_Color2                          0x18028308
#define  PPOVERLAY_Main_Border_Highlight_Border_Color2_reg_addr                  "0xB8028308"
#define  PPOVERLAY_Main_Border_Highlight_Border_Color2_reg                       0xB8028308
#define  PPOVERLAY_Main_Border_Highlight_Border_Color2_inst_addr                 "0x005A"
#define  set_PPOVERLAY_Main_Border_Highlight_Border_Color2_reg(data)             (*((volatile unsigned int*)PPOVERLAY_Main_Border_Highlight_Border_Color2_reg)=data)
#define  get_PPOVERLAY_Main_Border_Highlight_Border_Color2_reg                   (*((volatile unsigned int*)PPOVERLAY_Main_Border_Highlight_Border_Color2_reg))
#define  PPOVERLAY_Main_Border_Highlight_Border_Color2_m_bd_b_shift              (16)
#define  PPOVERLAY_Main_Border_Highlight_Border_Color2_m_hbd_r_shift             (0)
#define  PPOVERLAY_Main_Border_Highlight_Border_Color2_m_bd_b_mask               (0x3FFF0000)
#define  PPOVERLAY_Main_Border_Highlight_Border_Color2_m_hbd_r_mask              (0x00003FFF)
#define  PPOVERLAY_Main_Border_Highlight_Border_Color2_m_bd_b(data)              (0x3FFF0000&((data)<<16))
#define  PPOVERLAY_Main_Border_Highlight_Border_Color2_m_hbd_r(data)             (0x00003FFF&(data))
#define  PPOVERLAY_Main_Border_Highlight_Border_Color2_get_m_bd_b(data)          ((0x3FFF0000&(data))>>16)
#define  PPOVERLAY_Main_Border_Highlight_Border_Color2_get_m_hbd_r(data)         (0x00003FFF&(data))

#define  PPOVERLAY_Main_Border_Highlight_Border_Color3                          0x1802830C
#define  PPOVERLAY_Main_Border_Highlight_Border_Color3_reg_addr                  "0xB802830C"
#define  PPOVERLAY_Main_Border_Highlight_Border_Color3_reg                       0xB802830C
#define  PPOVERLAY_Main_Border_Highlight_Border_Color3_inst_addr                 "0x005B"
#define  set_PPOVERLAY_Main_Border_Highlight_Border_Color3_reg(data)             (*((volatile unsigned int*)PPOVERLAY_Main_Border_Highlight_Border_Color3_reg)=data)
#define  get_PPOVERLAY_Main_Border_Highlight_Border_Color3_reg                   (*((volatile unsigned int*)PPOVERLAY_Main_Border_Highlight_Border_Color3_reg))
#define  PPOVERLAY_Main_Border_Highlight_Border_Color3_m_bd_r_shift              (16)
#define  PPOVERLAY_Main_Border_Highlight_Border_Color3_m_bd_g_shift              (0)
#define  PPOVERLAY_Main_Border_Highlight_Border_Color3_m_bd_r_mask               (0x3FFF0000)
#define  PPOVERLAY_Main_Border_Highlight_Border_Color3_m_bd_g_mask               (0x00003FFF)
#define  PPOVERLAY_Main_Border_Highlight_Border_Color3_m_bd_r(data)              (0x3FFF0000&((data)<<16))
#define  PPOVERLAY_Main_Border_Highlight_Border_Color3_m_bd_g(data)              (0x00003FFF&(data))
#define  PPOVERLAY_Main_Border_Highlight_Border_Color3_get_m_bd_r(data)          ((0x3FFF0000&(data))>>16)
#define  PPOVERLAY_Main_Border_Highlight_Border_Color3_get_m_bd_g(data)          (0x00003FFF&(data))

#define  PPOVERLAY_Main_Background_Color1                                       0x18028310
#define  PPOVERLAY_Main_Background_Color1_reg_addr                               "0xB8028310"
#define  PPOVERLAY_Main_Background_Color1_reg                                    0xB8028310
#define  PPOVERLAY_Main_Background_Color1_inst_addr                              "0x005C"
#define  set_PPOVERLAY_Main_Background_Color1_reg(data)                          (*((volatile unsigned int*)PPOVERLAY_Main_Background_Color1_reg)=data)
#define  get_PPOVERLAY_Main_Background_Color1_reg                                (*((volatile unsigned int*)PPOVERLAY_Main_Background_Color1_reg))
#define  PPOVERLAY_Main_Background_Color1_m_bg_g_shift                           (16)
#define  PPOVERLAY_Main_Background_Color1_m_bg_b_shift                           (0)
#define  PPOVERLAY_Main_Background_Color1_m_bg_g_mask                            (0x3FFF0000)
#define  PPOVERLAY_Main_Background_Color1_m_bg_b_mask                            (0x00003FFF)
#define  PPOVERLAY_Main_Background_Color1_m_bg_g(data)                           (0x3FFF0000&((data)<<16))
#define  PPOVERLAY_Main_Background_Color1_m_bg_b(data)                           (0x00003FFF&(data))
#define  PPOVERLAY_Main_Background_Color1_get_m_bg_g(data)                       ((0x3FFF0000&(data))>>16)
#define  PPOVERLAY_Main_Background_Color1_get_m_bg_b(data)                       (0x00003FFF&(data))

#define  PPOVERLAY_Main_Background_Color2                                       0x18028314
#define  PPOVERLAY_Main_Background_Color2_reg_addr                               "0xB8028314"
#define  PPOVERLAY_Main_Background_Color2_reg                                    0xB8028314
#define  PPOVERLAY_Main_Background_Color2_inst_addr                              "0x005D"
#define  set_PPOVERLAY_Main_Background_Color2_reg(data)                          (*((volatile unsigned int*)PPOVERLAY_Main_Background_Color2_reg)=data)
#define  get_PPOVERLAY_Main_Background_Color2_reg                                (*((volatile unsigned int*)PPOVERLAY_Main_Background_Color2_reg))
#define  PPOVERLAY_Main_Background_Color2_m_bg_r_shift                           (0)
#define  PPOVERLAY_Main_Background_Color2_m_bg_r_mask                            (0x00003FFF)
#define  PPOVERLAY_Main_Background_Color2_m_bg_r(data)                           (0x00003FFF&(data))
#define  PPOVERLAY_Main_Background_Color2_get_m_bg_r(data)                       (0x00003FFF&(data))

#define  PPOVERLAY_Highlight_window_control                                     0x18028328
#define  PPOVERLAY_Highlight_window_control_reg_addr                             "0xB8028328"
#define  PPOVERLAY_Highlight_window_control_reg                                  0xB8028328
#define  PPOVERLAY_Highlight_window_control_inst_addr                            "0x005E"
#define  set_PPOVERLAY_Highlight_window_control_reg(data)                        (*((volatile unsigned int*)PPOVERLAY_Highlight_window_control_reg)=data)
#define  get_PPOVERLAY_Highlight_window_control_reg                              (*((volatile unsigned int*)PPOVERLAY_Highlight_window_control_reg))
#define  PPOVERLAY_Highlight_window_control_hlw_update_rate_shift                (8)
#define  PPOVERLAY_Highlight_window_control_hlw_mode_shift                       (1)
#define  PPOVERLAY_Highlight_window_control_hlw_en_shift                         (0)
#define  PPOVERLAY_Highlight_window_control_hlw_update_rate_mask                 (0x0000FF00)
#define  PPOVERLAY_Highlight_window_control_hlw_mode_mask                        (0x00000006)
#define  PPOVERLAY_Highlight_window_control_hlw_en_mask                          (0x00000001)
#define  PPOVERLAY_Highlight_window_control_hlw_update_rate(data)                (0x0000FF00&((data)<<8))
#define  PPOVERLAY_Highlight_window_control_hlw_mode(data)                       (0x00000006&((data)<<1))
#define  PPOVERLAY_Highlight_window_control_hlw_en(data)                         (0x00000001&(data))
#define  PPOVERLAY_Highlight_window_control_get_hlw_update_rate(data)            ((0x0000FF00&(data))>>8)
#define  PPOVERLAY_Highlight_window_control_get_hlw_mode(data)                   ((0x00000006&(data))>>1)
#define  PPOVERLAY_Highlight_window_control_get_hlw_en(data)                     (0x00000001&(data))

#define  PPOVERLAY_Highlight_window_H_initial_start_width                       0x1802832C
#define  PPOVERLAY_Highlight_window_H_initial_start_width_reg_addr               "0xB802832C"
#define  PPOVERLAY_Highlight_window_H_initial_start_width_reg                    0xB802832C
#define  PPOVERLAY_Highlight_window_H_initial_start_width_inst_addr              "0x005F"
#define  set_PPOVERLAY_Highlight_window_H_initial_start_width_reg(data)          (*((volatile unsigned int*)PPOVERLAY_Highlight_window_H_initial_start_width_reg)=data)
#define  get_PPOVERLAY_Highlight_window_H_initial_start_width_reg                (*((volatile unsigned int*)PPOVERLAY_Highlight_window_H_initial_start_width_reg))
#define  PPOVERLAY_Highlight_window_H_initial_start_width_hlw_h_ini_sta_shift    (16)
#define  PPOVERLAY_Highlight_window_H_initial_start_width_hlw_ini_width_shift    (0)
#define  PPOVERLAY_Highlight_window_H_initial_start_width_hlw_h_ini_sta_mask     (0x1FFF0000)
#define  PPOVERLAY_Highlight_window_H_initial_start_width_hlw_ini_width_mask     (0x00001FFF)
#define  PPOVERLAY_Highlight_window_H_initial_start_width_hlw_h_ini_sta(data)    (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_Highlight_window_H_initial_start_width_hlw_ini_width(data)    (0x00001FFF&(data))
#define  PPOVERLAY_Highlight_window_H_initial_start_width_get_hlw_h_ini_sta(data) ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_Highlight_window_H_initial_start_width_get_hlw_ini_width(data) (0x00001FFF&(data))

#define  PPOVERLAY_Highlight_window_V_initial_start_height                      0x18028330
#define  PPOVERLAY_Highlight_window_V_initial_start_height_reg_addr              "0xB8028330"
#define  PPOVERLAY_Highlight_window_V_initial_start_height_reg                   0xB8028330
#define  PPOVERLAY_Highlight_window_V_initial_start_height_inst_addr             "0x0060"
#define  set_PPOVERLAY_Highlight_window_V_initial_start_height_reg(data)         (*((volatile unsigned int*)PPOVERLAY_Highlight_window_V_initial_start_height_reg)=data)
#define  get_PPOVERLAY_Highlight_window_V_initial_start_height_reg               (*((volatile unsigned int*)PPOVERLAY_Highlight_window_V_initial_start_height_reg))
#define  PPOVERLAY_Highlight_window_V_initial_start_height_hlw_v_ini_sta_shift   (16)
#define  PPOVERLAY_Highlight_window_V_initial_start_height_hlw_ini_height_shift  (0)
#define  PPOVERLAY_Highlight_window_V_initial_start_height_hlw_v_ini_sta_mask    (0x1FFF0000)
#define  PPOVERLAY_Highlight_window_V_initial_start_height_hlw_ini_height_mask   (0x00001FFF)
#define  PPOVERLAY_Highlight_window_V_initial_start_height_hlw_v_ini_sta(data)   (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_Highlight_window_V_initial_start_height_hlw_ini_height(data)  (0x00001FFF&(data))
#define  PPOVERLAY_Highlight_window_V_initial_start_height_get_hlw_v_ini_sta(data) ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_Highlight_window_V_initial_start_height_get_hlw_ini_height(data) (0x00001FFF&(data))

#define  PPOVERLAY_Highlight_window_update_step                                 0x18028334
#define  PPOVERLAY_Highlight_window_update_step_reg_addr                         "0xB8028334"
#define  PPOVERLAY_Highlight_window_update_step_reg                              0xB8028334
#define  PPOVERLAY_Highlight_window_update_step_inst_addr                        "0x0061"
#define  set_PPOVERLAY_Highlight_window_update_step_reg(data)                    (*((volatile unsigned int*)PPOVERLAY_Highlight_window_update_step_reg)=data)
#define  get_PPOVERLAY_Highlight_window_update_step_reg                          (*((volatile unsigned int*)PPOVERLAY_Highlight_window_update_step_reg))
#define  PPOVERLAY_Highlight_window_update_step_hlw_h_sta_step_shift             (24)
#define  PPOVERLAY_Highlight_window_update_step_hlw_width_step_shift             (16)
#define  PPOVERLAY_Highlight_window_update_step_hlw_v_sta_step_shift             (8)
#define  PPOVERLAY_Highlight_window_update_step_hlw_height_step_shift            (0)
#define  PPOVERLAY_Highlight_window_update_step_hlw_h_sta_step_mask              (0xFF000000)
#define  PPOVERLAY_Highlight_window_update_step_hlw_width_step_mask              (0x00FF0000)
#define  PPOVERLAY_Highlight_window_update_step_hlw_v_sta_step_mask              (0x0000FF00)
#define  PPOVERLAY_Highlight_window_update_step_hlw_height_step_mask             (0x000000FF)
#define  PPOVERLAY_Highlight_window_update_step_hlw_h_sta_step(data)             (0xFF000000&((data)<<24))
#define  PPOVERLAY_Highlight_window_update_step_hlw_width_step(data)             (0x00FF0000&((data)<<16))
#define  PPOVERLAY_Highlight_window_update_step_hlw_v_sta_step(data)             (0x0000FF00&((data)<<8))
#define  PPOVERLAY_Highlight_window_update_step_hlw_height_step(data)            (0x000000FF&(data))
#define  PPOVERLAY_Highlight_window_update_step_get_hlw_h_sta_step(data)         ((0xFF000000&(data))>>24)
#define  PPOVERLAY_Highlight_window_update_step_get_hlw_width_step(data)         ((0x00FF0000&(data))>>16)
#define  PPOVERLAY_Highlight_window_update_step_get_hlw_v_sta_step(data)         ((0x0000FF00&(data))>>8)
#define  PPOVERLAY_Highlight_window_update_step_get_hlw_height_step(data)        (0x000000FF&(data))

#define  PPOVERLAY_Highlight_window_H_boundary                                  0x18028338
#define  PPOVERLAY_Highlight_window_H_boundary_reg_addr                          "0xB8028338"
#define  PPOVERLAY_Highlight_window_H_boundary_reg                               0xB8028338
#define  PPOVERLAY_Highlight_window_H_boundary_inst_addr                         "0x0062"
#define  set_PPOVERLAY_Highlight_window_H_boundary_reg(data)                     (*((volatile unsigned int*)PPOVERLAY_Highlight_window_H_boundary_reg)=data)
#define  get_PPOVERLAY_Highlight_window_H_boundary_reg                           (*((volatile unsigned int*)PPOVERLAY_Highlight_window_H_boundary_reg))
#define  PPOVERLAY_Highlight_window_H_boundary_hlw_h_bd_sta_shift                (16)
#define  PPOVERLAY_Highlight_window_H_boundary_hlw_h_bd_end_shift                (0)
#define  PPOVERLAY_Highlight_window_H_boundary_hlw_h_bd_sta_mask                 (0x1FFF0000)
#define  PPOVERLAY_Highlight_window_H_boundary_hlw_h_bd_end_mask                 (0x00001FFF)
#define  PPOVERLAY_Highlight_window_H_boundary_hlw_h_bd_sta(data)                (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_Highlight_window_H_boundary_hlw_h_bd_end(data)                (0x00001FFF&(data))
#define  PPOVERLAY_Highlight_window_H_boundary_get_hlw_h_bd_sta(data)            ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_Highlight_window_H_boundary_get_hlw_h_bd_end(data)            (0x00001FFF&(data))

#define  PPOVERLAY_Highlight_window_V_boundary                                  0x1802833C
#define  PPOVERLAY_Highlight_window_V_boundary_reg_addr                          "0xB802833C"
#define  PPOVERLAY_Highlight_window_V_boundary_reg                               0xB802833C
#define  PPOVERLAY_Highlight_window_V_boundary_inst_addr                         "0x0063"
#define  set_PPOVERLAY_Highlight_window_V_boundary_reg(data)                     (*((volatile unsigned int*)PPOVERLAY_Highlight_window_V_boundary_reg)=data)
#define  get_PPOVERLAY_Highlight_window_V_boundary_reg                           (*((volatile unsigned int*)PPOVERLAY_Highlight_window_V_boundary_reg))
#define  PPOVERLAY_Highlight_window_V_boundary_hlw_v_bd_sta_shift                (16)
#define  PPOVERLAY_Highlight_window_V_boundary_hlw_v_bd_end_shift                (0)
#define  PPOVERLAY_Highlight_window_V_boundary_hlw_v_bd_sta_mask                 (0x1FFF0000)
#define  PPOVERLAY_Highlight_window_V_boundary_hlw_v_bd_end_mask                 (0x00001FFF)
#define  PPOVERLAY_Highlight_window_V_boundary_hlw_v_bd_sta(data)                (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_Highlight_window_V_boundary_hlw_v_bd_end(data)                (0x00001FFF&(data))
#define  PPOVERLAY_Highlight_window_V_boundary_get_hlw_v_bd_sta(data)            ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_Highlight_window_V_boundary_get_hlw_v_bd_end(data)            (0x00001FFF&(data))

#define  PPOVERLAY_Highlight_window_H_status                                    0x18028340
#define  PPOVERLAY_Highlight_window_H_status_reg_addr                            "0xB8028340"
#define  PPOVERLAY_Highlight_window_H_status_reg                                 0xB8028340
#define  PPOVERLAY_Highlight_window_H_status_inst_addr                           "0x0064"
#define  set_PPOVERLAY_Highlight_window_H_status_reg(data)                       (*((volatile unsigned int*)PPOVERLAY_Highlight_window_H_status_reg)=data)
#define  get_PPOVERLAY_Highlight_window_H_status_reg                             (*((volatile unsigned int*)PPOVERLAY_Highlight_window_H_status_reg))
#define  PPOVERLAY_Highlight_window_H_status_hlw_h_cur_sta_pos_shift             (16)
#define  PPOVERLAY_Highlight_window_H_status_hlw_cur_width_shift                 (0)
#define  PPOVERLAY_Highlight_window_H_status_hlw_h_cur_sta_pos_mask              (0x1FFF0000)
#define  PPOVERLAY_Highlight_window_H_status_hlw_cur_width_mask                  (0x00001FFF)
#define  PPOVERLAY_Highlight_window_H_status_hlw_h_cur_sta_pos(data)             (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_Highlight_window_H_status_hlw_cur_width(data)                 (0x00001FFF&(data))
#define  PPOVERLAY_Highlight_window_H_status_get_hlw_h_cur_sta_pos(data)         ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_Highlight_window_H_status_get_hlw_cur_width(data)             (0x00001FFF&(data))

#define  PPOVERLAY_Highlight_window_V_status                                    0x18028344
#define  PPOVERLAY_Highlight_window_V_status_reg_addr                            "0xB8028344"
#define  PPOVERLAY_Highlight_window_V_status_reg                                 0xB8028344
#define  PPOVERLAY_Highlight_window_V_status_inst_addr                           "0x0065"
#define  set_PPOVERLAY_Highlight_window_V_status_reg(data)                       (*((volatile unsigned int*)PPOVERLAY_Highlight_window_V_status_reg)=data)
#define  get_PPOVERLAY_Highlight_window_V_status_reg                             (*((volatile unsigned int*)PPOVERLAY_Highlight_window_V_status_reg))
#define  PPOVERLAY_Highlight_window_V_status_hlw_v_cur_sta_pos_shift             (16)
#define  PPOVERLAY_Highlight_window_V_status_hlw_cur_height_shift                (0)
#define  PPOVERLAY_Highlight_window_V_status_hlw_v_cur_sta_pos_mask              (0x1FFF0000)
#define  PPOVERLAY_Highlight_window_V_status_hlw_cur_height_mask                 (0x00001FFF)
#define  PPOVERLAY_Highlight_window_V_status_hlw_v_cur_sta_pos(data)             (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_Highlight_window_V_status_hlw_cur_height(data)                (0x00001FFF&(data))
#define  PPOVERLAY_Highlight_window_V_status_get_hlw_v_cur_sta_pos(data)         ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_Highlight_window_V_status_get_hlw_cur_height(data)            (0x00001FFF&(data))

#define  PPOVERLAY_Highlight_window_boundary_condition                          0x18028348
#define  PPOVERLAY_Highlight_window_boundary_condition_reg_addr                  "0xB8028348"
#define  PPOVERLAY_Highlight_window_boundary_condition_reg                       0xB8028348
#define  PPOVERLAY_Highlight_window_boundary_condition_inst_addr                 "0x0066"
#define  set_PPOVERLAY_Highlight_window_boundary_condition_reg(data)             (*((volatile unsigned int*)PPOVERLAY_Highlight_window_boundary_condition_reg)=data)
#define  get_PPOVERLAY_Highlight_window_boundary_condition_reg                   (*((volatile unsigned int*)PPOVERLAY_Highlight_window_boundary_condition_reg))
#define  PPOVERLAY_Highlight_window_boundary_condition_hlw_v_sta_dir_inv_bc1_en_shift (3)
#define  PPOVERLAY_Highlight_window_boundary_condition_hlw_v_sta_dir_inv_bc2_en_shift (2)
#define  PPOVERLAY_Highlight_window_boundary_condition_hlw_h_sta_dir_inv_bc3_en_shift (1)
#define  PPOVERLAY_Highlight_window_boundary_condition_hlw_h_sta_dir_inv_bc4_en_shift (0)
#define  PPOVERLAY_Highlight_window_boundary_condition_hlw_v_sta_dir_inv_bc1_en_mask (0x00000008)
#define  PPOVERLAY_Highlight_window_boundary_condition_hlw_v_sta_dir_inv_bc2_en_mask (0x00000004)
#define  PPOVERLAY_Highlight_window_boundary_condition_hlw_h_sta_dir_inv_bc3_en_mask (0x00000002)
#define  PPOVERLAY_Highlight_window_boundary_condition_hlw_h_sta_dir_inv_bc4_en_mask (0x00000001)
#define  PPOVERLAY_Highlight_window_boundary_condition_hlw_v_sta_dir_inv_bc1_en(data) (0x00000008&((data)<<3))
#define  PPOVERLAY_Highlight_window_boundary_condition_hlw_v_sta_dir_inv_bc2_en(data) (0x00000004&((data)<<2))
#define  PPOVERLAY_Highlight_window_boundary_condition_hlw_h_sta_dir_inv_bc3_en(data) (0x00000002&((data)<<1))
#define  PPOVERLAY_Highlight_window_boundary_condition_hlw_h_sta_dir_inv_bc4_en(data) (0x00000001&(data))
#define  PPOVERLAY_Highlight_window_boundary_condition_get_hlw_v_sta_dir_inv_bc1_en(data) ((0x00000008&(data))>>3)
#define  PPOVERLAY_Highlight_window_boundary_condition_get_hlw_v_sta_dir_inv_bc2_en(data) ((0x00000004&(data))>>2)
#define  PPOVERLAY_Highlight_window_boundary_condition_get_hlw_h_sta_dir_inv_bc3_en(data) ((0x00000002&(data))>>1)
#define  PPOVERLAY_Highlight_window_boundary_condition_get_hlw_h_sta_dir_inv_bc4_en(data) (0x00000001&(data))

#define  PPOVERLAY_Highlight_window_border_width                                0x1802834C
#define  PPOVERLAY_Highlight_window_border_width_reg_addr                        "0xB802834C"
#define  PPOVERLAY_Highlight_window_border_width_reg                             0xB802834C
#define  PPOVERLAY_Highlight_window_border_width_inst_addr                       "0x0067"
#define  set_PPOVERLAY_Highlight_window_border_width_reg(data)                   (*((volatile unsigned int*)PPOVERLAY_Highlight_window_border_width_reg)=data)
#define  get_PPOVERLAY_Highlight_window_border_width_reg                         (*((volatile unsigned int*)PPOVERLAY_Highlight_window_border_width_reg))
#define  PPOVERLAY_Highlight_window_border_width_hlw_up_bd_w_shift               (24)
#define  PPOVERLAY_Highlight_window_border_width_hlw_down_bd_w_shift             (16)
#define  PPOVERLAY_Highlight_window_border_width_hlw_left_bd_w_shift             (8)
#define  PPOVERLAY_Highlight_window_border_width_hlw_right_bd_w_shift            (0)
#define  PPOVERLAY_Highlight_window_border_width_hlw_up_bd_w_mask                (0x3F000000)
#define  PPOVERLAY_Highlight_window_border_width_hlw_down_bd_w_mask              (0x003F0000)
#define  PPOVERLAY_Highlight_window_border_width_hlw_left_bd_w_mask              (0x00003F00)
#define  PPOVERLAY_Highlight_window_border_width_hlw_right_bd_w_mask             (0x0000003F)
#define  PPOVERLAY_Highlight_window_border_width_hlw_up_bd_w(data)               (0x3F000000&((data)<<24))
#define  PPOVERLAY_Highlight_window_border_width_hlw_down_bd_w(data)             (0x003F0000&((data)<<16))
#define  PPOVERLAY_Highlight_window_border_width_hlw_left_bd_w(data)             (0x00003F00&((data)<<8))
#define  PPOVERLAY_Highlight_window_border_width_hlw_right_bd_w(data)            (0x0000003F&(data))
#define  PPOVERLAY_Highlight_window_border_width_get_hlw_up_bd_w(data)           ((0x3F000000&(data))>>24)
#define  PPOVERLAY_Highlight_window_border_width_get_hlw_down_bd_w(data)         ((0x003F0000&(data))>>16)
#define  PPOVERLAY_Highlight_window_border_width_get_hlw_left_bd_w(data)         ((0x00003F00&(data))>>8)
#define  PPOVERLAY_Highlight_window_border_width_get_hlw_right_bd_w(data)        (0x0000003F&(data))

#define  PPOVERLAY_Highlight_window_min_status                                  0x18028350
#define  PPOVERLAY_Highlight_window_min_status_reg_addr                          "0xB8028350"
#define  PPOVERLAY_Highlight_window_min_status_reg                               0xB8028350
#define  PPOVERLAY_Highlight_window_min_status_inst_addr                         "0x0068"
#define  set_PPOVERLAY_Highlight_window_min_status_reg(data)                     (*((volatile unsigned int*)PPOVERLAY_Highlight_window_min_status_reg)=data)
#define  get_PPOVERLAY_Highlight_window_min_status_reg                           (*((volatile unsigned int*)PPOVERLAY_Highlight_window_min_status_reg))
#define  PPOVERLAY_Highlight_window_min_status_hlw_min_width_shift               (16)
#define  PPOVERLAY_Highlight_window_min_status_hlw_min_height_shift              (0)
#define  PPOVERLAY_Highlight_window_min_status_hlw_min_width_mask                (0x1FFF0000)
#define  PPOVERLAY_Highlight_window_min_status_hlw_min_height_mask               (0x00001FFF)
#define  PPOVERLAY_Highlight_window_min_status_hlw_min_width(data)               (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_Highlight_window_min_status_hlw_min_height(data)              (0x00001FFF&(data))
#define  PPOVERLAY_Highlight_window_min_status_get_hlw_min_width(data)           ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_Highlight_window_min_status_get_hlw_min_height(data)          (0x00001FFF&(data))

#define  PPOVERLAY_MP_Disp_Enable                                               0x18028380
#define  PPOVERLAY_MP_Disp_Enable_reg_addr                                       "0xB8028380"
#define  PPOVERLAY_MP_Disp_Enable_reg                                            0xB8028380
#define  PPOVERLAY_MP_Disp_Enable_inst_addr                                      "0x0069"
#define  set_PPOVERLAY_MP_Disp_Enable_reg(data)                                  (*((volatile unsigned int*)PPOVERLAY_MP_Disp_Enable_reg)=data)
#define  get_PPOVERLAY_MP_Disp_Enable_reg                                        (*((volatile unsigned int*)PPOVERLAY_MP_Disp_Enable_reg))
#define  PPOVERLAY_MP_Disp_Enable_mp_hbd_en_shift                                (0)
#define  PPOVERLAY_MP_Disp_Enable_mp_hbd_en_mask                                 (0x00000001)
#define  PPOVERLAY_MP_Disp_Enable_mp_hbd_en(data)                                (0x00000001&(data))
#define  PPOVERLAY_MP_Disp_Enable_get_mp_hbd_en(data)                            (0x00000001&(data))

#define  PPOVERLAY_MP_Layout_Force_to_Background                                0x18028384
#define  PPOVERLAY_MP_Layout_Force_to_Background_reg_addr                        "0xB8028384"
#define  PPOVERLAY_MP_Layout_Force_to_Background_reg                             0xB8028384
#define  PPOVERLAY_MP_Layout_Force_to_Background_inst_addr                       "0x006A"
#define  set_PPOVERLAY_MP_Layout_Force_to_Background_reg(data)                   (*((volatile unsigned int*)PPOVERLAY_MP_Layout_Force_to_Background_reg)=data)
#define  get_PPOVERLAY_MP_Layout_Force_to_Background_reg                         (*((volatile unsigned int*)PPOVERLAY_MP_Layout_Force_to_Background_reg))
#define  PPOVERLAY_MP_Layout_Force_to_Background_sub_wd_to_background_shift      (15)
#define  PPOVERLAY_MP_Layout_Force_to_Background_sub_wd_to_free_run_shift        (14)
#define  PPOVERLAY_MP_Layout_Force_to_Background_dummy_13_3_shift                (3)
#define  PPOVERLAY_MP_Layout_Force_to_Background_s_bd_trans_shift                (2)
#define  PPOVERLAY_MP_Layout_Force_to_Background_s_force_bg_shift                (1)
#define  PPOVERLAY_MP_Layout_Force_to_Background_s_disp_en_shift                 (0)
#define  PPOVERLAY_MP_Layout_Force_to_Background_sub_wd_to_background_mask       (0x00008000)
#define  PPOVERLAY_MP_Layout_Force_to_Background_sub_wd_to_free_run_mask         (0x00004000)
#define  PPOVERLAY_MP_Layout_Force_to_Background_dummy_13_3_mask                 (0x00003FF8)
#define  PPOVERLAY_MP_Layout_Force_to_Background_s_bd_trans_mask                 (0x00000004)
#define  PPOVERLAY_MP_Layout_Force_to_Background_s_force_bg_mask                 (0x00000002)
#define  PPOVERLAY_MP_Layout_Force_to_Background_s_disp_en_mask                  (0x00000001)
#define  PPOVERLAY_MP_Layout_Force_to_Background_sub_wd_to_background(data)      (0x00008000&((data)<<15))
#define  PPOVERLAY_MP_Layout_Force_to_Background_sub_wd_to_free_run(data)        (0x00004000&((data)<<14))
#define  PPOVERLAY_MP_Layout_Force_to_Background_dummy_13_3(data)                (0x00003FF8&((data)<<3))
#define  PPOVERLAY_MP_Layout_Force_to_Background_s_bd_trans(data)                (0x00000004&((data)<<2))
#define  PPOVERLAY_MP_Layout_Force_to_Background_s_force_bg(data)                (0x00000002&((data)<<1))
#define  PPOVERLAY_MP_Layout_Force_to_Background_s_disp_en(data)                 (0x00000001&(data))
#define  PPOVERLAY_MP_Layout_Force_to_Background_get_sub_wd_to_background(data)  ((0x00008000&(data))>>15)
#define  PPOVERLAY_MP_Layout_Force_to_Background_get_sub_wd_to_free_run(data)    ((0x00004000&(data))>>14)
#define  PPOVERLAY_MP_Layout_Force_to_Background_get_dummy_13_3(data)            ((0x00003FF8&(data))>>3)
#define  PPOVERLAY_MP_Layout_Force_to_Background_get_s_bd_trans(data)            ((0x00000004&(data))>>2)
#define  PPOVERLAY_MP_Layout_Force_to_Background_get_s_force_bg(data)            ((0x00000002&(data))>>1)
#define  PPOVERLAY_MP_Layout_Force_to_Background_get_s_disp_en(data)             (0x00000001&(data))

#define  PPOVERLAY_SUB_Border_Highlight_Border_Color1                           0x18028388
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color1_reg_addr                   "0xB8028388"
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color1_reg                        0xB8028388
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color1_inst_addr                  "0x006B"
#define  set_PPOVERLAY_SUB_Border_Highlight_Border_Color1_reg(data)              (*((volatile unsigned int*)PPOVERLAY_SUB_Border_Highlight_Border_Color1_reg)=data)
#define  get_PPOVERLAY_SUB_Border_Highlight_Border_Color1_reg                    (*((volatile unsigned int*)PPOVERLAY_SUB_Border_Highlight_Border_Color1_reg))
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color1_s_hbd_g_shift              (16)
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color1_s_hbd_b_shift              (0)
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color1_s_hbd_g_mask               (0x3FFF0000)
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color1_s_hbd_b_mask               (0x00003FFF)
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color1_s_hbd_g(data)              (0x3FFF0000&((data)<<16))
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color1_s_hbd_b(data)              (0x00003FFF&(data))
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color1_get_s_hbd_g(data)          ((0x3FFF0000&(data))>>16)
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color1_get_s_hbd_b(data)          (0x00003FFF&(data))

#define  PPOVERLAY_SUB_Border_Highlight_Border_Color2                           0x1802838C
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color2_reg_addr                   "0xB802838C"
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color2_reg                        0xB802838C
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color2_inst_addr                  "0x006C"
#define  set_PPOVERLAY_SUB_Border_Highlight_Border_Color2_reg(data)              (*((volatile unsigned int*)PPOVERLAY_SUB_Border_Highlight_Border_Color2_reg)=data)
#define  get_PPOVERLAY_SUB_Border_Highlight_Border_Color2_reg                    (*((volatile unsigned int*)PPOVERLAY_SUB_Border_Highlight_Border_Color2_reg))
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color2_s_bd_b_shift               (16)
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color2_s_hbd_r_shift              (0)
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color2_s_bd_b_mask                (0x3FFF0000)
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color2_s_hbd_r_mask               (0x00003FFF)
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color2_s_bd_b(data)               (0x3FFF0000&((data)<<16))
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color2_s_hbd_r(data)              (0x00003FFF&(data))
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color2_get_s_bd_b(data)           ((0x3FFF0000&(data))>>16)
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color2_get_s_hbd_r(data)          (0x00003FFF&(data))

#define  PPOVERLAY_SUB_Border_Highlight_Border_Color3                           0x18028390
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color3_reg_addr                   "0xB8028390"
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color3_reg                        0xB8028390
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color3_inst_addr                  "0x006D"
#define  set_PPOVERLAY_SUB_Border_Highlight_Border_Color3_reg(data)              (*((volatile unsigned int*)PPOVERLAY_SUB_Border_Highlight_Border_Color3_reg)=data)
#define  get_PPOVERLAY_SUB_Border_Highlight_Border_Color3_reg                    (*((volatile unsigned int*)PPOVERLAY_SUB_Border_Highlight_Border_Color3_reg))
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color3_s_bd_r_shift               (16)
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color3_s_bd_g_shift               (0)
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color3_s_bd_r_mask                (0x3FFF0000)
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color3_s_bd_g_mask                (0x00003FFF)
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color3_s_bd_r(data)               (0x3FFF0000&((data)<<16))
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color3_s_bd_g(data)               (0x00003FFF&(data))
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color3_get_s_bd_r(data)           ((0x3FFF0000&(data))>>16)
#define  PPOVERLAY_SUB_Border_Highlight_Border_Color3_get_s_bd_g(data)           (0x00003FFF&(data))

#define  PPOVERLAY_SUB_Background_Color1                                        0x18028394
#define  PPOVERLAY_SUB_Background_Color1_reg_addr                                "0xB8028394"
#define  PPOVERLAY_SUB_Background_Color1_reg                                     0xB8028394
#define  PPOVERLAY_SUB_Background_Color1_inst_addr                               "0x006E"
#define  set_PPOVERLAY_SUB_Background_Color1_reg(data)                           (*((volatile unsigned int*)PPOVERLAY_SUB_Background_Color1_reg)=data)
#define  get_PPOVERLAY_SUB_Background_Color1_reg                                 (*((volatile unsigned int*)PPOVERLAY_SUB_Background_Color1_reg))
#define  PPOVERLAY_SUB_Background_Color1_s_bg_g_shift                            (16)
#define  PPOVERLAY_SUB_Background_Color1_s_bg_b_shift                            (0)
#define  PPOVERLAY_SUB_Background_Color1_s_bg_g_mask                             (0x3FFF0000)
#define  PPOVERLAY_SUB_Background_Color1_s_bg_b_mask                             (0x00003FFF)
#define  PPOVERLAY_SUB_Background_Color1_s_bg_g(data)                            (0x3FFF0000&((data)<<16))
#define  PPOVERLAY_SUB_Background_Color1_s_bg_b(data)                            (0x00003FFF&(data))
#define  PPOVERLAY_SUB_Background_Color1_get_s_bg_g(data)                        ((0x3FFF0000&(data))>>16)
#define  PPOVERLAY_SUB_Background_Color1_get_s_bg_b(data)                        (0x00003FFF&(data))

#define  PPOVERLAY_SUB_Background_Color2                                        0x18028398
#define  PPOVERLAY_SUB_Background_Color2_reg_addr                                "0xB8028398"
#define  PPOVERLAY_SUB_Background_Color2_reg                                     0xB8028398
#define  PPOVERLAY_SUB_Background_Color2_inst_addr                               "0x006F"
#define  set_PPOVERLAY_SUB_Background_Color2_reg(data)                           (*((volatile unsigned int*)PPOVERLAY_SUB_Background_Color2_reg)=data)
#define  get_PPOVERLAY_SUB_Background_Color2_reg                                 (*((volatile unsigned int*)PPOVERLAY_SUB_Background_Color2_reg))
#define  PPOVERLAY_SUB_Background_Color2_s_bg_r_shift                            (0)
#define  PPOVERLAY_SUB_Background_Color2_s_bg_r_mask                             (0x00003FFF)
#define  PPOVERLAY_SUB_Background_Color2_s_bg_r(data)                            (0x00003FFF&(data))
#define  PPOVERLAY_SUB_Background_Color2_get_s_bg_r(data)                        (0x00003FFF&(data))

#define  PPOVERLAY_OSD1_3D_OFFSET                                               0x18028400
#define  PPOVERLAY_OSD1_3D_OFFSET_reg_addr                                       "0xB8028400"
#define  PPOVERLAY_OSD1_3D_OFFSET_reg                                            0xB8028400
#define  PPOVERLAY_OSD1_3D_OFFSET_inst_addr                                      "0x0070"
#define  set_PPOVERLAY_OSD1_3D_OFFSET_reg(data)                                  (*((volatile unsigned int*)PPOVERLAY_OSD1_3D_OFFSET_reg)=data)
#define  get_PPOVERLAY_OSD1_3D_OFFSET_reg                                        (*((volatile unsigned int*)PPOVERLAY_OSD1_3D_OFFSET_reg))
#define  PPOVERLAY_OSD1_3D_OFFSET_right_osd1_dir_shift                           (23)
#define  PPOVERLAY_OSD1_3D_OFFSET_right_osd1_offset_shift                        (12)
#define  PPOVERLAY_OSD1_3D_OFFSET_left_osd1_dir_shift                            (11)
#define  PPOVERLAY_OSD1_3D_OFFSET_left_osd1_offset_shift                         (0)
#define  PPOVERLAY_OSD1_3D_OFFSET_right_osd1_dir_mask                            (0x00800000)
#define  PPOVERLAY_OSD1_3D_OFFSET_right_osd1_offset_mask                         (0x007FF000)
#define  PPOVERLAY_OSD1_3D_OFFSET_left_osd1_dir_mask                             (0x00000800)
#define  PPOVERLAY_OSD1_3D_OFFSET_left_osd1_offset_mask                          (0x000007FF)
#define  PPOVERLAY_OSD1_3D_OFFSET_right_osd1_dir(data)                           (0x00800000&((data)<<23))
#define  PPOVERLAY_OSD1_3D_OFFSET_right_osd1_offset(data)                        (0x007FF000&((data)<<12))
#define  PPOVERLAY_OSD1_3D_OFFSET_left_osd1_dir(data)                            (0x00000800&((data)<<11))
#define  PPOVERLAY_OSD1_3D_OFFSET_left_osd1_offset(data)                         (0x000007FF&(data))
#define  PPOVERLAY_OSD1_3D_OFFSET_get_right_osd1_dir(data)                       ((0x00800000&(data))>>23)
#define  PPOVERLAY_OSD1_3D_OFFSET_get_right_osd1_offset(data)                    ((0x007FF000&(data))>>12)
#define  PPOVERLAY_OSD1_3D_OFFSET_get_left_osd1_dir(data)                        ((0x00000800&(data))>>11)
#define  PPOVERLAY_OSD1_3D_OFFSET_get_left_osd1_offset(data)                     (0x000007FF&(data))

#define  PPOVERLAY_OSD2_3D_OFFSET                                               0x18028404
#define  PPOVERLAY_OSD2_3D_OFFSET_reg_addr                                       "0xB8028404"
#define  PPOVERLAY_OSD2_3D_OFFSET_reg                                            0xB8028404
#define  PPOVERLAY_OSD2_3D_OFFSET_inst_addr                                      "0x0071"
#define  set_PPOVERLAY_OSD2_3D_OFFSET_reg(data)                                  (*((volatile unsigned int*)PPOVERLAY_OSD2_3D_OFFSET_reg)=data)
#define  get_PPOVERLAY_OSD2_3D_OFFSET_reg                                        (*((volatile unsigned int*)PPOVERLAY_OSD2_3D_OFFSET_reg))
#define  PPOVERLAY_OSD2_3D_OFFSET_right_osd2_dir_shift                           (23)
#define  PPOVERLAY_OSD2_3D_OFFSET_right_osd2_offset_shift                        (12)
#define  PPOVERLAY_OSD2_3D_OFFSET_left_osd2_dir_shift                            (11)
#define  PPOVERLAY_OSD2_3D_OFFSET_left_osd2_offset_shift                         (0)
#define  PPOVERLAY_OSD2_3D_OFFSET_right_osd2_dir_mask                            (0x00800000)
#define  PPOVERLAY_OSD2_3D_OFFSET_right_osd2_offset_mask                         (0x007FF000)
#define  PPOVERLAY_OSD2_3D_OFFSET_left_osd2_dir_mask                             (0x00000800)
#define  PPOVERLAY_OSD2_3D_OFFSET_left_osd2_offset_mask                          (0x000007FF)
#define  PPOVERLAY_OSD2_3D_OFFSET_right_osd2_dir(data)                           (0x00800000&((data)<<23))
#define  PPOVERLAY_OSD2_3D_OFFSET_right_osd2_offset(data)                        (0x007FF000&((data)<<12))
#define  PPOVERLAY_OSD2_3D_OFFSET_left_osd2_dir(data)                            (0x00000800&((data)<<11))
#define  PPOVERLAY_OSD2_3D_OFFSET_left_osd2_offset(data)                         (0x000007FF&(data))
#define  PPOVERLAY_OSD2_3D_OFFSET_get_right_osd2_dir(data)                       ((0x00800000&(data))>>23)
#define  PPOVERLAY_OSD2_3D_OFFSET_get_right_osd2_offset(data)                    ((0x007FF000&(data))>>12)
#define  PPOVERLAY_OSD2_3D_OFFSET_get_left_osd2_dir(data)                        ((0x00000800&(data))>>11)
#define  PPOVERLAY_OSD2_3D_OFFSET_get_left_osd2_offset(data)                     (0x000007FF&(data))

#define  PPOVERLAY_OSD3_3D_OFFSET                                               0x18028408
#define  PPOVERLAY_OSD3_3D_OFFSET_reg_addr                                       "0xB8028408"
#define  PPOVERLAY_OSD3_3D_OFFSET_reg                                            0xB8028408
#define  PPOVERLAY_OSD3_3D_OFFSET_inst_addr                                      "0x0072"
#define  set_PPOVERLAY_OSD3_3D_OFFSET_reg(data)                                  (*((volatile unsigned int*)PPOVERLAY_OSD3_3D_OFFSET_reg)=data)
#define  get_PPOVERLAY_OSD3_3D_OFFSET_reg                                        (*((volatile unsigned int*)PPOVERLAY_OSD3_3D_OFFSET_reg))
#define  PPOVERLAY_OSD3_3D_OFFSET_right_osd3_dir_shift                           (23)
#define  PPOVERLAY_OSD3_3D_OFFSET_right_osd3_offset_shift                        (12)
#define  PPOVERLAY_OSD3_3D_OFFSET_left_osd3_dir_shift                            (11)
#define  PPOVERLAY_OSD3_3D_OFFSET_left_osd3_offset_shift                         (0)
#define  PPOVERLAY_OSD3_3D_OFFSET_right_osd3_dir_mask                            (0x00800000)
#define  PPOVERLAY_OSD3_3D_OFFSET_right_osd3_offset_mask                         (0x007FF000)
#define  PPOVERLAY_OSD3_3D_OFFSET_left_osd3_dir_mask                             (0x00000800)
#define  PPOVERLAY_OSD3_3D_OFFSET_left_osd3_offset_mask                          (0x000007FF)
#define  PPOVERLAY_OSD3_3D_OFFSET_right_osd3_dir(data)                           (0x00800000&((data)<<23))
#define  PPOVERLAY_OSD3_3D_OFFSET_right_osd3_offset(data)                        (0x007FF000&((data)<<12))
#define  PPOVERLAY_OSD3_3D_OFFSET_left_osd3_dir(data)                            (0x00000800&((data)<<11))
#define  PPOVERLAY_OSD3_3D_OFFSET_left_osd3_offset(data)                         (0x000007FF&(data))
#define  PPOVERLAY_OSD3_3D_OFFSET_get_right_osd3_dir(data)                       ((0x00800000&(data))>>23)
#define  PPOVERLAY_OSD3_3D_OFFSET_get_right_osd3_offset(data)                    ((0x007FF000&(data))>>12)
#define  PPOVERLAY_OSD3_3D_OFFSET_get_left_osd3_dir(data)                        ((0x00000800&(data))>>11)
#define  PPOVERLAY_OSD3_3D_OFFSET_get_left_osd3_offset(data)                     (0x000007FF&(data))

#define  PPOVERLAY_LFLAG_GEN                                                    0x180284CC
#define  PPOVERLAY_LFLAG_GEN_reg_addr                                            "0xB80284CC"
#define  PPOVERLAY_LFLAG_GEN_reg                                                 0xB80284CC
#define  PPOVERLAY_LFLAG_GEN_inst_addr                                           "0x0073"
#define  set_PPOVERLAY_LFLAG_GEN_reg(data)                                       (*((volatile unsigned int*)PPOVERLAY_LFLAG_GEN_reg)=data)
#define  get_PPOVERLAY_LFLAG_GEN_reg                                             (*((volatile unsigned int*)PPOVERLAY_LFLAG_GEN_reg))
#define  PPOVERLAY_LFLAG_GEN_gibi_blackflag_mode_shift                           (31)
#define  PPOVERLAY_LFLAG_GEN_gibi_blackflag_en_shift                             (30)
#define  PPOVERLAY_LFLAG_GEN_gibi_blackflag_shift                                (29)
#define  PPOVERLAY_LFLAG_GEN_gdma_osd_line_alt_shift                             (27)
#define  PPOVERLAY_LFLAG_GEN_gdma_osd_lflag_inv_shift                            (26)
#define  PPOVERLAY_LFLAG_GEN_gdma_subt_line_alt_shift                            (25)
#define  PPOVERLAY_LFLAG_GEN_gdma_subt_lflag_inv_shift                           (24)
#define  PPOVERLAY_LFLAG_GEN_memcdtg_lflag_cnt_reset_shift                       (22)
#define  PPOVERLAY_LFLAG_GEN_memcdtg_lflag_mode_shift                            (21)
#define  PPOVERLAY_LFLAG_GEN_memcdtg_lflag_free_run_shift                        (19)
#define  PPOVERLAY_LFLAG_GEN_memcdtg_lflag_mode_3d_shift                         (18)
#define  PPOVERLAY_LFLAG_GEN_memcdtg_lflag_inv_shift                             (17)
#define  PPOVERLAY_LFLAG_GEN_memcdtg_lflag_shift                                 (16)
#define  PPOVERLAY_LFLAG_GEN_lflag_cnt_reset_shift                               (5)
#define  PPOVERLAY_LFLAG_GEN_lflag_mode_shift                                    (4)
#define  PPOVERLAY_LFLAG_GEN_lflag_free_run_shift                                (3)
#define  PPOVERLAY_LFLAG_GEN_lflag_mode_3d_shift                                 (2)
#define  PPOVERLAY_LFLAG_GEN_lflag_inv_shift                                     (1)
#define  PPOVERLAY_LFLAG_GEN_lflag_shift                                         (0)
#define  PPOVERLAY_LFLAG_GEN_gibi_blackflag_mode_mask                            (0x80000000)
#define  PPOVERLAY_LFLAG_GEN_gibi_blackflag_en_mask                              (0x40000000)
#define  PPOVERLAY_LFLAG_GEN_gibi_blackflag_mask                                 (0x20000000)
#define  PPOVERLAY_LFLAG_GEN_gdma_osd_line_alt_mask                              (0x08000000)
#define  PPOVERLAY_LFLAG_GEN_gdma_osd_lflag_inv_mask                             (0x04000000)
#define  PPOVERLAY_LFLAG_GEN_gdma_subt_line_alt_mask                             (0x02000000)
#define  PPOVERLAY_LFLAG_GEN_gdma_subt_lflag_inv_mask                            (0x01000000)
#define  PPOVERLAY_LFLAG_GEN_memcdtg_lflag_cnt_reset_mask                        (0x00400000)
#define  PPOVERLAY_LFLAG_GEN_memcdtg_lflag_mode_mask                             (0x00200000)
#define  PPOVERLAY_LFLAG_GEN_memcdtg_lflag_free_run_mask                         (0x00180000)
#define  PPOVERLAY_LFLAG_GEN_memcdtg_lflag_mode_3d_mask                          (0x00040000)
#define  PPOVERLAY_LFLAG_GEN_memcdtg_lflag_inv_mask                              (0x00020000)
#define  PPOVERLAY_LFLAG_GEN_memcdtg_lflag_mask                                  (0x00010000)
#define  PPOVERLAY_LFLAG_GEN_lflag_cnt_reset_mask                                (0x00000020)
#define  PPOVERLAY_LFLAG_GEN_lflag_mode_mask                                     (0x00000010)
#define  PPOVERLAY_LFLAG_GEN_lflag_free_run_mask                                 (0x00000008)
#define  PPOVERLAY_LFLAG_GEN_lflag_mode_3d_mask                                  (0x00000004)
#define  PPOVERLAY_LFLAG_GEN_lflag_inv_mask                                      (0x00000002)
#define  PPOVERLAY_LFLAG_GEN_lflag_mask                                          (0x00000001)
#define  PPOVERLAY_LFLAG_GEN_gibi_blackflag_mode(data)                           (0x80000000&((data)<<31))
#define  PPOVERLAY_LFLAG_GEN_gibi_blackflag_en(data)                             (0x40000000&((data)<<30))
#define  PPOVERLAY_LFLAG_GEN_gibi_blackflag(data)                                (0x20000000&((data)<<29))
#define  PPOVERLAY_LFLAG_GEN_gdma_osd_line_alt(data)                             (0x08000000&((data)<<27))
#define  PPOVERLAY_LFLAG_GEN_gdma_osd_lflag_inv(data)                            (0x04000000&((data)<<26))
#define  PPOVERLAY_LFLAG_GEN_gdma_subt_line_alt(data)                            (0x02000000&((data)<<25))
#define  PPOVERLAY_LFLAG_GEN_gdma_subt_lflag_inv(data)                           (0x01000000&((data)<<24))
#define  PPOVERLAY_LFLAG_GEN_memcdtg_lflag_cnt_reset(data)                       (0x00400000&((data)<<22))
#define  PPOVERLAY_LFLAG_GEN_memcdtg_lflag_mode(data)                            (0x00200000&((data)<<21))
#define  PPOVERLAY_LFLAG_GEN_memcdtg_lflag_free_run(data)                        (0x00180000&((data)<<19))
#define  PPOVERLAY_LFLAG_GEN_memcdtg_lflag_mode_3d(data)                         (0x00040000&((data)<<18))
#define  PPOVERLAY_LFLAG_GEN_memcdtg_lflag_inv(data)                             (0x00020000&((data)<<17))
#define  PPOVERLAY_LFLAG_GEN_memcdtg_lflag(data)                                 (0x00010000&((data)<<16))
#define  PPOVERLAY_LFLAG_GEN_lflag_cnt_reset(data)                               (0x00000020&((data)<<5))
#define  PPOVERLAY_LFLAG_GEN_lflag_mode(data)                                    (0x00000010&((data)<<4))
#define  PPOVERLAY_LFLAG_GEN_lflag_free_run(data)                                (0x00000008&((data)<<3))
#define  PPOVERLAY_LFLAG_GEN_lflag_mode_3d(data)                                 (0x00000004&((data)<<2))
#define  PPOVERLAY_LFLAG_GEN_lflag_inv(data)                                     (0x00000002&((data)<<1))
#define  PPOVERLAY_LFLAG_GEN_lflag(data)                                         (0x00000001&(data))
#define  PPOVERLAY_LFLAG_GEN_get_gibi_blackflag_mode(data)                       ((0x80000000&(data))>>31)
#define  PPOVERLAY_LFLAG_GEN_get_gibi_blackflag_en(data)                         ((0x40000000&(data))>>30)
#define  PPOVERLAY_LFLAG_GEN_get_gibi_blackflag(data)                            ((0x20000000&(data))>>29)
#define  PPOVERLAY_LFLAG_GEN_get_gdma_osd_line_alt(data)                         ((0x08000000&(data))>>27)
#define  PPOVERLAY_LFLAG_GEN_get_gdma_osd_lflag_inv(data)                        ((0x04000000&(data))>>26)
#define  PPOVERLAY_LFLAG_GEN_get_gdma_subt_line_alt(data)                        ((0x02000000&(data))>>25)
#define  PPOVERLAY_LFLAG_GEN_get_gdma_subt_lflag_inv(data)                       ((0x01000000&(data))>>24)
#define  PPOVERLAY_LFLAG_GEN_get_memcdtg_lflag_cnt_reset(data)                   ((0x00400000&(data))>>22)
#define  PPOVERLAY_LFLAG_GEN_get_memcdtg_lflag_mode(data)                        ((0x00200000&(data))>>21)
#define  PPOVERLAY_LFLAG_GEN_get_memcdtg_lflag_free_run(data)                    ((0x00180000&(data))>>19)
#define  PPOVERLAY_LFLAG_GEN_get_memcdtg_lflag_mode_3d(data)                     ((0x00040000&(data))>>18)
#define  PPOVERLAY_LFLAG_GEN_get_memcdtg_lflag_inv(data)                         ((0x00020000&(data))>>17)
#define  PPOVERLAY_LFLAG_GEN_get_memcdtg_lflag(data)                             ((0x00010000&(data))>>16)
#define  PPOVERLAY_LFLAG_GEN_get_lflag_cnt_reset(data)                           ((0x00000020&(data))>>5)
#define  PPOVERLAY_LFLAG_GEN_get_lflag_mode(data)                                ((0x00000010&(data))>>4)
#define  PPOVERLAY_LFLAG_GEN_get_lflag_free_run(data)                            ((0x00000008&(data))>>3)
#define  PPOVERLAY_LFLAG_GEN_get_lflag_mode_3d(data)                             ((0x00000004&(data))>>2)
#define  PPOVERLAY_LFLAG_GEN_get_lflag_inv(data)                                 ((0x00000002&(data))>>1)
#define  PPOVERLAY_LFLAG_GEN_get_lflag(data)                                     (0x00000001&(data))

#define  PPOVERLAY_DTG_M_Remove_input_vsync                                     0x18025CD0
#define  PPOVERLAY_DTG_M_Remove_input_vsync_reg_addr                             "0xB8025CD0"
#define  PPOVERLAY_DTG_M_Remove_input_vsync_reg                                  0xB8025CD0
#define  PPOVERLAY_DTG_M_Remove_input_vsync_inst_addr                            "0x0074"
#define  set_PPOVERLAY_DTG_M_Remove_input_vsync_reg(data)                        (*((volatile unsigned int*)PPOVERLAY_DTG_M_Remove_input_vsync_reg)=data)
#define  get_PPOVERLAY_DTG_M_Remove_input_vsync_reg                              (*((volatile unsigned int*)PPOVERLAY_DTG_M_Remove_input_vsync_reg))
#define  PPOVERLAY_DTG_M_Remove_input_vsync_remove_half_ivs_shift                (31)
#define  PPOVERLAY_DTG_M_Remove_input_vsync_remove_half_ivs_mode_shift           (28)
#define  PPOVERLAY_DTG_M_Remove_input_vsync_remove_half_ivs_cnt_reset_shift      (21)
#define  PPOVERLAY_DTG_M_Remove_input_vsync_remove_half_ivs_mode2_shift          (16)
#define  PPOVERLAY_DTG_M_Remove_input_vsync_remove_half_ivs_mask                 (0x80000000)
#define  PPOVERLAY_DTG_M_Remove_input_vsync_remove_half_ivs_mode_mask            (0x70000000)
#define  PPOVERLAY_DTG_M_Remove_input_vsync_remove_half_ivs_cnt_reset_mask       (0x00200000)
#define  PPOVERLAY_DTG_M_Remove_input_vsync_remove_half_ivs_mode2_mask           (0x001F0000)
#define  PPOVERLAY_DTG_M_Remove_input_vsync_remove_half_ivs(data)                (0x80000000&((data)<<31))
#define  PPOVERLAY_DTG_M_Remove_input_vsync_remove_half_ivs_mode(data)           (0x70000000&((data)<<28))
#define  PPOVERLAY_DTG_M_Remove_input_vsync_remove_half_ivs_cnt_reset(data)      (0x00200000&((data)<<21))
#define  PPOVERLAY_DTG_M_Remove_input_vsync_remove_half_ivs_mode2(data)          (0x001F0000&((data)<<16))
#define  PPOVERLAY_DTG_M_Remove_input_vsync_get_remove_half_ivs(data)            ((0x80000000&(data))>>31)
#define  PPOVERLAY_DTG_M_Remove_input_vsync_get_remove_half_ivs_mode(data)       ((0x70000000&(data))>>28)
#define  PPOVERLAY_DTG_M_Remove_input_vsync_get_remove_half_ivs_cnt_reset(data)  ((0x00200000&(data))>>21)
#define  PPOVERLAY_DTG_M_Remove_input_vsync_get_remove_half_ivs_mode2(data)      ((0x001F0000&(data))>>16)

#define  PPOVERLAY_IVS_cnt_1                                                    0x18025CD4
#define  PPOVERLAY_IVS_cnt_1_reg_addr                                            "0xB8025CD4"
#define  PPOVERLAY_IVS_cnt_1_reg                                                 0xB8025CD4
#define  PPOVERLAY_IVS_cnt_1_inst_addr                                           "0x0075"
#define  set_PPOVERLAY_IVS_cnt_1_reg(data)                                       (*((volatile unsigned int*)PPOVERLAY_IVS_cnt_1_reg)=data)
#define  get_PPOVERLAY_IVS_cnt_1_reg                                             (*((volatile unsigned int*)PPOVERLAY_IVS_cnt_1_reg))
#define  PPOVERLAY_IVS_cnt_1_measure_ivs_cnt_src_sel_shift                       (27)
#define  PPOVERLAY_IVS_cnt_1_ivs_cnt_even_shift                                  (0)
#define  PPOVERLAY_IVS_cnt_1_measure_ivs_cnt_src_sel_mask                        (0x08000000)
#define  PPOVERLAY_IVS_cnt_1_ivs_cnt_even_mask                                   (0x01FFFFFF)
#define  PPOVERLAY_IVS_cnt_1_measure_ivs_cnt_src_sel(data)                       (0x08000000&((data)<<27))
#define  PPOVERLAY_IVS_cnt_1_ivs_cnt_even(data)                                  (0x01FFFFFF&(data))
#define  PPOVERLAY_IVS_cnt_1_get_measure_ivs_cnt_src_sel(data)                   ((0x08000000&(data))>>27)
#define  PPOVERLAY_IVS_cnt_1_get_ivs_cnt_even(data)                              (0x01FFFFFF&(data))

#define  PPOVERLAY_IVS_cnt_2                                                    0x18025CD8
#define  PPOVERLAY_IVS_cnt_2_reg_addr                                            "0xB8025CD8"
#define  PPOVERLAY_IVS_cnt_2_reg                                                 0xB8025CD8
#define  PPOVERLAY_IVS_cnt_2_inst_addr                                           "0x0076"
#define  set_PPOVERLAY_IVS_cnt_2_reg(data)                                       (*((volatile unsigned int*)PPOVERLAY_IVS_cnt_2_reg)=data)
#define  get_PPOVERLAY_IVS_cnt_2_reg                                             (*((volatile unsigned int*)PPOVERLAY_IVS_cnt_2_reg))
#define  PPOVERLAY_IVS_cnt_2_ivs_cnt_odd_shift                                   (0)
#define  PPOVERLAY_IVS_cnt_2_ivs_cnt_odd_mask                                    (0x01FFFFFF)
#define  PPOVERLAY_IVS_cnt_2_ivs_cnt_odd(data)                                   (0x01FFFFFF&(data))
#define  PPOVERLAY_IVS_cnt_2_get_ivs_cnt_odd(data)                               (0x01FFFFFF&(data))

#define  PPOVERLAY_IVS_cnt_3                                                    0x18025CDC
#define  PPOVERLAY_IVS_cnt_3_reg_addr                                            "0xB8025CDC"
#define  PPOVERLAY_IVS_cnt_3_reg                                                 0xB8025CDC
#define  PPOVERLAY_IVS_cnt_3_inst_addr                                           "0x0077"
#define  set_PPOVERLAY_IVS_cnt_3_reg(data)                                       (*((volatile unsigned int*)PPOVERLAY_IVS_cnt_3_reg)=data)
#define  get_PPOVERLAY_IVS_cnt_3_reg                                             (*((volatile unsigned int*)PPOVERLAY_IVS_cnt_3_reg))
#define  PPOVERLAY_IVS_cnt_3_ivs_cnt_ori_shift                                   (0)
#define  PPOVERLAY_IVS_cnt_3_ivs_cnt_ori_mask                                    (0x01FFFFFF)
#define  PPOVERLAY_IVS_cnt_3_ivs_cnt_ori(data)                                   (0x01FFFFFF&(data))
#define  PPOVERLAY_IVS_cnt_3_get_ivs_cnt_ori(data)                               (0x01FFFFFF&(data))

#define  PPOVERLAY_DTG_M_multiple_vsync                                         0x18028480
#define  PPOVERLAY_DTG_M_multiple_vsync_reg_addr                                 "0xB8028480"
#define  PPOVERLAY_DTG_M_multiple_vsync_reg                                      0xB8028480
#define  PPOVERLAY_DTG_M_multiple_vsync_inst_addr                                "0x0078"
#define  set_PPOVERLAY_DTG_M_multiple_vsync_reg(data)                            (*((volatile unsigned int*)PPOVERLAY_DTG_M_multiple_vsync_reg)=data)
#define  get_PPOVERLAY_DTG_M_multiple_vsync_reg                                  (*((volatile unsigned int*)PPOVERLAY_DTG_M_multiple_vsync_reg))
#define  PPOVERLAY_DTG_M_multiple_vsync_dtg_m_multiple_vsync_shift               (0)
#define  PPOVERLAY_DTG_M_multiple_vsync_dtg_m_multiple_vsync_mask                (0x0000003F)
#define  PPOVERLAY_DTG_M_multiple_vsync_dtg_m_multiple_vsync(data)               (0x0000003F&(data))
#define  PPOVERLAY_DTG_M_multiple_vsync_get_dtg_m_multiple_vsync(data)           (0x0000003F&(data))

#define  PPOVERLAY_uzudtg_fractional_fsync                                      0x18028484
#define  PPOVERLAY_uzudtg_fractional_fsync_reg_addr                              "0xB8028484"
#define  PPOVERLAY_uzudtg_fractional_fsync_reg                                   0xB8028484
#define  PPOVERLAY_uzudtg_fractional_fsync_inst_addr                             "0x0079"
#define  set_PPOVERLAY_uzudtg_fractional_fsync_reg(data)                         (*((volatile unsigned int*)PPOVERLAY_uzudtg_fractional_fsync_reg)=data)
#define  get_PPOVERLAY_uzudtg_fractional_fsync_reg                               (*((volatile unsigned int*)PPOVERLAY_uzudtg_fractional_fsync_reg))
#define  PPOVERLAY_uzudtg_fractional_fsync_uzudtg_remove_half_ivs_shift          (30)
#define  PPOVERLAY_uzudtg_fractional_fsync_uzudtg_remove_half_ivs_mode_shift     (24)
#define  PPOVERLAY_uzudtg_fractional_fsync_uzudtg_remove_half_ivs_cnt_reset_shift (23)
#define  PPOVERLAY_uzudtg_fractional_fsync_uzudtg_remove_half_ivs_alignmode_shift (20)
#define  PPOVERLAY_uzudtg_fractional_fsync_uzudtg_multiple_vsync_shift           (0)
#define  PPOVERLAY_uzudtg_fractional_fsync_uzudtg_remove_half_ivs_mask           (0x40000000)
#define  PPOVERLAY_uzudtg_fractional_fsync_uzudtg_remove_half_ivs_mode_mask      (0x3F000000)
#define  PPOVERLAY_uzudtg_fractional_fsync_uzudtg_remove_half_ivs_cnt_reset_mask (0x00800000)
#define  PPOVERLAY_uzudtg_fractional_fsync_uzudtg_remove_half_ivs_alignmode_mask (0x00100000)
#define  PPOVERLAY_uzudtg_fractional_fsync_uzudtg_multiple_vsync_mask            (0x0000003F)
#define  PPOVERLAY_uzudtg_fractional_fsync_uzudtg_remove_half_ivs(data)          (0x40000000&((data)<<30))
#define  PPOVERLAY_uzudtg_fractional_fsync_uzudtg_remove_half_ivs_mode(data)     (0x3F000000&((data)<<24))
#define  PPOVERLAY_uzudtg_fractional_fsync_uzudtg_remove_half_ivs_cnt_reset(data) (0x00800000&((data)<<23))
#define  PPOVERLAY_uzudtg_fractional_fsync_uzudtg_remove_half_ivs_alignmode(data) (0x00100000&((data)<<20))
#define  PPOVERLAY_uzudtg_fractional_fsync_uzudtg_multiple_vsync(data)           (0x0000003F&(data))
#define  PPOVERLAY_uzudtg_fractional_fsync_get_uzudtg_remove_half_ivs(data)      ((0x40000000&(data))>>30)
#define  PPOVERLAY_uzudtg_fractional_fsync_get_uzudtg_remove_half_ivs_mode(data) ((0x3F000000&(data))>>24)
#define  PPOVERLAY_uzudtg_fractional_fsync_get_uzudtg_remove_half_ivs_cnt_reset(data) ((0x00800000&(data))>>23)
#define  PPOVERLAY_uzudtg_fractional_fsync_get_uzudtg_remove_half_ivs_alignmode(data) ((0x00100000&(data))>>20)
#define  PPOVERLAY_uzudtg_fractional_fsync_get_uzudtg_multiple_vsync(data)       (0x0000003F&(data))

#define  PPOVERLAY_memcdtg_fractional_fsync                                     0x18028488
#define  PPOVERLAY_memcdtg_fractional_fsync_reg_addr                             "0xB8028488"
#define  PPOVERLAY_memcdtg_fractional_fsync_reg                                  0xB8028488
#define  PPOVERLAY_memcdtg_fractional_fsync_inst_addr                            "0x007A"
#define  set_PPOVERLAY_memcdtg_fractional_fsync_reg(data)                        (*((volatile unsigned int*)PPOVERLAY_memcdtg_fractional_fsync_reg)=data)
#define  get_PPOVERLAY_memcdtg_fractional_fsync_reg                              (*((volatile unsigned int*)PPOVERLAY_memcdtg_fractional_fsync_reg))
#define  PPOVERLAY_memcdtg_fractional_fsync_memcdtg_remove_half_ivs_shift        (30)
#define  PPOVERLAY_memcdtg_fractional_fsync_memcdtg_remove_half_ivs_mode_shift   (24)
#define  PPOVERLAY_memcdtg_fractional_fsync_memcdtg_remove_half_ivs_cnt_reset_shift (23)
#define  PPOVERLAY_memcdtg_fractional_fsync_memcdtg_remove_half_ivs_alignmode_shift (20)
#define  PPOVERLAY_memcdtg_fractional_fsync_memcdtg_multiple_vsync_shift         (0)
#define  PPOVERLAY_memcdtg_fractional_fsync_memcdtg_remove_half_ivs_mask         (0x40000000)
#define  PPOVERLAY_memcdtg_fractional_fsync_memcdtg_remove_half_ivs_mode_mask    (0x3F000000)
#define  PPOVERLAY_memcdtg_fractional_fsync_memcdtg_remove_half_ivs_cnt_reset_mask (0x00800000)
#define  PPOVERLAY_memcdtg_fractional_fsync_memcdtg_remove_half_ivs_alignmode_mask (0x00100000)
#define  PPOVERLAY_memcdtg_fractional_fsync_memcdtg_multiple_vsync_mask          (0x0000003F)
#define  PPOVERLAY_memcdtg_fractional_fsync_memcdtg_remove_half_ivs(data)        (0x40000000&((data)<<30))
#define  PPOVERLAY_memcdtg_fractional_fsync_memcdtg_remove_half_ivs_mode(data)   (0x3F000000&((data)<<24))
#define  PPOVERLAY_memcdtg_fractional_fsync_memcdtg_remove_half_ivs_cnt_reset(data) (0x00800000&((data)<<23))
#define  PPOVERLAY_memcdtg_fractional_fsync_memcdtg_remove_half_ivs_alignmode(data) (0x00100000&((data)<<20))
#define  PPOVERLAY_memcdtg_fractional_fsync_memcdtg_multiple_vsync(data)         (0x0000003F&(data))
#define  PPOVERLAY_memcdtg_fractional_fsync_get_memcdtg_remove_half_ivs(data)    ((0x40000000&(data))>>30)
#define  PPOVERLAY_memcdtg_fractional_fsync_get_memcdtg_remove_half_ivs_mode(data) ((0x3F000000&(data))>>24)
#define  PPOVERLAY_memcdtg_fractional_fsync_get_memcdtg_remove_half_ivs_cnt_reset(data) ((0x00800000&(data))>>23)
#define  PPOVERLAY_memcdtg_fractional_fsync_get_memcdtg_remove_half_ivs_alignmode(data) ((0x00100000&(data))>>20)
#define  PPOVERLAY_memcdtg_fractional_fsync_get_memcdtg_multiple_vsync(data)     (0x0000003F&(data))

#define  PPOVERLAY_osddtg_fractional_fsync                                      0x1802848C
#define  PPOVERLAY_osddtg_fractional_fsync_reg_addr                              "0xB802848C"
#define  PPOVERLAY_osddtg_fractional_fsync_reg                                   0xB802848C
#define  PPOVERLAY_osddtg_fractional_fsync_inst_addr                             "0x007B"
#define  set_PPOVERLAY_osddtg_fractional_fsync_reg(data)                         (*((volatile unsigned int*)PPOVERLAY_osddtg_fractional_fsync_reg)=data)
#define  get_PPOVERLAY_osddtg_fractional_fsync_reg                               (*((volatile unsigned int*)PPOVERLAY_osddtg_fractional_fsync_reg))
#define  PPOVERLAY_osddtg_fractional_fsync_osddtg_remove_half_ivs_shift          (30)
#define  PPOVERLAY_osddtg_fractional_fsync_osddtg_remove_half_ivs_mode_shift     (24)
#define  PPOVERLAY_osddtg_fractional_fsync_osddtg_remove_half_ivs_cnt_reset_shift (23)
#define  PPOVERLAY_osddtg_fractional_fsync_osddtg_remove_half_ivs_alignmode_shift (20)
#define  PPOVERLAY_osddtg_fractional_fsync_osddtg_multiple_vsync_shift           (0)
#define  PPOVERLAY_osddtg_fractional_fsync_osddtg_remove_half_ivs_mask           (0x40000000)
#define  PPOVERLAY_osddtg_fractional_fsync_osddtg_remove_half_ivs_mode_mask      (0x3F000000)
#define  PPOVERLAY_osddtg_fractional_fsync_osddtg_remove_half_ivs_cnt_reset_mask (0x00800000)
#define  PPOVERLAY_osddtg_fractional_fsync_osddtg_remove_half_ivs_alignmode_mask (0x00100000)
#define  PPOVERLAY_osddtg_fractional_fsync_osddtg_multiple_vsync_mask            (0x0000003F)
#define  PPOVERLAY_osddtg_fractional_fsync_osddtg_remove_half_ivs(data)          (0x40000000&((data)<<30))
#define  PPOVERLAY_osddtg_fractional_fsync_osddtg_remove_half_ivs_mode(data)     (0x3F000000&((data)<<24))
#define  PPOVERLAY_osddtg_fractional_fsync_osddtg_remove_half_ivs_cnt_reset(data) (0x00800000&((data)<<23))
#define  PPOVERLAY_osddtg_fractional_fsync_osddtg_remove_half_ivs_alignmode(data) (0x00100000&((data)<<20))
#define  PPOVERLAY_osddtg_fractional_fsync_osddtg_multiple_vsync(data)           (0x0000003F&(data))
#define  PPOVERLAY_osddtg_fractional_fsync_get_osddtg_remove_half_ivs(data)      ((0x40000000&(data))>>30)
#define  PPOVERLAY_osddtg_fractional_fsync_get_osddtg_remove_half_ivs_mode(data) ((0x3F000000&(data))>>24)
#define  PPOVERLAY_osddtg_fractional_fsync_get_osddtg_remove_half_ivs_cnt_reset(data) ((0x00800000&(data))>>23)
#define  PPOVERLAY_osddtg_fractional_fsync_get_osddtg_remove_half_ivs_alignmode(data) ((0x00100000&(data))>>20)
#define  PPOVERLAY_osddtg_fractional_fsync_get_osddtg_multiple_vsync(data)       (0x0000003F&(data))

#define  PPOVERLAY_DTG_FRAME_CNT1                                               0x180284A0
#define  PPOVERLAY_DTG_FRAME_CNT1_reg_addr                                       "0xB80284A0"
#define  PPOVERLAY_DTG_FRAME_CNT1_reg                                            0xB80284A0
#define  PPOVERLAY_DTG_FRAME_CNT1_inst_addr                                      "0x007C"
#define  set_PPOVERLAY_DTG_FRAME_CNT1_reg(data)                                  (*((volatile unsigned int*)PPOVERLAY_DTG_FRAME_CNT1_reg)=data)
#define  get_PPOVERLAY_DTG_FRAME_CNT1_reg                                        (*((volatile unsigned int*)PPOVERLAY_DTG_FRAME_CNT1_reg))
#define  PPOVERLAY_DTG_FRAME_CNT1_uzudtg_input_frame_cnt_shift                   (24)
#define  PPOVERLAY_DTG_FRAME_CNT1_uzudtg_output_frame_cnt_shift                  (16)
#define  PPOVERLAY_DTG_FRAME_CNT1_memcdtg_input_frame_cnt_shift                  (8)
#define  PPOVERLAY_DTG_FRAME_CNT1_memcdtg_output_frame_cnt_shift                 (0)
#define  PPOVERLAY_DTG_FRAME_CNT1_uzudtg_input_frame_cnt_mask                    (0x3F000000)
#define  PPOVERLAY_DTG_FRAME_CNT1_uzudtg_output_frame_cnt_mask                   (0x003F0000)
#define  PPOVERLAY_DTG_FRAME_CNT1_memcdtg_input_frame_cnt_mask                   (0x00003F00)
#define  PPOVERLAY_DTG_FRAME_CNT1_memcdtg_output_frame_cnt_mask                  (0x0000003F)
#define  PPOVERLAY_DTG_FRAME_CNT1_uzudtg_input_frame_cnt(data)                   (0x3F000000&((data)<<24))
#define  PPOVERLAY_DTG_FRAME_CNT1_uzudtg_output_frame_cnt(data)                  (0x003F0000&((data)<<16))
#define  PPOVERLAY_DTG_FRAME_CNT1_memcdtg_input_frame_cnt(data)                  (0x00003F00&((data)<<8))
#define  PPOVERLAY_DTG_FRAME_CNT1_memcdtg_output_frame_cnt(data)                 (0x0000003F&(data))
#define  PPOVERLAY_DTG_FRAME_CNT1_get_uzudtg_input_frame_cnt(data)               ((0x3F000000&(data))>>24)
#define  PPOVERLAY_DTG_FRAME_CNT1_get_uzudtg_output_frame_cnt(data)              ((0x003F0000&(data))>>16)
#define  PPOVERLAY_DTG_FRAME_CNT1_get_memcdtg_input_frame_cnt(data)              ((0x00003F00&(data))>>8)
#define  PPOVERLAY_DTG_FRAME_CNT1_get_memcdtg_output_frame_cnt(data)             (0x0000003F&(data))

#define  PPOVERLAY_DTG_FRAME_CNT2                                               0x180284A4
#define  PPOVERLAY_DTG_FRAME_CNT2_reg_addr                                       "0xB80284A4"
#define  PPOVERLAY_DTG_FRAME_CNT2_reg                                            0xB80284A4
#define  PPOVERLAY_DTG_FRAME_CNT2_inst_addr                                      "0x007D"
#define  set_PPOVERLAY_DTG_FRAME_CNT2_reg(data)                                  (*((volatile unsigned int*)PPOVERLAY_DTG_FRAME_CNT2_reg)=data)
#define  get_PPOVERLAY_DTG_FRAME_CNT2_reg                                        (*((volatile unsigned int*)PPOVERLAY_DTG_FRAME_CNT2_reg))
#define  PPOVERLAY_DTG_FRAME_CNT2_osddtg_input_frame_cnt_shift                   (24)
#define  PPOVERLAY_DTG_FRAME_CNT2_osddtg_output_frame_cnt_shift                  (16)
#define  PPOVERLAY_DTG_FRAME_CNT2_dtg_output_frame_cnt_shift                     (0)
#define  PPOVERLAY_DTG_FRAME_CNT2_osddtg_input_frame_cnt_mask                    (0x3F000000)
#define  PPOVERLAY_DTG_FRAME_CNT2_osddtg_output_frame_cnt_mask                   (0x003F0000)
#define  PPOVERLAY_DTG_FRAME_CNT2_dtg_output_frame_cnt_mask                      (0x0000003F)
#define  PPOVERLAY_DTG_FRAME_CNT2_osddtg_input_frame_cnt(data)                   (0x3F000000&((data)<<24))
#define  PPOVERLAY_DTG_FRAME_CNT2_osddtg_output_frame_cnt(data)                  (0x003F0000&((data)<<16))
#define  PPOVERLAY_DTG_FRAME_CNT2_dtg_output_frame_cnt(data)                     (0x0000003F&(data))
#define  PPOVERLAY_DTG_FRAME_CNT2_get_osddtg_input_frame_cnt(data)               ((0x3F000000&(data))>>24)
#define  PPOVERLAY_DTG_FRAME_CNT2_get_osddtg_output_frame_cnt(data)              ((0x003F0000&(data))>>16)
#define  PPOVERLAY_DTG_FRAME_CNT2_get_dtg_output_frame_cnt(data)                 (0x0000003F&(data))

#define  PPOVERLAY_DTG_FRAME_CNT3                                               0x18025CE0
#define  PPOVERLAY_DTG_FRAME_CNT3_reg_addr                                       "0xB8025CE0"
#define  PPOVERLAY_DTG_FRAME_CNT3_reg                                            0xB8025CE0
#define  PPOVERLAY_DTG_FRAME_CNT3_inst_addr                                      "0x007E"
#define  set_PPOVERLAY_DTG_FRAME_CNT3_reg(data)                                  (*((volatile unsigned int*)PPOVERLAY_DTG_FRAME_CNT3_reg)=data)
#define  get_PPOVERLAY_DTG_FRAME_CNT3_reg                                        (*((volatile unsigned int*)PPOVERLAY_DTG_FRAME_CNT3_reg))
#define  PPOVERLAY_DTG_FRAME_CNT3_dtg_input_frame_cnt_shift                      (0)
#define  PPOVERLAY_DTG_FRAME_CNT3_dtg_input_frame_cnt_mask                       (0x0000001F)
#define  PPOVERLAY_DTG_FRAME_CNT3_dtg_input_frame_cnt(data)                      (0x0000001F&(data))
#define  PPOVERLAY_DTG_FRAME_CNT3_get_dtg_input_frame_cnt(data)                  (0x0000001F&(data))

#define  PPOVERLAY_osd_dtg_dh_width                                             0x180284B0
#define  PPOVERLAY_osd_dtg_dh_width_reg_addr                                     "0xB80284B0"
#define  PPOVERLAY_osd_dtg_dh_width_reg                                          0xB80284B0
#define  PPOVERLAY_osd_dtg_dh_width_inst_addr                                    "0x007F"
#define  set_PPOVERLAY_osd_dtg_dh_width_reg(data)                                (*((volatile unsigned int*)PPOVERLAY_osd_dtg_dh_width_reg)=data)
#define  get_PPOVERLAY_osd_dtg_dh_width_reg                                      (*((volatile unsigned int*)PPOVERLAY_osd_dtg_dh_width_reg))
#define  PPOVERLAY_osd_dtg_dh_width_pif_osd_dh_width_shift                       (0)
#define  PPOVERLAY_osd_dtg_dh_width_pif_osd_dh_width_mask                        (0x000000FF)
#define  PPOVERLAY_osd_dtg_dh_width_pif_osd_dh_width(data)                       (0x000000FF&(data))
#define  PPOVERLAY_osd_dtg_dh_width_get_pif_osd_dh_width(data)                   (0x000000FF&(data))

#define  PPOVERLAY_osd_dtg_dv_length                                            0x180284B4
#define  PPOVERLAY_osd_dtg_dv_length_reg_addr                                    "0xB80284B4"
#define  PPOVERLAY_osd_dtg_dv_length_reg                                         0xB80284B4
#define  PPOVERLAY_osd_dtg_dv_length_inst_addr                                   "0x0080"
#define  set_PPOVERLAY_osd_dtg_dv_length_reg(data)                               (*((volatile unsigned int*)PPOVERLAY_osd_dtg_dv_length_reg)=data)
#define  get_PPOVERLAY_osd_dtg_dv_length_reg                                     (*((volatile unsigned int*)PPOVERLAY_osd_dtg_dv_length_reg))
#define  PPOVERLAY_osd_dtg_dv_length_pif_osd_dv_length_shift                     (0)
#define  PPOVERLAY_osd_dtg_dv_length_pif_osd_dv_length_mask                      (0x000000FF)
#define  PPOVERLAY_osd_dtg_dv_length_pif_osd_dv_length(data)                     (0x000000FF&(data))
#define  PPOVERLAY_osd_dtg_dv_length_get_pif_osd_dv_length(data)                 (0x000000FF&(data))

#define  PPOVERLAY_UZUDTG_COUNTROL                                              0x18028500
#define  PPOVERLAY_UZUDTG_COUNTROL_reg_addr                                      "0xB8028500"
#define  PPOVERLAY_UZUDTG_COUNTROL_reg                                           0xB8028500
#define  PPOVERLAY_UZUDTG_COUNTROL_inst_addr                                     "0x0081"
#define  set_PPOVERLAY_UZUDTG_COUNTROL_reg(data)                                 (*((volatile unsigned int*)PPOVERLAY_UZUDTG_COUNTROL_reg)=data)
#define  get_PPOVERLAY_UZUDTG_COUNTROL_reg                                       (*((volatile unsigned int*)PPOVERLAY_UZUDTG_COUNTROL_reg))
#define  PPOVERLAY_UZUDTG_COUNTROL_uzudtg_mode_revised_shift                     (31)
#define  PPOVERLAY_UZUDTG_COUNTROL_uzudtg_frc_fsync_status_shift                 (6)
#define  PPOVERLAY_UZUDTG_COUNTROL_uzudtg_frc2fsync_by_hw_shift                  (5)
#define  PPOVERLAY_UZUDTG_COUNTROL_uzudtg_fsync_en_shift                         (4)
#define  PPOVERLAY_UZUDTG_COUNTROL_uzudtg_en_shift                               (0)
#define  PPOVERLAY_UZUDTG_COUNTROL_uzudtg_mode_revised_mask                      (0x80000000)
#define  PPOVERLAY_UZUDTG_COUNTROL_uzudtg_frc_fsync_status_mask                  (0x00000040)
#define  PPOVERLAY_UZUDTG_COUNTROL_uzudtg_frc2fsync_by_hw_mask                   (0x00000020)
#define  PPOVERLAY_UZUDTG_COUNTROL_uzudtg_fsync_en_mask                          (0x00000010)
#define  PPOVERLAY_UZUDTG_COUNTROL_uzudtg_en_mask                                (0x00000001)
#define  PPOVERLAY_UZUDTG_COUNTROL_uzudtg_mode_revised(data)                     (0x80000000&((data)<<31))
#define  PPOVERLAY_UZUDTG_COUNTROL_uzudtg_frc_fsync_status(data)                 (0x00000040&((data)<<6))
#define  PPOVERLAY_UZUDTG_COUNTROL_uzudtg_frc2fsync_by_hw(data)                  (0x00000020&((data)<<5))
#define  PPOVERLAY_UZUDTG_COUNTROL_uzudtg_fsync_en(data)                         (0x00000010&((data)<<4))
#define  PPOVERLAY_UZUDTG_COUNTROL_uzudtg_en(data)                               (0x00000001&(data))
#define  PPOVERLAY_UZUDTG_COUNTROL_get_uzudtg_mode_revised(data)                 ((0x80000000&(data))>>31)
#define  PPOVERLAY_UZUDTG_COUNTROL_get_uzudtg_frc_fsync_status(data)             ((0x00000040&(data))>>6)
#define  PPOVERLAY_UZUDTG_COUNTROL_get_uzudtg_frc2fsync_by_hw(data)              ((0x00000020&(data))>>5)
#define  PPOVERLAY_UZUDTG_COUNTROL_get_uzudtg_fsync_en(data)                     ((0x00000010&(data))>>4)
#define  PPOVERLAY_UZUDTG_COUNTROL_get_uzudtg_en(data)                           (0x00000001&(data))

#define  PPOVERLAY_uzudtg_DV_TOTAL                                              0x18028504
#define  PPOVERLAY_uzudtg_DV_TOTAL_reg_addr                                      "0xB8028504"
#define  PPOVERLAY_uzudtg_DV_TOTAL_reg                                           0xB8028504
#define  PPOVERLAY_uzudtg_DV_TOTAL_inst_addr                                     "0x0082"
#define  set_PPOVERLAY_uzudtg_DV_TOTAL_reg(data)                                 (*((volatile unsigned int*)PPOVERLAY_uzudtg_DV_TOTAL_reg)=data)
#define  get_PPOVERLAY_uzudtg_DV_TOTAL_reg                                       (*((volatile unsigned int*)PPOVERLAY_uzudtg_DV_TOTAL_reg))
#define  PPOVERLAY_uzudtg_DV_TOTAL_uzudtg_dv_total_shift                         (0)
#define  PPOVERLAY_uzudtg_DV_TOTAL_uzudtg_dv_total_mask                          (0x00001FFF)
#define  PPOVERLAY_uzudtg_DV_TOTAL_uzudtg_dv_total(data)                         (0x00001FFF&(data))
#define  PPOVERLAY_uzudtg_DV_TOTAL_get_uzudtg_dv_total(data)                     (0x00001FFF&(data))

#define  PPOVERLAY_uzudtg_DH_TOTAL                                              0x18028508
#define  PPOVERLAY_uzudtg_DH_TOTAL_reg_addr                                      "0xB8028508"
#define  PPOVERLAY_uzudtg_DH_TOTAL_reg                                           0xB8028508
#define  PPOVERLAY_uzudtg_DH_TOTAL_inst_addr                                     "0x0083"
#define  set_PPOVERLAY_uzudtg_DH_TOTAL_reg(data)                                 (*((volatile unsigned int*)PPOVERLAY_uzudtg_DH_TOTAL_reg)=data)
#define  get_PPOVERLAY_uzudtg_DH_TOTAL_reg                                       (*((volatile unsigned int*)PPOVERLAY_uzudtg_DH_TOTAL_reg))
#define  PPOVERLAY_uzudtg_DH_TOTAL_uzudtg_dh_total_last_line_shift               (16)
#define  PPOVERLAY_uzudtg_DH_TOTAL_uzudtg_dh_total_shift                         (0)
#define  PPOVERLAY_uzudtg_DH_TOTAL_uzudtg_dh_total_last_line_mask                (0x1FFF0000)
#define  PPOVERLAY_uzudtg_DH_TOTAL_uzudtg_dh_total_mask                          (0x00001FFF)
#define  PPOVERLAY_uzudtg_DH_TOTAL_uzudtg_dh_total_last_line(data)               (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_uzudtg_DH_TOTAL_uzudtg_dh_total(data)                         (0x00001FFF&(data))
#define  PPOVERLAY_uzudtg_DH_TOTAL_get_uzudtg_dh_total_last_line(data)           ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_uzudtg_DH_TOTAL_get_uzudtg_dh_total(data)                     (0x00001FFF&(data))

#define  PPOVERLAY_uzudtg_control1                                              0x1802850C
#define  PPOVERLAY_uzudtg_control1_reg_addr                                      "0xB802850C"
#define  PPOVERLAY_uzudtg_control1_reg                                           0xB802850C
#define  PPOVERLAY_uzudtg_control1_inst_addr                                     "0x0084"
#define  set_PPOVERLAY_uzudtg_control1_reg(data)                                 (*((volatile unsigned int*)PPOVERLAY_uzudtg_control1_reg)=data)
#define  get_PPOVERLAY_uzudtg_control1_reg                                       (*((volatile unsigned int*)PPOVERLAY_uzudtg_control1_reg))
#define  PPOVERLAY_uzudtg_control1_two_step_uzu_en_shift                         (31)
#define  PPOVERLAY_uzudtg_control1_uzu_4k_120_mode_shift                         (30)
#define  PPOVERLAY_uzudtg_control1_dtgm2uzuvs_line_shift                         (16)
#define  PPOVERLAY_uzudtg_control1_dtgm2uzuvs_pixel_shift                        (0)
#define  PPOVERLAY_uzudtg_control1_two_step_uzu_en_mask                          (0x80000000)
#define  PPOVERLAY_uzudtg_control1_uzu_4k_120_mode_mask                          (0x40000000)
#define  PPOVERLAY_uzudtg_control1_dtgm2uzuvs_line_mask                          (0x1FFF0000)
#define  PPOVERLAY_uzudtg_control1_dtgm2uzuvs_pixel_mask                         (0x00001FFF)
#define  PPOVERLAY_uzudtg_control1_two_step_uzu_en(data)                         (0x80000000&((data)<<31))
#define  PPOVERLAY_uzudtg_control1_uzu_4k_120_mode(data)                         (0x40000000&((data)<<30))
#define  PPOVERLAY_uzudtg_control1_dtgm2uzuvs_line(data)                         (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_uzudtg_control1_dtgm2uzuvs_pixel(data)                        (0x00001FFF&(data))
#define  PPOVERLAY_uzudtg_control1_get_two_step_uzu_en(data)                     ((0x80000000&(data))>>31)
#define  PPOVERLAY_uzudtg_control1_get_uzu_4k_120_mode(data)                     ((0x40000000&(data))>>30)
#define  PPOVERLAY_uzudtg_control1_get_dtgm2uzuvs_line(data)                     ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_uzudtg_control1_get_dtgm2uzuvs_pixel(data)                    (0x00001FFF&(data))

#define  PPOVERLAY_uzudtg_control2                                              0x18028510
#define  PPOVERLAY_uzudtg_control2_reg_addr                                      "0xB8028510"
#define  PPOVERLAY_uzudtg_control2_reg                                           0xB8028510
#define  PPOVERLAY_uzudtg_control2_inst_addr                                     "0x0085"
#define  set_PPOVERLAY_uzudtg_control2_reg(data)                                 (*((volatile unsigned int*)PPOVERLAY_uzudtg_control2_reg)=data)
#define  get_PPOVERLAY_uzudtg_control2_reg                                       (*((volatile unsigned int*)PPOVERLAY_uzudtg_control2_reg))
#define  PPOVERLAY_uzudtg_control2_dtgm2uzu_s1_vs_line_shift                     (16)
#define  PPOVERLAY_uzudtg_control2_dtgm2uzu_s1_vs_pixel_shift                    (0)
#define  PPOVERLAY_uzudtg_control2_dtgm2uzu_s1_vs_line_mask                      (0x1FFF0000)
#define  PPOVERLAY_uzudtg_control2_dtgm2uzu_s1_vs_pixel_mask                     (0x00001FFF)
#define  PPOVERLAY_uzudtg_control2_dtgm2uzu_s1_vs_line(data)                     (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_uzudtg_control2_dtgm2uzu_s1_vs_pixel(data)                    (0x00001FFF&(data))
#define  PPOVERLAY_uzudtg_control2_get_dtgm2uzu_s1_vs_line(data)                 ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_uzudtg_control2_get_dtgm2uzu_s1_vs_pixel(data)                (0x00001FFF&(data))

#define  PPOVERLAY_DH_DEN_Start_End                                             0x18028518
#define  PPOVERLAY_DH_DEN_Start_End_reg_addr                                     "0xB8028518"
#define  PPOVERLAY_DH_DEN_Start_End_reg                                          0xB8028518
#define  PPOVERLAY_DH_DEN_Start_End_inst_addr                                    "0x0086"
#define  set_PPOVERLAY_DH_DEN_Start_End_reg(data)                                (*((volatile unsigned int*)PPOVERLAY_DH_DEN_Start_End_reg)=data)
#define  get_PPOVERLAY_DH_DEN_Start_End_reg                                      (*((volatile unsigned int*)PPOVERLAY_DH_DEN_Start_End_reg))
#define  PPOVERLAY_DH_DEN_Start_End_dh_den_sta_shift                             (16)
#define  PPOVERLAY_DH_DEN_Start_End_dh_den_end_shift                             (0)
#define  PPOVERLAY_DH_DEN_Start_End_dh_den_sta_mask                              (0x1FFF0000)
#define  PPOVERLAY_DH_DEN_Start_End_dh_den_end_mask                              (0x00001FFF)
#define  PPOVERLAY_DH_DEN_Start_End_dh_den_sta(data)                             (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_DH_DEN_Start_End_dh_den_end(data)                             (0x00001FFF&(data))
#define  PPOVERLAY_DH_DEN_Start_End_get_dh_den_sta(data)                         ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_DH_DEN_Start_End_get_dh_den_end(data)                         (0x00001FFF&(data))

#define  PPOVERLAY_DV_DEN_Start_End                                             0x1802851C
#define  PPOVERLAY_DV_DEN_Start_End_reg_addr                                     "0xB802851C"
#define  PPOVERLAY_DV_DEN_Start_End_reg                                          0xB802851C
#define  PPOVERLAY_DV_DEN_Start_End_inst_addr                                    "0x0087"
#define  set_PPOVERLAY_DV_DEN_Start_End_reg(data)                                (*((volatile unsigned int*)PPOVERLAY_DV_DEN_Start_End_reg)=data)
#define  get_PPOVERLAY_DV_DEN_Start_End_reg                                      (*((volatile unsigned int*)PPOVERLAY_DV_DEN_Start_End_reg))
#define  PPOVERLAY_DV_DEN_Start_End_dv_den_sta_shift                             (16)
#define  PPOVERLAY_DV_DEN_Start_End_dv_den_end_shift                             (0)
#define  PPOVERLAY_DV_DEN_Start_End_dv_den_sta_mask                              (0x1FFF0000)
#define  PPOVERLAY_DV_DEN_Start_End_dv_den_end_mask                              (0x00001FFF)
#define  PPOVERLAY_DV_DEN_Start_End_dv_den_sta(data)                             (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_DV_DEN_Start_End_dv_den_end(data)                             (0x00001FFF&(data))
#define  PPOVERLAY_DV_DEN_Start_End_get_dv_den_sta(data)                         ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_DV_DEN_Start_End_get_dv_den_end(data)                         (0x00001FFF&(data))

#define  PPOVERLAY_MAIN_DEN_H_Start_End                                         0x18028540
#define  PPOVERLAY_MAIN_DEN_H_Start_End_reg_addr                                 "0xB8028540"
#define  PPOVERLAY_MAIN_DEN_H_Start_End_reg                                      0xB8028540
#define  PPOVERLAY_MAIN_DEN_H_Start_End_inst_addr                                "0x0088"
#define  set_PPOVERLAY_MAIN_DEN_H_Start_End_reg(data)                            (*((volatile unsigned int*)PPOVERLAY_MAIN_DEN_H_Start_End_reg)=data)
#define  get_PPOVERLAY_MAIN_DEN_H_Start_End_reg                                  (*((volatile unsigned int*)PPOVERLAY_MAIN_DEN_H_Start_End_reg))
#define  PPOVERLAY_MAIN_DEN_H_Start_End_mh_den_sta_shift                         (16)
#define  PPOVERLAY_MAIN_DEN_H_Start_End_mh_den_end_shift                         (0)
#define  PPOVERLAY_MAIN_DEN_H_Start_End_mh_den_sta_mask                          (0x1FFF0000)
#define  PPOVERLAY_MAIN_DEN_H_Start_End_mh_den_end_mask                          (0x00001FFF)
#define  PPOVERLAY_MAIN_DEN_H_Start_End_mh_den_sta(data)                         (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_MAIN_DEN_H_Start_End_mh_den_end(data)                         (0x00001FFF&(data))
#define  PPOVERLAY_MAIN_DEN_H_Start_End_get_mh_den_sta(data)                     ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_MAIN_DEN_H_Start_End_get_mh_den_end(data)                     (0x00001FFF&(data))

#define  PPOVERLAY_MAIN_DEN_V_Start_End                                         0x18028544
#define  PPOVERLAY_MAIN_DEN_V_Start_End_reg_addr                                 "0xB8028544"
#define  PPOVERLAY_MAIN_DEN_V_Start_End_reg                                      0xB8028544
#define  PPOVERLAY_MAIN_DEN_V_Start_End_inst_addr                                "0x0089"
#define  set_PPOVERLAY_MAIN_DEN_V_Start_End_reg(data)                            (*((volatile unsigned int*)PPOVERLAY_MAIN_DEN_V_Start_End_reg)=data)
#define  get_PPOVERLAY_MAIN_DEN_V_Start_End_reg                                  (*((volatile unsigned int*)PPOVERLAY_MAIN_DEN_V_Start_End_reg))
#define  PPOVERLAY_MAIN_DEN_V_Start_End_mv_den_sta_shift                         (16)
#define  PPOVERLAY_MAIN_DEN_V_Start_End_mv_den_end_shift                         (0)
#define  PPOVERLAY_MAIN_DEN_V_Start_End_mv_den_sta_mask                          (0x1FFF0000)
#define  PPOVERLAY_MAIN_DEN_V_Start_End_mv_den_end_mask                          (0x00001FFF)
#define  PPOVERLAY_MAIN_DEN_V_Start_End_mv_den_sta(data)                         (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_MAIN_DEN_V_Start_End_mv_den_end(data)                         (0x00001FFF&(data))
#define  PPOVERLAY_MAIN_DEN_V_Start_End_get_mv_den_sta(data)                     ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_MAIN_DEN_V_Start_End_get_mv_den_end(data)                     (0x00001FFF&(data))

#define  PPOVERLAY_MAIN_Background_H_Start_End                                  0x18028548
#define  PPOVERLAY_MAIN_Background_H_Start_End_reg_addr                          "0xB8028548"
#define  PPOVERLAY_MAIN_Background_H_Start_End_reg                               0xB8028548
#define  PPOVERLAY_MAIN_Background_H_Start_End_inst_addr                         "0x008A"
#define  set_PPOVERLAY_MAIN_Background_H_Start_End_reg(data)                     (*((volatile unsigned int*)PPOVERLAY_MAIN_Background_H_Start_End_reg)=data)
#define  get_PPOVERLAY_MAIN_Background_H_Start_End_reg                           (*((volatile unsigned int*)PPOVERLAY_MAIN_Background_H_Start_End_reg))
#define  PPOVERLAY_MAIN_Background_H_Start_End_mh_bg_sta_shift                   (16)
#define  PPOVERLAY_MAIN_Background_H_Start_End_mh_bg_end_shift                   (0)
#define  PPOVERLAY_MAIN_Background_H_Start_End_mh_bg_sta_mask                    (0x1FFF0000)
#define  PPOVERLAY_MAIN_Background_H_Start_End_mh_bg_end_mask                    (0x00001FFF)
#define  PPOVERLAY_MAIN_Background_H_Start_End_mh_bg_sta(data)                   (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_MAIN_Background_H_Start_End_mh_bg_end(data)                   (0x00001FFF&(data))
#define  PPOVERLAY_MAIN_Background_H_Start_End_get_mh_bg_sta(data)               ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_MAIN_Background_H_Start_End_get_mh_bg_end(data)               (0x00001FFF&(data))

#define  PPOVERLAY_MAIN_Background_V_Start_End                                  0x1802854C
#define  PPOVERLAY_MAIN_Background_V_Start_End_reg_addr                          "0xB802854C"
#define  PPOVERLAY_MAIN_Background_V_Start_End_reg                               0xB802854C
#define  PPOVERLAY_MAIN_Background_V_Start_End_inst_addr                         "0x008B"
#define  set_PPOVERLAY_MAIN_Background_V_Start_End_reg(data)                     (*((volatile unsigned int*)PPOVERLAY_MAIN_Background_V_Start_End_reg)=data)
#define  get_PPOVERLAY_MAIN_Background_V_Start_End_reg                           (*((volatile unsigned int*)PPOVERLAY_MAIN_Background_V_Start_End_reg))
#define  PPOVERLAY_MAIN_Background_V_Start_End_mv_bg_sta_shift                   (16)
#define  PPOVERLAY_MAIN_Background_V_Start_End_mv_bg_end_shift                   (0)
#define  PPOVERLAY_MAIN_Background_V_Start_End_mv_bg_sta_mask                    (0x1FFF0000)
#define  PPOVERLAY_MAIN_Background_V_Start_End_mv_bg_end_mask                    (0x00001FFF)
#define  PPOVERLAY_MAIN_Background_V_Start_End_mv_bg_sta(data)                   (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_MAIN_Background_V_Start_End_mv_bg_end(data)                   (0x00001FFF&(data))
#define  PPOVERLAY_MAIN_Background_V_Start_End_get_mv_bg_sta(data)               ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_MAIN_Background_V_Start_End_get_mv_bg_end(data)               (0x00001FFF&(data))

#define  PPOVERLAY_MAIN_Active_H_Start_End                                      0x18028550
#define  PPOVERLAY_MAIN_Active_H_Start_End_reg_addr                              "0xB8028550"
#define  PPOVERLAY_MAIN_Active_H_Start_End_reg                                   0xB8028550
#define  PPOVERLAY_MAIN_Active_H_Start_End_inst_addr                             "0x008C"
#define  set_PPOVERLAY_MAIN_Active_H_Start_End_reg(data)                         (*((volatile unsigned int*)PPOVERLAY_MAIN_Active_H_Start_End_reg)=data)
#define  get_PPOVERLAY_MAIN_Active_H_Start_End_reg                               (*((volatile unsigned int*)PPOVERLAY_MAIN_Active_H_Start_End_reg))
#define  PPOVERLAY_MAIN_Active_H_Start_End_mh_act_sta_shift                      (16)
#define  PPOVERLAY_MAIN_Active_H_Start_End_mh_act_end_shift                      (0)
#define  PPOVERLAY_MAIN_Active_H_Start_End_mh_act_sta_mask                       (0x1FFF0000)
#define  PPOVERLAY_MAIN_Active_H_Start_End_mh_act_end_mask                       (0x00001FFF)
#define  PPOVERLAY_MAIN_Active_H_Start_End_mh_act_sta(data)                      (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_MAIN_Active_H_Start_End_mh_act_end(data)                      (0x00001FFF&(data))
#define  PPOVERLAY_MAIN_Active_H_Start_End_get_mh_act_sta(data)                  ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_MAIN_Active_H_Start_End_get_mh_act_end(data)                  (0x00001FFF&(data))

#define  PPOVERLAY_MAIN_Active_V_Start_End                                      0x18028554
#define  PPOVERLAY_MAIN_Active_V_Start_End_reg_addr                              "0xB8028554"
#define  PPOVERLAY_MAIN_Active_V_Start_End_reg                                   0xB8028554
#define  PPOVERLAY_MAIN_Active_V_Start_End_inst_addr                             "0x008D"
#define  set_PPOVERLAY_MAIN_Active_V_Start_End_reg(data)                         (*((volatile unsigned int*)PPOVERLAY_MAIN_Active_V_Start_End_reg)=data)
#define  get_PPOVERLAY_MAIN_Active_V_Start_End_reg                               (*((volatile unsigned int*)PPOVERLAY_MAIN_Active_V_Start_End_reg))
#define  PPOVERLAY_MAIN_Active_V_Start_End_mv_act_sta_shift                      (16)
#define  PPOVERLAY_MAIN_Active_V_Start_End_mv_act_end_shift                      (0)
#define  PPOVERLAY_MAIN_Active_V_Start_End_mv_act_sta_mask                       (0x1FFF0000)
#define  PPOVERLAY_MAIN_Active_V_Start_End_mv_act_end_mask                       (0x00001FFF)
#define  PPOVERLAY_MAIN_Active_V_Start_End_mv_act_sta(data)                      (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_MAIN_Active_V_Start_End_mv_act_end(data)                      (0x00001FFF&(data))
#define  PPOVERLAY_MAIN_Active_V_Start_End_get_mv_act_sta(data)                  ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_MAIN_Active_V_Start_End_get_mv_act_end(data)                  (0x00001FFF&(data))

#define  PPOVERLAY_SUB_DEN_H_Start_Width                                        0x18028580
#define  PPOVERLAY_SUB_DEN_H_Start_Width_reg_addr                                "0xB8028580"
#define  PPOVERLAY_SUB_DEN_H_Start_Width_reg                                     0xB8028580
#define  PPOVERLAY_SUB_DEN_H_Start_Width_inst_addr                               "0x008E"
#define  set_PPOVERLAY_SUB_DEN_H_Start_Width_reg(data)                           (*((volatile unsigned int*)PPOVERLAY_SUB_DEN_H_Start_Width_reg)=data)
#define  get_PPOVERLAY_SUB_DEN_H_Start_Width_reg                                 (*((volatile unsigned int*)PPOVERLAY_SUB_DEN_H_Start_Width_reg))
#define  PPOVERLAY_SUB_DEN_H_Start_Width_sh_den_sta_shift                        (16)
#define  PPOVERLAY_SUB_DEN_H_Start_Width_sh_den_width_shift                      (0)
#define  PPOVERLAY_SUB_DEN_H_Start_Width_sh_den_sta_mask                         (0x1FFF0000)
#define  PPOVERLAY_SUB_DEN_H_Start_Width_sh_den_width_mask                       (0x00001FFF)
#define  PPOVERLAY_SUB_DEN_H_Start_Width_sh_den_sta(data)                        (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_SUB_DEN_H_Start_Width_sh_den_width(data)                      (0x00001FFF&(data))
#define  PPOVERLAY_SUB_DEN_H_Start_Width_get_sh_den_sta(data)                    ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_SUB_DEN_H_Start_Width_get_sh_den_width(data)                  (0x00001FFF&(data))

#define  PPOVERLAY_SUB_DEN_V_Start_Length                                       0x18028584
#define  PPOVERLAY_SUB_DEN_V_Start_Length_reg_addr                               "0xB8028584"
#define  PPOVERLAY_SUB_DEN_V_Start_Length_reg                                    0xB8028584
#define  PPOVERLAY_SUB_DEN_V_Start_Length_inst_addr                              "0x008F"
#define  set_PPOVERLAY_SUB_DEN_V_Start_Length_reg(data)                          (*((volatile unsigned int*)PPOVERLAY_SUB_DEN_V_Start_Length_reg)=data)
#define  get_PPOVERLAY_SUB_DEN_V_Start_Length_reg                                (*((volatile unsigned int*)PPOVERLAY_SUB_DEN_V_Start_Length_reg))
#define  PPOVERLAY_SUB_DEN_V_Start_Length_sv_den_sta_shift                       (16)
#define  PPOVERLAY_SUB_DEN_V_Start_Length_sv_den_length_shift                    (0)
#define  PPOVERLAY_SUB_DEN_V_Start_Length_sv_den_sta_mask                        (0x1FFF0000)
#define  PPOVERLAY_SUB_DEN_V_Start_Length_sv_den_length_mask                     (0x00001FFF)
#define  PPOVERLAY_SUB_DEN_V_Start_Length_sv_den_sta(data)                       (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_SUB_DEN_V_Start_Length_sv_den_length(data)                    (0x00001FFF&(data))
#define  PPOVERLAY_SUB_DEN_V_Start_Length_get_sv_den_sta(data)                   ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_SUB_DEN_V_Start_Length_get_sv_den_length(data)                (0x00001FFF&(data))

#define  PPOVERLAY_SUB_Background_H_Start_End                                   0x18028588
#define  PPOVERLAY_SUB_Background_H_Start_End_reg_addr                           "0xB8028588"
#define  PPOVERLAY_SUB_Background_H_Start_End_reg                                0xB8028588
#define  PPOVERLAY_SUB_Background_H_Start_End_inst_addr                          "0x0090"
#define  set_PPOVERLAY_SUB_Background_H_Start_End_reg(data)                      (*((volatile unsigned int*)PPOVERLAY_SUB_Background_H_Start_End_reg)=data)
#define  get_PPOVERLAY_SUB_Background_H_Start_End_reg                            (*((volatile unsigned int*)PPOVERLAY_SUB_Background_H_Start_End_reg))
#define  PPOVERLAY_SUB_Background_H_Start_End_sh_bg_sta_shift                    (16)
#define  PPOVERLAY_SUB_Background_H_Start_End_sh_bg_end_shift                    (0)
#define  PPOVERLAY_SUB_Background_H_Start_End_sh_bg_sta_mask                     (0x1FFF0000)
#define  PPOVERLAY_SUB_Background_H_Start_End_sh_bg_end_mask                     (0x00001FFF)
#define  PPOVERLAY_SUB_Background_H_Start_End_sh_bg_sta(data)                    (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_SUB_Background_H_Start_End_sh_bg_end(data)                    (0x00001FFF&(data))
#define  PPOVERLAY_SUB_Background_H_Start_End_get_sh_bg_sta(data)                ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_SUB_Background_H_Start_End_get_sh_bg_end(data)                (0x00001FFF&(data))

#define  PPOVERLAY_SUB_Background_V_Start_End                                   0x1802858C
#define  PPOVERLAY_SUB_Background_V_Start_End_reg_addr                           "0xB802858C"
#define  PPOVERLAY_SUB_Background_V_Start_End_reg                                0xB802858C
#define  PPOVERLAY_SUB_Background_V_Start_End_inst_addr                          "0x0091"
#define  set_PPOVERLAY_SUB_Background_V_Start_End_reg(data)                      (*((volatile unsigned int*)PPOVERLAY_SUB_Background_V_Start_End_reg)=data)
#define  get_PPOVERLAY_SUB_Background_V_Start_End_reg                            (*((volatile unsigned int*)PPOVERLAY_SUB_Background_V_Start_End_reg))
#define  PPOVERLAY_SUB_Background_V_Start_End_sv_bg_sta_shift                    (16)
#define  PPOVERLAY_SUB_Background_V_Start_End_sv_bg_end_shift                    (0)
#define  PPOVERLAY_SUB_Background_V_Start_End_sv_bg_sta_mask                     (0x1FFF0000)
#define  PPOVERLAY_SUB_Background_V_Start_End_sv_bg_end_mask                     (0x00001FFF)
#define  PPOVERLAY_SUB_Background_V_Start_End_sv_bg_sta(data)                    (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_SUB_Background_V_Start_End_sv_bg_end(data)                    (0x00001FFF&(data))
#define  PPOVERLAY_SUB_Background_V_Start_End_get_sv_bg_sta(data)                ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_SUB_Background_V_Start_End_get_sv_bg_end(data)                (0x00001FFF&(data))

#define  PPOVERLAY_SUB_Active_H_Start_End                                       0x18028590
#define  PPOVERLAY_SUB_Active_H_Start_End_reg_addr                               "0xB8028590"
#define  PPOVERLAY_SUB_Active_H_Start_End_reg                                    0xB8028590
#define  PPOVERLAY_SUB_Active_H_Start_End_inst_addr                              "0x0092"
#define  set_PPOVERLAY_SUB_Active_H_Start_End_reg(data)                          (*((volatile unsigned int*)PPOVERLAY_SUB_Active_H_Start_End_reg)=data)
#define  get_PPOVERLAY_SUB_Active_H_Start_End_reg                                (*((volatile unsigned int*)PPOVERLAY_SUB_Active_H_Start_End_reg))
#define  PPOVERLAY_SUB_Active_H_Start_End_sh_act_sta_shift                       (16)
#define  PPOVERLAY_SUB_Active_H_Start_End_sh_act_end_shift                       (0)
#define  PPOVERLAY_SUB_Active_H_Start_End_sh_act_sta_mask                        (0x1FFF0000)
#define  PPOVERLAY_SUB_Active_H_Start_End_sh_act_end_mask                        (0x00001FFF)
#define  PPOVERLAY_SUB_Active_H_Start_End_sh_act_sta(data)                       (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_SUB_Active_H_Start_End_sh_act_end(data)                       (0x00001FFF&(data))
#define  PPOVERLAY_SUB_Active_H_Start_End_get_sh_act_sta(data)                   ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_SUB_Active_H_Start_End_get_sh_act_end(data)                   (0x00001FFF&(data))

#define  PPOVERLAY_SUB_Active_V_Start_End                                       0x18028594
#define  PPOVERLAY_SUB_Active_V_Start_End_reg_addr                               "0xB8028594"
#define  PPOVERLAY_SUB_Active_V_Start_End_reg                                    0xB8028594
#define  PPOVERLAY_SUB_Active_V_Start_End_inst_addr                              "0x0093"
#define  set_PPOVERLAY_SUB_Active_V_Start_End_reg(data)                          (*((volatile unsigned int*)PPOVERLAY_SUB_Active_V_Start_End_reg)=data)
#define  get_PPOVERLAY_SUB_Active_V_Start_End_reg                                (*((volatile unsigned int*)PPOVERLAY_SUB_Active_V_Start_End_reg))
#define  PPOVERLAY_SUB_Active_V_Start_End_sv_act_sta_shift                       (16)
#define  PPOVERLAY_SUB_Active_V_Start_End_sv_act_end_shift                       (0)
#define  PPOVERLAY_SUB_Active_V_Start_End_sv_act_sta_mask                        (0x1FFF0000)
#define  PPOVERLAY_SUB_Active_V_Start_End_sv_act_end_mask                        (0x00001FFF)
#define  PPOVERLAY_SUB_Active_V_Start_End_sv_act_sta(data)                       (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_SUB_Active_V_Start_End_sv_act_end(data)                       (0x00001FFF&(data))
#define  PPOVERLAY_SUB_Active_V_Start_End_get_sv_act_sta(data)                   ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_SUB_Active_V_Start_End_get_sv_act_end(data)                   (0x00001FFF&(data))

#define  PPOVERLAY_SUB_Active_Rad_A                                             0x18028598
#define  PPOVERLAY_SUB_Active_Rad_A_reg_addr                                     "0xB8028598"
#define  PPOVERLAY_SUB_Active_Rad_A_reg                                          0xB8028598
#define  PPOVERLAY_SUB_Active_Rad_A_inst_addr                                    "0x0094"
#define  set_PPOVERLAY_SUB_Active_Rad_A_reg(data)                                (*((volatile unsigned int*)PPOVERLAY_SUB_Active_Rad_A_reg)=data)
#define  get_PPOVERLAY_SUB_Active_Rad_A_reg                                      (*((volatile unsigned int*)PPOVERLAY_SUB_Active_Rad_A_reg))
#define  PPOVERLAY_SUB_Active_Rad_A_sub_act_rad_a_shift                          (0)
#define  PPOVERLAY_SUB_Active_Rad_A_sub_act_rad_a_mask                           (0x003FFFFF)
#define  PPOVERLAY_SUB_Active_Rad_A_sub_act_rad_a(data)                          (0x003FFFFF&(data))
#define  PPOVERLAY_SUB_Active_Rad_A_get_sub_act_rad_a(data)                      (0x003FFFFF&(data))

#define  PPOVERLAY_SUB_Background_Rad_A                                         0x180285A0
#define  PPOVERLAY_SUB_Background_Rad_A_reg_addr                                 "0xB80285A0"
#define  PPOVERLAY_SUB_Background_Rad_A_reg                                      0xB80285A0
#define  PPOVERLAY_SUB_Background_Rad_A_inst_addr                                "0x0095"
#define  set_PPOVERLAY_SUB_Background_Rad_A_reg(data)                            (*((volatile unsigned int*)PPOVERLAY_SUB_Background_Rad_A_reg)=data)
#define  get_PPOVERLAY_SUB_Background_Rad_A_reg                                  (*((volatile unsigned int*)PPOVERLAY_SUB_Background_Rad_A_reg))
#define  PPOVERLAY_SUB_Background_Rad_A_sub_bg_rad_a_shift                       (0)
#define  PPOVERLAY_SUB_Background_Rad_A_sub_bg_rad_a_mask                        (0x003FFFFF)
#define  PPOVERLAY_SUB_Background_Rad_A_sub_bg_rad_a(data)                       (0x003FFFFF&(data))
#define  PPOVERLAY_SUB_Background_Rad_A_get_sub_bg_rad_a(data)                   (0x003FFFFF&(data))

#define  PPOVERLAY_SUB_Den_Rad_A                                                0x180285A8
#define  PPOVERLAY_SUB_Den_Rad_A_reg_addr                                        "0xB80285A8"
#define  PPOVERLAY_SUB_Den_Rad_A_reg                                             0xB80285A8
#define  PPOVERLAY_SUB_Den_Rad_A_inst_addr                                       "0x0096"
#define  set_PPOVERLAY_SUB_Den_Rad_A_reg(data)                                   (*((volatile unsigned int*)PPOVERLAY_SUB_Den_Rad_A_reg)=data)
#define  get_PPOVERLAY_SUB_Den_Rad_A_reg                                         (*((volatile unsigned int*)PPOVERLAY_SUB_Den_Rad_A_reg))
#define  PPOVERLAY_SUB_Den_Rad_A_sub_den_rad_a_shift                             (0)
#define  PPOVERLAY_SUB_Den_Rad_A_sub_den_rad_a_mask                              (0x003FFFFF)
#define  PPOVERLAY_SUB_Den_Rad_A_sub_den_rad_a(data)                             (0x003FFFFF&(data))
#define  PPOVERLAY_SUB_Den_Rad_A_get_sub_den_rad_a(data)                         (0x003FFFFF&(data))

#define  PPOVERLAY_SUB_circle_center                                            0x180285B0
#define  PPOVERLAY_SUB_circle_center_reg_addr                                    "0xB80285B0"
#define  PPOVERLAY_SUB_circle_center_reg                                         0xB80285B0
#define  PPOVERLAY_SUB_circle_center_inst_addr                                   "0x0097"
#define  set_PPOVERLAY_SUB_circle_center_reg(data)                               (*((volatile unsigned int*)PPOVERLAY_SUB_circle_center_reg)=data)
#define  get_PPOVERLAY_SUB_circle_center_reg                                     (*((volatile unsigned int*)PPOVERLAY_SUB_circle_center_reg))
#define  PPOVERLAY_SUB_circle_center_sub_window_form_sel_shift                   (30)
#define  PPOVERLAY_SUB_circle_center_sub_circle_center_v_shift                   (16)
#define  PPOVERLAY_SUB_circle_center_sub_circle_center_h_shift                   (0)
#define  PPOVERLAY_SUB_circle_center_sub_window_form_sel_mask                    (0x40000000)
#define  PPOVERLAY_SUB_circle_center_sub_circle_center_v_mask                    (0x3FFF0000)
#define  PPOVERLAY_SUB_circle_center_sub_circle_center_h_mask                    (0x00003FFF)
#define  PPOVERLAY_SUB_circle_center_sub_window_form_sel(data)                   (0x40000000&((data)<<30))
#define  PPOVERLAY_SUB_circle_center_sub_circle_center_v(data)                   (0x3FFF0000&((data)<<16))
#define  PPOVERLAY_SUB_circle_center_sub_circle_center_h(data)                   (0x00003FFF&(data))
#define  PPOVERLAY_SUB_circle_center_get_sub_window_form_sel(data)               ((0x40000000&(data))>>30)
#define  PPOVERLAY_SUB_circle_center_get_sub_circle_center_v(data)               ((0x3FFF0000&(data))>>16)
#define  PPOVERLAY_SUB_circle_center_get_sub_circle_center_h(data)               (0x00003FFF&(data))

#define  PPOVERLAY_MEMCDTG_CONTROL                                              0x18028600
#define  PPOVERLAY_MEMCDTG_CONTROL_reg_addr                                      "0xB8028600"
#define  PPOVERLAY_MEMCDTG_CONTROL_reg                                           0xB8028600
#define  PPOVERLAY_MEMCDTG_CONTROL_inst_addr                                     "0x0098"
#define  set_PPOVERLAY_MEMCDTG_CONTROL_reg(data)                                 (*((volatile unsigned int*)PPOVERLAY_MEMCDTG_CONTROL_reg)=data)
#define  get_PPOVERLAY_MEMCDTG_CONTROL_reg                                       (*((volatile unsigned int*)PPOVERLAY_MEMCDTG_CONTROL_reg))
#define  PPOVERLAY_MEMCDTG_CONTROL_memcdtg_mode_revised_shift                    (31)
#define  PPOVERLAY_MEMCDTG_CONTROL_memcdtg_frc_fsync_status_shift                (6)
#define  PPOVERLAY_MEMCDTG_CONTROL_memcdtg_frc2fsync_by_hw_shift                 (5)
#define  PPOVERLAY_MEMCDTG_CONTROL_memcdtg_fsync_en_shift                        (4)
#define  PPOVERLAY_MEMCDTG_CONTROL_memcdtg_en_shift                              (0)
#define  PPOVERLAY_MEMCDTG_CONTROL_memcdtg_mode_revised_mask                     (0x80000000)
#define  PPOVERLAY_MEMCDTG_CONTROL_memcdtg_frc_fsync_status_mask                 (0x00000040)
#define  PPOVERLAY_MEMCDTG_CONTROL_memcdtg_frc2fsync_by_hw_mask                  (0x00000020)
#define  PPOVERLAY_MEMCDTG_CONTROL_memcdtg_fsync_en_mask                         (0x00000010)
#define  PPOVERLAY_MEMCDTG_CONTROL_memcdtg_en_mask                               (0x00000001)
#define  PPOVERLAY_MEMCDTG_CONTROL_memcdtg_mode_revised(data)                    (0x80000000&((data)<<31))
#define  PPOVERLAY_MEMCDTG_CONTROL_memcdtg_frc_fsync_status(data)                (0x00000040&((data)<<6))
#define  PPOVERLAY_MEMCDTG_CONTROL_memcdtg_frc2fsync_by_hw(data)                 (0x00000020&((data)<<5))
#define  PPOVERLAY_MEMCDTG_CONTROL_memcdtg_fsync_en(data)                        (0x00000010&((data)<<4))
#define  PPOVERLAY_MEMCDTG_CONTROL_memcdtg_en(data)                              (0x00000001&(data))
#define  PPOVERLAY_MEMCDTG_CONTROL_get_memcdtg_mode_revised(data)                ((0x80000000&(data))>>31)
#define  PPOVERLAY_MEMCDTG_CONTROL_get_memcdtg_frc_fsync_status(data)            ((0x00000040&(data))>>6)
#define  PPOVERLAY_MEMCDTG_CONTROL_get_memcdtg_frc2fsync_by_hw(data)             ((0x00000020&(data))>>5)
#define  PPOVERLAY_MEMCDTG_CONTROL_get_memcdtg_fsync_en(data)                    ((0x00000010&(data))>>4)
#define  PPOVERLAY_MEMCDTG_CONTROL_get_memcdtg_en(data)                          (0x00000001&(data))

#define  PPOVERLAY_memcdtg_DV_TOTAL                                             0x18028604
#define  PPOVERLAY_memcdtg_DV_TOTAL_reg_addr                                     "0xB8028604"
#define  PPOVERLAY_memcdtg_DV_TOTAL_reg                                          0xB8028604
#define  PPOVERLAY_memcdtg_DV_TOTAL_inst_addr                                    "0x0099"
#define  set_PPOVERLAY_memcdtg_DV_TOTAL_reg(data)                                (*((volatile unsigned int*)PPOVERLAY_memcdtg_DV_TOTAL_reg)=data)
#define  get_PPOVERLAY_memcdtg_DV_TOTAL_reg                                      (*((volatile unsigned int*)PPOVERLAY_memcdtg_DV_TOTAL_reg))
#define  PPOVERLAY_memcdtg_DV_TOTAL_memcdtg_dv_total_shift                       (0)
#define  PPOVERLAY_memcdtg_DV_TOTAL_memcdtg_dv_total_mask                        (0x00001FFF)
#define  PPOVERLAY_memcdtg_DV_TOTAL_memcdtg_dv_total(data)                       (0x00001FFF&(data))
#define  PPOVERLAY_memcdtg_DV_TOTAL_get_memcdtg_dv_total(data)                   (0x00001FFF&(data))

#define  PPOVERLAY_memcdtg_DH_TOTAL                                             0x18028608
#define  PPOVERLAY_memcdtg_DH_TOTAL_reg_addr                                     "0xB8028608"
#define  PPOVERLAY_memcdtg_DH_TOTAL_reg                                          0xB8028608
#define  PPOVERLAY_memcdtg_DH_TOTAL_inst_addr                                    "0x009A"
#define  set_PPOVERLAY_memcdtg_DH_TOTAL_reg(data)                                (*((volatile unsigned int*)PPOVERLAY_memcdtg_DH_TOTAL_reg)=data)
#define  get_PPOVERLAY_memcdtg_DH_TOTAL_reg                                      (*((volatile unsigned int*)PPOVERLAY_memcdtg_DH_TOTAL_reg))
#define  PPOVERLAY_memcdtg_DH_TOTAL_memcdtg_dh_total_last_line_shift             (16)
#define  PPOVERLAY_memcdtg_DH_TOTAL_memcdtg_dh_total_shift                       (0)
#define  PPOVERLAY_memcdtg_DH_TOTAL_memcdtg_dh_total_last_line_mask              (0x1FFF0000)
#define  PPOVERLAY_memcdtg_DH_TOTAL_memcdtg_dh_total_mask                        (0x00001FFF)
#define  PPOVERLAY_memcdtg_DH_TOTAL_memcdtg_dh_total_last_line(data)             (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_memcdtg_DH_TOTAL_memcdtg_dh_total(data)                       (0x00001FFF&(data))
#define  PPOVERLAY_memcdtg_DH_TOTAL_get_memcdtg_dh_total_last_line(data)         ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_memcdtg_DH_TOTAL_get_memcdtg_dh_total(data)                   (0x00001FFF&(data))

#define  PPOVERLAY_memcdtg_DV_DEN_Start_End                                     0x18028618
#define  PPOVERLAY_memcdtg_DV_DEN_Start_End_reg_addr                             "0xB8028618"
#define  PPOVERLAY_memcdtg_DV_DEN_Start_End_reg                                  0xB8028618
#define  PPOVERLAY_memcdtg_DV_DEN_Start_End_inst_addr                            "0x009B"
#define  set_PPOVERLAY_memcdtg_DV_DEN_Start_End_reg(data)                        (*((volatile unsigned int*)PPOVERLAY_memcdtg_DV_DEN_Start_End_reg)=data)
#define  get_PPOVERLAY_memcdtg_DV_DEN_Start_End_reg                              (*((volatile unsigned int*)PPOVERLAY_memcdtg_DV_DEN_Start_End_reg))
#define  PPOVERLAY_memcdtg_DV_DEN_Start_End_memcdtg_dv_den_sta_shift             (16)
#define  PPOVERLAY_memcdtg_DV_DEN_Start_End_memcdtg_dv_den_end_shift             (0)
#define  PPOVERLAY_memcdtg_DV_DEN_Start_End_memcdtg_dv_den_sta_mask              (0x1FFF0000)
#define  PPOVERLAY_memcdtg_DV_DEN_Start_End_memcdtg_dv_den_end_mask              (0x00001FFF)
#define  PPOVERLAY_memcdtg_DV_DEN_Start_End_memcdtg_dv_den_sta(data)             (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_memcdtg_DV_DEN_Start_End_memcdtg_dv_den_end(data)             (0x00001FFF&(data))
#define  PPOVERLAY_memcdtg_DV_DEN_Start_End_get_memcdtg_dv_den_sta(data)         ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_memcdtg_DV_DEN_Start_End_get_memcdtg_dv_den_end(data)         (0x00001FFF&(data))

#define  PPOVERLAY_memcdtg_DH_DEN_Start_End                                     0x1802861C
#define  PPOVERLAY_memcdtg_DH_DEN_Start_End_reg_addr                             "0xB802861C"
#define  PPOVERLAY_memcdtg_DH_DEN_Start_End_reg                                  0xB802861C
#define  PPOVERLAY_memcdtg_DH_DEN_Start_End_inst_addr                            "0x009C"
#define  set_PPOVERLAY_memcdtg_DH_DEN_Start_End_reg(data)                        (*((volatile unsigned int*)PPOVERLAY_memcdtg_DH_DEN_Start_End_reg)=data)
#define  get_PPOVERLAY_memcdtg_DH_DEN_Start_End_reg                              (*((volatile unsigned int*)PPOVERLAY_memcdtg_DH_DEN_Start_End_reg))
#define  PPOVERLAY_memcdtg_DH_DEN_Start_End_memcdtg_dh_den_sta_shift             (16)
#define  PPOVERLAY_memcdtg_DH_DEN_Start_End_memcdtg_dh_den_end_shift             (0)
#define  PPOVERLAY_memcdtg_DH_DEN_Start_End_memcdtg_dh_den_sta_mask              (0x1FFF0000)
#define  PPOVERLAY_memcdtg_DH_DEN_Start_End_memcdtg_dh_den_end_mask              (0x00001FFF)
#define  PPOVERLAY_memcdtg_DH_DEN_Start_End_memcdtg_dh_den_sta(data)             (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_memcdtg_DH_DEN_Start_End_memcdtg_dh_den_end(data)             (0x00001FFF&(data))
#define  PPOVERLAY_memcdtg_DH_DEN_Start_End_get_memcdtg_dh_den_sta(data)         ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_memcdtg_DH_DEN_Start_End_get_memcdtg_dh_den_end(data)         (0x00001FFF&(data))

#define  PPOVERLAY_memcdtg_DV_video_blending_region                             0x18028620
#define  PPOVERLAY_memcdtg_DV_video_blending_region_reg_addr                     "0xB8028620"
#define  PPOVERLAY_memcdtg_DV_video_blending_region_reg                          0xB8028620
#define  PPOVERLAY_memcdtg_DV_video_blending_region_inst_addr                    "0x009D"
#define  set_PPOVERLAY_memcdtg_DV_video_blending_region_reg(data)                (*((volatile unsigned int*)PPOVERLAY_memcdtg_DV_video_blending_region_reg)=data)
#define  get_PPOVERLAY_memcdtg_DV_video_blending_region_reg                      (*((volatile unsigned int*)PPOVERLAY_memcdtg_DV_video_blending_region_reg))
#define  PPOVERLAY_memcdtg_DV_video_blending_region_memcdtg_dv_video_blend_region_sta_shift (16)
#define  PPOVERLAY_memcdtg_DV_video_blending_region_memcdtg_dv_video_blend_region_end_shift (0)
#define  PPOVERLAY_memcdtg_DV_video_blending_region_memcdtg_dv_video_blend_region_sta_mask (0x1FFF0000)
#define  PPOVERLAY_memcdtg_DV_video_blending_region_memcdtg_dv_video_blend_region_end_mask (0x00001FFF)
#define  PPOVERLAY_memcdtg_DV_video_blending_region_memcdtg_dv_video_blend_region_sta(data) (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_memcdtg_DV_video_blending_region_memcdtg_dv_video_blend_region_end(data) (0x00001FFF&(data))
#define  PPOVERLAY_memcdtg_DV_video_blending_region_get_memcdtg_dv_video_blend_region_sta(data) ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_memcdtg_DV_video_blending_region_get_memcdtg_dv_video_blend_region_end(data) (0x00001FFF&(data))

#define  PPOVERLAY_memcdtg_dh_video_blending_region                             0x18028624
#define  PPOVERLAY_memcdtg_dh_video_blending_region_reg_addr                     "0xB8028624"
#define  PPOVERLAY_memcdtg_dh_video_blending_region_reg                          0xB8028624
#define  PPOVERLAY_memcdtg_dh_video_blending_region_inst_addr                    "0x009E"
#define  set_PPOVERLAY_memcdtg_dh_video_blending_region_reg(data)                (*((volatile unsigned int*)PPOVERLAY_memcdtg_dh_video_blending_region_reg)=data)
#define  get_PPOVERLAY_memcdtg_dh_video_blending_region_reg                      (*((volatile unsigned int*)PPOVERLAY_memcdtg_dh_video_blending_region_reg))
#define  PPOVERLAY_memcdtg_dh_video_blending_region_memcdtg_dh_video_blend_region_sta_shift (16)
#define  PPOVERLAY_memcdtg_dh_video_blending_region_memcdtg_dh_video_blend_region_end_shift (0)
#define  PPOVERLAY_memcdtg_dh_video_blending_region_memcdtg_dh_video_blend_region_sta_mask (0x1FFF0000)
#define  PPOVERLAY_memcdtg_dh_video_blending_region_memcdtg_dh_video_blend_region_end_mask (0x00001FFF)
#define  PPOVERLAY_memcdtg_dh_video_blending_region_memcdtg_dh_video_blend_region_sta(data) (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_memcdtg_dh_video_blending_region_memcdtg_dh_video_blend_region_end(data) (0x00001FFF&(data))
#define  PPOVERLAY_memcdtg_dh_video_blending_region_get_memcdtg_dh_video_blend_region_sta(data) ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_memcdtg_dh_video_blending_region_get_memcdtg_dh_video_blend_region_end(data) (0x00001FFF&(data))

#define  PPOVERLAY_MEMCDTG_CONTROL_4                                            0x1802863C
#define  PPOVERLAY_MEMCDTG_CONTROL_4_reg_addr                                    "0xB802863C"
#define  PPOVERLAY_MEMCDTG_CONTROL_4_reg                                         0xB802863C
#define  PPOVERLAY_MEMCDTG_CONTROL_4_inst_addr                                   "0x009F"
#define  set_PPOVERLAY_MEMCDTG_CONTROL_4_reg(data)                               (*((volatile unsigned int*)PPOVERLAY_MEMCDTG_CONTROL_4_reg)=data)
#define  get_PPOVERLAY_MEMCDTG_CONTROL_4_reg                                     (*((volatile unsigned int*)PPOVERLAY_MEMCDTG_CONTROL_4_reg))
#define  PPOVERLAY_MEMCDTG_CONTROL_4_dtgm2orbitvs_line_sft_shift                 (16)
#define  PPOVERLAY_MEMCDTG_CONTROL_4_dtgm2orbitvs_pixel_sft_shift                (0)
#define  PPOVERLAY_MEMCDTG_CONTROL_4_dtgm2orbitvs_line_sft_mask                  (0x1FFF0000)
#define  PPOVERLAY_MEMCDTG_CONTROL_4_dtgm2orbitvs_pixel_sft_mask                 (0x00001FFF)
#define  PPOVERLAY_MEMCDTG_CONTROL_4_dtgm2orbitvs_line_sft(data)                 (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_MEMCDTG_CONTROL_4_dtgm2orbitvs_pixel_sft(data)                (0x00001FFF&(data))
#define  PPOVERLAY_MEMCDTG_CONTROL_4_get_dtgm2orbitvs_line_sft(data)             ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_MEMCDTG_CONTROL_4_get_dtgm2orbitvs_pixel_sft(data)            (0x00001FFF&(data))

#define  PPOVERLAY_MEMCDTG_CONTROL2                                             0x18028640
#define  PPOVERLAY_MEMCDTG_CONTROL2_reg_addr                                     "0xB8028640"
#define  PPOVERLAY_MEMCDTG_CONTROL2_reg                                          0xB8028640
#define  PPOVERLAY_MEMCDTG_CONTROL2_inst_addr                                    "0x00A0"
#define  set_PPOVERLAY_MEMCDTG_CONTROL2_reg(data)                                (*((volatile unsigned int*)PPOVERLAY_MEMCDTG_CONTROL2_reg)=data)
#define  get_PPOVERLAY_MEMCDTG_CONTROL2_reg                                      (*((volatile unsigned int*)PPOVERLAY_MEMCDTG_CONTROL2_reg))
#define  PPOVERLAY_MEMCDTG_CONTROL2_dtgm2kiwiprevs_line_shift                    (16)
#define  PPOVERLAY_MEMCDTG_CONTROL2_dtgm2kiwiprevs_pixel_shift                   (0)
#define  PPOVERLAY_MEMCDTG_CONTROL2_dtgm2kiwiprevs_line_mask                     (0x1FFF0000)
#define  PPOVERLAY_MEMCDTG_CONTROL2_dtgm2kiwiprevs_pixel_mask                    (0x00001FFF)
#define  PPOVERLAY_MEMCDTG_CONTROL2_dtgm2kiwiprevs_line(data)                    (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_MEMCDTG_CONTROL2_dtgm2kiwiprevs_pixel(data)                   (0x00001FFF&(data))
#define  PPOVERLAY_MEMCDTG_CONTROL2_get_dtgm2kiwiprevs_line(data)                ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_MEMCDTG_CONTROL2_get_dtgm2kiwiprevs_pixel(data)               (0x00001FFF&(data))

#define  PPOVERLAY_MEMCDTG_CONTROL3                                             0x18028644
#define  PPOVERLAY_MEMCDTG_CONTROL3_reg_addr                                     "0xB8028644"
#define  PPOVERLAY_MEMCDTG_CONTROL3_reg                                          0xB8028644
#define  PPOVERLAY_MEMCDTG_CONTROL3_inst_addr                                    "0x00A1"
#define  set_PPOVERLAY_MEMCDTG_CONTROL3_reg(data)                                (*((volatile unsigned int*)PPOVERLAY_MEMCDTG_CONTROL3_reg)=data)
#define  get_PPOVERLAY_MEMCDTG_CONTROL3_reg                                      (*((volatile unsigned int*)PPOVERLAY_MEMCDTG_CONTROL3_reg))
#define  PPOVERLAY_MEMCDTG_CONTROL3_dtgm2goldenpostvs_line_shift                 (16)
#define  PPOVERLAY_MEMCDTG_CONTROL3_dtgm2goldenpostvs_pixel_shift                (0)
#define  PPOVERLAY_MEMCDTG_CONTROL3_dtgm2goldenpostvs_line_mask                  (0x1FFF0000)
#define  PPOVERLAY_MEMCDTG_CONTROL3_dtgm2goldenpostvs_pixel_mask                 (0x00001FFF)
#define  PPOVERLAY_MEMCDTG_CONTROL3_dtgm2goldenpostvs_line(data)                 (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_MEMCDTG_CONTROL3_dtgm2goldenpostvs_pixel(data)                (0x00001FFF&(data))
#define  PPOVERLAY_MEMCDTG_CONTROL3_get_dtgm2goldenpostvs_line(data)             ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_MEMCDTG_CONTROL3_get_dtgm2goldenpostvs_pixel(data)            (0x00001FFF&(data))

#define  PPOVERLAY_Measure_kiwi_dvs_phase_error_Result                          0x18028648
#define  PPOVERLAY_Measure_kiwi_dvs_phase_error_Result_reg_addr                  "0xB8028648"
#define  PPOVERLAY_Measure_kiwi_dvs_phase_error_Result_reg                       0xB8028648
#define  PPOVERLAY_Measure_kiwi_dvs_phase_error_Result_inst_addr                 "0x00A2"
#define  set_PPOVERLAY_Measure_kiwi_dvs_phase_error_Result_reg(data)             (*((volatile unsigned int*)PPOVERLAY_Measure_kiwi_dvs_phase_error_Result_reg)=data)
#define  get_PPOVERLAY_Measure_kiwi_dvs_phase_error_Result_reg                   (*((volatile unsigned int*)PPOVERLAY_Measure_kiwi_dvs_phase_error_Result_reg))
#define  PPOVERLAY_Measure_kiwi_dvs_phase_error_Result_kiwi_dvs_phase_error_cntr_shift (24)
#define  PPOVERLAY_Measure_kiwi_dvs_phase_error_Result_kiwi_dvs_phase_error_flag_shift (23)
#define  PPOVERLAY_Measure_kiwi_dvs_phase_error_Result_kiwi_dvs_phase_error_po_shift (22)
#define  PPOVERLAY_Measure_kiwi_dvs_phase_error_Result_kiwi_dvs_phase_error_shift (0)
#define  PPOVERLAY_Measure_kiwi_dvs_phase_error_Result_kiwi_dvs_phase_error_cntr_mask (0x01000000)
#define  PPOVERLAY_Measure_kiwi_dvs_phase_error_Result_kiwi_dvs_phase_error_flag_mask (0x00800000)
#define  PPOVERLAY_Measure_kiwi_dvs_phase_error_Result_kiwi_dvs_phase_error_po_mask (0x00400000)
#define  PPOVERLAY_Measure_kiwi_dvs_phase_error_Result_kiwi_dvs_phase_error_mask (0x003FFFFF)
#define  PPOVERLAY_Measure_kiwi_dvs_phase_error_Result_kiwi_dvs_phase_error_cntr(data) (0x01000000&((data)<<24))
#define  PPOVERLAY_Measure_kiwi_dvs_phase_error_Result_kiwi_dvs_phase_error_flag(data) (0x00800000&((data)<<23))
#define  PPOVERLAY_Measure_kiwi_dvs_phase_error_Result_kiwi_dvs_phase_error_po(data) (0x00400000&((data)<<22))
#define  PPOVERLAY_Measure_kiwi_dvs_phase_error_Result_kiwi_dvs_phase_error(data) (0x003FFFFF&(data))
#define  PPOVERLAY_Measure_kiwi_dvs_phase_error_Result_get_kiwi_dvs_phase_error_cntr(data) ((0x01000000&(data))>>24)
#define  PPOVERLAY_Measure_kiwi_dvs_phase_error_Result_get_kiwi_dvs_phase_error_flag(data) ((0x00800000&(data))>>23)
#define  PPOVERLAY_Measure_kiwi_dvs_phase_error_Result_get_kiwi_dvs_phase_error_po(data) ((0x00400000&(data))>>22)
#define  PPOVERLAY_Measure_kiwi_dvs_phase_error_Result_get_kiwi_dvs_phase_error(data) (0x003FFFFF&(data))

#define  PPOVERLAY_Measure_kiwi_den_phase_error_Result                          0x1802864C
#define  PPOVERLAY_Measure_kiwi_den_phase_error_Result_reg_addr                  "0xB802864C"
#define  PPOVERLAY_Measure_kiwi_den_phase_error_Result_reg                       0xB802864C
#define  PPOVERLAY_Measure_kiwi_den_phase_error_Result_inst_addr                 "0x00A3"
#define  set_PPOVERLAY_Measure_kiwi_den_phase_error_Result_reg(data)             (*((volatile unsigned int*)PPOVERLAY_Measure_kiwi_den_phase_error_Result_reg)=data)
#define  get_PPOVERLAY_Measure_kiwi_den_phase_error_Result_reg                   (*((volatile unsigned int*)PPOVERLAY_Measure_kiwi_den_phase_error_Result_reg))
#define  PPOVERLAY_Measure_kiwi_den_phase_error_Result_kiwi_den_phase_error_cntr_shift (24)
#define  PPOVERLAY_Measure_kiwi_den_phase_error_Result_kiwi_den_phase_error_flag_shift (23)
#define  PPOVERLAY_Measure_kiwi_den_phase_error_Result_kiwi_den_phase_error_po_shift (22)
#define  PPOVERLAY_Measure_kiwi_den_phase_error_Result_kiwi_den_phase_error_shift (0)
#define  PPOVERLAY_Measure_kiwi_den_phase_error_Result_kiwi_den_phase_error_cntr_mask (0x01000000)
#define  PPOVERLAY_Measure_kiwi_den_phase_error_Result_kiwi_den_phase_error_flag_mask (0x00800000)
#define  PPOVERLAY_Measure_kiwi_den_phase_error_Result_kiwi_den_phase_error_po_mask (0x00400000)
#define  PPOVERLAY_Measure_kiwi_den_phase_error_Result_kiwi_den_phase_error_mask (0x003FFFFF)
#define  PPOVERLAY_Measure_kiwi_den_phase_error_Result_kiwi_den_phase_error_cntr(data) (0x01000000&((data)<<24))
#define  PPOVERLAY_Measure_kiwi_den_phase_error_Result_kiwi_den_phase_error_flag(data) (0x00800000&((data)<<23))
#define  PPOVERLAY_Measure_kiwi_den_phase_error_Result_kiwi_den_phase_error_po(data) (0x00400000&((data)<<22))
#define  PPOVERLAY_Measure_kiwi_den_phase_error_Result_kiwi_den_phase_error(data) (0x003FFFFF&(data))
#define  PPOVERLAY_Measure_kiwi_den_phase_error_Result_get_kiwi_den_phase_error_cntr(data) ((0x01000000&(data))>>24)
#define  PPOVERLAY_Measure_kiwi_den_phase_error_Result_get_kiwi_den_phase_error_flag(data) ((0x00800000&(data))>>23)
#define  PPOVERLAY_Measure_kiwi_den_phase_error_Result_get_kiwi_den_phase_error_po(data) ((0x00400000&(data))>>22)
#define  PPOVERLAY_Measure_kiwi_den_phase_error_Result_get_kiwi_den_phase_error(data) (0x003FFFFF&(data))

#define  PPOVERLAY_Measure_memcmux_rw_den_phase_error_Result                    0x18028654
#define  PPOVERLAY_Measure_memcmux_rw_den_phase_error_Result_reg_addr            "0xB8028654"
#define  PPOVERLAY_Measure_memcmux_rw_den_phase_error_Result_reg                 0xB8028654
#define  PPOVERLAY_Measure_memcmux_rw_den_phase_error_Result_inst_addr           "0x00A4"
#define  set_PPOVERLAY_Measure_memcmux_rw_den_phase_error_Result_reg(data)       (*((volatile unsigned int*)PPOVERLAY_Measure_memcmux_rw_den_phase_error_Result_reg)=data)
#define  get_PPOVERLAY_Measure_memcmux_rw_den_phase_error_Result_reg             (*((volatile unsigned int*)PPOVERLAY_Measure_memcmux_rw_den_phase_error_Result_reg))
#define  PPOVERLAY_Measure_memcmux_rw_den_phase_error_Result_memcmux_rw_den_phase_error_cntr_shift (24)
#define  PPOVERLAY_Measure_memcmux_rw_den_phase_error_Result_memcmux_rw_den_phase_error_flag_shift (23)
#define  PPOVERLAY_Measure_memcmux_rw_den_phase_error_Result_memcmux_rw_den_phase_error_po_shift (22)
#define  PPOVERLAY_Measure_memcmux_rw_den_phase_error_Result_memcmux_rw_den_phase_error_shift (0)
#define  PPOVERLAY_Measure_memcmux_rw_den_phase_error_Result_memcmux_rw_den_phase_error_cntr_mask (0x01000000)
#define  PPOVERLAY_Measure_memcmux_rw_den_phase_error_Result_memcmux_rw_den_phase_error_flag_mask (0x00800000)
#define  PPOVERLAY_Measure_memcmux_rw_den_phase_error_Result_memcmux_rw_den_phase_error_po_mask (0x00400000)
#define  PPOVERLAY_Measure_memcmux_rw_den_phase_error_Result_memcmux_rw_den_phase_error_mask (0x003FFFFF)
#define  PPOVERLAY_Measure_memcmux_rw_den_phase_error_Result_memcmux_rw_den_phase_error_cntr(data) (0x01000000&((data)<<24))
#define  PPOVERLAY_Measure_memcmux_rw_den_phase_error_Result_memcmux_rw_den_phase_error_flag(data) (0x00800000&((data)<<23))
#define  PPOVERLAY_Measure_memcmux_rw_den_phase_error_Result_memcmux_rw_den_phase_error_po(data) (0x00400000&((data)<<22))
#define  PPOVERLAY_Measure_memcmux_rw_den_phase_error_Result_memcmux_rw_den_phase_error(data) (0x003FFFFF&(data))
#define  PPOVERLAY_Measure_memcmux_rw_den_phase_error_Result_get_memcmux_rw_den_phase_error_cntr(data) ((0x01000000&(data))>>24)
#define  PPOVERLAY_Measure_memcmux_rw_den_phase_error_Result_get_memcmux_rw_den_phase_error_flag(data) ((0x00800000&(data))>>23)
#define  PPOVERLAY_Measure_memcmux_rw_den_phase_error_Result_get_memcmux_rw_den_phase_error_po(data) ((0x00400000&(data))>>22)
#define  PPOVERLAY_Measure_memcmux_rw_den_phase_error_Result_get_memcmux_rw_den_phase_error(data) (0x003FFFFF&(data))

#define  PPOVERLAY_OSDDTG_CONTROL                                               0x18028700
#define  PPOVERLAY_OSDDTG_CONTROL_reg_addr                                       "0xB8028700"
#define  PPOVERLAY_OSDDTG_CONTROL_reg                                            0xB8028700
#define  PPOVERLAY_OSDDTG_CONTROL_inst_addr                                      "0x00A5"
#define  set_PPOVERLAY_OSDDTG_CONTROL_reg(data)                                  (*((volatile unsigned int*)PPOVERLAY_OSDDTG_CONTROL_reg)=data)
#define  get_PPOVERLAY_OSDDTG_CONTROL_reg                                        (*((volatile unsigned int*)PPOVERLAY_OSDDTG_CONTROL_reg))
#define  PPOVERLAY_OSDDTG_CONTROL_osddtg_mode_revised_shift                      (31)
#define  PPOVERLAY_OSDDTG_CONTROL_dtg_force_bypass_osd_blend_shift               (8)
#define  PPOVERLAY_OSDDTG_CONTROL_osd_split_shift                                (7)
#define  PPOVERLAY_OSDDTG_CONTROL_osddtg_frc_fsync_status_shift                  (6)
#define  PPOVERLAY_OSDDTG_CONTROL_osddtg_frc2fsync_by_hw_shift                   (5)
#define  PPOVERLAY_OSDDTG_CONTROL_osddtg_fsync_en_shift                          (4)
#define  PPOVERLAY_OSDDTG_CONTROL_osddtg_en_shift                                (0)
#define  PPOVERLAY_OSDDTG_CONTROL_osddtg_mode_revised_mask                       (0x80000000)
#define  PPOVERLAY_OSDDTG_CONTROL_dtg_force_bypass_osd_blend_mask                (0x00000100)
#define  PPOVERLAY_OSDDTG_CONTROL_osd_split_mask                                 (0x00000080)
#define  PPOVERLAY_OSDDTG_CONTROL_osddtg_frc_fsync_status_mask                   (0x00000040)
#define  PPOVERLAY_OSDDTG_CONTROL_osddtg_frc2fsync_by_hw_mask                    (0x00000020)
#define  PPOVERLAY_OSDDTG_CONTROL_osddtg_fsync_en_mask                           (0x00000010)
#define  PPOVERLAY_OSDDTG_CONTROL_osddtg_en_mask                                 (0x00000001)
#define  PPOVERLAY_OSDDTG_CONTROL_osddtg_mode_revised(data)                      (0x80000000&((data)<<31))
#define  PPOVERLAY_OSDDTG_CONTROL_dtg_force_bypass_osd_blend(data)               (0x00000100&((data)<<8))
#define  PPOVERLAY_OSDDTG_CONTROL_osd_split(data)                                (0x00000080&((data)<<7))
#define  PPOVERLAY_OSDDTG_CONTROL_osddtg_frc_fsync_status(data)                  (0x00000040&((data)<<6))
#define  PPOVERLAY_OSDDTG_CONTROL_osddtg_frc2fsync_by_hw(data)                   (0x00000020&((data)<<5))
#define  PPOVERLAY_OSDDTG_CONTROL_osddtg_fsync_en(data)                          (0x00000010&((data)<<4))
#define  PPOVERLAY_OSDDTG_CONTROL_osddtg_en(data)                                (0x00000001&(data))
#define  PPOVERLAY_OSDDTG_CONTROL_get_osddtg_mode_revised(data)                  ((0x80000000&(data))>>31)
#define  PPOVERLAY_OSDDTG_CONTROL_get_dtg_force_bypass_osd_blend(data)           ((0x00000100&(data))>>8)
#define  PPOVERLAY_OSDDTG_CONTROL_get_osd_split(data)                            ((0x00000080&(data))>>7)
#define  PPOVERLAY_OSDDTG_CONTROL_get_osddtg_frc_fsync_status(data)              ((0x00000040&(data))>>6)
#define  PPOVERLAY_OSDDTG_CONTROL_get_osddtg_frc2fsync_by_hw(data)               ((0x00000020&(data))>>5)
#define  PPOVERLAY_OSDDTG_CONTROL_get_osddtg_fsync_en(data)                      ((0x00000010&(data))>>4)
#define  PPOVERLAY_OSDDTG_CONTROL_get_osddtg_en(data)                            (0x00000001&(data))

#define  PPOVERLAY_osddtg_DV_TOTAL                                              0x18028704
#define  PPOVERLAY_osddtg_DV_TOTAL_reg_addr                                      "0xB8028704"
#define  PPOVERLAY_osddtg_DV_TOTAL_reg                                           0xB8028704
#define  PPOVERLAY_osddtg_DV_TOTAL_inst_addr                                     "0x00A6"
#define  set_PPOVERLAY_osddtg_DV_TOTAL_reg(data)                                 (*((volatile unsigned int*)PPOVERLAY_osddtg_DV_TOTAL_reg)=data)
#define  get_PPOVERLAY_osddtg_DV_TOTAL_reg                                       (*((volatile unsigned int*)PPOVERLAY_osddtg_DV_TOTAL_reg))
#define  PPOVERLAY_osddtg_DV_TOTAL_osddtg_dv_total_shift                         (0)
#define  PPOVERLAY_osddtg_DV_TOTAL_osddtg_dv_total_mask                          (0x00001FFF)
#define  PPOVERLAY_osddtg_DV_TOTAL_osddtg_dv_total(data)                         (0x00001FFF&(data))
#define  PPOVERLAY_osddtg_DV_TOTAL_get_osddtg_dv_total(data)                     (0x00001FFF&(data))

#define  PPOVERLAY_osddtg_DH_TOTAL                                              0x18028708
#define  PPOVERLAY_osddtg_DH_TOTAL_reg_addr                                      "0xB8028708"
#define  PPOVERLAY_osddtg_DH_TOTAL_reg                                           0xB8028708
#define  PPOVERLAY_osddtg_DH_TOTAL_inst_addr                                     "0x00A7"
#define  set_PPOVERLAY_osddtg_DH_TOTAL_reg(data)                                 (*((volatile unsigned int*)PPOVERLAY_osddtg_DH_TOTAL_reg)=data)
#define  get_PPOVERLAY_osddtg_DH_TOTAL_reg                                       (*((volatile unsigned int*)PPOVERLAY_osddtg_DH_TOTAL_reg))
#define  PPOVERLAY_osddtg_DH_TOTAL_osddtg_dh_total_last_line_shift               (16)
#define  PPOVERLAY_osddtg_DH_TOTAL_osddtg_dh_total_shift                         (0)
#define  PPOVERLAY_osddtg_DH_TOTAL_osddtg_dh_total_last_line_mask                (0x1FFF0000)
#define  PPOVERLAY_osddtg_DH_TOTAL_osddtg_dh_total_mask                          (0x00001FFF)
#define  PPOVERLAY_osddtg_DH_TOTAL_osddtg_dh_total_last_line(data)               (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_osddtg_DH_TOTAL_osddtg_dh_total(data)                         (0x00001FFF&(data))
#define  PPOVERLAY_osddtg_DH_TOTAL_get_osddtg_dh_total_last_line(data)           ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_osddtg_DH_TOTAL_get_osddtg_dh_total(data)                     (0x00001FFF&(data))

#define  PPOVERLAY_osddtg_DV_DEN_Start_End                                      0x18028718
#define  PPOVERLAY_osddtg_DV_DEN_Start_End_reg_addr                              "0xB8028718"
#define  PPOVERLAY_osddtg_DV_DEN_Start_End_reg                                   0xB8028718
#define  PPOVERLAY_osddtg_DV_DEN_Start_End_inst_addr                             "0x00A8"
#define  set_PPOVERLAY_osddtg_DV_DEN_Start_End_reg(data)                         (*((volatile unsigned int*)PPOVERLAY_osddtg_DV_DEN_Start_End_reg)=data)
#define  get_PPOVERLAY_osddtg_DV_DEN_Start_End_reg                               (*((volatile unsigned int*)PPOVERLAY_osddtg_DV_DEN_Start_End_reg))
#define  PPOVERLAY_osddtg_DV_DEN_Start_End_osddtg_dv_den_sta_shift               (16)
#define  PPOVERLAY_osddtg_DV_DEN_Start_End_osddtg_dv_den_end_shift               (0)
#define  PPOVERLAY_osddtg_DV_DEN_Start_End_osddtg_dv_den_sta_mask                (0x1FFF0000)
#define  PPOVERLAY_osddtg_DV_DEN_Start_End_osddtg_dv_den_end_mask                (0x00001FFF)
#define  PPOVERLAY_osddtg_DV_DEN_Start_End_osddtg_dv_den_sta(data)               (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_osddtg_DV_DEN_Start_End_osddtg_dv_den_end(data)               (0x00001FFF&(data))
#define  PPOVERLAY_osddtg_DV_DEN_Start_End_get_osddtg_dv_den_sta(data)           ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_osddtg_DV_DEN_Start_End_get_osddtg_dv_den_end(data)           (0x00001FFF&(data))

#define  PPOVERLAY_osddtg_DH_DEN_Start_End                                      0x1802871C
#define  PPOVERLAY_osddtg_DH_DEN_Start_End_reg_addr                              "0xB802871C"
#define  PPOVERLAY_osddtg_DH_DEN_Start_End_reg                                   0xB802871C
#define  PPOVERLAY_osddtg_DH_DEN_Start_End_inst_addr                             "0x00A9"
#define  set_PPOVERLAY_osddtg_DH_DEN_Start_End_reg(data)                         (*((volatile unsigned int*)PPOVERLAY_osddtg_DH_DEN_Start_End_reg)=data)
#define  get_PPOVERLAY_osddtg_DH_DEN_Start_End_reg                               (*((volatile unsigned int*)PPOVERLAY_osddtg_DH_DEN_Start_End_reg))
#define  PPOVERLAY_osddtg_DH_DEN_Start_End_osddtg_dh_den_sta_shift               (16)
#define  PPOVERLAY_osddtg_DH_DEN_Start_End_osddtg_dh_den_end_shift               (0)
#define  PPOVERLAY_osddtg_DH_DEN_Start_End_osddtg_dh_den_sta_mask                (0x1FFF0000)
#define  PPOVERLAY_osddtg_DH_DEN_Start_End_osddtg_dh_den_end_mask                (0x00001FFF)
#define  PPOVERLAY_osddtg_DH_DEN_Start_End_osddtg_dh_den_sta(data)               (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_osddtg_DH_DEN_Start_End_osddtg_dh_den_end(data)               (0x00001FFF&(data))
#define  PPOVERLAY_osddtg_DH_DEN_Start_End_get_osddtg_dh_den_sta(data)           ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_osddtg_DH_DEN_Start_End_get_osddtg_dh_den_end(data)           (0x00001FFF&(data))

#define  PPOVERLAY_OSDDTG_CONTROL2                                              0x18028720
#define  PPOVERLAY_OSDDTG_CONTROL2_reg_addr                                      "0xB8028720"
#define  PPOVERLAY_OSDDTG_CONTROL2_reg                                           0xB8028720
#define  PPOVERLAY_OSDDTG_CONTROL2_inst_addr                                     "0x00AA"
#define  set_PPOVERLAY_OSDDTG_CONTROL2_reg(data)                                 (*((volatile unsigned int*)PPOVERLAY_OSDDTG_CONTROL2_reg)=data)
#define  get_PPOVERLAY_OSDDTG_CONTROL2_reg                                       (*((volatile unsigned int*)PPOVERLAY_OSDDTG_CONTROL2_reg))
#define  PPOVERLAY_OSDDTG_CONTROL2_dtgm2osdvs_line_shift                         (16)
#define  PPOVERLAY_OSDDTG_CONTROL2_dtgm2osdvs_pixel_shift                        (0)
#define  PPOVERLAY_OSDDTG_CONTROL2_dtgm2osdvs_line_mask                          (0x1FFF0000)
#define  PPOVERLAY_OSDDTG_CONTROL2_dtgm2osdvs_pixel_mask                         (0x00001FFF)
#define  PPOVERLAY_OSDDTG_CONTROL2_dtgm2osdvs_line(data)                         (0x1FFF0000&((data)<<16))
#define  PPOVERLAY_OSDDTG_CONTROL2_dtgm2osdvs_pixel(data)                        (0x00001FFF&(data))
#define  PPOVERLAY_OSDDTG_CONTROL2_get_dtgm2osdvs_line(data)                     ((0x1FFF0000&(data))>>16)
#define  PPOVERLAY_OSDDTG_CONTROL2_get_dtgm2osdvs_pixel(data)                    (0x00001FFF&(data))

#define  PPOVERLAY_OSD_split_smooth_toggle                                      0x18028724
#define  PPOVERLAY_OSD_split_smooth_toggle_reg_addr                              "0xB8028724"
#define  PPOVERLAY_OSD_split_smooth_toggle_reg                                   0xB8028724
#define  PPOVERLAY_OSD_split_smooth_toggle_inst_addr                             "0x00AB"
#define  set_PPOVERLAY_OSD_split_smooth_toggle_reg(data)                         (*((volatile unsigned int*)PPOVERLAY_OSD_split_smooth_toggle_reg)=data)
#define  get_PPOVERLAY_OSD_split_smooth_toggle_reg                               (*((volatile unsigned int*)PPOVERLAY_OSD_split_smooth_toggle_reg))
#define  PPOVERLAY_OSD_split_smooth_toggle_osd_split_smooth_toggle_apply_shift   (0)
#define  PPOVERLAY_OSD_split_smooth_toggle_osd_split_smooth_toggle_apply_mask    (0x00000001)
#define  PPOVERLAY_OSD_split_smooth_toggle_osd_split_smooth_toggle_apply(data)   (0x00000001&(data))
#define  PPOVERLAY_OSD_split_smooth_toggle_get_osd_split_smooth_toggle_apply(data) (0x00000001&(data))

#define  PPOVERLAY_OSD_split_smooth_toggle_debug                                0x18028728
#define  PPOVERLAY_OSD_split_smooth_toggle_debug_reg_addr                        "0xB8028728"
#define  PPOVERLAY_OSD_split_smooth_toggle_debug_reg                             0xB8028728
#define  PPOVERLAY_OSD_split_smooth_toggle_debug_inst_addr                       "0x00AC"
#define  set_PPOVERLAY_OSD_split_smooth_toggle_debug_reg(data)                   (*((volatile unsigned int*)PPOVERLAY_OSD_split_smooth_toggle_debug_reg)=data)
#define  get_PPOVERLAY_OSD_split_smooth_toggle_debug_reg                         (*((volatile unsigned int*)PPOVERLAY_OSD_split_smooth_toggle_debug_reg))
#define  PPOVERLAY_OSD_split_smooth_toggle_debug_osd_split_smooth_toggle_debug_shift (0)
#define  PPOVERLAY_OSD_split_smooth_toggle_debug_osd_split_smooth_toggle_debug_mask (0xFFFFFFFF)
#define  PPOVERLAY_OSD_split_smooth_toggle_debug_osd_split_smooth_toggle_debug(data) (0xFFFFFFFF&(data))
#define  PPOVERLAY_OSD_split_smooth_toggle_debug_get_osd_split_smooth_toggle_debug(data) (0xFFFFFFFF&(data))

#define  PPOVERLAY_dispd_Timing_monitor_ctrl                                    0x18028780
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_reg_addr                            "0xB8028780"
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_reg                                 0xB8028780
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_inst_addr                           "0x00AD"
#define  set_PPOVERLAY_dispd_Timing_monitor_ctrl_reg(data)                       (*((volatile unsigned int*)PPOVERLAY_dispd_Timing_monitor_ctrl_reg)=data)
#define  get_PPOVERLAY_dispd_Timing_monitor_ctrl_reg                             (*((volatile unsigned int*)PPOVERLAY_dispd_Timing_monitor_ctrl_reg))
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_en_shift             (31)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_i2rnd_mode_shift     (29)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_src_shift            (28)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_unit_shift           (27)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_multi_mode_shift     (26)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_compare_shift        (24)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_sta0_shift           (12)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_end0_shift           (8)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_sta1_shift           (4)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_end1_shift           (0)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_en_mask              (0x80000000)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_i2rnd_mode_mask      (0x60000000)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_src_mask             (0x10000000)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_unit_mask            (0x08000000)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_multi_mode_mask      (0x04000000)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_compare_mask         (0x03000000)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_sta0_mask            (0x0000F000)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_end0_mask            (0x00000F00)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_sta1_mask            (0x000000F0)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_end1_mask            (0x0000000F)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_en(data)             (0x80000000&((data)<<31))
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_i2rnd_mode(data)     (0x60000000&((data)<<29))
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_src(data)            (0x10000000&((data)<<28))
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_unit(data)           (0x08000000&((data)<<27))
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_multi_mode(data)     (0x04000000&((data)<<26))
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_compare(data)        (0x03000000&((data)<<24))
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_sta0(data)           (0x0000F000&((data)<<12))
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_end0(data)           (0x00000F00&((data)<<8))
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_sta1(data)           (0x000000F0&((data)<<4))
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_timing_monitor_end1(data)           (0x0000000F&(data))
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_get_timing_monitor_en(data)         ((0x80000000&(data))>>31)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_get_timing_monitor_i2rnd_mode(data) ((0x60000000&(data))>>29)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_get_timing_monitor_src(data)        ((0x10000000&(data))>>28)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_get_timing_monitor_unit(data)       ((0x08000000&(data))>>27)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_get_timing_monitor_multi_mode(data) ((0x04000000&(data))>>26)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_get_timing_monitor_compare(data)    ((0x03000000&(data))>>24)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_get_timing_monitor_sta0(data)       ((0x0000F000&(data))>>12)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_get_timing_monitor_end0(data)       ((0x00000F00&(data))>>8)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_get_timing_monitor_sta1(data)       ((0x000000F0&(data))>>4)
#define  PPOVERLAY_dispd_Timing_monitor_ctrl_get_timing_monitor_end1(data)       (0x0000000F&(data))

#define  PPOVERLAY_dispd_Timing_monitor_multi                                   0x18028784
#define  PPOVERLAY_dispd_Timing_monitor_multi_reg_addr                           "0xB8028784"
#define  PPOVERLAY_dispd_Timing_monitor_multi_reg                                0xB8028784
#define  PPOVERLAY_dispd_Timing_monitor_multi_inst_addr                          "0x00AE"
#define  set_PPOVERLAY_dispd_Timing_monitor_multi_reg(data)                      (*((volatile unsigned int*)PPOVERLAY_dispd_Timing_monitor_multi_reg)=data)
#define  get_PPOVERLAY_dispd_Timing_monitor_multi_reg                            (*((volatile unsigned int*)PPOVERLAY_dispd_Timing_monitor_multi_reg))
#define  PPOVERLAY_dispd_Timing_monitor_multi_timing_monitor_sta2_shift          (28)
#define  PPOVERLAY_dispd_Timing_monitor_multi_timing_monitor_end2_shift          (24)
#define  PPOVERLAY_dispd_Timing_monitor_multi_timing_monitor_sta3_shift          (20)
#define  PPOVERLAY_dispd_Timing_monitor_multi_timing_monitor_end3_shift          (16)
#define  PPOVERLAY_dispd_Timing_monitor_multi_timing_monitor_sta4_shift          (12)
#define  PPOVERLAY_dispd_Timing_monitor_multi_timing_monitor_end4_shift          (8)
#define  PPOVERLAY_dispd_Timing_monitor_multi_timing_monitor_sta5_shift          (4)
#define  PPOVERLAY_dispd_Timing_monitor_multi_timing_monitor_end5_shift          (0)
#define  PPOVERLAY_dispd_Timing_monitor_multi_timing_monitor_sta2_mask           (0xF0000000)
#define  PPOVERLAY_dispd_Timing_monitor_multi_timing_monitor_end2_mask           (0x0F000000)
#define  PPOVERLAY_dispd_Timing_monitor_multi_timing_monitor_sta3_mask           (0x00F00000)
#define  PPOVERLAY_dispd_Timing_monitor_multi_timing_monitor_end3_mask           (0x000F0000)
#define  PPOVERLAY_dispd_Timing_monitor_multi_timing_monitor_sta4_mask           (0x0000F000)
#define  PPOVERLAY_dispd_Timing_monitor_multi_timing_monitor_end4_mask           (0x00000F00)
#define  PPOVERLAY_dispd_Timing_monitor_multi_timing_monitor_sta5_mask           (0x000000F0)
#define  PPOVERLAY_dispd_Timing_monitor_multi_timing_monitor_end5_mask           (0x0000000F)
#define  PPOVERLAY_dispd_Timing_monitor_multi_timing_monitor_sta2(data)          (0xF0000000&((data)<<28))
#define  PPOVERLAY_dispd_Timing_monitor_multi_timing_monitor_end2(data)          (0x0F000000&((data)<<24))
#define  PPOVERLAY_dispd_Timing_monitor_multi_timing_monitor_sta3(data)          (0x00F00000&((data)<<20))
#define  PPOVERLAY_dispd_Timing_monitor_multi_timing_monitor_end3(data)          (0x000F0000&((data)<<16))
#define  PPOVERLAY_dispd_Timing_monitor_multi_timing_monitor_sta4(data)          (0x0000F000&((data)<<12))
#define  PPOVERLAY_dispd_Timing_monitor_multi_timing_monitor_end4(data)          (0x00000F00&((data)<<8))
#define  PPOVERLAY_dispd_Timing_monitor_multi_timing_monitor_sta5(data)          (0x000000F0&((data)<<4))
#define  PPOVERLAY_dispd_Timing_monitor_multi_timing_monitor_end5(data)          (0x0000000F&(data))
#define  PPOVERLAY_dispd_Timing_monitor_multi_get_timing_monitor_sta2(data)      ((0xF0000000&(data))>>28)
#define  PPOVERLAY_dispd_Timing_monitor_multi_get_timing_monitor_end2(data)      ((0x0F000000&(data))>>24)
#define  PPOVERLAY_dispd_Timing_monitor_multi_get_timing_monitor_sta3(data)      ((0x00F00000&(data))>>20)
#define  PPOVERLAY_dispd_Timing_monitor_multi_get_timing_monitor_end3(data)      ((0x000F0000&(data))>>16)
#define  PPOVERLAY_dispd_Timing_monitor_multi_get_timing_monitor_sta4(data)      ((0x0000F000&(data))>>12)
#define  PPOVERLAY_dispd_Timing_monitor_multi_get_timing_monitor_end4(data)      ((0x00000F00&(data))>>8)
#define  PPOVERLAY_dispd_Timing_monitor_multi_get_timing_monitor_sta5(data)      ((0x000000F0&(data))>>4)
#define  PPOVERLAY_dispd_Timing_monitor_multi_get_timing_monitor_end5(data)      (0x0000000F&(data))

#define  PPOVERLAY_dispd_Timing_monitor_compare_th                              0x18028788
#define  PPOVERLAY_dispd_Timing_monitor_compare_th_reg_addr                      "0xB8028788"
#define  PPOVERLAY_dispd_Timing_monitor_compare_th_reg                           0xB8028788
#define  PPOVERLAY_dispd_Timing_monitor_compare_th_inst_addr                     "0x00AF"
#define  set_PPOVERLAY_dispd_Timing_monitor_compare_th_reg(data)                 (*((volatile unsigned int*)PPOVERLAY_dispd_Timing_monitor_compare_th_reg)=data)
#define  get_PPOVERLAY_dispd_Timing_monitor_compare_th_reg                       (*((volatile unsigned int*)PPOVERLAY_dispd_Timing_monitor_compare_th_reg))
#define  PPOVERLAY_dispd_Timing_monitor_compare_th_t_m_compare_th_shift          (0)
#define  PPOVERLAY_dispd_Timing_monitor_compare_th_t_m_compare_th_mask           (0x0FFFFFFF)
#define  PPOVERLAY_dispd_Timing_monitor_compare_th_t_m_compare_th(data)          (0x0FFFFFFF&(data))
#define  PPOVERLAY_dispd_Timing_monitor_compare_th_get_t_m_compare_th(data)      (0x0FFFFFFF&(data))

#define  PPOVERLAY_dispd_Timing_monitor_golden                                  0x1802878C
#define  PPOVERLAY_dispd_Timing_monitor_golden_reg_addr                          "0xB802878C"
#define  PPOVERLAY_dispd_Timing_monitor_golden_reg                               0xB802878C
#define  PPOVERLAY_dispd_Timing_monitor_golden_inst_addr                         "0x00B0"
#define  set_PPOVERLAY_dispd_Timing_monitor_golden_reg(data)                     (*((volatile unsigned int*)PPOVERLAY_dispd_Timing_monitor_golden_reg)=data)
#define  get_PPOVERLAY_dispd_Timing_monitor_golden_reg                           (*((volatile unsigned int*)PPOVERLAY_dispd_Timing_monitor_golden_reg))
#define  PPOVERLAY_dispd_Timing_monitor_golden_t_m_golden_shift                  (0)
#define  PPOVERLAY_dispd_Timing_monitor_golden_t_m_golden_mask                   (0x0FFFFFFF)
#define  PPOVERLAY_dispd_Timing_monitor_golden_t_m_golden(data)                  (0x0FFFFFFF&(data))
#define  PPOVERLAY_dispd_Timing_monitor_golden_get_t_m_golden(data)              (0x0FFFFFFF&(data))

#define  PPOVERLAY_dispd_Timing_monitor_result1                                 0x18028790
#define  PPOVERLAY_dispd_Timing_monitor_result1_reg_addr                         "0xB8028790"
#define  PPOVERLAY_dispd_Timing_monitor_result1_reg                              0xB8028790
#define  PPOVERLAY_dispd_Timing_monitor_result1_inst_addr                        "0x00B1"
#define  set_PPOVERLAY_dispd_Timing_monitor_result1_reg(data)                    (*((volatile unsigned int*)PPOVERLAY_dispd_Timing_monitor_result1_reg)=data)
#define  get_PPOVERLAY_dispd_Timing_monitor_result1_reg                          (*((volatile unsigned int*)PPOVERLAY_dispd_Timing_monitor_result1_reg))
#define  PPOVERLAY_dispd_Timing_monitor_result1_t_m_result_previous1_shift       (0)
#define  PPOVERLAY_dispd_Timing_monitor_result1_t_m_result_previous1_mask        (0x0FFFFFFF)
#define  PPOVERLAY_dispd_Timing_monitor_result1_t_m_result_previous1(data)       (0x0FFFFFFF&(data))
#define  PPOVERLAY_dispd_Timing_monitor_result1_get_t_m_result_previous1(data)   (0x0FFFFFFF&(data))

#define  PPOVERLAY_dispd_Timing_monitor_result2                                 0x18028794
#define  PPOVERLAY_dispd_Timing_monitor_result2_reg_addr                         "0xB8028794"
#define  PPOVERLAY_dispd_Timing_monitor_result2_reg                              0xB8028794
#define  PPOVERLAY_dispd_Timing_monitor_result2_inst_addr                        "0x00B2"
#define  set_PPOVERLAY_dispd_Timing_monitor_result2_reg(data)                    (*((volatile unsigned int*)PPOVERLAY_dispd_Timing_monitor_result2_reg)=data)
#define  get_PPOVERLAY_dispd_Timing_monitor_result2_reg                          (*((volatile unsigned int*)PPOVERLAY_dispd_Timing_monitor_result2_reg))
#define  PPOVERLAY_dispd_Timing_monitor_result2_t_m_result_previous2_shift       (0)
#define  PPOVERLAY_dispd_Timing_monitor_result2_t_m_result_previous2_mask        (0x0FFFFFFF)
#define  PPOVERLAY_dispd_Timing_monitor_result2_t_m_result_previous2(data)       (0x0FFFFFFF&(data))
#define  PPOVERLAY_dispd_Timing_monitor_result2_get_t_m_result_previous2(data)   (0x0FFFFFFF&(data))

#define  PPOVERLAY_dispd_Timing_monitor_result3                                 0x18028798
#define  PPOVERLAY_dispd_Timing_monitor_result3_reg_addr                         "0xB8028798"
#define  PPOVERLAY_dispd_Timing_monitor_result3_reg                              0xB8028798
#define  PPOVERLAY_dispd_Timing_monitor_result3_inst_addr                        "0x00B3"
#define  set_PPOVERLAY_dispd_Timing_monitor_result3_reg(data)                    (*((volatile unsigned int*)PPOVERLAY_dispd_Timing_monitor_result3_reg)=data)
#define  get_PPOVERLAY_dispd_Timing_monitor_result3_reg                          (*((volatile unsigned int*)PPOVERLAY_dispd_Timing_monitor_result3_reg))
#define  PPOVERLAY_dispd_Timing_monitor_result3_t_m_result_previous3_shift       (0)
#define  PPOVERLAY_dispd_Timing_monitor_result3_t_m_result_previous3_mask        (0x0FFFFFFF)
#define  PPOVERLAY_dispd_Timing_monitor_result3_t_m_result_previous3(data)       (0x0FFFFFFF&(data))
#define  PPOVERLAY_dispd_Timing_monitor_result3_get_t_m_result_previous3(data)   (0x0FFFFFFF&(data))

#define  PPOVERLAY_dispd_Timing_monitor_result4                                 0x1802879C
#define  PPOVERLAY_dispd_Timing_monitor_result4_reg_addr                         "0xB802879C"
#define  PPOVERLAY_dispd_Timing_monitor_result4_reg                              0xB802879C
#define  PPOVERLAY_dispd_Timing_monitor_result4_inst_addr                        "0x00B4"
#define  set_PPOVERLAY_dispd_Timing_monitor_result4_reg(data)                    (*((volatile unsigned int*)PPOVERLAY_dispd_Timing_monitor_result4_reg)=data)
#define  get_PPOVERLAY_dispd_Timing_monitor_result4_reg                          (*((volatile unsigned int*)PPOVERLAY_dispd_Timing_monitor_result4_reg))
#define  PPOVERLAY_dispd_Timing_monitor_result4_t_m_result_previous4_shift       (0)
#define  PPOVERLAY_dispd_Timing_monitor_result4_t_m_result_previous4_mask        (0x0FFFFFFF)
#define  PPOVERLAY_dispd_Timing_monitor_result4_t_m_result_previous4(data)       (0x0FFFFFFF&(data))
#define  PPOVERLAY_dispd_Timing_monitor_result4_get_t_m_result_previous4(data)   (0x0FFFFFFF&(data))

#define  PPOVERLAY_dispd_Timing_monitor_max                                     0x180287A0
#define  PPOVERLAY_dispd_Timing_monitor_max_reg_addr                             "0xB80287A0"
#define  PPOVERLAY_dispd_Timing_monitor_max_reg                                  0xB80287A0
#define  PPOVERLAY_dispd_Timing_monitor_max_inst_addr                            "0x00B5"
#define  set_PPOVERLAY_dispd_Timing_monitor_max_reg(data)                        (*((volatile unsigned int*)PPOVERLAY_dispd_Timing_monitor_max_reg)=data)
#define  get_PPOVERLAY_dispd_Timing_monitor_max_reg                              (*((volatile unsigned int*)PPOVERLAY_dispd_Timing_monitor_max_reg))
#define  PPOVERLAY_dispd_Timing_monitor_max_t_m_result_max_shift                 (0)
#define  PPOVERLAY_dispd_Timing_monitor_max_t_m_result_max_mask                  (0x0FFFFFFF)
#define  PPOVERLAY_dispd_Timing_monitor_max_t_m_result_max(data)                 (0x0FFFFFFF&(data))
#define  PPOVERLAY_dispd_Timing_monitor_max_get_t_m_result_max(data)             (0x0FFFFFFF&(data))

#define  PPOVERLAY_dispd_Timing_monitor_min                                     0x180287A4
#define  PPOVERLAY_dispd_Timing_monitor_min_reg_addr                             "0xB80287A4"
#define  PPOVERLAY_dispd_Timing_monitor_min_reg                                  0xB80287A4
#define  PPOVERLAY_dispd_Timing_monitor_min_inst_addr                            "0x00B6"
#define  set_PPOVERLAY_dispd_Timing_monitor_min_reg(data)                        (*((volatile unsigned int*)PPOVERLAY_dispd_Timing_monitor_min_reg)=data)
#define  get_PPOVERLAY_dispd_Timing_monitor_min_reg                              (*((volatile unsigned int*)PPOVERLAY_dispd_Timing_monitor_min_reg))
#define  PPOVERLAY_dispd_Timing_monitor_min_t_m_result_min_shift                 (0)
#define  PPOVERLAY_dispd_Timing_monitor_min_t_m_result_min_mask                  (0x0FFFFFFF)
#define  PPOVERLAY_dispd_Timing_monitor_min_t_m_result_min(data)                 (0x0FFFFFFF&(data))
#define  PPOVERLAY_dispd_Timing_monitor_min_get_t_m_result_min(data)             (0x0FFFFFFF&(data))

#define  PPOVERLAY_dispd_Timing_monitor_st                                      0x180287A8
#define  PPOVERLAY_dispd_Timing_monitor_st_reg_addr                              "0xB80287A8"
#define  PPOVERLAY_dispd_Timing_monitor_st_reg                                   0xB80287A8
#define  PPOVERLAY_dispd_Timing_monitor_st_inst_addr                             "0x00B7"
#define  set_PPOVERLAY_dispd_Timing_monitor_st_reg(data)                         (*((volatile unsigned int*)PPOVERLAY_dispd_Timing_monitor_st_reg)=data)
#define  get_PPOVERLAY_dispd_Timing_monitor_st_reg                               (*((volatile unsigned int*)PPOVERLAY_dispd_Timing_monitor_st_reg))
#define  PPOVERLAY_dispd_Timing_monitor_st_compare_hit_shift                     (2)
#define  PPOVERLAY_dispd_Timing_monitor_st_hsync_hit_den_error_shift             (1)
#define  PPOVERLAY_dispd_Timing_monitor_st_vsync_hit_den_error_shift             (0)
#define  PPOVERLAY_dispd_Timing_monitor_st_compare_hit_mask                      (0x00000004)
#define  PPOVERLAY_dispd_Timing_monitor_st_hsync_hit_den_error_mask              (0x00000002)
#define  PPOVERLAY_dispd_Timing_monitor_st_vsync_hit_den_error_mask              (0x00000001)
#define  PPOVERLAY_dispd_Timing_monitor_st_compare_hit(data)                     (0x00000004&((data)<<2))
#define  PPOVERLAY_dispd_Timing_monitor_st_hsync_hit_den_error(data)             (0x00000002&((data)<<1))
#define  PPOVERLAY_dispd_Timing_monitor_st_vsync_hit_den_error(data)             (0x00000001&(data))
#define  PPOVERLAY_dispd_Timing_monitor_st_get_compare_hit(data)                 ((0x00000004&(data))>>2)
#define  PPOVERLAY_dispd_Timing_monitor_st_get_hsync_hit_den_error(data)         ((0x00000002&(data))>>1)
#define  PPOVERLAY_dispd_Timing_monitor_st_get_vsync_hit_den_error(data)         (0x00000001&(data))

#define  PPOVERLAY_DTG_dummy_reg_1                                              0x180287AC
#define  PPOVERLAY_DTG_dummy_reg_1_reg_addr                                      "0xB80287AC"
#define  PPOVERLAY_DTG_dummy_reg_1_reg                                           0xB80287AC
#define  PPOVERLAY_DTG_dummy_reg_1_inst_addr                                     "0x00B8"
#define  set_PPOVERLAY_DTG_dummy_reg_1_reg(data)                                 (*((volatile unsigned int*)PPOVERLAY_DTG_dummy_reg_1_reg)=data)
#define  get_PPOVERLAY_DTG_dummy_reg_1_reg                                       (*((volatile unsigned int*)PPOVERLAY_DTG_dummy_reg_1_reg))
#define  PPOVERLAY_DTG_dummy_reg_1_dummy_31_0_shift                              (0)
#define  PPOVERLAY_DTG_dummy_reg_1_dummy_31_0_mask                               (0xFFFFFFFF)
#define  PPOVERLAY_DTG_dummy_reg_1_dummy_31_0(data)                              (0xFFFFFFFF&(data))
#define  PPOVERLAY_DTG_dummy_reg_1_get_dummy_31_0(data)                          (0xFFFFFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======PPOVERLAY register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drm_multireg_dbuf_vsync_sel:2;
        RBus_UInt32  res1:15;
        RBus_UInt32  drm_multireg_dbuf_en:1;
        RBus_UInt32  drm_multireg_dbuf_read_sel:1;
        RBus_UInt32  drm_multireg_dbuf_set:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dreg_dbuf_en:1;
        RBus_UInt32  dreg_dbuf_read_sel:1;
        RBus_UInt32  dreg_dbuf_set:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  dsubreg_dbuf_en:1;
        RBus_UInt32  dsubreg_dbuf_read_sel:1;
        RBus_UInt32  dsubreg_dbuf_set:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  dmainreg_dbuf_en:1;
        RBus_UInt32  dmainreg_dbuf_read_sel:1;
        RBus_UInt32  dmainreg_dbuf_set:1;
    };
}ppoverlay_double_buffer_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  osddtgreg_dbuf_en:1;
        RBus_UInt32  osddtgreg_dbuf_read_sel:1;
        RBus_UInt32  osddtgreg_dbuf_set:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  uzudtgreg_dbuf_en:1;
        RBus_UInt32  uzudtgreg_dbuf_read_sel:1;
        RBus_UInt32  uzudtgreg_dbuf_set:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  memcdtgreg_dbuf_en:1;
        RBus_UInt32  memcdtgreg_dbuf_read_sel:1;
        RBus_UInt32  memc_dtgreg_dbuf_set:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  osddtg_dbuf_vsync_sel:2;
        RBus_UInt32  uzudtg_dbuf_vsync_sel:2;
        RBus_UInt32  memcdtg_dbuf_vsync_sel:2;
    };
}ppoverlay_double_buffer_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  dmainreg_other_dbuf_en:1;
        RBus_UInt32  dmainreg_other_dbuf_read_sel:1;
        RBus_UInt32  dmainreg_other_dbuf_set:1;
    };
}ppoverlay_double_buffer_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  hlw_db_en:1;
        RBus_UInt32  hlw_db_read_sel:1;
        RBus_UInt32  hlw_db_apply:1;
    };
}ppoverlay_highlight_window_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iv2dv_db_vsync_sel:1;
        RBus_UInt32  res1:28;
        RBus_UInt32  iv2dv_db_en:1;
        RBus_UInt32  iv2dv_db_read_sel:1;
        RBus_UInt32  iv2dv_db_apply:1;
    };
}ppoverlay_iv2dv_double_buffer_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  dispd_stage1_smooth_toggle_protect:1;
    };
}ppoverlay_dispd_stage1_sm_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  dispd_stage2_smooth_toggle_protect:1;
    };
}ppoverlay_dispd_stage2_sm_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  dispd_stage1_smooth_toggle_src_sel:1;
        RBus_UInt32  dispd_stage1_smooth_toggle_apply:1;
    };
}ppoverlay_dispd_smooth_toggle1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  dispd_stage2_smooth_toggle_apply:1;
    };
}ppoverlay_dispd_smooth_toggle2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_frc_fsync:1;
        RBus_UInt32  disp_frc_on_fsync:1;
        RBus_UInt32  disp_line_4x:1;
        RBus_UInt32  disp_fix_last_line:2;
        RBus_UInt32  disp_fsync_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  disp_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  main_imd_sm_to_gdma:1;
        RBus_UInt32  sub_imd_sm_to_gdma:1;
        RBus_UInt32  wde_to_free_run:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  dout_force_bg:1;
        RBus_UInt32  res4:9;
        RBus_UInt32  fsync_fll_mode:1;
        RBus_UInt32  res5:7;
        RBus_UInt32  dv_rst_sscg_alignok_sel:1;
    };
}ppoverlay_display_timing_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lineod_en:1;
        RBus_UInt32  hcic_enable:1;
        RBus_UInt32  lineod2_en:1;
        RBus_UInt32  pip_swap_en:1;
        RBus_UInt32  valc_en:1;
        RBus_UInt32  shpnr_line_mode:3;
        RBus_UInt32  pod_enable:1;
        RBus_UInt32  mplus_rgbw_en:4;
        RBus_UInt32  d2i3ddma_src_sel:3;
        RBus_UInt32  d2i3_drop_en:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  rtk_dither_en:1;
        RBus_UInt32  a10_en:1;
        RBus_UInt32  orbit_timing_en:1;
        RBus_UInt32  dispd_lg_mplus_siw_rgbw_clk_en:2;
        RBus_UInt32  frc2fsync_protection:1;
        RBus_UInt32  frc2fsync_speedup_period:1;
        RBus_UInt32  frc2fsync_speedup_en:1;
        RBus_UInt32  frc2fsync_en:1;
    };
}ppoverlay_display_timing_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dh_width:8;
    };
}ppoverlay_dh_width_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  dh_total:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  dh_total_last_line:13;
    };
}ppoverlay_dh_total_last_line_length_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dv_length:8;
    };
}ppoverlay_dv_length_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  dv_total:13;
    };
}ppoverlay_dv_total_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  frc2fsync_speedup_by_vtotal_en:1;
        RBus_UInt32  res1:18;
        RBus_UInt32  speedup_dv_total:13;
    };
}ppoverlay_frc2fsync_speedup_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  pwm_predict_avg_delta:13;
        RBus_UInt32  pwm_predict_delta_thr:8;
        RBus_UInt32  res2:2;
        RBus_UInt32  pwm_predict_fsync_ok:1;
        RBus_UInt32  pwm_predict_fsync_ok_event_ie:1;
        RBus_UInt32  pwm_predict_delta_error:1;
        RBus_UInt32  pwm_fsync_ok_delay_en:1;
        RBus_UInt32  pwm_predict_sw_update:1;
        RBus_UInt32  pwm_predict_en:1;
    };
}ppoverlay_pwm_predict_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  d_bg_g:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  d_bg_b:14;
    };
}ppoverlay_display_background_color_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  d_bg_r:14;
    };
}ppoverlay_display_background_color_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  mplus_vs_sel:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  mplus_vs_sta:13;
    };
}ppoverlay_display_s2ip_timing_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  measure_topixels_ctr:1;
        RBus_UInt32  measure_topixels_mode:1;
        RBus_UInt32  measure_topixels_2f:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  total_pixels_first_cnt:28;
    };
}ppoverlay_measure_total_pixels_result1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  total_pixels_second_cnt:28;
    };
}ppoverlay_measure_total_pixels_result2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  measure_dvllpixels_ctr:1;
        RBus_UInt32  measure_dvllpixels_mode:1;
        RBus_UInt32  measure_dvllpixels_2f:1;
        RBus_UInt32  dv_total_value_first:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  last_line_value_first:13;
    };
}ppoverlay_measure_dvtotal_last_line_pixels_result1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  dv_total_value_second:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  last_line_value_second:13;
    };
}ppoverlay_measure_dvtotal_last_line_pixels_result2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  osd_split_dv_den_cnt_target:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  dv_den_cnt_target:13;
    };
}ppoverlay_frc_to_frame_sync_den_end_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dvs_abnormal_long_en:1;
        RBus_UInt32  dvs_abnormal_measure_en:1;
        RBus_UInt32  dvs_abnormal_short_en:1;
        RBus_UInt32  dvs_long_line_th:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  dvs_short_line_th:13;
    };
}ppoverlay_dvs_abnormal_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2d_special_dly_en:1;
        RBus_UInt32  i2d_special_dly_mode:1;
        RBus_UInt32  i2d_dly_new_mode_en:1;
        RBus_UInt32  i2d_dly_lower:13;
        RBus_UInt32  res1:1;
        RBus_UInt32  i2d_dly_n_line_mode:2;
        RBus_UInt32  i2d_dly_upper:13;
    };
}ppoverlay_i2d_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  i2d_dly_sub_line_max:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  i2d_dly_add_line_max:13;
    };
}ppoverlay_i2d_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  i2d_tune_res0:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  i2d_tune_res1:13;
    };
}ppoverlay_i2d_meas_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  i2d_tune_res2:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  i2d_tune_res3:13;
    };
}ppoverlay_i2d_meas_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  i2d_tune_res4:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  i2d_tune_res5:13;
    };
}ppoverlay_i2d_meas_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  i2d_tune_res6:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  i2d_tune_res7:13;
    };
}ppoverlay_i2d_meas_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2d_dly_ok:1;
        RBus_UInt32  i2d_dly_status:2;
        RBus_UInt32  i2d_dly_onerun_done:1;
        RBus_UInt32  i2d_dly_onerun_done_int_en:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  i2d_frame_index:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  i2d_phase_err:13;
    };
}ppoverlay_i2d_meas_phase_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm_vs_dly_en:1;
        RBus_UInt32  dvsync_dly_int_en:1;
        RBus_UInt32  dvsync_dly_int_update:1;
        RBus_UInt32  res1:16;
        RBus_UInt32  dvsync_line_cnt:13;
    };
}ppoverlay_vrr_dvsync_dly_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm_int_dly:16;
        RBus_UInt32  pwm_vs_dly:16;
    };
}ppoverlay_vrr_dvsync_dly_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dclk_det_en:1;
        RBus_UInt32  dclk_cnt_max_min_reset:1;
        RBus_UInt32  res1:14;
        RBus_UInt32  dclk_n_cnt:16;
    };
}ppoverlay_dtg_dclk_detect_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_dclk_n_cnt:16;
        RBus_UInt32  min_dclk_n_cnt:16;
    };
}ppoverlay_dtg_dclk_detect_max_min_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dtg_ie_2:1;
        RBus_UInt32  ie_fll_track_unlock_2:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  osddtgv_den_sta_event_ie_2:1;
        RBus_UInt32  osddtgv_den_end_event_ie_2:1;
        RBus_UInt32  disp_frc2fsync_event_ie_2:1;
        RBus_UInt32  kiwi_den_phase_error_ie_2:1;
        RBus_UInt32  kiwi_dvs_phase_error_ie_2:1;
        RBus_UInt32  memcdtgv_den_sta_event_ie_2:1;
        RBus_UInt32  memcdtgv_den_end_event_ie_2:1;
        RBus_UInt32  d_counter_dvs_ie_2:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dvs_long_event_2:1;
        RBus_UInt32  dvs_short_event_2:1;
        RBus_UInt32  res3:8;
        RBus_UInt32  dtg_vlc_ie_2:1;
        RBus_UInt32  sv_den_sta_event_ie_2:1;
        RBus_UInt32  sv_den_end_event_ie_2:1;
        RBus_UInt32  mv_den_sta_event_ie_2:1;
        RBus_UInt32  mv_den_end_event_ie_2:1;
    };
}ppoverlay_dtg_ie_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  osddtgv_den_sta_event_2:1;
        RBus_UInt32  osddtgv_den_end_event_2:1;
        RBus_UInt32  disp_frc2fsync_event_2:1;
        RBus_UInt32  kiwi_den_phase_error_irq_2:1;
        RBus_UInt32  kiwi_dvs_phase_error_irq_2:1;
        RBus_UInt32  memcdtgv_den_sta_event_2:1;
        RBus_UInt32  memcdtgv_den_end_event_2:1;
        RBus_UInt32  d_counter_dvs_irq_2:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dvs_long_2:1;
        RBus_UInt32  dvs_short_2:1;
        RBus_UInt32  res3:8;
        RBus_UInt32  dtg_vlc_status_2:1;
        RBus_UInt32  sv_den_sta_event_2:1;
        RBus_UInt32  sv_den_end_event_2:1;
        RBus_UInt32  mv_den_sta_event_2:1;
        RBus_UInt32  mv_den_end_event_2:1;
    };
}ppoverlay_dtg_pending_status_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dtg_ie:1;
        RBus_UInt32  ie_fll_track_unlock:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  osddtgv_den_sta_event_ie:1;
        RBus_UInt32  osddtgv_den_end_event_ie:1;
        RBus_UInt32  disp_frc2fsync_event_ie:1;
        RBus_UInt32  kiwi_den_phase_error_ie:1;
        RBus_UInt32  kiwi_dvs_phase_error_ie:1;
        RBus_UInt32  memcdtgv_den_sta_event_ie:1;
        RBus_UInt32  memcdtgv_den_end_event_ie:1;
        RBus_UInt32  d_counter_dvs_ie:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dvs_long_event:1;
        RBus_UInt32  dvs_short_event:1;
        RBus_UInt32  fll_exit_irq_en:1;
        RBus_UInt32  fix_last_line_ivs_too_close_event_ie:1;
        RBus_UInt32  fix_last_line_no_ivs_event_ie:1;
        RBus_UInt32  fix_last_line_less_than_th_event_ie:1;
        RBus_UInt32  fix_last_line_more_than_th_event_ie:1;
        RBus_UInt32  fix_last_line_less_event_ie:1;
        RBus_UInt32  fix_last_line_more_event_ie:1;
        RBus_UInt32  auto_switch_x_event_ie:1;
        RBus_UInt32  dtg_vlc_ie:1;
        RBus_UInt32  sv_den_sta_event_ie:1;
        RBus_UInt32  sv_den_end_event_ie:1;
        RBus_UInt32  mv_den_sta_event_ie:1;
        RBus_UInt32  mv_den_end_event_ie:1;
    };
}ppoverlay_dtg_ie_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iv2dv_reg_is_db:1;
        RBus_UInt32  dtg_reg_is_db:1;
        RBus_UInt32  dtg_sub_reg_is_db:1;
        RBus_UInt32  dtg_main_reg_is_db:1;
        RBus_UInt32  dtg_main_other_reg_is_db:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  osddtgv_den_sta_event:1;
        RBus_UInt32  osddtgv_den_end_event:1;
        RBus_UInt32  disp_frc2fsync_event:1;
        RBus_UInt32  kiwi_den_phase_error_irq:1;
        RBus_UInt32  kiwi_dvs_phase_error_irq:1;
        RBus_UInt32  memcdtgv_den_sta_event:1;
        RBus_UInt32  memcdtgv_den_end_event:1;
        RBus_UInt32  d_counter_dvs_irq:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dvs_long:1;
        RBus_UInt32  dvs_short:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  fix_last_line_ivs_too_close_event:1;
        RBus_UInt32  fix_last_line_no_ivs_event:1;
        RBus_UInt32  fix_last_line_less_than_th_event:1;
        RBus_UInt32  fix_last_line_more_than_th_event:1;
        RBus_UInt32  fix_last_line_less_event:1;
        RBus_UInt32  fix_last_line_more_event:1;
        RBus_UInt32  auto_switch_x_event:1;
        RBus_UInt32  dtg_vlc_status:1;
        RBus_UInt32  sv_den_sta_event:1;
        RBus_UInt32  sv_den_end_event:1;
        RBus_UInt32  mv_den_sta_event:1;
        RBus_UInt32  mv_den_end_event:1;
    };
}ppoverlay_dtg_pending_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_watchdog_or:1;
        RBus_UInt32  sub_watchdog_or:1;
        RBus_UInt32  main_watchdog_and:1;
        RBus_UInt32  sub_watchdog_and:1;
        RBus_UInt32  res1:18;
        RBus_UInt32  osddtg_fsync_err:1;
        RBus_UInt32  uzudtg_fsync_err:1;
        RBus_UInt32  memcdtg_fsync_err:1;
        RBus_UInt32  hlw_error_flag:1;
        RBus_UInt32  hlw_bc1_flag:1;
        RBus_UInt32  hlw_bc2_flag:1;
        RBus_UInt32  hlw_bc3_flag:1;
        RBus_UInt32  hlw_bc4_flag:1;
        RBus_UInt32  hlw_bc5_flag:1;
        RBus_UInt32  old_fll_unlocked_event:1;
    };
}ppoverlay_dtg_no_ie_pending_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  watchdog_main_status:16;
        RBus_UInt32  watchdog_sub_status:16;
    };
}ppoverlay_dtg_watchdog_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  rtk_bypass_vs_delay:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  memcdtg_golden_vs:1;
        RBus_UInt32  memc_outmux_sel:1;
        RBus_UInt32  memc_out_bg_en:1;
        RBus_UInt32  res3:11;
        RBus_UInt32  memc_in_bg_en:1;
    };
}ppoverlay_memc_mux_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  in_y_g_value:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  in_cb_b_value:12;
    };
}ppoverlay_memc_mux_in_color_value_gb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  in_cr_r_value:12;
    };
}ppoverlay_memc_mux_in_color_value_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  out_y_g_value:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  out_cb_b_value:12;
    };
}ppoverlay_memc_mux_out1_color_value_gb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  out_cr_r_value:12;
    };
}ppoverlay_memc_mux_out1_color_value_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  dv_rst_sscg_sel:1;
        RBus_UInt32  max_multiple_synthesisn:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  synthesisn:3;
        RBus_UInt32  res3:5;
        RBus_UInt32  synthesisn_ratio:11;
    };
}ppoverlay_fix_last_line_systhesisn_ratio_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  offset_ft_lock_en:1;
        RBus_UInt32  res1:14;
        RBus_UInt32  t_s:1;
        RBus_UInt32  lock_th:16;
    };
}ppoverlay_fix_last_line_mode_lock_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  offset_ft:13;
    };
}ppoverlay_fix_last_line_mode_conter0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  phase_error_ft:24;
    };
}ppoverlay_fix_last_line_mode_counter1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  wde_fll_track_unlock:1;
        RBus_UInt32  res2:1;
    };
}ppoverlay_fix_last_line_mode_lock_wde_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dtg_vlcen:1;
        RBus_UInt32  dtg_vlc_mode:1;
        RBus_UInt32  res1:12;
        RBus_UInt32  dtg_vlc_src_sel:2;
        RBus_UInt32  debug_mux:3;
        RBus_UInt32  dtg_vln:13;
    };
}ppoverlay_dtg_lc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  sram_ok_main_meas_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  sram_ok_main_line_th:2;
        RBus_UInt32  res3:3;
        RBus_UInt32  sram_ok_main_16pix_th:9;
    };
}ppoverlay_sram_ok_main_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy18028230_31_29:3;
        RBus_UInt32  line_cnt_sram_ok_main_odd:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  pix_cnt_sram_ok_main_odd:13;
    };
}ppoverlay_sram_ok_main_result_odd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy18028234_31_29:3;
        RBus_UInt32  line_cnt_sram_ok_main_even:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  pix_cnt_sram_ok_main_even:13;
    };
}ppoverlay_sram_ok_main_result_even_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  sram_ok_sub_meas_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  sram_ok_sub_line_th:2;
        RBus_UInt32  res3:3;
        RBus_UInt32  sram_ok_sub_16pix_th:9;
    };
}ppoverlay_sram_ok_sub_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802823c_31_29:3;
        RBus_UInt32  line_cnt_sram_ok_sub_odd:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  pix_cnt_sram_ok_sub_odd:13;
    };
}ppoverlay_sram_ok_sub_result_odd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy18028240_31_29:3;
        RBus_UInt32  line_cnt_sram_ok_sub_even:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  pix_cnt_sram_ok_sub_even:13;
    };
}ppoverlay_sram_ok_sub_result_even_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  rbus_reset:1;
    };
}ppoverlay_rbus_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  line_cnt_rt:13;
    };
}ppoverlay_new_meas0_linecnt_real_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  uzudtg_line_cnt_rt:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  memcdtg_line_cnt_rt:13;
    };
}ppoverlay_new_meas1_linecnt_real_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  osddtg_line_cnt_rt:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  uzudtg_dly_line_cnt_rt:13;
    };
}ppoverlay_new_meas2_linecnt_real_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_not_fs_line_pixel_en:1;
        RBus_UInt32  m_field_flag:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  m_not_fs_line_value:13;
        RBus_UInt32  m_underflow_flag:1;
        RBus_UInt32  m_overflow_flag:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  m_not_fs_pixel_value:13;
    };
}ppoverlay_measure_not_frame_sync_line_pixels_main_path_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_not_fs_line_pixel_en:1;
        RBus_UInt32  s_field_flag:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  s_not_fs_line_value:13;
        RBus_UInt32  s_underflow_flag:1;
        RBus_UInt32  s_overflow_flag:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  s_not_fs_pixel_value:13;
    };
}ppoverlay_measure_not_frame_sync_line_pixels_sub_path_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  d_counter_dvs_en:1;
        RBus_UInt32  res1:14;
        RBus_UInt32  d_counter_dvs_mask:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  d_counter_dvs_set:13;
    };
}ppoverlay_d_domain_counter_dvs_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fix_last_line_exit_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  more_line_th:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  less_line_th:13;
    };
}ppoverlay_fix_last_line_exit_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  fll_status_counter:13;
    };
}ppoverlay_fix_last_line_exit_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  wd_fix_last_more_en:1;
        RBus_UInt32  wd_fix_last_less_en:1;
        RBus_UInt32  wd_fix_last_more_than_th_en:1;
        RBus_UInt32  wd_fix_last_less_than_th_en:1;
        RBus_UInt32  wd_fix_last_no_ivs_en:1;
        RBus_UInt32  wd_fix_last_line_ivs_too_close_en:1;
    };
}ppoverlay_fix_last_line_exit_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180282c4_31_29:3;
        RBus_UInt32  line_cnt_sram_ok_main_left:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  pix_cnt_sram_ok_main_left:13;
    };
}ppoverlay_sram_ok_main_result_left_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180282c8_31_29:3;
        RBus_UInt32  line_cnt_sram_ok_main_right:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  pix_cnt_sram_ok_main_right:13;
    };
}ppoverlay_sram_ok_main_result_right_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  dvs_cnt:25;
    };
}ppoverlay_dvs_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  dvs_sscg_cnt:25;
    };
}ppoverlay_dvs_sscg_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  uzudtg_dvs_cnt:25;
    };
}ppoverlay_uzudtg_dvs_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  osddtg_dvs_cnt:25;
    };
}ppoverlay_osddtg_dvs_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  memcdtg_dvs_cnt:25;
    };
}ppoverlay_memcdtg_dvs_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  dctl_irq_2_record:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  dmato3dlut_irq_record:1;
        RBus_UInt32  d_hist_main_irq_record:1;
        RBus_UInt32  d_hist_sub_irq_record:1;
        RBus_UInt32  m_plus_irq_record:1;
        RBus_UInt32  vi_irq_record:1;
        RBus_UInt32  su_main_irq_record:1;
        RBus_UInt32  su_sub_irq_record:1;
        RBus_UInt32  osd_irq_record:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  dctl_irq_record:1;
        RBus_UInt32  od_irq_record:1;
        RBus_UInt32  ld_spi_irq_record:1;
    };
}ppoverlay_dispd_irq_record_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  dispd_testpin_sel:6;
    };
}ppoverlay_dispd_test_pin_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  porch_gated_en:1;
        RBus_UInt32  res1:27;
        RBus_UInt32  dispd_stage2_clk_back_porch_gated_en:1;
        RBus_UInt32  dispd_stage2_clk_front_porch_gated_en:1;
        RBus_UInt32  dispd_stage1_clk_back_porch_gated_en:1;
        RBus_UInt32  dispd_stage1_clk_front_porch_gated_en:1;
    };
}ppoverlay_d_clk_porch_gated_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy18025c44_31:1;
        RBus_UInt32  iv2dv_3d_line_l:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  iv2dv_3d_line_r:15;
    };
}ppoverlay_fs_iv_dv_fine_tuning3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  iv2dv_3d_pixel_r:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  iv2dv_3d_pixel2_l:13;
    };
}ppoverlay_fs_iv_dv_fine_tuning4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy18025c4c_31_30:2;
        RBus_UInt32  iv2dv_3d_flag_en:1;
        RBus_UInt32  iv2dv_3d_flag_inv:1;
        RBus_UInt32  dummy18025c4c_27_26:2;
        RBus_UInt32  res1:22;
        RBus_UInt32  iv2dv_toggle_en:1;
        RBus_UInt32  iv2dv_toggle_inv:1;
        RBus_UInt32  dummy18025c4c_1_0:2;
    };
}ppoverlay_fs_iv_dv_fine_tuning1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  iv2dv_pixel:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  iv2dv_pixel2:13;
    };
}ppoverlay_fs_iv_dv_fine_tuning2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy18025c58_31:1;
        RBus_UInt32  iv2dv_line:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  iv2dv_line_2:15;
    };
}ppoverlay_fs_iv_dv_fine_tuning5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iv2dv_ih_slf_gen_en:1;
        RBus_UInt32  res1:18;
        RBus_UInt32  iv2dv_ih_slf_width:13;
    };
}ppoverlay_dctl_iv2dv_ihs_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ivs_over_threshold_err:1;
        RBus_UInt32  ivs_over_threshold_int_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  ivs_threshold:28;
    };
}ppoverlay_measure_ivs_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xclk_max:8;
        RBus_UInt32  xclk_min:8;
        RBus_UInt32  iclk_num:8;
        RBus_UInt32  res1:7;
        RBus_UInt32  auto_switch_x_en:1;
    };
}ppoverlay_xtal_count_iclk_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  main_wd_to_background:1;
        RBus_UInt32  main_wd_to_free_run:1;
        RBus_UInt32  dummy18028300_13_4:10;
        RBus_UInt32  m_hbd_en:1;
        RBus_UInt32  m_bd_trans:1;
        RBus_UInt32  m_force_bg:1;
        RBus_UInt32  m_disp_en:1;
    };
}ppoverlay_main_display_control_rsv_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m_hbd_g:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m_hbd_b:14;
    };
}ppoverlay_main_border_highlight_border_color1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m_bd_b:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m_hbd_r:14;
    };
}ppoverlay_main_border_highlight_border_color2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m_bd_r:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m_bd_g:14;
    };
}ppoverlay_main_border_highlight_border_color3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m_bg_g:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m_bg_b:14;
    };
}ppoverlay_main_background_color1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  m_bg_r:14;
    };
}ppoverlay_main_background_color2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  hlw_update_rate:8;
        RBus_UInt32  res2:5;
        RBus_UInt32  hlw_mode:2;
        RBus_UInt32  hlw_en:1;
    };
}ppoverlay_highlight_window_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  hlw_h_ini_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  hlw_ini_width:13;
    };
}ppoverlay_highlight_window_h_initial_start_width_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  hlw_v_ini_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  hlw_ini_height:13;
    };
}ppoverlay_highlight_window_v_initial_start_height_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hlw_h_sta_step:8;
        RBus_UInt32  hlw_width_step:8;
        RBus_UInt32  hlw_v_sta_step:8;
        RBus_UInt32  hlw_height_step:8;
    };
}ppoverlay_highlight_window_update_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  hlw_h_bd_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  hlw_h_bd_end:13;
    };
}ppoverlay_highlight_window_h_boundary_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  hlw_v_bd_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  hlw_v_bd_end:13;
    };
}ppoverlay_highlight_window_v_boundary_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  hlw_h_cur_sta_pos:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  hlw_cur_width:13;
    };
}ppoverlay_highlight_window_h_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  hlw_v_cur_sta_pos:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  hlw_cur_height:13;
    };
}ppoverlay_highlight_window_v_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  hlw_v_sta_dir_inv_bc1_en:1;
        RBus_UInt32  hlw_v_sta_dir_inv_bc2_en:1;
        RBus_UInt32  hlw_h_sta_dir_inv_bc3_en:1;
        RBus_UInt32  hlw_h_sta_dir_inv_bc4_en:1;
    };
}ppoverlay_highlight_window_boundary_condition_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  hlw_up_bd_w:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  hlw_down_bd_w:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  hlw_left_bd_w:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  hlw_right_bd_w:6;
    };
}ppoverlay_highlight_window_border_width_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  hlw_min_width:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  hlw_min_height:13;
    };
}ppoverlay_highlight_window_min_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  mp_hbd_en:1;
    };
}ppoverlay_mp_disp_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  sub_wd_to_background:1;
        RBus_UInt32  sub_wd_to_free_run:1;
        RBus_UInt32  dummy18028384_13_3:11;
        RBus_UInt32  s_bd_trans:1;
        RBus_UInt32  s_force_bg:1;
        RBus_UInt32  s_disp_en:1;
    };
}ppoverlay_mp_layout_force_to_background_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  s_hbd_g:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  s_hbd_b:14;
    };
}ppoverlay_sub_border_highlight_border_color1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  s_bd_b:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  s_hbd_r:14;
    };
}ppoverlay_sub_border_highlight_border_color2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  s_bd_r:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  s_bd_g:14;
    };
}ppoverlay_sub_border_highlight_border_color3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  s_bg_g:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  s_bg_b:14;
    };
}ppoverlay_sub_background_color1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  s_bg_r:14;
    };
}ppoverlay_sub_background_color2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  right_osd1_dir:1;
        RBus_UInt32  right_osd1_offset:11;
        RBus_UInt32  left_osd1_dir:1;
        RBus_UInt32  left_osd1_offset:11;
    };
}ppoverlay_osd1_3d_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  right_osd2_dir:1;
        RBus_UInt32  right_osd2_offset:11;
        RBus_UInt32  left_osd2_dir:1;
        RBus_UInt32  left_osd2_offset:11;
    };
}ppoverlay_osd2_3d_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  right_osd3_dir:1;
        RBus_UInt32  right_osd3_offset:11;
        RBus_UInt32  left_osd3_dir:1;
        RBus_UInt32  left_osd3_offset:11;
    };
}ppoverlay_osd3_3d_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gibi_blackflag_mode:1;
        RBus_UInt32  gibi_blackflag_en:1;
        RBus_UInt32  gibi_blackflag:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  gdma_osd_line_alt:1;
        RBus_UInt32  gdma_osd_lflag_inv:1;
        RBus_UInt32  gdma_subt_line_alt:1;
        RBus_UInt32  gdma_subt_lflag_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  memcdtg_lflag_cnt_reset:1;
        RBus_UInt32  memcdtg_lflag_mode:1;
        RBus_UInt32  memcdtg_lflag_free_run:2;
        RBus_UInt32  memcdtg_lflag_mode_3d:1;
        RBus_UInt32  memcdtg_lflag_inv:1;
        RBus_UInt32  memcdtg_lflag:1;
        RBus_UInt32  res3:10;
        RBus_UInt32  lflag_cnt_reset:1;
        RBus_UInt32  lflag_mode:1;
        RBus_UInt32  lflag_free_run:1;
        RBus_UInt32  lflag_mode_3d:1;
        RBus_UInt32  lflag_inv:1;
        RBus_UInt32  lflag:1;
    };
}ppoverlay_lflag_gen_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  remove_half_ivs:1;
        RBus_UInt32  remove_half_ivs_mode:3;
        RBus_UInt32  res1:6;
        RBus_UInt32  remove_half_ivs_cnt_reset:1;
        RBus_UInt32  remove_half_ivs_mode2:5;
        RBus_UInt32  res2:16;
    };
}ppoverlay_dtg_m_remove_input_vsync_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  measure_ivs_cnt_src_sel:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  ivs_cnt_even:25;
    };
}ppoverlay_ivs_cnt_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  ivs_cnt_odd:25;
    };
}ppoverlay_ivs_cnt_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  ivs_cnt_ori:25;
    };
}ppoverlay_ivs_cnt_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  dtg_m_multiple_vsync:6;
    };
}ppoverlay_dtg_m_multiple_vsync_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  uzudtg_remove_half_ivs:1;
        RBus_UInt32  uzudtg_remove_half_ivs_mode:6;
        RBus_UInt32  uzudtg_remove_half_ivs_cnt_reset:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  uzudtg_remove_half_ivs_alignmode:1;
        RBus_UInt32  res3:14;
        RBus_UInt32  uzudtg_multiple_vsync:6;
    };
}ppoverlay_uzudtg_fractional_fsync_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  memcdtg_remove_half_ivs:1;
        RBus_UInt32  memcdtg_remove_half_ivs_mode:6;
        RBus_UInt32  memcdtg_remove_half_ivs_cnt_reset:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  memcdtg_remove_half_ivs_alignmode:1;
        RBus_UInt32  res3:14;
        RBus_UInt32  memcdtg_multiple_vsync:6;
    };
}ppoverlay_memcdtg_fractional_fsync_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  osddtg_remove_half_ivs:1;
        RBus_UInt32  osddtg_remove_half_ivs_mode:6;
        RBus_UInt32  osddtg_remove_half_ivs_cnt_reset:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  osddtg_remove_half_ivs_alignmode:1;
        RBus_UInt32  res3:14;
        RBus_UInt32  osddtg_multiple_vsync:6;
    };
}ppoverlay_osddtg_fractional_fsync_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  uzudtg_input_frame_cnt:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  uzudtg_output_frame_cnt:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  memcdtg_input_frame_cnt:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  memcdtg_output_frame_cnt:6;
    };
}ppoverlay_dtg_frame_cnt1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  osddtg_input_frame_cnt:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  osddtg_output_frame_cnt:6;
        RBus_UInt32  res3:10;
        RBus_UInt32  dtg_output_frame_cnt:6;
    };
}ppoverlay_dtg_frame_cnt2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  dtg_input_frame_cnt:5;
    };
}ppoverlay_dtg_frame_cnt3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  pif_osd_dh_width:8;
    };
}ppoverlay_osd_dtg_dh_width_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  pif_osd_dv_length:8;
    };
}ppoverlay_osd_dtg_dv_length_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  uzudtg_mode_revised:1;
        RBus_UInt32  res1:24;
        RBus_UInt32  uzudtg_frc_fsync_status:1;
        RBus_UInt32  uzudtg_frc2fsync_by_hw:1;
        RBus_UInt32  uzudtg_fsync_en:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  uzudtg_en:1;
    };
}ppoverlay_uzudtg_countrol_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  uzudtg_dv_total:13;
    };
}ppoverlay_uzudtg_dv_total_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  uzudtg_dh_total_last_line:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  uzudtg_dh_total:13;
    };
}ppoverlay_uzudtg_dh_total_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  two_step_uzu_en:1;
        RBus_UInt32  uzu_4k_120_mode:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dtgm2uzuvs_line:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  dtgm2uzuvs_pixel:13;
    };
}ppoverlay_uzudtg_control1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  dtgm2uzu_s1_vs_line:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  dtgm2uzu_s1_vs_pixel:13;
    };
}ppoverlay_uzudtg_control2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  dh_den_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  dh_den_end:13;
    };
}ppoverlay_dh_den_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  dv_den_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  dv_den_end:13;
    };
}ppoverlay_dv_den_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  mh_den_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  mh_den_end:13;
    };
}ppoverlay_main_den_h_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  mv_den_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  mv_den_end:13;
    };
}ppoverlay_main_den_v_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  mh_bg_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  mh_bg_end:13;
    };
}ppoverlay_main_background_h_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  mv_bg_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  mv_bg_end:13;
    };
}ppoverlay_main_background_v_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  mh_act_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  mh_act_end:13;
    };
}ppoverlay_main_active_h_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  mv_act_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  mv_act_end:13;
    };
}ppoverlay_main_active_v_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sh_den_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  sh_den_width:13;
    };
}ppoverlay_sub_den_h_start_width_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sv_den_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  sv_den_length:13;
    };
}ppoverlay_sub_den_v_start_length_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sh_bg_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  sh_bg_end:13;
    };
}ppoverlay_sub_background_h_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sv_bg_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  sv_bg_end:13;
    };
}ppoverlay_sub_background_v_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sh_act_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  sh_act_end:13;
    };
}ppoverlay_sub_active_h_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sv_act_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  sv_act_end:13;
    };
}ppoverlay_sub_active_v_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  sub_act_rad_a:22;
    };
}ppoverlay_sub_active_rad_a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  sub_bg_rad_a:22;
    };
}ppoverlay_sub_background_rad_a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  sub_den_rad_a:22;
    };
}ppoverlay_sub_den_rad_a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  sub_window_form_sel:1;
        RBus_UInt32  sub_circle_center_v:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  sub_circle_center_h:14;
    };
}ppoverlay_sub_circle_center_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memcdtg_mode_revised:1;
        RBus_UInt32  res1:24;
        RBus_UInt32  memcdtg_frc_fsync_status:1;
        RBus_UInt32  memcdtg_frc2fsync_by_hw:1;
        RBus_UInt32  memcdtg_fsync_en:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  memcdtg_en:1;
    };
}ppoverlay_memcdtg_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  memcdtg_dv_total:13;
    };
}ppoverlay_memcdtg_dv_total_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  memcdtg_dh_total_last_line:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  memcdtg_dh_total:13;
    };
}ppoverlay_memcdtg_dh_total_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  memcdtg_dv_den_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  memcdtg_dv_den_end:13;
    };
}ppoverlay_memcdtg_dv_den_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  memcdtg_dh_den_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  memcdtg_dh_den_end:13;
    };
}ppoverlay_memcdtg_dh_den_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  memcdtg_dv_video_blend_region_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  memcdtg_dv_video_blend_region_end:13;
    };
}ppoverlay_memcdtg_dv_video_blending_region_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  memcdtg_dh_video_blend_region_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  memcdtg_dh_video_blend_region_end:13;
    };
}ppoverlay_memcdtg_dh_video_blending_region_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  dtgm2orbitvs_line_sft:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  dtgm2orbitvs_pixel_sft:13;
    };
}ppoverlay_memcdtg_control_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  dtgm2kiwiprevs_line:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  dtgm2kiwiprevs_pixel:13;
    };
}ppoverlay_memcdtg_control2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  dtgm2goldenpostvs_line:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  dtgm2goldenpostvs_pixel:13;
    };
}ppoverlay_memcdtg_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  kiwi_dvs_phase_error_cntr:1;
        RBus_UInt32  kiwi_dvs_phase_error_flag:1;
        RBus_UInt32  kiwi_dvs_phase_error_po:1;
        RBus_UInt32  kiwi_dvs_phase_error:22;
    };
}ppoverlay_measure_kiwi_dvs_phase_error_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  kiwi_den_phase_error_cntr:1;
        RBus_UInt32  kiwi_den_phase_error_flag:1;
        RBus_UInt32  kiwi_den_phase_error_po:1;
        RBus_UInt32  kiwi_den_phase_error:22;
    };
}ppoverlay_measure_kiwi_den_phase_error_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  memcmux_rw_den_phase_error_cntr:1;
        RBus_UInt32  memcmux_rw_den_phase_error_flag:1;
        RBus_UInt32  memcmux_rw_den_phase_error_po:1;
        RBus_UInt32  memcmux_rw_den_phase_error:22;
    };
}ppoverlay_measure_memcmux_rw_den_phase_error_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osddtg_mode_revised:1;
        RBus_UInt32  res1:22;
        RBus_UInt32  dtg_force_bypass_osd_blend:1;
        RBus_UInt32  osd_split:1;
        RBus_UInt32  osddtg_frc_fsync_status:1;
        RBus_UInt32  osddtg_frc2fsync_by_hw:1;
        RBus_UInt32  osddtg_fsync_en:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  osddtg_en:1;
    };
}ppoverlay_osddtg_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  osddtg_dv_total:13;
    };
}ppoverlay_osddtg_dv_total_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  osddtg_dh_total_last_line:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  osddtg_dh_total:13;
    };
}ppoverlay_osddtg_dh_total_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  osddtg_dv_den_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  osddtg_dv_den_end:13;
    };
}ppoverlay_osddtg_dv_den_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  osddtg_dh_den_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  osddtg_dh_den_end:13;
    };
}ppoverlay_osddtg_dh_den_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  dtgm2osdvs_line:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  dtgm2osdvs_pixel:13;
    };
}ppoverlay_osddtg_control2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  osd_split_smooth_toggle_apply:1;
    };
}ppoverlay_osd_split_smooth_toggle_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_split_smooth_toggle_debug:32;
    };
}ppoverlay_osd_split_smooth_toggle_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  timing_monitor_en:1;
        RBus_UInt32  timing_monitor_i2rnd_mode:2;
        RBus_UInt32  timing_monitor_src:1;
        RBus_UInt32  timing_monitor_unit:1;
        RBus_UInt32  timing_monitor_multi_mode:1;
        RBus_UInt32  timing_monitor_compare:2;
        RBus_UInt32  res1:8;
        RBus_UInt32  timing_monitor_sta0:4;
        RBus_UInt32  timing_monitor_end0:4;
        RBus_UInt32  timing_monitor_sta1:4;
        RBus_UInt32  timing_monitor_end1:4;
    };
}ppoverlay_dispd_timing_monitor_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  timing_monitor_sta2:4;
        RBus_UInt32  timing_monitor_end2:4;
        RBus_UInt32  timing_monitor_sta3:4;
        RBus_UInt32  timing_monitor_end3:4;
        RBus_UInt32  timing_monitor_sta4:4;
        RBus_UInt32  timing_monitor_end4:4;
        RBus_UInt32  timing_monitor_sta5:4;
        RBus_UInt32  timing_monitor_end5:4;
    };
}ppoverlay_dispd_timing_monitor_multi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_compare_th:28;
    };
}ppoverlay_dispd_timing_monitor_compare_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_golden:28;
    };
}ppoverlay_dispd_timing_monitor_golden_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_result_previous1:28;
    };
}ppoverlay_dispd_timing_monitor_result1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_result_previous2:28;
    };
}ppoverlay_dispd_timing_monitor_result2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_result_previous3:28;
    };
}ppoverlay_dispd_timing_monitor_result3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_result_previous4:28;
    };
}ppoverlay_dispd_timing_monitor_result4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_result_max:28;
    };
}ppoverlay_dispd_timing_monitor_max_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_result_min:28;
    };
}ppoverlay_dispd_timing_monitor_min_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  compare_hit:1;
        RBus_UInt32  hsync_hit_den_error:1;
        RBus_UInt32  vsync_hit_den_error:1;
    };
}ppoverlay_dispd_timing_monitor_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180287ac_31_0:32;
    };
}ppoverlay_dtg_dummy_reg_1_RBUS;

#else //apply LITTLE_ENDIAN

//======PPOVERLAY register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dmainreg_dbuf_set:1;
        RBus_UInt32  dmainreg_dbuf_read_sel:1;
        RBus_UInt32  dmainreg_dbuf_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dsubreg_dbuf_set:1;
        RBus_UInt32  dsubreg_dbuf_read_sel:1;
        RBus_UInt32  dsubreg_dbuf_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dreg_dbuf_set:1;
        RBus_UInt32  dreg_dbuf_read_sel:1;
        RBus_UInt32  dreg_dbuf_en:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  drm_multireg_dbuf_set:1;
        RBus_UInt32  drm_multireg_dbuf_read_sel:1;
        RBus_UInt32  drm_multireg_dbuf_en:1;
        RBus_UInt32  res4:15;
        RBus_UInt32  drm_multireg_dbuf_vsync_sel:2;
    };
}ppoverlay_double_buffer_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memcdtg_dbuf_vsync_sel:2;
        RBus_UInt32  uzudtg_dbuf_vsync_sel:2;
        RBus_UInt32  osddtg_dbuf_vsync_sel:2;
        RBus_UInt32  res1:6;
        RBus_UInt32  memc_dtgreg_dbuf_set:1;
        RBus_UInt32  memcdtgreg_dbuf_read_sel:1;
        RBus_UInt32  memcdtgreg_dbuf_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  uzudtgreg_dbuf_set:1;
        RBus_UInt32  uzudtgreg_dbuf_read_sel:1;
        RBus_UInt32  uzudtgreg_dbuf_en:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  osddtgreg_dbuf_set:1;
        RBus_UInt32  osddtgreg_dbuf_read_sel:1;
        RBus_UInt32  osddtgreg_dbuf_en:1;
        RBus_UInt32  res4:9;
    };
}ppoverlay_double_buffer_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dmainreg_other_dbuf_set:1;
        RBus_UInt32  dmainreg_other_dbuf_read_sel:1;
        RBus_UInt32  dmainreg_other_dbuf_en:1;
        RBus_UInt32  res1:29;
    };
}ppoverlay_double_buffer_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hlw_db_apply:1;
        RBus_UInt32  hlw_db_read_sel:1;
        RBus_UInt32  hlw_db_en:1;
        RBus_UInt32  res1:29;
    };
}ppoverlay_highlight_window_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iv2dv_db_apply:1;
        RBus_UInt32  iv2dv_db_read_sel:1;
        RBus_UInt32  iv2dv_db_en:1;
        RBus_UInt32  res1:28;
        RBus_UInt32  iv2dv_db_vsync_sel:1;
    };
}ppoverlay_iv2dv_double_buffer_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispd_stage1_smooth_toggle_protect:1;
        RBus_UInt32  res1:31;
    };
}ppoverlay_dispd_stage1_sm_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispd_stage2_smooth_toggle_protect:1;
        RBus_UInt32  res1:31;
    };
}ppoverlay_dispd_stage2_sm_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispd_stage1_smooth_toggle_apply:1;
        RBus_UInt32  dispd_stage1_smooth_toggle_src_sel:1;
        RBus_UInt32  res1:30;
    };
}ppoverlay_dispd_smooth_toggle1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispd_stage2_smooth_toggle_apply:1;
        RBus_UInt32  res1:31;
    };
}ppoverlay_dispd_smooth_toggle2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dv_rst_sscg_alignok_sel:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  fsync_fll_mode:1;
        RBus_UInt32  res2:9;
        RBus_UInt32  dout_force_bg:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  wde_to_free_run:1;
        RBus_UInt32  sub_imd_sm_to_gdma:1;
        RBus_UInt32  main_imd_sm_to_gdma:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  disp_en:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  disp_fsync_en:1;
        RBus_UInt32  disp_fix_last_line:2;
        RBus_UInt32  disp_line_4x:1;
        RBus_UInt32  disp_frc_on_fsync:1;
        RBus_UInt32  disp_frc_fsync:1;
    };
}ppoverlay_display_timing_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  frc2fsync_en:1;
        RBus_UInt32  frc2fsync_speedup_en:1;
        RBus_UInt32  frc2fsync_speedup_period:1;
        RBus_UInt32  frc2fsync_protection:1;
        RBus_UInt32  dispd_lg_mplus_siw_rgbw_clk_en:2;
        RBus_UInt32  orbit_timing_en:1;
        RBus_UInt32  a10_en:1;
        RBus_UInt32  rtk_dither_en:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  d2i3_drop_en:1;
        RBus_UInt32  d2i3ddma_src_sel:3;
        RBus_UInt32  mplus_rgbw_en:4;
        RBus_UInt32  pod_enable:1;
        RBus_UInt32  shpnr_line_mode:3;
        RBus_UInt32  valc_en:1;
        RBus_UInt32  pip_swap_en:1;
        RBus_UInt32  lineod2_en:1;
        RBus_UInt32  hcic_enable:1;
        RBus_UInt32  lineod_en:1;
    };
}ppoverlay_display_timing_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_width:8;
        RBus_UInt32  res1:24;
    };
}ppoverlay_dh_width_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_total_last_line:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  dh_total:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_dh_total_last_line_length_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dv_length:8;
        RBus_UInt32  res1:24;
    };
}ppoverlay_dv_length_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dv_total:13;
        RBus_UInt32  res1:19;
    };
}ppoverlay_dv_total_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  speedup_dv_total:13;
        RBus_UInt32  res1:18;
        RBus_UInt32  frc2fsync_speedup_by_vtotal_en:1;
    };
}ppoverlay_frc2fsync_speedup_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm_predict_en:1;
        RBus_UInt32  pwm_predict_sw_update:1;
        RBus_UInt32  pwm_fsync_ok_delay_en:1;
        RBus_UInt32  pwm_predict_delta_error:1;
        RBus_UInt32  pwm_predict_fsync_ok_event_ie:1;
        RBus_UInt32  pwm_predict_fsync_ok:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  pwm_predict_delta_thr:8;
        RBus_UInt32  pwm_predict_avg_delta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_pwm_predict_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  d_bg_b:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  d_bg_g:14;
        RBus_UInt32  res2:2;
    };
}ppoverlay_display_background_color_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  d_bg_r:14;
        RBus_UInt32  res1:18;
    };
}ppoverlay_display_background_color_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mplus_vs_sta:13;
        RBus_UInt32  res1:2;
        RBus_UInt32  mplus_vs_sel:1;
        RBus_UInt32  res2:16;
    };
}ppoverlay_display_s2ip_timing_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_pixels_first_cnt:28;
        RBus_UInt32  res1:1;
        RBus_UInt32  measure_topixels_2f:1;
        RBus_UInt32  measure_topixels_mode:1;
        RBus_UInt32  measure_topixels_ctr:1;
    };
}ppoverlay_measure_total_pixels_result1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_pixels_second_cnt:28;
        RBus_UInt32  res1:4;
    };
}ppoverlay_measure_total_pixels_result2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  last_line_value_first:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  dv_total_value_first:13;
        RBus_UInt32  measure_dvllpixels_2f:1;
        RBus_UInt32  measure_dvllpixels_mode:1;
        RBus_UInt32  measure_dvllpixels_ctr:1;
    };
}ppoverlay_measure_dvtotal_last_line_pixels_result1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  last_line_value_second:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  dv_total_value_second:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_measure_dvtotal_last_line_pixels_result2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dv_den_cnt_target:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  osd_split_dv_den_cnt_target:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_frc_to_frame_sync_den_end_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dvs_short_line_th:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  dvs_long_line_th:13;
        RBus_UInt32  dvs_abnormal_short_en:1;
        RBus_UInt32  dvs_abnormal_measure_en:1;
        RBus_UInt32  dvs_abnormal_long_en:1;
    };
}ppoverlay_dvs_abnormal_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2d_dly_upper:13;
        RBus_UInt32  i2d_dly_n_line_mode:2;
        RBus_UInt32  res1:1;
        RBus_UInt32  i2d_dly_lower:13;
        RBus_UInt32  i2d_dly_new_mode_en:1;
        RBus_UInt32  i2d_special_dly_mode:1;
        RBus_UInt32  i2d_special_dly_en:1;
    };
}ppoverlay_i2d_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2d_dly_add_line_max:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  i2d_dly_sub_line_max:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_i2d_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2d_tune_res1:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  i2d_tune_res0:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_i2d_meas_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2d_tune_res3:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  i2d_tune_res2:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_i2d_meas_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2d_tune_res5:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  i2d_tune_res4:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_i2d_meas_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2d_tune_res7:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  i2d_tune_res6:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_i2d_meas_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2d_phase_err:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  i2d_frame_index:4;
        RBus_UInt32  res2:7;
        RBus_UInt32  i2d_dly_onerun_done_int_en:1;
        RBus_UInt32  i2d_dly_onerun_done:1;
        RBus_UInt32  i2d_dly_status:2;
        RBus_UInt32  i2d_dly_ok:1;
    };
}ppoverlay_i2d_meas_phase_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dvsync_line_cnt:13;
        RBus_UInt32  res1:16;
        RBus_UInt32  dvsync_dly_int_update:1;
        RBus_UInt32  dvsync_dly_int_en:1;
        RBus_UInt32  pwm_vs_dly_en:1;
    };
}ppoverlay_vrr_dvsync_dly_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm_vs_dly:16;
        RBus_UInt32  pwm_int_dly:16;
    };
}ppoverlay_vrr_dvsync_dly_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dclk_n_cnt:16;
        RBus_UInt32  res1:14;
        RBus_UInt32  dclk_cnt_max_min_reset:1;
        RBus_UInt32  dclk_det_en:1;
    };
}ppoverlay_dtg_dclk_detect_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  min_dclk_n_cnt:16;
        RBus_UInt32  max_dclk_n_cnt:16;
    };
}ppoverlay_dtg_dclk_detect_max_min_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mv_den_end_event_ie_2:1;
        RBus_UInt32  mv_den_sta_event_ie_2:1;
        RBus_UInt32  sv_den_end_event_ie_2:1;
        RBus_UInt32  sv_den_sta_event_ie_2:1;
        RBus_UInt32  dtg_vlc_ie_2:1;
        RBus_UInt32  res1:8;
        RBus_UInt32  dvs_short_event_2:1;
        RBus_UInt32  dvs_long_event_2:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  d_counter_dvs_ie_2:1;
        RBus_UInt32  memcdtgv_den_end_event_ie_2:1;
        RBus_UInt32  memcdtgv_den_sta_event_ie_2:1;
        RBus_UInt32  kiwi_dvs_phase_error_ie_2:1;
        RBus_UInt32  kiwi_den_phase_error_ie_2:1;
        RBus_UInt32  disp_frc2fsync_event_ie_2:1;
        RBus_UInt32  osddtgv_den_end_event_ie_2:1;
        RBus_UInt32  osddtgv_den_sta_event_ie_2:1;
        RBus_UInt32  res3:6;
        RBus_UInt32  ie_fll_track_unlock_2:1;
        RBus_UInt32  dtg_ie_2:1;
    };
}ppoverlay_dtg_ie_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mv_den_end_event_2:1;
        RBus_UInt32  mv_den_sta_event_2:1;
        RBus_UInt32  sv_den_end_event_2:1;
        RBus_UInt32  sv_den_sta_event_2:1;
        RBus_UInt32  dtg_vlc_status_2:1;
        RBus_UInt32  res1:8;
        RBus_UInt32  dvs_short_2:1;
        RBus_UInt32  dvs_long_2:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  d_counter_dvs_irq_2:1;
        RBus_UInt32  memcdtgv_den_end_event_2:1;
        RBus_UInt32  memcdtgv_den_sta_event_2:1;
        RBus_UInt32  kiwi_dvs_phase_error_irq_2:1;
        RBus_UInt32  kiwi_den_phase_error_irq_2:1;
        RBus_UInt32  disp_frc2fsync_event_2:1;
        RBus_UInt32  osddtgv_den_end_event_2:1;
        RBus_UInt32  osddtgv_den_sta_event_2:1;
        RBus_UInt32  res3:8;
    };
}ppoverlay_dtg_pending_status_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mv_den_end_event_ie:1;
        RBus_UInt32  mv_den_sta_event_ie:1;
        RBus_UInt32  sv_den_end_event_ie:1;
        RBus_UInt32  sv_den_sta_event_ie:1;
        RBus_UInt32  dtg_vlc_ie:1;
        RBus_UInt32  auto_switch_x_event_ie:1;
        RBus_UInt32  fix_last_line_more_event_ie:1;
        RBus_UInt32  fix_last_line_less_event_ie:1;
        RBus_UInt32  fix_last_line_more_than_th_event_ie:1;
        RBus_UInt32  fix_last_line_less_than_th_event_ie:1;
        RBus_UInt32  fix_last_line_no_ivs_event_ie:1;
        RBus_UInt32  fix_last_line_ivs_too_close_event_ie:1;
        RBus_UInt32  fll_exit_irq_en:1;
        RBus_UInt32  dvs_short_event:1;
        RBus_UInt32  dvs_long_event:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  d_counter_dvs_ie:1;
        RBus_UInt32  memcdtgv_den_end_event_ie:1;
        RBus_UInt32  memcdtgv_den_sta_event_ie:1;
        RBus_UInt32  kiwi_dvs_phase_error_ie:1;
        RBus_UInt32  kiwi_den_phase_error_ie:1;
        RBus_UInt32  disp_frc2fsync_event_ie:1;
        RBus_UInt32  osddtgv_den_end_event_ie:1;
        RBus_UInt32  osddtgv_den_sta_event_ie:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  ie_fll_track_unlock:1;
        RBus_UInt32  dtg_ie:1;
    };
}ppoverlay_dtg_ie_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mv_den_end_event:1;
        RBus_UInt32  mv_den_sta_event:1;
        RBus_UInt32  sv_den_end_event:1;
        RBus_UInt32  sv_den_sta_event:1;
        RBus_UInt32  dtg_vlc_status:1;
        RBus_UInt32  auto_switch_x_event:1;
        RBus_UInt32  fix_last_line_more_event:1;
        RBus_UInt32  fix_last_line_less_event:1;
        RBus_UInt32  fix_last_line_more_than_th_event:1;
        RBus_UInt32  fix_last_line_less_than_th_event:1;
        RBus_UInt32  fix_last_line_no_ivs_event:1;
        RBus_UInt32  fix_last_line_ivs_too_close_event:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dvs_short:1;
        RBus_UInt32  dvs_long:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  d_counter_dvs_irq:1;
        RBus_UInt32  memcdtgv_den_end_event:1;
        RBus_UInt32  memcdtgv_den_sta_event:1;
        RBus_UInt32  kiwi_dvs_phase_error_irq:1;
        RBus_UInt32  kiwi_den_phase_error_irq:1;
        RBus_UInt32  disp_frc2fsync_event:1;
        RBus_UInt32  osddtgv_den_end_event:1;
        RBus_UInt32  osddtgv_den_sta_event:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  dtg_main_other_reg_is_db:1;
        RBus_UInt32  dtg_main_reg_is_db:1;
        RBus_UInt32  dtg_sub_reg_is_db:1;
        RBus_UInt32  dtg_reg_is_db:1;
        RBus_UInt32  iv2dv_reg_is_db:1;
    };
}ppoverlay_dtg_pending_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  old_fll_unlocked_event:1;
        RBus_UInt32  hlw_bc5_flag:1;
        RBus_UInt32  hlw_bc4_flag:1;
        RBus_UInt32  hlw_bc3_flag:1;
        RBus_UInt32  hlw_bc2_flag:1;
        RBus_UInt32  hlw_bc1_flag:1;
        RBus_UInt32  hlw_error_flag:1;
        RBus_UInt32  memcdtg_fsync_err:1;
        RBus_UInt32  uzudtg_fsync_err:1;
        RBus_UInt32  osddtg_fsync_err:1;
        RBus_UInt32  res1:18;
        RBus_UInt32  sub_watchdog_and:1;
        RBus_UInt32  main_watchdog_and:1;
        RBus_UInt32  sub_watchdog_or:1;
        RBus_UInt32  main_watchdog_or:1;
    };
}ppoverlay_dtg_no_ie_pending_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  watchdog_sub_status:16;
        RBus_UInt32  watchdog_main_status:16;
    };
}ppoverlay_dtg_watchdog_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memc_in_bg_en:1;
        RBus_UInt32  res1:11;
        RBus_UInt32  memc_out_bg_en:1;
        RBus_UInt32  memc_outmux_sel:1;
        RBus_UInt32  memcdtg_golden_vs:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  rtk_bypass_vs_delay:4;
        RBus_UInt32  res3:12;
    };
}ppoverlay_memc_mux_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in_cb_b_value:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  in_y_g_value:12;
        RBus_UInt32  res2:4;
    };
}ppoverlay_memc_mux_in_color_value_gb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in_cr_r_value:12;
        RBus_UInt32  res1:20;
    };
}ppoverlay_memc_mux_in_color_value_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  out_cb_b_value:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  out_y_g_value:12;
        RBus_UInt32  res2:4;
    };
}ppoverlay_memc_mux_out1_color_value_gb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  out_cr_r_value:12;
        RBus_UInt32  res1:20;
    };
}ppoverlay_memc_mux_out1_color_value_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  synthesisn_ratio:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  synthesisn:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  max_multiple_synthesisn:4;
        RBus_UInt32  dv_rst_sscg_sel:1;
        RBus_UInt32  res3:7;
    };
}ppoverlay_fix_last_line_systhesisn_ratio_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lock_th:16;
        RBus_UInt32  t_s:1;
        RBus_UInt32  res1:14;
        RBus_UInt32  offset_ft_lock_en:1;
    };
}ppoverlay_fix_last_line_mode_lock_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  offset_ft:13;
        RBus_UInt32  res1:19;
    };
}ppoverlay_fix_last_line_mode_conter0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  phase_error_ft:24;
        RBus_UInt32  res1:8;
    };
}ppoverlay_fix_last_line_mode_counter1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  wde_fll_track_unlock:1;
        RBus_UInt32  res2:30;
    };
}ppoverlay_fix_last_line_mode_lock_wde_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dtg_vln:13;
        RBus_UInt32  debug_mux:3;
        RBus_UInt32  dtg_vlc_src_sel:2;
        RBus_UInt32  res1:12;
        RBus_UInt32  dtg_vlc_mode:1;
        RBus_UInt32  dtg_vlcen:1;
    };
}ppoverlay_dtg_lc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sram_ok_main_16pix_th:9;
        RBus_UInt32  res1:3;
        RBus_UInt32  sram_ok_main_line_th:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  sram_ok_main_meas_en:1;
        RBus_UInt32  res3:15;
    };
}ppoverlay_sram_ok_main_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pix_cnt_sram_ok_main_odd:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  line_cnt_sram_ok_main_odd:13;
        RBus_UInt32  dummy18028230_31_29:3;
    };
}ppoverlay_sram_ok_main_result_odd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pix_cnt_sram_ok_main_even:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  line_cnt_sram_ok_main_even:13;
        RBus_UInt32  dummy18028234_31_29:3;
    };
}ppoverlay_sram_ok_main_result_even_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sram_ok_sub_16pix_th:9;
        RBus_UInt32  res1:3;
        RBus_UInt32  sram_ok_sub_line_th:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  sram_ok_sub_meas_en:1;
        RBus_UInt32  res3:15;
    };
}ppoverlay_sram_ok_sub_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pix_cnt_sram_ok_sub_odd:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  line_cnt_sram_ok_sub_odd:13;
        RBus_UInt32  dummy1802823c_31_29:3;
    };
}ppoverlay_sram_ok_sub_result_odd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pix_cnt_sram_ok_sub_even:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  line_cnt_sram_ok_sub_even:13;
        RBus_UInt32  dummy18028240_31_29:3;
    };
}ppoverlay_sram_ok_sub_result_even_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rbus_reset:1;
        RBus_UInt32  res1:31;
    };
}ppoverlay_rbus_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line_cnt_rt:13;
        RBus_UInt32  res1:19;
    };
}ppoverlay_new_meas0_linecnt_real_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memcdtg_line_cnt_rt:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  uzudtg_line_cnt_rt:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_new_meas1_linecnt_real_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  uzudtg_dly_line_cnt_rt:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  osddtg_line_cnt_rt:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_new_meas2_linecnt_real_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_not_fs_pixel_value:13;
        RBus_UInt32  res1:1;
        RBus_UInt32  m_overflow_flag:1;
        RBus_UInt32  m_underflow_flag:1;
        RBus_UInt32  m_not_fs_line_value:13;
        RBus_UInt32  res2:1;
        RBus_UInt32  m_field_flag:1;
        RBus_UInt32  m_not_fs_line_pixel_en:1;
    };
}ppoverlay_measure_not_frame_sync_line_pixels_main_path_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_not_fs_pixel_value:13;
        RBus_UInt32  res1:1;
        RBus_UInt32  s_overflow_flag:1;
        RBus_UInt32  s_underflow_flag:1;
        RBus_UInt32  s_not_fs_line_value:13;
        RBus_UInt32  res2:1;
        RBus_UInt32  s_field_flag:1;
        RBus_UInt32  s_not_fs_line_pixel_en:1;
    };
}ppoverlay_measure_not_frame_sync_line_pixels_sub_path_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  d_counter_dvs_set:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  d_counter_dvs_mask:1;
        RBus_UInt32  res2:14;
        RBus_UInt32  d_counter_dvs_en:1;
    };
}ppoverlay_d_domain_counter_dvs_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  less_line_th:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  more_line_th:13;
        RBus_UInt32  res2:2;
        RBus_UInt32  fix_last_line_exit_en:1;
    };
}ppoverlay_fix_last_line_exit_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fll_status_counter:13;
        RBus_UInt32  res1:19;
    };
}ppoverlay_fix_last_line_exit_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wd_fix_last_line_ivs_too_close_en:1;
        RBus_UInt32  wd_fix_last_no_ivs_en:1;
        RBus_UInt32  wd_fix_last_less_than_th_en:1;
        RBus_UInt32  wd_fix_last_more_than_th_en:1;
        RBus_UInt32  wd_fix_last_less_en:1;
        RBus_UInt32  wd_fix_last_more_en:1;
        RBus_UInt32  res1:26;
    };
}ppoverlay_fix_last_line_exit_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pix_cnt_sram_ok_main_left:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  line_cnt_sram_ok_main_left:13;
        RBus_UInt32  dummy180282c4_31_29:3;
    };
}ppoverlay_sram_ok_main_result_left_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pix_cnt_sram_ok_main_right:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  line_cnt_sram_ok_main_right:13;
        RBus_UInt32  dummy180282c8_31_29:3;
    };
}ppoverlay_sram_ok_main_result_right_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dvs_cnt:25;
        RBus_UInt32  res1:7;
    };
}ppoverlay_dvs_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dvs_sscg_cnt:25;
        RBus_UInt32  res1:7;
    };
}ppoverlay_dvs_sscg_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  uzudtg_dvs_cnt:25;
        RBus_UInt32  res1:7;
    };
}ppoverlay_uzudtg_dvs_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osddtg_dvs_cnt:25;
        RBus_UInt32  res1:7;
    };
}ppoverlay_osddtg_dvs_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memcdtg_dvs_cnt:25;
        RBus_UInt32  res1:7;
    };
}ppoverlay_memcdtg_dvs_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ld_spi_irq_record:1;
        RBus_UInt32  od_irq_record:1;
        RBus_UInt32  dctl_irq_record:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  osd_irq_record:1;
        RBus_UInt32  su_sub_irq_record:1;
        RBus_UInt32  su_main_irq_record:1;
        RBus_UInt32  vi_irq_record:1;
        RBus_UInt32  m_plus_irq_record:1;
        RBus_UInt32  d_hist_sub_irq_record:1;
        RBus_UInt32  d_hist_main_irq_record:1;
        RBus_UInt32  dmato3dlut_irq_record:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  dctl_irq_2_record:1;
        RBus_UInt32  res3:13;
    };
}ppoverlay_dispd_irq_record_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispd_testpin_sel:6;
        RBus_UInt32  res1:26;
    };
}ppoverlay_dispd_test_pin_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispd_stage1_clk_front_porch_gated_en:1;
        RBus_UInt32  dispd_stage1_clk_back_porch_gated_en:1;
        RBus_UInt32  dispd_stage2_clk_front_porch_gated_en:1;
        RBus_UInt32  dispd_stage2_clk_back_porch_gated_en:1;
        RBus_UInt32  res1:27;
        RBus_UInt32  porch_gated_en:1;
    };
}ppoverlay_d_clk_porch_gated_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iv2dv_3d_line_r:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  iv2dv_3d_line_l:15;
        RBus_UInt32  dummy18025c44_31:1;
    };
}ppoverlay_fs_iv_dv_fine_tuning3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iv2dv_3d_pixel2_l:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  iv2dv_3d_pixel_r:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_fs_iv_dv_fine_tuning4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy18025c4c_1_0:2;
        RBus_UInt32  iv2dv_toggle_inv:1;
        RBus_UInt32  iv2dv_toggle_en:1;
        RBus_UInt32  res1:22;
        RBus_UInt32  dummy18025c4c_27_26:2;
        RBus_UInt32  iv2dv_3d_flag_inv:1;
        RBus_UInt32  iv2dv_3d_flag_en:1;
        RBus_UInt32  dummy18025c4c_31_30:2;
    };
}ppoverlay_fs_iv_dv_fine_tuning1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iv2dv_pixel2:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  iv2dv_pixel:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_fs_iv_dv_fine_tuning2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iv2dv_line_2:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  iv2dv_line:15;
        RBus_UInt32  dummy18025c58_31:1;
    };
}ppoverlay_fs_iv_dv_fine_tuning5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iv2dv_ih_slf_width:13;
        RBus_UInt32  res1:18;
        RBus_UInt32  iv2dv_ih_slf_gen_en:1;
    };
}ppoverlay_dctl_iv2dv_ihs_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ivs_threshold:28;
        RBus_UInt32  res1:2;
        RBus_UInt32  ivs_over_threshold_int_en:1;
        RBus_UInt32  ivs_over_threshold_err:1;
    };
}ppoverlay_measure_ivs_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  auto_switch_x_en:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  iclk_num:8;
        RBus_UInt32  xclk_min:8;
        RBus_UInt32  xclk_max:8;
    };
}ppoverlay_xtal_count_iclk_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_disp_en:1;
        RBus_UInt32  m_force_bg:1;
        RBus_UInt32  m_bd_trans:1;
        RBus_UInt32  m_hbd_en:1;
        RBus_UInt32  dummy18028300_13_4:10;
        RBus_UInt32  main_wd_to_free_run:1;
        RBus_UInt32  main_wd_to_background:1;
        RBus_UInt32  res1:16;
    };
}ppoverlay_main_display_control_rsv_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_hbd_b:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m_hbd_g:14;
        RBus_UInt32  res2:2;
    };
}ppoverlay_main_border_highlight_border_color1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_hbd_r:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m_bd_b:14;
        RBus_UInt32  res2:2;
    };
}ppoverlay_main_border_highlight_border_color2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_bd_g:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m_bd_r:14;
        RBus_UInt32  res2:2;
    };
}ppoverlay_main_border_highlight_border_color3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_bg_b:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m_bg_g:14;
        RBus_UInt32  res2:2;
    };
}ppoverlay_main_background_color1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_bg_r:14;
        RBus_UInt32  res1:18;
    };
}ppoverlay_main_background_color2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hlw_en:1;
        RBus_UInt32  hlw_mode:2;
        RBus_UInt32  res1:5;
        RBus_UInt32  hlw_update_rate:8;
        RBus_UInt32  res2:16;
    };
}ppoverlay_highlight_window_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hlw_ini_width:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  hlw_h_ini_sta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_highlight_window_h_initial_start_width_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hlw_ini_height:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  hlw_v_ini_sta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_highlight_window_v_initial_start_height_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hlw_height_step:8;
        RBus_UInt32  hlw_v_sta_step:8;
        RBus_UInt32  hlw_width_step:8;
        RBus_UInt32  hlw_h_sta_step:8;
    };
}ppoverlay_highlight_window_update_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hlw_h_bd_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  hlw_h_bd_sta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_highlight_window_h_boundary_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hlw_v_bd_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  hlw_v_bd_sta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_highlight_window_v_boundary_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hlw_cur_width:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  hlw_h_cur_sta_pos:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_highlight_window_h_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hlw_cur_height:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  hlw_v_cur_sta_pos:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_highlight_window_v_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hlw_h_sta_dir_inv_bc4_en:1;
        RBus_UInt32  hlw_h_sta_dir_inv_bc3_en:1;
        RBus_UInt32  hlw_v_sta_dir_inv_bc2_en:1;
        RBus_UInt32  hlw_v_sta_dir_inv_bc1_en:1;
        RBus_UInt32  res1:28;
    };
}ppoverlay_highlight_window_boundary_condition_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hlw_right_bd_w:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  hlw_left_bd_w:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  hlw_down_bd_w:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  hlw_up_bd_w:6;
        RBus_UInt32  res4:2;
    };
}ppoverlay_highlight_window_border_width_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hlw_min_height:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  hlw_min_width:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_highlight_window_min_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mp_hbd_en:1;
        RBus_UInt32  res1:31;
    };
}ppoverlay_mp_disp_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_disp_en:1;
        RBus_UInt32  s_force_bg:1;
        RBus_UInt32  s_bd_trans:1;
        RBus_UInt32  dummy18028384_13_3:11;
        RBus_UInt32  sub_wd_to_free_run:1;
        RBus_UInt32  sub_wd_to_background:1;
        RBus_UInt32  res1:16;
    };
}ppoverlay_mp_layout_force_to_background_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_hbd_b:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  s_hbd_g:14;
        RBus_UInt32  res2:2;
    };
}ppoverlay_sub_border_highlight_border_color1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_hbd_r:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  s_bd_b:14;
        RBus_UInt32  res2:2;
    };
}ppoverlay_sub_border_highlight_border_color2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_bd_g:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  s_bd_r:14;
        RBus_UInt32  res2:2;
    };
}ppoverlay_sub_border_highlight_border_color3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_bg_b:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  s_bg_g:14;
        RBus_UInt32  res2:2;
    };
}ppoverlay_sub_background_color1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_bg_r:14;
        RBus_UInt32  res1:18;
    };
}ppoverlay_sub_background_color2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  left_osd1_offset:11;
        RBus_UInt32  left_osd1_dir:1;
        RBus_UInt32  right_osd1_offset:11;
        RBus_UInt32  right_osd1_dir:1;
        RBus_UInt32  res1:8;
    };
}ppoverlay_osd1_3d_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  left_osd2_offset:11;
        RBus_UInt32  left_osd2_dir:1;
        RBus_UInt32  right_osd2_offset:11;
        RBus_UInt32  right_osd2_dir:1;
        RBus_UInt32  res1:8;
    };
}ppoverlay_osd2_3d_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  left_osd3_offset:11;
        RBus_UInt32  left_osd3_dir:1;
        RBus_UInt32  right_osd3_offset:11;
        RBus_UInt32  right_osd3_dir:1;
        RBus_UInt32  res1:8;
    };
}ppoverlay_osd3_3d_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lflag:1;
        RBus_UInt32  lflag_inv:1;
        RBus_UInt32  lflag_mode_3d:1;
        RBus_UInt32  lflag_free_run:1;
        RBus_UInt32  lflag_mode:1;
        RBus_UInt32  lflag_cnt_reset:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  memcdtg_lflag:1;
        RBus_UInt32  memcdtg_lflag_inv:1;
        RBus_UInt32  memcdtg_lflag_mode_3d:1;
        RBus_UInt32  memcdtg_lflag_free_run:2;
        RBus_UInt32  memcdtg_lflag_mode:1;
        RBus_UInt32  memcdtg_lflag_cnt_reset:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  gdma_subt_lflag_inv:1;
        RBus_UInt32  gdma_subt_line_alt:1;
        RBus_UInt32  gdma_osd_lflag_inv:1;
        RBus_UInt32  gdma_osd_line_alt:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  gibi_blackflag:1;
        RBus_UInt32  gibi_blackflag_en:1;
        RBus_UInt32  gibi_blackflag_mode:1;
    };
}ppoverlay_lflag_gen_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  remove_half_ivs_mode2:5;
        RBus_UInt32  remove_half_ivs_cnt_reset:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  remove_half_ivs_mode:3;
        RBus_UInt32  remove_half_ivs:1;
    };
}ppoverlay_dtg_m_remove_input_vsync_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ivs_cnt_even:25;
        RBus_UInt32  res1:2;
        RBus_UInt32  measure_ivs_cnt_src_sel:1;
        RBus_UInt32  res2:4;
    };
}ppoverlay_ivs_cnt_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ivs_cnt_odd:25;
        RBus_UInt32  res1:7;
    };
}ppoverlay_ivs_cnt_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ivs_cnt_ori:25;
        RBus_UInt32  res1:7;
    };
}ppoverlay_ivs_cnt_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dtg_m_multiple_vsync:6;
        RBus_UInt32  res1:26;
    };
}ppoverlay_dtg_m_multiple_vsync_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  uzudtg_multiple_vsync:6;
        RBus_UInt32  res1:14;
        RBus_UInt32  uzudtg_remove_half_ivs_alignmode:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  uzudtg_remove_half_ivs_cnt_reset:1;
        RBus_UInt32  uzudtg_remove_half_ivs_mode:6;
        RBus_UInt32  uzudtg_remove_half_ivs:1;
        RBus_UInt32  res3:1;
    };
}ppoverlay_uzudtg_fractional_fsync_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memcdtg_multiple_vsync:6;
        RBus_UInt32  res1:14;
        RBus_UInt32  memcdtg_remove_half_ivs_alignmode:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  memcdtg_remove_half_ivs_cnt_reset:1;
        RBus_UInt32  memcdtg_remove_half_ivs_mode:6;
        RBus_UInt32  memcdtg_remove_half_ivs:1;
        RBus_UInt32  res3:1;
    };
}ppoverlay_memcdtg_fractional_fsync_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osddtg_multiple_vsync:6;
        RBus_UInt32  res1:14;
        RBus_UInt32  osddtg_remove_half_ivs_alignmode:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  osddtg_remove_half_ivs_cnt_reset:1;
        RBus_UInt32  osddtg_remove_half_ivs_mode:6;
        RBus_UInt32  osddtg_remove_half_ivs:1;
        RBus_UInt32  res3:1;
    };
}ppoverlay_osddtg_fractional_fsync_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memcdtg_output_frame_cnt:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  memcdtg_input_frame_cnt:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  uzudtg_output_frame_cnt:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  uzudtg_input_frame_cnt:6;
        RBus_UInt32  res4:2;
    };
}ppoverlay_dtg_frame_cnt1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dtg_output_frame_cnt:6;
        RBus_UInt32  res1:10;
        RBus_UInt32  osddtg_output_frame_cnt:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  osddtg_input_frame_cnt:6;
        RBus_UInt32  res3:2;
    };
}ppoverlay_dtg_frame_cnt2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dtg_input_frame_cnt:5;
        RBus_UInt32  res1:27;
    };
}ppoverlay_dtg_frame_cnt3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_osd_dh_width:8;
        RBus_UInt32  res1:24;
    };
}ppoverlay_osd_dtg_dh_width_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_osd_dv_length:8;
        RBus_UInt32  res1:24;
    };
}ppoverlay_osd_dtg_dv_length_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  uzudtg_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  uzudtg_fsync_en:1;
        RBus_UInt32  uzudtg_frc2fsync_by_hw:1;
        RBus_UInt32  uzudtg_frc_fsync_status:1;
        RBus_UInt32  res2:24;
        RBus_UInt32  uzudtg_mode_revised:1;
    };
}ppoverlay_uzudtg_countrol_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  uzudtg_dv_total:13;
        RBus_UInt32  res1:19;
    };
}ppoverlay_uzudtg_dv_total_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  uzudtg_dh_total:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  uzudtg_dh_total_last_line:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_uzudtg_dh_total_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dtgm2uzuvs_pixel:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  dtgm2uzuvs_line:13;
        RBus_UInt32  res2:1;
        RBus_UInt32  uzu_4k_120_mode:1;
        RBus_UInt32  two_step_uzu_en:1;
    };
}ppoverlay_uzudtg_control1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dtgm2uzu_s1_vs_pixel:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  dtgm2uzu_s1_vs_line:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_uzudtg_control2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_den_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  dh_den_sta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_dh_den_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dv_den_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  dv_den_sta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_dv_den_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mh_den_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  mh_den_sta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_main_den_h_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mv_den_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  mv_den_sta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_main_den_v_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mh_bg_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  mh_bg_sta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_main_background_h_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mv_bg_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  mv_bg_sta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_main_background_v_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mh_act_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  mh_act_sta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_main_active_h_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mv_act_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  mv_act_sta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_main_active_v_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sh_den_width:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  sh_den_sta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_sub_den_h_start_width_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sv_den_length:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  sv_den_sta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_sub_den_v_start_length_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sh_bg_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  sh_bg_sta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_sub_background_h_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sv_bg_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  sv_bg_sta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_sub_background_v_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sh_act_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  sh_act_sta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_sub_active_h_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sv_act_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  sv_act_sta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_sub_active_v_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_act_rad_a:22;
        RBus_UInt32  res1:10;
    };
}ppoverlay_sub_active_rad_a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_bg_rad_a:22;
        RBus_UInt32  res1:10;
    };
}ppoverlay_sub_background_rad_a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_den_rad_a:22;
        RBus_UInt32  res1:10;
    };
}ppoverlay_sub_den_rad_a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_circle_center_h:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  sub_circle_center_v:14;
        RBus_UInt32  sub_window_form_sel:1;
        RBus_UInt32  res2:1;
    };
}ppoverlay_sub_circle_center_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memcdtg_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  memcdtg_fsync_en:1;
        RBus_UInt32  memcdtg_frc2fsync_by_hw:1;
        RBus_UInt32  memcdtg_frc_fsync_status:1;
        RBus_UInt32  res2:24;
        RBus_UInt32  memcdtg_mode_revised:1;
    };
}ppoverlay_memcdtg_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memcdtg_dv_total:13;
        RBus_UInt32  res1:19;
    };
}ppoverlay_memcdtg_dv_total_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memcdtg_dh_total:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  memcdtg_dh_total_last_line:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_memcdtg_dh_total_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memcdtg_dv_den_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  memcdtg_dv_den_sta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_memcdtg_dv_den_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memcdtg_dh_den_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  memcdtg_dh_den_sta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_memcdtg_dh_den_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memcdtg_dv_video_blend_region_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  memcdtg_dv_video_blend_region_sta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_memcdtg_dv_video_blending_region_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memcdtg_dh_video_blend_region_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  memcdtg_dh_video_blend_region_sta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_memcdtg_dh_video_blending_region_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dtgm2orbitvs_pixel_sft:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  dtgm2orbitvs_line_sft:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_memcdtg_control_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dtgm2kiwiprevs_pixel:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  dtgm2kiwiprevs_line:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_memcdtg_control2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dtgm2goldenpostvs_pixel:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  dtgm2goldenpostvs_line:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_memcdtg_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kiwi_dvs_phase_error:22;
        RBus_UInt32  kiwi_dvs_phase_error_po:1;
        RBus_UInt32  kiwi_dvs_phase_error_flag:1;
        RBus_UInt32  kiwi_dvs_phase_error_cntr:1;
        RBus_UInt32  res1:7;
    };
}ppoverlay_measure_kiwi_dvs_phase_error_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kiwi_den_phase_error:22;
        RBus_UInt32  kiwi_den_phase_error_po:1;
        RBus_UInt32  kiwi_den_phase_error_flag:1;
        RBus_UInt32  kiwi_den_phase_error_cntr:1;
        RBus_UInt32  res1:7;
    };
}ppoverlay_measure_kiwi_den_phase_error_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memcmux_rw_den_phase_error:22;
        RBus_UInt32  memcmux_rw_den_phase_error_po:1;
        RBus_UInt32  memcmux_rw_den_phase_error_flag:1;
        RBus_UInt32  memcmux_rw_den_phase_error_cntr:1;
        RBus_UInt32  res1:7;
    };
}ppoverlay_measure_memcmux_rw_den_phase_error_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osddtg_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  osddtg_fsync_en:1;
        RBus_UInt32  osddtg_frc2fsync_by_hw:1;
        RBus_UInt32  osddtg_frc_fsync_status:1;
        RBus_UInt32  osd_split:1;
        RBus_UInt32  dtg_force_bypass_osd_blend:1;
        RBus_UInt32  res2:22;
        RBus_UInt32  osddtg_mode_revised:1;
    };
}ppoverlay_osddtg_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osddtg_dv_total:13;
        RBus_UInt32  res1:19;
    };
}ppoverlay_osddtg_dv_total_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osddtg_dh_total:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  osddtg_dh_total_last_line:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_osddtg_dh_total_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osddtg_dv_den_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  osddtg_dv_den_sta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_osddtg_dv_den_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osddtg_dh_den_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  osddtg_dh_den_sta:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_osddtg_dh_den_start_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dtgm2osdvs_pixel:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  dtgm2osdvs_line:13;
        RBus_UInt32  res2:3;
    };
}ppoverlay_osddtg_control2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_split_smooth_toggle_apply:1;
        RBus_UInt32  res1:31;
    };
}ppoverlay_osd_split_smooth_toggle_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_split_smooth_toggle_debug:32;
    };
}ppoverlay_osd_split_smooth_toggle_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  timing_monitor_end1:4;
        RBus_UInt32  timing_monitor_sta1:4;
        RBus_UInt32  timing_monitor_end0:4;
        RBus_UInt32  timing_monitor_sta0:4;
        RBus_UInt32  res1:8;
        RBus_UInt32  timing_monitor_compare:2;
        RBus_UInt32  timing_monitor_multi_mode:1;
        RBus_UInt32  timing_monitor_unit:1;
        RBus_UInt32  timing_monitor_src:1;
        RBus_UInt32  timing_monitor_i2rnd_mode:2;
        RBus_UInt32  timing_monitor_en:1;
    };
}ppoverlay_dispd_timing_monitor_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  timing_monitor_end5:4;
        RBus_UInt32  timing_monitor_sta5:4;
        RBus_UInt32  timing_monitor_end4:4;
        RBus_UInt32  timing_monitor_sta4:4;
        RBus_UInt32  timing_monitor_end3:4;
        RBus_UInt32  timing_monitor_sta3:4;
        RBus_UInt32  timing_monitor_end2:4;
        RBus_UInt32  timing_monitor_sta2:4;
    };
}ppoverlay_dispd_timing_monitor_multi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_compare_th:28;
        RBus_UInt32  res1:4;
    };
}ppoverlay_dispd_timing_monitor_compare_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_golden:28;
        RBus_UInt32  res1:4;
    };
}ppoverlay_dispd_timing_monitor_golden_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_result_previous1:28;
        RBus_UInt32  res1:4;
    };
}ppoverlay_dispd_timing_monitor_result1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_result_previous2:28;
        RBus_UInt32  res1:4;
    };
}ppoverlay_dispd_timing_monitor_result2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_result_previous3:28;
        RBus_UInt32  res1:4;
    };
}ppoverlay_dispd_timing_monitor_result3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_result_previous4:28;
        RBus_UInt32  res1:4;
    };
}ppoverlay_dispd_timing_monitor_result4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_result_max:28;
        RBus_UInt32  res1:4;
    };
}ppoverlay_dispd_timing_monitor_max_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_result_min:28;
        RBus_UInt32  res1:4;
    };
}ppoverlay_dispd_timing_monitor_min_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vsync_hit_den_error:1;
        RBus_UInt32  hsync_hit_den_error:1;
        RBus_UInt32  compare_hit:1;
        RBus_UInt32  res1:29;
    };
}ppoverlay_dispd_timing_monitor_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180287ac_31_0:32;
    };
}ppoverlay_dtg_dummy_reg_1_RBUS;




#endif 


#endif 
