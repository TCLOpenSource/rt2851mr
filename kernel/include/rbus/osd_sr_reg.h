/**
* @file Merlin5-DesignSpec-D-Domain_OSD_SR
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_OSD_SR_REG_H_
#define _RBUS_OSD_SR_REG_H_

#include "rbus_types.h"



//  OSD_SR Register Address
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl0                                          0x18029400
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl0_reg_addr                                  "0xB8029400"
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl0_reg                                       0xB8029400
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl0_inst_addr                                 "0x0000"
#define  set_OSD_SR_OSD_SR_1_Scaleup_Ctrl0_reg(data)                             (*((volatile unsigned int*)OSD_SR_OSD_SR_1_Scaleup_Ctrl0_reg)=data)
#define  get_OSD_SR_OSD_SR_1_Scaleup_Ctrl0_reg                                   (*((volatile unsigned int*)OSD_SR_OSD_SR_1_Scaleup_Ctrl0_reg))
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl0_v_zoom_en_shift                           (31)
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl0_ver_ini_shift                             (22)
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl0_ver_tap_num_shift                         (20)
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl0_ver_factor_shift                          (0)
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl0_v_zoom_en_mask                            (0x80000000)
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl0_ver_ini_mask                              (0x3FC00000)
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl0_ver_tap_num_mask                          (0x00300000)
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl0_ver_factor_mask                           (0x000FFFFF)
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl0_v_zoom_en(data)                           (0x80000000&((data)<<31))
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl0_ver_ini(data)                             (0x3FC00000&((data)<<22))
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl0_ver_tap_num(data)                         (0x00300000&((data)<<20))
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl0_ver_factor(data)                          (0x000FFFFF&(data))
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl0_get_v_zoom_en(data)                       ((0x80000000&(data))>>31)
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl0_get_ver_ini(data)                         ((0x3FC00000&(data))>>22)
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl0_get_ver_tap_num(data)                     ((0x00300000&(data))>>20)
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl0_get_ver_factor(data)                      (0x000FFFFF&(data))

#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl1                                          0x18029404
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl1_reg_addr                                  "0xB8029404"
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl1_reg                                       0xB8029404
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl1_inst_addr                                 "0x0001"
#define  set_OSD_SR_OSD_SR_1_Scaleup_Ctrl1_reg(data)                             (*((volatile unsigned int*)OSD_SR_OSD_SR_1_Scaleup_Ctrl1_reg)=data)
#define  get_OSD_SR_OSD_SR_1_Scaleup_Ctrl1_reg                                   (*((volatile unsigned int*)OSD_SR_OSD_SR_1_Scaleup_Ctrl1_reg))
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl1_h_zoom_en_shift                           (31)
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl1_hor_ini_shift                             (22)
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl1_hor_factor_shift                          (0)
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl1_h_zoom_en_mask                            (0x80000000)
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl1_hor_ini_mask                              (0x3FC00000)
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl1_hor_factor_mask                           (0x000FFFFF)
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl1_h_zoom_en(data)                           (0x80000000&((data)<<31))
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl1_hor_ini(data)                             (0x3FC00000&((data)<<22))
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl1_hor_factor(data)                          (0x000FFFFF&(data))
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl1_get_h_zoom_en(data)                       ((0x80000000&(data))>>31)
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl1_get_hor_ini(data)                         ((0x3FC00000&(data))>>22)
#define  OSD_SR_OSD_SR_1_Scaleup_Ctrl1_get_hor_factor(data)                      (0x000FFFFF&(data))

#define  OSD_SR_OSD_SR_1_H_Location_Ctrl                                        0x18029408
#define  OSD_SR_OSD_SR_1_H_Location_Ctrl_reg_addr                                "0xB8029408"
#define  OSD_SR_OSD_SR_1_H_Location_Ctrl_reg                                     0xB8029408
#define  OSD_SR_OSD_SR_1_H_Location_Ctrl_inst_addr                               "0x0002"
#define  set_OSD_SR_OSD_SR_1_H_Location_Ctrl_reg(data)                           (*((volatile unsigned int*)OSD_SR_OSD_SR_1_H_Location_Ctrl_reg)=data)
#define  get_OSD_SR_OSD_SR_1_H_Location_Ctrl_reg                                 (*((volatile unsigned int*)OSD_SR_OSD_SR_1_H_Location_Ctrl_reg))
#define  OSD_SR_OSD_SR_1_H_Location_Ctrl_osd_h_sta_shift                         (16)
#define  OSD_SR_OSD_SR_1_H_Location_Ctrl_osd_width_shift                         (0)
#define  OSD_SR_OSD_SR_1_H_Location_Ctrl_osd_h_sta_mask                          (0x1FFF0000)
#define  OSD_SR_OSD_SR_1_H_Location_Ctrl_osd_width_mask                          (0x00001FFF)
#define  OSD_SR_OSD_SR_1_H_Location_Ctrl_osd_h_sta(data)                         (0x1FFF0000&((data)<<16))
#define  OSD_SR_OSD_SR_1_H_Location_Ctrl_osd_width(data)                         (0x00001FFF&(data))
#define  OSD_SR_OSD_SR_1_H_Location_Ctrl_get_osd_h_sta(data)                     ((0x1FFF0000&(data))>>16)
#define  OSD_SR_OSD_SR_1_H_Location_Ctrl_get_osd_width(data)                     (0x00001FFF&(data))

#define  OSD_SR_OSD_SR_1_V_Location_Ctrl                                        0x1802940C
#define  OSD_SR_OSD_SR_1_V_Location_Ctrl_reg_addr                                "0xB802940C"
#define  OSD_SR_OSD_SR_1_V_Location_Ctrl_reg                                     0xB802940C
#define  OSD_SR_OSD_SR_1_V_Location_Ctrl_inst_addr                               "0x0003"
#define  set_OSD_SR_OSD_SR_1_V_Location_Ctrl_reg(data)                           (*((volatile unsigned int*)OSD_SR_OSD_SR_1_V_Location_Ctrl_reg)=data)
#define  get_OSD_SR_OSD_SR_1_V_Location_Ctrl_reg                                 (*((volatile unsigned int*)OSD_SR_OSD_SR_1_V_Location_Ctrl_reg))
#define  OSD_SR_OSD_SR_1_V_Location_Ctrl_osd_v_sta_shift                         (16)
#define  OSD_SR_OSD_SR_1_V_Location_Ctrl_osd_height_shift                        (0)
#define  OSD_SR_OSD_SR_1_V_Location_Ctrl_osd_v_sta_mask                          (0x0FFF0000)
#define  OSD_SR_OSD_SR_1_V_Location_Ctrl_osd_height_mask                         (0x00000FFF)
#define  OSD_SR_OSD_SR_1_V_Location_Ctrl_osd_v_sta(data)                         (0x0FFF0000&((data)<<16))
#define  OSD_SR_OSD_SR_1_V_Location_Ctrl_osd_height(data)                        (0x00000FFF&(data))
#define  OSD_SR_OSD_SR_1_V_Location_Ctrl_get_osd_v_sta(data)                     ((0x0FFF0000&(data))>>16)
#define  OSD_SR_OSD_SR_1_V_Location_Ctrl_get_osd_height(data)                    (0x00000FFF&(data))

#define  OSD_SR_OSD_SR_1_Ctrl                                                   0x18029410
#define  OSD_SR_OSD_SR_1_Ctrl_reg_addr                                           "0xB8029410"
#define  OSD_SR_OSD_SR_1_Ctrl_reg                                                0xB8029410
#define  OSD_SR_OSD_SR_1_Ctrl_inst_addr                                          "0x0004"
#define  set_OSD_SR_OSD_SR_1_Ctrl_reg(data)                                      (*((volatile unsigned int*)OSD_SR_OSD_SR_1_Ctrl_reg)=data)
#define  get_OSD_SR_OSD_SR_1_Ctrl_reg                                            (*((volatile unsigned int*)OSD_SR_OSD_SR_1_Ctrl_reg))
#define  OSD_SR_OSD_SR_1_Ctrl_sr_maxmin_shift_shift                              (24)
#define  OSD_SR_OSD_SR_1_Ctrl_sr_var_thd_shift                                   (16)
#define  OSD_SR_OSD_SR_1_Ctrl_sr_maxmin_limit_en_shift                           (8)
#define  OSD_SR_OSD_SR_1_Ctrl_identity_en_shift                                  (2)
#define  OSD_SR_OSD_SR_1_Ctrl_yuv_data_shift                                     (1)
#define  OSD_SR_OSD_SR_1_Ctrl_irq_udf_en_shift                                   (0)
#define  OSD_SR_OSD_SR_1_Ctrl_sr_maxmin_shift_mask                               (0xFF000000)
#define  OSD_SR_OSD_SR_1_Ctrl_sr_var_thd_mask                                    (0x00FF0000)
#define  OSD_SR_OSD_SR_1_Ctrl_sr_maxmin_limit_en_mask                            (0x00000100)
#define  OSD_SR_OSD_SR_1_Ctrl_identity_en_mask                                   (0x00000004)
#define  OSD_SR_OSD_SR_1_Ctrl_yuv_data_mask                                      (0x00000002)
#define  OSD_SR_OSD_SR_1_Ctrl_irq_udf_en_mask                                    (0x00000001)
#define  OSD_SR_OSD_SR_1_Ctrl_sr_maxmin_shift(data)                              (0xFF000000&((data)<<24))
#define  OSD_SR_OSD_SR_1_Ctrl_sr_var_thd(data)                                   (0x00FF0000&((data)<<16))
#define  OSD_SR_OSD_SR_1_Ctrl_sr_maxmin_limit_en(data)                           (0x00000100&((data)<<8))
#define  OSD_SR_OSD_SR_1_Ctrl_identity_en(data)                                  (0x00000004&((data)<<2))
#define  OSD_SR_OSD_SR_1_Ctrl_yuv_data(data)                                     (0x00000002&((data)<<1))
#define  OSD_SR_OSD_SR_1_Ctrl_irq_udf_en(data)                                   (0x00000001&(data))
#define  OSD_SR_OSD_SR_1_Ctrl_get_sr_maxmin_shift(data)                          ((0xFF000000&(data))>>24)
#define  OSD_SR_OSD_SR_1_Ctrl_get_sr_var_thd(data)                               ((0x00FF0000&(data))>>16)
#define  OSD_SR_OSD_SR_1_Ctrl_get_sr_maxmin_limit_en(data)                       ((0x00000100&(data))>>8)
#define  OSD_SR_OSD_SR_1_Ctrl_get_identity_en(data)                              ((0x00000004&(data))>>2)
#define  OSD_SR_OSD_SR_1_Ctrl_get_yuv_data(data)                                 ((0x00000002&(data))>>1)
#define  OSD_SR_OSD_SR_1_Ctrl_get_irq_udf_en(data)                               (0x00000001&(data))

#define  OSD_SR_OSD_SR_1_Filter_Ctrl0                                           0x1802941C
#define  OSD_SR_OSD_SR_1_Filter_Ctrl0_reg_addr                                   "0xB802941C"
#define  OSD_SR_OSD_SR_1_Filter_Ctrl0_reg                                        0xB802941C
#define  OSD_SR_OSD_SR_1_Filter_Ctrl0_inst_addr                                  "0x0005"
#define  set_OSD_SR_OSD_SR_1_Filter_Ctrl0_reg(data)                              (*((volatile unsigned int*)OSD_SR_OSD_SR_1_Filter_Ctrl0_reg)=data)
#define  get_OSD_SR_OSD_SR_1_Filter_Ctrl0_reg                                    (*((volatile unsigned int*)OSD_SR_OSD_SR_1_Filter_Ctrl0_reg))
#define  OSD_SR_OSD_SR_1_Filter_Ctrl0_sr_delta_gain_shift                        (5)
#define  OSD_SR_OSD_SR_1_Filter_Ctrl0_sr_edge_range_shift                        (4)
#define  OSD_SR_OSD_SR_1_Filter_Ctrl0_sr_lpf_range_shift                         (0)
#define  OSD_SR_OSD_SR_1_Filter_Ctrl0_sr_delta_gain_mask                         (0x00000060)
#define  OSD_SR_OSD_SR_1_Filter_Ctrl0_sr_edge_range_mask                         (0x00000010)
#define  OSD_SR_OSD_SR_1_Filter_Ctrl0_sr_lpf_range_mask                          (0x00000001)
#define  OSD_SR_OSD_SR_1_Filter_Ctrl0_sr_delta_gain(data)                        (0x00000060&((data)<<5))
#define  OSD_SR_OSD_SR_1_Filter_Ctrl0_sr_edge_range(data)                        (0x00000010&((data)<<4))
#define  OSD_SR_OSD_SR_1_Filter_Ctrl0_sr_lpf_range(data)                         (0x00000001&(data))
#define  OSD_SR_OSD_SR_1_Filter_Ctrl0_get_sr_delta_gain(data)                    ((0x00000060&(data))>>5)
#define  OSD_SR_OSD_SR_1_Filter_Ctrl0_get_sr_edge_range(data)                    ((0x00000010&(data))>>4)
#define  OSD_SR_OSD_SR_1_Filter_Ctrl0_get_sr_lpf_range(data)                     (0x00000001&(data))

#define  OSD_SR_OSD_SR_1_GainY_Ctrl0                                            0x18029420
#define  OSD_SR_OSD_SR_1_GainY_Ctrl0_reg_addr                                    "0xB8029420"
#define  OSD_SR_OSD_SR_1_GainY_Ctrl0_reg                                         0xB8029420
#define  OSD_SR_OSD_SR_1_GainY_Ctrl0_inst_addr                                   "0x0006"
#define  set_OSD_SR_OSD_SR_1_GainY_Ctrl0_reg(data)                               (*((volatile unsigned int*)OSD_SR_OSD_SR_1_GainY_Ctrl0_reg)=data)
#define  get_OSD_SR_OSD_SR_1_GainY_Ctrl0_reg                                     (*((volatile unsigned int*)OSD_SR_OSD_SR_1_GainY_Ctrl0_reg))
#define  OSD_SR_OSD_SR_1_GainY_Ctrl0_sr_by_pgain0_shift                          (24)
#define  OSD_SR_OSD_SR_1_GainY_Ctrl0_sr_by_ngain0_shift                          (16)
#define  OSD_SR_OSD_SR_1_GainY_Ctrl0_sr_lpf_gain_shift                           (10)
#define  OSD_SR_OSD_SR_1_GainY_Ctrl0_sr_by_gain_en_shift                         (0)
#define  OSD_SR_OSD_SR_1_GainY_Ctrl0_sr_by_pgain0_mask                           (0xFF000000)
#define  OSD_SR_OSD_SR_1_GainY_Ctrl0_sr_by_ngain0_mask                           (0x00FF0000)
#define  OSD_SR_OSD_SR_1_GainY_Ctrl0_sr_lpf_gain_mask                            (0x0000FC00)
#define  OSD_SR_OSD_SR_1_GainY_Ctrl0_sr_by_gain_en_mask                          (0x00000001)
#define  OSD_SR_OSD_SR_1_GainY_Ctrl0_sr_by_pgain0(data)                          (0xFF000000&((data)<<24))
#define  OSD_SR_OSD_SR_1_GainY_Ctrl0_sr_by_ngain0(data)                          (0x00FF0000&((data)<<16))
#define  OSD_SR_OSD_SR_1_GainY_Ctrl0_sr_lpf_gain(data)                           (0x0000FC00&((data)<<10))
#define  OSD_SR_OSD_SR_1_GainY_Ctrl0_sr_by_gain_en(data)                         (0x00000001&(data))
#define  OSD_SR_OSD_SR_1_GainY_Ctrl0_get_sr_by_pgain0(data)                      ((0xFF000000&(data))>>24)
#define  OSD_SR_OSD_SR_1_GainY_Ctrl0_get_sr_by_ngain0(data)                      ((0x00FF0000&(data))>>16)
#define  OSD_SR_OSD_SR_1_GainY_Ctrl0_get_sr_lpf_gain(data)                       ((0x0000FC00&(data))>>10)
#define  OSD_SR_OSD_SR_1_GainY_Ctrl0_get_sr_by_gain_en(data)                     (0x00000001&(data))

#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0                                          0x18029434
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_reg_addr                                  "0xB8029434"
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_reg                                       0xB8029434
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_inst_addr                                 "0x0007"
#define  set_OSD_SR_OSD_SR_1_GainMap_Ctrl0_reg(data)                             (*((volatile unsigned int*)OSD_SR_OSD_SR_1_GainMap_Ctrl0_reg)=data)
#define  get_OSD_SR_OSD_SR_1_GainMap_Ctrl0_reg                                   (*((volatile unsigned int*)OSD_SR_OSD_SR_1_GainMap_Ctrl0_reg))
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_sr_lpf_range_thd_shift                    (24)
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_sr_lpf_range_gain_shift                   (19)
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_sr_lpf_range_step_shift                   (17)
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_sr_lpf_range_en_shift                     (16)
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_sr_lpf_edge_thd_shift                     (8)
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_sr_lpf_edge_gain_shift                    (3)
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_sr_lpf_edge_step_shift                    (1)
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_sr_lpf_edge_en_shift                      (0)
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_sr_lpf_range_thd_mask                     (0xFF000000)
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_sr_lpf_range_gain_mask                    (0x00F80000)
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_sr_lpf_range_step_mask                    (0x00060000)
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_sr_lpf_range_en_mask                      (0x00010000)
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_sr_lpf_edge_thd_mask                      (0x0000FF00)
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_sr_lpf_edge_gain_mask                     (0x000000F8)
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_sr_lpf_edge_step_mask                     (0x00000006)
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_sr_lpf_edge_en_mask                       (0x00000001)
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_sr_lpf_range_thd(data)                    (0xFF000000&((data)<<24))
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_sr_lpf_range_gain(data)                   (0x00F80000&((data)<<19))
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_sr_lpf_range_step(data)                   (0x00060000&((data)<<17))
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_sr_lpf_range_en(data)                     (0x00010000&((data)<<16))
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_sr_lpf_edge_thd(data)                     (0x0000FF00&((data)<<8))
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_sr_lpf_edge_gain(data)                    (0x000000F8&((data)<<3))
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_sr_lpf_edge_step(data)                    (0x00000006&((data)<<1))
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_sr_lpf_edge_en(data)                      (0x00000001&(data))
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_get_sr_lpf_range_thd(data)                ((0xFF000000&(data))>>24)
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_get_sr_lpf_range_gain(data)               ((0x00F80000&(data))>>19)
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_get_sr_lpf_range_step(data)               ((0x00060000&(data))>>17)
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_get_sr_lpf_range_en(data)                 ((0x00010000&(data))>>16)
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_get_sr_lpf_edge_thd(data)                 ((0x0000FF00&(data))>>8)
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_get_sr_lpf_edge_gain(data)                ((0x000000F8&(data))>>3)
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_get_sr_lpf_edge_step(data)                ((0x00000006&(data))>>1)
#define  OSD_SR_OSD_SR_1_GainMap_Ctrl0_get_sr_lpf_edge_en(data)                  (0x00000001&(data))

#define  OSD_SR_OSD_SR_1_UDFLOW                                                 0x1802943C
#define  OSD_SR_OSD_SR_1_UDFLOW_reg_addr                                         "0xB802943C"
#define  OSD_SR_OSD_SR_1_UDFLOW_reg                                              0xB802943C
#define  OSD_SR_OSD_SR_1_UDFLOW_inst_addr                                        "0x0008"
#define  set_OSD_SR_OSD_SR_1_UDFLOW_reg(data)                                    (*((volatile unsigned int*)OSD_SR_OSD_SR_1_UDFLOW_reg)=data)
#define  get_OSD_SR_OSD_SR_1_UDFLOW_reg                                          (*((volatile unsigned int*)OSD_SR_OSD_SR_1_UDFLOW_reg))
#define  OSD_SR_OSD_SR_1_UDFLOW_osd_sr_in_udflow_shift                           (0)
#define  OSD_SR_OSD_SR_1_UDFLOW_osd_sr_in_udflow_mask                            (0x00000001)
#define  OSD_SR_OSD_SR_1_UDFLOW_osd_sr_in_udflow(data)                           (0x00000001&(data))
#define  OSD_SR_OSD_SR_1_UDFLOW_get_osd_sr_in_udflow(data)                       (0x00000001&(data))

#define  OSD_SR_OSD_SR_1_Debug0                                                 0x18029440
#define  OSD_SR_OSD_SR_1_Debug0_reg_addr                                         "0xB8029440"
#define  OSD_SR_OSD_SR_1_Debug0_reg                                              0xB8029440
#define  OSD_SR_OSD_SR_1_Debug0_inst_addr                                        "0x0009"
#define  set_OSD_SR_OSD_SR_1_Debug0_reg(data)                                    (*((volatile unsigned int*)OSD_SR_OSD_SR_1_Debug0_reg)=data)
#define  get_OSD_SR_OSD_SR_1_Debug0_reg                                          (*((volatile unsigned int*)OSD_SR_OSD_SR_1_Debug0_reg))
#define  OSD_SR_OSD_SR_1_Debug0_sr_dbg_mode_shift                                (8)
#define  OSD_SR_OSD_SR_1_Debug0_sr_dbg_inv_shift                                 (4)
#define  OSD_SR_OSD_SR_1_Debug0_sr_dbg_en_shift                                  (0)
#define  OSD_SR_OSD_SR_1_Debug0_sr_dbg_mode_mask                                 (0x00000F00)
#define  OSD_SR_OSD_SR_1_Debug0_sr_dbg_inv_mask                                  (0x00000010)
#define  OSD_SR_OSD_SR_1_Debug0_sr_dbg_en_mask                                   (0x00000001)
#define  OSD_SR_OSD_SR_1_Debug0_sr_dbg_mode(data)                                (0x00000F00&((data)<<8))
#define  OSD_SR_OSD_SR_1_Debug0_sr_dbg_inv(data)                                 (0x00000010&((data)<<4))
#define  OSD_SR_OSD_SR_1_Debug0_sr_dbg_en(data)                                  (0x00000001&(data))
#define  OSD_SR_OSD_SR_1_Debug0_get_sr_dbg_mode(data)                            ((0x00000F00&(data))>>8)
#define  OSD_SR_OSD_SR_1_Debug0_get_sr_dbg_inv(data)                             ((0x00000010&(data))>>4)
#define  OSD_SR_OSD_SR_1_Debug0_get_sr_dbg_en(data)                              (0x00000001&(data))

#define  OSD_SR_OSD_SR_1_Debug1                                                 0x18029444
#define  OSD_SR_OSD_SR_1_Debug1_reg_addr                                         "0xB8029444"
#define  OSD_SR_OSD_SR_1_Debug1_reg                                              0xB8029444
#define  OSD_SR_OSD_SR_1_Debug1_inst_addr                                        "0x000A"
#define  set_OSD_SR_OSD_SR_1_Debug1_reg(data)                                    (*((volatile unsigned int*)OSD_SR_OSD_SR_1_Debug1_reg)=data)
#define  get_OSD_SR_OSD_SR_1_Debug1_reg                                          (*((volatile unsigned int*)OSD_SR_OSD_SR_1_Debug1_reg))
#define  OSD_SR_OSD_SR_1_Debug1_sr_dbg_h_sta_shift                               (16)
#define  OSD_SR_OSD_SR_1_Debug1_sr_dbg_h_end_shift                               (0)
#define  OSD_SR_OSD_SR_1_Debug1_sr_dbg_h_sta_mask                                (0x1FFF0000)
#define  OSD_SR_OSD_SR_1_Debug1_sr_dbg_h_end_mask                                (0x00001FFF)
#define  OSD_SR_OSD_SR_1_Debug1_sr_dbg_h_sta(data)                               (0x1FFF0000&((data)<<16))
#define  OSD_SR_OSD_SR_1_Debug1_sr_dbg_h_end(data)                               (0x00001FFF&(data))
#define  OSD_SR_OSD_SR_1_Debug1_get_sr_dbg_h_sta(data)                           ((0x1FFF0000&(data))>>16)
#define  OSD_SR_OSD_SR_1_Debug1_get_sr_dbg_h_end(data)                           (0x00001FFF&(data))

#define  OSD_SR_OSD_SR_1_Debug2                                                 0x18029448
#define  OSD_SR_OSD_SR_1_Debug2_reg_addr                                         "0xB8029448"
#define  OSD_SR_OSD_SR_1_Debug2_reg                                              0xB8029448
#define  OSD_SR_OSD_SR_1_Debug2_inst_addr                                        "0x000B"
#define  set_OSD_SR_OSD_SR_1_Debug2_reg(data)                                    (*((volatile unsigned int*)OSD_SR_OSD_SR_1_Debug2_reg)=data)
#define  get_OSD_SR_OSD_SR_1_Debug2_reg                                          (*((volatile unsigned int*)OSD_SR_OSD_SR_1_Debug2_reg))
#define  OSD_SR_OSD_SR_1_Debug2_sr_dbg_v_sta_shift                               (16)
#define  OSD_SR_OSD_SR_1_Debug2_sr_dbg_v_end_shift                               (0)
#define  OSD_SR_OSD_SR_1_Debug2_sr_dbg_v_sta_mask                                (0x0FFF0000)
#define  OSD_SR_OSD_SR_1_Debug2_sr_dbg_v_end_mask                                (0x00000FFF)
#define  OSD_SR_OSD_SR_1_Debug2_sr_dbg_v_sta(data)                               (0x0FFF0000&((data)<<16))
#define  OSD_SR_OSD_SR_1_Debug2_sr_dbg_v_end(data)                               (0x00000FFF&(data))
#define  OSD_SR_OSD_SR_1_Debug2_get_sr_dbg_v_sta(data)                           ((0x0FFF0000&(data))>>16)
#define  OSD_SR_OSD_SR_1_Debug2_get_sr_dbg_v_end(data)                           (0x00000FFF&(data))

#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl0                                          0x18029480
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl0_reg_addr                                  "0xB8029480"
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl0_reg                                       0xB8029480
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl0_inst_addr                                 "0x000C"
#define  set_OSD_SR_OSD_SR_2_Scaleup_Ctrl0_reg(data)                             (*((volatile unsigned int*)OSD_SR_OSD_SR_2_Scaleup_Ctrl0_reg)=data)
#define  get_OSD_SR_OSD_SR_2_Scaleup_Ctrl0_reg                                   (*((volatile unsigned int*)OSD_SR_OSD_SR_2_Scaleup_Ctrl0_reg))
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl0_v_zoom_en_shift                           (31)
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl0_ver_ini_shift                             (22)
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl0_ver_tap_num_shift                         (20)
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl0_ver_factor_shift                          (0)
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl0_v_zoom_en_mask                            (0x80000000)
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl0_ver_ini_mask                              (0x3FC00000)
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl0_ver_tap_num_mask                          (0x00300000)
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl0_ver_factor_mask                           (0x000FFFFF)
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl0_v_zoom_en(data)                           (0x80000000&((data)<<31))
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl0_ver_ini(data)                             (0x3FC00000&((data)<<22))
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl0_ver_tap_num(data)                         (0x00300000&((data)<<20))
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl0_ver_factor(data)                          (0x000FFFFF&(data))
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl0_get_v_zoom_en(data)                       ((0x80000000&(data))>>31)
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl0_get_ver_ini(data)                         ((0x3FC00000&(data))>>22)
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl0_get_ver_tap_num(data)                     ((0x00300000&(data))>>20)
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl0_get_ver_factor(data)                      (0x000FFFFF&(data))

#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl1                                          0x18029484
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl1_reg_addr                                  "0xB8029484"
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl1_reg                                       0xB8029484
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl1_inst_addr                                 "0x000D"
#define  set_OSD_SR_OSD_SR_2_Scaleup_Ctrl1_reg(data)                             (*((volatile unsigned int*)OSD_SR_OSD_SR_2_Scaleup_Ctrl1_reg)=data)
#define  get_OSD_SR_OSD_SR_2_Scaleup_Ctrl1_reg                                   (*((volatile unsigned int*)OSD_SR_OSD_SR_2_Scaleup_Ctrl1_reg))
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl1_h_zoom_en_shift                           (31)
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl1_hor_ini_shift                             (22)
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl1_hor_factor_shift                          (0)
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl1_h_zoom_en_mask                            (0x80000000)
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl1_hor_ini_mask                              (0x3FC00000)
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl1_hor_factor_mask                           (0x000FFFFF)
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl1_h_zoom_en(data)                           (0x80000000&((data)<<31))
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl1_hor_ini(data)                             (0x3FC00000&((data)<<22))
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl1_hor_factor(data)                          (0x000FFFFF&(data))
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl1_get_h_zoom_en(data)                       ((0x80000000&(data))>>31)
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl1_get_hor_ini(data)                         ((0x3FC00000&(data))>>22)
#define  OSD_SR_OSD_SR_2_Scaleup_Ctrl1_get_hor_factor(data)                      (0x000FFFFF&(data))

#define  OSD_SR_OSD_SR_2_H_Location_Ctrl                                        0x18029488
#define  OSD_SR_OSD_SR_2_H_Location_Ctrl_reg_addr                                "0xB8029488"
#define  OSD_SR_OSD_SR_2_H_Location_Ctrl_reg                                     0xB8029488
#define  OSD_SR_OSD_SR_2_H_Location_Ctrl_inst_addr                               "0x000E"
#define  set_OSD_SR_OSD_SR_2_H_Location_Ctrl_reg(data)                           (*((volatile unsigned int*)OSD_SR_OSD_SR_2_H_Location_Ctrl_reg)=data)
#define  get_OSD_SR_OSD_SR_2_H_Location_Ctrl_reg                                 (*((volatile unsigned int*)OSD_SR_OSD_SR_2_H_Location_Ctrl_reg))
#define  OSD_SR_OSD_SR_2_H_Location_Ctrl_osd_h_sta_shift                         (16)
#define  OSD_SR_OSD_SR_2_H_Location_Ctrl_osd_width_shift                         (0)
#define  OSD_SR_OSD_SR_2_H_Location_Ctrl_osd_h_sta_mask                          (0x1FFF0000)
#define  OSD_SR_OSD_SR_2_H_Location_Ctrl_osd_width_mask                          (0x00001FFF)
#define  OSD_SR_OSD_SR_2_H_Location_Ctrl_osd_h_sta(data)                         (0x1FFF0000&((data)<<16))
#define  OSD_SR_OSD_SR_2_H_Location_Ctrl_osd_width(data)                         (0x00001FFF&(data))
#define  OSD_SR_OSD_SR_2_H_Location_Ctrl_get_osd_h_sta(data)                     ((0x1FFF0000&(data))>>16)
#define  OSD_SR_OSD_SR_2_H_Location_Ctrl_get_osd_width(data)                     (0x00001FFF&(data))

#define  OSD_SR_OSD_SR_2_V_Location_Ctrl                                        0x1802948C
#define  OSD_SR_OSD_SR_2_V_Location_Ctrl_reg_addr                                "0xB802948C"
#define  OSD_SR_OSD_SR_2_V_Location_Ctrl_reg                                     0xB802948C
#define  OSD_SR_OSD_SR_2_V_Location_Ctrl_inst_addr                               "0x000F"
#define  set_OSD_SR_OSD_SR_2_V_Location_Ctrl_reg(data)                           (*((volatile unsigned int*)OSD_SR_OSD_SR_2_V_Location_Ctrl_reg)=data)
#define  get_OSD_SR_OSD_SR_2_V_Location_Ctrl_reg                                 (*((volatile unsigned int*)OSD_SR_OSD_SR_2_V_Location_Ctrl_reg))
#define  OSD_SR_OSD_SR_2_V_Location_Ctrl_osd_v_sta_shift                         (16)
#define  OSD_SR_OSD_SR_2_V_Location_Ctrl_osd_height_shift                        (0)
#define  OSD_SR_OSD_SR_2_V_Location_Ctrl_osd_v_sta_mask                          (0x0FFF0000)
#define  OSD_SR_OSD_SR_2_V_Location_Ctrl_osd_height_mask                         (0x00000FFF)
#define  OSD_SR_OSD_SR_2_V_Location_Ctrl_osd_v_sta(data)                         (0x0FFF0000&((data)<<16))
#define  OSD_SR_OSD_SR_2_V_Location_Ctrl_osd_height(data)                        (0x00000FFF&(data))
#define  OSD_SR_OSD_SR_2_V_Location_Ctrl_get_osd_v_sta(data)                     ((0x0FFF0000&(data))>>16)
#define  OSD_SR_OSD_SR_2_V_Location_Ctrl_get_osd_height(data)                    (0x00000FFF&(data))

#define  OSD_SR_OSD_SR_2_Ctrl                                                   0x18029490
#define  OSD_SR_OSD_SR_2_Ctrl_reg_addr                                           "0xB8029490"
#define  OSD_SR_OSD_SR_2_Ctrl_reg                                                0xB8029490
#define  OSD_SR_OSD_SR_2_Ctrl_inst_addr                                          "0x0010"
#define  set_OSD_SR_OSD_SR_2_Ctrl_reg(data)                                      (*((volatile unsigned int*)OSD_SR_OSD_SR_2_Ctrl_reg)=data)
#define  get_OSD_SR_OSD_SR_2_Ctrl_reg                                            (*((volatile unsigned int*)OSD_SR_OSD_SR_2_Ctrl_reg))
#define  OSD_SR_OSD_SR_2_Ctrl_sr_maxmin_shift_shift                              (24)
#define  OSD_SR_OSD_SR_2_Ctrl_sr_var_thd_shift                                   (16)
#define  OSD_SR_OSD_SR_2_Ctrl_sr_maxmin_limit_en_shift                           (8)
#define  OSD_SR_OSD_SR_2_Ctrl_identity_en_shift                                  (2)
#define  OSD_SR_OSD_SR_2_Ctrl_yuv_data_shift                                     (1)
#define  OSD_SR_OSD_SR_2_Ctrl_irq_udf_en_shift                                   (0)
#define  OSD_SR_OSD_SR_2_Ctrl_sr_maxmin_shift_mask                               (0xFF000000)
#define  OSD_SR_OSD_SR_2_Ctrl_sr_var_thd_mask                                    (0x00FF0000)
#define  OSD_SR_OSD_SR_2_Ctrl_sr_maxmin_limit_en_mask                            (0x00000100)
#define  OSD_SR_OSD_SR_2_Ctrl_identity_en_mask                                   (0x00000004)
#define  OSD_SR_OSD_SR_2_Ctrl_yuv_data_mask                                      (0x00000002)
#define  OSD_SR_OSD_SR_2_Ctrl_irq_udf_en_mask                                    (0x00000001)
#define  OSD_SR_OSD_SR_2_Ctrl_sr_maxmin_shift(data)                              (0xFF000000&((data)<<24))
#define  OSD_SR_OSD_SR_2_Ctrl_sr_var_thd(data)                                   (0x00FF0000&((data)<<16))
#define  OSD_SR_OSD_SR_2_Ctrl_sr_maxmin_limit_en(data)                           (0x00000100&((data)<<8))
#define  OSD_SR_OSD_SR_2_Ctrl_identity_en(data)                                  (0x00000004&((data)<<2))
#define  OSD_SR_OSD_SR_2_Ctrl_yuv_data(data)                                     (0x00000002&((data)<<1))
#define  OSD_SR_OSD_SR_2_Ctrl_irq_udf_en(data)                                   (0x00000001&(data))
#define  OSD_SR_OSD_SR_2_Ctrl_get_sr_maxmin_shift(data)                          ((0xFF000000&(data))>>24)
#define  OSD_SR_OSD_SR_2_Ctrl_get_sr_var_thd(data)                               ((0x00FF0000&(data))>>16)
#define  OSD_SR_OSD_SR_2_Ctrl_get_sr_maxmin_limit_en(data)                       ((0x00000100&(data))>>8)
#define  OSD_SR_OSD_SR_2_Ctrl_get_identity_en(data)                              ((0x00000004&(data))>>2)
#define  OSD_SR_OSD_SR_2_Ctrl_get_yuv_data(data)                                 ((0x00000002&(data))>>1)
#define  OSD_SR_OSD_SR_2_Ctrl_get_irq_udf_en(data)                               (0x00000001&(data))

#define  OSD_SR_OSD_SR_2_Filter_Ctrl0                                           0x1802949C
#define  OSD_SR_OSD_SR_2_Filter_Ctrl0_reg_addr                                   "0xB802949C"
#define  OSD_SR_OSD_SR_2_Filter_Ctrl0_reg                                        0xB802949C
#define  OSD_SR_OSD_SR_2_Filter_Ctrl0_inst_addr                                  "0x0011"
#define  set_OSD_SR_OSD_SR_2_Filter_Ctrl0_reg(data)                              (*((volatile unsigned int*)OSD_SR_OSD_SR_2_Filter_Ctrl0_reg)=data)
#define  get_OSD_SR_OSD_SR_2_Filter_Ctrl0_reg                                    (*((volatile unsigned int*)OSD_SR_OSD_SR_2_Filter_Ctrl0_reg))
#define  OSD_SR_OSD_SR_2_Filter_Ctrl0_sr_delta_gain_shift                        (5)
#define  OSD_SR_OSD_SR_2_Filter_Ctrl0_sr_edge_range_shift                        (4)
#define  OSD_SR_OSD_SR_2_Filter_Ctrl0_sr_lpf_range_shift                         (0)
#define  OSD_SR_OSD_SR_2_Filter_Ctrl0_sr_delta_gain_mask                         (0x00000060)
#define  OSD_SR_OSD_SR_2_Filter_Ctrl0_sr_edge_range_mask                         (0x00000010)
#define  OSD_SR_OSD_SR_2_Filter_Ctrl0_sr_lpf_range_mask                          (0x00000001)
#define  OSD_SR_OSD_SR_2_Filter_Ctrl0_sr_delta_gain(data)                        (0x00000060&((data)<<5))
#define  OSD_SR_OSD_SR_2_Filter_Ctrl0_sr_edge_range(data)                        (0x00000010&((data)<<4))
#define  OSD_SR_OSD_SR_2_Filter_Ctrl0_sr_lpf_range(data)                         (0x00000001&(data))
#define  OSD_SR_OSD_SR_2_Filter_Ctrl0_get_sr_delta_gain(data)                    ((0x00000060&(data))>>5)
#define  OSD_SR_OSD_SR_2_Filter_Ctrl0_get_sr_edge_range(data)                    ((0x00000010&(data))>>4)
#define  OSD_SR_OSD_SR_2_Filter_Ctrl0_get_sr_lpf_range(data)                     (0x00000001&(data))

#define  OSD_SR_OSD_SR_2_GainY_Ctrl0                                            0x180294A0
#define  OSD_SR_OSD_SR_2_GainY_Ctrl0_reg_addr                                    "0xB80294A0"
#define  OSD_SR_OSD_SR_2_GainY_Ctrl0_reg                                         0xB80294A0
#define  OSD_SR_OSD_SR_2_GainY_Ctrl0_inst_addr                                   "0x0012"
#define  set_OSD_SR_OSD_SR_2_GainY_Ctrl0_reg(data)                               (*((volatile unsigned int*)OSD_SR_OSD_SR_2_GainY_Ctrl0_reg)=data)
#define  get_OSD_SR_OSD_SR_2_GainY_Ctrl0_reg                                     (*((volatile unsigned int*)OSD_SR_OSD_SR_2_GainY_Ctrl0_reg))
#define  OSD_SR_OSD_SR_2_GainY_Ctrl0_sr_by_pgain0_shift                          (24)
#define  OSD_SR_OSD_SR_2_GainY_Ctrl0_sr_by_ngain0_shift                          (16)
#define  OSD_SR_OSD_SR_2_GainY_Ctrl0_sr_lpf_gain_shift                           (10)
#define  OSD_SR_OSD_SR_2_GainY_Ctrl0_sr_by_gain_en_shift                         (0)
#define  OSD_SR_OSD_SR_2_GainY_Ctrl0_sr_by_pgain0_mask                           (0xFF000000)
#define  OSD_SR_OSD_SR_2_GainY_Ctrl0_sr_by_ngain0_mask                           (0x00FF0000)
#define  OSD_SR_OSD_SR_2_GainY_Ctrl0_sr_lpf_gain_mask                            (0x0000FC00)
#define  OSD_SR_OSD_SR_2_GainY_Ctrl0_sr_by_gain_en_mask                          (0x00000001)
#define  OSD_SR_OSD_SR_2_GainY_Ctrl0_sr_by_pgain0(data)                          (0xFF000000&((data)<<24))
#define  OSD_SR_OSD_SR_2_GainY_Ctrl0_sr_by_ngain0(data)                          (0x00FF0000&((data)<<16))
#define  OSD_SR_OSD_SR_2_GainY_Ctrl0_sr_lpf_gain(data)                           (0x0000FC00&((data)<<10))
#define  OSD_SR_OSD_SR_2_GainY_Ctrl0_sr_by_gain_en(data)                         (0x00000001&(data))
#define  OSD_SR_OSD_SR_2_GainY_Ctrl0_get_sr_by_pgain0(data)                      ((0xFF000000&(data))>>24)
#define  OSD_SR_OSD_SR_2_GainY_Ctrl0_get_sr_by_ngain0(data)                      ((0x00FF0000&(data))>>16)
#define  OSD_SR_OSD_SR_2_GainY_Ctrl0_get_sr_lpf_gain(data)                       ((0x0000FC00&(data))>>10)
#define  OSD_SR_OSD_SR_2_GainY_Ctrl0_get_sr_by_gain_en(data)                     (0x00000001&(data))

#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0                                          0x180294B4
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_reg_addr                                  "0xB80294B4"
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_reg                                       0xB80294B4
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_inst_addr                                 "0x0013"
#define  set_OSD_SR_OSD_SR_2_GainMap_Ctrl0_reg(data)                             (*((volatile unsigned int*)OSD_SR_OSD_SR_2_GainMap_Ctrl0_reg)=data)
#define  get_OSD_SR_OSD_SR_2_GainMap_Ctrl0_reg                                   (*((volatile unsigned int*)OSD_SR_OSD_SR_2_GainMap_Ctrl0_reg))
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_sr_lpf_range_thd_shift                    (24)
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_sr_lpf_range_gain_shift                   (19)
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_sr_lpf_range_step_shift                   (17)
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_sr_lpf_range_en_shift                     (16)
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_sr_lpf_edge_thd_shift                     (8)
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_sr_lpf_edge_gain_shift                    (3)
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_sr_lpf_edge_step_shift                    (1)
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_sr_lpf_edge_en_shift                      (0)
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_sr_lpf_range_thd_mask                     (0xFF000000)
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_sr_lpf_range_gain_mask                    (0x00F80000)
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_sr_lpf_range_step_mask                    (0x00060000)
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_sr_lpf_range_en_mask                      (0x00010000)
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_sr_lpf_edge_thd_mask                      (0x0000FF00)
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_sr_lpf_edge_gain_mask                     (0x000000F8)
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_sr_lpf_edge_step_mask                     (0x00000006)
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_sr_lpf_edge_en_mask                       (0x00000001)
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_sr_lpf_range_thd(data)                    (0xFF000000&((data)<<24))
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_sr_lpf_range_gain(data)                   (0x00F80000&((data)<<19))
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_sr_lpf_range_step(data)                   (0x00060000&((data)<<17))
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_sr_lpf_range_en(data)                     (0x00010000&((data)<<16))
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_sr_lpf_edge_thd(data)                     (0x0000FF00&((data)<<8))
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_sr_lpf_edge_gain(data)                    (0x000000F8&((data)<<3))
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_sr_lpf_edge_step(data)                    (0x00000006&((data)<<1))
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_sr_lpf_edge_en(data)                      (0x00000001&(data))
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_get_sr_lpf_range_thd(data)                ((0xFF000000&(data))>>24)
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_get_sr_lpf_range_gain(data)               ((0x00F80000&(data))>>19)
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_get_sr_lpf_range_step(data)               ((0x00060000&(data))>>17)
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_get_sr_lpf_range_en(data)                 ((0x00010000&(data))>>16)
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_get_sr_lpf_edge_thd(data)                 ((0x0000FF00&(data))>>8)
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_get_sr_lpf_edge_gain(data)                ((0x000000F8&(data))>>3)
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_get_sr_lpf_edge_step(data)                ((0x00000006&(data))>>1)
#define  OSD_SR_OSD_SR_2_GainMap_Ctrl0_get_sr_lpf_edge_en(data)                  (0x00000001&(data))

#define  OSD_SR_OSD_SR_2_UDFLOW                                                 0x180294BC
#define  OSD_SR_OSD_SR_2_UDFLOW_reg_addr                                         "0xB80294BC"
#define  OSD_SR_OSD_SR_2_UDFLOW_reg                                              0xB80294BC
#define  OSD_SR_OSD_SR_2_UDFLOW_inst_addr                                        "0x0014"
#define  set_OSD_SR_OSD_SR_2_UDFLOW_reg(data)                                    (*((volatile unsigned int*)OSD_SR_OSD_SR_2_UDFLOW_reg)=data)
#define  get_OSD_SR_OSD_SR_2_UDFLOW_reg                                          (*((volatile unsigned int*)OSD_SR_OSD_SR_2_UDFLOW_reg))
#define  OSD_SR_OSD_SR_2_UDFLOW_osd_sr_in_udflow_shift                           (0)
#define  OSD_SR_OSD_SR_2_UDFLOW_osd_sr_in_udflow_mask                            (0x00000001)
#define  OSD_SR_OSD_SR_2_UDFLOW_osd_sr_in_udflow(data)                           (0x00000001&(data))
#define  OSD_SR_OSD_SR_2_UDFLOW_get_osd_sr_in_udflow(data)                       (0x00000001&(data))

#define  OSD_SR_OSD_SR_2_Debug0                                                 0x180294C0
#define  OSD_SR_OSD_SR_2_Debug0_reg_addr                                         "0xB80294C0"
#define  OSD_SR_OSD_SR_2_Debug0_reg                                              0xB80294C0
#define  OSD_SR_OSD_SR_2_Debug0_inst_addr                                        "0x0015"
#define  set_OSD_SR_OSD_SR_2_Debug0_reg(data)                                    (*((volatile unsigned int*)OSD_SR_OSD_SR_2_Debug0_reg)=data)
#define  get_OSD_SR_OSD_SR_2_Debug0_reg                                          (*((volatile unsigned int*)OSD_SR_OSD_SR_2_Debug0_reg))
#define  OSD_SR_OSD_SR_2_Debug0_sr_dbg_mode_shift                                (8)
#define  OSD_SR_OSD_SR_2_Debug0_sr_dbg_inv_shift                                 (4)
#define  OSD_SR_OSD_SR_2_Debug0_sr_dbg_en_shift                                  (0)
#define  OSD_SR_OSD_SR_2_Debug0_sr_dbg_mode_mask                                 (0x00000F00)
#define  OSD_SR_OSD_SR_2_Debug0_sr_dbg_inv_mask                                  (0x00000010)
#define  OSD_SR_OSD_SR_2_Debug0_sr_dbg_en_mask                                   (0x00000001)
#define  OSD_SR_OSD_SR_2_Debug0_sr_dbg_mode(data)                                (0x00000F00&((data)<<8))
#define  OSD_SR_OSD_SR_2_Debug0_sr_dbg_inv(data)                                 (0x00000010&((data)<<4))
#define  OSD_SR_OSD_SR_2_Debug0_sr_dbg_en(data)                                  (0x00000001&(data))
#define  OSD_SR_OSD_SR_2_Debug0_get_sr_dbg_mode(data)                            ((0x00000F00&(data))>>8)
#define  OSD_SR_OSD_SR_2_Debug0_get_sr_dbg_inv(data)                             ((0x00000010&(data))>>4)
#define  OSD_SR_OSD_SR_2_Debug0_get_sr_dbg_en(data)                              (0x00000001&(data))

#define  OSD_SR_OSD_SR_2_Debug1                                                 0x180294C4
#define  OSD_SR_OSD_SR_2_Debug1_reg_addr                                         "0xB80294C4"
#define  OSD_SR_OSD_SR_2_Debug1_reg                                              0xB80294C4
#define  OSD_SR_OSD_SR_2_Debug1_inst_addr                                        "0x0016"
#define  set_OSD_SR_OSD_SR_2_Debug1_reg(data)                                    (*((volatile unsigned int*)OSD_SR_OSD_SR_2_Debug1_reg)=data)
#define  get_OSD_SR_OSD_SR_2_Debug1_reg                                          (*((volatile unsigned int*)OSD_SR_OSD_SR_2_Debug1_reg))
#define  OSD_SR_OSD_SR_2_Debug1_sr_dbg_h_sta_shift                               (16)
#define  OSD_SR_OSD_SR_2_Debug1_sr_dbg_h_end_shift                               (0)
#define  OSD_SR_OSD_SR_2_Debug1_sr_dbg_h_sta_mask                                (0x1FFF0000)
#define  OSD_SR_OSD_SR_2_Debug1_sr_dbg_h_end_mask                                (0x00001FFF)
#define  OSD_SR_OSD_SR_2_Debug1_sr_dbg_h_sta(data)                               (0x1FFF0000&((data)<<16))
#define  OSD_SR_OSD_SR_2_Debug1_sr_dbg_h_end(data)                               (0x00001FFF&(data))
#define  OSD_SR_OSD_SR_2_Debug1_get_sr_dbg_h_sta(data)                           ((0x1FFF0000&(data))>>16)
#define  OSD_SR_OSD_SR_2_Debug1_get_sr_dbg_h_end(data)                           (0x00001FFF&(data))

#define  OSD_SR_OSD_SR_2_Debug2                                                 0x180294C8
#define  OSD_SR_OSD_SR_2_Debug2_reg_addr                                         "0xB80294C8"
#define  OSD_SR_OSD_SR_2_Debug2_reg                                              0xB80294C8
#define  OSD_SR_OSD_SR_2_Debug2_inst_addr                                        "0x0017"
#define  set_OSD_SR_OSD_SR_2_Debug2_reg(data)                                    (*((volatile unsigned int*)OSD_SR_OSD_SR_2_Debug2_reg)=data)
#define  get_OSD_SR_OSD_SR_2_Debug2_reg                                          (*((volatile unsigned int*)OSD_SR_OSD_SR_2_Debug2_reg))
#define  OSD_SR_OSD_SR_2_Debug2_sr_dbg_v_sta_shift                               (16)
#define  OSD_SR_OSD_SR_2_Debug2_sr_dbg_v_end_shift                               (0)
#define  OSD_SR_OSD_SR_2_Debug2_sr_dbg_v_sta_mask                                (0x0FFF0000)
#define  OSD_SR_OSD_SR_2_Debug2_sr_dbg_v_end_mask                                (0x00000FFF)
#define  OSD_SR_OSD_SR_2_Debug2_sr_dbg_v_sta(data)                               (0x0FFF0000&((data)<<16))
#define  OSD_SR_OSD_SR_2_Debug2_sr_dbg_v_end(data)                               (0x00000FFF&(data))
#define  OSD_SR_OSD_SR_2_Debug2_get_sr_dbg_v_sta(data)                           ((0x0FFF0000&(data))>>16)
#define  OSD_SR_OSD_SR_2_Debug2_get_sr_dbg_v_end(data)                           (0x00000FFF&(data))

#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl0                                          0x18029500
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl0_reg_addr                                  "0xB8029500"
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl0_reg                                       0xB8029500
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl0_inst_addr                                 "0x0018"
#define  set_OSD_SR_OSD_SR_3_Scaleup_Ctrl0_reg(data)                             (*((volatile unsigned int*)OSD_SR_OSD_SR_3_Scaleup_Ctrl0_reg)=data)
#define  get_OSD_SR_OSD_SR_3_Scaleup_Ctrl0_reg                                   (*((volatile unsigned int*)OSD_SR_OSD_SR_3_Scaleup_Ctrl0_reg))
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl0_v_zoom_en_shift                           (31)
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl0_ver_ini_shift                             (22)
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl0_ver_tap_num_shift                         (20)
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl0_ver_factor_shift                          (0)
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl0_v_zoom_en_mask                            (0x80000000)
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl0_ver_ini_mask                              (0x3FC00000)
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl0_ver_tap_num_mask                          (0x00300000)
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl0_ver_factor_mask                           (0x000FFFFF)
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl0_v_zoom_en(data)                           (0x80000000&((data)<<31))
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl0_ver_ini(data)                             (0x3FC00000&((data)<<22))
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl0_ver_tap_num(data)                         (0x00300000&((data)<<20))
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl0_ver_factor(data)                          (0x000FFFFF&(data))
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl0_get_v_zoom_en(data)                       ((0x80000000&(data))>>31)
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl0_get_ver_ini(data)                         ((0x3FC00000&(data))>>22)
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl0_get_ver_tap_num(data)                     ((0x00300000&(data))>>20)
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl0_get_ver_factor(data)                      (0x000FFFFF&(data))

#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl1                                          0x18029504
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl1_reg_addr                                  "0xB8029504"
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl1_reg                                       0xB8029504
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl1_inst_addr                                 "0x0019"
#define  set_OSD_SR_OSD_SR_3_Scaleup_Ctrl1_reg(data)                             (*((volatile unsigned int*)OSD_SR_OSD_SR_3_Scaleup_Ctrl1_reg)=data)
#define  get_OSD_SR_OSD_SR_3_Scaleup_Ctrl1_reg                                   (*((volatile unsigned int*)OSD_SR_OSD_SR_3_Scaleup_Ctrl1_reg))
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl1_h_zoom_en_shift                           (31)
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl1_hor_ini_shift                             (22)
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl1_hor_factor_shift                          (0)
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl1_h_zoom_en_mask                            (0x80000000)
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl1_hor_ini_mask                              (0x3FC00000)
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl1_hor_factor_mask                           (0x000FFFFF)
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl1_h_zoom_en(data)                           (0x80000000&((data)<<31))
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl1_hor_ini(data)                             (0x3FC00000&((data)<<22))
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl1_hor_factor(data)                          (0x000FFFFF&(data))
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl1_get_h_zoom_en(data)                       ((0x80000000&(data))>>31)
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl1_get_hor_ini(data)                         ((0x3FC00000&(data))>>22)
#define  OSD_SR_OSD_SR_3_Scaleup_Ctrl1_get_hor_factor(data)                      (0x000FFFFF&(data))

#define  OSD_SR_OSD_SR_3_H_Location_Ctrl                                        0x18029508
#define  OSD_SR_OSD_SR_3_H_Location_Ctrl_reg_addr                                "0xB8029508"
#define  OSD_SR_OSD_SR_3_H_Location_Ctrl_reg                                     0xB8029508
#define  OSD_SR_OSD_SR_3_H_Location_Ctrl_inst_addr                               "0x001A"
#define  set_OSD_SR_OSD_SR_3_H_Location_Ctrl_reg(data)                           (*((volatile unsigned int*)OSD_SR_OSD_SR_3_H_Location_Ctrl_reg)=data)
#define  get_OSD_SR_OSD_SR_3_H_Location_Ctrl_reg                                 (*((volatile unsigned int*)OSD_SR_OSD_SR_3_H_Location_Ctrl_reg))
#define  OSD_SR_OSD_SR_3_H_Location_Ctrl_osd_h_sta_shift                         (16)
#define  OSD_SR_OSD_SR_3_H_Location_Ctrl_osd_width_shift                         (0)
#define  OSD_SR_OSD_SR_3_H_Location_Ctrl_osd_h_sta_mask                          (0x1FFF0000)
#define  OSD_SR_OSD_SR_3_H_Location_Ctrl_osd_width_mask                          (0x00001FFF)
#define  OSD_SR_OSD_SR_3_H_Location_Ctrl_osd_h_sta(data)                         (0x1FFF0000&((data)<<16))
#define  OSD_SR_OSD_SR_3_H_Location_Ctrl_osd_width(data)                         (0x00001FFF&(data))
#define  OSD_SR_OSD_SR_3_H_Location_Ctrl_get_osd_h_sta(data)                     ((0x1FFF0000&(data))>>16)
#define  OSD_SR_OSD_SR_3_H_Location_Ctrl_get_osd_width(data)                     (0x00001FFF&(data))

#define  OSD_SR_OSD_SR_3_V_Location_Ctrl                                        0x1802950C
#define  OSD_SR_OSD_SR_3_V_Location_Ctrl_reg_addr                                "0xB802950C"
#define  OSD_SR_OSD_SR_3_V_Location_Ctrl_reg                                     0xB802950C
#define  OSD_SR_OSD_SR_3_V_Location_Ctrl_inst_addr                               "0x001B"
#define  set_OSD_SR_OSD_SR_3_V_Location_Ctrl_reg(data)                           (*((volatile unsigned int*)OSD_SR_OSD_SR_3_V_Location_Ctrl_reg)=data)
#define  get_OSD_SR_OSD_SR_3_V_Location_Ctrl_reg                                 (*((volatile unsigned int*)OSD_SR_OSD_SR_3_V_Location_Ctrl_reg))
#define  OSD_SR_OSD_SR_3_V_Location_Ctrl_osd_v_sta_shift                         (16)
#define  OSD_SR_OSD_SR_3_V_Location_Ctrl_osd_height_shift                        (0)
#define  OSD_SR_OSD_SR_3_V_Location_Ctrl_osd_v_sta_mask                          (0x0FFF0000)
#define  OSD_SR_OSD_SR_3_V_Location_Ctrl_osd_height_mask                         (0x00000FFF)
#define  OSD_SR_OSD_SR_3_V_Location_Ctrl_osd_v_sta(data)                         (0x0FFF0000&((data)<<16))
#define  OSD_SR_OSD_SR_3_V_Location_Ctrl_osd_height(data)                        (0x00000FFF&(data))
#define  OSD_SR_OSD_SR_3_V_Location_Ctrl_get_osd_v_sta(data)                     ((0x0FFF0000&(data))>>16)
#define  OSD_SR_OSD_SR_3_V_Location_Ctrl_get_osd_height(data)                    (0x00000FFF&(data))

#define  OSD_SR_OSD_SR_3_Ctrl                                                   0x18029510
#define  OSD_SR_OSD_SR_3_Ctrl_reg_addr                                           "0xB8029510"
#define  OSD_SR_OSD_SR_3_Ctrl_reg                                                0xB8029510
#define  OSD_SR_OSD_SR_3_Ctrl_inst_addr                                          "0x001C"
#define  set_OSD_SR_OSD_SR_3_Ctrl_reg(data)                                      (*((volatile unsigned int*)OSD_SR_OSD_SR_3_Ctrl_reg)=data)
#define  get_OSD_SR_OSD_SR_3_Ctrl_reg                                            (*((volatile unsigned int*)OSD_SR_OSD_SR_3_Ctrl_reg))
#define  OSD_SR_OSD_SR_3_Ctrl_sr_maxmin_shift_shift                              (24)
#define  OSD_SR_OSD_SR_3_Ctrl_sr_var_thd_shift                                   (16)
#define  OSD_SR_OSD_SR_3_Ctrl_sr_maxmin_limit_en_shift                           (8)
#define  OSD_SR_OSD_SR_3_Ctrl_yuv_data_shift                                     (1)
#define  OSD_SR_OSD_SR_3_Ctrl_irq_udf_en_shift                                   (0)
#define  OSD_SR_OSD_SR_3_Ctrl_sr_maxmin_shift_mask                               (0xFF000000)
#define  OSD_SR_OSD_SR_3_Ctrl_sr_var_thd_mask                                    (0x00FF0000)
#define  OSD_SR_OSD_SR_3_Ctrl_sr_maxmin_limit_en_mask                            (0x00000100)
#define  OSD_SR_OSD_SR_3_Ctrl_yuv_data_mask                                      (0x00000002)
#define  OSD_SR_OSD_SR_3_Ctrl_irq_udf_en_mask                                    (0x00000001)
#define  OSD_SR_OSD_SR_3_Ctrl_sr_maxmin_shift(data)                              (0xFF000000&((data)<<24))
#define  OSD_SR_OSD_SR_3_Ctrl_sr_var_thd(data)                                   (0x00FF0000&((data)<<16))
#define  OSD_SR_OSD_SR_3_Ctrl_sr_maxmin_limit_en(data)                           (0x00000100&((data)<<8))
#define  OSD_SR_OSD_SR_3_Ctrl_yuv_data(data)                                     (0x00000002&((data)<<1))
#define  OSD_SR_OSD_SR_3_Ctrl_irq_udf_en(data)                                   (0x00000001&(data))
#define  OSD_SR_OSD_SR_3_Ctrl_get_sr_maxmin_shift(data)                          ((0xFF000000&(data))>>24)
#define  OSD_SR_OSD_SR_3_Ctrl_get_sr_var_thd(data)                               ((0x00FF0000&(data))>>16)
#define  OSD_SR_OSD_SR_3_Ctrl_get_sr_maxmin_limit_en(data)                       ((0x00000100&(data))>>8)
#define  OSD_SR_OSD_SR_3_Ctrl_get_yuv_data(data)                                 ((0x00000002&(data))>>1)
#define  OSD_SR_OSD_SR_3_Ctrl_get_irq_udf_en(data)                               (0x00000001&(data))

#define  OSD_SR_OSD_SR_3_Filter_Ctrl0                                           0x1802951C
#define  OSD_SR_OSD_SR_3_Filter_Ctrl0_reg_addr                                   "0xB802951C"
#define  OSD_SR_OSD_SR_3_Filter_Ctrl0_reg                                        0xB802951C
#define  OSD_SR_OSD_SR_3_Filter_Ctrl0_inst_addr                                  "0x001D"
#define  set_OSD_SR_OSD_SR_3_Filter_Ctrl0_reg(data)                              (*((volatile unsigned int*)OSD_SR_OSD_SR_3_Filter_Ctrl0_reg)=data)
#define  get_OSD_SR_OSD_SR_3_Filter_Ctrl0_reg                                    (*((volatile unsigned int*)OSD_SR_OSD_SR_3_Filter_Ctrl0_reg))
#define  OSD_SR_OSD_SR_3_Filter_Ctrl0_sr_delta_gain_shift                        (5)
#define  OSD_SR_OSD_SR_3_Filter_Ctrl0_sr_edge_range_shift                        (4)
#define  OSD_SR_OSD_SR_3_Filter_Ctrl0_sr_lpf_range_shift                         (0)
#define  OSD_SR_OSD_SR_3_Filter_Ctrl0_sr_delta_gain_mask                         (0x00000060)
#define  OSD_SR_OSD_SR_3_Filter_Ctrl0_sr_edge_range_mask                         (0x00000010)
#define  OSD_SR_OSD_SR_3_Filter_Ctrl0_sr_lpf_range_mask                          (0x00000001)
#define  OSD_SR_OSD_SR_3_Filter_Ctrl0_sr_delta_gain(data)                        (0x00000060&((data)<<5))
#define  OSD_SR_OSD_SR_3_Filter_Ctrl0_sr_edge_range(data)                        (0x00000010&((data)<<4))
#define  OSD_SR_OSD_SR_3_Filter_Ctrl0_sr_lpf_range(data)                         (0x00000001&(data))
#define  OSD_SR_OSD_SR_3_Filter_Ctrl0_get_sr_delta_gain(data)                    ((0x00000060&(data))>>5)
#define  OSD_SR_OSD_SR_3_Filter_Ctrl0_get_sr_edge_range(data)                    ((0x00000010&(data))>>4)
#define  OSD_SR_OSD_SR_3_Filter_Ctrl0_get_sr_lpf_range(data)                     (0x00000001&(data))

#define  OSD_SR_OSD_SR_3_GainY_Ctrl0                                            0x18029520
#define  OSD_SR_OSD_SR_3_GainY_Ctrl0_reg_addr                                    "0xB8029520"
#define  OSD_SR_OSD_SR_3_GainY_Ctrl0_reg                                         0xB8029520
#define  OSD_SR_OSD_SR_3_GainY_Ctrl0_inst_addr                                   "0x001E"
#define  set_OSD_SR_OSD_SR_3_GainY_Ctrl0_reg(data)                               (*((volatile unsigned int*)OSD_SR_OSD_SR_3_GainY_Ctrl0_reg)=data)
#define  get_OSD_SR_OSD_SR_3_GainY_Ctrl0_reg                                     (*((volatile unsigned int*)OSD_SR_OSD_SR_3_GainY_Ctrl0_reg))
#define  OSD_SR_OSD_SR_3_GainY_Ctrl0_sr_by_pgain0_shift                          (24)
#define  OSD_SR_OSD_SR_3_GainY_Ctrl0_sr_by_ngain0_shift                          (16)
#define  OSD_SR_OSD_SR_3_GainY_Ctrl0_sr_lpf_gain_shift                           (10)
#define  OSD_SR_OSD_SR_3_GainY_Ctrl0_sr_by_gain_en_shift                         (0)
#define  OSD_SR_OSD_SR_3_GainY_Ctrl0_sr_by_pgain0_mask                           (0xFF000000)
#define  OSD_SR_OSD_SR_3_GainY_Ctrl0_sr_by_ngain0_mask                           (0x00FF0000)
#define  OSD_SR_OSD_SR_3_GainY_Ctrl0_sr_lpf_gain_mask                            (0x0000FC00)
#define  OSD_SR_OSD_SR_3_GainY_Ctrl0_sr_by_gain_en_mask                          (0x00000001)
#define  OSD_SR_OSD_SR_3_GainY_Ctrl0_sr_by_pgain0(data)                          (0xFF000000&((data)<<24))
#define  OSD_SR_OSD_SR_3_GainY_Ctrl0_sr_by_ngain0(data)                          (0x00FF0000&((data)<<16))
#define  OSD_SR_OSD_SR_3_GainY_Ctrl0_sr_lpf_gain(data)                           (0x0000FC00&((data)<<10))
#define  OSD_SR_OSD_SR_3_GainY_Ctrl0_sr_by_gain_en(data)                         (0x00000001&(data))
#define  OSD_SR_OSD_SR_3_GainY_Ctrl0_get_sr_by_pgain0(data)                      ((0xFF000000&(data))>>24)
#define  OSD_SR_OSD_SR_3_GainY_Ctrl0_get_sr_by_ngain0(data)                      ((0x00FF0000&(data))>>16)
#define  OSD_SR_OSD_SR_3_GainY_Ctrl0_get_sr_lpf_gain(data)                       ((0x0000FC00&(data))>>10)
#define  OSD_SR_OSD_SR_3_GainY_Ctrl0_get_sr_by_gain_en(data)                     (0x00000001&(data))

#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0                                          0x18029524
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_reg_addr                                  "0xB8029524"
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_reg                                       0xB8029524
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_inst_addr                                 "0x001F"
#define  set_OSD_SR_OSD_SR_3_GainMap_Ctrl0_reg(data)                             (*((volatile unsigned int*)OSD_SR_OSD_SR_3_GainMap_Ctrl0_reg)=data)
#define  get_OSD_SR_OSD_SR_3_GainMap_Ctrl0_reg                                   (*((volatile unsigned int*)OSD_SR_OSD_SR_3_GainMap_Ctrl0_reg))
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_sr_lpf_range_thd_shift                    (24)
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_sr_lpf_range_gain_shift                   (19)
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_sr_lpf_range_step_shift                   (17)
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_sr_lpf_range_en_shift                     (16)
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_sr_lpf_edge_thd_shift                     (8)
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_sr_lpf_edge_gain_shift                    (3)
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_sr_lpf_edge_step_shift                    (1)
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_sr_lpf_edge_en_shift                      (0)
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_sr_lpf_range_thd_mask                     (0xFF000000)
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_sr_lpf_range_gain_mask                    (0x00F80000)
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_sr_lpf_range_step_mask                    (0x00060000)
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_sr_lpf_range_en_mask                      (0x00010000)
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_sr_lpf_edge_thd_mask                      (0x0000FF00)
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_sr_lpf_edge_gain_mask                     (0x000000F8)
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_sr_lpf_edge_step_mask                     (0x00000006)
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_sr_lpf_edge_en_mask                       (0x00000001)
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_sr_lpf_range_thd(data)                    (0xFF000000&((data)<<24))
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_sr_lpf_range_gain(data)                   (0x00F80000&((data)<<19))
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_sr_lpf_range_step(data)                   (0x00060000&((data)<<17))
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_sr_lpf_range_en(data)                     (0x00010000&((data)<<16))
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_sr_lpf_edge_thd(data)                     (0x0000FF00&((data)<<8))
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_sr_lpf_edge_gain(data)                    (0x000000F8&((data)<<3))
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_sr_lpf_edge_step(data)                    (0x00000006&((data)<<1))
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_sr_lpf_edge_en(data)                      (0x00000001&(data))
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_get_sr_lpf_range_thd(data)                ((0xFF000000&(data))>>24)
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_get_sr_lpf_range_gain(data)               ((0x00F80000&(data))>>19)
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_get_sr_lpf_range_step(data)               ((0x00060000&(data))>>17)
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_get_sr_lpf_range_en(data)                 ((0x00010000&(data))>>16)
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_get_sr_lpf_edge_thd(data)                 ((0x0000FF00&(data))>>8)
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_get_sr_lpf_edge_gain(data)                ((0x000000F8&(data))>>3)
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_get_sr_lpf_edge_step(data)                ((0x00000006&(data))>>1)
#define  OSD_SR_OSD_SR_3_GainMap_Ctrl0_get_sr_lpf_edge_en(data)                  (0x00000001&(data))

#define  OSD_SR_OSD_SR_3_UDFLOW                                                 0x1802953C
#define  OSD_SR_OSD_SR_3_UDFLOW_reg_addr                                         "0xB802953C"
#define  OSD_SR_OSD_SR_3_UDFLOW_reg                                              0xB802953C
#define  OSD_SR_OSD_SR_3_UDFLOW_inst_addr                                        "0x0020"
#define  set_OSD_SR_OSD_SR_3_UDFLOW_reg(data)                                    (*((volatile unsigned int*)OSD_SR_OSD_SR_3_UDFLOW_reg)=data)
#define  get_OSD_SR_OSD_SR_3_UDFLOW_reg                                          (*((volatile unsigned int*)OSD_SR_OSD_SR_3_UDFLOW_reg))
#define  OSD_SR_OSD_SR_3_UDFLOW_osd_sr_in_udflow_shift                           (0)
#define  OSD_SR_OSD_SR_3_UDFLOW_osd_sr_in_udflow_mask                            (0x00000001)
#define  OSD_SR_OSD_SR_3_UDFLOW_osd_sr_in_udflow(data)                           (0x00000001&(data))
#define  OSD_SR_OSD_SR_3_UDFLOW_get_osd_sr_in_udflow(data)                       (0x00000001&(data))

#define  OSD_SR_OSD_SR_3_Debug0                                                 0x18029540
#define  OSD_SR_OSD_SR_3_Debug0_reg_addr                                         "0xB8029540"
#define  OSD_SR_OSD_SR_3_Debug0_reg                                              0xB8029540
#define  OSD_SR_OSD_SR_3_Debug0_inst_addr                                        "0x0021"
#define  set_OSD_SR_OSD_SR_3_Debug0_reg(data)                                    (*((volatile unsigned int*)OSD_SR_OSD_SR_3_Debug0_reg)=data)
#define  get_OSD_SR_OSD_SR_3_Debug0_reg                                          (*((volatile unsigned int*)OSD_SR_OSD_SR_3_Debug0_reg))
#define  OSD_SR_OSD_SR_3_Debug0_sr_dbg_mode_shift                                (8)
#define  OSD_SR_OSD_SR_3_Debug0_sr_dbg_inv_shift                                 (4)
#define  OSD_SR_OSD_SR_3_Debug0_sr_dbg_en_shift                                  (0)
#define  OSD_SR_OSD_SR_3_Debug0_sr_dbg_mode_mask                                 (0x00000F00)
#define  OSD_SR_OSD_SR_3_Debug0_sr_dbg_inv_mask                                  (0x00000010)
#define  OSD_SR_OSD_SR_3_Debug0_sr_dbg_en_mask                                   (0x00000001)
#define  OSD_SR_OSD_SR_3_Debug0_sr_dbg_mode(data)                                (0x00000F00&((data)<<8))
#define  OSD_SR_OSD_SR_3_Debug0_sr_dbg_inv(data)                                 (0x00000010&((data)<<4))
#define  OSD_SR_OSD_SR_3_Debug0_sr_dbg_en(data)                                  (0x00000001&(data))
#define  OSD_SR_OSD_SR_3_Debug0_get_sr_dbg_mode(data)                            ((0x00000F00&(data))>>8)
#define  OSD_SR_OSD_SR_3_Debug0_get_sr_dbg_inv(data)                             ((0x00000010&(data))>>4)
#define  OSD_SR_OSD_SR_3_Debug0_get_sr_dbg_en(data)                              (0x00000001&(data))

#define  OSD_SR_OSD_SR_3_Debug1                                                 0x18029544
#define  OSD_SR_OSD_SR_3_Debug1_reg_addr                                         "0xB8029544"
#define  OSD_SR_OSD_SR_3_Debug1_reg                                              0xB8029544
#define  OSD_SR_OSD_SR_3_Debug1_inst_addr                                        "0x0022"
#define  set_OSD_SR_OSD_SR_3_Debug1_reg(data)                                    (*((volatile unsigned int*)OSD_SR_OSD_SR_3_Debug1_reg)=data)
#define  get_OSD_SR_OSD_SR_3_Debug1_reg                                          (*((volatile unsigned int*)OSD_SR_OSD_SR_3_Debug1_reg))
#define  OSD_SR_OSD_SR_3_Debug1_sr_dbg_h_sta_shift                               (16)
#define  OSD_SR_OSD_SR_3_Debug1_sr_dbg_h_end_shift                               (0)
#define  OSD_SR_OSD_SR_3_Debug1_sr_dbg_h_sta_mask                                (0x1FFF0000)
#define  OSD_SR_OSD_SR_3_Debug1_sr_dbg_h_end_mask                                (0x00001FFF)
#define  OSD_SR_OSD_SR_3_Debug1_sr_dbg_h_sta(data)                               (0x1FFF0000&((data)<<16))
#define  OSD_SR_OSD_SR_3_Debug1_sr_dbg_h_end(data)                               (0x00001FFF&(data))
#define  OSD_SR_OSD_SR_3_Debug1_get_sr_dbg_h_sta(data)                           ((0x1FFF0000&(data))>>16)
#define  OSD_SR_OSD_SR_3_Debug1_get_sr_dbg_h_end(data)                           (0x00001FFF&(data))

#define  OSD_SR_OSD_SR_3_Debug2                                                 0x18029548
#define  OSD_SR_OSD_SR_3_Debug2_reg_addr                                         "0xB8029548"
#define  OSD_SR_OSD_SR_3_Debug2_reg                                              0xB8029548
#define  OSD_SR_OSD_SR_3_Debug2_inst_addr                                        "0x0023"
#define  set_OSD_SR_OSD_SR_3_Debug2_reg(data)                                    (*((volatile unsigned int*)OSD_SR_OSD_SR_3_Debug2_reg)=data)
#define  get_OSD_SR_OSD_SR_3_Debug2_reg                                          (*((volatile unsigned int*)OSD_SR_OSD_SR_3_Debug2_reg))
#define  OSD_SR_OSD_SR_3_Debug2_sr_dbg_v_sta_shift                               (16)
#define  OSD_SR_OSD_SR_3_Debug2_sr_dbg_v_end_shift                               (0)
#define  OSD_SR_OSD_SR_3_Debug2_sr_dbg_v_sta_mask                                (0x0FFF0000)
#define  OSD_SR_OSD_SR_3_Debug2_sr_dbg_v_end_mask                                (0x00000FFF)
#define  OSD_SR_OSD_SR_3_Debug2_sr_dbg_v_sta(data)                               (0x0FFF0000&((data)<<16))
#define  OSD_SR_OSD_SR_3_Debug2_sr_dbg_v_end(data)                               (0x00000FFF&(data))
#define  OSD_SR_OSD_SR_3_Debug2_get_sr_dbg_v_sta(data)                           ((0x0FFF0000&(data))>>16)
#define  OSD_SR_OSD_SR_3_Debug2_get_sr_dbg_v_end(data)                           (0x00000FFF&(data))

#define  OSD_SR_OSD_SR_1_CRC_Ctrl1                                              0x180295A0
#define  OSD_SR_OSD_SR_1_CRC_Ctrl1_reg_addr                                      "0xB80295A0"
#define  OSD_SR_OSD_SR_1_CRC_Ctrl1_reg                                           0xB80295A0
#define  OSD_SR_OSD_SR_1_CRC_Ctrl1_inst_addr                                     "0x0024"
#define  set_OSD_SR_OSD_SR_1_CRC_Ctrl1_reg(data)                                 (*((volatile unsigned int*)OSD_SR_OSD_SR_1_CRC_Ctrl1_reg)=data)
#define  get_OSD_SR_OSD_SR_1_CRC_Ctrl1_reg                                       (*((volatile unsigned int*)OSD_SR_OSD_SR_1_CRC_Ctrl1_reg))
#define  OSD_SR_OSD_SR_1_CRC_Ctrl1_dummy_31_6_shift                              (6)
#define  OSD_SR_OSD_SR_1_CRC_Ctrl1_sr_crc_res_sel_shift                          (4)
#define  OSD_SR_OSD_SR_1_CRC_Ctrl1_sr_crc_auto_cmp_en_shift                      (2)
#define  OSD_SR_OSD_SR_1_CRC_Ctrl1_sr_crc_conti_shift                            (1)
#define  OSD_SR_OSD_SR_1_CRC_Ctrl1_sr_crc_start_shift                            (0)
#define  OSD_SR_OSD_SR_1_CRC_Ctrl1_dummy_31_6_mask                               (0xFFFFFFC0)
#define  OSD_SR_OSD_SR_1_CRC_Ctrl1_sr_crc_res_sel_mask                           (0x00000030)
#define  OSD_SR_OSD_SR_1_CRC_Ctrl1_sr_crc_auto_cmp_en_mask                       (0x00000004)
#define  OSD_SR_OSD_SR_1_CRC_Ctrl1_sr_crc_conti_mask                             (0x00000002)
#define  OSD_SR_OSD_SR_1_CRC_Ctrl1_sr_crc_start_mask                             (0x00000001)
#define  OSD_SR_OSD_SR_1_CRC_Ctrl1_dummy_31_6(data)                              (0xFFFFFFC0&((data)<<6))
#define  OSD_SR_OSD_SR_1_CRC_Ctrl1_sr_crc_res_sel(data)                          (0x00000030&((data)<<4))
#define  OSD_SR_OSD_SR_1_CRC_Ctrl1_sr_crc_auto_cmp_en(data)                      (0x00000004&((data)<<2))
#define  OSD_SR_OSD_SR_1_CRC_Ctrl1_sr_crc_conti(data)                            (0x00000002&((data)<<1))
#define  OSD_SR_OSD_SR_1_CRC_Ctrl1_sr_crc_start(data)                            (0x00000001&(data))
#define  OSD_SR_OSD_SR_1_CRC_Ctrl1_get_dummy_31_6(data)                          ((0xFFFFFFC0&(data))>>6)
#define  OSD_SR_OSD_SR_1_CRC_Ctrl1_get_sr_crc_res_sel(data)                      ((0x00000030&(data))>>4)
#define  OSD_SR_OSD_SR_1_CRC_Ctrl1_get_sr_crc_auto_cmp_en(data)                  ((0x00000004&(data))>>2)
#define  OSD_SR_OSD_SR_1_CRC_Ctrl1_get_sr_crc_conti(data)                        ((0x00000002&(data))>>1)
#define  OSD_SR_OSD_SR_1_CRC_Ctrl1_get_sr_crc_start(data)                        (0x00000001&(data))

#define  OSD_SR_OSD_SR_1_CRC_Result                                             0x180295A4
#define  OSD_SR_OSD_SR_1_CRC_Result_reg_addr                                     "0xB80295A4"
#define  OSD_SR_OSD_SR_1_CRC_Result_reg                                          0xB80295A4
#define  OSD_SR_OSD_SR_1_CRC_Result_inst_addr                                    "0x0025"
#define  set_OSD_SR_OSD_SR_1_CRC_Result_reg(data)                                (*((volatile unsigned int*)OSD_SR_OSD_SR_1_CRC_Result_reg)=data)
#define  get_OSD_SR_OSD_SR_1_CRC_Result_reg                                      (*((volatile unsigned int*)OSD_SR_OSD_SR_1_CRC_Result_reg))
#define  OSD_SR_OSD_SR_1_CRC_Result_sr_crc_result_shift                          (0)
#define  OSD_SR_OSD_SR_1_CRC_Result_sr_crc_result_mask                           (0xFFFFFFFF)
#define  OSD_SR_OSD_SR_1_CRC_Result_sr_crc_result(data)                          (0xFFFFFFFF&(data))
#define  OSD_SR_OSD_SR_1_CRC_Result_get_sr_crc_result(data)                      (0xFFFFFFFF&(data))

#define  OSD_SR_OSD_SR_1_DES_CRC                                                0x180295A8
#define  OSD_SR_OSD_SR_1_DES_CRC_reg_addr                                        "0xB80295A8"
#define  OSD_SR_OSD_SR_1_DES_CRC_reg                                             0xB80295A8
#define  OSD_SR_OSD_SR_1_DES_CRC_inst_addr                                       "0x0026"
#define  set_OSD_SR_OSD_SR_1_DES_CRC_reg(data)                                   (*((volatile unsigned int*)OSD_SR_OSD_SR_1_DES_CRC_reg)=data)
#define  get_OSD_SR_OSD_SR_1_DES_CRC_reg                                         (*((volatile unsigned int*)OSD_SR_OSD_SR_1_DES_CRC_reg))
#define  OSD_SR_OSD_SR_1_DES_CRC_sr_crc_des_shift                                (0)
#define  OSD_SR_OSD_SR_1_DES_CRC_sr_crc_des_mask                                 (0xFFFFFFFF)
#define  OSD_SR_OSD_SR_1_DES_CRC_sr_crc_des(data)                                (0xFFFFFFFF&(data))
#define  OSD_SR_OSD_SR_1_DES_CRC_get_sr_crc_des(data)                            (0xFFFFFFFF&(data))

#define  OSD_SR_OSD_SR_1_CRC_ERR_CNT                                            0x180295AC
#define  OSD_SR_OSD_SR_1_CRC_ERR_CNT_reg_addr                                    "0xB80295AC"
#define  OSD_SR_OSD_SR_1_CRC_ERR_CNT_reg                                         0xB80295AC
#define  OSD_SR_OSD_SR_1_CRC_ERR_CNT_inst_addr                                   "0x0027"
#define  set_OSD_SR_OSD_SR_1_CRC_ERR_CNT_reg(data)                               (*((volatile unsigned int*)OSD_SR_OSD_SR_1_CRC_ERR_CNT_reg)=data)
#define  get_OSD_SR_OSD_SR_1_CRC_ERR_CNT_reg                                     (*((volatile unsigned int*)OSD_SR_OSD_SR_1_CRC_ERR_CNT_reg))
#define  OSD_SR_OSD_SR_1_CRC_ERR_CNT_sr_crc_err_cnt_shift                        (0)
#define  OSD_SR_OSD_SR_1_CRC_ERR_CNT_sr_crc_err_cnt_mask                         (0x0000FFFF)
#define  OSD_SR_OSD_SR_1_CRC_ERR_CNT_sr_crc_err_cnt(data)                        (0x0000FFFF&(data))
#define  OSD_SR_OSD_SR_1_CRC_ERR_CNT_get_sr_crc_err_cnt(data)                    (0x0000FFFF&(data))

#define  OSD_SR_OSD_SR_2_CRC_Ctrl1                                              0x180295B0
#define  OSD_SR_OSD_SR_2_CRC_Ctrl1_reg_addr                                      "0xB80295B0"
#define  OSD_SR_OSD_SR_2_CRC_Ctrl1_reg                                           0xB80295B0
#define  OSD_SR_OSD_SR_2_CRC_Ctrl1_inst_addr                                     "0x0028"
#define  set_OSD_SR_OSD_SR_2_CRC_Ctrl1_reg(data)                                 (*((volatile unsigned int*)OSD_SR_OSD_SR_2_CRC_Ctrl1_reg)=data)
#define  get_OSD_SR_OSD_SR_2_CRC_Ctrl1_reg                                       (*((volatile unsigned int*)OSD_SR_OSD_SR_2_CRC_Ctrl1_reg))
#define  OSD_SR_OSD_SR_2_CRC_Ctrl1_dummy_31_6_shift                              (6)
#define  OSD_SR_OSD_SR_2_CRC_Ctrl1_sr_crc_res_sel_shift                          (4)
#define  OSD_SR_OSD_SR_2_CRC_Ctrl1_sr_crc_auto_cmp_en_shift                      (2)
#define  OSD_SR_OSD_SR_2_CRC_Ctrl1_sr_crc_conti_shift                            (1)
#define  OSD_SR_OSD_SR_2_CRC_Ctrl1_sr_crc_start_shift                            (0)
#define  OSD_SR_OSD_SR_2_CRC_Ctrl1_dummy_31_6_mask                               (0xFFFFFFC0)
#define  OSD_SR_OSD_SR_2_CRC_Ctrl1_sr_crc_res_sel_mask                           (0x00000030)
#define  OSD_SR_OSD_SR_2_CRC_Ctrl1_sr_crc_auto_cmp_en_mask                       (0x00000004)
#define  OSD_SR_OSD_SR_2_CRC_Ctrl1_sr_crc_conti_mask                             (0x00000002)
#define  OSD_SR_OSD_SR_2_CRC_Ctrl1_sr_crc_start_mask                             (0x00000001)
#define  OSD_SR_OSD_SR_2_CRC_Ctrl1_dummy_31_6(data)                              (0xFFFFFFC0&((data)<<6))
#define  OSD_SR_OSD_SR_2_CRC_Ctrl1_sr_crc_res_sel(data)                          (0x00000030&((data)<<4))
#define  OSD_SR_OSD_SR_2_CRC_Ctrl1_sr_crc_auto_cmp_en(data)                      (0x00000004&((data)<<2))
#define  OSD_SR_OSD_SR_2_CRC_Ctrl1_sr_crc_conti(data)                            (0x00000002&((data)<<1))
#define  OSD_SR_OSD_SR_2_CRC_Ctrl1_sr_crc_start(data)                            (0x00000001&(data))
#define  OSD_SR_OSD_SR_2_CRC_Ctrl1_get_dummy_31_6(data)                          ((0xFFFFFFC0&(data))>>6)
#define  OSD_SR_OSD_SR_2_CRC_Ctrl1_get_sr_crc_res_sel(data)                      ((0x00000030&(data))>>4)
#define  OSD_SR_OSD_SR_2_CRC_Ctrl1_get_sr_crc_auto_cmp_en(data)                  ((0x00000004&(data))>>2)
#define  OSD_SR_OSD_SR_2_CRC_Ctrl1_get_sr_crc_conti(data)                        ((0x00000002&(data))>>1)
#define  OSD_SR_OSD_SR_2_CRC_Ctrl1_get_sr_crc_start(data)                        (0x00000001&(data))

#define  OSD_SR_OSD_SR_2_CRC_Result                                             0x180295B4
#define  OSD_SR_OSD_SR_2_CRC_Result_reg_addr                                     "0xB80295B4"
#define  OSD_SR_OSD_SR_2_CRC_Result_reg                                          0xB80295B4
#define  OSD_SR_OSD_SR_2_CRC_Result_inst_addr                                    "0x0029"
#define  set_OSD_SR_OSD_SR_2_CRC_Result_reg(data)                                (*((volatile unsigned int*)OSD_SR_OSD_SR_2_CRC_Result_reg)=data)
#define  get_OSD_SR_OSD_SR_2_CRC_Result_reg                                      (*((volatile unsigned int*)OSD_SR_OSD_SR_2_CRC_Result_reg))
#define  OSD_SR_OSD_SR_2_CRC_Result_sr_crc_result_shift                          (0)
#define  OSD_SR_OSD_SR_2_CRC_Result_sr_crc_result_mask                           (0xFFFFFFFF)
#define  OSD_SR_OSD_SR_2_CRC_Result_sr_crc_result(data)                          (0xFFFFFFFF&(data))
#define  OSD_SR_OSD_SR_2_CRC_Result_get_sr_crc_result(data)                      (0xFFFFFFFF&(data))

#define  OSD_SR_OSD_SR_2_DES_CRC                                                0x180295B8
#define  OSD_SR_OSD_SR_2_DES_CRC_reg_addr                                        "0xB80295B8"
#define  OSD_SR_OSD_SR_2_DES_CRC_reg                                             0xB80295B8
#define  OSD_SR_OSD_SR_2_DES_CRC_inst_addr                                       "0x002A"
#define  set_OSD_SR_OSD_SR_2_DES_CRC_reg(data)                                   (*((volatile unsigned int*)OSD_SR_OSD_SR_2_DES_CRC_reg)=data)
#define  get_OSD_SR_OSD_SR_2_DES_CRC_reg                                         (*((volatile unsigned int*)OSD_SR_OSD_SR_2_DES_CRC_reg))
#define  OSD_SR_OSD_SR_2_DES_CRC_sr_crc_des_shift                                (0)
#define  OSD_SR_OSD_SR_2_DES_CRC_sr_crc_des_mask                                 (0xFFFFFFFF)
#define  OSD_SR_OSD_SR_2_DES_CRC_sr_crc_des(data)                                (0xFFFFFFFF&(data))
#define  OSD_SR_OSD_SR_2_DES_CRC_get_sr_crc_des(data)                            (0xFFFFFFFF&(data))

#define  OSD_SR_OSD_SR_2_CRC_ERR_CNT                                            0x180295BC
#define  OSD_SR_OSD_SR_2_CRC_ERR_CNT_reg_addr                                    "0xB80295BC"
#define  OSD_SR_OSD_SR_2_CRC_ERR_CNT_reg                                         0xB80295BC
#define  OSD_SR_OSD_SR_2_CRC_ERR_CNT_inst_addr                                   "0x002B"
#define  set_OSD_SR_OSD_SR_2_CRC_ERR_CNT_reg(data)                               (*((volatile unsigned int*)OSD_SR_OSD_SR_2_CRC_ERR_CNT_reg)=data)
#define  get_OSD_SR_OSD_SR_2_CRC_ERR_CNT_reg                                     (*((volatile unsigned int*)OSD_SR_OSD_SR_2_CRC_ERR_CNT_reg))
#define  OSD_SR_OSD_SR_2_CRC_ERR_CNT_sr_crc_err_cnt_shift                        (0)
#define  OSD_SR_OSD_SR_2_CRC_ERR_CNT_sr_crc_err_cnt_mask                         (0x0000FFFF)
#define  OSD_SR_OSD_SR_2_CRC_ERR_CNT_sr_crc_err_cnt(data)                        (0x0000FFFF&(data))
#define  OSD_SR_OSD_SR_2_CRC_ERR_CNT_get_sr_crc_err_cnt(data)                    (0x0000FFFF&(data))

#define  OSD_SR_OSD_SR_3_CRC_Ctrl1                                              0x180295C0
#define  OSD_SR_OSD_SR_3_CRC_Ctrl1_reg_addr                                      "0xB80295C0"
#define  OSD_SR_OSD_SR_3_CRC_Ctrl1_reg                                           0xB80295C0
#define  OSD_SR_OSD_SR_3_CRC_Ctrl1_inst_addr                                     "0x002C"
#define  set_OSD_SR_OSD_SR_3_CRC_Ctrl1_reg(data)                                 (*((volatile unsigned int*)OSD_SR_OSD_SR_3_CRC_Ctrl1_reg)=data)
#define  get_OSD_SR_OSD_SR_3_CRC_Ctrl1_reg                                       (*((volatile unsigned int*)OSD_SR_OSD_SR_3_CRC_Ctrl1_reg))
#define  OSD_SR_OSD_SR_3_CRC_Ctrl1_dummy_31_6_shift                              (6)
#define  OSD_SR_OSD_SR_3_CRC_Ctrl1_sr_crc_res_sel_shift                          (4)
#define  OSD_SR_OSD_SR_3_CRC_Ctrl1_sr_crc_auto_cmp_en_shift                      (2)
#define  OSD_SR_OSD_SR_3_CRC_Ctrl1_sr_crc_conti_shift                            (1)
#define  OSD_SR_OSD_SR_3_CRC_Ctrl1_sr_crc_start_shift                            (0)
#define  OSD_SR_OSD_SR_3_CRC_Ctrl1_dummy_31_6_mask                               (0xFFFFFFC0)
#define  OSD_SR_OSD_SR_3_CRC_Ctrl1_sr_crc_res_sel_mask                           (0x00000030)
#define  OSD_SR_OSD_SR_3_CRC_Ctrl1_sr_crc_auto_cmp_en_mask                       (0x00000004)
#define  OSD_SR_OSD_SR_3_CRC_Ctrl1_sr_crc_conti_mask                             (0x00000002)
#define  OSD_SR_OSD_SR_3_CRC_Ctrl1_sr_crc_start_mask                             (0x00000001)
#define  OSD_SR_OSD_SR_3_CRC_Ctrl1_dummy_31_6(data)                              (0xFFFFFFC0&((data)<<6))
#define  OSD_SR_OSD_SR_3_CRC_Ctrl1_sr_crc_res_sel(data)                          (0x00000030&((data)<<4))
#define  OSD_SR_OSD_SR_3_CRC_Ctrl1_sr_crc_auto_cmp_en(data)                      (0x00000004&((data)<<2))
#define  OSD_SR_OSD_SR_3_CRC_Ctrl1_sr_crc_conti(data)                            (0x00000002&((data)<<1))
#define  OSD_SR_OSD_SR_3_CRC_Ctrl1_sr_crc_start(data)                            (0x00000001&(data))
#define  OSD_SR_OSD_SR_3_CRC_Ctrl1_get_dummy_31_6(data)                          ((0xFFFFFFC0&(data))>>6)
#define  OSD_SR_OSD_SR_3_CRC_Ctrl1_get_sr_crc_res_sel(data)                      ((0x00000030&(data))>>4)
#define  OSD_SR_OSD_SR_3_CRC_Ctrl1_get_sr_crc_auto_cmp_en(data)                  ((0x00000004&(data))>>2)
#define  OSD_SR_OSD_SR_3_CRC_Ctrl1_get_sr_crc_conti(data)                        ((0x00000002&(data))>>1)
#define  OSD_SR_OSD_SR_3_CRC_Ctrl1_get_sr_crc_start(data)                        (0x00000001&(data))

#define  OSD_SR_OSD_SR_3_CRC_Result                                             0x180295C4
#define  OSD_SR_OSD_SR_3_CRC_Result_reg_addr                                     "0xB80295C4"
#define  OSD_SR_OSD_SR_3_CRC_Result_reg                                          0xB80295C4
#define  OSD_SR_OSD_SR_3_CRC_Result_inst_addr                                    "0x002D"
#define  set_OSD_SR_OSD_SR_3_CRC_Result_reg(data)                                (*((volatile unsigned int*)OSD_SR_OSD_SR_3_CRC_Result_reg)=data)
#define  get_OSD_SR_OSD_SR_3_CRC_Result_reg                                      (*((volatile unsigned int*)OSD_SR_OSD_SR_3_CRC_Result_reg))
#define  OSD_SR_OSD_SR_3_CRC_Result_sr_crc_result_shift                          (0)
#define  OSD_SR_OSD_SR_3_CRC_Result_sr_crc_result_mask                           (0xFFFFFFFF)
#define  OSD_SR_OSD_SR_3_CRC_Result_sr_crc_result(data)                          (0xFFFFFFFF&(data))
#define  OSD_SR_OSD_SR_3_CRC_Result_get_sr_crc_result(data)                      (0xFFFFFFFF&(data))

#define  OSD_SR_OSD_SR_3_DES_CRC                                                0x180295C8
#define  OSD_SR_OSD_SR_3_DES_CRC_reg_addr                                        "0xB80295C8"
#define  OSD_SR_OSD_SR_3_DES_CRC_reg                                             0xB80295C8
#define  OSD_SR_OSD_SR_3_DES_CRC_inst_addr                                       "0x002E"
#define  set_OSD_SR_OSD_SR_3_DES_CRC_reg(data)                                   (*((volatile unsigned int*)OSD_SR_OSD_SR_3_DES_CRC_reg)=data)
#define  get_OSD_SR_OSD_SR_3_DES_CRC_reg                                         (*((volatile unsigned int*)OSD_SR_OSD_SR_3_DES_CRC_reg))
#define  OSD_SR_OSD_SR_3_DES_CRC_sr_crc_des_shift                                (0)
#define  OSD_SR_OSD_SR_3_DES_CRC_sr_crc_des_mask                                 (0xFFFFFFFF)
#define  OSD_SR_OSD_SR_3_DES_CRC_sr_crc_des(data)                                (0xFFFFFFFF&(data))
#define  OSD_SR_OSD_SR_3_DES_CRC_get_sr_crc_des(data)                            (0xFFFFFFFF&(data))

#define  OSD_SR_OSD_SR_3_CRC_ERR_CNT                                            0x180295CC
#define  OSD_SR_OSD_SR_3_CRC_ERR_CNT_reg_addr                                    "0xB80295CC"
#define  OSD_SR_OSD_SR_3_CRC_ERR_CNT_reg                                         0xB80295CC
#define  OSD_SR_OSD_SR_3_CRC_ERR_CNT_inst_addr                                   "0x002F"
#define  set_OSD_SR_OSD_SR_3_CRC_ERR_CNT_reg(data)                               (*((volatile unsigned int*)OSD_SR_OSD_SR_3_CRC_ERR_CNT_reg)=data)
#define  get_OSD_SR_OSD_SR_3_CRC_ERR_CNT_reg                                     (*((volatile unsigned int*)OSD_SR_OSD_SR_3_CRC_ERR_CNT_reg))
#define  OSD_SR_OSD_SR_3_CRC_ERR_CNT_sr_crc_err_cnt_shift                        (0)
#define  OSD_SR_OSD_SR_3_CRC_ERR_CNT_sr_crc_err_cnt_mask                         (0x0000FFFF)
#define  OSD_SR_OSD_SR_3_CRC_ERR_CNT_sr_crc_err_cnt(data)                        (0x0000FFFF&(data))
#define  OSD_SR_OSD_SR_3_CRC_ERR_CNT_get_sr_crc_err_cnt(data)                    (0x0000FFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======OSD_SR register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_zoom_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  ver_ini:8;
        RBus_UInt32  ver_tap_num:2;
        RBus_UInt32  ver_factor:20;
    };
}osd_sr_osd_sr_1_scaleup_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h_zoom_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  hor_ini:8;
        RBus_UInt32  res2:2;
        RBus_UInt32  hor_factor:20;
    };
}osd_sr_osd_sr_1_scaleup_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  osd_h_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  osd_width:13;
    };
}osd_sr_osd_sr_1_h_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  osd_v_sta:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  osd_height:12;
    };
}osd_sr_osd_sr_1_v_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_maxmin_shift:8;
        RBus_UInt32  sr_var_thd:8;
        RBus_UInt32  res1:7;
        RBus_UInt32  sr_maxmin_limit_en:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  identity_en:1;
        RBus_UInt32  yuv_data:1;
        RBus_UInt32  irq_udf_en:1;
    };
}osd_sr_osd_sr_1_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  sr_delta_gain:2;
        RBus_UInt32  sr_edge_range:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  sr_lpf_range:1;
    };
}osd_sr_osd_sr_1_filter_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_by_pgain0:8;
        RBus_UInt32  sr_by_ngain0:8;
        RBus_UInt32  sr_lpf_gain:6;
        RBus_UInt32  res1:9;
        RBus_UInt32  sr_by_gain_en:1;
    };
}osd_sr_osd_sr_1_gainy_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_lpf_range_thd:8;
        RBus_UInt32  sr_lpf_range_gain:5;
        RBus_UInt32  sr_lpf_range_step:2;
        RBus_UInt32  sr_lpf_range_en:1;
        RBus_UInt32  sr_lpf_edge_thd:8;
        RBus_UInt32  sr_lpf_edge_gain:5;
        RBus_UInt32  sr_lpf_edge_step:2;
        RBus_UInt32  sr_lpf_edge_en:1;
    };
}osd_sr_osd_sr_1_gainmap_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  osd_sr_in_udflow:1;
    };
}osd_sr_osd_sr_1_udflow_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  sr_dbg_mode:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  sr_dbg_inv:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  sr_dbg_en:1;
    };
}osd_sr_osd_sr_1_debug0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sr_dbg_h_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  sr_dbg_h_end:13;
    };
}osd_sr_osd_sr_1_debug1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  sr_dbg_v_sta:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  sr_dbg_v_end:12;
    };
}osd_sr_osd_sr_1_debug2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_zoom_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  ver_ini:8;
        RBus_UInt32  ver_tap_num:2;
        RBus_UInt32  ver_factor:20;
    };
}osd_sr_osd_sr_2_scaleup_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h_zoom_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  hor_ini:8;
        RBus_UInt32  res2:2;
        RBus_UInt32  hor_factor:20;
    };
}osd_sr_osd_sr_2_scaleup_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  osd_h_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  osd_width:13;
    };
}osd_sr_osd_sr_2_h_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  osd_v_sta:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  osd_height:12;
    };
}osd_sr_osd_sr_2_v_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_maxmin_shift:8;
        RBus_UInt32  sr_var_thd:8;
        RBus_UInt32  res1:7;
        RBus_UInt32  sr_maxmin_limit_en:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  identity_en:1;
        RBus_UInt32  yuv_data:1;
        RBus_UInt32  irq_udf_en:1;
    };
}osd_sr_osd_sr_2_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  sr_delta_gain:2;
        RBus_UInt32  sr_edge_range:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  sr_lpf_range:1;
    };
}osd_sr_osd_sr_2_filter_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_by_pgain0:8;
        RBus_UInt32  sr_by_ngain0:8;
        RBus_UInt32  sr_lpf_gain:6;
        RBus_UInt32  res1:9;
        RBus_UInt32  sr_by_gain_en:1;
    };
}osd_sr_osd_sr_2_gainy_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_lpf_range_thd:8;
        RBus_UInt32  sr_lpf_range_gain:5;
        RBus_UInt32  sr_lpf_range_step:2;
        RBus_UInt32  sr_lpf_range_en:1;
        RBus_UInt32  sr_lpf_edge_thd:8;
        RBus_UInt32  sr_lpf_edge_gain:5;
        RBus_UInt32  sr_lpf_edge_step:2;
        RBus_UInt32  sr_lpf_edge_en:1;
    };
}osd_sr_osd_sr_2_gainmap_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  osd_sr_in_udflow:1;
    };
}osd_sr_osd_sr_2_udflow_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  sr_dbg_mode:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  sr_dbg_inv:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  sr_dbg_en:1;
    };
}osd_sr_osd_sr_2_debug0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sr_dbg_h_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  sr_dbg_h_end:13;
    };
}osd_sr_osd_sr_2_debug1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  sr_dbg_v_sta:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  sr_dbg_v_end:12;
    };
}osd_sr_osd_sr_2_debug2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_zoom_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  ver_ini:8;
        RBus_UInt32  ver_tap_num:2;
        RBus_UInt32  ver_factor:20;
    };
}osd_sr_osd_sr_3_scaleup_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h_zoom_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  hor_ini:8;
        RBus_UInt32  res2:2;
        RBus_UInt32  hor_factor:20;
    };
}osd_sr_osd_sr_3_scaleup_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  osd_h_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  osd_width:13;
    };
}osd_sr_osd_sr_3_h_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  osd_v_sta:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  osd_height:12;
    };
}osd_sr_osd_sr_3_v_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_maxmin_shift:8;
        RBus_UInt32  sr_var_thd:8;
        RBus_UInt32  res1:7;
        RBus_UInt32  sr_maxmin_limit_en:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  yuv_data:1;
        RBus_UInt32  irq_udf_en:1;
    };
}osd_sr_osd_sr_3_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  sr_delta_gain:2;
        RBus_UInt32  sr_edge_range:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  sr_lpf_range:1;
    };
}osd_sr_osd_sr_3_filter_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_by_pgain0:8;
        RBus_UInt32  sr_by_ngain0:8;
        RBus_UInt32  sr_lpf_gain:6;
        RBus_UInt32  res1:9;
        RBus_UInt32  sr_by_gain_en:1;
    };
}osd_sr_osd_sr_3_gainy_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_lpf_range_thd:8;
        RBus_UInt32  sr_lpf_range_gain:5;
        RBus_UInt32  sr_lpf_range_step:2;
        RBus_UInt32  sr_lpf_range_en:1;
        RBus_UInt32  sr_lpf_edge_thd:8;
        RBus_UInt32  sr_lpf_edge_gain:5;
        RBus_UInt32  sr_lpf_edge_step:2;
        RBus_UInt32  sr_lpf_edge_en:1;
    };
}osd_sr_osd_sr_3_gainmap_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  osd_sr_in_udflow:1;
    };
}osd_sr_osd_sr_3_udflow_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  sr_dbg_mode:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  sr_dbg_inv:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  sr_dbg_en:1;
    };
}osd_sr_osd_sr_3_debug0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sr_dbg_h_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  sr_dbg_h_end:13;
    };
}osd_sr_osd_sr_3_debug1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  sr_dbg_v_sta:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  sr_dbg_v_end:12;
    };
}osd_sr_osd_sr_3_debug2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180295a0_31_6:26;
        RBus_UInt32  sr_crc_res_sel:2;
        RBus_UInt32  res1:1;
        RBus_UInt32  sr_crc_auto_cmp_en:1;
        RBus_UInt32  sr_crc_conti:1;
        RBus_UInt32  sr_crc_start:1;
    };
}osd_sr_osd_sr_1_crc_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_crc_result:32;
    };
}osd_sr_osd_sr_1_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_crc_des:32;
    };
}osd_sr_osd_sr_1_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  sr_crc_err_cnt:16;
    };
}osd_sr_osd_sr_1_crc_err_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180295b0_31_6:26;
        RBus_UInt32  sr_crc_res_sel:2;
        RBus_UInt32  res1:1;
        RBus_UInt32  sr_crc_auto_cmp_en:1;
        RBus_UInt32  sr_crc_conti:1;
        RBus_UInt32  sr_crc_start:1;
    };
}osd_sr_osd_sr_2_crc_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_crc_result:32;
    };
}osd_sr_osd_sr_2_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_crc_des:32;
    };
}osd_sr_osd_sr_2_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  sr_crc_err_cnt:16;
    };
}osd_sr_osd_sr_2_crc_err_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180295c0_31_6:26;
        RBus_UInt32  sr_crc_res_sel:2;
        RBus_UInt32  res1:1;
        RBus_UInt32  sr_crc_auto_cmp_en:1;
        RBus_UInt32  sr_crc_conti:1;
        RBus_UInt32  sr_crc_start:1;
    };
}osd_sr_osd_sr_3_crc_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_crc_result:32;
    };
}osd_sr_osd_sr_3_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_crc_des:32;
    };
}osd_sr_osd_sr_3_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  sr_crc_err_cnt:16;
    };
}osd_sr_osd_sr_3_crc_err_cnt_RBUS;

#else //apply LITTLE_ENDIAN

//======OSD_SR register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ver_factor:20;
        RBus_UInt32  ver_tap_num:2;
        RBus_UInt32  ver_ini:8;
        RBus_UInt32  res1:1;
        RBus_UInt32  v_zoom_en:1;
    };
}osd_sr_osd_sr_1_scaleup_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hor_factor:20;
        RBus_UInt32  res1:2;
        RBus_UInt32  hor_ini:8;
        RBus_UInt32  res2:1;
        RBus_UInt32  h_zoom_en:1;
    };
}osd_sr_osd_sr_1_scaleup_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_width:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  osd_h_sta:13;
        RBus_UInt32  res2:3;
    };
}osd_sr_osd_sr_1_h_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_height:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  osd_v_sta:12;
        RBus_UInt32  res2:4;
    };
}osd_sr_osd_sr_1_v_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irq_udf_en:1;
        RBus_UInt32  yuv_data:1;
        RBus_UInt32  identity_en:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  sr_maxmin_limit_en:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  sr_var_thd:8;
        RBus_UInt32  sr_maxmin_shift:8;
    };
}osd_sr_osd_sr_1_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_lpf_range:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  sr_edge_range:1;
        RBus_UInt32  sr_delta_gain:2;
        RBus_UInt32  res2:25;
    };
}osd_sr_osd_sr_1_filter_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_by_gain_en:1;
        RBus_UInt32  res1:9;
        RBus_UInt32  sr_lpf_gain:6;
        RBus_UInt32  sr_by_ngain0:8;
        RBus_UInt32  sr_by_pgain0:8;
    };
}osd_sr_osd_sr_1_gainy_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_lpf_edge_en:1;
        RBus_UInt32  sr_lpf_edge_step:2;
        RBus_UInt32  sr_lpf_edge_gain:5;
        RBus_UInt32  sr_lpf_edge_thd:8;
        RBus_UInt32  sr_lpf_range_en:1;
        RBus_UInt32  sr_lpf_range_step:2;
        RBus_UInt32  sr_lpf_range_gain:5;
        RBus_UInt32  sr_lpf_range_thd:8;
    };
}osd_sr_osd_sr_1_gainmap_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_sr_in_udflow:1;
        RBus_UInt32  res1:31;
    };
}osd_sr_osd_sr_1_udflow_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_dbg_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  sr_dbg_inv:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  sr_dbg_mode:4;
        RBus_UInt32  res3:20;
    };
}osd_sr_osd_sr_1_debug0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_dbg_h_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  sr_dbg_h_sta:13;
        RBus_UInt32  res2:3;
    };
}osd_sr_osd_sr_1_debug1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_dbg_v_end:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  sr_dbg_v_sta:12;
        RBus_UInt32  res2:4;
    };
}osd_sr_osd_sr_1_debug2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ver_factor:20;
        RBus_UInt32  ver_tap_num:2;
        RBus_UInt32  ver_ini:8;
        RBus_UInt32  res1:1;
        RBus_UInt32  v_zoom_en:1;
    };
}osd_sr_osd_sr_2_scaleup_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hor_factor:20;
        RBus_UInt32  res1:2;
        RBus_UInt32  hor_ini:8;
        RBus_UInt32  res2:1;
        RBus_UInt32  h_zoom_en:1;
    };
}osd_sr_osd_sr_2_scaleup_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_width:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  osd_h_sta:13;
        RBus_UInt32  res2:3;
    };
}osd_sr_osd_sr_2_h_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_height:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  osd_v_sta:12;
        RBus_UInt32  res2:4;
    };
}osd_sr_osd_sr_2_v_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irq_udf_en:1;
        RBus_UInt32  yuv_data:1;
        RBus_UInt32  identity_en:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  sr_maxmin_limit_en:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  sr_var_thd:8;
        RBus_UInt32  sr_maxmin_shift:8;
    };
}osd_sr_osd_sr_2_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_lpf_range:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  sr_edge_range:1;
        RBus_UInt32  sr_delta_gain:2;
        RBus_UInt32  res2:25;
    };
}osd_sr_osd_sr_2_filter_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_by_gain_en:1;
        RBus_UInt32  res1:9;
        RBus_UInt32  sr_lpf_gain:6;
        RBus_UInt32  sr_by_ngain0:8;
        RBus_UInt32  sr_by_pgain0:8;
    };
}osd_sr_osd_sr_2_gainy_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_lpf_edge_en:1;
        RBus_UInt32  sr_lpf_edge_step:2;
        RBus_UInt32  sr_lpf_edge_gain:5;
        RBus_UInt32  sr_lpf_edge_thd:8;
        RBus_UInt32  sr_lpf_range_en:1;
        RBus_UInt32  sr_lpf_range_step:2;
        RBus_UInt32  sr_lpf_range_gain:5;
        RBus_UInt32  sr_lpf_range_thd:8;
    };
}osd_sr_osd_sr_2_gainmap_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_sr_in_udflow:1;
        RBus_UInt32  res1:31;
    };
}osd_sr_osd_sr_2_udflow_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_dbg_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  sr_dbg_inv:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  sr_dbg_mode:4;
        RBus_UInt32  res3:20;
    };
}osd_sr_osd_sr_2_debug0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_dbg_h_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  sr_dbg_h_sta:13;
        RBus_UInt32  res2:3;
    };
}osd_sr_osd_sr_2_debug1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_dbg_v_end:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  sr_dbg_v_sta:12;
        RBus_UInt32  res2:4;
    };
}osd_sr_osd_sr_2_debug2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ver_factor:20;
        RBus_UInt32  ver_tap_num:2;
        RBus_UInt32  ver_ini:8;
        RBus_UInt32  res1:1;
        RBus_UInt32  v_zoom_en:1;
    };
}osd_sr_osd_sr_3_scaleup_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hor_factor:20;
        RBus_UInt32  res1:2;
        RBus_UInt32  hor_ini:8;
        RBus_UInt32  res2:1;
        RBus_UInt32  h_zoom_en:1;
    };
}osd_sr_osd_sr_3_scaleup_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_width:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  osd_h_sta:13;
        RBus_UInt32  res2:3;
    };
}osd_sr_osd_sr_3_h_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_height:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  osd_v_sta:12;
        RBus_UInt32  res2:4;
    };
}osd_sr_osd_sr_3_v_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irq_udf_en:1;
        RBus_UInt32  yuv_data:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  sr_maxmin_limit_en:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  sr_var_thd:8;
        RBus_UInt32  sr_maxmin_shift:8;
    };
}osd_sr_osd_sr_3_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_lpf_range:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  sr_edge_range:1;
        RBus_UInt32  sr_delta_gain:2;
        RBus_UInt32  res2:25;
    };
}osd_sr_osd_sr_3_filter_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_by_gain_en:1;
        RBus_UInt32  res1:9;
        RBus_UInt32  sr_lpf_gain:6;
        RBus_UInt32  sr_by_ngain0:8;
        RBus_UInt32  sr_by_pgain0:8;
    };
}osd_sr_osd_sr_3_gainy_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_lpf_edge_en:1;
        RBus_UInt32  sr_lpf_edge_step:2;
        RBus_UInt32  sr_lpf_edge_gain:5;
        RBus_UInt32  sr_lpf_edge_thd:8;
        RBus_UInt32  sr_lpf_range_en:1;
        RBus_UInt32  sr_lpf_range_step:2;
        RBus_UInt32  sr_lpf_range_gain:5;
        RBus_UInt32  sr_lpf_range_thd:8;
    };
}osd_sr_osd_sr_3_gainmap_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_sr_in_udflow:1;
        RBus_UInt32  res1:31;
    };
}osd_sr_osd_sr_3_udflow_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_dbg_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  sr_dbg_inv:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  sr_dbg_mode:4;
        RBus_UInt32  res3:20;
    };
}osd_sr_osd_sr_3_debug0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_dbg_h_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  sr_dbg_h_sta:13;
        RBus_UInt32  res2:3;
    };
}osd_sr_osd_sr_3_debug1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_dbg_v_end:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  sr_dbg_v_sta:12;
        RBus_UInt32  res2:4;
    };
}osd_sr_osd_sr_3_debug2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_crc_start:1;
        RBus_UInt32  sr_crc_conti:1;
        RBus_UInt32  sr_crc_auto_cmp_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  sr_crc_res_sel:2;
        RBus_UInt32  dummy180295a0_31_6:26;
    };
}osd_sr_osd_sr_1_crc_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_crc_result:32;
    };
}osd_sr_osd_sr_1_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_crc_des:32;
    };
}osd_sr_osd_sr_1_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_crc_err_cnt:16;
        RBus_UInt32  res1:16;
    };
}osd_sr_osd_sr_1_crc_err_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_crc_start:1;
        RBus_UInt32  sr_crc_conti:1;
        RBus_UInt32  sr_crc_auto_cmp_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  sr_crc_res_sel:2;
        RBus_UInt32  dummy180295b0_31_6:26;
    };
}osd_sr_osd_sr_2_crc_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_crc_result:32;
    };
}osd_sr_osd_sr_2_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_crc_des:32;
    };
}osd_sr_osd_sr_2_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_crc_err_cnt:16;
        RBus_UInt32  res1:16;
    };
}osd_sr_osd_sr_2_crc_err_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_crc_start:1;
        RBus_UInt32  sr_crc_conti:1;
        RBus_UInt32  sr_crc_auto_cmp_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  sr_crc_res_sel:2;
        RBus_UInt32  dummy180295c0_31_6:26;
    };
}osd_sr_osd_sr_3_crc_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_crc_result:32;
    };
}osd_sr_osd_sr_3_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_crc_des:32;
    };
}osd_sr_osd_sr_3_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_crc_err_cnt:16;
        RBus_UInt32  res1:16;
    };
}osd_sr_osd_sr_3_crc_err_cnt_RBUS;




#endif 


#endif 
