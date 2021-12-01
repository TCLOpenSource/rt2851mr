/**
* @file Merlin5-DesignSpec-I-Domain-DeXCXL
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_DE_XCXL_REG_H_
#define _RBUS_DE_XCXL_REG_H_

#include "rbus_types.h"



//  DE_XCXL Register Address
#define  DE_XCXL_De_XCXL_CTRL                                                   0x18023900
#define  DE_XCXL_De_XCXL_CTRL_reg_addr                                           "0xB8023900"
#define  DE_XCXL_De_XCXL_CTRL_reg                                                0xB8023900
#define  DE_XCXL_De_XCXL_CTRL_inst_addr                                          "0x0000"
#define  set_DE_XCXL_De_XCXL_CTRL_reg(data)                                      (*((volatile unsigned int*)DE_XCXL_De_XCXL_CTRL_reg)=data)
#define  get_DE_XCXL_De_XCXL_CTRL_reg                                            (*((volatile unsigned int*)DE_XCXL_De_XCXL_CTRL_reg))
#define  DE_XCXL_De_XCXL_CTRL_vo_pause_en_shift                                  (31)
#define  DE_XCXL_De_XCXL_CTRL_dexc_info_rolling_en_shift                         (11)
#define  DE_XCXL_De_XCXL_CTRL_dexc_info_comp_shift                               (10)
#define  DE_XCXL_De_XCXL_CTRL_dexc_data_format_shift                             (9)
#define  DE_XCXL_De_XCXL_CTRL_dexc_detect_type_shift                             (7)
#define  DE_XCXL_De_XCXL_CTRL_sm_size_change_hw_detect_en_shift                  (6)
#define  DE_XCXL_De_XCXL_CTRL_dexc_reset_shift                                   (5)
#define  DE_XCXL_De_XCXL_CTRL_dexc_spatial_correction_en_shift                   (4)
#define  DE_XCXL_De_XCXL_CTRL_dexc_debug_en_shift                                (3)
#define  DE_XCXL_De_XCXL_CTRL_dexc_debug_mode_shift                              (1)
#define  DE_XCXL_De_XCXL_CTRL_dexc_en_shift                                      (0)
#define  DE_XCXL_De_XCXL_CTRL_vo_pause_en_mask                                   (0x80000000)
#define  DE_XCXL_De_XCXL_CTRL_dexc_info_rolling_en_mask                          (0x00000800)
#define  DE_XCXL_De_XCXL_CTRL_dexc_info_comp_mask                                (0x00000400)
#define  DE_XCXL_De_XCXL_CTRL_dexc_data_format_mask                              (0x00000200)
#define  DE_XCXL_De_XCXL_CTRL_dexc_detect_type_mask                              (0x00000180)
#define  DE_XCXL_De_XCXL_CTRL_sm_size_change_hw_detect_en_mask                   (0x00000040)
#define  DE_XCXL_De_XCXL_CTRL_dexc_reset_mask                                    (0x00000020)
#define  DE_XCXL_De_XCXL_CTRL_dexc_spatial_correction_en_mask                    (0x00000010)
#define  DE_XCXL_De_XCXL_CTRL_dexc_debug_en_mask                                 (0x00000008)
#define  DE_XCXL_De_XCXL_CTRL_dexc_debug_mode_mask                               (0x00000006)
#define  DE_XCXL_De_XCXL_CTRL_dexc_en_mask                                       (0x00000001)
#define  DE_XCXL_De_XCXL_CTRL_vo_pause_en(data)                                  (0x80000000&((data)<<31))
#define  DE_XCXL_De_XCXL_CTRL_dexc_info_rolling_en(data)                         (0x00000800&((data)<<11))
#define  DE_XCXL_De_XCXL_CTRL_dexc_info_comp(data)                               (0x00000400&((data)<<10))
#define  DE_XCXL_De_XCXL_CTRL_dexc_data_format(data)                             (0x00000200&((data)<<9))
#define  DE_XCXL_De_XCXL_CTRL_dexc_detect_type(data)                             (0x00000180&((data)<<7))
#define  DE_XCXL_De_XCXL_CTRL_sm_size_change_hw_detect_en(data)                  (0x00000040&((data)<<6))
#define  DE_XCXL_De_XCXL_CTRL_dexc_reset(data)                                   (0x00000020&((data)<<5))
#define  DE_XCXL_De_XCXL_CTRL_dexc_spatial_correction_en(data)                   (0x00000010&((data)<<4))
#define  DE_XCXL_De_XCXL_CTRL_dexc_debug_en(data)                                (0x00000008&((data)<<3))
#define  DE_XCXL_De_XCXL_CTRL_dexc_debug_mode(data)                              (0x00000006&((data)<<1))
#define  DE_XCXL_De_XCXL_CTRL_dexc_en(data)                                      (0x00000001&(data))
#define  DE_XCXL_De_XCXL_CTRL_get_vo_pause_en(data)                              ((0x80000000&(data))>>31)
#define  DE_XCXL_De_XCXL_CTRL_get_dexc_info_rolling_en(data)                     ((0x00000800&(data))>>11)
#define  DE_XCXL_De_XCXL_CTRL_get_dexc_info_comp(data)                           ((0x00000400&(data))>>10)
#define  DE_XCXL_De_XCXL_CTRL_get_dexc_data_format(data)                         ((0x00000200&(data))>>9)
#define  DE_XCXL_De_XCXL_CTRL_get_dexc_detect_type(data)                         ((0x00000180&(data))>>7)
#define  DE_XCXL_De_XCXL_CTRL_get_sm_size_change_hw_detect_en(data)              ((0x00000040&(data))>>6)
#define  DE_XCXL_De_XCXL_CTRL_get_dexc_reset(data)                               ((0x00000020&(data))>>5)
#define  DE_XCXL_De_XCXL_CTRL_get_dexc_spatial_correction_en(data)               ((0x00000010&(data))>>4)
#define  DE_XCXL_De_XCXL_CTRL_get_dexc_debug_en(data)                            ((0x00000008&(data))>>3)
#define  DE_XCXL_De_XCXL_CTRL_get_dexc_debug_mode(data)                          ((0x00000006&(data))>>1)
#define  DE_XCXL_De_XCXL_CTRL_get_dexc_en(data)                                  (0x00000001&(data))

#define  DE_XCXL_De_XCXL_TEMPORAL_STEP                                          0x18023904
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_reg_addr                                  "0xB8023904"
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_reg                                       0xB8023904
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_inst_addr                                 "0x0001"
#define  set_DE_XCXL_De_XCXL_TEMPORAL_STEP_reg(data)                             (*((volatile unsigned int*)DE_XCXL_De_XCXL_TEMPORAL_STEP_reg)=data)
#define  get_DE_XCXL_De_XCXL_TEMPORAL_STEP_reg                                   (*((volatile unsigned int*)DE_XCXL_De_XCXL_TEMPORAL_STEP_reg))
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_dexc_hold_th_shift                        (16)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_dexc_step_lv1_shift                       (12)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_dexc_step_lv2_shift                       (8)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_dexc_step_still_shift                     (4)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_dexc_step_notxc_shift                     (0)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_dexc_hold_th_mask                         (0x003F0000)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_dexc_step_lv1_mask                        (0x0000F000)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_dexc_step_lv2_mask                        (0x00000F00)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_dexc_step_still_mask                      (0x000000F0)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_dexc_step_notxc_mask                      (0x0000000F)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_dexc_hold_th(data)                        (0x003F0000&((data)<<16))
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_dexc_step_lv1(data)                       (0x0000F000&((data)<<12))
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_dexc_step_lv2(data)                       (0x00000F00&((data)<<8))
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_dexc_step_still(data)                     (0x000000F0&((data)<<4))
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_dexc_step_notxc(data)                     (0x0000000F&(data))
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_get_dexc_hold_th(data)                    ((0x003F0000&(data))>>16)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_get_dexc_step_lv1(data)                   ((0x0000F000&(data))>>12)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_get_dexc_step_lv2(data)                   ((0x00000F00&(data))>>8)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_get_dexc_step_still(data)                 ((0x000000F0&(data))>>4)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_get_dexc_step_notxc(data)                 (0x0000000F&(data))

#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL                                      0x180239E8
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_reg_addr                              "0xB80239E8"
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_reg                                   0xB80239E8
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_inst_addr                             "0x0002"
#define  set_DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_reg(data)                         (*((volatile unsigned int*)DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_reg)=data)
#define  get_DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_reg                               (*((volatile unsigned int*)DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_reg))
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_dexc_hold_th_pal_shift                (16)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_dexc_step_lv1_pal_shift               (12)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_dexc_step_lv2_pal_shift               (8)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_dexc_step_still_pal_shift             (4)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_dexc_step_notxc_pal_shift             (0)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_dexc_hold_th_pal_mask                 (0x003F0000)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_dexc_step_lv1_pal_mask                (0x0000F000)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_dexc_step_lv2_pal_mask                (0x00000F00)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_dexc_step_still_pal_mask              (0x000000F0)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_dexc_step_notxc_pal_mask              (0x0000000F)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_dexc_hold_th_pal(data)                (0x003F0000&((data)<<16))
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_dexc_step_lv1_pal(data)               (0x0000F000&((data)<<12))
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_dexc_step_lv2_pal(data)               (0x00000F00&((data)<<8))
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_dexc_step_still_pal(data)             (0x000000F0&((data)<<4))
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_dexc_step_notxc_pal(data)             (0x0000000F&(data))
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_get_dexc_hold_th_pal(data)            ((0x003F0000&(data))>>16)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_get_dexc_step_lv1_pal(data)           ((0x0000F000&(data))>>12)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_get_dexc_step_lv2_pal(data)           ((0x00000F00&(data))>>8)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_get_dexc_step_still_pal(data)         ((0x000000F0&(data))>>4)
#define  DE_XCXL_De_XCXL_TEMPORAL_STEP_PAL_get_dexc_step_notxc_pal(data)         (0x0000000F&(data))

#define  DE_XCXL_De_XCXL_CLASSIFY_Y                                             0x18023908
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_reg_addr                                     "0xB8023908"
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_reg                                          0xB8023908
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_inst_addr                                    "0x0003"
#define  set_DE_XCXL_De_XCXL_CLASSIFY_Y_reg(data)                                (*((volatile unsigned int*)DE_XCXL_De_XCXL_CLASSIFY_Y_reg)=data)
#define  get_DE_XCXL_De_XCXL_CLASSIFY_Y_reg                                      (*((volatile unsigned int*)DE_XCXL_De_XCXL_CLASSIFY_Y_reg))
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_dexc_y_error_th1_shift                       (20)
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_dexc_y_error_th2_shift                       (10)
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_dexc_y_amp_th_shift                          (0)
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_dexc_y_error_th1_mask                        (0x3FF00000)
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_dexc_y_error_th2_mask                        (0x000FFC00)
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_dexc_y_amp_th_mask                           (0x000003FF)
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_dexc_y_error_th1(data)                       (0x3FF00000&((data)<<20))
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_dexc_y_error_th2(data)                       (0x000FFC00&((data)<<10))
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_dexc_y_amp_th(data)                          (0x000003FF&(data))
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_get_dexc_y_error_th1(data)                   ((0x3FF00000&(data))>>20)
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_get_dexc_y_error_th2(data)                   ((0x000FFC00&(data))>>10)
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_get_dexc_y_amp_th(data)                      (0x000003FF&(data))

#define  DE_XCXL_De_XCXL_CLASSIFY_Y_PAL                                         0x180239EC
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_PAL_reg_addr                                 "0xB80239EC"
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_PAL_reg                                      0xB80239EC
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_PAL_inst_addr                                "0x0004"
#define  set_DE_XCXL_De_XCXL_CLASSIFY_Y_PAL_reg(data)                            (*((volatile unsigned int*)DE_XCXL_De_XCXL_CLASSIFY_Y_PAL_reg)=data)
#define  get_DE_XCXL_De_XCXL_CLASSIFY_Y_PAL_reg                                  (*((volatile unsigned int*)DE_XCXL_De_XCXL_CLASSIFY_Y_PAL_reg))
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_PAL_dexc_y_error_th1_pal_shift               (20)
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_PAL_dexc_y_error_th2_pal_shift               (10)
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_PAL_dexc_y_amp_th_pal_shift                  (0)
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_PAL_dexc_y_error_th1_pal_mask                (0x3FF00000)
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_PAL_dexc_y_error_th2_pal_mask                (0x000FFC00)
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_PAL_dexc_y_amp_th_pal_mask                   (0x000003FF)
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_PAL_dexc_y_error_th1_pal(data)               (0x3FF00000&((data)<<20))
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_PAL_dexc_y_error_th2_pal(data)               (0x000FFC00&((data)<<10))
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_PAL_dexc_y_amp_th_pal(data)                  (0x000003FF&(data))
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_PAL_get_dexc_y_error_th1_pal(data)           ((0x3FF00000&(data))>>20)
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_PAL_get_dexc_y_error_th2_pal(data)           ((0x000FFC00&(data))>>10)
#define  DE_XCXL_De_XCXL_CLASSIFY_Y_PAL_get_dexc_y_amp_th_pal(data)              (0x000003FF&(data))

#define  DE_XCXL_De_XCXL_CLASSIFY_C                                             0x1802390C
#define  DE_XCXL_De_XCXL_CLASSIFY_C_reg_addr                                     "0xB802390C"
#define  DE_XCXL_De_XCXL_CLASSIFY_C_reg                                          0xB802390C
#define  DE_XCXL_De_XCXL_CLASSIFY_C_inst_addr                                    "0x0005"
#define  set_DE_XCXL_De_XCXL_CLASSIFY_C_reg(data)                                (*((volatile unsigned int*)DE_XCXL_De_XCXL_CLASSIFY_C_reg)=data)
#define  get_DE_XCXL_De_XCXL_CLASSIFY_C_reg                                      (*((volatile unsigned int*)DE_XCXL_De_XCXL_CLASSIFY_C_reg))
#define  DE_XCXL_De_XCXL_CLASSIFY_C_dexc_c_error_th1_shift                       (20)
#define  DE_XCXL_De_XCXL_CLASSIFY_C_dexc_c_error_th2_shift                       (10)
#define  DE_XCXL_De_XCXL_CLASSIFY_C_dexc_c_amp_th_shift                          (0)
#define  DE_XCXL_De_XCXL_CLASSIFY_C_dexc_c_error_th1_mask                        (0x3FF00000)
#define  DE_XCXL_De_XCXL_CLASSIFY_C_dexc_c_error_th2_mask                        (0x000FFC00)
#define  DE_XCXL_De_XCXL_CLASSIFY_C_dexc_c_amp_th_mask                           (0x000003FF)
#define  DE_XCXL_De_XCXL_CLASSIFY_C_dexc_c_error_th1(data)                       (0x3FF00000&((data)<<20))
#define  DE_XCXL_De_XCXL_CLASSIFY_C_dexc_c_error_th2(data)                       (0x000FFC00&((data)<<10))
#define  DE_XCXL_De_XCXL_CLASSIFY_C_dexc_c_amp_th(data)                          (0x000003FF&(data))
#define  DE_XCXL_De_XCXL_CLASSIFY_C_get_dexc_c_error_th1(data)                   ((0x3FF00000&(data))>>20)
#define  DE_XCXL_De_XCXL_CLASSIFY_C_get_dexc_c_error_th2(data)                   ((0x000FFC00&(data))>>10)
#define  DE_XCXL_De_XCXL_CLASSIFY_C_get_dexc_c_amp_th(data)                      (0x000003FF&(data))

#define  DE_XCXL_De_XCXL_CLASSIFY_C_PAL                                         0x180239F0
#define  DE_XCXL_De_XCXL_CLASSIFY_C_PAL_reg_addr                                 "0xB80239F0"
#define  DE_XCXL_De_XCXL_CLASSIFY_C_PAL_reg                                      0xB80239F0
#define  DE_XCXL_De_XCXL_CLASSIFY_C_PAL_inst_addr                                "0x0006"
#define  set_DE_XCXL_De_XCXL_CLASSIFY_C_PAL_reg(data)                            (*((volatile unsigned int*)DE_XCXL_De_XCXL_CLASSIFY_C_PAL_reg)=data)
#define  get_DE_XCXL_De_XCXL_CLASSIFY_C_PAL_reg                                  (*((volatile unsigned int*)DE_XCXL_De_XCXL_CLASSIFY_C_PAL_reg))
#define  DE_XCXL_De_XCXL_CLASSIFY_C_PAL_dexc_c_error_th1_pal_shift               (20)
#define  DE_XCXL_De_XCXL_CLASSIFY_C_PAL_dexc_c_error_th2_pal_shift               (10)
#define  DE_XCXL_De_XCXL_CLASSIFY_C_PAL_dexc_c_amp_th_pal_shift                  (0)
#define  DE_XCXL_De_XCXL_CLASSIFY_C_PAL_dexc_c_error_th1_pal_mask                (0x3FF00000)
#define  DE_XCXL_De_XCXL_CLASSIFY_C_PAL_dexc_c_error_th2_pal_mask                (0x000FFC00)
#define  DE_XCXL_De_XCXL_CLASSIFY_C_PAL_dexc_c_amp_th_pal_mask                   (0x000003FF)
#define  DE_XCXL_De_XCXL_CLASSIFY_C_PAL_dexc_c_error_th1_pal(data)               (0x3FF00000&((data)<<20))
#define  DE_XCXL_De_XCXL_CLASSIFY_C_PAL_dexc_c_error_th2_pal(data)               (0x000FFC00&((data)<<10))
#define  DE_XCXL_De_XCXL_CLASSIFY_C_PAL_dexc_c_amp_th_pal(data)                  (0x000003FF&(data))
#define  DE_XCXL_De_XCXL_CLASSIFY_C_PAL_get_dexc_c_error_th1_pal(data)           ((0x3FF00000&(data))>>20)
#define  DE_XCXL_De_XCXL_CLASSIFY_C_PAL_get_dexc_c_error_th2_pal(data)           ((0x000FFC00&(data))>>10)
#define  DE_XCXL_De_XCXL_CLASSIFY_C_PAL_get_dexc_c_amp_th_pal(data)              (0x000003FF&(data))

#define  DE_XCXL_De_XCXL_BLEND                                                  0x18023910
#define  DE_XCXL_De_XCXL_BLEND_reg_addr                                          "0xB8023910"
#define  DE_XCXL_De_XCXL_BLEND_reg                                               0xB8023910
#define  DE_XCXL_De_XCXL_BLEND_inst_addr                                         "0x0007"
#define  set_DE_XCXL_De_XCXL_BLEND_reg(data)                                     (*((volatile unsigned int*)DE_XCXL_De_XCXL_BLEND_reg)=data)
#define  get_DE_XCXL_De_XCXL_BLEND_reg                                           (*((volatile unsigned int*)DE_XCXL_De_XCXL_BLEND_reg))
#define  DE_XCXL_De_XCXL_BLEND_dexc_blending_table_7_shift                       (28)
#define  DE_XCXL_De_XCXL_BLEND_dexc_blending_table_6_shift                       (24)
#define  DE_XCXL_De_XCXL_BLEND_dexc_blending_table_5_shift                       (20)
#define  DE_XCXL_De_XCXL_BLEND_dexc_blending_table_4_shift                       (16)
#define  DE_XCXL_De_XCXL_BLEND_dexc_blending_table_3_shift                       (12)
#define  DE_XCXL_De_XCXL_BLEND_dexc_blending_table_2_shift                       (8)
#define  DE_XCXL_De_XCXL_BLEND_dexc_blending_table_1_shift                       (4)
#define  DE_XCXL_De_XCXL_BLEND_dexc_blending_table_0_shift                       (0)
#define  DE_XCXL_De_XCXL_BLEND_dexc_blending_table_7_mask                        (0xF0000000)
#define  DE_XCXL_De_XCXL_BLEND_dexc_blending_table_6_mask                        (0x0F000000)
#define  DE_XCXL_De_XCXL_BLEND_dexc_blending_table_5_mask                        (0x00F00000)
#define  DE_XCXL_De_XCXL_BLEND_dexc_blending_table_4_mask                        (0x000F0000)
#define  DE_XCXL_De_XCXL_BLEND_dexc_blending_table_3_mask                        (0x0000F000)
#define  DE_XCXL_De_XCXL_BLEND_dexc_blending_table_2_mask                        (0x00000F00)
#define  DE_XCXL_De_XCXL_BLEND_dexc_blending_table_1_mask                        (0x000000F0)
#define  DE_XCXL_De_XCXL_BLEND_dexc_blending_table_0_mask                        (0x0000000F)
#define  DE_XCXL_De_XCXL_BLEND_dexc_blending_table_7(data)                       (0xF0000000&((data)<<28))
#define  DE_XCXL_De_XCXL_BLEND_dexc_blending_table_6(data)                       (0x0F000000&((data)<<24))
#define  DE_XCXL_De_XCXL_BLEND_dexc_blending_table_5(data)                       (0x00F00000&((data)<<20))
#define  DE_XCXL_De_XCXL_BLEND_dexc_blending_table_4(data)                       (0x000F0000&((data)<<16))
#define  DE_XCXL_De_XCXL_BLEND_dexc_blending_table_3(data)                       (0x0000F000&((data)<<12))
#define  DE_XCXL_De_XCXL_BLEND_dexc_blending_table_2(data)                       (0x00000F00&((data)<<8))
#define  DE_XCXL_De_XCXL_BLEND_dexc_blending_table_1(data)                       (0x000000F0&((data)<<4))
#define  DE_XCXL_De_XCXL_BLEND_dexc_blending_table_0(data)                       (0x0000000F&(data))
#define  DE_XCXL_De_XCXL_BLEND_get_dexc_blending_table_7(data)                   ((0xF0000000&(data))>>28)
#define  DE_XCXL_De_XCXL_BLEND_get_dexc_blending_table_6(data)                   ((0x0F000000&(data))>>24)
#define  DE_XCXL_De_XCXL_BLEND_get_dexc_blending_table_5(data)                   ((0x00F00000&(data))>>20)
#define  DE_XCXL_De_XCXL_BLEND_get_dexc_blending_table_4(data)                   ((0x000F0000&(data))>>16)
#define  DE_XCXL_De_XCXL_BLEND_get_dexc_blending_table_3(data)                   ((0x0000F000&(data))>>12)
#define  DE_XCXL_De_XCXL_BLEND_get_dexc_blending_table_2(data)                   ((0x00000F00&(data))>>8)
#define  DE_XCXL_De_XCXL_BLEND_get_dexc_blending_table_1(data)                   ((0x000000F0&(data))>>4)
#define  DE_XCXL_De_XCXL_BLEND_get_dexc_blending_table_0(data)                   (0x0000000F&(data))

#define  DE_XCXL_De_XCXL_WEIGHT                                                 0x180239FC
#define  DE_XCXL_De_XCXL_WEIGHT_reg_addr                                         "0xB80239FC"
#define  DE_XCXL_De_XCXL_WEIGHT_reg                                              0xB80239FC
#define  DE_XCXL_De_XCXL_WEIGHT_inst_addr                                        "0x0008"
#define  set_DE_XCXL_De_XCXL_WEIGHT_reg(data)                                    (*((volatile unsigned int*)DE_XCXL_De_XCXL_WEIGHT_reg)=data)
#define  get_DE_XCXL_De_XCXL_WEIGHT_reg                                          (*((volatile unsigned int*)DE_XCXL_De_XCXL_WEIGHT_reg))
#define  DE_XCXL_De_XCXL_WEIGHT_dexc_count_weighting_th_ntsc_shift               (16)
#define  DE_XCXL_De_XCXL_WEIGHT_dexc_count_weighting_th_pal_shift                (0)
#define  DE_XCXL_De_XCXL_WEIGHT_dexc_count_weighting_th_ntsc_mask                (0x003F0000)
#define  DE_XCXL_De_XCXL_WEIGHT_dexc_count_weighting_th_pal_mask                 (0x0000003F)
#define  DE_XCXL_De_XCXL_WEIGHT_dexc_count_weighting_th_ntsc(data)               (0x003F0000&((data)<<16))
#define  DE_XCXL_De_XCXL_WEIGHT_dexc_count_weighting_th_pal(data)                (0x0000003F&(data))
#define  DE_XCXL_De_XCXL_WEIGHT_get_dexc_count_weighting_th_ntsc(data)           ((0x003F0000&(data))>>16)
#define  DE_XCXL_De_XCXL_WEIGHT_get_dexc_count_weighting_th_pal(data)            (0x0000003F&(data))

#define  DE_XCXL_De_XCXL_XL                                                     0x18023914
#define  DE_XCXL_De_XCXL_XL_reg_addr                                             "0xB8023914"
#define  DE_XCXL_De_XCXL_XL_reg                                                  0xB8023914
#define  DE_XCXL_De_XCXL_XL_inst_addr                                            "0x0009"
#define  set_DE_XCXL_De_XCXL_XL_reg(data)                                        (*((volatile unsigned int*)DE_XCXL_De_XCXL_XL_reg)=data)
#define  get_DE_XCXL_De_XCXL_XL_reg                                              (*((volatile unsigned int*)DE_XCXL_De_XCXL_XL_reg))
#define  DE_XCXL_De_XCXL_XL_dexc_xl_count_shift                                  (0)
#define  DE_XCXL_De_XCXL_XL_dexc_xl_count_mask                                   (0x001FFFFF)
#define  DE_XCXL_De_XCXL_XL_dexc_xl_count(data)                                  (0x001FFFFF&(data))
#define  DE_XCXL_De_XCXL_XL_get_dexc_xl_count(data)                              (0x001FFFFF&(data))

#define  DE_XCXL_De_XCXL_XC                                                     0x18023918
#define  DE_XCXL_De_XCXL_XC_reg_addr                                             "0xB8023918"
#define  DE_XCXL_De_XCXL_XC_reg                                                  0xB8023918
#define  DE_XCXL_De_XCXL_XC_inst_addr                                            "0x000A"
#define  set_DE_XCXL_De_XCXL_XC_reg(data)                                        (*((volatile unsigned int*)DE_XCXL_De_XCXL_XC_reg)=data)
#define  get_DE_XCXL_De_XCXL_XC_reg                                              (*((volatile unsigned int*)DE_XCXL_De_XCXL_XC_reg))
#define  DE_XCXL_De_XCXL_XC_dexc_xc_count_shift                                  (0)
#define  DE_XCXL_De_XCXL_XC_dexc_xc_count_mask                                   (0x001FFFFF)
#define  DE_XCXL_De_XCXL_XC_dexc_xc_count(data)                                  (0x001FFFFF&(data))
#define  DE_XCXL_De_XCXL_XC_get_dexc_xc_count(data)                              (0x001FFFFF&(data))

#define  DE_XCXL_De_XCXL_XL_PAL                                                 0x180239F4
#define  DE_XCXL_De_XCXL_XL_PAL_reg_addr                                         "0xB80239F4"
#define  DE_XCXL_De_XCXL_XL_PAL_reg                                              0xB80239F4
#define  DE_XCXL_De_XCXL_XL_PAL_inst_addr                                        "0x000B"
#define  set_DE_XCXL_De_XCXL_XL_PAL_reg(data)                                    (*((volatile unsigned int*)DE_XCXL_De_XCXL_XL_PAL_reg)=data)
#define  get_DE_XCXL_De_XCXL_XL_PAL_reg                                          (*((volatile unsigned int*)DE_XCXL_De_XCXL_XL_PAL_reg))
#define  DE_XCXL_De_XCXL_XL_PAL_dexc_xl_count_pal_shift                          (0)
#define  DE_XCXL_De_XCXL_XL_PAL_dexc_xl_count_pal_mask                           (0x001FFFFF)
#define  DE_XCXL_De_XCXL_XL_PAL_dexc_xl_count_pal(data)                          (0x001FFFFF&(data))
#define  DE_XCXL_De_XCXL_XL_PAL_get_dexc_xl_count_pal(data)                      (0x001FFFFF&(data))

#define  DE_XCXL_De_XCXL_XC_PAL                                                 0x180239F8
#define  DE_XCXL_De_XCXL_XC_PAL_reg_addr                                         "0xB80239F8"
#define  DE_XCXL_De_XCXL_XC_PAL_reg                                              0xB80239F8
#define  DE_XCXL_De_XCXL_XC_PAL_inst_addr                                        "0x000C"
#define  set_DE_XCXL_De_XCXL_XC_PAL_reg(data)                                    (*((volatile unsigned int*)DE_XCXL_De_XCXL_XC_PAL_reg)=data)
#define  get_DE_XCXL_De_XCXL_XC_PAL_reg                                          (*((volatile unsigned int*)DE_XCXL_De_XCXL_XC_PAL_reg))
#define  DE_XCXL_De_XCXL_XC_PAL_dexc_xc_count_pal_shift                          (0)
#define  DE_XCXL_De_XCXL_XC_PAL_dexc_xc_count_pal_mask                           (0x001FFFFF)
#define  DE_XCXL_De_XCXL_XC_PAL_dexc_xc_count_pal(data)                          (0x001FFFFF&(data))
#define  DE_XCXL_De_XCXL_XC_PAL_get_dexc_xc_count_pal(data)                      (0x001FFFFF&(data))

#define  DE_XCXL_De_XCXL_SMOOTH_TH                                              0x18023984
#define  DE_XCXL_De_XCXL_SMOOTH_TH_reg_addr                                      "0xB8023984"
#define  DE_XCXL_De_XCXL_SMOOTH_TH_reg                                           0xB8023984
#define  DE_XCXL_De_XCXL_SMOOTH_TH_inst_addr                                     "0x000D"
#define  set_DE_XCXL_De_XCXL_SMOOTH_TH_reg(data)                                 (*((volatile unsigned int*)DE_XCXL_De_XCXL_SMOOTH_TH_reg)=data)
#define  get_DE_XCXL_De_XCXL_SMOOTH_TH_reg                                       (*((volatile unsigned int*)DE_XCXL_De_XCXL_SMOOTH_TH_reg))
#define  DE_XCXL_De_XCXL_SMOOTH_TH_dexc_spatial_corr_imp_cancel_shift            (16)
#define  DE_XCXL_De_XCXL_SMOOTH_TH_dexc_smooth_th_shift                          (8)
#define  DE_XCXL_De_XCXL_SMOOTH_TH_dexc_sat_th_shift                             (0)
#define  DE_XCXL_De_XCXL_SMOOTH_TH_dexc_spatial_corr_imp_cancel_mask             (0x00010000)
#define  DE_XCXL_De_XCXL_SMOOTH_TH_dexc_smooth_th_mask                           (0x0000FF00)
#define  DE_XCXL_De_XCXL_SMOOTH_TH_dexc_sat_th_mask                              (0x000000FF)
#define  DE_XCXL_De_XCXL_SMOOTH_TH_dexc_spatial_corr_imp_cancel(data)            (0x00010000&((data)<<16))
#define  DE_XCXL_De_XCXL_SMOOTH_TH_dexc_smooth_th(data)                          (0x0000FF00&((data)<<8))
#define  DE_XCXL_De_XCXL_SMOOTH_TH_dexc_sat_th(data)                             (0x000000FF&(data))
#define  DE_XCXL_De_XCXL_SMOOTH_TH_get_dexc_spatial_corr_imp_cancel(data)        ((0x00010000&(data))>>16)
#define  DE_XCXL_De_XCXL_SMOOTH_TH_get_dexc_smooth_th(data)                      ((0x0000FF00&(data))>>8)
#define  DE_XCXL_De_XCXL_SMOOTH_TH_get_dexc_sat_th(data)                         (0x000000FF&(data))

#define  DE_XCXL_Frame_format                                                   0x1802391C
#define  DE_XCXL_Frame_format_reg_addr                                           "0xB802391C"
#define  DE_XCXL_Frame_format_reg                                                0xB802391C
#define  DE_XCXL_Frame_format_inst_addr                                          "0x000E"
#define  set_DE_XCXL_Frame_format_reg(data)                                      (*((volatile unsigned int*)DE_XCXL_Frame_format_reg)=data)
#define  get_DE_XCXL_Frame_format_reg                                            (*((volatile unsigned int*)DE_XCXL_Frame_format_reg))
#define  DE_XCXL_Frame_format_height_shift                                       (16)
#define  DE_XCXL_Frame_format_width_shift                                        (0)
#define  DE_XCXL_Frame_format_height_mask                                        (0x0FFF0000)
#define  DE_XCXL_Frame_format_width_mask                                         (0x00001FFF)
#define  DE_XCXL_Frame_format_height(data)                                       (0x0FFF0000&((data)<<16))
#define  DE_XCXL_Frame_format_width(data)                                        (0x00001FFF&(data))
#define  DE_XCXL_Frame_format_get_height(data)                                   ((0x0FFF0000&(data))>>16)
#define  DE_XCXL_Frame_format_get_width(data)                                    (0x00001FFF&(data))

#define  DE_XCXL_INFMemStartAdd_1_S0                                            0x18023920
#define  DE_XCXL_INFMemStartAdd_1_S0_reg_addr                                    "0xB8023920"
#define  DE_XCXL_INFMemStartAdd_1_S0_reg                                         0xB8023920
#define  DE_XCXL_INFMemStartAdd_1_S0_inst_addr                                   "0x000F"
#define  set_DE_XCXL_INFMemStartAdd_1_S0_reg(data)                               (*((volatile unsigned int*)DE_XCXL_INFMemStartAdd_1_S0_reg)=data)
#define  get_DE_XCXL_INFMemStartAdd_1_S0_reg                                     (*((volatile unsigned int*)DE_XCXL_INFMemStartAdd_1_S0_reg))
#define  DE_XCXL_INFMemStartAdd_1_S0_s0_1_inf_mstart_shift                       (3)
#define  DE_XCXL_INFMemStartAdd_1_S0_s0_1_inf_mstart_mask                        (0xFFFFFFF8)
#define  DE_XCXL_INFMemStartAdd_1_S0_s0_1_inf_mstart(data)                       (0xFFFFFFF8&((data)<<3))
#define  DE_XCXL_INFMemStartAdd_1_S0_get_s0_1_inf_mstart(data)                   ((0xFFFFFFF8&(data))>>3)

#define  DE_XCXL_INFMemRolling_err                                              0x180239C8
#define  DE_XCXL_INFMemRolling_err_reg_addr                                      "0xB80239C8"
#define  DE_XCXL_INFMemRolling_err_reg                                           0xB80239C8
#define  DE_XCXL_INFMemRolling_err_inst_addr                                     "0x0010"
#define  set_DE_XCXL_INFMemRolling_err_reg(data)                                 (*((volatile unsigned int*)DE_XCXL_INFMemRolling_err_reg)=data)
#define  get_DE_XCXL_INFMemRolling_err_reg                                       (*((volatile unsigned int*)DE_XCXL_INFMemRolling_err_reg))
#define  DE_XCXL_INFMemRolling_err_inf_rolling_err_detect_en_shift               (31)
#define  DE_XCXL_INFMemRolling_err_inf_rolling_error_shift                       (30)
#define  DE_XCXL_INFMemRolling_err_inf_rolling_err_detect_en_mask                (0x80000000)
#define  DE_XCXL_INFMemRolling_err_inf_rolling_error_mask                        (0x40000000)
#define  DE_XCXL_INFMemRolling_err_inf_rolling_err_detect_en(data)               (0x80000000&((data)<<31))
#define  DE_XCXL_INFMemRolling_err_inf_rolling_error(data)                       (0x40000000&((data)<<30))
#define  DE_XCXL_INFMemRolling_err_get_inf_rolling_err_detect_en(data)           ((0x80000000&(data))>>31)
#define  DE_XCXL_INFMemRolling_err_get_inf_rolling_error(data)                   ((0x40000000&(data))>>30)

#define  DE_XCXL_DATMemStartAdd2_S0                                             0x18023924
#define  DE_XCXL_DATMemStartAdd2_S0_reg_addr                                     "0xB8023924"
#define  DE_XCXL_DATMemStartAdd2_S0_reg                                          0xB8023924
#define  DE_XCXL_DATMemStartAdd2_S0_inst_addr                                    "0x0011"
#define  set_DE_XCXL_DATMemStartAdd2_S0_reg(data)                                (*((volatile unsigned int*)DE_XCXL_DATMemStartAdd2_S0_reg)=data)
#define  get_DE_XCXL_DATMemStartAdd2_S0_reg                                      (*((volatile unsigned int*)DE_XCXL_DATMemStartAdd2_S0_reg))
#define  DE_XCXL_DATMemStartAdd2_S0_s0_dat_mstart_57_29_shift                    (3)
#define  DE_XCXL_DATMemStartAdd2_S0_s0_dat_mstart_57_29_mask                     (0xFFFFFFF8)
#define  DE_XCXL_DATMemStartAdd2_S0_s0_dat_mstart_57_29(data)                    (0xFFFFFFF8&((data)<<3))
#define  DE_XCXL_DATMemStartAdd2_S0_get_s0_dat_mstart_57_29(data)                ((0xFFFFFFF8&(data))>>3)

#define  DE_XCXL_DATMemStartAdd3_S0                                             0x18023928
#define  DE_XCXL_DATMemStartAdd3_S0_reg_addr                                     "0xB8023928"
#define  DE_XCXL_DATMemStartAdd3_S0_reg                                          0xB8023928
#define  DE_XCXL_DATMemStartAdd3_S0_inst_addr                                    "0x0012"
#define  set_DE_XCXL_DATMemStartAdd3_S0_reg(data)                                (*((volatile unsigned int*)DE_XCXL_DATMemStartAdd3_S0_reg)=data)
#define  get_DE_XCXL_DATMemStartAdd3_S0_reg                                      (*((volatile unsigned int*)DE_XCXL_DATMemStartAdd3_S0_reg))
#define  DE_XCXL_DATMemStartAdd3_S0_s0_dat_mstart_28_0_shift                     (3)
#define  DE_XCXL_DATMemStartAdd3_S0_s0_dat_mstart_28_0_mask                      (0xFFFFFFF8)
#define  DE_XCXL_DATMemStartAdd3_S0_s0_dat_mstart_28_0(data)                     (0xFFFFFFF8&((data)<<3))
#define  DE_XCXL_DATMemStartAdd3_S0_get_s0_dat_mstart_28_0(data)                 ((0xFFFFFFF8&(data))>>3)

#define  DE_XCXL_INFMemStartAdd_S0                                              0x1802392C
#define  DE_XCXL_INFMemStartAdd_S0_reg_addr                                      "0xB802392C"
#define  DE_XCXL_INFMemStartAdd_S0_reg                                           0xB802392C
#define  DE_XCXL_INFMemStartAdd_S0_inst_addr                                     "0x0013"
#define  set_DE_XCXL_INFMemStartAdd_S0_reg(data)                                 (*((volatile unsigned int*)DE_XCXL_INFMemStartAdd_S0_reg)=data)
#define  get_DE_XCXL_INFMemStartAdd_S0_reg                                       (*((volatile unsigned int*)DE_XCXL_INFMemStartAdd_S0_reg))
#define  DE_XCXL_INFMemStartAdd_S0_s0_inf_mstart_shift                           (3)
#define  DE_XCXL_INFMemStartAdd_S0_s0_inf_mstart_mask                            (0xFFFFFFF8)
#define  DE_XCXL_INFMemStartAdd_S0_s0_inf_mstart(data)                           (0xFFFFFFF8&((data)<<3))
#define  DE_XCXL_INFMemStartAdd_S0_get_s0_inf_mstart(data)                       ((0xFFFFFFF8&(data))>>3)

#define  DE_XCXL_RDATDMA_Set1                                                   0x18023930
#define  DE_XCXL_RDATDMA_Set1_reg_addr                                           "0xB8023930"
#define  DE_XCXL_RDATDMA_Set1_reg                                                0xB8023930
#define  DE_XCXL_RDATDMA_Set1_inst_addr                                          "0x0014"
#define  set_DE_XCXL_RDATDMA_Set1_reg(data)                                      (*((volatile unsigned int*)DE_XCXL_RDATDMA_Set1_reg)=data)
#define  get_DE_XCXL_RDATDMA_Set1_reg                                            (*((volatile unsigned int*)DE_XCXL_RDATDMA_Set1_reg))
#define  DE_XCXL_RDATDMA_Set1_dat_len_r1_shift                                   (16)
#define  DE_XCXL_RDATDMA_Set1_dat_num_r1_shift                                   (0)
#define  DE_XCXL_RDATDMA_Set1_dat_len_r1_mask                                    (0x007F0000)
#define  DE_XCXL_RDATDMA_Set1_dat_num_r1_mask                                    (0x0000FFFF)
#define  DE_XCXL_RDATDMA_Set1_dat_len_r1(data)                                   (0x007F0000&((data)<<16))
#define  DE_XCXL_RDATDMA_Set1_dat_num_r1(data)                                   (0x0000FFFF&(data))
#define  DE_XCXL_RDATDMA_Set1_get_dat_len_r1(data)                               ((0x007F0000&(data))>>16)
#define  DE_XCXL_RDATDMA_Set1_get_dat_num_r1(data)                               (0x0000FFFF&(data))

#define  DE_XCXL_RDATDMA_Set2                                                   0x18023934
#define  DE_XCXL_RDATDMA_Set2_reg_addr                                           "0xB8023934"
#define  DE_XCXL_RDATDMA_Set2_reg                                                0xB8023934
#define  DE_XCXL_RDATDMA_Set2_inst_addr                                          "0x0015"
#define  set_DE_XCXL_RDATDMA_Set2_reg(data)                                      (*((volatile unsigned int*)DE_XCXL_RDATDMA_Set2_reg)=data)
#define  get_DE_XCXL_RDATDMA_Set2_reg                                            (*((volatile unsigned int*)DE_XCXL_RDATDMA_Set2_reg))
#define  DE_XCXL_RDATDMA_Set2_dat_len_r2_shift                                   (16)
#define  DE_XCXL_RDATDMA_Set2_dat_num_r2_shift                                   (0)
#define  DE_XCXL_RDATDMA_Set2_dat_len_r2_mask                                    (0x007F0000)
#define  DE_XCXL_RDATDMA_Set2_dat_num_r2_mask                                    (0x0000FFFF)
#define  DE_XCXL_RDATDMA_Set2_dat_len_r2(data)                                   (0x007F0000&((data)<<16))
#define  DE_XCXL_RDATDMA_Set2_dat_num_r2(data)                                   (0x0000FFFF&(data))
#define  DE_XCXL_RDATDMA_Set2_get_dat_len_r2(data)                               ((0x007F0000&(data))>>16)
#define  DE_XCXL_RDATDMA_Set2_get_dat_num_r2(data)                               (0x0000FFFF&(data))

#define  DE_XCXL_WDATDMA_Set                                                    0x18023938
#define  DE_XCXL_WDATDMA_Set_reg_addr                                            "0xB8023938"
#define  DE_XCXL_WDATDMA_Set_reg                                                 0xB8023938
#define  DE_XCXL_WDATDMA_Set_inst_addr                                           "0x0016"
#define  set_DE_XCXL_WDATDMA_Set_reg(data)                                       (*((volatile unsigned int*)DE_XCXL_WDATDMA_Set_reg)=data)
#define  get_DE_XCXL_WDATDMA_Set_reg                                             (*((volatile unsigned int*)DE_XCXL_WDATDMA_Set_reg))
#define  DE_XCXL_WDATDMA_Set_dat_len_w_shift                                     (16)
#define  DE_XCXL_WDATDMA_Set_dat_num_w_shift                                     (0)
#define  DE_XCXL_WDATDMA_Set_dat_len_w_mask                                      (0x007F0000)
#define  DE_XCXL_WDATDMA_Set_dat_num_w_mask                                      (0x0000FFFF)
#define  DE_XCXL_WDATDMA_Set_dat_len_w(data)                                     (0x007F0000&((data)<<16))
#define  DE_XCXL_WDATDMA_Set_dat_num_w(data)                                     (0x0000FFFF&(data))
#define  DE_XCXL_WDATDMA_Set_get_dat_len_w(data)                                 ((0x007F0000&(data))>>16)
#define  DE_XCXL_WDATDMA_Set_get_dat_num_w(data)                                 (0x0000FFFF&(data))

#define  DE_XCXL_DATDMA_RM_Set                                                  0x1802393C
#define  DE_XCXL_DATDMA_RM_Set_reg_addr                                          "0xB802393C"
#define  DE_XCXL_DATDMA_RM_Set_reg                                               0xB802393C
#define  DE_XCXL_DATDMA_RM_Set_inst_addr                                         "0x0017"
#define  set_DE_XCXL_DATDMA_RM_Set_reg(data)                                     (*((volatile unsigned int*)DE_XCXL_DATDMA_RM_Set_reg)=data)
#define  get_DE_XCXL_DATDMA_RM_Set_reg                                           (*((volatile unsigned int*)DE_XCXL_DATDMA_RM_Set_reg))
#define  DE_XCXL_DATDMA_RM_Set_wdma_remain_en_shift                              (23)
#define  DE_XCXL_DATDMA_RM_Set_dat_remain_w_shift                                (16)
#define  DE_XCXL_DATDMA_RM_Set_rdma1_remain_en_shift                             (15)
#define  DE_XCXL_DATDMA_RM_Set_dat_remain_r1_shift                               (8)
#define  DE_XCXL_DATDMA_RM_Set_rdma2_remain_en_shift                             (7)
#define  DE_XCXL_DATDMA_RM_Set_dat_remain_r2_shift                               (0)
#define  DE_XCXL_DATDMA_RM_Set_wdma_remain_en_mask                               (0x00800000)
#define  DE_XCXL_DATDMA_RM_Set_dat_remain_w_mask                                 (0x007F0000)
#define  DE_XCXL_DATDMA_RM_Set_rdma1_remain_en_mask                              (0x00008000)
#define  DE_XCXL_DATDMA_RM_Set_dat_remain_r1_mask                                (0x00007F00)
#define  DE_XCXL_DATDMA_RM_Set_rdma2_remain_en_mask                              (0x00000080)
#define  DE_XCXL_DATDMA_RM_Set_dat_remain_r2_mask                                (0x0000007F)
#define  DE_XCXL_DATDMA_RM_Set_wdma_remain_en(data)                              (0x00800000&((data)<<23))
#define  DE_XCXL_DATDMA_RM_Set_dat_remain_w(data)                                (0x007F0000&((data)<<16))
#define  DE_XCXL_DATDMA_RM_Set_rdma1_remain_en(data)                             (0x00008000&((data)<<15))
#define  DE_XCXL_DATDMA_RM_Set_dat_remain_r1(data)                               (0x00007F00&((data)<<8))
#define  DE_XCXL_DATDMA_RM_Set_rdma2_remain_en(data)                             (0x00000080&((data)<<7))
#define  DE_XCXL_DATDMA_RM_Set_dat_remain_r2(data)                               (0x0000007F&(data))
#define  DE_XCXL_DATDMA_RM_Set_get_wdma_remain_en(data)                          ((0x00800000&(data))>>23)
#define  DE_XCXL_DATDMA_RM_Set_get_dat_remain_w(data)                            ((0x007F0000&(data))>>16)
#define  DE_XCXL_DATDMA_RM_Set_get_rdma1_remain_en(data)                         ((0x00008000&(data))>>15)
#define  DE_XCXL_DATDMA_RM_Set_get_dat_remain_r1(data)                           ((0x00007F00&(data))>>8)
#define  DE_XCXL_DATDMA_RM_Set_get_rdma2_remain_en(data)                         ((0x00000080&(data))>>7)
#define  DE_XCXL_DATDMA_RM_Set_get_dat_remain_r2(data)                           (0x0000007F&(data))

#define  DE_XCXL_RINFDMA_Set                                                    0x18023940
#define  DE_XCXL_RINFDMA_Set_reg_addr                                            "0xB8023940"
#define  DE_XCXL_RINFDMA_Set_reg                                                 0xB8023940
#define  DE_XCXL_RINFDMA_Set_inst_addr                                           "0x0018"
#define  set_DE_XCXL_RINFDMA_Set_reg(data)                                       (*((volatile unsigned int*)DE_XCXL_RINFDMA_Set_reg)=data)
#define  get_DE_XCXL_RINFDMA_Set_reg                                             (*((volatile unsigned int*)DE_XCXL_RINFDMA_Set_reg))
#define  DE_XCXL_RINFDMA_Set_inf_len_r_shift                                     (16)
#define  DE_XCXL_RINFDMA_Set_inf_len_r_mask                                      (0x007F0000)
#define  DE_XCXL_RINFDMA_Set_inf_len_r(data)                                     (0x007F0000&((data)<<16))
#define  DE_XCXL_RINFDMA_Set_get_inf_len_r(data)                                 ((0x007F0000&(data))>>16)

#define  DE_XCXL_WINFDMA_Set                                                    0x18023944
#define  DE_XCXL_WINFDMA_Set_reg_addr                                            "0xB8023944"
#define  DE_XCXL_WINFDMA_Set_reg                                                 0xB8023944
#define  DE_XCXL_WINFDMA_Set_inst_addr                                           "0x0019"
#define  set_DE_XCXL_WINFDMA_Set_reg(data)                                       (*((volatile unsigned int*)DE_XCXL_WINFDMA_Set_reg)=data)
#define  get_DE_XCXL_WINFDMA_Set_reg                                             (*((volatile unsigned int*)DE_XCXL_WINFDMA_Set_reg))
#define  DE_XCXL_WINFDMA_Set_inf_len_w_shift                                     (16)
#define  DE_XCXL_WINFDMA_Set_inf_len_w_mask                                      (0x007F0000)
#define  DE_XCXL_WINFDMA_Set_inf_len_w(data)                                     (0x007F0000&((data)<<16))
#define  DE_XCXL_WINFDMA_Set_get_inf_len_w(data)                                 ((0x007F0000&(data))>>16)

#define  DE_XCXL_INFO_DMA_COUNT                                                 0x18023948
#define  DE_XCXL_INFO_DMA_COUNT_reg_addr                                         "0xB8023948"
#define  DE_XCXL_INFO_DMA_COUNT_reg                                              0xB8023948
#define  DE_XCXL_INFO_DMA_COUNT_inst_addr                                        "0x001A"
#define  set_DE_XCXL_INFO_DMA_COUNT_reg(data)                                    (*((volatile unsigned int*)DE_XCXL_INFO_DMA_COUNT_reg)=data)
#define  get_DE_XCXL_INFO_DMA_COUNT_reg                                          (*((volatile unsigned int*)DE_XCXL_INFO_DMA_COUNT_reg))
#define  DE_XCXL_INFO_DMA_COUNT_info_128_count_shift                             (0)
#define  DE_XCXL_INFO_DMA_COUNT_info_128_count_mask                              (0x000FFFFF)
#define  DE_XCXL_INFO_DMA_COUNT_info_128_count(data)                             (0x000FFFFF&(data))
#define  DE_XCXL_INFO_DMA_COUNT_get_info_128_count(data)                         (0x000FFFFF&(data))

#define  DE_XCXL_DE_XCXL_DMAStatus                                              0x1802394C
#define  DE_XCXL_DE_XCXL_DMAStatus_reg_addr                                      "0xB802394C"
#define  DE_XCXL_DE_XCXL_DMAStatus_reg                                           0xB802394C
#define  DE_XCXL_DE_XCXL_DMAStatus_inst_addr                                     "0x001B"
#define  set_DE_XCXL_DE_XCXL_DMAStatus_reg(data)                                 (*((volatile unsigned int*)DE_XCXL_DE_XCXL_DMAStatus_reg)=data)
#define  get_DE_XCXL_DE_XCXL_DMAStatus_reg                                       (*((volatile unsigned int*)DE_XCXL_DE_XCXL_DMAStatus_reg))
#define  DE_XCXL_DE_XCXL_DMAStatus_dexcxl_fifoerr_ie_shift                       (31)
#define  DE_XCXL_DE_XCXL_DMAStatus_dexcxl_flag_clr_shift                         (10)
#define  DE_XCXL_DE_XCXL_DMAStatus_dexcxl_ovfl_shift                             (5)
#define  DE_XCXL_DE_XCXL_DMAStatus_dexcxl_unfl_shift                             (0)
#define  DE_XCXL_DE_XCXL_DMAStatus_dexcxl_fifoerr_ie_mask                        (0x80000000)
#define  DE_XCXL_DE_XCXL_DMAStatus_dexcxl_flag_clr_mask                          (0x00007C00)
#define  DE_XCXL_DE_XCXL_DMAStatus_dexcxl_ovfl_mask                              (0x000003E0)
#define  DE_XCXL_DE_XCXL_DMAStatus_dexcxl_unfl_mask                              (0x0000001F)
#define  DE_XCXL_DE_XCXL_DMAStatus_dexcxl_fifoerr_ie(data)                       (0x80000000&((data)<<31))
#define  DE_XCXL_DE_XCXL_DMAStatus_dexcxl_flag_clr(data)                         (0x00007C00&((data)<<10))
#define  DE_XCXL_DE_XCXL_DMAStatus_dexcxl_ovfl(data)                             (0x000003E0&((data)<<5))
#define  DE_XCXL_DE_XCXL_DMAStatus_dexcxl_unfl(data)                             (0x0000001F&(data))
#define  DE_XCXL_DE_XCXL_DMAStatus_get_dexcxl_fifoerr_ie(data)                   ((0x80000000&(data))>>31)
#define  DE_XCXL_DE_XCXL_DMAStatus_get_dexcxl_flag_clr(data)                     ((0x00007C00&(data))>>10)
#define  DE_XCXL_DE_XCXL_DMAStatus_get_dexcxl_ovfl(data)                         ((0x000003E0&(data))>>5)
#define  DE_XCXL_DE_XCXL_DMAStatus_get_dexcxl_unfl(data)                         (0x0000001F&(data))

#define  DE_XCXL_DE_XCXL_WDE                                                    0x18023950
#define  DE_XCXL_DE_XCXL_WDE_reg_addr                                            "0xB8023950"
#define  DE_XCXL_DE_XCXL_WDE_reg                                                 0xB8023950
#define  DE_XCXL_DE_XCXL_WDE_inst_addr                                           "0x001C"
#define  set_DE_XCXL_DE_XCXL_WDE_reg(data)                                       (*((volatile unsigned int*)DE_XCXL_DE_XCXL_WDE_reg)=data)
#define  get_DE_XCXL_DE_XCXL_WDE_reg                                             (*((volatile unsigned int*)DE_XCXL_DE_XCXL_WDE_reg))
#define  DE_XCXL_DE_XCXL_WDE_dexcxl_vs_reset_en_shift                            (29)
#define  DE_XCXL_DE_XCXL_WDE_dexcxl_vs_reset_en_mask                             (0x20000000)
#define  DE_XCXL_DE_XCXL_WDE_dexcxl_vs_reset_en(data)                            (0x20000000&((data)<<29))
#define  DE_XCXL_DE_XCXL_WDE_get_dexcxl_vs_reset_en(data)                        ((0x20000000&(data))>>29)

#define  DE_XCXL_WRRD_BndAddr1                                                  0x18023954
#define  DE_XCXL_WRRD_BndAddr1_reg_addr                                          "0xB8023954"
#define  DE_XCXL_WRRD_BndAddr1_reg                                               0xB8023954
#define  DE_XCXL_WRRD_BndAddr1_inst_addr                                         "0x001D"
#define  set_DE_XCXL_WRRD_BndAddr1_reg(data)                                     (*((volatile unsigned int*)DE_XCXL_WRRD_BndAddr1_reg)=data)
#define  get_DE_XCXL_WRRD_BndAddr1_reg                                           (*((volatile unsigned int*)DE_XCXL_WRRD_BndAddr1_reg))
#define  DE_XCXL_WRRD_BndAddr1_dexcxl_wrrd_downlimit_adr_shift                   (3)
#define  DE_XCXL_WRRD_BndAddr1_dexcxl_wrrd_downlimit_adr_mask                    (0xFFFFFFF8)
#define  DE_XCXL_WRRD_BndAddr1_dexcxl_wrrd_downlimit_adr(data)                   (0xFFFFFFF8&((data)<<3))
#define  DE_XCXL_WRRD_BndAddr1_get_dexcxl_wrrd_downlimit_adr(data)               ((0xFFFFFFF8&(data))>>3)

#define  DE_XCXL_WRRD_BndAddr2                                                  0x18023958
#define  DE_XCXL_WRRD_BndAddr2_reg_addr                                          "0xB8023958"
#define  DE_XCXL_WRRD_BndAddr2_reg                                               0xB8023958
#define  DE_XCXL_WRRD_BndAddr2_inst_addr                                         "0x001E"
#define  set_DE_XCXL_WRRD_BndAddr2_reg(data)                                     (*((volatile unsigned int*)DE_XCXL_WRRD_BndAddr2_reg)=data)
#define  get_DE_XCXL_WRRD_BndAddr2_reg                                           (*((volatile unsigned int*)DE_XCXL_WRRD_BndAddr2_reg))
#define  DE_XCXL_WRRD_BndAddr2_dexcxl_wrrd_uplimit_adr_shift                     (3)
#define  DE_XCXL_WRRD_BndAddr2_dexcxl_wrrd_uplimit_adr_mask                      (0xFFFFFFF8)
#define  DE_XCXL_WRRD_BndAddr2_dexcxl_wrrd_uplimit_adr(data)                     (0xFFFFFFF8&((data)<<3))
#define  DE_XCXL_WRRD_BndAddr2_get_dexcxl_wrrd_uplimit_adr(data)                 ((0xFFFFFFF8&(data))>>3)

#define  DE_XCXL_WRRD_BndAddr_Status                                            0x1802395C
#define  DE_XCXL_WRRD_BndAddr_Status_reg_addr                                    "0xB802395C"
#define  DE_XCXL_WRRD_BndAddr_Status_reg                                         0xB802395C
#define  DE_XCXL_WRRD_BndAddr_Status_inst_addr                                   "0x001F"
#define  set_DE_XCXL_WRRD_BndAddr_Status_reg(data)                               (*((volatile unsigned int*)DE_XCXL_WRRD_BndAddr_Status_reg)=data)
#define  get_DE_XCXL_WRRD_BndAddr_Status_reg                                     (*((volatile unsigned int*)DE_XCXL_WRRD_BndAddr_Status_reg))
#define  DE_XCXL_WRRD_BndAddr_Status_dexcxl_wrrd_downup_limit_ov_clearstatus_shift (20)
#define  DE_XCXL_WRRD_BndAddr_Status_dexcxl_wr_downlimit_ov_shift                (18)
#define  DE_XCXL_WRRD_BndAddr_Status_dexcxl_wr_uplimit_ov_shift                  (16)
#define  DE_XCXL_WRRD_BndAddr_Status_dexcxl_rd_downlimit_ov_shift                (8)
#define  DE_XCXL_WRRD_BndAddr_Status_dexcxl_rd_uplimit_ov_shift                  (0)
#define  DE_XCXL_WRRD_BndAddr_Status_dexcxl_wrrd_downup_limit_ov_clearstatus_mask (0x00100000)
#define  DE_XCXL_WRRD_BndAddr_Status_dexcxl_wr_downlimit_ov_mask                 (0x000C0000)
#define  DE_XCXL_WRRD_BndAddr_Status_dexcxl_wr_uplimit_ov_mask                   (0x00030000)
#define  DE_XCXL_WRRD_BndAddr_Status_dexcxl_rd_downlimit_ov_mask                 (0x00000700)
#define  DE_XCXL_WRRD_BndAddr_Status_dexcxl_rd_uplimit_ov_mask                   (0x00000007)
#define  DE_XCXL_WRRD_BndAddr_Status_dexcxl_wrrd_downup_limit_ov_clearstatus(data) (0x00100000&((data)<<20))
#define  DE_XCXL_WRRD_BndAddr_Status_dexcxl_wr_downlimit_ov(data)                (0x000C0000&((data)<<18))
#define  DE_XCXL_WRRD_BndAddr_Status_dexcxl_wr_uplimit_ov(data)                  (0x00030000&((data)<<16))
#define  DE_XCXL_WRRD_BndAddr_Status_dexcxl_rd_downlimit_ov(data)                (0x00000700&((data)<<8))
#define  DE_XCXL_WRRD_BndAddr_Status_dexcxl_rd_uplimit_ov(data)                  (0x00000007&(data))
#define  DE_XCXL_WRRD_BndAddr_Status_get_dexcxl_wrrd_downup_limit_ov_clearstatus(data) ((0x00100000&(data))>>20)
#define  DE_XCXL_WRRD_BndAddr_Status_get_dexcxl_wr_downlimit_ov(data)            ((0x000C0000&(data))>>18)
#define  DE_XCXL_WRRD_BndAddr_Status_get_dexcxl_wr_uplimit_ov(data)              ((0x00030000&(data))>>16)
#define  DE_XCXL_WRRD_BndAddr_Status_get_dexcxl_rd_downlimit_ov(data)            ((0x00000700&(data))>>8)
#define  DE_XCXL_WRRD_BndAddr_Status_get_dexcxl_rd_uplimit_ov(data)              (0x00000007&(data))

#define  DE_XCXL_INFMemStartAdd_1_Odd_S0                                        0x18023960
#define  DE_XCXL_INFMemStartAdd_1_Odd_S0_reg_addr                                "0xB8023960"
#define  DE_XCXL_INFMemStartAdd_1_Odd_S0_reg                                     0xB8023960
#define  DE_XCXL_INFMemStartAdd_1_Odd_S0_inst_addr                               "0x0020"
#define  set_DE_XCXL_INFMemStartAdd_1_Odd_S0_reg(data)                           (*((volatile unsigned int*)DE_XCXL_INFMemStartAdd_1_Odd_S0_reg)=data)
#define  get_DE_XCXL_INFMemStartAdd_1_Odd_S0_reg                                 (*((volatile unsigned int*)DE_XCXL_INFMemStartAdd_1_Odd_S0_reg))
#define  DE_XCXL_INFMemStartAdd_1_Odd_S0_s0_1_inf_mstart_odd_shift               (3)
#define  DE_XCXL_INFMemStartAdd_1_Odd_S0_s0_1_inf_mstart_odd_mask                (0xFFFFFFF8)
#define  DE_XCXL_INFMemStartAdd_1_Odd_S0_s0_1_inf_mstart_odd(data)               (0xFFFFFFF8&((data)<<3))
#define  DE_XCXL_INFMemStartAdd_1_Odd_S0_get_s0_1_inf_mstart_odd(data)           ((0xFFFFFFF8&(data))>>3)

#define  DE_XCXL_DATMemStartAdd2_Odd_S0                                         0x18023964
#define  DE_XCXL_DATMemStartAdd2_Odd_S0_reg_addr                                 "0xB8023964"
#define  DE_XCXL_DATMemStartAdd2_Odd_S0_reg                                      0xB8023964
#define  DE_XCXL_DATMemStartAdd2_Odd_S0_inst_addr                                "0x0021"
#define  set_DE_XCXL_DATMemStartAdd2_Odd_S0_reg(data)                            (*((volatile unsigned int*)DE_XCXL_DATMemStartAdd2_Odd_S0_reg)=data)
#define  get_DE_XCXL_DATMemStartAdd2_Odd_S0_reg                                  (*((volatile unsigned int*)DE_XCXL_DATMemStartAdd2_Odd_S0_reg))
#define  DE_XCXL_DATMemStartAdd2_Odd_S0_s0_dat_mstart_odd_57_29_shift            (3)
#define  DE_XCXL_DATMemStartAdd2_Odd_S0_s0_dat_mstart_odd_57_29_mask             (0xFFFFFFF8)
#define  DE_XCXL_DATMemStartAdd2_Odd_S0_s0_dat_mstart_odd_57_29(data)            (0xFFFFFFF8&((data)<<3))
#define  DE_XCXL_DATMemStartAdd2_Odd_S0_get_s0_dat_mstart_odd_57_29(data)        ((0xFFFFFFF8&(data))>>3)

#define  DE_XCXL_DATMemStartAdd3_Odd_S0                                         0x18023968
#define  DE_XCXL_DATMemStartAdd3_Odd_S0_reg_addr                                 "0xB8023968"
#define  DE_XCXL_DATMemStartAdd3_Odd_S0_reg                                      0xB8023968
#define  DE_XCXL_DATMemStartAdd3_Odd_S0_inst_addr                                "0x0022"
#define  set_DE_XCXL_DATMemStartAdd3_Odd_S0_reg(data)                            (*((volatile unsigned int*)DE_XCXL_DATMemStartAdd3_Odd_S0_reg)=data)
#define  get_DE_XCXL_DATMemStartAdd3_Odd_S0_reg                                  (*((volatile unsigned int*)DE_XCXL_DATMemStartAdd3_Odd_S0_reg))
#define  DE_XCXL_DATMemStartAdd3_Odd_S0_s0_dat_mstart_odd_28_0_shift             (3)
#define  DE_XCXL_DATMemStartAdd3_Odd_S0_s0_dat_mstart_odd_28_0_mask              (0xFFFFFFF8)
#define  DE_XCXL_DATMemStartAdd3_Odd_S0_s0_dat_mstart_odd_28_0(data)             (0xFFFFFFF8&((data)<<3))
#define  DE_XCXL_DATMemStartAdd3_Odd_S0_get_s0_dat_mstart_odd_28_0(data)         ((0xFFFFFFF8&(data))>>3)

#define  DE_XCXL_INFMemStartAdd_Odd_S0                                          0x1802396C
#define  DE_XCXL_INFMemStartAdd_Odd_S0_reg_addr                                  "0xB802396C"
#define  DE_XCXL_INFMemStartAdd_Odd_S0_reg                                       0xB802396C
#define  DE_XCXL_INFMemStartAdd_Odd_S0_inst_addr                                 "0x0023"
#define  set_DE_XCXL_INFMemStartAdd_Odd_S0_reg(data)                             (*((volatile unsigned int*)DE_XCXL_INFMemStartAdd_Odd_S0_reg)=data)
#define  get_DE_XCXL_INFMemStartAdd_Odd_S0_reg                                   (*((volatile unsigned int*)DE_XCXL_INFMemStartAdd_Odd_S0_reg))
#define  DE_XCXL_INFMemStartAdd_Odd_S0_s0_inf_mstart_odd_shift                   (3)
#define  DE_XCXL_INFMemStartAdd_Odd_S0_s0_inf_mstart_odd_mask                    (0xFFFFFFF8)
#define  DE_XCXL_INFMemStartAdd_Odd_S0_s0_inf_mstart_odd(data)                   (0xFFFFFFF8&((data)<<3))
#define  DE_XCXL_INFMemStartAdd_Odd_S0_get_s0_inf_mstart_odd(data)               ((0xFFFFFFF8&(data))>>3)

#define  DE_XCXL_DE_XCXL_db_reg_ctl                                             0x18023970
#define  DE_XCXL_DE_XCXL_db_reg_ctl_reg_addr                                     "0xB8023970"
#define  DE_XCXL_DE_XCXL_db_reg_ctl_reg                                          0xB8023970
#define  DE_XCXL_DE_XCXL_db_reg_ctl_inst_addr                                    "0x0024"
#define  set_DE_XCXL_DE_XCXL_db_reg_ctl_reg(data)                                (*((volatile unsigned int*)DE_XCXL_DE_XCXL_db_reg_ctl_reg)=data)
#define  get_DE_XCXL_DE_XCXL_db_reg_ctl_reg                                      (*((volatile unsigned int*)DE_XCXL_DE_XCXL_db_reg_ctl_reg))
#define  DE_XCXL_DE_XCXL_db_reg_ctl_db_read_shift                                (2)
#define  DE_XCXL_DE_XCXL_db_reg_ctl_db_en_shift                                  (1)
#define  DE_XCXL_DE_XCXL_db_reg_ctl_db_apply_shift                               (0)
#define  DE_XCXL_DE_XCXL_db_reg_ctl_db_read_mask                                 (0x00000004)
#define  DE_XCXL_DE_XCXL_db_reg_ctl_db_en_mask                                   (0x00000002)
#define  DE_XCXL_DE_XCXL_db_reg_ctl_db_apply_mask                                (0x00000001)
#define  DE_XCXL_DE_XCXL_db_reg_ctl_db_read(data)                                (0x00000004&((data)<<2))
#define  DE_XCXL_DE_XCXL_db_reg_ctl_db_en(data)                                  (0x00000002&((data)<<1))
#define  DE_XCXL_DE_XCXL_db_reg_ctl_db_apply(data)                               (0x00000001&(data))
#define  DE_XCXL_DE_XCXL_db_reg_ctl_get_db_read(data)                            ((0x00000004&(data))>>2)
#define  DE_XCXL_DE_XCXL_db_reg_ctl_get_db_en(data)                              ((0x00000002&(data))>>1)
#define  DE_XCXL_DE_XCXL_db_reg_ctl_get_db_apply(data)                           (0x00000001&(data))

#define  DE_XCXL_DMA_Multi_Req_Set                                              0x18023974
#define  DE_XCXL_DMA_Multi_Req_Set_reg_addr                                      "0xB8023974"
#define  DE_XCXL_DMA_Multi_Req_Set_reg                                           0xB8023974
#define  DE_XCXL_DMA_Multi_Req_Set_inst_addr                                     "0x0025"
#define  set_DE_XCXL_DMA_Multi_Req_Set_reg(data)                                 (*((volatile unsigned int*)DE_XCXL_DMA_Multi_Req_Set_reg)=data)
#define  get_DE_XCXL_DMA_Multi_Req_Set_reg                                       (*((volatile unsigned int*)DE_XCXL_DMA_Multi_Req_Set_reg))
#define  DE_XCXL_DMA_Multi_Req_Set_dma_info_first_shift                          (31)
#define  DE_XCXL_DMA_Multi_Req_Set_rdma_req_num_shift                            (4)
#define  DE_XCXL_DMA_Multi_Req_Set_wdma_req_num_shift                            (0)
#define  DE_XCXL_DMA_Multi_Req_Set_dma_info_first_mask                           (0x80000000)
#define  DE_XCXL_DMA_Multi_Req_Set_rdma_req_num_mask                             (0x000000F0)
#define  DE_XCXL_DMA_Multi_Req_Set_wdma_req_num_mask                             (0x0000000F)
#define  DE_XCXL_DMA_Multi_Req_Set_dma_info_first(data)                          (0x80000000&((data)<<31))
#define  DE_XCXL_DMA_Multi_Req_Set_rdma_req_num(data)                            (0x000000F0&((data)<<4))
#define  DE_XCXL_DMA_Multi_Req_Set_wdma_req_num(data)                            (0x0000000F&(data))
#define  DE_XCXL_DMA_Multi_Req_Set_get_dma_info_first(data)                      ((0x80000000&(data))>>31)
#define  DE_XCXL_DMA_Multi_Req_Set_get_rdma_req_num(data)                        ((0x000000F0&(data))>>4)
#define  DE_XCXL_DMA_Multi_Req_Set_get_wdma_req_num(data)                        (0x0000000F&(data))

#define  DE_XCXL_DE_XCXL_BIST_FAIL                                              0x1802397C
#define  DE_XCXL_DE_XCXL_BIST_FAIL_reg_addr                                      "0xB802397C"
#define  DE_XCXL_DE_XCXL_BIST_FAIL_reg                                           0xB802397C
#define  DE_XCXL_DE_XCXL_BIST_FAIL_inst_addr                                     "0x0026"
#define  set_DE_XCXL_DE_XCXL_BIST_FAIL_reg(data)                                 (*((volatile unsigned int*)DE_XCXL_DE_XCXL_BIST_FAIL_reg)=data)
#define  get_DE_XCXL_DE_XCXL_BIST_FAIL_reg                                       (*((volatile unsigned int*)DE_XCXL_DE_XCXL_BIST_FAIL_reg))
#define  DE_XCXL_DE_XCXL_BIST_FAIL_dexcxl_wdat_bist_fail_shift                   (4)
#define  DE_XCXL_DE_XCXL_BIST_FAIL_dexcxl_winfo_bist_fail_shift                  (3)
#define  DE_XCXL_DE_XCXL_BIST_FAIL_dexcxl_rdat0_bist_fail_shift                  (2)
#define  DE_XCXL_DE_XCXL_BIST_FAIL_dexcxl_rdat1_bist_fail_shift                  (1)
#define  DE_XCXL_DE_XCXL_BIST_FAIL_dexcxl_rinfo_bist_fail_shift                  (0)
#define  DE_XCXL_DE_XCXL_BIST_FAIL_dexcxl_wdat_bist_fail_mask                    (0x00000010)
#define  DE_XCXL_DE_XCXL_BIST_FAIL_dexcxl_winfo_bist_fail_mask                   (0x00000008)
#define  DE_XCXL_DE_XCXL_BIST_FAIL_dexcxl_rdat0_bist_fail_mask                   (0x00000004)
#define  DE_XCXL_DE_XCXL_BIST_FAIL_dexcxl_rdat1_bist_fail_mask                   (0x00000002)
#define  DE_XCXL_DE_XCXL_BIST_FAIL_dexcxl_rinfo_bist_fail_mask                   (0x00000001)
#define  DE_XCXL_DE_XCXL_BIST_FAIL_dexcxl_wdat_bist_fail(data)                   (0x00000010&((data)<<4))
#define  DE_XCXL_DE_XCXL_BIST_FAIL_dexcxl_winfo_bist_fail(data)                  (0x00000008&((data)<<3))
#define  DE_XCXL_DE_XCXL_BIST_FAIL_dexcxl_rdat0_bist_fail(data)                  (0x00000004&((data)<<2))
#define  DE_XCXL_DE_XCXL_BIST_FAIL_dexcxl_rdat1_bist_fail(data)                  (0x00000002&((data)<<1))
#define  DE_XCXL_DE_XCXL_BIST_FAIL_dexcxl_rinfo_bist_fail(data)                  (0x00000001&(data))
#define  DE_XCXL_DE_XCXL_BIST_FAIL_get_dexcxl_wdat_bist_fail(data)               ((0x00000010&(data))>>4)
#define  DE_XCXL_DE_XCXL_BIST_FAIL_get_dexcxl_winfo_bist_fail(data)              ((0x00000008&(data))>>3)
#define  DE_XCXL_DE_XCXL_BIST_FAIL_get_dexcxl_rdat0_bist_fail(data)              ((0x00000004&(data))>>2)
#define  DE_XCXL_DE_XCXL_BIST_FAIL_get_dexcxl_rdat1_bist_fail(data)              ((0x00000002&(data))>>1)
#define  DE_XCXL_DE_XCXL_BIST_FAIL_get_dexcxl_rinfo_bist_fail(data)              (0x00000001&(data))

#define  DE_XCXL_DE_XCXL_DRF_FAIL                                               0x18023980
#define  DE_XCXL_DE_XCXL_DRF_FAIL_reg_addr                                       "0xB8023980"
#define  DE_XCXL_DE_XCXL_DRF_FAIL_reg                                            0xB8023980
#define  DE_XCXL_DE_XCXL_DRF_FAIL_inst_addr                                      "0x0027"
#define  set_DE_XCXL_DE_XCXL_DRF_FAIL_reg(data)                                  (*((volatile unsigned int*)DE_XCXL_DE_XCXL_DRF_FAIL_reg)=data)
#define  get_DE_XCXL_DE_XCXL_DRF_FAIL_reg                                        (*((volatile unsigned int*)DE_XCXL_DE_XCXL_DRF_FAIL_reg))
#define  DE_XCXL_DE_XCXL_DRF_FAIL_dexcxl_wdat_drf_fail_shift                     (4)
#define  DE_XCXL_DE_XCXL_DRF_FAIL_dexcxl_winfo_drf_fail_shift                    (3)
#define  DE_XCXL_DE_XCXL_DRF_FAIL_dexcxl_rdat0_drf_fail_shift                    (2)
#define  DE_XCXL_DE_XCXL_DRF_FAIL_dexcxl_rdat1_drf_fail_shift                    (1)
#define  DE_XCXL_DE_XCXL_DRF_FAIL_dexcxl_rinfo_drf_fail_shift                    (0)
#define  DE_XCXL_DE_XCXL_DRF_FAIL_dexcxl_wdat_drf_fail_mask                      (0x00000010)
#define  DE_XCXL_DE_XCXL_DRF_FAIL_dexcxl_winfo_drf_fail_mask                     (0x00000008)
#define  DE_XCXL_DE_XCXL_DRF_FAIL_dexcxl_rdat0_drf_fail_mask                     (0x00000004)
#define  DE_XCXL_DE_XCXL_DRF_FAIL_dexcxl_rdat1_drf_fail_mask                     (0x00000002)
#define  DE_XCXL_DE_XCXL_DRF_FAIL_dexcxl_rinfo_drf_fail_mask                     (0x00000001)
#define  DE_XCXL_DE_XCXL_DRF_FAIL_dexcxl_wdat_drf_fail(data)                     (0x00000010&((data)<<4))
#define  DE_XCXL_DE_XCXL_DRF_FAIL_dexcxl_winfo_drf_fail(data)                    (0x00000008&((data)<<3))
#define  DE_XCXL_DE_XCXL_DRF_FAIL_dexcxl_rdat0_drf_fail(data)                    (0x00000004&((data)<<2))
#define  DE_XCXL_DE_XCXL_DRF_FAIL_dexcxl_rdat1_drf_fail(data)                    (0x00000002&((data)<<1))
#define  DE_XCXL_DE_XCXL_DRF_FAIL_dexcxl_rinfo_drf_fail(data)                    (0x00000001&(data))
#define  DE_XCXL_DE_XCXL_DRF_FAIL_get_dexcxl_wdat_drf_fail(data)                 ((0x00000010&(data))>>4)
#define  DE_XCXL_DE_XCXL_DRF_FAIL_get_dexcxl_winfo_drf_fail(data)                ((0x00000008&(data))>>3)
#define  DE_XCXL_DE_XCXL_DRF_FAIL_get_dexcxl_rdat0_drf_fail(data)                ((0x00000004&(data))>>2)
#define  DE_XCXL_DE_XCXL_DRF_FAIL_get_dexcxl_rdat1_drf_fail(data)                ((0x00000002&(data))>>1)
#define  DE_XCXL_DE_XCXL_DRF_FAIL_get_dexcxl_rinfo_drf_fail(data)                (0x00000001&(data))

#define  DE_XCXL_DE_XCXL_BIST_RME                                               0x18023990
#define  DE_XCXL_DE_XCXL_BIST_RME_reg_addr                                       "0xB8023990"
#define  DE_XCXL_DE_XCXL_BIST_RME_reg                                            0xB8023990
#define  DE_XCXL_DE_XCXL_BIST_RME_inst_addr                                      "0x0028"
#define  set_DE_XCXL_DE_XCXL_BIST_RME_reg(data)                                  (*((volatile unsigned int*)DE_XCXL_DE_XCXL_BIST_RME_reg)=data)
#define  get_DE_XCXL_DE_XCXL_BIST_RME_reg                                        (*((volatile unsigned int*)DE_XCXL_DE_XCXL_BIST_RME_reg))
#define  DE_XCXL_DE_XCXL_BIST_RME_dexcxl_dma_wdat_rme_shift                      (4)
#define  DE_XCXL_DE_XCXL_BIST_RME_dexcxl_dma_winfo_rme_shift                     (3)
#define  DE_XCXL_DE_XCXL_BIST_RME_dexcxl_dma_rdat0_rme_shift                     (2)
#define  DE_XCXL_DE_XCXL_BIST_RME_dexcxl_dma_rdat1_rme_shift                     (1)
#define  DE_XCXL_DE_XCXL_BIST_RME_dexcxl_dma_rinfo_rme_shift                     (0)
#define  DE_XCXL_DE_XCXL_BIST_RME_dexcxl_dma_wdat_rme_mask                       (0x00000010)
#define  DE_XCXL_DE_XCXL_BIST_RME_dexcxl_dma_winfo_rme_mask                      (0x00000008)
#define  DE_XCXL_DE_XCXL_BIST_RME_dexcxl_dma_rdat0_rme_mask                      (0x00000004)
#define  DE_XCXL_DE_XCXL_BIST_RME_dexcxl_dma_rdat1_rme_mask                      (0x00000002)
#define  DE_XCXL_DE_XCXL_BIST_RME_dexcxl_dma_rinfo_rme_mask                      (0x00000001)
#define  DE_XCXL_DE_XCXL_BIST_RME_dexcxl_dma_wdat_rme(data)                      (0x00000010&((data)<<4))
#define  DE_XCXL_DE_XCXL_BIST_RME_dexcxl_dma_winfo_rme(data)                     (0x00000008&((data)<<3))
#define  DE_XCXL_DE_XCXL_BIST_RME_dexcxl_dma_rdat0_rme(data)                     (0x00000004&((data)<<2))
#define  DE_XCXL_DE_XCXL_BIST_RME_dexcxl_dma_rdat1_rme(data)                     (0x00000002&((data)<<1))
#define  DE_XCXL_DE_XCXL_BIST_RME_dexcxl_dma_rinfo_rme(data)                     (0x00000001&(data))
#define  DE_XCXL_DE_XCXL_BIST_RME_get_dexcxl_dma_wdat_rme(data)                  ((0x00000010&(data))>>4)
#define  DE_XCXL_DE_XCXL_BIST_RME_get_dexcxl_dma_winfo_rme(data)                 ((0x00000008&(data))>>3)
#define  DE_XCXL_DE_XCXL_BIST_RME_get_dexcxl_dma_rdat0_rme(data)                 ((0x00000004&(data))>>2)
#define  DE_XCXL_DE_XCXL_BIST_RME_get_dexcxl_dma_rdat1_rme(data)                 ((0x00000002&(data))>>1)
#define  DE_XCXL_DE_XCXL_BIST_RME_get_dexcxl_dma_rinfo_rme(data)                 (0x00000001&(data))

#define  DE_XCXL_DE_XCXL_BIST_RM0                                               0x18023994
#define  DE_XCXL_DE_XCXL_BIST_RM0_reg_addr                                       "0xB8023994"
#define  DE_XCXL_DE_XCXL_BIST_RM0_reg                                            0xB8023994
#define  DE_XCXL_DE_XCXL_BIST_RM0_inst_addr                                      "0x0029"
#define  set_DE_XCXL_DE_XCXL_BIST_RM0_reg(data)                                  (*((volatile unsigned int*)DE_XCXL_DE_XCXL_BIST_RM0_reg)=data)
#define  get_DE_XCXL_DE_XCXL_BIST_RM0_reg                                        (*((volatile unsigned int*)DE_XCXL_DE_XCXL_BIST_RM0_reg))
#define  DE_XCXL_DE_XCXL_BIST_RM0_dexcxl_dma_rdat0_rm_shift                      (16)
#define  DE_XCXL_DE_XCXL_BIST_RM0_dexcxl_dma_rdat1_rm_shift                      (12)
#define  DE_XCXL_DE_XCXL_BIST_RM0_dexcxl_dma_rinfo_rm_shift                      (8)
#define  DE_XCXL_DE_XCXL_BIST_RM0_dexcxl_dma_wdat_rm_shift                       (4)
#define  DE_XCXL_DE_XCXL_BIST_RM0_dexcxl_dma_winfo_rm_shift                      (0)
#define  DE_XCXL_DE_XCXL_BIST_RM0_dexcxl_dma_rdat0_rm_mask                       (0x000F0000)
#define  DE_XCXL_DE_XCXL_BIST_RM0_dexcxl_dma_rdat1_rm_mask                       (0x0000F000)
#define  DE_XCXL_DE_XCXL_BIST_RM0_dexcxl_dma_rinfo_rm_mask                       (0x00000F00)
#define  DE_XCXL_DE_XCXL_BIST_RM0_dexcxl_dma_wdat_rm_mask                        (0x000000F0)
#define  DE_XCXL_DE_XCXL_BIST_RM0_dexcxl_dma_winfo_rm_mask                       (0x0000000F)
#define  DE_XCXL_DE_XCXL_BIST_RM0_dexcxl_dma_rdat0_rm(data)                      (0x000F0000&((data)<<16))
#define  DE_XCXL_DE_XCXL_BIST_RM0_dexcxl_dma_rdat1_rm(data)                      (0x0000F000&((data)<<12))
#define  DE_XCXL_DE_XCXL_BIST_RM0_dexcxl_dma_rinfo_rm(data)                      (0x00000F00&((data)<<8))
#define  DE_XCXL_DE_XCXL_BIST_RM0_dexcxl_dma_wdat_rm(data)                       (0x000000F0&((data)<<4))
#define  DE_XCXL_DE_XCXL_BIST_RM0_dexcxl_dma_winfo_rm(data)                      (0x0000000F&(data))
#define  DE_XCXL_DE_XCXL_BIST_RM0_get_dexcxl_dma_rdat0_rm(data)                  ((0x000F0000&(data))>>16)
#define  DE_XCXL_DE_XCXL_BIST_RM0_get_dexcxl_dma_rdat1_rm(data)                  ((0x0000F000&(data))>>12)
#define  DE_XCXL_DE_XCXL_BIST_RM0_get_dexcxl_dma_rinfo_rm(data)                  ((0x00000F00&(data))>>8)
#define  DE_XCXL_DE_XCXL_BIST_RM0_get_dexcxl_dma_wdat_rm(data)                   ((0x000000F0&(data))>>4)
#define  DE_XCXL_DE_XCXL_BIST_RM0_get_dexcxl_dma_winfo_rm(data)                  (0x0000000F&(data))

#define  DE_XCXL_DE_XCXL_BIST_LS                                                0x18023998
#define  DE_XCXL_DE_XCXL_BIST_LS_reg_addr                                        "0xB8023998"
#define  DE_XCXL_DE_XCXL_BIST_LS_reg                                             0xB8023998
#define  DE_XCXL_DE_XCXL_BIST_LS_inst_addr                                       "0x002A"
#define  set_DE_XCXL_DE_XCXL_BIST_LS_reg(data)                                   (*((volatile unsigned int*)DE_XCXL_DE_XCXL_BIST_LS_reg)=data)
#define  get_DE_XCXL_DE_XCXL_BIST_LS_reg                                         (*((volatile unsigned int*)DE_XCXL_DE_XCXL_BIST_LS_reg))
#define  DE_XCXL_DE_XCXL_BIST_LS_dexcxl_dma_wdat_ls_shift                        (4)
#define  DE_XCXL_DE_XCXL_BIST_LS_dexcxl_dma_winfo_ls_shift                       (3)
#define  DE_XCXL_DE_XCXL_BIST_LS_dexcxl_dma_rdat0_ls_shift                       (2)
#define  DE_XCXL_DE_XCXL_BIST_LS_dexcxl_dma_rdat1_ls_shift                       (1)
#define  DE_XCXL_DE_XCXL_BIST_LS_dexcxl_dma_rinfo_ls_shift                       (0)
#define  DE_XCXL_DE_XCXL_BIST_LS_dexcxl_dma_wdat_ls_mask                         (0x00000010)
#define  DE_XCXL_DE_XCXL_BIST_LS_dexcxl_dma_winfo_ls_mask                        (0x00000008)
#define  DE_XCXL_DE_XCXL_BIST_LS_dexcxl_dma_rdat0_ls_mask                        (0x00000004)
#define  DE_XCXL_DE_XCXL_BIST_LS_dexcxl_dma_rdat1_ls_mask                        (0x00000002)
#define  DE_XCXL_DE_XCXL_BIST_LS_dexcxl_dma_rinfo_ls_mask                        (0x00000001)
#define  DE_XCXL_DE_XCXL_BIST_LS_dexcxl_dma_wdat_ls(data)                        (0x00000010&((data)<<4))
#define  DE_XCXL_DE_XCXL_BIST_LS_dexcxl_dma_winfo_ls(data)                       (0x00000008&((data)<<3))
#define  DE_XCXL_DE_XCXL_BIST_LS_dexcxl_dma_rdat0_ls(data)                       (0x00000004&((data)<<2))
#define  DE_XCXL_DE_XCXL_BIST_LS_dexcxl_dma_rdat1_ls(data)                       (0x00000002&((data)<<1))
#define  DE_XCXL_DE_XCXL_BIST_LS_dexcxl_dma_rinfo_ls(data)                       (0x00000001&(data))
#define  DE_XCXL_DE_XCXL_BIST_LS_get_dexcxl_dma_wdat_ls(data)                    ((0x00000010&(data))>>4)
#define  DE_XCXL_DE_XCXL_BIST_LS_get_dexcxl_dma_winfo_ls(data)                   ((0x00000008&(data))>>3)
#define  DE_XCXL_DE_XCXL_BIST_LS_get_dexcxl_dma_rdat0_ls(data)                   ((0x00000004&(data))>>2)
#define  DE_XCXL_DE_XCXL_BIST_LS_get_dexcxl_dma_rdat1_ls(data)                   ((0x00000002&(data))>>1)
#define  DE_XCXL_DE_XCXL_BIST_LS_get_dexcxl_dma_rinfo_ls(data)                   (0x00000001&(data))

#define  DE_XCXL_DE_XCXL_BIST_TESTRWN                                           0x1802399C
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_reg_addr                                   "0xB802399C"
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_reg                                        0xB802399C
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_inst_addr                                  "0x002B"
#define  set_DE_XCXL_DE_XCXL_BIST_TESTRWN_reg(data)                              (*((volatile unsigned int*)DE_XCXL_DE_XCXL_BIST_TESTRWN_reg)=data)
#define  get_DE_XCXL_DE_XCXL_BIST_TESTRWN_reg                                    (*((volatile unsigned int*)DE_XCXL_DE_XCXL_BIST_TESTRWN_reg))
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_wdat_test0_shift                (9)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_winfo_test0_shift               (8)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_rdat0_test0_shift               (7)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_rdat1_test0_shift               (6)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_rinfo_test0_shift               (5)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_wdat_testrwm_shift              (4)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_winfo_testrwm_shift             (3)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_rdat0_testrwm_shift             (2)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_rdat1_testrwm_shift             (1)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_rinfo_testrwm_shift             (0)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_wdat_test0_mask                 (0x00000200)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_winfo_test0_mask                (0x00000100)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_rdat0_test0_mask                (0x00000080)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_rdat1_test0_mask                (0x00000040)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_rinfo_test0_mask                (0x00000020)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_wdat_testrwm_mask               (0x00000010)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_winfo_testrwm_mask              (0x00000008)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_rdat0_testrwm_mask              (0x00000004)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_rdat1_testrwm_mask              (0x00000002)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_rinfo_testrwm_mask              (0x00000001)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_wdat_test0(data)                (0x00000200&((data)<<9))
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_winfo_test0(data)               (0x00000100&((data)<<8))
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_rdat0_test0(data)               (0x00000080&((data)<<7))
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_rdat1_test0(data)               (0x00000040&((data)<<6))
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_rinfo_test0(data)               (0x00000020&((data)<<5))
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_wdat_testrwm(data)              (0x00000010&((data)<<4))
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_winfo_testrwm(data)             (0x00000008&((data)<<3))
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_rdat0_testrwm(data)             (0x00000004&((data)<<2))
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_rdat1_testrwm(data)             (0x00000002&((data)<<1))
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_dexcxl_dma_rinfo_testrwm(data)             (0x00000001&(data))
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_get_dexcxl_dma_wdat_test0(data)            ((0x00000200&(data))>>9)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_get_dexcxl_dma_winfo_test0(data)           ((0x00000100&(data))>>8)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_get_dexcxl_dma_rdat0_test0(data)           ((0x00000080&(data))>>7)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_get_dexcxl_dma_rdat1_test0(data)           ((0x00000040&(data))>>6)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_get_dexcxl_dma_rinfo_test0(data)           ((0x00000020&(data))>>5)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_get_dexcxl_dma_wdat_testrwm(data)          ((0x00000010&(data))>>4)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_get_dexcxl_dma_winfo_testrwm(data)         ((0x00000008&(data))>>3)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_get_dexcxl_dma_rdat0_testrwm(data)         ((0x00000004&(data))>>2)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_get_dexcxl_dma_rdat1_testrwm(data)         ((0x00000002&(data))>>1)
#define  DE_XCXL_DE_XCXL_BIST_TESTRWN_get_dexcxl_dma_rinfo_testrwm(data)         (0x00000001&(data))

#define  DE_XCXL_DATMemStartAdd2_S1                                             0x180239A0
#define  DE_XCXL_DATMemStartAdd2_S1_reg_addr                                     "0xB80239A0"
#define  DE_XCXL_DATMemStartAdd2_S1_reg                                          0xB80239A0
#define  DE_XCXL_DATMemStartAdd2_S1_inst_addr                                    "0x002C"
#define  set_DE_XCXL_DATMemStartAdd2_S1_reg(data)                                (*((volatile unsigned int*)DE_XCXL_DATMemStartAdd2_S1_reg)=data)
#define  get_DE_XCXL_DATMemStartAdd2_S1_reg                                      (*((volatile unsigned int*)DE_XCXL_DATMemStartAdd2_S1_reg))
#define  DE_XCXL_DATMemStartAdd2_S1_s1_dat_mstart_57_29_shift                    (3)
#define  DE_XCXL_DATMemStartAdd2_S1_s1_dat_mstart_57_29_mask                     (0xFFFFFFF8)
#define  DE_XCXL_DATMemStartAdd2_S1_s1_dat_mstart_57_29(data)                    (0xFFFFFFF8&((data)<<3))
#define  DE_XCXL_DATMemStartAdd2_S1_get_s1_dat_mstart_57_29(data)                ((0xFFFFFFF8&(data))>>3)

#define  DE_XCXL_DATMemStartAdd3_S1                                             0x180239A4
#define  DE_XCXL_DATMemStartAdd3_S1_reg_addr                                     "0xB80239A4"
#define  DE_XCXL_DATMemStartAdd3_S1_reg                                          0xB80239A4
#define  DE_XCXL_DATMemStartAdd3_S1_inst_addr                                    "0x002D"
#define  set_DE_XCXL_DATMemStartAdd3_S1_reg(data)                                (*((volatile unsigned int*)DE_XCXL_DATMemStartAdd3_S1_reg)=data)
#define  get_DE_XCXL_DATMemStartAdd3_S1_reg                                      (*((volatile unsigned int*)DE_XCXL_DATMemStartAdd3_S1_reg))
#define  DE_XCXL_DATMemStartAdd3_S1_s1_dat_mstart_28_0_shift                     (3)
#define  DE_XCXL_DATMemStartAdd3_S1_s1_dat_mstart_28_0_mask                      (0xFFFFFFF8)
#define  DE_XCXL_DATMemStartAdd3_S1_s1_dat_mstart_28_0(data)                     (0xFFFFFFF8&((data)<<3))
#define  DE_XCXL_DATMemStartAdd3_S1_get_s1_dat_mstart_28_0(data)                 ((0xFFFFFFF8&(data))>>3)

#define  DE_XCXL_INFMemStartAdd_S1                                              0x180239A8
#define  DE_XCXL_INFMemStartAdd_S1_reg_addr                                      "0xB80239A8"
#define  DE_XCXL_INFMemStartAdd_S1_reg                                           0xB80239A8
#define  DE_XCXL_INFMemStartAdd_S1_inst_addr                                     "0x002E"
#define  set_DE_XCXL_INFMemStartAdd_S1_reg(data)                                 (*((volatile unsigned int*)DE_XCXL_INFMemStartAdd_S1_reg)=data)
#define  get_DE_XCXL_INFMemStartAdd_S1_reg                                       (*((volatile unsigned int*)DE_XCXL_INFMemStartAdd_S1_reg))
#define  DE_XCXL_INFMemStartAdd_S1_s1_inf_mstart_shift                           (3)
#define  DE_XCXL_INFMemStartAdd_S1_s1_inf_mstart_mask                            (0xFFFFFFF8)
#define  DE_XCXL_INFMemStartAdd_S1_s1_inf_mstart(data)                           (0xFFFFFFF8&((data)<<3))
#define  DE_XCXL_INFMemStartAdd_S1_get_s1_inf_mstart(data)                       ((0xFFFFFFF8&(data))>>3)

#define  DE_XCXL_INFMemStartAdd_1_S1                                            0x180239AC
#define  DE_XCXL_INFMemStartAdd_1_S1_reg_addr                                    "0xB80239AC"
#define  DE_XCXL_INFMemStartAdd_1_S1_reg                                         0xB80239AC
#define  DE_XCXL_INFMemStartAdd_1_S1_inst_addr                                   "0x002F"
#define  set_DE_XCXL_INFMemStartAdd_1_S1_reg(data)                               (*((volatile unsigned int*)DE_XCXL_INFMemStartAdd_1_S1_reg)=data)
#define  get_DE_XCXL_INFMemStartAdd_1_S1_reg                                     (*((volatile unsigned int*)DE_XCXL_INFMemStartAdd_1_S1_reg))
#define  DE_XCXL_INFMemStartAdd_1_S1_s1_1_inf_mstart_shift                       (3)
#define  DE_XCXL_INFMemStartAdd_1_S1_s1_1_inf_mstart_mask                        (0xFFFFFFF8)
#define  DE_XCXL_INFMemStartAdd_1_S1_s1_1_inf_mstart(data)                       (0xFFFFFFF8&((data)<<3))
#define  DE_XCXL_INFMemStartAdd_1_S1_get_s1_1_inf_mstart(data)                   ((0xFFFFFFF8&(data))>>3)

#define  DE_XCXL_DATMemStartAdd2_Odd_S1                                         0x180239B0
#define  DE_XCXL_DATMemStartAdd2_Odd_S1_reg_addr                                 "0xB80239B0"
#define  DE_XCXL_DATMemStartAdd2_Odd_S1_reg                                      0xB80239B0
#define  DE_XCXL_DATMemStartAdd2_Odd_S1_inst_addr                                "0x0030"
#define  set_DE_XCXL_DATMemStartAdd2_Odd_S1_reg(data)                            (*((volatile unsigned int*)DE_XCXL_DATMemStartAdd2_Odd_S1_reg)=data)
#define  get_DE_XCXL_DATMemStartAdd2_Odd_S1_reg                                  (*((volatile unsigned int*)DE_XCXL_DATMemStartAdd2_Odd_S1_reg))
#define  DE_XCXL_DATMemStartAdd2_Odd_S1_s1_dat_mstart_odd_57_29_shift            (3)
#define  DE_XCXL_DATMemStartAdd2_Odd_S1_s1_dat_mstart_odd_57_29_mask             (0xFFFFFFF8)
#define  DE_XCXL_DATMemStartAdd2_Odd_S1_s1_dat_mstart_odd_57_29(data)            (0xFFFFFFF8&((data)<<3))
#define  DE_XCXL_DATMemStartAdd2_Odd_S1_get_s1_dat_mstart_odd_57_29(data)        ((0xFFFFFFF8&(data))>>3)

#define  DE_XCXL_DATMemStartAdd3_Odd_S1                                         0x180239B4
#define  DE_XCXL_DATMemStartAdd3_Odd_S1_reg_addr                                 "0xB80239B4"
#define  DE_XCXL_DATMemStartAdd3_Odd_S1_reg                                      0xB80239B4
#define  DE_XCXL_DATMemStartAdd3_Odd_S1_inst_addr                                "0x0031"
#define  set_DE_XCXL_DATMemStartAdd3_Odd_S1_reg(data)                            (*((volatile unsigned int*)DE_XCXL_DATMemStartAdd3_Odd_S1_reg)=data)
#define  get_DE_XCXL_DATMemStartAdd3_Odd_S1_reg                                  (*((volatile unsigned int*)DE_XCXL_DATMemStartAdd3_Odd_S1_reg))
#define  DE_XCXL_DATMemStartAdd3_Odd_S1_s1_dat_mstart_odd_28_0_shift             (3)
#define  DE_XCXL_DATMemStartAdd3_Odd_S1_s1_dat_mstart_odd_28_0_mask              (0xFFFFFFF8)
#define  DE_XCXL_DATMemStartAdd3_Odd_S1_s1_dat_mstart_odd_28_0(data)             (0xFFFFFFF8&((data)<<3))
#define  DE_XCXL_DATMemStartAdd3_Odd_S1_get_s1_dat_mstart_odd_28_0(data)         ((0xFFFFFFF8&(data))>>3)

#define  DE_XCXL_INFMemStartAdd_Odd_S1                                          0x180239B8
#define  DE_XCXL_INFMemStartAdd_Odd_S1_reg_addr                                  "0xB80239B8"
#define  DE_XCXL_INFMemStartAdd_Odd_S1_reg                                       0xB80239B8
#define  DE_XCXL_INFMemStartAdd_Odd_S1_inst_addr                                 "0x0032"
#define  set_DE_XCXL_INFMemStartAdd_Odd_S1_reg(data)                             (*((volatile unsigned int*)DE_XCXL_INFMemStartAdd_Odd_S1_reg)=data)
#define  get_DE_XCXL_INFMemStartAdd_Odd_S1_reg                                   (*((volatile unsigned int*)DE_XCXL_INFMemStartAdd_Odd_S1_reg))
#define  DE_XCXL_INFMemStartAdd_Odd_S1_s1_inf_mstart_odd_shift                   (3)
#define  DE_XCXL_INFMemStartAdd_Odd_S1_s1_inf_mstart_odd_mask                    (0xFFFFFFF8)
#define  DE_XCXL_INFMemStartAdd_Odd_S1_s1_inf_mstart_odd(data)                   (0xFFFFFFF8&((data)<<3))
#define  DE_XCXL_INFMemStartAdd_Odd_S1_get_s1_inf_mstart_odd(data)               ((0xFFFFFFF8&(data))>>3)

#define  DE_XCXL_INFMemStartAdd_Odd_1_S1                                        0x180239C4
#define  DE_XCXL_INFMemStartAdd_Odd_1_S1_reg_addr                                "0xB80239C4"
#define  DE_XCXL_INFMemStartAdd_Odd_1_S1_reg                                     0xB80239C4
#define  DE_XCXL_INFMemStartAdd_Odd_1_S1_inst_addr                               "0x0033"
#define  set_DE_XCXL_INFMemStartAdd_Odd_1_S1_reg(data)                           (*((volatile unsigned int*)DE_XCXL_INFMemStartAdd_Odd_1_S1_reg)=data)
#define  get_DE_XCXL_INFMemStartAdd_Odd_1_S1_reg                                 (*((volatile unsigned int*)DE_XCXL_INFMemStartAdd_Odd_1_S1_reg))
#define  DE_XCXL_INFMemStartAdd_Odd_1_S1_s1_1_inf_mstart_odd_shift               (3)
#define  DE_XCXL_INFMemStartAdd_Odd_1_S1_s1_1_inf_mstart_odd_mask                (0xFFFFFFF8)
#define  DE_XCXL_INFMemStartAdd_Odd_1_S1_s1_1_inf_mstart_odd(data)               (0xFFFFFFF8&((data)<<3))
#define  DE_XCXL_INFMemStartAdd_Odd_1_S1_get_s1_1_inf_mstart_odd(data)           ((0xFFFFFFF8&(data))>>3)

#define  DE_XCXL_de_xcxl_CRC_enable                                             0x180239BC
#define  DE_XCXL_de_xcxl_CRC_enable_reg_addr                                     "0xB80239BC"
#define  DE_XCXL_de_xcxl_CRC_enable_reg                                          0xB80239BC
#define  DE_XCXL_de_xcxl_CRC_enable_inst_addr                                    "0x0034"
#define  set_DE_XCXL_de_xcxl_CRC_enable_reg(data)                                (*((volatile unsigned int*)DE_XCXL_de_xcxl_CRC_enable_reg)=data)
#define  get_DE_XCXL_de_xcxl_CRC_enable_reg                                      (*((volatile unsigned int*)DE_XCXL_de_xcxl_CRC_enable_reg))
#define  DE_XCXL_de_xcxl_CRC_enable_crc_source_sel_shift                         (1)
#define  DE_XCXL_de_xcxl_CRC_enable_crc_en_shift                                 (0)
#define  DE_XCXL_de_xcxl_CRC_enable_crc_source_sel_mask                          (0x00000002)
#define  DE_XCXL_de_xcxl_CRC_enable_crc_en_mask                                  (0x00000001)
#define  DE_XCXL_de_xcxl_CRC_enable_crc_source_sel(data)                         (0x00000002&((data)<<1))
#define  DE_XCXL_de_xcxl_CRC_enable_crc_en(data)                                 (0x00000001&(data))
#define  DE_XCXL_de_xcxl_CRC_enable_get_crc_source_sel(data)                     ((0x00000002&(data))>>1)
#define  DE_XCXL_de_xcxl_CRC_enable_get_crc_en(data)                             (0x00000001&(data))

#define  DE_XCXL_de_xcxl_CRC                                                    0x180239C0
#define  DE_XCXL_de_xcxl_CRC_reg_addr                                            "0xB80239C0"
#define  DE_XCXL_de_xcxl_CRC_reg                                                 0xB80239C0
#define  DE_XCXL_de_xcxl_CRC_inst_addr                                           "0x0035"
#define  set_DE_XCXL_de_xcxl_CRC_reg(data)                                       (*((volatile unsigned int*)DE_XCXL_de_xcxl_CRC_reg)=data)
#define  get_DE_XCXL_de_xcxl_CRC_reg                                             (*((volatile unsigned int*)DE_XCXL_de_xcxl_CRC_reg))
#define  DE_XCXL_de_xcxl_CRC_crc_result_shift                                    (0)
#define  DE_XCXL_de_xcxl_CRC_crc_result_mask                                     (0xFFFFFFFF)
#define  DE_XCXL_de_xcxl_CRC_crc_result(data)                                    (0xFFFFFFFF&(data))
#define  DE_XCXL_de_xcxl_CRC_get_crc_result(data)                                (0xFFFFFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======DE_XCXL register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vo_pause_en:1;
        RBus_UInt32  res1:19;
        RBus_UInt32  dexc_info_rolling_en:1;
        RBus_UInt32  dexc_info_comp:1;
        RBus_UInt32  dexc_data_format:1;
        RBus_UInt32  dexc_detect_type:2;
        RBus_UInt32  sm_size_change_hw_detect_en:1;
        RBus_UInt32  dexc_reset:1;
        RBus_UInt32  dexc_spatial_correction_en:1;
        RBus_UInt32  dexc_debug_en:1;
        RBus_UInt32  dexc_debug_mode:2;
        RBus_UInt32  dexc_en:1;
    };
}de_xcxl_de_xcxl_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  dexc_hold_th:6;
        RBus_UInt32  dexc_step_lv1:4;
        RBus_UInt32  dexc_step_lv2:4;
        RBus_UInt32  dexc_step_still:4;
        RBus_UInt32  dexc_step_notxc:4;
    };
}de_xcxl_de_xcxl_temporal_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  dexc_hold_th_pal:6;
        RBus_UInt32  dexc_step_lv1_pal:4;
        RBus_UInt32  dexc_step_lv2_pal:4;
        RBus_UInt32  dexc_step_still_pal:4;
        RBus_UInt32  dexc_step_notxc_pal:4;
    };
}de_xcxl_de_xcxl_temporal_step_pal_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dexc_y_error_th1:10;
        RBus_UInt32  dexc_y_error_th2:10;
        RBus_UInt32  dexc_y_amp_th:10;
    };
}de_xcxl_de_xcxl_classify_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dexc_y_error_th1_pal:10;
        RBus_UInt32  dexc_y_error_th2_pal:10;
        RBus_UInt32  dexc_y_amp_th_pal:10;
    };
}de_xcxl_de_xcxl_classify_y_pal_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dexc_c_error_th1:10;
        RBus_UInt32  dexc_c_error_th2:10;
        RBus_UInt32  dexc_c_amp_th:10;
    };
}de_xcxl_de_xcxl_classify_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dexc_c_error_th1_pal:10;
        RBus_UInt32  dexc_c_error_th2_pal:10;
        RBus_UInt32  dexc_c_amp_th_pal:10;
    };
}de_xcxl_de_xcxl_classify_c_pal_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexc_blending_table_7:4;
        RBus_UInt32  dexc_blending_table_6:4;
        RBus_UInt32  dexc_blending_table_5:4;
        RBus_UInt32  dexc_blending_table_4:4;
        RBus_UInt32  dexc_blending_table_3:4;
        RBus_UInt32  dexc_blending_table_2:4;
        RBus_UInt32  dexc_blending_table_1:4;
        RBus_UInt32  dexc_blending_table_0:4;
    };
}de_xcxl_de_xcxl_blend_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  dexc_count_weighting_th_ntsc:6;
        RBus_UInt32  res2:10;
        RBus_UInt32  dexc_count_weighting_th_pal:6;
    };
}de_xcxl_de_xcxl_weight_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  dexc_xl_count:21;
    };
}de_xcxl_de_xcxl_xl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  dexc_xc_count:21;
    };
}de_xcxl_de_xcxl_xc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  dexc_xl_count_pal:21;
    };
}de_xcxl_de_xcxl_xl_pal_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  dexc_xc_count_pal:21;
    };
}de_xcxl_de_xcxl_xc_pal_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  dexc_spatial_corr_imp_cancel:1;
        RBus_UInt32  dexc_smooth_th:8;
        RBus_UInt32  dexc_sat_th:8;
    };
}de_xcxl_de_xcxl_smooth_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  height:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  width:13;
    };
}de_xcxl_frame_format_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s0_1_inf_mstart:29;
        RBus_UInt32  res1:3;
    };
}de_xcxl_infmemstartadd_1_s0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  inf_rolling_err_detect_en:1;
        RBus_UInt32  inf_rolling_error:1;
        RBus_UInt32  res1:30;
    };
}de_xcxl_infmemrolling_err_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s0_dat_mstart_57_29:29;
        RBus_UInt32  res1:3;
    };
}de_xcxl_datmemstartadd2_s0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s0_dat_mstart_28_0:29;
        RBus_UInt32  res1:3;
    };
}de_xcxl_datmemstartadd3_s0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s0_inf_mstart:29;
        RBus_UInt32  res1:3;
    };
}de_xcxl_infmemstartadd_s0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  dat_len_r1:7;
        RBus_UInt32  dat_num_r1:16;
    };
}de_xcxl_rdatdma_set1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  dat_len_r2:7;
        RBus_UInt32  dat_num_r2:16;
    };
}de_xcxl_rdatdma_set2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  dat_len_w:7;
        RBus_UInt32  dat_num_w:16;
    };
}de_xcxl_wdatdma_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  wdma_remain_en:1;
        RBus_UInt32  dat_remain_w:7;
        RBus_UInt32  rdma1_remain_en:1;
        RBus_UInt32  dat_remain_r1:7;
        RBus_UInt32  rdma2_remain_en:1;
        RBus_UInt32  dat_remain_r2:7;
    };
}de_xcxl_datdma_rm_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  inf_len_r:7;
        RBus_UInt32  res2:16;
    };
}de_xcxl_rinfdma_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  inf_len_w:7;
        RBus_UInt32  res2:16;
    };
}de_xcxl_winfdma_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  info_128_count:20;
    };
}de_xcxl_info_dma_count_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexcxl_fifoerr_ie:1;
        RBus_UInt32  res1:16;
        RBus_UInt32  dexcxl_flag_clr:5;
        RBus_UInt32  dexcxl_ovfl:5;
        RBus_UInt32  dexcxl_unfl:5;
    };
}de_xcxl_de_xcxl_dmastatus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dexcxl_vs_reset_en:1;
        RBus_UInt32  res2:29;
    };
}de_xcxl_de_xcxl_wde_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexcxl_wrrd_downlimit_adr:29;
        RBus_UInt32  res1:3;
    };
}de_xcxl_wrrd_bndaddr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexcxl_wrrd_uplimit_adr:29;
        RBus_UInt32  res1:3;
    };
}de_xcxl_wrrd_bndaddr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  dexcxl_wrrd_downup_limit_ov_clearstatus:1;
        RBus_UInt32  dexcxl_wr_downlimit_ov:2;
        RBus_UInt32  dexcxl_wr_uplimit_ov:2;
        RBus_UInt32  res2:5;
        RBus_UInt32  dexcxl_rd_downlimit_ov:3;
        RBus_UInt32  res3:5;
        RBus_UInt32  dexcxl_rd_uplimit_ov:3;
    };
}de_xcxl_wrrd_bndaddr_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s0_1_inf_mstart_odd:29;
        RBus_UInt32  res1:3;
    };
}de_xcxl_infmemstartadd_1_odd_s0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s0_dat_mstart_odd_57_29:29;
        RBus_UInt32  res1:3;
    };
}de_xcxl_datmemstartadd2_odd_s0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s0_dat_mstart_odd_28_0:29;
        RBus_UInt32  res1:3;
    };
}de_xcxl_datmemstartadd3_odd_s0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s0_inf_mstart_odd:29;
        RBus_UInt32  res1:3;
    };
}de_xcxl_infmemstartadd_odd_s0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  db_read:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  db_apply:1;
    };
}de_xcxl_de_xcxl_db_reg_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_info_first:1;
        RBus_UInt32  res1:23;
        RBus_UInt32  rdma_req_num:4;
        RBus_UInt32  wdma_req_num:4;
    };
}de_xcxl_dma_multi_req_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  dexcxl_wdat_bist_fail:1;
        RBus_UInt32  dexcxl_winfo_bist_fail:1;
        RBus_UInt32  dexcxl_rdat0_bist_fail:1;
        RBus_UInt32  dexcxl_rdat1_bist_fail:1;
        RBus_UInt32  dexcxl_rinfo_bist_fail:1;
    };
}de_xcxl_de_xcxl_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  dexcxl_wdat_drf_fail:1;
        RBus_UInt32  dexcxl_winfo_drf_fail:1;
        RBus_UInt32  dexcxl_rdat0_drf_fail:1;
        RBus_UInt32  dexcxl_rdat1_drf_fail:1;
        RBus_UInt32  dexcxl_rinfo_drf_fail:1;
    };
}de_xcxl_de_xcxl_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  dexcxl_dma_wdat_rme:1;
        RBus_UInt32  dexcxl_dma_winfo_rme:1;
        RBus_UInt32  dexcxl_dma_rdat0_rme:1;
        RBus_UInt32  dexcxl_dma_rdat1_rme:1;
        RBus_UInt32  dexcxl_dma_rinfo_rme:1;
    };
}de_xcxl_de_xcxl_bist_rme_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  dexcxl_dma_rdat0_rm:4;
        RBus_UInt32  dexcxl_dma_rdat1_rm:4;
        RBus_UInt32  dexcxl_dma_rinfo_rm:4;
        RBus_UInt32  dexcxl_dma_wdat_rm:4;
        RBus_UInt32  dexcxl_dma_winfo_rm:4;
    };
}de_xcxl_de_xcxl_bist_rm0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  dexcxl_dma_wdat_ls:1;
        RBus_UInt32  dexcxl_dma_winfo_ls:1;
        RBus_UInt32  dexcxl_dma_rdat0_ls:1;
        RBus_UInt32  dexcxl_dma_rdat1_ls:1;
        RBus_UInt32  dexcxl_dma_rinfo_ls:1;
    };
}de_xcxl_de_xcxl_bist_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  dexcxl_dma_wdat_test0:1;
        RBus_UInt32  dexcxl_dma_winfo_test0:1;
        RBus_UInt32  dexcxl_dma_rdat0_test0:1;
        RBus_UInt32  dexcxl_dma_rdat1_test0:1;
        RBus_UInt32  dexcxl_dma_rinfo_test0:1;
        RBus_UInt32  dexcxl_dma_wdat_testrwm:1;
        RBus_UInt32  dexcxl_dma_winfo_testrwm:1;
        RBus_UInt32  dexcxl_dma_rdat0_testrwm:1;
        RBus_UInt32  dexcxl_dma_rdat1_testrwm:1;
        RBus_UInt32  dexcxl_dma_rinfo_testrwm:1;
    };
}de_xcxl_de_xcxl_bist_testrwn_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_dat_mstart_57_29:29;
        RBus_UInt32  res1:3;
    };
}de_xcxl_datmemstartadd2_s1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_dat_mstart_28_0:29;
        RBus_UInt32  res1:3;
    };
}de_xcxl_datmemstartadd3_s1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_inf_mstart:29;
        RBus_UInt32  res1:3;
    };
}de_xcxl_infmemstartadd_s1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_1_inf_mstart:29;
        RBus_UInt32  res1:3;
    };
}de_xcxl_infmemstartadd_1_s1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_dat_mstart_odd_57_29:29;
        RBus_UInt32  res1:3;
    };
}de_xcxl_datmemstartadd2_odd_s1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_dat_mstart_odd_28_0:29;
        RBus_UInt32  res1:3;
    };
}de_xcxl_datmemstartadd3_odd_s1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_inf_mstart_odd:29;
        RBus_UInt32  res1:3;
    };
}de_xcxl_infmemstartadd_odd_s1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_1_inf_mstart_odd:29;
        RBus_UInt32  res1:3;
    };
}de_xcxl_infmemstartadd_odd_1_s1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  crc_source_sel:1;
        RBus_UInt32  crc_en:1;
    };
}de_xcxl_de_xcxl_crc_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_result:32;
    };
}de_xcxl_de_xcxl_crc_RBUS;

#else //apply LITTLE_ENDIAN

//======DE_XCXL register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexc_en:1;
        RBus_UInt32  dexc_debug_mode:2;
        RBus_UInt32  dexc_debug_en:1;
        RBus_UInt32  dexc_spatial_correction_en:1;
        RBus_UInt32  dexc_reset:1;
        RBus_UInt32  sm_size_change_hw_detect_en:1;
        RBus_UInt32  dexc_detect_type:2;
        RBus_UInt32  dexc_data_format:1;
        RBus_UInt32  dexc_info_comp:1;
        RBus_UInt32  dexc_info_rolling_en:1;
        RBus_UInt32  res1:19;
        RBus_UInt32  vo_pause_en:1;
    };
}de_xcxl_de_xcxl_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexc_step_notxc:4;
        RBus_UInt32  dexc_step_still:4;
        RBus_UInt32  dexc_step_lv2:4;
        RBus_UInt32  dexc_step_lv1:4;
        RBus_UInt32  dexc_hold_th:6;
        RBus_UInt32  res1:10;
    };
}de_xcxl_de_xcxl_temporal_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexc_step_notxc_pal:4;
        RBus_UInt32  dexc_step_still_pal:4;
        RBus_UInt32  dexc_step_lv2_pal:4;
        RBus_UInt32  dexc_step_lv1_pal:4;
        RBus_UInt32  dexc_hold_th_pal:6;
        RBus_UInt32  res1:10;
    };
}de_xcxl_de_xcxl_temporal_step_pal_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexc_y_amp_th:10;
        RBus_UInt32  dexc_y_error_th2:10;
        RBus_UInt32  dexc_y_error_th1:10;
        RBus_UInt32  res1:2;
    };
}de_xcxl_de_xcxl_classify_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexc_y_amp_th_pal:10;
        RBus_UInt32  dexc_y_error_th2_pal:10;
        RBus_UInt32  dexc_y_error_th1_pal:10;
        RBus_UInt32  res1:2;
    };
}de_xcxl_de_xcxl_classify_y_pal_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexc_c_amp_th:10;
        RBus_UInt32  dexc_c_error_th2:10;
        RBus_UInt32  dexc_c_error_th1:10;
        RBus_UInt32  res1:2;
    };
}de_xcxl_de_xcxl_classify_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexc_c_amp_th_pal:10;
        RBus_UInt32  dexc_c_error_th2_pal:10;
        RBus_UInt32  dexc_c_error_th1_pal:10;
        RBus_UInt32  res1:2;
    };
}de_xcxl_de_xcxl_classify_c_pal_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexc_blending_table_0:4;
        RBus_UInt32  dexc_blending_table_1:4;
        RBus_UInt32  dexc_blending_table_2:4;
        RBus_UInt32  dexc_blending_table_3:4;
        RBus_UInt32  dexc_blending_table_4:4;
        RBus_UInt32  dexc_blending_table_5:4;
        RBus_UInt32  dexc_blending_table_6:4;
        RBus_UInt32  dexc_blending_table_7:4;
    };
}de_xcxl_de_xcxl_blend_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexc_count_weighting_th_pal:6;
        RBus_UInt32  res1:10;
        RBus_UInt32  dexc_count_weighting_th_ntsc:6;
        RBus_UInt32  res2:10;
    };
}de_xcxl_de_xcxl_weight_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexc_xl_count:21;
        RBus_UInt32  res1:11;
    };
}de_xcxl_de_xcxl_xl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexc_xc_count:21;
        RBus_UInt32  res1:11;
    };
}de_xcxl_de_xcxl_xc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexc_xl_count_pal:21;
        RBus_UInt32  res1:11;
    };
}de_xcxl_de_xcxl_xl_pal_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexc_xc_count_pal:21;
        RBus_UInt32  res1:11;
    };
}de_xcxl_de_xcxl_xc_pal_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexc_sat_th:8;
        RBus_UInt32  dexc_smooth_th:8;
        RBus_UInt32  dexc_spatial_corr_imp_cancel:1;
        RBus_UInt32  res1:15;
    };
}de_xcxl_de_xcxl_smooth_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  width:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  height:12;
        RBus_UInt32  res2:4;
    };
}de_xcxl_frame_format_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s0_1_inf_mstart:29;
    };
}de_xcxl_infmemstartadd_1_s0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  inf_rolling_error:1;
        RBus_UInt32  inf_rolling_err_detect_en:1;
    };
}de_xcxl_infmemrolling_err_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s0_dat_mstart_57_29:29;
    };
}de_xcxl_datmemstartadd2_s0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s0_dat_mstart_28_0:29;
    };
}de_xcxl_datmemstartadd3_s0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s0_inf_mstart:29;
    };
}de_xcxl_infmemstartadd_s0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dat_num_r1:16;
        RBus_UInt32  dat_len_r1:7;
        RBus_UInt32  res1:9;
    };
}de_xcxl_rdatdma_set1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dat_num_r2:16;
        RBus_UInt32  dat_len_r2:7;
        RBus_UInt32  res1:9;
    };
}de_xcxl_rdatdma_set2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dat_num_w:16;
        RBus_UInt32  dat_len_w:7;
        RBus_UInt32  res1:9;
    };
}de_xcxl_wdatdma_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dat_remain_r2:7;
        RBus_UInt32  rdma2_remain_en:1;
        RBus_UInt32  dat_remain_r1:7;
        RBus_UInt32  rdma1_remain_en:1;
        RBus_UInt32  dat_remain_w:7;
        RBus_UInt32  wdma_remain_en:1;
        RBus_UInt32  res1:8;
    };
}de_xcxl_datdma_rm_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  inf_len_r:7;
        RBus_UInt32  res2:9;
    };
}de_xcxl_rinfdma_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  inf_len_w:7;
        RBus_UInt32  res2:9;
    };
}de_xcxl_winfdma_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  info_128_count:20;
        RBus_UInt32  res1:12;
    };
}de_xcxl_info_dma_count_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexcxl_unfl:5;
        RBus_UInt32  dexcxl_ovfl:5;
        RBus_UInt32  dexcxl_flag_clr:5;
        RBus_UInt32  res1:16;
        RBus_UInt32  dexcxl_fifoerr_ie:1;
    };
}de_xcxl_de_xcxl_dmastatus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  dexcxl_vs_reset_en:1;
        RBus_UInt32  res2:2;
    };
}de_xcxl_de_xcxl_wde_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  dexcxl_wrrd_downlimit_adr:29;
    };
}de_xcxl_wrrd_bndaddr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  dexcxl_wrrd_uplimit_adr:29;
    };
}de_xcxl_wrrd_bndaddr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexcxl_rd_uplimit_ov:3;
        RBus_UInt32  res1:5;
        RBus_UInt32  dexcxl_rd_downlimit_ov:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  dexcxl_wr_uplimit_ov:2;
        RBus_UInt32  dexcxl_wr_downlimit_ov:2;
        RBus_UInt32  dexcxl_wrrd_downup_limit_ov_clearstatus:1;
        RBus_UInt32  res3:11;
    };
}de_xcxl_wrrd_bndaddr_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s0_1_inf_mstart_odd:29;
    };
}de_xcxl_infmemstartadd_1_odd_s0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s0_dat_mstart_odd_57_29:29;
    };
}de_xcxl_datmemstartadd2_odd_s0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s0_dat_mstart_odd_28_0:29;
    };
}de_xcxl_datmemstartadd3_odd_s0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s0_inf_mstart_odd:29;
    };
}de_xcxl_infmemstartadd_odd_s0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  db_apply:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  db_read:1;
        RBus_UInt32  res1:29;
    };
}de_xcxl_de_xcxl_db_reg_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wdma_req_num:4;
        RBus_UInt32  rdma_req_num:4;
        RBus_UInt32  res1:23;
        RBus_UInt32  dma_info_first:1;
    };
}de_xcxl_dma_multi_req_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexcxl_rinfo_bist_fail:1;
        RBus_UInt32  dexcxl_rdat1_bist_fail:1;
        RBus_UInt32  dexcxl_rdat0_bist_fail:1;
        RBus_UInt32  dexcxl_winfo_bist_fail:1;
        RBus_UInt32  dexcxl_wdat_bist_fail:1;
        RBus_UInt32  res1:27;
    };
}de_xcxl_de_xcxl_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexcxl_rinfo_drf_fail:1;
        RBus_UInt32  dexcxl_rdat1_drf_fail:1;
        RBus_UInt32  dexcxl_rdat0_drf_fail:1;
        RBus_UInt32  dexcxl_winfo_drf_fail:1;
        RBus_UInt32  dexcxl_wdat_drf_fail:1;
        RBus_UInt32  res1:27;
    };
}de_xcxl_de_xcxl_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexcxl_dma_rinfo_rme:1;
        RBus_UInt32  dexcxl_dma_rdat1_rme:1;
        RBus_UInt32  dexcxl_dma_rdat0_rme:1;
        RBus_UInt32  dexcxl_dma_winfo_rme:1;
        RBus_UInt32  dexcxl_dma_wdat_rme:1;
        RBus_UInt32  res1:27;
    };
}de_xcxl_de_xcxl_bist_rme_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexcxl_dma_winfo_rm:4;
        RBus_UInt32  dexcxl_dma_wdat_rm:4;
        RBus_UInt32  dexcxl_dma_rinfo_rm:4;
        RBus_UInt32  dexcxl_dma_rdat1_rm:4;
        RBus_UInt32  dexcxl_dma_rdat0_rm:4;
        RBus_UInt32  res1:12;
    };
}de_xcxl_de_xcxl_bist_rm0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexcxl_dma_rinfo_ls:1;
        RBus_UInt32  dexcxl_dma_rdat1_ls:1;
        RBus_UInt32  dexcxl_dma_rdat0_ls:1;
        RBus_UInt32  dexcxl_dma_winfo_ls:1;
        RBus_UInt32  dexcxl_dma_wdat_ls:1;
        RBus_UInt32  res1:27;
    };
}de_xcxl_de_xcxl_bist_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dexcxl_dma_rinfo_testrwm:1;
        RBus_UInt32  dexcxl_dma_rdat1_testrwm:1;
        RBus_UInt32  dexcxl_dma_rdat0_testrwm:1;
        RBus_UInt32  dexcxl_dma_winfo_testrwm:1;
        RBus_UInt32  dexcxl_dma_wdat_testrwm:1;
        RBus_UInt32  dexcxl_dma_rinfo_test0:1;
        RBus_UInt32  dexcxl_dma_rdat1_test0:1;
        RBus_UInt32  dexcxl_dma_rdat0_test0:1;
        RBus_UInt32  dexcxl_dma_winfo_test0:1;
        RBus_UInt32  dexcxl_dma_wdat_test0:1;
        RBus_UInt32  res1:22;
    };
}de_xcxl_de_xcxl_bist_testrwn_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s1_dat_mstart_57_29:29;
    };
}de_xcxl_datmemstartadd2_s1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s1_dat_mstart_28_0:29;
    };
}de_xcxl_datmemstartadd3_s1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s1_inf_mstart:29;
    };
}de_xcxl_infmemstartadd_s1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s1_1_inf_mstart:29;
    };
}de_xcxl_infmemstartadd_1_s1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s1_dat_mstart_odd_57_29:29;
    };
}de_xcxl_datmemstartadd2_odd_s1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s1_dat_mstart_odd_28_0:29;
    };
}de_xcxl_datmemstartadd3_odd_s1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s1_inf_mstart_odd:29;
    };
}de_xcxl_infmemstartadd_odd_s1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s1_1_inf_mstart_odd:29;
    };
}de_xcxl_infmemstartadd_odd_1_s1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_en:1;
        RBus_UInt32  crc_source_sel:1;
        RBus_UInt32  res1:30;
    };
}de_xcxl_de_xcxl_crc_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_result:32;
    };
}de_xcxl_de_xcxl_crc_RBUS;




#endif 


#endif 
