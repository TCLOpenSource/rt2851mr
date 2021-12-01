/**
* @file RL6617-DesignSpec-DFE-3-HDMI2P0
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_DFE_P3_REG_H_
#define _RBUS_DFE_P3_REG_H_

#include "rbus_types.h"



//  DFE_P3 Register Address
#define  DFE_P3_REG_DFE_EN_L0_P3                                                0x1803CD50
#define  DFE_P3_REG_DFE_EN_L0_P3_reg_addr                                        "0xB803CD50"
#define  DFE_P3_REG_DFE_EN_L0_P3_reg                                             0xB803CD50
#define  DFE_P3_REG_DFE_EN_L0_P3_inst_addr                                       "0x0000"
#define  set_DFE_P3_REG_DFE_EN_L0_P3_reg(data)                                   (*((volatile unsigned int*)DFE_P3_REG_DFE_EN_L0_P3_reg)=data)
#define  get_DFE_P3_REG_DFE_EN_L0_P3_reg                                         (*((volatile unsigned int*)DFE_P3_REG_DFE_EN_L0_P3_reg))
#define  DFE_P3_REG_DFE_EN_L0_P3_clk_inv_lane0_p3_shift                          (31)
#define  DFE_P3_REG_DFE_EN_L0_P3_timer_ctrl_en_lane0_p3_shift                    (30)
#define  DFE_P3_REG_DFE_EN_L0_P3_reduce_adapt_gain_lane0_p3_shift                (28)
#define  DFE_P3_REG_DFE_EN_L0_P3_rl_det_en_lane0_p3_shift                        (27)
#define  DFE_P3_REG_DFE_EN_L0_P3_tap1_trans_mode_lane0_p3_shift                  (26)
#define  DFE_P3_REG_DFE_EN_L0_P3_rl_threshold_lane0_p3_shift                     (24)
#define  DFE_P3_REG_DFE_EN_L0_P3_dfe_adapt_en_lane0_p3_shift                     (16)
#define  DFE_P3_REG_DFE_EN_L0_P3_le_min_lane0_p3_shift                           (11)
#define  DFE_P3_REG_DFE_EN_L0_P3_le_init_lane0_p3_shift                          (6)
#define  DFE_P3_REG_DFE_EN_L0_P3_tap4_init_lane0_p3_shift                        (0)
#define  DFE_P3_REG_DFE_EN_L0_P3_clk_inv_lane0_p3_mask                           (0x80000000)
#define  DFE_P3_REG_DFE_EN_L0_P3_timer_ctrl_en_lane0_p3_mask                     (0x40000000)
#define  DFE_P3_REG_DFE_EN_L0_P3_reduce_adapt_gain_lane0_p3_mask                 (0x30000000)
#define  DFE_P3_REG_DFE_EN_L0_P3_rl_det_en_lane0_p3_mask                         (0x08000000)
#define  DFE_P3_REG_DFE_EN_L0_P3_tap1_trans_mode_lane0_p3_mask                   (0x04000000)
#define  DFE_P3_REG_DFE_EN_L0_P3_rl_threshold_lane0_p3_mask                      (0x03000000)
#define  DFE_P3_REG_DFE_EN_L0_P3_dfe_adapt_en_lane0_p3_mask                      (0x00FF0000)
#define  DFE_P3_REG_DFE_EN_L0_P3_le_min_lane0_p3_mask                            (0x0000F800)
#define  DFE_P3_REG_DFE_EN_L0_P3_le_init_lane0_p3_mask                           (0x000007C0)
#define  DFE_P3_REG_DFE_EN_L0_P3_tap4_init_lane0_p3_mask                         (0x0000003F)
#define  DFE_P3_REG_DFE_EN_L0_P3_clk_inv_lane0_p3(data)                          (0x80000000&((data)<<31))
#define  DFE_P3_REG_DFE_EN_L0_P3_timer_ctrl_en_lane0_p3(data)                    (0x40000000&((data)<<30))
#define  DFE_P3_REG_DFE_EN_L0_P3_reduce_adapt_gain_lane0_p3(data)                (0x30000000&((data)<<28))
#define  DFE_P3_REG_DFE_EN_L0_P3_rl_det_en_lane0_p3(data)                        (0x08000000&((data)<<27))
#define  DFE_P3_REG_DFE_EN_L0_P3_tap1_trans_mode_lane0_p3(data)                  (0x04000000&((data)<<26))
#define  DFE_P3_REG_DFE_EN_L0_P3_rl_threshold_lane0_p3(data)                     (0x03000000&((data)<<24))
#define  DFE_P3_REG_DFE_EN_L0_P3_dfe_adapt_en_lane0_p3(data)                     (0x00FF0000&((data)<<16))
#define  DFE_P3_REG_DFE_EN_L0_P3_le_min_lane0_p3(data)                           (0x0000F800&((data)<<11))
#define  DFE_P3_REG_DFE_EN_L0_P3_le_init_lane0_p3(data)                          (0x000007C0&((data)<<6))
#define  DFE_P3_REG_DFE_EN_L0_P3_tap4_init_lane0_p3(data)                        (0x0000003F&(data))
#define  DFE_P3_REG_DFE_EN_L0_P3_get_clk_inv_lane0_p3(data)                      ((0x80000000&(data))>>31)
#define  DFE_P3_REG_DFE_EN_L0_P3_get_timer_ctrl_en_lane0_p3(data)                ((0x40000000&(data))>>30)
#define  DFE_P3_REG_DFE_EN_L0_P3_get_reduce_adapt_gain_lane0_p3(data)            ((0x30000000&(data))>>28)
#define  DFE_P3_REG_DFE_EN_L0_P3_get_rl_det_en_lane0_p3(data)                    ((0x08000000&(data))>>27)
#define  DFE_P3_REG_DFE_EN_L0_P3_get_tap1_trans_mode_lane0_p3(data)              ((0x04000000&(data))>>26)
#define  DFE_P3_REG_DFE_EN_L0_P3_get_rl_threshold_lane0_p3(data)                 ((0x03000000&(data))>>24)
#define  DFE_P3_REG_DFE_EN_L0_P3_get_dfe_adapt_en_lane0_p3(data)                 ((0x00FF0000&(data))>>16)
#define  DFE_P3_REG_DFE_EN_L0_P3_get_le_min_lane0_p3(data)                       ((0x0000F800&(data))>>11)
#define  DFE_P3_REG_DFE_EN_L0_P3_get_le_init_lane0_p3(data)                      ((0x000007C0&(data))>>6)
#define  DFE_P3_REG_DFE_EN_L0_P3_get_tap4_init_lane0_p3(data)                    (0x0000003F&(data))

#define  DFE_P3_REG_DFE_INIT0_L0_P3                                             0x1803CD54
#define  DFE_P3_REG_DFE_INIT0_L0_P3_reg_addr                                     "0xB803CD54"
#define  DFE_P3_REG_DFE_INIT0_L0_P3_reg                                          0xB803CD54
#define  DFE_P3_REG_DFE_INIT0_L0_P3_inst_addr                                    "0x0001"
#define  set_DFE_P3_REG_DFE_INIT0_L0_P3_reg(data)                                (*((volatile unsigned int*)DFE_P3_REG_DFE_INIT0_L0_P3_reg)=data)
#define  get_DFE_P3_REG_DFE_INIT0_L0_P3_reg                                      (*((volatile unsigned int*)DFE_P3_REG_DFE_INIT0_L0_P3_reg))
#define  DFE_P3_REG_DFE_INIT0_L0_P3_tap3_init_lane0_p3_shift                     (26)
#define  DFE_P3_REG_DFE_INIT0_L0_P3_tap2_init_lane0_p3_shift                     (20)
#define  DFE_P3_REG_DFE_INIT0_L0_P3_tap1_init_lane0_p3_shift                     (14)
#define  DFE_P3_REG_DFE_INIT0_L0_P3_tap0_init_lane0_p3_shift                     (7)
#define  DFE_P3_REG_DFE_INIT0_L0_P3_init1_rev0_lane0_p3_shift                    (4)
#define  DFE_P3_REG_DFE_INIT0_L0_P3_vth_init_lane0_p3_shift                      (0)
#define  DFE_P3_REG_DFE_INIT0_L0_P3_tap3_init_lane0_p3_mask                      (0xFC000000)
#define  DFE_P3_REG_DFE_INIT0_L0_P3_tap2_init_lane0_p3_mask                      (0x03F00000)
#define  DFE_P3_REG_DFE_INIT0_L0_P3_tap1_init_lane0_p3_mask                      (0x000FC000)
#define  DFE_P3_REG_DFE_INIT0_L0_P3_tap0_init_lane0_p3_mask                      (0x00003F80)
#define  DFE_P3_REG_DFE_INIT0_L0_P3_init1_rev0_lane0_p3_mask                     (0x00000070)
#define  DFE_P3_REG_DFE_INIT0_L0_P3_vth_init_lane0_p3_mask                       (0x0000000F)
#define  DFE_P3_REG_DFE_INIT0_L0_P3_tap3_init_lane0_p3(data)                     (0xFC000000&((data)<<26))
#define  DFE_P3_REG_DFE_INIT0_L0_P3_tap2_init_lane0_p3(data)                     (0x03F00000&((data)<<20))
#define  DFE_P3_REG_DFE_INIT0_L0_P3_tap1_init_lane0_p3(data)                     (0x000FC000&((data)<<14))
#define  DFE_P3_REG_DFE_INIT0_L0_P3_tap0_init_lane0_p3(data)                     (0x00003F80&((data)<<7))
#define  DFE_P3_REG_DFE_INIT0_L0_P3_init1_rev0_lane0_p3(data)                    (0x00000070&((data)<<4))
#define  DFE_P3_REG_DFE_INIT0_L0_P3_vth_init_lane0_p3(data)                      (0x0000000F&(data))
#define  DFE_P3_REG_DFE_INIT0_L0_P3_get_tap3_init_lane0_p3(data)                 ((0xFC000000&(data))>>26)
#define  DFE_P3_REG_DFE_INIT0_L0_P3_get_tap2_init_lane0_p3(data)                 ((0x03F00000&(data))>>20)
#define  DFE_P3_REG_DFE_INIT0_L0_P3_get_tap1_init_lane0_p3(data)                 ((0x000FC000&(data))>>14)
#define  DFE_P3_REG_DFE_INIT0_L0_P3_get_tap0_init_lane0_p3(data)                 ((0x00003F80&(data))>>7)
#define  DFE_P3_REG_DFE_INIT0_L0_P3_get_init1_rev0_lane0_p3(data)                ((0x00000070&(data))>>4)
#define  DFE_P3_REG_DFE_INIT0_L0_P3_get_vth_init_lane0_p3(data)                  (0x0000000F&(data))

#define  DFE_P3_REG_DFE_INIT1_L0_P3                                             0x1803CD58
#define  DFE_P3_REG_DFE_INIT1_L0_P3_reg_addr                                     "0xB803CD58"
#define  DFE_P3_REG_DFE_INIT1_L0_P3_reg                                          0xB803CD58
#define  DFE_P3_REG_DFE_INIT1_L0_P3_inst_addr                                    "0x0002"
#define  set_DFE_P3_REG_DFE_INIT1_L0_P3_reg(data)                                (*((volatile unsigned int*)DFE_P3_REG_DFE_INIT1_L0_P3_reg)=data)
#define  get_DFE_P3_REG_DFE_INIT1_L0_P3_reg                                      (*((volatile unsigned int*)DFE_P3_REG_DFE_INIT1_L0_P3_reg))
#define  DFE_P3_REG_DFE_INIT1_L0_P3_load_in_init_lane0_p3_shift                  (24)
#define  DFE_P3_REG_DFE_INIT1_L0_P3_init1_rev1_lane0_p3_shift                    (18)
#define  DFE_P3_REG_DFE_INIT1_L0_P3_de_video_inv_lane0_p3_shift                  (17)
#define  DFE_P3_REG_DFE_INIT1_L0_P3_de_packet_inv_lane0_p3_shift                 (16)
#define  DFE_P3_REG_DFE_INIT1_L0_P3_de_video_en_lane0_p3_shift                   (15)
#define  DFE_P3_REG_DFE_INIT1_L0_P3_de_packet_en_lane0_p3_shift                  (14)
#define  DFE_P3_REG_DFE_INIT1_L0_P3_init1_rev2_lane0_p3_shift                    (0)
#define  DFE_P3_REG_DFE_INIT1_L0_P3_load_in_init_lane0_p3_mask                   (0xFF000000)
#define  DFE_P3_REG_DFE_INIT1_L0_P3_init1_rev1_lane0_p3_mask                     (0x00FC0000)
#define  DFE_P3_REG_DFE_INIT1_L0_P3_de_video_inv_lane0_p3_mask                   (0x00020000)
#define  DFE_P3_REG_DFE_INIT1_L0_P3_de_packet_inv_lane0_p3_mask                  (0x00010000)
#define  DFE_P3_REG_DFE_INIT1_L0_P3_de_video_en_lane0_p3_mask                    (0x00008000)
#define  DFE_P3_REG_DFE_INIT1_L0_P3_de_packet_en_lane0_p3_mask                   (0x00004000)
#define  DFE_P3_REG_DFE_INIT1_L0_P3_init1_rev2_lane0_p3_mask                     (0x00003FFF)
#define  DFE_P3_REG_DFE_INIT1_L0_P3_load_in_init_lane0_p3(data)                  (0xFF000000&((data)<<24))
#define  DFE_P3_REG_DFE_INIT1_L0_P3_init1_rev1_lane0_p3(data)                    (0x00FC0000&((data)<<18))
#define  DFE_P3_REG_DFE_INIT1_L0_P3_de_video_inv_lane0_p3(data)                  (0x00020000&((data)<<17))
#define  DFE_P3_REG_DFE_INIT1_L0_P3_de_packet_inv_lane0_p3(data)                 (0x00010000&((data)<<16))
#define  DFE_P3_REG_DFE_INIT1_L0_P3_de_video_en_lane0_p3(data)                   (0x00008000&((data)<<15))
#define  DFE_P3_REG_DFE_INIT1_L0_P3_de_packet_en_lane0_p3(data)                  (0x00004000&((data)<<14))
#define  DFE_P3_REG_DFE_INIT1_L0_P3_init1_rev2_lane0_p3(data)                    (0x00003FFF&(data))
#define  DFE_P3_REG_DFE_INIT1_L0_P3_get_load_in_init_lane0_p3(data)              ((0xFF000000&(data))>>24)
#define  DFE_P3_REG_DFE_INIT1_L0_P3_get_init1_rev1_lane0_p3(data)                ((0x00FC0000&(data))>>18)
#define  DFE_P3_REG_DFE_INIT1_L0_P3_get_de_video_inv_lane0_p3(data)              ((0x00020000&(data))>>17)
#define  DFE_P3_REG_DFE_INIT1_L0_P3_get_de_packet_inv_lane0_p3(data)             ((0x00010000&(data))>>16)
#define  DFE_P3_REG_DFE_INIT1_L0_P3_get_de_video_en_lane0_p3(data)               ((0x00008000&(data))>>15)
#define  DFE_P3_REG_DFE_INIT1_L0_P3_get_de_packet_en_lane0_p3(data)              ((0x00004000&(data))>>14)
#define  DFE_P3_REG_DFE_INIT1_L0_P3_get_init1_rev2_lane0_p3(data)                (0x00003FFF&(data))

#define  DFE_P3_REG_DFE_EN_L1_P3                                                0x1803CD60
#define  DFE_P3_REG_DFE_EN_L1_P3_reg_addr                                        "0xB803CD60"
#define  DFE_P3_REG_DFE_EN_L1_P3_reg                                             0xB803CD60
#define  DFE_P3_REG_DFE_EN_L1_P3_inst_addr                                       "0x0003"
#define  set_DFE_P3_REG_DFE_EN_L1_P3_reg(data)                                   (*((volatile unsigned int*)DFE_P3_REG_DFE_EN_L1_P3_reg)=data)
#define  get_DFE_P3_REG_DFE_EN_L1_P3_reg                                         (*((volatile unsigned int*)DFE_P3_REG_DFE_EN_L1_P3_reg))
#define  DFE_P3_REG_DFE_EN_L1_P3_clk_inv_lane1_p3_shift                          (31)
#define  DFE_P3_REG_DFE_EN_L1_P3_timer_ctrl_en_lane1_p3_shift                    (30)
#define  DFE_P3_REG_DFE_EN_L1_P3_reduce_adapt_gain_lane1_p3_shift                (28)
#define  DFE_P3_REG_DFE_EN_L1_P3_rl_det_en_lane1_p3_shift                        (27)
#define  DFE_P3_REG_DFE_EN_L1_P3_tap1_trans_mode_lane1_p3_shift                  (26)
#define  DFE_P3_REG_DFE_EN_L1_P3_rl_threshold_lane1_p3_shift                     (24)
#define  DFE_P3_REG_DFE_EN_L1_P3_dfe_adapt_en_lane1_p3_shift                     (16)
#define  DFE_P3_REG_DFE_EN_L1_P3_le_min_lane1_p3_shift                           (11)
#define  DFE_P3_REG_DFE_EN_L1_P3_le_init_lane1_p3_shift                          (6)
#define  DFE_P3_REG_DFE_EN_L1_P3_tap4_init_lane1_p3_shift                        (0)
#define  DFE_P3_REG_DFE_EN_L1_P3_clk_inv_lane1_p3_mask                           (0x80000000)
#define  DFE_P3_REG_DFE_EN_L1_P3_timer_ctrl_en_lane1_p3_mask                     (0x40000000)
#define  DFE_P3_REG_DFE_EN_L1_P3_reduce_adapt_gain_lane1_p3_mask                 (0x30000000)
#define  DFE_P3_REG_DFE_EN_L1_P3_rl_det_en_lane1_p3_mask                         (0x08000000)
#define  DFE_P3_REG_DFE_EN_L1_P3_tap1_trans_mode_lane1_p3_mask                   (0x04000000)
#define  DFE_P3_REG_DFE_EN_L1_P3_rl_threshold_lane1_p3_mask                      (0x03000000)
#define  DFE_P3_REG_DFE_EN_L1_P3_dfe_adapt_en_lane1_p3_mask                      (0x00FF0000)
#define  DFE_P3_REG_DFE_EN_L1_P3_le_min_lane1_p3_mask                            (0x0000F800)
#define  DFE_P3_REG_DFE_EN_L1_P3_le_init_lane1_p3_mask                           (0x000007C0)
#define  DFE_P3_REG_DFE_EN_L1_P3_tap4_init_lane1_p3_mask                         (0x0000003F)
#define  DFE_P3_REG_DFE_EN_L1_P3_clk_inv_lane1_p3(data)                          (0x80000000&((data)<<31))
#define  DFE_P3_REG_DFE_EN_L1_P3_timer_ctrl_en_lane1_p3(data)                    (0x40000000&((data)<<30))
#define  DFE_P3_REG_DFE_EN_L1_P3_reduce_adapt_gain_lane1_p3(data)                (0x30000000&((data)<<28))
#define  DFE_P3_REG_DFE_EN_L1_P3_rl_det_en_lane1_p3(data)                        (0x08000000&((data)<<27))
#define  DFE_P3_REG_DFE_EN_L1_P3_tap1_trans_mode_lane1_p3(data)                  (0x04000000&((data)<<26))
#define  DFE_P3_REG_DFE_EN_L1_P3_rl_threshold_lane1_p3(data)                     (0x03000000&((data)<<24))
#define  DFE_P3_REG_DFE_EN_L1_P3_dfe_adapt_en_lane1_p3(data)                     (0x00FF0000&((data)<<16))
#define  DFE_P3_REG_DFE_EN_L1_P3_le_min_lane1_p3(data)                           (0x0000F800&((data)<<11))
#define  DFE_P3_REG_DFE_EN_L1_P3_le_init_lane1_p3(data)                          (0x000007C0&((data)<<6))
#define  DFE_P3_REG_DFE_EN_L1_P3_tap4_init_lane1_p3(data)                        (0x0000003F&(data))
#define  DFE_P3_REG_DFE_EN_L1_P3_get_clk_inv_lane1_p3(data)                      ((0x80000000&(data))>>31)
#define  DFE_P3_REG_DFE_EN_L1_P3_get_timer_ctrl_en_lane1_p3(data)                ((0x40000000&(data))>>30)
#define  DFE_P3_REG_DFE_EN_L1_P3_get_reduce_adapt_gain_lane1_p3(data)            ((0x30000000&(data))>>28)
#define  DFE_P3_REG_DFE_EN_L1_P3_get_rl_det_en_lane1_p3(data)                    ((0x08000000&(data))>>27)
#define  DFE_P3_REG_DFE_EN_L1_P3_get_tap1_trans_mode_lane1_p3(data)              ((0x04000000&(data))>>26)
#define  DFE_P3_REG_DFE_EN_L1_P3_get_rl_threshold_lane1_p3(data)                 ((0x03000000&(data))>>24)
#define  DFE_P3_REG_DFE_EN_L1_P3_get_dfe_adapt_en_lane1_p3(data)                 ((0x00FF0000&(data))>>16)
#define  DFE_P3_REG_DFE_EN_L1_P3_get_le_min_lane1_p3(data)                       ((0x0000F800&(data))>>11)
#define  DFE_P3_REG_DFE_EN_L1_P3_get_le_init_lane1_p3(data)                      ((0x000007C0&(data))>>6)
#define  DFE_P3_REG_DFE_EN_L1_P3_get_tap4_init_lane1_p3(data)                    (0x0000003F&(data))

#define  DFE_P3_REG_DFE_INIT0_L1_P3                                             0x1803CD64
#define  DFE_P3_REG_DFE_INIT0_L1_P3_reg_addr                                     "0xB803CD64"
#define  DFE_P3_REG_DFE_INIT0_L1_P3_reg                                          0xB803CD64
#define  DFE_P3_REG_DFE_INIT0_L1_P3_inst_addr                                    "0x0004"
#define  set_DFE_P3_REG_DFE_INIT0_L1_P3_reg(data)                                (*((volatile unsigned int*)DFE_P3_REG_DFE_INIT0_L1_P3_reg)=data)
#define  get_DFE_P3_REG_DFE_INIT0_L1_P3_reg                                      (*((volatile unsigned int*)DFE_P3_REG_DFE_INIT0_L1_P3_reg))
#define  DFE_P3_REG_DFE_INIT0_L1_P3_tap3_init_lane1_p3_shift                     (26)
#define  DFE_P3_REG_DFE_INIT0_L1_P3_tap2_init_lane1_p3_shift                     (20)
#define  DFE_P3_REG_DFE_INIT0_L1_P3_tap1_init_lane1_p3_shift                     (14)
#define  DFE_P3_REG_DFE_INIT0_L1_P3_tap0_init_lane1_p3_shift                     (7)
#define  DFE_P3_REG_DFE_INIT0_L1_P3_init1_rev0_lane1_p3_shift                    (4)
#define  DFE_P3_REG_DFE_INIT0_L1_P3_vth_init_lane1_p3_shift                      (0)
#define  DFE_P3_REG_DFE_INIT0_L1_P3_tap3_init_lane1_p3_mask                      (0xFC000000)
#define  DFE_P3_REG_DFE_INIT0_L1_P3_tap2_init_lane1_p3_mask                      (0x03F00000)
#define  DFE_P3_REG_DFE_INIT0_L1_P3_tap1_init_lane1_p3_mask                      (0x000FC000)
#define  DFE_P3_REG_DFE_INIT0_L1_P3_tap0_init_lane1_p3_mask                      (0x00003F80)
#define  DFE_P3_REG_DFE_INIT0_L1_P3_init1_rev0_lane1_p3_mask                     (0x00000070)
#define  DFE_P3_REG_DFE_INIT0_L1_P3_vth_init_lane1_p3_mask                       (0x0000000F)
#define  DFE_P3_REG_DFE_INIT0_L1_P3_tap3_init_lane1_p3(data)                     (0xFC000000&((data)<<26))
#define  DFE_P3_REG_DFE_INIT0_L1_P3_tap2_init_lane1_p3(data)                     (0x03F00000&((data)<<20))
#define  DFE_P3_REG_DFE_INIT0_L1_P3_tap1_init_lane1_p3(data)                     (0x000FC000&((data)<<14))
#define  DFE_P3_REG_DFE_INIT0_L1_P3_tap0_init_lane1_p3(data)                     (0x00003F80&((data)<<7))
#define  DFE_P3_REG_DFE_INIT0_L1_P3_init1_rev0_lane1_p3(data)                    (0x00000070&((data)<<4))
#define  DFE_P3_REG_DFE_INIT0_L1_P3_vth_init_lane1_p3(data)                      (0x0000000F&(data))
#define  DFE_P3_REG_DFE_INIT0_L1_P3_get_tap3_init_lane1_p3(data)                 ((0xFC000000&(data))>>26)
#define  DFE_P3_REG_DFE_INIT0_L1_P3_get_tap2_init_lane1_p3(data)                 ((0x03F00000&(data))>>20)
#define  DFE_P3_REG_DFE_INIT0_L1_P3_get_tap1_init_lane1_p3(data)                 ((0x000FC000&(data))>>14)
#define  DFE_P3_REG_DFE_INIT0_L1_P3_get_tap0_init_lane1_p3(data)                 ((0x00003F80&(data))>>7)
#define  DFE_P3_REG_DFE_INIT0_L1_P3_get_init1_rev0_lane1_p3(data)                ((0x00000070&(data))>>4)
#define  DFE_P3_REG_DFE_INIT0_L1_P3_get_vth_init_lane1_p3(data)                  (0x0000000F&(data))

#define  DFE_P3_REG_DFE_INIT1_L1_P3                                             0x1803CD68
#define  DFE_P3_REG_DFE_INIT1_L1_P3_reg_addr                                     "0xB803CD68"
#define  DFE_P3_REG_DFE_INIT1_L1_P3_reg                                          0xB803CD68
#define  DFE_P3_REG_DFE_INIT1_L1_P3_inst_addr                                    "0x0005"
#define  set_DFE_P3_REG_DFE_INIT1_L1_P3_reg(data)                                (*((volatile unsigned int*)DFE_P3_REG_DFE_INIT1_L1_P3_reg)=data)
#define  get_DFE_P3_REG_DFE_INIT1_L1_P3_reg                                      (*((volatile unsigned int*)DFE_P3_REG_DFE_INIT1_L1_P3_reg))
#define  DFE_P3_REG_DFE_INIT1_L1_P3_load_in_init_lane1_p3_shift                  (24)
#define  DFE_P3_REG_DFE_INIT1_L1_P3_init1_rev1_lane1_p3_shift                    (18)
#define  DFE_P3_REG_DFE_INIT1_L1_P3_de_video_inv_lane1_p3_shift                  (17)
#define  DFE_P3_REG_DFE_INIT1_L1_P3_de_packet_inv_lane1_p3_shift                 (16)
#define  DFE_P3_REG_DFE_INIT1_L1_P3_de_video_en_lane1_p3_shift                   (15)
#define  DFE_P3_REG_DFE_INIT1_L1_P3_de_packet_en_lane1_p3_shift                  (14)
#define  DFE_P3_REG_DFE_INIT1_L1_P3_init1_rev2_lane1_p3_shift                    (0)
#define  DFE_P3_REG_DFE_INIT1_L1_P3_load_in_init_lane1_p3_mask                   (0xFF000000)
#define  DFE_P3_REG_DFE_INIT1_L1_P3_init1_rev1_lane1_p3_mask                     (0x00FC0000)
#define  DFE_P3_REG_DFE_INIT1_L1_P3_de_video_inv_lane1_p3_mask                   (0x00020000)
#define  DFE_P3_REG_DFE_INIT1_L1_P3_de_packet_inv_lane1_p3_mask                  (0x00010000)
#define  DFE_P3_REG_DFE_INIT1_L1_P3_de_video_en_lane1_p3_mask                    (0x00008000)
#define  DFE_P3_REG_DFE_INIT1_L1_P3_de_packet_en_lane1_p3_mask                   (0x00004000)
#define  DFE_P3_REG_DFE_INIT1_L1_P3_init1_rev2_lane1_p3_mask                     (0x00003FFF)
#define  DFE_P3_REG_DFE_INIT1_L1_P3_load_in_init_lane1_p3(data)                  (0xFF000000&((data)<<24))
#define  DFE_P3_REG_DFE_INIT1_L1_P3_init1_rev1_lane1_p3(data)                    (0x00FC0000&((data)<<18))
#define  DFE_P3_REG_DFE_INIT1_L1_P3_de_video_inv_lane1_p3(data)                  (0x00020000&((data)<<17))
#define  DFE_P3_REG_DFE_INIT1_L1_P3_de_packet_inv_lane1_p3(data)                 (0x00010000&((data)<<16))
#define  DFE_P3_REG_DFE_INIT1_L1_P3_de_video_en_lane1_p3(data)                   (0x00008000&((data)<<15))
#define  DFE_P3_REG_DFE_INIT1_L1_P3_de_packet_en_lane1_p3(data)                  (0x00004000&((data)<<14))
#define  DFE_P3_REG_DFE_INIT1_L1_P3_init1_rev2_lane1_p3(data)                    (0x00003FFF&(data))
#define  DFE_P3_REG_DFE_INIT1_L1_P3_get_load_in_init_lane1_p3(data)              ((0xFF000000&(data))>>24)
#define  DFE_P3_REG_DFE_INIT1_L1_P3_get_init1_rev1_lane1_p3(data)                ((0x00FC0000&(data))>>18)
#define  DFE_P3_REG_DFE_INIT1_L1_P3_get_de_video_inv_lane1_p3(data)              ((0x00020000&(data))>>17)
#define  DFE_P3_REG_DFE_INIT1_L1_P3_get_de_packet_inv_lane1_p3(data)             ((0x00010000&(data))>>16)
#define  DFE_P3_REG_DFE_INIT1_L1_P3_get_de_video_en_lane1_p3(data)               ((0x00008000&(data))>>15)
#define  DFE_P3_REG_DFE_INIT1_L1_P3_get_de_packet_en_lane1_p3(data)              ((0x00004000&(data))>>14)
#define  DFE_P3_REG_DFE_INIT1_L1_P3_get_init1_rev2_lane1_p3(data)                (0x00003FFF&(data))

#define  DFE_P3_REG_DFE_EN_L2_P3                                                0x1803CD70
#define  DFE_P3_REG_DFE_EN_L2_P3_reg_addr                                        "0xB803CD70"
#define  DFE_P3_REG_DFE_EN_L2_P3_reg                                             0xB803CD70
#define  DFE_P3_REG_DFE_EN_L2_P3_inst_addr                                       "0x0006"
#define  set_DFE_P3_REG_DFE_EN_L2_P3_reg(data)                                   (*((volatile unsigned int*)DFE_P3_REG_DFE_EN_L2_P3_reg)=data)
#define  get_DFE_P3_REG_DFE_EN_L2_P3_reg                                         (*((volatile unsigned int*)DFE_P3_REG_DFE_EN_L2_P3_reg))
#define  DFE_P3_REG_DFE_EN_L2_P3_clk_inv_lane2_p3_shift                          (31)
#define  DFE_P3_REG_DFE_EN_L2_P3_timer_ctrl_en_lane2_p3_shift                    (30)
#define  DFE_P3_REG_DFE_EN_L2_P3_reduce_adapt_gain_lane2_p3_shift                (28)
#define  DFE_P3_REG_DFE_EN_L2_P3_rl_det_en_lane2_p3_shift                        (27)
#define  DFE_P3_REG_DFE_EN_L2_P3_tap1_trans_mode_lane2_p3_shift                  (26)
#define  DFE_P3_REG_DFE_EN_L2_P3_rl_threshold_lane2_p3_shift                     (24)
#define  DFE_P3_REG_DFE_EN_L2_P3_dfe_adapt_en_lane2_p3_shift                     (16)
#define  DFE_P3_REG_DFE_EN_L2_P3_le_min_lane2_p3_shift                           (11)
#define  DFE_P3_REG_DFE_EN_L2_P3_le_init_lane2_p3_shift                          (6)
#define  DFE_P3_REG_DFE_EN_L2_P3_tap4_init_lane2_p3_shift                        (0)
#define  DFE_P3_REG_DFE_EN_L2_P3_clk_inv_lane2_p3_mask                           (0x80000000)
#define  DFE_P3_REG_DFE_EN_L2_P3_timer_ctrl_en_lane2_p3_mask                     (0x40000000)
#define  DFE_P3_REG_DFE_EN_L2_P3_reduce_adapt_gain_lane2_p3_mask                 (0x30000000)
#define  DFE_P3_REG_DFE_EN_L2_P3_rl_det_en_lane2_p3_mask                         (0x08000000)
#define  DFE_P3_REG_DFE_EN_L2_P3_tap1_trans_mode_lane2_p3_mask                   (0x04000000)
#define  DFE_P3_REG_DFE_EN_L2_P3_rl_threshold_lane2_p3_mask                      (0x03000000)
#define  DFE_P3_REG_DFE_EN_L2_P3_dfe_adapt_en_lane2_p3_mask                      (0x00FF0000)
#define  DFE_P3_REG_DFE_EN_L2_P3_le_min_lane2_p3_mask                            (0x0000F800)
#define  DFE_P3_REG_DFE_EN_L2_P3_le_init_lane2_p3_mask                           (0x000007C0)
#define  DFE_P3_REG_DFE_EN_L2_P3_tap4_init_lane2_p3_mask                         (0x0000003F)
#define  DFE_P3_REG_DFE_EN_L2_P3_clk_inv_lane2_p3(data)                          (0x80000000&((data)<<31))
#define  DFE_P3_REG_DFE_EN_L2_P3_timer_ctrl_en_lane2_p3(data)                    (0x40000000&((data)<<30))
#define  DFE_P3_REG_DFE_EN_L2_P3_reduce_adapt_gain_lane2_p3(data)                (0x30000000&((data)<<28))
#define  DFE_P3_REG_DFE_EN_L2_P3_rl_det_en_lane2_p3(data)                        (0x08000000&((data)<<27))
#define  DFE_P3_REG_DFE_EN_L2_P3_tap1_trans_mode_lane2_p3(data)                  (0x04000000&((data)<<26))
#define  DFE_P3_REG_DFE_EN_L2_P3_rl_threshold_lane2_p3(data)                     (0x03000000&((data)<<24))
#define  DFE_P3_REG_DFE_EN_L2_P3_dfe_adapt_en_lane2_p3(data)                     (0x00FF0000&((data)<<16))
#define  DFE_P3_REG_DFE_EN_L2_P3_le_min_lane2_p3(data)                           (0x0000F800&((data)<<11))
#define  DFE_P3_REG_DFE_EN_L2_P3_le_init_lane2_p3(data)                          (0x000007C0&((data)<<6))
#define  DFE_P3_REG_DFE_EN_L2_P3_tap4_init_lane2_p3(data)                        (0x0000003F&(data))
#define  DFE_P3_REG_DFE_EN_L2_P3_get_clk_inv_lane2_p3(data)                      ((0x80000000&(data))>>31)
#define  DFE_P3_REG_DFE_EN_L2_P3_get_timer_ctrl_en_lane2_p3(data)                ((0x40000000&(data))>>30)
#define  DFE_P3_REG_DFE_EN_L2_P3_get_reduce_adapt_gain_lane2_p3(data)            ((0x30000000&(data))>>28)
#define  DFE_P3_REG_DFE_EN_L2_P3_get_rl_det_en_lane2_p3(data)                    ((0x08000000&(data))>>27)
#define  DFE_P3_REG_DFE_EN_L2_P3_get_tap1_trans_mode_lane2_p3(data)              ((0x04000000&(data))>>26)
#define  DFE_P3_REG_DFE_EN_L2_P3_get_rl_threshold_lane2_p3(data)                 ((0x03000000&(data))>>24)
#define  DFE_P3_REG_DFE_EN_L2_P3_get_dfe_adapt_en_lane2_p3(data)                 ((0x00FF0000&(data))>>16)
#define  DFE_P3_REG_DFE_EN_L2_P3_get_le_min_lane2_p3(data)                       ((0x0000F800&(data))>>11)
#define  DFE_P3_REG_DFE_EN_L2_P3_get_le_init_lane2_p3(data)                      ((0x000007C0&(data))>>6)
#define  DFE_P3_REG_DFE_EN_L2_P3_get_tap4_init_lane2_p3(data)                    (0x0000003F&(data))

#define  DFE_P3_REG_DFE_INIT0_L2_P3                                             0x1803CD74
#define  DFE_P3_REG_DFE_INIT0_L2_P3_reg_addr                                     "0xB803CD74"
#define  DFE_P3_REG_DFE_INIT0_L2_P3_reg                                          0xB803CD74
#define  DFE_P3_REG_DFE_INIT0_L2_P3_inst_addr                                    "0x0007"
#define  set_DFE_P3_REG_DFE_INIT0_L2_P3_reg(data)                                (*((volatile unsigned int*)DFE_P3_REG_DFE_INIT0_L2_P3_reg)=data)
#define  get_DFE_P3_REG_DFE_INIT0_L2_P3_reg                                      (*((volatile unsigned int*)DFE_P3_REG_DFE_INIT0_L2_P3_reg))
#define  DFE_P3_REG_DFE_INIT0_L2_P3_tap3_init_lane2_p3_shift                     (26)
#define  DFE_P3_REG_DFE_INIT0_L2_P3_tap2_init_lane2_p3_shift                     (20)
#define  DFE_P3_REG_DFE_INIT0_L2_P3_tap1_init_lane2_p3_shift                     (14)
#define  DFE_P3_REG_DFE_INIT0_L2_P3_tap0_init_lane2_p3_shift                     (7)
#define  DFE_P3_REG_DFE_INIT0_L2_P3_init1_rev0_lane2_p3_shift                    (4)
#define  DFE_P3_REG_DFE_INIT0_L2_P3_vth_init_lane2_p3_shift                      (0)
#define  DFE_P3_REG_DFE_INIT0_L2_P3_tap3_init_lane2_p3_mask                      (0xFC000000)
#define  DFE_P3_REG_DFE_INIT0_L2_P3_tap2_init_lane2_p3_mask                      (0x03F00000)
#define  DFE_P3_REG_DFE_INIT0_L2_P3_tap1_init_lane2_p3_mask                      (0x000FC000)
#define  DFE_P3_REG_DFE_INIT0_L2_P3_tap0_init_lane2_p3_mask                      (0x00003F80)
#define  DFE_P3_REG_DFE_INIT0_L2_P3_init1_rev0_lane2_p3_mask                     (0x00000070)
#define  DFE_P3_REG_DFE_INIT0_L2_P3_vth_init_lane2_p3_mask                       (0x0000000F)
#define  DFE_P3_REG_DFE_INIT0_L2_P3_tap3_init_lane2_p3(data)                     (0xFC000000&((data)<<26))
#define  DFE_P3_REG_DFE_INIT0_L2_P3_tap2_init_lane2_p3(data)                     (0x03F00000&((data)<<20))
#define  DFE_P3_REG_DFE_INIT0_L2_P3_tap1_init_lane2_p3(data)                     (0x000FC000&((data)<<14))
#define  DFE_P3_REG_DFE_INIT0_L2_P3_tap0_init_lane2_p3(data)                     (0x00003F80&((data)<<7))
#define  DFE_P3_REG_DFE_INIT0_L2_P3_init1_rev0_lane2_p3(data)                    (0x00000070&((data)<<4))
#define  DFE_P3_REG_DFE_INIT0_L2_P3_vth_init_lane2_p3(data)                      (0x0000000F&(data))
#define  DFE_P3_REG_DFE_INIT0_L2_P3_get_tap3_init_lane2_p3(data)                 ((0xFC000000&(data))>>26)
#define  DFE_P3_REG_DFE_INIT0_L2_P3_get_tap2_init_lane2_p3(data)                 ((0x03F00000&(data))>>20)
#define  DFE_P3_REG_DFE_INIT0_L2_P3_get_tap1_init_lane2_p3(data)                 ((0x000FC000&(data))>>14)
#define  DFE_P3_REG_DFE_INIT0_L2_P3_get_tap0_init_lane2_p3(data)                 ((0x00003F80&(data))>>7)
#define  DFE_P3_REG_DFE_INIT0_L2_P3_get_init1_rev0_lane2_p3(data)                ((0x00000070&(data))>>4)
#define  DFE_P3_REG_DFE_INIT0_L2_P3_get_vth_init_lane2_p3(data)                  (0x0000000F&(data))

#define  DFE_P3_REG_DFE_INIT1_L2_P3                                             0x1803CD78
#define  DFE_P3_REG_DFE_INIT1_L2_P3_reg_addr                                     "0xB803CD78"
#define  DFE_P3_REG_DFE_INIT1_L2_P3_reg                                          0xB803CD78
#define  DFE_P3_REG_DFE_INIT1_L2_P3_inst_addr                                    "0x0008"
#define  set_DFE_P3_REG_DFE_INIT1_L2_P3_reg(data)                                (*((volatile unsigned int*)DFE_P3_REG_DFE_INIT1_L2_P3_reg)=data)
#define  get_DFE_P3_REG_DFE_INIT1_L2_P3_reg                                      (*((volatile unsigned int*)DFE_P3_REG_DFE_INIT1_L2_P3_reg))
#define  DFE_P3_REG_DFE_INIT1_L2_P3_load_in_init_lane2_p3_shift                  (24)
#define  DFE_P3_REG_DFE_INIT1_L2_P3_init1_rev1_lane2_p3_shift                    (18)
#define  DFE_P3_REG_DFE_INIT1_L2_P3_de_video_inv_lane2_p3_shift                  (17)
#define  DFE_P3_REG_DFE_INIT1_L2_P3_de_packet_inv_lane2_p3_shift                 (16)
#define  DFE_P3_REG_DFE_INIT1_L2_P3_de_video_en_lane2_p3_shift                   (15)
#define  DFE_P3_REG_DFE_INIT1_L2_P3_de_packet_en_lane2_p3_shift                  (14)
#define  DFE_P3_REG_DFE_INIT1_L2_P3_init1_rev2_lane2_p3_shift                    (0)
#define  DFE_P3_REG_DFE_INIT1_L2_P3_load_in_init_lane2_p3_mask                   (0xFF000000)
#define  DFE_P3_REG_DFE_INIT1_L2_P3_init1_rev1_lane2_p3_mask                     (0x00FC0000)
#define  DFE_P3_REG_DFE_INIT1_L2_P3_de_video_inv_lane2_p3_mask                   (0x00020000)
#define  DFE_P3_REG_DFE_INIT1_L2_P3_de_packet_inv_lane2_p3_mask                  (0x00010000)
#define  DFE_P3_REG_DFE_INIT1_L2_P3_de_video_en_lane2_p3_mask                    (0x00008000)
#define  DFE_P3_REG_DFE_INIT1_L2_P3_de_packet_en_lane2_p3_mask                   (0x00004000)
#define  DFE_P3_REG_DFE_INIT1_L2_P3_init1_rev2_lane2_p3_mask                     (0x00003FFF)
#define  DFE_P3_REG_DFE_INIT1_L2_P3_load_in_init_lane2_p3(data)                  (0xFF000000&((data)<<24))
#define  DFE_P3_REG_DFE_INIT1_L2_P3_init1_rev1_lane2_p3(data)                    (0x00FC0000&((data)<<18))
#define  DFE_P3_REG_DFE_INIT1_L2_P3_de_video_inv_lane2_p3(data)                  (0x00020000&((data)<<17))
#define  DFE_P3_REG_DFE_INIT1_L2_P3_de_packet_inv_lane2_p3(data)                 (0x00010000&((data)<<16))
#define  DFE_P3_REG_DFE_INIT1_L2_P3_de_video_en_lane2_p3(data)                   (0x00008000&((data)<<15))
#define  DFE_P3_REG_DFE_INIT1_L2_P3_de_packet_en_lane2_p3(data)                  (0x00004000&((data)<<14))
#define  DFE_P3_REG_DFE_INIT1_L2_P3_init1_rev2_lane2_p3(data)                    (0x00003FFF&(data))
#define  DFE_P3_REG_DFE_INIT1_L2_P3_get_load_in_init_lane2_p3(data)              ((0xFF000000&(data))>>24)
#define  DFE_P3_REG_DFE_INIT1_L2_P3_get_init1_rev1_lane2_p3(data)                ((0x00FC0000&(data))>>18)
#define  DFE_P3_REG_DFE_INIT1_L2_P3_get_de_video_inv_lane2_p3(data)              ((0x00020000&(data))>>17)
#define  DFE_P3_REG_DFE_INIT1_L2_P3_get_de_packet_inv_lane2_p3(data)             ((0x00010000&(data))>>16)
#define  DFE_P3_REG_DFE_INIT1_L2_P3_get_de_video_en_lane2_p3(data)               ((0x00008000&(data))>>15)
#define  DFE_P3_REG_DFE_INIT1_L2_P3_get_de_packet_en_lane2_p3(data)              ((0x00004000&(data))>>14)
#define  DFE_P3_REG_DFE_INIT1_L2_P3_get_init1_rev2_lane2_p3(data)                (0x00003FFF&(data))

#define  DFE_P3_REG_DFE_MODE_P3                                                 0x1803CD80
#define  DFE_P3_REG_DFE_MODE_P3_reg_addr                                         "0xB803CD80"
#define  DFE_P3_REG_DFE_MODE_P3_reg                                              0xB803CD80
#define  DFE_P3_REG_DFE_MODE_P3_inst_addr                                        "0x0009"
#define  set_DFE_P3_REG_DFE_MODE_P3_reg(data)                                    (*((volatile unsigned int*)DFE_P3_REG_DFE_MODE_P3_reg)=data)
#define  get_DFE_P3_REG_DFE_MODE_P3_reg                                          (*((volatile unsigned int*)DFE_P3_REG_DFE_MODE_P3_reg))
#define  DFE_P3_REG_DFE_MODE_P3_adapt_mode_p3_shift                              (30)
#define  DFE_P3_REG_DFE_MODE_P3_edge_det_mode_p3_shift                           (29)
#define  DFE_P3_REG_DFE_MODE_P3_transition_only_p3_shift                         (28)
#define  DFE_P3_REG_DFE_MODE_P3_le_auto_reload_p3_shift                          (27)
#define  DFE_P3_REG_DFE_MODE_P3_tap1_delay_p3_shift                              (24)
#define  DFE_P3_REG_DFE_MODE_P3_tap24_delay_p3_shift                             (21)
#define  DFE_P3_REG_DFE_MODE_P3_le_delay_p3_shift                                (18)
#define  DFE_P3_REG_DFE_MODE_P3_servo_delay_p3_shift                             (16)
#define  DFE_P3_REG_DFE_MODE_P3_gray_en_p3_shift                                 (8)
#define  DFE_P3_REG_DFE_MODE_P3_dfe_adapt_rstb_p3_shift                          (4)
#define  DFE_P3_REG_DFE_MODE_P3_tap0_trans_p3_shift                              (3)
#define  DFE_P3_REG_DFE_MODE_P3_tap0_notrans_p3_shift                            (2)
#define  DFE_P3_REG_DFE_MODE_P3_mode_rev0_p3_shift                               (0)
#define  DFE_P3_REG_DFE_MODE_P3_adapt_mode_p3_mask                               (0xC0000000)
#define  DFE_P3_REG_DFE_MODE_P3_edge_det_mode_p3_mask                            (0x20000000)
#define  DFE_P3_REG_DFE_MODE_P3_transition_only_p3_mask                          (0x10000000)
#define  DFE_P3_REG_DFE_MODE_P3_le_auto_reload_p3_mask                           (0x08000000)
#define  DFE_P3_REG_DFE_MODE_P3_tap1_delay_p3_mask                               (0x07000000)
#define  DFE_P3_REG_DFE_MODE_P3_tap24_delay_p3_mask                              (0x00E00000)
#define  DFE_P3_REG_DFE_MODE_P3_le_delay_p3_mask                                 (0x001C0000)
#define  DFE_P3_REG_DFE_MODE_P3_servo_delay_p3_mask                              (0x00030000)
#define  DFE_P3_REG_DFE_MODE_P3_gray_en_p3_mask                                  (0x0000FF00)
#define  DFE_P3_REG_DFE_MODE_P3_dfe_adapt_rstb_p3_mask                           (0x000000F0)
#define  DFE_P3_REG_DFE_MODE_P3_tap0_trans_p3_mask                               (0x00000008)
#define  DFE_P3_REG_DFE_MODE_P3_tap0_notrans_p3_mask                             (0x00000004)
#define  DFE_P3_REG_DFE_MODE_P3_mode_rev0_p3_mask                                (0x00000003)
#define  DFE_P3_REG_DFE_MODE_P3_adapt_mode_p3(data)                              (0xC0000000&((data)<<30))
#define  DFE_P3_REG_DFE_MODE_P3_edge_det_mode_p3(data)                           (0x20000000&((data)<<29))
#define  DFE_P3_REG_DFE_MODE_P3_transition_only_p3(data)                         (0x10000000&((data)<<28))
#define  DFE_P3_REG_DFE_MODE_P3_le_auto_reload_p3(data)                          (0x08000000&((data)<<27))
#define  DFE_P3_REG_DFE_MODE_P3_tap1_delay_p3(data)                              (0x07000000&((data)<<24))
#define  DFE_P3_REG_DFE_MODE_P3_tap24_delay_p3(data)                             (0x00E00000&((data)<<21))
#define  DFE_P3_REG_DFE_MODE_P3_le_delay_p3(data)                                (0x001C0000&((data)<<18))
#define  DFE_P3_REG_DFE_MODE_P3_servo_delay_p3(data)                             (0x00030000&((data)<<16))
#define  DFE_P3_REG_DFE_MODE_P3_gray_en_p3(data)                                 (0x0000FF00&((data)<<8))
#define  DFE_P3_REG_DFE_MODE_P3_dfe_adapt_rstb_p3(data)                          (0x000000F0&((data)<<4))
#define  DFE_P3_REG_DFE_MODE_P3_tap0_trans_p3(data)                              (0x00000008&((data)<<3))
#define  DFE_P3_REG_DFE_MODE_P3_tap0_notrans_p3(data)                            (0x00000004&((data)<<2))
#define  DFE_P3_REG_DFE_MODE_P3_mode_rev0_p3(data)                               (0x00000003&(data))
#define  DFE_P3_REG_DFE_MODE_P3_get_adapt_mode_p3(data)                          ((0xC0000000&(data))>>30)
#define  DFE_P3_REG_DFE_MODE_P3_get_edge_det_mode_p3(data)                       ((0x20000000&(data))>>29)
#define  DFE_P3_REG_DFE_MODE_P3_get_transition_only_p3(data)                     ((0x10000000&(data))>>28)
#define  DFE_P3_REG_DFE_MODE_P3_get_le_auto_reload_p3(data)                      ((0x08000000&(data))>>27)
#define  DFE_P3_REG_DFE_MODE_P3_get_tap1_delay_p3(data)                          ((0x07000000&(data))>>24)
#define  DFE_P3_REG_DFE_MODE_P3_get_tap24_delay_p3(data)                         ((0x00E00000&(data))>>21)
#define  DFE_P3_REG_DFE_MODE_P3_get_le_delay_p3(data)                            ((0x001C0000&(data))>>18)
#define  DFE_P3_REG_DFE_MODE_P3_get_servo_delay_p3(data)                         ((0x00030000&(data))>>16)
#define  DFE_P3_REG_DFE_MODE_P3_get_gray_en_p3(data)                             ((0x0000FF00&(data))>>8)
#define  DFE_P3_REG_DFE_MODE_P3_get_dfe_adapt_rstb_p3(data)                      ((0x000000F0&(data))>>4)
#define  DFE_P3_REG_DFE_MODE_P3_get_tap0_trans_p3(data)                          ((0x00000008&(data))>>3)
#define  DFE_P3_REG_DFE_MODE_P3_get_tap0_notrans_p3(data)                        ((0x00000004&(data))>>2)
#define  DFE_P3_REG_DFE_MODE_P3_get_mode_rev0_p3(data)                           (0x00000003&(data))

#define  DFE_P3_REG_DFE_GAIN_P3                                                 0x1803CD84
#define  DFE_P3_REG_DFE_GAIN_P3_reg_addr                                         "0xB803CD84"
#define  DFE_P3_REG_DFE_GAIN_P3_reg                                              0xB803CD84
#define  DFE_P3_REG_DFE_GAIN_P3_inst_addr                                        "0x000A"
#define  set_DFE_P3_REG_DFE_GAIN_P3_reg(data)                                    (*((volatile unsigned int*)DFE_P3_REG_DFE_GAIN_P3_reg)=data)
#define  get_DFE_P3_REG_DFE_GAIN_P3_reg                                          (*((volatile unsigned int*)DFE_P3_REG_DFE_GAIN_P3_reg))
#define  DFE_P3_REG_DFE_GAIN_P3_tap0_gain_p3_shift                               (29)
#define  DFE_P3_REG_DFE_GAIN_P3_tap1_gain_p3_shift                               (26)
#define  DFE_P3_REG_DFE_GAIN_P3_tap2_gain_p3_shift                               (23)
#define  DFE_P3_REG_DFE_GAIN_P3_gain_rev0_p3_shift                               (14)
#define  DFE_P3_REG_DFE_GAIN_P3_le_gain1_p3_shift                                (11)
#define  DFE_P3_REG_DFE_GAIN_P3_le_gain2_p3_shift                                (8)
#define  DFE_P3_REG_DFE_GAIN_P3_le2_sign_p3_shift                                (7)
#define  DFE_P3_REG_DFE_GAIN_P3_le_gain_prec_p3_shift                            (4)
#define  DFE_P3_REG_DFE_GAIN_P3_le_prec_sign_p3_shift                            (3)
#define  DFE_P3_REG_DFE_GAIN_P3_trans_rlength_p3_shift                           (0)
#define  DFE_P3_REG_DFE_GAIN_P3_tap0_gain_p3_mask                                (0xE0000000)
#define  DFE_P3_REG_DFE_GAIN_P3_tap1_gain_p3_mask                                (0x1C000000)
#define  DFE_P3_REG_DFE_GAIN_P3_tap2_gain_p3_mask                                (0x03800000)
#define  DFE_P3_REG_DFE_GAIN_P3_gain_rev0_p3_mask                                (0x007FC000)
#define  DFE_P3_REG_DFE_GAIN_P3_le_gain1_p3_mask                                 (0x00003800)
#define  DFE_P3_REG_DFE_GAIN_P3_le_gain2_p3_mask                                 (0x00000700)
#define  DFE_P3_REG_DFE_GAIN_P3_le2_sign_p3_mask                                 (0x00000080)
#define  DFE_P3_REG_DFE_GAIN_P3_le_gain_prec_p3_mask                             (0x00000070)
#define  DFE_P3_REG_DFE_GAIN_P3_le_prec_sign_p3_mask                             (0x00000008)
#define  DFE_P3_REG_DFE_GAIN_P3_trans_rlength_p3_mask                            (0x00000007)
#define  DFE_P3_REG_DFE_GAIN_P3_tap0_gain_p3(data)                               (0xE0000000&((data)<<29))
#define  DFE_P3_REG_DFE_GAIN_P3_tap1_gain_p3(data)                               (0x1C000000&((data)<<26))
#define  DFE_P3_REG_DFE_GAIN_P3_tap2_gain_p3(data)                               (0x03800000&((data)<<23))
#define  DFE_P3_REG_DFE_GAIN_P3_gain_rev0_p3(data)                               (0x007FC000&((data)<<14))
#define  DFE_P3_REG_DFE_GAIN_P3_le_gain1_p3(data)                                (0x00003800&((data)<<11))
#define  DFE_P3_REG_DFE_GAIN_P3_le_gain2_p3(data)                                (0x00000700&((data)<<8))
#define  DFE_P3_REG_DFE_GAIN_P3_le2_sign_p3(data)                                (0x00000080&((data)<<7))
#define  DFE_P3_REG_DFE_GAIN_P3_le_gain_prec_p3(data)                            (0x00000070&((data)<<4))
#define  DFE_P3_REG_DFE_GAIN_P3_le_prec_sign_p3(data)                            (0x00000008&((data)<<3))
#define  DFE_P3_REG_DFE_GAIN_P3_trans_rlength_p3(data)                           (0x00000007&(data))
#define  DFE_P3_REG_DFE_GAIN_P3_get_tap0_gain_p3(data)                           ((0xE0000000&(data))>>29)
#define  DFE_P3_REG_DFE_GAIN_P3_get_tap1_gain_p3(data)                           ((0x1C000000&(data))>>26)
#define  DFE_P3_REG_DFE_GAIN_P3_get_tap2_gain_p3(data)                           ((0x03800000&(data))>>23)
#define  DFE_P3_REG_DFE_GAIN_P3_get_gain_rev0_p3(data)                           ((0x007FC000&(data))>>14)
#define  DFE_P3_REG_DFE_GAIN_P3_get_le_gain1_p3(data)                            ((0x00003800&(data))>>11)
#define  DFE_P3_REG_DFE_GAIN_P3_get_le_gain2_p3(data)                            ((0x00000700&(data))>>8)
#define  DFE_P3_REG_DFE_GAIN_P3_get_le2_sign_p3(data)                            ((0x00000080&(data))>>7)
#define  DFE_P3_REG_DFE_GAIN_P3_get_le_gain_prec_p3(data)                        ((0x00000070&(data))>>4)
#define  DFE_P3_REG_DFE_GAIN_P3_get_le_prec_sign_p3(data)                        ((0x00000008&(data))>>3)
#define  DFE_P3_REG_DFE_GAIN_P3_get_trans_rlength_p3(data)                       (0x00000007&(data))

#define  DFE_P3_REG_DFE_LIMIT0_P3                                               0x1803CD88
#define  DFE_P3_REG_DFE_LIMIT0_P3_reg_addr                                       "0xB803CD88"
#define  DFE_P3_REG_DFE_LIMIT0_P3_reg                                            0xB803CD88
#define  DFE_P3_REG_DFE_LIMIT0_P3_inst_addr                                      "0x000B"
#define  set_DFE_P3_REG_DFE_LIMIT0_P3_reg(data)                                  (*((volatile unsigned int*)DFE_P3_REG_DFE_LIMIT0_P3_reg)=data)
#define  get_DFE_P3_REG_DFE_LIMIT0_P3_reg                                        (*((volatile unsigned int*)DFE_P3_REG_DFE_LIMIT0_P3_reg))
#define  DFE_P3_REG_DFE_LIMIT0_P3_limit0_rev_p3_shift                            (26)
#define  DFE_P3_REG_DFE_LIMIT0_P3_tap1_min_p3_shift                              (20)
#define  DFE_P3_REG_DFE_LIMIT0_P3_tap2_max_p3_shift                              (15)
#define  DFE_P3_REG_DFE_LIMIT0_P3_tap2_min_p3_shift                              (10)
#define  DFE_P3_REG_DFE_LIMIT0_P3_limit0_rev0_p3_shift                           (0)
#define  DFE_P3_REG_DFE_LIMIT0_P3_limit0_rev_p3_mask                             (0xFC000000)
#define  DFE_P3_REG_DFE_LIMIT0_P3_tap1_min_p3_mask                               (0x03F00000)
#define  DFE_P3_REG_DFE_LIMIT0_P3_tap2_max_p3_mask                               (0x000F8000)
#define  DFE_P3_REG_DFE_LIMIT0_P3_tap2_min_p3_mask                               (0x00007C00)
#define  DFE_P3_REG_DFE_LIMIT0_P3_limit0_rev0_p3_mask                            (0x000003FF)
#define  DFE_P3_REG_DFE_LIMIT0_P3_limit0_rev_p3(data)                            (0xFC000000&((data)<<26))
#define  DFE_P3_REG_DFE_LIMIT0_P3_tap1_min_p3(data)                              (0x03F00000&((data)<<20))
#define  DFE_P3_REG_DFE_LIMIT0_P3_tap2_max_p3(data)                              (0x000F8000&((data)<<15))
#define  DFE_P3_REG_DFE_LIMIT0_P3_tap2_min_p3(data)                              (0x00007C00&((data)<<10))
#define  DFE_P3_REG_DFE_LIMIT0_P3_limit0_rev0_p3(data)                           (0x000003FF&(data))
#define  DFE_P3_REG_DFE_LIMIT0_P3_get_limit0_rev_p3(data)                        ((0xFC000000&(data))>>26)
#define  DFE_P3_REG_DFE_LIMIT0_P3_get_tap1_min_p3(data)                          ((0x03F00000&(data))>>20)
#define  DFE_P3_REG_DFE_LIMIT0_P3_get_tap2_max_p3(data)                          ((0x000F8000&(data))>>15)
#define  DFE_P3_REG_DFE_LIMIT0_P3_get_tap2_min_p3(data)                          ((0x00007C00&(data))>>10)
#define  DFE_P3_REG_DFE_LIMIT0_P3_get_limit0_rev0_p3(data)                       (0x000003FF&(data))

#define  DFE_P3_REG_DFE_LIMIT1_P3                                               0x1803CD8C
#define  DFE_P3_REG_DFE_LIMIT1_P3_reg_addr                                       "0xB803CD8C"
#define  DFE_P3_REG_DFE_LIMIT1_P3_reg                                            0xB803CD8C
#define  DFE_P3_REG_DFE_LIMIT1_P3_inst_addr                                      "0x000C"
#define  set_DFE_P3_REG_DFE_LIMIT1_P3_reg(data)                                  (*((volatile unsigned int*)DFE_P3_REG_DFE_LIMIT1_P3_reg)=data)
#define  get_DFE_P3_REG_DFE_LIMIT1_P3_reg                                        (*((volatile unsigned int*)DFE_P3_REG_DFE_LIMIT1_P3_reg))
#define  DFE_P3_REG_DFE_LIMIT1_P3_limit1_rev0_p3_shift                           (22)
#define  DFE_P3_REG_DFE_LIMIT1_P3_vth_min_p3_shift                               (19)
#define  DFE_P3_REG_DFE_LIMIT1_P3_vth_max_p3_shift                               (15)
#define  DFE_P3_REG_DFE_LIMIT1_P3_vth_threshold_p3_shift                         (12)
#define  DFE_P3_REG_DFE_LIMIT1_P3_tap0_threshold_p3_shift                        (8)
#define  DFE_P3_REG_DFE_LIMIT1_P3_tap0_adjust_p3_shift                           (6)
#define  DFE_P3_REG_DFE_LIMIT1_P3_tap1_trans_p3_shift                            (5)
#define  DFE_P3_REG_DFE_LIMIT1_P3_edge_last_notrans_p3_shift                     (4)
#define  DFE_P3_REG_DFE_LIMIT1_P3_limit1_rev_p3_shift                            (0)
#define  DFE_P3_REG_DFE_LIMIT1_P3_limit1_rev0_p3_mask                            (0xFFC00000)
#define  DFE_P3_REG_DFE_LIMIT1_P3_vth_min_p3_mask                                (0x00380000)
#define  DFE_P3_REG_DFE_LIMIT1_P3_vth_max_p3_mask                                (0x00078000)
#define  DFE_P3_REG_DFE_LIMIT1_P3_vth_threshold_p3_mask                          (0x00007000)
#define  DFE_P3_REG_DFE_LIMIT1_P3_tap0_threshold_p3_mask                         (0x00000F00)
#define  DFE_P3_REG_DFE_LIMIT1_P3_tap0_adjust_p3_mask                            (0x000000C0)
#define  DFE_P3_REG_DFE_LIMIT1_P3_tap1_trans_p3_mask                             (0x00000020)
#define  DFE_P3_REG_DFE_LIMIT1_P3_edge_last_notrans_p3_mask                      (0x00000010)
#define  DFE_P3_REG_DFE_LIMIT1_P3_limit1_rev_p3_mask                             (0x0000000F)
#define  DFE_P3_REG_DFE_LIMIT1_P3_limit1_rev0_p3(data)                           (0xFFC00000&((data)<<22))
#define  DFE_P3_REG_DFE_LIMIT1_P3_vth_min_p3(data)                               (0x00380000&((data)<<19))
#define  DFE_P3_REG_DFE_LIMIT1_P3_vth_max_p3(data)                               (0x00078000&((data)<<15))
#define  DFE_P3_REG_DFE_LIMIT1_P3_vth_threshold_p3(data)                         (0x00007000&((data)<<12))
#define  DFE_P3_REG_DFE_LIMIT1_P3_tap0_threshold_p3(data)                        (0x00000F00&((data)<<8))
#define  DFE_P3_REG_DFE_LIMIT1_P3_tap0_adjust_p3(data)                           (0x000000C0&((data)<<6))
#define  DFE_P3_REG_DFE_LIMIT1_P3_tap1_trans_p3(data)                            (0x00000020&((data)<<5))
#define  DFE_P3_REG_DFE_LIMIT1_P3_edge_last_notrans_p3(data)                     (0x00000010&((data)<<4))
#define  DFE_P3_REG_DFE_LIMIT1_P3_limit1_rev_p3(data)                            (0x0000000F&(data))
#define  DFE_P3_REG_DFE_LIMIT1_P3_get_limit1_rev0_p3(data)                       ((0xFFC00000&(data))>>22)
#define  DFE_P3_REG_DFE_LIMIT1_P3_get_vth_min_p3(data)                           ((0x00380000&(data))>>19)
#define  DFE_P3_REG_DFE_LIMIT1_P3_get_vth_max_p3(data)                           ((0x00078000&(data))>>15)
#define  DFE_P3_REG_DFE_LIMIT1_P3_get_vth_threshold_p3(data)                     ((0x00007000&(data))>>12)
#define  DFE_P3_REG_DFE_LIMIT1_P3_get_tap0_threshold_p3(data)                    ((0x00000F00&(data))>>8)
#define  DFE_P3_REG_DFE_LIMIT1_P3_get_tap0_adjust_p3(data)                       ((0x000000C0&(data))>>6)
#define  DFE_P3_REG_DFE_LIMIT1_P3_get_tap1_trans_p3(data)                        ((0x00000020&(data))>>5)
#define  DFE_P3_REG_DFE_LIMIT1_P3_get_edge_last_notrans_p3(data)                 ((0x00000010&(data))>>4)
#define  DFE_P3_REG_DFE_LIMIT1_P3_get_limit1_rev_p3(data)                        (0x0000000F&(data))

#define  DFE_P3_REG_DFE_LIMIT2_P3                                               0x1803CD90
#define  DFE_P3_REG_DFE_LIMIT2_P3_reg_addr                                       "0xB803CD90"
#define  DFE_P3_REG_DFE_LIMIT2_P3_reg                                            0xB803CD90
#define  DFE_P3_REG_DFE_LIMIT2_P3_inst_addr                                      "0x000D"
#define  set_DFE_P3_REG_DFE_LIMIT2_P3_reg(data)                                  (*((volatile unsigned int*)DFE_P3_REG_DFE_LIMIT2_P3_reg)=data)
#define  get_DFE_P3_REG_DFE_LIMIT2_P3_reg                                        (*((volatile unsigned int*)DFE_P3_REG_DFE_LIMIT2_P3_reg))
#define  DFE_P3_REG_DFE_LIMIT2_P3_limit_rev0_p3_shift                            (26)
#define  DFE_P3_REG_DFE_LIMIT2_P3_tap_divisor_p3_shift                           (20)
#define  DFE_P3_REG_DFE_LIMIT2_P3_vth_divisor_p3_shift                           (16)
#define  DFE_P3_REG_DFE_LIMIT2_P3_tap0_max_p3_shift                              (9)
#define  DFE_P3_REG_DFE_LIMIT2_P3_limit2_rev_p3_shift                            (0)
#define  DFE_P3_REG_DFE_LIMIT2_P3_limit_rev0_p3_mask                             (0xFC000000)
#define  DFE_P3_REG_DFE_LIMIT2_P3_tap_divisor_p3_mask                            (0x03F00000)
#define  DFE_P3_REG_DFE_LIMIT2_P3_vth_divisor_p3_mask                            (0x000F0000)
#define  DFE_P3_REG_DFE_LIMIT2_P3_tap0_max_p3_mask                               (0x0000FE00)
#define  DFE_P3_REG_DFE_LIMIT2_P3_limit2_rev_p3_mask                             (0x000001FF)
#define  DFE_P3_REG_DFE_LIMIT2_P3_limit_rev0_p3(data)                            (0xFC000000&((data)<<26))
#define  DFE_P3_REG_DFE_LIMIT2_P3_tap_divisor_p3(data)                           (0x03F00000&((data)<<20))
#define  DFE_P3_REG_DFE_LIMIT2_P3_vth_divisor_p3(data)                           (0x000F0000&((data)<<16))
#define  DFE_P3_REG_DFE_LIMIT2_P3_tap0_max_p3(data)                              (0x0000FE00&((data)<<9))
#define  DFE_P3_REG_DFE_LIMIT2_P3_limit2_rev_p3(data)                            (0x000001FF&(data))
#define  DFE_P3_REG_DFE_LIMIT2_P3_get_limit_rev0_p3(data)                        ((0xFC000000&(data))>>26)
#define  DFE_P3_REG_DFE_LIMIT2_P3_get_tap_divisor_p3(data)                       ((0x03F00000&(data))>>20)
#define  DFE_P3_REG_DFE_LIMIT2_P3_get_vth_divisor_p3(data)                       ((0x000F0000&(data))>>16)
#define  DFE_P3_REG_DFE_LIMIT2_P3_get_tap0_max_p3(data)                          ((0x0000FE00&(data))>>9)
#define  DFE_P3_REG_DFE_LIMIT2_P3_get_limit2_rev_p3(data)                        (0x000001FF&(data))

#define  DFE_P3_REG_DFE_READBACK_P3                                             0x1803CD94
#define  DFE_P3_REG_DFE_READBACK_P3_reg_addr                                     "0xB803CD94"
#define  DFE_P3_REG_DFE_READBACK_P3_reg                                          0xB803CD94
#define  DFE_P3_REG_DFE_READBACK_P3_inst_addr                                    "0x000E"
#define  set_DFE_P3_REG_DFE_READBACK_P3_reg(data)                                (*((volatile unsigned int*)DFE_P3_REG_DFE_READBACK_P3_reg)=data)
#define  get_DFE_P3_REG_DFE_READBACK_P3_reg                                      (*((volatile unsigned int*)DFE_P3_REG_DFE_READBACK_P3_reg))
#define  DFE_P3_REG_DFE_READBACK_P3_record_limit_en_p3_shift                     (31)
#define  DFE_P3_REG_DFE_READBACK_P3_lane_sel_p3_shift                            (29)
#define  DFE_P3_REG_DFE_READBACK_P3_limit_sel_p3_shift                           (24)
#define  DFE_P3_REG_DFE_READBACK_P3_limit_data_p3_shift                          (16)
#define  DFE_P3_REG_DFE_READBACK_P3_coef_sel_p3_shift                            (8)
#define  DFE_P3_REG_DFE_READBACK_P3_coef_data_p3_shift                           (0)
#define  DFE_P3_REG_DFE_READBACK_P3_record_limit_en_p3_mask                      (0x80000000)
#define  DFE_P3_REG_DFE_READBACK_P3_lane_sel_p3_mask                             (0x60000000)
#define  DFE_P3_REG_DFE_READBACK_P3_limit_sel_p3_mask                            (0x1F000000)
#define  DFE_P3_REG_DFE_READBACK_P3_limit_data_p3_mask                           (0x00FF0000)
#define  DFE_P3_REG_DFE_READBACK_P3_coef_sel_p3_mask                             (0x0000FF00)
#define  DFE_P3_REG_DFE_READBACK_P3_coef_data_p3_mask                            (0x000000FF)
#define  DFE_P3_REG_DFE_READBACK_P3_record_limit_en_p3(data)                     (0x80000000&((data)<<31))
#define  DFE_P3_REG_DFE_READBACK_P3_lane_sel_p3(data)                            (0x60000000&((data)<<29))
#define  DFE_P3_REG_DFE_READBACK_P3_limit_sel_p3(data)                           (0x1F000000&((data)<<24))
#define  DFE_P3_REG_DFE_READBACK_P3_limit_data_p3(data)                          (0x00FF0000&((data)<<16))
#define  DFE_P3_REG_DFE_READBACK_P3_coef_sel_p3(data)                            (0x0000FF00&((data)<<8))
#define  DFE_P3_REG_DFE_READBACK_P3_coef_data_p3(data)                           (0x000000FF&(data))
#define  DFE_P3_REG_DFE_READBACK_P3_get_record_limit_en_p3(data)                 ((0x80000000&(data))>>31)
#define  DFE_P3_REG_DFE_READBACK_P3_get_lane_sel_p3(data)                        ((0x60000000&(data))>>29)
#define  DFE_P3_REG_DFE_READBACK_P3_get_limit_sel_p3(data)                       ((0x1F000000&(data))>>24)
#define  DFE_P3_REG_DFE_READBACK_P3_get_limit_data_p3(data)                      ((0x00FF0000&(data))>>16)
#define  DFE_P3_REG_DFE_READBACK_P3_get_coef_sel_p3(data)                        ((0x0000FF00&(data))>>8)
#define  DFE_P3_REG_DFE_READBACK_P3_get_coef_data_p3(data)                       (0x000000FF&(data))

#define  DFE_P3_REG_DFE_FLAG_P3                                                 0x1803CD98
#define  DFE_P3_REG_DFE_FLAG_P3_reg_addr                                         "0xB803CD98"
#define  DFE_P3_REG_DFE_FLAG_P3_reg                                              0xB803CD98
#define  DFE_P3_REG_DFE_FLAG_P3_inst_addr                                        "0x000F"
#define  set_DFE_P3_REG_DFE_FLAG_P3_reg(data)                                    (*((volatile unsigned int*)DFE_P3_REG_DFE_FLAG_P3_reg)=data)
#define  get_DFE_P3_REG_DFE_FLAG_P3_reg                                          (*((volatile unsigned int*)DFE_P3_REG_DFE_FLAG_P3_reg))
#define  DFE_P3_REG_DFE_FLAG_P3_adapt_fail_flag_p3_shift                         (28)
#define  DFE_P3_REG_DFE_FLAG_P3_adapt_swing_max_flag_p3_shift                    (24)
#define  DFE_P3_REG_DFE_FLAG_P3_flag_rev1_p3_shift                               (12)
#define  DFE_P3_REG_DFE_FLAG_P3_flag_rev2_p3_shift                               (0)
#define  DFE_P3_REG_DFE_FLAG_P3_adapt_fail_flag_p3_mask                          (0xF0000000)
#define  DFE_P3_REG_DFE_FLAG_P3_adapt_swing_max_flag_p3_mask                     (0x0F000000)
#define  DFE_P3_REG_DFE_FLAG_P3_flag_rev1_p3_mask                                (0x00FFF000)
#define  DFE_P3_REG_DFE_FLAG_P3_flag_rev2_p3_mask                                (0x00000FFF)
#define  DFE_P3_REG_DFE_FLAG_P3_adapt_fail_flag_p3(data)                         (0xF0000000&((data)<<28))
#define  DFE_P3_REG_DFE_FLAG_P3_adapt_swing_max_flag_p3(data)                    (0x0F000000&((data)<<24))
#define  DFE_P3_REG_DFE_FLAG_P3_flag_rev1_p3(data)                               (0x00FFF000&((data)<<12))
#define  DFE_P3_REG_DFE_FLAG_P3_flag_rev2_p3(data)                               (0x00000FFF&(data))
#define  DFE_P3_REG_DFE_FLAG_P3_get_adapt_fail_flag_p3(data)                     ((0xF0000000&(data))>>28)
#define  DFE_P3_REG_DFE_FLAG_P3_get_adapt_swing_max_flag_p3(data)                ((0x0F000000&(data))>>24)
#define  DFE_P3_REG_DFE_FLAG_P3_get_flag_rev1_p3(data)                           ((0x00FFF000&(data))>>12)
#define  DFE_P3_REG_DFE_FLAG_P3_get_flag_rev2_p3(data)                           (0x00000FFF&(data))

#define  DFE_P3_REG_DFE_DEBUG_P3                                                0x1803CD9C
#define  DFE_P3_REG_DFE_DEBUG_P3_reg_addr                                        "0xB803CD9C"
#define  DFE_P3_REG_DFE_DEBUG_P3_reg                                             0xB803CD9C
#define  DFE_P3_REG_DFE_DEBUG_P3_inst_addr                                       "0x0010"
#define  set_DFE_P3_REG_DFE_DEBUG_P3_reg(data)                                   (*((volatile unsigned int*)DFE_P3_REG_DFE_DEBUG_P3_reg)=data)
#define  get_DFE_P3_REG_DFE_DEBUG_P3_reg                                         (*((volatile unsigned int*)DFE_P3_REG_DFE_DEBUG_P3_reg))
#define  DFE_P3_REG_DFE_DEBUG_P3_debug_rev_p3_shift                              (5)
#define  DFE_P3_REG_DFE_DEBUG_P3_debug_sel_p3_shift                              (0)
#define  DFE_P3_REG_DFE_DEBUG_P3_debug_rev_p3_mask                               (0xFFFFFFE0)
#define  DFE_P3_REG_DFE_DEBUG_P3_debug_sel_p3_mask                               (0x0000001F)
#define  DFE_P3_REG_DFE_DEBUG_P3_debug_rev_p3(data)                              (0xFFFFFFE0&((data)<<5))
#define  DFE_P3_REG_DFE_DEBUG_P3_debug_sel_p3(data)                              (0x0000001F&(data))
#define  DFE_P3_REG_DFE_DEBUG_P3_get_debug_rev_p3(data)                          ((0xFFFFFFE0&(data))>>5)
#define  DFE_P3_REG_DFE_DEBUG_P3_get_debug_sel_p3(data)                          (0x0000001F&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======DFE_P3 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk_inv_lane0_p3:1;
        RBus_UInt32  timer_ctrl_en_lane0_p3:1;
        RBus_UInt32  reduce_adapt_gain_lane0_p3:2;
        RBus_UInt32  rl_det_en_lane0_p3:1;
        RBus_UInt32  tap1_trans_mode_lane0_p3:1;
        RBus_UInt32  rl_threshold_lane0_p3:2;
        RBus_UInt32  dfe_adapt_en_lane0_p3:8;
        RBus_UInt32  le_min_lane0_p3:5;
        RBus_UInt32  le_init_lane0_p3:5;
        RBus_UInt32  tap4_init_lane0_p3:6;
    };
}dfe_p3_reg_dfe_en_l0_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tap3_init_lane0_p3:6;
        RBus_UInt32  tap2_init_lane0_p3:6;
        RBus_UInt32  tap1_init_lane0_p3:6;
        RBus_UInt32  tap0_init_lane0_p3:7;
        RBus_UInt32  init1_rev0_lane0_p3:3;
        RBus_UInt32  vth_init_lane0_p3:4;
    };
}dfe_p3_reg_dfe_init0_l0_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  load_in_init_lane0_p3:8;
        RBus_UInt32  init1_rev1_lane0_p3:6;
        RBus_UInt32  de_video_inv_lane0_p3:1;
        RBus_UInt32  de_packet_inv_lane0_p3:1;
        RBus_UInt32  de_video_en_lane0_p3:1;
        RBus_UInt32  de_packet_en_lane0_p3:1;
        RBus_UInt32  init1_rev2_lane0_p3:14;
    };
}dfe_p3_reg_dfe_init1_l0_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk_inv_lane1_p3:1;
        RBus_UInt32  timer_ctrl_en_lane1_p3:1;
        RBus_UInt32  reduce_adapt_gain_lane1_p3:2;
        RBus_UInt32  rl_det_en_lane1_p3:1;
        RBus_UInt32  tap1_trans_mode_lane1_p3:1;
        RBus_UInt32  rl_threshold_lane1_p3:2;
        RBus_UInt32  dfe_adapt_en_lane1_p3:8;
        RBus_UInt32  le_min_lane1_p3:5;
        RBus_UInt32  le_init_lane1_p3:5;
        RBus_UInt32  tap4_init_lane1_p3:6;
    };
}dfe_p3_reg_dfe_en_l1_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tap3_init_lane1_p3:6;
        RBus_UInt32  tap2_init_lane1_p3:6;
        RBus_UInt32  tap1_init_lane1_p3:6;
        RBus_UInt32  tap0_init_lane1_p3:7;
        RBus_UInt32  init1_rev0_lane1_p3:3;
        RBus_UInt32  vth_init_lane1_p3:4;
    };
}dfe_p3_reg_dfe_init0_l1_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  load_in_init_lane1_p3:8;
        RBus_UInt32  init1_rev1_lane1_p3:6;
        RBus_UInt32  de_video_inv_lane1_p3:1;
        RBus_UInt32  de_packet_inv_lane1_p3:1;
        RBus_UInt32  de_video_en_lane1_p3:1;
        RBus_UInt32  de_packet_en_lane1_p3:1;
        RBus_UInt32  init1_rev2_lane1_p3:14;
    };
}dfe_p3_reg_dfe_init1_l1_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk_inv_lane2_p3:1;
        RBus_UInt32  timer_ctrl_en_lane2_p3:1;
        RBus_UInt32  reduce_adapt_gain_lane2_p3:2;
        RBus_UInt32  rl_det_en_lane2_p3:1;
        RBus_UInt32  tap1_trans_mode_lane2_p3:1;
        RBus_UInt32  rl_threshold_lane2_p3:2;
        RBus_UInt32  dfe_adapt_en_lane2_p3:8;
        RBus_UInt32  le_min_lane2_p3:5;
        RBus_UInt32  le_init_lane2_p3:5;
        RBus_UInt32  tap4_init_lane2_p3:6;
    };
}dfe_p3_reg_dfe_en_l2_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tap3_init_lane2_p3:6;
        RBus_UInt32  tap2_init_lane2_p3:6;
        RBus_UInt32  tap1_init_lane2_p3:6;
        RBus_UInt32  tap0_init_lane2_p3:7;
        RBus_UInt32  init1_rev0_lane2_p3:3;
        RBus_UInt32  vth_init_lane2_p3:4;
    };
}dfe_p3_reg_dfe_init0_l2_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  load_in_init_lane2_p3:8;
        RBus_UInt32  init1_rev1_lane2_p3:6;
        RBus_UInt32  de_video_inv_lane2_p3:1;
        RBus_UInt32  de_packet_inv_lane2_p3:1;
        RBus_UInt32  de_video_en_lane2_p3:1;
        RBus_UInt32  de_packet_en_lane2_p3:1;
        RBus_UInt32  init1_rev2_lane2_p3:14;
    };
}dfe_p3_reg_dfe_init1_l2_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adapt_mode_p3:2;
        RBus_UInt32  edge_det_mode_p3:1;
        RBus_UInt32  transition_only_p3:1;
        RBus_UInt32  le_auto_reload_p3:1;
        RBus_UInt32  tap1_delay_p3:3;
        RBus_UInt32  tap24_delay_p3:3;
        RBus_UInt32  le_delay_p3:3;
        RBus_UInt32  servo_delay_p3:2;
        RBus_UInt32  gray_en_p3:8;
        RBus_UInt32  dfe_adapt_rstb_p3:4;
        RBus_UInt32  tap0_trans_p3:1;
        RBus_UInt32  tap0_notrans_p3:1;
        RBus_UInt32  mode_rev0_p3:2;
    };
}dfe_p3_reg_dfe_mode_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tap0_gain_p3:3;
        RBus_UInt32  tap1_gain_p3:3;
        RBus_UInt32  tap2_gain_p3:3;
        RBus_UInt32  gain_rev0_p3:9;
        RBus_UInt32  le_gain1_p3:3;
        RBus_UInt32  le_gain2_p3:3;
        RBus_UInt32  le2_sign_p3:1;
        RBus_UInt32  le_gain_prec_p3:3;
        RBus_UInt32  le_prec_sign_p3:1;
        RBus_UInt32  trans_rlength_p3:3;
    };
}dfe_p3_reg_dfe_gain_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  limit0_rev_p3:6;
        RBus_UInt32  tap1_min_p3:6;
        RBus_UInt32  tap2_max_p3:5;
        RBus_UInt32  tap2_min_p3:5;
        RBus_UInt32  limit0_rev0_p3:10;
    };
}dfe_p3_reg_dfe_limit0_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  limit1_rev0_p3:10;
        RBus_UInt32  vth_min_p3:3;
        RBus_UInt32  vth_max_p3:4;
        RBus_UInt32  vth_threshold_p3:3;
        RBus_UInt32  tap0_threshold_p3:4;
        RBus_UInt32  tap0_adjust_p3:2;
        RBus_UInt32  tap1_trans_p3:1;
        RBus_UInt32  edge_last_notrans_p3:1;
        RBus_UInt32  limit1_rev_p3:4;
    };
}dfe_p3_reg_dfe_limit1_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  limit_rev0_p3:6;
        RBus_UInt32  tap_divisor_p3:6;
        RBus_UInt32  vth_divisor_p3:4;
        RBus_UInt32  tap0_max_p3:7;
        RBus_UInt32  limit2_rev_p3:9;
    };
}dfe_p3_reg_dfe_limit2_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  record_limit_en_p3:1;
        RBus_UInt32  lane_sel_p3:2;
        RBus_UInt32  limit_sel_p3:5;
        RBus_UInt32  limit_data_p3:8;
        RBus_UInt32  coef_sel_p3:8;
        RBus_UInt32  coef_data_p3:8;
    };
}dfe_p3_reg_dfe_readback_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adapt_fail_flag_p3:4;
        RBus_UInt32  adapt_swing_max_flag_p3:4;
        RBus_UInt32  flag_rev1_p3:12;
        RBus_UInt32  flag_rev2_p3:12;
    };
}dfe_p3_reg_dfe_flag_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  debug_rev_p3:27;
        RBus_UInt32  debug_sel_p3:5;
    };
}dfe_p3_reg_dfe_debug_p3_RBUS;

#else //apply LITTLE_ENDIAN

//======DFE_P3 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tap4_init_lane0_p3:6;
        RBus_UInt32  le_init_lane0_p3:5;
        RBus_UInt32  le_min_lane0_p3:5;
        RBus_UInt32  dfe_adapt_en_lane0_p3:8;
        RBus_UInt32  rl_threshold_lane0_p3:2;
        RBus_UInt32  tap1_trans_mode_lane0_p3:1;
        RBus_UInt32  rl_det_en_lane0_p3:1;
        RBus_UInt32  reduce_adapt_gain_lane0_p3:2;
        RBus_UInt32  timer_ctrl_en_lane0_p3:1;
        RBus_UInt32  clk_inv_lane0_p3:1;
    };
}dfe_p3_reg_dfe_en_l0_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vth_init_lane0_p3:4;
        RBus_UInt32  init1_rev0_lane0_p3:3;
        RBus_UInt32  tap0_init_lane0_p3:7;
        RBus_UInt32  tap1_init_lane0_p3:6;
        RBus_UInt32  tap2_init_lane0_p3:6;
        RBus_UInt32  tap3_init_lane0_p3:6;
    };
}dfe_p3_reg_dfe_init0_l0_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  init1_rev2_lane0_p3:14;
        RBus_UInt32  de_packet_en_lane0_p3:1;
        RBus_UInt32  de_video_en_lane0_p3:1;
        RBus_UInt32  de_packet_inv_lane0_p3:1;
        RBus_UInt32  de_video_inv_lane0_p3:1;
        RBus_UInt32  init1_rev1_lane0_p3:6;
        RBus_UInt32  load_in_init_lane0_p3:8;
    };
}dfe_p3_reg_dfe_init1_l0_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tap4_init_lane1_p3:6;
        RBus_UInt32  le_init_lane1_p3:5;
        RBus_UInt32  le_min_lane1_p3:5;
        RBus_UInt32  dfe_adapt_en_lane1_p3:8;
        RBus_UInt32  rl_threshold_lane1_p3:2;
        RBus_UInt32  tap1_trans_mode_lane1_p3:1;
        RBus_UInt32  rl_det_en_lane1_p3:1;
        RBus_UInt32  reduce_adapt_gain_lane1_p3:2;
        RBus_UInt32  timer_ctrl_en_lane1_p3:1;
        RBus_UInt32  clk_inv_lane1_p3:1;
    };
}dfe_p3_reg_dfe_en_l1_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vth_init_lane1_p3:4;
        RBus_UInt32  init1_rev0_lane1_p3:3;
        RBus_UInt32  tap0_init_lane1_p3:7;
        RBus_UInt32  tap1_init_lane1_p3:6;
        RBus_UInt32  tap2_init_lane1_p3:6;
        RBus_UInt32  tap3_init_lane1_p3:6;
    };
}dfe_p3_reg_dfe_init0_l1_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  init1_rev2_lane1_p3:14;
        RBus_UInt32  de_packet_en_lane1_p3:1;
        RBus_UInt32  de_video_en_lane1_p3:1;
        RBus_UInt32  de_packet_inv_lane1_p3:1;
        RBus_UInt32  de_video_inv_lane1_p3:1;
        RBus_UInt32  init1_rev1_lane1_p3:6;
        RBus_UInt32  load_in_init_lane1_p3:8;
    };
}dfe_p3_reg_dfe_init1_l1_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tap4_init_lane2_p3:6;
        RBus_UInt32  le_init_lane2_p3:5;
        RBus_UInt32  le_min_lane2_p3:5;
        RBus_UInt32  dfe_adapt_en_lane2_p3:8;
        RBus_UInt32  rl_threshold_lane2_p3:2;
        RBus_UInt32  tap1_trans_mode_lane2_p3:1;
        RBus_UInt32  rl_det_en_lane2_p3:1;
        RBus_UInt32  reduce_adapt_gain_lane2_p3:2;
        RBus_UInt32  timer_ctrl_en_lane2_p3:1;
        RBus_UInt32  clk_inv_lane2_p3:1;
    };
}dfe_p3_reg_dfe_en_l2_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vth_init_lane2_p3:4;
        RBus_UInt32  init1_rev0_lane2_p3:3;
        RBus_UInt32  tap0_init_lane2_p3:7;
        RBus_UInt32  tap1_init_lane2_p3:6;
        RBus_UInt32  tap2_init_lane2_p3:6;
        RBus_UInt32  tap3_init_lane2_p3:6;
    };
}dfe_p3_reg_dfe_init0_l2_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  init1_rev2_lane2_p3:14;
        RBus_UInt32  de_packet_en_lane2_p3:1;
        RBus_UInt32  de_video_en_lane2_p3:1;
        RBus_UInt32  de_packet_inv_lane2_p3:1;
        RBus_UInt32  de_video_inv_lane2_p3:1;
        RBus_UInt32  init1_rev1_lane2_p3:6;
        RBus_UInt32  load_in_init_lane2_p3:8;
    };
}dfe_p3_reg_dfe_init1_l2_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mode_rev0_p3:2;
        RBus_UInt32  tap0_notrans_p3:1;
        RBus_UInt32  tap0_trans_p3:1;
        RBus_UInt32  dfe_adapt_rstb_p3:4;
        RBus_UInt32  gray_en_p3:8;
        RBus_UInt32  servo_delay_p3:2;
        RBus_UInt32  le_delay_p3:3;
        RBus_UInt32  tap24_delay_p3:3;
        RBus_UInt32  tap1_delay_p3:3;
        RBus_UInt32  le_auto_reload_p3:1;
        RBus_UInt32  transition_only_p3:1;
        RBus_UInt32  edge_det_mode_p3:1;
        RBus_UInt32  adapt_mode_p3:2;
    };
}dfe_p3_reg_dfe_mode_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  trans_rlength_p3:3;
        RBus_UInt32  le_prec_sign_p3:1;
        RBus_UInt32  le_gain_prec_p3:3;
        RBus_UInt32  le2_sign_p3:1;
        RBus_UInt32  le_gain2_p3:3;
        RBus_UInt32  le_gain1_p3:3;
        RBus_UInt32  gain_rev0_p3:9;
        RBus_UInt32  tap2_gain_p3:3;
        RBus_UInt32  tap1_gain_p3:3;
        RBus_UInt32  tap0_gain_p3:3;
    };
}dfe_p3_reg_dfe_gain_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  limit0_rev0_p3:10;
        RBus_UInt32  tap2_min_p3:5;
        RBus_UInt32  tap2_max_p3:5;
        RBus_UInt32  tap1_min_p3:6;
        RBus_UInt32  limit0_rev_p3:6;
    };
}dfe_p3_reg_dfe_limit0_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  limit1_rev_p3:4;
        RBus_UInt32  edge_last_notrans_p3:1;
        RBus_UInt32  tap1_trans_p3:1;
        RBus_UInt32  tap0_adjust_p3:2;
        RBus_UInt32  tap0_threshold_p3:4;
        RBus_UInt32  vth_threshold_p3:3;
        RBus_UInt32  vth_max_p3:4;
        RBus_UInt32  vth_min_p3:3;
        RBus_UInt32  limit1_rev0_p3:10;
    };
}dfe_p3_reg_dfe_limit1_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  limit2_rev_p3:9;
        RBus_UInt32  tap0_max_p3:7;
        RBus_UInt32  vth_divisor_p3:4;
        RBus_UInt32  tap_divisor_p3:6;
        RBus_UInt32  limit_rev0_p3:6;
    };
}dfe_p3_reg_dfe_limit2_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_data_p3:8;
        RBus_UInt32  coef_sel_p3:8;
        RBus_UInt32  limit_data_p3:8;
        RBus_UInt32  limit_sel_p3:5;
        RBus_UInt32  lane_sel_p3:2;
        RBus_UInt32  record_limit_en_p3:1;
    };
}dfe_p3_reg_dfe_readback_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  flag_rev2_p3:12;
        RBus_UInt32  flag_rev1_p3:12;
        RBus_UInt32  adapt_swing_max_flag_p3:4;
        RBus_UInt32  adapt_fail_flag_p3:4;
    };
}dfe_p3_reg_dfe_flag_p3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  debug_sel_p3:5;
        RBus_UInt32  debug_rev_p3:27;
    };
}dfe_p3_reg_dfe_debug_p3_RBUS;




#endif 


#endif 
