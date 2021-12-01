/**
* @file Merlin5-DesignSpec-D-Domain_ConBri
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_CON_BRI_REG_H_
#define _RBUS_CON_BRI_REG_H_

#include "rbus_types.h"



//  CON_BRI Register Address
#define  CON_BRI_DM_Double_Buffer_CTRL                                          0x1802A850
#define  CON_BRI_DM_Double_Buffer_CTRL_reg_addr                                  "0xB802A850"
#define  CON_BRI_DM_Double_Buffer_CTRL_reg                                       0xB802A850
#define  CON_BRI_DM_Double_Buffer_CTRL_inst_addr                                 "0x0000"
#define  set_CON_BRI_DM_Double_Buffer_CTRL_reg(data)                             (*((volatile unsigned int*)CON_BRI_DM_Double_Buffer_CTRL_reg)=data)
#define  get_CON_BRI_DM_Double_Buffer_CTRL_reg                                   (*((volatile unsigned int*)CON_BRI_DM_Double_Buffer_CTRL_reg))
#define  CON_BRI_DM_Double_Buffer_CTRL_conbri_dbuf_en_shift                      (2)
#define  CON_BRI_DM_Double_Buffer_CTRL_conbri_dbuf_read_sel_shift                (1)
#define  CON_BRI_DM_Double_Buffer_CTRL_conbri_dbuf_set_shift                     (0)
#define  CON_BRI_DM_Double_Buffer_CTRL_conbri_dbuf_en_mask                       (0x00000004)
#define  CON_BRI_DM_Double_Buffer_CTRL_conbri_dbuf_read_sel_mask                 (0x00000002)
#define  CON_BRI_DM_Double_Buffer_CTRL_conbri_dbuf_set_mask                      (0x00000001)
#define  CON_BRI_DM_Double_Buffer_CTRL_conbri_dbuf_en(data)                      (0x00000004&((data)<<2))
#define  CON_BRI_DM_Double_Buffer_CTRL_conbri_dbuf_read_sel(data)                (0x00000002&((data)<<1))
#define  CON_BRI_DM_Double_Buffer_CTRL_conbri_dbuf_set(data)                     (0x00000001&(data))
#define  CON_BRI_DM_Double_Buffer_CTRL_get_conbri_dbuf_en(data)                  ((0x00000004&(data))>>2)
#define  CON_BRI_DM_Double_Buffer_CTRL_get_conbri_dbuf_read_sel(data)            ((0x00000002&(data))>>1)
#define  CON_BRI_DM_Double_Buffer_CTRL_get_conbri_dbuf_set(data)                 (0x00000001&(data))

#define  CON_BRI_DM_COLOR_RGB_CTRL1                                             0x1802A84C
#define  CON_BRI_DM_COLOR_RGB_CTRL1_reg_addr                                     "0xB802A84C"
#define  CON_BRI_DM_COLOR_RGB_CTRL1_reg                                          0xB802A84C
#define  CON_BRI_DM_COLOR_RGB_CTRL1_inst_addr                                    "0x0001"
#define  set_CON_BRI_DM_COLOR_RGB_CTRL1_reg(data)                                (*((volatile unsigned int*)CON_BRI_DM_COLOR_RGB_CTRL1_reg)=data)
#define  get_CON_BRI_DM_COLOR_RGB_CTRL1_reg                                      (*((volatile unsigned int*)CON_BRI_DM_COLOR_RGB_CTRL1_reg))
#define  CON_BRI_DM_COLOR_RGB_CTRL1_blending_mode_sel_shift                      (31)
#define  CON_BRI_DM_COLOR_RGB_CTRL1_new_m_blending_factor_shift                  (12)
#define  CON_BRI_DM_COLOR_RGB_CTRL1_new_s_blending_factor_shift                  (0)
#define  CON_BRI_DM_COLOR_RGB_CTRL1_blending_mode_sel_mask                       (0x80000000)
#define  CON_BRI_DM_COLOR_RGB_CTRL1_new_m_blending_factor_mask                   (0x001FF000)
#define  CON_BRI_DM_COLOR_RGB_CTRL1_new_s_blending_factor_mask                   (0x000001FF)
#define  CON_BRI_DM_COLOR_RGB_CTRL1_blending_mode_sel(data)                      (0x80000000&((data)<<31))
#define  CON_BRI_DM_COLOR_RGB_CTRL1_new_m_blending_factor(data)                  (0x001FF000&((data)<<12))
#define  CON_BRI_DM_COLOR_RGB_CTRL1_new_s_blending_factor(data)                  (0x000001FF&(data))
#define  CON_BRI_DM_COLOR_RGB_CTRL1_get_blending_mode_sel(data)                  ((0x80000000&(data))>>31)
#define  CON_BRI_DM_COLOR_RGB_CTRL1_get_new_m_blending_factor(data)              ((0x001FF000&(data))>>12)
#define  CON_BRI_DM_COLOR_RGB_CTRL1_get_new_s_blending_factor(data)              (0x000001FF&(data))

#define  CON_BRI_DM_COLOR_RGB_CTRL                                              0x1802A800
#define  CON_BRI_DM_COLOR_RGB_CTRL_reg_addr                                      "0xB802A800"
#define  CON_BRI_DM_COLOR_RGB_CTRL_reg                                           0xB802A800
#define  CON_BRI_DM_COLOR_RGB_CTRL_inst_addr                                     "0x0002"
#define  set_CON_BRI_DM_COLOR_RGB_CTRL_reg(data)                                 (*((volatile unsigned int*)CON_BRI_DM_COLOR_RGB_CTRL_reg)=data)
#define  get_CON_BRI_DM_COLOR_RGB_CTRL_reg                                       (*((volatile unsigned int*)CON_BRI_DM_COLOR_RGB_CTRL_reg))
#define  CON_BRI_DM_COLOR_RGB_CTRL_m_blending_factor_shift                       (24)
#define  CON_BRI_DM_COLOR_RGB_CTRL_con_bri_mode_shift                            (4)
#define  CON_BRI_DM_COLOR_RGB_CTRL_m_con_toggle_shift                            (3)
#define  CON_BRI_DM_COLOR_RGB_CTRL_m_bri_toggle_shift                            (2)
#define  CON_BRI_DM_COLOR_RGB_CTRL_m_con_en_shift                                (1)
#define  CON_BRI_DM_COLOR_RGB_CTRL_m_bri_en_shift                                (0)
#define  CON_BRI_DM_COLOR_RGB_CTRL_m_blending_factor_mask                        (0xFF000000)
#define  CON_BRI_DM_COLOR_RGB_CTRL_con_bri_mode_mask                             (0x00000010)
#define  CON_BRI_DM_COLOR_RGB_CTRL_m_con_toggle_mask                             (0x00000008)
#define  CON_BRI_DM_COLOR_RGB_CTRL_m_bri_toggle_mask                             (0x00000004)
#define  CON_BRI_DM_COLOR_RGB_CTRL_m_con_en_mask                                 (0x00000002)
#define  CON_BRI_DM_COLOR_RGB_CTRL_m_bri_en_mask                                 (0x00000001)
#define  CON_BRI_DM_COLOR_RGB_CTRL_m_blending_factor(data)                       (0xFF000000&((data)<<24))
#define  CON_BRI_DM_COLOR_RGB_CTRL_con_bri_mode(data)                            (0x00000010&((data)<<4))
#define  CON_BRI_DM_COLOR_RGB_CTRL_m_con_toggle(data)                            (0x00000008&((data)<<3))
#define  CON_BRI_DM_COLOR_RGB_CTRL_m_bri_toggle(data)                            (0x00000004&((data)<<2))
#define  CON_BRI_DM_COLOR_RGB_CTRL_m_con_en(data)                                (0x00000002&((data)<<1))
#define  CON_BRI_DM_COLOR_RGB_CTRL_m_bri_en(data)                                (0x00000001&(data))
#define  CON_BRI_DM_COLOR_RGB_CTRL_get_m_blending_factor(data)                   ((0xFF000000&(data))>>24)
#define  CON_BRI_DM_COLOR_RGB_CTRL_get_con_bri_mode(data)                        ((0x00000010&(data))>>4)
#define  CON_BRI_DM_COLOR_RGB_CTRL_get_m_con_toggle(data)                        ((0x00000008&(data))>>3)
#define  CON_BRI_DM_COLOR_RGB_CTRL_get_m_bri_toggle(data)                        ((0x00000004&(data))>>2)
#define  CON_BRI_DM_COLOR_RGB_CTRL_get_m_con_en(data)                            ((0x00000002&(data))>>1)
#define  CON_BRI_DM_COLOR_RGB_CTRL_get_m_bri_en(data)                            (0x00000001&(data))

#define  CON_BRI_DM_CONTRAST_A                                                  0x1802A804
#define  CON_BRI_DM_CONTRAST_A_reg_addr                                          "0xB802A804"
#define  CON_BRI_DM_CONTRAST_A_reg                                               0xB802A804
#define  CON_BRI_DM_CONTRAST_A_inst_addr                                         "0x0003"
#define  set_CON_BRI_DM_CONTRAST_A_reg(data)                                     (*((volatile unsigned int*)CON_BRI_DM_CONTRAST_A_reg)=data)
#define  get_CON_BRI_DM_CONTRAST_A_reg                                           (*((volatile unsigned int*)CON_BRI_DM_CONTRAST_A_reg))
#define  CON_BRI_DM_CONTRAST_A_m_con_a_r_shift                                   (20)
#define  CON_BRI_DM_CONTRAST_A_m_con_a_g_shift                                   (10)
#define  CON_BRI_DM_CONTRAST_A_m_con_a_b_shift                                   (0)
#define  CON_BRI_DM_CONTRAST_A_m_con_a_r_mask                                    (0x3FF00000)
#define  CON_BRI_DM_CONTRAST_A_m_con_a_g_mask                                    (0x000FFC00)
#define  CON_BRI_DM_CONTRAST_A_m_con_a_b_mask                                    (0x000003FF)
#define  CON_BRI_DM_CONTRAST_A_m_con_a_r(data)                                   (0x3FF00000&((data)<<20))
#define  CON_BRI_DM_CONTRAST_A_m_con_a_g(data)                                   (0x000FFC00&((data)<<10))
#define  CON_BRI_DM_CONTRAST_A_m_con_a_b(data)                                   (0x000003FF&(data))
#define  CON_BRI_DM_CONTRAST_A_get_m_con_a_r(data)                               ((0x3FF00000&(data))>>20)
#define  CON_BRI_DM_CONTRAST_A_get_m_con_a_g(data)                               ((0x000FFC00&(data))>>10)
#define  CON_BRI_DM_CONTRAST_A_get_m_con_a_b(data)                               (0x000003FF&(data))

#define  CON_BRI_DM_Brightness_1                                                0x1802A808
#define  CON_BRI_DM_Brightness_1_reg_addr                                        "0xB802A808"
#define  CON_BRI_DM_Brightness_1_reg                                             0xB802A808
#define  CON_BRI_DM_Brightness_1_inst_addr                                       "0x0004"
#define  set_CON_BRI_DM_Brightness_1_reg(data)                                   (*((volatile unsigned int*)CON_BRI_DM_Brightness_1_reg)=data)
#define  get_CON_BRI_DM_Brightness_1_reg                                         (*((volatile unsigned int*)CON_BRI_DM_Brightness_1_reg))
#define  CON_BRI_DM_Brightness_1_m_bri1_r_shift                                  (20)
#define  CON_BRI_DM_Brightness_1_m_bri1_g_shift                                  (10)
#define  CON_BRI_DM_Brightness_1_m_bri1_b_shift                                  (0)
#define  CON_BRI_DM_Brightness_1_m_bri1_r_mask                                   (0x3FF00000)
#define  CON_BRI_DM_Brightness_1_m_bri1_g_mask                                   (0x000FFC00)
#define  CON_BRI_DM_Brightness_1_m_bri1_b_mask                                   (0x000003FF)
#define  CON_BRI_DM_Brightness_1_m_bri1_r(data)                                  (0x3FF00000&((data)<<20))
#define  CON_BRI_DM_Brightness_1_m_bri1_g(data)                                  (0x000FFC00&((data)<<10))
#define  CON_BRI_DM_Brightness_1_m_bri1_b(data)                                  (0x000003FF&(data))
#define  CON_BRI_DM_Brightness_1_get_m_bri1_r(data)                              ((0x3FF00000&(data))>>20)
#define  CON_BRI_DM_Brightness_1_get_m_bri1_g(data)                              ((0x000FFC00&(data))>>10)
#define  CON_BRI_DM_Brightness_1_get_m_bri1_b(data)                              (0x000003FF&(data))

#define  CON_BRI_DM_CONTRAST_B2B                                                0x1802A80C
#define  CON_BRI_DM_CONTRAST_B2B_reg_addr                                        "0xB802A80C"
#define  CON_BRI_DM_CONTRAST_B2B_reg                                             0xB802A80C
#define  CON_BRI_DM_CONTRAST_B2B_inst_addr                                       "0x0005"
#define  set_CON_BRI_DM_CONTRAST_B2B_reg(data)                                   (*((volatile unsigned int*)CON_BRI_DM_CONTRAST_B2B_reg)=data)
#define  get_CON_BRI_DM_CONTRAST_B2B_reg                                         (*((volatile unsigned int*)CON_BRI_DM_CONTRAST_B2B_reg))
#define  CON_BRI_DM_CONTRAST_B2B_m_con_b2b_r_shift                               (20)
#define  CON_BRI_DM_CONTRAST_B2B_m_con_b2b_g_shift                               (10)
#define  CON_BRI_DM_CONTRAST_B2B_m_con_b2b_b_shift                               (0)
#define  CON_BRI_DM_CONTRAST_B2B_m_con_b2b_r_mask                                (0x3FF00000)
#define  CON_BRI_DM_CONTRAST_B2B_m_con_b2b_g_mask                                (0x000FFC00)
#define  CON_BRI_DM_CONTRAST_B2B_m_con_b2b_b_mask                                (0x000003FF)
#define  CON_BRI_DM_CONTRAST_B2B_m_con_b2b_r(data)                               (0x3FF00000&((data)<<20))
#define  CON_BRI_DM_CONTRAST_B2B_m_con_b2b_g(data)                               (0x000FFC00&((data)<<10))
#define  CON_BRI_DM_CONTRAST_B2B_m_con_b2b_b(data)                               (0x000003FF&(data))
#define  CON_BRI_DM_CONTRAST_B2B_get_m_con_b2b_r(data)                           ((0x3FF00000&(data))>>20)
#define  CON_BRI_DM_CONTRAST_B2B_get_m_con_b2b_g(data)                           ((0x000FFC00&(data))>>10)
#define  CON_BRI_DM_CONTRAST_B2B_get_m_con_b2b_b(data)                           (0x000003FF&(data))

#define  CON_BRI_DM_Brightness_2                                                0x1802A814
#define  CON_BRI_DM_Brightness_2_reg_addr                                        "0xB802A814"
#define  CON_BRI_DM_Brightness_2_reg                                             0xB802A814
#define  CON_BRI_DM_Brightness_2_inst_addr                                       "0x0006"
#define  set_CON_BRI_DM_Brightness_2_reg(data)                                   (*((volatile unsigned int*)CON_BRI_DM_Brightness_2_reg)=data)
#define  get_CON_BRI_DM_Brightness_2_reg                                         (*((volatile unsigned int*)CON_BRI_DM_Brightness_2_reg))
#define  CON_BRI_DM_Brightness_2_m_bri2_r_shift                                  (20)
#define  CON_BRI_DM_Brightness_2_m_bri2_g_shift                                  (10)
#define  CON_BRI_DM_Brightness_2_m_bri2_b_shift                                  (0)
#define  CON_BRI_DM_Brightness_2_m_bri2_r_mask                                   (0x3FF00000)
#define  CON_BRI_DM_Brightness_2_m_bri2_g_mask                                   (0x000FFC00)
#define  CON_BRI_DM_Brightness_2_m_bri2_b_mask                                   (0x000003FF)
#define  CON_BRI_DM_Brightness_2_m_bri2_r(data)                                  (0x3FF00000&((data)<<20))
#define  CON_BRI_DM_Brightness_2_m_bri2_g(data)                                  (0x000FFC00&((data)<<10))
#define  CON_BRI_DM_Brightness_2_m_bri2_b(data)                                  (0x000003FF&(data))
#define  CON_BRI_DM_Brightness_2_get_m_bri2_r(data)                              ((0x3FF00000&(data))>>20)
#define  CON_BRI_DM_Brightness_2_get_m_bri2_g(data)                              ((0x000FFC00&(data))>>10)
#define  CON_BRI_DM_Brightness_2_get_m_bri2_b(data)                              (0x000003FF&(data))

#define  CON_BRI_DM_CONTRAST_B2A                                                0x1802A818
#define  CON_BRI_DM_CONTRAST_B2A_reg_addr                                        "0xB802A818"
#define  CON_BRI_DM_CONTRAST_B2A_reg                                             0xB802A818
#define  CON_BRI_DM_CONTRAST_B2A_inst_addr                                       "0x0007"
#define  set_CON_BRI_DM_CONTRAST_B2A_reg(data)                                   (*((volatile unsigned int*)CON_BRI_DM_CONTRAST_B2A_reg)=data)
#define  get_CON_BRI_DM_CONTRAST_B2A_reg                                         (*((volatile unsigned int*)CON_BRI_DM_CONTRAST_B2A_reg))
#define  CON_BRI_DM_CONTRAST_B2A_m_con_b2a_r_shift                               (20)
#define  CON_BRI_DM_CONTRAST_B2A_m_con_b2a_g_shift                               (10)
#define  CON_BRI_DM_CONTRAST_B2A_m_con_b2a_b_shift                               (0)
#define  CON_BRI_DM_CONTRAST_B2A_m_con_b2a_r_mask                                (0x3FF00000)
#define  CON_BRI_DM_CONTRAST_B2A_m_con_b2a_g_mask                                (0x000FFC00)
#define  CON_BRI_DM_CONTRAST_B2A_m_con_b2a_b_mask                                (0x000003FF)
#define  CON_BRI_DM_CONTRAST_B2A_m_con_b2a_r(data)                               (0x3FF00000&((data)<<20))
#define  CON_BRI_DM_CONTRAST_B2A_m_con_b2a_g(data)                               (0x000FFC00&((data)<<10))
#define  CON_BRI_DM_CONTRAST_B2A_m_con_b2a_b(data)                               (0x000003FF&(data))
#define  CON_BRI_DM_CONTRAST_B2A_get_m_con_b2a_r(data)                           ((0x3FF00000&(data))>>20)
#define  CON_BRI_DM_CONTRAST_B2A_get_m_con_b2a_g(data)                           ((0x000FFC00&(data))>>10)
#define  CON_BRI_DM_CONTRAST_B2A_get_m_con_b2a_b(data)                           (0x000003FF&(data))

#define  CON_BRI_DM_CONTRAST_A2B                                                0x1802A81C
#define  CON_BRI_DM_CONTRAST_A2B_reg_addr                                        "0xB802A81C"
#define  CON_BRI_DM_CONTRAST_A2B_reg                                             0xB802A81C
#define  CON_BRI_DM_CONTRAST_A2B_inst_addr                                       "0x0008"
#define  set_CON_BRI_DM_CONTRAST_A2B_reg(data)                                   (*((volatile unsigned int*)CON_BRI_DM_CONTRAST_A2B_reg)=data)
#define  get_CON_BRI_DM_CONTRAST_A2B_reg                                         (*((volatile unsigned int*)CON_BRI_DM_CONTRAST_A2B_reg))
#define  CON_BRI_DM_CONTRAST_A2B_m_con_a2b_r_shift                               (20)
#define  CON_BRI_DM_CONTRAST_A2B_m_con_a2b_g_shift                               (10)
#define  CON_BRI_DM_CONTRAST_A2B_m_con_a2b_b_shift                               (0)
#define  CON_BRI_DM_CONTRAST_A2B_m_con_a2b_r_mask                                (0x3FF00000)
#define  CON_BRI_DM_CONTRAST_A2B_m_con_a2b_g_mask                                (0x000FFC00)
#define  CON_BRI_DM_CONTRAST_A2B_m_con_a2b_b_mask                                (0x000003FF)
#define  CON_BRI_DM_CONTRAST_A2B_m_con_a2b_r(data)                               (0x3FF00000&((data)<<20))
#define  CON_BRI_DM_CONTRAST_A2B_m_con_a2b_g(data)                               (0x000FFC00&((data)<<10))
#define  CON_BRI_DM_CONTRAST_A2B_m_con_a2b_b(data)                               (0x000003FF&(data))
#define  CON_BRI_DM_CONTRAST_A2B_get_m_con_a2b_r(data)                           ((0x3FF00000&(data))>>20)
#define  CON_BRI_DM_CONTRAST_A2B_get_m_con_a2b_g(data)                           ((0x000FFC00&(data))>>10)
#define  CON_BRI_DM_CONTRAST_A2B_get_m_con_a2b_b(data)                           (0x000003FF&(data))

#define  CON_BRI_DS_COLOR_RGB_CTRL                                              0x1802A820
#define  CON_BRI_DS_COLOR_RGB_CTRL_reg_addr                                      "0xB802A820"
#define  CON_BRI_DS_COLOR_RGB_CTRL_reg                                           0xB802A820
#define  CON_BRI_DS_COLOR_RGB_CTRL_inst_addr                                     "0x0009"
#define  set_CON_BRI_DS_COLOR_RGB_CTRL_reg(data)                                 (*((volatile unsigned int*)CON_BRI_DS_COLOR_RGB_CTRL_reg)=data)
#define  get_CON_BRI_DS_COLOR_RGB_CTRL_reg                                       (*((volatile unsigned int*)CON_BRI_DS_COLOR_RGB_CTRL_reg))
#define  CON_BRI_DS_COLOR_RGB_CTRL_dummy_31_4_shift                              (4)
#define  CON_BRI_DS_COLOR_RGB_CTRL_s_con_toggle_shift                            (3)
#define  CON_BRI_DS_COLOR_RGB_CTRL_s_bri_toggle_shift                            (2)
#define  CON_BRI_DS_COLOR_RGB_CTRL_s_con_en_shift                                (1)
#define  CON_BRI_DS_COLOR_RGB_CTRL_s_bri_en_shift                                (0)
#define  CON_BRI_DS_COLOR_RGB_CTRL_dummy_31_4_mask                               (0xFFFFFFF0)
#define  CON_BRI_DS_COLOR_RGB_CTRL_s_con_toggle_mask                             (0x00000008)
#define  CON_BRI_DS_COLOR_RGB_CTRL_s_bri_toggle_mask                             (0x00000004)
#define  CON_BRI_DS_COLOR_RGB_CTRL_s_con_en_mask                                 (0x00000002)
#define  CON_BRI_DS_COLOR_RGB_CTRL_s_bri_en_mask                                 (0x00000001)
#define  CON_BRI_DS_COLOR_RGB_CTRL_dummy_31_4(data)                              (0xFFFFFFF0&((data)<<4))
#define  CON_BRI_DS_COLOR_RGB_CTRL_s_con_toggle(data)                            (0x00000008&((data)<<3))
#define  CON_BRI_DS_COLOR_RGB_CTRL_s_bri_toggle(data)                            (0x00000004&((data)<<2))
#define  CON_BRI_DS_COLOR_RGB_CTRL_s_con_en(data)                                (0x00000002&((data)<<1))
#define  CON_BRI_DS_COLOR_RGB_CTRL_s_bri_en(data)                                (0x00000001&(data))
#define  CON_BRI_DS_COLOR_RGB_CTRL_get_dummy_31_4(data)                          ((0xFFFFFFF0&(data))>>4)
#define  CON_BRI_DS_COLOR_RGB_CTRL_get_s_con_toggle(data)                        ((0x00000008&(data))>>3)
#define  CON_BRI_DS_COLOR_RGB_CTRL_get_s_bri_toggle(data)                        ((0x00000004&(data))>>2)
#define  CON_BRI_DS_COLOR_RGB_CTRL_get_s_con_en(data)                            ((0x00000002&(data))>>1)
#define  CON_BRI_DS_COLOR_RGB_CTRL_get_s_bri_en(data)                            (0x00000001&(data))

#define  CON_BRI_DS_CONTRAST_A                                                  0x1802A824
#define  CON_BRI_DS_CONTRAST_A_reg_addr                                          "0xB802A824"
#define  CON_BRI_DS_CONTRAST_A_reg                                               0xB802A824
#define  CON_BRI_DS_CONTRAST_A_inst_addr                                         "0x000A"
#define  set_CON_BRI_DS_CONTRAST_A_reg(data)                                     (*((volatile unsigned int*)CON_BRI_DS_CONTRAST_A_reg)=data)
#define  get_CON_BRI_DS_CONTRAST_A_reg                                           (*((volatile unsigned int*)CON_BRI_DS_CONTRAST_A_reg))
#define  CON_BRI_DS_CONTRAST_A_s_con_a_r_shift                                   (20)
#define  CON_BRI_DS_CONTRAST_A_s_con_a_g_shift                                   (10)
#define  CON_BRI_DS_CONTRAST_A_s_con_a_b_shift                                   (0)
#define  CON_BRI_DS_CONTRAST_A_s_con_a_r_mask                                    (0x3FF00000)
#define  CON_BRI_DS_CONTRAST_A_s_con_a_g_mask                                    (0x000FFC00)
#define  CON_BRI_DS_CONTRAST_A_s_con_a_b_mask                                    (0x000003FF)
#define  CON_BRI_DS_CONTRAST_A_s_con_a_r(data)                                   (0x3FF00000&((data)<<20))
#define  CON_BRI_DS_CONTRAST_A_s_con_a_g(data)                                   (0x000FFC00&((data)<<10))
#define  CON_BRI_DS_CONTRAST_A_s_con_a_b(data)                                   (0x000003FF&(data))
#define  CON_BRI_DS_CONTRAST_A_get_s_con_a_r(data)                               ((0x3FF00000&(data))>>20)
#define  CON_BRI_DS_CONTRAST_A_get_s_con_a_g(data)                               ((0x000FFC00&(data))>>10)
#define  CON_BRI_DS_CONTRAST_A_get_s_con_a_b(data)                               (0x000003FF&(data))

#define  CON_BRI_DS_Brightness_1                                                0x1802A828
#define  CON_BRI_DS_Brightness_1_reg_addr                                        "0xB802A828"
#define  CON_BRI_DS_Brightness_1_reg                                             0xB802A828
#define  CON_BRI_DS_Brightness_1_inst_addr                                       "0x000B"
#define  set_CON_BRI_DS_Brightness_1_reg(data)                                   (*((volatile unsigned int*)CON_BRI_DS_Brightness_1_reg)=data)
#define  get_CON_BRI_DS_Brightness_1_reg                                         (*((volatile unsigned int*)CON_BRI_DS_Brightness_1_reg))
#define  CON_BRI_DS_Brightness_1_s_bri1_r_shift                                  (20)
#define  CON_BRI_DS_Brightness_1_s_bri1_g_shift                                  (10)
#define  CON_BRI_DS_Brightness_1_s_bri1_b_shift                                  (0)
#define  CON_BRI_DS_Brightness_1_s_bri1_r_mask                                   (0x3FF00000)
#define  CON_BRI_DS_Brightness_1_s_bri1_g_mask                                   (0x000FFC00)
#define  CON_BRI_DS_Brightness_1_s_bri1_b_mask                                   (0x000003FF)
#define  CON_BRI_DS_Brightness_1_s_bri1_r(data)                                  (0x3FF00000&((data)<<20))
#define  CON_BRI_DS_Brightness_1_s_bri1_g(data)                                  (0x000FFC00&((data)<<10))
#define  CON_BRI_DS_Brightness_1_s_bri1_b(data)                                  (0x000003FF&(data))
#define  CON_BRI_DS_Brightness_1_get_s_bri1_r(data)                              ((0x3FF00000&(data))>>20)
#define  CON_BRI_DS_Brightness_1_get_s_bri1_g(data)                              ((0x000FFC00&(data))>>10)
#define  CON_BRI_DS_Brightness_1_get_s_bri1_b(data)                              (0x000003FF&(data))

#define  CON_BRI_DS_CONTRAST_B2B                                                0x1802A82C
#define  CON_BRI_DS_CONTRAST_B2B_reg_addr                                        "0xB802A82C"
#define  CON_BRI_DS_CONTRAST_B2B_reg                                             0xB802A82C
#define  CON_BRI_DS_CONTRAST_B2B_inst_addr                                       "0x000C"
#define  set_CON_BRI_DS_CONTRAST_B2B_reg(data)                                   (*((volatile unsigned int*)CON_BRI_DS_CONTRAST_B2B_reg)=data)
#define  get_CON_BRI_DS_CONTRAST_B2B_reg                                         (*((volatile unsigned int*)CON_BRI_DS_CONTRAST_B2B_reg))
#define  CON_BRI_DS_CONTRAST_B2B_s_con_b2b_r_shift                               (20)
#define  CON_BRI_DS_CONTRAST_B2B_s_con_b2b_g_shift                               (10)
#define  CON_BRI_DS_CONTRAST_B2B_s_con_b2b_b_shift                               (0)
#define  CON_BRI_DS_CONTRAST_B2B_s_con_b2b_r_mask                                (0x3FF00000)
#define  CON_BRI_DS_CONTRAST_B2B_s_con_b2b_g_mask                                (0x000FFC00)
#define  CON_BRI_DS_CONTRAST_B2B_s_con_b2b_b_mask                                (0x000003FF)
#define  CON_BRI_DS_CONTRAST_B2B_s_con_b2b_r(data)                               (0x3FF00000&((data)<<20))
#define  CON_BRI_DS_CONTRAST_B2B_s_con_b2b_g(data)                               (0x000FFC00&((data)<<10))
#define  CON_BRI_DS_CONTRAST_B2B_s_con_b2b_b(data)                               (0x000003FF&(data))
#define  CON_BRI_DS_CONTRAST_B2B_get_s_con_b2b_r(data)                           ((0x3FF00000&(data))>>20)
#define  CON_BRI_DS_CONTRAST_B2B_get_s_con_b2b_g(data)                           ((0x000FFC00&(data))>>10)
#define  CON_BRI_DS_CONTRAST_B2B_get_s_con_b2b_b(data)                           (0x000003FF&(data))

#define  CON_BRI_DS_Brightness_2                                                0x1802A834
#define  CON_BRI_DS_Brightness_2_reg_addr                                        "0xB802A834"
#define  CON_BRI_DS_Brightness_2_reg                                             0xB802A834
#define  CON_BRI_DS_Brightness_2_inst_addr                                       "0x000D"
#define  set_CON_BRI_DS_Brightness_2_reg(data)                                   (*((volatile unsigned int*)CON_BRI_DS_Brightness_2_reg)=data)
#define  get_CON_BRI_DS_Brightness_2_reg                                         (*((volatile unsigned int*)CON_BRI_DS_Brightness_2_reg))
#define  CON_BRI_DS_Brightness_2_s_bri2_r_shift                                  (20)
#define  CON_BRI_DS_Brightness_2_s_bri2_g_shift                                  (10)
#define  CON_BRI_DS_Brightness_2_s_bri2_b_shift                                  (0)
#define  CON_BRI_DS_Brightness_2_s_bri2_r_mask                                   (0x3FF00000)
#define  CON_BRI_DS_Brightness_2_s_bri2_g_mask                                   (0x000FFC00)
#define  CON_BRI_DS_Brightness_2_s_bri2_b_mask                                   (0x000003FF)
#define  CON_BRI_DS_Brightness_2_s_bri2_r(data)                                  (0x3FF00000&((data)<<20))
#define  CON_BRI_DS_Brightness_2_s_bri2_g(data)                                  (0x000FFC00&((data)<<10))
#define  CON_BRI_DS_Brightness_2_s_bri2_b(data)                                  (0x000003FF&(data))
#define  CON_BRI_DS_Brightness_2_get_s_bri2_r(data)                              ((0x3FF00000&(data))>>20)
#define  CON_BRI_DS_Brightness_2_get_s_bri2_g(data)                              ((0x000FFC00&(data))>>10)
#define  CON_BRI_DS_Brightness_2_get_s_bri2_b(data)                              (0x000003FF&(data))

#define  CON_BRI_DS_CONTRAST_B2A                                                0x1802A838
#define  CON_BRI_DS_CONTRAST_B2A_reg_addr                                        "0xB802A838"
#define  CON_BRI_DS_CONTRAST_B2A_reg                                             0xB802A838
#define  CON_BRI_DS_CONTRAST_B2A_inst_addr                                       "0x000E"
#define  set_CON_BRI_DS_CONTRAST_B2A_reg(data)                                   (*((volatile unsigned int*)CON_BRI_DS_CONTRAST_B2A_reg)=data)
#define  get_CON_BRI_DS_CONTRAST_B2A_reg                                         (*((volatile unsigned int*)CON_BRI_DS_CONTRAST_B2A_reg))
#define  CON_BRI_DS_CONTRAST_B2A_s_con_b2a_r_shift                               (20)
#define  CON_BRI_DS_CONTRAST_B2A_s_con_b2a_g_shift                               (10)
#define  CON_BRI_DS_CONTRAST_B2A_s_con_b2a_b_shift                               (0)
#define  CON_BRI_DS_CONTRAST_B2A_s_con_b2a_r_mask                                (0x3FF00000)
#define  CON_BRI_DS_CONTRAST_B2A_s_con_b2a_g_mask                                (0x000FFC00)
#define  CON_BRI_DS_CONTRAST_B2A_s_con_b2a_b_mask                                (0x000003FF)
#define  CON_BRI_DS_CONTRAST_B2A_s_con_b2a_r(data)                               (0x3FF00000&((data)<<20))
#define  CON_BRI_DS_CONTRAST_B2A_s_con_b2a_g(data)                               (0x000FFC00&((data)<<10))
#define  CON_BRI_DS_CONTRAST_B2A_s_con_b2a_b(data)                               (0x000003FF&(data))
#define  CON_BRI_DS_CONTRAST_B2A_get_s_con_b2a_r(data)                           ((0x3FF00000&(data))>>20)
#define  CON_BRI_DS_CONTRAST_B2A_get_s_con_b2a_g(data)                           ((0x000FFC00&(data))>>10)
#define  CON_BRI_DS_CONTRAST_B2A_get_s_con_b2a_b(data)                           (0x000003FF&(data))

#define  CON_BRI_DS_CONTRAST_A2B                                                0x1802A83C
#define  CON_BRI_DS_CONTRAST_A2B_reg_addr                                        "0xB802A83C"
#define  CON_BRI_DS_CONTRAST_A2B_reg                                             0xB802A83C
#define  CON_BRI_DS_CONTRAST_A2B_inst_addr                                       "0x000F"
#define  set_CON_BRI_DS_CONTRAST_A2B_reg(data)                                   (*((volatile unsigned int*)CON_BRI_DS_CONTRAST_A2B_reg)=data)
#define  get_CON_BRI_DS_CONTRAST_A2B_reg                                         (*((volatile unsigned int*)CON_BRI_DS_CONTRAST_A2B_reg))
#define  CON_BRI_DS_CONTRAST_A2B_s_con_a2b_r_shift                               (20)
#define  CON_BRI_DS_CONTRAST_A2B_s_con_a2b_g_shift                               (10)
#define  CON_BRI_DS_CONTRAST_A2B_s_con_a2b_b_shift                               (0)
#define  CON_BRI_DS_CONTRAST_A2B_s_con_a2b_r_mask                                (0x3FF00000)
#define  CON_BRI_DS_CONTRAST_A2B_s_con_a2b_g_mask                                (0x000FFC00)
#define  CON_BRI_DS_CONTRAST_A2B_s_con_a2b_b_mask                                (0x000003FF)
#define  CON_BRI_DS_CONTRAST_A2B_s_con_a2b_r(data)                               (0x3FF00000&((data)<<20))
#define  CON_BRI_DS_CONTRAST_A2B_s_con_a2b_g(data)                               (0x000FFC00&((data)<<10))
#define  CON_BRI_DS_CONTRAST_A2B_s_con_a2b_b(data)                               (0x000003FF&(data))
#define  CON_BRI_DS_CONTRAST_A2B_get_s_con_a2b_r(data)                           ((0x3FF00000&(data))>>20)
#define  CON_BRI_DS_CONTRAST_A2B_get_s_con_a2b_g(data)                           ((0x000FFC00&(data))>>10)
#define  CON_BRI_DS_CONTRAST_A2B_get_s_con_a2b_b(data)                           (0x000003FF&(data))

#define  CON_BRI_D_Overlay_CONTRAST_A2A                                         0x1802A840
#define  CON_BRI_D_Overlay_CONTRAST_A2A_reg_addr                                 "0xB802A840"
#define  CON_BRI_D_Overlay_CONTRAST_A2A_reg                                      0xB802A840
#define  CON_BRI_D_Overlay_CONTRAST_A2A_inst_addr                                "0x0010"
#define  set_CON_BRI_D_Overlay_CONTRAST_A2A_reg(data)                            (*((volatile unsigned int*)CON_BRI_D_Overlay_CONTRAST_A2A_reg)=data)
#define  get_CON_BRI_D_Overlay_CONTRAST_A2A_reg                                  (*((volatile unsigned int*)CON_BRI_D_Overlay_CONTRAST_A2A_reg))
#define  CON_BRI_D_Overlay_CONTRAST_A2A_v_con_a2a_r_shift                        (20)
#define  CON_BRI_D_Overlay_CONTRAST_A2A_v_con_a2a_g_shift                        (10)
#define  CON_BRI_D_Overlay_CONTRAST_A2A_v_con_a2a_b_shift                        (0)
#define  CON_BRI_D_Overlay_CONTRAST_A2A_v_con_a2a_r_mask                         (0x3FF00000)
#define  CON_BRI_D_Overlay_CONTRAST_A2A_v_con_a2a_g_mask                         (0x000FFC00)
#define  CON_BRI_D_Overlay_CONTRAST_A2A_v_con_a2a_b_mask                         (0x000003FF)
#define  CON_BRI_D_Overlay_CONTRAST_A2A_v_con_a2a_r(data)                        (0x3FF00000&((data)<<20))
#define  CON_BRI_D_Overlay_CONTRAST_A2A_v_con_a2a_g(data)                        (0x000FFC00&((data)<<10))
#define  CON_BRI_D_Overlay_CONTRAST_A2A_v_con_a2a_b(data)                        (0x000003FF&(data))
#define  CON_BRI_D_Overlay_CONTRAST_A2A_get_v_con_a2a_r(data)                    ((0x3FF00000&(data))>>20)
#define  CON_BRI_D_Overlay_CONTRAST_A2A_get_v_con_a2a_g(data)                    ((0x000FFC00&(data))>>10)
#define  CON_BRI_D_Overlay_CONTRAST_A2A_get_v_con_a2a_b(data)                    (0x000003FF&(data))

#define  CON_BRI_D_Overlay_Brightness_3                                         0x1802A844
#define  CON_BRI_D_Overlay_Brightness_3_reg_addr                                 "0xB802A844"
#define  CON_BRI_D_Overlay_Brightness_3_reg                                      0xB802A844
#define  CON_BRI_D_Overlay_Brightness_3_inst_addr                                "0x0011"
#define  set_CON_BRI_D_Overlay_Brightness_3_reg(data)                            (*((volatile unsigned int*)CON_BRI_D_Overlay_Brightness_3_reg)=data)
#define  get_CON_BRI_D_Overlay_Brightness_3_reg                                  (*((volatile unsigned int*)CON_BRI_D_Overlay_Brightness_3_reg))
#define  CON_BRI_D_Overlay_Brightness_3_v_bri3_r_shift                           (20)
#define  CON_BRI_D_Overlay_Brightness_3_v_bri3_g_shift                           (10)
#define  CON_BRI_D_Overlay_Brightness_3_v_bri3_b_shift                           (0)
#define  CON_BRI_D_Overlay_Brightness_3_v_bri3_r_mask                            (0x3FF00000)
#define  CON_BRI_D_Overlay_Brightness_3_v_bri3_g_mask                            (0x000FFC00)
#define  CON_BRI_D_Overlay_Brightness_3_v_bri3_b_mask                            (0x000003FF)
#define  CON_BRI_D_Overlay_Brightness_3_v_bri3_r(data)                           (0x3FF00000&((data)<<20))
#define  CON_BRI_D_Overlay_Brightness_3_v_bri3_g(data)                           (0x000FFC00&((data)<<10))
#define  CON_BRI_D_Overlay_Brightness_3_v_bri3_b(data)                           (0x000003FF&(data))
#define  CON_BRI_D_Overlay_Brightness_3_get_v_bri3_r(data)                       ((0x3FF00000&(data))>>20)
#define  CON_BRI_D_Overlay_Brightness_3_get_v_bri3_g(data)                       ((0x000FFC00&(data))>>10)
#define  CON_BRI_D_Overlay_Brightness_3_get_v_bri3_b(data)                       (0x000003FF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======CON_BRI register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  conbri_dbuf_en:1;
        RBus_UInt32  conbri_dbuf_read_sel:1;
        RBus_UInt32  conbri_dbuf_set:1;
    };
}con_bri_dm_double_buffer_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  blending_mode_sel:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  new_m_blending_factor:9;
        RBus_UInt32  res2:3;
        RBus_UInt32  new_s_blending_factor:9;
    };
}con_bri_dm_color_rgb_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_blending_factor:8;
        RBus_UInt32  res1:19;
        RBus_UInt32  con_bri_mode:1;
        RBus_UInt32  m_con_toggle:1;
        RBus_UInt32  m_bri_toggle:1;
        RBus_UInt32  m_con_en:1;
        RBus_UInt32  m_bri_en:1;
    };
}con_bri_dm_color_rgb_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m_con_a_r:10;
        RBus_UInt32  m_con_a_g:10;
        RBus_UInt32  m_con_a_b:10;
    };
}con_bri_dm_contrast_a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m_bri1_r:10;
        RBus_UInt32  m_bri1_g:10;
        RBus_UInt32  m_bri1_b:10;
    };
}con_bri_dm_brightness_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m_con_b2b_r:10;
        RBus_UInt32  m_con_b2b_g:10;
        RBus_UInt32  m_con_b2b_b:10;
    };
}con_bri_dm_contrast_b2b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m_bri2_r:10;
        RBus_UInt32  m_bri2_g:10;
        RBus_UInt32  m_bri2_b:10;
    };
}con_bri_dm_brightness_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m_con_b2a_r:10;
        RBus_UInt32  m_con_b2a_g:10;
        RBus_UInt32  m_con_b2a_b:10;
    };
}con_bri_dm_contrast_b2a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m_con_a2b_r:10;
        RBus_UInt32  m_con_a2b_g:10;
        RBus_UInt32  m_con_a2b_b:10;
    };
}con_bri_dm_contrast_a2b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802a820_31_4:28;
        RBus_UInt32  s_con_toggle:1;
        RBus_UInt32  s_bri_toggle:1;
        RBus_UInt32  s_con_en:1;
        RBus_UInt32  s_bri_en:1;
    };
}con_bri_ds_color_rgb_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  s_con_a_r:10;
        RBus_UInt32  s_con_a_g:10;
        RBus_UInt32  s_con_a_b:10;
    };
}con_bri_ds_contrast_a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  s_bri1_r:10;
        RBus_UInt32  s_bri1_g:10;
        RBus_UInt32  s_bri1_b:10;
    };
}con_bri_ds_brightness_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  s_con_b2b_r:10;
        RBus_UInt32  s_con_b2b_g:10;
        RBus_UInt32  s_con_b2b_b:10;
    };
}con_bri_ds_contrast_b2b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  s_bri2_r:10;
        RBus_UInt32  s_bri2_g:10;
        RBus_UInt32  s_bri2_b:10;
    };
}con_bri_ds_brightness_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  s_con_b2a_r:10;
        RBus_UInt32  s_con_b2a_g:10;
        RBus_UInt32  s_con_b2a_b:10;
    };
}con_bri_ds_contrast_b2a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  s_con_a2b_r:10;
        RBus_UInt32  s_con_a2b_g:10;
        RBus_UInt32  s_con_a2b_b:10;
    };
}con_bri_ds_contrast_a2b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  v_con_a2a_r:10;
        RBus_UInt32  v_con_a2a_g:10;
        RBus_UInt32  v_con_a2a_b:10;
    };
}con_bri_d_overlay_contrast_a2a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  v_bri3_r:10;
        RBus_UInt32  v_bri3_g:10;
        RBus_UInt32  v_bri3_b:10;
    };
}con_bri_d_overlay_brightness_3_RBUS;

#else //apply LITTLE_ENDIAN

//======CON_BRI register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  conbri_dbuf_set:1;
        RBus_UInt32  conbri_dbuf_read_sel:1;
        RBus_UInt32  conbri_dbuf_en:1;
        RBus_UInt32  res1:29;
    };
}con_bri_dm_double_buffer_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  new_s_blending_factor:9;
        RBus_UInt32  res1:3;
        RBus_UInt32  new_m_blending_factor:9;
        RBus_UInt32  res2:10;
        RBus_UInt32  blending_mode_sel:1;
    };
}con_bri_dm_color_rgb_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_bri_en:1;
        RBus_UInt32  m_con_en:1;
        RBus_UInt32  m_bri_toggle:1;
        RBus_UInt32  m_con_toggle:1;
        RBus_UInt32  con_bri_mode:1;
        RBus_UInt32  res1:19;
        RBus_UInt32  m_blending_factor:8;
    };
}con_bri_dm_color_rgb_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_con_a_b:10;
        RBus_UInt32  m_con_a_g:10;
        RBus_UInt32  m_con_a_r:10;
        RBus_UInt32  res1:2;
    };
}con_bri_dm_contrast_a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_bri1_b:10;
        RBus_UInt32  m_bri1_g:10;
        RBus_UInt32  m_bri1_r:10;
        RBus_UInt32  res1:2;
    };
}con_bri_dm_brightness_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_con_b2b_b:10;
        RBus_UInt32  m_con_b2b_g:10;
        RBus_UInt32  m_con_b2b_r:10;
        RBus_UInt32  res1:2;
    };
}con_bri_dm_contrast_b2b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_bri2_b:10;
        RBus_UInt32  m_bri2_g:10;
        RBus_UInt32  m_bri2_r:10;
        RBus_UInt32  res1:2;
    };
}con_bri_dm_brightness_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_con_b2a_b:10;
        RBus_UInt32  m_con_b2a_g:10;
        RBus_UInt32  m_con_b2a_r:10;
        RBus_UInt32  res1:2;
    };
}con_bri_dm_contrast_b2a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_con_a2b_b:10;
        RBus_UInt32  m_con_a2b_g:10;
        RBus_UInt32  m_con_a2b_r:10;
        RBus_UInt32  res1:2;
    };
}con_bri_dm_contrast_a2b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_bri_en:1;
        RBus_UInt32  s_con_en:1;
        RBus_UInt32  s_bri_toggle:1;
        RBus_UInt32  s_con_toggle:1;
        RBus_UInt32  dummy1802a820_31_4:28;
    };
}con_bri_ds_color_rgb_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_con_a_b:10;
        RBus_UInt32  s_con_a_g:10;
        RBus_UInt32  s_con_a_r:10;
        RBus_UInt32  res1:2;
    };
}con_bri_ds_contrast_a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_bri1_b:10;
        RBus_UInt32  s_bri1_g:10;
        RBus_UInt32  s_bri1_r:10;
        RBus_UInt32  res1:2;
    };
}con_bri_ds_brightness_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_con_b2b_b:10;
        RBus_UInt32  s_con_b2b_g:10;
        RBus_UInt32  s_con_b2b_r:10;
        RBus_UInt32  res1:2;
    };
}con_bri_ds_contrast_b2b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_bri2_b:10;
        RBus_UInt32  s_bri2_g:10;
        RBus_UInt32  s_bri2_r:10;
        RBus_UInt32  res1:2;
    };
}con_bri_ds_brightness_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_con_b2a_b:10;
        RBus_UInt32  s_con_b2a_g:10;
        RBus_UInt32  s_con_b2a_r:10;
        RBus_UInt32  res1:2;
    };
}con_bri_ds_contrast_b2a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_con_a2b_b:10;
        RBus_UInt32  s_con_a2b_g:10;
        RBus_UInt32  s_con_a2b_r:10;
        RBus_UInt32  res1:2;
    };
}con_bri_ds_contrast_a2b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_con_a2a_b:10;
        RBus_UInt32  v_con_a2a_g:10;
        RBus_UInt32  v_con_a2a_r:10;
        RBus_UInt32  res1:2;
    };
}con_bri_d_overlay_contrast_a2a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_bri3_b:10;
        RBus_UInt32  v_bri3_g:10;
        RBus_UInt32  v_bri3_r:10;
        RBus_UInt32  res1:2;
    };
}con_bri_d_overlay_brightness_3_RBUS;




#endif 


#endif 
