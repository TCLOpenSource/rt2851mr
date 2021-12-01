/**
* @file Merlin5_MEMC_KME_ME1_TOP0
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KME_ME1_TOP0_REG_H_
#define _RBUS_KME_ME1_TOP0_REG_H_

#include "rbus_types.h"



//  KME_ME1_TOP0 Register Address
#define  KME_ME1_TOP0_KME_ME1_TOP0_00                                           0x1809C400
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_reg_addr                                   "0xB809C400"
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_reg                                        0xB809C400
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_inst_addr                                  "0x0000"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_00_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_00_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_00_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_00_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_me1_ip_dc_pix_ad_data_shift                (24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_me1_ip_dc_pix_cor_thd_shift                (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_me1_ip_ac_flt_shft_shift                   (11)
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_me1_ip_ac_flt_mode_shift                   (9)
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_me1_ip_ac_flt_sel_shift                    (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_me1_ip_ac_norm_mode_shift                  (2)
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_me1_ip_dc_norm_mode_shift                  (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_me1_ip_dc_pix_ad_data_mask                 (0xFF000000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_me1_ip_dc_pix_cor_thd_mask                 (0x00FF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_me1_ip_ac_flt_shft_mask                    (0x00003800)
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_me1_ip_ac_flt_mode_mask                    (0x00000600)
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_me1_ip_ac_flt_sel_mask                     (0x00000100)
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_me1_ip_ac_norm_mode_mask                   (0x0000000C)
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_me1_ip_dc_norm_mode_mask                   (0x00000003)
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_me1_ip_dc_pix_ad_data(data)                (0xFF000000&((data)<<24))
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_me1_ip_dc_pix_cor_thd(data)                (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_me1_ip_ac_flt_shft(data)                   (0x00003800&((data)<<11))
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_me1_ip_ac_flt_mode(data)                   (0x00000600&((data)<<9))
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_me1_ip_ac_flt_sel(data)                    (0x00000100&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_me1_ip_ac_norm_mode(data)                  (0x0000000C&((data)<<2))
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_me1_ip_dc_norm_mode(data)                  (0x00000003&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_get_me1_ip_dc_pix_ad_data(data)            ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_get_me1_ip_dc_pix_cor_thd(data)            ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_get_me1_ip_ac_flt_shft(data)               ((0x00003800&(data))>>11)
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_get_me1_ip_ac_flt_mode(data)               ((0x00000600&(data))>>9)
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_get_me1_ip_ac_flt_sel(data)                ((0x00000100&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_get_me1_ip_ac_norm_mode(data)              ((0x0000000C&(data))>>2)
#define  KME_ME1_TOP0_KME_ME1_TOP0_00_get_me1_ip_dc_norm_mode(data)              (0x00000003&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_04                                           0x1809C404
#define  KME_ME1_TOP0_KME_ME1_TOP0_04_reg_addr                                   "0xB809C404"
#define  KME_ME1_TOP0_KME_ME1_TOP0_04_reg                                        0xB809C404
#define  KME_ME1_TOP0_KME_ME1_TOP0_04_inst_addr                                  "0x0001"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_04_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_04_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_04_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_04_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_04_me1_ip_ac_pix_sad_limt_shift               (24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_04_me1_ip_ac_pix_ad_data_shift                (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_04_me1_ip_ac_pix_cor_thd_shift                (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_04_me1_ip_dc_pix_sad_limt_shift               (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_04_me1_ip_ac_pix_sad_limt_mask                (0xFF000000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_04_me1_ip_ac_pix_ad_data_mask                 (0x00FF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_04_me1_ip_ac_pix_cor_thd_mask                 (0x0000FF00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_04_me1_ip_dc_pix_sad_limt_mask                (0x000000FF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_04_me1_ip_ac_pix_sad_limt(data)               (0xFF000000&((data)<<24))
#define  KME_ME1_TOP0_KME_ME1_TOP0_04_me1_ip_ac_pix_ad_data(data)                (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_04_me1_ip_ac_pix_cor_thd(data)                (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_04_me1_ip_dc_pix_sad_limt(data)               (0x000000FF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_04_get_me1_ip_ac_pix_sad_limt(data)           ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_04_get_me1_ip_ac_pix_ad_data(data)            ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_04_get_me1_ip_ac_pix_cor_thd(data)            ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_04_get_me1_ip_dc_pix_sad_limt(data)           (0x000000FF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_08                                           0x1809C408
#define  KME_ME1_TOP0_KME_ME1_TOP0_08_reg_addr                                   "0xB809C408"
#define  KME_ME1_TOP0_KME_ME1_TOP0_08_reg                                        0xB809C408
#define  KME_ME1_TOP0_KME_ME1_TOP0_08_inst_addr                                  "0x0002"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_08_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_08_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_08_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_08_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_08_me1_ip_mvd_cost_limt_shift                 (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_08_me1_ip_mvd_pgain_mode_shift                (12)
#define  KME_ME1_TOP0_KME_ME1_TOP0_08_me1_ip_mvd_dgain_mode_shift                (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_08_me1_ip_mvd_alp_mode_shift                  (4)
#define  KME_ME1_TOP0_KME_ME1_TOP0_08_me1_ip_psad_alp_mode_shift                 (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_08_me1_ip_mvd_cost_limt_mask                  (0x1FFF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_08_me1_ip_mvd_pgain_mode_mask                 (0x0000F000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_08_me1_ip_mvd_dgain_mode_mask                 (0x00000F00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_08_me1_ip_mvd_alp_mode_mask                   (0x000000F0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_08_me1_ip_psad_alp_mode_mask                  (0x0000000F)
#define  KME_ME1_TOP0_KME_ME1_TOP0_08_me1_ip_mvd_cost_limt(data)                 (0x1FFF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_08_me1_ip_mvd_pgain_mode(data)                (0x0000F000&((data)<<12))
#define  KME_ME1_TOP0_KME_ME1_TOP0_08_me1_ip_mvd_dgain_mode(data)                (0x00000F00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_08_me1_ip_mvd_alp_mode(data)                  (0x000000F0&((data)<<4))
#define  KME_ME1_TOP0_KME_ME1_TOP0_08_me1_ip_psad_alp_mode(data)                 (0x0000000F&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_08_get_me1_ip_mvd_cost_limt(data)             ((0x1FFF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_08_get_me1_ip_mvd_pgain_mode(data)            ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP0_KME_ME1_TOP0_08_get_me1_ip_mvd_dgain_mode(data)            ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_08_get_me1_ip_mvd_alp_mode(data)              ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP0_KME_ME1_TOP0_08_get_me1_ip_psad_alp_mode(data)             (0x0000000F&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_0C                                           0x1809C40C
#define  KME_ME1_TOP0_KME_ME1_TOP0_0C_reg_addr                                   "0xB809C40C"
#define  KME_ME1_TOP0_KME_ME1_TOP0_0C_reg                                        0xB809C40C
#define  KME_ME1_TOP0_KME_ME1_TOP0_0C_inst_addr                                  "0x0003"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_0C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_0C_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_0C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_0C_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_0C_me1_ip_gmvd_cost_limt_shift                (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_0C_me1_ip_gmvd_cost_limt_mask                 (0x00001FFF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_0C_me1_ip_gmvd_cost_limt(data)                (0x00001FFF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_0C_get_me1_ip_gmvd_cost_limt(data)            (0x00001FFF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_10                                           0x1809C410
#define  KME_ME1_TOP0_KME_ME1_TOP0_10_reg_addr                                   "0xB809C410"
#define  KME_ME1_TOP0_KME_ME1_TOP0_10_reg                                        0xB809C410
#define  KME_ME1_TOP0_KME_ME1_TOP0_10_inst_addr                                  "0x0004"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_10_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_10_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_10_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_10_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_10_me1_ip_adpt_cor_gain2_shift                (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_10_me1_ip_adpt_cor_gain1_shift                (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_10_me1_ip_adpt_cor_gain0_shift                (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_10_me1_ip_adpt_cor_gain2_mask                 (0x00FF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_10_me1_ip_adpt_cor_gain1_mask                 (0x0000FF00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_10_me1_ip_adpt_cor_gain0_mask                 (0x000000FF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_10_me1_ip_adpt_cor_gain2(data)                (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_10_me1_ip_adpt_cor_gain1(data)                (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_10_me1_ip_adpt_cor_gain0(data)                (0x000000FF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_10_get_me1_ip_adpt_cor_gain2(data)            ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_10_get_me1_ip_adpt_cor_gain1(data)            ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_10_get_me1_ip_adpt_cor_gain0(data)            (0x000000FF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_14                                           0x1809C414
#define  KME_ME1_TOP0_KME_ME1_TOP0_14_reg_addr                                   "0xB809C414"
#define  KME_ME1_TOP0_KME_ME1_TOP0_14_reg                                        0xB809C414
#define  KME_ME1_TOP0_KME_ME1_TOP0_14_inst_addr                                  "0x0005"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_14_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_14_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_14_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_14_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_14_me1_ip_adpt_cor_limt_shift                 (4)
#define  KME_ME1_TOP0_KME_ME1_TOP0_14_me1_ip_adpt_cor_mode_shift                 (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_14_me1_ip_adpt_cor_limt_mask                  (0x00003FF0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_14_me1_ip_adpt_cor_mode_mask                  (0x0000000F)
#define  KME_ME1_TOP0_KME_ME1_TOP0_14_me1_ip_adpt_cor_limt(data)                 (0x00003FF0&((data)<<4))
#define  KME_ME1_TOP0_KME_ME1_TOP0_14_me1_ip_adpt_cor_mode(data)                 (0x0000000F&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_14_get_me1_ip_adpt_cor_limt(data)             ((0x00003FF0&(data))>>4)
#define  KME_ME1_TOP0_KME_ME1_TOP0_14_get_me1_ip_adpt_cor_mode(data)             (0x0000000F&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_18                                           0x1809C418
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_reg_addr                                   "0xB809C418"
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_reg                                        0xB809C418
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_inst_addr                                  "0x0006"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_18_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_18_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_18_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_18_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_me1_ip_adptpnt_zmv_gain_shift              (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_me1_ip_adptpnt_rnd_mode_shift              (4)
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_me1_ip_adptpnt_logo_en_shift               (3)
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_me1_ip_adptpnt_rnd_en_shift                (2)
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_me1_ip_adptpnt_gmv_en_shift                (1)
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_me1_ip_adptpnt_zmv_en_shift                (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_me1_ip_adptpnt_zmv_gain_mask               (0x0003FF00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_me1_ip_adptpnt_rnd_mode_mask               (0x000000F0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_me1_ip_adptpnt_logo_en_mask                (0x00000008)
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_me1_ip_adptpnt_rnd_en_mask                 (0x00000004)
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_me1_ip_adptpnt_gmv_en_mask                 (0x00000002)
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_me1_ip_adptpnt_zmv_en_mask                 (0x00000001)
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_me1_ip_adptpnt_zmv_gain(data)              (0x0003FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_me1_ip_adptpnt_rnd_mode(data)              (0x000000F0&((data)<<4))
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_me1_ip_adptpnt_logo_en(data)               (0x00000008&((data)<<3))
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_me1_ip_adptpnt_rnd_en(data)                (0x00000004&((data)<<2))
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_me1_ip_adptpnt_gmv_en(data)                (0x00000002&((data)<<1))
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_me1_ip_adptpnt_zmv_en(data)                (0x00000001&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_get_me1_ip_adptpnt_zmv_gain(data)          ((0x0003FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_get_me1_ip_adptpnt_rnd_mode(data)          ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_get_me1_ip_adptpnt_logo_en(data)           ((0x00000008&(data))>>3)
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_get_me1_ip_adptpnt_rnd_en(data)            ((0x00000004&(data))>>2)
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_get_me1_ip_adptpnt_gmv_en(data)            ((0x00000002&(data))>>1)
#define  KME_ME1_TOP0_KME_ME1_TOP0_18_get_me1_ip_adptpnt_zmv_en(data)            (0x00000001&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_1C                                           0x1809C41C
#define  KME_ME1_TOP0_KME_ME1_TOP0_1C_reg_addr                                   "0xB809C41C"
#define  KME_ME1_TOP0_KME_ME1_TOP0_1C_reg                                        0xB809C41C
#define  KME_ME1_TOP0_KME_ME1_TOP0_1C_inst_addr                                  "0x0007"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_1C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_1C_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_1C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_1C_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_1C_me1_ip_cddpnt_st3_shift                    (24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_1C_me1_ip_cddpnt_st2_shift                    (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_1C_me1_ip_cddpnt_st1_shift                    (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_1C_me1_ip_cddpnt_st0_shift                    (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_1C_me1_ip_cddpnt_st3_mask                     (0xFF000000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_1C_me1_ip_cddpnt_st2_mask                     (0x00FF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_1C_me1_ip_cddpnt_st1_mask                     (0x0000FF00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_1C_me1_ip_cddpnt_st0_mask                     (0x000000FF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_1C_me1_ip_cddpnt_st3(data)                    (0xFF000000&((data)<<24))
#define  KME_ME1_TOP0_KME_ME1_TOP0_1C_me1_ip_cddpnt_st2(data)                    (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_1C_me1_ip_cddpnt_st1(data)                    (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_1C_me1_ip_cddpnt_st0(data)                    (0x000000FF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_1C_get_me1_ip_cddpnt_st3(data)                ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_1C_get_me1_ip_cddpnt_st2(data)                ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_1C_get_me1_ip_cddpnt_st1(data)                ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_1C_get_me1_ip_cddpnt_st0(data)                (0x000000FF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_20                                           0x1809C420
#define  KME_ME1_TOP0_KME_ME1_TOP0_20_reg_addr                                   "0xB809C420"
#define  KME_ME1_TOP0_KME_ME1_TOP0_20_reg                                        0xB809C420
#define  KME_ME1_TOP0_KME_ME1_TOP0_20_inst_addr                                  "0x0008"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_20_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_20_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_20_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_20_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_20_me1_ip_cddpnt_st7_shift                    (24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_20_me1_ip_cddpnt_st6_shift                    (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_20_me1_ip_cddpnt_st5_shift                    (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_20_me1_ip_cddpnt_st4_shift                    (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_20_me1_ip_cddpnt_st7_mask                     (0xFF000000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_20_me1_ip_cddpnt_st6_mask                     (0x00FF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_20_me1_ip_cddpnt_st5_mask                     (0x0000FF00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_20_me1_ip_cddpnt_st4_mask                     (0x000000FF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_20_me1_ip_cddpnt_st7(data)                    (0xFF000000&((data)<<24))
#define  KME_ME1_TOP0_KME_ME1_TOP0_20_me1_ip_cddpnt_st6(data)                    (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_20_me1_ip_cddpnt_st5(data)                    (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_20_me1_ip_cddpnt_st4(data)                    (0x000000FF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_20_get_me1_ip_cddpnt_st7(data)                ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_20_get_me1_ip_cddpnt_st6(data)                ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_20_get_me1_ip_cddpnt_st5(data)                ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_20_get_me1_ip_cddpnt_st4(data)                (0x000000FF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_24                                           0x1809C424
#define  KME_ME1_TOP0_KME_ME1_TOP0_24_reg_addr                                   "0xB809C424"
#define  KME_ME1_TOP0_KME_ME1_TOP0_24_reg                                        0xB809C424
#define  KME_ME1_TOP0_KME_ME1_TOP0_24_inst_addr                                  "0x0009"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_24_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_24_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_24_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_24_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_24_me1_ip_cddpnt_rnd1_shift                   (24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_24_me1_ip_cddpnt_rnd0_shift                   (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_24_me1_ip_cddpnt_st9_shift                    (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_24_me1_ip_cddpnt_st8_shift                    (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_24_me1_ip_cddpnt_rnd1_mask                    (0xFF000000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_24_me1_ip_cddpnt_rnd0_mask                    (0x00FF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_24_me1_ip_cddpnt_st9_mask                     (0x0000FF00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_24_me1_ip_cddpnt_st8_mask                     (0x000000FF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_24_me1_ip_cddpnt_rnd1(data)                   (0xFF000000&((data)<<24))
#define  KME_ME1_TOP0_KME_ME1_TOP0_24_me1_ip_cddpnt_rnd0(data)                   (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_24_me1_ip_cddpnt_st9(data)                    (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_24_me1_ip_cddpnt_st8(data)                    (0x000000FF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_24_get_me1_ip_cddpnt_rnd1(data)               ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_24_get_me1_ip_cddpnt_rnd0(data)               ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_24_get_me1_ip_cddpnt_st9(data)                ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_24_get_me1_ip_cddpnt_st8(data)                (0x000000FF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_28                                           0x1809C428
#define  KME_ME1_TOP0_KME_ME1_TOP0_28_reg_addr                                   "0xB809C428"
#define  KME_ME1_TOP0_KME_ME1_TOP0_28_reg                                        0xB809C428
#define  KME_ME1_TOP0_KME_ME1_TOP0_28_inst_addr                                  "0x000A"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_28_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_28_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_28_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_28_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_28_me1_ip_cddpnt_zmv_shift                    (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_28_me1_ip_cddpnt_rnd3_shift                   (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_28_me1_ip_cddpnt_rnd2_shift                   (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_28_me1_ip_cddpnt_zmv_mask                     (0x1FFF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_28_me1_ip_cddpnt_rnd3_mask                    (0x0000FF00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_28_me1_ip_cddpnt_rnd2_mask                    (0x000000FF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_28_me1_ip_cddpnt_zmv(data)                    (0x1FFF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_28_me1_ip_cddpnt_rnd3(data)                   (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_28_me1_ip_cddpnt_rnd2(data)                   (0x000000FF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_28_get_me1_ip_cddpnt_zmv(data)                ((0x1FFF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_28_get_me1_ip_cddpnt_rnd3(data)               ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_28_get_me1_ip_cddpnt_rnd2(data)               (0x000000FF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_2C                                           0x1809C42C
#define  KME_ME1_TOP0_KME_ME1_TOP0_2C_reg_addr                                   "0xB809C42C"
#define  KME_ME1_TOP0_KME_ME1_TOP0_2C_reg                                        0xB809C42C
#define  KME_ME1_TOP0_KME_ME1_TOP0_2C_inst_addr                                  "0x000B"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_2C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_2C_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_2C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_2C_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_2C_me1_ip_cddpnt_ppi_shift                    (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_2C_me1_ip_cddpnt_gmv_shift                    (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_2C_me1_ip_cddpnt_ppi_mask                     (0x1FFF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_2C_me1_ip_cddpnt_gmv_mask                     (0x00001FFF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_2C_me1_ip_cddpnt_ppi(data)                    (0x1FFF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_2C_me1_ip_cddpnt_gmv(data)                    (0x00001FFF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_2C_get_me1_ip_cddpnt_ppi(data)                ((0x1FFF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_2C_get_me1_ip_cddpnt_gmv(data)                (0x00001FFF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_30                                           0x1809C430
#define  KME_ME1_TOP0_KME_ME1_TOP0_30_reg_addr                                   "0xB809C430"
#define  KME_ME1_TOP0_KME_ME1_TOP0_30_reg                                        0xB809C430
#define  KME_ME1_TOP0_KME_ME1_TOP0_30_inst_addr                                  "0x000C"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_30_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_30_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_30_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_30_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_30_me1_ip_dummy0_shift                        (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_30_me1_ip_dummy0_mask                         (0xFFFFFFFF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_30_me1_ip_dummy0(data)                        (0xFFFFFFFF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_30_get_me1_ip_dummy0(data)                    (0xFFFFFFFF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_34                                           0x1809C434
#define  KME_ME1_TOP0_KME_ME1_TOP0_34_reg_addr                                   "0xB809C434"
#define  KME_ME1_TOP0_KME_ME1_TOP0_34_reg                                        0xB809C434
#define  KME_ME1_TOP0_KME_ME1_TOP0_34_inst_addr                                  "0x000D"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_34_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_34_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_34_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_34_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_34_me1_ip_mm_mvd_thd_shift                    (22)
#define  KME_ME1_TOP0_KME_ME1_TOP0_34_me1_ip_mm_sadth_slope_shift                (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_34_me1_ip_mm_sadth_base_shift                 (1)
#define  KME_ME1_TOP0_KME_ME1_TOP0_34_me1_ip_mm_en_shift                         (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_34_me1_ip_mm_mvd_thd_mask                     (0xFFC00000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_34_me1_ip_mm_sadth_slope_mask                 (0x003F0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_34_me1_ip_mm_sadth_base_mask                  (0x00003FFE)
#define  KME_ME1_TOP0_KME_ME1_TOP0_34_me1_ip_mm_en_mask                          (0x00000001)
#define  KME_ME1_TOP0_KME_ME1_TOP0_34_me1_ip_mm_mvd_thd(data)                    (0xFFC00000&((data)<<22))
#define  KME_ME1_TOP0_KME_ME1_TOP0_34_me1_ip_mm_sadth_slope(data)                (0x003F0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_34_me1_ip_mm_sadth_base(data)                 (0x00003FFE&((data)<<1))
#define  KME_ME1_TOP0_KME_ME1_TOP0_34_me1_ip_mm_en(data)                         (0x00000001&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_34_get_me1_ip_mm_mvd_thd(data)                ((0xFFC00000&(data))>>22)
#define  KME_ME1_TOP0_KME_ME1_TOP0_34_get_me1_ip_mm_sadth_slope(data)            ((0x003F0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_34_get_me1_ip_mm_sadth_base(data)             ((0x00003FFE&(data))>>1)
#define  KME_ME1_TOP0_KME_ME1_TOP0_34_get_me1_ip_mm_en(data)                     (0x00000001&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_38                                           0x1809C438
#define  KME_ME1_TOP0_KME_ME1_TOP0_38_reg_addr                                   "0xB809C438"
#define  KME_ME1_TOP0_KME_ME1_TOP0_38_reg                                        0xB809C438
#define  KME_ME1_TOP0_KME_ME1_TOP0_38_inst_addr                                  "0x000E"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_38_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_38_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_38_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_38_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_38_me1_mv_invalid_sad_sel_shift               (15)
#define  KME_ME1_TOP0_KME_ME1_TOP0_38_me1_ip_mm_psad_norm_thd_shift              (2)
#define  KME_ME1_TOP0_KME_ME1_TOP0_38_me1_ip_mm_psad_norm_en_shift               (1)
#define  KME_ME1_TOP0_KME_ME1_TOP0_38_me1_ip_mm_invalid_sel_shift                (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_38_me1_mv_invalid_sad_sel_mask                (0x00008000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_38_me1_ip_mm_psad_norm_thd_mask               (0x00007FFC)
#define  KME_ME1_TOP0_KME_ME1_TOP0_38_me1_ip_mm_psad_norm_en_mask                (0x00000002)
#define  KME_ME1_TOP0_KME_ME1_TOP0_38_me1_ip_mm_invalid_sel_mask                 (0x00000001)
#define  KME_ME1_TOP0_KME_ME1_TOP0_38_me1_mv_invalid_sad_sel(data)               (0x00008000&((data)<<15))
#define  KME_ME1_TOP0_KME_ME1_TOP0_38_me1_ip_mm_psad_norm_thd(data)              (0x00007FFC&((data)<<2))
#define  KME_ME1_TOP0_KME_ME1_TOP0_38_me1_ip_mm_psad_norm_en(data)               (0x00000002&((data)<<1))
#define  KME_ME1_TOP0_KME_ME1_TOP0_38_me1_ip_mm_invalid_sel(data)                (0x00000001&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_38_get_me1_mv_invalid_sad_sel(data)           ((0x00008000&(data))>>15)
#define  KME_ME1_TOP0_KME_ME1_TOP0_38_get_me1_ip_mm_psad_norm_thd(data)          ((0x00007FFC&(data))>>2)
#define  KME_ME1_TOP0_KME_ME1_TOP0_38_get_me1_ip_mm_psad_norm_en(data)           ((0x00000002&(data))>>1)
#define  KME_ME1_TOP0_KME_ME1_TOP0_38_get_me1_ip_mm_invalid_sel(data)            (0x00000001&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_40                                           0x1809C440
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_reg_addr                                   "0xB809C440"
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_reg                                        0xB809C440
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_inst_addr                                  "0x000F"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_40_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_40_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_40_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_40_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_me1_pi_dc_pix_ad_data_shift                (24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_me1_pi_dc_pix_cor_thd_shift                (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_me1_pi_ac_flt_shft_shift                   (11)
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_me1_pi_ac_flt_mode_shift                   (9)
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_me1_pi_ac_flt_sel_shift                    (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_me1_pi_ac_norm_mode_shift                  (2)
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_me1_pi_dc_norm_mode_shift                  (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_me1_pi_dc_pix_ad_data_mask                 (0xFF000000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_me1_pi_dc_pix_cor_thd_mask                 (0x00FF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_me1_pi_ac_flt_shft_mask                    (0x00003800)
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_me1_pi_ac_flt_mode_mask                    (0x00000600)
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_me1_pi_ac_flt_sel_mask                     (0x00000100)
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_me1_pi_ac_norm_mode_mask                   (0x0000000C)
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_me1_pi_dc_norm_mode_mask                   (0x00000003)
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_me1_pi_dc_pix_ad_data(data)                (0xFF000000&((data)<<24))
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_me1_pi_dc_pix_cor_thd(data)                (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_me1_pi_ac_flt_shft(data)                   (0x00003800&((data)<<11))
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_me1_pi_ac_flt_mode(data)                   (0x00000600&((data)<<9))
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_me1_pi_ac_flt_sel(data)                    (0x00000100&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_me1_pi_ac_norm_mode(data)                  (0x0000000C&((data)<<2))
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_me1_pi_dc_norm_mode(data)                  (0x00000003&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_get_me1_pi_dc_pix_ad_data(data)            ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_get_me1_pi_dc_pix_cor_thd(data)            ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_get_me1_pi_ac_flt_shft(data)               ((0x00003800&(data))>>11)
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_get_me1_pi_ac_flt_mode(data)               ((0x00000600&(data))>>9)
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_get_me1_pi_ac_flt_sel(data)                ((0x00000100&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_get_me1_pi_ac_norm_mode(data)              ((0x0000000C&(data))>>2)
#define  KME_ME1_TOP0_KME_ME1_TOP0_40_get_me1_pi_dc_norm_mode(data)              (0x00000003&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_44                                           0x1809C444
#define  KME_ME1_TOP0_KME_ME1_TOP0_44_reg_addr                                   "0xB809C444"
#define  KME_ME1_TOP0_KME_ME1_TOP0_44_reg                                        0xB809C444
#define  KME_ME1_TOP0_KME_ME1_TOP0_44_inst_addr                                  "0x0010"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_44_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_44_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_44_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_44_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_44_me1_pi_ac_pix_sad_limt_shift               (24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_44_me1_pi_ac_pix_ad_data_shift                (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_44_me1_pi_ac_pix_cor_thd_shift                (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_44_me1_pi_dc_pix_sad_limt_shift               (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_44_me1_pi_ac_pix_sad_limt_mask                (0xFF000000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_44_me1_pi_ac_pix_ad_data_mask                 (0x00FF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_44_me1_pi_ac_pix_cor_thd_mask                 (0x0000FF00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_44_me1_pi_dc_pix_sad_limt_mask                (0x000000FF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_44_me1_pi_ac_pix_sad_limt(data)               (0xFF000000&((data)<<24))
#define  KME_ME1_TOP0_KME_ME1_TOP0_44_me1_pi_ac_pix_ad_data(data)                (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_44_me1_pi_ac_pix_cor_thd(data)                (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_44_me1_pi_dc_pix_sad_limt(data)               (0x000000FF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_44_get_me1_pi_ac_pix_sad_limt(data)           ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_44_get_me1_pi_ac_pix_ad_data(data)            ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_44_get_me1_pi_ac_pix_cor_thd(data)            ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_44_get_me1_pi_dc_pix_sad_limt(data)           (0x000000FF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_48                                           0x1809C448
#define  KME_ME1_TOP0_KME_ME1_TOP0_48_reg_addr                                   "0xB809C448"
#define  KME_ME1_TOP0_KME_ME1_TOP0_48_reg                                        0xB809C448
#define  KME_ME1_TOP0_KME_ME1_TOP0_48_inst_addr                                  "0x0011"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_48_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_48_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_48_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_48_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_48_me1_pi_mvd_cost_limt_shift                 (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_48_me1_pi_mvd_pgain_mode_shift                (12)
#define  KME_ME1_TOP0_KME_ME1_TOP0_48_me1_pi_mvd_dgain_mode_shift                (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_48_me1_pi_mvd_alp_mode_shift                  (4)
#define  KME_ME1_TOP0_KME_ME1_TOP0_48_me1_pi_psad_alp_mode_shift                 (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_48_me1_pi_mvd_cost_limt_mask                  (0x1FFF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_48_me1_pi_mvd_pgain_mode_mask                 (0x0000F000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_48_me1_pi_mvd_dgain_mode_mask                 (0x00000F00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_48_me1_pi_mvd_alp_mode_mask                   (0x000000F0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_48_me1_pi_psad_alp_mode_mask                  (0x0000000F)
#define  KME_ME1_TOP0_KME_ME1_TOP0_48_me1_pi_mvd_cost_limt(data)                 (0x1FFF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_48_me1_pi_mvd_pgain_mode(data)                (0x0000F000&((data)<<12))
#define  KME_ME1_TOP0_KME_ME1_TOP0_48_me1_pi_mvd_dgain_mode(data)                (0x00000F00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_48_me1_pi_mvd_alp_mode(data)                  (0x000000F0&((data)<<4))
#define  KME_ME1_TOP0_KME_ME1_TOP0_48_me1_pi_psad_alp_mode(data)                 (0x0000000F&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_48_get_me1_pi_mvd_cost_limt(data)             ((0x1FFF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_48_get_me1_pi_mvd_pgain_mode(data)            ((0x0000F000&(data))>>12)
#define  KME_ME1_TOP0_KME_ME1_TOP0_48_get_me1_pi_mvd_dgain_mode(data)            ((0x00000F00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_48_get_me1_pi_mvd_alp_mode(data)              ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP0_KME_ME1_TOP0_48_get_me1_pi_psad_alp_mode(data)             (0x0000000F&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_4C                                           0x1809C44C
#define  KME_ME1_TOP0_KME_ME1_TOP0_4C_reg_addr                                   "0xB809C44C"
#define  KME_ME1_TOP0_KME_ME1_TOP0_4C_reg                                        0xB809C44C
#define  KME_ME1_TOP0_KME_ME1_TOP0_4C_inst_addr                                  "0x0012"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_4C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_4C_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_4C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_4C_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_4C_me1_pi_gmvd_cost_limt_shift                (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_4C_me1_pi_gmvd_cost_limt_mask                 (0x00001FFF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_4C_me1_pi_gmvd_cost_limt(data)                (0x00001FFF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_4C_get_me1_pi_gmvd_cost_limt(data)            (0x00001FFF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_50                                           0x1809C450
#define  KME_ME1_TOP0_KME_ME1_TOP0_50_reg_addr                                   "0xB809C450"
#define  KME_ME1_TOP0_KME_ME1_TOP0_50_reg                                        0xB809C450
#define  KME_ME1_TOP0_KME_ME1_TOP0_50_inst_addr                                  "0x0013"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_50_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_50_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_50_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_50_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_50_me1_pi_adpt_cor_gain2_shift                (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_50_me1_pi_adpt_cor_gain1_shift                (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_50_me1_pi_adpt_cor_gain0_shift                (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_50_me1_pi_adpt_cor_gain2_mask                 (0x00FF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_50_me1_pi_adpt_cor_gain1_mask                 (0x0000FF00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_50_me1_pi_adpt_cor_gain0_mask                 (0x000000FF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_50_me1_pi_adpt_cor_gain2(data)                (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_50_me1_pi_adpt_cor_gain1(data)                (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_50_me1_pi_adpt_cor_gain0(data)                (0x000000FF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_50_get_me1_pi_adpt_cor_gain2(data)            ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_50_get_me1_pi_adpt_cor_gain1(data)            ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_50_get_me1_pi_adpt_cor_gain0(data)            (0x000000FF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_54                                           0x1809C454
#define  KME_ME1_TOP0_KME_ME1_TOP0_54_reg_addr                                   "0xB809C454"
#define  KME_ME1_TOP0_KME_ME1_TOP0_54_reg                                        0xB809C454
#define  KME_ME1_TOP0_KME_ME1_TOP0_54_inst_addr                                  "0x0014"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_54_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_54_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_54_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_54_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_54_me1_pi_adpt_cor_limt_shift                 (4)
#define  KME_ME1_TOP0_KME_ME1_TOP0_54_me1_pi_adpt_cor_mode_shift                 (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_54_me1_pi_adpt_cor_limt_mask                  (0x00003FF0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_54_me1_pi_adpt_cor_mode_mask                  (0x0000000F)
#define  KME_ME1_TOP0_KME_ME1_TOP0_54_me1_pi_adpt_cor_limt(data)                 (0x00003FF0&((data)<<4))
#define  KME_ME1_TOP0_KME_ME1_TOP0_54_me1_pi_adpt_cor_mode(data)                 (0x0000000F&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_54_get_me1_pi_adpt_cor_limt(data)             ((0x00003FF0&(data))>>4)
#define  KME_ME1_TOP0_KME_ME1_TOP0_54_get_me1_pi_adpt_cor_mode(data)             (0x0000000F&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_58                                           0x1809C458
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_reg_addr                                   "0xB809C458"
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_reg                                        0xB809C458
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_inst_addr                                  "0x0015"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_58_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_58_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_58_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_58_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_me1_pi_adptpnt_zmv_gain_shift              (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_me1_pi_adptpnt_rnd_mode_shift              (4)
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_me1_pi_adptpnt_logo_en_shift               (3)
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_me1_pi_adptpnt_rnd_en_shift                (2)
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_me1_pi_adptpnt_gmv_en_shift                (1)
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_me1_pi_adptpnt_zmv_en_shift                (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_me1_pi_adptpnt_zmv_gain_mask               (0x0003FF00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_me1_pi_adptpnt_rnd_mode_mask               (0x000000F0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_me1_pi_adptpnt_logo_en_mask                (0x00000008)
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_me1_pi_adptpnt_rnd_en_mask                 (0x00000004)
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_me1_pi_adptpnt_gmv_en_mask                 (0x00000002)
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_me1_pi_adptpnt_zmv_en_mask                 (0x00000001)
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_me1_pi_adptpnt_zmv_gain(data)              (0x0003FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_me1_pi_adptpnt_rnd_mode(data)              (0x000000F0&((data)<<4))
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_me1_pi_adptpnt_logo_en(data)               (0x00000008&((data)<<3))
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_me1_pi_adptpnt_rnd_en(data)                (0x00000004&((data)<<2))
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_me1_pi_adptpnt_gmv_en(data)                (0x00000002&((data)<<1))
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_me1_pi_adptpnt_zmv_en(data)                (0x00000001&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_get_me1_pi_adptpnt_zmv_gain(data)          ((0x0003FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_get_me1_pi_adptpnt_rnd_mode(data)          ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_get_me1_pi_adptpnt_logo_en(data)           ((0x00000008&(data))>>3)
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_get_me1_pi_adptpnt_rnd_en(data)            ((0x00000004&(data))>>2)
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_get_me1_pi_adptpnt_gmv_en(data)            ((0x00000002&(data))>>1)
#define  KME_ME1_TOP0_KME_ME1_TOP0_58_get_me1_pi_adptpnt_zmv_en(data)            (0x00000001&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_5C                                           0x1809C45C
#define  KME_ME1_TOP0_KME_ME1_TOP0_5C_reg_addr                                   "0xB809C45C"
#define  KME_ME1_TOP0_KME_ME1_TOP0_5C_reg                                        0xB809C45C
#define  KME_ME1_TOP0_KME_ME1_TOP0_5C_inst_addr                                  "0x0016"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_5C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_5C_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_5C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_5C_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_5C_me1_pi_cddpnt_st3_shift                    (24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_5C_me1_pi_cddpnt_st2_shift                    (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_5C_me1_pi_cddpnt_st1_shift                    (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_5C_me1_pi_cddpnt_st0_shift                    (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_5C_me1_pi_cddpnt_st3_mask                     (0xFF000000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_5C_me1_pi_cddpnt_st2_mask                     (0x00FF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_5C_me1_pi_cddpnt_st1_mask                     (0x0000FF00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_5C_me1_pi_cddpnt_st0_mask                     (0x000000FF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_5C_me1_pi_cddpnt_st3(data)                    (0xFF000000&((data)<<24))
#define  KME_ME1_TOP0_KME_ME1_TOP0_5C_me1_pi_cddpnt_st2(data)                    (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_5C_me1_pi_cddpnt_st1(data)                    (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_5C_me1_pi_cddpnt_st0(data)                    (0x000000FF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_5C_get_me1_pi_cddpnt_st3(data)                ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_5C_get_me1_pi_cddpnt_st2(data)                ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_5C_get_me1_pi_cddpnt_st1(data)                ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_5C_get_me1_pi_cddpnt_st0(data)                (0x000000FF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_60                                           0x1809C460
#define  KME_ME1_TOP0_KME_ME1_TOP0_60_reg_addr                                   "0xB809C460"
#define  KME_ME1_TOP0_KME_ME1_TOP0_60_reg                                        0xB809C460
#define  KME_ME1_TOP0_KME_ME1_TOP0_60_inst_addr                                  "0x0017"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_60_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_60_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_60_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_60_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_60_me1_pi_cddpnt_st7_shift                    (24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_60_me1_pi_cddpnt_st6_shift                    (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_60_me1_pi_cddpnt_st5_shift                    (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_60_me1_pi_cddpnt_st4_shift                    (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_60_me1_pi_cddpnt_st7_mask                     (0xFF000000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_60_me1_pi_cddpnt_st6_mask                     (0x00FF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_60_me1_pi_cddpnt_st5_mask                     (0x0000FF00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_60_me1_pi_cddpnt_st4_mask                     (0x000000FF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_60_me1_pi_cddpnt_st7(data)                    (0xFF000000&((data)<<24))
#define  KME_ME1_TOP0_KME_ME1_TOP0_60_me1_pi_cddpnt_st6(data)                    (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_60_me1_pi_cddpnt_st5(data)                    (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_60_me1_pi_cddpnt_st4(data)                    (0x000000FF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_60_get_me1_pi_cddpnt_st7(data)                ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_60_get_me1_pi_cddpnt_st6(data)                ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_60_get_me1_pi_cddpnt_st5(data)                ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_60_get_me1_pi_cddpnt_st4(data)                (0x000000FF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_64                                           0x1809C464
#define  KME_ME1_TOP0_KME_ME1_TOP0_64_reg_addr                                   "0xB809C464"
#define  KME_ME1_TOP0_KME_ME1_TOP0_64_reg                                        0xB809C464
#define  KME_ME1_TOP0_KME_ME1_TOP0_64_inst_addr                                  "0x0018"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_64_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_64_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_64_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_64_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_64_me1_pi_cddpnt_rnd1_shift                   (24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_64_me1_pi_cddpnt_rnd0_shift                   (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_64_me1_pi_cddpnt_st9_shift                    (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_64_me1_pi_cddpnt_st8_shift                    (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_64_me1_pi_cddpnt_rnd1_mask                    (0xFF000000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_64_me1_pi_cddpnt_rnd0_mask                    (0x00FF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_64_me1_pi_cddpnt_st9_mask                     (0x0000FF00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_64_me1_pi_cddpnt_st8_mask                     (0x000000FF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_64_me1_pi_cddpnt_rnd1(data)                   (0xFF000000&((data)<<24))
#define  KME_ME1_TOP0_KME_ME1_TOP0_64_me1_pi_cddpnt_rnd0(data)                   (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_64_me1_pi_cddpnt_st9(data)                    (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_64_me1_pi_cddpnt_st8(data)                    (0x000000FF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_64_get_me1_pi_cddpnt_rnd1(data)               ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_64_get_me1_pi_cddpnt_rnd0(data)               ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_64_get_me1_pi_cddpnt_st9(data)                ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_64_get_me1_pi_cddpnt_st8(data)                (0x000000FF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_68                                           0x1809C468
#define  KME_ME1_TOP0_KME_ME1_TOP0_68_reg_addr                                   "0xB809C468"
#define  KME_ME1_TOP0_KME_ME1_TOP0_68_reg                                        0xB809C468
#define  KME_ME1_TOP0_KME_ME1_TOP0_68_inst_addr                                  "0x0019"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_68_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_68_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_68_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_68_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_68_me1_pi_cddpnt_zmv_shift                    (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_68_me1_pi_cddpnt_rnd3_shift                   (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_68_me1_pi_cddpnt_rnd2_shift                   (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_68_me1_pi_cddpnt_zmv_mask                     (0x1FFF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_68_me1_pi_cddpnt_rnd3_mask                    (0x0000FF00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_68_me1_pi_cddpnt_rnd2_mask                    (0x000000FF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_68_me1_pi_cddpnt_zmv(data)                    (0x1FFF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_68_me1_pi_cddpnt_rnd3(data)                   (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_68_me1_pi_cddpnt_rnd2(data)                   (0x000000FF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_68_get_me1_pi_cddpnt_zmv(data)                ((0x1FFF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_68_get_me1_pi_cddpnt_rnd3(data)               ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_68_get_me1_pi_cddpnt_rnd2(data)               (0x000000FF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_6C                                           0x1809C46C
#define  KME_ME1_TOP0_KME_ME1_TOP0_6C_reg_addr                                   "0xB809C46C"
#define  KME_ME1_TOP0_KME_ME1_TOP0_6C_reg                                        0xB809C46C
#define  KME_ME1_TOP0_KME_ME1_TOP0_6C_inst_addr                                  "0x001A"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_6C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_6C_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_6C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_6C_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_6C_me1_pi_cddpnt_gmv_shift                    (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_6C_me1_pi_cddpnt_gmv_mask                     (0x00001FFF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_6C_me1_pi_cddpnt_gmv(data)                    (0x00001FFF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_6C_get_me1_pi_cddpnt_gmv(data)                (0x00001FFF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_70                                           0x1809C470
#define  KME_ME1_TOP0_KME_ME1_TOP0_70_reg_addr                                   "0xB809C470"
#define  KME_ME1_TOP0_KME_ME1_TOP0_70_reg                                        0xB809C470
#define  KME_ME1_TOP0_KME_ME1_TOP0_70_inst_addr                                  "0x001B"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_70_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_70_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_70_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_70_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_70_me1_pi_dummy0_shift                        (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_70_me1_pi_dummy0_mask                         (0xFFFFFFFF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_70_me1_pi_dummy0(data)                        (0xFFFFFFFF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_70_get_me1_pi_dummy0(data)                    (0xFFFFFFFF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_74                                           0x1809C474
#define  KME_ME1_TOP0_KME_ME1_TOP0_74_reg_addr                                   "0xB809C474"
#define  KME_ME1_TOP0_KME_ME1_TOP0_74_reg                                        0xB809C474
#define  KME_ME1_TOP0_KME_ME1_TOP0_74_inst_addr                                  "0x001C"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_74_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_74_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_74_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_74_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_74_me1_pi_mm_mvd_thd_shift                    (22)
#define  KME_ME1_TOP0_KME_ME1_TOP0_74_me1_pi_mm_sadth_slope_shift                (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_74_me1_pi_mm_sadth_base_shift                 (1)
#define  KME_ME1_TOP0_KME_ME1_TOP0_74_me1_pi_mm_en_shift                         (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_74_me1_pi_mm_mvd_thd_mask                     (0xFFC00000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_74_me1_pi_mm_sadth_slope_mask                 (0x003F0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_74_me1_pi_mm_sadth_base_mask                  (0x00003FFE)
#define  KME_ME1_TOP0_KME_ME1_TOP0_74_me1_pi_mm_en_mask                          (0x00000001)
#define  KME_ME1_TOP0_KME_ME1_TOP0_74_me1_pi_mm_mvd_thd(data)                    (0xFFC00000&((data)<<22))
#define  KME_ME1_TOP0_KME_ME1_TOP0_74_me1_pi_mm_sadth_slope(data)                (0x003F0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_74_me1_pi_mm_sadth_base(data)                 (0x00003FFE&((data)<<1))
#define  KME_ME1_TOP0_KME_ME1_TOP0_74_me1_pi_mm_en(data)                         (0x00000001&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_74_get_me1_pi_mm_mvd_thd(data)                ((0xFFC00000&(data))>>22)
#define  KME_ME1_TOP0_KME_ME1_TOP0_74_get_me1_pi_mm_sadth_slope(data)            ((0x003F0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_74_get_me1_pi_mm_sadth_base(data)             ((0x00003FFE&(data))>>1)
#define  KME_ME1_TOP0_KME_ME1_TOP0_74_get_me1_pi_mm_en(data)                     (0x00000001&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_78                                           0x1809C478
#define  KME_ME1_TOP0_KME_ME1_TOP0_78_reg_addr                                   "0xB809C478"
#define  KME_ME1_TOP0_KME_ME1_TOP0_78_reg                                        0xB809C478
#define  KME_ME1_TOP0_KME_ME1_TOP0_78_inst_addr                                  "0x001D"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_78_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_78_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_78_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_78_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_78_me1_pi_mm_psad_norm_thd_shift              (2)
#define  KME_ME1_TOP0_KME_ME1_TOP0_78_me1_pi_mm_psad_norm_en_shift               (1)
#define  KME_ME1_TOP0_KME_ME1_TOP0_78_me1_pi_mm_invalid_sel_shift                (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_78_me1_pi_mm_psad_norm_thd_mask               (0x00007FFC)
#define  KME_ME1_TOP0_KME_ME1_TOP0_78_me1_pi_mm_psad_norm_en_mask                (0x00000002)
#define  KME_ME1_TOP0_KME_ME1_TOP0_78_me1_pi_mm_invalid_sel_mask                 (0x00000001)
#define  KME_ME1_TOP0_KME_ME1_TOP0_78_me1_pi_mm_psad_norm_thd(data)              (0x00007FFC&((data)<<2))
#define  KME_ME1_TOP0_KME_ME1_TOP0_78_me1_pi_mm_psad_norm_en(data)               (0x00000002&((data)<<1))
#define  KME_ME1_TOP0_KME_ME1_TOP0_78_me1_pi_mm_invalid_sel(data)                (0x00000001&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_78_get_me1_pi_mm_psad_norm_thd(data)          ((0x00007FFC&(data))>>2)
#define  KME_ME1_TOP0_KME_ME1_TOP0_78_get_me1_pi_mm_psad_norm_en(data)           ((0x00000002&(data))>>1)
#define  KME_ME1_TOP0_KME_ME1_TOP0_78_get_me1_pi_mm_invalid_sel(data)            (0x00000001&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_7C                                           0x1809C47C
#define  KME_ME1_TOP0_KME_ME1_TOP0_7C_reg_addr                                   "0xB809C47C"
#define  KME_ME1_TOP0_KME_ME1_TOP0_7C_reg                                        0xB809C47C
#define  KME_ME1_TOP0_KME_ME1_TOP0_7C_inst_addr                                  "0x001E"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_7C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_7C_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_7C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_7C_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_7C_me1_post_adptpnt_ppi_sadpnt_shift          (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_7C_me1_post_adptpnt_ppi_sadpnt_mask           (0x00001FFF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_7C_me1_post_adptpnt_ppi_sadpnt(data)          (0x00001FFF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_7C_get_me1_post_adptpnt_ppi_sadpnt(data)      (0x00001FFF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_80                                           0x1809C480
#define  KME_ME1_TOP0_KME_ME1_TOP0_80_reg_addr                                   "0xB809C480"
#define  KME_ME1_TOP0_KME_ME1_TOP0_80_reg                                        0xB809C480
#define  KME_ME1_TOP0_KME_ME1_TOP0_80_inst_addr                                  "0x001F"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_80_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_80_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_80_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_80_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_80_me1_dtl_hf_limt_shift                      (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_80_me1_dtl_hf_cor_shift                       (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_80_me1_dtl_hf_shft_shift                      (4)
#define  KME_ME1_TOP0_KME_ME1_TOP0_80_me1_dtl_hf_mode_shift                      (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_80_me1_dtl_hf_limt_mask                       (0x00FF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_80_me1_dtl_hf_cor_mask                        (0x0000FF00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_80_me1_dtl_hf_shft_mask                       (0x000000F0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_80_me1_dtl_hf_mode_mask                       (0x00000001)
#define  KME_ME1_TOP0_KME_ME1_TOP0_80_me1_dtl_hf_limt(data)                      (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_80_me1_dtl_hf_cor(data)                       (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_80_me1_dtl_hf_shft(data)                      (0x000000F0&((data)<<4))
#define  KME_ME1_TOP0_KME_ME1_TOP0_80_me1_dtl_hf_mode(data)                      (0x00000001&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_80_get_me1_dtl_hf_limt(data)                  ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_80_get_me1_dtl_hf_cor(data)                   ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_80_get_me1_dtl_hf_shft(data)                  ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP0_KME_ME1_TOP0_80_get_me1_dtl_hf_mode(data)                  (0x00000001&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_84                                           0x1809C484
#define  KME_ME1_TOP0_KME_ME1_TOP0_84_reg_addr                                   "0xB809C484"
#define  KME_ME1_TOP0_KME_ME1_TOP0_84_reg                                        0xB809C484
#define  KME_ME1_TOP0_KME_ME1_TOP0_84_inst_addr                                  "0x0020"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_84_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_84_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_84_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_84_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_84_me1_dtl_dr_limt_shift                      (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_84_me1_dtl_dr_cor_shift                       (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_84_me1_dtl_dr_shft_shift                      (4)
#define  KME_ME1_TOP0_KME_ME1_TOP0_84_me1_dtl_dr_mode_shift                      (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_84_me1_dtl_dr_limt_mask                       (0x00FF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_84_me1_dtl_dr_cor_mask                        (0x0000FF00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_84_me1_dtl_dr_shft_mask                       (0x000000F0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_84_me1_dtl_dr_mode_mask                       (0x00000001)
#define  KME_ME1_TOP0_KME_ME1_TOP0_84_me1_dtl_dr_limt(data)                      (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_84_me1_dtl_dr_cor(data)                       (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_84_me1_dtl_dr_shft(data)                      (0x000000F0&((data)<<4))
#define  KME_ME1_TOP0_KME_ME1_TOP0_84_me1_dtl_dr_mode(data)                      (0x00000001&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_84_get_me1_dtl_dr_limt(data)                  ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_84_get_me1_dtl_dr_cor(data)                   ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_84_get_me1_dtl_dr_shft(data)                  ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP0_KME_ME1_TOP0_84_get_me1_dtl_dr_mode(data)                  (0x00000001&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_88                                           0x1809C488
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_reg_addr                                   "0xB809C488"
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_reg                                        0xB809C488
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_inst_addr                                  "0x0021"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_88_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_88_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_88_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_88_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_me1_post_flagpnt_ip_shift                  (24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_me1_post_flagpnt_ppi_shift                 (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_me1_post_cddpnt_ppi_shift                  (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_me1_post_sad_mode_shift                    (7)
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_me1_post_pfv_en_shift                      (6)
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_me1_post_pfv_mode_shift                    (4)
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_me1_mm_psad_norm_shft_shift                (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_me1_post_flagpnt_ip_mask                   (0xFF000000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_me1_post_flagpnt_ppi_mask                  (0x00FF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_me1_post_cddpnt_ppi_mask                   (0x0000FF00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_me1_post_sad_mode_mask                     (0x00000080)
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_me1_post_pfv_en_mask                       (0x00000040)
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_me1_post_pfv_mode_mask                     (0x00000030)
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_me1_mm_psad_norm_shft_mask                 (0x0000000F)
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_me1_post_flagpnt_ip(data)                  (0xFF000000&((data)<<24))
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_me1_post_flagpnt_ppi(data)                 (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_me1_post_cddpnt_ppi(data)                  (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_me1_post_sad_mode(data)                    (0x00000080&((data)<<7))
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_me1_post_pfv_en(data)                      (0x00000040&((data)<<6))
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_me1_post_pfv_mode(data)                    (0x00000030&((data)<<4))
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_me1_mm_psad_norm_shft(data)                (0x0000000F&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_get_me1_post_flagpnt_ip(data)              ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_get_me1_post_flagpnt_ppi(data)             ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_get_me1_post_cddpnt_ppi(data)              ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_get_me1_post_sad_mode(data)                ((0x00000080&(data))>>7)
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_get_me1_post_pfv_en(data)                  ((0x00000040&(data))>>6)
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_get_me1_post_pfv_mode(data)                ((0x00000030&(data))>>4)
#define  KME_ME1_TOP0_KME_ME1_TOP0_88_get_me1_mm_psad_norm_shft(data)            (0x0000000F&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_8C                                           0x1809C48C
#define  KME_ME1_TOP0_KME_ME1_TOP0_8C_reg_addr                                   "0xB809C48C"
#define  KME_ME1_TOP0_KME_ME1_TOP0_8C_reg                                        0xB809C48C
#define  KME_ME1_TOP0_KME_ME1_TOP0_8C_inst_addr                                  "0x0022"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_8C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_8C_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_8C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_8C_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_8C_me1_post_adptpnt_ppi_sad_shft_shift        (24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_8C_me1_post_adptpnt_ppi_pnt_min_shift         (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_8C_me1_post_adptpnt_ppi_en_shift              (15)
#define  KME_ME1_TOP0_KME_ME1_TOP0_8C_me1_post_eva_mode_shift                    (13)
#define  KME_ME1_TOP0_KME_ME1_TOP0_8C_me1_post_mvd_thd_shift                     (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_8C_me1_post_adptpnt_ppi_sad_shft_mask         (0x0F000000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_8C_me1_post_adptpnt_ppi_pnt_min_mask          (0x00FF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_8C_me1_post_adptpnt_ppi_en_mask               (0x00008000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_8C_me1_post_eva_mode_mask                     (0x00002000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_8C_me1_post_mvd_thd_mask                      (0x00001FFF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_8C_me1_post_adptpnt_ppi_sad_shft(data)        (0x0F000000&((data)<<24))
#define  KME_ME1_TOP0_KME_ME1_TOP0_8C_me1_post_adptpnt_ppi_pnt_min(data)         (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_8C_me1_post_adptpnt_ppi_en(data)              (0x00008000&((data)<<15))
#define  KME_ME1_TOP0_KME_ME1_TOP0_8C_me1_post_eva_mode(data)                    (0x00002000&((data)<<13))
#define  KME_ME1_TOP0_KME_ME1_TOP0_8C_me1_post_mvd_thd(data)                     (0x00001FFF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_8C_get_me1_post_adptpnt_ppi_sad_shft(data)    ((0x0F000000&(data))>>24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_8C_get_me1_post_adptpnt_ppi_pnt_min(data)     ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_8C_get_me1_post_adptpnt_ppi_en(data)          ((0x00008000&(data))>>15)
#define  KME_ME1_TOP0_KME_ME1_TOP0_8C_get_me1_post_eva_mode(data)                ((0x00002000&(data))>>13)
#define  KME_ME1_TOP0_KME_ME1_TOP0_8C_get_me1_post_mvd_thd(data)                 (0x00001FFF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_90                                           0x1809C490
#define  KME_ME1_TOP0_KME_ME1_TOP0_90_reg_addr                                   "0xB809C490"
#define  KME_ME1_TOP0_KME_ME1_TOP0_90_reg                                        0xB809C490
#define  KME_ME1_TOP0_KME_ME1_TOP0_90_inst_addr                                  "0x0023"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_90_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_90_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_90_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_90_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_90_me1_sc_ip_gmvd_cost_limt_shift             (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_90_me1_sc_ip_mvd_cost_limt_shift              (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_90_me1_sc_ip_gmvd_cost_limt_mask              (0x1FFF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_90_me1_sc_ip_mvd_cost_limt_mask               (0x00001FFF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_90_me1_sc_ip_gmvd_cost_limt(data)             (0x1FFF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_90_me1_sc_ip_mvd_cost_limt(data)              (0x00001FFF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_90_get_me1_sc_ip_gmvd_cost_limt(data)         ((0x1FFF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_90_get_me1_sc_ip_mvd_cost_limt(data)          (0x00001FFF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_94                                           0x1809C494
#define  KME_ME1_TOP0_KME_ME1_TOP0_94_reg_addr                                   "0xB809C494"
#define  KME_ME1_TOP0_KME_ME1_TOP0_94_reg                                        0xB809C494
#define  KME_ME1_TOP0_KME_ME1_TOP0_94_inst_addr                                  "0x0024"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_94_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_94_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_94_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_94_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_94_me1_sc_ip_adptpnt_rnd_en_shift             (18)
#define  KME_ME1_TOP0_KME_ME1_TOP0_94_me1_sc_ip_adptpnt_gmv_en_shift             (17)
#define  KME_ME1_TOP0_KME_ME1_TOP0_94_me1_sc_ip_adptpnt_zmv_en_shift             (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_94_me1_sc_ip_adpt_cor_limt_shift              (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_94_me1_sc_ip_adptpnt_rnd_en_mask              (0x00040000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_94_me1_sc_ip_adptpnt_gmv_en_mask              (0x00020000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_94_me1_sc_ip_adptpnt_zmv_en_mask              (0x00010000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_94_me1_sc_ip_adpt_cor_limt_mask               (0x000003FF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_94_me1_sc_ip_adptpnt_rnd_en(data)             (0x00040000&((data)<<18))
#define  KME_ME1_TOP0_KME_ME1_TOP0_94_me1_sc_ip_adptpnt_gmv_en(data)             (0x00020000&((data)<<17))
#define  KME_ME1_TOP0_KME_ME1_TOP0_94_me1_sc_ip_adptpnt_zmv_en(data)             (0x00010000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_94_me1_sc_ip_adpt_cor_limt(data)              (0x000003FF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_94_get_me1_sc_ip_adptpnt_rnd_en(data)         ((0x00040000&(data))>>18)
#define  KME_ME1_TOP0_KME_ME1_TOP0_94_get_me1_sc_ip_adptpnt_gmv_en(data)         ((0x00020000&(data))>>17)
#define  KME_ME1_TOP0_KME_ME1_TOP0_94_get_me1_sc_ip_adptpnt_zmv_en(data)         ((0x00010000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_94_get_me1_sc_ip_adpt_cor_limt(data)          (0x000003FF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_98                                           0x1809C498
#define  KME_ME1_TOP0_KME_ME1_TOP0_98_reg_addr                                   "0xB809C498"
#define  KME_ME1_TOP0_KME_ME1_TOP0_98_reg                                        0xB809C498
#define  KME_ME1_TOP0_KME_ME1_TOP0_98_inst_addr                                  "0x0025"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_98_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_98_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_98_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_98_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_98_me1_sc_ip_mm_mvd_thd_shift                 (22)
#define  KME_ME1_TOP0_KME_ME1_TOP0_98_me1_sc_ip_mm_sadth_slope_shift             (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_98_me1_sc_ip_mm_sadth_base_shift              (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_98_me1_sc_ip_mm_mvd_thd_mask                  (0xFFC00000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_98_me1_sc_ip_mm_sadth_slope_mask              (0x003F0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_98_me1_sc_ip_mm_sadth_base_mask               (0x00001FFF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_98_me1_sc_ip_mm_mvd_thd(data)                 (0xFFC00000&((data)<<22))
#define  KME_ME1_TOP0_KME_ME1_TOP0_98_me1_sc_ip_mm_sadth_slope(data)             (0x003F0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_98_me1_sc_ip_mm_sadth_base(data)              (0x00001FFF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_98_get_me1_sc_ip_mm_mvd_thd(data)             ((0xFFC00000&(data))>>22)
#define  KME_ME1_TOP0_KME_ME1_TOP0_98_get_me1_sc_ip_mm_sadth_slope(data)         ((0x003F0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_98_get_me1_sc_ip_mm_sadth_base(data)          (0x00001FFF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_9C                                           0x1809C49C
#define  KME_ME1_TOP0_KME_ME1_TOP0_9C_reg_addr                                   "0xB809C49C"
#define  KME_ME1_TOP0_KME_ME1_TOP0_9C_reg                                        0xB809C49C
#define  KME_ME1_TOP0_KME_ME1_TOP0_9C_inst_addr                                  "0x0026"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_9C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_9C_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_9C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_9C_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_9C_me1_sc_pi_gmvd_cost_limt_shift             (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_9C_me1_sc_pi_mvd_cost_limt_shift              (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_9C_me1_sc_pi_gmvd_cost_limt_mask              (0x1FFF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_9C_me1_sc_pi_mvd_cost_limt_mask               (0x00001FFF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_9C_me1_sc_pi_gmvd_cost_limt(data)             (0x1FFF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_9C_me1_sc_pi_mvd_cost_limt(data)              (0x00001FFF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_9C_get_me1_sc_pi_gmvd_cost_limt(data)         ((0x1FFF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_9C_get_me1_sc_pi_mvd_cost_limt(data)          (0x00001FFF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_A0                                           0x1809C4A0
#define  KME_ME1_TOP0_KME_ME1_TOP0_A0_reg_addr                                   "0xB809C4A0"
#define  KME_ME1_TOP0_KME_ME1_TOP0_A0_reg                                        0xB809C4A0
#define  KME_ME1_TOP0_KME_ME1_TOP0_A0_inst_addr                                  "0x0027"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_A0_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_A0_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_A0_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_A0_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_A0_me1_sc_pi_adptpnt_rnd_en_shift             (18)
#define  KME_ME1_TOP0_KME_ME1_TOP0_A0_me1_sc_pi_adptpnt_gmv_en_shift             (17)
#define  KME_ME1_TOP0_KME_ME1_TOP0_A0_me1_sc_pi_adptpnt_zmv_en_shift             (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_A0_me1_sc_pi_adpt_cor_limt_shift              (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_A0_me1_sc_pi_adptpnt_rnd_en_mask              (0x00040000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_A0_me1_sc_pi_adptpnt_gmv_en_mask              (0x00020000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_A0_me1_sc_pi_adptpnt_zmv_en_mask              (0x00010000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_A0_me1_sc_pi_adpt_cor_limt_mask               (0x000003FF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_A0_me1_sc_pi_adptpnt_rnd_en(data)             (0x00040000&((data)<<18))
#define  KME_ME1_TOP0_KME_ME1_TOP0_A0_me1_sc_pi_adptpnt_gmv_en(data)             (0x00020000&((data)<<17))
#define  KME_ME1_TOP0_KME_ME1_TOP0_A0_me1_sc_pi_adptpnt_zmv_en(data)             (0x00010000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_A0_me1_sc_pi_adpt_cor_limt(data)              (0x000003FF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_A0_get_me1_sc_pi_adptpnt_rnd_en(data)         ((0x00040000&(data))>>18)
#define  KME_ME1_TOP0_KME_ME1_TOP0_A0_get_me1_sc_pi_adptpnt_gmv_en(data)         ((0x00020000&(data))>>17)
#define  KME_ME1_TOP0_KME_ME1_TOP0_A0_get_me1_sc_pi_adptpnt_zmv_en(data)         ((0x00010000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_A0_get_me1_sc_pi_adpt_cor_limt(data)          (0x000003FF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_A4                                           0x1809C4A4
#define  KME_ME1_TOP0_KME_ME1_TOP0_A4_reg_addr                                   "0xB809C4A4"
#define  KME_ME1_TOP0_KME_ME1_TOP0_A4_reg                                        0xB809C4A4
#define  KME_ME1_TOP0_KME_ME1_TOP0_A4_inst_addr                                  "0x0028"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_A4_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_A4_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_A4_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_A4_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_A4_me1_sc_pi_mm_mvd_thd_shift                 (22)
#define  KME_ME1_TOP0_KME_ME1_TOP0_A4_me1_sc_pi_mm_sadth_slope_shift             (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_A4_me1_sc_pi_mm_sadth_base_shift              (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_A4_me1_sc_pi_mm_mvd_thd_mask                  (0xFFC00000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_A4_me1_sc_pi_mm_sadth_slope_mask              (0x003F0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_A4_me1_sc_pi_mm_sadth_base_mask               (0x00001FFF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_A4_me1_sc_pi_mm_mvd_thd(data)                 (0xFFC00000&((data)<<22))
#define  KME_ME1_TOP0_KME_ME1_TOP0_A4_me1_sc_pi_mm_sadth_slope(data)             (0x003F0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_A4_me1_sc_pi_mm_sadth_base(data)              (0x00001FFF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_A4_get_me1_sc_pi_mm_mvd_thd(data)             ((0xFFC00000&(data))>>22)
#define  KME_ME1_TOP0_KME_ME1_TOP0_A4_get_me1_sc_pi_mm_sadth_slope(data)         ((0x003F0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_A4_get_me1_sc_pi_mm_sadth_base(data)          (0x00001FFF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_B0                                           0x1809C4B0
#define  KME_ME1_TOP0_KME_ME1_TOP0_B0_reg_addr                                   "0xB809C4B0"
#define  KME_ME1_TOP0_KME_ME1_TOP0_B0_reg                                        0xB809C4B0
#define  KME_ME1_TOP0_KME_ME1_TOP0_B0_inst_addr                                  "0x0029"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_B0_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_B0_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_B0_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_B0_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_B0_me1_meander_ip_cddpnt_st3_shift            (24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B0_me1_meander_ip_cddpnt_st2_shift            (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B0_me1_meander_ip_cddpnt_st1_shift            (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B0_me1_meander_ip_cddpnt_st0_shift            (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B0_me1_meander_ip_cddpnt_st3_mask             (0xFF000000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B0_me1_meander_ip_cddpnt_st2_mask             (0x00FF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B0_me1_meander_ip_cddpnt_st1_mask             (0x0000FF00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B0_me1_meander_ip_cddpnt_st0_mask             (0x000000FF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B0_me1_meander_ip_cddpnt_st3(data)            (0xFF000000&((data)<<24))
#define  KME_ME1_TOP0_KME_ME1_TOP0_B0_me1_meander_ip_cddpnt_st2(data)            (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_B0_me1_meander_ip_cddpnt_st1(data)            (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_B0_me1_meander_ip_cddpnt_st0(data)            (0x000000FF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_B0_get_me1_meander_ip_cddpnt_st3(data)        ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B0_get_me1_meander_ip_cddpnt_st2(data)        ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B0_get_me1_meander_ip_cddpnt_st1(data)        ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B0_get_me1_meander_ip_cddpnt_st0(data)        (0x000000FF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_B4                                           0x1809C4B4
#define  KME_ME1_TOP0_KME_ME1_TOP0_B4_reg_addr                                   "0xB809C4B4"
#define  KME_ME1_TOP0_KME_ME1_TOP0_B4_reg                                        0xB809C4B4
#define  KME_ME1_TOP0_KME_ME1_TOP0_B4_inst_addr                                  "0x002A"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_B4_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_B4_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_B4_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_B4_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_B4_me1_meander_ip_cddpnt_st7_shift            (24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B4_me1_meander_ip_cddpnt_st6_shift            (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B4_me1_meander_ip_cddpnt_st5_shift            (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B4_me1_meander_ip_cddpnt_st4_shift            (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B4_me1_meander_ip_cddpnt_st7_mask             (0xFF000000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B4_me1_meander_ip_cddpnt_st6_mask             (0x00FF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B4_me1_meander_ip_cddpnt_st5_mask             (0x0000FF00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B4_me1_meander_ip_cddpnt_st4_mask             (0x000000FF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B4_me1_meander_ip_cddpnt_st7(data)            (0xFF000000&((data)<<24))
#define  KME_ME1_TOP0_KME_ME1_TOP0_B4_me1_meander_ip_cddpnt_st6(data)            (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_B4_me1_meander_ip_cddpnt_st5(data)            (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_B4_me1_meander_ip_cddpnt_st4(data)            (0x000000FF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_B4_get_me1_meander_ip_cddpnt_st7(data)        ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B4_get_me1_meander_ip_cddpnt_st6(data)        ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B4_get_me1_meander_ip_cddpnt_st5(data)        ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B4_get_me1_meander_ip_cddpnt_st4(data)        (0x000000FF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_B8                                           0x1809C4B8
#define  KME_ME1_TOP0_KME_ME1_TOP0_B8_reg_addr                                   "0xB809C4B8"
#define  KME_ME1_TOP0_KME_ME1_TOP0_B8_reg                                        0xB809C4B8
#define  KME_ME1_TOP0_KME_ME1_TOP0_B8_inst_addr                                  "0x002B"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_B8_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_B8_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_B8_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_B8_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_B8_me1_meander_ip_cddpnt_st9_shift            (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B8_me1_meander_ip_cddpnt_st8_shift            (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B8_me1_meander_ip_cddpnt_st9_mask             (0x0000FF00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B8_me1_meander_ip_cddpnt_st8_mask             (0x000000FF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B8_me1_meander_ip_cddpnt_st9(data)            (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_B8_me1_meander_ip_cddpnt_st8(data)            (0x000000FF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_B8_get_me1_meander_ip_cddpnt_st9(data)        ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_B8_get_me1_meander_ip_cddpnt_st8(data)        (0x000000FF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_BC                                           0x1809C4BC
#define  KME_ME1_TOP0_KME_ME1_TOP0_BC_reg_addr                                   "0xB809C4BC"
#define  KME_ME1_TOP0_KME_ME1_TOP0_BC_reg                                        0xB809C4BC
#define  KME_ME1_TOP0_KME_ME1_TOP0_BC_inst_addr                                  "0x002C"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_BC_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_BC_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_BC_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_BC_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_BC_me1_meander_pi_cddpnt_st3_shift            (24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_BC_me1_meander_pi_cddpnt_st2_shift            (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_BC_me1_meander_pi_cddpnt_st1_shift            (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_BC_me1_meander_pi_cddpnt_st0_shift            (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_BC_me1_meander_pi_cddpnt_st3_mask             (0xFF000000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_BC_me1_meander_pi_cddpnt_st2_mask             (0x00FF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_BC_me1_meander_pi_cddpnt_st1_mask             (0x0000FF00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_BC_me1_meander_pi_cddpnt_st0_mask             (0x000000FF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_BC_me1_meander_pi_cddpnt_st3(data)            (0xFF000000&((data)<<24))
#define  KME_ME1_TOP0_KME_ME1_TOP0_BC_me1_meander_pi_cddpnt_st2(data)            (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_BC_me1_meander_pi_cddpnt_st1(data)            (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_BC_me1_meander_pi_cddpnt_st0(data)            (0x000000FF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_BC_get_me1_meander_pi_cddpnt_st3(data)        ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_BC_get_me1_meander_pi_cddpnt_st2(data)        ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_BC_get_me1_meander_pi_cddpnt_st1(data)        ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_BC_get_me1_meander_pi_cddpnt_st0(data)        (0x000000FF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_C0                                           0x1809C4C0
#define  KME_ME1_TOP0_KME_ME1_TOP0_C0_reg_addr                                   "0xB809C4C0"
#define  KME_ME1_TOP0_KME_ME1_TOP0_C0_reg                                        0xB809C4C0
#define  KME_ME1_TOP0_KME_ME1_TOP0_C0_inst_addr                                  "0x002D"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_C0_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_C0_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_C0_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_C0_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_C0_me1_meander_pi_cddpnt_st7_shift            (24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_C0_me1_meander_pi_cddpnt_st6_shift            (16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_C0_me1_meander_pi_cddpnt_st5_shift            (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_C0_me1_meander_pi_cddpnt_st4_shift            (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_C0_me1_meander_pi_cddpnt_st7_mask             (0xFF000000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_C0_me1_meander_pi_cddpnt_st6_mask             (0x00FF0000)
#define  KME_ME1_TOP0_KME_ME1_TOP0_C0_me1_meander_pi_cddpnt_st5_mask             (0x0000FF00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_C0_me1_meander_pi_cddpnt_st4_mask             (0x000000FF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_C0_me1_meander_pi_cddpnt_st7(data)            (0xFF000000&((data)<<24))
#define  KME_ME1_TOP0_KME_ME1_TOP0_C0_me1_meander_pi_cddpnt_st6(data)            (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_TOP0_C0_me1_meander_pi_cddpnt_st5(data)            (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_C0_me1_meander_pi_cddpnt_st4(data)            (0x000000FF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_C0_get_me1_meander_pi_cddpnt_st7(data)        ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP0_KME_ME1_TOP0_C0_get_me1_meander_pi_cddpnt_st6(data)        ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_TOP0_C0_get_me1_meander_pi_cddpnt_st5(data)        ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_C0_get_me1_meander_pi_cddpnt_st4(data)        (0x000000FF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_C4                                           0x1809C4C4
#define  KME_ME1_TOP0_KME_ME1_TOP0_C4_reg_addr                                   "0xB809C4C4"
#define  KME_ME1_TOP0_KME_ME1_TOP0_C4_reg                                        0xB809C4C4
#define  KME_ME1_TOP0_KME_ME1_TOP0_C4_inst_addr                                  "0x002E"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_C4_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_C4_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_C4_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_C4_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_C4_me1_meander_pi_cddpnt_st9_shift            (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_C4_me1_meander_pi_cddpnt_st8_shift            (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_C4_me1_meander_pi_cddpnt_st9_mask             (0x0000FF00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_C4_me1_meander_pi_cddpnt_st8_mask             (0x000000FF)
#define  KME_ME1_TOP0_KME_ME1_TOP0_C4_me1_meander_pi_cddpnt_st9(data)            (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_C4_me1_meander_pi_cddpnt_st8(data)            (0x000000FF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_C4_get_me1_meander_pi_cddpnt_st9(data)        ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_C4_get_me1_meander_pi_cddpnt_st8(data)        (0x000000FF&(data))

#define  KME_ME1_TOP0_KME_ME1_DRP                                               0x1809C4CC
#define  KME_ME1_TOP0_KME_ME1_DRP_reg_addr                                       "0xB809C4CC"
#define  KME_ME1_TOP0_KME_ME1_DRP_reg                                            0xB809C4CC
#define  KME_ME1_TOP0_KME_ME1_DRP_inst_addr                                      "0x002F"
#define  set_KME_ME1_TOP0_KME_ME1_DRP_reg(data)                                  (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_DRP_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_DRP_reg                                        (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_DRP_reg))
#define  KME_ME1_TOP0_KME_ME1_DRP_me1_drp_en_shift                               (31)
#define  KME_ME1_TOP0_KME_ME1_DRP_me1_drp_x2_shift                               (20)
#define  KME_ME1_TOP0_KME_ME1_DRP_me1_drp_x1_shift                               (10)
#define  KME_ME1_TOP0_KME_ME1_DRP_me1_drp_x0_shift                               (0)
#define  KME_ME1_TOP0_KME_ME1_DRP_me1_drp_en_mask                                (0x80000000)
#define  KME_ME1_TOP0_KME_ME1_DRP_me1_drp_x2_mask                                (0x3FF00000)
#define  KME_ME1_TOP0_KME_ME1_DRP_me1_drp_x1_mask                                (0x000FFC00)
#define  KME_ME1_TOP0_KME_ME1_DRP_me1_drp_x0_mask                                (0x000003FF)
#define  KME_ME1_TOP0_KME_ME1_DRP_me1_drp_en(data)                               (0x80000000&((data)<<31))
#define  KME_ME1_TOP0_KME_ME1_DRP_me1_drp_x2(data)                               (0x3FF00000&((data)<<20))
#define  KME_ME1_TOP0_KME_ME1_DRP_me1_drp_x1(data)                               (0x000FFC00&((data)<<10))
#define  KME_ME1_TOP0_KME_ME1_DRP_me1_drp_x0(data)                               (0x000003FF&(data))
#define  KME_ME1_TOP0_KME_ME1_DRP_get_me1_drp_en(data)                           ((0x80000000&(data))>>31)
#define  KME_ME1_TOP0_KME_ME1_DRP_get_me1_drp_x2(data)                           ((0x3FF00000&(data))>>20)
#define  KME_ME1_TOP0_KME_ME1_DRP_get_me1_drp_x1(data)                           ((0x000FFC00&(data))>>10)
#define  KME_ME1_TOP0_KME_ME1_DRP_get_me1_drp_x0(data)                           (0x000003FF&(data))

#define  KME_ME1_TOP0_KME_ME1_DRP_2                                             0x1809C4D0
#define  KME_ME1_TOP0_KME_ME1_DRP_2_reg_addr                                     "0xB809C4D0"
#define  KME_ME1_TOP0_KME_ME1_DRP_2_reg                                          0xB809C4D0
#define  KME_ME1_TOP0_KME_ME1_DRP_2_inst_addr                                    "0x0030"
#define  set_KME_ME1_TOP0_KME_ME1_DRP_2_reg(data)                                (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_DRP_2_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_DRP_2_reg                                      (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_DRP_2_reg))
#define  KME_ME1_TOP0_KME_ME1_DRP_2_me1_drp_y2_shift                             (20)
#define  KME_ME1_TOP0_KME_ME1_DRP_2_me1_drp_y1_shift                             (10)
#define  KME_ME1_TOP0_KME_ME1_DRP_2_me1_drp_y0_shift                             (0)
#define  KME_ME1_TOP0_KME_ME1_DRP_2_me1_drp_y2_mask                              (0x3FF00000)
#define  KME_ME1_TOP0_KME_ME1_DRP_2_me1_drp_y1_mask                              (0x000FFC00)
#define  KME_ME1_TOP0_KME_ME1_DRP_2_me1_drp_y0_mask                              (0x000003FF)
#define  KME_ME1_TOP0_KME_ME1_DRP_2_me1_drp_y2(data)                             (0x3FF00000&((data)<<20))
#define  KME_ME1_TOP0_KME_ME1_DRP_2_me1_drp_y1(data)                             (0x000FFC00&((data)<<10))
#define  KME_ME1_TOP0_KME_ME1_DRP_2_me1_drp_y0(data)                             (0x000003FF&(data))
#define  KME_ME1_TOP0_KME_ME1_DRP_2_get_me1_drp_y2(data)                         ((0x3FF00000&(data))>>20)
#define  KME_ME1_TOP0_KME_ME1_DRP_2_get_me1_drp_y1(data)                         ((0x000FFC00&(data))>>10)
#define  KME_ME1_TOP0_KME_ME1_DRP_2_get_me1_drp_y0(data)                         (0x000003FF&(data))

#define  KME_ME1_TOP0_KME_ME1_DRP_3                                             0x1809C4D4
#define  KME_ME1_TOP0_KME_ME1_DRP_3_reg_addr                                     "0xB809C4D4"
#define  KME_ME1_TOP0_KME_ME1_DRP_3_reg                                          0xB809C4D4
#define  KME_ME1_TOP0_KME_ME1_DRP_3_inst_addr                                    "0x0031"
#define  set_KME_ME1_TOP0_KME_ME1_DRP_3_reg(data)                                (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_DRP_3_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_DRP_3_reg                                      (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_DRP_3_reg))
#define  KME_ME1_TOP0_KME_ME1_DRP_3_me1_drp_sad_th_shift                         (16)
#define  KME_ME1_TOP0_KME_ME1_DRP_3_me1_drp_slp1_shift                           (8)
#define  KME_ME1_TOP0_KME_ME1_DRP_3_me1_drp_slp0_shift                           (0)
#define  KME_ME1_TOP0_KME_ME1_DRP_3_me1_drp_sad_th_mask                          (0xFFFF0000)
#define  KME_ME1_TOP0_KME_ME1_DRP_3_me1_drp_slp1_mask                            (0x0000FF00)
#define  KME_ME1_TOP0_KME_ME1_DRP_3_me1_drp_slp0_mask                            (0x000000FF)
#define  KME_ME1_TOP0_KME_ME1_DRP_3_me1_drp_sad_th(data)                         (0xFFFF0000&((data)<<16))
#define  KME_ME1_TOP0_KME_ME1_DRP_3_me1_drp_slp1(data)                           (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_DRP_3_me1_drp_slp0(data)                           (0x000000FF&(data))
#define  KME_ME1_TOP0_KME_ME1_DRP_3_get_me1_drp_sad_th(data)                     ((0xFFFF0000&(data))>>16)
#define  KME_ME1_TOP0_KME_ME1_DRP_3_get_me1_drp_slp1(data)                       ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_DRP_3_get_me1_drp_slp0(data)                       (0x000000FF&(data))

#define  KME_ME1_TOP0_KME_ME1_DRP_MASK                                          0x1809C4D8
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_reg_addr                                  "0xB809C4D8"
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_reg                                       0xB809C4D8
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_inst_addr                                 "0x0032"
#define  set_KME_ME1_TOP0_KME_ME1_DRP_MASK_reg(data)                             (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_DRP_MASK_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_DRP_MASK_reg                                   (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_DRP_MASK_reg))
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_me1_drp_mask_en_shift                     (31)
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_me1_drp_mask_x2_shift                     (20)
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_me1_drp_mask_x1_shift                     (10)
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_me1_drp_mask_x0_shift                     (0)
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_me1_drp_mask_en_mask                      (0x80000000)
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_me1_drp_mask_x2_mask                      (0x3FF00000)
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_me1_drp_mask_x1_mask                      (0x000FFC00)
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_me1_drp_mask_x0_mask                      (0x000003FF)
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_me1_drp_mask_en(data)                     (0x80000000&((data)<<31))
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_me1_drp_mask_x2(data)                     (0x3FF00000&((data)<<20))
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_me1_drp_mask_x1(data)                     (0x000FFC00&((data)<<10))
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_me1_drp_mask_x0(data)                     (0x000003FF&(data))
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_get_me1_drp_mask_en(data)                 ((0x80000000&(data))>>31)
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_get_me1_drp_mask_x2(data)                 ((0x3FF00000&(data))>>20)
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_get_me1_drp_mask_x1(data)                 ((0x000FFC00&(data))>>10)
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_get_me1_drp_mask_x0(data)                 (0x000003FF&(data))

#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_2                                        0x1809C4DC
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_2_reg_addr                                "0xB809C4DC"
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_2_reg                                     0xB809C4DC
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_2_inst_addr                               "0x0033"
#define  set_KME_ME1_TOP0_KME_ME1_DRP_MASK_2_reg(data)                           (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_DRP_MASK_2_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_DRP_MASK_2_reg                                 (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_DRP_MASK_2_reg))
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_2_me1_drp_mask_y2_shift                   (20)
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_2_me1_drp_mask_y1_shift                   (10)
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_2_me1_drp_mask_y0_shift                   (0)
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_2_me1_drp_mask_y2_mask                    (0x3FF00000)
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_2_me1_drp_mask_y1_mask                    (0x000FFC00)
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_2_me1_drp_mask_y0_mask                    (0x000003FF)
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_2_me1_drp_mask_y2(data)                   (0x3FF00000&((data)<<20))
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_2_me1_drp_mask_y1(data)                   (0x000FFC00&((data)<<10))
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_2_me1_drp_mask_y0(data)                   (0x000003FF&(data))
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_2_get_me1_drp_mask_y2(data)               ((0x3FF00000&(data))>>20)
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_2_get_me1_drp_mask_y1(data)               ((0x000FFC00&(data))>>10)
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_2_get_me1_drp_mask_y0(data)               (0x000003FF&(data))

#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_3                                        0x1809C4E0
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_3_reg_addr                                "0xB809C4E0"
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_3_reg                                     0xB809C4E0
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_3_inst_addr                               "0x0034"
#define  set_KME_ME1_TOP0_KME_ME1_DRP_MASK_3_reg(data)                           (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_DRP_MASK_3_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_DRP_MASK_3_reg                                 (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_DRP_MASK_3_reg))
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_3_me1_drp_mask_slp1_shift                 (8)
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_3_me1_drp_mask_slp0_shift                 (0)
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_3_me1_drp_mask_slp1_mask                  (0x0000FF00)
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_3_me1_drp_mask_slp0_mask                  (0x000000FF)
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_3_me1_drp_mask_slp1(data)                 (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_3_me1_drp_mask_slp0(data)                 (0x000000FF&(data))
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_3_get_me1_drp_mask_slp1(data)             ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_DRP_MASK_3_get_me1_drp_mask_slp0(data)             (0x000000FF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_EC                                           0x1809C4E4
#define  KME_ME1_TOP0_KME_ME1_TOP0_EC_reg_addr                                   "0xB809C4E4"
#define  KME_ME1_TOP0_KME_ME1_TOP0_EC_reg                                        0xB809C4E4
#define  KME_ME1_TOP0_KME_ME1_TOP0_EC_inst_addr                                  "0x0035"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_EC_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_EC_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_EC_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_EC_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_EC_me1_dbg_frm_hold_shift                     (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_EC_me1_dbg_frm_hold_mask                      (0x00000003)
#define  KME_ME1_TOP0_KME_ME1_TOP0_EC_me1_dbg_frm_hold(data)                     (0x00000003&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_EC_get_me1_dbg_frm_hold(data)                 (0x00000003&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP0_F0                                           0x1809C4F0
#define  KME_ME1_TOP0_KME_ME1_TOP0_F0_reg_addr                                   "0xB809C4F0"
#define  KME_ME1_TOP0_KME_ME1_TOP0_F0_reg                                        0xB809C4F0
#define  KME_ME1_TOP0_KME_ME1_TOP0_F0_inst_addr                                  "0x0036"
#define  set_KME_ME1_TOP0_KME_ME1_TOP0_F0_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_F0_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP0_F0_reg                                    (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP0_F0_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP0_F0_me1_dbg_mon_mode_shift                     (8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_F0_me1_dbg_mon_indx_shift                     (4)
#define  KME_ME1_TOP0_KME_ME1_TOP0_F0_me1_dbg_mon_loop_shift                     (1)
#define  KME_ME1_TOP0_KME_ME1_TOP0_F0_me1_dbg_mon_en_shift                       (0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_F0_me1_dbg_mon_mode_mask                      (0x0000FF00)
#define  KME_ME1_TOP0_KME_ME1_TOP0_F0_me1_dbg_mon_indx_mask                      (0x000000F0)
#define  KME_ME1_TOP0_KME_ME1_TOP0_F0_me1_dbg_mon_loop_mask                      (0x00000006)
#define  KME_ME1_TOP0_KME_ME1_TOP0_F0_me1_dbg_mon_en_mask                        (0x00000001)
#define  KME_ME1_TOP0_KME_ME1_TOP0_F0_me1_dbg_mon_mode(data)                     (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP0_KME_ME1_TOP0_F0_me1_dbg_mon_indx(data)                     (0x000000F0&((data)<<4))
#define  KME_ME1_TOP0_KME_ME1_TOP0_F0_me1_dbg_mon_loop(data)                     (0x00000006&((data)<<1))
#define  KME_ME1_TOP0_KME_ME1_TOP0_F0_me1_dbg_mon_en(data)                       (0x00000001&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP0_F0_get_me1_dbg_mon_mode(data)                 ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP0_KME_ME1_TOP0_F0_get_me1_dbg_mon_indx(data)                 ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP0_KME_ME1_TOP0_F0_get_me1_dbg_mon_loop(data)                 ((0x00000006&(data))>>1)
#define  KME_ME1_TOP0_KME_ME1_TOP0_F0_get_me1_dbg_mon_en(data)                   (0x00000001&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_0                                    0x1809C4F4
#define  KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_0_reg_addr                            "0xB809C4F4"
#define  KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_0_reg                                 0xB809C4F4
#define  KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_0_inst_addr                           "0x0037"
#define  set_KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_0_reg(data)                       (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_0_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_0_reg                             (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_0_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_0_me1_gmvcost_sel_shift               (0)
#define  KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_0_me1_gmvcost_sel_mask                (0xFFFFFFFF)
#define  KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_0_me1_gmvcost_sel(data)               (0xFFFFFFFF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_0_get_me1_gmvcost_sel(data)           (0xFFFFFFFF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_1                                    0x1809C4F8
#define  KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_1_reg_addr                            "0xB809C4F8"
#define  KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_1_reg                                 0xB809C4F8
#define  KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_1_inst_addr                           "0x0038"
#define  set_KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_1_reg(data)                       (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_1_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_1_reg                             (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_1_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_1_me1_gmvcost_gmv_sel_shift           (0)
#define  KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_1_me1_gmvcost_gmv_sel_mask            (0xFFFFFFFF)
#define  KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_1_me1_gmvcost_gmv_sel(data)           (0xFFFFFFFF&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_1_get_me1_gmvcost_gmv_sel(data)       (0xFFFFFFFF&(data))

#define  KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_2                                    0x1809C4FC
#define  KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_2_reg_addr                            "0xB809C4FC"
#define  KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_2_reg                                 0xB809C4FC
#define  KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_2_inst_addr                           "0x0039"
#define  set_KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_2_reg(data)                       (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_2_reg)=data)
#define  get_KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_2_reg                             (*((volatile unsigned int*)KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_2_reg))
#define  KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_2_me1_gmvd_gain_shift                 (0)
#define  KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_2_me1_gmvd_gain_mask                  (0x0000003F)
#define  KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_2_me1_gmvd_gain(data)                 (0x0000003F&(data))
#define  KME_ME1_TOP0_KME_ME1_TOP1_GMVCOST_2_get_me1_gmvd_gain(data)             (0x0000003F&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KME_ME1_TOP0 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_ip_dc_pix_ad_data:8;
        RBus_UInt32  me1_ip_dc_pix_cor_thd:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_ip_ac_flt_shft:3;
        RBus_UInt32  me1_ip_ac_flt_mode:2;
        RBus_UInt32  me1_ip_ac_flt_sel:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  me1_ip_ac_norm_mode:2;
        RBus_UInt32  me1_ip_dc_norm_mode:2;
    };
}kme_me1_top0_kme_me1_top0_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_ip_ac_pix_sad_limt:8;
        RBus_UInt32  me1_ip_ac_pix_ad_data:8;
        RBus_UInt32  me1_ip_ac_pix_cor_thd:8;
        RBus_UInt32  me1_ip_dc_pix_sad_limt:8;
    };
}kme_me1_top0_kme_me1_top0_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_ip_mvd_cost_limt:13;
        RBus_UInt32  me1_ip_mvd_pgain_mode:4;
        RBus_UInt32  me1_ip_mvd_dgain_mode:4;
        RBus_UInt32  me1_ip_mvd_alp_mode:4;
        RBus_UInt32  me1_ip_psad_alp_mode:4;
    };
}kme_me1_top0_kme_me1_top0_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  me1_ip_gmvd_cost_limt:13;
    };
}kme_me1_top0_kme_me1_top0_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  me1_ip_adpt_cor_gain2:8;
        RBus_UInt32  me1_ip_adpt_cor_gain1:8;
        RBus_UInt32  me1_ip_adpt_cor_gain0:8;
    };
}kme_me1_top0_kme_me1_top0_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  me1_ip_adpt_cor_limt:10;
        RBus_UInt32  me1_ip_adpt_cor_mode:4;
    };
}kme_me1_top0_kme_me1_top0_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  me1_ip_adptpnt_zmv_gain:10;
        RBus_UInt32  me1_ip_adptpnt_rnd_mode:4;
        RBus_UInt32  me1_ip_adptpnt_logo_en:1;
        RBus_UInt32  me1_ip_adptpnt_rnd_en:1;
        RBus_UInt32  me1_ip_adptpnt_gmv_en:1;
        RBus_UInt32  me1_ip_adptpnt_zmv_en:1;
    };
}kme_me1_top0_kme_me1_top0_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_ip_cddpnt_st3:8;
        RBus_UInt32  me1_ip_cddpnt_st2:8;
        RBus_UInt32  me1_ip_cddpnt_st1:8;
        RBus_UInt32  me1_ip_cddpnt_st0:8;
    };
}kme_me1_top0_kme_me1_top0_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_ip_cddpnt_st7:8;
        RBus_UInt32  me1_ip_cddpnt_st6:8;
        RBus_UInt32  me1_ip_cddpnt_st5:8;
        RBus_UInt32  me1_ip_cddpnt_st4:8;
    };
}kme_me1_top0_kme_me1_top0_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_ip_cddpnt_rnd1:8;
        RBus_UInt32  me1_ip_cddpnt_rnd0:8;
        RBus_UInt32  me1_ip_cddpnt_st9:8;
        RBus_UInt32  me1_ip_cddpnt_st8:8;
    };
}kme_me1_top0_kme_me1_top0_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_ip_cddpnt_zmv:13;
        RBus_UInt32  me1_ip_cddpnt_rnd3:8;
        RBus_UInt32  me1_ip_cddpnt_rnd2:8;
    };
}kme_me1_top0_kme_me1_top0_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_ip_cddpnt_ppi:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  me1_ip_cddpnt_gmv:13;
    };
}kme_me1_top0_kme_me1_top0_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_ip_dummy0:32;
    };
}kme_me1_top0_kme_me1_top0_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_ip_mm_mvd_thd:10;
        RBus_UInt32  me1_ip_mm_sadth_slope:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_ip_mm_sadth_base:13;
        RBus_UInt32  me1_ip_mm_en:1;
    };
}kme_me1_top0_kme_me1_top0_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  me1_mv_invalid_sad_sel:1;
        RBus_UInt32  me1_ip_mm_psad_norm_thd:13;
        RBus_UInt32  me1_ip_mm_psad_norm_en:1;
        RBus_UInt32  me1_ip_mm_invalid_sel:1;
    };
}kme_me1_top0_kme_me1_top0_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_pi_dc_pix_ad_data:8;
        RBus_UInt32  me1_pi_dc_pix_cor_thd:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_pi_ac_flt_shft:3;
        RBus_UInt32  me1_pi_ac_flt_mode:2;
        RBus_UInt32  me1_pi_ac_flt_sel:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  me1_pi_ac_norm_mode:2;
        RBus_UInt32  me1_pi_dc_norm_mode:2;
    };
}kme_me1_top0_kme_me1_top0_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_pi_ac_pix_sad_limt:8;
        RBus_UInt32  me1_pi_ac_pix_ad_data:8;
        RBus_UInt32  me1_pi_ac_pix_cor_thd:8;
        RBus_UInt32  me1_pi_dc_pix_sad_limt:8;
    };
}kme_me1_top0_kme_me1_top0_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_pi_mvd_cost_limt:13;
        RBus_UInt32  me1_pi_mvd_pgain_mode:4;
        RBus_UInt32  me1_pi_mvd_dgain_mode:4;
        RBus_UInt32  me1_pi_mvd_alp_mode:4;
        RBus_UInt32  me1_pi_psad_alp_mode:4;
    };
}kme_me1_top0_kme_me1_top0_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  me1_pi_gmvd_cost_limt:13;
    };
}kme_me1_top0_kme_me1_top0_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  me1_pi_adpt_cor_gain2:8;
        RBus_UInt32  me1_pi_adpt_cor_gain1:8;
        RBus_UInt32  me1_pi_adpt_cor_gain0:8;
    };
}kme_me1_top0_kme_me1_top0_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  me1_pi_adpt_cor_limt:10;
        RBus_UInt32  me1_pi_adpt_cor_mode:4;
    };
}kme_me1_top0_kme_me1_top0_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  me1_pi_adptpnt_zmv_gain:10;
        RBus_UInt32  me1_pi_adptpnt_rnd_mode:4;
        RBus_UInt32  me1_pi_adptpnt_logo_en:1;
        RBus_UInt32  me1_pi_adptpnt_rnd_en:1;
        RBus_UInt32  me1_pi_adptpnt_gmv_en:1;
        RBus_UInt32  me1_pi_adptpnt_zmv_en:1;
    };
}kme_me1_top0_kme_me1_top0_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_pi_cddpnt_st3:8;
        RBus_UInt32  me1_pi_cddpnt_st2:8;
        RBus_UInt32  me1_pi_cddpnt_st1:8;
        RBus_UInt32  me1_pi_cddpnt_st0:8;
    };
}kme_me1_top0_kme_me1_top0_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_pi_cddpnt_st7:8;
        RBus_UInt32  me1_pi_cddpnt_st6:8;
        RBus_UInt32  me1_pi_cddpnt_st5:8;
        RBus_UInt32  me1_pi_cddpnt_st4:8;
    };
}kme_me1_top0_kme_me1_top0_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_pi_cddpnt_rnd1:8;
        RBus_UInt32  me1_pi_cddpnt_rnd0:8;
        RBus_UInt32  me1_pi_cddpnt_st9:8;
        RBus_UInt32  me1_pi_cddpnt_st8:8;
    };
}kme_me1_top0_kme_me1_top0_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_pi_cddpnt_zmv:13;
        RBus_UInt32  me1_pi_cddpnt_rnd3:8;
        RBus_UInt32  me1_pi_cddpnt_rnd2:8;
    };
}kme_me1_top0_kme_me1_top0_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  me1_pi_cddpnt_gmv:13;
    };
}kme_me1_top0_kme_me1_top0_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_pi_dummy0:32;
    };
}kme_me1_top0_kme_me1_top0_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_pi_mm_mvd_thd:10;
        RBus_UInt32  me1_pi_mm_sadth_slope:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_pi_mm_sadth_base:13;
        RBus_UInt32  me1_pi_mm_en:1;
    };
}kme_me1_top0_kme_me1_top0_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  me1_pi_mm_psad_norm_thd:13;
        RBus_UInt32  me1_pi_mm_psad_norm_en:1;
        RBus_UInt32  me1_pi_mm_invalid_sel:1;
    };
}kme_me1_top0_kme_me1_top0_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  me1_post_adptpnt_ppi_sadpnt:13;
    };
}kme_me1_top0_kme_me1_top0_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  me1_dtl_hf_limt:8;
        RBus_UInt32  me1_dtl_hf_cor:8;
        RBus_UInt32  me1_dtl_hf_shft:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  me1_dtl_hf_mode:1;
    };
}kme_me1_top0_kme_me1_top0_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  me1_dtl_dr_limt:8;
        RBus_UInt32  me1_dtl_dr_cor:8;
        RBus_UInt32  me1_dtl_dr_shft:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  me1_dtl_dr_mode:1;
    };
}kme_me1_top0_kme_me1_top0_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_post_flagpnt_ip:8;
        RBus_UInt32  me1_post_flagpnt_ppi:8;
        RBus_UInt32  me1_post_cddpnt_ppi:8;
        RBus_UInt32  me1_post_sad_mode:1;
        RBus_UInt32  me1_post_pfv_en:1;
        RBus_UInt32  me1_post_pfv_mode:2;
        RBus_UInt32  me1_mm_psad_norm_shft:4;
    };
}kme_me1_top0_kme_me1_top0_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  me1_post_adptpnt_ppi_sad_shft:4;
        RBus_UInt32  me1_post_adptpnt_ppi_pnt_min:8;
        RBus_UInt32  me1_post_adptpnt_ppi_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  me1_post_eva_mode:1;
        RBus_UInt32  me1_post_mvd_thd:13;
    };
}kme_me1_top0_kme_me1_top0_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_sc_ip_gmvd_cost_limt:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  me1_sc_ip_mvd_cost_limt:13;
    };
}kme_me1_top0_kme_me1_top0_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  me1_sc_ip_adptpnt_rnd_en:1;
        RBus_UInt32  me1_sc_ip_adptpnt_gmv_en:1;
        RBus_UInt32  me1_sc_ip_adptpnt_zmv_en:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  me1_sc_ip_adpt_cor_limt:10;
    };
}kme_me1_top0_kme_me1_top0_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_ip_mm_mvd_thd:10;
        RBus_UInt32  me1_sc_ip_mm_sadth_slope:6;
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_sc_ip_mm_sadth_base:13;
    };
}kme_me1_top0_kme_me1_top0_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_sc_pi_gmvd_cost_limt:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  me1_sc_pi_mvd_cost_limt:13;
    };
}kme_me1_top0_kme_me1_top0_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  me1_sc_pi_adptpnt_rnd_en:1;
        RBus_UInt32  me1_sc_pi_adptpnt_gmv_en:1;
        RBus_UInt32  me1_sc_pi_adptpnt_zmv_en:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  me1_sc_pi_adpt_cor_limt:10;
    };
}kme_me1_top0_kme_me1_top0_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_pi_mm_mvd_thd:10;
        RBus_UInt32  me1_sc_pi_mm_sadth_slope:6;
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_sc_pi_mm_sadth_base:13;
    };
}kme_me1_top0_kme_me1_top0_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_meander_ip_cddpnt_st3:8;
        RBus_UInt32  me1_meander_ip_cddpnt_st2:8;
        RBus_UInt32  me1_meander_ip_cddpnt_st1:8;
        RBus_UInt32  me1_meander_ip_cddpnt_st0:8;
    };
}kme_me1_top0_kme_me1_top0_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_meander_ip_cddpnt_st7:8;
        RBus_UInt32  me1_meander_ip_cddpnt_st6:8;
        RBus_UInt32  me1_meander_ip_cddpnt_st5:8;
        RBus_UInt32  me1_meander_ip_cddpnt_st4:8;
    };
}kme_me1_top0_kme_me1_top0_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  me1_meander_ip_cddpnt_st9:8;
        RBus_UInt32  me1_meander_ip_cddpnt_st8:8;
    };
}kme_me1_top0_kme_me1_top0_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_meander_pi_cddpnt_st3:8;
        RBus_UInt32  me1_meander_pi_cddpnt_st2:8;
        RBus_UInt32  me1_meander_pi_cddpnt_st1:8;
        RBus_UInt32  me1_meander_pi_cddpnt_st0:8;
    };
}kme_me1_top0_kme_me1_top0_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_meander_pi_cddpnt_st7:8;
        RBus_UInt32  me1_meander_pi_cddpnt_st6:8;
        RBus_UInt32  me1_meander_pi_cddpnt_st5:8;
        RBus_UInt32  me1_meander_pi_cddpnt_st4:8;
    };
}kme_me1_top0_kme_me1_top0_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  me1_meander_pi_cddpnt_st9:8;
        RBus_UInt32  me1_meander_pi_cddpnt_st8:8;
    };
}kme_me1_top0_kme_me1_top0_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_drp_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_drp_x2:10;
        RBus_UInt32  me1_drp_x1:10;
        RBus_UInt32  me1_drp_x0:10;
    };
}kme_me1_top0_kme_me1_drp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_drp_y2:10;
        RBus_UInt32  me1_drp_y1:10;
        RBus_UInt32  me1_drp_y0:10;
    };
}kme_me1_top0_kme_me1_drp_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_drp_sad_th:16;
        RBus_UInt32  me1_drp_slp1:8;
        RBus_UInt32  me1_drp_slp0:8;
    };
}kme_me1_top0_kme_me1_drp_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_drp_mask_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_drp_mask_x2:10;
        RBus_UInt32  me1_drp_mask_x1:10;
        RBus_UInt32  me1_drp_mask_x0:10;
    };
}kme_me1_top0_kme_me1_drp_mask_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_drp_mask_y2:10;
        RBus_UInt32  me1_drp_mask_y1:10;
        RBus_UInt32  me1_drp_mask_y0:10;
    };
}kme_me1_top0_kme_me1_drp_mask_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  me1_drp_mask_slp1:8;
        RBus_UInt32  me1_drp_mask_slp0:8;
    };
}kme_me1_top0_kme_me1_drp_mask_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  me1_dbg_frm_hold:2;
    };
}kme_me1_top0_kme_me1_top0_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  me1_dbg_mon_mode:8;
        RBus_UInt32  me1_dbg_mon_indx:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  me1_dbg_mon_loop:2;
        RBus_UInt32  me1_dbg_mon_en:1;
    };
}kme_me1_top0_kme_me1_top0_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_gmvcost_sel:32;
    };
}kme_me1_top0_kme_me1_top1_gmvcost_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_gmvcost_gmv_sel:32;
    };
}kme_me1_top0_kme_me1_top1_gmvcost_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  me1_gmvd_gain:6;
    };
}kme_me1_top0_kme_me1_top1_gmvcost_2_RBUS;

#else //apply LITTLE_ENDIAN

//======KME_ME1_TOP0 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_ip_dc_norm_mode:2;
        RBus_UInt32  me1_ip_ac_norm_mode:2;
        RBus_UInt32  res1:4;
        RBus_UInt32  me1_ip_ac_flt_sel:1;
        RBus_UInt32  me1_ip_ac_flt_mode:2;
        RBus_UInt32  me1_ip_ac_flt_shft:3;
        RBus_UInt32  res2:2;
        RBus_UInt32  me1_ip_dc_pix_cor_thd:8;
        RBus_UInt32  me1_ip_dc_pix_ad_data:8;
    };
}kme_me1_top0_kme_me1_top0_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_ip_dc_pix_sad_limt:8;
        RBus_UInt32  me1_ip_ac_pix_cor_thd:8;
        RBus_UInt32  me1_ip_ac_pix_ad_data:8;
        RBus_UInt32  me1_ip_ac_pix_sad_limt:8;
    };
}kme_me1_top0_kme_me1_top0_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_ip_psad_alp_mode:4;
        RBus_UInt32  me1_ip_mvd_alp_mode:4;
        RBus_UInt32  me1_ip_mvd_dgain_mode:4;
        RBus_UInt32  me1_ip_mvd_pgain_mode:4;
        RBus_UInt32  me1_ip_mvd_cost_limt:13;
        RBus_UInt32  res1:3;
    };
}kme_me1_top0_kme_me1_top0_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_ip_gmvd_cost_limt:13;
        RBus_UInt32  res1:19;
    };
}kme_me1_top0_kme_me1_top0_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_ip_adpt_cor_gain0:8;
        RBus_UInt32  me1_ip_adpt_cor_gain1:8;
        RBus_UInt32  me1_ip_adpt_cor_gain2:8;
        RBus_UInt32  res1:8;
    };
}kme_me1_top0_kme_me1_top0_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_ip_adpt_cor_mode:4;
        RBus_UInt32  me1_ip_adpt_cor_limt:10;
        RBus_UInt32  res1:18;
    };
}kme_me1_top0_kme_me1_top0_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_ip_adptpnt_zmv_en:1;
        RBus_UInt32  me1_ip_adptpnt_gmv_en:1;
        RBus_UInt32  me1_ip_adptpnt_rnd_en:1;
        RBus_UInt32  me1_ip_adptpnt_logo_en:1;
        RBus_UInt32  me1_ip_adptpnt_rnd_mode:4;
        RBus_UInt32  me1_ip_adptpnt_zmv_gain:10;
        RBus_UInt32  res1:14;
    };
}kme_me1_top0_kme_me1_top0_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_ip_cddpnt_st0:8;
        RBus_UInt32  me1_ip_cddpnt_st1:8;
        RBus_UInt32  me1_ip_cddpnt_st2:8;
        RBus_UInt32  me1_ip_cddpnt_st3:8;
    };
}kme_me1_top0_kme_me1_top0_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_ip_cddpnt_st4:8;
        RBus_UInt32  me1_ip_cddpnt_st5:8;
        RBus_UInt32  me1_ip_cddpnt_st6:8;
        RBus_UInt32  me1_ip_cddpnt_st7:8;
    };
}kme_me1_top0_kme_me1_top0_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_ip_cddpnt_st8:8;
        RBus_UInt32  me1_ip_cddpnt_st9:8;
        RBus_UInt32  me1_ip_cddpnt_rnd0:8;
        RBus_UInt32  me1_ip_cddpnt_rnd1:8;
    };
}kme_me1_top0_kme_me1_top0_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_ip_cddpnt_rnd2:8;
        RBus_UInt32  me1_ip_cddpnt_rnd3:8;
        RBus_UInt32  me1_ip_cddpnt_zmv:13;
        RBus_UInt32  res1:3;
    };
}kme_me1_top0_kme_me1_top0_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_ip_cddpnt_gmv:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_ip_cddpnt_ppi:13;
        RBus_UInt32  res2:3;
    };
}kme_me1_top0_kme_me1_top0_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_ip_dummy0:32;
    };
}kme_me1_top0_kme_me1_top0_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_ip_mm_en:1;
        RBus_UInt32  me1_ip_mm_sadth_base:13;
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_ip_mm_sadth_slope:6;
        RBus_UInt32  me1_ip_mm_mvd_thd:10;
    };
}kme_me1_top0_kme_me1_top0_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_ip_mm_invalid_sel:1;
        RBus_UInt32  me1_ip_mm_psad_norm_en:1;
        RBus_UInt32  me1_ip_mm_psad_norm_thd:13;
        RBus_UInt32  me1_mv_invalid_sad_sel:1;
        RBus_UInt32  res1:16;
    };
}kme_me1_top0_kme_me1_top0_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_pi_dc_norm_mode:2;
        RBus_UInt32  me1_pi_ac_norm_mode:2;
        RBus_UInt32  res1:4;
        RBus_UInt32  me1_pi_ac_flt_sel:1;
        RBus_UInt32  me1_pi_ac_flt_mode:2;
        RBus_UInt32  me1_pi_ac_flt_shft:3;
        RBus_UInt32  res2:2;
        RBus_UInt32  me1_pi_dc_pix_cor_thd:8;
        RBus_UInt32  me1_pi_dc_pix_ad_data:8;
    };
}kme_me1_top0_kme_me1_top0_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_pi_dc_pix_sad_limt:8;
        RBus_UInt32  me1_pi_ac_pix_cor_thd:8;
        RBus_UInt32  me1_pi_ac_pix_ad_data:8;
        RBus_UInt32  me1_pi_ac_pix_sad_limt:8;
    };
}kme_me1_top0_kme_me1_top0_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_pi_psad_alp_mode:4;
        RBus_UInt32  me1_pi_mvd_alp_mode:4;
        RBus_UInt32  me1_pi_mvd_dgain_mode:4;
        RBus_UInt32  me1_pi_mvd_pgain_mode:4;
        RBus_UInt32  me1_pi_mvd_cost_limt:13;
        RBus_UInt32  res1:3;
    };
}kme_me1_top0_kme_me1_top0_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_pi_gmvd_cost_limt:13;
        RBus_UInt32  res1:19;
    };
}kme_me1_top0_kme_me1_top0_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_pi_adpt_cor_gain0:8;
        RBus_UInt32  me1_pi_adpt_cor_gain1:8;
        RBus_UInt32  me1_pi_adpt_cor_gain2:8;
        RBus_UInt32  res1:8;
    };
}kme_me1_top0_kme_me1_top0_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_pi_adpt_cor_mode:4;
        RBus_UInt32  me1_pi_adpt_cor_limt:10;
        RBus_UInt32  res1:18;
    };
}kme_me1_top0_kme_me1_top0_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_pi_adptpnt_zmv_en:1;
        RBus_UInt32  me1_pi_adptpnt_gmv_en:1;
        RBus_UInt32  me1_pi_adptpnt_rnd_en:1;
        RBus_UInt32  me1_pi_adptpnt_logo_en:1;
        RBus_UInt32  me1_pi_adptpnt_rnd_mode:4;
        RBus_UInt32  me1_pi_adptpnt_zmv_gain:10;
        RBus_UInt32  res1:14;
    };
}kme_me1_top0_kme_me1_top0_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_pi_cddpnt_st0:8;
        RBus_UInt32  me1_pi_cddpnt_st1:8;
        RBus_UInt32  me1_pi_cddpnt_st2:8;
        RBus_UInt32  me1_pi_cddpnt_st3:8;
    };
}kme_me1_top0_kme_me1_top0_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_pi_cddpnt_st4:8;
        RBus_UInt32  me1_pi_cddpnt_st5:8;
        RBus_UInt32  me1_pi_cddpnt_st6:8;
        RBus_UInt32  me1_pi_cddpnt_st7:8;
    };
}kme_me1_top0_kme_me1_top0_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_pi_cddpnt_st8:8;
        RBus_UInt32  me1_pi_cddpnt_st9:8;
        RBus_UInt32  me1_pi_cddpnt_rnd0:8;
        RBus_UInt32  me1_pi_cddpnt_rnd1:8;
    };
}kme_me1_top0_kme_me1_top0_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_pi_cddpnt_rnd2:8;
        RBus_UInt32  me1_pi_cddpnt_rnd3:8;
        RBus_UInt32  me1_pi_cddpnt_zmv:13;
        RBus_UInt32  res1:3;
    };
}kme_me1_top0_kme_me1_top0_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_pi_cddpnt_gmv:13;
        RBus_UInt32  res1:19;
    };
}kme_me1_top0_kme_me1_top0_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_pi_dummy0:32;
    };
}kme_me1_top0_kme_me1_top0_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_pi_mm_en:1;
        RBus_UInt32  me1_pi_mm_sadth_base:13;
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_pi_mm_sadth_slope:6;
        RBus_UInt32  me1_pi_mm_mvd_thd:10;
    };
}kme_me1_top0_kme_me1_top0_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_pi_mm_invalid_sel:1;
        RBus_UInt32  me1_pi_mm_psad_norm_en:1;
        RBus_UInt32  me1_pi_mm_psad_norm_thd:13;
        RBus_UInt32  res1:17;
    };
}kme_me1_top0_kme_me1_top0_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_post_adptpnt_ppi_sadpnt:13;
        RBus_UInt32  res1:19;
    };
}kme_me1_top0_kme_me1_top0_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_dtl_hf_mode:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_dtl_hf_shft:4;
        RBus_UInt32  me1_dtl_hf_cor:8;
        RBus_UInt32  me1_dtl_hf_limt:8;
        RBus_UInt32  res2:8;
    };
}kme_me1_top0_kme_me1_top0_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_dtl_dr_mode:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_dtl_dr_shft:4;
        RBus_UInt32  me1_dtl_dr_cor:8;
        RBus_UInt32  me1_dtl_dr_limt:8;
        RBus_UInt32  res2:8;
    };
}kme_me1_top0_kme_me1_top0_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mm_psad_norm_shft:4;
        RBus_UInt32  me1_post_pfv_mode:2;
        RBus_UInt32  me1_post_pfv_en:1;
        RBus_UInt32  me1_post_sad_mode:1;
        RBus_UInt32  me1_post_cddpnt_ppi:8;
        RBus_UInt32  me1_post_flagpnt_ppi:8;
        RBus_UInt32  me1_post_flagpnt_ip:8;
    };
}kme_me1_top0_kme_me1_top0_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_post_mvd_thd:13;
        RBus_UInt32  me1_post_eva_mode:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_post_adptpnt_ppi_en:1;
        RBus_UInt32  me1_post_adptpnt_ppi_pnt_min:8;
        RBus_UInt32  me1_post_adptpnt_ppi_sad_shft:4;
        RBus_UInt32  res2:4;
    };
}kme_me1_top0_kme_me1_top0_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_ip_mvd_cost_limt:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_sc_ip_gmvd_cost_limt:13;
        RBus_UInt32  res2:3;
    };
}kme_me1_top0_kme_me1_top0_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_ip_adpt_cor_limt:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  me1_sc_ip_adptpnt_zmv_en:1;
        RBus_UInt32  me1_sc_ip_adptpnt_gmv_en:1;
        RBus_UInt32  me1_sc_ip_adptpnt_rnd_en:1;
        RBus_UInt32  res2:13;
    };
}kme_me1_top0_kme_me1_top0_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_ip_mm_sadth_base:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_sc_ip_mm_sadth_slope:6;
        RBus_UInt32  me1_sc_ip_mm_mvd_thd:10;
    };
}kme_me1_top0_kme_me1_top0_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_pi_mvd_cost_limt:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_sc_pi_gmvd_cost_limt:13;
        RBus_UInt32  res2:3;
    };
}kme_me1_top0_kme_me1_top0_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_pi_adpt_cor_limt:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  me1_sc_pi_adptpnt_zmv_en:1;
        RBus_UInt32  me1_sc_pi_adptpnt_gmv_en:1;
        RBus_UInt32  me1_sc_pi_adptpnt_rnd_en:1;
        RBus_UInt32  res2:13;
    };
}kme_me1_top0_kme_me1_top0_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_pi_mm_sadth_base:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_sc_pi_mm_sadth_slope:6;
        RBus_UInt32  me1_sc_pi_mm_mvd_thd:10;
    };
}kme_me1_top0_kme_me1_top0_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_meander_ip_cddpnt_st0:8;
        RBus_UInt32  me1_meander_ip_cddpnt_st1:8;
        RBus_UInt32  me1_meander_ip_cddpnt_st2:8;
        RBus_UInt32  me1_meander_ip_cddpnt_st3:8;
    };
}kme_me1_top0_kme_me1_top0_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_meander_ip_cddpnt_st4:8;
        RBus_UInt32  me1_meander_ip_cddpnt_st5:8;
        RBus_UInt32  me1_meander_ip_cddpnt_st6:8;
        RBus_UInt32  me1_meander_ip_cddpnt_st7:8;
    };
}kme_me1_top0_kme_me1_top0_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_meander_ip_cddpnt_st8:8;
        RBus_UInt32  me1_meander_ip_cddpnt_st9:8;
        RBus_UInt32  res1:16;
    };
}kme_me1_top0_kme_me1_top0_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_meander_pi_cddpnt_st0:8;
        RBus_UInt32  me1_meander_pi_cddpnt_st1:8;
        RBus_UInt32  me1_meander_pi_cddpnt_st2:8;
        RBus_UInt32  me1_meander_pi_cddpnt_st3:8;
    };
}kme_me1_top0_kme_me1_top0_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_meander_pi_cddpnt_st4:8;
        RBus_UInt32  me1_meander_pi_cddpnt_st5:8;
        RBus_UInt32  me1_meander_pi_cddpnt_st6:8;
        RBus_UInt32  me1_meander_pi_cddpnt_st7:8;
    };
}kme_me1_top0_kme_me1_top0_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_meander_pi_cddpnt_st8:8;
        RBus_UInt32  me1_meander_pi_cddpnt_st9:8;
        RBus_UInt32  res1:16;
    };
}kme_me1_top0_kme_me1_top0_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_drp_x0:10;
        RBus_UInt32  me1_drp_x1:10;
        RBus_UInt32  me1_drp_x2:10;
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_drp_en:1;
    };
}kme_me1_top0_kme_me1_drp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_drp_y0:10;
        RBus_UInt32  me1_drp_y1:10;
        RBus_UInt32  me1_drp_y2:10;
        RBus_UInt32  res1:2;
    };
}kme_me1_top0_kme_me1_drp_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_drp_slp0:8;
        RBus_UInt32  me1_drp_slp1:8;
        RBus_UInt32  me1_drp_sad_th:16;
    };
}kme_me1_top0_kme_me1_drp_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_drp_mask_x0:10;
        RBus_UInt32  me1_drp_mask_x1:10;
        RBus_UInt32  me1_drp_mask_x2:10;
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_drp_mask_en:1;
    };
}kme_me1_top0_kme_me1_drp_mask_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_drp_mask_y0:10;
        RBus_UInt32  me1_drp_mask_y1:10;
        RBus_UInt32  me1_drp_mask_y2:10;
        RBus_UInt32  res1:2;
    };
}kme_me1_top0_kme_me1_drp_mask_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_drp_mask_slp0:8;
        RBus_UInt32  me1_drp_mask_slp1:8;
        RBus_UInt32  res1:16;
    };
}kme_me1_top0_kme_me1_drp_mask_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_dbg_frm_hold:2;
        RBus_UInt32  res1:30;
    };
}kme_me1_top0_kme_me1_top0_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_dbg_mon_en:1;
        RBus_UInt32  me1_dbg_mon_loop:2;
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_dbg_mon_indx:4;
        RBus_UInt32  me1_dbg_mon_mode:8;
        RBus_UInt32  res2:16;
    };
}kme_me1_top0_kme_me1_top0_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_gmvcost_sel:32;
    };
}kme_me1_top0_kme_me1_top1_gmvcost_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_gmvcost_gmv_sel:32;
    };
}kme_me1_top0_kme_me1_top1_gmvcost_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_gmvd_gain:6;
        RBus_UInt32  res1:26;
    };
}kme_me1_top0_kme_me1_top1_gmvcost_2_RBUS;




#endif 


#endif 
