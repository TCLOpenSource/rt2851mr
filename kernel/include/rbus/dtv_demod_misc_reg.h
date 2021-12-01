/**
* @file Merlin5_DesignSpec-dtv_demod_misc
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_DTV_DEMOD_MISC_REG_H_
#define _RBUS_DTV_DEMOD_MISC_REG_H_

#include "rbus_types.h"



//  DTV_DEMOD_MISC Register Address
#define  DTV_DEMOD_MISC_atb_wrapper_addr_offset                                 0x1816F000
#define  DTV_DEMOD_MISC_atb_wrapper_addr_offset_reg_addr                         "0xB816F000"
#define  DTV_DEMOD_MISC_atb_wrapper_addr_offset_reg                              0xB816F000
#define  DTV_DEMOD_MISC_atb_wrapper_addr_offset_inst_addr                        "0x0000"
#define  set_DTV_DEMOD_MISC_atb_wrapper_addr_offset_reg(data)                    (*((volatile unsigned int*)DTV_DEMOD_MISC_atb_wrapper_addr_offset_reg)=data)
#define  get_DTV_DEMOD_MISC_atb_wrapper_addr_offset_reg                          (*((volatile unsigned int*)DTV_DEMOD_MISC_atb_wrapper_addr_offset_reg))
#define  DTV_DEMOD_MISC_atb_wrapper_addr_offset_atb_wrapper_addr_offset_shift    (4)
#define  DTV_DEMOD_MISC_atb_wrapper_addr_offset_atb_wrapper_addr_offset_mask     (0xFFFFFFF0)
#define  DTV_DEMOD_MISC_atb_wrapper_addr_offset_atb_wrapper_addr_offset(data)    (0xFFFFFFF0&((data)<<4))
#define  DTV_DEMOD_MISC_atb_wrapper_addr_offset_get_atb_wrapper_addr_offset(data) ((0xFFFFFFF0&(data))>>4)

#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit                                   0x1816F004
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_reg_addr                           "0xB816F004"
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_reg                                0xB816F004
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_inst_addr                          "0x0001"
#define  set_DTV_DEMOD_MISC_atb_wrapper_cmd_limit_reg(data)                      (*((volatile unsigned int*)DTV_DEMOD_MISC_atb_wrapper_cmd_limit_reg)=data)
#define  get_DTV_DEMOD_MISC_atb_wrapper_cmd_limit_reg                            (*((volatile unsigned int*)DTV_DEMOD_MISC_atb_wrapper_cmd_limit_reg))
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_atb_wrapper_reset_sync_atb_en_shift (31)
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_atb_wrapper_reset_flow_en_shift    (30)
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_atb_adc_data_unsigned_shift        (29)
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_atb_wrapper_rcmd_limit_atb_shift   (24)
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_atb_wrapper_wcmd_limit_atb_shift   (16)
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_atb_wrapper_cmd_limit_shift        (8)
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_atb_wrapper_rcmd_limit_dc_shift    (4)
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_atb_wrapper_wcmd_limit_dc_shift    (0)
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_atb_wrapper_reset_sync_atb_en_mask (0x80000000)
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_atb_wrapper_reset_flow_en_mask     (0x40000000)
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_atb_adc_data_unsigned_mask         (0x20000000)
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_atb_wrapper_rcmd_limit_atb_mask    (0x1F000000)
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_atb_wrapper_wcmd_limit_atb_mask    (0x001F0000)
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_atb_wrapper_cmd_limit_mask         (0x00001F00)
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_atb_wrapper_rcmd_limit_dc_mask     (0x000000F0)
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_atb_wrapper_wcmd_limit_dc_mask     (0x0000000F)
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_atb_wrapper_reset_sync_atb_en(data) (0x80000000&((data)<<31))
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_atb_wrapper_reset_flow_en(data)    (0x40000000&((data)<<30))
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_atb_adc_data_unsigned(data)        (0x20000000&((data)<<29))
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_atb_wrapper_rcmd_limit_atb(data)   (0x1F000000&((data)<<24))
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_atb_wrapper_wcmd_limit_atb(data)   (0x001F0000&((data)<<16))
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_atb_wrapper_cmd_limit(data)        (0x00001F00&((data)<<8))
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_atb_wrapper_rcmd_limit_dc(data)    (0x000000F0&((data)<<4))
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_atb_wrapper_wcmd_limit_dc(data)    (0x0000000F&(data))
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_get_atb_wrapper_reset_sync_atb_en(data) ((0x80000000&(data))>>31)
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_get_atb_wrapper_reset_flow_en(data) ((0x40000000&(data))>>30)
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_get_atb_adc_data_unsigned(data)    ((0x20000000&(data))>>29)
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_get_atb_wrapper_rcmd_limit_atb(data) ((0x1F000000&(data))>>24)
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_get_atb_wrapper_wcmd_limit_atb(data) ((0x001F0000&(data))>>16)
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_get_atb_wrapper_cmd_limit(data)    ((0x00001F00&(data))>>8)
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_get_atb_wrapper_rcmd_limit_dc(data) ((0x000000F0&(data))>>4)
#define  DTV_DEMOD_MISC_atb_wrapper_cmd_limit_get_atb_wrapper_wcmd_limit_dc(data) (0x0000000F&(data))

#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status                                 0x1816F010
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_reg_addr                         "0xB816F010"
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_reg                              0xB816F010
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_inst_addr                        "0x0002"
#define  set_DTV_DEMOD_MISC_atb_wrapper_fifo_status_reg(data)                    (*((volatile unsigned int*)DTV_DEMOD_MISC_atb_wrapper_fifo_status_reg)=data)
#define  get_DTV_DEMOD_MISC_atb_wrapper_fifo_status_reg                          (*((volatile unsigned int*)DTV_DEMOD_MISC_atb_wrapper_fifo_status_reg))
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_cache_overflow_shift             (24)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_row_val_ptr_shift                (16)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_wfifo_empty_shift    (13)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_wfifo_full_shift     (12)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_rfifo_empty_shift    (9)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_rfifo_full_shift     (8)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_cfifo_empty_atbr_shift (4)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_cfifo_empty_atbw_shift (3)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_cfifo_empty_dc_shift (2)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_cfifo_full_atb_shift (1)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_cfifo_full_dc_shift  (0)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_cache_overflow_mask              (0x01000000)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_row_val_ptr_mask                 (0x00FF0000)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_wfifo_empty_mask     (0x00002000)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_wfifo_full_mask      (0x00001000)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_rfifo_empty_mask     (0x00000200)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_rfifo_full_mask      (0x00000100)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_cfifo_empty_atbr_mask (0x00000010)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_cfifo_empty_atbw_mask (0x00000008)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_cfifo_empty_dc_mask  (0x00000004)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_cfifo_full_atb_mask  (0x00000002)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_cfifo_full_dc_mask   (0x00000001)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_cache_overflow(data)             (0x01000000&((data)<<24))
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_row_val_ptr(data)                (0x00FF0000&((data)<<16))
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_wfifo_empty(data)    (0x00002000&((data)<<13))
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_wfifo_full(data)     (0x00001000&((data)<<12))
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_rfifo_empty(data)    (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_rfifo_full(data)     (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_cfifo_empty_atbr(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_cfifo_empty_atbw(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_cfifo_empty_dc(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_cfifo_full_atb(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_atb_wrapper_cfifo_full_dc(data)  (0x00000001&(data))
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_get_cache_overflow(data)         ((0x01000000&(data))>>24)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_get_row_val_ptr(data)            ((0x00FF0000&(data))>>16)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_get_atb_wrapper_wfifo_empty(data) ((0x00002000&(data))>>13)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_get_atb_wrapper_wfifo_full(data) ((0x00001000&(data))>>12)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_get_atb_wrapper_rfifo_empty(data) ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_get_atb_wrapper_rfifo_full(data) ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_get_atb_wrapper_cfifo_empty_atbr(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_get_atb_wrapper_cfifo_empty_atbw(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_get_atb_wrapper_cfifo_empty_dc(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_get_atb_wrapper_cfifo_full_atb(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_atb_wrapper_fifo_status_get_atb_wrapper_cfifo_full_dc(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_atb_wrapper_dccmd_status                                0x1816F014
#define  DTV_DEMOD_MISC_atb_wrapper_dccmd_status_reg_addr                        "0xB816F014"
#define  DTV_DEMOD_MISC_atb_wrapper_dccmd_status_reg                             0xB816F014
#define  DTV_DEMOD_MISC_atb_wrapper_dccmd_status_inst_addr                       "0x0003"
#define  set_DTV_DEMOD_MISC_atb_wrapper_dccmd_status_reg(data)                   (*((volatile unsigned int*)DTV_DEMOD_MISC_atb_wrapper_dccmd_status_reg)=data)
#define  get_DTV_DEMOD_MISC_atb_wrapper_dccmd_status_reg                         (*((volatile unsigned int*)DTV_DEMOD_MISC_atb_wrapper_dccmd_status_reg))
#define  DTV_DEMOD_MISC_atb_wrapper_dccmd_status_atb_wrapper_dc_wcmd_cnt_shift   (8)
#define  DTV_DEMOD_MISC_atb_wrapper_dccmd_status_atb_wrapper_dc_rcmd_cnt_shift   (0)
#define  DTV_DEMOD_MISC_atb_wrapper_dccmd_status_atb_wrapper_dc_wcmd_cnt_mask    (0x00001F00)
#define  DTV_DEMOD_MISC_atb_wrapper_dccmd_status_atb_wrapper_dc_rcmd_cnt_mask    (0x0000001F)
#define  DTV_DEMOD_MISC_atb_wrapper_dccmd_status_atb_wrapper_dc_wcmd_cnt(data)   (0x00001F00&((data)<<8))
#define  DTV_DEMOD_MISC_atb_wrapper_dccmd_status_atb_wrapper_dc_rcmd_cnt(data)   (0x0000001F&(data))
#define  DTV_DEMOD_MISC_atb_wrapper_dccmd_status_get_atb_wrapper_dc_wcmd_cnt(data) ((0x00001F00&(data))>>8)
#define  DTV_DEMOD_MISC_atb_wrapper_dccmd_status_get_atb_wrapper_dc_rcmd_cnt(data) (0x0000001F&(data))

#define  DTV_DEMOD_MISC_atb_wrapper_debug_sel                                   0x1816F020
#define  DTV_DEMOD_MISC_atb_wrapper_debug_sel_reg_addr                           "0xB816F020"
#define  DTV_DEMOD_MISC_atb_wrapper_debug_sel_reg                                0xB816F020
#define  DTV_DEMOD_MISC_atb_wrapper_debug_sel_inst_addr                          "0x0004"
#define  set_DTV_DEMOD_MISC_atb_wrapper_debug_sel_reg(data)                      (*((volatile unsigned int*)DTV_DEMOD_MISC_atb_wrapper_debug_sel_reg)=data)
#define  get_DTV_DEMOD_MISC_atb_wrapper_debug_sel_reg                            (*((volatile unsigned int*)DTV_DEMOD_MISC_atb_wrapper_debug_sel_reg))
#define  DTV_DEMOD_MISC_atb_wrapper_debug_sel_atb_wrapper_debugclk_sel_shift     (4)
#define  DTV_DEMOD_MISC_atb_wrapper_debug_sel_atb_wrapper_debug_sel_shift        (0)
#define  DTV_DEMOD_MISC_atb_wrapper_debug_sel_atb_wrapper_debugclk_sel_mask      (0x00000010)
#define  DTV_DEMOD_MISC_atb_wrapper_debug_sel_atb_wrapper_debug_sel_mask         (0x0000000F)
#define  DTV_DEMOD_MISC_atb_wrapper_debug_sel_atb_wrapper_debugclk_sel(data)     (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_atb_wrapper_debug_sel_atb_wrapper_debug_sel(data)        (0x0000000F&(data))
#define  DTV_DEMOD_MISC_atb_wrapper_debug_sel_get_atb_wrapper_debugclk_sel(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_atb_wrapper_debug_sel_get_atb_wrapper_debug_sel(data)    (0x0000000F&(data))

#define  DTV_DEMOD_MISC_atb_wrapper_dc_cmd_status                               0x1816F024
#define  DTV_DEMOD_MISC_atb_wrapper_dc_cmd_status_reg_addr                       "0xB816F024"
#define  DTV_DEMOD_MISC_atb_wrapper_dc_cmd_status_reg                            0xB816F024
#define  DTV_DEMOD_MISC_atb_wrapper_dc_cmd_status_inst_addr                      "0x0005"
#define  set_DTV_DEMOD_MISC_atb_wrapper_dc_cmd_status_reg(data)                  (*((volatile unsigned int*)DTV_DEMOD_MISC_atb_wrapper_dc_cmd_status_reg)=data)
#define  get_DTV_DEMOD_MISC_atb_wrapper_dc_cmd_status_reg                        (*((volatile unsigned int*)DTV_DEMOD_MISC_atb_wrapper_dc_cmd_status_reg))
#define  DTV_DEMOD_MISC_atb_wrapper_dc_cmd_status_atb_wrapper_debug_data_shift   (0)
#define  DTV_DEMOD_MISC_atb_wrapper_dc_cmd_status_atb_wrapper_debug_data_mask    (0x7FFFFFFF)
#define  DTV_DEMOD_MISC_atb_wrapper_dc_cmd_status_atb_wrapper_debug_data(data)   (0x7FFFFFFF&(data))
#define  DTV_DEMOD_MISC_atb_wrapper_dc_cmd_status_get_atb_wrapper_debug_data(data) (0x7FFFFFFF&(data))

#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_0                               0x1816F028
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_0_reg_addr                       "0xB816F028"
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_0_reg                            0xB816F028
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_0_inst_addr                      "0x0006"
#define  set_DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_0_reg(data)                  (*((volatile unsigned int*)DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_0_reg)=data)
#define  get_DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_0_reg                        (*((volatile unsigned int*)DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_0_reg))
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_0_atb_wrapper_cache_en_shift     (28)
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_0_atb_wrapper_read_delay_shift   (24)
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_0_atb_wrapper_t2dit_addr1_shift  (12)
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_0_atb_wrapper_t2dit_addr0_shift  (0)
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_0_atb_wrapper_cache_en_mask      (0x10000000)
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_0_atb_wrapper_read_delay_mask    (0x0F000000)
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_0_atb_wrapper_t2dit_addr1_mask   (0x00FFF000)
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_0_atb_wrapper_t2dit_addr0_mask   (0x00000FFF)
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_0_atb_wrapper_cache_en(data)     (0x10000000&((data)<<28))
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_0_atb_wrapper_read_delay(data)   (0x0F000000&((data)<<24))
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_0_atb_wrapper_t2dit_addr1(data)  (0x00FFF000&((data)<<12))
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_0_atb_wrapper_t2dit_addr0(data)  (0x00000FFF&(data))
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_0_get_atb_wrapper_cache_en(data) ((0x10000000&(data))>>28)
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_0_get_atb_wrapper_read_delay(data) ((0x0F000000&(data))>>24)
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_0_get_atb_wrapper_t2dit_addr1(data) ((0x00FFF000&(data))>>12)
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_0_get_atb_wrapper_t2dit_addr0(data) (0x00000FFF&(data))

#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_1                               0x1816F02C
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_1_reg_addr                       "0xB816F02C"
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_1_reg                            0xB816F02C
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_1_inst_addr                      "0x0007"
#define  set_DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_1_reg(data)                  (*((volatile unsigned int*)DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_1_reg)=data)
#define  get_DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_1_reg                        (*((volatile unsigned int*)DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_1_reg))
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_1_atb_wrapper_t2dit_addr3_shift  (12)
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_1_atb_wrapper_t2dit_addr2_shift  (0)
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_1_atb_wrapper_t2dit_addr3_mask   (0x00FFF000)
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_1_atb_wrapper_t2dit_addr2_mask   (0x00000FFF)
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_1_atb_wrapper_t2dit_addr3(data)  (0x00FFF000&((data)<<12))
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_1_atb_wrapper_t2dit_addr2(data)  (0x00000FFF&(data))
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_1_get_atb_wrapper_t2dit_addr3(data) ((0x00FFF000&(data))>>12)
#define  DTV_DEMOD_MISC_atb_wrapper_t2_dit_addr_1_get_atb_wrapper_t2dit_addr2(data) (0x00000FFF&(data))

#define  DTV_DEMOD_MISC_BIST_MODE_ATB_WRAP_                                     0x1816F030
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_WRAP__reg_addr                             "0xB816F030"
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_WRAP__reg                                  0xB816F030
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_WRAP__inst_addr                            "0x0008"
#define  set_DTV_DEMOD_MISC_BIST_MODE_ATB_WRAP__reg(data)                        (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_MODE_ATB_WRAP__reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_MODE_ATB_WRAP__reg                              (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_MODE_ATB_WRAP__reg))
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_WRAP__bist_mode_atb_wrap_shift             (0)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_WRAP__bist_mode_atb_wrap_mask              (0x00000001)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_WRAP__bist_mode_atb_wrap(data)             (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_WRAP__get_bist_mode_atb_wrap(data)         (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_WRAP                                  0x1816F034
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_WRAP_reg_addr                          "0xB816F034"
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_WRAP_reg                               0xB816F034
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_WRAP_inst_addr                         "0x0009"
#define  set_DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_WRAP_reg(data)                     (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_WRAP_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_WRAP_reg                           (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_WRAP_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_WRAP_drf_bist_mode_atb_wrap_shift      (0)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_WRAP_drf_bist_mode_atb_wrap_mask       (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_WRAP_drf_bist_mode_atb_wrap(data)      (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_WRAP_get_drf_bist_mode_atb_wrap(data)  (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_WRAP                                0x1816F038
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_WRAP_reg_addr                        "0xB816F038"
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_WRAP_reg                             0xB816F038
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_WRAP_inst_addr                       "0x000A"
#define  set_DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_WRAP_reg(data)                   (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_WRAP_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_WRAP_reg                         (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_WRAP_reg))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_WRAP_drf_test_resume_atb_wrap_shift  (0)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_WRAP_drf_test_resume_atb_wrap_mask   (0x00000001)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_WRAP_drf_test_resume_atb_wrap(data)  (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_WRAP_get_drf_test_resume_atb_wrap(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DVSE_ATB_SYS                                            0x1816F03C
#define  DTV_DEMOD_MISC_DVSE_ATB_SYS_reg_addr                                    "0xB816F03C"
#define  DTV_DEMOD_MISC_DVSE_ATB_SYS_reg                                         0xB816F03C
#define  DTV_DEMOD_MISC_DVSE_ATB_SYS_inst_addr                                   "0x000B"
#define  set_DTV_DEMOD_MISC_DVSE_ATB_SYS_reg(data)                               (*((volatile unsigned int*)DTV_DEMOD_MISC_DVSE_ATB_SYS_reg)=data)
#define  get_DTV_DEMOD_MISC_DVSE_ATB_SYS_reg                                     (*((volatile unsigned int*)DTV_DEMOD_MISC_DVSE_ATB_SYS_reg))
#define  DTV_DEMOD_MISC_DVSE_ATB_SYS_mbist_atb_wrap_dvse_shift                   (4)
#define  DTV_DEMOD_MISC_DVSE_ATB_SYS_mbist_atb_wrap_dvs_shift                    (0)
#define  DTV_DEMOD_MISC_DVSE_ATB_SYS_mbist_atb_wrap_dvse_mask                    (0x00000010)
#define  DTV_DEMOD_MISC_DVSE_ATB_SYS_mbist_atb_wrap_dvs_mask                     (0x0000000F)
#define  DTV_DEMOD_MISC_DVSE_ATB_SYS_mbist_atb_wrap_dvse(data)                   (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DVSE_ATB_SYS_mbist_atb_wrap_dvs(data)                    (0x0000000F&(data))
#define  DTV_DEMOD_MISC_DVSE_ATB_SYS_get_mbist_atb_wrap_dvse(data)               ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DVSE_ATB_SYS_get_mbist_atb_wrap_dvs(data)                (0x0000000F&(data))

#define  DTV_DEMOD_MISC_LS_ATB_SYS                                              0x1816F040
#define  DTV_DEMOD_MISC_LS_ATB_SYS_reg_addr                                      "0xB816F040"
#define  DTV_DEMOD_MISC_LS_ATB_SYS_reg                                           0xB816F040
#define  DTV_DEMOD_MISC_LS_ATB_SYS_inst_addr                                     "0x000C"
#define  set_DTV_DEMOD_MISC_LS_ATB_SYS_reg(data)                                 (*((volatile unsigned int*)DTV_DEMOD_MISC_LS_ATB_SYS_reg)=data)
#define  get_DTV_DEMOD_MISC_LS_ATB_SYS_reg                                       (*((volatile unsigned int*)DTV_DEMOD_MISC_LS_ATB_SYS_reg))
#define  DTV_DEMOD_MISC_LS_ATB_SYS_mbist_atb_wrap_ls_shift                       (0)
#define  DTV_DEMOD_MISC_LS_ATB_SYS_mbist_atb_wrap_ls_mask                        (0x00000001)
#define  DTV_DEMOD_MISC_LS_ATB_SYS_mbist_atb_wrap_ls(data)                       (0x00000001&(data))
#define  DTV_DEMOD_MISC_LS_ATB_SYS_get_mbist_atb_wrap_ls(data)                   (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_DONE_ATB_WRAP                                      0x1816F044
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_WRAP_reg_addr                              "0xB816F044"
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_WRAP_reg                                   0xB816F044
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_WRAP_inst_addr                             "0x000D"
#define  set_DTV_DEMOD_MISC_BIST_DONE_ATB_WRAP_reg(data)                         (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_DONE_ATB_WRAP_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_DONE_ATB_WRAP_reg                               (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_DONE_ATB_WRAP_reg))
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_WRAP_atb_wrap_bist_done_shift              (0)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_WRAP_atb_wrap_bist_done_mask               (0x00000001)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_WRAP_atb_wrap_bist_done(data)              (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_WRAP_get_atb_wrap_bist_done(data)          (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_WRAP                                  0x1816F048
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_WRAP_reg_addr                          "0xB816F048"
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_WRAP_reg                               0xB816F048
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_WRAP_inst_addr                         "0x000E"
#define  set_DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_WRAP_reg(data)                     (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_WRAP_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_WRAP_reg                           (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_WRAP_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_WRAP_atb_wrap_drf_bist_done_shift      (0)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_WRAP_atb_wrap_drf_bist_done_mask       (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_WRAP_atb_wrap_drf_bist_done(data)      (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_WRAP_get_atb_wrap_drf_bist_done(data)  (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_WRAP                                      0x1816F04C
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_WRAP_reg_addr                              "0xB816F04C"
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_WRAP_reg                                   0xB816F04C
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_WRAP_inst_addr                             "0x000F"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_ATB_WRAP_reg(data)                         (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_WRAP_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_ATB_WRAP_reg                               (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_WRAP_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_WRAP_atb_wrap_bist_fail_1_shift            (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_WRAP_atb_wrap_bist_fail_0_shift            (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_WRAP_atb_wrap_bist_fail_shift              (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_WRAP_atb_wrap_bist_fail_1_mask             (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_WRAP_atb_wrap_bist_fail_0_mask             (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_WRAP_atb_wrap_bist_fail_mask               (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_WRAP_atb_wrap_bist_fail_1(data)            (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_WRAP_atb_wrap_bist_fail_0(data)            (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_WRAP_atb_wrap_bist_fail(data)              (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_WRAP_get_atb_wrap_bist_fail_1(data)        ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_WRAP_get_atb_wrap_bist_fail_0(data)        ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_WRAP_get_atb_wrap_bist_fail(data)          (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_WRAP                                  0x1816F050
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_WRAP_reg_addr                          "0xB816F050"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_WRAP_reg                               0xB816F050
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_WRAP_inst_addr                         "0x0010"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_WRAP_reg(data)                     (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_WRAP_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_WRAP_reg                           (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_WRAP_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_WRAP_atb_wrap_drf_bist_fail_1_shift    (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_WRAP_atb_wrap_drf_bist_fail_0_shift    (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_WRAP_atb_wrap_drf_bist_fail_shift      (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_WRAP_atb_wrap_drf_bist_fail_1_mask     (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_WRAP_atb_wrap_drf_bist_fail_0_mask     (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_WRAP_atb_wrap_drf_bist_fail_mask       (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_WRAP_atb_wrap_drf_bist_fail_1(data)    (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_WRAP_atb_wrap_drf_bist_fail_0(data)    (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_WRAP_atb_wrap_drf_bist_fail(data)      (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_WRAP_get_atb_wrap_drf_bist_fail_1(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_WRAP_get_atb_wrap_drf_bist_fail_0(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_WRAP_get_atb_wrap_drf_bist_fail(data)  (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_WRAP                                0x1816F054
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_WRAP_reg_addr                        "0xB816F054"
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_WRAP_reg                             0xB816F054
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_WRAP_inst_addr                       "0x0011"
#define  set_DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_WRAP_reg(data)                   (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_WRAP_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_WRAP_reg                         (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_WRAP_reg))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_WRAP_atb_wrap_drf_start_pause_shift  (0)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_WRAP_atb_wrap_drf_start_pause_mask   (0x00000001)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_WRAP_atb_wrap_drf_start_pause(data)  (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_WRAP_get_atb_wrap_drf_start_pause(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_0                                      0x1816F100
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_0_reg_addr                              "0xB816F100"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_0_reg                                   0xB816F100
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_0_inst_addr                             "0x0012"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_0_reg(data)                         (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_0_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_0_reg                               (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_0_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_0_atb_ldpc_rom_dma_en_shift             (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_0_atb_ldpc_rom_dma_en_mask              (0x00000001)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_0_atb_ldpc_rom_dma_en(data)             (0x00000001&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_0_get_atb_ldpc_rom_dma_en(data)         (0x00000001&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_1                                      0x1816F104
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_1_reg_addr                              "0xB816F104"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_1_reg                                   0xB816F104
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_1_inst_addr                             "0x0013"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_1_reg(data)                         (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_1_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_1_reg                               (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_1_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_1_atb_ldpc_rom_dma_sw_reset_done_shift  (4)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_1_atb_ldpc_rom_dma_sw_reset_shift       (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_1_atb_ldpc_rom_dma_sw_reset_done_mask   (0x00000010)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_1_atb_ldpc_rom_dma_sw_reset_mask        (0x00000003)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_1_atb_ldpc_rom_dma_sw_reset_done(data)  (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_1_atb_ldpc_rom_dma_sw_reset(data)       (0x00000003&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_1_get_atb_ldpc_rom_dma_sw_reset_done(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_1_get_atb_ldpc_rom_dma_sw_reset(data)   (0x00000003&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_2                                      0x1816F108
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_2_reg_addr                              "0xB816F108"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_2_reg                                   0xB816F108
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_2_inst_addr                             "0x0014"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_2_reg(data)                         (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_2_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_2_reg                               (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_2_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_2_atb_ldpc_rom_dma_cfg_rd_shift         (4)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_2_atb_ldpc_rom_dma_cfg_wr_shift         (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_2_atb_ldpc_rom_dma_cfg_rd_mask          (0x00000010)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_2_atb_ldpc_rom_dma_cfg_wr_mask          (0x00000001)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_2_atb_ldpc_rom_dma_cfg_rd(data)         (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_2_atb_ldpc_rom_dma_cfg_wr(data)         (0x00000001&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_2_get_atb_ldpc_rom_dma_cfg_rd(data)     ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_2_get_atb_ldpc_rom_dma_cfg_wr(data)     (0x00000001&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_3                                      0x1816F10C
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_3_reg_addr                              "0xB816F10C"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_3_reg                                   0xB816F10C
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_3_inst_addr                             "0x0015"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_3_reg(data)                         (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_3_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_3_reg                               (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_3_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_3_atb_ldpc_rom_dma_cfg_addr_shift       (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_3_atb_ldpc_rom_dma_cfg_addr_mask        (0x000000FF)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_3_atb_ldpc_rom_dma_cfg_addr(data)       (0x000000FF&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_3_get_atb_ldpc_rom_dma_cfg_addr(data)   (0x000000FF&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_4                                      0x1816F110
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_4_reg_addr                              "0xB816F110"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_4_reg                                   0xB816F110
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_4_inst_addr                             "0x0016"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_4_reg(data)                         (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_4_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_4_reg                               (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_4_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_4_atb_ldpc_rom_dma_cfg_rdata_shift      (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_4_atb_ldpc_rom_dma_cfg_rdata_mask       (0xFFFFFFFF)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_4_atb_ldpc_rom_dma_cfg_rdata(data)      (0xFFFFFFFF&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_4_get_atb_ldpc_rom_dma_cfg_rdata(data)  (0xFFFFFFFF&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_8                                      0x1816F114
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_8_reg_addr                              "0xB816F114"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_8_reg                                   0xB816F114
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_8_inst_addr                             "0x0017"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_8_reg(data)                         (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_8_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_8_reg                               (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_8_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_8_atb_ldpc_rom_dma_cfg_wdata_shift      (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_8_atb_ldpc_rom_dma_cfg_wdata_mask       (0xFFFFFFFF)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_8_atb_ldpc_rom_dma_cfg_wdata(data)      (0xFFFFFFFF&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_8_get_atb_ldpc_rom_dma_cfg_wdata(data)  (0xFFFFFFFF&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_ERR_ST                                 0x1816F118
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_ERR_ST_reg_addr                         "0xB816F118"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_ERR_ST_reg                              0xB816F118
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_ERR_ST_inst_addr                        "0x0018"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_ERR_ST_reg(data)                    (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_ERR_ST_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_ERR_ST_reg                          (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_ERR_ST_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_ERR_ST_atb_ldpc_rom_dma_error_status_shift (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_ERR_ST_atb_ldpc_rom_dma_error_status_mask (0x000000FF)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_ERR_ST_atb_ldpc_rom_dma_error_status(data) (0x000000FF&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_ERR_ST_get_atb_ldpc_rom_dma_error_status(data) (0x000000FF&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_0                                  0x1816F11C
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_0_reg_addr                          "0xB816F11C"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_0_reg                               0xB816F11C
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_0_inst_addr                         "0x0019"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_0_reg(data)                     (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_0_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_0_reg                           (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_0_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_0_atb_ldpc_rom_dma_dbg_rdy_shift    (4)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_0_atb_ldpc_rom_dma_dbg_en_shift     (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_0_atb_ldpc_rom_dma_dbg_rdy_mask     (0x00000010)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_0_atb_ldpc_rom_dma_dbg_en_mask      (0x00000003)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_0_atb_ldpc_rom_dma_dbg_rdy(data)    (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_0_atb_ldpc_rom_dma_dbg_en(data)     (0x00000003&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_0_get_atb_ldpc_rom_dma_dbg_rdy(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_0_get_atb_ldpc_rom_dma_dbg_en(data) (0x00000003&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_1                                  0x1816F120
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_1_reg_addr                          "0xB816F120"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_1_reg                               0xB816F120
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_1_inst_addr                         "0x001A"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_1_reg(data)                     (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_1_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_1_reg                           (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_1_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_1_atb_ldpc_rom_dma_dbg_cr_shift     (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_1_atb_ldpc_rom_dma_dbg_cr_mask      (0x0000003F)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_1_atb_ldpc_rom_dma_dbg_cr(data)     (0x0000003F&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_1_get_atb_ldpc_rom_dma_dbg_cr(data) (0x0000003F&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_2                                  0x1816F124
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_2_reg_addr                          "0xB816F124"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_2_reg                               0xB816F124
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_2_inst_addr                         "0x001B"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_2_reg(data)                     (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_2_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_2_reg                           (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_2_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_2_atb_ldpc_rom_dma_dbg_data_sel_shift (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_2_atb_ldpc_rom_dma_dbg_data_sel_mask (0x000003FF)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_2_atb_ldpc_rom_dma_dbg_data_sel(data) (0x000003FF&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_2_get_atb_ldpc_rom_dma_dbg_data_sel(data) (0x000003FF&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_3                                  0x1816F128
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_3_reg_addr                          "0xB816F128"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_3_reg                               0xB816F128
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_3_inst_addr                         "0x001C"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_3_reg(data)                     (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_3_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_3_reg                           (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_3_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_3_atb_ldpc_rom_dma_dbg_data_255_224_shift (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_3_atb_ldpc_rom_dma_dbg_data_255_224_mask (0xFFFFFFFF)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_3_atb_ldpc_rom_dma_dbg_data_255_224(data) (0xFFFFFFFF&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_3_get_atb_ldpc_rom_dma_dbg_data_255_224(data) (0xFFFFFFFF&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_4                                  0x1816F12C
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_4_reg_addr                          "0xB816F12C"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_4_reg                               0xB816F12C
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_4_inst_addr                         "0x001D"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_4_reg(data)                     (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_4_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_4_reg                           (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_4_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_4_atb_ldpc_rom_dma_dbg_data_223_192_shift (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_4_atb_ldpc_rom_dma_dbg_data_223_192_mask (0xFFFFFFFF)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_4_atb_ldpc_rom_dma_dbg_data_223_192(data) (0xFFFFFFFF&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_4_get_atb_ldpc_rom_dma_dbg_data_223_192(data) (0xFFFFFFFF&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_5                                  0x1816F130
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_5_reg_addr                          "0xB816F130"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_5_reg                               0xB816F130
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_5_inst_addr                         "0x001E"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_5_reg(data)                     (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_5_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_5_reg                           (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_5_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_5_atb_ldpc_rom_dma_dbg_data_191_160_shift (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_5_atb_ldpc_rom_dma_dbg_data_191_160_mask (0xFFFFFFFF)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_5_atb_ldpc_rom_dma_dbg_data_191_160(data) (0xFFFFFFFF&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_5_get_atb_ldpc_rom_dma_dbg_data_191_160(data) (0xFFFFFFFF&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_6                                  0x1816F134
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_6_reg_addr                          "0xB816F134"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_6_reg                               0xB816F134
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_6_inst_addr                         "0x001F"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_6_reg(data)                     (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_6_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_6_reg                           (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_6_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_6_atb_ldpc_rom_dma_dbg_data_159_128_shift (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_6_atb_ldpc_rom_dma_dbg_data_159_128_mask (0xFFFFFFFF)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_6_atb_ldpc_rom_dma_dbg_data_159_128(data) (0xFFFFFFFF&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_6_get_atb_ldpc_rom_dma_dbg_data_159_128(data) (0xFFFFFFFF&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_7                                  0x1816F138
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_7_reg_addr                          "0xB816F138"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_7_reg                               0xB816F138
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_7_inst_addr                         "0x0020"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_7_reg(data)                     (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_7_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_7_reg                           (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_7_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_7_atb_ldpc_rom_dma_dbg_data_127_96_shift (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_7_atb_ldpc_rom_dma_dbg_data_127_96_mask (0xFFFFFFFF)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_7_atb_ldpc_rom_dma_dbg_data_127_96(data) (0xFFFFFFFF&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_7_get_atb_ldpc_rom_dma_dbg_data_127_96(data) (0xFFFFFFFF&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_8                                  0x1816F13C
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_8_reg_addr                          "0xB816F13C"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_8_reg                               0xB816F13C
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_8_inst_addr                         "0x0021"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_8_reg(data)                     (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_8_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_8_reg                           (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_8_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_8_atb_ldpc_rom_dma_dbg_data_95_64_shift (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_8_atb_ldpc_rom_dma_dbg_data_95_64_mask (0xFFFFFFFF)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_8_atb_ldpc_rom_dma_dbg_data_95_64(data) (0xFFFFFFFF&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_8_get_atb_ldpc_rom_dma_dbg_data_95_64(data) (0xFFFFFFFF&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_9                                  0x1816F140
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_9_reg_addr                          "0xB816F140"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_9_reg                               0xB816F140
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_9_inst_addr                         "0x0022"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_9_reg(data)                     (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_9_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_9_reg                           (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_9_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_9_atb_ldpc_rom_dma_dbg_data_63_32_shift (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_9_atb_ldpc_rom_dma_dbg_data_63_32_mask (0xFFFFFFFF)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_9_atb_ldpc_rom_dma_dbg_data_63_32(data) (0xFFFFFFFF&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_9_get_atb_ldpc_rom_dma_dbg_data_63_32(data) (0xFFFFFFFF&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_10                                 0x1816F144
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_10_reg_addr                         "0xB816F144"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_10_reg                              0xB816F144
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_10_inst_addr                        "0x0023"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_10_reg(data)                    (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_10_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_10_reg                          (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_10_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_10_atb_ldpc_rom_dma_dbg_data_31_0_shift (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_10_atb_ldpc_rom_dma_dbg_data_31_0_mask (0xFFFFFFFF)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_10_atb_ldpc_rom_dma_dbg_data_31_0(data) (0xFFFFFFFF&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_DBG_10_get_atb_ldpc_rom_dma_dbg_data_31_0(data) (0xFFFFFFFF&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_0                                0x1816F150
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_0_reg_addr                        "0xB816F150"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_0_reg                             0xB816F150
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_0_inst_addr                       "0x0024"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_0_reg(data)                   (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_0_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_0_reg                         (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_0_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_0_mbist_atb_ldpc_hmatrix_bist_mode_shift (1)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_0_mbist_atb_ldpc_hmatrix_pre_bist_mode_shift (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_0_mbist_atb_ldpc_hmatrix_bist_mode_mask (0x00000002)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_0_mbist_atb_ldpc_hmatrix_pre_bist_mode_mask (0x00000001)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_0_mbist_atb_ldpc_hmatrix_bist_mode(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_0_mbist_atb_ldpc_hmatrix_pre_bist_mode(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_0_get_mbist_atb_ldpc_hmatrix_bist_mode(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_0_get_mbist_atb_ldpc_hmatrix_pre_bist_mode(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_1                                0x1816F154
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_1_reg_addr                        "0xB816F154"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_1_reg                             0xB816F154
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_1_inst_addr                       "0x0025"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_1_reg(data)                   (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_1_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_1_reg                         (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_1_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_1_mbist_atb_ldpc_hmatrix_bist_done_shift (1)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_1_mbist_atb_ldpc_hmatrix_pre_bist_done_shift (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_1_mbist_atb_ldpc_hmatrix_bist_done_mask (0x00000002)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_1_mbist_atb_ldpc_hmatrix_pre_bist_done_mask (0x00000001)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_1_mbist_atb_ldpc_hmatrix_bist_done(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_1_mbist_atb_ldpc_hmatrix_pre_bist_done(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_1_get_mbist_atb_ldpc_hmatrix_bist_done(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_1_get_mbist_atb_ldpc_hmatrix_pre_bist_done(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_2                                0x1816F158
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_2_reg_addr                        "0xB816F158"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_2_reg                             0xB816F158
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_2_inst_addr                       "0x0026"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_2_reg(data)                   (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_2_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_2_reg                         (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_2_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_2_mbist_atb_ldpc_hmatrix_bist_fail_shift (1)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_2_mbist_atb_ldpc_hmatrix_pre_bist_fail_shift (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_2_mbist_atb_ldpc_hmatrix_bist_fail_mask (0x00000002)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_2_mbist_atb_ldpc_hmatrix_pre_bist_fail_mask (0x00000001)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_2_mbist_atb_ldpc_hmatrix_bist_fail(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_2_mbist_atb_ldpc_hmatrix_pre_bist_fail(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_2_get_mbist_atb_ldpc_hmatrix_bist_fail(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_2_get_mbist_atb_ldpc_hmatrix_pre_bist_fail(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_3                                0x1816F15C
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_3_reg_addr                        "0xB816F15C"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_3_reg                             0xB816F15C
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_3_inst_addr                       "0x0027"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_3_reg(data)                   (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_3_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_3_reg                         (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_3_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_3_mbist_atb_ldpc_hmatrix_drf_bist_mode_shift (1)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_3_mbist_atb_ldpc_hmatrix_pre_drf_bist_mode_shift (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_3_mbist_atb_ldpc_hmatrix_drf_bist_mode_mask (0x00000002)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_3_mbist_atb_ldpc_hmatrix_pre_drf_bist_mode_mask (0x00000001)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_3_mbist_atb_ldpc_hmatrix_drf_bist_mode(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_3_mbist_atb_ldpc_hmatrix_pre_drf_bist_mode(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_3_get_mbist_atb_ldpc_hmatrix_drf_bist_mode(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_3_get_mbist_atb_ldpc_hmatrix_pre_drf_bist_mode(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_4                                0x1816F160
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_4_reg_addr                        "0xB816F160"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_4_reg                             0xB816F160
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_4_inst_addr                       "0x0028"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_4_reg(data)                   (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_4_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_4_reg                         (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_4_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_4_mbist_atb_ldpc_hmatrix_drf_bist_done_shift (1)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_4_mbist_atb_ldpc_hmatrix_pre_drf_bist_done_shift (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_4_mbist_atb_ldpc_hmatrix_drf_bist_done_mask (0x00000002)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_4_mbist_atb_ldpc_hmatrix_pre_drf_bist_done_mask (0x00000001)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_4_mbist_atb_ldpc_hmatrix_drf_bist_done(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_4_mbist_atb_ldpc_hmatrix_pre_drf_bist_done(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_4_get_mbist_atb_ldpc_hmatrix_drf_bist_done(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_4_get_mbist_atb_ldpc_hmatrix_pre_drf_bist_done(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_5                                0x1816F164
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_5_reg_addr                        "0xB816F164"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_5_reg                             0xB816F164
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_5_inst_addr                       "0x0029"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_5_reg(data)                   (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_5_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_5_reg                         (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_5_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_5_mbist_atb_ldpc_hmatrix_drf_bist_fail_shift (1)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_5_mbist_atb_ldpc_hmatrix_pre_drf_bist_fail_shift (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_5_mbist_atb_ldpc_hmatrix_drf_bist_fail_mask (0x00000002)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_5_mbist_atb_ldpc_hmatrix_pre_drf_bist_fail_mask (0x00000001)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_5_mbist_atb_ldpc_hmatrix_drf_bist_fail(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_5_mbist_atb_ldpc_hmatrix_pre_drf_bist_fail(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_5_get_mbist_atb_ldpc_hmatrix_drf_bist_fail(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_5_get_mbist_atb_ldpc_hmatrix_pre_drf_bist_fail(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_6                                0x1816F168
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_6_reg_addr                        "0xB816F168"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_6_reg                             0xB816F168
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_6_inst_addr                       "0x002A"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_6_reg(data)                   (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_6_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_6_reg                         (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_6_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_6_mbist_atb_ldpc_hmatrix_drf_start_pause_shift (1)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_6_mbist_atb_ldpc_hmatrix_pre_drf_start_pause_shift (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_6_mbist_atb_ldpc_hmatrix_drf_start_pause_mask (0x00000002)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_6_mbist_atb_ldpc_hmatrix_pre_drf_start_pause_mask (0x00000001)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_6_mbist_atb_ldpc_hmatrix_drf_start_pause(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_6_mbist_atb_ldpc_hmatrix_pre_drf_start_pause(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_6_get_mbist_atb_ldpc_hmatrix_drf_start_pause(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_6_get_mbist_atb_ldpc_hmatrix_pre_drf_start_pause(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_7                                0x1816F16C
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_7_reg_addr                        "0xB816F16C"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_7_reg                             0xB816F16C
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_7_inst_addr                       "0x002B"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_7_reg(data)                   (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_7_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_7_reg                         (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_7_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_7_mbist_atb_ldpc_hmatrix_drf_test_resume_shift (1)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_7_mbist_atb_ldpc_hmatrix_pre_drf_test_resume_shift (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_7_mbist_atb_ldpc_hmatrix_drf_test_resume_mask (0x00000002)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_7_mbist_atb_ldpc_hmatrix_pre_drf_test_resume_mask (0x00000001)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_7_mbist_atb_ldpc_hmatrix_drf_test_resume(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_7_mbist_atb_ldpc_hmatrix_pre_drf_test_resume(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_7_get_mbist_atb_ldpc_hmatrix_drf_test_resume(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_7_get_mbist_atb_ldpc_hmatrix_pre_drf_test_resume(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8                                0x1816F170
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_reg_addr                        "0xB816F170"
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_reg                             0xB816F170
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_inst_addr                       "0x002C"
#define  set_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_reg(data)                   (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_reg                         (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_reg))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_mbist_atb_ldpc_hmatrix_rme_shift (28)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_mbist_atb_ldpc_hmatrix_rm_shift (24)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_mbist_atb_ldpc_hmatrix_pre_rme_shift (20)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_mbist_atb_ldpc_hmatrix_pre_rm_shift (16)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_mbist_atb_ldpc_hmatrix_test1_shift (5)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_mbist_atb_ldpc_hmatrix_pre_test1_shift (4)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_mbist_atb_ldpc_hmatrix_ls_shift (1)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_mbist_atb_ldpc_hmatrix_pre_ls_shift (0)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_mbist_atb_ldpc_hmatrix_rme_mask (0x10000000)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_mbist_atb_ldpc_hmatrix_rm_mask  (0x0F000000)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_mbist_atb_ldpc_hmatrix_pre_rme_mask (0x00100000)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_mbist_atb_ldpc_hmatrix_pre_rm_mask (0x000F0000)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_mbist_atb_ldpc_hmatrix_test1_mask (0x00000020)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_mbist_atb_ldpc_hmatrix_pre_test1_mask (0x00000010)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_mbist_atb_ldpc_hmatrix_ls_mask  (0x00000002)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_mbist_atb_ldpc_hmatrix_pre_ls_mask (0x00000001)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_mbist_atb_ldpc_hmatrix_rme(data) (0x10000000&((data)<<28))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_mbist_atb_ldpc_hmatrix_rm(data) (0x0F000000&((data)<<24))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_mbist_atb_ldpc_hmatrix_pre_rme(data) (0x00100000&((data)<<20))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_mbist_atb_ldpc_hmatrix_pre_rm(data) (0x000F0000&((data)<<16))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_mbist_atb_ldpc_hmatrix_test1(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_mbist_atb_ldpc_hmatrix_pre_test1(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_mbist_atb_ldpc_hmatrix_ls(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_mbist_atb_ldpc_hmatrix_pre_ls(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_get_mbist_atb_ldpc_hmatrix_rme(data) ((0x10000000&(data))>>28)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_get_mbist_atb_ldpc_hmatrix_rm(data) ((0x0F000000&(data))>>24)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_get_mbist_atb_ldpc_hmatrix_pre_rme(data) ((0x00100000&(data))>>20)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_get_mbist_atb_ldpc_hmatrix_pre_rm(data) ((0x000F0000&(data))>>16)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_get_mbist_atb_ldpc_hmatrix_test1(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_get_mbist_atb_ldpc_hmatrix_pre_test1(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_get_mbist_atb_ldpc_hmatrix_ls(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_ATB_LDPC_ROM_DMA_MBIST_8_get_mbist_atb_ldpc_hmatrix_pre_ls(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_dtv_demod_debug_sel                                     0x1816F060
#define  DTV_DEMOD_MISC_dtv_demod_debug_sel_reg_addr                             "0xB816F060"
#define  DTV_DEMOD_MISC_dtv_demod_debug_sel_reg                                  0xB816F060
#define  DTV_DEMOD_MISC_dtv_demod_debug_sel_inst_addr                            "0x002D"
#define  set_DTV_DEMOD_MISC_dtv_demod_debug_sel_reg(data)                        (*((volatile unsigned int*)DTV_DEMOD_MISC_dtv_demod_debug_sel_reg)=data)
#define  get_DTV_DEMOD_MISC_dtv_demod_debug_sel_reg                              (*((volatile unsigned int*)DTV_DEMOD_MISC_dtv_demod_debug_sel_reg))
#define  DTV_DEMOD_MISC_dtv_demod_debug_sel_dtv_demod_debug_sel_shift            (0)
#define  DTV_DEMOD_MISC_dtv_demod_debug_sel_dtv_demod_debug_sel_mask             (0x0000000F)
#define  DTV_DEMOD_MISC_dtv_demod_debug_sel_dtv_demod_debug_sel(data)            (0x0000000F&(data))
#define  DTV_DEMOD_MISC_dtv_demod_debug_sel_get_dtv_demod_debug_sel(data)        (0x0000000F&(data))

#define  DTV_DEMOD_MISC_dtv_demod_int_sel                                       0x1816F064
#define  DTV_DEMOD_MISC_dtv_demod_int_sel_reg_addr                               "0xB816F064"
#define  DTV_DEMOD_MISC_dtv_demod_int_sel_reg                                    0xB816F064
#define  DTV_DEMOD_MISC_dtv_demod_int_sel_inst_addr                              "0x002E"
#define  set_DTV_DEMOD_MISC_dtv_demod_int_sel_reg(data)                          (*((volatile unsigned int*)DTV_DEMOD_MISC_dtv_demod_int_sel_reg)=data)
#define  get_DTV_DEMOD_MISC_dtv_demod_int_sel_reg                                (*((volatile unsigned int*)DTV_DEMOD_MISC_dtv_demod_int_sel_reg))
#define  DTV_DEMOD_MISC_dtv_demod_int_sel_dtv_demod_int_en_shift                 (0)
#define  DTV_DEMOD_MISC_dtv_demod_int_sel_dtv_demod_int_en_mask                  (0x00000001)
#define  DTV_DEMOD_MISC_dtv_demod_int_sel_dtv_demod_int_en(data)                 (0x00000001&(data))
#define  DTV_DEMOD_MISC_dtv_demod_int_sel_get_dtv_demod_int_en(data)             (0x00000001&(data))

#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL                                           0x1816F068
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_reg_addr                                   "0xB816F068"
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_reg                                        0xB816F068
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_inst_addr                                  "0x002F"
#define  set_DTV_DEMOD_MISC_DTV_DEMOD_SEL_reg(data)                              (*((volatile unsigned int*)DTV_DEMOD_MISC_DTV_DEMOD_SEL_reg)=data)
#define  get_DTV_DEMOD_MISC_DTV_DEMOD_SEL_reg                                    (*((volatile unsigned int*)DTV_DEMOD_MISC_DTV_DEMOD_SEL_reg))
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_atb_i2c_sda_pol_shift                      (8)
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_atb_use_i2c_shift                          (7)
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_atb_i2c_adr_sel_shift                      (4)
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_atb_dvbc2_en_shift                         (3)
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_atb_dvbc_en_shift                          (2)
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_atb_dvbs_en_shift                          (1)
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_atb_dvbt_en_shift                          (0)
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_atb_i2c_sda_pol_mask                       (0x00000100)
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_atb_use_i2c_mask                           (0x00000080)
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_atb_i2c_adr_sel_mask                       (0x00000070)
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_atb_dvbc2_en_mask                          (0x00000008)
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_atb_dvbc_en_mask                           (0x00000004)
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_atb_dvbs_en_mask                           (0x00000002)
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_atb_dvbt_en_mask                           (0x00000001)
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_atb_i2c_sda_pol(data)                      (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_atb_use_i2c(data)                          (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_atb_i2c_adr_sel(data)                      (0x00000070&((data)<<4))
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_atb_dvbc2_en(data)                         (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_atb_dvbc_en(data)                          (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_atb_dvbs_en(data)                          (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_atb_dvbt_en(data)                          (0x00000001&(data))
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_get_atb_i2c_sda_pol(data)                  ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_get_atb_use_i2c(data)                      ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_get_atb_i2c_adr_sel(data)                  ((0x00000070&(data))>>4)
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_get_atb_dvbc2_en(data)                     ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_get_atb_dvbc_en(data)                      ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_get_atb_dvbs_en(data)                      ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DTV_DEMOD_SEL_get_atb_dvbt_en(data)                      (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_MODE_ATB                                           0x1816F200
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_reg_addr                                   "0xB816F200"
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_reg                                        0xB816F200
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_inst_addr                                  "0x0030"
#define  set_DTV_DEMOD_MISC_BIST_MODE_ATB_reg(data)                              (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_MODE_ATB_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_MODE_ATB_reg                                    (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_MODE_ATB_reg))
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_rd_cache2_bist_mode_shift              (16)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_rd_cache_bist_mode_shift               (15)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_vit2_bist_mode_shift                   (14)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_vit_bist_mode_shift                    (13)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_tdi2_bist_mode_shift                   (12)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_tdi_bist_mode_shift                    (11)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_sync_bist_mode_shift                   (10)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_ldpc2_bist_mode_shift                  (9)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_ldpc_bist_mode_shift                   (8)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_fft5_bist_mode_shift                   (7)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_fft4_bist_mode_shift                   (6)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_fft2_bist_mode_shift                   (5)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_fft1_bist_mode_shift                   (4)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_ce4_bist_mode_shift                    (3)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_ce3_bist_mode_shift                    (2)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_ce2_bist_mode_shift                    (1)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_ce1_bist_mode_shift                    (0)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_rd_cache2_bist_mode_mask               (0x00010000)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_rd_cache_bist_mode_mask                (0x00008000)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_vit2_bist_mode_mask                    (0x00004000)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_vit_bist_mode_mask                     (0x00002000)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_tdi2_bist_mode_mask                    (0x00001000)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_tdi_bist_mode_mask                     (0x00000800)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_sync_bist_mode_mask                    (0x00000400)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_ldpc2_bist_mode_mask                   (0x00000200)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_ldpc_bist_mode_mask                    (0x00000100)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_fft5_bist_mode_mask                    (0x00000080)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_fft4_bist_mode_mask                    (0x00000040)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_fft2_bist_mode_mask                    (0x00000020)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_fft1_bist_mode_mask                    (0x00000010)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_ce4_bist_mode_mask                     (0x00000008)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_ce3_bist_mode_mask                     (0x00000004)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_ce2_bist_mode_mask                     (0x00000002)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_ce1_bist_mode_mask                     (0x00000001)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_rd_cache2_bist_mode(data)              (0x00010000&((data)<<16))
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_rd_cache_bist_mode(data)               (0x00008000&((data)<<15))
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_vit2_bist_mode(data)                   (0x00004000&((data)<<14))
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_vit_bist_mode(data)                    (0x00002000&((data)<<13))
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_tdi2_bist_mode(data)                   (0x00001000&((data)<<12))
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_tdi_bist_mode(data)                    (0x00000800&((data)<<11))
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_sync_bist_mode(data)                   (0x00000400&((data)<<10))
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_ldpc2_bist_mode(data)                  (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_ldpc_bist_mode(data)                   (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_fft5_bist_mode(data)                   (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_fft4_bist_mode(data)                   (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_fft2_bist_mode(data)                   (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_fft1_bist_mode(data)                   (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_ce4_bist_mode(data)                    (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_ce3_bist_mode(data)                    (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_ce2_bist_mode(data)                    (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_atb_ce1_bist_mode(data)                    (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_get_atb_rd_cache2_bist_mode(data)          ((0x00010000&(data))>>16)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_get_atb_rd_cache_bist_mode(data)           ((0x00008000&(data))>>15)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_get_atb_vit2_bist_mode(data)               ((0x00004000&(data))>>14)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_get_atb_vit_bist_mode(data)                ((0x00002000&(data))>>13)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_get_atb_tdi2_bist_mode(data)               ((0x00001000&(data))>>12)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_get_atb_tdi_bist_mode(data)                ((0x00000800&(data))>>11)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_get_atb_sync_bist_mode(data)               ((0x00000400&(data))>>10)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_get_atb_ldpc2_bist_mode(data)              ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_get_atb_ldpc_bist_mode(data)               ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_get_atb_fft5_bist_mode(data)               ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_get_atb_fft4_bist_mode(data)               ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_get_atb_fft2_bist_mode(data)               ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_get_atb_fft1_bist_mode(data)               ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_get_atb_ce4_bist_mode(data)                ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_get_atb_ce3_bist_mode(data)                ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_get_atb_ce2_bist_mode(data)                ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_MODE_ATB_get_atb_ce1_bist_mode(data)                (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB                                       0x1816F204
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_reg_addr                               "0xB816F204"
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_reg                                    0xB816F204
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_inst_addr                              "0x0031"
#define  set_DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_reg(data)                          (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_reg                                (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_rd_cache2_drf_bist_mode_shift      (16)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_rd_cache_drf_bist_mode_shift       (15)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_vit2_drf_bist_mode_shift           (14)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_vit_drf_bist_mode_shift            (13)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_tdi2_drf_bist_mode_shift           (12)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_tdi_drf_bist_mode_shift            (11)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_sync_drf_bist_mode_shift           (10)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_ldpc2_drf_bist_mode_shift          (9)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_ldpc_drf_bist_mode_shift           (8)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_fft5_drf_bist_mode_shift           (7)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_fft4_drf_bist_mode_shift           (6)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_fft2_drf_bist_mode_shift           (5)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_fft1_drf_bist_mode_shift           (4)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_ce4_drf_bist_mode_shift            (3)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_ce3_drf_bist_mode_shift            (2)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_ce2_drf_bist_mode_shift            (1)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_ce1_drf_bist_mode_shift            (0)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_rd_cache2_drf_bist_mode_mask       (0x00010000)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_rd_cache_drf_bist_mode_mask        (0x00008000)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_vit2_drf_bist_mode_mask            (0x00004000)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_vit_drf_bist_mode_mask             (0x00002000)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_tdi2_drf_bist_mode_mask            (0x00001000)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_tdi_drf_bist_mode_mask             (0x00000800)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_sync_drf_bist_mode_mask            (0x00000400)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_ldpc2_drf_bist_mode_mask           (0x00000200)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_ldpc_drf_bist_mode_mask            (0x00000100)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_fft5_drf_bist_mode_mask            (0x00000080)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_fft4_drf_bist_mode_mask            (0x00000040)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_fft2_drf_bist_mode_mask            (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_fft1_drf_bist_mode_mask            (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_ce4_drf_bist_mode_mask             (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_ce3_drf_bist_mode_mask             (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_ce2_drf_bist_mode_mask             (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_ce1_drf_bist_mode_mask             (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_rd_cache2_drf_bist_mode(data)      (0x00010000&((data)<<16))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_rd_cache_drf_bist_mode(data)       (0x00008000&((data)<<15))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_vit2_drf_bist_mode(data)           (0x00004000&((data)<<14))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_vit_drf_bist_mode(data)            (0x00002000&((data)<<13))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_tdi2_drf_bist_mode(data)           (0x00001000&((data)<<12))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_tdi_drf_bist_mode(data)            (0x00000800&((data)<<11))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_sync_drf_bist_mode(data)           (0x00000400&((data)<<10))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_ldpc2_drf_bist_mode(data)          (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_ldpc_drf_bist_mode(data)           (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_fft5_drf_bist_mode(data)           (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_fft4_drf_bist_mode(data)           (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_fft2_drf_bist_mode(data)           (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_fft1_drf_bist_mode(data)           (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_ce4_drf_bist_mode(data)            (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_ce3_drf_bist_mode(data)            (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_ce2_drf_bist_mode(data)            (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_atb_ce1_drf_bist_mode(data)            (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_get_atb_rd_cache2_drf_bist_mode(data)  ((0x00010000&(data))>>16)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_get_atb_rd_cache_drf_bist_mode(data)   ((0x00008000&(data))>>15)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_get_atb_vit2_drf_bist_mode(data)       ((0x00004000&(data))>>14)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_get_atb_vit_drf_bist_mode(data)        ((0x00002000&(data))>>13)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_get_atb_tdi2_drf_bist_mode(data)       ((0x00001000&(data))>>12)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_get_atb_tdi_drf_bist_mode(data)        ((0x00000800&(data))>>11)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_get_atb_sync_drf_bist_mode(data)       ((0x00000400&(data))>>10)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_get_atb_ldpc2_drf_bist_mode(data)      ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_get_atb_ldpc_drf_bist_mode(data)       ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_get_atb_fft5_drf_bist_mode(data)       ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_get_atb_fft4_drf_bist_mode(data)       ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_get_atb_fft2_drf_bist_mode(data)       ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_get_atb_fft1_drf_bist_mode(data)       ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_get_atb_ce4_drf_bist_mode(data)        ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_get_atb_ce3_drf_bist_mode(data)        ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_get_atb_ce2_drf_bist_mode(data)        ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_ATB_get_atb_ce1_drf_bist_mode(data)        (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB                                     0x1816F208
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_reg_addr                             "0xB816F208"
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_reg                                  0xB816F208
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_inst_addr                            "0x0032"
#define  set_DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_reg(data)                        (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_reg                              (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_reg))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_rd_cache2_drf_test_resume_shift  (16)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_rd_cache_drf_test_resume_shift   (15)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_vit2_drf_test_resume_shift       (14)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_vit_drf_test_resume_shift        (13)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_tdi2_drf_test_resume_shift       (12)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_tdi_drf_test_resume_shift        (11)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_sync_drf_test_resume_shift       (10)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_ldpc2_drf_test_resume_shift      (9)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_ldpc_drf_test_resume_shift       (8)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_fft5_drf_test_resume_shift       (7)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_fft4_drf_test_resume_shift       (6)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_fft2_drf_test_resume_shift       (5)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_fft1_drf_test_resume_shift       (4)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_ce4_drf_test_resume_shift        (3)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_ce3_drf_test_resume_shift        (2)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_ce2_drf_test_resume_shift        (1)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_ce1_drf_test_resume_shift        (0)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_rd_cache2_drf_test_resume_mask   (0x00010000)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_rd_cache_drf_test_resume_mask    (0x00008000)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_vit2_drf_test_resume_mask        (0x00004000)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_vit_drf_test_resume_mask         (0x00002000)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_tdi2_drf_test_resume_mask        (0x00001000)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_tdi_drf_test_resume_mask         (0x00000800)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_sync_drf_test_resume_mask        (0x00000400)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_ldpc2_drf_test_resume_mask       (0x00000200)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_ldpc_drf_test_resume_mask        (0x00000100)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_fft5_drf_test_resume_mask        (0x00000080)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_fft4_drf_test_resume_mask        (0x00000040)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_fft2_drf_test_resume_mask        (0x00000020)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_fft1_drf_test_resume_mask        (0x00000010)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_ce4_drf_test_resume_mask         (0x00000008)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_ce3_drf_test_resume_mask         (0x00000004)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_ce2_drf_test_resume_mask         (0x00000002)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_ce1_drf_test_resume_mask         (0x00000001)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_rd_cache2_drf_test_resume(data)  (0x00010000&((data)<<16))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_rd_cache_drf_test_resume(data)   (0x00008000&((data)<<15))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_vit2_drf_test_resume(data)       (0x00004000&((data)<<14))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_vit_drf_test_resume(data)        (0x00002000&((data)<<13))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_tdi2_drf_test_resume(data)       (0x00001000&((data)<<12))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_tdi_drf_test_resume(data)        (0x00000800&((data)<<11))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_sync_drf_test_resume(data)       (0x00000400&((data)<<10))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_ldpc2_drf_test_resume(data)      (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_ldpc_drf_test_resume(data)       (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_fft5_drf_test_resume(data)       (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_fft4_drf_test_resume(data)       (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_fft2_drf_test_resume(data)       (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_fft1_drf_test_resume(data)       (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_ce4_drf_test_resume(data)        (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_ce3_drf_test_resume(data)        (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_ce2_drf_test_resume(data)        (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_atb_ce1_drf_test_resume(data)        (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_get_atb_rd_cache2_drf_test_resume(data) ((0x00010000&(data))>>16)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_get_atb_rd_cache_drf_test_resume(data) ((0x00008000&(data))>>15)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_get_atb_vit2_drf_test_resume(data)   ((0x00004000&(data))>>14)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_get_atb_vit_drf_test_resume(data)    ((0x00002000&(data))>>13)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_get_atb_tdi2_drf_test_resume(data)   ((0x00001000&(data))>>12)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_get_atb_tdi_drf_test_resume(data)    ((0x00000800&(data))>>11)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_get_atb_sync_drf_test_resume(data)   ((0x00000400&(data))>>10)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_get_atb_ldpc2_drf_test_resume(data)  ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_get_atb_ldpc_drf_test_resume(data)   ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_get_atb_fft5_drf_test_resume(data)   ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_get_atb_fft4_drf_test_resume(data)   ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_get_atb_fft2_drf_test_resume(data)   ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_get_atb_fft1_drf_test_resume(data)   ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_get_atb_ce4_drf_test_resume(data)    ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_get_atb_ce3_drf_test_resume(data)    ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_get_atb_ce2_drf_test_resume(data)    ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_ATB_get_atb_ce1_drf_test_resume(data)    (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_DONE_ATB                                           0x1816F20C
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_reg_addr                                   "0xB816F20C"
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_reg                                        0xB816F20C
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_inst_addr                                  "0x0033"
#define  set_DTV_DEMOD_MISC_BIST_DONE_ATB_reg(data)                              (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_DONE_ATB_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_DONE_ATB_reg                                    (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_DONE_ATB_reg))
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_rd_cache2_bist_done_shift              (16)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_rd_cache_bist_done_shift               (15)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_vit2_bist_done_shift                   (14)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_vit_bist_done_shift                    (13)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_tdi2_bist_done_shift                   (12)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_tdi_bist_done_shift                    (11)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_sync_bist_done_shift                   (10)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_ldpc2_bist_done_shift                  (9)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_ldpc_bist_done_shift                   (8)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_fft5_bist_done_shift                   (7)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_fft4_bist_done_shift                   (6)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_fft2_bist_done_shift                   (5)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_fft1_bist_done_shift                   (4)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_ce4_bist_done_shift                    (3)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_ce3_bist_done_shift                    (2)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_ce2_bist_done_shift                    (1)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_ce1_bist_done_shift                    (0)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_rd_cache2_bist_done_mask               (0x00010000)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_rd_cache_bist_done_mask                (0x00008000)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_vit2_bist_done_mask                    (0x00004000)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_vit_bist_done_mask                     (0x00002000)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_tdi2_bist_done_mask                    (0x00001000)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_tdi_bist_done_mask                     (0x00000800)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_sync_bist_done_mask                    (0x00000400)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_ldpc2_bist_done_mask                   (0x00000200)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_ldpc_bist_done_mask                    (0x00000100)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_fft5_bist_done_mask                    (0x00000080)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_fft4_bist_done_mask                    (0x00000040)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_fft2_bist_done_mask                    (0x00000020)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_fft1_bist_done_mask                    (0x00000010)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_ce4_bist_done_mask                     (0x00000008)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_ce3_bist_done_mask                     (0x00000004)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_ce2_bist_done_mask                     (0x00000002)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_ce1_bist_done_mask                     (0x00000001)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_rd_cache2_bist_done(data)              (0x00010000&((data)<<16))
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_rd_cache_bist_done(data)               (0x00008000&((data)<<15))
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_vit2_bist_done(data)                   (0x00004000&((data)<<14))
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_vit_bist_done(data)                    (0x00002000&((data)<<13))
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_tdi2_bist_done(data)                   (0x00001000&((data)<<12))
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_tdi_bist_done(data)                    (0x00000800&((data)<<11))
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_sync_bist_done(data)                   (0x00000400&((data)<<10))
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_ldpc2_bist_done(data)                  (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_ldpc_bist_done(data)                   (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_fft5_bist_done(data)                   (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_fft4_bist_done(data)                   (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_fft2_bist_done(data)                   (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_fft1_bist_done(data)                   (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_ce4_bist_done(data)                    (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_ce3_bist_done(data)                    (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_ce2_bist_done(data)                    (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_atb_ce1_bist_done(data)                    (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_get_atb_rd_cache2_bist_done(data)          ((0x00010000&(data))>>16)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_get_atb_rd_cache_bist_done(data)           ((0x00008000&(data))>>15)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_get_atb_vit2_bist_done(data)               ((0x00004000&(data))>>14)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_get_atb_vit_bist_done(data)                ((0x00002000&(data))>>13)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_get_atb_tdi2_bist_done(data)               ((0x00001000&(data))>>12)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_get_atb_tdi_bist_done(data)                ((0x00000800&(data))>>11)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_get_atb_sync_bist_done(data)               ((0x00000400&(data))>>10)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_get_atb_ldpc2_bist_done(data)              ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_get_atb_ldpc_bist_done(data)               ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_get_atb_fft5_bist_done(data)               ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_get_atb_fft4_bist_done(data)               ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_get_atb_fft2_bist_done(data)               ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_get_atb_fft1_bist_done(data)               ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_get_atb_ce4_bist_done(data)                ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_get_atb_ce3_bist_done(data)                ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_get_atb_ce2_bist_done(data)                ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_DONE_ATB_get_atb_ce1_bist_done(data)                (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB                                       0x1816F210
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_reg_addr                               "0xB816F210"
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_reg                                    0xB816F210
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_inst_addr                              "0x0034"
#define  set_DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_reg(data)                          (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_reg                                (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_rd_cache2_drf_bist_done_shift      (16)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_rd_cache_drf_bist_done_shift       (15)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_vit2_drf_bist_done_shift           (14)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_vit_drf_bist_done_shift            (13)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_tdi2_drf_bist_done_shift           (12)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_tdi_drf_bist_done_shift            (11)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_sync_drf_bist_done_shift           (10)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_ldpc2_drf_bist_done_shift          (9)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_ldpc_drf_bist_done_shift           (8)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_fft5_drf_bist_done_shift           (7)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_fft4_drf_bist_done_shift           (6)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_fft2_drf_bist_done_shift           (5)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_fft1_drf_bist_done_shift           (4)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_ce4_drf_bist_done_shift            (3)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_ce3_drf_bist_done_shift            (2)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_ce2_drf_bist_done_shift            (1)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_ce1_drf_bist_done_shift            (0)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_rd_cache2_drf_bist_done_mask       (0x00010000)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_rd_cache_drf_bist_done_mask        (0x00008000)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_vit2_drf_bist_done_mask            (0x00004000)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_vit_drf_bist_done_mask             (0x00002000)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_tdi2_drf_bist_done_mask            (0x00001000)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_tdi_drf_bist_done_mask             (0x00000800)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_sync_drf_bist_done_mask            (0x00000400)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_ldpc2_drf_bist_done_mask           (0x00000200)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_ldpc_drf_bist_done_mask            (0x00000100)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_fft5_drf_bist_done_mask            (0x00000080)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_fft4_drf_bist_done_mask            (0x00000040)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_fft2_drf_bist_done_mask            (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_fft1_drf_bist_done_mask            (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_ce4_drf_bist_done_mask             (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_ce3_drf_bist_done_mask             (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_ce2_drf_bist_done_mask             (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_ce1_drf_bist_done_mask             (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_rd_cache2_drf_bist_done(data)      (0x00010000&((data)<<16))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_rd_cache_drf_bist_done(data)       (0x00008000&((data)<<15))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_vit2_drf_bist_done(data)           (0x00004000&((data)<<14))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_vit_drf_bist_done(data)            (0x00002000&((data)<<13))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_tdi2_drf_bist_done(data)           (0x00001000&((data)<<12))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_tdi_drf_bist_done(data)            (0x00000800&((data)<<11))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_sync_drf_bist_done(data)           (0x00000400&((data)<<10))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_ldpc2_drf_bist_done(data)          (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_ldpc_drf_bist_done(data)           (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_fft5_drf_bist_done(data)           (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_fft4_drf_bist_done(data)           (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_fft2_drf_bist_done(data)           (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_fft1_drf_bist_done(data)           (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_ce4_drf_bist_done(data)            (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_ce3_drf_bist_done(data)            (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_ce2_drf_bist_done(data)            (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_atb_ce1_drf_bist_done(data)            (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_get_atb_rd_cache2_drf_bist_done(data)  ((0x00010000&(data))>>16)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_get_atb_rd_cache_drf_bist_done(data)   ((0x00008000&(data))>>15)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_get_atb_vit2_drf_bist_done(data)       ((0x00004000&(data))>>14)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_get_atb_vit_drf_bist_done(data)        ((0x00002000&(data))>>13)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_get_atb_tdi2_drf_bist_done(data)       ((0x00001000&(data))>>12)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_get_atb_tdi_drf_bist_done(data)        ((0x00000800&(data))>>11)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_get_atb_sync_drf_bist_done(data)       ((0x00000400&(data))>>10)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_get_atb_ldpc2_drf_bist_done(data)      ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_get_atb_ldpc_drf_bist_done(data)       ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_get_atb_fft5_drf_bist_done(data)       ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_get_atb_fft4_drf_bist_done(data)       ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_get_atb_fft2_drf_bist_done(data)       ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_get_atb_fft1_drf_bist_done(data)       ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_get_atb_ce4_drf_bist_done(data)        ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_get_atb_ce3_drf_bist_done(data)        ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_get_atb_ce2_drf_bist_done(data)        ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_ATB_get_atb_ce1_drf_bist_done(data)        (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_ATB                                           0x1816F214
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_reg_addr                                   "0xB816F214"
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_reg                                        0xB816F214
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_inst_addr                                  "0x0035"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_ATB_reg(data)                              (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_ATB_reg                                    (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_rd_cache2_bist_fail_shift              (16)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_rd_cache_bist_fail_shift               (15)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_vit2_bist_fail_shift                   (14)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_vit_bist_fail_shift                    (13)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_tdi2_bist_fail_shift                   (12)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_tdi_bist_fail_shift                    (11)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_sync_bist_fail_shift                   (10)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_ldpc2_bist_fail_shift                  (9)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_ldpc_bist_fail_shift                   (8)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_fft5_bist_fail_shift                   (7)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_fft4_bist_fail_shift                   (6)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_fft2_bist_fail_shift                   (5)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_fft1_bist_fail_shift                   (4)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_ce4_bist_fail_shift                    (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_ce3_bist_fail_shift                    (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_ce2_bist_fail_shift                    (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_ce1_bist_fail_shift                    (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_rd_cache2_bist_fail_mask               (0x00010000)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_rd_cache_bist_fail_mask                (0x00008000)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_vit2_bist_fail_mask                    (0x00004000)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_vit_bist_fail_mask                     (0x00002000)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_tdi2_bist_fail_mask                    (0x00001000)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_tdi_bist_fail_mask                     (0x00000800)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_sync_bist_fail_mask                    (0x00000400)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_ldpc2_bist_fail_mask                   (0x00000200)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_ldpc_bist_fail_mask                    (0x00000100)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_fft5_bist_fail_mask                    (0x00000080)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_fft4_bist_fail_mask                    (0x00000040)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_fft2_bist_fail_mask                    (0x00000020)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_fft1_bist_fail_mask                    (0x00000010)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_ce4_bist_fail_mask                     (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_ce3_bist_fail_mask                     (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_ce2_bist_fail_mask                     (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_ce1_bist_fail_mask                     (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_rd_cache2_bist_fail(data)              (0x00010000&((data)<<16))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_rd_cache_bist_fail(data)               (0x00008000&((data)<<15))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_vit2_bist_fail(data)                   (0x00004000&((data)<<14))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_vit_bist_fail(data)                    (0x00002000&((data)<<13))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_tdi2_bist_fail(data)                   (0x00001000&((data)<<12))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_tdi_bist_fail(data)                    (0x00000800&((data)<<11))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_sync_bist_fail(data)                   (0x00000400&((data)<<10))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_ldpc2_bist_fail(data)                  (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_ldpc_bist_fail(data)                   (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_fft5_bist_fail(data)                   (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_fft4_bist_fail(data)                   (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_fft2_bist_fail(data)                   (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_fft1_bist_fail(data)                   (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_ce4_bist_fail(data)                    (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_ce3_bist_fail(data)                    (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_ce2_bist_fail(data)                    (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_atb_ce1_bist_fail(data)                    (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_get_atb_rd_cache2_bist_fail(data)          ((0x00010000&(data))>>16)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_get_atb_rd_cache_bist_fail(data)           ((0x00008000&(data))>>15)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_get_atb_vit2_bist_fail(data)               ((0x00004000&(data))>>14)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_get_atb_vit_bist_fail(data)                ((0x00002000&(data))>>13)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_get_atb_tdi2_bist_fail(data)               ((0x00001000&(data))>>12)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_get_atb_tdi_bist_fail(data)                ((0x00000800&(data))>>11)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_get_atb_sync_bist_fail(data)               ((0x00000400&(data))>>10)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_get_atb_ldpc2_bist_fail(data)              ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_get_atb_ldpc_bist_fail(data)               ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_get_atb_fft5_bist_fail(data)               ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_get_atb_fft4_bist_fail(data)               ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_get_atb_fft2_bist_fail(data)               ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_get_atb_fft1_bist_fail(data)               ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_get_atb_ce4_bist_fail(data)                ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_get_atb_ce3_bist_fail(data)                ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_get_atb_ce2_bist_fail(data)                ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_get_atb_ce1_bist_fail(data)                (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB                                       0x1816F218
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_reg_addr                               "0xB816F218"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_reg                                    0xB816F218
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_inst_addr                              "0x0036"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_reg(data)                          (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_reg                                (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_rd_cache2_drf_bist_fail_shift      (16)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_rd_cache_drf_bist_fail_shift       (15)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_vit2_drf_bist_fail_shift           (14)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_vit_drf_bist_fail_shift            (13)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_tdi2_drf_bist_fail_shift           (12)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_tdi_drf_bist_fail_shift            (11)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_sync_drf_bist_fail_shift           (10)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_ldpc2_drf_bist_fail_shift          (9)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_ldpc_drf_bist_fail_shift           (8)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_fft5_drf_bist_fail_shift           (7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_fft4_drf_bist_fail_shift           (6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_fft2_drf_bist_fail_shift           (5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_fft1_drf_bist_fail_shift           (4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_ce4_drf_bist_fail_shift            (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_ce3_drf_bist_fail_shift            (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_ce2_drf_bist_fail_shift            (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_ce1_drf_bist_fail_shift            (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_rd_cache2_drf_bist_fail_mask       (0x00010000)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_rd_cache_drf_bist_fail_mask        (0x00008000)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_vit2_drf_bist_fail_mask            (0x00004000)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_vit_drf_bist_fail_mask             (0x00002000)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_tdi2_drf_bist_fail_mask            (0x00001000)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_tdi_drf_bist_fail_mask             (0x00000800)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_sync_drf_bist_fail_mask            (0x00000400)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_ldpc2_drf_bist_fail_mask           (0x00000200)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_ldpc_drf_bist_fail_mask            (0x00000100)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_fft5_drf_bist_fail_mask            (0x00000080)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_fft4_drf_bist_fail_mask            (0x00000040)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_fft2_drf_bist_fail_mask            (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_fft1_drf_bist_fail_mask            (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_ce4_drf_bist_fail_mask             (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_ce3_drf_bist_fail_mask             (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_ce2_drf_bist_fail_mask             (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_ce1_drf_bist_fail_mask             (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_rd_cache2_drf_bist_fail(data)      (0x00010000&((data)<<16))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_rd_cache_drf_bist_fail(data)       (0x00008000&((data)<<15))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_vit2_drf_bist_fail(data)           (0x00004000&((data)<<14))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_vit_drf_bist_fail(data)            (0x00002000&((data)<<13))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_tdi2_drf_bist_fail(data)           (0x00001000&((data)<<12))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_tdi_drf_bist_fail(data)            (0x00000800&((data)<<11))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_sync_drf_bist_fail(data)           (0x00000400&((data)<<10))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_ldpc2_drf_bist_fail(data)          (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_ldpc_drf_bist_fail(data)           (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_fft5_drf_bist_fail(data)           (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_fft4_drf_bist_fail(data)           (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_fft2_drf_bist_fail(data)           (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_fft1_drf_bist_fail(data)           (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_ce4_drf_bist_fail(data)            (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_ce3_drf_bist_fail(data)            (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_ce2_drf_bist_fail(data)            (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_atb_ce1_drf_bist_fail(data)            (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_get_atb_rd_cache2_drf_bist_fail(data)  ((0x00010000&(data))>>16)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_get_atb_rd_cache_drf_bist_fail(data)   ((0x00008000&(data))>>15)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_get_atb_vit2_drf_bist_fail(data)       ((0x00004000&(data))>>14)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_get_atb_vit_drf_bist_fail(data)        ((0x00002000&(data))>>13)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_get_atb_tdi2_drf_bist_fail(data)       ((0x00001000&(data))>>12)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_get_atb_tdi_drf_bist_fail(data)        ((0x00000800&(data))>>11)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_get_atb_sync_drf_bist_fail(data)       ((0x00000400&(data))>>10)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_get_atb_ldpc2_drf_bist_fail(data)      ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_get_atb_ldpc_drf_bist_fail(data)       ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_get_atb_fft5_drf_bist_fail(data)       ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_get_atb_fft4_drf_bist_fail(data)       ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_get_atb_fft2_drf_bist_fail(data)       ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_get_atb_fft1_drf_bist_fail(data)       ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_get_atb_ce4_drf_bist_fail(data)        ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_get_atb_ce3_drf_bist_fail(data)        ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_get_atb_ce2_drf_bist_fail(data)        ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_get_atb_ce1_drf_bist_fail(data)        (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB                                     0x1816F21C
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_reg_addr                             "0xB816F21C"
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_reg                                  0xB816F21C
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_inst_addr                            "0x0037"
#define  set_DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_reg(data)                        (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_reg                              (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_reg))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_rd_cache2_drf_start_pause_shift  (16)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_rd_cache_drf_start_pause_shift   (15)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_vit2_drf_start_pause_shift       (14)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_vit_drf_start_pause_shift        (13)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_tdi2_drf_start_pause_shift       (12)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_tdi_drf_start_pause_shift        (11)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_sync_drf_start_pause_shift       (10)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_ldpc2_drf_start_pause_shift      (9)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_ldpc_drf_start_pause_shift       (8)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_fft5_drf_start_pause_shift       (7)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_fft4_drf_start_pause_shift       (6)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_fft2_drf_start_pause_shift       (5)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_fft1_drf_start_pause_shift       (4)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_ce4_drf_start_pause_shift        (3)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_ce3_drf_start_pause_shift        (2)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_ce2_drf_start_pause_shift        (1)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_ce1_drf_start_pause_shift        (0)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_rd_cache2_drf_start_pause_mask   (0x00010000)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_rd_cache_drf_start_pause_mask    (0x00008000)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_vit2_drf_start_pause_mask        (0x00004000)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_vit_drf_start_pause_mask         (0x00002000)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_tdi2_drf_start_pause_mask        (0x00001000)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_tdi_drf_start_pause_mask         (0x00000800)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_sync_drf_start_pause_mask        (0x00000400)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_ldpc2_drf_start_pause_mask       (0x00000200)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_ldpc_drf_start_pause_mask        (0x00000100)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_fft5_drf_start_pause_mask        (0x00000080)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_fft4_drf_start_pause_mask        (0x00000040)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_fft2_drf_start_pause_mask        (0x00000020)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_fft1_drf_start_pause_mask        (0x00000010)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_ce4_drf_start_pause_mask         (0x00000008)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_ce3_drf_start_pause_mask         (0x00000004)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_ce2_drf_start_pause_mask         (0x00000002)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_ce1_drf_start_pause_mask         (0x00000001)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_rd_cache2_drf_start_pause(data)  (0x00010000&((data)<<16))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_rd_cache_drf_start_pause(data)   (0x00008000&((data)<<15))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_vit2_drf_start_pause(data)       (0x00004000&((data)<<14))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_vit_drf_start_pause(data)        (0x00002000&((data)<<13))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_tdi2_drf_start_pause(data)       (0x00001000&((data)<<12))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_tdi_drf_start_pause(data)        (0x00000800&((data)<<11))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_sync_drf_start_pause(data)       (0x00000400&((data)<<10))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_ldpc2_drf_start_pause(data)      (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_ldpc_drf_start_pause(data)       (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_fft5_drf_start_pause(data)       (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_fft4_drf_start_pause(data)       (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_fft2_drf_start_pause(data)       (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_fft1_drf_start_pause(data)       (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_ce4_drf_start_pause(data)        (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_ce3_drf_start_pause(data)        (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_ce2_drf_start_pause(data)        (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_atb_ce1_drf_start_pause(data)        (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_get_atb_rd_cache2_drf_start_pause(data) ((0x00010000&(data))>>16)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_get_atb_rd_cache_drf_start_pause(data) ((0x00008000&(data))>>15)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_get_atb_vit2_drf_start_pause(data)   ((0x00004000&(data))>>14)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_get_atb_vit_drf_start_pause(data)    ((0x00002000&(data))>>13)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_get_atb_tdi2_drf_start_pause(data)   ((0x00001000&(data))>>12)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_get_atb_tdi_drf_start_pause(data)    ((0x00000800&(data))>>11)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_get_atb_sync_drf_start_pause(data)   ((0x00000400&(data))>>10)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_get_atb_ldpc2_drf_start_pause(data)  ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_get_atb_ldpc_drf_start_pause(data)   ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_get_atb_fft5_drf_start_pause(data)   ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_get_atb_fft4_drf_start_pause(data)   ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_get_atb_fft2_drf_start_pause(data)   ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_get_atb_fft1_drf_start_pause(data)   ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_get_atb_ce4_drf_start_pause(data)    ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_get_atb_ce3_drf_start_pause(data)    ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_get_atb_ce2_drf_start_pause(data)    ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_ATB_get_atb_ce1_drf_start_pause(data)    (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE1                                       0x1816F220
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE1_reg_addr                               "0xB816F220"
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE1_reg                                    0xB816F220
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE1_inst_addr                              "0x0038"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_ATB_CE1_reg(data)                          (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_CE1_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_ATB_CE1_reg                                (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_CE1_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE1_atb_ce1_bist_fail_2_shift              (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE1_atb_ce1_bist_fail_1_shift              (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE1_atb_ce1_bist_fail_0_shift              (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE1_atb_ce1_bist_fail_2_mask               (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE1_atb_ce1_bist_fail_1_mask               (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE1_atb_ce1_bist_fail_0_mask               (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE1_atb_ce1_bist_fail_2(data)              (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE1_atb_ce1_bist_fail_1(data)              (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE1_atb_ce1_bist_fail_0(data)              (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE1_get_atb_ce1_bist_fail_2(data)          ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE1_get_atb_ce1_bist_fail_1(data)          ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE1_get_atb_ce1_bist_fail_0(data)          (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE2                                       0x1816F224
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE2_reg_addr                               "0xB816F224"
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE2_reg                                    0xB816F224
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE2_inst_addr                              "0x0039"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_ATB_CE2_reg(data)                          (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_CE2_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_ATB_CE2_reg                                (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_CE2_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE2_atb_ce2_bist_fail_2_shift              (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE2_atb_ce2_bist_fail_1_shift              (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE2_atb_ce2_bist_fail_0_shift              (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE2_atb_ce2_bist_fail_2_mask               (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE2_atb_ce2_bist_fail_1_mask               (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE2_atb_ce2_bist_fail_0_mask               (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE2_atb_ce2_bist_fail_2(data)              (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE2_atb_ce2_bist_fail_1(data)              (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE2_atb_ce2_bist_fail_0(data)              (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE2_get_atb_ce2_bist_fail_2(data)          ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE2_get_atb_ce2_bist_fail_1(data)          ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE2_get_atb_ce2_bist_fail_0(data)          (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE3                                       0x1816F228
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE3_reg_addr                               "0xB816F228"
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE3_reg                                    0xB816F228
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE3_inst_addr                              "0x003A"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_ATB_CE3_reg(data)                          (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_CE3_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_ATB_CE3_reg                                (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_CE3_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE3_atb_ce3_bist_fail_3_shift              (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE3_atb_ce3_bist_fail_2_shift              (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE3_atb_ce3_bist_fail_1_shift              (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE3_atb_ce3_bist_fail_0_shift              (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE3_atb_ce3_bist_fail_3_mask               (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE3_atb_ce3_bist_fail_2_mask               (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE3_atb_ce3_bist_fail_1_mask               (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE3_atb_ce3_bist_fail_0_mask               (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE3_atb_ce3_bist_fail_3(data)              (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE3_atb_ce3_bist_fail_2(data)              (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE3_atb_ce3_bist_fail_1(data)              (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE3_atb_ce3_bist_fail_0(data)              (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE3_get_atb_ce3_bist_fail_3(data)          ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE3_get_atb_ce3_bist_fail_2(data)          ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE3_get_atb_ce3_bist_fail_1(data)          ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE3_get_atb_ce3_bist_fail_0(data)          (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4                                       0x1816F22C
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_reg_addr                               "0xB816F22C"
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_reg                                    0xB816F22C
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_inst_addr                              "0x003B"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_reg(data)                          (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_reg                                (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_atb_ce4_bist_fail_5_shift              (5)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_atb_ce4_bist_fail_4_shift              (4)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_atb_ce4_bist_fail_3_shift              (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_atb_ce4_bist_fail_2_shift              (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_atb_ce4_bist_fail_1_shift              (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_atb_ce4_bist_fail_0_shift              (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_atb_ce4_bist_fail_5_mask               (0x00000020)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_atb_ce4_bist_fail_4_mask               (0x00000010)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_atb_ce4_bist_fail_3_mask               (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_atb_ce4_bist_fail_2_mask               (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_atb_ce4_bist_fail_1_mask               (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_atb_ce4_bist_fail_0_mask               (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_atb_ce4_bist_fail_5(data)              (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_atb_ce4_bist_fail_4(data)              (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_atb_ce4_bist_fail_3(data)              (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_atb_ce4_bist_fail_2(data)              (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_atb_ce4_bist_fail_1(data)              (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_atb_ce4_bist_fail_0(data)              (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_get_atb_ce4_bist_fail_5(data)          ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_get_atb_ce4_bist_fail_4(data)          ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_get_atb_ce4_bist_fail_3(data)          ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_get_atb_ce4_bist_fail_2(data)          ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_get_atb_ce4_bist_fail_1(data)          ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_CE4_get_atb_ce4_bist_fail_0(data)          (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1                                      0x1816F230
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_reg_addr                              "0xB816F230"
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_reg                                   0xB816F230
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_inst_addr                             "0x003C"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_reg(data)                         (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_reg                               (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_atb_fft1_bist_fail_7_shift            (7)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_atb_fft1_bist_fail_6_shift            (6)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_atb_fft1_bist_fail_5_shift            (5)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_atb_fft1_bist_fail_4_shift            (4)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_atb_fft1_bist_fail_3_shift            (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_atb_fft1_bist_fail_2_shift            (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_atb_fft1_bist_fail_1_shift            (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_atb_fft1_bist_fail_0_shift            (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_atb_fft1_bist_fail_7_mask             (0x00000080)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_atb_fft1_bist_fail_6_mask             (0x00000040)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_atb_fft1_bist_fail_5_mask             (0x00000020)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_atb_fft1_bist_fail_4_mask             (0x00000010)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_atb_fft1_bist_fail_3_mask             (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_atb_fft1_bist_fail_2_mask             (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_atb_fft1_bist_fail_1_mask             (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_atb_fft1_bist_fail_0_mask             (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_atb_fft1_bist_fail_7(data)            (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_atb_fft1_bist_fail_6(data)            (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_atb_fft1_bist_fail_5(data)            (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_atb_fft1_bist_fail_4(data)            (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_atb_fft1_bist_fail_3(data)            (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_atb_fft1_bist_fail_2(data)            (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_atb_fft1_bist_fail_1(data)            (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_atb_fft1_bist_fail_0(data)            (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_get_atb_fft1_bist_fail_7(data)        ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_get_atb_fft1_bist_fail_6(data)        ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_get_atb_fft1_bist_fail_5(data)        ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_get_atb_fft1_bist_fail_4(data)        ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_get_atb_fft1_bist_fail_3(data)        ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_get_atb_fft1_bist_fail_2(data)        ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_get_atb_fft1_bist_fail_1(data)        ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT1_get_atb_fft1_bist_fail_0(data)        (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2                                      0x1816F234
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_reg_addr                              "0xB816F234"
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_reg                                   0xB816F234
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_inst_addr                             "0x003D"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_reg(data)                         (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_reg                               (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_atb_fft2_bist_fail_7_shift            (7)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_atb_fft2_bist_fail_6_shift            (6)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_atb_fft2_bist_fail_5_shift            (5)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_atb_fft2_bist_fail_4_shift            (4)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_atb_fft2_bist_fail_3_shift            (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_atb_fft2_bist_fail_2_shift            (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_atb_fft2_bist_fail_1_shift            (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_atb_fft2_bist_fail_0_shift            (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_atb_fft2_bist_fail_7_mask             (0x00000080)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_atb_fft2_bist_fail_6_mask             (0x00000040)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_atb_fft2_bist_fail_5_mask             (0x00000020)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_atb_fft2_bist_fail_4_mask             (0x00000010)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_atb_fft2_bist_fail_3_mask             (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_atb_fft2_bist_fail_2_mask             (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_atb_fft2_bist_fail_1_mask             (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_atb_fft2_bist_fail_0_mask             (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_atb_fft2_bist_fail_7(data)            (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_atb_fft2_bist_fail_6(data)            (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_atb_fft2_bist_fail_5(data)            (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_atb_fft2_bist_fail_4(data)            (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_atb_fft2_bist_fail_3(data)            (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_atb_fft2_bist_fail_2(data)            (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_atb_fft2_bist_fail_1(data)            (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_atb_fft2_bist_fail_0(data)            (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_get_atb_fft2_bist_fail_7(data)        ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_get_atb_fft2_bist_fail_6(data)        ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_get_atb_fft2_bist_fail_5(data)        ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_get_atb_fft2_bist_fail_4(data)        ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_get_atb_fft2_bist_fail_3(data)        ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_get_atb_fft2_bist_fail_2(data)        ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_get_atb_fft2_bist_fail_1(data)        ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT2_get_atb_fft2_bist_fail_0(data)        (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4                                      0x1816F23C
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_reg_addr                              "0xB816F23C"
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_reg                                   0xB816F23C
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_inst_addr                             "0x003E"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_reg(data)                         (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_reg                               (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_atb_fft4_bist_fail_7_shift            (7)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_atb_fft4_bist_fail_6_shift            (6)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_atb_fft4_bist_fail_5_shift            (5)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_atb_fft4_bist_fail_4_shift            (4)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_atb_fft4_bist_fail_3_shift            (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_atb_fft4_bist_fail_2_shift            (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_atb_fft4_bist_fail_1_shift            (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_atb_fft4_bist_fail_0_shift            (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_atb_fft4_bist_fail_7_mask             (0x00000080)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_atb_fft4_bist_fail_6_mask             (0x00000040)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_atb_fft4_bist_fail_5_mask             (0x00000020)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_atb_fft4_bist_fail_4_mask             (0x00000010)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_atb_fft4_bist_fail_3_mask             (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_atb_fft4_bist_fail_2_mask             (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_atb_fft4_bist_fail_1_mask             (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_atb_fft4_bist_fail_0_mask             (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_atb_fft4_bist_fail_7(data)            (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_atb_fft4_bist_fail_6(data)            (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_atb_fft4_bist_fail_5(data)            (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_atb_fft4_bist_fail_4(data)            (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_atb_fft4_bist_fail_3(data)            (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_atb_fft4_bist_fail_2(data)            (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_atb_fft4_bist_fail_1(data)            (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_atb_fft4_bist_fail_0(data)            (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_get_atb_fft4_bist_fail_7(data)        ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_get_atb_fft4_bist_fail_6(data)        ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_get_atb_fft4_bist_fail_5(data)        ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_get_atb_fft4_bist_fail_4(data)        ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_get_atb_fft4_bist_fail_3(data)        ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_get_atb_fft4_bist_fail_2(data)        ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_get_atb_fft4_bist_fail_1(data)        ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT4_get_atb_fft4_bist_fail_0(data)        (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5                                      0x1816F240
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_reg_addr                              "0xB816F240"
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_reg                                   0xB816F240
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_inst_addr                             "0x003F"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_reg(data)                         (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_reg                               (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_atb_fft5_bist_fail_7_shift            (7)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_atb_fft5_bist_fail_6_shift            (6)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_atb_fft5_bist_fail_5_shift            (5)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_atb_fft5_bist_fail_4_shift            (4)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_atb_fft5_bist_fail_3_shift            (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_atb_fft5_bist_fail_2_shift            (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_atb_fft5_bist_fail_1_shift            (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_atb_fft5_bist_fail_0_shift            (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_atb_fft5_bist_fail_7_mask             (0x00000080)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_atb_fft5_bist_fail_6_mask             (0x00000040)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_atb_fft5_bist_fail_5_mask             (0x00000020)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_atb_fft5_bist_fail_4_mask             (0x00000010)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_atb_fft5_bist_fail_3_mask             (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_atb_fft5_bist_fail_2_mask             (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_atb_fft5_bist_fail_1_mask             (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_atb_fft5_bist_fail_0_mask             (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_atb_fft5_bist_fail_7(data)            (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_atb_fft5_bist_fail_6(data)            (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_atb_fft5_bist_fail_5(data)            (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_atb_fft5_bist_fail_4(data)            (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_atb_fft5_bist_fail_3(data)            (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_atb_fft5_bist_fail_2(data)            (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_atb_fft5_bist_fail_1(data)            (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_atb_fft5_bist_fail_0(data)            (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_get_atb_fft5_bist_fail_7(data)        ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_get_atb_fft5_bist_fail_6(data)        ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_get_atb_fft5_bist_fail_5(data)        ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_get_atb_fft5_bist_fail_4(data)        ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_get_atb_fft5_bist_fail_3(data)        ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_get_atb_fft5_bist_fail_2(data)        ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_get_atb_fft5_bist_fail_1(data)        ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_FFT5_get_atb_fft5_bist_fail_0(data)        (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_LDPC                                      0x1816F244
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_LDPC_reg_addr                              "0xB816F244"
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_LDPC_reg                                   0xB816F244
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_LDPC_inst_addr                             "0x0040"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_ATB_LDPC_reg(data)                         (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_LDPC_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_ATB_LDPC_reg                               (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_LDPC_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_LDPC_atb_ldpc2_bist_fail_1_shift           (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_LDPC_atb_ldpc2_bist_fail_0_shift           (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_LDPC_atb_ldpc_bist_fail_1_shift            (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_LDPC_atb_ldpc_bist_fail_0_shift            (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_LDPC_atb_ldpc2_bist_fail_1_mask            (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_LDPC_atb_ldpc2_bist_fail_0_mask            (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_LDPC_atb_ldpc_bist_fail_1_mask             (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_LDPC_atb_ldpc_bist_fail_0_mask             (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_LDPC_atb_ldpc2_bist_fail_1(data)           (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_LDPC_atb_ldpc2_bist_fail_0(data)           (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_LDPC_atb_ldpc_bist_fail_1(data)            (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_LDPC_atb_ldpc_bist_fail_0(data)            (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_LDPC_get_atb_ldpc2_bist_fail_1(data)       ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_LDPC_get_atb_ldpc2_bist_fail_0(data)       ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_LDPC_get_atb_ldpc_bist_fail_1(data)        ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_LDPC_get_atb_ldpc_bist_fail_0(data)        (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_SYNC                                      0x1816F248
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_SYNC_reg_addr                              "0xB816F248"
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_SYNC_reg                                   0xB816F248
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_SYNC_inst_addr                             "0x0041"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_ATB_SYNC_reg(data)                         (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_SYNC_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_ATB_SYNC_reg                               (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_SYNC_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_SYNC_atb_sync_bist_fail_2_shift            (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_SYNC_atb_sync_bist_fail_1_shift            (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_SYNC_atb_sync_bist_fail_0_shift            (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_SYNC_atb_sync_bist_fail_2_mask             (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_SYNC_atb_sync_bist_fail_1_mask             (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_SYNC_atb_sync_bist_fail_0_mask             (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_SYNC_atb_sync_bist_fail_2(data)            (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_SYNC_atb_sync_bist_fail_1(data)            (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_SYNC_atb_sync_bist_fail_0(data)            (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_SYNC_get_atb_sync_bist_fail_2(data)        ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_SYNC_get_atb_sync_bist_fail_1(data)        ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_SYNC_get_atb_sync_bist_fail_0(data)        (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI                                       0x1816F24C
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_reg_addr                               "0xB816F24C"
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_reg                                    0xB816F24C
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_inst_addr                              "0x0042"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_reg(data)                          (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_reg                                (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi2_bist_fail_1_shift             (9)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi2_bist_fail_0_shift             (8)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi_bist_fail_7_shift              (7)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi_bist_fail_6_shift              (6)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi_bist_fail_5_shift              (5)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi_bist_fail_4_shift              (4)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi_bist_fail_3_shift              (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi_bist_fail_2_shift              (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi_bist_fail_1_shift              (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi_bist_fail_0_shift              (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi2_bist_fail_1_mask              (0x00000200)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi2_bist_fail_0_mask              (0x00000100)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi_bist_fail_7_mask               (0x00000080)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi_bist_fail_6_mask               (0x00000040)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi_bist_fail_5_mask               (0x00000020)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi_bist_fail_4_mask               (0x00000010)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi_bist_fail_3_mask               (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi_bist_fail_2_mask               (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi_bist_fail_1_mask               (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi_bist_fail_0_mask               (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi2_bist_fail_1(data)             (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi2_bist_fail_0(data)             (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi_bist_fail_7(data)              (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi_bist_fail_6(data)              (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi_bist_fail_5(data)              (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi_bist_fail_4(data)              (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi_bist_fail_3(data)              (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi_bist_fail_2(data)              (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi_bist_fail_1(data)              (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_atb_tdi_bist_fail_0(data)              (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_get_atb_tdi2_bist_fail_1(data)         ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_get_atb_tdi2_bist_fail_0(data)         ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_get_atb_tdi_bist_fail_7(data)          ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_get_atb_tdi_bist_fail_6(data)          ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_get_atb_tdi_bist_fail_5(data)          ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_get_atb_tdi_bist_fail_4(data)          ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_get_atb_tdi_bist_fail_3(data)          ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_get_atb_tdi_bist_fail_2(data)          ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_get_atb_tdi_bist_fail_1(data)          ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_TDI_get_atb_tdi_bist_fail_0(data)          (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT                                       0x1816F250
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_reg_addr                               "0xB816F250"
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_reg                                    0xB816F250
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_inst_addr                              "0x0043"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_reg(data)                          (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_reg                                (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache2_bist_fail_1_shift        (18)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache2_bist_fail_0_shift        (17)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_8_shift         (16)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_7_shift         (15)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_6_shift         (14)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_5_shift         (13)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_4_shift         (12)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_3_shift         (11)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_2_shift         (10)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_1_shift         (9)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_0_shift         (8)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_vit2_bist_fail_0_shift             (7)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_vit_bist_fail_6_shift              (6)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_vit_bist_fail_5_shift              (5)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_vit_bist_fail_4_shift              (4)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_vit_bist_fail_3_shift              (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_vit_bist_fail_2_shift              (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_vit_bist_fail_1_shift              (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_vit_bist_fail_0_shift              (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache2_bist_fail_1_mask         (0x00040000)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache2_bist_fail_0_mask         (0x00020000)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_8_mask          (0x00010000)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_7_mask          (0x00008000)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_6_mask          (0x00004000)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_5_mask          (0x00002000)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_4_mask          (0x00001000)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_3_mask          (0x00000800)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_2_mask          (0x00000400)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_1_mask          (0x00000200)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_0_mask          (0x00000100)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_vit2_bist_fail_0_mask              (0x00000080)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_vit_bist_fail_6_mask               (0x00000040)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_vit_bist_fail_5_mask               (0x00000020)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_vit_bist_fail_4_mask               (0x00000010)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_vit_bist_fail_3_mask               (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_vit_bist_fail_2_mask               (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_vit_bist_fail_1_mask               (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_vit_bist_fail_0_mask               (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache2_bist_fail_1(data)        (0x00040000&((data)<<18))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache2_bist_fail_0(data)        (0x00020000&((data)<<17))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_8(data)         (0x00010000&((data)<<16))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_7(data)         (0x00008000&((data)<<15))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_6(data)         (0x00004000&((data)<<14))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_5(data)         (0x00002000&((data)<<13))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_4(data)         (0x00001000&((data)<<12))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_3(data)         (0x00000800&((data)<<11))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_2(data)         (0x00000400&((data)<<10))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_1(data)         (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_rd_cache_bist_fail_0(data)         (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_vit2_bist_fail_0(data)             (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_vit_bist_fail_6(data)              (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_vit_bist_fail_5(data)              (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_vit_bist_fail_4(data)              (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_vit_bist_fail_3(data)              (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_vit_bist_fail_2(data)              (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_vit_bist_fail_1(data)              (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_atb_vit_bist_fail_0(data)              (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_get_atb_rd_cache2_bist_fail_1(data)    ((0x00040000&(data))>>18)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_get_atb_rd_cache2_bist_fail_0(data)    ((0x00020000&(data))>>17)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_get_atb_rd_cache_bist_fail_8(data)     ((0x00010000&(data))>>16)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_get_atb_rd_cache_bist_fail_7(data)     ((0x00008000&(data))>>15)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_get_atb_rd_cache_bist_fail_6(data)     ((0x00004000&(data))>>14)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_get_atb_rd_cache_bist_fail_5(data)     ((0x00002000&(data))>>13)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_get_atb_rd_cache_bist_fail_4(data)     ((0x00001000&(data))>>12)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_get_atb_rd_cache_bist_fail_3(data)     ((0x00000800&(data))>>11)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_get_atb_rd_cache_bist_fail_2(data)     ((0x00000400&(data))>>10)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_get_atb_rd_cache_bist_fail_1(data)     ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_get_atb_rd_cache_bist_fail_0(data)     ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_get_atb_vit2_bist_fail_0(data)         ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_get_atb_vit_bist_fail_6(data)          ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_get_atb_vit_bist_fail_5(data)          ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_get_atb_vit_bist_fail_4(data)          ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_get_atb_vit_bist_fail_3(data)          ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_get_atb_vit_bist_fail_2(data)          ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_get_atb_vit_bist_fail_1(data)          ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATB_VIT_get_atb_vit_bist_fail_0(data)          (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE1                                   0x1816F254
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE1_reg_addr                           "0xB816F254"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE1_reg                                0xB816F254
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE1_inst_addr                          "0x0044"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE1_reg(data)                      (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE1_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE1_reg                            (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE1_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE1_atb_ce1_drf_bist_fail_2_shift      (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE1_atb_ce1_drf_bist_fail_1_shift      (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE1_atb_ce1_drf_bist_fail_0_shift      (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE1_atb_ce1_drf_bist_fail_2_mask       (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE1_atb_ce1_drf_bist_fail_1_mask       (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE1_atb_ce1_drf_bist_fail_0_mask       (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE1_atb_ce1_drf_bist_fail_2(data)      (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE1_atb_ce1_drf_bist_fail_1(data)      (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE1_atb_ce1_drf_bist_fail_0(data)      (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE1_get_atb_ce1_drf_bist_fail_2(data)  ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE1_get_atb_ce1_drf_bist_fail_1(data)  ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE1_get_atb_ce1_drf_bist_fail_0(data)  (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE2                                   0x1816F258
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE2_reg_addr                           "0xB816F258"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE2_reg                                0xB816F258
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE2_inst_addr                          "0x0045"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE2_reg(data)                      (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE2_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE2_reg                            (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE2_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE2_atb_ce2_drf_bist_fail_2_shift      (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE2_atb_ce2_drf_bist_fail_1_shift      (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE2_atb_ce2_drf_bist_fail_0_shift      (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE2_atb_ce2_drf_bist_fail_2_mask       (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE2_atb_ce2_drf_bist_fail_1_mask       (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE2_atb_ce2_drf_bist_fail_0_mask       (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE2_atb_ce2_drf_bist_fail_2(data)      (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE2_atb_ce2_drf_bist_fail_1(data)      (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE2_atb_ce2_drf_bist_fail_0(data)      (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE2_get_atb_ce2_drf_bist_fail_2(data)  ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE2_get_atb_ce2_drf_bist_fail_1(data)  ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE2_get_atb_ce2_drf_bist_fail_0(data)  (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE3                                   0x1816F25C
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE3_reg_addr                           "0xB816F25C"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE3_reg                                0xB816F25C
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE3_inst_addr                          "0x0046"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE3_reg(data)                      (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE3_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE3_reg                            (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE3_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE3_atb_ce3_drf_bist_fail_3_shift      (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE3_atb_ce3_drf_bist_fail_2_shift      (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE3_atb_ce3_drf_bist_fail_1_shift      (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE3_atb_ce3_drf_bist_fail_0_shift      (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE3_atb_ce3_drf_bist_fail_3_mask       (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE3_atb_ce3_drf_bist_fail_2_mask       (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE3_atb_ce3_drf_bist_fail_1_mask       (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE3_atb_ce3_drf_bist_fail_0_mask       (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE3_atb_ce3_drf_bist_fail_3(data)      (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE3_atb_ce3_drf_bist_fail_2(data)      (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE3_atb_ce3_drf_bist_fail_1(data)      (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE3_atb_ce3_drf_bist_fail_0(data)      (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE3_get_atb_ce3_drf_bist_fail_3(data)  ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE3_get_atb_ce3_drf_bist_fail_2(data)  ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE3_get_atb_ce3_drf_bist_fail_1(data)  ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE3_get_atb_ce3_drf_bist_fail_0(data)  (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4                                   0x1816F260
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_reg_addr                           "0xB816F260"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_reg                                0xB816F260
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_inst_addr                          "0x0047"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_reg(data)                      (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_reg                            (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_atb_ce4_drf_bist_fail_5_shift      (5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_atb_ce4_drf_bist_fail_4_shift      (4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_atb_ce4_drf_bist_fail_3_shift      (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_atb_ce4_drf_bist_fail_2_shift      (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_atb_ce4_drf_bist_fail_1_shift      (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_atb_ce4_drf_bist_fail_0_shift      (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_atb_ce4_drf_bist_fail_5_mask       (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_atb_ce4_drf_bist_fail_4_mask       (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_atb_ce4_drf_bist_fail_3_mask       (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_atb_ce4_drf_bist_fail_2_mask       (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_atb_ce4_drf_bist_fail_1_mask       (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_atb_ce4_drf_bist_fail_0_mask       (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_atb_ce4_drf_bist_fail_5(data)      (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_atb_ce4_drf_bist_fail_4(data)      (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_atb_ce4_drf_bist_fail_3(data)      (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_atb_ce4_drf_bist_fail_2(data)      (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_atb_ce4_drf_bist_fail_1(data)      (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_atb_ce4_drf_bist_fail_0(data)      (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_get_atb_ce4_drf_bist_fail_5(data)  ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_get_atb_ce4_drf_bist_fail_4(data)  ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_get_atb_ce4_drf_bist_fail_3(data)  ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_get_atb_ce4_drf_bist_fail_2(data)  ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_get_atb_ce4_drf_bist_fail_1(data)  ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_CE4_get_atb_ce4_drf_bist_fail_0(data)  (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1                                  0x1816F264
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_reg_addr                          "0xB816F264"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_reg                               0xB816F264
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_inst_addr                         "0x0048"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_reg(data)                     (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_reg                           (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_atb_fft1_drf_bist_fail_7_shift    (7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_atb_fft1_drf_bist_fail_6_shift    (6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_atb_fft1_drf_bist_fail_5_shift    (5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_atb_fft1_drf_bist_fail_4_shift    (4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_atb_fft1_drf_bist_fail_3_shift    (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_atb_fft1_drf_bist_fail_2_shift    (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_atb_fft1_drf_bist_fail_1_shift    (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_atb_fft1_drf_bist_fail_0_shift    (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_atb_fft1_drf_bist_fail_7_mask     (0x00000080)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_atb_fft1_drf_bist_fail_6_mask     (0x00000040)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_atb_fft1_drf_bist_fail_5_mask     (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_atb_fft1_drf_bist_fail_4_mask     (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_atb_fft1_drf_bist_fail_3_mask     (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_atb_fft1_drf_bist_fail_2_mask     (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_atb_fft1_drf_bist_fail_1_mask     (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_atb_fft1_drf_bist_fail_0_mask     (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_atb_fft1_drf_bist_fail_7(data)    (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_atb_fft1_drf_bist_fail_6(data)    (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_atb_fft1_drf_bist_fail_5(data)    (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_atb_fft1_drf_bist_fail_4(data)    (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_atb_fft1_drf_bist_fail_3(data)    (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_atb_fft1_drf_bist_fail_2(data)    (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_atb_fft1_drf_bist_fail_1(data)    (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_atb_fft1_drf_bist_fail_0(data)    (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_get_atb_fft1_drf_bist_fail_7(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_get_atb_fft1_drf_bist_fail_6(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_get_atb_fft1_drf_bist_fail_5(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_get_atb_fft1_drf_bist_fail_4(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_get_atb_fft1_drf_bist_fail_3(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_get_atb_fft1_drf_bist_fail_2(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_get_atb_fft1_drf_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT1_get_atb_fft1_drf_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2                                  0x1816F268
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_reg_addr                          "0xB816F268"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_reg                               0xB816F268
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_inst_addr                         "0x0049"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_reg(data)                     (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_reg                           (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_atb_fft2_drf_bist_fail_7_shift    (7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_atb_fft2_drf_bist_fail_6_shift    (6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_atb_fft2_drf_bist_fail_5_shift    (5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_atb_fft2_drf_bist_fail_4_shift    (4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_atb_fft2_drf_bist_fail_3_shift    (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_atb_fft2_drf_bist_fail_2_shift    (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_atb_fft2_drf_bist_fail_1_shift    (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_atb_fft2_drf_bist_fail_0_shift    (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_atb_fft2_drf_bist_fail_7_mask     (0x00000080)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_atb_fft2_drf_bist_fail_6_mask     (0x00000040)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_atb_fft2_drf_bist_fail_5_mask     (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_atb_fft2_drf_bist_fail_4_mask     (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_atb_fft2_drf_bist_fail_3_mask     (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_atb_fft2_drf_bist_fail_2_mask     (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_atb_fft2_drf_bist_fail_1_mask     (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_atb_fft2_drf_bist_fail_0_mask     (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_atb_fft2_drf_bist_fail_7(data)    (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_atb_fft2_drf_bist_fail_6(data)    (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_atb_fft2_drf_bist_fail_5(data)    (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_atb_fft2_drf_bist_fail_4(data)    (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_atb_fft2_drf_bist_fail_3(data)    (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_atb_fft2_drf_bist_fail_2(data)    (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_atb_fft2_drf_bist_fail_1(data)    (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_atb_fft2_drf_bist_fail_0(data)    (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_get_atb_fft2_drf_bist_fail_7(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_get_atb_fft2_drf_bist_fail_6(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_get_atb_fft2_drf_bist_fail_5(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_get_atb_fft2_drf_bist_fail_4(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_get_atb_fft2_drf_bist_fail_3(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_get_atb_fft2_drf_bist_fail_2(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_get_atb_fft2_drf_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT2_get_atb_fft2_drf_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4                                  0x1816F270
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_reg_addr                          "0xB816F270"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_reg                               0xB816F270
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_inst_addr                         "0x004A"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_reg(data)                     (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_reg                           (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_atb_fft4_drf_bist_fail_7_shift    (7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_atb_fft4_drf_bist_fail_6_shift    (6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_atb_fft4_drf_bist_fail_5_shift    (5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_atb_fft4_drf_bist_fail_4_shift    (4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_atb_fft4_drf_bist_fail_3_shift    (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_atb_fft4_drf_bist_fail_2_shift    (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_atb_fft4_drf_bist_fail_1_shift    (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_atb_fft4_drf_bist_fail_0_shift    (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_atb_fft4_drf_bist_fail_7_mask     (0x00000080)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_atb_fft4_drf_bist_fail_6_mask     (0x00000040)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_atb_fft4_drf_bist_fail_5_mask     (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_atb_fft4_drf_bist_fail_4_mask     (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_atb_fft4_drf_bist_fail_3_mask     (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_atb_fft4_drf_bist_fail_2_mask     (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_atb_fft4_drf_bist_fail_1_mask     (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_atb_fft4_drf_bist_fail_0_mask     (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_atb_fft4_drf_bist_fail_7(data)    (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_atb_fft4_drf_bist_fail_6(data)    (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_atb_fft4_drf_bist_fail_5(data)    (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_atb_fft4_drf_bist_fail_4(data)    (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_atb_fft4_drf_bist_fail_3(data)    (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_atb_fft4_drf_bist_fail_2(data)    (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_atb_fft4_drf_bist_fail_1(data)    (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_atb_fft4_drf_bist_fail_0(data)    (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_get_atb_fft4_drf_bist_fail_7(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_get_atb_fft4_drf_bist_fail_6(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_get_atb_fft4_drf_bist_fail_5(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_get_atb_fft4_drf_bist_fail_4(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_get_atb_fft4_drf_bist_fail_3(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_get_atb_fft4_drf_bist_fail_2(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_get_atb_fft4_drf_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT4_get_atb_fft4_drf_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5                                  0x1816F274
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_reg_addr                          "0xB816F274"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_reg                               0xB816F274
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_inst_addr                         "0x004B"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_reg(data)                     (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_reg                           (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_atb_fft5_drf_bist_fail_7_shift    (7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_atb_fft5_drf_bist_fail_6_shift    (6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_atb_fft5_drf_bist_fail_5_shift    (5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_atb_fft5_drf_bist_fail_4_shift    (4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_atb_fft5_drf_bist_fail_3_shift    (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_atb_fft5_drf_bist_fail_2_shift    (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_atb_fft5_drf_bist_fail_1_shift    (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_atb_fft5_drf_bist_fail_0_shift    (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_atb_fft5_drf_bist_fail_7_mask     (0x00000080)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_atb_fft5_drf_bist_fail_6_mask     (0x00000040)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_atb_fft5_drf_bist_fail_5_mask     (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_atb_fft5_drf_bist_fail_4_mask     (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_atb_fft5_drf_bist_fail_3_mask     (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_atb_fft5_drf_bist_fail_2_mask     (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_atb_fft5_drf_bist_fail_1_mask     (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_atb_fft5_drf_bist_fail_0_mask     (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_atb_fft5_drf_bist_fail_7(data)    (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_atb_fft5_drf_bist_fail_6(data)    (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_atb_fft5_drf_bist_fail_5(data)    (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_atb_fft5_drf_bist_fail_4(data)    (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_atb_fft5_drf_bist_fail_3(data)    (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_atb_fft5_drf_bist_fail_2(data)    (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_atb_fft5_drf_bist_fail_1(data)    (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_atb_fft5_drf_bist_fail_0(data)    (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_get_atb_fft5_drf_bist_fail_7(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_get_atb_fft5_drf_bist_fail_6(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_get_atb_fft5_drf_bist_fail_5(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_get_atb_fft5_drf_bist_fail_4(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_get_atb_fft5_drf_bist_fail_3(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_get_atb_fft5_drf_bist_fail_2(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_get_atb_fft5_drf_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_FFT5_get_atb_fft5_drf_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_LDPC                                  0x1816F278
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_LDPC_reg_addr                          "0xB816F278"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_LDPC_reg                               0xB816F278
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_LDPC_inst_addr                         "0x004C"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_LDPC_reg(data)                     (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_LDPC_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_LDPC_reg                           (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_LDPC_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_LDPC_atb_ldpc2_drf_bist_fail_1_shift   (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_LDPC_atb_ldpc2_drf_bist_fail_0_shift   (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_LDPC_atb_ldpc_drf_bist_fail_1_shift    (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_LDPC_atb_ldpc_drf_bist_fail_0_shift    (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_LDPC_atb_ldpc2_drf_bist_fail_1_mask    (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_LDPC_atb_ldpc2_drf_bist_fail_0_mask    (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_LDPC_atb_ldpc_drf_bist_fail_1_mask     (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_LDPC_atb_ldpc_drf_bist_fail_0_mask     (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_LDPC_atb_ldpc2_drf_bist_fail_1(data)   (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_LDPC_atb_ldpc2_drf_bist_fail_0(data)   (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_LDPC_atb_ldpc_drf_bist_fail_1(data)    (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_LDPC_atb_ldpc_drf_bist_fail_0(data)    (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_LDPC_get_atb_ldpc2_drf_bist_fail_1(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_LDPC_get_atb_ldpc2_drf_bist_fail_0(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_LDPC_get_atb_ldpc_drf_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_LDPC_get_atb_ldpc_drf_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_SYNC                                  0x1816F27C
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_SYNC_reg_addr                          "0xB816F27C"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_SYNC_reg                               0xB816F27C
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_SYNC_inst_addr                         "0x004D"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_SYNC_reg(data)                     (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_SYNC_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_SYNC_reg                           (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_SYNC_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_SYNC_atb_sync_drf_bist_fail_2_shift    (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_SYNC_atb_sync_drf_bist_fail_1_shift    (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_SYNC_atb_sync_drf_bist_fail_0_shift    (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_SYNC_atb_sync_drf_bist_fail_2_mask     (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_SYNC_atb_sync_drf_bist_fail_1_mask     (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_SYNC_atb_sync_drf_bist_fail_0_mask     (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_SYNC_atb_sync_drf_bist_fail_2(data)    (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_SYNC_atb_sync_drf_bist_fail_1(data)    (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_SYNC_atb_sync_drf_bist_fail_0(data)    (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_SYNC_get_atb_sync_drf_bist_fail_2(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_SYNC_get_atb_sync_drf_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_SYNC_get_atb_sync_drf_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI                                   0x1816F280
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_reg_addr                           "0xB816F280"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_reg                                0xB816F280
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_inst_addr                          "0x004E"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_reg(data)                      (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_reg                            (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi2_drf_bist_fail_1_shift     (9)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi2_drf_bist_fail_0_shift     (8)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi_drf_bist_fail_7_shift      (7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi_drf_bist_fail_6_shift      (6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi_drf_bist_fail_5_shift      (5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi_drf_bist_fail_4_shift      (4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi_drf_bist_fail_3_shift      (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi_drf_bist_fail_2_shift      (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi_drf_bist_fail_1_shift      (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi_drf_bist_fail_0_shift      (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi2_drf_bist_fail_1_mask      (0x00000200)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi2_drf_bist_fail_0_mask      (0x00000100)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi_drf_bist_fail_7_mask       (0x00000080)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi_drf_bist_fail_6_mask       (0x00000040)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi_drf_bist_fail_5_mask       (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi_drf_bist_fail_4_mask       (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi_drf_bist_fail_3_mask       (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi_drf_bist_fail_2_mask       (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi_drf_bist_fail_1_mask       (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi_drf_bist_fail_0_mask       (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi2_drf_bist_fail_1(data)     (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi2_drf_bist_fail_0(data)     (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi_drf_bist_fail_7(data)      (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi_drf_bist_fail_6(data)      (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi_drf_bist_fail_5(data)      (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi_drf_bist_fail_4(data)      (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi_drf_bist_fail_3(data)      (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi_drf_bist_fail_2(data)      (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi_drf_bist_fail_1(data)      (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_atb_tdi_drf_bist_fail_0(data)      (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_get_atb_tdi2_drf_bist_fail_1(data) ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_get_atb_tdi2_drf_bist_fail_0(data) ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_get_atb_tdi_drf_bist_fail_7(data)  ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_get_atb_tdi_drf_bist_fail_6(data)  ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_get_atb_tdi_drf_bist_fail_5(data)  ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_get_atb_tdi_drf_bist_fail_4(data)  ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_get_atb_tdi_drf_bist_fail_3(data)  ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_get_atb_tdi_drf_bist_fail_2(data)  ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_get_atb_tdi_drf_bist_fail_1(data)  ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_TDI_get_atb_tdi_drf_bist_fail_0(data)  (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT                                   0x1816F284
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_reg_addr                           "0xB816F284"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_reg                                0xB816F284
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_inst_addr                          "0x004F"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_reg(data)                      (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_reg                            (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache2_drf_bist_fail_1_shift (18)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache2_drf_bist_fail_0_shift (17)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_8_shift (16)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_7_shift (15)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_6_shift (14)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_5_shift (13)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_4_shift (12)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_3_shift (11)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_2_shift (10)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_1_shift (9)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_0_shift (8)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_vit2_drf_bist_fail_0_shift     (7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_vit_drf_bist_fail_6_shift      (6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_vit_drf_bist_fail_5_shift      (5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_vit_drf_bist_fail_4_shift      (4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_vit_drf_bist_fail_3_shift      (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_vit_drf_bist_fail_2_shift      (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_vit_drf_bist_fail_1_shift      (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_vit_drf_bist_fail_0_shift      (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache2_drf_bist_fail_1_mask (0x00040000)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache2_drf_bist_fail_0_mask (0x00020000)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_8_mask  (0x00010000)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_7_mask  (0x00008000)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_6_mask  (0x00004000)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_5_mask  (0x00002000)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_4_mask  (0x00001000)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_3_mask  (0x00000800)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_2_mask  (0x00000400)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_1_mask  (0x00000200)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_0_mask  (0x00000100)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_vit2_drf_bist_fail_0_mask      (0x00000080)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_vit_drf_bist_fail_6_mask       (0x00000040)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_vit_drf_bist_fail_5_mask       (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_vit_drf_bist_fail_4_mask       (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_vit_drf_bist_fail_3_mask       (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_vit_drf_bist_fail_2_mask       (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_vit_drf_bist_fail_1_mask       (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_vit_drf_bist_fail_0_mask       (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache2_drf_bist_fail_1(data) (0x00040000&((data)<<18))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache2_drf_bist_fail_0(data) (0x00020000&((data)<<17))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_8(data) (0x00010000&((data)<<16))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_7(data) (0x00008000&((data)<<15))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_6(data) (0x00004000&((data)<<14))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_5(data) (0x00002000&((data)<<13))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_4(data) (0x00001000&((data)<<12))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_3(data) (0x00000800&((data)<<11))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_2(data) (0x00000400&((data)<<10))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_1(data) (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_rd_cache_drf_bist_fail_0(data) (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_vit2_drf_bist_fail_0(data)     (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_vit_drf_bist_fail_6(data)      (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_vit_drf_bist_fail_5(data)      (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_vit_drf_bist_fail_4(data)      (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_vit_drf_bist_fail_3(data)      (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_vit_drf_bist_fail_2(data)      (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_vit_drf_bist_fail_1(data)      (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_atb_vit_drf_bist_fail_0(data)      (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_get_atb_rd_cache2_drf_bist_fail_1(data) ((0x00040000&(data))>>18)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_get_atb_rd_cache2_drf_bist_fail_0(data) ((0x00020000&(data))>>17)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_get_atb_rd_cache_drf_bist_fail_8(data) ((0x00010000&(data))>>16)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_get_atb_rd_cache_drf_bist_fail_7(data) ((0x00008000&(data))>>15)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_get_atb_rd_cache_drf_bist_fail_6(data) ((0x00004000&(data))>>14)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_get_atb_rd_cache_drf_bist_fail_5(data) ((0x00002000&(data))>>13)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_get_atb_rd_cache_drf_bist_fail_4(data) ((0x00001000&(data))>>12)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_get_atb_rd_cache_drf_bist_fail_3(data) ((0x00000800&(data))>>11)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_get_atb_rd_cache_drf_bist_fail_2(data) ((0x00000400&(data))>>10)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_get_atb_rd_cache_drf_bist_fail_1(data) ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_get_atb_rd_cache_drf_bist_fail_0(data) ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_get_atb_vit2_drf_bist_fail_0(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_get_atb_vit_drf_bist_fail_6(data)  ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_get_atb_vit_drf_bist_fail_5(data)  ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_get_atb_vit_drf_bist_fail_4(data)  ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_get_atb_vit_drf_bist_fail_3(data)  ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_get_atb_vit_drf_bist_fail_2(data)  ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_get_atb_vit_drf_bist_fail_1(data)  ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATB_VIT_get_atb_vit_drf_bist_fail_0(data)  (0x00000001&(data))

#define  DTV_DEMOD_MISC_DVSE_ATB                                                0x1816F288
#define  DTV_DEMOD_MISC_DVSE_ATB_reg_addr                                        "0xB816F288"
#define  DTV_DEMOD_MISC_DVSE_ATB_reg                                             0xB816F288
#define  DTV_DEMOD_MISC_DVSE_ATB_inst_addr                                       "0x0050"
#define  set_DTV_DEMOD_MISC_DVSE_ATB_reg(data)                                   (*((volatile unsigned int*)DTV_DEMOD_MISC_DVSE_ATB_reg)=data)
#define  get_DTV_DEMOD_MISC_DVSE_ATB_reg                                         (*((volatile unsigned int*)DTV_DEMOD_MISC_DVSE_ATB_reg))
#define  DTV_DEMOD_MISC_DVSE_ATB_bist_atb_te_shift                               (5)
#define  DTV_DEMOD_MISC_DVSE_ATB_bist_atb_dvse_shift                             (4)
#define  DTV_DEMOD_MISC_DVSE_ATB_bist_atb_dvs_shift                              (0)
#define  DTV_DEMOD_MISC_DVSE_ATB_bist_atb_te_mask                                (0x00000020)
#define  DTV_DEMOD_MISC_DVSE_ATB_bist_atb_dvse_mask                              (0x00000010)
#define  DTV_DEMOD_MISC_DVSE_ATB_bist_atb_dvs_mask                               (0x0000000F)
#define  DTV_DEMOD_MISC_DVSE_ATB_bist_atb_te(data)                               (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DVSE_ATB_bist_atb_dvse(data)                             (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DVSE_ATB_bist_atb_dvs(data)                              (0x0000000F&(data))
#define  DTV_DEMOD_MISC_DVSE_ATB_get_bist_atb_te(data)                           ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DVSE_ATB_get_bist_atb_dvse(data)                         ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DVSE_ATB_get_bist_atb_dvs(data)                          (0x0000000F&(data))

#define  DTV_DEMOD_MISC_LS_ATB                                                  0x1816F28C
#define  DTV_DEMOD_MISC_LS_ATB_reg_addr                                          "0xB816F28C"
#define  DTV_DEMOD_MISC_LS_ATB_reg                                               0xB816F28C
#define  DTV_DEMOD_MISC_LS_ATB_inst_addr                                         "0x0051"
#define  set_DTV_DEMOD_MISC_LS_ATB_reg(data)                                     (*((volatile unsigned int*)DTV_DEMOD_MISC_LS_ATB_reg)=data)
#define  get_DTV_DEMOD_MISC_LS_ATB_reg                                           (*((volatile unsigned int*)DTV_DEMOD_MISC_LS_ATB_reg))
#define  DTV_DEMOD_MISC_LS_ATB_bist_atb_ls_shift                                 (0)
#define  DTV_DEMOD_MISC_LS_ATB_bist_atb_ls_mask                                  (0x00000001)
#define  DTV_DEMOD_MISC_LS_ATB_bist_atb_ls(data)                                 (0x00000001&(data))
#define  DTV_DEMOD_MISC_LS_ATB_get_bist_atb_ls(data)                             (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_MODE_SYS0_                                         0x1816F410
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__reg_addr                                 "0xB816F410"
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__reg                                      0xB816F410
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__inst_addr                                "0x0052"
#define  set_DTV_DEMOD_MISC_BIST_MODE_SYS0__reg(data)                            (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_MODE_SYS0__reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_MODE_SYS0__reg                                  (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_MODE_SYS0__reg))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_05_2_shift         (13)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_05_1_shift         (12)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_04b_2_shift        (11)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_04b_shift          (10)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_04a_shift          (9)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_03b_2_shift        (8)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_03b_1_shift        (7)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_03a_3_shift        (6)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_03a_2_shift        (5)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_03a_1_shift        (4)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_02b_shift          (3)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_02a_shift          (2)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_01_2_shift         (1)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_01_1_shift         (0)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_05_2_mask          (0x00002000)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_05_1_mask          (0x00001000)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_04b_2_mask         (0x00000800)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_04b_mask           (0x00000400)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_04a_mask           (0x00000200)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_03b_2_mask         (0x00000100)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_03b_1_mask         (0x00000080)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_03a_3_mask         (0x00000040)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_03a_2_mask         (0x00000020)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_03a_1_mask         (0x00000010)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_02b_mask           (0x00000008)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_02a_mask           (0x00000004)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_01_2_mask          (0x00000002)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_01_1_mask          (0x00000001)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_05_2(data)         (0x00002000&((data)<<13))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_05_1(data)         (0x00001000&((data)<<12))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_04b_2(data)        (0x00000800&((data)<<11))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_04b(data)          (0x00000400&((data)<<10))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_04a(data)          (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_03b_2(data)        (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_03b_1(data)        (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_03a_3(data)        (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_03a_2(data)        (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_03a_1(data)        (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_02b(data)          (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_02a(data)          (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_01_2(data)         (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__bist_mode_memory_bank_01_1(data)         (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__get_bist_mode_memory_bank_05_2(data)     ((0x00002000&(data))>>13)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__get_bist_mode_memory_bank_05_1(data)     ((0x00001000&(data))>>12)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__get_bist_mode_memory_bank_04b_2(data)    ((0x00000800&(data))>>11)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__get_bist_mode_memory_bank_04b(data)      ((0x00000400&(data))>>10)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__get_bist_mode_memory_bank_04a(data)      ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__get_bist_mode_memory_bank_03b_2(data)    ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__get_bist_mode_memory_bank_03b_1(data)    ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__get_bist_mode_memory_bank_03a_3(data)    ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__get_bist_mode_memory_bank_03a_2(data)    ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__get_bist_mode_memory_bank_03a_1(data)    ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__get_bist_mode_memory_bank_02b(data)      ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__get_bist_mode_memory_bank_02a(data)      ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__get_bist_mode_memory_bank_01_2(data)     ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS0__get_bist_mode_memory_bank_01_1(data)     (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_MODE_SYS1_                                         0x1816F414
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__reg_addr                                 "0xB816F414"
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__reg                                      0xB816F414
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__inst_addr                                "0x0053"
#define  set_DTV_DEMOD_MISC_BIST_MODE_SYS1__reg(data)                            (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_MODE_SYS1__reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_MODE_SYS1__reg                                  (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_MODE_SYS1__reg))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_atsc_2_shift                   (9)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_atsc_shift                     (8)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_memory_bank_10_shift           (7)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_memory_bank_09_shift           (6)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_memory_bank_08_shift           (5)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_memory_bank_07_1_shift         (3)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_memory_bank_06_3_shift         (2)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_memory_bank_06_2_shift         (1)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_memory_bank_06_1_shift         (0)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_atsc_2_mask                    (0x00000200)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_atsc_mask                      (0x00000100)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_memory_bank_10_mask            (0x00000080)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_memory_bank_09_mask            (0x00000040)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_memory_bank_08_mask            (0x00000020)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_memory_bank_07_1_mask          (0x00000008)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_memory_bank_06_3_mask          (0x00000004)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_memory_bank_06_2_mask          (0x00000002)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_memory_bank_06_1_mask          (0x00000001)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_atsc_2(data)                   (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_atsc(data)                     (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_memory_bank_10(data)           (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_memory_bank_09(data)           (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_memory_bank_08(data)           (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_memory_bank_07_1(data)         (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_memory_bank_06_3(data)         (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_memory_bank_06_2(data)         (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__bist_mode_memory_bank_06_1(data)         (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__get_bist_mode_atsc_2(data)               ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__get_bist_mode_atsc(data)                 ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__get_bist_mode_memory_bank_10(data)       ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__get_bist_mode_memory_bank_09(data)       ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__get_bist_mode_memory_bank_08(data)       ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__get_bist_mode_memory_bank_07_1(data)     ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__get_bist_mode_memory_bank_06_3(data)     ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__get_bist_mode_memory_bank_06_2(data)     ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_MODE_SYS1__get_bist_mode_memory_bank_06_1(data)     (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0_                                     0x1816F418
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__reg_addr                             "0xB816F418"
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__reg                                  0xB816F418
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__inst_addr                            "0x0054"
#define  set_DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__reg(data)                        (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__reg                              (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__reg))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_05_2_shift (13)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_05_1_shift (12)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_04b_2_shift (11)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_04b_shift  (10)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_04a_shift  (9)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_03b_2_shift (8)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_03b_1_shift (7)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_03a_3_shift (6)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_03a_2_shift (5)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_03a_1_shift (4)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_02b_shift  (3)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_02a_shift  (2)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_01_2_shift (1)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_01_1_shift (0)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_05_2_mask  (0x00002000)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_05_1_mask  (0x00001000)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_04b_2_mask (0x00000800)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_04b_mask   (0x00000400)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_04a_mask   (0x00000200)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_03b_2_mask (0x00000100)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_03b_1_mask (0x00000080)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_03a_3_mask (0x00000040)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_03a_2_mask (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_03a_1_mask (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_02b_mask   (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_02a_mask   (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_01_2_mask  (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_01_1_mask  (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_05_2(data) (0x00002000&((data)<<13))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_05_1(data) (0x00001000&((data)<<12))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_04b_2(data) (0x00000800&((data)<<11))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_04b(data)  (0x00000400&((data)<<10))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_04a(data)  (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_03b_2(data) (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_03b_1(data) (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_03a_3(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_03a_2(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_03a_1(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_02b(data)  (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_02a(data)  (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_01_2(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__drf_bist_mode_memory_bank_01_1(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__get_drf_bist_mode_memory_bank_05_2(data) ((0x00002000&(data))>>13)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__get_drf_bist_mode_memory_bank_05_1(data) ((0x00001000&(data))>>12)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__get_drf_bist_mode_memory_bank_04b_2(data) ((0x00000800&(data))>>11)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__get_drf_bist_mode_memory_bank_04b(data) ((0x00000400&(data))>>10)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__get_drf_bist_mode_memory_bank_04a(data) ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__get_drf_bist_mode_memory_bank_03b_2(data) ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__get_drf_bist_mode_memory_bank_03b_1(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__get_drf_bist_mode_memory_bank_03a_3(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__get_drf_bist_mode_memory_bank_03a_2(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__get_drf_bist_mode_memory_bank_03a_1(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__get_drf_bist_mode_memory_bank_02b(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__get_drf_bist_mode_memory_bank_02a(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__get_drf_bist_mode_memory_bank_01_2(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS0__get_drf_bist_mode_memory_bank_01_1(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1_                                     0x1816F41C
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__reg_addr                             "0xB816F41C"
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__reg                                  0xB816F41C
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__inst_addr                            "0x0055"
#define  set_DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__reg(data)                        (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__reg                              (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__reg))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_atsc_2_shift           (9)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_atsc_shift             (8)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_memory_bank_10_shift   (7)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_memory_bank_09_shift   (6)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_memory_bank_08_shift   (5)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_memory_bank_07_1_shift (3)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_memory_bank_06_3_shift (2)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_memory_bank_06_2_shift (1)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_memory_bank_06_1_shift (0)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_atsc_2_mask            (0x00000200)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_atsc_mask              (0x00000100)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_memory_bank_10_mask    (0x00000080)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_memory_bank_09_mask    (0x00000040)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_memory_bank_08_mask    (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_memory_bank_07_1_mask  (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_memory_bank_06_3_mask  (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_memory_bank_06_2_mask  (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_memory_bank_06_1_mask  (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_atsc_2(data)           (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_atsc(data)             (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_memory_bank_10(data)   (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_memory_bank_09(data)   (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_memory_bank_08(data)   (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_memory_bank_07_1(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_memory_bank_06_3(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_memory_bank_06_2(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__drf_bist_mode_memory_bank_06_1(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__get_drf_bist_mode_atsc_2(data)       ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__get_drf_bist_mode_atsc(data)         ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__get_drf_bist_mode_memory_bank_10(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__get_drf_bist_mode_memory_bank_09(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__get_drf_bist_mode_memory_bank_08(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__get_drf_bist_mode_memory_bank_07_1(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__get_drf_bist_mode_memory_bank_06_3(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__get_drf_bist_mode_memory_bank_06_2(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_SYS1__get_drf_bist_mode_memory_bank_06_1(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0_                                   0x1816F420
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__reg_addr                           "0xB816F420"
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__reg                                0xB816F420
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__inst_addr                          "0x0056"
#define  set_DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__reg(data)                      (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__reg                            (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__reg))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_05_2_shift (13)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_05_1_shift (12)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_04b_2_shift (11)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_04b_shift (10)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_04a_shift (9)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_03b_2_shift (8)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_03b_1_shift (7)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_03a_3_shift (6)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_03a_2_shift (5)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_03a_1_shift (4)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_02b_shift (3)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_02a_shift (2)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_01_2_shift (1)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_01_1_shift (0)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_05_2_mask (0x00002000)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_05_1_mask (0x00001000)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_04b_2_mask (0x00000800)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_04b_mask (0x00000400)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_04a_mask (0x00000200)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_03b_2_mask (0x00000100)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_03b_1_mask (0x00000080)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_03a_3_mask (0x00000040)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_03a_2_mask (0x00000020)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_03a_1_mask (0x00000010)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_02b_mask (0x00000008)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_02a_mask (0x00000004)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_01_2_mask (0x00000002)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_01_1_mask (0x00000001)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_05_2(data) (0x00002000&((data)<<13))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_05_1(data) (0x00001000&((data)<<12))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_04b_2(data) (0x00000800&((data)<<11))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_04b(data) (0x00000400&((data)<<10))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_04a(data) (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_03b_2(data) (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_03b_1(data) (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_03a_3(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_03a_2(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_03a_1(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_02b(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_02a(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_01_2(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__drf_test_resume_memory_bank_01_1(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__get_drf_test_resume_memory_bank_05_2(data) ((0x00002000&(data))>>13)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__get_drf_test_resume_memory_bank_05_1(data) ((0x00001000&(data))>>12)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__get_drf_test_resume_memory_bank_04b_2(data) ((0x00000800&(data))>>11)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__get_drf_test_resume_memory_bank_04b(data) ((0x00000400&(data))>>10)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__get_drf_test_resume_memory_bank_04a(data) ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__get_drf_test_resume_memory_bank_03b_2(data) ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__get_drf_test_resume_memory_bank_03b_1(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__get_drf_test_resume_memory_bank_03a_3(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__get_drf_test_resume_memory_bank_03a_2(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__get_drf_test_resume_memory_bank_03a_1(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__get_drf_test_resume_memory_bank_02b(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__get_drf_test_resume_memory_bank_02a(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__get_drf_test_resume_memory_bank_01_2(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS0__get_drf_test_resume_memory_bank_01_1(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1_                                   0x1816F424
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__reg_addr                           "0xB816F424"
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__reg                                0xB816F424
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__inst_addr                          "0x0057"
#define  set_DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__reg(data)                      (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__reg                            (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__reg))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_atsc_2_shift       (9)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_atsc_shift         (8)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_memory_bank_10_shift (7)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_memory_bank_09_shift (6)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_memory_bank_08_shift (5)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_memory_bank_07_1_shift (3)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_memory_bank_06_3_shift (2)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_memory_bank_06_2_shift (1)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_memory_bank_06_1_shift (0)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_atsc_2_mask        (0x00000200)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_atsc_mask          (0x00000100)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_memory_bank_10_mask (0x00000080)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_memory_bank_09_mask (0x00000040)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_memory_bank_08_mask (0x00000020)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_memory_bank_07_1_mask (0x00000008)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_memory_bank_06_3_mask (0x00000004)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_memory_bank_06_2_mask (0x00000002)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_memory_bank_06_1_mask (0x00000001)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_atsc_2(data)       (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_atsc(data)         (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_memory_bank_10(data) (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_memory_bank_09(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_memory_bank_08(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_memory_bank_07_1(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_memory_bank_06_3(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_memory_bank_06_2(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__drf_test_resume_memory_bank_06_1(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__get_drf_test_resume_atsc_2(data)   ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__get_drf_test_resume_atsc(data)     ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__get_drf_test_resume_memory_bank_10(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__get_drf_test_resume_memory_bank_09(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__get_drf_test_resume_memory_bank_08(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__get_drf_test_resume_memory_bank_07_1(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__get_drf_test_resume_memory_bank_06_3(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__get_drf_test_resume_memory_bank_06_2(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_SYS1__get_drf_test_resume_memory_bank_06_1(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DVSE_MEMORY_BANK                                        0x1816F42C
#define  DTV_DEMOD_MISC_DVSE_MEMORY_BANK_reg_addr                                "0xB816F42C"
#define  DTV_DEMOD_MISC_DVSE_MEMORY_BANK_reg                                     0xB816F42C
#define  DTV_DEMOD_MISC_DVSE_MEMORY_BANK_inst_addr                               "0x0058"
#define  set_DTV_DEMOD_MISC_DVSE_MEMORY_BANK_reg(data)                           (*((volatile unsigned int*)DTV_DEMOD_MISC_DVSE_MEMORY_BANK_reg)=data)
#define  get_DTV_DEMOD_MISC_DVSE_MEMORY_BANK_reg                                 (*((volatile unsigned int*)DTV_DEMOD_MISC_DVSE_MEMORY_BANK_reg))
#define  DTV_DEMOD_MISC_DVSE_MEMORY_BANK_mbist_memory_bank_te_shift              (5)
#define  DTV_DEMOD_MISC_DVSE_MEMORY_BANK_mbist_memory_bank_dvse_shift            (4)
#define  DTV_DEMOD_MISC_DVSE_MEMORY_BANK_mbist_memory_bank_dvs_shift             (0)
#define  DTV_DEMOD_MISC_DVSE_MEMORY_BANK_mbist_memory_bank_te_mask               (0x00000020)
#define  DTV_DEMOD_MISC_DVSE_MEMORY_BANK_mbist_memory_bank_dvse_mask             (0x00000010)
#define  DTV_DEMOD_MISC_DVSE_MEMORY_BANK_mbist_memory_bank_dvs_mask              (0x0000000F)
#define  DTV_DEMOD_MISC_DVSE_MEMORY_BANK_mbist_memory_bank_te(data)              (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DVSE_MEMORY_BANK_mbist_memory_bank_dvse(data)            (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DVSE_MEMORY_BANK_mbist_memory_bank_dvs(data)             (0x0000000F&(data))
#define  DTV_DEMOD_MISC_DVSE_MEMORY_BANK_get_mbist_memory_bank_te(data)          ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DVSE_MEMORY_BANK_get_mbist_memory_bank_dvse(data)        ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DVSE_MEMORY_BANK_get_mbist_memory_bank_dvs(data)         (0x0000000F&(data))

#define  DTV_DEMOD_MISC_LS_MEMORY_BANK                                          0x1816F430
#define  DTV_DEMOD_MISC_LS_MEMORY_BANK_reg_addr                                  "0xB816F430"
#define  DTV_DEMOD_MISC_LS_MEMORY_BANK_reg                                       0xB816F430
#define  DTV_DEMOD_MISC_LS_MEMORY_BANK_inst_addr                                 "0x0059"
#define  set_DTV_DEMOD_MISC_LS_MEMORY_BANK_reg(data)                             (*((volatile unsigned int*)DTV_DEMOD_MISC_LS_MEMORY_BANK_reg)=data)
#define  get_DTV_DEMOD_MISC_LS_MEMORY_BANK_reg                                   (*((volatile unsigned int*)DTV_DEMOD_MISC_LS_MEMORY_BANK_reg))
#define  DTV_DEMOD_MISC_LS_MEMORY_BANK_mbist_memory_bank_ls_shift                (0)
#define  DTV_DEMOD_MISC_LS_MEMORY_BANK_mbist_memory_bank_ls_mask                 (0x00000001)
#define  DTV_DEMOD_MISC_LS_MEMORY_BANK_mbist_memory_bank_ls(data)                (0x00000001&(data))
#define  DTV_DEMOD_MISC_LS_MEMORY_BANK_get_mbist_memory_bank_ls(data)            (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_DONE_SYS0                                          0x1816F434
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_reg_addr                                  "0xB816F434"
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_reg                                       0xB816F434
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_inst_addr                                 "0x005A"
#define  set_DTV_DEMOD_MISC_BIST_DONE_SYS0_reg(data)                             (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_DONE_SYS0_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_DONE_SYS0_reg                                   (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_DONE_SYS0_reg))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_05_2_bist_done_shift          (13)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_05_1_bist_done_shift          (12)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_04b_2_bist_done_shift         (11)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_04b_bist_done_shift           (10)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_04a_bist_done_shift           (9)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_03b_2_bist_done_shift         (8)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_03b_1_bist_done_shift         (7)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_03a_3_bist_done_shift         (6)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_03a_2_bist_done_shift         (5)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_03a_1_bist_done_shift         (4)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_02b_bist_done_shift           (3)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_02a_bist_done_shift           (2)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_01_2_bist_done_shift          (1)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_01_1_bist_done_shift          (0)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_05_2_bist_done_mask           (0x00002000)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_05_1_bist_done_mask           (0x00001000)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_04b_2_bist_done_mask          (0x00000800)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_04b_bist_done_mask            (0x00000400)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_04a_bist_done_mask            (0x00000200)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_03b_2_bist_done_mask          (0x00000100)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_03b_1_bist_done_mask          (0x00000080)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_03a_3_bist_done_mask          (0x00000040)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_03a_2_bist_done_mask          (0x00000020)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_03a_1_bist_done_mask          (0x00000010)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_02b_bist_done_mask            (0x00000008)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_02a_bist_done_mask            (0x00000004)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_01_2_bist_done_mask           (0x00000002)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_01_1_bist_done_mask           (0x00000001)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_05_2_bist_done(data)          (0x00002000&((data)<<13))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_05_1_bist_done(data)          (0x00001000&((data)<<12))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_04b_2_bist_done(data)         (0x00000800&((data)<<11))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_04b_bist_done(data)           (0x00000400&((data)<<10))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_04a_bist_done(data)           (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_03b_2_bist_done(data)         (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_03b_1_bist_done(data)         (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_03a_3_bist_done(data)         (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_03a_2_bist_done(data)         (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_03a_1_bist_done(data)         (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_02b_bist_done(data)           (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_02a_bist_done(data)           (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_01_2_bist_done(data)          (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_memory_bank_01_1_bist_done(data)          (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_get_memory_bank_05_2_bist_done(data)      ((0x00002000&(data))>>13)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_get_memory_bank_05_1_bist_done(data)      ((0x00001000&(data))>>12)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_get_memory_bank_04b_2_bist_done(data)     ((0x00000800&(data))>>11)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_get_memory_bank_04b_bist_done(data)       ((0x00000400&(data))>>10)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_get_memory_bank_04a_bist_done(data)       ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_get_memory_bank_03b_2_bist_done(data)     ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_get_memory_bank_03b_1_bist_done(data)     ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_get_memory_bank_03a_3_bist_done(data)     ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_get_memory_bank_03a_2_bist_done(data)     ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_get_memory_bank_03a_1_bist_done(data)     ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_get_memory_bank_02b_bist_done(data)       ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_get_memory_bank_02a_bist_done(data)       ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_get_memory_bank_01_2_bist_done(data)      ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS0_get_memory_bank_01_1_bist_done(data)      (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_DONE_SYS1                                          0x1816F438
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_reg_addr                                  "0xB816F438"
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_reg                                       0xB816F438
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_inst_addr                                 "0x005B"
#define  set_DTV_DEMOD_MISC_BIST_DONE_SYS1_reg(data)                             (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_DONE_SYS1_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_DONE_SYS1_reg                                   (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_DONE_SYS1_reg))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_bist_done_atsc_2_shift                    (9)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_bist_done_atsc_shift                      (8)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_memory_bank_10_bist_done_shift            (7)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_memory_bank_09_bist_done_shift            (6)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_memory_bank_08_bist_done_shift            (5)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_memory_bank_07_1_bist_done_shift          (3)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_memory_bank_06_3_bist_done_shift          (2)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_memory_bank_06_2_bist_done_shift          (1)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_memory_bank_06_1_bist_done_shift          (0)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_bist_done_atsc_2_mask                     (0x00000200)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_bist_done_atsc_mask                       (0x00000100)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_memory_bank_10_bist_done_mask             (0x00000080)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_memory_bank_09_bist_done_mask             (0x00000040)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_memory_bank_08_bist_done_mask             (0x00000020)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_memory_bank_07_1_bist_done_mask           (0x00000008)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_memory_bank_06_3_bist_done_mask           (0x00000004)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_memory_bank_06_2_bist_done_mask           (0x00000002)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_memory_bank_06_1_bist_done_mask           (0x00000001)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_bist_done_atsc_2(data)                    (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_bist_done_atsc(data)                      (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_memory_bank_10_bist_done(data)            (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_memory_bank_09_bist_done(data)            (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_memory_bank_08_bist_done(data)            (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_memory_bank_07_1_bist_done(data)          (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_memory_bank_06_3_bist_done(data)          (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_memory_bank_06_2_bist_done(data)          (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_memory_bank_06_1_bist_done(data)          (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_get_bist_done_atsc_2(data)                ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_get_bist_done_atsc(data)                  ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_get_memory_bank_10_bist_done(data)        ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_get_memory_bank_09_bist_done(data)        ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_get_memory_bank_08_bist_done(data)        ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_get_memory_bank_07_1_bist_done(data)      ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_get_memory_bank_06_3_bist_done(data)      ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_get_memory_bank_06_2_bist_done(data)      ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_DONE_SYS1_get_memory_bank_06_1_bist_done(data)      (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0                                      0x1816F43C
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_reg_addr                              "0xB816F43C"
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_reg                                   0xB816F43C
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_inst_addr                             "0x005C"
#define  set_DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_reg(data)                         (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_reg                               (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_05_2_drf_bist_done_shift  (13)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_05_1_drf_bist_done_shift  (12)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_04b_2_drf_bist_done_shift (11)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_04b_drf_bist_done_shift   (10)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_04a_drf_bist_done_shift   (9)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_03b_2_drf_bist_done_shift (8)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_03b_1_drf_bist_done_shift (7)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_03a_3_drf_bist_done_shift (6)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_03a_2_drf_bist_done_shift (5)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_03a_1_drf_bist_done_shift (4)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_02b_drf_bist_done_shift   (3)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_02a_drf_bist_done_shift   (2)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_01_2_drf_bist_done_shift  (1)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_01_1_drf_bist_done_shift  (0)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_05_2_drf_bist_done_mask   (0x00002000)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_05_1_drf_bist_done_mask   (0x00001000)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_04b_2_drf_bist_done_mask  (0x00000800)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_04b_drf_bist_done_mask    (0x00000400)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_04a_drf_bist_done_mask    (0x00000200)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_03b_2_drf_bist_done_mask  (0x00000100)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_03b_1_drf_bist_done_mask  (0x00000080)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_03a_3_drf_bist_done_mask  (0x00000040)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_03a_2_drf_bist_done_mask  (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_03a_1_drf_bist_done_mask  (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_02b_drf_bist_done_mask    (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_02a_drf_bist_done_mask    (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_01_2_drf_bist_done_mask   (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_01_1_drf_bist_done_mask   (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_05_2_drf_bist_done(data)  (0x00002000&((data)<<13))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_05_1_drf_bist_done(data)  (0x00001000&((data)<<12))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_04b_2_drf_bist_done(data) (0x00000800&((data)<<11))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_04b_drf_bist_done(data)   (0x00000400&((data)<<10))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_04a_drf_bist_done(data)   (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_03b_2_drf_bist_done(data) (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_03b_1_drf_bist_done(data) (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_03a_3_drf_bist_done(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_03a_2_drf_bist_done(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_03a_1_drf_bist_done(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_02b_drf_bist_done(data)   (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_02a_drf_bist_done(data)   (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_01_2_drf_bist_done(data)  (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_memory_bank_01_1_drf_bist_done(data)  (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_get_memory_bank_05_2_drf_bist_done(data) ((0x00002000&(data))>>13)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_get_memory_bank_05_1_drf_bist_done(data) ((0x00001000&(data))>>12)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_get_memory_bank_04b_2_drf_bist_done(data) ((0x00000800&(data))>>11)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_get_memory_bank_04b_drf_bist_done(data) ((0x00000400&(data))>>10)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_get_memory_bank_04a_drf_bist_done(data) ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_get_memory_bank_03b_2_drf_bist_done(data) ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_get_memory_bank_03b_1_drf_bist_done(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_get_memory_bank_03a_3_drf_bist_done(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_get_memory_bank_03a_2_drf_bist_done(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_get_memory_bank_03a_1_drf_bist_done(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_get_memory_bank_02b_drf_bist_done(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_get_memory_bank_02a_drf_bist_done(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_get_memory_bank_01_2_drf_bist_done(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS0_get_memory_bank_01_1_drf_bist_done(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1                                      0x1816F440
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_reg_addr                              "0xB816F440"
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_reg                                   0xB816F440
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_inst_addr                             "0x005D"
#define  set_DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_reg(data)                         (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_reg                               (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_drf_bist_done_atsc_2_shift            (9)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_drf_bist_done_atsc_shift              (8)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_memory_bank_10_drf_bist_done_shift    (7)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_memory_bank_09_drf_bist_done_shift    (6)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_memory_bank_08_drf_bist_done_shift    (5)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_memory_bank_07_1_drf_bist_done_shift  (3)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_memory_bank_06_3_drf_bist_done_shift  (2)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_memory_bank_06_2_drf_bist_done_shift  (1)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_memory_bank_06_1_drf_bist_done_shift  (0)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_drf_bist_done_atsc_2_mask             (0x00000200)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_drf_bist_done_atsc_mask               (0x00000100)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_memory_bank_10_drf_bist_done_mask     (0x00000080)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_memory_bank_09_drf_bist_done_mask     (0x00000040)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_memory_bank_08_drf_bist_done_mask     (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_memory_bank_07_1_drf_bist_done_mask   (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_memory_bank_06_3_drf_bist_done_mask   (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_memory_bank_06_2_drf_bist_done_mask   (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_memory_bank_06_1_drf_bist_done_mask   (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_drf_bist_done_atsc_2(data)            (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_drf_bist_done_atsc(data)              (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_memory_bank_10_drf_bist_done(data)    (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_memory_bank_09_drf_bist_done(data)    (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_memory_bank_08_drf_bist_done(data)    (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_memory_bank_07_1_drf_bist_done(data)  (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_memory_bank_06_3_drf_bist_done(data)  (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_memory_bank_06_2_drf_bist_done(data)  (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_memory_bank_06_1_drf_bist_done(data)  (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_get_drf_bist_done_atsc_2(data)        ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_get_drf_bist_done_atsc(data)          ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_get_memory_bank_10_drf_bist_done(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_get_memory_bank_09_drf_bist_done(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_get_memory_bank_08_drf_bist_done(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_get_memory_bank_07_1_drf_bist_done(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_get_memory_bank_06_3_drf_bist_done(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_get_memory_bank_06_2_drf_bist_done(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_SYS1_get_memory_bank_06_1_drf_bist_done(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0                                          0x1816F444
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_reg_addr                                  "0xB816F444"
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_reg                                       0xB816F444
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_inst_addr                                 "0x005E"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_SYS0_reg(data)                             (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_SYS0_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_SYS0_reg                                   (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_SYS0_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_05_2_bist_fail_shift          (13)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_05_1_bist_fail_shift          (12)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_04b_2_bist_fail_shift         (11)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_04b_bist_fail_shift           (10)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_04a_bist_fail_shift           (9)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_03b_2_bist_fail_shift         (8)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_03b_1_bist_fail_shift         (7)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_03a_3_bist_fail_shift         (6)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_03a_2_bist_fail_shift         (5)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_03a_1_bist_fail_shift         (4)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_02b_bist_fail_shift           (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_02a_bist_fail_shift           (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_01_2_bist_fail_shift          (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_01_1_bist_fail_shift          (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_05_2_bist_fail_mask           (0x00002000)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_05_1_bist_fail_mask           (0x00001000)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_04b_2_bist_fail_mask          (0x00000800)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_04b_bist_fail_mask            (0x00000400)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_04a_bist_fail_mask            (0x00000200)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_03b_2_bist_fail_mask          (0x00000100)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_03b_1_bist_fail_mask          (0x00000080)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_03a_3_bist_fail_mask          (0x00000040)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_03a_2_bist_fail_mask          (0x00000020)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_03a_1_bist_fail_mask          (0x00000010)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_02b_bist_fail_mask            (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_02a_bist_fail_mask            (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_01_2_bist_fail_mask           (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_01_1_bist_fail_mask           (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_05_2_bist_fail(data)          (0x00002000&((data)<<13))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_05_1_bist_fail(data)          (0x00001000&((data)<<12))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_04b_2_bist_fail(data)         (0x00000800&((data)<<11))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_04b_bist_fail(data)           (0x00000400&((data)<<10))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_04a_bist_fail(data)           (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_03b_2_bist_fail(data)         (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_03b_1_bist_fail(data)         (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_03a_3_bist_fail(data)         (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_03a_2_bist_fail(data)         (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_03a_1_bist_fail(data)         (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_02b_bist_fail(data)           (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_02a_bist_fail(data)           (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_01_2_bist_fail(data)          (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_memory_bank_01_1_bist_fail(data)          (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_get_memory_bank_05_2_bist_fail(data)      ((0x00002000&(data))>>13)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_get_memory_bank_05_1_bist_fail(data)      ((0x00001000&(data))>>12)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_get_memory_bank_04b_2_bist_fail(data)     ((0x00000800&(data))>>11)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_get_memory_bank_04b_bist_fail(data)       ((0x00000400&(data))>>10)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_get_memory_bank_04a_bist_fail(data)       ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_get_memory_bank_03b_2_bist_fail(data)     ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_get_memory_bank_03b_1_bist_fail(data)     ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_get_memory_bank_03a_3_bist_fail(data)     ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_get_memory_bank_03a_2_bist_fail(data)     ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_get_memory_bank_03a_1_bist_fail(data)     ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_get_memory_bank_02b_bist_fail(data)       ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_get_memory_bank_02a_bist_fail(data)       ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_get_memory_bank_01_2_bist_fail(data)      ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS0_get_memory_bank_01_1_bist_fail(data)      (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1                                          0x1816F448
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_reg_addr                                  "0xB816F448"
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_reg                                       0xB816F448
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_inst_addr                                 "0x005F"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_SYS1_reg(data)                             (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_SYS1_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_SYS1_reg                                   (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_SYS1_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_bist_fail_atsc_2_shift                    (9)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_bist_fail_atsc_shift                      (8)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_memory_bank_10_bist_fail_shift            (7)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_memory_bank_09_bist_fail_shift            (6)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_memory_bank_08_bist_fail_shift            (5)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_memory_bank_07_1_bist_fail_shift          (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_memory_bank_06_3_bist_fail_shift          (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_memory_bank_06_2_bist_fail_shift          (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_memory_bank_06_1_bist_fail_shift          (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_bist_fail_atsc_2_mask                     (0x00000200)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_bist_fail_atsc_mask                       (0x00000100)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_memory_bank_10_bist_fail_mask             (0x00000080)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_memory_bank_09_bist_fail_mask             (0x00000040)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_memory_bank_08_bist_fail_mask             (0x00000020)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_memory_bank_07_1_bist_fail_mask           (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_memory_bank_06_3_bist_fail_mask           (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_memory_bank_06_2_bist_fail_mask           (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_memory_bank_06_1_bist_fail_mask           (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_bist_fail_atsc_2(data)                    (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_bist_fail_atsc(data)                      (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_memory_bank_10_bist_fail(data)            (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_memory_bank_09_bist_fail(data)            (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_memory_bank_08_bist_fail(data)            (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_memory_bank_07_1_bist_fail(data)          (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_memory_bank_06_3_bist_fail(data)          (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_memory_bank_06_2_bist_fail(data)          (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_memory_bank_06_1_bist_fail(data)          (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_get_bist_fail_atsc_2(data)                ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_get_bist_fail_atsc(data)                  ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_get_memory_bank_10_bist_fail(data)        ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_get_memory_bank_09_bist_fail(data)        ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_get_memory_bank_08_bist_fail(data)        ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_get_memory_bank_07_1_bist_fail(data)      ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_get_memory_bank_06_3_bist_fail(data)      ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_get_memory_bank_06_2_bist_fail(data)      ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_SYS1_get_memory_bank_06_1_bist_fail(data)      (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0                                      0x1816F44C
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_reg_addr                              "0xB816F44C"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_reg                                   0xB816F44C
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_inst_addr                             "0x0060"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_reg(data)                         (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_reg                               (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_05_2_drf_bist_fail_shift  (13)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_05_1_drf_bist_fail_shift  (12)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_04b_2_drf_bist_fail_shift (11)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_04b_drf_bist_fail_shift   (10)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_04a_drf_bist_fail_shift   (9)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_03b_2_drf_bist_fail_shift (8)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_03b_1_drf_bist_fail_shift (7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_03a_3_drf_bist_fail_shift (6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_03a_2_drf_bist_fail_shift (5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_03a_1_drf_bist_fail_shift (4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_02b_drf_bist_fail_shift   (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_02a_drf_bist_fail_shift   (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_01_2_drf_bist_fail_shift  (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_01_1_drf_bist_fail_shift  (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_05_2_drf_bist_fail_mask   (0x00002000)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_05_1_drf_bist_fail_mask   (0x00001000)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_04b_2_drf_bist_fail_mask  (0x00000800)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_04b_drf_bist_fail_mask    (0x00000400)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_04a_drf_bist_fail_mask    (0x00000200)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_03b_2_drf_bist_fail_mask  (0x00000100)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_03b_1_drf_bist_fail_mask  (0x00000080)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_03a_3_drf_bist_fail_mask  (0x00000040)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_03a_2_drf_bist_fail_mask  (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_03a_1_drf_bist_fail_mask  (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_02b_drf_bist_fail_mask    (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_02a_drf_bist_fail_mask    (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_01_2_drf_bist_fail_mask   (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_01_1_drf_bist_fail_mask   (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_05_2_drf_bist_fail(data)  (0x00002000&((data)<<13))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_05_1_drf_bist_fail(data)  (0x00001000&((data)<<12))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_04b_2_drf_bist_fail(data) (0x00000800&((data)<<11))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_04b_drf_bist_fail(data)   (0x00000400&((data)<<10))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_04a_drf_bist_fail(data)   (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_03b_2_drf_bist_fail(data) (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_03b_1_drf_bist_fail(data) (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_03a_3_drf_bist_fail(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_03a_2_drf_bist_fail(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_03a_1_drf_bist_fail(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_02b_drf_bist_fail(data)   (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_02a_drf_bist_fail(data)   (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_01_2_drf_bist_fail(data)  (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_memory_bank_01_1_drf_bist_fail(data)  (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_get_memory_bank_05_2_drf_bist_fail(data) ((0x00002000&(data))>>13)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_get_memory_bank_05_1_drf_bist_fail(data) ((0x00001000&(data))>>12)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_get_memory_bank_04b_2_drf_bist_fail(data) ((0x00000800&(data))>>11)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_get_memory_bank_04b_drf_bist_fail(data) ((0x00000400&(data))>>10)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_get_memory_bank_04a_drf_bist_fail(data) ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_get_memory_bank_03b_2_drf_bist_fail(data) ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_get_memory_bank_03b_1_drf_bist_fail(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_get_memory_bank_03a_3_drf_bist_fail(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_get_memory_bank_03a_2_drf_bist_fail(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_get_memory_bank_03a_1_drf_bist_fail(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_get_memory_bank_02b_drf_bist_fail(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_get_memory_bank_02a_drf_bist_fail(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_get_memory_bank_01_2_drf_bist_fail(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS0_get_memory_bank_01_1_drf_bist_fail(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1                                      0x1816F450
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_reg_addr                              "0xB816F450"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_reg                                   0xB816F450
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_inst_addr                             "0x0061"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_reg(data)                         (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_reg                               (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_drf_bist_fail_atsc_2_shift            (9)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_drf_bist_fail_atsc_shift              (8)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_memory_bank_10_drf_bist_fail_shift    (7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_memory_bank_09_drf_bist_fail_shift    (6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_memory_bank_08_drf_bist_fail_shift    (5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_memory_bank_07_1_drf_bist_fail_shift  (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_memory_bank_06_3_drf_bist_fail_shift  (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_memory_bank_06_2_drf_bist_fail_shift  (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_memory_bank_06_1_drf_bist_fail_shift  (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_drf_bist_fail_atsc_2_mask             (0x00000200)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_drf_bist_fail_atsc_mask               (0x00000100)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_memory_bank_10_drf_bist_fail_mask     (0x00000080)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_memory_bank_09_drf_bist_fail_mask     (0x00000040)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_memory_bank_08_drf_bist_fail_mask     (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_memory_bank_07_1_drf_bist_fail_mask   (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_memory_bank_06_3_drf_bist_fail_mask   (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_memory_bank_06_2_drf_bist_fail_mask   (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_memory_bank_06_1_drf_bist_fail_mask   (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_drf_bist_fail_atsc_2(data)            (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_drf_bist_fail_atsc(data)              (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_memory_bank_10_drf_bist_fail(data)    (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_memory_bank_09_drf_bist_fail(data)    (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_memory_bank_08_drf_bist_fail(data)    (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_memory_bank_07_1_drf_bist_fail(data)  (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_memory_bank_06_3_drf_bist_fail(data)  (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_memory_bank_06_2_drf_bist_fail(data)  (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_memory_bank_06_1_drf_bist_fail(data)  (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_get_drf_bist_fail_atsc_2(data)        ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_get_drf_bist_fail_atsc(data)          ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_get_memory_bank_10_drf_bist_fail(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_get_memory_bank_09_drf_bist_fail(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_get_memory_bank_08_drf_bist_fail(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_get_memory_bank_07_1_drf_bist_fail(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_get_memory_bank_06_3_drf_bist_fail(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_get_memory_bank_06_2_drf_bist_fail(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_SYS1_get_memory_bank_06_1_drf_bist_fail(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0                                    0x1816F454
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_reg_addr                            "0xB816F454"
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_reg                                 0xB816F454
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_inst_addr                           "0x0062"
#define  set_DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_reg(data)                       (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_reg                             (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_reg))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_05_2_drf_start_pause_shift (13)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_05_1_drf_start_pause_shift (12)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_04b_2_drf_start_pause_shift (11)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_04b_drf_start_pause_shift (10)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_04a_drf_start_pause_shift (9)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_03b_2_drf_start_pause_shift (8)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_03b_1_drf_start_pause_shift (7)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_03a_3_drf_start_pause_shift (6)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_03a_2_drf_start_pause_shift (5)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_03a_1_drf_start_pause_shift (4)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_02b_drf_start_pause_shift (3)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_02a_drf_start_pause_shift (2)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_01_2_drf_start_pause_shift (1)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_01_1_drf_start_pause_shift (0)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_05_2_drf_start_pause_mask (0x00002000)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_05_1_drf_start_pause_mask (0x00001000)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_04b_2_drf_start_pause_mask (0x00000800)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_04b_drf_start_pause_mask (0x00000400)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_04a_drf_start_pause_mask (0x00000200)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_03b_2_drf_start_pause_mask (0x00000100)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_03b_1_drf_start_pause_mask (0x00000080)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_03a_3_drf_start_pause_mask (0x00000040)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_03a_2_drf_start_pause_mask (0x00000020)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_03a_1_drf_start_pause_mask (0x00000010)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_02b_drf_start_pause_mask (0x00000008)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_02a_drf_start_pause_mask (0x00000004)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_01_2_drf_start_pause_mask (0x00000002)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_01_1_drf_start_pause_mask (0x00000001)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_05_2_drf_start_pause(data) (0x00002000&((data)<<13))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_05_1_drf_start_pause(data) (0x00001000&((data)<<12))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_04b_2_drf_start_pause(data) (0x00000800&((data)<<11))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_04b_drf_start_pause(data) (0x00000400&((data)<<10))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_04a_drf_start_pause(data) (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_03b_2_drf_start_pause(data) (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_03b_1_drf_start_pause(data) (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_03a_3_drf_start_pause(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_03a_2_drf_start_pause(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_03a_1_drf_start_pause(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_02b_drf_start_pause(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_02a_drf_start_pause(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_01_2_drf_start_pause(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_memory_bank_01_1_drf_start_pause(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_get_memory_bank_05_2_drf_start_pause(data) ((0x00002000&(data))>>13)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_get_memory_bank_05_1_drf_start_pause(data) ((0x00001000&(data))>>12)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_get_memory_bank_04b_2_drf_start_pause(data) ((0x00000800&(data))>>11)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_get_memory_bank_04b_drf_start_pause(data) ((0x00000400&(data))>>10)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_get_memory_bank_04a_drf_start_pause(data) ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_get_memory_bank_03b_2_drf_start_pause(data) ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_get_memory_bank_03b_1_drf_start_pause(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_get_memory_bank_03a_3_drf_start_pause(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_get_memory_bank_03a_2_drf_start_pause(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_get_memory_bank_03a_1_drf_start_pause(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_get_memory_bank_02b_drf_start_pause(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_get_memory_bank_02a_drf_start_pause(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_get_memory_bank_01_2_drf_start_pause(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS0_get_memory_bank_01_1_drf_start_pause(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1                                    0x1816F458
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_reg_addr                            "0xB816F458"
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_reg                                 0xB816F458
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_inst_addr                           "0x0063"
#define  set_DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_reg(data)                       (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_reg                             (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_reg))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_drf_start_pause_atsc_2_shift        (9)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_drf_start_pause_atsc_shift          (8)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_memory_bank_10_drf_start_pause_shift (7)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_memory_bank_09_drf_start_pause_shift (6)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_memory_bank_08_drf_start_pause_shift (5)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_memory_bank_07_1_drf_start_pause_shift (3)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_memory_bank_06_3_drf_start_pause_shift (2)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_memory_bank_06_2_drf_start_pause_shift (1)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_memory_bank_06_1_drf_start_pause_shift (0)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_drf_start_pause_atsc_2_mask         (0x00000200)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_drf_start_pause_atsc_mask           (0x00000100)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_memory_bank_10_drf_start_pause_mask (0x00000080)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_memory_bank_09_drf_start_pause_mask (0x00000040)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_memory_bank_08_drf_start_pause_mask (0x00000020)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_memory_bank_07_1_drf_start_pause_mask (0x00000008)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_memory_bank_06_3_drf_start_pause_mask (0x00000004)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_memory_bank_06_2_drf_start_pause_mask (0x00000002)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_memory_bank_06_1_drf_start_pause_mask (0x00000001)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_drf_start_pause_atsc_2(data)        (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_drf_start_pause_atsc(data)          (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_memory_bank_10_drf_start_pause(data) (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_memory_bank_09_drf_start_pause(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_memory_bank_08_drf_start_pause(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_memory_bank_07_1_drf_start_pause(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_memory_bank_06_3_drf_start_pause(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_memory_bank_06_2_drf_start_pause(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_memory_bank_06_1_drf_start_pause(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_get_drf_start_pause_atsc_2(data)    ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_get_drf_start_pause_atsc(data)      ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_get_memory_bank_10_drf_start_pause(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_get_memory_bank_09_drf_start_pause(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_get_memory_bank_08_drf_start_pause(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_get_memory_bank_07_1_drf_start_pause(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_get_memory_bank_06_3_drf_start_pause(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_get_memory_bank_06_2_drf_start_pause(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_SYS1_get_memory_bank_06_1_drf_start_pause(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0                              0x1816F45C
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_reg_addr                      "0xB816F45C"
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_reg                           0xB816F45C
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_inst_addr                     "0x0064"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_reg(data)                 (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_reg                       (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_bist_fail_5_shift (6)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_bist_fail_4_shift (5)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_bist_fail_3_shift (4)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_bist_fail_2_shift (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_bist_fail_1_shift (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_bist_fail_0_shift (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_1_bist_fail_0_shift (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_bist_fail_5_mask (0x00000040)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_bist_fail_4_mask (0x00000020)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_bist_fail_3_mask (0x00000010)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_bist_fail_2_mask (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_bist_fail_1_mask (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_bist_fail_0_mask (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_1_bist_fail_0_mask (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_bist_fail_5(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_bist_fail_4(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_bist_fail_3(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_bist_fail_2(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_bist_fail_1(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_bist_fail_0(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_1_bist_fail_0(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_get_memory_bank_01_2_bist_fail_5(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_get_memory_bank_01_2_bist_fail_4(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_get_memory_bank_01_2_bist_fail_3(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_get_memory_bank_01_2_bist_fail_2(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_get_memory_bank_01_2_bist_fail_1(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_get_memory_bank_01_2_bist_fail_0(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_01_0_get_memory_bank_01_1_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A                              0x1816F464
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_reg_addr                      "0xB816F464"
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_reg                           0xB816F464
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_inst_addr                     "0x0065"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_reg(data)                 (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_reg                       (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_bist_fail_5_shift (5)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_bist_fail_4_shift (4)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_bist_fail_3_shift (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_bist_fail_2_shift (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_bist_fail_1_shift (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_bist_fail_0_shift (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_bist_fail_5_mask (0x00000020)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_bist_fail_4_mask (0x00000010)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_bist_fail_3_mask (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_bist_fail_2_mask (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_bist_fail_1_mask (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_bist_fail_0_mask (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_bist_fail_5(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_bist_fail_4(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_bist_fail_3(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_bist_fail_2(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_bist_fail_1(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_bist_fail_0(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_get_memory_bank_02a_bist_fail_5(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_get_memory_bank_02a_bist_fail_4(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_get_memory_bank_02a_bist_fail_3(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_get_memory_bank_02a_bist_fail_2(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_get_memory_bank_02a_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_A_get_memory_bank_02a_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B                              0x1816F468
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_reg_addr                      "0xB816F468"
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_reg                           0xB816F468
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_inst_addr                     "0x0066"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_reg(data)                 (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_reg                       (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_bist_fail_5_shift (5)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_bist_fail_4_shift (4)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_bist_fail_3_shift (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_bist_fail_2_shift (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_bist_fail_1_shift (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_bist_fail_0_shift (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_bist_fail_5_mask (0x00000020)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_bist_fail_4_mask (0x00000010)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_bist_fail_3_mask (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_bist_fail_2_mask (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_bist_fail_1_mask (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_bist_fail_0_mask (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_bist_fail_5(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_bist_fail_4(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_bist_fail_3(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_bist_fail_2(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_bist_fail_1(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_bist_fail_0(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_get_memory_bank_02b_bist_fail_5(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_get_memory_bank_02b_bist_fail_4(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_get_memory_bank_02b_bist_fail_3(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_get_memory_bank_02b_bist_fail_2(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_get_memory_bank_02b_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_02_B_get_memory_bank_02b_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A                              0x1816F46C
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_reg_addr                      "0xB816F46C"
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_reg                           0xB816F46C
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_inst_addr                     "0x0067"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_reg(data)                 (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_reg                       (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_3_bist_fail_2_shift (6)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_3_bist_fail_1_shift (5)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_3_bist_fail_0_shift (4)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_2_bist_fail_1_shift (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_2_bist_fail_0_shift (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_1_bist_fail_1_shift (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_1_bist_fail_0_shift (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_3_bist_fail_2_mask (0x00000040)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_3_bist_fail_1_mask (0x00000020)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_3_bist_fail_0_mask (0x00000010)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_2_bist_fail_1_mask (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_2_bist_fail_0_mask (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_1_bist_fail_1_mask (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_1_bist_fail_0_mask (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_3_bist_fail_2(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_3_bist_fail_1(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_3_bist_fail_0(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_2_bist_fail_1(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_2_bist_fail_0(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_1_bist_fail_1(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_1_bist_fail_0(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_get_memory_bank_03a_3_bist_fail_2(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_get_memory_bank_03a_3_bist_fail_1(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_get_memory_bank_03a_3_bist_fail_0(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_get_memory_bank_03a_2_bist_fail_1(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_get_memory_bank_03a_2_bist_fail_0(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_get_memory_bank_03a_1_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_A_get_memory_bank_03a_1_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B                              0x1816F470
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_reg_addr                      "0xB816F470"
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_reg                           0xB816F470
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_inst_addr                     "0x0068"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_reg(data)                 (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_reg                       (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_2_bist_fail_3_shift (7)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_2_bist_fail_2_shift (6)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_2_bist_fail_1_shift (5)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_2_bist_fail_0_shift (4)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_1_bist_fail_3_shift (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_1_bist_fail_2_shift (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_1_bist_fail_1_shift (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_1_bist_fail_0_shift (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_2_bist_fail_3_mask (0x00000080)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_2_bist_fail_2_mask (0x00000040)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_2_bist_fail_1_mask (0x00000020)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_2_bist_fail_0_mask (0x00000010)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_1_bist_fail_3_mask (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_1_bist_fail_2_mask (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_1_bist_fail_1_mask (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_1_bist_fail_0_mask (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_2_bist_fail_3(data) (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_2_bist_fail_2(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_2_bist_fail_1(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_2_bist_fail_0(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_1_bist_fail_3(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_1_bist_fail_2(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_1_bist_fail_1(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_1_bist_fail_0(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_get_memory_bank_03b_2_bist_fail_3(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_get_memory_bank_03b_2_bist_fail_2(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_get_memory_bank_03b_2_bist_fail_1(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_get_memory_bank_03b_2_bist_fail_0(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_get_memory_bank_03b_1_bist_fail_3(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_get_memory_bank_03b_1_bist_fail_2(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_get_memory_bank_03b_1_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_03_B_get_memory_bank_03b_1_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0                              0x1816F474
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_reg_addr                      "0xB816F474"
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_reg                           0xB816F474
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_inst_addr                     "0x0069"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_reg(data)                 (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_reg                       (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_bist_fail_4_shift (11)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_bist_fail_3_shift (10)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_bist_fail_2_shift (9)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_bist_fail_1_shift (8)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_bist_fail_0_shift (7)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_bist_fail_4_shift (6)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_bist_fail_3_shift (5)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_bist_fail_2_shift (4)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_bist_fail_1_shift (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_bist_fail_0_shift (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04a_bist_fail_1_shift (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04a_bist_fail_0_shift (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_bist_fail_4_mask (0x00000800)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_bist_fail_3_mask (0x00000400)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_bist_fail_2_mask (0x00000200)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_bist_fail_1_mask (0x00000100)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_bist_fail_0_mask (0x00000080)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_bist_fail_4_mask (0x00000040)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_bist_fail_3_mask (0x00000020)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_bist_fail_2_mask (0x00000010)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_bist_fail_1_mask (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_bist_fail_0_mask (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04a_bist_fail_1_mask (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04a_bist_fail_0_mask (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_bist_fail_4(data) (0x00000800&((data)<<11))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_bist_fail_3(data) (0x00000400&((data)<<10))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_bist_fail_2(data) (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_bist_fail_1(data) (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_bist_fail_0(data) (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_bist_fail_4(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_bist_fail_3(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_bist_fail_2(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_bist_fail_1(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_bist_fail_0(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04a_bist_fail_1(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04a_bist_fail_0(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_get_memory_bank_04b_2_bist_fail_4(data) ((0x00000800&(data))>>11)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_get_memory_bank_04b_2_bist_fail_3(data) ((0x00000400&(data))>>10)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_get_memory_bank_04b_2_bist_fail_2(data) ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_get_memory_bank_04b_2_bist_fail_1(data) ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_get_memory_bank_04b_2_bist_fail_0(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_get_memory_bank_04b_bist_fail_4(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_get_memory_bank_04b_bist_fail_3(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_get_memory_bank_04b_bist_fail_2(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_get_memory_bank_04b_bist_fail_1(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_get_memory_bank_04b_bist_fail_0(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_get_memory_bank_04a_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_04_0_get_memory_bank_04a_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0                              0x1816F47C
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_reg_addr                      "0xB816F47C"
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_reg                           0xB816F47C
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_inst_addr                     "0x006A"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_reg(data)                 (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_reg                       (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_2_bist_fail_2_shift (5)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_2_bist_fail_1_shift (4)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_2_bist_fail_0_shift (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_1_bist_fail_1_shift (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_1_bist_fail_0_shift (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_2_bist_fail_2_mask (0x00000020)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_2_bist_fail_1_mask (0x00000010)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_2_bist_fail_0_mask (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_1_bist_fail_1_mask (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_1_bist_fail_0_mask (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_2_bist_fail_2(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_2_bist_fail_1(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_2_bist_fail_0(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_1_bist_fail_1(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_1_bist_fail_0(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_get_memory_bank_05_2_bist_fail_2(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_get_memory_bank_05_2_bist_fail_1(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_get_memory_bank_05_2_bist_fail_0(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_get_memory_bank_05_1_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_05_0_get_memory_bank_05_1_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0                              0x1816F480
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_reg_addr                      "0xB816F480"
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_reg                           0xB816F480
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_inst_addr                     "0x006B"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_reg(data)                 (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_reg                       (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_2_bist_fail_2_shift (7)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_2_bist_fail_1_shift (6)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_2_bist_fail_0_shift (5)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_bist_fail_4_shift (4)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_bist_fail_3_shift (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_bist_fail_2_shift (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_bist_fail_1_shift (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_bist_fail_0_shift (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_2_bist_fail_2_mask (0x00000080)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_2_bist_fail_1_mask (0x00000040)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_2_bist_fail_0_mask (0x00000020)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_bist_fail_4_mask (0x00000010)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_bist_fail_3_mask (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_bist_fail_2_mask (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_bist_fail_1_mask (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_bist_fail_0_mask (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_2_bist_fail_2(data) (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_2_bist_fail_1(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_2_bist_fail_0(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_bist_fail_4(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_bist_fail_3(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_bist_fail_2(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_bist_fail_1(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_bist_fail_0(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_get_memory_bank_06_2_bist_fail_2(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_get_memory_bank_06_2_bist_fail_1(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_get_memory_bank_06_2_bist_fail_0(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_get_memory_bank_06_1_bist_fail_4(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_get_memory_bank_06_1_bist_fail_3(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_get_memory_bank_06_1_bist_fail_2(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_get_memory_bank_06_1_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_0_get_memory_bank_06_1_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_1                              0x1816F484
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_1_reg_addr                      "0xB816F484"
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_1_reg                           0xB816F484
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_1_inst_addr                     "0x006C"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_1_reg(data)                 (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_1_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_1_reg                       (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_1_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_1_memory_bank_06_3_bist_fail_1_shift (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_1_memory_bank_06_3_bist_fail_0_shift (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_1_memory_bank_06_2_bist_fail_3_shift (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_1_memory_bank_06_3_bist_fail_1_mask (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_1_memory_bank_06_3_bist_fail_0_mask (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_1_memory_bank_06_2_bist_fail_3_mask (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_1_memory_bank_06_3_bist_fail_1(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_1_memory_bank_06_3_bist_fail_0(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_1_memory_bank_06_2_bist_fail_3(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_1_get_memory_bank_06_3_bist_fail_1(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_1_get_memory_bank_06_3_bist_fail_0(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_06_1_get_memory_bank_06_2_bist_fail_3(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_07_0                              0x1816F488
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_07_0_reg_addr                      "0xB816F488"
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_07_0_reg                           0xB816F488
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_07_0_inst_addr                     "0x006D"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_07_0_reg(data)                 (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_07_0_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_07_0_reg                       (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_07_0_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_07_0_memory_bank_07_1_bist_fail_3_shift (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_07_0_memory_bank_07_1_bist_fail_2_shift (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_07_0_memory_bank_07_1_bist_fail_1_shift (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_07_0_memory_bank_07_1_bist_fail_0_shift (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_07_0_memory_bank_07_1_bist_fail_3_mask (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_07_0_memory_bank_07_1_bist_fail_2_mask (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_07_0_memory_bank_07_1_bist_fail_1_mask (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_07_0_memory_bank_07_1_bist_fail_0_mask (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_07_0_memory_bank_07_1_bist_fail_3(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_07_0_memory_bank_07_1_bist_fail_2(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_07_0_memory_bank_07_1_bist_fail_1(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_07_0_memory_bank_07_1_bist_fail_0(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_07_0_get_memory_bank_07_1_bist_fail_3(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_07_0_get_memory_bank_07_1_bist_fail_2(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_07_0_get_memory_bank_07_1_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_07_0_get_memory_bank_07_1_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0                              0x1816F48C
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_reg_addr                      "0xB816F48C"
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_reg                           0xB816F48C
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_inst_addr                     "0x006E"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_reg(data)                 (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_reg                       (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_8_shift (8)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_7_shift (7)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_6_shift (6)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_5_shift (5)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_4_shift (4)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_3_shift (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_2_shift (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_1_shift (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_0_shift (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_8_mask (0x00000100)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_7_mask (0x00000080)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_6_mask (0x00000040)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_5_mask (0x00000020)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_4_mask (0x00000010)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_3_mask (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_2_mask (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_1_mask (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_0_mask (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_8(data) (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_7(data) (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_6(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_5(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_4(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_3(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_2(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_1(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_bist_fail_0(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_get_memory_bank_08_bist_fail_8(data) ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_get_memory_bank_08_bist_fail_7(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_get_memory_bank_08_bist_fail_6(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_get_memory_bank_08_bist_fail_5(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_get_memory_bank_08_bist_fail_4(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_get_memory_bank_08_bist_fail_3(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_get_memory_bank_08_bist_fail_2(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_get_memory_bank_08_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_08_0_get_memory_bank_08_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0                              0x1816F490
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_reg_addr                      "0xB816F490"
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_reg                           0xB816F490
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_inst_addr                     "0x006F"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_reg(data)                 (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_reg                       (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_bist_fail_7_shift (7)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_bist_fail_6_shift (6)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_bist_fail_5_shift (5)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_bist_fail_4_shift (4)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_bist_fail_3_shift (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_bist_fail_2_shift (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_bist_fail_1_shift (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_bist_fail_0_shift (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_bist_fail_7_mask (0x00000080)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_bist_fail_6_mask (0x00000040)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_bist_fail_5_mask (0x00000020)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_bist_fail_4_mask (0x00000010)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_bist_fail_3_mask (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_bist_fail_2_mask (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_bist_fail_1_mask (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_bist_fail_0_mask (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_bist_fail_7(data) (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_bist_fail_6(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_bist_fail_5(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_bist_fail_4(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_bist_fail_3(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_bist_fail_2(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_bist_fail_1(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_bist_fail_0(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_get_memory_bank_09_bist_fail_7(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_get_memory_bank_09_bist_fail_6(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_get_memory_bank_09_bist_fail_5(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_get_memory_bank_09_bist_fail_4(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_get_memory_bank_09_bist_fail_3(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_get_memory_bank_09_bist_fail_2(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_get_memory_bank_09_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_09_0_get_memory_bank_09_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0                              0x1816F494
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_reg_addr                      "0xB816F494"
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_reg                           0xB816F494
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_inst_addr                     "0x0070"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_reg(data)                 (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_reg                       (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_bist_fail_7_shift (7)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_bist_fail_6_shift (6)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_bist_fail_5_shift (5)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_bist_fail_4_shift (4)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_bist_fail_3_shift (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_bist_fail_2_shift (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_bist_fail_1_shift (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_bist_fail_0_shift (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_bist_fail_7_mask (0x00000080)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_bist_fail_6_mask (0x00000040)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_bist_fail_5_mask (0x00000020)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_bist_fail_4_mask (0x00000010)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_bist_fail_3_mask (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_bist_fail_2_mask (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_bist_fail_1_mask (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_bist_fail_0_mask (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_bist_fail_7(data) (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_bist_fail_6(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_bist_fail_5(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_bist_fail_4(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_bist_fail_3(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_bist_fail_2(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_bist_fail_1(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_bist_fail_0(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_get_memory_bank_10_bist_fail_7(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_get_memory_bank_10_bist_fail_6(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_get_memory_bank_10_bist_fail_5(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_get_memory_bank_10_bist_fail_4(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_get_memory_bank_10_bist_fail_3(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_get_memory_bank_10_bist_fail_2(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_get_memory_bank_10_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_MEMORY_BANK_10_0_get_memory_bank_10_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0                                      0x1816F498
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_reg_addr                              "0xB816F498"
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_reg                                   0xB816F498
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_inst_addr                             "0x0071"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_reg(data)                         (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_reg                               (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_bist_fail_3_shift                (9)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_bist_fail_2_shift                (8)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_bist_fail_1_shift                (7)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_bist_fail_0_shift                (6)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_2_bist_fail_5_shift              (5)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_2_bist_fail_4_shift              (4)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_2_bist_fail_3_shift              (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_2_bist_fail_2_shift              (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_2_bist_fail_1_shift              (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_2_bist_fail_0_shift              (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_bist_fail_3_mask                 (0x00000200)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_bist_fail_2_mask                 (0x00000100)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_bist_fail_1_mask                 (0x00000080)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_bist_fail_0_mask                 (0x00000040)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_2_bist_fail_5_mask               (0x00000020)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_2_bist_fail_4_mask               (0x00000010)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_2_bist_fail_3_mask               (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_2_bist_fail_2_mask               (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_2_bist_fail_1_mask               (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_2_bist_fail_0_mask               (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_bist_fail_3(data)                (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_bist_fail_2(data)                (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_bist_fail_1(data)                (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_bist_fail_0(data)                (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_2_bist_fail_5(data)              (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_2_bist_fail_4(data)              (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_2_bist_fail_3(data)              (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_2_bist_fail_2(data)              (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_2_bist_fail_1(data)              (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_atsc_2_bist_fail_0(data)              (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_get_atsc_bist_fail_3(data)            ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_get_atsc_bist_fail_2(data)            ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_get_atsc_bist_fail_1(data)            ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_get_atsc_bist_fail_0(data)            ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_get_atsc_2_bist_fail_5(data)          ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_get_atsc_2_bist_fail_4(data)          ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_get_atsc_2_bist_fail_3(data)          ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_get_atsc_2_bist_fail_2(data)          ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_get_atsc_2_bist_fail_1(data)          ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_ATSC_2_0_get_atsc_2_bist_fail_0(data)          (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0                          0x1816F49C
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_reg_addr                  "0xB816F49C"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_reg                       0xB816F49C
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_inst_addr                 "0x0072"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_reg(data)             (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_reg                   (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_drf_bist_fail_5_shift (6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_drf_bist_fail_4_shift (5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_drf_bist_fail_3_shift (4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_drf_bist_fail_2_shift (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_drf_bist_fail_1_shift (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_drf_bist_fail_0_shift (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_1_drf_bist_fail_0_shift (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_drf_bist_fail_5_mask (0x00000040)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_drf_bist_fail_4_mask (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_drf_bist_fail_3_mask (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_drf_bist_fail_2_mask (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_drf_bist_fail_1_mask (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_drf_bist_fail_0_mask (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_1_drf_bist_fail_0_mask (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_drf_bist_fail_5(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_drf_bist_fail_4(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_drf_bist_fail_3(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_drf_bist_fail_2(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_drf_bist_fail_1(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_2_drf_bist_fail_0(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_memory_bank_01_1_drf_bist_fail_0(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_get_memory_bank_01_2_drf_bist_fail_5(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_get_memory_bank_01_2_drf_bist_fail_4(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_get_memory_bank_01_2_drf_bist_fail_3(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_get_memory_bank_01_2_drf_bist_fail_2(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_get_memory_bank_01_2_drf_bist_fail_1(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_get_memory_bank_01_2_drf_bist_fail_0(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_01_0_get_memory_bank_01_1_drf_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A                          0x1816F4A4
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_reg_addr                  "0xB816F4A4"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_reg                       0xB816F4A4
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_inst_addr                 "0x0073"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_reg(data)             (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_reg                   (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_drf_bist_fail_5_shift (5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_drf_bist_fail_4_shift (4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_drf_bist_fail_3_shift (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_drf_bist_fail_2_shift (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_drf_bist_fail_1_shift (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_drf_bist_fail_0_shift (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_drf_bist_fail_5_mask (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_drf_bist_fail_4_mask (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_drf_bist_fail_3_mask (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_drf_bist_fail_2_mask (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_drf_bist_fail_1_mask (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_drf_bist_fail_0_mask (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_drf_bist_fail_5(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_drf_bist_fail_4(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_drf_bist_fail_3(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_drf_bist_fail_2(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_drf_bist_fail_1(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_memory_bank_02a_drf_bist_fail_0(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_get_memory_bank_02a_drf_bist_fail_5(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_get_memory_bank_02a_drf_bist_fail_4(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_get_memory_bank_02a_drf_bist_fail_3(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_get_memory_bank_02a_drf_bist_fail_2(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_get_memory_bank_02a_drf_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_A_get_memory_bank_02a_drf_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B                          0x1816F4A8
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_reg_addr                  "0xB816F4A8"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_reg                       0xB816F4A8
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_inst_addr                 "0x0074"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_reg(data)             (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_reg                   (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_drf_bist_fail_5_shift (5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_drf_bist_fail_4_shift (4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_drf_bist_fail_3_shift (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_drf_bist_fail_2_shift (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_drf_bist_fail_1_shift (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_drf_bist_fail_0_shift (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_drf_bist_fail_5_mask (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_drf_bist_fail_4_mask (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_drf_bist_fail_3_mask (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_drf_bist_fail_2_mask (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_drf_bist_fail_1_mask (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_drf_bist_fail_0_mask (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_drf_bist_fail_5(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_drf_bist_fail_4(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_drf_bist_fail_3(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_drf_bist_fail_2(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_drf_bist_fail_1(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_memory_bank_02b_drf_bist_fail_0(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_get_memory_bank_02b_drf_bist_fail_5(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_get_memory_bank_02b_drf_bist_fail_4(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_get_memory_bank_02b_drf_bist_fail_3(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_get_memory_bank_02b_drf_bist_fail_2(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_get_memory_bank_02b_drf_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_02_B_get_memory_bank_02b_drf_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A                          0x1816F4AC
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_reg_addr                  "0xB816F4AC"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_reg                       0xB816F4AC
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_inst_addr                 "0x0075"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_reg(data)             (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_reg                   (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_3_drf_bist_fail_2_shift (6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_3_drf_bist_fail_1_shift (5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_3_drf_bist_fail_0_shift (4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_2_drf_bist_fail_1_shift (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_2_drf_bist_fail_0_shift (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_1_drf_bist_fail_1_shift (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_1_drf_bist_fail_0_shift (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_3_drf_bist_fail_2_mask (0x00000040)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_3_drf_bist_fail_1_mask (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_3_drf_bist_fail_0_mask (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_2_drf_bist_fail_1_mask (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_2_drf_bist_fail_0_mask (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_1_drf_bist_fail_1_mask (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_1_drf_bist_fail_0_mask (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_3_drf_bist_fail_2(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_3_drf_bist_fail_1(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_3_drf_bist_fail_0(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_2_drf_bist_fail_1(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_2_drf_bist_fail_0(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_1_drf_bist_fail_1(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_memory_bank_03a_1_drf_bist_fail_0(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_get_memory_bank_03a_3_drf_bist_fail_2(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_get_memory_bank_03a_3_drf_bist_fail_1(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_get_memory_bank_03a_3_drf_bist_fail_0(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_get_memory_bank_03a_2_drf_bist_fail_1(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_get_memory_bank_03a_2_drf_bist_fail_0(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_get_memory_bank_03a_1_drf_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_A_get_memory_bank_03a_1_drf_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B                          0x1816F4B0
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_reg_addr                  "0xB816F4B0"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_reg                       0xB816F4B0
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_inst_addr                 "0x0076"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_reg(data)             (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_reg                   (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_2_drf_bist_fail_3_shift (7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_2_drf_bist_fail_2_shift (6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_2_drf_bist_fail_1_shift (5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_2_drf_bist_fail_0_shift (4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_1_drf_bist_fail_3_shift (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_1_drf_bist_fail_2_shift (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_1_drf_bist_fail_1_shift (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_1_drf_bist_fail_0_shift (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_2_drf_bist_fail_3_mask (0x00000080)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_2_drf_bist_fail_2_mask (0x00000040)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_2_drf_bist_fail_1_mask (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_2_drf_bist_fail_0_mask (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_1_drf_bist_fail_3_mask (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_1_drf_bist_fail_2_mask (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_1_drf_bist_fail_1_mask (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_1_drf_bist_fail_0_mask (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_2_drf_bist_fail_3(data) (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_2_drf_bist_fail_2(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_2_drf_bist_fail_1(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_2_drf_bist_fail_0(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_1_drf_bist_fail_3(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_1_drf_bist_fail_2(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_1_drf_bist_fail_1(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_memory_bank_03b_1_drf_bist_fail_0(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_get_memory_bank_03b_2_drf_bist_fail_3(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_get_memory_bank_03b_2_drf_bist_fail_2(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_get_memory_bank_03b_2_drf_bist_fail_1(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_get_memory_bank_03b_2_drf_bist_fail_0(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_get_memory_bank_03b_1_drf_bist_fail_3(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_get_memory_bank_03b_1_drf_bist_fail_2(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_get_memory_bank_03b_1_drf_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_03_B_get_memory_bank_03b_1_drf_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0                          0x1816F4B4
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_reg_addr                  "0xB816F4B4"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_reg                       0xB816F4B4
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_inst_addr                 "0x0077"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_reg(data)             (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_reg                   (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_drf_bist_fail_4_shift (11)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_drf_bist_fail_3_shift (10)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_drf_bist_fail_2_shift (9)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_drf_bist_fail_1_shift (8)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_drf_bist_fail_0_shift (7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_drf_bist_fail_4_shift (6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_drf_bist_fail_3_shift (5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_drf_bist_fail_2_shift (4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_drf_bist_fail_1_shift (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_drf_bist_fail_0_shift (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04a_drf_bist_fail_1_shift (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04a_drf_bist_fail_0_shift (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_drf_bist_fail_4_mask (0x00000800)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_drf_bist_fail_3_mask (0x00000400)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_drf_bist_fail_2_mask (0x00000200)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_drf_bist_fail_1_mask (0x00000100)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_drf_bist_fail_0_mask (0x00000080)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_drf_bist_fail_4_mask (0x00000040)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_drf_bist_fail_3_mask (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_drf_bist_fail_2_mask (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_drf_bist_fail_1_mask (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_drf_bist_fail_0_mask (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04a_drf_bist_fail_1_mask (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04a_drf_bist_fail_0_mask (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_drf_bist_fail_4(data) (0x00000800&((data)<<11))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_drf_bist_fail_3(data) (0x00000400&((data)<<10))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_drf_bist_fail_2(data) (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_drf_bist_fail_1(data) (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_2_drf_bist_fail_0(data) (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_drf_bist_fail_4(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_drf_bist_fail_3(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_drf_bist_fail_2(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_drf_bist_fail_1(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04b_drf_bist_fail_0(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04a_drf_bist_fail_1(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_memory_bank_04a_drf_bist_fail_0(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_get_memory_bank_04b_2_drf_bist_fail_4(data) ((0x00000800&(data))>>11)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_get_memory_bank_04b_2_drf_bist_fail_3(data) ((0x00000400&(data))>>10)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_get_memory_bank_04b_2_drf_bist_fail_2(data) ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_get_memory_bank_04b_2_drf_bist_fail_1(data) ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_get_memory_bank_04b_2_drf_bist_fail_0(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_get_memory_bank_04b_drf_bist_fail_4(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_get_memory_bank_04b_drf_bist_fail_3(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_get_memory_bank_04b_drf_bist_fail_2(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_get_memory_bank_04b_drf_bist_fail_1(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_get_memory_bank_04b_drf_bist_fail_0(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_get_memory_bank_04a_drf_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_04_0_get_memory_bank_04a_drf_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0                          0x1816F4BC
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_reg_addr                  "0xB816F4BC"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_reg                       0xB816F4BC
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_inst_addr                 "0x0078"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_reg(data)             (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_reg                   (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_2_drf_bist_fail_2_shift (5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_2_drf_bist_fail_1_shift (4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_2_drf_bist_fail_0_shift (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_1_drf_bist_fail_1_shift (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_1_drf_bist_fail_0_shift (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_2_drf_bist_fail_2_mask (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_2_drf_bist_fail_1_mask (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_2_drf_bist_fail_0_mask (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_1_drf_bist_fail_1_mask (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_1_drf_bist_fail_0_mask (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_2_drf_bist_fail_2(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_2_drf_bist_fail_1(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_2_drf_bist_fail_0(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_1_drf_bist_fail_1(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_memory_bank_05_1_drf_bist_fail_0(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_get_memory_bank_05_2_drf_bist_fail_2(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_get_memory_bank_05_2_drf_bist_fail_1(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_get_memory_bank_05_2_drf_bist_fail_0(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_get_memory_bank_05_1_drf_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_05_0_get_memory_bank_05_1_drf_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0                          0x1816F4C0
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_reg_addr                  "0xB816F4C0"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_reg                       0xB816F4C0
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_inst_addr                 "0x0079"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_reg(data)             (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_reg                   (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_2_drf_bist_fail_2_shift (7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_2_drf_bist_fail_1_shift (6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_2_drf_bist_fail_0_shift (5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_drf_bist_fail_4_shift (4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_drf_bist_fail_3_shift (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_drf_bist_fail_2_shift (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_drf_bist_fail_1_shift (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_drf_bist_fail_0_shift (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_2_drf_bist_fail_2_mask (0x00000080)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_2_drf_bist_fail_1_mask (0x00000040)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_2_drf_bist_fail_0_mask (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_drf_bist_fail_4_mask (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_drf_bist_fail_3_mask (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_drf_bist_fail_2_mask (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_drf_bist_fail_1_mask (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_drf_bist_fail_0_mask (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_2_drf_bist_fail_2(data) (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_2_drf_bist_fail_1(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_2_drf_bist_fail_0(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_drf_bist_fail_4(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_drf_bist_fail_3(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_drf_bist_fail_2(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_drf_bist_fail_1(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_memory_bank_06_1_drf_bist_fail_0(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_get_memory_bank_06_2_drf_bist_fail_2(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_get_memory_bank_06_2_drf_bist_fail_1(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_get_memory_bank_06_2_drf_bist_fail_0(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_get_memory_bank_06_1_drf_bist_fail_4(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_get_memory_bank_06_1_drf_bist_fail_3(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_get_memory_bank_06_1_drf_bist_fail_2(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_get_memory_bank_06_1_drf_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_0_get_memory_bank_06_1_drf_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_1                          0x1816F4C4
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_1_reg_addr                  "0xB816F4C4"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_1_reg                       0xB816F4C4
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_1_inst_addr                 "0x007A"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_1_reg(data)             (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_1_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_1_reg                   (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_1_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_1_memory_bank_06_3_drf_bist_fail_1_shift (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_1_memory_bank_06_3_drf_bist_fail_0_shift (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_1_memory_bank_06_2_drf_bist_fail_3_shift (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_1_memory_bank_06_3_drf_bist_fail_1_mask (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_1_memory_bank_06_3_drf_bist_fail_0_mask (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_1_memory_bank_06_2_drf_bist_fail_3_mask (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_1_memory_bank_06_3_drf_bist_fail_1(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_1_memory_bank_06_3_drf_bist_fail_0(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_1_memory_bank_06_2_drf_bist_fail_3(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_1_get_memory_bank_06_3_drf_bist_fail_1(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_1_get_memory_bank_06_3_drf_bist_fail_0(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_06_1_get_memory_bank_06_2_drf_bist_fail_3(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_07_0                          0x1816F4C8
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_07_0_reg_addr                  "0xB816F4C8"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_07_0_reg                       0xB816F4C8
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_07_0_inst_addr                 "0x007B"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_07_0_reg(data)             (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_07_0_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_07_0_reg                   (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_07_0_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_07_0_memory_bank_07_1_drf_bist_fail_3_shift (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_07_0_memory_bank_07_1_drf_bist_fail_2_shift (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_07_0_memory_bank_07_1_drf_bist_fail_1_shift (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_07_0_memory_bank_07_1_drf_bist_fail_0_shift (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_07_0_memory_bank_07_1_drf_bist_fail_3_mask (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_07_0_memory_bank_07_1_drf_bist_fail_2_mask (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_07_0_memory_bank_07_1_drf_bist_fail_1_mask (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_07_0_memory_bank_07_1_drf_bist_fail_0_mask (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_07_0_memory_bank_07_1_drf_bist_fail_3(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_07_0_memory_bank_07_1_drf_bist_fail_2(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_07_0_memory_bank_07_1_drf_bist_fail_1(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_07_0_memory_bank_07_1_drf_bist_fail_0(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_07_0_get_memory_bank_07_1_drf_bist_fail_3(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_07_0_get_memory_bank_07_1_drf_bist_fail_2(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_07_0_get_memory_bank_07_1_drf_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_07_0_get_memory_bank_07_1_drf_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0                          0x1816F4CC
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_reg_addr                  "0xB816F4CC"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_reg                       0xB816F4CC
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_inst_addr                 "0x007C"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_reg(data)             (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_reg                   (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_8_shift (8)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_7_shift (7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_6_shift (6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_5_shift (5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_4_shift (4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_3_shift (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_2_shift (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_1_shift (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_0_shift (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_8_mask (0x00000100)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_7_mask (0x00000080)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_6_mask (0x00000040)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_5_mask (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_4_mask (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_3_mask (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_2_mask (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_1_mask (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_0_mask (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_8(data) (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_7(data) (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_6(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_5(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_4(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_3(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_2(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_1(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_memory_bank_08_drf_bist_fail_0(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_get_memory_bank_08_drf_bist_fail_8(data) ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_get_memory_bank_08_drf_bist_fail_7(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_get_memory_bank_08_drf_bist_fail_6(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_get_memory_bank_08_drf_bist_fail_5(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_get_memory_bank_08_drf_bist_fail_4(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_get_memory_bank_08_drf_bist_fail_3(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_get_memory_bank_08_drf_bist_fail_2(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_get_memory_bank_08_drf_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_08_0_get_memory_bank_08_drf_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0                          0x1816F4D0
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_reg_addr                  "0xB816F4D0"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_reg                       0xB816F4D0
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_inst_addr                 "0x007D"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_reg(data)             (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_reg                   (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_drf_bist_fail_7_shift (7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_drf_bist_fail_6_shift (6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_drf_bist_fail_5_shift (5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_drf_bist_fail_4_shift (4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_drf_bist_fail_3_shift (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_drf_bist_fail_2_shift (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_drf_bist_fail_1_shift (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_drf_bist_fail_0_shift (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_drf_bist_fail_7_mask (0x00000080)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_drf_bist_fail_6_mask (0x00000040)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_drf_bist_fail_5_mask (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_drf_bist_fail_4_mask (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_drf_bist_fail_3_mask (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_drf_bist_fail_2_mask (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_drf_bist_fail_1_mask (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_drf_bist_fail_0_mask (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_drf_bist_fail_7(data) (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_drf_bist_fail_6(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_drf_bist_fail_5(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_drf_bist_fail_4(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_drf_bist_fail_3(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_drf_bist_fail_2(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_drf_bist_fail_1(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_memory_bank_09_drf_bist_fail_0(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_get_memory_bank_09_drf_bist_fail_7(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_get_memory_bank_09_drf_bist_fail_6(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_get_memory_bank_09_drf_bist_fail_5(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_get_memory_bank_09_drf_bist_fail_4(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_get_memory_bank_09_drf_bist_fail_3(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_get_memory_bank_09_drf_bist_fail_2(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_get_memory_bank_09_drf_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_09_0_get_memory_bank_09_drf_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0                          0x1816F4D4
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_reg_addr                  "0xB816F4D4"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_reg                       0xB816F4D4
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_inst_addr                 "0x007E"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_reg(data)             (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_reg                   (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_drf_bist_fail_7_shift (7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_drf_bist_fail_6_shift (6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_drf_bist_fail_5_shift (5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_drf_bist_fail_4_shift (4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_drf_bist_fail_3_shift (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_drf_bist_fail_2_shift (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_drf_bist_fail_1_shift (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_drf_bist_fail_0_shift (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_drf_bist_fail_7_mask (0x00000080)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_drf_bist_fail_6_mask (0x00000040)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_drf_bist_fail_5_mask (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_drf_bist_fail_4_mask (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_drf_bist_fail_3_mask (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_drf_bist_fail_2_mask (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_drf_bist_fail_1_mask (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_drf_bist_fail_0_mask (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_drf_bist_fail_7(data) (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_drf_bist_fail_6(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_drf_bist_fail_5(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_drf_bist_fail_4(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_drf_bist_fail_3(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_drf_bist_fail_2(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_drf_bist_fail_1(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_memory_bank_10_drf_bist_fail_0(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_get_memory_bank_10_drf_bist_fail_7(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_get_memory_bank_10_drf_bist_fail_6(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_get_memory_bank_10_drf_bist_fail_5(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_get_memory_bank_10_drf_bist_fail_4(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_get_memory_bank_10_drf_bist_fail_3(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_get_memory_bank_10_drf_bist_fail_2(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_get_memory_bank_10_drf_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_MEMORY_BANK_10_0_get_memory_bank_10_drf_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0                                  0x1816F4D8
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_reg_addr                          "0xB816F4D8"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_reg                               0xB816F4D8
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_inst_addr                         "0x007F"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_reg(data)                     (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_reg                           (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_drf_bist_fail_3_shift        (9)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_drf_bist_fail_2_shift        (8)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_drf_bist_fail_1_shift        (7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_drf_bist_fail_0_shift        (6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_2_drf_bist_fail_5_shift      (5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_2_drf_bist_fail_4_shift      (4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_2_drf_bist_fail_3_shift      (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_2_drf_bist_fail_2_shift      (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_2_drf_bist_fail_1_shift      (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_2_drf_bist_fail_0_shift      (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_drf_bist_fail_3_mask         (0x00000200)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_drf_bist_fail_2_mask         (0x00000100)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_drf_bist_fail_1_mask         (0x00000080)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_drf_bist_fail_0_mask         (0x00000040)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_2_drf_bist_fail_5_mask       (0x00000020)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_2_drf_bist_fail_4_mask       (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_2_drf_bist_fail_3_mask       (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_2_drf_bist_fail_2_mask       (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_2_drf_bist_fail_1_mask       (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_2_drf_bist_fail_0_mask       (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_drf_bist_fail_3(data)        (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_drf_bist_fail_2(data)        (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_drf_bist_fail_1(data)        (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_drf_bist_fail_0(data)        (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_2_drf_bist_fail_5(data)      (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_2_drf_bist_fail_4(data)      (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_2_drf_bist_fail_3(data)      (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_2_drf_bist_fail_2(data)      (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_2_drf_bist_fail_1(data)      (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_atsc_2_drf_bist_fail_0(data)      (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_get_atsc_drf_bist_fail_3(data)    ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_get_atsc_drf_bist_fail_2(data)    ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_get_atsc_drf_bist_fail_1(data)    ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_get_atsc_drf_bist_fail_0(data)    ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_get_atsc_2_drf_bist_fail_5(data)  ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_get_atsc_2_drf_bist_fail_4(data)  ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_get_atsc_2_drf_bist_fail_3(data)  ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_get_atsc_2_drf_bist_fail_2(data)  ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_get_atsc_2_drf_bist_fail_1(data)  ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_ATSC_2_0_get_atsc_2_drf_bist_fail_0(data)  (0x00000001&(data))

#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE                                         0x1816F4E0
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_reg_addr                                 "0xB816F4E0"
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_reg                                      0xB816F4E0
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_inst_addr                                "0x0080"
#define  set_DTV_DEMOD_MISC_ISDBT_BIST_MODE_reg(data)                            (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_MODE_reg)=data)
#define  get_DTV_DEMOD_MISC_ISDBT_BIST_MODE_reg                                  (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_MODE_reg))
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt_iter_2b_bist_mode_shift      (9)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt2b_bist_mode_shift            (8)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt_iter_2p_bist_mode_shift      (7)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt_iter_2_bist_mode_shift       (6)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt_iter_1_bist_mode_shift       (5)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt5_bist_mode_shift             (4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt4_bist_mode_shift             (3)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt3_bist_mode_shift             (2)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt2_bist_mode_shift             (1)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt1_bist_mode_shift             (0)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt_iter_2b_bist_mode_mask       (0x00000200)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt2b_bist_mode_mask             (0x00000100)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt_iter_2p_bist_mode_mask       (0x00000080)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt_iter_2_bist_mode_mask        (0x00000040)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt_iter_1_bist_mode_mask        (0x00000020)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt5_bist_mode_mask              (0x00000010)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt4_bist_mode_mask              (0x00000008)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt3_bist_mode_mask              (0x00000004)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt2_bist_mode_mask              (0x00000002)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt1_bist_mode_mask              (0x00000001)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt_iter_2b_bist_mode(data)      (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt2b_bist_mode(data)            (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt_iter_2p_bist_mode(data)      (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt_iter_2_bist_mode(data)       (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt_iter_1_bist_mode(data)       (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt5_bist_mode(data)             (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt4_bist_mode(data)             (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt3_bist_mode(data)             (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt2_bist_mode(data)             (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_mbist_isdbt1_bist_mode(data)             (0x00000001&(data))
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_get_mbist_isdbt_iter_2b_bist_mode(data)  ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_get_mbist_isdbt2b_bist_mode(data)        ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_get_mbist_isdbt_iter_2p_bist_mode(data)  ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_get_mbist_isdbt_iter_2_bist_mode(data)   ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_get_mbist_isdbt_iter_1_bist_mode(data)   ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_get_mbist_isdbt5_bist_mode(data)         ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_get_mbist_isdbt4_bist_mode(data)         ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_get_mbist_isdbt3_bist_mode(data)         ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_get_mbist_isdbt2_bist_mode(data)         ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_ISDBT_BIST_MODE_get_mbist_isdbt1_bist_mode(data)         (0x00000001&(data))

#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE                                     0x1816F4E4
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_reg_addr                             "0xB816F4E4"
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_reg                                  0xB816F4E4
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_inst_addr                            "0x0081"
#define  set_DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_reg(data)                        (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_reg)=data)
#define  get_DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_reg                              (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_reg))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt_iter_2b_drf_bist_mode_shift (9)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt2b_drf_bist_mode_shift    (8)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt_iter_2p_drf_bist_mode_shift (7)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt_iter_2_drf_bist_mode_shift (6)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt_iter_1_drf_bist_mode_shift (5)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt5_drf_bist_mode_shift     (4)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt4_drf_bist_mode_shift     (3)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt3_drf_bist_mode_shift     (2)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt2_drf_bist_mode_shift     (1)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt1_drf_bist_mode_shift     (0)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt_iter_2b_drf_bist_mode_mask (0x00000200)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt2b_drf_bist_mode_mask     (0x00000100)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt_iter_2p_drf_bist_mode_mask (0x00000080)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt_iter_2_drf_bist_mode_mask (0x00000040)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt_iter_1_drf_bist_mode_mask (0x00000020)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt5_drf_bist_mode_mask      (0x00000010)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt4_drf_bist_mode_mask      (0x00000008)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt3_drf_bist_mode_mask      (0x00000004)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt2_drf_bist_mode_mask      (0x00000002)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt1_drf_bist_mode_mask      (0x00000001)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt_iter_2b_drf_bist_mode(data) (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt2b_drf_bist_mode(data)    (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt_iter_2p_drf_bist_mode(data) (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt_iter_2_drf_bist_mode(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt_iter_1_drf_bist_mode(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt5_drf_bist_mode(data)     (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt4_drf_bist_mode(data)     (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt3_drf_bist_mode(data)     (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt2_drf_bist_mode(data)     (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_mbist_isdbt1_drf_bist_mode(data)     (0x00000001&(data))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_get_mbist_isdbt_iter_2b_drf_bist_mode(data) ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_get_mbist_isdbt2b_drf_bist_mode(data) ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_get_mbist_isdbt_iter_2p_drf_bist_mode(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_get_mbist_isdbt_iter_2_drf_bist_mode(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_get_mbist_isdbt_iter_1_drf_bist_mode(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_get_mbist_isdbt5_drf_bist_mode(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_get_mbist_isdbt4_drf_bist_mode(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_get_mbist_isdbt3_drf_bist_mode(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_get_mbist_isdbt2_drf_bist_mode(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_MODE_get_mbist_isdbt1_drf_bist_mode(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME                                   0x1816F4E8
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_reg_addr                           "0xB816F4E8"
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_reg                                0xB816F4E8
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_inst_addr                          "0x0082"
#define  set_DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_reg(data)                      (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_reg)=data)
#define  get_DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_reg                            (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_reg))
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt_iter_2b_drf_test_resume_shift (9)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt2b_drf_test_resume_shift (8)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt_iter_2p_drf_test_resume_shift (7)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt_iter_2_drf_test_resume_shift (6)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt_iter_1_drf_test_resume_shift (5)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt5_drf_test_resume_shift (4)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt4_drf_test_resume_shift (3)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt3_drf_test_resume_shift (2)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt2_drf_test_resume_shift (1)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt1_drf_test_resume_shift (0)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt_iter_2b_drf_test_resume_mask (0x00000200)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt2b_drf_test_resume_mask (0x00000100)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt_iter_2p_drf_test_resume_mask (0x00000080)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt_iter_2_drf_test_resume_mask (0x00000040)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt_iter_1_drf_test_resume_mask (0x00000020)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt5_drf_test_resume_mask  (0x00000010)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt4_drf_test_resume_mask  (0x00000008)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt3_drf_test_resume_mask  (0x00000004)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt2_drf_test_resume_mask  (0x00000002)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt1_drf_test_resume_mask  (0x00000001)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt_iter_2b_drf_test_resume(data) (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt2b_drf_test_resume(data) (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt_iter_2p_drf_test_resume(data) (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt_iter_2_drf_test_resume(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt_iter_1_drf_test_resume(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt5_drf_test_resume(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt4_drf_test_resume(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt3_drf_test_resume(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt2_drf_test_resume(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_mbist_isdbt1_drf_test_resume(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_get_mbist_isdbt_iter_2b_drf_test_resume(data) ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_get_mbist_isdbt2b_drf_test_resume(data) ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_get_mbist_isdbt_iter_2p_drf_test_resume(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_get_mbist_isdbt_iter_2_drf_test_resume(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_get_mbist_isdbt_iter_1_drf_test_resume(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_get_mbist_isdbt5_drf_test_resume(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_get_mbist_isdbt4_drf_test_resume(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_get_mbist_isdbt3_drf_test_resume(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_get_mbist_isdbt2_drf_test_resume(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_ISDBT_DRF_TEST_RESUME_get_mbist_isdbt1_drf_test_resume(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE                                   0x1816F4EC
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_reg_addr                           "0xB816F4EC"
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_reg                                0xB816F4EC
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_inst_addr                          "0x0083"
#define  set_DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_reg(data)                      (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_reg)=data)
#define  get_DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_reg                            (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_reg))
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt_iter_2b_drf_start_pause_shift (9)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt2b_drf_start_pause_shift (8)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt_iter_2p_drf_start_pause_shift (7)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt_iter_2_drf_start_pause_shift (6)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt_iter_1_drf_start_pause_shift (5)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt5_drf_start_pause_shift (4)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt4_drf_start_pause_shift (3)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt3_drf_start_pause_shift (2)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt2_drf_start_pause_shift (1)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt1_drf_start_pause_shift (0)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt_iter_2b_drf_start_pause_mask (0x00000200)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt2b_drf_start_pause_mask (0x00000100)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt_iter_2p_drf_start_pause_mask (0x00000080)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt_iter_2_drf_start_pause_mask (0x00000040)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt_iter_1_drf_start_pause_mask (0x00000020)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt5_drf_start_pause_mask  (0x00000010)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt4_drf_start_pause_mask  (0x00000008)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt3_drf_start_pause_mask  (0x00000004)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt2_drf_start_pause_mask  (0x00000002)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt1_drf_start_pause_mask  (0x00000001)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt_iter_2b_drf_start_pause(data) (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt2b_drf_start_pause(data) (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt_iter_2p_drf_start_pause(data) (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt_iter_2_drf_start_pause(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt_iter_1_drf_start_pause(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt5_drf_start_pause(data) (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt4_drf_start_pause(data) (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt3_drf_start_pause(data) (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt2_drf_start_pause(data) (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_mbist_isdbt1_drf_start_pause(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_get_mbist_isdbt_iter_2b_drf_start_pause(data) ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_get_mbist_isdbt2b_drf_start_pause(data) ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_get_mbist_isdbt_iter_2p_drf_start_pause(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_get_mbist_isdbt_iter_2_drf_start_pause(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_get_mbist_isdbt_iter_1_drf_start_pause(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_get_mbist_isdbt5_drf_start_pause(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_get_mbist_isdbt4_drf_start_pause(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_get_mbist_isdbt3_drf_start_pause(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_get_mbist_isdbt2_drf_start_pause(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_ISDBT_DRF_START_PAUSE_get_mbist_isdbt1_drf_start_pause(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE                                         0x1816F4F0
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_reg_addr                                 "0xB816F4F0"
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_reg                                      0xB816F4F0
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_inst_addr                                "0x0084"
#define  set_DTV_DEMOD_MISC_ISDBT_BIST_DONE_reg(data)                            (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_DONE_reg)=data)
#define  get_DTV_DEMOD_MISC_ISDBT_BIST_DONE_reg                                  (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_DONE_reg))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt_iter_2b_bist_done_shift      (9)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt2b_bist_done_shift            (8)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt_iter_2p_bist_done_shift      (7)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt_iter_2_bist_done_shift       (6)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt_iter_1_bist_done_shift       (5)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt5_bist_done_shift             (4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt4_bist_done_shift             (3)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt3_bist_done_shift             (2)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt2_bist_done_shift             (1)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt1_bist_done_shift             (0)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt_iter_2b_bist_done_mask       (0x00000200)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt2b_bist_done_mask             (0x00000100)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt_iter_2p_bist_done_mask       (0x00000080)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt_iter_2_bist_done_mask        (0x00000040)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt_iter_1_bist_done_mask        (0x00000020)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt5_bist_done_mask              (0x00000010)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt4_bist_done_mask              (0x00000008)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt3_bist_done_mask              (0x00000004)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt2_bist_done_mask              (0x00000002)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt1_bist_done_mask              (0x00000001)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt_iter_2b_bist_done(data)      (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt2b_bist_done(data)            (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt_iter_2p_bist_done(data)      (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt_iter_2_bist_done(data)       (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt_iter_1_bist_done(data)       (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt5_bist_done(data)             (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt4_bist_done(data)             (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt3_bist_done(data)             (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt2_bist_done(data)             (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_mbist_isdbt1_bist_done(data)             (0x00000001&(data))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_get_mbist_isdbt_iter_2b_bist_done(data)  ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_get_mbist_isdbt2b_bist_done(data)        ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_get_mbist_isdbt_iter_2p_bist_done(data)  ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_get_mbist_isdbt_iter_2_bist_done(data)   ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_get_mbist_isdbt_iter_1_bist_done(data)   ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_get_mbist_isdbt5_bist_done(data)         ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_get_mbist_isdbt4_bist_done(data)         ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_get_mbist_isdbt3_bist_done(data)         ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_get_mbist_isdbt2_bist_done(data)         ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DONE_get_mbist_isdbt1_bist_done(data)         (0x00000001&(data))

#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE                                     0x1816F4F4
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_reg_addr                             "0xB816F4F4"
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_reg                                  0xB816F4F4
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_inst_addr                            "0x0085"
#define  set_DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_reg(data)                        (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_reg)=data)
#define  get_DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_reg                              (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_reg))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt_iter_2b_drf_bist_done_shift (9)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt2b_drf_bist_done_shift    (8)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt_iter_2p_drf_bist_done_shift (7)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt_iter_2_drf_bist_done_shift (6)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt_iter_1_drf_bist_done_shift (5)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt5_drf_bist_done_shift     (4)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt4_drf_bist_done_shift     (3)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt3_drf_bist_done_shift     (2)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt2_drf_bist_done_shift     (1)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt1_drf_bist_done_shift     (0)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt_iter_2b_drf_bist_done_mask (0x00000200)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt2b_drf_bist_done_mask     (0x00000100)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt_iter_2p_drf_bist_done_mask (0x00000080)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt_iter_2_drf_bist_done_mask (0x00000040)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt_iter_1_drf_bist_done_mask (0x00000020)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt5_drf_bist_done_mask      (0x00000010)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt4_drf_bist_done_mask      (0x00000008)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt3_drf_bist_done_mask      (0x00000004)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt2_drf_bist_done_mask      (0x00000002)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt1_drf_bist_done_mask      (0x00000001)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt_iter_2b_drf_bist_done(data) (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt2b_drf_bist_done(data)    (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt_iter_2p_drf_bist_done(data) (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt_iter_2_drf_bist_done(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt_iter_1_drf_bist_done(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt5_drf_bist_done(data)     (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt4_drf_bist_done(data)     (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt3_drf_bist_done(data)     (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt2_drf_bist_done(data)     (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_mbist_isdbt1_drf_bist_done(data)     (0x00000001&(data))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_get_mbist_isdbt_iter_2b_drf_bist_done(data) ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_get_mbist_isdbt2b_drf_bist_done(data) ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_get_mbist_isdbt_iter_2p_drf_bist_done(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_get_mbist_isdbt_iter_2_drf_bist_done(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_get_mbist_isdbt_iter_1_drf_bist_done(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_get_mbist_isdbt5_drf_bist_done(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_get_mbist_isdbt4_drf_bist_done(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_get_mbist_isdbt3_drf_bist_done(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_get_mbist_isdbt2_drf_bist_done(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_DONE_get_mbist_isdbt1_drf_bist_done(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0                                        0x1816F4F8
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_reg_addr                                "0xB816F4F8"
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_reg                                     0xB816F4F8
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_inst_addr                               "0x0086"
#define  set_DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_reg(data)                           (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_reg)=data)
#define  get_DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_reg                                 (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_reg))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt_iter_2b_bist_fail_shift     (9)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt2b_bist_fail_shift           (8)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt_iter_2p_bist_fail_shift     (7)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt_iter_2_bist_fail_shift      (6)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt_iter_1_bist_fail_shift      (5)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt5_bist_fail_shift            (4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt4_bist_fail_shift            (3)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt3_bist_fail_shift            (2)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt2_bist_fail_shift            (1)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt1_bist_fail_shift            (0)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt_iter_2b_bist_fail_mask      (0x00000200)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt2b_bist_fail_mask            (0x00000100)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt_iter_2p_bist_fail_mask      (0x00000080)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt_iter_2_bist_fail_mask       (0x00000040)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt_iter_1_bist_fail_mask       (0x00000020)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt5_bist_fail_mask             (0x00000010)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt4_bist_fail_mask             (0x00000008)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt3_bist_fail_mask             (0x00000004)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt2_bist_fail_mask             (0x00000002)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt1_bist_fail_mask             (0x00000001)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt_iter_2b_bist_fail(data)     (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt2b_bist_fail(data)           (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt_iter_2p_bist_fail(data)     (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt_iter_2_bist_fail(data)      (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt_iter_1_bist_fail(data)      (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt5_bist_fail(data)            (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt4_bist_fail(data)            (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt3_bist_fail(data)            (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt2_bist_fail(data)            (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_mbist_isdbt1_bist_fail(data)            (0x00000001&(data))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_get_mbist_isdbt_iter_2b_bist_fail(data) ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_get_mbist_isdbt2b_bist_fail(data)       ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_get_mbist_isdbt_iter_2p_bist_fail(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_get_mbist_isdbt_iter_2_bist_fail(data)  ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_get_mbist_isdbt_iter_1_bist_fail(data)  ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_get_mbist_isdbt5_bist_fail(data)        ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_get_mbist_isdbt4_bist_fail(data)        ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_get_mbist_isdbt3_bist_fail(data)        ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_get_mbist_isdbt2_bist_fail(data)        ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL0_get_mbist_isdbt1_bist_fail(data)        (0x00000001&(data))

#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1                                        0x1816F4FC
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_reg_addr                                "0xB816F4FC"
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_reg                                     0xB816F4FC
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_inst_addr                               "0x0087"
#define  set_DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_reg(data)                           (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_reg)=data)
#define  get_DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_reg                                 (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_reg))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_2p_bist_fail_1_shift   (23)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_2p_bist_fail_0_shift   (22)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_2b_bist_fail_1_shift   (21)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_2b_bist_fail_0_shift   (20)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_2_bist_fail_1_shift    (19)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_2_bist_fail_0_shift    (18)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_1_bist_fail_3_shift    (17)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_1_bist_fail_2_shift    (16)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_1_bist_fail_1_shift    (15)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_1_bist_fail_0_shift    (14)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt5_bist_fail_5_shift          (13)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt5_bist_fail_4_shift          (12)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt5_bist_fail_3_shift          (11)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt5_bist_fail_2_shift          (10)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt5_bist_fail_1_shift          (9)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt5_bist_fail_0_shift          (8)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt4_bist_fail_1_shift          (7)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt4_bist_fail_0_shift          (6)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt3_bist_fail_1_shift          (5)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt3_bist_fail_0_shift          (4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt1_bist_fail_1_shift          (1)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt1_bist_fail_0_shift          (0)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_2p_bist_fail_1_mask    (0x00800000)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_2p_bist_fail_0_mask    (0x00400000)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_2b_bist_fail_1_mask    (0x00200000)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_2b_bist_fail_0_mask    (0x00100000)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_2_bist_fail_1_mask     (0x00080000)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_2_bist_fail_0_mask     (0x00040000)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_1_bist_fail_3_mask     (0x00020000)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_1_bist_fail_2_mask     (0x00010000)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_1_bist_fail_1_mask     (0x00008000)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_1_bist_fail_0_mask     (0x00004000)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt5_bist_fail_5_mask           (0x00002000)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt5_bist_fail_4_mask           (0x00001000)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt5_bist_fail_3_mask           (0x00000800)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt5_bist_fail_2_mask           (0x00000400)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt5_bist_fail_1_mask           (0x00000200)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt5_bist_fail_0_mask           (0x00000100)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt4_bist_fail_1_mask           (0x00000080)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt4_bist_fail_0_mask           (0x00000040)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt3_bist_fail_1_mask           (0x00000020)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt3_bist_fail_0_mask           (0x00000010)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt1_bist_fail_1_mask           (0x00000002)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt1_bist_fail_0_mask           (0x00000001)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_2p_bist_fail_1(data)   (0x00800000&((data)<<23))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_2p_bist_fail_0(data)   (0x00400000&((data)<<22))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_2b_bist_fail_1(data)   (0x00200000&((data)<<21))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_2b_bist_fail_0(data)   (0x00100000&((data)<<20))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_2_bist_fail_1(data)    (0x00080000&((data)<<19))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_2_bist_fail_0(data)    (0x00040000&((data)<<18))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_1_bist_fail_3(data)    (0x00020000&((data)<<17))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_1_bist_fail_2(data)    (0x00010000&((data)<<16))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_1_bist_fail_1(data)    (0x00008000&((data)<<15))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt_iter_1_bist_fail_0(data)    (0x00004000&((data)<<14))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt5_bist_fail_5(data)          (0x00002000&((data)<<13))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt5_bist_fail_4(data)          (0x00001000&((data)<<12))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt5_bist_fail_3(data)          (0x00000800&((data)<<11))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt5_bist_fail_2(data)          (0x00000400&((data)<<10))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt5_bist_fail_1(data)          (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt5_bist_fail_0(data)          (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt4_bist_fail_1(data)          (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt4_bist_fail_0(data)          (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt3_bist_fail_1(data)          (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt3_bist_fail_0(data)          (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt1_bist_fail_1(data)          (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_mbist_isdbt1_bist_fail_0(data)          (0x00000001&(data))
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_get_mbist_isdbt_iter_2p_bist_fail_1(data) ((0x00800000&(data))>>23)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_get_mbist_isdbt_iter_2p_bist_fail_0(data) ((0x00400000&(data))>>22)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_get_mbist_isdbt_iter_2b_bist_fail_1(data) ((0x00200000&(data))>>21)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_get_mbist_isdbt_iter_2b_bist_fail_0(data) ((0x00100000&(data))>>20)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_get_mbist_isdbt_iter_2_bist_fail_1(data) ((0x00080000&(data))>>19)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_get_mbist_isdbt_iter_2_bist_fail_0(data) ((0x00040000&(data))>>18)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_get_mbist_isdbt_iter_1_bist_fail_3(data) ((0x00020000&(data))>>17)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_get_mbist_isdbt_iter_1_bist_fail_2(data) ((0x00010000&(data))>>16)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_get_mbist_isdbt_iter_1_bist_fail_1(data) ((0x00008000&(data))>>15)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_get_mbist_isdbt_iter_1_bist_fail_0(data) ((0x00004000&(data))>>14)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_get_mbist_isdbt5_bist_fail_5(data)      ((0x00002000&(data))>>13)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_get_mbist_isdbt5_bist_fail_4(data)      ((0x00001000&(data))>>12)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_get_mbist_isdbt5_bist_fail_3(data)      ((0x00000800&(data))>>11)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_get_mbist_isdbt5_bist_fail_2(data)      ((0x00000400&(data))>>10)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_get_mbist_isdbt5_bist_fail_1(data)      ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_get_mbist_isdbt5_bist_fail_0(data)      ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_get_mbist_isdbt4_bist_fail_1(data)      ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_get_mbist_isdbt4_bist_fail_0(data)      ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_get_mbist_isdbt3_bist_fail_1(data)      ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_get_mbist_isdbt3_bist_fail_0(data)      ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_get_mbist_isdbt1_bist_fail_1(data)      ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_ISDBT_BIST_FAIL1_get_mbist_isdbt1_bist_fail_0(data)      (0x00000001&(data))

#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0                                    0x1816F504
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_reg_addr                            "0xB816F504"
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_reg                                 0xB816F504
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_inst_addr                           "0x0088"
#define  set_DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_reg(data)                       (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_reg)=data)
#define  get_DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_reg                             (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_reg))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt_iter_2b_drf_bist_fail_shift (9)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt2b_drf_bist_fail_shift   (8)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt_iter_2p_drf_bist_fail_shift (7)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt_iter_2_drf_bist_fail_shift (6)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt_iter_1_drf_bist_fail_shift (5)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt5_drf_bist_fail_shift    (4)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt4_drf_bist_fail_shift    (3)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt3_drf_bist_fail_shift    (2)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt2_drf_bist_fail_shift    (1)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt1_drf_bist_fail_shift    (0)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt_iter_2b_drf_bist_fail_mask (0x00000200)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt2b_drf_bist_fail_mask    (0x00000100)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt_iter_2p_drf_bist_fail_mask (0x00000080)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt_iter_2_drf_bist_fail_mask (0x00000040)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt_iter_1_drf_bist_fail_mask (0x00000020)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt5_drf_bist_fail_mask     (0x00000010)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt4_drf_bist_fail_mask     (0x00000008)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt3_drf_bist_fail_mask     (0x00000004)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt2_drf_bist_fail_mask     (0x00000002)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt1_drf_bist_fail_mask     (0x00000001)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt_iter_2b_drf_bist_fail(data) (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt2b_drf_bist_fail(data)   (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt_iter_2p_drf_bist_fail(data) (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt_iter_2_drf_bist_fail(data) (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt_iter_1_drf_bist_fail(data) (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt5_drf_bist_fail(data)    (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt4_drf_bist_fail(data)    (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt3_drf_bist_fail(data)    (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt2_drf_bist_fail(data)    (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_mbist_isdbt1_drf_bist_fail(data)    (0x00000001&(data))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_get_mbist_isdbt_iter_2b_drf_bist_fail(data) ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_get_mbist_isdbt2b_drf_bist_fail(data) ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_get_mbist_isdbt_iter_2p_drf_bist_fail(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_get_mbist_isdbt_iter_2_drf_bist_fail(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_get_mbist_isdbt_iter_1_drf_bist_fail(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_get_mbist_isdbt5_drf_bist_fail(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_get_mbist_isdbt4_drf_bist_fail(data) ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_get_mbist_isdbt3_drf_bist_fail(data) ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_get_mbist_isdbt2_drf_bist_fail(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL0_get_mbist_isdbt1_drf_bist_fail(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1                                    0x1816F508
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_reg_addr                            "0xB816F508"
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_reg                                 0xB816F508
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_inst_addr                           "0x0089"
#define  set_DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_reg(data)                       (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_reg)=data)
#define  get_DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_reg                             (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_reg))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_2p_drf_bist_fail_1_shift (23)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_2p_drf_bist_fail_0_shift (22)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_2b_drf_bist_fail_1_shift (21)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_2b_drf_bist_fail_0_shift (20)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_2_drf_bist_fail_1_shift (19)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_2_drf_bist_fail_0_shift (18)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_1_drf_bist_fail_3_shift (17)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_1_drf_bist_fail_2_shift (16)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_1_drf_bist_fail_1_shift (15)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_1_drf_bist_fail_0_shift (14)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt5_drf_bist_fail_5_shift  (13)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt5_drf_bist_fail_4_shift  (12)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt5_drf_bist_fail_3_shift  (11)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt5_drf_bist_fail_2_shift  (10)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt5_drf_bist_fail_1_shift  (9)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt5_drf_bist_fail_0_shift  (8)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt4_drf_bist_fail_1_shift  (7)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt4_drf_bist_fail_0_shift  (6)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt3_drf_bist_fail_1_shift  (5)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt3_drf_bist_fail_0_shift  (4)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt1_drf_bist_fail_1_shift  (1)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt1_drf_bist_fail_0_shift  (0)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_2p_drf_bist_fail_1_mask (0x00800000)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_2p_drf_bist_fail_0_mask (0x00400000)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_2b_drf_bist_fail_1_mask (0x00200000)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_2b_drf_bist_fail_0_mask (0x00100000)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_2_drf_bist_fail_1_mask (0x00080000)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_2_drf_bist_fail_0_mask (0x00040000)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_1_drf_bist_fail_3_mask (0x00020000)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_1_drf_bist_fail_2_mask (0x00010000)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_1_drf_bist_fail_1_mask (0x00008000)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_1_drf_bist_fail_0_mask (0x00004000)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt5_drf_bist_fail_5_mask   (0x00002000)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt5_drf_bist_fail_4_mask   (0x00001000)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt5_drf_bist_fail_3_mask   (0x00000800)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt5_drf_bist_fail_2_mask   (0x00000400)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt5_drf_bist_fail_1_mask   (0x00000200)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt5_drf_bist_fail_0_mask   (0x00000100)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt4_drf_bist_fail_1_mask   (0x00000080)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt4_drf_bist_fail_0_mask   (0x00000040)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt3_drf_bist_fail_1_mask   (0x00000020)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt3_drf_bist_fail_0_mask   (0x00000010)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt1_drf_bist_fail_1_mask   (0x00000002)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt1_drf_bist_fail_0_mask   (0x00000001)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_2p_drf_bist_fail_1(data) (0x00800000&((data)<<23))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_2p_drf_bist_fail_0(data) (0x00400000&((data)<<22))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_2b_drf_bist_fail_1(data) (0x00200000&((data)<<21))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_2b_drf_bist_fail_0(data) (0x00100000&((data)<<20))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_2_drf_bist_fail_1(data) (0x00080000&((data)<<19))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_2_drf_bist_fail_0(data) (0x00040000&((data)<<18))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_1_drf_bist_fail_3(data) (0x00020000&((data)<<17))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_1_drf_bist_fail_2(data) (0x00010000&((data)<<16))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_1_drf_bist_fail_1(data) (0x00008000&((data)<<15))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt_iter_1_drf_bist_fail_0(data) (0x00004000&((data)<<14))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt5_drf_bist_fail_5(data)  (0x00002000&((data)<<13))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt5_drf_bist_fail_4(data)  (0x00001000&((data)<<12))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt5_drf_bist_fail_3(data)  (0x00000800&((data)<<11))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt5_drf_bist_fail_2(data)  (0x00000400&((data)<<10))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt5_drf_bist_fail_1(data)  (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt5_drf_bist_fail_0(data)  (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt4_drf_bist_fail_1(data)  (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt4_drf_bist_fail_0(data)  (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt3_drf_bist_fail_1(data)  (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt3_drf_bist_fail_0(data)  (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt1_drf_bist_fail_1(data)  (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_mbist_isdbt1_drf_bist_fail_0(data)  (0x00000001&(data))
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_get_mbist_isdbt_iter_2p_drf_bist_fail_1(data) ((0x00800000&(data))>>23)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_get_mbist_isdbt_iter_2p_drf_bist_fail_0(data) ((0x00400000&(data))>>22)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_get_mbist_isdbt_iter_2b_drf_bist_fail_1(data) ((0x00200000&(data))>>21)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_get_mbist_isdbt_iter_2b_drf_bist_fail_0(data) ((0x00100000&(data))>>20)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_get_mbist_isdbt_iter_2_drf_bist_fail_1(data) ((0x00080000&(data))>>19)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_get_mbist_isdbt_iter_2_drf_bist_fail_0(data) ((0x00040000&(data))>>18)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_get_mbist_isdbt_iter_1_drf_bist_fail_3(data) ((0x00020000&(data))>>17)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_get_mbist_isdbt_iter_1_drf_bist_fail_2(data) ((0x00010000&(data))>>16)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_get_mbist_isdbt_iter_1_drf_bist_fail_1(data) ((0x00008000&(data))>>15)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_get_mbist_isdbt_iter_1_drf_bist_fail_0(data) ((0x00004000&(data))>>14)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_get_mbist_isdbt5_drf_bist_fail_5(data) ((0x00002000&(data))>>13)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_get_mbist_isdbt5_drf_bist_fail_4(data) ((0x00001000&(data))>>12)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_get_mbist_isdbt5_drf_bist_fail_3(data) ((0x00000800&(data))>>11)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_get_mbist_isdbt5_drf_bist_fail_2(data) ((0x00000400&(data))>>10)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_get_mbist_isdbt5_drf_bist_fail_1(data) ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_get_mbist_isdbt5_drf_bist_fail_0(data) ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_get_mbist_isdbt4_drf_bist_fail_1(data) ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_get_mbist_isdbt4_drf_bist_fail_0(data) ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_get_mbist_isdbt3_drf_bist_fail_1(data) ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_get_mbist_isdbt3_drf_bist_fail_0(data) ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_get_mbist_isdbt1_drf_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_ISDBT_DRF_BIST_FAIL1_get_mbist_isdbt1_drf_bist_fail_0(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_ISDBT_DVSE0                                             0x1816F510
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_reg_addr                                     "0xB816F510"
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_reg                                          0xB816F510
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_inst_addr                                    "0x008A"
#define  set_DTV_DEMOD_MISC_ISDBT_DVSE0_reg(data)                                (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_DVSE0_reg)=data)
#define  get_DTV_DEMOD_MISC_ISDBT_DVSE0_reg                                      (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_DVSE0_reg))
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_mbist_isdbt5_dvse_1_shift                    (7)
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_mbist_isdbt5_dvse_0_shift                    (6)
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_mbist_isdbt4_dvse_shift                      (5)
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_mbist_isdbt3_dvse_shift                      (4)
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_mbist_isdbt2_dvse_1_shift                    (3)
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_mbist_isdbt2_dvse_0_shift                    (2)
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_mbist_isdbt1_dvse_1_shift                    (1)
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_mbist_isdbt1_dvse_0_shift                    (0)
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_mbist_isdbt5_dvse_1_mask                     (0x00000080)
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_mbist_isdbt5_dvse_0_mask                     (0x00000040)
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_mbist_isdbt4_dvse_mask                       (0x00000020)
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_mbist_isdbt3_dvse_mask                       (0x00000010)
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_mbist_isdbt2_dvse_1_mask                     (0x00000008)
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_mbist_isdbt2_dvse_0_mask                     (0x00000004)
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_mbist_isdbt1_dvse_1_mask                     (0x00000002)
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_mbist_isdbt1_dvse_0_mask                     (0x00000001)
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_mbist_isdbt5_dvse_1(data)                    (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_mbist_isdbt5_dvse_0(data)                    (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_mbist_isdbt4_dvse(data)                      (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_mbist_isdbt3_dvse(data)                      (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_mbist_isdbt2_dvse_1(data)                    (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_mbist_isdbt2_dvse_0(data)                    (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_mbist_isdbt1_dvse_1(data)                    (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_mbist_isdbt1_dvse_0(data)                    (0x00000001&(data))
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_get_mbist_isdbt5_dvse_1(data)                ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_get_mbist_isdbt5_dvse_0(data)                ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_get_mbist_isdbt4_dvse(data)                  ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_get_mbist_isdbt3_dvse(data)                  ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_get_mbist_isdbt2_dvse_1(data)                ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_get_mbist_isdbt2_dvse_0(data)                ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_get_mbist_isdbt1_dvse_1(data)                ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_ISDBT_DVSE0_get_mbist_isdbt1_dvse_0(data)                (0x00000001&(data))

#define  DTV_DEMOD_MISC_ISDBT_DVSE1                                             0x1816F514
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_reg_addr                                     "0xB816F514"
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_reg                                          0xB816F514
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_inst_addr                                    "0x008B"
#define  set_DTV_DEMOD_MISC_ISDBT_DVSE1_reg(data)                                (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_DVSE1_reg)=data)
#define  get_DTV_DEMOD_MISC_ISDBT_DVSE1_reg                                      (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_DVSE1_reg))
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_mbist_isdbt_iter_2_dvse_2_shift              (7)
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_mbist_isdbt_iter_2_dvse_1_shift              (6)
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_mbist_isdbt_iter_2_dvse_0_shift              (5)
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_mbist_isdbt_iter_1_dvse_3_shift              (4)
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_mbist_isdbt_iter_1_dvse_2_shift              (3)
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_mbist_isdbt_iter_1_dvse_1_shift              (2)
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_mbist_isdbt_iter_1_dvse_0_shift              (1)
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_mbist_isdbt5_dvse_2_shift                    (0)
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_mbist_isdbt_iter_2_dvse_2_mask               (0x00000080)
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_mbist_isdbt_iter_2_dvse_1_mask               (0x00000040)
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_mbist_isdbt_iter_2_dvse_0_mask               (0x00000020)
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_mbist_isdbt_iter_1_dvse_3_mask               (0x00000010)
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_mbist_isdbt_iter_1_dvse_2_mask               (0x00000008)
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_mbist_isdbt_iter_1_dvse_1_mask               (0x00000004)
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_mbist_isdbt_iter_1_dvse_0_mask               (0x00000002)
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_mbist_isdbt5_dvse_2_mask                     (0x00000001)
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_mbist_isdbt_iter_2_dvse_2(data)              (0x00000080&((data)<<7))
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_mbist_isdbt_iter_2_dvse_1(data)              (0x00000040&((data)<<6))
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_mbist_isdbt_iter_2_dvse_0(data)              (0x00000020&((data)<<5))
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_mbist_isdbt_iter_1_dvse_3(data)              (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_mbist_isdbt_iter_1_dvse_2(data)              (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_mbist_isdbt_iter_1_dvse_1(data)              (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_mbist_isdbt_iter_1_dvse_0(data)              (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_mbist_isdbt5_dvse_2(data)                    (0x00000001&(data))
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_get_mbist_isdbt_iter_2_dvse_2(data)          ((0x00000080&(data))>>7)
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_get_mbist_isdbt_iter_2_dvse_1(data)          ((0x00000040&(data))>>6)
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_get_mbist_isdbt_iter_2_dvse_0(data)          ((0x00000020&(data))>>5)
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_get_mbist_isdbt_iter_1_dvse_3(data)          ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_get_mbist_isdbt_iter_1_dvse_2(data)          ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_get_mbist_isdbt_iter_1_dvse_1(data)          ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_get_mbist_isdbt_iter_1_dvse_0(data)          ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_ISDBT_DVSE1_get_mbist_isdbt5_dvse_2(data)                (0x00000001&(data))

#define  DTV_DEMOD_MISC_ISDBT_BIST_DVSE2                                        0x1816F518
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVSE2_reg_addr                                "0xB816F518"
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVSE2_reg                                     0xB816F518
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVSE2_inst_addr                               "0x008C"
#define  set_DTV_DEMOD_MISC_ISDBT_BIST_DVSE2_reg(data)                           (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_DVSE2_reg)=data)
#define  get_DTV_DEMOD_MISC_ISDBT_BIST_DVSE2_reg                                 (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_DVSE2_reg))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVSE2_mbist_isdbt_iter_2p_dvse_shift          (1)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVSE2_mbist_isdbt_iter_2_dvse_3_shift         (0)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVSE2_mbist_isdbt_iter_2p_dvse_mask           (0x00000002)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVSE2_mbist_isdbt_iter_2_dvse_3_mask          (0x00000001)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVSE2_mbist_isdbt_iter_2p_dvse(data)          (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVSE2_mbist_isdbt_iter_2_dvse_3(data)         (0x00000001&(data))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVSE2_get_mbist_isdbt_iter_2p_dvse(data)      ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVSE2_get_mbist_isdbt_iter_2_dvse_3(data)     (0x00000001&(data))

#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS0                                         0x1816F51C
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS0_reg_addr                                 "0xB816F51C"
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS0_reg                                      0xB816F51C
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS0_inst_addr                                "0x008D"
#define  set_DTV_DEMOD_MISC_ISDBT_BIST_DVS0_reg(data)                            (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_DVS0_reg)=data)
#define  get_DTV_DEMOD_MISC_ISDBT_BIST_DVS0_reg                                  (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_DVS0_reg))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS0_mbist_isdbt1_dvs_1_shift                 (4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS0_mbist_isdbt1_dvs_0_shift                 (0)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS0_mbist_isdbt1_dvs_1_mask                  (0x000000F0)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS0_mbist_isdbt1_dvs_0_mask                  (0x0000000F)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS0_mbist_isdbt1_dvs_1(data)                 (0x000000F0&((data)<<4))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS0_mbist_isdbt1_dvs_0(data)                 (0x0000000F&(data))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS0_get_mbist_isdbt1_dvs_1(data)             ((0x000000F0&(data))>>4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS0_get_mbist_isdbt1_dvs_0(data)             (0x0000000F&(data))

#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS1                                         0x1816F520
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS1_reg_addr                                 "0xB816F520"
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS1_reg                                      0xB816F520
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS1_inst_addr                                "0x008E"
#define  set_DTV_DEMOD_MISC_ISDBT_BIST_DVS1_reg(data)                            (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_DVS1_reg)=data)
#define  get_DTV_DEMOD_MISC_ISDBT_BIST_DVS1_reg                                  (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_DVS1_reg))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS1_mbist_isdbt2_dvs_1_shift                 (4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS1_mbist_isdbt2_dvs_0_shift                 (0)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS1_mbist_isdbt2_dvs_1_mask                  (0x000000F0)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS1_mbist_isdbt2_dvs_0_mask                  (0x0000000F)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS1_mbist_isdbt2_dvs_1(data)                 (0x000000F0&((data)<<4))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS1_mbist_isdbt2_dvs_0(data)                 (0x0000000F&(data))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS1_get_mbist_isdbt2_dvs_1(data)             ((0x000000F0&(data))>>4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS1_get_mbist_isdbt2_dvs_0(data)             (0x0000000F&(data))

#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS2                                         0x1816F524
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS2_reg_addr                                 "0xB816F524"
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS2_reg                                      0xB816F524
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS2_inst_addr                                "0x008F"
#define  set_DTV_DEMOD_MISC_ISDBT_BIST_DVS2_reg(data)                            (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_DVS2_reg)=data)
#define  get_DTV_DEMOD_MISC_ISDBT_BIST_DVS2_reg                                  (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_DVS2_reg))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS2_mbist_isdbt4_dvs_shift                   (4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS2_mbist_isdbt3_dvs_shift                   (0)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS2_mbist_isdbt4_dvs_mask                    (0x000000F0)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS2_mbist_isdbt3_dvs_mask                    (0x0000000F)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS2_mbist_isdbt4_dvs(data)                   (0x000000F0&((data)<<4))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS2_mbist_isdbt3_dvs(data)                   (0x0000000F&(data))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS2_get_mbist_isdbt4_dvs(data)               ((0x000000F0&(data))>>4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS2_get_mbist_isdbt3_dvs(data)               (0x0000000F&(data))

#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS3                                         0x1816F528
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS3_reg_addr                                 "0xB816F528"
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS3_reg                                      0xB816F528
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS3_inst_addr                                "0x0090"
#define  set_DTV_DEMOD_MISC_ISDBT_BIST_DVS3_reg(data)                            (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_DVS3_reg)=data)
#define  get_DTV_DEMOD_MISC_ISDBT_BIST_DVS3_reg                                  (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_DVS3_reg))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS3_mbist_isdbt5_dvs_1_shift                 (4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS3_mbist_isdbt5_dvs_0_shift                 (0)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS3_mbist_isdbt5_dvs_1_mask                  (0x000000F0)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS3_mbist_isdbt5_dvs_0_mask                  (0x0000000F)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS3_mbist_isdbt5_dvs_1(data)                 (0x000000F0&((data)<<4))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS3_mbist_isdbt5_dvs_0(data)                 (0x0000000F&(data))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS3_get_mbist_isdbt5_dvs_1(data)             ((0x000000F0&(data))>>4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS3_get_mbist_isdbt5_dvs_0(data)             (0x0000000F&(data))

#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS4                                         0x1816F52C
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS4_reg_addr                                 "0xB816F52C"
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS4_reg                                      0xB816F52C
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS4_inst_addr                                "0x0091"
#define  set_DTV_DEMOD_MISC_ISDBT_BIST_DVS4_reg(data)                            (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_DVS4_reg)=data)
#define  get_DTV_DEMOD_MISC_ISDBT_BIST_DVS4_reg                                  (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_DVS4_reg))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS4_mbist_isdbt_iter_1_dvs_0_shift           (4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS4_mbist_isdbt5_dvs_2_shift                 (0)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS4_mbist_isdbt_iter_1_dvs_0_mask            (0x000000F0)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS4_mbist_isdbt5_dvs_2_mask                  (0x0000000F)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS4_mbist_isdbt_iter_1_dvs_0(data)           (0x000000F0&((data)<<4))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS4_mbist_isdbt5_dvs_2(data)                 (0x0000000F&(data))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS4_get_mbist_isdbt_iter_1_dvs_0(data)       ((0x000000F0&(data))>>4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS4_get_mbist_isdbt5_dvs_2(data)             (0x0000000F&(data))

#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS5                                         0x1816F530
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS5_reg_addr                                 "0xB816F530"
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS5_reg                                      0xB816F530
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS5_inst_addr                                "0x0092"
#define  set_DTV_DEMOD_MISC_ISDBT_BIST_DVS5_reg(data)                            (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_DVS5_reg)=data)
#define  get_DTV_DEMOD_MISC_ISDBT_BIST_DVS5_reg                                  (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_DVS5_reg))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS5_mbist_isdbt_iter_1_dvs_2_shift           (4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS5_mbist_isdbt_iter_1_dvs_1_shift           (0)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS5_mbist_isdbt_iter_1_dvs_2_mask            (0x000000F0)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS5_mbist_isdbt_iter_1_dvs_1_mask            (0x0000000F)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS5_mbist_isdbt_iter_1_dvs_2(data)           (0x000000F0&((data)<<4))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS5_mbist_isdbt_iter_1_dvs_1(data)           (0x0000000F&(data))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS5_get_mbist_isdbt_iter_1_dvs_2(data)       ((0x000000F0&(data))>>4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS5_get_mbist_isdbt_iter_1_dvs_1(data)       (0x0000000F&(data))

#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS6                                         0x1816F534
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS6_reg_addr                                 "0xB816F534"
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS6_reg                                      0xB816F534
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS6_inst_addr                                "0x0093"
#define  set_DTV_DEMOD_MISC_ISDBT_BIST_DVS6_reg(data)                            (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_DVS6_reg)=data)
#define  get_DTV_DEMOD_MISC_ISDBT_BIST_DVS6_reg                                  (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_DVS6_reg))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS6_mbist_isdbt_iter_2_dvs_0_shift           (4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS6_mbist_isdbt_iter_1_dvs_3_shift           (0)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS6_mbist_isdbt_iter_2_dvs_0_mask            (0x000000F0)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS6_mbist_isdbt_iter_1_dvs_3_mask            (0x0000000F)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS6_mbist_isdbt_iter_2_dvs_0(data)           (0x000000F0&((data)<<4))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS6_mbist_isdbt_iter_1_dvs_3(data)           (0x0000000F&(data))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS6_get_mbist_isdbt_iter_2_dvs_0(data)       ((0x000000F0&(data))>>4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS6_get_mbist_isdbt_iter_1_dvs_3(data)       (0x0000000F&(data))

#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS7                                         0x1816F538
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS7_reg_addr                                 "0xB816F538"
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS7_reg                                      0xB816F538
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS7_inst_addr                                "0x0094"
#define  set_DTV_DEMOD_MISC_ISDBT_BIST_DVS7_reg(data)                            (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_DVS7_reg)=data)
#define  get_DTV_DEMOD_MISC_ISDBT_BIST_DVS7_reg                                  (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_DVS7_reg))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS7_mbist_isdbt_iter_2_dvs_2_shift           (4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS7_mbist_isdbt_iter_2_dvs_1_shift           (0)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS7_mbist_isdbt_iter_2_dvs_2_mask            (0x000000F0)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS7_mbist_isdbt_iter_2_dvs_1_mask            (0x0000000F)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS7_mbist_isdbt_iter_2_dvs_2(data)           (0x000000F0&((data)<<4))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS7_mbist_isdbt_iter_2_dvs_1(data)           (0x0000000F&(data))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS7_get_mbist_isdbt_iter_2_dvs_2(data)       ((0x000000F0&(data))>>4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS7_get_mbist_isdbt_iter_2_dvs_1(data)       (0x0000000F&(data))

#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS8                                         0x1816F53C
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS8_reg_addr                                 "0xB816F53C"
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS8_reg                                      0xB816F53C
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS8_inst_addr                                "0x0095"
#define  set_DTV_DEMOD_MISC_ISDBT_BIST_DVS8_reg(data)                            (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_DVS8_reg)=data)
#define  get_DTV_DEMOD_MISC_ISDBT_BIST_DVS8_reg                                  (*((volatile unsigned int*)DTV_DEMOD_MISC_ISDBT_BIST_DVS8_reg))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS8_mbist_isdbt_iter_2p_dvs_shift            (4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS8_mbist_isdbt_iter_2_dvs_3_shift           (0)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS8_mbist_isdbt_iter_2p_dvs_mask             (0x000000F0)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS8_mbist_isdbt_iter_2_dvs_3_mask            (0x0000000F)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS8_mbist_isdbt_iter_2p_dvs(data)            (0x000000F0&((data)<<4))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS8_mbist_isdbt_iter_2_dvs_3(data)           (0x0000000F&(data))
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS8_get_mbist_isdbt_iter_2p_dvs(data)        ((0x000000F0&(data))>>4)
#define  DTV_DEMOD_MISC_ISDBT_BIST_DVS8_get_mbist_isdbt_iter_2_dvs_3(data)       (0x0000000F&(data))

#define  DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_1                                     0x1816F540
#define  DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_1_reg_addr                             "0xB816F540"
#define  DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_1_reg                                  0xB816F540
#define  DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_1_inst_addr                            "0x0096"
#define  set_DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_1_reg(data)                        (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_1_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_1_reg                              (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_1_reg))
#define  DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_1_atb_fft_read_enable_shift            (31)
#define  DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_1_atb_fft_read_start_addr_shift        (0)
#define  DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_1_atb_fft_read_enable_mask             (0x80000000)
#define  DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_1_atb_fft_read_start_addr_mask         (0x00003FFF)
#define  DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_1_atb_fft_read_enable(data)            (0x80000000&((data)<<31))
#define  DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_1_atb_fft_read_start_addr(data)        (0x00003FFF&(data))
#define  DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_1_get_atb_fft_read_enable(data)        ((0x80000000&(data))>>31)
#define  DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_1_get_atb_fft_read_start_addr(data)    (0x00003FFF&(data))

#define  DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_2                                     0x1816F544
#define  DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_2_reg_addr                             "0xB816F544"
#define  DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_2_reg                                  0xB816F544
#define  DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_2_inst_addr                            "0x0097"
#define  set_DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_2_reg(data)                        (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_2_reg)=data)
#define  get_DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_2_reg                              (*((volatile unsigned int*)DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_2_reg))
#define  DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_2_atb_fft_read_data_shift              (0)
#define  DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_2_atb_fft_read_data_mask               (0x003FFFFF)
#define  DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_2_atb_fft_read_data(data)              (0x003FFFFF&(data))
#define  DTV_DEMOD_MISC_ATB_FFT_READ_FUNC_2_get_atb_fft_read_data(data)          (0x003FFFFF&(data))

#define  DTV_DEMOD_MISC_BIST_MODE_HDIC                                          0x1816F548
#define  DTV_DEMOD_MISC_BIST_MODE_HDIC_reg_addr                                  "0xB816F548"
#define  DTV_DEMOD_MISC_BIST_MODE_HDIC_reg                                       0xB816F548
#define  DTV_DEMOD_MISC_BIST_MODE_HDIC_inst_addr                                 "0x0098"
#define  set_DTV_DEMOD_MISC_BIST_MODE_HDIC_reg(data)                             (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_MODE_HDIC_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_MODE_HDIC_reg                                   (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_MODE_HDIC_reg))
#define  DTV_DEMOD_MISC_BIST_MODE_HDIC_hdic_2_bist_mode_shift                    (1)
#define  DTV_DEMOD_MISC_BIST_MODE_HDIC_hdic_bist_mode_shift                      (0)
#define  DTV_DEMOD_MISC_BIST_MODE_HDIC_hdic_2_bist_mode_mask                     (0x00000002)
#define  DTV_DEMOD_MISC_BIST_MODE_HDIC_hdic_bist_mode_mask                       (0x00000001)
#define  DTV_DEMOD_MISC_BIST_MODE_HDIC_hdic_2_bist_mode(data)                    (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_MODE_HDIC_hdic_bist_mode(data)                      (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_MODE_HDIC_get_hdic_2_bist_mode(data)                ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_MODE_HDIC_get_hdic_bist_mode(data)                  (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_MODE_HDIC                                      0x1816F54C
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_HDIC_reg_addr                              "0xB816F54C"
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_HDIC_reg                                   0xB816F54C
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_HDIC_inst_addr                             "0x0099"
#define  set_DTV_DEMOD_MISC_DRF_BIST_MODE_HDIC_reg(data)                         (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_MODE_HDIC_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_MODE_HDIC_reg                               (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_MODE_HDIC_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_HDIC_hdic_2_drf_bist_mode_shift            (1)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_HDIC_hdic_drf_bist_mode_shift              (0)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_HDIC_hdic_2_drf_bist_mode_mask             (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_HDIC_hdic_drf_bist_mode_mask               (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_HDIC_hdic_2_drf_bist_mode(data)            (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_HDIC_hdic_drf_bist_mode(data)              (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_HDIC_get_hdic_2_drf_bist_mode(data)        ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_MODE_HDIC_get_hdic_drf_bist_mode(data)          (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_HDIC                                    0x1816F550
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_HDIC_reg_addr                            "0xB816F550"
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_HDIC_reg                                 0xB816F550
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_HDIC_inst_addr                           "0x009A"
#define  set_DTV_DEMOD_MISC_DRF_TEST_RESUME_HDIC_reg(data)                       (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_TEST_RESUME_HDIC_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_TEST_RESUME_HDIC_reg                             (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_TEST_RESUME_HDIC_reg))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_HDIC_hdic_2_drf_test_resume_shift        (1)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_HDIC_hdic_drf_test_resume_shift          (0)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_HDIC_hdic_2_drf_test_resume_mask         (0x00000002)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_HDIC_hdic_drf_test_resume_mask           (0x00000001)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_HDIC_hdic_2_drf_test_resume(data)        (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_HDIC_hdic_drf_test_resume(data)          (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_HDIC_get_hdic_2_drf_test_resume(data)    ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_TEST_RESUME_HDIC_get_hdic_drf_test_resume(data)      (0x00000001&(data))

#define  DTV_DEMOD_MISC_DVSE_HDIC                                               0x1816F554
#define  DTV_DEMOD_MISC_DVSE_HDIC_reg_addr                                       "0xB816F554"
#define  DTV_DEMOD_MISC_DVSE_HDIC_reg                                            0xB816F554
#define  DTV_DEMOD_MISC_DVSE_HDIC_inst_addr                                      "0x009B"
#define  set_DTV_DEMOD_MISC_DVSE_HDIC_reg(data)                                  (*((volatile unsigned int*)DTV_DEMOD_MISC_DVSE_HDIC_reg)=data)
#define  get_DTV_DEMOD_MISC_DVSE_HDIC_reg                                        (*((volatile unsigned int*)DTV_DEMOD_MISC_DVSE_HDIC_reg))
#define  DTV_DEMOD_MISC_DVSE_HDIC_mbist_hdic_dvse_shift                          (4)
#define  DTV_DEMOD_MISC_DVSE_HDIC_mbist_hdic_dvs_shift                           (0)
#define  DTV_DEMOD_MISC_DVSE_HDIC_mbist_hdic_dvse_mask                           (0x00000010)
#define  DTV_DEMOD_MISC_DVSE_HDIC_mbist_hdic_dvs_mask                            (0x0000000F)
#define  DTV_DEMOD_MISC_DVSE_HDIC_mbist_hdic_dvse(data)                          (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DVSE_HDIC_mbist_hdic_dvs(data)                           (0x0000000F&(data))
#define  DTV_DEMOD_MISC_DVSE_HDIC_get_mbist_hdic_dvse(data)                      ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DVSE_HDIC_get_mbist_hdic_dvs(data)                       (0x0000000F&(data))

#define  DTV_DEMOD_MISC_LS_HDIC                                                 0x1816F558
#define  DTV_DEMOD_MISC_LS_HDIC_reg_addr                                         "0xB816F558"
#define  DTV_DEMOD_MISC_LS_HDIC_reg                                              0xB816F558
#define  DTV_DEMOD_MISC_LS_HDIC_inst_addr                                        "0x009C"
#define  set_DTV_DEMOD_MISC_LS_HDIC_reg(data)                                    (*((volatile unsigned int*)DTV_DEMOD_MISC_LS_HDIC_reg)=data)
#define  get_DTV_DEMOD_MISC_LS_HDIC_reg                                          (*((volatile unsigned int*)DTV_DEMOD_MISC_LS_HDIC_reg))
#define  DTV_DEMOD_MISC_LS_HDIC_mbist_hdic_ls_shift                              (0)
#define  DTV_DEMOD_MISC_LS_HDIC_mbist_hdic_ls_mask                               (0x00000001)
#define  DTV_DEMOD_MISC_LS_HDIC_mbist_hdic_ls(data)                              (0x00000001&(data))
#define  DTV_DEMOD_MISC_LS_HDIC_get_mbist_hdic_ls(data)                          (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_DONE_HDIC                                          0x1816F55C
#define  DTV_DEMOD_MISC_BIST_DONE_HDIC_reg_addr                                  "0xB816F55C"
#define  DTV_DEMOD_MISC_BIST_DONE_HDIC_reg                                       0xB816F55C
#define  DTV_DEMOD_MISC_BIST_DONE_HDIC_inst_addr                                 "0x009D"
#define  set_DTV_DEMOD_MISC_BIST_DONE_HDIC_reg(data)                             (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_DONE_HDIC_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_DONE_HDIC_reg                                   (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_DONE_HDIC_reg))
#define  DTV_DEMOD_MISC_BIST_DONE_HDIC_hdic_2_bist_done_shift                    (1)
#define  DTV_DEMOD_MISC_BIST_DONE_HDIC_hdic_bist_done_shift                      (0)
#define  DTV_DEMOD_MISC_BIST_DONE_HDIC_hdic_2_bist_done_mask                     (0x00000002)
#define  DTV_DEMOD_MISC_BIST_DONE_HDIC_hdic_bist_done_mask                       (0x00000001)
#define  DTV_DEMOD_MISC_BIST_DONE_HDIC_hdic_2_bist_done(data)                    (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_DONE_HDIC_hdic_bist_done(data)                      (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_DONE_HDIC_get_hdic_2_bist_done(data)                ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_DONE_HDIC_get_hdic_bist_done(data)                  (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_DONE_HDIC                                      0x1816F560
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_HDIC_reg_addr                              "0xB816F560"
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_HDIC_reg                                   0xB816F560
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_HDIC_inst_addr                             "0x009E"
#define  set_DTV_DEMOD_MISC_DRF_BIST_DONE_HDIC_reg(data)                         (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_DONE_HDIC_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_DONE_HDIC_reg                               (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_DONE_HDIC_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_HDIC_hdic_2_drf_bist_done_shift            (1)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_HDIC_hdic_drf_bist_done_shift              (0)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_HDIC_hdic_2_drf_bist_done_mask             (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_HDIC_hdic_drf_bist_done_mask               (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_HDIC_hdic_2_drf_bist_done(data)            (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_HDIC_hdic_drf_bist_done(data)              (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_HDIC_get_hdic_2_drf_bist_done(data)        ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_DONE_HDIC_get_hdic_drf_bist_done(data)          (0x00000001&(data))

#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC                                          0x1816F564
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_reg_addr                                  "0xB816F564"
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_reg                                       0xB816F564
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_inst_addr                                 "0x009F"
#define  set_DTV_DEMOD_MISC_BIST_FAIL_HDIC_reg(data)                             (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_HDIC_reg)=data)
#define  get_DTV_DEMOD_MISC_BIST_FAIL_HDIC_reg                                   (*((volatile unsigned int*)DTV_DEMOD_MISC_BIST_FAIL_HDIC_reg))
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_hdic_2_bist_fail_1_shift                  (10)
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_hdic_2_bist_fail_0_shift                  (9)
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_hdic_2_bist_fail_shift                    (8)
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_hdic_bist_fail_3_shift                    (4)
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_hdic_bist_fail_2_shift                    (3)
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_hdic_bist_fail_1_shift                    (2)
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_hdic_bist_fail_0_shift                    (1)
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_hdic_bist_fail_shift                      (0)
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_hdic_2_bist_fail_1_mask                   (0x00000400)
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_hdic_2_bist_fail_0_mask                   (0x00000200)
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_hdic_2_bist_fail_mask                     (0x00000100)
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_hdic_bist_fail_3_mask                     (0x00000010)
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_hdic_bist_fail_2_mask                     (0x00000008)
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_hdic_bist_fail_1_mask                     (0x00000004)
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_hdic_bist_fail_0_mask                     (0x00000002)
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_hdic_bist_fail_mask                       (0x00000001)
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_hdic_2_bist_fail_1(data)                  (0x00000400&((data)<<10))
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_hdic_2_bist_fail_0(data)                  (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_hdic_2_bist_fail(data)                    (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_hdic_bist_fail_3(data)                    (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_hdic_bist_fail_2(data)                    (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_hdic_bist_fail_1(data)                    (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_hdic_bist_fail_0(data)                    (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_hdic_bist_fail(data)                      (0x00000001&(data))
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_get_hdic_2_bist_fail_1(data)              ((0x00000400&(data))>>10)
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_get_hdic_2_bist_fail_0(data)              ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_get_hdic_2_bist_fail(data)                ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_get_hdic_bist_fail_3(data)                ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_get_hdic_bist_fail_2(data)                ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_get_hdic_bist_fail_1(data)                ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_get_hdic_bist_fail_0(data)                ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_BIST_FAIL_HDIC_get_hdic_bist_fail(data)                  (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC                                      0x1816F568
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_reg_addr                              "0xB816F568"
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_reg                                   0xB816F568
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_inst_addr                             "0x00A0"
#define  set_DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_reg(data)                         (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_reg                               (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_reg))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_hdic_2_drf_bist_fail_1_shift          (10)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_hdic_2_drf_bist_fail_0_shift          (9)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_hdic_2_drf_bist_fail_shift            (8)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_hdic_drf_bist_fail_3_shift            (4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_hdic_drf_bist_fail_2_shift            (3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_hdic_drf_bist_fail_1_shift            (2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_hdic_drf_bist_fail_0_shift            (1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_hdic_drf_bist_fail_shift              (0)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_hdic_2_drf_bist_fail_1_mask           (0x00000400)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_hdic_2_drf_bist_fail_0_mask           (0x00000200)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_hdic_2_drf_bist_fail_mask             (0x00000100)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_hdic_drf_bist_fail_3_mask             (0x00000010)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_hdic_drf_bist_fail_2_mask             (0x00000008)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_hdic_drf_bist_fail_1_mask             (0x00000004)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_hdic_drf_bist_fail_0_mask             (0x00000002)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_hdic_drf_bist_fail_mask               (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_hdic_2_drf_bist_fail_1(data)          (0x00000400&((data)<<10))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_hdic_2_drf_bist_fail_0(data)          (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_hdic_2_drf_bist_fail(data)            (0x00000100&((data)<<8))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_hdic_drf_bist_fail_3(data)            (0x00000010&((data)<<4))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_hdic_drf_bist_fail_2(data)            (0x00000008&((data)<<3))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_hdic_drf_bist_fail_1(data)            (0x00000004&((data)<<2))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_hdic_drf_bist_fail_0(data)            (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_hdic_drf_bist_fail(data)              (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_get_hdic_2_drf_bist_fail_1(data)      ((0x00000400&(data))>>10)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_get_hdic_2_drf_bist_fail_0(data)      ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_get_hdic_2_drf_bist_fail(data)        ((0x00000100&(data))>>8)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_get_hdic_drf_bist_fail_3(data)        ((0x00000010&(data))>>4)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_get_hdic_drf_bist_fail_2(data)        ((0x00000008&(data))>>3)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_get_hdic_drf_bist_fail_1(data)        ((0x00000004&(data))>>2)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_get_hdic_drf_bist_fail_0(data)        ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_BIST_FAIL_HDIC_get_hdic_drf_bist_fail(data)          (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_START_PAUSE_HDIC                                    0x1816F56C
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_HDIC_reg_addr                            "0xB816F56C"
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_HDIC_reg                                 0xB816F56C
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_HDIC_inst_addr                           "0x00A1"
#define  set_DTV_DEMOD_MISC_DRF_START_PAUSE_HDIC_reg(data)                       (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_START_PAUSE_HDIC_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_START_PAUSE_HDIC_reg                             (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_START_PAUSE_HDIC_reg))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_HDIC_hdic_2_drf_start_pause_shift        (1)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_HDIC_hdic_drf_start_pause_shift          (0)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_HDIC_hdic_2_drf_start_pause_mask         (0x00000002)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_HDIC_hdic_drf_start_pause_mask           (0x00000001)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_HDIC_hdic_2_drf_start_pause(data)        (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_HDIC_hdic_drf_start_pause(data)          (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_HDIC_get_hdic_2_drf_start_pause(data)    ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DRF_START_PAUSE_HDIC_get_hdic_drf_start_pause(data)      (0x00000001&(data))

#define  DTV_DEMOD_MISC_BISR_RSTN                                               0x1816F570
#define  DTV_DEMOD_MISC_BISR_RSTN_reg_addr                                       "0xB816F570"
#define  DTV_DEMOD_MISC_BISR_RSTN_reg                                            0xB816F570
#define  DTV_DEMOD_MISC_BISR_RSTN_inst_addr                                      "0x00A2"
#define  set_DTV_DEMOD_MISC_BISR_RSTN_reg(data)                                  (*((volatile unsigned int*)DTV_DEMOD_MISC_BISR_RSTN_reg)=data)
#define  get_DTV_DEMOD_MISC_BISR_RSTN_reg                                        (*((volatile unsigned int*)DTV_DEMOD_MISC_BISR_RSTN_reg))
#define  DTV_DEMOD_MISC_BISR_RSTN_bisr_rstn_memory_bank_07_2_shift               (0)
#define  DTV_DEMOD_MISC_BISR_RSTN_bisr_rstn_memory_bank_07_2_mask                (0x00000001)
#define  DTV_DEMOD_MISC_BISR_RSTN_bisr_rstn_memory_bank_07_2(data)               (0x00000001&(data))
#define  DTV_DEMOD_MISC_BISR_RSTN_get_bisr_rstn_memory_bank_07_2(data)           (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BISR_MODE                                           0x1816F574
#define  DTV_DEMOD_MISC_DRF_BISR_MODE_reg_addr                                   "0xB816F574"
#define  DTV_DEMOD_MISC_DRF_BISR_MODE_reg                                        0xB816F574
#define  DTV_DEMOD_MISC_DRF_BISR_MODE_inst_addr                                  "0x00A3"
#define  set_DTV_DEMOD_MISC_DRF_BISR_MODE_reg(data)                              (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BISR_MODE_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BISR_MODE_reg                                    (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BISR_MODE_reg))
#define  DTV_DEMOD_MISC_DRF_BISR_MODE_drf_bisr_mode_memory_bank_07_2_shift       (0)
#define  DTV_DEMOD_MISC_DRF_BISR_MODE_drf_bisr_mode_memory_bank_07_2_mask        (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BISR_MODE_drf_bisr_mode_memory_bank_07_2(data)       (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BISR_MODE_get_drf_bisr_mode_memory_bank_07_2(data)   (0x00000001&(data))

#define  DTV_DEMOD_MISC_DRF_BISR_TEST                                           0x1816F578
#define  DTV_DEMOD_MISC_DRF_BISR_TEST_reg_addr                                   "0xB816F578"
#define  DTV_DEMOD_MISC_DRF_BISR_TEST_reg                                        0xB816F578
#define  DTV_DEMOD_MISC_DRF_BISR_TEST_inst_addr                                  "0x00A4"
#define  set_DTV_DEMOD_MISC_DRF_BISR_TEST_reg(data)                              (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BISR_TEST_reg)=data)
#define  get_DTV_DEMOD_MISC_DRF_BISR_TEST_reg                                    (*((volatile unsigned int*)DTV_DEMOD_MISC_DRF_BISR_TEST_reg))
#define  DTV_DEMOD_MISC_DRF_BISR_TEST_drf_bisr_test_resume_memory_bank_07_2_shift (0)
#define  DTV_DEMOD_MISC_DRF_BISR_TEST_drf_bisr_test_resume_memory_bank_07_2_mask (0x00000001)
#define  DTV_DEMOD_MISC_DRF_BISR_TEST_drf_bisr_test_resume_memory_bank_07_2(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_DRF_BISR_TEST_get_drf_bisr_test_resume_memory_bank_07_2(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_BISR_SECOND_RUN                                         0x1816F57C
#define  DTV_DEMOD_MISC_BISR_SECOND_RUN_reg_addr                                 "0xB816F57C"
#define  DTV_DEMOD_MISC_BISR_SECOND_RUN_reg                                      0xB816F57C
#define  DTV_DEMOD_MISC_BISR_SECOND_RUN_inst_addr                                "0x00A5"
#define  set_DTV_DEMOD_MISC_BISR_SECOND_RUN_reg(data)                            (*((volatile unsigned int*)DTV_DEMOD_MISC_BISR_SECOND_RUN_reg)=data)
#define  get_DTV_DEMOD_MISC_BISR_SECOND_RUN_reg                                  (*((volatile unsigned int*)DTV_DEMOD_MISC_BISR_SECOND_RUN_reg))
#define  DTV_DEMOD_MISC_BISR_SECOND_RUN_second_run_en_memory_bank_07_2_shift     (0)
#define  DTV_DEMOD_MISC_BISR_SECOND_RUN_second_run_en_memory_bank_07_2_mask      (0x00000001)
#define  DTV_DEMOD_MISC_BISR_SECOND_RUN_second_run_en_memory_bank_07_2(data)     (0x00000001&(data))
#define  DTV_DEMOD_MISC_BISR_SECOND_RUN_get_second_run_en_memory_bank_07_2(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_BISR_HOLD_REMAP                                         0x1816F580
#define  DTV_DEMOD_MISC_BISR_HOLD_REMAP_reg_addr                                 "0xB816F580"
#define  DTV_DEMOD_MISC_BISR_HOLD_REMAP_reg                                      0xB816F580
#define  DTV_DEMOD_MISC_BISR_HOLD_REMAP_inst_addr                                "0x00A6"
#define  set_DTV_DEMOD_MISC_BISR_HOLD_REMAP_reg(data)                            (*((volatile unsigned int*)DTV_DEMOD_MISC_BISR_HOLD_REMAP_reg)=data)
#define  get_DTV_DEMOD_MISC_BISR_HOLD_REMAP_reg                                  (*((volatile unsigned int*)DTV_DEMOD_MISC_BISR_HOLD_REMAP_reg))
#define  DTV_DEMOD_MISC_BISR_HOLD_REMAP_hold_remap_memory_bank_07_2_shift        (0)
#define  DTV_DEMOD_MISC_BISR_HOLD_REMAP_hold_remap_memory_bank_07_2_mask         (0x00000001)
#define  DTV_DEMOD_MISC_BISR_HOLD_REMAP_hold_remap_memory_bank_07_2(data)        (0x00000001&(data))
#define  DTV_DEMOD_MISC_BISR_HOLD_REMAP_get_hold_remap_memory_bank_07_2(data)    (0x00000001&(data))

#define  DTV_DEMOD_MISC_BISR_DONE                                               0x1816F584
#define  DTV_DEMOD_MISC_BISR_DONE_reg_addr                                       "0xB816F584"
#define  DTV_DEMOD_MISC_BISR_DONE_reg                                            0xB816F584
#define  DTV_DEMOD_MISC_BISR_DONE_inst_addr                                      "0x00A7"
#define  set_DTV_DEMOD_MISC_BISR_DONE_reg(data)                                  (*((volatile unsigned int*)DTV_DEMOD_MISC_BISR_DONE_reg)=data)
#define  get_DTV_DEMOD_MISC_BISR_DONE_reg                                        (*((volatile unsigned int*)DTV_DEMOD_MISC_BISR_DONE_reg))
#define  DTV_DEMOD_MISC_BISR_DONE_memory_bank_07_2_bisr_done_shift               (0)
#define  DTV_DEMOD_MISC_BISR_DONE_memory_bank_07_2_bisr_done_mask                (0x00000001)
#define  DTV_DEMOD_MISC_BISR_DONE_memory_bank_07_2_bisr_done(data)               (0x00000001&(data))
#define  DTV_DEMOD_MISC_BISR_DONE_get_memory_bank_07_2_bisr_done(data)           (0x00000001&(data))

#define  DTV_DEMOD_MISC_BISR_FAIL                                               0x1816F588
#define  DTV_DEMOD_MISC_BISR_FAIL_reg_addr                                       "0xB816F588"
#define  DTV_DEMOD_MISC_BISR_FAIL_reg                                            0xB816F588
#define  DTV_DEMOD_MISC_BISR_FAIL_inst_addr                                      "0x00A8"
#define  set_DTV_DEMOD_MISC_BISR_FAIL_reg(data)                                  (*((volatile unsigned int*)DTV_DEMOD_MISC_BISR_FAIL_reg)=data)
#define  get_DTV_DEMOD_MISC_BISR_FAIL_reg                                        (*((volatile unsigned int*)DTV_DEMOD_MISC_BISR_FAIL_reg))
#define  DTV_DEMOD_MISC_BISR_FAIL_memory_bank_07_2_bisr_fail_shift               (0)
#define  DTV_DEMOD_MISC_BISR_FAIL_memory_bank_07_2_bisr_fail_mask                (0x00000001)
#define  DTV_DEMOD_MISC_BISR_FAIL_memory_bank_07_2_bisr_fail(data)               (0x00000001&(data))
#define  DTV_DEMOD_MISC_BISR_FAIL_get_memory_bank_07_2_bisr_fail(data)           (0x00000001&(data))

#define  DTV_DEMOD_MISC_BISR_FAIL_0                                             0x1816F58C
#define  DTV_DEMOD_MISC_BISR_FAIL_0_reg_addr                                     "0xB816F58C"
#define  DTV_DEMOD_MISC_BISR_FAIL_0_reg                                          0xB816F58C
#define  DTV_DEMOD_MISC_BISR_FAIL_0_inst_addr                                    "0x00A9"
#define  set_DTV_DEMOD_MISC_BISR_FAIL_0_reg(data)                                (*((volatile unsigned int*)DTV_DEMOD_MISC_BISR_FAIL_0_reg)=data)
#define  get_DTV_DEMOD_MISC_BISR_FAIL_0_reg                                      (*((volatile unsigned int*)DTV_DEMOD_MISC_BISR_FAIL_0_reg))
#define  DTV_DEMOD_MISC_BISR_FAIL_0_memory_bank_07_2_drf_bisr_fail_0_shift       (9)
#define  DTV_DEMOD_MISC_BISR_FAIL_0_memory_bank_07_2_bisr_out_shift              (1)
#define  DTV_DEMOD_MISC_BISR_FAIL_0_memory_bank_07_2_bisr_fail_0_shift           (0)
#define  DTV_DEMOD_MISC_BISR_FAIL_0_memory_bank_07_2_drf_bisr_fail_0_mask        (0x00000200)
#define  DTV_DEMOD_MISC_BISR_FAIL_0_memory_bank_07_2_bisr_out_mask               (0x000001FE)
#define  DTV_DEMOD_MISC_BISR_FAIL_0_memory_bank_07_2_bisr_fail_0_mask            (0x00000001)
#define  DTV_DEMOD_MISC_BISR_FAIL_0_memory_bank_07_2_drf_bisr_fail_0(data)       (0x00000200&((data)<<9))
#define  DTV_DEMOD_MISC_BISR_FAIL_0_memory_bank_07_2_bisr_out(data)              (0x000001FE&((data)<<1))
#define  DTV_DEMOD_MISC_BISR_FAIL_0_memory_bank_07_2_bisr_fail_0(data)           (0x00000001&(data))
#define  DTV_DEMOD_MISC_BISR_FAIL_0_get_memory_bank_07_2_drf_bisr_fail_0(data)   ((0x00000200&(data))>>9)
#define  DTV_DEMOD_MISC_BISR_FAIL_0_get_memory_bank_07_2_bisr_out(data)          ((0x000001FE&(data))>>1)
#define  DTV_DEMOD_MISC_BISR_FAIL_0_get_memory_bank_07_2_bisr_fail_0(data)       (0x00000001&(data))

#define  DTV_DEMOD_MISC_BISR_REPARE                                             0x1816F590
#define  DTV_DEMOD_MISC_BISR_REPARE_reg_addr                                     "0xB816F590"
#define  DTV_DEMOD_MISC_BISR_REPARE_reg                                          0xB816F590
#define  DTV_DEMOD_MISC_BISR_REPARE_inst_addr                                    "0x00AA"
#define  set_DTV_DEMOD_MISC_BISR_REPARE_reg(data)                                (*((volatile unsigned int*)DTV_DEMOD_MISC_BISR_REPARE_reg)=data)
#define  get_DTV_DEMOD_MISC_BISR_REPARE_reg                                      (*((volatile unsigned int*)DTV_DEMOD_MISC_BISR_REPARE_reg))
#define  DTV_DEMOD_MISC_BISR_REPARE_memory_bank_07_2_bisr_repaired_shift         (0)
#define  DTV_DEMOD_MISC_BISR_REPARE_memory_bank_07_2_bisr_repaired_mask          (0x00000001)
#define  DTV_DEMOD_MISC_BISR_REPARE_memory_bank_07_2_bisr_repaired(data)         (0x00000001&(data))
#define  DTV_DEMOD_MISC_BISR_REPARE_get_memory_bank_07_2_bisr_repaired(data)     (0x00000001&(data))

#define  DTV_DEMOD_MISC_BISR_DRF_DONE                                           0x1816F594
#define  DTV_DEMOD_MISC_BISR_DRF_DONE_reg_addr                                   "0xB816F594"
#define  DTV_DEMOD_MISC_BISR_DRF_DONE_reg                                        0xB816F594
#define  DTV_DEMOD_MISC_BISR_DRF_DONE_inst_addr                                  "0x00AB"
#define  set_DTV_DEMOD_MISC_BISR_DRF_DONE_reg(data)                              (*((volatile unsigned int*)DTV_DEMOD_MISC_BISR_DRF_DONE_reg)=data)
#define  get_DTV_DEMOD_MISC_BISR_DRF_DONE_reg                                    (*((volatile unsigned int*)DTV_DEMOD_MISC_BISR_DRF_DONE_reg))
#define  DTV_DEMOD_MISC_BISR_DRF_DONE_memory_bank_07_2_drf_bisr_done_shift       (0)
#define  DTV_DEMOD_MISC_BISR_DRF_DONE_memory_bank_07_2_drf_bisr_done_mask        (0x00000001)
#define  DTV_DEMOD_MISC_BISR_DRF_DONE_memory_bank_07_2_drf_bisr_done(data)       (0x00000001&(data))
#define  DTV_DEMOD_MISC_BISR_DRF_DONE_get_memory_bank_07_2_drf_bisr_done(data)   (0x00000001&(data))

#define  DTV_DEMOD_MISC_BISR_DRF_START_PAUSE                                    0x1816F598
#define  DTV_DEMOD_MISC_BISR_DRF_START_PAUSE_reg_addr                            "0xB816F598"
#define  DTV_DEMOD_MISC_BISR_DRF_START_PAUSE_reg                                 0xB816F598
#define  DTV_DEMOD_MISC_BISR_DRF_START_PAUSE_inst_addr                           "0x00AC"
#define  set_DTV_DEMOD_MISC_BISR_DRF_START_PAUSE_reg(data)                       (*((volatile unsigned int*)DTV_DEMOD_MISC_BISR_DRF_START_PAUSE_reg)=data)
#define  get_DTV_DEMOD_MISC_BISR_DRF_START_PAUSE_reg                             (*((volatile unsigned int*)DTV_DEMOD_MISC_BISR_DRF_START_PAUSE_reg))
#define  DTV_DEMOD_MISC_BISR_DRF_START_PAUSE_memory_bank_07_2_drf_bisr_start_pause_shift (0)
#define  DTV_DEMOD_MISC_BISR_DRF_START_PAUSE_memory_bank_07_2_drf_bisr_start_pause_mask (0x00000001)
#define  DTV_DEMOD_MISC_BISR_DRF_START_PAUSE_memory_bank_07_2_drf_bisr_start_pause(data) (0x00000001&(data))
#define  DTV_DEMOD_MISC_BISR_DRF_START_PAUSE_get_memory_bank_07_2_drf_bisr_start_pause(data) (0x00000001&(data))

#define  DTV_DEMOD_MISC_BISR_DRF_FAIL                                           0x1816F59C
#define  DTV_DEMOD_MISC_BISR_DRF_FAIL_reg_addr                                   "0xB816F59C"
#define  DTV_DEMOD_MISC_BISR_DRF_FAIL_reg                                        0xB816F59C
#define  DTV_DEMOD_MISC_BISR_DRF_FAIL_inst_addr                                  "0x00AD"
#define  set_DTV_DEMOD_MISC_BISR_DRF_FAIL_reg(data)                              (*((volatile unsigned int*)DTV_DEMOD_MISC_BISR_DRF_FAIL_reg)=data)
#define  get_DTV_DEMOD_MISC_BISR_DRF_FAIL_reg                                    (*((volatile unsigned int*)DTV_DEMOD_MISC_BISR_DRF_FAIL_reg))
#define  DTV_DEMOD_MISC_BISR_DRF_FAIL_memory_bank_07_2_drf_bisr_fail_shift       (0)
#define  DTV_DEMOD_MISC_BISR_DRF_FAIL_memory_bank_07_2_drf_bisr_fail_mask        (0x00000001)
#define  DTV_DEMOD_MISC_BISR_DRF_FAIL_memory_bank_07_2_drf_bisr_fail(data)       (0x00000001&(data))
#define  DTV_DEMOD_MISC_BISR_DRF_FAIL_get_memory_bank_07_2_drf_bisr_fail(data)   (0x00000001&(data))

#define  DTV_DEMOD_MISC_DEMOD_TP_OUT_EN                                         0x1816F600
#define  DTV_DEMOD_MISC_DEMOD_TP_OUT_EN_reg_addr                                 "0xB816F600"
#define  DTV_DEMOD_MISC_DEMOD_TP_OUT_EN_reg                                      0xB816F600
#define  DTV_DEMOD_MISC_DEMOD_TP_OUT_EN_inst_addr                                "0x00AE"
#define  set_DTV_DEMOD_MISC_DEMOD_TP_OUT_EN_reg(data)                            (*((volatile unsigned int*)DTV_DEMOD_MISC_DEMOD_TP_OUT_EN_reg)=data)
#define  get_DTV_DEMOD_MISC_DEMOD_TP_OUT_EN_reg                                  (*((volatile unsigned int*)DTV_DEMOD_MISC_DEMOD_TP_OUT_EN_reg))
#define  DTV_DEMOD_MISC_DEMOD_TP_OUT_EN_demod_tp_out_enable_shift                (0)
#define  DTV_DEMOD_MISC_DEMOD_TP_OUT_EN_demod_tp_out_enable_mask                 (0x00000001)
#define  DTV_DEMOD_MISC_DEMOD_TP_OUT_EN_demod_tp_out_enable(data)                (0x00000001&(data))
#define  DTV_DEMOD_MISC_DEMOD_TP_OUT_EN_get_demod_tp_out_enable(data)            (0x00000001&(data))

#define  DTV_DEMOD_MISC_DEMOD_DATA_IN                                           0x1816F610
#define  DTV_DEMOD_MISC_DEMOD_DATA_IN_reg_addr                                   "0xB816F610"
#define  DTV_DEMOD_MISC_DEMOD_DATA_IN_reg                                        0xB816F610
#define  DTV_DEMOD_MISC_DEMOD_DATA_IN_inst_addr                                  "0x00AF"
#define  set_DTV_DEMOD_MISC_DEMOD_DATA_IN_reg(data)                              (*((volatile unsigned int*)DTV_DEMOD_MISC_DEMOD_DATA_IN_reg)=data)
#define  get_DTV_DEMOD_MISC_DEMOD_DATA_IN_reg                                    (*((volatile unsigned int*)DTV_DEMOD_MISC_DEMOD_DATA_IN_reg))
#define  DTV_DEMOD_MISC_DEMOD_DATA_IN_demod_data_valid_shift                     (24)
#define  DTV_DEMOD_MISC_DEMOD_DATA_IN_atb_demod_data_q_shift                     (12)
#define  DTV_DEMOD_MISC_DEMOD_DATA_IN_atb_demod_data_i_shift                     (0)
#define  DTV_DEMOD_MISC_DEMOD_DATA_IN_demod_data_valid_mask                      (0x01000000)
#define  DTV_DEMOD_MISC_DEMOD_DATA_IN_atb_demod_data_q_mask                      (0x00FFF000)
#define  DTV_DEMOD_MISC_DEMOD_DATA_IN_atb_demod_data_i_mask                      (0x00000FFF)
#define  DTV_DEMOD_MISC_DEMOD_DATA_IN_demod_data_valid(data)                     (0x01000000&((data)<<24))
#define  DTV_DEMOD_MISC_DEMOD_DATA_IN_atb_demod_data_q(data)                     (0x00FFF000&((data)<<12))
#define  DTV_DEMOD_MISC_DEMOD_DATA_IN_atb_demod_data_i(data)                     (0x00000FFF&(data))
#define  DTV_DEMOD_MISC_DEMOD_DATA_IN_get_demod_data_valid(data)                 ((0x01000000&(data))>>24)
#define  DTV_DEMOD_MISC_DEMOD_DATA_IN_get_atb_demod_data_q(data)                 ((0x00FFF000&(data))>>12)
#define  DTV_DEMOD_MISC_DEMOD_DATA_IN_get_atb_demod_data_i(data)                 (0x00000FFF&(data))

#define  DTV_DEMOD_MISC_DEMOD_CC2_SEL                                           0x1816F620
#define  DTV_DEMOD_MISC_DEMOD_CC2_SEL_reg_addr                                   "0xB816F620"
#define  DTV_DEMOD_MISC_DEMOD_CC2_SEL_reg                                        0xB816F620
#define  DTV_DEMOD_MISC_DEMOD_CC2_SEL_inst_addr                                  "0x00B0"
#define  set_DTV_DEMOD_MISC_DEMOD_CC2_SEL_reg(data)                              (*((volatile unsigned int*)DTV_DEMOD_MISC_DEMOD_CC2_SEL_reg)=data)
#define  get_DTV_DEMOD_MISC_DEMOD_CC2_SEL_reg                                    (*((volatile unsigned int*)DTV_DEMOD_MISC_DEMOD_CC2_SEL_reg))
#define  DTV_DEMOD_MISC_DEMOD_CC2_SEL_demod_cc2_agc_sel_shift                    (1)
#define  DTV_DEMOD_MISC_DEMOD_CC2_SEL_demod_cc2_tp_sel_shift                     (0)
#define  DTV_DEMOD_MISC_DEMOD_CC2_SEL_demod_cc2_agc_sel_mask                     (0x00000002)
#define  DTV_DEMOD_MISC_DEMOD_CC2_SEL_demod_cc2_tp_sel_mask                      (0x00000001)
#define  DTV_DEMOD_MISC_DEMOD_CC2_SEL_demod_cc2_agc_sel(data)                    (0x00000002&((data)<<1))
#define  DTV_DEMOD_MISC_DEMOD_CC2_SEL_demod_cc2_tp_sel(data)                     (0x00000001&(data))
#define  DTV_DEMOD_MISC_DEMOD_CC2_SEL_get_demod_cc2_agc_sel(data)                ((0x00000002&(data))>>1)
#define  DTV_DEMOD_MISC_DEMOD_CC2_SEL_get_demod_cc2_tp_sel(data)                 (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======DTV_DEMOD_MISC register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_wrapper_addr_offset:28;
        RBus_UInt32  res1:4;
    };
}dtv_demod_misc_atb_wrapper_addr_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_wrapper_reset_sync_atb_en:1;
        RBus_UInt32  atb_wrapper_reset_flow_en:1;
        RBus_UInt32  atb_adc_data_unsigned:1;
        RBus_UInt32  atb_wrapper_rcmd_limit_atb:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  atb_wrapper_wcmd_limit_atb:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  atb_wrapper_cmd_limit:5;
        RBus_UInt32  atb_wrapper_rcmd_limit_dc:4;
        RBus_UInt32  atb_wrapper_wcmd_limit_dc:4;
    };
}dtv_demod_misc_atb_wrapper_cmd_limit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  cache_overflow:1;
        RBus_UInt32  row_val_ptr:8;
        RBus_UInt32  res2:2;
        RBus_UInt32  atb_wrapper_wfifo_empty:1;
        RBus_UInt32  atb_wrapper_wfifo_full:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  atb_wrapper_rfifo_empty:1;
        RBus_UInt32  atb_wrapper_rfifo_full:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  atb_wrapper_cfifo_empty_atbr:1;
        RBus_UInt32  atb_wrapper_cfifo_empty_atbw:1;
        RBus_UInt32  atb_wrapper_cfifo_empty_dc:1;
        RBus_UInt32  atb_wrapper_cfifo_full_atb:1;
        RBus_UInt32  atb_wrapper_cfifo_full_dc:1;
    };
}dtv_demod_misc_atb_wrapper_fifo_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  atb_wrapper_dc_wcmd_cnt:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  atb_wrapper_dc_rcmd_cnt:5;
    };
}dtv_demod_misc_atb_wrapper_dccmd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  atb_wrapper_debugclk_sel:1;
        RBus_UInt32  atb_wrapper_debug_sel:4;
    };
}dtv_demod_misc_atb_wrapper_debug_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  atb_wrapper_debug_data:31;
    };
}dtv_demod_misc_atb_wrapper_dc_cmd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  atb_wrapper_cache_en:1;
        RBus_UInt32  atb_wrapper_read_delay:4;
        RBus_UInt32  atb_wrapper_t2dit_addr1:12;
        RBus_UInt32  atb_wrapper_t2dit_addr0:12;
    };
}dtv_demod_misc_atb_wrapper_t2_dit_addr_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  atb_wrapper_t2dit_addr3:12;
        RBus_UInt32  atb_wrapper_t2dit_addr2:12;
    };
}dtv_demod_misc_atb_wrapper_t2_dit_addr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  bist_mode_atb_wrap:1;
    };
}dtv_demod_misc_bist_mode_atb_wrap__RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  drf_bist_mode_atb_wrap:1;
    };
}dtv_demod_misc_drf_bist_mode_atb_wrap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  drf_test_resume_atb_wrap:1;
    };
}dtv_demod_misc_drf_test_resume_atb_wrap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  mbist_atb_wrap_dvse:1;
        RBus_UInt32  mbist_atb_wrap_dvs:4;
    };
}dtv_demod_misc_dvse_atb_sys_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  mbist_atb_wrap_ls:1;
    };
}dtv_demod_misc_ls_atb_sys_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  atb_wrap_bist_done:1;
    };
}dtv_demod_misc_bist_done_atb_wrap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  atb_wrap_drf_bist_done:1;
    };
}dtv_demod_misc_drf_bist_done_atb_wrap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  atb_wrap_bist_fail_1:1;
        RBus_UInt32  atb_wrap_bist_fail_0:1;
        RBus_UInt32  atb_wrap_bist_fail:1;
    };
}dtv_demod_misc_bist_fail_atb_wrap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  atb_wrap_drf_bist_fail_1:1;
        RBus_UInt32  atb_wrap_drf_bist_fail_0:1;
        RBus_UInt32  atb_wrap_drf_bist_fail:1;
    };
}dtv_demod_misc_drf_bist_fail_atb_wrap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  atb_wrap_drf_start_pause:1;
    };
}dtv_demod_misc_drf_start_pause_atb_wrap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  atb_ldpc_rom_dma_en:1;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  atb_ldpc_rom_dma_sw_reset_done:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  atb_ldpc_rom_dma_sw_reset:2;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  atb_ldpc_rom_dma_cfg_rd:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  atb_ldpc_rom_dma_cfg_wr:1;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  atb_ldpc_rom_dma_cfg_addr:8;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_cfg_rdata:32;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_cfg_wdata:32;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  atb_ldpc_rom_dma_error_status:8;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_err_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  atb_ldpc_rom_dma_dbg_rdy:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  atb_ldpc_rom_dma_dbg_en:2;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_dbg_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  atb_ldpc_rom_dma_dbg_cr:6;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_dbg_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  atb_ldpc_rom_dma_dbg_data_sel:10;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_dbg_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_dbg_data_255_224:32;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_dbg_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_dbg_data_223_192:32;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_dbg_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_dbg_data_191_160:32;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_dbg_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_dbg_data_159_128:32;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_dbg_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_dbg_data_127_96:32;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_dbg_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_dbg_data_95_64:32;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_dbg_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_dbg_data_63_32:32;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_dbg_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_dbg_data_31_0:32;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_dbg_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_bist_mode:1;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_pre_bist_mode:1;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_mbist_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_bist_done:1;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_pre_bist_done:1;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_mbist_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_bist_fail:1;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_pre_bist_fail:1;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_mbist_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_drf_bist_mode:1;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_pre_drf_bist_mode:1;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_mbist_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_drf_bist_done:1;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_pre_drf_bist_done:1;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_mbist_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_drf_bist_fail:1;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_pre_drf_bist_fail:1;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_mbist_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_drf_start_pause:1;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_pre_drf_start_pause:1;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_mbist_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_drf_test_resume:1;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_pre_drf_test_resume:1;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_mbist_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_rme:1;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_rm:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_pre_rme:1;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_pre_rm:4;
        RBus_UInt32  res3:10;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_test1:1;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_pre_test1:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_ls:1;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_pre_ls:1;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_mbist_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  dtv_demod_debug_sel:4;
    };
}dtv_demod_misc_dtv_demod_debug_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  dtv_demod_int_en:1;
    };
}dtv_demod_misc_dtv_demod_int_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  atb_i2c_sda_pol:1;
        RBus_UInt32  atb_use_i2c:1;
        RBus_UInt32  atb_i2c_adr_sel:3;
        RBus_UInt32  atb_dvbc2_en:1;
        RBus_UInt32  atb_dvbc_en:1;
        RBus_UInt32  atb_dvbs_en:1;
        RBus_UInt32  atb_dvbt_en:1;
    };
}dtv_demod_misc_dtv_demod_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  atb_rd_cache2_bist_mode:1;
        RBus_UInt32  atb_rd_cache_bist_mode:1;
        RBus_UInt32  atb_vit2_bist_mode:1;
        RBus_UInt32  atb_vit_bist_mode:1;
        RBus_UInt32  atb_tdi2_bist_mode:1;
        RBus_UInt32  atb_tdi_bist_mode:1;
        RBus_UInt32  atb_sync_bist_mode:1;
        RBus_UInt32  atb_ldpc2_bist_mode:1;
        RBus_UInt32  atb_ldpc_bist_mode:1;
        RBus_UInt32  atb_fft5_bist_mode:1;
        RBus_UInt32  atb_fft4_bist_mode:1;
        RBus_UInt32  atb_fft2_bist_mode:1;
        RBus_UInt32  atb_fft1_bist_mode:1;
        RBus_UInt32  atb_ce4_bist_mode:1;
        RBus_UInt32  atb_ce3_bist_mode:1;
        RBus_UInt32  atb_ce2_bist_mode:1;
        RBus_UInt32  atb_ce1_bist_mode:1;
    };
}dtv_demod_misc_bist_mode_atb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  atb_rd_cache2_drf_bist_mode:1;
        RBus_UInt32  atb_rd_cache_drf_bist_mode:1;
        RBus_UInt32  atb_vit2_drf_bist_mode:1;
        RBus_UInt32  atb_vit_drf_bist_mode:1;
        RBus_UInt32  atb_tdi2_drf_bist_mode:1;
        RBus_UInt32  atb_tdi_drf_bist_mode:1;
        RBus_UInt32  atb_sync_drf_bist_mode:1;
        RBus_UInt32  atb_ldpc2_drf_bist_mode:1;
        RBus_UInt32  atb_ldpc_drf_bist_mode:1;
        RBus_UInt32  atb_fft5_drf_bist_mode:1;
        RBus_UInt32  atb_fft4_drf_bist_mode:1;
        RBus_UInt32  atb_fft2_drf_bist_mode:1;
        RBus_UInt32  atb_fft1_drf_bist_mode:1;
        RBus_UInt32  atb_ce4_drf_bist_mode:1;
        RBus_UInt32  atb_ce3_drf_bist_mode:1;
        RBus_UInt32  atb_ce2_drf_bist_mode:1;
        RBus_UInt32  atb_ce1_drf_bist_mode:1;
    };
}dtv_demod_misc_drf_bist_mode_atb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  atb_rd_cache2_drf_test_resume:1;
        RBus_UInt32  atb_rd_cache_drf_test_resume:1;
        RBus_UInt32  atb_vit2_drf_test_resume:1;
        RBus_UInt32  atb_vit_drf_test_resume:1;
        RBus_UInt32  atb_tdi2_drf_test_resume:1;
        RBus_UInt32  atb_tdi_drf_test_resume:1;
        RBus_UInt32  atb_sync_drf_test_resume:1;
        RBus_UInt32  atb_ldpc2_drf_test_resume:1;
        RBus_UInt32  atb_ldpc_drf_test_resume:1;
        RBus_UInt32  atb_fft5_drf_test_resume:1;
        RBus_UInt32  atb_fft4_drf_test_resume:1;
        RBus_UInt32  atb_fft2_drf_test_resume:1;
        RBus_UInt32  atb_fft1_drf_test_resume:1;
        RBus_UInt32  atb_ce4_drf_test_resume:1;
        RBus_UInt32  atb_ce3_drf_test_resume:1;
        RBus_UInt32  atb_ce2_drf_test_resume:1;
        RBus_UInt32  atb_ce1_drf_test_resume:1;
    };
}dtv_demod_misc_drf_test_resume_atb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  atb_rd_cache2_bist_done:1;
        RBus_UInt32  atb_rd_cache_bist_done:1;
        RBus_UInt32  atb_vit2_bist_done:1;
        RBus_UInt32  atb_vit_bist_done:1;
        RBus_UInt32  atb_tdi2_bist_done:1;
        RBus_UInt32  atb_tdi_bist_done:1;
        RBus_UInt32  atb_sync_bist_done:1;
        RBus_UInt32  atb_ldpc2_bist_done:1;
        RBus_UInt32  atb_ldpc_bist_done:1;
        RBus_UInt32  atb_fft5_bist_done:1;
        RBus_UInt32  atb_fft4_bist_done:1;
        RBus_UInt32  atb_fft2_bist_done:1;
        RBus_UInt32  atb_fft1_bist_done:1;
        RBus_UInt32  atb_ce4_bist_done:1;
        RBus_UInt32  atb_ce3_bist_done:1;
        RBus_UInt32  atb_ce2_bist_done:1;
        RBus_UInt32  atb_ce1_bist_done:1;
    };
}dtv_demod_misc_bist_done_atb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  atb_rd_cache2_drf_bist_done:1;
        RBus_UInt32  atb_rd_cache_drf_bist_done:1;
        RBus_UInt32  atb_vit2_drf_bist_done:1;
        RBus_UInt32  atb_vit_drf_bist_done:1;
        RBus_UInt32  atb_tdi2_drf_bist_done:1;
        RBus_UInt32  atb_tdi_drf_bist_done:1;
        RBus_UInt32  atb_sync_drf_bist_done:1;
        RBus_UInt32  atb_ldpc2_drf_bist_done:1;
        RBus_UInt32  atb_ldpc_drf_bist_done:1;
        RBus_UInt32  atb_fft5_drf_bist_done:1;
        RBus_UInt32  atb_fft4_drf_bist_done:1;
        RBus_UInt32  atb_fft2_drf_bist_done:1;
        RBus_UInt32  atb_fft1_drf_bist_done:1;
        RBus_UInt32  atb_ce4_drf_bist_done:1;
        RBus_UInt32  atb_ce3_drf_bist_done:1;
        RBus_UInt32  atb_ce2_drf_bist_done:1;
        RBus_UInt32  atb_ce1_drf_bist_done:1;
    };
}dtv_demod_misc_drf_bist_done_atb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  atb_rd_cache2_bist_fail:1;
        RBus_UInt32  atb_rd_cache_bist_fail:1;
        RBus_UInt32  atb_vit2_bist_fail:1;
        RBus_UInt32  atb_vit_bist_fail:1;
        RBus_UInt32  atb_tdi2_bist_fail:1;
        RBus_UInt32  atb_tdi_bist_fail:1;
        RBus_UInt32  atb_sync_bist_fail:1;
        RBus_UInt32  atb_ldpc2_bist_fail:1;
        RBus_UInt32  atb_ldpc_bist_fail:1;
        RBus_UInt32  atb_fft5_bist_fail:1;
        RBus_UInt32  atb_fft4_bist_fail:1;
        RBus_UInt32  atb_fft2_bist_fail:1;
        RBus_UInt32  atb_fft1_bist_fail:1;
        RBus_UInt32  atb_ce4_bist_fail:1;
        RBus_UInt32  atb_ce3_bist_fail:1;
        RBus_UInt32  atb_ce2_bist_fail:1;
        RBus_UInt32  atb_ce1_bist_fail:1;
    };
}dtv_demod_misc_bist_fail_atb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  atb_rd_cache2_drf_bist_fail:1;
        RBus_UInt32  atb_rd_cache_drf_bist_fail:1;
        RBus_UInt32  atb_vit2_drf_bist_fail:1;
        RBus_UInt32  atb_vit_drf_bist_fail:1;
        RBus_UInt32  atb_tdi2_drf_bist_fail:1;
        RBus_UInt32  atb_tdi_drf_bist_fail:1;
        RBus_UInt32  atb_sync_drf_bist_fail:1;
        RBus_UInt32  atb_ldpc2_drf_bist_fail:1;
        RBus_UInt32  atb_ldpc_drf_bist_fail:1;
        RBus_UInt32  atb_fft5_drf_bist_fail:1;
        RBus_UInt32  atb_fft4_drf_bist_fail:1;
        RBus_UInt32  atb_fft2_drf_bist_fail:1;
        RBus_UInt32  atb_fft1_drf_bist_fail:1;
        RBus_UInt32  atb_ce4_drf_bist_fail:1;
        RBus_UInt32  atb_ce3_drf_bist_fail:1;
        RBus_UInt32  atb_ce2_drf_bist_fail:1;
        RBus_UInt32  atb_ce1_drf_bist_fail:1;
    };
}dtv_demod_misc_drf_bist_fail_atb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  atb_rd_cache2_drf_start_pause:1;
        RBus_UInt32  atb_rd_cache_drf_start_pause:1;
        RBus_UInt32  atb_vit2_drf_start_pause:1;
        RBus_UInt32  atb_vit_drf_start_pause:1;
        RBus_UInt32  atb_tdi2_drf_start_pause:1;
        RBus_UInt32  atb_tdi_drf_start_pause:1;
        RBus_UInt32  atb_sync_drf_start_pause:1;
        RBus_UInt32  atb_ldpc2_drf_start_pause:1;
        RBus_UInt32  atb_ldpc_drf_start_pause:1;
        RBus_UInt32  atb_fft5_drf_start_pause:1;
        RBus_UInt32  atb_fft4_drf_start_pause:1;
        RBus_UInt32  atb_fft2_drf_start_pause:1;
        RBus_UInt32  atb_fft1_drf_start_pause:1;
        RBus_UInt32  atb_ce4_drf_start_pause:1;
        RBus_UInt32  atb_ce3_drf_start_pause:1;
        RBus_UInt32  atb_ce2_drf_start_pause:1;
        RBus_UInt32  atb_ce1_drf_start_pause:1;
    };
}dtv_demod_misc_drf_start_pause_atb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  atb_ce1_bist_fail_2:1;
        RBus_UInt32  atb_ce1_bist_fail_1:1;
        RBus_UInt32  atb_ce1_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_atb_ce1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  atb_ce2_bist_fail_2:1;
        RBus_UInt32  atb_ce2_bist_fail_1:1;
        RBus_UInt32  atb_ce2_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_atb_ce2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  atb_ce3_bist_fail_3:1;
        RBus_UInt32  atb_ce3_bist_fail_2:1;
        RBus_UInt32  atb_ce3_bist_fail_1:1;
        RBus_UInt32  atb_ce3_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_atb_ce3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  atb_ce4_bist_fail_5:1;
        RBus_UInt32  atb_ce4_bist_fail_4:1;
        RBus_UInt32  atb_ce4_bist_fail_3:1;
        RBus_UInt32  atb_ce4_bist_fail_2:1;
        RBus_UInt32  atb_ce4_bist_fail_1:1;
        RBus_UInt32  atb_ce4_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_atb_ce4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  atb_fft1_bist_fail_7:1;
        RBus_UInt32  atb_fft1_bist_fail_6:1;
        RBus_UInt32  atb_fft1_bist_fail_5:1;
        RBus_UInt32  atb_fft1_bist_fail_4:1;
        RBus_UInt32  atb_fft1_bist_fail_3:1;
        RBus_UInt32  atb_fft1_bist_fail_2:1;
        RBus_UInt32  atb_fft1_bist_fail_1:1;
        RBus_UInt32  atb_fft1_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_atb_fft1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  atb_fft2_bist_fail_7:1;
        RBus_UInt32  atb_fft2_bist_fail_6:1;
        RBus_UInt32  atb_fft2_bist_fail_5:1;
        RBus_UInt32  atb_fft2_bist_fail_4:1;
        RBus_UInt32  atb_fft2_bist_fail_3:1;
        RBus_UInt32  atb_fft2_bist_fail_2:1;
        RBus_UInt32  atb_fft2_bist_fail_1:1;
        RBus_UInt32  atb_fft2_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_atb_fft2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  atb_fft4_bist_fail_7:1;
        RBus_UInt32  atb_fft4_bist_fail_6:1;
        RBus_UInt32  atb_fft4_bist_fail_5:1;
        RBus_UInt32  atb_fft4_bist_fail_4:1;
        RBus_UInt32  atb_fft4_bist_fail_3:1;
        RBus_UInt32  atb_fft4_bist_fail_2:1;
        RBus_UInt32  atb_fft4_bist_fail_1:1;
        RBus_UInt32  atb_fft4_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_atb_fft4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  atb_fft5_bist_fail_7:1;
        RBus_UInt32  atb_fft5_bist_fail_6:1;
        RBus_UInt32  atb_fft5_bist_fail_5:1;
        RBus_UInt32  atb_fft5_bist_fail_4:1;
        RBus_UInt32  atb_fft5_bist_fail_3:1;
        RBus_UInt32  atb_fft5_bist_fail_2:1;
        RBus_UInt32  atb_fft5_bist_fail_1:1;
        RBus_UInt32  atb_fft5_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_atb_fft5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  atb_ldpc2_bist_fail_1:1;
        RBus_UInt32  atb_ldpc2_bist_fail_0:1;
        RBus_UInt32  atb_ldpc_bist_fail_1:1;
        RBus_UInt32  atb_ldpc_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_atb_ldpc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  atb_sync_bist_fail_2:1;
        RBus_UInt32  atb_sync_bist_fail_1:1;
        RBus_UInt32  atb_sync_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_atb_sync_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  atb_tdi2_bist_fail_1:1;
        RBus_UInt32  atb_tdi2_bist_fail_0:1;
        RBus_UInt32  atb_tdi_bist_fail_7:1;
        RBus_UInt32  atb_tdi_bist_fail_6:1;
        RBus_UInt32  atb_tdi_bist_fail_5:1;
        RBus_UInt32  atb_tdi_bist_fail_4:1;
        RBus_UInt32  atb_tdi_bist_fail_3:1;
        RBus_UInt32  atb_tdi_bist_fail_2:1;
        RBus_UInt32  atb_tdi_bist_fail_1:1;
        RBus_UInt32  atb_tdi_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_atb_tdi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  atb_rd_cache2_bist_fail_1:1;
        RBus_UInt32  atb_rd_cache2_bist_fail_0:1;
        RBus_UInt32  atb_rd_cache_bist_fail_8:1;
        RBus_UInt32  atb_rd_cache_bist_fail_7:1;
        RBus_UInt32  atb_rd_cache_bist_fail_6:1;
        RBus_UInt32  atb_rd_cache_bist_fail_5:1;
        RBus_UInt32  atb_rd_cache_bist_fail_4:1;
        RBus_UInt32  atb_rd_cache_bist_fail_3:1;
        RBus_UInt32  atb_rd_cache_bist_fail_2:1;
        RBus_UInt32  atb_rd_cache_bist_fail_1:1;
        RBus_UInt32  atb_rd_cache_bist_fail_0:1;
        RBus_UInt32  atb_vit2_bist_fail_0:1;
        RBus_UInt32  atb_vit_bist_fail_6:1;
        RBus_UInt32  atb_vit_bist_fail_5:1;
        RBus_UInt32  atb_vit_bist_fail_4:1;
        RBus_UInt32  atb_vit_bist_fail_3:1;
        RBus_UInt32  atb_vit_bist_fail_2:1;
        RBus_UInt32  atb_vit_bist_fail_1:1;
        RBus_UInt32  atb_vit_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_atb_vit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  atb_ce1_drf_bist_fail_2:1;
        RBus_UInt32  atb_ce1_drf_bist_fail_1:1;
        RBus_UInt32  atb_ce1_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_atb_ce1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  atb_ce2_drf_bist_fail_2:1;
        RBus_UInt32  atb_ce2_drf_bist_fail_1:1;
        RBus_UInt32  atb_ce2_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_atb_ce2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  atb_ce3_drf_bist_fail_3:1;
        RBus_UInt32  atb_ce3_drf_bist_fail_2:1;
        RBus_UInt32  atb_ce3_drf_bist_fail_1:1;
        RBus_UInt32  atb_ce3_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_atb_ce3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  atb_ce4_drf_bist_fail_5:1;
        RBus_UInt32  atb_ce4_drf_bist_fail_4:1;
        RBus_UInt32  atb_ce4_drf_bist_fail_3:1;
        RBus_UInt32  atb_ce4_drf_bist_fail_2:1;
        RBus_UInt32  atb_ce4_drf_bist_fail_1:1;
        RBus_UInt32  atb_ce4_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_atb_ce4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  atb_fft1_drf_bist_fail_7:1;
        RBus_UInt32  atb_fft1_drf_bist_fail_6:1;
        RBus_UInt32  atb_fft1_drf_bist_fail_5:1;
        RBus_UInt32  atb_fft1_drf_bist_fail_4:1;
        RBus_UInt32  atb_fft1_drf_bist_fail_3:1;
        RBus_UInt32  atb_fft1_drf_bist_fail_2:1;
        RBus_UInt32  atb_fft1_drf_bist_fail_1:1;
        RBus_UInt32  atb_fft1_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_atb_fft1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  atb_fft2_drf_bist_fail_7:1;
        RBus_UInt32  atb_fft2_drf_bist_fail_6:1;
        RBus_UInt32  atb_fft2_drf_bist_fail_5:1;
        RBus_UInt32  atb_fft2_drf_bist_fail_4:1;
        RBus_UInt32  atb_fft2_drf_bist_fail_3:1;
        RBus_UInt32  atb_fft2_drf_bist_fail_2:1;
        RBus_UInt32  atb_fft2_drf_bist_fail_1:1;
        RBus_UInt32  atb_fft2_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_atb_fft2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  atb_fft4_drf_bist_fail_7:1;
        RBus_UInt32  atb_fft4_drf_bist_fail_6:1;
        RBus_UInt32  atb_fft4_drf_bist_fail_5:1;
        RBus_UInt32  atb_fft4_drf_bist_fail_4:1;
        RBus_UInt32  atb_fft4_drf_bist_fail_3:1;
        RBus_UInt32  atb_fft4_drf_bist_fail_2:1;
        RBus_UInt32  atb_fft4_drf_bist_fail_1:1;
        RBus_UInt32  atb_fft4_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_atb_fft4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  atb_fft5_drf_bist_fail_7:1;
        RBus_UInt32  atb_fft5_drf_bist_fail_6:1;
        RBus_UInt32  atb_fft5_drf_bist_fail_5:1;
        RBus_UInt32  atb_fft5_drf_bist_fail_4:1;
        RBus_UInt32  atb_fft5_drf_bist_fail_3:1;
        RBus_UInt32  atb_fft5_drf_bist_fail_2:1;
        RBus_UInt32  atb_fft5_drf_bist_fail_1:1;
        RBus_UInt32  atb_fft5_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_atb_fft5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  atb_ldpc2_drf_bist_fail_1:1;
        RBus_UInt32  atb_ldpc2_drf_bist_fail_0:1;
        RBus_UInt32  atb_ldpc_drf_bist_fail_1:1;
        RBus_UInt32  atb_ldpc_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_atb_ldpc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  atb_sync_drf_bist_fail_2:1;
        RBus_UInt32  atb_sync_drf_bist_fail_1:1;
        RBus_UInt32  atb_sync_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_atb_sync_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  atb_tdi2_drf_bist_fail_1:1;
        RBus_UInt32  atb_tdi2_drf_bist_fail_0:1;
        RBus_UInt32  atb_tdi_drf_bist_fail_7:1;
        RBus_UInt32  atb_tdi_drf_bist_fail_6:1;
        RBus_UInt32  atb_tdi_drf_bist_fail_5:1;
        RBus_UInt32  atb_tdi_drf_bist_fail_4:1;
        RBus_UInt32  atb_tdi_drf_bist_fail_3:1;
        RBus_UInt32  atb_tdi_drf_bist_fail_2:1;
        RBus_UInt32  atb_tdi_drf_bist_fail_1:1;
        RBus_UInt32  atb_tdi_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_atb_tdi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  atb_rd_cache2_drf_bist_fail_1:1;
        RBus_UInt32  atb_rd_cache2_drf_bist_fail_0:1;
        RBus_UInt32  atb_rd_cache_drf_bist_fail_8:1;
        RBus_UInt32  atb_rd_cache_drf_bist_fail_7:1;
        RBus_UInt32  atb_rd_cache_drf_bist_fail_6:1;
        RBus_UInt32  atb_rd_cache_drf_bist_fail_5:1;
        RBus_UInt32  atb_rd_cache_drf_bist_fail_4:1;
        RBus_UInt32  atb_rd_cache_drf_bist_fail_3:1;
        RBus_UInt32  atb_rd_cache_drf_bist_fail_2:1;
        RBus_UInt32  atb_rd_cache_drf_bist_fail_1:1;
        RBus_UInt32  atb_rd_cache_drf_bist_fail_0:1;
        RBus_UInt32  atb_vit2_drf_bist_fail_0:1;
        RBus_UInt32  atb_vit_drf_bist_fail_6:1;
        RBus_UInt32  atb_vit_drf_bist_fail_5:1;
        RBus_UInt32  atb_vit_drf_bist_fail_4:1;
        RBus_UInt32  atb_vit_drf_bist_fail_3:1;
        RBus_UInt32  atb_vit_drf_bist_fail_2:1;
        RBus_UInt32  atb_vit_drf_bist_fail_1:1;
        RBus_UInt32  atb_vit_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_atb_vit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  bist_atb_te:1;
        RBus_UInt32  bist_atb_dvse:1;
        RBus_UInt32  bist_atb_dvs:4;
    };
}dtv_demod_misc_dvse_atb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  bist_atb_ls:1;
    };
}dtv_demod_misc_ls_atb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  bist_mode_memory_bank_05_2:1;
        RBus_UInt32  bist_mode_memory_bank_05_1:1;
        RBus_UInt32  bist_mode_memory_bank_04b_2:1;
        RBus_UInt32  bist_mode_memory_bank_04b:1;
        RBus_UInt32  bist_mode_memory_bank_04a:1;
        RBus_UInt32  bist_mode_memory_bank_03b_2:1;
        RBus_UInt32  bist_mode_memory_bank_03b_1:1;
        RBus_UInt32  bist_mode_memory_bank_03a_3:1;
        RBus_UInt32  bist_mode_memory_bank_03a_2:1;
        RBus_UInt32  bist_mode_memory_bank_03a_1:1;
        RBus_UInt32  bist_mode_memory_bank_02b:1;
        RBus_UInt32  bist_mode_memory_bank_02a:1;
        RBus_UInt32  bist_mode_memory_bank_01_2:1;
        RBus_UInt32  bist_mode_memory_bank_01_1:1;
    };
}dtv_demod_misc_bist_mode_sys0__RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  bist_mode_atsc_2:1;
        RBus_UInt32  bist_mode_atsc:1;
        RBus_UInt32  bist_mode_memory_bank_10:1;
        RBus_UInt32  bist_mode_memory_bank_09:1;
        RBus_UInt32  bist_mode_memory_bank_08:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  bist_mode_memory_bank_07_1:1;
        RBus_UInt32  bist_mode_memory_bank_06_3:1;
        RBus_UInt32  bist_mode_memory_bank_06_2:1;
        RBus_UInt32  bist_mode_memory_bank_06_1:1;
    };
}dtv_demod_misc_bist_mode_sys1__RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  drf_bist_mode_memory_bank_05_2:1;
        RBus_UInt32  drf_bist_mode_memory_bank_05_1:1;
        RBus_UInt32  drf_bist_mode_memory_bank_04b_2:1;
        RBus_UInt32  drf_bist_mode_memory_bank_04b:1;
        RBus_UInt32  drf_bist_mode_memory_bank_04a:1;
        RBus_UInt32  drf_bist_mode_memory_bank_03b_2:1;
        RBus_UInt32  drf_bist_mode_memory_bank_03b_1:1;
        RBus_UInt32  drf_bist_mode_memory_bank_03a_3:1;
        RBus_UInt32  drf_bist_mode_memory_bank_03a_2:1;
        RBus_UInt32  drf_bist_mode_memory_bank_03a_1:1;
        RBus_UInt32  drf_bist_mode_memory_bank_02b:1;
        RBus_UInt32  drf_bist_mode_memory_bank_02a:1;
        RBus_UInt32  drf_bist_mode_memory_bank_01_2:1;
        RBus_UInt32  drf_bist_mode_memory_bank_01_1:1;
    };
}dtv_demod_misc_drf_bist_mode_sys0__RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  drf_bist_mode_atsc_2:1;
        RBus_UInt32  drf_bist_mode_atsc:1;
        RBus_UInt32  drf_bist_mode_memory_bank_10:1;
        RBus_UInt32  drf_bist_mode_memory_bank_09:1;
        RBus_UInt32  drf_bist_mode_memory_bank_08:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  drf_bist_mode_memory_bank_07_1:1;
        RBus_UInt32  drf_bist_mode_memory_bank_06_3:1;
        RBus_UInt32  drf_bist_mode_memory_bank_06_2:1;
        RBus_UInt32  drf_bist_mode_memory_bank_06_1:1;
    };
}dtv_demod_misc_drf_bist_mode_sys1__RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  drf_test_resume_memory_bank_05_2:1;
        RBus_UInt32  drf_test_resume_memory_bank_05_1:1;
        RBus_UInt32  drf_test_resume_memory_bank_04b_2:1;
        RBus_UInt32  drf_test_resume_memory_bank_04b:1;
        RBus_UInt32  drf_test_resume_memory_bank_04a:1;
        RBus_UInt32  drf_test_resume_memory_bank_03b_2:1;
        RBus_UInt32  drf_test_resume_memory_bank_03b_1:1;
        RBus_UInt32  drf_test_resume_memory_bank_03a_3:1;
        RBus_UInt32  drf_test_resume_memory_bank_03a_2:1;
        RBus_UInt32  drf_test_resume_memory_bank_03a_1:1;
        RBus_UInt32  drf_test_resume_memory_bank_02b:1;
        RBus_UInt32  drf_test_resume_memory_bank_02a:1;
        RBus_UInt32  drf_test_resume_memory_bank_01_2:1;
        RBus_UInt32  drf_test_resume_memory_bank_01_1:1;
    };
}dtv_demod_misc_drf_test_resume_sys0__RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  drf_test_resume_atsc_2:1;
        RBus_UInt32  drf_test_resume_atsc:1;
        RBus_UInt32  drf_test_resume_memory_bank_10:1;
        RBus_UInt32  drf_test_resume_memory_bank_09:1;
        RBus_UInt32  drf_test_resume_memory_bank_08:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  drf_test_resume_memory_bank_07_1:1;
        RBus_UInt32  drf_test_resume_memory_bank_06_3:1;
        RBus_UInt32  drf_test_resume_memory_bank_06_2:1;
        RBus_UInt32  drf_test_resume_memory_bank_06_1:1;
    };
}dtv_demod_misc_drf_test_resume_sys1__RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  mbist_memory_bank_te:1;
        RBus_UInt32  mbist_memory_bank_dvse:1;
        RBus_UInt32  mbist_memory_bank_dvs:4;
    };
}dtv_demod_misc_dvse_memory_bank_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  mbist_memory_bank_ls:1;
    };
}dtv_demod_misc_ls_memory_bank_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  memory_bank_05_2_bist_done:1;
        RBus_UInt32  memory_bank_05_1_bist_done:1;
        RBus_UInt32  memory_bank_04b_2_bist_done:1;
        RBus_UInt32  memory_bank_04b_bist_done:1;
        RBus_UInt32  memory_bank_04a_bist_done:1;
        RBus_UInt32  memory_bank_03b_2_bist_done:1;
        RBus_UInt32  memory_bank_03b_1_bist_done:1;
        RBus_UInt32  memory_bank_03a_3_bist_done:1;
        RBus_UInt32  memory_bank_03a_2_bist_done:1;
        RBus_UInt32  memory_bank_03a_1_bist_done:1;
        RBus_UInt32  memory_bank_02b_bist_done:1;
        RBus_UInt32  memory_bank_02a_bist_done:1;
        RBus_UInt32  memory_bank_01_2_bist_done:1;
        RBus_UInt32  memory_bank_01_1_bist_done:1;
    };
}dtv_demod_misc_bist_done_sys0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  bist_done_atsc_2:1;
        RBus_UInt32  bist_done_atsc:1;
        RBus_UInt32  memory_bank_10_bist_done:1;
        RBus_UInt32  memory_bank_09_bist_done:1;
        RBus_UInt32  memory_bank_08_bist_done:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  memory_bank_07_1_bist_done:1;
        RBus_UInt32  memory_bank_06_3_bist_done:1;
        RBus_UInt32  memory_bank_06_2_bist_done:1;
        RBus_UInt32  memory_bank_06_1_bist_done:1;
    };
}dtv_demod_misc_bist_done_sys1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  memory_bank_05_2_drf_bist_done:1;
        RBus_UInt32  memory_bank_05_1_drf_bist_done:1;
        RBus_UInt32  memory_bank_04b_2_drf_bist_done:1;
        RBus_UInt32  memory_bank_04b_drf_bist_done:1;
        RBus_UInt32  memory_bank_04a_drf_bist_done:1;
        RBus_UInt32  memory_bank_03b_2_drf_bist_done:1;
        RBus_UInt32  memory_bank_03b_1_drf_bist_done:1;
        RBus_UInt32  memory_bank_03a_3_drf_bist_done:1;
        RBus_UInt32  memory_bank_03a_2_drf_bist_done:1;
        RBus_UInt32  memory_bank_03a_1_drf_bist_done:1;
        RBus_UInt32  memory_bank_02b_drf_bist_done:1;
        RBus_UInt32  memory_bank_02a_drf_bist_done:1;
        RBus_UInt32  memory_bank_01_2_drf_bist_done:1;
        RBus_UInt32  memory_bank_01_1_drf_bist_done:1;
    };
}dtv_demod_misc_drf_bist_done_sys0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  drf_bist_done_atsc_2:1;
        RBus_UInt32  drf_bist_done_atsc:1;
        RBus_UInt32  memory_bank_10_drf_bist_done:1;
        RBus_UInt32  memory_bank_09_drf_bist_done:1;
        RBus_UInt32  memory_bank_08_drf_bist_done:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  memory_bank_07_1_drf_bist_done:1;
        RBus_UInt32  memory_bank_06_3_drf_bist_done:1;
        RBus_UInt32  memory_bank_06_2_drf_bist_done:1;
        RBus_UInt32  memory_bank_06_1_drf_bist_done:1;
    };
}dtv_demod_misc_drf_bist_done_sys1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  memory_bank_05_2_bist_fail:1;
        RBus_UInt32  memory_bank_05_1_bist_fail:1;
        RBus_UInt32  memory_bank_04b_2_bist_fail:1;
        RBus_UInt32  memory_bank_04b_bist_fail:1;
        RBus_UInt32  memory_bank_04a_bist_fail:1;
        RBus_UInt32  memory_bank_03b_2_bist_fail:1;
        RBus_UInt32  memory_bank_03b_1_bist_fail:1;
        RBus_UInt32  memory_bank_03a_3_bist_fail:1;
        RBus_UInt32  memory_bank_03a_2_bist_fail:1;
        RBus_UInt32  memory_bank_03a_1_bist_fail:1;
        RBus_UInt32  memory_bank_02b_bist_fail:1;
        RBus_UInt32  memory_bank_02a_bist_fail:1;
        RBus_UInt32  memory_bank_01_2_bist_fail:1;
        RBus_UInt32  memory_bank_01_1_bist_fail:1;
    };
}dtv_demod_misc_bist_fail_sys0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  bist_fail_atsc_2:1;
        RBus_UInt32  bist_fail_atsc:1;
        RBus_UInt32  memory_bank_10_bist_fail:1;
        RBus_UInt32  memory_bank_09_bist_fail:1;
        RBus_UInt32  memory_bank_08_bist_fail:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  memory_bank_07_1_bist_fail:1;
        RBus_UInt32  memory_bank_06_3_bist_fail:1;
        RBus_UInt32  memory_bank_06_2_bist_fail:1;
        RBus_UInt32  memory_bank_06_1_bist_fail:1;
    };
}dtv_demod_misc_bist_fail_sys1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  memory_bank_05_2_drf_bist_fail:1;
        RBus_UInt32  memory_bank_05_1_drf_bist_fail:1;
        RBus_UInt32  memory_bank_04b_2_drf_bist_fail:1;
        RBus_UInt32  memory_bank_04b_drf_bist_fail:1;
        RBus_UInt32  memory_bank_04a_drf_bist_fail:1;
        RBus_UInt32  memory_bank_03b_2_drf_bist_fail:1;
        RBus_UInt32  memory_bank_03b_1_drf_bist_fail:1;
        RBus_UInt32  memory_bank_03a_3_drf_bist_fail:1;
        RBus_UInt32  memory_bank_03a_2_drf_bist_fail:1;
        RBus_UInt32  memory_bank_03a_1_drf_bist_fail:1;
        RBus_UInt32  memory_bank_02b_drf_bist_fail:1;
        RBus_UInt32  memory_bank_02a_drf_bist_fail:1;
        RBus_UInt32  memory_bank_01_2_drf_bist_fail:1;
        RBus_UInt32  memory_bank_01_1_drf_bist_fail:1;
    };
}dtv_demod_misc_drf_bist_fail_sys0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  drf_bist_fail_atsc_2:1;
        RBus_UInt32  drf_bist_fail_atsc:1;
        RBus_UInt32  memory_bank_10_drf_bist_fail:1;
        RBus_UInt32  memory_bank_09_drf_bist_fail:1;
        RBus_UInt32  memory_bank_08_drf_bist_fail:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  memory_bank_07_1_drf_bist_fail:1;
        RBus_UInt32  memory_bank_06_3_drf_bist_fail:1;
        RBus_UInt32  memory_bank_06_2_drf_bist_fail:1;
        RBus_UInt32  memory_bank_06_1_drf_bist_fail:1;
    };
}dtv_demod_misc_drf_bist_fail_sys1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  memory_bank_05_2_drf_start_pause:1;
        RBus_UInt32  memory_bank_05_1_drf_start_pause:1;
        RBus_UInt32  memory_bank_04b_2_drf_start_pause:1;
        RBus_UInt32  memory_bank_04b_drf_start_pause:1;
        RBus_UInt32  memory_bank_04a_drf_start_pause:1;
        RBus_UInt32  memory_bank_03b_2_drf_start_pause:1;
        RBus_UInt32  memory_bank_03b_1_drf_start_pause:1;
        RBus_UInt32  memory_bank_03a_3_drf_start_pause:1;
        RBus_UInt32  memory_bank_03a_2_drf_start_pause:1;
        RBus_UInt32  memory_bank_03a_1_drf_start_pause:1;
        RBus_UInt32  memory_bank_02b_drf_start_pause:1;
        RBus_UInt32  memory_bank_02a_drf_start_pause:1;
        RBus_UInt32  memory_bank_01_2_drf_start_pause:1;
        RBus_UInt32  memory_bank_01_1_drf_start_pause:1;
    };
}dtv_demod_misc_drf_start_pause_sys0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  drf_start_pause_atsc_2:1;
        RBus_UInt32  drf_start_pause_atsc:1;
        RBus_UInt32  memory_bank_10_drf_start_pause:1;
        RBus_UInt32  memory_bank_09_drf_start_pause:1;
        RBus_UInt32  memory_bank_08_drf_start_pause:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  memory_bank_07_1_drf_start_pause:1;
        RBus_UInt32  memory_bank_06_3_drf_start_pause:1;
        RBus_UInt32  memory_bank_06_2_drf_start_pause:1;
        RBus_UInt32  memory_bank_06_1_drf_start_pause:1;
    };
}dtv_demod_misc_drf_start_pause_sys1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  memory_bank_01_2_bist_fail_5:1;
        RBus_UInt32  memory_bank_01_2_bist_fail_4:1;
        RBus_UInt32  memory_bank_01_2_bist_fail_3:1;
        RBus_UInt32  memory_bank_01_2_bist_fail_2:1;
        RBus_UInt32  memory_bank_01_2_bist_fail_1:1;
        RBus_UInt32  memory_bank_01_2_bist_fail_0:1;
        RBus_UInt32  memory_bank_01_1_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_memory_bank_01_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  memory_bank_02a_bist_fail_5:1;
        RBus_UInt32  memory_bank_02a_bist_fail_4:1;
        RBus_UInt32  memory_bank_02a_bist_fail_3:1;
        RBus_UInt32  memory_bank_02a_bist_fail_2:1;
        RBus_UInt32  memory_bank_02a_bist_fail_1:1;
        RBus_UInt32  memory_bank_02a_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_memory_bank_02_a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  memory_bank_02b_bist_fail_5:1;
        RBus_UInt32  memory_bank_02b_bist_fail_4:1;
        RBus_UInt32  memory_bank_02b_bist_fail_3:1;
        RBus_UInt32  memory_bank_02b_bist_fail_2:1;
        RBus_UInt32  memory_bank_02b_bist_fail_1:1;
        RBus_UInt32  memory_bank_02b_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_memory_bank_02_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  memory_bank_03a_3_bist_fail_2:1;
        RBus_UInt32  memory_bank_03a_3_bist_fail_1:1;
        RBus_UInt32  memory_bank_03a_3_bist_fail_0:1;
        RBus_UInt32  memory_bank_03a_2_bist_fail_1:1;
        RBus_UInt32  memory_bank_03a_2_bist_fail_0:1;
        RBus_UInt32  memory_bank_03a_1_bist_fail_1:1;
        RBus_UInt32  memory_bank_03a_1_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_memory_bank_03_a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  memory_bank_03b_2_bist_fail_3:1;
        RBus_UInt32  memory_bank_03b_2_bist_fail_2:1;
        RBus_UInt32  memory_bank_03b_2_bist_fail_1:1;
        RBus_UInt32  memory_bank_03b_2_bist_fail_0:1;
        RBus_UInt32  memory_bank_03b_1_bist_fail_3:1;
        RBus_UInt32  memory_bank_03b_1_bist_fail_2:1;
        RBus_UInt32  memory_bank_03b_1_bist_fail_1:1;
        RBus_UInt32  memory_bank_03b_1_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_memory_bank_03_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  memory_bank_04b_2_bist_fail_4:1;
        RBus_UInt32  memory_bank_04b_2_bist_fail_3:1;
        RBus_UInt32  memory_bank_04b_2_bist_fail_2:1;
        RBus_UInt32  memory_bank_04b_2_bist_fail_1:1;
        RBus_UInt32  memory_bank_04b_2_bist_fail_0:1;
        RBus_UInt32  memory_bank_04b_bist_fail_4:1;
        RBus_UInt32  memory_bank_04b_bist_fail_3:1;
        RBus_UInt32  memory_bank_04b_bist_fail_2:1;
        RBus_UInt32  memory_bank_04b_bist_fail_1:1;
        RBus_UInt32  memory_bank_04b_bist_fail_0:1;
        RBus_UInt32  memory_bank_04a_bist_fail_1:1;
        RBus_UInt32  memory_bank_04a_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_memory_bank_04_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  memory_bank_05_2_bist_fail_2:1;
        RBus_UInt32  memory_bank_05_2_bist_fail_1:1;
        RBus_UInt32  memory_bank_05_2_bist_fail_0:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  memory_bank_05_1_bist_fail_1:1;
        RBus_UInt32  memory_bank_05_1_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_memory_bank_05_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  memory_bank_06_2_bist_fail_2:1;
        RBus_UInt32  memory_bank_06_2_bist_fail_1:1;
        RBus_UInt32  memory_bank_06_2_bist_fail_0:1;
        RBus_UInt32  memory_bank_06_1_bist_fail_4:1;
        RBus_UInt32  memory_bank_06_1_bist_fail_3:1;
        RBus_UInt32  memory_bank_06_1_bist_fail_2:1;
        RBus_UInt32  memory_bank_06_1_bist_fail_1:1;
        RBus_UInt32  memory_bank_06_1_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_memory_bank_06_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  memory_bank_06_3_bist_fail_1:1;
        RBus_UInt32  memory_bank_06_3_bist_fail_0:1;
        RBus_UInt32  memory_bank_06_2_bist_fail_3:1;
    };
}dtv_demod_misc_bist_fail_memory_bank_06_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  memory_bank_07_1_bist_fail_3:1;
        RBus_UInt32  memory_bank_07_1_bist_fail_2:1;
        RBus_UInt32  memory_bank_07_1_bist_fail_1:1;
        RBus_UInt32  memory_bank_07_1_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_memory_bank_07_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  memory_bank_08_bist_fail_8:1;
        RBus_UInt32  memory_bank_08_bist_fail_7:1;
        RBus_UInt32  memory_bank_08_bist_fail_6:1;
        RBus_UInt32  memory_bank_08_bist_fail_5:1;
        RBus_UInt32  memory_bank_08_bist_fail_4:1;
        RBus_UInt32  memory_bank_08_bist_fail_3:1;
        RBus_UInt32  memory_bank_08_bist_fail_2:1;
        RBus_UInt32  memory_bank_08_bist_fail_1:1;
        RBus_UInt32  memory_bank_08_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_memory_bank_08_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  memory_bank_09_bist_fail_7:1;
        RBus_UInt32  memory_bank_09_bist_fail_6:1;
        RBus_UInt32  memory_bank_09_bist_fail_5:1;
        RBus_UInt32  memory_bank_09_bist_fail_4:1;
        RBus_UInt32  memory_bank_09_bist_fail_3:1;
        RBus_UInt32  memory_bank_09_bist_fail_2:1;
        RBus_UInt32  memory_bank_09_bist_fail_1:1;
        RBus_UInt32  memory_bank_09_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_memory_bank_09_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  memory_bank_10_bist_fail_7:1;
        RBus_UInt32  memory_bank_10_bist_fail_6:1;
        RBus_UInt32  memory_bank_10_bist_fail_5:1;
        RBus_UInt32  memory_bank_10_bist_fail_4:1;
        RBus_UInt32  memory_bank_10_bist_fail_3:1;
        RBus_UInt32  memory_bank_10_bist_fail_2:1;
        RBus_UInt32  memory_bank_10_bist_fail_1:1;
        RBus_UInt32  memory_bank_10_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_memory_bank_10_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  atsc_bist_fail_3:1;
        RBus_UInt32  atsc_bist_fail_2:1;
        RBus_UInt32  atsc_bist_fail_1:1;
        RBus_UInt32  atsc_bist_fail_0:1;
        RBus_UInt32  atsc_2_bist_fail_5:1;
        RBus_UInt32  atsc_2_bist_fail_4:1;
        RBus_UInt32  atsc_2_bist_fail_3:1;
        RBus_UInt32  atsc_2_bist_fail_2:1;
        RBus_UInt32  atsc_2_bist_fail_1:1;
        RBus_UInt32  atsc_2_bist_fail_0:1;
    };
}dtv_demod_misc_bist_fail_atsc_2_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  memory_bank_01_2_drf_bist_fail_5:1;
        RBus_UInt32  memory_bank_01_2_drf_bist_fail_4:1;
        RBus_UInt32  memory_bank_01_2_drf_bist_fail_3:1;
        RBus_UInt32  memory_bank_01_2_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_01_2_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_01_2_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_01_1_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_01_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  memory_bank_02a_drf_bist_fail_5:1;
        RBus_UInt32  memory_bank_02a_drf_bist_fail_4:1;
        RBus_UInt32  memory_bank_02a_drf_bist_fail_3:1;
        RBus_UInt32  memory_bank_02a_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_02a_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_02a_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_02_a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  memory_bank_02b_drf_bist_fail_5:1;
        RBus_UInt32  memory_bank_02b_drf_bist_fail_4:1;
        RBus_UInt32  memory_bank_02b_drf_bist_fail_3:1;
        RBus_UInt32  memory_bank_02b_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_02b_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_02b_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_02_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  memory_bank_03a_3_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_03a_3_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_03a_3_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_03a_2_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_03a_2_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_03a_1_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_03a_1_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_03_a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  memory_bank_03b_2_drf_bist_fail_3:1;
        RBus_UInt32  memory_bank_03b_2_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_03b_2_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_03b_2_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_03b_1_drf_bist_fail_3:1;
        RBus_UInt32  memory_bank_03b_1_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_03b_1_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_03b_1_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_03_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  memory_bank_04b_2_drf_bist_fail_4:1;
        RBus_UInt32  memory_bank_04b_2_drf_bist_fail_3:1;
        RBus_UInt32  memory_bank_04b_2_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_04b_2_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_04b_2_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_04b_drf_bist_fail_4:1;
        RBus_UInt32  memory_bank_04b_drf_bist_fail_3:1;
        RBus_UInt32  memory_bank_04b_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_04b_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_04b_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_04a_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_04a_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_04_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  memory_bank_05_2_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_05_2_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_05_2_drf_bist_fail_0:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  memory_bank_05_1_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_05_1_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_05_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  memory_bank_06_2_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_06_2_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_06_2_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_06_1_drf_bist_fail_4:1;
        RBus_UInt32  memory_bank_06_1_drf_bist_fail_3:1;
        RBus_UInt32  memory_bank_06_1_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_06_1_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_06_1_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_06_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  memory_bank_06_3_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_06_3_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_06_2_drf_bist_fail_3:1;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_06_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  res2:1;
        RBus_UInt32  memory_bank_07_1_drf_bist_fail_3:1;
        RBus_UInt32  memory_bank_07_1_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_07_1_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_07_1_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_07_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  memory_bank_08_drf_bist_fail_8:1;
        RBus_UInt32  memory_bank_08_drf_bist_fail_7:1;
        RBus_UInt32  memory_bank_08_drf_bist_fail_6:1;
        RBus_UInt32  memory_bank_08_drf_bist_fail_5:1;
        RBus_UInt32  memory_bank_08_drf_bist_fail_4:1;
        RBus_UInt32  memory_bank_08_drf_bist_fail_3:1;
        RBus_UInt32  memory_bank_08_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_08_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_08_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_08_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  memory_bank_09_drf_bist_fail_7:1;
        RBus_UInt32  memory_bank_09_drf_bist_fail_6:1;
        RBus_UInt32  memory_bank_09_drf_bist_fail_5:1;
        RBus_UInt32  memory_bank_09_drf_bist_fail_4:1;
        RBus_UInt32  memory_bank_09_drf_bist_fail_3:1;
        RBus_UInt32  memory_bank_09_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_09_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_09_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_09_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  memory_bank_10_drf_bist_fail_7:1;
        RBus_UInt32  memory_bank_10_drf_bist_fail_6:1;
        RBus_UInt32  memory_bank_10_drf_bist_fail_5:1;
        RBus_UInt32  memory_bank_10_drf_bist_fail_4:1;
        RBus_UInt32  memory_bank_10_drf_bist_fail_3:1;
        RBus_UInt32  memory_bank_10_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_10_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_10_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_10_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  atsc_drf_bist_fail_3:1;
        RBus_UInt32  atsc_drf_bist_fail_2:1;
        RBus_UInt32  atsc_drf_bist_fail_1:1;
        RBus_UInt32  atsc_drf_bist_fail_0:1;
        RBus_UInt32  atsc_2_drf_bist_fail_5:1;
        RBus_UInt32  atsc_2_drf_bist_fail_4:1;
        RBus_UInt32  atsc_2_drf_bist_fail_3:1;
        RBus_UInt32  atsc_2_drf_bist_fail_2:1;
        RBus_UInt32  atsc_2_drf_bist_fail_1:1;
        RBus_UInt32  atsc_2_drf_bist_fail_0:1;
    };
}dtv_demod_misc_drf_bist_fail_atsc_2_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  mbist_isdbt_iter_2b_bist_mode:1;
        RBus_UInt32  mbist_isdbt2b_bist_mode:1;
        RBus_UInt32  mbist_isdbt_iter_2p_bist_mode:1;
        RBus_UInt32  mbist_isdbt_iter_2_bist_mode:1;
        RBus_UInt32  mbist_isdbt_iter_1_bist_mode:1;
        RBus_UInt32  mbist_isdbt5_bist_mode:1;
        RBus_UInt32  mbist_isdbt4_bist_mode:1;
        RBus_UInt32  mbist_isdbt3_bist_mode:1;
        RBus_UInt32  mbist_isdbt2_bist_mode:1;
        RBus_UInt32  mbist_isdbt1_bist_mode:1;
    };
}dtv_demod_misc_isdbt_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  mbist_isdbt_iter_2b_drf_bist_mode:1;
        RBus_UInt32  mbist_isdbt2b_drf_bist_mode:1;
        RBus_UInt32  mbist_isdbt_iter_2p_drf_bist_mode:1;
        RBus_UInt32  mbist_isdbt_iter_2_drf_bist_mode:1;
        RBus_UInt32  mbist_isdbt_iter_1_drf_bist_mode:1;
        RBus_UInt32  mbist_isdbt5_drf_bist_mode:1;
        RBus_UInt32  mbist_isdbt4_drf_bist_mode:1;
        RBus_UInt32  mbist_isdbt3_drf_bist_mode:1;
        RBus_UInt32  mbist_isdbt2_drf_bist_mode:1;
        RBus_UInt32  mbist_isdbt1_drf_bist_mode:1;
    };
}dtv_demod_misc_isdbt_drf_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  mbist_isdbt_iter_2b_drf_test_resume:1;
        RBus_UInt32  mbist_isdbt2b_drf_test_resume:1;
        RBus_UInt32  mbist_isdbt_iter_2p_drf_test_resume:1;
        RBus_UInt32  mbist_isdbt_iter_2_drf_test_resume:1;
        RBus_UInt32  mbist_isdbt_iter_1_drf_test_resume:1;
        RBus_UInt32  mbist_isdbt5_drf_test_resume:1;
        RBus_UInt32  mbist_isdbt4_drf_test_resume:1;
        RBus_UInt32  mbist_isdbt3_drf_test_resume:1;
        RBus_UInt32  mbist_isdbt2_drf_test_resume:1;
        RBus_UInt32  mbist_isdbt1_drf_test_resume:1;
    };
}dtv_demod_misc_isdbt_drf_test_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  mbist_isdbt_iter_2b_drf_start_pause:1;
        RBus_UInt32  mbist_isdbt2b_drf_start_pause:1;
        RBus_UInt32  mbist_isdbt_iter_2p_drf_start_pause:1;
        RBus_UInt32  mbist_isdbt_iter_2_drf_start_pause:1;
        RBus_UInt32  mbist_isdbt_iter_1_drf_start_pause:1;
        RBus_UInt32  mbist_isdbt5_drf_start_pause:1;
        RBus_UInt32  mbist_isdbt4_drf_start_pause:1;
        RBus_UInt32  mbist_isdbt3_drf_start_pause:1;
        RBus_UInt32  mbist_isdbt2_drf_start_pause:1;
        RBus_UInt32  mbist_isdbt1_drf_start_pause:1;
    };
}dtv_demod_misc_isdbt_drf_start_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  mbist_isdbt_iter_2b_bist_done:1;
        RBus_UInt32  mbist_isdbt2b_bist_done:1;
        RBus_UInt32  mbist_isdbt_iter_2p_bist_done:1;
        RBus_UInt32  mbist_isdbt_iter_2_bist_done:1;
        RBus_UInt32  mbist_isdbt_iter_1_bist_done:1;
        RBus_UInt32  mbist_isdbt5_bist_done:1;
        RBus_UInt32  mbist_isdbt4_bist_done:1;
        RBus_UInt32  mbist_isdbt3_bist_done:1;
        RBus_UInt32  mbist_isdbt2_bist_done:1;
        RBus_UInt32  mbist_isdbt1_bist_done:1;
    };
}dtv_demod_misc_isdbt_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  mbist_isdbt_iter_2b_drf_bist_done:1;
        RBus_UInt32  mbist_isdbt2b_drf_bist_done:1;
        RBus_UInt32  mbist_isdbt_iter_2p_drf_bist_done:1;
        RBus_UInt32  mbist_isdbt_iter_2_drf_bist_done:1;
        RBus_UInt32  mbist_isdbt_iter_1_drf_bist_done:1;
        RBus_UInt32  mbist_isdbt5_drf_bist_done:1;
        RBus_UInt32  mbist_isdbt4_drf_bist_done:1;
        RBus_UInt32  mbist_isdbt3_drf_bist_done:1;
        RBus_UInt32  mbist_isdbt2_drf_bist_done:1;
        RBus_UInt32  mbist_isdbt1_drf_bist_done:1;
    };
}dtv_demod_misc_isdbt_drf_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  mbist_isdbt_iter_2b_bist_fail:1;
        RBus_UInt32  mbist_isdbt2b_bist_fail:1;
        RBus_UInt32  mbist_isdbt_iter_2p_bist_fail:1;
        RBus_UInt32  mbist_isdbt_iter_2_bist_fail:1;
        RBus_UInt32  mbist_isdbt_iter_1_bist_fail:1;
        RBus_UInt32  mbist_isdbt5_bist_fail:1;
        RBus_UInt32  mbist_isdbt4_bist_fail:1;
        RBus_UInt32  mbist_isdbt3_bist_fail:1;
        RBus_UInt32  mbist_isdbt2_bist_fail:1;
        RBus_UInt32  mbist_isdbt1_bist_fail:1;
    };
}dtv_demod_misc_isdbt_bist_fail0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  mbist_isdbt_iter_2p_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt_iter_2p_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt_iter_2b_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt_iter_2b_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt_iter_2_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt_iter_2_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt_iter_1_bist_fail_3:1;
        RBus_UInt32  mbist_isdbt_iter_1_bist_fail_2:1;
        RBus_UInt32  mbist_isdbt_iter_1_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt_iter_1_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt5_bist_fail_5:1;
        RBus_UInt32  mbist_isdbt5_bist_fail_4:1;
        RBus_UInt32  mbist_isdbt5_bist_fail_3:1;
        RBus_UInt32  mbist_isdbt5_bist_fail_2:1;
        RBus_UInt32  mbist_isdbt5_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt5_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt4_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt4_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt3_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt3_bist_fail_0:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  mbist_isdbt1_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt1_bist_fail_0:1;
    };
}dtv_demod_misc_isdbt_bist_fail1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  mbist_isdbt_iter_2b_drf_bist_fail:1;
        RBus_UInt32  mbist_isdbt2b_drf_bist_fail:1;
        RBus_UInt32  mbist_isdbt_iter_2p_drf_bist_fail:1;
        RBus_UInt32  mbist_isdbt_iter_2_drf_bist_fail:1;
        RBus_UInt32  mbist_isdbt_iter_1_drf_bist_fail:1;
        RBus_UInt32  mbist_isdbt5_drf_bist_fail:1;
        RBus_UInt32  mbist_isdbt4_drf_bist_fail:1;
        RBus_UInt32  mbist_isdbt3_drf_bist_fail:1;
        RBus_UInt32  mbist_isdbt2_drf_bist_fail:1;
        RBus_UInt32  mbist_isdbt1_drf_bist_fail:1;
    };
}dtv_demod_misc_isdbt_drf_bist_fail0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  mbist_isdbt_iter_2p_drf_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt_iter_2p_drf_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt_iter_2b_drf_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt_iter_2b_drf_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt_iter_2_drf_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt_iter_2_drf_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt_iter_1_drf_bist_fail_3:1;
        RBus_UInt32  mbist_isdbt_iter_1_drf_bist_fail_2:1;
        RBus_UInt32  mbist_isdbt_iter_1_drf_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt_iter_1_drf_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt5_drf_bist_fail_5:1;
        RBus_UInt32  mbist_isdbt5_drf_bist_fail_4:1;
        RBus_UInt32  mbist_isdbt5_drf_bist_fail_3:1;
        RBus_UInt32  mbist_isdbt5_drf_bist_fail_2:1;
        RBus_UInt32  mbist_isdbt5_drf_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt5_drf_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt4_drf_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt4_drf_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt3_drf_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt3_drf_bist_fail_0:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  mbist_isdbt1_drf_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt1_drf_bist_fail_0:1;
    };
}dtv_demod_misc_isdbt_drf_bist_fail1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mbist_isdbt5_dvse_1:1;
        RBus_UInt32  mbist_isdbt5_dvse_0:1;
        RBus_UInt32  mbist_isdbt4_dvse:1;
        RBus_UInt32  mbist_isdbt3_dvse:1;
        RBus_UInt32  mbist_isdbt2_dvse_1:1;
        RBus_UInt32  mbist_isdbt2_dvse_0:1;
        RBus_UInt32  mbist_isdbt1_dvse_1:1;
        RBus_UInt32  mbist_isdbt1_dvse_0:1;
    };
}dtv_demod_misc_isdbt_dvse0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mbist_isdbt_iter_2_dvse_2:1;
        RBus_UInt32  mbist_isdbt_iter_2_dvse_1:1;
        RBus_UInt32  mbist_isdbt_iter_2_dvse_0:1;
        RBus_UInt32  mbist_isdbt_iter_1_dvse_3:1;
        RBus_UInt32  mbist_isdbt_iter_1_dvse_2:1;
        RBus_UInt32  mbist_isdbt_iter_1_dvse_1:1;
        RBus_UInt32  mbist_isdbt_iter_1_dvse_0:1;
        RBus_UInt32  mbist_isdbt5_dvse_2:1;
    };
}dtv_demod_misc_isdbt_dvse1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  mbist_isdbt_iter_2p_dvse:1;
        RBus_UInt32  mbist_isdbt_iter_2_dvse_3:1;
    };
}dtv_demod_misc_isdbt_bist_dvse2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mbist_isdbt1_dvs_1:4;
        RBus_UInt32  mbist_isdbt1_dvs_0:4;
    };
}dtv_demod_misc_isdbt_bist_dvs0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mbist_isdbt2_dvs_1:4;
        RBus_UInt32  mbist_isdbt2_dvs_0:4;
    };
}dtv_demod_misc_isdbt_bist_dvs1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mbist_isdbt4_dvs:4;
        RBus_UInt32  mbist_isdbt3_dvs:4;
    };
}dtv_demod_misc_isdbt_bist_dvs2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mbist_isdbt5_dvs_1:4;
        RBus_UInt32  mbist_isdbt5_dvs_0:4;
    };
}dtv_demod_misc_isdbt_bist_dvs3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mbist_isdbt_iter_1_dvs_0:4;
        RBus_UInt32  mbist_isdbt5_dvs_2:4;
    };
}dtv_demod_misc_isdbt_bist_dvs4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mbist_isdbt_iter_1_dvs_2:4;
        RBus_UInt32  mbist_isdbt_iter_1_dvs_1:4;
    };
}dtv_demod_misc_isdbt_bist_dvs5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mbist_isdbt_iter_2_dvs_0:4;
        RBus_UInt32  mbist_isdbt_iter_1_dvs_3:4;
    };
}dtv_demod_misc_isdbt_bist_dvs6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mbist_isdbt_iter_2_dvs_2:4;
        RBus_UInt32  mbist_isdbt_iter_2_dvs_1:4;
    };
}dtv_demod_misc_isdbt_bist_dvs7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mbist_isdbt_iter_2p_dvs:4;
        RBus_UInt32  mbist_isdbt_iter_2_dvs_3:4;
    };
}dtv_demod_misc_isdbt_bist_dvs8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_fft_read_enable:1;
        RBus_UInt32  res1:17;
        RBus_UInt32  atb_fft_read_start_addr:14;
    };
}dtv_demod_misc_atb_fft_read_func_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  atb_fft_read_data:22;
    };
}dtv_demod_misc_atb_fft_read_func_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  hdic_2_bist_mode:1;
        RBus_UInt32  hdic_bist_mode:1;
    };
}dtv_demod_misc_bist_mode_hdic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  hdic_2_drf_bist_mode:1;
        RBus_UInt32  hdic_drf_bist_mode:1;
    };
}dtv_demod_misc_drf_bist_mode_hdic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  hdic_2_drf_test_resume:1;
        RBus_UInt32  hdic_drf_test_resume:1;
    };
}dtv_demod_misc_drf_test_resume_hdic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  mbist_hdic_dvse:1;
        RBus_UInt32  mbist_hdic_dvs:4;
    };
}dtv_demod_misc_dvse_hdic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  mbist_hdic_ls:1;
    };
}dtv_demod_misc_ls_hdic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  hdic_2_bist_done:1;
        RBus_UInt32  hdic_bist_done:1;
    };
}dtv_demod_misc_bist_done_hdic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  hdic_2_drf_bist_done:1;
        RBus_UInt32  hdic_drf_bist_done:1;
    };
}dtv_demod_misc_drf_bist_done_hdic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  hdic_2_bist_fail_1:1;
        RBus_UInt32  hdic_2_bist_fail_0:1;
        RBus_UInt32  hdic_2_bist_fail:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  hdic_bist_fail_3:1;
        RBus_UInt32  hdic_bist_fail_2:1;
        RBus_UInt32  hdic_bist_fail_1:1;
        RBus_UInt32  hdic_bist_fail_0:1;
        RBus_UInt32  hdic_bist_fail:1;
    };
}dtv_demod_misc_bist_fail_hdic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  hdic_2_drf_bist_fail_1:1;
        RBus_UInt32  hdic_2_drf_bist_fail_0:1;
        RBus_UInt32  hdic_2_drf_bist_fail:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  hdic_drf_bist_fail_3:1;
        RBus_UInt32  hdic_drf_bist_fail_2:1;
        RBus_UInt32  hdic_drf_bist_fail_1:1;
        RBus_UInt32  hdic_drf_bist_fail_0:1;
        RBus_UInt32  hdic_drf_bist_fail:1;
    };
}dtv_demod_misc_drf_bist_fail_hdic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  hdic_2_drf_start_pause:1;
        RBus_UInt32  hdic_drf_start_pause:1;
    };
}dtv_demod_misc_drf_start_pause_hdic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  bisr_rstn_memory_bank_07_2:1;
    };
}dtv_demod_misc_bisr_rstn_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  drf_bisr_mode_memory_bank_07_2:1;
    };
}dtv_demod_misc_drf_bisr_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  drf_bisr_test_resume_memory_bank_07_2:1;
    };
}dtv_demod_misc_drf_bisr_test_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  second_run_en_memory_bank_07_2:1;
    };
}dtv_demod_misc_bisr_second_run_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  hold_remap_memory_bank_07_2:1;
    };
}dtv_demod_misc_bisr_hold_remap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  memory_bank_07_2_bisr_done:1;
    };
}dtv_demod_misc_bisr_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  memory_bank_07_2_bisr_fail:1;
    };
}dtv_demod_misc_bisr_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  memory_bank_07_2_drf_bisr_fail_0:1;
        RBus_UInt32  memory_bank_07_2_bisr_out:8;
        RBus_UInt32  memory_bank_07_2_bisr_fail_0:1;
    };
}dtv_demod_misc_bisr_fail_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  memory_bank_07_2_bisr_repaired:1;
    };
}dtv_demod_misc_bisr_repare_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  memory_bank_07_2_drf_bisr_done:1;
    };
}dtv_demod_misc_bisr_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  memory_bank_07_2_drf_bisr_start_pause:1;
    };
}dtv_demod_misc_bisr_drf_start_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  memory_bank_07_2_drf_bisr_fail:1;
    };
}dtv_demod_misc_bisr_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  demod_tp_out_enable:1;
    };
}dtv_demod_misc_demod_tp_out_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  demod_data_valid:1;
        RBus_UInt32  atb_demod_data_q:12;
        RBus_UInt32  atb_demod_data_i:12;
    };
}dtv_demod_misc_demod_data_in_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  demod_cc2_agc_sel:1;
        RBus_UInt32  demod_cc2_tp_sel:1;
    };
}dtv_demod_misc_demod_cc2_sel_RBUS;

#else //apply LITTLE_ENDIAN

//======DTV_DEMOD_MISC register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  atb_wrapper_addr_offset:28;
    };
}dtv_demod_misc_atb_wrapper_addr_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_wrapper_wcmd_limit_dc:4;
        RBus_UInt32  atb_wrapper_rcmd_limit_dc:4;
        RBus_UInt32  atb_wrapper_cmd_limit:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  atb_wrapper_wcmd_limit_atb:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  atb_wrapper_rcmd_limit_atb:5;
        RBus_UInt32  atb_adc_data_unsigned:1;
        RBus_UInt32  atb_wrapper_reset_flow_en:1;
        RBus_UInt32  atb_wrapper_reset_sync_atb_en:1;
    };
}dtv_demod_misc_atb_wrapper_cmd_limit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_wrapper_cfifo_full_dc:1;
        RBus_UInt32  atb_wrapper_cfifo_full_atb:1;
        RBus_UInt32  atb_wrapper_cfifo_empty_dc:1;
        RBus_UInt32  atb_wrapper_cfifo_empty_atbw:1;
        RBus_UInt32  atb_wrapper_cfifo_empty_atbr:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  atb_wrapper_rfifo_full:1;
        RBus_UInt32  atb_wrapper_rfifo_empty:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  atb_wrapper_wfifo_full:1;
        RBus_UInt32  atb_wrapper_wfifo_empty:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  row_val_ptr:8;
        RBus_UInt32  cache_overflow:1;
        RBus_UInt32  res4:7;
    };
}dtv_demod_misc_atb_wrapper_fifo_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_wrapper_dc_rcmd_cnt:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  atb_wrapper_dc_wcmd_cnt:5;
        RBus_UInt32  res2:19;
    };
}dtv_demod_misc_atb_wrapper_dccmd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_wrapper_debug_sel:4;
        RBus_UInt32  atb_wrapper_debugclk_sel:1;
        RBus_UInt32  res1:27;
    };
}dtv_demod_misc_atb_wrapper_debug_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_wrapper_debug_data:31;
        RBus_UInt32  res1:1;
    };
}dtv_demod_misc_atb_wrapper_dc_cmd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_wrapper_t2dit_addr0:12;
        RBus_UInt32  atb_wrapper_t2dit_addr1:12;
        RBus_UInt32  atb_wrapper_read_delay:4;
        RBus_UInt32  atb_wrapper_cache_en:1;
        RBus_UInt32  res1:3;
    };
}dtv_demod_misc_atb_wrapper_t2_dit_addr_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_wrapper_t2dit_addr2:12;
        RBus_UInt32  atb_wrapper_t2dit_addr3:12;
        RBus_UInt32  res1:8;
    };
}dtv_demod_misc_atb_wrapper_t2_dit_addr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_mode_atb_wrap:1;
        RBus_UInt32  res1:31;
    };
}dtv_demod_misc_bist_mode_atb_wrap__RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_bist_mode_atb_wrap:1;
        RBus_UInt32  res1:31;
    };
}dtv_demod_misc_drf_bist_mode_atb_wrap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_test_resume_atb_wrap:1;
        RBus_UInt32  res1:31;
    };
}dtv_demod_misc_drf_test_resume_atb_wrap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_atb_wrap_dvs:4;
        RBus_UInt32  mbist_atb_wrap_dvse:1;
        RBus_UInt32  res1:27;
    };
}dtv_demod_misc_dvse_atb_sys_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_atb_wrap_ls:1;
        RBus_UInt32  res1:31;
    };
}dtv_demod_misc_ls_atb_sys_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_wrap_bist_done:1;
        RBus_UInt32  res1:31;
    };
}dtv_demod_misc_bist_done_atb_wrap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_wrap_drf_bist_done:1;
        RBus_UInt32  res1:31;
    };
}dtv_demod_misc_drf_bist_done_atb_wrap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_wrap_bist_fail:1;
        RBus_UInt32  atb_wrap_bist_fail_0:1;
        RBus_UInt32  atb_wrap_bist_fail_1:1;
        RBus_UInt32  res1:29;
    };
}dtv_demod_misc_bist_fail_atb_wrap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_wrap_drf_bist_fail:1;
        RBus_UInt32  atb_wrap_drf_bist_fail_0:1;
        RBus_UInt32  atb_wrap_drf_bist_fail_1:1;
        RBus_UInt32  res1:29;
    };
}dtv_demod_misc_drf_bist_fail_atb_wrap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_wrap_drf_start_pause:1;
        RBus_UInt32  res1:31;
    };
}dtv_demod_misc_drf_start_pause_atb_wrap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_en:1;
        RBus_UInt32  res1:31;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_sw_reset:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  atb_ldpc_rom_dma_sw_reset_done:1;
        RBus_UInt32  res2:27;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_cfg_wr:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  atb_ldpc_rom_dma_cfg_rd:1;
        RBus_UInt32  res2:27;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_cfg_addr:8;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_cfg_rdata:32;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_cfg_wdata:32;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_error_status:8;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_err_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_dbg_en:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  atb_ldpc_rom_dma_dbg_rdy:1;
        RBus_UInt32  res2:27;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_dbg_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_dbg_cr:6;
        RBus_UInt32  res1:26;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_dbg_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_dbg_data_sel:10;
        RBus_UInt32  res1:22;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_dbg_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_dbg_data_255_224:32;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_dbg_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_dbg_data_223_192:32;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_dbg_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_dbg_data_191_160:32;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_dbg_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_dbg_data_159_128:32;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_dbg_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_dbg_data_127_96:32;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_dbg_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_dbg_data_95_64:32;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_dbg_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_dbg_data_63_32:32;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_dbg_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_rom_dma_dbg_data_31_0:32;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_dbg_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_atb_ldpc_hmatrix_pre_bist_mode:1;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_bist_mode:1;
        RBus_UInt32  res1:30;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_mbist_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_atb_ldpc_hmatrix_pre_bist_done:1;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_bist_done:1;
        RBus_UInt32  res1:30;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_mbist_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_atb_ldpc_hmatrix_pre_bist_fail:1;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_bist_fail:1;
        RBus_UInt32  res1:30;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_mbist_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_atb_ldpc_hmatrix_pre_drf_bist_mode:1;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_drf_bist_mode:1;
        RBus_UInt32  res1:30;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_mbist_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_atb_ldpc_hmatrix_pre_drf_bist_done:1;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_drf_bist_done:1;
        RBus_UInt32  res1:30;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_mbist_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_atb_ldpc_hmatrix_pre_drf_bist_fail:1;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_drf_bist_fail:1;
        RBus_UInt32  res1:30;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_mbist_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_atb_ldpc_hmatrix_pre_drf_start_pause:1;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_drf_start_pause:1;
        RBus_UInt32  res1:30;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_mbist_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_atb_ldpc_hmatrix_pre_drf_test_resume:1;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_drf_test_resume:1;
        RBus_UInt32  res1:30;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_mbist_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_atb_ldpc_hmatrix_pre_ls:1;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_ls:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_pre_test1:1;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_test1:1;
        RBus_UInt32  res2:10;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_pre_rm:4;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_pre_rme:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_rm:4;
        RBus_UInt32  mbist_atb_ldpc_hmatrix_rme:1;
        RBus_UInt32  res4:3;
    };
}dtv_demod_misc_atb_ldpc_rom_dma_mbist_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dtv_demod_debug_sel:4;
        RBus_UInt32  res1:28;
    };
}dtv_demod_misc_dtv_demod_debug_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dtv_demod_int_en:1;
        RBus_UInt32  res1:31;
    };
}dtv_demod_misc_dtv_demod_int_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_dvbt_en:1;
        RBus_UInt32  atb_dvbs_en:1;
        RBus_UInt32  atb_dvbc_en:1;
        RBus_UInt32  atb_dvbc2_en:1;
        RBus_UInt32  atb_i2c_adr_sel:3;
        RBus_UInt32  atb_use_i2c:1;
        RBus_UInt32  atb_i2c_sda_pol:1;
        RBus_UInt32  res1:23;
    };
}dtv_demod_misc_dtv_demod_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ce1_bist_mode:1;
        RBus_UInt32  atb_ce2_bist_mode:1;
        RBus_UInt32  atb_ce3_bist_mode:1;
        RBus_UInt32  atb_ce4_bist_mode:1;
        RBus_UInt32  atb_fft1_bist_mode:1;
        RBus_UInt32  atb_fft2_bist_mode:1;
        RBus_UInt32  atb_fft4_bist_mode:1;
        RBus_UInt32  atb_fft5_bist_mode:1;
        RBus_UInt32  atb_ldpc_bist_mode:1;
        RBus_UInt32  atb_ldpc2_bist_mode:1;
        RBus_UInt32  atb_sync_bist_mode:1;
        RBus_UInt32  atb_tdi_bist_mode:1;
        RBus_UInt32  atb_tdi2_bist_mode:1;
        RBus_UInt32  atb_vit_bist_mode:1;
        RBus_UInt32  atb_vit2_bist_mode:1;
        RBus_UInt32  atb_rd_cache_bist_mode:1;
        RBus_UInt32  atb_rd_cache2_bist_mode:1;
        RBus_UInt32  res1:15;
    };
}dtv_demod_misc_bist_mode_atb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ce1_drf_bist_mode:1;
        RBus_UInt32  atb_ce2_drf_bist_mode:1;
        RBus_UInt32  atb_ce3_drf_bist_mode:1;
        RBus_UInt32  atb_ce4_drf_bist_mode:1;
        RBus_UInt32  atb_fft1_drf_bist_mode:1;
        RBus_UInt32  atb_fft2_drf_bist_mode:1;
        RBus_UInt32  atb_fft4_drf_bist_mode:1;
        RBus_UInt32  atb_fft5_drf_bist_mode:1;
        RBus_UInt32  atb_ldpc_drf_bist_mode:1;
        RBus_UInt32  atb_ldpc2_drf_bist_mode:1;
        RBus_UInt32  atb_sync_drf_bist_mode:1;
        RBus_UInt32  atb_tdi_drf_bist_mode:1;
        RBus_UInt32  atb_tdi2_drf_bist_mode:1;
        RBus_UInt32  atb_vit_drf_bist_mode:1;
        RBus_UInt32  atb_vit2_drf_bist_mode:1;
        RBus_UInt32  atb_rd_cache_drf_bist_mode:1;
        RBus_UInt32  atb_rd_cache2_drf_bist_mode:1;
        RBus_UInt32  res1:15;
    };
}dtv_demod_misc_drf_bist_mode_atb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ce1_drf_test_resume:1;
        RBus_UInt32  atb_ce2_drf_test_resume:1;
        RBus_UInt32  atb_ce3_drf_test_resume:1;
        RBus_UInt32  atb_ce4_drf_test_resume:1;
        RBus_UInt32  atb_fft1_drf_test_resume:1;
        RBus_UInt32  atb_fft2_drf_test_resume:1;
        RBus_UInt32  atb_fft4_drf_test_resume:1;
        RBus_UInt32  atb_fft5_drf_test_resume:1;
        RBus_UInt32  atb_ldpc_drf_test_resume:1;
        RBus_UInt32  atb_ldpc2_drf_test_resume:1;
        RBus_UInt32  atb_sync_drf_test_resume:1;
        RBus_UInt32  atb_tdi_drf_test_resume:1;
        RBus_UInt32  atb_tdi2_drf_test_resume:1;
        RBus_UInt32  atb_vit_drf_test_resume:1;
        RBus_UInt32  atb_vit2_drf_test_resume:1;
        RBus_UInt32  atb_rd_cache_drf_test_resume:1;
        RBus_UInt32  atb_rd_cache2_drf_test_resume:1;
        RBus_UInt32  res1:15;
    };
}dtv_demod_misc_drf_test_resume_atb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ce1_bist_done:1;
        RBus_UInt32  atb_ce2_bist_done:1;
        RBus_UInt32  atb_ce3_bist_done:1;
        RBus_UInt32  atb_ce4_bist_done:1;
        RBus_UInt32  atb_fft1_bist_done:1;
        RBus_UInt32  atb_fft2_bist_done:1;
        RBus_UInt32  atb_fft4_bist_done:1;
        RBus_UInt32  atb_fft5_bist_done:1;
        RBus_UInt32  atb_ldpc_bist_done:1;
        RBus_UInt32  atb_ldpc2_bist_done:1;
        RBus_UInt32  atb_sync_bist_done:1;
        RBus_UInt32  atb_tdi_bist_done:1;
        RBus_UInt32  atb_tdi2_bist_done:1;
        RBus_UInt32  atb_vit_bist_done:1;
        RBus_UInt32  atb_vit2_bist_done:1;
        RBus_UInt32  atb_rd_cache_bist_done:1;
        RBus_UInt32  atb_rd_cache2_bist_done:1;
        RBus_UInt32  res1:15;
    };
}dtv_demod_misc_bist_done_atb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ce1_drf_bist_done:1;
        RBus_UInt32  atb_ce2_drf_bist_done:1;
        RBus_UInt32  atb_ce3_drf_bist_done:1;
        RBus_UInt32  atb_ce4_drf_bist_done:1;
        RBus_UInt32  atb_fft1_drf_bist_done:1;
        RBus_UInt32  atb_fft2_drf_bist_done:1;
        RBus_UInt32  atb_fft4_drf_bist_done:1;
        RBus_UInt32  atb_fft5_drf_bist_done:1;
        RBus_UInt32  atb_ldpc_drf_bist_done:1;
        RBus_UInt32  atb_ldpc2_drf_bist_done:1;
        RBus_UInt32  atb_sync_drf_bist_done:1;
        RBus_UInt32  atb_tdi_drf_bist_done:1;
        RBus_UInt32  atb_tdi2_drf_bist_done:1;
        RBus_UInt32  atb_vit_drf_bist_done:1;
        RBus_UInt32  atb_vit2_drf_bist_done:1;
        RBus_UInt32  atb_rd_cache_drf_bist_done:1;
        RBus_UInt32  atb_rd_cache2_drf_bist_done:1;
        RBus_UInt32  res1:15;
    };
}dtv_demod_misc_drf_bist_done_atb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ce1_bist_fail:1;
        RBus_UInt32  atb_ce2_bist_fail:1;
        RBus_UInt32  atb_ce3_bist_fail:1;
        RBus_UInt32  atb_ce4_bist_fail:1;
        RBus_UInt32  atb_fft1_bist_fail:1;
        RBus_UInt32  atb_fft2_bist_fail:1;
        RBus_UInt32  atb_fft4_bist_fail:1;
        RBus_UInt32  atb_fft5_bist_fail:1;
        RBus_UInt32  atb_ldpc_bist_fail:1;
        RBus_UInt32  atb_ldpc2_bist_fail:1;
        RBus_UInt32  atb_sync_bist_fail:1;
        RBus_UInt32  atb_tdi_bist_fail:1;
        RBus_UInt32  atb_tdi2_bist_fail:1;
        RBus_UInt32  atb_vit_bist_fail:1;
        RBus_UInt32  atb_vit2_bist_fail:1;
        RBus_UInt32  atb_rd_cache_bist_fail:1;
        RBus_UInt32  atb_rd_cache2_bist_fail:1;
        RBus_UInt32  res1:15;
    };
}dtv_demod_misc_bist_fail_atb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ce1_drf_bist_fail:1;
        RBus_UInt32  atb_ce2_drf_bist_fail:1;
        RBus_UInt32  atb_ce3_drf_bist_fail:1;
        RBus_UInt32  atb_ce4_drf_bist_fail:1;
        RBus_UInt32  atb_fft1_drf_bist_fail:1;
        RBus_UInt32  atb_fft2_drf_bist_fail:1;
        RBus_UInt32  atb_fft4_drf_bist_fail:1;
        RBus_UInt32  atb_fft5_drf_bist_fail:1;
        RBus_UInt32  atb_ldpc_drf_bist_fail:1;
        RBus_UInt32  atb_ldpc2_drf_bist_fail:1;
        RBus_UInt32  atb_sync_drf_bist_fail:1;
        RBus_UInt32  atb_tdi_drf_bist_fail:1;
        RBus_UInt32  atb_tdi2_drf_bist_fail:1;
        RBus_UInt32  atb_vit_drf_bist_fail:1;
        RBus_UInt32  atb_vit2_drf_bist_fail:1;
        RBus_UInt32  atb_rd_cache_drf_bist_fail:1;
        RBus_UInt32  atb_rd_cache2_drf_bist_fail:1;
        RBus_UInt32  res1:15;
    };
}dtv_demod_misc_drf_bist_fail_atb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ce1_drf_start_pause:1;
        RBus_UInt32  atb_ce2_drf_start_pause:1;
        RBus_UInt32  atb_ce3_drf_start_pause:1;
        RBus_UInt32  atb_ce4_drf_start_pause:1;
        RBus_UInt32  atb_fft1_drf_start_pause:1;
        RBus_UInt32  atb_fft2_drf_start_pause:1;
        RBus_UInt32  atb_fft4_drf_start_pause:1;
        RBus_UInt32  atb_fft5_drf_start_pause:1;
        RBus_UInt32  atb_ldpc_drf_start_pause:1;
        RBus_UInt32  atb_ldpc2_drf_start_pause:1;
        RBus_UInt32  atb_sync_drf_start_pause:1;
        RBus_UInt32  atb_tdi_drf_start_pause:1;
        RBus_UInt32  atb_tdi2_drf_start_pause:1;
        RBus_UInt32  atb_vit_drf_start_pause:1;
        RBus_UInt32  atb_vit2_drf_start_pause:1;
        RBus_UInt32  atb_rd_cache_drf_start_pause:1;
        RBus_UInt32  atb_rd_cache2_drf_start_pause:1;
        RBus_UInt32  res1:15;
    };
}dtv_demod_misc_drf_start_pause_atb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ce1_bist_fail_0:1;
        RBus_UInt32  atb_ce1_bist_fail_1:1;
        RBus_UInt32  atb_ce1_bist_fail_2:1;
        RBus_UInt32  res1:29;
    };
}dtv_demod_misc_bist_fail_atb_ce1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ce2_bist_fail_0:1;
        RBus_UInt32  atb_ce2_bist_fail_1:1;
        RBus_UInt32  atb_ce2_bist_fail_2:1;
        RBus_UInt32  res1:29;
    };
}dtv_demod_misc_bist_fail_atb_ce2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ce3_bist_fail_0:1;
        RBus_UInt32  atb_ce3_bist_fail_1:1;
        RBus_UInt32  atb_ce3_bist_fail_2:1;
        RBus_UInt32  atb_ce3_bist_fail_3:1;
        RBus_UInt32  res1:28;
    };
}dtv_demod_misc_bist_fail_atb_ce3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ce4_bist_fail_0:1;
        RBus_UInt32  atb_ce4_bist_fail_1:1;
        RBus_UInt32  atb_ce4_bist_fail_2:1;
        RBus_UInt32  atb_ce4_bist_fail_3:1;
        RBus_UInt32  atb_ce4_bist_fail_4:1;
        RBus_UInt32  atb_ce4_bist_fail_5:1;
        RBus_UInt32  res1:26;
    };
}dtv_demod_misc_bist_fail_atb_ce4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_fft1_bist_fail_0:1;
        RBus_UInt32  atb_fft1_bist_fail_1:1;
        RBus_UInt32  atb_fft1_bist_fail_2:1;
        RBus_UInt32  atb_fft1_bist_fail_3:1;
        RBus_UInt32  atb_fft1_bist_fail_4:1;
        RBus_UInt32  atb_fft1_bist_fail_5:1;
        RBus_UInt32  atb_fft1_bist_fail_6:1;
        RBus_UInt32  atb_fft1_bist_fail_7:1;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_bist_fail_atb_fft1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_fft2_bist_fail_0:1;
        RBus_UInt32  atb_fft2_bist_fail_1:1;
        RBus_UInt32  atb_fft2_bist_fail_2:1;
        RBus_UInt32  atb_fft2_bist_fail_3:1;
        RBus_UInt32  atb_fft2_bist_fail_4:1;
        RBus_UInt32  atb_fft2_bist_fail_5:1;
        RBus_UInt32  atb_fft2_bist_fail_6:1;
        RBus_UInt32  atb_fft2_bist_fail_7:1;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_bist_fail_atb_fft2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_fft4_bist_fail_0:1;
        RBus_UInt32  atb_fft4_bist_fail_1:1;
        RBus_UInt32  atb_fft4_bist_fail_2:1;
        RBus_UInt32  atb_fft4_bist_fail_3:1;
        RBus_UInt32  atb_fft4_bist_fail_4:1;
        RBus_UInt32  atb_fft4_bist_fail_5:1;
        RBus_UInt32  atb_fft4_bist_fail_6:1;
        RBus_UInt32  atb_fft4_bist_fail_7:1;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_bist_fail_atb_fft4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_fft5_bist_fail_0:1;
        RBus_UInt32  atb_fft5_bist_fail_1:1;
        RBus_UInt32  atb_fft5_bist_fail_2:1;
        RBus_UInt32  atb_fft5_bist_fail_3:1;
        RBus_UInt32  atb_fft5_bist_fail_4:1;
        RBus_UInt32  atb_fft5_bist_fail_5:1;
        RBus_UInt32  atb_fft5_bist_fail_6:1;
        RBus_UInt32  atb_fft5_bist_fail_7:1;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_bist_fail_atb_fft5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_bist_fail_0:1;
        RBus_UInt32  atb_ldpc_bist_fail_1:1;
        RBus_UInt32  atb_ldpc2_bist_fail_0:1;
        RBus_UInt32  atb_ldpc2_bist_fail_1:1;
        RBus_UInt32  res1:28;
    };
}dtv_demod_misc_bist_fail_atb_ldpc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_sync_bist_fail_0:1;
        RBus_UInt32  atb_sync_bist_fail_1:1;
        RBus_UInt32  atb_sync_bist_fail_2:1;
        RBus_UInt32  res1:29;
    };
}dtv_demod_misc_bist_fail_atb_sync_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_tdi_bist_fail_0:1;
        RBus_UInt32  atb_tdi_bist_fail_1:1;
        RBus_UInt32  atb_tdi_bist_fail_2:1;
        RBus_UInt32  atb_tdi_bist_fail_3:1;
        RBus_UInt32  atb_tdi_bist_fail_4:1;
        RBus_UInt32  atb_tdi_bist_fail_5:1;
        RBus_UInt32  atb_tdi_bist_fail_6:1;
        RBus_UInt32  atb_tdi_bist_fail_7:1;
        RBus_UInt32  atb_tdi2_bist_fail_0:1;
        RBus_UInt32  atb_tdi2_bist_fail_1:1;
        RBus_UInt32  res1:22;
    };
}dtv_demod_misc_bist_fail_atb_tdi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_vit_bist_fail_0:1;
        RBus_UInt32  atb_vit_bist_fail_1:1;
        RBus_UInt32  atb_vit_bist_fail_2:1;
        RBus_UInt32  atb_vit_bist_fail_3:1;
        RBus_UInt32  atb_vit_bist_fail_4:1;
        RBus_UInt32  atb_vit_bist_fail_5:1;
        RBus_UInt32  atb_vit_bist_fail_6:1;
        RBus_UInt32  atb_vit2_bist_fail_0:1;
        RBus_UInt32  atb_rd_cache_bist_fail_0:1;
        RBus_UInt32  atb_rd_cache_bist_fail_1:1;
        RBus_UInt32  atb_rd_cache_bist_fail_2:1;
        RBus_UInt32  atb_rd_cache_bist_fail_3:1;
        RBus_UInt32  atb_rd_cache_bist_fail_4:1;
        RBus_UInt32  atb_rd_cache_bist_fail_5:1;
        RBus_UInt32  atb_rd_cache_bist_fail_6:1;
        RBus_UInt32  atb_rd_cache_bist_fail_7:1;
        RBus_UInt32  atb_rd_cache_bist_fail_8:1;
        RBus_UInt32  atb_rd_cache2_bist_fail_0:1;
        RBus_UInt32  atb_rd_cache2_bist_fail_1:1;
        RBus_UInt32  res1:13;
    };
}dtv_demod_misc_bist_fail_atb_vit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ce1_drf_bist_fail_0:1;
        RBus_UInt32  atb_ce1_drf_bist_fail_1:1;
        RBus_UInt32  atb_ce1_drf_bist_fail_2:1;
        RBus_UInt32  res1:29;
    };
}dtv_demod_misc_drf_bist_fail_atb_ce1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ce2_drf_bist_fail_0:1;
        RBus_UInt32  atb_ce2_drf_bist_fail_1:1;
        RBus_UInt32  atb_ce2_drf_bist_fail_2:1;
        RBus_UInt32  res1:29;
    };
}dtv_demod_misc_drf_bist_fail_atb_ce2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ce3_drf_bist_fail_0:1;
        RBus_UInt32  atb_ce3_drf_bist_fail_1:1;
        RBus_UInt32  atb_ce3_drf_bist_fail_2:1;
        RBus_UInt32  atb_ce3_drf_bist_fail_3:1;
        RBus_UInt32  res1:28;
    };
}dtv_demod_misc_drf_bist_fail_atb_ce3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ce4_drf_bist_fail_0:1;
        RBus_UInt32  atb_ce4_drf_bist_fail_1:1;
        RBus_UInt32  atb_ce4_drf_bist_fail_2:1;
        RBus_UInt32  atb_ce4_drf_bist_fail_3:1;
        RBus_UInt32  atb_ce4_drf_bist_fail_4:1;
        RBus_UInt32  atb_ce4_drf_bist_fail_5:1;
        RBus_UInt32  res1:26;
    };
}dtv_demod_misc_drf_bist_fail_atb_ce4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_fft1_drf_bist_fail_0:1;
        RBus_UInt32  atb_fft1_drf_bist_fail_1:1;
        RBus_UInt32  atb_fft1_drf_bist_fail_2:1;
        RBus_UInt32  atb_fft1_drf_bist_fail_3:1;
        RBus_UInt32  atb_fft1_drf_bist_fail_4:1;
        RBus_UInt32  atb_fft1_drf_bist_fail_5:1;
        RBus_UInt32  atb_fft1_drf_bist_fail_6:1;
        RBus_UInt32  atb_fft1_drf_bist_fail_7:1;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_drf_bist_fail_atb_fft1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_fft2_drf_bist_fail_0:1;
        RBus_UInt32  atb_fft2_drf_bist_fail_1:1;
        RBus_UInt32  atb_fft2_drf_bist_fail_2:1;
        RBus_UInt32  atb_fft2_drf_bist_fail_3:1;
        RBus_UInt32  atb_fft2_drf_bist_fail_4:1;
        RBus_UInt32  atb_fft2_drf_bist_fail_5:1;
        RBus_UInt32  atb_fft2_drf_bist_fail_6:1;
        RBus_UInt32  atb_fft2_drf_bist_fail_7:1;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_drf_bist_fail_atb_fft2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_fft4_drf_bist_fail_0:1;
        RBus_UInt32  atb_fft4_drf_bist_fail_1:1;
        RBus_UInt32  atb_fft4_drf_bist_fail_2:1;
        RBus_UInt32  atb_fft4_drf_bist_fail_3:1;
        RBus_UInt32  atb_fft4_drf_bist_fail_4:1;
        RBus_UInt32  atb_fft4_drf_bist_fail_5:1;
        RBus_UInt32  atb_fft4_drf_bist_fail_6:1;
        RBus_UInt32  atb_fft4_drf_bist_fail_7:1;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_drf_bist_fail_atb_fft4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_fft5_drf_bist_fail_0:1;
        RBus_UInt32  atb_fft5_drf_bist_fail_1:1;
        RBus_UInt32  atb_fft5_drf_bist_fail_2:1;
        RBus_UInt32  atb_fft5_drf_bist_fail_3:1;
        RBus_UInt32  atb_fft5_drf_bist_fail_4:1;
        RBus_UInt32  atb_fft5_drf_bist_fail_5:1;
        RBus_UInt32  atb_fft5_drf_bist_fail_6:1;
        RBus_UInt32  atb_fft5_drf_bist_fail_7:1;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_drf_bist_fail_atb_fft5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_ldpc_drf_bist_fail_0:1;
        RBus_UInt32  atb_ldpc_drf_bist_fail_1:1;
        RBus_UInt32  atb_ldpc2_drf_bist_fail_0:1;
        RBus_UInt32  atb_ldpc2_drf_bist_fail_1:1;
        RBus_UInt32  res1:28;
    };
}dtv_demod_misc_drf_bist_fail_atb_ldpc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_sync_drf_bist_fail_0:1;
        RBus_UInt32  atb_sync_drf_bist_fail_1:1;
        RBus_UInt32  atb_sync_drf_bist_fail_2:1;
        RBus_UInt32  res1:29;
    };
}dtv_demod_misc_drf_bist_fail_atb_sync_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_tdi_drf_bist_fail_0:1;
        RBus_UInt32  atb_tdi_drf_bist_fail_1:1;
        RBus_UInt32  atb_tdi_drf_bist_fail_2:1;
        RBus_UInt32  atb_tdi_drf_bist_fail_3:1;
        RBus_UInt32  atb_tdi_drf_bist_fail_4:1;
        RBus_UInt32  atb_tdi_drf_bist_fail_5:1;
        RBus_UInt32  atb_tdi_drf_bist_fail_6:1;
        RBus_UInt32  atb_tdi_drf_bist_fail_7:1;
        RBus_UInt32  atb_tdi2_drf_bist_fail_0:1;
        RBus_UInt32  atb_tdi2_drf_bist_fail_1:1;
        RBus_UInt32  res1:22;
    };
}dtv_demod_misc_drf_bist_fail_atb_tdi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_vit_drf_bist_fail_0:1;
        RBus_UInt32  atb_vit_drf_bist_fail_1:1;
        RBus_UInt32  atb_vit_drf_bist_fail_2:1;
        RBus_UInt32  atb_vit_drf_bist_fail_3:1;
        RBus_UInt32  atb_vit_drf_bist_fail_4:1;
        RBus_UInt32  atb_vit_drf_bist_fail_5:1;
        RBus_UInt32  atb_vit_drf_bist_fail_6:1;
        RBus_UInt32  atb_vit2_drf_bist_fail_0:1;
        RBus_UInt32  atb_rd_cache_drf_bist_fail_0:1;
        RBus_UInt32  atb_rd_cache_drf_bist_fail_1:1;
        RBus_UInt32  atb_rd_cache_drf_bist_fail_2:1;
        RBus_UInt32  atb_rd_cache_drf_bist_fail_3:1;
        RBus_UInt32  atb_rd_cache_drf_bist_fail_4:1;
        RBus_UInt32  atb_rd_cache_drf_bist_fail_5:1;
        RBus_UInt32  atb_rd_cache_drf_bist_fail_6:1;
        RBus_UInt32  atb_rd_cache_drf_bist_fail_7:1;
        RBus_UInt32  atb_rd_cache_drf_bist_fail_8:1;
        RBus_UInt32  atb_rd_cache2_drf_bist_fail_0:1;
        RBus_UInt32  atb_rd_cache2_drf_bist_fail_1:1;
        RBus_UInt32  res1:13;
    };
}dtv_demod_misc_drf_bist_fail_atb_vit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_atb_dvs:4;
        RBus_UInt32  bist_atb_dvse:1;
        RBus_UInt32  bist_atb_te:1;
        RBus_UInt32  res1:26;
    };
}dtv_demod_misc_dvse_atb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_atb_ls:1;
        RBus_UInt32  res1:31;
    };
}dtv_demod_misc_ls_atb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_mode_memory_bank_01_1:1;
        RBus_UInt32  bist_mode_memory_bank_01_2:1;
        RBus_UInt32  bist_mode_memory_bank_02a:1;
        RBus_UInt32  bist_mode_memory_bank_02b:1;
        RBus_UInt32  bist_mode_memory_bank_03a_1:1;
        RBus_UInt32  bist_mode_memory_bank_03a_2:1;
        RBus_UInt32  bist_mode_memory_bank_03a_3:1;
        RBus_UInt32  bist_mode_memory_bank_03b_1:1;
        RBus_UInt32  bist_mode_memory_bank_03b_2:1;
        RBus_UInt32  bist_mode_memory_bank_04a:1;
        RBus_UInt32  bist_mode_memory_bank_04b:1;
        RBus_UInt32  bist_mode_memory_bank_04b_2:1;
        RBus_UInt32  bist_mode_memory_bank_05_1:1;
        RBus_UInt32  bist_mode_memory_bank_05_2:1;
        RBus_UInt32  res1:18;
    };
}dtv_demod_misc_bist_mode_sys0__RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_mode_memory_bank_06_1:1;
        RBus_UInt32  bist_mode_memory_bank_06_2:1;
        RBus_UInt32  bist_mode_memory_bank_06_3:1;
        RBus_UInt32  bist_mode_memory_bank_07_1:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  bist_mode_memory_bank_08:1;
        RBus_UInt32  bist_mode_memory_bank_09:1;
        RBus_UInt32  bist_mode_memory_bank_10:1;
        RBus_UInt32  bist_mode_atsc:1;
        RBus_UInt32  bist_mode_atsc_2:1;
        RBus_UInt32  res2:22;
    };
}dtv_demod_misc_bist_mode_sys1__RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_bist_mode_memory_bank_01_1:1;
        RBus_UInt32  drf_bist_mode_memory_bank_01_2:1;
        RBus_UInt32  drf_bist_mode_memory_bank_02a:1;
        RBus_UInt32  drf_bist_mode_memory_bank_02b:1;
        RBus_UInt32  drf_bist_mode_memory_bank_03a_1:1;
        RBus_UInt32  drf_bist_mode_memory_bank_03a_2:1;
        RBus_UInt32  drf_bist_mode_memory_bank_03a_3:1;
        RBus_UInt32  drf_bist_mode_memory_bank_03b_1:1;
        RBus_UInt32  drf_bist_mode_memory_bank_03b_2:1;
        RBus_UInt32  drf_bist_mode_memory_bank_04a:1;
        RBus_UInt32  drf_bist_mode_memory_bank_04b:1;
        RBus_UInt32  drf_bist_mode_memory_bank_04b_2:1;
        RBus_UInt32  drf_bist_mode_memory_bank_05_1:1;
        RBus_UInt32  drf_bist_mode_memory_bank_05_2:1;
        RBus_UInt32  res1:18;
    };
}dtv_demod_misc_drf_bist_mode_sys0__RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_bist_mode_memory_bank_06_1:1;
        RBus_UInt32  drf_bist_mode_memory_bank_06_2:1;
        RBus_UInt32  drf_bist_mode_memory_bank_06_3:1;
        RBus_UInt32  drf_bist_mode_memory_bank_07_1:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  drf_bist_mode_memory_bank_08:1;
        RBus_UInt32  drf_bist_mode_memory_bank_09:1;
        RBus_UInt32  drf_bist_mode_memory_bank_10:1;
        RBus_UInt32  drf_bist_mode_atsc:1;
        RBus_UInt32  drf_bist_mode_atsc_2:1;
        RBus_UInt32  res2:22;
    };
}dtv_demod_misc_drf_bist_mode_sys1__RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_test_resume_memory_bank_01_1:1;
        RBus_UInt32  drf_test_resume_memory_bank_01_2:1;
        RBus_UInt32  drf_test_resume_memory_bank_02a:1;
        RBus_UInt32  drf_test_resume_memory_bank_02b:1;
        RBus_UInt32  drf_test_resume_memory_bank_03a_1:1;
        RBus_UInt32  drf_test_resume_memory_bank_03a_2:1;
        RBus_UInt32  drf_test_resume_memory_bank_03a_3:1;
        RBus_UInt32  drf_test_resume_memory_bank_03b_1:1;
        RBus_UInt32  drf_test_resume_memory_bank_03b_2:1;
        RBus_UInt32  drf_test_resume_memory_bank_04a:1;
        RBus_UInt32  drf_test_resume_memory_bank_04b:1;
        RBus_UInt32  drf_test_resume_memory_bank_04b_2:1;
        RBus_UInt32  drf_test_resume_memory_bank_05_1:1;
        RBus_UInt32  drf_test_resume_memory_bank_05_2:1;
        RBus_UInt32  res1:18;
    };
}dtv_demod_misc_drf_test_resume_sys0__RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_test_resume_memory_bank_06_1:1;
        RBus_UInt32  drf_test_resume_memory_bank_06_2:1;
        RBus_UInt32  drf_test_resume_memory_bank_06_3:1;
        RBus_UInt32  drf_test_resume_memory_bank_07_1:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  drf_test_resume_memory_bank_08:1;
        RBus_UInt32  drf_test_resume_memory_bank_09:1;
        RBus_UInt32  drf_test_resume_memory_bank_10:1;
        RBus_UInt32  drf_test_resume_atsc:1;
        RBus_UInt32  drf_test_resume_atsc_2:1;
        RBus_UInt32  res2:22;
    };
}dtv_demod_misc_drf_test_resume_sys1__RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_memory_bank_dvs:4;
        RBus_UInt32  mbist_memory_bank_dvse:1;
        RBus_UInt32  mbist_memory_bank_te:1;
        RBus_UInt32  res1:26;
    };
}dtv_demod_misc_dvse_memory_bank_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_memory_bank_ls:1;
        RBus_UInt32  res1:31;
    };
}dtv_demod_misc_ls_memory_bank_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_01_1_bist_done:1;
        RBus_UInt32  memory_bank_01_2_bist_done:1;
        RBus_UInt32  memory_bank_02a_bist_done:1;
        RBus_UInt32  memory_bank_02b_bist_done:1;
        RBus_UInt32  memory_bank_03a_1_bist_done:1;
        RBus_UInt32  memory_bank_03a_2_bist_done:1;
        RBus_UInt32  memory_bank_03a_3_bist_done:1;
        RBus_UInt32  memory_bank_03b_1_bist_done:1;
        RBus_UInt32  memory_bank_03b_2_bist_done:1;
        RBus_UInt32  memory_bank_04a_bist_done:1;
        RBus_UInt32  memory_bank_04b_bist_done:1;
        RBus_UInt32  memory_bank_04b_2_bist_done:1;
        RBus_UInt32  memory_bank_05_1_bist_done:1;
        RBus_UInt32  memory_bank_05_2_bist_done:1;
        RBus_UInt32  res1:18;
    };
}dtv_demod_misc_bist_done_sys0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_06_1_bist_done:1;
        RBus_UInt32  memory_bank_06_2_bist_done:1;
        RBus_UInt32  memory_bank_06_3_bist_done:1;
        RBus_UInt32  memory_bank_07_1_bist_done:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  memory_bank_08_bist_done:1;
        RBus_UInt32  memory_bank_09_bist_done:1;
        RBus_UInt32  memory_bank_10_bist_done:1;
        RBus_UInt32  bist_done_atsc:1;
        RBus_UInt32  bist_done_atsc_2:1;
        RBus_UInt32  res2:22;
    };
}dtv_demod_misc_bist_done_sys1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_01_1_drf_bist_done:1;
        RBus_UInt32  memory_bank_01_2_drf_bist_done:1;
        RBus_UInt32  memory_bank_02a_drf_bist_done:1;
        RBus_UInt32  memory_bank_02b_drf_bist_done:1;
        RBus_UInt32  memory_bank_03a_1_drf_bist_done:1;
        RBus_UInt32  memory_bank_03a_2_drf_bist_done:1;
        RBus_UInt32  memory_bank_03a_3_drf_bist_done:1;
        RBus_UInt32  memory_bank_03b_1_drf_bist_done:1;
        RBus_UInt32  memory_bank_03b_2_drf_bist_done:1;
        RBus_UInt32  memory_bank_04a_drf_bist_done:1;
        RBus_UInt32  memory_bank_04b_drf_bist_done:1;
        RBus_UInt32  memory_bank_04b_2_drf_bist_done:1;
        RBus_UInt32  memory_bank_05_1_drf_bist_done:1;
        RBus_UInt32  memory_bank_05_2_drf_bist_done:1;
        RBus_UInt32  res1:18;
    };
}dtv_demod_misc_drf_bist_done_sys0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_06_1_drf_bist_done:1;
        RBus_UInt32  memory_bank_06_2_drf_bist_done:1;
        RBus_UInt32  memory_bank_06_3_drf_bist_done:1;
        RBus_UInt32  memory_bank_07_1_drf_bist_done:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  memory_bank_08_drf_bist_done:1;
        RBus_UInt32  memory_bank_09_drf_bist_done:1;
        RBus_UInt32  memory_bank_10_drf_bist_done:1;
        RBus_UInt32  drf_bist_done_atsc:1;
        RBus_UInt32  drf_bist_done_atsc_2:1;
        RBus_UInt32  res2:22;
    };
}dtv_demod_misc_drf_bist_done_sys1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_01_1_bist_fail:1;
        RBus_UInt32  memory_bank_01_2_bist_fail:1;
        RBus_UInt32  memory_bank_02a_bist_fail:1;
        RBus_UInt32  memory_bank_02b_bist_fail:1;
        RBus_UInt32  memory_bank_03a_1_bist_fail:1;
        RBus_UInt32  memory_bank_03a_2_bist_fail:1;
        RBus_UInt32  memory_bank_03a_3_bist_fail:1;
        RBus_UInt32  memory_bank_03b_1_bist_fail:1;
        RBus_UInt32  memory_bank_03b_2_bist_fail:1;
        RBus_UInt32  memory_bank_04a_bist_fail:1;
        RBus_UInt32  memory_bank_04b_bist_fail:1;
        RBus_UInt32  memory_bank_04b_2_bist_fail:1;
        RBus_UInt32  memory_bank_05_1_bist_fail:1;
        RBus_UInt32  memory_bank_05_2_bist_fail:1;
        RBus_UInt32  res1:18;
    };
}dtv_demod_misc_bist_fail_sys0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_06_1_bist_fail:1;
        RBus_UInt32  memory_bank_06_2_bist_fail:1;
        RBus_UInt32  memory_bank_06_3_bist_fail:1;
        RBus_UInt32  memory_bank_07_1_bist_fail:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  memory_bank_08_bist_fail:1;
        RBus_UInt32  memory_bank_09_bist_fail:1;
        RBus_UInt32  memory_bank_10_bist_fail:1;
        RBus_UInt32  bist_fail_atsc:1;
        RBus_UInt32  bist_fail_atsc_2:1;
        RBus_UInt32  res2:22;
    };
}dtv_demod_misc_bist_fail_sys1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_01_1_drf_bist_fail:1;
        RBus_UInt32  memory_bank_01_2_drf_bist_fail:1;
        RBus_UInt32  memory_bank_02a_drf_bist_fail:1;
        RBus_UInt32  memory_bank_02b_drf_bist_fail:1;
        RBus_UInt32  memory_bank_03a_1_drf_bist_fail:1;
        RBus_UInt32  memory_bank_03a_2_drf_bist_fail:1;
        RBus_UInt32  memory_bank_03a_3_drf_bist_fail:1;
        RBus_UInt32  memory_bank_03b_1_drf_bist_fail:1;
        RBus_UInt32  memory_bank_03b_2_drf_bist_fail:1;
        RBus_UInt32  memory_bank_04a_drf_bist_fail:1;
        RBus_UInt32  memory_bank_04b_drf_bist_fail:1;
        RBus_UInt32  memory_bank_04b_2_drf_bist_fail:1;
        RBus_UInt32  memory_bank_05_1_drf_bist_fail:1;
        RBus_UInt32  memory_bank_05_2_drf_bist_fail:1;
        RBus_UInt32  res1:18;
    };
}dtv_demod_misc_drf_bist_fail_sys0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_06_1_drf_bist_fail:1;
        RBus_UInt32  memory_bank_06_2_drf_bist_fail:1;
        RBus_UInt32  memory_bank_06_3_drf_bist_fail:1;
        RBus_UInt32  memory_bank_07_1_drf_bist_fail:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  memory_bank_08_drf_bist_fail:1;
        RBus_UInt32  memory_bank_09_drf_bist_fail:1;
        RBus_UInt32  memory_bank_10_drf_bist_fail:1;
        RBus_UInt32  drf_bist_fail_atsc:1;
        RBus_UInt32  drf_bist_fail_atsc_2:1;
        RBus_UInt32  res2:22;
    };
}dtv_demod_misc_drf_bist_fail_sys1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_01_1_drf_start_pause:1;
        RBus_UInt32  memory_bank_01_2_drf_start_pause:1;
        RBus_UInt32  memory_bank_02a_drf_start_pause:1;
        RBus_UInt32  memory_bank_02b_drf_start_pause:1;
        RBus_UInt32  memory_bank_03a_1_drf_start_pause:1;
        RBus_UInt32  memory_bank_03a_2_drf_start_pause:1;
        RBus_UInt32  memory_bank_03a_3_drf_start_pause:1;
        RBus_UInt32  memory_bank_03b_1_drf_start_pause:1;
        RBus_UInt32  memory_bank_03b_2_drf_start_pause:1;
        RBus_UInt32  memory_bank_04a_drf_start_pause:1;
        RBus_UInt32  memory_bank_04b_drf_start_pause:1;
        RBus_UInt32  memory_bank_04b_2_drf_start_pause:1;
        RBus_UInt32  memory_bank_05_1_drf_start_pause:1;
        RBus_UInt32  memory_bank_05_2_drf_start_pause:1;
        RBus_UInt32  res1:18;
    };
}dtv_demod_misc_drf_start_pause_sys0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_06_1_drf_start_pause:1;
        RBus_UInt32  memory_bank_06_2_drf_start_pause:1;
        RBus_UInt32  memory_bank_06_3_drf_start_pause:1;
        RBus_UInt32  memory_bank_07_1_drf_start_pause:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  memory_bank_08_drf_start_pause:1;
        RBus_UInt32  memory_bank_09_drf_start_pause:1;
        RBus_UInt32  memory_bank_10_drf_start_pause:1;
        RBus_UInt32  drf_start_pause_atsc:1;
        RBus_UInt32  drf_start_pause_atsc_2:1;
        RBus_UInt32  res2:22;
    };
}dtv_demod_misc_drf_start_pause_sys1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_01_1_bist_fail_0:1;
        RBus_UInt32  memory_bank_01_2_bist_fail_0:1;
        RBus_UInt32  memory_bank_01_2_bist_fail_1:1;
        RBus_UInt32  memory_bank_01_2_bist_fail_2:1;
        RBus_UInt32  memory_bank_01_2_bist_fail_3:1;
        RBus_UInt32  memory_bank_01_2_bist_fail_4:1;
        RBus_UInt32  memory_bank_01_2_bist_fail_5:1;
        RBus_UInt32  res1:25;
    };
}dtv_demod_misc_bist_fail_memory_bank_01_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_02a_bist_fail_0:1;
        RBus_UInt32  memory_bank_02a_bist_fail_1:1;
        RBus_UInt32  memory_bank_02a_bist_fail_2:1;
        RBus_UInt32  memory_bank_02a_bist_fail_3:1;
        RBus_UInt32  memory_bank_02a_bist_fail_4:1;
        RBus_UInt32  memory_bank_02a_bist_fail_5:1;
        RBus_UInt32  res1:26;
    };
}dtv_demod_misc_bist_fail_memory_bank_02_a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_02b_bist_fail_0:1;
        RBus_UInt32  memory_bank_02b_bist_fail_1:1;
        RBus_UInt32  memory_bank_02b_bist_fail_2:1;
        RBus_UInt32  memory_bank_02b_bist_fail_3:1;
        RBus_UInt32  memory_bank_02b_bist_fail_4:1;
        RBus_UInt32  memory_bank_02b_bist_fail_5:1;
        RBus_UInt32  res1:26;
    };
}dtv_demod_misc_bist_fail_memory_bank_02_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_03a_1_bist_fail_0:1;
        RBus_UInt32  memory_bank_03a_1_bist_fail_1:1;
        RBus_UInt32  memory_bank_03a_2_bist_fail_0:1;
        RBus_UInt32  memory_bank_03a_2_bist_fail_1:1;
        RBus_UInt32  memory_bank_03a_3_bist_fail_0:1;
        RBus_UInt32  memory_bank_03a_3_bist_fail_1:1;
        RBus_UInt32  memory_bank_03a_3_bist_fail_2:1;
        RBus_UInt32  res1:25;
    };
}dtv_demod_misc_bist_fail_memory_bank_03_a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_03b_1_bist_fail_0:1;
        RBus_UInt32  memory_bank_03b_1_bist_fail_1:1;
        RBus_UInt32  memory_bank_03b_1_bist_fail_2:1;
        RBus_UInt32  memory_bank_03b_1_bist_fail_3:1;
        RBus_UInt32  memory_bank_03b_2_bist_fail_0:1;
        RBus_UInt32  memory_bank_03b_2_bist_fail_1:1;
        RBus_UInt32  memory_bank_03b_2_bist_fail_2:1;
        RBus_UInt32  memory_bank_03b_2_bist_fail_3:1;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_bist_fail_memory_bank_03_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_04a_bist_fail_0:1;
        RBus_UInt32  memory_bank_04a_bist_fail_1:1;
        RBus_UInt32  memory_bank_04b_bist_fail_0:1;
        RBus_UInt32  memory_bank_04b_bist_fail_1:1;
        RBus_UInt32  memory_bank_04b_bist_fail_2:1;
        RBus_UInt32  memory_bank_04b_bist_fail_3:1;
        RBus_UInt32  memory_bank_04b_bist_fail_4:1;
        RBus_UInt32  memory_bank_04b_2_bist_fail_0:1;
        RBus_UInt32  memory_bank_04b_2_bist_fail_1:1;
        RBus_UInt32  memory_bank_04b_2_bist_fail_2:1;
        RBus_UInt32  memory_bank_04b_2_bist_fail_3:1;
        RBus_UInt32  memory_bank_04b_2_bist_fail_4:1;
        RBus_UInt32  res1:20;
    };
}dtv_demod_misc_bist_fail_memory_bank_04_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_05_1_bist_fail_0:1;
        RBus_UInt32  memory_bank_05_1_bist_fail_1:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  memory_bank_05_2_bist_fail_0:1;
        RBus_UInt32  memory_bank_05_2_bist_fail_1:1;
        RBus_UInt32  memory_bank_05_2_bist_fail_2:1;
        RBus_UInt32  res2:26;
    };
}dtv_demod_misc_bist_fail_memory_bank_05_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_06_1_bist_fail_0:1;
        RBus_UInt32  memory_bank_06_1_bist_fail_1:1;
        RBus_UInt32  memory_bank_06_1_bist_fail_2:1;
        RBus_UInt32  memory_bank_06_1_bist_fail_3:1;
        RBus_UInt32  memory_bank_06_1_bist_fail_4:1;
        RBus_UInt32  memory_bank_06_2_bist_fail_0:1;
        RBus_UInt32  memory_bank_06_2_bist_fail_1:1;
        RBus_UInt32  memory_bank_06_2_bist_fail_2:1;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_bist_fail_memory_bank_06_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_06_2_bist_fail_3:1;
        RBus_UInt32  memory_bank_06_3_bist_fail_0:1;
        RBus_UInt32  memory_bank_06_3_bist_fail_1:1;
        RBus_UInt32  res1:29;
    };
}dtv_demod_misc_bist_fail_memory_bank_06_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_07_1_bist_fail_0:1;
        RBus_UInt32  memory_bank_07_1_bist_fail_1:1;
        RBus_UInt32  memory_bank_07_1_bist_fail_2:1;
        RBus_UInt32  memory_bank_07_1_bist_fail_3:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:25;
    };
}dtv_demod_misc_bist_fail_memory_bank_07_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_08_bist_fail_0:1;
        RBus_UInt32  memory_bank_08_bist_fail_1:1;
        RBus_UInt32  memory_bank_08_bist_fail_2:1;
        RBus_UInt32  memory_bank_08_bist_fail_3:1;
        RBus_UInt32  memory_bank_08_bist_fail_4:1;
        RBus_UInt32  memory_bank_08_bist_fail_5:1;
        RBus_UInt32  memory_bank_08_bist_fail_6:1;
        RBus_UInt32  memory_bank_08_bist_fail_7:1;
        RBus_UInt32  memory_bank_08_bist_fail_8:1;
        RBus_UInt32  res1:23;
    };
}dtv_demod_misc_bist_fail_memory_bank_08_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_09_bist_fail_0:1;
        RBus_UInt32  memory_bank_09_bist_fail_1:1;
        RBus_UInt32  memory_bank_09_bist_fail_2:1;
        RBus_UInt32  memory_bank_09_bist_fail_3:1;
        RBus_UInt32  memory_bank_09_bist_fail_4:1;
        RBus_UInt32  memory_bank_09_bist_fail_5:1;
        RBus_UInt32  memory_bank_09_bist_fail_6:1;
        RBus_UInt32  memory_bank_09_bist_fail_7:1;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_bist_fail_memory_bank_09_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_10_bist_fail_0:1;
        RBus_UInt32  memory_bank_10_bist_fail_1:1;
        RBus_UInt32  memory_bank_10_bist_fail_2:1;
        RBus_UInt32  memory_bank_10_bist_fail_3:1;
        RBus_UInt32  memory_bank_10_bist_fail_4:1;
        RBus_UInt32  memory_bank_10_bist_fail_5:1;
        RBus_UInt32  memory_bank_10_bist_fail_6:1;
        RBus_UInt32  memory_bank_10_bist_fail_7:1;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_bist_fail_memory_bank_10_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atsc_2_bist_fail_0:1;
        RBus_UInt32  atsc_2_bist_fail_1:1;
        RBus_UInt32  atsc_2_bist_fail_2:1;
        RBus_UInt32  atsc_2_bist_fail_3:1;
        RBus_UInt32  atsc_2_bist_fail_4:1;
        RBus_UInt32  atsc_2_bist_fail_5:1;
        RBus_UInt32  atsc_bist_fail_0:1;
        RBus_UInt32  atsc_bist_fail_1:1;
        RBus_UInt32  atsc_bist_fail_2:1;
        RBus_UInt32  atsc_bist_fail_3:1;
        RBus_UInt32  res1:22;
    };
}dtv_demod_misc_bist_fail_atsc_2_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_01_1_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_01_2_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_01_2_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_01_2_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_01_2_drf_bist_fail_3:1;
        RBus_UInt32  memory_bank_01_2_drf_bist_fail_4:1;
        RBus_UInt32  memory_bank_01_2_drf_bist_fail_5:1;
        RBus_UInt32  res1:25;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_01_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_02a_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_02a_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_02a_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_02a_drf_bist_fail_3:1;
        RBus_UInt32  memory_bank_02a_drf_bist_fail_4:1;
        RBus_UInt32  memory_bank_02a_drf_bist_fail_5:1;
        RBus_UInt32  res1:26;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_02_a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_02b_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_02b_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_02b_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_02b_drf_bist_fail_3:1;
        RBus_UInt32  memory_bank_02b_drf_bist_fail_4:1;
        RBus_UInt32  memory_bank_02b_drf_bist_fail_5:1;
        RBus_UInt32  res1:26;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_02_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_03a_1_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_03a_1_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_03a_2_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_03a_2_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_03a_3_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_03a_3_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_03a_3_drf_bist_fail_2:1;
        RBus_UInt32  res1:25;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_03_a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_03b_1_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_03b_1_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_03b_1_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_03b_1_drf_bist_fail_3:1;
        RBus_UInt32  memory_bank_03b_2_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_03b_2_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_03b_2_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_03b_2_drf_bist_fail_3:1;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_03_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_04a_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_04a_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_04b_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_04b_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_04b_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_04b_drf_bist_fail_3:1;
        RBus_UInt32  memory_bank_04b_drf_bist_fail_4:1;
        RBus_UInt32  memory_bank_04b_2_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_04b_2_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_04b_2_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_04b_2_drf_bist_fail_3:1;
        RBus_UInt32  memory_bank_04b_2_drf_bist_fail_4:1;
        RBus_UInt32  res1:20;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_04_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_05_1_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_05_1_drf_bist_fail_1:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  memory_bank_05_2_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_05_2_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_05_2_drf_bist_fail_2:1;
        RBus_UInt32  res2:26;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_05_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_06_1_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_06_1_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_06_1_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_06_1_drf_bist_fail_3:1;
        RBus_UInt32  memory_bank_06_1_drf_bist_fail_4:1;
        RBus_UInt32  memory_bank_06_2_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_06_2_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_06_2_drf_bist_fail_2:1;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_06_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_06_2_drf_bist_fail_3:1;
        RBus_UInt32  memory_bank_06_3_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_06_3_drf_bist_fail_1:1;
        RBus_UInt32  res1:29;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_06_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_07_1_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_07_1_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_07_1_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_07_1_drf_bist_fail_3:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:27;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_07_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_08_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_08_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_08_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_08_drf_bist_fail_3:1;
        RBus_UInt32  memory_bank_08_drf_bist_fail_4:1;
        RBus_UInt32  memory_bank_08_drf_bist_fail_5:1;
        RBus_UInt32  memory_bank_08_drf_bist_fail_6:1;
        RBus_UInt32  memory_bank_08_drf_bist_fail_7:1;
        RBus_UInt32  memory_bank_08_drf_bist_fail_8:1;
        RBus_UInt32  res1:23;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_08_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_09_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_09_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_09_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_09_drf_bist_fail_3:1;
        RBus_UInt32  memory_bank_09_drf_bist_fail_4:1;
        RBus_UInt32  memory_bank_09_drf_bist_fail_5:1;
        RBus_UInt32  memory_bank_09_drf_bist_fail_6:1;
        RBus_UInt32  memory_bank_09_drf_bist_fail_7:1;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_09_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_10_drf_bist_fail_0:1;
        RBus_UInt32  memory_bank_10_drf_bist_fail_1:1;
        RBus_UInt32  memory_bank_10_drf_bist_fail_2:1;
        RBus_UInt32  memory_bank_10_drf_bist_fail_3:1;
        RBus_UInt32  memory_bank_10_drf_bist_fail_4:1;
        RBus_UInt32  memory_bank_10_drf_bist_fail_5:1;
        RBus_UInt32  memory_bank_10_drf_bist_fail_6:1;
        RBus_UInt32  memory_bank_10_drf_bist_fail_7:1;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_drf_bist_fail_memory_bank_10_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atsc_2_drf_bist_fail_0:1;
        RBus_UInt32  atsc_2_drf_bist_fail_1:1;
        RBus_UInt32  atsc_2_drf_bist_fail_2:1;
        RBus_UInt32  atsc_2_drf_bist_fail_3:1;
        RBus_UInt32  atsc_2_drf_bist_fail_4:1;
        RBus_UInt32  atsc_2_drf_bist_fail_5:1;
        RBus_UInt32  atsc_drf_bist_fail_0:1;
        RBus_UInt32  atsc_drf_bist_fail_1:1;
        RBus_UInt32  atsc_drf_bist_fail_2:1;
        RBus_UInt32  atsc_drf_bist_fail_3:1;
        RBus_UInt32  res1:22;
    };
}dtv_demod_misc_drf_bist_fail_atsc_2_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt1_bist_mode:1;
        RBus_UInt32  mbist_isdbt2_bist_mode:1;
        RBus_UInt32  mbist_isdbt3_bist_mode:1;
        RBus_UInt32  mbist_isdbt4_bist_mode:1;
        RBus_UInt32  mbist_isdbt5_bist_mode:1;
        RBus_UInt32  mbist_isdbt_iter_1_bist_mode:1;
        RBus_UInt32  mbist_isdbt_iter_2_bist_mode:1;
        RBus_UInt32  mbist_isdbt_iter_2p_bist_mode:1;
        RBus_UInt32  mbist_isdbt2b_bist_mode:1;
        RBus_UInt32  mbist_isdbt_iter_2b_bist_mode:1;
        RBus_UInt32  res1:22;
    };
}dtv_demod_misc_isdbt_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt1_drf_bist_mode:1;
        RBus_UInt32  mbist_isdbt2_drf_bist_mode:1;
        RBus_UInt32  mbist_isdbt3_drf_bist_mode:1;
        RBus_UInt32  mbist_isdbt4_drf_bist_mode:1;
        RBus_UInt32  mbist_isdbt5_drf_bist_mode:1;
        RBus_UInt32  mbist_isdbt_iter_1_drf_bist_mode:1;
        RBus_UInt32  mbist_isdbt_iter_2_drf_bist_mode:1;
        RBus_UInt32  mbist_isdbt_iter_2p_drf_bist_mode:1;
        RBus_UInt32  mbist_isdbt2b_drf_bist_mode:1;
        RBus_UInt32  mbist_isdbt_iter_2b_drf_bist_mode:1;
        RBus_UInt32  res1:22;
    };
}dtv_demod_misc_isdbt_drf_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt1_drf_test_resume:1;
        RBus_UInt32  mbist_isdbt2_drf_test_resume:1;
        RBus_UInt32  mbist_isdbt3_drf_test_resume:1;
        RBus_UInt32  mbist_isdbt4_drf_test_resume:1;
        RBus_UInt32  mbist_isdbt5_drf_test_resume:1;
        RBus_UInt32  mbist_isdbt_iter_1_drf_test_resume:1;
        RBus_UInt32  mbist_isdbt_iter_2_drf_test_resume:1;
        RBus_UInt32  mbist_isdbt_iter_2p_drf_test_resume:1;
        RBus_UInt32  mbist_isdbt2b_drf_test_resume:1;
        RBus_UInt32  mbist_isdbt_iter_2b_drf_test_resume:1;
        RBus_UInt32  res1:22;
    };
}dtv_demod_misc_isdbt_drf_test_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt1_drf_start_pause:1;
        RBus_UInt32  mbist_isdbt2_drf_start_pause:1;
        RBus_UInt32  mbist_isdbt3_drf_start_pause:1;
        RBus_UInt32  mbist_isdbt4_drf_start_pause:1;
        RBus_UInt32  mbist_isdbt5_drf_start_pause:1;
        RBus_UInt32  mbist_isdbt_iter_1_drf_start_pause:1;
        RBus_UInt32  mbist_isdbt_iter_2_drf_start_pause:1;
        RBus_UInt32  mbist_isdbt_iter_2p_drf_start_pause:1;
        RBus_UInt32  mbist_isdbt2b_drf_start_pause:1;
        RBus_UInt32  mbist_isdbt_iter_2b_drf_start_pause:1;
        RBus_UInt32  res1:22;
    };
}dtv_demod_misc_isdbt_drf_start_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt1_bist_done:1;
        RBus_UInt32  mbist_isdbt2_bist_done:1;
        RBus_UInt32  mbist_isdbt3_bist_done:1;
        RBus_UInt32  mbist_isdbt4_bist_done:1;
        RBus_UInt32  mbist_isdbt5_bist_done:1;
        RBus_UInt32  mbist_isdbt_iter_1_bist_done:1;
        RBus_UInt32  mbist_isdbt_iter_2_bist_done:1;
        RBus_UInt32  mbist_isdbt_iter_2p_bist_done:1;
        RBus_UInt32  mbist_isdbt2b_bist_done:1;
        RBus_UInt32  mbist_isdbt_iter_2b_bist_done:1;
        RBus_UInt32  res1:22;
    };
}dtv_demod_misc_isdbt_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt1_drf_bist_done:1;
        RBus_UInt32  mbist_isdbt2_drf_bist_done:1;
        RBus_UInt32  mbist_isdbt3_drf_bist_done:1;
        RBus_UInt32  mbist_isdbt4_drf_bist_done:1;
        RBus_UInt32  mbist_isdbt5_drf_bist_done:1;
        RBus_UInt32  mbist_isdbt_iter_1_drf_bist_done:1;
        RBus_UInt32  mbist_isdbt_iter_2_drf_bist_done:1;
        RBus_UInt32  mbist_isdbt_iter_2p_drf_bist_done:1;
        RBus_UInt32  mbist_isdbt2b_drf_bist_done:1;
        RBus_UInt32  mbist_isdbt_iter_2b_drf_bist_done:1;
        RBus_UInt32  res1:22;
    };
}dtv_demod_misc_isdbt_drf_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt1_bist_fail:1;
        RBus_UInt32  mbist_isdbt2_bist_fail:1;
        RBus_UInt32  mbist_isdbt3_bist_fail:1;
        RBus_UInt32  mbist_isdbt4_bist_fail:1;
        RBus_UInt32  mbist_isdbt5_bist_fail:1;
        RBus_UInt32  mbist_isdbt_iter_1_bist_fail:1;
        RBus_UInt32  mbist_isdbt_iter_2_bist_fail:1;
        RBus_UInt32  mbist_isdbt_iter_2p_bist_fail:1;
        RBus_UInt32  mbist_isdbt2b_bist_fail:1;
        RBus_UInt32  mbist_isdbt_iter_2b_bist_fail:1;
        RBus_UInt32  res1:22;
    };
}dtv_demod_misc_isdbt_bist_fail0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt1_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt1_bist_fail_1:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  mbist_isdbt3_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt3_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt4_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt4_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt5_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt5_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt5_bist_fail_2:1;
        RBus_UInt32  mbist_isdbt5_bist_fail_3:1;
        RBus_UInt32  mbist_isdbt5_bist_fail_4:1;
        RBus_UInt32  mbist_isdbt5_bist_fail_5:1;
        RBus_UInt32  mbist_isdbt_iter_1_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt_iter_1_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt_iter_1_bist_fail_2:1;
        RBus_UInt32  mbist_isdbt_iter_1_bist_fail_3:1;
        RBus_UInt32  mbist_isdbt_iter_2_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt_iter_2_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt_iter_2b_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt_iter_2b_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt_iter_2p_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt_iter_2p_bist_fail_1:1;
        RBus_UInt32  res2:8;
    };
}dtv_demod_misc_isdbt_bist_fail1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt1_drf_bist_fail:1;
        RBus_UInt32  mbist_isdbt2_drf_bist_fail:1;
        RBus_UInt32  mbist_isdbt3_drf_bist_fail:1;
        RBus_UInt32  mbist_isdbt4_drf_bist_fail:1;
        RBus_UInt32  mbist_isdbt5_drf_bist_fail:1;
        RBus_UInt32  mbist_isdbt_iter_1_drf_bist_fail:1;
        RBus_UInt32  mbist_isdbt_iter_2_drf_bist_fail:1;
        RBus_UInt32  mbist_isdbt_iter_2p_drf_bist_fail:1;
        RBus_UInt32  mbist_isdbt2b_drf_bist_fail:1;
        RBus_UInt32  mbist_isdbt_iter_2b_drf_bist_fail:1;
        RBus_UInt32  res1:22;
    };
}dtv_demod_misc_isdbt_drf_bist_fail0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt1_drf_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt1_drf_bist_fail_1:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  mbist_isdbt3_drf_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt3_drf_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt4_drf_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt4_drf_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt5_drf_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt5_drf_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt5_drf_bist_fail_2:1;
        RBus_UInt32  mbist_isdbt5_drf_bist_fail_3:1;
        RBus_UInt32  mbist_isdbt5_drf_bist_fail_4:1;
        RBus_UInt32  mbist_isdbt5_drf_bist_fail_5:1;
        RBus_UInt32  mbist_isdbt_iter_1_drf_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt_iter_1_drf_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt_iter_1_drf_bist_fail_2:1;
        RBus_UInt32  mbist_isdbt_iter_1_drf_bist_fail_3:1;
        RBus_UInt32  mbist_isdbt_iter_2_drf_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt_iter_2_drf_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt_iter_2b_drf_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt_iter_2b_drf_bist_fail_1:1;
        RBus_UInt32  mbist_isdbt_iter_2p_drf_bist_fail_0:1;
        RBus_UInt32  mbist_isdbt_iter_2p_drf_bist_fail_1:1;
        RBus_UInt32  res2:8;
    };
}dtv_demod_misc_isdbt_drf_bist_fail1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt1_dvse_0:1;
        RBus_UInt32  mbist_isdbt1_dvse_1:1;
        RBus_UInt32  mbist_isdbt2_dvse_0:1;
        RBus_UInt32  mbist_isdbt2_dvse_1:1;
        RBus_UInt32  mbist_isdbt3_dvse:1;
        RBus_UInt32  mbist_isdbt4_dvse:1;
        RBus_UInt32  mbist_isdbt5_dvse_0:1;
        RBus_UInt32  mbist_isdbt5_dvse_1:1;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_isdbt_dvse0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt5_dvse_2:1;
        RBus_UInt32  mbist_isdbt_iter_1_dvse_0:1;
        RBus_UInt32  mbist_isdbt_iter_1_dvse_1:1;
        RBus_UInt32  mbist_isdbt_iter_1_dvse_2:1;
        RBus_UInt32  mbist_isdbt_iter_1_dvse_3:1;
        RBus_UInt32  mbist_isdbt_iter_2_dvse_0:1;
        RBus_UInt32  mbist_isdbt_iter_2_dvse_1:1;
        RBus_UInt32  mbist_isdbt_iter_2_dvse_2:1;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_isdbt_dvse1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt_iter_2_dvse_3:1;
        RBus_UInt32  mbist_isdbt_iter_2p_dvse:1;
        RBus_UInt32  res1:30;
    };
}dtv_demod_misc_isdbt_bist_dvse2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt1_dvs_0:4;
        RBus_UInt32  mbist_isdbt1_dvs_1:4;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_isdbt_bist_dvs0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt2_dvs_0:4;
        RBus_UInt32  mbist_isdbt2_dvs_1:4;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_isdbt_bist_dvs1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt3_dvs:4;
        RBus_UInt32  mbist_isdbt4_dvs:4;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_isdbt_bist_dvs2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt5_dvs_0:4;
        RBus_UInt32  mbist_isdbt5_dvs_1:4;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_isdbt_bist_dvs3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt5_dvs_2:4;
        RBus_UInt32  mbist_isdbt_iter_1_dvs_0:4;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_isdbt_bist_dvs4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt_iter_1_dvs_1:4;
        RBus_UInt32  mbist_isdbt_iter_1_dvs_2:4;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_isdbt_bist_dvs5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt_iter_1_dvs_3:4;
        RBus_UInt32  mbist_isdbt_iter_2_dvs_0:4;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_isdbt_bist_dvs6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt_iter_2_dvs_1:4;
        RBus_UInt32  mbist_isdbt_iter_2_dvs_2:4;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_isdbt_bist_dvs7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt_iter_2_dvs_3:4;
        RBus_UInt32  mbist_isdbt_iter_2p_dvs:4;
        RBus_UInt32  res1:24;
    };
}dtv_demod_misc_isdbt_bist_dvs8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_fft_read_start_addr:14;
        RBus_UInt32  res1:17;
        RBus_UInt32  atb_fft_read_enable:1;
    };
}dtv_demod_misc_atb_fft_read_func_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_fft_read_data:22;
        RBus_UInt32  res1:10;
    };
}dtv_demod_misc_atb_fft_read_func_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdic_bist_mode:1;
        RBus_UInt32  hdic_2_bist_mode:1;
        RBus_UInt32  res1:30;
    };
}dtv_demod_misc_bist_mode_hdic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdic_drf_bist_mode:1;
        RBus_UInt32  hdic_2_drf_bist_mode:1;
        RBus_UInt32  res1:30;
    };
}dtv_demod_misc_drf_bist_mode_hdic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdic_drf_test_resume:1;
        RBus_UInt32  hdic_2_drf_test_resume:1;
        RBus_UInt32  res1:30;
    };
}dtv_demod_misc_drf_test_resume_hdic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_hdic_dvs:4;
        RBus_UInt32  mbist_hdic_dvse:1;
        RBus_UInt32  res1:27;
    };
}dtv_demod_misc_dvse_hdic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_hdic_ls:1;
        RBus_UInt32  res1:31;
    };
}dtv_demod_misc_ls_hdic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdic_bist_done:1;
        RBus_UInt32  hdic_2_bist_done:1;
        RBus_UInt32  res1:30;
    };
}dtv_demod_misc_bist_done_hdic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdic_drf_bist_done:1;
        RBus_UInt32  hdic_2_drf_bist_done:1;
        RBus_UInt32  res1:30;
    };
}dtv_demod_misc_drf_bist_done_hdic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdic_bist_fail:1;
        RBus_UInt32  hdic_bist_fail_0:1;
        RBus_UInt32  hdic_bist_fail_1:1;
        RBus_UInt32  hdic_bist_fail_2:1;
        RBus_UInt32  hdic_bist_fail_3:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  hdic_2_bist_fail:1;
        RBus_UInt32  hdic_2_bist_fail_0:1;
        RBus_UInt32  hdic_2_bist_fail_1:1;
        RBus_UInt32  res2:21;
    };
}dtv_demod_misc_bist_fail_hdic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdic_drf_bist_fail:1;
        RBus_UInt32  hdic_drf_bist_fail_0:1;
        RBus_UInt32  hdic_drf_bist_fail_1:1;
        RBus_UInt32  hdic_drf_bist_fail_2:1;
        RBus_UInt32  hdic_drf_bist_fail_3:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  hdic_2_drf_bist_fail:1;
        RBus_UInt32  hdic_2_drf_bist_fail_0:1;
        RBus_UInt32  hdic_2_drf_bist_fail_1:1;
        RBus_UInt32  res2:21;
    };
}dtv_demod_misc_drf_bist_fail_hdic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdic_drf_start_pause:1;
        RBus_UInt32  hdic_2_drf_start_pause:1;
        RBus_UInt32  res1:30;
    };
}dtv_demod_misc_drf_start_pause_hdic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bisr_rstn_memory_bank_07_2:1;
        RBus_UInt32  res1:31;
    };
}dtv_demod_misc_bisr_rstn_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_bisr_mode_memory_bank_07_2:1;
        RBus_UInt32  res1:31;
    };
}dtv_demod_misc_drf_bisr_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_bisr_test_resume_memory_bank_07_2:1;
        RBus_UInt32  res1:31;
    };
}dtv_demod_misc_drf_bisr_test_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  second_run_en_memory_bank_07_2:1;
        RBus_UInt32  res1:31;
    };
}dtv_demod_misc_bisr_second_run_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hold_remap_memory_bank_07_2:1;
        RBus_UInt32  res1:31;
    };
}dtv_demod_misc_bisr_hold_remap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_07_2_bisr_done:1;
        RBus_UInt32  res1:31;
    };
}dtv_demod_misc_bisr_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_07_2_bisr_fail:1;
        RBus_UInt32  res1:31;
    };
}dtv_demod_misc_bisr_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_07_2_bisr_fail_0:1;
        RBus_UInt32  memory_bank_07_2_bisr_out:8;
        RBus_UInt32  memory_bank_07_2_drf_bisr_fail_0:1;
        RBus_UInt32  res1:22;
    };
}dtv_demod_misc_bisr_fail_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_07_2_bisr_repaired:1;
        RBus_UInt32  res1:31;
    };
}dtv_demod_misc_bisr_repare_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_07_2_drf_bisr_done:1;
        RBus_UInt32  res1:31;
    };
}dtv_demod_misc_bisr_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_07_2_drf_bisr_start_pause:1;
        RBus_UInt32  res1:31;
    };
}dtv_demod_misc_bisr_drf_start_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  memory_bank_07_2_drf_bisr_fail:1;
        RBus_UInt32  res1:31;
    };
}dtv_demod_misc_bisr_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_tp_out_enable:1;
        RBus_UInt32  res1:31;
    };
}dtv_demod_misc_demod_tp_out_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  atb_demod_data_i:12;
        RBus_UInt32  atb_demod_data_q:12;
        RBus_UInt32  demod_data_valid:1;
        RBus_UInt32  res1:7;
    };
}dtv_demod_misc_demod_data_in_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_cc2_tp_sel:1;
        RBus_UInt32  demod_cc2_agc_sel:1;
        RBus_UInt32  res1:30;
    };
}dtv_demod_misc_demod_cc2_sel_RBUS;




#endif 


#endif 
