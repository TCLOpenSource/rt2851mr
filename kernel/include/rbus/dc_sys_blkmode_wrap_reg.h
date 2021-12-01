/**
* @file Merlin5-DesignSpec-DC_SYS_BlockMode_wrapper
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_DC_SYS_BLKMODE_WRAP_REG_H_
#define _RBUS_DC_SYS_BLKMODE_WRAP_REG_H_

#include "rbus_types.h"



//  DC_SYS_BLKMODE_WRAP Register Address
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX                                  0x180B6500
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_reg_addr                          "0xB80B6500"
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_reg                               0xB80B6500
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_inst_addr                         "0x0000"
#define  set_DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_reg(data)                     (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_reg)=data)
#define  get_DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_reg                           (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_reg))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_dummy_31_24_shift                 (24)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_new_trans_mode_shift              (23)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_space_margin_shift                (9)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_base_pitch_addr_sw_reset_shift    (8)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_index_shift                       (0)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_dummy_31_24_mask                  (0xFF000000)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_new_trans_mode_mask               (0x00800000)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_space_margin_mask                 (0x00003E00)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_base_pitch_addr_sw_reset_mask     (0x00000100)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_index_mask                        (0x0000007F)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_dummy_31_24(data)                 (0xFF000000&((data)<<24))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_new_trans_mode(data)              (0x00800000&((data)<<23))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_space_margin(data)                (0x00003E00&((data)<<9))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_base_pitch_addr_sw_reset(data)    (0x00000100&((data)<<8))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_index(data)                       (0x0000007F&(data))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_get_dummy_31_24(data)             ((0xFF000000&(data))>>24)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_get_new_trans_mode(data)          ((0x00800000&(data))>>23)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_get_space_margin(data)            ((0x00003E00&(data))>>9)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_get_base_pitch_addr_sw_reset(data) ((0x00000100&(data))>>8)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_INDEX_get_index(data)                   (0x0000007F&(data))

#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_BASE_ADDR                              0x180B6504
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_BASE_ADDR_reg_addr                      "0xB80B6504"
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_BASE_ADDR_reg                           0xB80B6504
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_BASE_ADDR_inst_addr                     "0x0001"
#define  set_DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_BASE_ADDR_reg(data)                 (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_BASE_ADDR_reg)=data)
#define  get_DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_BASE_ADDR_reg                       (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_BASE_ADDR_reg))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_BASE_ADDR_base_addr_shift               (4)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_BASE_ADDR_base_addr_mask                (0xFFFFFFF0)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_BASE_ADDR_base_addr(data)               (0xFFFFFFF0&((data)<<4))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_BASE_ADDR_get_base_addr(data)           ((0xFFFFFFF0&(data))>>4)

#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_PITCH_ADDR                             0x180B6508
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_PITCH_ADDR_reg_addr                     "0xB80B6508"
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_PITCH_ADDR_reg                          0xB80B6508
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_PITCH_ADDR_inst_addr                    "0x0002"
#define  set_DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_PITCH_ADDR_reg(data)                (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_PITCH_ADDR_reg)=data)
#define  get_DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_PITCH_ADDR_reg                      (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_PITCH_ADDR_reg))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_PITCH_ADDR_pitch_addr_shift             (5)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_PITCH_ADDR_pitch_addr_mask              (0xFFFFFFE0)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_PITCH_ADDR_pitch_addr(data)             (0xFFFFFFE0&((data)<<5))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_PITCH_ADDR_get_pitch_addr(data)         ((0xFFFFFFE0&(data))>>5)

#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_RSVD                                   0x180B650C
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_RSVD_reg_addr                           "0xB80B650C"
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_RSVD_reg                                0xB80B650C
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_RSVD_inst_addr                          "0x0003"
#define  set_DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_RSVD_reg(data)                      (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_RSVD_reg)=data)
#define  get_DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_RSVD_reg                            (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_RSVD_reg))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_RSVD_dummy_31_0_shift                   (0)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_RSVD_dummy_31_0_mask                    (0xFFFFFFFF)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_RSVD_dummy_31_0(data)                   (0xFFFFFFFF&(data))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_MODE_RSVD_get_dummy_31_0(data)               (0xFFFFFFFF&(data))

#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status                            0x180B6510
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_reg_addr                    "0xB80B6510"
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_reg                         0xB80B6510
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_inst_addr                   "0x0004"
#define  set_DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_reg(data)               (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_reg)=data)
#define  get_DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_reg                     (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_reg))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_fifo_st_sel_shift           (29)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_fifo_st_clr_shift           (24)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_fifo_overflow_shift         (16)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_fifo_underflow_shift        (8)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_seq_burst_len_err_shift     (5)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_index_err_shift             (4)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_blk_lr_err_shift            (3)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_blk_w_err_shift             (2)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_blk_y_err_shift             (1)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_blk_x_err_shift             (0)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_fifo_st_sel_mask            (0x20000000)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_fifo_st_clr_mask            (0x1F000000)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_fifo_overflow_mask          (0x001F0000)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_fifo_underflow_mask         (0x00001F00)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_seq_burst_len_err_mask      (0x00000020)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_index_err_mask              (0x00000010)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_blk_lr_err_mask             (0x00000008)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_blk_w_err_mask              (0x00000004)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_blk_y_err_mask              (0x00000002)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_blk_x_err_mask              (0x00000001)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_fifo_st_sel(data)           (0x20000000&((data)<<29))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_fifo_st_clr(data)           (0x1F000000&((data)<<24))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_fifo_overflow(data)         (0x001F0000&((data)<<16))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_fifo_underflow(data)        (0x00001F00&((data)<<8))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_seq_burst_len_err(data)     (0x00000020&((data)<<5))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_index_err(data)             (0x00000010&((data)<<4))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_blk_lr_err(data)            (0x00000008&((data)<<3))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_blk_w_err(data)             (0x00000004&((data)<<2))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_blk_y_err(data)             (0x00000002&((data)<<1))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_blk_x_err(data)             (0x00000001&(data))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_get_fifo_st_sel(data)       ((0x20000000&(data))>>29)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_get_fifo_st_clr(data)       ((0x1F000000&(data))>>24)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_get_fifo_overflow(data)     ((0x001F0000&(data))>>16)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_get_fifo_underflow(data)    ((0x00001F00&(data))>>8)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_get_seq_burst_len_err(data) ((0x00000020&(data))>>5)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_get_index_err(data)         ((0x00000010&(data))>>4)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_get_blk_lr_err(data)        ((0x00000008&(data))>>3)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_get_blk_w_err(data)         ((0x00000004&(data))>>2)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_get_blk_y_err(data)         ((0x00000002&(data))>>1)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_CMD_Error_status_get_blk_x_err(data)         (0x00000001&(data))

#define  DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_MSB                     0x180B6514
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_MSB_reg_addr             "0xB80B6514"
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_MSB_reg                  0xB80B6514
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_MSB_inst_addr            "0x0005"
#define  set_DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_MSB_reg(data)        (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_MSB_reg)=data)
#define  get_DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_MSB_reg              (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_MSB_reg))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_MSB_err_addcmd_clr_shift (21)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_MSB_addcmd_1_ro_shift    (0)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_MSB_err_addcmd_clr_mask  (0x00200000)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_MSB_addcmd_1_ro_mask     (0x001FFFFF)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_MSB_err_addcmd_clr(data) (0x00200000&((data)<<21))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_MSB_addcmd_1_ro(data)    (0x001FFFFF&(data))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_MSB_get_err_addcmd_clr(data) ((0x00200000&(data))>>21)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_MSB_get_addcmd_1_ro(data) (0x001FFFFF&(data))

#define  DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status                         0x180B6518
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_reg_addr                 "0xB80B6518"
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_reg                      0xB80B6518
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_inst_addr                "0x0006"
#define  set_DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_reg(data)            (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_reg)=data)
#define  get_DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_reg                  (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_reg))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_addcmd_0_ro_shift        (0)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_addcmd_0_ro_mask         (0x7FFFFFFF)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_addcmd_0_ro(data)        (0x7FFFFFFF&(data))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_ADDCMD_Error_status_get_addcmd_0_ro(data)    (0x7FFFFFFF&(data))

#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST                                     0x180B651C
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_reg_addr                             "0xB80B651C"
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_reg                                  0xB80B651C
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_inst_addr                            "0x0007"
#define  set_DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_reg(data)                        (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_reg)=data)
#define  get_DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_reg                              (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_reg))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_rx_mode_shift                     (31)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_rx_start_shift                    (30)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_rx_gated_shift                    (29)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_tx_mode_shift                     (27)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_tx_start_shift                    (26)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_rx_debug_bit_sel_shift            (16)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_rx_fail_bit_status_shift          (3)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_rx_done_shift                     (2)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_rx_err_shift                      (1)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_tx_work_shift                     (0)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_rx_mode_mask                      (0x80000000)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_rx_start_mask                     (0x40000000)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_rx_gated_mask                     (0x20000000)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_tx_mode_mask                      (0x08000000)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_tx_start_mask                     (0x04000000)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_rx_debug_bit_sel_mask             (0x00FF0000)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_rx_fail_bit_status_mask           (0x00000008)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_rx_done_mask                      (0x00000004)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_rx_err_mask                       (0x00000002)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_tx_work_mask                      (0x00000001)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_rx_mode(data)                     (0x80000000&((data)<<31))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_rx_start(data)                    (0x40000000&((data)<<30))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_rx_gated(data)                    (0x20000000&((data)<<29))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_tx_mode(data)                     (0x08000000&((data)<<27))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_tx_start(data)                    (0x04000000&((data)<<26))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_rx_debug_bit_sel(data)            (0x00FF0000&((data)<<16))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_rx_fail_bit_status(data)          (0x00000008&((data)<<3))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_rx_done(data)                     (0x00000004&((data)<<2))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_rx_err(data)                      (0x00000002&((data)<<1))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_sf_tx_work(data)                     (0x00000001&(data))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_get_sf_rx_mode(data)                 ((0x80000000&(data))>>31)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_get_sf_rx_start(data)                ((0x40000000&(data))>>30)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_get_sf_rx_gated(data)                ((0x20000000&(data))>>29)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_get_sf_tx_mode(data)                 ((0x08000000&(data))>>27)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_get_sf_tx_start(data)                ((0x04000000&(data))>>26)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_get_sf_rx_debug_bit_sel(data)        ((0x00FF0000&(data))>>16)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_get_sf_rx_fail_bit_status(data)      ((0x00000008&(data))>>3)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_get_sf_rx_done(data)                 ((0x00000004&(data))>>2)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_get_sf_rx_err(data)                  ((0x00000002&(data))>>1)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_WRAP_ST_get_sf_tx_work(data)                 (0x00000001&(data))

#define  DC_SYS_BLKMODE_WRAP_VE_BLK_FIFO_depth_CTRL                             0x180B6540
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_FIFO_depth_CTRL_reg_addr                     "0xB80B6540"
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_FIFO_depth_CTRL_reg                          0xB80B6540
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_FIFO_depth_CTRL_inst_addr                    "0x0008"
#define  set_DC_SYS_BLKMODE_WRAP_VE_BLK_FIFO_depth_CTRL_reg(data)                (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_BLK_FIFO_depth_CTRL_reg)=data)
#define  get_DC_SYS_BLKMODE_WRAP_VE_BLK_FIFO_depth_CTRL_reg                      (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_BLK_FIFO_depth_CTRL_reg))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_FIFO_depth_CTRL_rcmd_fifo_depth_th_shift     (0)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_FIFO_depth_CTRL_rcmd_fifo_depth_th_mask      (0x000000FF)
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_FIFO_depth_CTRL_rcmd_fifo_depth_th(data)     (0x000000FF&(data))
#define  DC_SYS_BLKMODE_WRAP_VE_BLK_FIFO_depth_CTRL_get_rcmd_fifo_depth_th(data) (0x000000FF&(data))

#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_mode                              0x180B6520
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_mode_reg_addr                      "0xB80B6520"
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_mode_reg                           0xB80B6520
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_mode_inst_addr                     "0x0009"
#define  set_DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_mode_reg(data)                 (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_mode_reg)=data)
#define  get_DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_mode_reg                       (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_mode_reg))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_mode_dc_blk_wrap_rcmd_bist_mode_shift (1)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_mode_dc_blk_wrap_index_bist_mode_shift (0)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_mode_dc_blk_wrap_rcmd_bist_mode_mask (0x00000002)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_mode_dc_blk_wrap_index_bist_mode_mask (0x00000001)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_mode_dc_blk_wrap_rcmd_bist_mode(data) (0x00000002&((data)<<1))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_mode_dc_blk_wrap_index_bist_mode(data) (0x00000001&(data))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_mode_get_dc_blk_wrap_rcmd_bist_mode(data) ((0x00000002&(data))>>1)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_mode_get_dc_blk_wrap_index_bist_mode(data) (0x00000001&(data))

#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail                         0x180B6524
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_reg_addr                 "0xB80B6524"
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_reg                      0xB80B6524
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_inst_addr                "0x000A"
#define  set_DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_reg(data)            (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_reg)=data)
#define  get_DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_reg                  (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_reg))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_dc_blk_wrap_rcmd_bist_fail_group_shift (17)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_dc_blk_wrap_index_bist_fail_group_shift (16)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_dc_blk_wrap_rcmd_bist_fail_shift (9)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_dc_blk_wrap_index_bist_fail_shift (8)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_dc_blk_wrap_rcmd_bist_done_shift (1)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_dc_blk_wrap_index_bist_done_shift (0)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_dc_blk_wrap_rcmd_bist_fail_group_mask (0x00020000)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_dc_blk_wrap_index_bist_fail_group_mask (0x00010000)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_dc_blk_wrap_rcmd_bist_fail_mask (0x00000200)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_dc_blk_wrap_index_bist_fail_mask (0x00000100)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_dc_blk_wrap_rcmd_bist_done_mask (0x00000002)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_dc_blk_wrap_index_bist_done_mask (0x00000001)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_dc_blk_wrap_rcmd_bist_fail_group(data) (0x00020000&((data)<<17))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_dc_blk_wrap_index_bist_fail_group(data) (0x00010000&((data)<<16))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_dc_blk_wrap_rcmd_bist_fail(data) (0x00000200&((data)<<9))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_dc_blk_wrap_index_bist_fail(data) (0x00000100&((data)<<8))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_dc_blk_wrap_rcmd_bist_done(data) (0x00000002&((data)<<1))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_dc_blk_wrap_index_bist_done(data) (0x00000001&(data))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_get_dc_blk_wrap_rcmd_bist_fail_group(data) ((0x00020000&(data))>>17)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_get_dc_blk_wrap_index_bist_fail_group(data) ((0x00010000&(data))>>16)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_get_dc_blk_wrap_rcmd_bist_fail(data) ((0x00000200&(data))>>9)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_get_dc_blk_wrap_index_bist_fail(data) ((0x00000100&(data))>>8)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_get_dc_blk_wrap_rcmd_bist_done(data) ((0x00000002&(data))>>1)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_done_fail_get_dc_blk_wrap_index_bist_done(data) (0x00000001&(data))

#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_mode                               0x180B6528
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_mode_reg_addr                       "0xB80B6528"
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_mode_reg                            0xB80B6528
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_mode_inst_addr                      "0x000B"
#define  set_DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_mode_reg(data)                  (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_mode_reg)=data)
#define  get_DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_mode_reg                        (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_mode_reg))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_mode_dc_blk_wrap_rcmd_drf_resume_shift (9)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_mode_dc_blk_wrap_index_drf_resume_shift (8)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_mode_dc_blk_wrap_rcmd_drf_mode_shift (1)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_mode_dc_blk_wrap_index_drf_mode_shift (0)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_mode_dc_blk_wrap_rcmd_drf_resume_mask (0x00000200)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_mode_dc_blk_wrap_index_drf_resume_mask (0x00000100)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_mode_dc_blk_wrap_rcmd_drf_mode_mask (0x00000002)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_mode_dc_blk_wrap_index_drf_mode_mask (0x00000001)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_mode_dc_blk_wrap_rcmd_drf_resume(data) (0x00000200&((data)<<9))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_mode_dc_blk_wrap_index_drf_resume(data) (0x00000100&((data)<<8))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_mode_dc_blk_wrap_rcmd_drf_mode(data) (0x00000002&((data)<<1))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_mode_dc_blk_wrap_index_drf_mode(data) (0x00000001&(data))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_mode_get_dc_blk_wrap_rcmd_drf_resume(data) ((0x00000200&(data))>>9)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_mode_get_dc_blk_wrap_index_drf_resume(data) ((0x00000100&(data))>>8)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_mode_get_dc_blk_wrap_rcmd_drf_mode(data) ((0x00000002&(data))>>1)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_mode_get_dc_blk_wrap_index_drf_mode(data) (0x00000001&(data))

#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail                          0x180B652C
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_reg_addr                  "0xB80B652C"
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_reg                       0xB80B652C
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_inst_addr                 "0x000C"
#define  set_DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_reg(data)             (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_reg)=data)
#define  get_DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_reg                   (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_reg))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_dc_blk_wrap_rcmd_drf_fail_group_shift (25)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_dc_blk_wrap_index_drf_fail_group_shift (24)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_dc_blk_wrap_rcmd_drf_pause_shift (17)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_dc_blk_wrap_index_drf_pause_shift (16)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_dc_blk_wrap_rcmd_drf_fail_shift (9)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_dc_blk_wrap_index_drf_fail_shift (8)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_dc_blk_wrap_rcmd_drf_done_shift (1)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_dc_blk_wrap_index_drf_done_shift (0)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_dc_blk_wrap_rcmd_drf_fail_group_mask (0x02000000)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_dc_blk_wrap_index_drf_fail_group_mask (0x01000000)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_dc_blk_wrap_rcmd_drf_pause_mask (0x00020000)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_dc_blk_wrap_index_drf_pause_mask (0x00010000)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_dc_blk_wrap_rcmd_drf_fail_mask (0x00000200)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_dc_blk_wrap_index_drf_fail_mask (0x00000100)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_dc_blk_wrap_rcmd_drf_done_mask (0x00000002)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_dc_blk_wrap_index_drf_done_mask (0x00000001)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_dc_blk_wrap_rcmd_drf_fail_group(data) (0x02000000&((data)<<25))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_dc_blk_wrap_index_drf_fail_group(data) (0x01000000&((data)<<24))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_dc_blk_wrap_rcmd_drf_pause(data) (0x00020000&((data)<<17))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_dc_blk_wrap_index_drf_pause(data) (0x00010000&((data)<<16))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_dc_blk_wrap_rcmd_drf_fail(data) (0x00000200&((data)<<9))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_dc_blk_wrap_index_drf_fail(data) (0x00000100&((data)<<8))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_dc_blk_wrap_rcmd_drf_done(data) (0x00000002&((data)<<1))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_dc_blk_wrap_index_drf_done(data) (0x00000001&(data))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_get_dc_blk_wrap_rcmd_drf_fail_group(data) ((0x02000000&(data))>>25)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_get_dc_blk_wrap_index_drf_fail_group(data) ((0x01000000&(data))>>24)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_get_dc_blk_wrap_rcmd_drf_pause(data) ((0x00020000&(data))>>17)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_get_dc_blk_wrap_index_drf_pause(data) ((0x00010000&(data))>>16)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_get_dc_blk_wrap_rcmd_drf_fail(data) ((0x00000200&(data))>>9)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_get_dc_blk_wrap_index_drf_fail(data) ((0x00000100&(data))>>8)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_get_dc_blk_wrap_rcmd_drf_done(data) ((0x00000002&(data))>>1)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_drf_done_fail_get_dc_blk_wrap_index_drf_done(data) (0x00000001&(data))

#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS                         0x180B6530
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_reg_addr                 "0xB80B6530"
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_reg                      0xB80B6530
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_inst_addr                "0x000D"
#define  set_DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_reg(data)            (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_reg)=data)
#define  get_DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_reg                  (*((volatile unsigned int*)DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_reg))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_index_test1_shift (27)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_rcmd_test1_shift (26)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_rcmd_2p_testrwm_shift (25)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_rcmd_rme_shift (24)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_rcmd_rm_shift (20)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dummy_19_17_shift        (17)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_rcmd_ls_shift (16)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_index_rme_shift (8)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_index_rm_shift (4)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dummy_3_1_shift          (1)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_index_ls_shift (0)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_index_test1_mask (0x08000000)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_rcmd_test1_mask (0x04000000)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_rcmd_2p_testrwm_mask (0x02000000)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_rcmd_rme_mask (0x01000000)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_rcmd_rm_mask (0x00F00000)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dummy_19_17_mask         (0x000E0000)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_rcmd_ls_mask (0x00010000)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_index_rme_mask (0x00000100)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_index_rm_mask (0x000000F0)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dummy_3_1_mask           (0x0000000E)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_index_ls_mask (0x00000001)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_index_test1(data) (0x08000000&((data)<<27))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_rcmd_test1(data) (0x04000000&((data)<<26))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_rcmd_2p_testrwm(data) (0x02000000&((data)<<25))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_rcmd_rme(data) (0x01000000&((data)<<24))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_rcmd_rm(data) (0x00F00000&((data)<<20))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dummy_19_17(data)        (0x000E0000&((data)<<17))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_rcmd_ls(data) (0x00010000&((data)<<16))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_index_rme(data) (0x00000100&((data)<<8))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_index_rm(data) (0x000000F0&((data)<<4))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dummy_3_1(data)          (0x0000000E&((data)<<1))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_dc_blk_wrap_index_ls(data) (0x00000001&(data))
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_get_dc_blk_wrap_index_test1(data) ((0x08000000&(data))>>27)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_get_dc_blk_wrap_rcmd_test1(data) ((0x04000000&(data))>>26)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_get_dc_blk_wrap_rcmd_2p_testrwm(data) ((0x02000000&(data))>>25)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_get_dc_blk_wrap_rcmd_rme(data) ((0x01000000&(data))>>24)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_get_dc_blk_wrap_rcmd_rm(data) ((0x00F00000&(data))>>20)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_get_dummy_19_17(data)    ((0x000E0000&(data))>>17)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_get_dc_blk_wrap_rcmd_ls(data) ((0x00010000&(data))>>16)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_get_dc_blk_wrap_index_rme(data) ((0x00000100&(data))>>8)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_get_dc_blk_wrap_index_rm(data) ((0x000000F0&(data))>>4)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_get_dummy_3_1(data)      ((0x0000000E&(data))>>1)
#define  DC_SYS_BLKMODE_WRAP_VE_blk_wrap_bist_RM_RME_LS_get_dc_blk_wrap_index_ls(data) (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======DC_SYS_BLKMODE_WRAP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b6500_31_24:8;
        RBus_UInt32  new_trans_mode:1;
        RBus_UInt32  res1:9;
        RBus_UInt32  space_margin:5;
        RBus_UInt32  base_pitch_addr_sw_reset:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  index:7;
    };
}dc_sys_blkmode_wrap_ve_blk_mode_index_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  base_addr:28;
        RBus_UInt32  res1:4;
    };
}dc_sys_blkmode_wrap_ve_blk_mode_base_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch_addr:27;
        RBus_UInt32  res1:5;
    };
}dc_sys_blkmode_wrap_ve_blk_mode_pitch_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b650c_31_0:32;
    };
}dc_sys_blkmode_wrap_ve_blk_mode_rsvd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  fifo_st_sel:1;
        RBus_UInt32  fifo_st_clr:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  fifo_overflow:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  fifo_underflow:5;
        RBus_UInt32  res4:2;
        RBus_UInt32  seq_burst_len_err:1;
        RBus_UInt32  index_err:1;
        RBus_UInt32  blk_lr_err:1;
        RBus_UInt32  blk_w_err:1;
        RBus_UInt32  blk_y_err:1;
        RBus_UInt32  blk_x_err:1;
    };
}dc_sys_blkmode_wrap_ve_blk_cmd_error_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  err_addcmd_clr:1;
        RBus_UInt32  addcmd_1_ro:21;
    };
}dc_sys_blkmode_wrap_ve_blk_addcmd_error_status_msb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  addcmd_0_ro:31;
    };
}dc_sys_blkmode_wrap_ve_blk_addcmd_error_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sf_rx_mode:1;
        RBus_UInt32  sf_rx_start:1;
        RBus_UInt32  sf_rx_gated:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  sf_tx_mode:1;
        RBus_UInt32  sf_tx_start:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  sf_rx_debug_bit_sel:8;
        RBus_UInt32  res3:12;
        RBus_UInt32  sf_rx_fail_bit_status:1;
        RBus_UInt32  sf_rx_done:1;
        RBus_UInt32  sf_rx_err:1;
        RBus_UInt32  sf_tx_work:1;
    };
}dc_sys_blkmode_wrap_ve_blk_wrap_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rcmd_fifo_depth_th:8;
    };
}dc_sys_blkmode_wrap_ve_blk_fifo_depth_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  dc_blk_wrap_rcmd_bist_mode:1;
        RBus_UInt32  dc_blk_wrap_index_bist_mode:1;
    };
}dc_sys_blkmode_wrap_ve_blk_wrap_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  dc_blk_wrap_rcmd_bist_fail_group:1;
        RBus_UInt32  dc_blk_wrap_index_bist_fail_group:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  dc_blk_wrap_rcmd_bist_fail:1;
        RBus_UInt32  dc_blk_wrap_index_bist_fail:1;
        RBus_UInt32  res3:6;
        RBus_UInt32  dc_blk_wrap_rcmd_bist_done:1;
        RBus_UInt32  dc_blk_wrap_index_bist_done:1;
    };
}dc_sys_blkmode_wrap_ve_blk_wrap_bist_done_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  dc_blk_wrap_rcmd_drf_resume:1;
        RBus_UInt32  dc_blk_wrap_index_drf_resume:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  dc_blk_wrap_rcmd_drf_mode:1;
        RBus_UInt32  dc_blk_wrap_index_drf_mode:1;
    };
}dc_sys_blkmode_wrap_ve_blk_wrap_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  dc_blk_wrap_rcmd_drf_fail_group:1;
        RBus_UInt32  dc_blk_wrap_index_drf_fail_group:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  dc_blk_wrap_rcmd_drf_pause:1;
        RBus_UInt32  dc_blk_wrap_index_drf_pause:1;
        RBus_UInt32  res3:6;
        RBus_UInt32  dc_blk_wrap_rcmd_drf_fail:1;
        RBus_UInt32  dc_blk_wrap_index_drf_fail:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  dc_blk_wrap_rcmd_drf_done:1;
        RBus_UInt32  dc_blk_wrap_index_drf_done:1;
    };
}dc_sys_blkmode_wrap_ve_blk_wrap_drf_done_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dc_blk_wrap_index_test1:1;
        RBus_UInt32  dc_blk_wrap_rcmd_test1:1;
        RBus_UInt32  dc_blk_wrap_rcmd_2p_testrwm:1;
        RBus_UInt32  dc_blk_wrap_rcmd_rme:1;
        RBus_UInt32  dc_blk_wrap_rcmd_rm:4;
        RBus_UInt32  dummy180b6530_19_17:3;
        RBus_UInt32  dc_blk_wrap_rcmd_ls:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  dc_blk_wrap_index_rme:1;
        RBus_UInt32  dc_blk_wrap_index_rm:4;
        RBus_UInt32  dummy180b6530_3_1:3;
        RBus_UInt32  dc_blk_wrap_index_ls:1;
    };
}dc_sys_blkmode_wrap_ve_blk_wrap_bist_rm_rme_ls_RBUS;

#else //apply LITTLE_ENDIAN

//======DC_SYS_BLKMODE_WRAP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  index:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  base_pitch_addr_sw_reset:1;
        RBus_UInt32  space_margin:5;
        RBus_UInt32  res2:9;
        RBus_UInt32  new_trans_mode:1;
        RBus_UInt32  dummy180b6500_31_24:8;
    };
}dc_sys_blkmode_wrap_ve_blk_mode_index_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  base_addr:28;
    };
}dc_sys_blkmode_wrap_ve_blk_mode_base_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  pitch_addr:27;
    };
}dc_sys_blkmode_wrap_ve_blk_mode_pitch_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b650c_31_0:32;
    };
}dc_sys_blkmode_wrap_ve_blk_mode_rsvd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  blk_x_err:1;
        RBus_UInt32  blk_y_err:1;
        RBus_UInt32  blk_w_err:1;
        RBus_UInt32  blk_lr_err:1;
        RBus_UInt32  index_err:1;
        RBus_UInt32  seq_burst_len_err:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  fifo_underflow:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  fifo_overflow:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  fifo_st_clr:5;
        RBus_UInt32  fifo_st_sel:1;
        RBus_UInt32  res4:2;
    };
}dc_sys_blkmode_wrap_ve_blk_cmd_error_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addcmd_1_ro:21;
        RBus_UInt32  err_addcmd_clr:1;
        RBus_UInt32  res1:10;
    };
}dc_sys_blkmode_wrap_ve_blk_addcmd_error_status_msb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addcmd_0_ro:31;
        RBus_UInt32  res1:1;
    };
}dc_sys_blkmode_wrap_ve_blk_addcmd_error_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sf_tx_work:1;
        RBus_UInt32  sf_rx_err:1;
        RBus_UInt32  sf_rx_done:1;
        RBus_UInt32  sf_rx_fail_bit_status:1;
        RBus_UInt32  res1:12;
        RBus_UInt32  sf_rx_debug_bit_sel:8;
        RBus_UInt32  res2:2;
        RBus_UInt32  sf_tx_start:1;
        RBus_UInt32  sf_tx_mode:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  sf_rx_gated:1;
        RBus_UInt32  sf_rx_start:1;
        RBus_UInt32  sf_rx_mode:1;
    };
}dc_sys_blkmode_wrap_ve_blk_wrap_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rcmd_fifo_depth_th:8;
        RBus_UInt32  res1:24;
    };
}dc_sys_blkmode_wrap_ve_blk_fifo_depth_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dc_blk_wrap_index_bist_mode:1;
        RBus_UInt32  dc_blk_wrap_rcmd_bist_mode:1;
        RBus_UInt32  res1:30;
    };
}dc_sys_blkmode_wrap_ve_blk_wrap_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dc_blk_wrap_index_bist_done:1;
        RBus_UInt32  dc_blk_wrap_rcmd_bist_done:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  dc_blk_wrap_index_bist_fail:1;
        RBus_UInt32  dc_blk_wrap_rcmd_bist_fail:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  dc_blk_wrap_index_bist_fail_group:1;
        RBus_UInt32  dc_blk_wrap_rcmd_bist_fail_group:1;
        RBus_UInt32  res3:14;
    };
}dc_sys_blkmode_wrap_ve_blk_wrap_bist_done_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dc_blk_wrap_index_drf_mode:1;
        RBus_UInt32  dc_blk_wrap_rcmd_drf_mode:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  dc_blk_wrap_index_drf_resume:1;
        RBus_UInt32  dc_blk_wrap_rcmd_drf_resume:1;
        RBus_UInt32  res2:22;
    };
}dc_sys_blkmode_wrap_ve_blk_wrap_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dc_blk_wrap_index_drf_done:1;
        RBus_UInt32  dc_blk_wrap_rcmd_drf_done:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  dc_blk_wrap_index_drf_fail:1;
        RBus_UInt32  dc_blk_wrap_rcmd_drf_fail:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  dc_blk_wrap_index_drf_pause:1;
        RBus_UInt32  dc_blk_wrap_rcmd_drf_pause:1;
        RBus_UInt32  res3:6;
        RBus_UInt32  dc_blk_wrap_index_drf_fail_group:1;
        RBus_UInt32  dc_blk_wrap_rcmd_drf_fail_group:1;
        RBus_UInt32  res4:6;
    };
}dc_sys_blkmode_wrap_ve_blk_wrap_drf_done_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dc_blk_wrap_index_ls:1;
        RBus_UInt32  dummy180b6530_3_1:3;
        RBus_UInt32  dc_blk_wrap_index_rm:4;
        RBus_UInt32  dc_blk_wrap_index_rme:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  dc_blk_wrap_rcmd_ls:1;
        RBus_UInt32  dummy180b6530_19_17:3;
        RBus_UInt32  dc_blk_wrap_rcmd_rm:4;
        RBus_UInt32  dc_blk_wrap_rcmd_rme:1;
        RBus_UInt32  dc_blk_wrap_rcmd_2p_testrwm:1;
        RBus_UInt32  dc_blk_wrap_rcmd_test1:1;
        RBus_UInt32  dc_blk_wrap_index_test1:1;
        RBus_UInt32  res2:4;
    };
}dc_sys_blkmode_wrap_ve_blk_wrap_bist_rm_rme_ls_RBUS;




#endif 


#endif 
