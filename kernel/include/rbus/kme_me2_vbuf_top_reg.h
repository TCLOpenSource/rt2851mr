/**
* @file Merlin5_MEMC_KME_ME2_VBUF_TOP
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KME_ME2_VBUF_TOP_REG_H_
#define _RBUS_KME_ME2_VBUF_TOP_REG_H_

#include "rbus_types.h"



//  KME_ME2_VBUF_TOP Register Address
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00                                   0x1809C700
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_reg_addr                           "0xB809C700"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_reg                                0xB809C700
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_inst_addr                          "0x0000"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_kme_me2_vbuf_dm_pfv_monitor_cnt_shift (10)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_kme_me2_pfv_mvy_range_shift        (3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_kme_me2_pfv_dm_debug_pattern_en_shift (2)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_kme_me2_vbuf_mode_sel_shift        (1)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_kme_me2_vbuf_en_shift              (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_kme_me2_vbuf_dm_pfv_monitor_cnt_mask (0x0FFFFC00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_kme_me2_pfv_mvy_range_mask         (0x000003F8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_kme_me2_pfv_dm_debug_pattern_en_mask (0x00000004)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_kme_me2_vbuf_mode_sel_mask         (0x00000002)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_kme_me2_vbuf_en_mask               (0x00000001)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_kme_me2_vbuf_dm_pfv_monitor_cnt(data) (0x0FFFFC00&((data)<<10))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_kme_me2_pfv_mvy_range(data)        (0x000003F8&((data)<<3))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_kme_me2_pfv_dm_debug_pattern_en(data) (0x00000004&((data)<<2))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_kme_me2_vbuf_mode_sel(data)        (0x00000002&((data)<<1))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_kme_me2_vbuf_en(data)              (0x00000001&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_get_kme_me2_vbuf_dm_pfv_monitor_cnt(data) ((0x0FFFFC00&(data))>>10)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_get_kme_me2_pfv_mvy_range(data)    ((0x000003F8&(data))>>3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_get_kme_me2_pfv_dm_debug_pattern_en(data) ((0x00000004&(data))>>2)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_get_kme_me2_vbuf_mode_sel(data)    ((0x00000002&(data))>>1)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_00_get_kme_me2_vbuf_en(data)          (0x00000001&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04                                   0x1809C704
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_reg_addr                           "0xB809C704"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_reg                                0xB809C704
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_inst_addr                          "0x0001"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_kme_me2_ppfv_mvy_range_shift       (23)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_kme_me2_ppfv_dm_debug_pattern_en_shift (22)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_kme_me2_vbuf_pfv_mv_fetch_ln_1_row_shift (20)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_kme_me2_vbuf_pfv_mv_prefetch_ln_num_shift (16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_kme_me2_vbuf_dm_pfv_req_intr_interval_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_kme_me2_vbuf_dm_pfv_req_interval_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_kme_me2_ppfv_mvy_range_mask        (0x3F800000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_kme_me2_ppfv_dm_debug_pattern_en_mask (0x00400000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_kme_me2_vbuf_pfv_mv_fetch_ln_1_row_mask (0x00300000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_kme_me2_vbuf_pfv_mv_prefetch_ln_num_mask (0x000F0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_kme_me2_vbuf_dm_pfv_req_intr_interval_mask (0x0000FF00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_kme_me2_vbuf_dm_pfv_req_interval_mask (0x000000FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_kme_me2_ppfv_mvy_range(data)       (0x3F800000&((data)<<23))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_kme_me2_ppfv_dm_debug_pattern_en(data) (0x00400000&((data)<<22))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_kme_me2_vbuf_pfv_mv_fetch_ln_1_row(data) (0x00300000&((data)<<20))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_kme_me2_vbuf_pfv_mv_prefetch_ln_num(data) (0x000F0000&((data)<<16))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_kme_me2_vbuf_dm_pfv_req_intr_interval(data) (0x0000FF00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_kme_me2_vbuf_dm_pfv_req_interval(data) (0x000000FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_get_kme_me2_ppfv_mvy_range(data)   ((0x3F800000&(data))>>23)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_get_kme_me2_ppfv_dm_debug_pattern_en(data) ((0x00400000&(data))>>22)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_get_kme_me2_vbuf_pfv_mv_fetch_ln_1_row(data) ((0x00300000&(data))>>20)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_get_kme_me2_vbuf_pfv_mv_prefetch_ln_num(data) ((0x000F0000&(data))>>16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_get_kme_me2_vbuf_dm_pfv_req_intr_interval(data) ((0x0000FF00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_04_get_kme_me2_vbuf_dm_pfv_req_interval(data) (0x000000FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_08                                   0x1809C708
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_08_reg_addr                           "0xB809C708"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_08_reg                                0xB809C708
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_08_inst_addr                          "0x0002"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_08_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_08_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_08_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_08_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_08_kme_me2_vbuf_dm_ppfv_req_interval_shift (18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_08_kme_me2_vbuf_dm_ppfv_monitor_cnt_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_08_kme_me2_vbuf_dm_ppfv_req_interval_mask (0x03FC0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_08_kme_me2_vbuf_dm_ppfv_monitor_cnt_mask (0x0003FFFF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_08_kme_me2_vbuf_dm_ppfv_req_interval(data) (0x03FC0000&((data)<<18))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_08_kme_me2_vbuf_dm_ppfv_monitor_cnt(data) (0x0003FFFF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_08_get_kme_me2_vbuf_dm_ppfv_req_interval(data) ((0x03FC0000&(data))>>18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_08_get_kme_me2_vbuf_dm_ppfv_monitor_cnt(data) (0x0003FFFF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C                                   0x1809C70C
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_reg_addr                           "0xB809C70C"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_reg                                0xB809C70C
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_inst_addr                          "0x0003"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_kme_me2_ph_mvy_range_shift         (15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_kme_me2_ph_dm_debug_pattern_en_shift (14)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_kme_me2_vbuf_ppfv_mv_fetch_ln_1_row_shift (12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_kme_me2_vbuf_ppfv_mv_prefetch_ln_num_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_kme_me2_vbuf_dm_ppfv_req_intr_interval_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_kme_me2_ph_mvy_range_mask          (0x003F8000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_kme_me2_ph_dm_debug_pattern_en_mask (0x00004000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_kme_me2_vbuf_ppfv_mv_fetch_ln_1_row_mask (0x00003000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_kme_me2_vbuf_ppfv_mv_prefetch_ln_num_mask (0x00000F00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_kme_me2_vbuf_dm_ppfv_req_intr_interval_mask (0x000000FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_kme_me2_ph_mvy_range(data)         (0x003F8000&((data)<<15))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_kme_me2_ph_dm_debug_pattern_en(data) (0x00004000&((data)<<14))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_kme_me2_vbuf_ppfv_mv_fetch_ln_1_row(data) (0x00003000&((data)<<12))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_kme_me2_vbuf_ppfv_mv_prefetch_ln_num(data) (0x00000F00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_kme_me2_vbuf_dm_ppfv_req_intr_interval(data) (0x000000FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_get_kme_me2_ph_mvy_range(data)     ((0x003F8000&(data))>>15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_get_kme_me2_ph_dm_debug_pattern_en(data) ((0x00004000&(data))>>14)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_get_kme_me2_vbuf_ppfv_mv_fetch_ln_1_row(data) ((0x00003000&(data))>>12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_get_kme_me2_vbuf_ppfv_mv_prefetch_ln_num(data) ((0x00000F00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_0C_get_kme_me2_vbuf_dm_ppfv_req_intr_interval(data) (0x000000FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_10                                   0x1809C710
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_10_reg_addr                           "0xB809C710"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_10_reg                                0xB809C710
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_10_inst_addr                          "0x0004"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_10_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_10_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_10_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_10_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_10_kme_me2_vbuf_ph_mv_prefetch_ln_num_shift (26)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_10_kme_me2_vbuf_dm_ph_req_interval_shift (18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_10_kme_me2_vbuf_dm_ph_monitor_cnt_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_10_kme_me2_vbuf_ph_mv_prefetch_ln_num_mask (0x3C000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_10_kme_me2_vbuf_dm_ph_req_interval_mask (0x03FC0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_10_kme_me2_vbuf_dm_ph_monitor_cnt_mask (0x0003FFFF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_10_kme_me2_vbuf_ph_mv_prefetch_ln_num(data) (0x3C000000&((data)<<26))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_10_kme_me2_vbuf_dm_ph_req_interval(data) (0x03FC0000&((data)<<18))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_10_kme_me2_vbuf_dm_ph_monitor_cnt(data) (0x0003FFFF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_10_get_kme_me2_vbuf_ph_mv_prefetch_ln_num(data) ((0x3C000000&(data))>>26)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_10_get_kme_me2_vbuf_dm_ph_req_interval(data) ((0x03FC0000&(data))>>18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_10_get_kme_me2_vbuf_dm_ph_monitor_cnt(data) (0x0003FFFF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_14                                   0x1809C714
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_14_reg_addr                           "0xB809C714"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_14_reg                                0xB809C714
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_14_inst_addr                          "0x0005"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_14_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_14_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_14_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_14_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_14_me2_vbuf_pfv_3dpr_dm_l_force_data_y_shift (13)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_14_me2_vbuf_pfv_3dpr_dm_l_force_data_x_shift (2)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_14_me2_vbuf_pfv_3dpr_dm_r_force_en_shift (1)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_14_me2_vbuf_pfv_3dpr_dm_l_force_en_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_14_me2_vbuf_pfv_3dpr_dm_l_force_data_y_mask (0x007FE000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_14_me2_vbuf_pfv_3dpr_dm_l_force_data_x_mask (0x00001FFC)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_14_me2_vbuf_pfv_3dpr_dm_r_force_en_mask (0x00000002)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_14_me2_vbuf_pfv_3dpr_dm_l_force_en_mask (0x00000001)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_14_me2_vbuf_pfv_3dpr_dm_l_force_data_y(data) (0x007FE000&((data)<<13))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_14_me2_vbuf_pfv_3dpr_dm_l_force_data_x(data) (0x00001FFC&((data)<<2))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_14_me2_vbuf_pfv_3dpr_dm_r_force_en(data) (0x00000002&((data)<<1))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_14_me2_vbuf_pfv_3dpr_dm_l_force_en(data) (0x00000001&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_14_get_me2_vbuf_pfv_3dpr_dm_l_force_data_y(data) ((0x007FE000&(data))>>13)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_14_get_me2_vbuf_pfv_3dpr_dm_l_force_data_x(data) ((0x00001FFC&(data))>>2)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_14_get_me2_vbuf_pfv_3dpr_dm_r_force_en(data) ((0x00000002&(data))>>1)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_14_get_me2_vbuf_pfv_3dpr_dm_l_force_en(data) (0x00000001&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18                                   0x1809C718
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_reg_addr                           "0xB809C718"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_reg                                0xB809C718
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_inst_addr                          "0x0006"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_kme_me2_vbuf_3dpr_en_shift         (23)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_kme_me2_vbuf_sram_ls_value_shift   (22)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_kme_me2_vbuf_sram_ls_en_shift      (21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_me2_vbuf_pfv_3dpr_dm_r_force_data_y_shift (11)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_me2_vbuf_pfv_3dpr_dm_r_force_data_x_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_kme_me2_vbuf_3dpr_en_mask          (0x00800000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_kme_me2_vbuf_sram_ls_value_mask    (0x00400000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_kme_me2_vbuf_sram_ls_en_mask       (0x00200000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_me2_vbuf_pfv_3dpr_dm_r_force_data_y_mask (0x001FF800)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_me2_vbuf_pfv_3dpr_dm_r_force_data_x_mask (0x000007FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_kme_me2_vbuf_3dpr_en(data)         (0x00800000&((data)<<23))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_kme_me2_vbuf_sram_ls_value(data)   (0x00400000&((data)<<22))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_kme_me2_vbuf_sram_ls_en(data)      (0x00200000&((data)<<21))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_me2_vbuf_pfv_3dpr_dm_r_force_data_y(data) (0x001FF800&((data)<<11))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_me2_vbuf_pfv_3dpr_dm_r_force_data_x(data) (0x000007FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_get_kme_me2_vbuf_3dpr_en(data)     ((0x00800000&(data))>>23)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_get_kme_me2_vbuf_sram_ls_value(data) ((0x00400000&(data))>>22)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_get_kme_me2_vbuf_sram_ls_en(data)  ((0x00200000&(data))>>21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_get_me2_vbuf_pfv_3dpr_dm_r_force_data_y(data) ((0x001FF800&(data))>>11)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_18_get_me2_vbuf_pfv_3dpr_dm_r_force_data_x(data) (0x000007FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_1C                                   0x1809C71C
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_1C_reg_addr                           "0xB809C71C"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_1C_reg                                0xB809C71C
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_1C_inst_addr                          "0x0007"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_1C_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_1C_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_1C_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_1C_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_1C_kme_me2_vbuf_ph_blksize_hact_shift (18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_1C_kme_me2_vbuf_pfv_blksize_vact_shift (9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_1C_kme_me2_vbuf_pfv_blksize_hact_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_1C_kme_me2_vbuf_ph_blksize_hact_mask  (0x07FC0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_1C_kme_me2_vbuf_pfv_blksize_vact_mask (0x0003FE00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_1C_kme_me2_vbuf_pfv_blksize_hact_mask (0x000001FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_1C_kme_me2_vbuf_ph_blksize_hact(data) (0x07FC0000&((data)<<18))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_1C_kme_me2_vbuf_pfv_blksize_vact(data) (0x0003FE00&((data)<<9))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_1C_kme_me2_vbuf_pfv_blksize_hact(data) (0x000001FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_1C_get_kme_me2_vbuf_ph_blksize_hact(data) ((0x07FC0000&(data))>>18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_1C_get_kme_me2_vbuf_pfv_blksize_vact(data) ((0x0003FE00&(data))>>9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_1C_get_kme_me2_vbuf_pfv_blksize_hact(data) (0x000001FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_20                                   0x1809C720
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_20_reg_addr                           "0xB809C720"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_20_reg                                0xB809C720
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_20_inst_addr                          "0x0008"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_20_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_20_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_20_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_20_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_20_kme_me2_vbuf_pfv_blk_rim_right_shift (18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_20_kme_me2_vbuf_pfv_blk_rim_left_shift (9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_20_kme_me2_vbuf_ph_blksize_vact_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_20_kme_me2_vbuf_pfv_blk_rim_right_mask (0x07FC0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_20_kme_me2_vbuf_pfv_blk_rim_left_mask (0x0003FE00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_20_kme_me2_vbuf_ph_blksize_vact_mask  (0x000001FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_20_kme_me2_vbuf_pfv_blk_rim_right(data) (0x07FC0000&((data)<<18))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_20_kme_me2_vbuf_pfv_blk_rim_left(data) (0x0003FE00&((data)<<9))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_20_kme_me2_vbuf_ph_blksize_vact(data) (0x000001FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_20_get_kme_me2_vbuf_pfv_blk_rim_right(data) ((0x07FC0000&(data))>>18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_20_get_kme_me2_vbuf_pfv_blk_rim_left(data) ((0x0003FE00&(data))>>9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_20_get_kme_me2_vbuf_ph_blksize_vact(data) (0x000001FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_24                                   0x1809C724
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_24_reg_addr                           "0xB809C724"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_24_reg                                0xB809C724
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_24_inst_addr                          "0x0009"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_24_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_24_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_24_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_24_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_24_kme_me2_vbuf_ph_blk_rim_left_shift (18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_24_kme_me2_vbuf_pfv_blk_rim_bot_shift (9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_24_kme_me2_vbuf_pfv_blk_rim_top_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_24_kme_me2_vbuf_ph_blk_rim_left_mask  (0x07FC0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_24_kme_me2_vbuf_pfv_blk_rim_bot_mask  (0x0003FE00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_24_kme_me2_vbuf_pfv_blk_rim_top_mask  (0x000001FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_24_kme_me2_vbuf_ph_blk_rim_left(data) (0x07FC0000&((data)<<18))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_24_kme_me2_vbuf_pfv_blk_rim_bot(data) (0x0003FE00&((data)<<9))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_24_kme_me2_vbuf_pfv_blk_rim_top(data) (0x000001FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_24_get_kme_me2_vbuf_ph_blk_rim_left(data) ((0x07FC0000&(data))>>18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_24_get_kme_me2_vbuf_pfv_blk_rim_bot(data) ((0x0003FE00&(data))>>9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_24_get_kme_me2_vbuf_pfv_blk_rim_top(data) (0x000001FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_28                                   0x1809C728
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_28_reg_addr                           "0xB809C728"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_28_reg                                0xB809C728
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_28_inst_addr                          "0x000A"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_28_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_28_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_28_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_28_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_28_kme_me2_vbuf_ph_blk_rim_bot_shift  (18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_28_kme_me2_vbuf_ph_blk_rim_top_shift  (9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_28_kme_me2_vbuf_ph_blk_rim_right_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_28_kme_me2_vbuf_ph_blk_rim_bot_mask   (0x07FC0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_28_kme_me2_vbuf_ph_blk_rim_top_mask   (0x0003FE00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_28_kme_me2_vbuf_ph_blk_rim_right_mask (0x000001FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_28_kme_me2_vbuf_ph_blk_rim_bot(data)  (0x07FC0000&((data)<<18))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_28_kme_me2_vbuf_ph_blk_rim_top(data)  (0x0003FE00&((data)<<9))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_28_kme_me2_vbuf_ph_blk_rim_right(data) (0x000001FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_28_get_kme_me2_vbuf_ph_blk_rim_bot(data) ((0x07FC0000&(data))>>18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_28_get_kme_me2_vbuf_ph_blk_rim_top(data) ((0x0003FE00&(data))>>9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_28_get_kme_me2_vbuf_ph_blk_rim_right(data) (0x000001FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C                                   0x1809C72C
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_reg_addr                           "0xB809C72C"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_reg                                0xB809C72C
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_inst_addr                          "0x000B"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_1st_ph_candi_offset_nums_shift (26)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_1st_ph_candi_nums_shift (21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_1st_gmv_offset_nums_shift (18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_1st_2nd_row_delay_nums_shift (15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_doublescan_fsearch_en_shift (14)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_doublescan_en_shift   (13)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_fsm_empty_cycle_shift (9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_data_prepare_cycle_shift (5)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_ph_pfv_h_ratio_shift  (3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_ph_pfv_v_ratio_shift  (1)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_rim_mode_shift        (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_1st_ph_candi_offset_nums_mask (0x1C000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_1st_ph_candi_nums_mask (0x03E00000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_1st_gmv_offset_nums_mask (0x001C0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_1st_2nd_row_delay_nums_mask (0x00038000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_doublescan_fsearch_en_mask (0x00004000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_doublescan_en_mask    (0x00002000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_fsm_empty_cycle_mask  (0x00001E00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_data_prepare_cycle_mask (0x000001E0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_ph_pfv_h_ratio_mask   (0x00000018)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_ph_pfv_v_ratio_mask   (0x00000006)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_rim_mode_mask         (0x00000001)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_1st_ph_candi_offset_nums(data) (0x1C000000&((data)<<26))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_1st_ph_candi_nums(data) (0x03E00000&((data)<<21))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_1st_gmv_offset_nums(data) (0x001C0000&((data)<<18))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_1st_2nd_row_delay_nums(data) (0x00038000&((data)<<15))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_doublescan_fsearch_en(data) (0x00004000&((data)<<14))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_doublescan_en(data)   (0x00002000&((data)<<13))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_fsm_empty_cycle(data) (0x00001E00&((data)<<9))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_data_prepare_cycle(data) (0x000001E0&((data)<<5))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_ph_pfv_h_ratio(data)  (0x00000018&((data)<<3))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_ph_pfv_v_ratio(data)  (0x00000006&((data)<<1))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_kme_me2_vbuf_rim_mode(data)        (0x00000001&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_get_kme_me2_vbuf_1st_ph_candi_offset_nums(data) ((0x1C000000&(data))>>26)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_get_kme_me2_vbuf_1st_ph_candi_nums(data) ((0x03E00000&(data))>>21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_get_kme_me2_vbuf_1st_gmv_offset_nums(data) ((0x001C0000&(data))>>18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_get_kme_me2_vbuf_1st_2nd_row_delay_nums(data) ((0x00038000&(data))>>15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_get_kme_me2_vbuf_doublescan_fsearch_en(data) ((0x00004000&(data))>>14)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_get_kme_me2_vbuf_doublescan_en(data) ((0x00002000&(data))>>13)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_get_kme_me2_vbuf_fsm_empty_cycle(data) ((0x00001E00&(data))>>9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_get_kme_me2_vbuf_data_prepare_cycle(data) ((0x000001E0&(data))>>5)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_get_kme_me2_vbuf_ph_pfv_h_ratio(data) ((0x00000018&(data))>>3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_get_kme_me2_vbuf_ph_pfv_v_ratio(data) ((0x00000006&(data))>>1)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_2C_get_kme_me2_vbuf_rim_mode(data)    (0x00000001&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30                                   0x1809C730
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_reg_addr                           "0xB809C730"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_reg                                0xB809C730
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_inst_addr                          "0x000C"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_2nd_ph_candi_nums_shift (27)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_2nd_gmv_offset_nums_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_1st_updt_candi_nums_shift (18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_1st_gmv_en_shift      (17)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_1st_zmv_en_shift      (16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_1st_pfv1_candi_offset_nums_shift (13)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_1st_pfv1_candi_nums_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_1st_pfv0_candi_offset_nums_shift (5)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_1st_pfv0_candi_nums_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_2nd_ph_candi_nums_mask (0xF8000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_2nd_gmv_offset_nums_mask (0x07000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_1st_updt_candi_nums_mask (0x00FC0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_1st_gmv_en_mask       (0x00020000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_1st_zmv_en_mask       (0x00010000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_1st_pfv1_candi_offset_nums_mask (0x0000E000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_1st_pfv1_candi_nums_mask (0x00001F00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_1st_pfv0_candi_offset_nums_mask (0x000000E0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_1st_pfv0_candi_nums_mask (0x0000001F)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_2nd_ph_candi_nums(data) (0xF8000000&((data)<<27))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_2nd_gmv_offset_nums(data) (0x07000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_1st_updt_candi_nums(data) (0x00FC0000&((data)<<18))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_1st_gmv_en(data)      (0x00020000&((data)<<17))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_1st_zmv_en(data)      (0x00010000&((data)<<16))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_1st_pfv1_candi_offset_nums(data) (0x0000E000&((data)<<13))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_1st_pfv1_candi_nums(data) (0x00001F00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_1st_pfv0_candi_offset_nums(data) (0x000000E0&((data)<<5))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_kme_me2_vbuf_1st_pfv0_candi_nums(data) (0x0000001F&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_get_kme_me2_vbuf_2nd_ph_candi_nums(data) ((0xF8000000&(data))>>27)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_get_kme_me2_vbuf_2nd_gmv_offset_nums(data) ((0x07000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_get_kme_me2_vbuf_1st_updt_candi_nums(data) ((0x00FC0000&(data))>>18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_get_kme_me2_vbuf_1st_gmv_en(data)  ((0x00020000&(data))>>17)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_get_kme_me2_vbuf_1st_zmv_en(data)  ((0x00010000&(data))>>16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_get_kme_me2_vbuf_1st_pfv1_candi_offset_nums(data) ((0x0000E000&(data))>>13)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_get_kme_me2_vbuf_1st_pfv1_candi_nums(data) ((0x00001F00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_get_kme_me2_vbuf_1st_pfv0_candi_offset_nums(data) ((0x000000E0&(data))>>5)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_30_get_kme_me2_vbuf_1st_pfv0_candi_nums(data) (0x0000001F&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34                                   0x1809C734
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_reg_addr                           "0xB809C734"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_reg                                0xB809C734
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_inst_addr                          "0x000D"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_fsearch_gmv_en_shift  (28)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_fsearch_zmv_en_shift  (27)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_2nd_updt_candi_nums_shift (21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_2nd_gmv_en_shift      (20)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_2nd_zmv_en_shift      (19)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_2nd_pfv1_candi_offset_nums_shift (16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_2nd_pfv1_candi_nums_shift (11)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_2nd_pfv0_candi_offset_nums_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_2nd_pfv0_candi_nums_shift (3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_2nd_ph_candi_offset_nums_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_fsearch_gmv_en_mask   (0x10000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_fsearch_zmv_en_mask   (0x08000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_2nd_updt_candi_nums_mask (0x07E00000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_2nd_gmv_en_mask       (0x00100000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_2nd_zmv_en_mask       (0x00080000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_2nd_pfv1_candi_offset_nums_mask (0x00070000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_2nd_pfv1_candi_nums_mask (0x0000F800)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_2nd_pfv0_candi_offset_nums_mask (0x00000700)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_2nd_pfv0_candi_nums_mask (0x000000F8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_2nd_ph_candi_offset_nums_mask (0x00000007)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_fsearch_gmv_en(data)  (0x10000000&((data)<<28))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_fsearch_zmv_en(data)  (0x08000000&((data)<<27))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_2nd_updt_candi_nums(data) (0x07E00000&((data)<<21))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_2nd_gmv_en(data)      (0x00100000&((data)<<20))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_2nd_zmv_en(data)      (0x00080000&((data)<<19))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_2nd_pfv1_candi_offset_nums(data) (0x00070000&((data)<<16))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_2nd_pfv1_candi_nums(data) (0x0000F800&((data)<<11))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_2nd_pfv0_candi_offset_nums(data) (0x00000700&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_2nd_pfv0_candi_nums(data) (0x000000F8&((data)<<3))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_kme_me2_vbuf_2nd_ph_candi_offset_nums(data) (0x00000007&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_get_kme_me2_vbuf_fsearch_gmv_en(data) ((0x10000000&(data))>>28)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_get_kme_me2_vbuf_fsearch_zmv_en(data) ((0x08000000&(data))>>27)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_get_kme_me2_vbuf_2nd_updt_candi_nums(data) ((0x07E00000&(data))>>21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_get_kme_me2_vbuf_2nd_gmv_en(data)  ((0x00100000&(data))>>20)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_get_kme_me2_vbuf_2nd_zmv_en(data)  ((0x00080000&(data))>>19)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_get_kme_me2_vbuf_2nd_pfv1_candi_offset_nums(data) ((0x00070000&(data))>>16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_get_kme_me2_vbuf_2nd_pfv1_candi_nums(data) ((0x0000F800&(data))>>11)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_get_kme_me2_vbuf_2nd_pfv0_candi_offset_nums(data) ((0x00000700&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_get_kme_me2_vbuf_2nd_pfv0_candi_nums(data) ((0x000000F8&(data))>>3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_34_get_kme_me2_vbuf_2nd_ph_candi_offset_nums(data) (0x00000007&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38                                   0x1809C738
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_reg_addr                           "0xB809C738"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_reg                                0xB809C738
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_inst_addr                          "0x000E"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_ph_loop_bv_patt_mode_shift (28)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_lfsr_seed_init_en_shift (27)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_matrix_grp_center_sel_shift (26)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_lbme_dm_num_1row_shift (17)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_lbme_self_upd_interval_shift (9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_ph_bv_wddr_noclr_en_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_ph_loop_bv_patt_en_shift (7)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_ph_bv_patt_self_gen_en_shift (6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_fsearch_candi_offset_nums_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_ph_loop_bv_patt_mode_mask (0x30000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_lfsr_seed_init_en_mask (0x08000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_matrix_grp_center_sel_mask (0x04000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_lbme_dm_num_1row_mask (0x03FE0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_lbme_self_upd_interval_mask (0x0001FE00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_ph_bv_wddr_noclr_en_mask (0x00000100)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_ph_loop_bv_patt_en_mask (0x00000080)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_ph_bv_patt_self_gen_en_mask (0x00000040)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_fsearch_candi_offset_nums_mask (0x0000003F)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_ph_loop_bv_patt_mode(data) (0x30000000&((data)<<28))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_lfsr_seed_init_en(data) (0x08000000&((data)<<27))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_matrix_grp_center_sel(data) (0x04000000&((data)<<26))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_lbme_dm_num_1row(data) (0x03FE0000&((data)<<17))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_lbme_self_upd_interval(data) (0x0001FE00&((data)<<9))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_ph_bv_wddr_noclr_en(data) (0x00000100&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_ph_loop_bv_patt_en(data) (0x00000080&((data)<<7))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_ph_bv_patt_self_gen_en(data) (0x00000040&((data)<<6))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_kme_me2_vbuf_fsearch_candi_offset_nums(data) (0x0000003F&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_get_kme_me2_vbuf_ph_loop_bv_patt_mode(data) ((0x30000000&(data))>>28)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_get_kme_me2_vbuf_lfsr_seed_init_en(data) ((0x08000000&(data))>>27)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_get_kme_me2_vbuf_matrix_grp_center_sel(data) ((0x04000000&(data))>>26)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_get_kme_me2_vbuf_lbme_dm_num_1row(data) ((0x03FE0000&(data))>>17)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_get_kme_me2_vbuf_lbme_self_upd_interval(data) ((0x0001FE00&(data))>>9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_get_kme_me2_vbuf_ph_bv_wddr_noclr_en(data) ((0x00000100&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_get_kme_me2_vbuf_ph_loop_bv_patt_en(data) ((0x00000080&(data))>>7)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_get_kme_me2_vbuf_ph_bv_patt_self_gen_en(data) ((0x00000040&(data))>>6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_38_get_kme_me2_vbuf_fsearch_candi_offset_nums(data) (0x0000003F&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_3C                                   0x1809C73C
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_3C_reg_addr                           "0xB809C73C"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_3C_reg                                0xB809C73C
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_3C_inst_addr                          "0x000F"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_3C_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_3C_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_3C_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_3C_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_3C_kme_me2_vbuf_lfsr_y_seed_init_shift (16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_3C_kme_me2_vbuf_lfsr_x_seed_init_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_3C_kme_me2_vbuf_lfsr_y_seed_init_mask (0xFFFF0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_3C_kme_me2_vbuf_lfsr_x_seed_init_mask (0x0000FFFF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_3C_kme_me2_vbuf_lfsr_y_seed_init(data) (0xFFFF0000&((data)<<16))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_3C_kme_me2_vbuf_lfsr_x_seed_init(data) (0x0000FFFF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_3C_get_kme_me2_vbuf_lfsr_y_seed_init(data) ((0xFFFF0000&(data))>>16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_3C_get_kme_me2_vbuf_lfsr_x_seed_init(data) (0x0000FFFF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40                                   0x1809C740
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_reg_addr                           "0xB809C740"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_reg                                0xB809C740
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_inst_addr                          "0x0010"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_kme_me2_vbuf_lfsr_x_mask_curve_x0_shift (17)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_kme_me2_vbuf_lfsr_y_mask_shift     (13)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_kme_me2_vbuf_lfsr_x_mask_shift     (9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_kme_me2_vbuf_sc_lfsr_y_mask_shift  (5)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_kme_me2_vbuf_sc_lfsr_x_mask_shift  (1)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_kme_me2_vbuf_lfsr_mask_dyn_en_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_kme_me2_vbuf_lfsr_x_mask_curve_x0_mask (0x07FE0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_kme_me2_vbuf_lfsr_y_mask_mask      (0x0001E000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_kme_me2_vbuf_lfsr_x_mask_mask      (0x00001E00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_kme_me2_vbuf_sc_lfsr_y_mask_mask   (0x000001E0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_kme_me2_vbuf_sc_lfsr_x_mask_mask   (0x0000001E)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_kme_me2_vbuf_lfsr_mask_dyn_en_mask (0x00000001)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_kme_me2_vbuf_lfsr_x_mask_curve_x0(data) (0x07FE0000&((data)<<17))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_kme_me2_vbuf_lfsr_y_mask(data)     (0x0001E000&((data)<<13))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_kme_me2_vbuf_lfsr_x_mask(data)     (0x00001E00&((data)<<9))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_kme_me2_vbuf_sc_lfsr_y_mask(data)  (0x000001E0&((data)<<5))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_kme_me2_vbuf_sc_lfsr_x_mask(data)  (0x0000001E&((data)<<1))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_kme_me2_vbuf_lfsr_mask_dyn_en(data) (0x00000001&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_get_kme_me2_vbuf_lfsr_x_mask_curve_x0(data) ((0x07FE0000&(data))>>17)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_get_kme_me2_vbuf_lfsr_y_mask(data) ((0x0001E000&(data))>>13)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_get_kme_me2_vbuf_lfsr_x_mask(data) ((0x00001E00&(data))>>9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_get_kme_me2_vbuf_sc_lfsr_y_mask(data) ((0x000001E0&(data))>>5)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_get_kme_me2_vbuf_sc_lfsr_x_mask(data) ((0x0000001E&(data))>>1)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_40_get_kme_me2_vbuf_lfsr_mask_dyn_en(data) (0x00000001&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_44                                   0x1809C744
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_44_reg_addr                           "0xB809C744"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_44_reg                                0xB809C744
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_44_inst_addr                          "0x0011"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_44_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_44_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_44_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_44_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_44_kme_me2_vbuf_lfsr_y_mask_curve_x0_shift (20)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_44_kme_me2_vbuf_lfsr_x_mask_curve_x2_shift (10)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_44_kme_me2_vbuf_lfsr_x_mask_curve_x1_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_44_kme_me2_vbuf_lfsr_y_mask_curve_x0_mask (0x3FF00000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_44_kme_me2_vbuf_lfsr_x_mask_curve_x2_mask (0x000FFC00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_44_kme_me2_vbuf_lfsr_x_mask_curve_x1_mask (0x000003FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_44_kme_me2_vbuf_lfsr_y_mask_curve_x0(data) (0x3FF00000&((data)<<20))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_44_kme_me2_vbuf_lfsr_x_mask_curve_x2(data) (0x000FFC00&((data)<<10))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_44_kme_me2_vbuf_lfsr_x_mask_curve_x1(data) (0x000003FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_44_get_kme_me2_vbuf_lfsr_y_mask_curve_x0(data) ((0x3FF00000&(data))>>20)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_44_get_kme_me2_vbuf_lfsr_x_mask_curve_x2(data) ((0x000FFC00&(data))>>10)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_44_get_kme_me2_vbuf_lfsr_x_mask_curve_x1(data) (0x000003FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_48                                   0x1809C748
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_48_reg_addr                           "0xB809C748"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_48_reg                                0xB809C748
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_48_inst_addr                          "0x0012"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_48_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_48_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_48_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_48_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_48_kme_me2_vbuf_lfsr_y_mask_curve_x2_shift (10)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_48_kme_me2_vbuf_lfsr_y_mask_curve_x1_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_48_kme_me2_vbuf_lfsr_y_mask_curve_x2_mask (0x000FFC00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_48_kme_me2_vbuf_lfsr_y_mask_curve_x1_mask (0x000003FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_48_kme_me2_vbuf_lfsr_y_mask_curve_x2(data) (0x000FFC00&((data)<<10))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_48_kme_me2_vbuf_lfsr_y_mask_curve_x1(data) (0x000003FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_48_get_kme_me2_vbuf_lfsr_y_mask_curve_x2(data) ((0x000FFC00&(data))>>10)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_48_get_kme_me2_vbuf_lfsr_y_mask_curve_x1(data) (0x000003FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C                                   0x1809C74C
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_reg_addr                           "0xB809C74C"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_reg                                0xB809C74C
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_inst_addr                          "0x0013"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_3_y_offset_shift (29)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_3_x_offset_shift (26)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_2_y_offset_shift (23)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_2_x_offset_shift (20)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_1_y_offset_shift (17)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_1_x_offset_shift (14)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_0_y_offset_shift (11)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_0_x_offset_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_updt_mv_mode_shift (6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_pfv1_candi_dediff_en_shift (5)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_pfv1_dediff_mode_shift (4)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_pfv0_candi_dediff_en_shift (3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_pfv0_dediff_mode_shift (2)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_dediff_en_shift (1)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_dediff_mode_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_3_y_offset_mask (0xE0000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_3_x_offset_mask (0x1C000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_2_y_offset_mask (0x03800000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_2_x_offset_mask (0x00700000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_1_y_offset_mask (0x000E0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_1_x_offset_mask (0x0001C000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_0_y_offset_mask (0x00003800)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_0_x_offset_mask (0x00000700)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_updt_mv_mode_mask (0x000000C0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_pfv1_candi_dediff_en_mask (0x00000020)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_pfv1_dediff_mode_mask (0x00000010)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_pfv0_candi_dediff_en_mask (0x00000008)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_pfv0_dediff_mode_mask (0x00000004)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_dediff_en_mask (0x00000002)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_dediff_mode_mask (0x00000001)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_3_y_offset(data) (0xE0000000&((data)<<29))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_3_x_offset(data) (0x1C000000&((data)<<26))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_2_y_offset(data) (0x03800000&((data)<<23))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_2_x_offset(data) (0x00700000&((data)<<20))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_1_y_offset(data) (0x000E0000&((data)<<17))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_1_x_offset(data) (0x0001C000&((data)<<14))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_0_y_offset(data) (0x00003800&((data)<<11))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_0_x_offset(data) (0x00000700&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_updt_mv_mode(data) (0x000000C0&((data)<<6))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_pfv1_candi_dediff_en(data) (0x00000020&((data)<<5))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_pfv1_dediff_mode(data) (0x00000010&((data)<<4))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_pfv0_candi_dediff_en(data) (0x00000008&((data)<<3))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_pfv0_dediff_mode(data) (0x00000004&((data)<<2))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_candi_dediff_en(data) (0x00000002&((data)<<1))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_kme_me2_vbuf_1st_ph_dediff_mode(data) (0x00000001&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_get_kme_me2_vbuf_1st_ph_candi_3_y_offset(data) ((0xE0000000&(data))>>29)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_get_kme_me2_vbuf_1st_ph_candi_3_x_offset(data) ((0x1C000000&(data))>>26)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_get_kme_me2_vbuf_1st_ph_candi_2_y_offset(data) ((0x03800000&(data))>>23)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_get_kme_me2_vbuf_1st_ph_candi_2_x_offset(data) ((0x00700000&(data))>>20)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_get_kme_me2_vbuf_1st_ph_candi_1_y_offset(data) ((0x000E0000&(data))>>17)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_get_kme_me2_vbuf_1st_ph_candi_1_x_offset(data) ((0x0001C000&(data))>>14)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_get_kme_me2_vbuf_1st_ph_candi_0_y_offset(data) ((0x00003800&(data))>>11)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_get_kme_me2_vbuf_1st_ph_candi_0_x_offset(data) ((0x00000700&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_get_kme_me2_vbuf_1st_updt_mv_mode(data) ((0x000000C0&(data))>>6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_get_kme_me2_vbuf_1st_pfv1_candi_dediff_en(data) ((0x00000020&(data))>>5)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_get_kme_me2_vbuf_1st_pfv1_dediff_mode(data) ((0x00000010&(data))>>4)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_get_kme_me2_vbuf_1st_pfv0_candi_dediff_en(data) ((0x00000008&(data))>>3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_get_kme_me2_vbuf_1st_pfv0_dediff_mode(data) ((0x00000004&(data))>>2)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_get_kme_me2_vbuf_1st_ph_candi_dediff_en(data) ((0x00000002&(data))>>1)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_4C_get_kme_me2_vbuf_1st_ph_dediff_mode(data) (0x00000001&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50                                   0x1809C750
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_reg_addr                           "0xB809C750"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_reg                                0xB809C750
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_inst_addr                          "0x0014"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_pfv0_candi_0_y_offset_shift (27)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_pfv0_candi_0_x_offset_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_ph_candi_7_y_offset_shift (21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_ph_candi_7_x_offset_shift (18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_ph_candi_6_y_offset_shift (15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_ph_candi_6_x_offset_shift (12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_ph_candi_5_y_offset_shift (9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_ph_candi_5_x_offset_shift (6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_ph_candi_4_y_offset_shift (3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_ph_candi_4_x_offset_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_pfv0_candi_0_y_offset_mask (0x38000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_pfv0_candi_0_x_offset_mask (0x07000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_ph_candi_7_y_offset_mask (0x00E00000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_ph_candi_7_x_offset_mask (0x001C0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_ph_candi_6_y_offset_mask (0x00038000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_ph_candi_6_x_offset_mask (0x00007000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_ph_candi_5_y_offset_mask (0x00000E00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_ph_candi_5_x_offset_mask (0x000001C0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_ph_candi_4_y_offset_mask (0x00000038)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_ph_candi_4_x_offset_mask (0x00000007)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_pfv0_candi_0_y_offset(data) (0x38000000&((data)<<27))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_pfv0_candi_0_x_offset(data) (0x07000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_ph_candi_7_y_offset(data) (0x00E00000&((data)<<21))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_ph_candi_7_x_offset(data) (0x001C0000&((data)<<18))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_ph_candi_6_y_offset(data) (0x00038000&((data)<<15))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_ph_candi_6_x_offset(data) (0x00007000&((data)<<12))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_ph_candi_5_y_offset(data) (0x00000E00&((data)<<9))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_ph_candi_5_x_offset(data) (0x000001C0&((data)<<6))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_ph_candi_4_y_offset(data) (0x00000038&((data)<<3))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_kme_me2_vbuf_1st_ph_candi_4_x_offset(data) (0x00000007&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_get_kme_me2_vbuf_1st_pfv0_candi_0_y_offset(data) ((0x38000000&(data))>>27)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_get_kme_me2_vbuf_1st_pfv0_candi_0_x_offset(data) ((0x07000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_get_kme_me2_vbuf_1st_ph_candi_7_y_offset(data) ((0x00E00000&(data))>>21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_get_kme_me2_vbuf_1st_ph_candi_7_x_offset(data) ((0x001C0000&(data))>>18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_get_kme_me2_vbuf_1st_ph_candi_6_y_offset(data) ((0x00038000&(data))>>15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_get_kme_me2_vbuf_1st_ph_candi_6_x_offset(data) ((0x00007000&(data))>>12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_get_kme_me2_vbuf_1st_ph_candi_5_y_offset(data) ((0x00000E00&(data))>>9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_get_kme_me2_vbuf_1st_ph_candi_5_x_offset(data) ((0x000001C0&(data))>>6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_get_kme_me2_vbuf_1st_ph_candi_4_y_offset(data) ((0x00000038&(data))>>3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_50_get_kme_me2_vbuf_1st_ph_candi_4_x_offset(data) (0x00000007&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54                                   0x1809C754
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_reg_addr                           "0xB809C754"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_reg                                0xB809C754
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_inst_addr                          "0x0015"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_5_y_offset_shift (27)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_5_x_offset_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_4_y_offset_shift (21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_4_x_offset_shift (18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_3_y_offset_shift (15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_3_x_offset_shift (12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_2_y_offset_shift (9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_2_x_offset_shift (6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_1_y_offset_shift (3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_1_x_offset_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_5_y_offset_mask (0x38000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_5_x_offset_mask (0x07000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_4_y_offset_mask (0x00E00000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_4_x_offset_mask (0x001C0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_3_y_offset_mask (0x00038000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_3_x_offset_mask (0x00007000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_2_y_offset_mask (0x00000E00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_2_x_offset_mask (0x000001C0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_1_y_offset_mask (0x00000038)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_1_x_offset_mask (0x00000007)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_5_y_offset(data) (0x38000000&((data)<<27))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_5_x_offset(data) (0x07000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_4_y_offset(data) (0x00E00000&((data)<<21))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_4_x_offset(data) (0x001C0000&((data)<<18))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_3_y_offset(data) (0x00038000&((data)<<15))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_3_x_offset(data) (0x00007000&((data)<<12))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_2_y_offset(data) (0x00000E00&((data)<<9))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_2_x_offset(data) (0x000001C0&((data)<<6))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_1_y_offset(data) (0x00000038&((data)<<3))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_kme_me2_vbuf_1st_pfv0_candi_1_x_offset(data) (0x00000007&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_get_kme_me2_vbuf_1st_pfv0_candi_5_y_offset(data) ((0x38000000&(data))>>27)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_get_kme_me2_vbuf_1st_pfv0_candi_5_x_offset(data) ((0x07000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_get_kme_me2_vbuf_1st_pfv0_candi_4_y_offset(data) ((0x00E00000&(data))>>21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_get_kme_me2_vbuf_1st_pfv0_candi_4_x_offset(data) ((0x001C0000&(data))>>18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_get_kme_me2_vbuf_1st_pfv0_candi_3_y_offset(data) ((0x00038000&(data))>>15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_get_kme_me2_vbuf_1st_pfv0_candi_3_x_offset(data) ((0x00007000&(data))>>12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_get_kme_me2_vbuf_1st_pfv0_candi_2_y_offset(data) ((0x00000E00&(data))>>9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_get_kme_me2_vbuf_1st_pfv0_candi_2_x_offset(data) ((0x000001C0&(data))>>6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_get_kme_me2_vbuf_1st_pfv0_candi_1_y_offset(data) ((0x00000038&(data))>>3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_54_get_kme_me2_vbuf_1st_pfv0_candi_1_x_offset(data) (0x00000007&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58                                   0x1809C758
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_reg_addr                           "0xB809C758"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_reg                                0xB809C758
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_inst_addr                          "0x0016"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv1_candi_2_y_offset_shift (27)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv1_candi_2_x_offset_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv1_candi_1_y_offset_shift (21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv1_candi_1_x_offset_shift (18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv1_candi_0_y_offset_shift (15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv1_candi_0_x_offset_shift (12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv0_candi_7_y_offset_shift (9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv0_candi_7_x_offset_shift (6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv0_candi_6_y_offset_shift (3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv0_candi_6_x_offset_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv1_candi_2_y_offset_mask (0x38000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv1_candi_2_x_offset_mask (0x07000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv1_candi_1_y_offset_mask (0x00E00000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv1_candi_1_x_offset_mask (0x001C0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv1_candi_0_y_offset_mask (0x00038000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv1_candi_0_x_offset_mask (0x00007000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv0_candi_7_y_offset_mask (0x00000E00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv0_candi_7_x_offset_mask (0x000001C0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv0_candi_6_y_offset_mask (0x00000038)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv0_candi_6_x_offset_mask (0x00000007)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv1_candi_2_y_offset(data) (0x38000000&((data)<<27))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv1_candi_2_x_offset(data) (0x07000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv1_candi_1_y_offset(data) (0x00E00000&((data)<<21))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv1_candi_1_x_offset(data) (0x001C0000&((data)<<18))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv1_candi_0_y_offset(data) (0x00038000&((data)<<15))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv1_candi_0_x_offset(data) (0x00007000&((data)<<12))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv0_candi_7_y_offset(data) (0x00000E00&((data)<<9))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv0_candi_7_x_offset(data) (0x000001C0&((data)<<6))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv0_candi_6_y_offset(data) (0x00000038&((data)<<3))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_kme_me2_vbuf_1st_pfv0_candi_6_x_offset(data) (0x00000007&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_get_kme_me2_vbuf_1st_pfv1_candi_2_y_offset(data) ((0x38000000&(data))>>27)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_get_kme_me2_vbuf_1st_pfv1_candi_2_x_offset(data) ((0x07000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_get_kme_me2_vbuf_1st_pfv1_candi_1_y_offset(data) ((0x00E00000&(data))>>21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_get_kme_me2_vbuf_1st_pfv1_candi_1_x_offset(data) ((0x001C0000&(data))>>18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_get_kme_me2_vbuf_1st_pfv1_candi_0_y_offset(data) ((0x00038000&(data))>>15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_get_kme_me2_vbuf_1st_pfv1_candi_0_x_offset(data) ((0x00007000&(data))>>12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_get_kme_me2_vbuf_1st_pfv0_candi_7_y_offset(data) ((0x00000E00&(data))>>9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_get_kme_me2_vbuf_1st_pfv0_candi_7_x_offset(data) ((0x000001C0&(data))>>6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_get_kme_me2_vbuf_1st_pfv0_candi_6_y_offset(data) ((0x00000038&(data))>>3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_58_get_kme_me2_vbuf_1st_pfv0_candi_6_x_offset(data) (0x00000007&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C                                   0x1809C75C
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_reg_addr                           "0xB809C75C"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_reg                                0xB809C75C
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_inst_addr                          "0x0017"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_7_y_offset_shift (27)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_7_x_offset_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_6_y_offset_shift (21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_6_x_offset_shift (18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_5_y_offset_shift (15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_5_x_offset_shift (12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_4_y_offset_shift (9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_4_x_offset_shift (6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_3_y_offset_shift (3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_3_x_offset_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_7_y_offset_mask (0x38000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_7_x_offset_mask (0x07000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_6_y_offset_mask (0x00E00000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_6_x_offset_mask (0x001C0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_5_y_offset_mask (0x00038000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_5_x_offset_mask (0x00007000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_4_y_offset_mask (0x00000E00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_4_x_offset_mask (0x000001C0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_3_y_offset_mask (0x00000038)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_3_x_offset_mask (0x00000007)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_7_y_offset(data) (0x38000000&((data)<<27))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_7_x_offset(data) (0x07000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_6_y_offset(data) (0x00E00000&((data)<<21))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_6_x_offset(data) (0x001C0000&((data)<<18))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_5_y_offset(data) (0x00038000&((data)<<15))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_5_x_offset(data) (0x00007000&((data)<<12))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_4_y_offset(data) (0x00000E00&((data)<<9))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_4_x_offset(data) (0x000001C0&((data)<<6))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_3_y_offset(data) (0x00000038&((data)<<3))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_kme_me2_vbuf_1st_pfv1_candi_3_x_offset(data) (0x00000007&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_get_kme_me2_vbuf_1st_pfv1_candi_7_y_offset(data) ((0x38000000&(data))>>27)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_get_kme_me2_vbuf_1st_pfv1_candi_7_x_offset(data) ((0x07000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_get_kme_me2_vbuf_1st_pfv1_candi_6_y_offset(data) ((0x00E00000&(data))>>21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_get_kme_me2_vbuf_1st_pfv1_candi_6_x_offset(data) ((0x001C0000&(data))>>18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_get_kme_me2_vbuf_1st_pfv1_candi_5_y_offset(data) ((0x00038000&(data))>>15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_get_kme_me2_vbuf_1st_pfv1_candi_5_x_offset(data) ((0x00007000&(data))>>12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_get_kme_me2_vbuf_1st_pfv1_candi_4_y_offset(data) ((0x00000E00&(data))>>9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_get_kme_me2_vbuf_1st_pfv1_candi_4_x_offset(data) ((0x000001C0&(data))>>6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_get_kme_me2_vbuf_1st_pfv1_candi_3_y_offset(data) ((0x00000038&(data))>>3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_5C_get_kme_me2_vbuf_1st_pfv1_candi_3_x_offset(data) (0x00000007&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60                                   0x1809C760
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_reg_addr                           "0xB809C760"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_reg                                0xB809C760
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_inst_addr                          "0x0018"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_candi_zmv_pnt_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_updt_candi_3_y_offset_shift (21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_updt_candi_3_x_offset_shift (18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_updt_candi_2_y_offset_shift (15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_updt_candi_2_x_offset_shift (12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_updt_candi_1_y_offset_shift (9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_updt_candi_1_x_offset_shift (6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_updt_candi_0_y_offset_shift (3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_updt_candi_0_x_offset_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_candi_zmv_pnt_mask (0xFF000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_updt_candi_3_y_offset_mask (0x00E00000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_updt_candi_3_x_offset_mask (0x001C0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_updt_candi_2_y_offset_mask (0x00038000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_updt_candi_2_x_offset_mask (0x00007000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_updt_candi_1_y_offset_mask (0x00000E00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_updt_candi_1_x_offset_mask (0x000001C0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_updt_candi_0_y_offset_mask (0x00000038)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_updt_candi_0_x_offset_mask (0x00000007)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_candi_zmv_pnt(data) (0xFF000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_updt_candi_3_y_offset(data) (0x00E00000&((data)<<21))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_updt_candi_3_x_offset(data) (0x001C0000&((data)<<18))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_updt_candi_2_y_offset(data) (0x00038000&((data)<<15))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_updt_candi_2_x_offset(data) (0x00007000&((data)<<12))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_updt_candi_1_y_offset(data) (0x00000E00&((data)<<9))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_updt_candi_1_x_offset(data) (0x000001C0&((data)<<6))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_updt_candi_0_y_offset(data) (0x00000038&((data)<<3))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_kme_me2_vbuf_1st_updt_candi_0_x_offset(data) (0x00000007&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_get_kme_me2_vbuf_1st_candi_zmv_pnt(data) ((0xFF000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_get_kme_me2_vbuf_1st_updt_candi_3_y_offset(data) ((0x00E00000&(data))>>21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_get_kme_me2_vbuf_1st_updt_candi_3_x_offset(data) ((0x001C0000&(data))>>18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_get_kme_me2_vbuf_1st_updt_candi_2_y_offset(data) ((0x00038000&(data))>>15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_get_kme_me2_vbuf_1st_updt_candi_2_x_offset(data) ((0x00007000&(data))>>12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_get_kme_me2_vbuf_1st_updt_candi_1_y_offset(data) ((0x00000E00&(data))>>9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_get_kme_me2_vbuf_1st_updt_candi_1_x_offset(data) ((0x000001C0&(data))>>6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_get_kme_me2_vbuf_1st_updt_candi_0_y_offset(data) ((0x00000038&(data))>>3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_60_get_kme_me2_vbuf_1st_updt_candi_0_x_offset(data) (0x00000007&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_64                                   0x1809C764
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_64_reg_addr                           "0xB809C764"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_64_reg                                0xB809C764
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_64_inst_addr                          "0x0019"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_64_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_64_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_64_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_64_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_64_kme_me2_vbuf_1st_ph_candi_st_pnt2_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_64_kme_me2_vbuf_1st_ph_candi_st_pnt1_shift (16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_64_kme_me2_vbuf_1st_ph_candi_st_pnt0_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_64_kme_me2_vbuf_1st_candi_gmv_pnt_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_64_kme_me2_vbuf_1st_ph_candi_st_pnt2_mask (0xFF000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_64_kme_me2_vbuf_1st_ph_candi_st_pnt1_mask (0x00FF0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_64_kme_me2_vbuf_1st_ph_candi_st_pnt0_mask (0x0000FF00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_64_kme_me2_vbuf_1st_candi_gmv_pnt_mask (0x000000FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_64_kme_me2_vbuf_1st_ph_candi_st_pnt2(data) (0xFF000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_64_kme_me2_vbuf_1st_ph_candi_st_pnt1(data) (0x00FF0000&((data)<<16))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_64_kme_me2_vbuf_1st_ph_candi_st_pnt0(data) (0x0000FF00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_64_kme_me2_vbuf_1st_candi_gmv_pnt(data) (0x000000FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_64_get_kme_me2_vbuf_1st_ph_candi_st_pnt2(data) ((0xFF000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_64_get_kme_me2_vbuf_1st_ph_candi_st_pnt1(data) ((0x00FF0000&(data))>>16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_64_get_kme_me2_vbuf_1st_ph_candi_st_pnt0(data) ((0x0000FF00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_64_get_kme_me2_vbuf_1st_candi_gmv_pnt(data) (0x000000FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_68                                   0x1809C768
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_68_reg_addr                           "0xB809C768"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_68_reg                                0xB809C768
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_68_inst_addr                          "0x001A"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_68_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_68_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_68_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_68_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_68_kme_me2_vbuf_1st_ph_candi_st_pnt6_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_68_kme_me2_vbuf_1st_ph_candi_st_pnt5_shift (16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_68_kme_me2_vbuf_1st_ph_candi_st_pnt4_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_68_kme_me2_vbuf_1st_ph_candi_st_pnt3_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_68_kme_me2_vbuf_1st_ph_candi_st_pnt6_mask (0xFF000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_68_kme_me2_vbuf_1st_ph_candi_st_pnt5_mask (0x00FF0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_68_kme_me2_vbuf_1st_ph_candi_st_pnt4_mask (0x0000FF00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_68_kme_me2_vbuf_1st_ph_candi_st_pnt3_mask (0x000000FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_68_kme_me2_vbuf_1st_ph_candi_st_pnt6(data) (0xFF000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_68_kme_me2_vbuf_1st_ph_candi_st_pnt5(data) (0x00FF0000&((data)<<16))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_68_kme_me2_vbuf_1st_ph_candi_st_pnt4(data) (0x0000FF00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_68_kme_me2_vbuf_1st_ph_candi_st_pnt3(data) (0x000000FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_68_get_kme_me2_vbuf_1st_ph_candi_st_pnt6(data) ((0xFF000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_68_get_kme_me2_vbuf_1st_ph_candi_st_pnt5(data) ((0x00FF0000&(data))>>16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_68_get_kme_me2_vbuf_1st_ph_candi_st_pnt4(data) ((0x0000FF00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_68_get_kme_me2_vbuf_1st_ph_candi_st_pnt3(data) (0x000000FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_6C                                   0x1809C76C
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_6C_reg_addr                           "0xB809C76C"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_6C_reg                                0xB809C76C
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_6C_inst_addr                          "0x001B"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_6C_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_6C_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_6C_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_6C_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_6C_kme_me2_vbuf_1st_pfv0_candi_st_pnt1_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_6C_kme_me2_vbuf_1st_pfv0_candi_st_pnt0_shift (16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_6C_kme_me2_vbuf_1st_ph_candi_dediff_pnt_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_6C_kme_me2_vbuf_1st_ph_candi_st_pnt7_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_6C_kme_me2_vbuf_1st_pfv0_candi_st_pnt1_mask (0xFF000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_6C_kme_me2_vbuf_1st_pfv0_candi_st_pnt0_mask (0x00FF0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_6C_kme_me2_vbuf_1st_ph_candi_dediff_pnt_mask (0x0000FF00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_6C_kme_me2_vbuf_1st_ph_candi_st_pnt7_mask (0x000000FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_6C_kme_me2_vbuf_1st_pfv0_candi_st_pnt1(data) (0xFF000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_6C_kme_me2_vbuf_1st_pfv0_candi_st_pnt0(data) (0x00FF0000&((data)<<16))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_6C_kme_me2_vbuf_1st_ph_candi_dediff_pnt(data) (0x0000FF00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_6C_kme_me2_vbuf_1st_ph_candi_st_pnt7(data) (0x000000FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_6C_get_kme_me2_vbuf_1st_pfv0_candi_st_pnt1(data) ((0xFF000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_6C_get_kme_me2_vbuf_1st_pfv0_candi_st_pnt0(data) ((0x00FF0000&(data))>>16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_6C_get_kme_me2_vbuf_1st_ph_candi_dediff_pnt(data) ((0x0000FF00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_6C_get_kme_me2_vbuf_1st_ph_candi_st_pnt7(data) (0x000000FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_70                                   0x1809C770
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_70_reg_addr                           "0xB809C770"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_70_reg                                0xB809C770
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_70_inst_addr                          "0x001C"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_70_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_70_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_70_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_70_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_70_kme_me2_vbuf_1st_pfv0_candi_st_pnt5_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_70_kme_me2_vbuf_1st_pfv0_candi_st_pnt4_shift (16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_70_kme_me2_vbuf_1st_pfv0_candi_st_pnt3_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_70_kme_me2_vbuf_1st_pfv0_candi_st_pnt2_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_70_kme_me2_vbuf_1st_pfv0_candi_st_pnt5_mask (0xFF000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_70_kme_me2_vbuf_1st_pfv0_candi_st_pnt4_mask (0x00FF0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_70_kme_me2_vbuf_1st_pfv0_candi_st_pnt3_mask (0x0000FF00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_70_kme_me2_vbuf_1st_pfv0_candi_st_pnt2_mask (0x000000FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_70_kme_me2_vbuf_1st_pfv0_candi_st_pnt5(data) (0xFF000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_70_kme_me2_vbuf_1st_pfv0_candi_st_pnt4(data) (0x00FF0000&((data)<<16))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_70_kme_me2_vbuf_1st_pfv0_candi_st_pnt3(data) (0x0000FF00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_70_kme_me2_vbuf_1st_pfv0_candi_st_pnt2(data) (0x000000FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_70_get_kme_me2_vbuf_1st_pfv0_candi_st_pnt5(data) ((0xFF000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_70_get_kme_me2_vbuf_1st_pfv0_candi_st_pnt4(data) ((0x00FF0000&(data))>>16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_70_get_kme_me2_vbuf_1st_pfv0_candi_st_pnt3(data) ((0x0000FF00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_70_get_kme_me2_vbuf_1st_pfv0_candi_st_pnt2(data) (0x000000FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_74                                   0x1809C774
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_74_reg_addr                           "0xB809C774"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_74_reg                                0xB809C774
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_74_inst_addr                          "0x001D"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_74_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_74_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_74_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_74_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_74_kme_me2_vbuf_1st_pfv1_candi_st_pnt0_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_74_kme_me2_vbuf_1st_pfv0_candi_dediff_pnt_shift (16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_74_kme_me2_vbuf_1st_pfv0_candi_st_pnt7_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_74_kme_me2_vbuf_1st_pfv0_candi_st_pnt6_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_74_kme_me2_vbuf_1st_pfv1_candi_st_pnt0_mask (0xFF000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_74_kme_me2_vbuf_1st_pfv0_candi_dediff_pnt_mask (0x00FF0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_74_kme_me2_vbuf_1st_pfv0_candi_st_pnt7_mask (0x0000FF00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_74_kme_me2_vbuf_1st_pfv0_candi_st_pnt6_mask (0x000000FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_74_kme_me2_vbuf_1st_pfv1_candi_st_pnt0(data) (0xFF000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_74_kme_me2_vbuf_1st_pfv0_candi_dediff_pnt(data) (0x00FF0000&((data)<<16))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_74_kme_me2_vbuf_1st_pfv0_candi_st_pnt7(data) (0x0000FF00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_74_kme_me2_vbuf_1st_pfv0_candi_st_pnt6(data) (0x000000FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_74_get_kme_me2_vbuf_1st_pfv1_candi_st_pnt0(data) ((0xFF000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_74_get_kme_me2_vbuf_1st_pfv0_candi_dediff_pnt(data) ((0x00FF0000&(data))>>16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_74_get_kme_me2_vbuf_1st_pfv0_candi_st_pnt7(data) ((0x0000FF00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_74_get_kme_me2_vbuf_1st_pfv0_candi_st_pnt6(data) (0x000000FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_78                                   0x1809C778
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_78_reg_addr                           "0xB809C778"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_78_reg                                0xB809C778
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_78_inst_addr                          "0x001E"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_78_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_78_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_78_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_78_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_78_kme_me2_vbuf_1st_pfv1_candi_st_pnt4_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_78_kme_me2_vbuf_1st_pfv1_candi_st_pnt3_shift (16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_78_kme_me2_vbuf_1st_pfv1_candi_st_pnt2_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_78_kme_me2_vbuf_1st_pfv1_candi_st_pnt1_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_78_kme_me2_vbuf_1st_pfv1_candi_st_pnt4_mask (0xFF000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_78_kme_me2_vbuf_1st_pfv1_candi_st_pnt3_mask (0x00FF0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_78_kme_me2_vbuf_1st_pfv1_candi_st_pnt2_mask (0x0000FF00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_78_kme_me2_vbuf_1st_pfv1_candi_st_pnt1_mask (0x000000FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_78_kme_me2_vbuf_1st_pfv1_candi_st_pnt4(data) (0xFF000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_78_kme_me2_vbuf_1st_pfv1_candi_st_pnt3(data) (0x00FF0000&((data)<<16))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_78_kme_me2_vbuf_1st_pfv1_candi_st_pnt2(data) (0x0000FF00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_78_kme_me2_vbuf_1st_pfv1_candi_st_pnt1(data) (0x000000FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_78_get_kme_me2_vbuf_1st_pfv1_candi_st_pnt4(data) ((0xFF000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_78_get_kme_me2_vbuf_1st_pfv1_candi_st_pnt3(data) ((0x00FF0000&(data))>>16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_78_get_kme_me2_vbuf_1st_pfv1_candi_st_pnt2(data) ((0x0000FF00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_78_get_kme_me2_vbuf_1st_pfv1_candi_st_pnt1(data) (0x000000FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_7C                                   0x1809C77C
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_7C_reg_addr                           "0xB809C77C"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_7C_reg                                0xB809C77C
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_7C_inst_addr                          "0x001F"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_7C_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_7C_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_7C_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_7C_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_7C_kme_me2_vbuf_1st_pfv1_candi_dediff_pnt_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_7C_kme_me2_vbuf_1st_pfv1_candi_st_pnt7_shift (16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_7C_kme_me2_vbuf_1st_pfv1_candi_st_pnt6_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_7C_kme_me2_vbuf_1st_pfv1_candi_st_pnt5_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_7C_kme_me2_vbuf_1st_pfv1_candi_dediff_pnt_mask (0xFF000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_7C_kme_me2_vbuf_1st_pfv1_candi_st_pnt7_mask (0x00FF0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_7C_kme_me2_vbuf_1st_pfv1_candi_st_pnt6_mask (0x0000FF00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_7C_kme_me2_vbuf_1st_pfv1_candi_st_pnt5_mask (0x000000FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_7C_kme_me2_vbuf_1st_pfv1_candi_dediff_pnt(data) (0xFF000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_7C_kme_me2_vbuf_1st_pfv1_candi_st_pnt7(data) (0x00FF0000&((data)<<16))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_7C_kme_me2_vbuf_1st_pfv1_candi_st_pnt6(data) (0x0000FF00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_7C_kme_me2_vbuf_1st_pfv1_candi_st_pnt5(data) (0x000000FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_7C_get_kme_me2_vbuf_1st_pfv1_candi_dediff_pnt(data) ((0xFF000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_7C_get_kme_me2_vbuf_1st_pfv1_candi_st_pnt7(data) ((0x00FF0000&(data))>>16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_7C_get_kme_me2_vbuf_1st_pfv1_candi_st_pnt6(data) ((0x0000FF00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_7C_get_kme_me2_vbuf_1st_pfv1_candi_st_pnt5(data) (0x000000FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_80                                   0x1809C780
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_80_reg_addr                           "0xB809C780"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_80_reg                                0xB809C780
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_80_inst_addr                          "0x0020"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_80_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_80_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_80_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_80_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_80_kme_me2_vbuf_1st_candi_updt_pnt3_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_80_kme_me2_vbuf_1st_candi_updt_pnt2_shift (16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_80_kme_me2_vbuf_1st_candi_updt_pnt1_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_80_kme_me2_vbuf_1st_candi_updt_pnt0_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_80_kme_me2_vbuf_1st_candi_updt_pnt3_mask (0xFF000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_80_kme_me2_vbuf_1st_candi_updt_pnt2_mask (0x00FF0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_80_kme_me2_vbuf_1st_candi_updt_pnt1_mask (0x0000FF00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_80_kme_me2_vbuf_1st_candi_updt_pnt0_mask (0x000000FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_80_kme_me2_vbuf_1st_candi_updt_pnt3(data) (0xFF000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_80_kme_me2_vbuf_1st_candi_updt_pnt2(data) (0x00FF0000&((data)<<16))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_80_kme_me2_vbuf_1st_candi_updt_pnt1(data) (0x0000FF00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_80_kme_me2_vbuf_1st_candi_updt_pnt0(data) (0x000000FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_80_get_kme_me2_vbuf_1st_candi_updt_pnt3(data) ((0xFF000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_80_get_kme_me2_vbuf_1st_candi_updt_pnt2(data) ((0x00FF0000&(data))>>16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_80_get_kme_me2_vbuf_1st_candi_updt_pnt1(data) ((0x0000FF00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_80_get_kme_me2_vbuf_1st_candi_updt_pnt0(data) (0x000000FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84                                   0x1809C784
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_reg_addr                           "0xB809C784"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_reg                                0xB809C784
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_inst_addr                          "0x0021"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_3_y_offset_shift (28)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_3_x_offset_shift (25)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_2_y_offset_shift (22)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_2_x_offset_shift (19)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_1_y_offset_shift (16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_1_x_offset_shift (13)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_0_y_offset_shift (10)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_0_x_offset_shift (7)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_updt_mv_mode_shift (6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_pfv1_candi_dediff_en_shift (5)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_pfv1_dediff_mode_shift (4)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_pfv0_candi_dediff_en_shift (3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_pfv0_dediff_mode_shift (2)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_dediff_en_shift (1)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_dediff_mode_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_3_y_offset_mask (0x70000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_3_x_offset_mask (0x0E000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_2_y_offset_mask (0x01C00000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_2_x_offset_mask (0x00380000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_1_y_offset_mask (0x00070000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_1_x_offset_mask (0x0000E000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_0_y_offset_mask (0x00001C00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_0_x_offset_mask (0x00000380)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_updt_mv_mode_mask (0x00000040)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_pfv1_candi_dediff_en_mask (0x00000020)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_pfv1_dediff_mode_mask (0x00000010)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_pfv0_candi_dediff_en_mask (0x00000008)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_pfv0_dediff_mode_mask (0x00000004)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_dediff_en_mask (0x00000002)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_dediff_mode_mask (0x00000001)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_3_y_offset(data) (0x70000000&((data)<<28))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_3_x_offset(data) (0x0E000000&((data)<<25))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_2_y_offset(data) (0x01C00000&((data)<<22))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_2_x_offset(data) (0x00380000&((data)<<19))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_1_y_offset(data) (0x00070000&((data)<<16))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_1_x_offset(data) (0x0000E000&((data)<<13))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_0_y_offset(data) (0x00001C00&((data)<<10))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_0_x_offset(data) (0x00000380&((data)<<7))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_updt_mv_mode(data) (0x00000040&((data)<<6))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_pfv1_candi_dediff_en(data) (0x00000020&((data)<<5))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_pfv1_dediff_mode(data) (0x00000010&((data)<<4))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_pfv0_candi_dediff_en(data) (0x00000008&((data)<<3))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_pfv0_dediff_mode(data) (0x00000004&((data)<<2))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_candi_dediff_en(data) (0x00000002&((data)<<1))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_kme_me2_vbuf_2nd_ph_dediff_mode(data) (0x00000001&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_get_kme_me2_vbuf_2nd_ph_candi_3_y_offset(data) ((0x70000000&(data))>>28)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_get_kme_me2_vbuf_2nd_ph_candi_3_x_offset(data) ((0x0E000000&(data))>>25)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_get_kme_me2_vbuf_2nd_ph_candi_2_y_offset(data) ((0x01C00000&(data))>>22)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_get_kme_me2_vbuf_2nd_ph_candi_2_x_offset(data) ((0x00380000&(data))>>19)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_get_kme_me2_vbuf_2nd_ph_candi_1_y_offset(data) ((0x00070000&(data))>>16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_get_kme_me2_vbuf_2nd_ph_candi_1_x_offset(data) ((0x0000E000&(data))>>13)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_get_kme_me2_vbuf_2nd_ph_candi_0_y_offset(data) ((0x00001C00&(data))>>10)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_get_kme_me2_vbuf_2nd_ph_candi_0_x_offset(data) ((0x00000380&(data))>>7)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_get_kme_me2_vbuf_2nd_updt_mv_mode(data) ((0x00000040&(data))>>6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_get_kme_me2_vbuf_2nd_pfv1_candi_dediff_en(data) ((0x00000020&(data))>>5)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_get_kme_me2_vbuf_2nd_pfv1_dediff_mode(data) ((0x00000010&(data))>>4)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_get_kme_me2_vbuf_2nd_pfv0_candi_dediff_en(data) ((0x00000008&(data))>>3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_get_kme_me2_vbuf_2nd_pfv0_dediff_mode(data) ((0x00000004&(data))>>2)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_get_kme_me2_vbuf_2nd_ph_candi_dediff_en(data) ((0x00000002&(data))>>1)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_84_get_kme_me2_vbuf_2nd_ph_dediff_mode(data) (0x00000001&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88                                   0x1809C788
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_reg_addr                           "0xB809C788"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_reg                                0xB809C788
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_inst_addr                          "0x0022"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_pfv0_candi_0_y_offset_shift (27)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_pfv0_candi_0_x_offset_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_ph_candi_7_y_offset_shift (21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_ph_candi_7_x_offset_shift (18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_ph_candi_6_y_offset_shift (15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_ph_candi_6_x_offset_shift (12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_ph_candi_5_y_offset_shift (9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_ph_candi_5_x_offset_shift (6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_ph_candi_4_y_offset_shift (3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_ph_candi_4_x_offset_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_pfv0_candi_0_y_offset_mask (0x38000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_pfv0_candi_0_x_offset_mask (0x07000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_ph_candi_7_y_offset_mask (0x00E00000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_ph_candi_7_x_offset_mask (0x001C0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_ph_candi_6_y_offset_mask (0x00038000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_ph_candi_6_x_offset_mask (0x00007000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_ph_candi_5_y_offset_mask (0x00000E00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_ph_candi_5_x_offset_mask (0x000001C0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_ph_candi_4_y_offset_mask (0x00000038)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_ph_candi_4_x_offset_mask (0x00000007)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_pfv0_candi_0_y_offset(data) (0x38000000&((data)<<27))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_pfv0_candi_0_x_offset(data) (0x07000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_ph_candi_7_y_offset(data) (0x00E00000&((data)<<21))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_ph_candi_7_x_offset(data) (0x001C0000&((data)<<18))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_ph_candi_6_y_offset(data) (0x00038000&((data)<<15))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_ph_candi_6_x_offset(data) (0x00007000&((data)<<12))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_ph_candi_5_y_offset(data) (0x00000E00&((data)<<9))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_ph_candi_5_x_offset(data) (0x000001C0&((data)<<6))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_ph_candi_4_y_offset(data) (0x00000038&((data)<<3))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_kme_me2_vbuf_2nd_ph_candi_4_x_offset(data) (0x00000007&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_get_kme_me2_vbuf_2nd_pfv0_candi_0_y_offset(data) ((0x38000000&(data))>>27)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_get_kme_me2_vbuf_2nd_pfv0_candi_0_x_offset(data) ((0x07000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_get_kme_me2_vbuf_2nd_ph_candi_7_y_offset(data) ((0x00E00000&(data))>>21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_get_kme_me2_vbuf_2nd_ph_candi_7_x_offset(data) ((0x001C0000&(data))>>18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_get_kme_me2_vbuf_2nd_ph_candi_6_y_offset(data) ((0x00038000&(data))>>15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_get_kme_me2_vbuf_2nd_ph_candi_6_x_offset(data) ((0x00007000&(data))>>12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_get_kme_me2_vbuf_2nd_ph_candi_5_y_offset(data) ((0x00000E00&(data))>>9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_get_kme_me2_vbuf_2nd_ph_candi_5_x_offset(data) ((0x000001C0&(data))>>6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_get_kme_me2_vbuf_2nd_ph_candi_4_y_offset(data) ((0x00000038&(data))>>3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_88_get_kme_me2_vbuf_2nd_ph_candi_4_x_offset(data) (0x00000007&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C                                   0x1809C78C
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_reg_addr                           "0xB809C78C"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_reg                                0xB809C78C
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_inst_addr                          "0x0023"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_5_y_offset_shift (27)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_5_x_offset_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_4_y_offset_shift (21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_4_x_offset_shift (18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_3_y_offset_shift (15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_3_x_offset_shift (12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_2_y_offset_shift (9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_2_x_offset_shift (6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_1_y_offset_shift (3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_1_x_offset_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_5_y_offset_mask (0x38000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_5_x_offset_mask (0x07000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_4_y_offset_mask (0x00E00000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_4_x_offset_mask (0x001C0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_3_y_offset_mask (0x00038000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_3_x_offset_mask (0x00007000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_2_y_offset_mask (0x00000E00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_2_x_offset_mask (0x000001C0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_1_y_offset_mask (0x00000038)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_1_x_offset_mask (0x00000007)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_5_y_offset(data) (0x38000000&((data)<<27))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_5_x_offset(data) (0x07000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_4_y_offset(data) (0x00E00000&((data)<<21))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_4_x_offset(data) (0x001C0000&((data)<<18))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_3_y_offset(data) (0x00038000&((data)<<15))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_3_x_offset(data) (0x00007000&((data)<<12))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_2_y_offset(data) (0x00000E00&((data)<<9))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_2_x_offset(data) (0x000001C0&((data)<<6))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_1_y_offset(data) (0x00000038&((data)<<3))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_kme_me2_vbuf_2nd_pfv0_candi_1_x_offset(data) (0x00000007&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_get_kme_me2_vbuf_2nd_pfv0_candi_5_y_offset(data) ((0x38000000&(data))>>27)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_get_kme_me2_vbuf_2nd_pfv0_candi_5_x_offset(data) ((0x07000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_get_kme_me2_vbuf_2nd_pfv0_candi_4_y_offset(data) ((0x00E00000&(data))>>21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_get_kme_me2_vbuf_2nd_pfv0_candi_4_x_offset(data) ((0x001C0000&(data))>>18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_get_kme_me2_vbuf_2nd_pfv0_candi_3_y_offset(data) ((0x00038000&(data))>>15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_get_kme_me2_vbuf_2nd_pfv0_candi_3_x_offset(data) ((0x00007000&(data))>>12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_get_kme_me2_vbuf_2nd_pfv0_candi_2_y_offset(data) ((0x00000E00&(data))>>9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_get_kme_me2_vbuf_2nd_pfv0_candi_2_x_offset(data) ((0x000001C0&(data))>>6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_get_kme_me2_vbuf_2nd_pfv0_candi_1_y_offset(data) ((0x00000038&(data))>>3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_8C_get_kme_me2_vbuf_2nd_pfv0_candi_1_x_offset(data) (0x00000007&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90                                   0x1809C790
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_reg_addr                           "0xB809C790"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_reg                                0xB809C790
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_inst_addr                          "0x0024"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv1_candi_2_y_offset_shift (27)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv1_candi_2_x_offset_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv1_candi_1_y_offset_shift (21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv1_candi_1_x_offset_shift (18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv1_candi_0_y_offset_shift (15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv1_candi_0_x_offset_shift (12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv0_candi_7_y_offset_shift (9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv0_candi_7_x_offset_shift (6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv0_candi_6_y_offset_shift (3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv0_candi_6_x_offset_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv1_candi_2_y_offset_mask (0x38000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv1_candi_2_x_offset_mask (0x07000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv1_candi_1_y_offset_mask (0x00E00000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv1_candi_1_x_offset_mask (0x001C0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv1_candi_0_y_offset_mask (0x00038000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv1_candi_0_x_offset_mask (0x00007000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv0_candi_7_y_offset_mask (0x00000E00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv0_candi_7_x_offset_mask (0x000001C0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv0_candi_6_y_offset_mask (0x00000038)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv0_candi_6_x_offset_mask (0x00000007)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv1_candi_2_y_offset(data) (0x38000000&((data)<<27))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv1_candi_2_x_offset(data) (0x07000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv1_candi_1_y_offset(data) (0x00E00000&((data)<<21))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv1_candi_1_x_offset(data) (0x001C0000&((data)<<18))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv1_candi_0_y_offset(data) (0x00038000&((data)<<15))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv1_candi_0_x_offset(data) (0x00007000&((data)<<12))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv0_candi_7_y_offset(data) (0x00000E00&((data)<<9))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv0_candi_7_x_offset(data) (0x000001C0&((data)<<6))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv0_candi_6_y_offset(data) (0x00000038&((data)<<3))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_kme_me2_vbuf_2nd_pfv0_candi_6_x_offset(data) (0x00000007&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_get_kme_me2_vbuf_2nd_pfv1_candi_2_y_offset(data) ((0x38000000&(data))>>27)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_get_kme_me2_vbuf_2nd_pfv1_candi_2_x_offset(data) ((0x07000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_get_kme_me2_vbuf_2nd_pfv1_candi_1_y_offset(data) ((0x00E00000&(data))>>21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_get_kme_me2_vbuf_2nd_pfv1_candi_1_x_offset(data) ((0x001C0000&(data))>>18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_get_kme_me2_vbuf_2nd_pfv1_candi_0_y_offset(data) ((0x00038000&(data))>>15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_get_kme_me2_vbuf_2nd_pfv1_candi_0_x_offset(data) ((0x00007000&(data))>>12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_get_kme_me2_vbuf_2nd_pfv0_candi_7_y_offset(data) ((0x00000E00&(data))>>9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_get_kme_me2_vbuf_2nd_pfv0_candi_7_x_offset(data) ((0x000001C0&(data))>>6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_get_kme_me2_vbuf_2nd_pfv0_candi_6_y_offset(data) ((0x00000038&(data))>>3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_90_get_kme_me2_vbuf_2nd_pfv0_candi_6_x_offset(data) (0x00000007&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94                                   0x1809C794
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_reg_addr                           "0xB809C794"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_reg                                0xB809C794
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_inst_addr                          "0x0025"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_7_y_offset_shift (27)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_7_x_offset_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_6_y_offset_shift (21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_6_x_offset_shift (18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_5_y_offset_shift (15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_5_x_offset_shift (12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_4_y_offset_shift (9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_4_x_offset_shift (6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_3_y_offset_shift (3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_3_x_offset_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_7_y_offset_mask (0x38000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_7_x_offset_mask (0x07000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_6_y_offset_mask (0x00E00000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_6_x_offset_mask (0x001C0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_5_y_offset_mask (0x00038000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_5_x_offset_mask (0x00007000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_4_y_offset_mask (0x00000E00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_4_x_offset_mask (0x000001C0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_3_y_offset_mask (0x00000038)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_3_x_offset_mask (0x00000007)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_7_y_offset(data) (0x38000000&((data)<<27))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_7_x_offset(data) (0x07000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_6_y_offset(data) (0x00E00000&((data)<<21))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_6_x_offset(data) (0x001C0000&((data)<<18))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_5_y_offset(data) (0x00038000&((data)<<15))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_5_x_offset(data) (0x00007000&((data)<<12))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_4_y_offset(data) (0x00000E00&((data)<<9))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_4_x_offset(data) (0x000001C0&((data)<<6))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_3_y_offset(data) (0x00000038&((data)<<3))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_kme_me2_vbuf_2nd_pfv1_candi_3_x_offset(data) (0x00000007&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_get_kme_me2_vbuf_2nd_pfv1_candi_7_y_offset(data) ((0x38000000&(data))>>27)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_get_kme_me2_vbuf_2nd_pfv1_candi_7_x_offset(data) ((0x07000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_get_kme_me2_vbuf_2nd_pfv1_candi_6_y_offset(data) ((0x00E00000&(data))>>21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_get_kme_me2_vbuf_2nd_pfv1_candi_6_x_offset(data) ((0x001C0000&(data))>>18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_get_kme_me2_vbuf_2nd_pfv1_candi_5_y_offset(data) ((0x00038000&(data))>>15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_get_kme_me2_vbuf_2nd_pfv1_candi_5_x_offset(data) ((0x00007000&(data))>>12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_get_kme_me2_vbuf_2nd_pfv1_candi_4_y_offset(data) ((0x00000E00&(data))>>9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_get_kme_me2_vbuf_2nd_pfv1_candi_4_x_offset(data) ((0x000001C0&(data))>>6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_get_kme_me2_vbuf_2nd_pfv1_candi_3_y_offset(data) ((0x00000038&(data))>>3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_94_get_kme_me2_vbuf_2nd_pfv1_candi_3_x_offset(data) (0x00000007&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98                                   0x1809C798
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_reg_addr                           "0xB809C798"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_reg                                0xB809C798
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_inst_addr                          "0x0026"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_kme_me2_vbuf_2nd_updt_candi_3_y_offset_shift (21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_kme_me2_vbuf_2nd_updt_candi_3_x_offset_shift (18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_kme_me2_vbuf_2nd_updt_candi_2_y_offset_shift (15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_kme_me2_vbuf_2nd_updt_candi_2_x_offset_shift (12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_kme_me2_vbuf_2nd_updt_candi_1_y_offset_shift (9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_kme_me2_vbuf_2nd_updt_candi_1_x_offset_shift (6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_kme_me2_vbuf_2nd_updt_candi_0_y_offset_shift (3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_kme_me2_vbuf_2nd_updt_candi_0_x_offset_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_kme_me2_vbuf_2nd_updt_candi_3_y_offset_mask (0x00E00000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_kme_me2_vbuf_2nd_updt_candi_3_x_offset_mask (0x001C0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_kme_me2_vbuf_2nd_updt_candi_2_y_offset_mask (0x00038000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_kme_me2_vbuf_2nd_updt_candi_2_x_offset_mask (0x00007000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_kme_me2_vbuf_2nd_updt_candi_1_y_offset_mask (0x00000E00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_kme_me2_vbuf_2nd_updt_candi_1_x_offset_mask (0x000001C0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_kme_me2_vbuf_2nd_updt_candi_0_y_offset_mask (0x00000038)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_kme_me2_vbuf_2nd_updt_candi_0_x_offset_mask (0x00000007)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_kme_me2_vbuf_2nd_updt_candi_3_y_offset(data) (0x00E00000&((data)<<21))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_kme_me2_vbuf_2nd_updt_candi_3_x_offset(data) (0x001C0000&((data)<<18))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_kme_me2_vbuf_2nd_updt_candi_2_y_offset(data) (0x00038000&((data)<<15))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_kme_me2_vbuf_2nd_updt_candi_2_x_offset(data) (0x00007000&((data)<<12))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_kme_me2_vbuf_2nd_updt_candi_1_y_offset(data) (0x00000E00&((data)<<9))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_kme_me2_vbuf_2nd_updt_candi_1_x_offset(data) (0x000001C0&((data)<<6))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_kme_me2_vbuf_2nd_updt_candi_0_y_offset(data) (0x00000038&((data)<<3))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_kme_me2_vbuf_2nd_updt_candi_0_x_offset(data) (0x00000007&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_get_kme_me2_vbuf_2nd_updt_candi_3_y_offset(data) ((0x00E00000&(data))>>21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_get_kme_me2_vbuf_2nd_updt_candi_3_x_offset(data) ((0x001C0000&(data))>>18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_get_kme_me2_vbuf_2nd_updt_candi_2_y_offset(data) ((0x00038000&(data))>>15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_get_kme_me2_vbuf_2nd_updt_candi_2_x_offset(data) ((0x00007000&(data))>>12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_get_kme_me2_vbuf_2nd_updt_candi_1_y_offset(data) ((0x00000E00&(data))>>9)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_get_kme_me2_vbuf_2nd_updt_candi_1_x_offset(data) ((0x000001C0&(data))>>6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_get_kme_me2_vbuf_2nd_updt_candi_0_y_offset(data) ((0x00000038&(data))>>3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_98_get_kme_me2_vbuf_2nd_updt_candi_0_x_offset(data) (0x00000007&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_9C                                   0x1809C79C
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_9C_reg_addr                           "0xB809C79C"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_9C_reg                                0xB809C79C
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_9C_inst_addr                          "0x0027"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_9C_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_9C_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_9C_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_9C_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_9C_kme_me2_vbuf_2nd_ph_candi_st_pnt1_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_9C_kme_me2_vbuf_2nd_ph_candi_st_pnt0_shift (16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_9C_kme_me2_vbuf_2nd_candi_gmv_pnt_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_9C_kme_me2_vbuf_2nd_candi_zmv_pnt_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_9C_kme_me2_vbuf_2nd_ph_candi_st_pnt1_mask (0xFF000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_9C_kme_me2_vbuf_2nd_ph_candi_st_pnt0_mask (0x00FF0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_9C_kme_me2_vbuf_2nd_candi_gmv_pnt_mask (0x0000FF00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_9C_kme_me2_vbuf_2nd_candi_zmv_pnt_mask (0x000000FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_9C_kme_me2_vbuf_2nd_ph_candi_st_pnt1(data) (0xFF000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_9C_kme_me2_vbuf_2nd_ph_candi_st_pnt0(data) (0x00FF0000&((data)<<16))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_9C_kme_me2_vbuf_2nd_candi_gmv_pnt(data) (0x0000FF00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_9C_kme_me2_vbuf_2nd_candi_zmv_pnt(data) (0x000000FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_9C_get_kme_me2_vbuf_2nd_ph_candi_st_pnt1(data) ((0xFF000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_9C_get_kme_me2_vbuf_2nd_ph_candi_st_pnt0(data) ((0x00FF0000&(data))>>16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_9C_get_kme_me2_vbuf_2nd_candi_gmv_pnt(data) ((0x0000FF00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_9C_get_kme_me2_vbuf_2nd_candi_zmv_pnt(data) (0x000000FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A0                                   0x1809C7A0
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A0_reg_addr                           "0xB809C7A0"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A0_reg                                0xB809C7A0
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A0_inst_addr                          "0x0028"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A0_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A0_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A0_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A0_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A0_kme_me2_vbuf_2nd_ph_candi_st_pnt5_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A0_kme_me2_vbuf_2nd_ph_candi_st_pnt4_shift (16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A0_kme_me2_vbuf_2nd_ph_candi_st_pnt3_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A0_kme_me2_vbuf_2nd_ph_candi_st_pnt2_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A0_kme_me2_vbuf_2nd_ph_candi_st_pnt5_mask (0xFF000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A0_kme_me2_vbuf_2nd_ph_candi_st_pnt4_mask (0x00FF0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A0_kme_me2_vbuf_2nd_ph_candi_st_pnt3_mask (0x0000FF00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A0_kme_me2_vbuf_2nd_ph_candi_st_pnt2_mask (0x000000FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A0_kme_me2_vbuf_2nd_ph_candi_st_pnt5(data) (0xFF000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A0_kme_me2_vbuf_2nd_ph_candi_st_pnt4(data) (0x00FF0000&((data)<<16))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A0_kme_me2_vbuf_2nd_ph_candi_st_pnt3(data) (0x0000FF00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A0_kme_me2_vbuf_2nd_ph_candi_st_pnt2(data) (0x000000FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A0_get_kme_me2_vbuf_2nd_ph_candi_st_pnt5(data) ((0xFF000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A0_get_kme_me2_vbuf_2nd_ph_candi_st_pnt4(data) ((0x00FF0000&(data))>>16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A0_get_kme_me2_vbuf_2nd_ph_candi_st_pnt3(data) ((0x0000FF00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A0_get_kme_me2_vbuf_2nd_ph_candi_st_pnt2(data) (0x000000FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A4                                   0x1809C7A4
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A4_reg_addr                           "0xB809C7A4"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A4_reg                                0xB809C7A4
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A4_inst_addr                          "0x0029"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A4_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A4_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A4_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A4_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A4_kme_me2_vbuf_2nd_pfv0_candi_st_pnt0_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A4_kme_me2_vbuf_2nd_ph_candi_dediff_pnt_shift (16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A4_kme_me2_vbuf_2nd_ph_candi_st_pnt7_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A4_kme_me2_vbuf_2nd_ph_candi_st_pnt6_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A4_kme_me2_vbuf_2nd_pfv0_candi_st_pnt0_mask (0xFF000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A4_kme_me2_vbuf_2nd_ph_candi_dediff_pnt_mask (0x00FF0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A4_kme_me2_vbuf_2nd_ph_candi_st_pnt7_mask (0x0000FF00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A4_kme_me2_vbuf_2nd_ph_candi_st_pnt6_mask (0x000000FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A4_kme_me2_vbuf_2nd_pfv0_candi_st_pnt0(data) (0xFF000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A4_kme_me2_vbuf_2nd_ph_candi_dediff_pnt(data) (0x00FF0000&((data)<<16))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A4_kme_me2_vbuf_2nd_ph_candi_st_pnt7(data) (0x0000FF00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A4_kme_me2_vbuf_2nd_ph_candi_st_pnt6(data) (0x000000FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A4_get_kme_me2_vbuf_2nd_pfv0_candi_st_pnt0(data) ((0xFF000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A4_get_kme_me2_vbuf_2nd_ph_candi_dediff_pnt(data) ((0x00FF0000&(data))>>16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A4_get_kme_me2_vbuf_2nd_ph_candi_st_pnt7(data) ((0x0000FF00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A4_get_kme_me2_vbuf_2nd_ph_candi_st_pnt6(data) (0x000000FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A8                                   0x1809C7A8
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A8_reg_addr                           "0xB809C7A8"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A8_reg                                0xB809C7A8
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A8_inst_addr                          "0x002A"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A8_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A8_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A8_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A8_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A8_kme_me2_vbuf_2nd_pfv0_candi_st_pnt4_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A8_kme_me2_vbuf_2nd_pfv0_candi_st_pnt3_shift (16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A8_kme_me2_vbuf_2nd_pfv0_candi_st_pnt2_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A8_kme_me2_vbuf_2nd_pfv0_candi_st_pnt1_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A8_kme_me2_vbuf_2nd_pfv0_candi_st_pnt4_mask (0xFF000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A8_kme_me2_vbuf_2nd_pfv0_candi_st_pnt3_mask (0x00FF0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A8_kme_me2_vbuf_2nd_pfv0_candi_st_pnt2_mask (0x0000FF00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A8_kme_me2_vbuf_2nd_pfv0_candi_st_pnt1_mask (0x000000FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A8_kme_me2_vbuf_2nd_pfv0_candi_st_pnt4(data) (0xFF000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A8_kme_me2_vbuf_2nd_pfv0_candi_st_pnt3(data) (0x00FF0000&((data)<<16))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A8_kme_me2_vbuf_2nd_pfv0_candi_st_pnt2(data) (0x0000FF00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A8_kme_me2_vbuf_2nd_pfv0_candi_st_pnt1(data) (0x000000FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A8_get_kme_me2_vbuf_2nd_pfv0_candi_st_pnt4(data) ((0xFF000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A8_get_kme_me2_vbuf_2nd_pfv0_candi_st_pnt3(data) ((0x00FF0000&(data))>>16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A8_get_kme_me2_vbuf_2nd_pfv0_candi_st_pnt2(data) ((0x0000FF00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_A8_get_kme_me2_vbuf_2nd_pfv0_candi_st_pnt1(data) (0x000000FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_AC                                   0x1809C7AC
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_AC_reg_addr                           "0xB809C7AC"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_AC_reg                                0xB809C7AC
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_AC_inst_addr                          "0x002B"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_AC_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_AC_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_AC_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_AC_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_AC_kme_me2_vbuf_2nd_pfv0_candi_dediff_pnt_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_AC_kme_me2_vbuf_2nd_pfv0_candi_st_pnt7_shift (16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_AC_kme_me2_vbuf_2nd_pfv0_candi_st_pnt6_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_AC_kme_me2_vbuf_2nd_pfv0_candi_st_pnt5_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_AC_kme_me2_vbuf_2nd_pfv0_candi_dediff_pnt_mask (0xFF000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_AC_kme_me2_vbuf_2nd_pfv0_candi_st_pnt7_mask (0x00FF0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_AC_kme_me2_vbuf_2nd_pfv0_candi_st_pnt6_mask (0x0000FF00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_AC_kme_me2_vbuf_2nd_pfv0_candi_st_pnt5_mask (0x000000FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_AC_kme_me2_vbuf_2nd_pfv0_candi_dediff_pnt(data) (0xFF000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_AC_kme_me2_vbuf_2nd_pfv0_candi_st_pnt7(data) (0x00FF0000&((data)<<16))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_AC_kme_me2_vbuf_2nd_pfv0_candi_st_pnt6(data) (0x0000FF00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_AC_kme_me2_vbuf_2nd_pfv0_candi_st_pnt5(data) (0x000000FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_AC_get_kme_me2_vbuf_2nd_pfv0_candi_dediff_pnt(data) ((0xFF000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_AC_get_kme_me2_vbuf_2nd_pfv0_candi_st_pnt7(data) ((0x00FF0000&(data))>>16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_AC_get_kme_me2_vbuf_2nd_pfv0_candi_st_pnt6(data) ((0x0000FF00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_AC_get_kme_me2_vbuf_2nd_pfv0_candi_st_pnt5(data) (0x000000FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B0                                   0x1809C7B0
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B0_reg_addr                           "0xB809C7B0"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B0_reg                                0xB809C7B0
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B0_inst_addr                          "0x002C"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B0_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B0_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B0_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B0_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B0_kme_me2_vbuf_2nd_pfv1_candi_st_pnt3_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B0_kme_me2_vbuf_2nd_pfv1_candi_st_pnt2_shift (16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B0_kme_me2_vbuf_2nd_pfv1_candi_st_pnt1_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B0_kme_me2_vbuf_2nd_pfv1_candi_st_pnt0_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B0_kme_me2_vbuf_2nd_pfv1_candi_st_pnt3_mask (0xFF000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B0_kme_me2_vbuf_2nd_pfv1_candi_st_pnt2_mask (0x00FF0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B0_kme_me2_vbuf_2nd_pfv1_candi_st_pnt1_mask (0x0000FF00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B0_kme_me2_vbuf_2nd_pfv1_candi_st_pnt0_mask (0x000000FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B0_kme_me2_vbuf_2nd_pfv1_candi_st_pnt3(data) (0xFF000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B0_kme_me2_vbuf_2nd_pfv1_candi_st_pnt2(data) (0x00FF0000&((data)<<16))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B0_kme_me2_vbuf_2nd_pfv1_candi_st_pnt1(data) (0x0000FF00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B0_kme_me2_vbuf_2nd_pfv1_candi_st_pnt0(data) (0x000000FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B0_get_kme_me2_vbuf_2nd_pfv1_candi_st_pnt3(data) ((0xFF000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B0_get_kme_me2_vbuf_2nd_pfv1_candi_st_pnt2(data) ((0x00FF0000&(data))>>16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B0_get_kme_me2_vbuf_2nd_pfv1_candi_st_pnt1(data) ((0x0000FF00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B0_get_kme_me2_vbuf_2nd_pfv1_candi_st_pnt0(data) (0x000000FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B4                                   0x1809C7B4
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B4_reg_addr                           "0xB809C7B4"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B4_reg                                0xB809C7B4
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B4_inst_addr                          "0x002D"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B4_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B4_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B4_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B4_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B4_kme_me2_vbuf_2nd_pfv1_candi_st_pnt7_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B4_kme_me2_vbuf_2nd_pfv1_candi_st_pnt6_shift (16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B4_kme_me2_vbuf_2nd_pfv1_candi_st_pnt5_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B4_kme_me2_vbuf_2nd_pfv1_candi_st_pnt4_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B4_kme_me2_vbuf_2nd_pfv1_candi_st_pnt7_mask (0xFF000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B4_kme_me2_vbuf_2nd_pfv1_candi_st_pnt6_mask (0x00FF0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B4_kme_me2_vbuf_2nd_pfv1_candi_st_pnt5_mask (0x0000FF00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B4_kme_me2_vbuf_2nd_pfv1_candi_st_pnt4_mask (0x000000FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B4_kme_me2_vbuf_2nd_pfv1_candi_st_pnt7(data) (0xFF000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B4_kme_me2_vbuf_2nd_pfv1_candi_st_pnt6(data) (0x00FF0000&((data)<<16))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B4_kme_me2_vbuf_2nd_pfv1_candi_st_pnt5(data) (0x0000FF00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B4_kme_me2_vbuf_2nd_pfv1_candi_st_pnt4(data) (0x000000FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B4_get_kme_me2_vbuf_2nd_pfv1_candi_st_pnt7(data) ((0xFF000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B4_get_kme_me2_vbuf_2nd_pfv1_candi_st_pnt6(data) ((0x00FF0000&(data))>>16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B4_get_kme_me2_vbuf_2nd_pfv1_candi_st_pnt5(data) ((0x0000FF00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B4_get_kme_me2_vbuf_2nd_pfv1_candi_st_pnt4(data) (0x000000FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B8                                   0x1809C7B8
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B8_reg_addr                           "0xB809C7B8"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B8_reg                                0xB809C7B8
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B8_inst_addr                          "0x002E"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B8_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B8_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B8_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B8_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B8_kme_me2_vbuf_2nd_candi_updt_pnt2_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B8_kme_me2_vbuf_2nd_candi_updt_pnt1_shift (16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B8_kme_me2_vbuf_2nd_candi_updt_pnt0_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B8_kme_me2_vbuf_2nd_pfv1_candi_dediff_pnt_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B8_kme_me2_vbuf_2nd_candi_updt_pnt2_mask (0xFF000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B8_kme_me2_vbuf_2nd_candi_updt_pnt1_mask (0x00FF0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B8_kme_me2_vbuf_2nd_candi_updt_pnt0_mask (0x0000FF00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B8_kme_me2_vbuf_2nd_pfv1_candi_dediff_pnt_mask (0x000000FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B8_kme_me2_vbuf_2nd_candi_updt_pnt2(data) (0xFF000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B8_kme_me2_vbuf_2nd_candi_updt_pnt1(data) (0x00FF0000&((data)<<16))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B8_kme_me2_vbuf_2nd_candi_updt_pnt0(data) (0x0000FF00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B8_kme_me2_vbuf_2nd_pfv1_candi_dediff_pnt(data) (0x000000FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B8_get_kme_me2_vbuf_2nd_candi_updt_pnt2(data) ((0xFF000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B8_get_kme_me2_vbuf_2nd_candi_updt_pnt1(data) ((0x00FF0000&(data))>>16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B8_get_kme_me2_vbuf_2nd_candi_updt_pnt0(data) ((0x0000FF00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_B8_get_kme_me2_vbuf_2nd_pfv1_candi_dediff_pnt(data) (0x000000FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_BC                                   0x1809C7BC
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_BC_reg_addr                           "0xB809C7BC"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_BC_reg                                0xB809C7BC
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_BC_inst_addr                          "0x002F"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_BC_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_BC_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_BC_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_BC_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_BC_kme_me2_vbuf_fsearch_candi_step0_pnt_shift (24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_BC_kme_me2_vbuf_fsearch_candi_gmv_pnt_shift (16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_BC_kme_me2_vbuf_fsearch_candi_zmv_pnt_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_BC_kme_me2_vbuf_2nd_candi_updt_pnt3_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_BC_kme_me2_vbuf_fsearch_candi_step0_pnt_mask (0xFF000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_BC_kme_me2_vbuf_fsearch_candi_gmv_pnt_mask (0x00FF0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_BC_kme_me2_vbuf_fsearch_candi_zmv_pnt_mask (0x0000FF00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_BC_kme_me2_vbuf_2nd_candi_updt_pnt3_mask (0x000000FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_BC_kme_me2_vbuf_fsearch_candi_step0_pnt(data) (0xFF000000&((data)<<24))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_BC_kme_me2_vbuf_fsearch_candi_gmv_pnt(data) (0x00FF0000&((data)<<16))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_BC_kme_me2_vbuf_fsearch_candi_zmv_pnt(data) (0x0000FF00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_BC_kme_me2_vbuf_2nd_candi_updt_pnt3(data) (0x000000FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_BC_get_kme_me2_vbuf_fsearch_candi_step0_pnt(data) ((0xFF000000&(data))>>24)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_BC_get_kme_me2_vbuf_fsearch_candi_gmv_pnt(data) ((0x00FF0000&(data))>>16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_BC_get_kme_me2_vbuf_fsearch_candi_zmv_pnt(data) ((0x0000FF00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_BC_get_kme_me2_vbuf_2nd_candi_updt_pnt3(data) (0x000000FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C0                                   0x1809C7C0
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C0_reg_addr                           "0xB809C7C0"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C0_reg                                0xB809C7C0
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C0_inst_addr                          "0x0030"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C0_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C0_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C0_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C0_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C0_kme_me2_vbuf_fsearch_candi_step3_pnt_shift (16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C0_kme_me2_vbuf_fsearch_candi_step2_pnt_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C0_kme_me2_vbuf_fsearch_candi_step1_pnt_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C0_kme_me2_vbuf_fsearch_candi_step3_pnt_mask (0x00FF0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C0_kme_me2_vbuf_fsearch_candi_step2_pnt_mask (0x0000FF00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C0_kme_me2_vbuf_fsearch_candi_step1_pnt_mask (0x000000FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C0_kme_me2_vbuf_fsearch_candi_step3_pnt(data) (0x00FF0000&((data)<<16))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C0_kme_me2_vbuf_fsearch_candi_step2_pnt(data) (0x0000FF00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C0_kme_me2_vbuf_fsearch_candi_step1_pnt(data) (0x000000FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C0_get_kme_me2_vbuf_fsearch_candi_step3_pnt(data) ((0x00FF0000&(data))>>16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C0_get_kme_me2_vbuf_fsearch_candi_step2_pnt(data) ((0x0000FF00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C0_get_kme_me2_vbuf_fsearch_candi_step1_pnt(data) (0x000000FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4                                   0x1809C7C4
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_reg_addr                           "0xB809C7C4"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_reg                                0xB809C7C4
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_inst_addr                          "0x0031"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_kme_me2_vbuf_show_mv_x_pat_shift   (20)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_kme_me2_vbuf_show_mv_patt_mode_shift (17)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_kme_me2_vbuf_show_candi_mv_sel_shift (12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_kme_me2_vbuf_fsearch_candi_step3_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_kme_me2_vbuf_fsearch_candi_step2_shift (4)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_kme_me2_vbuf_fsearch_candi_step1_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_kme_me2_vbuf_show_mv_x_pat_mask    (0x7FF00000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_kme_me2_vbuf_show_mv_patt_mode_mask (0x000E0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_kme_me2_vbuf_show_candi_mv_sel_mask (0x0001F000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_kme_me2_vbuf_fsearch_candi_step3_mask (0x00000F00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_kme_me2_vbuf_fsearch_candi_step2_mask (0x000000F0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_kme_me2_vbuf_fsearch_candi_step1_mask (0x0000000F)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_kme_me2_vbuf_show_mv_x_pat(data)   (0x7FF00000&((data)<<20))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_kme_me2_vbuf_show_mv_patt_mode(data) (0x000E0000&((data)<<17))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_kme_me2_vbuf_show_candi_mv_sel(data) (0x0001F000&((data)<<12))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_kme_me2_vbuf_fsearch_candi_step3(data) (0x00000F00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_kme_me2_vbuf_fsearch_candi_step2(data) (0x000000F0&((data)<<4))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_kme_me2_vbuf_fsearch_candi_step1(data) (0x0000000F&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_get_kme_me2_vbuf_show_mv_x_pat(data) ((0x7FF00000&(data))>>20)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_get_kme_me2_vbuf_show_mv_patt_mode(data) ((0x000E0000&(data))>>17)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_get_kme_me2_vbuf_show_candi_mv_sel(data) ((0x0001F000&(data))>>12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_get_kme_me2_vbuf_fsearch_candi_step3(data) ((0x00000F00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_get_kme_me2_vbuf_fsearch_candi_step2(data) ((0x000000F0&(data))>>4)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C4_get_kme_me2_vbuf_fsearch_candi_step1(data) (0x0000000F&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8                                   0x1809C7C8
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_reg_addr                           "0xB809C7C8"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_reg                                0xB809C7C8
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_inst_addr                          "0x0032"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_kme_me2_vbuf_show_candi_idx_shift  (15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_kme_me2_vbuf_ph_lbme_v_ratio_shift (13)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_kme_me2_vbuf_ph_lbme_h_ratio_shift (11)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_kme_me2_vbuf_lbme_posi_debug_gen_shift (10)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_kme_me2_vbuf_show_mv_y_pat_shift   (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_kme_me2_vbuf_show_candi_idx_mask   (0x001F8000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_kme_me2_vbuf_ph_lbme_v_ratio_mask  (0x00006000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_kme_me2_vbuf_ph_lbme_h_ratio_mask  (0x00001800)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_kme_me2_vbuf_lbme_posi_debug_gen_mask (0x00000400)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_kme_me2_vbuf_show_mv_y_pat_mask    (0x000003FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_kme_me2_vbuf_show_candi_idx(data)  (0x001F8000&((data)<<15))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_kme_me2_vbuf_ph_lbme_v_ratio(data) (0x00006000&((data)<<13))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_kme_me2_vbuf_ph_lbme_h_ratio(data) (0x00001800&((data)<<11))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_kme_me2_vbuf_lbme_posi_debug_gen(data) (0x00000400&((data)<<10))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_kme_me2_vbuf_show_mv_y_pat(data)   (0x000003FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_get_kme_me2_vbuf_show_candi_idx(data) ((0x001F8000&(data))>>15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_get_kme_me2_vbuf_ph_lbme_v_ratio(data) ((0x00006000&(data))>>13)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_get_kme_me2_vbuf_ph_lbme_h_ratio(data) ((0x00001800&(data))>>11)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_get_kme_me2_vbuf_lbme_posi_debug_gen(data) ((0x00000400&(data))>>10)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_C8_get_kme_me2_vbuf_show_mv_y_pat(data) (0x000003FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_CC                                   0x1809C7CC
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_CC_reg_addr                           "0xB809C7CC"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_CC_reg                                0xB809C7CC
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_CC_inst_addr                          "0x0033"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_CC_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_CC_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_CC_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_CC_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_CC_kme_me2_vbuf_phase_offset3_shift   (21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_CC_kme_me2_vbuf_phase_offset2_shift   (14)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_CC_kme_me2_vbuf_phase_offset1_shift   (7)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_CC_kme_me2_vbuf_phase_offset0_shift   (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_CC_kme_me2_vbuf_phase_offset3_mask    (0x0FE00000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_CC_kme_me2_vbuf_phase_offset2_mask    (0x001FC000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_CC_kme_me2_vbuf_phase_offset1_mask    (0x00003F80)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_CC_kme_me2_vbuf_phase_offset0_mask    (0x0000007F)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_CC_kme_me2_vbuf_phase_offset3(data)   (0x0FE00000&((data)<<21))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_CC_kme_me2_vbuf_phase_offset2(data)   (0x001FC000&((data)<<14))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_CC_kme_me2_vbuf_phase_offset1(data)   (0x00003F80&((data)<<7))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_CC_kme_me2_vbuf_phase_offset0(data)   (0x0000007F&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_CC_get_kme_me2_vbuf_phase_offset3(data) ((0x0FE00000&(data))>>21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_CC_get_kme_me2_vbuf_phase_offset2(data) ((0x001FC000&(data))>>14)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_CC_get_kme_me2_vbuf_phase_offset1(data) ((0x00003F80&(data))>>7)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_CC_get_kme_me2_vbuf_phase_offset0(data) (0x0000007F&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0                                   0x1809C7D0
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_reg_addr                           "0xB809C7D0"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_reg                                0xB809C7D0
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_inst_addr                          "0x0034"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_kme_me2_vbuf_phase_gain3_shift     (25)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_kme_me2_vbuf_phase_gain2_shift     (19)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_kme_me2_vbuf_phase_gain1_shift     (13)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_kme_me2_vbuf_phase_gain0_shift     (7)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_kme_me2_vbuf_phase_offset4_shift   (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_kme_me2_vbuf_phase_gain3_mask      (0x7E000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_kme_me2_vbuf_phase_gain2_mask      (0x01F80000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_kme_me2_vbuf_phase_gain1_mask      (0x0007E000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_kme_me2_vbuf_phase_gain0_mask      (0x00001F80)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_kme_me2_vbuf_phase_offset4_mask    (0x0000007F)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_kme_me2_vbuf_phase_gain3(data)     (0x7E000000&((data)<<25))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_kme_me2_vbuf_phase_gain2(data)     (0x01F80000&((data)<<19))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_kme_me2_vbuf_phase_gain1(data)     (0x0007E000&((data)<<13))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_kme_me2_vbuf_phase_gain0(data)     (0x00001F80&((data)<<7))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_kme_me2_vbuf_phase_offset4(data)   (0x0000007F&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_get_kme_me2_vbuf_phase_gain3(data) ((0x7E000000&(data))>>25)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_get_kme_me2_vbuf_phase_gain2(data) ((0x01F80000&(data))>>19)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_get_kme_me2_vbuf_phase_gain1(data) ((0x0007E000&(data))>>13)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_get_kme_me2_vbuf_phase_gain0(data) ((0x00001F80&(data))>>7)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D0_get_kme_me2_vbuf_phase_offset4(data) (0x0000007F&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4                                   0x1809C7D4
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_reg_addr                           "0xB809C7D4"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_reg                                0xB809C7D4
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_inst_addr                          "0x0035"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_kme_me2_vbuf_pix_rim_right_shift   (22)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_kme_me2_vbuf_pix_rim_left_shift    (12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_kme_me2_vbuf_mv_valid_mode_shift   (11)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_kme_me2_vbuf_orr_cnt_th_shift      (6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_kme_me2_vbuf_phase_gain4_shift     (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_kme_me2_vbuf_pix_rim_right_mask    (0xFFC00000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_kme_me2_vbuf_pix_rim_left_mask     (0x003FF000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_kme_me2_vbuf_mv_valid_mode_mask    (0x00000800)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_kme_me2_vbuf_orr_cnt_th_mask       (0x000007C0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_kme_me2_vbuf_phase_gain4_mask      (0x0000003F)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_kme_me2_vbuf_pix_rim_right(data)   (0xFFC00000&((data)<<22))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_kme_me2_vbuf_pix_rim_left(data)    (0x003FF000&((data)<<12))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_kme_me2_vbuf_mv_valid_mode(data)   (0x00000800&((data)<<11))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_kme_me2_vbuf_orr_cnt_th(data)      (0x000007C0&((data)<<6))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_kme_me2_vbuf_phase_gain4(data)     (0x0000003F&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_get_kme_me2_vbuf_pix_rim_right(data) ((0xFFC00000&(data))>>22)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_get_kme_me2_vbuf_pix_rim_left(data) ((0x003FF000&(data))>>12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_get_kme_me2_vbuf_mv_valid_mode(data) ((0x00000800&(data))>>11)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_get_kme_me2_vbuf_orr_cnt_th(data)  ((0x000007C0&(data))>>6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D4_get_kme_me2_vbuf_phase_gain4(data) (0x0000003F&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8                                   0x1809C7D8
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_reg_addr                           "0xB809C7D8"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_reg                                0xB809C7D8
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_inst_addr                          "0x0036"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_2nd_dc_obme_mode_shift (30)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_1st_dc_obme_mode_shift (28)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_dc_bypass_tag_shift   (27)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_fsearch_ac_obme_mode_shift (25)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_2nd_ac_obme_mode_shift (23)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_1st_ac_obme_mode_shift (21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_ac_bypass_tag_shift   (20)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_pix_rim_bot_shift     (10)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_pix_rim_top_shift     (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_2nd_dc_obme_mode_mask (0xC0000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_1st_dc_obme_mode_mask (0x30000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_dc_bypass_tag_mask    (0x08000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_fsearch_ac_obme_mode_mask (0x06000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_2nd_ac_obme_mode_mask (0x01800000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_1st_ac_obme_mode_mask (0x00600000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_ac_bypass_tag_mask    (0x00100000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_pix_rim_bot_mask      (0x000FFC00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_pix_rim_top_mask      (0x000003FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_2nd_dc_obme_mode(data) (0xC0000000&((data)<<30))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_1st_dc_obme_mode(data) (0x30000000&((data)<<28))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_dc_bypass_tag(data)   (0x08000000&((data)<<27))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_fsearch_ac_obme_mode(data) (0x06000000&((data)<<25))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_2nd_ac_obme_mode(data) (0x01800000&((data)<<23))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_1st_ac_obme_mode(data) (0x00600000&((data)<<21))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_ac_bypass_tag(data)   (0x00100000&((data)<<20))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_pix_rim_bot(data)     (0x000FFC00&((data)<<10))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_kme_me2_vbuf_pix_rim_top(data)     (0x000003FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_get_kme_me2_vbuf_2nd_dc_obme_mode(data) ((0xC0000000&(data))>>30)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_get_kme_me2_vbuf_1st_dc_obme_mode(data) ((0x30000000&(data))>>28)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_get_kme_me2_vbuf_dc_bypass_tag(data) ((0x08000000&(data))>>27)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_get_kme_me2_vbuf_fsearch_ac_obme_mode(data) ((0x06000000&(data))>>25)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_get_kme_me2_vbuf_2nd_ac_obme_mode(data) ((0x01800000&(data))>>23)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_get_kme_me2_vbuf_1st_ac_obme_mode(data) ((0x00600000&(data))>>21)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_get_kme_me2_vbuf_ac_bypass_tag(data) ((0x00100000&(data))>>20)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_get_kme_me2_vbuf_pix_rim_bot(data) ((0x000FFC00&(data))>>10)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_D8_get_kme_me2_vbuf_pix_rim_top(data) (0x000003FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC                                   0x1809C7DC
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_reg_addr                           "0xB809C7DC"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_reg                                0xB809C7DC
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_inst_addr                          "0x0037"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_mv_invalid_sel_shift  (30)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_apl_erosion_vidx_coef_shift (22)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_apl_erosion_vidx_shift_shift (20)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_apl_erosion_hidx_coef_shift (12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_apl_erosion_hidx_shift_shift (10)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_apl_erosion_level_shift (6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_apl_erosion_en_shift  (5)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_fsearch_dc_obme_mode_sel_shift (4)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_2nd_dc_obme_mode_sel_shift (3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_1st_dc_obme_mode_sel_shift (2)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_fsearch_dc_obme_mode_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_mv_invalid_sel_mask   (0x40000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_apl_erosion_vidx_coef_mask (0x3FC00000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_apl_erosion_vidx_shift_mask (0x00300000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_apl_erosion_hidx_coef_mask (0x000FF000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_apl_erosion_hidx_shift_mask (0x00000C00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_apl_erosion_level_mask (0x000003C0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_apl_erosion_en_mask   (0x00000020)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_fsearch_dc_obme_mode_sel_mask (0x00000010)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_2nd_dc_obme_mode_sel_mask (0x00000008)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_1st_dc_obme_mode_sel_mask (0x00000004)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_fsearch_dc_obme_mode_mask (0x00000003)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_mv_invalid_sel(data)  (0x40000000&((data)<<30))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_apl_erosion_vidx_coef(data) (0x3FC00000&((data)<<22))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_apl_erosion_vidx_shift(data) (0x00300000&((data)<<20))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_apl_erosion_hidx_coef(data) (0x000FF000&((data)<<12))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_apl_erosion_hidx_shift(data) (0x00000C00&((data)<<10))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_apl_erosion_level(data) (0x000003C0&((data)<<6))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_apl_erosion_en(data)  (0x00000020&((data)<<5))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_fsearch_dc_obme_mode_sel(data) (0x00000010&((data)<<4))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_2nd_dc_obme_mode_sel(data) (0x00000008&((data)<<3))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_1st_dc_obme_mode_sel(data) (0x00000004&((data)<<2))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_kme_me2_vbuf_fsearch_dc_obme_mode(data) (0x00000003&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_get_kme_me2_vbuf_mv_invalid_sel(data) ((0x40000000&(data))>>30)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_get_kme_me2_vbuf_apl_erosion_vidx_coef(data) ((0x3FC00000&(data))>>22)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_get_kme_me2_vbuf_apl_erosion_vidx_shift(data) ((0x00300000&(data))>>20)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_get_kme_me2_vbuf_apl_erosion_hidx_coef(data) ((0x000FF000&(data))>>12)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_get_kme_me2_vbuf_apl_erosion_hidx_shift(data) ((0x00000C00&(data))>>10)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_get_kme_me2_vbuf_apl_erosion_level(data) ((0x000003C0&(data))>>6)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_get_kme_me2_vbuf_apl_erosion_en(data) ((0x00000020&(data))>>5)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_get_kme_me2_vbuf_fsearch_dc_obme_mode_sel(data) ((0x00000010&(data))>>4)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_get_kme_me2_vbuf_2nd_dc_obme_mode_sel(data) ((0x00000008&(data))>>3)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_get_kme_me2_vbuf_1st_dc_obme_mode_sel(data) ((0x00000004&(data))>>2)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_DC_get_kme_me2_vbuf_fsearch_dc_obme_mode(data) (0x00000003&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0                                   0x1809C7E0
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_reg_addr                           "0xB809C7E0"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_reg                                0xB809C7E0
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_inst_addr                          "0x0038"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_kme_me2_vbuf2bv_dbg_en_shift       (29)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_kme_me2_row135to270_wait_row_nums_shift (25)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_kme_me2_row135to270_rd_interval_shift (18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_kme_me2_row135to270_en_shift       (17)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_kme_me2_vbuf_dc_tag_mode_shift     (16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_kme_me2_vbuf_ac_tag_mode_shift     (15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_kme_me2_vbuf_mvy_clip_range_shift  (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_kme_me2_vbuf_mvx_clip_range_shift  (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_kme_me2_vbuf2bv_dbg_en_mask        (0x20000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_kme_me2_row135to270_wait_row_nums_mask (0x1E000000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_kme_me2_row135to270_rd_interval_mask (0x01FC0000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_kme_me2_row135to270_en_mask        (0x00020000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_kme_me2_vbuf_dc_tag_mode_mask      (0x00010000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_kme_me2_vbuf_ac_tag_mode_mask      (0x00008000)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_kme_me2_vbuf_mvy_clip_range_mask   (0x00007F00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_kme_me2_vbuf_mvx_clip_range_mask   (0x000000FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_kme_me2_vbuf2bv_dbg_en(data)       (0x20000000&((data)<<29))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_kme_me2_row135to270_wait_row_nums(data) (0x1E000000&((data)<<25))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_kme_me2_row135to270_rd_interval(data) (0x01FC0000&((data)<<18))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_kme_me2_row135to270_en(data)       (0x00020000&((data)<<17))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_kme_me2_vbuf_dc_tag_mode(data)     (0x00010000&((data)<<16))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_kme_me2_vbuf_ac_tag_mode(data)     (0x00008000&((data)<<15))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_kme_me2_vbuf_mvy_clip_range(data)  (0x00007F00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_kme_me2_vbuf_mvx_clip_range(data)  (0x000000FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_get_kme_me2_vbuf2bv_dbg_en(data)   ((0x20000000&(data))>>29)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_get_kme_me2_row135to270_wait_row_nums(data) ((0x1E000000&(data))>>25)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_get_kme_me2_row135to270_rd_interval(data) ((0x01FC0000&(data))>>18)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_get_kme_me2_row135to270_en(data)   ((0x00020000&(data))>>17)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_get_kme_me2_vbuf_dc_tag_mode(data) ((0x00010000&(data))>>16)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_get_kme_me2_vbuf_ac_tag_mode(data) ((0x00008000&(data))>>15)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_get_kme_me2_vbuf_mvy_clip_range(data) ((0x00007F00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E0_get_kme_me2_vbuf_mvx_clip_range(data) (0x000000FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E4                                   0x1809C7E4
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E4_reg_addr                           "0xB809C7E4"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E4_reg                                0xB809C7E4
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E4_inst_addr                          "0x0039"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E4_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E4_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E4_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E4_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E4_regr_kme_me2_vbuf_1st_rd_num_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E4_regr_kme_me2_vbuf_1st_rd_num_mask  (0x003FFFFF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E4_regr_kme_me2_vbuf_1st_rd_num(data) (0x003FFFFF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E4_get_regr_kme_me2_vbuf_1st_rd_num(data) (0x003FFFFF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E8                                   0x1809C7E8
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E8_reg_addr                           "0xB809C7E8"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E8_reg                                0xB809C7E8
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E8_inst_addr                          "0x003A"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E8_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E8_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E8_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E8_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E8_regr_kme_me2_vbuf_2nd_rd_num_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E8_regr_kme_me2_vbuf_2nd_rd_num_mask  (0x0003FFFF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E8_regr_kme_me2_vbuf_2nd_rd_num(data) (0x0003FFFF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_E8_get_regr_kme_me2_vbuf_2nd_rd_num(data) (0x0003FFFF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_EC                                   0x1809C7EC
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_EC_reg_addr                           "0xB809C7EC"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_EC_reg                                0xB809C7EC
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_EC_inst_addr                          "0x003B"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_EC_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_EC_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_EC_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_EC_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_EC_regr_kme_me2_vbuf_dm_pfv_fetch_cnt_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_EC_regr_kme_me2_vbuf_dm_pfv_err_cnt_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_EC_regr_kme_me2_vbuf_dm_pfv_fetch_cnt_mask (0x03FFFF00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_EC_regr_kme_me2_vbuf_dm_pfv_err_cnt_mask (0x000000FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_EC_regr_kme_me2_vbuf_dm_pfv_fetch_cnt(data) (0x03FFFF00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_EC_regr_kme_me2_vbuf_dm_pfv_err_cnt(data) (0x000000FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_EC_get_regr_kme_me2_vbuf_dm_pfv_fetch_cnt(data) ((0x03FFFF00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_EC_get_regr_kme_me2_vbuf_dm_pfv_err_cnt(data) (0x000000FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F0                                   0x1809C7F0
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F0_reg_addr                           "0xB809C7F0"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F0_reg                                0xB809C7F0
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F0_inst_addr                          "0x003C"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F0_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F0_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F0_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F0_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F0_regr_kme_me2_vbuf_dm_ppfv_fetch_cnt_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F0_regr_kme_me2_vbuf_dm_ppfv_err_cnt_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F0_regr_kme_me2_vbuf_dm_ppfv_fetch_cnt_mask (0x03FFFF00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F0_regr_kme_me2_vbuf_dm_ppfv_err_cnt_mask (0x000000FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F0_regr_kme_me2_vbuf_dm_ppfv_fetch_cnt(data) (0x03FFFF00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F0_regr_kme_me2_vbuf_dm_ppfv_err_cnt(data) (0x000000FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F0_get_regr_kme_me2_vbuf_dm_ppfv_fetch_cnt(data) ((0x03FFFF00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F0_get_regr_kme_me2_vbuf_dm_ppfv_err_cnt(data) (0x000000FF&(data))

#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F4                                   0x1809C7F4
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F4_reg_addr                           "0xB809C7F4"
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F4_reg                                0xB809C7F4
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F4_inst_addr                          "0x003D"
#define  set_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F4_reg(data)                      (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F4_reg)=data)
#define  get_KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F4_reg                            (*((volatile unsigned int*)KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F4_reg))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F4_regr_kme_me2_vbuf_dm_ph_fetch_cnt_shift (8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F4_regr_kme_me2_vbuf_dm_ph_err_cnt_shift (0)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F4_regr_kme_me2_vbuf_dm_ph_fetch_cnt_mask (0x00FFFF00)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F4_regr_kme_me2_vbuf_dm_ph_err_cnt_mask (0x000000FF)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F4_regr_kme_me2_vbuf_dm_ph_fetch_cnt(data) (0x00FFFF00&((data)<<8))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F4_regr_kme_me2_vbuf_dm_ph_err_cnt(data) (0x000000FF&(data))
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F4_get_regr_kme_me2_vbuf_dm_ph_fetch_cnt(data) ((0x00FFFF00&(data))>>8)
#define  KME_ME2_VBUF_TOP_KME_ME2_VBUF_TOP_F4_get_regr_kme_me2_vbuf_dm_ph_err_cnt(data) (0x000000FF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KME_ME2_VBUF_TOP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  kme_me2_vbuf_dm_pfv_monitor_cnt:18;
        RBus_UInt32  kme_me2_pfv_mvy_range:7;
        RBus_UInt32  kme_me2_pfv_dm_debug_pattern_en:1;
        RBus_UInt32  kme_me2_vbuf_mode_sel:1;
        RBus_UInt32  kme_me2_vbuf_en:1;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  kme_me2_ppfv_mvy_range:7;
        RBus_UInt32  kme_me2_ppfv_dm_debug_pattern_en:1;
        RBus_UInt32  kme_me2_vbuf_pfv_mv_fetch_ln_1_row:2;
        RBus_UInt32  kme_me2_vbuf_pfv_mv_prefetch_ln_num:4;
        RBus_UInt32  kme_me2_vbuf_dm_pfv_req_intr_interval:8;
        RBus_UInt32  kme_me2_vbuf_dm_pfv_req_interval:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  kme_me2_vbuf_dm_ppfv_req_interval:8;
        RBus_UInt32  kme_me2_vbuf_dm_ppfv_monitor_cnt:18;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  kme_me2_ph_mvy_range:7;
        RBus_UInt32  kme_me2_ph_dm_debug_pattern_en:1;
        RBus_UInt32  kme_me2_vbuf_ppfv_mv_fetch_ln_1_row:2;
        RBus_UInt32  kme_me2_vbuf_ppfv_mv_prefetch_ln_num:4;
        RBus_UInt32  kme_me2_vbuf_dm_ppfv_req_intr_interval:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  kme_me2_vbuf_ph_mv_prefetch_ln_num:4;
        RBus_UInt32  kme_me2_vbuf_dm_ph_req_interval:8;
        RBus_UInt32  kme_me2_vbuf_dm_ph_monitor_cnt:18;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  me2_vbuf_pfv_3dpr_dm_l_force_data_y:10;
        RBus_UInt32  me2_vbuf_pfv_3dpr_dm_l_force_data_x:11;
        RBus_UInt32  me2_vbuf_pfv_3dpr_dm_r_force_en:1;
        RBus_UInt32  me2_vbuf_pfv_3dpr_dm_l_force_en:1;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kme_me2_vbuf_3dpr_en:1;
        RBus_UInt32  kme_me2_vbuf_sram_ls_value:1;
        RBus_UInt32  kme_me2_vbuf_sram_ls_en:1;
        RBus_UInt32  me2_vbuf_pfv_3dpr_dm_r_force_data_y:10;
        RBus_UInt32  me2_vbuf_pfv_3dpr_dm_r_force_data_x:11;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  kme_me2_vbuf_ph_blksize_hact:9;
        RBus_UInt32  kme_me2_vbuf_pfv_blksize_vact:9;
        RBus_UInt32  kme_me2_vbuf_pfv_blksize_hact:9;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  kme_me2_vbuf_pfv_blk_rim_right:9;
        RBus_UInt32  kme_me2_vbuf_pfv_blk_rim_left:9;
        RBus_UInt32  kme_me2_vbuf_ph_blksize_vact:9;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  kme_me2_vbuf_ph_blk_rim_left:9;
        RBus_UInt32  kme_me2_vbuf_pfv_blk_rim_bot:9;
        RBus_UInt32  kme_me2_vbuf_pfv_blk_rim_top:9;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  kme_me2_vbuf_ph_blk_rim_bot:9;
        RBus_UInt32  kme_me2_vbuf_ph_blk_rim_top:9;
        RBus_UInt32  kme_me2_vbuf_ph_blk_rim_right:9;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_offset_nums:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_nums:5;
        RBus_UInt32  kme_me2_vbuf_1st_gmv_offset_nums:3;
        RBus_UInt32  kme_me2_vbuf_1st_2nd_row_delay_nums:3;
        RBus_UInt32  kme_me2_vbuf_doublescan_fsearch_en:1;
        RBus_UInt32  kme_me2_vbuf_doublescan_en:1;
        RBus_UInt32  kme_me2_vbuf_fsm_empty_cycle:4;
        RBus_UInt32  kme_me2_vbuf_data_prepare_cycle:4;
        RBus_UInt32  kme_me2_vbuf_ph_pfv_h_ratio:2;
        RBus_UInt32  kme_me2_vbuf_ph_pfv_v_ratio:2;
        RBus_UInt32  kme_me2_vbuf_rim_mode:1;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_nums:5;
        RBus_UInt32  kme_me2_vbuf_2nd_gmv_offset_nums:3;
        RBus_UInt32  kme_me2_vbuf_1st_updt_candi_nums:6;
        RBus_UInt32  kme_me2_vbuf_1st_gmv_en:1;
        RBus_UInt32  kme_me2_vbuf_1st_zmv_en:1;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_offset_nums:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_nums:5;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_offset_nums:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_nums:5;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  kme_me2_vbuf_fsearch_gmv_en:1;
        RBus_UInt32  kme_me2_vbuf_fsearch_zmv_en:1;
        RBus_UInt32  kme_me2_vbuf_2nd_updt_candi_nums:6;
        RBus_UInt32  kme_me2_vbuf_2nd_gmv_en:1;
        RBus_UInt32  kme_me2_vbuf_2nd_zmv_en:1;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_offset_nums:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_nums:5;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_offset_nums:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_nums:5;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_offset_nums:3;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  kme_me2_vbuf_ph_loop_bv_patt_mode:2;
        RBus_UInt32  kme_me2_vbuf_lfsr_seed_init_en:1;
        RBus_UInt32  kme_me2_vbuf_matrix_grp_center_sel:1;
        RBus_UInt32  kme_me2_vbuf_lbme_dm_num_1row:9;
        RBus_UInt32  kme_me2_vbuf_lbme_self_upd_interval:8;
        RBus_UInt32  kme_me2_vbuf_ph_bv_wddr_noclr_en:1;
        RBus_UInt32  kme_me2_vbuf_ph_loop_bv_patt_en:1;
        RBus_UInt32  kme_me2_vbuf_ph_bv_patt_self_gen_en:1;
        RBus_UInt32  kme_me2_vbuf_fsearch_candi_offset_nums:6;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_lfsr_y_seed_init:16;
        RBus_UInt32  kme_me2_vbuf_lfsr_x_seed_init:16;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  kme_me2_vbuf_lfsr_x_mask_curve_x0:10;
        RBus_UInt32  kme_me2_vbuf_lfsr_y_mask:4;
        RBus_UInt32  kme_me2_vbuf_lfsr_x_mask:4;
        RBus_UInt32  kme_me2_vbuf_sc_lfsr_y_mask:4;
        RBus_UInt32  kme_me2_vbuf_sc_lfsr_x_mask:4;
        RBus_UInt32  kme_me2_vbuf_lfsr_mask_dyn_en:1;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  kme_me2_vbuf_lfsr_y_mask_curve_x0:10;
        RBus_UInt32  kme_me2_vbuf_lfsr_x_mask_curve_x2:10;
        RBus_UInt32  kme_me2_vbuf_lfsr_x_mask_curve_x1:10;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  kme_me2_vbuf_lfsr_y_mask_curve_x2:10;
        RBus_UInt32  kme_me2_vbuf_lfsr_y_mask_curve_x1:10;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_3_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_3_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_2_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_2_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_1_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_1_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_0_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_0_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_updt_mv_mode:2;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_dediff_en:1;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_dediff_mode:1;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_dediff_en:1;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_dediff_mode:1;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_dediff_en:1;
        RBus_UInt32  kme_me2_vbuf_1st_ph_dediff_mode:1;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_0_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_0_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_7_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_7_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_6_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_6_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_5_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_5_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_4_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_4_x_offset:3;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_5_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_5_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_4_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_4_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_3_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_3_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_2_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_2_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_1_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_1_x_offset:3;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_2_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_2_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_1_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_1_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_0_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_0_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_7_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_7_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_6_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_6_x_offset:3;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_7_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_7_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_6_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_6_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_5_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_5_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_4_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_4_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_3_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_3_x_offset:3;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_candi_zmv_pnt:8;
        RBus_UInt32  kme_me2_vbuf_1st_updt_candi_3_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_updt_candi_3_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_updt_candi_2_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_updt_candi_2_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_updt_candi_1_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_updt_candi_1_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_updt_candi_0_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_updt_candi_0_x_offset:3;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_st_pnt2:8;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_st_pnt1:8;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_st_pnt0:8;
        RBus_UInt32  kme_me2_vbuf_1st_candi_gmv_pnt:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_st_pnt6:8;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_st_pnt5:8;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_st_pnt4:8;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_st_pnt3:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_st_pnt1:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_st_pnt0:8;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_dediff_pnt:8;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_st_pnt7:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_st_pnt5:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_st_pnt4:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_st_pnt3:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_st_pnt2:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_st_pnt0:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_dediff_pnt:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_st_pnt7:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_st_pnt6:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_st_pnt4:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_st_pnt3:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_st_pnt2:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_st_pnt1:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_dediff_pnt:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_st_pnt7:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_st_pnt6:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_st_pnt5:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_candi_updt_pnt3:8;
        RBus_UInt32  kme_me2_vbuf_1st_candi_updt_pnt2:8;
        RBus_UInt32  kme_me2_vbuf_1st_candi_updt_pnt1:8;
        RBus_UInt32  kme_me2_vbuf_1st_candi_updt_pnt0:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_3_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_3_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_2_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_2_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_1_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_1_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_0_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_0_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_updt_mv_mode:1;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_dediff_en:1;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_dediff_mode:1;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_dediff_en:1;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_dediff_mode:1;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_dediff_en:1;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_dediff_mode:1;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_0_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_0_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_7_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_7_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_6_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_6_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_5_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_5_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_4_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_4_x_offset:3;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_5_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_5_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_4_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_4_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_3_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_3_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_2_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_2_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_1_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_1_x_offset:3;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_2_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_2_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_1_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_1_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_0_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_0_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_7_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_7_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_6_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_6_x_offset:3;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_7_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_7_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_6_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_6_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_5_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_5_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_4_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_4_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_3_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_3_x_offset:3;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kme_me2_vbuf_2nd_updt_candi_3_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_updt_candi_3_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_updt_candi_2_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_updt_candi_2_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_updt_candi_1_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_updt_candi_1_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_updt_candi_0_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_updt_candi_0_x_offset:3;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_st_pnt1:8;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_st_pnt0:8;
        RBus_UInt32  kme_me2_vbuf_2nd_candi_gmv_pnt:8;
        RBus_UInt32  kme_me2_vbuf_2nd_candi_zmv_pnt:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_st_pnt5:8;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_st_pnt4:8;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_st_pnt3:8;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_st_pnt2:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_st_pnt0:8;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_dediff_pnt:8;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_st_pnt7:8;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_st_pnt6:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_st_pnt4:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_st_pnt3:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_st_pnt2:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_st_pnt1:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_dediff_pnt:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_st_pnt7:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_st_pnt6:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_st_pnt5:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_st_pnt3:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_st_pnt2:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_st_pnt1:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_st_pnt0:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_st_pnt7:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_st_pnt6:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_st_pnt5:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_st_pnt4:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_candi_updt_pnt2:8;
        RBus_UInt32  kme_me2_vbuf_2nd_candi_updt_pnt1:8;
        RBus_UInt32  kme_me2_vbuf_2nd_candi_updt_pnt0:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_dediff_pnt:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_fsearch_candi_step0_pnt:8;
        RBus_UInt32  kme_me2_vbuf_fsearch_candi_gmv_pnt:8;
        RBus_UInt32  kme_me2_vbuf_fsearch_candi_zmv_pnt:8;
        RBus_UInt32  kme_me2_vbuf_2nd_candi_updt_pnt3:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kme_me2_vbuf_fsearch_candi_step3_pnt:8;
        RBus_UInt32  kme_me2_vbuf_fsearch_candi_step2_pnt:8;
        RBus_UInt32  kme_me2_vbuf_fsearch_candi_step1_pnt:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  kme_me2_vbuf_show_mv_x_pat:11;
        RBus_UInt32  kme_me2_vbuf_show_mv_patt_mode:3;
        RBus_UInt32  kme_me2_vbuf_show_candi_mv_sel:5;
        RBus_UInt32  kme_me2_vbuf_fsearch_candi_step3:4;
        RBus_UInt32  kme_me2_vbuf_fsearch_candi_step2:4;
        RBus_UInt32  kme_me2_vbuf_fsearch_candi_step1:4;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  kme_me2_vbuf_show_candi_idx:6;
        RBus_UInt32  kme_me2_vbuf_ph_lbme_v_ratio:2;
        RBus_UInt32  kme_me2_vbuf_ph_lbme_h_ratio:2;
        RBus_UInt32  kme_me2_vbuf_lbme_posi_debug_gen:1;
        RBus_UInt32  kme_me2_vbuf_show_mv_y_pat:10;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  kme_me2_vbuf_phase_offset3:7;
        RBus_UInt32  kme_me2_vbuf_phase_offset2:7;
        RBus_UInt32  kme_me2_vbuf_phase_offset1:7;
        RBus_UInt32  kme_me2_vbuf_phase_offset0:7;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  kme_me2_vbuf_phase_gain3:6;
        RBus_UInt32  kme_me2_vbuf_phase_gain2:6;
        RBus_UInt32  kme_me2_vbuf_phase_gain1:6;
        RBus_UInt32  kme_me2_vbuf_phase_gain0:6;
        RBus_UInt32  kme_me2_vbuf_phase_offset4:7;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_pix_rim_right:10;
        RBus_UInt32  kme_me2_vbuf_pix_rim_left:10;
        RBus_UInt32  kme_me2_vbuf_mv_valid_mode:1;
        RBus_UInt32  kme_me2_vbuf_orr_cnt_th:5;
        RBus_UInt32  kme_me2_vbuf_phase_gain4:6;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_dc_obme_mode:2;
        RBus_UInt32  kme_me2_vbuf_1st_dc_obme_mode:2;
        RBus_UInt32  kme_me2_vbuf_dc_bypass_tag:1;
        RBus_UInt32  kme_me2_vbuf_fsearch_ac_obme_mode:2;
        RBus_UInt32  kme_me2_vbuf_2nd_ac_obme_mode:2;
        RBus_UInt32  kme_me2_vbuf_1st_ac_obme_mode:2;
        RBus_UInt32  kme_me2_vbuf_ac_bypass_tag:1;
        RBus_UInt32  kme_me2_vbuf_pix_rim_bot:10;
        RBus_UInt32  kme_me2_vbuf_pix_rim_top:10;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  kme_me2_vbuf_mv_invalid_sel:1;
        RBus_UInt32  kme_me2_vbuf_apl_erosion_vidx_coef:8;
        RBus_UInt32  kme_me2_vbuf_apl_erosion_vidx_shift:2;
        RBus_UInt32  kme_me2_vbuf_apl_erosion_hidx_coef:8;
        RBus_UInt32  kme_me2_vbuf_apl_erosion_hidx_shift:2;
        RBus_UInt32  kme_me2_vbuf_apl_erosion_level:4;
        RBus_UInt32  kme_me2_vbuf_apl_erosion_en:1;
        RBus_UInt32  kme_me2_vbuf_fsearch_dc_obme_mode_sel:1;
        RBus_UInt32  kme_me2_vbuf_2nd_dc_obme_mode_sel:1;
        RBus_UInt32  kme_me2_vbuf_1st_dc_obme_mode_sel:1;
        RBus_UInt32  kme_me2_vbuf_fsearch_dc_obme_mode:2;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  kme_me2_vbuf2bv_dbg_en:1;
        RBus_UInt32  kme_me2_row135to270_wait_row_nums:4;
        RBus_UInt32  kme_me2_row135to270_rd_interval:7;
        RBus_UInt32  kme_me2_row135to270_en:1;
        RBus_UInt32  kme_me2_vbuf_dc_tag_mode:1;
        RBus_UInt32  kme_me2_vbuf_ac_tag_mode:1;
        RBus_UInt32  kme_me2_vbuf_mvy_clip_range:7;
        RBus_UInt32  kme_me2_vbuf_mvx_clip_range:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  regr_kme_me2_vbuf_1st_rd_num:22;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  regr_kme_me2_vbuf_2nd_rd_num:18;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  regr_kme_me2_vbuf_dm_pfv_fetch_cnt:18;
        RBus_UInt32  regr_kme_me2_vbuf_dm_pfv_err_cnt:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  regr_kme_me2_vbuf_dm_ppfv_fetch_cnt:18;
        RBus_UInt32  regr_kme_me2_vbuf_dm_ppfv_err_cnt:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_kme_me2_vbuf_dm_ph_fetch_cnt:16;
        RBus_UInt32  regr_kme_me2_vbuf_dm_ph_err_cnt:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_f4_RBUS;

#else //apply LITTLE_ENDIAN

//======KME_ME2_VBUF_TOP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_en:1;
        RBus_UInt32  kme_me2_vbuf_mode_sel:1;
        RBus_UInt32  kme_me2_pfv_dm_debug_pattern_en:1;
        RBus_UInt32  kme_me2_pfv_mvy_range:7;
        RBus_UInt32  kme_me2_vbuf_dm_pfv_monitor_cnt:18;
        RBus_UInt32  res1:4;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_dm_pfv_req_interval:8;
        RBus_UInt32  kme_me2_vbuf_dm_pfv_req_intr_interval:8;
        RBus_UInt32  kme_me2_vbuf_pfv_mv_prefetch_ln_num:4;
        RBus_UInt32  kme_me2_vbuf_pfv_mv_fetch_ln_1_row:2;
        RBus_UInt32  kme_me2_ppfv_dm_debug_pattern_en:1;
        RBus_UInt32  kme_me2_ppfv_mvy_range:7;
        RBus_UInt32  res1:2;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_dm_ppfv_monitor_cnt:18;
        RBus_UInt32  kme_me2_vbuf_dm_ppfv_req_interval:8;
        RBus_UInt32  res1:6;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_dm_ppfv_req_intr_interval:8;
        RBus_UInt32  kme_me2_vbuf_ppfv_mv_prefetch_ln_num:4;
        RBus_UInt32  kme_me2_vbuf_ppfv_mv_fetch_ln_1_row:2;
        RBus_UInt32  kme_me2_ph_dm_debug_pattern_en:1;
        RBus_UInt32  kme_me2_ph_mvy_range:7;
        RBus_UInt32  res1:10;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_dm_ph_monitor_cnt:18;
        RBus_UInt32  kme_me2_vbuf_dm_ph_req_interval:8;
        RBus_UInt32  kme_me2_vbuf_ph_mv_prefetch_ln_num:4;
        RBus_UInt32  res1:2;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_vbuf_pfv_3dpr_dm_l_force_en:1;
        RBus_UInt32  me2_vbuf_pfv_3dpr_dm_r_force_en:1;
        RBus_UInt32  me2_vbuf_pfv_3dpr_dm_l_force_data_x:11;
        RBus_UInt32  me2_vbuf_pfv_3dpr_dm_l_force_data_y:10;
        RBus_UInt32  res1:9;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_vbuf_pfv_3dpr_dm_r_force_data_x:11;
        RBus_UInt32  me2_vbuf_pfv_3dpr_dm_r_force_data_y:10;
        RBus_UInt32  kme_me2_vbuf_sram_ls_en:1;
        RBus_UInt32  kme_me2_vbuf_sram_ls_value:1;
        RBus_UInt32  kme_me2_vbuf_3dpr_en:1;
        RBus_UInt32  res1:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_pfv_blksize_hact:9;
        RBus_UInt32  kme_me2_vbuf_pfv_blksize_vact:9;
        RBus_UInt32  kme_me2_vbuf_ph_blksize_hact:9;
        RBus_UInt32  res1:5;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_ph_blksize_vact:9;
        RBus_UInt32  kme_me2_vbuf_pfv_blk_rim_left:9;
        RBus_UInt32  kme_me2_vbuf_pfv_blk_rim_right:9;
        RBus_UInt32  res1:5;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_pfv_blk_rim_top:9;
        RBus_UInt32  kme_me2_vbuf_pfv_blk_rim_bot:9;
        RBus_UInt32  kme_me2_vbuf_ph_blk_rim_left:9;
        RBus_UInt32  res1:5;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_ph_blk_rim_right:9;
        RBus_UInt32  kme_me2_vbuf_ph_blk_rim_top:9;
        RBus_UInt32  kme_me2_vbuf_ph_blk_rim_bot:9;
        RBus_UInt32  res1:5;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_rim_mode:1;
        RBus_UInt32  kme_me2_vbuf_ph_pfv_v_ratio:2;
        RBus_UInt32  kme_me2_vbuf_ph_pfv_h_ratio:2;
        RBus_UInt32  kme_me2_vbuf_data_prepare_cycle:4;
        RBus_UInt32  kme_me2_vbuf_fsm_empty_cycle:4;
        RBus_UInt32  kme_me2_vbuf_doublescan_en:1;
        RBus_UInt32  kme_me2_vbuf_doublescan_fsearch_en:1;
        RBus_UInt32  kme_me2_vbuf_1st_2nd_row_delay_nums:3;
        RBus_UInt32  kme_me2_vbuf_1st_gmv_offset_nums:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_nums:5;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_offset_nums:3;
        RBus_UInt32  res1:3;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_nums:5;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_offset_nums:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_nums:5;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_offset_nums:3;
        RBus_UInt32  kme_me2_vbuf_1st_zmv_en:1;
        RBus_UInt32  kme_me2_vbuf_1st_gmv_en:1;
        RBus_UInt32  kme_me2_vbuf_1st_updt_candi_nums:6;
        RBus_UInt32  kme_me2_vbuf_2nd_gmv_offset_nums:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_nums:5;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_offset_nums:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_nums:5;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_offset_nums:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_nums:5;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_offset_nums:3;
        RBus_UInt32  kme_me2_vbuf_2nd_zmv_en:1;
        RBus_UInt32  kme_me2_vbuf_2nd_gmv_en:1;
        RBus_UInt32  kme_me2_vbuf_2nd_updt_candi_nums:6;
        RBus_UInt32  kme_me2_vbuf_fsearch_zmv_en:1;
        RBus_UInt32  kme_me2_vbuf_fsearch_gmv_en:1;
        RBus_UInt32  res1:3;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_fsearch_candi_offset_nums:6;
        RBus_UInt32  kme_me2_vbuf_ph_bv_patt_self_gen_en:1;
        RBus_UInt32  kme_me2_vbuf_ph_loop_bv_patt_en:1;
        RBus_UInt32  kme_me2_vbuf_ph_bv_wddr_noclr_en:1;
        RBus_UInt32  kme_me2_vbuf_lbme_self_upd_interval:8;
        RBus_UInt32  kme_me2_vbuf_lbme_dm_num_1row:9;
        RBus_UInt32  kme_me2_vbuf_matrix_grp_center_sel:1;
        RBus_UInt32  kme_me2_vbuf_lfsr_seed_init_en:1;
        RBus_UInt32  kme_me2_vbuf_ph_loop_bv_patt_mode:2;
        RBus_UInt32  res1:2;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_lfsr_x_seed_init:16;
        RBus_UInt32  kme_me2_vbuf_lfsr_y_seed_init:16;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_lfsr_mask_dyn_en:1;
        RBus_UInt32  kme_me2_vbuf_sc_lfsr_x_mask:4;
        RBus_UInt32  kme_me2_vbuf_sc_lfsr_y_mask:4;
        RBus_UInt32  kme_me2_vbuf_lfsr_x_mask:4;
        RBus_UInt32  kme_me2_vbuf_lfsr_y_mask:4;
        RBus_UInt32  kme_me2_vbuf_lfsr_x_mask_curve_x0:10;
        RBus_UInt32  res1:5;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_lfsr_x_mask_curve_x1:10;
        RBus_UInt32  kme_me2_vbuf_lfsr_x_mask_curve_x2:10;
        RBus_UInt32  kme_me2_vbuf_lfsr_y_mask_curve_x0:10;
        RBus_UInt32  res1:2;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_lfsr_y_mask_curve_x1:10;
        RBus_UInt32  kme_me2_vbuf_lfsr_y_mask_curve_x2:10;
        RBus_UInt32  res1:12;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_ph_dediff_mode:1;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_dediff_en:1;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_dediff_mode:1;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_dediff_en:1;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_dediff_mode:1;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_dediff_en:1;
        RBus_UInt32  kme_me2_vbuf_1st_updt_mv_mode:2;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_0_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_0_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_1_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_1_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_2_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_2_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_3_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_3_y_offset:3;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_4_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_4_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_5_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_5_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_6_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_6_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_7_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_7_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_0_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_0_y_offset:3;
        RBus_UInt32  res1:2;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_1_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_1_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_2_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_2_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_3_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_3_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_4_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_4_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_5_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_5_y_offset:3;
        RBus_UInt32  res1:2;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_6_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_6_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_7_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_7_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_0_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_0_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_1_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_1_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_2_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_2_y_offset:3;
        RBus_UInt32  res1:2;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_3_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_3_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_4_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_4_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_5_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_5_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_6_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_6_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_7_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_7_y_offset:3;
        RBus_UInt32  res1:2;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_updt_candi_0_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_updt_candi_0_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_updt_candi_1_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_updt_candi_1_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_updt_candi_2_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_updt_candi_2_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_updt_candi_3_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_updt_candi_3_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_1st_candi_zmv_pnt:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_candi_gmv_pnt:8;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_st_pnt0:8;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_st_pnt1:8;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_st_pnt2:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_st_pnt3:8;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_st_pnt4:8;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_st_pnt5:8;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_st_pnt6:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_st_pnt7:8;
        RBus_UInt32  kme_me2_vbuf_1st_ph_candi_dediff_pnt:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_st_pnt0:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_st_pnt1:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_st_pnt2:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_st_pnt3:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_st_pnt4:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_st_pnt5:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_st_pnt6:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_st_pnt7:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv0_candi_dediff_pnt:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_st_pnt0:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_st_pnt1:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_st_pnt2:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_st_pnt3:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_st_pnt4:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_st_pnt5:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_st_pnt6:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_st_pnt7:8;
        RBus_UInt32  kme_me2_vbuf_1st_pfv1_candi_dediff_pnt:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_1st_candi_updt_pnt0:8;
        RBus_UInt32  kme_me2_vbuf_1st_candi_updt_pnt1:8;
        RBus_UInt32  kme_me2_vbuf_1st_candi_updt_pnt2:8;
        RBus_UInt32  kme_me2_vbuf_1st_candi_updt_pnt3:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_ph_dediff_mode:1;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_dediff_en:1;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_dediff_mode:1;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_dediff_en:1;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_dediff_mode:1;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_dediff_en:1;
        RBus_UInt32  kme_me2_vbuf_2nd_updt_mv_mode:1;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_0_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_0_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_1_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_1_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_2_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_2_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_3_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_3_y_offset:3;
        RBus_UInt32  res1:1;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_4_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_4_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_5_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_5_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_6_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_6_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_7_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_7_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_0_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_0_y_offset:3;
        RBus_UInt32  res1:2;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_1_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_1_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_2_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_2_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_3_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_3_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_4_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_4_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_5_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_5_y_offset:3;
        RBus_UInt32  res1:2;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_6_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_6_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_7_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_7_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_0_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_0_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_1_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_1_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_2_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_2_y_offset:3;
        RBus_UInt32  res1:2;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_3_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_3_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_4_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_4_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_5_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_5_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_6_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_6_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_7_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_7_y_offset:3;
        RBus_UInt32  res1:2;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_updt_candi_0_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_updt_candi_0_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_updt_candi_1_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_updt_candi_1_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_updt_candi_2_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_updt_candi_2_y_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_updt_candi_3_x_offset:3;
        RBus_UInt32  kme_me2_vbuf_2nd_updt_candi_3_y_offset:3;
        RBus_UInt32  res1:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_candi_zmv_pnt:8;
        RBus_UInt32  kme_me2_vbuf_2nd_candi_gmv_pnt:8;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_st_pnt0:8;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_st_pnt1:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_st_pnt2:8;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_st_pnt3:8;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_st_pnt4:8;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_st_pnt5:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_st_pnt6:8;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_st_pnt7:8;
        RBus_UInt32  kme_me2_vbuf_2nd_ph_candi_dediff_pnt:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_st_pnt0:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_st_pnt1:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_st_pnt2:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_st_pnt3:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_st_pnt4:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_st_pnt5:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_st_pnt6:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_st_pnt7:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv0_candi_dediff_pnt:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_st_pnt0:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_st_pnt1:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_st_pnt2:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_st_pnt3:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_st_pnt4:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_st_pnt5:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_st_pnt6:8;
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_st_pnt7:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_pfv1_candi_dediff_pnt:8;
        RBus_UInt32  kme_me2_vbuf_2nd_candi_updt_pnt0:8;
        RBus_UInt32  kme_me2_vbuf_2nd_candi_updt_pnt1:8;
        RBus_UInt32  kme_me2_vbuf_2nd_candi_updt_pnt2:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_2nd_candi_updt_pnt3:8;
        RBus_UInt32  kme_me2_vbuf_fsearch_candi_zmv_pnt:8;
        RBus_UInt32  kme_me2_vbuf_fsearch_candi_gmv_pnt:8;
        RBus_UInt32  kme_me2_vbuf_fsearch_candi_step0_pnt:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_fsearch_candi_step1_pnt:8;
        RBus_UInt32  kme_me2_vbuf_fsearch_candi_step2_pnt:8;
        RBus_UInt32  kme_me2_vbuf_fsearch_candi_step3_pnt:8;
        RBus_UInt32  res1:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_fsearch_candi_step1:4;
        RBus_UInt32  kme_me2_vbuf_fsearch_candi_step2:4;
        RBus_UInt32  kme_me2_vbuf_fsearch_candi_step3:4;
        RBus_UInt32  kme_me2_vbuf_show_candi_mv_sel:5;
        RBus_UInt32  kme_me2_vbuf_show_mv_patt_mode:3;
        RBus_UInt32  kme_me2_vbuf_show_mv_x_pat:11;
        RBus_UInt32  res1:1;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_show_mv_y_pat:10;
        RBus_UInt32  kme_me2_vbuf_lbme_posi_debug_gen:1;
        RBus_UInt32  kme_me2_vbuf_ph_lbme_h_ratio:2;
        RBus_UInt32  kme_me2_vbuf_ph_lbme_v_ratio:2;
        RBus_UInt32  kme_me2_vbuf_show_candi_idx:6;
        RBus_UInt32  res1:11;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_phase_offset0:7;
        RBus_UInt32  kme_me2_vbuf_phase_offset1:7;
        RBus_UInt32  kme_me2_vbuf_phase_offset2:7;
        RBus_UInt32  kme_me2_vbuf_phase_offset3:7;
        RBus_UInt32  res1:4;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_phase_offset4:7;
        RBus_UInt32  kme_me2_vbuf_phase_gain0:6;
        RBus_UInt32  kme_me2_vbuf_phase_gain1:6;
        RBus_UInt32  kme_me2_vbuf_phase_gain2:6;
        RBus_UInt32  kme_me2_vbuf_phase_gain3:6;
        RBus_UInt32  res1:1;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_phase_gain4:6;
        RBus_UInt32  kme_me2_vbuf_orr_cnt_th:5;
        RBus_UInt32  kme_me2_vbuf_mv_valid_mode:1;
        RBus_UInt32  kme_me2_vbuf_pix_rim_left:10;
        RBus_UInt32  kme_me2_vbuf_pix_rim_right:10;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_pix_rim_top:10;
        RBus_UInt32  kme_me2_vbuf_pix_rim_bot:10;
        RBus_UInt32  kme_me2_vbuf_ac_bypass_tag:1;
        RBus_UInt32  kme_me2_vbuf_1st_ac_obme_mode:2;
        RBus_UInt32  kme_me2_vbuf_2nd_ac_obme_mode:2;
        RBus_UInt32  kme_me2_vbuf_fsearch_ac_obme_mode:2;
        RBus_UInt32  kme_me2_vbuf_dc_bypass_tag:1;
        RBus_UInt32  kme_me2_vbuf_1st_dc_obme_mode:2;
        RBus_UInt32  kme_me2_vbuf_2nd_dc_obme_mode:2;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_fsearch_dc_obme_mode:2;
        RBus_UInt32  kme_me2_vbuf_1st_dc_obme_mode_sel:1;
        RBus_UInt32  kme_me2_vbuf_2nd_dc_obme_mode_sel:1;
        RBus_UInt32  kme_me2_vbuf_fsearch_dc_obme_mode_sel:1;
        RBus_UInt32  kme_me2_vbuf_apl_erosion_en:1;
        RBus_UInt32  kme_me2_vbuf_apl_erosion_level:4;
        RBus_UInt32  kme_me2_vbuf_apl_erosion_hidx_shift:2;
        RBus_UInt32  kme_me2_vbuf_apl_erosion_hidx_coef:8;
        RBus_UInt32  kme_me2_vbuf_apl_erosion_vidx_shift:2;
        RBus_UInt32  kme_me2_vbuf_apl_erosion_vidx_coef:8;
        RBus_UInt32  kme_me2_vbuf_mv_invalid_sel:1;
        RBus_UInt32  res1:1;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_mvx_clip_range:8;
        RBus_UInt32  kme_me2_vbuf_mvy_clip_range:7;
        RBus_UInt32  kme_me2_vbuf_ac_tag_mode:1;
        RBus_UInt32  kme_me2_vbuf_dc_tag_mode:1;
        RBus_UInt32  kme_me2_row135to270_en:1;
        RBus_UInt32  kme_me2_row135to270_rd_interval:7;
        RBus_UInt32  kme_me2_row135to270_wait_row_nums:4;
        RBus_UInt32  kme_me2_vbuf2bv_dbg_en:1;
        RBus_UInt32  res1:2;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kme_me2_vbuf_1st_rd_num:22;
        RBus_UInt32  res1:10;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kme_me2_vbuf_2nd_rd_num:18;
        RBus_UInt32  res1:14;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kme_me2_vbuf_dm_pfv_err_cnt:8;
        RBus_UInt32  regr_kme_me2_vbuf_dm_pfv_fetch_cnt:18;
        RBus_UInt32  res1:6;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kme_me2_vbuf_dm_ppfv_err_cnt:8;
        RBus_UInt32  regr_kme_me2_vbuf_dm_ppfv_fetch_cnt:18;
        RBus_UInt32  res1:6;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kme_me2_vbuf_dm_ph_err_cnt:8;
        RBus_UInt32  regr_kme_me2_vbuf_dm_ph_fetch_cnt:16;
        RBus_UInt32  res1:8;
    };
}kme_me2_vbuf_top_kme_me2_vbuf_top_f4_RBUS;




#endif 


#endif 
