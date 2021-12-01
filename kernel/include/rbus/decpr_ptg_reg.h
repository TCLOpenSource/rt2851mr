/**
* @file Merlin5_MEMC_DECPR_PTG
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_DECPR_PTG_REG_H_
#define _RBUS_DECPR_PTG_REG_H_

#include "rbus_types.h"



//  DECPR_PTG Register Address
#define  DECPR_PTG_PATT_CTRL0                                                   0x18099300
#define  DECPR_PTG_PATT_CTRL0_reg_addr                                           "0xB8099300"
#define  DECPR_PTG_PATT_CTRL0_reg                                                0xB8099300
#define  DECPR_PTG_PATT_CTRL0_inst_addr                                          "0x0000"
#define  set_DECPR_PTG_PATT_CTRL0_reg(data)                                      (*((volatile unsigned int*)DECPR_PTG_PATT_CTRL0_reg)=data)
#define  get_DECPR_PTG_PATT_CTRL0_reg                                            (*((volatile unsigned int*)DECPR_PTG_PATT_CTRL0_reg))
#define  DECPR_PTG_PATT_CTRL0_patt_hf_p_mode_shift                               (21)
#define  DECPR_PTG_PATT_CTRL0_patt_lf_p_mode_shift                               (18)
#define  DECPR_PTG_PATT_CTRL0_patt_hf_i_mode_shift                               (15)
#define  DECPR_PTG_PATT_CTRL0_patt_lf_i_mode_shift                               (12)
#define  DECPR_PTG_PATT_CTRL0_patt_hf_p_timing_shift                             (9)
#define  DECPR_PTG_PATT_CTRL0_patt_lf_p_timing_shift                             (8)
#define  DECPR_PTG_PATT_CTRL0_patt_hf_i_timing_shift                             (7)
#define  DECPR_PTG_PATT_CTRL0_patt_lf_i_timing_shift                             (6)
#define  DECPR_PTG_PATT_CTRL0_patt_hf_p_en_shift                                 (3)
#define  DECPR_PTG_PATT_CTRL0_patt_lf_p_en_shift                                 (2)
#define  DECPR_PTG_PATT_CTRL0_patt_hf_i_en_shift                                 (1)
#define  DECPR_PTG_PATT_CTRL0_patt_lf_i_en_shift                                 (0)
#define  DECPR_PTG_PATT_CTRL0_patt_hf_p_mode_mask                                (0x00E00000)
#define  DECPR_PTG_PATT_CTRL0_patt_lf_p_mode_mask                                (0x001C0000)
#define  DECPR_PTG_PATT_CTRL0_patt_hf_i_mode_mask                                (0x00038000)
#define  DECPR_PTG_PATT_CTRL0_patt_lf_i_mode_mask                                (0x00007000)
#define  DECPR_PTG_PATT_CTRL0_patt_hf_p_timing_mask                              (0x00000200)
#define  DECPR_PTG_PATT_CTRL0_patt_lf_p_timing_mask                              (0x00000100)
#define  DECPR_PTG_PATT_CTRL0_patt_hf_i_timing_mask                              (0x00000080)
#define  DECPR_PTG_PATT_CTRL0_patt_lf_i_timing_mask                              (0x00000040)
#define  DECPR_PTG_PATT_CTRL0_patt_hf_p_en_mask                                  (0x00000008)
#define  DECPR_PTG_PATT_CTRL0_patt_lf_p_en_mask                                  (0x00000004)
#define  DECPR_PTG_PATT_CTRL0_patt_hf_i_en_mask                                  (0x00000002)
#define  DECPR_PTG_PATT_CTRL0_patt_lf_i_en_mask                                  (0x00000001)
#define  DECPR_PTG_PATT_CTRL0_patt_hf_p_mode(data)                               (0x00E00000&((data)<<21))
#define  DECPR_PTG_PATT_CTRL0_patt_lf_p_mode(data)                               (0x001C0000&((data)<<18))
#define  DECPR_PTG_PATT_CTRL0_patt_hf_i_mode(data)                               (0x00038000&((data)<<15))
#define  DECPR_PTG_PATT_CTRL0_patt_lf_i_mode(data)                               (0x00007000&((data)<<12))
#define  DECPR_PTG_PATT_CTRL0_patt_hf_p_timing(data)                             (0x00000200&((data)<<9))
#define  DECPR_PTG_PATT_CTRL0_patt_lf_p_timing(data)                             (0x00000100&((data)<<8))
#define  DECPR_PTG_PATT_CTRL0_patt_hf_i_timing(data)                             (0x00000080&((data)<<7))
#define  DECPR_PTG_PATT_CTRL0_patt_lf_i_timing(data)                             (0x00000040&((data)<<6))
#define  DECPR_PTG_PATT_CTRL0_patt_hf_p_en(data)                                 (0x00000008&((data)<<3))
#define  DECPR_PTG_PATT_CTRL0_patt_lf_p_en(data)                                 (0x00000004&((data)<<2))
#define  DECPR_PTG_PATT_CTRL0_patt_hf_i_en(data)                                 (0x00000002&((data)<<1))
#define  DECPR_PTG_PATT_CTRL0_patt_lf_i_en(data)                                 (0x00000001&(data))
#define  DECPR_PTG_PATT_CTRL0_get_patt_hf_p_mode(data)                           ((0x00E00000&(data))>>21)
#define  DECPR_PTG_PATT_CTRL0_get_patt_lf_p_mode(data)                           ((0x001C0000&(data))>>18)
#define  DECPR_PTG_PATT_CTRL0_get_patt_hf_i_mode(data)                           ((0x00038000&(data))>>15)
#define  DECPR_PTG_PATT_CTRL0_get_patt_lf_i_mode(data)                           ((0x00007000&(data))>>12)
#define  DECPR_PTG_PATT_CTRL0_get_patt_hf_p_timing(data)                         ((0x00000200&(data))>>9)
#define  DECPR_PTG_PATT_CTRL0_get_patt_lf_p_timing(data)                         ((0x00000100&(data))>>8)
#define  DECPR_PTG_PATT_CTRL0_get_patt_hf_i_timing(data)                         ((0x00000080&(data))>>7)
#define  DECPR_PTG_PATT_CTRL0_get_patt_lf_i_timing(data)                         ((0x00000040&(data))>>6)
#define  DECPR_PTG_PATT_CTRL0_get_patt_hf_p_en(data)                             ((0x00000008&(data))>>3)
#define  DECPR_PTG_PATT_CTRL0_get_patt_lf_p_en(data)                             ((0x00000004&(data))>>2)
#define  DECPR_PTG_PATT_CTRL0_get_patt_hf_i_en(data)                             ((0x00000002&(data))>>1)
#define  DECPR_PTG_PATT_CTRL0_get_patt_lf_i_en(data)                             (0x00000001&(data))

#define  DECPR_PTG_PATT_LF_I_POSITION0                                          0x18099304
#define  DECPR_PTG_PATT_LF_I_POSITION0_reg_addr                                  "0xB8099304"
#define  DECPR_PTG_PATT_LF_I_POSITION0_reg                                       0xB8099304
#define  DECPR_PTG_PATT_LF_I_POSITION0_inst_addr                                 "0x0001"
#define  set_DECPR_PTG_PATT_LF_I_POSITION0_reg(data)                             (*((volatile unsigned int*)DECPR_PTG_PATT_LF_I_POSITION0_reg)=data)
#define  get_DECPR_PTG_PATT_LF_I_POSITION0_reg                                   (*((volatile unsigned int*)DECPR_PTG_PATT_LF_I_POSITION0_reg))
#define  DECPR_PTG_PATT_LF_I_POSITION0_patt_lf_i_pos_y0_shift                    (12)
#define  DECPR_PTG_PATT_LF_I_POSITION0_patt_lf_i_pos_x0_shift                    (0)
#define  DECPR_PTG_PATT_LF_I_POSITION0_patt_lf_i_pos_y0_mask                     (0x00FFF000)
#define  DECPR_PTG_PATT_LF_I_POSITION0_patt_lf_i_pos_x0_mask                     (0x00000FFF)
#define  DECPR_PTG_PATT_LF_I_POSITION0_patt_lf_i_pos_y0(data)                    (0x00FFF000&((data)<<12))
#define  DECPR_PTG_PATT_LF_I_POSITION0_patt_lf_i_pos_x0(data)                    (0x00000FFF&(data))
#define  DECPR_PTG_PATT_LF_I_POSITION0_get_patt_lf_i_pos_y0(data)                ((0x00FFF000&(data))>>12)
#define  DECPR_PTG_PATT_LF_I_POSITION0_get_patt_lf_i_pos_x0(data)                (0x00000FFF&(data))

#define  DECPR_PTG_PATT_LF_I_POSITION1                                          0x18099308
#define  DECPR_PTG_PATT_LF_I_POSITION1_reg_addr                                  "0xB8099308"
#define  DECPR_PTG_PATT_LF_I_POSITION1_reg                                       0xB8099308
#define  DECPR_PTG_PATT_LF_I_POSITION1_inst_addr                                 "0x0002"
#define  set_DECPR_PTG_PATT_LF_I_POSITION1_reg(data)                             (*((volatile unsigned int*)DECPR_PTG_PATT_LF_I_POSITION1_reg)=data)
#define  get_DECPR_PTG_PATT_LF_I_POSITION1_reg                                   (*((volatile unsigned int*)DECPR_PTG_PATT_LF_I_POSITION1_reg))
#define  DECPR_PTG_PATT_LF_I_POSITION1_patt_lf_i_pos_y1_shift                    (12)
#define  DECPR_PTG_PATT_LF_I_POSITION1_patt_lf_i_pos_x1_shift                    (0)
#define  DECPR_PTG_PATT_LF_I_POSITION1_patt_lf_i_pos_y1_mask                     (0x00FFF000)
#define  DECPR_PTG_PATT_LF_I_POSITION1_patt_lf_i_pos_x1_mask                     (0x00000FFF)
#define  DECPR_PTG_PATT_LF_I_POSITION1_patt_lf_i_pos_y1(data)                    (0x00FFF000&((data)<<12))
#define  DECPR_PTG_PATT_LF_I_POSITION1_patt_lf_i_pos_x1(data)                    (0x00000FFF&(data))
#define  DECPR_PTG_PATT_LF_I_POSITION1_get_patt_lf_i_pos_y1(data)                ((0x00FFF000&(data))>>12)
#define  DECPR_PTG_PATT_LF_I_POSITION1_get_patt_lf_i_pos_x1(data)                (0x00000FFF&(data))

#define  DECPR_PTG_PATT_HF_I_POSITION0                                          0x1809930C
#define  DECPR_PTG_PATT_HF_I_POSITION0_reg_addr                                  "0xB809930C"
#define  DECPR_PTG_PATT_HF_I_POSITION0_reg                                       0xB809930C
#define  DECPR_PTG_PATT_HF_I_POSITION0_inst_addr                                 "0x0003"
#define  set_DECPR_PTG_PATT_HF_I_POSITION0_reg(data)                             (*((volatile unsigned int*)DECPR_PTG_PATT_HF_I_POSITION0_reg)=data)
#define  get_DECPR_PTG_PATT_HF_I_POSITION0_reg                                   (*((volatile unsigned int*)DECPR_PTG_PATT_HF_I_POSITION0_reg))
#define  DECPR_PTG_PATT_HF_I_POSITION0_patt_hf_i_pos_y0_shift                    (12)
#define  DECPR_PTG_PATT_HF_I_POSITION0_patt_hf_i_pos_x0_shift                    (0)
#define  DECPR_PTG_PATT_HF_I_POSITION0_patt_hf_i_pos_y0_mask                     (0x00FFF000)
#define  DECPR_PTG_PATT_HF_I_POSITION0_patt_hf_i_pos_x0_mask                     (0x00000FFF)
#define  DECPR_PTG_PATT_HF_I_POSITION0_patt_hf_i_pos_y0(data)                    (0x00FFF000&((data)<<12))
#define  DECPR_PTG_PATT_HF_I_POSITION0_patt_hf_i_pos_x0(data)                    (0x00000FFF&(data))
#define  DECPR_PTG_PATT_HF_I_POSITION0_get_patt_hf_i_pos_y0(data)                ((0x00FFF000&(data))>>12)
#define  DECPR_PTG_PATT_HF_I_POSITION0_get_patt_hf_i_pos_x0(data)                (0x00000FFF&(data))

#define  DECPR_PTG_PATT_HF_I_POSITION1                                          0x18099310
#define  DECPR_PTG_PATT_HF_I_POSITION1_reg_addr                                  "0xB8099310"
#define  DECPR_PTG_PATT_HF_I_POSITION1_reg                                       0xB8099310
#define  DECPR_PTG_PATT_HF_I_POSITION1_inst_addr                                 "0x0004"
#define  set_DECPR_PTG_PATT_HF_I_POSITION1_reg(data)                             (*((volatile unsigned int*)DECPR_PTG_PATT_HF_I_POSITION1_reg)=data)
#define  get_DECPR_PTG_PATT_HF_I_POSITION1_reg                                   (*((volatile unsigned int*)DECPR_PTG_PATT_HF_I_POSITION1_reg))
#define  DECPR_PTG_PATT_HF_I_POSITION1_patt_hf_i_pos_y1_shift                    (12)
#define  DECPR_PTG_PATT_HF_I_POSITION1_patt_hf_i_pos_x1_shift                    (0)
#define  DECPR_PTG_PATT_HF_I_POSITION1_patt_hf_i_pos_y1_mask                     (0x00FFF000)
#define  DECPR_PTG_PATT_HF_I_POSITION1_patt_hf_i_pos_x1_mask                     (0x00000FFF)
#define  DECPR_PTG_PATT_HF_I_POSITION1_patt_hf_i_pos_y1(data)                    (0x00FFF000&((data)<<12))
#define  DECPR_PTG_PATT_HF_I_POSITION1_patt_hf_i_pos_x1(data)                    (0x00000FFF&(data))
#define  DECPR_PTG_PATT_HF_I_POSITION1_get_patt_hf_i_pos_y1(data)                ((0x00FFF000&(data))>>12)
#define  DECPR_PTG_PATT_HF_I_POSITION1_get_patt_hf_i_pos_x1(data)                (0x00000FFF&(data))

#define  DECPR_PTG_CPR_PATT_LF_I_SETTING0                                       0x18099314
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING0_reg_addr                               "0xB8099314"
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING0_reg                                    0xB8099314
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING0_inst_addr                              "0x0005"
#define  set_DECPR_PTG_CPR_PATT_LF_I_SETTING0_reg(data)                          (*((volatile unsigned int*)DECPR_PTG_CPR_PATT_LF_I_SETTING0_reg)=data)
#define  get_DECPR_PTG_CPR_PATT_LF_I_SETTING0_reg                                (*((volatile unsigned int*)DECPR_PTG_CPR_PATT_LF_I_SETTING0_reg))
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING0_patt_hf_i_setting_v0_11_shift          (31)
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING0_patt_lf_i_setting_v0_shift             (20)
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING0_patt_lf_i_setting_u0_shift             (10)
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING0_patt_lf_i_setting_y0_shift             (0)
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING0_patt_hf_i_setting_v0_11_mask           (0x80000000)
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING0_patt_lf_i_setting_v0_mask              (0x3FF00000)
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING0_patt_lf_i_setting_u0_mask              (0x000FFC00)
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING0_patt_lf_i_setting_y0_mask              (0x000003FF)
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING0_patt_hf_i_setting_v0_11(data)          (0x80000000&((data)<<31))
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING0_patt_lf_i_setting_v0(data)             (0x3FF00000&((data)<<20))
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING0_patt_lf_i_setting_u0(data)             (0x000FFC00&((data)<<10))
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING0_patt_lf_i_setting_y0(data)             (0x000003FF&(data))
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING0_get_patt_hf_i_setting_v0_11(data)      ((0x80000000&(data))>>31)
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING0_get_patt_lf_i_setting_v0(data)         ((0x3FF00000&(data))>>20)
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING0_get_patt_lf_i_setting_u0(data)         ((0x000FFC00&(data))>>10)
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING0_get_patt_lf_i_setting_y0(data)         (0x000003FF&(data))

#define  DECPR_PTG_CPR_PATT_LF_I_SETTING1                                       0x18099318
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING1_reg_addr                               "0xB8099318"
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING1_reg                                    0xB8099318
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING1_inst_addr                              "0x0006"
#define  set_DECPR_PTG_CPR_PATT_LF_I_SETTING1_reg(data)                          (*((volatile unsigned int*)DECPR_PTG_CPR_PATT_LF_I_SETTING1_reg)=data)
#define  get_DECPR_PTG_CPR_PATT_LF_I_SETTING1_reg                                (*((volatile unsigned int*)DECPR_PTG_CPR_PATT_LF_I_SETTING1_reg))
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING1_patt_hf_i_setting_v1_11_shift          (31)
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING1_patt_lf_i_setting_v1_shift             (20)
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING1_patt_lf_i_setting_u1_shift             (10)
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING1_patt_lf_i_setting_y1_shift             (0)
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING1_patt_hf_i_setting_v1_11_mask           (0x80000000)
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING1_patt_lf_i_setting_v1_mask              (0x3FF00000)
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING1_patt_lf_i_setting_u1_mask              (0x000FFC00)
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING1_patt_lf_i_setting_y1_mask              (0x000003FF)
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING1_patt_hf_i_setting_v1_11(data)          (0x80000000&((data)<<31))
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING1_patt_lf_i_setting_v1(data)             (0x3FF00000&((data)<<20))
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING1_patt_lf_i_setting_u1(data)             (0x000FFC00&((data)<<10))
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING1_patt_lf_i_setting_y1(data)             (0x000003FF&(data))
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING1_get_patt_hf_i_setting_v1_11(data)      ((0x80000000&(data))>>31)
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING1_get_patt_lf_i_setting_v1(data)         ((0x3FF00000&(data))>>20)
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING1_get_patt_lf_i_setting_u1(data)         ((0x000FFC00&(data))>>10)
#define  DECPR_PTG_CPR_PATT_LF_I_SETTING1_get_patt_lf_i_setting_y1(data)         (0x000003FF&(data))

#define  DECPR_PTG_CPR_PATT_HF_I_SETTING0                                       0x1809931C
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING0_reg_addr                               "0xB809931C"
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING0_reg                                    0xB809931C
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING0_inst_addr                              "0x0007"
#define  set_DECPR_PTG_CPR_PATT_HF_I_SETTING0_reg(data)                          (*((volatile unsigned int*)DECPR_PTG_CPR_PATT_HF_I_SETTING0_reg)=data)
#define  get_DECPR_PTG_CPR_PATT_HF_I_SETTING0_reg                                (*((volatile unsigned int*)DECPR_PTG_CPR_PATT_HF_I_SETTING0_reg))
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING0_patt_hf_i_setting_v0_shift             (22)
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING0_patt_hf_i_setting_u0_shift             (11)
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING0_patt_hf_i_setting_y0_shift             (0)
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING0_patt_hf_i_setting_v0_mask              (0xFFC00000)
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING0_patt_hf_i_setting_u0_mask              (0x003FF800)
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING0_patt_hf_i_setting_y0_mask              (0x000007FF)
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING0_patt_hf_i_setting_v0(data)             (0xFFC00000&((data)<<22))
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING0_patt_hf_i_setting_u0(data)             (0x003FF800&((data)<<11))
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING0_patt_hf_i_setting_y0(data)             (0x000007FF&(data))
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING0_get_patt_hf_i_setting_v0(data)         ((0xFFC00000&(data))>>22)
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING0_get_patt_hf_i_setting_u0(data)         ((0x003FF800&(data))>>11)
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING0_get_patt_hf_i_setting_y0(data)         (0x000007FF&(data))

#define  DECPR_PTG_CPR_PATT_HF_I_SETTING1                                       0x18099320
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING1_reg_addr                               "0xB8099320"
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING1_reg                                    0xB8099320
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING1_inst_addr                              "0x0008"
#define  set_DECPR_PTG_CPR_PATT_HF_I_SETTING1_reg(data)                          (*((volatile unsigned int*)DECPR_PTG_CPR_PATT_HF_I_SETTING1_reg)=data)
#define  get_DECPR_PTG_CPR_PATT_HF_I_SETTING1_reg                                (*((volatile unsigned int*)DECPR_PTG_CPR_PATT_HF_I_SETTING1_reg))
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING1_patt_hf_i_setting_v1_shift             (22)
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING1_patt_hf_i_setting_u1_shift             (11)
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING1_patt_hf_i_setting_y1_shift             (0)
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING1_patt_hf_i_setting_v1_mask              (0xFFC00000)
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING1_patt_hf_i_setting_u1_mask              (0x003FF800)
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING1_patt_hf_i_setting_y1_mask              (0x000007FF)
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING1_patt_hf_i_setting_v1(data)             (0xFFC00000&((data)<<22))
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING1_patt_hf_i_setting_u1(data)             (0x003FF800&((data)<<11))
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING1_patt_hf_i_setting_y1(data)             (0x000007FF&(data))
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING1_get_patt_hf_i_setting_v1(data)         ((0xFFC00000&(data))>>22)
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING1_get_patt_hf_i_setting_u1(data)         ((0x003FF800&(data))>>11)
#define  DECPR_PTG_CPR_PATT_HF_I_SETTING1_get_patt_hf_i_setting_y1(data)         (0x000007FF&(data))

#define  DECPR_PTG_PATT_LF_P_POSITION0                                          0x18099324
#define  DECPR_PTG_PATT_LF_P_POSITION0_reg_addr                                  "0xB8099324"
#define  DECPR_PTG_PATT_LF_P_POSITION0_reg                                       0xB8099324
#define  DECPR_PTG_PATT_LF_P_POSITION0_inst_addr                                 "0x0009"
#define  set_DECPR_PTG_PATT_LF_P_POSITION0_reg(data)                             (*((volatile unsigned int*)DECPR_PTG_PATT_LF_P_POSITION0_reg)=data)
#define  get_DECPR_PTG_PATT_LF_P_POSITION0_reg                                   (*((volatile unsigned int*)DECPR_PTG_PATT_LF_P_POSITION0_reg))
#define  DECPR_PTG_PATT_LF_P_POSITION0_patt_lf_p_pos_y0_shift                    (12)
#define  DECPR_PTG_PATT_LF_P_POSITION0_patt_lf_p_pos_x0_shift                    (0)
#define  DECPR_PTG_PATT_LF_P_POSITION0_patt_lf_p_pos_y0_mask                     (0x00FFF000)
#define  DECPR_PTG_PATT_LF_P_POSITION0_patt_lf_p_pos_x0_mask                     (0x00000FFF)
#define  DECPR_PTG_PATT_LF_P_POSITION0_patt_lf_p_pos_y0(data)                    (0x00FFF000&((data)<<12))
#define  DECPR_PTG_PATT_LF_P_POSITION0_patt_lf_p_pos_x0(data)                    (0x00000FFF&(data))
#define  DECPR_PTG_PATT_LF_P_POSITION0_get_patt_lf_p_pos_y0(data)                ((0x00FFF000&(data))>>12)
#define  DECPR_PTG_PATT_LF_P_POSITION0_get_patt_lf_p_pos_x0(data)                (0x00000FFF&(data))

#define  DECPR_PTG_PATT_LF_P_POSITION1                                          0x18099328
#define  DECPR_PTG_PATT_LF_P_POSITION1_reg_addr                                  "0xB8099328"
#define  DECPR_PTG_PATT_LF_P_POSITION1_reg                                       0xB8099328
#define  DECPR_PTG_PATT_LF_P_POSITION1_inst_addr                                 "0x000A"
#define  set_DECPR_PTG_PATT_LF_P_POSITION1_reg(data)                             (*((volatile unsigned int*)DECPR_PTG_PATT_LF_P_POSITION1_reg)=data)
#define  get_DECPR_PTG_PATT_LF_P_POSITION1_reg                                   (*((volatile unsigned int*)DECPR_PTG_PATT_LF_P_POSITION1_reg))
#define  DECPR_PTG_PATT_LF_P_POSITION1_patt_lf_p_pos_y1_shift                    (12)
#define  DECPR_PTG_PATT_LF_P_POSITION1_patt_lf_p_pos_x1_shift                    (0)
#define  DECPR_PTG_PATT_LF_P_POSITION1_patt_lf_p_pos_y1_mask                     (0x00FFF000)
#define  DECPR_PTG_PATT_LF_P_POSITION1_patt_lf_p_pos_x1_mask                     (0x00000FFF)
#define  DECPR_PTG_PATT_LF_P_POSITION1_patt_lf_p_pos_y1(data)                    (0x00FFF000&((data)<<12))
#define  DECPR_PTG_PATT_LF_P_POSITION1_patt_lf_p_pos_x1(data)                    (0x00000FFF&(data))
#define  DECPR_PTG_PATT_LF_P_POSITION1_get_patt_lf_p_pos_y1(data)                ((0x00FFF000&(data))>>12)
#define  DECPR_PTG_PATT_LF_P_POSITION1_get_patt_lf_p_pos_x1(data)                (0x00000FFF&(data))

#define  DECPR_PTG_PATT_HF_P_POSITION0                                          0x1809932C
#define  DECPR_PTG_PATT_HF_P_POSITION0_reg_addr                                  "0xB809932C"
#define  DECPR_PTG_PATT_HF_P_POSITION0_reg                                       0xB809932C
#define  DECPR_PTG_PATT_HF_P_POSITION0_inst_addr                                 "0x000B"
#define  set_DECPR_PTG_PATT_HF_P_POSITION0_reg(data)                             (*((volatile unsigned int*)DECPR_PTG_PATT_HF_P_POSITION0_reg)=data)
#define  get_DECPR_PTG_PATT_HF_P_POSITION0_reg                                   (*((volatile unsigned int*)DECPR_PTG_PATT_HF_P_POSITION0_reg))
#define  DECPR_PTG_PATT_HF_P_POSITION0_patt_hf_p_pos_y0_shift                    (12)
#define  DECPR_PTG_PATT_HF_P_POSITION0_patt_hf_p_pos_x0_shift                    (0)
#define  DECPR_PTG_PATT_HF_P_POSITION0_patt_hf_p_pos_y0_mask                     (0x00FFF000)
#define  DECPR_PTG_PATT_HF_P_POSITION0_patt_hf_p_pos_x0_mask                     (0x00000FFF)
#define  DECPR_PTG_PATT_HF_P_POSITION0_patt_hf_p_pos_y0(data)                    (0x00FFF000&((data)<<12))
#define  DECPR_PTG_PATT_HF_P_POSITION0_patt_hf_p_pos_x0(data)                    (0x00000FFF&(data))
#define  DECPR_PTG_PATT_HF_P_POSITION0_get_patt_hf_p_pos_y0(data)                ((0x00FFF000&(data))>>12)
#define  DECPR_PTG_PATT_HF_P_POSITION0_get_patt_hf_p_pos_x0(data)                (0x00000FFF&(data))

#define  DECPR_PTG_PATT_HF_P_POSITION1                                          0x18099330
#define  DECPR_PTG_PATT_HF_P_POSITION1_reg_addr                                  "0xB8099330"
#define  DECPR_PTG_PATT_HF_P_POSITION1_reg                                       0xB8099330
#define  DECPR_PTG_PATT_HF_P_POSITION1_inst_addr                                 "0x000C"
#define  set_DECPR_PTG_PATT_HF_P_POSITION1_reg(data)                             (*((volatile unsigned int*)DECPR_PTG_PATT_HF_P_POSITION1_reg)=data)
#define  get_DECPR_PTG_PATT_HF_P_POSITION1_reg                                   (*((volatile unsigned int*)DECPR_PTG_PATT_HF_P_POSITION1_reg))
#define  DECPR_PTG_PATT_HF_P_POSITION1_patt_hf_p_pos_y1_shift                    (12)
#define  DECPR_PTG_PATT_HF_P_POSITION1_patt_hf_p_pos_x1_shift                    (0)
#define  DECPR_PTG_PATT_HF_P_POSITION1_patt_hf_p_pos_y1_mask                     (0x00FFF000)
#define  DECPR_PTG_PATT_HF_P_POSITION1_patt_hf_p_pos_x1_mask                     (0x00000FFF)
#define  DECPR_PTG_PATT_HF_P_POSITION1_patt_hf_p_pos_y1(data)                    (0x00FFF000&((data)<<12))
#define  DECPR_PTG_PATT_HF_P_POSITION1_patt_hf_p_pos_x1(data)                    (0x00000FFF&(data))
#define  DECPR_PTG_PATT_HF_P_POSITION1_get_patt_hf_p_pos_y1(data)                ((0x00FFF000&(data))>>12)
#define  DECPR_PTG_PATT_HF_P_POSITION1_get_patt_hf_p_pos_x1(data)                (0x00000FFF&(data))

#define  DECPR_PTG_CPR_PATT_LF_P_SETTING0                                       0x18099334
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING0_reg_addr                               "0xB8099334"
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING0_reg                                    0xB8099334
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING0_inst_addr                              "0x000D"
#define  set_DECPR_PTG_CPR_PATT_LF_P_SETTING0_reg(data)                          (*((volatile unsigned int*)DECPR_PTG_CPR_PATT_LF_P_SETTING0_reg)=data)
#define  get_DECPR_PTG_CPR_PATT_LF_P_SETTING0_reg                                (*((volatile unsigned int*)DECPR_PTG_CPR_PATT_LF_P_SETTING0_reg))
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING0_patt_hf_p_setting_v0_11_shift          (31)
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING0_patt_lf_p_setting_v0_shift             (20)
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING0_patt_lf_p_setting_u0_shift             (10)
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING0_patt_lf_p_setting_y0_shift             (0)
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING0_patt_hf_p_setting_v0_11_mask           (0x80000000)
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING0_patt_lf_p_setting_v0_mask              (0x3FF00000)
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING0_patt_lf_p_setting_u0_mask              (0x000FFC00)
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING0_patt_lf_p_setting_y0_mask              (0x000003FF)
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING0_patt_hf_p_setting_v0_11(data)          (0x80000000&((data)<<31))
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING0_patt_lf_p_setting_v0(data)             (0x3FF00000&((data)<<20))
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING0_patt_lf_p_setting_u0(data)             (0x000FFC00&((data)<<10))
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING0_patt_lf_p_setting_y0(data)             (0x000003FF&(data))
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING0_get_patt_hf_p_setting_v0_11(data)      ((0x80000000&(data))>>31)
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING0_get_patt_lf_p_setting_v0(data)         ((0x3FF00000&(data))>>20)
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING0_get_patt_lf_p_setting_u0(data)         ((0x000FFC00&(data))>>10)
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING0_get_patt_lf_p_setting_y0(data)         (0x000003FF&(data))

#define  DECPR_PTG_CPR_PATT_LF_P_SETTING1                                       0x18099338
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING1_reg_addr                               "0xB8099338"
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING1_reg                                    0xB8099338
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING1_inst_addr                              "0x000E"
#define  set_DECPR_PTG_CPR_PATT_LF_P_SETTING1_reg(data)                          (*((volatile unsigned int*)DECPR_PTG_CPR_PATT_LF_P_SETTING1_reg)=data)
#define  get_DECPR_PTG_CPR_PATT_LF_P_SETTING1_reg                                (*((volatile unsigned int*)DECPR_PTG_CPR_PATT_LF_P_SETTING1_reg))
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING1_patt_hf_p_setting_v1_11_shift          (31)
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING1_patt_lf_p_setting_v1_shift             (20)
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING1_patt_lf_p_setting_u1_shift             (10)
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING1_patt_lf_p_setting_y1_shift             (0)
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING1_patt_hf_p_setting_v1_11_mask           (0x80000000)
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING1_patt_lf_p_setting_v1_mask              (0x3FF00000)
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING1_patt_lf_p_setting_u1_mask              (0x000FFC00)
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING1_patt_lf_p_setting_y1_mask              (0x000003FF)
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING1_patt_hf_p_setting_v1_11(data)          (0x80000000&((data)<<31))
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING1_patt_lf_p_setting_v1(data)             (0x3FF00000&((data)<<20))
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING1_patt_lf_p_setting_u1(data)             (0x000FFC00&((data)<<10))
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING1_patt_lf_p_setting_y1(data)             (0x000003FF&(data))
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING1_get_patt_hf_p_setting_v1_11(data)      ((0x80000000&(data))>>31)
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING1_get_patt_lf_p_setting_v1(data)         ((0x3FF00000&(data))>>20)
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING1_get_patt_lf_p_setting_u1(data)         ((0x000FFC00&(data))>>10)
#define  DECPR_PTG_CPR_PATT_LF_P_SETTING1_get_patt_lf_p_setting_y1(data)         (0x000003FF&(data))

#define  DECPR_PTG_CPR_PATT_HF_P_SETTING0                                       0x1809933C
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING0_reg_addr                               "0xB809933C"
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING0_reg                                    0xB809933C
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING0_inst_addr                              "0x000F"
#define  set_DECPR_PTG_CPR_PATT_HF_P_SETTING0_reg(data)                          (*((volatile unsigned int*)DECPR_PTG_CPR_PATT_HF_P_SETTING0_reg)=data)
#define  get_DECPR_PTG_CPR_PATT_HF_P_SETTING0_reg                                (*((volatile unsigned int*)DECPR_PTG_CPR_PATT_HF_P_SETTING0_reg))
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING0_patt_hf_p_setting_v0_shift             (22)
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING0_patt_hf_p_setting_u0_shift             (11)
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING0_patt_hf_p_setting_y0_shift             (0)
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING0_patt_hf_p_setting_v0_mask              (0xFFC00000)
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING0_patt_hf_p_setting_u0_mask              (0x003FF800)
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING0_patt_hf_p_setting_y0_mask              (0x000007FF)
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING0_patt_hf_p_setting_v0(data)             (0xFFC00000&((data)<<22))
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING0_patt_hf_p_setting_u0(data)             (0x003FF800&((data)<<11))
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING0_patt_hf_p_setting_y0(data)             (0x000007FF&(data))
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING0_get_patt_hf_p_setting_v0(data)         ((0xFFC00000&(data))>>22)
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING0_get_patt_hf_p_setting_u0(data)         ((0x003FF800&(data))>>11)
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING0_get_patt_hf_p_setting_y0(data)         (0x000007FF&(data))

#define  DECPR_PTG_CPR_PATT_HF_P_SETTING1                                       0x18099340
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING1_reg_addr                               "0xB8099340"
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING1_reg                                    0xB8099340
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING1_inst_addr                              "0x0010"
#define  set_DECPR_PTG_CPR_PATT_HF_P_SETTING1_reg(data)                          (*((volatile unsigned int*)DECPR_PTG_CPR_PATT_HF_P_SETTING1_reg)=data)
#define  get_DECPR_PTG_CPR_PATT_HF_P_SETTING1_reg                                (*((volatile unsigned int*)DECPR_PTG_CPR_PATT_HF_P_SETTING1_reg))
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING1_patt_hf_p_setting_v1_shift             (22)
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING1_patt_hf_p_setting_u1_shift             (11)
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING1_patt_hf_p_setting_y1_shift             (0)
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING1_patt_hf_p_setting_v1_mask              (0xFFC00000)
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING1_patt_hf_p_setting_u1_mask              (0x003FF800)
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING1_patt_hf_p_setting_y1_mask              (0x000007FF)
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING1_patt_hf_p_setting_v1(data)             (0xFFC00000&((data)<<22))
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING1_patt_hf_p_setting_u1(data)             (0x003FF800&((data)<<11))
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING1_patt_hf_p_setting_y1(data)             (0x000007FF&(data))
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING1_get_patt_hf_p_setting_v1(data)         ((0xFFC00000&(data))>>22)
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING1_get_patt_hf_p_setting_u1(data)         ((0x003FF800&(data))>>11)
#define  DECPR_PTG_CPR_PATT_HF_P_SETTING1_get_patt_hf_p_setting_y1(data)         (0x000007FF&(data))

#define  DECPR_PTG_CPR_DEBUG_CFG0                                               0x18099364
#define  DECPR_PTG_CPR_DEBUG_CFG0_reg_addr                                       "0xB8099364"
#define  DECPR_PTG_CPR_DEBUG_CFG0_reg                                            0xB8099364
#define  DECPR_PTG_CPR_DEBUG_CFG0_inst_addr                                      "0x0011"
#define  set_DECPR_PTG_CPR_DEBUG_CFG0_reg(data)                                  (*((volatile unsigned int*)DECPR_PTG_CPR_DEBUG_CFG0_reg)=data)
#define  get_DECPR_PTG_CPR_DEBUG_CFG0_reg                                        (*((volatile unsigned int*)DECPR_PTG_CPR_DEBUG_CFG0_reg))
#define  DECPR_PTG_CPR_DEBUG_CFG0_dummy_16_0_shift                               (0)
#define  DECPR_PTG_CPR_DEBUG_CFG0_dummy_16_0_mask                                (0x0001FFFF)
#define  DECPR_PTG_CPR_DEBUG_CFG0_dummy_16_0(data)                               (0x0001FFFF&(data))
#define  DECPR_PTG_CPR_DEBUG_CFG0_get_dummy_16_0(data)                           (0x0001FFFF&(data))

#define  DECPR_PTG_DEC_I_PATT_DEBUG                                             0x1809937C
#define  DECPR_PTG_DEC_I_PATT_DEBUG_reg_addr                                     "0xB809937C"
#define  DECPR_PTG_DEC_I_PATT_DEBUG_reg                                          0xB809937C
#define  DECPR_PTG_DEC_I_PATT_DEBUG_inst_addr                                    "0x0012"
#define  set_DECPR_PTG_DEC_I_PATT_DEBUG_reg(data)                                (*((volatile unsigned int*)DECPR_PTG_DEC_I_PATT_DEBUG_reg)=data)
#define  get_DECPR_PTG_DEC_I_PATT_DEBUG_reg                                      (*((volatile unsigned int*)DECPR_PTG_DEC_I_PATT_DEBUG_reg))
#define  DECPR_PTG_DEC_I_PATT_DEBUG_regr_dec_i_patt_debug_shift                  (0)
#define  DECPR_PTG_DEC_I_PATT_DEBUG_regr_dec_i_patt_debug_mask                   (0xFFFFFFFF)
#define  DECPR_PTG_DEC_I_PATT_DEBUG_regr_dec_i_patt_debug(data)                  (0xFFFFFFFF&(data))
#define  DECPR_PTG_DEC_I_PATT_DEBUG_get_regr_dec_i_patt_debug(data)              (0xFFFFFFFF&(data))

#define  DECPR_PTG_DEC_P_PATT_DEBUG                                             0x18099388
#define  DECPR_PTG_DEC_P_PATT_DEBUG_reg_addr                                     "0xB8099388"
#define  DECPR_PTG_DEC_P_PATT_DEBUG_reg                                          0xB8099388
#define  DECPR_PTG_DEC_P_PATT_DEBUG_inst_addr                                    "0x0013"
#define  set_DECPR_PTG_DEC_P_PATT_DEBUG_reg(data)                                (*((volatile unsigned int*)DECPR_PTG_DEC_P_PATT_DEBUG_reg)=data)
#define  get_DECPR_PTG_DEC_P_PATT_DEBUG_reg                                      (*((volatile unsigned int*)DECPR_PTG_DEC_P_PATT_DEBUG_reg))
#define  DECPR_PTG_DEC_P_PATT_DEBUG_regr_dec_p_patt_debug_shift                  (0)
#define  DECPR_PTG_DEC_P_PATT_DEBUG_regr_dec_p_patt_debug_mask                   (0xFFFFFFFF)
#define  DECPR_PTG_DEC_P_PATT_DEBUG_regr_dec_p_patt_debug(data)                  (0xFFFFFFFF&(data))
#define  DECPR_PTG_DEC_P_PATT_DEBUG_get_regr_dec_p_patt_debug(data)              (0xFFFFFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======DECPR_PTG register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  patt_hf_p_mode:3;
        RBus_UInt32  patt_lf_p_mode:3;
        RBus_UInt32  patt_hf_i_mode:3;
        RBus_UInt32  patt_lf_i_mode:3;
        RBus_UInt32  res2:2;
        RBus_UInt32  patt_hf_p_timing:1;
        RBus_UInt32  patt_lf_p_timing:1;
        RBus_UInt32  patt_hf_i_timing:1;
        RBus_UInt32  patt_lf_i_timing:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  patt_hf_p_en:1;
        RBus_UInt32  patt_lf_p_en:1;
        RBus_UInt32  patt_hf_i_en:1;
        RBus_UInt32  patt_lf_i_en:1;
    };
}decpr_ptg_patt_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  patt_lf_i_pos_y0:12;
        RBus_UInt32  patt_lf_i_pos_x0:12;
    };
}decpr_ptg_patt_lf_i_position0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  patt_lf_i_pos_y1:12;
        RBus_UInt32  patt_lf_i_pos_x1:12;
    };
}decpr_ptg_patt_lf_i_position1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  patt_hf_i_pos_y0:12;
        RBus_UInt32  patt_hf_i_pos_x0:12;
    };
}decpr_ptg_patt_hf_i_position0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  patt_hf_i_pos_y1:12;
        RBus_UInt32  patt_hf_i_pos_x1:12;
    };
}decpr_ptg_patt_hf_i_position1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_hf_i_setting_v0_11:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  patt_lf_i_setting_v0:10;
        RBus_UInt32  patt_lf_i_setting_u0:10;
        RBus_UInt32  patt_lf_i_setting_y0:10;
    };
}decpr_ptg_cpr_patt_lf_i_setting0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_hf_i_setting_v1_11:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  patt_lf_i_setting_v1:10;
        RBus_UInt32  patt_lf_i_setting_u1:10;
        RBus_UInt32  patt_lf_i_setting_y1:10;
    };
}decpr_ptg_cpr_patt_lf_i_setting1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_hf_i_setting_v0:10;
        RBus_UInt32  patt_hf_i_setting_u0:11;
        RBus_UInt32  patt_hf_i_setting_y0:11;
    };
}decpr_ptg_cpr_patt_hf_i_setting0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_hf_i_setting_v1:10;
        RBus_UInt32  patt_hf_i_setting_u1:11;
        RBus_UInt32  patt_hf_i_setting_y1:11;
    };
}decpr_ptg_cpr_patt_hf_i_setting1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  patt_lf_p_pos_y0:12;
        RBus_UInt32  patt_lf_p_pos_x0:12;
    };
}decpr_ptg_patt_lf_p_position0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  patt_lf_p_pos_y1:12;
        RBus_UInt32  patt_lf_p_pos_x1:12;
    };
}decpr_ptg_patt_lf_p_position1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  patt_hf_p_pos_y0:12;
        RBus_UInt32  patt_hf_p_pos_x0:12;
    };
}decpr_ptg_patt_hf_p_position0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  patt_hf_p_pos_y1:12;
        RBus_UInt32  patt_hf_p_pos_x1:12;
    };
}decpr_ptg_patt_hf_p_position1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_hf_p_setting_v0_11:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  patt_lf_p_setting_v0:10;
        RBus_UInt32  patt_lf_p_setting_u0:10;
        RBus_UInt32  patt_lf_p_setting_y0:10;
    };
}decpr_ptg_cpr_patt_lf_p_setting0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_hf_p_setting_v1_11:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  patt_lf_p_setting_v1:10;
        RBus_UInt32  patt_lf_p_setting_u1:10;
        RBus_UInt32  patt_lf_p_setting_y1:10;
    };
}decpr_ptg_cpr_patt_lf_p_setting1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_hf_p_setting_v0:10;
        RBus_UInt32  patt_hf_p_setting_u0:11;
        RBus_UInt32  patt_hf_p_setting_y0:11;
    };
}decpr_ptg_cpr_patt_hf_p_setting0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_hf_p_setting_v1:10;
        RBus_UInt32  patt_hf_p_setting_u1:11;
        RBus_UInt32  patt_hf_p_setting_y1:11;
    };
}decpr_ptg_cpr_patt_hf_p_setting1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}decpr_ptg_patt_lf_nr_position0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}decpr_ptg_patt_lf_nr_position1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  dummy18099364_16_0:17;
    };
}decpr_ptg_cpr_debug_cfg0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dec_i_patt_debug:32;
    };
}decpr_ptg_dec_i_patt_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dec_p_patt_debug:32;
    };
}decpr_ptg_dec_p_patt_debug_RBUS;

#else //apply LITTLE_ENDIAN

//======DECPR_PTG register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_lf_i_en:1;
        RBus_UInt32  patt_hf_i_en:1;
        RBus_UInt32  patt_lf_p_en:1;
        RBus_UInt32  patt_hf_p_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  patt_lf_i_timing:1;
        RBus_UInt32  patt_hf_i_timing:1;
        RBus_UInt32  patt_lf_p_timing:1;
        RBus_UInt32  patt_hf_p_timing:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  patt_lf_i_mode:3;
        RBus_UInt32  patt_hf_i_mode:3;
        RBus_UInt32  patt_lf_p_mode:3;
        RBus_UInt32  patt_hf_p_mode:3;
        RBus_UInt32  res3:8;
    };
}decpr_ptg_patt_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_lf_i_pos_x0:12;
        RBus_UInt32  patt_lf_i_pos_y0:12;
        RBus_UInt32  res1:8;
    };
}decpr_ptg_patt_lf_i_position0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_lf_i_pos_x1:12;
        RBus_UInt32  patt_lf_i_pos_y1:12;
        RBus_UInt32  res1:8;
    };
}decpr_ptg_patt_lf_i_position1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_hf_i_pos_x0:12;
        RBus_UInt32  patt_hf_i_pos_y0:12;
        RBus_UInt32  res1:8;
    };
}decpr_ptg_patt_hf_i_position0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_hf_i_pos_x1:12;
        RBus_UInt32  patt_hf_i_pos_y1:12;
        RBus_UInt32  res1:8;
    };
}decpr_ptg_patt_hf_i_position1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_lf_i_setting_y0:10;
        RBus_UInt32  patt_lf_i_setting_u0:10;
        RBus_UInt32  patt_lf_i_setting_v0:10;
        RBus_UInt32  res1:1;
        RBus_UInt32  patt_hf_i_setting_v0_11:1;
    };
}decpr_ptg_cpr_patt_lf_i_setting0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_lf_i_setting_y1:10;
        RBus_UInt32  patt_lf_i_setting_u1:10;
        RBus_UInt32  patt_lf_i_setting_v1:10;
        RBus_UInt32  res1:1;
        RBus_UInt32  patt_hf_i_setting_v1_11:1;
    };
}decpr_ptg_cpr_patt_lf_i_setting1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_hf_i_setting_y0:11;
        RBus_UInt32  patt_hf_i_setting_u0:11;
        RBus_UInt32  patt_hf_i_setting_v0:10;
    };
}decpr_ptg_cpr_patt_hf_i_setting0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_hf_i_setting_y1:11;
        RBus_UInt32  patt_hf_i_setting_u1:11;
        RBus_UInt32  patt_hf_i_setting_v1:10;
    };
}decpr_ptg_cpr_patt_hf_i_setting1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_lf_p_pos_x0:12;
        RBus_UInt32  patt_lf_p_pos_y0:12;
        RBus_UInt32  res1:8;
    };
}decpr_ptg_patt_lf_p_position0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_lf_p_pos_x1:12;
        RBus_UInt32  patt_lf_p_pos_y1:12;
        RBus_UInt32  res1:8;
    };
}decpr_ptg_patt_lf_p_position1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_hf_p_pos_x0:12;
        RBus_UInt32  patt_hf_p_pos_y0:12;
        RBus_UInt32  res1:8;
    };
}decpr_ptg_patt_hf_p_position0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_hf_p_pos_x1:12;
        RBus_UInt32  patt_hf_p_pos_y1:12;
        RBus_UInt32  res1:8;
    };
}decpr_ptg_patt_hf_p_position1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_lf_p_setting_y0:10;
        RBus_UInt32  patt_lf_p_setting_u0:10;
        RBus_UInt32  patt_lf_p_setting_v0:10;
        RBus_UInt32  res1:1;
        RBus_UInt32  patt_hf_p_setting_v0_11:1;
    };
}decpr_ptg_cpr_patt_lf_p_setting0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_lf_p_setting_y1:10;
        RBus_UInt32  patt_lf_p_setting_u1:10;
        RBus_UInt32  patt_lf_p_setting_v1:10;
        RBus_UInt32  res1:1;
        RBus_UInt32  patt_hf_p_setting_v1_11:1;
    };
}decpr_ptg_cpr_patt_lf_p_setting1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_hf_p_setting_y0:11;
        RBus_UInt32  patt_hf_p_setting_u0:11;
        RBus_UInt32  patt_hf_p_setting_v0:10;
    };
}decpr_ptg_cpr_patt_hf_p_setting0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patt_hf_p_setting_y1:11;
        RBus_UInt32  patt_hf_p_setting_u1:11;
        RBus_UInt32  patt_hf_p_setting_v1:10;
    };
}decpr_ptg_cpr_patt_hf_p_setting1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}decpr_ptg_patt_lf_nr_position0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}decpr_ptg_patt_lf_nr_position1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy18099364_16_0:17;
        RBus_UInt32  res1:15;
    };
}decpr_ptg_cpr_debug_cfg0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dec_i_patt_debug:32;
    };
}decpr_ptg_dec_i_patt_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dec_p_patt_debug:32;
    };
}decpr_ptg_dec_p_patt_debug_RBUS;




#endif 


#endif 
