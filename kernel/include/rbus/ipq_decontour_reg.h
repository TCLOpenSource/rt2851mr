/**
* @file Merlin5-DesignSpec-I-Domain-Decontour
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_IPQ_DECONTOUR_REG_H_
#define _RBUS_IPQ_DECONTOUR_REG_H_

#include "rbus_types.h"



//  IPQ_DECONTOUR Register Address
#define  IPQ_DECONTOUR_De_Contour_CTRL                                          0x18025700
#define  IPQ_DECONTOUR_De_Contour_CTRL_reg_addr                                  "0xB8025700"
#define  IPQ_DECONTOUR_De_Contour_CTRL_reg                                       0xB8025700
#define  IPQ_DECONTOUR_De_Contour_CTRL_inst_addr                                 "0x0000"
#define  set_IPQ_DECONTOUR_De_Contour_CTRL_reg(data)                             (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_CTRL_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_CTRL_reg                                   (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_CTRL_reg))
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_en_shift                           (31)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_neighbor_far_shift                 (30)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_debug_en_shift                     (29)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_debug_mode_shift                   (26)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_filter_mode_shift                  (25)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_yc_mode_shift                      (23)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_line_mode_shift                    (22)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_bottleneck_en_shift                (21)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_blend_weight_lpf_en_shift          (20)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_blend_lowbd_shift                  (8)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_blend_step_shift                   (4)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_snr_blend_mode_shift               (0)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_en_mask                            (0x80000000)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_neighbor_far_mask                  (0x40000000)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_debug_en_mask                      (0x20000000)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_debug_mode_mask                    (0x0C000000)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_filter_mode_mask                   (0x02000000)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_yc_mode_mask                       (0x01800000)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_line_mode_mask                     (0x00400000)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_bottleneck_en_mask                 (0x00200000)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_blend_weight_lpf_en_mask           (0x00100000)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_blend_lowbd_mask                   (0x0000FF00)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_blend_step_mask                    (0x00000030)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_snr_blend_mode_mask                (0x00000003)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_en(data)                           (0x80000000&((data)<<31))
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_neighbor_far(data)                 (0x40000000&((data)<<30))
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_debug_en(data)                     (0x20000000&((data)<<29))
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_debug_mode(data)                   (0x0C000000&((data)<<26))
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_filter_mode(data)                  (0x02000000&((data)<<25))
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_yc_mode(data)                      (0x01800000&((data)<<23))
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_line_mode(data)                    (0x00400000&((data)<<22))
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_bottleneck_en(data)                (0x00200000&((data)<<21))
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_blend_weight_lpf_en(data)          (0x00100000&((data)<<20))
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_blend_lowbd(data)                  (0x0000FF00&((data)<<8))
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_blend_step(data)                   (0x00000030&((data)<<4))
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_snr_blend_mode(data)               (0x00000003&(data))
#define  IPQ_DECONTOUR_De_Contour_CTRL_get_decont_en(data)                       ((0x80000000&(data))>>31)
#define  IPQ_DECONTOUR_De_Contour_CTRL_get_decont_neighbor_far(data)             ((0x40000000&(data))>>30)
#define  IPQ_DECONTOUR_De_Contour_CTRL_get_decont_debug_en(data)                 ((0x20000000&(data))>>29)
#define  IPQ_DECONTOUR_De_Contour_CTRL_get_decont_debug_mode(data)               ((0x0C000000&(data))>>26)
#define  IPQ_DECONTOUR_De_Contour_CTRL_get_decont_filter_mode(data)              ((0x02000000&(data))>>25)
#define  IPQ_DECONTOUR_De_Contour_CTRL_get_decont_yc_mode(data)                  ((0x01800000&(data))>>23)
#define  IPQ_DECONTOUR_De_Contour_CTRL_get_decont_line_mode(data)                ((0x00400000&(data))>>22)
#define  IPQ_DECONTOUR_De_Contour_CTRL_get_decont_bottleneck_en(data)            ((0x00200000&(data))>>21)
#define  IPQ_DECONTOUR_De_Contour_CTRL_get_decont_blend_weight_lpf_en(data)      ((0x00100000&(data))>>20)
#define  IPQ_DECONTOUR_De_Contour_CTRL_get_decont_blend_lowbd(data)              ((0x0000FF00&(data))>>8)
#define  IPQ_DECONTOUR_De_Contour_CTRL_get_decont_blend_step(data)               ((0x00000030&(data))>>4)
#define  IPQ_DECONTOUR_De_Contour_CTRL_get_decont_snr_blend_mode(data)           (0x00000003&(data))

#define  IPQ_DECONTOUR_De_Contour_Contrast_Y                                    0x18025704
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_reg_addr                            "0xB8025704"
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_reg                                 0xB8025704
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_inst_addr                           "0x0001"
#define  set_IPQ_DECONTOUR_De_Contour_Contrast_Y_reg(data)                       (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Contrast_Y_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Contrast_Y_reg                             (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Contrast_Y_reg))
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_decont_contrast_th_y_info_shift     (19)
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_decont_neighbor_diff_th_y_info_shift (13)
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_decont_gradation_th_y_info_shift    (8)
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_decont_maxmindiff_th_y_info_shift   (0)
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_decont_contrast_th_y_info_mask      (0x0FF80000)
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_decont_neighbor_diff_th_y_info_mask (0x0007E000)
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_decont_gradation_th_y_info_mask     (0x00001F00)
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_decont_maxmindiff_th_y_info_mask    (0x000000FF)
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_decont_contrast_th_y_info(data)     (0x0FF80000&((data)<<19))
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_decont_neighbor_diff_th_y_info(data) (0x0007E000&((data)<<13))
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_decont_gradation_th_y_info(data)    (0x00001F00&((data)<<8))
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_decont_maxmindiff_th_y_info(data)   (0x000000FF&(data))
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_get_decont_contrast_th_y_info(data) ((0x0FF80000&(data))>>19)
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_get_decont_neighbor_diff_th_y_info(data) ((0x0007E000&(data))>>13)
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_get_decont_gradation_th_y_info(data) ((0x00001F00&(data))>>8)
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_get_decont_maxmindiff_th_y_info(data) (0x000000FF&(data))

#define  IPQ_DECONTOUR_De_Contour_Contrast_C                                    0x18025708
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_reg_addr                            "0xB8025708"
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_reg                                 0xB8025708
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_inst_addr                           "0x0002"
#define  set_IPQ_DECONTOUR_De_Contour_Contrast_C_reg(data)                       (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Contrast_C_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Contrast_C_reg                             (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Contrast_C_reg))
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_decont_contrast_th_c_info_shift     (19)
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_decont_neighbor_diff_th_c_info_shift (13)
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_decont_gradation_th_c_info_shift    (8)
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_decont_maxmindiff_th_c_info_shift   (0)
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_decont_contrast_th_c_info_mask      (0x3FF80000)
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_decont_neighbor_diff_th_c_info_mask (0x0007E000)
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_decont_gradation_th_c_info_mask     (0x00001F00)
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_decont_maxmindiff_th_c_info_mask    (0x000000FF)
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_decont_contrast_th_c_info(data)     (0x3FF80000&((data)<<19))
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_decont_neighbor_diff_th_c_info(data) (0x0007E000&((data)<<13))
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_decont_gradation_th_c_info(data)    (0x00001F00&((data)<<8))
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_decont_maxmindiff_th_c_info(data)   (0x000000FF&(data))
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_get_decont_contrast_th_c_info(data) ((0x3FF80000&(data))>>19)
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_get_decont_neighbor_diff_th_c_info(data) ((0x0007E000&(data))>>13)
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_get_decont_gradation_th_c_info(data) ((0x00001F00&(data))>>8)
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_get_decont_maxmindiff_th_c_info(data) (0x000000FF&(data))

#define  IPQ_DECONTOUR_De_Contour_Contrast                                      0x1802570C
#define  IPQ_DECONTOUR_De_Contour_Contrast_reg_addr                              "0xB802570C"
#define  IPQ_DECONTOUR_De_Contour_Contrast_reg                                   0xB802570C
#define  IPQ_DECONTOUR_De_Contour_Contrast_inst_addr                             "0x0003"
#define  set_IPQ_DECONTOUR_De_Contour_Contrast_reg(data)                         (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Contrast_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Contrast_reg                               (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Contrast_reg))
#define  IPQ_DECONTOUR_De_Contour_Contrast_decont_contrast_th_y_shift            (16)
#define  IPQ_DECONTOUR_De_Contour_Contrast_decont_contrast_th_c_shift            (0)
#define  IPQ_DECONTOUR_De_Contour_Contrast_decont_contrast_th_y_mask             (0x03FF0000)
#define  IPQ_DECONTOUR_De_Contour_Contrast_decont_contrast_th_c_mask             (0x000003FF)
#define  IPQ_DECONTOUR_De_Contour_Contrast_decont_contrast_th_y(data)            (0x03FF0000&((data)<<16))
#define  IPQ_DECONTOUR_De_Contour_Contrast_decont_contrast_th_c(data)            (0x000003FF&(data))
#define  IPQ_DECONTOUR_De_Contour_Contrast_get_decont_contrast_th_y(data)        ((0x03FF0000&(data))>>16)
#define  IPQ_DECONTOUR_De_Contour_Contrast_get_decont_contrast_th_c(data)        (0x000003FF&(data))

#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff                                 0x18025710
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_reg_addr                         "0xB8025710"
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_reg                              0xB8025710
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_inst_addr                        "0x0004"
#define  set_IPQ_DECONTOUR_De_Contour_Neighbor_Diff_reg(data)                    (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Neighbor_Diff_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Neighbor_Diff_reg                          (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Neighbor_Diff_reg))
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_decont_neighbor_diff_th2_y_shift (24)
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_decont_neighbor_diff_th_y_shift  (16)
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_decont_neighbor_diff_th2_c_shift (8)
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_decont_neighbor_diff_th_c_shift  (0)
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_decont_neighbor_diff_th2_y_mask  (0x3F000000)
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_decont_neighbor_diff_th_y_mask   (0x003F0000)
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_decont_neighbor_diff_th2_c_mask  (0x00003F00)
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_decont_neighbor_diff_th_c_mask   (0x0000003F)
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_decont_neighbor_diff_th2_y(data) (0x3F000000&((data)<<24))
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_decont_neighbor_diff_th_y(data)  (0x003F0000&((data)<<16))
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_decont_neighbor_diff_th2_c(data) (0x00003F00&((data)<<8))
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_decont_neighbor_diff_th_c(data)  (0x0000003F&(data))
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_get_decont_neighbor_diff_th2_y(data) ((0x3F000000&(data))>>24)
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_get_decont_neighbor_diff_th_y(data) ((0x003F0000&(data))>>16)
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_get_decont_neighbor_diff_th2_c(data) ((0x00003F00&(data))>>8)
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_get_decont_neighbor_diff_th_c(data) (0x0000003F&(data))

#define  IPQ_DECONTOUR_De_Contour_Threshold                                     0x18025714
#define  IPQ_DECONTOUR_De_Contour_Threshold_reg_addr                             "0xB8025714"
#define  IPQ_DECONTOUR_De_Contour_Threshold_reg                                  0xB8025714
#define  IPQ_DECONTOUR_De_Contour_Threshold_inst_addr                            "0x0005"
#define  set_IPQ_DECONTOUR_De_Contour_Threshold_reg(data)                        (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Threshold_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Threshold_reg                              (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Threshold_reg))
#define  IPQ_DECONTOUR_De_Contour_Threshold_decont_gradation_th_y_shift          (26)
#define  IPQ_DECONTOUR_De_Contour_Threshold_decont_dark_th_shift                 (16)
#define  IPQ_DECONTOUR_De_Contour_Threshold_decont_gradation_th_c_shift          (10)
#define  IPQ_DECONTOUR_De_Contour_Threshold_decont_dark_contrast_th_shift        (0)
#define  IPQ_DECONTOUR_De_Contour_Threshold_decont_gradation_th_y_mask           (0x7C000000)
#define  IPQ_DECONTOUR_De_Contour_Threshold_decont_dark_th_mask                  (0x03FF0000)
#define  IPQ_DECONTOUR_De_Contour_Threshold_decont_gradation_th_c_mask           (0x00007C00)
#define  IPQ_DECONTOUR_De_Contour_Threshold_decont_dark_contrast_th_mask         (0x000003FF)
#define  IPQ_DECONTOUR_De_Contour_Threshold_decont_gradation_th_y(data)          (0x7C000000&((data)<<26))
#define  IPQ_DECONTOUR_De_Contour_Threshold_decont_dark_th(data)                 (0x03FF0000&((data)<<16))
#define  IPQ_DECONTOUR_De_Contour_Threshold_decont_gradation_th_c(data)          (0x00007C00&((data)<<10))
#define  IPQ_DECONTOUR_De_Contour_Threshold_decont_dark_contrast_th(data)        (0x000003FF&(data))
#define  IPQ_DECONTOUR_De_Contour_Threshold_get_decont_gradation_th_y(data)      ((0x7C000000&(data))>>26)
#define  IPQ_DECONTOUR_De_Contour_Threshold_get_decont_dark_th(data)             ((0x03FF0000&(data))>>16)
#define  IPQ_DECONTOUR_De_Contour_Threshold_get_decont_gradation_th_c(data)      ((0x00007C00&(data))>>10)
#define  IPQ_DECONTOUR_De_Contour_Threshold_get_decont_dark_contrast_th(data)    (0x000003FF&(data))

#define  IPQ_DECONTOUR_De_Contour_Diff_th                                       0x18025718
#define  IPQ_DECONTOUR_De_Contour_Diff_th_reg_addr                               "0xB8025718"
#define  IPQ_DECONTOUR_De_Contour_Diff_th_reg                                    0xB8025718
#define  IPQ_DECONTOUR_De_Contour_Diff_th_inst_addr                              "0x0006"
#define  set_IPQ_DECONTOUR_De_Contour_Diff_th_reg(data)                          (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Diff_th_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Diff_th_reg                                (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Diff_th_reg))
#define  IPQ_DECONTOUR_De_Contour_Diff_th_decont_maxmindiff_th_c_shift           (8)
#define  IPQ_DECONTOUR_De_Contour_Diff_th_decont_maxmindiff_th_y_shift           (0)
#define  IPQ_DECONTOUR_De_Contour_Diff_th_decont_maxmindiff_th_c_mask            (0x0000FF00)
#define  IPQ_DECONTOUR_De_Contour_Diff_th_decont_maxmindiff_th_y_mask            (0x000000FF)
#define  IPQ_DECONTOUR_De_Contour_Diff_th_decont_maxmindiff_th_c(data)           (0x0000FF00&((data)<<8))
#define  IPQ_DECONTOUR_De_Contour_Diff_th_decont_maxmindiff_th_y(data)           (0x000000FF&(data))
#define  IPQ_DECONTOUR_De_Contour_Diff_th_get_decont_maxmindiff_th_c(data)       ((0x0000FF00&(data))>>8)
#define  IPQ_DECONTOUR_De_Contour_Diff_th_get_decont_maxmindiff_th_y(data)       (0x000000FF&(data))

#define  IPQ_DECONTOUR_De_Contour_Counter                                       0x1802571C
#define  IPQ_DECONTOUR_De_Contour_Counter_reg_addr                               "0xB802571C"
#define  IPQ_DECONTOUR_De_Contour_Counter_reg                                    0xB802571C
#define  IPQ_DECONTOUR_De_Contour_Counter_inst_addr                              "0x0007"
#define  set_IPQ_DECONTOUR_De_Contour_Counter_reg(data)                          (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Counter_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Counter_reg                                (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Counter_reg))
#define  IPQ_DECONTOUR_De_Contour_Counter_decont_contour_cnt_shift               (0)
#define  IPQ_DECONTOUR_De_Contour_Counter_decont_contour_cnt_mask                (0x00FFFFFF)
#define  IPQ_DECONTOUR_De_Contour_Counter_decont_contour_cnt(data)               (0x00FFFFFF&(data))
#define  IPQ_DECONTOUR_De_Contour_Counter_get_decont_contour_cnt(data)           (0x00FFFFFF&(data))

#define  IPQ_DECONTOUR_De_Contour_Avfilter_Counter                              0x18025720
#define  IPQ_DECONTOUR_De_Contour_Avfilter_Counter_reg_addr                      "0xB8025720"
#define  IPQ_DECONTOUR_De_Contour_Avfilter_Counter_reg                           0xB8025720
#define  IPQ_DECONTOUR_De_Contour_Avfilter_Counter_inst_addr                     "0x0008"
#define  set_IPQ_DECONTOUR_De_Contour_Avfilter_Counter_reg(data)                 (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Avfilter_Counter_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Avfilter_Counter_reg                       (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Avfilter_Counter_reg))
#define  IPQ_DECONTOUR_De_Contour_Avfilter_Counter_decont_avfilter_cnt_shift     (0)
#define  IPQ_DECONTOUR_De_Contour_Avfilter_Counter_decont_avfilter_cnt_mask      (0x00FFFFFF)
#define  IPQ_DECONTOUR_De_Contour_Avfilter_Counter_decont_avfilter_cnt(data)     (0x00FFFFFF&(data))
#define  IPQ_DECONTOUR_De_Contour_Avfilter_Counter_get_decont_avfilter_cnt(data) (0x00FFFFFF&(data))

#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl                                     0x18025724
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_reg_addr                             "0xB8025724"
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_reg                                  0xB8025724
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_inst_addr                            "0x0009"
#define  set_IPQ_DECONTOUR_De_Contour_Hist_Ctrl_reg(data)                        (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Hist_Ctrl_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Hist_Ctrl_reg                              (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Hist_Ctrl_reg))
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_decont_filter_range_hist_rden_shift  (31)
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_decont_filter_range_hist_read_mode_shift (30)
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_decont_filter_range_hist_locken_shift (29)
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_decont_filter_range_hist_raddr_shift (25)
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_decont_filter_range_hist_rden_mask   (0x80000000)
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_decont_filter_range_hist_read_mode_mask (0x40000000)
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_decont_filter_range_hist_locken_mask (0x20000000)
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_decont_filter_range_hist_raddr_mask  (0x1E000000)
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_decont_filter_range_hist_rden(data)  (0x80000000&((data)<<31))
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_decont_filter_range_hist_read_mode(data) (0x40000000&((data)<<30))
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_decont_filter_range_hist_locken(data) (0x20000000&((data)<<29))
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_decont_filter_range_hist_raddr(data) (0x1E000000&((data)<<25))
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_get_decont_filter_range_hist_rden(data) ((0x80000000&(data))>>31)
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_get_decont_filter_range_hist_read_mode(data) ((0x40000000&(data))>>30)
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_get_decont_filter_range_hist_locken(data) ((0x20000000&(data))>>29)
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_get_decont_filter_range_hist_raddr(data) ((0x1E000000&(data))>>25)

#define  IPQ_DECONTOUR_De_Contour_Hist_Data                                     0x18025728
#define  IPQ_DECONTOUR_De_Contour_Hist_Data_reg_addr                             "0xB8025728"
#define  IPQ_DECONTOUR_De_Contour_Hist_Data_reg                                  0xB8025728
#define  IPQ_DECONTOUR_De_Contour_Hist_Data_inst_addr                            "0x000A"
#define  set_IPQ_DECONTOUR_De_Contour_Hist_Data_reg(data)                        (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Hist_Data_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Hist_Data_reg                              (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Hist_Data_reg))
#define  IPQ_DECONTOUR_De_Contour_Hist_Data_decont_filter_range_hist_shift       (0)
#define  IPQ_DECONTOUR_De_Contour_Hist_Data_decont_filter_range_hist_mask        (0x00FFFFFF)
#define  IPQ_DECONTOUR_De_Contour_Hist_Data_decont_filter_range_hist(data)       (0x00FFFFFF&(data))
#define  IPQ_DECONTOUR_De_Contour_Hist_Data_get_decont_filter_range_hist(data)   (0x00FFFFFF&(data))

#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist                                    0x1802572C
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_reg_addr                            "0xB802572C"
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_reg                                 0xB802572C
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_inst_addr                           "0x000B"
#define  set_IPQ_DECONTOUR_De_Contour_YDIFF_Hist_reg(data)                       (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_YDIFF_Hist_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_YDIFF_Hist_reg                             (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_YDIFF_Hist_reg))
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_rden_shift   (31)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_read_mode_shift (30)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_locken_shift (29)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_raddr_shift  (26)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_shift        (0)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_rden_mask    (0x80000000)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_read_mode_mask (0x40000000)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_locken_mask  (0x20000000)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_raddr_mask   (0x1C000000)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_mask         (0x00FFFFFF)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_rden(data)   (0x80000000&((data)<<31))
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_read_mode(data) (0x40000000&((data)<<30))
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_locken(data) (0x20000000&((data)<<29))
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_raddr(data)  (0x1C000000&((data)<<26))
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist(data)        (0x00FFFFFF&(data))
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_get_decont_info_ydiff_hist_rden(data) ((0x80000000&(data))>>31)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_get_decont_info_ydiff_hist_read_mode(data) ((0x40000000&(data))>>30)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_get_decont_info_ydiff_hist_locken(data) ((0x20000000&(data))>>29)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_get_decont_info_ydiff_hist_raddr(data) ((0x1C000000&(data))>>26)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_get_decont_info_ydiff_hist(data)    (0x00FFFFFF&(data))

#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist                                    0x18025730
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_reg_addr                            "0xB8025730"
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_reg                                 0xB8025730
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_inst_addr                           "0x000C"
#define  set_IPQ_DECONTOUR_De_Contour_CDIFF_Hist_reg(data)                       (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_CDIFF_Hist_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_CDIFF_Hist_reg                             (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_CDIFF_Hist_reg))
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_rden_shift   (31)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_read_mode_shift (30)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_locken_shift (29)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_raddr_shift  (26)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_shift        (0)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_rden_mask    (0x80000000)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_read_mode_mask (0x40000000)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_locken_mask  (0x20000000)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_raddr_mask   (0x1C000000)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_mask         (0x00FFFFFF)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_rden(data)   (0x80000000&((data)<<31))
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_read_mode(data) (0x40000000&((data)<<30))
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_locken(data) (0x20000000&((data)<<29))
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_raddr(data)  (0x1C000000&((data)<<26))
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist(data)        (0x00FFFFFF&(data))
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_get_decont_info_cdiff_hist_rden(data) ((0x80000000&(data))>>31)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_get_decont_info_cdiff_hist_read_mode(data) ((0x40000000&(data))>>30)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_get_decont_info_cdiff_hist_locken(data) ((0x20000000&(data))>>29)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_get_decont_info_cdiff_hist_raddr(data) ((0x1C000000&(data))>>26)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_get_decont_info_cdiff_hist(data)    (0x00FFFFFF&(data))

#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl                                    0x18025734
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_reg_addr                            "0xB8025734"
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_reg                                 0xB8025734
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_inst_addr                           "0x000D"
#define  set_IPQ_DECONTOUR_De_Contour_db_reg_ctl_reg(data)                       (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_db_reg_ctl_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_db_reg_ctl_reg                             (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_db_reg_ctl_reg))
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_db_read_shift                       (2)
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_db_en_shift                         (1)
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_db_apply_shift                      (0)
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_db_read_mask                        (0x00000004)
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_db_en_mask                          (0x00000002)
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_db_apply_mask                       (0x00000001)
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_db_read(data)                       (0x00000004&((data)<<2))
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_db_en(data)                         (0x00000002&((data)<<1))
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_db_apply(data)                      (0x00000001&(data))
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_get_db_read(data)                   ((0x00000004&(data))>>2)
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_get_db_en(data)                     ((0x00000002&(data))>>1)
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_get_db_apply(data)                  (0x00000001&(data))

#define  IPQ_DECONTOUR_De_Contour_Bottleneck                                    0x18025738
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_reg_addr                            "0xB8025738"
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_reg                                 0xB8025738
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_inst_addr                           "0x000E"
#define  set_IPQ_DECONTOUR_De_Contour_Bottleneck_reg(data)                       (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Bottleneck_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Bottleneck_reg                             (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Bottleneck_reg))
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range4_shift      (16)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range3_shift      (12)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range2_shift      (8)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range1_shift      (4)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range0_shift      (0)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range4_mask       (0x000F0000)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range3_mask       (0x0000F000)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range2_mask       (0x00000F00)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range1_mask       (0x000000F0)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range0_mask       (0x0000000F)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range4(data)      (0x000F0000&((data)<<16))
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range3(data)      (0x0000F000&((data)<<12))
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range2(data)      (0x00000F00&((data)<<8))
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range1(data)      (0x000000F0&((data)<<4))
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range0(data)      (0x0000000F&(data))
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_get_decont_bottleneck_range4(data)  ((0x000F0000&(data))>>16)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_get_decont_bottleneck_range3(data)  ((0x0000F000&(data))>>12)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_get_decont_bottleneck_range2(data)  ((0x00000F00&(data))>>8)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_get_decont_bottleneck_range1(data)  ((0x000000F0&(data))>>4)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_get_decont_bottleneck_range0(data)  (0x0000000F&(data))

#define  IPQ_DECONTOUR_De_Contour_Diff_Clamp                                    0x1802573C
#define  IPQ_DECONTOUR_De_Contour_Diff_Clamp_reg_addr                            "0xB802573C"
#define  IPQ_DECONTOUR_De_Contour_Diff_Clamp_reg                                 0xB802573C
#define  IPQ_DECONTOUR_De_Contour_Diff_Clamp_inst_addr                           "0x000F"
#define  set_IPQ_DECONTOUR_De_Contour_Diff_Clamp_reg(data)                       (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Diff_Clamp_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Diff_Clamp_reg                             (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Diff_Clamp_reg))
#define  IPQ_DECONTOUR_De_Contour_Diff_Clamp_decont_diff_clamp_c_shift           (10)
#define  IPQ_DECONTOUR_De_Contour_Diff_Clamp_decont_diff_clamp_y_shift           (0)
#define  IPQ_DECONTOUR_De_Contour_Diff_Clamp_decont_diff_clamp_c_mask            (0x000FFC00)
#define  IPQ_DECONTOUR_De_Contour_Diff_Clamp_decont_diff_clamp_y_mask            (0x000003FF)
#define  IPQ_DECONTOUR_De_Contour_Diff_Clamp_decont_diff_clamp_c(data)           (0x000FFC00&((data)<<10))
#define  IPQ_DECONTOUR_De_Contour_Diff_Clamp_decont_diff_clamp_y(data)           (0x000003FF&(data))
#define  IPQ_DECONTOUR_De_Contour_Diff_Clamp_get_decont_diff_clamp_c(data)       ((0x000FFC00&(data))>>10)
#define  IPQ_DECONTOUR_De_Contour_Diff_Clamp_get_decont_diff_clamp_y(data)       (0x000003FF&(data))

#define  IPQ_DECONTOUR_De_Contour_Contrast2                                     0x18025740
#define  IPQ_DECONTOUR_De_Contour_Contrast2_reg_addr                             "0xB8025740"
#define  IPQ_DECONTOUR_De_Contour_Contrast2_reg                                  0xB8025740
#define  IPQ_DECONTOUR_De_Contour_Contrast2_inst_addr                            "0x0010"
#define  set_IPQ_DECONTOUR_De_Contour_Contrast2_reg(data)                        (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Contrast2_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Contrast2_reg                              (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Contrast2_reg))
#define  IPQ_DECONTOUR_De_Contour_Contrast2_decont_contrast_th3_y_shift          (16)
#define  IPQ_DECONTOUR_De_Contour_Contrast2_decont_contrast_th2_y_shift          (0)
#define  IPQ_DECONTOUR_De_Contour_Contrast2_decont_contrast_th3_y_mask           (0x03FF0000)
#define  IPQ_DECONTOUR_De_Contour_Contrast2_decont_contrast_th2_y_mask           (0x000003FF)
#define  IPQ_DECONTOUR_De_Contour_Contrast2_decont_contrast_th3_y(data)          (0x03FF0000&((data)<<16))
#define  IPQ_DECONTOUR_De_Contour_Contrast2_decont_contrast_th2_y(data)          (0x000003FF&(data))
#define  IPQ_DECONTOUR_De_Contour_Contrast2_get_decont_contrast_th3_y(data)      ((0x03FF0000&(data))>>16)
#define  IPQ_DECONTOUR_De_Contour_Contrast2_get_decont_contrast_th2_y(data)      (0x000003FF&(data))

#define  IPQ_DECONTOUR_De_Contour_Contrast3                                     0x18025744
#define  IPQ_DECONTOUR_De_Contour_Contrast3_reg_addr                             "0xB8025744"
#define  IPQ_DECONTOUR_De_Contour_Contrast3_reg                                  0xB8025744
#define  IPQ_DECONTOUR_De_Contour_Contrast3_inst_addr                            "0x0011"
#define  set_IPQ_DECONTOUR_De_Contour_Contrast3_reg(data)                        (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Contrast3_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Contrast3_reg                              (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Contrast3_reg))
#define  IPQ_DECONTOUR_De_Contour_Contrast3_decont_contrast_th3_c_shift          (16)
#define  IPQ_DECONTOUR_De_Contour_Contrast3_decont_contrast_th2_c_shift          (0)
#define  IPQ_DECONTOUR_De_Contour_Contrast3_decont_contrast_th3_c_mask           (0x03FF0000)
#define  IPQ_DECONTOUR_De_Contour_Contrast3_decont_contrast_th2_c_mask           (0x000003FF)
#define  IPQ_DECONTOUR_De_Contour_Contrast3_decont_contrast_th3_c(data)          (0x03FF0000&((data)<<16))
#define  IPQ_DECONTOUR_De_Contour_Contrast3_decont_contrast_th2_c(data)          (0x000003FF&(data))
#define  IPQ_DECONTOUR_De_Contour_Contrast3_get_decont_contrast_th3_c(data)      ((0x03FF0000&(data))>>16)
#define  IPQ_DECONTOUR_De_Contour_Contrast3_get_decont_contrast_th2_c(data)      (0x000003FF&(data))

#define  IPQ_DECONTOUR_De_Contour_Dark                                          0x18025748
#define  IPQ_DECONTOUR_De_Contour_Dark_reg_addr                                  "0xB8025748"
#define  IPQ_DECONTOUR_De_Contour_Dark_reg                                       0xB8025748
#define  IPQ_DECONTOUR_De_Contour_Dark_inst_addr                                 "0x0012"
#define  set_IPQ_DECONTOUR_De_Contour_Dark_reg(data)                             (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Dark_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Dark_reg                                   (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Dark_reg))
#define  IPQ_DECONTOUR_De_Contour_Dark_decont_dark_contrast_th3_shift            (16)
#define  IPQ_DECONTOUR_De_Contour_Dark_decont_dark_contrast_th2_shift            (0)
#define  IPQ_DECONTOUR_De_Contour_Dark_decont_dark_contrast_th3_mask             (0x03FF0000)
#define  IPQ_DECONTOUR_De_Contour_Dark_decont_dark_contrast_th2_mask             (0x000003FF)
#define  IPQ_DECONTOUR_De_Contour_Dark_decont_dark_contrast_th3(data)            (0x03FF0000&((data)<<16))
#define  IPQ_DECONTOUR_De_Contour_Dark_decont_dark_contrast_th2(data)            (0x000003FF&(data))
#define  IPQ_DECONTOUR_De_Contour_Dark_get_decont_dark_contrast_th3(data)        ((0x03FF0000&(data))>>16)
#define  IPQ_DECONTOUR_De_Contour_Dark_get_decont_dark_contrast_th2(data)        (0x000003FF&(data))

#define  IPQ_DECONTOUR_De_Contour_Gradation                                     0x1802574C
#define  IPQ_DECONTOUR_De_Contour_Gradation_reg_addr                             "0xB802574C"
#define  IPQ_DECONTOUR_De_Contour_Gradation_reg                                  0xB802574C
#define  IPQ_DECONTOUR_De_Contour_Gradation_inst_addr                            "0x0013"
#define  set_IPQ_DECONTOUR_De_Contour_Gradation_reg(data)                        (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Gradation_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Gradation_reg                              (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Gradation_reg))
#define  IPQ_DECONTOUR_De_Contour_Gradation_decont_gradation_th2_c_shift         (8)
#define  IPQ_DECONTOUR_De_Contour_Gradation_decont_gradation_th2_y_shift         (0)
#define  IPQ_DECONTOUR_De_Contour_Gradation_decont_gradation_th2_c_mask          (0x00001F00)
#define  IPQ_DECONTOUR_De_Contour_Gradation_decont_gradation_th2_y_mask          (0x0000001F)
#define  IPQ_DECONTOUR_De_Contour_Gradation_decont_gradation_th2_c(data)         (0x00001F00&((data)<<8))
#define  IPQ_DECONTOUR_De_Contour_Gradation_decont_gradation_th2_y(data)         (0x0000001F&(data))
#define  IPQ_DECONTOUR_De_Contour_Gradation_get_decont_gradation_th2_c(data)     ((0x00001F00&(data))>>8)
#define  IPQ_DECONTOUR_De_Contour_Gradation_get_decont_gradation_th2_y(data)     (0x0000001F&(data))

#define  IPQ_DECONTOUR_De_Contour_Minmax                                        0x18025750
#define  IPQ_DECONTOUR_De_Contour_Minmax_reg_addr                                "0xB8025750"
#define  IPQ_DECONTOUR_De_Contour_Minmax_reg                                     0xB8025750
#define  IPQ_DECONTOUR_De_Contour_Minmax_inst_addr                               "0x0014"
#define  set_IPQ_DECONTOUR_De_Contour_Minmax_reg(data)                           (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Minmax_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Minmax_reg                                 (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Minmax_reg))
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmin_lv3_shift                 (22)
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmin_lv2_shift                 (20)
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmin_lv1_shift                 (18)
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmin_lv0_shift                 (16)
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmindiff_th3_y_shift           (8)
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmindiff_th2_y_shift           (0)
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmin_lv3_mask                  (0x00C00000)
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmin_lv2_mask                  (0x00300000)
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmin_lv1_mask                  (0x000C0000)
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmin_lv0_mask                  (0x00030000)
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmindiff_th3_y_mask            (0x0000FF00)
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmindiff_th2_y_mask            (0x000000FF)
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmin_lv3(data)                 (0x00C00000&((data)<<22))
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmin_lv2(data)                 (0x00300000&((data)<<20))
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmin_lv1(data)                 (0x000C0000&((data)<<18))
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmin_lv0(data)                 (0x00030000&((data)<<16))
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmindiff_th3_y(data)           (0x0000FF00&((data)<<8))
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmindiff_th2_y(data)           (0x000000FF&(data))
#define  IPQ_DECONTOUR_De_Contour_Minmax_get_decont_maxmin_lv3(data)             ((0x00C00000&(data))>>22)
#define  IPQ_DECONTOUR_De_Contour_Minmax_get_decont_maxmin_lv2(data)             ((0x00300000&(data))>>20)
#define  IPQ_DECONTOUR_De_Contour_Minmax_get_decont_maxmin_lv1(data)             ((0x000C0000&(data))>>18)
#define  IPQ_DECONTOUR_De_Contour_Minmax_get_decont_maxmin_lv0(data)             ((0x00030000&(data))>>16)
#define  IPQ_DECONTOUR_De_Contour_Minmax_get_decont_maxmindiff_th3_y(data)       ((0x0000FF00&(data))>>8)
#define  IPQ_DECONTOUR_De_Contour_Minmax_get_decont_maxmindiff_th2_y(data)       (0x000000FF&(data))

#define  IPQ_DECONTOUR_De_Contour_Level                                         0x18025754
#define  IPQ_DECONTOUR_De_Contour_Level_reg_addr                                 "0xB8025754"
#define  IPQ_DECONTOUR_De_Contour_Level_reg                                      0xB8025754
#define  IPQ_DECONTOUR_De_Contour_Level_inst_addr                                "0x0015"
#define  set_IPQ_DECONTOUR_De_Contour_Level_reg(data)                            (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Level_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Level_reg                                  (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Level_reg))
#define  IPQ_DECONTOUR_De_Contour_Level_decont_blend_gain_md_shift               (16)
#define  IPQ_DECONTOUR_De_Contour_Level_decont_blend_gain_lo_shift               (12)
#define  IPQ_DECONTOUR_De_Contour_Level_decont_level_range_hi_shift              (8)
#define  IPQ_DECONTOUR_De_Contour_Level_decont_level_range_md_shift              (4)
#define  IPQ_DECONTOUR_De_Contour_Level_decont_level_range_lo_shift              (0)
#define  IPQ_DECONTOUR_De_Contour_Level_decont_blend_gain_md_mask                (0x00070000)
#define  IPQ_DECONTOUR_De_Contour_Level_decont_blend_gain_lo_mask                (0x00007000)
#define  IPQ_DECONTOUR_De_Contour_Level_decont_level_range_hi_mask               (0x00000F00)
#define  IPQ_DECONTOUR_De_Contour_Level_decont_level_range_md_mask               (0x000000F0)
#define  IPQ_DECONTOUR_De_Contour_Level_decont_level_range_lo_mask               (0x0000000F)
#define  IPQ_DECONTOUR_De_Contour_Level_decont_blend_gain_md(data)               (0x00070000&((data)<<16))
#define  IPQ_DECONTOUR_De_Contour_Level_decont_blend_gain_lo(data)               (0x00007000&((data)<<12))
#define  IPQ_DECONTOUR_De_Contour_Level_decont_level_range_hi(data)              (0x00000F00&((data)<<8))
#define  IPQ_DECONTOUR_De_Contour_Level_decont_level_range_md(data)              (0x000000F0&((data)<<4))
#define  IPQ_DECONTOUR_De_Contour_Level_decont_level_range_lo(data)              (0x0000000F&(data))
#define  IPQ_DECONTOUR_De_Contour_Level_get_decont_blend_gain_md(data)           ((0x00070000&(data))>>16)
#define  IPQ_DECONTOUR_De_Contour_Level_get_decont_blend_gain_lo(data)           ((0x00007000&(data))>>12)
#define  IPQ_DECONTOUR_De_Contour_Level_get_decont_level_range_hi(data)          ((0x00000F00&(data))>>8)
#define  IPQ_DECONTOUR_De_Contour_Level_get_decont_level_range_md(data)          ((0x000000F0&(data))>>4)
#define  IPQ_DECONTOUR_De_Contour_Level_get_decont_level_range_lo(data)          (0x0000000F&(data))

#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff0                              0x18025760
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff0_reg_addr                      "0xB8025760"
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff0_reg                           0xB8025760
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff0_inst_addr                     "0x0016"
#define  set_IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff0_reg(data)                 (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff0_reg)=data)
#define  get_IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff0_reg                       (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff0_reg))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff0_bdecont_cdiff_shift_shift     (28)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff0_bdecont_alpha_by_cdiff13_shift (16)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff0_bdecont_alpha_by_cdiff14_shift (8)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff0_bdecont_alpha_by_cdiff15_shift (0)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff0_bdecont_cdiff_shift_mask      (0x70000000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff0_bdecont_alpha_by_cdiff13_mask (0x003F0000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff0_bdecont_alpha_by_cdiff14_mask (0x00003F00)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff0_bdecont_alpha_by_cdiff15_mask (0x0000003F)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff0_bdecont_cdiff_shift(data)     (0x70000000&((data)<<28))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff0_bdecont_alpha_by_cdiff13(data) (0x003F0000&((data)<<16))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff0_bdecont_alpha_by_cdiff14(data) (0x00003F00&((data)<<8))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff0_bdecont_alpha_by_cdiff15(data) (0x0000003F&(data))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff0_get_bdecont_cdiff_shift(data) ((0x70000000&(data))>>28)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff0_get_bdecont_alpha_by_cdiff13(data) ((0x003F0000&(data))>>16)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff0_get_bdecont_alpha_by_cdiff14(data) ((0x00003F00&(data))>>8)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff0_get_bdecont_alpha_by_cdiff15(data) (0x0000003F&(data))

#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff1                              0x18025764
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff1_reg_addr                      "0xB8025764"
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff1_reg                           0xB8025764
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff1_inst_addr                     "0x0017"
#define  set_IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff1_reg(data)                 (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff1_reg)=data)
#define  get_IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff1_reg                       (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff1_reg))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff1_bdecont_alpha_by_cdiff9_shift (24)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff1_bdecont_alpha_by_cdiff10_shift (16)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff1_bdecont_alpha_by_cdiff11_shift (8)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff1_bdecont_alpha_by_cdiff12_shift (0)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff1_bdecont_alpha_by_cdiff9_mask  (0x3F000000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff1_bdecont_alpha_by_cdiff10_mask (0x003F0000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff1_bdecont_alpha_by_cdiff11_mask (0x00003F00)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff1_bdecont_alpha_by_cdiff12_mask (0x0000003F)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff1_bdecont_alpha_by_cdiff9(data) (0x3F000000&((data)<<24))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff1_bdecont_alpha_by_cdiff10(data) (0x003F0000&((data)<<16))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff1_bdecont_alpha_by_cdiff11(data) (0x00003F00&((data)<<8))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff1_bdecont_alpha_by_cdiff12(data) (0x0000003F&(data))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff1_get_bdecont_alpha_by_cdiff9(data) ((0x3F000000&(data))>>24)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff1_get_bdecont_alpha_by_cdiff10(data) ((0x003F0000&(data))>>16)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff1_get_bdecont_alpha_by_cdiff11(data) ((0x00003F00&(data))>>8)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff1_get_bdecont_alpha_by_cdiff12(data) (0x0000003F&(data))

#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff2                              0x18025768
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff2_reg_addr                      "0xB8025768"
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff2_reg                           0xB8025768
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff2_inst_addr                     "0x0018"
#define  set_IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff2_reg(data)                 (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff2_reg)=data)
#define  get_IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff2_reg                       (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff2_reg))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff2_bdecont_alpha_by_cdiff5_shift (24)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff2_bdecont_alpha_by_cdiff6_shift (16)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff2_bdecont_alpha_by_cdiff7_shift (8)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff2_bdecont_alpha_by_cdiff8_shift (0)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff2_bdecont_alpha_by_cdiff5_mask  (0x3F000000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff2_bdecont_alpha_by_cdiff6_mask  (0x003F0000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff2_bdecont_alpha_by_cdiff7_mask  (0x00003F00)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff2_bdecont_alpha_by_cdiff8_mask  (0x0000003F)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff2_bdecont_alpha_by_cdiff5(data) (0x3F000000&((data)<<24))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff2_bdecont_alpha_by_cdiff6(data) (0x003F0000&((data)<<16))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff2_bdecont_alpha_by_cdiff7(data) (0x00003F00&((data)<<8))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff2_bdecont_alpha_by_cdiff8(data) (0x0000003F&(data))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff2_get_bdecont_alpha_by_cdiff5(data) ((0x3F000000&(data))>>24)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff2_get_bdecont_alpha_by_cdiff6(data) ((0x003F0000&(data))>>16)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff2_get_bdecont_alpha_by_cdiff7(data) ((0x00003F00&(data))>>8)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff2_get_bdecont_alpha_by_cdiff8(data) (0x0000003F&(data))

#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff3                              0x1802576C
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff3_reg_addr                      "0xB802576C"
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff3_reg                           0xB802576C
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff3_inst_addr                     "0x0019"
#define  set_IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff3_reg(data)                 (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff3_reg)=data)
#define  get_IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff3_reg                       (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff3_reg))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff3_bdecont_alpha_by_cdiff1_shift (24)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff3_bdecont_alpha_by_cdiff2_shift (16)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff3_bdecont_alpha_by_cdiff3_shift (8)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff3_bdecont_alpha_by_cdiff4_shift (0)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff3_bdecont_alpha_by_cdiff1_mask  (0x3F000000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff3_bdecont_alpha_by_cdiff2_mask  (0x003F0000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff3_bdecont_alpha_by_cdiff3_mask  (0x00003F00)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff3_bdecont_alpha_by_cdiff4_mask  (0x0000003F)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff3_bdecont_alpha_by_cdiff1(data) (0x3F000000&((data)<<24))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff3_bdecont_alpha_by_cdiff2(data) (0x003F0000&((data)<<16))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff3_bdecont_alpha_by_cdiff3(data) (0x00003F00&((data)<<8))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff3_bdecont_alpha_by_cdiff4(data) (0x0000003F&(data))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff3_get_bdecont_alpha_by_cdiff1(data) ((0x3F000000&(data))>>24)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff3_get_bdecont_alpha_by_cdiff2(data) ((0x003F0000&(data))>>16)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff3_get_bdecont_alpha_by_cdiff3(data) ((0x00003F00&(data))>>8)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff3_get_bdecont_alpha_by_cdiff4(data) (0x0000003F&(data))

#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff4                              0x18025770
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff4_reg_addr                      "0xB8025770"
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff4_reg                           0xB8025770
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff4_inst_addr                     "0x001A"
#define  set_IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff4_reg(data)                 (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff4_reg)=data)
#define  get_IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff4_reg                       (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff4_reg))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff4_bdecont_alpha_by_cdiff0_shift (0)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff4_bdecont_alpha_by_cdiff0_mask  (0x0000003F)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff4_bdecont_alpha_by_cdiff0(data) (0x0000003F&(data))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Cdiff4_get_bdecont_alpha_by_cdiff0(data) (0x0000003F&(data))

#define  IPQ_DECONTOUR_BLK_De_profile_diff_dist                                 0x18025774
#define  IPQ_DECONTOUR_BLK_De_profile_diff_dist_reg_addr                         "0xB8025774"
#define  IPQ_DECONTOUR_BLK_De_profile_diff_dist_reg                              0xB8025774
#define  IPQ_DECONTOUR_BLK_De_profile_diff_dist_inst_addr                        "0x001B"
#define  set_IPQ_DECONTOUR_BLK_De_profile_diff_dist_reg(data)                    (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_profile_diff_dist_reg)=data)
#define  get_IPQ_DECONTOUR_BLK_De_profile_diff_dist_reg                          (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_profile_diff_dist_reg))
#define  IPQ_DECONTOUR_BLK_De_profile_diff_dist_bdecont_profile_diff_distv_shift (8)
#define  IPQ_DECONTOUR_BLK_De_profile_diff_dist_bdecont_profile_diff_disth_shift (0)
#define  IPQ_DECONTOUR_BLK_De_profile_diff_dist_bdecont_profile_diff_distv_mask  (0x0000FF00)
#define  IPQ_DECONTOUR_BLK_De_profile_diff_dist_bdecont_profile_diff_disth_mask  (0x000000FF)
#define  IPQ_DECONTOUR_BLK_De_profile_diff_dist_bdecont_profile_diff_distv(data) (0x0000FF00&((data)<<8))
#define  IPQ_DECONTOUR_BLK_De_profile_diff_dist_bdecont_profile_diff_disth(data) (0x000000FF&(data))
#define  IPQ_DECONTOUR_BLK_De_profile_diff_dist_get_bdecont_profile_diff_distv(data) ((0x0000FF00&(data))>>8)
#define  IPQ_DECONTOUR_BLK_De_profile_diff_dist_get_bdecont_profile_diff_disth(data) (0x000000FF&(data))

#define  IPQ_DECONTOUR_BLK_De_profile_diff_th                                   0x18025778
#define  IPQ_DECONTOUR_BLK_De_profile_diff_th_reg_addr                           "0xB8025778"
#define  IPQ_DECONTOUR_BLK_De_profile_diff_th_reg                                0xB8025778
#define  IPQ_DECONTOUR_BLK_De_profile_diff_th_inst_addr                          "0x001C"
#define  set_IPQ_DECONTOUR_BLK_De_profile_diff_th_reg(data)                      (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_profile_diff_th_reg)=data)
#define  get_IPQ_DECONTOUR_BLK_De_profile_diff_th_reg                            (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_profile_diff_th_reg))
#define  IPQ_DECONTOUR_BLK_De_profile_diff_th_bdecont_profile_diff_th_hi_shift   (16)
#define  IPQ_DECONTOUR_BLK_De_profile_diff_th_bdecont_profile_diff_th_lo_shift   (0)
#define  IPQ_DECONTOUR_BLK_De_profile_diff_th_bdecont_profile_diff_th_hi_mask    (0x0FFF0000)
#define  IPQ_DECONTOUR_BLK_De_profile_diff_th_bdecont_profile_diff_th_lo_mask    (0x00000FFF)
#define  IPQ_DECONTOUR_BLK_De_profile_diff_th_bdecont_profile_diff_th_hi(data)   (0x0FFF0000&((data)<<16))
#define  IPQ_DECONTOUR_BLK_De_profile_diff_th_bdecont_profile_diff_th_lo(data)   (0x00000FFF&(data))
#define  IPQ_DECONTOUR_BLK_De_profile_diff_th_get_bdecont_profile_diff_th_hi(data) ((0x0FFF0000&(data))>>16)
#define  IPQ_DECONTOUR_BLK_De_profile_diff_th_get_bdecont_profile_diff_th_lo(data) (0x00000FFF&(data))

#define  IPQ_DECONTOUR_BLK_De_profile_diff_gain                                 0x1802577C
#define  IPQ_DECONTOUR_BLK_De_profile_diff_gain_reg_addr                         "0xB802577C"
#define  IPQ_DECONTOUR_BLK_De_profile_diff_gain_reg                              0xB802577C
#define  IPQ_DECONTOUR_BLK_De_profile_diff_gain_inst_addr                        "0x001D"
#define  set_IPQ_DECONTOUR_BLK_De_profile_diff_gain_reg(data)                    (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_profile_diff_gain_reg)=data)
#define  get_IPQ_DECONTOUR_BLK_De_profile_diff_gain_reg                          (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_profile_diff_gain_reg))
#define  IPQ_DECONTOUR_BLK_De_profile_diff_gain_bdecont_profile_diff_gain_slope_shift (16)
#define  IPQ_DECONTOUR_BLK_De_profile_diff_gain_bdecont_profile_diff_gain_hi_shift (6)
#define  IPQ_DECONTOUR_BLK_De_profile_diff_gain_bdecont_profile_diff_gain_lo_shift (0)
#define  IPQ_DECONTOUR_BLK_De_profile_diff_gain_bdecont_profile_diff_gain_slope_mask (0x3FFF0000)
#define  IPQ_DECONTOUR_BLK_De_profile_diff_gain_bdecont_profile_diff_gain_hi_mask (0x00000FC0)
#define  IPQ_DECONTOUR_BLK_De_profile_diff_gain_bdecont_profile_diff_gain_lo_mask (0x0000003F)
#define  IPQ_DECONTOUR_BLK_De_profile_diff_gain_bdecont_profile_diff_gain_slope(data) (0x3FFF0000&((data)<<16))
#define  IPQ_DECONTOUR_BLK_De_profile_diff_gain_bdecont_profile_diff_gain_hi(data) (0x00000FC0&((data)<<6))
#define  IPQ_DECONTOUR_BLK_De_profile_diff_gain_bdecont_profile_diff_gain_lo(data) (0x0000003F&(data))
#define  IPQ_DECONTOUR_BLK_De_profile_diff_gain_get_bdecont_profile_diff_gain_slope(data) ((0x3FFF0000&(data))>>16)
#define  IPQ_DECONTOUR_BLK_De_profile_diff_gain_get_bdecont_profile_diff_gain_hi(data) ((0x00000FC0&(data))>>6)
#define  IPQ_DECONTOUR_BLK_De_profile_diff_gain_get_bdecont_profile_diff_gain_lo(data) (0x0000003F&(data))

#define  IPQ_DECONTOUR_Block_DeContour_vsize_remain                             0x180257D4
#define  IPQ_DECONTOUR_Block_DeContour_vsize_remain_reg_addr                     "0xB80257D4"
#define  IPQ_DECONTOUR_Block_DeContour_vsize_remain_reg                          0xB80257D4
#define  IPQ_DECONTOUR_Block_DeContour_vsize_remain_inst_addr                    "0x001E"
#define  set_IPQ_DECONTOUR_Block_DeContour_vsize_remain_reg(data)                (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_vsize_remain_reg)=data)
#define  get_IPQ_DECONTOUR_Block_DeContour_vsize_remain_reg                      (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_vsize_remain_reg))
#define  IPQ_DECONTOUR_Block_DeContour_vsize_remain_bdecont_blk_vsize_remainder_shift (22)
#define  IPQ_DECONTOUR_Block_DeContour_vsize_remain_bdecont_blk_vsize_remainder_mask (0xFFC00000)
#define  IPQ_DECONTOUR_Block_DeContour_vsize_remain_bdecont_blk_vsize_remainder(data) (0xFFC00000&((data)<<22))
#define  IPQ_DECONTOUR_Block_DeContour_vsize_remain_get_bdecont_blk_vsize_remainder(data) ((0xFFC00000&(data))>>22)

#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL                                      0x18025780
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_reg_addr                              "0xB8025780"
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_reg                                   0xB8025780
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_inst_addr                             "0x001F"
#define  set_IPQ_DECONTOUR_BLK_De_Contour_CTRL_reg(data)                         (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_CTRL_reg)=data)
#define  get_IPQ_DECONTOUR_BLK_De_Contour_CTRL_reg                               (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_CTRL_reg))
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_bdecont_en_shift                      (31)
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_bdecont_profile_diff_gain_en_shift    (30)
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_bdecont_tenable_shift                 (29)
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_bdecont_dither_en_shift               (28)
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_bdecont_debug_chsel_shift             (6)
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_bdecont_debugmode_shift               (4)
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_bdecont_rst_shift                     (3)
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_bdecont_en_c_shift                    (2)
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_bdecont_en_mask                       (0x80000000)
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_bdecont_profile_diff_gain_en_mask     (0x40000000)
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_bdecont_tenable_mask                  (0x20000000)
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_bdecont_dither_en_mask                (0x10000000)
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_bdecont_debug_chsel_mask              (0x000000C0)
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_bdecont_debugmode_mask                (0x00000030)
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_bdecont_rst_mask                      (0x00000008)
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_bdecont_en_c_mask                     (0x00000004)
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_bdecont_en(data)                      (0x80000000&((data)<<31))
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_bdecont_profile_diff_gain_en(data)    (0x40000000&((data)<<30))
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_bdecont_tenable(data)                 (0x20000000&((data)<<29))
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_bdecont_dither_en(data)               (0x10000000&((data)<<28))
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_bdecont_debug_chsel(data)             (0x000000C0&((data)<<6))
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_bdecont_debugmode(data)               (0x00000030&((data)<<4))
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_bdecont_rst(data)                     (0x00000008&((data)<<3))
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_bdecont_en_c(data)                    (0x00000004&((data)<<2))
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_get_bdecont_en(data)                  ((0x80000000&(data))>>31)
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_get_bdecont_profile_diff_gain_en(data) ((0x40000000&(data))>>30)
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_get_bdecont_tenable(data)             ((0x20000000&(data))>>29)
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_get_bdecont_dither_en(data)           ((0x10000000&(data))>>28)
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_get_bdecont_debug_chsel(data)         ((0x000000C0&(data))>>6)
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_get_bdecont_debugmode(data)           ((0x00000030&(data))>>4)
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_get_bdecont_rst(data)                 ((0x00000008&(data))>>3)
#define  IPQ_DECONTOUR_BLK_De_Contour_CTRL_get_bdecont_en_c(data)                ((0x00000004&(data))>>2)

#define  IPQ_DECONTOUR_BLK_De_Contour_Size0                                     0x18025784
#define  IPQ_DECONTOUR_BLK_De_Contour_Size0_reg_addr                             "0xB8025784"
#define  IPQ_DECONTOUR_BLK_De_Contour_Size0_reg                                  0xB8025784
#define  IPQ_DECONTOUR_BLK_De_Contour_Size0_inst_addr                            "0x0020"
#define  set_IPQ_DECONTOUR_BLK_De_Contour_Size0_reg(data)                        (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Size0_reg)=data)
#define  get_IPQ_DECONTOUR_BLK_De_Contour_Size0_reg                              (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Size0_reg))
#define  IPQ_DECONTOUR_BLK_De_Contour_Size0_bdecont_blk_hnum_shift               (20)
#define  IPQ_DECONTOUR_BLK_De_Contour_Size0_bdecont_hfactor_shift                (0)
#define  IPQ_DECONTOUR_BLK_De_Contour_Size0_bdecont_blk_hnum_mask                (0x07F00000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Size0_bdecont_hfactor_mask                 (0x000FFFFF)
#define  IPQ_DECONTOUR_BLK_De_Contour_Size0_bdecont_blk_hnum(data)               (0x07F00000&((data)<<20))
#define  IPQ_DECONTOUR_BLK_De_Contour_Size0_bdecont_hfactor(data)                (0x000FFFFF&(data))
#define  IPQ_DECONTOUR_BLK_De_Contour_Size0_get_bdecont_blk_hnum(data)           ((0x07F00000&(data))>>20)
#define  IPQ_DECONTOUR_BLK_De_Contour_Size0_get_bdecont_hfactor(data)            (0x000FFFFF&(data))

#define  IPQ_DECONTOUR_BLK_De_Contour_Size1                                     0x18025788
#define  IPQ_DECONTOUR_BLK_De_Contour_Size1_reg_addr                             "0xB8025788"
#define  IPQ_DECONTOUR_BLK_De_Contour_Size1_reg                                  0xB8025788
#define  IPQ_DECONTOUR_BLK_De_Contour_Size1_inst_addr                            "0x0021"
#define  set_IPQ_DECONTOUR_BLK_De_Contour_Size1_reg(data)                        (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Size1_reg)=data)
#define  get_IPQ_DECONTOUR_BLK_De_Contour_Size1_reg                              (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Size1_reg))
#define  IPQ_DECONTOUR_BLK_De_Contour_Size1_bdecont_blk_vnum_shift               (20)
#define  IPQ_DECONTOUR_BLK_De_Contour_Size1_bdecont_vfactor_shift                (0)
#define  IPQ_DECONTOUR_BLK_De_Contour_Size1_bdecont_blk_vnum_mask                (0x03F00000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Size1_bdecont_vfactor_mask                 (0x000FFFFF)
#define  IPQ_DECONTOUR_BLK_De_Contour_Size1_bdecont_blk_vnum(data)               (0x03F00000&((data)<<20))
#define  IPQ_DECONTOUR_BLK_De_Contour_Size1_bdecont_vfactor(data)                (0x000FFFFF&(data))
#define  IPQ_DECONTOUR_BLK_De_Contour_Size1_get_bdecont_blk_vnum(data)           ((0x03F00000&(data))>>20)
#define  IPQ_DECONTOUR_BLK_De_Contour_Size1_get_bdecont_vfactor(data)            (0x000FFFFF&(data))

#define  IPQ_DECONTOUR_BLK_De_Contour_Size2                                     0x1802578C
#define  IPQ_DECONTOUR_BLK_De_Contour_Size2_reg_addr                             "0xB802578C"
#define  IPQ_DECONTOUR_BLK_De_Contour_Size2_reg                                  0xB802578C
#define  IPQ_DECONTOUR_BLK_De_Contour_Size2_inst_addr                            "0x0022"
#define  set_IPQ_DECONTOUR_BLK_De_Contour_Size2_reg(data)                        (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Size2_reg)=data)
#define  get_IPQ_DECONTOUR_BLK_De_Contour_Size2_reg                              (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Size2_reg))
#define  IPQ_DECONTOUR_BLK_De_Contour_Size2_bdecont_blk_hsize_shift              (16)
#define  IPQ_DECONTOUR_BLK_De_Contour_Size2_bdecont_blk_vsize_shift              (0)
#define  IPQ_DECONTOUR_BLK_De_Contour_Size2_bdecont_blk_hsize_mask               (0x03FF0000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Size2_bdecont_blk_vsize_mask               (0x000003FF)
#define  IPQ_DECONTOUR_BLK_De_Contour_Size2_bdecont_blk_hsize(data)              (0x03FF0000&((data)<<16))
#define  IPQ_DECONTOUR_BLK_De_Contour_Size2_bdecont_blk_vsize(data)              (0x000003FF&(data))
#define  IPQ_DECONTOUR_BLK_De_Contour_Size2_get_bdecont_blk_hsize(data)          ((0x03FF0000&(data))>>16)
#define  IPQ_DECONTOUR_BLK_De_Contour_Size2_get_bdecont_blk_vsize(data)          (0x000003FF&(data))

#define  IPQ_DECONTOUR_BLK_De_Contour_Global_Hist                               0x18025790
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_reg_addr                       "0xB8025790"
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_reg                            0xB8025790
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_inst_addr                      "0x0023"
#define  set_IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_reg(data)                  (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_reg)=data)
#define  get_IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_reg                        (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_reg))
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_bdecont_global_hist_rden_shift (31)
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_bdecont_global_hist_read_mode_shift (30)
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_bdecont_global_hist_locken_shift (29)
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_bdecont_global_hist_raddr_shift (24)
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_bdecont_global_hist_shift      (0)
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_bdecont_global_hist_rden_mask  (0x80000000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_bdecont_global_hist_read_mode_mask (0x40000000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_bdecont_global_hist_locken_mask (0x20000000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_bdecont_global_hist_raddr_mask (0x0F000000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_bdecont_global_hist_mask       (0x0000FFFF)
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_bdecont_global_hist_rden(data) (0x80000000&((data)<<31))
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_bdecont_global_hist_read_mode(data) (0x40000000&((data)<<30))
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_bdecont_global_hist_locken(data) (0x20000000&((data)<<29))
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_bdecont_global_hist_raddr(data) (0x0F000000&((data)<<24))
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_bdecont_global_hist(data)      (0x0000FFFF&(data))
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_get_bdecont_global_hist_rden(data) ((0x80000000&(data))>>31)
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_get_bdecont_global_hist_read_mode(data) ((0x40000000&(data))>>30)
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_get_bdecont_global_hist_locken(data) ((0x20000000&(data))>>29)
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_get_bdecont_global_hist_raddr(data) ((0x0F000000&(data))>>24)
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_Hist_get_bdecont_global_hist(data)  (0x0000FFFF&(data))

#define  IPQ_DECONTOUR_BLK_De_Contour_Global                                    0x18025794
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_reg_addr                            "0xB8025794"
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_reg                                 0xB8025794
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_inst_addr                           "0x0024"
#define  set_IPQ_DECONTOUR_BLK_De_Contour_Global_reg(data)                       (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Global_reg)=data)
#define  get_IPQ_DECONTOUR_BLK_De_Contour_Global_reg                             (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Global_reg))
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_bdecont_global_max_shift            (0)
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_bdecont_global_max_mask             (0x00000FFF)
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_bdecont_global_max(data)            (0x00000FFF&(data))
#define  IPQ_DECONTOUR_BLK_De_Contour_Global_get_bdecont_global_max(data)        (0x00000FFF&(data))

#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp0                                      0x18025798
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp0_reg_addr                              "0xB8025798"
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp0_reg                                   0xB8025798
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp0_inst_addr                             "0x0025"
#define  set_IPQ_DECONTOUR_BLK_De_Contour_Tmp0_reg(data)                         (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Tmp0_reg)=data)
#define  get_IPQ_DECONTOUR_BLK_De_Contour_Tmp0_reg                               (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Tmp0_reg))
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp0_bdecont_tmp_neg1thd_shift             (24)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp0_bdecont_tmp_neg0thd_shift             (16)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp0_bdecont_tmp_pos1thd_shift             (8)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp0_bdecont_tmp_pos0thd_shift             (0)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp0_bdecont_tmp_neg1thd_mask              (0xFF000000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp0_bdecont_tmp_neg0thd_mask              (0x00FF0000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp0_bdecont_tmp_pos1thd_mask              (0x0000FF00)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp0_bdecont_tmp_pos0thd_mask              (0x000000FF)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp0_bdecont_tmp_neg1thd(data)             (0xFF000000&((data)<<24))
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp0_bdecont_tmp_neg0thd(data)             (0x00FF0000&((data)<<16))
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp0_bdecont_tmp_pos1thd(data)             (0x0000FF00&((data)<<8))
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp0_bdecont_tmp_pos0thd(data)             (0x000000FF&(data))
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp0_get_bdecont_tmp_neg1thd(data)         ((0xFF000000&(data))>>24)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp0_get_bdecont_tmp_neg0thd(data)         ((0x00FF0000&(data))>>16)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp0_get_bdecont_tmp_pos1thd(data)         ((0x0000FF00&(data))>>8)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp0_get_bdecont_tmp_pos0thd(data)         (0x000000FF&(data))

#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp1                                      0x1802579C
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp1_reg_addr                              "0xB802579C"
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp1_reg                                   0xB802579C
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp1_inst_addr                             "0x0026"
#define  set_IPQ_DECONTOUR_BLK_De_Contour_Tmp1_reg(data)                         (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Tmp1_reg)=data)
#define  get_IPQ_DECONTOUR_BLK_De_Contour_Tmp1_reg                               (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Tmp1_reg))
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp1_bdecont_tmp_maxdiff_shift             (20)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp1_bdecont_tmp_negmaxgain_shift          (15)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp1_bdecont_tmp_negmingain_shift          (10)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp1_bdecont_tmp_posmaxgain_shift          (5)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp1_bdecont_tmp_posmingain_shift          (0)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp1_bdecont_tmp_maxdiff_mask              (0x0FF00000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp1_bdecont_tmp_negmaxgain_mask           (0x000F8000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp1_bdecont_tmp_negmingain_mask           (0x00007C00)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp1_bdecont_tmp_posmaxgain_mask           (0x000003E0)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp1_bdecont_tmp_posmingain_mask           (0x0000001F)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp1_bdecont_tmp_maxdiff(data)             (0x0FF00000&((data)<<20))
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp1_bdecont_tmp_negmaxgain(data)          (0x000F8000&((data)<<15))
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp1_bdecont_tmp_negmingain(data)          (0x00007C00&((data)<<10))
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp1_bdecont_tmp_posmaxgain(data)          (0x000003E0&((data)<<5))
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp1_bdecont_tmp_posmingain(data)          (0x0000001F&(data))
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp1_get_bdecont_tmp_maxdiff(data)         ((0x0FF00000&(data))>>20)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp1_get_bdecont_tmp_negmaxgain(data)      ((0x000F8000&(data))>>15)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp1_get_bdecont_tmp_negmingain(data)      ((0x00007C00&(data))>>10)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp1_get_bdecont_tmp_posmaxgain(data)      ((0x000003E0&(data))>>5)
#define  IPQ_DECONTOUR_BLK_De_Contour_Tmp1_get_bdecont_tmp_posmingain(data)      (0x0000001F&(data))

#define  IPQ_DECONTOUR_BLK_De_Contour_Hinit                                     0x180257A0
#define  IPQ_DECONTOUR_BLK_De_Contour_Hinit_reg_addr                             "0xB80257A0"
#define  IPQ_DECONTOUR_BLK_De_Contour_Hinit_reg                                  0xB80257A0
#define  IPQ_DECONTOUR_BLK_De_Contour_Hinit_inst_addr                            "0x0027"
#define  set_IPQ_DECONTOUR_BLK_De_Contour_Hinit_reg(data)                        (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Hinit_reg)=data)
#define  get_IPQ_DECONTOUR_BLK_De_Contour_Hinit_reg                              (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Hinit_reg))
#define  IPQ_DECONTOUR_BLK_De_Contour_Hinit_bdecont_hinitphase1_shift            (31)
#define  IPQ_DECONTOUR_BLK_De_Contour_Hinit_bdecont_hboundary_shift              (30)
#define  IPQ_DECONTOUR_BLK_De_Contour_Hinit_bdecont_tmp_scenechangegain1_shift   (16)
#define  IPQ_DECONTOUR_BLK_De_Contour_Hinit_bdecont_hinitphase2_shift            (8)
#define  IPQ_DECONTOUR_BLK_De_Contour_Hinit_bdecont_hinitphase3_shift            (0)
#define  IPQ_DECONTOUR_BLK_De_Contour_Hinit_bdecont_hinitphase1_mask             (0x80000000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Hinit_bdecont_hboundary_mask               (0x40000000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Hinit_bdecont_tmp_scenechangegain1_mask    (0x001F0000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Hinit_bdecont_hinitphase2_mask             (0x0000FF00)
#define  IPQ_DECONTOUR_BLK_De_Contour_Hinit_bdecont_hinitphase3_mask             (0x000000FF)
#define  IPQ_DECONTOUR_BLK_De_Contour_Hinit_bdecont_hinitphase1(data)            (0x80000000&((data)<<31))
#define  IPQ_DECONTOUR_BLK_De_Contour_Hinit_bdecont_hboundary(data)              (0x40000000&((data)<<30))
#define  IPQ_DECONTOUR_BLK_De_Contour_Hinit_bdecont_tmp_scenechangegain1(data)   (0x001F0000&((data)<<16))
#define  IPQ_DECONTOUR_BLK_De_Contour_Hinit_bdecont_hinitphase2(data)            (0x0000FF00&((data)<<8))
#define  IPQ_DECONTOUR_BLK_De_Contour_Hinit_bdecont_hinitphase3(data)            (0x000000FF&(data))
#define  IPQ_DECONTOUR_BLK_De_Contour_Hinit_get_bdecont_hinitphase1(data)        ((0x80000000&(data))>>31)
#define  IPQ_DECONTOUR_BLK_De_Contour_Hinit_get_bdecont_hboundary(data)          ((0x40000000&(data))>>30)
#define  IPQ_DECONTOUR_BLK_De_Contour_Hinit_get_bdecont_tmp_scenechangegain1(data) ((0x001F0000&(data))>>16)
#define  IPQ_DECONTOUR_BLK_De_Contour_Hinit_get_bdecont_hinitphase2(data)        ((0x0000FF00&(data))>>8)
#define  IPQ_DECONTOUR_BLK_De_Contour_Hinit_get_bdecont_hinitphase3(data)        (0x000000FF&(data))

#define  IPQ_DECONTOUR_BLK_De_Contour_Vinit                                     0x180257A4
#define  IPQ_DECONTOUR_BLK_De_Contour_Vinit_reg_addr                             "0xB80257A4"
#define  IPQ_DECONTOUR_BLK_De_Contour_Vinit_reg                                  0xB80257A4
#define  IPQ_DECONTOUR_BLK_De_Contour_Vinit_inst_addr                            "0x0028"
#define  set_IPQ_DECONTOUR_BLK_De_Contour_Vinit_reg(data)                        (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Vinit_reg)=data)
#define  get_IPQ_DECONTOUR_BLK_De_Contour_Vinit_reg                              (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Vinit_reg))
#define  IPQ_DECONTOUR_BLK_De_Contour_Vinit_bdecont_vinitphase1_shift            (31)
#define  IPQ_DECONTOUR_BLK_De_Contour_Vinit_bdecont_vboundary_shift              (30)
#define  IPQ_DECONTOUR_BLK_De_Contour_Vinit_bdecont_vinitphase2_shift            (8)
#define  IPQ_DECONTOUR_BLK_De_Contour_Vinit_bdecont_vinitphase3_shift            (0)
#define  IPQ_DECONTOUR_BLK_De_Contour_Vinit_bdecont_vinitphase1_mask             (0x80000000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Vinit_bdecont_vboundary_mask               (0x40000000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Vinit_bdecont_vinitphase2_mask             (0x0000FF00)
#define  IPQ_DECONTOUR_BLK_De_Contour_Vinit_bdecont_vinitphase3_mask             (0x000000FF)
#define  IPQ_DECONTOUR_BLK_De_Contour_Vinit_bdecont_vinitphase1(data)            (0x80000000&((data)<<31))
#define  IPQ_DECONTOUR_BLK_De_Contour_Vinit_bdecont_vboundary(data)              (0x40000000&((data)<<30))
#define  IPQ_DECONTOUR_BLK_De_Contour_Vinit_bdecont_vinitphase2(data)            (0x0000FF00&((data)<<8))
#define  IPQ_DECONTOUR_BLK_De_Contour_Vinit_bdecont_vinitphase3(data)            (0x000000FF&(data))
#define  IPQ_DECONTOUR_BLK_De_Contour_Vinit_get_bdecont_vinitphase1(data)        ((0x80000000&(data))>>31)
#define  IPQ_DECONTOUR_BLK_De_Contour_Vinit_get_bdecont_vboundary(data)          ((0x40000000&(data))>>30)
#define  IPQ_DECONTOUR_BLK_De_Contour_Vinit_get_bdecont_vinitphase2(data)        ((0x0000FF00&(data))>>8)
#define  IPQ_DECONTOUR_BLK_De_Contour_Vinit_get_bdecont_vinitphase3(data)        (0x000000FF&(data))

#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff0                              0x180257A8
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff0_reg_addr                      "0xB80257A8"
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff0_reg                           0xB80257A8
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff0_inst_addr                     "0x0029"
#define  set_IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff0_reg(data)                 (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff0_reg)=data)
#define  get_IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff0_reg                       (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff0_reg))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff0_bdecont_ydiff_shift_shift     (28)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff0_bdecont_alpha_by_ydiff13_shift (16)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff0_bdecont_alpha_by_ydiff14_shift (8)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff0_bdecont_alpha_by_ydiff15_shift (0)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff0_bdecont_ydiff_shift_mask      (0x70000000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff0_bdecont_alpha_by_ydiff13_mask (0x003F0000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff0_bdecont_alpha_by_ydiff14_mask (0x00003F00)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff0_bdecont_alpha_by_ydiff15_mask (0x0000003F)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff0_bdecont_ydiff_shift(data)     (0x70000000&((data)<<28))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff0_bdecont_alpha_by_ydiff13(data) (0x003F0000&((data)<<16))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff0_bdecont_alpha_by_ydiff14(data) (0x00003F00&((data)<<8))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff0_bdecont_alpha_by_ydiff15(data) (0x0000003F&(data))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff0_get_bdecont_ydiff_shift(data) ((0x70000000&(data))>>28)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff0_get_bdecont_alpha_by_ydiff13(data) ((0x003F0000&(data))>>16)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff0_get_bdecont_alpha_by_ydiff14(data) ((0x00003F00&(data))>>8)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff0_get_bdecont_alpha_by_ydiff15(data) (0x0000003F&(data))

#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff1                              0x180257AC
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff1_reg_addr                      "0xB80257AC"
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff1_reg                           0xB80257AC
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff1_inst_addr                     "0x002A"
#define  set_IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff1_reg(data)                 (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff1_reg)=data)
#define  get_IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff1_reg                       (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff1_reg))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff1_bdecont_alpha_by_ydiff9_shift (24)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff1_bdecont_alpha_by_ydiff10_shift (16)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff1_bdecont_alpha_by_ydiff11_shift (8)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff1_bdecont_alpha_by_ydiff12_shift (0)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff1_bdecont_alpha_by_ydiff9_mask  (0x3F000000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff1_bdecont_alpha_by_ydiff10_mask (0x003F0000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff1_bdecont_alpha_by_ydiff11_mask (0x00003F00)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff1_bdecont_alpha_by_ydiff12_mask (0x0000003F)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff1_bdecont_alpha_by_ydiff9(data) (0x3F000000&((data)<<24))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff1_bdecont_alpha_by_ydiff10(data) (0x003F0000&((data)<<16))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff1_bdecont_alpha_by_ydiff11(data) (0x00003F00&((data)<<8))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff1_bdecont_alpha_by_ydiff12(data) (0x0000003F&(data))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff1_get_bdecont_alpha_by_ydiff9(data) ((0x3F000000&(data))>>24)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff1_get_bdecont_alpha_by_ydiff10(data) ((0x003F0000&(data))>>16)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff1_get_bdecont_alpha_by_ydiff11(data) ((0x00003F00&(data))>>8)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff1_get_bdecont_alpha_by_ydiff12(data) (0x0000003F&(data))

#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff2                              0x180257B0
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff2_reg_addr                      "0xB80257B0"
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff2_reg                           0xB80257B0
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff2_inst_addr                     "0x002B"
#define  set_IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff2_reg(data)                 (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff2_reg)=data)
#define  get_IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff2_reg                       (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff2_reg))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff2_bdecont_alpha_by_ydiff5_shift (24)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff2_bdecont_alpha_by_ydiff6_shift (16)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff2_bdecont_alpha_by_ydiff7_shift (8)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff2_bdecont_alpha_by_ydiff8_shift (0)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff2_bdecont_alpha_by_ydiff5_mask  (0x3F000000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff2_bdecont_alpha_by_ydiff6_mask  (0x003F0000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff2_bdecont_alpha_by_ydiff7_mask  (0x00003F00)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff2_bdecont_alpha_by_ydiff8_mask  (0x0000003F)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff2_bdecont_alpha_by_ydiff5(data) (0x3F000000&((data)<<24))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff2_bdecont_alpha_by_ydiff6(data) (0x003F0000&((data)<<16))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff2_bdecont_alpha_by_ydiff7(data) (0x00003F00&((data)<<8))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff2_bdecont_alpha_by_ydiff8(data) (0x0000003F&(data))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff2_get_bdecont_alpha_by_ydiff5(data) ((0x3F000000&(data))>>24)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff2_get_bdecont_alpha_by_ydiff6(data) ((0x003F0000&(data))>>16)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff2_get_bdecont_alpha_by_ydiff7(data) ((0x00003F00&(data))>>8)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff2_get_bdecont_alpha_by_ydiff8(data) (0x0000003F&(data))

#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff3                              0x180257B4
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff3_reg_addr                      "0xB80257B4"
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff3_reg                           0xB80257B4
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff3_inst_addr                     "0x002C"
#define  set_IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff3_reg(data)                 (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff3_reg)=data)
#define  get_IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff3_reg                       (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff3_reg))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff3_bdecont_alpha_by_ydiff1_shift (24)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff3_bdecont_alpha_by_ydiff2_shift (16)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff3_bdecont_alpha_by_ydiff3_shift (8)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff3_bdecont_alpha_by_ydiff4_shift (0)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff3_bdecont_alpha_by_ydiff1_mask  (0x3F000000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff3_bdecont_alpha_by_ydiff2_mask  (0x003F0000)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff3_bdecont_alpha_by_ydiff3_mask  (0x00003F00)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff3_bdecont_alpha_by_ydiff4_mask  (0x0000003F)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff3_bdecont_alpha_by_ydiff1(data) (0x3F000000&((data)<<24))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff3_bdecont_alpha_by_ydiff2(data) (0x003F0000&((data)<<16))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff3_bdecont_alpha_by_ydiff3(data) (0x00003F00&((data)<<8))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff3_bdecont_alpha_by_ydiff4(data) (0x0000003F&(data))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff3_get_bdecont_alpha_by_ydiff1(data) ((0x3F000000&(data))>>24)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff3_get_bdecont_alpha_by_ydiff2(data) ((0x003F0000&(data))>>16)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff3_get_bdecont_alpha_by_ydiff3(data) ((0x00003F00&(data))>>8)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff3_get_bdecont_alpha_by_ydiff4(data) (0x0000003F&(data))

#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff4                              0x180257B8
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff4_reg_addr                      "0xB80257B8"
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff4_reg                           0xB80257B8
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff4_inst_addr                     "0x002D"
#define  set_IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff4_reg(data)                 (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff4_reg)=data)
#define  get_IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff4_reg                       (*((volatile unsigned int*)IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff4_reg))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff4_bdecont_alpha_by_ydiff0_shift (0)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff4_bdecont_alpha_by_ydiff0_mask  (0x0000003F)
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff4_bdecont_alpha_by_ydiff0(data) (0x0000003F&(data))
#define  IPQ_DECONTOUR_BLK_De_Contour_Alpha_Ydiff4_get_bdecont_alpha_by_ydiff0(data) (0x0000003F&(data))

#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter0                           0x180257BC
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter0_reg_addr                   "0xB80257BC"
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter0_reg                        0xB80257BC
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter0_inst_addr                  "0x002E"
#define  set_IPQ_DECONTOUR_Block_DeContour_Interp_Filter0_reg(data)              (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_Interp_Filter0_reg)=data)
#define  get_IPQ_DECONTOUR_Block_DeContour_Interp_Filter0_reg                    (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_Interp_Filter0_reg))
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter0_bdecont_interp_filter12_shift (20)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter0_bdecont_interp_filter11_shift (10)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter0_bdecont_interp_filter10_shift (0)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter0_bdecont_interp_filter12_mask (0x3FF00000)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter0_bdecont_interp_filter11_mask (0x000FFC00)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter0_bdecont_interp_filter10_mask (0x000003FF)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter0_bdecont_interp_filter12(data) (0x3FF00000&((data)<<20))
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter0_bdecont_interp_filter11(data) (0x000FFC00&((data)<<10))
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter0_bdecont_interp_filter10(data) (0x000003FF&(data))
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter0_get_bdecont_interp_filter12(data) ((0x3FF00000&(data))>>20)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter0_get_bdecont_interp_filter11(data) ((0x000FFC00&(data))>>10)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter0_get_bdecont_interp_filter10(data) (0x000003FF&(data))

#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter1                           0x180257C0
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter1_reg_addr                   "0xB80257C0"
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter1_reg                        0xB80257C0
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter1_inst_addr                  "0x002F"
#define  set_IPQ_DECONTOUR_Block_DeContour_Interp_Filter1_reg(data)              (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_Interp_Filter1_reg)=data)
#define  get_IPQ_DECONTOUR_Block_DeContour_Interp_Filter1_reg                    (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_Interp_Filter1_reg))
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter1_bdecont_interp_filter9_shift (20)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter1_bdecont_interp_filter8_shift (10)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter1_bdecont_interp_filter7_shift (0)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter1_bdecont_interp_filter9_mask (0x3FF00000)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter1_bdecont_interp_filter8_mask (0x000FFC00)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter1_bdecont_interp_filter7_mask (0x000003FF)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter1_bdecont_interp_filter9(data) (0x3FF00000&((data)<<20))
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter1_bdecont_interp_filter8(data) (0x000FFC00&((data)<<10))
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter1_bdecont_interp_filter7(data) (0x000003FF&(data))
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter1_get_bdecont_interp_filter9(data) ((0x3FF00000&(data))>>20)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter1_get_bdecont_interp_filter8(data) ((0x000FFC00&(data))>>10)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter1_get_bdecont_interp_filter7(data) (0x000003FF&(data))

#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter2                           0x180257C4
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter2_reg_addr                   "0xB80257C4"
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter2_reg                        0xB80257C4
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter2_inst_addr                  "0x0030"
#define  set_IPQ_DECONTOUR_Block_DeContour_Interp_Filter2_reg(data)              (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_Interp_Filter2_reg)=data)
#define  get_IPQ_DECONTOUR_Block_DeContour_Interp_Filter2_reg                    (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_Interp_Filter2_reg))
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter2_bdecont_interp_filter6_shift (20)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter2_bdecont_interp_filter5_shift (10)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter2_bdecont_interp_filter4_shift (0)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter2_bdecont_interp_filter6_mask (0x3FF00000)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter2_bdecont_interp_filter5_mask (0x000FFC00)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter2_bdecont_interp_filter4_mask (0x000003FF)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter2_bdecont_interp_filter6(data) (0x3FF00000&((data)<<20))
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter2_bdecont_interp_filter5(data) (0x000FFC00&((data)<<10))
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter2_bdecont_interp_filter4(data) (0x000003FF&(data))
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter2_get_bdecont_interp_filter6(data) ((0x3FF00000&(data))>>20)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter2_get_bdecont_interp_filter5(data) ((0x000FFC00&(data))>>10)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter2_get_bdecont_interp_filter4(data) (0x000003FF&(data))

#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter3                           0x180257C8
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter3_reg_addr                   "0xB80257C8"
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter3_reg                        0xB80257C8
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter3_inst_addr                  "0x0031"
#define  set_IPQ_DECONTOUR_Block_DeContour_Interp_Filter3_reg(data)              (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_Interp_Filter3_reg)=data)
#define  get_IPQ_DECONTOUR_Block_DeContour_Interp_Filter3_reg                    (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_Interp_Filter3_reg))
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter3_bdecont_interp_filter3_shift (20)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter3_bdecont_interp_filter2_shift (10)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter3_bdecont_interp_filter1_shift (0)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter3_bdecont_interp_filter3_mask (0x3FF00000)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter3_bdecont_interp_filter2_mask (0x000FFC00)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter3_bdecont_interp_filter1_mask (0x000003FF)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter3_bdecont_interp_filter3(data) (0x3FF00000&((data)<<20))
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter3_bdecont_interp_filter2(data) (0x000FFC00&((data)<<10))
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter3_bdecont_interp_filter1(data) (0x000003FF&(data))
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter3_get_bdecont_interp_filter3(data) ((0x3FF00000&(data))>>20)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter3_get_bdecont_interp_filter2(data) ((0x000FFC00&(data))>>10)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter3_get_bdecont_interp_filter1(data) (0x000003FF&(data))

#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter4                           0x180257CC
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter4_reg_addr                   "0xB80257CC"
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter4_reg                        0xB80257CC
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter4_inst_addr                  "0x0032"
#define  set_IPQ_DECONTOUR_Block_DeContour_Interp_Filter4_reg(data)              (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_Interp_Filter4_reg)=data)
#define  get_IPQ_DECONTOUR_Block_DeContour_Interp_Filter4_reg                    (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_Interp_Filter4_reg))
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter4_bdecont_interp_filter0_shift (0)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter4_bdecont_interp_filter0_mask (0x000003FF)
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter4_bdecont_interp_filter0(data) (0x000003FF&(data))
#define  IPQ_DECONTOUR_Block_DeContour_Interp_Filter4_get_bdecont_interp_filter0(data) (0x000003FF&(data))

#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL                                0x180257E0
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_reg_addr                        "0xB80257E0"
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_reg                             0xB80257E0
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_inst_addr                       "0x0033"
#define  set_IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_reg(data)                   (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_reg)=data)
#define  get_IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_reg                         (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_reg))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_preprofile_bist_fail_2_shift (11)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_preprofile_bist_fail_1_shift (10)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_preprofile_bist_fail_0_shift (9)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_ave_hist_bist_fail_2_shift (8)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_ave_hist_bist_fail_1_shift (7)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_ave_hist_bist_fail_0_shift (6)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_frame_backlight_bist_fail_5_shift (5)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_frame_backlight_bist_fail_4_shift (4)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_frame_backlight_bist_fail_3_shift (3)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_frame_backlight_bist_fail_2_shift (2)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_frame_backlight_bist_fail_1_shift (1)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_frame_backlight_bist_fail_0_shift (0)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_preprofile_bist_fail_2_mask (0x00000800)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_preprofile_bist_fail_1_mask (0x00000400)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_preprofile_bist_fail_0_mask (0x00000200)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_ave_hist_bist_fail_2_mask (0x00000100)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_ave_hist_bist_fail_1_mask (0x00000080)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_ave_hist_bist_fail_0_mask (0x00000040)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_frame_backlight_bist_fail_5_mask (0x00000020)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_frame_backlight_bist_fail_4_mask (0x00000010)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_frame_backlight_bist_fail_3_mask (0x00000008)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_frame_backlight_bist_fail_2_mask (0x00000004)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_frame_backlight_bist_fail_1_mask (0x00000002)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_frame_backlight_bist_fail_0_mask (0x00000001)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_preprofile_bist_fail_2(data) (0x00000800&((data)<<11))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_preprofile_bist_fail_1(data) (0x00000400&((data)<<10))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_preprofile_bist_fail_0(data) (0x00000200&((data)<<9))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_ave_hist_bist_fail_2(data) (0x00000100&((data)<<8))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_ave_hist_bist_fail_1(data) (0x00000080&((data)<<7))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_ave_hist_bist_fail_0(data) (0x00000040&((data)<<6))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_frame_backlight_bist_fail_5(data) (0x00000020&((data)<<5))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_frame_backlight_bist_fail_4(data) (0x00000010&((data)<<4))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_frame_backlight_bist_fail_3(data) (0x00000008&((data)<<3))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_frame_backlight_bist_fail_2(data) (0x00000004&((data)<<2))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_frame_backlight_bist_fail_1(data) (0x00000002&((data)<<1))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_blkdecont_frame_backlight_bist_fail_0(data) (0x00000001&(data))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_get_blkdecont_preprofile_bist_fail_2(data) ((0x00000800&(data))>>11)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_get_blkdecont_preprofile_bist_fail_1(data) ((0x00000400&(data))>>10)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_get_blkdecont_preprofile_bist_fail_0(data) ((0x00000200&(data))>>9)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_get_blkdecont_ave_hist_bist_fail_2(data) ((0x00000100&(data))>>8)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_get_blkdecont_ave_hist_bist_fail_1(data) ((0x00000080&(data))>>7)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_get_blkdecont_ave_hist_bist_fail_0(data) ((0x00000040&(data))>>6)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_get_blkdecont_frame_backlight_bist_fail_5(data) ((0x00000020&(data))>>5)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_get_blkdecont_frame_backlight_bist_fail_4(data) ((0x00000010&(data))>>4)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_get_blkdecont_frame_backlight_bist_fail_3(data) ((0x00000008&(data))>>3)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_get_blkdecont_frame_backlight_bist_fail_2(data) ((0x00000004&(data))>>2)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_get_blkdecont_frame_backlight_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_FAIL_get_blkdecont_frame_backlight_bist_fail_0(data) (0x00000001&(data))

#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL                                 0x180257E4
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_reg_addr                         "0xB80257E4"
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_reg                              0xB80257E4
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_inst_addr                        "0x0034"
#define  set_IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_reg(data)                    (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_reg)=data)
#define  get_IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_reg                          (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_reg))
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_preprofile_drf_fail_2_shift (11)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_preprofile_drf_fail_1_shift (10)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_preprofile_drf_fail_0_shift (9)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_ave_hist_drf_fail_2_shift (8)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_ave_hist_drf_fail_1_shift (7)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_ave_hist_drf_fail_0_shift (6)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_frame_backlight_drf_fail_5_shift (5)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_frame_backlight_drf_fail_4_shift (4)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_frame_backlight_drf_fail_3_shift (3)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_frame_backlight_drf_fail_2_shift (2)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_frame_backlight_drf_fail_1_shift (1)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_frame_backlight_drf_fail_0_shift (0)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_preprofile_drf_fail_2_mask (0x00000800)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_preprofile_drf_fail_1_mask (0x00000400)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_preprofile_drf_fail_0_mask (0x00000200)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_ave_hist_drf_fail_2_mask (0x00000100)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_ave_hist_drf_fail_1_mask (0x00000080)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_ave_hist_drf_fail_0_mask (0x00000040)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_frame_backlight_drf_fail_5_mask (0x00000020)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_frame_backlight_drf_fail_4_mask (0x00000010)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_frame_backlight_drf_fail_3_mask (0x00000008)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_frame_backlight_drf_fail_2_mask (0x00000004)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_frame_backlight_drf_fail_1_mask (0x00000002)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_frame_backlight_drf_fail_0_mask (0x00000001)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_preprofile_drf_fail_2(data) (0x00000800&((data)<<11))
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_preprofile_drf_fail_1(data) (0x00000400&((data)<<10))
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_preprofile_drf_fail_0(data) (0x00000200&((data)<<9))
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_ave_hist_drf_fail_2(data) (0x00000100&((data)<<8))
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_ave_hist_drf_fail_1(data) (0x00000080&((data)<<7))
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_ave_hist_drf_fail_0(data) (0x00000040&((data)<<6))
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_frame_backlight_drf_fail_5(data) (0x00000020&((data)<<5))
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_frame_backlight_drf_fail_4(data) (0x00000010&((data)<<4))
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_frame_backlight_drf_fail_3(data) (0x00000008&((data)<<3))
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_frame_backlight_drf_fail_2(data) (0x00000004&((data)<<2))
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_frame_backlight_drf_fail_1(data) (0x00000002&((data)<<1))
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_blkdecont_frame_backlight_drf_fail_0(data) (0x00000001&(data))
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_get_blkdecont_preprofile_drf_fail_2(data) ((0x00000800&(data))>>11)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_get_blkdecont_preprofile_drf_fail_1(data) ((0x00000400&(data))>>10)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_get_blkdecont_preprofile_drf_fail_0(data) ((0x00000200&(data))>>9)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_get_blkdecont_ave_hist_drf_fail_2(data) ((0x00000100&(data))>>8)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_get_blkdecont_ave_hist_drf_fail_1(data) ((0x00000080&(data))>>7)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_get_blkdecont_ave_hist_drf_fail_0(data) ((0x00000040&(data))>>6)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_get_blkdecont_frame_backlight_drf_fail_5(data) ((0x00000020&(data))>>5)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_get_blkdecont_frame_backlight_drf_fail_4(data) ((0x00000010&(data))>>4)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_get_blkdecont_frame_backlight_drf_fail_3(data) ((0x00000008&(data))>>3)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_get_blkdecont_frame_backlight_drf_fail_2(data) ((0x00000004&(data))>>2)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_get_blkdecont_frame_backlight_drf_fail_1(data) ((0x00000002&(data))>>1)
#define  IPQ_DECONTOUR_Block_DeContour_DRF_FAIL_get_blkdecont_frame_backlight_drf_fail_0(data) (0x00000001&(data))

#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE                                0x180257E8
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_reg_addr                        "0xB80257E8"
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_reg                             0xB80257E8
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_inst_addr                       "0x0035"
#define  set_IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_reg(data)                   (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_reg)=data)
#define  get_IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_reg                         (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_reg))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_preprofile_bist_test0_shift (12)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_preprofile_bist_ls_shift (11)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_preprofile_testrwm_shift (10)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_preprofile_bist_dvse_shift (9)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_frame_backlight_bist_test0_shift (8)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_ave_hist_bist_test0_shift (7)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_ave_hist_bist_ls_shift (6)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_frame_backlight_bist_ls_shift (5)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_ave_hist_testrwm_shift (4)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_frame_backlight_bist_testrwm_shift (3)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_ave_hist_bist_dvse_shift (2)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_frame_backlight_bist_dvse_shift (1)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_preprofile_bist_test0_mask (0x00001000)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_preprofile_bist_ls_mask (0x00000800)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_preprofile_testrwm_mask (0x00000400)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_preprofile_bist_dvse_mask (0x00000200)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_frame_backlight_bist_test0_mask (0x00000100)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_ave_hist_bist_test0_mask (0x00000080)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_ave_hist_bist_ls_mask (0x00000040)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_frame_backlight_bist_ls_mask (0x00000020)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_ave_hist_testrwm_mask (0x00000010)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_frame_backlight_bist_testrwm_mask (0x00000008)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_ave_hist_bist_dvse_mask (0x00000004)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_frame_backlight_bist_dvse_mask (0x00000002)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_preprofile_bist_test0(data) (0x00001000&((data)<<12))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_preprofile_bist_ls(data) (0x00000800&((data)<<11))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_preprofile_testrwm(data) (0x00000400&((data)<<10))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_preprofile_bist_dvse(data) (0x00000200&((data)<<9))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_frame_backlight_bist_test0(data) (0x00000100&((data)<<8))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_ave_hist_bist_test0(data) (0x00000080&((data)<<7))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_ave_hist_bist_ls(data) (0x00000040&((data)<<6))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_frame_backlight_bist_ls(data) (0x00000020&((data)<<5))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_ave_hist_testrwm(data) (0x00000010&((data)<<4))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_frame_backlight_bist_testrwm(data) (0x00000008&((data)<<3))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_ave_hist_bist_dvse(data) (0x00000004&((data)<<2))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_blkdecont_frame_backlight_bist_dvse(data) (0x00000002&((data)<<1))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_get_blkdecont_preprofile_bist_test0(data) ((0x00001000&(data))>>12)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_get_blkdecont_preprofile_bist_ls(data) ((0x00000800&(data))>>11)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_get_blkdecont_preprofile_testrwm(data) ((0x00000400&(data))>>10)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_get_blkdecont_preprofile_bist_dvse(data) ((0x00000200&(data))>>9)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_get_blkdecont_frame_backlight_bist_test0(data) ((0x00000100&(data))>>8)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_get_blkdecont_ave_hist_bist_test0(data) ((0x00000080&(data))>>7)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_get_blkdecont_ave_hist_bist_ls(data) ((0x00000040&(data))>>6)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_get_blkdecont_frame_backlight_bist_ls(data) ((0x00000020&(data))>>5)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_get_blkdecont_ave_hist_testrwm(data) ((0x00000010&(data))>>4)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_get_blkdecont_frame_backlight_bist_testrwm(data) ((0x00000008&(data))>>3)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_get_blkdecont_ave_hist_bist_dvse(data) ((0x00000004&(data))>>2)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVSE_get_blkdecont_frame_backlight_bist_dvse(data) ((0x00000002&(data))>>1)

#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVS                                 0x180257EC
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVS_reg_addr                         "0xB80257EC"
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVS_reg                              0xB80257EC
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVS_inst_addr                        "0x0036"
#define  set_IPQ_DECONTOUR_Block_DeContour_BIST_DVS_reg(data)                    (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_BIST_DVS_reg)=data)
#define  get_IPQ_DECONTOUR_Block_DeContour_BIST_DVS_reg                          (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_BIST_DVS_reg))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVS_blkdecont_preprofile_bist_dvs_shift (16)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVS_blkdecont_frame_backlight_bist_dvs_shift (12)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVS_blkdecont_ave_hist_bist_dvs_shift (8)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVS_blkdecont_preprofile_bist_dvs_mask (0x000F0000)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVS_blkdecont_frame_backlight_bist_dvs_mask (0x0000F000)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVS_blkdecont_ave_hist_bist_dvs_mask (0x00000F00)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVS_blkdecont_preprofile_bist_dvs(data) (0x000F0000&((data)<<16))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVS_blkdecont_frame_backlight_bist_dvs(data) (0x0000F000&((data)<<12))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVS_blkdecont_ave_hist_bist_dvs(data) (0x00000F00&((data)<<8))
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVS_get_blkdecont_preprofile_bist_dvs(data) ((0x000F0000&(data))>>16)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVS_get_blkdecont_frame_backlight_bist_dvs(data) ((0x0000F000&(data))>>12)
#define  IPQ_DECONTOUR_Block_DeContour_BIST_DVS_get_blkdecont_ave_hist_bist_dvs(data) ((0x00000F00&(data))>>8)

#define  IPQ_DECONTOUR_Block_DeContour_dither_y                                 0x180257F0
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_reg_addr                         "0xB80257F0"
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_reg                              0xB80257F0
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_inst_addr                        "0x0037"
#define  set_IPQ_DECONTOUR_Block_DeContour_dither_y_reg(data)                    (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_dither_y_reg)=data)
#define  get_IPQ_DECONTOUR_Block_DeContour_dither_y_reg                          (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_dither_y_reg))
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y00_shift   (30)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y01_shift   (28)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y02_shift   (26)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y03_shift   (24)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y10_shift   (22)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y11_shift   (20)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y12_shift   (18)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y13_shift   (16)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y20_shift   (14)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y21_shift   (12)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y22_shift   (10)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y23_shift   (8)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y30_shift   (6)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y31_shift   (4)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y32_shift   (2)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y33_shift   (0)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y00_mask    (0xC0000000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y01_mask    (0x30000000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y02_mask    (0x0C000000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y03_mask    (0x03000000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y10_mask    (0x00C00000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y11_mask    (0x00300000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y12_mask    (0x000C0000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y13_mask    (0x00030000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y20_mask    (0x0000C000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y21_mask    (0x00003000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y22_mask    (0x00000C00)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y23_mask    (0x00000300)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y30_mask    (0x000000C0)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y31_mask    (0x00000030)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y32_mask    (0x0000000C)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y33_mask    (0x00000003)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y00(data)   (0xC0000000&((data)<<30))
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y01(data)   (0x30000000&((data)<<28))
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y02(data)   (0x0C000000&((data)<<26))
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y03(data)   (0x03000000&((data)<<24))
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y10(data)   (0x00C00000&((data)<<22))
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y11(data)   (0x00300000&((data)<<20))
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y12(data)   (0x000C0000&((data)<<18))
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y13(data)   (0x00030000&((data)<<16))
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y20(data)   (0x0000C000&((data)<<14))
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y21(data)   (0x00003000&((data)<<12))
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y22(data)   (0x00000C00&((data)<<10))
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y23(data)   (0x00000300&((data)<<8))
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y30(data)   (0x000000C0&((data)<<6))
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y31(data)   (0x00000030&((data)<<4))
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y32(data)   (0x0000000C&((data)<<2))
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_bdecont_dither_table_y33(data)   (0x00000003&(data))
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_get_bdecont_dither_table_y00(data) ((0xC0000000&(data))>>30)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_get_bdecont_dither_table_y01(data) ((0x30000000&(data))>>28)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_get_bdecont_dither_table_y02(data) ((0x0C000000&(data))>>26)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_get_bdecont_dither_table_y03(data) ((0x03000000&(data))>>24)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_get_bdecont_dither_table_y10(data) ((0x00C00000&(data))>>22)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_get_bdecont_dither_table_y11(data) ((0x00300000&(data))>>20)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_get_bdecont_dither_table_y12(data) ((0x000C0000&(data))>>18)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_get_bdecont_dither_table_y13(data) ((0x00030000&(data))>>16)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_get_bdecont_dither_table_y20(data) ((0x0000C000&(data))>>14)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_get_bdecont_dither_table_y21(data) ((0x00003000&(data))>>12)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_get_bdecont_dither_table_y22(data) ((0x00000C00&(data))>>10)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_get_bdecont_dither_table_y23(data) ((0x00000300&(data))>>8)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_get_bdecont_dither_table_y30(data) ((0x000000C0&(data))>>6)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_get_bdecont_dither_table_y31(data) ((0x00000030&(data))>>4)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_get_bdecont_dither_table_y32(data) ((0x0000000C&(data))>>2)
#define  IPQ_DECONTOUR_Block_DeContour_dither_y_get_bdecont_dither_table_y33(data) (0x00000003&(data))

#define  IPQ_DECONTOUR_Block_DeContour_dither_u                                 0x180257F4
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_reg_addr                         "0xB80257F4"
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_reg                              0xB80257F4
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_inst_addr                        "0x0038"
#define  set_IPQ_DECONTOUR_Block_DeContour_dither_u_reg(data)                    (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_dither_u_reg)=data)
#define  get_IPQ_DECONTOUR_Block_DeContour_dither_u_reg                          (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_dither_u_reg))
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u00_shift   (30)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u01_shift   (28)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u02_shift   (26)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u03_shift   (24)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u10_shift   (22)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u11_shift   (20)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u12_shift   (18)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u13_shift   (16)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u20_shift   (14)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u21_shift   (12)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u22_shift   (10)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u23_shift   (8)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u30_shift   (6)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u31_shift   (4)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u32_shift   (2)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u33_shift   (0)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u00_mask    (0xC0000000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u01_mask    (0x30000000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u02_mask    (0x0C000000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u03_mask    (0x03000000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u10_mask    (0x00C00000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u11_mask    (0x00300000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u12_mask    (0x000C0000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u13_mask    (0x00030000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u20_mask    (0x0000C000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u21_mask    (0x00003000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u22_mask    (0x00000C00)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u23_mask    (0x00000300)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u30_mask    (0x000000C0)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u31_mask    (0x00000030)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u32_mask    (0x0000000C)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u33_mask    (0x00000003)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u00(data)   (0xC0000000&((data)<<30))
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u01(data)   (0x30000000&((data)<<28))
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u02(data)   (0x0C000000&((data)<<26))
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u03(data)   (0x03000000&((data)<<24))
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u10(data)   (0x00C00000&((data)<<22))
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u11(data)   (0x00300000&((data)<<20))
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u12(data)   (0x000C0000&((data)<<18))
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u13(data)   (0x00030000&((data)<<16))
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u20(data)   (0x0000C000&((data)<<14))
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u21(data)   (0x00003000&((data)<<12))
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u22(data)   (0x00000C00&((data)<<10))
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u23(data)   (0x00000300&((data)<<8))
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u30(data)   (0x000000C0&((data)<<6))
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u31(data)   (0x00000030&((data)<<4))
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u32(data)   (0x0000000C&((data)<<2))
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_bdecont_dither_table_u33(data)   (0x00000003&(data))
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_get_bdecont_dither_table_u00(data) ((0xC0000000&(data))>>30)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_get_bdecont_dither_table_u01(data) ((0x30000000&(data))>>28)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_get_bdecont_dither_table_u02(data) ((0x0C000000&(data))>>26)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_get_bdecont_dither_table_u03(data) ((0x03000000&(data))>>24)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_get_bdecont_dither_table_u10(data) ((0x00C00000&(data))>>22)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_get_bdecont_dither_table_u11(data) ((0x00300000&(data))>>20)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_get_bdecont_dither_table_u12(data) ((0x000C0000&(data))>>18)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_get_bdecont_dither_table_u13(data) ((0x00030000&(data))>>16)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_get_bdecont_dither_table_u20(data) ((0x0000C000&(data))>>14)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_get_bdecont_dither_table_u21(data) ((0x00003000&(data))>>12)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_get_bdecont_dither_table_u22(data) ((0x00000C00&(data))>>10)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_get_bdecont_dither_table_u23(data) ((0x00000300&(data))>>8)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_get_bdecont_dither_table_u30(data) ((0x000000C0&(data))>>6)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_get_bdecont_dither_table_u31(data) ((0x00000030&(data))>>4)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_get_bdecont_dither_table_u32(data) ((0x0000000C&(data))>>2)
#define  IPQ_DECONTOUR_Block_DeContour_dither_u_get_bdecont_dither_table_u33(data) (0x00000003&(data))

#define  IPQ_DECONTOUR_Block_DeContour_dither_v                                 0x180257F8
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_reg_addr                         "0xB80257F8"
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_reg                              0xB80257F8
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_inst_addr                        "0x0039"
#define  set_IPQ_DECONTOUR_Block_DeContour_dither_v_reg(data)                    (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_dither_v_reg)=data)
#define  get_IPQ_DECONTOUR_Block_DeContour_dither_v_reg                          (*((volatile unsigned int*)IPQ_DECONTOUR_Block_DeContour_dither_v_reg))
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v00_shift   (30)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v01_shift   (28)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v02_shift   (26)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v03_shift   (24)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v10_shift   (22)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v11_shift   (20)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v12_shift   (18)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v13_shift   (16)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v20_shift   (14)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v21_shift   (12)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v22_shift   (10)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v23_shift   (8)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v30_shift   (6)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v31_shift   (4)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v32_shift   (2)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v33_shift   (0)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v00_mask    (0xC0000000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v01_mask    (0x30000000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v02_mask    (0x0C000000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v03_mask    (0x03000000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v10_mask    (0x00C00000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v11_mask    (0x00300000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v12_mask    (0x000C0000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v13_mask    (0x00030000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v20_mask    (0x0000C000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v21_mask    (0x00003000)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v22_mask    (0x00000C00)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v23_mask    (0x00000300)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v30_mask    (0x000000C0)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v31_mask    (0x00000030)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v32_mask    (0x0000000C)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v33_mask    (0x00000003)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v00(data)   (0xC0000000&((data)<<30))
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v01(data)   (0x30000000&((data)<<28))
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v02(data)   (0x0C000000&((data)<<26))
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v03(data)   (0x03000000&((data)<<24))
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v10(data)   (0x00C00000&((data)<<22))
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v11(data)   (0x00300000&((data)<<20))
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v12(data)   (0x000C0000&((data)<<18))
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v13(data)   (0x00030000&((data)<<16))
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v20(data)   (0x0000C000&((data)<<14))
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v21(data)   (0x00003000&((data)<<12))
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v22(data)   (0x00000C00&((data)<<10))
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v23(data)   (0x00000300&((data)<<8))
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v30(data)   (0x000000C0&((data)<<6))
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v31(data)   (0x00000030&((data)<<4))
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v32(data)   (0x0000000C&((data)<<2))
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_bdecont_dither_table_v33(data)   (0x00000003&(data))
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_get_bdecont_dither_table_v00(data) ((0xC0000000&(data))>>30)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_get_bdecont_dither_table_v01(data) ((0x30000000&(data))>>28)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_get_bdecont_dither_table_v02(data) ((0x0C000000&(data))>>26)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_get_bdecont_dither_table_v03(data) ((0x03000000&(data))>>24)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_get_bdecont_dither_table_v10(data) ((0x00C00000&(data))>>22)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_get_bdecont_dither_table_v11(data) ((0x00300000&(data))>>20)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_get_bdecont_dither_table_v12(data) ((0x000C0000&(data))>>18)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_get_bdecont_dither_table_v13(data) ((0x00030000&(data))>>16)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_get_bdecont_dither_table_v20(data) ((0x0000C000&(data))>>14)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_get_bdecont_dither_table_v21(data) ((0x00003000&(data))>>12)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_get_bdecont_dither_table_v22(data) ((0x00000C00&(data))>>10)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_get_bdecont_dither_table_v23(data) ((0x00000300&(data))>>8)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_get_bdecont_dither_table_v30(data) ((0x000000C0&(data))>>6)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_get_bdecont_dither_table_v31(data) ((0x00000030&(data))>>4)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_get_bdecont_dither_table_v32(data) ((0x0000000C&(data))>>2)
#define  IPQ_DECONTOUR_Block_DeContour_dither_v_get_bdecont_dither_table_v33(data) (0x00000003&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======IPQ_DECONTOUR register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_en:1;
        RBus_UInt32  decont_neighbor_far:1;
        RBus_UInt32  decont_debug_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  decont_debug_mode:2;
        RBus_UInt32  decont_filter_mode:1;
        RBus_UInt32  decont_yc_mode:2;
        RBus_UInt32  decont_line_mode:1;
        RBus_UInt32  decont_bottleneck_en:1;
        RBus_UInt32  decont_blend_weight_lpf_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  decont_blend_lowbd:8;
        RBus_UInt32  res4:2;
        RBus_UInt32  decont_blend_step:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  decont_snr_blend_mode:2;
    };
}ipq_decontour_de_contour_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  decont_contrast_th_y_info:9;
        RBus_UInt32  decont_neighbor_diff_th_y_info:6;
        RBus_UInt32  decont_gradation_th_y_info:5;
        RBus_UInt32  decont_maxmindiff_th_y_info:8;
    };
}ipq_decontour_de_contour_contrast_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  decont_contrast_th_c_info:11;
        RBus_UInt32  decont_neighbor_diff_th_c_info:6;
        RBus_UInt32  decont_gradation_th_c_info:5;
        RBus_UInt32  decont_maxmindiff_th_c_info:8;
    };
}ipq_decontour_de_contour_contrast_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  decont_contrast_th_y:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  decont_contrast_th_c:10;
    };
}ipq_decontour_de_contour_contrast_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  decont_neighbor_diff_th2_y:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  decont_neighbor_diff_th_y:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  decont_neighbor_diff_th2_c:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  decont_neighbor_diff_th_c:6;
    };
}ipq_decontour_de_contour_neighbor_diff_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  decont_gradation_th_y:5;
        RBus_UInt32  decont_dark_th:10;
        RBus_UInt32  res2:1;
        RBus_UInt32  decont_gradation_th_c:5;
        RBus_UInt32  decont_dark_contrast_th:10;
    };
}ipq_decontour_de_contour_threshold_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  decont_maxmindiff_th_c:8;
        RBus_UInt32  decont_maxmindiff_th_y:8;
    };
}ipq_decontour_de_contour_diff_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  decont_contour_cnt:24;
    };
}ipq_decontour_de_contour_counter_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  decont_avfilter_cnt:24;
    };
}ipq_decontour_de_contour_avfilter_counter_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_filter_range_hist_rden:1;
        RBus_UInt32  decont_filter_range_hist_read_mode:1;
        RBus_UInt32  decont_filter_range_hist_locken:1;
        RBus_UInt32  decont_filter_range_hist_raddr:4;
        RBus_UInt32  res1:25;
    };
}ipq_decontour_de_contour_hist_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  decont_filter_range_hist:24;
    };
}ipq_decontour_de_contour_hist_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_info_ydiff_hist_rden:1;
        RBus_UInt32  decont_info_ydiff_hist_read_mode:1;
        RBus_UInt32  decont_info_ydiff_hist_locken:1;
        RBus_UInt32  decont_info_ydiff_hist_raddr:3;
        RBus_UInt32  res1:2;
        RBus_UInt32  decont_info_ydiff_hist:24;
    };
}ipq_decontour_de_contour_ydiff_hist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_info_cdiff_hist_rden:1;
        RBus_UInt32  decont_info_cdiff_hist_read_mode:1;
        RBus_UInt32  decont_info_cdiff_hist_locken:1;
        RBus_UInt32  decont_info_cdiff_hist_raddr:3;
        RBus_UInt32  res1:2;
        RBus_UInt32  decont_info_cdiff_hist:24;
    };
}ipq_decontour_de_contour_cdiff_hist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  db_read:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  db_apply:1;
    };
}ipq_decontour_de_contour_db_reg_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  decont_bottleneck_range4:4;
        RBus_UInt32  decont_bottleneck_range3:4;
        RBus_UInt32  decont_bottleneck_range2:4;
        RBus_UInt32  decont_bottleneck_range1:4;
        RBus_UInt32  decont_bottleneck_range0:4;
    };
}ipq_decontour_de_contour_bottleneck_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  decont_diff_clamp_c:10;
        RBus_UInt32  decont_diff_clamp_y:10;
    };
}ipq_decontour_de_contour_diff_clamp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  decont_contrast_th3_y:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  decont_contrast_th2_y:10;
    };
}ipq_decontour_de_contour_contrast2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  decont_contrast_th3_c:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  decont_contrast_th2_c:10;
    };
}ipq_decontour_de_contour_contrast3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  decont_dark_contrast_th3:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  decont_dark_contrast_th2:10;
    };
}ipq_decontour_de_contour_dark_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  decont_gradation_th2_c:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  decont_gradation_th2_y:5;
    };
}ipq_decontour_de_contour_gradation_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  decont_maxmin_lv3:2;
        RBus_UInt32  decont_maxmin_lv2:2;
        RBus_UInt32  decont_maxmin_lv1:2;
        RBus_UInt32  decont_maxmin_lv0:2;
        RBus_UInt32  decont_maxmindiff_th3_y:8;
        RBus_UInt32  decont_maxmindiff_th2_y:8;
    };
}ipq_decontour_de_contour_minmax_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  decont_blend_gain_md:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  decont_blend_gain_lo:3;
        RBus_UInt32  decont_level_range_hi:4;
        RBus_UInt32  decont_level_range_md:4;
        RBus_UInt32  decont_level_range_lo:4;
    };
}ipq_decontour_de_contour_level_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  bdecont_cdiff_shift:3;
        RBus_UInt32  res2:6;
        RBus_UInt32  bdecont_alpha_by_cdiff13:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  bdecont_alpha_by_cdiff14:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  bdecont_alpha_by_cdiff15:6;
    };
}ipq_decontour_blk_de_contour_alpha_cdiff0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  bdecont_alpha_by_cdiff9:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  bdecont_alpha_by_cdiff10:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  bdecont_alpha_by_cdiff11:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  bdecont_alpha_by_cdiff12:6;
    };
}ipq_decontour_blk_de_contour_alpha_cdiff1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  bdecont_alpha_by_cdiff5:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  bdecont_alpha_by_cdiff6:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  bdecont_alpha_by_cdiff7:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  bdecont_alpha_by_cdiff8:6;
    };
}ipq_decontour_blk_de_contour_alpha_cdiff2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  bdecont_alpha_by_cdiff1:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  bdecont_alpha_by_cdiff2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  bdecont_alpha_by_cdiff3:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  bdecont_alpha_by_cdiff4:6;
    };
}ipq_decontour_blk_de_contour_alpha_cdiff3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  bdecont_alpha_by_cdiff0:6;
    };
}ipq_decontour_blk_de_contour_alpha_cdiff4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  bdecont_profile_diff_distv:8;
        RBus_UInt32  bdecont_profile_diff_disth:8;
    };
}ipq_decontour_blk_de_profile_diff_dist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bdecont_profile_diff_th_hi:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  bdecont_profile_diff_th_lo:12;
    };
}ipq_decontour_blk_de_profile_diff_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  bdecont_profile_diff_gain_slope:14;
        RBus_UInt32  res2:4;
        RBus_UInt32  bdecont_profile_diff_gain_hi:6;
        RBus_UInt32  bdecont_profile_diff_gain_lo:6;
    };
}ipq_decontour_blk_de_profile_diff_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_blk_vsize_remainder:10;
        RBus_UInt32  res1:22;
    };
}ipq_decontour_block_decontour_vsize_remain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_en:1;
        RBus_UInt32  bdecont_profile_diff_gain_en:1;
        RBus_UInt32  bdecont_tenable:1;
        RBus_UInt32  bdecont_dither_en:1;
        RBus_UInt32  res1:20;
        RBus_UInt32  bdecont_debug_chsel:2;
        RBus_UInt32  bdecont_debugmode:2;
        RBus_UInt32  bdecont_rst:1;
        RBus_UInt32  bdecont_en_c:1;
        RBus_UInt32  res2:2;
    };
}ipq_decontour_blk_de_contour_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  bdecont_blk_hnum:7;
        RBus_UInt32  bdecont_hfactor:20;
    };
}ipq_decontour_blk_de_contour_size0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  bdecont_blk_vnum:6;
        RBus_UInt32  bdecont_vfactor:20;
    };
}ipq_decontour_blk_de_contour_size1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  bdecont_blk_hsize:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  bdecont_blk_vsize:10;
    };
}ipq_decontour_blk_de_contour_size2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_global_hist_rden:1;
        RBus_UInt32  bdecont_global_hist_read_mode:1;
        RBus_UInt32  bdecont_global_hist_locken:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  bdecont_global_hist_raddr:4;
        RBus_UInt32  res2:8;
        RBus_UInt32  bdecont_global_hist:16;
    };
}ipq_decontour_blk_de_contour_global_hist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  bdecont_global_max:12;
    };
}ipq_decontour_blk_de_contour_global_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_tmp_neg1thd:8;
        RBus_UInt32  bdecont_tmp_neg0thd:8;
        RBus_UInt32  bdecont_tmp_pos1thd:8;
        RBus_UInt32  bdecont_tmp_pos0thd:8;
    };
}ipq_decontour_blk_de_contour_tmp0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bdecont_tmp_maxdiff:8;
        RBus_UInt32  bdecont_tmp_negmaxgain:5;
        RBus_UInt32  bdecont_tmp_negmingain:5;
        RBus_UInt32  bdecont_tmp_posmaxgain:5;
        RBus_UInt32  bdecont_tmp_posmingain:5;
    };
}ipq_decontour_blk_de_contour_tmp1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_hinitphase1:1;
        RBus_UInt32  bdecont_hboundary:1;
        RBus_UInt32  res1:9;
        RBus_UInt32  bdecont_tmp_scenechangegain1:5;
        RBus_UInt32  bdecont_hinitphase2:8;
        RBus_UInt32  bdecont_hinitphase3:8;
    };
}ipq_decontour_blk_de_contour_hinit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_vinitphase1:1;
        RBus_UInt32  bdecont_vboundary:1;
        RBus_UInt32  res1:14;
        RBus_UInt32  bdecont_vinitphase2:8;
        RBus_UInt32  bdecont_vinitphase3:8;
    };
}ipq_decontour_blk_de_contour_vinit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  bdecont_ydiff_shift:3;
        RBus_UInt32  res2:6;
        RBus_UInt32  bdecont_alpha_by_ydiff13:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  bdecont_alpha_by_ydiff14:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  bdecont_alpha_by_ydiff15:6;
    };
}ipq_decontour_blk_de_contour_alpha_ydiff0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  bdecont_alpha_by_ydiff9:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  bdecont_alpha_by_ydiff10:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  bdecont_alpha_by_ydiff11:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  bdecont_alpha_by_ydiff12:6;
    };
}ipq_decontour_blk_de_contour_alpha_ydiff1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  bdecont_alpha_by_ydiff5:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  bdecont_alpha_by_ydiff6:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  bdecont_alpha_by_ydiff7:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  bdecont_alpha_by_ydiff8:6;
    };
}ipq_decontour_blk_de_contour_alpha_ydiff2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  bdecont_alpha_by_ydiff1:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  bdecont_alpha_by_ydiff2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  bdecont_alpha_by_ydiff3:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  bdecont_alpha_by_ydiff4:6;
    };
}ipq_decontour_blk_de_contour_alpha_ydiff3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  bdecont_alpha_by_ydiff0:6;
    };
}ipq_decontour_blk_de_contour_alpha_ydiff4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  bdecont_interp_filter12:10;
        RBus_UInt32  bdecont_interp_filter11:10;
        RBus_UInt32  bdecont_interp_filter10:10;
    };
}ipq_decontour_block_decontour_interp_filter0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  bdecont_interp_filter9:10;
        RBus_UInt32  bdecont_interp_filter8:10;
        RBus_UInt32  bdecont_interp_filter7:10;
    };
}ipq_decontour_block_decontour_interp_filter1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  bdecont_interp_filter6:10;
        RBus_UInt32  bdecont_interp_filter5:10;
        RBus_UInt32  bdecont_interp_filter4:10;
    };
}ipq_decontour_block_decontour_interp_filter2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  bdecont_interp_filter3:10;
        RBus_UInt32  bdecont_interp_filter2:10;
        RBus_UInt32  bdecont_interp_filter1:10;
    };
}ipq_decontour_block_decontour_interp_filter3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  bdecont_interp_filter0:10;
    };
}ipq_decontour_block_decontour_interp_filter4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  blkdecont_preprofile_bist_fail_2:1;
        RBus_UInt32  blkdecont_preprofile_bist_fail_1:1;
        RBus_UInt32  blkdecont_preprofile_bist_fail_0:1;
        RBus_UInt32  blkdecont_ave_hist_bist_fail_2:1;
        RBus_UInt32  blkdecont_ave_hist_bist_fail_1:1;
        RBus_UInt32  blkdecont_ave_hist_bist_fail_0:1;
        RBus_UInt32  blkdecont_frame_backlight_bist_fail_5:1;
        RBus_UInt32  blkdecont_frame_backlight_bist_fail_4:1;
        RBus_UInt32  blkdecont_frame_backlight_bist_fail_3:1;
        RBus_UInt32  blkdecont_frame_backlight_bist_fail_2:1;
        RBus_UInt32  blkdecont_frame_backlight_bist_fail_1:1;
        RBus_UInt32  blkdecont_frame_backlight_bist_fail_0:1;
    };
}ipq_decontour_block_decontour_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  blkdecont_preprofile_drf_fail_2:1;
        RBus_UInt32  blkdecont_preprofile_drf_fail_1:1;
        RBus_UInt32  blkdecont_preprofile_drf_fail_0:1;
        RBus_UInt32  blkdecont_ave_hist_drf_fail_2:1;
        RBus_UInt32  blkdecont_ave_hist_drf_fail_1:1;
        RBus_UInt32  blkdecont_ave_hist_drf_fail_0:1;
        RBus_UInt32  blkdecont_frame_backlight_drf_fail_5:1;
        RBus_UInt32  blkdecont_frame_backlight_drf_fail_4:1;
        RBus_UInt32  blkdecont_frame_backlight_drf_fail_3:1;
        RBus_UInt32  blkdecont_frame_backlight_drf_fail_2:1;
        RBus_UInt32  blkdecont_frame_backlight_drf_fail_1:1;
        RBus_UInt32  blkdecont_frame_backlight_drf_fail_0:1;
    };
}ipq_decontour_block_decontour_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  blkdecont_preprofile_bist_test0:1;
        RBus_UInt32  blkdecont_preprofile_bist_ls:1;
        RBus_UInt32  blkdecont_preprofile_testrwm:1;
        RBus_UInt32  blkdecont_preprofile_bist_dvse:1;
        RBus_UInt32  blkdecont_frame_backlight_bist_test0:1;
        RBus_UInt32  blkdecont_ave_hist_bist_test0:1;
        RBus_UInt32  blkdecont_ave_hist_bist_ls:1;
        RBus_UInt32  blkdecont_frame_backlight_bist_ls:1;
        RBus_UInt32  blkdecont_ave_hist_testrwm:1;
        RBus_UInt32  blkdecont_frame_backlight_bist_testrwm:1;
        RBus_UInt32  blkdecont_ave_hist_bist_dvse:1;
        RBus_UInt32  blkdecont_frame_backlight_bist_dvse:1;
        RBus_UInt32  res2:1;
    };
}ipq_decontour_block_decontour_bist_dvse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  blkdecont_preprofile_bist_dvs:4;
        RBus_UInt32  blkdecont_frame_backlight_bist_dvs:4;
        RBus_UInt32  blkdecont_ave_hist_bist_dvs:4;
        RBus_UInt32  res2:8;
    };
}ipq_decontour_block_decontour_bist_dvs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_dither_table_y00:2;
        RBus_UInt32  bdecont_dither_table_y01:2;
        RBus_UInt32  bdecont_dither_table_y02:2;
        RBus_UInt32  bdecont_dither_table_y03:2;
        RBus_UInt32  bdecont_dither_table_y10:2;
        RBus_UInt32  bdecont_dither_table_y11:2;
        RBus_UInt32  bdecont_dither_table_y12:2;
        RBus_UInt32  bdecont_dither_table_y13:2;
        RBus_UInt32  bdecont_dither_table_y20:2;
        RBus_UInt32  bdecont_dither_table_y21:2;
        RBus_UInt32  bdecont_dither_table_y22:2;
        RBus_UInt32  bdecont_dither_table_y23:2;
        RBus_UInt32  bdecont_dither_table_y30:2;
        RBus_UInt32  bdecont_dither_table_y31:2;
        RBus_UInt32  bdecont_dither_table_y32:2;
        RBus_UInt32  bdecont_dither_table_y33:2;
    };
}ipq_decontour_block_decontour_dither_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_dither_table_u00:2;
        RBus_UInt32  bdecont_dither_table_u01:2;
        RBus_UInt32  bdecont_dither_table_u02:2;
        RBus_UInt32  bdecont_dither_table_u03:2;
        RBus_UInt32  bdecont_dither_table_u10:2;
        RBus_UInt32  bdecont_dither_table_u11:2;
        RBus_UInt32  bdecont_dither_table_u12:2;
        RBus_UInt32  bdecont_dither_table_u13:2;
        RBus_UInt32  bdecont_dither_table_u20:2;
        RBus_UInt32  bdecont_dither_table_u21:2;
        RBus_UInt32  bdecont_dither_table_u22:2;
        RBus_UInt32  bdecont_dither_table_u23:2;
        RBus_UInt32  bdecont_dither_table_u30:2;
        RBus_UInt32  bdecont_dither_table_u31:2;
        RBus_UInt32  bdecont_dither_table_u32:2;
        RBus_UInt32  bdecont_dither_table_u33:2;
    };
}ipq_decontour_block_decontour_dither_u_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_dither_table_v00:2;
        RBus_UInt32  bdecont_dither_table_v01:2;
        RBus_UInt32  bdecont_dither_table_v02:2;
        RBus_UInt32  bdecont_dither_table_v03:2;
        RBus_UInt32  bdecont_dither_table_v10:2;
        RBus_UInt32  bdecont_dither_table_v11:2;
        RBus_UInt32  bdecont_dither_table_v12:2;
        RBus_UInt32  bdecont_dither_table_v13:2;
        RBus_UInt32  bdecont_dither_table_v20:2;
        RBus_UInt32  bdecont_dither_table_v21:2;
        RBus_UInt32  bdecont_dither_table_v22:2;
        RBus_UInt32  bdecont_dither_table_v23:2;
        RBus_UInt32  bdecont_dither_table_v30:2;
        RBus_UInt32  bdecont_dither_table_v31:2;
        RBus_UInt32  bdecont_dither_table_v32:2;
        RBus_UInt32  bdecont_dither_table_v33:2;
    };
}ipq_decontour_block_decontour_dither_v_RBUS;

#else //apply LITTLE_ENDIAN

//======IPQ_DECONTOUR register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_snr_blend_mode:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  decont_blend_step:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  decont_blend_lowbd:8;
        RBus_UInt32  res3:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  decont_blend_weight_lpf_en:1;
        RBus_UInt32  decont_bottleneck_en:1;
        RBus_UInt32  decont_line_mode:1;
        RBus_UInt32  decont_yc_mode:2;
        RBus_UInt32  decont_filter_mode:1;
        RBus_UInt32  decont_debug_mode:2;
        RBus_UInt32  res5:1;
        RBus_UInt32  decont_debug_en:1;
        RBus_UInt32  decont_neighbor_far:1;
        RBus_UInt32  decont_en:1;
    };
}ipq_decontour_de_contour_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_maxmindiff_th_y_info:8;
        RBus_UInt32  decont_gradation_th_y_info:5;
        RBus_UInt32  decont_neighbor_diff_th_y_info:6;
        RBus_UInt32  decont_contrast_th_y_info:9;
        RBus_UInt32  res1:4;
    };
}ipq_decontour_de_contour_contrast_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_maxmindiff_th_c_info:8;
        RBus_UInt32  decont_gradation_th_c_info:5;
        RBus_UInt32  decont_neighbor_diff_th_c_info:6;
        RBus_UInt32  decont_contrast_th_c_info:11;
        RBus_UInt32  res1:2;
    };
}ipq_decontour_de_contour_contrast_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_contrast_th_c:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  decont_contrast_th_y:10;
        RBus_UInt32  res2:6;
    };
}ipq_decontour_de_contour_contrast_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_neighbor_diff_th_c:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  decont_neighbor_diff_th2_c:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  decont_neighbor_diff_th_y:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  decont_neighbor_diff_th2_y:6;
        RBus_UInt32  res4:2;
    };
}ipq_decontour_de_contour_neighbor_diff_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_dark_contrast_th:10;
        RBus_UInt32  decont_gradation_th_c:5;
        RBus_UInt32  res1:1;
        RBus_UInt32  decont_dark_th:10;
        RBus_UInt32  decont_gradation_th_y:5;
        RBus_UInt32  res2:1;
    };
}ipq_decontour_de_contour_threshold_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_maxmindiff_th_y:8;
        RBus_UInt32  decont_maxmindiff_th_c:8;
        RBus_UInt32  res1:16;
    };
}ipq_decontour_de_contour_diff_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_contour_cnt:24;
        RBus_UInt32  res1:8;
    };
}ipq_decontour_de_contour_counter_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_avfilter_cnt:24;
        RBus_UInt32  res1:8;
    };
}ipq_decontour_de_contour_avfilter_counter_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  decont_filter_range_hist_raddr:4;
        RBus_UInt32  decont_filter_range_hist_locken:1;
        RBus_UInt32  decont_filter_range_hist_read_mode:1;
        RBus_UInt32  decont_filter_range_hist_rden:1;
    };
}ipq_decontour_de_contour_hist_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_filter_range_hist:24;
        RBus_UInt32  res1:8;
    };
}ipq_decontour_de_contour_hist_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_info_ydiff_hist:24;
        RBus_UInt32  res1:2;
        RBus_UInt32  decont_info_ydiff_hist_raddr:3;
        RBus_UInt32  decont_info_ydiff_hist_locken:1;
        RBus_UInt32  decont_info_ydiff_hist_read_mode:1;
        RBus_UInt32  decont_info_ydiff_hist_rden:1;
    };
}ipq_decontour_de_contour_ydiff_hist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_info_cdiff_hist:24;
        RBus_UInt32  res1:2;
        RBus_UInt32  decont_info_cdiff_hist_raddr:3;
        RBus_UInt32  decont_info_cdiff_hist_locken:1;
        RBus_UInt32  decont_info_cdiff_hist_read_mode:1;
        RBus_UInt32  decont_info_cdiff_hist_rden:1;
    };
}ipq_decontour_de_contour_cdiff_hist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  db_apply:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  db_read:1;
        RBus_UInt32  res1:29;
    };
}ipq_decontour_de_contour_db_reg_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_bottleneck_range0:4;
        RBus_UInt32  decont_bottleneck_range1:4;
        RBus_UInt32  decont_bottleneck_range2:4;
        RBus_UInt32  decont_bottleneck_range3:4;
        RBus_UInt32  decont_bottleneck_range4:4;
        RBus_UInt32  res1:12;
    };
}ipq_decontour_de_contour_bottleneck_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_diff_clamp_y:10;
        RBus_UInt32  decont_diff_clamp_c:10;
        RBus_UInt32  res1:12;
    };
}ipq_decontour_de_contour_diff_clamp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_contrast_th2_y:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  decont_contrast_th3_y:10;
        RBus_UInt32  res2:6;
    };
}ipq_decontour_de_contour_contrast2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_contrast_th2_c:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  decont_contrast_th3_c:10;
        RBus_UInt32  res2:6;
    };
}ipq_decontour_de_contour_contrast3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_dark_contrast_th2:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  decont_dark_contrast_th3:10;
        RBus_UInt32  res2:6;
    };
}ipq_decontour_de_contour_dark_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_gradation_th2_y:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  decont_gradation_th2_c:5;
        RBus_UInt32  res2:19;
    };
}ipq_decontour_de_contour_gradation_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_maxmindiff_th2_y:8;
        RBus_UInt32  decont_maxmindiff_th3_y:8;
        RBus_UInt32  decont_maxmin_lv0:2;
        RBus_UInt32  decont_maxmin_lv1:2;
        RBus_UInt32  decont_maxmin_lv2:2;
        RBus_UInt32  decont_maxmin_lv3:2;
        RBus_UInt32  res1:8;
    };
}ipq_decontour_de_contour_minmax_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_level_range_lo:4;
        RBus_UInt32  decont_level_range_md:4;
        RBus_UInt32  decont_level_range_hi:4;
        RBus_UInt32  decont_blend_gain_lo:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  decont_blend_gain_md:3;
        RBus_UInt32  res2:13;
    };
}ipq_decontour_de_contour_level_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_alpha_by_cdiff15:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  bdecont_alpha_by_cdiff14:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  bdecont_alpha_by_cdiff13:6;
        RBus_UInt32  res3:6;
        RBus_UInt32  bdecont_cdiff_shift:3;
        RBus_UInt32  res4:1;
    };
}ipq_decontour_blk_de_contour_alpha_cdiff0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_alpha_by_cdiff12:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  bdecont_alpha_by_cdiff11:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  bdecont_alpha_by_cdiff10:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  bdecont_alpha_by_cdiff9:6;
        RBus_UInt32  res4:2;
    };
}ipq_decontour_blk_de_contour_alpha_cdiff1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_alpha_by_cdiff8:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  bdecont_alpha_by_cdiff7:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  bdecont_alpha_by_cdiff6:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  bdecont_alpha_by_cdiff5:6;
        RBus_UInt32  res4:2;
    };
}ipq_decontour_blk_de_contour_alpha_cdiff2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_alpha_by_cdiff4:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  bdecont_alpha_by_cdiff3:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  bdecont_alpha_by_cdiff2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  bdecont_alpha_by_cdiff1:6;
        RBus_UInt32  res4:2;
    };
}ipq_decontour_blk_de_contour_alpha_cdiff3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_alpha_by_cdiff0:6;
        RBus_UInt32  res1:26;
    };
}ipq_decontour_blk_de_contour_alpha_cdiff4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_profile_diff_disth:8;
        RBus_UInt32  bdecont_profile_diff_distv:8;
        RBus_UInt32  res1:16;
    };
}ipq_decontour_blk_de_profile_diff_dist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_profile_diff_th_lo:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  bdecont_profile_diff_th_hi:12;
        RBus_UInt32  res2:4;
    };
}ipq_decontour_blk_de_profile_diff_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_profile_diff_gain_lo:6;
        RBus_UInt32  bdecont_profile_diff_gain_hi:6;
        RBus_UInt32  res1:4;
        RBus_UInt32  bdecont_profile_diff_gain_slope:14;
        RBus_UInt32  res2:2;
    };
}ipq_decontour_blk_de_profile_diff_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  bdecont_blk_vsize_remainder:10;
    };
}ipq_decontour_block_decontour_vsize_remain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  bdecont_en_c:1;
        RBus_UInt32  bdecont_rst:1;
        RBus_UInt32  bdecont_debugmode:2;
        RBus_UInt32  bdecont_debug_chsel:2;
        RBus_UInt32  res2:20;
        RBus_UInt32  bdecont_dither_en:1;
        RBus_UInt32  bdecont_tenable:1;
        RBus_UInt32  bdecont_profile_diff_gain_en:1;
        RBus_UInt32  bdecont_en:1;
    };
}ipq_decontour_blk_de_contour_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_hfactor:20;
        RBus_UInt32  bdecont_blk_hnum:7;
        RBus_UInt32  res1:5;
    };
}ipq_decontour_blk_de_contour_size0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_vfactor:20;
        RBus_UInt32  bdecont_blk_vnum:6;
        RBus_UInt32  res1:6;
    };
}ipq_decontour_blk_de_contour_size1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_blk_vsize:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  bdecont_blk_hsize:10;
        RBus_UInt32  res2:6;
    };
}ipq_decontour_blk_de_contour_size2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_global_hist:16;
        RBus_UInt32  res1:8;
        RBus_UInt32  bdecont_global_hist_raddr:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  bdecont_global_hist_locken:1;
        RBus_UInt32  bdecont_global_hist_read_mode:1;
        RBus_UInt32  bdecont_global_hist_rden:1;
    };
}ipq_decontour_blk_de_contour_global_hist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_global_max:12;
        RBus_UInt32  res1:20;
    };
}ipq_decontour_blk_de_contour_global_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_tmp_pos0thd:8;
        RBus_UInt32  bdecont_tmp_pos1thd:8;
        RBus_UInt32  bdecont_tmp_neg0thd:8;
        RBus_UInt32  bdecont_tmp_neg1thd:8;
    };
}ipq_decontour_blk_de_contour_tmp0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_tmp_posmingain:5;
        RBus_UInt32  bdecont_tmp_posmaxgain:5;
        RBus_UInt32  bdecont_tmp_negmingain:5;
        RBus_UInt32  bdecont_tmp_negmaxgain:5;
        RBus_UInt32  bdecont_tmp_maxdiff:8;
        RBus_UInt32  res1:4;
    };
}ipq_decontour_blk_de_contour_tmp1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_hinitphase3:8;
        RBus_UInt32  bdecont_hinitphase2:8;
        RBus_UInt32  bdecont_tmp_scenechangegain1:5;
        RBus_UInt32  res1:9;
        RBus_UInt32  bdecont_hboundary:1;
        RBus_UInt32  bdecont_hinitphase1:1;
    };
}ipq_decontour_blk_de_contour_hinit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_vinitphase3:8;
        RBus_UInt32  bdecont_vinitphase2:8;
        RBus_UInt32  res1:14;
        RBus_UInt32  bdecont_vboundary:1;
        RBus_UInt32  bdecont_vinitphase1:1;
    };
}ipq_decontour_blk_de_contour_vinit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_alpha_by_ydiff15:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  bdecont_alpha_by_ydiff14:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  bdecont_alpha_by_ydiff13:6;
        RBus_UInt32  res3:6;
        RBus_UInt32  bdecont_ydiff_shift:3;
        RBus_UInt32  res4:1;
    };
}ipq_decontour_blk_de_contour_alpha_ydiff0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_alpha_by_ydiff12:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  bdecont_alpha_by_ydiff11:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  bdecont_alpha_by_ydiff10:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  bdecont_alpha_by_ydiff9:6;
        RBus_UInt32  res4:2;
    };
}ipq_decontour_blk_de_contour_alpha_ydiff1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_alpha_by_ydiff8:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  bdecont_alpha_by_ydiff7:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  bdecont_alpha_by_ydiff6:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  bdecont_alpha_by_ydiff5:6;
        RBus_UInt32  res4:2;
    };
}ipq_decontour_blk_de_contour_alpha_ydiff2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_alpha_by_ydiff4:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  bdecont_alpha_by_ydiff3:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  bdecont_alpha_by_ydiff2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  bdecont_alpha_by_ydiff1:6;
        RBus_UInt32  res4:2;
    };
}ipq_decontour_blk_de_contour_alpha_ydiff3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_alpha_by_ydiff0:6;
        RBus_UInt32  res1:26;
    };
}ipq_decontour_blk_de_contour_alpha_ydiff4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_interp_filter10:10;
        RBus_UInt32  bdecont_interp_filter11:10;
        RBus_UInt32  bdecont_interp_filter12:10;
        RBus_UInt32  res1:2;
    };
}ipq_decontour_block_decontour_interp_filter0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_interp_filter7:10;
        RBus_UInt32  bdecont_interp_filter8:10;
        RBus_UInt32  bdecont_interp_filter9:10;
        RBus_UInt32  res1:2;
    };
}ipq_decontour_block_decontour_interp_filter1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_interp_filter4:10;
        RBus_UInt32  bdecont_interp_filter5:10;
        RBus_UInt32  bdecont_interp_filter6:10;
        RBus_UInt32  res1:2;
    };
}ipq_decontour_block_decontour_interp_filter2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_interp_filter1:10;
        RBus_UInt32  bdecont_interp_filter2:10;
        RBus_UInt32  bdecont_interp_filter3:10;
        RBus_UInt32  res1:2;
    };
}ipq_decontour_block_decontour_interp_filter3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_interp_filter0:10;
        RBus_UInt32  res1:22;
    };
}ipq_decontour_block_decontour_interp_filter4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  blkdecont_frame_backlight_bist_fail_0:1;
        RBus_UInt32  blkdecont_frame_backlight_bist_fail_1:1;
        RBus_UInt32  blkdecont_frame_backlight_bist_fail_2:1;
        RBus_UInt32  blkdecont_frame_backlight_bist_fail_3:1;
        RBus_UInt32  blkdecont_frame_backlight_bist_fail_4:1;
        RBus_UInt32  blkdecont_frame_backlight_bist_fail_5:1;
        RBus_UInt32  blkdecont_ave_hist_bist_fail_0:1;
        RBus_UInt32  blkdecont_ave_hist_bist_fail_1:1;
        RBus_UInt32  blkdecont_ave_hist_bist_fail_2:1;
        RBus_UInt32  blkdecont_preprofile_bist_fail_0:1;
        RBus_UInt32  blkdecont_preprofile_bist_fail_1:1;
        RBus_UInt32  blkdecont_preprofile_bist_fail_2:1;
        RBus_UInt32  res1:20;
    };
}ipq_decontour_block_decontour_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  blkdecont_frame_backlight_drf_fail_0:1;
        RBus_UInt32  blkdecont_frame_backlight_drf_fail_1:1;
        RBus_UInt32  blkdecont_frame_backlight_drf_fail_2:1;
        RBus_UInt32  blkdecont_frame_backlight_drf_fail_3:1;
        RBus_UInt32  blkdecont_frame_backlight_drf_fail_4:1;
        RBus_UInt32  blkdecont_frame_backlight_drf_fail_5:1;
        RBus_UInt32  blkdecont_ave_hist_drf_fail_0:1;
        RBus_UInt32  blkdecont_ave_hist_drf_fail_1:1;
        RBus_UInt32  blkdecont_ave_hist_drf_fail_2:1;
        RBus_UInt32  blkdecont_preprofile_drf_fail_0:1;
        RBus_UInt32  blkdecont_preprofile_drf_fail_1:1;
        RBus_UInt32  blkdecont_preprofile_drf_fail_2:1;
        RBus_UInt32  res1:20;
    };
}ipq_decontour_block_decontour_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  blkdecont_frame_backlight_bist_dvse:1;
        RBus_UInt32  blkdecont_ave_hist_bist_dvse:1;
        RBus_UInt32  blkdecont_frame_backlight_bist_testrwm:1;
        RBus_UInt32  blkdecont_ave_hist_testrwm:1;
        RBus_UInt32  blkdecont_frame_backlight_bist_ls:1;
        RBus_UInt32  blkdecont_ave_hist_bist_ls:1;
        RBus_UInt32  blkdecont_ave_hist_bist_test0:1;
        RBus_UInt32  blkdecont_frame_backlight_bist_test0:1;
        RBus_UInt32  blkdecont_preprofile_bist_dvse:1;
        RBus_UInt32  blkdecont_preprofile_testrwm:1;
        RBus_UInt32  blkdecont_preprofile_bist_ls:1;
        RBus_UInt32  blkdecont_preprofile_bist_test0:1;
        RBus_UInt32  res2:19;
    };
}ipq_decontour_block_decontour_bist_dvse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  blkdecont_ave_hist_bist_dvs:4;
        RBus_UInt32  blkdecont_frame_backlight_bist_dvs:4;
        RBus_UInt32  blkdecont_preprofile_bist_dvs:4;
        RBus_UInt32  res2:12;
    };
}ipq_decontour_block_decontour_bist_dvs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_dither_table_y33:2;
        RBus_UInt32  bdecont_dither_table_y32:2;
        RBus_UInt32  bdecont_dither_table_y31:2;
        RBus_UInt32  bdecont_dither_table_y30:2;
        RBus_UInt32  bdecont_dither_table_y23:2;
        RBus_UInt32  bdecont_dither_table_y22:2;
        RBus_UInt32  bdecont_dither_table_y21:2;
        RBus_UInt32  bdecont_dither_table_y20:2;
        RBus_UInt32  bdecont_dither_table_y13:2;
        RBus_UInt32  bdecont_dither_table_y12:2;
        RBus_UInt32  bdecont_dither_table_y11:2;
        RBus_UInt32  bdecont_dither_table_y10:2;
        RBus_UInt32  bdecont_dither_table_y03:2;
        RBus_UInt32  bdecont_dither_table_y02:2;
        RBus_UInt32  bdecont_dither_table_y01:2;
        RBus_UInt32  bdecont_dither_table_y00:2;
    };
}ipq_decontour_block_decontour_dither_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_dither_table_u33:2;
        RBus_UInt32  bdecont_dither_table_u32:2;
        RBus_UInt32  bdecont_dither_table_u31:2;
        RBus_UInt32  bdecont_dither_table_u30:2;
        RBus_UInt32  bdecont_dither_table_u23:2;
        RBus_UInt32  bdecont_dither_table_u22:2;
        RBus_UInt32  bdecont_dither_table_u21:2;
        RBus_UInt32  bdecont_dither_table_u20:2;
        RBus_UInt32  bdecont_dither_table_u13:2;
        RBus_UInt32  bdecont_dither_table_u12:2;
        RBus_UInt32  bdecont_dither_table_u11:2;
        RBus_UInt32  bdecont_dither_table_u10:2;
        RBus_UInt32  bdecont_dither_table_u03:2;
        RBus_UInt32  bdecont_dither_table_u02:2;
        RBus_UInt32  bdecont_dither_table_u01:2;
        RBus_UInt32  bdecont_dither_table_u00:2;
    };
}ipq_decontour_block_decontour_dither_u_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bdecont_dither_table_v33:2;
        RBus_UInt32  bdecont_dither_table_v32:2;
        RBus_UInt32  bdecont_dither_table_v31:2;
        RBus_UInt32  bdecont_dither_table_v30:2;
        RBus_UInt32  bdecont_dither_table_v23:2;
        RBus_UInt32  bdecont_dither_table_v22:2;
        RBus_UInt32  bdecont_dither_table_v21:2;
        RBus_UInt32  bdecont_dither_table_v20:2;
        RBus_UInt32  bdecont_dither_table_v13:2;
        RBus_UInt32  bdecont_dither_table_v12:2;
        RBus_UInt32  bdecont_dither_table_v11:2;
        RBus_UInt32  bdecont_dither_table_v10:2;
        RBus_UInt32  bdecont_dither_table_v03:2;
        RBus_UInt32  bdecont_dither_table_v02:2;
        RBus_UInt32  bdecont_dither_table_v01:2;
        RBus_UInt32  bdecont_dither_table_v00:2;
    };
}ipq_decontour_block_decontour_dither_v_RBUS;




#endif 


#endif 
