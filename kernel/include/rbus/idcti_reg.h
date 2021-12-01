/**
* @file Merlin5-DesignSpec-I-Domain_DCTI
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_IDCTI_REG_H_
#define _RBUS_IDCTI_REG_H_

#include "rbus_types.h"



//  IDCTI Register Address
#define  IDCTI_I_DCTI_CTRL_1                                                    0x180231D4
#define  IDCTI_I_DCTI_CTRL_1_reg_addr                                            "0xB80231D4"
#define  IDCTI_I_DCTI_CTRL_1_reg                                                 0xB80231D4
#define  IDCTI_I_DCTI_CTRL_1_inst_addr                                           "0x0000"
#define  set_IDCTI_I_DCTI_CTRL_1_reg(data)                                       (*((volatile unsigned int*)IDCTI_I_DCTI_CTRL_1_reg)=data)
#define  get_IDCTI_I_DCTI_CTRL_1_reg                                             (*((volatile unsigned int*)IDCTI_I_DCTI_CTRL_1_reg))
#define  IDCTI_I_DCTI_CTRL_1_data_sel_shift                                      (31)
#define  IDCTI_I_DCTI_CTRL_1_maxlen_shift                                        (28)
#define  IDCTI_I_DCTI_CTRL_1_psmth_shift                                         (20)
#define  IDCTI_I_DCTI_CTRL_1_lp_mode_shift                                       (16)
#define  IDCTI_I_DCTI_CTRL_1_engdiv_shift                                        (14)
#define  IDCTI_I_DCTI_CTRL_1_offdiv_shift                                        (12)
#define  IDCTI_I_DCTI_CTRL_1_uvgain_shift                                        (4)
#define  IDCTI_I_DCTI_CTRL_1_dcti_mode_shift                                     (3)
#define  IDCTI_I_DCTI_CTRL_1_cur_sel_shift                                       (1)
#define  IDCTI_I_DCTI_CTRL_1_dcti_en_shift                                       (0)
#define  IDCTI_I_DCTI_CTRL_1_data_sel_mask                                       (0x80000000)
#define  IDCTI_I_DCTI_CTRL_1_maxlen_mask                                         (0x70000000)
#define  IDCTI_I_DCTI_CTRL_1_psmth_mask                                          (0x0FF00000)
#define  IDCTI_I_DCTI_CTRL_1_lp_mode_mask                                        (0x00070000)
#define  IDCTI_I_DCTI_CTRL_1_engdiv_mask                                         (0x0000C000)
#define  IDCTI_I_DCTI_CTRL_1_offdiv_mask                                         (0x00003000)
#define  IDCTI_I_DCTI_CTRL_1_uvgain_mask                                         (0x000007F0)
#define  IDCTI_I_DCTI_CTRL_1_dcti_mode_mask                                      (0x00000008)
#define  IDCTI_I_DCTI_CTRL_1_cur_sel_mask                                        (0x00000002)
#define  IDCTI_I_DCTI_CTRL_1_dcti_en_mask                                        (0x00000001)
#define  IDCTI_I_DCTI_CTRL_1_data_sel(data)                                      (0x80000000&((data)<<31))
#define  IDCTI_I_DCTI_CTRL_1_maxlen(data)                                        (0x70000000&((data)<<28))
#define  IDCTI_I_DCTI_CTRL_1_psmth(data)                                         (0x0FF00000&((data)<<20))
#define  IDCTI_I_DCTI_CTRL_1_lp_mode(data)                                       (0x00070000&((data)<<16))
#define  IDCTI_I_DCTI_CTRL_1_engdiv(data)                                        (0x0000C000&((data)<<14))
#define  IDCTI_I_DCTI_CTRL_1_offdiv(data)                                        (0x00003000&((data)<<12))
#define  IDCTI_I_DCTI_CTRL_1_uvgain(data)                                        (0x000007F0&((data)<<4))
#define  IDCTI_I_DCTI_CTRL_1_dcti_mode(data)                                     (0x00000008&((data)<<3))
#define  IDCTI_I_DCTI_CTRL_1_cur_sel(data)                                       (0x00000002&((data)<<1))
#define  IDCTI_I_DCTI_CTRL_1_dcti_en(data)                                       (0x00000001&(data))
#define  IDCTI_I_DCTI_CTRL_1_get_data_sel(data)                                  ((0x80000000&(data))>>31)
#define  IDCTI_I_DCTI_CTRL_1_get_maxlen(data)                                    ((0x70000000&(data))>>28)
#define  IDCTI_I_DCTI_CTRL_1_get_psmth(data)                                     ((0x0FF00000&(data))>>20)
#define  IDCTI_I_DCTI_CTRL_1_get_lp_mode(data)                                   ((0x00070000&(data))>>16)
#define  IDCTI_I_DCTI_CTRL_1_get_engdiv(data)                                    ((0x0000C000&(data))>>14)
#define  IDCTI_I_DCTI_CTRL_1_get_offdiv(data)                                    ((0x00003000&(data))>>12)
#define  IDCTI_I_DCTI_CTRL_1_get_uvgain(data)                                    ((0x000007F0&(data))>>4)
#define  IDCTI_I_DCTI_CTRL_1_get_dcti_mode(data)                                 ((0x00000008&(data))>>3)
#define  IDCTI_I_DCTI_CTRL_1_get_cur_sel(data)                                   ((0x00000002&(data))>>1)
#define  IDCTI_I_DCTI_CTRL_1_get_dcti_en(data)                                   (0x00000001&(data))

#define  IDCTI_I_DCTI_CTRL_1_v                                                  0x180231F0
#define  IDCTI_I_DCTI_CTRL_1_v_reg_addr                                          "0xB80231F0"
#define  IDCTI_I_DCTI_CTRL_1_v_reg                                               0xB80231F0
#define  IDCTI_I_DCTI_CTRL_1_v_inst_addr                                         "0x0001"
#define  set_IDCTI_I_DCTI_CTRL_1_v_reg(data)                                     (*((volatile unsigned int*)IDCTI_I_DCTI_CTRL_1_v_reg)=data)
#define  get_IDCTI_I_DCTI_CTRL_1_v_reg                                           (*((volatile unsigned int*)IDCTI_I_DCTI_CTRL_1_v_reg))
#define  IDCTI_I_DCTI_CTRL_1_v_engdiv_v_shift                                    (14)
#define  IDCTI_I_DCTI_CTRL_1_v_offdiv_v_shift                                    (12)
#define  IDCTI_I_DCTI_CTRL_1_v_uvgain_v_shift                                    (4)
#define  IDCTI_I_DCTI_CTRL_1_v_engdiv_v_mask                                     (0x0000C000)
#define  IDCTI_I_DCTI_CTRL_1_v_offdiv_v_mask                                     (0x00003000)
#define  IDCTI_I_DCTI_CTRL_1_v_uvgain_v_mask                                     (0x000007F0)
#define  IDCTI_I_DCTI_CTRL_1_v_engdiv_v(data)                                    (0x0000C000&((data)<<14))
#define  IDCTI_I_DCTI_CTRL_1_v_offdiv_v(data)                                    (0x00003000&((data)<<12))
#define  IDCTI_I_DCTI_CTRL_1_v_uvgain_v(data)                                    (0x000007F0&((data)<<4))
#define  IDCTI_I_DCTI_CTRL_1_v_get_engdiv_v(data)                                ((0x0000C000&(data))>>14)
#define  IDCTI_I_DCTI_CTRL_1_v_get_offdiv_v(data)                                ((0x00003000&(data))>>12)
#define  IDCTI_I_DCTI_CTRL_1_v_get_uvgain_v(data)                                ((0x000007F0&(data))>>4)

#define  IDCTI_I_DCTI_CTRL_2                                                    0x180231D8
#define  IDCTI_I_DCTI_CTRL_2_reg_addr                                            "0xB80231D8"
#define  IDCTI_I_DCTI_CTRL_2_reg                                                 0xB80231D8
#define  IDCTI_I_DCTI_CTRL_2_inst_addr                                           "0x0002"
#define  set_IDCTI_I_DCTI_CTRL_2_reg(data)                                       (*((volatile unsigned int*)IDCTI_I_DCTI_CTRL_2_reg)=data)
#define  get_IDCTI_I_DCTI_CTRL_2_reg                                             (*((volatile unsigned int*)IDCTI_I_DCTI_CTRL_2_reg))
#define  IDCTI_I_DCTI_CTRL_2_uvsync_en_shift                                     (31)
#define  IDCTI_I_DCTI_CTRL_2_tran_mode_shift                                     (28)
#define  IDCTI_I_DCTI_CTRL_2_rate_steep_shift                                    (24)
#define  IDCTI_I_DCTI_CTRL_2_th_steep_shift                                      (16)
#define  IDCTI_I_DCTI_CTRL_2_th_coring_shift                                     (11)
#define  IDCTI_I_DCTI_CTRL_2_steep_mode_shift                                    (8)
#define  IDCTI_I_DCTI_CTRL_2_hp_mode_shift                                       (5)
#define  IDCTI_I_DCTI_CTRL_2_vlp_mode_shift                                      (2)
#define  IDCTI_I_DCTI_CTRL_2_median_mode_shift                                   (1)
#define  IDCTI_I_DCTI_CTRL_2_blending_mode_shift                                 (0)
#define  IDCTI_I_DCTI_CTRL_2_uvsync_en_mask                                      (0x80000000)
#define  IDCTI_I_DCTI_CTRL_2_tran_mode_mask                                      (0x70000000)
#define  IDCTI_I_DCTI_CTRL_2_rate_steep_mask                                     (0x07000000)
#define  IDCTI_I_DCTI_CTRL_2_th_steep_mask                                       (0x003F0000)
#define  IDCTI_I_DCTI_CTRL_2_th_coring_mask                                      (0x0000F800)
#define  IDCTI_I_DCTI_CTRL_2_steep_mode_mask                                     (0x00000700)
#define  IDCTI_I_DCTI_CTRL_2_hp_mode_mask                                        (0x000000E0)
#define  IDCTI_I_DCTI_CTRL_2_vlp_mode_mask                                       (0x0000001C)
#define  IDCTI_I_DCTI_CTRL_2_median_mode_mask                                    (0x00000002)
#define  IDCTI_I_DCTI_CTRL_2_blending_mode_mask                                  (0x00000001)
#define  IDCTI_I_DCTI_CTRL_2_uvsync_en(data)                                     (0x80000000&((data)<<31))
#define  IDCTI_I_DCTI_CTRL_2_tran_mode(data)                                     (0x70000000&((data)<<28))
#define  IDCTI_I_DCTI_CTRL_2_rate_steep(data)                                    (0x07000000&((data)<<24))
#define  IDCTI_I_DCTI_CTRL_2_th_steep(data)                                      (0x003F0000&((data)<<16))
#define  IDCTI_I_DCTI_CTRL_2_th_coring(data)                                     (0x0000F800&((data)<<11))
#define  IDCTI_I_DCTI_CTRL_2_steep_mode(data)                                    (0x00000700&((data)<<8))
#define  IDCTI_I_DCTI_CTRL_2_hp_mode(data)                                       (0x000000E0&((data)<<5))
#define  IDCTI_I_DCTI_CTRL_2_vlp_mode(data)                                      (0x0000001C&((data)<<2))
#define  IDCTI_I_DCTI_CTRL_2_median_mode(data)                                   (0x00000002&((data)<<1))
#define  IDCTI_I_DCTI_CTRL_2_blending_mode(data)                                 (0x00000001&(data))
#define  IDCTI_I_DCTI_CTRL_2_get_uvsync_en(data)                                 ((0x80000000&(data))>>31)
#define  IDCTI_I_DCTI_CTRL_2_get_tran_mode(data)                                 ((0x70000000&(data))>>28)
#define  IDCTI_I_DCTI_CTRL_2_get_rate_steep(data)                                ((0x07000000&(data))>>24)
#define  IDCTI_I_DCTI_CTRL_2_get_th_steep(data)                                  ((0x003F0000&(data))>>16)
#define  IDCTI_I_DCTI_CTRL_2_get_th_coring(data)                                 ((0x0000F800&(data))>>11)
#define  IDCTI_I_DCTI_CTRL_2_get_steep_mode(data)                                ((0x00000700&(data))>>8)
#define  IDCTI_I_DCTI_CTRL_2_get_hp_mode(data)                                   ((0x000000E0&(data))>>5)
#define  IDCTI_I_DCTI_CTRL_2_get_vlp_mode(data)                                  ((0x0000001C&(data))>>2)
#define  IDCTI_I_DCTI_CTRL_2_get_median_mode(data)                               ((0x00000002&(data))>>1)
#define  IDCTI_I_DCTI_CTRL_2_get_blending_mode(data)                             (0x00000001&(data))

#define  IDCTI_I_DCTI_CTRL_2_v                                                  0x180231F4
#define  IDCTI_I_DCTI_CTRL_2_v_reg_addr                                          "0xB80231F4"
#define  IDCTI_I_DCTI_CTRL_2_v_reg                                               0xB80231F4
#define  IDCTI_I_DCTI_CTRL_2_v_inst_addr                                         "0x0003"
#define  set_IDCTI_I_DCTI_CTRL_2_v_reg(data)                                     (*((volatile unsigned int*)IDCTI_I_DCTI_CTRL_2_v_reg)=data)
#define  get_IDCTI_I_DCTI_CTRL_2_v_reg                                           (*((volatile unsigned int*)IDCTI_I_DCTI_CTRL_2_v_reg))
#define  IDCTI_I_DCTI_CTRL_2_v_tran_mode_v_shift                                 (28)
#define  IDCTI_I_DCTI_CTRL_2_v_rate_steep_v_shift                                (24)
#define  IDCTI_I_DCTI_CTRL_2_v_th_steep_v_shift                                  (16)
#define  IDCTI_I_DCTI_CTRL_2_v_steep_mode_v_shift                                (0)
#define  IDCTI_I_DCTI_CTRL_2_v_tran_mode_v_mask                                  (0x70000000)
#define  IDCTI_I_DCTI_CTRL_2_v_rate_steep_v_mask                                 (0x07000000)
#define  IDCTI_I_DCTI_CTRL_2_v_th_steep_v_mask                                   (0x003F0000)
#define  IDCTI_I_DCTI_CTRL_2_v_steep_mode_v_mask                                 (0x00000007)
#define  IDCTI_I_DCTI_CTRL_2_v_tran_mode_v(data)                                 (0x70000000&((data)<<28))
#define  IDCTI_I_DCTI_CTRL_2_v_rate_steep_v(data)                                (0x07000000&((data)<<24))
#define  IDCTI_I_DCTI_CTRL_2_v_th_steep_v(data)                                  (0x003F0000&((data)<<16))
#define  IDCTI_I_DCTI_CTRL_2_v_steep_mode_v(data)                                (0x00000007&(data))
#define  IDCTI_I_DCTI_CTRL_2_v_get_tran_mode_v(data)                             ((0x70000000&(data))>>28)
#define  IDCTI_I_DCTI_CTRL_2_v_get_rate_steep_v(data)                            ((0x07000000&(data))>>24)
#define  IDCTI_I_DCTI_CTRL_2_v_get_th_steep_v(data)                              ((0x003F0000&(data))>>16)
#define  IDCTI_I_DCTI_CTRL_2_v_get_steep_mode_v(data)                            (0x00000007&(data))

#define  IDCTI_I_DCTI_CTRL_3                                                    0x180231DC
#define  IDCTI_I_DCTI_CTRL_3_reg_addr                                            "0xB80231DC"
#define  IDCTI_I_DCTI_CTRL_3_reg                                                 0xB80231DC
#define  IDCTI_I_DCTI_CTRL_3_inst_addr                                           "0x0004"
#define  set_IDCTI_I_DCTI_CTRL_3_reg(data)                                       (*((volatile unsigned int*)IDCTI_I_DCTI_CTRL_3_reg)=data)
#define  get_IDCTI_I_DCTI_CTRL_3_reg                                             (*((volatile unsigned int*)IDCTI_I_DCTI_CTRL_3_reg))
#define  IDCTI_I_DCTI_CTRL_3_maxminlen_shift                                     (28)
#define  IDCTI_I_DCTI_CTRL_3_rate_tran_shift                                     (24)
#define  IDCTI_I_DCTI_CTRL_3_th_tran_shift                                       (16)
#define  IDCTI_I_DCTI_CTRL_3_region_mode_shift                                   (12)
#define  IDCTI_I_DCTI_CTRL_3_rate_smooth_shift                                   (8)
#define  IDCTI_I_DCTI_CTRL_3_th_smooth_shift                                     (0)
#define  IDCTI_I_DCTI_CTRL_3_maxminlen_mask                                      (0x70000000)
#define  IDCTI_I_DCTI_CTRL_3_rate_tran_mask                                      (0x07000000)
#define  IDCTI_I_DCTI_CTRL_3_th_tran_mask                                        (0x007F0000)
#define  IDCTI_I_DCTI_CTRL_3_region_mode_mask                                    (0x00007000)
#define  IDCTI_I_DCTI_CTRL_3_rate_smooth_mask                                    (0x00000700)
#define  IDCTI_I_DCTI_CTRL_3_th_smooth_mask                                      (0x0000003F)
#define  IDCTI_I_DCTI_CTRL_3_maxminlen(data)                                     (0x70000000&((data)<<28))
#define  IDCTI_I_DCTI_CTRL_3_rate_tran(data)                                     (0x07000000&((data)<<24))
#define  IDCTI_I_DCTI_CTRL_3_th_tran(data)                                       (0x007F0000&((data)<<16))
#define  IDCTI_I_DCTI_CTRL_3_region_mode(data)                                   (0x00007000&((data)<<12))
#define  IDCTI_I_DCTI_CTRL_3_rate_smooth(data)                                   (0x00000700&((data)<<8))
#define  IDCTI_I_DCTI_CTRL_3_th_smooth(data)                                     (0x0000003F&(data))
#define  IDCTI_I_DCTI_CTRL_3_get_maxminlen(data)                                 ((0x70000000&(data))>>28)
#define  IDCTI_I_DCTI_CTRL_3_get_rate_tran(data)                                 ((0x07000000&(data))>>24)
#define  IDCTI_I_DCTI_CTRL_3_get_th_tran(data)                                   ((0x007F0000&(data))>>16)
#define  IDCTI_I_DCTI_CTRL_3_get_region_mode(data)                               ((0x00007000&(data))>>12)
#define  IDCTI_I_DCTI_CTRL_3_get_rate_smooth(data)                               ((0x00000700&(data))>>8)
#define  IDCTI_I_DCTI_CTRL_3_get_th_smooth(data)                                 (0x0000003F&(data))

#define  IDCTI_I_DCTI_CTRL_3_v                                                  0x180231F8
#define  IDCTI_I_DCTI_CTRL_3_v_reg_addr                                          "0xB80231F8"
#define  IDCTI_I_DCTI_CTRL_3_v_reg                                               0xB80231F8
#define  IDCTI_I_DCTI_CTRL_3_v_inst_addr                                         "0x0005"
#define  set_IDCTI_I_DCTI_CTRL_3_v_reg(data)                                     (*((volatile unsigned int*)IDCTI_I_DCTI_CTRL_3_v_reg)=data)
#define  get_IDCTI_I_DCTI_CTRL_3_v_reg                                           (*((volatile unsigned int*)IDCTI_I_DCTI_CTRL_3_v_reg))
#define  IDCTI_I_DCTI_CTRL_3_v_rate_tran_v_shift                                 (24)
#define  IDCTI_I_DCTI_CTRL_3_v_th_tran_v_shift                                   (16)
#define  IDCTI_I_DCTI_CTRL_3_v_region_mode_v_shift                               (12)
#define  IDCTI_I_DCTI_CTRL_3_v_rate_smooth_v_shift                               (8)
#define  IDCTI_I_DCTI_CTRL_3_v_th_smooth_v_shift                                 (0)
#define  IDCTI_I_DCTI_CTRL_3_v_rate_tran_v_mask                                  (0x07000000)
#define  IDCTI_I_DCTI_CTRL_3_v_th_tran_v_mask                                    (0x007F0000)
#define  IDCTI_I_DCTI_CTRL_3_v_region_mode_v_mask                                (0x00007000)
#define  IDCTI_I_DCTI_CTRL_3_v_rate_smooth_v_mask                                (0x00000700)
#define  IDCTI_I_DCTI_CTRL_3_v_th_smooth_v_mask                                  (0x0000003F)
#define  IDCTI_I_DCTI_CTRL_3_v_rate_tran_v(data)                                 (0x07000000&((data)<<24))
#define  IDCTI_I_DCTI_CTRL_3_v_th_tran_v(data)                                   (0x007F0000&((data)<<16))
#define  IDCTI_I_DCTI_CTRL_3_v_region_mode_v(data)                               (0x00007000&((data)<<12))
#define  IDCTI_I_DCTI_CTRL_3_v_rate_smooth_v(data)                               (0x00000700&((data)<<8))
#define  IDCTI_I_DCTI_CTRL_3_v_th_smooth_v(data)                                 (0x0000003F&(data))
#define  IDCTI_I_DCTI_CTRL_3_v_get_rate_tran_v(data)                             ((0x07000000&(data))>>24)
#define  IDCTI_I_DCTI_CTRL_3_v_get_th_tran_v(data)                               ((0x007F0000&(data))>>16)
#define  IDCTI_I_DCTI_CTRL_3_v_get_region_mode_v(data)                           ((0x00007000&(data))>>12)
#define  IDCTI_I_DCTI_CTRL_3_v_get_rate_smooth_v(data)                           ((0x00000700&(data))>>8)
#define  IDCTI_I_DCTI_CTRL_3_v_get_th_smooth_v(data)                             (0x0000003F&(data))

#define  IDCTI_I_DCTI_CTRL_4                                                    0x180231E0
#define  IDCTI_I_DCTI_CTRL_4_reg_addr                                            "0xB80231E0"
#define  IDCTI_I_DCTI_CTRL_4_reg                                                 0xB80231E0
#define  IDCTI_I_DCTI_CTRL_4_inst_addr                                           "0x0006"
#define  set_IDCTI_I_DCTI_CTRL_4_reg(data)                                       (*((volatile unsigned int*)IDCTI_I_DCTI_CTRL_4_reg)=data)
#define  get_IDCTI_I_DCTI_CTRL_4_reg                                             (*((volatile unsigned int*)IDCTI_I_DCTI_CTRL_4_reg))
#define  IDCTI_I_DCTI_CTRL_4_th_gtran_shift                                      (0)
#define  IDCTI_I_DCTI_CTRL_4_th_gtran_mask                                       (0x0000003F)
#define  IDCTI_I_DCTI_CTRL_4_th_gtran(data)                                      (0x0000003F&(data))
#define  IDCTI_I_DCTI_CTRL_4_get_th_gtran(data)                                  (0x0000003F&(data))

#define  IDCTI_I_DCTI_CTRL_4_v                                                  0x180231FC
#define  IDCTI_I_DCTI_CTRL_4_v_reg_addr                                          "0xB80231FC"
#define  IDCTI_I_DCTI_CTRL_4_v_reg                                               0xB80231FC
#define  IDCTI_I_DCTI_CTRL_4_v_inst_addr                                         "0x0007"
#define  set_IDCTI_I_DCTI_CTRL_4_v_reg(data)                                     (*((volatile unsigned int*)IDCTI_I_DCTI_CTRL_4_v_reg)=data)
#define  get_IDCTI_I_DCTI_CTRL_4_v_reg                                           (*((volatile unsigned int*)IDCTI_I_DCTI_CTRL_4_v_reg))
#define  IDCTI_I_DCTI_CTRL_4_v_th_stair_v_shift                                  (17)
#define  IDCTI_I_DCTI_CTRL_4_v_rate_stair2_v_shift                               (14)
#define  IDCTI_I_DCTI_CTRL_4_v_rate_stair1_v_shift                               (11)
#define  IDCTI_I_DCTI_CTRL_4_v_th_gtran_v_shift                                  (0)
#define  IDCTI_I_DCTI_CTRL_4_v_th_stair_v_mask                                   (0x007E0000)
#define  IDCTI_I_DCTI_CTRL_4_v_rate_stair2_v_mask                                (0x0001C000)
#define  IDCTI_I_DCTI_CTRL_4_v_rate_stair1_v_mask                                (0x00003800)
#define  IDCTI_I_DCTI_CTRL_4_v_th_gtran_v_mask                                   (0x0000003F)
#define  IDCTI_I_DCTI_CTRL_4_v_th_stair_v(data)                                  (0x007E0000&((data)<<17))
#define  IDCTI_I_DCTI_CTRL_4_v_rate_stair2_v(data)                               (0x0001C000&((data)<<14))
#define  IDCTI_I_DCTI_CTRL_4_v_rate_stair1_v(data)                               (0x00003800&((data)<<11))
#define  IDCTI_I_DCTI_CTRL_4_v_th_gtran_v(data)                                  (0x0000003F&(data))
#define  IDCTI_I_DCTI_CTRL_4_v_get_th_stair_v(data)                              ((0x007E0000&(data))>>17)
#define  IDCTI_I_DCTI_CTRL_4_v_get_rate_stair2_v(data)                           ((0x0001C000&(data))>>14)
#define  IDCTI_I_DCTI_CTRL_4_v_get_rate_stair1_v(data)                           ((0x00003800&(data))>>11)
#define  IDCTI_I_DCTI_CTRL_4_v_get_th_gtran_v(data)                              (0x0000003F&(data))

#define  IDCTI_I_DCTI_CTRL_5                                                    0x180231E4
#define  IDCTI_I_DCTI_CTRL_5_reg_addr                                            "0xB80231E4"
#define  IDCTI_I_DCTI_CTRL_5_reg                                                 0xB80231E4
#define  IDCTI_I_DCTI_CTRL_5_inst_addr                                           "0x0008"
#define  set_IDCTI_I_DCTI_CTRL_5_reg(data)                                       (*((volatile unsigned int*)IDCTI_I_DCTI_CTRL_5_reg)=data)
#define  get_IDCTI_I_DCTI_CTRL_5_reg                                             (*((volatile unsigned int*)IDCTI_I_DCTI_CTRL_5_reg))
#define  IDCTI_I_DCTI_CTRL_5_statistic_en_shift                                  (31)
#define  IDCTI_I_DCTI_CTRL_5_th_uvmindiff_shift                                  (24)
#define  IDCTI_I_DCTI_CTRL_5_rate_stair2_shift                                   (20)
#define  IDCTI_I_DCTI_CTRL_5_rate_stair1_shift                                   (16)
#define  IDCTI_I_DCTI_CTRL_5_th_stair_shift                                      (8)
#define  IDCTI_I_DCTI_CTRL_5_statistic_en_mask                                   (0x80000000)
#define  IDCTI_I_DCTI_CTRL_5_th_uvmindiff_mask                                   (0x7F000000)
#define  IDCTI_I_DCTI_CTRL_5_rate_stair2_mask                                    (0x00700000)
#define  IDCTI_I_DCTI_CTRL_5_rate_stair1_mask                                    (0x00070000)
#define  IDCTI_I_DCTI_CTRL_5_th_stair_mask                                       (0x00003F00)
#define  IDCTI_I_DCTI_CTRL_5_statistic_en(data)                                  (0x80000000&((data)<<31))
#define  IDCTI_I_DCTI_CTRL_5_th_uvmindiff(data)                                  (0x7F000000&((data)<<24))
#define  IDCTI_I_DCTI_CTRL_5_rate_stair2(data)                                   (0x00700000&((data)<<20))
#define  IDCTI_I_DCTI_CTRL_5_rate_stair1(data)                                   (0x00070000&((data)<<16))
#define  IDCTI_I_DCTI_CTRL_5_th_stair(data)                                      (0x00003F00&((data)<<8))
#define  IDCTI_I_DCTI_CTRL_5_get_statistic_en(data)                              ((0x80000000&(data))>>31)
#define  IDCTI_I_DCTI_CTRL_5_get_th_uvmindiff(data)                              ((0x7F000000&(data))>>24)
#define  IDCTI_I_DCTI_CTRL_5_get_rate_stair2(data)                               ((0x00700000&(data))>>20)
#define  IDCTI_I_DCTI_CTRL_5_get_rate_stair1(data)                               ((0x00070000&(data))>>16)
#define  IDCTI_I_DCTI_CTRL_5_get_th_stair(data)                                  ((0x00003F00&(data))>>8)

#define  IDCTI_I_DCTI_CTRL_6                                                    0x180231E8
#define  IDCTI_I_DCTI_CTRL_6_reg_addr                                            "0xB80231E8"
#define  IDCTI_I_DCTI_CTRL_6_reg                                                 0xB80231E8
#define  IDCTI_I_DCTI_CTRL_6_inst_addr                                           "0x0009"
#define  set_IDCTI_I_DCTI_CTRL_6_reg(data)                                       (*((volatile unsigned int*)IDCTI_I_DCTI_CTRL_6_reg)=data)
#define  get_IDCTI_I_DCTI_CTRL_6_reg                                             (*((volatile unsigned int*)IDCTI_I_DCTI_CTRL_6_reg))
#define  IDCTI_I_DCTI_CTRL_6_statistic_hist_shift                                (12)
#define  IDCTI_I_DCTI_CTRL_6_rate_engsync_shift                                  (9)
#define  IDCTI_I_DCTI_CTRL_6_rate_uvmindiff_shift                                (6)
#define  IDCTI_I_DCTI_CTRL_6_th_engsync_shift                                    (0)
#define  IDCTI_I_DCTI_CTRL_6_statistic_hist_mask                                 (0x7FFFF000)
#define  IDCTI_I_DCTI_CTRL_6_rate_engsync_mask                                   (0x00000E00)
#define  IDCTI_I_DCTI_CTRL_6_rate_uvmindiff_mask                                 (0x000001C0)
#define  IDCTI_I_DCTI_CTRL_6_th_engsync_mask                                     (0x0000003F)
#define  IDCTI_I_DCTI_CTRL_6_statistic_hist(data)                                (0x7FFFF000&((data)<<12))
#define  IDCTI_I_DCTI_CTRL_6_rate_engsync(data)                                  (0x00000E00&((data)<<9))
#define  IDCTI_I_DCTI_CTRL_6_rate_uvmindiff(data)                                (0x000001C0&((data)<<6))
#define  IDCTI_I_DCTI_CTRL_6_th_engsync(data)                                    (0x0000003F&(data))
#define  IDCTI_I_DCTI_CTRL_6_get_statistic_hist(data)                            ((0x7FFFF000&(data))>>12)
#define  IDCTI_I_DCTI_CTRL_6_get_rate_engsync(data)                              ((0x00000E00&(data))>>9)
#define  IDCTI_I_DCTI_CTRL_6_get_rate_uvmindiff(data)                            ((0x000001C0&(data))>>6)
#define  IDCTI_I_DCTI_CTRL_6_get_th_engsync(data)                                (0x0000003F&(data))

#define  IDCTI_I_DCTI_CTRL_7                                                    0x180231EC
#define  IDCTI_I_DCTI_CTRL_7_reg_addr                                            "0xB80231EC"
#define  IDCTI_I_DCTI_CTRL_7_reg                                                 0xB80231EC
#define  IDCTI_I_DCTI_CTRL_7_inst_addr                                           "0x000A"
#define  set_IDCTI_I_DCTI_CTRL_7_reg(data)                                       (*((volatile unsigned int*)IDCTI_I_DCTI_CTRL_7_reg)=data)
#define  get_IDCTI_I_DCTI_CTRL_7_reg                                             (*((volatile unsigned int*)IDCTI_I_DCTI_CTRL_7_reg))
#define  IDCTI_I_DCTI_CTRL_7_debug_shiftbit_shift                                (15)
#define  IDCTI_I_DCTI_CTRL_7_debug_mode_shift                                    (12)
#define  IDCTI_I_DCTI_CTRL_7_high_bound_shift                                    (6)
#define  IDCTI_I_DCTI_CTRL_7_low_bound_shift                                     (0)
#define  IDCTI_I_DCTI_CTRL_7_debug_shiftbit_mask                                 (0x00038000)
#define  IDCTI_I_DCTI_CTRL_7_debug_mode_mask                                     (0x00007000)
#define  IDCTI_I_DCTI_CTRL_7_high_bound_mask                                     (0x00000FC0)
#define  IDCTI_I_DCTI_CTRL_7_low_bound_mask                                      (0x0000003F)
#define  IDCTI_I_DCTI_CTRL_7_debug_shiftbit(data)                                (0x00038000&((data)<<15))
#define  IDCTI_I_DCTI_CTRL_7_debug_mode(data)                                    (0x00007000&((data)<<12))
#define  IDCTI_I_DCTI_CTRL_7_high_bound(data)                                    (0x00000FC0&((data)<<6))
#define  IDCTI_I_DCTI_CTRL_7_low_bound(data)                                     (0x0000003F&(data))
#define  IDCTI_I_DCTI_CTRL_7_get_debug_shiftbit(data)                            ((0x00038000&(data))>>15)
#define  IDCTI_I_DCTI_CTRL_7_get_debug_mode(data)                                ((0x00007000&(data))>>12)
#define  IDCTI_I_DCTI_CTRL_7_get_high_bound(data)                                ((0x00000FC0&(data))>>6)
#define  IDCTI_I_DCTI_CTRL_7_get_low_bound(data)                                 (0x0000003F&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======IDCTI register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data_sel:1;
        RBus_UInt32  maxlen:3;
        RBus_UInt32  psmth:8;
        RBus_UInt32  res1:1;
        RBus_UInt32  lp_mode:3;
        RBus_UInt32  engdiv:2;
        RBus_UInt32  offdiv:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  uvgain:7;
        RBus_UInt32  dcti_mode:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  cur_sel:1;
        RBus_UInt32  dcti_en:1;
    };
}idcti_i_dcti_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  engdiv_v:2;
        RBus_UInt32  offdiv_v:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  uvgain_v:7;
        RBus_UInt32  res3:4;
    };
}idcti_i_dcti_ctrl_1_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  uvsync_en:1;
        RBus_UInt32  tran_mode:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  rate_steep:3;
        RBus_UInt32  res2:2;
        RBus_UInt32  th_steep:6;
        RBus_UInt32  th_coring:5;
        RBus_UInt32  steep_mode:3;
        RBus_UInt32  hp_mode:3;
        RBus_UInt32  vlp_mode:3;
        RBus_UInt32  median_mode:1;
        RBus_UInt32  blending_mode:1;
    };
}idcti_i_dcti_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  tran_mode_v:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  rate_steep_v:3;
        RBus_UInt32  res3:2;
        RBus_UInt32  th_steep_v:6;
        RBus_UInt32  res4:13;
        RBus_UInt32  steep_mode_v:3;
    };
}idcti_i_dcti_ctrl_2_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  maxminlen:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  rate_tran:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  th_tran:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  region_mode:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  rate_smooth:3;
        RBus_UInt32  res6:2;
        RBus_UInt32  th_smooth:6;
    };
}idcti_i_dcti_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  rate_tran_v:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  th_tran_v:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  region_mode_v:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  rate_smooth_v:3;
        RBus_UInt32  res5:2;
        RBus_UInt32  th_smooth_v:6;
    };
}idcti_i_dcti_ctrl_3_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  th_gtran:6;
    };
}idcti_i_dcti_ctrl_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  th_stair_v:6;
        RBus_UInt32  rate_stair2_v:3;
        RBus_UInt32  rate_stair1_v:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  th_gtran_v:6;
    };
}idcti_i_dcti_ctrl_4_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  statistic_en:1;
        RBus_UInt32  th_uvmindiff:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  rate_stair2:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  rate_stair1:3;
        RBus_UInt32  res3:2;
        RBus_UInt32  th_stair:6;
        RBus_UInt32  res4:8;
    };
}idcti_i_dcti_ctrl_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  statistic_hist:19;
        RBus_UInt32  rate_engsync:3;
        RBus_UInt32  rate_uvmindiff:3;
        RBus_UInt32  th_engsync:6;
    };
}idcti_i_dcti_ctrl_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  debug_shiftbit:3;
        RBus_UInt32  debug_mode:3;
        RBus_UInt32  high_bound:6;
        RBus_UInt32  low_bound:6;
    };
}idcti_i_dcti_ctrl_7_RBUS;

#else //apply LITTLE_ENDIAN

//======IDCTI register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dcti_en:1;
        RBus_UInt32  cur_sel:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dcti_mode:1;
        RBus_UInt32  uvgain:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  offdiv:2;
        RBus_UInt32  engdiv:2;
        RBus_UInt32  lp_mode:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  psmth:8;
        RBus_UInt32  maxlen:3;
        RBus_UInt32  data_sel:1;
    };
}idcti_i_dcti_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  uvgain_v:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  offdiv_v:2;
        RBus_UInt32  engdiv_v:2;
        RBus_UInt32  res3:16;
    };
}idcti_i_dcti_ctrl_1_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  blending_mode:1;
        RBus_UInt32  median_mode:1;
        RBus_UInt32  vlp_mode:3;
        RBus_UInt32  hp_mode:3;
        RBus_UInt32  steep_mode:3;
        RBus_UInt32  th_coring:5;
        RBus_UInt32  th_steep:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  rate_steep:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  tran_mode:3;
        RBus_UInt32  uvsync_en:1;
    };
}idcti_i_dcti_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  steep_mode_v:3;
        RBus_UInt32  res1:13;
        RBus_UInt32  th_steep_v:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  rate_steep_v:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  tran_mode_v:3;
        RBus_UInt32  res4:1;
    };
}idcti_i_dcti_ctrl_2_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  th_smooth:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  rate_smooth:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  region_mode:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  th_tran:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  rate_tran:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  maxminlen:3;
        RBus_UInt32  res6:1;
    };
}idcti_i_dcti_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  th_smooth_v:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  rate_smooth_v:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  region_mode_v:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  th_tran_v:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  rate_tran_v:3;
        RBus_UInt32  res5:5;
    };
}idcti_i_dcti_ctrl_3_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  th_gtran:6;
        RBus_UInt32  res1:26;
    };
}idcti_i_dcti_ctrl_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  th_gtran_v:6;
        RBus_UInt32  res1:5;
        RBus_UInt32  rate_stair1_v:3;
        RBus_UInt32  rate_stair2_v:3;
        RBus_UInt32  th_stair_v:6;
        RBus_UInt32  res2:9;
    };
}idcti_i_dcti_ctrl_4_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  th_stair:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  rate_stair1:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  rate_stair2:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  th_uvmindiff:7;
        RBus_UInt32  statistic_en:1;
    };
}idcti_i_dcti_ctrl_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  th_engsync:6;
        RBus_UInt32  rate_uvmindiff:3;
        RBus_UInt32  rate_engsync:3;
        RBus_UInt32  statistic_hist:19;
        RBus_UInt32  res1:1;
    };
}idcti_i_dcti_ctrl_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  low_bound:6;
        RBus_UInt32  high_bound:6;
        RBus_UInt32  debug_mode:3;
        RBus_UInt32  debug_shiftbit:3;
        RBus_UInt32  res1:14;
    };
}idcti_i_dcti_ctrl_7_RBUS;




#endif 


#endif 
