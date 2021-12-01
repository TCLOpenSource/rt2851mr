/**
* @file Merlin5_MEMC_BBD
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_BBD_REG_H_
#define _RBUS_BBD_REG_H_

#include "rbus_types.h"



//  BBD Register Address
#define  BBD_BBD_INPUT_THRESHOLD_CTRL                                           0x18099A00
#define  BBD_BBD_INPUT_THRESHOLD_CTRL_reg_addr                                   "0xB8099A00"
#define  BBD_BBD_INPUT_THRESHOLD_CTRL_reg                                        0xB8099A00
#define  BBD_BBD_INPUT_THRESHOLD_CTRL_inst_addr                                  "0x0000"
#define  set_BBD_BBD_INPUT_THRESHOLD_CTRL_reg(data)                              (*((volatile unsigned int*)BBD_BBD_INPUT_THRESHOLD_CTRL_reg)=data)
#define  get_BBD_BBD_INPUT_THRESHOLD_CTRL_reg                                    (*((volatile unsigned int*)BBD_BBD_INPUT_THRESHOLD_CTRL_reg))
#define  BBD_BBD_INPUT_THRESHOLD_CTRL_ippre_bbd_sram_ls_shift                    (11)
#define  BBD_BBD_INPUT_THRESHOLD_CTRL_bbd_pro_mode_shift                         (8)
#define  BBD_BBD_INPUT_THRESHOLD_CTRL_bbd_black_th_shift                         (0)
#define  BBD_BBD_INPUT_THRESHOLD_CTRL_ippre_bbd_sram_ls_mask                     (0x00000800)
#define  BBD_BBD_INPUT_THRESHOLD_CTRL_bbd_pro_mode_mask                          (0x00000700)
#define  BBD_BBD_INPUT_THRESHOLD_CTRL_bbd_black_th_mask                          (0x000000FF)
#define  BBD_BBD_INPUT_THRESHOLD_CTRL_ippre_bbd_sram_ls(data)                    (0x00000800&((data)<<11))
#define  BBD_BBD_INPUT_THRESHOLD_CTRL_bbd_pro_mode(data)                         (0x00000700&((data)<<8))
#define  BBD_BBD_INPUT_THRESHOLD_CTRL_bbd_black_th(data)                         (0x000000FF&(data))
#define  BBD_BBD_INPUT_THRESHOLD_CTRL_get_ippre_bbd_sram_ls(data)                ((0x00000800&(data))>>11)
#define  BBD_BBD_INPUT_THRESHOLD_CTRL_get_bbd_pro_mode(data)                     ((0x00000700&(data))>>8)
#define  BBD_BBD_INPUT_THRESHOLD_CTRL_get_bbd_black_th(data)                     (0x000000FF&(data))

#define  BBD_BBD_INPUT_H_THRESHOLD_CTRL                                         0x18099A04
#define  BBD_BBD_INPUT_H_THRESHOLD_CTRL_reg_addr                                 "0xB8099A04"
#define  BBD_BBD_INPUT_H_THRESHOLD_CTRL_reg                                      0xB8099A04
#define  BBD_BBD_INPUT_H_THRESHOLD_CTRL_inst_addr                                "0x0001"
#define  set_BBD_BBD_INPUT_H_THRESHOLD_CTRL_reg(data)                            (*((volatile unsigned int*)BBD_BBD_INPUT_H_THRESHOLD_CTRL_reg)=data)
#define  get_BBD_BBD_INPUT_H_THRESHOLD_CTRL_reg                                  (*((volatile unsigned int*)BBD_BBD_INPUT_H_THRESHOLD_CTRL_reg))
#define  BBD_BBD_INPUT_H_THRESHOLD_CTRL_bbd_h_precise_active_th_shift            (16)
#define  BBD_BBD_INPUT_H_THRESHOLD_CTRL_bbd_h_sketchy_active_th_shift            (0)
#define  BBD_BBD_INPUT_H_THRESHOLD_CTRL_bbd_h_precise_active_th_mask             (0x0FFF0000)
#define  BBD_BBD_INPUT_H_THRESHOLD_CTRL_bbd_h_sketchy_active_th_mask             (0x00000FFF)
#define  BBD_BBD_INPUT_H_THRESHOLD_CTRL_bbd_h_precise_active_th(data)            (0x0FFF0000&((data)<<16))
#define  BBD_BBD_INPUT_H_THRESHOLD_CTRL_bbd_h_sketchy_active_th(data)            (0x00000FFF&(data))
#define  BBD_BBD_INPUT_H_THRESHOLD_CTRL_get_bbd_h_precise_active_th(data)        ((0x0FFF0000&(data))>>16)
#define  BBD_BBD_INPUT_H_THRESHOLD_CTRL_get_bbd_h_sketchy_active_th(data)        (0x00000FFF&(data))

#define  BBD_BBD_INPUT_V_THRESHOLD_CTRL                                         0x18099A08
#define  BBD_BBD_INPUT_V_THRESHOLD_CTRL_reg_addr                                 "0xB8099A08"
#define  BBD_BBD_INPUT_V_THRESHOLD_CTRL_reg                                      0xB8099A08
#define  BBD_BBD_INPUT_V_THRESHOLD_CTRL_inst_addr                                "0x0002"
#define  set_BBD_BBD_INPUT_V_THRESHOLD_CTRL_reg(data)                            (*((volatile unsigned int*)BBD_BBD_INPUT_V_THRESHOLD_CTRL_reg)=data)
#define  get_BBD_BBD_INPUT_V_THRESHOLD_CTRL_reg                                  (*((volatile unsigned int*)BBD_BBD_INPUT_V_THRESHOLD_CTRL_reg))
#define  BBD_BBD_INPUT_V_THRESHOLD_CTRL_bbd_v_precise_active_th_shift            (16)
#define  BBD_BBD_INPUT_V_THRESHOLD_CTRL_bbd_v_sketchy_active_th_shift            (0)
#define  BBD_BBD_INPUT_V_THRESHOLD_CTRL_bbd_v_precise_active_th_mask             (0x0FFF0000)
#define  BBD_BBD_INPUT_V_THRESHOLD_CTRL_bbd_v_sketchy_active_th_mask             (0x00000FFF)
#define  BBD_BBD_INPUT_V_THRESHOLD_CTRL_bbd_v_precise_active_th(data)            (0x0FFF0000&((data)<<16))
#define  BBD_BBD_INPUT_V_THRESHOLD_CTRL_bbd_v_sketchy_active_th(data)            (0x00000FFF&(data))
#define  BBD_BBD_INPUT_V_THRESHOLD_CTRL_get_bbd_v_precise_active_th(data)        ((0x0FFF0000&(data))>>16)
#define  BBD_BBD_INPUT_V_THRESHOLD_CTRL_get_bbd_v_sketchy_active_th(data)        (0x00000FFF&(data))

#define  BBD_BBD_WINDOW_START_POINT                                             0x18099A0C
#define  BBD_BBD_WINDOW_START_POINT_reg_addr                                     "0xB8099A0C"
#define  BBD_BBD_WINDOW_START_POINT_reg                                          0xB8099A0C
#define  BBD_BBD_WINDOW_START_POINT_inst_addr                                    "0x0003"
#define  set_BBD_BBD_WINDOW_START_POINT_reg(data)                                (*((volatile unsigned int*)BBD_BBD_WINDOW_START_POINT_reg)=data)
#define  get_BBD_BBD_WINDOW_START_POINT_reg                                      (*((volatile unsigned int*)BBD_BBD_WINDOW_START_POINT_reg))
#define  BBD_BBD_WINDOW_START_POINT_bbd_window_y_start_shift                     (16)
#define  BBD_BBD_WINDOW_START_POINT_bbd_window_x_start_shift                     (0)
#define  BBD_BBD_WINDOW_START_POINT_bbd_window_y_start_mask                      (0x0FFF0000)
#define  BBD_BBD_WINDOW_START_POINT_bbd_window_x_start_mask                      (0x00000FFF)
#define  BBD_BBD_WINDOW_START_POINT_bbd_window_y_start(data)                     (0x0FFF0000&((data)<<16))
#define  BBD_BBD_WINDOW_START_POINT_bbd_window_x_start(data)                     (0x00000FFF&(data))
#define  BBD_BBD_WINDOW_START_POINT_get_bbd_window_y_start(data)                 ((0x0FFF0000&(data))>>16)
#define  BBD_BBD_WINDOW_START_POINT_get_bbd_window_x_start(data)                 (0x00000FFF&(data))

#define  BBD_BBD_WINDOW_END_POINT                                               0x18099A10
#define  BBD_BBD_WINDOW_END_POINT_reg_addr                                       "0xB8099A10"
#define  BBD_BBD_WINDOW_END_POINT_reg                                            0xB8099A10
#define  BBD_BBD_WINDOW_END_POINT_inst_addr                                      "0x0004"
#define  set_BBD_BBD_WINDOW_END_POINT_reg(data)                                  (*((volatile unsigned int*)BBD_BBD_WINDOW_END_POINT_reg)=data)
#define  get_BBD_BBD_WINDOW_END_POINT_reg                                        (*((volatile unsigned int*)BBD_BBD_WINDOW_END_POINT_reg))
#define  BBD_BBD_WINDOW_END_POINT_bbd_window_y_end_shift                         (16)
#define  BBD_BBD_WINDOW_END_POINT_bbd_window_x_end_shift                         (0)
#define  BBD_BBD_WINDOW_END_POINT_bbd_window_y_end_mask                          (0x0FFF0000)
#define  BBD_BBD_WINDOW_END_POINT_bbd_window_x_end_mask                          (0x00000FFF)
#define  BBD_BBD_WINDOW_END_POINT_bbd_window_y_end(data)                         (0x0FFF0000&((data)<<16))
#define  BBD_BBD_WINDOW_END_POINT_bbd_window_x_end(data)                         (0x00000FFF&(data))
#define  BBD_BBD_WINDOW_END_POINT_get_bbd_window_y_end(data)                     ((0x0FFF0000&(data))>>16)
#define  BBD_BBD_WINDOW_END_POINT_get_bbd_window_x_end(data)                     (0x00000FFF&(data))

#define  BBD_BBD_OUTPUT_TOP_ACTIVE_LINE                                         0x18099A14
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_LINE_reg_addr                                 "0xB8099A14"
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_LINE_reg                                      0xB8099A14
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_LINE_inst_addr                                "0x0005"
#define  set_BBD_BBD_OUTPUT_TOP_ACTIVE_LINE_reg(data)                            (*((volatile unsigned int*)BBD_BBD_OUTPUT_TOP_ACTIVE_LINE_reg)=data)
#define  get_BBD_BBD_OUTPUT_TOP_ACTIVE_LINE_reg                                  (*((volatile unsigned int*)BBD_BBD_OUTPUT_TOP_ACTIVE_LINE_reg))
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_LINE_regr_bbd_top_precise_line_valid_shift    (29)
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_LINE_regr_bbd_top_precise_active_line_shift   (16)
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_LINE_regr_bbd_top_sketchy_line_valid_shift    (13)
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_LINE_regr_bbd_top_sketchy_active_line_shift   (0)
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_LINE_regr_bbd_top_precise_line_valid_mask     (0x20000000)
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_LINE_regr_bbd_top_precise_active_line_mask    (0x1FFF0000)
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_LINE_regr_bbd_top_sketchy_line_valid_mask     (0x00002000)
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_LINE_regr_bbd_top_sketchy_active_line_mask    (0x00001FFF)
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_LINE_regr_bbd_top_precise_line_valid(data)    (0x20000000&((data)<<29))
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_LINE_regr_bbd_top_precise_active_line(data)   (0x1FFF0000&((data)<<16))
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_LINE_regr_bbd_top_sketchy_line_valid(data)    (0x00002000&((data)<<13))
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_LINE_regr_bbd_top_sketchy_active_line(data)   (0x00001FFF&(data))
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_LINE_get_regr_bbd_top_precise_line_valid(data) ((0x20000000&(data))>>29)
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_LINE_get_regr_bbd_top_precise_active_line(data) ((0x1FFF0000&(data))>>16)
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_LINE_get_regr_bbd_top_sketchy_line_valid(data) ((0x00002000&(data))>>13)
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_LINE_get_regr_bbd_top_sketchy_active_line(data) (0x00001FFF&(data))

#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE                                      0x18099A18
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_reg_addr                              "0xB8099A18"
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_reg                                   0xB8099A18
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_inst_addr                             "0x0006"
#define  set_BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_reg(data)                         (*((volatile unsigned int*)BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_reg)=data)
#define  get_BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_reg                               (*((volatile unsigned int*)BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_reg))
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_regr_bbd_bottom_precise_line_valid_shift (29)
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_regr_bbd_bottom_precise_active_line_shift (16)
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_regr_bbd_bottom_sketchy_line_valid_shift (13)
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_regr_bbd_bottom_sketchy_active_line_shift (0)
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_regr_bbd_bottom_precise_line_valid_mask (0x20000000)
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_regr_bbd_bottom_precise_active_line_mask (0x1FFF0000)
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_regr_bbd_bottom_sketchy_line_valid_mask (0x00002000)
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_regr_bbd_bottom_sketchy_active_line_mask (0x00001FFF)
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_regr_bbd_bottom_precise_line_valid(data) (0x20000000&((data)<<29))
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_regr_bbd_bottom_precise_active_line(data) (0x1FFF0000&((data)<<16))
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_regr_bbd_bottom_sketchy_line_valid(data) (0x00002000&((data)<<13))
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_regr_bbd_bottom_sketchy_active_line(data) (0x00001FFF&(data))
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_get_regr_bbd_bottom_precise_line_valid(data) ((0x20000000&(data))>>29)
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_get_regr_bbd_bottom_precise_active_line(data) ((0x1FFF0000&(data))>>16)
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_get_regr_bbd_bottom_sketchy_line_valid(data) ((0x00002000&(data))>>13)
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_get_regr_bbd_bottom_sketchy_active_line(data) (0x00001FFF&(data))

#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE                                       0x18099A1C
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_reg_addr                               "0xB8099A1C"
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_reg                                    0xB8099A1C
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_inst_addr                              "0x0007"
#define  set_BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_reg(data)                          (*((volatile unsigned int*)BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_reg)=data)
#define  get_BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_reg                                (*((volatile unsigned int*)BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_reg))
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_regr_bbd_right_line_valid_shift        (29)
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_regr_bbd_right_precise_active_line_shift (16)
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_regr_bbd_right_sketchy_line_valid_shift (13)
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_regr_bbd_right_sketchy_active_line_shift (0)
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_regr_bbd_right_line_valid_mask         (0x20000000)
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_regr_bbd_right_precise_active_line_mask (0x1FFF0000)
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_regr_bbd_right_sketchy_line_valid_mask (0x00002000)
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_regr_bbd_right_sketchy_active_line_mask (0x00001FFF)
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_regr_bbd_right_line_valid(data)        (0x20000000&((data)<<29))
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_regr_bbd_right_precise_active_line(data) (0x1FFF0000&((data)<<16))
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_regr_bbd_right_sketchy_line_valid(data) (0x00002000&((data)<<13))
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_regr_bbd_right_sketchy_active_line(data) (0x00001FFF&(data))
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_get_regr_bbd_right_line_valid(data)    ((0x20000000&(data))>>29)
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_get_regr_bbd_right_precise_active_line(data) ((0x1FFF0000&(data))>>16)
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_get_regr_bbd_right_sketchy_line_valid(data) ((0x00002000&(data))>>13)
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_get_regr_bbd_right_sketchy_active_line(data) (0x00001FFF&(data))

#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE                                        0x18099A20
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_reg_addr                                "0xB8099A20"
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_reg                                     0xB8099A20
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_inst_addr                               "0x0008"
#define  set_BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_reg(data)                           (*((volatile unsigned int*)BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_reg)=data)
#define  get_BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_reg                                 (*((volatile unsigned int*)BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_reg))
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_regr_bbd_left_line_valid_shift          (29)
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_regr_bbd_left_precise_active_line_shift (16)
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_regr_bbd_left_sketchy_line_valid_shift  (13)
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_regr_bbd_left_sketchy_active_line_shift (0)
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_regr_bbd_left_line_valid_mask           (0x20000000)
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_regr_bbd_left_precise_active_line_mask  (0x1FFF0000)
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_regr_bbd_left_sketchy_line_valid_mask   (0x00002000)
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_regr_bbd_left_sketchy_active_line_mask  (0x00001FFF)
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_regr_bbd_left_line_valid(data)          (0x20000000&((data)<<29))
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_regr_bbd_left_precise_active_line(data) (0x1FFF0000&((data)<<16))
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_regr_bbd_left_sketchy_line_valid(data)  (0x00002000&((data)<<13))
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_regr_bbd_left_sketchy_active_line(data) (0x00001FFF&(data))
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_get_regr_bbd_left_line_valid(data)      ((0x20000000&(data))>>29)
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_get_regr_bbd_left_precise_active_line(data) ((0x1FFF0000&(data))>>16)
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_get_regr_bbd_left_sketchy_line_valid(data) ((0x00002000&(data))>>13)
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_get_regr_bbd_left_sketchy_active_line(data) (0x00001FFF&(data))

#define  BBD_BBD_OUTPUT_TOP_ACTIVE_PIXEL_CNT                                    0x18099A24
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_PIXEL_CNT_reg_addr                            "0xB8099A24"
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_PIXEL_CNT_reg                                 0xB8099A24
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_PIXEL_CNT_inst_addr                           "0x0009"
#define  set_BBD_BBD_OUTPUT_TOP_ACTIVE_PIXEL_CNT_reg(data)                       (*((volatile unsigned int*)BBD_BBD_OUTPUT_TOP_ACTIVE_PIXEL_CNT_reg)=data)
#define  get_BBD_BBD_OUTPUT_TOP_ACTIVE_PIXEL_CNT_reg                             (*((volatile unsigned int*)BBD_BBD_OUTPUT_TOP_ACTIVE_PIXEL_CNT_reg))
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_PIXEL_CNT_regr_bbd_top_precise_active_cnt_shift (16)
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_PIXEL_CNT_regr_bbd_top_sketchy_active_cnt_shift (0)
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_PIXEL_CNT_regr_bbd_top_precise_active_cnt_mask (0x0FFF0000)
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_PIXEL_CNT_regr_bbd_top_sketchy_active_cnt_mask (0x00000FFF)
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_PIXEL_CNT_regr_bbd_top_precise_active_cnt(data) (0x0FFF0000&((data)<<16))
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_PIXEL_CNT_regr_bbd_top_sketchy_active_cnt(data) (0x00000FFF&(data))
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_PIXEL_CNT_get_regr_bbd_top_precise_active_cnt(data) ((0x0FFF0000&(data))>>16)
#define  BBD_BBD_OUTPUT_TOP_ACTIVE_PIXEL_CNT_get_regr_bbd_top_sketchy_active_cnt(data) (0x00000FFF&(data))

#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_CNT                                  0x18099A28
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_CNT_reg_addr                          "0xB8099A28"
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_CNT_reg                               0xB8099A28
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_CNT_inst_addr                         "0x000A"
#define  set_BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_CNT_reg(data)                     (*((volatile unsigned int*)BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_CNT_reg)=data)
#define  get_BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_CNT_reg                           (*((volatile unsigned int*)BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_CNT_reg))
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_CNT_regr_bbd_bottom_precise_active_cnt_shift (16)
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_CNT_regr_bbd_bottom_sketchy_active_cnt_shift (0)
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_CNT_regr_bbd_bottom_precise_active_cnt_mask (0x0FFF0000)
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_CNT_regr_bbd_bottom_sketchy_active_cnt_mask (0x00000FFF)
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_CNT_regr_bbd_bottom_precise_active_cnt(data) (0x0FFF0000&((data)<<16))
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_CNT_regr_bbd_bottom_sketchy_active_cnt(data) (0x00000FFF&(data))
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_CNT_get_regr_bbd_bottom_precise_active_cnt(data) ((0x0FFF0000&(data))>>16)
#define  BBD_BBD_OUTPUT_BOTTOM_ACTIVE_LINE_CNT_get_regr_bbd_bottom_sketchy_active_cnt(data) (0x00000FFF&(data))

#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_CNT                                   0x18099A2C
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_CNT_reg_addr                           "0xB8099A2C"
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_CNT_reg                                0xB8099A2C
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_CNT_inst_addr                          "0x000B"
#define  set_BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_CNT_reg(data)                      (*((volatile unsigned int*)BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_CNT_reg)=data)
#define  get_BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_CNT_reg                            (*((volatile unsigned int*)BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_CNT_reg))
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_CNT_regr_bbd_right_precise_active_cnt_shift (16)
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_CNT_regr_bbd_right_sketchy_active_cnt_shift (0)
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_CNT_regr_bbd_right_precise_active_cnt_mask (0x0FFF0000)
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_CNT_regr_bbd_right_sketchy_active_cnt_mask (0x0000FFFF)
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_CNT_regr_bbd_right_precise_active_cnt(data) (0x0FFF0000&((data)<<16))
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_CNT_regr_bbd_right_sketchy_active_cnt(data) (0x0000FFFF&(data))
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_CNT_get_regr_bbd_right_precise_active_cnt(data) ((0x0FFF0000&(data))>>16)
#define  BBD_BBD_OUTPUT_RIGHT_ACTIVE_LINE_CNT_get_regr_bbd_right_sketchy_active_cnt(data) (0x0000FFFF&(data))

#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_CNT                                    0x18099A30
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_CNT_reg_addr                            "0xB8099A30"
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_CNT_reg                                 0xB8099A30
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_CNT_inst_addr                           "0x000C"
#define  set_BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_CNT_reg(data)                       (*((volatile unsigned int*)BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_CNT_reg)=data)
#define  get_BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_CNT_reg                             (*((volatile unsigned int*)BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_CNT_reg))
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_CNT_regr_bbd_left_precise_active_cnt_shift (16)
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_CNT_regr_bbd_left_sketchy_active_cnt_shift (0)
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_CNT_regr_bbd_left_precise_active_cnt_mask (0x0FFF0000)
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_CNT_regr_bbd_left_sketchy_active_cnt_mask (0x0000FFFF)
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_CNT_regr_bbd_left_precise_active_cnt(data) (0x0FFF0000&((data)<<16))
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_CNT_regr_bbd_left_sketchy_active_cnt(data) (0x0000FFFF&(data))
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_CNT_get_regr_bbd_left_precise_active_cnt(data) ((0x0FFF0000&(data))>>16)
#define  BBD_BBD_OUTPUT_LEFT_ACTIVE_LINE_CNT_get_regr_bbd_left_sketchy_active_cnt(data) (0x0000FFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======BBD register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  ippre_bbd_sram_ls:1;
        RBus_UInt32  bbd_pro_mode:3;
        RBus_UInt32  bbd_black_th:8;
    };
}bbd_bbd_input_threshold_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bbd_h_precise_active_th:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  bbd_h_sketchy_active_th:12;
    };
}bbd_bbd_input_h_threshold_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bbd_v_precise_active_th:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  bbd_v_sketchy_active_th:12;
    };
}bbd_bbd_input_v_threshold_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bbd_window_y_start:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  bbd_window_x_start:12;
    };
}bbd_bbd_window_start_point_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bbd_window_y_end:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  bbd_window_x_end:12;
    };
}bbd_bbd_window_end_point_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_bbd_top_precise_line_valid:1;
        RBus_UInt32  regr_bbd_top_precise_active_line:13;
        RBus_UInt32  res2:2;
        RBus_UInt32  regr_bbd_top_sketchy_line_valid:1;
        RBus_UInt32  regr_bbd_top_sketchy_active_line:13;
    };
}bbd_bbd_output_top_active_line_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_bbd_bottom_precise_line_valid:1;
        RBus_UInt32  regr_bbd_bottom_precise_active_line:13;
        RBus_UInt32  res2:2;
        RBus_UInt32  regr_bbd_bottom_sketchy_line_valid:1;
        RBus_UInt32  regr_bbd_bottom_sketchy_active_line:13;
    };
}bbd_bbd_output_bottom_active_line_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_bbd_right_line_valid:1;
        RBus_UInt32  regr_bbd_right_precise_active_line:13;
        RBus_UInt32  res2:2;
        RBus_UInt32  regr_bbd_right_sketchy_line_valid:1;
        RBus_UInt32  regr_bbd_right_sketchy_active_line:13;
    };
}bbd_bbd_output_right_active_line_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_bbd_left_line_valid:1;
        RBus_UInt32  regr_bbd_left_precise_active_line:13;
        RBus_UInt32  res2:2;
        RBus_UInt32  regr_bbd_left_sketchy_line_valid:1;
        RBus_UInt32  regr_bbd_left_sketchy_active_line:13;
    };
}bbd_bbd_output_left_active_line_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_bbd_top_precise_active_cnt:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  regr_bbd_top_sketchy_active_cnt:12;
    };
}bbd_bbd_output_top_active_pixel_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_bbd_bottom_precise_active_cnt:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  regr_bbd_bottom_sketchy_active_cnt:12;
    };
}bbd_bbd_output_bottom_active_line_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_bbd_right_precise_active_cnt:12;
        RBus_UInt32  regr_bbd_right_sketchy_active_cnt:16;
    };
}bbd_bbd_output_right_active_line_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_bbd_left_precise_active_cnt:12;
        RBus_UInt32  regr_bbd_left_sketchy_active_cnt:16;
    };
}bbd_bbd_output_left_active_line_cnt_RBUS;

#else //apply LITTLE_ENDIAN

//======BBD register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bbd_black_th:8;
        RBus_UInt32  bbd_pro_mode:3;
        RBus_UInt32  ippre_bbd_sram_ls:1;
        RBus_UInt32  res1:20;
    };
}bbd_bbd_input_threshold_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bbd_h_sketchy_active_th:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  bbd_h_precise_active_th:12;
        RBus_UInt32  res2:4;
    };
}bbd_bbd_input_h_threshold_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bbd_v_sketchy_active_th:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  bbd_v_precise_active_th:12;
        RBus_UInt32  res2:4;
    };
}bbd_bbd_input_v_threshold_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bbd_window_x_start:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  bbd_window_y_start:12;
        RBus_UInt32  res2:4;
    };
}bbd_bbd_window_start_point_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bbd_window_x_end:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  bbd_window_y_end:12;
        RBus_UInt32  res2:4;
    };
}bbd_bbd_window_end_point_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_bbd_top_sketchy_active_line:13;
        RBus_UInt32  regr_bbd_top_sketchy_line_valid:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_bbd_top_precise_active_line:13;
        RBus_UInt32  regr_bbd_top_precise_line_valid:1;
        RBus_UInt32  res2:2;
    };
}bbd_bbd_output_top_active_line_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_bbd_bottom_sketchy_active_line:13;
        RBus_UInt32  regr_bbd_bottom_sketchy_line_valid:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_bbd_bottom_precise_active_line:13;
        RBus_UInt32  regr_bbd_bottom_precise_line_valid:1;
        RBus_UInt32  res2:2;
    };
}bbd_bbd_output_bottom_active_line_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_bbd_right_sketchy_active_line:13;
        RBus_UInt32  regr_bbd_right_sketchy_line_valid:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_bbd_right_precise_active_line:13;
        RBus_UInt32  regr_bbd_right_line_valid:1;
        RBus_UInt32  res2:2;
    };
}bbd_bbd_output_right_active_line_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_bbd_left_sketchy_active_line:13;
        RBus_UInt32  regr_bbd_left_sketchy_line_valid:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_bbd_left_precise_active_line:13;
        RBus_UInt32  regr_bbd_left_line_valid:1;
        RBus_UInt32  res2:2;
    };
}bbd_bbd_output_left_active_line_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_bbd_top_sketchy_active_cnt:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_bbd_top_precise_active_cnt:12;
        RBus_UInt32  res2:4;
    };
}bbd_bbd_output_top_active_pixel_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_bbd_bottom_sketchy_active_cnt:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_bbd_bottom_precise_active_cnt:12;
        RBus_UInt32  res2:4;
    };
}bbd_bbd_output_bottom_active_line_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_bbd_right_sketchy_active_cnt:16;
        RBus_UInt32  regr_bbd_right_precise_active_cnt:12;
        RBus_UInt32  res1:4;
    };
}bbd_bbd_output_right_active_line_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_bbd_left_sketchy_active_cnt:16;
        RBus_UInt32  regr_bbd_left_precise_active_cnt:12;
        RBus_UInt32  res1:4;
    };
}bbd_bbd_output_left_active_line_cnt_RBUS;




#endif 


#endif 
