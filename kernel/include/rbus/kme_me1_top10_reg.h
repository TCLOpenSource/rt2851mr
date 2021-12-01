/**
* @file Merlin5_MEMC_KME_ME1_TOP10
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KME_ME1_TOP10_REG_H_
#define _RBUS_KME_ME1_TOP10_REG_H_

#include "rbus_types.h"



//  KME_ME1_TOP10 Register Address
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_0                                 0x1809B800
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_0_reg_addr                         "0xB809B800"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_0_reg                              0xB809B800
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_0_inst_addr                        "0x0000"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_0_reg(data)                    (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_0_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_0_reg                          (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_0_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_0_reg_me1_vst_stat_done_shift      (31)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_0_reg_me1_vst_stat_maxmindiff_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_0_reg_me1_vst_stat_coreapl_shift   (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_0_reg_me1_vst_stat_maxvalue_shift  (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_0_reg_me1_vst_stat_done_mask       (0x80000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_0_reg_me1_vst_stat_maxmindiff_mask (0x00FF0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_0_reg_me1_vst_stat_coreapl_mask    (0x0000FF00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_0_reg_me1_vst_stat_maxvalue_mask   (0x000000FF)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_0_reg_me1_vst_stat_done(data)      (0x80000000&((data)<<31))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_0_reg_me1_vst_stat_maxmindiff(data) (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_0_reg_me1_vst_stat_coreapl(data)   (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_0_reg_me1_vst_stat_maxvalue(data)  (0x000000FF&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_0_get_reg_me1_vst_stat_done(data)  ((0x80000000&(data))>>31)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_0_get_reg_me1_vst_stat_maxmindiff(data) ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_0_get_reg_me1_vst_stat_coreapl(data) ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_0_get_reg_me1_vst_stat_maxvalue(data) (0x000000FF&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_1                                 0x1809B804
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_1_reg_addr                         "0xB809B804"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_1_reg                              0xB809B804
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_1_inst_addr                        "0x0001"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_1_reg(data)                    (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_1_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_1_reg                          (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_1_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_1_reg_me1_vst_stat_apl2maxvalue_ratio_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_1_reg_me1_vst_stat_apl2maxmindiff_ratio_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_1_reg_me1_vst_stat_boundary_x4_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_1_reg_me1_vst_stat_apl2maxvalue_ratio_mask (0x3F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_1_reg_me1_vst_stat_apl2maxmindiff_ratio_mask (0x003F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_1_reg_me1_vst_stat_boundary_x4_mask (0x000000FF)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_1_reg_me1_vst_stat_apl2maxvalue_ratio(data) (0x3F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_1_reg_me1_vst_stat_apl2maxmindiff_ratio(data) (0x003F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_1_reg_me1_vst_stat_boundary_x4(data) (0x000000FF&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_1_get_reg_me1_vst_stat_apl2maxvalue_ratio(data) ((0x3F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_1_get_reg_me1_vst_stat_apl2maxmindiff_ratio(data) ((0x003F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_1_get_reg_me1_vst_stat_boundary_x4(data) (0x000000FF&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_2                                 0x1809B808
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_2_reg_addr                         "0xB809B808"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_2_reg                              0xB809B808
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_2_inst_addr                        "0x0002"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_2_reg(data)                    (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_2_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_2_reg                          (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_2_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_2_reg_me1_vst_stat_boundary_x3_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_2_reg_me1_vst_stat_boundary_x2_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_2_reg_me1_vst_stat_boundary_x1_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_2_reg_me1_vst_stat_boundary_x0_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_2_reg_me1_vst_stat_boundary_x3_mask (0xFF000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_2_reg_me1_vst_stat_boundary_x2_mask (0x00FF0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_2_reg_me1_vst_stat_boundary_x1_mask (0x0000FF00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_2_reg_me1_vst_stat_boundary_x0_mask (0x000000FF)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_2_reg_me1_vst_stat_boundary_x3(data) (0xFF000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_2_reg_me1_vst_stat_boundary_x2(data) (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_2_reg_me1_vst_stat_boundary_x1(data) (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_2_reg_me1_vst_stat_boundary_x0(data) (0x000000FF&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_2_get_reg_me1_vst_stat_boundary_x3(data) ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_2_get_reg_me1_vst_stat_boundary_x2(data) ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_2_get_reg_me1_vst_stat_boundary_x1(data) ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_CTRL_2_get_reg_me1_vst_stat_boundary_x0(data) (0x000000FF&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0                                 0x1809B80C
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_addr                         "0xB809B80C"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg                              0xB809B80C
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_inst_addr                        "0x0003"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg(data)                    (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg                          (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_me1_vst_stat_sec0_x_p_b1_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_me1_vst_stat_sec0_x_p_b0_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_me1_vst_stat_sec0_x_z_b2_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_me1_vst_stat_sec0_x_z_b1_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_me1_vst_stat_sec0_x_z_b0_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_me1_vst_stat_sec0_x_n_b2_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_me1_vst_stat_sec0_x_n_b1_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_me1_vst_stat_sec0_x_n_b0_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_me1_vst_stat_sec0_x_p_b1_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_me1_vst_stat_sec0_x_p_b0_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_me1_vst_stat_sec0_x_z_b2_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_me1_vst_stat_sec0_x_z_b1_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_me1_vst_stat_sec0_x_z_b0_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_me1_vst_stat_sec0_x_n_b2_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_me1_vst_stat_sec0_x_n_b1_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_me1_vst_stat_sec0_x_n_b0_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_me1_vst_stat_sec0_x_p_b1(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_me1_vst_stat_sec0_x_p_b0(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_me1_vst_stat_sec0_x_z_b2(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_me1_vst_stat_sec0_x_z_b1(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_me1_vst_stat_sec0_x_z_b0(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_me1_vst_stat_sec0_x_n_b2(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_me1_vst_stat_sec0_x_n_b1(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_reg_me1_vst_stat_sec0_x_n_b0(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_get_reg_me1_vst_stat_sec0_x_p_b1(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_get_reg_me1_vst_stat_sec0_x_p_b0(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_get_reg_me1_vst_stat_sec0_x_z_b2(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_get_reg_me1_vst_stat_sec0_x_z_b1(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_get_reg_me1_vst_stat_sec0_x_z_b0(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_get_reg_me1_vst_stat_sec0_x_n_b2(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_get_reg_me1_vst_stat_sec0_x_n_b1(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_0_get_reg_me1_vst_stat_sec0_x_n_b0(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1                                 0x1809B810
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_addr                         "0xB809B810"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg                              0xB809B810
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_inst_addr                        "0x0004"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg(data)                    (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg                          (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_me1_vst_stat_sec0_y_n6_b0_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_me1_vst_stat_sec0_y_n7_b2_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_me1_vst_stat_sec0_y_n7_b1_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_me1_vst_stat_sec0_y_n7_b0_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_me1_vst_stat_sec0_y_n8_b2_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_me1_vst_stat_sec0_y_n8_b1_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_me1_vst_stat_sec0_y_n8_b0_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_me1_vst_stat_sec0_x_p_b2_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_me1_vst_stat_sec0_y_n6_b0_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_me1_vst_stat_sec0_y_n7_b2_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_me1_vst_stat_sec0_y_n7_b1_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_me1_vst_stat_sec0_y_n7_b0_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_me1_vst_stat_sec0_y_n8_b2_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_me1_vst_stat_sec0_y_n8_b1_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_me1_vst_stat_sec0_y_n8_b0_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_me1_vst_stat_sec0_x_p_b2_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_me1_vst_stat_sec0_y_n6_b0(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_me1_vst_stat_sec0_y_n7_b2(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_me1_vst_stat_sec0_y_n7_b1(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_me1_vst_stat_sec0_y_n7_b0(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_me1_vst_stat_sec0_y_n8_b2(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_me1_vst_stat_sec0_y_n8_b1(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_me1_vst_stat_sec0_y_n8_b0(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_reg_me1_vst_stat_sec0_x_p_b2(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_get_reg_me1_vst_stat_sec0_y_n6_b0(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_get_reg_me1_vst_stat_sec0_y_n7_b2(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_get_reg_me1_vst_stat_sec0_y_n7_b1(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_get_reg_me1_vst_stat_sec0_y_n7_b0(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_get_reg_me1_vst_stat_sec0_y_n8_b2(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_get_reg_me1_vst_stat_sec0_y_n8_b1(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_get_reg_me1_vst_stat_sec0_y_n8_b0(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_1_get_reg_me1_vst_stat_sec0_x_p_b2(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2                                 0x1809B814
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_addr                         "0xB809B814"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg                              0xB809B814
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_inst_addr                        "0x0005"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg(data)                    (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg                          (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_me1_vst_stat_sec0_y_n4_b2_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_me1_vst_stat_sec0_y_n4_b1_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_me1_vst_stat_sec0_y_n4_b0_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_me1_vst_stat_sec0_y_n5_b2_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_me1_vst_stat_sec0_y_n5_b1_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_me1_vst_stat_sec0_y_n5_b0_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_me1_vst_stat_sec0_y_n6_b2_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_me1_vst_stat_sec0_y_n6_b1_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_me1_vst_stat_sec0_y_n4_b2_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_me1_vst_stat_sec0_y_n4_b1_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_me1_vst_stat_sec0_y_n4_b0_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_me1_vst_stat_sec0_y_n5_b2_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_me1_vst_stat_sec0_y_n5_b1_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_me1_vst_stat_sec0_y_n5_b0_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_me1_vst_stat_sec0_y_n6_b2_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_me1_vst_stat_sec0_y_n6_b1_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_me1_vst_stat_sec0_y_n4_b2(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_me1_vst_stat_sec0_y_n4_b1(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_me1_vst_stat_sec0_y_n4_b0(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_me1_vst_stat_sec0_y_n5_b2(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_me1_vst_stat_sec0_y_n5_b1(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_me1_vst_stat_sec0_y_n5_b0(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_me1_vst_stat_sec0_y_n6_b2(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_reg_me1_vst_stat_sec0_y_n6_b1(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_get_reg_me1_vst_stat_sec0_y_n4_b2(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_get_reg_me1_vst_stat_sec0_y_n4_b1(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_get_reg_me1_vst_stat_sec0_y_n4_b0(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_get_reg_me1_vst_stat_sec0_y_n5_b2(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_get_reg_me1_vst_stat_sec0_y_n5_b1(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_get_reg_me1_vst_stat_sec0_y_n5_b0(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_get_reg_me1_vst_stat_sec0_y_n6_b2(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_2_get_reg_me1_vst_stat_sec0_y_n6_b1(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3                                 0x1809B818
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_addr                         "0xB809B818"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg                              0xB809B818
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_inst_addr                        "0x0006"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg(data)                    (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg                          (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_me1_vst_stat_sec0_y_n1_b1_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_me1_vst_stat_sec0_y_n1_b0_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_me1_vst_stat_sec0_y_n2_b2_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_me1_vst_stat_sec0_y_n2_b1_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_me1_vst_stat_sec0_y_n2_b0_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_me1_vst_stat_sec0_y_n3_b2_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_me1_vst_stat_sec0_y_n3_b1_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_me1_vst_stat_sec0_y_n3_b0_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_me1_vst_stat_sec0_y_n1_b1_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_me1_vst_stat_sec0_y_n1_b0_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_me1_vst_stat_sec0_y_n2_b2_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_me1_vst_stat_sec0_y_n2_b1_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_me1_vst_stat_sec0_y_n2_b0_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_me1_vst_stat_sec0_y_n3_b2_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_me1_vst_stat_sec0_y_n3_b1_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_me1_vst_stat_sec0_y_n3_b0_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_me1_vst_stat_sec0_y_n1_b1(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_me1_vst_stat_sec0_y_n1_b0(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_me1_vst_stat_sec0_y_n2_b2(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_me1_vst_stat_sec0_y_n2_b1(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_me1_vst_stat_sec0_y_n2_b0(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_me1_vst_stat_sec0_y_n3_b2(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_me1_vst_stat_sec0_y_n3_b1(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_reg_me1_vst_stat_sec0_y_n3_b0(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_get_reg_me1_vst_stat_sec0_y_n1_b1(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_get_reg_me1_vst_stat_sec0_y_n1_b0(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_get_reg_me1_vst_stat_sec0_y_n2_b2(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_get_reg_me1_vst_stat_sec0_y_n2_b1(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_get_reg_me1_vst_stat_sec0_y_n2_b0(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_get_reg_me1_vst_stat_sec0_y_n3_b2(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_get_reg_me1_vst_stat_sec0_y_n3_b1(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_3_get_reg_me1_vst_stat_sec0_y_n3_b0(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4                                 0x1809B81C
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_addr                         "0xB809B81C"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg                              0xB809B81C
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_inst_addr                        "0x0007"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg(data)                    (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg                          (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_me1_vst_stat_sec0_y_p2_b0_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_me1_vst_stat_sec0_y_p1_b2_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_me1_vst_stat_sec0_y_p1_b1_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_me1_vst_stat_sec0_y_p1_b0_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_me1_vst_stat_sec0_y_z_b2_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_me1_vst_stat_sec0_y_z_b1_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_me1_vst_stat_sec0_y_z_b0_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_me1_vst_stat_sec0_y_n1_b2_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_me1_vst_stat_sec0_y_p2_b0_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_me1_vst_stat_sec0_y_p1_b2_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_me1_vst_stat_sec0_y_p1_b1_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_me1_vst_stat_sec0_y_p1_b0_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_me1_vst_stat_sec0_y_z_b2_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_me1_vst_stat_sec0_y_z_b1_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_me1_vst_stat_sec0_y_z_b0_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_me1_vst_stat_sec0_y_n1_b2_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_me1_vst_stat_sec0_y_p2_b0(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_me1_vst_stat_sec0_y_p1_b2(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_me1_vst_stat_sec0_y_p1_b1(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_me1_vst_stat_sec0_y_p1_b0(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_me1_vst_stat_sec0_y_z_b2(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_me1_vst_stat_sec0_y_z_b1(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_me1_vst_stat_sec0_y_z_b0(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_reg_me1_vst_stat_sec0_y_n1_b2(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_get_reg_me1_vst_stat_sec0_y_p2_b0(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_get_reg_me1_vst_stat_sec0_y_p1_b2(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_get_reg_me1_vst_stat_sec0_y_p1_b1(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_get_reg_me1_vst_stat_sec0_y_p1_b0(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_get_reg_me1_vst_stat_sec0_y_z_b2(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_get_reg_me1_vst_stat_sec0_y_z_b1(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_get_reg_me1_vst_stat_sec0_y_z_b0(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_4_get_reg_me1_vst_stat_sec0_y_n1_b2(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5                                 0x1809B820
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_addr                         "0xB809B820"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg                              0xB809B820
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_inst_addr                        "0x0008"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg(data)                    (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg                          (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_me1_vst_stat_sec0_y_p4_b2_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_me1_vst_stat_sec0_y_p4_b1_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_me1_vst_stat_sec0_y_p4_b0_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_me1_vst_stat_sec0_y_p3_b2_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_me1_vst_stat_sec0_y_p3_b1_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_me1_vst_stat_sec0_y_p3_b0_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_me1_vst_stat_sec0_y_p2_b2_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_me1_vst_stat_sec0_y_p2_b1_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_me1_vst_stat_sec0_y_p4_b2_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_me1_vst_stat_sec0_y_p4_b1_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_me1_vst_stat_sec0_y_p4_b0_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_me1_vst_stat_sec0_y_p3_b2_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_me1_vst_stat_sec0_y_p3_b1_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_me1_vst_stat_sec0_y_p3_b0_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_me1_vst_stat_sec0_y_p2_b2_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_me1_vst_stat_sec0_y_p2_b1_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_me1_vst_stat_sec0_y_p4_b2(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_me1_vst_stat_sec0_y_p4_b1(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_me1_vst_stat_sec0_y_p4_b0(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_me1_vst_stat_sec0_y_p3_b2(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_me1_vst_stat_sec0_y_p3_b1(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_me1_vst_stat_sec0_y_p3_b0(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_me1_vst_stat_sec0_y_p2_b2(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_reg_me1_vst_stat_sec0_y_p2_b1(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_get_reg_me1_vst_stat_sec0_y_p4_b2(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_get_reg_me1_vst_stat_sec0_y_p4_b1(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_get_reg_me1_vst_stat_sec0_y_p4_b0(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_get_reg_me1_vst_stat_sec0_y_p3_b2(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_get_reg_me1_vst_stat_sec0_y_p3_b1(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_get_reg_me1_vst_stat_sec0_y_p3_b0(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_get_reg_me1_vst_stat_sec0_y_p2_b2(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_5_get_reg_me1_vst_stat_sec0_y_p2_b1(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6                                 0x1809B824
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_addr                         "0xB809B824"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg                              0xB809B824
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_inst_addr                        "0x0009"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg(data)                    (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg                          (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_me1_vst_stat_sec0_y_p7_b1_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_me1_vst_stat_sec0_y_p7_b0_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_me1_vst_stat_sec0_y_p6_b2_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_me1_vst_stat_sec0_y_p6_b1_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_me1_vst_stat_sec0_y_p6_b0_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_me1_vst_stat_sec0_y_p5_b2_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_me1_vst_stat_sec0_y_p5_b1_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_me1_vst_stat_sec0_y_p5_b0_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_me1_vst_stat_sec0_y_p7_b1_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_me1_vst_stat_sec0_y_p7_b0_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_me1_vst_stat_sec0_y_p6_b2_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_me1_vst_stat_sec0_y_p6_b1_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_me1_vst_stat_sec0_y_p6_b0_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_me1_vst_stat_sec0_y_p5_b2_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_me1_vst_stat_sec0_y_p5_b1_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_me1_vst_stat_sec0_y_p5_b0_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_me1_vst_stat_sec0_y_p7_b1(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_me1_vst_stat_sec0_y_p7_b0(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_me1_vst_stat_sec0_y_p6_b2(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_me1_vst_stat_sec0_y_p6_b1(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_me1_vst_stat_sec0_y_p6_b0(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_me1_vst_stat_sec0_y_p5_b2(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_me1_vst_stat_sec0_y_p5_b1(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_reg_me1_vst_stat_sec0_y_p5_b0(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_get_reg_me1_vst_stat_sec0_y_p7_b1(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_get_reg_me1_vst_stat_sec0_y_p7_b0(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_get_reg_me1_vst_stat_sec0_y_p6_b2(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_get_reg_me1_vst_stat_sec0_y_p6_b1(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_get_reg_me1_vst_stat_sec0_y_p6_b0(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_get_reg_me1_vst_stat_sec0_y_p5_b2(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_get_reg_me1_vst_stat_sec0_y_p5_b1(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_6_get_reg_me1_vst_stat_sec0_y_p5_b0(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_7                                 0x1809B828
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_7_reg_addr                         "0xB809B828"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_7_reg                              0xB809B828
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_7_inst_addr                        "0x000A"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_7_reg(data)                    (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_7_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_7_reg                          (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_7_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_7_reg_me1_vst_stat_sec0_y_p8_b2_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_7_reg_me1_vst_stat_sec0_y_p8_b1_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_7_reg_me1_vst_stat_sec0_y_p8_b0_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_7_reg_me1_vst_stat_sec0_y_p7_b2_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_7_reg_me1_vst_stat_sec0_y_p8_b2_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_7_reg_me1_vst_stat_sec0_y_p8_b1_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_7_reg_me1_vst_stat_sec0_y_p8_b0_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_7_reg_me1_vst_stat_sec0_y_p7_b2_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_7_reg_me1_vst_stat_sec0_y_p8_b2(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_7_reg_me1_vst_stat_sec0_y_p8_b1(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_7_reg_me1_vst_stat_sec0_y_p8_b0(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_7_reg_me1_vst_stat_sec0_y_p7_b2(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_7_get_reg_me1_vst_stat_sec0_y_p8_b2(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_7_get_reg_me1_vst_stat_sec0_y_p8_b1(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_7_get_reg_me1_vst_stat_sec0_y_p8_b0(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_7_get_reg_me1_vst_stat_sec0_y_p7_b2(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8                                 0x1809B82C
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_addr                         "0xB809B82C"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg                              0xB809B82C
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_inst_addr                        "0x000B"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg(data)                    (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg                          (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_me1_vst_stat_sec1_x_p_b1_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_me1_vst_stat_sec1_x_p_b0_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_me1_vst_stat_sec1_x_z_b2_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_me1_vst_stat_sec1_x_z_b1_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_me1_vst_stat_sec1_x_z_b0_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_me1_vst_stat_sec1_x_n_b2_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_me1_vst_stat_sec1_x_n_b1_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_me1_vst_stat_sec1_x_n_b0_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_me1_vst_stat_sec1_x_p_b1_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_me1_vst_stat_sec1_x_p_b0_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_me1_vst_stat_sec1_x_z_b2_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_me1_vst_stat_sec1_x_z_b1_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_me1_vst_stat_sec1_x_z_b0_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_me1_vst_stat_sec1_x_n_b2_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_me1_vst_stat_sec1_x_n_b1_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_me1_vst_stat_sec1_x_n_b0_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_me1_vst_stat_sec1_x_p_b1(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_me1_vst_stat_sec1_x_p_b0(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_me1_vst_stat_sec1_x_z_b2(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_me1_vst_stat_sec1_x_z_b1(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_me1_vst_stat_sec1_x_z_b0(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_me1_vst_stat_sec1_x_n_b2(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_me1_vst_stat_sec1_x_n_b1(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_reg_me1_vst_stat_sec1_x_n_b0(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_get_reg_me1_vst_stat_sec1_x_p_b1(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_get_reg_me1_vst_stat_sec1_x_p_b0(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_get_reg_me1_vst_stat_sec1_x_z_b2(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_get_reg_me1_vst_stat_sec1_x_z_b1(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_get_reg_me1_vst_stat_sec1_x_z_b0(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_get_reg_me1_vst_stat_sec1_x_n_b2(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_get_reg_me1_vst_stat_sec1_x_n_b1(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_8_get_reg_me1_vst_stat_sec1_x_n_b0(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9                                 0x1809B830
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_addr                         "0xB809B830"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg                              0xB809B830
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_inst_addr                        "0x000C"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg(data)                    (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg                          (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_me1_vst_stat_sec1_y_n6_b0_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_me1_vst_stat_sec1_y_n7_b2_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_me1_vst_stat_sec1_y_n7_b1_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_me1_vst_stat_sec1_y_n7_b0_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_me1_vst_stat_sec1_y_n8_b2_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_me1_vst_stat_sec1_y_n8_b1_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_me1_vst_stat_sec1_y_n8_b0_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_me1_vst_stat_sec1_x_p_b2_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_me1_vst_stat_sec1_y_n6_b0_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_me1_vst_stat_sec1_y_n7_b2_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_me1_vst_stat_sec1_y_n7_b1_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_me1_vst_stat_sec1_y_n7_b0_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_me1_vst_stat_sec1_y_n8_b2_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_me1_vst_stat_sec1_y_n8_b1_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_me1_vst_stat_sec1_y_n8_b0_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_me1_vst_stat_sec1_x_p_b2_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_me1_vst_stat_sec1_y_n6_b0(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_me1_vst_stat_sec1_y_n7_b2(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_me1_vst_stat_sec1_y_n7_b1(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_me1_vst_stat_sec1_y_n7_b0(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_me1_vst_stat_sec1_y_n8_b2(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_me1_vst_stat_sec1_y_n8_b1(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_me1_vst_stat_sec1_y_n8_b0(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_reg_me1_vst_stat_sec1_x_p_b2(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_get_reg_me1_vst_stat_sec1_y_n6_b0(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_get_reg_me1_vst_stat_sec1_y_n7_b2(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_get_reg_me1_vst_stat_sec1_y_n7_b1(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_get_reg_me1_vst_stat_sec1_y_n7_b0(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_get_reg_me1_vst_stat_sec1_y_n8_b2(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_get_reg_me1_vst_stat_sec1_y_n8_b1(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_get_reg_me1_vst_stat_sec1_y_n8_b0(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_9_get_reg_me1_vst_stat_sec1_x_p_b2(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10                                0x1809B834
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_addr                        "0xB809B834"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg                             0xB809B834
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_inst_addr                       "0x000D"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg(data)                   (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg                         (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_me1_vst_stat_sec1_y_n4_b2_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_me1_vst_stat_sec1_y_n4_b1_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_me1_vst_stat_sec1_y_n4_b0_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_me1_vst_stat_sec1_y_n5_b2_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_me1_vst_stat_sec1_y_n5_b1_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_me1_vst_stat_sec1_y_n5_b0_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_me1_vst_stat_sec1_y_n6_b2_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_me1_vst_stat_sec1_y_n6_b1_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_me1_vst_stat_sec1_y_n4_b2_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_me1_vst_stat_sec1_y_n4_b1_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_me1_vst_stat_sec1_y_n4_b0_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_me1_vst_stat_sec1_y_n5_b2_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_me1_vst_stat_sec1_y_n5_b1_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_me1_vst_stat_sec1_y_n5_b0_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_me1_vst_stat_sec1_y_n6_b2_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_me1_vst_stat_sec1_y_n6_b1_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_me1_vst_stat_sec1_y_n4_b2(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_me1_vst_stat_sec1_y_n4_b1(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_me1_vst_stat_sec1_y_n4_b0(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_me1_vst_stat_sec1_y_n5_b2(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_me1_vst_stat_sec1_y_n5_b1(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_me1_vst_stat_sec1_y_n5_b0(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_me1_vst_stat_sec1_y_n6_b2(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_reg_me1_vst_stat_sec1_y_n6_b1(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_get_reg_me1_vst_stat_sec1_y_n4_b2(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_get_reg_me1_vst_stat_sec1_y_n4_b1(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_get_reg_me1_vst_stat_sec1_y_n4_b0(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_get_reg_me1_vst_stat_sec1_y_n5_b2(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_get_reg_me1_vst_stat_sec1_y_n5_b1(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_get_reg_me1_vst_stat_sec1_y_n5_b0(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_get_reg_me1_vst_stat_sec1_y_n6_b2(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_10_get_reg_me1_vst_stat_sec1_y_n6_b1(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11                                0x1809B838
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_addr                        "0xB809B838"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg                             0xB809B838
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_inst_addr                       "0x000E"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg(data)                   (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg                         (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_me1_vst_stat_sec1_y_n1_b1_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_me1_vst_stat_sec1_y_n1_b0_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_me1_vst_stat_sec1_y_n2_b2_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_me1_vst_stat_sec1_y_n2_b1_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_me1_vst_stat_sec1_y_n2_b0_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_me1_vst_stat_sec1_y_n3_b2_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_me1_vst_stat_sec1_y_n3_b1_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_me1_vst_stat_sec1_y_n3_b0_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_me1_vst_stat_sec1_y_n1_b1_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_me1_vst_stat_sec1_y_n1_b0_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_me1_vst_stat_sec1_y_n2_b2_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_me1_vst_stat_sec1_y_n2_b1_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_me1_vst_stat_sec1_y_n2_b0_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_me1_vst_stat_sec1_y_n3_b2_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_me1_vst_stat_sec1_y_n3_b1_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_me1_vst_stat_sec1_y_n3_b0_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_me1_vst_stat_sec1_y_n1_b1(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_me1_vst_stat_sec1_y_n1_b0(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_me1_vst_stat_sec1_y_n2_b2(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_me1_vst_stat_sec1_y_n2_b1(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_me1_vst_stat_sec1_y_n2_b0(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_me1_vst_stat_sec1_y_n3_b2(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_me1_vst_stat_sec1_y_n3_b1(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_reg_me1_vst_stat_sec1_y_n3_b0(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_get_reg_me1_vst_stat_sec1_y_n1_b1(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_get_reg_me1_vst_stat_sec1_y_n1_b0(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_get_reg_me1_vst_stat_sec1_y_n2_b2(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_get_reg_me1_vst_stat_sec1_y_n2_b1(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_get_reg_me1_vst_stat_sec1_y_n2_b0(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_get_reg_me1_vst_stat_sec1_y_n3_b2(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_get_reg_me1_vst_stat_sec1_y_n3_b1(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_11_get_reg_me1_vst_stat_sec1_y_n3_b0(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12                                0x1809B83C
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_addr                        "0xB809B83C"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg                             0xB809B83C
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_inst_addr                       "0x000F"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg(data)                   (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg                         (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_me1_vst_stat_sec1_y_p2_b0_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_me1_vst_stat_sec1_y_p1_b2_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_me1_vst_stat_sec1_y_p1_b1_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_me1_vst_stat_sec1_y_p1_b0_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_me1_vst_stat_sec1_y_z_b2_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_me1_vst_stat_sec1_y_z_b1_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_me1_vst_stat_sec1_y_z_b0_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_me1_vst_stat_sec1_y_n1_b2_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_me1_vst_stat_sec1_y_p2_b0_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_me1_vst_stat_sec1_y_p1_b2_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_me1_vst_stat_sec1_y_p1_b1_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_me1_vst_stat_sec1_y_p1_b0_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_me1_vst_stat_sec1_y_z_b2_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_me1_vst_stat_sec1_y_z_b1_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_me1_vst_stat_sec1_y_z_b0_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_me1_vst_stat_sec1_y_n1_b2_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_me1_vst_stat_sec1_y_p2_b0(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_me1_vst_stat_sec1_y_p1_b2(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_me1_vst_stat_sec1_y_p1_b1(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_me1_vst_stat_sec1_y_p1_b0(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_me1_vst_stat_sec1_y_z_b2(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_me1_vst_stat_sec1_y_z_b1(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_me1_vst_stat_sec1_y_z_b0(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_reg_me1_vst_stat_sec1_y_n1_b2(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_get_reg_me1_vst_stat_sec1_y_p2_b0(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_get_reg_me1_vst_stat_sec1_y_p1_b2(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_get_reg_me1_vst_stat_sec1_y_p1_b1(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_get_reg_me1_vst_stat_sec1_y_p1_b0(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_get_reg_me1_vst_stat_sec1_y_z_b2(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_get_reg_me1_vst_stat_sec1_y_z_b1(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_get_reg_me1_vst_stat_sec1_y_z_b0(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_12_get_reg_me1_vst_stat_sec1_y_n1_b2(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13                                0x1809B840
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_addr                        "0xB809B840"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg                             0xB809B840
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_inst_addr                       "0x0010"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg(data)                   (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg                         (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_me1_vst_stat_sec1_y_p4_b2_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_me1_vst_stat_sec1_y_p4_b1_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_me1_vst_stat_sec1_y_p4_b0_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_me1_vst_stat_sec1_y_p3_b2_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_me1_vst_stat_sec1_y_p3_b1_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_me1_vst_stat_sec1_y_p3_b0_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_me1_vst_stat_sec1_y_p2_b2_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_me1_vst_stat_sec1_y_p2_b1_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_me1_vst_stat_sec1_y_p4_b2_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_me1_vst_stat_sec1_y_p4_b1_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_me1_vst_stat_sec1_y_p4_b0_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_me1_vst_stat_sec1_y_p3_b2_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_me1_vst_stat_sec1_y_p3_b1_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_me1_vst_stat_sec1_y_p3_b0_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_me1_vst_stat_sec1_y_p2_b2_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_me1_vst_stat_sec1_y_p2_b1_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_me1_vst_stat_sec1_y_p4_b2(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_me1_vst_stat_sec1_y_p4_b1(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_me1_vst_stat_sec1_y_p4_b0(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_me1_vst_stat_sec1_y_p3_b2(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_me1_vst_stat_sec1_y_p3_b1(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_me1_vst_stat_sec1_y_p3_b0(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_me1_vst_stat_sec1_y_p2_b2(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_reg_me1_vst_stat_sec1_y_p2_b1(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_get_reg_me1_vst_stat_sec1_y_p4_b2(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_get_reg_me1_vst_stat_sec1_y_p4_b1(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_get_reg_me1_vst_stat_sec1_y_p4_b0(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_get_reg_me1_vst_stat_sec1_y_p3_b2(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_get_reg_me1_vst_stat_sec1_y_p3_b1(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_get_reg_me1_vst_stat_sec1_y_p3_b0(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_get_reg_me1_vst_stat_sec1_y_p2_b2(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_13_get_reg_me1_vst_stat_sec1_y_p2_b1(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14                                0x1809B844
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_addr                        "0xB809B844"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg                             0xB809B844
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_inst_addr                       "0x0011"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg(data)                   (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg                         (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_me1_vst_stat_sec1_y_p7_b1_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_me1_vst_stat_sec1_y_p7_b0_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_me1_vst_stat_sec1_y_p6_b2_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_me1_vst_stat_sec1_y_p6_b1_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_me1_vst_stat_sec1_y_p6_b0_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_me1_vst_stat_sec1_y_p5_b2_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_me1_vst_stat_sec1_y_p5_b1_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_me1_vst_stat_sec1_y_p5_b0_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_me1_vst_stat_sec1_y_p7_b1_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_me1_vst_stat_sec1_y_p7_b0_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_me1_vst_stat_sec1_y_p6_b2_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_me1_vst_stat_sec1_y_p6_b1_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_me1_vst_stat_sec1_y_p6_b0_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_me1_vst_stat_sec1_y_p5_b2_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_me1_vst_stat_sec1_y_p5_b1_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_me1_vst_stat_sec1_y_p5_b0_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_me1_vst_stat_sec1_y_p7_b1(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_me1_vst_stat_sec1_y_p7_b0(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_me1_vst_stat_sec1_y_p6_b2(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_me1_vst_stat_sec1_y_p6_b1(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_me1_vst_stat_sec1_y_p6_b0(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_me1_vst_stat_sec1_y_p5_b2(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_me1_vst_stat_sec1_y_p5_b1(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_reg_me1_vst_stat_sec1_y_p5_b0(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_get_reg_me1_vst_stat_sec1_y_p7_b1(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_get_reg_me1_vst_stat_sec1_y_p7_b0(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_get_reg_me1_vst_stat_sec1_y_p6_b2(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_get_reg_me1_vst_stat_sec1_y_p6_b1(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_get_reg_me1_vst_stat_sec1_y_p6_b0(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_get_reg_me1_vst_stat_sec1_y_p5_b2(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_get_reg_me1_vst_stat_sec1_y_p5_b1(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_14_get_reg_me1_vst_stat_sec1_y_p5_b0(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_15                                0x1809B848
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_15_reg_addr                        "0xB809B848"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_15_reg                             0xB809B848
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_15_inst_addr                       "0x0012"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_15_reg(data)                   (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_15_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_15_reg                         (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_15_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_15_reg_me1_vst_stat_sec1_y_p8_b2_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_15_reg_me1_vst_stat_sec1_y_p8_b1_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_15_reg_me1_vst_stat_sec1_y_p8_b0_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_15_reg_me1_vst_stat_sec1_y_p7_b2_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_15_reg_me1_vst_stat_sec1_y_p8_b2_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_15_reg_me1_vst_stat_sec1_y_p8_b1_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_15_reg_me1_vst_stat_sec1_y_p8_b0_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_15_reg_me1_vst_stat_sec1_y_p7_b2_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_15_reg_me1_vst_stat_sec1_y_p8_b2(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_15_reg_me1_vst_stat_sec1_y_p8_b1(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_15_reg_me1_vst_stat_sec1_y_p8_b0(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_15_reg_me1_vst_stat_sec1_y_p7_b2(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_15_get_reg_me1_vst_stat_sec1_y_p8_b2(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_15_get_reg_me1_vst_stat_sec1_y_p8_b1(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_15_get_reg_me1_vst_stat_sec1_y_p8_b0(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_15_get_reg_me1_vst_stat_sec1_y_p7_b2(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16                                0x1809B84C
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_addr                        "0xB809B84C"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg                             0xB809B84C
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_inst_addr                       "0x0013"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg(data)                   (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg                         (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_me1_vst_stat_sec2_x_p_b1_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_me1_vst_stat_sec2_x_p_b0_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_me1_vst_stat_sec2_x_z_b2_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_me1_vst_stat_sec2_x_z_b1_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_me1_vst_stat_sec2_x_z_b0_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_me1_vst_stat_sec2_x_n_b2_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_me1_vst_stat_sec2_x_n_b1_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_me1_vst_stat_sec2_x_n_b0_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_me1_vst_stat_sec2_x_p_b1_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_me1_vst_stat_sec2_x_p_b0_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_me1_vst_stat_sec2_x_z_b2_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_me1_vst_stat_sec2_x_z_b1_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_me1_vst_stat_sec2_x_z_b0_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_me1_vst_stat_sec2_x_n_b2_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_me1_vst_stat_sec2_x_n_b1_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_me1_vst_stat_sec2_x_n_b0_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_me1_vst_stat_sec2_x_p_b1(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_me1_vst_stat_sec2_x_p_b0(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_me1_vst_stat_sec2_x_z_b2(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_me1_vst_stat_sec2_x_z_b1(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_me1_vst_stat_sec2_x_z_b0(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_me1_vst_stat_sec2_x_n_b2(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_me1_vst_stat_sec2_x_n_b1(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_reg_me1_vst_stat_sec2_x_n_b0(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_get_reg_me1_vst_stat_sec2_x_p_b1(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_get_reg_me1_vst_stat_sec2_x_p_b0(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_get_reg_me1_vst_stat_sec2_x_z_b2(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_get_reg_me1_vst_stat_sec2_x_z_b1(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_get_reg_me1_vst_stat_sec2_x_z_b0(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_get_reg_me1_vst_stat_sec2_x_n_b2(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_get_reg_me1_vst_stat_sec2_x_n_b1(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_16_get_reg_me1_vst_stat_sec2_x_n_b0(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17                                0x1809B850
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_addr                        "0xB809B850"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg                             0xB809B850
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_inst_addr                       "0x0014"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg(data)                   (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg                         (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_me1_vst_stat_sec2_y_n6_b0_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_me1_vst_stat_sec2_y_n7_b2_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_me1_vst_stat_sec2_y_n7_b1_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_me1_vst_stat_sec2_y_n7_b0_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_me1_vst_stat_sec2_y_n8_b2_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_me1_vst_stat_sec2_y_n8_b1_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_me1_vst_stat_sec2_y_n8_b0_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_me1_vst_stat_sec2_x_p_b2_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_me1_vst_stat_sec2_y_n6_b0_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_me1_vst_stat_sec2_y_n7_b2_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_me1_vst_stat_sec2_y_n7_b1_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_me1_vst_stat_sec2_y_n7_b0_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_me1_vst_stat_sec2_y_n8_b2_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_me1_vst_stat_sec2_y_n8_b1_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_me1_vst_stat_sec2_y_n8_b0_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_me1_vst_stat_sec2_x_p_b2_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_me1_vst_stat_sec2_y_n6_b0(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_me1_vst_stat_sec2_y_n7_b2(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_me1_vst_stat_sec2_y_n7_b1(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_me1_vst_stat_sec2_y_n7_b0(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_me1_vst_stat_sec2_y_n8_b2(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_me1_vst_stat_sec2_y_n8_b1(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_me1_vst_stat_sec2_y_n8_b0(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_reg_me1_vst_stat_sec2_x_p_b2(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_get_reg_me1_vst_stat_sec2_y_n6_b0(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_get_reg_me1_vst_stat_sec2_y_n7_b2(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_get_reg_me1_vst_stat_sec2_y_n7_b1(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_get_reg_me1_vst_stat_sec2_y_n7_b0(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_get_reg_me1_vst_stat_sec2_y_n8_b2(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_get_reg_me1_vst_stat_sec2_y_n8_b1(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_get_reg_me1_vst_stat_sec2_y_n8_b0(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_17_get_reg_me1_vst_stat_sec2_x_p_b2(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18                                0x1809B854
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_addr                        "0xB809B854"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg                             0xB809B854
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_inst_addr                       "0x0015"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg(data)                   (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg                         (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_me1_vst_stat_sec2_y_n4_b2_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_me1_vst_stat_sec2_y_n4_b1_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_me1_vst_stat_sec2_y_n4_b0_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_me1_vst_stat_sec2_y_n5_b2_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_me1_vst_stat_sec2_y_n5_b1_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_me1_vst_stat_sec2_y_n5_b0_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_me1_vst_stat_sec2_y_n6_b2_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_me1_vst_stat_sec2_y_n6_b1_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_me1_vst_stat_sec2_y_n4_b2_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_me1_vst_stat_sec2_y_n4_b1_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_me1_vst_stat_sec2_y_n4_b0_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_me1_vst_stat_sec2_y_n5_b2_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_me1_vst_stat_sec2_y_n5_b1_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_me1_vst_stat_sec2_y_n5_b0_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_me1_vst_stat_sec2_y_n6_b2_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_me1_vst_stat_sec2_y_n6_b1_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_me1_vst_stat_sec2_y_n4_b2(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_me1_vst_stat_sec2_y_n4_b1(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_me1_vst_stat_sec2_y_n4_b0(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_me1_vst_stat_sec2_y_n5_b2(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_me1_vst_stat_sec2_y_n5_b1(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_me1_vst_stat_sec2_y_n5_b0(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_me1_vst_stat_sec2_y_n6_b2(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_reg_me1_vst_stat_sec2_y_n6_b1(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_get_reg_me1_vst_stat_sec2_y_n4_b2(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_get_reg_me1_vst_stat_sec2_y_n4_b1(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_get_reg_me1_vst_stat_sec2_y_n4_b0(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_get_reg_me1_vst_stat_sec2_y_n5_b2(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_get_reg_me1_vst_stat_sec2_y_n5_b1(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_get_reg_me1_vst_stat_sec2_y_n5_b0(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_get_reg_me1_vst_stat_sec2_y_n6_b2(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_18_get_reg_me1_vst_stat_sec2_y_n6_b1(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19                                0x1809B858
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_addr                        "0xB809B858"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg                             0xB809B858
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_inst_addr                       "0x0016"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg(data)                   (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg                         (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_me1_vst_stat_sec2_y_n1_b1_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_me1_vst_stat_sec2_y_n1_b0_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_me1_vst_stat_sec2_y_n2_b2_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_me1_vst_stat_sec2_y_n2_b1_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_me1_vst_stat_sec2_y_n2_b0_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_me1_vst_stat_sec2_y_n3_b2_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_me1_vst_stat_sec2_y_n3_b1_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_me1_vst_stat_sec2_y_n3_b0_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_me1_vst_stat_sec2_y_n1_b1_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_me1_vst_stat_sec2_y_n1_b0_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_me1_vst_stat_sec2_y_n2_b2_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_me1_vst_stat_sec2_y_n2_b1_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_me1_vst_stat_sec2_y_n2_b0_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_me1_vst_stat_sec2_y_n3_b2_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_me1_vst_stat_sec2_y_n3_b1_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_me1_vst_stat_sec2_y_n3_b0_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_me1_vst_stat_sec2_y_n1_b1(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_me1_vst_stat_sec2_y_n1_b0(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_me1_vst_stat_sec2_y_n2_b2(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_me1_vst_stat_sec2_y_n2_b1(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_me1_vst_stat_sec2_y_n2_b0(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_me1_vst_stat_sec2_y_n3_b2(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_me1_vst_stat_sec2_y_n3_b1(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_reg_me1_vst_stat_sec2_y_n3_b0(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_get_reg_me1_vst_stat_sec2_y_n1_b1(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_get_reg_me1_vst_stat_sec2_y_n1_b0(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_get_reg_me1_vst_stat_sec2_y_n2_b2(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_get_reg_me1_vst_stat_sec2_y_n2_b1(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_get_reg_me1_vst_stat_sec2_y_n2_b0(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_get_reg_me1_vst_stat_sec2_y_n3_b2(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_get_reg_me1_vst_stat_sec2_y_n3_b1(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_19_get_reg_me1_vst_stat_sec2_y_n3_b0(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20                                0x1809B85C
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_addr                        "0xB809B85C"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg                             0xB809B85C
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_inst_addr                       "0x0017"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg(data)                   (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg                         (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_me1_vst_stat_sec2_y_p2_b0_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_me1_vst_stat_sec2_y_p1_b2_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_me1_vst_stat_sec2_y_p1_b1_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_me1_vst_stat_sec2_y_p1_b0_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_me1_vst_stat_sec2_y_z_b2_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_me1_vst_stat_sec2_y_z_b1_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_me1_vst_stat_sec2_y_z_b0_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_me1_vst_stat_sec2_y_n1_b2_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_me1_vst_stat_sec2_y_p2_b0_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_me1_vst_stat_sec2_y_p1_b2_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_me1_vst_stat_sec2_y_p1_b1_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_me1_vst_stat_sec2_y_p1_b0_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_me1_vst_stat_sec2_y_z_b2_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_me1_vst_stat_sec2_y_z_b1_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_me1_vst_stat_sec2_y_z_b0_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_me1_vst_stat_sec2_y_n1_b2_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_me1_vst_stat_sec2_y_p2_b0(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_me1_vst_stat_sec2_y_p1_b2(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_me1_vst_stat_sec2_y_p1_b1(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_me1_vst_stat_sec2_y_p1_b0(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_me1_vst_stat_sec2_y_z_b2(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_me1_vst_stat_sec2_y_z_b1(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_me1_vst_stat_sec2_y_z_b0(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_reg_me1_vst_stat_sec2_y_n1_b2(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_get_reg_me1_vst_stat_sec2_y_p2_b0(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_get_reg_me1_vst_stat_sec2_y_p1_b2(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_get_reg_me1_vst_stat_sec2_y_p1_b1(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_get_reg_me1_vst_stat_sec2_y_p1_b0(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_get_reg_me1_vst_stat_sec2_y_z_b2(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_get_reg_me1_vst_stat_sec2_y_z_b1(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_get_reg_me1_vst_stat_sec2_y_z_b0(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_20_get_reg_me1_vst_stat_sec2_y_n1_b2(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21                                0x1809B860
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_addr                        "0xB809B860"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg                             0xB809B860
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_inst_addr                       "0x0018"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg(data)                   (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg                         (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_me1_vst_stat_sec2_y_p4_b2_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_me1_vst_stat_sec2_y_p4_b1_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_me1_vst_stat_sec2_y_p4_b0_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_me1_vst_stat_sec2_y_p3_b2_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_me1_vst_stat_sec2_y_p3_b1_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_me1_vst_stat_sec2_y_p3_b0_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_me1_vst_stat_sec2_y_p2_b2_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_me1_vst_stat_sec2_y_p2_b1_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_me1_vst_stat_sec2_y_p4_b2_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_me1_vst_stat_sec2_y_p4_b1_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_me1_vst_stat_sec2_y_p4_b0_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_me1_vst_stat_sec2_y_p3_b2_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_me1_vst_stat_sec2_y_p3_b1_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_me1_vst_stat_sec2_y_p3_b0_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_me1_vst_stat_sec2_y_p2_b2_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_me1_vst_stat_sec2_y_p2_b1_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_me1_vst_stat_sec2_y_p4_b2(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_me1_vst_stat_sec2_y_p4_b1(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_me1_vst_stat_sec2_y_p4_b0(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_me1_vst_stat_sec2_y_p3_b2(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_me1_vst_stat_sec2_y_p3_b1(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_me1_vst_stat_sec2_y_p3_b0(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_me1_vst_stat_sec2_y_p2_b2(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_reg_me1_vst_stat_sec2_y_p2_b1(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_get_reg_me1_vst_stat_sec2_y_p4_b2(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_get_reg_me1_vst_stat_sec2_y_p4_b1(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_get_reg_me1_vst_stat_sec2_y_p4_b0(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_get_reg_me1_vst_stat_sec2_y_p3_b2(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_get_reg_me1_vst_stat_sec2_y_p3_b1(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_get_reg_me1_vst_stat_sec2_y_p3_b0(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_get_reg_me1_vst_stat_sec2_y_p2_b2(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_21_get_reg_me1_vst_stat_sec2_y_p2_b1(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22                                0x1809B864
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_addr                        "0xB809B864"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg                             0xB809B864
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_inst_addr                       "0x0019"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg(data)                   (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg                         (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_me1_vst_stat_sec2_y_p7_b1_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_me1_vst_stat_sec2_y_p7_b0_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_me1_vst_stat_sec2_y_p6_b2_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_me1_vst_stat_sec2_y_p6_b1_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_me1_vst_stat_sec2_y_p6_b0_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_me1_vst_stat_sec2_y_p5_b2_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_me1_vst_stat_sec2_y_p5_b1_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_me1_vst_stat_sec2_y_p5_b0_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_me1_vst_stat_sec2_y_p7_b1_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_me1_vst_stat_sec2_y_p7_b0_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_me1_vst_stat_sec2_y_p6_b2_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_me1_vst_stat_sec2_y_p6_b1_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_me1_vst_stat_sec2_y_p6_b0_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_me1_vst_stat_sec2_y_p5_b2_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_me1_vst_stat_sec2_y_p5_b1_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_me1_vst_stat_sec2_y_p5_b0_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_me1_vst_stat_sec2_y_p7_b1(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_me1_vst_stat_sec2_y_p7_b0(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_me1_vst_stat_sec2_y_p6_b2(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_me1_vst_stat_sec2_y_p6_b1(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_me1_vst_stat_sec2_y_p6_b0(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_me1_vst_stat_sec2_y_p5_b2(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_me1_vst_stat_sec2_y_p5_b1(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_reg_me1_vst_stat_sec2_y_p5_b0(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_get_reg_me1_vst_stat_sec2_y_p7_b1(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_get_reg_me1_vst_stat_sec2_y_p7_b0(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_get_reg_me1_vst_stat_sec2_y_p6_b2(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_get_reg_me1_vst_stat_sec2_y_p6_b1(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_get_reg_me1_vst_stat_sec2_y_p6_b0(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_get_reg_me1_vst_stat_sec2_y_p5_b2(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_get_reg_me1_vst_stat_sec2_y_p5_b1(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_22_get_reg_me1_vst_stat_sec2_y_p5_b0(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_23                                0x1809B868
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_23_reg_addr                        "0xB809B868"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_23_reg                             0xB809B868
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_23_inst_addr                       "0x001A"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_23_reg(data)                   (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_23_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_23_reg                         (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_23_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_23_reg_me1_vst_stat_sec2_y_p8_b2_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_23_reg_me1_vst_stat_sec2_y_p8_b1_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_23_reg_me1_vst_stat_sec2_y_p8_b0_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_23_reg_me1_vst_stat_sec2_y_p7_b2_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_23_reg_me1_vst_stat_sec2_y_p8_b2_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_23_reg_me1_vst_stat_sec2_y_p8_b1_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_23_reg_me1_vst_stat_sec2_y_p8_b0_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_23_reg_me1_vst_stat_sec2_y_p7_b2_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_23_reg_me1_vst_stat_sec2_y_p8_b2(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_23_reg_me1_vst_stat_sec2_y_p8_b1(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_23_reg_me1_vst_stat_sec2_y_p8_b0(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_23_reg_me1_vst_stat_sec2_y_p7_b2(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_23_get_reg_me1_vst_stat_sec2_y_p8_b2(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_23_get_reg_me1_vst_stat_sec2_y_p8_b1(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_23_get_reg_me1_vst_stat_sec2_y_p8_b0(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_23_get_reg_me1_vst_stat_sec2_y_p7_b2(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24                                0x1809B86C
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_addr                        "0xB809B86C"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg                             0xB809B86C
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_inst_addr                       "0x001B"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg(data)                   (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg                         (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_me1_vst_stat_sec3_x_p_b1_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_me1_vst_stat_sec3_x_p_b0_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_me1_vst_stat_sec3_x_z_b2_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_me1_vst_stat_sec3_x_z_b1_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_me1_vst_stat_sec3_x_z_b0_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_me1_vst_stat_sec3_x_n_b2_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_me1_vst_stat_sec3_x_n_b1_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_me1_vst_stat_sec3_x_n_b0_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_me1_vst_stat_sec3_x_p_b1_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_me1_vst_stat_sec3_x_p_b0_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_me1_vst_stat_sec3_x_z_b2_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_me1_vst_stat_sec3_x_z_b1_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_me1_vst_stat_sec3_x_z_b0_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_me1_vst_stat_sec3_x_n_b2_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_me1_vst_stat_sec3_x_n_b1_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_me1_vst_stat_sec3_x_n_b0_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_me1_vst_stat_sec3_x_p_b1(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_me1_vst_stat_sec3_x_p_b0(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_me1_vst_stat_sec3_x_z_b2(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_me1_vst_stat_sec3_x_z_b1(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_me1_vst_stat_sec3_x_z_b0(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_me1_vst_stat_sec3_x_n_b2(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_me1_vst_stat_sec3_x_n_b1(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_reg_me1_vst_stat_sec3_x_n_b0(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_get_reg_me1_vst_stat_sec3_x_p_b1(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_get_reg_me1_vst_stat_sec3_x_p_b0(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_get_reg_me1_vst_stat_sec3_x_z_b2(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_get_reg_me1_vst_stat_sec3_x_z_b1(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_get_reg_me1_vst_stat_sec3_x_z_b0(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_get_reg_me1_vst_stat_sec3_x_n_b2(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_get_reg_me1_vst_stat_sec3_x_n_b1(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_24_get_reg_me1_vst_stat_sec3_x_n_b0(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25                                0x1809B870
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_addr                        "0xB809B870"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg                             0xB809B870
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_inst_addr                       "0x001C"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg(data)                   (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg                         (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_me1_vst_stat_sec3_y_n6_b0_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_me1_vst_stat_sec3_y_n7_b2_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_me1_vst_stat_sec3_y_n7_b1_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_me1_vst_stat_sec3_y_n7_b0_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_me1_vst_stat_sec3_y_n8_b2_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_me1_vst_stat_sec3_y_n8_b1_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_me1_vst_stat_sec3_y_n8_b0_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_me1_vst_stat_sec3_x_p_b2_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_me1_vst_stat_sec3_y_n6_b0_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_me1_vst_stat_sec3_y_n7_b2_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_me1_vst_stat_sec3_y_n7_b1_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_me1_vst_stat_sec3_y_n7_b0_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_me1_vst_stat_sec3_y_n8_b2_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_me1_vst_stat_sec3_y_n8_b1_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_me1_vst_stat_sec3_y_n8_b0_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_me1_vst_stat_sec3_x_p_b2_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_me1_vst_stat_sec3_y_n6_b0(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_me1_vst_stat_sec3_y_n7_b2(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_me1_vst_stat_sec3_y_n7_b1(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_me1_vst_stat_sec3_y_n7_b0(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_me1_vst_stat_sec3_y_n8_b2(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_me1_vst_stat_sec3_y_n8_b1(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_me1_vst_stat_sec3_y_n8_b0(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_reg_me1_vst_stat_sec3_x_p_b2(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_get_reg_me1_vst_stat_sec3_y_n6_b0(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_get_reg_me1_vst_stat_sec3_y_n7_b2(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_get_reg_me1_vst_stat_sec3_y_n7_b1(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_get_reg_me1_vst_stat_sec3_y_n7_b0(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_get_reg_me1_vst_stat_sec3_y_n8_b2(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_get_reg_me1_vst_stat_sec3_y_n8_b1(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_get_reg_me1_vst_stat_sec3_y_n8_b0(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_25_get_reg_me1_vst_stat_sec3_x_p_b2(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26                                0x1809B874
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_addr                        "0xB809B874"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg                             0xB809B874
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_inst_addr                       "0x001D"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg(data)                   (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg                         (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_me1_vst_stat_sec3_y_n4_b2_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_me1_vst_stat_sec3_y_n4_b1_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_me1_vst_stat_sec3_y_n4_b0_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_me1_vst_stat_sec3_y_n5_b2_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_me1_vst_stat_sec3_y_n5_b1_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_me1_vst_stat_sec3_y_n5_b0_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_me1_vst_stat_sec3_y_n6_b2_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_me1_vst_stat_sec3_y_n6_b1_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_me1_vst_stat_sec3_y_n4_b2_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_me1_vst_stat_sec3_y_n4_b1_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_me1_vst_stat_sec3_y_n4_b0_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_me1_vst_stat_sec3_y_n5_b2_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_me1_vst_stat_sec3_y_n5_b1_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_me1_vst_stat_sec3_y_n5_b0_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_me1_vst_stat_sec3_y_n6_b2_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_me1_vst_stat_sec3_y_n6_b1_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_me1_vst_stat_sec3_y_n4_b2(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_me1_vst_stat_sec3_y_n4_b1(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_me1_vst_stat_sec3_y_n4_b0(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_me1_vst_stat_sec3_y_n5_b2(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_me1_vst_stat_sec3_y_n5_b1(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_me1_vst_stat_sec3_y_n5_b0(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_me1_vst_stat_sec3_y_n6_b2(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_reg_me1_vst_stat_sec3_y_n6_b1(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_get_reg_me1_vst_stat_sec3_y_n4_b2(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_get_reg_me1_vst_stat_sec3_y_n4_b1(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_get_reg_me1_vst_stat_sec3_y_n4_b0(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_get_reg_me1_vst_stat_sec3_y_n5_b2(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_get_reg_me1_vst_stat_sec3_y_n5_b1(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_get_reg_me1_vst_stat_sec3_y_n5_b0(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_get_reg_me1_vst_stat_sec3_y_n6_b2(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_26_get_reg_me1_vst_stat_sec3_y_n6_b1(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27                                0x1809B878
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_addr                        "0xB809B878"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg                             0xB809B878
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_inst_addr                       "0x001E"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg(data)                   (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg                         (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_me1_vst_stat_sec3_y_n1_b1_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_me1_vst_stat_sec3_y_n1_b0_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_me1_vst_stat_sec3_y_n2_b2_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_me1_vst_stat_sec3_y_n2_b1_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_me1_vst_stat_sec3_y_n2_b0_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_me1_vst_stat_sec3_y_n3_b2_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_me1_vst_stat_sec3_y_n3_b1_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_me1_vst_stat_sec3_y_n3_b0_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_me1_vst_stat_sec3_y_n1_b1_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_me1_vst_stat_sec3_y_n1_b0_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_me1_vst_stat_sec3_y_n2_b2_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_me1_vst_stat_sec3_y_n2_b1_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_me1_vst_stat_sec3_y_n2_b0_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_me1_vst_stat_sec3_y_n3_b2_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_me1_vst_stat_sec3_y_n3_b1_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_me1_vst_stat_sec3_y_n3_b0_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_me1_vst_stat_sec3_y_n1_b1(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_me1_vst_stat_sec3_y_n1_b0(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_me1_vst_stat_sec3_y_n2_b2(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_me1_vst_stat_sec3_y_n2_b1(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_me1_vst_stat_sec3_y_n2_b0(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_me1_vst_stat_sec3_y_n3_b2(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_me1_vst_stat_sec3_y_n3_b1(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_reg_me1_vst_stat_sec3_y_n3_b0(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_get_reg_me1_vst_stat_sec3_y_n1_b1(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_get_reg_me1_vst_stat_sec3_y_n1_b0(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_get_reg_me1_vst_stat_sec3_y_n2_b2(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_get_reg_me1_vst_stat_sec3_y_n2_b1(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_get_reg_me1_vst_stat_sec3_y_n2_b0(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_get_reg_me1_vst_stat_sec3_y_n3_b2(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_get_reg_me1_vst_stat_sec3_y_n3_b1(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_27_get_reg_me1_vst_stat_sec3_y_n3_b0(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28                                0x1809B87C
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_addr                        "0xB809B87C"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg                             0xB809B87C
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_inst_addr                       "0x001F"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg(data)                   (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg                         (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_me1_vst_stat_sec3_y_p2_b0_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_me1_vst_stat_sec3_y_p1_b2_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_me1_vst_stat_sec3_y_p1_b1_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_me1_vst_stat_sec3_y_p1_b0_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_me1_vst_stat_sec3_y_z_b2_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_me1_vst_stat_sec3_y_z_b1_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_me1_vst_stat_sec3_y_z_b0_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_me1_vst_stat_sec3_y_n1_b2_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_me1_vst_stat_sec3_y_p2_b0_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_me1_vst_stat_sec3_y_p1_b2_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_me1_vst_stat_sec3_y_p1_b1_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_me1_vst_stat_sec3_y_p1_b0_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_me1_vst_stat_sec3_y_z_b2_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_me1_vst_stat_sec3_y_z_b1_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_me1_vst_stat_sec3_y_z_b0_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_me1_vst_stat_sec3_y_n1_b2_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_me1_vst_stat_sec3_y_p2_b0(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_me1_vst_stat_sec3_y_p1_b2(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_me1_vst_stat_sec3_y_p1_b1(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_me1_vst_stat_sec3_y_p1_b0(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_me1_vst_stat_sec3_y_z_b2(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_me1_vst_stat_sec3_y_z_b1(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_me1_vst_stat_sec3_y_z_b0(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_reg_me1_vst_stat_sec3_y_n1_b2(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_get_reg_me1_vst_stat_sec3_y_p2_b0(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_get_reg_me1_vst_stat_sec3_y_p1_b2(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_get_reg_me1_vst_stat_sec3_y_p1_b1(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_get_reg_me1_vst_stat_sec3_y_p1_b0(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_get_reg_me1_vst_stat_sec3_y_z_b2(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_get_reg_me1_vst_stat_sec3_y_z_b1(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_get_reg_me1_vst_stat_sec3_y_z_b0(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_28_get_reg_me1_vst_stat_sec3_y_n1_b2(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29                                0x1809B880
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_addr                        "0xB809B880"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg                             0xB809B880
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_inst_addr                       "0x0020"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg(data)                   (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg                         (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_me1_vst_stat_sec3_y_p4_b2_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_me1_vst_stat_sec3_y_p4_b1_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_me1_vst_stat_sec3_y_p4_b0_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_me1_vst_stat_sec3_y_p3_b2_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_me1_vst_stat_sec3_y_p3_b1_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_me1_vst_stat_sec3_y_p3_b0_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_me1_vst_stat_sec3_y_p2_b2_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_me1_vst_stat_sec3_y_p2_b1_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_me1_vst_stat_sec3_y_p4_b2_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_me1_vst_stat_sec3_y_p4_b1_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_me1_vst_stat_sec3_y_p4_b0_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_me1_vst_stat_sec3_y_p3_b2_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_me1_vst_stat_sec3_y_p3_b1_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_me1_vst_stat_sec3_y_p3_b0_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_me1_vst_stat_sec3_y_p2_b2_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_me1_vst_stat_sec3_y_p2_b1_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_me1_vst_stat_sec3_y_p4_b2(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_me1_vst_stat_sec3_y_p4_b1(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_me1_vst_stat_sec3_y_p4_b0(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_me1_vst_stat_sec3_y_p3_b2(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_me1_vst_stat_sec3_y_p3_b1(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_me1_vst_stat_sec3_y_p3_b0(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_me1_vst_stat_sec3_y_p2_b2(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_reg_me1_vst_stat_sec3_y_p2_b1(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_get_reg_me1_vst_stat_sec3_y_p4_b2(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_get_reg_me1_vst_stat_sec3_y_p4_b1(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_get_reg_me1_vst_stat_sec3_y_p4_b0(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_get_reg_me1_vst_stat_sec3_y_p3_b2(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_get_reg_me1_vst_stat_sec3_y_p3_b1(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_get_reg_me1_vst_stat_sec3_y_p3_b0(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_get_reg_me1_vst_stat_sec3_y_p2_b2(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_29_get_reg_me1_vst_stat_sec3_y_p2_b1(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30                                0x1809B884
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_addr                        "0xB809B884"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg                             0xB809B884
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_inst_addr                       "0x0021"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg(data)                   (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg                         (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_me1_vst_stat_sec3_y_p7_b1_shift (28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_me1_vst_stat_sec3_y_p7_b0_shift (24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_me1_vst_stat_sec3_y_p6_b2_shift (20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_me1_vst_stat_sec3_y_p6_b1_shift (16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_me1_vst_stat_sec3_y_p6_b0_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_me1_vst_stat_sec3_y_p5_b2_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_me1_vst_stat_sec3_y_p5_b1_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_me1_vst_stat_sec3_y_p5_b0_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_me1_vst_stat_sec3_y_p7_b1_mask (0xF0000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_me1_vst_stat_sec3_y_p7_b0_mask (0x0F000000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_me1_vst_stat_sec3_y_p6_b2_mask (0x00F00000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_me1_vst_stat_sec3_y_p6_b1_mask (0x000F0000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_me1_vst_stat_sec3_y_p6_b0_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_me1_vst_stat_sec3_y_p5_b2_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_me1_vst_stat_sec3_y_p5_b1_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_me1_vst_stat_sec3_y_p5_b0_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_me1_vst_stat_sec3_y_p7_b1(data) (0xF0000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_me1_vst_stat_sec3_y_p7_b0(data) (0x0F000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_me1_vst_stat_sec3_y_p6_b2(data) (0x00F00000&((data)<<20))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_me1_vst_stat_sec3_y_p6_b1(data) (0x000F0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_me1_vst_stat_sec3_y_p6_b0(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_me1_vst_stat_sec3_y_p5_b2(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_me1_vst_stat_sec3_y_p5_b1(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_reg_me1_vst_stat_sec3_y_p5_b0(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_get_reg_me1_vst_stat_sec3_y_p7_b1(data) ((0xF0000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_get_reg_me1_vst_stat_sec3_y_p7_b0(data) ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_get_reg_me1_vst_stat_sec3_y_p6_b2(data) ((0x00F00000&(data))>>20)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_get_reg_me1_vst_stat_sec3_y_p6_b1(data) ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_get_reg_me1_vst_stat_sec3_y_p6_b0(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_get_reg_me1_vst_stat_sec3_y_p5_b2(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_get_reg_me1_vst_stat_sec3_y_p5_b1(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_30_get_reg_me1_vst_stat_sec3_y_p5_b0(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_31                                0x1809B888
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_31_reg_addr                        "0xB809B888"
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_31_reg                             0xB809B888
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_31_inst_addr                       "0x0022"
#define  set_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_31_reg(data)                   (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_31_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_31_reg                         (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_31_reg))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_31_reg_me1_vst_stat_sec3_y_p8_b2_shift (12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_31_reg_me1_vst_stat_sec3_y_p8_b1_shift (8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_31_reg_me1_vst_stat_sec3_y_p8_b0_shift (4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_31_reg_me1_vst_stat_sec3_y_p7_b2_shift (0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_31_reg_me1_vst_stat_sec3_y_p8_b2_mask (0x0000F000)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_31_reg_me1_vst_stat_sec3_y_p8_b1_mask (0x00000F00)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_31_reg_me1_vst_stat_sec3_y_p8_b0_mask (0x000000F0)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_31_reg_me1_vst_stat_sec3_y_p7_b2_mask (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_31_reg_me1_vst_stat_sec3_y_p8_b2(data) (0x0000F000&((data)<<12))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_31_reg_me1_vst_stat_sec3_y_p8_b1(data) (0x00000F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_31_reg_me1_vst_stat_sec3_y_p8_b0(data) (0x000000F0&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_31_reg_me1_vst_stat_sec3_y_p7_b2(data) (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_31_get_reg_me1_vst_stat_sec3_y_p8_b2(data) ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_31_get_reg_me1_vst_stat_sec3_y_p8_b1(data) ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_31_get_reg_me1_vst_stat_sec3_y_p8_b0(data) ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_TOP10_VST_STAT_31_get_reg_me1_vst_stat_sec3_y_p7_b2(data) (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_REJUDGE                                          0x1809B890
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_reg_addr                                  "0xB809B890"
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_reg                                       0xB809B890
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_inst_addr                                 "0x0023"
#define  set_KME_ME1_TOP10_KME_ME1_REJUDGE_reg(data)                             (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_REJUDGE_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_REJUDGE_reg                                   (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_REJUDGE_reg))
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_apply_shift                   (31)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_sad_en_shift                  (30)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_puresad_en_shift              (29)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_range_en_shift                (28)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_mvdiff_en_shift               (27)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_force_cond_en_shift           (26)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_sad_diff_th_shift             (16)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_sad_ppi_th_shift              (8)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_sad_bv_th_shift               (0)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_apply_mask                    (0x80000000)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_sad_en_mask                   (0x40000000)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_puresad_en_mask               (0x20000000)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_range_en_mask                 (0x10000000)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_mvdiff_en_mask                (0x08000000)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_force_cond_en_mask            (0x04000000)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_sad_diff_th_mask              (0x00FF0000)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_sad_ppi_th_mask               (0x0000FF00)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_sad_bv_th_mask                (0x000000FF)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_apply(data)                   (0x80000000&((data)<<31))
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_sad_en(data)                  (0x40000000&((data)<<30))
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_puresad_en(data)              (0x20000000&((data)<<29))
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_range_en(data)                (0x10000000&((data)<<28))
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_mvdiff_en(data)               (0x08000000&((data)<<27))
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_force_cond_en(data)           (0x04000000&((data)<<26))
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_sad_diff_th(data)             (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_sad_ppi_th(data)              (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_me1_rejudge_sad_bv_th(data)               (0x000000FF&(data))
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_get_me1_rejudge_apply(data)               ((0x80000000&(data))>>31)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_get_me1_rejudge_sad_en(data)              ((0x40000000&(data))>>30)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_get_me1_rejudge_puresad_en(data)          ((0x20000000&(data))>>29)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_get_me1_rejudge_range_en(data)            ((0x10000000&(data))>>28)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_get_me1_rejudge_mvdiff_en(data)           ((0x08000000&(data))>>27)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_get_me1_rejudge_force_cond_en(data)       ((0x04000000&(data))>>26)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_get_me1_rejudge_sad_diff_th(data)         ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_get_me1_rejudge_sad_ppi_th(data)          ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_get_me1_rejudge_sad_bv_th(data)           (0x000000FF&(data))

#define  KME_ME1_TOP10_KME_ME1_REJUDGE_2                                        0x1809B894
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_2_reg_addr                                "0xB809B894"
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_2_reg                                     0xB809B894
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_2_inst_addr                               "0x0024"
#define  set_KME_ME1_TOP10_KME_ME1_REJUDGE_2_reg(data)                           (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_REJUDGE_2_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_REJUDGE_2_reg                                 (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_REJUDGE_2_reg))
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_2_me1_rejudge_puresad_diff_th_shift       (24)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_2_me1_rejudge_puresad_ppi_th_shift        (16)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_2_me1_rejudge_puresad_bv_th_shift         (8)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_2_me1_rejudge_range_y_shift               (4)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_2_me1_rejudge_range_x_shift               (0)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_2_me1_rejudge_puresad_diff_th_mask        (0xFF000000)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_2_me1_rejudge_puresad_ppi_th_mask         (0x00FF0000)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_2_me1_rejudge_puresad_bv_th_mask          (0x0000FF00)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_2_me1_rejudge_range_y_mask                (0x00000070)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_2_me1_rejudge_range_x_mask                (0x0000000F)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_2_me1_rejudge_puresad_diff_th(data)       (0xFF000000&((data)<<24))
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_2_me1_rejudge_puresad_ppi_th(data)        (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_2_me1_rejudge_puresad_bv_th(data)         (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_2_me1_rejudge_range_y(data)               (0x00000070&((data)<<4))
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_2_me1_rejudge_range_x(data)               (0x0000000F&(data))
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_2_get_me1_rejudge_puresad_diff_th(data)   ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_2_get_me1_rejudge_puresad_ppi_th(data)    ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_2_get_me1_rejudge_puresad_bv_th(data)     ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_2_get_me1_rejudge_range_y(data)           ((0x00000070&(data))>>4)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_2_get_me1_rejudge_range_x(data)           (0x0000000F&(data))

#define  KME_ME1_TOP10_KME_ME1_REJUDGE_3                                        0x1809B898
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_3_reg_addr                                "0xB809B898"
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_3_reg                                     0xB809B898
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_3_inst_addr                               "0x0025"
#define  set_KME_ME1_TOP10_KME_ME1_REJUDGE_3_reg(data)                           (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_REJUDGE_3_reg)=data)
#define  get_KME_ME1_TOP10_KME_ME1_REJUDGE_3_reg                                 (*((volatile unsigned int*)KME_ME1_TOP10_KME_ME1_REJUDGE_3_reg))
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_3_me1_rejudge_mvdiff_th_shift             (16)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_3_me1_rejudge_force_cond_sad_th_shift     (8)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_3_me1_rejudge_force_cond_mvdiff_th_shift  (0)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_3_me1_rejudge_mvdiff_th_mask              (0x00FF0000)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_3_me1_rejudge_force_cond_sad_th_mask      (0x00003F00)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_3_me1_rejudge_force_cond_mvdiff_th_mask   (0x0000003F)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_3_me1_rejudge_mvdiff_th(data)             (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_3_me1_rejudge_force_cond_sad_th(data)     (0x00003F00&((data)<<8))
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_3_me1_rejudge_force_cond_mvdiff_th(data)  (0x0000003F&(data))
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_3_get_me1_rejudge_mvdiff_th(data)         ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_3_get_me1_rejudge_force_cond_sad_th(data) ((0x00003F00&(data))>>8)
#define  KME_ME1_TOP10_KME_ME1_REJUDGE_3_get_me1_rejudge_force_cond_mvdiff_th(data) (0x0000003F&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KME_ME1_TOP10 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_done:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  reg_me1_vst_stat_maxmindiff:8;
        RBus_UInt32  reg_me1_vst_stat_coreapl:8;
        RBus_UInt32  reg_me1_vst_stat_maxvalue:8;
    };
}kme_me1_top10_kme_me1_top10_vst_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_me1_vst_stat_apl2maxvalue_ratio:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  reg_me1_vst_stat_apl2maxmindiff_ratio:6;
        RBus_UInt32  res3:8;
        RBus_UInt32  reg_me1_vst_stat_boundary_x4:8;
    };
}kme_me1_top10_kme_me1_top10_vst_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_boundary_x3:8;
        RBus_UInt32  reg_me1_vst_stat_boundary_x2:8;
        RBus_UInt32  reg_me1_vst_stat_boundary_x1:8;
        RBus_UInt32  reg_me1_vst_stat_boundary_x0:8;
    };
}kme_me1_top10_kme_me1_top10_vst_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec0_x_p_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_x_p_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_x_z_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_x_z_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_x_z_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_x_n_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_x_n_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_x_n_b0:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n6_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n7_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n7_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n7_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n8_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n8_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n8_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_x_p_b2:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n4_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n4_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n4_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n5_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n5_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n5_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n6_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n6_b1:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n1_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n1_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n2_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n2_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n2_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n3_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n3_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n3_b0:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p2_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p1_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p1_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p1_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_z_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_z_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_z_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n1_b2:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p4_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p4_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p4_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p3_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p3_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p3_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p2_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p2_b1:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p7_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p7_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p6_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p6_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p6_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p5_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p5_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p5_b0:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p8_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p8_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p8_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p7_b2:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec1_x_p_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_x_p_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_x_z_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_x_z_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_x_z_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_x_n_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_x_n_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_x_n_b0:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n6_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n7_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n7_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n7_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n8_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n8_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n8_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_x_p_b2:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n4_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n4_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n4_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n5_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n5_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n5_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n6_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n6_b1:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n1_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n1_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n2_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n2_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n2_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n3_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n3_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n3_b0:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p2_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p1_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p1_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p1_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_z_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_z_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_z_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n1_b2:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p4_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p4_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p4_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p3_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p3_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p3_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p2_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p2_b1:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p7_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p7_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p6_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p6_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p6_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p5_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p5_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p5_b0:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p8_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p8_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p8_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p7_b2:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec2_x_p_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_x_p_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_x_z_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_x_z_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_x_z_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_x_n_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_x_n_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_x_n_b0:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n6_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n7_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n7_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n7_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n8_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n8_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n8_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_x_p_b2:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n4_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n4_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n4_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n5_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n5_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n5_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n6_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n6_b1:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n1_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n1_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n2_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n2_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n2_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n3_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n3_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n3_b0:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p2_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p1_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p1_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p1_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_z_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_z_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_z_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n1_b2:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p4_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p4_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p4_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p3_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p3_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p3_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p2_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p2_b1:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p7_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p7_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p6_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p6_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p6_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p5_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p5_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p5_b0:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p8_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p8_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p8_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p7_b2:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec3_x_p_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_x_p_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_x_z_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_x_z_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_x_z_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_x_n_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_x_n_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_x_n_b0:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n6_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n7_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n7_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n7_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n8_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n8_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n8_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_x_p_b2:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n4_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n4_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n4_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n5_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n5_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n5_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n6_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n6_b1:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_26_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n1_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n1_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n2_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n2_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n2_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n3_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n3_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n3_b0:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p2_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p1_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p1_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p1_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_z_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_z_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_z_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n1_b2:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p4_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p4_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p4_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p3_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p3_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p3_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p2_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p2_b1:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_29_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p7_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p7_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p6_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p6_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p6_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p5_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p5_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p5_b0:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p8_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p8_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p8_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p7_b2:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_rejudge_apply:1;
        RBus_UInt32  me1_rejudge_sad_en:1;
        RBus_UInt32  me1_rejudge_puresad_en:1;
        RBus_UInt32  me1_rejudge_range_en:1;
        RBus_UInt32  me1_rejudge_mvdiff_en:1;
        RBus_UInt32  me1_rejudge_force_cond_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_rejudge_sad_diff_th:8;
        RBus_UInt32  me1_rejudge_sad_ppi_th:8;
        RBus_UInt32  me1_rejudge_sad_bv_th:8;
    };
}kme_me1_top10_kme_me1_rejudge_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_rejudge_puresad_diff_th:8;
        RBus_UInt32  me1_rejudge_puresad_ppi_th:8;
        RBus_UInt32  me1_rejudge_puresad_bv_th:8;
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_rejudge_range_y:3;
        RBus_UInt32  me1_rejudge_range_x:4;
    };
}kme_me1_top10_kme_me1_rejudge_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  me1_rejudge_mvdiff_th:8;
        RBus_UInt32  res2:2;
        RBus_UInt32  me1_rejudge_force_cond_sad_th:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  me1_rejudge_force_cond_mvdiff_th:6;
    };
}kme_me1_top10_kme_me1_rejudge_3_RBUS;

#else //apply LITTLE_ENDIAN

//======KME_ME1_TOP10 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_maxvalue:8;
        RBus_UInt32  reg_me1_vst_stat_coreapl:8;
        RBus_UInt32  reg_me1_vst_stat_maxmindiff:8;
        RBus_UInt32  res1:7;
        RBus_UInt32  reg_me1_vst_stat_done:1;
    };
}kme_me1_top10_kme_me1_top10_vst_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_boundary_x4:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  reg_me1_vst_stat_apl2maxmindiff_ratio:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  reg_me1_vst_stat_apl2maxvalue_ratio:6;
        RBus_UInt32  res3:2;
    };
}kme_me1_top10_kme_me1_top10_vst_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_boundary_x0:8;
        RBus_UInt32  reg_me1_vst_stat_boundary_x1:8;
        RBus_UInt32  reg_me1_vst_stat_boundary_x2:8;
        RBus_UInt32  reg_me1_vst_stat_boundary_x3:8;
    };
}kme_me1_top10_kme_me1_top10_vst_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec0_x_n_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_x_n_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_x_n_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_x_z_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_x_z_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_x_z_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_x_p_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_x_p_b1:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec0_x_p_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n8_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n8_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n8_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n7_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n7_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n7_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n6_b0:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n6_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n6_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n5_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n5_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n5_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n4_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n4_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n4_b2:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n3_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n3_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n3_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n2_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n2_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n2_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n1_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n1_b1:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec0_y_n1_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_z_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_z_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_z_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p1_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p1_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p1_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p2_b0:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p2_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p2_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p3_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p3_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p3_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p4_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p4_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p4_b2:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p5_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p5_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p5_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p6_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p6_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p6_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p7_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p7_b1:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p7_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p8_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p8_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec0_y_p8_b2:4;
        RBus_UInt32  res1:16;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec1_x_n_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_x_n_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_x_n_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_x_z_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_x_z_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_x_z_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_x_p_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_x_p_b1:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec1_x_p_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n8_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n8_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n8_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n7_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n7_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n7_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n6_b0:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n6_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n6_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n5_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n5_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n5_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n4_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n4_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n4_b2:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n3_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n3_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n3_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n2_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n2_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n2_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n1_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n1_b1:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec1_y_n1_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_z_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_z_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_z_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p1_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p1_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p1_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p2_b0:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p2_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p2_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p3_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p3_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p3_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p4_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p4_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p4_b2:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p5_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p5_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p5_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p6_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p6_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p6_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p7_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p7_b1:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p7_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p8_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p8_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec1_y_p8_b2:4;
        RBus_UInt32  res1:16;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec2_x_n_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_x_n_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_x_n_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_x_z_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_x_z_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_x_z_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_x_p_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_x_p_b1:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec2_x_p_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n8_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n8_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n8_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n7_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n7_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n7_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n6_b0:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n6_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n6_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n5_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n5_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n5_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n4_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n4_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n4_b2:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n3_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n3_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n3_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n2_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n2_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n2_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n1_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n1_b1:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec2_y_n1_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_z_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_z_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_z_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p1_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p1_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p1_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p2_b0:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p2_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p2_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p3_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p3_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p3_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p4_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p4_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p4_b2:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p5_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p5_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p5_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p6_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p6_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p6_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p7_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p7_b1:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p7_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p8_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p8_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec2_y_p8_b2:4;
        RBus_UInt32  res1:16;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec3_x_n_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_x_n_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_x_n_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_x_z_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_x_z_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_x_z_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_x_p_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_x_p_b1:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec3_x_p_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n8_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n8_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n8_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n7_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n7_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n7_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n6_b0:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n6_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n6_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n5_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n5_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n5_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n4_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n4_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n4_b2:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_26_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n3_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n3_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n3_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n2_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n2_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n2_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n1_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n1_b1:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec3_y_n1_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_z_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_z_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_z_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p1_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p1_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p1_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p2_b0:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p2_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p2_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p3_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p3_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p3_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p4_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p4_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p4_b2:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_29_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p5_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p5_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p5_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p6_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p6_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p6_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p7_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p7_b1:4;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p7_b2:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p8_b0:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p8_b1:4;
        RBus_UInt32  reg_me1_vst_stat_sec3_y_p8_b2:4;
        RBus_UInt32  res1:16;
    };
}kme_me1_top10_kme_me1_top10_vst_stat_31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_rejudge_sad_bv_th:8;
        RBus_UInt32  me1_rejudge_sad_ppi_th:8;
        RBus_UInt32  me1_rejudge_sad_diff_th:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_rejudge_force_cond_en:1;
        RBus_UInt32  me1_rejudge_mvdiff_en:1;
        RBus_UInt32  me1_rejudge_range_en:1;
        RBus_UInt32  me1_rejudge_puresad_en:1;
        RBus_UInt32  me1_rejudge_sad_en:1;
        RBus_UInt32  me1_rejudge_apply:1;
    };
}kme_me1_top10_kme_me1_rejudge_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_rejudge_range_x:4;
        RBus_UInt32  me1_rejudge_range_y:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_rejudge_puresad_bv_th:8;
        RBus_UInt32  me1_rejudge_puresad_ppi_th:8;
        RBus_UInt32  me1_rejudge_puresad_diff_th:8;
    };
}kme_me1_top10_kme_me1_rejudge_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_rejudge_force_cond_mvdiff_th:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_rejudge_force_cond_sad_th:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  me1_rejudge_mvdiff_th:8;
        RBus_UInt32  res3:8;
    };
}kme_me1_top10_kme_me1_rejudge_3_RBUS;




#endif 


#endif 
