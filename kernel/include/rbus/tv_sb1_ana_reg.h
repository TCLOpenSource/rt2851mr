/**
* @file Merlin5-DesignSpec-TVSB1_Analog
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_TV_SB1_ANA_REG_H_
#define _RBUS_TV_SB1_ANA_REG_H_

#include "rbus_types.h"



//  TV_SB1_ANA Register Address
#define  TV_SB1_ANA_VDAC_SRC_SEL                                                0x18033024
#define  TV_SB1_ANA_VDAC_SRC_SEL_reg_addr                                        "0xB8033024"
#define  TV_SB1_ANA_VDAC_SRC_SEL_reg                                             0xB8033024
#define  TV_SB1_ANA_VDAC_SRC_SEL_inst_addr                                       "0x0000"
#define  set_TV_SB1_ANA_VDAC_SRC_SEL_reg(data)                                   (*((volatile unsigned int*)TV_SB1_ANA_VDAC_SRC_SEL_reg)=data)
#define  get_TV_SB1_ANA_VDAC_SRC_SEL_reg                                         (*((volatile unsigned int*)TV_SB1_ANA_VDAC_SRC_SEL_reg))
#define  TV_SB1_ANA_VDAC_SRC_SEL_reg_vdac_clk_polar_shift                        (4)
#define  TV_SB1_ANA_VDAC_SRC_SEL_reg_vdac_src_sel_shift                          (0)
#define  TV_SB1_ANA_VDAC_SRC_SEL_reg_vdac_clk_polar_mask                         (0x00000010)
#define  TV_SB1_ANA_VDAC_SRC_SEL_reg_vdac_src_sel_mask                           (0x0000000F)
#define  TV_SB1_ANA_VDAC_SRC_SEL_reg_vdac_clk_polar(data)                        (0x00000010&((data)<<4))
#define  TV_SB1_ANA_VDAC_SRC_SEL_reg_vdac_src_sel(data)                          (0x0000000F&(data))
#define  TV_SB1_ANA_VDAC_SRC_SEL_get_reg_vdac_clk_polar(data)                    ((0x00000010&(data))>>4)
#define  TV_SB1_ANA_VDAC_SRC_SEL_get_reg_vdac_src_sel(data)                      (0x0000000F&(data))

#define  TV_SB1_ANA_IFADC_CTRL1                                                 0x18033100
#define  TV_SB1_ANA_IFADC_CTRL1_reg_addr                                         "0xB8033100"
#define  TV_SB1_ANA_IFADC_CTRL1_reg                                              0xB8033100
#define  TV_SB1_ANA_IFADC_CTRL1_inst_addr                                        "0x0001"
#define  set_TV_SB1_ANA_IFADC_CTRL1_reg(data)                                    (*((volatile unsigned int*)TV_SB1_ANA_IFADC_CTRL1_reg)=data)
#define  get_TV_SB1_ANA_IFADC_CTRL1_reg                                          (*((volatile unsigned int*)TV_SB1_ANA_IFADC_CTRL1_reg))
#define  TV_SB1_ANA_IFADC_CTRL1_reg_pow_mbias_shift                              (16)
#define  TV_SB1_ANA_IFADC_CTRL1_reg_i_vcm_sel_shift                              (10)
#define  TV_SB1_ANA_IFADC_CTRL1_reg_adc2x_bg_sel_shift                           (8)
#define  TV_SB1_ANA_IFADC_CTRL1_reg_ifd_reserved_shift                           (0)
#define  TV_SB1_ANA_IFADC_CTRL1_reg_pow_mbias_mask                               (0x00010000)
#define  TV_SB1_ANA_IFADC_CTRL1_reg_i_vcm_sel_mask                               (0x00000C00)
#define  TV_SB1_ANA_IFADC_CTRL1_reg_adc2x_bg_sel_mask                            (0x00000300)
#define  TV_SB1_ANA_IFADC_CTRL1_reg_ifd_reserved_mask                            (0x000000FF)
#define  TV_SB1_ANA_IFADC_CTRL1_reg_pow_mbias(data)                              (0x00010000&((data)<<16))
#define  TV_SB1_ANA_IFADC_CTRL1_reg_i_vcm_sel(data)                              (0x00000C00&((data)<<10))
#define  TV_SB1_ANA_IFADC_CTRL1_reg_adc2x_bg_sel(data)                           (0x00000300&((data)<<8))
#define  TV_SB1_ANA_IFADC_CTRL1_reg_ifd_reserved(data)                           (0x000000FF&(data))
#define  TV_SB1_ANA_IFADC_CTRL1_get_reg_pow_mbias(data)                          ((0x00010000&(data))>>16)
#define  TV_SB1_ANA_IFADC_CTRL1_get_reg_i_vcm_sel(data)                          ((0x00000C00&(data))>>10)
#define  TV_SB1_ANA_IFADC_CTRL1_get_reg_adc2x_bg_sel(data)                       ((0x00000300&(data))>>8)
#define  TV_SB1_ANA_IFADC_CTRL1_get_reg_ifd_reserved(data)                       (0x000000FF&(data))

#define  TV_SB1_ANA_IFADC_CTRL2                                                 0x18033104
#define  TV_SB1_ANA_IFADC_CTRL2_reg_addr                                         "0xB8033104"
#define  TV_SB1_ANA_IFADC_CTRL2_reg                                              0xB8033104
#define  TV_SB1_ANA_IFADC_CTRL2_inst_addr                                        "0x0002"
#define  set_TV_SB1_ANA_IFADC_CTRL2_reg(data)                                    (*((volatile unsigned int*)TV_SB1_ANA_IFADC_CTRL2_reg)=data)
#define  get_TV_SB1_ANA_IFADC_CTRL2_reg                                          (*((volatile unsigned int*)TV_SB1_ANA_IFADC_CTRL2_reg))
#define  TV_SB1_ANA_IFADC_CTRL2_reg_adc2x_difpow_shift                           (24)
#define  TV_SB1_ANA_IFADC_CTRL2_reg_ipga_bw_shift                                (8)
#define  TV_SB1_ANA_IFADC_CTRL2_reg_ifcmp_isel_shift                             (4)
#define  TV_SB1_ANA_IFADC_CTRL2_reg_adc2x_difpow_mask                            (0x01000000)
#define  TV_SB1_ANA_IFADC_CTRL2_reg_ipga_bw_mask                                 (0x00000300)
#define  TV_SB1_ANA_IFADC_CTRL2_reg_ifcmp_isel_mask                              (0x00000070)
#define  TV_SB1_ANA_IFADC_CTRL2_reg_adc2x_difpow(data)                           (0x01000000&((data)<<24))
#define  TV_SB1_ANA_IFADC_CTRL2_reg_ipga_bw(data)                                (0x00000300&((data)<<8))
#define  TV_SB1_ANA_IFADC_CTRL2_reg_ifcmp_isel(data)                             (0x00000070&((data)<<4))
#define  TV_SB1_ANA_IFADC_CTRL2_get_reg_adc2x_difpow(data)                       ((0x01000000&(data))>>24)
#define  TV_SB1_ANA_IFADC_CTRL2_get_reg_ipga_bw(data)                            ((0x00000300&(data))>>8)
#define  TV_SB1_ANA_IFADC_CTRL2_get_reg_ifcmp_isel(data)                         ((0x00000070&(data))>>4)

#define  TV_SB1_ANA_IQADC_CTRL0                                                 0x18033118
#define  TV_SB1_ANA_IQADC_CTRL0_reg_addr                                         "0xB8033118"
#define  TV_SB1_ANA_IQADC_CTRL0_reg                                              0xB8033118
#define  TV_SB1_ANA_IQADC_CTRL0_inst_addr                                        "0x0003"
#define  set_TV_SB1_ANA_IQADC_CTRL0_reg(data)                                    (*((volatile unsigned int*)TV_SB1_ANA_IQADC_CTRL0_reg)=data)
#define  get_TV_SB1_ANA_IQADC_CTRL0_reg                                          (*((volatile unsigned int*)TV_SB1_ANA_IQADC_CTRL0_reg))
#define  TV_SB1_ANA_IQADC_CTRL0_reg_iq_cal_vref_shift                            (28)
#define  TV_SB1_ANA_IQADC_CTRL0_reg_iq_cal_en_shift                              (24)
#define  TV_SB1_ANA_IQADC_CTRL0_reg_iq_cal_div_shift                             (20)
#define  TV_SB1_ANA_IQADC_CTRL0_reg_q_ckout_edge_shift                           (12)
#define  TV_SB1_ANA_IQADC_CTRL0_reg_i_ckout_edge_shift                           (8)
#define  TV_SB1_ANA_IQADC_CTRL0_reg_ckout_sel_q_shift                            (4)
#define  TV_SB1_ANA_IQADC_CTRL0_reg_ckout_sel_i_shift                            (0)
#define  TV_SB1_ANA_IQADC_CTRL0_reg_iq_cal_vref_mask                             (0x70000000)
#define  TV_SB1_ANA_IQADC_CTRL0_reg_iq_cal_en_mask                               (0x01000000)
#define  TV_SB1_ANA_IQADC_CTRL0_reg_iq_cal_div_mask                              (0x00300000)
#define  TV_SB1_ANA_IQADC_CTRL0_reg_q_ckout_edge_mask                            (0x00001000)
#define  TV_SB1_ANA_IQADC_CTRL0_reg_i_ckout_edge_mask                            (0x00000100)
#define  TV_SB1_ANA_IQADC_CTRL0_reg_ckout_sel_q_mask                             (0x00000010)
#define  TV_SB1_ANA_IQADC_CTRL0_reg_ckout_sel_i_mask                             (0x00000001)
#define  TV_SB1_ANA_IQADC_CTRL0_reg_iq_cal_vref(data)                            (0x70000000&((data)<<28))
#define  TV_SB1_ANA_IQADC_CTRL0_reg_iq_cal_en(data)                              (0x01000000&((data)<<24))
#define  TV_SB1_ANA_IQADC_CTRL0_reg_iq_cal_div(data)                             (0x00300000&((data)<<20))
#define  TV_SB1_ANA_IQADC_CTRL0_reg_q_ckout_edge(data)                           (0x00001000&((data)<<12))
#define  TV_SB1_ANA_IQADC_CTRL0_reg_i_ckout_edge(data)                           (0x00000100&((data)<<8))
#define  TV_SB1_ANA_IQADC_CTRL0_reg_ckout_sel_q(data)                            (0x00000010&((data)<<4))
#define  TV_SB1_ANA_IQADC_CTRL0_reg_ckout_sel_i(data)                            (0x00000001&(data))
#define  TV_SB1_ANA_IQADC_CTRL0_get_reg_iq_cal_vref(data)                        ((0x70000000&(data))>>28)
#define  TV_SB1_ANA_IQADC_CTRL0_get_reg_iq_cal_en(data)                          ((0x01000000&(data))>>24)
#define  TV_SB1_ANA_IQADC_CTRL0_get_reg_iq_cal_div(data)                         ((0x00300000&(data))>>20)
#define  TV_SB1_ANA_IQADC_CTRL0_get_reg_q_ckout_edge(data)                       ((0x00001000&(data))>>12)
#define  TV_SB1_ANA_IQADC_CTRL0_get_reg_i_ckout_edge(data)                       ((0x00000100&(data))>>8)
#define  TV_SB1_ANA_IQADC_CTRL0_get_reg_ckout_sel_q(data)                        ((0x00000010&(data))>>4)
#define  TV_SB1_ANA_IQADC_CTRL0_get_reg_ckout_sel_i(data)                        (0x00000001&(data))

#define  TV_SB1_ANA_IQADC_CTRL1                                                 0x1803311C
#define  TV_SB1_ANA_IQADC_CTRL1_reg_addr                                         "0xB803311C"
#define  TV_SB1_ANA_IQADC_CTRL1_reg                                              0xB803311C
#define  TV_SB1_ANA_IQADC_CTRL1_inst_addr                                        "0x0004"
#define  set_TV_SB1_ANA_IQADC_CTRL1_reg(data)                                    (*((volatile unsigned int*)TV_SB1_ANA_IQADC_CTRL1_reg)=data)
#define  get_TV_SB1_ANA_IQADC_CTRL1_reg                                          (*((volatile unsigned int*)TV_SB1_ANA_IQADC_CTRL1_reg))
#define  TV_SB1_ANA_IQADC_CTRL1_reg_qadc_capcal_shift                            (16)
#define  TV_SB1_ANA_IQADC_CTRL1_reg_iadc_capcal_shift                            (0)
#define  TV_SB1_ANA_IQADC_CTRL1_reg_qadc_capcal_mask                             (0x0FFF0000)
#define  TV_SB1_ANA_IQADC_CTRL1_reg_iadc_capcal_mask                             (0x00000FFF)
#define  TV_SB1_ANA_IQADC_CTRL1_reg_qadc_capcal(data)                            (0x0FFF0000&((data)<<16))
#define  TV_SB1_ANA_IQADC_CTRL1_reg_iadc_capcal(data)                            (0x00000FFF&(data))
#define  TV_SB1_ANA_IQADC_CTRL1_get_reg_qadc_capcal(data)                        ((0x0FFF0000&(data))>>16)
#define  TV_SB1_ANA_IQADC_CTRL1_get_reg_iadc_capcal(data)                        (0x00000FFF&(data))

#define  TV_SB1_ANA_IQADC_CTRL2                                                 0x18033120
#define  TV_SB1_ANA_IQADC_CTRL2_reg_addr                                         "0xB8033120"
#define  TV_SB1_ANA_IQADC_CTRL2_reg                                              0xB8033120
#define  TV_SB1_ANA_IQADC_CTRL2_inst_addr                                        "0x0005"
#define  set_TV_SB1_ANA_IQADC_CTRL2_reg(data)                                    (*((volatile unsigned int*)TV_SB1_ANA_IQADC_CTRL2_reg)=data)
#define  get_TV_SB1_ANA_IQADC_CTRL2_reg                                          (*((volatile unsigned int*)TV_SB1_ANA_IQADC_CTRL2_reg))
#define  TV_SB1_ANA_IQADC_CTRL2_reg_iqcal_isel_shift                             (16)
#define  TV_SB1_ANA_IQADC_CTRL2_reg_if_fix_en_shift                              (0)
#define  TV_SB1_ANA_IQADC_CTRL2_reg_iqcal_isel_mask                              (0x00070000)
#define  TV_SB1_ANA_IQADC_CTRL2_reg_if_fix_en_mask                               (0x00000001)
#define  TV_SB1_ANA_IQADC_CTRL2_reg_iqcal_isel(data)                             (0x00070000&((data)<<16))
#define  TV_SB1_ANA_IQADC_CTRL2_reg_if_fix_en(data)                              (0x00000001&(data))
#define  TV_SB1_ANA_IQADC_CTRL2_get_reg_iqcal_isel(data)                         ((0x00070000&(data))>>16)
#define  TV_SB1_ANA_IQADC_CTRL2_get_reg_if_fix_en(data)                          (0x00000001&(data))

#define  TV_SB1_ANA_IQADC_CTRL3                                                 0x18033124
#define  TV_SB1_ANA_IQADC_CTRL3_reg_addr                                         "0xB8033124"
#define  TV_SB1_ANA_IQADC_CTRL3_reg                                              0xB8033124
#define  TV_SB1_ANA_IQADC_CTRL3_inst_addr                                        "0x0006"
#define  set_TV_SB1_ANA_IQADC_CTRL3_reg(data)                                    (*((volatile unsigned int*)TV_SB1_ANA_IQADC_CTRL3_reg)=data)
#define  get_TV_SB1_ANA_IQADC_CTRL3_reg                                          (*((volatile unsigned int*)TV_SB1_ANA_IQADC_CTRL3_reg))
#define  TV_SB1_ANA_IQADC_CTRL3_reg_pow_q_pga_shift                              (12)
#define  TV_SB1_ANA_IQADC_CTRL3_reg_pow_i_pga_shift                              (8)
#define  TV_SB1_ANA_IQADC_CTRL3_reg_pow_q_adc_shift                              (4)
#define  TV_SB1_ANA_IQADC_CTRL3_reg_pow_i_adc_shift                              (0)
#define  TV_SB1_ANA_IQADC_CTRL3_reg_pow_q_pga_mask                               (0x00001000)
#define  TV_SB1_ANA_IQADC_CTRL3_reg_pow_i_pga_mask                               (0x00000100)
#define  TV_SB1_ANA_IQADC_CTRL3_reg_pow_q_adc_mask                               (0x00000010)
#define  TV_SB1_ANA_IQADC_CTRL3_reg_pow_i_adc_mask                               (0x00000001)
#define  TV_SB1_ANA_IQADC_CTRL3_reg_pow_q_pga(data)                              (0x00001000&((data)<<12))
#define  TV_SB1_ANA_IQADC_CTRL3_reg_pow_i_pga(data)                              (0x00000100&((data)<<8))
#define  TV_SB1_ANA_IQADC_CTRL3_reg_pow_q_adc(data)                              (0x00000010&((data)<<4))
#define  TV_SB1_ANA_IQADC_CTRL3_reg_pow_i_adc(data)                              (0x00000001&(data))
#define  TV_SB1_ANA_IQADC_CTRL3_get_reg_pow_q_pga(data)                          ((0x00001000&(data))>>12)
#define  TV_SB1_ANA_IQADC_CTRL3_get_reg_pow_i_pga(data)                          ((0x00000100&(data))>>8)
#define  TV_SB1_ANA_IQADC_CTRL3_get_reg_pow_q_adc(data)                          ((0x00000010&(data))>>4)
#define  TV_SB1_ANA_IQADC_CTRL3_get_reg_pow_i_adc(data)                          (0x00000001&(data))

#define  TV_SB1_ANA_IQADC_CTRL4                                                 0x18033128
#define  TV_SB1_ANA_IQADC_CTRL4_reg_addr                                         "0xB8033128"
#define  TV_SB1_ANA_IQADC_CTRL4_reg                                              0xB8033128
#define  TV_SB1_ANA_IQADC_CTRL4_inst_addr                                        "0x0007"
#define  set_TV_SB1_ANA_IQADC_CTRL4_reg(data)                                    (*((volatile unsigned int*)TV_SB1_ANA_IQADC_CTRL4_reg)=data)
#define  get_TV_SB1_ANA_IQADC_CTRL4_reg                                          (*((volatile unsigned int*)TV_SB1_ANA_IQADC_CTRL4_reg))
#define  TV_SB1_ANA_IQADC_CTRL4_reg_qpga_input_sel_shift                         (28)
#define  TV_SB1_ANA_IQADC_CTRL4_reg_qpga_fix_gain_shift                          (22)
#define  TV_SB1_ANA_IQADC_CTRL4_reg_qpga_bw_shift                                (20)
#define  TV_SB1_ANA_IQADC_CTRL4_reg_ipga_input_sel_shift                         (16)
#define  TV_SB1_ANA_IQADC_CTRL4_reg_ipga_fix_gain_shift                          (12)
#define  TV_SB1_ANA_IQADC_CTRL4_reg_ib20u_qpga_sel_shift                         (4)
#define  TV_SB1_ANA_IQADC_CTRL4_reg_ib20u_ipga_sel_shift                         (0)
#define  TV_SB1_ANA_IQADC_CTRL4_reg_qpga_input_sel_mask                          (0x70000000)
#define  TV_SB1_ANA_IQADC_CTRL4_reg_qpga_fix_gain_mask                           (0x01C00000)
#define  TV_SB1_ANA_IQADC_CTRL4_reg_qpga_bw_mask                                 (0x00300000)
#define  TV_SB1_ANA_IQADC_CTRL4_reg_ipga_input_sel_mask                          (0x00070000)
#define  TV_SB1_ANA_IQADC_CTRL4_reg_ipga_fix_gain_mask                           (0x00007000)
#define  TV_SB1_ANA_IQADC_CTRL4_reg_ib20u_qpga_sel_mask                          (0x00000030)
#define  TV_SB1_ANA_IQADC_CTRL4_reg_ib20u_ipga_sel_mask                          (0x00000003)
#define  TV_SB1_ANA_IQADC_CTRL4_reg_qpga_input_sel(data)                         (0x70000000&((data)<<28))
#define  TV_SB1_ANA_IQADC_CTRL4_reg_qpga_fix_gain(data)                          (0x01C00000&((data)<<22))
#define  TV_SB1_ANA_IQADC_CTRL4_reg_qpga_bw(data)                                (0x00300000&((data)<<20))
#define  TV_SB1_ANA_IQADC_CTRL4_reg_ipga_input_sel(data)                         (0x00070000&((data)<<16))
#define  TV_SB1_ANA_IQADC_CTRL4_reg_ipga_fix_gain(data)                          (0x00007000&((data)<<12))
#define  TV_SB1_ANA_IQADC_CTRL4_reg_ib20u_qpga_sel(data)                         (0x00000030&((data)<<4))
#define  TV_SB1_ANA_IQADC_CTRL4_reg_ib20u_ipga_sel(data)                         (0x00000003&(data))
#define  TV_SB1_ANA_IQADC_CTRL4_get_reg_qpga_input_sel(data)                     ((0x70000000&(data))>>28)
#define  TV_SB1_ANA_IQADC_CTRL4_get_reg_qpga_fix_gain(data)                      ((0x01C00000&(data))>>22)
#define  TV_SB1_ANA_IQADC_CTRL4_get_reg_qpga_bw(data)                            ((0x00300000&(data))>>20)
#define  TV_SB1_ANA_IQADC_CTRL4_get_reg_ipga_input_sel(data)                     ((0x00070000&(data))>>16)
#define  TV_SB1_ANA_IQADC_CTRL4_get_reg_ipga_fix_gain(data)                      ((0x00007000&(data))>>12)
#define  TV_SB1_ANA_IQADC_CTRL4_get_reg_ib20u_qpga_sel(data)                     ((0x00000030&(data))>>4)
#define  TV_SB1_ANA_IQADC_CTRL4_get_reg_ib20u_ipga_sel(data)                     (0x00000003&(data))

#define  TV_SB1_ANA_IQADC_CTRL5                                                 0x1803312C
#define  TV_SB1_ANA_IQADC_CTRL5_reg_addr                                         "0xB803312C"
#define  TV_SB1_ANA_IQADC_CTRL5_reg                                              0xB803312C
#define  TV_SB1_ANA_IQADC_CTRL5_inst_addr                                        "0x0008"
#define  set_TV_SB1_ANA_IQADC_CTRL5_reg(data)                                    (*((volatile unsigned int*)TV_SB1_ANA_IQADC_CTRL5_reg)=data)
#define  get_TV_SB1_ANA_IQADC_CTRL5_reg                                          (*((volatile unsigned int*)TV_SB1_ANA_IQADC_CTRL5_reg))
#define  TV_SB1_ANA_IQADC_CTRL5_reg_q_single_end_en_shift                        (20)
#define  TV_SB1_ANA_IQADC_CTRL5_reg_i_single_end_en_shift                        (16)
#define  TV_SB1_ANA_IQADC_CTRL5_reg_q_ckin_sel_shift                             (12)
#define  TV_SB1_ANA_IQADC_CTRL5_reg_q_vcm_sel_shift                              (10)
#define  TV_SB1_ANA_IQADC_CTRL5_reg_i_ckin_sel_shift                             (8)
#define  TV_SB1_ANA_IQADC_CTRL5_reg_qpga_d_shift                                 (4)
#define  TV_SB1_ANA_IQADC_CTRL5_reg_ipga_d_shift                                 (0)
#define  TV_SB1_ANA_IQADC_CTRL5_reg_q_single_end_en_mask                         (0x00100000)
#define  TV_SB1_ANA_IQADC_CTRL5_reg_i_single_end_en_mask                         (0x00010000)
#define  TV_SB1_ANA_IQADC_CTRL5_reg_q_ckin_sel_mask                              (0x00003000)
#define  TV_SB1_ANA_IQADC_CTRL5_reg_q_vcm_sel_mask                               (0x00000C00)
#define  TV_SB1_ANA_IQADC_CTRL5_reg_i_ckin_sel_mask                              (0x00000300)
#define  TV_SB1_ANA_IQADC_CTRL5_reg_qpga_d_mask                                  (0x000000F0)
#define  TV_SB1_ANA_IQADC_CTRL5_reg_ipga_d_mask                                  (0x0000000F)
#define  TV_SB1_ANA_IQADC_CTRL5_reg_q_single_end_en(data)                        (0x00100000&((data)<<20))
#define  TV_SB1_ANA_IQADC_CTRL5_reg_i_single_end_en(data)                        (0x00010000&((data)<<16))
#define  TV_SB1_ANA_IQADC_CTRL5_reg_q_ckin_sel(data)                             (0x00003000&((data)<<12))
#define  TV_SB1_ANA_IQADC_CTRL5_reg_q_vcm_sel(data)                              (0x00000C00&((data)<<10))
#define  TV_SB1_ANA_IQADC_CTRL5_reg_i_ckin_sel(data)                             (0x00000300&((data)<<8))
#define  TV_SB1_ANA_IQADC_CTRL5_reg_qpga_d(data)                                 (0x000000F0&((data)<<4))
#define  TV_SB1_ANA_IQADC_CTRL5_reg_ipga_d(data)                                 (0x0000000F&(data))
#define  TV_SB1_ANA_IQADC_CTRL5_get_reg_q_single_end_en(data)                    ((0x00100000&(data))>>20)
#define  TV_SB1_ANA_IQADC_CTRL5_get_reg_i_single_end_en(data)                    ((0x00010000&(data))>>16)
#define  TV_SB1_ANA_IQADC_CTRL5_get_reg_q_ckin_sel(data)                         ((0x00003000&(data))>>12)
#define  TV_SB1_ANA_IQADC_CTRL5_get_reg_q_vcm_sel(data)                          ((0x00000C00&(data))>>10)
#define  TV_SB1_ANA_IQADC_CTRL5_get_reg_i_ckin_sel(data)                         ((0x00000300&(data))>>8)
#define  TV_SB1_ANA_IQADC_CTRL5_get_reg_qpga_d(data)                             ((0x000000F0&(data))>>4)
#define  TV_SB1_ANA_IQADC_CTRL5_get_reg_ipga_d(data)                             (0x0000000F&(data))

#define  TV_SB1_ANA_IQADC_CTRL6                                                 0x18033130
#define  TV_SB1_ANA_IQADC_CTRL6_reg_addr                                         "0xB8033130"
#define  TV_SB1_ANA_IQADC_CTRL6_reg                                              0xB8033130
#define  TV_SB1_ANA_IQADC_CTRL6_inst_addr                                        "0x0009"
#define  set_TV_SB1_ANA_IQADC_CTRL6_reg(data)                                    (*((volatile unsigned int*)TV_SB1_ANA_IQADC_CTRL6_reg)=data)
#define  get_TV_SB1_ANA_IQADC_CTRL6_reg                                          (*((volatile unsigned int*)TV_SB1_ANA_IQADC_CTRL6_reg))
#define  TV_SB1_ANA_IQADC_CTRL6_reg_qadc_i_vref_sel_shift                        (30)
#define  TV_SB1_ANA_IQADC_CTRL6_reg_qadc_duty_sel_shift                          (28)
#define  TV_SB1_ANA_IQADC_CTRL6_reg_iadc_i_vref_sel_shift                        (26)
#define  TV_SB1_ANA_IQADC_CTRL6_reg_iadc_duty_sel_shift                          (24)
#define  TV_SB1_ANA_IQADC_CTRL6_reg_qadc_delay_en_shift                          (20)
#define  TV_SB1_ANA_IQADC_CTRL6_reg_iadc_delay_en_shift                          (16)
#define  TV_SB1_ANA_IQADC_CTRL6_reg_qadc_ldo0_sel_shift                          (14)
#define  TV_SB1_ANA_IQADC_CTRL6_reg_qadc_ckout_div_shift                         (12)
#define  TV_SB1_ANA_IQADC_CTRL6_reg_iadc_ckout_div_shift                         (8)
#define  TV_SB1_ANA_IQADC_CTRL6_reg_qadc_bypass_pga_shift                        (4)
#define  TV_SB1_ANA_IQADC_CTRL6_reg_iadc_bypass_pga_shift                        (0)
#define  TV_SB1_ANA_IQADC_CTRL6_reg_qadc_i_vref_sel_mask                         (0xC0000000)
#define  TV_SB1_ANA_IQADC_CTRL6_reg_qadc_duty_sel_mask                           (0x30000000)
#define  TV_SB1_ANA_IQADC_CTRL6_reg_iadc_i_vref_sel_mask                         (0x0C000000)
#define  TV_SB1_ANA_IQADC_CTRL6_reg_iadc_duty_sel_mask                           (0x03000000)
#define  TV_SB1_ANA_IQADC_CTRL6_reg_qadc_delay_en_mask                           (0x00100000)
#define  TV_SB1_ANA_IQADC_CTRL6_reg_iadc_delay_en_mask                           (0x00010000)
#define  TV_SB1_ANA_IQADC_CTRL6_reg_qadc_ldo0_sel_mask                           (0x0000C000)
#define  TV_SB1_ANA_IQADC_CTRL6_reg_qadc_ckout_div_mask                          (0x00003000)
#define  TV_SB1_ANA_IQADC_CTRL6_reg_iadc_ckout_div_mask                          (0x00000300)
#define  TV_SB1_ANA_IQADC_CTRL6_reg_qadc_bypass_pga_mask                         (0x00000010)
#define  TV_SB1_ANA_IQADC_CTRL6_reg_iadc_bypass_pga_mask                         (0x00000001)
#define  TV_SB1_ANA_IQADC_CTRL6_reg_qadc_i_vref_sel(data)                        (0xC0000000&((data)<<30))
#define  TV_SB1_ANA_IQADC_CTRL6_reg_qadc_duty_sel(data)                          (0x30000000&((data)<<28))
#define  TV_SB1_ANA_IQADC_CTRL6_reg_iadc_i_vref_sel(data)                        (0x0C000000&((data)<<26))
#define  TV_SB1_ANA_IQADC_CTRL6_reg_iadc_duty_sel(data)                          (0x03000000&((data)<<24))
#define  TV_SB1_ANA_IQADC_CTRL6_reg_qadc_delay_en(data)                          (0x00100000&((data)<<20))
#define  TV_SB1_ANA_IQADC_CTRL6_reg_iadc_delay_en(data)                          (0x00010000&((data)<<16))
#define  TV_SB1_ANA_IQADC_CTRL6_reg_qadc_ldo0_sel(data)                          (0x0000C000&((data)<<14))
#define  TV_SB1_ANA_IQADC_CTRL6_reg_qadc_ckout_div(data)                         (0x00003000&((data)<<12))
#define  TV_SB1_ANA_IQADC_CTRL6_reg_iadc_ckout_div(data)                         (0x00000300&((data)<<8))
#define  TV_SB1_ANA_IQADC_CTRL6_reg_qadc_bypass_pga(data)                        (0x00000010&((data)<<4))
#define  TV_SB1_ANA_IQADC_CTRL6_reg_iadc_bypass_pga(data)                        (0x00000001&(data))
#define  TV_SB1_ANA_IQADC_CTRL6_get_reg_qadc_i_vref_sel(data)                    ((0xC0000000&(data))>>30)
#define  TV_SB1_ANA_IQADC_CTRL6_get_reg_qadc_duty_sel(data)                      ((0x30000000&(data))>>28)
#define  TV_SB1_ANA_IQADC_CTRL6_get_reg_iadc_i_vref_sel(data)                    ((0x0C000000&(data))>>26)
#define  TV_SB1_ANA_IQADC_CTRL6_get_reg_iadc_duty_sel(data)                      ((0x03000000&(data))>>24)
#define  TV_SB1_ANA_IQADC_CTRL6_get_reg_qadc_delay_en(data)                      ((0x00100000&(data))>>20)
#define  TV_SB1_ANA_IQADC_CTRL6_get_reg_iadc_delay_en(data)                      ((0x00010000&(data))>>16)
#define  TV_SB1_ANA_IQADC_CTRL6_get_reg_qadc_ldo0_sel(data)                      ((0x0000C000&(data))>>14)
#define  TV_SB1_ANA_IQADC_CTRL6_get_reg_qadc_ckout_div(data)                     ((0x00003000&(data))>>12)
#define  TV_SB1_ANA_IQADC_CTRL6_get_reg_iadc_ckout_div(data)                     ((0x00000300&(data))>>8)
#define  TV_SB1_ANA_IQADC_CTRL6_get_reg_qadc_bypass_pga(data)                    ((0x00000010&(data))>>4)
#define  TV_SB1_ANA_IQADC_CTRL6_get_reg_iadc_bypass_pga(data)                    (0x00000001&(data))

#define  TV_SB1_ANA_IQADC_CTRL7                                                 0x18033134
#define  TV_SB1_ANA_IQADC_CTRL7_reg_addr                                         "0xB8033134"
#define  TV_SB1_ANA_IQADC_CTRL7_reg                                              0xB8033134
#define  TV_SB1_ANA_IQADC_CTRL7_inst_addr                                        "0x000A"
#define  set_TV_SB1_ANA_IQADC_CTRL7_reg(data)                                    (*((volatile unsigned int*)TV_SB1_ANA_IQADC_CTRL7_reg)=data)
#define  get_TV_SB1_ANA_IQADC_CTRL7_reg                                          (*((volatile unsigned int*)TV_SB1_ANA_IQADC_CTRL7_reg))
#define  TV_SB1_ANA_IQADC_CTRL7_reg_qadc_vref_sel_shift                          (28)
#define  TV_SB1_ANA_IQADC_CTRL7_reg_iadc_vref_sel_shift                          (24)
#define  TV_SB1_ANA_IQADC_CTRL7_reg_iadc_ldo0_sel_shift                          (7)
#define  TV_SB1_ANA_IQADC_CTRL7_reg_qadc_ldo_sel_shift                           (4)
#define  TV_SB1_ANA_IQADC_CTRL7_reg_iadc_ldo_sel_shift                           (0)
#define  TV_SB1_ANA_IQADC_CTRL7_reg_qadc_vref_sel_mask                           (0x30000000)
#define  TV_SB1_ANA_IQADC_CTRL7_reg_iadc_vref_sel_mask                           (0x03000000)
#define  TV_SB1_ANA_IQADC_CTRL7_reg_iadc_ldo0_sel_mask                           (0x00000180)
#define  TV_SB1_ANA_IQADC_CTRL7_reg_qadc_ldo_sel_mask                            (0x00000070)
#define  TV_SB1_ANA_IQADC_CTRL7_reg_iadc_ldo_sel_mask                            (0x00000007)
#define  TV_SB1_ANA_IQADC_CTRL7_reg_qadc_vref_sel(data)                          (0x30000000&((data)<<28))
#define  TV_SB1_ANA_IQADC_CTRL7_reg_iadc_vref_sel(data)                          (0x03000000&((data)<<24))
#define  TV_SB1_ANA_IQADC_CTRL7_reg_iadc_ldo0_sel(data)                          (0x00000180&((data)<<7))
#define  TV_SB1_ANA_IQADC_CTRL7_reg_qadc_ldo_sel(data)                           (0x00000070&((data)<<4))
#define  TV_SB1_ANA_IQADC_CTRL7_reg_iadc_ldo_sel(data)                           (0x00000007&(data))
#define  TV_SB1_ANA_IQADC_CTRL7_get_reg_qadc_vref_sel(data)                      ((0x30000000&(data))>>28)
#define  TV_SB1_ANA_IQADC_CTRL7_get_reg_iadc_vref_sel(data)                      ((0x03000000&(data))>>24)
#define  TV_SB1_ANA_IQADC_CTRL7_get_reg_iadc_ldo0_sel(data)                      ((0x00000180&(data))>>7)
#define  TV_SB1_ANA_IQADC_CTRL7_get_reg_qadc_ldo_sel(data)                       ((0x00000070&(data))>>4)
#define  TV_SB1_ANA_IQADC_CTRL7_get_reg_iadc_ldo_sel(data)                       (0x00000007&(data))

#define  TV_SB1_ANA_DUMMY1                                                      0x18033554
#define  TV_SB1_ANA_DUMMY1_reg_addr                                              "0xB8033554"
#define  TV_SB1_ANA_DUMMY1_reg                                                   0xB8033554
#define  TV_SB1_ANA_DUMMY1_inst_addr                                             "0x000B"
#define  set_TV_SB1_ANA_DUMMY1_reg(data)                                         (*((volatile unsigned int*)TV_SB1_ANA_DUMMY1_reg)=data)
#define  get_TV_SB1_ANA_DUMMY1_reg                                               (*((volatile unsigned int*)TV_SB1_ANA_DUMMY1_reg))
#define  TV_SB1_ANA_DUMMY1_reg_dummy1_shift                                      (0)
#define  TV_SB1_ANA_DUMMY1_reg_dummy1_mask                                       (0xFFFFFFFF)
#define  TV_SB1_ANA_DUMMY1_reg_dummy1(data)                                      (0xFFFFFFFF&(data))
#define  TV_SB1_ANA_DUMMY1_get_reg_dummy1(data)                                  (0xFFFFFFFF&(data))

#define  TV_SB1_ANA_DUMMY2                                                      0x180332A8
#define  TV_SB1_ANA_DUMMY2_reg_addr                                              "0xB80332A8"
#define  TV_SB1_ANA_DUMMY2_reg                                                   0xB80332A8
#define  TV_SB1_ANA_DUMMY2_inst_addr                                             "0x000C"
#define  set_TV_SB1_ANA_DUMMY2_reg(data)                                         (*((volatile unsigned int*)TV_SB1_ANA_DUMMY2_reg)=data)
#define  get_TV_SB1_ANA_DUMMY2_reg                                               (*((volatile unsigned int*)TV_SB1_ANA_DUMMY2_reg))
#define  TV_SB1_ANA_DUMMY2_reg_dummy2_shift                                      (0)
#define  TV_SB1_ANA_DUMMY2_reg_dummy2_mask                                       (0xFFFFFFFF)
#define  TV_SB1_ANA_DUMMY2_reg_dummy2(data)                                      (0xFFFFFFFF&(data))
#define  TV_SB1_ANA_DUMMY2_get_reg_dummy2(data)                                  (0xFFFFFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======TV_SB1_ANA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  reg_vdac_clk_polar:1;
        RBus_UInt32  reg_vdac_src_sel:4;
    };
}tv_sb1_ana_vdac_src_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  res3:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:3;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:3;
        RBus_UInt32  reg_pow_mbias:1;
        RBus_UInt32  res8:2;
        RBus_UInt32  res9:2;
        RBus_UInt32  reg_i_vcm_sel:2;
        RBus_UInt32  reg_adc2x_bg_sel:2;
        RBus_UInt32  reg_ifd_reserved:8;
    };
}tv_sb1_ana_ifadc_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  res3:3;
        RBus_UInt32  reg_adc2x_difpow:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  res6:4;
        RBus_UInt32  res7:3;
        RBus_UInt32  res8:1;
        RBus_UInt32  res9:2;
        RBus_UInt32  reg_ipga_bw:2;
        RBus_UInt32  res10:1;
        RBus_UInt32  reg_ifcmp_isel:3;
        RBus_UInt32  res11:2;
        RBus_UInt32  res12:2;
    };
}tv_sb1_ana_ifadc_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:14;
        RBus_UInt32  res4:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  res6:2;
        RBus_UInt32  res7:2;
        RBus_UInt32  res8:2;
    };
}tv_sb1_ana_ifadc_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  res6:3;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:3;
        RBus_UInt32  res9:1;
        RBus_UInt32  res10:2;
        RBus_UInt32  res11:2;
    };
}tv_sb1_ana_ifadc_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  res2:8;
        RBus_UInt32  res3:2;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:3;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:3;
        RBus_UInt32  res8:1;
        RBus_UInt32  res9:3;
        RBus_UInt32  res10:1;
    };
}tv_sb1_ana_ifadc_ctrl5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  res4:1;
    };
}tv_sb1_ana_ifadc_agc_pga_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_iq_cal_vref:3;
        RBus_UInt32  res2:3;
        RBus_UInt32  reg_iq_cal_en:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  reg_iq_cal_div:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  res6:3;
        RBus_UInt32  reg_q_ckout_edge:1;
        RBus_UInt32  res7:3;
        RBus_UInt32  reg_i_ckout_edge:1;
        RBus_UInt32  res8:3;
        RBus_UInt32  reg_ckout_sel_q:1;
        RBus_UInt32  res9:3;
        RBus_UInt32  reg_ckout_sel_i:1;
    };
}tv_sb1_ana_iqadc_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  reg_qadc_capcal:12;
        RBus_UInt32  res3:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  reg_iadc_capcal:12;
    };
}tv_sb1_ana_iqadc_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  res2:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  reg_iqcal_isel:3;
        RBus_UInt32  res4:15;
        RBus_UInt32  reg_if_fix_en:1;
    };
}tv_sb1_ana_iqadc_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  reg_pow_q_pga:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  reg_pow_i_pga:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  reg_pow_q_adc:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  reg_pow_i_adc:1;
    };
}tv_sb1_ana_iqadc_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_qpga_input_sel:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  reg_qpga_fix_gain:3;
        RBus_UInt32  reg_qpga_bw:2;
        RBus_UInt32  res4:1;
        RBus_UInt32  reg_ipga_input_sel:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  reg_ipga_fix_gain:3;
        RBus_UInt32  res6:2;
        RBus_UInt32  res7:2;
        RBus_UInt32  res8:2;
        RBus_UInt32  reg_ib20u_qpga_sel:2;
        RBus_UInt32  res9:2;
        RBus_UInt32  reg_ib20u_ipga_sel:2;
    };
}tv_sb1_ana_iqadc_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  res2:3;
        RBus_UInt32  reg_q_single_end_en:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  reg_i_single_end_en:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  reg_q_ckin_sel:2;
        RBus_UInt32  reg_q_vcm_sel:2;
        RBus_UInt32  reg_i_ckin_sel:2;
        RBus_UInt32  reg_qpga_d:4;
        RBus_UInt32  reg_ipga_d:4;
    };
}tv_sb1_ana_iqadc_ctrl5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_qadc_i_vref_sel:2;
        RBus_UInt32  reg_qadc_duty_sel:2;
        RBus_UInt32  reg_iadc_i_vref_sel:2;
        RBus_UInt32  reg_iadc_duty_sel:2;
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_qadc_delay_en:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  reg_iadc_delay_en:1;
        RBus_UInt32  reg_qadc_ldo0_sel:2;
        RBus_UInt32  reg_qadc_ckout_div:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  reg_iadc_ckout_div:2;
        RBus_UInt32  res4:3;
        RBus_UInt32  reg_qadc_bypass_pga:1;
        RBus_UInt32  res5:3;
        RBus_UInt32  reg_iadc_bypass_pga:1;
    };
}tv_sb1_ana_iqadc_ctrl6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_qadc_vref_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  reg_iadc_vref_sel:2;
        RBus_UInt32  res3:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:3;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:3;
        RBus_UInt32  res8:1;
        RBus_UInt32  res9:3;
        RBus_UInt32  reg_iadc_ldo0_sel:2;
        RBus_UInt32  reg_qadc_ldo_sel:3;
        RBus_UInt32  res10:1;
        RBus_UInt32  reg_iadc_ldo_sel:3;
    };
}tv_sb1_ana_iqadc_ctrl7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_dummy1:32;
    };
}tv_sb1_ana_dummy1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_dummy2:32;
    };
}tv_sb1_ana_dummy2_RBUS;

#else //apply LITTLE_ENDIAN

//======TV_SB1_ANA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_vdac_src_sel:4;
        RBus_UInt32  reg_vdac_clk_polar:1;
        RBus_UInt32  res1:27;
    };
}tv_sb1_ana_vdac_src_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_ifd_reserved:8;
        RBus_UInt32  reg_adc2x_bg_sel:2;
        RBus_UInt32  reg_i_vcm_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  reg_pow_mbias:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:3;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:3;
        RBus_UInt32  res8:2;
        RBus_UInt32  res9:2;
    };
}tv_sb1_ana_ifadc_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  reg_ifcmp_isel:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  reg_ipga_bw:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:3;
        RBus_UInt32  res7:4;
        RBus_UInt32  res8:2;
        RBus_UInt32  res9:2;
        RBus_UInt32  reg_adc2x_difpow:1;
        RBus_UInt32  res10:3;
        RBus_UInt32  res11:2;
        RBus_UInt32  res12:2;
    };
}tv_sb1_ana_ifadc_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  res6:14;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:7;
    };
}tv_sb1_ana_ifadc_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:3;
        RBus_UInt32  res7:2;
        RBus_UInt32  res8:2;
        RBus_UInt32  res9:1;
        RBus_UInt32  res10:3;
        RBus_UInt32  res11:12;
    };
}tv_sb1_ana_ifadc_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:3;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:2;
        RBus_UInt32  res9:8;
        RBus_UInt32  res10:9;
    };
}tv_sb1_ana_ifadc_ctrl5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:27;
    };
}tv_sb1_ana_ifadc_agc_pga_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_ckout_sel_i:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_ckout_sel_q:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  reg_i_ckout_edge:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  reg_q_ckout_edge:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  res5:2;
        RBus_UInt32  res6:2;
        RBus_UInt32  reg_iq_cal_div:2;
        RBus_UInt32  res7:2;
        RBus_UInt32  reg_iq_cal_en:1;
        RBus_UInt32  res8:3;
        RBus_UInt32  reg_iq_cal_vref:3;
        RBus_UInt32  res9:1;
    };
}tv_sb1_ana_iqadc_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_iadc_capcal:12;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  reg_qadc_capcal:12;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:3;
    };
}tv_sb1_ana_iqadc_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_if_fix_en:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  reg_iqcal_isel:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  res4:9;
    };
}tv_sb1_ana_iqadc_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_pow_i_adc:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_pow_q_adc:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  reg_pow_i_pga:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  reg_pow_q_pga:1;
        RBus_UInt32  res4:19;
    };
}tv_sb1_ana_iqadc_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_ib20u_ipga_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_ib20u_qpga_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  reg_ipga_fix_gain:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  reg_ipga_input_sel:3;
        RBus_UInt32  res6:1;
        RBus_UInt32  reg_qpga_bw:2;
        RBus_UInt32  reg_qpga_fix_gain:3;
        RBus_UInt32  res7:2;
        RBus_UInt32  res8:1;
        RBus_UInt32  reg_qpga_input_sel:3;
        RBus_UInt32  res9:1;
    };
}tv_sb1_ana_iqadc_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_ipga_d:4;
        RBus_UInt32  reg_qpga_d:4;
        RBus_UInt32  reg_i_ckin_sel:2;
        RBus_UInt32  reg_q_vcm_sel:2;
        RBus_UInt32  reg_q_ckin_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_i_single_end_en:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  reg_q_single_end_en:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  res4:8;
    };
}tv_sb1_ana_iqadc_ctrl5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_iadc_bypass_pga:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_qadc_bypass_pga:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  reg_iadc_ckout_div:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  reg_qadc_ckout_div:2;
        RBus_UInt32  reg_qadc_ldo0_sel:2;
        RBus_UInt32  reg_iadc_delay_en:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  reg_qadc_delay_en:1;
        RBus_UInt32  res5:3;
        RBus_UInt32  reg_iadc_duty_sel:2;
        RBus_UInt32  reg_iadc_i_vref_sel:2;
        RBus_UInt32  reg_qadc_duty_sel:2;
        RBus_UInt32  reg_qadc_i_vref_sel:2;
    };
}tv_sb1_ana_iqadc_ctrl6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_iadc_ldo_sel:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_qadc_ldo_sel:3;
        RBus_UInt32  reg_iadc_ldo0_sel:2;
        RBus_UInt32  res2:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:3;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:3;
        RBus_UInt32  reg_iadc_vref_sel:2;
        RBus_UInt32  res9:2;
        RBus_UInt32  reg_qadc_vref_sel:2;
        RBus_UInt32  res10:2;
    };
}tv_sb1_ana_iqadc_ctrl7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_dummy1:32;
    };
}tv_sb1_ana_dummy1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_dummy2:32;
    };
}tv_sb1_ana_dummy2_RBUS;




#endif 


#endif 
